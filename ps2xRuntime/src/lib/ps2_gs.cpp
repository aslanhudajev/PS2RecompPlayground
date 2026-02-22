#include "ps2_gs.h"
#include "ps2_memory.h"
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

static inline uint64_t loadLE64(const uint8_t *p)
{
    uint64_t v;
    std::memcpy(&v, p, 8);
    return v;
}

static inline uint32_t bitsPerPixel(uint8_t psm)
{
    switch (psm)
    {
    case GS_PSM_CT32:
    case GS_PSM_Z32:
        return 32;
    case GS_PSM_CT24:
    case GS_PSM_Z24:
        return 32; // stored as 32-bit with upper byte ignored
    case GS_PSM_CT16:
    case GS_PSM_CT16S:
    case GS_PSM_Z16:
    case GS_PSM_Z16S:
        return 16;
    case GS_PSM_T8:
    case GS_PSM_T8H:
        return 8;
    case GS_PSM_T4:
    case GS_PSM_T4HL:
    case GS_PSM_T4HH:
        return 4;
    default:
        return 32;
    }
}

static inline uint32_t fbStride(uint32_t fbw, uint8_t psm)
{
    uint32_t pixelsPerRow = fbw * 64u;
    return pixelsPerRow * (bitsPerPixel(psm) / 8u);
}

static inline int clampInt(int v, int lo, int hi)
{
    if (v < lo) return lo;
    if (v > hi) return hi;
    return v;
}

static inline uint8_t clampU8(int v)
{
    if (v < 0) return 0;
    if (v > 255) return 255;
    return static_cast<uint8_t>(v);
}

// ---------------------------------------------------------------------------
// GS implementation
// ---------------------------------------------------------------------------

GS::GS()
{
    reset();
}

void GS::init(uint8_t *vram, uint32_t vramSize, GSRegisters *privRegs)
{
    m_vram = vram;
    m_vramSize = vramSize;
    m_privRegs = privRegs;
    reset();
}

void GS::reset()
{
    std::memset(m_ctx, 0, sizeof(m_ctx));
    m_prim = {};
    m_curR = 0x80; m_curG = 0x80; m_curB = 0x80; m_curA = 0x80;
    m_curQ = 1.0f;
    m_curS = 0.0f; m_curT = 0.0f;
    m_curU = 0; m_curV = 0;
    m_curFog = 0;
    m_prmodecont = true;
    m_bitbltbuf = {};
    m_trxpos = {};
    m_trxreg = {};
    m_trxdir = 3;
    m_hwregX = 0;
    m_hwregY = 0;
    m_vtxCount = 0;
    m_vtxIndex = 0;

    for (int i = 0; i < 2; ++i)
    {
        m_ctx[i].frame.fbw = 10; // default 640/64
        m_ctx[i].scissor = {0, 639, 0, 447};
        m_ctx[i].xyoffset = {0, 0};
    }
}

GSContext &GS::activeContext()
{
    return m_ctx[m_prim.ctxt ? 1 : 0];
}

void GS::snapshotVRAM()
{
    if (!m_vram || m_vramSize == 0) return;
    std::lock_guard<std::mutex> lock(m_snapshotMutex);
    m_displaySnapshot.resize(m_vramSize);
    std::memcpy(m_displaySnapshot.data(), m_vram, m_vramSize);
}

const uint8_t *GS::lockDisplaySnapshot(uint32_t &outSize)
{
    m_snapshotMutex.lock();
    if (m_displaySnapshot.empty())
    {
        outSize = 0;
        return nullptr;
    }
    outSize = static_cast<uint32_t>(m_displaySnapshot.size());
    return m_displaySnapshot.data();
}

void GS::unlockDisplaySnapshot()
{
    m_snapshotMutex.unlock();
}

uint32_t GS::getLastDisplayBaseBytes() const
{
    return m_lastDisplayBaseBytes;
}

// ---------------------------------------------------------------------------
// GIF packet parser
// ---------------------------------------------------------------------------

void GS::processGIFPacket(const uint8_t *data, uint32_t sizeBytes)
{
    if (!data || sizeBytes < 16 || !m_vram)
        return;

    static int s_gifCallCount = 0;
    static int s_gifTagCount = 0;
    ++s_gifCallCount;
    if (s_gifCallCount <= 20 || (s_gifCallCount % 500) == 0)
        std::fprintf(stderr, "[GS::processGIFPacket #%d] size=%u (0x%x) tags_so_far=%d\n",
               s_gifCallCount, sizeBytes, sizeBytes, s_gifTagCount);

    static int s_dumpCount = 0;
    bool dumpThis = (sizeBytes >= 260 && sizeBytes <= 290 && s_dumpCount < 3);
    if (dumpThis) {
        ++s_dumpCount;
        std::fprintf(stderr, "[GIF DUMP #%d] packet size=%u dumping all tags/registers:\n", s_dumpCount, sizeBytes);
    }

    uint32_t offset = 0;
    while (offset + 16 <= sizeBytes)
    {
        uint64_t tagLo = loadLE64(data + offset);
        uint64_t tagHi = loadLE64(data + offset + 8);
        offset += 16;

        uint32_t nloop = static_cast<uint32_t>(tagLo & 0x7FFF);
        uint8_t flg = static_cast<uint8_t>((tagLo >> 58) & 0x3);
        uint32_t nreg = static_cast<uint32_t>((tagLo >> 60) & 0xF);
        if (nreg == 0) nreg = 16;

        ++s_gifTagCount;
        if (s_gifTagCount <= 30 || (s_gifTagCount % 500) == 0 || dumpThis)
            std::fprintf(stderr, "[GIF tag #%d] flg=%d nloop=%u nreg=%u tagLo=0x%016llx tagHi=0x%016llx pre=%d\n",
                   s_gifTagCount, flg, nloop, nreg, (unsigned long long)tagLo, (unsigned long long)tagHi,
                   (int)((tagLo >> 46) & 1));

        bool pre = ((tagLo >> 46) & 1) != 0;
        if (pre)
        {
            uint64_t primVal = (tagLo >> 47) & 0x7FF;
            if (dumpThis)
                std::fprintf(stderr, "  [PRE] PRIM=0x%03llx\n", (unsigned long long)primVal);
            writeRegister(GS_REG_PRIM, primVal);
        }

        uint8_t regs[16];
        for (uint32_t i = 0; i < nreg; ++i)
            regs[i] = static_cast<uint8_t>((tagHi >> (i * 4)) & 0xF);

        if (flg == GIF_FMT_PACKED)
        {
            for (uint32_t loop = 0; loop < nloop; ++loop)
            {
                for (uint32_t r = 0; r < nreg; ++r)
                {
                    if (offset + 16 > sizeBytes)
                        return;
                    uint64_t lo = loadLE64(data + offset);
                    uint64_t hi = loadLE64(data + offset + 8);
                    offset += 16;
                    if (dumpThis) {
                        uint8_t reg = regs[r];
                        if (reg == 0x0E) {
                            uint8_t addr = static_cast<uint8_t>(hi & 0xFF);
                            std::fprintf(stderr, "  [PACKED A+D] reg=0x%02x val=0x%016llx\n", addr, (unsigned long long)lo);
                        } else {
                            std::fprintf(stderr, "  [PACKED reg=0x%x] lo=0x%016llx hi=0x%016llx\n", reg, (unsigned long long)lo, (unsigned long long)hi);
                        }
                    }
                    writeRegisterPacked(regs[r], lo, hi);
                }
            }
        }
        else if (flg == GIF_FMT_REGLIST)
        {
            static int s_reglistTagCount = 0;
            ++s_reglistTagCount;
            if (s_reglistTagCount <= 5 || (s_reglistTagCount % 20000) == 0) {
                printf("[GIF REGLIST tag #%d] nloop=%u nreg=%u regs=[", s_reglistTagCount, nloop, nreg);
                for (uint32_t i = 0; i < nreg; ++i) printf("0x%x%s", regs[i], i+1<nreg?",":"");
                printf("] tagHi=0x%016llx\n", (unsigned long long)tagHi);
            }

            for (uint32_t loop = 0; loop < nloop; ++loop)
            {
                for (uint32_t r = 0; r < nreg; ++r)
                {
                    if (offset + 8 > sizeBytes)
                        return;
                    uint64_t val = loadLE64(data + offset);
                    offset += 8;

                    if ((s_reglistTagCount <= 3 && loop < 2) || dumpThis) {
                        std::fprintf(stderr, "[GIF REGLIST loop=%u reg=%u] reg_id=0x%x val=0x%016llx\n",
                               loop, r, regs[r], (unsigned long long)val);
                    }

                    writeRegister(regs[r], val);
                }
            }
            // REGLIST pads to 128-bit boundary
            if ((nloop * nreg) & 1)
                offset += 8;
        }
        else if (flg == GIF_FMT_IMAGE)
        {
            uint32_t imageBytes = nloop * 16;
            if (offset + imageBytes > sizeBytes)
                imageBytes = sizeBytes - offset;
            if (dumpThis)
                std::fprintf(stderr, "  [IMAGE] nloop=%u imageBytes=%u\n", nloop, imageBytes);
            processImageData(data + offset, imageBytes);
            offset += imageBytes;
        }
    }
}

// ---------------------------------------------------------------------------
// PACKED-format register decode
// ---------------------------------------------------------------------------

void GS::writeRegisterPacked(uint8_t regDesc, uint64_t lo, uint64_t hi)
{
    switch (regDesc)
    {
    case 0x00: // PRIM
        writeRegister(GS_REG_PRIM, lo & 0x7FF);
        break;
    case 0x01: // RGBAQ
        m_curR = static_cast<uint8_t>(lo & 0xFF);
        m_curG = static_cast<uint8_t>((lo >> 32) & 0xFF);
        m_curB = static_cast<uint8_t>(hi & 0xFF);
        m_curA = static_cast<uint8_t>((hi >> 32) & 0xFF);
        {
            uint32_t qBits;
            std::memcpy(&qBits, &m_curQ, 4); // Q stays from last ST write
        }
        break;
    case 0x02: // ST
    {
        uint32_t sBits = static_cast<uint32_t>(lo & 0xFFFFFFFF);
        uint32_t tBits = static_cast<uint32_t>((lo >> 32) & 0xFFFFFFFF);
        uint32_t qBits = static_cast<uint32_t>(hi & 0xFFFFFFFF);
        std::memcpy(&m_curS, &sBits, 4);
        std::memcpy(&m_curT, &tBits, 4);
        std::memcpy(&m_curQ, &qBits, 4);
        if (m_curQ == 0.0f) m_curQ = 1.0f;
        break;
    }
    case 0x03: // UV - PACKED layout: U=bits 0-15, V=bits 32-47 (differs from A+D which uses 16-31)
        m_curU = static_cast<uint16_t>(lo & 0xFFFFu);
        m_curV = static_cast<uint16_t>((lo >> 32) & 0xFFFFu);
        break;
    case 0x04: // XYZF2
    {
        uint16_t x = static_cast<uint16_t>(lo & 0xFFFF);
        uint16_t y = static_cast<uint16_t>((lo >> 32) & 0xFFFF);
        uint32_t z = static_cast<uint32_t>((hi >> 4) & 0xFFFFFF);
        uint8_t f = static_cast<uint8_t>((hi >> 36) & 0xFF);
        bool adk = ((hi >> 47) & 1) != 0;
        GSVertex &vtx = m_vtxQueue[m_vtxCount % kMaxVerts];
        vtx.x = static_cast<float>(x) / 16.0f;
        vtx.y = static_cast<float>(y) / 16.0f;
        vtx.z = static_cast<float>(z);
        vtx.r = m_curR; vtx.g = m_curG; vtx.b = m_curB; vtx.a = m_curA;
        vtx.q = m_curQ; vtx.s = m_curS; vtx.t = m_curT;
        vtx.u = m_curU; vtx.v = m_curV; vtx.fog = f;
        vertexKick(!adk);
        break;
    }
    case 0x05: // XYZ2
    {
        uint16_t x = static_cast<uint16_t>(lo & 0xFFFF);
        uint16_t y = static_cast<uint16_t>((lo >> 32) & 0xFFFF);
        uint32_t z = static_cast<uint32_t>(hi & 0xFFFFFFFF);
        bool adk = ((hi >> 47) & 1) != 0;
        GSVertex &vtx = m_vtxQueue[m_vtxCount % kMaxVerts];
        vtx.x = static_cast<float>(x) / 16.0f;
        vtx.y = static_cast<float>(y) / 16.0f;
        vtx.z = static_cast<float>(z);
        vtx.r = m_curR; vtx.g = m_curG; vtx.b = m_curB; vtx.a = m_curA;
        vtx.q = m_curQ; vtx.s = m_curS; vtx.t = m_curT;
        vtx.u = m_curU; vtx.v = m_curV; vtx.fog = m_curFog;
        vertexKick(!adk);
        break;
    }
    case 0x0A: // FOG
        m_curFog = static_cast<uint8_t>((hi >> 36) & 0xFF);
        break;
    case 0x0C: // XYZF3 (no drawing kick)
    {
        GSVertex &vtx = m_vtxQueue[m_vtxCount % kMaxVerts];
        vtx.x = static_cast<float>(lo & 0xFFFF) / 16.0f;
        vtx.y = static_cast<float>((lo >> 32) & 0xFFFF) / 16.0f;
        vtx.z = static_cast<float>((hi >> 4) & 0xFFFFFF);
        vtx.r = m_curR; vtx.g = m_curG; vtx.b = m_curB; vtx.a = m_curA;
        vtx.q = m_curQ; vtx.s = m_curS; vtx.t = m_curT;
        vtx.u = m_curU; vtx.v = m_curV;
        vtx.fog = static_cast<uint8_t>((hi >> 36) & 0xFF);
        vertexKick(false);
        break;
    }
    case 0x0D: // XYZ3 (no drawing kick)
    {
        GSVertex &vtx = m_vtxQueue[m_vtxCount % kMaxVerts];
        vtx.x = static_cast<float>(lo & 0xFFFF) / 16.0f;
        vtx.y = static_cast<float>((lo >> 32) & 0xFFFF) / 16.0f;
        vtx.z = static_cast<float>(hi & 0xFFFFFFFF);
        vtx.r = m_curR; vtx.g = m_curG; vtx.b = m_curB; vtx.a = m_curA;
        vtx.q = m_curQ; vtx.s = m_curS; vtx.t = m_curT;
        vtx.u = m_curU; vtx.v = m_curV; vtx.fog = m_curFog;
        vertexKick(false);
        break;
    }
    case 0x0E: // A+D
    {
        uint8_t addr = static_cast<uint8_t>(hi & 0xFF);
        writeRegister(addr, lo);
        break;
    }
    case 0x0F: // NOP
        break;
    default:
        // Other packed reg descs: forward as raw register write
        writeRegister(regDesc, lo);
        break;
    }
}

// ---------------------------------------------------------------------------
// Direct register writes (REGLIST / A+D)
// ---------------------------------------------------------------------------

void GS::writeRegister(uint8_t regAddr, uint64_t value)
{
    switch (regAddr)
    {
    case GS_REG_PRIM:
    {
        m_prim.type = static_cast<GSPrimType>(value & 0x7);
        m_prim.iip = ((value >> 3) & 1) != 0;
        m_prim.tme = ((value >> 4) & 1) != 0;
        m_prim.fge = ((value >> 5) & 1) != 0;
        m_prim.abe = ((value >> 6) & 1) != 0;
        m_prim.aa1 = ((value >> 7) & 1) != 0;
        m_prim.fst = ((value >> 8) & 1) != 0;
        m_prim.ctxt = ((value >> 9) & 1) != 0;
        m_prim.fix = ((value >> 10) & 1) != 0;
        m_vtxCount = 0;
        m_vtxIndex = 0;
        break;
    }
    case GS_REG_RGBAQ:
    {
        m_curR = static_cast<uint8_t>(value & 0xFF);
        m_curG = static_cast<uint8_t>((value >> 8) & 0xFF);
        m_curB = static_cast<uint8_t>((value >> 16) & 0xFF);
        m_curA = static_cast<uint8_t>((value >> 24) & 0xFF);
        uint32_t qBits = static_cast<uint32_t>((value >> 32) & 0xFFFFFFFF);
        std::memcpy(&m_curQ, &qBits, 4);
        if (m_curQ == 0.0f) m_curQ = 1.0f;
        break;
    }
    case GS_REG_ST:
    {
        uint32_t sBits = static_cast<uint32_t>(value & 0xFFFFFFFF);
        uint32_t tBits = static_cast<uint32_t>((value >> 32) & 0xFFFFFFFF);
        std::memcpy(&m_curS, &sBits, 4);
        std::memcpy(&m_curT, &tBits, 4);
        break;
    }
    case GS_REG_UV:
    {
        // UV in low 32 bits: U=bits 0-15, V=bits 16-31 (not U=low32, V=high32)
        m_curU = static_cast<uint16_t>(value & 0xFFFFu);
        m_curV = static_cast<uint16_t>((value >> 16) & 0xFFFFu);
        break;
    }
    case GS_REG_XYZF2:
    case GS_REG_XYZF3:
    {
        GSVertex &vtx = m_vtxQueue[m_vtxCount % kMaxVerts];
        vtx.x = static_cast<float>(value & 0xFFFF) / 16.0f;
        vtx.y = static_cast<float>((value >> 16) & 0xFFFF) / 16.0f;
        vtx.z = static_cast<float>((value >> 32) & 0xFFFFFF);
        vtx.fog = static_cast<uint8_t>((value >> 56) & 0xFF);
        vtx.r = m_curR; vtx.g = m_curG; vtx.b = m_curB; vtx.a = m_curA;
        vtx.q = m_curQ; vtx.s = m_curS; vtx.t = m_curT;
        vtx.u = m_curU; vtx.v = m_curV;
        vertexKick(regAddr == GS_REG_XYZF2);
        break;
    }
    case GS_REG_XYZ2:
    case GS_REG_XYZ3:
    {
        GSVertex &vtx = m_vtxQueue[m_vtxCount % kMaxVerts];
        vtx.x = static_cast<float>(value & 0xFFFF) / 16.0f;
        vtx.y = static_cast<float>((value >> 16) & 0xFFFF) / 16.0f;
        vtx.z = static_cast<float>((value >> 32) & 0xFFFFFFFF);
        vtx.r = m_curR; vtx.g = m_curG; vtx.b = m_curB; vtx.a = m_curA;
        vtx.q = m_curQ; vtx.s = m_curS; vtx.t = m_curT;
        vtx.u = m_curU; vtx.v = m_curV; vtx.fog = m_curFog;
        vertexKick(regAddr == GS_REG_XYZ2);
        break;
    }
    case GS_REG_TEX0_1:
    case GS_REG_TEX0_2:
    {
        int ci = (regAddr == GS_REG_TEX0_2) ? 1 : 0;
        auto &t = m_ctx[ci].tex0;
        t.tbp0 = static_cast<uint32_t>(value & 0x3FFF);
        t.tbw = static_cast<uint8_t>((value >> 14) & 0x3F);
        t.psm = static_cast<uint8_t>((value >> 20) & 0x3F);
        t.tw = static_cast<uint8_t>((value >> 26) & 0xF);
        t.th = static_cast<uint8_t>((value >> 30) & 0xF);
        t.tcc = static_cast<uint8_t>((value >> 34) & 0x1);
        t.tfx = static_cast<uint8_t>((value >> 35) & 0x3);
        t.cbp = static_cast<uint32_t>((value >> 37) & 0x3FFF);
        t.cpsm = static_cast<uint8_t>((value >> 51) & 0xF);
        t.csm = static_cast<uint8_t>((value >> 55) & 0x1);
        t.csa = static_cast<uint8_t>((value >> 56) & 0x1F);
        t.cld = static_cast<uint8_t>((value >> 61) & 0x7);
        {
            static int s_tex0Log = 0;
            if (++s_tex0Log <= 20 || (s_tex0Log % 2000) == 0)
                std::fprintf(stderr, "[GS_REG_TEX0 #%d] ctx=%d tbp0=0x%x tbw=%u psm=%u tw=%u th=%u tfx=%u cbp=0x%x val=0x%016llx\n",
                       s_tex0Log, ci, t.tbp0, t.tbw, t.psm, t.tw, t.th,
                       t.tfx, t.cbp, (unsigned long long)value);
        }
        break;
    }
    case GS_REG_CLAMP_1:
    case GS_REG_CLAMP_2:
    {
        int ci = (regAddr == GS_REG_CLAMP_2) ? 1 : 0;
        m_ctx[ci].clamp = value;
        break;
    }
    case GS_REG_FOG:
        m_curFog = static_cast<uint8_t>((value >> 56) & 0xFF);
        break;
    case GS_REG_TEX1_1:
    case GS_REG_TEX1_2:
    {
        int ci = (regAddr == GS_REG_TEX1_2) ? 1 : 0;
        m_ctx[ci].tex1 = value;
        break;
    }
    case GS_REG_TEX2_1:
    case GS_REG_TEX2_2:
        break; // ignored for now
    case GS_REG_XYOFFSET_1:
    case GS_REG_XYOFFSET_2:
    {
        int ci = (regAddr == GS_REG_XYOFFSET_2) ? 1 : 0;
        m_ctx[ci].xyoffset.ofx = static_cast<uint16_t>(value & 0xFFFF);
        m_ctx[ci].xyoffset.ofy = static_cast<uint16_t>((value >> 32) & 0xFFFF);
        static int s_xyoffCount = 0;
        ++s_xyoffCount;
        if (s_xyoffCount <= 20 || (s_xyoffCount % 10000) == 0) {
            printf("[GS::writeRegister XYOFFSET_%d #%d] value=0x%016llx ofx=%u(%d) ofy=%u(%d)\n",
                   ci + 1, s_xyoffCount, (unsigned long long)value,
                   m_ctx[ci].xyoffset.ofx, m_ctx[ci].xyoffset.ofx >> 4,
                   m_ctx[ci].xyoffset.ofy, m_ctx[ci].xyoffset.ofy >> 4);
        }
        break;
    }
    case GS_REG_PRMODECONT:
        m_prmodecont = (value & 1) != 0;
        break;
    case GS_REG_PRMODE:
        if (!m_prmodecont)
        {
            m_prim.iip = ((value >> 3) & 1) != 0;
            m_prim.tme = ((value >> 4) & 1) != 0;
            m_prim.fge = ((value >> 5) & 1) != 0;
            m_prim.abe = ((value >> 6) & 1) != 0;
            m_prim.aa1 = ((value >> 7) & 1) != 0;
            m_prim.fst = ((value >> 8) & 1) != 0;
            m_prim.ctxt = ((value >> 9) & 1) != 0;
            m_prim.fix = ((value >> 10) & 1) != 0;
        }
        break;
    case GS_REG_SCISSOR_1:
    case GS_REG_SCISSOR_2:
    {
        int ci = (regAddr == GS_REG_SCISSOR_2) ? 1 : 0;
        m_ctx[ci].scissor.x0 = static_cast<uint16_t>(value & 0x7FF);
        m_ctx[ci].scissor.x1 = static_cast<uint16_t>((value >> 16) & 0x7FF);
        m_ctx[ci].scissor.y0 = static_cast<uint16_t>((value >> 32) & 0x7FF);
        m_ctx[ci].scissor.y1 = static_cast<uint16_t>((value >> 48) & 0x7FF);
        break;
    }
    case GS_REG_ALPHA_1:
    case GS_REG_ALPHA_2:
    {
        int ci = (regAddr == GS_REG_ALPHA_2) ? 1 : 0;
        m_ctx[ci].alpha = value;
        break;
    }
    case GS_REG_TEST_1:
    case GS_REG_TEST_2:
    {
        int ci = (regAddr == GS_REG_TEST_2) ? 1 : 0;
        m_ctx[ci].test = value;
        break;
    }
    case GS_REG_FRAME_1:
    case GS_REG_FRAME_2:
    {
        // Do NOT snapshot here - it captured too early and broke intro text.
        // Snapshot happens at TRXDIR (after frame copy) for correct timing.
        ++m_framesSinceInit;

        int ci = (regAddr == GS_REG_FRAME_2) ? 1 : 0;
        m_ctx[ci].frame.fbp = static_cast<uint32_t>(value & 0x1FF);
        m_ctx[ci].frame.fbw = static_cast<uint32_t>((value >> 16) & 0x3F);
        m_ctx[ci].frame.psm = static_cast<uint8_t>((value >> 24) & 0x3F);
        m_ctx[ci].frame.fbmsk = static_cast<uint32_t>((value >> 32) & 0xFFFFFFFF);
        {
            static int s_frameRegLog = 0;
            if (++s_frameRegLog <= 30 || (s_frameRegLog % 500) == 0)
                std::fprintf(stderr, "[GS_REG_FRAME #%d] ctx=%d fbp=%u fbw=%u psm=%u fbmsk=0x%08x val=0x%016llx\n",
                       s_frameRegLog, ci, m_ctx[ci].frame.fbp,
                       m_ctx[ci].frame.fbw, m_ctx[ci].frame.psm, m_ctx[ci].frame.fbmsk,
                       (unsigned long long)value);
        }
        break;
    }
    case GS_REG_ZBUF_1:
    case GS_REG_ZBUF_2:
    {
        int ci = (regAddr == GS_REG_ZBUF_2) ? 1 : 0;
        m_ctx[ci].zbuf = value;
        break;
    }
    case GS_REG_FBA_1:
    case GS_REG_FBA_2:
    {
        int ci = (regAddr == GS_REG_FBA_2) ? 1 : 0;
        m_ctx[ci].fba = value;
        break;
    }
    case GS_REG_BITBLTBUF:
    {
        m_bitbltbuf.sbp = static_cast<uint32_t>(value & 0x3FFF);
        m_bitbltbuf.sbw = static_cast<uint8_t>((value >> 16) & 0x3F);
        m_bitbltbuf.spsm = static_cast<uint8_t>((value >> 24) & 0x3F);
        m_bitbltbuf.dbp = static_cast<uint32_t>((value >> 32) & 0x3FFF);
        m_bitbltbuf.dbw = static_cast<uint8_t>((value >> 48) & 0x3F);
        m_bitbltbuf.dpsm = static_cast<uint8_t>((value >> 56) & 0x3F);
        break;
    }
    case GS_REG_TRXPOS:
    {
        m_trxpos.ssax = static_cast<uint16_t>(value & 0x7FF);
        m_trxpos.ssay = static_cast<uint16_t>((value >> 16) & 0x7FF);
        m_trxpos.dsax = static_cast<uint16_t>((value >> 32) & 0x7FF);
        m_trxpos.dsay = static_cast<uint16_t>((value >> 48) & 0x7FF);
        m_trxpos.dir = static_cast<uint8_t>((value >> 59) & 0x3);
        break;
    }
    case GS_REG_TRXREG:
    {
        m_trxreg.rrw = static_cast<uint16_t>(value & 0xFFF);
        m_trxreg.rrh = static_cast<uint16_t>((value >> 32) & 0xFFF);
        break;
    }
    case GS_REG_TRXDIR:
    {
        m_trxdir = static_cast<uint32_t>(value & 0x3);
        m_hwregX = 0;
        m_hwregY = 0;

        if (m_trxdir == 2 && m_vram)
        {
            uint32_t sbp  = m_bitbltbuf.sbp;
            uint8_t  sbw  = m_bitbltbuf.sbw;
            uint8_t  spsm = m_bitbltbuf.spsm;
            uint32_t dbp  = m_bitbltbuf.dbp;
            uint8_t  dbw  = m_bitbltbuf.dbw;
            uint8_t  dpsm = m_bitbltbuf.dpsm;

            if (sbw == 0) sbw = 1;
            if (dbw == 0) dbw = 1;

            uint32_t srcBase  = sbp * 256u;
            uint32_t dstBase  = dbp * 256u;
            uint32_t srcBpp   = bitsPerPixel(spsm) / 8u;
            uint32_t dstBpp   = bitsPerPixel(dpsm) / 8u;
            if (srcBpp == 0) srcBpp = 4;
            if (dstBpp == 0) dstBpp = 4;
            uint32_t srcStride = static_cast<uint32_t>(sbw) * 64u * srcBpp;
            uint32_t dstStride = static_cast<uint32_t>(dbw) * 64u * dstBpp;
            uint32_t rrw = m_trxreg.rrw;
            uint32_t rrh = m_trxreg.rrh;
            uint32_t ssax = m_trxpos.ssax;
            uint32_t ssay = m_trxpos.ssay;
            uint32_t dsax = m_trxpos.dsax;
            uint32_t dsay = m_trxpos.dsay;
            uint32_t copyBpp = (srcBpp < dstBpp) ? srcBpp : dstBpp;
            uint32_t rowBytes = rrw * copyBpp;

            static int s_llCount = 0;
            ++s_llCount;
            if (s_llCount <= 10 || (s_llCount % 500) == 0) {
                std::fprintf(stderr, "[GS TRXDIR=2 local-local #%d] sbp=0x%x sbw=%u spsm=%u -> dbp=0x%x dbw=%u dpsm=%u  "
                       "ssax=%u ssay=%u dsax=%u dsay=%u rrw=%u rrh=%u\n",
                       s_llCount, sbp, sbw, spsm, dbp, dbw, dpsm,
                       ssax, ssay, dsax, dsay, rrw, rrh);
            }

            // When src and dst regions overlap, copy in the correct direction
            // to avoid reading from already-overwritten rows.
            if (dstBase > srcBase)
            {
                for (int row = static_cast<int>(rrh) - 1; row >= 0; --row)
                {
                    uint32_t srcOff = srcBase + (ssay + row) * srcStride + ssax * srcBpp;
                    uint32_t dstOff = dstBase + (dsay + row) * dstStride + dsax * dstBpp;
                    if (srcOff + rowBytes <= m_vramSize && dstOff + rowBytes <= m_vramSize)
                        std::memmove(m_vram + dstOff, m_vram + srcOff, rowBytes);
                }
            }
            else
            {
                for (uint32_t row = 0; row < rrh; ++row)
                {
                    uint32_t srcOff = srcBase + (ssay + row) * srcStride + ssax * srcBpp;
                    uint32_t dstOff = dstBase + (dsay + row) * dstStride + dsax * dstBpp;
                    if (srcOff + rowBytes <= m_vramSize && dstOff + rowBytes <= m_vramSize)
                        std::memmove(m_vram + dstOff, m_vram + srcOff, rowBytes);
                }
            }

            // Snapshot on framebuffer flip (full 640x512). Captures at frame-complete
            // moment, avoiding flicker from clear/fade triangles vs text draw ordering.
            // 0->0x20: menu double buffer; 0->0: intro single buffer.
            if (sbp == 0u && (dbp == 0u || dbp == 0x20u) && rrw >= 640u && rrh >= 512u) {
                m_lastDisplayBaseBytes = (dbp == 0x20u) ? 8192u : 0u;
                snapshotVRAM();
            }
        }
        break;
    }
    case GS_REG_HWREG:
    {
        // Write 64 bits of image data
        uint8_t buf[8];
        std::memcpy(buf, &value, 8);
        processImageData(buf, 8);
        break;
    }
    case GS_REG_TEXFLUSH:
    case GS_REG_TEXCLUT:
    case GS_REG_SCANMSK:
    case GS_REG_FOGCOL:
    case GS_REG_DIMX:
    case GS_REG_DTHE:
    case GS_REG_COLCLAMP:
    case GS_REG_PABE:
    case GS_REG_MIPTBP1_1:
    case GS_REG_MIPTBP1_2:
    case GS_REG_MIPTBP2_1:
    case GS_REG_MIPTBP2_2:
    case GS_REG_TEXA:
        break;
    case GS_REG_SIGNAL:
    {
        if (m_privRegs)
        {
            uint32_t id   = static_cast<uint32_t>(value & 0xFFFFFFFF);
            uint32_t mask = static_cast<uint32_t>(value >> 32);
            uint32_t lo   = static_cast<uint32_t>(m_privRegs->siglblid & 0xFFFFFFFF);
            uint32_t oldLo = lo;
            lo = (lo & ~mask) | (id & mask);
            m_privRegs->siglblid = (m_privRegs->siglblid & 0xFFFFFFFF00000000ULL) | lo;
            m_privRegs->csr |= 0x1;
            std::cerr << "[GS SIGNAL] id=0x" << std::hex << id
                      << " mask=0x" << mask
                      << " siglblid_lo: 0x" << oldLo << " -> 0x" << lo
                      << " (texSeq=" << std::dec << ((lo >> 16) & 0xFFFF)
                      << " geomSeq=" << (lo & 0xFFFF) << ")" << std::endl;
        }
        break;
    }
    case GS_REG_FINISH:
    {
        if (m_privRegs)
            m_privRegs->csr |= 0x2;
        break;
    }
    case GS_REG_LABEL:
    {
        if (m_privRegs)
        {
            uint32_t id   = static_cast<uint32_t>(value & 0xFFFFFFFF);
            uint32_t mask = static_cast<uint32_t>(value >> 32);
            uint32_t hi   = static_cast<uint32_t>(m_privRegs->siglblid >> 32);
            uint32_t oldHi = hi;
            hi = (hi & ~mask) | (id & mask);
            m_privRegs->siglblid = (static_cast<uint64_t>(hi) << 32) | (m_privRegs->siglblid & 0xFFFFFFFF);
            std::cerr << "[GS LABEL] id=0x" << std::hex << id
                      << " mask=0x" << mask
                      << " siglblid_hi: 0x" << oldHi << " -> 0x" << hi
                      << std::dec << std::endl;
        }
        break;
    }
    default:
        break;
    }
}

// ---------------------------------------------------------------------------
// Vertex kick / primitive assembly
// ---------------------------------------------------------------------------

void GS::vertexKick(bool drawing)
{
    ++m_vtxCount;
    ++m_vtxIndex;

    static int s_kickTotal = 0;
    static int s_kickDraw = 0;
    ++s_kickTotal;
    if (drawing) ++s_kickDraw;
    if (s_kickTotal <= 10 || (s_kickTotal % 500) == 0)
        std::fprintf(stderr, "[GS::vertexKick #%d] draw=%d/%d prim=%d ctxt=%d fbp=%u fbw=%u\n",
               s_kickTotal, s_kickDraw, s_kickTotal, m_prim.type, m_prim.ctxt,
               activeContext().frame.fbp, activeContext().frame.fbw);

    if (!drawing)
        return;

    int needed = 0;
    switch (m_prim.type)
    {
    case GS_PRIM_POINT:      needed = 1; break;
    case GS_PRIM_LINE:        needed = 2; break;
    case GS_PRIM_LINESTRIP:   needed = 2; break;
    case GS_PRIM_TRIANGLE:    needed = 3; break;
    case GS_PRIM_TRISTRIP:    needed = 3; break;
    case GS_PRIM_TRIFAN:      needed = 3; break;
    case GS_PRIM_SPRITE:      needed = 2; break;
    default: return;
    }

    if (m_vtxCount < needed)
        return;

    drawPrimitive();

    // Advance vertex buffer for strip/fan primitives
    switch (m_prim.type)
    {
    case GS_PRIM_LINE:
    case GS_PRIM_TRIANGLE:
    case GS_PRIM_SPRITE:
    case GS_PRIM_POINT:
        m_vtxCount = 0;
        break;
    case GS_PRIM_LINESTRIP:
        m_vtxQueue[0] = m_vtxQueue[1];
        m_vtxCount = 1;
        break;
    case GS_PRIM_TRISTRIP:
        m_vtxQueue[0] = m_vtxQueue[1];
        m_vtxQueue[1] = m_vtxQueue[2];
        m_vtxCount = 2;
        break;
    case GS_PRIM_TRIFAN:
        m_vtxQueue[1] = m_vtxQueue[2];
        m_vtxCount = 2;
        break;
    default:
        m_vtxCount = 0;
        break;
    }
}

void GS::drawPrimitive()
{
    switch (m_prim.type)
    {
    case GS_PRIM_SPRITE:
        drawSprite();
        break;
    case GS_PRIM_TRIANGLE:
    case GS_PRIM_TRISTRIP:
    case GS_PRIM_TRIFAN:
        drawTriangle();
        break;
    case GS_PRIM_LINE:
    case GS_PRIM_LINESTRIP:
        drawLine();
        break;
    case GS_PRIM_POINT:
    {
        const GSVertex &v = m_vtxQueue[0];
        const auto &ctx = activeContext();
        int px = static_cast<int>(v.x) - (ctx.xyoffset.ofx >> 4);
        int py = static_cast<int>(v.y) - (ctx.xyoffset.ofy >> 4);
        writePixel(px, py, v.r, v.g, v.b, v.a);
        break;
    }
    default:
        break;
    }
}

// ---------------------------------------------------------------------------
// Pixel write
// ---------------------------------------------------------------------------

void GS::writePixel(int x, int y, uint8_t r, uint8_t g, uint8_t b, uint8_t a)
{
    const auto &ctx = activeContext();
    if (x < ctx.scissor.x0 || x > ctx.scissor.x1 ||
        y < ctx.scissor.y0 || y > ctx.scissor.y1)
        return;

    uint32_t fbBase = ctx.frame.fbp * 8192u;
    uint32_t stride = fbStride(ctx.frame.fbw, ctx.frame.psm);
    if (stride == 0) return;

    static int s_pixWriteCount = 0;
    ++s_pixWriteCount;
    if (s_pixWriteCount <= 2 || (s_pixWriteCount % 50000000) == 0) {
        printf("[GS::writePixel #%d] (%d,%d) rgba=(%d,%d,%d,%d) fbp=%u off=0x%x stride=%u\n",
               s_pixWriteCount, x, y, r, g, b, a, ctx.frame.fbp, fbBase, stride);
    }

    uint32_t off = fbBase + static_cast<uint32_t>(y) * stride + static_cast<uint32_t>(x) * 4u;
    if (off + 4 > m_vramSize)
        return;

    if (m_prim.abe)
    {
        uint32_t existing;
        std::memcpy(&existing, m_vram + off, 4);
        uint8_t dr = existing & 0xFF;
        uint8_t dg = (existing >> 8) & 0xFF;
        uint8_t db = (existing >> 16) & 0xFF;
        uint8_t da = (existing >> 24) & 0xFF;

        uint64_t alphaReg = ctx.alpha;
        uint8_t asel = alphaReg & 3;
        uint8_t bsel = (alphaReg >> 2) & 3;
        uint8_t csel = (alphaReg >> 4) & 3;
        uint8_t dsel = (alphaReg >> 6) & 3;
        uint8_t fix  = static_cast<uint8_t>((alphaReg >> 32) & 0xFF);

        auto pickRGB = [&](uint8_t sel, int cs, int cd) -> int {
            if (sel == 0) return cs;
            if (sel == 1) return cd;
            return 0;
        };
        int cAlpha = (csel == 0) ? a : (csel == 1) ? da : fix;

        r = clampU8(((pickRGB(asel, r, dr) - pickRGB(bsel, r, dr)) * cAlpha >> 7) + pickRGB(dsel, r, dr));
        g = clampU8(((pickRGB(asel, g, dg) - pickRGB(bsel, g, dg)) * cAlpha >> 7) + pickRGB(dsel, g, dg));
        b = clampU8(((pickRGB(asel, b, db) - pickRGB(bsel, b, db)) * cAlpha >> 7) + pickRGB(dsel, b, db));
    }

    uint32_t pixel = static_cast<uint32_t>(r)
                   | (static_cast<uint32_t>(g) << 8)
                   | (static_cast<uint32_t>(b) << 16)
                   | (static_cast<uint32_t>(a) << 24);

    uint32_t mask = ctx.frame.fbmsk;
    if (mask != 0)
    {
        uint32_t existing;
        std::memcpy(&existing, m_vram + off, 4);
        pixel = (pixel & ~mask) | (existing & mask);
    }

    std::memcpy(m_vram + off, &pixel, 4);
}

// ---------------------------------------------------------------------------
// Texture sampling
// ---------------------------------------------------------------------------

uint32_t GS::readTexelPSMCT32(uint32_t tbp0, uint32_t tbw, int texU, int texV)
{
    if (tbw == 0) tbw = 1;
    uint32_t base = tbp0 * 256u;
    uint32_t stride = tbw * 64u * 4u;
    uint32_t off = base + static_cast<uint32_t>(texV) * stride + static_cast<uint32_t>(texU) * 4u;
    if (off + 4 > m_vramSize)
        return 0xFFFF00FFu;
    uint32_t texel;
    std::memcpy(&texel, m_vram + off, 4);
    return texel;
}

uint32_t GS::readTexelPSMT4(uint32_t tbp0, uint32_t tbw, int texU, int texV)
{
    if (tbw == 0) tbw = 1;
    uint32_t base = tbp0 * 256u;
    uint32_t stride = tbw * 64u / 2u;
    uint32_t byteOff = base + static_cast<uint32_t>(texV) * stride + static_cast<uint32_t>(texU) / 2u;
    if (byteOff >= m_vramSize)
        return 0;
    uint8_t packed = m_vram[byteOff];
    uint32_t result = (texU & 1) ? ((packed >> 4) & 0xFu) : (packed & 0xFu);
    return result;
}

uint32_t GS::lookupCLUT(uint8_t index, uint32_t cbp, uint8_t cpsm, uint8_t csa)
{
    uint32_t clutBase = cbp * 256u;

    if (cpsm == GS_PSM_CT32 || cpsm == GS_PSM_CT24)
    {
        uint32_t off = clutBase + (static_cast<uint32_t>(csa) * 16u + index) * 4u;
        if (off + 4 > m_vramSize)
            return 0xFFFF00FFu;
        uint32_t color;
        std::memcpy(&color, m_vram + off, 4);
        return color;
    }

    if (cpsm == GS_PSM_CT16 || cpsm == GS_PSM_CT16S)
    {
        uint32_t off = clutBase + (static_cast<uint32_t>(csa) * 16u + index) * 2u;
        if (off + 2 > m_vramSize)
            return 0xFFFF00FFu;
        uint16_t c16;
        std::memcpy(&c16, m_vram + off, 2);
        uint32_t r = ((c16 >> 0) & 0x1Fu) << 3;
        uint32_t g = ((c16 >> 5) & 0x1Fu) << 3;
        uint32_t b = ((c16 >> 10) & 0x1Fu) << 3;
        uint32_t a = (c16 & 0x8000u) ? 0x80u : 0u;
        return r | (g << 8) | (b << 16) | (a << 24);
    }

    return 0xFFFF00FFu;
}

uint32_t GS::sampleTexture(float s, float t, uint16_t u, uint16_t v)
{
    const auto &ctx = activeContext();
    const auto &tex = ctx.tex0;

    int texW = 1 << tex.tw;
    int texH = 1 << tex.th;
    if (texW == 0) texW = 1;
    if (texH == 0) texH = 1;

    int texU, texV;
    if (m_prim.fst)
    {
        texU = static_cast<int>(u >> 4);
        texV = static_cast<int>(v >> 4);
    }
    else
    {
        float invQ = (m_curQ != 0.0f) ? (1.0f / m_curQ) : 1.0f;
        texU = static_cast<int>(s * invQ * static_cast<float>(texW));
        texV = static_cast<int>(t * invQ * static_cast<float>(texH));
    }

    texU = clampInt(texU, 0, texW - 1);
    texV = clampInt(texV, 0, texH - 1);

    if (tex.psm == GS_PSM_CT32 || tex.psm == GS_PSM_CT24)
        return readTexelPSMCT32(tex.tbp0, tex.tbw, texU, texV);

    if (tex.psm == GS_PSM_T4)
    {
        uint32_t idx = readTexelPSMT4(tex.tbp0, tex.tbw, texU, texV);
        return lookupCLUT(static_cast<uint8_t>(idx), tex.cbp, tex.cpsm, tex.csa);
    }

    if (tex.psm == GS_PSM_T8)
    {
        if (tex.tbw == 0) return 0xFFFF00FFu;
        uint32_t base = tex.tbp0 * 256u;
        uint32_t stride = static_cast<uint32_t>(tex.tbw) * 64u;
        uint32_t off = base + static_cast<uint32_t>(texV) * stride + static_cast<uint32_t>(texU);
        if (off >= m_vramSize) return 0xFFFF00FFu;
        uint8_t idx = m_vram[off];
        return lookupCLUT(idx, tex.cbp, tex.cpsm, tex.csa);
    }

    return 0xFFFF00FFu; // magenta for unsupported formats
}

// ---------------------------------------------------------------------------
// Sprite rasterizer (PRIM type 6)
// ---------------------------------------------------------------------------

void GS::drawSprite()
{
    const GSVertex &v0 = m_vtxQueue[0];
    const GSVertex &v1 = m_vtxQueue[1];
    const auto &ctx = activeContext();

    int ofx = ctx.xyoffset.ofx >> 4;
    int ofy = ctx.xyoffset.ofy >> 4;

    int x0 = static_cast<int>(v0.x) - ofx;
    int y0 = static_cast<int>(v0.y) - ofy;
    int x1 = static_cast<int>(v1.x) - ofx;
    int y1 = static_cast<int>(v1.y) - ofy;

    static int s_spriteCount = 0;
    ++s_spriteCount;
    if (s_spriteCount <= 20 || (s_spriteCount % 500) == 0) {
        std::fprintf(stderr, "[GS::drawSprite #%d] (%d,%d)-(%d,%d) fbp=%u fbw=%u tme=%d abe=%d rgba=(%u,%u,%u,%u) tex.tbp0=0x%x tex.psm=%u\n",
               s_spriteCount, x0, y0, x1, y1,
               ctx.frame.fbp, ctx.frame.fbw, m_prim.tme, m_prim.abe,
               v1.r, v1.g, v1.b, v1.a,
               ctx.tex0.tbp0, ctx.tex0.psm);
    }
    static int s_menuSprLog = 0;
    if (ctx.tex0.tbp0 >= 0x2000 && s_menuSprLog < 20) {
        ++s_menuSprLog;
        std::fprintf(stderr, "[drawSprite-MENU #%d] (%d,%d)-(%d,%d) fbp=%u fbw=%u tme=%d abe=%d rgba=(%u,%u,%u,%u) tbp0=0x%x tbw=%u psm=%u tfx=%u tw=%u th=%u\n",
               s_menuSprLog, x0, y0, x1, y1,
               ctx.frame.fbp, ctx.frame.fbw, m_prim.tme, m_prim.abe,
               v1.r, v1.g, v1.b, v1.a,
               ctx.tex0.tbp0, ctx.tex0.tbw, ctx.tex0.psm, ctx.tex0.tfx, ctx.tex0.tw, ctx.tex0.th);
    }

    if (x0 > x1) std::swap(x0, x1);
    if (y0 > y1) std::swap(y0, y1);

    x0 = clampInt(x0, ctx.scissor.x0, ctx.scissor.x1);
    y0 = clampInt(y0, ctx.scissor.y0, ctx.scissor.y1);
    x1 = clampInt(x1, ctx.scissor.x0, ctx.scissor.x1);
    y1 = clampInt(y1, ctx.scissor.y0, ctx.scissor.y1);

    // Sprites use the color/texcoord from vertex 1 (second vertex)
    uint8_t r = v1.r, g = v1.g, b = v1.b, a = v1.a;

    if (m_prim.tme)
    {
        const auto &tex = ctx.tex0;
        int texW = 1 << tex.tw;
        int texH = 1 << tex.th;
        if (texW == 0) texW = 1;
        if (texH == 0) texH = 1;

        if (s_spriteCount <= 10 || (s_spriteCount % 10000) == 0) {
            printf("[drawSprite TEX #%d] psm=%u tbp0=0x%x tbw=%u tw=%u(%d) th=%u(%d) "
                   "tcc=%u tfx=%u cbp=0x%x cpsm=%u csa=%u cld=%u fst=%d abe=%d\n",
                   s_spriteCount, tex.psm, tex.tbp0, tex.tbw, tex.tw, texW, tex.th, texH,
                   tex.tcc, tex.tfx, tex.cbp, tex.cpsm, tex.csa, tex.cld, m_prim.fst, m_prim.abe);
            printf("[drawSprite UV #%d] v0.u=0x%04x v0.v=0x%04x v1.u=0x%04x v1.v=0x%04x "
                   "v0.rgba=(%d,%d,%d,%d) v1.rgba=(%d,%d,%d,%d)\n",
                   s_spriteCount, v0.u, v0.v, v1.u, v1.v,
                   v0.r, v0.g, v0.b, v0.a, v1.r, v1.g, v1.b, v1.a);
        }

        float u0f, v0f, u1f, v1f;
        if (m_prim.fst)
        {
            u0f = static_cast<float>(v0.u >> 4);
            v0f = static_cast<float>(v0.v >> 4);
            u1f = static_cast<float>(v1.u >> 4);
            v1f = static_cast<float>(v1.v >> 4);
        }
        else
        {
            u0f = v0.s * static_cast<float>(texW);
            v0f = v0.t * static_cast<float>(texH);
            u1f = v1.s * static_cast<float>(texW);
            v1f = v1.t * static_cast<float>(texH);
        }

        float spriteW = static_cast<float>(x1 - x0);
        float spriteH = static_cast<float>(y1 - y0);
        if (spriteW < 1.0f) spriteW = 1.0f;
        if (spriteH < 1.0f) spriteH = 1.0f;

        for (int y = y0; y <= y1; ++y)
        {
            float ty = (static_cast<float>(y - y0) + 0.5f) / spriteH;
            float texVf = v0f + (v1f - v0f) * ty;
            int tv = clampInt(static_cast<int>(texVf), 0, texH - 1);

            for (int x = x0; x <= x1; ++x)
            {
                float tx = (static_cast<float>(x - x0) + 0.5f) / spriteW;
                float texUf = u0f + (u1f - u0f) * tx;
                int tu = clampInt(static_cast<int>(texUf), 0, texW - 1);

                uint32_t texel;
                if (tex.psm == GS_PSM_CT32 || tex.psm == GS_PSM_CT24)
                    texel = readTexelPSMCT32(tex.tbp0, tex.tbw, tu, tv);
                else if (tex.psm == GS_PSM_T4)
                {
                    uint32_t idx = readTexelPSMT4(tex.tbp0, tex.tbw, tu, tv);
                    texel = lookupCLUT(static_cast<uint8_t>(idx), tex.cbp, tex.cpsm, tex.csa);
                }
                else if (tex.psm == GS_PSM_T8)
                {
                    uint32_t base = tex.tbp0 * 256u;
                    uint32_t tbw = tex.tbw ? tex.tbw : 1u;
                    uint32_t stride = tbw * 64u;
                    uint32_t off = base + static_cast<uint32_t>(tv) * stride + static_cast<uint32_t>(tu);
                    uint8_t idx = (off < m_vramSize) ? m_vram[off] : 0;
                    texel = lookupCLUT(idx, tex.cbp, tex.cpsm, tex.csa);
                }
                else
                    texel = 0xFFFF00FFu;

                uint8_t tr = static_cast<uint8_t>(texel & 0xFF);
                uint8_t tg = static_cast<uint8_t>((texel >> 8) & 0xFF);
                uint8_t tb = static_cast<uint8_t>((texel >> 16) & 0xFF);
                uint8_t ta = static_cast<uint8_t>((texel >> 24) & 0xFF);

                // TFX modulate: Ct = Cv * Ct >> 7  (DECAL would just use texel)
                uint8_t fr, fg, fb, fa;
                if (tex.tfx == 0) // MODULATE
                {
                    fr = clampU8((tr * r) >> 7);
                    fg = clampU8((tg * g) >> 7);
                    fb = clampU8((tb * b) >> 7);
                    fa = ta;
                }
                else if (tex.tfx == 1) // DECAL
                {
                    fr = tr; fg = tg; fb = tb; fa = ta;
                }
                else // HIGHLIGHT / HIGHLIGHT2
                {
                    fr = clampU8((tr * r) >> 7);
                    fg = clampU8((tg * g) >> 7);
                    fb = clampU8((tb * b) >> 7);
                    fa = ta;
                }

                writePixel(x, y, fr, fg, fb, fa);
            }
        }
    }
    else
    {
        // Flat-shaded sprite
        for (int y = y0; y <= y1; ++y)
            for (int x = x0; x <= x1; ++x)
                writePixel(x, y, r, g, b, a);
    }
}

// ---------------------------------------------------------------------------
// Triangle rasterizer (PRIM types 3, 4, 5)
// ---------------------------------------------------------------------------

void GS::drawTriangle()
{
    const GSVertex &v0 = m_vtxQueue[0];
    const GSVertex &v1 = m_vtxQueue[1];
    const GSVertex &v2 = m_vtxQueue[2];
    const auto &ctx = activeContext();

    int ofx = ctx.xyoffset.ofx >> 4;
    int ofy = ctx.xyoffset.ofy >> 4;

    float fx0 = v0.x - static_cast<float>(ofx);
    float fy0 = v0.y - static_cast<float>(ofy);
    float fx1 = v1.x - static_cast<float>(ofx);
    float fy1 = v1.y - static_cast<float>(ofy);
    float fx2 = v2.x - static_cast<float>(ofx);
    float fy2 = v2.y - static_cast<float>(ofy);

    static int s_triCount = 0;
    ++s_triCount;
    if (s_triCount <= 10 || (s_triCount % 500) == 0) {
        std::fprintf(stderr, "[GS::drawTriangle #%d] (%.0f,%.0f)(%.0f,%.0f)(%.0f,%.0f) fbp=%u fbw=%u abe=%d rgba=(%u,%u,%u,%u)\n",
               s_triCount, fx0, fy0, fx1, fy1, fx2, fy2,
               ctx.frame.fbp, ctx.frame.fbw, m_prim.abe,
               v0.r, v0.g, v0.b, v0.a);
    }
    static int s_menuTriLog = 0;
    if (m_prim.tme && ctx.tex0.tbp0 >= 0x2000 && s_menuTriLog < 20) {
        ++s_menuTriLog;
        std::fprintf(stderr, "[drawTriangle-MENU #%d] (%.0f,%.0f)(%.0f,%.0f)(%.0f,%.0f) fbp=%u tme=%d tbp0=0x%x psm=%u tfx=%u\n",
               s_menuTriLog, fx0, fy0, fx1, fy1, fx2, fy2,
               ctx.frame.fbp, m_prim.tme, ctx.tex0.tbp0, ctx.tex0.psm, ctx.tex0.tfx);
    }

    static int s_menuTriDiag = 0;
    bool diagThis = (m_prim.tme && ctx.tex0.tbp0 >= 0x2000 && s_menuTriDiag < 2);
    if (diagThis) ++s_menuTriDiag;

    // Bounding box
    int minX = static_cast<int>(std::floor(std::min({fx0, fx1, fx2})));
    int maxX = static_cast<int>(std::ceil(std::max({fx0, fx1, fx2})));
    int minY = static_cast<int>(std::floor(std::min({fy0, fy1, fy2})));
    int maxY = static_cast<int>(std::ceil(std::max({fy0, fy1, fy2})));

    minX = clampInt(minX, ctx.scissor.x0, ctx.scissor.x1);
    maxX = clampInt(maxX, ctx.scissor.x0, ctx.scissor.x1);
    minY = clampInt(minY, ctx.scissor.y0, ctx.scissor.y1);
    maxY = clampInt(maxY, ctx.scissor.y0, ctx.scissor.y1);

    if (diagThis) {
        std::fprintf(stderr, "[drawTri-DIAG #%d] bbox=(%d,%d)-(%d,%d) scissor=(%d,%d)-(%d,%d) tme=%d fst=%d\n",
               s_menuTriDiag, minX, minY, maxX, maxY,
               ctx.scissor.x0, ctx.scissor.y0, ctx.scissor.x1, ctx.scissor.y1,
               m_prim.tme, m_prim.fst);
        std::fprintf(stderr, "[drawTri-DIAG #%d] v0: xy=(%.1f,%.1f) uv=(%u,%u) st=(%.3f,%.3f) rgba=(%u,%u,%u,%u)\n",
               s_menuTriDiag, fx0, fy0, v0.u, v0.v, v0.s, v0.t, v0.r, v0.g, v0.b, v0.a);
        std::fprintf(stderr, "[drawTri-DIAG #%d] v1: xy=(%.1f,%.1f) uv=(%u,%u) st=(%.3f,%.3f) rgba=(%u,%u,%u,%u)\n",
               s_menuTriDiag, fx1, fy1, v1.u, v1.v, v1.s, v1.t, v1.r, v1.g, v1.b, v1.a);
        std::fprintf(stderr, "[drawTri-DIAG #%d] v2: xy=(%.1f,%.1f) uv=(%u,%u) st=(%.3f,%.3f) rgba=(%u,%u,%u,%u)\n",
               s_menuTriDiag, fx2, fy2, v2.u, v2.v, v2.s, v2.t, v2.r, v2.g, v2.b, v2.a);
        uint32_t vramProbe = 0;
        uint32_t probeOff = ctx.tex0.tbp0 * 256u + 200u * (ctx.tex0.tbw * 64u * 4u) + 160u * 4u;
        if (probeOff + 4 <= m_vramSize)
            std::memcpy(&vramProbe, m_vram + probeOff, 4);
        std::fprintf(stderr, "[drawTri-DIAG #%d] VRAM texel probe @(160,200) off=0x%x val=0x%08x\n",
               s_menuTriDiag, probeOff, vramProbe);
    }

    float denom = (fy1 - fy2) * (fx0 - fx2) + (fx2 - fx1) * (fy0 - fy2);
    if (std::fabs(denom) < 0.001f)
        return; // degenerate

    float invDenom = 1.0f / denom;

    int diagPixelCount = 0;
    int diagNonBlackCount = 0;
    bool diagSampled = false;

    for (int y = minY; y <= maxY; ++y)
    {
        float py = static_cast<float>(y) + 0.5f;
        for (int x = minX; x <= maxX; ++x)
        {
            float px = static_cast<float>(x) + 0.5f;

            float w0 = ((fy1 - fy2) * (px - fx2) + (fx2 - fx1) * (py - fy2)) * invDenom;
            float w1 = ((fy2 - fy0) * (px - fx2) + (fx0 - fx2) * (py - fy2)) * invDenom;
            float w2 = 1.0f - w0 - w1;

            if (w0 < 0.0f || w1 < 0.0f || w2 < 0.0f)
                continue;

            uint8_t r, g, b, a;
            if (m_prim.iip)
            {
                r = clampU8(static_cast<int>(v0.r * w0 + v1.r * w1 + v2.r * w2));
                g = clampU8(static_cast<int>(v0.g * w0 + v1.g * w1 + v2.g * w2));
                b = clampU8(static_cast<int>(v0.b * w0 + v1.b * w1 + v2.b * w2));
                a = clampU8(static_cast<int>(v0.a * w0 + v1.a * w1 + v2.a * w2));
            }
            else
            {
                r = v2.r; g = v2.g; b = v2.b; a = v2.a;
            }

            if (m_prim.tme)
            {
                float is, it;
                uint16_t iu, iv;
                if (m_prim.fst)
                {
                    iu = static_cast<uint16_t>(v0.u * w0 + v1.u * w1 + v2.u * w2);
                    iv = static_cast<uint16_t>(v0.v * w0 + v1.v * w1 + v2.v * w2);
                    is = 0; it = 0;
                }
                else
                {
                    is = v0.s * w0 + v1.s * w1 + v2.s * w2;
                    it = v0.t * w0 + v1.t * w1 + v2.t * w2;
                    iu = 0; iv = 0;
                }
                uint32_t texel = sampleTexture(is, it, iu, iv);
                uint8_t tr = static_cast<uint8_t>(texel & 0xFF);
                uint8_t tg = static_cast<uint8_t>((texel >> 8) & 0xFF);
                uint8_t tb = static_cast<uint8_t>((texel >> 16) & 0xFF);
                uint8_t ta = static_cast<uint8_t>((texel >> 24) & 0xFF);

                if (diagThis && !diagSampled && x == 100 && y == 400) {
                    diagSampled = true;
                    std::fprintf(stderr, "[drawTri-DIAG #%d] sample@(%d,%d) w=(%.3f,%.3f,%.3f) iu=%u iv=%u texU=%d texV=%d texel=0x%08x tr=%u tg=%u tb=%u ta=%u\n",
                           s_menuTriDiag, x, y, w0, w1, w2, iu, iv, iu>>4, iv>>4, texel, tr, tg, tb, ta);
                }

                const auto &tex = ctx.tex0;
                if (tex.tfx == 0)
                {
                    r = clampU8((tr * r) >> 7);
                    g = clampU8((tg * g) >> 7);
                    b = clampU8((tb * b) >> 7);
                    a = ta;
                }
                else if (tex.tfx == 1)
                {
                    r = tr; g = tg; b = tb; a = ta;
                }
                else
                {
                    r = clampU8((tr * r) >> 7);
                    g = clampU8((tg * g) >> 7);
                    b = clampU8((tb * b) >> 7);
                    a = ta;
                }
            }

            if (diagThis) {
                ++diagPixelCount;
                if (r | g | b) ++diagNonBlackCount;
            }
            writePixel(x, y, r, g, b, a);
        }
    }

    if (diagThis) {
        std::fprintf(stderr, "[drawTri-DIAG #%d] DONE: %d pixels drawn, %d non-black\n",
               s_menuTriDiag, diagPixelCount, diagNonBlackCount);
        uint32_t fbOff = ctx.frame.fbp * 8192u + 400u * fbStride(ctx.frame.fbw, ctx.frame.psm) + 100u * 4u;
        if (fbOff + 4 <= m_vramSize) {
            uint32_t fbVal;
            std::memcpy(&fbVal, m_vram + fbOff, 4);
            std::fprintf(stderr, "[drawTri-DIAG #%d] FB probe @(100,400) off=0x%x val=0x%08x\n",
                   s_menuTriDiag, fbOff, fbVal);
        }
    }
}

// ---------------------------------------------------------------------------
// Line rasterizer (PRIM types 1, 2)
// ---------------------------------------------------------------------------

void GS::drawLine()
{
    const GSVertex &v0 = m_vtxQueue[0];
    const GSVertex &v1 = m_vtxQueue[1];
    const auto &ctx = activeContext();

    int ofx = ctx.xyoffset.ofx >> 4;
    int ofy = ctx.xyoffset.ofy >> 4;

    int x0 = static_cast<int>(v0.x) - ofx;
    int y0 = static_cast<int>(v0.y) - ofy;
    int x1 = static_cast<int>(v1.x) - ofx;
    int y1 = static_cast<int>(v1.y) - ofy;

    int dx = std::abs(x1 - x0);
    int dy = -std::abs(y1 - y0);
    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;
    int err = dx + dy;

    int totalSteps = std::max(std::abs(x1 - x0), std::abs(y1 - y0));
    if (totalSteps == 0) totalSteps = 1;
    int step = 0;

    for (;;)
    {
        float t = static_cast<float>(step) / static_cast<float>(totalSteps);
        uint8_t r, g, b, a;
        if (m_prim.iip)
        {
            r = clampU8(static_cast<int>(v0.r + (v1.r - v0.r) * t));
            g = clampU8(static_cast<int>(v0.g + (v1.g - v0.g) * t));
            b = clampU8(static_cast<int>(v0.b + (v1.b - v0.b) * t));
            a = clampU8(static_cast<int>(v0.a + (v1.a - v0.a) * t));
        }
        else
        {
            r = v1.r; g = v1.g; b = v1.b; a = v1.a;
        }

        writePixel(x0, y0, r, g, b, a);

        if (x0 == x1 && y0 == y1)
            break;

        int e2 = 2 * err;
        if (e2 >= dy) { err += dy; x0 += sx; }
        if (e2 <= dx) { err += dx; y0 += sy; }
        ++step;
    }
}

// ---------------------------------------------------------------------------
// Image transfer (HWREG / GIF IMAGE mode)
// ---------------------------------------------------------------------------

void GS::processImageData(const uint8_t *data, uint32_t sizeBytes)
{
    if (m_trxdir != 0 || !m_vram)
        return; // only host->local transfers

    uint32_t dbp = m_bitbltbuf.dbp;
    uint8_t dbw = m_bitbltbuf.dbw;
    uint8_t dpsm = m_bitbltbuf.dpsm;

    if (dbw == 0) dbw = 1;
    uint32_t base = dbp * 256u;
    uint32_t bpp = bitsPerPixel(dpsm);
    uint32_t stridePixels = static_cast<uint32_t>(dbw) * 64u;

    uint32_t rrw = m_trxreg.rrw;
    uint32_t rrh = m_trxreg.rrh;
    uint32_t dsax = m_trxpos.dsax;
    uint32_t dsay = m_trxpos.dsay;

    if (bpp == 4)
    {
        uint32_t strideBytes = stridePixels / 2u;
        if (strideBytes == 0) strideBytes = 1;
        uint32_t rowBytes = (rrw + 1u) / 2u;
        uint32_t offset = 0;

        while (offset < sizeBytes && m_hwregY < rrh)
        {
            uint32_t dstY = dsay + m_hwregY;
            uint32_t rowStart = base + dstY * strideBytes + (dsax / 2u);
            uint32_t bytesThisRow = rowBytes - (m_hwregX / 2u);
            uint32_t bytesAvail = sizeBytes - offset;
            if (bytesThisRow > bytesAvail)
                bytesThisRow = bytesAvail;

            if (rowStart + (m_hwregX / 2u) + bytesThisRow <= m_vramSize)
            {
                std::memcpy(m_vram + rowStart + (m_hwregX / 2u), data + offset, bytesThisRow);
            }

            offset += bytesThisRow;
            m_hwregX = 0;
            ++m_hwregY;
        }
    }
    else if (dpsm == GS_PSM_CT24 || dpsm == GS_PSM_Z24)
    {
        uint32_t storageBpp = 4;
        uint32_t transferBpp = 3;
        uint32_t storageStride = stridePixels * storageBpp;

        uint32_t offset = 0;
        while (offset < sizeBytes && m_hwregY < rrh)
        {
            uint32_t dstY = dsay + m_hwregY;
            uint32_t pixelsLeft = rrw - m_hwregX;
            uint32_t srcBytesLeft = pixelsLeft * transferBpp;
            uint32_t bytesAvail = sizeBytes - offset;
            uint32_t pixelsToCopy = pixelsLeft;
            if (srcBytesLeft > bytesAvail)
                pixelsToCopy = bytesAvail / transferBpp;

            if (pixelsToCopy == 0)
                break;

            uint32_t dstOff = base + dstY * storageStride + (dsax + m_hwregX) * storageBpp;
            if (dstOff + pixelsToCopy * storageBpp <= m_vramSize && pixelsToCopy > 0)
            {
                for (uint32_t p = 0; p < pixelsToCopy; ++p)
                {
                    m_vram[dstOff + p * 4 + 0] = data[offset + p * 3 + 0];
                    m_vram[dstOff + p * 4 + 1] = data[offset + p * 3 + 1];
                    m_vram[dstOff + p * 4 + 2] = data[offset + p * 3 + 2];
                    m_vram[dstOff + p * 4 + 3] = 0x80;
                }
            }

            offset += pixelsToCopy * transferBpp;
            m_hwregX += pixelsToCopy;
            if (m_hwregX >= rrw)
            {
                m_hwregX = 0;
                ++m_hwregY;
            }
        }

    }
    else
    {
        uint32_t bytesPerPixel = bpp / 8u;
        if (bytesPerPixel == 0) bytesPerPixel = 4;
        uint32_t strideBytes = stridePixels * bytesPerPixel;
        uint32_t rowBytes = rrw * bytesPerPixel;

        uint32_t offset = 0;
        while (offset < sizeBytes && m_hwregY < rrh)
        {
            uint32_t dstY = dsay + m_hwregY;
            uint32_t pixelsLeft = rrw - m_hwregX;
            uint32_t bytesLeft = pixelsLeft * bytesPerPixel;
            uint32_t bytesAvail = sizeBytes - offset;
            if (bytesLeft > bytesAvail)
                bytesLeft = (bytesAvail / bytesPerPixel) * bytesPerPixel;

            uint32_t dstOff = base + dstY * strideBytes + (dsax + m_hwregX) * bytesPerPixel;
            if (dstOff + bytesLeft <= m_vramSize && bytesLeft > 0)
                std::memcpy(m_vram + dstOff, data + offset, bytesLeft);

            uint32_t pixelsCopied = bytesLeft / bytesPerPixel;
            offset += bytesLeft;
            m_hwregX += pixelsCopied;
            if (m_hwregX >= rrw)
            {
                m_hwregX = 0;
                ++m_hwregY;
            }
        }
    }
}

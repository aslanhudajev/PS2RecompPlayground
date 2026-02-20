#include "ps2_gs.h"
#include "ps2_memory.h"
#include <algorithm>
#include <cmath>
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

// ---------------------------------------------------------------------------
// GIF packet parser
// ---------------------------------------------------------------------------

void GS::processGIFPacket(const uint8_t *data, uint32_t sizeBytes)
{
    if (!data || sizeBytes < 16 || !m_vram)
        return;

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

        bool pre = ((tagLo >> 46) & 1) != 0;
        if (pre)
        {
            uint64_t primVal = (tagLo >> 47) & 0x7FF;
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
                    writeRegisterPacked(regs[r], lo, hi);
                }
            }
        }
        else if (flg == GIF_FMT_REGLIST)
        {
            for (uint32_t loop = 0; loop < nloop; ++loop)
            {
                for (uint32_t r = 0; r < nreg; ++r)
                {
                    if (offset + 8 > sizeBytes)
                        return;
                    uint64_t val = loadLE64(data + offset);
                    offset += 8;
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
    case 0x03: // UV
        m_curU = static_cast<uint16_t>(lo & 0x3FFF);
        m_curV = static_cast<uint16_t>((lo >> 16) & 0x3FFF);
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
    case 0x0F: // A+D
    {
        uint8_t addr = static_cast<uint8_t>(hi & 0xFF);
        writeRegister(addr, lo);
        break;
    }
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
        m_curU = static_cast<uint16_t>(value & 0x3FFF);
        m_curV = static_cast<uint16_t>((value >> 16) & 0x3FFF);
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
        int ci = (regAddr == GS_REG_FRAME_2) ? 1 : 0;
        m_ctx[ci].frame.fbp = static_cast<uint32_t>(value & 0x1FF);
        m_ctx[ci].frame.fbw = static_cast<uint32_t>((value >> 16) & 0x3F);
        m_ctx[ci].frame.psm = static_cast<uint8_t>((value >> 24) & 0x3F);
        m_ctx[ci].frame.fbmsk = static_cast<uint32_t>((value >> 32) & 0xFFFFFFFF);
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

    uint32_t fbBase = ctx.frame.fbp * 2048u;
    uint32_t stride = fbStride(ctx.frame.fbw, ctx.frame.psm);
    if (stride == 0) return;

    uint32_t off = fbBase + static_cast<uint32_t>(y) * stride + static_cast<uint32_t>(x) * 4u;
    if (off + 4 > m_vramSize)
        return;

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
        return 0xFF00FFFFu; // magenta fallback
    uint32_t texel;
    std::memcpy(&texel, m_vram + off, 4);
    return texel;
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

    return 0xFF00FFFFu; // magenta for unsupported formats
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
        // Textured sprite
        const auto &tex = ctx.tex0;
        int texW = 1 << tex.tw;
        int texH = 1 << tex.th;
        if (texW == 0) texW = 1;
        if (texH == 0) texH = 1;

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
                else
                    texel = 0xFF00FFFFu;

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

    // Bounding box
    int minX = static_cast<int>(std::floor(std::min({fx0, fx1, fx2})));
    int maxX = static_cast<int>(std::ceil(std::max({fx0, fx1, fx2})));
    int minY = static_cast<int>(std::floor(std::min({fy0, fy1, fy2})));
    int maxY = static_cast<int>(std::ceil(std::max({fy0, fy1, fy2})));

    minX = clampInt(minX, ctx.scissor.x0, ctx.scissor.x1);
    maxX = clampInt(maxX, ctx.scissor.x0, ctx.scissor.x1);
    minY = clampInt(minY, ctx.scissor.y0, ctx.scissor.y1);
    maxY = clampInt(maxY, ctx.scissor.y0, ctx.scissor.y1);

    float denom = (fy1 - fy2) * (fx0 - fx2) + (fx2 - fx1) * (fy0 - fy2);
    if (std::fabs(denom) < 0.001f)
        return; // degenerate

    float invDenom = 1.0f / denom;

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

            writePixel(x, y, r, g, b, a);
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
    uint32_t strideBytes = stridePixels * (bpp / 8u);
    if (strideBytes == 0) strideBytes = stridePixels * 4u;

    uint32_t rrw = m_trxreg.rrw;
    uint32_t rrh = m_trxreg.rrh;
    uint32_t dsax = m_trxpos.dsax;
    uint32_t dsay = m_trxpos.dsay;

    uint32_t bytesPerPixel = bpp / 8u;
    if (bytesPerPixel == 0) bytesPerPixel = 1;

    uint32_t offset = 0;
    while (offset < sizeBytes)
    {
        if (m_hwregY >= rrh)
            break;

        uint32_t dstX = dsax + m_hwregX;
        uint32_t dstY = dsay + m_hwregY;
        uint32_t dstOff = base + dstY * strideBytes + dstX * bytesPerPixel;

        if (dstOff + bytesPerPixel <= m_vramSize && offset + bytesPerPixel <= sizeBytes)
        {
            std::memcpy(m_vram + dstOff, data + offset, bytesPerPixel);
        }

        offset += bytesPerPixel;
        ++m_hwregX;
        if (m_hwregX >= rrw)
        {
            m_hwregX = 0;
            ++m_hwregY;
        }
    }
}

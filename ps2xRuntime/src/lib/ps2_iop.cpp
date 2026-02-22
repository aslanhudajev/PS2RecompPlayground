#include "ps2_iop.h"

IOP::IOP()
{
    reset();
}

void IOP::init(uint8_t *rdram)
{
    m_rdram = rdram;
}

void IOP::reset()
{
    std::memset(m_sifRegs, 0, sizeof(m_sifRegs));
    m_nextBankId = 1;
    m_loadedBanks.clear();
}

// ---------------------------------------------------------------------------
// SIF soft registers
// ---------------------------------------------------------------------------

void IOP::setSReg(uint32_t index, uint32_t value)
{
    if (index >= SIF_SREG_COUNT)
        return;
    m_sifRegs[index] = value;
    syncRegToMemory(index);
}

uint32_t IOP::getSReg(uint32_t index) const
{
    if (index >= SIF_SREG_COUNT)
        return 0;
    return m_sifRegs[index];
}

void IOP::syncRegToMemory(uint32_t index)
{
    if (!m_rdram || index >= SIF_SREG_COUNT)
        return;
    uint32_t addr = SIF_SREG_MEM_BASE + index * 4u;
    std::memcpy(m_rdram + addr, &m_sifRegs[index], sizeof(uint32_t));
}

// ---------------------------------------------------------------------------
// Memory helpers
// ---------------------------------------------------------------------------

uint32_t IOP::readU32(uint32_t addr) const
{
    if (!m_rdram)
        return 0;
    uint32_t v;
    std::memcpy(&v, m_rdram + addr, sizeof(v));
    return v;
}

void IOP::writeU32(uint32_t addr, uint32_t val)
{
    if (!m_rdram)
        return;
    std::memcpy(m_rdram + addr, &val, sizeof(val));
}

void IOP::writeU16(uint32_t addr, uint16_t val)
{
    if (!m_rdram)
        return;
    std::memcpy(m_rdram + addr, &val, sizeof(val));
}

std::string IOP::readCString(uint32_t addr, uint32_t maxLen) const
{
    if (!m_rdram)
        return {};
    const char *p = reinterpret_cast<const char *>(m_rdram + addr);
    size_t len = strnlen(p, maxLen);
    return std::string(p, len);
}

// ---------------------------------------------------------------------------
// RPC dispatch
// ---------------------------------------------------------------------------

bool IOP::handleRPC(uint32_t sid, uint32_t rpcNum,
                    uint32_t sendBufAddr, uint32_t sendSize,
                    uint32_t recvBufAddr, uint32_t recvSize)
{
    switch (sid)
    {
    case IOP_SID_DCS:
        return handleDCS(rpcNum, sendBufAddr, sendSize, recvBufAddr, recvSize);
    default:
        return false;
    }
}

// ---------------------------------------------------------------------------
// DCS audio module
// ---------------------------------------------------------------------------
// The real DCS.IRX runs on the IOP and handles audio streaming / bank loading.
// We emulate the RPC protocol so that the EE-side audio code can load banks,
// query bank info, and issue playback commands without hanging or crashing.
// No actual audio is produced.
// ---------------------------------------------------------------------------

bool IOP::handleDCS(uint32_t rpcNum,
                    uint32_t sendBufAddr, uint32_t sendSize,
                    uint32_t recvBufAddr, uint32_t recvSize)
{
    // Zero the ENTIRE receive buffer up-front.  Many DCS commands use large
    // recv buffers (e.g. MPUT uses 1024 bytes).  The EE-side code parses
    // multiple fields out of this buffer; leaving stale data causes the game
    // to see phantom responses.
    if (m_rdram && recvBufAddr && recvSize > 0)
    {
        std::memset(m_rdram + recvBufAddr, 0, recvSize);
    }

    switch (rpcNum)
    {
    case DCS_CMD_STOP_STREAM:
    {
        uint32_t cur = m_sifRegs[SIF_SREG_STREAM];
        m_sifRegs[SIF_SREG_STREAM] = cur & ~1u;
        syncRegToMemory(SIF_SREG_STREAM);

        break;
    }
    case DCS_CMD_LOAD_BANK:
    {
        // Send buffer layout (at sendBufAddr, 32 bytes):
        //   [0]  uint32 filenamePtr  - RDRAM address of null-terminated filename
        //   [4]  uint32 filenameLen  - length including null
        //   [8]  uint32 fileOffset   - byte offset into the disc/data file
        //   [12] uint32 fileSize     - byte count to load
        //
        // Recv buffer layout (at recvBufAddr, 32 bytes):
        //   [0]  int32  result       - 0 = success, <0 = error
        //   [4]  uint32 loadToken    - opaque token (stored in DCS slot)
        //
        // The bank ID is communicated via sreg[29]. aud_poll reads it and
        // passes it through to AudioLoadComplete, which stores it in the
        // bank descriptor and uses it for subsequent BANK_INFO queries.

        uint32_t filenamePtr = 0;
        uint32_t fileOffset = 0;
        uint32_t fileSize = 0;
        std::string filename;

        if (m_rdram && sendBufAddr && sendSize >= 16)
        {
            filenamePtr = readU32(sendBufAddr);
            fileOffset  = readU32(sendBufAddr + 8);
            fileSize    = readU32(sendBufAddr + 12);
            if (filenamePtr)
                filename = readCString(filenamePtr);
        }

        uint32_t bankId = m_nextBankId++;

        DcsBankInfo info;
        info.bankId    = bankId;
        info.filename  = filename;
        info.fileOffset = fileOffset;
        info.fileSize  = fileSize;
        info.numSounds = 128;
        info.numStreams = 0;
        m_loadedBanks[bankId] = std::move(info);

        // Signal completion with this bank's unique ID.
        // aud_poll reads sreg[29]; when > 0 it invokes the AudioLoadComplete
        // callback which stores the value as the bank handle.
        m_sifRegs[SIF_SREG_LOAD_DONE] = bankId;
        syncRegToMemory(SIF_SREG_LOAD_DONE);

        // Recv: result=0 (success), token=bankId
        if (m_rdram && recvBufAddr && recvSize >= 8)
        {
            writeU32(recvBufAddr, 0);        // success
            writeU32(recvBufAddr + 4, bankId);
        }

        break;
    }
    case DCS_CMD_BANK_INFO:
    {
        // Send buffer: [0] int32 bankId
        // Recv buffer: [0] int32 bankId, [4] uint16 numSounds, [8] uint16 numStreams

        int32_t bankId = 0;
        if (m_rdram && sendBufAddr && sendSize >= 4)
            bankId = static_cast<int32_t>(readU32(sendBufAddr));

        uint16_t numSounds = 0;
        uint16_t numStreams = 0;

        auto it = m_loadedBanks.find(static_cast<uint32_t>(bankId));
        if (it != m_loadedBanks.end())
        {
            numSounds = it->second.numSounds;
            numStreams = it->second.numStreams;
        }
        else if (bankId > 0)
        {
            numSounds = 128;
        }

        if (m_rdram && recvBufAddr && recvSize >= 10)
        {
            writeU32(recvBufAddr, static_cast<uint32_t>(bankId));
            writeU16(recvBufAddr + 4, numSounds);
            writeU16(recvBufAddr + 8, numStreams);
        }

        break;
    }
    case DCS_CMD_UNLOAD_BANK:
    {
        int32_t bankId = 0;
        if (m_rdram && sendBufAddr && sendSize >= 4)
            bankId = static_cast<int32_t>(readU32(sendBufAddr));

        m_loadedBanks.erase(static_cast<uint32_t>(bankId));

        break;
    }
    case DCS_CMD_FLUSH_BANKS:
    {
        m_loadedBanks.clear();
        break;
    }
    case DCS_CMD_INIT:
    {
        m_nextBankId = 1;
        m_loadedBanks.clear();
        break;
    }
    case DCS_CMD_SET_OUTPUT:
        break;
    case DCS_CMD_STOP_ALL:
    {
        m_sifRegs[SIF_SREG_STREAM] = 0;
        syncRegToMemory(SIF_SREG_STREAM);
        m_sifRegs[SIF_SREG_SOUND_DATA] = 0;
        syncRegToMemory(SIF_SREG_SOUND_DATA);
        break;
    }
    case DCS_CMD_MPUT:
        break;
    default:
        break;
    }

    return true;
}

#include "ps2_iop.h"
#include <iostream>

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
// The real DCS.IRX runs on the IOP and handles audio streaming.
// We emulate just enough to keep the EE-side audio code from hanging:
//   - STOP_STREAM (0xc): clear the "playing" bit so stream_playing() returns 0
//   - INIT (0x13): acknowledge and return success
//   - Everything else: write 0 (success) to the receive buffer
// ---------------------------------------------------------------------------

bool IOP::handleDCS(uint32_t rpcNum,
                    uint32_t sendBufAddr, uint32_t sendSize,
                    uint32_t recvBufAddr, uint32_t recvSize)
{
    // Zero the ENTIRE receive buffer up-front.  Many DCS commands use large
    // recv buffers (e.g. MPUT uses 1024 bytes).  The EE-side code parses
    // multiple fields out of this buffer; leaving stale data causes the game
    // to see phantom responses.  Zeroing guarantees count fields are 0 and
    // all status words read as "success / nothing pending".
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

        std::cout << "[IOP:DCS] STOP_STREAM → sreg[0x1f] "
                  << cur << " → " << m_sifRegs[SIF_SREG_STREAM] << std::endl;
        break;
    }
    case DCS_CMD_LOAD_BANK:
    {
        // Signal immediate completion via SIF sreg 29.
        // The EE-side aud_poll() reads sreg 29; when > 0 it invokes the
        // AudioLoadComplete callback, which frees the DCS load slot and
        // decrements the load counter.  Without this, EmptyDcsLoad finds
        // all 4 slots occupied → "> MAX DCS LOADS" fatal error.
        m_sifRegs[SIF_SREG_LOAD_DONE] = 1;
        syncRegToMemory(SIF_SREG_LOAD_DONE);

        static int loadCount = 0;
        if (++loadCount <= 10)
            std::cout << "[IOP:DCS] LOAD_BANK → sreg[29]=1 (immediate completion)"
                      << std::endl;
        break;
    }
    case DCS_CMD_INIT:
    {
        std::cout << "[IOP:DCS] INIT acknowledged" << std::endl;
        break;
    }
    case DCS_CMD_SET_OUTPUT:
    {
        static bool once = false;
        if (!once) { std::cout << "[IOP:DCS] SET_OUTPUT acknowledged" << std::endl; once = true; }
        break;
    }
    case DCS_CMD_STOP_ALL:
    {
        // Clear stream-playing flag so any subsequent stream_playing() check
        // returns 0, and clear the "sound data ready" sreg so aud_poll doesn't
        // try to queue more MPUT commands for sounds that no longer exist.
        m_sifRegs[SIF_SREG_STREAM] = 0;
        syncRegToMemory(SIF_SREG_STREAM);
        m_sifRegs[SIF_SREG_SOUND_DATA] = 0;
        syncRegToMemory(SIF_SREG_SOUND_DATA);

        static bool once = false;
        if (!once) { std::cout << "[IOP:DCS] STOP_ALL acknowledged" << std::endl; once = true; }
        break;
    }
    case DCS_CMD_MPUT:
    {
        // The EE sends up to 1024 bytes of packed audio commands.  The real
        // DCS.IRX would process them and write per-command acknowledgments
        // back into the recv buffer.  Since we have no audio DSP, the zeroed
        // recv buffer (count=0 in the first word) tells mput_flush there are
        // no responses to process, which skips the callback loop cleanly.
        static int mputCount = 0;
        if (++mputCount <= 5)
            std::cout << "[IOP:DCS] MPUT (" << sendSize << " bytes) → recv zeroed" << std::endl;
        break;
    }
    default:
    {
        static int logCount = 0;
        if (logCount < 20)
        {
            std::cout << "[IOP:DCS] rpcNum=0x" << std::hex << rpcNum << std::dec
                      << " (unhandled, returning success)" << std::endl;
            ++logCount;
        }
        break;
    }
    }

    return true;
}

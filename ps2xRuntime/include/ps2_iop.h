#ifndef PS2_IOP_H
#define PS2_IOP_H

#include <cstdint>
#include <string>
#include <unordered_map>

// Known IOP module server IDs (SIF RPC)
constexpr uint32_t IOP_SID_DCS = 0x0DC50DC5u; // DCS audio streamer

// DCS RPC command numbers (passed as rpcNum to sceSifCallRpc)
constexpr uint32_t DCS_CMD_RESET       = 0x01u;
constexpr uint32_t DCS_CMD_POLL        = 0x02u;
constexpr uint32_t DCS_CMD_SET_OUTPUT  = 0x03u;
constexpr uint32_t DCS_CMD_LOAD_BANK   = 0x04u;
constexpr uint32_t DCS_CMD_UNLOAD_BANK = 0x05u;
constexpr uint32_t DCS_CMD_FLUSH_BANKS = 0x06u;
constexpr uint32_t DCS_CMD_BANK_INFO   = 0x07u;
constexpr uint32_t DCS_CMD_STOP_STREAM = 0x0Cu;
constexpr uint32_t DCS_CMD_STOP_ALL    = 0x0Du;
constexpr uint32_t DCS_CMD_MPUT        = 0x11u;
constexpr uint32_t DCS_CMD_VOLUME      = 0x12u;
constexpr uint32_t DCS_CMD_INIT        = 0x13u;

// SIF soft register indices used by the audio system
constexpr uint32_t SIF_SREG_LOAD_DONE  = 29u;   // aud_poll reads this; >0 = load completed
constexpr uint32_t SIF_SREG_SOUND_DATA = 30u;   // aud_poll reads this; >0 = sound data ready
constexpr uint32_t SIF_SREG_STREAM     = 0x1Fu; // bit 0 = playing, bit 1 = timeout
constexpr uint32_t SIF_SREG_COUNT      = 32u;

// EE-side memory address where soft registers are also stored (for compatibility)
constexpr uint32_t SIF_SREG_MEM_BASE   = 0x3E4480u;

struct DcsBankInfo
{
    uint32_t    bankId = 0;
    std::string filename;
    uint32_t    fileOffset = 0;
    uint32_t    fileSize = 0;
    uint16_t    numSounds = 0;
    uint16_t    numStreams = 0;
};

class IOP
{
public:
    IOP();
    ~IOP() = default;

    void init(uint8_t *rdram);
    void reset();

    // SIF soft registers
    void setSReg(uint32_t index, uint32_t value);
    uint32_t getSReg(uint32_t index) const;

    // Handle an RPC call from the EE side.
    // Returns true if the module was recognized and the call was processed.
    // If false, the caller should fall through to existing RPC handling.
    bool handleRPC(uint32_t sid, uint32_t rpcNum,
                   uint32_t sendBufAddr, uint32_t sendSize,
                   uint32_t recvBufAddr, uint32_t recvSize);

private:
    uint8_t *m_rdram = nullptr;
    uint32_t m_sifRegs[SIF_SREG_COUNT] = {};

    // DCS bank tracking
    uint32_t m_nextBankId = 1;
    std::unordered_map<uint32_t, DcsBankInfo> m_loadedBanks;

    // Sync soft regs to EE-visible memory at SIF_SREG_MEM_BASE
    void syncRegToMemory(uint32_t index);

    // Module-specific RPC handlers
    bool handleDCS(uint32_t rpcNum,
                   uint32_t sendBufAddr, uint32_t sendSize,
                   uint32_t recvBufAddr, uint32_t recvSize);

    // Helpers
    uint32_t readU32(uint32_t addr) const;
    void writeU32(uint32_t addr, uint32_t val);
    void writeU16(uint32_t addr, uint16_t val);
    std::string readCString(uint32_t addr, uint32_t maxLen = 1024) const;
};

#endif // PS2_IOP_H

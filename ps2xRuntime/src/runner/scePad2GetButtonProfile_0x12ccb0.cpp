#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif
#include <cstring>

// Ghidra decomp: uses scePad2GetSide2, copies profile to param_2, returns size or -1.
// Provide default DualShock button profile when pad is connected.
void scePad2GetButtonProfile_0x12ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("scePad2GetButtonProfile_0x12ccb0");
#endif
    const int port = static_cast<int>(getRegU32(ctx, 4));
    const uint32_t destAddr = getRegU32(ctx, 5);
    const uint32_t maxSize = getRegU32(ctx, 6);  // 0xf = 15 typically
    uint8_t* dest = getMemPtr(rdram, destAddr);
    int32_t result = -1;
    if (dest && runtime) {
        uint8_t stateBuf[32];
        if (runtime->padBackend().readState(port, 0, stateBuf, sizeof(stateBuf)) && (stateBuf[0] & 1) != 0) {
            // Pad connected. Default DualShock button profile (standard mapping).
            static const uint8_t kDefaultProfile[15] = {
                0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
                0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d
            };
            const size_t copySize = (maxSize > 0 && maxSize <= 15) ? maxSize : 15u;
            std::memcpy(dest, kDefaultProfile, copySize);
            result = static_cast<int32_t>(copySize);
        }
    }
    setReturnU32(ctx, static_cast<uint32_t>(result));
    ctx->pc = getRegU32(ctx, 31);
}

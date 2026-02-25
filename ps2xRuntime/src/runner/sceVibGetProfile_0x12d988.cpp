#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif
#include <cstring>

// Ghidra decomp: sceDbcReceiveData(port, 0x01038002, stack, buf) -> returns stack[0] or -1.
// Emulate vibration profile: write "supported" to buf, return 0 for success.
void sceVibGetProfile_0x12d988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceVibGetProfile_0x12d988");
#endif
    const int port = static_cast<int>(getRegU32(ctx, 4));
    const uint32_t destAddr = getRegU32(ctx, 5);
    const uint32_t maxSize = getRegU32(ctx, 6);  // 0xf = 15 typically
    uint8_t* dest = getMemPtr(rdram, destAddr);
    int32_t result = -1;
    if (dest && runtime) {
        uint8_t stateBuf[32];
        if (runtime->padBackend().readState(port, 0, stateBuf, sizeof(stateBuf)) && (stateBuf[0] & 1) != 0) {
            // Pad connected, vibration supported via SetGamepadVibration.
            if (maxSize >= 4u) {
                std::memset(dest, 0, maxSize);
                dest[0] = 0x01;  // vibration supported
                result = 0;
            }
        }
    }
    setReturnU32(ctx, static_cast<uint32_t>(result));
    ctx->pc = getRegU32(ctx, 31);
}

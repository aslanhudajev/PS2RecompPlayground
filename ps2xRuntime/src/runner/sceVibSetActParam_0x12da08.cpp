#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#include "raylib.h"  // Must be before any header that includes windows.h (ps2_log.h brings windows.h -> symbol clash)

// Ghidra decomp: sceDbcSendData2(port, 0x103400b, cmd, data); maps to host vibration
void sceVibSetActParam_0x12da08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    (void)runtime;
    const int port = static_cast<int>(getRegU32(ctx, 4));
    const uint32_t param2 = getRegU32(ctx, 5);
    const uint32_t param3Addr = getRegU32(ctx, 6);
    const uint32_t param4 = getRegU32(ctx, 7);
    const uint32_t param5Addr = getRegU32(ctx, 8);
    const uint8_t* p3 = getConstMemPtr(rdram, param3Addr);
    const uint8_t* p5 = getConstMemPtr(rdram, param5Addr);
    if (p3 && p5 && param2 > 0u && param4 > 0u) {
        float left = 0.0f, right = 0.0f;
        std::memcpy(&left, p5, sizeof(float));
        if (param4 >= 8u)
            std::memcpy(&right, p5 + 4, sizeof(float));
        if (left < 0.0f) left = 0.0f; else if (left > 1.0f) left = 1.0f;
        if (right < 0.0f) right = 0.0f; else if (right > 1.0f) right = 1.0f;
        const int gp = (port == 0 || port == 1) ? port : 0;
        if (IsGamepadAvailable(gp))
            SetGamepadVibration(gp, left, right, 0.1f);
    }
    ctx->pc = getRegU32(ctx, 31);
}

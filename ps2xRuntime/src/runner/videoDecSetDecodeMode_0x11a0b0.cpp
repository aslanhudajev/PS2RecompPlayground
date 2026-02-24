#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecSetDecodeMode
// Address: 0x11a0b0 - 0x11a0b8
void videoDecSetDecodeMode_0x11a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecSetDecodeMode_0x11a0b0");
#endif

    ctx->pc = 0x11a0b0u;

    // 0x11a0b0: 0x8047d96  j           func_11F658
    ctx->pc = 0x11A0B0u;
    ctx->pc = 0x11F658u;
    if (runtime->hasFunction(0x11F658u)) {
        auto targetFn = runtime->lookupFunction(0x11F658u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceMpegSetDecodeMode_0x11f658(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11A0B8u;
}

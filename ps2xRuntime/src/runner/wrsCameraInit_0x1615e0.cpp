#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsCameraInit
// Address: 0x1615e0 - 0x1615e8
void wrsCameraInit_0x1615e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsCameraInit_0x1615e0");
#endif

    ctx->pc = 0x1615e0u;

    // 0x1615e0: 0x805844c  j           func_161130
    ctx->pc = 0x1615E0u;
    ctx->pc = 0x161130u;
    if (runtime->hasFunction(0x161130u)) {
        auto targetFn = runtime->lookupFunction(0x161130u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        camera_init_0x161130(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1615E8u;
}

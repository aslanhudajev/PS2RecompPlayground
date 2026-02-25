#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsRomClose
// Address: 0x1414a0 - 0x1414a8
void wrsRomClose_0x1414a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsRomClose_0x1414a0");
#endif

    ctx->pc = 0x1414a0u;

    // 0x1414a0: 0x805052c  j           func_1414B0
    ctx->pc = 0x1414A0u;
    ctx->pc = 0x1414B0u;
    if (runtime->hasFunction(0x1414B0u)) {
        auto targetFn = runtime->lookupFunction(0x1414B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        wrsRomFinish_0x1414b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1414A8u;
}

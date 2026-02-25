#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: TerminateLibrary
// Address: 0x137f50 - 0x137f58
void TerminateLibrary_0x137f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("TerminateLibrary_0x137f50");
#endif

    ctx->pc = 0x137f50u;

    // 0x137f50: 0x804dcfc  j           func_1373F0
    ctx->pc = 0x137F50u;
    ctx->pc = 0x1373F0u;
    if (runtime->hasFunction(0x1373F0u)) {
        auto targetFn = runtime->lookupFunction(0x1373F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        InitTLB_0x1373f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x137F58u;
}

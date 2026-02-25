#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: switchThread
// Address: 0x1884e0 - 0x1884e8
void switchThread_0x1884e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("switchThread_0x1884e0");
#endif

    ctx->pc = 0x1884e0u;

    // 0x1884e0: 0x804bac4  j           func_12EB10
    ctx->pc = 0x1884E0u;
    ctx->pc = 0x1884E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1884E0u;
            // 0x1884e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EB10u;
    if (runtime->hasFunction(0x12EB10u)) {
        auto targetFn = runtime->lookupFunction(0x12EB10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        RotateThreadReadyQueue_0x12eb10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1884E8u;
}

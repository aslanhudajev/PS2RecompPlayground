#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrimTriStripG
// Address: 0x170ab0 - 0x170abc
void wrsPrimTriStripG_0x170ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrimTriStripG_0x170ab0");
#endif

    ctx->pc = 0x170ab0u;

    // 0x170ab0: 0x2402200c  addiu       $v0, $zero, 0x200C
    ctx->pc = 0x170ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8204));
    // 0x170ab4: 0x805c528  j           func_1714A0
    ctx->pc = 0x170AB4u;
    ctx->pc = 0x170AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170AB4u;
            // 0x170ab8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1714A0u;
    if (runtime->hasFunction(0x1714A0u)) {
        auto targetFn = runtime->lookupFunction(0x1714A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        wrsPrimAddG_0x1714a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170ABCu;
}

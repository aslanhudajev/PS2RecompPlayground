#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsUnInitTask
// Address: 0x142d60 - 0x142d6c
void wrsUnInitTask_0x142d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsUnInitTask_0x142d60");
#endif

    ctx->pc = 0x142d60u;

    // 0x142d60: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142d64: 0x804bb1c  j           func_12EC70
    ctx->pc = 0x142D64u;
    ctx->pc = 0x142D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142D64u;
            // 0x142d68: 0x8c247a48  lw          $a0, 0x7A48($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (runtime->hasFunction(0x12EC70u)) {
        auto targetFn = runtime->lookupFunction(0x12EC70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        DeleteSema_0x12ec70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x142D6Cu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrimSpriteF
// Address: 0x170a80 - 0x170a8c
void wrsPrimSpriteF_0x170a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrimSpriteF_0x170a80");
#endif

    ctx->pc = 0x170a80u;

    // 0x170a80: 0x24022006  addiu       $v0, $zero, 0x2006
    ctx->pc = 0x170a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8198));
    // 0x170a84: 0x805c5f0  j           func_1717C0
    ctx->pc = 0x170A84u;
    ctx->pc = 0x170A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A84u;
            // 0x170a88: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (runtime->hasFunction(0x1717C0u)) {
        auto targetFn = runtime->lookupFunction(0x1717C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        wrsPrimAddF_0x1717c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170A8Cu;
}

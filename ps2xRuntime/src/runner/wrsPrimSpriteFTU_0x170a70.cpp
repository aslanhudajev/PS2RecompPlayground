#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrimSpriteFTU
// Address: 0x170a70 - 0x170a7c
void wrsPrimSpriteFTU_0x170a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrimSpriteFTU_0x170a70");
#endif

    ctx->pc = 0x170a70u;

    // 0x170a70: 0x24022116  addiu       $v0, $zero, 0x2116
    ctx->pc = 0x170a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8470));
    // 0x170a74: 0x805c2b0  j           func_170AC0
    ctx->pc = 0x170A74u;
    ctx->pc = 0x170A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A74u;
            // 0x170a78: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170AC0u;
    if (runtime->hasFunction(0x170AC0u)) {
        auto targetFn = runtime->lookupFunction(0x170AC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        wrsPrimAddFT_0x170ac0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170A7Cu;
}

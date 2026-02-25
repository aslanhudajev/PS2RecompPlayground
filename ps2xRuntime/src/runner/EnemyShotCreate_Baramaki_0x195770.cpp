#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Baramaki
// Address: 0x195770 - 0x195784
void EnemyShotCreate_Baramaki_0x195770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Baramaki_0x195770");
#endif

    ctx->pc = 0x195770u;

    // 0x195770: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x195770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195774: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x195774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195778: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x195778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19577c: 0x8065674  j           func_1959D0
    ctx->pc = 0x19577Cu;
    ctx->pc = 0x195780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19577Cu;
            // 0x195780: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1959D0u;
    if (runtime->hasFunction(0x1959D0u)) {
        auto targetFn = runtime->lookupFunction(0x1959D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EnemyShotCreate_0x1959d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x195784u;
}

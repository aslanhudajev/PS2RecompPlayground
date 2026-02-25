#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Zanzoudan
// Address: 0x1951e0 - 0x1951f4
void EnemyShotCreate_Zanzoudan_0x1951e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Zanzoudan_0x1951e0");
#endif

    ctx->pc = 0x1951e0u;

    // 0x1951e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1951e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1951e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951e8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1951e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1951ec: 0x8065674  j           func_1959D0
    ctx->pc = 0x1951ECu;
    ctx->pc = 0x1951F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1951ECu;
            // 0x1951f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1959D0u;
    if (runtime->hasFunction(0x1959D0u)) {
        auto targetFn = runtime->lookupFunction(0x1959D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EnemyShotCreate_0x1959d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1951F4u;
}

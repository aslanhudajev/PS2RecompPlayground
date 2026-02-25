#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsGpResetChain
// Address: 0x170950 - 0x170964
void wrsGpResetChain_0x170950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsGpResetChain_0x170950");
#endif

    ctx->pc = 0x170950u;

    // 0x170950: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x170950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x170954: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x170954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x170958: 0x24423940  addiu       $v0, $v0, 0x3940
    ctx->pc = 0x170958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14656));
    // 0x17095c: 0x8041b46  j           func_106D18
    ctx->pc = 0x17095Cu;
    ctx->pc = 0x170960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17095Cu;
            // 0x170960: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D18u;
    if (runtime->hasFunction(0x106D18u)) {
        auto targetFn = runtime->lookupFunction(0x106D18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceGpResetChain_0x106d18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170964u;
}

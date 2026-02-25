#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrimSpriteFM
// Address: 0x170aa0 - 0x170aac
void wrsPrimSpriteFM_0x170aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrimSpriteFM_0x170aa0");
#endif

    ctx->pc = 0x170aa0u;

    // 0x170aa0: 0x24022806  addiu       $v0, $zero, 0x2806
    ctx->pc = 0x170aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10246));
    // 0x170aa4: 0x805c6c0  j           func_171B00
    ctx->pc = 0x170AA4u;
    ctx->pc = 0x170AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170AA4u;
            // 0x170aa8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B00u;
    if (runtime->hasFunction(0x171B00u)) {
        auto targetFn = runtime->lookupFunction(0x171B00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        wrsPrimAddM_0x171b00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170AACu;
}

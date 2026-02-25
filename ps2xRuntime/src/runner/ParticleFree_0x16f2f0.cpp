#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ParticleFree
// Address: 0x16f2f0 - 0x16f338
void ParticleFree_0x16f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ParticleFree_0x16f2f0");
#endif

    ctx->pc = 0x16f2f0u;

    // 0x16f2f0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x16f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x16f2f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F2F4u;
    {
        const bool branch_taken_0x16f2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f2f4) {
            ctx->pc = 0x16F308u;
            goto label_16f308;
        }
    }
    ctx->pc = 0x16F2FCu;
    // 0x16f2fc: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x16f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x16f300: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x16f300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x16f304: 0x0  nop
    ctx->pc = 0x16f304u;
    // NOP
label_16f308:
    // 0x16f308: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x16f308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x16f30c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F30Cu;
    {
        const bool branch_taken_0x16f30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f30c) {
            ctx->pc = 0x16F320u;
            goto label_16f320;
        }
    }
    ctx->pc = 0x16F314u;
    // 0x16f314: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x16f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x16f318: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16F318u;
    {
        const bool branch_taken_0x16f318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F318u;
            // 0x16f31c: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f318) {
            ctx->pc = 0x16F330u;
            goto label_16f330;
        }
    }
    ctx->pc = 0x16F320u;
label_16f320:
    // 0x16f320: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x16f320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x16f324: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f328: 0xac224cf0  sw          $v0, 0x4CF0($at)
    ctx->pc = 0x16f328u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19696), GPR_U32(ctx, 2));
    // 0x16f32c: 0x0  nop
    ctx->pc = 0x16f32cu;
    // NOP
label_16f330:
    // 0x16f330: 0x804ea3c  j           func_13A8F0
    ctx->pc = 0x16F330u;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        free_0x13a8f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16F338u;
}

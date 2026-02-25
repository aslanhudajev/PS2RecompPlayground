#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PointsFree
// Address: 0x1db830 - 0x1db878
void PointsFree_0x1db830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PointsFree_0x1db830");
#endif

    ctx->pc = 0x1db830u;

    // 0x1db830: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1db830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1db834: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB834u;
    {
        const bool branch_taken_0x1db834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db834) {
            ctx->pc = 0x1DB848u;
            goto label_1db848;
        }
    }
    ctx->pc = 0x1DB83Cu;
    // 0x1db83c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1db83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1db840: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x1db840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x1db844: 0x0  nop
    ctx->pc = 0x1db844u;
    // NOP
label_1db848:
    // 0x1db848: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1db848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1db84c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB84Cu;
    {
        const bool branch_taken_0x1db84c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db84c) {
            ctx->pc = 0x1DB860u;
            goto label_1db860;
        }
    }
    ctx->pc = 0x1DB854u;
    // 0x1db854: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1db854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1db858: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB858u;
    {
        const bool branch_taken_0x1db858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB858u;
            // 0x1db85c: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db858) {
            ctx->pc = 0x1DB870u;
            goto label_1db870;
        }
    }
    ctx->pc = 0x1DB860u;
label_1db860:
    // 0x1db860: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1db860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1db864: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db868: 0xac221d80  sw          $v0, 0x1D80($at)
    ctx->pc = 0x1db868u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7552), GPR_U32(ctx, 2));
    // 0x1db86c: 0x0  nop
    ctx->pc = 0x1db86cu;
    // NOP
label_1db870:
    // 0x1db870: 0x804ea3c  j           func_13A8F0
    ctx->pc = 0x1DB870u;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        free_0x13a8f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DB878u;
}

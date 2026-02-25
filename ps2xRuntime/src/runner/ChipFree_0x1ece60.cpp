#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ChipFree
// Address: 0x1ece60 - 0x1ecea8
void ChipFree_0x1ece60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ChipFree_0x1ece60");
#endif

    ctx->pc = 0x1ece60u;

    // 0x1ece60: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1ece60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1ece64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECE64u;
    {
        const bool branch_taken_0x1ece64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ece64) {
            ctx->pc = 0x1ECE78u;
            goto label_1ece78;
        }
    }
    ctx->pc = 0x1ECE6Cu;
    // 0x1ece6c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1ece6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1ece70: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x1ece70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x1ece74: 0x0  nop
    ctx->pc = 0x1ece74u;
    // NOP
label_1ece78:
    // 0x1ece78: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1ece78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1ece7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECE7Cu;
    {
        const bool branch_taken_0x1ece7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ece7c) {
            ctx->pc = 0x1ECE90u;
            goto label_1ece90;
        }
    }
    ctx->pc = 0x1ECE84u;
    // 0x1ece84: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1ece84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1ece88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECE88u;
    {
        const bool branch_taken_0x1ece88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE88u;
            // 0x1ece8c: 0xac62003c  sw          $v0, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece88) {
            ctx->pc = 0x1ECEA0u;
            goto label_1ecea0;
        }
    }
    ctx->pc = 0x1ECE90u;
label_1ece90:
    // 0x1ece90: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1ece90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1ece94: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ece94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ece98: 0xac223838  sw          $v0, 0x3838($at)
    ctx->pc = 0x1ece98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14392), GPR_U32(ctx, 2));
    // 0x1ece9c: 0x0  nop
    ctx->pc = 0x1ece9cu;
    // NOP
label_1ecea0:
    // 0x1ecea0: 0x804ea3c  j           func_13A8F0
    ctx->pc = 0x1ECEA0u;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        free_0x13a8f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1ECEA8u;
}

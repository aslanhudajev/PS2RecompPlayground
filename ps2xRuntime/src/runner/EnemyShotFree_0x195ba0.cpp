#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotFree
// Address: 0x195ba0 - 0x195be8
void EnemyShotFree_0x195ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotFree_0x195ba0");
#endif

    ctx->pc = 0x195ba0u;

    // 0x195ba0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x195ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x195ba4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x195BA4u;
    {
        const bool branch_taken_0x195ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ba4) {
            ctx->pc = 0x195BB8u;
            goto label_195bb8;
        }
    }
    ctx->pc = 0x195BACu;
    // 0x195bac: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x195bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x195bb0: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x195bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x195bb4: 0x0  nop
    ctx->pc = 0x195bb4u;
    // NOP
label_195bb8:
    // 0x195bb8: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x195bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x195bbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x195BBCu;
    {
        const bool branch_taken_0x195bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195bbc) {
            ctx->pc = 0x195BD0u;
            goto label_195bd0;
        }
    }
    ctx->pc = 0x195BC4u;
    // 0x195bc4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x195bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x195bc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x195BC8u;
    {
        const bool branch_taken_0x195bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195BC8u;
            // 0x195bcc: 0xac620048  sw          $v0, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195bc8) {
            ctx->pc = 0x195BE0u;
            goto label_195be0;
        }
    }
    ctx->pc = 0x195BD0u;
label_195bd0:
    // 0x195bd0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x195bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x195bd4: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x195bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x195bd8: 0xac220238  sw          $v0, 0x238($at)
    ctx->pc = 0x195bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 568), GPR_U32(ctx, 2));
    // 0x195bdc: 0x0  nop
    ctx->pc = 0x195bdcu;
    // NOP
label_195be0:
    // 0x195be0: 0x804ea3c  j           func_13A8F0
    ctx->pc = 0x195BE0u;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        free_0x13a8f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x195BE8u;
}

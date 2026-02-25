#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyFree
// Address: 0x16e9d0 - 0x16ea20
void EnemyFree_0x16e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyFree_0x16e9d0");
#endif

    ctx->pc = 0x16e9d0u;

    // 0x16e9d0: 0xac8000f4  sw          $zero, 0xF4($a0)
    ctx->pc = 0x16e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 0));
    // 0x16e9d4: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x16e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
    // 0x16e9d8: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x16e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x16e9dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E9DCu;
    {
        const bool branch_taken_0x16e9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e9dc) {
            ctx->pc = 0x16E9F0u;
            goto label_16e9f0;
        }
    }
    ctx->pc = 0x16E9E4u;
    // 0x16e9e4: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x16e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x16e9e8: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x16e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
    // 0x16e9ec: 0x0  nop
    ctx->pc = 0x16e9ecu;
    // NOP
label_16e9f0:
    // 0x16e9f0: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x16e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x16e9f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E9F4u;
    {
        const bool branch_taken_0x16e9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e9f4) {
            ctx->pc = 0x16EA08u;
            goto label_16ea08;
        }
    }
    ctx->pc = 0x16E9FCu;
    // 0x16e9fc: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x16e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x16ea00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16EA00u;
    {
        const bool branch_taken_0x16ea00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA00u;
            // 0x16ea04: 0xac620108  sw          $v0, 0x108($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea00) {
            ctx->pc = 0x16EA18u;
            goto label_16ea18;
        }
    }
    ctx->pc = 0x16EA08u;
label_16ea08:
    // 0x16ea08: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x16ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x16ea0c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16ea0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16ea10: 0xac224ce0  sw          $v0, 0x4CE0($at)
    ctx->pc = 0x16ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19680), GPR_U32(ctx, 2));
    // 0x16ea14: 0x0  nop
    ctx->pc = 0x16ea14u;
    // NOP
label_16ea18:
    // 0x16ea18: 0x804ea3c  j           func_13A8F0
    ctx->pc = 0x16EA18u;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        free_0x13a8f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16EA20u;
}

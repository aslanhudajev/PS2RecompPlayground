#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyAlloc
// Address: 0x16ea20 - 0x16ea64
void EnemyAlloc_0x16ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyAlloc_0x16ea20");
#endif

    ctx->pc = 0x16ea20u;

    // 0x16ea20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ea24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ea28: 0xc04ea32  jal         func_13A8C8
    ctx->pc = 0x16EA28u;
    SET_GPR_U32(ctx, 31, 0x16EA30u);
    ctx->pc = 0x16EA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA28u;
            // 0x16ea2c: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8C8u;
    if (runtime->hasFunction(0x13A8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EA30u; }
        if (ctx->pc != 0x16EA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x13a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EA30u; }
        if (ctx->pc != 0x16EA30u) { return; }
    }
    ctx->pc = 0x16EA30u;
    // 0x16ea30: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x16ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x16ea34: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16ea34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16ea38: 0x8c234ce0  lw          $v1, 0x4CE0($at)
    ctx->pc = 0x16ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19680)));
    // 0x16ea3c: 0xac430108  sw          $v1, 0x108($v0)
    ctx->pc = 0x16ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 3));
    // 0x16ea40: 0x8c430108  lw          $v1, 0x108($v0)
    ctx->pc = 0x16ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x16ea44: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16EA44u;
    {
        const bool branch_taken_0x16ea44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea44) {
            ctx->pc = 0x16EA50u;
            goto label_16ea50;
        }
    }
    ctx->pc = 0x16EA4Cu;
    // 0x16ea4c: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x16ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
label_16ea50:
    // 0x16ea50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16ea50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16ea54: 0xac224ce0  sw          $v0, 0x4CE0($at)
    ctx->pc = 0x16ea54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19680), GPR_U32(ctx, 2));
    // 0x16ea58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ea58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ea5c: 0x3e00008  jr          $ra
    ctx->pc = 0x16EA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA5Cu;
            // 0x16ea60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EA50u: goto label_16ea50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EA64u;
}

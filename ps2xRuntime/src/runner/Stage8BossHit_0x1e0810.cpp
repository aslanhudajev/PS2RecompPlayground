#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage8BossHit
// Address: 0x1e0810 - 0x1e08ac
void Stage8BossHit_0x1e0810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage8BossHit_0x1e0810");
#endif

    ctx->pc = 0x1e0810u;

    // 0x1e0810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0818: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1e0818u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e081c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1e081cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e0820: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1e0820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1e0824: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0824u;
    {
        const bool branch_taken_0x1e0824 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1E0828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0824u;
            // 0x1e0828: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0824) {
            ctx->pc = 0x1E0838u;
            goto label_1e0838;
        }
    }
    ctx->pc = 0x1E082Cu;
    // 0x1e082c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1e082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1e0830: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0830u;
    {
        const bool branch_taken_0x1e0830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e0830) {
            ctx->pc = 0x1E0848u;
            goto label_1e0848;
        }
    }
    ctx->pc = 0x1E0838u;
label_1e0838:
    // 0x1e0838: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1e0838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1e083c: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x1e083cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e0840: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E0840u;
    {
        const bool branch_taken_0x1e0840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0840) {
            ctx->pc = 0x1E08A0u;
            goto label_1e08a0;
        }
    }
    ctx->pc = 0x1E0848u;
label_1e0848:
    // 0x1e0848: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1e0848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1e084c: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E084Cu;
    {
        const bool branch_taken_0x1e084c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1e084c) {
            ctx->pc = 0x1E0868u;
            goto label_1e0868;
        }
    }
    ctx->pc = 0x1E0854u;
    // 0x1e0854: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x1e0854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1e0858: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1e0858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1e085c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e085cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e0860: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1e0860u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1e0864: 0x0  nop
    ctx->pc = 0x1e0864u;
    // NOP
label_1e0868:
    // 0x1e0868: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1e0868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1e086c: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E086Cu;
    {
        const bool branch_taken_0x1e086c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1e086c) {
            ctx->pc = 0x1E08A0u;
            goto label_1e08a0;
        }
    }
    ctx->pc = 0x1E0874u;
    // 0x1e0874: 0x8ce5003c  lw          $a1, 0x3C($a3)
    ctx->pc = 0x1e0874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1e0878: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x1e0878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x1e087c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1e087cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1e0880: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1e0880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e0884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0888: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1e0888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1e088c: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1e088cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1e0890: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x1e0890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1e0894: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x1e0894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1e0898: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1E0898u;
    SET_GPR_U32(ctx, 31, 0x1E08A0u);
    ctx->pc = 0x1E089Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0898u;
            // 0x1e089c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08A0u; }
        if (ctx->pc != 0x1E08A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08A0u; }
        if (ctx->pc != 0x1E08A0u) { return; }
    }
    ctx->pc = 0x1E08A0u;
label_1e08a0:
    // 0x1e08a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e08a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e08a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E08A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E08A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08A4u;
            // 0x1e08a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0838u: goto label_1e0838;
            case 0x1E0848u: goto label_1e0848;
            case 0x1E0868u: goto label_1e0868;
            case 0x1E08A0u: goto label_1e08a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E08ACu;
}

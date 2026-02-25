#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyMoveFunction
// Address: 0x16e820 - 0x16e878
void EnemyMoveFunction_0x16e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyMoveFunction_0x16e820");
#endif

    ctx->pc = 0x16e820u;

label_16e820:
    // 0x16e820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16e824:
    // 0x16e824: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16e824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_16e828:
    // 0x16e828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16e82c:
    // 0x16e82c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16e830:
    // 0x16e830: 0x8c304ce0  lw          $s0, 0x4CE0($at)
    ctx->pc = 0x16e830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19680)));
label_16e834:
    // 0x16e834: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_16e838:
    if (ctx->pc == 0x16E838u) {
        ctx->pc = 0x16E83Cu;
        goto label_16e83c;
    }
    ctx->pc = 0x16E834u;
    {
        const bool branch_taken_0x16e834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e834) {
            ctx->pc = 0x16E868u;
            goto label_16e868;
        }
    }
    ctx->pc = 0x16E83Cu;
label_16e83c:
    // 0x16e83c: 0x0  nop
    ctx->pc = 0x16e83cu;
    // NOP
label_16e840:
    // 0x16e840: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x16e840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_16e844:
    // 0x16e844: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_16e848:
    if (ctx->pc == 0x16E848u) {
        ctx->pc = 0x16E848u;
            // 0x16e848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E84Cu;
        goto label_16e84c;
    }
    ctx->pc = 0x16E844u;
    {
        const bool branch_taken_0x16e844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E844u;
            // 0x16e848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e844) {
            ctx->pc = 0x16E858u;
            goto label_16e858;
        }
    }
    ctx->pc = 0x16E84Cu;
label_16e84c:
    // 0x16e84c: 0x60f809  jalr        $v1
label_16e850:
    if (ctx->pc == 0x16E850u) {
        ctx->pc = 0x16E854u;
        goto label_16e854;
    }
    ctx->pc = 0x16E84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E854u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E820u: goto label_16e820;
            case 0x16E824u: goto label_16e824;
            case 0x16E828u: goto label_16e828;
            case 0x16E82Cu: goto label_16e82c;
            case 0x16E830u: goto label_16e830;
            case 0x16E834u: goto label_16e834;
            case 0x16E838u: goto label_16e838;
            case 0x16E83Cu: goto label_16e83c;
            case 0x16E840u: goto label_16e840;
            case 0x16E844u: goto label_16e844;
            case 0x16E848u: goto label_16e848;
            case 0x16E84Cu: goto label_16e84c;
            case 0x16E850u: goto label_16e850;
            case 0x16E854u: goto label_16e854;
            case 0x16E858u: goto label_16e858;
            case 0x16E85Cu: goto label_16e85c;
            case 0x16E860u: goto label_16e860;
            case 0x16E864u: goto label_16e864;
            case 0x16E868u: goto label_16e868;
            case 0x16E86Cu: goto label_16e86c;
            case 0x16E870u: goto label_16e870;
            case 0x16E874u: goto label_16e874;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E854u; }
            if (ctx->pc != 0x16E854u) { return; }
        }
    }
    ctx->pc = 0x16E854u;
label_16e854:
    // 0x16e854: 0x0  nop
    ctx->pc = 0x16e854u;
    // NOP
label_16e858:
    // 0x16e858: 0x8e100108  lw          $s0, 0x108($s0)
    ctx->pc = 0x16e858u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_16e85c:
    // 0x16e85c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_16e860:
    if (ctx->pc == 0x16E860u) {
        ctx->pc = 0x16E864u;
        goto label_16e864;
    }
    ctx->pc = 0x16E85Cu;
    {
        const bool branch_taken_0x16e85c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e85c) {
            ctx->pc = 0x16E840u;
            goto label_16e840;
        }
    }
    ctx->pc = 0x16E864u;
label_16e864:
    // 0x16e864: 0x0  nop
    ctx->pc = 0x16e864u;
    // NOP
label_16e868:
    // 0x16e868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16e868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e86c:
    // 0x16e86c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16e870:
    // 0x16e870: 0x3e00008  jr          $ra
label_16e874:
    if (ctx->pc == 0x16E874u) {
        ctx->pc = 0x16E874u;
            // 0x16e874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16E878u;
        goto label_fallthrough_0x16e870;
    }
    ctx->pc = 0x16E870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E870u;
            // 0x16e874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E820u: goto label_16e820;
            case 0x16E824u: goto label_16e824;
            case 0x16E828u: goto label_16e828;
            case 0x16E82Cu: goto label_16e82c;
            case 0x16E830u: goto label_16e830;
            case 0x16E834u: goto label_16e834;
            case 0x16E838u: goto label_16e838;
            case 0x16E83Cu: goto label_16e83c;
            case 0x16E840u: goto label_16e840;
            case 0x16E844u: goto label_16e844;
            case 0x16E848u: goto label_16e848;
            case 0x16E84Cu: goto label_16e84c;
            case 0x16E850u: goto label_16e850;
            case 0x16E854u: goto label_16e854;
            case 0x16E858u: goto label_16e858;
            case 0x16E85Cu: goto label_16e85c;
            case 0x16E860u: goto label_16e860;
            case 0x16E864u: goto label_16e864;
            case 0x16E868u: goto label_16e868;
            case 0x16E86Cu: goto label_16e86c;
            case 0x16E870u: goto label_16e870;
            case 0x16E874u: goto label_16e874;
            default: break;
        }
        return;
    }
label_fallthrough_0x16e870:
    ctx->pc = 0x16E878u;
}

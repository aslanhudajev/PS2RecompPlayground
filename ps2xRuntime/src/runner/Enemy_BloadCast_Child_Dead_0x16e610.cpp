#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enemy_BloadCast_Child_Dead
// Address: 0x16e610 - 0x16e650
void Enemy_BloadCast_Child_Dead_0x16e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enemy_BloadCast_Child_Dead_0x16e610");
#endif

    ctx->pc = 0x16e610u;

label_16e610:
    // 0x16e610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16e614:
    // 0x16e614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16e614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16e618:
    // 0x16e618: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_16e61c:
    if (ctx->pc == 0x16E61Cu) {
        ctx->pc = 0x16E61Cu;
            // 0x16e61c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x16E620u;
        goto label_16e620;
    }
    ctx->pc = 0x16E618u;
    {
        const bool branch_taken_0x16e618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E618u;
            // 0x16e61c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e618) {
            ctx->pc = 0x16E640u;
            goto label_16e640;
        }
    }
    ctx->pc = 0x16E620u;
label_16e620:
    // 0x16e620: 0x8c900100  lw          $s0, 0x100($a0)
    ctx->pc = 0x16e620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_16e624:
    // 0x16e624: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x16e624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_16e628:
    // 0x16e628: 0x8c8200fc  lw          $v0, 0xFC($a0)
    ctx->pc = 0x16e628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
label_16e62c:
    // 0x16e62c: 0x40f809  jalr        $v0
label_16e630:
    if (ctx->pc == 0x16E630u) {
        ctx->pc = 0x16E634u;
        goto label_16e634;
    }
    ctx->pc = 0x16E62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E634u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E610u: goto label_16e610;
            case 0x16E614u: goto label_16e614;
            case 0x16E618u: goto label_16e618;
            case 0x16E61Cu: goto label_16e61c;
            case 0x16E620u: goto label_16e620;
            case 0x16E624u: goto label_16e624;
            case 0x16E628u: goto label_16e628;
            case 0x16E62Cu: goto label_16e62c;
            case 0x16E630u: goto label_16e630;
            case 0x16E634u: goto label_16e634;
            case 0x16E638u: goto label_16e638;
            case 0x16E63Cu: goto label_16e63c;
            case 0x16E640u: goto label_16e640;
            case 0x16E644u: goto label_16e644;
            case 0x16E648u: goto label_16e648;
            case 0x16E64Cu: goto label_16e64c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E634u; }
            if (ctx->pc != 0x16E634u) { return; }
        }
    }
    ctx->pc = 0x16E634u;
label_16e634:
    // 0x16e634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e638:
    // 0x16e638: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_16e63c:
    if (ctx->pc == 0x16E63Cu) {
        ctx->pc = 0x16E640u;
        goto label_16e640;
    }
    ctx->pc = 0x16E638u;
    {
        const bool branch_taken_0x16e638 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e638) {
            ctx->pc = 0x16E620u;
            goto label_16e620;
        }
    }
    ctx->pc = 0x16E640u;
label_16e640:
    // 0x16e640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16e640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e644:
    // 0x16e644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16e648:
    // 0x16e648: 0x3e00008  jr          $ra
label_16e64c:
    if (ctx->pc == 0x16E64Cu) {
        ctx->pc = 0x16E64Cu;
            // 0x16e64c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16E650u;
        goto label_fallthrough_0x16e648;
    }
    ctx->pc = 0x16E648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E648u;
            // 0x16e64c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E610u: goto label_16e610;
            case 0x16E614u: goto label_16e614;
            case 0x16E618u: goto label_16e618;
            case 0x16E61Cu: goto label_16e61c;
            case 0x16E620u: goto label_16e620;
            case 0x16E624u: goto label_16e624;
            case 0x16E628u: goto label_16e628;
            case 0x16E62Cu: goto label_16e62c;
            case 0x16E630u: goto label_16e630;
            case 0x16E634u: goto label_16e634;
            case 0x16E638u: goto label_16e638;
            case 0x16E63Cu: goto label_16e63c;
            case 0x16E640u: goto label_16e640;
            case 0x16E644u: goto label_16e644;
            case 0x16E648u: goto label_16e648;
            case 0x16E64Cu: goto label_16e64c;
            default: break;
        }
        return;
    }
label_fallthrough_0x16e648:
    ctx->pc = 0x16E650u;
}

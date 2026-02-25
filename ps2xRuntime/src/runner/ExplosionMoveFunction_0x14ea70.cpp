#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ExplosionMoveFunction
// Address: 0x14ea70 - 0x14eac0
void ExplosionMoveFunction_0x14ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ExplosionMoveFunction_0x14ea70");
#endif

    ctx->pc = 0x14ea70u;

label_14ea70:
    // 0x14ea70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14ea74:
    // 0x14ea74: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ea74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_14ea78:
    // 0x14ea78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14ea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14ea7c:
    // 0x14ea7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14ea80:
    // 0x14ea80: 0x8c249d20  lw          $a0, -0x62E0($at)
    ctx->pc = 0x14ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941984)));
label_14ea84:
    // 0x14ea84: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_14ea88:
    if (ctx->pc == 0x14EA88u) {
        ctx->pc = 0x14EA8Cu;
        goto label_14ea8c;
    }
    ctx->pc = 0x14EA84u;
    {
        const bool branch_taken_0x14ea84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea84) {
            ctx->pc = 0x14EAB0u;
            goto label_14eab0;
        }
    }
    ctx->pc = 0x14EA8Cu;
label_14ea8c:
    // 0x14ea8c: 0x0  nop
    ctx->pc = 0x14ea8cu;
    // NOP
label_14ea90:
    // 0x14ea90: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x14ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_14ea94:
    // 0x14ea94: 0x40f809  jalr        $v0
label_14ea98:
    if (ctx->pc == 0x14EA98u) {
        ctx->pc = 0x14EA98u;
            // 0x14ea98: 0x8c900028  lw          $s0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->pc = 0x14EA9Cu;
        goto label_14ea9c;
    }
    ctx->pc = 0x14EA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14EA9Cu);
        ctx->pc = 0x14EA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EA94u;
            // 0x14ea98: 0x8c900028  lw          $s0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EA70u: goto label_14ea70;
            case 0x14EA74u: goto label_14ea74;
            case 0x14EA78u: goto label_14ea78;
            case 0x14EA7Cu: goto label_14ea7c;
            case 0x14EA80u: goto label_14ea80;
            case 0x14EA84u: goto label_14ea84;
            case 0x14EA88u: goto label_14ea88;
            case 0x14EA8Cu: goto label_14ea8c;
            case 0x14EA90u: goto label_14ea90;
            case 0x14EA94u: goto label_14ea94;
            case 0x14EA98u: goto label_14ea98;
            case 0x14EA9Cu: goto label_14ea9c;
            case 0x14EAA0u: goto label_14eaa0;
            case 0x14EAA4u: goto label_14eaa4;
            case 0x14EAA8u: goto label_14eaa8;
            case 0x14EAACu: goto label_14eaac;
            case 0x14EAB0u: goto label_14eab0;
            case 0x14EAB4u: goto label_14eab4;
            case 0x14EAB8u: goto label_14eab8;
            case 0x14EABCu: goto label_14eabc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14EA9Cu; }
            if (ctx->pc != 0x14EA9Cu) { return; }
        }
    }
    ctx->pc = 0x14EA9Cu;
label_14ea9c:
    // 0x14ea9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14eaa0:
    // 0x14eaa0: 0x0  nop
    ctx->pc = 0x14eaa0u;
    // NOP
label_14eaa4:
    // 0x14eaa4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_14eaa8:
    if (ctx->pc == 0x14EAA8u) {
        ctx->pc = 0x14EAACu;
        goto label_14eaac;
    }
    ctx->pc = 0x14EAA4u;
    {
        const bool branch_taken_0x14eaa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14eaa4) {
            ctx->pc = 0x14EA90u;
            goto label_14ea90;
        }
    }
    ctx->pc = 0x14EAACu;
label_14eaac:
    // 0x14eaac: 0x0  nop
    ctx->pc = 0x14eaacu;
    // NOP
label_14eab0:
    // 0x14eab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14eab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14eab4:
    // 0x14eab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14eab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14eab8:
    // 0x14eab8: 0x3e00008  jr          $ra
label_14eabc:
    if (ctx->pc == 0x14EABCu) {
        ctx->pc = 0x14EABCu;
            // 0x14eabc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x14EAC0u;
        goto label_fallthrough_0x14eab8;
    }
    ctx->pc = 0x14EAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EAB8u;
            // 0x14eabc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EA70u: goto label_14ea70;
            case 0x14EA74u: goto label_14ea74;
            case 0x14EA78u: goto label_14ea78;
            case 0x14EA7Cu: goto label_14ea7c;
            case 0x14EA80u: goto label_14ea80;
            case 0x14EA84u: goto label_14ea84;
            case 0x14EA88u: goto label_14ea88;
            case 0x14EA8Cu: goto label_14ea8c;
            case 0x14EA90u: goto label_14ea90;
            case 0x14EA94u: goto label_14ea94;
            case 0x14EA98u: goto label_14ea98;
            case 0x14EA9Cu: goto label_14ea9c;
            case 0x14EAA0u: goto label_14eaa0;
            case 0x14EAA4u: goto label_14eaa4;
            case 0x14EAA8u: goto label_14eaa8;
            case 0x14EAACu: goto label_14eaac;
            case 0x14EAB0u: goto label_14eab0;
            case 0x14EAB4u: goto label_14eab4;
            case 0x14EAB8u: goto label_14eab8;
            case 0x14EABCu: goto label_14eabc;
            default: break;
        }
        return;
    }
label_fallthrough_0x14eab8:
    ctx->pc = 0x14EAC0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ParticleMoveFunction
// Address: 0x16ef20 - 0x16ef70
void ParticleMoveFunction_0x16ef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ParticleMoveFunction_0x16ef20");
#endif

    ctx->pc = 0x16ef20u;

label_16ef20:
    // 0x16ef20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16ef24:
    // 0x16ef24: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16ef24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_16ef28:
    // 0x16ef28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16ef2c:
    // 0x16ef2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16ef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16ef30:
    // 0x16ef30: 0x8c244cf0  lw          $a0, 0x4CF0($at)
    ctx->pc = 0x16ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19696)));
label_16ef34:
    // 0x16ef34: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_16ef38:
    if (ctx->pc == 0x16EF38u) {
        ctx->pc = 0x16EF3Cu;
        goto label_16ef3c;
    }
    ctx->pc = 0x16EF34u;
    {
        const bool branch_taken_0x16ef34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ef34) {
            ctx->pc = 0x16EF60u;
            goto label_16ef60;
        }
    }
    ctx->pc = 0x16EF3Cu;
label_16ef3c:
    // 0x16ef3c: 0x0  nop
    ctx->pc = 0x16ef3cu;
    // NOP
label_16ef40:
    // 0x16ef40: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_16ef44:
    // 0x16ef44: 0x40f809  jalr        $v0
label_16ef48:
    if (ctx->pc == 0x16EF48u) {
        ctx->pc = 0x16EF48u;
            // 0x16ef48: 0x8c900020  lw          $s0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->pc = 0x16EF4Cu;
        goto label_16ef4c;
    }
    ctx->pc = 0x16EF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16EF4Cu);
        ctx->pc = 0x16EF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF44u;
            // 0x16ef48: 0x8c900020  lw          $s0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EF20u: goto label_16ef20;
            case 0x16EF24u: goto label_16ef24;
            case 0x16EF28u: goto label_16ef28;
            case 0x16EF2Cu: goto label_16ef2c;
            case 0x16EF30u: goto label_16ef30;
            case 0x16EF34u: goto label_16ef34;
            case 0x16EF38u: goto label_16ef38;
            case 0x16EF3Cu: goto label_16ef3c;
            case 0x16EF40u: goto label_16ef40;
            case 0x16EF44u: goto label_16ef44;
            case 0x16EF48u: goto label_16ef48;
            case 0x16EF4Cu: goto label_16ef4c;
            case 0x16EF50u: goto label_16ef50;
            case 0x16EF54u: goto label_16ef54;
            case 0x16EF58u: goto label_16ef58;
            case 0x16EF5Cu: goto label_16ef5c;
            case 0x16EF60u: goto label_16ef60;
            case 0x16EF64u: goto label_16ef64;
            case 0x16EF68u: goto label_16ef68;
            case 0x16EF6Cu: goto label_16ef6c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EF4Cu; }
            if (ctx->pc != 0x16EF4Cu) { return; }
        }
    }
    ctx->pc = 0x16EF4Cu;
label_16ef4c:
    // 0x16ef4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ef4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ef50:
    // 0x16ef50: 0x0  nop
    ctx->pc = 0x16ef50u;
    // NOP
label_16ef54:
    // 0x16ef54: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_16ef58:
    if (ctx->pc == 0x16EF58u) {
        ctx->pc = 0x16EF5Cu;
        goto label_16ef5c;
    }
    ctx->pc = 0x16EF54u;
    {
        const bool branch_taken_0x16ef54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ef54) {
            ctx->pc = 0x16EF40u;
            goto label_16ef40;
        }
    }
    ctx->pc = 0x16EF5Cu;
label_16ef5c:
    // 0x16ef5c: 0x0  nop
    ctx->pc = 0x16ef5cu;
    // NOP
label_16ef60:
    // 0x16ef60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ef60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16ef64:
    // 0x16ef64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ef64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16ef68:
    // 0x16ef68: 0x3e00008  jr          $ra
label_16ef6c:
    if (ctx->pc == 0x16EF6Cu) {
        ctx->pc = 0x16EF6Cu;
            // 0x16ef6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16EF70u;
        goto label_fallthrough_0x16ef68;
    }
    ctx->pc = 0x16EF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF68u;
            // 0x16ef6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EF20u: goto label_16ef20;
            case 0x16EF24u: goto label_16ef24;
            case 0x16EF28u: goto label_16ef28;
            case 0x16EF2Cu: goto label_16ef2c;
            case 0x16EF30u: goto label_16ef30;
            case 0x16EF34u: goto label_16ef34;
            case 0x16EF38u: goto label_16ef38;
            case 0x16EF3Cu: goto label_16ef3c;
            case 0x16EF40u: goto label_16ef40;
            case 0x16EF44u: goto label_16ef44;
            case 0x16EF48u: goto label_16ef48;
            case 0x16EF4Cu: goto label_16ef4c;
            case 0x16EF50u: goto label_16ef50;
            case 0x16EF54u: goto label_16ef54;
            case 0x16EF58u: goto label_16ef58;
            case 0x16EF5Cu: goto label_16ef5c;
            case 0x16EF60u: goto label_16ef60;
            case 0x16EF64u: goto label_16ef64;
            case 0x16EF68u: goto label_16ef68;
            case 0x16EF6Cu: goto label_16ef6c;
            default: break;
        }
        return;
    }
label_fallthrough_0x16ef68:
    ctx->pc = 0x16EF70u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotMoveFunction
// Address: 0x194220 - 0x194270
void EnemyShotMoveFunction_0x194220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotMoveFunction_0x194220");
#endif

    ctx->pc = 0x194220u;

label_194220:
    // 0x194220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_194224:
    // 0x194224: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x194224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
label_194228:
    // 0x194228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19422c:
    // 0x19422c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19422cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_194230:
    // 0x194230: 0x8c240238  lw          $a0, 0x238($at)
    ctx->pc = 0x194230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 568)));
label_194234:
    // 0x194234: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_194238:
    if (ctx->pc == 0x194238u) {
        ctx->pc = 0x19423Cu;
        goto label_19423c;
    }
    ctx->pc = 0x194234u;
    {
        const bool branch_taken_0x194234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x194234) {
            ctx->pc = 0x194260u;
            goto label_194260;
        }
    }
    ctx->pc = 0x19423Cu;
label_19423c:
    // 0x19423c: 0x0  nop
    ctx->pc = 0x19423cu;
    // NOP
label_194240:
    // 0x194240: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x194240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_194244:
    // 0x194244: 0x40f809  jalr        $v0
label_194248:
    if (ctx->pc == 0x194248u) {
        ctx->pc = 0x194248u;
            // 0x194248: 0x8c900048  lw          $s0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->pc = 0x19424Cu;
        goto label_19424c;
    }
    ctx->pc = 0x194244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19424Cu);
        ctx->pc = 0x194248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194244u;
            // 0x194248: 0x8c900048  lw          $s0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194220u: goto label_194220;
            case 0x194224u: goto label_194224;
            case 0x194228u: goto label_194228;
            case 0x19422Cu: goto label_19422c;
            case 0x194230u: goto label_194230;
            case 0x194234u: goto label_194234;
            case 0x194238u: goto label_194238;
            case 0x19423Cu: goto label_19423c;
            case 0x194240u: goto label_194240;
            case 0x194244u: goto label_194244;
            case 0x194248u: goto label_194248;
            case 0x19424Cu: goto label_19424c;
            case 0x194250u: goto label_194250;
            case 0x194254u: goto label_194254;
            case 0x194258u: goto label_194258;
            case 0x19425Cu: goto label_19425c;
            case 0x194260u: goto label_194260;
            case 0x194264u: goto label_194264;
            case 0x194268u: goto label_194268;
            case 0x19426Cu: goto label_19426c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19424Cu; }
            if (ctx->pc != 0x19424Cu) { return; }
        }
    }
    ctx->pc = 0x19424Cu;
label_19424c:
    // 0x19424c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19424cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194250:
    // 0x194250: 0x0  nop
    ctx->pc = 0x194250u;
    // NOP
label_194254:
    // 0x194254: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_194258:
    if (ctx->pc == 0x194258u) {
        ctx->pc = 0x19425Cu;
        goto label_19425c;
    }
    ctx->pc = 0x194254u;
    {
        const bool branch_taken_0x194254 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x194254) {
            ctx->pc = 0x194240u;
            goto label_194240;
        }
    }
    ctx->pc = 0x19425Cu;
label_19425c:
    // 0x19425c: 0x0  nop
    ctx->pc = 0x19425cu;
    // NOP
label_194260:
    // 0x194260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x194260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_194264:
    // 0x194264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_194268:
    // 0x194268: 0x3e00008  jr          $ra
label_19426c:
    if (ctx->pc == 0x19426Cu) {
        ctx->pc = 0x19426Cu;
            // 0x19426c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x194270u;
        goto label_fallthrough_0x194268;
    }
    ctx->pc = 0x194268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19426Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194268u;
            // 0x19426c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194220u: goto label_194220;
            case 0x194224u: goto label_194224;
            case 0x194228u: goto label_194228;
            case 0x19422Cu: goto label_19422c;
            case 0x194230u: goto label_194230;
            case 0x194234u: goto label_194234;
            case 0x194238u: goto label_194238;
            case 0x19423Cu: goto label_19423c;
            case 0x194240u: goto label_194240;
            case 0x194244u: goto label_194244;
            case 0x194248u: goto label_194248;
            case 0x19424Cu: goto label_19424c;
            case 0x194250u: goto label_194250;
            case 0x194254u: goto label_194254;
            case 0x194258u: goto label_194258;
            case 0x19425Cu: goto label_19425c;
            case 0x194260u: goto label_194260;
            case 0x194264u: goto label_194264;
            case 0x194268u: goto label_194268;
            case 0x19426Cu: goto label_19426c;
            default: break;
        }
        return;
    }
label_fallthrough_0x194268:
    ctx->pc = 0x194270u;
}

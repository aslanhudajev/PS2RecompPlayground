#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PointsMoveFunction
// Address: 0x1db370 - 0x1db3c0
void PointsMoveFunction_0x1db370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PointsMoveFunction_0x1db370");
#endif

    ctx->pc = 0x1db370u;

label_1db370:
    // 0x1db370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1db374:
    // 0x1db374: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
label_1db378:
    // 0x1db378: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1db37c:
    // 0x1db37c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1db380:
    // 0x1db380: 0x8c241d80  lw          $a0, 0x1D80($at)
    ctx->pc = 0x1db380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7552)));
label_1db384:
    // 0x1db384: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1db388:
    if (ctx->pc == 0x1DB388u) {
        ctx->pc = 0x1DB38Cu;
        goto label_1db38c;
    }
    ctx->pc = 0x1DB384u;
    {
        const bool branch_taken_0x1db384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db384) {
            ctx->pc = 0x1DB3B0u;
            goto label_1db3b0;
        }
    }
    ctx->pc = 0x1DB38Cu;
label_1db38c:
    // 0x1db38c: 0x0  nop
    ctx->pc = 0x1db38cu;
    // NOP
label_1db390:
    // 0x1db390: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1db390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1db394:
    // 0x1db394: 0x40f809  jalr        $v0
label_1db398:
    if (ctx->pc == 0x1DB398u) {
        ctx->pc = 0x1DB398u;
            // 0x1db398: 0x8c900040  lw          $s0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->pc = 0x1DB39Cu;
        goto label_1db39c;
    }
    ctx->pc = 0x1DB394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB39Cu);
        ctx->pc = 0x1DB398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB394u;
            // 0x1db398: 0x8c900040  lw          $s0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB370u: goto label_1db370;
            case 0x1DB374u: goto label_1db374;
            case 0x1DB378u: goto label_1db378;
            case 0x1DB37Cu: goto label_1db37c;
            case 0x1DB380u: goto label_1db380;
            case 0x1DB384u: goto label_1db384;
            case 0x1DB388u: goto label_1db388;
            case 0x1DB38Cu: goto label_1db38c;
            case 0x1DB390u: goto label_1db390;
            case 0x1DB394u: goto label_1db394;
            case 0x1DB398u: goto label_1db398;
            case 0x1DB39Cu: goto label_1db39c;
            case 0x1DB3A0u: goto label_1db3a0;
            case 0x1DB3A4u: goto label_1db3a4;
            case 0x1DB3A8u: goto label_1db3a8;
            case 0x1DB3ACu: goto label_1db3ac;
            case 0x1DB3B0u: goto label_1db3b0;
            case 0x1DB3B4u: goto label_1db3b4;
            case 0x1DB3B8u: goto label_1db3b8;
            case 0x1DB3BCu: goto label_1db3bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB39Cu; }
            if (ctx->pc != 0x1DB39Cu) { return; }
        }
    }
    ctx->pc = 0x1DB39Cu;
label_1db39c:
    // 0x1db39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db3a0:
    // 0x1db3a0: 0x0  nop
    ctx->pc = 0x1db3a0u;
    // NOP
label_1db3a4:
    // 0x1db3a4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_1db3a8:
    if (ctx->pc == 0x1DB3A8u) {
        ctx->pc = 0x1DB3ACu;
        goto label_1db3ac;
    }
    ctx->pc = 0x1DB3A4u;
    {
        const bool branch_taken_0x1db3a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db3a4) {
            ctx->pc = 0x1DB390u;
            goto label_1db390;
        }
    }
    ctx->pc = 0x1DB3ACu;
label_1db3ac:
    // 0x1db3ac: 0x0  nop
    ctx->pc = 0x1db3acu;
    // NOP
label_1db3b0:
    // 0x1db3b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1db3b4:
    // 0x1db3b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1db3b8:
    // 0x1db3b8: 0x3e00008  jr          $ra
label_1db3bc:
    if (ctx->pc == 0x1DB3BCu) {
        ctx->pc = 0x1DB3BCu;
            // 0x1db3bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1DB3C0u;
        goto label_fallthrough_0x1db3b8;
    }
    ctx->pc = 0x1DB3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3B8u;
            // 0x1db3bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB370u: goto label_1db370;
            case 0x1DB374u: goto label_1db374;
            case 0x1DB378u: goto label_1db378;
            case 0x1DB37Cu: goto label_1db37c;
            case 0x1DB380u: goto label_1db380;
            case 0x1DB384u: goto label_1db384;
            case 0x1DB388u: goto label_1db388;
            case 0x1DB38Cu: goto label_1db38c;
            case 0x1DB390u: goto label_1db390;
            case 0x1DB394u: goto label_1db394;
            case 0x1DB398u: goto label_1db398;
            case 0x1DB39Cu: goto label_1db39c;
            case 0x1DB3A0u: goto label_1db3a0;
            case 0x1DB3A4u: goto label_1db3a4;
            case 0x1DB3A8u: goto label_1db3a8;
            case 0x1DB3ACu: goto label_1db3ac;
            case 0x1DB3B0u: goto label_1db3b0;
            case 0x1DB3B4u: goto label_1db3b4;
            case 0x1DB3B8u: goto label_1db3b8;
            case 0x1DB3BCu: goto label_1db3bc;
            default: break;
        }
        return;
    }
label_fallthrough_0x1db3b8:
    ctx->pc = 0x1DB3C0u;
}

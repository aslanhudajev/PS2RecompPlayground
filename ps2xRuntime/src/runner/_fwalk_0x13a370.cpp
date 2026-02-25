#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _fwalk
// Address: 0x13a370 - 0x13a404
void _fwalk_0x13a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_fwalk_0x13a370");
#endif

    ctx->pc = 0x13a370u;

label_13a370:
    // 0x13a370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_13a374:
    // 0x13a374: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x13a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_13a378:
    // 0x13a378: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x13a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_13a37c:
    // 0x13a37c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13a37cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13a380:
    // 0x13a380: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_13a384:
    // 0x13a384: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13a384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a388:
    // 0x13a388: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_13a38c:
    // 0x13a38c: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x13a38cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_13a390:
    // 0x13a390: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x13a390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_13a394:
    // 0x13a394: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_13a398:
    if (ctx->pc == 0x13A398u) {
        ctx->pc = 0x13A398u;
            // 0x13a398: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x13A39Cu;
        goto label_13a39c;
    }
    ctx->pc = 0x13A394u;
    {
        const bool branch_taken_0x13a394 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A394u;
            // 0x13a398: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a394) {
            ctx->pc = 0x13A3E0u;
            goto label_13a3e0;
        }
    }
    ctx->pc = 0x13A39Cu;
label_13a39c:
    // 0x13a39c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x13a39cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_13a3a0:
    // 0x13a3a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x13a3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_13a3a4:
    // 0x13a3a4: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_13a3a8:
    if (ctx->pc == 0x13A3A8u) {
        ctx->pc = 0x13A3A8u;
            // 0x13a3a8: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x13A3ACu;
        goto label_13a3ac;
    }
    ctx->pc = 0x13A3A4u;
    {
        const bool branch_taken_0x13a3a4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x13A3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3A4u;
            // 0x13a3a8: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3a4) {
            ctx->pc = 0x13A3D4u;
            goto label_13a3d4;
        }
    }
    ctx->pc = 0x13A3ACu;
label_13a3ac:
    // 0x13a3ac: 0x0  nop
    ctx->pc = 0x13a3acu;
    // NOP
label_13a3b0:
    // 0x13a3b0: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x13a3b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_13a3b4:
    // 0x13a3b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_13a3b8:
    if (ctx->pc == 0x13A3B8u) {
        ctx->pc = 0x13A3B8u;
            // 0x13a3b8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x13A3BCu;
        goto label_13a3bc;
    }
    ctx->pc = 0x13A3B4u;
    {
        const bool branch_taken_0x13a3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a3b4) {
            ctx->pc = 0x13A3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3B4u;
            // 0x13a3b8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A3CCu;
            goto label_13a3cc;
        }
    }
    ctx->pc = 0x13A3BCu;
label_13a3bc:
    // 0x13a3bc: 0x280f809  jalr        $s4
label_13a3c0:
    if (ctx->pc == 0x13A3C0u) {
        ctx->pc = 0x13A3C0u;
            // 0x13a3c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13A3C4u;
        goto label_13a3c4;
    }
    ctx->pc = 0x13A3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x13A3C4u);
        ctx->pc = 0x13A3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3BCu;
            // 0x13a3c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13A370u: goto label_13a370;
            case 0x13A374u: goto label_13a374;
            case 0x13A378u: goto label_13a378;
            case 0x13A37Cu: goto label_13a37c;
            case 0x13A380u: goto label_13a380;
            case 0x13A384u: goto label_13a384;
            case 0x13A388u: goto label_13a388;
            case 0x13A38Cu: goto label_13a38c;
            case 0x13A390u: goto label_13a390;
            case 0x13A394u: goto label_13a394;
            case 0x13A398u: goto label_13a398;
            case 0x13A39Cu: goto label_13a39c;
            case 0x13A3A0u: goto label_13a3a0;
            case 0x13A3A4u: goto label_13a3a4;
            case 0x13A3A8u: goto label_13a3a8;
            case 0x13A3ACu: goto label_13a3ac;
            case 0x13A3B0u: goto label_13a3b0;
            case 0x13A3B4u: goto label_13a3b4;
            case 0x13A3B8u: goto label_13a3b8;
            case 0x13A3BCu: goto label_13a3bc;
            case 0x13A3C0u: goto label_13a3c0;
            case 0x13A3C4u: goto label_13a3c4;
            case 0x13A3C8u: goto label_13a3c8;
            case 0x13A3CCu: goto label_13a3cc;
            case 0x13A3D0u: goto label_13a3d0;
            case 0x13A3D4u: goto label_13a3d4;
            case 0x13A3D8u: goto label_13a3d8;
            case 0x13A3DCu: goto label_13a3dc;
            case 0x13A3E0u: goto label_13a3e0;
            case 0x13A3E4u: goto label_13a3e4;
            case 0x13A3E8u: goto label_13a3e8;
            case 0x13A3ECu: goto label_13a3ec;
            case 0x13A3F0u: goto label_13a3f0;
            case 0x13A3F4u: goto label_13a3f4;
            case 0x13A3F8u: goto label_13a3f8;
            case 0x13A3FCu: goto label_13a3fc;
            case 0x13A400u: goto label_13a400;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13A3C4u; }
            if (ctx->pc != 0x13A3C4u) { return; }
        }
    }
    ctx->pc = 0x13A3C4u;
label_13a3c4:
    // 0x13a3c4: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x13a3c4u;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 19), GPR_VEC(ctx, 2)));
label_13a3c8:
    // 0x13a3c8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x13a3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_13a3cc:
    // 0x13a3cc: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_13a3d0:
    if (ctx->pc == 0x13A3D0u) {
        ctx->pc = 0x13A3D0u;
            // 0x13a3d0: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->pc = 0x13A3D4u;
        goto label_13a3d4;
    }
    ctx->pc = 0x13A3CCu;
    {
        const bool branch_taken_0x13a3cc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x13A3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3CCu;
            // 0x13a3d0: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3cc) {
            ctx->pc = 0x13A3B0u;
            goto label_13a3b0;
        }
    }
    ctx->pc = 0x13A3D4u;
label_13a3d4:
    // 0x13a3d4: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x13a3d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a3d8:
    // 0x13a3d8: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_13a3dc:
    if (ctx->pc == 0x13A3DCu) {
        ctx->pc = 0x13A3DCu;
            // 0x13a3dc: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x13A3E0u;
        goto label_13a3e0;
    }
    ctx->pc = 0x13A3D8u;
    {
        const bool branch_taken_0x13a3d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a3d8) {
            ctx->pc = 0x13A3DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3D8u;
            // 0x13a3dc: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A3A0u;
            goto label_13a3a0;
        }
    }
    ctx->pc = 0x13A3E0u;
label_13a3e0:
    // 0x13a3e0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x13a3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13a3e4:
    // 0x13a3e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13a3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_13a3e8:
    // 0x13a3e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x13a3e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_13a3ec:
    // 0x13a3ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x13a3ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13a3f0:
    // 0x13a3f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13a3f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13a3f4:
    // 0x13a3f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13a3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13a3f8:
    // 0x13a3f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13a3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13a3fc:
    // 0x13a3fc: 0x3e00008  jr          $ra
label_13a400:
    if (ctx->pc == 0x13A400u) {
        ctx->pc = 0x13A400u;
            // 0x13a400: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x13A404u;
        goto label_fallthrough_0x13a3fc;
    }
    ctx->pc = 0x13A3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3FCu;
            // 0x13a400: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13A370u: goto label_13a370;
            case 0x13A374u: goto label_13a374;
            case 0x13A378u: goto label_13a378;
            case 0x13A37Cu: goto label_13a37c;
            case 0x13A380u: goto label_13a380;
            case 0x13A384u: goto label_13a384;
            case 0x13A388u: goto label_13a388;
            case 0x13A38Cu: goto label_13a38c;
            case 0x13A390u: goto label_13a390;
            case 0x13A394u: goto label_13a394;
            case 0x13A398u: goto label_13a398;
            case 0x13A39Cu: goto label_13a39c;
            case 0x13A3A0u: goto label_13a3a0;
            case 0x13A3A4u: goto label_13a3a4;
            case 0x13A3A8u: goto label_13a3a8;
            case 0x13A3ACu: goto label_13a3ac;
            case 0x13A3B0u: goto label_13a3b0;
            case 0x13A3B4u: goto label_13a3b4;
            case 0x13A3B8u: goto label_13a3b8;
            case 0x13A3BCu: goto label_13a3bc;
            case 0x13A3C0u: goto label_13a3c0;
            case 0x13A3C4u: goto label_13a3c4;
            case 0x13A3C8u: goto label_13a3c8;
            case 0x13A3CCu: goto label_13a3cc;
            case 0x13A3D0u: goto label_13a3d0;
            case 0x13A3D4u: goto label_13a3d4;
            case 0x13A3D8u: goto label_13a3d8;
            case 0x13A3DCu: goto label_13a3dc;
            case 0x13A3E0u: goto label_13a3e0;
            case 0x13A3E4u: goto label_13a3e4;
            case 0x13A3E8u: goto label_13a3e8;
            case 0x13A3ECu: goto label_13a3ec;
            case 0x13A3F0u: goto label_13a3f0;
            case 0x13A3F4u: goto label_13a3f4;
            case 0x13A3F8u: goto label_13a3f8;
            case 0x13A3FCu: goto label_13a3fc;
            case 0x13A400u: goto label_13a400;
            default: break;
        }
        return;
    }
label_fallthrough_0x13a3fc:
    ctx->pc = 0x13A404u;
}

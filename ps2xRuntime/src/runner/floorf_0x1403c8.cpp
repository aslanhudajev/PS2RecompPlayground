#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: floorf
// Address: 0x1403c8 - 0x1404ac
void floorf_0x1403c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("floorf_0x1403c8");
#endif

    ctx->pc = 0x1403c8u;

    // 0x1403c8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1403c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1403cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1403ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1403d0: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x1403d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x1403d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1403d4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1403d8: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x1403d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x1403dc: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x1403dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1403e0: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x1403E0u;
    {
        const bool branch_taken_0x1403e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1403e0) {
            ctx->pc = 0x1403E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1403E0u;
            // 0x1403e4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140490u;
            goto label_140490;
        }
    }
    ctx->pc = 0x1403E8u;
    // 0x1403e8: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1403E8u;
    {
        const bool branch_taken_0x1403e8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1403e8) {
            ctx->pc = 0x1403ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1403E8u;
            // 0x1403ec: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140434u;
            goto label_140434;
        }
    }
    ctx->pc = 0x1403F0u;
    // 0x1403f0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1403f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1403f4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1403f4u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)62154u)));
    // 0x1403f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1403f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1403fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1403fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140400: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x140400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x140404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x140404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140408: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x140408u;
    {
        const bool branch_taken_0x140408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140408) {
            ctx->pc = 0x1404A0u;
            goto label_1404a0;
        }
    }
    ctx->pc = 0x140410u;
    // 0x140410: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140410u;
    {
        const bool branch_taken_0x140410 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x140414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140410u;
            // 0x140414: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140410) {
            ctx->pc = 0x140420u;
            goto label_140420;
        }
    }
    ctx->pc = 0x140418u;
    // 0x140418: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x140418u;
    {
        const bool branch_taken_0x140418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14041Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140418u;
            // 0x14041c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140418) {
            ctx->pc = 0x1404A0u;
            goto label_1404a0;
        }
    }
    ctx->pc = 0x140420u;
label_140420:
    // 0x140420: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x140420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x140424: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x140424u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x140428: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x140428u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14042c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14042Cu;
    {
        const bool branch_taken_0x14042c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14042Cu;
            // 0x140430: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14042c) {
            ctx->pc = 0x1404A0u;
            goto label_1404a0;
        }
    }
    ctx->pc = 0x140434u;
label_140434:
    // 0x140434: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x140434u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x140438: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x140438u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x14043c: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x14043cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x140440: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x140440u;
    {
        const bool branch_taken_0x140440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140440) {
            ctx->pc = 0x140450u;
            goto label_140450;
        }
    }
    ctx->pc = 0x140448u;
label_140448:
    // 0x140448: 0x3e00008  jr          $ra
    ctx->pc = 0x140448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14044Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140448u;
            // 0x14044c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140420u: goto label_140420;
            case 0x140434u: goto label_140434;
            case 0x140448u: goto label_140448;
            case 0x140450u: goto label_140450;
            case 0x140488u: goto label_140488;
            case 0x140490u: goto label_140490;
            case 0x1404A0u: goto label_1404a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140450u;
label_140450:
    // 0x140450: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x140450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x140454: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x140454u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)62154u)));
    // 0x140458: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x140458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14045c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14045cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140460: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x140460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x140464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x140464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140468: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x140468u;
    {
        const bool branch_taken_0x140468 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140468) {
            ctx->pc = 0x1404A0u;
            goto label_1404a0;
        }
    }
    ctx->pc = 0x140470u;
    // 0x140470: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x140470u;
    {
        const bool branch_taken_0x140470 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x140474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140470u;
            // 0x140474: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140470) {
            ctx->pc = 0x140488u;
            goto label_140488;
        }
    }
    ctx->pc = 0x140478u;
    // 0x140478: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x140478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x14047c: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x14047cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x140480: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x140480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x140484: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x140484u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
label_140488:
    // 0x140488: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x140488u;
    {
        const bool branch_taken_0x140488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14048Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140488u;
            // 0x14048c: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140488) {
            ctx->pc = 0x1404A0u;
            goto label_1404a0;
        }
    }
    ctx->pc = 0x140490u;
label_140490:
    // 0x140490: 0x14a2ffed  bne         $a1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x140490u;
    {
        const bool branch_taken_0x140490 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x140490) {
            ctx->pc = 0x140448u;
            goto label_140448;
        }
    }
    ctx->pc = 0x140498u;
    // 0x140498: 0x3e00008  jr          $ra
    ctx->pc = 0x140498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14049Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140498u;
            // 0x14049c: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140420u: goto label_140420;
            case 0x140434u: goto label_140434;
            case 0x140448u: goto label_140448;
            case 0x140450u: goto label_140450;
            case 0x140488u: goto label_140488;
            case 0x140490u: goto label_140490;
            case 0x1404A0u: goto label_1404a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1404A0u;
label_1404a0:
    // 0x1404a0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1404a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1404a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1404A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1404A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1404A4u;
            // 0x1404a8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140420u: goto label_140420;
            case 0x140434u: goto label_140434;
            case 0x140448u: goto label_140448;
            case 0x140450u: goto label_140450;
            case 0x140488u: goto label_140488;
            case 0x140490u: goto label_140490;
            case 0x1404A0u: goto label_1404a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1404ACu;
}

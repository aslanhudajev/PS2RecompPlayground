#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Tim2LoadClut
// Address: 0x16f730 - 0x16f954
void Tim2LoadClut_0x16f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Tim2LoadClut_0x16f730");
#endif

    ctx->pc = 0x16f730u;

    // 0x16f730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f738: 0x90820012  lbu         $v0, 0x12($a0)
    ctx->pc = 0x16f738u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x16f73c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F73Cu;
    {
        const bool branch_taken_0x16f73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f73c) {
            ctx->pc = 0x16F750u;
            goto label_16f750;
        }
    }
    ctx->pc = 0x16F744u;
    // 0x16f744: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x16F744u;
    {
        const bool branch_taken_0x16f744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F744u;
            // 0x16f748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f744) {
            ctx->pc = 0x16F948u;
            goto label_16f948;
        }
    }
    ctx->pc = 0x16F74Cu;
    // 0x16f74c: 0x0  nop
    ctx->pc = 0x16f74cu;
    // NOP
label_16f750:
    // 0x16f750: 0x3046003f  andi        $a2, $v0, 0x3F
    ctx->pc = 0x16f750u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)63u)));
    // 0x16f754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f758: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F758u;
    {
        const bool branch_taken_0x16f758 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f758) {
            ctx->pc = 0x16F768u;
            goto label_16f768;
        }
    }
    ctx->pc = 0x16F760u;
    // 0x16f760: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16F760u;
    {
        const bool branch_taken_0x16f760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F760u;
            // 0x16f764: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f760) {
            ctx->pc = 0x16F788u;
            goto label_16f788;
        }
    }
    ctx->pc = 0x16F768u;
label_16f768:
    // 0x16f768: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16f768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f76c: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F76Cu;
    {
        const bool branch_taken_0x16f76c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f76c) {
            ctx->pc = 0x16F780u;
            goto label_16f780;
        }
    }
    ctx->pc = 0x16F774u;
    // 0x16f774: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16F774u;
    {
        const bool branch_taken_0x16f774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f774) {
            ctx->pc = 0x16F788u;
            goto label_16f788;
        }
    }
    ctx->pc = 0x16F77Cu;
    // 0x16f77c: 0x0  nop
    ctx->pc = 0x16f77cu;
    // NOP
label_16f780:
    // 0x16f780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f784: 0x0  nop
    ctx->pc = 0x16f784u;
    // NOP
label_16f788:
    // 0x16f788: 0x908e001e  lbu         $t6, 0x1E($a0)
    ctx->pc = 0x16f788u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x16f78c: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x16f78cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x16f790: 0x240cff87  addiu       $t4, $zero, -0x79
    ctx->pc = 0x16f790u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
    // 0x16f794: 0x368c0  sll         $t5, $v1, 3
    ctx->pc = 0x16f794u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16f798: 0x240aff7f  addiu       $t2, $zero, -0x81
    ctx->pc = 0x16f798u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x16f79c: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x16f79cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)1u)));
    // 0x16f7a0: 0x2408ffe0  addiu       $t0, $zero, -0x20
    ctx->pc = 0x16f7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x16f7a4: 0x359c0  sll         $t3, $v1, 7
    ctx->pc = 0x16f7a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x16f7a8: 0x3009001f  andi        $t1, $zero, 0x1F
    ctx->pc = 0x16f7a8u;
    SET_GPR_VEC(ctx, 9, PS2_PAND(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)31u)));
    // 0x16f7ac: 0x2406ff1f  addiu       $a2, $zero, -0xE1
    ctx->pc = 0x16f7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x16f7b0: 0x64070020  daddiu      $a3, $zero, 0x20
    ctx->pc = 0x16f7b0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x16f7b4: 0x1cc6024  and         $t4, $t6, $t4
    ctx->pc = 0x16f7b4u;
    SET_GPR_VEC(ctx, 12, PS2_PAND(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x16f7b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f7bc: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x16f7bcu;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 12), GPR_VEC(ctx, 13)));
    // 0x16f7c0: 0xa08c001e  sb          $t4, 0x1E($a0)
    ctx->pc = 0x16f7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 12));
    // 0x16f7c4: 0x908c001e  lbu         $t4, 0x1E($a0)
    ctx->pc = 0x16f7c4u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x16f7c8: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x16f7c8u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 12), GPR_VEC(ctx, 10)));
    // 0x16f7cc: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x16f7ccu;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x16f7d0: 0xa08a001e  sb          $t2, 0x1E($a0)
    ctx->pc = 0x16f7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 10));
    // 0x16f7d4: 0x908a001f  lbu         $t2, 0x1F($a0)
    ctx->pc = 0x16f7d4u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x16f7d8: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x16f7d8u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x16f7dc: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x16f7dcu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x16f7e0: 0xa088001f  sb          $t0, 0x1F($a0)
    ctx->pc = 0x16f7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 8));
    // 0x16f7e4: 0x9088001f  lbu         $t0, 0x1F($a0)
    ctx->pc = 0x16f7e4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x16f7e8: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x16f7e8u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x16f7ec: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x16f7ecu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x16f7f0: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F7F0u;
    {
        const bool branch_taken_0x16f7f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F7F0u;
            // 0x16f7f4: 0xa086001f  sb          $a2, 0x1F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7f0) {
            ctx->pc = 0x16F810u;
            goto label_16f810;
        }
    }
    ctx->pc = 0x16F7F8u;
    // 0x16f7f8: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x16f7f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16f7fc: 0x31b78  dsll        $v1, $v1, 13
    ctx->pc = 0x16f7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 13);
    // 0x16f800: 0x31cbe  dsrl32      $v1, $v1, 18
    ctx->pc = 0x16f800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x16f804: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x16f804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16f808: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16F808u;
    {
        const bool branch_taken_0x16f808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F808u;
            // 0x16f80c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f808) {
            ctx->pc = 0x16F848u;
            goto label_16f848;
        }
    }
    ctx->pc = 0x16F810u;
label_16f810:
    // 0x16f810: 0x30a63fff  andi        $a2, $a1, 0x3FFF
    ctx->pc = 0x16f810u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)16383u)));
    // 0x16f814: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x16f814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x16f818: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x16f818u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16f81c: 0x6397c  dsll32      $a3, $a2, 5
    ctx->pc = 0x16f81cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 5));
    // 0x16f820: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x16f820u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)31u)));
    // 0x16f824: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x16f824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16f828: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x16f828u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x16f82c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x16f82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x16f830: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x16f830u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x16f834: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x16f834u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x16f838: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x16f838u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x16f83c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x16f83cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x16f840: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x16f840u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x16f844: 0x0  nop
    ctx->pc = 0x16f844u;
    // NOP
label_16f848:
    // 0x16f848: 0x9489000c  lhu         $t1, 0xC($a0)
    ctx->pc = 0x16f848u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x16f84c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x16f84cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16f850: 0x34038305  ori         $v1, $zero, 0x8305
    ctx->pc = 0x16f850u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33541u)));
    // 0x16f854: 0x90880012  lbu         $t0, 0x12($a0)
    ctx->pc = 0x16f854u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x16f858: 0x90860013  lbu         $a2, 0x13($a0)
    ctx->pc = 0x16f858u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x16f85c: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x16f85cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x16f860: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x16f860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x16f864: 0x83a00  sll         $a3, $t0, 8
    ctx->pc = 0x16f864u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x16f868: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x16f868u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x16f86c: 0x10e30034  beq         $a3, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x16F86Cu;
    {
        const bool branch_taken_0x16f86c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F86Cu;
            // 0x16f870: 0x34038205  ori         $v1, $zero, 0x8205 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33285u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f86c) {
            ctx->pc = 0x16F940u;
            goto label_16f940;
        }
    }
    ctx->pc = 0x16F874u;
    // 0x16f874: 0x10e30032  beq         $a3, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x16F874u;
    {
        const bool branch_taken_0x16f874 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f874) {
            ctx->pc = 0x16F940u;
            goto label_16f940;
        }
    }
    ctx->pc = 0x16F87Cu;
    // 0x16f87c: 0x34038105  ori         $v1, $zero, 0x8105
    ctx->pc = 0x16f87cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33029u)));
    // 0x16f880: 0x10e3002f  beq         $a3, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x16F880u;
    {
        const bool branch_taken_0x16f880 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F880u;
            // 0x16f884: 0x34038304  ori         $v1, $zero, 0x8304 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33540u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f880) {
            ctx->pc = 0x16F940u;
            goto label_16f940;
        }
    }
    ctx->pc = 0x16F888u;
    // 0x16f888: 0x10e3002d  beq         $a3, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x16F888u;
    {
        const bool branch_taken_0x16f888 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f888) {
            ctx->pc = 0x16F940u;
            goto label_16f940;
        }
    }
    ctx->pc = 0x16F890u;
    // 0x16f890: 0x34038204  ori         $v1, $zero, 0x8204
    ctx->pc = 0x16f890u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33284u)));
    // 0x16f894: 0x10e3002a  beq         $a3, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x16F894u;
    {
        const bool branch_taken_0x16f894 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F894u;
            // 0x16f898: 0x34038104  ori         $v1, $zero, 0x8104 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33028u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f894) {
            ctx->pc = 0x16F940u;
            goto label_16f940;
        }
    }
    ctx->pc = 0x16F89Cu;
    // 0x16f89c: 0x10e30028  beq         $a3, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x16F89Cu;
    {
        const bool branch_taken_0x16f89c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f89c) {
            ctx->pc = 0x16F940u;
            goto label_16f940;
        }
    }
    ctx->pc = 0x16F8A4u;
    // 0x16f8a4: 0x24030304  addiu       $v1, $zero, 0x304
    ctx->pc = 0x16f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
    // 0x16f8a8: 0x10e30025  beq         $a3, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x16F8A8u;
    {
        const bool branch_taken_0x16f8a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8A8u;
            // 0x16f8ac: 0x24030204  addiu       $v1, $zero, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f8a8) {
            ctx->pc = 0x16F940u;
            goto label_16f940;
        }
    }
    ctx->pc = 0x16F8B0u;
    // 0x16f8b0: 0x10e30023  beq         $a3, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x16F8B0u;
    {
        const bool branch_taken_0x16f8b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f8b0) {
            ctx->pc = 0x16F940u;
            goto label_16f940;
        }
    }
    ctx->pc = 0x16F8B8u;
    // 0x16f8b8: 0x24030104  addiu       $v1, $zero, 0x104
    ctx->pc = 0x16f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x16f8bc: 0x10e30020  beq         $a3, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x16F8BCu;
    {
        const bool branch_taken_0x16f8bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8BCu;
            // 0x16f8c0: 0x24030305  addiu       $v1, $zero, 0x305 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f8bc) {
            ctx->pc = 0x16F940u;
            goto label_16f940;
        }
    }
    ctx->pc = 0x16F8C4u;
    // 0x16f8c4: 0x10e30010  beq         $a3, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x16F8C4u;
    {
        const bool branch_taken_0x16f8c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f8c4) {
            ctx->pc = 0x16F908u;
            goto label_16f908;
        }
    }
    ctx->pc = 0x16F8CCu;
    // 0x16f8cc: 0x24030205  addiu       $v1, $zero, 0x205
    ctx->pc = 0x16f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    // 0x16f8d0: 0x10e3000d  beq         $a3, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16F8D0u;
    {
        const bool branch_taken_0x16f8d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8D0u;
            // 0x16f8d4: 0x24030105  addiu       $v1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f8d0) {
            ctx->pc = 0x16F908u;
            goto label_16f908;
        }
    }
    ctx->pc = 0x16F8D8u;
    // 0x16f8d8: 0x10e3000b  beq         $a3, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16F8D8u;
    {
        const bool branch_taken_0x16f8d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f8d8) {
            ctx->pc = 0x16F908u;
            goto label_16f908;
        }
    }
    ctx->pc = 0x16F8E0u;
    // 0x16f8e0: 0x24034304  addiu       $v1, $zero, 0x4304
    ctx->pc = 0x16f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17156));
    // 0x16f8e4: 0x10e30008  beq         $a3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16F8E4u;
    {
        const bool branch_taken_0x16f8e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8E4u;
            // 0x16f8e8: 0x24034204  addiu       $v1, $zero, 0x4204 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f8e4) {
            ctx->pc = 0x16F908u;
            goto label_16f908;
        }
    }
    ctx->pc = 0x16F8ECu;
    // 0x16f8ec: 0x10e30006  beq         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F8ECu;
    {
        const bool branch_taken_0x16f8ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f8ec) {
            ctx->pc = 0x16F908u;
            goto label_16f908;
        }
    }
    ctx->pc = 0x16F8F4u;
    // 0x16f8f4: 0x24034104  addiu       $v1, $zero, 0x4104
    ctx->pc = 0x16f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16644));
    // 0x16f8f8: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F8F8u;
    {
        const bool branch_taken_0x16f8f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f8f8) {
            ctx->pc = 0x16F908u;
            goto label_16f908;
        }
    }
    ctx->pc = 0x16F900u;
    // 0x16f900: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16F900u;
    {
        const bool branch_taken_0x16f900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f900) {
            ctx->pc = 0x16F928u;
            goto label_16f928;
        }
    }
    ctx->pc = 0x16F908u;
label_16f908:
    // 0x16f908: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x16f908u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x16f90c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f910: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x16f910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16f914: 0x34102  srl         $t0, $v1, 4
    ctx->pc = 0x16f914u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x16f918: 0xc05bd48  jal         func_16F520
    ctx->pc = 0x16F918u;
    SET_GPR_U32(ctx, 31, 0x16F920u);
    ctx->pc = 0x16F91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F918u;
            // 0x16f91c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F520u;
    if (runtime->hasFunction(0x16F520u)) {
        auto targetFn = runtime->lookupFunction(0x16F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F920u; }
        if (ctx->pc != 0x16F920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2LoadTexture_0x16f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F920u; }
        if (ctx->pc != 0x16F920u) { return; }
    }
    ctx->pc = 0x16F920u;
    // 0x16f920: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16F920u;
    {
        const bool branch_taken_0x16f920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f920) {
            ctx->pc = 0x16F940u;
            goto label_16f940;
        }
    }
    ctx->pc = 0x16F928u;
label_16f928:
    // 0x16f928: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x16f928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x16f92c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x16f92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f930: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x16F930u;
    SET_GPR_U32(ctx, 31, 0x16F938u);
    ctx->pc = 0x16F934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F930u;
            // 0x16f934: 0x248411b0  addiu       $a0, $a0, 0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F938u; }
        if (ctx->pc != 0x16F938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F938u; }
        if (ctx->pc != 0x16F938u) { return; }
    }
    ctx->pc = 0x16F938u;
    // 0x16f938: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F938u;
    {
        const bool branch_taken_0x16f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F938u;
            // 0x16f93c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f938) {
            ctx->pc = 0x16F948u;
            goto label_16f948;
        }
    }
    ctx->pc = 0x16F940u;
label_16f940:
    // 0x16f940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f944: 0x0  nop
    ctx->pc = 0x16f944u;
    // NOP
label_16f948:
    // 0x16f948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f94c: 0x3e00008  jr          $ra
    ctx->pc = 0x16F94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F94Cu;
            // 0x16f950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F750u: goto label_16f750;
            case 0x16F768u: goto label_16f768;
            case 0x16F780u: goto label_16f780;
            case 0x16F788u: goto label_16f788;
            case 0x16F810u: goto label_16f810;
            case 0x16F848u: goto label_16f848;
            case 0x16F908u: goto label_16f908;
            case 0x16F928u: goto label_16f928;
            case 0x16F940u: goto label_16f940;
            case 0x16F948u: goto label_16f948;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F954u;
}

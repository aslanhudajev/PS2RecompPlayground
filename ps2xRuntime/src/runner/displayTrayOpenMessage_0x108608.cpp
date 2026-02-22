#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: displayTrayOpenMessage
// Address: 0x108608 - 0x1088ac
void displayTrayOpenMessage_0x108608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108608u;

    // 0x108608: 0x8f8282b8  lw          $v0, -0x7D48($gp)
    ctx->pc = 0x108608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x10860c: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10860cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x108610: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x108610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x108614: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x108614u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108618: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x108618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10861c: 0x3c095000  lui         $t1, 0x5000
    ctx->pc = 0x10861cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20480 << 16));
    // 0x108620: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x108620u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x108624: 0x35298001  ori         $t1, $t1, 0x8001
    ctx->pc = 0x108624u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)32769u)));
    // 0x108628: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x108628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10862c: 0x240f000e  addiu       $t7, $zero, 0xE
    ctx->pc = 0x10862cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x108630: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x108630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x108634: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x108634u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x108638: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x108638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10863c: 0x240e014c  addiu       $t6, $zero, 0x14C
    ctx->pc = 0x10863cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
    // 0x108640: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x108640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x108644: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x108644u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x108648: 0x1ef03c  dsll32      $fp, $fp, 0
    ctx->pc = 0x108648u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 0));
    // 0x10864c: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x10864cu;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x108650: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x108650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108654: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x108654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x108658: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x108658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x10865c: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x10865cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)2u)));
    // 0x108660: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108664: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x108664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x108668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10866c: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x10866cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x108670: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x108670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x108674: 0x24470070  addiu       $a3, $v0, 0x70
    ctx->pc = 0x108674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x108678: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x108678u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x10867c: 0x2418007f  addiu       $t8, $zero, 0x7F
    ctx->pc = 0x10867cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x108680: 0xfc490060  sd          $t1, 0x60($v0)
    ctx->pc = 0x108680u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 9));
    // 0x108684: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108688: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x108688u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x10868c: 0x35294441  ori         $t1, $t1, 0x4441
    ctx->pc = 0x10868cu;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)17473u)));
    // 0x108690: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x108694: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x108694u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x108698: 0x24157240  addiu       $s5, $zero, 0x7240
    ctx->pc = 0x108698u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 29248));
    // 0x10869c: 0xfc450030  sd          $a1, 0x30($v0)
    ctx->pc = 0x10869cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 5));
    // 0x1086a0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1086a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1086a4: 0xfc460038  sd          $a2, 0x38($v0)
    ctx->pc = 0x1086a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 6));
    // 0x1086a8: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1086a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1086ac: 0xfc5e0040  sd          $fp, 0x40($v0)
    ctx->pc = 0x1086acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 30));
    // 0x1086b0: 0x24107960  addiu       $s0, $zero, 0x7960
    ctx->pc = 0x1086b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31072));
    // 0x1086b4: 0xfc490068  sd          $t1, 0x68($v0)
    ctx->pc = 0x1086b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 9));
    // 0x1086b8: 0x34128dc0  ori         $s2, $zero, 0x8DC0
    ctx->pc = 0x1086b8u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36288u)));
    // 0x1086bc: 0xfc4f0018  sd          $t7, 0x18($v0)
    ctx->pc = 0x1086bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 15));
    // 0x1086c0: 0x24450090  addiu       $a1, $v0, 0x90
    ctx->pc = 0x1086c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1086c4: 0xfc4e0020  sd          $t6, 0x20($v0)
    ctx->pc = 0x1086c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 14));
    // 0x1086c8: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x1086c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1086cc: 0xfc400028  sd          $zero, 0x28($v0)
    ctx->pc = 0x1086ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 0));
    // 0x1086d0: 0x341186a0  ori         $s1, $zero, 0x86A0
    ctx->pc = 0x1086d0u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34464u)));
    // 0x1086d4: 0xfc4f0048  sd          $t7, 0x48($v0)
    ctx->pc = 0x1086d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 15));
    // 0x1086d8: 0x244800b0  addiu       $t0, $v0, 0xB0
    ctx->pc = 0x1086d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1086dc: 0xfc4e0050  sd          $t6, 0x50($v0)
    ctx->pc = 0x1086dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 14));
    // 0x1086e0: 0x244a00f0  addiu       $t2, $v0, 0xF0
    ctx->pc = 0x1086e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1086e4: 0xfc400058  sd          $zero, 0x58($v0)
    ctx->pc = 0x1086e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 0));
    // 0x1086e8: 0x24177280  addiu       $s7, $zero, 0x7280
    ctx->pc = 0x1086e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 29312));
    // 0x1086ec: 0xac4d0070  sw          $t5, 0x70($v0)
    ctx->pc = 0x1086ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 13));
    // 0x1086f0: 0x244b0100  addiu       $t3, $v0, 0x100
    ctx->pc = 0x1086f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1086f4: 0xacf8000c  sw          $t8, 0xC($a3)
    ctx->pc = 0x1086f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 24));
    // 0x1086f8: 0x241379a0  addiu       $s3, $zero, 0x79A0
    ctx->pc = 0x1086f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31136));
    // 0x1086fc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1086fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x108700: 0x34168d80  ori         $s6, $zero, 0x8D80
    ctx->pc = 0x108700u;
    SET_GPR_VEC(ctx, 22, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36224u)));
    // 0x108704: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x108704u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x108708: 0x24490110  addiu       $t1, $v0, 0x110
    ctx->pc = 0x108708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x10870c: 0xac550080  sw          $s5, 0x80($v0)
    ctx->pc = 0x10870cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 21));
    // 0x108710: 0x24470120  addiu       $a3, $v0, 0x120
    ctx->pc = 0x108710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x108714: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x108714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x108718: 0x34148660  ori         $s4, $zero, 0x8660
    ctx->pc = 0x108718u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34400u)));
    // 0x10871c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x10871cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x108720: 0x244c0130  addiu       $t4, $v0, 0x130
    ctx->pc = 0x108720u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x108724: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x108724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x108728: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x108728u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x10872c: 0x19c83c  dsll32      $t9, $t9, 0
    ctx->pc = 0x10872cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 0));
    // 0x108730: 0x37398001  ori         $t9, $t9, 0x8001
    ctx->pc = 0x108730u;
    SET_GPR_VEC(ctx, 25, PS2_POR(GPR_VEC(ctx, 25), _mm_cvtsi32_si128((int)32769u)));
    // 0x108734: 0xac520090  sw          $s2, 0x90($v0)
    ctx->pc = 0x108734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 18));
    // 0x108738: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x108738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10873c: 0xacb00004  sw          $s0, 0x4($a1)
    ctx->pc = 0x10873cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x108740: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x108740u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x108744: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x108744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x108748: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x108748u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x10874c: 0xac5500a0  sw          $s5, 0xA0($v0)
    ctx->pc = 0x10874cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 21));
    // 0x108750: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x108750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x108754: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x108754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x108758: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x108758u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32769u)));
    // 0x10875c: 0xacd10004  sw          $s1, 0x4($a2)
    ctx->pc = 0x10875cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 17));
    // 0x108760: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x108760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x108764: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x108764u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x108768: 0xac5200b0  sw          $s2, 0xB0($v0)
    ctx->pc = 0x108768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 18));
    // 0x10876c: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x10876cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x108770: 0x34c64441  ori         $a2, $a2, 0x4441
    ctx->pc = 0x108770u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)17473u)));
    // 0x108774: 0xad110004  sw          $s1, 0x4($t0)
    ctx->pc = 0x108774u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 17));
    // 0x108778: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x108778u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x10877c: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x10877cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x108780: 0xfc5e00c0  sd          $fp, 0xC0($v0)
    ctx->pc = 0x108780u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 30));
    // 0x108784: 0xfc4500e0  sd          $a1, 0xE0($v0)
    ctx->pc = 0x108784u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 224), GPR_U64(ctx, 5));
    // 0x108788: 0xfc4600e8  sd          $a2, 0xE8($v0)
    ctx->pc = 0x108788u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 232), GPR_U64(ctx, 6));
    // 0x10878c: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x10878cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108790: 0xfc4e00d0  sd          $t6, 0xD0($v0)
    ctx->pc = 0x108790u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 208), GPR_U64(ctx, 14));
    // 0x108794: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x108794u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x108798: 0xfc4f00c8  sd          $t7, 0xC8($v0)
    ctx->pc = 0x108798u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 200), GPR_U64(ctx, 15));
    // 0x10879c: 0xfc4000d8  sd          $zero, 0xD8($v0)
    ctx->pc = 0x10879cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 216), GPR_U64(ctx, 0));
    // 0x1087a0: 0xac4d00f0  sw          $t5, 0xF0($v0)
    ctx->pc = 0x1087a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 13));
    // 0x1087a4: 0xad58000c  sw          $t8, 0xC($t2)
    ctx->pc = 0x1087a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 24));
    // 0x1087a8: 0xad4d0008  sw          $t5, 0x8($t2)
    ctx->pc = 0x1087a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 13));
    // 0x1087ac: 0xad4d0004  sw          $t5, 0x4($t2)
    ctx->pc = 0x1087acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 13));
    // 0x1087b0: 0xac570100  sw          $s7, 0x100($v0)
    ctx->pc = 0x1087b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 23));
    // 0x1087b4: 0xad730004  sw          $s3, 0x4($t3)
    ctx->pc = 0x1087b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 19));
    // 0x1087b8: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x1087b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x1087bc: 0xad630008  sw          $v1, 0x8($t3)
    ctx->pc = 0x1087bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    // 0x1087c0: 0xac560110  sw          $s6, 0x110($v0)
    ctx->pc = 0x1087c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 22));
    // 0x1087c4: 0xad330004  sw          $s3, 0x4($t1)
    ctx->pc = 0x1087c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 19));
    // 0x1087c8: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x1087c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x1087cc: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x1087ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x1087d0: 0xac570120  sw          $s7, 0x120($v0)
    ctx->pc = 0x1087d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 23));
    // 0x1087d4: 0x3c0901e8  lui         $t1, 0x1E8
    ctx->pc = 0x1087d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)488 << 16));
    // 0x1087d8: 0x35290018  ori         $t1, $t1, 0x18
    ctx->pc = 0x1087d8u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)24u)));
    // 0x1087dc: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x1087dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1087e0: 0x35290266  ori         $t1, $t1, 0x266
    ctx->pc = 0x1087e0u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)614u)));
    // 0x1087e4: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x1087e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1087e8: 0x35290018  ori         $t1, $t1, 0x18
    ctx->pc = 0x1087e8u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)24u)));
    // 0x1087ec: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x1087ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
    // 0x1087f0: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1087f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1087f4: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1087f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1087f8: 0xac560130  sw          $s6, 0x130($v0)
    ctx->pc = 0x1087f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 22));
    // 0x1087fc: 0xad940004  sw          $s4, 0x4($t4)
    ctx->pc = 0x1087fcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 20));
    // 0x108800: 0xad830008  sw          $v1, 0x8($t4)
    ctx->pc = 0x108800u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 3));
    // 0x108804: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x108804u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x108808: 0xfc500158  sd          $s0, 0x158($v0)
    ctx->pc = 0x108808u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 344), GPR_U64(ctx, 16));
    // 0x10880c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10880cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108810: 0xfc590140  sd          $t9, 0x140($v0)
    ctx->pc = 0x108810u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 320), GPR_U64(ctx, 25));
    // 0x108814: 0x34630015  ori         $v1, $v1, 0x15
    ctx->pc = 0x108814u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)21u)));
    // 0x108818: 0xfc4f0148  sd          $t7, 0x148($v0)
    ctx->pc = 0x108818u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 328), GPR_U64(ctx, 15));
    // 0x10881c: 0xfc490150  sd          $t1, 0x150($v0)
    ctx->pc = 0x10881cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 336), GPR_U64(ctx, 9));
    // 0x108820: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x108824: 0x7c450160  sq          $a1, 0x160($v0)
    ctx->pc = 0x108824u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 352), GPR_VEC(ctx, 5));
    // 0x108828: 0xc043948  jal         func_10E520
    ctx->pc = 0x108828u;
    SET_GPR_U32(ctx, 31, 0x108830u);
    ctx->pc = 0x10882Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108828u;
            // 0x10882c: 0xac460160  sw          $a2, 0x160($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108830u; }
        if (ctx->pc != 0x108830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108830u; }
        if (ctx->pc != 0x108830u) { return; }
    }
    ctx->pc = 0x108830u;
    // 0x108830: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x108830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108834: 0xc043322  jal         func_10CC88
    ctx->pc = 0x108834u;
    SET_GPR_U32(ctx, 31, 0x10883Cu);
    ctx->pc = 0x108838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108834u;
            // 0x108838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10883Cu; }
        if (ctx->pc != 0x10883Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10883Cu; }
        if (ctx->pc != 0x10883Cu) { return; }
    }
    ctx->pc = 0x10883Cu;
    // 0x10883c: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x10883cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x108840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108844: 0xc04372a  jal         func_10DCA8
    ctx->pc = 0x108844u;
    SET_GPR_U32(ctx, 31, 0x10884Cu);
    ctx->pc = 0x108848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108844u;
            // 0x108848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10884Cu; }
        if (ctx->pc != 0x10884Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10884Cu; }
        if (ctx->pc != 0x10884Cu) { return; }
    }
    ctx->pc = 0x10884Cu;
    // 0x10884c: 0x8f8382b8  lw          $v1, -0x7D48($gp)
    ctx->pc = 0x10884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x108850: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x108850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x108854: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x108854u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x108858: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x108858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x10885c: 0xc0435d6  jal         func_10D758
    ctx->pc = 0x10885Cu;
    SET_GPR_U32(ctx, 31, 0x108864u);
    ctx->pc = 0x108860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10885Cu;
            // 0x108860: 0x652824  and         $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D758u;
    if (runtime->hasFunction(0x10D758u)) {
        auto targetFn = runtime->lookupFunction(0x10D758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108864u; }
        if (ctx->pc != 0x108864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108864u; }
        if (ctx->pc != 0x108864u) { return; }
    }
    ctx->pc = 0x108864u;
    // 0x108864: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x108864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108868: 0xc043322  jal         func_10CC88
    ctx->pc = 0x108868u;
    SET_GPR_U32(ctx, 31, 0x108870u);
    ctx->pc = 0x10886Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108868u;
            // 0x10886c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108870u; }
        if (ctx->pc != 0x108870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108870u; }
        if (ctx->pc != 0x108870u) { return; }
    }
    ctx->pc = 0x108870u;
    // 0x108870: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x108870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x108874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108878: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x108878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10887c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10887cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108880: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x108880u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108884: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x108884u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108888: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x108888u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10888c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10888cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108890: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x108890u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108894: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x108894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108898: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10889c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10889cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1088a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1088a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1088a4: 0x804372a  j           func_10DCA8
    ctx->pc = 0x1088A4u;
    ctx->pc = 0x1088A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1088A4u;
            // 0x1088a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1088ACu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_StgEX1KUMO
// Address: 0x143550 - 0x1436b8
void MapMoveingFunc_StgEX1KUMO_0x143550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_StgEX1KUMO_0x143550");
#endif

    ctx->pc = 0x143550u;

    // 0x143550: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143554: 0x8c239c58  lw          $v1, -0x63A8($at)
    ctx->pc = 0x143554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941784)));
    // 0x143558: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x143558u;
    {
        const bool branch_taken_0x143558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14355Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143558u;
            // 0x14355c: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143558) {
            ctx->pc = 0x1435B8u;
            goto label_1435b8;
        }
    }
    ctx->pc = 0x143560u;
    // 0x143560: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x143560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x143564: 0xc4219c48  lwc1        $f1, -0x63B8($at)
    ctx->pc = 0x143564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143568: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x143568u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x14356c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14356cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143570: 0x0  nop
    ctx->pc = 0x143570u;
    // NOP
    // 0x143574: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x143574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143578: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x143578u;
    {
        const bool branch_taken_0x143578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14357Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143578u;
            // 0x14357c: 0x3c033851  lui         $v1, 0x3851 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14417 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143578) {
            ctx->pc = 0x143598u;
            goto label_143598;
        }
    }
    ctx->pc = 0x143580u;
    // 0x143580: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143584: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x143584u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46871u)));
    // 0x143588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14358c: 0x0  nop
    ctx->pc = 0x14358cu;
    // NOP
    // 0x143590: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x143590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x143594: 0xe4209c48  swc1        $f0, -0x63B8($at)
    ctx->pc = 0x143594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941768), bits); }
label_143598:
    // 0x143598: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14359c: 0x3c033851  lui         $v1, 0x3851
    ctx->pc = 0x14359cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14417 << 16));
    // 0x1435a0: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x1435a0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46871u)));
    // 0x1435a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1435a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1435a8: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x1435a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1435ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1435acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1435b0: 0xe4a00114  swc1        $f0, 0x114($a1)
    ctx->pc = 0x1435b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 276), bits); }
    // 0x1435b4: 0x0  nop
    ctx->pc = 0x1435b4u;
    // NOP
label_1435b8:
    // 0x1435b8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1435b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1435bc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1435bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1435c0: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1435c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1435c4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1435c4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1435c8: 0xc4219c48  lwc1        $f1, -0x63B8($at)
    ctx->pc = 0x1435c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1435cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1435ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1435d0: 0xc4a20110  lwc1        $f2, 0x110($a1)
    ctx->pc = 0x1435d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1435d4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1435d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1435d8: 0xe4a10110  swc1        $f1, 0x110($a1)
    ctx->pc = 0x1435d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 272), bits); }
    // 0x1435dc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1435dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1435e0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1435e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1435e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1435e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1435e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1435E8u;
    {
        const bool branch_taken_0x1435e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1435ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1435E8u;
            // 0x1435ec: 0x24650114  addiu       $a1, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1435e8) {
            ctx->pc = 0x143608u;
            goto label_143608;
        }
    }
    ctx->pc = 0x1435F0u;
    // 0x1435f0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1435f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1435f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1435f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1435f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1435f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1435fc: 0x0  nop
    ctx->pc = 0x1435fcu;
    // NOP
    // 0x143600: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x143600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x143604: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x143604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_143608:
    // 0x143608: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14360c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14360cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x143610: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143610u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143614: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143618: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x143618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14361c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14361cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143620: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x143620u;
    {
        const bool branch_taken_0x143620 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x143624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143620u;
            // 0x143624: 0x24a60114  addiu       $a2, $a1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143620) {
            ctx->pc = 0x143640u;
            goto label_143640;
        }
    }
    ctx->pc = 0x143628u;
    // 0x143628: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14362c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14362cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143634: 0x0  nop
    ctx->pc = 0x143634u;
    // NOP
    // 0x143638: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x143638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14363c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x14363cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_143640:
    // 0x143640: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143644: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x143644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x143648: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143648u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14364c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14364cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143650: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x143650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143654: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x143654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143658: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x143658u;
    {
        const bool branch_taken_0x143658 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14365Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143658u;
            // 0x14365c: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143658) {
            ctx->pc = 0x143678u;
            goto label_143678;
        }
    }
    ctx->pc = 0x143660u;
    // 0x143660: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x143664: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143664u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14366c: 0x0  nop
    ctx->pc = 0x14366cu;
    // NOP
    // 0x143670: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x143670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x143674: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x143674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_143678:
    // 0x143678: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x143678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14367c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14367cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x143680: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143680u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143688: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x143688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14368c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14368cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143690: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x143690u;
    {
        const bool branch_taken_0x143690 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x143694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143690u;
            // 0x143694: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143690) {
            ctx->pc = 0x1436B0u;
            goto label_1436b0;
        }
    }
    ctx->pc = 0x143698u;
    // 0x143698: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14369c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14369cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1436a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1436a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1436a4: 0x0  nop
    ctx->pc = 0x1436a4u;
    // NOP
    // 0x1436a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1436a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1436ac: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1436acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1436b0:
    // 0x1436b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1436B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143598u: goto label_143598;
            case 0x1435B8u: goto label_1435b8;
            case 0x143608u: goto label_143608;
            case 0x143640u: goto label_143640;
            case 0x143678u: goto label_143678;
            case 0x1436B0u: goto label_1436b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1436B8u;
}

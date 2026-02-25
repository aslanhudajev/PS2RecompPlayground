#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_StgEX1SORA
// Address: 0x1436c0 - 0x143828
void MapMoveingFunc_StgEX1SORA_0x1436c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_StgEX1SORA_0x1436c0");
#endif

    ctx->pc = 0x1436c0u;

    // 0x1436c0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1436c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1436c4: 0x8c239c58  lw          $v1, -0x63A8($at)
    ctx->pc = 0x1436c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941784)));
    // 0x1436c8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1436C8u;
    {
        const bool branch_taken_0x1436c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1436CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1436C8u;
            // 0x1436cc: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436c8) {
            ctx->pc = 0x143728u;
            goto label_143728;
        }
    }
    ctx->pc = 0x1436D0u;
    // 0x1436d0: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x1436d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x1436d4: 0xc4219c50  lwc1        $f1, -0x63B0($at)
    ctx->pc = 0x1436d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1436d8: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x1436d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)49807u)));
    // 0x1436dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1436dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1436e0: 0x0  nop
    ctx->pc = 0x1436e0u;
    // NOP
    // 0x1436e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1436e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1436e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1436E8u;
    {
        const bool branch_taken_0x1436e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1436ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1436E8u;
            // 0x1436ec: 0x3c033727  lui         $v1, 0x3727 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436e8) {
            ctx->pc = 0x143708u;
            goto label_143708;
        }
    }
    ctx->pc = 0x1436F0u;
    // 0x1436f0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1436f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1436f4: 0x3463c5ac  ori         $v1, $v1, 0xC5AC
    ctx->pc = 0x1436f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)50604u)));
    // 0x1436f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1436f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1436fc: 0x0  nop
    ctx->pc = 0x1436fcu;
    // NOP
    // 0x143700: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x143700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x143704: 0xe4209c50  swc1        $f0, -0x63B0($at)
    ctx->pc = 0x143704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941776), bits); }
label_143708:
    // 0x143708: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14370c: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x14370cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
    // 0x143710: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x143710u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46871u)));
    // 0x143714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143718: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x143718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14371c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14371cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x143720: 0xe4a00114  swc1        $f0, 0x114($a1)
    ctx->pc = 0x143720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 276), bits); }
    // 0x143724: 0x0  nop
    ctx->pc = 0x143724u;
    // NOP
label_143728:
    // 0x143728: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14372c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14372cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143730: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x143730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x143734: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143734u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143738: 0xc4219c50  lwc1        $f1, -0x63B0($at)
    ctx->pc = 0x143738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14373c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14373cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143740: 0xc4a20110  lwc1        $f2, 0x110($a1)
    ctx->pc = 0x143740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143744: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x143744u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x143748: 0xe4a10110  swc1        $f1, 0x110($a1)
    ctx->pc = 0x143748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 272), bits); }
    // 0x14374c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x14374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143750: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x143750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143754: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x143754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143758: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x143758u;
    {
        const bool branch_taken_0x143758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14375Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143758u;
            // 0x14375c: 0x24650114  addiu       $a1, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143758) {
            ctx->pc = 0x143778u;
            goto label_143778;
        }
    }
    ctx->pc = 0x143760u;
    // 0x143760: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x143764: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143764u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14376c: 0x0  nop
    ctx->pc = 0x14376cu;
    // NOP
    // 0x143770: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x143770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x143774: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x143774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_143778:
    // 0x143778: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14377c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14377cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x143780: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143780u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143788: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x143788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14378c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14378cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143790: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x143790u;
    {
        const bool branch_taken_0x143790 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x143794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143790u;
            // 0x143794: 0x24a60114  addiu       $a2, $a1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143790) {
            ctx->pc = 0x1437B0u;
            goto label_1437b0;
        }
    }
    ctx->pc = 0x143798u;
    // 0x143798: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14379c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14379cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1437a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1437a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1437a4: 0x0  nop
    ctx->pc = 0x1437a4u;
    // NOP
    // 0x1437a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1437a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1437ac: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1437acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1437b0:
    // 0x1437b0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1437b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1437b4: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1437b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1437b8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1437b8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1437bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1437bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1437c0: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x1437c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1437c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1437c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1437c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1437C8u;
    {
        const bool branch_taken_0x1437c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1437CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1437C8u;
            // 0x1437cc: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1437c8) {
            ctx->pc = 0x1437E8u;
            goto label_1437e8;
        }
    }
    ctx->pc = 0x1437D0u;
    // 0x1437d0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1437d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1437d4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1437d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1437d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1437d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1437dc: 0x0  nop
    ctx->pc = 0x1437dcu;
    // NOP
    // 0x1437e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1437e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1437e4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1437e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1437e8:
    // 0x1437e8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1437e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1437ec: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1437ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1437f0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1437f0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1437f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1437f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1437f8: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x1437f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1437fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1437fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143800: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x143800u;
    {
        const bool branch_taken_0x143800 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x143804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143800u;
            // 0x143804: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143800) {
            ctx->pc = 0x143820u;
            goto label_143820;
        }
    }
    ctx->pc = 0x143808u;
    // 0x143808: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14380c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14380cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143814: 0x0  nop
    ctx->pc = 0x143814u;
    // NOP
    // 0x143818: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x143818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14381c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14381cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_143820:
    // 0x143820: 0x3e00008  jr          $ra
    ctx->pc = 0x143820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143708u: goto label_143708;
            case 0x143728u: goto label_143728;
            case 0x143778u: goto label_143778;
            case 0x1437B0u: goto label_1437b0;
            case 0x1437E8u: goto label_1437e8;
            case 0x143820u: goto label_143820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143828u;
}

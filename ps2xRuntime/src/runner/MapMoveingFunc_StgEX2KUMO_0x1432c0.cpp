#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_StgEX2KUMO
// Address: 0x1432c0 - 0x1433c0
void MapMoveingFunc_StgEX2KUMO_0x1432c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_StgEX2KUMO_0x1432c0");
#endif

    ctx->pc = 0x1432c0u;

    // 0x1432c0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1432c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1432c4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1432c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1432c8: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1432c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1432cc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1432ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1432d0: 0xc4219c38  lwc1        $f1, -0x63C8($at)
    ctx->pc = 0x1432d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1432d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1432d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1432d8: 0xc4a20110  lwc1        $f2, 0x110($a1)
    ctx->pc = 0x1432d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1432dc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1432dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1432e0: 0xe4a10110  swc1        $f1, 0x110($a1)
    ctx->pc = 0x1432e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 272), bits); }
    // 0x1432e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1432e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1432e8: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1432e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1432ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1432ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1432f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1432F0u;
    {
        const bool branch_taken_0x1432f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1432F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1432F0u;
            // 0x1432f4: 0x24650114  addiu       $a1, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432f0) {
            ctx->pc = 0x143310u;
            goto label_143310;
        }
    }
    ctx->pc = 0x1432F8u;
    // 0x1432f8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1432f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1432fc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1432fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143304: 0x0  nop
    ctx->pc = 0x143304u;
    // NOP
    // 0x143308: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x143308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14330c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14330cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_143310:
    // 0x143310: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143314: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x143314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x143318: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143318u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14331c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14331cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143320: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x143320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143324: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x143324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143328: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x143328u;
    {
        const bool branch_taken_0x143328 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14332Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143328u;
            // 0x14332c: 0x24a60114  addiu       $a2, $a1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143328) {
            ctx->pc = 0x143348u;
            goto label_143348;
        }
    }
    ctx->pc = 0x143330u;
    // 0x143330: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x143334: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143334u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14333c: 0x0  nop
    ctx->pc = 0x14333cu;
    // NOP
    // 0x143340: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x143340u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x143344: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x143344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_143348:
    // 0x143348: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14334c: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x14334cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x143350: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143350u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143354: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143358: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x143358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14335c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14335cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143360: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x143360u;
    {
        const bool branch_taken_0x143360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x143364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143360u;
            // 0x143364: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143360) {
            ctx->pc = 0x143380u;
            goto label_143380;
        }
    }
    ctx->pc = 0x143368u;
    // 0x143368: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14336c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14336cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143370: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143374: 0x0  nop
    ctx->pc = 0x143374u;
    // NOP
    // 0x143378: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x143378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14337c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x14337cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_143380:
    // 0x143380: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x143380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143384: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x143384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x143388: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143388u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14338c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14338cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143390: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x143390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143394: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x143394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143398: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x143398u;
    {
        const bool branch_taken_0x143398 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14339Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143398u;
            // 0x14339c: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143398) {
            ctx->pc = 0x1433B8u;
            goto label_1433b8;
        }
    }
    ctx->pc = 0x1433A0u;
    // 0x1433a0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1433a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1433a4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1433a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1433a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1433a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1433ac: 0x0  nop
    ctx->pc = 0x1433acu;
    // NOP
    // 0x1433b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1433b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1433b4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1433b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1433b8:
    // 0x1433b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1433B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143310u: goto label_143310;
            case 0x143348u: goto label_143348;
            case 0x143380u: goto label_143380;
            case 0x1433B8u: goto label_1433b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1433C0u;
}

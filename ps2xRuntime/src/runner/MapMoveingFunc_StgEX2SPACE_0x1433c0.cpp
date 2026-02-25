#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_StgEX2SPACE
// Address: 0x1433c0 - 0x1434c0
void MapMoveingFunc_StgEX2SPACE_0x1433c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_StgEX2SPACE_0x1433c0");
#endif

    ctx->pc = 0x1433c0u;

    // 0x1433c0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1433c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1433c4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1433c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1433c8: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1433c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1433cc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1433ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1433d0: 0xc4219c40  lwc1        $f1, -0x63C0($at)
    ctx->pc = 0x1433d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1433d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1433d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1433d8: 0xc4a20110  lwc1        $f2, 0x110($a1)
    ctx->pc = 0x1433d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1433dc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1433dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1433e0: 0xe4a10110  swc1        $f1, 0x110($a1)
    ctx->pc = 0x1433e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 272), bits); }
    // 0x1433e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1433e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1433e8: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1433e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1433ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1433ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1433f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1433F0u;
    {
        const bool branch_taken_0x1433f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1433F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1433F0u;
            // 0x1433f4: 0x24650114  addiu       $a1, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433f0) {
            ctx->pc = 0x143410u;
            goto label_143410;
        }
    }
    ctx->pc = 0x1433F8u;
    // 0x1433f8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1433f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1433fc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1433fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143400: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143404: 0x0  nop
    ctx->pc = 0x143404u;
    // NOP
    // 0x143408: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x143408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14340c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14340cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_143410:
    // 0x143410: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143414: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x143414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x143418: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143418u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14341c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14341cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143420: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x143420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143424: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x143424u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143428: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x143428u;
    {
        const bool branch_taken_0x143428 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14342Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143428u;
            // 0x14342c: 0x24a60114  addiu       $a2, $a1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143428) {
            ctx->pc = 0x143448u;
            goto label_143448;
        }
    }
    ctx->pc = 0x143430u;
    // 0x143430: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x143434: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143434u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14343c: 0x0  nop
    ctx->pc = 0x14343cu;
    // NOP
    // 0x143440: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x143440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x143444: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x143444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_143448:
    // 0x143448: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14344c: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x14344cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x143450: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143450u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143458: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x143458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14345c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14345cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143460: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x143460u;
    {
        const bool branch_taken_0x143460 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x143464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143460u;
            // 0x143464: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143460) {
            ctx->pc = 0x143480u;
            goto label_143480;
        }
    }
    ctx->pc = 0x143468u;
    // 0x143468: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14346c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14346cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143474: 0x0  nop
    ctx->pc = 0x143474u;
    // NOP
    // 0x143478: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x143478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14347c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x14347cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_143480:
    // 0x143480: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x143480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143484: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x143484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x143488: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143488u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14348c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14348cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143490: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x143490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143494: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x143494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143498: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x143498u;
    {
        const bool branch_taken_0x143498 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14349Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143498u;
            // 0x14349c: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143498) {
            ctx->pc = 0x1434B8u;
            goto label_1434b8;
        }
    }
    ctx->pc = 0x1434A0u;
    // 0x1434a0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1434a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1434a4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1434a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1434a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1434a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1434ac: 0x0  nop
    ctx->pc = 0x1434acu;
    // NOP
    // 0x1434b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1434b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1434b4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1434b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1434b8:
    // 0x1434b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1434B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143410u: goto label_143410;
            case 0x143448u: goto label_143448;
            case 0x143480u: goto label_143480;
            case 0x1434B8u: goto label_1434b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1434C0u;
}

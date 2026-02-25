#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage8TrueBossMove
// Address: 0x1ed2f0 - 0x1eed38
void Stage8TrueBossMove_0x1ed2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage8TrueBossMove_0x1ed2f0");
#endif

    ctx->pc = 0x1ed2f0u;

    // 0x1ed2f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ed2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ed2f4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1ed2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1ed2f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ed2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ed2fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed2fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ed300: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ed300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ed304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed308: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ed308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ed30c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ed30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ed310: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ed310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ed314: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ed314u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ed318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed31c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ed31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ed320: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1ed320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ed324: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1ed324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed328: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ed328u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ed32c: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1ed32cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1ed330: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ed330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ed334: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1ed334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ed338: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1ed338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed33c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ed33cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ed340: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1ed340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1ed344: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ed344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ed348: 0xc48200d8  lwc1        $f2, 0xD8($a0)
    ctx->pc = 0x1ed348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ed34c: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1ed34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed350: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ed350u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ed354: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x1ed354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1ed358: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ed358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ed35c: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1ed35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ed360: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1ed360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed364: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ed364u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ed368: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1ed368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1ed36c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ed36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ed370: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1ed370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ed374: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1ed374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed378: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ed378u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ed37c: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1ed37cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1ed380: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ed380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ed384: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1ed384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ed388: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1ed388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed38c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ed38cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ed390: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1ed390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x1ed394: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ed394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ed398: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1ed398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed39c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ed39cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed3a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED3A0u;
    {
        const bool branch_taken_0x1ed3a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED3A0u;
            // 0x1ed3a4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3a0) {
            ctx->pc = 0x1ED3C0u;
            goto label_1ed3c0;
        }
    }
    ctx->pc = 0x1ED3A8u;
    // 0x1ed3a8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ed3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1ed3ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed3acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ed3b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed3b4: 0x0  nop
    ctx->pc = 0x1ed3b4u;
    // NOP
    // 0x1ed3b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ed3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ed3bc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ed3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1ed3c0:
    // 0x1ed3c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ed3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed3c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ed3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ed3c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed3c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ed3cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed3d0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1ed3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed3d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ed3d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed3d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED3D8u;
    {
        const bool branch_taken_0x1ed3d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED3D8u;
            // 0x1ed3dc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3d8) {
            ctx->pc = 0x1ED3F8u;
            goto label_1ed3f8;
        }
    }
    ctx->pc = 0x1ED3E0u;
    // 0x1ed3e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ed3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1ed3e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed3e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ed3e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed3ec: 0x0  nop
    ctx->pc = 0x1ed3ecu;
    // NOP
    // 0x1ed3f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ed3f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ed3f4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ed3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ed3f8:
    // 0x1ed3f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ed3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed3fc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1ed3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1ed400: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed400u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ed404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed408: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1ed408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed40c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ed40cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed410: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED410u;
    {
        const bool branch_taken_0x1ed410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED410u;
            // 0x1ed414: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed410) {
            ctx->pc = 0x1ED430u;
            goto label_1ed430;
        }
    }
    ctx->pc = 0x1ED418u;
    // 0x1ed418: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ed418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1ed41c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed41cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ed420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed424: 0x0  nop
    ctx->pc = 0x1ed424u;
    // NOP
    // 0x1ed428: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ed428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ed42c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ed42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ed430:
    // 0x1ed430: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ed430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed434: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ed434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ed438: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed438u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ed43c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed440: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1ed440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed444: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ed444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed448: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED448u;
    {
        const bool branch_taken_0x1ed448 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED448u;
            // 0x1ed44c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed448) {
            ctx->pc = 0x1ED468u;
            goto label_1ed468;
        }
    }
    ctx->pc = 0x1ED450u;
    // 0x1ed450: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ed450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1ed454: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed454u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ed458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed45c: 0x0  nop
    ctx->pc = 0x1ed45cu;
    // NOP
    // 0x1ed460: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ed460u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ed464: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ed464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ed468:
    // 0x1ed468: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ed468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed46c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1ed46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1ed470: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed470u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ed474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed478: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1ed478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed47c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ed47cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed480: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED480u;
    {
        const bool branch_taken_0x1ed480 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED480u;
            // 0x1ed484: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed480) {
            ctx->pc = 0x1ED4A0u;
            goto label_1ed4a0;
        }
    }
    ctx->pc = 0x1ED488u;
    // 0x1ed488: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ed488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1ed48c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed48cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ed490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed494: 0x0  nop
    ctx->pc = 0x1ed494u;
    // NOP
    // 0x1ed498: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ed498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ed49c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ed49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ed4a0:
    // 0x1ed4a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ed4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed4a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ed4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ed4a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed4a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ed4ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed4b0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1ed4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed4b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ed4b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed4b8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED4B8u;
    {
        const bool branch_taken_0x1ed4b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED4B8u;
            // 0x1ed4bc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4b8) {
            ctx->pc = 0x1ED4D8u;
            goto label_1ed4d8;
        }
    }
    ctx->pc = 0x1ED4C0u;
    // 0x1ed4c0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ed4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1ed4c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed4c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ed4c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed4cc: 0x0  nop
    ctx->pc = 0x1ed4ccu;
    // NOP
    // 0x1ed4d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ed4d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ed4d4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ed4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ed4d8:
    // 0x1ed4d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ed4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed4dc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1ed4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1ed4e0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1ed4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ed4e4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1ed4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ed4e8: 0xc07bb64  jal         func_1EED90
    ctx->pc = 0x1ED4E8u;
    SET_GPR_U32(ctx, 31, 0x1ED4F0u);
    ctx->pc = 0x1ED4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED4E8u;
            // 0x1ed4ec: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EED90u;
    if (runtime->hasFunction(0x1EED90u)) {
        auto targetFn = runtime->lookupFunction(0x1EED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED4F0u; }
        if (ctx->pc != 0x1ED4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1eed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED4F0u; }
        if (ctx->pc != 0x1ED4F0u) { return; }
    }
    ctx->pc = 0x1ED4F0u;
    // 0x1ed4f0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1ed4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed4f4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1ed4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1ed4f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ed4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed4fc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ed4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1ed500: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1ed500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1ed504: 0x2c410018  sltiu       $at, $v0, 0x18
    ctx->pc = 0x1ed504u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1ed508: 0x10200583  beqz        $at, . + 4 + (0x583 << 2)
    ctx->pc = 0x1ED508u;
    {
        const bool branch_taken_0x1ed508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED508u;
            // 0x1ed50c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed508) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1ED510u;
    // 0x1ed510: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ed510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ed514: 0x24632f70  addiu       $v1, $v1, 0x2F70
    ctx->pc = 0x1ed514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12144));
    // 0x1ed518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed51c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ed51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed520: 0x400008  jr          $v0
    ctx->pc = 0x1ED520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED528u: goto label_1ed528;
            case 0x1ED568u: goto label_1ed568;
            case 0x1ED580u: goto label_1ed580;
            case 0x1ED6A0u: goto label_1ed6a0;
            case 0x1ED7C0u: goto label_1ed7c0;
            case 0x1ED8E0u: goto label_1ed8e0;
            case 0x1EDA30u: goto label_1eda30;
            case 0x1EDB38u: goto label_1edb38;
            case 0x1EDC50u: goto label_1edc50;
            case 0x1EDD58u: goto label_1edd58;
            case 0x1EDEB8u: goto label_1edeb8;
            case 0x1EDF80u: goto label_1edf80;
            case 0x1EDFC8u: goto label_1edfc8;
            case 0x1EE0B8u: goto label_1ee0b8;
            case 0x1EE1A8u: goto label_1ee1a8;
            case 0x1EE300u: goto label_1ee300;
            case 0x1EE4D0u: goto label_1ee4d0;
            case 0x1EE4E0u: goto label_1ee4e0;
            case 0x1EE9B8u: goto label_1ee9b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED528u;
label_1ed528:
    // 0x1ed528: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed52c: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1ed52cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1ed530: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED530u;
    {
        const bool branch_taken_0x1ed530 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED530u;
            // 0x1ed534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed530) {
            ctx->pc = 0x1ED548u;
            goto label_1ed548;
        }
    }
    ctx->pc = 0x1ED538u;
    // 0x1ed538: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1ed538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1ed53c: 0x10000576  b           . + 4 + (0x576 << 2)
    ctx->pc = 0x1ED53Cu;
    {
        const bool branch_taken_0x1ed53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED53Cu;
            // 0x1ed540: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed53c) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1ED544u;
    // 0x1ed544: 0x0  nop
    ctx->pc = 0x1ed544u;
    // NOP
label_1ed548:
    // 0x1ed548: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ed548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed54c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ed54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1ed550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed554: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1ed554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed558: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ed558u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ed55c: 0x1000056e  b           . + 4 + (0x56E << 2)
    ctx->pc = 0x1ED55Cu;
    {
        const bool branch_taken_0x1ed55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED55Cu;
            // 0x1ed560: 0xe4600124  swc1        $f0, 0x124($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed55c) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1ED564u;
    // 0x1ed564: 0x0  nop
    ctx->pc = 0x1ed564u;
    // NOP
label_1ed568:
    // 0x1ed568: 0xc07bb50  jal         func_1EED40
    ctx->pc = 0x1ED568u;
    SET_GPR_U32(ctx, 31, 0x1ED570u);
    ctx->pc = 0x1ED56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED568u;
            // 0x1ed56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EED40u;
    if (runtime->hasFunction(0x1EED40u)) {
        auto targetFn = runtime->lookupFunction(0x1EED40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED570u; }
        if (ctx->pc != 0x1ED570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stage8TrueBossGetStep_0x1eed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED570u; }
        if (ctx->pc != 0x1ED570u) { return; }
    }
    ctx->pc = 0x1ED570u;
    // 0x1ed570: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1ed570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1ed574: 0x10000568  b           . + 4 + (0x568 << 2)
    ctx->pc = 0x1ED574u;
    {
        const bool branch_taken_0x1ed574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED574u;
            // 0x1ed578: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed574) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1ED57Cu;
    // 0x1ed57c: 0x0  nop
    ctx->pc = 0x1ed57cu;
    // NOP
label_1ed580:
    // 0x1ed580: 0xc065d00  jal         func_197400
    ctx->pc = 0x1ED580u;
    SET_GPR_U32(ctx, 31, 0x1ED588u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED588u; }
        if (ctx->pc != 0x1ED588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED588u; }
        if (ctx->pc != 0x1ED588u) { return; }
    }
    ctx->pc = 0x1ED588u;
    // 0x1ed588: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ed588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ed58c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED58Cu;
    {
        const bool branch_taken_0x1ed58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ed58c) {
            ctx->pc = 0x1ED5A0u;
            goto label_1ed5a0;
        }
    }
    ctx->pc = 0x1ED594u;
    // 0x1ed594: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED594u;
    {
        const bool branch_taken_0x1ed594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED594u;
            // 0x1ed598: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed594) {
            ctx->pc = 0x1ED5D8u;
            goto label_1ed5d8;
        }
    }
    ctx->pc = 0x1ED59Cu;
    // 0x1ed59c: 0x0  nop
    ctx->pc = 0x1ed59cu;
    // NOP
label_1ed5a0:
    // 0x1ed5a0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1ED5A0u;
    SET_GPR_U32(ctx, 31, 0x1ED5A8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5A8u; }
        if (ctx->pc != 0x1ED5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5A8u; }
        if (ctx->pc != 0x1ED5A8u) { return; }
    }
    ctx->pc = 0x1ED5A8u;
    // 0x1ed5a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed5ac: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED5ACu;
    {
        const bool branch_taken_0x1ed5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ed5ac) {
            ctx->pc = 0x1ED5C0u;
            goto label_1ed5c0;
        }
    }
    ctx->pc = 0x1ED5B4u;
    // 0x1ed5b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED5B4u;
    {
        const bool branch_taken_0x1ed5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5B4u;
            // 0x1ed5b8: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5b4) {
            ctx->pc = 0x1ED5D8u;
            goto label_1ed5d8;
        }
    }
    ctx->pc = 0x1ED5BCu;
    // 0x1ed5bc: 0x0  nop
    ctx->pc = 0x1ed5bcu;
    // NOP
label_1ed5c0:
    // 0x1ed5c0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1ED5C0u;
    SET_GPR_U32(ctx, 31, 0x1ED5C8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5C8u; }
        if (ctx->pc != 0x1ED5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5C8u; }
        if (ctx->pc != 0x1ED5C8u) { return; }
    }
    ctx->pc = 0x1ED5C8u;
    // 0x1ed5c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED5C8u;
    {
        const bool branch_taken_0x1ed5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed5c8) {
            ctx->pc = 0x1ED5D8u;
            goto label_1ed5d8;
        }
    }
    ctx->pc = 0x1ED5D0u;
    // 0x1ed5d0: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x1ed5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ed5d4: 0x0  nop
    ctx->pc = 0x1ed5d4u;
    // NOP
label_1ed5d8:
    // 0x1ed5d8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed5dc: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x1ed5dcu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ed5e0: 0x0  nop
    ctx->pc = 0x1ed5e0u;
    // NOP
    // 0x1ed5e4: 0x0  nop
    ctx->pc = 0x1ed5e4u;
    // NOP
    // 0x1ed5e8: 0x1010  mfhi        $v0
    ctx->pc = 0x1ed5e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ed5ec: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1ED5ECu;
    {
        const bool branch_taken_0x1ed5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed5ec) {
            ctx->pc = 0x1ED680u;
            goto label_1ed680;
        }
    }
    ctx->pc = 0x1ED5F4u;
    // 0x1ed5f4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED5F4u;
    SET_GPR_U32(ctx, 31, 0x1ED5FCu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5FCu; }
        if (ctx->pc != 0x1ED5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5FCu; }
        if (ctx->pc != 0x1ED5FCu) { return; }
    }
    ctx->pc = 0x1ED5FCu;
    // 0x1ed5fc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ed5fcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed600: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed604: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed608: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed60c: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1ED60Cu;
    SET_GPR_U32(ctx, 31, 0x1ED614u);
    ctx->pc = 0x1ED610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED60Cu;
            // 0x1ed610: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED614u; }
        if (ctx->pc != 0x1ED614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED614u; }
        if (ctx->pc != 0x1ED614u) { return; }
    }
    ctx->pc = 0x1ED614u;
    // 0x1ed614: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED614u;
    SET_GPR_U32(ctx, 31, 0x1ED61Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED61Cu; }
        if (ctx->pc != 0x1ED61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED61Cu; }
        if (ctx->pc != 0x1ED61Cu) { return; }
    }
    ctx->pc = 0x1ED61Cu;
    // 0x1ed61c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ed61cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed620: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed624: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed628: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed62c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1ed62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1ed630: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1ED630u;
    SET_GPR_U32(ctx, 31, 0x1ED638u);
    ctx->pc = 0x1ED634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED630u;
            // 0x1ed634: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED638u; }
        if (ctx->pc != 0x1ED638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED638u; }
        if (ctx->pc != 0x1ED638u) { return; }
    }
    ctx->pc = 0x1ED638u;
    // 0x1ed638: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED638u;
    SET_GPR_U32(ctx, 31, 0x1ED640u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED640u; }
        if (ctx->pc != 0x1ED640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED640u; }
        if (ctx->pc != 0x1ED640u) { return; }
    }
    ctx->pc = 0x1ED640u;
    // 0x1ed640: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ed640u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed644: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed648: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed64c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed650: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1ED650u;
    SET_GPR_U32(ctx, 31, 0x1ED658u);
    ctx->pc = 0x1ED654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED650u;
            // 0x1ed654: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED658u; }
        if (ctx->pc != 0x1ED658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED658u; }
        if (ctx->pc != 0x1ED658u) { return; }
    }
    ctx->pc = 0x1ED658u;
    // 0x1ed658: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED658u;
    SET_GPR_U32(ctx, 31, 0x1ED660u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED660u; }
        if (ctx->pc != 0x1ED660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED660u; }
        if (ctx->pc != 0x1ED660u) { return; }
    }
    ctx->pc = 0x1ED660u;
    // 0x1ed660: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ed660u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed664: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed668: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed66c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed670: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1ed670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1ed674: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1ED674u;
    SET_GPR_U32(ctx, 31, 0x1ED67Cu);
    ctx->pc = 0x1ED678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED674u;
            // 0x1ed678: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED67Cu; }
        if (ctx->pc != 0x1ED67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED67Cu; }
        if (ctx->pc != 0x1ED67Cu) { return; }
    }
    ctx->pc = 0x1ED67Cu;
    // 0x1ed67c: 0x0  nop
    ctx->pc = 0x1ed67cu;
    // NOP
label_1ed680:
    // 0x1ed680: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed684: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1ed684u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1ed688: 0x14200523  bnez        $at, . + 4 + (0x523 << 2)
    ctx->pc = 0x1ED688u;
    {
        const bool branch_taken_0x1ed688 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed688) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1ED690u;
    // 0x1ed690: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ed690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ed694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed698: 0x1000051f  b           . + 4 + (0x51F << 2)
    ctx->pc = 0x1ED698u;
    {
        const bool branch_taken_0x1ed698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED698u;
            // 0x1ed69c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed698) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1ED6A0u;
label_1ed6a0:
    // 0x1ed6a0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1ED6A0u;
    SET_GPR_U32(ctx, 31, 0x1ED6A8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED6A8u; }
        if (ctx->pc != 0x1ED6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED6A8u; }
        if (ctx->pc != 0x1ED6A8u) { return; }
    }
    ctx->pc = 0x1ED6A8u;
    // 0x1ed6a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ed6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ed6ac: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED6ACu;
    {
        const bool branch_taken_0x1ed6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ed6ac) {
            ctx->pc = 0x1ED6C0u;
            goto label_1ed6c0;
        }
    }
    ctx->pc = 0x1ED6B4u;
    // 0x1ed6b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED6B4u;
    {
        const bool branch_taken_0x1ed6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED6B4u;
            // 0x1ed6b8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6b4) {
            ctx->pc = 0x1ED6F8u;
            goto label_1ed6f8;
        }
    }
    ctx->pc = 0x1ED6BCu;
    // 0x1ed6bc: 0x0  nop
    ctx->pc = 0x1ed6bcu;
    // NOP
label_1ed6c0:
    // 0x1ed6c0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1ED6C0u;
    SET_GPR_U32(ctx, 31, 0x1ED6C8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED6C8u; }
        if (ctx->pc != 0x1ED6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED6C8u; }
        if (ctx->pc != 0x1ED6C8u) { return; }
    }
    ctx->pc = 0x1ED6C8u;
    // 0x1ed6c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed6cc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED6CCu;
    {
        const bool branch_taken_0x1ed6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ed6cc) {
            ctx->pc = 0x1ED6E0u;
            goto label_1ed6e0;
        }
    }
    ctx->pc = 0x1ED6D4u;
    // 0x1ed6d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED6D4u;
    {
        const bool branch_taken_0x1ed6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED6D4u;
            // 0x1ed6d8: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6d4) {
            ctx->pc = 0x1ED6F8u;
            goto label_1ed6f8;
        }
    }
    ctx->pc = 0x1ED6DCu;
    // 0x1ed6dc: 0x0  nop
    ctx->pc = 0x1ed6dcu;
    // NOP
label_1ed6e0:
    // 0x1ed6e0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1ED6E0u;
    SET_GPR_U32(ctx, 31, 0x1ED6E8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED6E8u; }
        if (ctx->pc != 0x1ED6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED6E8u; }
        if (ctx->pc != 0x1ED6E8u) { return; }
    }
    ctx->pc = 0x1ED6E8u;
    // 0x1ed6e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED6E8u;
    {
        const bool branch_taken_0x1ed6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed6e8) {
            ctx->pc = 0x1ED6F8u;
            goto label_1ed6f8;
        }
    }
    ctx->pc = 0x1ED6F0u;
    // 0x1ed6f0: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1ed6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ed6f4: 0x0  nop
    ctx->pc = 0x1ed6f4u;
    // NOP
label_1ed6f8:
    // 0x1ed6f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed6fc: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x1ed6fcu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ed700: 0x0  nop
    ctx->pc = 0x1ed700u;
    // NOP
    // 0x1ed704: 0x0  nop
    ctx->pc = 0x1ed704u;
    // NOP
    // 0x1ed708: 0x1010  mfhi        $v0
    ctx->pc = 0x1ed708u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ed70c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1ED70Cu;
    {
        const bool branch_taken_0x1ed70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed70c) {
            ctx->pc = 0x1ED7A0u;
            goto label_1ed7a0;
        }
    }
    ctx->pc = 0x1ED714u;
    // 0x1ed714: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED714u;
    SET_GPR_U32(ctx, 31, 0x1ED71Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED71Cu; }
        if (ctx->pc != 0x1ED71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED71Cu; }
        if (ctx->pc != 0x1ED71Cu) { return; }
    }
    ctx->pc = 0x1ED71Cu;
    // 0x1ed71c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ed71cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed720: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed724: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed728: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed72c: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1ED72Cu;
    SET_GPR_U32(ctx, 31, 0x1ED734u);
    ctx->pc = 0x1ED730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED72Cu;
            // 0x1ed730: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED734u; }
        if (ctx->pc != 0x1ED734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED734u; }
        if (ctx->pc != 0x1ED734u) { return; }
    }
    ctx->pc = 0x1ED734u;
    // 0x1ed734: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED734u;
    SET_GPR_U32(ctx, 31, 0x1ED73Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED73Cu; }
        if (ctx->pc != 0x1ED73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED73Cu; }
        if (ctx->pc != 0x1ED73Cu) { return; }
    }
    ctx->pc = 0x1ED73Cu;
    // 0x1ed73c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ed73cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed740: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed744: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed748: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed74c: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x1ed74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x1ed750: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1ED750u;
    SET_GPR_U32(ctx, 31, 0x1ED758u);
    ctx->pc = 0x1ED754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED750u;
            // 0x1ed754: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED758u; }
        if (ctx->pc != 0x1ED758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED758u; }
        if (ctx->pc != 0x1ED758u) { return; }
    }
    ctx->pc = 0x1ED758u;
    // 0x1ed758: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED758u;
    SET_GPR_U32(ctx, 31, 0x1ED760u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED760u; }
        if (ctx->pc != 0x1ED760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED760u; }
        if (ctx->pc != 0x1ED760u) { return; }
    }
    ctx->pc = 0x1ED760u;
    // 0x1ed760: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ed760u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed764: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed768: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed76c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed770: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1ed770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1ed774: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1ED774u;
    SET_GPR_U32(ctx, 31, 0x1ED77Cu);
    ctx->pc = 0x1ED778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED774u;
            // 0x1ed778: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED77Cu; }
        if (ctx->pc != 0x1ED77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED77Cu; }
        if (ctx->pc != 0x1ED77Cu) { return; }
    }
    ctx->pc = 0x1ED77Cu;
    // 0x1ed77c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED77Cu;
    SET_GPR_U32(ctx, 31, 0x1ED784u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED784u; }
        if (ctx->pc != 0x1ED784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED784u; }
        if (ctx->pc != 0x1ED784u) { return; }
    }
    ctx->pc = 0x1ED784u;
    // 0x1ed784: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ed784u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed788: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed78c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed790: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed794: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1ed794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1ed798: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1ED798u;
    SET_GPR_U32(ctx, 31, 0x1ED7A0u);
    ctx->pc = 0x1ED79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED798u;
            // 0x1ed79c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7A0u; }
        if (ctx->pc != 0x1ED7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7A0u; }
        if (ctx->pc != 0x1ED7A0u) { return; }
    }
    ctx->pc = 0x1ED7A0u;
label_1ed7a0:
    // 0x1ed7a0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed7a4: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1ed7a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1ed7a8: 0x142004db  bnez        $at, . + 4 + (0x4DB << 2)
    ctx->pc = 0x1ED7A8u;
    {
        const bool branch_taken_0x1ed7a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed7a8) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1ED7B0u;
    // 0x1ed7b0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ed7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ed7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed7b8: 0x100004d7  b           . + 4 + (0x4D7 << 2)
    ctx->pc = 0x1ED7B8u;
    {
        const bool branch_taken_0x1ed7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED7B8u;
            // 0x1ed7bc: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7b8) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1ED7C0u;
label_1ed7c0:
    // 0x1ed7c0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1ED7C0u;
    SET_GPR_U32(ctx, 31, 0x1ED7C8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7C8u; }
        if (ctx->pc != 0x1ED7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7C8u; }
        if (ctx->pc != 0x1ED7C8u) { return; }
    }
    ctx->pc = 0x1ED7C8u;
    // 0x1ed7c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ed7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ed7cc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED7CCu;
    {
        const bool branch_taken_0x1ed7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ed7cc) {
            ctx->pc = 0x1ED7E0u;
            goto label_1ed7e0;
        }
    }
    ctx->pc = 0x1ED7D4u;
    // 0x1ed7d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED7D4u;
    {
        const bool branch_taken_0x1ed7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED7D4u;
            // 0x1ed7d8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7d4) {
            ctx->pc = 0x1ED818u;
            goto label_1ed818;
        }
    }
    ctx->pc = 0x1ED7DCu;
    // 0x1ed7dc: 0x0  nop
    ctx->pc = 0x1ed7dcu;
    // NOP
label_1ed7e0:
    // 0x1ed7e0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1ED7E0u;
    SET_GPR_U32(ctx, 31, 0x1ED7E8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7E8u; }
        if (ctx->pc != 0x1ED7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7E8u; }
        if (ctx->pc != 0x1ED7E8u) { return; }
    }
    ctx->pc = 0x1ED7E8u;
    // 0x1ed7e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed7ec: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED7ECu;
    {
        const bool branch_taken_0x1ed7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ed7ec) {
            ctx->pc = 0x1ED800u;
            goto label_1ed800;
        }
    }
    ctx->pc = 0x1ED7F4u;
    // 0x1ed7f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED7F4u;
    {
        const bool branch_taken_0x1ed7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED7F4u;
            // 0x1ed7f8: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7f4) {
            ctx->pc = 0x1ED818u;
            goto label_1ed818;
        }
    }
    ctx->pc = 0x1ED7FCu;
    // 0x1ed7fc: 0x0  nop
    ctx->pc = 0x1ed7fcu;
    // NOP
label_1ed800:
    // 0x1ed800: 0xc065d00  jal         func_197400
    ctx->pc = 0x1ED800u;
    SET_GPR_U32(ctx, 31, 0x1ED808u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED808u; }
        if (ctx->pc != 0x1ED808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED808u; }
        if (ctx->pc != 0x1ED808u) { return; }
    }
    ctx->pc = 0x1ED808u;
    // 0x1ed808: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED808u;
    {
        const bool branch_taken_0x1ed808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed808) {
            ctx->pc = 0x1ED818u;
            goto label_1ed818;
        }
    }
    ctx->pc = 0x1ED810u;
    // 0x1ed810: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1ed810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ed814: 0x0  nop
    ctx->pc = 0x1ed814u;
    // NOP
label_1ed818:
    // 0x1ed818: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed81c: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x1ed81cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ed820: 0x0  nop
    ctx->pc = 0x1ed820u;
    // NOP
    // 0x1ed824: 0x0  nop
    ctx->pc = 0x1ed824u;
    // NOP
    // 0x1ed828: 0x1010  mfhi        $v0
    ctx->pc = 0x1ed828u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ed82c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1ED82Cu;
    {
        const bool branch_taken_0x1ed82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed82c) {
            ctx->pc = 0x1ED8C0u;
            goto label_1ed8c0;
        }
    }
    ctx->pc = 0x1ED834u;
    // 0x1ed834: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED834u;
    SET_GPR_U32(ctx, 31, 0x1ED83Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED83Cu; }
        if (ctx->pc != 0x1ED83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED83Cu; }
        if (ctx->pc != 0x1ED83Cu) { return; }
    }
    ctx->pc = 0x1ED83Cu;
    // 0x1ed83c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ed83cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed840: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed844: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed848: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed84c: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1ED84Cu;
    SET_GPR_U32(ctx, 31, 0x1ED854u);
    ctx->pc = 0x1ED850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED84Cu;
            // 0x1ed850: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED854u; }
        if (ctx->pc != 0x1ED854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED854u; }
        if (ctx->pc != 0x1ED854u) { return; }
    }
    ctx->pc = 0x1ED854u;
    // 0x1ed854: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED854u;
    SET_GPR_U32(ctx, 31, 0x1ED85Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED85Cu; }
        if (ctx->pc != 0x1ED85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED85Cu; }
        if (ctx->pc != 0x1ED85Cu) { return; }
    }
    ctx->pc = 0x1ED85Cu;
    // 0x1ed85c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ed85cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed860: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed864: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed868: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed86c: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x1ed86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x1ed870: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1ED870u;
    SET_GPR_U32(ctx, 31, 0x1ED878u);
    ctx->pc = 0x1ED874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED870u;
            // 0x1ed874: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED878u; }
        if (ctx->pc != 0x1ED878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED878u; }
        if (ctx->pc != 0x1ED878u) { return; }
    }
    ctx->pc = 0x1ED878u;
    // 0x1ed878: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED878u;
    SET_GPR_U32(ctx, 31, 0x1ED880u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED880u; }
        if (ctx->pc != 0x1ED880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED880u; }
        if (ctx->pc != 0x1ED880u) { return; }
    }
    ctx->pc = 0x1ED880u;
    // 0x1ed880: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ed880u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed884: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed888: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed88c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed890: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1ed890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1ed894: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1ED894u;
    SET_GPR_U32(ctx, 31, 0x1ED89Cu);
    ctx->pc = 0x1ED898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED894u;
            // 0x1ed898: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED89Cu; }
        if (ctx->pc != 0x1ED89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED89Cu; }
        if (ctx->pc != 0x1ED89Cu) { return; }
    }
    ctx->pc = 0x1ED89Cu;
    // 0x1ed89c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED89Cu;
    SET_GPR_U32(ctx, 31, 0x1ED8A4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8A4u; }
        if (ctx->pc != 0x1ED8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8A4u; }
        if (ctx->pc != 0x1ED8A4u) { return; }
    }
    ctx->pc = 0x1ED8A4u;
    // 0x1ed8a4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ed8a4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed8a8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed8ac: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed8b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed8b4: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1ed8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1ed8b8: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1ED8B8u;
    SET_GPR_U32(ctx, 31, 0x1ED8C0u);
    ctx->pc = 0x1ED8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED8B8u;
            // 0x1ed8bc: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8C0u; }
        if (ctx->pc != 0x1ED8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8C0u; }
        if (ctx->pc != 0x1ED8C0u) { return; }
    }
    ctx->pc = 0x1ED8C0u;
label_1ed8c0:
    // 0x1ed8c0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed8c4: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1ed8c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1ed8c8: 0x14200493  bnez        $at, . + 4 + (0x493 << 2)
    ctx->pc = 0x1ED8C8u;
    {
        const bool branch_taken_0x1ed8c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed8c8) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1ED8D0u;
    // 0x1ed8d0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ed8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ed8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed8d8: 0x1000048f  b           . + 4 + (0x48F << 2)
    ctx->pc = 0x1ED8D8u;
    {
        const bool branch_taken_0x1ed8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED8D8u;
            // 0x1ed8dc: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8d8) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1ED8E0u;
label_1ed8e0:
    // 0x1ed8e0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1ED8E0u;
    SET_GPR_U32(ctx, 31, 0x1ED8E8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8E8u; }
        if (ctx->pc != 0x1ED8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8E8u; }
        if (ctx->pc != 0x1ED8E8u) { return; }
    }
    ctx->pc = 0x1ED8E8u;
    // 0x1ed8e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ed8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ed8ec: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED8ECu;
    {
        const bool branch_taken_0x1ed8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ed8ec) {
            ctx->pc = 0x1ED900u;
            goto label_1ed900;
        }
    }
    ctx->pc = 0x1ED8F4u;
    // 0x1ed8f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED8F4u;
    {
        const bool branch_taken_0x1ed8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED8F4u;
            // 0x1ed8f8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8f4) {
            ctx->pc = 0x1ED938u;
            goto label_1ed938;
        }
    }
    ctx->pc = 0x1ED8FCu;
    // 0x1ed8fc: 0x0  nop
    ctx->pc = 0x1ed8fcu;
    // NOP
label_1ed900:
    // 0x1ed900: 0xc065d00  jal         func_197400
    ctx->pc = 0x1ED900u;
    SET_GPR_U32(ctx, 31, 0x1ED908u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED908u; }
        if (ctx->pc != 0x1ED908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED908u; }
        if (ctx->pc != 0x1ED908u) { return; }
    }
    ctx->pc = 0x1ED908u;
    // 0x1ed908: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed90c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED90Cu;
    {
        const bool branch_taken_0x1ed90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ed90c) {
            ctx->pc = 0x1ED920u;
            goto label_1ed920;
        }
    }
    ctx->pc = 0x1ED914u;
    // 0x1ed914: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED914u;
    {
        const bool branch_taken_0x1ed914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED914u;
            // 0x1ed918: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed914) {
            ctx->pc = 0x1ED938u;
            goto label_1ed938;
        }
    }
    ctx->pc = 0x1ED91Cu;
    // 0x1ed91c: 0x0  nop
    ctx->pc = 0x1ed91cu;
    // NOP
label_1ed920:
    // 0x1ed920: 0xc065d00  jal         func_197400
    ctx->pc = 0x1ED920u;
    SET_GPR_U32(ctx, 31, 0x1ED928u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED928u; }
        if (ctx->pc != 0x1ED928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED928u; }
        if (ctx->pc != 0x1ED928u) { return; }
    }
    ctx->pc = 0x1ED928u;
    // 0x1ed928: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED928u;
    {
        const bool branch_taken_0x1ed928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed928) {
            ctx->pc = 0x1ED938u;
            goto label_1ed938;
        }
    }
    ctx->pc = 0x1ED930u;
    // 0x1ed930: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1ed930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ed934: 0x0  nop
    ctx->pc = 0x1ed934u;
    // NOP
label_1ed938:
    // 0x1ed938: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ed938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed93c: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x1ed93cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ed940: 0x0  nop
    ctx->pc = 0x1ed940u;
    // NOP
    // 0x1ed944: 0x0  nop
    ctx->pc = 0x1ed944u;
    // NOP
    // 0x1ed948: 0x1010  mfhi        $v0
    ctx->pc = 0x1ed948u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ed94c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1ED94Cu;
    {
        const bool branch_taken_0x1ed94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed94c) {
            ctx->pc = 0x1EDA10u;
            goto label_1eda10;
        }
    }
    ctx->pc = 0x1ED954u;
    // 0x1ed954: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED954u;
    SET_GPR_U32(ctx, 31, 0x1ED95Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED95Cu; }
        if (ctx->pc != 0x1ED95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED95Cu; }
        if (ctx->pc != 0x1ED95Cu) { return; }
    }
    ctx->pc = 0x1ED95Cu;
    // 0x1ed95c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ed95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed960: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x1ed960u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed964: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed968: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ed968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ed96c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed970: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ed970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ed974: 0xc065480  jal         func_195200
    ctx->pc = 0x1ED974u;
    SET_GPR_U32(ctx, 31, 0x1ED97Cu);
    ctx->pc = 0x1ED978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED974u;
            // 0x1ed978: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED97Cu; }
        if (ctx->pc != 0x1ED97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED97Cu; }
        if (ctx->pc != 0x1ED97Cu) { return; }
    }
    ctx->pc = 0x1ED97Cu;
    // 0x1ed97c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED97Cu;
    SET_GPR_U32(ctx, 31, 0x1ED984u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED984u; }
        if (ctx->pc != 0x1ED984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED984u; }
        if (ctx->pc != 0x1ED984u) { return; }
    }
    ctx->pc = 0x1ED984u;
    // 0x1ed984: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ed984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed988: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x1ed988u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed98c: 0x3c024013  lui         $v0, 0x4013
    ctx->pc = 0x1ed98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16403 << 16));
    // 0x1ed990: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed994: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed998: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1ed998u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1ed99c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ed99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ed9a0: 0x2462003c  addiu       $v0, $v1, 0x3C
    ctx->pc = 0x1ed9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1ed9a4: 0xc065480  jal         func_195200
    ctx->pc = 0x1ED9A4u;
    SET_GPR_U32(ctx, 31, 0x1ED9ACu);
    ctx->pc = 0x1ED9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED9A4u;
            // 0x1ed9a8: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED9ACu; }
        if (ctx->pc != 0x1ED9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED9ACu; }
        if (ctx->pc != 0x1ED9ACu) { return; }
    }
    ctx->pc = 0x1ED9ACu;
    // 0x1ed9ac: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED9ACu;
    SET_GPR_U32(ctx, 31, 0x1ED9B4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED9B4u; }
        if (ctx->pc != 0x1ED9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED9B4u; }
        if (ctx->pc != 0x1ED9B4u) { return; }
    }
    ctx->pc = 0x1ED9B4u;
    // 0x1ed9b4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ed9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed9b8: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x1ed9b8u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed9bc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ed9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ed9c0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed9c4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed9c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ed9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ed9cc: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1ed9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1ed9d0: 0xc065480  jal         func_195200
    ctx->pc = 0x1ED9D0u;
    SET_GPR_U32(ctx, 31, 0x1ED9D8u);
    ctx->pc = 0x1ED9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED9D0u;
            // 0x1ed9d4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED9D8u; }
        if (ctx->pc != 0x1ED9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED9D8u; }
        if (ctx->pc != 0x1ED9D8u) { return; }
    }
    ctx->pc = 0x1ED9D8u;
    // 0x1ed9d8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ED9D8u;
    SET_GPR_U32(ctx, 31, 0x1ED9E0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED9E0u; }
        if (ctx->pc != 0x1ED9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED9E0u; }
        if (ctx->pc != 0x1ED9E0u) { return; }
    }
    ctx->pc = 0x1ED9E0u;
    // 0x1ed9e0: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1ed9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed9e4: 0x30470001  andi        $a3, $v0, 0x1
    ctx->pc = 0x1ed9e4u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ed9e8: 0x3c024013  lui         $v0, 0x4013
    ctx->pc = 0x1ed9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16403 << 16));
    // 0x1ed9ec: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed9f0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ed9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed9f4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1ed9f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1ed9f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ed9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ed9fc: 0x2403ffc4  addiu       $v1, $zero, -0x3C
    ctx->pc = 0x1ed9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967236));
    // 0x1eda00: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x1eda00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1eda04: 0xc065480  jal         func_195200
    ctx->pc = 0x1EDA04u;
    SET_GPR_U32(ctx, 31, 0x1EDA0Cu);
    ctx->pc = 0x1EDA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA04u;
            // 0x1eda08: 0x473021  addu        $a2, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA0Cu; }
        if (ctx->pc != 0x1EDA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA0Cu; }
        if (ctx->pc != 0x1EDA0Cu) { return; }
    }
    ctx->pc = 0x1EDA0Cu;
    // 0x1eda0c: 0x0  nop
    ctx->pc = 0x1eda0cu;
    // NOP
label_1eda10:
    // 0x1eda10: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1eda10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eda14: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1eda14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1eda18: 0x1420043f  bnez        $at, . + 4 + (0x43F << 2)
    ctx->pc = 0x1EDA18u;
    {
        const bool branch_taken_0x1eda18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eda18) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDA20u;
    // 0x1eda20: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1eda20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1eda24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eda24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eda28: 0x1000043b  b           . + 4 + (0x43B << 2)
    ctx->pc = 0x1EDA28u;
    {
        const bool branch_taken_0x1eda28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA28u;
            // 0x1eda2c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda28) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDA30u;
label_1eda30:
    // 0x1eda30: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDA30u;
    SET_GPR_U32(ctx, 31, 0x1EDA38u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA38u; }
        if (ctx->pc != 0x1EDA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA38u; }
        if (ctx->pc != 0x1EDA38u) { return; }
    }
    ctx->pc = 0x1EDA38u;
    // 0x1eda38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1eda38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eda3c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDA3Cu;
    {
        const bool branch_taken_0x1eda3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eda3c) {
            ctx->pc = 0x1EDA50u;
            goto label_1eda50;
        }
    }
    ctx->pc = 0x1EDA44u;
    // 0x1eda44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EDA44u;
    {
        const bool branch_taken_0x1eda44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA44u;
            // 0x1eda48: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda44) {
            ctx->pc = 0x1EDA88u;
            goto label_1eda88;
        }
    }
    ctx->pc = 0x1EDA4Cu;
    // 0x1eda4c: 0x0  nop
    ctx->pc = 0x1eda4cu;
    // NOP
label_1eda50:
    // 0x1eda50: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDA50u;
    SET_GPR_U32(ctx, 31, 0x1EDA58u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA58u; }
        if (ctx->pc != 0x1EDA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA58u; }
        if (ctx->pc != 0x1EDA58u) { return; }
    }
    ctx->pc = 0x1EDA58u;
    // 0x1eda58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eda58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eda5c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDA5Cu;
    {
        const bool branch_taken_0x1eda5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eda5c) {
            ctx->pc = 0x1EDA70u;
            goto label_1eda70;
        }
    }
    ctx->pc = 0x1EDA64u;
    // 0x1eda64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDA64u;
    {
        const bool branch_taken_0x1eda64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA64u;
            // 0x1eda68: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda64) {
            ctx->pc = 0x1EDA88u;
            goto label_1eda88;
        }
    }
    ctx->pc = 0x1EDA6Cu;
    // 0x1eda6c: 0x0  nop
    ctx->pc = 0x1eda6cu;
    // NOP
label_1eda70:
    // 0x1eda70: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDA70u;
    SET_GPR_U32(ctx, 31, 0x1EDA78u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA78u; }
        if (ctx->pc != 0x1EDA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA78u; }
        if (ctx->pc != 0x1EDA78u) { return; }
    }
    ctx->pc = 0x1EDA78u;
    // 0x1eda78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDA78u;
    {
        const bool branch_taken_0x1eda78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eda78) {
            ctx->pc = 0x1EDA88u;
            goto label_1eda88;
        }
    }
    ctx->pc = 0x1EDA80u;
    // 0x1eda80: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1eda80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1eda84: 0x0  nop
    ctx->pc = 0x1eda84u;
    // NOP
label_1eda88:
    // 0x1eda88: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1eda88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eda8c: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x1eda8cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1eda90: 0x0  nop
    ctx->pc = 0x1eda90u;
    // NOP
    // 0x1eda94: 0x0  nop
    ctx->pc = 0x1eda94u;
    // NOP
    // 0x1eda98: 0x1010  mfhi        $v0
    ctx->pc = 0x1eda98u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1eda9c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1EDA9Cu;
    {
        const bool branch_taken_0x1eda9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eda9c) {
            ctx->pc = 0x1EDB18u;
            goto label_1edb18;
        }
    }
    ctx->pc = 0x1EDAA4u;
    // 0x1edaa4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1edaa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edaa8:
    // 0x1edaa8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EDAA8u;
    SET_GPR_U32(ctx, 31, 0x1EDAB0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAB0u; }
        if (ctx->pc != 0x1EDAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAB0u; }
        if (ctx->pc != 0x1EDAB0u) { return; }
    }
    ctx->pc = 0x1EDAB0u;
    // 0x1edab0: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x1edab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1edab4: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x1edab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
    // 0x1edab8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1edab8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1edabc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1edabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1edac0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1edac0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1edac4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1edac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edac8: 0x9010  mfhi        $s2
    ctx->pc = 0x1edac8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1edacc: 0xc065480  jal         func_195200
    ctx->pc = 0x1EDACCu;
    SET_GPR_U32(ctx, 31, 0x1EDAD4u);
    ctx->pc = 0x1EDAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDACCu;
            // 0x1edad0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAD4u; }
        if (ctx->pc != 0x1EDAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAD4u; }
        if (ctx->pc != 0x1EDAD4u) { return; }
    }
    ctx->pc = 0x1EDAD4u;
    // 0x1edad4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1edad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edad8: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1edad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1edadc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1edadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1edae0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1edae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1edae4: 0xc065480  jal         func_195200
    ctx->pc = 0x1EDAE4u;
    SET_GPR_U32(ctx, 31, 0x1EDAECu);
    ctx->pc = 0x1EDAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDAE4u;
            // 0x1edae8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAECu; }
        if (ctx->pc != 0x1EDAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAECu; }
        if (ctx->pc != 0x1EDAECu) { return; }
    }
    ctx->pc = 0x1EDAECu;
    // 0x1edaec: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1edaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edaf0: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1edaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x1edaf4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1edaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1edaf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1edaf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1edafc: 0xc065480  jal         func_195200
    ctx->pc = 0x1EDAFCu;
    SET_GPR_U32(ctx, 31, 0x1EDB04u);
    ctx->pc = 0x1EDB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDAFCu;
            // 0x1edb00: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB04u; }
        if (ctx->pc != 0x1EDB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB04u; }
        if (ctx->pc != 0x1EDB04u) { return; }
    }
    ctx->pc = 0x1EDB04u;
    // 0x1edb04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1edb04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1edb08: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1edb08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1edb0c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1EDB0Cu;
    {
        const bool branch_taken_0x1edb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edb0c) {
            ctx->pc = 0x1EDAA8u;
            goto label_1edaa8;
        }
    }
    ctx->pc = 0x1EDB14u;
    // 0x1edb14: 0x0  nop
    ctx->pc = 0x1edb14u;
    // NOP
label_1edb18:
    // 0x1edb18: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1edb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1edb1c: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1edb1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1edb20: 0x142003fd  bnez        $at, . + 4 + (0x3FD << 2)
    ctx->pc = 0x1EDB20u;
    {
        const bool branch_taken_0x1edb20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edb20) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDB28u;
    // 0x1edb28: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1edb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1edb2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1edb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edb30: 0x100003f9  b           . + 4 + (0x3F9 << 2)
    ctx->pc = 0x1EDB30u;
    {
        const bool branch_taken_0x1edb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB30u;
            // 0x1edb34: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb30) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDB38u;
label_1edb38:
    // 0x1edb38: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDB38u;
    SET_GPR_U32(ctx, 31, 0x1EDB40u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB40u; }
        if (ctx->pc != 0x1EDB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB40u; }
        if (ctx->pc != 0x1EDB40u) { return; }
    }
    ctx->pc = 0x1EDB40u;
    // 0x1edb40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1edb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1edb44: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDB44u;
    {
        const bool branch_taken_0x1edb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edb44) {
            ctx->pc = 0x1EDB58u;
            goto label_1edb58;
        }
    }
    ctx->pc = 0x1EDB4Cu;
    // 0x1edb4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EDB4Cu;
    {
        const bool branch_taken_0x1edb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB4Cu;
            // 0x1edb50: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb4c) {
            ctx->pc = 0x1EDB90u;
            goto label_1edb90;
        }
    }
    ctx->pc = 0x1EDB54u;
    // 0x1edb54: 0x0  nop
    ctx->pc = 0x1edb54u;
    // NOP
label_1edb58:
    // 0x1edb58: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDB58u;
    SET_GPR_U32(ctx, 31, 0x1EDB60u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB60u; }
        if (ctx->pc != 0x1EDB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB60u; }
        if (ctx->pc != 0x1EDB60u) { return; }
    }
    ctx->pc = 0x1EDB60u;
    // 0x1edb60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edb64: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDB64u;
    {
        const bool branch_taken_0x1edb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edb64) {
            ctx->pc = 0x1EDB78u;
            goto label_1edb78;
        }
    }
    ctx->pc = 0x1EDB6Cu;
    // 0x1edb6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDB6Cu;
    {
        const bool branch_taken_0x1edb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB6Cu;
            // 0x1edb70: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb6c) {
            ctx->pc = 0x1EDB90u;
            goto label_1edb90;
        }
    }
    ctx->pc = 0x1EDB74u;
    // 0x1edb74: 0x0  nop
    ctx->pc = 0x1edb74u;
    // NOP
label_1edb78:
    // 0x1edb78: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDB78u;
    SET_GPR_U32(ctx, 31, 0x1EDB80u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB80u; }
        if (ctx->pc != 0x1EDB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB80u; }
        if (ctx->pc != 0x1EDB80u) { return; }
    }
    ctx->pc = 0x1EDB80u;
    // 0x1edb80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDB80u;
    {
        const bool branch_taken_0x1edb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edb80) {
            ctx->pc = 0x1EDB90u;
            goto label_1edb90;
        }
    }
    ctx->pc = 0x1EDB88u;
    // 0x1edb88: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1edb88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1edb8c: 0x0  nop
    ctx->pc = 0x1edb8cu;
    // NOP
label_1edb90:
    // 0x1edb90: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1edb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1edb94: 0x28410033  slti        $at, $v0, 0x33
    ctx->pc = 0x1edb94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x1edb98: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x1EDB98u;
    {
        const bool branch_taken_0x1edb98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edb98) {
            ctx->pc = 0x1EDC30u;
            goto label_1edc30;
        }
    }
    ctx->pc = 0x1EDBA0u;
    // 0x1edba0: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x1edba0u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1edba4: 0x0  nop
    ctx->pc = 0x1edba4u;
    // NOP
    // 0x1edba8: 0x0  nop
    ctx->pc = 0x1edba8u;
    // NOP
    // 0x1edbac: 0x1010  mfhi        $v0
    ctx->pc = 0x1edbacu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1edbb0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1EDBB0u;
    {
        const bool branch_taken_0x1edbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edbb0) {
            ctx->pc = 0x1EDC30u;
            goto label_1edc30;
        }
    }
    ctx->pc = 0x1EDBB8u;
    // 0x1edbb8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1EDBB8u;
    SET_GPR_U32(ctx, 31, 0x1EDBC0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBC0u; }
        if (ctx->pc != 0x1EDBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBC0u; }
        if (ctx->pc != 0x1EDBC0u) { return; }
    }
    ctx->pc = 0x1EDBC0u;
    // 0x1edbc0: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x1edbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
    // 0x1edbc4: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1edbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x1edbc8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1edbc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1edbcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1edbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1edbd0: 0x0  nop
    ctx->pc = 0x1edbd0u;
    // NOP
    // 0x1edbd4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1edbd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1edbd8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1EDBD8u;
    SET_GPR_U32(ctx, 31, 0x1EDBE0u);
    ctx->pc = 0x1EDBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDBD8u;
            // 0x1edbdc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBE0u; }
        if (ctx->pc != 0x1EDBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBE0u; }
        if (ctx->pc != 0x1EDBE0u) { return; }
    }
    ctx->pc = 0x1EDBE0u;
    // 0x1edbe0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1edbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edbe4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1edbe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1edbe8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1edbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1edbec: 0xc065254  jal         func_194950
    ctx->pc = 0x1EDBECu;
    SET_GPR_U32(ctx, 31, 0x1EDBF4u);
    ctx->pc = 0x1EDBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDBECu;
            // 0x1edbf0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBF4u; }
        if (ctx->pc != 0x1EDBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBF4u; }
        if (ctx->pc != 0x1EDBF4u) { return; }
    }
    ctx->pc = 0x1EDBF4u;
    // 0x1edbf4: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1EDBF4u;
    SET_GPR_U32(ctx, 31, 0x1EDBFCu);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBFCu; }
        if (ctx->pc != 0x1EDBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBFCu; }
        if (ctx->pc != 0x1EDBFCu) { return; }
    }
    ctx->pc = 0x1EDBFCu;
    // 0x1edbfc: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x1edbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
    // 0x1edc00: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1edc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x1edc04: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1edc04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1edc08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1edc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1edc0c: 0x0  nop
    ctx->pc = 0x1edc0cu;
    // NOP
    // 0x1edc10: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1edc10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1edc14: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1EDC14u;
    SET_GPR_U32(ctx, 31, 0x1EDC1Cu);
    ctx->pc = 0x1EDC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDC14u;
            // 0x1edc18: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC1Cu; }
        if (ctx->pc != 0x1EDC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC1Cu; }
        if (ctx->pc != 0x1EDC1Cu) { return; }
    }
    ctx->pc = 0x1EDC1Cu;
    // 0x1edc1c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1edc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edc20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1edc20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1edc24: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1edc24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1edc28: 0xc065254  jal         func_194950
    ctx->pc = 0x1EDC28u;
    SET_GPR_U32(ctx, 31, 0x1EDC30u);
    ctx->pc = 0x1EDC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDC28u;
            // 0x1edc2c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC30u; }
        if (ctx->pc != 0x1EDC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC30u; }
        if (ctx->pc != 0x1EDC30u) { return; }
    }
    ctx->pc = 0x1EDC30u;
label_1edc30:
    // 0x1edc30: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1edc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1edc34: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1edc34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1edc38: 0x142003b7  bnez        $at, . + 4 + (0x3B7 << 2)
    ctx->pc = 0x1EDC38u;
    {
        const bool branch_taken_0x1edc38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edc38) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDC40u;
    // 0x1edc40: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1edc40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1edc44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1edc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edc48: 0x100003b3  b           . + 4 + (0x3B3 << 2)
    ctx->pc = 0x1EDC48u;
    {
        const bool branch_taken_0x1edc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDC48u;
            // 0x1edc4c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc48) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDC50u;
label_1edc50:
    // 0x1edc50: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDC50u;
    SET_GPR_U32(ctx, 31, 0x1EDC58u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC58u; }
        if (ctx->pc != 0x1EDC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC58u; }
        if (ctx->pc != 0x1EDC58u) { return; }
    }
    ctx->pc = 0x1EDC58u;
    // 0x1edc58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1edc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1edc5c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDC5Cu;
    {
        const bool branch_taken_0x1edc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edc5c) {
            ctx->pc = 0x1EDC70u;
            goto label_1edc70;
        }
    }
    ctx->pc = 0x1EDC64u;
    // 0x1edc64: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EDC64u;
    {
        const bool branch_taken_0x1edc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDC64u;
            // 0x1edc68: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc64) {
            ctx->pc = 0x1EDCA8u;
            goto label_1edca8;
        }
    }
    ctx->pc = 0x1EDC6Cu;
    // 0x1edc6c: 0x0  nop
    ctx->pc = 0x1edc6cu;
    // NOP
label_1edc70:
    // 0x1edc70: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDC70u;
    SET_GPR_U32(ctx, 31, 0x1EDC78u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC78u; }
        if (ctx->pc != 0x1EDC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC78u; }
        if (ctx->pc != 0x1EDC78u) { return; }
    }
    ctx->pc = 0x1EDC78u;
    // 0x1edc78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edc7c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDC7Cu;
    {
        const bool branch_taken_0x1edc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edc7c) {
            ctx->pc = 0x1EDC90u;
            goto label_1edc90;
        }
    }
    ctx->pc = 0x1EDC84u;
    // 0x1edc84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDC84u;
    {
        const bool branch_taken_0x1edc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDC84u;
            // 0x1edc88: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc84) {
            ctx->pc = 0x1EDCA8u;
            goto label_1edca8;
        }
    }
    ctx->pc = 0x1EDC8Cu;
    // 0x1edc8c: 0x0  nop
    ctx->pc = 0x1edc8cu;
    // NOP
label_1edc90:
    // 0x1edc90: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDC90u;
    SET_GPR_U32(ctx, 31, 0x1EDC98u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC98u; }
        if (ctx->pc != 0x1EDC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC98u; }
        if (ctx->pc != 0x1EDC98u) { return; }
    }
    ctx->pc = 0x1EDC98u;
    // 0x1edc98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDC98u;
    {
        const bool branch_taken_0x1edc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edc98) {
            ctx->pc = 0x1EDCA8u;
            goto label_1edca8;
        }
    }
    ctx->pc = 0x1EDCA0u;
    // 0x1edca0: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x1edca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1edca4: 0x0  nop
    ctx->pc = 0x1edca4u;
    // NOP
label_1edca8:
    // 0x1edca8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1edca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1edcac: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x1edcacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x1edcb0: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EDCB0u;
    {
        const bool branch_taken_0x1edcb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edcb0) {
            ctx->pc = 0x1EDD38u;
            goto label_1edd38;
        }
    }
    ctx->pc = 0x1EDCB8u;
    // 0x1edcb8: 0x71001a  div         $zero, $v1, $s1
    ctx->pc = 0x1edcb8u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1edcbc: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1edcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1edcc0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1edcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edcc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1edcc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1edcc8: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1edcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x1edccc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1edcccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1edcd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1edcd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1edcd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1edcd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edcd8: 0x1010  mfhi        $v0
    ctx->pc = 0x1edcd8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1edcdc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EDCDCu;
    {
        const bool branch_taken_0x1edcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDCDCu;
            // 0x1edce0: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edcdc) {
            ctx->pc = 0x1EDD38u;
            goto label_1edd38;
        }
    }
    ctx->pc = 0x1EDCE4u;
    // 0x1edce4: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1EDCE4u;
    SET_GPR_U32(ctx, 31, 0x1EDCECu);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDCECu; }
        if (ctx->pc != 0x1EDCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDCECu; }
        if (ctx->pc != 0x1EDCECu) { return; }
    }
    ctx->pc = 0x1EDCECu;
    // 0x1edcec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1edcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1edcf0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1edcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edcf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1edcf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1edcf8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1edcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1edcfc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1edcfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1edd00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1edd00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1edd04: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1EDD04u;
    SET_GPR_U32(ctx, 31, 0x1EDD0Cu);
    ctx->pc = 0x1EDD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD04u;
            // 0x1edd08: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD0Cu; }
        if (ctx->pc != 0x1EDD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD0Cu; }
        if (ctx->pc != 0x1EDD0Cu) { return; }
    }
    ctx->pc = 0x1EDD0Cu;
    // 0x1edd0c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1EDD0Cu;
    SET_GPR_U32(ctx, 31, 0x1EDD14u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD14u; }
        if (ctx->pc != 0x1EDD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD14u; }
        if (ctx->pc != 0x1EDD14u) { return; }
    }
    ctx->pc = 0x1EDD14u;
    // 0x1edd14: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1edd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1edd18: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1edd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edd1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1edd1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1edd20: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1edd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1edd24: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1edd24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1edd28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1edd28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1edd2c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1edd2cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1edd30: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1EDD30u;
    SET_GPR_U32(ctx, 31, 0x1EDD38u);
    ctx->pc = 0x1EDD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD30u;
            // 0x1edd34: 0x46140301  sub.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD38u; }
        if (ctx->pc != 0x1EDD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD38u; }
        if (ctx->pc != 0x1EDD38u) { return; }
    }
    ctx->pc = 0x1EDD38u;
label_1edd38:
    // 0x1edd38: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1edd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1edd3c: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1edd3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1edd40: 0x14200375  bnez        $at, . + 4 + (0x375 << 2)
    ctx->pc = 0x1EDD40u;
    {
        const bool branch_taken_0x1edd40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edd40) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDD48u;
    // 0x1edd48: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1edd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1edd4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1edd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edd50: 0x10000371  b           . + 4 + (0x371 << 2)
    ctx->pc = 0x1EDD50u;
    {
        const bool branch_taken_0x1edd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD50u;
            // 0x1edd54: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd50) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDD58u;
label_1edd58:
    // 0x1edd58: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDD58u;
    SET_GPR_U32(ctx, 31, 0x1EDD60u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD60u; }
        if (ctx->pc != 0x1EDD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD60u; }
        if (ctx->pc != 0x1EDD60u) { return; }
    }
    ctx->pc = 0x1EDD60u;
    // 0x1edd60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1edd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1edd64: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDD64u;
    {
        const bool branch_taken_0x1edd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edd64) {
            ctx->pc = 0x1EDD78u;
            goto label_1edd78;
        }
    }
    ctx->pc = 0x1EDD6Cu;
    // 0x1edd6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EDD6Cu;
    {
        const bool branch_taken_0x1edd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD6Cu;
            // 0x1edd70: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd6c) {
            ctx->pc = 0x1EDDB0u;
            goto label_1eddb0;
        }
    }
    ctx->pc = 0x1EDD74u;
    // 0x1edd74: 0x0  nop
    ctx->pc = 0x1edd74u;
    // NOP
label_1edd78:
    // 0x1edd78: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDD78u;
    SET_GPR_U32(ctx, 31, 0x1EDD80u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD80u; }
        if (ctx->pc != 0x1EDD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD80u; }
        if (ctx->pc != 0x1EDD80u) { return; }
    }
    ctx->pc = 0x1EDD80u;
    // 0x1edd80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edd84: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDD84u;
    {
        const bool branch_taken_0x1edd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edd84) {
            ctx->pc = 0x1EDD98u;
            goto label_1edd98;
        }
    }
    ctx->pc = 0x1EDD8Cu;
    // 0x1edd8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDD8Cu;
    {
        const bool branch_taken_0x1edd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD8Cu;
            // 0x1edd90: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd8c) {
            ctx->pc = 0x1EDDB0u;
            goto label_1eddb0;
        }
    }
    ctx->pc = 0x1EDD94u;
    // 0x1edd94: 0x0  nop
    ctx->pc = 0x1edd94u;
    // NOP
label_1edd98:
    // 0x1edd98: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDD98u;
    SET_GPR_U32(ctx, 31, 0x1EDDA0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDDA0u; }
        if (ctx->pc != 0x1EDDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDDA0u; }
        if (ctx->pc != 0x1EDDA0u) { return; }
    }
    ctx->pc = 0x1EDDA0u;
    // 0x1edda0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDDA0u;
    {
        const bool branch_taken_0x1edda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edda0) {
            ctx->pc = 0x1EDDB0u;
            goto label_1eddb0;
        }
    }
    ctx->pc = 0x1EDDA8u;
    // 0x1edda8: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x1edda8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1eddac: 0x0  nop
    ctx->pc = 0x1eddacu;
    // NOP
label_1eddb0:
    // 0x1eddb0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1eddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eddb4: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x1eddb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x1eddb8: 0x14200037  bnez        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x1EDDB8u;
    {
        const bool branch_taken_0x1eddb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eddb8) {
            ctx->pc = 0x1EDE98u;
            goto label_1ede98;
        }
    }
    ctx->pc = 0x1EDDC0u;
    // 0x1eddc0: 0x71001a  div         $zero, $v1, $s1
    ctx->pc = 0x1eddc0u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1eddc4: 0x0  nop
    ctx->pc = 0x1eddc4u;
    // NOP
    // 0x1eddc8: 0x0  nop
    ctx->pc = 0x1eddc8u;
    // NOP
    // 0x1eddcc: 0x1010  mfhi        $v0
    ctx->pc = 0x1eddccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1eddd0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1EDDD0u;
    {
        const bool branch_taken_0x1eddd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eddd0) {
            ctx->pc = 0x1EDE98u;
            goto label_1ede98;
        }
    }
    ctx->pc = 0x1EDDD8u;
    // 0x1eddd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eddd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edddc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1edddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1edde0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1edde0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1edde4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1edde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edde8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1edde8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eddec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1eddecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1eddf0: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1eddf0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1eddf4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1EDDF4u;
    SET_GPR_U32(ctx, 31, 0x1EDDFCu);
    ctx->pc = 0x1EDDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDDF4u;
            // 0x1eddf8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDDFCu; }
        if (ctx->pc != 0x1EDDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDDFCu; }
        if (ctx->pc != 0x1EDDFCu) { return; }
    }
    ctx->pc = 0x1EDDFCu;
    // 0x1eddfc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1eddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ede00: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ede00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ede04: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1EDE04u;
    SET_GPR_U32(ctx, 31, 0x1EDE0Cu);
    ctx->pc = 0x1EDE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE04u;
            // 0x1ede08: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE0Cu; }
        if (ctx->pc != 0x1EDE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE0Cu; }
        if (ctx->pc != 0x1EDE0Cu) { return; }
    }
    ctx->pc = 0x1EDE0Cu;
    // 0x1ede0c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1ede0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ede10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ede10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ede14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ede14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ede18: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ede18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ede1c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ede1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ede20: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x1ede20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x1ede24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ede24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ede28: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ede28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ede2c: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1ede2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ede30: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1EDE30u;
    SET_GPR_U32(ctx, 31, 0x1EDE38u);
    ctx->pc = 0x1EDE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE30u;
            // 0x1ede34: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE38u; }
        if (ctx->pc != 0x1EDE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE38u; }
        if (ctx->pc != 0x1EDE38u) { return; }
    }
    ctx->pc = 0x1EDE38u;
    // 0x1ede38: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1ede38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1ede3c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ede3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ede40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ede40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ede44: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ede44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ede48: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1EDE48u;
    SET_GPR_U32(ctx, 31, 0x1EDE50u);
    ctx->pc = 0x1EDE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE48u;
            // 0x1ede4c: 0x46140301  sub.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE50u; }
        if (ctx->pc != 0x1EDE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE50u; }
        if (ctx->pc != 0x1EDE50u) { return; }
    }
    ctx->pc = 0x1EDE50u;
    // 0x1ede50: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1ede50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ede54: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ede54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ede58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ede58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ede5c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ede5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ede60: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ede60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ede64: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x1ede64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x1ede68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ede68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ede6c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ede6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ede70: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1ede70u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ede74: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1EDE74u;
    SET_GPR_U32(ctx, 31, 0x1EDE7Cu);
    ctx->pc = 0x1EDE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE74u;
            // 0x1ede78: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE7Cu; }
        if (ctx->pc != 0x1EDE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE7Cu; }
        if (ctx->pc != 0x1EDE7Cu) { return; }
    }
    ctx->pc = 0x1EDE7Cu;
    // 0x1ede7c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1ede7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1ede80: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ede80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ede84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ede84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ede88: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ede88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ede8c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1EDE8Cu;
    SET_GPR_U32(ctx, 31, 0x1EDE94u);
    ctx->pc = 0x1EDE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE8Cu;
            // 0x1ede90: 0x46140301  sub.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE94u; }
        if (ctx->pc != 0x1EDE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE94u; }
        if (ctx->pc != 0x1EDE94u) { return; }
    }
    ctx->pc = 0x1EDE94u;
    // 0x1ede94: 0x0  nop
    ctx->pc = 0x1ede94u;
    // NOP
label_1ede98:
    // 0x1ede98: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ede98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ede9c: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1ede9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1edea0: 0x1420031d  bnez        $at, . + 4 + (0x31D << 2)
    ctx->pc = 0x1EDEA0u;
    {
        const bool branch_taken_0x1edea0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edea0) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDEA8u;
    // 0x1edea8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1edea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1edeac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1edeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edeb0: 0x10000319  b           . + 4 + (0x319 << 2)
    ctx->pc = 0x1EDEB0u;
    {
        const bool branch_taken_0x1edeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDEB0u;
            // 0x1edeb4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edeb0) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDEB8u;
label_1edeb8:
    // 0x1edeb8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDEB8u;
    SET_GPR_U32(ctx, 31, 0x1EDEC0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDEC0u; }
        if (ctx->pc != 0x1EDEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDEC0u; }
        if (ctx->pc != 0x1EDEC0u) { return; }
    }
    ctx->pc = 0x1EDEC0u;
    // 0x1edec0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1edec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1edec4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDEC4u;
    {
        const bool branch_taken_0x1edec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edec4) {
            ctx->pc = 0x1EDED8u;
            goto label_1eded8;
        }
    }
    ctx->pc = 0x1EDECCu;
    // 0x1edecc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EDECCu;
    {
        const bool branch_taken_0x1edecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDECCu;
            // 0x1eded0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edecc) {
            ctx->pc = 0x1EDF10u;
            goto label_1edf10;
        }
    }
    ctx->pc = 0x1EDED4u;
    // 0x1eded4: 0x0  nop
    ctx->pc = 0x1eded4u;
    // NOP
label_1eded8:
    // 0x1eded8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDED8u;
    SET_GPR_U32(ctx, 31, 0x1EDEE0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDEE0u; }
        if (ctx->pc != 0x1EDEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDEE0u; }
        if (ctx->pc != 0x1EDEE0u) { return; }
    }
    ctx->pc = 0x1EDEE0u;
    // 0x1edee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edee4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDEE4u;
    {
        const bool branch_taken_0x1edee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edee4) {
            ctx->pc = 0x1EDEF8u;
            goto label_1edef8;
        }
    }
    ctx->pc = 0x1EDEECu;
    // 0x1edeec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDEECu;
    {
        const bool branch_taken_0x1edeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDEECu;
            // 0x1edef0: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edeec) {
            ctx->pc = 0x1EDF10u;
            goto label_1edf10;
        }
    }
    ctx->pc = 0x1EDEF4u;
    // 0x1edef4: 0x0  nop
    ctx->pc = 0x1edef4u;
    // NOP
label_1edef8:
    // 0x1edef8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDEF8u;
    SET_GPR_U32(ctx, 31, 0x1EDF00u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF00u; }
        if (ctx->pc != 0x1EDF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF00u; }
        if (ctx->pc != 0x1EDF00u) { return; }
    }
    ctx->pc = 0x1EDF00u;
    // 0x1edf00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDF00u;
    {
        const bool branch_taken_0x1edf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edf00) {
            ctx->pc = 0x1EDF10u;
            goto label_1edf10;
        }
    }
    ctx->pc = 0x1EDF08u;
    // 0x1edf08: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1edf08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1edf0c: 0x0  nop
    ctx->pc = 0x1edf0cu;
    // NOP
label_1edf10:
    // 0x1edf10: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1edf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1edf14: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x1edf14u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1edf18: 0x0  nop
    ctx->pc = 0x1edf18u;
    // NOP
    // 0x1edf1c: 0x0  nop
    ctx->pc = 0x1edf1cu;
    // NOP
    // 0x1edf20: 0x1010  mfhi        $v0
    ctx->pc = 0x1edf20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1edf24: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EDF24u;
    {
        const bool branch_taken_0x1edf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edf24) {
            ctx->pc = 0x1EDF60u;
            goto label_1edf60;
        }
    }
    ctx->pc = 0x1EDF2Cu;
    // 0x1edf2c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1edf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1edf30: 0xc0655e4  jal         func_195790
    ctx->pc = 0x1EDF30u;
    SET_GPR_U32(ctx, 31, 0x1EDF38u);
    ctx->pc = 0x1EDF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF30u;
            // 0x1edf34: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195790u;
    if (runtime->hasFunction(0x195790u)) {
        auto targetFn = runtime->lookupFunction(0x195790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF38u; }
        if (ctx->pc != 0x1EDF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai2_0x195790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF38u; }
        if (ctx->pc != 0x1EDF38u) { return; }
    }
    ctx->pc = 0x1EDF38u;
    // 0x1edf38: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1edf38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1edf3c: 0xc0655e4  jal         func_195790
    ctx->pc = 0x1EDF3Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF44u);
    ctx->pc = 0x1EDF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF3Cu;
            // 0x1edf40: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195790u;
    if (runtime->hasFunction(0x195790u)) {
        auto targetFn = runtime->lookupFunction(0x195790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF44u; }
        if (ctx->pc != 0x1EDF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai2_0x195790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF44u; }
        if (ctx->pc != 0x1EDF44u) { return; }
    }
    ctx->pc = 0x1EDF44u;
    // 0x1edf44: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1edf44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1edf48: 0xc0655e4  jal         func_195790
    ctx->pc = 0x1EDF48u;
    SET_GPR_U32(ctx, 31, 0x1EDF50u);
    ctx->pc = 0x1EDF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF48u;
            // 0x1edf4c: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195790u;
    if (runtime->hasFunction(0x195790u)) {
        auto targetFn = runtime->lookupFunction(0x195790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF50u; }
        if (ctx->pc != 0x1EDF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai2_0x195790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF50u; }
        if (ctx->pc != 0x1EDF50u) { return; }
    }
    ctx->pc = 0x1EDF50u;
    // 0x1edf50: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1edf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1edf54: 0xc0655e4  jal         func_195790
    ctx->pc = 0x1EDF54u;
    SET_GPR_U32(ctx, 31, 0x1EDF5Cu);
    ctx->pc = 0x1EDF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF54u;
            // 0x1edf58: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195790u;
    if (runtime->hasFunction(0x195790u)) {
        auto targetFn = runtime->lookupFunction(0x195790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF5Cu; }
        if (ctx->pc != 0x1EDF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai2_0x195790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF5Cu; }
        if (ctx->pc != 0x1EDF5Cu) { return; }
    }
    ctx->pc = 0x1EDF5Cu;
    // 0x1edf5c: 0x0  nop
    ctx->pc = 0x1edf5cu;
    // NOP
label_1edf60:
    // 0x1edf60: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1edf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1edf64: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1edf64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1edf68: 0x142002eb  bnez        $at, . + 4 + (0x2EB << 2)
    ctx->pc = 0x1EDF68u;
    {
        const bool branch_taken_0x1edf68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edf68) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDF70u;
    // 0x1edf70: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1edf70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1edf74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1edf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edf78: 0x100002e7  b           . + 4 + (0x2E7 << 2)
    ctx->pc = 0x1EDF78u;
    {
        const bool branch_taken_0x1edf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF78u;
            // 0x1edf7c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf78) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDF80u;
label_1edf80:
    // 0x1edf80: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1edf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1edf84: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1edf84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1edf88: 0xc06527c  jal         func_1949F0
    ctx->pc = 0x1EDF88u;
    SET_GPR_U32(ctx, 31, 0x1EDF90u);
    ctx->pc = 0x1EDF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF88u;
            // 0x1edf8c: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1949F0u;
    if (runtime->hasFunction(0x1949F0u)) {
        auto targetFn = runtime->lookupFunction(0x1949F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF90u; }
        if (ctx->pc != 0x1EDF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase2_0x1949f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF90u; }
        if (ctx->pc != 0x1EDF90u) { return; }
    }
    ctx->pc = 0x1EDF90u;
    // 0x1edf90: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1edf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1edf94: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1edf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edf98: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1edf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1edf9c: 0xc06527c  jal         func_1949F0
    ctx->pc = 0x1EDF9Cu;
    SET_GPR_U32(ctx, 31, 0x1EDFA4u);
    ctx->pc = 0x1EDFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF9Cu;
            // 0x1edfa0: 0x23023  negu        $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1949F0u;
    if (runtime->hasFunction(0x1949F0u)) {
        auto targetFn = runtime->lookupFunction(0x1949F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFA4u; }
        if (ctx->pc != 0x1EDFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase2_0x1949f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFA4u; }
        if (ctx->pc != 0x1EDFA4u) { return; }
    }
    ctx->pc = 0x1EDFA4u;
    // 0x1edfa4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1edfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1edfa8: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1edfa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1edfac: 0x142002da  bnez        $at, . + 4 + (0x2DA << 2)
    ctx->pc = 0x1EDFACu;
    {
        const bool branch_taken_0x1edfac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edfac) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDFB4u;
    // 0x1edfb4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1edfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1edfb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1edfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edfbc: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x1EDFBCu;
    {
        const bool branch_taken_0x1edfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFBCu;
            // 0x1edfc0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfbc) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EDFC4u;
    // 0x1edfc4: 0x0  nop
    ctx->pc = 0x1edfc4u;
    // NOP
label_1edfc8:
    // 0x1edfc8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDFC8u;
    SET_GPR_U32(ctx, 31, 0x1EDFD0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFD0u; }
        if (ctx->pc != 0x1EDFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFD0u; }
        if (ctx->pc != 0x1EDFD0u) { return; }
    }
    ctx->pc = 0x1EDFD0u;
    // 0x1edfd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1edfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1edfd4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDFD4u;
    {
        const bool branch_taken_0x1edfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edfd4) {
            ctx->pc = 0x1EDFE8u;
            goto label_1edfe8;
        }
    }
    ctx->pc = 0x1EDFDCu;
    // 0x1edfdc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EDFDCu;
    {
        const bool branch_taken_0x1edfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFDCu;
            // 0x1edfe0: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfdc) {
            ctx->pc = 0x1EE020u;
            goto label_1ee020;
        }
    }
    ctx->pc = 0x1EDFE4u;
    // 0x1edfe4: 0x0  nop
    ctx->pc = 0x1edfe4u;
    // NOP
label_1edfe8:
    // 0x1edfe8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EDFE8u;
    SET_GPR_U32(ctx, 31, 0x1EDFF0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFF0u; }
        if (ctx->pc != 0x1EDFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFF0u; }
        if (ctx->pc != 0x1EDFF0u) { return; }
    }
    ctx->pc = 0x1EDFF0u;
    // 0x1edff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edff4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDFF4u;
    {
        const bool branch_taken_0x1edff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edff4) {
            ctx->pc = 0x1EE008u;
            goto label_1ee008;
        }
    }
    ctx->pc = 0x1EDFFCu;
    // 0x1edffc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDFFCu;
    {
        const bool branch_taken_0x1edffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFFCu;
            // 0x1ee000: 0x2411002d  addiu       $s1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edffc) {
            ctx->pc = 0x1EE020u;
            goto label_1ee020;
        }
    }
    ctx->pc = 0x1EE004u;
    // 0x1ee004: 0x0  nop
    ctx->pc = 0x1ee004u;
    // NOP
label_1ee008:
    // 0x1ee008: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EE008u;
    SET_GPR_U32(ctx, 31, 0x1EE010u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE010u; }
        if (ctx->pc != 0x1EE010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE010u; }
        if (ctx->pc != 0x1EE010u) { return; }
    }
    ctx->pc = 0x1EE010u;
    // 0x1ee010: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE010u;
    {
        const bool branch_taken_0x1ee010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee010) {
            ctx->pc = 0x1EE020u;
            goto label_1ee020;
        }
    }
    ctx->pc = 0x1EE018u;
    // 0x1ee018: 0x2411003c  addiu       $s1, $zero, 0x3C
    ctx->pc = 0x1ee018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ee01c: 0x0  nop
    ctx->pc = 0x1ee01cu;
    // NOP
label_1ee020:
    // 0x1ee020: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ee020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ee024: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x1ee024u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ee028: 0x0  nop
    ctx->pc = 0x1ee028u;
    // NOP
    // 0x1ee02c: 0x0  nop
    ctx->pc = 0x1ee02cu;
    // NOP
    // 0x1ee030: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee030u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee034: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EE034u;
    {
        const bool branch_taken_0x1ee034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee034) {
            ctx->pc = 0x1EE098u;
            goto label_1ee098;
        }
    }
    ctx->pc = 0x1EE03Cu;
    // 0x1ee03c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ee03cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee040:
    // 0x1ee040: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ee040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ee044: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x1ee044u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ee048: 0x0  nop
    ctx->pc = 0x1ee048u;
    // NOP
    // 0x1ee04c: 0x0  nop
    ctx->pc = 0x1ee04cu;
    // NOP
    // 0x1ee050: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee050u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee054: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EE054u;
    {
        const bool branch_taken_0x1ee054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee054) {
            ctx->pc = 0x1EE088u;
            goto label_1ee088;
        }
    }
    ctx->pc = 0x1EE05Cu;
    // 0x1ee05c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EE05Cu;
    SET_GPR_U32(ctx, 31, 0x1EE064u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE064u; }
        if (ctx->pc != 0x1EE064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE064u; }
        if (ctx->pc != 0x1EE064u) { return; }
    }
    ctx->pc = 0x1EE064u;
    // 0x1ee064: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ee064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ee068: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ee068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee06c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ee06cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ee070: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ee070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ee074: 0x0  nop
    ctx->pc = 0x1ee074u;
    // NOP
    // 0x1ee078: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee078u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee07c: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1EE07Cu;
    SET_GPR_U32(ctx, 31, 0x1EE084u);
    ctx->pc = 0x1EE080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE07Cu;
            // 0x1ee080: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE084u; }
        if (ctx->pc != 0x1EE084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE084u; }
        if (ctx->pc != 0x1EE084u) { return; }
    }
    ctx->pc = 0x1EE084u;
    // 0x1ee084: 0x0  nop
    ctx->pc = 0x1ee084u;
    // NOP
label_1ee088:
    // 0x1ee088: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ee088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ee08c: 0x2a220078  slti        $v0, $s1, 0x78
    ctx->pc = 0x1ee08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1ee090: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1EE090u;
    {
        const bool branch_taken_0x1ee090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee090) {
            ctx->pc = 0x1EE040u;
            goto label_1ee040;
        }
    }
    ctx->pc = 0x1EE098u;
label_1ee098:
    // 0x1ee098: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ee098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ee09c: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1ee09cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1ee0a0: 0x1420029d  bnez        $at, . + 4 + (0x29D << 2)
    ctx->pc = 0x1EE0A0u;
    {
        const bool branch_taken_0x1ee0a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee0a0) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EE0A8u;
    // 0x1ee0a8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ee0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ee0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee0b0: 0x10000299  b           . + 4 + (0x299 << 2)
    ctx->pc = 0x1EE0B0u;
    {
        const bool branch_taken_0x1ee0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0B0u;
            // 0x1ee0b4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0b0) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EE0B8u;
label_1ee0b8:
    // 0x1ee0b8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EE0B8u;
    SET_GPR_U32(ctx, 31, 0x1EE0C0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0C0u; }
        if (ctx->pc != 0x1EE0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0C0u; }
        if (ctx->pc != 0x1EE0C0u) { return; }
    }
    ctx->pc = 0x1EE0C0u;
    // 0x1ee0c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee0c4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE0C4u;
    {
        const bool branch_taken_0x1ee0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee0c4) {
            ctx->pc = 0x1EE0D8u;
            goto label_1ee0d8;
        }
    }
    ctx->pc = 0x1EE0CCu;
    // 0x1ee0cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EE0CCu;
    {
        const bool branch_taken_0x1ee0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0CCu;
            // 0x1ee0d0: 0x24110028  addiu       $s1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0cc) {
            ctx->pc = 0x1EE110u;
            goto label_1ee110;
        }
    }
    ctx->pc = 0x1EE0D4u;
    // 0x1ee0d4: 0x0  nop
    ctx->pc = 0x1ee0d4u;
    // NOP
label_1ee0d8:
    // 0x1ee0d8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EE0D8u;
    SET_GPR_U32(ctx, 31, 0x1EE0E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0E0u; }
        if (ctx->pc != 0x1EE0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0E0u; }
        if (ctx->pc != 0x1EE0E0u) { return; }
    }
    ctx->pc = 0x1EE0E0u;
    // 0x1ee0e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee0e4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE0E4u;
    {
        const bool branch_taken_0x1ee0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee0e4) {
            ctx->pc = 0x1EE0F8u;
            goto label_1ee0f8;
        }
    }
    ctx->pc = 0x1EE0ECu;
    // 0x1ee0ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE0ECu;
    {
        const bool branch_taken_0x1ee0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0ECu;
            // 0x1ee0f0: 0x2411003c  addiu       $s1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0ec) {
            ctx->pc = 0x1EE110u;
            goto label_1ee110;
        }
    }
    ctx->pc = 0x1EE0F4u;
    // 0x1ee0f4: 0x0  nop
    ctx->pc = 0x1ee0f4u;
    // NOP
label_1ee0f8:
    // 0x1ee0f8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EE0F8u;
    SET_GPR_U32(ctx, 31, 0x1EE100u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE100u; }
        if (ctx->pc != 0x1EE100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE100u; }
        if (ctx->pc != 0x1EE100u) { return; }
    }
    ctx->pc = 0x1EE100u;
    // 0x1ee100: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE100u;
    {
        const bool branch_taken_0x1ee100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee100) {
            ctx->pc = 0x1EE110u;
            goto label_1ee110;
        }
    }
    ctx->pc = 0x1EE108u;
    // 0x1ee108: 0x24110050  addiu       $s1, $zero, 0x50
    ctx->pc = 0x1ee108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ee10c: 0x0  nop
    ctx->pc = 0x1ee10cu;
    // NOP
label_1ee110:
    // 0x1ee110: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ee110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ee114: 0x284100a0  slti        $at, $v0, 0xA0
    ctx->pc = 0x1ee114u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)160) ? 1 : 0);
    // 0x1ee118: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EE118u;
    {
        const bool branch_taken_0x1ee118 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee118) {
            ctx->pc = 0x1EE188u;
            goto label_1ee188;
        }
    }
    ctx->pc = 0x1EE120u;
    // 0x1ee120: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x1ee120u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ee124: 0x0  nop
    ctx->pc = 0x1ee124u;
    // NOP
    // 0x1ee128: 0x0  nop
    ctx->pc = 0x1ee128u;
    // NOP
    // 0x1ee12c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee12cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee130: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EE130u;
    {
        const bool branch_taken_0x1ee130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee130) {
            ctx->pc = 0x1EE188u;
            goto label_1ee188;
        }
    }
    ctx->pc = 0x1EE138u;
    // 0x1ee138: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EE138u;
    SET_GPR_U32(ctx, 31, 0x1EE140u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE140u; }
        if (ctx->pc != 0x1EE140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE140u; }
        if (ctx->pc != 0x1EE140u) { return; }
    }
    ctx->pc = 0x1EE140u;
    // 0x1ee140: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1ee140u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
    // 0x1ee144: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ee144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee148: 0x2452001a  addiu       $s2, $v0, 0x1A
    ctx->pc = 0x1ee148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 26));
    // 0x1ee14c: 0x0  nop
    ctx->pc = 0x1ee14cu;
    // NOP
label_1ee150:
    // 0x1ee150: 0x26420003  addiu       $v0, $s2, 0x3
    ctx->pc = 0x1ee150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x1ee154: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x1ee154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ee158: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE158u;
    {
        const bool branch_taken_0x1ee158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE158u;
            // 0x1ee15c: 0x251082a  slt         $at, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee158) {
            ctx->pc = 0x1EE168u;
            goto label_1ee168;
        }
    }
    ctx->pc = 0x1EE160u;
    // 0x1ee160: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE160u;
    {
        const bool branch_taken_0x1ee160 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee160) {
            ctx->pc = 0x1EE178u;
            goto label_1ee178;
        }
    }
    ctx->pc = 0x1EE168u;
label_1ee168:
    // 0x1ee168: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ee168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee16c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ee16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ee170: 0xc06534c  jal         func_194D30
    ctx->pc = 0x1EE170u;
    SET_GPR_U32(ctx, 31, 0x1EE178u);
    ctx->pc = 0x1EE174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE170u;
            // 0x1ee174: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE178u; }
        if (ctx->pc != 0x1EE178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE178u; }
        if (ctx->pc != 0x1EE178u) { return; }
    }
    ctx->pc = 0x1EE178u;
label_1ee178:
    // 0x1ee178: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ee178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ee17c: 0x2a220078  slti        $v0, $s1, 0x78
    ctx->pc = 0x1ee17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1ee180: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1EE180u;
    {
        const bool branch_taken_0x1ee180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee180) {
            ctx->pc = 0x1EE150u;
            goto label_1ee150;
        }
    }
    ctx->pc = 0x1EE188u;
label_1ee188:
    // 0x1ee188: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ee188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ee18c: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1ee18cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1ee190: 0x14200261  bnez        $at, . + 4 + (0x261 << 2)
    ctx->pc = 0x1EE190u;
    {
        const bool branch_taken_0x1ee190 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee190) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EE198u;
    // 0x1ee198: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ee198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ee19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee1a0: 0x1000025d  b           . + 4 + (0x25D << 2)
    ctx->pc = 0x1EE1A0u;
    {
        const bool branch_taken_0x1ee1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1A0u;
            // 0x1ee1a4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1a0) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EE1A8u;
label_1ee1a8:
    // 0x1ee1a8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EE1A8u;
    SET_GPR_U32(ctx, 31, 0x1EE1B0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE1B0u; }
        if (ctx->pc != 0x1EE1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE1B0u; }
        if (ctx->pc != 0x1EE1B0u) { return; }
    }
    ctx->pc = 0x1EE1B0u;
    // 0x1ee1b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee1b4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE1B4u;
    {
        const bool branch_taken_0x1ee1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee1b4) {
            ctx->pc = 0x1EE1C8u;
            goto label_1ee1c8;
        }
    }
    ctx->pc = 0x1EE1BCu;
    // 0x1ee1bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EE1BCu;
    {
        const bool branch_taken_0x1ee1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1BCu;
            // 0x1ee1c0: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1bc) {
            ctx->pc = 0x1EE200u;
            goto label_1ee200;
        }
    }
    ctx->pc = 0x1EE1C4u;
    // 0x1ee1c4: 0x0  nop
    ctx->pc = 0x1ee1c4u;
    // NOP
label_1ee1c8:
    // 0x1ee1c8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EE1C8u;
    SET_GPR_U32(ctx, 31, 0x1EE1D0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE1D0u; }
        if (ctx->pc != 0x1EE1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE1D0u; }
        if (ctx->pc != 0x1EE1D0u) { return; }
    }
    ctx->pc = 0x1EE1D0u;
    // 0x1ee1d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee1d4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE1D4u;
    {
        const bool branch_taken_0x1ee1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee1d4) {
            ctx->pc = 0x1EE1E8u;
            goto label_1ee1e8;
        }
    }
    ctx->pc = 0x1EE1DCu;
    // 0x1ee1dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE1DCu;
    {
        const bool branch_taken_0x1ee1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1DCu;
            // 0x1ee1e0: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1dc) {
            ctx->pc = 0x1EE200u;
            goto label_1ee200;
        }
    }
    ctx->pc = 0x1EE1E4u;
    // 0x1ee1e4: 0x0  nop
    ctx->pc = 0x1ee1e4u;
    // NOP
label_1ee1e8:
    // 0x1ee1e8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EE1E8u;
    SET_GPR_U32(ctx, 31, 0x1EE1F0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE1F0u; }
        if (ctx->pc != 0x1EE1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE1F0u; }
        if (ctx->pc != 0x1EE1F0u) { return; }
    }
    ctx->pc = 0x1EE1F0u;
    // 0x1ee1f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE1F0u;
    {
        const bool branch_taken_0x1ee1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee1f0) {
            ctx->pc = 0x1EE200u;
            goto label_1ee200;
        }
    }
    ctx->pc = 0x1EE1F8u;
    // 0x1ee1f8: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x1ee1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ee1fc: 0x0  nop
    ctx->pc = 0x1ee1fcu;
    // NOP
label_1ee200:
    // 0x1ee200: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ee200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ee204: 0x28610096  slti        $at, $v1, 0x96
    ctx->pc = 0x1ee204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1ee208: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EE208u;
    {
        const bool branch_taken_0x1ee208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE208u;
            // 0x1ee20c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee208) {
            ctx->pc = 0x1EE278u;
            goto label_1ee278;
        }
    }
    ctx->pc = 0x1EE210u;
    // 0x1ee210: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ee210u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ee214: 0x0  nop
    ctx->pc = 0x1ee214u;
    // NOP
    // 0x1ee218: 0x0  nop
    ctx->pc = 0x1ee218u;
    // NOP
    // 0x1ee21c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee21cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee220: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE220u;
    {
        const bool branch_taken_0x1ee220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee220) {
            ctx->pc = 0x1EE240u;
            goto label_1ee240;
        }
    }
    ctx->pc = 0x1EE228u;
    // 0x1ee228: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1ee228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee22c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1ee22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ee230: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1ee230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee234: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ee234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ee238: 0xc05d080  jal         func_174200
    ctx->pc = 0x1EE238u;
    SET_GPR_U32(ctx, 31, 0x1EE240u);
    ctx->pc = 0x1EE23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE238u;
            // 0x1ee23c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE240u; }
        if (ctx->pc != 0x1EE240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE240u; }
        if (ctx->pc != 0x1EE240u) { return; }
    }
    ctx->pc = 0x1EE240u;
label_1ee240:
    // 0x1ee240: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ee240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ee244: 0xc06515c  jal         func_194570
    ctx->pc = 0x1EE244u;
    SET_GPR_U32(ctx, 31, 0x1EE24Cu);
    ctx->pc = 0x1EE248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE244u;
            // 0x1ee248: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194570u;
    if (runtime->hasFunction(0x194570u)) {
        auto targetFn = runtime->lookupFunction(0x194570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE24Cu; }
        if (ctx->pc != 0x1EE24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_LC_0x194570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE24Cu; }
        if (ctx->pc != 0x1EE24Cu) { return; }
    }
    ctx->pc = 0x1EE24Cu;
    // 0x1ee24c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EE24Cu;
    SET_GPR_U32(ctx, 31, 0x1EE254u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE254u; }
        if (ctx->pc != 0x1EE254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE254u; }
        if (ctx->pc != 0x1EE254u) { return; }
    }
    ctx->pc = 0x1EE254u;
    // 0x1ee254: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1ee254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ee258: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ee258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ee25c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ee25cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ee260: 0x0  nop
    ctx->pc = 0x1ee260u;
    // NOP
    // 0x1ee264: 0x0  nop
    ctx->pc = 0x1ee264u;
    // NOP
    // 0x1ee268: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee268u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee26c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1ee26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee270: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1EE270u;
    {
        const bool branch_taken_0x1ee270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE270u;
            // 0x1ee274: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee270) {
            ctx->pc = 0x1EE2E0u;
            goto label_1ee2e0;
        }
    }
    ctx->pc = 0x1EE278u;
label_1ee278:
    // 0x1ee278: 0x286100d4  slti        $at, $v1, 0xD4
    ctx->pc = 0x1ee278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)212) ? 1 : 0);
    // 0x1ee27c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EE27Cu;
    {
        const bool branch_taken_0x1ee27c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee27c) {
            ctx->pc = 0x1EE2E0u;
            goto label_1ee2e0;
        }
    }
    ctx->pc = 0x1EE284u;
    // 0x1ee284: 0x71001a  div         $zero, $v1, $s1
    ctx->pc = 0x1ee284u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ee288: 0x0  nop
    ctx->pc = 0x1ee288u;
    // NOP
    // 0x1ee28c: 0x0  nop
    ctx->pc = 0x1ee28cu;
    // NOP
    // 0x1ee290: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee290u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee294: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE294u;
    {
        const bool branch_taken_0x1ee294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee294) {
            ctx->pc = 0x1EE2E0u;
            goto label_1ee2e0;
        }
    }
    ctx->pc = 0x1EE29Cu;
    // 0x1ee29c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1ee29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee2a0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1ee2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ee2a4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1ee2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee2a8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ee2a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ee2ac: 0xc05d080  jal         func_174200
    ctx->pc = 0x1EE2ACu;
    SET_GPR_U32(ctx, 31, 0x1EE2B4u);
    ctx->pc = 0x1EE2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2ACu;
            // 0x1ee2b0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2B4u; }
        if (ctx->pc != 0x1EE2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2B4u; }
        if (ctx->pc != 0x1EE2B4u) { return; }
    }
    ctx->pc = 0x1EE2B4u;
    // 0x1ee2b4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ee2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ee2b8: 0xc065138  jal         func_1944E0
    ctx->pc = 0x1EE2B8u;
    SET_GPR_U32(ctx, 31, 0x1EE2C0u);
    ctx->pc = 0x1EE2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2B8u;
            // 0x1ee2bc: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944E0u;
    if (runtime->hasFunction(0x1944E0u)) {
        auto targetFn = runtime->lookupFunction(0x1944E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2C0u; }
        if (ctx->pc != 0x1EE2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_LCADD_0x1944e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2C0u; }
        if (ctx->pc != 0x1EE2C0u) { return; }
    }
    ctx->pc = 0x1EE2C0u;
    // 0x1ee2c0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ee2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ee2c4: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1ee2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1ee2c8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ee2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee2cc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ee2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ee2d0: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x1ee2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x1ee2d4: 0xc065200  jal         func_194800
    ctx->pc = 0x1EE2D4u;
    SET_GPR_U32(ctx, 31, 0x1EE2DCu);
    ctx->pc = 0x1EE2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2D4u;
            // 0x1ee2d8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194800u;
    if (runtime->hasFunction(0x194800u)) {
        auto targetFn = runtime->lookupFunction(0x194800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2DCu; }
        if (ctx->pc != 0x1EE2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_0x194800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2DCu; }
        if (ctx->pc != 0x1EE2DCu) { return; }
    }
    ctx->pc = 0x1EE2DCu;
    // 0x1ee2dc: 0x0  nop
    ctx->pc = 0x1ee2dcu;
    // NOP
label_1ee2e0:
    // 0x1ee2e0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ee2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ee2e4: 0x284100d5  slti        $at, $v0, 0xD5
    ctx->pc = 0x1ee2e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)213) ? 1 : 0);
    // 0x1ee2e8: 0x1420020b  bnez        $at, . + 4 + (0x20B << 2)
    ctx->pc = 0x1EE2E8u;
    {
        const bool branch_taken_0x1ee2e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee2e8) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EE2F0u;
    // 0x1ee2f0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ee2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ee2f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee2f8: 0x10000207  b           . + 4 + (0x207 << 2)
    ctx->pc = 0x1EE2F8u;
    {
        const bool branch_taken_0x1ee2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2F8u;
            // 0x1ee2fc: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2f8) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EE300u;
label_1ee300:
    // 0x1ee300: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EE300u;
    SET_GPR_U32(ctx, 31, 0x1EE308u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE308u; }
        if (ctx->pc != 0x1EE308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE308u; }
        if (ctx->pc != 0x1EE308u) { return; }
    }
    ctx->pc = 0x1EE308u;
    // 0x1ee308: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee30c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE30Cu;
    {
        const bool branch_taken_0x1ee30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee30c) {
            ctx->pc = 0x1EE320u;
            goto label_1ee320;
        }
    }
    ctx->pc = 0x1EE314u;
    // 0x1ee314: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EE314u;
    {
        const bool branch_taken_0x1ee314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE314u;
            // 0x1ee318: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee314) {
            ctx->pc = 0x1EE358u;
            goto label_1ee358;
        }
    }
    ctx->pc = 0x1EE31Cu;
    // 0x1ee31c: 0x0  nop
    ctx->pc = 0x1ee31cu;
    // NOP
label_1ee320:
    // 0x1ee320: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EE320u;
    SET_GPR_U32(ctx, 31, 0x1EE328u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE328u; }
        if (ctx->pc != 0x1EE328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE328u; }
        if (ctx->pc != 0x1EE328u) { return; }
    }
    ctx->pc = 0x1EE328u;
    // 0x1ee328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee32c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE32Cu;
    {
        const bool branch_taken_0x1ee32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee32c) {
            ctx->pc = 0x1EE340u;
            goto label_1ee340;
        }
    }
    ctx->pc = 0x1EE334u;
    // 0x1ee334: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE334u;
    {
        const bool branch_taken_0x1ee334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE334u;
            // 0x1ee338: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee334) {
            ctx->pc = 0x1EE358u;
            goto label_1ee358;
        }
    }
    ctx->pc = 0x1EE33Cu;
    // 0x1ee33c: 0x0  nop
    ctx->pc = 0x1ee33cu;
    // NOP
label_1ee340:
    // 0x1ee340: 0xc065d00  jal         func_197400
    ctx->pc = 0x1EE340u;
    SET_GPR_U32(ctx, 31, 0x1EE348u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE348u; }
        if (ctx->pc != 0x1EE348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE348u; }
        if (ctx->pc != 0x1EE348u) { return; }
    }
    ctx->pc = 0x1EE348u;
    // 0x1ee348: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE348u;
    {
        const bool branch_taken_0x1ee348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee348) {
            ctx->pc = 0x1EE358u;
            goto label_1ee358;
        }
    }
    ctx->pc = 0x1EE350u;
    // 0x1ee350: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1ee350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ee354: 0x0  nop
    ctx->pc = 0x1ee354u;
    // NOP
label_1ee358:
    // 0x1ee358: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1ee358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ee35c: 0x28810032  slti        $at, $a0, 0x32
    ctx->pc = 0x1ee35cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1ee360: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EE360u;
    {
        const bool branch_taken_0x1ee360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee360) {
            ctx->pc = 0x1EE3B0u;
            goto label_1ee3b0;
        }
    }
    ctx->pc = 0x1EE368u;
    // 0x1ee368: 0x91001a  div         $zero, $a0, $s1
    ctx->pc = 0x1ee368u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ee36c: 0x0  nop
    ctx->pc = 0x1ee36cu;
    // NOP
    // 0x1ee370: 0x0  nop
    ctx->pc = 0x1ee370u;
    // NOP
    // 0x1ee374: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee374u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee378: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1EE378u;
    {
        const bool branch_taken_0x1ee378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE378u;
            // 0x1ee37c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee378) {
            ctx->pc = 0x1EE4B0u;
            goto label_1ee4b0;
        }
    }
    ctx->pc = 0x1EE380u;
    // 0x1ee380: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1ee380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1ee384: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ee384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ee388: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ee388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ee38c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ee38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ee390: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ee390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee394: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1ee394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee39c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1EE39Cu;
    SET_GPR_U32(ctx, 31, 0x1EE3A4u);
    ctx->pc = 0x1EE3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE39Cu;
            // 0x1ee3a0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE3A4u; }
        if (ctx->pc != 0x1EE3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE3A4u; }
        if (ctx->pc != 0x1EE3A4u) { return; }
    }
    ctx->pc = 0x1EE3A4u;
    // 0x1ee3a4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1EE3A4u;
    {
        const bool branch_taken_0x1ee3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee3a4) {
            ctx->pc = 0x1EE4B0u;
            goto label_1ee4b0;
        }
    }
    ctx->pc = 0x1EE3ACu;
    // 0x1ee3ac: 0x0  nop
    ctx->pc = 0x1ee3acu;
    // NOP
label_1ee3b0:
    // 0x1ee3b0: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x1ee3b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1ee3b4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE3B4u;
    {
        const bool branch_taken_0x1ee3b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee3b4) {
            ctx->pc = 0x1EE400u;
            goto label_1ee400;
        }
    }
    ctx->pc = 0x1EE3BCu;
    // 0x1ee3bc: 0x91001a  div         $zero, $a0, $s1
    ctx->pc = 0x1ee3bcu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ee3c0: 0x0  nop
    ctx->pc = 0x1ee3c0u;
    // NOP
    // 0x1ee3c4: 0x0  nop
    ctx->pc = 0x1ee3c4u;
    // NOP
    // 0x1ee3c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee3c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee3cc: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1EE3CCu;
    {
        const bool branch_taken_0x1ee3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE3CCu;
            // 0x1ee3d0: 0x2483ffce  addiu       $v1, $a0, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3cc) {
            ctx->pc = 0x1EE4B0u;
            goto label_1ee4b0;
        }
    }
    ctx->pc = 0x1EE3D4u;
    // 0x1ee3d4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ee3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ee3d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ee3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ee3dc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ee3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee3e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee3e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ee3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ee3e8: 0x2442ff06  addiu       $v0, $v0, -0xFA
    ctx->pc = 0x1ee3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967046));
    // 0x1ee3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee3f0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1EE3F0u;
    SET_GPR_U32(ctx, 31, 0x1EE3F8u);
    ctx->pc = 0x1EE3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE3F0u;
            // 0x1ee3f4: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE3F8u; }
        if (ctx->pc != 0x1EE3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE3F8u; }
        if (ctx->pc != 0x1EE3F8u) { return; }
    }
    ctx->pc = 0x1EE3F8u;
    // 0x1ee3f8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1EE3F8u;
    {
        const bool branch_taken_0x1ee3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee3f8) {
            ctx->pc = 0x1EE4B0u;
            goto label_1ee4b0;
        }
    }
    ctx->pc = 0x1EE400u;
label_1ee400:
    // 0x1ee400: 0x28810096  slti        $at, $a0, 0x96
    ctx->pc = 0x1ee400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1ee404: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EE404u;
    {
        const bool branch_taken_0x1ee404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee404) {
            ctx->pc = 0x1EE460u;
            goto label_1ee460;
        }
    }
    ctx->pc = 0x1EE40Cu;
    // 0x1ee40c: 0x91001a  div         $zero, $a0, $s1
    ctx->pc = 0x1ee40cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ee410: 0x0  nop
    ctx->pc = 0x1ee410u;
    // NOP
    // 0x1ee414: 0x0  nop
    ctx->pc = 0x1ee414u;
    // NOP
    // 0x1ee418: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee418u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee41c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EE41Cu;
    {
        const bool branch_taken_0x1ee41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE41Cu;
            // 0x1ee420: 0x2485ff9c  addiu       $a1, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee41c) {
            ctx->pc = 0x1EE4B0u;
            goto label_1ee4b0;
        }
    }
    ctx->pc = 0x1EE424u;
    // 0x1ee424: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x1ee424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1ee428: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1ee428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ee42c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ee42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee430: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1ee430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ee434: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ee434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ee438: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ee438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ee43c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1ee43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ee440: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ee440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ee444: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ee444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee44c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1EE44Cu;
    SET_GPR_U32(ctx, 31, 0x1EE454u);
    ctx->pc = 0x1EE450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE44Cu;
            // 0x1ee450: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE454u; }
        if (ctx->pc != 0x1EE454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE454u; }
        if (ctx->pc != 0x1EE454u) { return; }
    }
    ctx->pc = 0x1EE454u;
    // 0x1ee454: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1EE454u;
    {
        const bool branch_taken_0x1ee454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee454) {
            ctx->pc = 0x1EE4B0u;
            goto label_1ee4b0;
        }
    }
    ctx->pc = 0x1EE45Cu;
    // 0x1ee45c: 0x0  nop
    ctx->pc = 0x1ee45cu;
    // NOP
label_1ee460:
    // 0x1ee460: 0x288100c8  slti        $at, $a0, 0xC8
    ctx->pc = 0x1ee460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x1ee464: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE464u;
    {
        const bool branch_taken_0x1ee464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee464) {
            ctx->pc = 0x1EE4B0u;
            goto label_1ee4b0;
        }
    }
    ctx->pc = 0x1EE46Cu;
    // 0x1ee46c: 0x91001a  div         $zero, $a0, $s1
    ctx->pc = 0x1ee46cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ee470: 0x0  nop
    ctx->pc = 0x1ee470u;
    // NOP
    // 0x1ee474: 0x0  nop
    ctx->pc = 0x1ee474u;
    // NOP
    // 0x1ee478: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee478u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee47c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EE47Cu;
    {
        const bool branch_taken_0x1ee47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE47Cu;
            // 0x1ee480: 0x2483ff6a  addiu       $v1, $a0, -0x96 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967146));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee47c) {
            ctx->pc = 0x1EE4B0u;
            goto label_1ee4b0;
        }
    }
    ctx->pc = 0x1EE484u;
    // 0x1ee484: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ee484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ee488: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ee488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ee48c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ee48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee490: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ee490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee494: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ee494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ee498: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ee498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee49c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ee49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ee4a0: 0x2442fe70  addiu       $v0, $v0, -0x190
    ctx->pc = 0x1ee4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966896));
    // 0x1ee4a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee4a8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1EE4A8u;
    SET_GPR_U32(ctx, 31, 0x1EE4B0u);
    ctx->pc = 0x1EE4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE4A8u;
            // 0x1ee4ac: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4B0u; }
        if (ctx->pc != 0x1EE4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4B0u; }
        if (ctx->pc != 0x1EE4B0u) { return; }
    }
    ctx->pc = 0x1EE4B0u;
label_1ee4b0:
    // 0x1ee4b0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ee4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ee4b4: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1ee4b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1ee4b8: 0x14200197  bnez        $at, . + 4 + (0x197 << 2)
    ctx->pc = 0x1EE4B8u;
    {
        const bool branch_taken_0x1ee4b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4b8) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EE4C0u;
    // 0x1ee4c0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ee4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ee4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee4c8: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x1EE4C8u;
    {
        const bool branch_taken_0x1ee4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE4C8u;
            // 0x1ee4cc: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4c8) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EE4D0u;
label_1ee4d0:
    // 0x1ee4d0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ee4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ee4d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee4d8: 0x1000018f  b           . + 4 + (0x18F << 2)
    ctx->pc = 0x1EE4D8u;
    {
        const bool branch_taken_0x1ee4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE4D8u;
            // 0x1ee4dc: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4d8) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EE4E0u;
label_1ee4e0:
    // 0x1ee4e0: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1EE4E0u;
    SET_GPR_U32(ctx, 31, 0x1EE4E8u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4E8u; }
        if (ctx->pc != 0x1EE4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4E8u; }
        if (ctx->pc != 0x1EE4E8u) { return; }
    }
    ctx->pc = 0x1EE4E8u;
    // 0x1ee4e8: 0xc05b978  jal         func_16E5E0
    ctx->pc = 0x1EE4E8u;
    SET_GPR_U32(ctx, 31, 0x1EE4F0u);
    ctx->pc = 0x1EE4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE4E8u;
            // 0x1ee4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E0u;
    if (runtime->hasFunction(0x16E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x16E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4F0u; }
        if (ctx->pc != 0x1EE4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Hp0_0x16e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4F0u; }
        if (ctx->pc != 0x1EE4F0u) { return; }
    }
    ctx->pc = 0x1EE4F0u;
    // 0x1ee4f0: 0xc05b9cc  jal         func_16E730
    ctx->pc = 0x1EE4F0u;
    SET_GPR_U32(ctx, 31, 0x1EE4F8u);
    ctx->pc = 0x1EE4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE4F0u;
            // 0x1ee4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E730u;
    if (runtime->hasFunction(0x16E730u)) {
        auto targetFn = runtime->lookupFunction(0x16E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4F8u; }
        if (ctx->pc != 0x1EE4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_All_Hp0_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4F8u; }
        if (ctx->pc != 0x1EE4F8u) { return; }
    }
    ctx->pc = 0x1EE4F8u;
    // 0x1ee4f8: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1ee4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee4fc: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1ee4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1ee500: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1ee500u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1ee504: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1ee504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1ee508: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee50c: 0x0  nop
    ctx->pc = 0x1ee50cu;
    // NOP
    // 0x1ee510: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee514: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1ee514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1ee518: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ee518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee51c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee51cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee520: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ee520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1ee524: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ee524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ee528: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1ee528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ee52c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1ee52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ee530: 0xc07bb64  jal         func_1EED90
    ctx->pc = 0x1EE530u;
    SET_GPR_U32(ctx, 31, 0x1EE538u);
    ctx->pc = 0x1EE534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE530u;
            // 0x1ee534: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EED90u;
    if (runtime->hasFunction(0x1EED90u)) {
        auto targetFn = runtime->lookupFunction(0x1EED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE538u; }
        if (ctx->pc != 0x1EE538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1eed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE538u; }
        if (ctx->pc != 0x1EE538u) { return; }
    }
    ctx->pc = 0x1EE538u;
    // 0x1ee538: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ee538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee53c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ee53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ee540: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1ee540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1ee544: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ee544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ee548: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1ee548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1ee54c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ee54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ee550: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ee550u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ee554: 0x0  nop
    ctx->pc = 0x1ee554u;
    // NOP
    // 0x1ee558: 0x0  nop
    ctx->pc = 0x1ee558u;
    // NOP
    // 0x1ee55c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee55cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee560: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1EE560u;
    {
        const bool branch_taken_0x1ee560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee560) {
            ctx->pc = 0x1EE788u;
            goto label_1ee788;
        }
    }
    ctx->pc = 0x1EE568u;
    // 0x1ee568: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EE568u;
    SET_GPR_U32(ctx, 31, 0x1EE570u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE570u; }
        if (ctx->pc != 0x1EE570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE570u; }
        if (ctx->pc != 0x1EE570u) { return; }
    }
    ctx->pc = 0x1EE570u;
    // 0x1ee570: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1ee570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1ee574: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ee574u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ee578: 0x0  nop
    ctx->pc = 0x1ee578u;
    // NOP
    // 0x1ee57c: 0x0  nop
    ctx->pc = 0x1ee57cu;
    // NOP
    // 0x1ee580: 0x9010  mfhi        $s2
    ctx->pc = 0x1ee580u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1ee584: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EE584u;
    SET_GPR_U32(ctx, 31, 0x1EE58Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE58Cu; }
        if (ctx->pc != 0x1EE58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE58Cu; }
        if (ctx->pc != 0x1EE58Cu) { return; }
    }
    ctx->pc = 0x1EE58Cu;
    // 0x1ee58c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1ee58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1ee590: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1ee590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ee594: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ee594u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ee598: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ee598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ee59c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ee59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee5a0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ee5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ee5a4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ee5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ee5a8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ee5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ee5ac: 0x8810  mfhi        $s1
    ctx->pc = 0x1ee5acu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1ee5b0: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1ee5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1ee5b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee5b8: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1ee5b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1ee5bc: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1ee5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1ee5c0: 0x2465ffe7  addiu       $a1, $v1, -0x19
    ctx->pc = 0x1ee5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    // 0x1ee5c4: 0x2444ff60  addiu       $a0, $v0, -0xA0
    ctx->pc = 0x1ee5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x1ee5c8: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1EE5C8u;
    SET_GPR_U32(ctx, 31, 0x1EE5D0u);
    ctx->pc = 0x1EE5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE5C8u;
            // 0x1ee5cc: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE5D0u; }
        if (ctx->pc != 0x1EE5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE5D0u; }
        if (ctx->pc != 0x1EE5D0u) { return; }
    }
    ctx->pc = 0x1EE5D0u;
    // 0x1ee5d0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ee5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ee5d4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1ee5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ee5d8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ee5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ee5dc: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1ee5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ee5e0: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ee5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ee5e4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ee5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ee5e8: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1ee5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1ee5ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee5f0: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ee5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee5f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ee5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ee5f8: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1ee5f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1ee5fc: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1ee5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ee600: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1ee600u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ee604: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1EE604u;
    SET_GPR_U32(ctx, 31, 0x1EE60Cu);
    ctx->pc = 0x1EE608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE604u;
            // 0x1ee608: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE60Cu; }
        if (ctx->pc != 0x1EE60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE60Cu; }
        if (ctx->pc != 0x1EE60Cu) { return; }
    }
    ctx->pc = 0x1EE60Cu;
    // 0x1ee60c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ee60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ee610: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1ee610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ee614: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ee614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ee618: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1ee618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ee61c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ee61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ee620: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ee620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ee624: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1ee624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1ee628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee62c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ee62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee630: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1ee630u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ee634: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1ee634u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1ee638: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1ee638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ee63c: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1ee63cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ee640: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1EE640u;
    SET_GPR_U32(ctx, 31, 0x1EE648u);
    ctx->pc = 0x1EE644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE640u;
            // 0x1ee644: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE648u; }
        if (ctx->pc != 0x1EE648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE648u; }
        if (ctx->pc != 0x1EE648u) { return; }
    }
    ctx->pc = 0x1EE648u;
    // 0x1ee648: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ee648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ee64c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1ee64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1ee650: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ee650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ee654: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1ee654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1ee658: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1ee658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1ee65c: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1ee65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1ee660: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ee660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee668: 0x0  nop
    ctx->pc = 0x1ee668u;
    // NOP
    // 0x1ee66c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ee66cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ee670: 0xc05d080  jal         func_174200
    ctx->pc = 0x1EE670u;
    SET_GPR_U32(ctx, 31, 0x1EE678u);
    ctx->pc = 0x1EE674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE670u;
            // 0x1ee674: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE678u; }
        if (ctx->pc != 0x1EE678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE678u; }
        if (ctx->pc != 0x1EE678u) { return; }
    }
    ctx->pc = 0x1EE678u;
    // 0x1ee678: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EE678u;
    SET_GPR_U32(ctx, 31, 0x1EE680u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE680u; }
        if (ctx->pc != 0x1EE680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE680u; }
        if (ctx->pc != 0x1EE680u) { return; }
    }
    ctx->pc = 0x1EE680u;
    // 0x1ee680: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ee680u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ee684: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE684u;
    {
        const bool branch_taken_0x1ee684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee684) {
            ctx->pc = 0x1EE6C0u;
            goto label_1ee6c0;
        }
    }
    ctx->pc = 0x1EE68Cu;
    // 0x1ee68c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ee68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ee690: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1ee690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1ee694: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ee694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ee698: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1ee698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1ee69c: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1ee69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1ee6a0: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1ee6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1ee6a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ee6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee6a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee6ac: 0x0  nop
    ctx->pc = 0x1ee6acu;
    // NOP
    // 0x1ee6b0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ee6b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ee6b4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1EE6B4u;
    SET_GPR_U32(ctx, 31, 0x1EE6BCu);
    ctx->pc = 0x1EE6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE6B4u;
            // 0x1ee6b8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE6BCu; }
        if (ctx->pc != 0x1EE6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE6BCu; }
        if (ctx->pc != 0x1EE6BCu) { return; }
    }
    ctx->pc = 0x1EE6BCu;
    // 0x1ee6bc: 0x0  nop
    ctx->pc = 0x1ee6bcu;
    // NOP
label_1ee6c0:
    // 0x1ee6c0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EE6C0u;
    SET_GPR_U32(ctx, 31, 0x1EE6C8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE6C8u; }
        if (ctx->pc != 0x1EE6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE6C8u; }
        if (ctx->pc != 0x1EE6C8u) { return; }
    }
    ctx->pc = 0x1EE6C8u;
    // 0x1ee6c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ee6c8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ee6cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE6CCu;
    {
        const bool branch_taken_0x1ee6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee6cc) {
            ctx->pc = 0x1EE708u;
            goto label_1ee708;
        }
    }
    ctx->pc = 0x1EE6D4u;
    // 0x1ee6d4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ee6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ee6d8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1ee6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1ee6dc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ee6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ee6e0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1ee6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1ee6e4: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1ee6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1ee6e8: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1ee6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1ee6ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ee6ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee6f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee6f4: 0x0  nop
    ctx->pc = 0x1ee6f4u;
    // NOP
    // 0x1ee6f8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ee6f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ee6fc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1EE6FCu;
    SET_GPR_U32(ctx, 31, 0x1EE704u);
    ctx->pc = 0x1EE700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE6FCu;
            // 0x1ee700: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE704u; }
        if (ctx->pc != 0x1EE704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE704u; }
        if (ctx->pc != 0x1EE704u) { return; }
    }
    ctx->pc = 0x1EE704u;
    // 0x1ee704: 0x0  nop
    ctx->pc = 0x1ee704u;
    // NOP
label_1ee708:
    // 0x1ee708: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1ee708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ee70c: 0x2841005a  slti        $at, $v0, 0x5A
    ctx->pc = 0x1ee70cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1ee710: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EE710u;
    {
        const bool branch_taken_0x1ee710 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE710u;
            // 0x1ee714: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee710) {
            ctx->pc = 0x1EE788u;
            goto label_1ee788;
        }
    }
    ctx->pc = 0x1EE718u;
    // 0x1ee718: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1EE718u;
    SET_GPR_U32(ctx, 31, 0x1EE720u);
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE720u; }
        if (ctx->pc != 0x1EE720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE720u; }
        if (ctx->pc != 0x1EE720u) { return; }
    }
    ctx->pc = 0x1EE720u;
    // 0x1ee720: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EE720u;
    {
        const bool branch_taken_0x1ee720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee720) {
            ctx->pc = 0x1EE750u;
            goto label_1ee750;
        }
    }
    ctx->pc = 0x1EE728u;
    // 0x1ee728: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EE728u;
    SET_GPR_U32(ctx, 31, 0x1EE730u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE730u; }
        if (ctx->pc != 0x1EE730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE730u; }
        if (ctx->pc != 0x1EE730u) { return; }
    }
    ctx->pc = 0x1EE730u;
    // 0x1ee730: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1ee730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ee734: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ee734u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ee738: 0x0  nop
    ctx->pc = 0x1ee738u;
    // NOP
    // 0x1ee73c: 0x0  nop
    ctx->pc = 0x1ee73cu;
    // NOP
    // 0x1ee740: 0x2810  mfhi        $a1
    ctx->pc = 0x1ee740u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1ee744: 0xc055124  jal         func_154490
    ctx->pc = 0x1EE744u;
    SET_GPR_U32(ctx, 31, 0x1EE74Cu);
    ctx->pc = 0x1EE748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE744u;
            // 0x1ee748: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE74Cu; }
        if (ctx->pc != 0x1EE74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE74Cu; }
        if (ctx->pc != 0x1EE74Cu) { return; }
    }
    ctx->pc = 0x1EE74Cu;
    // 0x1ee74c: 0x0  nop
    ctx->pc = 0x1ee74cu;
    // NOP
label_1ee750:
    // 0x1ee750: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1EE750u;
    SET_GPR_U32(ctx, 31, 0x1EE758u);
    ctx->pc = 0x1EE754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE750u;
            // 0x1ee754: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE758u; }
        if (ctx->pc != 0x1EE758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE758u; }
        if (ctx->pc != 0x1EE758u) { return; }
    }
    ctx->pc = 0x1EE758u;
    // 0x1ee758: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EE758u;
    {
        const bool branch_taken_0x1ee758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee758) {
            ctx->pc = 0x1EE788u;
            goto label_1ee788;
        }
    }
    ctx->pc = 0x1EE760u;
    // 0x1ee760: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EE760u;
    SET_GPR_U32(ctx, 31, 0x1EE768u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE768u; }
        if (ctx->pc != 0x1EE768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE768u; }
        if (ctx->pc != 0x1EE768u) { return; }
    }
    ctx->pc = 0x1EE768u;
    // 0x1ee768: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1ee768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ee76c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ee76cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ee770: 0x0  nop
    ctx->pc = 0x1ee770u;
    // NOP
    // 0x1ee774: 0x0  nop
    ctx->pc = 0x1ee774u;
    // NOP
    // 0x1ee778: 0x2810  mfhi        $a1
    ctx->pc = 0x1ee778u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1ee77c: 0xc055124  jal         func_154490
    ctx->pc = 0x1EE77Cu;
    SET_GPR_U32(ctx, 31, 0x1EE784u);
    ctx->pc = 0x1EE780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE77Cu;
            // 0x1ee780: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE784u; }
        if (ctx->pc != 0x1EE784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE784u; }
        if (ctx->pc != 0x1EE784u) { return; }
    }
    ctx->pc = 0x1EE784u;
    // 0x1ee784: 0x0  nop
    ctx->pc = 0x1ee784u;
    // NOP
label_1ee788:
    // 0x1ee788: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1ee788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ee78c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1ee78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1ee790: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EE790u;
    {
        const bool branch_taken_0x1ee790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE790u;
            // 0x1ee794: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee790) {
            ctx->pc = 0x1EE7D8u;
            goto label_1ee7d8;
        }
    }
    ctx->pc = 0x1EE798u;
    // 0x1ee798: 0xc060718  jal         func_181C60
    ctx->pc = 0x1EE798u;
    SET_GPR_U32(ctx, 31, 0x1EE7A0u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7A0u; }
        if (ctx->pc != 0x1EE7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7A0u; }
        if (ctx->pc != 0x1EE7A0u) { return; }
    }
    ctx->pc = 0x1EE7A0u;
    // 0x1ee7a0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EE7A0u;
    SET_GPR_U32(ctx, 31, 0x1EE7A8u);
    ctx->pc = 0x1EE7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7A0u;
            // 0x1ee7a4: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7A8u; }
        if (ctx->pc != 0x1EE7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7A8u; }
        if (ctx->pc != 0x1EE7A8u) { return; }
    }
    ctx->pc = 0x1EE7A8u;
    // 0x1ee7a8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1EE7A8u;
    SET_GPR_U32(ctx, 31, 0x1EE7B0u);
    ctx->pc = 0x1EE7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7A8u;
            // 0x1ee7ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7B0u; }
        if (ctx->pc != 0x1EE7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7B0u; }
        if (ctx->pc != 0x1EE7B0u) { return; }
    }
    ctx->pc = 0x1EE7B0u;
    // 0x1ee7b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE7B0u;
    {
        const bool branch_taken_0x1ee7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7B0u;
            // 0x1ee7b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7b0) {
            ctx->pc = 0x1EE7C0u;
            goto label_1ee7c0;
        }
    }
    ctx->pc = 0x1EE7B8u;
    // 0x1ee7b8: 0xc055124  jal         func_154490
    ctx->pc = 0x1EE7B8u;
    SET_GPR_U32(ctx, 31, 0x1EE7C0u);
    ctx->pc = 0x1EE7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7B8u;
            // 0x1ee7bc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7C0u; }
        if (ctx->pc != 0x1EE7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7C0u; }
        if (ctx->pc != 0x1EE7C0u) { return; }
    }
    ctx->pc = 0x1EE7C0u;
label_1ee7c0:
    // 0x1ee7c0: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1EE7C0u;
    SET_GPR_U32(ctx, 31, 0x1EE7C8u);
    ctx->pc = 0x1EE7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7C0u;
            // 0x1ee7c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7C8u; }
        if (ctx->pc != 0x1EE7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7C8u; }
        if (ctx->pc != 0x1EE7C8u) { return; }
    }
    ctx->pc = 0x1EE7C8u;
    // 0x1ee7c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE7C8u;
    {
        const bool branch_taken_0x1ee7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7C8u;
            // 0x1ee7cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7c8) {
            ctx->pc = 0x1EE7D8u;
            goto label_1ee7d8;
        }
    }
    ctx->pc = 0x1EE7D0u;
    // 0x1ee7d0: 0xc055124  jal         func_154490
    ctx->pc = 0x1EE7D0u;
    SET_GPR_U32(ctx, 31, 0x1EE7D8u);
    ctx->pc = 0x1EE7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7D0u;
            // 0x1ee7d4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7D8u; }
        if (ctx->pc != 0x1EE7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7D8u; }
        if (ctx->pc != 0x1EE7D8u) { return; }
    }
    ctx->pc = 0x1EE7D8u;
label_1ee7d8:
    // 0x1ee7d8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1ee7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ee7dc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1ee7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1ee7e0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EE7E0u;
    {
        const bool branch_taken_0x1ee7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7E0u;
            // 0x1ee7e4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7e0) {
            ctx->pc = 0x1EE828u;
            goto label_1ee828;
        }
    }
    ctx->pc = 0x1EE7E8u;
    // 0x1ee7e8: 0xc060718  jal         func_181C60
    ctx->pc = 0x1EE7E8u;
    SET_GPR_U32(ctx, 31, 0x1EE7F0u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7F0u; }
        if (ctx->pc != 0x1EE7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7F0u; }
        if (ctx->pc != 0x1EE7F0u) { return; }
    }
    ctx->pc = 0x1EE7F0u;
    // 0x1ee7f0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EE7F0u;
    SET_GPR_U32(ctx, 31, 0x1EE7F8u);
    ctx->pc = 0x1EE7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7F0u;
            // 0x1ee7f4: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7F8u; }
        if (ctx->pc != 0x1EE7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7F8u; }
        if (ctx->pc != 0x1EE7F8u) { return; }
    }
    ctx->pc = 0x1EE7F8u;
    // 0x1ee7f8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1EE7F8u;
    SET_GPR_U32(ctx, 31, 0x1EE800u);
    ctx->pc = 0x1EE7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7F8u;
            // 0x1ee7fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE800u; }
        if (ctx->pc != 0x1EE800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE800u; }
        if (ctx->pc != 0x1EE800u) { return; }
    }
    ctx->pc = 0x1EE800u;
    // 0x1ee800: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE800u;
    {
        const bool branch_taken_0x1ee800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE800u;
            // 0x1ee804: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee800) {
            ctx->pc = 0x1EE810u;
            goto label_1ee810;
        }
    }
    ctx->pc = 0x1EE808u;
    // 0x1ee808: 0xc055124  jal         func_154490
    ctx->pc = 0x1EE808u;
    SET_GPR_U32(ctx, 31, 0x1EE810u);
    ctx->pc = 0x1EE80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE808u;
            // 0x1ee80c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE810u; }
        if (ctx->pc != 0x1EE810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE810u; }
        if (ctx->pc != 0x1EE810u) { return; }
    }
    ctx->pc = 0x1EE810u;
label_1ee810:
    // 0x1ee810: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1EE810u;
    SET_GPR_U32(ctx, 31, 0x1EE818u);
    ctx->pc = 0x1EE814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE810u;
            // 0x1ee814: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE818u; }
        if (ctx->pc != 0x1EE818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE818u; }
        if (ctx->pc != 0x1EE818u) { return; }
    }
    ctx->pc = 0x1EE818u;
    // 0x1ee818: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE818u;
    {
        const bool branch_taken_0x1ee818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE818u;
            // 0x1ee81c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee818) {
            ctx->pc = 0x1EE828u;
            goto label_1ee828;
        }
    }
    ctx->pc = 0x1EE820u;
    // 0x1ee820: 0xc055124  jal         func_154490
    ctx->pc = 0x1EE820u;
    SET_GPR_U32(ctx, 31, 0x1EE828u);
    ctx->pc = 0x1EE824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE820u;
            // 0x1ee824: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE828u; }
        if (ctx->pc != 0x1EE828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE828u; }
        if (ctx->pc != 0x1EE828u) { return; }
    }
    ctx->pc = 0x1EE828u;
label_1ee828:
    // 0x1ee828: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1ee828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ee82c: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x1ee82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1ee830: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EE830u;
    {
        const bool branch_taken_0x1ee830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE830u;
            // 0x1ee834: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee830) {
            ctx->pc = 0x1EE878u;
            goto label_1ee878;
        }
    }
    ctx->pc = 0x1EE838u;
    // 0x1ee838: 0xc060718  jal         func_181C60
    ctx->pc = 0x1EE838u;
    SET_GPR_U32(ctx, 31, 0x1EE840u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE840u; }
        if (ctx->pc != 0x1EE840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE840u; }
        if (ctx->pc != 0x1EE840u) { return; }
    }
    ctx->pc = 0x1EE840u;
    // 0x1ee840: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EE840u;
    SET_GPR_U32(ctx, 31, 0x1EE848u);
    ctx->pc = 0x1EE844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE840u;
            // 0x1ee844: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE848u; }
        if (ctx->pc != 0x1EE848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE848u; }
        if (ctx->pc != 0x1EE848u) { return; }
    }
    ctx->pc = 0x1EE848u;
    // 0x1ee848: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1EE848u;
    SET_GPR_U32(ctx, 31, 0x1EE850u);
    ctx->pc = 0x1EE84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE848u;
            // 0x1ee84c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE850u; }
        if (ctx->pc != 0x1EE850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE850u; }
        if (ctx->pc != 0x1EE850u) { return; }
    }
    ctx->pc = 0x1EE850u;
    // 0x1ee850: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE850u;
    {
        const bool branch_taken_0x1ee850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE850u;
            // 0x1ee854: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee850) {
            ctx->pc = 0x1EE860u;
            goto label_1ee860;
        }
    }
    ctx->pc = 0x1EE858u;
    // 0x1ee858: 0xc055124  jal         func_154490
    ctx->pc = 0x1EE858u;
    SET_GPR_U32(ctx, 31, 0x1EE860u);
    ctx->pc = 0x1EE85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE858u;
            // 0x1ee85c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE860u; }
        if (ctx->pc != 0x1EE860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE860u; }
        if (ctx->pc != 0x1EE860u) { return; }
    }
    ctx->pc = 0x1EE860u;
label_1ee860:
    // 0x1ee860: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1EE860u;
    SET_GPR_U32(ctx, 31, 0x1EE868u);
    ctx->pc = 0x1EE864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE860u;
            // 0x1ee864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE868u; }
        if (ctx->pc != 0x1EE868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE868u; }
        if (ctx->pc != 0x1EE868u) { return; }
    }
    ctx->pc = 0x1EE868u;
    // 0x1ee868: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE868u;
    {
        const bool branch_taken_0x1ee868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE868u;
            // 0x1ee86c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee868) {
            ctx->pc = 0x1EE878u;
            goto label_1ee878;
        }
    }
    ctx->pc = 0x1EE870u;
    // 0x1ee870: 0xc055124  jal         func_154490
    ctx->pc = 0x1EE870u;
    SET_GPR_U32(ctx, 31, 0x1EE878u);
    ctx->pc = 0x1EE874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE870u;
            // 0x1ee874: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE878u; }
        if (ctx->pc != 0x1EE878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE878u; }
        if (ctx->pc != 0x1EE878u) { return; }
    }
    ctx->pc = 0x1EE878u;
label_1ee878:
    // 0x1ee878: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1ee878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ee87c: 0x240200af  addiu       $v0, $zero, 0xAF
    ctx->pc = 0x1ee87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x1ee880: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EE880u;
    {
        const bool branch_taken_0x1ee880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE880u;
            // 0x1ee884: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee880) {
            ctx->pc = 0x1EE8C8u;
            goto label_1ee8c8;
        }
    }
    ctx->pc = 0x1EE888u;
    // 0x1ee888: 0xc060718  jal         func_181C60
    ctx->pc = 0x1EE888u;
    SET_GPR_U32(ctx, 31, 0x1EE890u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE890u; }
        if (ctx->pc != 0x1EE890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE890u; }
        if (ctx->pc != 0x1EE890u) { return; }
    }
    ctx->pc = 0x1EE890u;
    // 0x1ee890: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EE890u;
    SET_GPR_U32(ctx, 31, 0x1EE898u);
    ctx->pc = 0x1EE894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE890u;
            // 0x1ee894: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE898u; }
        if (ctx->pc != 0x1EE898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE898u; }
        if (ctx->pc != 0x1EE898u) { return; }
    }
    ctx->pc = 0x1EE898u;
    // 0x1ee898: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1EE898u;
    SET_GPR_U32(ctx, 31, 0x1EE8A0u);
    ctx->pc = 0x1EE89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE898u;
            // 0x1ee89c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8A0u; }
        if (ctx->pc != 0x1EE8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8A0u; }
        if (ctx->pc != 0x1EE8A0u) { return; }
    }
    ctx->pc = 0x1EE8A0u;
    // 0x1ee8a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE8A0u;
    {
        const bool branch_taken_0x1ee8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8A0u;
            // 0x1ee8a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8a0) {
            ctx->pc = 0x1EE8B0u;
            goto label_1ee8b0;
        }
    }
    ctx->pc = 0x1EE8A8u;
    // 0x1ee8a8: 0xc055124  jal         func_154490
    ctx->pc = 0x1EE8A8u;
    SET_GPR_U32(ctx, 31, 0x1EE8B0u);
    ctx->pc = 0x1EE8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8A8u;
            // 0x1ee8ac: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8B0u; }
        if (ctx->pc != 0x1EE8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8B0u; }
        if (ctx->pc != 0x1EE8B0u) { return; }
    }
    ctx->pc = 0x1EE8B0u;
label_1ee8b0:
    // 0x1ee8b0: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1EE8B0u;
    SET_GPR_U32(ctx, 31, 0x1EE8B8u);
    ctx->pc = 0x1EE8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8B0u;
            // 0x1ee8b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8B8u; }
        if (ctx->pc != 0x1EE8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8B8u; }
        if (ctx->pc != 0x1EE8B8u) { return; }
    }
    ctx->pc = 0x1EE8B8u;
    // 0x1ee8b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE8B8u;
    {
        const bool branch_taken_0x1ee8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8B8u;
            // 0x1ee8bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8b8) {
            ctx->pc = 0x1EE8C8u;
            goto label_1ee8c8;
        }
    }
    ctx->pc = 0x1EE8C0u;
    // 0x1ee8c0: 0xc055124  jal         func_154490
    ctx->pc = 0x1EE8C0u;
    SET_GPR_U32(ctx, 31, 0x1EE8C8u);
    ctx->pc = 0x1EE8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8C0u;
            // 0x1ee8c4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8C8u; }
        if (ctx->pc != 0x1EE8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8C8u; }
        if (ctx->pc != 0x1EE8C8u) { return; }
    }
    ctx->pc = 0x1EE8C8u;
label_1ee8c8:
    // 0x1ee8c8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1ee8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ee8cc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1ee8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ee8d0: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x1ee8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1ee8d4: 0x14200090  bnez        $at, . + 4 + (0x90 << 2)
    ctx->pc = 0x1EE8D4u;
    {
        const bool branch_taken_0x1ee8d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8D4u;
            // 0x1ee8d8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8d4) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EE8DCu;
    // 0x1ee8dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ee8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee8e0: 0xc060718  jal         func_181C60
    ctx->pc = 0x1EE8E0u;
    SET_GPR_U32(ctx, 31, 0x1EE8E8u);
    ctx->pc = 0x1EE8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8E0u;
            // 0x1ee8e4: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8E8u; }
        if (ctx->pc != 0x1EE8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8E8u; }
        if (ctx->pc != 0x1EE8E8u) { return; }
    }
    ctx->pc = 0x1EE8E8u;
    // 0x1ee8e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ee8e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee8ec: 0x0  nop
    ctx->pc = 0x1ee8ecu;
    // NOP
label_1ee8f0:
    // 0x1ee8f0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EE8F0u;
    SET_GPR_U32(ctx, 31, 0x1EE8F8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8F8u; }
        if (ctx->pc != 0x1EE8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8F8u; }
        if (ctx->pc != 0x1EE8F8u) { return; }
    }
    ctx->pc = 0x1EE8F8u;
    // 0x1ee8f8: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1ee8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1ee8fc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ee8fcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ee900: 0x0  nop
    ctx->pc = 0x1ee900u;
    // NOP
    // 0x1ee904: 0x0  nop
    ctx->pc = 0x1ee904u;
    // NOP
    // 0x1ee908: 0x9010  mfhi        $s2
    ctx->pc = 0x1ee908u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1ee90c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EE90Cu;
    SET_GPR_U32(ctx, 31, 0x1EE914u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE914u; }
        if (ctx->pc != 0x1EE914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE914u; }
        if (ctx->pc != 0x1EE914u) { return; }
    }
    ctx->pc = 0x1EE914u;
    // 0x1ee914: 0x305101ff  andi        $s1, $v0, 0x1FF
    ctx->pc = 0x1ee914u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)511u)));
    // 0x1ee918: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1ee918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ee91c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ee91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ee920: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ee920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ee924: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ee924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ee928: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ee928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ee92c: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1ee92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1ee930: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee934: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ee934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee938: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1ee938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1ee93c: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1ee93cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ee940: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1ee940u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1ee944: 0x246200fa  addiu       $v0, $v1, 0xFA
    ctx->pc = 0x1ee944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 250));
    // 0x1ee948: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1ee948u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ee94c: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1EE94Cu;
    SET_GPR_U32(ctx, 31, 0x1EE954u);
    ctx->pc = 0x1EE950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE94Cu;
            // 0x1ee950: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE954u; }
        if (ctx->pc != 0x1EE954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE954u; }
        if (ctx->pc != 0x1EE954u) { return; }
    }
    ctx->pc = 0x1EE954u;
    // 0x1ee954: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ee954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ee958: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1ee958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ee95c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ee95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ee960: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ee960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ee964: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ee964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ee968: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1ee968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1ee96c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee970: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ee970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee974: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1ee974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1ee978: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1ee978u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ee97c: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1ee97cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1ee980: 0x246200fa  addiu       $v0, $v1, 0xFA
    ctx->pc = 0x1ee980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 250));
    // 0x1ee984: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1ee984u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ee988: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1EE988u;
    SET_GPR_U32(ctx, 31, 0x1EE990u);
    ctx->pc = 0x1EE98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE988u;
            // 0x1ee98c: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE990u; }
        if (ctx->pc != 0x1EE990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE990u; }
        if (ctx->pc != 0x1EE990u) { return; }
    }
    ctx->pc = 0x1EE990u;
    // 0x1ee990: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ee990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ee994: 0x2a620078  slti        $v0, $s3, 0x78
    ctx->pc = 0x1ee994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1ee998: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1EE998u;
    {
        const bool branch_taken_0x1ee998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE998u;
            // 0x1ee99c: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee998) {
            ctx->pc = 0x1EE8F0u;
            goto label_1ee8f0;
        }
    }
    ctx->pc = 0x1EE9A0u;
    // 0x1ee9a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ee9a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1ee9a4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1ee9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1ee9a8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1ee9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1ee9ac: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1EE9ACu;
    {
        const bool branch_taken_0x1ee9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE9ACu;
            // 0x1ee9b0: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9ac) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EE9B4u;
    // 0x1ee9b4: 0x0  nop
    ctx->pc = 0x1ee9b4u;
    // NOP
label_1ee9b8:
    // 0x1ee9b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ee9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ee9bc: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x1ee9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x1ee9c0: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x1ee9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x1ee9c4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1ee9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1ee9c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ee9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ee9cc: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x1ee9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
    // 0x1ee9d0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1ee9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1ee9d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ee9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ee9d8: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1ee9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1ee9dc: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1ee9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1ee9e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ee9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ee9e4: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x1ee9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x1ee9e8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1ee9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1ee9ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ee9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ee9f0: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x1ee9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x1ee9f4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1ee9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1ee9f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ee9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ee9fc: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x1ee9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x1eea00: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1eea00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1eea04: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1eea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eea08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEA08u;
    {
        const bool branch_taken_0x1eea08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA08u;
            // 0x1eea0c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea08) {
            ctx->pc = 0x1EEA18u;
            goto label_1eea18;
        }
    }
    ctx->pc = 0x1EEA10u;
    // 0x1eea10: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EEA10u;
    SET_GPR_U32(ctx, 31, 0x1EEA18u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA18u; }
        if (ctx->pc != 0x1EEA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA18u; }
        if (ctx->pc != 0x1EEA18u) { return; }
    }
    ctx->pc = 0x1EEA18u;
label_1eea18:
    // 0x1eea18: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1eea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eea1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eea20: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEA20u;
    {
        const bool branch_taken_0x1eea20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EEA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA20u;
            // 0x1eea24: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea20) {
            ctx->pc = 0x1EEA30u;
            goto label_1eea30;
        }
    }
    ctx->pc = 0x1EEA28u;
    // 0x1eea28: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EEA28u;
    SET_GPR_U32(ctx, 31, 0x1EEA30u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA30u; }
        if (ctx->pc != 0x1EEA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA30u; }
        if (ctx->pc != 0x1EEA30u) { return; }
    }
    ctx->pc = 0x1EEA30u;
label_1eea30:
    // 0x1eea30: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1eea30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eea34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eea38: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEA38u;
    {
        const bool branch_taken_0x1eea38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EEA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA38u;
            // 0x1eea3c: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea38) {
            ctx->pc = 0x1EEA48u;
            goto label_1eea48;
        }
    }
    ctx->pc = 0x1EEA40u;
    // 0x1eea40: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EEA40u;
    SET_GPR_U32(ctx, 31, 0x1EEA48u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA48u; }
        if (ctx->pc != 0x1EEA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA48u; }
        if (ctx->pc != 0x1EEA48u) { return; }
    }
    ctx->pc = 0x1EEA48u;
label_1eea48:
    // 0x1eea48: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1eea48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eea4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1eea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eea50: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEA50u;
    {
        const bool branch_taken_0x1eea50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EEA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA50u;
            // 0x1eea54: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea50) {
            ctx->pc = 0x1EEA60u;
            goto label_1eea60;
        }
    }
    ctx->pc = 0x1EEA58u;
    // 0x1eea58: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EEA58u;
    SET_GPR_U32(ctx, 31, 0x1EEA60u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA60u; }
        if (ctx->pc != 0x1EEA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA60u; }
        if (ctx->pc != 0x1EEA60u) { return; }
    }
    ctx->pc = 0x1EEA60u;
label_1eea60:
    // 0x1eea60: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1eea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eea64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1eea64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eea68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEA68u;
    {
        const bool branch_taken_0x1eea68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EEA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA68u;
            // 0x1eea6c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea68) {
            ctx->pc = 0x1EEA78u;
            goto label_1eea78;
        }
    }
    ctx->pc = 0x1EEA70u;
    // 0x1eea70: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EEA70u;
    SET_GPR_U32(ctx, 31, 0x1EEA78u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA78u; }
        if (ctx->pc != 0x1EEA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA78u; }
        if (ctx->pc != 0x1EEA78u) { return; }
    }
    ctx->pc = 0x1EEA78u;
label_1eea78:
    // 0x1eea78: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1eea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eea7c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1eea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1eea80: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEA80u;
    {
        const bool branch_taken_0x1eea80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EEA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA80u;
            // 0x1eea84: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea80) {
            ctx->pc = 0x1EEA90u;
            goto label_1eea90;
        }
    }
    ctx->pc = 0x1EEA88u;
    // 0x1eea88: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EEA88u;
    SET_GPR_U32(ctx, 31, 0x1EEA90u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA90u; }
        if (ctx->pc != 0x1EEA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA90u; }
        if (ctx->pc != 0x1EEA90u) { return; }
    }
    ctx->pc = 0x1EEA90u;
label_1eea90:
    // 0x1eea90: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1eea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eea94: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1eea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1eea98: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEA98u;
    {
        const bool branch_taken_0x1eea98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EEA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA98u;
            // 0x1eea9c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea98) {
            ctx->pc = 0x1EEAA8u;
            goto label_1eeaa8;
        }
    }
    ctx->pc = 0x1EEAA0u;
    // 0x1eeaa0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EEAA0u;
    SET_GPR_U32(ctx, 31, 0x1EEAA8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAA8u; }
        if (ctx->pc != 0x1EEAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAA8u; }
        if (ctx->pc != 0x1EEAA8u) { return; }
    }
    ctx->pc = 0x1EEAA8u;
label_1eeaa8:
    // 0x1eeaa8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1eeaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eeaac: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1eeaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1eeab0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEAB0u;
    {
        const bool branch_taken_0x1eeab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EEAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEAB0u;
            // 0x1eeab4: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeab0) {
            ctx->pc = 0x1EEAC0u;
            goto label_1eeac0;
        }
    }
    ctx->pc = 0x1EEAB8u;
    // 0x1eeab8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EEAB8u;
    SET_GPR_U32(ctx, 31, 0x1EEAC0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAC0u; }
        if (ctx->pc != 0x1EEAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAC0u; }
        if (ctx->pc != 0x1EEAC0u) { return; }
    }
    ctx->pc = 0x1EEAC0u;
label_1eeac0:
    // 0x1eeac0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1eeac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eeac4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1eeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eeac8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEAC8u;
    {
        const bool branch_taken_0x1eeac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EEACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEAC8u;
            // 0x1eeacc: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeac8) {
            ctx->pc = 0x1EEAD8u;
            goto label_1eead8;
        }
    }
    ctx->pc = 0x1EEAD0u;
    // 0x1eead0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EEAD0u;
    SET_GPR_U32(ctx, 31, 0x1EEAD8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAD8u; }
        if (ctx->pc != 0x1EEAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAD8u; }
        if (ctx->pc != 0x1EEAD8u) { return; }
    }
    ctx->pc = 0x1EEAD8u;
label_1eead8:
    // 0x1eead8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1eead8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eeadc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1eeadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1eeae0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EEAE0u;
    {
        const bool branch_taken_0x1eeae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eeae0) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EEAE8u;
    // 0x1eeae8: 0xc056054  jal         func_158150
    ctx->pc = 0x1EEAE8u;
    SET_GPR_U32(ctx, 31, 0x1EEAF0u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAF0u; }
        if (ctx->pc != 0x1EEAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAF0u; }
        if (ctx->pc != 0x1EEAF0u) { return; }
    }
    ctx->pc = 0x1EEAF0u;
    // 0x1eeaf0: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1EEAF0u;
    SET_GPR_U32(ctx, 31, 0x1EEAF8u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAF8u; }
        if (ctx->pc != 0x1EEAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAF8u; }
        if (ctx->pc != 0x1EEAF8u) { return; }
    }
    ctx->pc = 0x1EEAF8u;
    // 0x1eeaf8: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1EEAF8u;
    SET_GPR_U32(ctx, 31, 0x1EEB00u);
    ctx->pc = 0x1EEAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEAF8u;
            // 0x1eeafc: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB00u; }
        if (ctx->pc != 0x1EEB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB00u; }
        if (ctx->pc != 0x1EEB00u) { return; }
    }
    ctx->pc = 0x1EEB00u;
    // 0x1eeb00: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1EEB00u;
    SET_GPR_U32(ctx, 31, 0x1EEB08u);
    ctx->pc = 0x1EEB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB00u;
            // 0x1eeb04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB08u; }
        if (ctx->pc != 0x1EEB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB08u; }
        if (ctx->pc != 0x1EEB08u) { return; }
    }
    ctx->pc = 0x1EEB08u;
    // 0x1eeb08: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1EEB08u;
    SET_GPR_U32(ctx, 31, 0x1EEB10u);
    ctx->pc = 0x1EEB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB08u;
            // 0x1eeb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB10u; }
        if (ctx->pc != 0x1EEB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB10u; }
        if (ctx->pc != 0x1EEB10u) { return; }
    }
    ctx->pc = 0x1EEB10u;
    // 0x1eeb10: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1EEB10u;
    {
        const bool branch_taken_0x1eeb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb10) {
            ctx->pc = 0x1EED18u;
            goto label_1eed18;
        }
    }
    ctx->pc = 0x1EEB18u;
label_1eeb18:
    // 0x1eeb18: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1EEB18u;
    SET_GPR_U32(ctx, 31, 0x1EEB20u);
    ctx->pc = 0x1EEB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB18u;
            // 0x1eeb1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB20u; }
        if (ctx->pc != 0x1EEB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB20u; }
        if (ctx->pc != 0x1EEB20u) { return; }
    }
    ctx->pc = 0x1EEB20u;
    // 0x1eeb20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1eeb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eeb24: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1eeb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eeb28: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1EEB28u;
    SET_GPR_U32(ctx, 31, 0x1EEB30u);
    ctx->pc = 0x1EEB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB28u;
            // 0x1eeb2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB30u; }
        if (ctx->pc != 0x1EEB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB30u; }
        if (ctx->pc != 0x1EEB30u) { return; }
    }
    ctx->pc = 0x1EEB30u;
    // 0x1eeb30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1eeb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eeb34: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1eeb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eeb38: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1EEB38u;
    SET_GPR_U32(ctx, 31, 0x1EEB40u);
    ctx->pc = 0x1EEB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB38u;
            // 0x1eeb3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB40u; }
        if (ctx->pc != 0x1EEB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB40u; }
        if (ctx->pc != 0x1EEB40u) { return; }
    }
    ctx->pc = 0x1EEB40u;
    // 0x1eeb40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1eeb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eeb44: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1eeb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eeb48: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1EEB48u;
    SET_GPR_U32(ctx, 31, 0x1EEB50u);
    ctx->pc = 0x1EEB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB48u;
            // 0x1eeb4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB50u; }
        if (ctx->pc != 0x1EEB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB50u; }
        if (ctx->pc != 0x1EEB50u) { return; }
    }
    ctx->pc = 0x1EEB50u;
    // 0x1eeb50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1eeb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eeb54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1eeb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb58: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1EEB58u;
    SET_GPR_U32(ctx, 31, 0x1EEB60u);
    ctx->pc = 0x1EEB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB58u;
            // 0x1eeb5c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB60u; }
        if (ctx->pc != 0x1EEB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB60u; }
        if (ctx->pc != 0x1EEB60u) { return; }
    }
    ctx->pc = 0x1EEB60u;
    // 0x1eeb60: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1eeb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eeb64: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1eeb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1eeb68: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1eeb68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eeb6c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EEB6Cu;
    {
        const bool branch_taken_0x1eeb6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb6c) {
            ctx->pc = 0x1EEBC0u;
            goto label_1eebc0;
        }
    }
    ctx->pc = 0x1EEB74u;
    // 0x1eeb74: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1eeb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1eeb78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEB78u;
    {
        const bool branch_taken_0x1eeb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb78) {
            ctx->pc = 0x1EEB90u;
            goto label_1eeb90;
        }
    }
    ctx->pc = 0x1EEB80u;
    // 0x1eeb80: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1EEB80u;
    SET_GPR_U32(ctx, 31, 0x1EEB88u);
    ctx->pc = 0x1EEB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB80u;
            // 0x1eeb84: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB88u; }
        if (ctx->pc != 0x1EEB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB88u; }
        if (ctx->pc != 0x1EEB88u) { return; }
    }
    ctx->pc = 0x1EEB88u;
    // 0x1eeb88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEB88u;
    {
        const bool branch_taken_0x1eeb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb88) {
            ctx->pc = 0x1EEB98u;
            goto label_1eeb98;
        }
    }
    ctx->pc = 0x1EEB90u;
label_1eeb90:
    // 0x1eeb90: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1EEB90u;
    SET_GPR_U32(ctx, 31, 0x1EEB98u);
    ctx->pc = 0x1EEB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB90u;
            // 0x1eeb94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB98u; }
        if (ctx->pc != 0x1EEB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB98u; }
        if (ctx->pc != 0x1EEB98u) { return; }
    }
    ctx->pc = 0x1EEB98u;
label_1eeb98:
    // 0x1eeb98: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1eeb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1eeb9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEB9Cu;
    {
        const bool branch_taken_0x1eeb9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb9c) {
            ctx->pc = 0x1EEBB0u;
            goto label_1eebb0;
        }
    }
    ctx->pc = 0x1EEBA4u;
    // 0x1eeba4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1EEBA4u;
    {
        const bool branch_taken_0x1eeba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBA4u;
            // 0x1eeba8: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeba4) {
            ctx->pc = 0x1EEC10u;
            goto label_1eec10;
        }
    }
    ctx->pc = 0x1EEBACu;
    // 0x1eebac: 0x0  nop
    ctx->pc = 0x1eebacu;
    // NOP
label_1eebb0:
    // 0x1eebb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eebb4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1EEBB4u;
    {
        const bool branch_taken_0x1eebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBB4u;
            // 0x1eebb8: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eebb4) {
            ctx->pc = 0x1EEC10u;
            goto label_1eec10;
        }
    }
    ctx->pc = 0x1EEBBCu;
    // 0x1eebbc: 0x0  nop
    ctx->pc = 0x1eebbcu;
    // NOP
label_1eebc0:
    // 0x1eebc0: 0x286107d0  slti        $at, $v1, 0x7D0
    ctx->pc = 0x1eebc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1eebc4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1EEBC4u;
    {
        const bool branch_taken_0x1eebc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eebc4) {
            ctx->pc = 0x1EEC00u;
            goto label_1eec00;
        }
    }
    ctx->pc = 0x1EEBCCu;
    // 0x1eebcc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1eebccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eebd0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1eebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eebd4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1eebd4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1eebd8: 0x0  nop
    ctx->pc = 0x1eebd8u;
    // NOP
    // 0x1eebdc: 0x0  nop
    ctx->pc = 0x1eebdcu;
    // NOP
    // 0x1eebe0: 0x1010  mfhi        $v0
    ctx->pc = 0x1eebe0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1eebe4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEBE4u;
    {
        const bool branch_taken_0x1eebe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eebe4) {
            ctx->pc = 0x1EEC00u;
            goto label_1eec00;
        }
    }
    ctx->pc = 0x1EEBECu;
    // 0x1eebec: 0xc060500  jal         func_181400
    ctx->pc = 0x1EEBECu;
    SET_GPR_U32(ctx, 31, 0x1EEBF4u);
    ctx->pc = 0x1EEBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBECu;
            // 0x1eebf0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBF4u; }
        if (ctx->pc != 0x1EEBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBF4u; }
        if (ctx->pc != 0x1EEBF4u) { return; }
    }
    ctx->pc = 0x1EEBF4u;
    // 0x1eebf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEBF4u;
    {
        const bool branch_taken_0x1eebf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eebf4) {
            ctx->pc = 0x1EEC08u;
            goto label_1eec08;
        }
    }
    ctx->pc = 0x1EEBFCu;
    // 0x1eebfc: 0x0  nop
    ctx->pc = 0x1eebfcu;
    // NOP
label_1eec00:
    // 0x1eec00: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1EEC00u;
    SET_GPR_U32(ctx, 31, 0x1EEC08u);
    ctx->pc = 0x1EEC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC00u;
            // 0x1eec04: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC08u; }
        if (ctx->pc != 0x1EEC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC08u; }
        if (ctx->pc != 0x1EEC08u) { return; }
    }
    ctx->pc = 0x1EEC08u;
label_1eec08:
    // 0x1eec08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eec08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eec0c: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1eec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_1eec10:
    // 0x1eec10: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1eec10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eec14: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1eec14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1eec18: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1eec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eec1c: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEC1Cu;
    {
        const bool branch_taken_0x1eec1c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1eec1c) {
            ctx->pc = 0x1EEC38u;
            goto label_1eec38;
        }
    }
    ctx->pc = 0x1EEC24u;
    // 0x1eec24: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1eec24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eec28: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1EEC28u;
    {
        const bool branch_taken_0x1eec28 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EEC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC28u;
            // 0x1eec2c: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec28) {
            ctx->pc = 0x1EEC60u;
            goto label_1eec60;
        }
    }
    ctx->pc = 0x1EEC30u;
    // 0x1eec30: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1EEC30u;
    {
        const bool branch_taken_0x1eec30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1eec30) {
            ctx->pc = 0x1EEC60u;
            goto label_1eec60;
        }
    }
    ctx->pc = 0x1EEC38u;
label_1eec38:
    // 0x1eec38: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1eec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1eec3c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1eec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1eec40: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1eec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1eec44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eec48: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1eec48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1eec4c: 0x8e050124  lw          $a1, 0x124($s0)
    ctx->pc = 0x1eec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1eec50: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1EEC50u;
    SET_GPR_U32(ctx, 31, 0x1EEC58u);
    ctx->pc = 0x1EEC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC50u;
            // 0x1eec54: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC58u; }
        if (ctx->pc != 0x1EEC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC58u; }
        if (ctx->pc != 0x1EEC58u) { return; }
    }
    ctx->pc = 0x1EEC58u;
    // 0x1eec58: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1EEC58u;
    {
        const bool branch_taken_0x1eec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec58) {
            ctx->pc = 0x1EED08u;
            goto label_1eed08;
        }
    }
    ctx->pc = 0x1EEC60u;
label_1eec60:
    // 0x1eec60: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1eec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1eec64: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1eec64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1eec68: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1EEC68u;
    {
        const bool branch_taken_0x1eec68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EEC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC68u;
            // 0x1eec6c: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec68) {
            ctx->pc = 0x1EED08u;
            goto label_1eed08;
        }
    }
    ctx->pc = 0x1EEC70u;
    // 0x1eec70: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1EEC70u;
    {
        const bool branch_taken_0x1eec70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1eec70) {
            ctx->pc = 0x1EED08u;
            goto label_1eed08;
        }
    }
    ctx->pc = 0x1EEC78u;
    // 0x1eec78: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EEC78u;
    {
        const bool branch_taken_0x1eec78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec78) {
            ctx->pc = 0x1EED08u;
            goto label_1eed08;
        }
    }
    ctx->pc = 0x1EEC80u;
    // 0x1eec80: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1eec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1eec84: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1eec84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1eec88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1eec88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eec8c: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1eec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1eec90: 0x24c6d050  addiu       $a2, $a2, -0x2FB0
    ctx->pc = 0x1eec90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955088));
    // 0x1eec94: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1eec94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec98: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1eec98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec9c: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x1eec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1eeca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eeca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eeca4: 0x0  nop
    ctx->pc = 0x1eeca4u;
    // NOP
    // 0x1eeca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eeca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eecac: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1eecacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1eecb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1eecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1eecb4: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x1eecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1eecb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eecb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eecbc: 0x0  nop
    ctx->pc = 0x1eecbcu;
    // NOP
    // 0x1eecc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eecc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eecc4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1eecc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1eecc8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1eecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1eeccc: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1eecccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1eecd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eecd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eecd4: 0x0  nop
    ctx->pc = 0x1eecd4u;
    // NOP
    // 0x1eecd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eecd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eecdc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1eecdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1eece0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1eece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1eece4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1eece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1eece8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eece8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eecec: 0x0  nop
    ctx->pc = 0x1eececu;
    // NOP
    // 0x1eecf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eecf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eecf4: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1EECF4u;
    SET_GPR_U32(ctx, 31, 0x1EECFCu);
    ctx->pc = 0x1EECF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECF4u;
            // 0x1eecf8: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EECFCu; }
        if (ctx->pc != 0x1EECFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EECFCu; }
        if (ctx->pc != 0x1EECFCu) { return; }
    }
    ctx->pc = 0x1EECFCu;
    // 0x1eecfc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1eecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eed00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1eed00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1eed04: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1eed04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1eed08:
    // 0x1eed08: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1eed08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eed0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eed10: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1eed10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1eed14: 0x0  nop
    ctx->pc = 0x1eed14u;
    // NOP
label_1eed18:
    // 0x1eed18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1eed18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eed1c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1eed1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eed20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1eed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1eed24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1eed24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eed28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1eed28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eed2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1eed2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eed30: 0x3e00008  jr          $ra
    ctx->pc = 0x1EED30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EED34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED30u;
            // 0x1eed34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED3C0u: goto label_1ed3c0;
            case 0x1ED3F8u: goto label_1ed3f8;
            case 0x1ED430u: goto label_1ed430;
            case 0x1ED468u: goto label_1ed468;
            case 0x1ED4A0u: goto label_1ed4a0;
            case 0x1ED4D8u: goto label_1ed4d8;
            case 0x1ED528u: goto label_1ed528;
            case 0x1ED548u: goto label_1ed548;
            case 0x1ED568u: goto label_1ed568;
            case 0x1ED580u: goto label_1ed580;
            case 0x1ED5A0u: goto label_1ed5a0;
            case 0x1ED5C0u: goto label_1ed5c0;
            case 0x1ED5D8u: goto label_1ed5d8;
            case 0x1ED680u: goto label_1ed680;
            case 0x1ED6A0u: goto label_1ed6a0;
            case 0x1ED6C0u: goto label_1ed6c0;
            case 0x1ED6E0u: goto label_1ed6e0;
            case 0x1ED6F8u: goto label_1ed6f8;
            case 0x1ED7A0u: goto label_1ed7a0;
            case 0x1ED7C0u: goto label_1ed7c0;
            case 0x1ED7E0u: goto label_1ed7e0;
            case 0x1ED800u: goto label_1ed800;
            case 0x1ED818u: goto label_1ed818;
            case 0x1ED8C0u: goto label_1ed8c0;
            case 0x1ED8E0u: goto label_1ed8e0;
            case 0x1ED900u: goto label_1ed900;
            case 0x1ED920u: goto label_1ed920;
            case 0x1ED938u: goto label_1ed938;
            case 0x1EDA10u: goto label_1eda10;
            case 0x1EDA30u: goto label_1eda30;
            case 0x1EDA50u: goto label_1eda50;
            case 0x1EDA70u: goto label_1eda70;
            case 0x1EDA88u: goto label_1eda88;
            case 0x1EDAA8u: goto label_1edaa8;
            case 0x1EDB18u: goto label_1edb18;
            case 0x1EDB38u: goto label_1edb38;
            case 0x1EDB58u: goto label_1edb58;
            case 0x1EDB78u: goto label_1edb78;
            case 0x1EDB90u: goto label_1edb90;
            case 0x1EDC30u: goto label_1edc30;
            case 0x1EDC50u: goto label_1edc50;
            case 0x1EDC70u: goto label_1edc70;
            case 0x1EDC90u: goto label_1edc90;
            case 0x1EDCA8u: goto label_1edca8;
            case 0x1EDD38u: goto label_1edd38;
            case 0x1EDD58u: goto label_1edd58;
            case 0x1EDD78u: goto label_1edd78;
            case 0x1EDD98u: goto label_1edd98;
            case 0x1EDDB0u: goto label_1eddb0;
            case 0x1EDE98u: goto label_1ede98;
            case 0x1EDEB8u: goto label_1edeb8;
            case 0x1EDED8u: goto label_1eded8;
            case 0x1EDEF8u: goto label_1edef8;
            case 0x1EDF10u: goto label_1edf10;
            case 0x1EDF60u: goto label_1edf60;
            case 0x1EDF80u: goto label_1edf80;
            case 0x1EDFC8u: goto label_1edfc8;
            case 0x1EDFE8u: goto label_1edfe8;
            case 0x1EE008u: goto label_1ee008;
            case 0x1EE020u: goto label_1ee020;
            case 0x1EE040u: goto label_1ee040;
            case 0x1EE088u: goto label_1ee088;
            case 0x1EE098u: goto label_1ee098;
            case 0x1EE0B8u: goto label_1ee0b8;
            case 0x1EE0D8u: goto label_1ee0d8;
            case 0x1EE0F8u: goto label_1ee0f8;
            case 0x1EE110u: goto label_1ee110;
            case 0x1EE150u: goto label_1ee150;
            case 0x1EE168u: goto label_1ee168;
            case 0x1EE178u: goto label_1ee178;
            case 0x1EE188u: goto label_1ee188;
            case 0x1EE1A8u: goto label_1ee1a8;
            case 0x1EE1C8u: goto label_1ee1c8;
            case 0x1EE1E8u: goto label_1ee1e8;
            case 0x1EE200u: goto label_1ee200;
            case 0x1EE240u: goto label_1ee240;
            case 0x1EE278u: goto label_1ee278;
            case 0x1EE2E0u: goto label_1ee2e0;
            case 0x1EE300u: goto label_1ee300;
            case 0x1EE320u: goto label_1ee320;
            case 0x1EE340u: goto label_1ee340;
            case 0x1EE358u: goto label_1ee358;
            case 0x1EE3B0u: goto label_1ee3b0;
            case 0x1EE400u: goto label_1ee400;
            case 0x1EE460u: goto label_1ee460;
            case 0x1EE4B0u: goto label_1ee4b0;
            case 0x1EE4D0u: goto label_1ee4d0;
            case 0x1EE4E0u: goto label_1ee4e0;
            case 0x1EE6C0u: goto label_1ee6c0;
            case 0x1EE708u: goto label_1ee708;
            case 0x1EE750u: goto label_1ee750;
            case 0x1EE788u: goto label_1ee788;
            case 0x1EE7C0u: goto label_1ee7c0;
            case 0x1EE7D8u: goto label_1ee7d8;
            case 0x1EE810u: goto label_1ee810;
            case 0x1EE828u: goto label_1ee828;
            case 0x1EE860u: goto label_1ee860;
            case 0x1EE878u: goto label_1ee878;
            case 0x1EE8B0u: goto label_1ee8b0;
            case 0x1EE8C8u: goto label_1ee8c8;
            case 0x1EE8F0u: goto label_1ee8f0;
            case 0x1EE9B8u: goto label_1ee9b8;
            case 0x1EEA18u: goto label_1eea18;
            case 0x1EEA30u: goto label_1eea30;
            case 0x1EEA48u: goto label_1eea48;
            case 0x1EEA60u: goto label_1eea60;
            case 0x1EEA78u: goto label_1eea78;
            case 0x1EEA90u: goto label_1eea90;
            case 0x1EEAA8u: goto label_1eeaa8;
            case 0x1EEAC0u: goto label_1eeac0;
            case 0x1EEAD8u: goto label_1eead8;
            case 0x1EEB18u: goto label_1eeb18;
            case 0x1EEB90u: goto label_1eeb90;
            case 0x1EEB98u: goto label_1eeb98;
            case 0x1EEBB0u: goto label_1eebb0;
            case 0x1EEBC0u: goto label_1eebc0;
            case 0x1EEC00u: goto label_1eec00;
            case 0x1EEC08u: goto label_1eec08;
            case 0x1EEC10u: goto label_1eec10;
            case 0x1EEC38u: goto label_1eec38;
            case 0x1EEC60u: goto label_1eec60;
            case 0x1EED08u: goto label_1eed08;
            case 0x1EED18u: goto label_1eed18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EED38u;
}

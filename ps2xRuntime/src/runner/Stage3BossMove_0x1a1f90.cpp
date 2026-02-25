#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage3BossMove
// Address: 0x1a1f90 - 0x1a3c9c
void Stage3BossMove_0x1a1f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage3BossMove_0x1a1f90");
#endif

    ctx->pc = 0x1a1f90u;

    // 0x1a1f90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a1f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a1f94: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1a1f98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a1f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a1f9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a1f9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1a1fa0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a1fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a1fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1fa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a1fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1fac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1fb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1fb4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1fb8: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1a1fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1fbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1fc0: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1a1fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1fc4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a1fc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a1fc8: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1a1fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1a1fcc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1fd0: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1a1fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1fd4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1a1fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1fd8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a1fd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a1fdc: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1a1fdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1a1fe0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1fe4: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1a1fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1fe8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a1fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1fec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a1fecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a1ff0: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1a1ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1a1ff4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1ff8: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1a1ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1ffc: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1a1ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2000: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a2000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a2004: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1a2004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1a2008: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a2008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a200c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2010: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2014: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2014u;
    {
        const bool branch_taken_0x1a2014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2014u;
            // 0x1a2018: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2014) {
            ctx->pc = 0x1A2038u;
            goto label_1a2038;
        }
    }
    ctx->pc = 0x1A201Cu;
    // 0x1a201c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a201cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1a2020: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a2020u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1a2024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2028: 0x0  nop
    ctx->pc = 0x1a2028u;
    // NOP
    // 0x1a202c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a202cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a2030: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1a2030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1a2034: 0x0  nop
    ctx->pc = 0x1a2034u;
    // NOP
label_1a2038:
    // 0x1a2038: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a2038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a203c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1a2040: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a2040u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1a2044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2048: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1a2048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a204c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a204cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2050: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2050u;
    {
        const bool branch_taken_0x1a2050 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2050u;
            // 0x1a2054: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2050) {
            ctx->pc = 0x1A2070u;
            goto label_1a2070;
        }
    }
    ctx->pc = 0x1A2058u;
    // 0x1a2058: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a2058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1a205c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a205cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1a2060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2064: 0x0  nop
    ctx->pc = 0x1a2064u;
    // NOP
    // 0x1a2068: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a2068u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a206c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a206cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a2070:
    // 0x1a2070: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a2070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2074: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a2074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1a2078: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a2078u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1a207c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a207cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2080: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1a2080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2084: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2088: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2088u;
    {
        const bool branch_taken_0x1a2088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A208Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2088u;
            // 0x1a208c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2088) {
            ctx->pc = 0x1A20A8u;
            goto label_1a20a8;
        }
    }
    ctx->pc = 0x1A2090u;
    // 0x1a2090: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a2090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1a2094: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a2094u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1a2098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a209c: 0x0  nop
    ctx->pc = 0x1a209cu;
    // NOP
    // 0x1a20a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a20a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a20a4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a20a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a20a8:
    // 0x1a20a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a20a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a20ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a20acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1a20b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a20b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1a20b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a20b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a20b8: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1a20b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a20bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a20bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a20c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A20C0u;
    {
        const bool branch_taken_0x1a20c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A20C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A20C0u;
            // 0x1a20c4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a20c0) {
            ctx->pc = 0x1A20E0u;
            goto label_1a20e0;
        }
    }
    ctx->pc = 0x1A20C8u;
    // 0x1a20c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1a20cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a20ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1a20d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a20d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a20d4: 0x0  nop
    ctx->pc = 0x1a20d4u;
    // NOP
    // 0x1a20d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a20d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a20dc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a20dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a20e0:
    // 0x1a20e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a20e4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1a20e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1a20e8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a20e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a20ec: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a20ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a20f0: 0xc068fec  jal         func_1A3FB0
    ctx->pc = 0x1A20F0u;
    SET_GPR_U32(ctx, 31, 0x1A20F8u);
    ctx->pc = 0x1A20F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A20F0u;
            // 0x1a20f4: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FB0u;
    if (runtime->hasFunction(0x1A3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20F8u; }
        if (ctx->pc != 0x1A20F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1a3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20F8u; }
        if (ctx->pc != 0x1A20F8u) { return; }
    }
    ctx->pc = 0x1A20F8u;
    // 0x1a20f8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a20fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a20fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2100: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a2100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1a2104: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2108: 0xc05b994  jal         func_16E650
    ctx->pc = 0x1A2108u;
    SET_GPR_U32(ctx, 31, 0x1A2110u);
    ctx->pc = 0x1A210Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2108u;
            // 0x1a210c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E650u;
    if (runtime->hasFunction(0x16E650u)) {
        auto targetFn = runtime->lookupFunction(0x16E650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2110u; }
        if (ctx->pc != 0x1A2110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_DeadEnd_0x16e650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2110u; }
        if (ctx->pc != 0x1A2110u) { return; }
    }
    ctx->pc = 0x1A2110u;
    // 0x1a2110: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a2110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2114: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1a2114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a2118: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x1a2118u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a211c: 0x102005a6  beqz        $at, . + 4 + (0x5A6 << 2)
    ctx->pc = 0x1A211Cu;
    {
        const bool branch_taken_0x1a211c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A211Cu;
            // 0x1a2120: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a211c) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2124u;
    // 0x1a2124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a2124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a2128: 0x246328f0  addiu       $v1, $v1, 0x28F0
    ctx->pc = 0x1a2128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10480));
    // 0x1a212c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2130: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a2130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2134: 0x400008  jr          $v0
    ctx->pc = 0x1A2134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2140u: goto label_1a2140;
            case 0x1A2188u: goto label_1a2188;
            case 0x1A21C0u: goto label_1a21c0;
            case 0x1A2220u: goto label_1a2220;
            case 0x1A2AA8u: goto label_1a2aa8;
            case 0x1A2AF8u: goto label_1a2af8;
            case 0x1A30B8u: goto label_1a30b8;
            case 0x1A35F0u: goto label_1a35f0;
            case 0x1A3708u: goto label_1a3708;
            case 0x1A3778u: goto label_1a3778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A213Cu;
    // 0x1a213c: 0x0  nop
    ctx->pc = 0x1a213cu;
    // NOP
label_1a2140:
    // 0x1a2140: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1a2140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x1a2144: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a2144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2148: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a2148u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1a214c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a214cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2150: 0x0  nop
    ctx->pc = 0x1a2150u;
    // NOP
    // 0x1a2154: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a2154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2158: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2158u;
    {
        const bool branch_taken_0x1a2158 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A215Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2158u;
            // 0x1a215c: 0x3c023f7d  lui         $v0, 0x3F7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2158) {
            ctx->pc = 0x1A2178u;
            goto label_1a2178;
        }
    }
    ctx->pc = 0x1A2160u;
    // 0x1a2160: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1a2160u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x1a2164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2168: 0x0  nop
    ctx->pc = 0x1a2168u;
    // NOP
    // 0x1a216c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a216cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a2170: 0x10000591  b           . + 4 + (0x591 << 2)
    ctx->pc = 0x1A2170u;
    {
        const bool branch_taken_0x1a2170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2170u;
            // 0x1a2174: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2170) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2178u;
label_1a2178:
    // 0x1a2178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a217c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1a217cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1a2180: 0x1000058d  b           . + 4 + (0x58D << 2)
    ctx->pc = 0x1A2180u;
    {
        const bool branch_taken_0x1a2180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2180u;
            // 0x1a2184: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2180) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2188u;
label_1a2188:
    // 0x1a2188: 0x3c0239d1  lui         $v0, 0x39D1
    ctx->pc = 0x1a2188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14801 << 16));
    // 0x1a218c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2190: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1a2190u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
    // 0x1a2194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2198: 0x0  nop
    ctx->pc = 0x1a2198u;
    // NOP
    // 0x1a219c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a219cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a21a0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a21a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1a21a4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a21a8: 0x284100b5  slti        $at, $v0, 0xB5
    ctx->pc = 0x1a21a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x1a21ac: 0x14200582  bnez        $at, . + 4 + (0x582 << 2)
    ctx->pc = 0x1A21ACu;
    {
        const bool branch_taken_0x1a21ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A21B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A21ACu;
            // 0x1a21b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a21ac) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A21B4u;
    // 0x1a21b4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1a21b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1a21b8: 0x1000057f  b           . + 4 + (0x57F << 2)
    ctx->pc = 0x1A21B8u;
    {
        const bool branch_taken_0x1a21b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A21BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A21B8u;
            // 0x1a21bc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a21b8) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A21C0u;
label_1a21c0:
    // 0x1a21c0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a21c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a21c4: 0x28410079  slti        $at, $v0, 0x79
    ctx->pc = 0x1a21c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x1a21c8: 0x1420057b  bnez        $at, . + 4 + (0x57B << 2)
    ctx->pc = 0x1A21C8u;
    {
        const bool branch_taken_0x1a21c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a21c8) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A21D0u;
    // 0x1a21d0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1A21D0u;
    SET_GPR_U32(ctx, 31, 0x1A21D8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A21D8u; }
        if (ctx->pc != 0x1A21D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A21D8u; }
        if (ctx->pc != 0x1A21D8u) { return; }
    }
    ctx->pc = 0x1A21D8u;
    // 0x1a21d8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1a21dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a21dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a21e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a21e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a21e4: 0x0  nop
    ctx->pc = 0x1a21e4u;
    // NOP
    // 0x1a21e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a21e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a21ec: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1A21ECu;
    SET_GPR_U32(ctx, 31, 0x1A21F4u);
    ctx->pc = 0x1A21F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A21ECu;
            // 0x1a21f0: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A21F4u; }
        if (ctx->pc != 0x1A21F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A21F4u; }
        if (ctx->pc != 0x1A21F4u) { return; }
    }
    ctx->pc = 0x1A21F4u;
    // 0x1a21f4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1a21f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1a21f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a21fc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1a21fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a2200: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a2200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2204: 0x0  nop
    ctx->pc = 0x1a2204u;
    // NOP
    // 0x1a2208: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a2208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a220c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a220cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1a2210: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1a2210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1a2214: 0x10000568  b           . + 4 + (0x568 << 2)
    ctx->pc = 0x1A2214u;
    {
        const bool branch_taken_0x1a2214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2214u;
            // 0x1a2218: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2214) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A221Cu;
    // 0x1a221c: 0x0  nop
    ctx->pc = 0x1a221cu;
    // NOP
label_1a2220:
    // 0x1a2220: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a2220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1a2224: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a2224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2228: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a2228u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1a222c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a222cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2230: 0x0  nop
    ctx->pc = 0x1a2230u;
    // NOP
    // 0x1a2234: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2238: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1A2238u;
    {
        const bool branch_taken_0x1a2238 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2238u;
            // 0x1a223c: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2238) {
            ctx->pc = 0x1A2268u;
            goto label_1a2268;
        }
    }
    ctx->pc = 0x1A2240u;
    // 0x1a2240: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a2240u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1a2244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2248: 0x0  nop
    ctx->pc = 0x1a2248u;
    // NOP
    // 0x1a224c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a224cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2250: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2250u;
    {
        const bool branch_taken_0x1a2250 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2250u;
            // 0x1a2254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2250) {
            ctx->pc = 0x1A2268u;
            goto label_1a2268;
        }
    }
    ctx->pc = 0x1A2258u;
    // 0x1a2258: 0xc068f28  jal         func_1A3CA0
    ctx->pc = 0x1A2258u;
    SET_GPR_U32(ctx, 31, 0x1A2260u);
    ctx->pc = 0x1A3CA0u;
    if (runtime->hasFunction(0x1A3CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2260u; }
        if (ctx->pc != 0x1A2260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1a3ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2260u; }
        if (ctx->pc != 0x1A2260u) { return; }
    }
    ctx->pc = 0x1A2260u;
    // 0x1a2260: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A2260u;
    {
        const bool branch_taken_0x1a2260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2260) {
            ctx->pc = 0x1A22D8u;
            goto label_1a22d8;
        }
    }
    ctx->pc = 0x1A2268u;
label_1a2268:
    // 0x1a2268: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1a2268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1a226c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2270: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a2270u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1a2274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2278: 0x0  nop
    ctx->pc = 0x1a2278u;
    // NOP
    // 0x1a227c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a227cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2280: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1A2280u;
    {
        const bool branch_taken_0x1a2280 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2280u;
            // 0x1a2284: 0x3c02bba3  lui         $v0, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2280) {
            ctx->pc = 0x1A22B0u;
            goto label_1a22b0;
        }
    }
    ctx->pc = 0x1A2288u;
    // 0x1a2288: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a2288u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1a228c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a228cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2290: 0x0  nop
    ctx->pc = 0x1a2290u;
    // NOP
    // 0x1a2294: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a2294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2298: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2298u;
    {
        const bool branch_taken_0x1a2298 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A229Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2298u;
            // 0x1a229c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2298) {
            ctx->pc = 0x1A22B0u;
            goto label_1a22b0;
        }
    }
    ctx->pc = 0x1A22A0u;
    // 0x1a22a0: 0xc068f28  jal         func_1A3CA0
    ctx->pc = 0x1A22A0u;
    SET_GPR_U32(ctx, 31, 0x1A22A8u);
    ctx->pc = 0x1A3CA0u;
    if (runtime->hasFunction(0x1A3CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22A8u; }
        if (ctx->pc != 0x1A22A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1a3ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22A8u; }
        if (ctx->pc != 0x1A22A8u) { return; }
    }
    ctx->pc = 0x1A22A8u;
    // 0x1a22a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A22A8u;
    {
        const bool branch_taken_0x1a22a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a22a8) {
            ctx->pc = 0x1A22D8u;
            goto label_1a22d8;
        }
    }
    ctx->pc = 0x1A22B0u;
label_1a22b0:
    // 0x1a22b0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x1a22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x1a22b4: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a22b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a22b8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1a22b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x1a22bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a22bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a22c0: 0x0  nop
    ctx->pc = 0x1a22c0u;
    // NOP
    // 0x1a22c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a22c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a22c8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a22c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1a22cc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a22ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a22d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a22d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a22d4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a22d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a22d8:
    // 0x1a22d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a22dc: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1a22dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1a22e0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a22e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a22e4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a22e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a22e8: 0xc068fec  jal         func_1A3FB0
    ctx->pc = 0x1A22E8u;
    SET_GPR_U32(ctx, 31, 0x1A22F0u);
    ctx->pc = 0x1A22ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A22E8u;
            // 0x1a22ec: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FB0u;
    if (runtime->hasFunction(0x1A3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22F0u; }
        if (ctx->pc != 0x1A22F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1a3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22F0u; }
        if (ctx->pc != 0x1A22F0u) { return; }
    }
    ctx->pc = 0x1A22F0u;
    // 0x1a22f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a22f4: 0x122200f4  beq         $s1, $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x1A22F4u;
    {
        const bool branch_taken_0x1a22f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A22F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A22F4u;
            // 0x1a22f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a22f4) {
            ctx->pc = 0x1A26C8u;
            goto label_1a26c8;
        }
    }
    ctx->pc = 0x1A22FCu;
    // 0x1a22fc: 0x1222006c  beq         $s1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1A22FCu;
    {
        const bool branch_taken_0x1a22fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a22fc) {
            ctx->pc = 0x1A24B0u;
            goto label_1a24b0;
        }
    }
    ctx->pc = 0x1A2304u;
    // 0x1a2304: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a2304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2308: 0x12220069  beq         $s1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1A2308u;
    {
        const bool branch_taken_0x1a2308 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A230Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2308u;
            // 0x1a230c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2308) {
            ctx->pc = 0x1A24B0u;
            goto label_1a24b0;
        }
    }
    ctx->pc = 0x1A2310u;
    // 0x1a2310: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2310u;
    {
        const bool branch_taken_0x1a2310 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2310) {
            ctx->pc = 0x1A2328u;
            goto label_1a2328;
        }
    }
    ctx->pc = 0x1A2318u;
    // 0x1a2318: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2318u;
    {
        const bool branch_taken_0x1a2318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2318) {
            ctx->pc = 0x1A2328u;
            goto label_1a2328;
        }
    }
    ctx->pc = 0x1A2320u;
    // 0x1a2320: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x1A2320u;
    {
        const bool branch_taken_0x1a2320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2320) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A2328u;
label_1a2328:
    // 0x1a2328: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A2328u;
    SET_GPR_U32(ctx, 31, 0x1A2330u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2330u; }
        if (ctx->pc != 0x1A2330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2330u; }
        if (ctx->pc != 0x1A2330u) { return; }
    }
    ctx->pc = 0x1A2330u;
    // 0x1a2330: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a2330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a2334: 0x14200024  bnez        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A2334u;
    {
        const bool branch_taken_0x1a2334 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2334) {
            ctx->pc = 0x1A23C8u;
            goto label_1a23c8;
        }
    }
    ctx->pc = 0x1A233Cu;
    // 0x1a233c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a233cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2340: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1a2340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1a2344: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2344u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2348: 0x0  nop
    ctx->pc = 0x1a2348u;
    // NOP
    // 0x1a234c: 0x0  nop
    ctx->pc = 0x1a234cu;
    // NOP
    // 0x1a2350: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2350u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2354: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A2354u;
    {
        const bool branch_taken_0x1a2354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2354) {
            ctx->pc = 0x1A2388u;
            goto label_1a2388;
        }
    }
    ctx->pc = 0x1A235Cu;
    // 0x1a235c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2360: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2364: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a2364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a2368: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2368u;
    SET_GPR_U32(ctx, 31, 0x1A2370u);
    ctx->pc = 0x1A236Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2368u;
            // 0x1a236c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2370u; }
        if (ctx->pc != 0x1A2370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2370u; }
        if (ctx->pc != 0x1A2370u) { return; }
    }
    ctx->pc = 0x1A2370u;
    // 0x1a2370: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2374: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2378: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a2378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a237c: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A237Cu;
    SET_GPR_U32(ctx, 31, 0x1A2384u);
    ctx->pc = 0x1A2380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A237Cu;
            // 0x1a2380: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2384u; }
        if (ctx->pc != 0x1A2384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2384u; }
        if (ctx->pc != 0x1A2384u) { return; }
    }
    ctx->pc = 0x1A2384u;
    // 0x1a2384: 0x0  nop
    ctx->pc = 0x1a2384u;
    // NOP
label_1a2388:
    // 0x1a2388: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a238c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1a238cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1a2390: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2390u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2394: 0x0  nop
    ctx->pc = 0x1a2394u;
    // NOP
    // 0x1a2398: 0x0  nop
    ctx->pc = 0x1a2398u;
    // NOP
    // 0x1a239c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a239cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a23a0: 0x144001b7  bnez        $v0, . + 4 + (0x1B7 << 2)
    ctx->pc = 0x1A23A0u;
    {
        const bool branch_taken_0x1a23a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a23a0) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A23A8u;
    // 0x1a23a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a23a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a23ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a23acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a23b0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a23b4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A23B4u;
    SET_GPR_U32(ctx, 31, 0x1A23BCu);
    ctx->pc = 0x1A23B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A23B4u;
            // 0x1a23b8: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A23BCu; }
        if (ctx->pc != 0x1A23BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A23BCu; }
        if (ctx->pc != 0x1A23BCu) { return; }
    }
    ctx->pc = 0x1A23BCu;
    // 0x1a23bc: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x1A23BCu;
    {
        const bool branch_taken_0x1a23bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a23bc) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A23C4u;
    // 0x1a23c4: 0x0  nop
    ctx->pc = 0x1a23c4u;
    // NOP
label_1a23c8:
    // 0x1a23c8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A23C8u;
    SET_GPR_U32(ctx, 31, 0x1A23D0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A23D0u; }
        if (ctx->pc != 0x1A23D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A23D0u; }
        if (ctx->pc != 0x1A23D0u) { return; }
    }
    ctx->pc = 0x1A23D0u;
    // 0x1a23d0: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A23D0u;
    {
        const bool branch_taken_0x1a23d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a23d0) {
            ctx->pc = 0x1A2460u;
            goto label_1a2460;
        }
    }
    ctx->pc = 0x1A23D8u;
    // 0x1a23d8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a23d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a23dc: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1a23dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1a23e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a23e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a23e4: 0x0  nop
    ctx->pc = 0x1a23e4u;
    // NOP
    // 0x1a23e8: 0x0  nop
    ctx->pc = 0x1a23e8u;
    // NOP
    // 0x1a23ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1a23ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a23f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A23F0u;
    {
        const bool branch_taken_0x1a23f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a23f0) {
            ctx->pc = 0x1A2410u;
            goto label_1a2410;
        }
    }
    ctx->pc = 0x1A23F8u;
    // 0x1a23f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a23fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a23fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2400: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2404: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2404u;
    SET_GPR_U32(ctx, 31, 0x1A240Cu);
    ctx->pc = 0x1A2408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2404u;
            // 0x1a2408: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A240Cu; }
        if (ctx->pc != 0x1A240Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A240Cu; }
        if (ctx->pc != 0x1A240Cu) { return; }
    }
    ctx->pc = 0x1A240Cu;
    // 0x1a240c: 0x0  nop
    ctx->pc = 0x1a240cu;
    // NOP
label_1a2410:
    // 0x1a2410: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2414: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1a2414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1a2418: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2418u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a241c: 0x0  nop
    ctx->pc = 0x1a241cu;
    // NOP
    // 0x1a2420: 0x0  nop
    ctx->pc = 0x1a2420u;
    // NOP
    // 0x1a2424: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2424u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2428: 0x14400195  bnez        $v0, . + 4 + (0x195 << 2)
    ctx->pc = 0x1A2428u;
    {
        const bool branch_taken_0x1a2428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2428) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A2430u;
    // 0x1a2430: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2434: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2438: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a2438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a243c: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A243Cu;
    SET_GPR_U32(ctx, 31, 0x1A2444u);
    ctx->pc = 0x1A2440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A243Cu;
            // 0x1a2440: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2444u; }
        if (ctx->pc != 0x1A2444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2444u; }
        if (ctx->pc != 0x1A2444u) { return; }
    }
    ctx->pc = 0x1A2444u;
    // 0x1a2444: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2448: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a244c: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a2450: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2450u;
    SET_GPR_U32(ctx, 31, 0x1A2458u);
    ctx->pc = 0x1A2454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2450u;
            // 0x1a2454: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2458u; }
        if (ctx->pc != 0x1A2458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2458u; }
        if (ctx->pc != 0x1A2458u) { return; }
    }
    ctx->pc = 0x1A2458u;
    // 0x1a2458: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x1A2458u;
    {
        const bool branch_taken_0x1a2458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2458) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A2460u;
label_1a2460:
    // 0x1a2460: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2464: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1a2464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1a2468: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2468u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a246c: 0x0  nop
    ctx->pc = 0x1a246cu;
    // NOP
    // 0x1a2470: 0x0  nop
    ctx->pc = 0x1a2470u;
    // NOP
    // 0x1a2474: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2474u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2478: 0x14400181  bnez        $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x1A2478u;
    {
        const bool branch_taken_0x1a2478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2478) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A2480u;
    // 0x1a2480: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2484: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2488: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a2488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a248c: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A248Cu;
    SET_GPR_U32(ctx, 31, 0x1A2494u);
    ctx->pc = 0x1A2490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A248Cu;
            // 0x1a2490: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2494u; }
        if (ctx->pc != 0x1A2494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2494u; }
        if (ctx->pc != 0x1A2494u) { return; }
    }
    ctx->pc = 0x1A2494u;
    // 0x1a2494: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2498: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a249c: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a249cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a24a0: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A24A0u;
    SET_GPR_U32(ctx, 31, 0x1A24A8u);
    ctx->pc = 0x1A24A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A24A0u;
            // 0x1a24a4: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24A8u; }
        if (ctx->pc != 0x1A24A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24A8u; }
        if (ctx->pc != 0x1A24A8u) { return; }
    }
    ctx->pc = 0x1A24A8u;
    // 0x1a24a8: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x1A24A8u;
    {
        const bool branch_taken_0x1a24a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a24a8) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A24B0u;
label_1a24b0:
    // 0x1a24b0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A24B0u;
    SET_GPR_U32(ctx, 31, 0x1A24B8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24B8u; }
        if (ctx->pc != 0x1A24B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24B8u; }
        if (ctx->pc != 0x1A24B8u) { return; }
    }
    ctx->pc = 0x1A24B8u;
    // 0x1a24b8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a24b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a24bc: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x1A24BCu;
    {
        const bool branch_taken_0x1a24bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a24bc) {
            ctx->pc = 0x1A25E0u;
            goto label_1a25e0;
        }
    }
    ctx->pc = 0x1A24C4u;
    // 0x1a24c4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a24c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a24c8: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1a24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1a24cc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a24ccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a24d0: 0x0  nop
    ctx->pc = 0x1a24d0u;
    // NOP
    // 0x1a24d4: 0x0  nop
    ctx->pc = 0x1a24d4u;
    // NOP
    // 0x1a24d8: 0x1010  mfhi        $v0
    ctx->pc = 0x1a24d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a24dc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A24DCu;
    {
        const bool branch_taken_0x1a24dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a24dc) {
            ctx->pc = 0x1A2510u;
            goto label_1a2510;
        }
    }
    ctx->pc = 0x1A24E4u;
    // 0x1a24e4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a24e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a24e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a24ec: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a24f0: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A24F0u;
    SET_GPR_U32(ctx, 31, 0x1A24F8u);
    ctx->pc = 0x1A24F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A24F0u;
            // 0x1a24f4: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24F8u; }
        if (ctx->pc != 0x1A24F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24F8u; }
        if (ctx->pc != 0x1A24F8u) { return; }
    }
    ctx->pc = 0x1A24F8u;
    // 0x1a24f8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a24fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a24fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2500: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a2500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a2504: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2504u;
    SET_GPR_U32(ctx, 31, 0x1A250Cu);
    ctx->pc = 0x1A2508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2504u;
            // 0x1a2508: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A250Cu; }
        if (ctx->pc != 0x1A250Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A250Cu; }
        if (ctx->pc != 0x1A250Cu) { return; }
    }
    ctx->pc = 0x1A250Cu;
    // 0x1a250c: 0x0  nop
    ctx->pc = 0x1a250cu;
    // NOP
label_1a2510:
    // 0x1a2510: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2514: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1a2514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1a2518: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1a2518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1a251c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a251cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2520: 0x0  nop
    ctx->pc = 0x1a2520u;
    // NOP
    // 0x1a2524: 0x0  nop
    ctx->pc = 0x1a2524u;
    // NOP
    // 0x1a2528: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2528u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a252c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A252Cu;
    {
        const bool branch_taken_0x1a252c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a252c) {
            ctx->pc = 0x1A2548u;
            goto label_1a2548;
        }
    }
    ctx->pc = 0x1A2534u;
    // 0x1a2534: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2538: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a2538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a253c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a253cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2540: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2540u;
    SET_GPR_U32(ctx, 31, 0x1A2548u);
    ctx->pc = 0x1A2544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2540u;
            // 0x1a2544: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2548u; }
        if (ctx->pc != 0x1A2548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2548u; }
        if (ctx->pc != 0x1A2548u) { return; }
    }
    ctx->pc = 0x1A2548u;
label_1a2548:
    // 0x1a2548: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a254c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1a254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1a2550: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2550u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2554: 0x0  nop
    ctx->pc = 0x1a2554u;
    // NOP
    // 0x1a2558: 0x0  nop
    ctx->pc = 0x1a2558u;
    // NOP
    // 0x1a255c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a255cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2560: 0x14400147  bnez        $v0, . + 4 + (0x147 << 2)
    ctx->pc = 0x1A2560u;
    {
        const bool branch_taken_0x1a2560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2560u;
            // 0x1a2564: 0x3c024296  lui         $v0, 0x4296 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2560) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A2568u;
    // 0x1a2568: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a256c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a256cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2570: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2574: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x1a2574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a2578: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2578u;
    SET_GPR_U32(ctx, 31, 0x1A2580u);
    ctx->pc = 0x1A257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2578u;
            // 0x1a257c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2580u; }
        if (ctx->pc != 0x1A2580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2580u; }
        if (ctx->pc != 0x1A2580u) { return; }
    }
    ctx->pc = 0x1A2580u;
    // 0x1a2580: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1a2580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1a2584: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2588: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a258c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2590: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x1a2590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1a2594: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2594u;
    SET_GPR_U32(ctx, 31, 0x1A259Cu);
    ctx->pc = 0x1A2598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2594u;
            // 0x1a2598: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A259Cu; }
        if (ctx->pc != 0x1A259Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A259Cu; }
        if (ctx->pc != 0x1A259Cu) { return; }
    }
    ctx->pc = 0x1A259Cu;
    // 0x1a259c: 0x3c02c296  lui         $v0, 0xC296
    ctx->pc = 0x1a259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49814 << 16));
    // 0x1a25a0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a25a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a25a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a25a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a25a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a25ac: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x1a25acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a25b0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A25B0u;
    SET_GPR_U32(ctx, 31, 0x1A25B8u);
    ctx->pc = 0x1A25B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A25B0u;
            // 0x1a25b4: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25B8u; }
        if (ctx->pc != 0x1A25B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25B8u; }
        if (ctx->pc != 0x1A25B8u) { return; }
    }
    ctx->pc = 0x1A25B8u;
    // 0x1a25b8: 0x3c02c296  lui         $v0, 0xC296
    ctx->pc = 0x1a25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49814 << 16));
    // 0x1a25bc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a25c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a25c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a25c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a25c8: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x1a25c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1a25cc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A25CCu;
    SET_GPR_U32(ctx, 31, 0x1A25D4u);
    ctx->pc = 0x1A25D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A25CCu;
            // 0x1a25d0: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25D4u; }
        if (ctx->pc != 0x1A25D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25D4u; }
        if (ctx->pc != 0x1A25D4u) { return; }
    }
    ctx->pc = 0x1A25D4u;
    // 0x1a25d4: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x1A25D4u;
    {
        const bool branch_taken_0x1a25d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a25d4) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A25DCu;
    // 0x1a25dc: 0x0  nop
    ctx->pc = 0x1a25dcu;
    // NOP
label_1a25e0:
    // 0x1a25e0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A25E0u;
    SET_GPR_U32(ctx, 31, 0x1A25E8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25E8u; }
        if (ctx->pc != 0x1A25E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25E8u; }
        if (ctx->pc != 0x1A25E8u) { return; }
    }
    ctx->pc = 0x1A25E8u;
    // 0x1a25e8: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A25E8u;
    {
        const bool branch_taken_0x1a25e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a25e8) {
            ctx->pc = 0x1A2678u;
            goto label_1a2678;
        }
    }
    ctx->pc = 0x1A25F0u;
    // 0x1a25f0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a25f4: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1a25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1a25f8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a25f8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a25fc: 0x0  nop
    ctx->pc = 0x1a25fcu;
    // NOP
    // 0x1a2600: 0x0  nop
    ctx->pc = 0x1a2600u;
    // NOP
    // 0x1a2604: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2604u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2608: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2608u;
    {
        const bool branch_taken_0x1a2608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2608) {
            ctx->pc = 0x1A2628u;
            goto label_1a2628;
        }
    }
    ctx->pc = 0x1A2610u;
    // 0x1a2610: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2614: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a2614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2618: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a261c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A261Cu;
    SET_GPR_U32(ctx, 31, 0x1A2624u);
    ctx->pc = 0x1A2620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A261Cu;
            // 0x1a2620: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2624u; }
        if (ctx->pc != 0x1A2624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2624u; }
        if (ctx->pc != 0x1A2624u) { return; }
    }
    ctx->pc = 0x1A2624u;
    // 0x1a2624: 0x0  nop
    ctx->pc = 0x1a2624u;
    // NOP
label_1a2628:
    // 0x1a2628: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a262c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1a262cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1a2630: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2630u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2634: 0x0  nop
    ctx->pc = 0x1a2634u;
    // NOP
    // 0x1a2638: 0x0  nop
    ctx->pc = 0x1a2638u;
    // NOP
    // 0x1a263c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a263cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2640: 0x1440010f  bnez        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x1A2640u;
    {
        const bool branch_taken_0x1a2640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2640) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A2648u;
    // 0x1a2648: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a264c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2650: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a2650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a2654: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2654u;
    SET_GPR_U32(ctx, 31, 0x1A265Cu);
    ctx->pc = 0x1A2658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2654u;
            // 0x1a2658: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A265Cu; }
        if (ctx->pc != 0x1A265Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A265Cu; }
        if (ctx->pc != 0x1A265Cu) { return; }
    }
    ctx->pc = 0x1A265Cu;
    // 0x1a265c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a265cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2660: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2664: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a2664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a2668: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2668u;
    SET_GPR_U32(ctx, 31, 0x1A2670u);
    ctx->pc = 0x1A266Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2668u;
            // 0x1a266c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2670u; }
        if (ctx->pc != 0x1A2670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2670u; }
        if (ctx->pc != 0x1A2670u) { return; }
    }
    ctx->pc = 0x1A2670u;
    // 0x1a2670: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x1A2670u;
    {
        const bool branch_taken_0x1a2670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2670) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A2678u;
label_1a2678:
    // 0x1a2678: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a267c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1a267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1a2680: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2680u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2684: 0x0  nop
    ctx->pc = 0x1a2684u;
    // NOP
    // 0x1a2688: 0x0  nop
    ctx->pc = 0x1a2688u;
    // NOP
    // 0x1a268c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a268cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2690: 0x144000fb  bnez        $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x1A2690u;
    {
        const bool branch_taken_0x1a2690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2690) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A2698u;
    // 0x1a2698: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a269c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a269cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a26a0: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a26a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a26a4: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A26A4u;
    SET_GPR_U32(ctx, 31, 0x1A26ACu);
    ctx->pc = 0x1A26A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A26A4u;
            // 0x1a26a8: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A26ACu; }
        if (ctx->pc != 0x1A26ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A26ACu; }
        if (ctx->pc != 0x1A26ACu) { return; }
    }
    ctx->pc = 0x1A26ACu;
    // 0x1a26ac: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a26acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a26b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a26b4: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a26b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a26b8: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A26B8u;
    SET_GPR_U32(ctx, 31, 0x1A26C0u);
    ctx->pc = 0x1A26BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A26B8u;
            // 0x1a26bc: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A26C0u; }
        if (ctx->pc != 0x1A26C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A26C0u; }
        if (ctx->pc != 0x1A26C0u) { return; }
    }
    ctx->pc = 0x1A26C0u;
    // 0x1a26c0: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x1A26C0u;
    {
        const bool branch_taken_0x1a26c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a26c0) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A26C8u;
label_1a26c8:
    // 0x1a26c8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A26C8u;
    SET_GPR_U32(ctx, 31, 0x1A26D0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A26D0u; }
        if (ctx->pc != 0x1A26D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A26D0u; }
        if (ctx->pc != 0x1A26D0u) { return; }
    }
    ctx->pc = 0x1A26D0u;
    // 0x1a26d0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a26d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a26d4: 0x14200064  bnez        $at, . + 4 + (0x64 << 2)
    ctx->pc = 0x1A26D4u;
    {
        const bool branch_taken_0x1a26d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a26d4) {
            ctx->pc = 0x1A2868u;
            goto label_1a2868;
        }
    }
    ctx->pc = 0x1A26DCu;
    // 0x1a26dc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a26e0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1a26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1a26e4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a26e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a26e8: 0x0  nop
    ctx->pc = 0x1a26e8u;
    // NOP
    // 0x1a26ec: 0x0  nop
    ctx->pc = 0x1a26ecu;
    // NOP
    // 0x1a26f0: 0x1010  mfhi        $v0
    ctx->pc = 0x1a26f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a26f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A26F4u;
    {
        const bool branch_taken_0x1a26f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a26f4) {
            ctx->pc = 0x1A2728u;
            goto label_1a2728;
        }
    }
    ctx->pc = 0x1A26FCu;
    // 0x1a26fc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a26fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2700: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2704: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a2704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a2708: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2708u;
    SET_GPR_U32(ctx, 31, 0x1A2710u);
    ctx->pc = 0x1A270Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2708u;
            // 0x1a270c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2710u; }
        if (ctx->pc != 0x1A2710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2710u; }
        if (ctx->pc != 0x1A2710u) { return; }
    }
    ctx->pc = 0x1A2710u;
    // 0x1a2710: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2714: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2718: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a2718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a271c: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A271Cu;
    SET_GPR_U32(ctx, 31, 0x1A2724u);
    ctx->pc = 0x1A2720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A271Cu;
            // 0x1a2720: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2724u; }
        if (ctx->pc != 0x1A2724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2724u; }
        if (ctx->pc != 0x1A2724u) { return; }
    }
    ctx->pc = 0x1A2724u;
    // 0x1a2724: 0x0  nop
    ctx->pc = 0x1a2724u;
    // NOP
label_1a2728:
    // 0x1a2728: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a272c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1a272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a2730: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x1a2730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a2734: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2734u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2738: 0x0  nop
    ctx->pc = 0x1a2738u;
    // NOP
    // 0x1a273c: 0x0  nop
    ctx->pc = 0x1a273cu;
    // NOP
    // 0x1a2740: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2740u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2744: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2744u;
    {
        const bool branch_taken_0x1a2744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2744) {
            ctx->pc = 0x1A2760u;
            goto label_1a2760;
        }
    }
    ctx->pc = 0x1A274Cu;
    // 0x1a274c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2750: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a2750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2754: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2758: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2758u;
    SET_GPR_U32(ctx, 31, 0x1A2760u);
    ctx->pc = 0x1A275Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2758u;
            // 0x1a275c: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2760u; }
        if (ctx->pc != 0x1A2760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2760u; }
        if (ctx->pc != 0x1A2760u) { return; }
    }
    ctx->pc = 0x1A2760u;
label_1a2760:
    // 0x1a2760: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2764: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1a2764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a2768: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2768u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a276c: 0x0  nop
    ctx->pc = 0x1a276cu;
    // NOP
    // 0x1a2770: 0x0  nop
    ctx->pc = 0x1a2770u;
    // NOP
    // 0x1a2774: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2774u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2778: 0x144000c1  bnez        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x1A2778u;
    {
        const bool branch_taken_0x1a2778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A277Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2778u;
            // 0x1a277c: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2778) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A2780u;
    // 0x1a2780: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2784: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2788: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a278c: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x1a278cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a2790: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2790u;
    SET_GPR_U32(ctx, 31, 0x1A2798u);
    ctx->pc = 0x1A2794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2790u;
            // 0x1a2794: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2798u; }
        if (ctx->pc != 0x1A2798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2798u; }
        if (ctx->pc != 0x1A2798u) { return; }
    }
    ctx->pc = 0x1A2798u;
    // 0x1a2798: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1a2798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1a279c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a279cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a27a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a27a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a27a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a27a8: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x1a27a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1a27ac: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A27ACu;
    SET_GPR_U32(ctx, 31, 0x1A27B4u);
    ctx->pc = 0x1A27B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27ACu;
            // 0x1a27b0: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A27B4u; }
        if (ctx->pc != 0x1A27B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A27B4u; }
        if (ctx->pc != 0x1A27B4u) { return; }
    }
    ctx->pc = 0x1A27B4u;
    // 0x1a27b4: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1a27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1a27b8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a27bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a27bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a27c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a27c4: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x1a27c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a27c8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A27C8u;
    SET_GPR_U32(ctx, 31, 0x1A27D0u);
    ctx->pc = 0x1A27CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27C8u;
            // 0x1a27cc: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A27D0u; }
        if (ctx->pc != 0x1A27D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A27D0u; }
        if (ctx->pc != 0x1A27D0u) { return; }
    }
    ctx->pc = 0x1A27D0u;
    // 0x1a27d0: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1a27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1a27d4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a27d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a27d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a27dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a27e0: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x1a27e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1a27e4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A27E4u;
    SET_GPR_U32(ctx, 31, 0x1A27ECu);
    ctx->pc = 0x1A27E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27E4u;
            // 0x1a27e8: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A27ECu; }
        if (ctx->pc != 0x1A27ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A27ECu; }
        if (ctx->pc != 0x1A27ECu) { return; }
    }
    ctx->pc = 0x1A27ECu;
    // 0x1a27ec: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1a27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1a27f0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a27f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a27f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a27f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a27f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a27fc: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x1a27fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a2800: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2800u;
    SET_GPR_U32(ctx, 31, 0x1A2808u);
    ctx->pc = 0x1A2804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2800u;
            // 0x1a2804: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2808u; }
        if (ctx->pc != 0x1A2808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2808u; }
        if (ctx->pc != 0x1A2808u) { return; }
    }
    ctx->pc = 0x1A2808u;
    // 0x1a2808: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1a2808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1a280c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a280cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2810: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2814: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2818: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x1a2818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1a281c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A281Cu;
    SET_GPR_U32(ctx, 31, 0x1A2824u);
    ctx->pc = 0x1A2820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A281Cu;
            // 0x1a2820: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2824u; }
        if (ctx->pc != 0x1A2824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2824u; }
        if (ctx->pc != 0x1A2824u) { return; }
    }
    ctx->pc = 0x1A2824u;
    // 0x1a2824: 0x3c02c296  lui         $v0, 0xC296
    ctx->pc = 0x1a2824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49814 << 16));
    // 0x1a2828: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a282c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a282cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2830: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2834: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x1a2834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a2838: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2838u;
    SET_GPR_U32(ctx, 31, 0x1A2840u);
    ctx->pc = 0x1A283Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2838u;
            // 0x1a283c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2840u; }
        if (ctx->pc != 0x1A2840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2840u; }
        if (ctx->pc != 0x1A2840u) { return; }
    }
    ctx->pc = 0x1A2840u;
    // 0x1a2840: 0x3c02c296  lui         $v0, 0xC296
    ctx->pc = 0x1a2840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49814 << 16));
    // 0x1a2844: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2848: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a284c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2850: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x1a2850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1a2854: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2854u;
    SET_GPR_U32(ctx, 31, 0x1A285Cu);
    ctx->pc = 0x1A2858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2854u;
            // 0x1a2858: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A285Cu; }
        if (ctx->pc != 0x1A285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A285Cu; }
        if (ctx->pc != 0x1A285Cu) { return; }
    }
    ctx->pc = 0x1A285Cu;
    // 0x1a285c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1A285Cu;
    {
        const bool branch_taken_0x1a285c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a285c) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A2864u;
    // 0x1a2864: 0x0  nop
    ctx->pc = 0x1a2864u;
    // NOP
label_1a2868:
    // 0x1a2868: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A2868u;
    SET_GPR_U32(ctx, 31, 0x1A2870u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2870u; }
        if (ctx->pc != 0x1A2870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2870u; }
        if (ctx->pc != 0x1A2870u) { return; }
    }
    ctx->pc = 0x1A2870u;
    // 0x1a2870: 0x18400063  blez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1A2870u;
    {
        const bool branch_taken_0x1a2870 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a2870) {
            ctx->pc = 0x1A2A00u;
            goto label_1a2a00;
        }
    }
    ctx->pc = 0x1A2878u;
    // 0x1a2878: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a287c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1a287cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1a2880: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2880u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2884: 0x0  nop
    ctx->pc = 0x1a2884u;
    // NOP
    // 0x1a2888: 0x0  nop
    ctx->pc = 0x1a2888u;
    // NOP
    // 0x1a288c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a288cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2890: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A2890u;
    {
        const bool branch_taken_0x1a2890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2890) {
            ctx->pc = 0x1A28C0u;
            goto label_1a28c0;
        }
    }
    ctx->pc = 0x1A2898u;
    // 0x1a2898: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a289c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a28a0: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a28a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a28a4: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A28A4u;
    SET_GPR_U32(ctx, 31, 0x1A28ACu);
    ctx->pc = 0x1A28A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A28A4u;
            // 0x1a28a8: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A28ACu; }
        if (ctx->pc != 0x1A28ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A28ACu; }
        if (ctx->pc != 0x1A28ACu) { return; }
    }
    ctx->pc = 0x1A28ACu;
    // 0x1a28ac: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a28acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a28b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a28b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a28b4: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a28b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a28b8: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A28B8u;
    SET_GPR_U32(ctx, 31, 0x1A28C0u);
    ctx->pc = 0x1A28BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A28B8u;
            // 0x1a28bc: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A28C0u; }
        if (ctx->pc != 0x1A28C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A28C0u; }
        if (ctx->pc != 0x1A28C0u) { return; }
    }
    ctx->pc = 0x1A28C0u;
label_1a28c0:
    // 0x1a28c0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a28c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a28c4: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1a28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1a28c8: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1a28c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1a28cc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a28ccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a28d0: 0x0  nop
    ctx->pc = 0x1a28d0u;
    // NOP
    // 0x1a28d4: 0x0  nop
    ctx->pc = 0x1a28d4u;
    // NOP
    // 0x1a28d8: 0x1010  mfhi        $v0
    ctx->pc = 0x1a28d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a28dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A28DCu;
    {
        const bool branch_taken_0x1a28dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a28dc) {
            ctx->pc = 0x1A28F8u;
            goto label_1a28f8;
        }
    }
    ctx->pc = 0x1A28E4u;
    // 0x1a28e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a28e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a28e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a28ec: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a28ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a28f0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A28F0u;
    SET_GPR_U32(ctx, 31, 0x1A28F8u);
    ctx->pc = 0x1A28F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A28F0u;
            // 0x1a28f4: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A28F8u; }
        if (ctx->pc != 0x1A28F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A28F8u; }
        if (ctx->pc != 0x1A28F8u) { return; }
    }
    ctx->pc = 0x1A28F8u;
label_1a28f8:
    // 0x1a28f8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a28f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a28fc: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1a28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1a2900: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2900u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2904: 0x0  nop
    ctx->pc = 0x1a2904u;
    // NOP
    // 0x1a2908: 0x0  nop
    ctx->pc = 0x1a2908u;
    // NOP
    // 0x1a290c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a290cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2910: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1A2910u;
    {
        const bool branch_taken_0x1a2910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2910u;
            // 0x1a2914: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2910) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A2918u;
    // 0x1a2918: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a291c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a291cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2920: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2924: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x1a2924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a2928: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2928u;
    SET_GPR_U32(ctx, 31, 0x1A2930u);
    ctx->pc = 0x1A292Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2928u;
            // 0x1a292c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2930u; }
        if (ctx->pc != 0x1A2930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2930u; }
        if (ctx->pc != 0x1A2930u) { return; }
    }
    ctx->pc = 0x1A2930u;
    // 0x1a2930: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1a2930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1a2934: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2938: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a293c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2940: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x1a2940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1a2944: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2944u;
    SET_GPR_U32(ctx, 31, 0x1A294Cu);
    ctx->pc = 0x1A2948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2944u;
            // 0x1a2948: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A294Cu; }
        if (ctx->pc != 0x1A294Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A294Cu; }
        if (ctx->pc != 0x1A294Cu) { return; }
    }
    ctx->pc = 0x1A294Cu;
    // 0x1a294c: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1a294cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1a2950: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2954: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2958: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a295c: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x1a295cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a2960: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2960u;
    SET_GPR_U32(ctx, 31, 0x1A2968u);
    ctx->pc = 0x1A2964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2960u;
            // 0x1a2964: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2968u; }
        if (ctx->pc != 0x1A2968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2968u; }
        if (ctx->pc != 0x1A2968u) { return; }
    }
    ctx->pc = 0x1A2968u;
    // 0x1a2968: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1a2968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1a296c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a296cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2970: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2974: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2978: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x1a2978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1a297c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A297Cu;
    SET_GPR_U32(ctx, 31, 0x1A2984u);
    ctx->pc = 0x1A2980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A297Cu;
            // 0x1a2980: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2984u; }
        if (ctx->pc != 0x1A2984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2984u; }
        if (ctx->pc != 0x1A2984u) { return; }
    }
    ctx->pc = 0x1A2984u;
    // 0x1a2984: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1a2984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1a2988: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a298c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a298cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2990: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2994: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x1a2994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a2998: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2998u;
    SET_GPR_U32(ctx, 31, 0x1A29A0u);
    ctx->pc = 0x1A299Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2998u;
            // 0x1a299c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29A0u; }
        if (ctx->pc != 0x1A29A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29A0u; }
        if (ctx->pc != 0x1A29A0u) { return; }
    }
    ctx->pc = 0x1A29A0u;
    // 0x1a29a0: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1a29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1a29a4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a29a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a29a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a29a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a29ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a29acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a29b0: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x1a29b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1a29b4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A29B4u;
    SET_GPR_U32(ctx, 31, 0x1A29BCu);
    ctx->pc = 0x1A29B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A29B4u;
            // 0x1a29b8: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29BCu; }
        if (ctx->pc != 0x1A29BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29BCu; }
        if (ctx->pc != 0x1A29BCu) { return; }
    }
    ctx->pc = 0x1A29BCu;
    // 0x1a29bc: 0x3c02c296  lui         $v0, 0xC296
    ctx->pc = 0x1a29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49814 << 16));
    // 0x1a29c0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a29c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a29c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a29c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a29c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a29c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a29cc: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x1a29ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a29d0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A29D0u;
    SET_GPR_U32(ctx, 31, 0x1A29D8u);
    ctx->pc = 0x1A29D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A29D0u;
            // 0x1a29d4: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29D8u; }
        if (ctx->pc != 0x1A29D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29D8u; }
        if (ctx->pc != 0x1A29D8u) { return; }
    }
    ctx->pc = 0x1A29D8u;
    // 0x1a29d8: 0x3c02c296  lui         $v0, 0xC296
    ctx->pc = 0x1a29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49814 << 16));
    // 0x1a29dc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a29e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a29e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a29e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a29e8: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x1a29e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1a29ec: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A29ECu;
    SET_GPR_U32(ctx, 31, 0x1A29F4u);
    ctx->pc = 0x1A29F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A29ECu;
            // 0x1a29f0: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29F4u; }
        if (ctx->pc != 0x1A29F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29F4u; }
        if (ctx->pc != 0x1A29F4u) { return; }
    }
    ctx->pc = 0x1A29F4u;
    // 0x1a29f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1A29F4u;
    {
        const bool branch_taken_0x1a29f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a29f4) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A29FCu;
    // 0x1a29fc: 0x0  nop
    ctx->pc = 0x1a29fcu;
    // NOP
label_1a2a00:
    // 0x1a2a00: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2a04: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1a2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1a2a08: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2a08u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2a0c: 0x0  nop
    ctx->pc = 0x1a2a0cu;
    // NOP
    // 0x1a2a10: 0x0  nop
    ctx->pc = 0x1a2a10u;
    // NOP
    // 0x1a2a14: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2a14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2a18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2A18u;
    {
        const bool branch_taken_0x1a2a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a18) {
            ctx->pc = 0x1A2A38u;
            goto label_1a2a38;
        }
    }
    ctx->pc = 0x1A2A20u;
    // 0x1a2a20: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2a24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a2a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2a28: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2a2c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1A2A2Cu;
    SET_GPR_U32(ctx, 31, 0x1A2A34u);
    ctx->pc = 0x1A2A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2A2Cu;
            // 0x1a2a30: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A34u; }
        if (ctx->pc != 0x1A2A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A34u; }
        if (ctx->pc != 0x1A2A34u) { return; }
    }
    ctx->pc = 0x1A2A34u;
    // 0x1a2a34: 0x0  nop
    ctx->pc = 0x1a2a34u;
    // NOP
label_1a2a38:
    // 0x1a2a38: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2a3c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1a2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1a2a40: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2a40u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2a44: 0x0  nop
    ctx->pc = 0x1a2a44u;
    // NOP
    // 0x1a2a48: 0x0  nop
    ctx->pc = 0x1a2a48u;
    // NOP
    // 0x1a2a4c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2a4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2a50: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A2A50u;
    {
        const bool branch_taken_0x1a2a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a50) {
            ctx->pc = 0x1A2A80u;
            goto label_1a2a80;
        }
    }
    ctx->pc = 0x1A2A58u;
    // 0x1a2a58: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2a5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2a60: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a2a64: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2A64u;
    SET_GPR_U32(ctx, 31, 0x1A2A6Cu);
    ctx->pc = 0x1A2A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2A64u;
            // 0x1a2a68: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A6Cu; }
        if (ctx->pc != 0x1A2A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A6Cu; }
        if (ctx->pc != 0x1A2A6Cu) { return; }
    }
    ctx->pc = 0x1A2A6Cu;
    // 0x1a2a6c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2a70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2a74: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a2a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a2a78: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2A78u;
    SET_GPR_U32(ctx, 31, 0x1A2A80u);
    ctx->pc = 0x1A2A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2A78u;
            // 0x1a2a7c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A80u; }
        if (ctx->pc != 0x1A2A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A80u; }
        if (ctx->pc != 0x1A2A80u) { return; }
    }
    ctx->pc = 0x1A2A80u;
label_1a2a80:
    // 0x1a2a80: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2a84: 0x28410259  slti        $at, $v0, 0x259
    ctx->pc = 0x1a2a84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)601) ? 1 : 0);
    // 0x1a2a88: 0x1420034b  bnez        $at, . + 4 + (0x34B << 2)
    ctx->pc = 0x1A2A88u;
    {
        const bool branch_taken_0x1a2a88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a88) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2A90u;
    // 0x1a2a90: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a2a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1a2a94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a2a98: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1a2a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1a2a9c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1a2a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1a2aa0: 0x10000345  b           . + 4 + (0x345 << 2)
    ctx->pc = 0x1A2AA0u;
    {
        const bool branch_taken_0x1a2aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2AA0u;
            // 0x1a2aa4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2aa0) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2AA8u;
label_1a2aa8:
    // 0x1a2aa8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2ab0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2AB0u;
    {
        const bool branch_taken_0x1a2ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2ab0) {
            ctx->pc = 0x1A2AD8u;
            goto label_1a2ad8;
        }
    }
    ctx->pc = 0x1A2AB8u;
    // 0x1a2ab8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2abc: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2ac0: 0xc06536c  jal         func_194DB0
    ctx->pc = 0x1A2AC0u;
    SET_GPR_U32(ctx, 31, 0x1A2AC8u);
    ctx->pc = 0x1A2AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2AC0u;
            // 0x1a2ac4: 0x24450050  addiu       $a1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194DB0u;
    if (runtime->hasFunction(0x194DB0u)) {
        auto targetFn = runtime->lookupFunction(0x194DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2AC8u; }
        if (ctx->pc != 0x1A2AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_boss_0x194db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2AC8u; }
        if (ctx->pc != 0x1A2AC8u) { return; }
    }
    ctx->pc = 0x1A2AC8u;
    // 0x1a2ac8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2acc: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2ad0: 0xc065390  jal         func_194E40
    ctx->pc = 0x1A2AD0u;
    SET_GPR_U32(ctx, 31, 0x1A2AD8u);
    ctx->pc = 0x1A2AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2AD0u;
            // 0x1a2ad4: 0x24450050  addiu       $a1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194E40u;
    if (runtime->hasFunction(0x194E40u)) {
        auto targetFn = runtime->lookupFunction(0x194E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2AD8u; }
        if (ctx->pc != 0x1A2AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Ryushi_Add_0x194e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2AD8u; }
        if (ctx->pc != 0x1A2AD8u) { return; }
    }
    ctx->pc = 0x1A2AD8u;
label_1a2ad8:
    // 0x1a2ad8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2adc: 0x2841005b  slti        $at, $v0, 0x5B
    ctx->pc = 0x1a2adcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x1a2ae0: 0x14200335  bnez        $at, . + 4 + (0x335 << 2)
    ctx->pc = 0x1A2AE0u;
    {
        const bool branch_taken_0x1a2ae0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ae0) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2AE8u;
    // 0x1a2ae8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a2ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1a2aec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a2af0: 0x10000331  b           . + 4 + (0x331 << 2)
    ctx->pc = 0x1A2AF0u;
    {
        const bool branch_taken_0x1a2af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2AF0u;
            // 0x1a2af4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2af0) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2AF8u;
label_1a2af8:
    // 0x1a2af8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a2af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2afc: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1a2afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1a2b00: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a2b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a2b04: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a2b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a2b08: 0xc068fec  jal         func_1A3FB0
    ctx->pc = 0x1A2B08u;
    SET_GPR_U32(ctx, 31, 0x1A2B10u);
    ctx->pc = 0x1A2B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B08u;
            // 0x1a2b0c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FB0u;
    if (runtime->hasFunction(0x1A3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B10u; }
        if (ctx->pc != 0x1A2B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1a3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B10u; }
        if (ctx->pc != 0x1A2B10u) { return; }
    }
    ctx->pc = 0x1A2B10u;
    // 0x1a2b10: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2b14: 0x284100b5  slti        $at, $v0, 0xB5
    ctx->pc = 0x1a2b14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x1a2b18: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2B18u;
    {
        const bool branch_taken_0x1a2b18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2b18) {
            ctx->pc = 0x1A2B38u;
            goto label_1a2b38;
        }
    }
    ctx->pc = 0x1A2B20u;
    // 0x1a2b20: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a2b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1a2b24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2b28: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1a2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1a2b2c: 0xc068f28  jal         func_1A3CA0
    ctx->pc = 0x1A2B2Cu;
    SET_GPR_U32(ctx, 31, 0x1A2B34u);
    ctx->pc = 0x1A2B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B2Cu;
            // 0x1a2b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3CA0u;
    if (runtime->hasFunction(0x1A3CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B34u; }
        if (ctx->pc != 0x1A2B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1a3ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B34u; }
        if (ctx->pc != 0x1A2B34u) { return; }
    }
    ctx->pc = 0x1A2B34u;
    // 0x1a2b34: 0x0  nop
    ctx->pc = 0x1a2b34u;
    // NOP
label_1a2b38:
    // 0x1a2b38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a2b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a2b3c: 0x122200da  beq         $s1, $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x1A2B3Cu;
    {
        const bool branch_taken_0x1a2b3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A2B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B3Cu;
            // 0x1a2b40: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b3c) {
            ctx->pc = 0x1A2EA8u;
            goto label_1a2ea8;
        }
    }
    ctx->pc = 0x1A2B44u;
    // 0x1a2b44: 0x12220074  beq         $s1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1A2B44u;
    {
        const bool branch_taken_0x1a2b44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2b44) {
            ctx->pc = 0x1A2D18u;
            goto label_1a2d18;
        }
    }
    ctx->pc = 0x1A2B4Cu;
    // 0x1a2b4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2b50: 0x12220021  beq         $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A2B50u;
    {
        const bool branch_taken_0x1a2b50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A2B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B50u;
            // 0x1a2b54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b50) {
            ctx->pc = 0x1A2BD8u;
            goto label_1a2bd8;
        }
    }
    ctx->pc = 0x1A2B58u;
    // 0x1a2b58: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2B58u;
    {
        const bool branch_taken_0x1a2b58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2b58) {
            ctx->pc = 0x1A2B70u;
            goto label_1a2b70;
        }
    }
    ctx->pc = 0x1A2B60u;
    // 0x1a2b60: 0x12200315  beqz        $s1, . + 4 + (0x315 << 2)
    ctx->pc = 0x1A2B60u;
    {
        const bool branch_taken_0x1a2b60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2b60) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2B68u;
    // 0x1a2b68: 0x10000313  b           . + 4 + (0x313 << 2)
    ctx->pc = 0x1A2B68u;
    {
        const bool branch_taken_0x1a2b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2b68) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2B70u;
label_1a2b70:
    // 0x1a2b70: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A2B70u;
    SET_GPR_U32(ctx, 31, 0x1A2B78u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B78u; }
        if (ctx->pc != 0x1A2B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B78u; }
        if (ctx->pc != 0x1A2B78u) { return; }
    }
    ctx->pc = 0x1A2B78u;
    // 0x1a2b78: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a2b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a2b7c: 0x1420030e  bnez        $at, . + 4 + (0x30E << 2)
    ctx->pc = 0x1A2B7Cu;
    {
        const bool branch_taken_0x1a2b7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2b7c) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2B84u;
    // 0x1a2b84: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2b88: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1a2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1a2b8c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2b8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2b90: 0x0  nop
    ctx->pc = 0x1a2b90u;
    // NOP
    // 0x1a2b94: 0x0  nop
    ctx->pc = 0x1a2b94u;
    // NOP
    // 0x1a2b98: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2b98u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2b9c: 0x14400306  bnez        $v0, . + 4 + (0x306 << 2)
    ctx->pc = 0x1A2B9Cu;
    {
        const bool branch_taken_0x1a2b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2b9c) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2BA4u;
    // 0x1a2ba4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2ba8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2bac: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a2bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a2bb0: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2BB0u;
    SET_GPR_U32(ctx, 31, 0x1A2BB8u);
    ctx->pc = 0x1A2BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2BB0u;
            // 0x1a2bb4: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BB8u; }
        if (ctx->pc != 0x1A2BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BB8u; }
        if (ctx->pc != 0x1A2BB8u) { return; }
    }
    ctx->pc = 0x1A2BB8u;
    // 0x1a2bb8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2bbc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2bc0: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a2bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a2bc4: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2BC4u;
    SET_GPR_U32(ctx, 31, 0x1A2BCCu);
    ctx->pc = 0x1A2BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2BC4u;
            // 0x1a2bc8: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BCCu; }
        if (ctx->pc != 0x1A2BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BCCu; }
        if (ctx->pc != 0x1A2BCCu) { return; }
    }
    ctx->pc = 0x1A2BCCu;
    // 0x1a2bcc: 0x100002fa  b           . + 4 + (0x2FA << 2)
    ctx->pc = 0x1A2BCCu;
    {
        const bool branch_taken_0x1a2bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2bcc) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2BD4u;
    // 0x1a2bd4: 0x0  nop
    ctx->pc = 0x1a2bd4u;
    // NOP
label_1a2bd8:
    // 0x1a2bd8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A2BD8u;
    SET_GPR_U32(ctx, 31, 0x1A2BE0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BE0u; }
        if (ctx->pc != 0x1A2BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BE0u; }
        if (ctx->pc != 0x1A2BE0u) { return; }
    }
    ctx->pc = 0x1A2BE0u;
    // 0x1a2be0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a2be0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a2be4: 0x1420002a  bnez        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A2BE4u;
    {
        const bool branch_taken_0x1a2be4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2be4) {
            ctx->pc = 0x1A2C90u;
            goto label_1a2c90;
        }
    }
    ctx->pc = 0x1A2BECu;
    // 0x1a2bec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2bf0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1a2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1a2bf4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2bf4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2bf8: 0x0  nop
    ctx->pc = 0x1a2bf8u;
    // NOP
    // 0x1a2bfc: 0x0  nop
    ctx->pc = 0x1a2bfcu;
    // NOP
    // 0x1a2c00: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2c00u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2c04: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A2C04u;
    {
        const bool branch_taken_0x1a2c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c04) {
            ctx->pc = 0x1A2C38u;
            goto label_1a2c38;
        }
    }
    ctx->pc = 0x1A2C0Cu;
    // 0x1a2c0c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2c10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2c14: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a2c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a2c18: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2C18u;
    SET_GPR_U32(ctx, 31, 0x1A2C20u);
    ctx->pc = 0x1A2C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C18u;
            // 0x1a2c1c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C20u; }
        if (ctx->pc != 0x1A2C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C20u; }
        if (ctx->pc != 0x1A2C20u) { return; }
    }
    ctx->pc = 0x1A2C20u;
    // 0x1a2c20: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2c24: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2c28: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a2c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a2c2c: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2C2Cu;
    SET_GPR_U32(ctx, 31, 0x1A2C34u);
    ctx->pc = 0x1A2C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C2Cu;
            // 0x1a2c30: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C34u; }
        if (ctx->pc != 0x1A2C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C34u; }
        if (ctx->pc != 0x1A2C34u) { return; }
    }
    ctx->pc = 0x1A2C34u;
    // 0x1a2c34: 0x0  nop
    ctx->pc = 0x1a2c34u;
    // NOP
label_1a2c38:
    // 0x1a2c38: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2c3c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1a2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a2c40: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2C40u;
    {
        const bool branch_taken_0x1a2c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2c40) {
            ctx->pc = 0x1A2C60u;
            goto label_1a2c60;
        }
    }
    ctx->pc = 0x1A2C48u;
    // 0x1a2c48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2c4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a2c4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2c50: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2c54: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a2c54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a2c58: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2C58u;
    SET_GPR_U32(ctx, 31, 0x1A2C60u);
    ctx->pc = 0x1A2C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C58u;
            // 0x1a2c5c: 0x24450050  addiu       $a1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C60u; }
        if (ctx->pc != 0x1A2C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C60u; }
        if (ctx->pc != 0x1A2C60u) { return; }
    }
    ctx->pc = 0x1A2C60u;
label_1a2c60:
    // 0x1a2c60: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2c64: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1a2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1a2c68: 0x146202d3  bne         $v1, $v0, . + 4 + (0x2D3 << 2)
    ctx->pc = 0x1A2C68u;
    {
        const bool branch_taken_0x1a2c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2c68) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2C70u;
    // 0x1a2c70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2c74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a2c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2c78: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2c7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a2c7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a2c80: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2C80u;
    SET_GPR_U32(ctx, 31, 0x1A2C88u);
    ctx->pc = 0x1A2C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C80u;
            // 0x1a2c84: 0x24450050  addiu       $a1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C88u; }
        if (ctx->pc != 0x1A2C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C88u; }
        if (ctx->pc != 0x1A2C88u) { return; }
    }
    ctx->pc = 0x1A2C88u;
    // 0x1a2c88: 0x100002cb  b           . + 4 + (0x2CB << 2)
    ctx->pc = 0x1A2C88u;
    {
        const bool branch_taken_0x1a2c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c88) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2C90u;
label_1a2c90:
    // 0x1a2c90: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A2C90u;
    SET_GPR_U32(ctx, 31, 0x1A2C98u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C98u; }
        if (ctx->pc != 0x1A2C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C98u; }
        if (ctx->pc != 0x1A2C98u) { return; }
    }
    ctx->pc = 0x1A2C98u;
    // 0x1a2c98: 0x184002c7  blez        $v0, . + 4 + (0x2C7 << 2)
    ctx->pc = 0x1A2C98u;
    {
        const bool branch_taken_0x1a2c98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a2c98) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2CA0u;
    // 0x1a2ca0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2ca4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1a2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1a2ca8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2ca8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2cac: 0x0  nop
    ctx->pc = 0x1a2cacu;
    // NOP
    // 0x1a2cb0: 0x0  nop
    ctx->pc = 0x1a2cb0u;
    // NOP
    // 0x1a2cb4: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2cb4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2cb8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A2CB8u;
    {
        const bool branch_taken_0x1a2cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2cb8) {
            ctx->pc = 0x1A2CE8u;
            goto label_1a2ce8;
        }
    }
    ctx->pc = 0x1A2CC0u;
    // 0x1a2cc0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2cc4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2cc8: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a2ccc: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2CCCu;
    SET_GPR_U32(ctx, 31, 0x1A2CD4u);
    ctx->pc = 0x1A2CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2CCCu;
            // 0x1a2cd0: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2CD4u; }
        if (ctx->pc != 0x1A2CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2CD4u; }
        if (ctx->pc != 0x1A2CD4u) { return; }
    }
    ctx->pc = 0x1A2CD4u;
    // 0x1a2cd4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2cd8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2cdc: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a2cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a2ce0: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2CE0u;
    SET_GPR_U32(ctx, 31, 0x1A2CE8u);
    ctx->pc = 0x1A2CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2CE0u;
            // 0x1a2ce4: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2CE8u; }
        if (ctx->pc != 0x1A2CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2CE8u; }
        if (ctx->pc != 0x1A2CE8u) { return; }
    }
    ctx->pc = 0x1A2CE8u;
label_1a2ce8:
    // 0x1a2ce8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2cec: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1a2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a2cf0: 0x146202b1  bne         $v1, $v0, . + 4 + (0x2B1 << 2)
    ctx->pc = 0x1A2CF0u;
    {
        const bool branch_taken_0x1a2cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2cf0) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2CF8u;
    // 0x1a2cf8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2cfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a2cfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2d00: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2d04: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a2d04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a2d08: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2D08u;
    SET_GPR_U32(ctx, 31, 0x1A2D10u);
    ctx->pc = 0x1A2D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2D08u;
            // 0x1a2d0c: 0x24450050  addiu       $a1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D10u; }
        if (ctx->pc != 0x1A2D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D10u; }
        if (ctx->pc != 0x1A2D10u) { return; }
    }
    ctx->pc = 0x1A2D10u;
    // 0x1a2d10: 0x100002a9  b           . + 4 + (0x2A9 << 2)
    ctx->pc = 0x1A2D10u;
    {
        const bool branch_taken_0x1a2d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d10) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2D18u;
label_1a2d18:
    // 0x1a2d18: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A2D18u;
    SET_GPR_U32(ctx, 31, 0x1A2D20u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D20u; }
        if (ctx->pc != 0x1A2D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D20u; }
        if (ctx->pc != 0x1A2D20u) { return; }
    }
    ctx->pc = 0x1A2D20u;
    // 0x1a2d20: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a2d20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a2d24: 0x14200036  bnez        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1A2D24u;
    {
        const bool branch_taken_0x1a2d24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d24) {
            ctx->pc = 0x1A2E00u;
            goto label_1a2e00;
        }
    }
    ctx->pc = 0x1A2D2Cu;
    // 0x1a2d2c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2d30: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a2d34: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2d34u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2d38: 0x0  nop
    ctx->pc = 0x1a2d38u;
    // NOP
    // 0x1a2d3c: 0x0  nop
    ctx->pc = 0x1a2d3cu;
    // NOP
    // 0x1a2d40: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2d40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2d44: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A2D44u;
    {
        const bool branch_taken_0x1a2d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d44) {
            ctx->pc = 0x1A2D78u;
            goto label_1a2d78;
        }
    }
    ctx->pc = 0x1A2D4Cu;
    // 0x1a2d4c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2d50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2d54: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a2d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a2d58: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2D58u;
    SET_GPR_U32(ctx, 31, 0x1A2D60u);
    ctx->pc = 0x1A2D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2D58u;
            // 0x1a2d5c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D60u; }
        if (ctx->pc != 0x1A2D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D60u; }
        if (ctx->pc != 0x1A2D60u) { return; }
    }
    ctx->pc = 0x1A2D60u;
    // 0x1a2d60: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2d64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2d68: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a2d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a2d6c: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2D6Cu;
    SET_GPR_U32(ctx, 31, 0x1A2D74u);
    ctx->pc = 0x1A2D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2D6Cu;
            // 0x1a2d70: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D74u; }
        if (ctx->pc != 0x1A2D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D74u; }
        if (ctx->pc != 0x1A2D74u) { return; }
    }
    ctx->pc = 0x1A2D74u;
    // 0x1a2d74: 0x0  nop
    ctx->pc = 0x1a2d74u;
    // NOP
label_1a2d78:
    // 0x1a2d78: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2d7c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a2d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a2d80: 0x1462028d  bne         $v1, $v0, . + 4 + (0x28D << 2)
    ctx->pc = 0x1A2D80u;
    {
        const bool branch_taken_0x1a2d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2d80) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2D88u;
    // 0x1a2d88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2d8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a2d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2d90: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2d94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2d98: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a2d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2d9c: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2D9Cu;
    SET_GPR_U32(ctx, 31, 0x1A2DA4u);
    ctx->pc = 0x1A2DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2D9Cu;
            // 0x1a2da0: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DA4u; }
        if (ctx->pc != 0x1A2DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DA4u; }
        if (ctx->pc != 0x1A2DA4u) { return; }
    }
    ctx->pc = 0x1A2DA4u;
    // 0x1a2da4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2da8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a2dac: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2db0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2db4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a2db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2db8: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2DB8u;
    SET_GPR_U32(ctx, 31, 0x1A2DC0u);
    ctx->pc = 0x1A2DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2DB8u;
            // 0x1a2dbc: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DC0u; }
        if (ctx->pc != 0x1A2DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DC0u; }
        if (ctx->pc != 0x1A2DC0u) { return; }
    }
    ctx->pc = 0x1A2DC0u;
    // 0x1a2dc0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2dc4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a2dc8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2dcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2dd0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a2dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2dd4: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2DD4u;
    SET_GPR_U32(ctx, 31, 0x1A2DDCu);
    ctx->pc = 0x1A2DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2DD4u;
            // 0x1a2dd8: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DDCu; }
        if (ctx->pc != 0x1A2DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DDCu; }
        if (ctx->pc != 0x1A2DDCu) { return; }
    }
    ctx->pc = 0x1A2DDCu;
    // 0x1a2ddc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a2ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2de0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1a2de4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2de8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2dec: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a2decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2df0: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2DF0u;
    SET_GPR_U32(ctx, 31, 0x1A2DF8u);
    ctx->pc = 0x1A2DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2DF0u;
            // 0x1a2df4: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DF8u; }
        if (ctx->pc != 0x1A2DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DF8u; }
        if (ctx->pc != 0x1A2DF8u) { return; }
    }
    ctx->pc = 0x1A2DF8u;
    // 0x1a2df8: 0x1000026f  b           . + 4 + (0x26F << 2)
    ctx->pc = 0x1A2DF8u;
    {
        const bool branch_taken_0x1a2df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2df8) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2E00u;
label_1a2e00:
    // 0x1a2e00: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A2E00u;
    SET_GPR_U32(ctx, 31, 0x1A2E08u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E08u; }
        if (ctx->pc != 0x1A2E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E08u; }
        if (ctx->pc != 0x1A2E08u) { return; }
    }
    ctx->pc = 0x1A2E08u;
    // 0x1a2e08: 0x1840026b  blez        $v0, . + 4 + (0x26B << 2)
    ctx->pc = 0x1A2E08u;
    {
        const bool branch_taken_0x1a2e08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a2e08) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2E10u;
    // 0x1a2e10: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2e14: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1a2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a2e18: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2e18u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2e1c: 0x0  nop
    ctx->pc = 0x1a2e1cu;
    // NOP
    // 0x1a2e20: 0x0  nop
    ctx->pc = 0x1a2e20u;
    // NOP
    // 0x1a2e24: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2e24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2e28: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A2E28u;
    {
        const bool branch_taken_0x1a2e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2e28) {
            ctx->pc = 0x1A2E58u;
            goto label_1a2e58;
        }
    }
    ctx->pc = 0x1A2E30u;
    // 0x1a2e30: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2e34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2e38: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a2e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a2e3c: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A2E44u);
    ctx->pc = 0x1A2E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E3Cu;
            // 0x1a2e40: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E44u; }
        if (ctx->pc != 0x1A2E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E44u; }
        if (ctx->pc != 0x1A2E44u) { return; }
    }
    ctx->pc = 0x1A2E44u;
    // 0x1a2e44: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2e48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2e4c: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a2e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a2e50: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2E50u;
    SET_GPR_U32(ctx, 31, 0x1A2E58u);
    ctx->pc = 0x1A2E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E50u;
            // 0x1a2e54: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E58u; }
        if (ctx->pc != 0x1A2E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E58u; }
        if (ctx->pc != 0x1A2E58u) { return; }
    }
    ctx->pc = 0x1A2E58u;
label_1a2e58:
    // 0x1a2e58: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2e5c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a2e60: 0x14620255  bne         $v1, $v0, . + 4 + (0x255 << 2)
    ctx->pc = 0x1A2E60u;
    {
        const bool branch_taken_0x1a2e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2e60) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2E68u;
    // 0x1a2e68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a2e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2e6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2e70: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2e74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2e78: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a2e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2e7c: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2E7Cu;
    SET_GPR_U32(ctx, 31, 0x1A2E84u);
    ctx->pc = 0x1A2E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E7Cu;
            // 0x1a2e80: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E84u; }
        if (ctx->pc != 0x1A2E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E84u; }
        if (ctx->pc != 0x1A2E84u) { return; }
    }
    ctx->pc = 0x1A2E84u;
    // 0x1a2e84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a2e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2e88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a2e8c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2e90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2e94: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a2e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2e98: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2E98u;
    SET_GPR_U32(ctx, 31, 0x1A2EA0u);
    ctx->pc = 0x1A2E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E98u;
            // 0x1a2e9c: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2EA0u; }
        if (ctx->pc != 0x1A2EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2EA0u; }
        if (ctx->pc != 0x1A2EA0u) { return; }
    }
    ctx->pc = 0x1A2EA0u;
    // 0x1a2ea0: 0x10000245  b           . + 4 + (0x245 << 2)
    ctx->pc = 0x1A2EA0u;
    {
        const bool branch_taken_0x1a2ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ea0) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2EA8u;
label_1a2ea8:
    // 0x1a2ea8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A2EA8u;
    SET_GPR_U32(ctx, 31, 0x1A2EB0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2EB0u; }
        if (ctx->pc != 0x1A2EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2EB0u; }
        if (ctx->pc != 0x1A2EB0u) { return; }
    }
    ctx->pc = 0x1A2EB0u;
    // 0x1a2eb0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a2eb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a2eb4: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x1A2EB4u;
    {
        const bool branch_taken_0x1a2eb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2eb4) {
            ctx->pc = 0x1A2FD8u;
            goto label_1a2fd8;
        }
    }
    ctx->pc = 0x1A2EBCu;
    // 0x1a2ebc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2ec0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a2ec4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2ec4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2ec8: 0x0  nop
    ctx->pc = 0x1a2ec8u;
    // NOP
    // 0x1a2ecc: 0x0  nop
    ctx->pc = 0x1a2eccu;
    // NOP
    // 0x1a2ed0: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2ed0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2ed4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A2ED4u;
    {
        const bool branch_taken_0x1a2ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ed4) {
            ctx->pc = 0x1A2F08u;
            goto label_1a2f08;
        }
    }
    ctx->pc = 0x1A2EDCu;
    // 0x1a2edc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2ee0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2ee4: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a2ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a2ee8: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2EE8u;
    SET_GPR_U32(ctx, 31, 0x1A2EF0u);
    ctx->pc = 0x1A2EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2EE8u;
            // 0x1a2eec: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2EF0u; }
        if (ctx->pc != 0x1A2EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2EF0u; }
        if (ctx->pc != 0x1A2EF0u) { return; }
    }
    ctx->pc = 0x1A2EF0u;
    // 0x1a2ef0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2ef4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2ef8: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a2ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a2efc: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A2EFCu;
    SET_GPR_U32(ctx, 31, 0x1A2F04u);
    ctx->pc = 0x1A2F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2EFCu;
            // 0x1a2f00: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F04u; }
        if (ctx->pc != 0x1A2F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F04u; }
        if (ctx->pc != 0x1A2F04u) { return; }
    }
    ctx->pc = 0x1A2F04u;
    // 0x1a2f04: 0x0  nop
    ctx->pc = 0x1a2f04u;
    // NOP
label_1a2f08:
    // 0x1a2f08: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2f0c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a2f10: 0x14620229  bne         $v1, $v0, . + 4 + (0x229 << 2)
    ctx->pc = 0x1A2F10u;
    {
        const bool branch_taken_0x1a2f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2f10) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2F18u;
    // 0x1a2f18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2f1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2f20: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2f24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2f28: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a2f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2f2c: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2F2Cu;
    SET_GPR_U32(ctx, 31, 0x1A2F34u);
    ctx->pc = 0x1A2F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2F2Cu;
            // 0x1a2f30: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F34u; }
        if (ctx->pc != 0x1A2F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F34u; }
        if (ctx->pc != 0x1A2F34u) { return; }
    }
    ctx->pc = 0x1A2F34u;
    // 0x1a2f34: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2f38: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a2f3c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2f40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2f44: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a2f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2f48: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2F48u;
    SET_GPR_U32(ctx, 31, 0x1A2F50u);
    ctx->pc = 0x1A2F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2F48u;
            // 0x1a2f4c: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F50u; }
        if (ctx->pc != 0x1A2F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F50u; }
        if (ctx->pc != 0x1A2F50u) { return; }
    }
    ctx->pc = 0x1A2F50u;
    // 0x1a2f50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2f54: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a2f58: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2f5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2f60: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x1a2f64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a2f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2f68: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2F68u;
    SET_GPR_U32(ctx, 31, 0x1A2F70u);
    ctx->pc = 0x1A2F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2F68u;
            // 0x1a2f6c: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F70u; }
        if (ctx->pc != 0x1A2F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F70u; }
        if (ctx->pc != 0x1A2F70u) { return; }
    }
    ctx->pc = 0x1A2F70u;
    // 0x1a2f70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a2f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2f74: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a2f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1a2f78: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2f7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2f80: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x1a2f84: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a2f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2f88: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2F88u;
    SET_GPR_U32(ctx, 31, 0x1A2F90u);
    ctx->pc = 0x1A2F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2F88u;
            // 0x1a2f8c: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F90u; }
        if (ctx->pc != 0x1A2F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F90u; }
        if (ctx->pc != 0x1A2F90u) { return; }
    }
    ctx->pc = 0x1A2F90u;
    // 0x1a2f90: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a2f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2f94: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1a2f98: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2f9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2fa0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a2fa4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a2fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2fa8: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2FA8u;
    SET_GPR_U32(ctx, 31, 0x1A2FB0u);
    ctx->pc = 0x1A2FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2FA8u;
            // 0x1a2fac: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2FB0u; }
        if (ctx->pc != 0x1A2FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2FB0u; }
        if (ctx->pc != 0x1A2FB0u) { return; }
    }
    ctx->pc = 0x1A2FB0u;
    // 0x1a2fb0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a2fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2fb4: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1a2fb8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a2fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a2fbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2fc0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a2fc4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a2fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2fc8: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A2FC8u;
    SET_GPR_U32(ctx, 31, 0x1A2FD0u);
    ctx->pc = 0x1A2FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2FC8u;
            // 0x1a2fcc: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2FD0u; }
        if (ctx->pc != 0x1A2FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2FD0u; }
        if (ctx->pc != 0x1A2FD0u) { return; }
    }
    ctx->pc = 0x1A2FD0u;
    // 0x1a2fd0: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x1A2FD0u;
    {
        const bool branch_taken_0x1a2fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2fd0) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2FD8u;
label_1a2fd8:
    // 0x1a2fd8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A2FD8u;
    SET_GPR_U32(ctx, 31, 0x1A2FE0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2FE0u; }
        if (ctx->pc != 0x1A2FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2FE0u; }
        if (ctx->pc != 0x1A2FE0u) { return; }
    }
    ctx->pc = 0x1A2FE0u;
    // 0x1a2fe0: 0x184001f5  blez        $v0, . + 4 + (0x1F5 << 2)
    ctx->pc = 0x1A2FE0u;
    {
        const bool branch_taken_0x1a2fe0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a2fe0) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A2FE8u;
    // 0x1a2fe8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a2fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2fec: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1a2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1a2ff0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2ff0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2ff4: 0x0  nop
    ctx->pc = 0x1a2ff4u;
    // NOP
    // 0x1a2ff8: 0x0  nop
    ctx->pc = 0x1a2ff8u;
    // NOP
    // 0x1a2ffc: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2ffcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a3000: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A3000u;
    {
        const bool branch_taken_0x1a3000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3000) {
            ctx->pc = 0x1A3030u;
            goto label_1a3030;
        }
    }
    ctx->pc = 0x1A3008u;
    // 0x1a3008: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a3008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a300c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3010: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1a3010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1a3014: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A3014u;
    SET_GPR_U32(ctx, 31, 0x1A301Cu);
    ctx->pc = 0x1A3018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3014u;
            // 0x1a3018: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A301Cu; }
        if (ctx->pc != 0x1A301Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A301Cu; }
        if (ctx->pc != 0x1A301Cu) { return; }
    }
    ctx->pc = 0x1A301Cu;
    // 0x1a301c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3020: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a3020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3024: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1a3024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1a3028: 0xc06560c  jal         func_195830
    ctx->pc = 0x1A3028u;
    SET_GPR_U32(ctx, 31, 0x1A3030u);
    ctx->pc = 0x1A302Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3028u;
            // 0x1a302c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3030u; }
        if (ctx->pc != 0x1A3030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3030u; }
        if (ctx->pc != 0x1A3030u) { return; }
    }
    ctx->pc = 0x1A3030u;
label_1a3030:
    // 0x1a3030: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a3030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a3034: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a3034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a3038: 0x146201df  bne         $v1, $v0, . + 4 + (0x1DF << 2)
    ctx->pc = 0x1A3038u;
    {
        const bool branch_taken_0x1a3038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3038) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A3040u;
    // 0x1a3040: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a3040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3044: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a3044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a3048: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a3048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a304c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a304cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a3050: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a3050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a3054: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A3054u;
    SET_GPR_U32(ctx, 31, 0x1A305Cu);
    ctx->pc = 0x1A3058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3054u;
            // 0x1a3058: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A305Cu; }
        if (ctx->pc != 0x1A305Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A305Cu; }
        if (ctx->pc != 0x1A305Cu) { return; }
    }
    ctx->pc = 0x1A305Cu;
    // 0x1a305c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a305cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3060: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a3060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a3064: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a3064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3068: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a3068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a306c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a306cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a3070: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A3070u;
    SET_GPR_U32(ctx, 31, 0x1A3078u);
    ctx->pc = 0x1A3074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3070u;
            // 0x1a3074: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3078u; }
        if (ctx->pc != 0x1A3078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3078u; }
        if (ctx->pc != 0x1A3078u) { return; }
    }
    ctx->pc = 0x1A3078u;
    // 0x1a3078: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a3078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a307c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a307cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a3080: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a3080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3084: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a3084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a3088: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a3088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a308c: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A308Cu;
    SET_GPR_U32(ctx, 31, 0x1A3094u);
    ctx->pc = 0x1A3090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A308Cu;
            // 0x1a3090: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3094u; }
        if (ctx->pc != 0x1A3094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3094u; }
        if (ctx->pc != 0x1A3094u) { return; }
    }
    ctx->pc = 0x1A3094u;
    // 0x1a3094: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a3094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3098: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a3098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1a309c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a309cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a30a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a30a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a30a4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a30a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a30a8: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1A30A8u;
    SET_GPR_U32(ctx, 31, 0x1A30B0u);
    ctx->pc = 0x1A30ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A30A8u;
            // 0x1a30ac: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30B0u; }
        if (ctx->pc != 0x1A30B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30B0u; }
        if (ctx->pc != 0x1A30B0u) { return; }
    }
    ctx->pc = 0x1A30B0u;
    // 0x1a30b0: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x1A30B0u;
    {
        const bool branch_taken_0x1a30b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a30b0) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A30B8u;
label_1a30b8:
    // 0x1a30b8: 0xc051a38  jal         func_1468E0
    ctx->pc = 0x1A30B8u;
    SET_GPR_U32(ctx, 31, 0x1A30C0u);
    ctx->pc = 0x1468E0u;
    if (runtime->hasFunction(0x1468E0u)) {
        auto targetFn = runtime->lookupFunction(0x1468E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30C0u; }
        if (ctx->pc != 0x1A30C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ser_stage3_clear_0x1468e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30C0u; }
        if (ctx->pc != 0x1A30C0u) { return; }
    }
    ctx->pc = 0x1A30C0u;
    // 0x1a30c0: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1A30C0u;
    SET_GPR_U32(ctx, 31, 0x1A30C8u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30C8u; }
        if (ctx->pc != 0x1A30C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30C8u; }
        if (ctx->pc != 0x1A30C8u) { return; }
    }
    ctx->pc = 0x1A30C8u;
    // 0x1a30c8: 0xc05b978  jal         func_16E5E0
    ctx->pc = 0x1A30C8u;
    SET_GPR_U32(ctx, 31, 0x1A30D0u);
    ctx->pc = 0x1A30CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A30C8u;
            // 0x1a30cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E0u;
    if (runtime->hasFunction(0x16E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x16E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30D0u; }
        if (ctx->pc != 0x1A30D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Hp0_0x16e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30D0u; }
        if (ctx->pc != 0x1A30D0u) { return; }
    }
    ctx->pc = 0x1A30D0u;
    // 0x1a30d0: 0xc05b9cc  jal         func_16E730
    ctx->pc = 0x1A30D0u;
    SET_GPR_U32(ctx, 31, 0x1A30D8u);
    ctx->pc = 0x1A30D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A30D0u;
            // 0x1a30d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E730u;
    if (runtime->hasFunction(0x16E730u)) {
        auto targetFn = runtime->lookupFunction(0x16E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30D8u; }
        if (ctx->pc != 0x1A30D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_All_Hp0_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30D8u; }
        if (ctx->pc != 0x1A30D8u) { return; }
    }
    ctx->pc = 0x1A30D8u;
    // 0x1a30d8: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a30d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a30dc: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1a30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1a30e0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1a30e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1a30e4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1a30e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1a30e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a30e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a30ec: 0x0  nop
    ctx->pc = 0x1a30ecu;
    // NOP
    // 0x1a30f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a30f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a30f4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a30f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1a30f8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a30f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a30fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a30fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a3100: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a3100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1a3104: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a3104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3108: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a3108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a310c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a310cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a3110: 0xc068fec  jal         func_1A3FB0
    ctx->pc = 0x1A3110u;
    SET_GPR_U32(ctx, 31, 0x1A3118u);
    ctx->pc = 0x1A3114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3110u;
            // 0x1a3114: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FB0u;
    if (runtime->hasFunction(0x1A3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3118u; }
        if (ctx->pc != 0x1A3118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1a3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3118u; }
        if (ctx->pc != 0x1A3118u) { return; }
    }
    ctx->pc = 0x1A3118u;
    // 0x1a3118: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1a3118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a311c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a3120: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1a3120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1a3124: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a3124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3128: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1a3128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1a312c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a312cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a3130: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a3130u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a3134: 0x0  nop
    ctx->pc = 0x1a3134u;
    // NOP
    // 0x1a3138: 0x0  nop
    ctx->pc = 0x1a3138u;
    // NOP
    // 0x1a313c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a313cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a3140: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1A3140u;
    {
        const bool branch_taken_0x1a3140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3140) {
            ctx->pc = 0x1A3368u;
            goto label_1a3368;
        }
    }
    ctx->pc = 0x1A3148u;
    // 0x1a3148: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A3148u;
    SET_GPR_U32(ctx, 31, 0x1A3150u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3150u; }
        if (ctx->pc != 0x1A3150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3150u; }
        if (ctx->pc != 0x1A3150u) { return; }
    }
    ctx->pc = 0x1A3150u;
    // 0x1a3150: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1a3150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1a3154: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a3154u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a3158: 0x0  nop
    ctx->pc = 0x1a3158u;
    // NOP
    // 0x1a315c: 0x0  nop
    ctx->pc = 0x1a315cu;
    // NOP
    // 0x1a3160: 0x9010  mfhi        $s2
    ctx->pc = 0x1a3160u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1a3164: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A3164u;
    SET_GPR_U32(ctx, 31, 0x1A316Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A316Cu; }
        if (ctx->pc != 0x1A316Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A316Cu; }
        if (ctx->pc != 0x1A316Cu) { return; }
    }
    ctx->pc = 0x1A316Cu;
    // 0x1a316c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1a316cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1a3170: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a3170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a3174: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a3174u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a3178: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a3178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a317c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3180: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a3180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1a3184: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a3184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a3188: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a3188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a318c: 0x8810  mfhi        $s1
    ctx->pc = 0x1a318cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1a3190: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a3190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1a3194: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a3194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3198: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1a3198u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a319c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1a319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1a31a0: 0x2465ffe7  addiu       $a1, $v1, -0x19
    ctx->pc = 0x1a31a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    // 0x1a31a4: 0x2444ff60  addiu       $a0, $v0, -0xA0
    ctx->pc = 0x1a31a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x1a31a8: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1A31A8u;
    SET_GPR_U32(ctx, 31, 0x1A31B0u);
    ctx->pc = 0x1A31ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31A8u;
            // 0x1a31ac: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31B0u; }
        if (ctx->pc != 0x1A31B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31B0u; }
        if (ctx->pc != 0x1A31B0u) { return; }
    }
    ctx->pc = 0x1A31B0u;
    // 0x1a31b0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1a31b4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a31b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a31b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a31b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a31bc: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1a31bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1a31c0: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a31c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a31c4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a31c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a31c8: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1a31cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a31ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a31d0: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a31d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a31d4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1a31d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a31d8: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1a31d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a31dc: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1a31dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1a31e0: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1a31e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a31e4: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1A31E4u;
    SET_GPR_U32(ctx, 31, 0x1A31ECu);
    ctx->pc = 0x1A31E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31E4u;
            // 0x1a31e8: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31ECu; }
        if (ctx->pc != 0x1A31ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31ECu; }
        if (ctx->pc != 0x1A31ECu) { return; }
    }
    ctx->pc = 0x1A31ECu;
    // 0x1a31ec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1a31f0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a31f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a31f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a31f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a31f8: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1a31f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1a31fc: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a31fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a3200: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a3200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a3204: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a3204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1a3208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a3208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a320c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3210: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1a3210u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a3214: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1a3214u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a3218: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1a3218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1a321c: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1a321cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a3220: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1A3220u;
    SET_GPR_U32(ctx, 31, 0x1A3228u);
    ctx->pc = 0x1A3224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3220u;
            // 0x1a3224: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3228u; }
        if (ctx->pc != 0x1A3228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3228u; }
        if (ctx->pc != 0x1A3228u) { return; }
    }
    ctx->pc = 0x1A3228u;
    // 0x1a3228: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a3228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a322c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1a322cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1a3230: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a3230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a3234: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a3234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a3238: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1a3238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1a323c: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1a323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1a3240: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a3240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3248: 0x0  nop
    ctx->pc = 0x1a3248u;
    // NOP
    // 0x1a324c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a324cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1a3250: 0xc05d080  jal         func_174200
    ctx->pc = 0x1A3250u;
    SET_GPR_U32(ctx, 31, 0x1A3258u);
    ctx->pc = 0x1A3254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3250u;
            // 0x1a3254: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3258u; }
        if (ctx->pc != 0x1A3258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3258u; }
        if (ctx->pc != 0x1A3258u) { return; }
    }
    ctx->pc = 0x1A3258u;
    // 0x1a3258: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A3258u;
    SET_GPR_U32(ctx, 31, 0x1A3260u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3260u; }
        if (ctx->pc != 0x1A3260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3260u; }
        if (ctx->pc != 0x1A3260u) { return; }
    }
    ctx->pc = 0x1A3260u;
    // 0x1a3260: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3260u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1a3264: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A3264u;
    {
        const bool branch_taken_0x1a3264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3264) {
            ctx->pc = 0x1A32A0u;
            goto label_1a32a0;
        }
    }
    ctx->pc = 0x1A326Cu;
    // 0x1a326c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a326cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a3270: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1a3270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1a3274: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a3274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a3278: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a3278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a327c: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1a327cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1a3280: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1a3280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1a3284: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a3284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a328c: 0x0  nop
    ctx->pc = 0x1a328cu;
    // NOP
    // 0x1a3290: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a3290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1a3294: 0xc05d080  jal         func_174200
    ctx->pc = 0x1A3294u;
    SET_GPR_U32(ctx, 31, 0x1A329Cu);
    ctx->pc = 0x1A3298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3294u;
            // 0x1a3298: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A329Cu; }
        if (ctx->pc != 0x1A329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A329Cu; }
        if (ctx->pc != 0x1A329Cu) { return; }
    }
    ctx->pc = 0x1A329Cu;
    // 0x1a329c: 0x0  nop
    ctx->pc = 0x1a329cu;
    // NOP
label_1a32a0:
    // 0x1a32a0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A32A0u;
    SET_GPR_U32(ctx, 31, 0x1A32A8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A32A8u; }
        if (ctx->pc != 0x1A32A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A32A8u; }
        if (ctx->pc != 0x1A32A8u) { return; }
    }
    ctx->pc = 0x1A32A8u;
    // 0x1a32a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a32a8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1a32ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A32ACu;
    {
        const bool branch_taken_0x1a32ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a32ac) {
            ctx->pc = 0x1A32E8u;
            goto label_1a32e8;
        }
    }
    ctx->pc = 0x1A32B4u;
    // 0x1a32b4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a32b8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1a32b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1a32bc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a32c0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a32c4: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1a32c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1a32c8: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1a32c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1a32cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a32ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a32d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a32d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a32d4: 0x0  nop
    ctx->pc = 0x1a32d4u;
    // NOP
    // 0x1a32d8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a32d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1a32dc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1A32DCu;
    SET_GPR_U32(ctx, 31, 0x1A32E4u);
    ctx->pc = 0x1A32E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A32DCu;
            // 0x1a32e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A32E4u; }
        if (ctx->pc != 0x1A32E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A32E4u; }
        if (ctx->pc != 0x1A32E4u) { return; }
    }
    ctx->pc = 0x1A32E4u;
    // 0x1a32e4: 0x0  nop
    ctx->pc = 0x1a32e4u;
    // NOP
label_1a32e8:
    // 0x1a32e8: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1a32e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1a32ec: 0x2841005a  slti        $at, $v0, 0x5A
    ctx->pc = 0x1a32ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1a32f0: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A32F0u;
    {
        const bool branch_taken_0x1a32f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A32F0u;
            // 0x1a32f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32f0) {
            ctx->pc = 0x1A3368u;
            goto label_1a3368;
        }
    }
    ctx->pc = 0x1A32F8u;
    // 0x1a32f8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1A32F8u;
    SET_GPR_U32(ctx, 31, 0x1A3300u);
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3300u; }
        if (ctx->pc != 0x1A3300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3300u; }
        if (ctx->pc != 0x1A3300u) { return; }
    }
    ctx->pc = 0x1A3300u;
    // 0x1a3300: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A3300u;
    {
        const bool branch_taken_0x1a3300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3300) {
            ctx->pc = 0x1A3330u;
            goto label_1a3330;
        }
    }
    ctx->pc = 0x1A3308u;
    // 0x1a3308: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A3308u;
    SET_GPR_U32(ctx, 31, 0x1A3310u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3310u; }
        if (ctx->pc != 0x1A3310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3310u; }
        if (ctx->pc != 0x1A3310u) { return; }
    }
    ctx->pc = 0x1A3310u;
    // 0x1a3310: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1a3310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a3314: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a3314u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a3318: 0x0  nop
    ctx->pc = 0x1a3318u;
    // NOP
    // 0x1a331c: 0x0  nop
    ctx->pc = 0x1a331cu;
    // NOP
    // 0x1a3320: 0x2810  mfhi        $a1
    ctx->pc = 0x1a3320u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1a3324: 0xc055124  jal         func_154490
    ctx->pc = 0x1A3324u;
    SET_GPR_U32(ctx, 31, 0x1A332Cu);
    ctx->pc = 0x1A3328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3324u;
            // 0x1a3328: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A332Cu; }
        if (ctx->pc != 0x1A332Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A332Cu; }
        if (ctx->pc != 0x1A332Cu) { return; }
    }
    ctx->pc = 0x1A332Cu;
    // 0x1a332c: 0x0  nop
    ctx->pc = 0x1a332cu;
    // NOP
label_1a3330:
    // 0x1a3330: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1A3330u;
    SET_GPR_U32(ctx, 31, 0x1A3338u);
    ctx->pc = 0x1A3334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3330u;
            // 0x1a3334: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3338u; }
        if (ctx->pc != 0x1A3338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3338u; }
        if (ctx->pc != 0x1A3338u) { return; }
    }
    ctx->pc = 0x1A3338u;
    // 0x1a3338: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A3338u;
    {
        const bool branch_taken_0x1a3338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3338) {
            ctx->pc = 0x1A3368u;
            goto label_1a3368;
        }
    }
    ctx->pc = 0x1A3340u;
    // 0x1a3340: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A3340u;
    SET_GPR_U32(ctx, 31, 0x1A3348u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3348u; }
        if (ctx->pc != 0x1A3348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3348u; }
        if (ctx->pc != 0x1A3348u) { return; }
    }
    ctx->pc = 0x1A3348u;
    // 0x1a3348: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1a3348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a334c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a334cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a3350: 0x0  nop
    ctx->pc = 0x1a3350u;
    // NOP
    // 0x1a3354: 0x0  nop
    ctx->pc = 0x1a3354u;
    // NOP
    // 0x1a3358: 0x2810  mfhi        $a1
    ctx->pc = 0x1a3358u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1a335c: 0xc055124  jal         func_154490
    ctx->pc = 0x1A335Cu;
    SET_GPR_U32(ctx, 31, 0x1A3364u);
    ctx->pc = 0x1A3360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A335Cu;
            // 0x1a3360: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3364u; }
        if (ctx->pc != 0x1A3364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3364u; }
        if (ctx->pc != 0x1A3364u) { return; }
    }
    ctx->pc = 0x1A3364u;
    // 0x1a3364: 0x0  nop
    ctx->pc = 0x1a3364u;
    // NOP
label_1a3368:
    // 0x1a3368: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1a3368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1a336c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a3370: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A3370u;
    {
        const bool branch_taken_0x1a3370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3370u;
            // 0x1a3374: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3370) {
            ctx->pc = 0x1A33B8u;
            goto label_1a33b8;
        }
    }
    ctx->pc = 0x1A3378u;
    // 0x1a3378: 0xc060718  jal         func_181C60
    ctx->pc = 0x1A3378u;
    SET_GPR_U32(ctx, 31, 0x1A3380u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3380u; }
        if (ctx->pc != 0x1A3380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3380u; }
        if (ctx->pc != 0x1A3380u) { return; }
    }
    ctx->pc = 0x1A3380u;
    // 0x1a3380: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A3380u;
    SET_GPR_U32(ctx, 31, 0x1A3388u);
    ctx->pc = 0x1A3384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3380u;
            // 0x1a3384: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3388u; }
        if (ctx->pc != 0x1A3388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3388u; }
        if (ctx->pc != 0x1A3388u) { return; }
    }
    ctx->pc = 0x1A3388u;
    // 0x1a3388: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1A3388u;
    SET_GPR_U32(ctx, 31, 0x1A3390u);
    ctx->pc = 0x1A338Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3388u;
            // 0x1a338c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3390u; }
        if (ctx->pc != 0x1A3390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3390u; }
        if (ctx->pc != 0x1A3390u) { return; }
    }
    ctx->pc = 0x1A3390u;
    // 0x1a3390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3390u;
    {
        const bool branch_taken_0x1a3390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3390u;
            // 0x1a3394: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3390) {
            ctx->pc = 0x1A33A0u;
            goto label_1a33a0;
        }
    }
    ctx->pc = 0x1A3398u;
    // 0x1a3398: 0xc055124  jal         func_154490
    ctx->pc = 0x1A3398u;
    SET_GPR_U32(ctx, 31, 0x1A33A0u);
    ctx->pc = 0x1A339Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3398u;
            // 0x1a339c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33A0u; }
        if (ctx->pc != 0x1A33A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33A0u; }
        if (ctx->pc != 0x1A33A0u) { return; }
    }
    ctx->pc = 0x1A33A0u;
label_1a33a0:
    // 0x1a33a0: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1A33A0u;
    SET_GPR_U32(ctx, 31, 0x1A33A8u);
    ctx->pc = 0x1A33A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A33A0u;
            // 0x1a33a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33A8u; }
        if (ctx->pc != 0x1A33A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33A8u; }
        if (ctx->pc != 0x1A33A8u) { return; }
    }
    ctx->pc = 0x1A33A8u;
    // 0x1a33a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A33A8u;
    {
        const bool branch_taken_0x1a33a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A33ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A33A8u;
            // 0x1a33ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a33a8) {
            ctx->pc = 0x1A33B8u;
            goto label_1a33b8;
        }
    }
    ctx->pc = 0x1A33B0u;
    // 0x1a33b0: 0xc055124  jal         func_154490
    ctx->pc = 0x1A33B0u;
    SET_GPR_U32(ctx, 31, 0x1A33B8u);
    ctx->pc = 0x1A33B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A33B0u;
            // 0x1a33b4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33B8u; }
        if (ctx->pc != 0x1A33B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33B8u; }
        if (ctx->pc != 0x1A33B8u) { return; }
    }
    ctx->pc = 0x1A33B8u;
label_1a33b8:
    // 0x1a33b8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1a33b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1a33bc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1a33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1a33c0: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A33C0u;
    {
        const bool branch_taken_0x1a33c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A33C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A33C0u;
            // 0x1a33c4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a33c0) {
            ctx->pc = 0x1A3430u;
            goto label_1a3430;
        }
    }
    ctx->pc = 0x1A33C8u;
    // 0x1a33c8: 0xc060718  jal         func_181C60
    ctx->pc = 0x1A33C8u;
    SET_GPR_U32(ctx, 31, 0x1A33D0u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33D0u; }
        if (ctx->pc != 0x1A33D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33D0u; }
        if (ctx->pc != 0x1A33D0u) { return; }
    }
    ctx->pc = 0x1A33D0u;
    // 0x1a33d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a33d4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1a33d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a33d8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1a33d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a33dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a33dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a33e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a33e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a33e4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1a33e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a33e8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1a33e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1a33ec: 0xc06fc9c  jal         func_1BF270
    ctx->pc = 0x1A33ECu;
    SET_GPR_U32(ctx, 31, 0x1A33F4u);
    ctx->pc = 0x1A33F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A33ECu;
            // 0x1a33f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF270u;
    if (runtime->hasFunction(0x1BF270u)) {
        auto targetFn = runtime->lookupFunction(0x1BF270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33F4u; }
        if (ctx->pc != 0x1A33F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_0x1bf270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33F4u; }
        if (ctx->pc != 0x1A33F4u) { return; }
    }
    ctx->pc = 0x1A33F4u;
    // 0x1a33f4: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A33F4u;
    SET_GPR_U32(ctx, 31, 0x1A33FCu);
    ctx->pc = 0x1A33F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A33F4u;
            // 0x1a33f8: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33FCu; }
        if (ctx->pc != 0x1A33FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33FCu; }
        if (ctx->pc != 0x1A33FCu) { return; }
    }
    ctx->pc = 0x1A33FCu;
    // 0x1a33fc: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1A33FCu;
    SET_GPR_U32(ctx, 31, 0x1A3404u);
    ctx->pc = 0x1A3400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A33FCu;
            // 0x1a3400: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3404u; }
        if (ctx->pc != 0x1A3404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3404u; }
        if (ctx->pc != 0x1A3404u) { return; }
    }
    ctx->pc = 0x1A3404u;
    // 0x1a3404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3404u;
    {
        const bool branch_taken_0x1a3404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3404u;
            // 0x1a3408: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3404) {
            ctx->pc = 0x1A3418u;
            goto label_1a3418;
        }
    }
    ctx->pc = 0x1A340Cu;
    // 0x1a340c: 0xc055124  jal         func_154490
    ctx->pc = 0x1A340Cu;
    SET_GPR_U32(ctx, 31, 0x1A3414u);
    ctx->pc = 0x1A3410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A340Cu;
            // 0x1a3410: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3414u; }
        if (ctx->pc != 0x1A3414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3414u; }
        if (ctx->pc != 0x1A3414u) { return; }
    }
    ctx->pc = 0x1A3414u;
    // 0x1a3414: 0x0  nop
    ctx->pc = 0x1a3414u;
    // NOP
label_1a3418:
    // 0x1a3418: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1A3418u;
    SET_GPR_U32(ctx, 31, 0x1A3420u);
    ctx->pc = 0x1A341Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3418u;
            // 0x1a341c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3420u; }
        if (ctx->pc != 0x1A3420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3420u; }
        if (ctx->pc != 0x1A3420u) { return; }
    }
    ctx->pc = 0x1A3420u;
    // 0x1a3420: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3420u;
    {
        const bool branch_taken_0x1a3420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3420u;
            // 0x1a3424: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3420) {
            ctx->pc = 0x1A3430u;
            goto label_1a3430;
        }
    }
    ctx->pc = 0x1A3428u;
    // 0x1a3428: 0xc055124  jal         func_154490
    ctx->pc = 0x1A3428u;
    SET_GPR_U32(ctx, 31, 0x1A3430u);
    ctx->pc = 0x1A342Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3428u;
            // 0x1a342c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3430u; }
        if (ctx->pc != 0x1A3430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3430u; }
        if (ctx->pc != 0x1A3430u) { return; }
    }
    ctx->pc = 0x1A3430u;
label_1a3430:
    // 0x1a3430: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1a3430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1a3434: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x1a3434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1a3438: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A3438u;
    {
        const bool branch_taken_0x1a3438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3438u;
            // 0x1a343c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3438) {
            ctx->pc = 0x1A3480u;
            goto label_1a3480;
        }
    }
    ctx->pc = 0x1A3440u;
    // 0x1a3440: 0xc060718  jal         func_181C60
    ctx->pc = 0x1A3440u;
    SET_GPR_U32(ctx, 31, 0x1A3448u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3448u; }
        if (ctx->pc != 0x1A3448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3448u; }
        if (ctx->pc != 0x1A3448u) { return; }
    }
    ctx->pc = 0x1A3448u;
    // 0x1a3448: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A3448u;
    SET_GPR_U32(ctx, 31, 0x1A3450u);
    ctx->pc = 0x1A344Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3448u;
            // 0x1a344c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3450u; }
        if (ctx->pc != 0x1A3450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3450u; }
        if (ctx->pc != 0x1A3450u) { return; }
    }
    ctx->pc = 0x1A3450u;
    // 0x1a3450: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1A3450u;
    SET_GPR_U32(ctx, 31, 0x1A3458u);
    ctx->pc = 0x1A3454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3450u;
            // 0x1a3454: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3458u; }
        if (ctx->pc != 0x1A3458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3458u; }
        if (ctx->pc != 0x1A3458u) { return; }
    }
    ctx->pc = 0x1A3458u;
    // 0x1a3458: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3458u;
    {
        const bool branch_taken_0x1a3458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A345Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3458u;
            // 0x1a345c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3458) {
            ctx->pc = 0x1A3468u;
            goto label_1a3468;
        }
    }
    ctx->pc = 0x1A3460u;
    // 0x1a3460: 0xc055124  jal         func_154490
    ctx->pc = 0x1A3460u;
    SET_GPR_U32(ctx, 31, 0x1A3468u);
    ctx->pc = 0x1A3464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3460u;
            // 0x1a3464: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3468u; }
        if (ctx->pc != 0x1A3468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3468u; }
        if (ctx->pc != 0x1A3468u) { return; }
    }
    ctx->pc = 0x1A3468u;
label_1a3468:
    // 0x1a3468: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1A3468u;
    SET_GPR_U32(ctx, 31, 0x1A3470u);
    ctx->pc = 0x1A346Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3468u;
            // 0x1a346c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3470u; }
        if (ctx->pc != 0x1A3470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3470u; }
        if (ctx->pc != 0x1A3470u) { return; }
    }
    ctx->pc = 0x1A3470u;
    // 0x1a3470: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3470u;
    {
        const bool branch_taken_0x1a3470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3470u;
            // 0x1a3474: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3470) {
            ctx->pc = 0x1A3480u;
            goto label_1a3480;
        }
    }
    ctx->pc = 0x1A3478u;
    // 0x1a3478: 0xc055124  jal         func_154490
    ctx->pc = 0x1A3478u;
    SET_GPR_U32(ctx, 31, 0x1A3480u);
    ctx->pc = 0x1A347Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3478u;
            // 0x1a347c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3480u; }
        if (ctx->pc != 0x1A3480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3480u; }
        if (ctx->pc != 0x1A3480u) { return; }
    }
    ctx->pc = 0x1A3480u;
label_1a3480:
    // 0x1a3480: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1a3480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1a3484: 0x240200af  addiu       $v0, $zero, 0xAF
    ctx->pc = 0x1a3484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x1a3488: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A3488u;
    {
        const bool branch_taken_0x1a3488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A348Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3488u;
            // 0x1a348c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3488) {
            ctx->pc = 0x1A34F8u;
            goto label_1a34f8;
        }
    }
    ctx->pc = 0x1A3490u;
    // 0x1a3490: 0xc060718  jal         func_181C60
    ctx->pc = 0x1A3490u;
    SET_GPR_U32(ctx, 31, 0x1A3498u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3498u; }
        if (ctx->pc != 0x1A3498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3498u; }
        if (ctx->pc != 0x1A3498u) { return; }
    }
    ctx->pc = 0x1A3498u;
    // 0x1a3498: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a3498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a349c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1a349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a34a0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1a34a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a34a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a34a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a34a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a34a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a34ac: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1a34acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a34b0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1a34b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1a34b4: 0xc06fc9c  jal         func_1BF270
    ctx->pc = 0x1A34B4u;
    SET_GPR_U32(ctx, 31, 0x1A34BCu);
    ctx->pc = 0x1A34B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34B4u;
            // 0x1a34b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF270u;
    if (runtime->hasFunction(0x1BF270u)) {
        auto targetFn = runtime->lookupFunction(0x1BF270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34BCu; }
        if (ctx->pc != 0x1A34BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_0x1bf270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34BCu; }
        if (ctx->pc != 0x1A34BCu) { return; }
    }
    ctx->pc = 0x1A34BCu;
    // 0x1a34bc: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A34BCu;
    SET_GPR_U32(ctx, 31, 0x1A34C4u);
    ctx->pc = 0x1A34C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34BCu;
            // 0x1a34c0: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34C4u; }
        if (ctx->pc != 0x1A34C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34C4u; }
        if (ctx->pc != 0x1A34C4u) { return; }
    }
    ctx->pc = 0x1A34C4u;
    // 0x1a34c4: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1A34C4u;
    SET_GPR_U32(ctx, 31, 0x1A34CCu);
    ctx->pc = 0x1A34C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34C4u;
            // 0x1a34c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34CCu; }
        if (ctx->pc != 0x1A34CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34CCu; }
        if (ctx->pc != 0x1A34CCu) { return; }
    }
    ctx->pc = 0x1A34CCu;
    // 0x1a34cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A34CCu;
    {
        const bool branch_taken_0x1a34cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34CCu;
            // 0x1a34d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34cc) {
            ctx->pc = 0x1A34E0u;
            goto label_1a34e0;
        }
    }
    ctx->pc = 0x1A34D4u;
    // 0x1a34d4: 0xc055124  jal         func_154490
    ctx->pc = 0x1A34D4u;
    SET_GPR_U32(ctx, 31, 0x1A34DCu);
    ctx->pc = 0x1A34D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34D4u;
            // 0x1a34d8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34DCu; }
        if (ctx->pc != 0x1A34DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34DCu; }
        if (ctx->pc != 0x1A34DCu) { return; }
    }
    ctx->pc = 0x1A34DCu;
    // 0x1a34dc: 0x0  nop
    ctx->pc = 0x1a34dcu;
    // NOP
label_1a34e0:
    // 0x1a34e0: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1A34E0u;
    SET_GPR_U32(ctx, 31, 0x1A34E8u);
    ctx->pc = 0x1A34E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34E0u;
            // 0x1a34e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34E8u; }
        if (ctx->pc != 0x1A34E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34E8u; }
        if (ctx->pc != 0x1A34E8u) { return; }
    }
    ctx->pc = 0x1A34E8u;
    // 0x1a34e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A34E8u;
    {
        const bool branch_taken_0x1a34e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34E8u;
            // 0x1a34ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34e8) {
            ctx->pc = 0x1A34F8u;
            goto label_1a34f8;
        }
    }
    ctx->pc = 0x1A34F0u;
    // 0x1a34f0: 0xc055124  jal         func_154490
    ctx->pc = 0x1A34F0u;
    SET_GPR_U32(ctx, 31, 0x1A34F8u);
    ctx->pc = 0x1A34F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34F0u;
            // 0x1a34f4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34F8u; }
        if (ctx->pc != 0x1A34F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34F8u; }
        if (ctx->pc != 0x1A34F8u) { return; }
    }
    ctx->pc = 0x1A34F8u;
label_1a34f8:
    // 0x1a34f8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1a34f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1a34fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1a34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a3500: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x1a3500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1a3504: 0x142000ac  bnez        $at, . + 4 + (0xAC << 2)
    ctx->pc = 0x1A3504u;
    {
        const bool branch_taken_0x1a3504 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3504u;
            // 0x1a3508: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3504) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A350Cu;
    // 0x1a350c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3510: 0xc060718  jal         func_181C60
    ctx->pc = 0x1A3510u;
    SET_GPR_U32(ctx, 31, 0x1A3518u);
    ctx->pc = 0x1A3514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3510u;
            // 0x1a3514: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3518u; }
        if (ctx->pc != 0x1A3518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3518u; }
        if (ctx->pc != 0x1A3518u) { return; }
    }
    ctx->pc = 0x1A3518u;
    // 0x1a3518: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a3518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a351c: 0x0  nop
    ctx->pc = 0x1a351cu;
    // NOP
label_1a3520:
    // 0x1a3520: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A3520u;
    SET_GPR_U32(ctx, 31, 0x1A3528u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3528u; }
        if (ctx->pc != 0x1A3528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3528u; }
        if (ctx->pc != 0x1A3528u) { return; }
    }
    ctx->pc = 0x1A3528u;
    // 0x1a3528: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1a3528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1a352c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a352cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a3530: 0x0  nop
    ctx->pc = 0x1a3530u;
    // NOP
    // 0x1a3534: 0x0  nop
    ctx->pc = 0x1a3534u;
    // NOP
    // 0x1a3538: 0x9010  mfhi        $s2
    ctx->pc = 0x1a3538u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1a353c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A353Cu;
    SET_GPR_U32(ctx, 31, 0x1A3544u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3544u; }
        if (ctx->pc != 0x1A3544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3544u; }
        if (ctx->pc != 0x1A3544u) { return; }
    }
    ctx->pc = 0x1A3544u;
    // 0x1a3544: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1a3544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1a3548: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a3548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a354c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a354cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a3550: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a3550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a3554: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a3554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3558: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a3558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1a355c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a355cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a3560: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a3560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a3564: 0x8810  mfhi        $s1
    ctx->pc = 0x1a3564u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1a3568: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a3568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1a356c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a356cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3570: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1a3570u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a3574: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1a3574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1a3578: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1a3578u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a357c: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1a357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1a3580: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1a3580u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a3584: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1A3584u;
    SET_GPR_U32(ctx, 31, 0x1A358Cu);
    ctx->pc = 0x1A3588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3584u;
            // 0x1a3588: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A358Cu; }
        if (ctx->pc != 0x1A358Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A358Cu; }
        if (ctx->pc != 0x1A358Cu) { return; }
    }
    ctx->pc = 0x1A358Cu;
    // 0x1a358c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a358cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1a3590: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a3590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a3594: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a3594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a3598: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a3598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a359c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a359cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a35a0: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1a35a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a35a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a35a8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a35a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a35ac: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1a35acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1a35b0: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1a35b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a35b4: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1a35b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a35b8: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1a35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1a35bc: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1a35bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a35c0: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1A35C0u;
    SET_GPR_U32(ctx, 31, 0x1A35C8u);
    ctx->pc = 0x1A35C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35C0u;
            // 0x1a35c4: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A35C8u; }
        if (ctx->pc != 0x1A35C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A35C8u; }
        if (ctx->pc != 0x1A35C8u) { return; }
    }
    ctx->pc = 0x1A35C8u;
    // 0x1a35c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a35c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a35cc: 0x2a62003c  slti        $v0, $s3, 0x3C
    ctx->pc = 0x1a35ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1a35d0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1A35D0u;
    {
        const bool branch_taken_0x1a35d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A35D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35D0u;
            // 0x1a35d4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35d0) {
            ctx->pc = 0x1A3520u;
            goto label_1a3520;
        }
    }
    ctx->pc = 0x1A35D8u;
    // 0x1a35d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a35d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1a35dc: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1a35dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1a35e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a35e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a35e4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1A35E4u;
    {
        const bool branch_taken_0x1a35e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35E4u;
            // 0x1a35e8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35e4) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A35ECu;
    // 0x1a35ec: 0x0  nop
    ctx->pc = 0x1a35ecu;
    // NOP
label_1a35f0:
    // 0x1a35f0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a35f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A35F4u;
    {
        const bool branch_taken_0x1a35f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A35F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35F4u;
            // 0x1a35f8: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35f4) {
            ctx->pc = 0x1A3608u;
            goto label_1a3608;
        }
    }
    ctx->pc = 0x1A35FCu;
    // 0x1a35fc: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A35FCu;
    SET_GPR_U32(ctx, 31, 0x1A3604u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3604u; }
        if (ctx->pc != 0x1A3604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3604u; }
        if (ctx->pc != 0x1A3604u) { return; }
    }
    ctx->pc = 0x1A3604u;
    // 0x1a3604: 0x0  nop
    ctx->pc = 0x1a3604u;
    // NOP
label_1a3608:
    // 0x1a3608: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a3608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a360c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3610: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3610u;
    {
        const bool branch_taken_0x1a3610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3610u;
            // 0x1a3614: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3610) {
            ctx->pc = 0x1A3620u;
            goto label_1a3620;
        }
    }
    ctx->pc = 0x1A3618u;
    // 0x1a3618: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A3618u;
    SET_GPR_U32(ctx, 31, 0x1A3620u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3620u; }
        if (ctx->pc != 0x1A3620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3620u; }
        if (ctx->pc != 0x1A3620u) { return; }
    }
    ctx->pc = 0x1A3620u;
label_1a3620:
    // 0x1a3620: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a3620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a3624: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a3624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a3628: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3628u;
    {
        const bool branch_taken_0x1a3628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A362Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3628u;
            // 0x1a362c: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3628) {
            ctx->pc = 0x1A3638u;
            goto label_1a3638;
        }
    }
    ctx->pc = 0x1A3630u;
    // 0x1a3630: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A3630u;
    SET_GPR_U32(ctx, 31, 0x1A3638u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3638u; }
        if (ctx->pc != 0x1A3638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3638u; }
        if (ctx->pc != 0x1A3638u) { return; }
    }
    ctx->pc = 0x1A3638u;
label_1a3638:
    // 0x1a3638: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a3638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a363c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a363cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3640: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3640u;
    {
        const bool branch_taken_0x1a3640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3640u;
            // 0x1a3644: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3640) {
            ctx->pc = 0x1A3650u;
            goto label_1a3650;
        }
    }
    ctx->pc = 0x1A3648u;
    // 0x1a3648: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A3648u;
    SET_GPR_U32(ctx, 31, 0x1A3650u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3650u; }
        if (ctx->pc != 0x1A3650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3650u; }
        if (ctx->pc != 0x1A3650u) { return; }
    }
    ctx->pc = 0x1A3650u;
label_1a3650:
    // 0x1a3650: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a3650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a3654: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a3654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a3658: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3658u;
    {
        const bool branch_taken_0x1a3658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A365Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3658u;
            // 0x1a365c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3658) {
            ctx->pc = 0x1A3668u;
            goto label_1a3668;
        }
    }
    ctx->pc = 0x1A3660u;
    // 0x1a3660: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A3660u;
    SET_GPR_U32(ctx, 31, 0x1A3668u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3668u; }
        if (ctx->pc != 0x1A3668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3668u; }
        if (ctx->pc != 0x1A3668u) { return; }
    }
    ctx->pc = 0x1A3668u;
label_1a3668:
    // 0x1a3668: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a3668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a366c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a366cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a3670: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3670u;
    {
        const bool branch_taken_0x1a3670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3670u;
            // 0x1a3674: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3670) {
            ctx->pc = 0x1A3680u;
            goto label_1a3680;
        }
    }
    ctx->pc = 0x1A3678u;
    // 0x1a3678: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A3678u;
    SET_GPR_U32(ctx, 31, 0x1A3680u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3680u; }
        if (ctx->pc != 0x1A3680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3680u; }
        if (ctx->pc != 0x1A3680u) { return; }
    }
    ctx->pc = 0x1A3680u;
label_1a3680:
    // 0x1a3680: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a3680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a3684: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a3684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a3688: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3688u;
    {
        const bool branch_taken_0x1a3688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A368Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3688u;
            // 0x1a368c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3688) {
            ctx->pc = 0x1A3698u;
            goto label_1a3698;
        }
    }
    ctx->pc = 0x1A3690u;
    // 0x1a3690: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A3690u;
    SET_GPR_U32(ctx, 31, 0x1A3698u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3698u; }
        if (ctx->pc != 0x1A3698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3698u; }
        if (ctx->pc != 0x1A3698u) { return; }
    }
    ctx->pc = 0x1A3698u;
label_1a3698:
    // 0x1a3698: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a3698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a369c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a36a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A36A0u;
    {
        const bool branch_taken_0x1a36a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A36A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A36A0u;
            // 0x1a36a4: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36a0) {
            ctx->pc = 0x1A36B0u;
            goto label_1a36b0;
        }
    }
    ctx->pc = 0x1A36A8u;
    // 0x1a36a8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A36A8u;
    SET_GPR_U32(ctx, 31, 0x1A36B0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36B0u; }
        if (ctx->pc != 0x1A36B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36B0u; }
        if (ctx->pc != 0x1A36B0u) { return; }
    }
    ctx->pc = 0x1A36B0u;
label_1a36b0:
    // 0x1a36b0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a36b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a36b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a36b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A36B8u;
    {
        const bool branch_taken_0x1a36b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A36BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A36B8u;
            // 0x1a36bc: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36b8) {
            ctx->pc = 0x1A36C8u;
            goto label_1a36c8;
        }
    }
    ctx->pc = 0x1A36C0u;
    // 0x1a36c0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A36C0u;
    SET_GPR_U32(ctx, 31, 0x1A36C8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36C8u; }
        if (ctx->pc != 0x1A36C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36C8u; }
        if (ctx->pc != 0x1A36C8u) { return; }
    }
    ctx->pc = 0x1A36C8u;
label_1a36c8:
    // 0x1a36c8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a36cc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1a36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a36d0: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1A36D0u;
    {
        const bool branch_taken_0x1a36d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a36d0) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A36D8u;
    // 0x1a36d8: 0xc056054  jal         func_158150
    ctx->pc = 0x1A36D8u;
    SET_GPR_U32(ctx, 31, 0x1A36E0u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36E0u; }
        if (ctx->pc != 0x1A36E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36E0u; }
        if (ctx->pc != 0x1A36E0u) { return; }
    }
    ctx->pc = 0x1A36E0u;
    // 0x1a36e0: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1A36E0u;
    SET_GPR_U32(ctx, 31, 0x1A36E8u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36E8u; }
        if (ctx->pc != 0x1A36E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36E8u; }
        if (ctx->pc != 0x1A36E8u) { return; }
    }
    ctx->pc = 0x1A36E8u;
    // 0x1a36e8: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1A36E8u;
    SET_GPR_U32(ctx, 31, 0x1A36F0u);
    ctx->pc = 0x1A36ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A36E8u;
            // 0x1a36ec: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36F0u; }
        if (ctx->pc != 0x1A36F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36F0u; }
        if (ctx->pc != 0x1A36F0u) { return; }
    }
    ctx->pc = 0x1A36F0u;
    // 0x1a36f0: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1A36F0u;
    SET_GPR_U32(ctx, 31, 0x1A36F8u);
    ctx->pc = 0x1A36F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A36F0u;
            // 0x1a36f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36F8u; }
        if (ctx->pc != 0x1A36F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36F8u; }
        if (ctx->pc != 0x1A36F8u) { return; }
    }
    ctx->pc = 0x1A36F8u;
    // 0x1a36f8: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1A36F8u;
    SET_GPR_U32(ctx, 31, 0x1A3700u);
    ctx->pc = 0x1A36FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A36F8u;
            // 0x1a36fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3700u; }
        if (ctx->pc != 0x1A3700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3700u; }
        if (ctx->pc != 0x1A3700u) { return; }
    }
    ctx->pc = 0x1A3700u;
    // 0x1a3700: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x1A3700u;
    {
        const bool branch_taken_0x1a3700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3700) {
            ctx->pc = 0x1A3C80u;
            goto label_1a3c80;
        }
    }
    ctx->pc = 0x1A3708u;
label_1a3708:
    // 0x1a3708: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1A3708u;
    SET_GPR_U32(ctx, 31, 0x1A3710u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3710u; }
        if (ctx->pc != 0x1A3710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3710u; }
        if (ctx->pc != 0x1A3710u) { return; }
    }
    ctx->pc = 0x1A3710u;
    // 0x1a3710: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a3710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3714: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1a3714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1a3718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a371c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1a371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3720: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a3720u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3724: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1A3724u;
    {
        const bool branch_taken_0x1a3724 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3724u;
            // 0x1a3728: 0x24620124  addiu       $v0, $v1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3724) {
            ctx->pc = 0x1A3750u;
            goto label_1a3750;
        }
    }
    ctx->pc = 0x1A372Cu;
    // 0x1a372c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3730: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1a3730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x1a3734: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1a3734u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1a3738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a373c: 0x0  nop
    ctx->pc = 0x1a373cu;
    // NOP
    // 0x1a3740: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a3740u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a3744: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A3744u;
    {
        const bool branch_taken_0x1a3744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3744u;
            // 0x1a3748: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3744) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A374Cu;
    // 0x1a374c: 0x0  nop
    ctx->pc = 0x1a374cu;
    // NOP
label_1a3750:
    // 0x1a3750: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1a3750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a3754: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1a3754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1a3758: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1a3758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1a375c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a375cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1a3760: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1a3760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1a3764: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1a3764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1a3768: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a3768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a376c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A376Cu;
    {
        const bool branch_taken_0x1a376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A376Cu;
            // 0x1a3770: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a376c) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A3774u;
    // 0x1a3774: 0x0  nop
    ctx->pc = 0x1a3774u;
    // NOP
label_1a3778:
    // 0x1a3778: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a3778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a377c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1a377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1a3780: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A3780u;
    {
        const bool branch_taken_0x1a3780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3780) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A3788u;
    // 0x1a3788: 0xc056054  jal         func_158150
    ctx->pc = 0x1A3788u;
    SET_GPR_U32(ctx, 31, 0x1A3790u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3790u; }
        if (ctx->pc != 0x1A3790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3790u; }
        if (ctx->pc != 0x1A3790u) { return; }
    }
    ctx->pc = 0x1A3790u;
    // 0x1a3790: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1A3790u;
    SET_GPR_U32(ctx, 31, 0x1A3798u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3798u; }
        if (ctx->pc != 0x1A3798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3798u; }
        if (ctx->pc != 0x1A3798u) { return; }
    }
    ctx->pc = 0x1A3798u;
    // 0x1a3798: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1A3798u;
    SET_GPR_U32(ctx, 31, 0x1A37A0u);
    ctx->pc = 0x1A379Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3798u;
            // 0x1a379c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37A0u; }
        if (ctx->pc != 0x1A37A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37A0u; }
        if (ctx->pc != 0x1A37A0u) { return; }
    }
    ctx->pc = 0x1A37A0u;
    // 0x1a37a0: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1A37A0u;
    SET_GPR_U32(ctx, 31, 0x1A37A8u);
    ctx->pc = 0x1A37A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37A0u;
            // 0x1a37a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37A8u; }
        if (ctx->pc != 0x1A37A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37A8u; }
        if (ctx->pc != 0x1A37A8u) { return; }
    }
    ctx->pc = 0x1A37A8u;
    // 0x1a37a8: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1A37A8u;
    SET_GPR_U32(ctx, 31, 0x1A37B0u);
    ctx->pc = 0x1A37ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37A8u;
            // 0x1a37ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37B0u; }
        if (ctx->pc != 0x1A37B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37B0u; }
        if (ctx->pc != 0x1A37B0u) { return; }
    }
    ctx->pc = 0x1A37B0u;
    // 0x1a37b0: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x1A37B0u;
    {
        const bool branch_taken_0x1a37b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a37b0) {
            ctx->pc = 0x1A3C80u;
            goto label_1a3c80;
        }
    }
    ctx->pc = 0x1A37B8u;
label_1a37b8:
    // 0x1a37b8: 0xc05b9ac  jal         func_16E6B0
    ctx->pc = 0x1A37B8u;
    SET_GPR_U32(ctx, 31, 0x1A37C0u);
    ctx->pc = 0x1A37BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37B8u;
            // 0x1a37bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E6B0u;
    if (runtime->hasFunction(0x16E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x16E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37C0u; }
        if (ctx->pc != 0x1A37C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Vector_0x16e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37C0u; }
        if (ctx->pc != 0x1A37C0u) { return; }
    }
    ctx->pc = 0x1A37C0u;
    // 0x1a37c0: 0xc05b9a0  jal         func_16E680
    ctx->pc = 0x1A37C0u;
    SET_GPR_U32(ctx, 31, 0x1A37C8u);
    ctx->pc = 0x1A37C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37C0u;
            // 0x1a37c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E680u;
    if (runtime->hasFunction(0x16E680u)) {
        auto targetFn = runtime->lookupFunction(0x16E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37C8u; }
        if (ctx->pc != 0x1A37C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_State_0x16e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37C8u; }
        if (ctx->pc != 0x1A37C8u) { return; }
    }
    ctx->pc = 0x1A37C8u;
    // 0x1a37c8: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1A37C8u;
    SET_GPR_U32(ctx, 31, 0x1A37D0u);
    ctx->pc = 0x1A37CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37C8u;
            // 0x1a37cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37D0u; }
        if (ctx->pc != 0x1A37D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37D0u; }
        if (ctx->pc != 0x1A37D0u) { return; }
    }
    ctx->pc = 0x1A37D0u;
    // 0x1a37d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a37d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a37d4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1a37d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a37d8: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1A37D8u;
    SET_GPR_U32(ctx, 31, 0x1A37E0u);
    ctx->pc = 0x1A37DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37D8u;
            // 0x1a37dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37E0u; }
        if (ctx->pc != 0x1A37E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37E0u; }
        if (ctx->pc != 0x1A37E0u) { return; }
    }
    ctx->pc = 0x1A37E0u;
    // 0x1a37e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a37e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a37e4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1a37e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a37e8: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1A37E8u;
    SET_GPR_U32(ctx, 31, 0x1A37F0u);
    ctx->pc = 0x1A37ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37E8u;
            // 0x1a37ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37F0u; }
        if (ctx->pc != 0x1A37F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37F0u; }
        if (ctx->pc != 0x1A37F0u) { return; }
    }
    ctx->pc = 0x1A37F0u;
    // 0x1a37f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a37f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a37f4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1a37f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a37f8: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1A37F8u;
    SET_GPR_U32(ctx, 31, 0x1A3800u);
    ctx->pc = 0x1A37FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37F8u;
            // 0x1a37fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3800u; }
        if (ctx->pc != 0x1A3800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3800u; }
        if (ctx->pc != 0x1A3800u) { return; }
    }
    ctx->pc = 0x1A3800u;
    // 0x1a3800: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a3800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3804: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a3804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3808: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1A3808u;
    SET_GPR_U32(ctx, 31, 0x1A3810u);
    ctx->pc = 0x1A380Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3808u;
            // 0x1a380c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3810u; }
        if (ctx->pc != 0x1A3810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3810u; }
        if (ctx->pc != 0x1A3810u) { return; }
    }
    ctx->pc = 0x1A3810u;
    // 0x1a3810: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a3810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a3814: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a3814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a3818: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a3818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a381c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A381Cu;
    {
        const bool branch_taken_0x1a381c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a381c) {
            ctx->pc = 0x1A3870u;
            goto label_1a3870;
        }
    }
    ctx->pc = 0x1A3824u;
    // 0x1a3824: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1a3824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1a3828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3828u;
    {
        const bool branch_taken_0x1a3828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3828) {
            ctx->pc = 0x1A3840u;
            goto label_1a3840;
        }
    }
    ctx->pc = 0x1A3830u;
    // 0x1a3830: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1A3830u;
    SET_GPR_U32(ctx, 31, 0x1A3838u);
    ctx->pc = 0x1A3834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3830u;
            // 0x1a3834: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3838u; }
        if (ctx->pc != 0x1A3838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3838u; }
        if (ctx->pc != 0x1A3838u) { return; }
    }
    ctx->pc = 0x1A3838u;
    // 0x1a3838: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3838u;
    {
        const bool branch_taken_0x1a3838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3838) {
            ctx->pc = 0x1A3848u;
            goto label_1a3848;
        }
    }
    ctx->pc = 0x1A3840u;
label_1a3840:
    // 0x1a3840: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1A3840u;
    SET_GPR_U32(ctx, 31, 0x1A3848u);
    ctx->pc = 0x1A3844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3840u;
            // 0x1a3844: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3848u; }
        if (ctx->pc != 0x1A3848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3848u; }
        if (ctx->pc != 0x1A3848u) { return; }
    }
    ctx->pc = 0x1A3848u;
label_1a3848:
    // 0x1a3848: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1a3848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1a384c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A384Cu;
    {
        const bool branch_taken_0x1a384c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a384c) {
            ctx->pc = 0x1A3860u;
            goto label_1a3860;
        }
    }
    ctx->pc = 0x1A3854u;
    // 0x1a3854: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A3854u;
    {
        const bool branch_taken_0x1a3854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3854u;
            // 0x1a3858: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3854) {
            ctx->pc = 0x1A3880u;
            goto label_1a3880;
        }
    }
    ctx->pc = 0x1A385Cu;
    // 0x1a385c: 0x0  nop
    ctx->pc = 0x1a385cu;
    // NOP
label_1a3860:
    // 0x1a3860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3864: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3864u;
    {
        const bool branch_taken_0x1a3864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3864u;
            // 0x1a3868: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3864) {
            ctx->pc = 0x1A3880u;
            goto label_1a3880;
        }
    }
    ctx->pc = 0x1A386Cu;
    // 0x1a386c: 0x0  nop
    ctx->pc = 0x1a386cu;
    // NOP
label_1a3870:
    // 0x1a3870: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1A3870u;
    SET_GPR_U32(ctx, 31, 0x1A3878u);
    ctx->pc = 0x1A3874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3870u;
            // 0x1a3874: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3878u; }
        if (ctx->pc != 0x1A3878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3878u; }
        if (ctx->pc != 0x1A3878u) { return; }
    }
    ctx->pc = 0x1A3878u;
    // 0x1a3878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a387c: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1a387cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_1a3880:
    // 0x1a3880: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a3880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a3884: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a3884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1a3888: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a3888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a388c: 0x1c80000c  bgtz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A388Cu;
    {
        const bool branch_taken_0x1a388c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1a388c) {
            ctx->pc = 0x1A38C0u;
            goto label_1a38c0;
        }
    }
    ctx->pc = 0x1A3894u;
    // 0x1a3894: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a3894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a3898: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1a3898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1a389c: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1a389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a38a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a38a4: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1a38a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1a38a8: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1a38a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a38ac: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1A38ACu;
    SET_GPR_U32(ctx, 31, 0x1A38B4u);
    ctx->pc = 0x1A38B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38ACu;
            // 0x1a38b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A38B4u; }
        if (ctx->pc != 0x1A38B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A38B4u; }
        if (ctx->pc != 0x1A38B4u) { return; }
    }
    ctx->pc = 0x1A38B4u;
    // 0x1a38b4: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x1A38B4u;
    {
        const bool branch_taken_0x1a38b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38b4) {
            ctx->pc = 0x1A3C70u;
            goto label_1a3c70;
        }
    }
    ctx->pc = 0x1A38BCu;
    // 0x1a38bc: 0x0  nop
    ctx->pc = 0x1a38bcu;
    // NOP
label_1a38c0:
    // 0x1a38c0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a38c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a38c4: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A38C4u;
    {
        const bool branch_taken_0x1a38c4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A38C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38C4u;
            // 0x1a38c8: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38c4) {
            ctx->pc = 0x1A38E0u;
            goto label_1a38e0;
        }
    }
    ctx->pc = 0x1A38CCu;
    // 0x1a38cc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A38CCu;
    {
        const bool branch_taken_0x1a38cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a38cc) {
            ctx->pc = 0x1A38E0u;
            goto label_1a38e0;
        }
    }
    ctx->pc = 0x1A38D4u;
    // 0x1a38d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a38d8: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x1A38D8u;
    {
        const bool branch_taken_0x1a38d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A38DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38D8u;
            // 0x1a38dc: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38d8) {
            ctx->pc = 0x1A3C70u;
            goto label_1a3c70;
        }
    }
    ctx->pc = 0x1A38E0u;
label_1a38e0:
    // 0x1a38e0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1a38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a38e4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a38e8: 0x108300dd  beq         $a0, $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x1A38E8u;
    {
        const bool branch_taken_0x1a38e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A38ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38E8u;
            // 0x1a38ec: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38e8) {
            ctx->pc = 0x1A3C60u;
            goto label_1a3c60;
        }
    }
    ctx->pc = 0x1A38F0u;
    // 0x1a38f0: 0x108300db  beq         $a0, $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x1A38F0u;
    {
        const bool branch_taken_0x1a38f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a38f0) {
            ctx->pc = 0x1A3C60u;
            goto label_1a3c60;
        }
    }
    ctx->pc = 0x1A38F8u;
    // 0x1a38f8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a38fc: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a38fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a3900: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a3900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3904: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1a3904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1a3908: 0x24c608c0  addiu       $a2, $a2, 0x8C0
    ctx->pc = 0x1a3908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2240));
    // 0x1a390c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a390cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3910: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a3910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3914: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x1a3914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1a3918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a391c: 0x0  nop
    ctx->pc = 0x1a391cu;
    // NOP
    // 0x1a3920: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3924: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1a3924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1a3928: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a3928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a392c: 0x2442ffba  addiu       $v0, $v0, -0x46
    ctx->pc = 0x1a392cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
    // 0x1a3930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3934: 0x0  nop
    ctx->pc = 0x1a3934u;
    // NOP
    // 0x1a3938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a393c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1a393cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1a3940: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a3940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3944: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1a3944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1a3948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a394c: 0x0  nop
    ctx->pc = 0x1a394cu;
    // NOP
    // 0x1a3950: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3954: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1a3954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1a3958: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a3958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a395c: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1a395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1a3960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3964: 0x0  nop
    ctx->pc = 0x1a3964u;
    // NOP
    // 0x1a3968: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a396c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1A396Cu;
    SET_GPR_U32(ctx, 31, 0x1A3974u);
    ctx->pc = 0x1A3970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A396Cu;
            // 0x1a3970: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3974u; }
        if (ctx->pc != 0x1A3974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3974u; }
        if (ctx->pc != 0x1A3974u) { return; }
    }
    ctx->pc = 0x1A3974u;
    // 0x1a3974: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a3974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3978: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a3978u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a397c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a397cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3980: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x1a3980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x1a3984: 0x24c608c0  addiu       $a2, $a2, 0x8C0
    ctx->pc = 0x1a3984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2240));
    // 0x1a3988: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a3988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a398c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a398cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3990: 0x2442ff38  addiu       $v0, $v0, -0xC8
    ctx->pc = 0x1a3990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967096));
    // 0x1a3994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3998: 0x0  nop
    ctx->pc = 0x1a3998u;
    // NOP
    // 0x1a399c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a399cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a39a0: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1a39a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1a39a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a39a8: 0x2442ffce  addiu       $v0, $v0, -0x32
    ctx->pc = 0x1a39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967246));
    // 0x1a39ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a39acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a39b0: 0x0  nop
    ctx->pc = 0x1a39b0u;
    // NOP
    // 0x1a39b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a39b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a39b8: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1a39b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1a39bc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a39c0: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x1a39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1a39c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a39c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a39c8: 0x0  nop
    ctx->pc = 0x1a39c8u;
    // NOP
    // 0x1a39cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a39ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a39d0: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1a39d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1a39d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a39d8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1a39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a39dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a39dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a39e0: 0x0  nop
    ctx->pc = 0x1a39e0u;
    // NOP
    // 0x1a39e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a39e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a39e8: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1A39E8u;
    SET_GPR_U32(ctx, 31, 0x1A39F0u);
    ctx->pc = 0x1A39ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A39E8u;
            // 0x1a39ec: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A39F0u; }
        if (ctx->pc != 0x1A39F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A39F0u; }
        if (ctx->pc != 0x1A39F0u) { return; }
    }
    ctx->pc = 0x1A39F0u;
    // 0x1a39f0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a39f4: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a39f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a39f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a39f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a39fc: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x1a39fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x1a3a00: 0x24c608c0  addiu       $a2, $a2, 0x8C0
    ctx->pc = 0x1a3a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2240));
    // 0x1a3a04: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a3a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a08: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a3a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a0c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1a3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1a3a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3a14: 0x0  nop
    ctx->pc = 0x1a3a14u;
    // NOP
    // 0x1a3a18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3a1c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x1a3a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1a3a20: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a3a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3a24: 0x2442ffce  addiu       $v0, $v0, -0x32
    ctx->pc = 0x1a3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967246));
    // 0x1a3a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3a2c: 0x0  nop
    ctx->pc = 0x1a3a2cu;
    // NOP
    // 0x1a3a30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3a30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3a34: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1a3a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1a3a38: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a3a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3a3c: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x1a3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1a3a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3a44: 0x0  nop
    ctx->pc = 0x1a3a44u;
    // NOP
    // 0x1a3a48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3a4c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1a3a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1a3a50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3a54: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1a3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a3a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3a5c: 0x0  nop
    ctx->pc = 0x1a3a5cu;
    // NOP
    // 0x1a3a60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3a64: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1A3A64u;
    SET_GPR_U32(ctx, 31, 0x1A3A6Cu);
    ctx->pc = 0x1A3A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3A64u;
            // 0x1a3a68: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3A6Cu; }
        if (ctx->pc != 0x1A3A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3A6Cu; }
        if (ctx->pc != 0x1A3A6Cu) { return; }
    }
    ctx->pc = 0x1A3A6Cu;
    // 0x1a3a6c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a3a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3a70: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a3a70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a3a74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a3a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3a78: 0x2605005c  addiu       $a1, $s0, 0x5C
    ctx->pc = 0x1a3a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1a3a7c: 0x24c608c0  addiu       $a2, $a2, 0x8C0
    ctx->pc = 0x1a3a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2240));
    // 0x1a3a80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a3a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a84: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a3a84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a88: 0x2442ff10  addiu       $v0, $v0, -0xF0
    ctx->pc = 0x1a3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967056));
    // 0x1a3a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3a90: 0x0  nop
    ctx->pc = 0x1a3a90u;
    // NOP
    // 0x1a3a94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3a98: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x1a3a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1a3a9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3aa0: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1a3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1a3aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3aa8: 0x0  nop
    ctx->pc = 0x1a3aa8u;
    // NOP
    // 0x1a3aac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3ab0: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x1a3ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x1a3ab4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a3ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3ab8: 0x2442ff38  addiu       $v0, $v0, -0xC8
    ctx->pc = 0x1a3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967096));
    // 0x1a3abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3ac0: 0x0  nop
    ctx->pc = 0x1a3ac0u;
    // NOP
    // 0x1a3ac4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3ac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3ac8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x1a3ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x1a3acc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a3accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3ad0: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x1a3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x1a3ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3ad8: 0x0  nop
    ctx->pc = 0x1a3ad8u;
    // NOP
    // 0x1a3adc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3ae0: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1A3AE0u;
    SET_GPR_U32(ctx, 31, 0x1A3AE8u);
    ctx->pc = 0x1A3AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3AE0u;
            // 0x1a3ae4: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3AE8u; }
        if (ctx->pc != 0x1A3AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3AE8u; }
        if (ctx->pc != 0x1A3AE8u) { return; }
    }
    ctx->pc = 0x1A3AE8u;
    // 0x1a3ae8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3aec: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a3aecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a3af0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a3af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3af4: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x1a3af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1a3af8: 0x24c608c0  addiu       $a2, $a2, 0x8C0
    ctx->pc = 0x1a3af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2240));
    // 0x1a3afc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a3afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b00: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a3b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b04: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x1a3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1a3b08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3b0c: 0x0  nop
    ctx->pc = 0x1a3b0cu;
    // NOP
    // 0x1a3b10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3b14: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x1a3b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x1a3b18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3b1c: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1a3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1a3b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3b24: 0x0  nop
    ctx->pc = 0x1a3b24u;
    // NOP
    // 0x1a3b28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3b2c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1a3b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1a3b30: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3b34: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x1a3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1a3b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3b3c: 0x0  nop
    ctx->pc = 0x1a3b3cu;
    // NOP
    // 0x1a3b40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3b40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3b44: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1a3b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1a3b48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3b4c: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x1a3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x1a3b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3b54: 0x0  nop
    ctx->pc = 0x1a3b54u;
    // NOP
    // 0x1a3b58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3b5c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1A3B5Cu;
    SET_GPR_U32(ctx, 31, 0x1A3B64u);
    ctx->pc = 0x1A3B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3B5Cu;
            // 0x1a3b60: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3B64u; }
        if (ctx->pc != 0x1A3B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3B64u; }
        if (ctx->pc != 0x1A3B64u) { return; }
    }
    ctx->pc = 0x1A3B64u;
    // 0x1a3b64: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3b68: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a3b68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a3b6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a3b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3b70: 0x2605007c  addiu       $a1, $s0, 0x7C
    ctx->pc = 0x1a3b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x1a3b74: 0x24c608c0  addiu       $a2, $a2, 0x8C0
    ctx->pc = 0x1a3b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2240));
    // 0x1a3b78: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a3b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b7c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a3b7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b80: 0x2442fef2  addiu       $v0, $v0, -0x10E
    ctx->pc = 0x1a3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967026));
    // 0x1a3b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3b88: 0x0  nop
    ctx->pc = 0x1a3b88u;
    // NOP
    // 0x1a3b8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3b90: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1a3b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1a3b94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3b98: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1a3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1a3b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3ba0: 0x0  nop
    ctx->pc = 0x1a3ba0u;
    // NOP
    // 0x1a3ba4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3ba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3ba8: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1a3ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1a3bac: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a3bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3bb0: 0x2442ff10  addiu       $v0, $v0, -0xF0
    ctx->pc = 0x1a3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967056));
    // 0x1a3bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3bb8: 0x0  nop
    ctx->pc = 0x1a3bb8u;
    // NOP
    // 0x1a3bbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3bbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3bc0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x1a3bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1a3bc4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3bc8: 0x2442002d  addiu       $v0, $v0, 0x2D
    ctx->pc = 0x1a3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
    // 0x1a3bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3bd0: 0x0  nop
    ctx->pc = 0x1a3bd0u;
    // NOP
    // 0x1a3bd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3bd8: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1A3BD8u;
    SET_GPR_U32(ctx, 31, 0x1A3BE0u);
    ctx->pc = 0x1A3BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3BD8u;
            // 0x1a3bdc: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3BE0u; }
        if (ctx->pc != 0x1A3BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3BE0u; }
        if (ctx->pc != 0x1A3BE0u) { return; }
    }
    ctx->pc = 0x1A3BE0u;
    // 0x1a3be0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a3be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3be4: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a3be4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a3be8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a3be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3bec: 0x2605008c  addiu       $a1, $s0, 0x8C
    ctx->pc = 0x1a3becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x1a3bf0: 0x24c608c0  addiu       $a2, $a2, 0x8C0
    ctx->pc = 0x1a3bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2240));
    // 0x1a3bf4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a3bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bf8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a3bf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bfc: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x1a3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1a3c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3c04: 0x0  nop
    ctx->pc = 0x1a3c04u;
    // NOP
    // 0x1a3c08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3c0c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x1a3c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x1a3c10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3c14: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1a3c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1a3c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3c1c: 0x0  nop
    ctx->pc = 0x1a3c1cu;
    // NOP
    // 0x1a3c20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3c24: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1a3c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x1a3c28: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1a3c2c: 0x2442010e  addiu       $v0, $v0, 0x10E
    ctx->pc = 0x1a3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 270));
    // 0x1a3c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3c34: 0x0  nop
    ctx->pc = 0x1a3c34u;
    // NOP
    // 0x1a3c38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3c3c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x1a3c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x1a3c40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3c44: 0x2442002d  addiu       $v0, $v0, 0x2D
    ctx->pc = 0x1a3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
    // 0x1a3c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3c4c: 0x0  nop
    ctx->pc = 0x1a3c4cu;
    // NOP
    // 0x1a3c50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3c54: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1A3C54u;
    SET_GPR_U32(ctx, 31, 0x1A3C5Cu);
    ctx->pc = 0x1A3C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C54u;
            // 0x1a3c58: 0xe6000098  swc1        $f0, 0x98($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C5Cu; }
        if (ctx->pc != 0x1A3C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C5Cu; }
        if (ctx->pc != 0x1A3C5Cu) { return; }
    }
    ctx->pc = 0x1A3C5Cu;
    // 0x1a3c5c: 0x0  nop
    ctx->pc = 0x1a3c5cu;
    // NOP
label_1a3c60:
    // 0x1a3c60: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a3c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a3c64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a3c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a3c68: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1a3c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1a3c6c: 0x0  nop
    ctx->pc = 0x1a3c6cu;
    // NOP
label_1a3c70:
    // 0x1a3c70: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a3c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a3c74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a3c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a3c78: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1a3c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1a3c7c: 0x0  nop
    ctx->pc = 0x1a3c7cu;
    // NOP
label_1a3c80:
    // 0x1a3c80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a3c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3c84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a3c84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3c88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a3c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3c8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C94u;
            // 0x1a3c98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2038u: goto label_1a2038;
            case 0x1A2070u: goto label_1a2070;
            case 0x1A20A8u: goto label_1a20a8;
            case 0x1A20E0u: goto label_1a20e0;
            case 0x1A2140u: goto label_1a2140;
            case 0x1A2178u: goto label_1a2178;
            case 0x1A2188u: goto label_1a2188;
            case 0x1A21C0u: goto label_1a21c0;
            case 0x1A2220u: goto label_1a2220;
            case 0x1A2268u: goto label_1a2268;
            case 0x1A22B0u: goto label_1a22b0;
            case 0x1A22D8u: goto label_1a22d8;
            case 0x1A2328u: goto label_1a2328;
            case 0x1A2388u: goto label_1a2388;
            case 0x1A23C8u: goto label_1a23c8;
            case 0x1A2410u: goto label_1a2410;
            case 0x1A2460u: goto label_1a2460;
            case 0x1A24B0u: goto label_1a24b0;
            case 0x1A2510u: goto label_1a2510;
            case 0x1A2548u: goto label_1a2548;
            case 0x1A25E0u: goto label_1a25e0;
            case 0x1A2628u: goto label_1a2628;
            case 0x1A2678u: goto label_1a2678;
            case 0x1A26C8u: goto label_1a26c8;
            case 0x1A2728u: goto label_1a2728;
            case 0x1A2760u: goto label_1a2760;
            case 0x1A2868u: goto label_1a2868;
            case 0x1A28C0u: goto label_1a28c0;
            case 0x1A28F8u: goto label_1a28f8;
            case 0x1A2A00u: goto label_1a2a00;
            case 0x1A2A38u: goto label_1a2a38;
            case 0x1A2A80u: goto label_1a2a80;
            case 0x1A2AA8u: goto label_1a2aa8;
            case 0x1A2AD8u: goto label_1a2ad8;
            case 0x1A2AF8u: goto label_1a2af8;
            case 0x1A2B38u: goto label_1a2b38;
            case 0x1A2B70u: goto label_1a2b70;
            case 0x1A2BD8u: goto label_1a2bd8;
            case 0x1A2C38u: goto label_1a2c38;
            case 0x1A2C60u: goto label_1a2c60;
            case 0x1A2C90u: goto label_1a2c90;
            case 0x1A2CE8u: goto label_1a2ce8;
            case 0x1A2D18u: goto label_1a2d18;
            case 0x1A2D78u: goto label_1a2d78;
            case 0x1A2E00u: goto label_1a2e00;
            case 0x1A2E58u: goto label_1a2e58;
            case 0x1A2EA8u: goto label_1a2ea8;
            case 0x1A2F08u: goto label_1a2f08;
            case 0x1A2FD8u: goto label_1a2fd8;
            case 0x1A3030u: goto label_1a3030;
            case 0x1A30B8u: goto label_1a30b8;
            case 0x1A32A0u: goto label_1a32a0;
            case 0x1A32E8u: goto label_1a32e8;
            case 0x1A3330u: goto label_1a3330;
            case 0x1A3368u: goto label_1a3368;
            case 0x1A33A0u: goto label_1a33a0;
            case 0x1A33B8u: goto label_1a33b8;
            case 0x1A3418u: goto label_1a3418;
            case 0x1A3430u: goto label_1a3430;
            case 0x1A3468u: goto label_1a3468;
            case 0x1A3480u: goto label_1a3480;
            case 0x1A34E0u: goto label_1a34e0;
            case 0x1A34F8u: goto label_1a34f8;
            case 0x1A3520u: goto label_1a3520;
            case 0x1A35F0u: goto label_1a35f0;
            case 0x1A3608u: goto label_1a3608;
            case 0x1A3620u: goto label_1a3620;
            case 0x1A3638u: goto label_1a3638;
            case 0x1A3650u: goto label_1a3650;
            case 0x1A3668u: goto label_1a3668;
            case 0x1A3680u: goto label_1a3680;
            case 0x1A3698u: goto label_1a3698;
            case 0x1A36B0u: goto label_1a36b0;
            case 0x1A36C8u: goto label_1a36c8;
            case 0x1A3708u: goto label_1a3708;
            case 0x1A3750u: goto label_1a3750;
            case 0x1A3778u: goto label_1a3778;
            case 0x1A37B8u: goto label_1a37b8;
            case 0x1A3840u: goto label_1a3840;
            case 0x1A3848u: goto label_1a3848;
            case 0x1A3860u: goto label_1a3860;
            case 0x1A3870u: goto label_1a3870;
            case 0x1A3880u: goto label_1a3880;
            case 0x1A38C0u: goto label_1a38c0;
            case 0x1A38E0u: goto label_1a38e0;
            case 0x1A3C60u: goto label_1a3c60;
            case 0x1A3C70u: goto label_1a3c70;
            case 0x1A3C80u: goto label_1a3c80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3C9Cu;
}

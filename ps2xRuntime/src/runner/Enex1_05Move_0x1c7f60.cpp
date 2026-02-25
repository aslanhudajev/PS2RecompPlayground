#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex1_05Move
// Address: 0x1c7f60 - 0x1c8664
void Enex1_05Move_0x1c7f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex1_05Move_0x1c7f60");
#endif

    ctx->pc = 0x1c7f60u;

label_1c7f60:
    // 0x1c7f60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c7f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c7f64:
    // 0x1c7f64: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c7f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1c7f68:
    // 0x1c7f68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c7f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1c7f6c:
    // 0x1c7f6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c7f6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c7f70:
    // 0x1c7f70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c7f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c7f74:
    // 0x1c7f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7f78:
    // 0x1c7f78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c7f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c7f7c:
    // 0x1c7f7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c7f80:
    // 0x1c7f80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c7f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c7f84:
    // 0x1c7f84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c7f88:
    // 0x1c7f88: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1c7f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c7f8c:
    // 0x1c7f8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f90:
    // 0x1c7f90: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1c7f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7f94:
    // 0x1c7f94: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c7f94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c7f98:
    // 0x1c7f98: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1c7f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1c7f9c:
    // 0x1c7f9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c7fa0:
    // 0x1c7fa0: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1c7fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c7fa4:
    // 0x1c7fa4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1c7fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7fa8:
    // 0x1c7fa8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c7fa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c7fac:
    // 0x1c7fac: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1c7facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1c7fb0:
    // 0x1c7fb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c7fb4:
    // 0x1c7fb4: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1c7fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c7fb8:
    // 0x1c7fb8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1c7fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7fbc:
    // 0x1c7fbc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c7fbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c7fc0:
    // 0x1c7fc0: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1c7fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1c7fc4:
    // 0x1c7fc4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c7fc8:
    // 0x1c7fc8: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1c7fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c7fcc:
    // 0x1c7fcc: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1c7fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7fd0:
    // 0x1c7fd0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c7fd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c7fd4:
    // 0x1c7fd4: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1c7fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1c7fd8:
    // 0x1c7fd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c7fdc:
    // 0x1c7fdc: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1c7fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c7fe0:
    // 0x1c7fe0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1c7fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7fe4:
    // 0x1c7fe4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c7fe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c7fe8:
    // 0x1c7fe8: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1c7fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1c7fec:
    // 0x1c7fec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c7ff0:
    // 0x1c7ff0: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1c7ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7ff4:
    // 0x1c7ff4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c7ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7ff8:
    // 0x1c7ff8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1c7ffc:
    if (ctx->pc == 0x1C7FFCu) {
        ctx->pc = 0x1C7FFCu;
            // 0x1c7ffc: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1C8000u;
        goto label_1c8000;
    }
    ctx->pc = 0x1C7FF8u;
    {
        const bool branch_taken_0x1c7ff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7FF8u;
            // 0x1c7ffc: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ff8) {
            ctx->pc = 0x1C8018u;
            goto label_1c8018;
        }
    }
    ctx->pc = 0x1C8000u;
label_1c8000:
    // 0x1c8000: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c8000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c8004:
    // 0x1c8004: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8004u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8008:
    // 0x1c8008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c800c:
    // 0x1c800c: 0x0  nop
    ctx->pc = 0x1c800cu;
    // NOP
label_1c8010:
    // 0x1c8010: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c8014:
    // 0x1c8014: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c8014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1c8018:
    // 0x1c8018: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c8018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c801c:
    // 0x1c801c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c801cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1c8020:
    // 0x1c8020: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8020u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8024:
    // 0x1c8024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8028:
    // 0x1c8028: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1c8028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c802c:
    // 0x1c802c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c802cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8030:
    // 0x1c8030: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1c8034:
    if (ctx->pc == 0x1C8034u) {
        ctx->pc = 0x1C8034u;
            // 0x1c8034: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1C8038u;
        goto label_1c8038;
    }
    ctx->pc = 0x1C8030u;
    {
        const bool branch_taken_0x1c8030 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8030u;
            // 0x1c8034: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8030) {
            ctx->pc = 0x1C8050u;
            goto label_1c8050;
        }
    }
    ctx->pc = 0x1C8038u;
label_1c8038:
    // 0x1c8038: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c8038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c803c:
    // 0x1c803c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c803cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8040:
    // 0x1c8040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8044:
    // 0x1c8044: 0x0  nop
    ctx->pc = 0x1c8044u;
    // NOP
label_1c8048:
    // 0x1c8048: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c8048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c804c:
    // 0x1c804c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c804cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c8050:
    // 0x1c8050: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c8050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8054:
    // 0x1c8054: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c8054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1c8058:
    // 0x1c8058: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8058u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c805c:
    // 0x1c805c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c805cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8060:
    // 0x1c8060: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1c8060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8064:
    // 0x1c8064: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8068:
    // 0x1c8068: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1c806c:
    if (ctx->pc == 0x1C806Cu) {
        ctx->pc = 0x1C806Cu;
            // 0x1c806c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1C8070u;
        goto label_1c8070;
    }
    ctx->pc = 0x1C8068u;
    {
        const bool branch_taken_0x1c8068 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C806Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8068u;
            // 0x1c806c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8068) {
            ctx->pc = 0x1C8088u;
            goto label_1c8088;
        }
    }
    ctx->pc = 0x1C8070u;
label_1c8070:
    // 0x1c8070: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c8070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c8074:
    // 0x1c8074: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8074u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8078:
    // 0x1c8078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c807c:
    // 0x1c807c: 0x0  nop
    ctx->pc = 0x1c807cu;
    // NOP
label_1c8080:
    // 0x1c8080: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c8084:
    // 0x1c8084: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c8084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c8088:
    // 0x1c8088: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c8088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c808c:
    // 0x1c808c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c808cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1c8090:
    // 0x1c8090: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8090u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8094:
    // 0x1c8094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8098:
    // 0x1c8098: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1c8098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c809c:
    // 0x1c809c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c809cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c80a0:
    // 0x1c80a0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1c80a4:
    if (ctx->pc == 0x1C80A4u) {
        ctx->pc = 0x1C80A4u;
            // 0x1c80a4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1C80A8u;
        goto label_1c80a8;
    }
    ctx->pc = 0x1C80A0u;
    {
        const bool branch_taken_0x1c80a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C80A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C80A0u;
            // 0x1c80a4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80a0) {
            ctx->pc = 0x1C80C0u;
            goto label_1c80c0;
        }
    }
    ctx->pc = 0x1C80A8u;
label_1c80a8:
    // 0x1c80a8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c80ac:
    // 0x1c80ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c80acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c80b0:
    // 0x1c80b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c80b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c80b4:
    // 0x1c80b4: 0x0  nop
    ctx->pc = 0x1c80b4u;
    // NOP
label_1c80b8:
    // 0x1c80b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c80b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c80bc:
    // 0x1c80bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c80bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c80c0:
    // 0x1c80c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c80c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c80c4:
    // 0x1c80c4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1c80c8:
    // 0x1c80c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c80c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c80cc:
    // 0x1c80cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c80ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c80d0:
    // 0x1c80d0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1c80d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c80d4:
    // 0x1c80d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c80d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c80d8:
    // 0x1c80d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1c80dc:
    if (ctx->pc == 0x1C80DCu) {
        ctx->pc = 0x1C80DCu;
            // 0x1c80dc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1C80E0u;
        goto label_1c80e0;
    }
    ctx->pc = 0x1C80D8u;
    {
        const bool branch_taken_0x1c80d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C80DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C80D8u;
            // 0x1c80dc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80d8) {
            ctx->pc = 0x1C80F8u;
            goto label_1c80f8;
        }
    }
    ctx->pc = 0x1C80E0u;
label_1c80e0:
    // 0x1c80e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c80e4:
    // 0x1c80e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c80e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c80e8:
    // 0x1c80e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c80e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c80ec:
    // 0x1c80ec: 0x0  nop
    ctx->pc = 0x1c80ecu;
    // NOP
label_1c80f0:
    // 0x1c80f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c80f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c80f4:
    // 0x1c80f4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c80f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c80f8:
    // 0x1c80f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c80f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c80fc:
    // 0x1c80fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1c8100:
    // 0x1c8100: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8100u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8104:
    // 0x1c8104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8108:
    // 0x1c8108: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1c8108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c810c:
    // 0x1c810c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c810cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8110:
    // 0x1c8110: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1c8114:
    if (ctx->pc == 0x1C8114u) {
        ctx->pc = 0x1C8114u;
            // 0x1c8114: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1C8118u;
        goto label_1c8118;
    }
    ctx->pc = 0x1C8110u;
    {
        const bool branch_taken_0x1c8110 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8110u;
            // 0x1c8114: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8110) {
            ctx->pc = 0x1C8130u;
            goto label_1c8130;
        }
    }
    ctx->pc = 0x1C8118u;
label_1c8118:
    // 0x1c8118: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c8118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c811c:
    // 0x1c811c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c811cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8120:
    // 0x1c8120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8124:
    // 0x1c8124: 0x0  nop
    ctx->pc = 0x1c8124u;
    // NOP
label_1c8128:
    // 0x1c8128: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c8128u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c812c:
    // 0x1c812c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c812cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c8130:
    // 0x1c8130: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c8130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8134:
    // 0x1c8134: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1c8134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1c8138:
    // 0x1c8138: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c8138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c813c:
    // 0x1c813c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c8140:
    // 0x1c8140: 0xc07219c  jal         func_1C8670
label_1c8144:
    if (ctx->pc == 0x1C8144u) {
        ctx->pc = 0x1C8144u;
            // 0x1c8144: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x1C8148u;
        goto label_1c8148;
    }
    ctx->pc = 0x1C8140u;
    SET_GPR_U32(ctx, 31, 0x1C8148u);
    ctx->pc = 0x1C8144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8140u;
            // 0x1c8144: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8670u;
    if (runtime->hasFunction(0x1C8670u)) {
        auto targetFn = runtime->lookupFunction(0x1C8670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8148u; }
        if (ctx->pc != 0x1C8148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1c8670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8148u; }
        if (ctx->pc != 0x1C8148u) { return; }
    }
    ctx->pc = 0x1C8148u;
label_1c8148:
    // 0x1c8148: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1c8148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1c814c:
    // 0x1c814c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1c814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1c8150:
    // 0x1c8150: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x1c8150u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
label_1c8154:
    // 0x1c8154: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1c8154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1c8158:
    // 0x1c8158: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c8158u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1c815c:
    // 0x1c815c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c815cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8160:
    // 0x1c8160: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c8160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c8164:
    // 0x1c8164: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x1c8164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_1c8168:
    // 0x1c8168: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c8168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1c816c:
    // 0x1c816c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1c816cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1c8170:
    // 0x1c8170: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1c8170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8174:
    // 0x1c8174: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c8174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1c8178:
    // 0x1c8178: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1c8178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1c817c:
    // 0x1c817c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1c817cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8180:
    // 0x1c8180: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c8180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1c8184:
    // 0x1c8184: 0xe60100d4  swc1        $f1, 0xD4($s0)
    ctx->pc = 0x1c8184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1c8188:
    // 0x1c8188: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1c8188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c818c:
    // 0x1c818c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c818cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c8190:
    // 0x1c8190: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1c8190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1c8194:
    // 0x1c8194: 0xc04b788  jal         func_12DE20
label_1c8198:
    if (ctx->pc == 0x1C8198u) {
        ctx->pc = 0x1C8198u;
            // 0x1c8198: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C819Cu;
        goto label_1c819c;
    }
    ctx->pc = 0x1C8194u;
    SET_GPR_U32(ctx, 31, 0x1C819Cu);
    ctx->pc = 0x1C8198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8194u;
            // 0x1c8198: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C819Cu; }
        if (ctx->pc != 0x1C819Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C819Cu; }
        if (ctx->pc != 0x1C819Cu) { return; }
    }
    ctx->pc = 0x1C819Cu;
label_1c819c:
    // 0x1c819c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c819cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c81a0:
    // 0x1c81a0: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1c81a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c81a4:
    // 0x1c81a4: 0xc04b7da  jal         func_12DF68
label_1c81a8:
    if (ctx->pc == 0x1C81A8u) {
        ctx->pc = 0x1C81A8u;
            // 0x1c81a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C81ACu;
        goto label_1c81ac;
    }
    ctx->pc = 0x1C81A4u;
    SET_GPR_U32(ctx, 31, 0x1C81ACu);
    ctx->pc = 0x1C81A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C81A4u;
            // 0x1c81a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81ACu; }
        if (ctx->pc != 0x1C81ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81ACu; }
        if (ctx->pc != 0x1C81ACu) { return; }
    }
    ctx->pc = 0x1C81ACu;
label_1c81ac:
    // 0x1c81ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c81acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c81b0:
    // 0x1c81b0: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1c81b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c81b4:
    // 0x1c81b4: 0xc04b804  jal         func_12E010
label_1c81b8:
    if (ctx->pc == 0x1C81B8u) {
        ctx->pc = 0x1C81B8u;
            // 0x1c81b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C81BCu;
        goto label_1c81bc;
    }
    ctx->pc = 0x1C81B4u;
    SET_GPR_U32(ctx, 31, 0x1C81BCu);
    ctx->pc = 0x1C81B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C81B4u;
            // 0x1c81b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81BCu; }
        if (ctx->pc != 0x1C81BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81BCu; }
        if (ctx->pc != 0x1C81BCu) { return; }
    }
    ctx->pc = 0x1C81BCu;
label_1c81bc:
    // 0x1c81bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c81bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c81c0:
    // 0x1c81c0: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1c81c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c81c4:
    // 0x1c81c4: 0xc04b7b0  jal         func_12DEC0
label_1c81c8:
    if (ctx->pc == 0x1C81C8u) {
        ctx->pc = 0x1C81C8u;
            // 0x1c81c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C81CCu;
        goto label_1c81cc;
    }
    ctx->pc = 0x1C81C4u;
    SET_GPR_U32(ctx, 31, 0x1C81CCu);
    ctx->pc = 0x1C81C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C81C4u;
            // 0x1c81c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81CCu; }
        if (ctx->pc != 0x1C81CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81CCu; }
        if (ctx->pc != 0x1C81CCu) { return; }
    }
    ctx->pc = 0x1C81CCu;
label_1c81cc:
    // 0x1c81cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c81ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c81d0:
    // 0x1c81d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c81d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c81d4:
    // 0x1c81d4: 0xc04b75e  jal         func_12DD78
label_1c81d8:
    if (ctx->pc == 0x1C81D8u) {
        ctx->pc = 0x1C81D8u;
            // 0x1c81d8: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1C81DCu;
        goto label_1c81dc;
    }
    ctx->pc = 0x1C81D4u;
    SET_GPR_U32(ctx, 31, 0x1C81DCu);
    ctx->pc = 0x1C81D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C81D4u;
            // 0x1c81d8: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81DCu; }
        if (ctx->pc != 0x1C81DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81DCu; }
        if (ctx->pc != 0x1C81DCu) { return; }
    }
    ctx->pc = 0x1C81DCu;
label_1c81dc:
    // 0x1c81dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c81dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c81e0:
    // 0x1c81e0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c81e4:
    // 0x1c81e4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1c81e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c81e8:
    // 0x1c81e8: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_1c81ec:
    if (ctx->pc == 0x1C81ECu) {
        ctx->pc = 0x1C81F0u;
        goto label_1c81f0;
    }
    ctx->pc = 0x1C81E8u;
    {
        const bool branch_taken_0x1c81e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c81e8) {
            ctx->pc = 0x1C8270u;
            goto label_1c8270;
        }
    }
    ctx->pc = 0x1C81F0u;
label_1c81f0:
    // 0x1c81f0: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1c81f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1c81f4:
    // 0x1c81f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c81f8:
    if (ctx->pc == 0x1C81F8u) {
        ctx->pc = 0x1C81FCu;
        goto label_1c81fc;
    }
    ctx->pc = 0x1C81F4u;
    {
        const bool branch_taken_0x1c81f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c81f4) {
            ctx->pc = 0x1C8210u;
            goto label_1c8210;
        }
    }
    ctx->pc = 0x1C81FCu;
label_1c81fc:
    // 0x1c81fc: 0xc0604f0  jal         func_1813C0
label_1c8200:
    if (ctx->pc == 0x1C8200u) {
        ctx->pc = 0x1C8200u;
            // 0x1c8200: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C8204u;
        goto label_1c8204;
    }
    ctx->pc = 0x1C81FCu;
    SET_GPR_U32(ctx, 31, 0x1C8204u);
    ctx->pc = 0x1C8200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C81FCu;
            // 0x1c8200: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8204u; }
        if (ctx->pc != 0x1C8204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8204u; }
        if (ctx->pc != 0x1C8204u) { return; }
    }
    ctx->pc = 0x1C8204u;
label_1c8204:
    // 0x1c8204: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c8208:
    if (ctx->pc == 0x1C8208u) {
        ctx->pc = 0x1C820Cu;
        goto label_1c820c;
    }
    ctx->pc = 0x1C8204u;
    {
        const bool branch_taken_0x1c8204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8204) {
            ctx->pc = 0x1C8218u;
            goto label_1c8218;
        }
    }
    ctx->pc = 0x1C820Cu;
label_1c820c:
    // 0x1c820c: 0x0  nop
    ctx->pc = 0x1c820cu;
    // NOP
label_1c8210:
    // 0x1c8210: 0xc0604dc  jal         func_181370
label_1c8214:
    if (ctx->pc == 0x1C8214u) {
        ctx->pc = 0x1C8214u;
            // 0x1c8214: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C8218u;
        goto label_1c8218;
    }
    ctx->pc = 0x1C8210u;
    SET_GPR_U32(ctx, 31, 0x1C8218u);
    ctx->pc = 0x1C8214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8210u;
            // 0x1c8214: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8218u; }
        if (ctx->pc != 0x1C8218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8218u; }
        if (ctx->pc != 0x1C8218u) { return; }
    }
    ctx->pc = 0x1C8218u;
label_1c8218:
    // 0x1c8218: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1c8218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1c821c:
    // 0x1c821c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c8220:
    if (ctx->pc == 0x1C8220u) {
        ctx->pc = 0x1C8224u;
        goto label_1c8224;
    }
    ctx->pc = 0x1C821Cu;
    {
        const bool branch_taken_0x1c821c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c821c) {
            ctx->pc = 0x1C8230u;
            goto label_1c8230;
        }
    }
    ctx->pc = 0x1C8224u;
label_1c8224:
    // 0x1c8224: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c8228:
    if (ctx->pc == 0x1C8228u) {
        ctx->pc = 0x1C8228u;
            // 0x1c8228: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1C822Cu;
        goto label_1c822c;
    }
    ctx->pc = 0x1C8224u;
    {
        const bool branch_taken_0x1c8224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8224u;
            // 0x1c8228: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8224) {
            ctx->pc = 0x1C8238u;
            goto label_1c8238;
        }
    }
    ctx->pc = 0x1C822Cu;
label_1c822c:
    // 0x1c822c: 0x0  nop
    ctx->pc = 0x1c822cu;
    // NOP
label_1c8230:
    // 0x1c8230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8234:
    // 0x1c8234: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1c8234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1c8238:
    // 0x1c8238: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c8238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c823c:
    // 0x1c823c: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x1c823cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
label_1c8240:
    // 0x1c8240: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
label_1c8244:
    if (ctx->pc == 0x1C8244u) {
        ctx->pc = 0x1C8244u;
            // 0x1c8244: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1C8248u;
        goto label_1c8248;
    }
    ctx->pc = 0x1C8240u;
    {
        const bool branch_taken_0x1c8240 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8240u;
            // 0x1c8244: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8240) {
            ctx->pc = 0x1C82B8u;
            goto label_1c82b8;
        }
    }
    ctx->pc = 0x1C8248u;
label_1c8248:
    // 0x1c8248: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c8248u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1c824c:
    // 0x1c824c: 0x0  nop
    ctx->pc = 0x1c824cu;
    // NOP
label_1c8250:
    // 0x1c8250: 0x0  nop
    ctx->pc = 0x1c8250u;
    // NOP
label_1c8254:
    // 0x1c8254: 0x1010  mfhi        $v0
    ctx->pc = 0x1c8254u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1c8258:
    // 0x1c8258: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1c825c:
    if (ctx->pc == 0x1C825Cu) {
        ctx->pc = 0x1C8260u;
        goto label_1c8260;
    }
    ctx->pc = 0x1C8258u;
    {
        const bool branch_taken_0x1c8258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8258) {
            ctx->pc = 0x1C82B8u;
            goto label_1c82b8;
        }
    }
    ctx->pc = 0x1C8260u;
label_1c8260:
    // 0x1c8260: 0xc060500  jal         func_181400
label_1c8264:
    if (ctx->pc == 0x1C8264u) {
        ctx->pc = 0x1C8264u;
            // 0x1c8264: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C8268u;
        goto label_1c8268;
    }
    ctx->pc = 0x1C8260u;
    SET_GPR_U32(ctx, 31, 0x1C8268u);
    ctx->pc = 0x1C8264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8260u;
            // 0x1c8264: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8268u; }
        if (ctx->pc != 0x1C8268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8268u; }
        if (ctx->pc != 0x1C8268u) { return; }
    }
    ctx->pc = 0x1C8268u;
label_1c8268:
    // 0x1c8268: 0x10000013  b           . + 4 + (0x13 << 2)
label_1c826c:
    if (ctx->pc == 0x1C826Cu) {
        ctx->pc = 0x1C8270u;
        goto label_1c8270;
    }
    ctx->pc = 0x1C8268u;
    {
        const bool branch_taken_0x1c8268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8268) {
            ctx->pc = 0x1C82B8u;
            goto label_1c82b8;
        }
    }
    ctx->pc = 0x1C8270u;
label_1c8270:
    // 0x1c8270: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c8270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c8274:
    // 0x1c8274: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x1c8274u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
label_1c8278:
    // 0x1c8278: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_1c827c:
    if (ctx->pc == 0x1C827Cu) {
        ctx->pc = 0x1C827Cu;
            // 0x1c827c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1C8280u;
        goto label_1c8280;
    }
    ctx->pc = 0x1C8278u;
    {
        const bool branch_taken_0x1c8278 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C827Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8278u;
            // 0x1c827c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8278) {
            ctx->pc = 0x1C82A8u;
            goto label_1c82a8;
        }
    }
    ctx->pc = 0x1C8280u;
label_1c8280:
    // 0x1c8280: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c8280u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1c8284:
    // 0x1c8284: 0x0  nop
    ctx->pc = 0x1c8284u;
    // NOP
label_1c8288:
    // 0x1c8288: 0x0  nop
    ctx->pc = 0x1c8288u;
    // NOP
label_1c828c:
    // 0x1c828c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c828cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1c8290:
    // 0x1c8290: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1c8294:
    if (ctx->pc == 0x1C8294u) {
        ctx->pc = 0x1C8298u;
        goto label_1c8298;
    }
    ctx->pc = 0x1C8290u;
    {
        const bool branch_taken_0x1c8290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8290) {
            ctx->pc = 0x1C82A8u;
            goto label_1c82a8;
        }
    }
    ctx->pc = 0x1C8298u;
label_1c8298:
    // 0x1c8298: 0xc060500  jal         func_181400
label_1c829c:
    if (ctx->pc == 0x1C829Cu) {
        ctx->pc = 0x1C829Cu;
            // 0x1c829c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C82A0u;
        goto label_1c82a0;
    }
    ctx->pc = 0x1C8298u;
    SET_GPR_U32(ctx, 31, 0x1C82A0u);
    ctx->pc = 0x1C829Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8298u;
            // 0x1c829c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82A0u; }
        if (ctx->pc != 0x1C82A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82A0u; }
        if (ctx->pc != 0x1C82A0u) { return; }
    }
    ctx->pc = 0x1C82A0u;
label_1c82a0:
    // 0x1c82a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c82a4:
    if (ctx->pc == 0x1C82A4u) {
        ctx->pc = 0x1C82A8u;
        goto label_1c82a8;
    }
    ctx->pc = 0x1C82A0u;
    {
        const bool branch_taken_0x1c82a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c82a0) {
            ctx->pc = 0x1C82B0u;
            goto label_1c82b0;
        }
    }
    ctx->pc = 0x1C82A8u;
label_1c82a8:
    // 0x1c82a8: 0xc0604dc  jal         func_181370
label_1c82ac:
    if (ctx->pc == 0x1C82ACu) {
        ctx->pc = 0x1C82ACu;
            // 0x1c82ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C82B0u;
        goto label_1c82b0;
    }
    ctx->pc = 0x1C82A8u;
    SET_GPR_U32(ctx, 31, 0x1C82B0u);
    ctx->pc = 0x1C82ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82A8u;
            // 0x1c82ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82B0u; }
        if (ctx->pc != 0x1C82B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82B0u; }
        if (ctx->pc != 0x1C82B0u) { return; }
    }
    ctx->pc = 0x1C82B0u;
label_1c82b0:
    // 0x1c82b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c82b4:
    // 0x1c82b4: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1c82b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1c82b8:
    // 0x1c82b8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c82b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c82bc:
    // 0x1c82bc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1c82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1c82c0:
    // 0x1c82c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c82c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c82c4:
    // 0x1c82c4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1c82c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1c82c8:
    // 0x1c82c8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c82cc:
    // 0x1c82cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c82d0:
    // 0x1c82d0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1c82d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1c82d4:
    // 0x1c82d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c82d8:
    // 0x1c82d8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1c82d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c82dc:
    // 0x1c82dc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c82dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c82e0:
    // 0x1c82e0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1c82e4:
    if (ctx->pc == 0x1C82E4u) {
        ctx->pc = 0x1C82E4u;
            // 0x1c82e4: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1C82E8u;
        goto label_1c82e8;
    }
    ctx->pc = 0x1C82E0u;
    {
        const bool branch_taken_0x1c82e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C82E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82E0u;
            // 0x1c82e4: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82e0) {
            ctx->pc = 0x1C8328u;
            goto label_1c8328;
        }
    }
    ctx->pc = 0x1C82E8u;
label_1c82e8:
    // 0x1c82e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c82e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c82ec:
    // 0x1c82ec: 0x0  nop
    ctx->pc = 0x1c82ecu;
    // NOP
label_1c82f0:
    // 0x1c82f0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1c82f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c82f4:
    // 0x1c82f4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_1c82f8:
    if (ctx->pc == 0x1C82F8u) {
        ctx->pc = 0x1C82FCu;
        goto label_1c82fc;
    }
    ctx->pc = 0x1C82F4u;
    {
        const bool branch_taken_0x1c82f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c82f4) {
            ctx->pc = 0x1C8328u;
            goto label_1c8328;
        }
    }
    ctx->pc = 0x1C82FCu;
label_1c82fc:
    // 0x1c82fc: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x1c82fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c8300:
    // 0x1c8300: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1c8300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1c8304:
    // 0x1c8304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8308:
    // 0x1c8308: 0x0  nop
    ctx->pc = 0x1c8308u;
    // NOP
label_1c830c:
    // 0x1c830c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c830cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8310:
    // 0x1c8310: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1c8314:
    if (ctx->pc == 0x1C8314u) {
        ctx->pc = 0x1C8318u;
        goto label_1c8318;
    }
    ctx->pc = 0x1C8310u;
    {
        const bool branch_taken_0x1c8310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8310) {
            ctx->pc = 0x1C8328u;
            goto label_1c8328;
        }
    }
    ctx->pc = 0x1C8318u;
label_1c8318:
    // 0x1c8318: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1c8318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c831c:
    // 0x1c831c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1c8320:
    if (ctx->pc == 0x1C8320u) {
        ctx->pc = 0x1C8324u;
        goto label_1c8324;
    }
    ctx->pc = 0x1C831Cu;
    {
        const bool branch_taken_0x1c831c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c831c) {
            ctx->pc = 0x1C8340u;
            goto label_1c8340;
        }
    }
    ctx->pc = 0x1C8324u;
label_1c8324:
    // 0x1c8324: 0x0  nop
    ctx->pc = 0x1c8324u;
    // NOP
label_1c8328:
    // 0x1c8328: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1c8328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1c832c:
    // 0x1c832c: 0x40f809  jalr        $v0
label_1c8330:
    if (ctx->pc == 0x1C8330u) {
        ctx->pc = 0x1C8330u;
            // 0x1c8330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C8334u;
        goto label_1c8334;
    }
    ctx->pc = 0x1C832Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C8334u);
        ctx->pc = 0x1C8330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C832Cu;
            // 0x1c8330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7F60u: goto label_1c7f60;
            case 0x1C7F64u: goto label_1c7f64;
            case 0x1C7F68u: goto label_1c7f68;
            case 0x1C7F6Cu: goto label_1c7f6c;
            case 0x1C7F70u: goto label_1c7f70;
            case 0x1C7F74u: goto label_1c7f74;
            case 0x1C7F78u: goto label_1c7f78;
            case 0x1C7F7Cu: goto label_1c7f7c;
            case 0x1C7F80u: goto label_1c7f80;
            case 0x1C7F84u: goto label_1c7f84;
            case 0x1C7F88u: goto label_1c7f88;
            case 0x1C7F8Cu: goto label_1c7f8c;
            case 0x1C7F90u: goto label_1c7f90;
            case 0x1C7F94u: goto label_1c7f94;
            case 0x1C7F98u: goto label_1c7f98;
            case 0x1C7F9Cu: goto label_1c7f9c;
            case 0x1C7FA0u: goto label_1c7fa0;
            case 0x1C7FA4u: goto label_1c7fa4;
            case 0x1C7FA8u: goto label_1c7fa8;
            case 0x1C7FACu: goto label_1c7fac;
            case 0x1C7FB0u: goto label_1c7fb0;
            case 0x1C7FB4u: goto label_1c7fb4;
            case 0x1C7FB8u: goto label_1c7fb8;
            case 0x1C7FBCu: goto label_1c7fbc;
            case 0x1C7FC0u: goto label_1c7fc0;
            case 0x1C7FC4u: goto label_1c7fc4;
            case 0x1C7FC8u: goto label_1c7fc8;
            case 0x1C7FCCu: goto label_1c7fcc;
            case 0x1C7FD0u: goto label_1c7fd0;
            case 0x1C7FD4u: goto label_1c7fd4;
            case 0x1C7FD8u: goto label_1c7fd8;
            case 0x1C7FDCu: goto label_1c7fdc;
            case 0x1C7FE0u: goto label_1c7fe0;
            case 0x1C7FE4u: goto label_1c7fe4;
            case 0x1C7FE8u: goto label_1c7fe8;
            case 0x1C7FECu: goto label_1c7fec;
            case 0x1C7FF0u: goto label_1c7ff0;
            case 0x1C7FF4u: goto label_1c7ff4;
            case 0x1C7FF8u: goto label_1c7ff8;
            case 0x1C7FFCu: goto label_1c7ffc;
            case 0x1C8000u: goto label_1c8000;
            case 0x1C8004u: goto label_1c8004;
            case 0x1C8008u: goto label_1c8008;
            case 0x1C800Cu: goto label_1c800c;
            case 0x1C8010u: goto label_1c8010;
            case 0x1C8014u: goto label_1c8014;
            case 0x1C8018u: goto label_1c8018;
            case 0x1C801Cu: goto label_1c801c;
            case 0x1C8020u: goto label_1c8020;
            case 0x1C8024u: goto label_1c8024;
            case 0x1C8028u: goto label_1c8028;
            case 0x1C802Cu: goto label_1c802c;
            case 0x1C8030u: goto label_1c8030;
            case 0x1C8034u: goto label_1c8034;
            case 0x1C8038u: goto label_1c8038;
            case 0x1C803Cu: goto label_1c803c;
            case 0x1C8040u: goto label_1c8040;
            case 0x1C8044u: goto label_1c8044;
            case 0x1C8048u: goto label_1c8048;
            case 0x1C804Cu: goto label_1c804c;
            case 0x1C8050u: goto label_1c8050;
            case 0x1C8054u: goto label_1c8054;
            case 0x1C8058u: goto label_1c8058;
            case 0x1C805Cu: goto label_1c805c;
            case 0x1C8060u: goto label_1c8060;
            case 0x1C8064u: goto label_1c8064;
            case 0x1C8068u: goto label_1c8068;
            case 0x1C806Cu: goto label_1c806c;
            case 0x1C8070u: goto label_1c8070;
            case 0x1C8074u: goto label_1c8074;
            case 0x1C8078u: goto label_1c8078;
            case 0x1C807Cu: goto label_1c807c;
            case 0x1C8080u: goto label_1c8080;
            case 0x1C8084u: goto label_1c8084;
            case 0x1C8088u: goto label_1c8088;
            case 0x1C808Cu: goto label_1c808c;
            case 0x1C8090u: goto label_1c8090;
            case 0x1C8094u: goto label_1c8094;
            case 0x1C8098u: goto label_1c8098;
            case 0x1C809Cu: goto label_1c809c;
            case 0x1C80A0u: goto label_1c80a0;
            case 0x1C80A4u: goto label_1c80a4;
            case 0x1C80A8u: goto label_1c80a8;
            case 0x1C80ACu: goto label_1c80ac;
            case 0x1C80B0u: goto label_1c80b0;
            case 0x1C80B4u: goto label_1c80b4;
            case 0x1C80B8u: goto label_1c80b8;
            case 0x1C80BCu: goto label_1c80bc;
            case 0x1C80C0u: goto label_1c80c0;
            case 0x1C80C4u: goto label_1c80c4;
            case 0x1C80C8u: goto label_1c80c8;
            case 0x1C80CCu: goto label_1c80cc;
            case 0x1C80D0u: goto label_1c80d0;
            case 0x1C80D4u: goto label_1c80d4;
            case 0x1C80D8u: goto label_1c80d8;
            case 0x1C80DCu: goto label_1c80dc;
            case 0x1C80E0u: goto label_1c80e0;
            case 0x1C80E4u: goto label_1c80e4;
            case 0x1C80E8u: goto label_1c80e8;
            case 0x1C80ECu: goto label_1c80ec;
            case 0x1C80F0u: goto label_1c80f0;
            case 0x1C80F4u: goto label_1c80f4;
            case 0x1C80F8u: goto label_1c80f8;
            case 0x1C80FCu: goto label_1c80fc;
            case 0x1C8100u: goto label_1c8100;
            case 0x1C8104u: goto label_1c8104;
            case 0x1C8108u: goto label_1c8108;
            case 0x1C810Cu: goto label_1c810c;
            case 0x1C8110u: goto label_1c8110;
            case 0x1C8114u: goto label_1c8114;
            case 0x1C8118u: goto label_1c8118;
            case 0x1C811Cu: goto label_1c811c;
            case 0x1C8120u: goto label_1c8120;
            case 0x1C8124u: goto label_1c8124;
            case 0x1C8128u: goto label_1c8128;
            case 0x1C812Cu: goto label_1c812c;
            case 0x1C8130u: goto label_1c8130;
            case 0x1C8134u: goto label_1c8134;
            case 0x1C8138u: goto label_1c8138;
            case 0x1C813Cu: goto label_1c813c;
            case 0x1C8140u: goto label_1c8140;
            case 0x1C8144u: goto label_1c8144;
            case 0x1C8148u: goto label_1c8148;
            case 0x1C814Cu: goto label_1c814c;
            case 0x1C8150u: goto label_1c8150;
            case 0x1C8154u: goto label_1c8154;
            case 0x1C8158u: goto label_1c8158;
            case 0x1C815Cu: goto label_1c815c;
            case 0x1C8160u: goto label_1c8160;
            case 0x1C8164u: goto label_1c8164;
            case 0x1C8168u: goto label_1c8168;
            case 0x1C816Cu: goto label_1c816c;
            case 0x1C8170u: goto label_1c8170;
            case 0x1C8174u: goto label_1c8174;
            case 0x1C8178u: goto label_1c8178;
            case 0x1C817Cu: goto label_1c817c;
            case 0x1C8180u: goto label_1c8180;
            case 0x1C8184u: goto label_1c8184;
            case 0x1C8188u: goto label_1c8188;
            case 0x1C818Cu: goto label_1c818c;
            case 0x1C8190u: goto label_1c8190;
            case 0x1C8194u: goto label_1c8194;
            case 0x1C8198u: goto label_1c8198;
            case 0x1C819Cu: goto label_1c819c;
            case 0x1C81A0u: goto label_1c81a0;
            case 0x1C81A4u: goto label_1c81a4;
            case 0x1C81A8u: goto label_1c81a8;
            case 0x1C81ACu: goto label_1c81ac;
            case 0x1C81B0u: goto label_1c81b0;
            case 0x1C81B4u: goto label_1c81b4;
            case 0x1C81B8u: goto label_1c81b8;
            case 0x1C81BCu: goto label_1c81bc;
            case 0x1C81C0u: goto label_1c81c0;
            case 0x1C81C4u: goto label_1c81c4;
            case 0x1C81C8u: goto label_1c81c8;
            case 0x1C81CCu: goto label_1c81cc;
            case 0x1C81D0u: goto label_1c81d0;
            case 0x1C81D4u: goto label_1c81d4;
            case 0x1C81D8u: goto label_1c81d8;
            case 0x1C81DCu: goto label_1c81dc;
            case 0x1C81E0u: goto label_1c81e0;
            case 0x1C81E4u: goto label_1c81e4;
            case 0x1C81E8u: goto label_1c81e8;
            case 0x1C81ECu: goto label_1c81ec;
            case 0x1C81F0u: goto label_1c81f0;
            case 0x1C81F4u: goto label_1c81f4;
            case 0x1C81F8u: goto label_1c81f8;
            case 0x1C81FCu: goto label_1c81fc;
            case 0x1C8200u: goto label_1c8200;
            case 0x1C8204u: goto label_1c8204;
            case 0x1C8208u: goto label_1c8208;
            case 0x1C820Cu: goto label_1c820c;
            case 0x1C8210u: goto label_1c8210;
            case 0x1C8214u: goto label_1c8214;
            case 0x1C8218u: goto label_1c8218;
            case 0x1C821Cu: goto label_1c821c;
            case 0x1C8220u: goto label_1c8220;
            case 0x1C8224u: goto label_1c8224;
            case 0x1C8228u: goto label_1c8228;
            case 0x1C822Cu: goto label_1c822c;
            case 0x1C8230u: goto label_1c8230;
            case 0x1C8234u: goto label_1c8234;
            case 0x1C8238u: goto label_1c8238;
            case 0x1C823Cu: goto label_1c823c;
            case 0x1C8240u: goto label_1c8240;
            case 0x1C8244u: goto label_1c8244;
            case 0x1C8248u: goto label_1c8248;
            case 0x1C824Cu: goto label_1c824c;
            case 0x1C8250u: goto label_1c8250;
            case 0x1C8254u: goto label_1c8254;
            case 0x1C8258u: goto label_1c8258;
            case 0x1C825Cu: goto label_1c825c;
            case 0x1C8260u: goto label_1c8260;
            case 0x1C8264u: goto label_1c8264;
            case 0x1C8268u: goto label_1c8268;
            case 0x1C826Cu: goto label_1c826c;
            case 0x1C8270u: goto label_1c8270;
            case 0x1C8274u: goto label_1c8274;
            case 0x1C8278u: goto label_1c8278;
            case 0x1C827Cu: goto label_1c827c;
            case 0x1C8280u: goto label_1c8280;
            case 0x1C8284u: goto label_1c8284;
            case 0x1C8288u: goto label_1c8288;
            case 0x1C828Cu: goto label_1c828c;
            case 0x1C8290u: goto label_1c8290;
            case 0x1C8294u: goto label_1c8294;
            case 0x1C8298u: goto label_1c8298;
            case 0x1C829Cu: goto label_1c829c;
            case 0x1C82A0u: goto label_1c82a0;
            case 0x1C82A4u: goto label_1c82a4;
            case 0x1C82A8u: goto label_1c82a8;
            case 0x1C82ACu: goto label_1c82ac;
            case 0x1C82B0u: goto label_1c82b0;
            case 0x1C82B4u: goto label_1c82b4;
            case 0x1C82B8u: goto label_1c82b8;
            case 0x1C82BCu: goto label_1c82bc;
            case 0x1C82C0u: goto label_1c82c0;
            case 0x1C82C4u: goto label_1c82c4;
            case 0x1C82C8u: goto label_1c82c8;
            case 0x1C82CCu: goto label_1c82cc;
            case 0x1C82D0u: goto label_1c82d0;
            case 0x1C82D4u: goto label_1c82d4;
            case 0x1C82D8u: goto label_1c82d8;
            case 0x1C82DCu: goto label_1c82dc;
            case 0x1C82E0u: goto label_1c82e0;
            case 0x1C82E4u: goto label_1c82e4;
            case 0x1C82E8u: goto label_1c82e8;
            case 0x1C82ECu: goto label_1c82ec;
            case 0x1C82F0u: goto label_1c82f0;
            case 0x1C82F4u: goto label_1c82f4;
            case 0x1C82F8u: goto label_1c82f8;
            case 0x1C82FCu: goto label_1c82fc;
            case 0x1C8300u: goto label_1c8300;
            case 0x1C8304u: goto label_1c8304;
            case 0x1C8308u: goto label_1c8308;
            case 0x1C830Cu: goto label_1c830c;
            case 0x1C8310u: goto label_1c8310;
            case 0x1C8314u: goto label_1c8314;
            case 0x1C8318u: goto label_1c8318;
            case 0x1C831Cu: goto label_1c831c;
            case 0x1C8320u: goto label_1c8320;
            case 0x1C8324u: goto label_1c8324;
            case 0x1C8328u: goto label_1c8328;
            case 0x1C832Cu: goto label_1c832c;
            case 0x1C8330u: goto label_1c8330;
            case 0x1C8334u: goto label_1c8334;
            case 0x1C8338u: goto label_1c8338;
            case 0x1C833Cu: goto label_1c833c;
            case 0x1C8340u: goto label_1c8340;
            case 0x1C8344u: goto label_1c8344;
            case 0x1C8348u: goto label_1c8348;
            case 0x1C834Cu: goto label_1c834c;
            case 0x1C8350u: goto label_1c8350;
            case 0x1C8354u: goto label_1c8354;
            case 0x1C8358u: goto label_1c8358;
            case 0x1C835Cu: goto label_1c835c;
            case 0x1C8360u: goto label_1c8360;
            case 0x1C8364u: goto label_1c8364;
            case 0x1C8368u: goto label_1c8368;
            case 0x1C836Cu: goto label_1c836c;
            case 0x1C8370u: goto label_1c8370;
            case 0x1C8374u: goto label_1c8374;
            case 0x1C8378u: goto label_1c8378;
            case 0x1C837Cu: goto label_1c837c;
            case 0x1C8380u: goto label_1c8380;
            case 0x1C8384u: goto label_1c8384;
            case 0x1C8388u: goto label_1c8388;
            case 0x1C838Cu: goto label_1c838c;
            case 0x1C8390u: goto label_1c8390;
            case 0x1C8394u: goto label_1c8394;
            case 0x1C8398u: goto label_1c8398;
            case 0x1C839Cu: goto label_1c839c;
            case 0x1C83A0u: goto label_1c83a0;
            case 0x1C83A4u: goto label_1c83a4;
            case 0x1C83A8u: goto label_1c83a8;
            case 0x1C83ACu: goto label_1c83ac;
            case 0x1C83B0u: goto label_1c83b0;
            case 0x1C83B4u: goto label_1c83b4;
            case 0x1C83B8u: goto label_1c83b8;
            case 0x1C83BCu: goto label_1c83bc;
            case 0x1C83C0u: goto label_1c83c0;
            case 0x1C83C4u: goto label_1c83c4;
            case 0x1C83C8u: goto label_1c83c8;
            case 0x1C83CCu: goto label_1c83cc;
            case 0x1C83D0u: goto label_1c83d0;
            case 0x1C83D4u: goto label_1c83d4;
            case 0x1C83D8u: goto label_1c83d8;
            case 0x1C83DCu: goto label_1c83dc;
            case 0x1C83E0u: goto label_1c83e0;
            case 0x1C83E4u: goto label_1c83e4;
            case 0x1C83E8u: goto label_1c83e8;
            case 0x1C83ECu: goto label_1c83ec;
            case 0x1C83F0u: goto label_1c83f0;
            case 0x1C83F4u: goto label_1c83f4;
            case 0x1C83F8u: goto label_1c83f8;
            case 0x1C83FCu: goto label_1c83fc;
            case 0x1C8400u: goto label_1c8400;
            case 0x1C8404u: goto label_1c8404;
            case 0x1C8408u: goto label_1c8408;
            case 0x1C840Cu: goto label_1c840c;
            case 0x1C8410u: goto label_1c8410;
            case 0x1C8414u: goto label_1c8414;
            case 0x1C8418u: goto label_1c8418;
            case 0x1C841Cu: goto label_1c841c;
            case 0x1C8420u: goto label_1c8420;
            case 0x1C8424u: goto label_1c8424;
            case 0x1C8428u: goto label_1c8428;
            case 0x1C842Cu: goto label_1c842c;
            case 0x1C8430u: goto label_1c8430;
            case 0x1C8434u: goto label_1c8434;
            case 0x1C8438u: goto label_1c8438;
            case 0x1C843Cu: goto label_1c843c;
            case 0x1C8440u: goto label_1c8440;
            case 0x1C8444u: goto label_1c8444;
            case 0x1C8448u: goto label_1c8448;
            case 0x1C844Cu: goto label_1c844c;
            case 0x1C8450u: goto label_1c8450;
            case 0x1C8454u: goto label_1c8454;
            case 0x1C8458u: goto label_1c8458;
            case 0x1C845Cu: goto label_1c845c;
            case 0x1C8460u: goto label_1c8460;
            case 0x1C8464u: goto label_1c8464;
            case 0x1C8468u: goto label_1c8468;
            case 0x1C846Cu: goto label_1c846c;
            case 0x1C8470u: goto label_1c8470;
            case 0x1C8474u: goto label_1c8474;
            case 0x1C8478u: goto label_1c8478;
            case 0x1C847Cu: goto label_1c847c;
            case 0x1C8480u: goto label_1c8480;
            case 0x1C8484u: goto label_1c8484;
            case 0x1C8488u: goto label_1c8488;
            case 0x1C848Cu: goto label_1c848c;
            case 0x1C8490u: goto label_1c8490;
            case 0x1C8494u: goto label_1c8494;
            case 0x1C8498u: goto label_1c8498;
            case 0x1C849Cu: goto label_1c849c;
            case 0x1C84A0u: goto label_1c84a0;
            case 0x1C84A4u: goto label_1c84a4;
            case 0x1C84A8u: goto label_1c84a8;
            case 0x1C84ACu: goto label_1c84ac;
            case 0x1C84B0u: goto label_1c84b0;
            case 0x1C84B4u: goto label_1c84b4;
            case 0x1C84B8u: goto label_1c84b8;
            case 0x1C84BCu: goto label_1c84bc;
            case 0x1C84C0u: goto label_1c84c0;
            case 0x1C84C4u: goto label_1c84c4;
            case 0x1C84C8u: goto label_1c84c8;
            case 0x1C84CCu: goto label_1c84cc;
            case 0x1C84D0u: goto label_1c84d0;
            case 0x1C84D4u: goto label_1c84d4;
            case 0x1C84D8u: goto label_1c84d8;
            case 0x1C84DCu: goto label_1c84dc;
            case 0x1C84E0u: goto label_1c84e0;
            case 0x1C84E4u: goto label_1c84e4;
            case 0x1C84E8u: goto label_1c84e8;
            case 0x1C84ECu: goto label_1c84ec;
            case 0x1C84F0u: goto label_1c84f0;
            case 0x1C84F4u: goto label_1c84f4;
            case 0x1C84F8u: goto label_1c84f8;
            case 0x1C84FCu: goto label_1c84fc;
            case 0x1C8500u: goto label_1c8500;
            case 0x1C8504u: goto label_1c8504;
            case 0x1C8508u: goto label_1c8508;
            case 0x1C850Cu: goto label_1c850c;
            case 0x1C8510u: goto label_1c8510;
            case 0x1C8514u: goto label_1c8514;
            case 0x1C8518u: goto label_1c8518;
            case 0x1C851Cu: goto label_1c851c;
            case 0x1C8520u: goto label_1c8520;
            case 0x1C8524u: goto label_1c8524;
            case 0x1C8528u: goto label_1c8528;
            case 0x1C852Cu: goto label_1c852c;
            case 0x1C8530u: goto label_1c8530;
            case 0x1C8534u: goto label_1c8534;
            case 0x1C8538u: goto label_1c8538;
            case 0x1C853Cu: goto label_1c853c;
            case 0x1C8540u: goto label_1c8540;
            case 0x1C8544u: goto label_1c8544;
            case 0x1C8548u: goto label_1c8548;
            case 0x1C854Cu: goto label_1c854c;
            case 0x1C8550u: goto label_1c8550;
            case 0x1C8554u: goto label_1c8554;
            case 0x1C8558u: goto label_1c8558;
            case 0x1C855Cu: goto label_1c855c;
            case 0x1C8560u: goto label_1c8560;
            case 0x1C8564u: goto label_1c8564;
            case 0x1C8568u: goto label_1c8568;
            case 0x1C856Cu: goto label_1c856c;
            case 0x1C8570u: goto label_1c8570;
            case 0x1C8574u: goto label_1c8574;
            case 0x1C8578u: goto label_1c8578;
            case 0x1C857Cu: goto label_1c857c;
            case 0x1C8580u: goto label_1c8580;
            case 0x1C8584u: goto label_1c8584;
            case 0x1C8588u: goto label_1c8588;
            case 0x1C858Cu: goto label_1c858c;
            case 0x1C8590u: goto label_1c8590;
            case 0x1C8594u: goto label_1c8594;
            case 0x1C8598u: goto label_1c8598;
            case 0x1C859Cu: goto label_1c859c;
            case 0x1C85A0u: goto label_1c85a0;
            case 0x1C85A4u: goto label_1c85a4;
            case 0x1C85A8u: goto label_1c85a8;
            case 0x1C85ACu: goto label_1c85ac;
            case 0x1C85B0u: goto label_1c85b0;
            case 0x1C85B4u: goto label_1c85b4;
            case 0x1C85B8u: goto label_1c85b8;
            case 0x1C85BCu: goto label_1c85bc;
            case 0x1C85C0u: goto label_1c85c0;
            case 0x1C85C4u: goto label_1c85c4;
            case 0x1C85C8u: goto label_1c85c8;
            case 0x1C85CCu: goto label_1c85cc;
            case 0x1C85D0u: goto label_1c85d0;
            case 0x1C85D4u: goto label_1c85d4;
            case 0x1C85D8u: goto label_1c85d8;
            case 0x1C85DCu: goto label_1c85dc;
            case 0x1C85E0u: goto label_1c85e0;
            case 0x1C85E4u: goto label_1c85e4;
            case 0x1C85E8u: goto label_1c85e8;
            case 0x1C85ECu: goto label_1c85ec;
            case 0x1C85F0u: goto label_1c85f0;
            case 0x1C85F4u: goto label_1c85f4;
            case 0x1C85F8u: goto label_1c85f8;
            case 0x1C85FCu: goto label_1c85fc;
            case 0x1C8600u: goto label_1c8600;
            case 0x1C8604u: goto label_1c8604;
            case 0x1C8608u: goto label_1c8608;
            case 0x1C860Cu: goto label_1c860c;
            case 0x1C8610u: goto label_1c8610;
            case 0x1C8614u: goto label_1c8614;
            case 0x1C8618u: goto label_1c8618;
            case 0x1C861Cu: goto label_1c861c;
            case 0x1C8620u: goto label_1c8620;
            case 0x1C8624u: goto label_1c8624;
            case 0x1C8628u: goto label_1c8628;
            case 0x1C862Cu: goto label_1c862c;
            case 0x1C8630u: goto label_1c8630;
            case 0x1C8634u: goto label_1c8634;
            case 0x1C8638u: goto label_1c8638;
            case 0x1C863Cu: goto label_1c863c;
            case 0x1C8640u: goto label_1c8640;
            case 0x1C8644u: goto label_1c8644;
            case 0x1C8648u: goto label_1c8648;
            case 0x1C864Cu: goto label_1c864c;
            case 0x1C8650u: goto label_1c8650;
            case 0x1C8654u: goto label_1c8654;
            case 0x1C8658u: goto label_1c8658;
            case 0x1C865Cu: goto label_1c865c;
            case 0x1C8660u: goto label_1c8660;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C8334u; }
            if (ctx->pc != 0x1C8334u) { return; }
        }
    }
    ctx->pc = 0x1C8334u;
label_1c8334:
    // 0x1c8334: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_1c8338:
    if (ctx->pc == 0x1C8338u) {
        ctx->pc = 0x1C833Cu;
        goto label_1c833c;
    }
    ctx->pc = 0x1C8334u;
    {
        const bool branch_taken_0x1c8334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8334) {
            ctx->pc = 0x1C8648u;
            goto label_1c8648;
        }
    }
    ctx->pc = 0x1C833Cu;
label_1c833c:
    // 0x1c833c: 0x0  nop
    ctx->pc = 0x1c833cu;
    // NOP
label_1c8340:
    // 0x1c8340: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c8344:
    // 0x1c8344: 0x1c40002e  bgtz        $v0, . + 4 + (0x2E << 2)
label_1c8348:
    if (ctx->pc == 0x1C8348u) {
        ctx->pc = 0x1C834Cu;
        goto label_1c834c;
    }
    ctx->pc = 0x1C8344u;
    {
        const bool branch_taken_0x1c8344 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1c8344) {
            ctx->pc = 0x1C8400u;
            goto label_1c8400;
        }
    }
    ctx->pc = 0x1C834Cu;
label_1c834c:
    // 0x1c834c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c834cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8350:
    // 0x1c8350: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1c8350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1c8354:
    // 0x1c8354: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c8354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8358:
    // 0x1c8358: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c8358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1c835c:
    // 0x1c835c: 0xc05d080  jal         func_174200
label_1c8360:
    if (ctx->pc == 0x1C8360u) {
        ctx->pc = 0x1C8360u;
            // 0x1c8360: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1C8364u;
        goto label_1c8364;
    }
    ctx->pc = 0x1C835Cu;
    SET_GPR_U32(ctx, 31, 0x1C8364u);
    ctx->pc = 0x1C8360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C835Cu;
            // 0x1c8360: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8364u; }
        if (ctx->pc != 0x1C8364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8364u; }
        if (ctx->pc != 0x1C8364u) { return; }
    }
    ctx->pc = 0x1C8364u;
label_1c8364:
    // 0x1c8364: 0xc050bb4  jal         func_142ED0
label_1c8368:
    if (ctx->pc == 0x1C8368u) {
        ctx->pc = 0x1C836Cu;
        goto label_1c836c;
    }
    ctx->pc = 0x1C8364u;
    SET_GPR_U32(ctx, 31, 0x1C836Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C836Cu; }
        if (ctx->pc != 0x1C836Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C836Cu; }
        if (ctx->pc != 0x1C836Cu) { return; }
    }
    ctx->pc = 0x1C836Cu;
label_1c836c:
    // 0x1c836c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c836cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1c8370:
    // 0x1c8370: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c8374:
    if (ctx->pc == 0x1C8374u) {
        ctx->pc = 0x1C8378u;
        goto label_1c8378;
    }
    ctx->pc = 0x1C8370u;
    {
        const bool branch_taken_0x1c8370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8370) {
            ctx->pc = 0x1C8390u;
            goto label_1c8390;
        }
    }
    ctx->pc = 0x1C8378u;
label_1c8378:
    // 0x1c8378: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c8378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c837c:
    // 0x1c837c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1c837cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1c8380:
    // 0x1c8380: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c8380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8384:
    // 0x1c8384: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c8384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1c8388:
    // 0x1c8388: 0xc05d080  jal         func_174200
label_1c838c:
    if (ctx->pc == 0x1C838Cu) {
        ctx->pc = 0x1C838Cu;
            // 0x1c838c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1C8390u;
        goto label_1c8390;
    }
    ctx->pc = 0x1C8388u;
    SET_GPR_U32(ctx, 31, 0x1C8390u);
    ctx->pc = 0x1C838Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8388u;
            // 0x1c838c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8390u; }
        if (ctx->pc != 0x1C8390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8390u; }
        if (ctx->pc != 0x1C8390u) { return; }
    }
    ctx->pc = 0x1C8390u;
label_1c8390:
    // 0x1c8390: 0xc050bb4  jal         func_142ED0
label_1c8394:
    if (ctx->pc == 0x1C8394u) {
        ctx->pc = 0x1C8398u;
        goto label_1c8398;
    }
    ctx->pc = 0x1C8390u;
    SET_GPR_U32(ctx, 31, 0x1C8398u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8398u; }
        if (ctx->pc != 0x1C8398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8398u; }
        if (ctx->pc != 0x1C8398u) { return; }
    }
    ctx->pc = 0x1C8398u;
label_1c8398:
    // 0x1c8398: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c8398u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1c839c:
    // 0x1c839c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c83a0:
    if (ctx->pc == 0x1C83A0u) {
        ctx->pc = 0x1C83A4u;
        goto label_1c83a4;
    }
    ctx->pc = 0x1C839Cu;
    {
        const bool branch_taken_0x1c839c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c839c) {
            ctx->pc = 0x1C83C0u;
            goto label_1c83c0;
        }
    }
    ctx->pc = 0x1C83A4u;
label_1c83a4:
    // 0x1c83a4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c83a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c83a8:
    // 0x1c83a8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1c83a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1c83ac:
    // 0x1c83ac: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c83acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c83b0:
    // 0x1c83b0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c83b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1c83b4:
    // 0x1c83b4: 0xc05d080  jal         func_174200
label_1c83b8:
    if (ctx->pc == 0x1C83B8u) {
        ctx->pc = 0x1C83B8u;
            // 0x1c83b8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1C83BCu;
        goto label_1c83bc;
    }
    ctx->pc = 0x1C83B4u;
    SET_GPR_U32(ctx, 31, 0x1C83BCu);
    ctx->pc = 0x1C83B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C83B4u;
            // 0x1c83b8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83BCu; }
        if (ctx->pc != 0x1C83BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83BCu; }
        if (ctx->pc != 0x1C83BCu) { return; }
    }
    ctx->pc = 0x1C83BCu;
label_1c83bc:
    // 0x1c83bc: 0x0  nop
    ctx->pc = 0x1c83bcu;
    // NOP
label_1c83c0:
    // 0x1c83c0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1c83c4:
    // 0x1c83c4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1c83c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c83c8:
    // 0x1c83c8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c83c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c83cc:
    // 0x1c83cc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c83ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c83d0:
    // 0x1c83d0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1c83d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1c83d4:
    // 0x1c83d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c83d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c83d8:
    // 0x1c83d8: 0x0  nop
    ctx->pc = 0x1c83d8u;
    // NOP
label_1c83dc:
    // 0x1c83dc: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1c83dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1c83e0:
    // 0x1c83e0: 0xc053740  jal         func_14DD00
label_1c83e4:
    if (ctx->pc == 0x1C83E4u) {
        ctx->pc = 0x1C83E4u;
            // 0x1c83e4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1C83E8u;
        goto label_1c83e8;
    }
    ctx->pc = 0x1C83E0u;
    SET_GPR_U32(ctx, 31, 0x1C83E8u);
    ctx->pc = 0x1C83E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C83E0u;
            // 0x1c83e4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83E8u; }
        if (ctx->pc != 0x1C83E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83E8u; }
        if (ctx->pc != 0x1C83E8u) { return; }
    }
    ctx->pc = 0x1C83E8u;
label_1c83e8:
    // 0x1c83e8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1c83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1c83ec:
    // 0x1c83ec: 0x40f809  jalr        $v0
label_1c83f0:
    if (ctx->pc == 0x1C83F0u) {
        ctx->pc = 0x1C83F0u;
            // 0x1c83f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C83F4u;
        goto label_1c83f4;
    }
    ctx->pc = 0x1C83ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C83F4u);
        ctx->pc = 0x1C83F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C83ECu;
            // 0x1c83f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7F60u: goto label_1c7f60;
            case 0x1C7F64u: goto label_1c7f64;
            case 0x1C7F68u: goto label_1c7f68;
            case 0x1C7F6Cu: goto label_1c7f6c;
            case 0x1C7F70u: goto label_1c7f70;
            case 0x1C7F74u: goto label_1c7f74;
            case 0x1C7F78u: goto label_1c7f78;
            case 0x1C7F7Cu: goto label_1c7f7c;
            case 0x1C7F80u: goto label_1c7f80;
            case 0x1C7F84u: goto label_1c7f84;
            case 0x1C7F88u: goto label_1c7f88;
            case 0x1C7F8Cu: goto label_1c7f8c;
            case 0x1C7F90u: goto label_1c7f90;
            case 0x1C7F94u: goto label_1c7f94;
            case 0x1C7F98u: goto label_1c7f98;
            case 0x1C7F9Cu: goto label_1c7f9c;
            case 0x1C7FA0u: goto label_1c7fa0;
            case 0x1C7FA4u: goto label_1c7fa4;
            case 0x1C7FA8u: goto label_1c7fa8;
            case 0x1C7FACu: goto label_1c7fac;
            case 0x1C7FB0u: goto label_1c7fb0;
            case 0x1C7FB4u: goto label_1c7fb4;
            case 0x1C7FB8u: goto label_1c7fb8;
            case 0x1C7FBCu: goto label_1c7fbc;
            case 0x1C7FC0u: goto label_1c7fc0;
            case 0x1C7FC4u: goto label_1c7fc4;
            case 0x1C7FC8u: goto label_1c7fc8;
            case 0x1C7FCCu: goto label_1c7fcc;
            case 0x1C7FD0u: goto label_1c7fd0;
            case 0x1C7FD4u: goto label_1c7fd4;
            case 0x1C7FD8u: goto label_1c7fd8;
            case 0x1C7FDCu: goto label_1c7fdc;
            case 0x1C7FE0u: goto label_1c7fe0;
            case 0x1C7FE4u: goto label_1c7fe4;
            case 0x1C7FE8u: goto label_1c7fe8;
            case 0x1C7FECu: goto label_1c7fec;
            case 0x1C7FF0u: goto label_1c7ff0;
            case 0x1C7FF4u: goto label_1c7ff4;
            case 0x1C7FF8u: goto label_1c7ff8;
            case 0x1C7FFCu: goto label_1c7ffc;
            case 0x1C8000u: goto label_1c8000;
            case 0x1C8004u: goto label_1c8004;
            case 0x1C8008u: goto label_1c8008;
            case 0x1C800Cu: goto label_1c800c;
            case 0x1C8010u: goto label_1c8010;
            case 0x1C8014u: goto label_1c8014;
            case 0x1C8018u: goto label_1c8018;
            case 0x1C801Cu: goto label_1c801c;
            case 0x1C8020u: goto label_1c8020;
            case 0x1C8024u: goto label_1c8024;
            case 0x1C8028u: goto label_1c8028;
            case 0x1C802Cu: goto label_1c802c;
            case 0x1C8030u: goto label_1c8030;
            case 0x1C8034u: goto label_1c8034;
            case 0x1C8038u: goto label_1c8038;
            case 0x1C803Cu: goto label_1c803c;
            case 0x1C8040u: goto label_1c8040;
            case 0x1C8044u: goto label_1c8044;
            case 0x1C8048u: goto label_1c8048;
            case 0x1C804Cu: goto label_1c804c;
            case 0x1C8050u: goto label_1c8050;
            case 0x1C8054u: goto label_1c8054;
            case 0x1C8058u: goto label_1c8058;
            case 0x1C805Cu: goto label_1c805c;
            case 0x1C8060u: goto label_1c8060;
            case 0x1C8064u: goto label_1c8064;
            case 0x1C8068u: goto label_1c8068;
            case 0x1C806Cu: goto label_1c806c;
            case 0x1C8070u: goto label_1c8070;
            case 0x1C8074u: goto label_1c8074;
            case 0x1C8078u: goto label_1c8078;
            case 0x1C807Cu: goto label_1c807c;
            case 0x1C8080u: goto label_1c8080;
            case 0x1C8084u: goto label_1c8084;
            case 0x1C8088u: goto label_1c8088;
            case 0x1C808Cu: goto label_1c808c;
            case 0x1C8090u: goto label_1c8090;
            case 0x1C8094u: goto label_1c8094;
            case 0x1C8098u: goto label_1c8098;
            case 0x1C809Cu: goto label_1c809c;
            case 0x1C80A0u: goto label_1c80a0;
            case 0x1C80A4u: goto label_1c80a4;
            case 0x1C80A8u: goto label_1c80a8;
            case 0x1C80ACu: goto label_1c80ac;
            case 0x1C80B0u: goto label_1c80b0;
            case 0x1C80B4u: goto label_1c80b4;
            case 0x1C80B8u: goto label_1c80b8;
            case 0x1C80BCu: goto label_1c80bc;
            case 0x1C80C0u: goto label_1c80c0;
            case 0x1C80C4u: goto label_1c80c4;
            case 0x1C80C8u: goto label_1c80c8;
            case 0x1C80CCu: goto label_1c80cc;
            case 0x1C80D0u: goto label_1c80d0;
            case 0x1C80D4u: goto label_1c80d4;
            case 0x1C80D8u: goto label_1c80d8;
            case 0x1C80DCu: goto label_1c80dc;
            case 0x1C80E0u: goto label_1c80e0;
            case 0x1C80E4u: goto label_1c80e4;
            case 0x1C80E8u: goto label_1c80e8;
            case 0x1C80ECu: goto label_1c80ec;
            case 0x1C80F0u: goto label_1c80f0;
            case 0x1C80F4u: goto label_1c80f4;
            case 0x1C80F8u: goto label_1c80f8;
            case 0x1C80FCu: goto label_1c80fc;
            case 0x1C8100u: goto label_1c8100;
            case 0x1C8104u: goto label_1c8104;
            case 0x1C8108u: goto label_1c8108;
            case 0x1C810Cu: goto label_1c810c;
            case 0x1C8110u: goto label_1c8110;
            case 0x1C8114u: goto label_1c8114;
            case 0x1C8118u: goto label_1c8118;
            case 0x1C811Cu: goto label_1c811c;
            case 0x1C8120u: goto label_1c8120;
            case 0x1C8124u: goto label_1c8124;
            case 0x1C8128u: goto label_1c8128;
            case 0x1C812Cu: goto label_1c812c;
            case 0x1C8130u: goto label_1c8130;
            case 0x1C8134u: goto label_1c8134;
            case 0x1C8138u: goto label_1c8138;
            case 0x1C813Cu: goto label_1c813c;
            case 0x1C8140u: goto label_1c8140;
            case 0x1C8144u: goto label_1c8144;
            case 0x1C8148u: goto label_1c8148;
            case 0x1C814Cu: goto label_1c814c;
            case 0x1C8150u: goto label_1c8150;
            case 0x1C8154u: goto label_1c8154;
            case 0x1C8158u: goto label_1c8158;
            case 0x1C815Cu: goto label_1c815c;
            case 0x1C8160u: goto label_1c8160;
            case 0x1C8164u: goto label_1c8164;
            case 0x1C8168u: goto label_1c8168;
            case 0x1C816Cu: goto label_1c816c;
            case 0x1C8170u: goto label_1c8170;
            case 0x1C8174u: goto label_1c8174;
            case 0x1C8178u: goto label_1c8178;
            case 0x1C817Cu: goto label_1c817c;
            case 0x1C8180u: goto label_1c8180;
            case 0x1C8184u: goto label_1c8184;
            case 0x1C8188u: goto label_1c8188;
            case 0x1C818Cu: goto label_1c818c;
            case 0x1C8190u: goto label_1c8190;
            case 0x1C8194u: goto label_1c8194;
            case 0x1C8198u: goto label_1c8198;
            case 0x1C819Cu: goto label_1c819c;
            case 0x1C81A0u: goto label_1c81a0;
            case 0x1C81A4u: goto label_1c81a4;
            case 0x1C81A8u: goto label_1c81a8;
            case 0x1C81ACu: goto label_1c81ac;
            case 0x1C81B0u: goto label_1c81b0;
            case 0x1C81B4u: goto label_1c81b4;
            case 0x1C81B8u: goto label_1c81b8;
            case 0x1C81BCu: goto label_1c81bc;
            case 0x1C81C0u: goto label_1c81c0;
            case 0x1C81C4u: goto label_1c81c4;
            case 0x1C81C8u: goto label_1c81c8;
            case 0x1C81CCu: goto label_1c81cc;
            case 0x1C81D0u: goto label_1c81d0;
            case 0x1C81D4u: goto label_1c81d4;
            case 0x1C81D8u: goto label_1c81d8;
            case 0x1C81DCu: goto label_1c81dc;
            case 0x1C81E0u: goto label_1c81e0;
            case 0x1C81E4u: goto label_1c81e4;
            case 0x1C81E8u: goto label_1c81e8;
            case 0x1C81ECu: goto label_1c81ec;
            case 0x1C81F0u: goto label_1c81f0;
            case 0x1C81F4u: goto label_1c81f4;
            case 0x1C81F8u: goto label_1c81f8;
            case 0x1C81FCu: goto label_1c81fc;
            case 0x1C8200u: goto label_1c8200;
            case 0x1C8204u: goto label_1c8204;
            case 0x1C8208u: goto label_1c8208;
            case 0x1C820Cu: goto label_1c820c;
            case 0x1C8210u: goto label_1c8210;
            case 0x1C8214u: goto label_1c8214;
            case 0x1C8218u: goto label_1c8218;
            case 0x1C821Cu: goto label_1c821c;
            case 0x1C8220u: goto label_1c8220;
            case 0x1C8224u: goto label_1c8224;
            case 0x1C8228u: goto label_1c8228;
            case 0x1C822Cu: goto label_1c822c;
            case 0x1C8230u: goto label_1c8230;
            case 0x1C8234u: goto label_1c8234;
            case 0x1C8238u: goto label_1c8238;
            case 0x1C823Cu: goto label_1c823c;
            case 0x1C8240u: goto label_1c8240;
            case 0x1C8244u: goto label_1c8244;
            case 0x1C8248u: goto label_1c8248;
            case 0x1C824Cu: goto label_1c824c;
            case 0x1C8250u: goto label_1c8250;
            case 0x1C8254u: goto label_1c8254;
            case 0x1C8258u: goto label_1c8258;
            case 0x1C825Cu: goto label_1c825c;
            case 0x1C8260u: goto label_1c8260;
            case 0x1C8264u: goto label_1c8264;
            case 0x1C8268u: goto label_1c8268;
            case 0x1C826Cu: goto label_1c826c;
            case 0x1C8270u: goto label_1c8270;
            case 0x1C8274u: goto label_1c8274;
            case 0x1C8278u: goto label_1c8278;
            case 0x1C827Cu: goto label_1c827c;
            case 0x1C8280u: goto label_1c8280;
            case 0x1C8284u: goto label_1c8284;
            case 0x1C8288u: goto label_1c8288;
            case 0x1C828Cu: goto label_1c828c;
            case 0x1C8290u: goto label_1c8290;
            case 0x1C8294u: goto label_1c8294;
            case 0x1C8298u: goto label_1c8298;
            case 0x1C829Cu: goto label_1c829c;
            case 0x1C82A0u: goto label_1c82a0;
            case 0x1C82A4u: goto label_1c82a4;
            case 0x1C82A8u: goto label_1c82a8;
            case 0x1C82ACu: goto label_1c82ac;
            case 0x1C82B0u: goto label_1c82b0;
            case 0x1C82B4u: goto label_1c82b4;
            case 0x1C82B8u: goto label_1c82b8;
            case 0x1C82BCu: goto label_1c82bc;
            case 0x1C82C0u: goto label_1c82c0;
            case 0x1C82C4u: goto label_1c82c4;
            case 0x1C82C8u: goto label_1c82c8;
            case 0x1C82CCu: goto label_1c82cc;
            case 0x1C82D0u: goto label_1c82d0;
            case 0x1C82D4u: goto label_1c82d4;
            case 0x1C82D8u: goto label_1c82d8;
            case 0x1C82DCu: goto label_1c82dc;
            case 0x1C82E0u: goto label_1c82e0;
            case 0x1C82E4u: goto label_1c82e4;
            case 0x1C82E8u: goto label_1c82e8;
            case 0x1C82ECu: goto label_1c82ec;
            case 0x1C82F0u: goto label_1c82f0;
            case 0x1C82F4u: goto label_1c82f4;
            case 0x1C82F8u: goto label_1c82f8;
            case 0x1C82FCu: goto label_1c82fc;
            case 0x1C8300u: goto label_1c8300;
            case 0x1C8304u: goto label_1c8304;
            case 0x1C8308u: goto label_1c8308;
            case 0x1C830Cu: goto label_1c830c;
            case 0x1C8310u: goto label_1c8310;
            case 0x1C8314u: goto label_1c8314;
            case 0x1C8318u: goto label_1c8318;
            case 0x1C831Cu: goto label_1c831c;
            case 0x1C8320u: goto label_1c8320;
            case 0x1C8324u: goto label_1c8324;
            case 0x1C8328u: goto label_1c8328;
            case 0x1C832Cu: goto label_1c832c;
            case 0x1C8330u: goto label_1c8330;
            case 0x1C8334u: goto label_1c8334;
            case 0x1C8338u: goto label_1c8338;
            case 0x1C833Cu: goto label_1c833c;
            case 0x1C8340u: goto label_1c8340;
            case 0x1C8344u: goto label_1c8344;
            case 0x1C8348u: goto label_1c8348;
            case 0x1C834Cu: goto label_1c834c;
            case 0x1C8350u: goto label_1c8350;
            case 0x1C8354u: goto label_1c8354;
            case 0x1C8358u: goto label_1c8358;
            case 0x1C835Cu: goto label_1c835c;
            case 0x1C8360u: goto label_1c8360;
            case 0x1C8364u: goto label_1c8364;
            case 0x1C8368u: goto label_1c8368;
            case 0x1C836Cu: goto label_1c836c;
            case 0x1C8370u: goto label_1c8370;
            case 0x1C8374u: goto label_1c8374;
            case 0x1C8378u: goto label_1c8378;
            case 0x1C837Cu: goto label_1c837c;
            case 0x1C8380u: goto label_1c8380;
            case 0x1C8384u: goto label_1c8384;
            case 0x1C8388u: goto label_1c8388;
            case 0x1C838Cu: goto label_1c838c;
            case 0x1C8390u: goto label_1c8390;
            case 0x1C8394u: goto label_1c8394;
            case 0x1C8398u: goto label_1c8398;
            case 0x1C839Cu: goto label_1c839c;
            case 0x1C83A0u: goto label_1c83a0;
            case 0x1C83A4u: goto label_1c83a4;
            case 0x1C83A8u: goto label_1c83a8;
            case 0x1C83ACu: goto label_1c83ac;
            case 0x1C83B0u: goto label_1c83b0;
            case 0x1C83B4u: goto label_1c83b4;
            case 0x1C83B8u: goto label_1c83b8;
            case 0x1C83BCu: goto label_1c83bc;
            case 0x1C83C0u: goto label_1c83c0;
            case 0x1C83C4u: goto label_1c83c4;
            case 0x1C83C8u: goto label_1c83c8;
            case 0x1C83CCu: goto label_1c83cc;
            case 0x1C83D0u: goto label_1c83d0;
            case 0x1C83D4u: goto label_1c83d4;
            case 0x1C83D8u: goto label_1c83d8;
            case 0x1C83DCu: goto label_1c83dc;
            case 0x1C83E0u: goto label_1c83e0;
            case 0x1C83E4u: goto label_1c83e4;
            case 0x1C83E8u: goto label_1c83e8;
            case 0x1C83ECu: goto label_1c83ec;
            case 0x1C83F0u: goto label_1c83f0;
            case 0x1C83F4u: goto label_1c83f4;
            case 0x1C83F8u: goto label_1c83f8;
            case 0x1C83FCu: goto label_1c83fc;
            case 0x1C8400u: goto label_1c8400;
            case 0x1C8404u: goto label_1c8404;
            case 0x1C8408u: goto label_1c8408;
            case 0x1C840Cu: goto label_1c840c;
            case 0x1C8410u: goto label_1c8410;
            case 0x1C8414u: goto label_1c8414;
            case 0x1C8418u: goto label_1c8418;
            case 0x1C841Cu: goto label_1c841c;
            case 0x1C8420u: goto label_1c8420;
            case 0x1C8424u: goto label_1c8424;
            case 0x1C8428u: goto label_1c8428;
            case 0x1C842Cu: goto label_1c842c;
            case 0x1C8430u: goto label_1c8430;
            case 0x1C8434u: goto label_1c8434;
            case 0x1C8438u: goto label_1c8438;
            case 0x1C843Cu: goto label_1c843c;
            case 0x1C8440u: goto label_1c8440;
            case 0x1C8444u: goto label_1c8444;
            case 0x1C8448u: goto label_1c8448;
            case 0x1C844Cu: goto label_1c844c;
            case 0x1C8450u: goto label_1c8450;
            case 0x1C8454u: goto label_1c8454;
            case 0x1C8458u: goto label_1c8458;
            case 0x1C845Cu: goto label_1c845c;
            case 0x1C8460u: goto label_1c8460;
            case 0x1C8464u: goto label_1c8464;
            case 0x1C8468u: goto label_1c8468;
            case 0x1C846Cu: goto label_1c846c;
            case 0x1C8470u: goto label_1c8470;
            case 0x1C8474u: goto label_1c8474;
            case 0x1C8478u: goto label_1c8478;
            case 0x1C847Cu: goto label_1c847c;
            case 0x1C8480u: goto label_1c8480;
            case 0x1C8484u: goto label_1c8484;
            case 0x1C8488u: goto label_1c8488;
            case 0x1C848Cu: goto label_1c848c;
            case 0x1C8490u: goto label_1c8490;
            case 0x1C8494u: goto label_1c8494;
            case 0x1C8498u: goto label_1c8498;
            case 0x1C849Cu: goto label_1c849c;
            case 0x1C84A0u: goto label_1c84a0;
            case 0x1C84A4u: goto label_1c84a4;
            case 0x1C84A8u: goto label_1c84a8;
            case 0x1C84ACu: goto label_1c84ac;
            case 0x1C84B0u: goto label_1c84b0;
            case 0x1C84B4u: goto label_1c84b4;
            case 0x1C84B8u: goto label_1c84b8;
            case 0x1C84BCu: goto label_1c84bc;
            case 0x1C84C0u: goto label_1c84c0;
            case 0x1C84C4u: goto label_1c84c4;
            case 0x1C84C8u: goto label_1c84c8;
            case 0x1C84CCu: goto label_1c84cc;
            case 0x1C84D0u: goto label_1c84d0;
            case 0x1C84D4u: goto label_1c84d4;
            case 0x1C84D8u: goto label_1c84d8;
            case 0x1C84DCu: goto label_1c84dc;
            case 0x1C84E0u: goto label_1c84e0;
            case 0x1C84E4u: goto label_1c84e4;
            case 0x1C84E8u: goto label_1c84e8;
            case 0x1C84ECu: goto label_1c84ec;
            case 0x1C84F0u: goto label_1c84f0;
            case 0x1C84F4u: goto label_1c84f4;
            case 0x1C84F8u: goto label_1c84f8;
            case 0x1C84FCu: goto label_1c84fc;
            case 0x1C8500u: goto label_1c8500;
            case 0x1C8504u: goto label_1c8504;
            case 0x1C8508u: goto label_1c8508;
            case 0x1C850Cu: goto label_1c850c;
            case 0x1C8510u: goto label_1c8510;
            case 0x1C8514u: goto label_1c8514;
            case 0x1C8518u: goto label_1c8518;
            case 0x1C851Cu: goto label_1c851c;
            case 0x1C8520u: goto label_1c8520;
            case 0x1C8524u: goto label_1c8524;
            case 0x1C8528u: goto label_1c8528;
            case 0x1C852Cu: goto label_1c852c;
            case 0x1C8530u: goto label_1c8530;
            case 0x1C8534u: goto label_1c8534;
            case 0x1C8538u: goto label_1c8538;
            case 0x1C853Cu: goto label_1c853c;
            case 0x1C8540u: goto label_1c8540;
            case 0x1C8544u: goto label_1c8544;
            case 0x1C8548u: goto label_1c8548;
            case 0x1C854Cu: goto label_1c854c;
            case 0x1C8550u: goto label_1c8550;
            case 0x1C8554u: goto label_1c8554;
            case 0x1C8558u: goto label_1c8558;
            case 0x1C855Cu: goto label_1c855c;
            case 0x1C8560u: goto label_1c8560;
            case 0x1C8564u: goto label_1c8564;
            case 0x1C8568u: goto label_1c8568;
            case 0x1C856Cu: goto label_1c856c;
            case 0x1C8570u: goto label_1c8570;
            case 0x1C8574u: goto label_1c8574;
            case 0x1C8578u: goto label_1c8578;
            case 0x1C857Cu: goto label_1c857c;
            case 0x1C8580u: goto label_1c8580;
            case 0x1C8584u: goto label_1c8584;
            case 0x1C8588u: goto label_1c8588;
            case 0x1C858Cu: goto label_1c858c;
            case 0x1C8590u: goto label_1c8590;
            case 0x1C8594u: goto label_1c8594;
            case 0x1C8598u: goto label_1c8598;
            case 0x1C859Cu: goto label_1c859c;
            case 0x1C85A0u: goto label_1c85a0;
            case 0x1C85A4u: goto label_1c85a4;
            case 0x1C85A8u: goto label_1c85a8;
            case 0x1C85ACu: goto label_1c85ac;
            case 0x1C85B0u: goto label_1c85b0;
            case 0x1C85B4u: goto label_1c85b4;
            case 0x1C85B8u: goto label_1c85b8;
            case 0x1C85BCu: goto label_1c85bc;
            case 0x1C85C0u: goto label_1c85c0;
            case 0x1C85C4u: goto label_1c85c4;
            case 0x1C85C8u: goto label_1c85c8;
            case 0x1C85CCu: goto label_1c85cc;
            case 0x1C85D0u: goto label_1c85d0;
            case 0x1C85D4u: goto label_1c85d4;
            case 0x1C85D8u: goto label_1c85d8;
            case 0x1C85DCu: goto label_1c85dc;
            case 0x1C85E0u: goto label_1c85e0;
            case 0x1C85E4u: goto label_1c85e4;
            case 0x1C85E8u: goto label_1c85e8;
            case 0x1C85ECu: goto label_1c85ec;
            case 0x1C85F0u: goto label_1c85f0;
            case 0x1C85F4u: goto label_1c85f4;
            case 0x1C85F8u: goto label_1c85f8;
            case 0x1C85FCu: goto label_1c85fc;
            case 0x1C8600u: goto label_1c8600;
            case 0x1C8604u: goto label_1c8604;
            case 0x1C8608u: goto label_1c8608;
            case 0x1C860Cu: goto label_1c860c;
            case 0x1C8610u: goto label_1c8610;
            case 0x1C8614u: goto label_1c8614;
            case 0x1C8618u: goto label_1c8618;
            case 0x1C861Cu: goto label_1c861c;
            case 0x1C8620u: goto label_1c8620;
            case 0x1C8624u: goto label_1c8624;
            case 0x1C8628u: goto label_1c8628;
            case 0x1C862Cu: goto label_1c862c;
            case 0x1C8630u: goto label_1c8630;
            case 0x1C8634u: goto label_1c8634;
            case 0x1C8638u: goto label_1c8638;
            case 0x1C863Cu: goto label_1c863c;
            case 0x1C8640u: goto label_1c8640;
            case 0x1C8644u: goto label_1c8644;
            case 0x1C8648u: goto label_1c8648;
            case 0x1C864Cu: goto label_1c864c;
            case 0x1C8650u: goto label_1c8650;
            case 0x1C8654u: goto label_1c8654;
            case 0x1C8658u: goto label_1c8658;
            case 0x1C865Cu: goto label_1c865c;
            case 0x1C8660u: goto label_1c8660;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C83F4u; }
            if (ctx->pc != 0x1C83F4u) { return; }
        }
    }
    ctx->pc = 0x1C83F4u;
label_1c83f4:
    // 0x1c83f4: 0x10000094  b           . + 4 + (0x94 << 2)
label_1c83f8:
    if (ctx->pc == 0x1C83F8u) {
        ctx->pc = 0x1C83FCu;
        goto label_1c83fc;
    }
    ctx->pc = 0x1C83F4u;
    {
        const bool branch_taken_0x1c83f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c83f4) {
            ctx->pc = 0x1C8648u;
            goto label_1c8648;
        }
    }
    ctx->pc = 0x1C83FCu;
label_1c83fc:
    // 0x1c83fc: 0x0  nop
    ctx->pc = 0x1c83fcu;
    // NOP
label_1c8400:
    // 0x1c8400: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c8400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c8404:
    // 0x1c8404: 0x28410079  slti        $at, $v0, 0x79
    ctx->pc = 0x1c8404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
label_1c8408:
    // 0x1c8408: 0x1420006f  bnez        $at, . + 4 + (0x6F << 2)
label_1c840c:
    if (ctx->pc == 0x1C840Cu) {
        ctx->pc = 0x1C8410u;
        goto label_1c8410;
    }
    ctx->pc = 0x1C8408u;
    {
        const bool branch_taken_0x1c8408 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8408) {
            ctx->pc = 0x1C85C8u;
            goto label_1c85c8;
        }
    }
    ctx->pc = 0x1C8410u;
label_1c8410:
    // 0x1c8410: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c8410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8414:
    // 0x1c8414: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1c8414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1c8418:
    // 0x1c8418: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c8418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c841c:
    // 0x1c841c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c841cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1c8420:
    // 0x1c8420: 0xc05d080  jal         func_174200
label_1c8424:
    if (ctx->pc == 0x1C8424u) {
        ctx->pc = 0x1C8424u;
            // 0x1c8424: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1C8428u;
        goto label_1c8428;
    }
    ctx->pc = 0x1C8420u;
    SET_GPR_U32(ctx, 31, 0x1C8428u);
    ctx->pc = 0x1C8424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8420u;
            // 0x1c8424: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8428u; }
        if (ctx->pc != 0x1C8428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8428u; }
        if (ctx->pc != 0x1C8428u) { return; }
    }
    ctx->pc = 0x1C8428u;
label_1c8428:
    // 0x1c8428: 0xc050bb4  jal         func_142ED0
label_1c842c:
    if (ctx->pc == 0x1C842Cu) {
        ctx->pc = 0x1C8430u;
        goto label_1c8430;
    }
    ctx->pc = 0x1C8428u;
    SET_GPR_U32(ctx, 31, 0x1C8430u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8430u; }
        if (ctx->pc != 0x1C8430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8430u; }
        if (ctx->pc != 0x1C8430u) { return; }
    }
    ctx->pc = 0x1C8430u;
label_1c8430:
    // 0x1c8430: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c8430u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1c8434:
    // 0x1c8434: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c8438:
    if (ctx->pc == 0x1C8438u) {
        ctx->pc = 0x1C843Cu;
        goto label_1c843c;
    }
    ctx->pc = 0x1C8434u;
    {
        const bool branch_taken_0x1c8434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8434) {
            ctx->pc = 0x1C8458u;
            goto label_1c8458;
        }
    }
    ctx->pc = 0x1C843Cu;
label_1c843c:
    // 0x1c843c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8440:
    // 0x1c8440: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1c8440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1c8444:
    // 0x1c8444: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c8444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8448:
    // 0x1c8448: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c8448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1c844c:
    // 0x1c844c: 0xc05d080  jal         func_174200
label_1c8450:
    if (ctx->pc == 0x1C8450u) {
        ctx->pc = 0x1C8450u;
            // 0x1c8450: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1C8454u;
        goto label_1c8454;
    }
    ctx->pc = 0x1C844Cu;
    SET_GPR_U32(ctx, 31, 0x1C8454u);
    ctx->pc = 0x1C8450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C844Cu;
            // 0x1c8450: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8454u; }
        if (ctx->pc != 0x1C8454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8454u; }
        if (ctx->pc != 0x1C8454u) { return; }
    }
    ctx->pc = 0x1C8454u;
label_1c8454:
    // 0x1c8454: 0x0  nop
    ctx->pc = 0x1c8454u;
    // NOP
label_1c8458:
    // 0x1c8458: 0xc050bb4  jal         func_142ED0
label_1c845c:
    if (ctx->pc == 0x1C845Cu) {
        ctx->pc = 0x1C8460u;
        goto label_1c8460;
    }
    ctx->pc = 0x1C8458u;
    SET_GPR_U32(ctx, 31, 0x1C8460u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8460u; }
        if (ctx->pc != 0x1C8460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8460u; }
        if (ctx->pc != 0x1C8460u) { return; }
    }
    ctx->pc = 0x1C8460u;
label_1c8460:
    // 0x1c8460: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c8460u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1c8464:
    // 0x1c8464: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c8468:
    if (ctx->pc == 0x1C8468u) {
        ctx->pc = 0x1C846Cu;
        goto label_1c846c;
    }
    ctx->pc = 0x1C8464u;
    {
        const bool branch_taken_0x1c8464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8464) {
            ctx->pc = 0x1C8488u;
            goto label_1c8488;
        }
    }
    ctx->pc = 0x1C846Cu;
label_1c846c:
    // 0x1c846c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8470:
    // 0x1c8470: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1c8470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1c8474:
    // 0x1c8474: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c8474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8478:
    // 0x1c8478: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c8478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1c847c:
    // 0x1c847c: 0xc05d080  jal         func_174200
label_1c8480:
    if (ctx->pc == 0x1C8480u) {
        ctx->pc = 0x1C8480u;
            // 0x1c8480: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1C8484u;
        goto label_1c8484;
    }
    ctx->pc = 0x1C847Cu;
    SET_GPR_U32(ctx, 31, 0x1C8484u);
    ctx->pc = 0x1C8480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C847Cu;
            // 0x1c8480: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8484u; }
        if (ctx->pc != 0x1C8484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8484u; }
        if (ctx->pc != 0x1C8484u) { return; }
    }
    ctx->pc = 0x1C8484u;
label_1c8484:
    // 0x1c8484: 0x0  nop
    ctx->pc = 0x1c8484u;
    // NOP
label_1c8488:
    // 0x1c8488: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c8488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1c848c:
    // 0x1c848c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1c848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8490:
    // 0x1c8490: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c8490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c8494:
    // 0x1c8494: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c8494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8498:
    // 0x1c8498: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1c8498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1c849c:
    // 0x1c849c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c849cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c84a0:
    // 0x1c84a0: 0x0  nop
    ctx->pc = 0x1c84a0u;
    // NOP
label_1c84a4:
    // 0x1c84a4: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1c84a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1c84a8:
    // 0x1c84a8: 0xc053740  jal         func_14DD00
label_1c84ac:
    if (ctx->pc == 0x1C84ACu) {
        ctx->pc = 0x1C84ACu;
            // 0x1c84ac: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1C84B0u;
        goto label_1c84b0;
    }
    ctx->pc = 0x1C84A8u;
    SET_GPR_U32(ctx, 31, 0x1C84B0u);
    ctx->pc = 0x1C84ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C84A8u;
            // 0x1c84ac: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C84B0u; }
        if (ctx->pc != 0x1C84B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C84B0u; }
        if (ctx->pc != 0x1C84B0u) { return; }
    }
    ctx->pc = 0x1C84B0u;
label_1c84b0:
    // 0x1c84b0: 0xc065d00  jal         func_197400
label_1c84b4:
    if (ctx->pc == 0x1C84B4u) {
        ctx->pc = 0x1C84B8u;
        goto label_1c84b8;
    }
    ctx->pc = 0x1C84B0u;
    SET_GPR_U32(ctx, 31, 0x1C84B8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C84B8u; }
        if (ctx->pc != 0x1C84B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C84B8u; }
        if (ctx->pc != 0x1C84B8u) { return; }
    }
    ctx->pc = 0x1C84B8u;
label_1c84b8:
    // 0x1c84b8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1c84b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c84bc:
    // 0x1c84bc: 0x14510012  bne         $v0, $s1, . + 4 + (0x12 << 2)
label_1c84c0:
    if (ctx->pc == 0x1C84C0u) {
        ctx->pc = 0x1C84C0u;
            // 0x1c84c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C84C4u;
        goto label_1c84c4;
    }
    ctx->pc = 0x1C84BCu;
    {
        const bool branch_taken_0x1c84bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1C84C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C84BCu;
            // 0x1c84c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c84bc) {
            ctx->pc = 0x1C8508u;
            goto label_1c8508;
        }
    }
    ctx->pc = 0x1C84C4u;
label_1c84c4:
    // 0x1c84c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c84c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c84c8:
    // 0x1c84c8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1c84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1c84cc:
    // 0x1c84cc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1c84ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1c84d0:
    // 0x1c84d0: 0xc06530c  jal         func_194C30
label_1c84d4:
    if (ctx->pc == 0x1C84D4u) {
        ctx->pc = 0x1C84D4u;
            // 0x1c84d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C84D8u;
        goto label_1c84d8;
    }
    ctx->pc = 0x1C84D0u;
    SET_GPR_U32(ctx, 31, 0x1C84D8u);
    ctx->pc = 0x1C84D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C84D0u;
            // 0x1c84d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C84D8u; }
        if (ctx->pc != 0x1C84D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C84D8u; }
        if (ctx->pc != 0x1C84D8u) { return; }
    }
    ctx->pc = 0x1C84D8u;
label_1c84d8:
    // 0x1c84d8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1c84d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1c84dc:
    // 0x1c84dc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1c84dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1c84e0:
    // 0x1c84e0: 0xc0652ec  jal         func_194BB0
label_1c84e4:
    if (ctx->pc == 0x1C84E4u) {
        ctx->pc = 0x1C84E4u;
            // 0x1c84e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C84E8u;
        goto label_1c84e8;
    }
    ctx->pc = 0x1C84E0u;
    SET_GPR_U32(ctx, 31, 0x1C84E8u);
    ctx->pc = 0x1C84E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C84E0u;
            // 0x1c84e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C84E8u; }
        if (ctx->pc != 0x1C84E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C84E8u; }
        if (ctx->pc != 0x1C84E8u) { return; }
    }
    ctx->pc = 0x1C84E8u;
label_1c84e8:
    // 0x1c84e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c84e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c84ec:
    // 0x1c84ec: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1c84ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1c84f0:
    // 0x1c84f0: 0x2a62000f  slti        $v0, $s3, 0xF
    ctx->pc = 0x1c84f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
label_1c84f4:
    // 0x1c84f4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1c84f8:
    if (ctx->pc == 0x1C84F8u) {
        ctx->pc = 0x1C84F8u;
            // 0x1c84f8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1C84FCu;
        goto label_1c84fc;
    }
    ctx->pc = 0x1C84F4u;
    {
        const bool branch_taken_0x1c84f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C84F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C84F4u;
            // 0x1c84f8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c84f4) {
            ctx->pc = 0x1C84C8u;
            goto label_1c84c8;
        }
    }
    ctx->pc = 0x1C84FCu;
label_1c84fc:
    // 0x1c84fc: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1c8500:
    if (ctx->pc == 0x1C8500u) {
        ctx->pc = 0x1C8504u;
        goto label_1c8504;
    }
    ctx->pc = 0x1C84FCu;
    {
        const bool branch_taken_0x1c84fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c84fc) {
            ctx->pc = 0x1C85B0u;
            goto label_1c85b0;
        }
    }
    ctx->pc = 0x1C8504u;
label_1c8504:
    // 0x1c8504: 0x0  nop
    ctx->pc = 0x1c8504u;
    // NOP
label_1c8508:
    // 0x1c8508: 0xc065d00  jal         func_197400
label_1c850c:
    if (ctx->pc == 0x1C850Cu) {
        ctx->pc = 0x1C8510u;
        goto label_1c8510;
    }
    ctx->pc = 0x1C8508u;
    SET_GPR_U32(ctx, 31, 0x1C8510u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8510u; }
        if (ctx->pc != 0x1C8510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8510u; }
        if (ctx->pc != 0x1C8510u) { return; }
    }
    ctx->pc = 0x1C8510u;
label_1c8510:
    // 0x1c8510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8514:
    // 0x1c8514: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_1c8518:
    if (ctx->pc == 0x1C8518u) {
        ctx->pc = 0x1C8518u;
            // 0x1c8518: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C851Cu;
        goto label_1c851c;
    }
    ctx->pc = 0x1C8514u;
    {
        const bool branch_taken_0x1c8514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8514u;
            // 0x1c8518: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8514) {
            ctx->pc = 0x1C8568u;
            goto label_1c8568;
        }
    }
    ctx->pc = 0x1C851Cu;
label_1c851c:
    // 0x1c851c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c851cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8520:
    // 0x1c8520: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1c8520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c8524:
    // 0x1c8524: 0x0  nop
    ctx->pc = 0x1c8524u;
    // NOP
label_1c8528:
    // 0x1c8528: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1c8528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1c852c:
    // 0x1c852c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1c852cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1c8530:
    // 0x1c8530: 0xc06530c  jal         func_194C30
label_1c8534:
    if (ctx->pc == 0x1C8534u) {
        ctx->pc = 0x1C8534u;
            // 0x1c8534: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C8538u;
        goto label_1c8538;
    }
    ctx->pc = 0x1C8530u;
    SET_GPR_U32(ctx, 31, 0x1C8538u);
    ctx->pc = 0x1C8534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8530u;
            // 0x1c8534: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8538u; }
        if (ctx->pc != 0x1C8538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8538u; }
        if (ctx->pc != 0x1C8538u) { return; }
    }
    ctx->pc = 0x1C8538u;
label_1c8538:
    // 0x1c8538: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1c8538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1c853c:
    // 0x1c853c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1c853cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1c8540:
    // 0x1c8540: 0xc0652ec  jal         func_194BB0
label_1c8544:
    if (ctx->pc == 0x1C8544u) {
        ctx->pc = 0x1C8544u;
            // 0x1c8544: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C8548u;
        goto label_1c8548;
    }
    ctx->pc = 0x1C8540u;
    SET_GPR_U32(ctx, 31, 0x1C8548u);
    ctx->pc = 0x1C8544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8540u;
            // 0x1c8544: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8548u; }
        if (ctx->pc != 0x1C8548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8548u; }
        if (ctx->pc != 0x1C8548u) { return; }
    }
    ctx->pc = 0x1C8548u;
label_1c8548:
    // 0x1c8548: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c8548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c854c:
    // 0x1c854c: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1c854cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1c8550:
    // 0x1c8550: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1c8550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_1c8554:
    // 0x1c8554: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1c8558:
    if (ctx->pc == 0x1C8558u) {
        ctx->pc = 0x1C8558u;
            // 0x1c8558: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x1C855Cu;
        goto label_1c855c;
    }
    ctx->pc = 0x1C8554u;
    {
        const bool branch_taken_0x1c8554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8554u;
            // 0x1c8558: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8554) {
            ctx->pc = 0x1C8528u;
            goto label_1c8528;
        }
    }
    ctx->pc = 0x1C855Cu;
label_1c855c:
    // 0x1c855c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c8560:
    if (ctx->pc == 0x1C8560u) {
        ctx->pc = 0x1C8564u;
        goto label_1c8564;
    }
    ctx->pc = 0x1C855Cu;
    {
        const bool branch_taken_0x1c855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c855c) {
            ctx->pc = 0x1C85B0u;
            goto label_1c85b0;
        }
    }
    ctx->pc = 0x1C8564u;
label_1c8564:
    // 0x1c8564: 0x0  nop
    ctx->pc = 0x1c8564u;
    // NOP
label_1c8568:
    // 0x1c8568: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c8568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c856c:
    // 0x1c856c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c856cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8570:
    // 0x1c8570: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1c8570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c8574:
    // 0x1c8574: 0x0  nop
    ctx->pc = 0x1c8574u;
    // NOP
label_1c8578:
    // 0x1c8578: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1c8578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1c857c:
    // 0x1c857c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1c857cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1c8580:
    // 0x1c8580: 0xc06530c  jal         func_194C30
label_1c8584:
    if (ctx->pc == 0x1C8584u) {
        ctx->pc = 0x1C8584u;
            // 0x1c8584: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C8588u;
        goto label_1c8588;
    }
    ctx->pc = 0x1C8580u;
    SET_GPR_U32(ctx, 31, 0x1C8588u);
    ctx->pc = 0x1C8584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8580u;
            // 0x1c8584: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8588u; }
        if (ctx->pc != 0x1C8588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8588u; }
        if (ctx->pc != 0x1C8588u) { return; }
    }
    ctx->pc = 0x1C8588u;
label_1c8588:
    // 0x1c8588: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1c8588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1c858c:
    // 0x1c858c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1c858cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1c8590:
    // 0x1c8590: 0xc0652ec  jal         func_194BB0
label_1c8594:
    if (ctx->pc == 0x1C8594u) {
        ctx->pc = 0x1C8594u;
            // 0x1c8594: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C8598u;
        goto label_1c8598;
    }
    ctx->pc = 0x1C8590u;
    SET_GPR_U32(ctx, 31, 0x1C8598u);
    ctx->pc = 0x1C8594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8590u;
            // 0x1c8594: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8598u; }
        if (ctx->pc != 0x1C8598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8598u; }
        if (ctx->pc != 0x1C8598u) { return; }
    }
    ctx->pc = 0x1C8598u;
label_1c8598:
    // 0x1c8598: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c8598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c859c:
    // 0x1c859c: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x1c859cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_1c85a0:
    // 0x1c85a0: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x1c85a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_1c85a4:
    // 0x1c85a4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1c85a8:
    if (ctx->pc == 0x1C85A8u) {
        ctx->pc = 0x1C85A8u;
            // 0x1c85a8: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->pc = 0x1C85ACu;
        goto label_1c85ac;
    }
    ctx->pc = 0x1C85A4u;
    {
        const bool branch_taken_0x1c85a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C85A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C85A4u;
            // 0x1c85a8: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85a4) {
            ctx->pc = 0x1C8578u;
            goto label_1c8578;
        }
    }
    ctx->pc = 0x1C85ACu;
label_1c85ac:
    // 0x1c85ac: 0x0  nop
    ctx->pc = 0x1c85acu;
    // NOP
label_1c85b0:
    // 0x1c85b0: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1c85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1c85b4:
    // 0x1c85b4: 0x40f809  jalr        $v0
label_1c85b8:
    if (ctx->pc == 0x1C85B8u) {
        ctx->pc = 0x1C85B8u;
            // 0x1c85b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C85BCu;
        goto label_1c85bc;
    }
    ctx->pc = 0x1C85B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C85BCu);
        ctx->pc = 0x1C85B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C85B4u;
            // 0x1c85b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7F60u: goto label_1c7f60;
            case 0x1C7F64u: goto label_1c7f64;
            case 0x1C7F68u: goto label_1c7f68;
            case 0x1C7F6Cu: goto label_1c7f6c;
            case 0x1C7F70u: goto label_1c7f70;
            case 0x1C7F74u: goto label_1c7f74;
            case 0x1C7F78u: goto label_1c7f78;
            case 0x1C7F7Cu: goto label_1c7f7c;
            case 0x1C7F80u: goto label_1c7f80;
            case 0x1C7F84u: goto label_1c7f84;
            case 0x1C7F88u: goto label_1c7f88;
            case 0x1C7F8Cu: goto label_1c7f8c;
            case 0x1C7F90u: goto label_1c7f90;
            case 0x1C7F94u: goto label_1c7f94;
            case 0x1C7F98u: goto label_1c7f98;
            case 0x1C7F9Cu: goto label_1c7f9c;
            case 0x1C7FA0u: goto label_1c7fa0;
            case 0x1C7FA4u: goto label_1c7fa4;
            case 0x1C7FA8u: goto label_1c7fa8;
            case 0x1C7FACu: goto label_1c7fac;
            case 0x1C7FB0u: goto label_1c7fb0;
            case 0x1C7FB4u: goto label_1c7fb4;
            case 0x1C7FB8u: goto label_1c7fb8;
            case 0x1C7FBCu: goto label_1c7fbc;
            case 0x1C7FC0u: goto label_1c7fc0;
            case 0x1C7FC4u: goto label_1c7fc4;
            case 0x1C7FC8u: goto label_1c7fc8;
            case 0x1C7FCCu: goto label_1c7fcc;
            case 0x1C7FD0u: goto label_1c7fd0;
            case 0x1C7FD4u: goto label_1c7fd4;
            case 0x1C7FD8u: goto label_1c7fd8;
            case 0x1C7FDCu: goto label_1c7fdc;
            case 0x1C7FE0u: goto label_1c7fe0;
            case 0x1C7FE4u: goto label_1c7fe4;
            case 0x1C7FE8u: goto label_1c7fe8;
            case 0x1C7FECu: goto label_1c7fec;
            case 0x1C7FF0u: goto label_1c7ff0;
            case 0x1C7FF4u: goto label_1c7ff4;
            case 0x1C7FF8u: goto label_1c7ff8;
            case 0x1C7FFCu: goto label_1c7ffc;
            case 0x1C8000u: goto label_1c8000;
            case 0x1C8004u: goto label_1c8004;
            case 0x1C8008u: goto label_1c8008;
            case 0x1C800Cu: goto label_1c800c;
            case 0x1C8010u: goto label_1c8010;
            case 0x1C8014u: goto label_1c8014;
            case 0x1C8018u: goto label_1c8018;
            case 0x1C801Cu: goto label_1c801c;
            case 0x1C8020u: goto label_1c8020;
            case 0x1C8024u: goto label_1c8024;
            case 0x1C8028u: goto label_1c8028;
            case 0x1C802Cu: goto label_1c802c;
            case 0x1C8030u: goto label_1c8030;
            case 0x1C8034u: goto label_1c8034;
            case 0x1C8038u: goto label_1c8038;
            case 0x1C803Cu: goto label_1c803c;
            case 0x1C8040u: goto label_1c8040;
            case 0x1C8044u: goto label_1c8044;
            case 0x1C8048u: goto label_1c8048;
            case 0x1C804Cu: goto label_1c804c;
            case 0x1C8050u: goto label_1c8050;
            case 0x1C8054u: goto label_1c8054;
            case 0x1C8058u: goto label_1c8058;
            case 0x1C805Cu: goto label_1c805c;
            case 0x1C8060u: goto label_1c8060;
            case 0x1C8064u: goto label_1c8064;
            case 0x1C8068u: goto label_1c8068;
            case 0x1C806Cu: goto label_1c806c;
            case 0x1C8070u: goto label_1c8070;
            case 0x1C8074u: goto label_1c8074;
            case 0x1C8078u: goto label_1c8078;
            case 0x1C807Cu: goto label_1c807c;
            case 0x1C8080u: goto label_1c8080;
            case 0x1C8084u: goto label_1c8084;
            case 0x1C8088u: goto label_1c8088;
            case 0x1C808Cu: goto label_1c808c;
            case 0x1C8090u: goto label_1c8090;
            case 0x1C8094u: goto label_1c8094;
            case 0x1C8098u: goto label_1c8098;
            case 0x1C809Cu: goto label_1c809c;
            case 0x1C80A0u: goto label_1c80a0;
            case 0x1C80A4u: goto label_1c80a4;
            case 0x1C80A8u: goto label_1c80a8;
            case 0x1C80ACu: goto label_1c80ac;
            case 0x1C80B0u: goto label_1c80b0;
            case 0x1C80B4u: goto label_1c80b4;
            case 0x1C80B8u: goto label_1c80b8;
            case 0x1C80BCu: goto label_1c80bc;
            case 0x1C80C0u: goto label_1c80c0;
            case 0x1C80C4u: goto label_1c80c4;
            case 0x1C80C8u: goto label_1c80c8;
            case 0x1C80CCu: goto label_1c80cc;
            case 0x1C80D0u: goto label_1c80d0;
            case 0x1C80D4u: goto label_1c80d4;
            case 0x1C80D8u: goto label_1c80d8;
            case 0x1C80DCu: goto label_1c80dc;
            case 0x1C80E0u: goto label_1c80e0;
            case 0x1C80E4u: goto label_1c80e4;
            case 0x1C80E8u: goto label_1c80e8;
            case 0x1C80ECu: goto label_1c80ec;
            case 0x1C80F0u: goto label_1c80f0;
            case 0x1C80F4u: goto label_1c80f4;
            case 0x1C80F8u: goto label_1c80f8;
            case 0x1C80FCu: goto label_1c80fc;
            case 0x1C8100u: goto label_1c8100;
            case 0x1C8104u: goto label_1c8104;
            case 0x1C8108u: goto label_1c8108;
            case 0x1C810Cu: goto label_1c810c;
            case 0x1C8110u: goto label_1c8110;
            case 0x1C8114u: goto label_1c8114;
            case 0x1C8118u: goto label_1c8118;
            case 0x1C811Cu: goto label_1c811c;
            case 0x1C8120u: goto label_1c8120;
            case 0x1C8124u: goto label_1c8124;
            case 0x1C8128u: goto label_1c8128;
            case 0x1C812Cu: goto label_1c812c;
            case 0x1C8130u: goto label_1c8130;
            case 0x1C8134u: goto label_1c8134;
            case 0x1C8138u: goto label_1c8138;
            case 0x1C813Cu: goto label_1c813c;
            case 0x1C8140u: goto label_1c8140;
            case 0x1C8144u: goto label_1c8144;
            case 0x1C8148u: goto label_1c8148;
            case 0x1C814Cu: goto label_1c814c;
            case 0x1C8150u: goto label_1c8150;
            case 0x1C8154u: goto label_1c8154;
            case 0x1C8158u: goto label_1c8158;
            case 0x1C815Cu: goto label_1c815c;
            case 0x1C8160u: goto label_1c8160;
            case 0x1C8164u: goto label_1c8164;
            case 0x1C8168u: goto label_1c8168;
            case 0x1C816Cu: goto label_1c816c;
            case 0x1C8170u: goto label_1c8170;
            case 0x1C8174u: goto label_1c8174;
            case 0x1C8178u: goto label_1c8178;
            case 0x1C817Cu: goto label_1c817c;
            case 0x1C8180u: goto label_1c8180;
            case 0x1C8184u: goto label_1c8184;
            case 0x1C8188u: goto label_1c8188;
            case 0x1C818Cu: goto label_1c818c;
            case 0x1C8190u: goto label_1c8190;
            case 0x1C8194u: goto label_1c8194;
            case 0x1C8198u: goto label_1c8198;
            case 0x1C819Cu: goto label_1c819c;
            case 0x1C81A0u: goto label_1c81a0;
            case 0x1C81A4u: goto label_1c81a4;
            case 0x1C81A8u: goto label_1c81a8;
            case 0x1C81ACu: goto label_1c81ac;
            case 0x1C81B0u: goto label_1c81b0;
            case 0x1C81B4u: goto label_1c81b4;
            case 0x1C81B8u: goto label_1c81b8;
            case 0x1C81BCu: goto label_1c81bc;
            case 0x1C81C0u: goto label_1c81c0;
            case 0x1C81C4u: goto label_1c81c4;
            case 0x1C81C8u: goto label_1c81c8;
            case 0x1C81CCu: goto label_1c81cc;
            case 0x1C81D0u: goto label_1c81d0;
            case 0x1C81D4u: goto label_1c81d4;
            case 0x1C81D8u: goto label_1c81d8;
            case 0x1C81DCu: goto label_1c81dc;
            case 0x1C81E0u: goto label_1c81e0;
            case 0x1C81E4u: goto label_1c81e4;
            case 0x1C81E8u: goto label_1c81e8;
            case 0x1C81ECu: goto label_1c81ec;
            case 0x1C81F0u: goto label_1c81f0;
            case 0x1C81F4u: goto label_1c81f4;
            case 0x1C81F8u: goto label_1c81f8;
            case 0x1C81FCu: goto label_1c81fc;
            case 0x1C8200u: goto label_1c8200;
            case 0x1C8204u: goto label_1c8204;
            case 0x1C8208u: goto label_1c8208;
            case 0x1C820Cu: goto label_1c820c;
            case 0x1C8210u: goto label_1c8210;
            case 0x1C8214u: goto label_1c8214;
            case 0x1C8218u: goto label_1c8218;
            case 0x1C821Cu: goto label_1c821c;
            case 0x1C8220u: goto label_1c8220;
            case 0x1C8224u: goto label_1c8224;
            case 0x1C8228u: goto label_1c8228;
            case 0x1C822Cu: goto label_1c822c;
            case 0x1C8230u: goto label_1c8230;
            case 0x1C8234u: goto label_1c8234;
            case 0x1C8238u: goto label_1c8238;
            case 0x1C823Cu: goto label_1c823c;
            case 0x1C8240u: goto label_1c8240;
            case 0x1C8244u: goto label_1c8244;
            case 0x1C8248u: goto label_1c8248;
            case 0x1C824Cu: goto label_1c824c;
            case 0x1C8250u: goto label_1c8250;
            case 0x1C8254u: goto label_1c8254;
            case 0x1C8258u: goto label_1c8258;
            case 0x1C825Cu: goto label_1c825c;
            case 0x1C8260u: goto label_1c8260;
            case 0x1C8264u: goto label_1c8264;
            case 0x1C8268u: goto label_1c8268;
            case 0x1C826Cu: goto label_1c826c;
            case 0x1C8270u: goto label_1c8270;
            case 0x1C8274u: goto label_1c8274;
            case 0x1C8278u: goto label_1c8278;
            case 0x1C827Cu: goto label_1c827c;
            case 0x1C8280u: goto label_1c8280;
            case 0x1C8284u: goto label_1c8284;
            case 0x1C8288u: goto label_1c8288;
            case 0x1C828Cu: goto label_1c828c;
            case 0x1C8290u: goto label_1c8290;
            case 0x1C8294u: goto label_1c8294;
            case 0x1C8298u: goto label_1c8298;
            case 0x1C829Cu: goto label_1c829c;
            case 0x1C82A0u: goto label_1c82a0;
            case 0x1C82A4u: goto label_1c82a4;
            case 0x1C82A8u: goto label_1c82a8;
            case 0x1C82ACu: goto label_1c82ac;
            case 0x1C82B0u: goto label_1c82b0;
            case 0x1C82B4u: goto label_1c82b4;
            case 0x1C82B8u: goto label_1c82b8;
            case 0x1C82BCu: goto label_1c82bc;
            case 0x1C82C0u: goto label_1c82c0;
            case 0x1C82C4u: goto label_1c82c4;
            case 0x1C82C8u: goto label_1c82c8;
            case 0x1C82CCu: goto label_1c82cc;
            case 0x1C82D0u: goto label_1c82d0;
            case 0x1C82D4u: goto label_1c82d4;
            case 0x1C82D8u: goto label_1c82d8;
            case 0x1C82DCu: goto label_1c82dc;
            case 0x1C82E0u: goto label_1c82e0;
            case 0x1C82E4u: goto label_1c82e4;
            case 0x1C82E8u: goto label_1c82e8;
            case 0x1C82ECu: goto label_1c82ec;
            case 0x1C82F0u: goto label_1c82f0;
            case 0x1C82F4u: goto label_1c82f4;
            case 0x1C82F8u: goto label_1c82f8;
            case 0x1C82FCu: goto label_1c82fc;
            case 0x1C8300u: goto label_1c8300;
            case 0x1C8304u: goto label_1c8304;
            case 0x1C8308u: goto label_1c8308;
            case 0x1C830Cu: goto label_1c830c;
            case 0x1C8310u: goto label_1c8310;
            case 0x1C8314u: goto label_1c8314;
            case 0x1C8318u: goto label_1c8318;
            case 0x1C831Cu: goto label_1c831c;
            case 0x1C8320u: goto label_1c8320;
            case 0x1C8324u: goto label_1c8324;
            case 0x1C8328u: goto label_1c8328;
            case 0x1C832Cu: goto label_1c832c;
            case 0x1C8330u: goto label_1c8330;
            case 0x1C8334u: goto label_1c8334;
            case 0x1C8338u: goto label_1c8338;
            case 0x1C833Cu: goto label_1c833c;
            case 0x1C8340u: goto label_1c8340;
            case 0x1C8344u: goto label_1c8344;
            case 0x1C8348u: goto label_1c8348;
            case 0x1C834Cu: goto label_1c834c;
            case 0x1C8350u: goto label_1c8350;
            case 0x1C8354u: goto label_1c8354;
            case 0x1C8358u: goto label_1c8358;
            case 0x1C835Cu: goto label_1c835c;
            case 0x1C8360u: goto label_1c8360;
            case 0x1C8364u: goto label_1c8364;
            case 0x1C8368u: goto label_1c8368;
            case 0x1C836Cu: goto label_1c836c;
            case 0x1C8370u: goto label_1c8370;
            case 0x1C8374u: goto label_1c8374;
            case 0x1C8378u: goto label_1c8378;
            case 0x1C837Cu: goto label_1c837c;
            case 0x1C8380u: goto label_1c8380;
            case 0x1C8384u: goto label_1c8384;
            case 0x1C8388u: goto label_1c8388;
            case 0x1C838Cu: goto label_1c838c;
            case 0x1C8390u: goto label_1c8390;
            case 0x1C8394u: goto label_1c8394;
            case 0x1C8398u: goto label_1c8398;
            case 0x1C839Cu: goto label_1c839c;
            case 0x1C83A0u: goto label_1c83a0;
            case 0x1C83A4u: goto label_1c83a4;
            case 0x1C83A8u: goto label_1c83a8;
            case 0x1C83ACu: goto label_1c83ac;
            case 0x1C83B0u: goto label_1c83b0;
            case 0x1C83B4u: goto label_1c83b4;
            case 0x1C83B8u: goto label_1c83b8;
            case 0x1C83BCu: goto label_1c83bc;
            case 0x1C83C0u: goto label_1c83c0;
            case 0x1C83C4u: goto label_1c83c4;
            case 0x1C83C8u: goto label_1c83c8;
            case 0x1C83CCu: goto label_1c83cc;
            case 0x1C83D0u: goto label_1c83d0;
            case 0x1C83D4u: goto label_1c83d4;
            case 0x1C83D8u: goto label_1c83d8;
            case 0x1C83DCu: goto label_1c83dc;
            case 0x1C83E0u: goto label_1c83e0;
            case 0x1C83E4u: goto label_1c83e4;
            case 0x1C83E8u: goto label_1c83e8;
            case 0x1C83ECu: goto label_1c83ec;
            case 0x1C83F0u: goto label_1c83f0;
            case 0x1C83F4u: goto label_1c83f4;
            case 0x1C83F8u: goto label_1c83f8;
            case 0x1C83FCu: goto label_1c83fc;
            case 0x1C8400u: goto label_1c8400;
            case 0x1C8404u: goto label_1c8404;
            case 0x1C8408u: goto label_1c8408;
            case 0x1C840Cu: goto label_1c840c;
            case 0x1C8410u: goto label_1c8410;
            case 0x1C8414u: goto label_1c8414;
            case 0x1C8418u: goto label_1c8418;
            case 0x1C841Cu: goto label_1c841c;
            case 0x1C8420u: goto label_1c8420;
            case 0x1C8424u: goto label_1c8424;
            case 0x1C8428u: goto label_1c8428;
            case 0x1C842Cu: goto label_1c842c;
            case 0x1C8430u: goto label_1c8430;
            case 0x1C8434u: goto label_1c8434;
            case 0x1C8438u: goto label_1c8438;
            case 0x1C843Cu: goto label_1c843c;
            case 0x1C8440u: goto label_1c8440;
            case 0x1C8444u: goto label_1c8444;
            case 0x1C8448u: goto label_1c8448;
            case 0x1C844Cu: goto label_1c844c;
            case 0x1C8450u: goto label_1c8450;
            case 0x1C8454u: goto label_1c8454;
            case 0x1C8458u: goto label_1c8458;
            case 0x1C845Cu: goto label_1c845c;
            case 0x1C8460u: goto label_1c8460;
            case 0x1C8464u: goto label_1c8464;
            case 0x1C8468u: goto label_1c8468;
            case 0x1C846Cu: goto label_1c846c;
            case 0x1C8470u: goto label_1c8470;
            case 0x1C8474u: goto label_1c8474;
            case 0x1C8478u: goto label_1c8478;
            case 0x1C847Cu: goto label_1c847c;
            case 0x1C8480u: goto label_1c8480;
            case 0x1C8484u: goto label_1c8484;
            case 0x1C8488u: goto label_1c8488;
            case 0x1C848Cu: goto label_1c848c;
            case 0x1C8490u: goto label_1c8490;
            case 0x1C8494u: goto label_1c8494;
            case 0x1C8498u: goto label_1c8498;
            case 0x1C849Cu: goto label_1c849c;
            case 0x1C84A0u: goto label_1c84a0;
            case 0x1C84A4u: goto label_1c84a4;
            case 0x1C84A8u: goto label_1c84a8;
            case 0x1C84ACu: goto label_1c84ac;
            case 0x1C84B0u: goto label_1c84b0;
            case 0x1C84B4u: goto label_1c84b4;
            case 0x1C84B8u: goto label_1c84b8;
            case 0x1C84BCu: goto label_1c84bc;
            case 0x1C84C0u: goto label_1c84c0;
            case 0x1C84C4u: goto label_1c84c4;
            case 0x1C84C8u: goto label_1c84c8;
            case 0x1C84CCu: goto label_1c84cc;
            case 0x1C84D0u: goto label_1c84d0;
            case 0x1C84D4u: goto label_1c84d4;
            case 0x1C84D8u: goto label_1c84d8;
            case 0x1C84DCu: goto label_1c84dc;
            case 0x1C84E0u: goto label_1c84e0;
            case 0x1C84E4u: goto label_1c84e4;
            case 0x1C84E8u: goto label_1c84e8;
            case 0x1C84ECu: goto label_1c84ec;
            case 0x1C84F0u: goto label_1c84f0;
            case 0x1C84F4u: goto label_1c84f4;
            case 0x1C84F8u: goto label_1c84f8;
            case 0x1C84FCu: goto label_1c84fc;
            case 0x1C8500u: goto label_1c8500;
            case 0x1C8504u: goto label_1c8504;
            case 0x1C8508u: goto label_1c8508;
            case 0x1C850Cu: goto label_1c850c;
            case 0x1C8510u: goto label_1c8510;
            case 0x1C8514u: goto label_1c8514;
            case 0x1C8518u: goto label_1c8518;
            case 0x1C851Cu: goto label_1c851c;
            case 0x1C8520u: goto label_1c8520;
            case 0x1C8524u: goto label_1c8524;
            case 0x1C8528u: goto label_1c8528;
            case 0x1C852Cu: goto label_1c852c;
            case 0x1C8530u: goto label_1c8530;
            case 0x1C8534u: goto label_1c8534;
            case 0x1C8538u: goto label_1c8538;
            case 0x1C853Cu: goto label_1c853c;
            case 0x1C8540u: goto label_1c8540;
            case 0x1C8544u: goto label_1c8544;
            case 0x1C8548u: goto label_1c8548;
            case 0x1C854Cu: goto label_1c854c;
            case 0x1C8550u: goto label_1c8550;
            case 0x1C8554u: goto label_1c8554;
            case 0x1C8558u: goto label_1c8558;
            case 0x1C855Cu: goto label_1c855c;
            case 0x1C8560u: goto label_1c8560;
            case 0x1C8564u: goto label_1c8564;
            case 0x1C8568u: goto label_1c8568;
            case 0x1C856Cu: goto label_1c856c;
            case 0x1C8570u: goto label_1c8570;
            case 0x1C8574u: goto label_1c8574;
            case 0x1C8578u: goto label_1c8578;
            case 0x1C857Cu: goto label_1c857c;
            case 0x1C8580u: goto label_1c8580;
            case 0x1C8584u: goto label_1c8584;
            case 0x1C8588u: goto label_1c8588;
            case 0x1C858Cu: goto label_1c858c;
            case 0x1C8590u: goto label_1c8590;
            case 0x1C8594u: goto label_1c8594;
            case 0x1C8598u: goto label_1c8598;
            case 0x1C859Cu: goto label_1c859c;
            case 0x1C85A0u: goto label_1c85a0;
            case 0x1C85A4u: goto label_1c85a4;
            case 0x1C85A8u: goto label_1c85a8;
            case 0x1C85ACu: goto label_1c85ac;
            case 0x1C85B0u: goto label_1c85b0;
            case 0x1C85B4u: goto label_1c85b4;
            case 0x1C85B8u: goto label_1c85b8;
            case 0x1C85BCu: goto label_1c85bc;
            case 0x1C85C0u: goto label_1c85c0;
            case 0x1C85C4u: goto label_1c85c4;
            case 0x1C85C8u: goto label_1c85c8;
            case 0x1C85CCu: goto label_1c85cc;
            case 0x1C85D0u: goto label_1c85d0;
            case 0x1C85D4u: goto label_1c85d4;
            case 0x1C85D8u: goto label_1c85d8;
            case 0x1C85DCu: goto label_1c85dc;
            case 0x1C85E0u: goto label_1c85e0;
            case 0x1C85E4u: goto label_1c85e4;
            case 0x1C85E8u: goto label_1c85e8;
            case 0x1C85ECu: goto label_1c85ec;
            case 0x1C85F0u: goto label_1c85f0;
            case 0x1C85F4u: goto label_1c85f4;
            case 0x1C85F8u: goto label_1c85f8;
            case 0x1C85FCu: goto label_1c85fc;
            case 0x1C8600u: goto label_1c8600;
            case 0x1C8604u: goto label_1c8604;
            case 0x1C8608u: goto label_1c8608;
            case 0x1C860Cu: goto label_1c860c;
            case 0x1C8610u: goto label_1c8610;
            case 0x1C8614u: goto label_1c8614;
            case 0x1C8618u: goto label_1c8618;
            case 0x1C861Cu: goto label_1c861c;
            case 0x1C8620u: goto label_1c8620;
            case 0x1C8624u: goto label_1c8624;
            case 0x1C8628u: goto label_1c8628;
            case 0x1C862Cu: goto label_1c862c;
            case 0x1C8630u: goto label_1c8630;
            case 0x1C8634u: goto label_1c8634;
            case 0x1C8638u: goto label_1c8638;
            case 0x1C863Cu: goto label_1c863c;
            case 0x1C8640u: goto label_1c8640;
            case 0x1C8644u: goto label_1c8644;
            case 0x1C8648u: goto label_1c8648;
            case 0x1C864Cu: goto label_1c864c;
            case 0x1C8650u: goto label_1c8650;
            case 0x1C8654u: goto label_1c8654;
            case 0x1C8658u: goto label_1c8658;
            case 0x1C865Cu: goto label_1c865c;
            case 0x1C8660u: goto label_1c8660;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C85BCu; }
            if (ctx->pc != 0x1C85BCu) { return; }
        }
    }
    ctx->pc = 0x1C85BCu;
label_1c85bc:
    // 0x1c85bc: 0x10000022  b           . + 4 + (0x22 << 2)
label_1c85c0:
    if (ctx->pc == 0x1C85C0u) {
        ctx->pc = 0x1C85C4u;
        goto label_1c85c4;
    }
    ctx->pc = 0x1C85BCu;
    {
        const bool branch_taken_0x1c85bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c85bc) {
            ctx->pc = 0x1C8648u;
            goto label_1c8648;
        }
    }
    ctx->pc = 0x1C85C4u;
label_1c85c4:
    // 0x1c85c4: 0x0  nop
    ctx->pc = 0x1c85c4u;
    // NOP
label_1c85c8:
    // 0x1c85c8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1c85c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1c85cc:
    // 0x1c85cc: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c85ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
label_1c85d0:
    // 0x1c85d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c85d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c85d4:
    // 0x1c85d4: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1c85d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1c85d8:
    // 0x1c85d8: 0x24c67d40  addiu       $a2, $a2, 0x7D40
    ctx->pc = 0x1c85d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32064));
label_1c85dc:
    // 0x1c85dc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c85dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c85e0:
    // 0x1c85e0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c85e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c85e4:
    // 0x1c85e4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1c85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1c85e8:
    // 0x1c85e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c85e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c85ec:
    // 0x1c85ec: 0x0  nop
    ctx->pc = 0x1c85ecu;
    // NOP
label_1c85f0:
    // 0x1c85f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c85f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c85f4:
    // 0x1c85f4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1c85f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1c85f8:
    // 0x1c85f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1c85fc:
    // 0x1c85fc: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1c85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1c8600:
    // 0x1c8600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8604:
    // 0x1c8604: 0x0  nop
    ctx->pc = 0x1c8604u;
    // NOP
label_1c8608:
    // 0x1c8608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c8608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c860c:
    // 0x1c860c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c860cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1c8610:
    // 0x1c8610: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1c8610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1c8614:
    // 0x1c8614: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1c8614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1c8618:
    // 0x1c8618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c861c:
    // 0x1c861c: 0x0  nop
    ctx->pc = 0x1c861cu;
    // NOP
label_1c8620:
    // 0x1c8620: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c8620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c8624:
    // 0x1c8624: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1c8624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1c8628:
    // 0x1c8628: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c8628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1c862c:
    // 0x1c862c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1c862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1c8630:
    // 0x1c8630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8634:
    // 0x1c8634: 0x0  nop
    ctx->pc = 0x1c8634u;
    // NOP
label_1c8638:
    // 0x1c8638: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c8638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c863c:
    // 0x1c863c: 0xc053ca4  jal         func_14F290
label_1c8640:
    if (ctx->pc == 0x1C8640u) {
        ctx->pc = 0x1C8640u;
            // 0x1c8640: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->pc = 0x1C8644u;
        goto label_1c8644;
    }
    ctx->pc = 0x1C863Cu;
    SET_GPR_U32(ctx, 31, 0x1C8644u);
    ctx->pc = 0x1C8640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C863Cu;
            // 0x1c8640: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8644u; }
        if (ctx->pc != 0x1C8644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8644u; }
        if (ctx->pc != 0x1C8644u) { return; }
    }
    ctx->pc = 0x1C8644u;
label_1c8644:
    // 0x1c8644: 0x0  nop
    ctx->pc = 0x1c8644u;
    // NOP
label_1c8648:
    // 0x1c8648: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c8648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c864c:
    // 0x1c864c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c864cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c8650:
    // 0x1c8650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c8650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8654:
    // 0x1c8654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8658:
    // 0x1c8658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c865c:
    // 0x1c865c: 0x3e00008  jr          $ra
label_1c8660:
    if (ctx->pc == 0x1C8660u) {
        ctx->pc = 0x1C8660u;
            // 0x1c8660: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1C8664u;
        goto label_fallthrough_0x1c865c;
    }
    ctx->pc = 0x1C865Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C865Cu;
            // 0x1c8660: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7F60u: goto label_1c7f60;
            case 0x1C7F64u: goto label_1c7f64;
            case 0x1C7F68u: goto label_1c7f68;
            case 0x1C7F6Cu: goto label_1c7f6c;
            case 0x1C7F70u: goto label_1c7f70;
            case 0x1C7F74u: goto label_1c7f74;
            case 0x1C7F78u: goto label_1c7f78;
            case 0x1C7F7Cu: goto label_1c7f7c;
            case 0x1C7F80u: goto label_1c7f80;
            case 0x1C7F84u: goto label_1c7f84;
            case 0x1C7F88u: goto label_1c7f88;
            case 0x1C7F8Cu: goto label_1c7f8c;
            case 0x1C7F90u: goto label_1c7f90;
            case 0x1C7F94u: goto label_1c7f94;
            case 0x1C7F98u: goto label_1c7f98;
            case 0x1C7F9Cu: goto label_1c7f9c;
            case 0x1C7FA0u: goto label_1c7fa0;
            case 0x1C7FA4u: goto label_1c7fa4;
            case 0x1C7FA8u: goto label_1c7fa8;
            case 0x1C7FACu: goto label_1c7fac;
            case 0x1C7FB0u: goto label_1c7fb0;
            case 0x1C7FB4u: goto label_1c7fb4;
            case 0x1C7FB8u: goto label_1c7fb8;
            case 0x1C7FBCu: goto label_1c7fbc;
            case 0x1C7FC0u: goto label_1c7fc0;
            case 0x1C7FC4u: goto label_1c7fc4;
            case 0x1C7FC8u: goto label_1c7fc8;
            case 0x1C7FCCu: goto label_1c7fcc;
            case 0x1C7FD0u: goto label_1c7fd0;
            case 0x1C7FD4u: goto label_1c7fd4;
            case 0x1C7FD8u: goto label_1c7fd8;
            case 0x1C7FDCu: goto label_1c7fdc;
            case 0x1C7FE0u: goto label_1c7fe0;
            case 0x1C7FE4u: goto label_1c7fe4;
            case 0x1C7FE8u: goto label_1c7fe8;
            case 0x1C7FECu: goto label_1c7fec;
            case 0x1C7FF0u: goto label_1c7ff0;
            case 0x1C7FF4u: goto label_1c7ff4;
            case 0x1C7FF8u: goto label_1c7ff8;
            case 0x1C7FFCu: goto label_1c7ffc;
            case 0x1C8000u: goto label_1c8000;
            case 0x1C8004u: goto label_1c8004;
            case 0x1C8008u: goto label_1c8008;
            case 0x1C800Cu: goto label_1c800c;
            case 0x1C8010u: goto label_1c8010;
            case 0x1C8014u: goto label_1c8014;
            case 0x1C8018u: goto label_1c8018;
            case 0x1C801Cu: goto label_1c801c;
            case 0x1C8020u: goto label_1c8020;
            case 0x1C8024u: goto label_1c8024;
            case 0x1C8028u: goto label_1c8028;
            case 0x1C802Cu: goto label_1c802c;
            case 0x1C8030u: goto label_1c8030;
            case 0x1C8034u: goto label_1c8034;
            case 0x1C8038u: goto label_1c8038;
            case 0x1C803Cu: goto label_1c803c;
            case 0x1C8040u: goto label_1c8040;
            case 0x1C8044u: goto label_1c8044;
            case 0x1C8048u: goto label_1c8048;
            case 0x1C804Cu: goto label_1c804c;
            case 0x1C8050u: goto label_1c8050;
            case 0x1C8054u: goto label_1c8054;
            case 0x1C8058u: goto label_1c8058;
            case 0x1C805Cu: goto label_1c805c;
            case 0x1C8060u: goto label_1c8060;
            case 0x1C8064u: goto label_1c8064;
            case 0x1C8068u: goto label_1c8068;
            case 0x1C806Cu: goto label_1c806c;
            case 0x1C8070u: goto label_1c8070;
            case 0x1C8074u: goto label_1c8074;
            case 0x1C8078u: goto label_1c8078;
            case 0x1C807Cu: goto label_1c807c;
            case 0x1C8080u: goto label_1c8080;
            case 0x1C8084u: goto label_1c8084;
            case 0x1C8088u: goto label_1c8088;
            case 0x1C808Cu: goto label_1c808c;
            case 0x1C8090u: goto label_1c8090;
            case 0x1C8094u: goto label_1c8094;
            case 0x1C8098u: goto label_1c8098;
            case 0x1C809Cu: goto label_1c809c;
            case 0x1C80A0u: goto label_1c80a0;
            case 0x1C80A4u: goto label_1c80a4;
            case 0x1C80A8u: goto label_1c80a8;
            case 0x1C80ACu: goto label_1c80ac;
            case 0x1C80B0u: goto label_1c80b0;
            case 0x1C80B4u: goto label_1c80b4;
            case 0x1C80B8u: goto label_1c80b8;
            case 0x1C80BCu: goto label_1c80bc;
            case 0x1C80C0u: goto label_1c80c0;
            case 0x1C80C4u: goto label_1c80c4;
            case 0x1C80C8u: goto label_1c80c8;
            case 0x1C80CCu: goto label_1c80cc;
            case 0x1C80D0u: goto label_1c80d0;
            case 0x1C80D4u: goto label_1c80d4;
            case 0x1C80D8u: goto label_1c80d8;
            case 0x1C80DCu: goto label_1c80dc;
            case 0x1C80E0u: goto label_1c80e0;
            case 0x1C80E4u: goto label_1c80e4;
            case 0x1C80E8u: goto label_1c80e8;
            case 0x1C80ECu: goto label_1c80ec;
            case 0x1C80F0u: goto label_1c80f0;
            case 0x1C80F4u: goto label_1c80f4;
            case 0x1C80F8u: goto label_1c80f8;
            case 0x1C80FCu: goto label_1c80fc;
            case 0x1C8100u: goto label_1c8100;
            case 0x1C8104u: goto label_1c8104;
            case 0x1C8108u: goto label_1c8108;
            case 0x1C810Cu: goto label_1c810c;
            case 0x1C8110u: goto label_1c8110;
            case 0x1C8114u: goto label_1c8114;
            case 0x1C8118u: goto label_1c8118;
            case 0x1C811Cu: goto label_1c811c;
            case 0x1C8120u: goto label_1c8120;
            case 0x1C8124u: goto label_1c8124;
            case 0x1C8128u: goto label_1c8128;
            case 0x1C812Cu: goto label_1c812c;
            case 0x1C8130u: goto label_1c8130;
            case 0x1C8134u: goto label_1c8134;
            case 0x1C8138u: goto label_1c8138;
            case 0x1C813Cu: goto label_1c813c;
            case 0x1C8140u: goto label_1c8140;
            case 0x1C8144u: goto label_1c8144;
            case 0x1C8148u: goto label_1c8148;
            case 0x1C814Cu: goto label_1c814c;
            case 0x1C8150u: goto label_1c8150;
            case 0x1C8154u: goto label_1c8154;
            case 0x1C8158u: goto label_1c8158;
            case 0x1C815Cu: goto label_1c815c;
            case 0x1C8160u: goto label_1c8160;
            case 0x1C8164u: goto label_1c8164;
            case 0x1C8168u: goto label_1c8168;
            case 0x1C816Cu: goto label_1c816c;
            case 0x1C8170u: goto label_1c8170;
            case 0x1C8174u: goto label_1c8174;
            case 0x1C8178u: goto label_1c8178;
            case 0x1C817Cu: goto label_1c817c;
            case 0x1C8180u: goto label_1c8180;
            case 0x1C8184u: goto label_1c8184;
            case 0x1C8188u: goto label_1c8188;
            case 0x1C818Cu: goto label_1c818c;
            case 0x1C8190u: goto label_1c8190;
            case 0x1C8194u: goto label_1c8194;
            case 0x1C8198u: goto label_1c8198;
            case 0x1C819Cu: goto label_1c819c;
            case 0x1C81A0u: goto label_1c81a0;
            case 0x1C81A4u: goto label_1c81a4;
            case 0x1C81A8u: goto label_1c81a8;
            case 0x1C81ACu: goto label_1c81ac;
            case 0x1C81B0u: goto label_1c81b0;
            case 0x1C81B4u: goto label_1c81b4;
            case 0x1C81B8u: goto label_1c81b8;
            case 0x1C81BCu: goto label_1c81bc;
            case 0x1C81C0u: goto label_1c81c0;
            case 0x1C81C4u: goto label_1c81c4;
            case 0x1C81C8u: goto label_1c81c8;
            case 0x1C81CCu: goto label_1c81cc;
            case 0x1C81D0u: goto label_1c81d0;
            case 0x1C81D4u: goto label_1c81d4;
            case 0x1C81D8u: goto label_1c81d8;
            case 0x1C81DCu: goto label_1c81dc;
            case 0x1C81E0u: goto label_1c81e0;
            case 0x1C81E4u: goto label_1c81e4;
            case 0x1C81E8u: goto label_1c81e8;
            case 0x1C81ECu: goto label_1c81ec;
            case 0x1C81F0u: goto label_1c81f0;
            case 0x1C81F4u: goto label_1c81f4;
            case 0x1C81F8u: goto label_1c81f8;
            case 0x1C81FCu: goto label_1c81fc;
            case 0x1C8200u: goto label_1c8200;
            case 0x1C8204u: goto label_1c8204;
            case 0x1C8208u: goto label_1c8208;
            case 0x1C820Cu: goto label_1c820c;
            case 0x1C8210u: goto label_1c8210;
            case 0x1C8214u: goto label_1c8214;
            case 0x1C8218u: goto label_1c8218;
            case 0x1C821Cu: goto label_1c821c;
            case 0x1C8220u: goto label_1c8220;
            case 0x1C8224u: goto label_1c8224;
            case 0x1C8228u: goto label_1c8228;
            case 0x1C822Cu: goto label_1c822c;
            case 0x1C8230u: goto label_1c8230;
            case 0x1C8234u: goto label_1c8234;
            case 0x1C8238u: goto label_1c8238;
            case 0x1C823Cu: goto label_1c823c;
            case 0x1C8240u: goto label_1c8240;
            case 0x1C8244u: goto label_1c8244;
            case 0x1C8248u: goto label_1c8248;
            case 0x1C824Cu: goto label_1c824c;
            case 0x1C8250u: goto label_1c8250;
            case 0x1C8254u: goto label_1c8254;
            case 0x1C8258u: goto label_1c8258;
            case 0x1C825Cu: goto label_1c825c;
            case 0x1C8260u: goto label_1c8260;
            case 0x1C8264u: goto label_1c8264;
            case 0x1C8268u: goto label_1c8268;
            case 0x1C826Cu: goto label_1c826c;
            case 0x1C8270u: goto label_1c8270;
            case 0x1C8274u: goto label_1c8274;
            case 0x1C8278u: goto label_1c8278;
            case 0x1C827Cu: goto label_1c827c;
            case 0x1C8280u: goto label_1c8280;
            case 0x1C8284u: goto label_1c8284;
            case 0x1C8288u: goto label_1c8288;
            case 0x1C828Cu: goto label_1c828c;
            case 0x1C8290u: goto label_1c8290;
            case 0x1C8294u: goto label_1c8294;
            case 0x1C8298u: goto label_1c8298;
            case 0x1C829Cu: goto label_1c829c;
            case 0x1C82A0u: goto label_1c82a0;
            case 0x1C82A4u: goto label_1c82a4;
            case 0x1C82A8u: goto label_1c82a8;
            case 0x1C82ACu: goto label_1c82ac;
            case 0x1C82B0u: goto label_1c82b0;
            case 0x1C82B4u: goto label_1c82b4;
            case 0x1C82B8u: goto label_1c82b8;
            case 0x1C82BCu: goto label_1c82bc;
            case 0x1C82C0u: goto label_1c82c0;
            case 0x1C82C4u: goto label_1c82c4;
            case 0x1C82C8u: goto label_1c82c8;
            case 0x1C82CCu: goto label_1c82cc;
            case 0x1C82D0u: goto label_1c82d0;
            case 0x1C82D4u: goto label_1c82d4;
            case 0x1C82D8u: goto label_1c82d8;
            case 0x1C82DCu: goto label_1c82dc;
            case 0x1C82E0u: goto label_1c82e0;
            case 0x1C82E4u: goto label_1c82e4;
            case 0x1C82E8u: goto label_1c82e8;
            case 0x1C82ECu: goto label_1c82ec;
            case 0x1C82F0u: goto label_1c82f0;
            case 0x1C82F4u: goto label_1c82f4;
            case 0x1C82F8u: goto label_1c82f8;
            case 0x1C82FCu: goto label_1c82fc;
            case 0x1C8300u: goto label_1c8300;
            case 0x1C8304u: goto label_1c8304;
            case 0x1C8308u: goto label_1c8308;
            case 0x1C830Cu: goto label_1c830c;
            case 0x1C8310u: goto label_1c8310;
            case 0x1C8314u: goto label_1c8314;
            case 0x1C8318u: goto label_1c8318;
            case 0x1C831Cu: goto label_1c831c;
            case 0x1C8320u: goto label_1c8320;
            case 0x1C8324u: goto label_1c8324;
            case 0x1C8328u: goto label_1c8328;
            case 0x1C832Cu: goto label_1c832c;
            case 0x1C8330u: goto label_1c8330;
            case 0x1C8334u: goto label_1c8334;
            case 0x1C8338u: goto label_1c8338;
            case 0x1C833Cu: goto label_1c833c;
            case 0x1C8340u: goto label_1c8340;
            case 0x1C8344u: goto label_1c8344;
            case 0x1C8348u: goto label_1c8348;
            case 0x1C834Cu: goto label_1c834c;
            case 0x1C8350u: goto label_1c8350;
            case 0x1C8354u: goto label_1c8354;
            case 0x1C8358u: goto label_1c8358;
            case 0x1C835Cu: goto label_1c835c;
            case 0x1C8360u: goto label_1c8360;
            case 0x1C8364u: goto label_1c8364;
            case 0x1C8368u: goto label_1c8368;
            case 0x1C836Cu: goto label_1c836c;
            case 0x1C8370u: goto label_1c8370;
            case 0x1C8374u: goto label_1c8374;
            case 0x1C8378u: goto label_1c8378;
            case 0x1C837Cu: goto label_1c837c;
            case 0x1C8380u: goto label_1c8380;
            case 0x1C8384u: goto label_1c8384;
            case 0x1C8388u: goto label_1c8388;
            case 0x1C838Cu: goto label_1c838c;
            case 0x1C8390u: goto label_1c8390;
            case 0x1C8394u: goto label_1c8394;
            case 0x1C8398u: goto label_1c8398;
            case 0x1C839Cu: goto label_1c839c;
            case 0x1C83A0u: goto label_1c83a0;
            case 0x1C83A4u: goto label_1c83a4;
            case 0x1C83A8u: goto label_1c83a8;
            case 0x1C83ACu: goto label_1c83ac;
            case 0x1C83B0u: goto label_1c83b0;
            case 0x1C83B4u: goto label_1c83b4;
            case 0x1C83B8u: goto label_1c83b8;
            case 0x1C83BCu: goto label_1c83bc;
            case 0x1C83C0u: goto label_1c83c0;
            case 0x1C83C4u: goto label_1c83c4;
            case 0x1C83C8u: goto label_1c83c8;
            case 0x1C83CCu: goto label_1c83cc;
            case 0x1C83D0u: goto label_1c83d0;
            case 0x1C83D4u: goto label_1c83d4;
            case 0x1C83D8u: goto label_1c83d8;
            case 0x1C83DCu: goto label_1c83dc;
            case 0x1C83E0u: goto label_1c83e0;
            case 0x1C83E4u: goto label_1c83e4;
            case 0x1C83E8u: goto label_1c83e8;
            case 0x1C83ECu: goto label_1c83ec;
            case 0x1C83F0u: goto label_1c83f0;
            case 0x1C83F4u: goto label_1c83f4;
            case 0x1C83F8u: goto label_1c83f8;
            case 0x1C83FCu: goto label_1c83fc;
            case 0x1C8400u: goto label_1c8400;
            case 0x1C8404u: goto label_1c8404;
            case 0x1C8408u: goto label_1c8408;
            case 0x1C840Cu: goto label_1c840c;
            case 0x1C8410u: goto label_1c8410;
            case 0x1C8414u: goto label_1c8414;
            case 0x1C8418u: goto label_1c8418;
            case 0x1C841Cu: goto label_1c841c;
            case 0x1C8420u: goto label_1c8420;
            case 0x1C8424u: goto label_1c8424;
            case 0x1C8428u: goto label_1c8428;
            case 0x1C842Cu: goto label_1c842c;
            case 0x1C8430u: goto label_1c8430;
            case 0x1C8434u: goto label_1c8434;
            case 0x1C8438u: goto label_1c8438;
            case 0x1C843Cu: goto label_1c843c;
            case 0x1C8440u: goto label_1c8440;
            case 0x1C8444u: goto label_1c8444;
            case 0x1C8448u: goto label_1c8448;
            case 0x1C844Cu: goto label_1c844c;
            case 0x1C8450u: goto label_1c8450;
            case 0x1C8454u: goto label_1c8454;
            case 0x1C8458u: goto label_1c8458;
            case 0x1C845Cu: goto label_1c845c;
            case 0x1C8460u: goto label_1c8460;
            case 0x1C8464u: goto label_1c8464;
            case 0x1C8468u: goto label_1c8468;
            case 0x1C846Cu: goto label_1c846c;
            case 0x1C8470u: goto label_1c8470;
            case 0x1C8474u: goto label_1c8474;
            case 0x1C8478u: goto label_1c8478;
            case 0x1C847Cu: goto label_1c847c;
            case 0x1C8480u: goto label_1c8480;
            case 0x1C8484u: goto label_1c8484;
            case 0x1C8488u: goto label_1c8488;
            case 0x1C848Cu: goto label_1c848c;
            case 0x1C8490u: goto label_1c8490;
            case 0x1C8494u: goto label_1c8494;
            case 0x1C8498u: goto label_1c8498;
            case 0x1C849Cu: goto label_1c849c;
            case 0x1C84A0u: goto label_1c84a0;
            case 0x1C84A4u: goto label_1c84a4;
            case 0x1C84A8u: goto label_1c84a8;
            case 0x1C84ACu: goto label_1c84ac;
            case 0x1C84B0u: goto label_1c84b0;
            case 0x1C84B4u: goto label_1c84b4;
            case 0x1C84B8u: goto label_1c84b8;
            case 0x1C84BCu: goto label_1c84bc;
            case 0x1C84C0u: goto label_1c84c0;
            case 0x1C84C4u: goto label_1c84c4;
            case 0x1C84C8u: goto label_1c84c8;
            case 0x1C84CCu: goto label_1c84cc;
            case 0x1C84D0u: goto label_1c84d0;
            case 0x1C84D4u: goto label_1c84d4;
            case 0x1C84D8u: goto label_1c84d8;
            case 0x1C84DCu: goto label_1c84dc;
            case 0x1C84E0u: goto label_1c84e0;
            case 0x1C84E4u: goto label_1c84e4;
            case 0x1C84E8u: goto label_1c84e8;
            case 0x1C84ECu: goto label_1c84ec;
            case 0x1C84F0u: goto label_1c84f0;
            case 0x1C84F4u: goto label_1c84f4;
            case 0x1C84F8u: goto label_1c84f8;
            case 0x1C84FCu: goto label_1c84fc;
            case 0x1C8500u: goto label_1c8500;
            case 0x1C8504u: goto label_1c8504;
            case 0x1C8508u: goto label_1c8508;
            case 0x1C850Cu: goto label_1c850c;
            case 0x1C8510u: goto label_1c8510;
            case 0x1C8514u: goto label_1c8514;
            case 0x1C8518u: goto label_1c8518;
            case 0x1C851Cu: goto label_1c851c;
            case 0x1C8520u: goto label_1c8520;
            case 0x1C8524u: goto label_1c8524;
            case 0x1C8528u: goto label_1c8528;
            case 0x1C852Cu: goto label_1c852c;
            case 0x1C8530u: goto label_1c8530;
            case 0x1C8534u: goto label_1c8534;
            case 0x1C8538u: goto label_1c8538;
            case 0x1C853Cu: goto label_1c853c;
            case 0x1C8540u: goto label_1c8540;
            case 0x1C8544u: goto label_1c8544;
            case 0x1C8548u: goto label_1c8548;
            case 0x1C854Cu: goto label_1c854c;
            case 0x1C8550u: goto label_1c8550;
            case 0x1C8554u: goto label_1c8554;
            case 0x1C8558u: goto label_1c8558;
            case 0x1C855Cu: goto label_1c855c;
            case 0x1C8560u: goto label_1c8560;
            case 0x1C8564u: goto label_1c8564;
            case 0x1C8568u: goto label_1c8568;
            case 0x1C856Cu: goto label_1c856c;
            case 0x1C8570u: goto label_1c8570;
            case 0x1C8574u: goto label_1c8574;
            case 0x1C8578u: goto label_1c8578;
            case 0x1C857Cu: goto label_1c857c;
            case 0x1C8580u: goto label_1c8580;
            case 0x1C8584u: goto label_1c8584;
            case 0x1C8588u: goto label_1c8588;
            case 0x1C858Cu: goto label_1c858c;
            case 0x1C8590u: goto label_1c8590;
            case 0x1C8594u: goto label_1c8594;
            case 0x1C8598u: goto label_1c8598;
            case 0x1C859Cu: goto label_1c859c;
            case 0x1C85A0u: goto label_1c85a0;
            case 0x1C85A4u: goto label_1c85a4;
            case 0x1C85A8u: goto label_1c85a8;
            case 0x1C85ACu: goto label_1c85ac;
            case 0x1C85B0u: goto label_1c85b0;
            case 0x1C85B4u: goto label_1c85b4;
            case 0x1C85B8u: goto label_1c85b8;
            case 0x1C85BCu: goto label_1c85bc;
            case 0x1C85C0u: goto label_1c85c0;
            case 0x1C85C4u: goto label_1c85c4;
            case 0x1C85C8u: goto label_1c85c8;
            case 0x1C85CCu: goto label_1c85cc;
            case 0x1C85D0u: goto label_1c85d0;
            case 0x1C85D4u: goto label_1c85d4;
            case 0x1C85D8u: goto label_1c85d8;
            case 0x1C85DCu: goto label_1c85dc;
            case 0x1C85E0u: goto label_1c85e0;
            case 0x1C85E4u: goto label_1c85e4;
            case 0x1C85E8u: goto label_1c85e8;
            case 0x1C85ECu: goto label_1c85ec;
            case 0x1C85F0u: goto label_1c85f0;
            case 0x1C85F4u: goto label_1c85f4;
            case 0x1C85F8u: goto label_1c85f8;
            case 0x1C85FCu: goto label_1c85fc;
            case 0x1C8600u: goto label_1c8600;
            case 0x1C8604u: goto label_1c8604;
            case 0x1C8608u: goto label_1c8608;
            case 0x1C860Cu: goto label_1c860c;
            case 0x1C8610u: goto label_1c8610;
            case 0x1C8614u: goto label_1c8614;
            case 0x1C8618u: goto label_1c8618;
            case 0x1C861Cu: goto label_1c861c;
            case 0x1C8620u: goto label_1c8620;
            case 0x1C8624u: goto label_1c8624;
            case 0x1C8628u: goto label_1c8628;
            case 0x1C862Cu: goto label_1c862c;
            case 0x1C8630u: goto label_1c8630;
            case 0x1C8634u: goto label_1c8634;
            case 0x1C8638u: goto label_1c8638;
            case 0x1C863Cu: goto label_1c863c;
            case 0x1C8640u: goto label_1c8640;
            case 0x1C8644u: goto label_1c8644;
            case 0x1C8648u: goto label_1c8648;
            case 0x1C864Cu: goto label_1c864c;
            case 0x1C8650u: goto label_1c8650;
            case 0x1C8654u: goto label_1c8654;
            case 0x1C8658u: goto label_1c8658;
            case 0x1C865Cu: goto label_1c865c;
            case 0x1C8660u: goto label_1c8660;
            default: break;
        }
        return;
    }
label_fallthrough_0x1c865c:
    ctx->pc = 0x1C8664u;
}

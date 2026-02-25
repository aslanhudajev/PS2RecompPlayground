#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En2_01Move
// Address: 0x166f80 - 0x1678d8
void En2_01Move_0x166f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En2_01Move_0x166f80");
#endif

    ctx->pc = 0x166f80u;

label_166f80:
    // 0x166f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x166f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_166f84:
    // 0x166f84: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x166f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_166f88:
    // 0x166f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_166f8c:
    // 0x166f8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x166f8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_166f90:
    // 0x166f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_166f94:
    // 0x166f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166f98:
    // 0x166f98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x166f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166f9c:
    // 0x166f9c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x166f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_166fa0:
    // 0x166fa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166fa4:
    // 0x166fa4: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x166fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_166fa8:
    // 0x166fa8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x166fa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_166fac:
    // 0x166fac: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x166facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_166fb0:
    // 0x166fb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x166fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166fb4:
    // 0x166fb4: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x166fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_166fb8:
    // 0x166fb8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x166fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_166fbc:
    // 0x166fbc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x166fbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_166fc0:
    // 0x166fc0: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x166fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_166fc4:
    // 0x166fc4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x166fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166fc8:
    // 0x166fc8: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x166fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_166fcc:
    // 0x166fcc: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x166fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_166fd0:
    // 0x166fd0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x166fd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_166fd4:
    // 0x166fd4: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x166fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_166fd8:
    // 0x166fd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x166fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166fdc:
    // 0x166fdc: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x166fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_166fe0:
    // 0x166fe0: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x166fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_166fe4:
    // 0x166fe4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x166fe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_166fe8:
    // 0x166fe8: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x166fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_166fec:
    // 0x166fec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x166fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166ff0:
    // 0x166ff0: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x166ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_166ff4:
    // 0x166ff4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x166ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_166ff8:
    // 0x166ff8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x166ff8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_166ffc:
    // 0x166ffc: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x166ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_167000:
    // 0x167000: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x167000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_167004:
    // 0x167004: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x167004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167008:
    // 0x167008: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16700c:
    // 0x16700c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_167010:
    if (ctx->pc == 0x167010u) {
        ctx->pc = 0x167010u;
            // 0x167010: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x167014u;
        goto label_167014;
    }
    ctx->pc = 0x16700Cu;
    {
        const bool branch_taken_0x16700c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16700Cu;
            // 0x167010: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16700c) {
            ctx->pc = 0x167030u;
            goto label_167030;
        }
    }
    ctx->pc = 0x167014u;
label_167014:
    // 0x167014: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x167014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_167018:
    // 0x167018: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x167018u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_16701c:
    // 0x16701c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16701cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167020:
    // 0x167020: 0x0  nop
    ctx->pc = 0x167020u;
    // NOP
label_167024:
    // 0x167024: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x167024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_167028:
    // 0x167028: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x167028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_16702c:
    // 0x16702c: 0x0  nop
    ctx->pc = 0x16702cu;
    // NOP
label_167030:
    // 0x167030: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x167030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_167034:
    // 0x167034: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x167034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_167038:
    // 0x167038: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x167038u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_16703c:
    // 0x16703c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16703cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167040:
    // 0x167040: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x167040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167044:
    // 0x167044: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x167044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167048:
    // 0x167048: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_16704c:
    if (ctx->pc == 0x16704Cu) {
        ctx->pc = 0x16704Cu;
            // 0x16704c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x167050u;
        goto label_167050;
    }
    ctx->pc = 0x167048u;
    {
        const bool branch_taken_0x167048 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16704Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167048u;
            // 0x16704c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167048) {
            ctx->pc = 0x167068u;
            goto label_167068;
        }
    }
    ctx->pc = 0x167050u;
label_167050:
    // 0x167050: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x167050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_167054:
    // 0x167054: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x167054u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_167058:
    // 0x167058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16705c:
    // 0x16705c: 0x0  nop
    ctx->pc = 0x16705cu;
    // NOP
label_167060:
    // 0x167060: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x167060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_167064:
    // 0x167064: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x167064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_167068:
    // 0x167068: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x167068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16706c:
    // 0x16706c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x16706cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_167070:
    // 0x167070: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x167070u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_167074:
    // 0x167074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167078:
    // 0x167078: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x167078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16707c:
    // 0x16707c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16707cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167080:
    // 0x167080: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_167084:
    if (ctx->pc == 0x167084u) {
        ctx->pc = 0x167084u;
            // 0x167084: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x167088u;
        goto label_167088;
    }
    ctx->pc = 0x167080u;
    {
        const bool branch_taken_0x167080 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167080u;
            // 0x167084: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167080) {
            ctx->pc = 0x1670A0u;
            goto label_1670a0;
        }
    }
    ctx->pc = 0x167088u;
label_167088:
    // 0x167088: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x167088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16708c:
    // 0x16708c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16708cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_167090:
    // 0x167090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167094:
    // 0x167094: 0x0  nop
    ctx->pc = 0x167094u;
    // NOP
label_167098:
    // 0x167098: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x167098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16709c:
    // 0x16709c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x16709cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1670a0:
    // 0x1670a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1670a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1670a4:
    // 0x1670a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1670a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1670a8:
    // 0x1670a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1670a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1670ac:
    // 0x1670ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1670acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1670b0:
    // 0x1670b0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1670b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1670b4:
    // 0x1670b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1670b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1670b8:
    // 0x1670b8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1670bc:
    if (ctx->pc == 0x1670BCu) {
        ctx->pc = 0x1670BCu;
            // 0x1670bc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1670C0u;
        goto label_1670c0;
    }
    ctx->pc = 0x1670B8u;
    {
        const bool branch_taken_0x1670b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1670BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1670B8u;
            // 0x1670bc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670b8) {
            ctx->pc = 0x1670D8u;
            goto label_1670d8;
        }
    }
    ctx->pc = 0x1670C0u;
label_1670c0:
    // 0x1670c0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1670c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1670c4:
    // 0x1670c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1670c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1670c8:
    // 0x1670c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1670c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1670cc:
    // 0x1670cc: 0x0  nop
    ctx->pc = 0x1670ccu;
    // NOP
label_1670d0:
    // 0x1670d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1670d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1670d4:
    // 0x1670d4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1670d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1670d8:
    // 0x1670d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1670d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1670dc:
    // 0x1670dc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1670dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1670e0:
    // 0x1670e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1670e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1670e4:
    // 0x1670e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1670e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1670e8:
    // 0x1670e8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1670e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1670ec:
    // 0x1670ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1670ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1670f0:
    // 0x1670f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1670f4:
    if (ctx->pc == 0x1670F4u) {
        ctx->pc = 0x1670F4u;
            // 0x1670f4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1670F8u;
        goto label_1670f8;
    }
    ctx->pc = 0x1670F0u;
    {
        const bool branch_taken_0x1670f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1670F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1670F0u;
            // 0x1670f4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670f0) {
            ctx->pc = 0x167110u;
            goto label_167110;
        }
    }
    ctx->pc = 0x1670F8u;
label_1670f8:
    // 0x1670f8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1670f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1670fc:
    // 0x1670fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1670fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_167100:
    // 0x167100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167104:
    // 0x167104: 0x0  nop
    ctx->pc = 0x167104u;
    // NOP
label_167108:
    // 0x167108: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x167108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16710c:
    // 0x16710c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x16710cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_167110:
    // 0x167110: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x167110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_167114:
    // 0x167114: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x167114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_167118:
    // 0x167118: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x167118u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_16711c:
    // 0x16711c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16711cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167120:
    // 0x167120: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x167120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167124:
    // 0x167124: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x167124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167128:
    // 0x167128: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_16712c:
    if (ctx->pc == 0x16712Cu) {
        ctx->pc = 0x16712Cu;
            // 0x16712c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x167130u;
        goto label_167130;
    }
    ctx->pc = 0x167128u;
    {
        const bool branch_taken_0x167128 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16712Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167128u;
            // 0x16712c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167128) {
            ctx->pc = 0x167148u;
            goto label_167148;
        }
    }
    ctx->pc = 0x167130u;
label_167130:
    // 0x167130: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x167130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_167134:
    // 0x167134: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x167134u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_167138:
    // 0x167138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16713c:
    // 0x16713c: 0x0  nop
    ctx->pc = 0x16713cu;
    // NOP
label_167140:
    // 0x167140: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x167140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_167144:
    // 0x167144: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x167144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_167148:
    // 0x167148: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x167148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16714c:
    // 0x16714c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x16714cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_167150:
    // 0x167150: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x167150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_167154:
    // 0x167154: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x167154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_167158:
    // 0x167158: 0xc059e38  jal         func_1678E0
label_16715c:
    if (ctx->pc == 0x16715Cu) {
        ctx->pc = 0x16715Cu;
            // 0x16715c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x167160u;
        goto label_167160;
    }
    ctx->pc = 0x167158u;
    SET_GPR_U32(ctx, 31, 0x167160u);
    ctx->pc = 0x16715Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167158u;
            // 0x16715c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1678E0u;
    if (runtime->hasFunction(0x1678E0u)) {
        auto targetFn = runtime->lookupFunction(0x1678E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167160u; }
        if (ctx->pc != 0x167160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1678e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167160u; }
        if (ctx->pc != 0x167160u) { return; }
    }
    ctx->pc = 0x167160u;
label_167160:
    // 0x167160: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x167160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_167164:
    // 0x167164: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x167164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_167168:
    // 0x167168: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x167168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_16716c:
    // 0x16716c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x16716cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_167170:
    // 0x167170: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x167170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_167174:
    // 0x167174: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x167174u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_167178:
    // 0x167178: 0x10200121  beqz        $at, . + 4 + (0x121 << 2)
label_16717c:
    if (ctx->pc == 0x16717Cu) {
        ctx->pc = 0x16717Cu;
            // 0x16717c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x167180u;
        goto label_167180;
    }
    ctx->pc = 0x167178u;
    {
        const bool branch_taken_0x167178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16717Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167178u;
            // 0x16717c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167178) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x167180u;
label_167180:
    // 0x167180: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_167184:
    // 0x167184: 0x246310a0  addiu       $v1, $v1, 0x10A0
    ctx->pc = 0x167184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4256));
label_167188:
    // 0x167188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16718c:
    // 0x16718c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167190:
    // 0x167190: 0x400008  jr          $v0
label_167194:
    if (ctx->pc == 0x167194u) {
        ctx->pc = 0x167198u;
        goto label_167198;
    }
    ctx->pc = 0x167190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167198u: goto label_167198;
            case 0x167200u: goto label_167200;
            case 0x167220u: goto label_167220;
            case 0x167240u: goto label_167240;
            case 0x167260u: goto label_167260;
            case 0x167280u: goto label_167280;
            case 0x1672A0u: goto label_1672a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167198u;
label_167198:
    // 0x167198: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x167198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_16719c:
    // 0x16719c: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x16719cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
label_1671a0:
    // 0x1671a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1671a4:
    if (ctx->pc == 0x1671A4u) {
        ctx->pc = 0x1671A4u;
            // 0x1671a4: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->pc = 0x1671A8u;
        goto label_1671a8;
    }
    ctx->pc = 0x1671A0u;
    {
        const bool branch_taken_0x1671a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1671A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1671A0u;
            // 0x1671a4: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671a0) {
            ctx->pc = 0x1671D0u;
            goto label_1671d0;
        }
    }
    ctx->pc = 0x1671A8u;
label_1671a8:
    // 0x1671a8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1671ac:
    if (ctx->pc == 0x1671ACu) {
        ctx->pc = 0x1671B0u;
        goto label_1671b0;
    }
    ctx->pc = 0x1671A8u;
    {
        const bool branch_taken_0x1671a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1671a8) {
            ctx->pc = 0x1671D0u;
            goto label_1671d0;
        }
    }
    ctx->pc = 0x1671B0u;
label_1671b0:
    // 0x1671b0: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1671b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1671b4:
    // 0x1671b4: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x1671b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_1671b8:
    // 0x1671b8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1671b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
label_1671bc:
    // 0x1671bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1671bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1671c0:
    // 0x1671c0: 0x0  nop
    ctx->pc = 0x1671c0u;
    // NOP
label_1671c4:
    // 0x1671c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1671c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1671c8:
    // 0x1671c8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1671c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1671cc:
    // 0x1671cc: 0x0  nop
    ctx->pc = 0x1671ccu;
    // NOP
label_1671d0:
    // 0x1671d0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1671d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1671d4:
    // 0x1671d4: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1671d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1671d8:
    // 0x1671d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1671dc:
    if (ctx->pc == 0x1671DCu) {
        ctx->pc = 0x1671E0u;
        goto label_1671e0;
    }
    ctx->pc = 0x1671D8u;
    {
        const bool branch_taken_0x1671d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1671d8) {
            ctx->pc = 0x1671E8u;
            goto label_1671e8;
        }
    }
    ctx->pc = 0x1671E0u;
label_1671e0:
    // 0x1671e0: 0x10000107  b           . + 4 + (0x107 << 2)
label_1671e4:
    if (ctx->pc == 0x1671E4u) {
        ctx->pc = 0x1671E8u;
        goto label_1671e8;
    }
    ctx->pc = 0x1671E0u;
    {
        const bool branch_taken_0x1671e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1671e0) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x1671E8u;
label_1671e8:
    // 0x1671e8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1671e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1671ec:
    // 0x1671ec: 0xc06560c  jal         func_195830
label_1671f0:
    if (ctx->pc == 0x1671F0u) {
        ctx->pc = 0x1671F0u;
            // 0x1671f0: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1671F4u;
        goto label_1671f4;
    }
    ctx->pc = 0x1671ECu;
    SET_GPR_U32(ctx, 31, 0x1671F4u);
    ctx->pc = 0x1671F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1671ECu;
            // 0x1671f0: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1671F4u; }
        if (ctx->pc != 0x1671F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1671F4u; }
        if (ctx->pc != 0x1671F4u) { return; }
    }
    ctx->pc = 0x1671F4u;
label_1671f4:
    // 0x1671f4: 0x10000102  b           . + 4 + (0x102 << 2)
label_1671f8:
    if (ctx->pc == 0x1671F8u) {
        ctx->pc = 0x1671FCu;
        goto label_1671fc;
    }
    ctx->pc = 0x1671F4u;
    {
        const bool branch_taken_0x1671f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1671f4) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x1671FCu;
label_1671fc:
    // 0x1671fc: 0x0  nop
    ctx->pc = 0x1671fcu;
    // NOP
label_167200:
    // 0x167200: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x167200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_167204:
    // 0x167204: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x167204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167208:
    // 0x167208: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x167208u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_16720c:
    // 0x16720c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16720cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167210:
    // 0x167210: 0x0  nop
    ctx->pc = 0x167210u;
    // NOP
label_167214:
    // 0x167214: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x167214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_167218:
    // 0x167218: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_16721c:
    if (ctx->pc == 0x16721Cu) {
        ctx->pc = 0x16721Cu;
            // 0x16721c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x167220u;
        goto label_167220;
    }
    ctx->pc = 0x167218u;
    {
        const bool branch_taken_0x167218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16721Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167218u;
            // 0x16721c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167218) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x167220u;
label_167220:
    // 0x167220: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x167220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_167224:
    // 0x167224: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x167224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167228:
    // 0x167228: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x167228u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_16722c:
    // 0x16722c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16722cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167230:
    // 0x167230: 0x0  nop
    ctx->pc = 0x167230u;
    // NOP
label_167234:
    // 0x167234: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x167234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_167238:
    // 0x167238: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_16723c:
    if (ctx->pc == 0x16723Cu) {
        ctx->pc = 0x16723Cu;
            // 0x16723c: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->pc = 0x167240u;
        goto label_167240;
    }
    ctx->pc = 0x167238u;
    {
        const bool branch_taken_0x167238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167238u;
            // 0x16723c: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167238) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x167240u;
label_167240:
    // 0x167240: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x167240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
label_167244:
    // 0x167244: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x167244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167248:
    // 0x167248: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x167248u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_16724c:
    // 0x16724c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16724cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167250:
    // 0x167250: 0x0  nop
    ctx->pc = 0x167250u;
    // NOP
label_167254:
    // 0x167254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x167254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_167258:
    // 0x167258: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_16725c:
    if (ctx->pc == 0x16725Cu) {
        ctx->pc = 0x16725Cu;
            // 0x16725c: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->pc = 0x167260u;
        goto label_167260;
    }
    ctx->pc = 0x167258u;
    {
        const bool branch_taken_0x167258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16725Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167258u;
            // 0x16725c: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167258) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x167260u;
label_167260:
    // 0x167260: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x167260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_167264:
    // 0x167264: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x167264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167268:
    // 0x167268: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x167268u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_16726c:
    // 0x16726c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16726cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167270:
    // 0x167270: 0x0  nop
    ctx->pc = 0x167270u;
    // NOP
label_167274:
    // 0x167274: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x167274u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_167278:
    // 0x167278: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_16727c:
    if (ctx->pc == 0x16727Cu) {
        ctx->pc = 0x16727Cu;
            // 0x16727c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x167280u;
        goto label_167280;
    }
    ctx->pc = 0x167278u;
    {
        const bool branch_taken_0x167278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16727Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167278u;
            // 0x16727c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167278) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x167280u;
label_167280:
    // 0x167280: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x167280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_167284:
    // 0x167284: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x167284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167288:
    // 0x167288: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x167288u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_16728c:
    // 0x16728c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16728cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167290:
    // 0x167290: 0x0  nop
    ctx->pc = 0x167290u;
    // NOP
label_167294:
    // 0x167294: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x167294u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_167298:
    // 0x167298: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_16729c:
    if (ctx->pc == 0x16729Cu) {
        ctx->pc = 0x16729Cu;
            // 0x16729c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1672A0u;
        goto label_1672a0;
    }
    ctx->pc = 0x167298u;
    {
        const bool branch_taken_0x167298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16729Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167298u;
            // 0x16729c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167298) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x1672A0u;
label_1672a0:
    // 0x1672a0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1672a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1672a4:
    // 0x1672a4: 0x1460006c  bnez        $v1, . + 4 + (0x6C << 2)
label_1672a8:
    if (ctx->pc == 0x1672A8u) {
        ctx->pc = 0x1672ACu;
        goto label_1672ac;
    }
    ctx->pc = 0x1672A4u;
    {
        const bool branch_taken_0x1672a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1672a4) {
            ctx->pc = 0x167458u;
            goto label_167458;
        }
    }
    ctx->pc = 0x1672ACu;
label_1672ac:
    // 0x1672ac: 0xc040d72  jal         func_1035C8
label_1672b0:
    if (ctx->pc == 0x1672B0u) {
        ctx->pc = 0x1672B0u;
            // 0x1672b0: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1672B4u;
        goto label_1672b4;
    }
    ctx->pc = 0x1672ACu;
    SET_GPR_U32(ctx, 31, 0x1672B4u);
    ctx->pc = 0x1672B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1672ACu;
            // 0x1672b0: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1672B4u; }
        if (ctx->pc != 0x1672B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1672B4u; }
        if (ctx->pc != 0x1672B4u) { return; }
    }
    ctx->pc = 0x1672B4u;
label_1672b4:
    // 0x1672b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1672b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1672b8:
    // 0x1672b8: 0xc040078  jal         func_1001E0
label_1672bc:
    if (ctx->pc == 0x1672BCu) {
        ctx->pc = 0x1672BCu;
            // 0x1672bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1672C0u;
        goto label_1672c0;
    }
    ctx->pc = 0x1672B8u;
    SET_GPR_U32(ctx, 31, 0x1672C0u);
    ctx->pc = 0x1672BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1672B8u;
            // 0x1672bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1672C0u; }
        if (ctx->pc != 0x1672C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1672C0u; }
        if (ctx->pc != 0x1672C0u) { return; }
    }
    ctx->pc = 0x1672C0u;
label_1672c0:
    // 0x1672c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1672c4:
    if (ctx->pc == 0x1672C4u) {
        ctx->pc = 0x1672C8u;
        goto label_1672c8;
    }
    ctx->pc = 0x1672C0u;
    {
        const bool branch_taken_0x1672c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1672c0) {
            ctx->pc = 0x1672E8u;
            goto label_1672e8;
        }
    }
    ctx->pc = 0x1672C8u;
label_1672c8:
    // 0x1672c8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1672c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1672cc:
    // 0x1672cc: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1672ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1672d0:
    // 0x1672d0: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1672d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1672d4:
    // 0x1672d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1672d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1672d8:
    // 0x1672d8: 0x0  nop
    ctx->pc = 0x1672d8u;
    // NOP
label_1672dc:
    // 0x1672dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1672dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1672e0:
    // 0x1672e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1672e4:
    if (ctx->pc == 0x1672E4u) {
        ctx->pc = 0x1672E4u;
            // 0x1672e4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1672E8u;
        goto label_1672e8;
    }
    ctx->pc = 0x1672E0u;
    {
        const bool branch_taken_0x1672e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1672E0u;
            // 0x1672e4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672e0) {
            ctx->pc = 0x1672F8u;
            goto label_1672f8;
        }
    }
    ctx->pc = 0x1672E8u;
label_1672e8:
    // 0x1672e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1672e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1672ec:
    // 0x1672ec: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1672ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1672f0:
    // 0x1672f0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1672f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1672f4:
    // 0x1672f4: 0x0  nop
    ctx->pc = 0x1672f4u;
    // NOP
label_1672f8:
    // 0x1672f8: 0xc040d72  jal         func_1035C8
label_1672fc:
    if (ctx->pc == 0x1672FCu) {
        ctx->pc = 0x1672FCu;
            // 0x1672fc: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x167300u;
        goto label_167300;
    }
    ctx->pc = 0x1672F8u;
    SET_GPR_U32(ctx, 31, 0x167300u);
    ctx->pc = 0x1672FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1672F8u;
            // 0x1672fc: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167300u; }
        if (ctx->pc != 0x167300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167300u; }
        if (ctx->pc != 0x167300u) { return; }
    }
    ctx->pc = 0x167300u;
label_167300:
    // 0x167300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x167300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167304:
    // 0x167304: 0xc040078  jal         func_1001E0
label_167308:
    if (ctx->pc == 0x167308u) {
        ctx->pc = 0x167308u;
            // 0x167308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16730Cu;
        goto label_16730c;
    }
    ctx->pc = 0x167304u;
    SET_GPR_U32(ctx, 31, 0x16730Cu);
    ctx->pc = 0x167308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167304u;
            // 0x167308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16730Cu; }
        if (ctx->pc != 0x16730Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16730Cu; }
        if (ctx->pc != 0x16730Cu) { return; }
    }
    ctx->pc = 0x16730Cu;
label_16730c:
    // 0x16730c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_167310:
    if (ctx->pc == 0x167310u) {
        ctx->pc = 0x167314u;
        goto label_167314;
    }
    ctx->pc = 0x16730Cu;
    {
        const bool branch_taken_0x16730c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16730c) {
            ctx->pc = 0x167330u;
            goto label_167330;
        }
    }
    ctx->pc = 0x167314u;
label_167314:
    // 0x167314: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x167314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167318:
    // 0x167318: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x167318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_16731c:
    // 0x16731c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x16731cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_167320:
    // 0x167320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167324:
    // 0x167324: 0x0  nop
    ctx->pc = 0x167324u;
    // NOP
label_167328:
    // 0x167328: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x167328u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16732c:
    // 0x16732c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x16732cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_167330:
    // 0x167330: 0xc040d72  jal         func_1035C8
label_167334:
    if (ctx->pc == 0x167334u) {
        ctx->pc = 0x167334u;
            // 0x167334: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x167338u;
        goto label_167338;
    }
    ctx->pc = 0x167330u;
    SET_GPR_U32(ctx, 31, 0x167338u);
    ctx->pc = 0x167334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167330u;
            // 0x167334: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167338u; }
        if (ctx->pc != 0x167338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167338u; }
        if (ctx->pc != 0x167338u) { return; }
    }
    ctx->pc = 0x167338u;
label_167338:
    // 0x167338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x167338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16733c:
    // 0x16733c: 0xc04008c  jal         func_100230
label_167340:
    if (ctx->pc == 0x167340u) {
        ctx->pc = 0x167340u;
            // 0x167340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167344u;
        goto label_167344;
    }
    ctx->pc = 0x16733Cu;
    SET_GPR_U32(ctx, 31, 0x167344u);
    ctx->pc = 0x167340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16733Cu;
            // 0x167340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167344u; }
        if (ctx->pc != 0x167344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167344u; }
        if (ctx->pc != 0x167344u) { return; }
    }
    ctx->pc = 0x167344u;
label_167344:
    // 0x167344: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_167348:
    if (ctx->pc == 0x167348u) {
        ctx->pc = 0x16734Cu;
        goto label_16734c;
    }
    ctx->pc = 0x167344u;
    {
        const bool branch_taken_0x167344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167344) {
            ctx->pc = 0x167368u;
            goto label_167368;
        }
    }
    ctx->pc = 0x16734Cu;
label_16734c:
    // 0x16734c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x16734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167350:
    // 0x167350: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x167350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_167354:
    // 0x167354: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x167354u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_167358:
    // 0x167358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16735c:
    // 0x16735c: 0x0  nop
    ctx->pc = 0x16735cu;
    // NOP
label_167360:
    // 0x167360: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x167360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_167364:
    // 0x167364: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x167364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_167368:
    // 0x167368: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_16736c:
    // 0x16736c: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x16736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_167370:
    // 0x167370: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x167370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_167374:
    // 0x167374: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x167374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_167378:
    // 0x167378: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x167378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16737c:
    // 0x16737c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16737cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_167380:
    // 0x167380: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x167380u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_167384:
    // 0x167384: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x167384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_167388:
    // 0x167388: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16738c:
    // 0x16738c: 0x0  nop
    ctx->pc = 0x16738cu;
    // NOP
label_167390:
    // 0x167390: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x167390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_167394:
    // 0x167394: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x167394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_167398:
    // 0x167398: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x167398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_16739c:
    // 0x16739c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16739cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1673a0:
    // 0x1673a0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1673a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1673a4:
    // 0x1673a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1673a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1673a8:
    // 0x1673a8: 0x0  nop
    ctx->pc = 0x1673a8u;
    // NOP
label_1673ac:
    // 0x1673ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1673acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1673b0:
    // 0x1673b0: 0xc04b6ee  jal         func_12DBB8
label_1673b4:
    if (ctx->pc == 0x1673B4u) {
        ctx->pc = 0x1673B4u;
            // 0x1673b4: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x1673B8u;
        goto label_1673b8;
    }
    ctx->pc = 0x1673B0u;
    SET_GPR_U32(ctx, 31, 0x1673B8u);
    ctx->pc = 0x1673B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1673B0u;
            // 0x1673b4: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1673B8u; }
        if (ctx->pc != 0x1673B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1673B8u; }
        if (ctx->pc != 0x1673B8u) { return; }
    }
    ctx->pc = 0x1673B8u;
label_1673b8:
    // 0x1673b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1673b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1673bc:
    // 0x1673bc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1673bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1673c0:
    // 0x1673c0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1673c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1673c4:
    // 0x1673c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1673c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1673c8:
    // 0x1673c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1673c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1673cc:
    // 0x1673cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1673d0:
    if (ctx->pc == 0x1673D0u) {
        ctx->pc = 0x1673D0u;
            // 0x1673d0: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1673D4u;
        goto label_1673d4;
    }
    ctx->pc = 0x1673CCu;
    {
        const bool branch_taken_0x1673cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1673D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1673CCu;
            // 0x1673d0: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1673cc) {
            ctx->pc = 0x1673E0u;
            goto label_1673e0;
        }
    }
    ctx->pc = 0x1673D4u;
label_1673d4:
    // 0x1673d4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1673d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1673d8:
    // 0x1673d8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1673d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1673dc:
    // 0x1673dc: 0x0  nop
    ctx->pc = 0x1673dcu;
    // NOP
label_1673e0:
    // 0x1673e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1673e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1673e4:
    // 0x1673e4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1673e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1673e8:
    // 0x1673e8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1673e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1673ec:
    // 0x1673ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1673ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1673f0:
    // 0x1673f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1673f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1673f4:
    // 0x1673f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1673f8:
    if (ctx->pc == 0x1673F8u) {
        ctx->pc = 0x1673F8u;
            // 0x1673f8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1673FCu;
        goto label_1673fc;
    }
    ctx->pc = 0x1673F4u;
    {
        const bool branch_taken_0x1673f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1673F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1673F4u;
            // 0x1673f8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1673f4) {
            ctx->pc = 0x167408u;
            goto label_167408;
        }
    }
    ctx->pc = 0x1673FCu;
label_1673fc:
    // 0x1673fc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1673fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_167400:
    // 0x167400: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x167400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_167404:
    // 0x167404: 0x0  nop
    ctx->pc = 0x167404u;
    // NOP
label_167408:
    // 0x167408: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x167408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_16740c:
    // 0x16740c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x16740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_167410:
    // 0x167410: 0x1462007b  bne         $v1, $v0, . + 4 + (0x7B << 2)
label_167414:
    if (ctx->pc == 0x167414u) {
        ctx->pc = 0x167418u;
        goto label_167418;
    }
    ctx->pc = 0x167410u;
    {
        const bool branch_taken_0x167410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167410) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x167418u;
label_167418:
    // 0x167418: 0xc065d00  jal         func_197400
label_16741c:
    if (ctx->pc == 0x16741Cu) {
        ctx->pc = 0x167420u;
        goto label_167420;
    }
    ctx->pc = 0x167418u;
    SET_GPR_U32(ctx, 31, 0x167420u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167420u; }
        if (ctx->pc != 0x167420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167420u; }
        if (ctx->pc != 0x167420u) { return; }
    }
    ctx->pc = 0x167420u;
label_167420:
    // 0x167420: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x167420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_167424:
    // 0x167424: 0x14200076  bnez        $at, . + 4 + (0x76 << 2)
label_167428:
    if (ctx->pc == 0x167428u) {
        ctx->pc = 0x16742Cu;
        goto label_16742c;
    }
    ctx->pc = 0x167424u;
    {
        const bool branch_taken_0x167424 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x167424) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x16742Cu;
label_16742c:
    // 0x16742c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x16742cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_167430:
    // 0x167430: 0x288100e0  slti        $at, $a0, 0xE0
    ctx->pc = 0x167430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)224) ? 1 : 0);
label_167434:
    // 0x167434: 0x10200072  beqz        $at, . + 4 + (0x72 << 2)
label_167438:
    if (ctx->pc == 0x167438u) {
        ctx->pc = 0x167438u;
            // 0x167438: 0x2881ff21  slti        $at, $a0, -0xDF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967073) ? 1 : 0);
        ctx->pc = 0x16743Cu;
        goto label_16743c;
    }
    ctx->pc = 0x167434u;
    {
        const bool branch_taken_0x167434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x167438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167434u;
            // 0x167438: 0x2881ff21  slti        $at, $a0, -0xDF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967073) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167434) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x16743Cu;
label_16743c:
    // 0x16743c: 0x14200070  bnez        $at, . + 4 + (0x70 << 2)
label_167440:
    if (ctx->pc == 0x167440u) {
        ctx->pc = 0x167444u;
        goto label_167444;
    }
    ctx->pc = 0x16743Cu;
    {
        const bool branch_taken_0x16743c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16743c) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x167444u;
label_167444:
    // 0x167444: 0xc06560c  jal         func_195830
label_167448:
    if (ctx->pc == 0x167448u) {
        ctx->pc = 0x167448u;
            // 0x167448: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x16744Cu;
        goto label_16744c;
    }
    ctx->pc = 0x167444u;
    SET_GPR_U32(ctx, 31, 0x16744Cu);
    ctx->pc = 0x167448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167444u;
            // 0x167448: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16744Cu; }
        if (ctx->pc != 0x16744Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16744Cu; }
        if (ctx->pc != 0x16744Cu) { return; }
    }
    ctx->pc = 0x16744Cu;
label_16744c:
    // 0x16744c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_167450:
    if (ctx->pc == 0x167450u) {
        ctx->pc = 0x167454u;
        goto label_167454;
    }
    ctx->pc = 0x16744Cu;
    {
        const bool branch_taken_0x16744c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16744c) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x167454u;
label_167454:
    // 0x167454: 0x0  nop
    ctx->pc = 0x167454u;
    // NOP
label_167458:
    // 0x167458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16745c:
    // 0x16745c: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
label_167460:
    if (ctx->pc == 0x167460u) {
        ctx->pc = 0x167460u;
            // 0x167460: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x167464u;
        goto label_167464;
    }
    ctx->pc = 0x16745Cu;
    {
        const bool branch_taken_0x16745c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x167460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16745Cu;
            // 0x167460: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16745c) {
            ctx->pc = 0x167588u;
            goto label_167588;
        }
    }
    ctx->pc = 0x167464u;
label_167464:
    // 0x167464: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x167464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_167468:
    // 0x167468: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x167468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_16746c:
    // 0x16746c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16746cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_167470:
    // 0x167470: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x167470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_167474:
    // 0x167474: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x167474u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_167478:
    // 0x167478: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_16747c:
    // 0x16747c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16747cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167480:
    // 0x167480: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x167480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_167484:
    // 0x167484: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x167484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_167488:
    // 0x167488: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x167488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_16748c:
    // 0x16748c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x16748cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_167490:
    // 0x167490: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x167490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167494:
    // 0x167494: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x167494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_167498:
    // 0x167498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16749c:
    // 0x16749c: 0x0  nop
    ctx->pc = 0x16749cu;
    // NOP
label_1674a0:
    // 0x1674a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1674a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1674a4:
    // 0x1674a4: 0xc04b6ee  jal         func_12DBB8
label_1674a8:
    if (ctx->pc == 0x1674A8u) {
        ctx->pc = 0x1674A8u;
            // 0x1674a8: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x1674ACu;
        goto label_1674ac;
    }
    ctx->pc = 0x1674A4u;
    SET_GPR_U32(ctx, 31, 0x1674ACu);
    ctx->pc = 0x1674A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1674A4u;
            // 0x1674a8: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1674ACu; }
        if (ctx->pc != 0x1674ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1674ACu; }
        if (ctx->pc != 0x1674ACu) { return; }
    }
    ctx->pc = 0x1674ACu;
label_1674ac:
    // 0x1674ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1674acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1674b0:
    // 0x1674b0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1674b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1674b4:
    // 0x1674b4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1674b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1674b8:
    // 0x1674b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1674b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1674bc:
    // 0x1674bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1674bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1674c0:
    // 0x1674c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1674c4:
    if (ctx->pc == 0x1674C4u) {
        ctx->pc = 0x1674C4u;
            // 0x1674c4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1674C8u;
        goto label_1674c8;
    }
    ctx->pc = 0x1674C0u;
    {
        const bool branch_taken_0x1674c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1674C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1674C0u;
            // 0x1674c4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674c0) {
            ctx->pc = 0x1674D0u;
            goto label_1674d0;
        }
    }
    ctx->pc = 0x1674C8u;
label_1674c8:
    // 0x1674c8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1674c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1674cc:
    // 0x1674cc: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1674ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1674d0:
    // 0x1674d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1674d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1674d4:
    // 0x1674d4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1674d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1674d8:
    // 0x1674d8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1674d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1674dc:
    // 0x1674dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1674dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1674e0:
    // 0x1674e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1674e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1674e4:
    // 0x1674e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1674e8:
    if (ctx->pc == 0x1674E8u) {
        ctx->pc = 0x1674E8u;
            // 0x1674e8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1674ECu;
        goto label_1674ec;
    }
    ctx->pc = 0x1674E4u;
    {
        const bool branch_taken_0x1674e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1674E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1674E4u;
            // 0x1674e8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674e4) {
            ctx->pc = 0x1674F8u;
            goto label_1674f8;
        }
    }
    ctx->pc = 0x1674ECu;
label_1674ec:
    // 0x1674ec: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1674ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1674f0:
    // 0x1674f0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1674f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1674f4:
    // 0x1674f4: 0x0  nop
    ctx->pc = 0x1674f4u;
    // NOP
label_1674f8:
    // 0x1674f8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1674f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1674fc:
    // 0x1674fc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1674fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_167500:
    // 0x167500: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_167504:
    if (ctx->pc == 0x167504u) {
        ctx->pc = 0x167508u;
        goto label_167508;
    }
    ctx->pc = 0x167500u;
    {
        const bool branch_taken_0x167500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167500) {
            ctx->pc = 0x167538u;
            goto label_167538;
        }
    }
    ctx->pc = 0x167508u;
label_167508:
    // 0x167508: 0xc065d00  jal         func_197400
label_16750c:
    if (ctx->pc == 0x16750Cu) {
        ctx->pc = 0x167510u;
        goto label_167510;
    }
    ctx->pc = 0x167508u;
    SET_GPR_U32(ctx, 31, 0x167510u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167510u; }
        if (ctx->pc != 0x167510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167510u; }
        if (ctx->pc != 0x167510u) { return; }
    }
    ctx->pc = 0x167510u;
label_167510:
    // 0x167510: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_167514:
    if (ctx->pc == 0x167514u) {
        ctx->pc = 0x167518u;
        goto label_167518;
    }
    ctx->pc = 0x167510u;
    {
        const bool branch_taken_0x167510 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x167510) {
            ctx->pc = 0x167538u;
            goto label_167538;
        }
    }
    ctx->pc = 0x167518u;
label_167518:
    // 0x167518: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x167518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_16751c:
    // 0x16751c: 0x288100e0  slti        $at, $a0, 0xE0
    ctx->pc = 0x16751cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)224) ? 1 : 0);
label_167520:
    // 0x167520: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_167524:
    if (ctx->pc == 0x167524u) {
        ctx->pc = 0x167524u;
            // 0x167524: 0x2881ff21  slti        $at, $a0, -0xDF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967073) ? 1 : 0);
        ctx->pc = 0x167528u;
        goto label_167528;
    }
    ctx->pc = 0x167520u;
    {
        const bool branch_taken_0x167520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x167524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167520u;
            // 0x167524: 0x2881ff21  slti        $at, $a0, -0xDF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967073) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167520) {
            ctx->pc = 0x167538u;
            goto label_167538;
        }
    }
    ctx->pc = 0x167528u;
label_167528:
    // 0x167528: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_16752c:
    if (ctx->pc == 0x16752Cu) {
        ctx->pc = 0x167530u;
        goto label_167530;
    }
    ctx->pc = 0x167528u;
    {
        const bool branch_taken_0x167528 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x167528) {
            ctx->pc = 0x167538u;
            goto label_167538;
        }
    }
    ctx->pc = 0x167530u;
label_167530:
    // 0x167530: 0xc06560c  jal         func_195830
label_167534:
    if (ctx->pc == 0x167534u) {
        ctx->pc = 0x167534u;
            // 0x167534: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x167538u;
        goto label_167538;
    }
    ctx->pc = 0x167530u;
    SET_GPR_U32(ctx, 31, 0x167538u);
    ctx->pc = 0x167534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167530u;
            // 0x167534: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167538u; }
        if (ctx->pc != 0x167538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167538u; }
        if (ctx->pc != 0x167538u) { return; }
    }
    ctx->pc = 0x167538u;
label_167538:
    // 0x167538: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x167538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_16753c:
    // 0x16753c: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x16753cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_167540:
    // 0x167540: 0x1420002f  bnez        $at, . + 4 + (0x2F << 2)
label_167544:
    if (ctx->pc == 0x167544u) {
        ctx->pc = 0x167548u;
        goto label_167548;
    }
    ctx->pc = 0x167540u;
    {
        const bool branch_taken_0x167540 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x167540) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x167548u;
label_167548:
    // 0x167548: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x167548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_16754c:
    // 0x16754c: 0xc06560c  jal         func_195830
label_167550:
    if (ctx->pc == 0x167550u) {
        ctx->pc = 0x167550u;
            // 0x167550: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x167554u;
        goto label_167554;
    }
    ctx->pc = 0x16754Cu;
    SET_GPR_U32(ctx, 31, 0x167554u);
    ctx->pc = 0x167550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16754Cu;
            // 0x167550: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167554u; }
        if (ctx->pc != 0x167554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167554u; }
        if (ctx->pc != 0x167554u) { return; }
    }
    ctx->pc = 0x167554u;
label_167554:
    // 0x167554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x167554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167558:
    // 0x167558: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x167558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_16755c:
    // 0x16755c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x16755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_167560:
    // 0x167560: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x167560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_167564:
    // 0x167564: 0xc0655a0  jal         func_195680
label_167568:
    if (ctx->pc == 0x167568u) {
        ctx->pc = 0x167568u;
            // 0x167568: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x16756Cu;
        goto label_16756c;
    }
    ctx->pc = 0x167564u;
    SET_GPR_U32(ctx, 31, 0x16756Cu);
    ctx->pc = 0x167568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167564u;
            // 0x167568: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16756Cu; }
        if (ctx->pc != 0x16756Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16756Cu; }
        if (ctx->pc != 0x16756Cu) { return; }
    }
    ctx->pc = 0x16756Cu;
label_16756c:
    // 0x16756c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x16756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_167570:
    // 0x167570: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x167570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_167574:
    // 0x167574: 0xc065590  jal         func_195640
label_167578:
    if (ctx->pc == 0x167578u) {
        ctx->pc = 0x167578u;
            // 0x167578: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x16757Cu;
        goto label_16757c;
    }
    ctx->pc = 0x167574u;
    SET_GPR_U32(ctx, 31, 0x16757Cu);
    ctx->pc = 0x167578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167574u;
            // 0x167578: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16757Cu; }
        if (ctx->pc != 0x16757Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16757Cu; }
        if (ctx->pc != 0x16757Cu) { return; }
    }
    ctx->pc = 0x16757Cu;
label_16757c:
    // 0x16757c: 0x10000020  b           . + 4 + (0x20 << 2)
label_167580:
    if (ctx->pc == 0x167580u) {
        ctx->pc = 0x167584u;
        goto label_167584;
    }
    ctx->pc = 0x16757Cu;
    {
        const bool branch_taken_0x16757c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16757c) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x167584u;
label_167584:
    // 0x167584: 0x0  nop
    ctx->pc = 0x167584u;
    // NOP
label_167588:
    // 0x167588: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x167588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16758c:
    // 0x16758c: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_167590:
    if (ctx->pc == 0x167590u) {
        ctx->pc = 0x167594u;
        goto label_167594;
    }
    ctx->pc = 0x16758Cu;
    {
        const bool branch_taken_0x16758c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16758c) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x167594u;
label_167594:
    // 0x167594: 0xc60300d4  lwc1        $f3, 0xD4($s0)
    ctx->pc = 0x167594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167598:
    // 0x167598: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x167598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_16759c:
    // 0x16759c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x16759cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1675a0:
    // 0x1675a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1675a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1675a4:
    // 0x1675a4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1675a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1675a8:
    // 0x1675a8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1675a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1675ac:
    // 0x1675ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1675acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1675b0:
    // 0x1675b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1675b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1675b4:
    // 0x1675b4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1675b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1675b8:
    // 0x1675b8: 0xe60200d4  swc1        $f2, 0xD4($s0)
    ctx->pc = 0x1675b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1675bc:
    // 0x1675bc: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x1675bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1675c0:
    // 0x1675c0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1675c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1675c4:
    // 0x1675c4: 0xe60100e4  swc1        $f1, 0xE4($s0)
    ctx->pc = 0x1675c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1675c8:
    // 0x1675c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1675c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1675cc:
    // 0x1675cc: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1675ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1675d0:
    // 0x1675d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1675d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1675d4:
    // 0x1675d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1675d8:
    if (ctx->pc == 0x1675D8u) {
        ctx->pc = 0x1675D8u;
            // 0x1675d8: 0x3c023d4c  lui         $v0, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
        ctx->pc = 0x1675DCu;
        goto label_1675dc;
    }
    ctx->pc = 0x1675D4u;
    {
        const bool branch_taken_0x1675d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1675D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1675D4u;
            // 0x1675d8: 0x3c023d4c  lui         $v0, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675d4) {
            ctx->pc = 0x1675E8u;
            goto label_1675e8;
        }
    }
    ctx->pc = 0x1675DCu;
label_1675dc:
    // 0x1675dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1675dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1675e0:
    // 0x1675e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1675e4:
    if (ctx->pc == 0x1675E4u) {
        ctx->pc = 0x1675E4u;
            // 0x1675e4: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x1675E8u;
        goto label_1675e8;
    }
    ctx->pc = 0x1675E0u;
    {
        const bool branch_taken_0x1675e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1675E0u;
            // 0x1675e4: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675e0) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x1675E8u;
label_1675e8:
    // 0x1675e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1675e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1675ec:
    // 0x1675ec: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1675f0:
    if (ctx->pc == 0x1675F0u) {
        ctx->pc = 0x1675F0u;
            // 0x1675f0: 0x3c02bd4c  lui         $v0, 0xBD4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
        ctx->pc = 0x1675F4u;
        goto label_1675f4;
    }
    ctx->pc = 0x1675ECu;
    {
        const bool branch_taken_0x1675ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1675F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1675ECu;
            // 0x1675f0: 0x3c02bd4c  lui         $v0, 0xBD4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675ec) {
            ctx->pc = 0x167600u;
            goto label_167600;
        }
    }
    ctx->pc = 0x1675F4u;
label_1675f4:
    // 0x1675f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1675f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1675f8:
    // 0x1675f8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1675f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1675fc:
    // 0x1675fc: 0x0  nop
    ctx->pc = 0x1675fcu;
    // NOP
label_167600:
    // 0x167600: 0xc04b788  jal         func_12DE20
label_167604:
    if (ctx->pc == 0x167604u) {
        ctx->pc = 0x167604u;
            // 0x167604: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x167608u;
        goto label_167608;
    }
    ctx->pc = 0x167600u;
    SET_GPR_U32(ctx, 31, 0x167608u);
    ctx->pc = 0x167604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167600u;
            // 0x167604: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167608u; }
        if (ctx->pc != 0x167608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167608u; }
        if (ctx->pc != 0x167608u) { return; }
    }
    ctx->pc = 0x167608u;
label_167608:
    // 0x167608: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x167608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16760c:
    // 0x16760c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x16760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_167610:
    // 0x167610: 0xc04b7da  jal         func_12DF68
label_167614:
    if (ctx->pc == 0x167614u) {
        ctx->pc = 0x167614u;
            // 0x167614: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167618u;
        goto label_167618;
    }
    ctx->pc = 0x167610u;
    SET_GPR_U32(ctx, 31, 0x167618u);
    ctx->pc = 0x167614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167610u;
            // 0x167614: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167618u; }
        if (ctx->pc != 0x167618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167618u; }
        if (ctx->pc != 0x167618u) { return; }
    }
    ctx->pc = 0x167618u;
label_167618:
    // 0x167618: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x167618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16761c:
    // 0x16761c: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x16761cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_167620:
    // 0x167620: 0xc04b804  jal         func_12E010
label_167624:
    if (ctx->pc == 0x167624u) {
        ctx->pc = 0x167624u;
            // 0x167624: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167628u;
        goto label_167628;
    }
    ctx->pc = 0x167620u;
    SET_GPR_U32(ctx, 31, 0x167628u);
    ctx->pc = 0x167624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167620u;
            // 0x167624: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167628u; }
        if (ctx->pc != 0x167628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167628u; }
        if (ctx->pc != 0x167628u) { return; }
    }
    ctx->pc = 0x167628u;
label_167628:
    // 0x167628: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x167628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16762c:
    // 0x16762c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x16762cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_167630:
    // 0x167630: 0xc04b7b0  jal         func_12DEC0
label_167634:
    if (ctx->pc == 0x167634u) {
        ctx->pc = 0x167634u;
            // 0x167634: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167638u;
        goto label_167638;
    }
    ctx->pc = 0x167630u;
    SET_GPR_U32(ctx, 31, 0x167638u);
    ctx->pc = 0x167634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167630u;
            // 0x167634: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167638u; }
        if (ctx->pc != 0x167638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167638u; }
        if (ctx->pc != 0x167638u) { return; }
    }
    ctx->pc = 0x167638u;
label_167638:
    // 0x167638: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x167638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16763c:
    // 0x16763c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16763cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_167640:
    // 0x167640: 0xc04b75e  jal         func_12DD78
label_167644:
    if (ctx->pc == 0x167644u) {
        ctx->pc = 0x167644u;
            // 0x167644: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x167648u;
        goto label_167648;
    }
    ctx->pc = 0x167640u;
    SET_GPR_U32(ctx, 31, 0x167648u);
    ctx->pc = 0x167644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167640u;
            // 0x167644: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167648u; }
        if (ctx->pc != 0x167648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167648u; }
        if (ctx->pc != 0x167648u) { return; }
    }
    ctx->pc = 0x167648u;
label_167648:
    // 0x167648: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x167648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16764c:
    // 0x16764c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_167650:
    // 0x167650: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x167650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_167654:
    // 0x167654: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_167658:
    if (ctx->pc == 0x167658u) {
        ctx->pc = 0x16765Cu;
        goto label_16765c;
    }
    ctx->pc = 0x167654u;
    {
        const bool branch_taken_0x167654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x167654) {
            ctx->pc = 0x1676A8u;
            goto label_1676a8;
        }
    }
    ctx->pc = 0x16765Cu;
label_16765c:
    // 0x16765c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x16765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_167660:
    // 0x167660: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_167664:
    if (ctx->pc == 0x167664u) {
        ctx->pc = 0x167668u;
        goto label_167668;
    }
    ctx->pc = 0x167660u;
    {
        const bool branch_taken_0x167660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167660) {
            ctx->pc = 0x167678u;
            goto label_167678;
        }
    }
    ctx->pc = 0x167668u;
label_167668:
    // 0x167668: 0xc0604f0  jal         func_1813C0
label_16766c:
    if (ctx->pc == 0x16766Cu) {
        ctx->pc = 0x16766Cu;
            // 0x16766c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x167670u;
        goto label_167670;
    }
    ctx->pc = 0x167668u;
    SET_GPR_U32(ctx, 31, 0x167670u);
    ctx->pc = 0x16766Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167668u;
            // 0x16766c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167670u; }
        if (ctx->pc != 0x167670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167670u; }
        if (ctx->pc != 0x167670u) { return; }
    }
    ctx->pc = 0x167670u;
label_167670:
    // 0x167670: 0x10000003  b           . + 4 + (0x3 << 2)
label_167674:
    if (ctx->pc == 0x167674u) {
        ctx->pc = 0x167678u;
        goto label_167678;
    }
    ctx->pc = 0x167670u;
    {
        const bool branch_taken_0x167670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167670) {
            ctx->pc = 0x167680u;
            goto label_167680;
        }
    }
    ctx->pc = 0x167678u;
label_167678:
    // 0x167678: 0xc0604dc  jal         func_181370
label_16767c:
    if (ctx->pc == 0x16767Cu) {
        ctx->pc = 0x16767Cu;
            // 0x16767c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x167680u;
        goto label_167680;
    }
    ctx->pc = 0x167678u;
    SET_GPR_U32(ctx, 31, 0x167680u);
    ctx->pc = 0x16767Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167678u;
            // 0x16767c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167680u; }
        if (ctx->pc != 0x167680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167680u; }
        if (ctx->pc != 0x167680u) { return; }
    }
    ctx->pc = 0x167680u;
label_167680:
    // 0x167680: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x167680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_167684:
    // 0x167684: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_167688:
    if (ctx->pc == 0x167688u) {
        ctx->pc = 0x16768Cu;
        goto label_16768c;
    }
    ctx->pc = 0x167684u;
    {
        const bool branch_taken_0x167684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167684) {
            ctx->pc = 0x167698u;
            goto label_167698;
        }
    }
    ctx->pc = 0x16768Cu;
label_16768c:
    // 0x16768c: 0x1000000a  b           . + 4 + (0xA << 2)
label_167690:
    if (ctx->pc == 0x167690u) {
        ctx->pc = 0x167690u;
            // 0x167690: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x167694u;
        goto label_167694;
    }
    ctx->pc = 0x16768Cu;
    {
        const bool branch_taken_0x16768c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16768Cu;
            // 0x167690: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16768c) {
            ctx->pc = 0x1676B8u;
            goto label_1676b8;
        }
    }
    ctx->pc = 0x167694u;
label_167694:
    // 0x167694: 0x0  nop
    ctx->pc = 0x167694u;
    // NOP
label_167698:
    // 0x167698: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16769c:
    // 0x16769c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1676a0:
    if (ctx->pc == 0x1676A0u) {
        ctx->pc = 0x1676A0u;
            // 0x1676a0: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->pc = 0x1676A4u;
        goto label_1676a4;
    }
    ctx->pc = 0x16769Cu;
    {
        const bool branch_taken_0x16769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16769Cu;
            // 0x1676a0: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16769c) {
            ctx->pc = 0x1676B8u;
            goto label_1676b8;
        }
    }
    ctx->pc = 0x1676A4u;
label_1676a4:
    // 0x1676a4: 0x0  nop
    ctx->pc = 0x1676a4u;
    // NOP
label_1676a8:
    // 0x1676a8: 0xc0604dc  jal         func_181370
label_1676ac:
    if (ctx->pc == 0x1676ACu) {
        ctx->pc = 0x1676ACu;
            // 0x1676ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1676B0u;
        goto label_1676b0;
    }
    ctx->pc = 0x1676A8u;
    SET_GPR_U32(ctx, 31, 0x1676B0u);
    ctx->pc = 0x1676ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1676A8u;
            // 0x1676ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1676B0u; }
        if (ctx->pc != 0x1676B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1676B0u; }
        if (ctx->pc != 0x1676B0u) { return; }
    }
    ctx->pc = 0x1676B0u;
label_1676b0:
    // 0x1676b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1676b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1676b4:
    // 0x1676b4: 0xae030110  sw          $v1, 0x110($s0)
    ctx->pc = 0x1676b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
label_1676b8:
    // 0x1676b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1676b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1676bc:
    // 0x1676bc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1676bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1676c0:
    // 0x1676c0: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1676c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_1676c4:
    // 0x1676c4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1676c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1676c8:
    // 0x1676c8: 0x2484fff4  addiu       $a0, $a0, -0xC
    ctx->pc = 0x1676c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
label_1676cc:
    // 0x1676cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1676ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1676d0:
    // 0x1676d0: 0x0  nop
    ctx->pc = 0x1676d0u;
    // NOP
label_1676d4:
    // 0x1676d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1676d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1676d8:
    // 0x1676d8: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1676d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1676dc:
    // 0x1676dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1676dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1676e0:
    // 0x1676e0: 0x2484fff4  addiu       $a0, $a0, -0xC
    ctx->pc = 0x1676e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
label_1676e4:
    // 0x1676e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1676e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1676e8:
    // 0x1676e8: 0x0  nop
    ctx->pc = 0x1676e8u;
    // NOP
label_1676ec:
    // 0x1676ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1676ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1676f0:
    // 0x1676f0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1676f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1676f4:
    // 0x1676f4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1676f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1676f8:
    // 0x1676f8: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x1676f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1676fc:
    // 0x1676fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1676fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167700:
    // 0x167700: 0x0  nop
    ctx->pc = 0x167700u;
    // NOP
label_167704:
    // 0x167704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x167704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_167708:
    // 0x167708: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x167708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_16770c:
    // 0x16770c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x16770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_167710:
    // 0x167710: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x167710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_167714:
    // 0x167714: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x167714u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167718:
    // 0x167718: 0x0  nop
    ctx->pc = 0x167718u;
    // NOP
label_16771c:
    // 0x16771c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16771cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_167720:
    // 0x167720: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x167720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_167724:
    // 0x167724: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x167724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_167728:
    // 0x167728: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x167728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16772c:
    // 0x16772c: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x16772cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
label_167730:
    // 0x167730: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x167730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_167734:
    // 0x167734: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_167738:
    if (ctx->pc == 0x167738u) {
        ctx->pc = 0x167738u;
            // 0x167738: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x16773Cu;
        goto label_16773c;
    }
    ctx->pc = 0x167734u;
    {
        const bool branch_taken_0x167734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x167738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167734u;
            // 0x167738: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167734) {
            ctx->pc = 0x167760u;
            goto label_167760;
        }
    }
    ctx->pc = 0x16773Cu;
label_16773c:
    // 0x16773c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_167740:
    if (ctx->pc == 0x167740u) {
        ctx->pc = 0x167744u;
        goto label_167744;
    }
    ctx->pc = 0x16773Cu;
    {
        const bool branch_taken_0x16773c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16773c) {
            ctx->pc = 0x167760u;
            goto label_167760;
        }
    }
    ctx->pc = 0x167744u;
label_167744:
    // 0x167744: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x167744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_167748:
    // 0x167748: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_16774c:
    if (ctx->pc == 0x16774Cu) {
        ctx->pc = 0x16774Cu;
            // 0x16774c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x167750u;
        goto label_167750;
    }
    ctx->pc = 0x167748u;
    {
        const bool branch_taken_0x167748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16774Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167748u;
            // 0x16774c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167748) {
            ctx->pc = 0x167760u;
            goto label_167760;
        }
    }
    ctx->pc = 0x167750u;
label_167750:
    // 0x167750: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_167754:
    if (ctx->pc == 0x167754u) {
        ctx->pc = 0x167758u;
        goto label_167758;
    }
    ctx->pc = 0x167750u;
    {
        const bool branch_taken_0x167750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x167750) {
            ctx->pc = 0x167760u;
            goto label_167760;
        }
    }
    ctx->pc = 0x167758u;
label_167758:
    // 0x167758: 0x1000000d  b           . + 4 + (0xD << 2)
label_16775c:
    if (ctx->pc == 0x16775Cu) {
        ctx->pc = 0x167760u;
        goto label_167760;
    }
    ctx->pc = 0x167758u;
    {
        const bool branch_taken_0x167758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167758) {
            ctx->pc = 0x167790u;
            goto label_167790;
        }
    }
    ctx->pc = 0x167760u;
label_167760:
    // 0x167760: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x167760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_167764:
    // 0x167764: 0x3c03c348  lui         $v1, 0xC348
    ctx->pc = 0x167764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49992 << 16));
label_167768:
    // 0x167768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16776c:
    // 0x16776c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x16776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167770:
    // 0x167770: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x167770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167774:
    // 0x167774: 0x45000054  bc1f        . + 4 + (0x54 << 2)
label_167778:
    if (ctx->pc == 0x167778u) {
        ctx->pc = 0x16777Cu;
        goto label_16777c;
    }
    ctx->pc = 0x167774u;
    {
        const bool branch_taken_0x167774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167774) {
            ctx->pc = 0x1678C8u;
            goto label_1678c8;
        }
    }
    ctx->pc = 0x16777Cu;
label_16777c:
    // 0x16777c: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x16777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_167780:
    // 0x167780: 0x40f809  jalr        $v0
label_167784:
    if (ctx->pc == 0x167784u) {
        ctx->pc = 0x167784u;
            // 0x167784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167788u;
        goto label_167788;
    }
    ctx->pc = 0x167780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167788u);
        ctx->pc = 0x167784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167780u;
            // 0x167784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166F80u: goto label_166f80;
            case 0x166F84u: goto label_166f84;
            case 0x166F88u: goto label_166f88;
            case 0x166F8Cu: goto label_166f8c;
            case 0x166F90u: goto label_166f90;
            case 0x166F94u: goto label_166f94;
            case 0x166F98u: goto label_166f98;
            case 0x166F9Cu: goto label_166f9c;
            case 0x166FA0u: goto label_166fa0;
            case 0x166FA4u: goto label_166fa4;
            case 0x166FA8u: goto label_166fa8;
            case 0x166FACu: goto label_166fac;
            case 0x166FB0u: goto label_166fb0;
            case 0x166FB4u: goto label_166fb4;
            case 0x166FB8u: goto label_166fb8;
            case 0x166FBCu: goto label_166fbc;
            case 0x166FC0u: goto label_166fc0;
            case 0x166FC4u: goto label_166fc4;
            case 0x166FC8u: goto label_166fc8;
            case 0x166FCCu: goto label_166fcc;
            case 0x166FD0u: goto label_166fd0;
            case 0x166FD4u: goto label_166fd4;
            case 0x166FD8u: goto label_166fd8;
            case 0x166FDCu: goto label_166fdc;
            case 0x166FE0u: goto label_166fe0;
            case 0x166FE4u: goto label_166fe4;
            case 0x166FE8u: goto label_166fe8;
            case 0x166FECu: goto label_166fec;
            case 0x166FF0u: goto label_166ff0;
            case 0x166FF4u: goto label_166ff4;
            case 0x166FF8u: goto label_166ff8;
            case 0x166FFCu: goto label_166ffc;
            case 0x167000u: goto label_167000;
            case 0x167004u: goto label_167004;
            case 0x167008u: goto label_167008;
            case 0x16700Cu: goto label_16700c;
            case 0x167010u: goto label_167010;
            case 0x167014u: goto label_167014;
            case 0x167018u: goto label_167018;
            case 0x16701Cu: goto label_16701c;
            case 0x167020u: goto label_167020;
            case 0x167024u: goto label_167024;
            case 0x167028u: goto label_167028;
            case 0x16702Cu: goto label_16702c;
            case 0x167030u: goto label_167030;
            case 0x167034u: goto label_167034;
            case 0x167038u: goto label_167038;
            case 0x16703Cu: goto label_16703c;
            case 0x167040u: goto label_167040;
            case 0x167044u: goto label_167044;
            case 0x167048u: goto label_167048;
            case 0x16704Cu: goto label_16704c;
            case 0x167050u: goto label_167050;
            case 0x167054u: goto label_167054;
            case 0x167058u: goto label_167058;
            case 0x16705Cu: goto label_16705c;
            case 0x167060u: goto label_167060;
            case 0x167064u: goto label_167064;
            case 0x167068u: goto label_167068;
            case 0x16706Cu: goto label_16706c;
            case 0x167070u: goto label_167070;
            case 0x167074u: goto label_167074;
            case 0x167078u: goto label_167078;
            case 0x16707Cu: goto label_16707c;
            case 0x167080u: goto label_167080;
            case 0x167084u: goto label_167084;
            case 0x167088u: goto label_167088;
            case 0x16708Cu: goto label_16708c;
            case 0x167090u: goto label_167090;
            case 0x167094u: goto label_167094;
            case 0x167098u: goto label_167098;
            case 0x16709Cu: goto label_16709c;
            case 0x1670A0u: goto label_1670a0;
            case 0x1670A4u: goto label_1670a4;
            case 0x1670A8u: goto label_1670a8;
            case 0x1670ACu: goto label_1670ac;
            case 0x1670B0u: goto label_1670b0;
            case 0x1670B4u: goto label_1670b4;
            case 0x1670B8u: goto label_1670b8;
            case 0x1670BCu: goto label_1670bc;
            case 0x1670C0u: goto label_1670c0;
            case 0x1670C4u: goto label_1670c4;
            case 0x1670C8u: goto label_1670c8;
            case 0x1670CCu: goto label_1670cc;
            case 0x1670D0u: goto label_1670d0;
            case 0x1670D4u: goto label_1670d4;
            case 0x1670D8u: goto label_1670d8;
            case 0x1670DCu: goto label_1670dc;
            case 0x1670E0u: goto label_1670e0;
            case 0x1670E4u: goto label_1670e4;
            case 0x1670E8u: goto label_1670e8;
            case 0x1670ECu: goto label_1670ec;
            case 0x1670F0u: goto label_1670f0;
            case 0x1670F4u: goto label_1670f4;
            case 0x1670F8u: goto label_1670f8;
            case 0x1670FCu: goto label_1670fc;
            case 0x167100u: goto label_167100;
            case 0x167104u: goto label_167104;
            case 0x167108u: goto label_167108;
            case 0x16710Cu: goto label_16710c;
            case 0x167110u: goto label_167110;
            case 0x167114u: goto label_167114;
            case 0x167118u: goto label_167118;
            case 0x16711Cu: goto label_16711c;
            case 0x167120u: goto label_167120;
            case 0x167124u: goto label_167124;
            case 0x167128u: goto label_167128;
            case 0x16712Cu: goto label_16712c;
            case 0x167130u: goto label_167130;
            case 0x167134u: goto label_167134;
            case 0x167138u: goto label_167138;
            case 0x16713Cu: goto label_16713c;
            case 0x167140u: goto label_167140;
            case 0x167144u: goto label_167144;
            case 0x167148u: goto label_167148;
            case 0x16714Cu: goto label_16714c;
            case 0x167150u: goto label_167150;
            case 0x167154u: goto label_167154;
            case 0x167158u: goto label_167158;
            case 0x16715Cu: goto label_16715c;
            case 0x167160u: goto label_167160;
            case 0x167164u: goto label_167164;
            case 0x167168u: goto label_167168;
            case 0x16716Cu: goto label_16716c;
            case 0x167170u: goto label_167170;
            case 0x167174u: goto label_167174;
            case 0x167178u: goto label_167178;
            case 0x16717Cu: goto label_16717c;
            case 0x167180u: goto label_167180;
            case 0x167184u: goto label_167184;
            case 0x167188u: goto label_167188;
            case 0x16718Cu: goto label_16718c;
            case 0x167190u: goto label_167190;
            case 0x167194u: goto label_167194;
            case 0x167198u: goto label_167198;
            case 0x16719Cu: goto label_16719c;
            case 0x1671A0u: goto label_1671a0;
            case 0x1671A4u: goto label_1671a4;
            case 0x1671A8u: goto label_1671a8;
            case 0x1671ACu: goto label_1671ac;
            case 0x1671B0u: goto label_1671b0;
            case 0x1671B4u: goto label_1671b4;
            case 0x1671B8u: goto label_1671b8;
            case 0x1671BCu: goto label_1671bc;
            case 0x1671C0u: goto label_1671c0;
            case 0x1671C4u: goto label_1671c4;
            case 0x1671C8u: goto label_1671c8;
            case 0x1671CCu: goto label_1671cc;
            case 0x1671D0u: goto label_1671d0;
            case 0x1671D4u: goto label_1671d4;
            case 0x1671D8u: goto label_1671d8;
            case 0x1671DCu: goto label_1671dc;
            case 0x1671E0u: goto label_1671e0;
            case 0x1671E4u: goto label_1671e4;
            case 0x1671E8u: goto label_1671e8;
            case 0x1671ECu: goto label_1671ec;
            case 0x1671F0u: goto label_1671f0;
            case 0x1671F4u: goto label_1671f4;
            case 0x1671F8u: goto label_1671f8;
            case 0x1671FCu: goto label_1671fc;
            case 0x167200u: goto label_167200;
            case 0x167204u: goto label_167204;
            case 0x167208u: goto label_167208;
            case 0x16720Cu: goto label_16720c;
            case 0x167210u: goto label_167210;
            case 0x167214u: goto label_167214;
            case 0x167218u: goto label_167218;
            case 0x16721Cu: goto label_16721c;
            case 0x167220u: goto label_167220;
            case 0x167224u: goto label_167224;
            case 0x167228u: goto label_167228;
            case 0x16722Cu: goto label_16722c;
            case 0x167230u: goto label_167230;
            case 0x167234u: goto label_167234;
            case 0x167238u: goto label_167238;
            case 0x16723Cu: goto label_16723c;
            case 0x167240u: goto label_167240;
            case 0x167244u: goto label_167244;
            case 0x167248u: goto label_167248;
            case 0x16724Cu: goto label_16724c;
            case 0x167250u: goto label_167250;
            case 0x167254u: goto label_167254;
            case 0x167258u: goto label_167258;
            case 0x16725Cu: goto label_16725c;
            case 0x167260u: goto label_167260;
            case 0x167264u: goto label_167264;
            case 0x167268u: goto label_167268;
            case 0x16726Cu: goto label_16726c;
            case 0x167270u: goto label_167270;
            case 0x167274u: goto label_167274;
            case 0x167278u: goto label_167278;
            case 0x16727Cu: goto label_16727c;
            case 0x167280u: goto label_167280;
            case 0x167284u: goto label_167284;
            case 0x167288u: goto label_167288;
            case 0x16728Cu: goto label_16728c;
            case 0x167290u: goto label_167290;
            case 0x167294u: goto label_167294;
            case 0x167298u: goto label_167298;
            case 0x16729Cu: goto label_16729c;
            case 0x1672A0u: goto label_1672a0;
            case 0x1672A4u: goto label_1672a4;
            case 0x1672A8u: goto label_1672a8;
            case 0x1672ACu: goto label_1672ac;
            case 0x1672B0u: goto label_1672b0;
            case 0x1672B4u: goto label_1672b4;
            case 0x1672B8u: goto label_1672b8;
            case 0x1672BCu: goto label_1672bc;
            case 0x1672C0u: goto label_1672c0;
            case 0x1672C4u: goto label_1672c4;
            case 0x1672C8u: goto label_1672c8;
            case 0x1672CCu: goto label_1672cc;
            case 0x1672D0u: goto label_1672d0;
            case 0x1672D4u: goto label_1672d4;
            case 0x1672D8u: goto label_1672d8;
            case 0x1672DCu: goto label_1672dc;
            case 0x1672E0u: goto label_1672e0;
            case 0x1672E4u: goto label_1672e4;
            case 0x1672E8u: goto label_1672e8;
            case 0x1672ECu: goto label_1672ec;
            case 0x1672F0u: goto label_1672f0;
            case 0x1672F4u: goto label_1672f4;
            case 0x1672F8u: goto label_1672f8;
            case 0x1672FCu: goto label_1672fc;
            case 0x167300u: goto label_167300;
            case 0x167304u: goto label_167304;
            case 0x167308u: goto label_167308;
            case 0x16730Cu: goto label_16730c;
            case 0x167310u: goto label_167310;
            case 0x167314u: goto label_167314;
            case 0x167318u: goto label_167318;
            case 0x16731Cu: goto label_16731c;
            case 0x167320u: goto label_167320;
            case 0x167324u: goto label_167324;
            case 0x167328u: goto label_167328;
            case 0x16732Cu: goto label_16732c;
            case 0x167330u: goto label_167330;
            case 0x167334u: goto label_167334;
            case 0x167338u: goto label_167338;
            case 0x16733Cu: goto label_16733c;
            case 0x167340u: goto label_167340;
            case 0x167344u: goto label_167344;
            case 0x167348u: goto label_167348;
            case 0x16734Cu: goto label_16734c;
            case 0x167350u: goto label_167350;
            case 0x167354u: goto label_167354;
            case 0x167358u: goto label_167358;
            case 0x16735Cu: goto label_16735c;
            case 0x167360u: goto label_167360;
            case 0x167364u: goto label_167364;
            case 0x167368u: goto label_167368;
            case 0x16736Cu: goto label_16736c;
            case 0x167370u: goto label_167370;
            case 0x167374u: goto label_167374;
            case 0x167378u: goto label_167378;
            case 0x16737Cu: goto label_16737c;
            case 0x167380u: goto label_167380;
            case 0x167384u: goto label_167384;
            case 0x167388u: goto label_167388;
            case 0x16738Cu: goto label_16738c;
            case 0x167390u: goto label_167390;
            case 0x167394u: goto label_167394;
            case 0x167398u: goto label_167398;
            case 0x16739Cu: goto label_16739c;
            case 0x1673A0u: goto label_1673a0;
            case 0x1673A4u: goto label_1673a4;
            case 0x1673A8u: goto label_1673a8;
            case 0x1673ACu: goto label_1673ac;
            case 0x1673B0u: goto label_1673b0;
            case 0x1673B4u: goto label_1673b4;
            case 0x1673B8u: goto label_1673b8;
            case 0x1673BCu: goto label_1673bc;
            case 0x1673C0u: goto label_1673c0;
            case 0x1673C4u: goto label_1673c4;
            case 0x1673C8u: goto label_1673c8;
            case 0x1673CCu: goto label_1673cc;
            case 0x1673D0u: goto label_1673d0;
            case 0x1673D4u: goto label_1673d4;
            case 0x1673D8u: goto label_1673d8;
            case 0x1673DCu: goto label_1673dc;
            case 0x1673E0u: goto label_1673e0;
            case 0x1673E4u: goto label_1673e4;
            case 0x1673E8u: goto label_1673e8;
            case 0x1673ECu: goto label_1673ec;
            case 0x1673F0u: goto label_1673f0;
            case 0x1673F4u: goto label_1673f4;
            case 0x1673F8u: goto label_1673f8;
            case 0x1673FCu: goto label_1673fc;
            case 0x167400u: goto label_167400;
            case 0x167404u: goto label_167404;
            case 0x167408u: goto label_167408;
            case 0x16740Cu: goto label_16740c;
            case 0x167410u: goto label_167410;
            case 0x167414u: goto label_167414;
            case 0x167418u: goto label_167418;
            case 0x16741Cu: goto label_16741c;
            case 0x167420u: goto label_167420;
            case 0x167424u: goto label_167424;
            case 0x167428u: goto label_167428;
            case 0x16742Cu: goto label_16742c;
            case 0x167430u: goto label_167430;
            case 0x167434u: goto label_167434;
            case 0x167438u: goto label_167438;
            case 0x16743Cu: goto label_16743c;
            case 0x167440u: goto label_167440;
            case 0x167444u: goto label_167444;
            case 0x167448u: goto label_167448;
            case 0x16744Cu: goto label_16744c;
            case 0x167450u: goto label_167450;
            case 0x167454u: goto label_167454;
            case 0x167458u: goto label_167458;
            case 0x16745Cu: goto label_16745c;
            case 0x167460u: goto label_167460;
            case 0x167464u: goto label_167464;
            case 0x167468u: goto label_167468;
            case 0x16746Cu: goto label_16746c;
            case 0x167470u: goto label_167470;
            case 0x167474u: goto label_167474;
            case 0x167478u: goto label_167478;
            case 0x16747Cu: goto label_16747c;
            case 0x167480u: goto label_167480;
            case 0x167484u: goto label_167484;
            case 0x167488u: goto label_167488;
            case 0x16748Cu: goto label_16748c;
            case 0x167490u: goto label_167490;
            case 0x167494u: goto label_167494;
            case 0x167498u: goto label_167498;
            case 0x16749Cu: goto label_16749c;
            case 0x1674A0u: goto label_1674a0;
            case 0x1674A4u: goto label_1674a4;
            case 0x1674A8u: goto label_1674a8;
            case 0x1674ACu: goto label_1674ac;
            case 0x1674B0u: goto label_1674b0;
            case 0x1674B4u: goto label_1674b4;
            case 0x1674B8u: goto label_1674b8;
            case 0x1674BCu: goto label_1674bc;
            case 0x1674C0u: goto label_1674c0;
            case 0x1674C4u: goto label_1674c4;
            case 0x1674C8u: goto label_1674c8;
            case 0x1674CCu: goto label_1674cc;
            case 0x1674D0u: goto label_1674d0;
            case 0x1674D4u: goto label_1674d4;
            case 0x1674D8u: goto label_1674d8;
            case 0x1674DCu: goto label_1674dc;
            case 0x1674E0u: goto label_1674e0;
            case 0x1674E4u: goto label_1674e4;
            case 0x1674E8u: goto label_1674e8;
            case 0x1674ECu: goto label_1674ec;
            case 0x1674F0u: goto label_1674f0;
            case 0x1674F4u: goto label_1674f4;
            case 0x1674F8u: goto label_1674f8;
            case 0x1674FCu: goto label_1674fc;
            case 0x167500u: goto label_167500;
            case 0x167504u: goto label_167504;
            case 0x167508u: goto label_167508;
            case 0x16750Cu: goto label_16750c;
            case 0x167510u: goto label_167510;
            case 0x167514u: goto label_167514;
            case 0x167518u: goto label_167518;
            case 0x16751Cu: goto label_16751c;
            case 0x167520u: goto label_167520;
            case 0x167524u: goto label_167524;
            case 0x167528u: goto label_167528;
            case 0x16752Cu: goto label_16752c;
            case 0x167530u: goto label_167530;
            case 0x167534u: goto label_167534;
            case 0x167538u: goto label_167538;
            case 0x16753Cu: goto label_16753c;
            case 0x167540u: goto label_167540;
            case 0x167544u: goto label_167544;
            case 0x167548u: goto label_167548;
            case 0x16754Cu: goto label_16754c;
            case 0x167550u: goto label_167550;
            case 0x167554u: goto label_167554;
            case 0x167558u: goto label_167558;
            case 0x16755Cu: goto label_16755c;
            case 0x167560u: goto label_167560;
            case 0x167564u: goto label_167564;
            case 0x167568u: goto label_167568;
            case 0x16756Cu: goto label_16756c;
            case 0x167570u: goto label_167570;
            case 0x167574u: goto label_167574;
            case 0x167578u: goto label_167578;
            case 0x16757Cu: goto label_16757c;
            case 0x167580u: goto label_167580;
            case 0x167584u: goto label_167584;
            case 0x167588u: goto label_167588;
            case 0x16758Cu: goto label_16758c;
            case 0x167590u: goto label_167590;
            case 0x167594u: goto label_167594;
            case 0x167598u: goto label_167598;
            case 0x16759Cu: goto label_16759c;
            case 0x1675A0u: goto label_1675a0;
            case 0x1675A4u: goto label_1675a4;
            case 0x1675A8u: goto label_1675a8;
            case 0x1675ACu: goto label_1675ac;
            case 0x1675B0u: goto label_1675b0;
            case 0x1675B4u: goto label_1675b4;
            case 0x1675B8u: goto label_1675b8;
            case 0x1675BCu: goto label_1675bc;
            case 0x1675C0u: goto label_1675c0;
            case 0x1675C4u: goto label_1675c4;
            case 0x1675C8u: goto label_1675c8;
            case 0x1675CCu: goto label_1675cc;
            case 0x1675D0u: goto label_1675d0;
            case 0x1675D4u: goto label_1675d4;
            case 0x1675D8u: goto label_1675d8;
            case 0x1675DCu: goto label_1675dc;
            case 0x1675E0u: goto label_1675e0;
            case 0x1675E4u: goto label_1675e4;
            case 0x1675E8u: goto label_1675e8;
            case 0x1675ECu: goto label_1675ec;
            case 0x1675F0u: goto label_1675f0;
            case 0x1675F4u: goto label_1675f4;
            case 0x1675F8u: goto label_1675f8;
            case 0x1675FCu: goto label_1675fc;
            case 0x167600u: goto label_167600;
            case 0x167604u: goto label_167604;
            case 0x167608u: goto label_167608;
            case 0x16760Cu: goto label_16760c;
            case 0x167610u: goto label_167610;
            case 0x167614u: goto label_167614;
            case 0x167618u: goto label_167618;
            case 0x16761Cu: goto label_16761c;
            case 0x167620u: goto label_167620;
            case 0x167624u: goto label_167624;
            case 0x167628u: goto label_167628;
            case 0x16762Cu: goto label_16762c;
            case 0x167630u: goto label_167630;
            case 0x167634u: goto label_167634;
            case 0x167638u: goto label_167638;
            case 0x16763Cu: goto label_16763c;
            case 0x167640u: goto label_167640;
            case 0x167644u: goto label_167644;
            case 0x167648u: goto label_167648;
            case 0x16764Cu: goto label_16764c;
            case 0x167650u: goto label_167650;
            case 0x167654u: goto label_167654;
            case 0x167658u: goto label_167658;
            case 0x16765Cu: goto label_16765c;
            case 0x167660u: goto label_167660;
            case 0x167664u: goto label_167664;
            case 0x167668u: goto label_167668;
            case 0x16766Cu: goto label_16766c;
            case 0x167670u: goto label_167670;
            case 0x167674u: goto label_167674;
            case 0x167678u: goto label_167678;
            case 0x16767Cu: goto label_16767c;
            case 0x167680u: goto label_167680;
            case 0x167684u: goto label_167684;
            case 0x167688u: goto label_167688;
            case 0x16768Cu: goto label_16768c;
            case 0x167690u: goto label_167690;
            case 0x167694u: goto label_167694;
            case 0x167698u: goto label_167698;
            case 0x16769Cu: goto label_16769c;
            case 0x1676A0u: goto label_1676a0;
            case 0x1676A4u: goto label_1676a4;
            case 0x1676A8u: goto label_1676a8;
            case 0x1676ACu: goto label_1676ac;
            case 0x1676B0u: goto label_1676b0;
            case 0x1676B4u: goto label_1676b4;
            case 0x1676B8u: goto label_1676b8;
            case 0x1676BCu: goto label_1676bc;
            case 0x1676C0u: goto label_1676c0;
            case 0x1676C4u: goto label_1676c4;
            case 0x1676C8u: goto label_1676c8;
            case 0x1676CCu: goto label_1676cc;
            case 0x1676D0u: goto label_1676d0;
            case 0x1676D4u: goto label_1676d4;
            case 0x1676D8u: goto label_1676d8;
            case 0x1676DCu: goto label_1676dc;
            case 0x1676E0u: goto label_1676e0;
            case 0x1676E4u: goto label_1676e4;
            case 0x1676E8u: goto label_1676e8;
            case 0x1676ECu: goto label_1676ec;
            case 0x1676F0u: goto label_1676f0;
            case 0x1676F4u: goto label_1676f4;
            case 0x1676F8u: goto label_1676f8;
            case 0x1676FCu: goto label_1676fc;
            case 0x167700u: goto label_167700;
            case 0x167704u: goto label_167704;
            case 0x167708u: goto label_167708;
            case 0x16770Cu: goto label_16770c;
            case 0x167710u: goto label_167710;
            case 0x167714u: goto label_167714;
            case 0x167718u: goto label_167718;
            case 0x16771Cu: goto label_16771c;
            case 0x167720u: goto label_167720;
            case 0x167724u: goto label_167724;
            case 0x167728u: goto label_167728;
            case 0x16772Cu: goto label_16772c;
            case 0x167730u: goto label_167730;
            case 0x167734u: goto label_167734;
            case 0x167738u: goto label_167738;
            case 0x16773Cu: goto label_16773c;
            case 0x167740u: goto label_167740;
            case 0x167744u: goto label_167744;
            case 0x167748u: goto label_167748;
            case 0x16774Cu: goto label_16774c;
            case 0x167750u: goto label_167750;
            case 0x167754u: goto label_167754;
            case 0x167758u: goto label_167758;
            case 0x16775Cu: goto label_16775c;
            case 0x167760u: goto label_167760;
            case 0x167764u: goto label_167764;
            case 0x167768u: goto label_167768;
            case 0x16776Cu: goto label_16776c;
            case 0x167770u: goto label_167770;
            case 0x167774u: goto label_167774;
            case 0x167778u: goto label_167778;
            case 0x16777Cu: goto label_16777c;
            case 0x167780u: goto label_167780;
            case 0x167784u: goto label_167784;
            case 0x167788u: goto label_167788;
            case 0x16778Cu: goto label_16778c;
            case 0x167790u: goto label_167790;
            case 0x167794u: goto label_167794;
            case 0x167798u: goto label_167798;
            case 0x16779Cu: goto label_16779c;
            case 0x1677A0u: goto label_1677a0;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677A8u: goto label_1677a8;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B0u: goto label_1677b0;
            case 0x1677B4u: goto label_1677b4;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677BCu: goto label_1677bc;
            case 0x1677C0u: goto label_1677c0;
            case 0x1677C4u: goto label_1677c4;
            case 0x1677C8u: goto label_1677c8;
            case 0x1677CCu: goto label_1677cc;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677D4u: goto label_1677d4;
            case 0x1677D8u: goto label_1677d8;
            case 0x1677DCu: goto label_1677dc;
            case 0x1677E0u: goto label_1677e0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677E8u: goto label_1677e8;
            case 0x1677ECu: goto label_1677ec;
            case 0x1677F0u: goto label_1677f0;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677F8u: goto label_1677f8;
            case 0x1677FCu: goto label_1677fc;
            case 0x167800u: goto label_167800;
            case 0x167804u: goto label_167804;
            case 0x167808u: goto label_167808;
            case 0x16780Cu: goto label_16780c;
            case 0x167810u: goto label_167810;
            case 0x167814u: goto label_167814;
            case 0x167818u: goto label_167818;
            case 0x16781Cu: goto label_16781c;
            case 0x167820u: goto label_167820;
            case 0x167824u: goto label_167824;
            case 0x167828u: goto label_167828;
            case 0x16782Cu: goto label_16782c;
            case 0x167830u: goto label_167830;
            case 0x167834u: goto label_167834;
            case 0x167838u: goto label_167838;
            case 0x16783Cu: goto label_16783c;
            case 0x167840u: goto label_167840;
            case 0x167844u: goto label_167844;
            case 0x167848u: goto label_167848;
            case 0x16784Cu: goto label_16784c;
            case 0x167850u: goto label_167850;
            case 0x167854u: goto label_167854;
            case 0x167858u: goto label_167858;
            case 0x16785Cu: goto label_16785c;
            case 0x167860u: goto label_167860;
            case 0x167864u: goto label_167864;
            case 0x167868u: goto label_167868;
            case 0x16786Cu: goto label_16786c;
            case 0x167870u: goto label_167870;
            case 0x167874u: goto label_167874;
            case 0x167878u: goto label_167878;
            case 0x16787Cu: goto label_16787c;
            case 0x167880u: goto label_167880;
            case 0x167884u: goto label_167884;
            case 0x167888u: goto label_167888;
            case 0x16788Cu: goto label_16788c;
            case 0x167890u: goto label_167890;
            case 0x167894u: goto label_167894;
            case 0x167898u: goto label_167898;
            case 0x16789Cu: goto label_16789c;
            case 0x1678A0u: goto label_1678a0;
            case 0x1678A4u: goto label_1678a4;
            case 0x1678A8u: goto label_1678a8;
            case 0x1678ACu: goto label_1678ac;
            case 0x1678B0u: goto label_1678b0;
            case 0x1678B4u: goto label_1678b4;
            case 0x1678B8u: goto label_1678b8;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678C0u: goto label_1678c0;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678C8u: goto label_1678c8;
            case 0x1678CCu: goto label_1678cc;
            case 0x1678D0u: goto label_1678d0;
            case 0x1678D4u: goto label_1678d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167788u; }
            if (ctx->pc != 0x167788u) { return; }
        }
    }
    ctx->pc = 0x167788u;
label_167788:
    // 0x167788: 0x1000004f  b           . + 4 + (0x4F << 2)
label_16778c:
    if (ctx->pc == 0x16778Cu) {
        ctx->pc = 0x167790u;
        goto label_167790;
    }
    ctx->pc = 0x167788u;
    {
        const bool branch_taken_0x167788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167788) {
            ctx->pc = 0x1678C8u;
            goto label_1678c8;
        }
    }
    ctx->pc = 0x167790u;
label_167790:
    // 0x167790: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x167790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_167794:
    // 0x167794: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x167794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_167798:
    // 0x167798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16779c:
    // 0x16779c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x16779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1677a0:
    // 0x1677a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1677a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1677a4:
    // 0x1677a4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1677a8:
    if (ctx->pc == 0x1677A8u) {
        ctx->pc = 0x1677A8u;
            // 0x1677a8: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->pc = 0x1677ACu;
        goto label_1677ac;
    }
    ctx->pc = 0x1677A4u;
    {
        const bool branch_taken_0x1677a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1677A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1677A4u;
            // 0x1677a8: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677a4) {
            ctx->pc = 0x1677C0u;
            goto label_1677c0;
        }
    }
    ctx->pc = 0x1677ACu;
label_1677ac:
    // 0x1677ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1677acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1677b0:
    // 0x1677b0: 0x0  nop
    ctx->pc = 0x1677b0u;
    // NOP
label_1677b4:
    // 0x1677b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1677b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1677b8:
    // 0x1677b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1677bc:
    if (ctx->pc == 0x1677BCu) {
        ctx->pc = 0x1677C0u;
        goto label_1677c0;
    }
    ctx->pc = 0x1677B8u;
    {
        const bool branch_taken_0x1677b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1677b8) {
            ctx->pc = 0x1677D8u;
            goto label_1677d8;
        }
    }
    ctx->pc = 0x1677C0u;
label_1677c0:
    // 0x1677c0: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1677c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1677c4:
    // 0x1677c4: 0x40f809  jalr        $v0
label_1677c8:
    if (ctx->pc == 0x1677C8u) {
        ctx->pc = 0x1677C8u;
            // 0x1677c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1677CCu;
        goto label_1677cc;
    }
    ctx->pc = 0x1677C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1677CCu);
        ctx->pc = 0x1677C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1677C4u;
            // 0x1677c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166F80u: goto label_166f80;
            case 0x166F84u: goto label_166f84;
            case 0x166F88u: goto label_166f88;
            case 0x166F8Cu: goto label_166f8c;
            case 0x166F90u: goto label_166f90;
            case 0x166F94u: goto label_166f94;
            case 0x166F98u: goto label_166f98;
            case 0x166F9Cu: goto label_166f9c;
            case 0x166FA0u: goto label_166fa0;
            case 0x166FA4u: goto label_166fa4;
            case 0x166FA8u: goto label_166fa8;
            case 0x166FACu: goto label_166fac;
            case 0x166FB0u: goto label_166fb0;
            case 0x166FB4u: goto label_166fb4;
            case 0x166FB8u: goto label_166fb8;
            case 0x166FBCu: goto label_166fbc;
            case 0x166FC0u: goto label_166fc0;
            case 0x166FC4u: goto label_166fc4;
            case 0x166FC8u: goto label_166fc8;
            case 0x166FCCu: goto label_166fcc;
            case 0x166FD0u: goto label_166fd0;
            case 0x166FD4u: goto label_166fd4;
            case 0x166FD8u: goto label_166fd8;
            case 0x166FDCu: goto label_166fdc;
            case 0x166FE0u: goto label_166fe0;
            case 0x166FE4u: goto label_166fe4;
            case 0x166FE8u: goto label_166fe8;
            case 0x166FECu: goto label_166fec;
            case 0x166FF0u: goto label_166ff0;
            case 0x166FF4u: goto label_166ff4;
            case 0x166FF8u: goto label_166ff8;
            case 0x166FFCu: goto label_166ffc;
            case 0x167000u: goto label_167000;
            case 0x167004u: goto label_167004;
            case 0x167008u: goto label_167008;
            case 0x16700Cu: goto label_16700c;
            case 0x167010u: goto label_167010;
            case 0x167014u: goto label_167014;
            case 0x167018u: goto label_167018;
            case 0x16701Cu: goto label_16701c;
            case 0x167020u: goto label_167020;
            case 0x167024u: goto label_167024;
            case 0x167028u: goto label_167028;
            case 0x16702Cu: goto label_16702c;
            case 0x167030u: goto label_167030;
            case 0x167034u: goto label_167034;
            case 0x167038u: goto label_167038;
            case 0x16703Cu: goto label_16703c;
            case 0x167040u: goto label_167040;
            case 0x167044u: goto label_167044;
            case 0x167048u: goto label_167048;
            case 0x16704Cu: goto label_16704c;
            case 0x167050u: goto label_167050;
            case 0x167054u: goto label_167054;
            case 0x167058u: goto label_167058;
            case 0x16705Cu: goto label_16705c;
            case 0x167060u: goto label_167060;
            case 0x167064u: goto label_167064;
            case 0x167068u: goto label_167068;
            case 0x16706Cu: goto label_16706c;
            case 0x167070u: goto label_167070;
            case 0x167074u: goto label_167074;
            case 0x167078u: goto label_167078;
            case 0x16707Cu: goto label_16707c;
            case 0x167080u: goto label_167080;
            case 0x167084u: goto label_167084;
            case 0x167088u: goto label_167088;
            case 0x16708Cu: goto label_16708c;
            case 0x167090u: goto label_167090;
            case 0x167094u: goto label_167094;
            case 0x167098u: goto label_167098;
            case 0x16709Cu: goto label_16709c;
            case 0x1670A0u: goto label_1670a0;
            case 0x1670A4u: goto label_1670a4;
            case 0x1670A8u: goto label_1670a8;
            case 0x1670ACu: goto label_1670ac;
            case 0x1670B0u: goto label_1670b0;
            case 0x1670B4u: goto label_1670b4;
            case 0x1670B8u: goto label_1670b8;
            case 0x1670BCu: goto label_1670bc;
            case 0x1670C0u: goto label_1670c0;
            case 0x1670C4u: goto label_1670c4;
            case 0x1670C8u: goto label_1670c8;
            case 0x1670CCu: goto label_1670cc;
            case 0x1670D0u: goto label_1670d0;
            case 0x1670D4u: goto label_1670d4;
            case 0x1670D8u: goto label_1670d8;
            case 0x1670DCu: goto label_1670dc;
            case 0x1670E0u: goto label_1670e0;
            case 0x1670E4u: goto label_1670e4;
            case 0x1670E8u: goto label_1670e8;
            case 0x1670ECu: goto label_1670ec;
            case 0x1670F0u: goto label_1670f0;
            case 0x1670F4u: goto label_1670f4;
            case 0x1670F8u: goto label_1670f8;
            case 0x1670FCu: goto label_1670fc;
            case 0x167100u: goto label_167100;
            case 0x167104u: goto label_167104;
            case 0x167108u: goto label_167108;
            case 0x16710Cu: goto label_16710c;
            case 0x167110u: goto label_167110;
            case 0x167114u: goto label_167114;
            case 0x167118u: goto label_167118;
            case 0x16711Cu: goto label_16711c;
            case 0x167120u: goto label_167120;
            case 0x167124u: goto label_167124;
            case 0x167128u: goto label_167128;
            case 0x16712Cu: goto label_16712c;
            case 0x167130u: goto label_167130;
            case 0x167134u: goto label_167134;
            case 0x167138u: goto label_167138;
            case 0x16713Cu: goto label_16713c;
            case 0x167140u: goto label_167140;
            case 0x167144u: goto label_167144;
            case 0x167148u: goto label_167148;
            case 0x16714Cu: goto label_16714c;
            case 0x167150u: goto label_167150;
            case 0x167154u: goto label_167154;
            case 0x167158u: goto label_167158;
            case 0x16715Cu: goto label_16715c;
            case 0x167160u: goto label_167160;
            case 0x167164u: goto label_167164;
            case 0x167168u: goto label_167168;
            case 0x16716Cu: goto label_16716c;
            case 0x167170u: goto label_167170;
            case 0x167174u: goto label_167174;
            case 0x167178u: goto label_167178;
            case 0x16717Cu: goto label_16717c;
            case 0x167180u: goto label_167180;
            case 0x167184u: goto label_167184;
            case 0x167188u: goto label_167188;
            case 0x16718Cu: goto label_16718c;
            case 0x167190u: goto label_167190;
            case 0x167194u: goto label_167194;
            case 0x167198u: goto label_167198;
            case 0x16719Cu: goto label_16719c;
            case 0x1671A0u: goto label_1671a0;
            case 0x1671A4u: goto label_1671a4;
            case 0x1671A8u: goto label_1671a8;
            case 0x1671ACu: goto label_1671ac;
            case 0x1671B0u: goto label_1671b0;
            case 0x1671B4u: goto label_1671b4;
            case 0x1671B8u: goto label_1671b8;
            case 0x1671BCu: goto label_1671bc;
            case 0x1671C0u: goto label_1671c0;
            case 0x1671C4u: goto label_1671c4;
            case 0x1671C8u: goto label_1671c8;
            case 0x1671CCu: goto label_1671cc;
            case 0x1671D0u: goto label_1671d0;
            case 0x1671D4u: goto label_1671d4;
            case 0x1671D8u: goto label_1671d8;
            case 0x1671DCu: goto label_1671dc;
            case 0x1671E0u: goto label_1671e0;
            case 0x1671E4u: goto label_1671e4;
            case 0x1671E8u: goto label_1671e8;
            case 0x1671ECu: goto label_1671ec;
            case 0x1671F0u: goto label_1671f0;
            case 0x1671F4u: goto label_1671f4;
            case 0x1671F8u: goto label_1671f8;
            case 0x1671FCu: goto label_1671fc;
            case 0x167200u: goto label_167200;
            case 0x167204u: goto label_167204;
            case 0x167208u: goto label_167208;
            case 0x16720Cu: goto label_16720c;
            case 0x167210u: goto label_167210;
            case 0x167214u: goto label_167214;
            case 0x167218u: goto label_167218;
            case 0x16721Cu: goto label_16721c;
            case 0x167220u: goto label_167220;
            case 0x167224u: goto label_167224;
            case 0x167228u: goto label_167228;
            case 0x16722Cu: goto label_16722c;
            case 0x167230u: goto label_167230;
            case 0x167234u: goto label_167234;
            case 0x167238u: goto label_167238;
            case 0x16723Cu: goto label_16723c;
            case 0x167240u: goto label_167240;
            case 0x167244u: goto label_167244;
            case 0x167248u: goto label_167248;
            case 0x16724Cu: goto label_16724c;
            case 0x167250u: goto label_167250;
            case 0x167254u: goto label_167254;
            case 0x167258u: goto label_167258;
            case 0x16725Cu: goto label_16725c;
            case 0x167260u: goto label_167260;
            case 0x167264u: goto label_167264;
            case 0x167268u: goto label_167268;
            case 0x16726Cu: goto label_16726c;
            case 0x167270u: goto label_167270;
            case 0x167274u: goto label_167274;
            case 0x167278u: goto label_167278;
            case 0x16727Cu: goto label_16727c;
            case 0x167280u: goto label_167280;
            case 0x167284u: goto label_167284;
            case 0x167288u: goto label_167288;
            case 0x16728Cu: goto label_16728c;
            case 0x167290u: goto label_167290;
            case 0x167294u: goto label_167294;
            case 0x167298u: goto label_167298;
            case 0x16729Cu: goto label_16729c;
            case 0x1672A0u: goto label_1672a0;
            case 0x1672A4u: goto label_1672a4;
            case 0x1672A8u: goto label_1672a8;
            case 0x1672ACu: goto label_1672ac;
            case 0x1672B0u: goto label_1672b0;
            case 0x1672B4u: goto label_1672b4;
            case 0x1672B8u: goto label_1672b8;
            case 0x1672BCu: goto label_1672bc;
            case 0x1672C0u: goto label_1672c0;
            case 0x1672C4u: goto label_1672c4;
            case 0x1672C8u: goto label_1672c8;
            case 0x1672CCu: goto label_1672cc;
            case 0x1672D0u: goto label_1672d0;
            case 0x1672D4u: goto label_1672d4;
            case 0x1672D8u: goto label_1672d8;
            case 0x1672DCu: goto label_1672dc;
            case 0x1672E0u: goto label_1672e0;
            case 0x1672E4u: goto label_1672e4;
            case 0x1672E8u: goto label_1672e8;
            case 0x1672ECu: goto label_1672ec;
            case 0x1672F0u: goto label_1672f0;
            case 0x1672F4u: goto label_1672f4;
            case 0x1672F8u: goto label_1672f8;
            case 0x1672FCu: goto label_1672fc;
            case 0x167300u: goto label_167300;
            case 0x167304u: goto label_167304;
            case 0x167308u: goto label_167308;
            case 0x16730Cu: goto label_16730c;
            case 0x167310u: goto label_167310;
            case 0x167314u: goto label_167314;
            case 0x167318u: goto label_167318;
            case 0x16731Cu: goto label_16731c;
            case 0x167320u: goto label_167320;
            case 0x167324u: goto label_167324;
            case 0x167328u: goto label_167328;
            case 0x16732Cu: goto label_16732c;
            case 0x167330u: goto label_167330;
            case 0x167334u: goto label_167334;
            case 0x167338u: goto label_167338;
            case 0x16733Cu: goto label_16733c;
            case 0x167340u: goto label_167340;
            case 0x167344u: goto label_167344;
            case 0x167348u: goto label_167348;
            case 0x16734Cu: goto label_16734c;
            case 0x167350u: goto label_167350;
            case 0x167354u: goto label_167354;
            case 0x167358u: goto label_167358;
            case 0x16735Cu: goto label_16735c;
            case 0x167360u: goto label_167360;
            case 0x167364u: goto label_167364;
            case 0x167368u: goto label_167368;
            case 0x16736Cu: goto label_16736c;
            case 0x167370u: goto label_167370;
            case 0x167374u: goto label_167374;
            case 0x167378u: goto label_167378;
            case 0x16737Cu: goto label_16737c;
            case 0x167380u: goto label_167380;
            case 0x167384u: goto label_167384;
            case 0x167388u: goto label_167388;
            case 0x16738Cu: goto label_16738c;
            case 0x167390u: goto label_167390;
            case 0x167394u: goto label_167394;
            case 0x167398u: goto label_167398;
            case 0x16739Cu: goto label_16739c;
            case 0x1673A0u: goto label_1673a0;
            case 0x1673A4u: goto label_1673a4;
            case 0x1673A8u: goto label_1673a8;
            case 0x1673ACu: goto label_1673ac;
            case 0x1673B0u: goto label_1673b0;
            case 0x1673B4u: goto label_1673b4;
            case 0x1673B8u: goto label_1673b8;
            case 0x1673BCu: goto label_1673bc;
            case 0x1673C0u: goto label_1673c0;
            case 0x1673C4u: goto label_1673c4;
            case 0x1673C8u: goto label_1673c8;
            case 0x1673CCu: goto label_1673cc;
            case 0x1673D0u: goto label_1673d0;
            case 0x1673D4u: goto label_1673d4;
            case 0x1673D8u: goto label_1673d8;
            case 0x1673DCu: goto label_1673dc;
            case 0x1673E0u: goto label_1673e0;
            case 0x1673E4u: goto label_1673e4;
            case 0x1673E8u: goto label_1673e8;
            case 0x1673ECu: goto label_1673ec;
            case 0x1673F0u: goto label_1673f0;
            case 0x1673F4u: goto label_1673f4;
            case 0x1673F8u: goto label_1673f8;
            case 0x1673FCu: goto label_1673fc;
            case 0x167400u: goto label_167400;
            case 0x167404u: goto label_167404;
            case 0x167408u: goto label_167408;
            case 0x16740Cu: goto label_16740c;
            case 0x167410u: goto label_167410;
            case 0x167414u: goto label_167414;
            case 0x167418u: goto label_167418;
            case 0x16741Cu: goto label_16741c;
            case 0x167420u: goto label_167420;
            case 0x167424u: goto label_167424;
            case 0x167428u: goto label_167428;
            case 0x16742Cu: goto label_16742c;
            case 0x167430u: goto label_167430;
            case 0x167434u: goto label_167434;
            case 0x167438u: goto label_167438;
            case 0x16743Cu: goto label_16743c;
            case 0x167440u: goto label_167440;
            case 0x167444u: goto label_167444;
            case 0x167448u: goto label_167448;
            case 0x16744Cu: goto label_16744c;
            case 0x167450u: goto label_167450;
            case 0x167454u: goto label_167454;
            case 0x167458u: goto label_167458;
            case 0x16745Cu: goto label_16745c;
            case 0x167460u: goto label_167460;
            case 0x167464u: goto label_167464;
            case 0x167468u: goto label_167468;
            case 0x16746Cu: goto label_16746c;
            case 0x167470u: goto label_167470;
            case 0x167474u: goto label_167474;
            case 0x167478u: goto label_167478;
            case 0x16747Cu: goto label_16747c;
            case 0x167480u: goto label_167480;
            case 0x167484u: goto label_167484;
            case 0x167488u: goto label_167488;
            case 0x16748Cu: goto label_16748c;
            case 0x167490u: goto label_167490;
            case 0x167494u: goto label_167494;
            case 0x167498u: goto label_167498;
            case 0x16749Cu: goto label_16749c;
            case 0x1674A0u: goto label_1674a0;
            case 0x1674A4u: goto label_1674a4;
            case 0x1674A8u: goto label_1674a8;
            case 0x1674ACu: goto label_1674ac;
            case 0x1674B0u: goto label_1674b0;
            case 0x1674B4u: goto label_1674b4;
            case 0x1674B8u: goto label_1674b8;
            case 0x1674BCu: goto label_1674bc;
            case 0x1674C0u: goto label_1674c0;
            case 0x1674C4u: goto label_1674c4;
            case 0x1674C8u: goto label_1674c8;
            case 0x1674CCu: goto label_1674cc;
            case 0x1674D0u: goto label_1674d0;
            case 0x1674D4u: goto label_1674d4;
            case 0x1674D8u: goto label_1674d8;
            case 0x1674DCu: goto label_1674dc;
            case 0x1674E0u: goto label_1674e0;
            case 0x1674E4u: goto label_1674e4;
            case 0x1674E8u: goto label_1674e8;
            case 0x1674ECu: goto label_1674ec;
            case 0x1674F0u: goto label_1674f0;
            case 0x1674F4u: goto label_1674f4;
            case 0x1674F8u: goto label_1674f8;
            case 0x1674FCu: goto label_1674fc;
            case 0x167500u: goto label_167500;
            case 0x167504u: goto label_167504;
            case 0x167508u: goto label_167508;
            case 0x16750Cu: goto label_16750c;
            case 0x167510u: goto label_167510;
            case 0x167514u: goto label_167514;
            case 0x167518u: goto label_167518;
            case 0x16751Cu: goto label_16751c;
            case 0x167520u: goto label_167520;
            case 0x167524u: goto label_167524;
            case 0x167528u: goto label_167528;
            case 0x16752Cu: goto label_16752c;
            case 0x167530u: goto label_167530;
            case 0x167534u: goto label_167534;
            case 0x167538u: goto label_167538;
            case 0x16753Cu: goto label_16753c;
            case 0x167540u: goto label_167540;
            case 0x167544u: goto label_167544;
            case 0x167548u: goto label_167548;
            case 0x16754Cu: goto label_16754c;
            case 0x167550u: goto label_167550;
            case 0x167554u: goto label_167554;
            case 0x167558u: goto label_167558;
            case 0x16755Cu: goto label_16755c;
            case 0x167560u: goto label_167560;
            case 0x167564u: goto label_167564;
            case 0x167568u: goto label_167568;
            case 0x16756Cu: goto label_16756c;
            case 0x167570u: goto label_167570;
            case 0x167574u: goto label_167574;
            case 0x167578u: goto label_167578;
            case 0x16757Cu: goto label_16757c;
            case 0x167580u: goto label_167580;
            case 0x167584u: goto label_167584;
            case 0x167588u: goto label_167588;
            case 0x16758Cu: goto label_16758c;
            case 0x167590u: goto label_167590;
            case 0x167594u: goto label_167594;
            case 0x167598u: goto label_167598;
            case 0x16759Cu: goto label_16759c;
            case 0x1675A0u: goto label_1675a0;
            case 0x1675A4u: goto label_1675a4;
            case 0x1675A8u: goto label_1675a8;
            case 0x1675ACu: goto label_1675ac;
            case 0x1675B0u: goto label_1675b0;
            case 0x1675B4u: goto label_1675b4;
            case 0x1675B8u: goto label_1675b8;
            case 0x1675BCu: goto label_1675bc;
            case 0x1675C0u: goto label_1675c0;
            case 0x1675C4u: goto label_1675c4;
            case 0x1675C8u: goto label_1675c8;
            case 0x1675CCu: goto label_1675cc;
            case 0x1675D0u: goto label_1675d0;
            case 0x1675D4u: goto label_1675d4;
            case 0x1675D8u: goto label_1675d8;
            case 0x1675DCu: goto label_1675dc;
            case 0x1675E0u: goto label_1675e0;
            case 0x1675E4u: goto label_1675e4;
            case 0x1675E8u: goto label_1675e8;
            case 0x1675ECu: goto label_1675ec;
            case 0x1675F0u: goto label_1675f0;
            case 0x1675F4u: goto label_1675f4;
            case 0x1675F8u: goto label_1675f8;
            case 0x1675FCu: goto label_1675fc;
            case 0x167600u: goto label_167600;
            case 0x167604u: goto label_167604;
            case 0x167608u: goto label_167608;
            case 0x16760Cu: goto label_16760c;
            case 0x167610u: goto label_167610;
            case 0x167614u: goto label_167614;
            case 0x167618u: goto label_167618;
            case 0x16761Cu: goto label_16761c;
            case 0x167620u: goto label_167620;
            case 0x167624u: goto label_167624;
            case 0x167628u: goto label_167628;
            case 0x16762Cu: goto label_16762c;
            case 0x167630u: goto label_167630;
            case 0x167634u: goto label_167634;
            case 0x167638u: goto label_167638;
            case 0x16763Cu: goto label_16763c;
            case 0x167640u: goto label_167640;
            case 0x167644u: goto label_167644;
            case 0x167648u: goto label_167648;
            case 0x16764Cu: goto label_16764c;
            case 0x167650u: goto label_167650;
            case 0x167654u: goto label_167654;
            case 0x167658u: goto label_167658;
            case 0x16765Cu: goto label_16765c;
            case 0x167660u: goto label_167660;
            case 0x167664u: goto label_167664;
            case 0x167668u: goto label_167668;
            case 0x16766Cu: goto label_16766c;
            case 0x167670u: goto label_167670;
            case 0x167674u: goto label_167674;
            case 0x167678u: goto label_167678;
            case 0x16767Cu: goto label_16767c;
            case 0x167680u: goto label_167680;
            case 0x167684u: goto label_167684;
            case 0x167688u: goto label_167688;
            case 0x16768Cu: goto label_16768c;
            case 0x167690u: goto label_167690;
            case 0x167694u: goto label_167694;
            case 0x167698u: goto label_167698;
            case 0x16769Cu: goto label_16769c;
            case 0x1676A0u: goto label_1676a0;
            case 0x1676A4u: goto label_1676a4;
            case 0x1676A8u: goto label_1676a8;
            case 0x1676ACu: goto label_1676ac;
            case 0x1676B0u: goto label_1676b0;
            case 0x1676B4u: goto label_1676b4;
            case 0x1676B8u: goto label_1676b8;
            case 0x1676BCu: goto label_1676bc;
            case 0x1676C0u: goto label_1676c0;
            case 0x1676C4u: goto label_1676c4;
            case 0x1676C8u: goto label_1676c8;
            case 0x1676CCu: goto label_1676cc;
            case 0x1676D0u: goto label_1676d0;
            case 0x1676D4u: goto label_1676d4;
            case 0x1676D8u: goto label_1676d8;
            case 0x1676DCu: goto label_1676dc;
            case 0x1676E0u: goto label_1676e0;
            case 0x1676E4u: goto label_1676e4;
            case 0x1676E8u: goto label_1676e8;
            case 0x1676ECu: goto label_1676ec;
            case 0x1676F0u: goto label_1676f0;
            case 0x1676F4u: goto label_1676f4;
            case 0x1676F8u: goto label_1676f8;
            case 0x1676FCu: goto label_1676fc;
            case 0x167700u: goto label_167700;
            case 0x167704u: goto label_167704;
            case 0x167708u: goto label_167708;
            case 0x16770Cu: goto label_16770c;
            case 0x167710u: goto label_167710;
            case 0x167714u: goto label_167714;
            case 0x167718u: goto label_167718;
            case 0x16771Cu: goto label_16771c;
            case 0x167720u: goto label_167720;
            case 0x167724u: goto label_167724;
            case 0x167728u: goto label_167728;
            case 0x16772Cu: goto label_16772c;
            case 0x167730u: goto label_167730;
            case 0x167734u: goto label_167734;
            case 0x167738u: goto label_167738;
            case 0x16773Cu: goto label_16773c;
            case 0x167740u: goto label_167740;
            case 0x167744u: goto label_167744;
            case 0x167748u: goto label_167748;
            case 0x16774Cu: goto label_16774c;
            case 0x167750u: goto label_167750;
            case 0x167754u: goto label_167754;
            case 0x167758u: goto label_167758;
            case 0x16775Cu: goto label_16775c;
            case 0x167760u: goto label_167760;
            case 0x167764u: goto label_167764;
            case 0x167768u: goto label_167768;
            case 0x16776Cu: goto label_16776c;
            case 0x167770u: goto label_167770;
            case 0x167774u: goto label_167774;
            case 0x167778u: goto label_167778;
            case 0x16777Cu: goto label_16777c;
            case 0x167780u: goto label_167780;
            case 0x167784u: goto label_167784;
            case 0x167788u: goto label_167788;
            case 0x16778Cu: goto label_16778c;
            case 0x167790u: goto label_167790;
            case 0x167794u: goto label_167794;
            case 0x167798u: goto label_167798;
            case 0x16779Cu: goto label_16779c;
            case 0x1677A0u: goto label_1677a0;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677A8u: goto label_1677a8;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B0u: goto label_1677b0;
            case 0x1677B4u: goto label_1677b4;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677BCu: goto label_1677bc;
            case 0x1677C0u: goto label_1677c0;
            case 0x1677C4u: goto label_1677c4;
            case 0x1677C8u: goto label_1677c8;
            case 0x1677CCu: goto label_1677cc;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677D4u: goto label_1677d4;
            case 0x1677D8u: goto label_1677d8;
            case 0x1677DCu: goto label_1677dc;
            case 0x1677E0u: goto label_1677e0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677E8u: goto label_1677e8;
            case 0x1677ECu: goto label_1677ec;
            case 0x1677F0u: goto label_1677f0;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677F8u: goto label_1677f8;
            case 0x1677FCu: goto label_1677fc;
            case 0x167800u: goto label_167800;
            case 0x167804u: goto label_167804;
            case 0x167808u: goto label_167808;
            case 0x16780Cu: goto label_16780c;
            case 0x167810u: goto label_167810;
            case 0x167814u: goto label_167814;
            case 0x167818u: goto label_167818;
            case 0x16781Cu: goto label_16781c;
            case 0x167820u: goto label_167820;
            case 0x167824u: goto label_167824;
            case 0x167828u: goto label_167828;
            case 0x16782Cu: goto label_16782c;
            case 0x167830u: goto label_167830;
            case 0x167834u: goto label_167834;
            case 0x167838u: goto label_167838;
            case 0x16783Cu: goto label_16783c;
            case 0x167840u: goto label_167840;
            case 0x167844u: goto label_167844;
            case 0x167848u: goto label_167848;
            case 0x16784Cu: goto label_16784c;
            case 0x167850u: goto label_167850;
            case 0x167854u: goto label_167854;
            case 0x167858u: goto label_167858;
            case 0x16785Cu: goto label_16785c;
            case 0x167860u: goto label_167860;
            case 0x167864u: goto label_167864;
            case 0x167868u: goto label_167868;
            case 0x16786Cu: goto label_16786c;
            case 0x167870u: goto label_167870;
            case 0x167874u: goto label_167874;
            case 0x167878u: goto label_167878;
            case 0x16787Cu: goto label_16787c;
            case 0x167880u: goto label_167880;
            case 0x167884u: goto label_167884;
            case 0x167888u: goto label_167888;
            case 0x16788Cu: goto label_16788c;
            case 0x167890u: goto label_167890;
            case 0x167894u: goto label_167894;
            case 0x167898u: goto label_167898;
            case 0x16789Cu: goto label_16789c;
            case 0x1678A0u: goto label_1678a0;
            case 0x1678A4u: goto label_1678a4;
            case 0x1678A8u: goto label_1678a8;
            case 0x1678ACu: goto label_1678ac;
            case 0x1678B0u: goto label_1678b0;
            case 0x1678B4u: goto label_1678b4;
            case 0x1678B8u: goto label_1678b8;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678C0u: goto label_1678c0;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678C8u: goto label_1678c8;
            case 0x1678CCu: goto label_1678cc;
            case 0x1678D0u: goto label_1678d0;
            case 0x1678D4u: goto label_1678d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1677CCu; }
            if (ctx->pc != 0x1677CCu) { return; }
        }
    }
    ctx->pc = 0x1677CCu;
label_1677cc:
    // 0x1677cc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1677d0:
    if (ctx->pc == 0x1677D0u) {
        ctx->pc = 0x1677D4u;
        goto label_1677d4;
    }
    ctx->pc = 0x1677CCu;
    {
        const bool branch_taken_0x1677cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1677cc) {
            ctx->pc = 0x1678C8u;
            goto label_1678c8;
        }
    }
    ctx->pc = 0x1677D4u;
label_1677d4:
    // 0x1677d4: 0x0  nop
    ctx->pc = 0x1677d4u;
    // NOP
label_1677d8:
    // 0x1677d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1677d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1677dc:
    // 0x1677dc: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1677e0:
    if (ctx->pc == 0x1677E0u) {
        ctx->pc = 0x1677E4u;
        goto label_1677e4;
    }
    ctx->pc = 0x1677DCu;
    {
        const bool branch_taken_0x1677dc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1677dc) {
            ctx->pc = 0x1678A8u;
            goto label_1678a8;
        }
    }
    ctx->pc = 0x1677E4u;
label_1677e4:
    // 0x1677e4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1677e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1677e8:
    // 0x1677e8: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1677e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1677ec:
    // 0x1677ec: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1677ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1677f0:
    // 0x1677f0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1677f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1677f4:
    // 0x1677f4: 0xc05d080  jal         func_174200
label_1677f8:
    if (ctx->pc == 0x1677F8u) {
        ctx->pc = 0x1677F8u;
            // 0x1677f8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1677FCu;
        goto label_1677fc;
    }
    ctx->pc = 0x1677F4u;
    SET_GPR_U32(ctx, 31, 0x1677FCu);
    ctx->pc = 0x1677F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1677F4u;
            // 0x1677f8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1677FCu; }
        if (ctx->pc != 0x1677FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1677FCu; }
        if (ctx->pc != 0x1677FCu) { return; }
    }
    ctx->pc = 0x1677FCu;
label_1677fc:
    // 0x1677fc: 0xc050bb4  jal         func_142ED0
label_167800:
    if (ctx->pc == 0x167800u) {
        ctx->pc = 0x167804u;
        goto label_167804;
    }
    ctx->pc = 0x1677FCu;
    SET_GPR_U32(ctx, 31, 0x167804u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167804u; }
        if (ctx->pc != 0x167804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167804u; }
        if (ctx->pc != 0x167804u) { return; }
    }
    ctx->pc = 0x167804u;
label_167804:
    // 0x167804: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x167804u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_167808:
    // 0x167808: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16780c:
    if (ctx->pc == 0x16780Cu) {
        ctx->pc = 0x167810u;
        goto label_167810;
    }
    ctx->pc = 0x167808u;
    {
        const bool branch_taken_0x167808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167808) {
            ctx->pc = 0x167828u;
            goto label_167828;
        }
    }
    ctx->pc = 0x167810u;
label_167810:
    // 0x167810: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x167810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167814:
    // 0x167814: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x167814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_167818:
    // 0x167818: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x167818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16781c:
    // 0x16781c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x16781cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_167820:
    // 0x167820: 0xc05d080  jal         func_174200
label_167824:
    if (ctx->pc == 0x167824u) {
        ctx->pc = 0x167824u;
            // 0x167824: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x167828u;
        goto label_167828;
    }
    ctx->pc = 0x167820u;
    SET_GPR_U32(ctx, 31, 0x167828u);
    ctx->pc = 0x167824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167820u;
            // 0x167824: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167828u; }
        if (ctx->pc != 0x167828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167828u; }
        if (ctx->pc != 0x167828u) { return; }
    }
    ctx->pc = 0x167828u;
label_167828:
    // 0x167828: 0xc050bb4  jal         func_142ED0
label_16782c:
    if (ctx->pc == 0x16782Cu) {
        ctx->pc = 0x167830u;
        goto label_167830;
    }
    ctx->pc = 0x167828u;
    SET_GPR_U32(ctx, 31, 0x167830u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167830u; }
        if (ctx->pc != 0x167830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167830u; }
        if (ctx->pc != 0x167830u) { return; }
    }
    ctx->pc = 0x167830u;
label_167830:
    // 0x167830: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x167830u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_167834:
    // 0x167834: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_167838:
    if (ctx->pc == 0x167838u) {
        ctx->pc = 0x16783Cu;
        goto label_16783c;
    }
    ctx->pc = 0x167834u;
    {
        const bool branch_taken_0x167834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167834) {
            ctx->pc = 0x167858u;
            goto label_167858;
        }
    }
    ctx->pc = 0x16783Cu;
label_16783c:
    // 0x16783c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x16783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167840:
    // 0x167840: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x167840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_167844:
    // 0x167844: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x167844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167848:
    // 0x167848: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x167848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_16784c:
    // 0x16784c: 0xc05d080  jal         func_174200
label_167850:
    if (ctx->pc == 0x167850u) {
        ctx->pc = 0x167850u;
            // 0x167850: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x167854u;
        goto label_167854;
    }
    ctx->pc = 0x16784Cu;
    SET_GPR_U32(ctx, 31, 0x167854u);
    ctx->pc = 0x167850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16784Cu;
            // 0x167850: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167854u; }
        if (ctx->pc != 0x167854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167854u; }
        if (ctx->pc != 0x167854u) { return; }
    }
    ctx->pc = 0x167854u;
label_167854:
    // 0x167854: 0x0  nop
    ctx->pc = 0x167854u;
    // NOP
label_167858:
    // 0x167858: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x167858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_16785c:
    // 0x16785c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x16785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167860:
    // 0x167860: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x167860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_167864:
    // 0x167864: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x167864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167868:
    // 0x167868: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x167868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_16786c:
    // 0x16786c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16786cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_167870:
    // 0x167870: 0x0  nop
    ctx->pc = 0x167870u;
    // NOP
label_167874:
    // 0x167874: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x167874u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_167878:
    // 0x167878: 0xc053740  jal         func_14DD00
label_16787c:
    if (ctx->pc == 0x16787Cu) {
        ctx->pc = 0x16787Cu;
            // 0x16787c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x167880u;
        goto label_167880;
    }
    ctx->pc = 0x167878u;
    SET_GPR_U32(ctx, 31, 0x167880u);
    ctx->pc = 0x16787Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167878u;
            // 0x16787c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167880u; }
        if (ctx->pc != 0x167880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167880u; }
        if (ctx->pc != 0x167880u) { return; }
    }
    ctx->pc = 0x167880u;
label_167880:
    // 0x167880: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x167880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_167884:
    // 0x167884: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x167884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_167888:
    // 0x167888: 0xc07b0fc  jal         func_1EC3F0
label_16788c:
    if (ctx->pc == 0x16788Cu) {
        ctx->pc = 0x16788Cu;
            // 0x16788c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167890u;
        goto label_167890;
    }
    ctx->pc = 0x167888u;
    SET_GPR_U32(ctx, 31, 0x167890u);
    ctx->pc = 0x16788Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167888u;
            // 0x16788c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167890u; }
        if (ctx->pc != 0x167890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167890u; }
        if (ctx->pc != 0x167890u) { return; }
    }
    ctx->pc = 0x167890u;
label_167890:
    // 0x167890: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x167890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_167894:
    // 0x167894: 0x40f809  jalr        $v0
label_167898:
    if (ctx->pc == 0x167898u) {
        ctx->pc = 0x167898u;
            // 0x167898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16789Cu;
        goto label_16789c;
    }
    ctx->pc = 0x167894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16789Cu);
        ctx->pc = 0x167898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167894u;
            // 0x167898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166F80u: goto label_166f80;
            case 0x166F84u: goto label_166f84;
            case 0x166F88u: goto label_166f88;
            case 0x166F8Cu: goto label_166f8c;
            case 0x166F90u: goto label_166f90;
            case 0x166F94u: goto label_166f94;
            case 0x166F98u: goto label_166f98;
            case 0x166F9Cu: goto label_166f9c;
            case 0x166FA0u: goto label_166fa0;
            case 0x166FA4u: goto label_166fa4;
            case 0x166FA8u: goto label_166fa8;
            case 0x166FACu: goto label_166fac;
            case 0x166FB0u: goto label_166fb0;
            case 0x166FB4u: goto label_166fb4;
            case 0x166FB8u: goto label_166fb8;
            case 0x166FBCu: goto label_166fbc;
            case 0x166FC0u: goto label_166fc0;
            case 0x166FC4u: goto label_166fc4;
            case 0x166FC8u: goto label_166fc8;
            case 0x166FCCu: goto label_166fcc;
            case 0x166FD0u: goto label_166fd0;
            case 0x166FD4u: goto label_166fd4;
            case 0x166FD8u: goto label_166fd8;
            case 0x166FDCu: goto label_166fdc;
            case 0x166FE0u: goto label_166fe0;
            case 0x166FE4u: goto label_166fe4;
            case 0x166FE8u: goto label_166fe8;
            case 0x166FECu: goto label_166fec;
            case 0x166FF0u: goto label_166ff0;
            case 0x166FF4u: goto label_166ff4;
            case 0x166FF8u: goto label_166ff8;
            case 0x166FFCu: goto label_166ffc;
            case 0x167000u: goto label_167000;
            case 0x167004u: goto label_167004;
            case 0x167008u: goto label_167008;
            case 0x16700Cu: goto label_16700c;
            case 0x167010u: goto label_167010;
            case 0x167014u: goto label_167014;
            case 0x167018u: goto label_167018;
            case 0x16701Cu: goto label_16701c;
            case 0x167020u: goto label_167020;
            case 0x167024u: goto label_167024;
            case 0x167028u: goto label_167028;
            case 0x16702Cu: goto label_16702c;
            case 0x167030u: goto label_167030;
            case 0x167034u: goto label_167034;
            case 0x167038u: goto label_167038;
            case 0x16703Cu: goto label_16703c;
            case 0x167040u: goto label_167040;
            case 0x167044u: goto label_167044;
            case 0x167048u: goto label_167048;
            case 0x16704Cu: goto label_16704c;
            case 0x167050u: goto label_167050;
            case 0x167054u: goto label_167054;
            case 0x167058u: goto label_167058;
            case 0x16705Cu: goto label_16705c;
            case 0x167060u: goto label_167060;
            case 0x167064u: goto label_167064;
            case 0x167068u: goto label_167068;
            case 0x16706Cu: goto label_16706c;
            case 0x167070u: goto label_167070;
            case 0x167074u: goto label_167074;
            case 0x167078u: goto label_167078;
            case 0x16707Cu: goto label_16707c;
            case 0x167080u: goto label_167080;
            case 0x167084u: goto label_167084;
            case 0x167088u: goto label_167088;
            case 0x16708Cu: goto label_16708c;
            case 0x167090u: goto label_167090;
            case 0x167094u: goto label_167094;
            case 0x167098u: goto label_167098;
            case 0x16709Cu: goto label_16709c;
            case 0x1670A0u: goto label_1670a0;
            case 0x1670A4u: goto label_1670a4;
            case 0x1670A8u: goto label_1670a8;
            case 0x1670ACu: goto label_1670ac;
            case 0x1670B0u: goto label_1670b0;
            case 0x1670B4u: goto label_1670b4;
            case 0x1670B8u: goto label_1670b8;
            case 0x1670BCu: goto label_1670bc;
            case 0x1670C0u: goto label_1670c0;
            case 0x1670C4u: goto label_1670c4;
            case 0x1670C8u: goto label_1670c8;
            case 0x1670CCu: goto label_1670cc;
            case 0x1670D0u: goto label_1670d0;
            case 0x1670D4u: goto label_1670d4;
            case 0x1670D8u: goto label_1670d8;
            case 0x1670DCu: goto label_1670dc;
            case 0x1670E0u: goto label_1670e0;
            case 0x1670E4u: goto label_1670e4;
            case 0x1670E8u: goto label_1670e8;
            case 0x1670ECu: goto label_1670ec;
            case 0x1670F0u: goto label_1670f0;
            case 0x1670F4u: goto label_1670f4;
            case 0x1670F8u: goto label_1670f8;
            case 0x1670FCu: goto label_1670fc;
            case 0x167100u: goto label_167100;
            case 0x167104u: goto label_167104;
            case 0x167108u: goto label_167108;
            case 0x16710Cu: goto label_16710c;
            case 0x167110u: goto label_167110;
            case 0x167114u: goto label_167114;
            case 0x167118u: goto label_167118;
            case 0x16711Cu: goto label_16711c;
            case 0x167120u: goto label_167120;
            case 0x167124u: goto label_167124;
            case 0x167128u: goto label_167128;
            case 0x16712Cu: goto label_16712c;
            case 0x167130u: goto label_167130;
            case 0x167134u: goto label_167134;
            case 0x167138u: goto label_167138;
            case 0x16713Cu: goto label_16713c;
            case 0x167140u: goto label_167140;
            case 0x167144u: goto label_167144;
            case 0x167148u: goto label_167148;
            case 0x16714Cu: goto label_16714c;
            case 0x167150u: goto label_167150;
            case 0x167154u: goto label_167154;
            case 0x167158u: goto label_167158;
            case 0x16715Cu: goto label_16715c;
            case 0x167160u: goto label_167160;
            case 0x167164u: goto label_167164;
            case 0x167168u: goto label_167168;
            case 0x16716Cu: goto label_16716c;
            case 0x167170u: goto label_167170;
            case 0x167174u: goto label_167174;
            case 0x167178u: goto label_167178;
            case 0x16717Cu: goto label_16717c;
            case 0x167180u: goto label_167180;
            case 0x167184u: goto label_167184;
            case 0x167188u: goto label_167188;
            case 0x16718Cu: goto label_16718c;
            case 0x167190u: goto label_167190;
            case 0x167194u: goto label_167194;
            case 0x167198u: goto label_167198;
            case 0x16719Cu: goto label_16719c;
            case 0x1671A0u: goto label_1671a0;
            case 0x1671A4u: goto label_1671a4;
            case 0x1671A8u: goto label_1671a8;
            case 0x1671ACu: goto label_1671ac;
            case 0x1671B0u: goto label_1671b0;
            case 0x1671B4u: goto label_1671b4;
            case 0x1671B8u: goto label_1671b8;
            case 0x1671BCu: goto label_1671bc;
            case 0x1671C0u: goto label_1671c0;
            case 0x1671C4u: goto label_1671c4;
            case 0x1671C8u: goto label_1671c8;
            case 0x1671CCu: goto label_1671cc;
            case 0x1671D0u: goto label_1671d0;
            case 0x1671D4u: goto label_1671d4;
            case 0x1671D8u: goto label_1671d8;
            case 0x1671DCu: goto label_1671dc;
            case 0x1671E0u: goto label_1671e0;
            case 0x1671E4u: goto label_1671e4;
            case 0x1671E8u: goto label_1671e8;
            case 0x1671ECu: goto label_1671ec;
            case 0x1671F0u: goto label_1671f0;
            case 0x1671F4u: goto label_1671f4;
            case 0x1671F8u: goto label_1671f8;
            case 0x1671FCu: goto label_1671fc;
            case 0x167200u: goto label_167200;
            case 0x167204u: goto label_167204;
            case 0x167208u: goto label_167208;
            case 0x16720Cu: goto label_16720c;
            case 0x167210u: goto label_167210;
            case 0x167214u: goto label_167214;
            case 0x167218u: goto label_167218;
            case 0x16721Cu: goto label_16721c;
            case 0x167220u: goto label_167220;
            case 0x167224u: goto label_167224;
            case 0x167228u: goto label_167228;
            case 0x16722Cu: goto label_16722c;
            case 0x167230u: goto label_167230;
            case 0x167234u: goto label_167234;
            case 0x167238u: goto label_167238;
            case 0x16723Cu: goto label_16723c;
            case 0x167240u: goto label_167240;
            case 0x167244u: goto label_167244;
            case 0x167248u: goto label_167248;
            case 0x16724Cu: goto label_16724c;
            case 0x167250u: goto label_167250;
            case 0x167254u: goto label_167254;
            case 0x167258u: goto label_167258;
            case 0x16725Cu: goto label_16725c;
            case 0x167260u: goto label_167260;
            case 0x167264u: goto label_167264;
            case 0x167268u: goto label_167268;
            case 0x16726Cu: goto label_16726c;
            case 0x167270u: goto label_167270;
            case 0x167274u: goto label_167274;
            case 0x167278u: goto label_167278;
            case 0x16727Cu: goto label_16727c;
            case 0x167280u: goto label_167280;
            case 0x167284u: goto label_167284;
            case 0x167288u: goto label_167288;
            case 0x16728Cu: goto label_16728c;
            case 0x167290u: goto label_167290;
            case 0x167294u: goto label_167294;
            case 0x167298u: goto label_167298;
            case 0x16729Cu: goto label_16729c;
            case 0x1672A0u: goto label_1672a0;
            case 0x1672A4u: goto label_1672a4;
            case 0x1672A8u: goto label_1672a8;
            case 0x1672ACu: goto label_1672ac;
            case 0x1672B0u: goto label_1672b0;
            case 0x1672B4u: goto label_1672b4;
            case 0x1672B8u: goto label_1672b8;
            case 0x1672BCu: goto label_1672bc;
            case 0x1672C0u: goto label_1672c0;
            case 0x1672C4u: goto label_1672c4;
            case 0x1672C8u: goto label_1672c8;
            case 0x1672CCu: goto label_1672cc;
            case 0x1672D0u: goto label_1672d0;
            case 0x1672D4u: goto label_1672d4;
            case 0x1672D8u: goto label_1672d8;
            case 0x1672DCu: goto label_1672dc;
            case 0x1672E0u: goto label_1672e0;
            case 0x1672E4u: goto label_1672e4;
            case 0x1672E8u: goto label_1672e8;
            case 0x1672ECu: goto label_1672ec;
            case 0x1672F0u: goto label_1672f0;
            case 0x1672F4u: goto label_1672f4;
            case 0x1672F8u: goto label_1672f8;
            case 0x1672FCu: goto label_1672fc;
            case 0x167300u: goto label_167300;
            case 0x167304u: goto label_167304;
            case 0x167308u: goto label_167308;
            case 0x16730Cu: goto label_16730c;
            case 0x167310u: goto label_167310;
            case 0x167314u: goto label_167314;
            case 0x167318u: goto label_167318;
            case 0x16731Cu: goto label_16731c;
            case 0x167320u: goto label_167320;
            case 0x167324u: goto label_167324;
            case 0x167328u: goto label_167328;
            case 0x16732Cu: goto label_16732c;
            case 0x167330u: goto label_167330;
            case 0x167334u: goto label_167334;
            case 0x167338u: goto label_167338;
            case 0x16733Cu: goto label_16733c;
            case 0x167340u: goto label_167340;
            case 0x167344u: goto label_167344;
            case 0x167348u: goto label_167348;
            case 0x16734Cu: goto label_16734c;
            case 0x167350u: goto label_167350;
            case 0x167354u: goto label_167354;
            case 0x167358u: goto label_167358;
            case 0x16735Cu: goto label_16735c;
            case 0x167360u: goto label_167360;
            case 0x167364u: goto label_167364;
            case 0x167368u: goto label_167368;
            case 0x16736Cu: goto label_16736c;
            case 0x167370u: goto label_167370;
            case 0x167374u: goto label_167374;
            case 0x167378u: goto label_167378;
            case 0x16737Cu: goto label_16737c;
            case 0x167380u: goto label_167380;
            case 0x167384u: goto label_167384;
            case 0x167388u: goto label_167388;
            case 0x16738Cu: goto label_16738c;
            case 0x167390u: goto label_167390;
            case 0x167394u: goto label_167394;
            case 0x167398u: goto label_167398;
            case 0x16739Cu: goto label_16739c;
            case 0x1673A0u: goto label_1673a0;
            case 0x1673A4u: goto label_1673a4;
            case 0x1673A8u: goto label_1673a8;
            case 0x1673ACu: goto label_1673ac;
            case 0x1673B0u: goto label_1673b0;
            case 0x1673B4u: goto label_1673b4;
            case 0x1673B8u: goto label_1673b8;
            case 0x1673BCu: goto label_1673bc;
            case 0x1673C0u: goto label_1673c0;
            case 0x1673C4u: goto label_1673c4;
            case 0x1673C8u: goto label_1673c8;
            case 0x1673CCu: goto label_1673cc;
            case 0x1673D0u: goto label_1673d0;
            case 0x1673D4u: goto label_1673d4;
            case 0x1673D8u: goto label_1673d8;
            case 0x1673DCu: goto label_1673dc;
            case 0x1673E0u: goto label_1673e0;
            case 0x1673E4u: goto label_1673e4;
            case 0x1673E8u: goto label_1673e8;
            case 0x1673ECu: goto label_1673ec;
            case 0x1673F0u: goto label_1673f0;
            case 0x1673F4u: goto label_1673f4;
            case 0x1673F8u: goto label_1673f8;
            case 0x1673FCu: goto label_1673fc;
            case 0x167400u: goto label_167400;
            case 0x167404u: goto label_167404;
            case 0x167408u: goto label_167408;
            case 0x16740Cu: goto label_16740c;
            case 0x167410u: goto label_167410;
            case 0x167414u: goto label_167414;
            case 0x167418u: goto label_167418;
            case 0x16741Cu: goto label_16741c;
            case 0x167420u: goto label_167420;
            case 0x167424u: goto label_167424;
            case 0x167428u: goto label_167428;
            case 0x16742Cu: goto label_16742c;
            case 0x167430u: goto label_167430;
            case 0x167434u: goto label_167434;
            case 0x167438u: goto label_167438;
            case 0x16743Cu: goto label_16743c;
            case 0x167440u: goto label_167440;
            case 0x167444u: goto label_167444;
            case 0x167448u: goto label_167448;
            case 0x16744Cu: goto label_16744c;
            case 0x167450u: goto label_167450;
            case 0x167454u: goto label_167454;
            case 0x167458u: goto label_167458;
            case 0x16745Cu: goto label_16745c;
            case 0x167460u: goto label_167460;
            case 0x167464u: goto label_167464;
            case 0x167468u: goto label_167468;
            case 0x16746Cu: goto label_16746c;
            case 0x167470u: goto label_167470;
            case 0x167474u: goto label_167474;
            case 0x167478u: goto label_167478;
            case 0x16747Cu: goto label_16747c;
            case 0x167480u: goto label_167480;
            case 0x167484u: goto label_167484;
            case 0x167488u: goto label_167488;
            case 0x16748Cu: goto label_16748c;
            case 0x167490u: goto label_167490;
            case 0x167494u: goto label_167494;
            case 0x167498u: goto label_167498;
            case 0x16749Cu: goto label_16749c;
            case 0x1674A0u: goto label_1674a0;
            case 0x1674A4u: goto label_1674a4;
            case 0x1674A8u: goto label_1674a8;
            case 0x1674ACu: goto label_1674ac;
            case 0x1674B0u: goto label_1674b0;
            case 0x1674B4u: goto label_1674b4;
            case 0x1674B8u: goto label_1674b8;
            case 0x1674BCu: goto label_1674bc;
            case 0x1674C0u: goto label_1674c0;
            case 0x1674C4u: goto label_1674c4;
            case 0x1674C8u: goto label_1674c8;
            case 0x1674CCu: goto label_1674cc;
            case 0x1674D0u: goto label_1674d0;
            case 0x1674D4u: goto label_1674d4;
            case 0x1674D8u: goto label_1674d8;
            case 0x1674DCu: goto label_1674dc;
            case 0x1674E0u: goto label_1674e0;
            case 0x1674E4u: goto label_1674e4;
            case 0x1674E8u: goto label_1674e8;
            case 0x1674ECu: goto label_1674ec;
            case 0x1674F0u: goto label_1674f0;
            case 0x1674F4u: goto label_1674f4;
            case 0x1674F8u: goto label_1674f8;
            case 0x1674FCu: goto label_1674fc;
            case 0x167500u: goto label_167500;
            case 0x167504u: goto label_167504;
            case 0x167508u: goto label_167508;
            case 0x16750Cu: goto label_16750c;
            case 0x167510u: goto label_167510;
            case 0x167514u: goto label_167514;
            case 0x167518u: goto label_167518;
            case 0x16751Cu: goto label_16751c;
            case 0x167520u: goto label_167520;
            case 0x167524u: goto label_167524;
            case 0x167528u: goto label_167528;
            case 0x16752Cu: goto label_16752c;
            case 0x167530u: goto label_167530;
            case 0x167534u: goto label_167534;
            case 0x167538u: goto label_167538;
            case 0x16753Cu: goto label_16753c;
            case 0x167540u: goto label_167540;
            case 0x167544u: goto label_167544;
            case 0x167548u: goto label_167548;
            case 0x16754Cu: goto label_16754c;
            case 0x167550u: goto label_167550;
            case 0x167554u: goto label_167554;
            case 0x167558u: goto label_167558;
            case 0x16755Cu: goto label_16755c;
            case 0x167560u: goto label_167560;
            case 0x167564u: goto label_167564;
            case 0x167568u: goto label_167568;
            case 0x16756Cu: goto label_16756c;
            case 0x167570u: goto label_167570;
            case 0x167574u: goto label_167574;
            case 0x167578u: goto label_167578;
            case 0x16757Cu: goto label_16757c;
            case 0x167580u: goto label_167580;
            case 0x167584u: goto label_167584;
            case 0x167588u: goto label_167588;
            case 0x16758Cu: goto label_16758c;
            case 0x167590u: goto label_167590;
            case 0x167594u: goto label_167594;
            case 0x167598u: goto label_167598;
            case 0x16759Cu: goto label_16759c;
            case 0x1675A0u: goto label_1675a0;
            case 0x1675A4u: goto label_1675a4;
            case 0x1675A8u: goto label_1675a8;
            case 0x1675ACu: goto label_1675ac;
            case 0x1675B0u: goto label_1675b0;
            case 0x1675B4u: goto label_1675b4;
            case 0x1675B8u: goto label_1675b8;
            case 0x1675BCu: goto label_1675bc;
            case 0x1675C0u: goto label_1675c0;
            case 0x1675C4u: goto label_1675c4;
            case 0x1675C8u: goto label_1675c8;
            case 0x1675CCu: goto label_1675cc;
            case 0x1675D0u: goto label_1675d0;
            case 0x1675D4u: goto label_1675d4;
            case 0x1675D8u: goto label_1675d8;
            case 0x1675DCu: goto label_1675dc;
            case 0x1675E0u: goto label_1675e0;
            case 0x1675E4u: goto label_1675e4;
            case 0x1675E8u: goto label_1675e8;
            case 0x1675ECu: goto label_1675ec;
            case 0x1675F0u: goto label_1675f0;
            case 0x1675F4u: goto label_1675f4;
            case 0x1675F8u: goto label_1675f8;
            case 0x1675FCu: goto label_1675fc;
            case 0x167600u: goto label_167600;
            case 0x167604u: goto label_167604;
            case 0x167608u: goto label_167608;
            case 0x16760Cu: goto label_16760c;
            case 0x167610u: goto label_167610;
            case 0x167614u: goto label_167614;
            case 0x167618u: goto label_167618;
            case 0x16761Cu: goto label_16761c;
            case 0x167620u: goto label_167620;
            case 0x167624u: goto label_167624;
            case 0x167628u: goto label_167628;
            case 0x16762Cu: goto label_16762c;
            case 0x167630u: goto label_167630;
            case 0x167634u: goto label_167634;
            case 0x167638u: goto label_167638;
            case 0x16763Cu: goto label_16763c;
            case 0x167640u: goto label_167640;
            case 0x167644u: goto label_167644;
            case 0x167648u: goto label_167648;
            case 0x16764Cu: goto label_16764c;
            case 0x167650u: goto label_167650;
            case 0x167654u: goto label_167654;
            case 0x167658u: goto label_167658;
            case 0x16765Cu: goto label_16765c;
            case 0x167660u: goto label_167660;
            case 0x167664u: goto label_167664;
            case 0x167668u: goto label_167668;
            case 0x16766Cu: goto label_16766c;
            case 0x167670u: goto label_167670;
            case 0x167674u: goto label_167674;
            case 0x167678u: goto label_167678;
            case 0x16767Cu: goto label_16767c;
            case 0x167680u: goto label_167680;
            case 0x167684u: goto label_167684;
            case 0x167688u: goto label_167688;
            case 0x16768Cu: goto label_16768c;
            case 0x167690u: goto label_167690;
            case 0x167694u: goto label_167694;
            case 0x167698u: goto label_167698;
            case 0x16769Cu: goto label_16769c;
            case 0x1676A0u: goto label_1676a0;
            case 0x1676A4u: goto label_1676a4;
            case 0x1676A8u: goto label_1676a8;
            case 0x1676ACu: goto label_1676ac;
            case 0x1676B0u: goto label_1676b0;
            case 0x1676B4u: goto label_1676b4;
            case 0x1676B8u: goto label_1676b8;
            case 0x1676BCu: goto label_1676bc;
            case 0x1676C0u: goto label_1676c0;
            case 0x1676C4u: goto label_1676c4;
            case 0x1676C8u: goto label_1676c8;
            case 0x1676CCu: goto label_1676cc;
            case 0x1676D0u: goto label_1676d0;
            case 0x1676D4u: goto label_1676d4;
            case 0x1676D8u: goto label_1676d8;
            case 0x1676DCu: goto label_1676dc;
            case 0x1676E0u: goto label_1676e0;
            case 0x1676E4u: goto label_1676e4;
            case 0x1676E8u: goto label_1676e8;
            case 0x1676ECu: goto label_1676ec;
            case 0x1676F0u: goto label_1676f0;
            case 0x1676F4u: goto label_1676f4;
            case 0x1676F8u: goto label_1676f8;
            case 0x1676FCu: goto label_1676fc;
            case 0x167700u: goto label_167700;
            case 0x167704u: goto label_167704;
            case 0x167708u: goto label_167708;
            case 0x16770Cu: goto label_16770c;
            case 0x167710u: goto label_167710;
            case 0x167714u: goto label_167714;
            case 0x167718u: goto label_167718;
            case 0x16771Cu: goto label_16771c;
            case 0x167720u: goto label_167720;
            case 0x167724u: goto label_167724;
            case 0x167728u: goto label_167728;
            case 0x16772Cu: goto label_16772c;
            case 0x167730u: goto label_167730;
            case 0x167734u: goto label_167734;
            case 0x167738u: goto label_167738;
            case 0x16773Cu: goto label_16773c;
            case 0x167740u: goto label_167740;
            case 0x167744u: goto label_167744;
            case 0x167748u: goto label_167748;
            case 0x16774Cu: goto label_16774c;
            case 0x167750u: goto label_167750;
            case 0x167754u: goto label_167754;
            case 0x167758u: goto label_167758;
            case 0x16775Cu: goto label_16775c;
            case 0x167760u: goto label_167760;
            case 0x167764u: goto label_167764;
            case 0x167768u: goto label_167768;
            case 0x16776Cu: goto label_16776c;
            case 0x167770u: goto label_167770;
            case 0x167774u: goto label_167774;
            case 0x167778u: goto label_167778;
            case 0x16777Cu: goto label_16777c;
            case 0x167780u: goto label_167780;
            case 0x167784u: goto label_167784;
            case 0x167788u: goto label_167788;
            case 0x16778Cu: goto label_16778c;
            case 0x167790u: goto label_167790;
            case 0x167794u: goto label_167794;
            case 0x167798u: goto label_167798;
            case 0x16779Cu: goto label_16779c;
            case 0x1677A0u: goto label_1677a0;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677A8u: goto label_1677a8;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B0u: goto label_1677b0;
            case 0x1677B4u: goto label_1677b4;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677BCu: goto label_1677bc;
            case 0x1677C0u: goto label_1677c0;
            case 0x1677C4u: goto label_1677c4;
            case 0x1677C8u: goto label_1677c8;
            case 0x1677CCu: goto label_1677cc;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677D4u: goto label_1677d4;
            case 0x1677D8u: goto label_1677d8;
            case 0x1677DCu: goto label_1677dc;
            case 0x1677E0u: goto label_1677e0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677E8u: goto label_1677e8;
            case 0x1677ECu: goto label_1677ec;
            case 0x1677F0u: goto label_1677f0;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677F8u: goto label_1677f8;
            case 0x1677FCu: goto label_1677fc;
            case 0x167800u: goto label_167800;
            case 0x167804u: goto label_167804;
            case 0x167808u: goto label_167808;
            case 0x16780Cu: goto label_16780c;
            case 0x167810u: goto label_167810;
            case 0x167814u: goto label_167814;
            case 0x167818u: goto label_167818;
            case 0x16781Cu: goto label_16781c;
            case 0x167820u: goto label_167820;
            case 0x167824u: goto label_167824;
            case 0x167828u: goto label_167828;
            case 0x16782Cu: goto label_16782c;
            case 0x167830u: goto label_167830;
            case 0x167834u: goto label_167834;
            case 0x167838u: goto label_167838;
            case 0x16783Cu: goto label_16783c;
            case 0x167840u: goto label_167840;
            case 0x167844u: goto label_167844;
            case 0x167848u: goto label_167848;
            case 0x16784Cu: goto label_16784c;
            case 0x167850u: goto label_167850;
            case 0x167854u: goto label_167854;
            case 0x167858u: goto label_167858;
            case 0x16785Cu: goto label_16785c;
            case 0x167860u: goto label_167860;
            case 0x167864u: goto label_167864;
            case 0x167868u: goto label_167868;
            case 0x16786Cu: goto label_16786c;
            case 0x167870u: goto label_167870;
            case 0x167874u: goto label_167874;
            case 0x167878u: goto label_167878;
            case 0x16787Cu: goto label_16787c;
            case 0x167880u: goto label_167880;
            case 0x167884u: goto label_167884;
            case 0x167888u: goto label_167888;
            case 0x16788Cu: goto label_16788c;
            case 0x167890u: goto label_167890;
            case 0x167894u: goto label_167894;
            case 0x167898u: goto label_167898;
            case 0x16789Cu: goto label_16789c;
            case 0x1678A0u: goto label_1678a0;
            case 0x1678A4u: goto label_1678a4;
            case 0x1678A8u: goto label_1678a8;
            case 0x1678ACu: goto label_1678ac;
            case 0x1678B0u: goto label_1678b0;
            case 0x1678B4u: goto label_1678b4;
            case 0x1678B8u: goto label_1678b8;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678C0u: goto label_1678c0;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678C8u: goto label_1678c8;
            case 0x1678CCu: goto label_1678cc;
            case 0x1678D0u: goto label_1678d0;
            case 0x1678D4u: goto label_1678d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16789Cu; }
            if (ctx->pc != 0x16789Cu) { return; }
        }
    }
    ctx->pc = 0x16789Cu;
label_16789c:
    // 0x16789c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1678a0:
    if (ctx->pc == 0x1678A0u) {
        ctx->pc = 0x1678A4u;
        goto label_1678a4;
    }
    ctx->pc = 0x16789Cu;
    {
        const bool branch_taken_0x16789c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16789c) {
            ctx->pc = 0x1678C8u;
            goto label_1678c8;
        }
    }
    ctx->pc = 0x1678A4u;
label_1678a4:
    // 0x1678a4: 0x0  nop
    ctx->pc = 0x1678a4u;
    // NOP
label_1678a8:
    // 0x1678a8: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x1678a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
label_1678ac:
    // 0x1678ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1678acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1678b0:
    // 0x1678b0: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1678b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1678b4:
    // 0x1678b4: 0x24c66d10  addiu       $a2, $a2, 0x6D10
    ctx->pc = 0x1678b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27920));
label_1678b8:
    // 0x1678b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1678b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1678bc:
    // 0x1678bc: 0xc053ca4  jal         func_14F290
label_1678c0:
    if (ctx->pc == 0x1678C0u) {
        ctx->pc = 0x1678C0u;
            // 0x1678c0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1678C4u;
        goto label_1678c4;
    }
    ctx->pc = 0x1678BCu;
    SET_GPR_U32(ctx, 31, 0x1678C4u);
    ctx->pc = 0x1678C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1678BCu;
            // 0x1678c0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1678C4u; }
        if (ctx->pc != 0x1678C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1678C4u; }
        if (ctx->pc != 0x1678C4u) { return; }
    }
    ctx->pc = 0x1678C4u;
label_1678c4:
    // 0x1678c4: 0x0  nop
    ctx->pc = 0x1678c4u;
    // NOP
label_1678c8:
    // 0x1678c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1678c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1678cc:
    // 0x1678cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1678ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1678d0:
    // 0x1678d0: 0x3e00008  jr          $ra
label_1678d4:
    if (ctx->pc == 0x1678D4u) {
        ctx->pc = 0x1678D4u;
            // 0x1678d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1678D8u;
        goto label_fallthrough_0x1678d0;
    }
    ctx->pc = 0x1678D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1678D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1678D0u;
            // 0x1678d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166F80u: goto label_166f80;
            case 0x166F84u: goto label_166f84;
            case 0x166F88u: goto label_166f88;
            case 0x166F8Cu: goto label_166f8c;
            case 0x166F90u: goto label_166f90;
            case 0x166F94u: goto label_166f94;
            case 0x166F98u: goto label_166f98;
            case 0x166F9Cu: goto label_166f9c;
            case 0x166FA0u: goto label_166fa0;
            case 0x166FA4u: goto label_166fa4;
            case 0x166FA8u: goto label_166fa8;
            case 0x166FACu: goto label_166fac;
            case 0x166FB0u: goto label_166fb0;
            case 0x166FB4u: goto label_166fb4;
            case 0x166FB8u: goto label_166fb8;
            case 0x166FBCu: goto label_166fbc;
            case 0x166FC0u: goto label_166fc0;
            case 0x166FC4u: goto label_166fc4;
            case 0x166FC8u: goto label_166fc8;
            case 0x166FCCu: goto label_166fcc;
            case 0x166FD0u: goto label_166fd0;
            case 0x166FD4u: goto label_166fd4;
            case 0x166FD8u: goto label_166fd8;
            case 0x166FDCu: goto label_166fdc;
            case 0x166FE0u: goto label_166fe0;
            case 0x166FE4u: goto label_166fe4;
            case 0x166FE8u: goto label_166fe8;
            case 0x166FECu: goto label_166fec;
            case 0x166FF0u: goto label_166ff0;
            case 0x166FF4u: goto label_166ff4;
            case 0x166FF8u: goto label_166ff8;
            case 0x166FFCu: goto label_166ffc;
            case 0x167000u: goto label_167000;
            case 0x167004u: goto label_167004;
            case 0x167008u: goto label_167008;
            case 0x16700Cu: goto label_16700c;
            case 0x167010u: goto label_167010;
            case 0x167014u: goto label_167014;
            case 0x167018u: goto label_167018;
            case 0x16701Cu: goto label_16701c;
            case 0x167020u: goto label_167020;
            case 0x167024u: goto label_167024;
            case 0x167028u: goto label_167028;
            case 0x16702Cu: goto label_16702c;
            case 0x167030u: goto label_167030;
            case 0x167034u: goto label_167034;
            case 0x167038u: goto label_167038;
            case 0x16703Cu: goto label_16703c;
            case 0x167040u: goto label_167040;
            case 0x167044u: goto label_167044;
            case 0x167048u: goto label_167048;
            case 0x16704Cu: goto label_16704c;
            case 0x167050u: goto label_167050;
            case 0x167054u: goto label_167054;
            case 0x167058u: goto label_167058;
            case 0x16705Cu: goto label_16705c;
            case 0x167060u: goto label_167060;
            case 0x167064u: goto label_167064;
            case 0x167068u: goto label_167068;
            case 0x16706Cu: goto label_16706c;
            case 0x167070u: goto label_167070;
            case 0x167074u: goto label_167074;
            case 0x167078u: goto label_167078;
            case 0x16707Cu: goto label_16707c;
            case 0x167080u: goto label_167080;
            case 0x167084u: goto label_167084;
            case 0x167088u: goto label_167088;
            case 0x16708Cu: goto label_16708c;
            case 0x167090u: goto label_167090;
            case 0x167094u: goto label_167094;
            case 0x167098u: goto label_167098;
            case 0x16709Cu: goto label_16709c;
            case 0x1670A0u: goto label_1670a0;
            case 0x1670A4u: goto label_1670a4;
            case 0x1670A8u: goto label_1670a8;
            case 0x1670ACu: goto label_1670ac;
            case 0x1670B0u: goto label_1670b0;
            case 0x1670B4u: goto label_1670b4;
            case 0x1670B8u: goto label_1670b8;
            case 0x1670BCu: goto label_1670bc;
            case 0x1670C0u: goto label_1670c0;
            case 0x1670C4u: goto label_1670c4;
            case 0x1670C8u: goto label_1670c8;
            case 0x1670CCu: goto label_1670cc;
            case 0x1670D0u: goto label_1670d0;
            case 0x1670D4u: goto label_1670d4;
            case 0x1670D8u: goto label_1670d8;
            case 0x1670DCu: goto label_1670dc;
            case 0x1670E0u: goto label_1670e0;
            case 0x1670E4u: goto label_1670e4;
            case 0x1670E8u: goto label_1670e8;
            case 0x1670ECu: goto label_1670ec;
            case 0x1670F0u: goto label_1670f0;
            case 0x1670F4u: goto label_1670f4;
            case 0x1670F8u: goto label_1670f8;
            case 0x1670FCu: goto label_1670fc;
            case 0x167100u: goto label_167100;
            case 0x167104u: goto label_167104;
            case 0x167108u: goto label_167108;
            case 0x16710Cu: goto label_16710c;
            case 0x167110u: goto label_167110;
            case 0x167114u: goto label_167114;
            case 0x167118u: goto label_167118;
            case 0x16711Cu: goto label_16711c;
            case 0x167120u: goto label_167120;
            case 0x167124u: goto label_167124;
            case 0x167128u: goto label_167128;
            case 0x16712Cu: goto label_16712c;
            case 0x167130u: goto label_167130;
            case 0x167134u: goto label_167134;
            case 0x167138u: goto label_167138;
            case 0x16713Cu: goto label_16713c;
            case 0x167140u: goto label_167140;
            case 0x167144u: goto label_167144;
            case 0x167148u: goto label_167148;
            case 0x16714Cu: goto label_16714c;
            case 0x167150u: goto label_167150;
            case 0x167154u: goto label_167154;
            case 0x167158u: goto label_167158;
            case 0x16715Cu: goto label_16715c;
            case 0x167160u: goto label_167160;
            case 0x167164u: goto label_167164;
            case 0x167168u: goto label_167168;
            case 0x16716Cu: goto label_16716c;
            case 0x167170u: goto label_167170;
            case 0x167174u: goto label_167174;
            case 0x167178u: goto label_167178;
            case 0x16717Cu: goto label_16717c;
            case 0x167180u: goto label_167180;
            case 0x167184u: goto label_167184;
            case 0x167188u: goto label_167188;
            case 0x16718Cu: goto label_16718c;
            case 0x167190u: goto label_167190;
            case 0x167194u: goto label_167194;
            case 0x167198u: goto label_167198;
            case 0x16719Cu: goto label_16719c;
            case 0x1671A0u: goto label_1671a0;
            case 0x1671A4u: goto label_1671a4;
            case 0x1671A8u: goto label_1671a8;
            case 0x1671ACu: goto label_1671ac;
            case 0x1671B0u: goto label_1671b0;
            case 0x1671B4u: goto label_1671b4;
            case 0x1671B8u: goto label_1671b8;
            case 0x1671BCu: goto label_1671bc;
            case 0x1671C0u: goto label_1671c0;
            case 0x1671C4u: goto label_1671c4;
            case 0x1671C8u: goto label_1671c8;
            case 0x1671CCu: goto label_1671cc;
            case 0x1671D0u: goto label_1671d0;
            case 0x1671D4u: goto label_1671d4;
            case 0x1671D8u: goto label_1671d8;
            case 0x1671DCu: goto label_1671dc;
            case 0x1671E0u: goto label_1671e0;
            case 0x1671E4u: goto label_1671e4;
            case 0x1671E8u: goto label_1671e8;
            case 0x1671ECu: goto label_1671ec;
            case 0x1671F0u: goto label_1671f0;
            case 0x1671F4u: goto label_1671f4;
            case 0x1671F8u: goto label_1671f8;
            case 0x1671FCu: goto label_1671fc;
            case 0x167200u: goto label_167200;
            case 0x167204u: goto label_167204;
            case 0x167208u: goto label_167208;
            case 0x16720Cu: goto label_16720c;
            case 0x167210u: goto label_167210;
            case 0x167214u: goto label_167214;
            case 0x167218u: goto label_167218;
            case 0x16721Cu: goto label_16721c;
            case 0x167220u: goto label_167220;
            case 0x167224u: goto label_167224;
            case 0x167228u: goto label_167228;
            case 0x16722Cu: goto label_16722c;
            case 0x167230u: goto label_167230;
            case 0x167234u: goto label_167234;
            case 0x167238u: goto label_167238;
            case 0x16723Cu: goto label_16723c;
            case 0x167240u: goto label_167240;
            case 0x167244u: goto label_167244;
            case 0x167248u: goto label_167248;
            case 0x16724Cu: goto label_16724c;
            case 0x167250u: goto label_167250;
            case 0x167254u: goto label_167254;
            case 0x167258u: goto label_167258;
            case 0x16725Cu: goto label_16725c;
            case 0x167260u: goto label_167260;
            case 0x167264u: goto label_167264;
            case 0x167268u: goto label_167268;
            case 0x16726Cu: goto label_16726c;
            case 0x167270u: goto label_167270;
            case 0x167274u: goto label_167274;
            case 0x167278u: goto label_167278;
            case 0x16727Cu: goto label_16727c;
            case 0x167280u: goto label_167280;
            case 0x167284u: goto label_167284;
            case 0x167288u: goto label_167288;
            case 0x16728Cu: goto label_16728c;
            case 0x167290u: goto label_167290;
            case 0x167294u: goto label_167294;
            case 0x167298u: goto label_167298;
            case 0x16729Cu: goto label_16729c;
            case 0x1672A0u: goto label_1672a0;
            case 0x1672A4u: goto label_1672a4;
            case 0x1672A8u: goto label_1672a8;
            case 0x1672ACu: goto label_1672ac;
            case 0x1672B0u: goto label_1672b0;
            case 0x1672B4u: goto label_1672b4;
            case 0x1672B8u: goto label_1672b8;
            case 0x1672BCu: goto label_1672bc;
            case 0x1672C0u: goto label_1672c0;
            case 0x1672C4u: goto label_1672c4;
            case 0x1672C8u: goto label_1672c8;
            case 0x1672CCu: goto label_1672cc;
            case 0x1672D0u: goto label_1672d0;
            case 0x1672D4u: goto label_1672d4;
            case 0x1672D8u: goto label_1672d8;
            case 0x1672DCu: goto label_1672dc;
            case 0x1672E0u: goto label_1672e0;
            case 0x1672E4u: goto label_1672e4;
            case 0x1672E8u: goto label_1672e8;
            case 0x1672ECu: goto label_1672ec;
            case 0x1672F0u: goto label_1672f0;
            case 0x1672F4u: goto label_1672f4;
            case 0x1672F8u: goto label_1672f8;
            case 0x1672FCu: goto label_1672fc;
            case 0x167300u: goto label_167300;
            case 0x167304u: goto label_167304;
            case 0x167308u: goto label_167308;
            case 0x16730Cu: goto label_16730c;
            case 0x167310u: goto label_167310;
            case 0x167314u: goto label_167314;
            case 0x167318u: goto label_167318;
            case 0x16731Cu: goto label_16731c;
            case 0x167320u: goto label_167320;
            case 0x167324u: goto label_167324;
            case 0x167328u: goto label_167328;
            case 0x16732Cu: goto label_16732c;
            case 0x167330u: goto label_167330;
            case 0x167334u: goto label_167334;
            case 0x167338u: goto label_167338;
            case 0x16733Cu: goto label_16733c;
            case 0x167340u: goto label_167340;
            case 0x167344u: goto label_167344;
            case 0x167348u: goto label_167348;
            case 0x16734Cu: goto label_16734c;
            case 0x167350u: goto label_167350;
            case 0x167354u: goto label_167354;
            case 0x167358u: goto label_167358;
            case 0x16735Cu: goto label_16735c;
            case 0x167360u: goto label_167360;
            case 0x167364u: goto label_167364;
            case 0x167368u: goto label_167368;
            case 0x16736Cu: goto label_16736c;
            case 0x167370u: goto label_167370;
            case 0x167374u: goto label_167374;
            case 0x167378u: goto label_167378;
            case 0x16737Cu: goto label_16737c;
            case 0x167380u: goto label_167380;
            case 0x167384u: goto label_167384;
            case 0x167388u: goto label_167388;
            case 0x16738Cu: goto label_16738c;
            case 0x167390u: goto label_167390;
            case 0x167394u: goto label_167394;
            case 0x167398u: goto label_167398;
            case 0x16739Cu: goto label_16739c;
            case 0x1673A0u: goto label_1673a0;
            case 0x1673A4u: goto label_1673a4;
            case 0x1673A8u: goto label_1673a8;
            case 0x1673ACu: goto label_1673ac;
            case 0x1673B0u: goto label_1673b0;
            case 0x1673B4u: goto label_1673b4;
            case 0x1673B8u: goto label_1673b8;
            case 0x1673BCu: goto label_1673bc;
            case 0x1673C0u: goto label_1673c0;
            case 0x1673C4u: goto label_1673c4;
            case 0x1673C8u: goto label_1673c8;
            case 0x1673CCu: goto label_1673cc;
            case 0x1673D0u: goto label_1673d0;
            case 0x1673D4u: goto label_1673d4;
            case 0x1673D8u: goto label_1673d8;
            case 0x1673DCu: goto label_1673dc;
            case 0x1673E0u: goto label_1673e0;
            case 0x1673E4u: goto label_1673e4;
            case 0x1673E8u: goto label_1673e8;
            case 0x1673ECu: goto label_1673ec;
            case 0x1673F0u: goto label_1673f0;
            case 0x1673F4u: goto label_1673f4;
            case 0x1673F8u: goto label_1673f8;
            case 0x1673FCu: goto label_1673fc;
            case 0x167400u: goto label_167400;
            case 0x167404u: goto label_167404;
            case 0x167408u: goto label_167408;
            case 0x16740Cu: goto label_16740c;
            case 0x167410u: goto label_167410;
            case 0x167414u: goto label_167414;
            case 0x167418u: goto label_167418;
            case 0x16741Cu: goto label_16741c;
            case 0x167420u: goto label_167420;
            case 0x167424u: goto label_167424;
            case 0x167428u: goto label_167428;
            case 0x16742Cu: goto label_16742c;
            case 0x167430u: goto label_167430;
            case 0x167434u: goto label_167434;
            case 0x167438u: goto label_167438;
            case 0x16743Cu: goto label_16743c;
            case 0x167440u: goto label_167440;
            case 0x167444u: goto label_167444;
            case 0x167448u: goto label_167448;
            case 0x16744Cu: goto label_16744c;
            case 0x167450u: goto label_167450;
            case 0x167454u: goto label_167454;
            case 0x167458u: goto label_167458;
            case 0x16745Cu: goto label_16745c;
            case 0x167460u: goto label_167460;
            case 0x167464u: goto label_167464;
            case 0x167468u: goto label_167468;
            case 0x16746Cu: goto label_16746c;
            case 0x167470u: goto label_167470;
            case 0x167474u: goto label_167474;
            case 0x167478u: goto label_167478;
            case 0x16747Cu: goto label_16747c;
            case 0x167480u: goto label_167480;
            case 0x167484u: goto label_167484;
            case 0x167488u: goto label_167488;
            case 0x16748Cu: goto label_16748c;
            case 0x167490u: goto label_167490;
            case 0x167494u: goto label_167494;
            case 0x167498u: goto label_167498;
            case 0x16749Cu: goto label_16749c;
            case 0x1674A0u: goto label_1674a0;
            case 0x1674A4u: goto label_1674a4;
            case 0x1674A8u: goto label_1674a8;
            case 0x1674ACu: goto label_1674ac;
            case 0x1674B0u: goto label_1674b0;
            case 0x1674B4u: goto label_1674b4;
            case 0x1674B8u: goto label_1674b8;
            case 0x1674BCu: goto label_1674bc;
            case 0x1674C0u: goto label_1674c0;
            case 0x1674C4u: goto label_1674c4;
            case 0x1674C8u: goto label_1674c8;
            case 0x1674CCu: goto label_1674cc;
            case 0x1674D0u: goto label_1674d0;
            case 0x1674D4u: goto label_1674d4;
            case 0x1674D8u: goto label_1674d8;
            case 0x1674DCu: goto label_1674dc;
            case 0x1674E0u: goto label_1674e0;
            case 0x1674E4u: goto label_1674e4;
            case 0x1674E8u: goto label_1674e8;
            case 0x1674ECu: goto label_1674ec;
            case 0x1674F0u: goto label_1674f0;
            case 0x1674F4u: goto label_1674f4;
            case 0x1674F8u: goto label_1674f8;
            case 0x1674FCu: goto label_1674fc;
            case 0x167500u: goto label_167500;
            case 0x167504u: goto label_167504;
            case 0x167508u: goto label_167508;
            case 0x16750Cu: goto label_16750c;
            case 0x167510u: goto label_167510;
            case 0x167514u: goto label_167514;
            case 0x167518u: goto label_167518;
            case 0x16751Cu: goto label_16751c;
            case 0x167520u: goto label_167520;
            case 0x167524u: goto label_167524;
            case 0x167528u: goto label_167528;
            case 0x16752Cu: goto label_16752c;
            case 0x167530u: goto label_167530;
            case 0x167534u: goto label_167534;
            case 0x167538u: goto label_167538;
            case 0x16753Cu: goto label_16753c;
            case 0x167540u: goto label_167540;
            case 0x167544u: goto label_167544;
            case 0x167548u: goto label_167548;
            case 0x16754Cu: goto label_16754c;
            case 0x167550u: goto label_167550;
            case 0x167554u: goto label_167554;
            case 0x167558u: goto label_167558;
            case 0x16755Cu: goto label_16755c;
            case 0x167560u: goto label_167560;
            case 0x167564u: goto label_167564;
            case 0x167568u: goto label_167568;
            case 0x16756Cu: goto label_16756c;
            case 0x167570u: goto label_167570;
            case 0x167574u: goto label_167574;
            case 0x167578u: goto label_167578;
            case 0x16757Cu: goto label_16757c;
            case 0x167580u: goto label_167580;
            case 0x167584u: goto label_167584;
            case 0x167588u: goto label_167588;
            case 0x16758Cu: goto label_16758c;
            case 0x167590u: goto label_167590;
            case 0x167594u: goto label_167594;
            case 0x167598u: goto label_167598;
            case 0x16759Cu: goto label_16759c;
            case 0x1675A0u: goto label_1675a0;
            case 0x1675A4u: goto label_1675a4;
            case 0x1675A8u: goto label_1675a8;
            case 0x1675ACu: goto label_1675ac;
            case 0x1675B0u: goto label_1675b0;
            case 0x1675B4u: goto label_1675b4;
            case 0x1675B8u: goto label_1675b8;
            case 0x1675BCu: goto label_1675bc;
            case 0x1675C0u: goto label_1675c0;
            case 0x1675C4u: goto label_1675c4;
            case 0x1675C8u: goto label_1675c8;
            case 0x1675CCu: goto label_1675cc;
            case 0x1675D0u: goto label_1675d0;
            case 0x1675D4u: goto label_1675d4;
            case 0x1675D8u: goto label_1675d8;
            case 0x1675DCu: goto label_1675dc;
            case 0x1675E0u: goto label_1675e0;
            case 0x1675E4u: goto label_1675e4;
            case 0x1675E8u: goto label_1675e8;
            case 0x1675ECu: goto label_1675ec;
            case 0x1675F0u: goto label_1675f0;
            case 0x1675F4u: goto label_1675f4;
            case 0x1675F8u: goto label_1675f8;
            case 0x1675FCu: goto label_1675fc;
            case 0x167600u: goto label_167600;
            case 0x167604u: goto label_167604;
            case 0x167608u: goto label_167608;
            case 0x16760Cu: goto label_16760c;
            case 0x167610u: goto label_167610;
            case 0x167614u: goto label_167614;
            case 0x167618u: goto label_167618;
            case 0x16761Cu: goto label_16761c;
            case 0x167620u: goto label_167620;
            case 0x167624u: goto label_167624;
            case 0x167628u: goto label_167628;
            case 0x16762Cu: goto label_16762c;
            case 0x167630u: goto label_167630;
            case 0x167634u: goto label_167634;
            case 0x167638u: goto label_167638;
            case 0x16763Cu: goto label_16763c;
            case 0x167640u: goto label_167640;
            case 0x167644u: goto label_167644;
            case 0x167648u: goto label_167648;
            case 0x16764Cu: goto label_16764c;
            case 0x167650u: goto label_167650;
            case 0x167654u: goto label_167654;
            case 0x167658u: goto label_167658;
            case 0x16765Cu: goto label_16765c;
            case 0x167660u: goto label_167660;
            case 0x167664u: goto label_167664;
            case 0x167668u: goto label_167668;
            case 0x16766Cu: goto label_16766c;
            case 0x167670u: goto label_167670;
            case 0x167674u: goto label_167674;
            case 0x167678u: goto label_167678;
            case 0x16767Cu: goto label_16767c;
            case 0x167680u: goto label_167680;
            case 0x167684u: goto label_167684;
            case 0x167688u: goto label_167688;
            case 0x16768Cu: goto label_16768c;
            case 0x167690u: goto label_167690;
            case 0x167694u: goto label_167694;
            case 0x167698u: goto label_167698;
            case 0x16769Cu: goto label_16769c;
            case 0x1676A0u: goto label_1676a0;
            case 0x1676A4u: goto label_1676a4;
            case 0x1676A8u: goto label_1676a8;
            case 0x1676ACu: goto label_1676ac;
            case 0x1676B0u: goto label_1676b0;
            case 0x1676B4u: goto label_1676b4;
            case 0x1676B8u: goto label_1676b8;
            case 0x1676BCu: goto label_1676bc;
            case 0x1676C0u: goto label_1676c0;
            case 0x1676C4u: goto label_1676c4;
            case 0x1676C8u: goto label_1676c8;
            case 0x1676CCu: goto label_1676cc;
            case 0x1676D0u: goto label_1676d0;
            case 0x1676D4u: goto label_1676d4;
            case 0x1676D8u: goto label_1676d8;
            case 0x1676DCu: goto label_1676dc;
            case 0x1676E0u: goto label_1676e0;
            case 0x1676E4u: goto label_1676e4;
            case 0x1676E8u: goto label_1676e8;
            case 0x1676ECu: goto label_1676ec;
            case 0x1676F0u: goto label_1676f0;
            case 0x1676F4u: goto label_1676f4;
            case 0x1676F8u: goto label_1676f8;
            case 0x1676FCu: goto label_1676fc;
            case 0x167700u: goto label_167700;
            case 0x167704u: goto label_167704;
            case 0x167708u: goto label_167708;
            case 0x16770Cu: goto label_16770c;
            case 0x167710u: goto label_167710;
            case 0x167714u: goto label_167714;
            case 0x167718u: goto label_167718;
            case 0x16771Cu: goto label_16771c;
            case 0x167720u: goto label_167720;
            case 0x167724u: goto label_167724;
            case 0x167728u: goto label_167728;
            case 0x16772Cu: goto label_16772c;
            case 0x167730u: goto label_167730;
            case 0x167734u: goto label_167734;
            case 0x167738u: goto label_167738;
            case 0x16773Cu: goto label_16773c;
            case 0x167740u: goto label_167740;
            case 0x167744u: goto label_167744;
            case 0x167748u: goto label_167748;
            case 0x16774Cu: goto label_16774c;
            case 0x167750u: goto label_167750;
            case 0x167754u: goto label_167754;
            case 0x167758u: goto label_167758;
            case 0x16775Cu: goto label_16775c;
            case 0x167760u: goto label_167760;
            case 0x167764u: goto label_167764;
            case 0x167768u: goto label_167768;
            case 0x16776Cu: goto label_16776c;
            case 0x167770u: goto label_167770;
            case 0x167774u: goto label_167774;
            case 0x167778u: goto label_167778;
            case 0x16777Cu: goto label_16777c;
            case 0x167780u: goto label_167780;
            case 0x167784u: goto label_167784;
            case 0x167788u: goto label_167788;
            case 0x16778Cu: goto label_16778c;
            case 0x167790u: goto label_167790;
            case 0x167794u: goto label_167794;
            case 0x167798u: goto label_167798;
            case 0x16779Cu: goto label_16779c;
            case 0x1677A0u: goto label_1677a0;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677A8u: goto label_1677a8;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B0u: goto label_1677b0;
            case 0x1677B4u: goto label_1677b4;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677BCu: goto label_1677bc;
            case 0x1677C0u: goto label_1677c0;
            case 0x1677C4u: goto label_1677c4;
            case 0x1677C8u: goto label_1677c8;
            case 0x1677CCu: goto label_1677cc;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677D4u: goto label_1677d4;
            case 0x1677D8u: goto label_1677d8;
            case 0x1677DCu: goto label_1677dc;
            case 0x1677E0u: goto label_1677e0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677E8u: goto label_1677e8;
            case 0x1677ECu: goto label_1677ec;
            case 0x1677F0u: goto label_1677f0;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677F8u: goto label_1677f8;
            case 0x1677FCu: goto label_1677fc;
            case 0x167800u: goto label_167800;
            case 0x167804u: goto label_167804;
            case 0x167808u: goto label_167808;
            case 0x16780Cu: goto label_16780c;
            case 0x167810u: goto label_167810;
            case 0x167814u: goto label_167814;
            case 0x167818u: goto label_167818;
            case 0x16781Cu: goto label_16781c;
            case 0x167820u: goto label_167820;
            case 0x167824u: goto label_167824;
            case 0x167828u: goto label_167828;
            case 0x16782Cu: goto label_16782c;
            case 0x167830u: goto label_167830;
            case 0x167834u: goto label_167834;
            case 0x167838u: goto label_167838;
            case 0x16783Cu: goto label_16783c;
            case 0x167840u: goto label_167840;
            case 0x167844u: goto label_167844;
            case 0x167848u: goto label_167848;
            case 0x16784Cu: goto label_16784c;
            case 0x167850u: goto label_167850;
            case 0x167854u: goto label_167854;
            case 0x167858u: goto label_167858;
            case 0x16785Cu: goto label_16785c;
            case 0x167860u: goto label_167860;
            case 0x167864u: goto label_167864;
            case 0x167868u: goto label_167868;
            case 0x16786Cu: goto label_16786c;
            case 0x167870u: goto label_167870;
            case 0x167874u: goto label_167874;
            case 0x167878u: goto label_167878;
            case 0x16787Cu: goto label_16787c;
            case 0x167880u: goto label_167880;
            case 0x167884u: goto label_167884;
            case 0x167888u: goto label_167888;
            case 0x16788Cu: goto label_16788c;
            case 0x167890u: goto label_167890;
            case 0x167894u: goto label_167894;
            case 0x167898u: goto label_167898;
            case 0x16789Cu: goto label_16789c;
            case 0x1678A0u: goto label_1678a0;
            case 0x1678A4u: goto label_1678a4;
            case 0x1678A8u: goto label_1678a8;
            case 0x1678ACu: goto label_1678ac;
            case 0x1678B0u: goto label_1678b0;
            case 0x1678B4u: goto label_1678b4;
            case 0x1678B8u: goto label_1678b8;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678C0u: goto label_1678c0;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678C8u: goto label_1678c8;
            case 0x1678CCu: goto label_1678cc;
            case 0x1678D0u: goto label_1678d0;
            case 0x1678D4u: goto label_1678d4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1678d0:
    ctx->pc = 0x1678D8u;
}

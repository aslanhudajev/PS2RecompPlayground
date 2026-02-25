#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_05Move
// Address: 0x1adae0 - 0x1ae098
void En6_05Move_0x1adae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_05Move_0x1adae0");
#endif

    ctx->pc = 0x1adae0u;

label_1adae0:
    // 0x1adae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1adae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1adae4:
    // 0x1adae4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1adae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1adae8:
    // 0x1adae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1adae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1adaec:
    // 0x1adaec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1adaecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1adaf0:
    // 0x1adaf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1adaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1adaf4:
    // 0x1adaf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adaf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adaf8:
    // 0x1adaf8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1adaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1adafc:
    // 0x1adafc: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1adafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1adb00:
    // 0x1adb00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1adb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1adb04:
    // 0x1adb04: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1adb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adb08:
    // 0x1adb08: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1adb08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1adb0c:
    // 0x1adb0c: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1adb0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1adb10:
    // 0x1adb10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1adb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1adb14:
    // 0x1adb14: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1adb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1adb18:
    // 0x1adb18: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1adb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adb1c:
    // 0x1adb1c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1adb1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1adb20:
    // 0x1adb20: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1adb20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1adb24:
    // 0x1adb24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1adb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1adb28:
    // 0x1adb28: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1adb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1adb2c:
    // 0x1adb2c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1adb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adb30:
    // 0x1adb30: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1adb30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1adb34:
    // 0x1adb34: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1adb34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1adb38:
    // 0x1adb38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1adb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1adb3c:
    // 0x1adb3c: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1adb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1adb40:
    // 0x1adb40: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1adb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adb44:
    // 0x1adb44: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1adb44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1adb48:
    // 0x1adb48: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1adb48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1adb4c:
    // 0x1adb4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1adb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1adb50:
    // 0x1adb50: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1adb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1adb54:
    // 0x1adb54: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1adb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adb58:
    // 0x1adb58: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1adb58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1adb5c:
    // 0x1adb5c: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1adb5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1adb60:
    // 0x1adb60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1adb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1adb64:
    // 0x1adb64: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1adb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adb68:
    // 0x1adb68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1adb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1adb6c:
    // 0x1adb6c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1adb70:
    if (ctx->pc == 0x1ADB70u) {
        ctx->pc = 0x1ADB70u;
            // 0x1adb70: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1ADB74u;
        goto label_1adb74;
    }
    ctx->pc = 0x1ADB6Cu;
    {
        const bool branch_taken_0x1adb6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ADB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB6Cu;
            // 0x1adb70: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb6c) {
            ctx->pc = 0x1ADB90u;
            goto label_1adb90;
        }
    }
    ctx->pc = 0x1ADB74u;
label_1adb74:
    // 0x1adb74: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1adb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1adb78:
    // 0x1adb78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1adb78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1adb7c:
    // 0x1adb7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adb7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adb80:
    // 0x1adb80: 0x0  nop
    ctx->pc = 0x1adb80u;
    // NOP
label_1adb84:
    // 0x1adb84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1adb84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1adb88:
    // 0x1adb88: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1adb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1adb8c:
    // 0x1adb8c: 0x0  nop
    ctx->pc = 0x1adb8cu;
    // NOP
label_1adb90:
    // 0x1adb90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1adb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adb94:
    // 0x1adb94: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1adb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1adb98:
    // 0x1adb98: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1adb98u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1adb9c:
    // 0x1adb9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adba0:
    // 0x1adba0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1adba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adba4:
    // 0x1adba4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1adba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1adba8:
    // 0x1adba8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1adbac:
    if (ctx->pc == 0x1ADBACu) {
        ctx->pc = 0x1ADBACu;
            // 0x1adbac: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1ADBB0u;
        goto label_1adbb0;
    }
    ctx->pc = 0x1ADBA8u;
    {
        const bool branch_taken_0x1adba8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ADBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADBA8u;
            // 0x1adbac: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adba8) {
            ctx->pc = 0x1ADBC8u;
            goto label_1adbc8;
        }
    }
    ctx->pc = 0x1ADBB0u;
label_1adbb0:
    // 0x1adbb0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1adbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1adbb4:
    // 0x1adbb4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1adbb4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1adbb8:
    // 0x1adbb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adbb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adbbc:
    // 0x1adbbc: 0x0  nop
    ctx->pc = 0x1adbbcu;
    // NOP
label_1adbc0:
    // 0x1adbc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1adbc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1adbc4:
    // 0x1adbc4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1adbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1adbc8:
    // 0x1adbc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1adbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adbcc:
    // 0x1adbcc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1adbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1adbd0:
    // 0x1adbd0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1adbd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1adbd4:
    // 0x1adbd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adbd8:
    // 0x1adbd8: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1adbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adbdc:
    // 0x1adbdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1adbdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1adbe0:
    // 0x1adbe0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1adbe4:
    if (ctx->pc == 0x1ADBE4u) {
        ctx->pc = 0x1ADBE4u;
            // 0x1adbe4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1ADBE8u;
        goto label_1adbe8;
    }
    ctx->pc = 0x1ADBE0u;
    {
        const bool branch_taken_0x1adbe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ADBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADBE0u;
            // 0x1adbe4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbe0) {
            ctx->pc = 0x1ADC00u;
            goto label_1adc00;
        }
    }
    ctx->pc = 0x1ADBE8u;
label_1adbe8:
    // 0x1adbe8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1adbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1adbec:
    // 0x1adbec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1adbecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1adbf0:
    // 0x1adbf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adbf4:
    // 0x1adbf4: 0x0  nop
    ctx->pc = 0x1adbf4u;
    // NOP
label_1adbf8:
    // 0x1adbf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1adbf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1adbfc:
    // 0x1adbfc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1adbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1adc00:
    // 0x1adc00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1adc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adc04:
    // 0x1adc04: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1adc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1adc08:
    // 0x1adc08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1adc08u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1adc0c:
    // 0x1adc0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adc10:
    // 0x1adc10: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1adc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adc14:
    // 0x1adc14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1adc14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1adc18:
    // 0x1adc18: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1adc1c:
    if (ctx->pc == 0x1ADC1Cu) {
        ctx->pc = 0x1ADC1Cu;
            // 0x1adc1c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1ADC20u;
        goto label_1adc20;
    }
    ctx->pc = 0x1ADC18u;
    {
        const bool branch_taken_0x1adc18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ADC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC18u;
            // 0x1adc1c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc18) {
            ctx->pc = 0x1ADC38u;
            goto label_1adc38;
        }
    }
    ctx->pc = 0x1ADC20u;
label_1adc20:
    // 0x1adc20: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1adc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1adc24:
    // 0x1adc24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1adc24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1adc28:
    // 0x1adc28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adc2c:
    // 0x1adc2c: 0x0  nop
    ctx->pc = 0x1adc2cu;
    // NOP
label_1adc30:
    // 0x1adc30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1adc30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1adc34:
    // 0x1adc34: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1adc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1adc38:
    // 0x1adc38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1adc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adc3c:
    // 0x1adc3c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1adc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1adc40:
    // 0x1adc40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1adc40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1adc44:
    // 0x1adc44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adc44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adc48:
    // 0x1adc48: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1adc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adc4c:
    // 0x1adc4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1adc4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1adc50:
    // 0x1adc50: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1adc54:
    if (ctx->pc == 0x1ADC54u) {
        ctx->pc = 0x1ADC54u;
            // 0x1adc54: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1ADC58u;
        goto label_1adc58;
    }
    ctx->pc = 0x1ADC50u;
    {
        const bool branch_taken_0x1adc50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ADC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC50u;
            // 0x1adc54: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc50) {
            ctx->pc = 0x1ADC70u;
            goto label_1adc70;
        }
    }
    ctx->pc = 0x1ADC58u;
label_1adc58:
    // 0x1adc58: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1adc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1adc5c:
    // 0x1adc5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1adc5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1adc60:
    // 0x1adc60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adc64:
    // 0x1adc64: 0x0  nop
    ctx->pc = 0x1adc64u;
    // NOP
label_1adc68:
    // 0x1adc68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1adc68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1adc6c:
    // 0x1adc6c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1adc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1adc70:
    // 0x1adc70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1adc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adc74:
    // 0x1adc74: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1adc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1adc78:
    // 0x1adc78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1adc78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1adc7c:
    // 0x1adc7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adc80:
    // 0x1adc80: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1adc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adc84:
    // 0x1adc84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1adc84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1adc88:
    // 0x1adc88: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1adc8c:
    if (ctx->pc == 0x1ADC8Cu) {
        ctx->pc = 0x1ADC8Cu;
            // 0x1adc8c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1ADC90u;
        goto label_1adc90;
    }
    ctx->pc = 0x1ADC88u;
    {
        const bool branch_taken_0x1adc88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ADC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC88u;
            // 0x1adc8c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc88) {
            ctx->pc = 0x1ADCA8u;
            goto label_1adca8;
        }
    }
    ctx->pc = 0x1ADC90u;
label_1adc90:
    // 0x1adc90: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1adc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1adc94:
    // 0x1adc94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1adc94u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1adc98:
    // 0x1adc98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adc9c:
    // 0x1adc9c: 0x0  nop
    ctx->pc = 0x1adc9cu;
    // NOP
label_1adca0:
    // 0x1adca0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1adca0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1adca4:
    // 0x1adca4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1adca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1adca8:
    // 0x1adca8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1adca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adcac:
    // 0x1adcac: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1adcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1adcb0:
    // 0x1adcb0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1adcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1adcb4:
    // 0x1adcb4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1adcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1adcb8:
    // 0x1adcb8: 0xc06b828  jal         func_1AE0A0
label_1adcbc:
    if (ctx->pc == 0x1ADCBCu) {
        ctx->pc = 0x1ADCBCu;
            // 0x1adcbc: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x1ADCC0u;
        goto label_1adcc0;
    }
    ctx->pc = 0x1ADCB8u;
    SET_GPR_U32(ctx, 31, 0x1ADCC0u);
    ctx->pc = 0x1ADCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCB8u;
            // 0x1adcbc: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0A0u;
    if (runtime->hasFunction(0x1AE0A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCC0u; }
        if (ctx->pc != 0x1ADCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1ae0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCC0u; }
        if (ctx->pc != 0x1ADCC0u) { return; }
    }
    ctx->pc = 0x1ADCC0u;
label_1adcc0:
    // 0x1adcc0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1adcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1adcc4:
    // 0x1adcc4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1adcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1adcc8:
    // 0x1adcc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1adcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1adccc:
    // 0x1adccc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1adcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1adcd0:
    // 0x1adcd0: 0xc04b788  jal         func_12DE20
label_1adcd4:
    if (ctx->pc == 0x1ADCD4u) {
        ctx->pc = 0x1ADCD4u;
            // 0x1adcd4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1ADCD8u;
        goto label_1adcd8;
    }
    ctx->pc = 0x1ADCD0u;
    SET_GPR_U32(ctx, 31, 0x1ADCD8u);
    ctx->pc = 0x1ADCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCD0u;
            // 0x1adcd4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCD8u; }
        if (ctx->pc != 0x1ADCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCD8u; }
        if (ctx->pc != 0x1ADCD8u) { return; }
    }
    ctx->pc = 0x1ADCD8u;
label_1adcd8:
    // 0x1adcd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1adcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adcdc:
    // 0x1adcdc: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1adcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1adce0:
    // 0x1adce0: 0xc04b7da  jal         func_12DF68
label_1adce4:
    if (ctx->pc == 0x1ADCE4u) {
        ctx->pc = 0x1ADCE4u;
            // 0x1adce4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCE8u;
        goto label_1adce8;
    }
    ctx->pc = 0x1ADCE0u;
    SET_GPR_U32(ctx, 31, 0x1ADCE8u);
    ctx->pc = 0x1ADCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCE0u;
            // 0x1adce4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCE8u; }
        if (ctx->pc != 0x1ADCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCE8u; }
        if (ctx->pc != 0x1ADCE8u) { return; }
    }
    ctx->pc = 0x1ADCE8u;
label_1adce8:
    // 0x1adce8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1adce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adcec:
    // 0x1adcec: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1adcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1adcf0:
    // 0x1adcf0: 0xc04b804  jal         func_12E010
label_1adcf4:
    if (ctx->pc == 0x1ADCF4u) {
        ctx->pc = 0x1ADCF4u;
            // 0x1adcf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCF8u;
        goto label_1adcf8;
    }
    ctx->pc = 0x1ADCF0u;
    SET_GPR_U32(ctx, 31, 0x1ADCF8u);
    ctx->pc = 0x1ADCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCF0u;
            // 0x1adcf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCF8u; }
        if (ctx->pc != 0x1ADCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCF8u; }
        if (ctx->pc != 0x1ADCF8u) { return; }
    }
    ctx->pc = 0x1ADCF8u;
label_1adcf8:
    // 0x1adcf8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1adcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adcfc:
    // 0x1adcfc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1adcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1add00:
    // 0x1add00: 0xc04b7b0  jal         func_12DEC0
label_1add04:
    if (ctx->pc == 0x1ADD04u) {
        ctx->pc = 0x1ADD04u;
            // 0x1add04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD08u;
        goto label_1add08;
    }
    ctx->pc = 0x1ADD00u;
    SET_GPR_U32(ctx, 31, 0x1ADD08u);
    ctx->pc = 0x1ADD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD00u;
            // 0x1add04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD08u; }
        if (ctx->pc != 0x1ADD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD08u; }
        if (ctx->pc != 0x1ADD08u) { return; }
    }
    ctx->pc = 0x1ADD08u;
label_1add08:
    // 0x1add08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1add08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1add0c:
    // 0x1add0c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1add0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1add10:
    // 0x1add10: 0xc04b75e  jal         func_12DD78
label_1add14:
    if (ctx->pc == 0x1ADD14u) {
        ctx->pc = 0x1ADD14u;
            // 0x1add14: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1ADD18u;
        goto label_1add18;
    }
    ctx->pc = 0x1ADD10u;
    SET_GPR_U32(ctx, 31, 0x1ADD18u);
    ctx->pc = 0x1ADD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD10u;
            // 0x1add14: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD18u; }
        if (ctx->pc != 0x1ADD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD18u; }
        if (ctx->pc != 0x1ADD18u) { return; }
    }
    ctx->pc = 0x1ADD18u;
label_1add18:
    // 0x1add18: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1add18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1add1c:
    // 0x1add1c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1add1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1add20:
    // 0x1add20: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1add20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1add24:
    // 0x1add24: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1add28:
    if (ctx->pc == 0x1ADD28u) {
        ctx->pc = 0x1ADD2Cu;
        goto label_1add2c;
    }
    ctx->pc = 0x1ADD24u;
    {
        const bool branch_taken_0x1add24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1add24) {
            ctx->pc = 0x1ADD78u;
            goto label_1add78;
        }
    }
    ctx->pc = 0x1ADD2Cu;
label_1add2c:
    // 0x1add2c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1add2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1add30:
    // 0x1add30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1add34:
    if (ctx->pc == 0x1ADD34u) {
        ctx->pc = 0x1ADD38u;
        goto label_1add38;
    }
    ctx->pc = 0x1ADD30u;
    {
        const bool branch_taken_0x1add30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1add30) {
            ctx->pc = 0x1ADD48u;
            goto label_1add48;
        }
    }
    ctx->pc = 0x1ADD38u;
label_1add38:
    // 0x1add38: 0xc0604f0  jal         func_1813C0
label_1add3c:
    if (ctx->pc == 0x1ADD3Cu) {
        ctx->pc = 0x1ADD3Cu;
            // 0x1add3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1ADD40u;
        goto label_1add40;
    }
    ctx->pc = 0x1ADD38u;
    SET_GPR_U32(ctx, 31, 0x1ADD40u);
    ctx->pc = 0x1ADD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD38u;
            // 0x1add3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD40u; }
        if (ctx->pc != 0x1ADD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD40u; }
        if (ctx->pc != 0x1ADD40u) { return; }
    }
    ctx->pc = 0x1ADD40u;
label_1add40:
    // 0x1add40: 0x10000003  b           . + 4 + (0x3 << 2)
label_1add44:
    if (ctx->pc == 0x1ADD44u) {
        ctx->pc = 0x1ADD48u;
        goto label_1add48;
    }
    ctx->pc = 0x1ADD40u;
    {
        const bool branch_taken_0x1add40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1add40) {
            ctx->pc = 0x1ADD50u;
            goto label_1add50;
        }
    }
    ctx->pc = 0x1ADD48u;
label_1add48:
    // 0x1add48: 0xc0604dc  jal         func_181370
label_1add4c:
    if (ctx->pc == 0x1ADD4Cu) {
        ctx->pc = 0x1ADD4Cu;
            // 0x1add4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1ADD50u;
        goto label_1add50;
    }
    ctx->pc = 0x1ADD48u;
    SET_GPR_U32(ctx, 31, 0x1ADD50u);
    ctx->pc = 0x1ADD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD48u;
            // 0x1add4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD50u; }
        if (ctx->pc != 0x1ADD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD50u; }
        if (ctx->pc != 0x1ADD50u) { return; }
    }
    ctx->pc = 0x1ADD50u;
label_1add50:
    // 0x1add50: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1add50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1add54:
    // 0x1add54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1add58:
    if (ctx->pc == 0x1ADD58u) {
        ctx->pc = 0x1ADD5Cu;
        goto label_1add5c;
    }
    ctx->pc = 0x1ADD54u;
    {
        const bool branch_taken_0x1add54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1add54) {
            ctx->pc = 0x1ADD68u;
            goto label_1add68;
        }
    }
    ctx->pc = 0x1ADD5Cu;
label_1add5c:
    // 0x1add5c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1add60:
    if (ctx->pc == 0x1ADD60u) {
        ctx->pc = 0x1ADD60u;
            // 0x1add60: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1ADD64u;
        goto label_1add64;
    }
    ctx->pc = 0x1ADD5Cu;
    {
        const bool branch_taken_0x1add5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD5Cu;
            // 0x1add60: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add5c) {
            ctx->pc = 0x1ADD88u;
            goto label_1add88;
        }
    }
    ctx->pc = 0x1ADD64u;
label_1add64:
    // 0x1add64: 0x0  nop
    ctx->pc = 0x1add64u;
    // NOP
label_1add68:
    // 0x1add68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1add68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1add6c:
    // 0x1add6c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1add70:
    if (ctx->pc == 0x1ADD70u) {
        ctx->pc = 0x1ADD70u;
            // 0x1add70: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1ADD74u;
        goto label_1add74;
    }
    ctx->pc = 0x1ADD6Cu;
    {
        const bool branch_taken_0x1add6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD6Cu;
            // 0x1add70: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add6c) {
            ctx->pc = 0x1ADD88u;
            goto label_1add88;
        }
    }
    ctx->pc = 0x1ADD74u;
label_1add74:
    // 0x1add74: 0x0  nop
    ctx->pc = 0x1add74u;
    // NOP
label_1add78:
    // 0x1add78: 0xc0604dc  jal         func_181370
label_1add7c:
    if (ctx->pc == 0x1ADD7Cu) {
        ctx->pc = 0x1ADD7Cu;
            // 0x1add7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1ADD80u;
        goto label_1add80;
    }
    ctx->pc = 0x1ADD78u;
    SET_GPR_U32(ctx, 31, 0x1ADD80u);
    ctx->pc = 0x1ADD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD78u;
            // 0x1add7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD80u; }
        if (ctx->pc != 0x1ADD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD80u; }
        if (ctx->pc != 0x1ADD80u) { return; }
    }
    ctx->pc = 0x1ADD80u;
label_1add80:
    // 0x1add80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1add80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1add84:
    // 0x1add84: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1add84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1add88:
    // 0x1add88: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1add88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1add8c:
    // 0x1add8c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x1add8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_1add90:
    // 0x1add90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1add90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1add94:
    // 0x1add94: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1add94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1add98:
    // 0x1add98: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1add98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1add9c:
    // 0x1add9c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1add9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1adda0:
    // 0x1adda0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adda4:
    // 0x1adda4: 0x0  nop
    ctx->pc = 0x1adda4u;
    // NOP
label_1adda8:
    // 0x1adda8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1adda8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1addac:
    // 0x1addac: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1addacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1addb0:
    // 0x1addb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1addb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1addb4:
    // 0x1addb4: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1addb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1addb8:
    // 0x1addb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1addb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1addbc:
    // 0x1addbc: 0x0  nop
    ctx->pc = 0x1addbcu;
    // NOP
label_1addc0:
    // 0x1addc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1addc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1addc4:
    // 0x1addc4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1addc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1addc8:
    // 0x1addc8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1addc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1addcc:
    // 0x1addcc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1addccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1addd0:
    // 0x1addd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1addd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1addd4:
    // 0x1addd4: 0x0  nop
    ctx->pc = 0x1addd4u;
    // NOP
label_1addd8:
    // 0x1addd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1addd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1adddc:
    // 0x1adddc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1adddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1adde0:
    // 0x1adde0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1adde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1adde4:
    // 0x1adde4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1adde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1adde8:
    // 0x1adde8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adde8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1addec:
    // 0x1addec: 0x0  nop
    ctx->pc = 0x1addecu;
    // NOP
label_1addf0:
    // 0x1addf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1addf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1addf4:
    // 0x1addf4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1addf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1addf8:
    // 0x1addf8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1addf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1addfc:
    // 0x1addfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1addfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ade00:
    // 0x1ade00: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ade00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1ade04:
    // 0x1ade04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ade04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ade08:
    // 0x1ade08: 0xc4630124  lwc1        $f3, 0x124($v1)
    ctx->pc = 0x1ade08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ade0c:
    // 0x1ade0c: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1ade0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ade10:
    // 0x1ade10: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1ade14:
    if (ctx->pc == 0x1ADE14u) {
        ctx->pc = 0x1ADE14u;
            // 0x1ade14: 0x3c02c25c  lui         $v0, 0xC25C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49756 << 16));
        ctx->pc = 0x1ADE18u;
        goto label_1ade18;
    }
    ctx->pc = 0x1ADE10u;
    {
        const bool branch_taken_0x1ade10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ADE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE10u;
            // 0x1ade14: 0x3c02c25c  lui         $v0, 0xC25C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49756 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade10) {
            ctx->pc = 0x1ADE48u;
            goto label_1ade48;
        }
    }
    ctx->pc = 0x1ADE18u;
label_1ade18:
    // 0x1ade18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ade18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ade1c:
    // 0x1ade1c: 0x0  nop
    ctx->pc = 0x1ade1cu;
    // NOP
label_1ade20:
    // 0x1ade20: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1ade20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ade24:
    // 0x1ade24: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1ade28:
    if (ctx->pc == 0x1ADE28u) {
        ctx->pc = 0x1ADE2Cu;
        goto label_1ade2c;
    }
    ctx->pc = 0x1ADE24u;
    {
        const bool branch_taken_0x1ade24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ade24) {
            ctx->pc = 0x1ADE48u;
            goto label_1ade48;
        }
    }
    ctx->pc = 0x1ADE2Cu;
label_1ade2c:
    // 0x1ade2c: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x1ade2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ade30:
    // 0x1ade30: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1ade30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ade34:
    // 0x1ade34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1ade38:
    if (ctx->pc == 0x1ADE38u) {
        ctx->pc = 0x1ADE3Cu;
        goto label_1ade3c;
    }
    ctx->pc = 0x1ADE34u;
    {
        const bool branch_taken_0x1ade34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ade34) {
            ctx->pc = 0x1ADE48u;
            goto label_1ade48;
        }
    }
    ctx->pc = 0x1ADE3Cu;
label_1ade3c:
    // 0x1ade3c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ade3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ade40:
    // 0x1ade40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ade44:
    if (ctx->pc == 0x1ADE44u) {
        ctx->pc = 0x1ADE48u;
        goto label_1ade48;
    }
    ctx->pc = 0x1ADE40u;
    {
        const bool branch_taken_0x1ade40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ade40) {
            ctx->pc = 0x1ADE60u;
            goto label_1ade60;
        }
    }
    ctx->pc = 0x1ADE48u;
label_1ade48:
    // 0x1ade48: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1ade48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1ade4c:
    // 0x1ade4c: 0x40f809  jalr        $v0
label_1ade50:
    if (ctx->pc == 0x1ADE50u) {
        ctx->pc = 0x1ADE50u;
            // 0x1ade50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE54u;
        goto label_1ade54;
    }
    ctx->pc = 0x1ADE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ADE54u);
        ctx->pc = 0x1ADE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE4Cu;
            // 0x1ade50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADAE0u: goto label_1adae0;
            case 0x1ADAE4u: goto label_1adae4;
            case 0x1ADAE8u: goto label_1adae8;
            case 0x1ADAECu: goto label_1adaec;
            case 0x1ADAF0u: goto label_1adaf0;
            case 0x1ADAF4u: goto label_1adaf4;
            case 0x1ADAF8u: goto label_1adaf8;
            case 0x1ADAFCu: goto label_1adafc;
            case 0x1ADB00u: goto label_1adb00;
            case 0x1ADB04u: goto label_1adb04;
            case 0x1ADB08u: goto label_1adb08;
            case 0x1ADB0Cu: goto label_1adb0c;
            case 0x1ADB10u: goto label_1adb10;
            case 0x1ADB14u: goto label_1adb14;
            case 0x1ADB18u: goto label_1adb18;
            case 0x1ADB1Cu: goto label_1adb1c;
            case 0x1ADB20u: goto label_1adb20;
            case 0x1ADB24u: goto label_1adb24;
            case 0x1ADB28u: goto label_1adb28;
            case 0x1ADB2Cu: goto label_1adb2c;
            case 0x1ADB30u: goto label_1adb30;
            case 0x1ADB34u: goto label_1adb34;
            case 0x1ADB38u: goto label_1adb38;
            case 0x1ADB3Cu: goto label_1adb3c;
            case 0x1ADB40u: goto label_1adb40;
            case 0x1ADB44u: goto label_1adb44;
            case 0x1ADB48u: goto label_1adb48;
            case 0x1ADB4Cu: goto label_1adb4c;
            case 0x1ADB50u: goto label_1adb50;
            case 0x1ADB54u: goto label_1adb54;
            case 0x1ADB58u: goto label_1adb58;
            case 0x1ADB5Cu: goto label_1adb5c;
            case 0x1ADB60u: goto label_1adb60;
            case 0x1ADB64u: goto label_1adb64;
            case 0x1ADB68u: goto label_1adb68;
            case 0x1ADB6Cu: goto label_1adb6c;
            case 0x1ADB70u: goto label_1adb70;
            case 0x1ADB74u: goto label_1adb74;
            case 0x1ADB78u: goto label_1adb78;
            case 0x1ADB7Cu: goto label_1adb7c;
            case 0x1ADB80u: goto label_1adb80;
            case 0x1ADB84u: goto label_1adb84;
            case 0x1ADB88u: goto label_1adb88;
            case 0x1ADB8Cu: goto label_1adb8c;
            case 0x1ADB90u: goto label_1adb90;
            case 0x1ADB94u: goto label_1adb94;
            case 0x1ADB98u: goto label_1adb98;
            case 0x1ADB9Cu: goto label_1adb9c;
            case 0x1ADBA0u: goto label_1adba0;
            case 0x1ADBA4u: goto label_1adba4;
            case 0x1ADBA8u: goto label_1adba8;
            case 0x1ADBACu: goto label_1adbac;
            case 0x1ADBB0u: goto label_1adbb0;
            case 0x1ADBB4u: goto label_1adbb4;
            case 0x1ADBB8u: goto label_1adbb8;
            case 0x1ADBBCu: goto label_1adbbc;
            case 0x1ADBC0u: goto label_1adbc0;
            case 0x1ADBC4u: goto label_1adbc4;
            case 0x1ADBC8u: goto label_1adbc8;
            case 0x1ADBCCu: goto label_1adbcc;
            case 0x1ADBD0u: goto label_1adbd0;
            case 0x1ADBD4u: goto label_1adbd4;
            case 0x1ADBD8u: goto label_1adbd8;
            case 0x1ADBDCu: goto label_1adbdc;
            case 0x1ADBE0u: goto label_1adbe0;
            case 0x1ADBE4u: goto label_1adbe4;
            case 0x1ADBE8u: goto label_1adbe8;
            case 0x1ADBECu: goto label_1adbec;
            case 0x1ADBF0u: goto label_1adbf0;
            case 0x1ADBF4u: goto label_1adbf4;
            case 0x1ADBF8u: goto label_1adbf8;
            case 0x1ADBFCu: goto label_1adbfc;
            case 0x1ADC00u: goto label_1adc00;
            case 0x1ADC04u: goto label_1adc04;
            case 0x1ADC08u: goto label_1adc08;
            case 0x1ADC0Cu: goto label_1adc0c;
            case 0x1ADC10u: goto label_1adc10;
            case 0x1ADC14u: goto label_1adc14;
            case 0x1ADC18u: goto label_1adc18;
            case 0x1ADC1Cu: goto label_1adc1c;
            case 0x1ADC20u: goto label_1adc20;
            case 0x1ADC24u: goto label_1adc24;
            case 0x1ADC28u: goto label_1adc28;
            case 0x1ADC2Cu: goto label_1adc2c;
            case 0x1ADC30u: goto label_1adc30;
            case 0x1ADC34u: goto label_1adc34;
            case 0x1ADC38u: goto label_1adc38;
            case 0x1ADC3Cu: goto label_1adc3c;
            case 0x1ADC40u: goto label_1adc40;
            case 0x1ADC44u: goto label_1adc44;
            case 0x1ADC48u: goto label_1adc48;
            case 0x1ADC4Cu: goto label_1adc4c;
            case 0x1ADC50u: goto label_1adc50;
            case 0x1ADC54u: goto label_1adc54;
            case 0x1ADC58u: goto label_1adc58;
            case 0x1ADC5Cu: goto label_1adc5c;
            case 0x1ADC60u: goto label_1adc60;
            case 0x1ADC64u: goto label_1adc64;
            case 0x1ADC68u: goto label_1adc68;
            case 0x1ADC6Cu: goto label_1adc6c;
            case 0x1ADC70u: goto label_1adc70;
            case 0x1ADC74u: goto label_1adc74;
            case 0x1ADC78u: goto label_1adc78;
            case 0x1ADC7Cu: goto label_1adc7c;
            case 0x1ADC80u: goto label_1adc80;
            case 0x1ADC84u: goto label_1adc84;
            case 0x1ADC88u: goto label_1adc88;
            case 0x1ADC8Cu: goto label_1adc8c;
            case 0x1ADC90u: goto label_1adc90;
            case 0x1ADC94u: goto label_1adc94;
            case 0x1ADC98u: goto label_1adc98;
            case 0x1ADC9Cu: goto label_1adc9c;
            case 0x1ADCA0u: goto label_1adca0;
            case 0x1ADCA4u: goto label_1adca4;
            case 0x1ADCA8u: goto label_1adca8;
            case 0x1ADCACu: goto label_1adcac;
            case 0x1ADCB0u: goto label_1adcb0;
            case 0x1ADCB4u: goto label_1adcb4;
            case 0x1ADCB8u: goto label_1adcb8;
            case 0x1ADCBCu: goto label_1adcbc;
            case 0x1ADCC0u: goto label_1adcc0;
            case 0x1ADCC4u: goto label_1adcc4;
            case 0x1ADCC8u: goto label_1adcc8;
            case 0x1ADCCCu: goto label_1adccc;
            case 0x1ADCD0u: goto label_1adcd0;
            case 0x1ADCD4u: goto label_1adcd4;
            case 0x1ADCD8u: goto label_1adcd8;
            case 0x1ADCDCu: goto label_1adcdc;
            case 0x1ADCE0u: goto label_1adce0;
            case 0x1ADCE4u: goto label_1adce4;
            case 0x1ADCE8u: goto label_1adce8;
            case 0x1ADCECu: goto label_1adcec;
            case 0x1ADCF0u: goto label_1adcf0;
            case 0x1ADCF4u: goto label_1adcf4;
            case 0x1ADCF8u: goto label_1adcf8;
            case 0x1ADCFCu: goto label_1adcfc;
            case 0x1ADD00u: goto label_1add00;
            case 0x1ADD04u: goto label_1add04;
            case 0x1ADD08u: goto label_1add08;
            case 0x1ADD0Cu: goto label_1add0c;
            case 0x1ADD10u: goto label_1add10;
            case 0x1ADD14u: goto label_1add14;
            case 0x1ADD18u: goto label_1add18;
            case 0x1ADD1Cu: goto label_1add1c;
            case 0x1ADD20u: goto label_1add20;
            case 0x1ADD24u: goto label_1add24;
            case 0x1ADD28u: goto label_1add28;
            case 0x1ADD2Cu: goto label_1add2c;
            case 0x1ADD30u: goto label_1add30;
            case 0x1ADD34u: goto label_1add34;
            case 0x1ADD38u: goto label_1add38;
            case 0x1ADD3Cu: goto label_1add3c;
            case 0x1ADD40u: goto label_1add40;
            case 0x1ADD44u: goto label_1add44;
            case 0x1ADD48u: goto label_1add48;
            case 0x1ADD4Cu: goto label_1add4c;
            case 0x1ADD50u: goto label_1add50;
            case 0x1ADD54u: goto label_1add54;
            case 0x1ADD58u: goto label_1add58;
            case 0x1ADD5Cu: goto label_1add5c;
            case 0x1ADD60u: goto label_1add60;
            case 0x1ADD64u: goto label_1add64;
            case 0x1ADD68u: goto label_1add68;
            case 0x1ADD6Cu: goto label_1add6c;
            case 0x1ADD70u: goto label_1add70;
            case 0x1ADD74u: goto label_1add74;
            case 0x1ADD78u: goto label_1add78;
            case 0x1ADD7Cu: goto label_1add7c;
            case 0x1ADD80u: goto label_1add80;
            case 0x1ADD84u: goto label_1add84;
            case 0x1ADD88u: goto label_1add88;
            case 0x1ADD8Cu: goto label_1add8c;
            case 0x1ADD90u: goto label_1add90;
            case 0x1ADD94u: goto label_1add94;
            case 0x1ADD98u: goto label_1add98;
            case 0x1ADD9Cu: goto label_1add9c;
            case 0x1ADDA0u: goto label_1adda0;
            case 0x1ADDA4u: goto label_1adda4;
            case 0x1ADDA8u: goto label_1adda8;
            case 0x1ADDACu: goto label_1addac;
            case 0x1ADDB0u: goto label_1addb0;
            case 0x1ADDB4u: goto label_1addb4;
            case 0x1ADDB8u: goto label_1addb8;
            case 0x1ADDBCu: goto label_1addbc;
            case 0x1ADDC0u: goto label_1addc0;
            case 0x1ADDC4u: goto label_1addc4;
            case 0x1ADDC8u: goto label_1addc8;
            case 0x1ADDCCu: goto label_1addcc;
            case 0x1ADDD0u: goto label_1addd0;
            case 0x1ADDD4u: goto label_1addd4;
            case 0x1ADDD8u: goto label_1addd8;
            case 0x1ADDDCu: goto label_1adddc;
            case 0x1ADDE0u: goto label_1adde0;
            case 0x1ADDE4u: goto label_1adde4;
            case 0x1ADDE8u: goto label_1adde8;
            case 0x1ADDECu: goto label_1addec;
            case 0x1ADDF0u: goto label_1addf0;
            case 0x1ADDF4u: goto label_1addf4;
            case 0x1ADDF8u: goto label_1addf8;
            case 0x1ADDFCu: goto label_1addfc;
            case 0x1ADE00u: goto label_1ade00;
            case 0x1ADE04u: goto label_1ade04;
            case 0x1ADE08u: goto label_1ade08;
            case 0x1ADE0Cu: goto label_1ade0c;
            case 0x1ADE10u: goto label_1ade10;
            case 0x1ADE14u: goto label_1ade14;
            case 0x1ADE18u: goto label_1ade18;
            case 0x1ADE1Cu: goto label_1ade1c;
            case 0x1ADE20u: goto label_1ade20;
            case 0x1ADE24u: goto label_1ade24;
            case 0x1ADE28u: goto label_1ade28;
            case 0x1ADE2Cu: goto label_1ade2c;
            case 0x1ADE30u: goto label_1ade30;
            case 0x1ADE34u: goto label_1ade34;
            case 0x1ADE38u: goto label_1ade38;
            case 0x1ADE3Cu: goto label_1ade3c;
            case 0x1ADE40u: goto label_1ade40;
            case 0x1ADE44u: goto label_1ade44;
            case 0x1ADE48u: goto label_1ade48;
            case 0x1ADE4Cu: goto label_1ade4c;
            case 0x1ADE50u: goto label_1ade50;
            case 0x1ADE54u: goto label_1ade54;
            case 0x1ADE58u: goto label_1ade58;
            case 0x1ADE5Cu: goto label_1ade5c;
            case 0x1ADE60u: goto label_1ade60;
            case 0x1ADE64u: goto label_1ade64;
            case 0x1ADE68u: goto label_1ade68;
            case 0x1ADE6Cu: goto label_1ade6c;
            case 0x1ADE70u: goto label_1ade70;
            case 0x1ADE74u: goto label_1ade74;
            case 0x1ADE78u: goto label_1ade78;
            case 0x1ADE7Cu: goto label_1ade7c;
            case 0x1ADE80u: goto label_1ade80;
            case 0x1ADE84u: goto label_1ade84;
            case 0x1ADE88u: goto label_1ade88;
            case 0x1ADE8Cu: goto label_1ade8c;
            case 0x1ADE90u: goto label_1ade90;
            case 0x1ADE94u: goto label_1ade94;
            case 0x1ADE98u: goto label_1ade98;
            case 0x1ADE9Cu: goto label_1ade9c;
            case 0x1ADEA0u: goto label_1adea0;
            case 0x1ADEA4u: goto label_1adea4;
            case 0x1ADEA8u: goto label_1adea8;
            case 0x1ADEACu: goto label_1adeac;
            case 0x1ADEB0u: goto label_1adeb0;
            case 0x1ADEB4u: goto label_1adeb4;
            case 0x1ADEB8u: goto label_1adeb8;
            case 0x1ADEBCu: goto label_1adebc;
            case 0x1ADEC0u: goto label_1adec0;
            case 0x1ADEC4u: goto label_1adec4;
            case 0x1ADEC8u: goto label_1adec8;
            case 0x1ADECCu: goto label_1adecc;
            case 0x1ADED0u: goto label_1aded0;
            case 0x1ADED4u: goto label_1aded4;
            case 0x1ADED8u: goto label_1aded8;
            case 0x1ADEDCu: goto label_1adedc;
            case 0x1ADEE0u: goto label_1adee0;
            case 0x1ADEE4u: goto label_1adee4;
            case 0x1ADEE8u: goto label_1adee8;
            case 0x1ADEECu: goto label_1adeec;
            case 0x1ADEF0u: goto label_1adef0;
            case 0x1ADEF4u: goto label_1adef4;
            case 0x1ADEF8u: goto label_1adef8;
            case 0x1ADEFCu: goto label_1adefc;
            case 0x1ADF00u: goto label_1adf00;
            case 0x1ADF04u: goto label_1adf04;
            case 0x1ADF08u: goto label_1adf08;
            case 0x1ADF0Cu: goto label_1adf0c;
            case 0x1ADF10u: goto label_1adf10;
            case 0x1ADF14u: goto label_1adf14;
            case 0x1ADF18u: goto label_1adf18;
            case 0x1ADF1Cu: goto label_1adf1c;
            case 0x1ADF20u: goto label_1adf20;
            case 0x1ADF24u: goto label_1adf24;
            case 0x1ADF28u: goto label_1adf28;
            case 0x1ADF2Cu: goto label_1adf2c;
            case 0x1ADF30u: goto label_1adf30;
            case 0x1ADF34u: goto label_1adf34;
            case 0x1ADF38u: goto label_1adf38;
            case 0x1ADF3Cu: goto label_1adf3c;
            case 0x1ADF40u: goto label_1adf40;
            case 0x1ADF44u: goto label_1adf44;
            case 0x1ADF48u: goto label_1adf48;
            case 0x1ADF4Cu: goto label_1adf4c;
            case 0x1ADF50u: goto label_1adf50;
            case 0x1ADF54u: goto label_1adf54;
            case 0x1ADF58u: goto label_1adf58;
            case 0x1ADF5Cu: goto label_1adf5c;
            case 0x1ADF60u: goto label_1adf60;
            case 0x1ADF64u: goto label_1adf64;
            case 0x1ADF68u: goto label_1adf68;
            case 0x1ADF6Cu: goto label_1adf6c;
            case 0x1ADF70u: goto label_1adf70;
            case 0x1ADF74u: goto label_1adf74;
            case 0x1ADF78u: goto label_1adf78;
            case 0x1ADF7Cu: goto label_1adf7c;
            case 0x1ADF80u: goto label_1adf80;
            case 0x1ADF84u: goto label_1adf84;
            case 0x1ADF88u: goto label_1adf88;
            case 0x1ADF8Cu: goto label_1adf8c;
            case 0x1ADF90u: goto label_1adf90;
            case 0x1ADF94u: goto label_1adf94;
            case 0x1ADF98u: goto label_1adf98;
            case 0x1ADF9Cu: goto label_1adf9c;
            case 0x1ADFA0u: goto label_1adfa0;
            case 0x1ADFA4u: goto label_1adfa4;
            case 0x1ADFA8u: goto label_1adfa8;
            case 0x1ADFACu: goto label_1adfac;
            case 0x1ADFB0u: goto label_1adfb0;
            case 0x1ADFB4u: goto label_1adfb4;
            case 0x1ADFB8u: goto label_1adfb8;
            case 0x1ADFBCu: goto label_1adfbc;
            case 0x1ADFC0u: goto label_1adfc0;
            case 0x1ADFC4u: goto label_1adfc4;
            case 0x1ADFC8u: goto label_1adfc8;
            case 0x1ADFCCu: goto label_1adfcc;
            case 0x1ADFD0u: goto label_1adfd0;
            case 0x1ADFD4u: goto label_1adfd4;
            case 0x1ADFD8u: goto label_1adfd8;
            case 0x1ADFDCu: goto label_1adfdc;
            case 0x1ADFE0u: goto label_1adfe0;
            case 0x1ADFE4u: goto label_1adfe4;
            case 0x1ADFE8u: goto label_1adfe8;
            case 0x1ADFECu: goto label_1adfec;
            case 0x1ADFF0u: goto label_1adff0;
            case 0x1ADFF4u: goto label_1adff4;
            case 0x1ADFF8u: goto label_1adff8;
            case 0x1ADFFCu: goto label_1adffc;
            case 0x1AE000u: goto label_1ae000;
            case 0x1AE004u: goto label_1ae004;
            case 0x1AE008u: goto label_1ae008;
            case 0x1AE00Cu: goto label_1ae00c;
            case 0x1AE010u: goto label_1ae010;
            case 0x1AE014u: goto label_1ae014;
            case 0x1AE018u: goto label_1ae018;
            case 0x1AE01Cu: goto label_1ae01c;
            case 0x1AE020u: goto label_1ae020;
            case 0x1AE024u: goto label_1ae024;
            case 0x1AE028u: goto label_1ae028;
            case 0x1AE02Cu: goto label_1ae02c;
            case 0x1AE030u: goto label_1ae030;
            case 0x1AE034u: goto label_1ae034;
            case 0x1AE038u: goto label_1ae038;
            case 0x1AE03Cu: goto label_1ae03c;
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE044u: goto label_1ae044;
            case 0x1AE048u: goto label_1ae048;
            case 0x1AE04Cu: goto label_1ae04c;
            case 0x1AE050u: goto label_1ae050;
            case 0x1AE054u: goto label_1ae054;
            case 0x1AE058u: goto label_1ae058;
            case 0x1AE05Cu: goto label_1ae05c;
            case 0x1AE060u: goto label_1ae060;
            case 0x1AE064u: goto label_1ae064;
            case 0x1AE068u: goto label_1ae068;
            case 0x1AE06Cu: goto label_1ae06c;
            case 0x1AE070u: goto label_1ae070;
            case 0x1AE074u: goto label_1ae074;
            case 0x1AE078u: goto label_1ae078;
            case 0x1AE07Cu: goto label_1ae07c;
            case 0x1AE080u: goto label_1ae080;
            case 0x1AE084u: goto label_1ae084;
            case 0x1AE088u: goto label_1ae088;
            case 0x1AE08Cu: goto label_1ae08c;
            case 0x1AE090u: goto label_1ae090;
            case 0x1AE094u: goto label_1ae094;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE54u; }
            if (ctx->pc != 0x1ADE54u) { return; }
        }
    }
    ctx->pc = 0x1ADE54u;
label_1ade54:
    // 0x1ade54: 0x1000008c  b           . + 4 + (0x8C << 2)
label_1ade58:
    if (ctx->pc == 0x1ADE58u) {
        ctx->pc = 0x1ADE5Cu;
        goto label_1ade5c;
    }
    ctx->pc = 0x1ADE54u;
    {
        const bool branch_taken_0x1ade54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ade54) {
            ctx->pc = 0x1AE088u;
            goto label_1ae088;
        }
    }
    ctx->pc = 0x1ADE5Cu;
label_1ade5c:
    // 0x1ade5c: 0x0  nop
    ctx->pc = 0x1ade5cu;
    // NOP
label_1ade60:
    // 0x1ade60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ade60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ade64:
    // 0x1ade64: 0x1c400080  bgtz        $v0, . + 4 + (0x80 << 2)
label_1ade68:
    if (ctx->pc == 0x1ADE68u) {
        ctx->pc = 0x1ADE68u;
            // 0x1ade68: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->pc = 0x1ADE6Cu;
        goto label_1ade6c;
    }
    ctx->pc = 0x1ADE64u;
    {
        const bool branch_taken_0x1ade64 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1ADE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE64u;
            // 0x1ade68: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade64) {
            ctx->pc = 0x1AE068u;
            goto label_1ae068;
        }
    }
    ctx->pc = 0x1ADE6Cu;
label_1ade6c:
    // 0x1ade6c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ade6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ade70:
    // 0x1ade70: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ade70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ade74:
    // 0x1ade74: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ade74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ade78:
    // 0x1ade78: 0xc06b2c4  jal         func_1ACB10
label_1ade7c:
    if (ctx->pc == 0x1ADE7Cu) {
        ctx->pc = 0x1ADE7Cu;
            // 0x1ade7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE80u;
        goto label_1ade80;
    }
    ctx->pc = 0x1ADE78u;
    SET_GPR_U32(ctx, 31, 0x1ADE80u);
    ctx->pc = 0x1ADE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE78u;
            // 0x1ade7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB10u;
    if (runtime->hasFunction(0x1ACB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ACB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE80u; }
        if (ctx->pc != 0x1ADE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_04_0x1acb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE80u; }
        if (ctx->pc != 0x1ADE80u) { return; }
    }
    ctx->pc = 0x1ADE80u;
label_1ade80:
    // 0x1ade80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ade80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ade84:
    // 0x1ade84: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1ade84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ade88:
    // 0x1ade88: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ade88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ade8c:
    // 0x1ade8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ade8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ade90:
    // 0x1ade90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ade90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ade94:
    // 0x1ade94: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ade94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ade98:
    // 0x1ade98: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ade98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ade9c:
    // 0x1ade9c: 0xc06b2c4  jal         func_1ACB10
label_1adea0:
    if (ctx->pc == 0x1ADEA0u) {
        ctx->pc = 0x1ADEA0u;
            // 0x1adea0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEA4u;
        goto label_1adea4;
    }
    ctx->pc = 0x1ADE9Cu;
    SET_GPR_U32(ctx, 31, 0x1ADEA4u);
    ctx->pc = 0x1ADEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE9Cu;
            // 0x1adea0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB10u;
    if (runtime->hasFunction(0x1ACB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ACB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEA4u; }
        if (ctx->pc != 0x1ADEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_04_0x1acb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEA4u; }
        if (ctx->pc != 0x1ADEA4u) { return; }
    }
    ctx->pc = 0x1ADEA4u;
label_1adea4:
    // 0x1adea4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1adea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adea8:
    // 0x1adea8: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1adea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adeac:
    // 0x1adeac: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1adeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1adeb0:
    // 0x1adeb0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adeb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1adeb4:
    // 0x1adeb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adeb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1adeb8:
    // 0x1adeb8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1adeb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1adebc:
    // 0x1adebc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1adebcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1adec0:
    // 0x1adec0: 0xc06b2c4  jal         func_1ACB10
label_1adec4:
    if (ctx->pc == 0x1ADEC4u) {
        ctx->pc = 0x1ADEC4u;
            // 0x1adec4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEC8u;
        goto label_1adec8;
    }
    ctx->pc = 0x1ADEC0u;
    SET_GPR_U32(ctx, 31, 0x1ADEC8u);
    ctx->pc = 0x1ADEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEC0u;
            // 0x1adec4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB10u;
    if (runtime->hasFunction(0x1ACB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ACB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEC8u; }
        if (ctx->pc != 0x1ADEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_04_0x1acb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEC8u; }
        if (ctx->pc != 0x1ADEC8u) { return; }
    }
    ctx->pc = 0x1ADEC8u;
label_1adec8:
    // 0x1adec8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1adec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adecc:
    // 0x1adecc: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1adeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aded0:
    // 0x1aded0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1aded0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aded4:
    // 0x1aded4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aded4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1aded8:
    // 0x1aded8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aded8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1adedc:
    // 0x1adedc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1adedcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1adee0:
    // 0x1adee0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1adee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1adee4:
    // 0x1adee4: 0xc06b2c4  jal         func_1ACB10
label_1adee8:
    if (ctx->pc == 0x1ADEE8u) {
        ctx->pc = 0x1ADEE8u;
            // 0x1adee8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEECu;
        goto label_1adeec;
    }
    ctx->pc = 0x1ADEE4u;
    SET_GPR_U32(ctx, 31, 0x1ADEECu);
    ctx->pc = 0x1ADEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEE4u;
            // 0x1adee8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB10u;
    if (runtime->hasFunction(0x1ACB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ACB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEECu; }
        if (ctx->pc != 0x1ADEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_04_0x1acb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEECu; }
        if (ctx->pc != 0x1ADEECu) { return; }
    }
    ctx->pc = 0x1ADEECu;
label_1adeec:
    // 0x1adeec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1adeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adef0:
    // 0x1adef0: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1adef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adef4:
    // 0x1adef4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1adef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1adef8:
    // 0x1adef8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1adefc:
    // 0x1adefc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adefcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1adf00:
    // 0x1adf00: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1adf00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1adf04:
    // 0x1adf04: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1adf04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1adf08:
    // 0x1adf08: 0xc06b2c4  jal         func_1ACB10
label_1adf0c:
    if (ctx->pc == 0x1ADF0Cu) {
        ctx->pc = 0x1ADF0Cu;
            // 0x1adf0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF10u;
        goto label_1adf10;
    }
    ctx->pc = 0x1ADF08u;
    SET_GPR_U32(ctx, 31, 0x1ADF10u);
    ctx->pc = 0x1ADF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF08u;
            // 0x1adf0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB10u;
    if (runtime->hasFunction(0x1ACB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ACB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF10u; }
        if (ctx->pc != 0x1ADF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_04_0x1acb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF10u; }
        if (ctx->pc != 0x1ADF10u) { return; }
    }
    ctx->pc = 0x1ADF10u;
label_1adf10:
    // 0x1adf10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1adf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adf14:
    // 0x1adf14: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1adf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adf18:
    // 0x1adf18: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1adf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1adf1c:
    // 0x1adf1c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adf1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1adf20:
    // 0x1adf20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adf20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1adf24:
    // 0x1adf24: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1adf24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1adf28:
    // 0x1adf28: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1adf28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1adf2c:
    // 0x1adf2c: 0xc06b2c4  jal         func_1ACB10
label_1adf30:
    if (ctx->pc == 0x1ADF30u) {
        ctx->pc = 0x1ADF30u;
            // 0x1adf30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF34u;
        goto label_1adf34;
    }
    ctx->pc = 0x1ADF2Cu;
    SET_GPR_U32(ctx, 31, 0x1ADF34u);
    ctx->pc = 0x1ADF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF2Cu;
            // 0x1adf30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB10u;
    if (runtime->hasFunction(0x1ACB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ACB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF34u; }
        if (ctx->pc != 0x1ADF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_04_0x1acb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF34u; }
        if (ctx->pc != 0x1ADF34u) { return; }
    }
    ctx->pc = 0x1ADF34u;
label_1adf34:
    // 0x1adf34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1adf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adf38:
    // 0x1adf38: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1adf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adf3c:
    // 0x1adf3c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1adf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1adf40:
    // 0x1adf40: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adf40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1adf44:
    // 0x1adf44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adf44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1adf48:
    // 0x1adf48: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1adf48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1adf4c:
    // 0x1adf4c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1adf4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1adf50:
    // 0x1adf50: 0xc06b2c4  jal         func_1ACB10
label_1adf54:
    if (ctx->pc == 0x1ADF54u) {
        ctx->pc = 0x1ADF54u;
            // 0x1adf54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF58u;
        goto label_1adf58;
    }
    ctx->pc = 0x1ADF50u;
    SET_GPR_U32(ctx, 31, 0x1ADF58u);
    ctx->pc = 0x1ADF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF50u;
            // 0x1adf54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB10u;
    if (runtime->hasFunction(0x1ACB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ACB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF58u; }
        if (ctx->pc != 0x1ADF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_04_0x1acb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF58u; }
        if (ctx->pc != 0x1ADF58u) { return; }
    }
    ctx->pc = 0x1ADF58u;
label_1adf58:
    // 0x1adf58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1adf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adf5c:
    // 0x1adf5c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1adf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adf60:
    // 0x1adf60: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1adf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1adf64:
    // 0x1adf64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adf64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1adf68:
    // 0x1adf68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adf68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1adf6c:
    // 0x1adf6c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1adf6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1adf70:
    // 0x1adf70: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1adf70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1adf74:
    // 0x1adf74: 0xc06b2c4  jal         func_1ACB10
label_1adf78:
    if (ctx->pc == 0x1ADF78u) {
        ctx->pc = 0x1ADF78u;
            // 0x1adf78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF7Cu;
        goto label_1adf7c;
    }
    ctx->pc = 0x1ADF74u;
    SET_GPR_U32(ctx, 31, 0x1ADF7Cu);
    ctx->pc = 0x1ADF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF74u;
            // 0x1adf78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB10u;
    if (runtime->hasFunction(0x1ACB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ACB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF7Cu; }
        if (ctx->pc != 0x1ADF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_04_0x1acb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF7Cu; }
        if (ctx->pc != 0x1ADF7Cu) { return; }
    }
    ctx->pc = 0x1ADF7Cu;
label_1adf7c:
    // 0x1adf7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1adf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adf80:
    // 0x1adf80: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1adf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adf84:
    // 0x1adf84: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1adf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1adf88:
    // 0x1adf88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adf88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1adf8c:
    // 0x1adf8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adf8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1adf90:
    // 0x1adf90: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1adf90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1adf94:
    // 0x1adf94: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1adf94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1adf98:
    // 0x1adf98: 0xc06ba20  jal         func_1AE880
label_1adf9c:
    if (ctx->pc == 0x1ADF9Cu) {
        ctx->pc = 0x1ADF9Cu;
            // 0x1adf9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFA0u;
        goto label_1adfa0;
    }
    ctx->pc = 0x1ADF98u;
    SET_GPR_U32(ctx, 31, 0x1ADFA0u);
    ctx->pc = 0x1ADF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF98u;
            // 0x1adf9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE880u;
    if (runtime->hasFunction(0x1AE880u)) {
        auto targetFn = runtime->lookupFunction(0x1AE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFA0u; }
        if (ctx->pc != 0x1ADFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_06_0x1ae880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFA0u; }
        if (ctx->pc != 0x1ADFA0u) { return; }
    }
    ctx->pc = 0x1ADFA0u;
label_1adfa0:
    // 0x1adfa0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1adfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adfa4:
    // 0x1adfa4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1adfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adfa8:
    // 0x1adfa8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1adfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1adfac:
    // 0x1adfac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adfacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1adfb0:
    // 0x1adfb0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adfb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1adfb4:
    // 0x1adfb4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1adfb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1adfb8:
    // 0x1adfb8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1adfb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1adfbc:
    // 0x1adfbc: 0xc06ba20  jal         func_1AE880
label_1adfc0:
    if (ctx->pc == 0x1ADFC0u) {
        ctx->pc = 0x1ADFC0u;
            // 0x1adfc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFC4u;
        goto label_1adfc4;
    }
    ctx->pc = 0x1ADFBCu;
    SET_GPR_U32(ctx, 31, 0x1ADFC4u);
    ctx->pc = 0x1ADFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFBCu;
            // 0x1adfc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE880u;
    if (runtime->hasFunction(0x1AE880u)) {
        auto targetFn = runtime->lookupFunction(0x1AE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFC4u; }
        if (ctx->pc != 0x1ADFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_06_0x1ae880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFC4u; }
        if (ctx->pc != 0x1ADFC4u) { return; }
    }
    ctx->pc = 0x1ADFC4u;
label_1adfc4:
    // 0x1adfc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1adfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adfc8:
    // 0x1adfc8: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1adfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adfcc:
    // 0x1adfcc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1adfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1adfd0:
    // 0x1adfd0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adfd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1adfd4:
    // 0x1adfd4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adfd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1adfd8:
    // 0x1adfd8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1adfd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1adfdc:
    // 0x1adfdc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1adfdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1adfe0:
    // 0x1adfe0: 0xc06b83c  jal         func_1AE0F0
label_1adfe4:
    if (ctx->pc == 0x1ADFE4u) {
        ctx->pc = 0x1ADFE4u;
            // 0x1adfe4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFE8u;
        goto label_1adfe8;
    }
    ctx->pc = 0x1ADFE0u;
    SET_GPR_U32(ctx, 31, 0x1ADFE8u);
    ctx->pc = 0x1ADFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFE0u;
            // 0x1adfe4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F0u;
    if (runtime->hasFunction(0x1AE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFE8u; }
        if (ctx->pc != 0x1ADFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_07_0x1ae0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFE8u; }
        if (ctx->pc != 0x1ADFE8u) { return; }
    }
    ctx->pc = 0x1ADFE8u;
label_1adfe8:
    // 0x1adfe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1adfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1adfec:
    // 0x1adfec: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1adfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adff0:
    // 0x1adff0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1adff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1adff4:
    // 0x1adff4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adff4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1adff8:
    // 0x1adff8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1adff8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1adffc:
    // 0x1adffc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1adffcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ae000:
    // 0x1ae000: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ae000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ae004:
    // 0x1ae004: 0xc06b83c  jal         func_1AE0F0
label_1ae008:
    if (ctx->pc == 0x1AE008u) {
        ctx->pc = 0x1AE008u;
            // 0x1ae008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE00Cu;
        goto label_1ae00c;
    }
    ctx->pc = 0x1AE004u;
    SET_GPR_U32(ctx, 31, 0x1AE00Cu);
    ctx->pc = 0x1AE008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE004u;
            // 0x1ae008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F0u;
    if (runtime->hasFunction(0x1AE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE00Cu; }
        if (ctx->pc != 0x1AE00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_07_0x1ae0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE00Cu; }
        if (ctx->pc != 0x1AE00Cu) { return; }
    }
    ctx->pc = 0x1AE00Cu;
label_1ae00c:
    // 0x1ae00c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ae00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae010:
    // 0x1ae010: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1ae010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae014:
    // 0x1ae014: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ae014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae018:
    // 0x1ae018: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae018u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ae01c:
    // 0x1ae01c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae01cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae020:
    // 0x1ae020: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ae020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ae024:
    // 0x1ae024: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ae024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ae028:
    // 0x1ae028: 0xc06b83c  jal         func_1AE0F0
label_1ae02c:
    if (ctx->pc == 0x1AE02Cu) {
        ctx->pc = 0x1AE02Cu;
            // 0x1ae02c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE030u;
        goto label_1ae030;
    }
    ctx->pc = 0x1AE028u;
    SET_GPR_U32(ctx, 31, 0x1AE030u);
    ctx->pc = 0x1AE02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE028u;
            // 0x1ae02c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F0u;
    if (runtime->hasFunction(0x1AE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE030u; }
        if (ctx->pc != 0x1AE030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_07_0x1ae0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE030u; }
        if (ctx->pc != 0x1AE030u) { return; }
    }
    ctx->pc = 0x1AE030u;
label_1ae030:
    // 0x1ae030: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ae030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae034:
    // 0x1ae034: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1ae034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae038:
    // 0x1ae038: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ae038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae03c:
    // 0x1ae03c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae03cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ae040:
    // 0x1ae040: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae040u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae044:
    // 0x1ae044: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ae044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ae048:
    // 0x1ae048: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ae048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ae04c:
    // 0x1ae04c: 0xc06b83c  jal         func_1AE0F0
label_1ae050:
    if (ctx->pc == 0x1AE050u) {
        ctx->pc = 0x1AE050u;
            // 0x1ae050: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE054u;
        goto label_1ae054;
    }
    ctx->pc = 0x1AE04Cu;
    SET_GPR_U32(ctx, 31, 0x1AE054u);
    ctx->pc = 0x1AE050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE04Cu;
            // 0x1ae050: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F0u;
    if (runtime->hasFunction(0x1AE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE054u; }
        if (ctx->pc != 0x1AE054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_07_0x1ae0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE054u; }
        if (ctx->pc != 0x1AE054u) { return; }
    }
    ctx->pc = 0x1AE054u;
label_1ae054:
    // 0x1ae054: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1ae054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1ae058:
    // 0x1ae058: 0x40f809  jalr        $v0
label_1ae05c:
    if (ctx->pc == 0x1AE05Cu) {
        ctx->pc = 0x1AE05Cu;
            // 0x1ae05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE060u;
        goto label_1ae060;
    }
    ctx->pc = 0x1AE058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AE060u);
        ctx->pc = 0x1AE05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE058u;
            // 0x1ae05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADAE0u: goto label_1adae0;
            case 0x1ADAE4u: goto label_1adae4;
            case 0x1ADAE8u: goto label_1adae8;
            case 0x1ADAECu: goto label_1adaec;
            case 0x1ADAF0u: goto label_1adaf0;
            case 0x1ADAF4u: goto label_1adaf4;
            case 0x1ADAF8u: goto label_1adaf8;
            case 0x1ADAFCu: goto label_1adafc;
            case 0x1ADB00u: goto label_1adb00;
            case 0x1ADB04u: goto label_1adb04;
            case 0x1ADB08u: goto label_1adb08;
            case 0x1ADB0Cu: goto label_1adb0c;
            case 0x1ADB10u: goto label_1adb10;
            case 0x1ADB14u: goto label_1adb14;
            case 0x1ADB18u: goto label_1adb18;
            case 0x1ADB1Cu: goto label_1adb1c;
            case 0x1ADB20u: goto label_1adb20;
            case 0x1ADB24u: goto label_1adb24;
            case 0x1ADB28u: goto label_1adb28;
            case 0x1ADB2Cu: goto label_1adb2c;
            case 0x1ADB30u: goto label_1adb30;
            case 0x1ADB34u: goto label_1adb34;
            case 0x1ADB38u: goto label_1adb38;
            case 0x1ADB3Cu: goto label_1adb3c;
            case 0x1ADB40u: goto label_1adb40;
            case 0x1ADB44u: goto label_1adb44;
            case 0x1ADB48u: goto label_1adb48;
            case 0x1ADB4Cu: goto label_1adb4c;
            case 0x1ADB50u: goto label_1adb50;
            case 0x1ADB54u: goto label_1adb54;
            case 0x1ADB58u: goto label_1adb58;
            case 0x1ADB5Cu: goto label_1adb5c;
            case 0x1ADB60u: goto label_1adb60;
            case 0x1ADB64u: goto label_1adb64;
            case 0x1ADB68u: goto label_1adb68;
            case 0x1ADB6Cu: goto label_1adb6c;
            case 0x1ADB70u: goto label_1adb70;
            case 0x1ADB74u: goto label_1adb74;
            case 0x1ADB78u: goto label_1adb78;
            case 0x1ADB7Cu: goto label_1adb7c;
            case 0x1ADB80u: goto label_1adb80;
            case 0x1ADB84u: goto label_1adb84;
            case 0x1ADB88u: goto label_1adb88;
            case 0x1ADB8Cu: goto label_1adb8c;
            case 0x1ADB90u: goto label_1adb90;
            case 0x1ADB94u: goto label_1adb94;
            case 0x1ADB98u: goto label_1adb98;
            case 0x1ADB9Cu: goto label_1adb9c;
            case 0x1ADBA0u: goto label_1adba0;
            case 0x1ADBA4u: goto label_1adba4;
            case 0x1ADBA8u: goto label_1adba8;
            case 0x1ADBACu: goto label_1adbac;
            case 0x1ADBB0u: goto label_1adbb0;
            case 0x1ADBB4u: goto label_1adbb4;
            case 0x1ADBB8u: goto label_1adbb8;
            case 0x1ADBBCu: goto label_1adbbc;
            case 0x1ADBC0u: goto label_1adbc0;
            case 0x1ADBC4u: goto label_1adbc4;
            case 0x1ADBC8u: goto label_1adbc8;
            case 0x1ADBCCu: goto label_1adbcc;
            case 0x1ADBD0u: goto label_1adbd0;
            case 0x1ADBD4u: goto label_1adbd4;
            case 0x1ADBD8u: goto label_1adbd8;
            case 0x1ADBDCu: goto label_1adbdc;
            case 0x1ADBE0u: goto label_1adbe0;
            case 0x1ADBE4u: goto label_1adbe4;
            case 0x1ADBE8u: goto label_1adbe8;
            case 0x1ADBECu: goto label_1adbec;
            case 0x1ADBF0u: goto label_1adbf0;
            case 0x1ADBF4u: goto label_1adbf4;
            case 0x1ADBF8u: goto label_1adbf8;
            case 0x1ADBFCu: goto label_1adbfc;
            case 0x1ADC00u: goto label_1adc00;
            case 0x1ADC04u: goto label_1adc04;
            case 0x1ADC08u: goto label_1adc08;
            case 0x1ADC0Cu: goto label_1adc0c;
            case 0x1ADC10u: goto label_1adc10;
            case 0x1ADC14u: goto label_1adc14;
            case 0x1ADC18u: goto label_1adc18;
            case 0x1ADC1Cu: goto label_1adc1c;
            case 0x1ADC20u: goto label_1adc20;
            case 0x1ADC24u: goto label_1adc24;
            case 0x1ADC28u: goto label_1adc28;
            case 0x1ADC2Cu: goto label_1adc2c;
            case 0x1ADC30u: goto label_1adc30;
            case 0x1ADC34u: goto label_1adc34;
            case 0x1ADC38u: goto label_1adc38;
            case 0x1ADC3Cu: goto label_1adc3c;
            case 0x1ADC40u: goto label_1adc40;
            case 0x1ADC44u: goto label_1adc44;
            case 0x1ADC48u: goto label_1adc48;
            case 0x1ADC4Cu: goto label_1adc4c;
            case 0x1ADC50u: goto label_1adc50;
            case 0x1ADC54u: goto label_1adc54;
            case 0x1ADC58u: goto label_1adc58;
            case 0x1ADC5Cu: goto label_1adc5c;
            case 0x1ADC60u: goto label_1adc60;
            case 0x1ADC64u: goto label_1adc64;
            case 0x1ADC68u: goto label_1adc68;
            case 0x1ADC6Cu: goto label_1adc6c;
            case 0x1ADC70u: goto label_1adc70;
            case 0x1ADC74u: goto label_1adc74;
            case 0x1ADC78u: goto label_1adc78;
            case 0x1ADC7Cu: goto label_1adc7c;
            case 0x1ADC80u: goto label_1adc80;
            case 0x1ADC84u: goto label_1adc84;
            case 0x1ADC88u: goto label_1adc88;
            case 0x1ADC8Cu: goto label_1adc8c;
            case 0x1ADC90u: goto label_1adc90;
            case 0x1ADC94u: goto label_1adc94;
            case 0x1ADC98u: goto label_1adc98;
            case 0x1ADC9Cu: goto label_1adc9c;
            case 0x1ADCA0u: goto label_1adca0;
            case 0x1ADCA4u: goto label_1adca4;
            case 0x1ADCA8u: goto label_1adca8;
            case 0x1ADCACu: goto label_1adcac;
            case 0x1ADCB0u: goto label_1adcb0;
            case 0x1ADCB4u: goto label_1adcb4;
            case 0x1ADCB8u: goto label_1adcb8;
            case 0x1ADCBCu: goto label_1adcbc;
            case 0x1ADCC0u: goto label_1adcc0;
            case 0x1ADCC4u: goto label_1adcc4;
            case 0x1ADCC8u: goto label_1adcc8;
            case 0x1ADCCCu: goto label_1adccc;
            case 0x1ADCD0u: goto label_1adcd0;
            case 0x1ADCD4u: goto label_1adcd4;
            case 0x1ADCD8u: goto label_1adcd8;
            case 0x1ADCDCu: goto label_1adcdc;
            case 0x1ADCE0u: goto label_1adce0;
            case 0x1ADCE4u: goto label_1adce4;
            case 0x1ADCE8u: goto label_1adce8;
            case 0x1ADCECu: goto label_1adcec;
            case 0x1ADCF0u: goto label_1adcf0;
            case 0x1ADCF4u: goto label_1adcf4;
            case 0x1ADCF8u: goto label_1adcf8;
            case 0x1ADCFCu: goto label_1adcfc;
            case 0x1ADD00u: goto label_1add00;
            case 0x1ADD04u: goto label_1add04;
            case 0x1ADD08u: goto label_1add08;
            case 0x1ADD0Cu: goto label_1add0c;
            case 0x1ADD10u: goto label_1add10;
            case 0x1ADD14u: goto label_1add14;
            case 0x1ADD18u: goto label_1add18;
            case 0x1ADD1Cu: goto label_1add1c;
            case 0x1ADD20u: goto label_1add20;
            case 0x1ADD24u: goto label_1add24;
            case 0x1ADD28u: goto label_1add28;
            case 0x1ADD2Cu: goto label_1add2c;
            case 0x1ADD30u: goto label_1add30;
            case 0x1ADD34u: goto label_1add34;
            case 0x1ADD38u: goto label_1add38;
            case 0x1ADD3Cu: goto label_1add3c;
            case 0x1ADD40u: goto label_1add40;
            case 0x1ADD44u: goto label_1add44;
            case 0x1ADD48u: goto label_1add48;
            case 0x1ADD4Cu: goto label_1add4c;
            case 0x1ADD50u: goto label_1add50;
            case 0x1ADD54u: goto label_1add54;
            case 0x1ADD58u: goto label_1add58;
            case 0x1ADD5Cu: goto label_1add5c;
            case 0x1ADD60u: goto label_1add60;
            case 0x1ADD64u: goto label_1add64;
            case 0x1ADD68u: goto label_1add68;
            case 0x1ADD6Cu: goto label_1add6c;
            case 0x1ADD70u: goto label_1add70;
            case 0x1ADD74u: goto label_1add74;
            case 0x1ADD78u: goto label_1add78;
            case 0x1ADD7Cu: goto label_1add7c;
            case 0x1ADD80u: goto label_1add80;
            case 0x1ADD84u: goto label_1add84;
            case 0x1ADD88u: goto label_1add88;
            case 0x1ADD8Cu: goto label_1add8c;
            case 0x1ADD90u: goto label_1add90;
            case 0x1ADD94u: goto label_1add94;
            case 0x1ADD98u: goto label_1add98;
            case 0x1ADD9Cu: goto label_1add9c;
            case 0x1ADDA0u: goto label_1adda0;
            case 0x1ADDA4u: goto label_1adda4;
            case 0x1ADDA8u: goto label_1adda8;
            case 0x1ADDACu: goto label_1addac;
            case 0x1ADDB0u: goto label_1addb0;
            case 0x1ADDB4u: goto label_1addb4;
            case 0x1ADDB8u: goto label_1addb8;
            case 0x1ADDBCu: goto label_1addbc;
            case 0x1ADDC0u: goto label_1addc0;
            case 0x1ADDC4u: goto label_1addc4;
            case 0x1ADDC8u: goto label_1addc8;
            case 0x1ADDCCu: goto label_1addcc;
            case 0x1ADDD0u: goto label_1addd0;
            case 0x1ADDD4u: goto label_1addd4;
            case 0x1ADDD8u: goto label_1addd8;
            case 0x1ADDDCu: goto label_1adddc;
            case 0x1ADDE0u: goto label_1adde0;
            case 0x1ADDE4u: goto label_1adde4;
            case 0x1ADDE8u: goto label_1adde8;
            case 0x1ADDECu: goto label_1addec;
            case 0x1ADDF0u: goto label_1addf0;
            case 0x1ADDF4u: goto label_1addf4;
            case 0x1ADDF8u: goto label_1addf8;
            case 0x1ADDFCu: goto label_1addfc;
            case 0x1ADE00u: goto label_1ade00;
            case 0x1ADE04u: goto label_1ade04;
            case 0x1ADE08u: goto label_1ade08;
            case 0x1ADE0Cu: goto label_1ade0c;
            case 0x1ADE10u: goto label_1ade10;
            case 0x1ADE14u: goto label_1ade14;
            case 0x1ADE18u: goto label_1ade18;
            case 0x1ADE1Cu: goto label_1ade1c;
            case 0x1ADE20u: goto label_1ade20;
            case 0x1ADE24u: goto label_1ade24;
            case 0x1ADE28u: goto label_1ade28;
            case 0x1ADE2Cu: goto label_1ade2c;
            case 0x1ADE30u: goto label_1ade30;
            case 0x1ADE34u: goto label_1ade34;
            case 0x1ADE38u: goto label_1ade38;
            case 0x1ADE3Cu: goto label_1ade3c;
            case 0x1ADE40u: goto label_1ade40;
            case 0x1ADE44u: goto label_1ade44;
            case 0x1ADE48u: goto label_1ade48;
            case 0x1ADE4Cu: goto label_1ade4c;
            case 0x1ADE50u: goto label_1ade50;
            case 0x1ADE54u: goto label_1ade54;
            case 0x1ADE58u: goto label_1ade58;
            case 0x1ADE5Cu: goto label_1ade5c;
            case 0x1ADE60u: goto label_1ade60;
            case 0x1ADE64u: goto label_1ade64;
            case 0x1ADE68u: goto label_1ade68;
            case 0x1ADE6Cu: goto label_1ade6c;
            case 0x1ADE70u: goto label_1ade70;
            case 0x1ADE74u: goto label_1ade74;
            case 0x1ADE78u: goto label_1ade78;
            case 0x1ADE7Cu: goto label_1ade7c;
            case 0x1ADE80u: goto label_1ade80;
            case 0x1ADE84u: goto label_1ade84;
            case 0x1ADE88u: goto label_1ade88;
            case 0x1ADE8Cu: goto label_1ade8c;
            case 0x1ADE90u: goto label_1ade90;
            case 0x1ADE94u: goto label_1ade94;
            case 0x1ADE98u: goto label_1ade98;
            case 0x1ADE9Cu: goto label_1ade9c;
            case 0x1ADEA0u: goto label_1adea0;
            case 0x1ADEA4u: goto label_1adea4;
            case 0x1ADEA8u: goto label_1adea8;
            case 0x1ADEACu: goto label_1adeac;
            case 0x1ADEB0u: goto label_1adeb0;
            case 0x1ADEB4u: goto label_1adeb4;
            case 0x1ADEB8u: goto label_1adeb8;
            case 0x1ADEBCu: goto label_1adebc;
            case 0x1ADEC0u: goto label_1adec0;
            case 0x1ADEC4u: goto label_1adec4;
            case 0x1ADEC8u: goto label_1adec8;
            case 0x1ADECCu: goto label_1adecc;
            case 0x1ADED0u: goto label_1aded0;
            case 0x1ADED4u: goto label_1aded4;
            case 0x1ADED8u: goto label_1aded8;
            case 0x1ADEDCu: goto label_1adedc;
            case 0x1ADEE0u: goto label_1adee0;
            case 0x1ADEE4u: goto label_1adee4;
            case 0x1ADEE8u: goto label_1adee8;
            case 0x1ADEECu: goto label_1adeec;
            case 0x1ADEF0u: goto label_1adef0;
            case 0x1ADEF4u: goto label_1adef4;
            case 0x1ADEF8u: goto label_1adef8;
            case 0x1ADEFCu: goto label_1adefc;
            case 0x1ADF00u: goto label_1adf00;
            case 0x1ADF04u: goto label_1adf04;
            case 0x1ADF08u: goto label_1adf08;
            case 0x1ADF0Cu: goto label_1adf0c;
            case 0x1ADF10u: goto label_1adf10;
            case 0x1ADF14u: goto label_1adf14;
            case 0x1ADF18u: goto label_1adf18;
            case 0x1ADF1Cu: goto label_1adf1c;
            case 0x1ADF20u: goto label_1adf20;
            case 0x1ADF24u: goto label_1adf24;
            case 0x1ADF28u: goto label_1adf28;
            case 0x1ADF2Cu: goto label_1adf2c;
            case 0x1ADF30u: goto label_1adf30;
            case 0x1ADF34u: goto label_1adf34;
            case 0x1ADF38u: goto label_1adf38;
            case 0x1ADF3Cu: goto label_1adf3c;
            case 0x1ADF40u: goto label_1adf40;
            case 0x1ADF44u: goto label_1adf44;
            case 0x1ADF48u: goto label_1adf48;
            case 0x1ADF4Cu: goto label_1adf4c;
            case 0x1ADF50u: goto label_1adf50;
            case 0x1ADF54u: goto label_1adf54;
            case 0x1ADF58u: goto label_1adf58;
            case 0x1ADF5Cu: goto label_1adf5c;
            case 0x1ADF60u: goto label_1adf60;
            case 0x1ADF64u: goto label_1adf64;
            case 0x1ADF68u: goto label_1adf68;
            case 0x1ADF6Cu: goto label_1adf6c;
            case 0x1ADF70u: goto label_1adf70;
            case 0x1ADF74u: goto label_1adf74;
            case 0x1ADF78u: goto label_1adf78;
            case 0x1ADF7Cu: goto label_1adf7c;
            case 0x1ADF80u: goto label_1adf80;
            case 0x1ADF84u: goto label_1adf84;
            case 0x1ADF88u: goto label_1adf88;
            case 0x1ADF8Cu: goto label_1adf8c;
            case 0x1ADF90u: goto label_1adf90;
            case 0x1ADF94u: goto label_1adf94;
            case 0x1ADF98u: goto label_1adf98;
            case 0x1ADF9Cu: goto label_1adf9c;
            case 0x1ADFA0u: goto label_1adfa0;
            case 0x1ADFA4u: goto label_1adfa4;
            case 0x1ADFA8u: goto label_1adfa8;
            case 0x1ADFACu: goto label_1adfac;
            case 0x1ADFB0u: goto label_1adfb0;
            case 0x1ADFB4u: goto label_1adfb4;
            case 0x1ADFB8u: goto label_1adfb8;
            case 0x1ADFBCu: goto label_1adfbc;
            case 0x1ADFC0u: goto label_1adfc0;
            case 0x1ADFC4u: goto label_1adfc4;
            case 0x1ADFC8u: goto label_1adfc8;
            case 0x1ADFCCu: goto label_1adfcc;
            case 0x1ADFD0u: goto label_1adfd0;
            case 0x1ADFD4u: goto label_1adfd4;
            case 0x1ADFD8u: goto label_1adfd8;
            case 0x1ADFDCu: goto label_1adfdc;
            case 0x1ADFE0u: goto label_1adfe0;
            case 0x1ADFE4u: goto label_1adfe4;
            case 0x1ADFE8u: goto label_1adfe8;
            case 0x1ADFECu: goto label_1adfec;
            case 0x1ADFF0u: goto label_1adff0;
            case 0x1ADFF4u: goto label_1adff4;
            case 0x1ADFF8u: goto label_1adff8;
            case 0x1ADFFCu: goto label_1adffc;
            case 0x1AE000u: goto label_1ae000;
            case 0x1AE004u: goto label_1ae004;
            case 0x1AE008u: goto label_1ae008;
            case 0x1AE00Cu: goto label_1ae00c;
            case 0x1AE010u: goto label_1ae010;
            case 0x1AE014u: goto label_1ae014;
            case 0x1AE018u: goto label_1ae018;
            case 0x1AE01Cu: goto label_1ae01c;
            case 0x1AE020u: goto label_1ae020;
            case 0x1AE024u: goto label_1ae024;
            case 0x1AE028u: goto label_1ae028;
            case 0x1AE02Cu: goto label_1ae02c;
            case 0x1AE030u: goto label_1ae030;
            case 0x1AE034u: goto label_1ae034;
            case 0x1AE038u: goto label_1ae038;
            case 0x1AE03Cu: goto label_1ae03c;
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE044u: goto label_1ae044;
            case 0x1AE048u: goto label_1ae048;
            case 0x1AE04Cu: goto label_1ae04c;
            case 0x1AE050u: goto label_1ae050;
            case 0x1AE054u: goto label_1ae054;
            case 0x1AE058u: goto label_1ae058;
            case 0x1AE05Cu: goto label_1ae05c;
            case 0x1AE060u: goto label_1ae060;
            case 0x1AE064u: goto label_1ae064;
            case 0x1AE068u: goto label_1ae068;
            case 0x1AE06Cu: goto label_1ae06c;
            case 0x1AE070u: goto label_1ae070;
            case 0x1AE074u: goto label_1ae074;
            case 0x1AE078u: goto label_1ae078;
            case 0x1AE07Cu: goto label_1ae07c;
            case 0x1AE080u: goto label_1ae080;
            case 0x1AE084u: goto label_1ae084;
            case 0x1AE088u: goto label_1ae088;
            case 0x1AE08Cu: goto label_1ae08c;
            case 0x1AE090u: goto label_1ae090;
            case 0x1AE094u: goto label_1ae094;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE060u; }
            if (ctx->pc != 0x1AE060u) { return; }
        }
    }
    ctx->pc = 0x1AE060u;
label_1ae060:
    // 0x1ae060: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ae064:
    if (ctx->pc == 0x1AE064u) {
        ctx->pc = 0x1AE068u;
        goto label_1ae068;
    }
    ctx->pc = 0x1AE060u;
    {
        const bool branch_taken_0x1ae060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae060) {
            ctx->pc = 0x1AE088u;
            goto label_1ae088;
        }
    }
    ctx->pc = 0x1AE068u;
label_1ae068:
    // 0x1ae068: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1ae068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1ae06c:
    // 0x1ae06c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ae06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ae070:
    // 0x1ae070: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1ae070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1ae074:
    // 0x1ae074: 0x24c6d8e0  addiu       $a2, $a2, -0x2720
    ctx->pc = 0x1ae074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957280));
label_1ae078:
    // 0x1ae078: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ae078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae07c:
    // 0x1ae07c: 0xc053ca4  jal         func_14F290
label_1ae080:
    if (ctx->pc == 0x1AE080u) {
        ctx->pc = 0x1AE080u;
            // 0x1ae080: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE084u;
        goto label_1ae084;
    }
    ctx->pc = 0x1AE07Cu;
    SET_GPR_U32(ctx, 31, 0x1AE084u);
    ctx->pc = 0x1AE080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE07Cu;
            // 0x1ae080: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE084u; }
        if (ctx->pc != 0x1AE084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE084u; }
        if (ctx->pc != 0x1AE084u) { return; }
    }
    ctx->pc = 0x1AE084u;
label_1ae084:
    // 0x1ae084: 0x0  nop
    ctx->pc = 0x1ae084u;
    // NOP
label_1ae088:
    // 0x1ae088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae08c:
    // 0x1ae08c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae090:
    // 0x1ae090: 0x3e00008  jr          $ra
label_1ae094:
    if (ctx->pc == 0x1AE094u) {
        ctx->pc = 0x1AE094u;
            // 0x1ae094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1AE098u;
        goto label_fallthrough_0x1ae090;
    }
    ctx->pc = 0x1AE090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE090u;
            // 0x1ae094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADAE0u: goto label_1adae0;
            case 0x1ADAE4u: goto label_1adae4;
            case 0x1ADAE8u: goto label_1adae8;
            case 0x1ADAECu: goto label_1adaec;
            case 0x1ADAF0u: goto label_1adaf0;
            case 0x1ADAF4u: goto label_1adaf4;
            case 0x1ADAF8u: goto label_1adaf8;
            case 0x1ADAFCu: goto label_1adafc;
            case 0x1ADB00u: goto label_1adb00;
            case 0x1ADB04u: goto label_1adb04;
            case 0x1ADB08u: goto label_1adb08;
            case 0x1ADB0Cu: goto label_1adb0c;
            case 0x1ADB10u: goto label_1adb10;
            case 0x1ADB14u: goto label_1adb14;
            case 0x1ADB18u: goto label_1adb18;
            case 0x1ADB1Cu: goto label_1adb1c;
            case 0x1ADB20u: goto label_1adb20;
            case 0x1ADB24u: goto label_1adb24;
            case 0x1ADB28u: goto label_1adb28;
            case 0x1ADB2Cu: goto label_1adb2c;
            case 0x1ADB30u: goto label_1adb30;
            case 0x1ADB34u: goto label_1adb34;
            case 0x1ADB38u: goto label_1adb38;
            case 0x1ADB3Cu: goto label_1adb3c;
            case 0x1ADB40u: goto label_1adb40;
            case 0x1ADB44u: goto label_1adb44;
            case 0x1ADB48u: goto label_1adb48;
            case 0x1ADB4Cu: goto label_1adb4c;
            case 0x1ADB50u: goto label_1adb50;
            case 0x1ADB54u: goto label_1adb54;
            case 0x1ADB58u: goto label_1adb58;
            case 0x1ADB5Cu: goto label_1adb5c;
            case 0x1ADB60u: goto label_1adb60;
            case 0x1ADB64u: goto label_1adb64;
            case 0x1ADB68u: goto label_1adb68;
            case 0x1ADB6Cu: goto label_1adb6c;
            case 0x1ADB70u: goto label_1adb70;
            case 0x1ADB74u: goto label_1adb74;
            case 0x1ADB78u: goto label_1adb78;
            case 0x1ADB7Cu: goto label_1adb7c;
            case 0x1ADB80u: goto label_1adb80;
            case 0x1ADB84u: goto label_1adb84;
            case 0x1ADB88u: goto label_1adb88;
            case 0x1ADB8Cu: goto label_1adb8c;
            case 0x1ADB90u: goto label_1adb90;
            case 0x1ADB94u: goto label_1adb94;
            case 0x1ADB98u: goto label_1adb98;
            case 0x1ADB9Cu: goto label_1adb9c;
            case 0x1ADBA0u: goto label_1adba0;
            case 0x1ADBA4u: goto label_1adba4;
            case 0x1ADBA8u: goto label_1adba8;
            case 0x1ADBACu: goto label_1adbac;
            case 0x1ADBB0u: goto label_1adbb0;
            case 0x1ADBB4u: goto label_1adbb4;
            case 0x1ADBB8u: goto label_1adbb8;
            case 0x1ADBBCu: goto label_1adbbc;
            case 0x1ADBC0u: goto label_1adbc0;
            case 0x1ADBC4u: goto label_1adbc4;
            case 0x1ADBC8u: goto label_1adbc8;
            case 0x1ADBCCu: goto label_1adbcc;
            case 0x1ADBD0u: goto label_1adbd0;
            case 0x1ADBD4u: goto label_1adbd4;
            case 0x1ADBD8u: goto label_1adbd8;
            case 0x1ADBDCu: goto label_1adbdc;
            case 0x1ADBE0u: goto label_1adbe0;
            case 0x1ADBE4u: goto label_1adbe4;
            case 0x1ADBE8u: goto label_1adbe8;
            case 0x1ADBECu: goto label_1adbec;
            case 0x1ADBF0u: goto label_1adbf0;
            case 0x1ADBF4u: goto label_1adbf4;
            case 0x1ADBF8u: goto label_1adbf8;
            case 0x1ADBFCu: goto label_1adbfc;
            case 0x1ADC00u: goto label_1adc00;
            case 0x1ADC04u: goto label_1adc04;
            case 0x1ADC08u: goto label_1adc08;
            case 0x1ADC0Cu: goto label_1adc0c;
            case 0x1ADC10u: goto label_1adc10;
            case 0x1ADC14u: goto label_1adc14;
            case 0x1ADC18u: goto label_1adc18;
            case 0x1ADC1Cu: goto label_1adc1c;
            case 0x1ADC20u: goto label_1adc20;
            case 0x1ADC24u: goto label_1adc24;
            case 0x1ADC28u: goto label_1adc28;
            case 0x1ADC2Cu: goto label_1adc2c;
            case 0x1ADC30u: goto label_1adc30;
            case 0x1ADC34u: goto label_1adc34;
            case 0x1ADC38u: goto label_1adc38;
            case 0x1ADC3Cu: goto label_1adc3c;
            case 0x1ADC40u: goto label_1adc40;
            case 0x1ADC44u: goto label_1adc44;
            case 0x1ADC48u: goto label_1adc48;
            case 0x1ADC4Cu: goto label_1adc4c;
            case 0x1ADC50u: goto label_1adc50;
            case 0x1ADC54u: goto label_1adc54;
            case 0x1ADC58u: goto label_1adc58;
            case 0x1ADC5Cu: goto label_1adc5c;
            case 0x1ADC60u: goto label_1adc60;
            case 0x1ADC64u: goto label_1adc64;
            case 0x1ADC68u: goto label_1adc68;
            case 0x1ADC6Cu: goto label_1adc6c;
            case 0x1ADC70u: goto label_1adc70;
            case 0x1ADC74u: goto label_1adc74;
            case 0x1ADC78u: goto label_1adc78;
            case 0x1ADC7Cu: goto label_1adc7c;
            case 0x1ADC80u: goto label_1adc80;
            case 0x1ADC84u: goto label_1adc84;
            case 0x1ADC88u: goto label_1adc88;
            case 0x1ADC8Cu: goto label_1adc8c;
            case 0x1ADC90u: goto label_1adc90;
            case 0x1ADC94u: goto label_1adc94;
            case 0x1ADC98u: goto label_1adc98;
            case 0x1ADC9Cu: goto label_1adc9c;
            case 0x1ADCA0u: goto label_1adca0;
            case 0x1ADCA4u: goto label_1adca4;
            case 0x1ADCA8u: goto label_1adca8;
            case 0x1ADCACu: goto label_1adcac;
            case 0x1ADCB0u: goto label_1adcb0;
            case 0x1ADCB4u: goto label_1adcb4;
            case 0x1ADCB8u: goto label_1adcb8;
            case 0x1ADCBCu: goto label_1adcbc;
            case 0x1ADCC0u: goto label_1adcc0;
            case 0x1ADCC4u: goto label_1adcc4;
            case 0x1ADCC8u: goto label_1adcc8;
            case 0x1ADCCCu: goto label_1adccc;
            case 0x1ADCD0u: goto label_1adcd0;
            case 0x1ADCD4u: goto label_1adcd4;
            case 0x1ADCD8u: goto label_1adcd8;
            case 0x1ADCDCu: goto label_1adcdc;
            case 0x1ADCE0u: goto label_1adce0;
            case 0x1ADCE4u: goto label_1adce4;
            case 0x1ADCE8u: goto label_1adce8;
            case 0x1ADCECu: goto label_1adcec;
            case 0x1ADCF0u: goto label_1adcf0;
            case 0x1ADCF4u: goto label_1adcf4;
            case 0x1ADCF8u: goto label_1adcf8;
            case 0x1ADCFCu: goto label_1adcfc;
            case 0x1ADD00u: goto label_1add00;
            case 0x1ADD04u: goto label_1add04;
            case 0x1ADD08u: goto label_1add08;
            case 0x1ADD0Cu: goto label_1add0c;
            case 0x1ADD10u: goto label_1add10;
            case 0x1ADD14u: goto label_1add14;
            case 0x1ADD18u: goto label_1add18;
            case 0x1ADD1Cu: goto label_1add1c;
            case 0x1ADD20u: goto label_1add20;
            case 0x1ADD24u: goto label_1add24;
            case 0x1ADD28u: goto label_1add28;
            case 0x1ADD2Cu: goto label_1add2c;
            case 0x1ADD30u: goto label_1add30;
            case 0x1ADD34u: goto label_1add34;
            case 0x1ADD38u: goto label_1add38;
            case 0x1ADD3Cu: goto label_1add3c;
            case 0x1ADD40u: goto label_1add40;
            case 0x1ADD44u: goto label_1add44;
            case 0x1ADD48u: goto label_1add48;
            case 0x1ADD4Cu: goto label_1add4c;
            case 0x1ADD50u: goto label_1add50;
            case 0x1ADD54u: goto label_1add54;
            case 0x1ADD58u: goto label_1add58;
            case 0x1ADD5Cu: goto label_1add5c;
            case 0x1ADD60u: goto label_1add60;
            case 0x1ADD64u: goto label_1add64;
            case 0x1ADD68u: goto label_1add68;
            case 0x1ADD6Cu: goto label_1add6c;
            case 0x1ADD70u: goto label_1add70;
            case 0x1ADD74u: goto label_1add74;
            case 0x1ADD78u: goto label_1add78;
            case 0x1ADD7Cu: goto label_1add7c;
            case 0x1ADD80u: goto label_1add80;
            case 0x1ADD84u: goto label_1add84;
            case 0x1ADD88u: goto label_1add88;
            case 0x1ADD8Cu: goto label_1add8c;
            case 0x1ADD90u: goto label_1add90;
            case 0x1ADD94u: goto label_1add94;
            case 0x1ADD98u: goto label_1add98;
            case 0x1ADD9Cu: goto label_1add9c;
            case 0x1ADDA0u: goto label_1adda0;
            case 0x1ADDA4u: goto label_1adda4;
            case 0x1ADDA8u: goto label_1adda8;
            case 0x1ADDACu: goto label_1addac;
            case 0x1ADDB0u: goto label_1addb0;
            case 0x1ADDB4u: goto label_1addb4;
            case 0x1ADDB8u: goto label_1addb8;
            case 0x1ADDBCu: goto label_1addbc;
            case 0x1ADDC0u: goto label_1addc0;
            case 0x1ADDC4u: goto label_1addc4;
            case 0x1ADDC8u: goto label_1addc8;
            case 0x1ADDCCu: goto label_1addcc;
            case 0x1ADDD0u: goto label_1addd0;
            case 0x1ADDD4u: goto label_1addd4;
            case 0x1ADDD8u: goto label_1addd8;
            case 0x1ADDDCu: goto label_1adddc;
            case 0x1ADDE0u: goto label_1adde0;
            case 0x1ADDE4u: goto label_1adde4;
            case 0x1ADDE8u: goto label_1adde8;
            case 0x1ADDECu: goto label_1addec;
            case 0x1ADDF0u: goto label_1addf0;
            case 0x1ADDF4u: goto label_1addf4;
            case 0x1ADDF8u: goto label_1addf8;
            case 0x1ADDFCu: goto label_1addfc;
            case 0x1ADE00u: goto label_1ade00;
            case 0x1ADE04u: goto label_1ade04;
            case 0x1ADE08u: goto label_1ade08;
            case 0x1ADE0Cu: goto label_1ade0c;
            case 0x1ADE10u: goto label_1ade10;
            case 0x1ADE14u: goto label_1ade14;
            case 0x1ADE18u: goto label_1ade18;
            case 0x1ADE1Cu: goto label_1ade1c;
            case 0x1ADE20u: goto label_1ade20;
            case 0x1ADE24u: goto label_1ade24;
            case 0x1ADE28u: goto label_1ade28;
            case 0x1ADE2Cu: goto label_1ade2c;
            case 0x1ADE30u: goto label_1ade30;
            case 0x1ADE34u: goto label_1ade34;
            case 0x1ADE38u: goto label_1ade38;
            case 0x1ADE3Cu: goto label_1ade3c;
            case 0x1ADE40u: goto label_1ade40;
            case 0x1ADE44u: goto label_1ade44;
            case 0x1ADE48u: goto label_1ade48;
            case 0x1ADE4Cu: goto label_1ade4c;
            case 0x1ADE50u: goto label_1ade50;
            case 0x1ADE54u: goto label_1ade54;
            case 0x1ADE58u: goto label_1ade58;
            case 0x1ADE5Cu: goto label_1ade5c;
            case 0x1ADE60u: goto label_1ade60;
            case 0x1ADE64u: goto label_1ade64;
            case 0x1ADE68u: goto label_1ade68;
            case 0x1ADE6Cu: goto label_1ade6c;
            case 0x1ADE70u: goto label_1ade70;
            case 0x1ADE74u: goto label_1ade74;
            case 0x1ADE78u: goto label_1ade78;
            case 0x1ADE7Cu: goto label_1ade7c;
            case 0x1ADE80u: goto label_1ade80;
            case 0x1ADE84u: goto label_1ade84;
            case 0x1ADE88u: goto label_1ade88;
            case 0x1ADE8Cu: goto label_1ade8c;
            case 0x1ADE90u: goto label_1ade90;
            case 0x1ADE94u: goto label_1ade94;
            case 0x1ADE98u: goto label_1ade98;
            case 0x1ADE9Cu: goto label_1ade9c;
            case 0x1ADEA0u: goto label_1adea0;
            case 0x1ADEA4u: goto label_1adea4;
            case 0x1ADEA8u: goto label_1adea8;
            case 0x1ADEACu: goto label_1adeac;
            case 0x1ADEB0u: goto label_1adeb0;
            case 0x1ADEB4u: goto label_1adeb4;
            case 0x1ADEB8u: goto label_1adeb8;
            case 0x1ADEBCu: goto label_1adebc;
            case 0x1ADEC0u: goto label_1adec0;
            case 0x1ADEC4u: goto label_1adec4;
            case 0x1ADEC8u: goto label_1adec8;
            case 0x1ADECCu: goto label_1adecc;
            case 0x1ADED0u: goto label_1aded0;
            case 0x1ADED4u: goto label_1aded4;
            case 0x1ADED8u: goto label_1aded8;
            case 0x1ADEDCu: goto label_1adedc;
            case 0x1ADEE0u: goto label_1adee0;
            case 0x1ADEE4u: goto label_1adee4;
            case 0x1ADEE8u: goto label_1adee8;
            case 0x1ADEECu: goto label_1adeec;
            case 0x1ADEF0u: goto label_1adef0;
            case 0x1ADEF4u: goto label_1adef4;
            case 0x1ADEF8u: goto label_1adef8;
            case 0x1ADEFCu: goto label_1adefc;
            case 0x1ADF00u: goto label_1adf00;
            case 0x1ADF04u: goto label_1adf04;
            case 0x1ADF08u: goto label_1adf08;
            case 0x1ADF0Cu: goto label_1adf0c;
            case 0x1ADF10u: goto label_1adf10;
            case 0x1ADF14u: goto label_1adf14;
            case 0x1ADF18u: goto label_1adf18;
            case 0x1ADF1Cu: goto label_1adf1c;
            case 0x1ADF20u: goto label_1adf20;
            case 0x1ADF24u: goto label_1adf24;
            case 0x1ADF28u: goto label_1adf28;
            case 0x1ADF2Cu: goto label_1adf2c;
            case 0x1ADF30u: goto label_1adf30;
            case 0x1ADF34u: goto label_1adf34;
            case 0x1ADF38u: goto label_1adf38;
            case 0x1ADF3Cu: goto label_1adf3c;
            case 0x1ADF40u: goto label_1adf40;
            case 0x1ADF44u: goto label_1adf44;
            case 0x1ADF48u: goto label_1adf48;
            case 0x1ADF4Cu: goto label_1adf4c;
            case 0x1ADF50u: goto label_1adf50;
            case 0x1ADF54u: goto label_1adf54;
            case 0x1ADF58u: goto label_1adf58;
            case 0x1ADF5Cu: goto label_1adf5c;
            case 0x1ADF60u: goto label_1adf60;
            case 0x1ADF64u: goto label_1adf64;
            case 0x1ADF68u: goto label_1adf68;
            case 0x1ADF6Cu: goto label_1adf6c;
            case 0x1ADF70u: goto label_1adf70;
            case 0x1ADF74u: goto label_1adf74;
            case 0x1ADF78u: goto label_1adf78;
            case 0x1ADF7Cu: goto label_1adf7c;
            case 0x1ADF80u: goto label_1adf80;
            case 0x1ADF84u: goto label_1adf84;
            case 0x1ADF88u: goto label_1adf88;
            case 0x1ADF8Cu: goto label_1adf8c;
            case 0x1ADF90u: goto label_1adf90;
            case 0x1ADF94u: goto label_1adf94;
            case 0x1ADF98u: goto label_1adf98;
            case 0x1ADF9Cu: goto label_1adf9c;
            case 0x1ADFA0u: goto label_1adfa0;
            case 0x1ADFA4u: goto label_1adfa4;
            case 0x1ADFA8u: goto label_1adfa8;
            case 0x1ADFACu: goto label_1adfac;
            case 0x1ADFB0u: goto label_1adfb0;
            case 0x1ADFB4u: goto label_1adfb4;
            case 0x1ADFB8u: goto label_1adfb8;
            case 0x1ADFBCu: goto label_1adfbc;
            case 0x1ADFC0u: goto label_1adfc0;
            case 0x1ADFC4u: goto label_1adfc4;
            case 0x1ADFC8u: goto label_1adfc8;
            case 0x1ADFCCu: goto label_1adfcc;
            case 0x1ADFD0u: goto label_1adfd0;
            case 0x1ADFD4u: goto label_1adfd4;
            case 0x1ADFD8u: goto label_1adfd8;
            case 0x1ADFDCu: goto label_1adfdc;
            case 0x1ADFE0u: goto label_1adfe0;
            case 0x1ADFE4u: goto label_1adfe4;
            case 0x1ADFE8u: goto label_1adfe8;
            case 0x1ADFECu: goto label_1adfec;
            case 0x1ADFF0u: goto label_1adff0;
            case 0x1ADFF4u: goto label_1adff4;
            case 0x1ADFF8u: goto label_1adff8;
            case 0x1ADFFCu: goto label_1adffc;
            case 0x1AE000u: goto label_1ae000;
            case 0x1AE004u: goto label_1ae004;
            case 0x1AE008u: goto label_1ae008;
            case 0x1AE00Cu: goto label_1ae00c;
            case 0x1AE010u: goto label_1ae010;
            case 0x1AE014u: goto label_1ae014;
            case 0x1AE018u: goto label_1ae018;
            case 0x1AE01Cu: goto label_1ae01c;
            case 0x1AE020u: goto label_1ae020;
            case 0x1AE024u: goto label_1ae024;
            case 0x1AE028u: goto label_1ae028;
            case 0x1AE02Cu: goto label_1ae02c;
            case 0x1AE030u: goto label_1ae030;
            case 0x1AE034u: goto label_1ae034;
            case 0x1AE038u: goto label_1ae038;
            case 0x1AE03Cu: goto label_1ae03c;
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE044u: goto label_1ae044;
            case 0x1AE048u: goto label_1ae048;
            case 0x1AE04Cu: goto label_1ae04c;
            case 0x1AE050u: goto label_1ae050;
            case 0x1AE054u: goto label_1ae054;
            case 0x1AE058u: goto label_1ae058;
            case 0x1AE05Cu: goto label_1ae05c;
            case 0x1AE060u: goto label_1ae060;
            case 0x1AE064u: goto label_1ae064;
            case 0x1AE068u: goto label_1ae068;
            case 0x1AE06Cu: goto label_1ae06c;
            case 0x1AE070u: goto label_1ae070;
            case 0x1AE074u: goto label_1ae074;
            case 0x1AE078u: goto label_1ae078;
            case 0x1AE07Cu: goto label_1ae07c;
            case 0x1AE080u: goto label_1ae080;
            case 0x1AE084u: goto label_1ae084;
            case 0x1AE088u: goto label_1ae088;
            case 0x1AE08Cu: goto label_1ae08c;
            case 0x1AE090u: goto label_1ae090;
            case 0x1AE094u: goto label_1ae094;
            default: break;
        }
        return;
    }
label_fallthrough_0x1ae090:
    ctx->pc = 0x1AE098u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex1_04Move
// Address: 0x1cdf30 - 0x1ce950
void Enex1_04Move_0x1cdf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex1_04Move_0x1cdf30");
#endif

    ctx->pc = 0x1cdf30u;

label_1cdf30:
    // 0x1cdf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cdf34:
    // 0x1cdf34: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1cdf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1cdf38:
    // 0x1cdf38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1cdf3c:
    // 0x1cdf3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cdf3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cdf40:
    // 0x1cdf40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cdf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cdf44:
    // 0x1cdf44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdf48:
    // 0x1cdf48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cdf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cdf4c:
    // 0x1cdf4c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1cdf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cdf50:
    // 0x1cdf50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdf50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cdf54:
    // 0x1cdf54: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1cdf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdf58:
    // 0x1cdf58: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cdf58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cdf5c:
    // 0x1cdf5c: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1cdf5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1cdf60:
    // 0x1cdf60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cdf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cdf64:
    // 0x1cdf64: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1cdf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cdf68:
    // 0x1cdf68: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1cdf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdf6c:
    // 0x1cdf6c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cdf6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cdf70:
    // 0x1cdf70: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1cdf70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1cdf74:
    // 0x1cdf74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cdf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cdf78:
    // 0x1cdf78: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1cdf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cdf7c:
    // 0x1cdf7c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1cdf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdf80:
    // 0x1cdf80: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cdf80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cdf84:
    // 0x1cdf84: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1cdf84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1cdf88:
    // 0x1cdf88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cdf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cdf8c:
    // 0x1cdf8c: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1cdf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cdf90:
    // 0x1cdf90: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1cdf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdf94:
    // 0x1cdf94: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cdf94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cdf98:
    // 0x1cdf98: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1cdf98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1cdf9c:
    // 0x1cdf9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cdf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cdfa0:
    // 0x1cdfa0: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1cdfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cdfa4:
    // 0x1cdfa4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1cdfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdfa8:
    // 0x1cdfa8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cdfa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cdfac:
    // 0x1cdfac: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1cdfacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1cdfb0:
    // 0x1cdfb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cdfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cdfb4:
    // 0x1cdfb4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1cdfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdfb8:
    // 0x1cdfb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cdfb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cdfbc:
    // 0x1cdfbc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1cdfc0:
    if (ctx->pc == 0x1CDFC0u) {
        ctx->pc = 0x1CDFC0u;
            // 0x1cdfc0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1CDFC4u;
        goto label_1cdfc4;
    }
    ctx->pc = 0x1CDFBCu;
    {
        const bool branch_taken_0x1cdfbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFBCu;
            // 0x1cdfc0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfbc) {
            ctx->pc = 0x1CDFE0u;
            goto label_1cdfe0;
        }
    }
    ctx->pc = 0x1CDFC4u;
label_1cdfc4:
    // 0x1cdfc4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cdfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cdfc8:
    // 0x1cdfc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cdfc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cdfcc:
    // 0x1cdfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdfd0:
    // 0x1cdfd0: 0x0  nop
    ctx->pc = 0x1cdfd0u;
    // NOP
label_1cdfd4:
    // 0x1cdfd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cdfd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cdfd8:
    // 0x1cdfd8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1cdfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1cdfdc:
    // 0x1cdfdc: 0x0  nop
    ctx->pc = 0x1cdfdcu;
    // NOP
label_1cdfe0:
    // 0x1cdfe0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cdfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cdfe4:
    // 0x1cdfe4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cdfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1cdfe8:
    // 0x1cdfe8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cdfe8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cdfec:
    // 0x1cdfec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdfecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdff0:
    // 0x1cdff0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1cdff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdff4:
    // 0x1cdff4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cdff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cdff8:
    // 0x1cdff8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1cdffc:
    if (ctx->pc == 0x1CDFFCu) {
        ctx->pc = 0x1CDFFCu;
            // 0x1cdffc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1CE000u;
        goto label_1ce000;
    }
    ctx->pc = 0x1CDFF8u;
    {
        const bool branch_taken_0x1cdff8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFF8u;
            // 0x1cdffc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdff8) {
            ctx->pc = 0x1CE018u;
            goto label_1ce018;
        }
    }
    ctx->pc = 0x1CE000u;
label_1ce000:
    // 0x1ce000: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ce000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ce004:
    // 0x1ce004: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ce004u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ce008:
    // 0x1ce008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce00c:
    // 0x1ce00c: 0x0  nop
    ctx->pc = 0x1ce00cu;
    // NOP
label_1ce010:
    // 0x1ce010: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ce010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ce014:
    // 0x1ce014: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ce014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ce018:
    // 0x1ce018: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ce018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce01c:
    // 0x1ce01c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1ce01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1ce020:
    // 0x1ce020: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ce020u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ce024:
    // 0x1ce024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce028:
    // 0x1ce028: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1ce028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce02c:
    // 0x1ce02c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ce02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce030:
    // 0x1ce030: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ce034:
    if (ctx->pc == 0x1CE034u) {
        ctx->pc = 0x1CE034u;
            // 0x1ce034: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1CE038u;
        goto label_1ce038;
    }
    ctx->pc = 0x1CE030u;
    {
        const bool branch_taken_0x1ce030 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE030u;
            // 0x1ce034: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce030) {
            ctx->pc = 0x1CE050u;
            goto label_1ce050;
        }
    }
    ctx->pc = 0x1CE038u;
label_1ce038:
    // 0x1ce038: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ce038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ce03c:
    // 0x1ce03c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ce03cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ce040:
    // 0x1ce040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce044:
    // 0x1ce044: 0x0  nop
    ctx->pc = 0x1ce044u;
    // NOP
label_1ce048:
    // 0x1ce048: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ce048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ce04c:
    // 0x1ce04c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ce04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ce050:
    // 0x1ce050: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ce050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce054:
    // 0x1ce054: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ce054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1ce058:
    // 0x1ce058: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ce058u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ce05c:
    // 0x1ce05c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce060:
    // 0x1ce060: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1ce060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce064:
    // 0x1ce064: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ce064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce068:
    // 0x1ce068: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1ce06c:
    if (ctx->pc == 0x1CE06Cu) {
        ctx->pc = 0x1CE06Cu;
            // 0x1ce06c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1CE070u;
        goto label_1ce070;
    }
    ctx->pc = 0x1CE068u;
    {
        const bool branch_taken_0x1ce068 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE068u;
            // 0x1ce06c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce068) {
            ctx->pc = 0x1CE088u;
            goto label_1ce088;
        }
    }
    ctx->pc = 0x1CE070u;
label_1ce070:
    // 0x1ce070: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ce070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ce074:
    // 0x1ce074: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ce074u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ce078:
    // 0x1ce078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce07c:
    // 0x1ce07c: 0x0  nop
    ctx->pc = 0x1ce07cu;
    // NOP
label_1ce080:
    // 0x1ce080: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ce080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ce084:
    // 0x1ce084: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ce084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ce088:
    // 0x1ce088: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ce088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce08c:
    // 0x1ce08c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1ce08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1ce090:
    // 0x1ce090: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ce090u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ce094:
    // 0x1ce094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce098:
    // 0x1ce098: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1ce098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce09c:
    // 0x1ce09c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ce09cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce0a0:
    // 0x1ce0a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ce0a4:
    if (ctx->pc == 0x1CE0A4u) {
        ctx->pc = 0x1CE0A4u;
            // 0x1ce0a4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1CE0A8u;
        goto label_1ce0a8;
    }
    ctx->pc = 0x1CE0A0u;
    {
        const bool branch_taken_0x1ce0a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0A0u;
            // 0x1ce0a4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0a0) {
            ctx->pc = 0x1CE0C0u;
            goto label_1ce0c0;
        }
    }
    ctx->pc = 0x1CE0A8u;
label_1ce0a8:
    // 0x1ce0a8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ce0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ce0ac:
    // 0x1ce0ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ce0acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ce0b0:
    // 0x1ce0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce0b4:
    // 0x1ce0b4: 0x0  nop
    ctx->pc = 0x1ce0b4u;
    // NOP
label_1ce0b8:
    // 0x1ce0b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ce0b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ce0bc:
    // 0x1ce0bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ce0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ce0c0:
    // 0x1ce0c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ce0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce0c4:
    // 0x1ce0c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ce0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1ce0c8:
    // 0x1ce0c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ce0c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ce0cc:
    // 0x1ce0cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce0d0:
    // 0x1ce0d0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1ce0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce0d4:
    // 0x1ce0d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ce0d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce0d8:
    // 0x1ce0d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1ce0dc:
    if (ctx->pc == 0x1CE0DCu) {
        ctx->pc = 0x1CE0DCu;
            // 0x1ce0dc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1CE0E0u;
        goto label_1ce0e0;
    }
    ctx->pc = 0x1CE0D8u;
    {
        const bool branch_taken_0x1ce0d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0D8u;
            // 0x1ce0dc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0d8) {
            ctx->pc = 0x1CE0F8u;
            goto label_1ce0f8;
        }
    }
    ctx->pc = 0x1CE0E0u;
label_1ce0e0:
    // 0x1ce0e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ce0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ce0e4:
    // 0x1ce0e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ce0e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ce0e8:
    // 0x1ce0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce0ec:
    // 0x1ce0ec: 0x0  nop
    ctx->pc = 0x1ce0ecu;
    // NOP
label_1ce0f0:
    // 0x1ce0f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ce0f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ce0f4:
    // 0x1ce0f4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ce0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ce0f8:
    // 0x1ce0f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ce0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce0fc:
    // 0x1ce0fc: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1ce0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1ce100:
    // 0x1ce100: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1ce100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ce104:
    // 0x1ce104: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1ce104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ce108:
    // 0x1ce108: 0xc073a54  jal         func_1CE950
label_1ce10c:
    if (ctx->pc == 0x1CE10Cu) {
        ctx->pc = 0x1CE10Cu;
            // 0x1ce10c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x1CE110u;
        goto label_1ce110;
    }
    ctx->pc = 0x1CE108u;
    SET_GPR_U32(ctx, 31, 0x1CE110u);
    ctx->pc = 0x1CE10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE108u;
            // 0x1ce10c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE950u;
    if (runtime->hasFunction(0x1CE950u)) {
        auto targetFn = runtime->lookupFunction(0x1CE950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE110u; }
        if (ctx->pc != 0x1CE110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1ce950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE110u; }
        if (ctx->pc != 0x1CE110u) { return; }
    }
    ctx->pc = 0x1CE110u;
label_1ce110:
    // 0x1ce110: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ce110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1ce114:
    // 0x1ce114: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1ce114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1ce118:
    // 0x1ce118: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ce118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce11c:
    // 0x1ce11c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ce11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ce120:
    // 0x1ce120: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1ce120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1ce124:
    // 0x1ce124: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x1ce124u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1ce128:
    // 0x1ce128: 0x10200161  beqz        $at, . + 4 + (0x161 << 2)
label_1ce12c:
    if (ctx->pc == 0x1CE12Cu) {
        ctx->pc = 0x1CE12Cu;
            // 0x1ce12c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1CE130u;
        goto label_1ce130;
    }
    ctx->pc = 0x1CE128u;
    {
        const bool branch_taken_0x1ce128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE128u;
            // 0x1ce12c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce128) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE130u;
label_1ce130:
    // 0x1ce130: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ce130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ce134:
    // 0x1ce134: 0x24632c70  addiu       $v1, $v1, 0x2C70
    ctx->pc = 0x1ce134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11376));
label_1ce138:
    // 0x1ce138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ce138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ce13c:
    // 0x1ce13c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ce13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ce140:
    // 0x1ce140: 0x400008  jr          $v0
label_1ce144:
    if (ctx->pc == 0x1CE144u) {
        ctx->pc = 0x1CE148u;
        goto label_1ce148;
    }
    ctx->pc = 0x1CE140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE148u: goto label_1ce148;
            case 0x1CE240u: goto label_1ce240;
            case 0x1CE338u: goto label_1ce338;
            case 0x1CE430u: goto label_1ce430;
            case 0x1CE528u: goto label_1ce528;
            case 0x1CE5F0u: goto label_1ce5f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE148u;
label_1ce148:
    // 0x1ce148: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x1ce148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
label_1ce14c:
    // 0x1ce14c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ce14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ce150:
    // 0x1ce150: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1ce150u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_1ce154:
    // 0x1ce154: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ce154u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce158:
    // 0x1ce158: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1ce158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1ce15c:
    // 0x1ce15c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1ce15cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ce160:
    // 0x1ce160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce164:
    // 0x1ce164: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1ce164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1ce168:
    // 0x1ce168: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1ce168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1ce16c:
    // 0x1ce16c: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ce16cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1ce170:
    // 0x1ce170: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ce170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce174:
    // 0x1ce174: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ce174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ce178:
    // 0x1ce178: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ce178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1ce17c:
    // 0x1ce17c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ce17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ce180:
    // 0x1ce180: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1ce184:
    if (ctx->pc == 0x1CE184u) {
        ctx->pc = 0x1CE184u;
            // 0x1ce184: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1CE188u;
        goto label_1ce188;
    }
    ctx->pc = 0x1CE180u;
    {
        const bool branch_taken_0x1ce180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE180u;
            // 0x1ce184: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce180) {
            ctx->pc = 0x1CE218u;
            goto label_1ce218;
        }
    }
    ctx->pc = 0x1CE188u;
label_1ce188:
    // 0x1ce188: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1ce18c:
    if (ctx->pc == 0x1CE18Cu) {
        ctx->pc = 0x1CE190u;
        goto label_1ce190;
    }
    ctx->pc = 0x1CE188u;
    {
        const bool branch_taken_0x1ce188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce188) {
            ctx->pc = 0x1CE1F0u;
            goto label_1ce1f0;
        }
    }
    ctx->pc = 0x1CE190u;
label_1ce190:
    // 0x1ce190: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1ce190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1ce194:
    // 0x1ce194: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1ce198:
    if (ctx->pc == 0x1CE198u) {
        ctx->pc = 0x1CE198u;
            // 0x1ce198: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1CE19Cu;
        goto label_1ce19c;
    }
    ctx->pc = 0x1CE194u;
    {
        const bool branch_taken_0x1ce194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE194u;
            // 0x1ce198: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce194) {
            ctx->pc = 0x1CE1D8u;
            goto label_1ce1d8;
        }
    }
    ctx->pc = 0x1CE19Cu;
label_1ce19c:
    // 0x1ce19c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1ce1a0:
    if (ctx->pc == 0x1CE1A0u) {
        ctx->pc = 0x1CE1A4u;
        goto label_1ce1a4;
    }
    ctx->pc = 0x1CE19Cu;
    {
        const bool branch_taken_0x1ce19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce19c) {
            ctx->pc = 0x1CE1B0u;
            goto label_1ce1b0;
        }
    }
    ctx->pc = 0x1CE1A4u;
label_1ce1a4:
    // 0x1ce1a4: 0x10000142  b           . + 4 + (0x142 << 2)
label_1ce1a8:
    if (ctx->pc == 0x1CE1A8u) {
        ctx->pc = 0x1CE1ACu;
        goto label_1ce1ac;
    }
    ctx->pc = 0x1CE1A4u;
    {
        const bool branch_taken_0x1ce1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1a4) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE1ACu;
label_1ce1ac:
    // 0x1ce1ac: 0x0  nop
    ctx->pc = 0x1ce1acu;
    // NOP
label_1ce1b0:
    // 0x1ce1b0: 0xc065d00  jal         func_197400
label_1ce1b4:
    if (ctx->pc == 0x1CE1B4u) {
        ctx->pc = 0x1CE1B8u;
        goto label_1ce1b8;
    }
    ctx->pc = 0x1CE1B0u;
    SET_GPR_U32(ctx, 31, 0x1CE1B8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1B8u; }
        if (ctx->pc != 0x1CE1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1B8u; }
        if (ctx->pc != 0x1CE1B8u) { return; }
    }
    ctx->pc = 0x1CE1B8u;
label_1ce1b8:
    // 0x1ce1b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ce1bc:
    // 0x1ce1bc: 0x1443013c  bne         $v0, $v1, . + 4 + (0x13C << 2)
label_1ce1c0:
    if (ctx->pc == 0x1CE1C0u) {
        ctx->pc = 0x1CE1C4u;
        goto label_1ce1c4;
    }
    ctx->pc = 0x1CE1BCu;
    {
        const bool branch_taken_0x1ce1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ce1bc) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE1C4u;
label_1ce1c4:
    // 0x1ce1c4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce1c8:
    // 0x1ce1c8: 0xc06560c  jal         func_195830
label_1ce1cc:
    if (ctx->pc == 0x1CE1CCu) {
        ctx->pc = 0x1CE1CCu;
            // 0x1ce1cc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE1D0u;
        goto label_1ce1d0;
    }
    ctx->pc = 0x1CE1C8u;
    SET_GPR_U32(ctx, 31, 0x1CE1D0u);
    ctx->pc = 0x1CE1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE1C8u;
            // 0x1ce1cc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1D0u; }
        if (ctx->pc != 0x1CE1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1D0u; }
        if (ctx->pc != 0x1CE1D0u) { return; }
    }
    ctx->pc = 0x1CE1D0u;
label_1ce1d0:
    // 0x1ce1d0: 0x10000137  b           . + 4 + (0x137 << 2)
label_1ce1d4:
    if (ctx->pc == 0x1CE1D4u) {
        ctx->pc = 0x1CE1D8u;
        goto label_1ce1d8;
    }
    ctx->pc = 0x1CE1D0u;
    {
        const bool branch_taken_0x1ce1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1d0) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE1D8u;
label_1ce1d8:
    // 0x1ce1d8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce1dc:
    // 0x1ce1dc: 0xc06560c  jal         func_195830
label_1ce1e0:
    if (ctx->pc == 0x1CE1E0u) {
        ctx->pc = 0x1CE1E0u;
            // 0x1ce1e0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE1E4u;
        goto label_1ce1e4;
    }
    ctx->pc = 0x1CE1DCu;
    SET_GPR_U32(ctx, 31, 0x1CE1E4u);
    ctx->pc = 0x1CE1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE1DCu;
            // 0x1ce1e0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1E4u; }
        if (ctx->pc != 0x1CE1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1E4u; }
        if (ctx->pc != 0x1CE1E4u) { return; }
    }
    ctx->pc = 0x1CE1E4u;
label_1ce1e4:
    // 0x1ce1e4: 0x10000132  b           . + 4 + (0x132 << 2)
label_1ce1e8:
    if (ctx->pc == 0x1CE1E8u) {
        ctx->pc = 0x1CE1ECu;
        goto label_1ce1ec;
    }
    ctx->pc = 0x1CE1E4u;
    {
        const bool branch_taken_0x1ce1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1e4) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE1ECu;
label_1ce1ec:
    // 0x1ce1ec: 0x0  nop
    ctx->pc = 0x1ce1ecu;
    // NOP
label_1ce1f0:
    // 0x1ce1f0: 0xc065d00  jal         func_197400
label_1ce1f4:
    if (ctx->pc == 0x1CE1F4u) {
        ctx->pc = 0x1CE1F8u;
        goto label_1ce1f8;
    }
    ctx->pc = 0x1CE1F0u;
    SET_GPR_U32(ctx, 31, 0x1CE1F8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1F8u; }
        if (ctx->pc != 0x1CE1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1F8u; }
        if (ctx->pc != 0x1CE1F8u) { return; }
    }
    ctx->pc = 0x1CE1F8u;
label_1ce1f8:
    // 0x1ce1f8: 0x1840012d  blez        $v0, . + 4 + (0x12D << 2)
label_1ce1fc:
    if (ctx->pc == 0x1CE1FCu) {
        ctx->pc = 0x1CE200u;
        goto label_1ce200;
    }
    ctx->pc = 0x1CE1F8u;
    {
        const bool branch_taken_0x1ce1f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ce1f8) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE200u;
label_1ce200:
    // 0x1ce200: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce204:
    // 0x1ce204: 0xc06560c  jal         func_195830
label_1ce208:
    if (ctx->pc == 0x1CE208u) {
        ctx->pc = 0x1CE208u;
            // 0x1ce208: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE20Cu;
        goto label_1ce20c;
    }
    ctx->pc = 0x1CE204u;
    SET_GPR_U32(ctx, 31, 0x1CE20Cu);
    ctx->pc = 0x1CE208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE204u;
            // 0x1ce208: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE20Cu; }
        if (ctx->pc != 0x1CE20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE20Cu; }
        if (ctx->pc != 0x1CE20Cu) { return; }
    }
    ctx->pc = 0x1CE20Cu;
label_1ce20c:
    // 0x1ce20c: 0x10000128  b           . + 4 + (0x128 << 2)
label_1ce210:
    if (ctx->pc == 0x1CE210u) {
        ctx->pc = 0x1CE214u;
        goto label_1ce214;
    }
    ctx->pc = 0x1CE20Cu;
    {
        const bool branch_taken_0x1ce20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce20c) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE214u;
label_1ce214:
    // 0x1ce214: 0x0  nop
    ctx->pc = 0x1ce214u;
    // NOP
label_1ce218:
    // 0x1ce218: 0xc065d00  jal         func_197400
label_1ce21c:
    if (ctx->pc == 0x1CE21Cu) {
        ctx->pc = 0x1CE220u;
        goto label_1ce220;
    }
    ctx->pc = 0x1CE218u;
    SET_GPR_U32(ctx, 31, 0x1CE220u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE220u; }
        if (ctx->pc != 0x1CE220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE220u; }
        if (ctx->pc != 0x1CE220u) { return; }
    }
    ctx->pc = 0x1CE220u;
label_1ce220:
    // 0x1ce220: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ce224:
    // 0x1ce224: 0x14430122  bne         $v0, $v1, . + 4 + (0x122 << 2)
label_1ce228:
    if (ctx->pc == 0x1CE228u) {
        ctx->pc = 0x1CE22Cu;
        goto label_1ce22c;
    }
    ctx->pc = 0x1CE224u;
    {
        const bool branch_taken_0x1ce224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ce224) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE22Cu;
label_1ce22c:
    // 0x1ce22c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce230:
    // 0x1ce230: 0xc06560c  jal         func_195830
label_1ce234:
    if (ctx->pc == 0x1CE234u) {
        ctx->pc = 0x1CE234u;
            // 0x1ce234: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE238u;
        goto label_1ce238;
    }
    ctx->pc = 0x1CE230u;
    SET_GPR_U32(ctx, 31, 0x1CE238u);
    ctx->pc = 0x1CE234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE230u;
            // 0x1ce234: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE238u; }
        if (ctx->pc != 0x1CE238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE238u; }
        if (ctx->pc != 0x1CE238u) { return; }
    }
    ctx->pc = 0x1CE238u;
label_1ce238:
    // 0x1ce238: 0x1000011d  b           . + 4 + (0x11D << 2)
label_1ce23c:
    if (ctx->pc == 0x1CE23Cu) {
        ctx->pc = 0x1CE240u;
        goto label_1ce240;
    }
    ctx->pc = 0x1CE238u;
    {
        const bool branch_taken_0x1ce238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce238) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE240u;
label_1ce240:
    // 0x1ce240: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x1ce240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
label_1ce244:
    // 0x1ce244: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ce244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ce248:
    // 0x1ce248: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1ce248u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_1ce24c:
    // 0x1ce24c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ce24cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce250:
    // 0x1ce250: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1ce250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1ce254:
    // 0x1ce254: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1ce254u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ce258:
    // 0x1ce258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce25c:
    // 0x1ce25c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1ce25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1ce260:
    // 0x1ce260: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1ce260u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ce264:
    // 0x1ce264: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ce264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1ce268:
    // 0x1ce268: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ce268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce26c:
    // 0x1ce26c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ce26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ce270:
    // 0x1ce270: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ce270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1ce274:
    // 0x1ce274: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ce274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ce278:
    // 0x1ce278: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1ce27c:
    if (ctx->pc == 0x1CE27Cu) {
        ctx->pc = 0x1CE27Cu;
            // 0x1ce27c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1CE280u;
        goto label_1ce280;
    }
    ctx->pc = 0x1CE278u;
    {
        const bool branch_taken_0x1ce278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE278u;
            // 0x1ce27c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce278) {
            ctx->pc = 0x1CE310u;
            goto label_1ce310;
        }
    }
    ctx->pc = 0x1CE280u;
label_1ce280:
    // 0x1ce280: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1ce284:
    if (ctx->pc == 0x1CE284u) {
        ctx->pc = 0x1CE288u;
        goto label_1ce288;
    }
    ctx->pc = 0x1CE280u;
    {
        const bool branch_taken_0x1ce280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce280) {
            ctx->pc = 0x1CE2E8u;
            goto label_1ce2e8;
        }
    }
    ctx->pc = 0x1CE288u;
label_1ce288:
    // 0x1ce288: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1ce288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1ce28c:
    // 0x1ce28c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1ce290:
    if (ctx->pc == 0x1CE290u) {
        ctx->pc = 0x1CE290u;
            // 0x1ce290: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1CE294u;
        goto label_1ce294;
    }
    ctx->pc = 0x1CE28Cu;
    {
        const bool branch_taken_0x1ce28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE28Cu;
            // 0x1ce290: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce28c) {
            ctx->pc = 0x1CE2D0u;
            goto label_1ce2d0;
        }
    }
    ctx->pc = 0x1CE294u;
label_1ce294:
    // 0x1ce294: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1ce298:
    if (ctx->pc == 0x1CE298u) {
        ctx->pc = 0x1CE29Cu;
        goto label_1ce29c;
    }
    ctx->pc = 0x1CE294u;
    {
        const bool branch_taken_0x1ce294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce294) {
            ctx->pc = 0x1CE2A8u;
            goto label_1ce2a8;
        }
    }
    ctx->pc = 0x1CE29Cu;
label_1ce29c:
    // 0x1ce29c: 0x10000104  b           . + 4 + (0x104 << 2)
label_1ce2a0:
    if (ctx->pc == 0x1CE2A0u) {
        ctx->pc = 0x1CE2A4u;
        goto label_1ce2a4;
    }
    ctx->pc = 0x1CE29Cu;
    {
        const bool branch_taken_0x1ce29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce29c) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE2A4u;
label_1ce2a4:
    // 0x1ce2a4: 0x0  nop
    ctx->pc = 0x1ce2a4u;
    // NOP
label_1ce2a8:
    // 0x1ce2a8: 0xc065d00  jal         func_197400
label_1ce2ac:
    if (ctx->pc == 0x1CE2ACu) {
        ctx->pc = 0x1CE2B0u;
        goto label_1ce2b0;
    }
    ctx->pc = 0x1CE2A8u;
    SET_GPR_U32(ctx, 31, 0x1CE2B0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2B0u; }
        if (ctx->pc != 0x1CE2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2B0u; }
        if (ctx->pc != 0x1CE2B0u) { return; }
    }
    ctx->pc = 0x1CE2B0u;
label_1ce2b0:
    // 0x1ce2b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ce2b4:
    // 0x1ce2b4: 0x144300fe  bne         $v0, $v1, . + 4 + (0xFE << 2)
label_1ce2b8:
    if (ctx->pc == 0x1CE2B8u) {
        ctx->pc = 0x1CE2BCu;
        goto label_1ce2bc;
    }
    ctx->pc = 0x1CE2B4u;
    {
        const bool branch_taken_0x1ce2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ce2b4) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE2BCu;
label_1ce2bc:
    // 0x1ce2bc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce2c0:
    // 0x1ce2c0: 0xc06560c  jal         func_195830
label_1ce2c4:
    if (ctx->pc == 0x1CE2C4u) {
        ctx->pc = 0x1CE2C4u;
            // 0x1ce2c4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE2C8u;
        goto label_1ce2c8;
    }
    ctx->pc = 0x1CE2C0u;
    SET_GPR_U32(ctx, 31, 0x1CE2C8u);
    ctx->pc = 0x1CE2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2C0u;
            // 0x1ce2c4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2C8u; }
        if (ctx->pc != 0x1CE2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2C8u; }
        if (ctx->pc != 0x1CE2C8u) { return; }
    }
    ctx->pc = 0x1CE2C8u;
label_1ce2c8:
    // 0x1ce2c8: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_1ce2cc:
    if (ctx->pc == 0x1CE2CCu) {
        ctx->pc = 0x1CE2D0u;
        goto label_1ce2d0;
    }
    ctx->pc = 0x1CE2C8u;
    {
        const bool branch_taken_0x1ce2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce2c8) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE2D0u;
label_1ce2d0:
    // 0x1ce2d0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce2d4:
    // 0x1ce2d4: 0xc06560c  jal         func_195830
label_1ce2d8:
    if (ctx->pc == 0x1CE2D8u) {
        ctx->pc = 0x1CE2D8u;
            // 0x1ce2d8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE2DCu;
        goto label_1ce2dc;
    }
    ctx->pc = 0x1CE2D4u;
    SET_GPR_U32(ctx, 31, 0x1CE2DCu);
    ctx->pc = 0x1CE2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2D4u;
            // 0x1ce2d8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2DCu; }
        if (ctx->pc != 0x1CE2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2DCu; }
        if (ctx->pc != 0x1CE2DCu) { return; }
    }
    ctx->pc = 0x1CE2DCu;
label_1ce2dc:
    // 0x1ce2dc: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_1ce2e0:
    if (ctx->pc == 0x1CE2E0u) {
        ctx->pc = 0x1CE2E4u;
        goto label_1ce2e4;
    }
    ctx->pc = 0x1CE2DCu;
    {
        const bool branch_taken_0x1ce2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce2dc) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE2E4u;
label_1ce2e4:
    // 0x1ce2e4: 0x0  nop
    ctx->pc = 0x1ce2e4u;
    // NOP
label_1ce2e8:
    // 0x1ce2e8: 0xc065d00  jal         func_197400
label_1ce2ec:
    if (ctx->pc == 0x1CE2ECu) {
        ctx->pc = 0x1CE2F0u;
        goto label_1ce2f0;
    }
    ctx->pc = 0x1CE2E8u;
    SET_GPR_U32(ctx, 31, 0x1CE2F0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2F0u; }
        if (ctx->pc != 0x1CE2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2F0u; }
        if (ctx->pc != 0x1CE2F0u) { return; }
    }
    ctx->pc = 0x1CE2F0u;
label_1ce2f0:
    // 0x1ce2f0: 0x184000ef  blez        $v0, . + 4 + (0xEF << 2)
label_1ce2f4:
    if (ctx->pc == 0x1CE2F4u) {
        ctx->pc = 0x1CE2F8u;
        goto label_1ce2f8;
    }
    ctx->pc = 0x1CE2F0u;
    {
        const bool branch_taken_0x1ce2f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ce2f0) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE2F8u;
label_1ce2f8:
    // 0x1ce2f8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce2fc:
    // 0x1ce2fc: 0xc06560c  jal         func_195830
label_1ce300:
    if (ctx->pc == 0x1CE300u) {
        ctx->pc = 0x1CE300u;
            // 0x1ce300: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE304u;
        goto label_1ce304;
    }
    ctx->pc = 0x1CE2FCu;
    SET_GPR_U32(ctx, 31, 0x1CE304u);
    ctx->pc = 0x1CE300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2FCu;
            // 0x1ce300: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE304u; }
        if (ctx->pc != 0x1CE304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE304u; }
        if (ctx->pc != 0x1CE304u) { return; }
    }
    ctx->pc = 0x1CE304u;
label_1ce304:
    // 0x1ce304: 0x100000ea  b           . + 4 + (0xEA << 2)
label_1ce308:
    if (ctx->pc == 0x1CE308u) {
        ctx->pc = 0x1CE30Cu;
        goto label_1ce30c;
    }
    ctx->pc = 0x1CE304u;
    {
        const bool branch_taken_0x1ce304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce304) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE30Cu;
label_1ce30c:
    // 0x1ce30c: 0x0  nop
    ctx->pc = 0x1ce30cu;
    // NOP
label_1ce310:
    // 0x1ce310: 0xc065d00  jal         func_197400
label_1ce314:
    if (ctx->pc == 0x1CE314u) {
        ctx->pc = 0x1CE318u;
        goto label_1ce318;
    }
    ctx->pc = 0x1CE310u;
    SET_GPR_U32(ctx, 31, 0x1CE318u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE318u; }
        if (ctx->pc != 0x1CE318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE318u; }
        if (ctx->pc != 0x1CE318u) { return; }
    }
    ctx->pc = 0x1CE318u;
label_1ce318:
    // 0x1ce318: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ce31c:
    // 0x1ce31c: 0x144300e4  bne         $v0, $v1, . + 4 + (0xE4 << 2)
label_1ce320:
    if (ctx->pc == 0x1CE320u) {
        ctx->pc = 0x1CE324u;
        goto label_1ce324;
    }
    ctx->pc = 0x1CE31Cu;
    {
        const bool branch_taken_0x1ce31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ce31c) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE324u;
label_1ce324:
    // 0x1ce324: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce328:
    // 0x1ce328: 0xc06560c  jal         func_195830
label_1ce32c:
    if (ctx->pc == 0x1CE32Cu) {
        ctx->pc = 0x1CE32Cu;
            // 0x1ce32c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE330u;
        goto label_1ce330;
    }
    ctx->pc = 0x1CE328u;
    SET_GPR_U32(ctx, 31, 0x1CE330u);
    ctx->pc = 0x1CE32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE328u;
            // 0x1ce32c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE330u; }
        if (ctx->pc != 0x1CE330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE330u; }
        if (ctx->pc != 0x1CE330u) { return; }
    }
    ctx->pc = 0x1CE330u;
label_1ce330:
    // 0x1ce330: 0x100000df  b           . + 4 + (0xDF << 2)
label_1ce334:
    if (ctx->pc == 0x1CE334u) {
        ctx->pc = 0x1CE338u;
        goto label_1ce338;
    }
    ctx->pc = 0x1CE330u;
    {
        const bool branch_taken_0x1ce330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce330) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE338u;
label_1ce338:
    // 0x1ce338: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x1ce338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
label_1ce33c:
    // 0x1ce33c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ce33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ce340:
    // 0x1ce340: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1ce340u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_1ce344:
    // 0x1ce344: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ce344u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce348:
    // 0x1ce348: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1ce348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1ce34c:
    // 0x1ce34c: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x1ce34cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1ce350:
    // 0x1ce350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce354:
    // 0x1ce354: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1ce354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1ce358:
    // 0x1ce358: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1ce358u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1ce35c:
    // 0x1ce35c: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ce35cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1ce360:
    // 0x1ce360: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ce360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce364:
    // 0x1ce364: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ce364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ce368:
    // 0x1ce368: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ce368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1ce36c:
    // 0x1ce36c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ce36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ce370:
    // 0x1ce370: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1ce374:
    if (ctx->pc == 0x1CE374u) {
        ctx->pc = 0x1CE374u;
            // 0x1ce374: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1CE378u;
        goto label_1ce378;
    }
    ctx->pc = 0x1CE370u;
    {
        const bool branch_taken_0x1ce370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE370u;
            // 0x1ce374: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce370) {
            ctx->pc = 0x1CE408u;
            goto label_1ce408;
        }
    }
    ctx->pc = 0x1CE378u;
label_1ce378:
    // 0x1ce378: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1ce37c:
    if (ctx->pc == 0x1CE37Cu) {
        ctx->pc = 0x1CE380u;
        goto label_1ce380;
    }
    ctx->pc = 0x1CE378u;
    {
        const bool branch_taken_0x1ce378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce378) {
            ctx->pc = 0x1CE3E0u;
            goto label_1ce3e0;
        }
    }
    ctx->pc = 0x1CE380u;
label_1ce380:
    // 0x1ce380: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1ce380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1ce384:
    // 0x1ce384: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1ce388:
    if (ctx->pc == 0x1CE388u) {
        ctx->pc = 0x1CE388u;
            // 0x1ce388: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1CE38Cu;
        goto label_1ce38c;
    }
    ctx->pc = 0x1CE384u;
    {
        const bool branch_taken_0x1ce384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE384u;
            // 0x1ce388: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce384) {
            ctx->pc = 0x1CE3B8u;
            goto label_1ce3b8;
        }
    }
    ctx->pc = 0x1CE38Cu;
label_1ce38c:
    // 0x1ce38c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1ce390:
    if (ctx->pc == 0x1CE390u) {
        ctx->pc = 0x1CE394u;
        goto label_1ce394;
    }
    ctx->pc = 0x1CE38Cu;
    {
        const bool branch_taken_0x1ce38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce38c) {
            ctx->pc = 0x1CE3A0u;
            goto label_1ce3a0;
        }
    }
    ctx->pc = 0x1CE394u;
label_1ce394:
    // 0x1ce394: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_1ce398:
    if (ctx->pc == 0x1CE398u) {
        ctx->pc = 0x1CE39Cu;
        goto label_1ce39c;
    }
    ctx->pc = 0x1CE394u;
    {
        const bool branch_taken_0x1ce394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce394) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE39Cu;
label_1ce39c:
    // 0x1ce39c: 0x0  nop
    ctx->pc = 0x1ce39cu;
    // NOP
label_1ce3a0:
    // 0x1ce3a0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce3a4:
    // 0x1ce3a4: 0xc06560c  jal         func_195830
label_1ce3a8:
    if (ctx->pc == 0x1CE3A8u) {
        ctx->pc = 0x1CE3A8u;
            // 0x1ce3a8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE3ACu;
        goto label_1ce3ac;
    }
    ctx->pc = 0x1CE3A4u;
    SET_GPR_U32(ctx, 31, 0x1CE3ACu);
    ctx->pc = 0x1CE3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE3A4u;
            // 0x1ce3a8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3ACu; }
        if (ctx->pc != 0x1CE3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3ACu; }
        if (ctx->pc != 0x1CE3ACu) { return; }
    }
    ctx->pc = 0x1CE3ACu;
label_1ce3ac:
    // 0x1ce3ac: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_1ce3b0:
    if (ctx->pc == 0x1CE3B0u) {
        ctx->pc = 0x1CE3B4u;
        goto label_1ce3b4;
    }
    ctx->pc = 0x1CE3ACu;
    {
        const bool branch_taken_0x1ce3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce3ac) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE3B4u;
label_1ce3b4:
    // 0x1ce3b4: 0x0  nop
    ctx->pc = 0x1ce3b4u;
    // NOP
label_1ce3b8:
    // 0x1ce3b8: 0xc065d00  jal         func_197400
label_1ce3bc:
    if (ctx->pc == 0x1CE3BCu) {
        ctx->pc = 0x1CE3C0u;
        goto label_1ce3c0;
    }
    ctx->pc = 0x1CE3B8u;
    SET_GPR_U32(ctx, 31, 0x1CE3C0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3C0u; }
        if (ctx->pc != 0x1CE3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3C0u; }
        if (ctx->pc != 0x1CE3C0u) { return; }
    }
    ctx->pc = 0x1CE3C0u;
label_1ce3c0:
    // 0x1ce3c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ce3c4:
    // 0x1ce3c4: 0x144300ba  bne         $v0, $v1, . + 4 + (0xBA << 2)
label_1ce3c8:
    if (ctx->pc == 0x1CE3C8u) {
        ctx->pc = 0x1CE3CCu;
        goto label_1ce3cc;
    }
    ctx->pc = 0x1CE3C4u;
    {
        const bool branch_taken_0x1ce3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ce3c4) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE3CCu;
label_1ce3cc:
    // 0x1ce3cc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce3d0:
    // 0x1ce3d0: 0xc06560c  jal         func_195830
label_1ce3d4:
    if (ctx->pc == 0x1CE3D4u) {
        ctx->pc = 0x1CE3D4u;
            // 0x1ce3d4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE3D8u;
        goto label_1ce3d8;
    }
    ctx->pc = 0x1CE3D0u;
    SET_GPR_U32(ctx, 31, 0x1CE3D8u);
    ctx->pc = 0x1CE3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE3D0u;
            // 0x1ce3d4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3D8u; }
        if (ctx->pc != 0x1CE3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3D8u; }
        if (ctx->pc != 0x1CE3D8u) { return; }
    }
    ctx->pc = 0x1CE3D8u;
label_1ce3d8:
    // 0x1ce3d8: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_1ce3dc:
    if (ctx->pc == 0x1CE3DCu) {
        ctx->pc = 0x1CE3E0u;
        goto label_1ce3e0;
    }
    ctx->pc = 0x1CE3D8u;
    {
        const bool branch_taken_0x1ce3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce3d8) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE3E0u;
label_1ce3e0:
    // 0x1ce3e0: 0xc065d00  jal         func_197400
label_1ce3e4:
    if (ctx->pc == 0x1CE3E4u) {
        ctx->pc = 0x1CE3E8u;
        goto label_1ce3e8;
    }
    ctx->pc = 0x1CE3E0u;
    SET_GPR_U32(ctx, 31, 0x1CE3E8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3E8u; }
        if (ctx->pc != 0x1CE3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3E8u; }
        if (ctx->pc != 0x1CE3E8u) { return; }
    }
    ctx->pc = 0x1CE3E8u;
label_1ce3e8:
    // 0x1ce3e8: 0x184000b1  blez        $v0, . + 4 + (0xB1 << 2)
label_1ce3ec:
    if (ctx->pc == 0x1CE3ECu) {
        ctx->pc = 0x1CE3F0u;
        goto label_1ce3f0;
    }
    ctx->pc = 0x1CE3E8u;
    {
        const bool branch_taken_0x1ce3e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ce3e8) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE3F0u;
label_1ce3f0:
    // 0x1ce3f0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce3f4:
    // 0x1ce3f4: 0xc06560c  jal         func_195830
label_1ce3f8:
    if (ctx->pc == 0x1CE3F8u) {
        ctx->pc = 0x1CE3F8u;
            // 0x1ce3f8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE3FCu;
        goto label_1ce3fc;
    }
    ctx->pc = 0x1CE3F4u;
    SET_GPR_U32(ctx, 31, 0x1CE3FCu);
    ctx->pc = 0x1CE3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE3F4u;
            // 0x1ce3f8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3FCu; }
        if (ctx->pc != 0x1CE3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3FCu; }
        if (ctx->pc != 0x1CE3FCu) { return; }
    }
    ctx->pc = 0x1CE3FCu;
label_1ce3fc:
    // 0x1ce3fc: 0x100000ac  b           . + 4 + (0xAC << 2)
label_1ce400:
    if (ctx->pc == 0x1CE400u) {
        ctx->pc = 0x1CE404u;
        goto label_1ce404;
    }
    ctx->pc = 0x1CE3FCu;
    {
        const bool branch_taken_0x1ce3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce3fc) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE404u;
label_1ce404:
    // 0x1ce404: 0x0  nop
    ctx->pc = 0x1ce404u;
    // NOP
label_1ce408:
    // 0x1ce408: 0xc065d00  jal         func_197400
label_1ce40c:
    if (ctx->pc == 0x1CE40Cu) {
        ctx->pc = 0x1CE410u;
        goto label_1ce410;
    }
    ctx->pc = 0x1CE408u;
    SET_GPR_U32(ctx, 31, 0x1CE410u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE410u; }
        if (ctx->pc != 0x1CE410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE410u; }
        if (ctx->pc != 0x1CE410u) { return; }
    }
    ctx->pc = 0x1CE410u;
label_1ce410:
    // 0x1ce410: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ce414:
    // 0x1ce414: 0x144300a6  bne         $v0, $v1, . + 4 + (0xA6 << 2)
label_1ce418:
    if (ctx->pc == 0x1CE418u) {
        ctx->pc = 0x1CE41Cu;
        goto label_1ce41c;
    }
    ctx->pc = 0x1CE414u;
    {
        const bool branch_taken_0x1ce414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ce414) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE41Cu;
label_1ce41c:
    // 0x1ce41c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce420:
    // 0x1ce420: 0xc06560c  jal         func_195830
label_1ce424:
    if (ctx->pc == 0x1CE424u) {
        ctx->pc = 0x1CE424u;
            // 0x1ce424: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE428u;
        goto label_1ce428;
    }
    ctx->pc = 0x1CE420u;
    SET_GPR_U32(ctx, 31, 0x1CE428u);
    ctx->pc = 0x1CE424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE420u;
            // 0x1ce424: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE428u; }
        if (ctx->pc != 0x1CE428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE428u; }
        if (ctx->pc != 0x1CE428u) { return; }
    }
    ctx->pc = 0x1CE428u;
label_1ce428:
    // 0x1ce428: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_1ce42c:
    if (ctx->pc == 0x1CE42Cu) {
        ctx->pc = 0x1CE430u;
        goto label_1ce430;
    }
    ctx->pc = 0x1CE428u;
    {
        const bool branch_taken_0x1ce428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce428) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE430u;
label_1ce430:
    // 0x1ce430: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x1ce430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
label_1ce434:
    // 0x1ce434: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ce434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ce438:
    // 0x1ce438: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1ce438u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_1ce43c:
    // 0x1ce43c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ce43cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce440:
    // 0x1ce440: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1ce440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1ce444:
    // 0x1ce444: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x1ce444u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1ce448:
    // 0x1ce448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce44c:
    // 0x1ce44c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1ce44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1ce450:
    // 0x1ce450: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1ce450u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ce454:
    // 0x1ce454: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ce454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1ce458:
    // 0x1ce458: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ce458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce45c:
    // 0x1ce45c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ce45cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ce460:
    // 0x1ce460: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ce460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1ce464:
    // 0x1ce464: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ce464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ce468:
    // 0x1ce468: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1ce46c:
    if (ctx->pc == 0x1CE46Cu) {
        ctx->pc = 0x1CE46Cu;
            // 0x1ce46c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1CE470u;
        goto label_1ce470;
    }
    ctx->pc = 0x1CE468u;
    {
        const bool branch_taken_0x1ce468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE468u;
            // 0x1ce46c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce468) {
            ctx->pc = 0x1CE500u;
            goto label_1ce500;
        }
    }
    ctx->pc = 0x1CE470u;
label_1ce470:
    // 0x1ce470: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1ce474:
    if (ctx->pc == 0x1CE474u) {
        ctx->pc = 0x1CE478u;
        goto label_1ce478;
    }
    ctx->pc = 0x1CE470u;
    {
        const bool branch_taken_0x1ce470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce470) {
            ctx->pc = 0x1CE4D8u;
            goto label_1ce4d8;
        }
    }
    ctx->pc = 0x1CE478u;
label_1ce478:
    // 0x1ce478: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1ce478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1ce47c:
    // 0x1ce47c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1ce480:
    if (ctx->pc == 0x1CE480u) {
        ctx->pc = 0x1CE480u;
            // 0x1ce480: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1CE484u;
        goto label_1ce484;
    }
    ctx->pc = 0x1CE47Cu;
    {
        const bool branch_taken_0x1ce47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE47Cu;
            // 0x1ce480: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce47c) {
            ctx->pc = 0x1CE4B0u;
            goto label_1ce4b0;
        }
    }
    ctx->pc = 0x1CE484u;
label_1ce484:
    // 0x1ce484: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1ce488:
    if (ctx->pc == 0x1CE488u) {
        ctx->pc = 0x1CE48Cu;
        goto label_1ce48c;
    }
    ctx->pc = 0x1CE484u;
    {
        const bool branch_taken_0x1ce484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce484) {
            ctx->pc = 0x1CE498u;
            goto label_1ce498;
        }
    }
    ctx->pc = 0x1CE48Cu;
label_1ce48c:
    // 0x1ce48c: 0x10000088  b           . + 4 + (0x88 << 2)
label_1ce490:
    if (ctx->pc == 0x1CE490u) {
        ctx->pc = 0x1CE494u;
        goto label_1ce494;
    }
    ctx->pc = 0x1CE48Cu;
    {
        const bool branch_taken_0x1ce48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce48c) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE494u;
label_1ce494:
    // 0x1ce494: 0x0  nop
    ctx->pc = 0x1ce494u;
    // NOP
label_1ce498:
    // 0x1ce498: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce49c:
    // 0x1ce49c: 0xc06560c  jal         func_195830
label_1ce4a0:
    if (ctx->pc == 0x1CE4A0u) {
        ctx->pc = 0x1CE4A0u;
            // 0x1ce4a0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE4A4u;
        goto label_1ce4a4;
    }
    ctx->pc = 0x1CE49Cu;
    SET_GPR_U32(ctx, 31, 0x1CE4A4u);
    ctx->pc = 0x1CE4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE49Cu;
            // 0x1ce4a0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4A4u; }
        if (ctx->pc != 0x1CE4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4A4u; }
        if (ctx->pc != 0x1CE4A4u) { return; }
    }
    ctx->pc = 0x1CE4A4u;
label_1ce4a4:
    // 0x1ce4a4: 0x10000082  b           . + 4 + (0x82 << 2)
label_1ce4a8:
    if (ctx->pc == 0x1CE4A8u) {
        ctx->pc = 0x1CE4ACu;
        goto label_1ce4ac;
    }
    ctx->pc = 0x1CE4A4u;
    {
        const bool branch_taken_0x1ce4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce4a4) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE4ACu;
label_1ce4ac:
    // 0x1ce4ac: 0x0  nop
    ctx->pc = 0x1ce4acu;
    // NOP
label_1ce4b0:
    // 0x1ce4b0: 0xc065d00  jal         func_197400
label_1ce4b4:
    if (ctx->pc == 0x1CE4B4u) {
        ctx->pc = 0x1CE4B8u;
        goto label_1ce4b8;
    }
    ctx->pc = 0x1CE4B0u;
    SET_GPR_U32(ctx, 31, 0x1CE4B8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4B8u; }
        if (ctx->pc != 0x1CE4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4B8u; }
        if (ctx->pc != 0x1CE4B8u) { return; }
    }
    ctx->pc = 0x1CE4B8u;
label_1ce4b8:
    // 0x1ce4b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ce4bc:
    // 0x1ce4bc: 0x1443007c  bne         $v0, $v1, . + 4 + (0x7C << 2)
label_1ce4c0:
    if (ctx->pc == 0x1CE4C0u) {
        ctx->pc = 0x1CE4C4u;
        goto label_1ce4c4;
    }
    ctx->pc = 0x1CE4BCu;
    {
        const bool branch_taken_0x1ce4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ce4bc) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE4C4u;
label_1ce4c4:
    // 0x1ce4c4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce4c8:
    // 0x1ce4c8: 0xc06560c  jal         func_195830
label_1ce4cc:
    if (ctx->pc == 0x1CE4CCu) {
        ctx->pc = 0x1CE4CCu;
            // 0x1ce4cc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE4D0u;
        goto label_1ce4d0;
    }
    ctx->pc = 0x1CE4C8u;
    SET_GPR_U32(ctx, 31, 0x1CE4D0u);
    ctx->pc = 0x1CE4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE4C8u;
            // 0x1ce4cc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4D0u; }
        if (ctx->pc != 0x1CE4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4D0u; }
        if (ctx->pc != 0x1CE4D0u) { return; }
    }
    ctx->pc = 0x1CE4D0u;
label_1ce4d0:
    // 0x1ce4d0: 0x10000077  b           . + 4 + (0x77 << 2)
label_1ce4d4:
    if (ctx->pc == 0x1CE4D4u) {
        ctx->pc = 0x1CE4D8u;
        goto label_1ce4d8;
    }
    ctx->pc = 0x1CE4D0u;
    {
        const bool branch_taken_0x1ce4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce4d0) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE4D8u;
label_1ce4d8:
    // 0x1ce4d8: 0xc065d00  jal         func_197400
label_1ce4dc:
    if (ctx->pc == 0x1CE4DCu) {
        ctx->pc = 0x1CE4E0u;
        goto label_1ce4e0;
    }
    ctx->pc = 0x1CE4D8u;
    SET_GPR_U32(ctx, 31, 0x1CE4E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4E0u; }
        if (ctx->pc != 0x1CE4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4E0u; }
        if (ctx->pc != 0x1CE4E0u) { return; }
    }
    ctx->pc = 0x1CE4E0u;
label_1ce4e0:
    // 0x1ce4e0: 0x18400073  blez        $v0, . + 4 + (0x73 << 2)
label_1ce4e4:
    if (ctx->pc == 0x1CE4E4u) {
        ctx->pc = 0x1CE4E8u;
        goto label_1ce4e8;
    }
    ctx->pc = 0x1CE4E0u;
    {
        const bool branch_taken_0x1ce4e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ce4e0) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE4E8u;
label_1ce4e8:
    // 0x1ce4e8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce4ec:
    // 0x1ce4ec: 0xc06560c  jal         func_195830
label_1ce4f0:
    if (ctx->pc == 0x1CE4F0u) {
        ctx->pc = 0x1CE4F0u;
            // 0x1ce4f0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE4F4u;
        goto label_1ce4f4;
    }
    ctx->pc = 0x1CE4ECu;
    SET_GPR_U32(ctx, 31, 0x1CE4F4u);
    ctx->pc = 0x1CE4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE4ECu;
            // 0x1ce4f0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4F4u; }
        if (ctx->pc != 0x1CE4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4F4u; }
        if (ctx->pc != 0x1CE4F4u) { return; }
    }
    ctx->pc = 0x1CE4F4u;
label_1ce4f4:
    // 0x1ce4f4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1ce4f8:
    if (ctx->pc == 0x1CE4F8u) {
        ctx->pc = 0x1CE4FCu;
        goto label_1ce4fc;
    }
    ctx->pc = 0x1CE4F4u;
    {
        const bool branch_taken_0x1ce4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce4f4) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE4FCu;
label_1ce4fc:
    // 0x1ce4fc: 0x0  nop
    ctx->pc = 0x1ce4fcu;
    // NOP
label_1ce500:
    // 0x1ce500: 0xc065d00  jal         func_197400
label_1ce504:
    if (ctx->pc == 0x1CE504u) {
        ctx->pc = 0x1CE508u;
        goto label_1ce508;
    }
    ctx->pc = 0x1CE500u;
    SET_GPR_U32(ctx, 31, 0x1CE508u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE508u; }
        if (ctx->pc != 0x1CE508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE508u; }
        if (ctx->pc != 0x1CE508u) { return; }
    }
    ctx->pc = 0x1CE508u;
label_1ce508:
    // 0x1ce508: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ce50c:
    // 0x1ce50c: 0x14430068  bne         $v0, $v1, . + 4 + (0x68 << 2)
label_1ce510:
    if (ctx->pc == 0x1CE510u) {
        ctx->pc = 0x1CE514u;
        goto label_1ce514;
    }
    ctx->pc = 0x1CE50Cu;
    {
        const bool branch_taken_0x1ce50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ce50c) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE514u;
label_1ce514:
    // 0x1ce514: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce518:
    // 0x1ce518: 0xc06560c  jal         func_195830
label_1ce51c:
    if (ctx->pc == 0x1CE51Cu) {
        ctx->pc = 0x1CE51Cu;
            // 0x1ce51c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE520u;
        goto label_1ce520;
    }
    ctx->pc = 0x1CE518u;
    SET_GPR_U32(ctx, 31, 0x1CE520u);
    ctx->pc = 0x1CE51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE518u;
            // 0x1ce51c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE520u; }
        if (ctx->pc != 0x1CE520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE520u; }
        if (ctx->pc != 0x1CE520u) { return; }
    }
    ctx->pc = 0x1CE520u;
label_1ce520:
    // 0x1ce520: 0x10000063  b           . + 4 + (0x63 << 2)
label_1ce524:
    if (ctx->pc == 0x1CE524u) {
        ctx->pc = 0x1CE528u;
        goto label_1ce528;
    }
    ctx->pc = 0x1CE520u;
    {
        const bool branch_taken_0x1ce520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce520) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE528u;
label_1ce528:
    // 0x1ce528: 0x3c033c03  lui         $v1, 0x3C03
    ctx->pc = 0x1ce528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
label_1ce52c:
    // 0x1ce52c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ce52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ce530:
    // 0x1ce530: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1ce530u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_1ce534:
    // 0x1ce534: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ce534u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce538:
    // 0x1ce538: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x1ce538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
label_1ce53c:
    // 0x1ce53c: 0x34439ba6  ori         $v1, $v0, 0x9BA6
    ctx->pc = 0x1ce53cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_1ce540:
    // 0x1ce540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce544:
    // 0x1ce544: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1ce544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1ce548:
    // 0x1ce548: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1ce548u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1ce54c:
    // 0x1ce54c: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ce54cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1ce550:
    // 0x1ce550: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ce550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce554:
    // 0x1ce554: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ce554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ce558:
    // 0x1ce558: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ce558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1ce55c:
    // 0x1ce55c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ce55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ce560:
    // 0x1ce560: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1ce564:
    if (ctx->pc == 0x1CE564u) {
        ctx->pc = 0x1CE564u;
            // 0x1ce564: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1CE568u;
        goto label_1ce568;
    }
    ctx->pc = 0x1CE560u;
    {
        const bool branch_taken_0x1ce560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE560u;
            // 0x1ce564: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce560) {
            ctx->pc = 0x1CE5C8u;
            goto label_1ce5c8;
        }
    }
    ctx->pc = 0x1CE568u;
label_1ce568:
    // 0x1ce568: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1ce56c:
    if (ctx->pc == 0x1CE56Cu) {
        ctx->pc = 0x1CE570u;
        goto label_1ce570;
    }
    ctx->pc = 0x1CE568u;
    {
        const bool branch_taken_0x1ce568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce568) {
            ctx->pc = 0x1CE5A0u;
            goto label_1ce5a0;
        }
    }
    ctx->pc = 0x1CE570u;
label_1ce570:
    // 0x1ce570: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1ce570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ce574:
    // 0x1ce574: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1ce578:
    if (ctx->pc == 0x1CE578u) {
        ctx->pc = 0x1CE57Cu;
        goto label_1ce57c;
    }
    ctx->pc = 0x1CE574u;
    {
        const bool branch_taken_0x1ce574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce574) {
            ctx->pc = 0x1CE588u;
            goto label_1ce588;
        }
    }
    ctx->pc = 0x1CE57Cu;
label_1ce57c:
    // 0x1ce57c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1ce580:
    if (ctx->pc == 0x1CE580u) {
        ctx->pc = 0x1CE584u;
        goto label_1ce584;
    }
    ctx->pc = 0x1CE57Cu;
    {
        const bool branch_taken_0x1ce57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce57c) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE584u;
label_1ce584:
    // 0x1ce584: 0x0  nop
    ctx->pc = 0x1ce584u;
    // NOP
label_1ce588:
    // 0x1ce588: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce58c:
    // 0x1ce58c: 0xc06560c  jal         func_195830
label_1ce590:
    if (ctx->pc == 0x1CE590u) {
        ctx->pc = 0x1CE590u;
            // 0x1ce590: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE594u;
        goto label_1ce594;
    }
    ctx->pc = 0x1CE58Cu;
    SET_GPR_U32(ctx, 31, 0x1CE594u);
    ctx->pc = 0x1CE590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE58Cu;
            // 0x1ce590: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE594u; }
        if (ctx->pc != 0x1CE594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE594u; }
        if (ctx->pc != 0x1CE594u) { return; }
    }
    ctx->pc = 0x1CE594u;
label_1ce594:
    // 0x1ce594: 0x10000046  b           . + 4 + (0x46 << 2)
label_1ce598:
    if (ctx->pc == 0x1CE598u) {
        ctx->pc = 0x1CE59Cu;
        goto label_1ce59c;
    }
    ctx->pc = 0x1CE594u;
    {
        const bool branch_taken_0x1ce594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce594) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE59Cu;
label_1ce59c:
    // 0x1ce59c: 0x0  nop
    ctx->pc = 0x1ce59cu;
    // NOP
label_1ce5a0:
    // 0x1ce5a0: 0xc065d00  jal         func_197400
label_1ce5a4:
    if (ctx->pc == 0x1CE5A4u) {
        ctx->pc = 0x1CE5A8u;
        goto label_1ce5a8;
    }
    ctx->pc = 0x1CE5A0u;
    SET_GPR_U32(ctx, 31, 0x1CE5A8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5A8u; }
        if (ctx->pc != 0x1CE5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5A8u; }
        if (ctx->pc != 0x1CE5A8u) { return; }
    }
    ctx->pc = 0x1CE5A8u;
label_1ce5a8:
    // 0x1ce5a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ce5ac:
    // 0x1ce5ac: 0x14430040  bne         $v0, $v1, . + 4 + (0x40 << 2)
label_1ce5b0:
    if (ctx->pc == 0x1CE5B0u) {
        ctx->pc = 0x1CE5B4u;
        goto label_1ce5b4;
    }
    ctx->pc = 0x1CE5ACu;
    {
        const bool branch_taken_0x1ce5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ce5ac) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE5B4u;
label_1ce5b4:
    // 0x1ce5b4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce5b8:
    // 0x1ce5b8: 0xc06560c  jal         func_195830
label_1ce5bc:
    if (ctx->pc == 0x1CE5BCu) {
        ctx->pc = 0x1CE5BCu;
            // 0x1ce5bc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE5C0u;
        goto label_1ce5c0;
    }
    ctx->pc = 0x1CE5B8u;
    SET_GPR_U32(ctx, 31, 0x1CE5C0u);
    ctx->pc = 0x1CE5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE5B8u;
            // 0x1ce5bc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5C0u; }
        if (ctx->pc != 0x1CE5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5C0u; }
        if (ctx->pc != 0x1CE5C0u) { return; }
    }
    ctx->pc = 0x1CE5C0u;
label_1ce5c0:
    // 0x1ce5c0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1ce5c4:
    if (ctx->pc == 0x1CE5C4u) {
        ctx->pc = 0x1CE5C8u;
        goto label_1ce5c8;
    }
    ctx->pc = 0x1CE5C0u;
    {
        const bool branch_taken_0x1ce5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce5c0) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE5C8u;
label_1ce5c8:
    // 0x1ce5c8: 0xc065d00  jal         func_197400
label_1ce5cc:
    if (ctx->pc == 0x1CE5CCu) {
        ctx->pc = 0x1CE5D0u;
        goto label_1ce5d0;
    }
    ctx->pc = 0x1CE5C8u;
    SET_GPR_U32(ctx, 31, 0x1CE5D0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5D0u; }
        if (ctx->pc != 0x1CE5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5D0u; }
        if (ctx->pc != 0x1CE5D0u) { return; }
    }
    ctx->pc = 0x1CE5D0u;
label_1ce5d0:
    // 0x1ce5d0: 0x18400037  blez        $v0, . + 4 + (0x37 << 2)
label_1ce5d4:
    if (ctx->pc == 0x1CE5D4u) {
        ctx->pc = 0x1CE5D8u;
        goto label_1ce5d8;
    }
    ctx->pc = 0x1CE5D0u;
    {
        const bool branch_taken_0x1ce5d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ce5d0) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE5D8u;
label_1ce5d8:
    // 0x1ce5d8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce5dc:
    // 0x1ce5dc: 0xc06560c  jal         func_195830
label_1ce5e0:
    if (ctx->pc == 0x1CE5E0u) {
        ctx->pc = 0x1CE5E0u;
            // 0x1ce5e0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE5E4u;
        goto label_1ce5e4;
    }
    ctx->pc = 0x1CE5DCu;
    SET_GPR_U32(ctx, 31, 0x1CE5E4u);
    ctx->pc = 0x1CE5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE5DCu;
            // 0x1ce5e0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5E4u; }
        if (ctx->pc != 0x1CE5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5E4u; }
        if (ctx->pc != 0x1CE5E4u) { return; }
    }
    ctx->pc = 0x1CE5E4u;
label_1ce5e4:
    // 0x1ce5e4: 0x10000032  b           . + 4 + (0x32 << 2)
label_1ce5e8:
    if (ctx->pc == 0x1CE5E8u) {
        ctx->pc = 0x1CE5ECu;
        goto label_1ce5ec;
    }
    ctx->pc = 0x1CE5E4u;
    {
        const bool branch_taken_0x1ce5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce5e4) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE5ECu;
label_1ce5ec:
    // 0x1ce5ec: 0x0  nop
    ctx->pc = 0x1ce5ecu;
    // NOP
label_1ce5f0:
    // 0x1ce5f0: 0x3c033c03  lui         $v1, 0x3C03
    ctx->pc = 0x1ce5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
label_1ce5f4:
    // 0x1ce5f4: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ce5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ce5f8:
    // 0x1ce5f8: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1ce5f8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_1ce5fc:
    // 0x1ce5fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ce5fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce600:
    // 0x1ce600: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x1ce600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
label_1ce604:
    // 0x1ce604: 0x34439ba6  ori         $v1, $v0, 0x9BA6
    ctx->pc = 0x1ce604u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_1ce608:
    // 0x1ce608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce60c:
    // 0x1ce60c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1ce60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1ce610:
    // 0x1ce610: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1ce610u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ce614:
    // 0x1ce614: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ce614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1ce618:
    // 0x1ce618: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ce618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce61c:
    // 0x1ce61c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ce61cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ce620:
    // 0x1ce620: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ce620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1ce624:
    // 0x1ce624: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ce624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ce628:
    // 0x1ce628: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1ce62c:
    if (ctx->pc == 0x1CE62Cu) {
        ctx->pc = 0x1CE62Cu;
            // 0x1ce62c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1CE630u;
        goto label_1ce630;
    }
    ctx->pc = 0x1CE628u;
    {
        const bool branch_taken_0x1ce628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE628u;
            // 0x1ce62c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce628) {
            ctx->pc = 0x1CE690u;
            goto label_1ce690;
        }
    }
    ctx->pc = 0x1CE630u;
label_1ce630:
    // 0x1ce630: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1ce634:
    if (ctx->pc == 0x1CE634u) {
        ctx->pc = 0x1CE638u;
        goto label_1ce638;
    }
    ctx->pc = 0x1CE630u;
    {
        const bool branch_taken_0x1ce630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce630) {
            ctx->pc = 0x1CE668u;
            goto label_1ce668;
        }
    }
    ctx->pc = 0x1CE638u;
label_1ce638:
    // 0x1ce638: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1ce638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ce63c:
    // 0x1ce63c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1ce640:
    if (ctx->pc == 0x1CE640u) {
        ctx->pc = 0x1CE644u;
        goto label_1ce644;
    }
    ctx->pc = 0x1CE63Cu;
    {
        const bool branch_taken_0x1ce63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce63c) {
            ctx->pc = 0x1CE650u;
            goto label_1ce650;
        }
    }
    ctx->pc = 0x1CE644u;
label_1ce644:
    // 0x1ce644: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1ce648:
    if (ctx->pc == 0x1CE648u) {
        ctx->pc = 0x1CE64Cu;
        goto label_1ce64c;
    }
    ctx->pc = 0x1CE644u;
    {
        const bool branch_taken_0x1ce644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce644) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE64Cu;
label_1ce64c:
    // 0x1ce64c: 0x0  nop
    ctx->pc = 0x1ce64cu;
    // NOP
label_1ce650:
    // 0x1ce650: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce654:
    // 0x1ce654: 0xc06560c  jal         func_195830
label_1ce658:
    if (ctx->pc == 0x1CE658u) {
        ctx->pc = 0x1CE658u;
            // 0x1ce658: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE65Cu;
        goto label_1ce65c;
    }
    ctx->pc = 0x1CE654u;
    SET_GPR_U32(ctx, 31, 0x1CE65Cu);
    ctx->pc = 0x1CE658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE654u;
            // 0x1ce658: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE65Cu; }
        if (ctx->pc != 0x1CE65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE65Cu; }
        if (ctx->pc != 0x1CE65Cu) { return; }
    }
    ctx->pc = 0x1CE65Cu;
label_1ce65c:
    // 0x1ce65c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1ce660:
    if (ctx->pc == 0x1CE660u) {
        ctx->pc = 0x1CE664u;
        goto label_1ce664;
    }
    ctx->pc = 0x1CE65Cu;
    {
        const bool branch_taken_0x1ce65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce65c) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE664u;
label_1ce664:
    // 0x1ce664: 0x0  nop
    ctx->pc = 0x1ce664u;
    // NOP
label_1ce668:
    // 0x1ce668: 0xc065d00  jal         func_197400
label_1ce66c:
    if (ctx->pc == 0x1CE66Cu) {
        ctx->pc = 0x1CE670u;
        goto label_1ce670;
    }
    ctx->pc = 0x1CE668u;
    SET_GPR_U32(ctx, 31, 0x1CE670u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE670u; }
        if (ctx->pc != 0x1CE670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE670u; }
        if (ctx->pc != 0x1CE670u) { return; }
    }
    ctx->pc = 0x1CE670u;
label_1ce670:
    // 0x1ce670: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ce674:
    // 0x1ce674: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_1ce678:
    if (ctx->pc == 0x1CE678u) {
        ctx->pc = 0x1CE67Cu;
        goto label_1ce67c;
    }
    ctx->pc = 0x1CE674u;
    {
        const bool branch_taken_0x1ce674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ce674) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE67Cu;
label_1ce67c:
    // 0x1ce67c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce680:
    // 0x1ce680: 0xc06560c  jal         func_195830
label_1ce684:
    if (ctx->pc == 0x1CE684u) {
        ctx->pc = 0x1CE684u;
            // 0x1ce684: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE688u;
        goto label_1ce688;
    }
    ctx->pc = 0x1CE680u;
    SET_GPR_U32(ctx, 31, 0x1CE688u);
    ctx->pc = 0x1CE684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE680u;
            // 0x1ce684: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE688u; }
        if (ctx->pc != 0x1CE688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE688u; }
        if (ctx->pc != 0x1CE688u) { return; }
    }
    ctx->pc = 0x1CE688u;
label_1ce688:
    // 0x1ce688: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ce68c:
    if (ctx->pc == 0x1CE68Cu) {
        ctx->pc = 0x1CE690u;
        goto label_1ce690;
    }
    ctx->pc = 0x1CE688u;
    {
        const bool branch_taken_0x1ce688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce688) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE690u;
label_1ce690:
    // 0x1ce690: 0xc065d00  jal         func_197400
label_1ce694:
    if (ctx->pc == 0x1CE694u) {
        ctx->pc = 0x1CE698u;
        goto label_1ce698;
    }
    ctx->pc = 0x1CE690u;
    SET_GPR_U32(ctx, 31, 0x1CE698u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE698u; }
        if (ctx->pc != 0x1CE698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE698u; }
        if (ctx->pc != 0x1CE698u) { return; }
    }
    ctx->pc = 0x1CE698u;
label_1ce698:
    // 0x1ce698: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_1ce69c:
    if (ctx->pc == 0x1CE69Cu) {
        ctx->pc = 0x1CE6A0u;
        goto label_1ce6a0;
    }
    ctx->pc = 0x1CE698u;
    {
        const bool branch_taken_0x1ce698 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ce698) {
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE6A0u;
label_1ce6a0:
    // 0x1ce6a0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ce6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce6a4:
    // 0x1ce6a4: 0xc06560c  jal         func_195830
label_1ce6a8:
    if (ctx->pc == 0x1CE6A8u) {
        ctx->pc = 0x1CE6A8u;
            // 0x1ce6a8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1CE6ACu;
        goto label_1ce6ac;
    }
    ctx->pc = 0x1CE6A4u;
    SET_GPR_U32(ctx, 31, 0x1CE6ACu);
    ctx->pc = 0x1CE6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6A4u;
            // 0x1ce6a8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6ACu; }
        if (ctx->pc != 0x1CE6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6ACu; }
        if (ctx->pc != 0x1CE6ACu) { return; }
    }
    ctx->pc = 0x1CE6ACu;
label_1ce6ac:
    // 0x1ce6ac: 0x0  nop
    ctx->pc = 0x1ce6acu;
    // NOP
label_1ce6b0:
    // 0x1ce6b0: 0xc04b788  jal         func_12DE20
label_1ce6b4:
    if (ctx->pc == 0x1CE6B4u) {
        ctx->pc = 0x1CE6B4u;
            // 0x1ce6b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CE6B8u;
        goto label_1ce6b8;
    }
    ctx->pc = 0x1CE6B0u;
    SET_GPR_U32(ctx, 31, 0x1CE6B8u);
    ctx->pc = 0x1CE6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6B0u;
            // 0x1ce6b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6B8u; }
        if (ctx->pc != 0x1CE6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6B8u; }
        if (ctx->pc != 0x1CE6B8u) { return; }
    }
    ctx->pc = 0x1CE6B8u;
label_1ce6b8:
    // 0x1ce6b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ce6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce6bc:
    // 0x1ce6bc: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1ce6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ce6c0:
    // 0x1ce6c0: 0xc04b7da  jal         func_12DF68
label_1ce6c4:
    if (ctx->pc == 0x1CE6C4u) {
        ctx->pc = 0x1CE6C4u;
            // 0x1ce6c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CE6C8u;
        goto label_1ce6c8;
    }
    ctx->pc = 0x1CE6C0u;
    SET_GPR_U32(ctx, 31, 0x1CE6C8u);
    ctx->pc = 0x1CE6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6C0u;
            // 0x1ce6c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6C8u; }
        if (ctx->pc != 0x1CE6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6C8u; }
        if (ctx->pc != 0x1CE6C8u) { return; }
    }
    ctx->pc = 0x1CE6C8u;
label_1ce6c8:
    // 0x1ce6c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ce6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce6cc:
    // 0x1ce6cc: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1ce6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ce6d0:
    // 0x1ce6d0: 0xc04b804  jal         func_12E010
label_1ce6d4:
    if (ctx->pc == 0x1CE6D4u) {
        ctx->pc = 0x1CE6D4u;
            // 0x1ce6d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CE6D8u;
        goto label_1ce6d8;
    }
    ctx->pc = 0x1CE6D0u;
    SET_GPR_U32(ctx, 31, 0x1CE6D8u);
    ctx->pc = 0x1CE6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6D0u;
            // 0x1ce6d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6D8u; }
        if (ctx->pc != 0x1CE6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6D8u; }
        if (ctx->pc != 0x1CE6D8u) { return; }
    }
    ctx->pc = 0x1CE6D8u;
label_1ce6d8:
    // 0x1ce6d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ce6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce6dc:
    // 0x1ce6dc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1ce6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ce6e0:
    // 0x1ce6e0: 0xc04b7b0  jal         func_12DEC0
label_1ce6e4:
    if (ctx->pc == 0x1CE6E4u) {
        ctx->pc = 0x1CE6E4u;
            // 0x1ce6e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CE6E8u;
        goto label_1ce6e8;
    }
    ctx->pc = 0x1CE6E0u;
    SET_GPR_U32(ctx, 31, 0x1CE6E8u);
    ctx->pc = 0x1CE6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6E0u;
            // 0x1ce6e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6E8u; }
        if (ctx->pc != 0x1CE6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6E8u; }
        if (ctx->pc != 0x1CE6E8u) { return; }
    }
    ctx->pc = 0x1CE6E8u;
label_1ce6e8:
    // 0x1ce6e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ce6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce6ec:
    // 0x1ce6ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ce6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ce6f0:
    // 0x1ce6f0: 0xc04b75e  jal         func_12DD78
label_1ce6f4:
    if (ctx->pc == 0x1CE6F4u) {
        ctx->pc = 0x1CE6F4u;
            // 0x1ce6f4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1CE6F8u;
        goto label_1ce6f8;
    }
    ctx->pc = 0x1CE6F0u;
    SET_GPR_U32(ctx, 31, 0x1CE6F8u);
    ctx->pc = 0x1CE6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6F0u;
            // 0x1ce6f4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6F8u; }
        if (ctx->pc != 0x1CE6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6F8u; }
        if (ctx->pc != 0x1CE6F8u) { return; }
    }
    ctx->pc = 0x1CE6F8u;
label_1ce6f8:
    // 0x1ce6f8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ce6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ce6fc:
    // 0x1ce6fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ce6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ce700:
    // 0x1ce700: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ce700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ce704:
    // 0x1ce704: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1ce708:
    if (ctx->pc == 0x1CE708u) {
        ctx->pc = 0x1CE70Cu;
        goto label_1ce70c;
    }
    ctx->pc = 0x1CE704u;
    {
        const bool branch_taken_0x1ce704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce704) {
            ctx->pc = 0x1CE758u;
            goto label_1ce758;
        }
    }
    ctx->pc = 0x1CE70Cu;
label_1ce70c:
    // 0x1ce70c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1ce70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1ce710:
    // 0x1ce710: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ce714:
    if (ctx->pc == 0x1CE714u) {
        ctx->pc = 0x1CE718u;
        goto label_1ce718;
    }
    ctx->pc = 0x1CE710u;
    {
        const bool branch_taken_0x1ce710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce710) {
            ctx->pc = 0x1CE728u;
            goto label_1ce728;
        }
    }
    ctx->pc = 0x1CE718u;
label_1ce718:
    // 0x1ce718: 0xc0604f0  jal         func_1813C0
label_1ce71c:
    if (ctx->pc == 0x1CE71Cu) {
        ctx->pc = 0x1CE71Cu;
            // 0x1ce71c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CE720u;
        goto label_1ce720;
    }
    ctx->pc = 0x1CE718u;
    SET_GPR_U32(ctx, 31, 0x1CE720u);
    ctx->pc = 0x1CE71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE718u;
            // 0x1ce71c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE720u; }
        if (ctx->pc != 0x1CE720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE720u; }
        if (ctx->pc != 0x1CE720u) { return; }
    }
    ctx->pc = 0x1CE720u;
label_1ce720:
    // 0x1ce720: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ce724:
    if (ctx->pc == 0x1CE724u) {
        ctx->pc = 0x1CE728u;
        goto label_1ce728;
    }
    ctx->pc = 0x1CE720u;
    {
        const bool branch_taken_0x1ce720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce720) {
            ctx->pc = 0x1CE730u;
            goto label_1ce730;
        }
    }
    ctx->pc = 0x1CE728u;
label_1ce728:
    // 0x1ce728: 0xc0604dc  jal         func_181370
label_1ce72c:
    if (ctx->pc == 0x1CE72Cu) {
        ctx->pc = 0x1CE72Cu;
            // 0x1ce72c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CE730u;
        goto label_1ce730;
    }
    ctx->pc = 0x1CE728u;
    SET_GPR_U32(ctx, 31, 0x1CE730u);
    ctx->pc = 0x1CE72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE728u;
            // 0x1ce72c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE730u; }
        if (ctx->pc != 0x1CE730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE730u; }
        if (ctx->pc != 0x1CE730u) { return; }
    }
    ctx->pc = 0x1CE730u;
label_1ce730:
    // 0x1ce730: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1ce730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1ce734:
    // 0x1ce734: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ce738:
    if (ctx->pc == 0x1CE738u) {
        ctx->pc = 0x1CE73Cu;
        goto label_1ce73c;
    }
    ctx->pc = 0x1CE734u;
    {
        const bool branch_taken_0x1ce734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce734) {
            ctx->pc = 0x1CE748u;
            goto label_1ce748;
        }
    }
    ctx->pc = 0x1CE73Cu;
label_1ce73c:
    // 0x1ce73c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ce740:
    if (ctx->pc == 0x1CE740u) {
        ctx->pc = 0x1CE740u;
            // 0x1ce740: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1CE744u;
        goto label_1ce744;
    }
    ctx->pc = 0x1CE73Cu;
    {
        const bool branch_taken_0x1ce73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE73Cu;
            // 0x1ce740: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce73c) {
            ctx->pc = 0x1CE768u;
            goto label_1ce768;
        }
    }
    ctx->pc = 0x1CE744u;
label_1ce744:
    // 0x1ce744: 0x0  nop
    ctx->pc = 0x1ce744u;
    // NOP
label_1ce748:
    // 0x1ce748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ce74c:
    // 0x1ce74c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ce750:
    if (ctx->pc == 0x1CE750u) {
        ctx->pc = 0x1CE750u;
            // 0x1ce750: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1CE754u;
        goto label_1ce754;
    }
    ctx->pc = 0x1CE74Cu;
    {
        const bool branch_taken_0x1ce74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE74Cu;
            // 0x1ce750: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce74c) {
            ctx->pc = 0x1CE768u;
            goto label_1ce768;
        }
    }
    ctx->pc = 0x1CE754u;
label_1ce754:
    // 0x1ce754: 0x0  nop
    ctx->pc = 0x1ce754u;
    // NOP
label_1ce758:
    // 0x1ce758: 0xc0604dc  jal         func_181370
label_1ce75c:
    if (ctx->pc == 0x1CE75Cu) {
        ctx->pc = 0x1CE75Cu;
            // 0x1ce75c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CE760u;
        goto label_1ce760;
    }
    ctx->pc = 0x1CE758u;
    SET_GPR_U32(ctx, 31, 0x1CE760u);
    ctx->pc = 0x1CE75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE758u;
            // 0x1ce75c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE760u; }
        if (ctx->pc != 0x1CE760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE760u; }
        if (ctx->pc != 0x1CE760u) { return; }
    }
    ctx->pc = 0x1CE760u;
label_1ce760:
    // 0x1ce760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ce764:
    // 0x1ce764: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1ce764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1ce768:
    // 0x1ce768: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ce768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ce76c:
    // 0x1ce76c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1ce76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1ce770:
    // 0x1ce770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce774:
    // 0x1ce774: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1ce774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1ce778:
    // 0x1ce778: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ce778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1ce77c:
    // 0x1ce77c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1ce77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1ce780:
    // 0x1ce780: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce784:
    // 0x1ce784: 0x0  nop
    ctx->pc = 0x1ce784u;
    // NOP
label_1ce788:
    // 0x1ce788: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ce788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ce78c:
    // 0x1ce78c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1ce78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1ce790:
    // 0x1ce790: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ce790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce794:
    // 0x1ce794: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1ce794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1ce798:
    // 0x1ce798: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce79c:
    // 0x1ce79c: 0x0  nop
    ctx->pc = 0x1ce79cu;
    // NOP
label_1ce7a0:
    // 0x1ce7a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ce7a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ce7a4:
    // 0x1ce7a4: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1ce7a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1ce7a8:
    // 0x1ce7a8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ce7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1ce7ac:
    // 0x1ce7ac: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1ce7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1ce7b0:
    // 0x1ce7b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce7b4:
    // 0x1ce7b4: 0x0  nop
    ctx->pc = 0x1ce7b4u;
    // NOP
label_1ce7b8:
    // 0x1ce7b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ce7b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ce7bc:
    // 0x1ce7bc: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1ce7bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1ce7c0:
    // 0x1ce7c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ce7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce7c4:
    // 0x1ce7c4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1ce7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1ce7c8:
    // 0x1ce7c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce7cc:
    // 0x1ce7cc: 0x0  nop
    ctx->pc = 0x1ce7ccu;
    // NOP
label_1ce7d0:
    // 0x1ce7d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ce7d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ce7d4:
    // 0x1ce7d4: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1ce7d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1ce7d8:
    // 0x1ce7d8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ce7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ce7dc:
    // 0x1ce7dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ce7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ce7e0:
    // 0x1ce7e0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ce7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1ce7e4:
    // 0x1ce7e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ce7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce7e8:
    // 0x1ce7e8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1ce7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ce7ec:
    // 0x1ce7ec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1ce7ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce7f0:
    // 0x1ce7f0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1ce7f4:
    if (ctx->pc == 0x1CE7F4u) {
        ctx->pc = 0x1CE7F4u;
            // 0x1ce7f4: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1CE7F8u;
        goto label_1ce7f8;
    }
    ctx->pc = 0x1CE7F0u;
    {
        const bool branch_taken_0x1ce7f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7F0u;
            // 0x1ce7f4: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7f0) {
            ctx->pc = 0x1CE838u;
            goto label_1ce838;
        }
    }
    ctx->pc = 0x1CE7F8u;
label_1ce7f8:
    // 0x1ce7f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce7fc:
    // 0x1ce7fc: 0x0  nop
    ctx->pc = 0x1ce7fcu;
    // NOP
label_1ce800:
    // 0x1ce800: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1ce800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce804:
    // 0x1ce804: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_1ce808:
    if (ctx->pc == 0x1CE808u) {
        ctx->pc = 0x1CE80Cu;
        goto label_1ce80c;
    }
    ctx->pc = 0x1CE804u;
    {
        const bool branch_taken_0x1ce804 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce804) {
            ctx->pc = 0x1CE838u;
            goto label_1ce838;
        }
    }
    ctx->pc = 0x1CE80Cu;
label_1ce80c:
    // 0x1ce80c: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x1ce80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ce810:
    // 0x1ce810: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1ce810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1ce814:
    // 0x1ce814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce818:
    // 0x1ce818: 0x0  nop
    ctx->pc = 0x1ce818u;
    // NOP
label_1ce81c:
    // 0x1ce81c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1ce81cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce820:
    // 0x1ce820: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1ce824:
    if (ctx->pc == 0x1CE824u) {
        ctx->pc = 0x1CE828u;
        goto label_1ce828;
    }
    ctx->pc = 0x1CE820u;
    {
        const bool branch_taken_0x1ce820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce820) {
            ctx->pc = 0x1CE838u;
            goto label_1ce838;
        }
    }
    ctx->pc = 0x1CE828u;
label_1ce828:
    // 0x1ce828: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1ce828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce82c:
    // 0x1ce82c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1ce830:
    if (ctx->pc == 0x1CE830u) {
        ctx->pc = 0x1CE834u;
        goto label_1ce834;
    }
    ctx->pc = 0x1CE82Cu;
    {
        const bool branch_taken_0x1ce82c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce82c) {
            ctx->pc = 0x1CE850u;
            goto label_1ce850;
        }
    }
    ctx->pc = 0x1CE834u;
label_1ce834:
    // 0x1ce834: 0x0  nop
    ctx->pc = 0x1ce834u;
    // NOP
label_1ce838:
    // 0x1ce838: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1ce838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1ce83c:
    // 0x1ce83c: 0x40f809  jalr        $v0
label_1ce840:
    if (ctx->pc == 0x1CE840u) {
        ctx->pc = 0x1CE840u;
            // 0x1ce840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CE844u;
        goto label_1ce844;
    }
    ctx->pc = 0x1CE83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE844u);
        ctx->pc = 0x1CE840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE83Cu;
            // 0x1ce840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDF30u: goto label_1cdf30;
            case 0x1CDF34u: goto label_1cdf34;
            case 0x1CDF38u: goto label_1cdf38;
            case 0x1CDF3Cu: goto label_1cdf3c;
            case 0x1CDF40u: goto label_1cdf40;
            case 0x1CDF44u: goto label_1cdf44;
            case 0x1CDF48u: goto label_1cdf48;
            case 0x1CDF4Cu: goto label_1cdf4c;
            case 0x1CDF50u: goto label_1cdf50;
            case 0x1CDF54u: goto label_1cdf54;
            case 0x1CDF58u: goto label_1cdf58;
            case 0x1CDF5Cu: goto label_1cdf5c;
            case 0x1CDF60u: goto label_1cdf60;
            case 0x1CDF64u: goto label_1cdf64;
            case 0x1CDF68u: goto label_1cdf68;
            case 0x1CDF6Cu: goto label_1cdf6c;
            case 0x1CDF70u: goto label_1cdf70;
            case 0x1CDF74u: goto label_1cdf74;
            case 0x1CDF78u: goto label_1cdf78;
            case 0x1CDF7Cu: goto label_1cdf7c;
            case 0x1CDF80u: goto label_1cdf80;
            case 0x1CDF84u: goto label_1cdf84;
            case 0x1CDF88u: goto label_1cdf88;
            case 0x1CDF8Cu: goto label_1cdf8c;
            case 0x1CDF90u: goto label_1cdf90;
            case 0x1CDF94u: goto label_1cdf94;
            case 0x1CDF98u: goto label_1cdf98;
            case 0x1CDF9Cu: goto label_1cdf9c;
            case 0x1CDFA0u: goto label_1cdfa0;
            case 0x1CDFA4u: goto label_1cdfa4;
            case 0x1CDFA8u: goto label_1cdfa8;
            case 0x1CDFACu: goto label_1cdfac;
            case 0x1CDFB0u: goto label_1cdfb0;
            case 0x1CDFB4u: goto label_1cdfb4;
            case 0x1CDFB8u: goto label_1cdfb8;
            case 0x1CDFBCu: goto label_1cdfbc;
            case 0x1CDFC0u: goto label_1cdfc0;
            case 0x1CDFC4u: goto label_1cdfc4;
            case 0x1CDFC8u: goto label_1cdfc8;
            case 0x1CDFCCu: goto label_1cdfcc;
            case 0x1CDFD0u: goto label_1cdfd0;
            case 0x1CDFD4u: goto label_1cdfd4;
            case 0x1CDFD8u: goto label_1cdfd8;
            case 0x1CDFDCu: goto label_1cdfdc;
            case 0x1CDFE0u: goto label_1cdfe0;
            case 0x1CDFE4u: goto label_1cdfe4;
            case 0x1CDFE8u: goto label_1cdfe8;
            case 0x1CDFECu: goto label_1cdfec;
            case 0x1CDFF0u: goto label_1cdff0;
            case 0x1CDFF4u: goto label_1cdff4;
            case 0x1CDFF8u: goto label_1cdff8;
            case 0x1CDFFCu: goto label_1cdffc;
            case 0x1CE000u: goto label_1ce000;
            case 0x1CE004u: goto label_1ce004;
            case 0x1CE008u: goto label_1ce008;
            case 0x1CE00Cu: goto label_1ce00c;
            case 0x1CE010u: goto label_1ce010;
            case 0x1CE014u: goto label_1ce014;
            case 0x1CE018u: goto label_1ce018;
            case 0x1CE01Cu: goto label_1ce01c;
            case 0x1CE020u: goto label_1ce020;
            case 0x1CE024u: goto label_1ce024;
            case 0x1CE028u: goto label_1ce028;
            case 0x1CE02Cu: goto label_1ce02c;
            case 0x1CE030u: goto label_1ce030;
            case 0x1CE034u: goto label_1ce034;
            case 0x1CE038u: goto label_1ce038;
            case 0x1CE03Cu: goto label_1ce03c;
            case 0x1CE040u: goto label_1ce040;
            case 0x1CE044u: goto label_1ce044;
            case 0x1CE048u: goto label_1ce048;
            case 0x1CE04Cu: goto label_1ce04c;
            case 0x1CE050u: goto label_1ce050;
            case 0x1CE054u: goto label_1ce054;
            case 0x1CE058u: goto label_1ce058;
            case 0x1CE05Cu: goto label_1ce05c;
            case 0x1CE060u: goto label_1ce060;
            case 0x1CE064u: goto label_1ce064;
            case 0x1CE068u: goto label_1ce068;
            case 0x1CE06Cu: goto label_1ce06c;
            case 0x1CE070u: goto label_1ce070;
            case 0x1CE074u: goto label_1ce074;
            case 0x1CE078u: goto label_1ce078;
            case 0x1CE07Cu: goto label_1ce07c;
            case 0x1CE080u: goto label_1ce080;
            case 0x1CE084u: goto label_1ce084;
            case 0x1CE088u: goto label_1ce088;
            case 0x1CE08Cu: goto label_1ce08c;
            case 0x1CE090u: goto label_1ce090;
            case 0x1CE094u: goto label_1ce094;
            case 0x1CE098u: goto label_1ce098;
            case 0x1CE09Cu: goto label_1ce09c;
            case 0x1CE0A0u: goto label_1ce0a0;
            case 0x1CE0A4u: goto label_1ce0a4;
            case 0x1CE0A8u: goto label_1ce0a8;
            case 0x1CE0ACu: goto label_1ce0ac;
            case 0x1CE0B0u: goto label_1ce0b0;
            case 0x1CE0B4u: goto label_1ce0b4;
            case 0x1CE0B8u: goto label_1ce0b8;
            case 0x1CE0BCu: goto label_1ce0bc;
            case 0x1CE0C0u: goto label_1ce0c0;
            case 0x1CE0C4u: goto label_1ce0c4;
            case 0x1CE0C8u: goto label_1ce0c8;
            case 0x1CE0CCu: goto label_1ce0cc;
            case 0x1CE0D0u: goto label_1ce0d0;
            case 0x1CE0D4u: goto label_1ce0d4;
            case 0x1CE0D8u: goto label_1ce0d8;
            case 0x1CE0DCu: goto label_1ce0dc;
            case 0x1CE0E0u: goto label_1ce0e0;
            case 0x1CE0E4u: goto label_1ce0e4;
            case 0x1CE0E8u: goto label_1ce0e8;
            case 0x1CE0ECu: goto label_1ce0ec;
            case 0x1CE0F0u: goto label_1ce0f0;
            case 0x1CE0F4u: goto label_1ce0f4;
            case 0x1CE0F8u: goto label_1ce0f8;
            case 0x1CE0FCu: goto label_1ce0fc;
            case 0x1CE100u: goto label_1ce100;
            case 0x1CE104u: goto label_1ce104;
            case 0x1CE108u: goto label_1ce108;
            case 0x1CE10Cu: goto label_1ce10c;
            case 0x1CE110u: goto label_1ce110;
            case 0x1CE114u: goto label_1ce114;
            case 0x1CE118u: goto label_1ce118;
            case 0x1CE11Cu: goto label_1ce11c;
            case 0x1CE120u: goto label_1ce120;
            case 0x1CE124u: goto label_1ce124;
            case 0x1CE128u: goto label_1ce128;
            case 0x1CE12Cu: goto label_1ce12c;
            case 0x1CE130u: goto label_1ce130;
            case 0x1CE134u: goto label_1ce134;
            case 0x1CE138u: goto label_1ce138;
            case 0x1CE13Cu: goto label_1ce13c;
            case 0x1CE140u: goto label_1ce140;
            case 0x1CE144u: goto label_1ce144;
            case 0x1CE148u: goto label_1ce148;
            case 0x1CE14Cu: goto label_1ce14c;
            case 0x1CE150u: goto label_1ce150;
            case 0x1CE154u: goto label_1ce154;
            case 0x1CE158u: goto label_1ce158;
            case 0x1CE15Cu: goto label_1ce15c;
            case 0x1CE160u: goto label_1ce160;
            case 0x1CE164u: goto label_1ce164;
            case 0x1CE168u: goto label_1ce168;
            case 0x1CE16Cu: goto label_1ce16c;
            case 0x1CE170u: goto label_1ce170;
            case 0x1CE174u: goto label_1ce174;
            case 0x1CE178u: goto label_1ce178;
            case 0x1CE17Cu: goto label_1ce17c;
            case 0x1CE180u: goto label_1ce180;
            case 0x1CE184u: goto label_1ce184;
            case 0x1CE188u: goto label_1ce188;
            case 0x1CE18Cu: goto label_1ce18c;
            case 0x1CE190u: goto label_1ce190;
            case 0x1CE194u: goto label_1ce194;
            case 0x1CE198u: goto label_1ce198;
            case 0x1CE19Cu: goto label_1ce19c;
            case 0x1CE1A0u: goto label_1ce1a0;
            case 0x1CE1A4u: goto label_1ce1a4;
            case 0x1CE1A8u: goto label_1ce1a8;
            case 0x1CE1ACu: goto label_1ce1ac;
            case 0x1CE1B0u: goto label_1ce1b0;
            case 0x1CE1B4u: goto label_1ce1b4;
            case 0x1CE1B8u: goto label_1ce1b8;
            case 0x1CE1BCu: goto label_1ce1bc;
            case 0x1CE1C0u: goto label_1ce1c0;
            case 0x1CE1C4u: goto label_1ce1c4;
            case 0x1CE1C8u: goto label_1ce1c8;
            case 0x1CE1CCu: goto label_1ce1cc;
            case 0x1CE1D0u: goto label_1ce1d0;
            case 0x1CE1D4u: goto label_1ce1d4;
            case 0x1CE1D8u: goto label_1ce1d8;
            case 0x1CE1DCu: goto label_1ce1dc;
            case 0x1CE1E0u: goto label_1ce1e0;
            case 0x1CE1E4u: goto label_1ce1e4;
            case 0x1CE1E8u: goto label_1ce1e8;
            case 0x1CE1ECu: goto label_1ce1ec;
            case 0x1CE1F0u: goto label_1ce1f0;
            case 0x1CE1F4u: goto label_1ce1f4;
            case 0x1CE1F8u: goto label_1ce1f8;
            case 0x1CE1FCu: goto label_1ce1fc;
            case 0x1CE200u: goto label_1ce200;
            case 0x1CE204u: goto label_1ce204;
            case 0x1CE208u: goto label_1ce208;
            case 0x1CE20Cu: goto label_1ce20c;
            case 0x1CE210u: goto label_1ce210;
            case 0x1CE214u: goto label_1ce214;
            case 0x1CE218u: goto label_1ce218;
            case 0x1CE21Cu: goto label_1ce21c;
            case 0x1CE220u: goto label_1ce220;
            case 0x1CE224u: goto label_1ce224;
            case 0x1CE228u: goto label_1ce228;
            case 0x1CE22Cu: goto label_1ce22c;
            case 0x1CE230u: goto label_1ce230;
            case 0x1CE234u: goto label_1ce234;
            case 0x1CE238u: goto label_1ce238;
            case 0x1CE23Cu: goto label_1ce23c;
            case 0x1CE240u: goto label_1ce240;
            case 0x1CE244u: goto label_1ce244;
            case 0x1CE248u: goto label_1ce248;
            case 0x1CE24Cu: goto label_1ce24c;
            case 0x1CE250u: goto label_1ce250;
            case 0x1CE254u: goto label_1ce254;
            case 0x1CE258u: goto label_1ce258;
            case 0x1CE25Cu: goto label_1ce25c;
            case 0x1CE260u: goto label_1ce260;
            case 0x1CE264u: goto label_1ce264;
            case 0x1CE268u: goto label_1ce268;
            case 0x1CE26Cu: goto label_1ce26c;
            case 0x1CE270u: goto label_1ce270;
            case 0x1CE274u: goto label_1ce274;
            case 0x1CE278u: goto label_1ce278;
            case 0x1CE27Cu: goto label_1ce27c;
            case 0x1CE280u: goto label_1ce280;
            case 0x1CE284u: goto label_1ce284;
            case 0x1CE288u: goto label_1ce288;
            case 0x1CE28Cu: goto label_1ce28c;
            case 0x1CE290u: goto label_1ce290;
            case 0x1CE294u: goto label_1ce294;
            case 0x1CE298u: goto label_1ce298;
            case 0x1CE29Cu: goto label_1ce29c;
            case 0x1CE2A0u: goto label_1ce2a0;
            case 0x1CE2A4u: goto label_1ce2a4;
            case 0x1CE2A8u: goto label_1ce2a8;
            case 0x1CE2ACu: goto label_1ce2ac;
            case 0x1CE2B0u: goto label_1ce2b0;
            case 0x1CE2B4u: goto label_1ce2b4;
            case 0x1CE2B8u: goto label_1ce2b8;
            case 0x1CE2BCu: goto label_1ce2bc;
            case 0x1CE2C0u: goto label_1ce2c0;
            case 0x1CE2C4u: goto label_1ce2c4;
            case 0x1CE2C8u: goto label_1ce2c8;
            case 0x1CE2CCu: goto label_1ce2cc;
            case 0x1CE2D0u: goto label_1ce2d0;
            case 0x1CE2D4u: goto label_1ce2d4;
            case 0x1CE2D8u: goto label_1ce2d8;
            case 0x1CE2DCu: goto label_1ce2dc;
            case 0x1CE2E0u: goto label_1ce2e0;
            case 0x1CE2E4u: goto label_1ce2e4;
            case 0x1CE2E8u: goto label_1ce2e8;
            case 0x1CE2ECu: goto label_1ce2ec;
            case 0x1CE2F0u: goto label_1ce2f0;
            case 0x1CE2F4u: goto label_1ce2f4;
            case 0x1CE2F8u: goto label_1ce2f8;
            case 0x1CE2FCu: goto label_1ce2fc;
            case 0x1CE300u: goto label_1ce300;
            case 0x1CE304u: goto label_1ce304;
            case 0x1CE308u: goto label_1ce308;
            case 0x1CE30Cu: goto label_1ce30c;
            case 0x1CE310u: goto label_1ce310;
            case 0x1CE314u: goto label_1ce314;
            case 0x1CE318u: goto label_1ce318;
            case 0x1CE31Cu: goto label_1ce31c;
            case 0x1CE320u: goto label_1ce320;
            case 0x1CE324u: goto label_1ce324;
            case 0x1CE328u: goto label_1ce328;
            case 0x1CE32Cu: goto label_1ce32c;
            case 0x1CE330u: goto label_1ce330;
            case 0x1CE334u: goto label_1ce334;
            case 0x1CE338u: goto label_1ce338;
            case 0x1CE33Cu: goto label_1ce33c;
            case 0x1CE340u: goto label_1ce340;
            case 0x1CE344u: goto label_1ce344;
            case 0x1CE348u: goto label_1ce348;
            case 0x1CE34Cu: goto label_1ce34c;
            case 0x1CE350u: goto label_1ce350;
            case 0x1CE354u: goto label_1ce354;
            case 0x1CE358u: goto label_1ce358;
            case 0x1CE35Cu: goto label_1ce35c;
            case 0x1CE360u: goto label_1ce360;
            case 0x1CE364u: goto label_1ce364;
            case 0x1CE368u: goto label_1ce368;
            case 0x1CE36Cu: goto label_1ce36c;
            case 0x1CE370u: goto label_1ce370;
            case 0x1CE374u: goto label_1ce374;
            case 0x1CE378u: goto label_1ce378;
            case 0x1CE37Cu: goto label_1ce37c;
            case 0x1CE380u: goto label_1ce380;
            case 0x1CE384u: goto label_1ce384;
            case 0x1CE388u: goto label_1ce388;
            case 0x1CE38Cu: goto label_1ce38c;
            case 0x1CE390u: goto label_1ce390;
            case 0x1CE394u: goto label_1ce394;
            case 0x1CE398u: goto label_1ce398;
            case 0x1CE39Cu: goto label_1ce39c;
            case 0x1CE3A0u: goto label_1ce3a0;
            case 0x1CE3A4u: goto label_1ce3a4;
            case 0x1CE3A8u: goto label_1ce3a8;
            case 0x1CE3ACu: goto label_1ce3ac;
            case 0x1CE3B0u: goto label_1ce3b0;
            case 0x1CE3B4u: goto label_1ce3b4;
            case 0x1CE3B8u: goto label_1ce3b8;
            case 0x1CE3BCu: goto label_1ce3bc;
            case 0x1CE3C0u: goto label_1ce3c0;
            case 0x1CE3C4u: goto label_1ce3c4;
            case 0x1CE3C8u: goto label_1ce3c8;
            case 0x1CE3CCu: goto label_1ce3cc;
            case 0x1CE3D0u: goto label_1ce3d0;
            case 0x1CE3D4u: goto label_1ce3d4;
            case 0x1CE3D8u: goto label_1ce3d8;
            case 0x1CE3DCu: goto label_1ce3dc;
            case 0x1CE3E0u: goto label_1ce3e0;
            case 0x1CE3E4u: goto label_1ce3e4;
            case 0x1CE3E8u: goto label_1ce3e8;
            case 0x1CE3ECu: goto label_1ce3ec;
            case 0x1CE3F0u: goto label_1ce3f0;
            case 0x1CE3F4u: goto label_1ce3f4;
            case 0x1CE3F8u: goto label_1ce3f8;
            case 0x1CE3FCu: goto label_1ce3fc;
            case 0x1CE400u: goto label_1ce400;
            case 0x1CE404u: goto label_1ce404;
            case 0x1CE408u: goto label_1ce408;
            case 0x1CE40Cu: goto label_1ce40c;
            case 0x1CE410u: goto label_1ce410;
            case 0x1CE414u: goto label_1ce414;
            case 0x1CE418u: goto label_1ce418;
            case 0x1CE41Cu: goto label_1ce41c;
            case 0x1CE420u: goto label_1ce420;
            case 0x1CE424u: goto label_1ce424;
            case 0x1CE428u: goto label_1ce428;
            case 0x1CE42Cu: goto label_1ce42c;
            case 0x1CE430u: goto label_1ce430;
            case 0x1CE434u: goto label_1ce434;
            case 0x1CE438u: goto label_1ce438;
            case 0x1CE43Cu: goto label_1ce43c;
            case 0x1CE440u: goto label_1ce440;
            case 0x1CE444u: goto label_1ce444;
            case 0x1CE448u: goto label_1ce448;
            case 0x1CE44Cu: goto label_1ce44c;
            case 0x1CE450u: goto label_1ce450;
            case 0x1CE454u: goto label_1ce454;
            case 0x1CE458u: goto label_1ce458;
            case 0x1CE45Cu: goto label_1ce45c;
            case 0x1CE460u: goto label_1ce460;
            case 0x1CE464u: goto label_1ce464;
            case 0x1CE468u: goto label_1ce468;
            case 0x1CE46Cu: goto label_1ce46c;
            case 0x1CE470u: goto label_1ce470;
            case 0x1CE474u: goto label_1ce474;
            case 0x1CE478u: goto label_1ce478;
            case 0x1CE47Cu: goto label_1ce47c;
            case 0x1CE480u: goto label_1ce480;
            case 0x1CE484u: goto label_1ce484;
            case 0x1CE488u: goto label_1ce488;
            case 0x1CE48Cu: goto label_1ce48c;
            case 0x1CE490u: goto label_1ce490;
            case 0x1CE494u: goto label_1ce494;
            case 0x1CE498u: goto label_1ce498;
            case 0x1CE49Cu: goto label_1ce49c;
            case 0x1CE4A0u: goto label_1ce4a0;
            case 0x1CE4A4u: goto label_1ce4a4;
            case 0x1CE4A8u: goto label_1ce4a8;
            case 0x1CE4ACu: goto label_1ce4ac;
            case 0x1CE4B0u: goto label_1ce4b0;
            case 0x1CE4B4u: goto label_1ce4b4;
            case 0x1CE4B8u: goto label_1ce4b8;
            case 0x1CE4BCu: goto label_1ce4bc;
            case 0x1CE4C0u: goto label_1ce4c0;
            case 0x1CE4C4u: goto label_1ce4c4;
            case 0x1CE4C8u: goto label_1ce4c8;
            case 0x1CE4CCu: goto label_1ce4cc;
            case 0x1CE4D0u: goto label_1ce4d0;
            case 0x1CE4D4u: goto label_1ce4d4;
            case 0x1CE4D8u: goto label_1ce4d8;
            case 0x1CE4DCu: goto label_1ce4dc;
            case 0x1CE4E0u: goto label_1ce4e0;
            case 0x1CE4E4u: goto label_1ce4e4;
            case 0x1CE4E8u: goto label_1ce4e8;
            case 0x1CE4ECu: goto label_1ce4ec;
            case 0x1CE4F0u: goto label_1ce4f0;
            case 0x1CE4F4u: goto label_1ce4f4;
            case 0x1CE4F8u: goto label_1ce4f8;
            case 0x1CE4FCu: goto label_1ce4fc;
            case 0x1CE500u: goto label_1ce500;
            case 0x1CE504u: goto label_1ce504;
            case 0x1CE508u: goto label_1ce508;
            case 0x1CE50Cu: goto label_1ce50c;
            case 0x1CE510u: goto label_1ce510;
            case 0x1CE514u: goto label_1ce514;
            case 0x1CE518u: goto label_1ce518;
            case 0x1CE51Cu: goto label_1ce51c;
            case 0x1CE520u: goto label_1ce520;
            case 0x1CE524u: goto label_1ce524;
            case 0x1CE528u: goto label_1ce528;
            case 0x1CE52Cu: goto label_1ce52c;
            case 0x1CE530u: goto label_1ce530;
            case 0x1CE534u: goto label_1ce534;
            case 0x1CE538u: goto label_1ce538;
            case 0x1CE53Cu: goto label_1ce53c;
            case 0x1CE540u: goto label_1ce540;
            case 0x1CE544u: goto label_1ce544;
            case 0x1CE548u: goto label_1ce548;
            case 0x1CE54Cu: goto label_1ce54c;
            case 0x1CE550u: goto label_1ce550;
            case 0x1CE554u: goto label_1ce554;
            case 0x1CE558u: goto label_1ce558;
            case 0x1CE55Cu: goto label_1ce55c;
            case 0x1CE560u: goto label_1ce560;
            case 0x1CE564u: goto label_1ce564;
            case 0x1CE568u: goto label_1ce568;
            case 0x1CE56Cu: goto label_1ce56c;
            case 0x1CE570u: goto label_1ce570;
            case 0x1CE574u: goto label_1ce574;
            case 0x1CE578u: goto label_1ce578;
            case 0x1CE57Cu: goto label_1ce57c;
            case 0x1CE580u: goto label_1ce580;
            case 0x1CE584u: goto label_1ce584;
            case 0x1CE588u: goto label_1ce588;
            case 0x1CE58Cu: goto label_1ce58c;
            case 0x1CE590u: goto label_1ce590;
            case 0x1CE594u: goto label_1ce594;
            case 0x1CE598u: goto label_1ce598;
            case 0x1CE59Cu: goto label_1ce59c;
            case 0x1CE5A0u: goto label_1ce5a0;
            case 0x1CE5A4u: goto label_1ce5a4;
            case 0x1CE5A8u: goto label_1ce5a8;
            case 0x1CE5ACu: goto label_1ce5ac;
            case 0x1CE5B0u: goto label_1ce5b0;
            case 0x1CE5B4u: goto label_1ce5b4;
            case 0x1CE5B8u: goto label_1ce5b8;
            case 0x1CE5BCu: goto label_1ce5bc;
            case 0x1CE5C0u: goto label_1ce5c0;
            case 0x1CE5C4u: goto label_1ce5c4;
            case 0x1CE5C8u: goto label_1ce5c8;
            case 0x1CE5CCu: goto label_1ce5cc;
            case 0x1CE5D0u: goto label_1ce5d0;
            case 0x1CE5D4u: goto label_1ce5d4;
            case 0x1CE5D8u: goto label_1ce5d8;
            case 0x1CE5DCu: goto label_1ce5dc;
            case 0x1CE5E0u: goto label_1ce5e0;
            case 0x1CE5E4u: goto label_1ce5e4;
            case 0x1CE5E8u: goto label_1ce5e8;
            case 0x1CE5ECu: goto label_1ce5ec;
            case 0x1CE5F0u: goto label_1ce5f0;
            case 0x1CE5F4u: goto label_1ce5f4;
            case 0x1CE5F8u: goto label_1ce5f8;
            case 0x1CE5FCu: goto label_1ce5fc;
            case 0x1CE600u: goto label_1ce600;
            case 0x1CE604u: goto label_1ce604;
            case 0x1CE608u: goto label_1ce608;
            case 0x1CE60Cu: goto label_1ce60c;
            case 0x1CE610u: goto label_1ce610;
            case 0x1CE614u: goto label_1ce614;
            case 0x1CE618u: goto label_1ce618;
            case 0x1CE61Cu: goto label_1ce61c;
            case 0x1CE620u: goto label_1ce620;
            case 0x1CE624u: goto label_1ce624;
            case 0x1CE628u: goto label_1ce628;
            case 0x1CE62Cu: goto label_1ce62c;
            case 0x1CE630u: goto label_1ce630;
            case 0x1CE634u: goto label_1ce634;
            case 0x1CE638u: goto label_1ce638;
            case 0x1CE63Cu: goto label_1ce63c;
            case 0x1CE640u: goto label_1ce640;
            case 0x1CE644u: goto label_1ce644;
            case 0x1CE648u: goto label_1ce648;
            case 0x1CE64Cu: goto label_1ce64c;
            case 0x1CE650u: goto label_1ce650;
            case 0x1CE654u: goto label_1ce654;
            case 0x1CE658u: goto label_1ce658;
            case 0x1CE65Cu: goto label_1ce65c;
            case 0x1CE660u: goto label_1ce660;
            case 0x1CE664u: goto label_1ce664;
            case 0x1CE668u: goto label_1ce668;
            case 0x1CE66Cu: goto label_1ce66c;
            case 0x1CE670u: goto label_1ce670;
            case 0x1CE674u: goto label_1ce674;
            case 0x1CE678u: goto label_1ce678;
            case 0x1CE67Cu: goto label_1ce67c;
            case 0x1CE680u: goto label_1ce680;
            case 0x1CE684u: goto label_1ce684;
            case 0x1CE688u: goto label_1ce688;
            case 0x1CE68Cu: goto label_1ce68c;
            case 0x1CE690u: goto label_1ce690;
            case 0x1CE694u: goto label_1ce694;
            case 0x1CE698u: goto label_1ce698;
            case 0x1CE69Cu: goto label_1ce69c;
            case 0x1CE6A0u: goto label_1ce6a0;
            case 0x1CE6A4u: goto label_1ce6a4;
            case 0x1CE6A8u: goto label_1ce6a8;
            case 0x1CE6ACu: goto label_1ce6ac;
            case 0x1CE6B0u: goto label_1ce6b0;
            case 0x1CE6B4u: goto label_1ce6b4;
            case 0x1CE6B8u: goto label_1ce6b8;
            case 0x1CE6BCu: goto label_1ce6bc;
            case 0x1CE6C0u: goto label_1ce6c0;
            case 0x1CE6C4u: goto label_1ce6c4;
            case 0x1CE6C8u: goto label_1ce6c8;
            case 0x1CE6CCu: goto label_1ce6cc;
            case 0x1CE6D0u: goto label_1ce6d0;
            case 0x1CE6D4u: goto label_1ce6d4;
            case 0x1CE6D8u: goto label_1ce6d8;
            case 0x1CE6DCu: goto label_1ce6dc;
            case 0x1CE6E0u: goto label_1ce6e0;
            case 0x1CE6E4u: goto label_1ce6e4;
            case 0x1CE6E8u: goto label_1ce6e8;
            case 0x1CE6ECu: goto label_1ce6ec;
            case 0x1CE6F0u: goto label_1ce6f0;
            case 0x1CE6F4u: goto label_1ce6f4;
            case 0x1CE6F8u: goto label_1ce6f8;
            case 0x1CE6FCu: goto label_1ce6fc;
            case 0x1CE700u: goto label_1ce700;
            case 0x1CE704u: goto label_1ce704;
            case 0x1CE708u: goto label_1ce708;
            case 0x1CE70Cu: goto label_1ce70c;
            case 0x1CE710u: goto label_1ce710;
            case 0x1CE714u: goto label_1ce714;
            case 0x1CE718u: goto label_1ce718;
            case 0x1CE71Cu: goto label_1ce71c;
            case 0x1CE720u: goto label_1ce720;
            case 0x1CE724u: goto label_1ce724;
            case 0x1CE728u: goto label_1ce728;
            case 0x1CE72Cu: goto label_1ce72c;
            case 0x1CE730u: goto label_1ce730;
            case 0x1CE734u: goto label_1ce734;
            case 0x1CE738u: goto label_1ce738;
            case 0x1CE73Cu: goto label_1ce73c;
            case 0x1CE740u: goto label_1ce740;
            case 0x1CE744u: goto label_1ce744;
            case 0x1CE748u: goto label_1ce748;
            case 0x1CE74Cu: goto label_1ce74c;
            case 0x1CE750u: goto label_1ce750;
            case 0x1CE754u: goto label_1ce754;
            case 0x1CE758u: goto label_1ce758;
            case 0x1CE75Cu: goto label_1ce75c;
            case 0x1CE760u: goto label_1ce760;
            case 0x1CE764u: goto label_1ce764;
            case 0x1CE768u: goto label_1ce768;
            case 0x1CE76Cu: goto label_1ce76c;
            case 0x1CE770u: goto label_1ce770;
            case 0x1CE774u: goto label_1ce774;
            case 0x1CE778u: goto label_1ce778;
            case 0x1CE77Cu: goto label_1ce77c;
            case 0x1CE780u: goto label_1ce780;
            case 0x1CE784u: goto label_1ce784;
            case 0x1CE788u: goto label_1ce788;
            case 0x1CE78Cu: goto label_1ce78c;
            case 0x1CE790u: goto label_1ce790;
            case 0x1CE794u: goto label_1ce794;
            case 0x1CE798u: goto label_1ce798;
            case 0x1CE79Cu: goto label_1ce79c;
            case 0x1CE7A0u: goto label_1ce7a0;
            case 0x1CE7A4u: goto label_1ce7a4;
            case 0x1CE7A8u: goto label_1ce7a8;
            case 0x1CE7ACu: goto label_1ce7ac;
            case 0x1CE7B0u: goto label_1ce7b0;
            case 0x1CE7B4u: goto label_1ce7b4;
            case 0x1CE7B8u: goto label_1ce7b8;
            case 0x1CE7BCu: goto label_1ce7bc;
            case 0x1CE7C0u: goto label_1ce7c0;
            case 0x1CE7C4u: goto label_1ce7c4;
            case 0x1CE7C8u: goto label_1ce7c8;
            case 0x1CE7CCu: goto label_1ce7cc;
            case 0x1CE7D0u: goto label_1ce7d0;
            case 0x1CE7D4u: goto label_1ce7d4;
            case 0x1CE7D8u: goto label_1ce7d8;
            case 0x1CE7DCu: goto label_1ce7dc;
            case 0x1CE7E0u: goto label_1ce7e0;
            case 0x1CE7E4u: goto label_1ce7e4;
            case 0x1CE7E8u: goto label_1ce7e8;
            case 0x1CE7ECu: goto label_1ce7ec;
            case 0x1CE7F0u: goto label_1ce7f0;
            case 0x1CE7F4u: goto label_1ce7f4;
            case 0x1CE7F8u: goto label_1ce7f8;
            case 0x1CE7FCu: goto label_1ce7fc;
            case 0x1CE800u: goto label_1ce800;
            case 0x1CE804u: goto label_1ce804;
            case 0x1CE808u: goto label_1ce808;
            case 0x1CE80Cu: goto label_1ce80c;
            case 0x1CE810u: goto label_1ce810;
            case 0x1CE814u: goto label_1ce814;
            case 0x1CE818u: goto label_1ce818;
            case 0x1CE81Cu: goto label_1ce81c;
            case 0x1CE820u: goto label_1ce820;
            case 0x1CE824u: goto label_1ce824;
            case 0x1CE828u: goto label_1ce828;
            case 0x1CE82Cu: goto label_1ce82c;
            case 0x1CE830u: goto label_1ce830;
            case 0x1CE834u: goto label_1ce834;
            case 0x1CE838u: goto label_1ce838;
            case 0x1CE83Cu: goto label_1ce83c;
            case 0x1CE840u: goto label_1ce840;
            case 0x1CE844u: goto label_1ce844;
            case 0x1CE848u: goto label_1ce848;
            case 0x1CE84Cu: goto label_1ce84c;
            case 0x1CE850u: goto label_1ce850;
            case 0x1CE854u: goto label_1ce854;
            case 0x1CE858u: goto label_1ce858;
            case 0x1CE85Cu: goto label_1ce85c;
            case 0x1CE860u: goto label_1ce860;
            case 0x1CE864u: goto label_1ce864;
            case 0x1CE868u: goto label_1ce868;
            case 0x1CE86Cu: goto label_1ce86c;
            case 0x1CE870u: goto label_1ce870;
            case 0x1CE874u: goto label_1ce874;
            case 0x1CE878u: goto label_1ce878;
            case 0x1CE87Cu: goto label_1ce87c;
            case 0x1CE880u: goto label_1ce880;
            case 0x1CE884u: goto label_1ce884;
            case 0x1CE888u: goto label_1ce888;
            case 0x1CE88Cu: goto label_1ce88c;
            case 0x1CE890u: goto label_1ce890;
            case 0x1CE894u: goto label_1ce894;
            case 0x1CE898u: goto label_1ce898;
            case 0x1CE89Cu: goto label_1ce89c;
            case 0x1CE8A0u: goto label_1ce8a0;
            case 0x1CE8A4u: goto label_1ce8a4;
            case 0x1CE8A8u: goto label_1ce8a8;
            case 0x1CE8ACu: goto label_1ce8ac;
            case 0x1CE8B0u: goto label_1ce8b0;
            case 0x1CE8B4u: goto label_1ce8b4;
            case 0x1CE8B8u: goto label_1ce8b8;
            case 0x1CE8BCu: goto label_1ce8bc;
            case 0x1CE8C0u: goto label_1ce8c0;
            case 0x1CE8C4u: goto label_1ce8c4;
            case 0x1CE8C8u: goto label_1ce8c8;
            case 0x1CE8CCu: goto label_1ce8cc;
            case 0x1CE8D0u: goto label_1ce8d0;
            case 0x1CE8D4u: goto label_1ce8d4;
            case 0x1CE8D8u: goto label_1ce8d8;
            case 0x1CE8DCu: goto label_1ce8dc;
            case 0x1CE8E0u: goto label_1ce8e0;
            case 0x1CE8E4u: goto label_1ce8e4;
            case 0x1CE8E8u: goto label_1ce8e8;
            case 0x1CE8ECu: goto label_1ce8ec;
            case 0x1CE8F0u: goto label_1ce8f0;
            case 0x1CE8F4u: goto label_1ce8f4;
            case 0x1CE8F8u: goto label_1ce8f8;
            case 0x1CE8FCu: goto label_1ce8fc;
            case 0x1CE900u: goto label_1ce900;
            case 0x1CE904u: goto label_1ce904;
            case 0x1CE908u: goto label_1ce908;
            case 0x1CE90Cu: goto label_1ce90c;
            case 0x1CE910u: goto label_1ce910;
            case 0x1CE914u: goto label_1ce914;
            case 0x1CE918u: goto label_1ce918;
            case 0x1CE91Cu: goto label_1ce91c;
            case 0x1CE920u: goto label_1ce920;
            case 0x1CE924u: goto label_1ce924;
            case 0x1CE928u: goto label_1ce928;
            case 0x1CE92Cu: goto label_1ce92c;
            case 0x1CE930u: goto label_1ce930;
            case 0x1CE934u: goto label_1ce934;
            case 0x1CE938u: goto label_1ce938;
            case 0x1CE93Cu: goto label_1ce93c;
            case 0x1CE940u: goto label_1ce940;
            case 0x1CE944u: goto label_1ce944;
            case 0x1CE948u: goto label_1ce948;
            case 0x1CE94Cu: goto label_1ce94c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE844u; }
            if (ctx->pc != 0x1CE844u) { return; }
        }
    }
    ctx->pc = 0x1CE844u;
label_1ce844:
    // 0x1ce844: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1ce848:
    if (ctx->pc == 0x1CE848u) {
        ctx->pc = 0x1CE84Cu;
        goto label_1ce84c;
    }
    ctx->pc = 0x1CE844u;
    {
        const bool branch_taken_0x1ce844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce844) {
            ctx->pc = 0x1CE940u;
            goto label_1ce940;
        }
    }
    ctx->pc = 0x1CE84Cu;
label_1ce84c:
    // 0x1ce84c: 0x0  nop
    ctx->pc = 0x1ce84cu;
    // NOP
label_1ce850:
    // 0x1ce850: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ce850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ce854:
    // 0x1ce854: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1ce858:
    if (ctx->pc == 0x1CE858u) {
        ctx->pc = 0x1CE85Cu;
        goto label_1ce85c;
    }
    ctx->pc = 0x1CE854u;
    {
        const bool branch_taken_0x1ce854 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ce854) {
            ctx->pc = 0x1CE920u;
            goto label_1ce920;
        }
    }
    ctx->pc = 0x1CE85Cu;
label_1ce85c:
    // 0x1ce85c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ce85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce860:
    // 0x1ce860: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1ce860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1ce864:
    // 0x1ce864: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ce864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce868:
    // 0x1ce868: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ce868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ce86c:
    // 0x1ce86c: 0xc05d080  jal         func_174200
label_1ce870:
    if (ctx->pc == 0x1CE870u) {
        ctx->pc = 0x1CE870u;
            // 0x1ce870: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CE874u;
        goto label_1ce874;
    }
    ctx->pc = 0x1CE86Cu;
    SET_GPR_U32(ctx, 31, 0x1CE874u);
    ctx->pc = 0x1CE870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE86Cu;
            // 0x1ce870: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE874u; }
        if (ctx->pc != 0x1CE874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE874u; }
        if (ctx->pc != 0x1CE874u) { return; }
    }
    ctx->pc = 0x1CE874u;
label_1ce874:
    // 0x1ce874: 0xc050bb4  jal         func_142ED0
label_1ce878:
    if (ctx->pc == 0x1CE878u) {
        ctx->pc = 0x1CE87Cu;
        goto label_1ce87c;
    }
    ctx->pc = 0x1CE874u;
    SET_GPR_U32(ctx, 31, 0x1CE87Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE87Cu; }
        if (ctx->pc != 0x1CE87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE87Cu; }
        if (ctx->pc != 0x1CE87Cu) { return; }
    }
    ctx->pc = 0x1CE87Cu;
label_1ce87c:
    // 0x1ce87c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ce87cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1ce880:
    // 0x1ce880: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1ce884:
    if (ctx->pc == 0x1CE884u) {
        ctx->pc = 0x1CE888u;
        goto label_1ce888;
    }
    ctx->pc = 0x1CE880u;
    {
        const bool branch_taken_0x1ce880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce880) {
            ctx->pc = 0x1CE8A0u;
            goto label_1ce8a0;
        }
    }
    ctx->pc = 0x1CE888u;
label_1ce888:
    // 0x1ce888: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ce888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce88c:
    // 0x1ce88c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1ce88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1ce890:
    // 0x1ce890: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ce890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce894:
    // 0x1ce894: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ce894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ce898:
    // 0x1ce898: 0xc05d080  jal         func_174200
label_1ce89c:
    if (ctx->pc == 0x1CE89Cu) {
        ctx->pc = 0x1CE89Cu;
            // 0x1ce89c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CE8A0u;
        goto label_1ce8a0;
    }
    ctx->pc = 0x1CE898u;
    SET_GPR_U32(ctx, 31, 0x1CE8A0u);
    ctx->pc = 0x1CE89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE898u;
            // 0x1ce89c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8A0u; }
        if (ctx->pc != 0x1CE8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8A0u; }
        if (ctx->pc != 0x1CE8A0u) { return; }
    }
    ctx->pc = 0x1CE8A0u;
label_1ce8a0:
    // 0x1ce8a0: 0xc050bb4  jal         func_142ED0
label_1ce8a4:
    if (ctx->pc == 0x1CE8A4u) {
        ctx->pc = 0x1CE8A8u;
        goto label_1ce8a8;
    }
    ctx->pc = 0x1CE8A0u;
    SET_GPR_U32(ctx, 31, 0x1CE8A8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8A8u; }
        if (ctx->pc != 0x1CE8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8A8u; }
        if (ctx->pc != 0x1CE8A8u) { return; }
    }
    ctx->pc = 0x1CE8A8u;
label_1ce8a8:
    // 0x1ce8a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ce8a8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1ce8ac:
    // 0x1ce8ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ce8b0:
    if (ctx->pc == 0x1CE8B0u) {
        ctx->pc = 0x1CE8B4u;
        goto label_1ce8b4;
    }
    ctx->pc = 0x1CE8ACu;
    {
        const bool branch_taken_0x1ce8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce8ac) {
            ctx->pc = 0x1CE8D0u;
            goto label_1ce8d0;
        }
    }
    ctx->pc = 0x1CE8B4u;
label_1ce8b4:
    // 0x1ce8b4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ce8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce8b8:
    // 0x1ce8b8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1ce8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1ce8bc:
    // 0x1ce8bc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ce8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce8c0:
    // 0x1ce8c0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ce8c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ce8c4:
    // 0x1ce8c4: 0xc05d080  jal         func_174200
label_1ce8c8:
    if (ctx->pc == 0x1CE8C8u) {
        ctx->pc = 0x1CE8C8u;
            // 0x1ce8c8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CE8CCu;
        goto label_1ce8cc;
    }
    ctx->pc = 0x1CE8C4u;
    SET_GPR_U32(ctx, 31, 0x1CE8CCu);
    ctx->pc = 0x1CE8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8C4u;
            // 0x1ce8c8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8CCu; }
        if (ctx->pc != 0x1CE8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8CCu; }
        if (ctx->pc != 0x1CE8CCu) { return; }
    }
    ctx->pc = 0x1CE8CCu;
label_1ce8cc:
    // 0x1ce8cc: 0x0  nop
    ctx->pc = 0x1ce8ccu;
    // NOP
label_1ce8d0:
    // 0x1ce8d0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ce8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1ce8d4:
    // 0x1ce8d4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ce8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce8d8:
    // 0x1ce8d8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1ce8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ce8dc:
    // 0x1ce8dc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ce8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce8e0:
    // 0x1ce8e0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1ce8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ce8e4:
    // 0x1ce8e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ce8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ce8e8:
    // 0x1ce8e8: 0x0  nop
    ctx->pc = 0x1ce8e8u;
    // NOP
label_1ce8ec:
    // 0x1ce8ec: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1ce8ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1ce8f0:
    // 0x1ce8f0: 0xc053740  jal         func_14DD00
label_1ce8f4:
    if (ctx->pc == 0x1CE8F4u) {
        ctx->pc = 0x1CE8F4u;
            // 0x1ce8f4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1CE8F8u;
        goto label_1ce8f8;
    }
    ctx->pc = 0x1CE8F0u;
    SET_GPR_U32(ctx, 31, 0x1CE8F8u);
    ctx->pc = 0x1CE8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8F0u;
            // 0x1ce8f4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8F8u; }
        if (ctx->pc != 0x1CE8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8F8u; }
        if (ctx->pc != 0x1CE8F8u) { return; }
    }
    ctx->pc = 0x1CE8F8u;
label_1ce8f8:
    // 0x1ce8f8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1ce8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ce8fc:
    // 0x1ce8fc: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1ce8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ce900:
    // 0x1ce900: 0xc07b0fc  jal         func_1EC3F0
label_1ce904:
    if (ctx->pc == 0x1CE904u) {
        ctx->pc = 0x1CE904u;
            // 0x1ce904: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1CE908u;
        goto label_1ce908;
    }
    ctx->pc = 0x1CE900u;
    SET_GPR_U32(ctx, 31, 0x1CE908u);
    ctx->pc = 0x1CE904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE900u;
            // 0x1ce904: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE908u; }
        if (ctx->pc != 0x1CE908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE908u; }
        if (ctx->pc != 0x1CE908u) { return; }
    }
    ctx->pc = 0x1CE908u;
label_1ce908:
    // 0x1ce908: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1ce908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1ce90c:
    // 0x1ce90c: 0x40f809  jalr        $v0
label_1ce910:
    if (ctx->pc == 0x1CE910u) {
        ctx->pc = 0x1CE910u;
            // 0x1ce910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CE914u;
        goto label_1ce914;
    }
    ctx->pc = 0x1CE90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE914u);
        ctx->pc = 0x1CE910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE90Cu;
            // 0x1ce910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDF30u: goto label_1cdf30;
            case 0x1CDF34u: goto label_1cdf34;
            case 0x1CDF38u: goto label_1cdf38;
            case 0x1CDF3Cu: goto label_1cdf3c;
            case 0x1CDF40u: goto label_1cdf40;
            case 0x1CDF44u: goto label_1cdf44;
            case 0x1CDF48u: goto label_1cdf48;
            case 0x1CDF4Cu: goto label_1cdf4c;
            case 0x1CDF50u: goto label_1cdf50;
            case 0x1CDF54u: goto label_1cdf54;
            case 0x1CDF58u: goto label_1cdf58;
            case 0x1CDF5Cu: goto label_1cdf5c;
            case 0x1CDF60u: goto label_1cdf60;
            case 0x1CDF64u: goto label_1cdf64;
            case 0x1CDF68u: goto label_1cdf68;
            case 0x1CDF6Cu: goto label_1cdf6c;
            case 0x1CDF70u: goto label_1cdf70;
            case 0x1CDF74u: goto label_1cdf74;
            case 0x1CDF78u: goto label_1cdf78;
            case 0x1CDF7Cu: goto label_1cdf7c;
            case 0x1CDF80u: goto label_1cdf80;
            case 0x1CDF84u: goto label_1cdf84;
            case 0x1CDF88u: goto label_1cdf88;
            case 0x1CDF8Cu: goto label_1cdf8c;
            case 0x1CDF90u: goto label_1cdf90;
            case 0x1CDF94u: goto label_1cdf94;
            case 0x1CDF98u: goto label_1cdf98;
            case 0x1CDF9Cu: goto label_1cdf9c;
            case 0x1CDFA0u: goto label_1cdfa0;
            case 0x1CDFA4u: goto label_1cdfa4;
            case 0x1CDFA8u: goto label_1cdfa8;
            case 0x1CDFACu: goto label_1cdfac;
            case 0x1CDFB0u: goto label_1cdfb0;
            case 0x1CDFB4u: goto label_1cdfb4;
            case 0x1CDFB8u: goto label_1cdfb8;
            case 0x1CDFBCu: goto label_1cdfbc;
            case 0x1CDFC0u: goto label_1cdfc0;
            case 0x1CDFC4u: goto label_1cdfc4;
            case 0x1CDFC8u: goto label_1cdfc8;
            case 0x1CDFCCu: goto label_1cdfcc;
            case 0x1CDFD0u: goto label_1cdfd0;
            case 0x1CDFD4u: goto label_1cdfd4;
            case 0x1CDFD8u: goto label_1cdfd8;
            case 0x1CDFDCu: goto label_1cdfdc;
            case 0x1CDFE0u: goto label_1cdfe0;
            case 0x1CDFE4u: goto label_1cdfe4;
            case 0x1CDFE8u: goto label_1cdfe8;
            case 0x1CDFECu: goto label_1cdfec;
            case 0x1CDFF0u: goto label_1cdff0;
            case 0x1CDFF4u: goto label_1cdff4;
            case 0x1CDFF8u: goto label_1cdff8;
            case 0x1CDFFCu: goto label_1cdffc;
            case 0x1CE000u: goto label_1ce000;
            case 0x1CE004u: goto label_1ce004;
            case 0x1CE008u: goto label_1ce008;
            case 0x1CE00Cu: goto label_1ce00c;
            case 0x1CE010u: goto label_1ce010;
            case 0x1CE014u: goto label_1ce014;
            case 0x1CE018u: goto label_1ce018;
            case 0x1CE01Cu: goto label_1ce01c;
            case 0x1CE020u: goto label_1ce020;
            case 0x1CE024u: goto label_1ce024;
            case 0x1CE028u: goto label_1ce028;
            case 0x1CE02Cu: goto label_1ce02c;
            case 0x1CE030u: goto label_1ce030;
            case 0x1CE034u: goto label_1ce034;
            case 0x1CE038u: goto label_1ce038;
            case 0x1CE03Cu: goto label_1ce03c;
            case 0x1CE040u: goto label_1ce040;
            case 0x1CE044u: goto label_1ce044;
            case 0x1CE048u: goto label_1ce048;
            case 0x1CE04Cu: goto label_1ce04c;
            case 0x1CE050u: goto label_1ce050;
            case 0x1CE054u: goto label_1ce054;
            case 0x1CE058u: goto label_1ce058;
            case 0x1CE05Cu: goto label_1ce05c;
            case 0x1CE060u: goto label_1ce060;
            case 0x1CE064u: goto label_1ce064;
            case 0x1CE068u: goto label_1ce068;
            case 0x1CE06Cu: goto label_1ce06c;
            case 0x1CE070u: goto label_1ce070;
            case 0x1CE074u: goto label_1ce074;
            case 0x1CE078u: goto label_1ce078;
            case 0x1CE07Cu: goto label_1ce07c;
            case 0x1CE080u: goto label_1ce080;
            case 0x1CE084u: goto label_1ce084;
            case 0x1CE088u: goto label_1ce088;
            case 0x1CE08Cu: goto label_1ce08c;
            case 0x1CE090u: goto label_1ce090;
            case 0x1CE094u: goto label_1ce094;
            case 0x1CE098u: goto label_1ce098;
            case 0x1CE09Cu: goto label_1ce09c;
            case 0x1CE0A0u: goto label_1ce0a0;
            case 0x1CE0A4u: goto label_1ce0a4;
            case 0x1CE0A8u: goto label_1ce0a8;
            case 0x1CE0ACu: goto label_1ce0ac;
            case 0x1CE0B0u: goto label_1ce0b0;
            case 0x1CE0B4u: goto label_1ce0b4;
            case 0x1CE0B8u: goto label_1ce0b8;
            case 0x1CE0BCu: goto label_1ce0bc;
            case 0x1CE0C0u: goto label_1ce0c0;
            case 0x1CE0C4u: goto label_1ce0c4;
            case 0x1CE0C8u: goto label_1ce0c8;
            case 0x1CE0CCu: goto label_1ce0cc;
            case 0x1CE0D0u: goto label_1ce0d0;
            case 0x1CE0D4u: goto label_1ce0d4;
            case 0x1CE0D8u: goto label_1ce0d8;
            case 0x1CE0DCu: goto label_1ce0dc;
            case 0x1CE0E0u: goto label_1ce0e0;
            case 0x1CE0E4u: goto label_1ce0e4;
            case 0x1CE0E8u: goto label_1ce0e8;
            case 0x1CE0ECu: goto label_1ce0ec;
            case 0x1CE0F0u: goto label_1ce0f0;
            case 0x1CE0F4u: goto label_1ce0f4;
            case 0x1CE0F8u: goto label_1ce0f8;
            case 0x1CE0FCu: goto label_1ce0fc;
            case 0x1CE100u: goto label_1ce100;
            case 0x1CE104u: goto label_1ce104;
            case 0x1CE108u: goto label_1ce108;
            case 0x1CE10Cu: goto label_1ce10c;
            case 0x1CE110u: goto label_1ce110;
            case 0x1CE114u: goto label_1ce114;
            case 0x1CE118u: goto label_1ce118;
            case 0x1CE11Cu: goto label_1ce11c;
            case 0x1CE120u: goto label_1ce120;
            case 0x1CE124u: goto label_1ce124;
            case 0x1CE128u: goto label_1ce128;
            case 0x1CE12Cu: goto label_1ce12c;
            case 0x1CE130u: goto label_1ce130;
            case 0x1CE134u: goto label_1ce134;
            case 0x1CE138u: goto label_1ce138;
            case 0x1CE13Cu: goto label_1ce13c;
            case 0x1CE140u: goto label_1ce140;
            case 0x1CE144u: goto label_1ce144;
            case 0x1CE148u: goto label_1ce148;
            case 0x1CE14Cu: goto label_1ce14c;
            case 0x1CE150u: goto label_1ce150;
            case 0x1CE154u: goto label_1ce154;
            case 0x1CE158u: goto label_1ce158;
            case 0x1CE15Cu: goto label_1ce15c;
            case 0x1CE160u: goto label_1ce160;
            case 0x1CE164u: goto label_1ce164;
            case 0x1CE168u: goto label_1ce168;
            case 0x1CE16Cu: goto label_1ce16c;
            case 0x1CE170u: goto label_1ce170;
            case 0x1CE174u: goto label_1ce174;
            case 0x1CE178u: goto label_1ce178;
            case 0x1CE17Cu: goto label_1ce17c;
            case 0x1CE180u: goto label_1ce180;
            case 0x1CE184u: goto label_1ce184;
            case 0x1CE188u: goto label_1ce188;
            case 0x1CE18Cu: goto label_1ce18c;
            case 0x1CE190u: goto label_1ce190;
            case 0x1CE194u: goto label_1ce194;
            case 0x1CE198u: goto label_1ce198;
            case 0x1CE19Cu: goto label_1ce19c;
            case 0x1CE1A0u: goto label_1ce1a0;
            case 0x1CE1A4u: goto label_1ce1a4;
            case 0x1CE1A8u: goto label_1ce1a8;
            case 0x1CE1ACu: goto label_1ce1ac;
            case 0x1CE1B0u: goto label_1ce1b0;
            case 0x1CE1B4u: goto label_1ce1b4;
            case 0x1CE1B8u: goto label_1ce1b8;
            case 0x1CE1BCu: goto label_1ce1bc;
            case 0x1CE1C0u: goto label_1ce1c0;
            case 0x1CE1C4u: goto label_1ce1c4;
            case 0x1CE1C8u: goto label_1ce1c8;
            case 0x1CE1CCu: goto label_1ce1cc;
            case 0x1CE1D0u: goto label_1ce1d0;
            case 0x1CE1D4u: goto label_1ce1d4;
            case 0x1CE1D8u: goto label_1ce1d8;
            case 0x1CE1DCu: goto label_1ce1dc;
            case 0x1CE1E0u: goto label_1ce1e0;
            case 0x1CE1E4u: goto label_1ce1e4;
            case 0x1CE1E8u: goto label_1ce1e8;
            case 0x1CE1ECu: goto label_1ce1ec;
            case 0x1CE1F0u: goto label_1ce1f0;
            case 0x1CE1F4u: goto label_1ce1f4;
            case 0x1CE1F8u: goto label_1ce1f8;
            case 0x1CE1FCu: goto label_1ce1fc;
            case 0x1CE200u: goto label_1ce200;
            case 0x1CE204u: goto label_1ce204;
            case 0x1CE208u: goto label_1ce208;
            case 0x1CE20Cu: goto label_1ce20c;
            case 0x1CE210u: goto label_1ce210;
            case 0x1CE214u: goto label_1ce214;
            case 0x1CE218u: goto label_1ce218;
            case 0x1CE21Cu: goto label_1ce21c;
            case 0x1CE220u: goto label_1ce220;
            case 0x1CE224u: goto label_1ce224;
            case 0x1CE228u: goto label_1ce228;
            case 0x1CE22Cu: goto label_1ce22c;
            case 0x1CE230u: goto label_1ce230;
            case 0x1CE234u: goto label_1ce234;
            case 0x1CE238u: goto label_1ce238;
            case 0x1CE23Cu: goto label_1ce23c;
            case 0x1CE240u: goto label_1ce240;
            case 0x1CE244u: goto label_1ce244;
            case 0x1CE248u: goto label_1ce248;
            case 0x1CE24Cu: goto label_1ce24c;
            case 0x1CE250u: goto label_1ce250;
            case 0x1CE254u: goto label_1ce254;
            case 0x1CE258u: goto label_1ce258;
            case 0x1CE25Cu: goto label_1ce25c;
            case 0x1CE260u: goto label_1ce260;
            case 0x1CE264u: goto label_1ce264;
            case 0x1CE268u: goto label_1ce268;
            case 0x1CE26Cu: goto label_1ce26c;
            case 0x1CE270u: goto label_1ce270;
            case 0x1CE274u: goto label_1ce274;
            case 0x1CE278u: goto label_1ce278;
            case 0x1CE27Cu: goto label_1ce27c;
            case 0x1CE280u: goto label_1ce280;
            case 0x1CE284u: goto label_1ce284;
            case 0x1CE288u: goto label_1ce288;
            case 0x1CE28Cu: goto label_1ce28c;
            case 0x1CE290u: goto label_1ce290;
            case 0x1CE294u: goto label_1ce294;
            case 0x1CE298u: goto label_1ce298;
            case 0x1CE29Cu: goto label_1ce29c;
            case 0x1CE2A0u: goto label_1ce2a0;
            case 0x1CE2A4u: goto label_1ce2a4;
            case 0x1CE2A8u: goto label_1ce2a8;
            case 0x1CE2ACu: goto label_1ce2ac;
            case 0x1CE2B0u: goto label_1ce2b0;
            case 0x1CE2B4u: goto label_1ce2b4;
            case 0x1CE2B8u: goto label_1ce2b8;
            case 0x1CE2BCu: goto label_1ce2bc;
            case 0x1CE2C0u: goto label_1ce2c0;
            case 0x1CE2C4u: goto label_1ce2c4;
            case 0x1CE2C8u: goto label_1ce2c8;
            case 0x1CE2CCu: goto label_1ce2cc;
            case 0x1CE2D0u: goto label_1ce2d0;
            case 0x1CE2D4u: goto label_1ce2d4;
            case 0x1CE2D8u: goto label_1ce2d8;
            case 0x1CE2DCu: goto label_1ce2dc;
            case 0x1CE2E0u: goto label_1ce2e0;
            case 0x1CE2E4u: goto label_1ce2e4;
            case 0x1CE2E8u: goto label_1ce2e8;
            case 0x1CE2ECu: goto label_1ce2ec;
            case 0x1CE2F0u: goto label_1ce2f0;
            case 0x1CE2F4u: goto label_1ce2f4;
            case 0x1CE2F8u: goto label_1ce2f8;
            case 0x1CE2FCu: goto label_1ce2fc;
            case 0x1CE300u: goto label_1ce300;
            case 0x1CE304u: goto label_1ce304;
            case 0x1CE308u: goto label_1ce308;
            case 0x1CE30Cu: goto label_1ce30c;
            case 0x1CE310u: goto label_1ce310;
            case 0x1CE314u: goto label_1ce314;
            case 0x1CE318u: goto label_1ce318;
            case 0x1CE31Cu: goto label_1ce31c;
            case 0x1CE320u: goto label_1ce320;
            case 0x1CE324u: goto label_1ce324;
            case 0x1CE328u: goto label_1ce328;
            case 0x1CE32Cu: goto label_1ce32c;
            case 0x1CE330u: goto label_1ce330;
            case 0x1CE334u: goto label_1ce334;
            case 0x1CE338u: goto label_1ce338;
            case 0x1CE33Cu: goto label_1ce33c;
            case 0x1CE340u: goto label_1ce340;
            case 0x1CE344u: goto label_1ce344;
            case 0x1CE348u: goto label_1ce348;
            case 0x1CE34Cu: goto label_1ce34c;
            case 0x1CE350u: goto label_1ce350;
            case 0x1CE354u: goto label_1ce354;
            case 0x1CE358u: goto label_1ce358;
            case 0x1CE35Cu: goto label_1ce35c;
            case 0x1CE360u: goto label_1ce360;
            case 0x1CE364u: goto label_1ce364;
            case 0x1CE368u: goto label_1ce368;
            case 0x1CE36Cu: goto label_1ce36c;
            case 0x1CE370u: goto label_1ce370;
            case 0x1CE374u: goto label_1ce374;
            case 0x1CE378u: goto label_1ce378;
            case 0x1CE37Cu: goto label_1ce37c;
            case 0x1CE380u: goto label_1ce380;
            case 0x1CE384u: goto label_1ce384;
            case 0x1CE388u: goto label_1ce388;
            case 0x1CE38Cu: goto label_1ce38c;
            case 0x1CE390u: goto label_1ce390;
            case 0x1CE394u: goto label_1ce394;
            case 0x1CE398u: goto label_1ce398;
            case 0x1CE39Cu: goto label_1ce39c;
            case 0x1CE3A0u: goto label_1ce3a0;
            case 0x1CE3A4u: goto label_1ce3a4;
            case 0x1CE3A8u: goto label_1ce3a8;
            case 0x1CE3ACu: goto label_1ce3ac;
            case 0x1CE3B0u: goto label_1ce3b0;
            case 0x1CE3B4u: goto label_1ce3b4;
            case 0x1CE3B8u: goto label_1ce3b8;
            case 0x1CE3BCu: goto label_1ce3bc;
            case 0x1CE3C0u: goto label_1ce3c0;
            case 0x1CE3C4u: goto label_1ce3c4;
            case 0x1CE3C8u: goto label_1ce3c8;
            case 0x1CE3CCu: goto label_1ce3cc;
            case 0x1CE3D0u: goto label_1ce3d0;
            case 0x1CE3D4u: goto label_1ce3d4;
            case 0x1CE3D8u: goto label_1ce3d8;
            case 0x1CE3DCu: goto label_1ce3dc;
            case 0x1CE3E0u: goto label_1ce3e0;
            case 0x1CE3E4u: goto label_1ce3e4;
            case 0x1CE3E8u: goto label_1ce3e8;
            case 0x1CE3ECu: goto label_1ce3ec;
            case 0x1CE3F0u: goto label_1ce3f0;
            case 0x1CE3F4u: goto label_1ce3f4;
            case 0x1CE3F8u: goto label_1ce3f8;
            case 0x1CE3FCu: goto label_1ce3fc;
            case 0x1CE400u: goto label_1ce400;
            case 0x1CE404u: goto label_1ce404;
            case 0x1CE408u: goto label_1ce408;
            case 0x1CE40Cu: goto label_1ce40c;
            case 0x1CE410u: goto label_1ce410;
            case 0x1CE414u: goto label_1ce414;
            case 0x1CE418u: goto label_1ce418;
            case 0x1CE41Cu: goto label_1ce41c;
            case 0x1CE420u: goto label_1ce420;
            case 0x1CE424u: goto label_1ce424;
            case 0x1CE428u: goto label_1ce428;
            case 0x1CE42Cu: goto label_1ce42c;
            case 0x1CE430u: goto label_1ce430;
            case 0x1CE434u: goto label_1ce434;
            case 0x1CE438u: goto label_1ce438;
            case 0x1CE43Cu: goto label_1ce43c;
            case 0x1CE440u: goto label_1ce440;
            case 0x1CE444u: goto label_1ce444;
            case 0x1CE448u: goto label_1ce448;
            case 0x1CE44Cu: goto label_1ce44c;
            case 0x1CE450u: goto label_1ce450;
            case 0x1CE454u: goto label_1ce454;
            case 0x1CE458u: goto label_1ce458;
            case 0x1CE45Cu: goto label_1ce45c;
            case 0x1CE460u: goto label_1ce460;
            case 0x1CE464u: goto label_1ce464;
            case 0x1CE468u: goto label_1ce468;
            case 0x1CE46Cu: goto label_1ce46c;
            case 0x1CE470u: goto label_1ce470;
            case 0x1CE474u: goto label_1ce474;
            case 0x1CE478u: goto label_1ce478;
            case 0x1CE47Cu: goto label_1ce47c;
            case 0x1CE480u: goto label_1ce480;
            case 0x1CE484u: goto label_1ce484;
            case 0x1CE488u: goto label_1ce488;
            case 0x1CE48Cu: goto label_1ce48c;
            case 0x1CE490u: goto label_1ce490;
            case 0x1CE494u: goto label_1ce494;
            case 0x1CE498u: goto label_1ce498;
            case 0x1CE49Cu: goto label_1ce49c;
            case 0x1CE4A0u: goto label_1ce4a0;
            case 0x1CE4A4u: goto label_1ce4a4;
            case 0x1CE4A8u: goto label_1ce4a8;
            case 0x1CE4ACu: goto label_1ce4ac;
            case 0x1CE4B0u: goto label_1ce4b0;
            case 0x1CE4B4u: goto label_1ce4b4;
            case 0x1CE4B8u: goto label_1ce4b8;
            case 0x1CE4BCu: goto label_1ce4bc;
            case 0x1CE4C0u: goto label_1ce4c0;
            case 0x1CE4C4u: goto label_1ce4c4;
            case 0x1CE4C8u: goto label_1ce4c8;
            case 0x1CE4CCu: goto label_1ce4cc;
            case 0x1CE4D0u: goto label_1ce4d0;
            case 0x1CE4D4u: goto label_1ce4d4;
            case 0x1CE4D8u: goto label_1ce4d8;
            case 0x1CE4DCu: goto label_1ce4dc;
            case 0x1CE4E0u: goto label_1ce4e0;
            case 0x1CE4E4u: goto label_1ce4e4;
            case 0x1CE4E8u: goto label_1ce4e8;
            case 0x1CE4ECu: goto label_1ce4ec;
            case 0x1CE4F0u: goto label_1ce4f0;
            case 0x1CE4F4u: goto label_1ce4f4;
            case 0x1CE4F8u: goto label_1ce4f8;
            case 0x1CE4FCu: goto label_1ce4fc;
            case 0x1CE500u: goto label_1ce500;
            case 0x1CE504u: goto label_1ce504;
            case 0x1CE508u: goto label_1ce508;
            case 0x1CE50Cu: goto label_1ce50c;
            case 0x1CE510u: goto label_1ce510;
            case 0x1CE514u: goto label_1ce514;
            case 0x1CE518u: goto label_1ce518;
            case 0x1CE51Cu: goto label_1ce51c;
            case 0x1CE520u: goto label_1ce520;
            case 0x1CE524u: goto label_1ce524;
            case 0x1CE528u: goto label_1ce528;
            case 0x1CE52Cu: goto label_1ce52c;
            case 0x1CE530u: goto label_1ce530;
            case 0x1CE534u: goto label_1ce534;
            case 0x1CE538u: goto label_1ce538;
            case 0x1CE53Cu: goto label_1ce53c;
            case 0x1CE540u: goto label_1ce540;
            case 0x1CE544u: goto label_1ce544;
            case 0x1CE548u: goto label_1ce548;
            case 0x1CE54Cu: goto label_1ce54c;
            case 0x1CE550u: goto label_1ce550;
            case 0x1CE554u: goto label_1ce554;
            case 0x1CE558u: goto label_1ce558;
            case 0x1CE55Cu: goto label_1ce55c;
            case 0x1CE560u: goto label_1ce560;
            case 0x1CE564u: goto label_1ce564;
            case 0x1CE568u: goto label_1ce568;
            case 0x1CE56Cu: goto label_1ce56c;
            case 0x1CE570u: goto label_1ce570;
            case 0x1CE574u: goto label_1ce574;
            case 0x1CE578u: goto label_1ce578;
            case 0x1CE57Cu: goto label_1ce57c;
            case 0x1CE580u: goto label_1ce580;
            case 0x1CE584u: goto label_1ce584;
            case 0x1CE588u: goto label_1ce588;
            case 0x1CE58Cu: goto label_1ce58c;
            case 0x1CE590u: goto label_1ce590;
            case 0x1CE594u: goto label_1ce594;
            case 0x1CE598u: goto label_1ce598;
            case 0x1CE59Cu: goto label_1ce59c;
            case 0x1CE5A0u: goto label_1ce5a0;
            case 0x1CE5A4u: goto label_1ce5a4;
            case 0x1CE5A8u: goto label_1ce5a8;
            case 0x1CE5ACu: goto label_1ce5ac;
            case 0x1CE5B0u: goto label_1ce5b0;
            case 0x1CE5B4u: goto label_1ce5b4;
            case 0x1CE5B8u: goto label_1ce5b8;
            case 0x1CE5BCu: goto label_1ce5bc;
            case 0x1CE5C0u: goto label_1ce5c0;
            case 0x1CE5C4u: goto label_1ce5c4;
            case 0x1CE5C8u: goto label_1ce5c8;
            case 0x1CE5CCu: goto label_1ce5cc;
            case 0x1CE5D0u: goto label_1ce5d0;
            case 0x1CE5D4u: goto label_1ce5d4;
            case 0x1CE5D8u: goto label_1ce5d8;
            case 0x1CE5DCu: goto label_1ce5dc;
            case 0x1CE5E0u: goto label_1ce5e0;
            case 0x1CE5E4u: goto label_1ce5e4;
            case 0x1CE5E8u: goto label_1ce5e8;
            case 0x1CE5ECu: goto label_1ce5ec;
            case 0x1CE5F0u: goto label_1ce5f0;
            case 0x1CE5F4u: goto label_1ce5f4;
            case 0x1CE5F8u: goto label_1ce5f8;
            case 0x1CE5FCu: goto label_1ce5fc;
            case 0x1CE600u: goto label_1ce600;
            case 0x1CE604u: goto label_1ce604;
            case 0x1CE608u: goto label_1ce608;
            case 0x1CE60Cu: goto label_1ce60c;
            case 0x1CE610u: goto label_1ce610;
            case 0x1CE614u: goto label_1ce614;
            case 0x1CE618u: goto label_1ce618;
            case 0x1CE61Cu: goto label_1ce61c;
            case 0x1CE620u: goto label_1ce620;
            case 0x1CE624u: goto label_1ce624;
            case 0x1CE628u: goto label_1ce628;
            case 0x1CE62Cu: goto label_1ce62c;
            case 0x1CE630u: goto label_1ce630;
            case 0x1CE634u: goto label_1ce634;
            case 0x1CE638u: goto label_1ce638;
            case 0x1CE63Cu: goto label_1ce63c;
            case 0x1CE640u: goto label_1ce640;
            case 0x1CE644u: goto label_1ce644;
            case 0x1CE648u: goto label_1ce648;
            case 0x1CE64Cu: goto label_1ce64c;
            case 0x1CE650u: goto label_1ce650;
            case 0x1CE654u: goto label_1ce654;
            case 0x1CE658u: goto label_1ce658;
            case 0x1CE65Cu: goto label_1ce65c;
            case 0x1CE660u: goto label_1ce660;
            case 0x1CE664u: goto label_1ce664;
            case 0x1CE668u: goto label_1ce668;
            case 0x1CE66Cu: goto label_1ce66c;
            case 0x1CE670u: goto label_1ce670;
            case 0x1CE674u: goto label_1ce674;
            case 0x1CE678u: goto label_1ce678;
            case 0x1CE67Cu: goto label_1ce67c;
            case 0x1CE680u: goto label_1ce680;
            case 0x1CE684u: goto label_1ce684;
            case 0x1CE688u: goto label_1ce688;
            case 0x1CE68Cu: goto label_1ce68c;
            case 0x1CE690u: goto label_1ce690;
            case 0x1CE694u: goto label_1ce694;
            case 0x1CE698u: goto label_1ce698;
            case 0x1CE69Cu: goto label_1ce69c;
            case 0x1CE6A0u: goto label_1ce6a0;
            case 0x1CE6A4u: goto label_1ce6a4;
            case 0x1CE6A8u: goto label_1ce6a8;
            case 0x1CE6ACu: goto label_1ce6ac;
            case 0x1CE6B0u: goto label_1ce6b0;
            case 0x1CE6B4u: goto label_1ce6b4;
            case 0x1CE6B8u: goto label_1ce6b8;
            case 0x1CE6BCu: goto label_1ce6bc;
            case 0x1CE6C0u: goto label_1ce6c0;
            case 0x1CE6C4u: goto label_1ce6c4;
            case 0x1CE6C8u: goto label_1ce6c8;
            case 0x1CE6CCu: goto label_1ce6cc;
            case 0x1CE6D0u: goto label_1ce6d0;
            case 0x1CE6D4u: goto label_1ce6d4;
            case 0x1CE6D8u: goto label_1ce6d8;
            case 0x1CE6DCu: goto label_1ce6dc;
            case 0x1CE6E0u: goto label_1ce6e0;
            case 0x1CE6E4u: goto label_1ce6e4;
            case 0x1CE6E8u: goto label_1ce6e8;
            case 0x1CE6ECu: goto label_1ce6ec;
            case 0x1CE6F0u: goto label_1ce6f0;
            case 0x1CE6F4u: goto label_1ce6f4;
            case 0x1CE6F8u: goto label_1ce6f8;
            case 0x1CE6FCu: goto label_1ce6fc;
            case 0x1CE700u: goto label_1ce700;
            case 0x1CE704u: goto label_1ce704;
            case 0x1CE708u: goto label_1ce708;
            case 0x1CE70Cu: goto label_1ce70c;
            case 0x1CE710u: goto label_1ce710;
            case 0x1CE714u: goto label_1ce714;
            case 0x1CE718u: goto label_1ce718;
            case 0x1CE71Cu: goto label_1ce71c;
            case 0x1CE720u: goto label_1ce720;
            case 0x1CE724u: goto label_1ce724;
            case 0x1CE728u: goto label_1ce728;
            case 0x1CE72Cu: goto label_1ce72c;
            case 0x1CE730u: goto label_1ce730;
            case 0x1CE734u: goto label_1ce734;
            case 0x1CE738u: goto label_1ce738;
            case 0x1CE73Cu: goto label_1ce73c;
            case 0x1CE740u: goto label_1ce740;
            case 0x1CE744u: goto label_1ce744;
            case 0x1CE748u: goto label_1ce748;
            case 0x1CE74Cu: goto label_1ce74c;
            case 0x1CE750u: goto label_1ce750;
            case 0x1CE754u: goto label_1ce754;
            case 0x1CE758u: goto label_1ce758;
            case 0x1CE75Cu: goto label_1ce75c;
            case 0x1CE760u: goto label_1ce760;
            case 0x1CE764u: goto label_1ce764;
            case 0x1CE768u: goto label_1ce768;
            case 0x1CE76Cu: goto label_1ce76c;
            case 0x1CE770u: goto label_1ce770;
            case 0x1CE774u: goto label_1ce774;
            case 0x1CE778u: goto label_1ce778;
            case 0x1CE77Cu: goto label_1ce77c;
            case 0x1CE780u: goto label_1ce780;
            case 0x1CE784u: goto label_1ce784;
            case 0x1CE788u: goto label_1ce788;
            case 0x1CE78Cu: goto label_1ce78c;
            case 0x1CE790u: goto label_1ce790;
            case 0x1CE794u: goto label_1ce794;
            case 0x1CE798u: goto label_1ce798;
            case 0x1CE79Cu: goto label_1ce79c;
            case 0x1CE7A0u: goto label_1ce7a0;
            case 0x1CE7A4u: goto label_1ce7a4;
            case 0x1CE7A8u: goto label_1ce7a8;
            case 0x1CE7ACu: goto label_1ce7ac;
            case 0x1CE7B0u: goto label_1ce7b0;
            case 0x1CE7B4u: goto label_1ce7b4;
            case 0x1CE7B8u: goto label_1ce7b8;
            case 0x1CE7BCu: goto label_1ce7bc;
            case 0x1CE7C0u: goto label_1ce7c0;
            case 0x1CE7C4u: goto label_1ce7c4;
            case 0x1CE7C8u: goto label_1ce7c8;
            case 0x1CE7CCu: goto label_1ce7cc;
            case 0x1CE7D0u: goto label_1ce7d0;
            case 0x1CE7D4u: goto label_1ce7d4;
            case 0x1CE7D8u: goto label_1ce7d8;
            case 0x1CE7DCu: goto label_1ce7dc;
            case 0x1CE7E0u: goto label_1ce7e0;
            case 0x1CE7E4u: goto label_1ce7e4;
            case 0x1CE7E8u: goto label_1ce7e8;
            case 0x1CE7ECu: goto label_1ce7ec;
            case 0x1CE7F0u: goto label_1ce7f0;
            case 0x1CE7F4u: goto label_1ce7f4;
            case 0x1CE7F8u: goto label_1ce7f8;
            case 0x1CE7FCu: goto label_1ce7fc;
            case 0x1CE800u: goto label_1ce800;
            case 0x1CE804u: goto label_1ce804;
            case 0x1CE808u: goto label_1ce808;
            case 0x1CE80Cu: goto label_1ce80c;
            case 0x1CE810u: goto label_1ce810;
            case 0x1CE814u: goto label_1ce814;
            case 0x1CE818u: goto label_1ce818;
            case 0x1CE81Cu: goto label_1ce81c;
            case 0x1CE820u: goto label_1ce820;
            case 0x1CE824u: goto label_1ce824;
            case 0x1CE828u: goto label_1ce828;
            case 0x1CE82Cu: goto label_1ce82c;
            case 0x1CE830u: goto label_1ce830;
            case 0x1CE834u: goto label_1ce834;
            case 0x1CE838u: goto label_1ce838;
            case 0x1CE83Cu: goto label_1ce83c;
            case 0x1CE840u: goto label_1ce840;
            case 0x1CE844u: goto label_1ce844;
            case 0x1CE848u: goto label_1ce848;
            case 0x1CE84Cu: goto label_1ce84c;
            case 0x1CE850u: goto label_1ce850;
            case 0x1CE854u: goto label_1ce854;
            case 0x1CE858u: goto label_1ce858;
            case 0x1CE85Cu: goto label_1ce85c;
            case 0x1CE860u: goto label_1ce860;
            case 0x1CE864u: goto label_1ce864;
            case 0x1CE868u: goto label_1ce868;
            case 0x1CE86Cu: goto label_1ce86c;
            case 0x1CE870u: goto label_1ce870;
            case 0x1CE874u: goto label_1ce874;
            case 0x1CE878u: goto label_1ce878;
            case 0x1CE87Cu: goto label_1ce87c;
            case 0x1CE880u: goto label_1ce880;
            case 0x1CE884u: goto label_1ce884;
            case 0x1CE888u: goto label_1ce888;
            case 0x1CE88Cu: goto label_1ce88c;
            case 0x1CE890u: goto label_1ce890;
            case 0x1CE894u: goto label_1ce894;
            case 0x1CE898u: goto label_1ce898;
            case 0x1CE89Cu: goto label_1ce89c;
            case 0x1CE8A0u: goto label_1ce8a0;
            case 0x1CE8A4u: goto label_1ce8a4;
            case 0x1CE8A8u: goto label_1ce8a8;
            case 0x1CE8ACu: goto label_1ce8ac;
            case 0x1CE8B0u: goto label_1ce8b0;
            case 0x1CE8B4u: goto label_1ce8b4;
            case 0x1CE8B8u: goto label_1ce8b8;
            case 0x1CE8BCu: goto label_1ce8bc;
            case 0x1CE8C0u: goto label_1ce8c0;
            case 0x1CE8C4u: goto label_1ce8c4;
            case 0x1CE8C8u: goto label_1ce8c8;
            case 0x1CE8CCu: goto label_1ce8cc;
            case 0x1CE8D0u: goto label_1ce8d0;
            case 0x1CE8D4u: goto label_1ce8d4;
            case 0x1CE8D8u: goto label_1ce8d8;
            case 0x1CE8DCu: goto label_1ce8dc;
            case 0x1CE8E0u: goto label_1ce8e0;
            case 0x1CE8E4u: goto label_1ce8e4;
            case 0x1CE8E8u: goto label_1ce8e8;
            case 0x1CE8ECu: goto label_1ce8ec;
            case 0x1CE8F0u: goto label_1ce8f0;
            case 0x1CE8F4u: goto label_1ce8f4;
            case 0x1CE8F8u: goto label_1ce8f8;
            case 0x1CE8FCu: goto label_1ce8fc;
            case 0x1CE900u: goto label_1ce900;
            case 0x1CE904u: goto label_1ce904;
            case 0x1CE908u: goto label_1ce908;
            case 0x1CE90Cu: goto label_1ce90c;
            case 0x1CE910u: goto label_1ce910;
            case 0x1CE914u: goto label_1ce914;
            case 0x1CE918u: goto label_1ce918;
            case 0x1CE91Cu: goto label_1ce91c;
            case 0x1CE920u: goto label_1ce920;
            case 0x1CE924u: goto label_1ce924;
            case 0x1CE928u: goto label_1ce928;
            case 0x1CE92Cu: goto label_1ce92c;
            case 0x1CE930u: goto label_1ce930;
            case 0x1CE934u: goto label_1ce934;
            case 0x1CE938u: goto label_1ce938;
            case 0x1CE93Cu: goto label_1ce93c;
            case 0x1CE940u: goto label_1ce940;
            case 0x1CE944u: goto label_1ce944;
            case 0x1CE948u: goto label_1ce948;
            case 0x1CE94Cu: goto label_1ce94c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE914u; }
            if (ctx->pc != 0x1CE914u) { return; }
        }
    }
    ctx->pc = 0x1CE914u;
label_1ce914:
    // 0x1ce914: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ce918:
    if (ctx->pc == 0x1CE918u) {
        ctx->pc = 0x1CE91Cu;
        goto label_1ce91c;
    }
    ctx->pc = 0x1CE914u;
    {
        const bool branch_taken_0x1ce914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce914) {
            ctx->pc = 0x1CE940u;
            goto label_1ce940;
        }
    }
    ctx->pc = 0x1CE91Cu;
label_1ce91c:
    // 0x1ce91c: 0x0  nop
    ctx->pc = 0x1ce91cu;
    // NOP
label_1ce920:
    // 0x1ce920: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1ce920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
label_1ce924:
    // 0x1ce924: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ce924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ce928:
    // 0x1ce928: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1ce928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1ce92c:
    // 0x1ce92c: 0x24c6dcf0  addiu       $a2, $a2, -0x2310
    ctx->pc = 0x1ce92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958320));
label_1ce930:
    // 0x1ce930: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ce930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce934:
    // 0x1ce934: 0xc053ca4  jal         func_14F290
label_1ce938:
    if (ctx->pc == 0x1CE938u) {
        ctx->pc = 0x1CE938u;
            // 0x1ce938: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CE93Cu;
        goto label_1ce93c;
    }
    ctx->pc = 0x1CE934u;
    SET_GPR_U32(ctx, 31, 0x1CE93Cu);
    ctx->pc = 0x1CE938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE934u;
            // 0x1ce938: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE93Cu; }
        if (ctx->pc != 0x1CE93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE93Cu; }
        if (ctx->pc != 0x1CE93Cu) { return; }
    }
    ctx->pc = 0x1CE93Cu;
label_1ce93c:
    // 0x1ce93c: 0x0  nop
    ctx->pc = 0x1ce93cu;
    // NOP
label_1ce940:
    // 0x1ce940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ce944:
    // 0x1ce944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce948:
    // 0x1ce948: 0x3e00008  jr          $ra
label_1ce94c:
    if (ctx->pc == 0x1CE94Cu) {
        ctx->pc = 0x1CE94Cu;
            // 0x1ce94c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1CE950u;
        goto label_fallthrough_0x1ce948;
    }
    ctx->pc = 0x1CE948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE948u;
            // 0x1ce94c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDF30u: goto label_1cdf30;
            case 0x1CDF34u: goto label_1cdf34;
            case 0x1CDF38u: goto label_1cdf38;
            case 0x1CDF3Cu: goto label_1cdf3c;
            case 0x1CDF40u: goto label_1cdf40;
            case 0x1CDF44u: goto label_1cdf44;
            case 0x1CDF48u: goto label_1cdf48;
            case 0x1CDF4Cu: goto label_1cdf4c;
            case 0x1CDF50u: goto label_1cdf50;
            case 0x1CDF54u: goto label_1cdf54;
            case 0x1CDF58u: goto label_1cdf58;
            case 0x1CDF5Cu: goto label_1cdf5c;
            case 0x1CDF60u: goto label_1cdf60;
            case 0x1CDF64u: goto label_1cdf64;
            case 0x1CDF68u: goto label_1cdf68;
            case 0x1CDF6Cu: goto label_1cdf6c;
            case 0x1CDF70u: goto label_1cdf70;
            case 0x1CDF74u: goto label_1cdf74;
            case 0x1CDF78u: goto label_1cdf78;
            case 0x1CDF7Cu: goto label_1cdf7c;
            case 0x1CDF80u: goto label_1cdf80;
            case 0x1CDF84u: goto label_1cdf84;
            case 0x1CDF88u: goto label_1cdf88;
            case 0x1CDF8Cu: goto label_1cdf8c;
            case 0x1CDF90u: goto label_1cdf90;
            case 0x1CDF94u: goto label_1cdf94;
            case 0x1CDF98u: goto label_1cdf98;
            case 0x1CDF9Cu: goto label_1cdf9c;
            case 0x1CDFA0u: goto label_1cdfa0;
            case 0x1CDFA4u: goto label_1cdfa4;
            case 0x1CDFA8u: goto label_1cdfa8;
            case 0x1CDFACu: goto label_1cdfac;
            case 0x1CDFB0u: goto label_1cdfb0;
            case 0x1CDFB4u: goto label_1cdfb4;
            case 0x1CDFB8u: goto label_1cdfb8;
            case 0x1CDFBCu: goto label_1cdfbc;
            case 0x1CDFC0u: goto label_1cdfc0;
            case 0x1CDFC4u: goto label_1cdfc4;
            case 0x1CDFC8u: goto label_1cdfc8;
            case 0x1CDFCCu: goto label_1cdfcc;
            case 0x1CDFD0u: goto label_1cdfd0;
            case 0x1CDFD4u: goto label_1cdfd4;
            case 0x1CDFD8u: goto label_1cdfd8;
            case 0x1CDFDCu: goto label_1cdfdc;
            case 0x1CDFE0u: goto label_1cdfe0;
            case 0x1CDFE4u: goto label_1cdfe4;
            case 0x1CDFE8u: goto label_1cdfe8;
            case 0x1CDFECu: goto label_1cdfec;
            case 0x1CDFF0u: goto label_1cdff0;
            case 0x1CDFF4u: goto label_1cdff4;
            case 0x1CDFF8u: goto label_1cdff8;
            case 0x1CDFFCu: goto label_1cdffc;
            case 0x1CE000u: goto label_1ce000;
            case 0x1CE004u: goto label_1ce004;
            case 0x1CE008u: goto label_1ce008;
            case 0x1CE00Cu: goto label_1ce00c;
            case 0x1CE010u: goto label_1ce010;
            case 0x1CE014u: goto label_1ce014;
            case 0x1CE018u: goto label_1ce018;
            case 0x1CE01Cu: goto label_1ce01c;
            case 0x1CE020u: goto label_1ce020;
            case 0x1CE024u: goto label_1ce024;
            case 0x1CE028u: goto label_1ce028;
            case 0x1CE02Cu: goto label_1ce02c;
            case 0x1CE030u: goto label_1ce030;
            case 0x1CE034u: goto label_1ce034;
            case 0x1CE038u: goto label_1ce038;
            case 0x1CE03Cu: goto label_1ce03c;
            case 0x1CE040u: goto label_1ce040;
            case 0x1CE044u: goto label_1ce044;
            case 0x1CE048u: goto label_1ce048;
            case 0x1CE04Cu: goto label_1ce04c;
            case 0x1CE050u: goto label_1ce050;
            case 0x1CE054u: goto label_1ce054;
            case 0x1CE058u: goto label_1ce058;
            case 0x1CE05Cu: goto label_1ce05c;
            case 0x1CE060u: goto label_1ce060;
            case 0x1CE064u: goto label_1ce064;
            case 0x1CE068u: goto label_1ce068;
            case 0x1CE06Cu: goto label_1ce06c;
            case 0x1CE070u: goto label_1ce070;
            case 0x1CE074u: goto label_1ce074;
            case 0x1CE078u: goto label_1ce078;
            case 0x1CE07Cu: goto label_1ce07c;
            case 0x1CE080u: goto label_1ce080;
            case 0x1CE084u: goto label_1ce084;
            case 0x1CE088u: goto label_1ce088;
            case 0x1CE08Cu: goto label_1ce08c;
            case 0x1CE090u: goto label_1ce090;
            case 0x1CE094u: goto label_1ce094;
            case 0x1CE098u: goto label_1ce098;
            case 0x1CE09Cu: goto label_1ce09c;
            case 0x1CE0A0u: goto label_1ce0a0;
            case 0x1CE0A4u: goto label_1ce0a4;
            case 0x1CE0A8u: goto label_1ce0a8;
            case 0x1CE0ACu: goto label_1ce0ac;
            case 0x1CE0B0u: goto label_1ce0b0;
            case 0x1CE0B4u: goto label_1ce0b4;
            case 0x1CE0B8u: goto label_1ce0b8;
            case 0x1CE0BCu: goto label_1ce0bc;
            case 0x1CE0C0u: goto label_1ce0c0;
            case 0x1CE0C4u: goto label_1ce0c4;
            case 0x1CE0C8u: goto label_1ce0c8;
            case 0x1CE0CCu: goto label_1ce0cc;
            case 0x1CE0D0u: goto label_1ce0d0;
            case 0x1CE0D4u: goto label_1ce0d4;
            case 0x1CE0D8u: goto label_1ce0d8;
            case 0x1CE0DCu: goto label_1ce0dc;
            case 0x1CE0E0u: goto label_1ce0e0;
            case 0x1CE0E4u: goto label_1ce0e4;
            case 0x1CE0E8u: goto label_1ce0e8;
            case 0x1CE0ECu: goto label_1ce0ec;
            case 0x1CE0F0u: goto label_1ce0f0;
            case 0x1CE0F4u: goto label_1ce0f4;
            case 0x1CE0F8u: goto label_1ce0f8;
            case 0x1CE0FCu: goto label_1ce0fc;
            case 0x1CE100u: goto label_1ce100;
            case 0x1CE104u: goto label_1ce104;
            case 0x1CE108u: goto label_1ce108;
            case 0x1CE10Cu: goto label_1ce10c;
            case 0x1CE110u: goto label_1ce110;
            case 0x1CE114u: goto label_1ce114;
            case 0x1CE118u: goto label_1ce118;
            case 0x1CE11Cu: goto label_1ce11c;
            case 0x1CE120u: goto label_1ce120;
            case 0x1CE124u: goto label_1ce124;
            case 0x1CE128u: goto label_1ce128;
            case 0x1CE12Cu: goto label_1ce12c;
            case 0x1CE130u: goto label_1ce130;
            case 0x1CE134u: goto label_1ce134;
            case 0x1CE138u: goto label_1ce138;
            case 0x1CE13Cu: goto label_1ce13c;
            case 0x1CE140u: goto label_1ce140;
            case 0x1CE144u: goto label_1ce144;
            case 0x1CE148u: goto label_1ce148;
            case 0x1CE14Cu: goto label_1ce14c;
            case 0x1CE150u: goto label_1ce150;
            case 0x1CE154u: goto label_1ce154;
            case 0x1CE158u: goto label_1ce158;
            case 0x1CE15Cu: goto label_1ce15c;
            case 0x1CE160u: goto label_1ce160;
            case 0x1CE164u: goto label_1ce164;
            case 0x1CE168u: goto label_1ce168;
            case 0x1CE16Cu: goto label_1ce16c;
            case 0x1CE170u: goto label_1ce170;
            case 0x1CE174u: goto label_1ce174;
            case 0x1CE178u: goto label_1ce178;
            case 0x1CE17Cu: goto label_1ce17c;
            case 0x1CE180u: goto label_1ce180;
            case 0x1CE184u: goto label_1ce184;
            case 0x1CE188u: goto label_1ce188;
            case 0x1CE18Cu: goto label_1ce18c;
            case 0x1CE190u: goto label_1ce190;
            case 0x1CE194u: goto label_1ce194;
            case 0x1CE198u: goto label_1ce198;
            case 0x1CE19Cu: goto label_1ce19c;
            case 0x1CE1A0u: goto label_1ce1a0;
            case 0x1CE1A4u: goto label_1ce1a4;
            case 0x1CE1A8u: goto label_1ce1a8;
            case 0x1CE1ACu: goto label_1ce1ac;
            case 0x1CE1B0u: goto label_1ce1b0;
            case 0x1CE1B4u: goto label_1ce1b4;
            case 0x1CE1B8u: goto label_1ce1b8;
            case 0x1CE1BCu: goto label_1ce1bc;
            case 0x1CE1C0u: goto label_1ce1c0;
            case 0x1CE1C4u: goto label_1ce1c4;
            case 0x1CE1C8u: goto label_1ce1c8;
            case 0x1CE1CCu: goto label_1ce1cc;
            case 0x1CE1D0u: goto label_1ce1d0;
            case 0x1CE1D4u: goto label_1ce1d4;
            case 0x1CE1D8u: goto label_1ce1d8;
            case 0x1CE1DCu: goto label_1ce1dc;
            case 0x1CE1E0u: goto label_1ce1e0;
            case 0x1CE1E4u: goto label_1ce1e4;
            case 0x1CE1E8u: goto label_1ce1e8;
            case 0x1CE1ECu: goto label_1ce1ec;
            case 0x1CE1F0u: goto label_1ce1f0;
            case 0x1CE1F4u: goto label_1ce1f4;
            case 0x1CE1F8u: goto label_1ce1f8;
            case 0x1CE1FCu: goto label_1ce1fc;
            case 0x1CE200u: goto label_1ce200;
            case 0x1CE204u: goto label_1ce204;
            case 0x1CE208u: goto label_1ce208;
            case 0x1CE20Cu: goto label_1ce20c;
            case 0x1CE210u: goto label_1ce210;
            case 0x1CE214u: goto label_1ce214;
            case 0x1CE218u: goto label_1ce218;
            case 0x1CE21Cu: goto label_1ce21c;
            case 0x1CE220u: goto label_1ce220;
            case 0x1CE224u: goto label_1ce224;
            case 0x1CE228u: goto label_1ce228;
            case 0x1CE22Cu: goto label_1ce22c;
            case 0x1CE230u: goto label_1ce230;
            case 0x1CE234u: goto label_1ce234;
            case 0x1CE238u: goto label_1ce238;
            case 0x1CE23Cu: goto label_1ce23c;
            case 0x1CE240u: goto label_1ce240;
            case 0x1CE244u: goto label_1ce244;
            case 0x1CE248u: goto label_1ce248;
            case 0x1CE24Cu: goto label_1ce24c;
            case 0x1CE250u: goto label_1ce250;
            case 0x1CE254u: goto label_1ce254;
            case 0x1CE258u: goto label_1ce258;
            case 0x1CE25Cu: goto label_1ce25c;
            case 0x1CE260u: goto label_1ce260;
            case 0x1CE264u: goto label_1ce264;
            case 0x1CE268u: goto label_1ce268;
            case 0x1CE26Cu: goto label_1ce26c;
            case 0x1CE270u: goto label_1ce270;
            case 0x1CE274u: goto label_1ce274;
            case 0x1CE278u: goto label_1ce278;
            case 0x1CE27Cu: goto label_1ce27c;
            case 0x1CE280u: goto label_1ce280;
            case 0x1CE284u: goto label_1ce284;
            case 0x1CE288u: goto label_1ce288;
            case 0x1CE28Cu: goto label_1ce28c;
            case 0x1CE290u: goto label_1ce290;
            case 0x1CE294u: goto label_1ce294;
            case 0x1CE298u: goto label_1ce298;
            case 0x1CE29Cu: goto label_1ce29c;
            case 0x1CE2A0u: goto label_1ce2a0;
            case 0x1CE2A4u: goto label_1ce2a4;
            case 0x1CE2A8u: goto label_1ce2a8;
            case 0x1CE2ACu: goto label_1ce2ac;
            case 0x1CE2B0u: goto label_1ce2b0;
            case 0x1CE2B4u: goto label_1ce2b4;
            case 0x1CE2B8u: goto label_1ce2b8;
            case 0x1CE2BCu: goto label_1ce2bc;
            case 0x1CE2C0u: goto label_1ce2c0;
            case 0x1CE2C4u: goto label_1ce2c4;
            case 0x1CE2C8u: goto label_1ce2c8;
            case 0x1CE2CCu: goto label_1ce2cc;
            case 0x1CE2D0u: goto label_1ce2d0;
            case 0x1CE2D4u: goto label_1ce2d4;
            case 0x1CE2D8u: goto label_1ce2d8;
            case 0x1CE2DCu: goto label_1ce2dc;
            case 0x1CE2E0u: goto label_1ce2e0;
            case 0x1CE2E4u: goto label_1ce2e4;
            case 0x1CE2E8u: goto label_1ce2e8;
            case 0x1CE2ECu: goto label_1ce2ec;
            case 0x1CE2F0u: goto label_1ce2f0;
            case 0x1CE2F4u: goto label_1ce2f4;
            case 0x1CE2F8u: goto label_1ce2f8;
            case 0x1CE2FCu: goto label_1ce2fc;
            case 0x1CE300u: goto label_1ce300;
            case 0x1CE304u: goto label_1ce304;
            case 0x1CE308u: goto label_1ce308;
            case 0x1CE30Cu: goto label_1ce30c;
            case 0x1CE310u: goto label_1ce310;
            case 0x1CE314u: goto label_1ce314;
            case 0x1CE318u: goto label_1ce318;
            case 0x1CE31Cu: goto label_1ce31c;
            case 0x1CE320u: goto label_1ce320;
            case 0x1CE324u: goto label_1ce324;
            case 0x1CE328u: goto label_1ce328;
            case 0x1CE32Cu: goto label_1ce32c;
            case 0x1CE330u: goto label_1ce330;
            case 0x1CE334u: goto label_1ce334;
            case 0x1CE338u: goto label_1ce338;
            case 0x1CE33Cu: goto label_1ce33c;
            case 0x1CE340u: goto label_1ce340;
            case 0x1CE344u: goto label_1ce344;
            case 0x1CE348u: goto label_1ce348;
            case 0x1CE34Cu: goto label_1ce34c;
            case 0x1CE350u: goto label_1ce350;
            case 0x1CE354u: goto label_1ce354;
            case 0x1CE358u: goto label_1ce358;
            case 0x1CE35Cu: goto label_1ce35c;
            case 0x1CE360u: goto label_1ce360;
            case 0x1CE364u: goto label_1ce364;
            case 0x1CE368u: goto label_1ce368;
            case 0x1CE36Cu: goto label_1ce36c;
            case 0x1CE370u: goto label_1ce370;
            case 0x1CE374u: goto label_1ce374;
            case 0x1CE378u: goto label_1ce378;
            case 0x1CE37Cu: goto label_1ce37c;
            case 0x1CE380u: goto label_1ce380;
            case 0x1CE384u: goto label_1ce384;
            case 0x1CE388u: goto label_1ce388;
            case 0x1CE38Cu: goto label_1ce38c;
            case 0x1CE390u: goto label_1ce390;
            case 0x1CE394u: goto label_1ce394;
            case 0x1CE398u: goto label_1ce398;
            case 0x1CE39Cu: goto label_1ce39c;
            case 0x1CE3A0u: goto label_1ce3a0;
            case 0x1CE3A4u: goto label_1ce3a4;
            case 0x1CE3A8u: goto label_1ce3a8;
            case 0x1CE3ACu: goto label_1ce3ac;
            case 0x1CE3B0u: goto label_1ce3b0;
            case 0x1CE3B4u: goto label_1ce3b4;
            case 0x1CE3B8u: goto label_1ce3b8;
            case 0x1CE3BCu: goto label_1ce3bc;
            case 0x1CE3C0u: goto label_1ce3c0;
            case 0x1CE3C4u: goto label_1ce3c4;
            case 0x1CE3C8u: goto label_1ce3c8;
            case 0x1CE3CCu: goto label_1ce3cc;
            case 0x1CE3D0u: goto label_1ce3d0;
            case 0x1CE3D4u: goto label_1ce3d4;
            case 0x1CE3D8u: goto label_1ce3d8;
            case 0x1CE3DCu: goto label_1ce3dc;
            case 0x1CE3E0u: goto label_1ce3e0;
            case 0x1CE3E4u: goto label_1ce3e4;
            case 0x1CE3E8u: goto label_1ce3e8;
            case 0x1CE3ECu: goto label_1ce3ec;
            case 0x1CE3F0u: goto label_1ce3f0;
            case 0x1CE3F4u: goto label_1ce3f4;
            case 0x1CE3F8u: goto label_1ce3f8;
            case 0x1CE3FCu: goto label_1ce3fc;
            case 0x1CE400u: goto label_1ce400;
            case 0x1CE404u: goto label_1ce404;
            case 0x1CE408u: goto label_1ce408;
            case 0x1CE40Cu: goto label_1ce40c;
            case 0x1CE410u: goto label_1ce410;
            case 0x1CE414u: goto label_1ce414;
            case 0x1CE418u: goto label_1ce418;
            case 0x1CE41Cu: goto label_1ce41c;
            case 0x1CE420u: goto label_1ce420;
            case 0x1CE424u: goto label_1ce424;
            case 0x1CE428u: goto label_1ce428;
            case 0x1CE42Cu: goto label_1ce42c;
            case 0x1CE430u: goto label_1ce430;
            case 0x1CE434u: goto label_1ce434;
            case 0x1CE438u: goto label_1ce438;
            case 0x1CE43Cu: goto label_1ce43c;
            case 0x1CE440u: goto label_1ce440;
            case 0x1CE444u: goto label_1ce444;
            case 0x1CE448u: goto label_1ce448;
            case 0x1CE44Cu: goto label_1ce44c;
            case 0x1CE450u: goto label_1ce450;
            case 0x1CE454u: goto label_1ce454;
            case 0x1CE458u: goto label_1ce458;
            case 0x1CE45Cu: goto label_1ce45c;
            case 0x1CE460u: goto label_1ce460;
            case 0x1CE464u: goto label_1ce464;
            case 0x1CE468u: goto label_1ce468;
            case 0x1CE46Cu: goto label_1ce46c;
            case 0x1CE470u: goto label_1ce470;
            case 0x1CE474u: goto label_1ce474;
            case 0x1CE478u: goto label_1ce478;
            case 0x1CE47Cu: goto label_1ce47c;
            case 0x1CE480u: goto label_1ce480;
            case 0x1CE484u: goto label_1ce484;
            case 0x1CE488u: goto label_1ce488;
            case 0x1CE48Cu: goto label_1ce48c;
            case 0x1CE490u: goto label_1ce490;
            case 0x1CE494u: goto label_1ce494;
            case 0x1CE498u: goto label_1ce498;
            case 0x1CE49Cu: goto label_1ce49c;
            case 0x1CE4A0u: goto label_1ce4a0;
            case 0x1CE4A4u: goto label_1ce4a4;
            case 0x1CE4A8u: goto label_1ce4a8;
            case 0x1CE4ACu: goto label_1ce4ac;
            case 0x1CE4B0u: goto label_1ce4b0;
            case 0x1CE4B4u: goto label_1ce4b4;
            case 0x1CE4B8u: goto label_1ce4b8;
            case 0x1CE4BCu: goto label_1ce4bc;
            case 0x1CE4C0u: goto label_1ce4c0;
            case 0x1CE4C4u: goto label_1ce4c4;
            case 0x1CE4C8u: goto label_1ce4c8;
            case 0x1CE4CCu: goto label_1ce4cc;
            case 0x1CE4D0u: goto label_1ce4d0;
            case 0x1CE4D4u: goto label_1ce4d4;
            case 0x1CE4D8u: goto label_1ce4d8;
            case 0x1CE4DCu: goto label_1ce4dc;
            case 0x1CE4E0u: goto label_1ce4e0;
            case 0x1CE4E4u: goto label_1ce4e4;
            case 0x1CE4E8u: goto label_1ce4e8;
            case 0x1CE4ECu: goto label_1ce4ec;
            case 0x1CE4F0u: goto label_1ce4f0;
            case 0x1CE4F4u: goto label_1ce4f4;
            case 0x1CE4F8u: goto label_1ce4f8;
            case 0x1CE4FCu: goto label_1ce4fc;
            case 0x1CE500u: goto label_1ce500;
            case 0x1CE504u: goto label_1ce504;
            case 0x1CE508u: goto label_1ce508;
            case 0x1CE50Cu: goto label_1ce50c;
            case 0x1CE510u: goto label_1ce510;
            case 0x1CE514u: goto label_1ce514;
            case 0x1CE518u: goto label_1ce518;
            case 0x1CE51Cu: goto label_1ce51c;
            case 0x1CE520u: goto label_1ce520;
            case 0x1CE524u: goto label_1ce524;
            case 0x1CE528u: goto label_1ce528;
            case 0x1CE52Cu: goto label_1ce52c;
            case 0x1CE530u: goto label_1ce530;
            case 0x1CE534u: goto label_1ce534;
            case 0x1CE538u: goto label_1ce538;
            case 0x1CE53Cu: goto label_1ce53c;
            case 0x1CE540u: goto label_1ce540;
            case 0x1CE544u: goto label_1ce544;
            case 0x1CE548u: goto label_1ce548;
            case 0x1CE54Cu: goto label_1ce54c;
            case 0x1CE550u: goto label_1ce550;
            case 0x1CE554u: goto label_1ce554;
            case 0x1CE558u: goto label_1ce558;
            case 0x1CE55Cu: goto label_1ce55c;
            case 0x1CE560u: goto label_1ce560;
            case 0x1CE564u: goto label_1ce564;
            case 0x1CE568u: goto label_1ce568;
            case 0x1CE56Cu: goto label_1ce56c;
            case 0x1CE570u: goto label_1ce570;
            case 0x1CE574u: goto label_1ce574;
            case 0x1CE578u: goto label_1ce578;
            case 0x1CE57Cu: goto label_1ce57c;
            case 0x1CE580u: goto label_1ce580;
            case 0x1CE584u: goto label_1ce584;
            case 0x1CE588u: goto label_1ce588;
            case 0x1CE58Cu: goto label_1ce58c;
            case 0x1CE590u: goto label_1ce590;
            case 0x1CE594u: goto label_1ce594;
            case 0x1CE598u: goto label_1ce598;
            case 0x1CE59Cu: goto label_1ce59c;
            case 0x1CE5A0u: goto label_1ce5a0;
            case 0x1CE5A4u: goto label_1ce5a4;
            case 0x1CE5A8u: goto label_1ce5a8;
            case 0x1CE5ACu: goto label_1ce5ac;
            case 0x1CE5B0u: goto label_1ce5b0;
            case 0x1CE5B4u: goto label_1ce5b4;
            case 0x1CE5B8u: goto label_1ce5b8;
            case 0x1CE5BCu: goto label_1ce5bc;
            case 0x1CE5C0u: goto label_1ce5c0;
            case 0x1CE5C4u: goto label_1ce5c4;
            case 0x1CE5C8u: goto label_1ce5c8;
            case 0x1CE5CCu: goto label_1ce5cc;
            case 0x1CE5D0u: goto label_1ce5d0;
            case 0x1CE5D4u: goto label_1ce5d4;
            case 0x1CE5D8u: goto label_1ce5d8;
            case 0x1CE5DCu: goto label_1ce5dc;
            case 0x1CE5E0u: goto label_1ce5e0;
            case 0x1CE5E4u: goto label_1ce5e4;
            case 0x1CE5E8u: goto label_1ce5e8;
            case 0x1CE5ECu: goto label_1ce5ec;
            case 0x1CE5F0u: goto label_1ce5f0;
            case 0x1CE5F4u: goto label_1ce5f4;
            case 0x1CE5F8u: goto label_1ce5f8;
            case 0x1CE5FCu: goto label_1ce5fc;
            case 0x1CE600u: goto label_1ce600;
            case 0x1CE604u: goto label_1ce604;
            case 0x1CE608u: goto label_1ce608;
            case 0x1CE60Cu: goto label_1ce60c;
            case 0x1CE610u: goto label_1ce610;
            case 0x1CE614u: goto label_1ce614;
            case 0x1CE618u: goto label_1ce618;
            case 0x1CE61Cu: goto label_1ce61c;
            case 0x1CE620u: goto label_1ce620;
            case 0x1CE624u: goto label_1ce624;
            case 0x1CE628u: goto label_1ce628;
            case 0x1CE62Cu: goto label_1ce62c;
            case 0x1CE630u: goto label_1ce630;
            case 0x1CE634u: goto label_1ce634;
            case 0x1CE638u: goto label_1ce638;
            case 0x1CE63Cu: goto label_1ce63c;
            case 0x1CE640u: goto label_1ce640;
            case 0x1CE644u: goto label_1ce644;
            case 0x1CE648u: goto label_1ce648;
            case 0x1CE64Cu: goto label_1ce64c;
            case 0x1CE650u: goto label_1ce650;
            case 0x1CE654u: goto label_1ce654;
            case 0x1CE658u: goto label_1ce658;
            case 0x1CE65Cu: goto label_1ce65c;
            case 0x1CE660u: goto label_1ce660;
            case 0x1CE664u: goto label_1ce664;
            case 0x1CE668u: goto label_1ce668;
            case 0x1CE66Cu: goto label_1ce66c;
            case 0x1CE670u: goto label_1ce670;
            case 0x1CE674u: goto label_1ce674;
            case 0x1CE678u: goto label_1ce678;
            case 0x1CE67Cu: goto label_1ce67c;
            case 0x1CE680u: goto label_1ce680;
            case 0x1CE684u: goto label_1ce684;
            case 0x1CE688u: goto label_1ce688;
            case 0x1CE68Cu: goto label_1ce68c;
            case 0x1CE690u: goto label_1ce690;
            case 0x1CE694u: goto label_1ce694;
            case 0x1CE698u: goto label_1ce698;
            case 0x1CE69Cu: goto label_1ce69c;
            case 0x1CE6A0u: goto label_1ce6a0;
            case 0x1CE6A4u: goto label_1ce6a4;
            case 0x1CE6A8u: goto label_1ce6a8;
            case 0x1CE6ACu: goto label_1ce6ac;
            case 0x1CE6B0u: goto label_1ce6b0;
            case 0x1CE6B4u: goto label_1ce6b4;
            case 0x1CE6B8u: goto label_1ce6b8;
            case 0x1CE6BCu: goto label_1ce6bc;
            case 0x1CE6C0u: goto label_1ce6c0;
            case 0x1CE6C4u: goto label_1ce6c4;
            case 0x1CE6C8u: goto label_1ce6c8;
            case 0x1CE6CCu: goto label_1ce6cc;
            case 0x1CE6D0u: goto label_1ce6d0;
            case 0x1CE6D4u: goto label_1ce6d4;
            case 0x1CE6D8u: goto label_1ce6d8;
            case 0x1CE6DCu: goto label_1ce6dc;
            case 0x1CE6E0u: goto label_1ce6e0;
            case 0x1CE6E4u: goto label_1ce6e4;
            case 0x1CE6E8u: goto label_1ce6e8;
            case 0x1CE6ECu: goto label_1ce6ec;
            case 0x1CE6F0u: goto label_1ce6f0;
            case 0x1CE6F4u: goto label_1ce6f4;
            case 0x1CE6F8u: goto label_1ce6f8;
            case 0x1CE6FCu: goto label_1ce6fc;
            case 0x1CE700u: goto label_1ce700;
            case 0x1CE704u: goto label_1ce704;
            case 0x1CE708u: goto label_1ce708;
            case 0x1CE70Cu: goto label_1ce70c;
            case 0x1CE710u: goto label_1ce710;
            case 0x1CE714u: goto label_1ce714;
            case 0x1CE718u: goto label_1ce718;
            case 0x1CE71Cu: goto label_1ce71c;
            case 0x1CE720u: goto label_1ce720;
            case 0x1CE724u: goto label_1ce724;
            case 0x1CE728u: goto label_1ce728;
            case 0x1CE72Cu: goto label_1ce72c;
            case 0x1CE730u: goto label_1ce730;
            case 0x1CE734u: goto label_1ce734;
            case 0x1CE738u: goto label_1ce738;
            case 0x1CE73Cu: goto label_1ce73c;
            case 0x1CE740u: goto label_1ce740;
            case 0x1CE744u: goto label_1ce744;
            case 0x1CE748u: goto label_1ce748;
            case 0x1CE74Cu: goto label_1ce74c;
            case 0x1CE750u: goto label_1ce750;
            case 0x1CE754u: goto label_1ce754;
            case 0x1CE758u: goto label_1ce758;
            case 0x1CE75Cu: goto label_1ce75c;
            case 0x1CE760u: goto label_1ce760;
            case 0x1CE764u: goto label_1ce764;
            case 0x1CE768u: goto label_1ce768;
            case 0x1CE76Cu: goto label_1ce76c;
            case 0x1CE770u: goto label_1ce770;
            case 0x1CE774u: goto label_1ce774;
            case 0x1CE778u: goto label_1ce778;
            case 0x1CE77Cu: goto label_1ce77c;
            case 0x1CE780u: goto label_1ce780;
            case 0x1CE784u: goto label_1ce784;
            case 0x1CE788u: goto label_1ce788;
            case 0x1CE78Cu: goto label_1ce78c;
            case 0x1CE790u: goto label_1ce790;
            case 0x1CE794u: goto label_1ce794;
            case 0x1CE798u: goto label_1ce798;
            case 0x1CE79Cu: goto label_1ce79c;
            case 0x1CE7A0u: goto label_1ce7a0;
            case 0x1CE7A4u: goto label_1ce7a4;
            case 0x1CE7A8u: goto label_1ce7a8;
            case 0x1CE7ACu: goto label_1ce7ac;
            case 0x1CE7B0u: goto label_1ce7b0;
            case 0x1CE7B4u: goto label_1ce7b4;
            case 0x1CE7B8u: goto label_1ce7b8;
            case 0x1CE7BCu: goto label_1ce7bc;
            case 0x1CE7C0u: goto label_1ce7c0;
            case 0x1CE7C4u: goto label_1ce7c4;
            case 0x1CE7C8u: goto label_1ce7c8;
            case 0x1CE7CCu: goto label_1ce7cc;
            case 0x1CE7D0u: goto label_1ce7d0;
            case 0x1CE7D4u: goto label_1ce7d4;
            case 0x1CE7D8u: goto label_1ce7d8;
            case 0x1CE7DCu: goto label_1ce7dc;
            case 0x1CE7E0u: goto label_1ce7e0;
            case 0x1CE7E4u: goto label_1ce7e4;
            case 0x1CE7E8u: goto label_1ce7e8;
            case 0x1CE7ECu: goto label_1ce7ec;
            case 0x1CE7F0u: goto label_1ce7f0;
            case 0x1CE7F4u: goto label_1ce7f4;
            case 0x1CE7F8u: goto label_1ce7f8;
            case 0x1CE7FCu: goto label_1ce7fc;
            case 0x1CE800u: goto label_1ce800;
            case 0x1CE804u: goto label_1ce804;
            case 0x1CE808u: goto label_1ce808;
            case 0x1CE80Cu: goto label_1ce80c;
            case 0x1CE810u: goto label_1ce810;
            case 0x1CE814u: goto label_1ce814;
            case 0x1CE818u: goto label_1ce818;
            case 0x1CE81Cu: goto label_1ce81c;
            case 0x1CE820u: goto label_1ce820;
            case 0x1CE824u: goto label_1ce824;
            case 0x1CE828u: goto label_1ce828;
            case 0x1CE82Cu: goto label_1ce82c;
            case 0x1CE830u: goto label_1ce830;
            case 0x1CE834u: goto label_1ce834;
            case 0x1CE838u: goto label_1ce838;
            case 0x1CE83Cu: goto label_1ce83c;
            case 0x1CE840u: goto label_1ce840;
            case 0x1CE844u: goto label_1ce844;
            case 0x1CE848u: goto label_1ce848;
            case 0x1CE84Cu: goto label_1ce84c;
            case 0x1CE850u: goto label_1ce850;
            case 0x1CE854u: goto label_1ce854;
            case 0x1CE858u: goto label_1ce858;
            case 0x1CE85Cu: goto label_1ce85c;
            case 0x1CE860u: goto label_1ce860;
            case 0x1CE864u: goto label_1ce864;
            case 0x1CE868u: goto label_1ce868;
            case 0x1CE86Cu: goto label_1ce86c;
            case 0x1CE870u: goto label_1ce870;
            case 0x1CE874u: goto label_1ce874;
            case 0x1CE878u: goto label_1ce878;
            case 0x1CE87Cu: goto label_1ce87c;
            case 0x1CE880u: goto label_1ce880;
            case 0x1CE884u: goto label_1ce884;
            case 0x1CE888u: goto label_1ce888;
            case 0x1CE88Cu: goto label_1ce88c;
            case 0x1CE890u: goto label_1ce890;
            case 0x1CE894u: goto label_1ce894;
            case 0x1CE898u: goto label_1ce898;
            case 0x1CE89Cu: goto label_1ce89c;
            case 0x1CE8A0u: goto label_1ce8a0;
            case 0x1CE8A4u: goto label_1ce8a4;
            case 0x1CE8A8u: goto label_1ce8a8;
            case 0x1CE8ACu: goto label_1ce8ac;
            case 0x1CE8B0u: goto label_1ce8b0;
            case 0x1CE8B4u: goto label_1ce8b4;
            case 0x1CE8B8u: goto label_1ce8b8;
            case 0x1CE8BCu: goto label_1ce8bc;
            case 0x1CE8C0u: goto label_1ce8c0;
            case 0x1CE8C4u: goto label_1ce8c4;
            case 0x1CE8C8u: goto label_1ce8c8;
            case 0x1CE8CCu: goto label_1ce8cc;
            case 0x1CE8D0u: goto label_1ce8d0;
            case 0x1CE8D4u: goto label_1ce8d4;
            case 0x1CE8D8u: goto label_1ce8d8;
            case 0x1CE8DCu: goto label_1ce8dc;
            case 0x1CE8E0u: goto label_1ce8e0;
            case 0x1CE8E4u: goto label_1ce8e4;
            case 0x1CE8E8u: goto label_1ce8e8;
            case 0x1CE8ECu: goto label_1ce8ec;
            case 0x1CE8F0u: goto label_1ce8f0;
            case 0x1CE8F4u: goto label_1ce8f4;
            case 0x1CE8F8u: goto label_1ce8f8;
            case 0x1CE8FCu: goto label_1ce8fc;
            case 0x1CE900u: goto label_1ce900;
            case 0x1CE904u: goto label_1ce904;
            case 0x1CE908u: goto label_1ce908;
            case 0x1CE90Cu: goto label_1ce90c;
            case 0x1CE910u: goto label_1ce910;
            case 0x1CE914u: goto label_1ce914;
            case 0x1CE918u: goto label_1ce918;
            case 0x1CE91Cu: goto label_1ce91c;
            case 0x1CE920u: goto label_1ce920;
            case 0x1CE924u: goto label_1ce924;
            case 0x1CE928u: goto label_1ce928;
            case 0x1CE92Cu: goto label_1ce92c;
            case 0x1CE930u: goto label_1ce930;
            case 0x1CE934u: goto label_1ce934;
            case 0x1CE938u: goto label_1ce938;
            case 0x1CE93Cu: goto label_1ce93c;
            case 0x1CE940u: goto label_1ce940;
            case 0x1CE944u: goto label_1ce944;
            case 0x1CE948u: goto label_1ce948;
            case 0x1CE94Cu: goto label_1ce94c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1ce948:
    ctx->pc = 0x1CE950u;
}

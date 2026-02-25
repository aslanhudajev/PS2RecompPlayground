#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_04Move
// Address: 0x1acf10 - 0x1ad588
void En6_04Move_0x1acf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_04Move_0x1acf10");
#endif

    ctx->pc = 0x1acf10u;

label_1acf10:
    // 0x1acf10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1acf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1acf14:
    // 0x1acf14: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1acf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1acf18:
    // 0x1acf18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1acf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1acf1c:
    // 0x1acf1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1acf1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1acf20:
    // 0x1acf20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1acf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1acf24:
    // 0x1acf24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acf24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1acf28:
    // 0x1acf28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1acf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1acf2c:
    // 0x1acf2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1acf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1acf30:
    // 0x1acf30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1acf30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1acf34:
    // 0x1acf34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1acf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1acf38:
    // 0x1acf38: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1acf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acf3c:
    // 0x1acf3c: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1acf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acf40:
    // 0x1acf40: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1acf40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1acf44:
    // 0x1acf44: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1acf44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1acf48:
    // 0x1acf48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1acf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1acf4c:
    // 0x1acf4c: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1acf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acf50:
    // 0x1acf50: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1acf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acf54:
    // 0x1acf54: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1acf54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1acf58:
    // 0x1acf58: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1acf58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1acf5c:
    // 0x1acf5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1acf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1acf60:
    // 0x1acf60: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1acf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acf64:
    // 0x1acf64: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1acf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acf68:
    // 0x1acf68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1acf68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1acf6c:
    // 0x1acf6c: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1acf6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1acf70:
    // 0x1acf70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1acf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1acf74:
    // 0x1acf74: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1acf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acf78:
    // 0x1acf78: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1acf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acf7c:
    // 0x1acf7c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1acf7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1acf80:
    // 0x1acf80: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1acf80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1acf84:
    // 0x1acf84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1acf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1acf88:
    // 0x1acf88: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1acf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acf8c:
    // 0x1acf8c: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1acf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acf90:
    // 0x1acf90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1acf90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1acf94:
    // 0x1acf94: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1acf94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1acf98:
    // 0x1acf98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1acf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1acf9c:
    // 0x1acf9c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1acf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acfa0:
    // 0x1acfa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1acfa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1acfa4:
    // 0x1acfa4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1acfa8:
    if (ctx->pc == 0x1ACFA8u) {
        ctx->pc = 0x1ACFA8u;
            // 0x1acfa8: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1ACFACu;
        goto label_1acfac;
    }
    ctx->pc = 0x1ACFA4u;
    {
        const bool branch_taken_0x1acfa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ACFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFA4u;
            // 0x1acfa8: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfa4) {
            ctx->pc = 0x1ACFC8u;
            goto label_1acfc8;
        }
    }
    ctx->pc = 0x1ACFACu;
label_1acfac:
    // 0x1acfac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1acfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1acfb0:
    // 0x1acfb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1acfb0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1acfb4:
    // 0x1acfb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acfb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1acfb8:
    // 0x1acfb8: 0x0  nop
    ctx->pc = 0x1acfb8u;
    // NOP
label_1acfbc:
    // 0x1acfbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1acfbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1acfc0:
    // 0x1acfc0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1acfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1acfc4:
    // 0x1acfc4: 0x0  nop
    ctx->pc = 0x1acfc4u;
    // NOP
label_1acfc8:
    // 0x1acfc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1acfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1acfcc:
    // 0x1acfcc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1acfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1acfd0:
    // 0x1acfd0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1acfd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1acfd4:
    // 0x1acfd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1acfd8:
    // 0x1acfd8: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1acfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acfdc:
    // 0x1acfdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1acfdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1acfe0:
    // 0x1acfe0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1acfe4:
    if (ctx->pc == 0x1ACFE4u) {
        ctx->pc = 0x1ACFE4u;
            // 0x1acfe4: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1ACFE8u;
        goto label_1acfe8;
    }
    ctx->pc = 0x1ACFE0u;
    {
        const bool branch_taken_0x1acfe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ACFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFE0u;
            // 0x1acfe4: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfe0) {
            ctx->pc = 0x1AD000u;
            goto label_1ad000;
        }
    }
    ctx->pc = 0x1ACFE8u;
label_1acfe8:
    // 0x1acfe8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1acfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1acfec:
    // 0x1acfec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1acfecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1acff0:
    // 0x1acff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1acff4:
    // 0x1acff4: 0x0  nop
    ctx->pc = 0x1acff4u;
    // NOP
label_1acff8:
    // 0x1acff8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1acff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1acffc:
    // 0x1acffc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1acffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ad000:
    // 0x1ad000: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ad000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad004:
    // 0x1ad004: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1ad004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1ad008:
    // 0x1ad008: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ad008u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ad00c:
    // 0x1ad00c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad010:
    // 0x1ad010: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1ad010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad014:
    // 0x1ad014: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ad014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ad018:
    // 0x1ad018: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ad01c:
    if (ctx->pc == 0x1AD01Cu) {
        ctx->pc = 0x1AD01Cu;
            // 0x1ad01c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1AD020u;
        goto label_1ad020;
    }
    ctx->pc = 0x1AD018u;
    {
        const bool branch_taken_0x1ad018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD018u;
            // 0x1ad01c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad018) {
            ctx->pc = 0x1AD038u;
            goto label_1ad038;
        }
    }
    ctx->pc = 0x1AD020u;
label_1ad020:
    // 0x1ad020: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ad020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ad024:
    // 0x1ad024: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ad024u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ad028:
    // 0x1ad028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad02c:
    // 0x1ad02c: 0x0  nop
    ctx->pc = 0x1ad02cu;
    // NOP
label_1ad030:
    // 0x1ad030: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ad030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ad034:
    // 0x1ad034: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ad034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ad038:
    // 0x1ad038: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ad038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad03c:
    // 0x1ad03c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ad03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1ad040:
    // 0x1ad040: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ad040u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ad044:
    // 0x1ad044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad048:
    // 0x1ad048: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1ad048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad04c:
    // 0x1ad04c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ad04cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ad050:
    // 0x1ad050: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1ad054:
    if (ctx->pc == 0x1AD054u) {
        ctx->pc = 0x1AD054u;
            // 0x1ad054: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1AD058u;
        goto label_1ad058;
    }
    ctx->pc = 0x1AD050u;
    {
        const bool branch_taken_0x1ad050 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD050u;
            // 0x1ad054: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad050) {
            ctx->pc = 0x1AD070u;
            goto label_1ad070;
        }
    }
    ctx->pc = 0x1AD058u;
label_1ad058:
    // 0x1ad058: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ad058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ad05c:
    // 0x1ad05c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ad05cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ad060:
    // 0x1ad060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad064:
    // 0x1ad064: 0x0  nop
    ctx->pc = 0x1ad064u;
    // NOP
label_1ad068:
    // 0x1ad068: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ad068u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ad06c:
    // 0x1ad06c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ad06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ad070:
    // 0x1ad070: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ad070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad074:
    // 0x1ad074: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1ad074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1ad078:
    // 0x1ad078: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ad078u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ad07c:
    // 0x1ad07c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad080:
    // 0x1ad080: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1ad080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad084:
    // 0x1ad084: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ad084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ad088:
    // 0x1ad088: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ad08c:
    if (ctx->pc == 0x1AD08Cu) {
        ctx->pc = 0x1AD08Cu;
            // 0x1ad08c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1AD090u;
        goto label_1ad090;
    }
    ctx->pc = 0x1AD088u;
    {
        const bool branch_taken_0x1ad088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD088u;
            // 0x1ad08c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad088) {
            ctx->pc = 0x1AD0A8u;
            goto label_1ad0a8;
        }
    }
    ctx->pc = 0x1AD090u;
label_1ad090:
    // 0x1ad090: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ad090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ad094:
    // 0x1ad094: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ad094u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ad098:
    // 0x1ad098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad09c:
    // 0x1ad09c: 0x0  nop
    ctx->pc = 0x1ad09cu;
    // NOP
label_1ad0a0:
    // 0x1ad0a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ad0a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ad0a4:
    // 0x1ad0a4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ad0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ad0a8:
    // 0x1ad0a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ad0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad0ac:
    // 0x1ad0ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ad0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1ad0b0:
    // 0x1ad0b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ad0b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ad0b4:
    // 0x1ad0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad0b8:
    // 0x1ad0b8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1ad0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad0bc:
    // 0x1ad0bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ad0bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ad0c0:
    // 0x1ad0c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1ad0c4:
    if (ctx->pc == 0x1AD0C4u) {
        ctx->pc = 0x1AD0C4u;
            // 0x1ad0c4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1AD0C8u;
        goto label_1ad0c8;
    }
    ctx->pc = 0x1AD0C0u;
    {
        const bool branch_taken_0x1ad0c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0C0u;
            // 0x1ad0c4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0c0) {
            ctx->pc = 0x1AD0E0u;
            goto label_1ad0e0;
        }
    }
    ctx->pc = 0x1AD0C8u;
label_1ad0c8:
    // 0x1ad0c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ad0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ad0cc:
    // 0x1ad0cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ad0ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ad0d0:
    // 0x1ad0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad0d4:
    // 0x1ad0d4: 0x0  nop
    ctx->pc = 0x1ad0d4u;
    // NOP
label_1ad0d8:
    // 0x1ad0d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ad0d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ad0dc:
    // 0x1ad0dc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ad0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ad0e0:
    // 0x1ad0e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ad0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad0e4:
    // 0x1ad0e4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1ad0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1ad0e8:
    // 0x1ad0e8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1ad0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ad0ec:
    // 0x1ad0ec: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1ad0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ad0f0:
    // 0x1ad0f0: 0xc06b564  jal         func_1AD590
label_1ad0f4:
    if (ctx->pc == 0x1AD0F4u) {
        ctx->pc = 0x1AD0F4u;
            // 0x1ad0f4: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->pc = 0x1AD0F8u;
        goto label_1ad0f8;
    }
    ctx->pc = 0x1AD0F0u;
    SET_GPR_U32(ctx, 31, 0x1AD0F8u);
    ctx->pc = 0x1AD0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0F0u;
            // 0x1ad0f4: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD590u;
    if (runtime->hasFunction(0x1AD590u)) {
        auto targetFn = runtime->lookupFunction(0x1AD590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0F8u; }
        if (ctx->pc != 0x1AD0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1ad590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0F8u; }
        if (ctx->pc != 0x1AD0F8u) { return; }
    }
    ctx->pc = 0x1AD0F8u;
label_1ad0f8:
    // 0x1ad0f8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ad0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1ad0fc:
    // 0x1ad0fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ad100:
    // 0x1ad100: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x1ad100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_1ad104:
    // 0x1ad104: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ad104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ad108:
    // 0x1ad108: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x1ad108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_1ad10c:
    // 0x1ad10c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1ad10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1ad110:
    // 0x1ad110: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1ad114:
    if (ctx->pc == 0x1AD114u) {
        ctx->pc = 0x1AD114u;
            // 0x1ad114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AD118u;
        goto label_1ad118;
    }
    ctx->pc = 0x1AD110u;
    {
        const bool branch_taken_0x1ad110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD110u;
            // 0x1ad114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad110) {
            ctx->pc = 0x1AD130u;
            goto label_1ad130;
        }
    }
    ctx->pc = 0x1AD118u;
label_1ad118:
    // 0x1ad118: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1ad11c:
    if (ctx->pc == 0x1AD11Cu) {
        ctx->pc = 0x1AD120u;
        goto label_1ad120;
    }
    ctx->pc = 0x1AD118u;
    {
        const bool branch_taken_0x1ad118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad118) {
            ctx->pc = 0x1AD130u;
            goto label_1ad130;
        }
    }
    ctx->pc = 0x1AD120u;
label_1ad120:
    // 0x1ad120: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
label_1ad124:
    if (ctx->pc == 0x1AD124u) {
        ctx->pc = 0x1AD128u;
        goto label_1ad128;
    }
    ctx->pc = 0x1AD120u;
    {
        const bool branch_taken_0x1ad120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad120) {
            ctx->pc = 0x1AD290u;
            goto label_1ad290;
        }
    }
    ctx->pc = 0x1AD128u;
label_1ad128:
    // 0x1ad128: 0x10000059  b           . + 4 + (0x59 << 2)
label_1ad12c:
    if (ctx->pc == 0x1AD12Cu) {
        ctx->pc = 0x1AD130u;
        goto label_1ad130;
    }
    ctx->pc = 0x1AD128u;
    {
        const bool branch_taken_0x1ad128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad128) {
            ctx->pc = 0x1AD290u;
            goto label_1ad290;
        }
    }
    ctx->pc = 0x1AD130u;
label_1ad130:
    // 0x1ad130: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ad130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad134:
    // 0x1ad134: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_1ad138:
    if (ctx->pc == 0x1AD138u) {
        ctx->pc = 0x1AD13Cu;
        goto label_1ad13c;
    }
    ctx->pc = 0x1AD134u;
    {
        const bool branch_taken_0x1ad134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ad134) {
            ctx->pc = 0x1AD158u;
            goto label_1ad158;
        }
    }
    ctx->pc = 0x1AD13Cu;
label_1ad13c:
    // 0x1ad13c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ad13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad140:
    // 0x1ad140: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x1ad140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1ad144:
    // 0x1ad144: 0xc071e64  jal         func_1C7990
label_1ad148:
    if (ctx->pc == 0x1AD148u) {
        ctx->pc = 0x1AD148u;
            // 0x1ad148: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->pc = 0x1AD14Cu;
        goto label_1ad14c;
    }
    ctx->pc = 0x1AD144u;
    SET_GPR_U32(ctx, 31, 0x1AD14Cu);
    ctx->pc = 0x1AD148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD144u;
            // 0x1ad148: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7990u;
    if (runtime->hasFunction(0x1C7990u)) {
        auto targetFn = runtime->lookupFunction(0x1C7990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD14Cu; }
        if (ctx->pc != 0x1AD14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStage6BossSuikomarePos_0x1c7990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD14Cu; }
        if (ctx->pc != 0x1AD14Cu) { return; }
    }
    ctx->pc = 0x1AD14Cu;
label_1ad14c:
    // 0x1ad14c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ad150:
    if (ctx->pc == 0x1AD150u) {
        ctx->pc = 0x1AD154u;
        goto label_1ad154;
    }
    ctx->pc = 0x1AD14Cu;
    {
        const bool branch_taken_0x1ad14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad14c) {
            ctx->pc = 0x1AD168u;
            goto label_1ad168;
        }
    }
    ctx->pc = 0x1AD154u;
label_1ad154:
    // 0x1ad154: 0x0  nop
    ctx->pc = 0x1ad154u;
    // NOP
label_1ad158:
    // 0x1ad158: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x1ad158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1ad15c:
    // 0x1ad15c: 0xc071e64  jal         func_1C7990
label_1ad160:
    if (ctx->pc == 0x1AD160u) {
        ctx->pc = 0x1AD160u;
            // 0x1ad160: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->pc = 0x1AD164u;
        goto label_1ad164;
    }
    ctx->pc = 0x1AD15Cu;
    SET_GPR_U32(ctx, 31, 0x1AD164u);
    ctx->pc = 0x1AD160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD15Cu;
            // 0x1ad160: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7990u;
    if (runtime->hasFunction(0x1C7990u)) {
        auto targetFn = runtime->lookupFunction(0x1C7990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD164u; }
        if (ctx->pc != 0x1AD164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStage6BossSuikomarePos_0x1c7990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD164u; }
        if (ctx->pc != 0x1AD164u) { return; }
    }
    ctx->pc = 0x1AD164u;
label_1ad164:
    // 0x1ad164: 0x0  nop
    ctx->pc = 0x1ad164u;
    // NOP
label_1ad168:
    // 0x1ad168: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x1ad168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1ad16c:
    // 0x1ad16c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ad16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1ad170:
    // 0x1ad170: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x1ad170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_1ad174:
    // 0x1ad174: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ad174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ad178:
    // 0x1ad178: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ad178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ad17c:
    // 0x1ad17c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1ad17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ad180:
    // 0x1ad180: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1ad180u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ad184:
    // 0x1ad184: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ad184u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad188:
    // 0x1ad188: 0x0  nop
    ctx->pc = 0x1ad188u;
    // NOP
label_1ad18c:
    // 0x1ad18c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ad190:
    // 0x1ad190: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1ad190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1ad194:
    // 0x1ad194: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1ad194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1ad198:
    // 0x1ad198: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ad198u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ad19c:
    // 0x1ad19c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad1a0:
    // 0x1ad1a0: 0x0  nop
    ctx->pc = 0x1ad1a0u;
    // NOP
label_1ad1a4:
    // 0x1ad1a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad1a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ad1a8:
    // 0x1ad1a8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1ad1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1ad1ac:
    // 0x1ad1ac: 0xc04b6ee  jal         func_12DBB8
label_1ad1b0:
    if (ctx->pc == 0x1AD1B0u) {
        ctx->pc = 0x1AD1B0u;
            // 0x1ad1b0: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x1AD1B4u;
        goto label_1ad1b4;
    }
    ctx->pc = 0x1AD1ACu;
    SET_GPR_U32(ctx, 31, 0x1AD1B4u);
    ctx->pc = 0x1AD1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1ACu;
            // 0x1ad1b0: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1B4u; }
        if (ctx->pc != 0x1AD1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1B4u; }
        if (ctx->pc != 0x1AD1B4u) { return; }
    }
    ctx->pc = 0x1AD1B4u;
label_1ad1b4:
    // 0x1ad1b4: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1ad1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ad1b8:
    // 0x1ad1b8: 0x3c033fa9  lui         $v1, 0x3FA9
    ctx->pc = 0x1ad1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16297 << 16));
label_1ad1bc:
    // 0x1ad1bc: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1ad1bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1ad1c0:
    // 0x1ad1c0: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x1ad1c0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
label_1ad1c4:
    // 0x1ad1c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ad1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1ad1c8:
    // 0x1ad1c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1ad1cc:
    // 0x1ad1cc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ad1ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1ad1d0:
    // 0x1ad1d0: 0xc040d72  jal         func_1035C8
label_1ad1d4:
    if (ctx->pc == 0x1AD1D4u) {
        ctx->pc = 0x1AD1D4u;
            // 0x1ad1d4: 0x439025  or          $s2, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1AD1D8u;
        goto label_1ad1d8;
    }
    ctx->pc = 0x1AD1D0u;
    SET_GPR_U32(ctx, 31, 0x1AD1D8u);
    ctx->pc = 0x1AD1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1D0u;
            // 0x1ad1d4: 0x439025  or          $s2, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1D8u; }
        if (ctx->pc != 0x1AD1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1D8u; }
        if (ctx->pc != 0x1AD1D8u) { return; }
    }
    ctx->pc = 0x1AD1D8u;
label_1ad1d8:
    // 0x1ad1d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ad1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ad1dc:
    // 0x1ad1dc: 0xc040880  jal         func_102200
label_1ad1e0:
    if (ctx->pc == 0x1AD1E0u) {
        ctx->pc = 0x1AD1E0u;
            // 0x1ad1e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD1E4u;
        goto label_1ad1e4;
    }
    ctx->pc = 0x1AD1DCu;
    SET_GPR_U32(ctx, 31, 0x1AD1E4u);
    ctx->pc = 0x1AD1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1DCu;
            // 0x1ad1e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1E4u; }
        if (ctx->pc != 0x1AD1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1E4u; }
        if (ctx->pc != 0x1AD1E4u) { return; }
    }
    ctx->pc = 0x1AD1E4u;
label_1ad1e4:
    // 0x1ad1e4: 0xc040a74  jal         func_1029D0
label_1ad1e8:
    if (ctx->pc == 0x1AD1E8u) {
        ctx->pc = 0x1AD1E8u;
            // 0x1ad1e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD1ECu;
        goto label_1ad1ec;
    }
    ctx->pc = 0x1AD1E4u;
    SET_GPR_U32(ctx, 31, 0x1AD1ECu);
    ctx->pc = 0x1AD1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1E4u;
            // 0x1ad1e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1ECu; }
        if (ctx->pc != 0x1AD1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1ECu; }
        if (ctx->pc != 0x1AD1ECu) { return; }
    }
    ctx->pc = 0x1AD1ECu;
label_1ad1ec:
    // 0x1ad1ec: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x1ad1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad1f0:
    // 0x1ad1f0: 0x3c023fa4  lui         $v0, 0x3FA4
    ctx->pc = 0x1ad1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16292 << 16));
label_1ad1f4:
    // 0x1ad1f4: 0x34437ae1  ori         $v1, $v0, 0x7AE1
    ctx->pc = 0x1ad1f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31457u)));
label_1ad1f8:
    // 0x1ad1f8: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x1ad1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_1ad1fc:
    // 0x1ad1fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1ad200:
    // 0x1ad200: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1ad200u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_1ad204:
    // 0x1ad204: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ad204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ad208:
    // 0x1ad208: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1ad208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_1ad20c:
    // 0x1ad20c: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x1ad20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ad210:
    // 0x1ad210: 0xc040d72  jal         func_1035C8
label_1ad214:
    if (ctx->pc == 0x1AD214u) {
        ctx->pc = 0x1AD214u;
            // 0x1ad214: 0x439025  or          $s2, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1AD218u;
        goto label_1ad218;
    }
    ctx->pc = 0x1AD210u;
    SET_GPR_U32(ctx, 31, 0x1AD218u);
    ctx->pc = 0x1AD214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD210u;
            // 0x1ad214: 0x439025  or          $s2, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD218u; }
        if (ctx->pc != 0x1AD218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD218u; }
        if (ctx->pc != 0x1AD218u) { return; }
    }
    ctx->pc = 0x1AD218u;
label_1ad218:
    // 0x1ad218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ad218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ad21c:
    // 0x1ad21c: 0xc040880  jal         func_102200
label_1ad220:
    if (ctx->pc == 0x1AD220u) {
        ctx->pc = 0x1AD220u;
            // 0x1ad220: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD224u;
        goto label_1ad224;
    }
    ctx->pc = 0x1AD21Cu;
    SET_GPR_U32(ctx, 31, 0x1AD224u);
    ctx->pc = 0x1AD220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD21Cu;
            // 0x1ad220: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD224u; }
        if (ctx->pc != 0x1AD224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD224u; }
        if (ctx->pc != 0x1AD224u) { return; }
    }
    ctx->pc = 0x1AD224u;
label_1ad224:
    // 0x1ad224: 0xc040a74  jal         func_1029D0
label_1ad228:
    if (ctx->pc == 0x1AD228u) {
        ctx->pc = 0x1AD228u;
            // 0x1ad228: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD22Cu;
        goto label_1ad22c;
    }
    ctx->pc = 0x1AD224u;
    SET_GPR_U32(ctx, 31, 0x1AD22Cu);
    ctx->pc = 0x1AD228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD224u;
            // 0x1ad228: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD22Cu; }
        if (ctx->pc != 0x1AD22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD22Cu; }
        if (ctx->pc != 0x1AD22Cu) { return; }
    }
    ctx->pc = 0x1AD22Cu;
label_1ad22c:
    // 0x1ad22c: 0xc62200d4  lwc1        $f2, 0xD4($s1)
    ctx->pc = 0x1ad22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ad230:
    // 0x1ad230: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1ad230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_1ad234:
    // 0x1ad234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ad238:
    // 0x1ad238: 0x0  nop
    ctx->pc = 0x1ad238u;
    // NOP
label_1ad23c:
    // 0x1ad23c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad23cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1ad240:
    // 0x1ad240: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x1ad240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
label_1ad244:
    // 0x1ad244: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ad244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad248:
    // 0x1ad248: 0xc62200d0  lwc1        $f2, 0xD0($s1)
    ctx->pc = 0x1ad248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ad24c:
    // 0x1ad24c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1ad24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad250:
    // 0x1ad250: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ad250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1ad254:
    // 0x1ad254: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1ad254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_1ad258:
    // 0x1ad258: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ad258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad25c:
    // 0x1ad25c: 0xc62200d4  lwc1        $f2, 0xD4($s1)
    ctx->pc = 0x1ad25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ad260:
    // 0x1ad260: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ad260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad264:
    // 0x1ad264: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ad264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1ad268:
    // 0x1ad268: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1ad268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1ad26c:
    // 0x1ad26c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1ad26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad270:
    // 0x1ad270: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ad270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ad274:
    // 0x1ad274: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1ad278:
    if (ctx->pc == 0x1AD278u) {
        ctx->pc = 0x1AD27Cu;
        goto label_1ad27c;
    }
    ctx->pc = 0x1AD274u;
    {
        const bool branch_taken_0x1ad274 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ad274) {
            ctx->pc = 0x1AD290u;
            goto label_1ad290;
        }
    }
    ctx->pc = 0x1AD27Cu;
label_1ad27c:
    // 0x1ad27c: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x1ad27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_1ad280:
    // 0x1ad280: 0x40f809  jalr        $v0
label_1ad284:
    if (ctx->pc == 0x1AD284u) {
        ctx->pc = 0x1AD284u;
            // 0x1ad284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD288u;
        goto label_1ad288;
    }
    ctx->pc = 0x1AD280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD288u);
        ctx->pc = 0x1AD284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD280u;
            // 0x1ad284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACF10u: goto label_1acf10;
            case 0x1ACF14u: goto label_1acf14;
            case 0x1ACF18u: goto label_1acf18;
            case 0x1ACF1Cu: goto label_1acf1c;
            case 0x1ACF20u: goto label_1acf20;
            case 0x1ACF24u: goto label_1acf24;
            case 0x1ACF28u: goto label_1acf28;
            case 0x1ACF2Cu: goto label_1acf2c;
            case 0x1ACF30u: goto label_1acf30;
            case 0x1ACF34u: goto label_1acf34;
            case 0x1ACF38u: goto label_1acf38;
            case 0x1ACF3Cu: goto label_1acf3c;
            case 0x1ACF40u: goto label_1acf40;
            case 0x1ACF44u: goto label_1acf44;
            case 0x1ACF48u: goto label_1acf48;
            case 0x1ACF4Cu: goto label_1acf4c;
            case 0x1ACF50u: goto label_1acf50;
            case 0x1ACF54u: goto label_1acf54;
            case 0x1ACF58u: goto label_1acf58;
            case 0x1ACF5Cu: goto label_1acf5c;
            case 0x1ACF60u: goto label_1acf60;
            case 0x1ACF64u: goto label_1acf64;
            case 0x1ACF68u: goto label_1acf68;
            case 0x1ACF6Cu: goto label_1acf6c;
            case 0x1ACF70u: goto label_1acf70;
            case 0x1ACF74u: goto label_1acf74;
            case 0x1ACF78u: goto label_1acf78;
            case 0x1ACF7Cu: goto label_1acf7c;
            case 0x1ACF80u: goto label_1acf80;
            case 0x1ACF84u: goto label_1acf84;
            case 0x1ACF88u: goto label_1acf88;
            case 0x1ACF8Cu: goto label_1acf8c;
            case 0x1ACF90u: goto label_1acf90;
            case 0x1ACF94u: goto label_1acf94;
            case 0x1ACF98u: goto label_1acf98;
            case 0x1ACF9Cu: goto label_1acf9c;
            case 0x1ACFA0u: goto label_1acfa0;
            case 0x1ACFA4u: goto label_1acfa4;
            case 0x1ACFA8u: goto label_1acfa8;
            case 0x1ACFACu: goto label_1acfac;
            case 0x1ACFB0u: goto label_1acfb0;
            case 0x1ACFB4u: goto label_1acfb4;
            case 0x1ACFB8u: goto label_1acfb8;
            case 0x1ACFBCu: goto label_1acfbc;
            case 0x1ACFC0u: goto label_1acfc0;
            case 0x1ACFC4u: goto label_1acfc4;
            case 0x1ACFC8u: goto label_1acfc8;
            case 0x1ACFCCu: goto label_1acfcc;
            case 0x1ACFD0u: goto label_1acfd0;
            case 0x1ACFD4u: goto label_1acfd4;
            case 0x1ACFD8u: goto label_1acfd8;
            case 0x1ACFDCu: goto label_1acfdc;
            case 0x1ACFE0u: goto label_1acfe0;
            case 0x1ACFE4u: goto label_1acfe4;
            case 0x1ACFE8u: goto label_1acfe8;
            case 0x1ACFECu: goto label_1acfec;
            case 0x1ACFF0u: goto label_1acff0;
            case 0x1ACFF4u: goto label_1acff4;
            case 0x1ACFF8u: goto label_1acff8;
            case 0x1ACFFCu: goto label_1acffc;
            case 0x1AD000u: goto label_1ad000;
            case 0x1AD004u: goto label_1ad004;
            case 0x1AD008u: goto label_1ad008;
            case 0x1AD00Cu: goto label_1ad00c;
            case 0x1AD010u: goto label_1ad010;
            case 0x1AD014u: goto label_1ad014;
            case 0x1AD018u: goto label_1ad018;
            case 0x1AD01Cu: goto label_1ad01c;
            case 0x1AD020u: goto label_1ad020;
            case 0x1AD024u: goto label_1ad024;
            case 0x1AD028u: goto label_1ad028;
            case 0x1AD02Cu: goto label_1ad02c;
            case 0x1AD030u: goto label_1ad030;
            case 0x1AD034u: goto label_1ad034;
            case 0x1AD038u: goto label_1ad038;
            case 0x1AD03Cu: goto label_1ad03c;
            case 0x1AD040u: goto label_1ad040;
            case 0x1AD044u: goto label_1ad044;
            case 0x1AD048u: goto label_1ad048;
            case 0x1AD04Cu: goto label_1ad04c;
            case 0x1AD050u: goto label_1ad050;
            case 0x1AD054u: goto label_1ad054;
            case 0x1AD058u: goto label_1ad058;
            case 0x1AD05Cu: goto label_1ad05c;
            case 0x1AD060u: goto label_1ad060;
            case 0x1AD064u: goto label_1ad064;
            case 0x1AD068u: goto label_1ad068;
            case 0x1AD06Cu: goto label_1ad06c;
            case 0x1AD070u: goto label_1ad070;
            case 0x1AD074u: goto label_1ad074;
            case 0x1AD078u: goto label_1ad078;
            case 0x1AD07Cu: goto label_1ad07c;
            case 0x1AD080u: goto label_1ad080;
            case 0x1AD084u: goto label_1ad084;
            case 0x1AD088u: goto label_1ad088;
            case 0x1AD08Cu: goto label_1ad08c;
            case 0x1AD090u: goto label_1ad090;
            case 0x1AD094u: goto label_1ad094;
            case 0x1AD098u: goto label_1ad098;
            case 0x1AD09Cu: goto label_1ad09c;
            case 0x1AD0A0u: goto label_1ad0a0;
            case 0x1AD0A4u: goto label_1ad0a4;
            case 0x1AD0A8u: goto label_1ad0a8;
            case 0x1AD0ACu: goto label_1ad0ac;
            case 0x1AD0B0u: goto label_1ad0b0;
            case 0x1AD0B4u: goto label_1ad0b4;
            case 0x1AD0B8u: goto label_1ad0b8;
            case 0x1AD0BCu: goto label_1ad0bc;
            case 0x1AD0C0u: goto label_1ad0c0;
            case 0x1AD0C4u: goto label_1ad0c4;
            case 0x1AD0C8u: goto label_1ad0c8;
            case 0x1AD0CCu: goto label_1ad0cc;
            case 0x1AD0D0u: goto label_1ad0d0;
            case 0x1AD0D4u: goto label_1ad0d4;
            case 0x1AD0D8u: goto label_1ad0d8;
            case 0x1AD0DCu: goto label_1ad0dc;
            case 0x1AD0E0u: goto label_1ad0e0;
            case 0x1AD0E4u: goto label_1ad0e4;
            case 0x1AD0E8u: goto label_1ad0e8;
            case 0x1AD0ECu: goto label_1ad0ec;
            case 0x1AD0F0u: goto label_1ad0f0;
            case 0x1AD0F4u: goto label_1ad0f4;
            case 0x1AD0F8u: goto label_1ad0f8;
            case 0x1AD0FCu: goto label_1ad0fc;
            case 0x1AD100u: goto label_1ad100;
            case 0x1AD104u: goto label_1ad104;
            case 0x1AD108u: goto label_1ad108;
            case 0x1AD10Cu: goto label_1ad10c;
            case 0x1AD110u: goto label_1ad110;
            case 0x1AD114u: goto label_1ad114;
            case 0x1AD118u: goto label_1ad118;
            case 0x1AD11Cu: goto label_1ad11c;
            case 0x1AD120u: goto label_1ad120;
            case 0x1AD124u: goto label_1ad124;
            case 0x1AD128u: goto label_1ad128;
            case 0x1AD12Cu: goto label_1ad12c;
            case 0x1AD130u: goto label_1ad130;
            case 0x1AD134u: goto label_1ad134;
            case 0x1AD138u: goto label_1ad138;
            case 0x1AD13Cu: goto label_1ad13c;
            case 0x1AD140u: goto label_1ad140;
            case 0x1AD144u: goto label_1ad144;
            case 0x1AD148u: goto label_1ad148;
            case 0x1AD14Cu: goto label_1ad14c;
            case 0x1AD150u: goto label_1ad150;
            case 0x1AD154u: goto label_1ad154;
            case 0x1AD158u: goto label_1ad158;
            case 0x1AD15Cu: goto label_1ad15c;
            case 0x1AD160u: goto label_1ad160;
            case 0x1AD164u: goto label_1ad164;
            case 0x1AD168u: goto label_1ad168;
            case 0x1AD16Cu: goto label_1ad16c;
            case 0x1AD170u: goto label_1ad170;
            case 0x1AD174u: goto label_1ad174;
            case 0x1AD178u: goto label_1ad178;
            case 0x1AD17Cu: goto label_1ad17c;
            case 0x1AD180u: goto label_1ad180;
            case 0x1AD184u: goto label_1ad184;
            case 0x1AD188u: goto label_1ad188;
            case 0x1AD18Cu: goto label_1ad18c;
            case 0x1AD190u: goto label_1ad190;
            case 0x1AD194u: goto label_1ad194;
            case 0x1AD198u: goto label_1ad198;
            case 0x1AD19Cu: goto label_1ad19c;
            case 0x1AD1A0u: goto label_1ad1a0;
            case 0x1AD1A4u: goto label_1ad1a4;
            case 0x1AD1A8u: goto label_1ad1a8;
            case 0x1AD1ACu: goto label_1ad1ac;
            case 0x1AD1B0u: goto label_1ad1b0;
            case 0x1AD1B4u: goto label_1ad1b4;
            case 0x1AD1B8u: goto label_1ad1b8;
            case 0x1AD1BCu: goto label_1ad1bc;
            case 0x1AD1C0u: goto label_1ad1c0;
            case 0x1AD1C4u: goto label_1ad1c4;
            case 0x1AD1C8u: goto label_1ad1c8;
            case 0x1AD1CCu: goto label_1ad1cc;
            case 0x1AD1D0u: goto label_1ad1d0;
            case 0x1AD1D4u: goto label_1ad1d4;
            case 0x1AD1D8u: goto label_1ad1d8;
            case 0x1AD1DCu: goto label_1ad1dc;
            case 0x1AD1E0u: goto label_1ad1e0;
            case 0x1AD1E4u: goto label_1ad1e4;
            case 0x1AD1E8u: goto label_1ad1e8;
            case 0x1AD1ECu: goto label_1ad1ec;
            case 0x1AD1F0u: goto label_1ad1f0;
            case 0x1AD1F4u: goto label_1ad1f4;
            case 0x1AD1F8u: goto label_1ad1f8;
            case 0x1AD1FCu: goto label_1ad1fc;
            case 0x1AD200u: goto label_1ad200;
            case 0x1AD204u: goto label_1ad204;
            case 0x1AD208u: goto label_1ad208;
            case 0x1AD20Cu: goto label_1ad20c;
            case 0x1AD210u: goto label_1ad210;
            case 0x1AD214u: goto label_1ad214;
            case 0x1AD218u: goto label_1ad218;
            case 0x1AD21Cu: goto label_1ad21c;
            case 0x1AD220u: goto label_1ad220;
            case 0x1AD224u: goto label_1ad224;
            case 0x1AD228u: goto label_1ad228;
            case 0x1AD22Cu: goto label_1ad22c;
            case 0x1AD230u: goto label_1ad230;
            case 0x1AD234u: goto label_1ad234;
            case 0x1AD238u: goto label_1ad238;
            case 0x1AD23Cu: goto label_1ad23c;
            case 0x1AD240u: goto label_1ad240;
            case 0x1AD244u: goto label_1ad244;
            case 0x1AD248u: goto label_1ad248;
            case 0x1AD24Cu: goto label_1ad24c;
            case 0x1AD250u: goto label_1ad250;
            case 0x1AD254u: goto label_1ad254;
            case 0x1AD258u: goto label_1ad258;
            case 0x1AD25Cu: goto label_1ad25c;
            case 0x1AD260u: goto label_1ad260;
            case 0x1AD264u: goto label_1ad264;
            case 0x1AD268u: goto label_1ad268;
            case 0x1AD26Cu: goto label_1ad26c;
            case 0x1AD270u: goto label_1ad270;
            case 0x1AD274u: goto label_1ad274;
            case 0x1AD278u: goto label_1ad278;
            case 0x1AD27Cu: goto label_1ad27c;
            case 0x1AD280u: goto label_1ad280;
            case 0x1AD284u: goto label_1ad284;
            case 0x1AD288u: goto label_1ad288;
            case 0x1AD28Cu: goto label_1ad28c;
            case 0x1AD290u: goto label_1ad290;
            case 0x1AD294u: goto label_1ad294;
            case 0x1AD298u: goto label_1ad298;
            case 0x1AD29Cu: goto label_1ad29c;
            case 0x1AD2A0u: goto label_1ad2a0;
            case 0x1AD2A4u: goto label_1ad2a4;
            case 0x1AD2A8u: goto label_1ad2a8;
            case 0x1AD2ACu: goto label_1ad2ac;
            case 0x1AD2B0u: goto label_1ad2b0;
            case 0x1AD2B4u: goto label_1ad2b4;
            case 0x1AD2B8u: goto label_1ad2b8;
            case 0x1AD2BCu: goto label_1ad2bc;
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2C4u: goto label_1ad2c4;
            case 0x1AD2C8u: goto label_1ad2c8;
            case 0x1AD2CCu: goto label_1ad2cc;
            case 0x1AD2D0u: goto label_1ad2d0;
            case 0x1AD2D4u: goto label_1ad2d4;
            case 0x1AD2D8u: goto label_1ad2d8;
            case 0x1AD2DCu: goto label_1ad2dc;
            case 0x1AD2E0u: goto label_1ad2e0;
            case 0x1AD2E4u: goto label_1ad2e4;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD2F0u: goto label_1ad2f0;
            case 0x1AD2F4u: goto label_1ad2f4;
            case 0x1AD2F8u: goto label_1ad2f8;
            case 0x1AD2FCu: goto label_1ad2fc;
            case 0x1AD300u: goto label_1ad300;
            case 0x1AD304u: goto label_1ad304;
            case 0x1AD308u: goto label_1ad308;
            case 0x1AD30Cu: goto label_1ad30c;
            case 0x1AD310u: goto label_1ad310;
            case 0x1AD314u: goto label_1ad314;
            case 0x1AD318u: goto label_1ad318;
            case 0x1AD31Cu: goto label_1ad31c;
            case 0x1AD320u: goto label_1ad320;
            case 0x1AD324u: goto label_1ad324;
            case 0x1AD328u: goto label_1ad328;
            case 0x1AD32Cu: goto label_1ad32c;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD334u: goto label_1ad334;
            case 0x1AD338u: goto label_1ad338;
            case 0x1AD33Cu: goto label_1ad33c;
            case 0x1AD340u: goto label_1ad340;
            case 0x1AD344u: goto label_1ad344;
            case 0x1AD348u: goto label_1ad348;
            case 0x1AD34Cu: goto label_1ad34c;
            case 0x1AD350u: goto label_1ad350;
            case 0x1AD354u: goto label_1ad354;
            case 0x1AD358u: goto label_1ad358;
            case 0x1AD35Cu: goto label_1ad35c;
            case 0x1AD360u: goto label_1ad360;
            case 0x1AD364u: goto label_1ad364;
            case 0x1AD368u: goto label_1ad368;
            case 0x1AD36Cu: goto label_1ad36c;
            case 0x1AD370u: goto label_1ad370;
            case 0x1AD374u: goto label_1ad374;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD37Cu: goto label_1ad37c;
            case 0x1AD380u: goto label_1ad380;
            case 0x1AD384u: goto label_1ad384;
            case 0x1AD388u: goto label_1ad388;
            case 0x1AD38Cu: goto label_1ad38c;
            case 0x1AD390u: goto label_1ad390;
            case 0x1AD394u: goto label_1ad394;
            case 0x1AD398u: goto label_1ad398;
            case 0x1AD39Cu: goto label_1ad39c;
            case 0x1AD3A0u: goto label_1ad3a0;
            case 0x1AD3A4u: goto label_1ad3a4;
            case 0x1AD3A8u: goto label_1ad3a8;
            case 0x1AD3ACu: goto label_1ad3ac;
            case 0x1AD3B0u: goto label_1ad3b0;
            case 0x1AD3B4u: goto label_1ad3b4;
            case 0x1AD3B8u: goto label_1ad3b8;
            case 0x1AD3BCu: goto label_1ad3bc;
            case 0x1AD3C0u: goto label_1ad3c0;
            case 0x1AD3C4u: goto label_1ad3c4;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD3CCu: goto label_1ad3cc;
            case 0x1AD3D0u: goto label_1ad3d0;
            case 0x1AD3D4u: goto label_1ad3d4;
            case 0x1AD3D8u: goto label_1ad3d8;
            case 0x1AD3DCu: goto label_1ad3dc;
            case 0x1AD3E0u: goto label_1ad3e0;
            case 0x1AD3E4u: goto label_1ad3e4;
            case 0x1AD3E8u: goto label_1ad3e8;
            case 0x1AD3ECu: goto label_1ad3ec;
            case 0x1AD3F0u: goto label_1ad3f0;
            case 0x1AD3F4u: goto label_1ad3f4;
            case 0x1AD3F8u: goto label_1ad3f8;
            case 0x1AD3FCu: goto label_1ad3fc;
            case 0x1AD400u: goto label_1ad400;
            case 0x1AD404u: goto label_1ad404;
            case 0x1AD408u: goto label_1ad408;
            case 0x1AD40Cu: goto label_1ad40c;
            case 0x1AD410u: goto label_1ad410;
            case 0x1AD414u: goto label_1ad414;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD41Cu: goto label_1ad41c;
            case 0x1AD420u: goto label_1ad420;
            case 0x1AD424u: goto label_1ad424;
            case 0x1AD428u: goto label_1ad428;
            case 0x1AD42Cu: goto label_1ad42c;
            case 0x1AD430u: goto label_1ad430;
            case 0x1AD434u: goto label_1ad434;
            case 0x1AD438u: goto label_1ad438;
            case 0x1AD43Cu: goto label_1ad43c;
            case 0x1AD440u: goto label_1ad440;
            case 0x1AD444u: goto label_1ad444;
            case 0x1AD448u: goto label_1ad448;
            case 0x1AD44Cu: goto label_1ad44c;
            case 0x1AD450u: goto label_1ad450;
            case 0x1AD454u: goto label_1ad454;
            case 0x1AD458u: goto label_1ad458;
            case 0x1AD45Cu: goto label_1ad45c;
            case 0x1AD460u: goto label_1ad460;
            case 0x1AD464u: goto label_1ad464;
            case 0x1AD468u: goto label_1ad468;
            case 0x1AD46Cu: goto label_1ad46c;
            case 0x1AD470u: goto label_1ad470;
            case 0x1AD474u: goto label_1ad474;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD47Cu: goto label_1ad47c;
            case 0x1AD480u: goto label_1ad480;
            case 0x1AD484u: goto label_1ad484;
            case 0x1AD488u: goto label_1ad488;
            case 0x1AD48Cu: goto label_1ad48c;
            case 0x1AD490u: goto label_1ad490;
            case 0x1AD494u: goto label_1ad494;
            case 0x1AD498u: goto label_1ad498;
            case 0x1AD49Cu: goto label_1ad49c;
            case 0x1AD4A0u: goto label_1ad4a0;
            case 0x1AD4A4u: goto label_1ad4a4;
            case 0x1AD4A8u: goto label_1ad4a8;
            case 0x1AD4ACu: goto label_1ad4ac;
            case 0x1AD4B0u: goto label_1ad4b0;
            case 0x1AD4B4u: goto label_1ad4b4;
            case 0x1AD4B8u: goto label_1ad4b8;
            case 0x1AD4BCu: goto label_1ad4bc;
            case 0x1AD4C0u: goto label_1ad4c0;
            case 0x1AD4C4u: goto label_1ad4c4;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD4CCu: goto label_1ad4cc;
            case 0x1AD4D0u: goto label_1ad4d0;
            case 0x1AD4D4u: goto label_1ad4d4;
            case 0x1AD4D8u: goto label_1ad4d8;
            case 0x1AD4DCu: goto label_1ad4dc;
            case 0x1AD4E0u: goto label_1ad4e0;
            case 0x1AD4E4u: goto label_1ad4e4;
            case 0x1AD4E8u: goto label_1ad4e8;
            case 0x1AD4ECu: goto label_1ad4ec;
            case 0x1AD4F0u: goto label_1ad4f0;
            case 0x1AD4F4u: goto label_1ad4f4;
            case 0x1AD4F8u: goto label_1ad4f8;
            case 0x1AD4FCu: goto label_1ad4fc;
            case 0x1AD500u: goto label_1ad500;
            case 0x1AD504u: goto label_1ad504;
            case 0x1AD508u: goto label_1ad508;
            case 0x1AD50Cu: goto label_1ad50c;
            case 0x1AD510u: goto label_1ad510;
            case 0x1AD514u: goto label_1ad514;
            case 0x1AD518u: goto label_1ad518;
            case 0x1AD51Cu: goto label_1ad51c;
            case 0x1AD520u: goto label_1ad520;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD528u: goto label_1ad528;
            case 0x1AD52Cu: goto label_1ad52c;
            case 0x1AD530u: goto label_1ad530;
            case 0x1AD534u: goto label_1ad534;
            case 0x1AD538u: goto label_1ad538;
            case 0x1AD53Cu: goto label_1ad53c;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD544u: goto label_1ad544;
            case 0x1AD548u: goto label_1ad548;
            case 0x1AD54Cu: goto label_1ad54c;
            case 0x1AD550u: goto label_1ad550;
            case 0x1AD554u: goto label_1ad554;
            case 0x1AD558u: goto label_1ad558;
            case 0x1AD55Cu: goto label_1ad55c;
            case 0x1AD560u: goto label_1ad560;
            case 0x1AD564u: goto label_1ad564;
            case 0x1AD568u: goto label_1ad568;
            case 0x1AD56Cu: goto label_1ad56c;
            case 0x1AD570u: goto label_1ad570;
            case 0x1AD574u: goto label_1ad574;
            case 0x1AD578u: goto label_1ad578;
            case 0x1AD57Cu: goto label_1ad57c;
            case 0x1AD580u: goto label_1ad580;
            case 0x1AD584u: goto label_1ad584;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD288u; }
            if (ctx->pc != 0x1AD288u) { return; }
        }
    }
    ctx->pc = 0x1AD288u;
label_1ad288:
    // 0x1ad288: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_1ad28c:
    if (ctx->pc == 0x1AD28Cu) {
        ctx->pc = 0x1AD290u;
        goto label_1ad290;
    }
    ctx->pc = 0x1AD288u;
    {
        const bool branch_taken_0x1ad288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad288) {
            ctx->pc = 0x1AD570u;
            goto label_1ad570;
        }
    }
    ctx->pc = 0x1AD290u;
label_1ad290:
    // 0x1ad290: 0xc04b788  jal         func_12DE20
label_1ad294:
    if (ctx->pc == 0x1AD294u) {
        ctx->pc = 0x1AD294u;
            // 0x1ad294: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1AD298u;
        goto label_1ad298;
    }
    ctx->pc = 0x1AD290u;
    SET_GPR_U32(ctx, 31, 0x1AD298u);
    ctx->pc = 0x1AD294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD290u;
            // 0x1ad294: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD298u; }
        if (ctx->pc != 0x1AD298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD298u; }
        if (ctx->pc != 0x1AD298u) { return; }
    }
    ctx->pc = 0x1AD298u;
label_1ad298:
    // 0x1ad298: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ad298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad29c:
    // 0x1ad29c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1ad29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ad2a0:
    // 0x1ad2a0: 0xc04b7da  jal         func_12DF68
label_1ad2a4:
    if (ctx->pc == 0x1AD2A4u) {
        ctx->pc = 0x1AD2A4u;
            // 0x1ad2a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2A8u;
        goto label_1ad2a8;
    }
    ctx->pc = 0x1AD2A0u;
    SET_GPR_U32(ctx, 31, 0x1AD2A8u);
    ctx->pc = 0x1AD2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2A0u;
            // 0x1ad2a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2A8u; }
        if (ctx->pc != 0x1AD2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2A8u; }
        if (ctx->pc != 0x1AD2A8u) { return; }
    }
    ctx->pc = 0x1AD2A8u;
label_1ad2a8:
    // 0x1ad2a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ad2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad2ac:
    // 0x1ad2ac: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1ad2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ad2b0:
    // 0x1ad2b0: 0xc04b804  jal         func_12E010
label_1ad2b4:
    if (ctx->pc == 0x1AD2B4u) {
        ctx->pc = 0x1AD2B4u;
            // 0x1ad2b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2B8u;
        goto label_1ad2b8;
    }
    ctx->pc = 0x1AD2B0u;
    SET_GPR_U32(ctx, 31, 0x1AD2B8u);
    ctx->pc = 0x1AD2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2B0u;
            // 0x1ad2b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2B8u; }
        if (ctx->pc != 0x1AD2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2B8u; }
        if (ctx->pc != 0x1AD2B8u) { return; }
    }
    ctx->pc = 0x1AD2B8u;
label_1ad2b8:
    // 0x1ad2b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ad2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad2bc:
    // 0x1ad2bc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1ad2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ad2c0:
    // 0x1ad2c0: 0xc04b7b0  jal         func_12DEC0
label_1ad2c4:
    if (ctx->pc == 0x1AD2C4u) {
        ctx->pc = 0x1AD2C4u;
            // 0x1ad2c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2C8u;
        goto label_1ad2c8;
    }
    ctx->pc = 0x1AD2C0u;
    SET_GPR_U32(ctx, 31, 0x1AD2C8u);
    ctx->pc = 0x1AD2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2C0u;
            // 0x1ad2c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2C8u; }
        if (ctx->pc != 0x1AD2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2C8u; }
        if (ctx->pc != 0x1AD2C8u) { return; }
    }
    ctx->pc = 0x1AD2C8u;
label_1ad2c8:
    // 0x1ad2c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ad2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad2cc:
    // 0x1ad2cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ad2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ad2d0:
    // 0x1ad2d0: 0xc04b75e  jal         func_12DD78
label_1ad2d4:
    if (ctx->pc == 0x1AD2D4u) {
        ctx->pc = 0x1AD2D4u;
            // 0x1ad2d4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1AD2D8u;
        goto label_1ad2d8;
    }
    ctx->pc = 0x1AD2D0u;
    SET_GPR_U32(ctx, 31, 0x1AD2D8u);
    ctx->pc = 0x1AD2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2D0u;
            // 0x1ad2d4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2D8u; }
        if (ctx->pc != 0x1AD2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2D8u; }
        if (ctx->pc != 0x1AD2D8u) { return; }
    }
    ctx->pc = 0x1AD2D8u;
label_1ad2d8:
    // 0x1ad2d8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ad2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ad2dc:
    // 0x1ad2dc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1ad2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1ad2e0:
    // 0x1ad2e0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ad2e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ad2e4:
    // 0x1ad2e4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1ad2e8:
    if (ctx->pc == 0x1AD2E8u) {
        ctx->pc = 0x1AD2ECu;
        goto label_1ad2ec;
    }
    ctx->pc = 0x1AD2E4u;
    {
        const bool branch_taken_0x1ad2e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad2e4) {
            ctx->pc = 0x1AD338u;
            goto label_1ad338;
        }
    }
    ctx->pc = 0x1AD2ECu;
label_1ad2ec:
    // 0x1ad2ec: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1ad2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_1ad2f0:
    // 0x1ad2f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ad2f4:
    if (ctx->pc == 0x1AD2F4u) {
        ctx->pc = 0x1AD2F8u;
        goto label_1ad2f8;
    }
    ctx->pc = 0x1AD2F0u;
    {
        const bool branch_taken_0x1ad2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad2f0) {
            ctx->pc = 0x1AD308u;
            goto label_1ad308;
        }
    }
    ctx->pc = 0x1AD2F8u;
label_1ad2f8:
    // 0x1ad2f8: 0xc0604f0  jal         func_1813C0
label_1ad2fc:
    if (ctx->pc == 0x1AD2FCu) {
        ctx->pc = 0x1AD2FCu;
            // 0x1ad2fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1AD300u;
        goto label_1ad300;
    }
    ctx->pc = 0x1AD2F8u;
    SET_GPR_U32(ctx, 31, 0x1AD300u);
    ctx->pc = 0x1AD2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2F8u;
            // 0x1ad2fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD300u; }
        if (ctx->pc != 0x1AD300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD300u; }
        if (ctx->pc != 0x1AD300u) { return; }
    }
    ctx->pc = 0x1AD300u;
label_1ad300:
    // 0x1ad300: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ad304:
    if (ctx->pc == 0x1AD304u) {
        ctx->pc = 0x1AD308u;
        goto label_1ad308;
    }
    ctx->pc = 0x1AD300u;
    {
        const bool branch_taken_0x1ad300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad300) {
            ctx->pc = 0x1AD310u;
            goto label_1ad310;
        }
    }
    ctx->pc = 0x1AD308u;
label_1ad308:
    // 0x1ad308: 0xc0604dc  jal         func_181370
label_1ad30c:
    if (ctx->pc == 0x1AD30Cu) {
        ctx->pc = 0x1AD30Cu;
            // 0x1ad30c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1AD310u;
        goto label_1ad310;
    }
    ctx->pc = 0x1AD308u;
    SET_GPR_U32(ctx, 31, 0x1AD310u);
    ctx->pc = 0x1AD30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD308u;
            // 0x1ad30c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD310u; }
        if (ctx->pc != 0x1AD310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD310u; }
        if (ctx->pc != 0x1AD310u) { return; }
    }
    ctx->pc = 0x1AD310u;
label_1ad310:
    // 0x1ad310: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1ad310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_1ad314:
    // 0x1ad314: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ad318:
    if (ctx->pc == 0x1AD318u) {
        ctx->pc = 0x1AD31Cu;
        goto label_1ad31c;
    }
    ctx->pc = 0x1AD314u;
    {
        const bool branch_taken_0x1ad314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad314) {
            ctx->pc = 0x1AD328u;
            goto label_1ad328;
        }
    }
    ctx->pc = 0x1AD31Cu;
label_1ad31c:
    // 0x1ad31c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ad320:
    if (ctx->pc == 0x1AD320u) {
        ctx->pc = 0x1AD320u;
            // 0x1ad320: 0xae200110  sw          $zero, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1AD324u;
        goto label_1ad324;
    }
    ctx->pc = 0x1AD31Cu;
    {
        const bool branch_taken_0x1ad31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD31Cu;
            // 0x1ad320: 0xae200110  sw          $zero, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad31c) {
            ctx->pc = 0x1AD348u;
            goto label_1ad348;
        }
    }
    ctx->pc = 0x1AD324u;
label_1ad324:
    // 0x1ad324: 0x0  nop
    ctx->pc = 0x1ad324u;
    // NOP
label_1ad328:
    // 0x1ad328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad32c:
    // 0x1ad32c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ad330:
    if (ctx->pc == 0x1AD330u) {
        ctx->pc = 0x1AD330u;
            // 0x1ad330: 0xae220110  sw          $v0, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1AD334u;
        goto label_1ad334;
    }
    ctx->pc = 0x1AD32Cu;
    {
        const bool branch_taken_0x1ad32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD32Cu;
            // 0x1ad330: 0xae220110  sw          $v0, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad32c) {
            ctx->pc = 0x1AD348u;
            goto label_1ad348;
        }
    }
    ctx->pc = 0x1AD334u;
label_1ad334:
    // 0x1ad334: 0x0  nop
    ctx->pc = 0x1ad334u;
    // NOP
label_1ad338:
    // 0x1ad338: 0xc0604dc  jal         func_181370
label_1ad33c:
    if (ctx->pc == 0x1AD33Cu) {
        ctx->pc = 0x1AD33Cu;
            // 0x1ad33c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1AD340u;
        goto label_1ad340;
    }
    ctx->pc = 0x1AD338u;
    SET_GPR_U32(ctx, 31, 0x1AD340u);
    ctx->pc = 0x1AD33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD338u;
            // 0x1ad33c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD340u; }
        if (ctx->pc != 0x1AD340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD340u; }
        if (ctx->pc != 0x1AD340u) { return; }
    }
    ctx->pc = 0x1AD340u;
label_1ad340:
    // 0x1ad340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad344:
    // 0x1ad344: 0xae220110  sw          $v0, 0x110($s1)
    ctx->pc = 0x1ad344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
label_1ad348:
    // 0x1ad348: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ad348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ad34c:
    // 0x1ad34c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1ad34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1ad350:
    // 0x1ad350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ad354:
    // 0x1ad354: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1ad354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1ad358:
    // 0x1ad358: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1ad358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1ad35c:
    // 0x1ad35c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1ad35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1ad360:
    // 0x1ad360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad364:
    // 0x1ad364: 0x0  nop
    ctx->pc = 0x1ad364u;
    // NOP
label_1ad368:
    // 0x1ad368: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ad36c:
    // 0x1ad36c: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x1ad36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_1ad370:
    // 0x1ad370: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1ad370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1ad374:
    // 0x1ad374: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1ad374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1ad378:
    // 0x1ad378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad37c:
    // 0x1ad37c: 0x0  nop
    ctx->pc = 0x1ad37cu;
    // NOP
label_1ad380:
    // 0x1ad380: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ad384:
    // 0x1ad384: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x1ad384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_1ad388:
    // 0x1ad388: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1ad388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1ad38c:
    // 0x1ad38c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ad390:
    // 0x1ad390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad394:
    // 0x1ad394: 0x0  nop
    ctx->pc = 0x1ad394u;
    // NOP
label_1ad398:
    // 0x1ad398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ad39c:
    // 0x1ad39c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1ad39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_1ad3a0:
    // 0x1ad3a0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1ad3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1ad3a4:
    // 0x1ad3a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ad3a8:
    // 0x1ad3a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad3a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad3ac:
    // 0x1ad3ac: 0x0  nop
    ctx->pc = 0x1ad3acu;
    // NOP
label_1ad3b0:
    // 0x1ad3b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad3b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ad3b4:
    // 0x1ad3b4: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x1ad3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_1ad3b8:
    // 0x1ad3b8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1ad3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1ad3bc:
    // 0x1ad3bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ad3c0:
    // 0x1ad3c0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1ad3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_1ad3c4:
    // 0x1ad3c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ad3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad3c8:
    // 0x1ad3c8: 0xc4630124  lwc1        $f3, 0x124($v1)
    ctx->pc = 0x1ad3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ad3cc:
    // 0x1ad3cc: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1ad3ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ad3d0:
    // 0x1ad3d0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1ad3d4:
    if (ctx->pc == 0x1AD3D4u) {
        ctx->pc = 0x1AD3D4u;
            // 0x1ad3d4: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1AD3D8u;
        goto label_1ad3d8;
    }
    ctx->pc = 0x1AD3D0u;
    {
        const bool branch_taken_0x1ad3d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3D0u;
            // 0x1ad3d4: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3d0) {
            ctx->pc = 0x1AD408u;
            goto label_1ad408;
        }
    }
    ctx->pc = 0x1AD3D8u;
label_1ad3d8:
    // 0x1ad3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad3dc:
    // 0x1ad3dc: 0x0  nop
    ctx->pc = 0x1ad3dcu;
    // NOP
label_1ad3e0:
    // 0x1ad3e0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1ad3e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ad3e4:
    // 0x1ad3e4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1ad3e8:
    if (ctx->pc == 0x1AD3E8u) {
        ctx->pc = 0x1AD3ECu;
        goto label_1ad3ec;
    }
    ctx->pc = 0x1AD3E4u;
    {
        const bool branch_taken_0x1ad3e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ad3e4) {
            ctx->pc = 0x1AD408u;
            goto label_1ad408;
        }
    }
    ctx->pc = 0x1AD3ECu;
label_1ad3ec:
    // 0x1ad3ec: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x1ad3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ad3f0:
    // 0x1ad3f0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1ad3f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ad3f4:
    // 0x1ad3f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1ad3f8:
    if (ctx->pc == 0x1AD3F8u) {
        ctx->pc = 0x1AD3FCu;
        goto label_1ad3fc;
    }
    ctx->pc = 0x1AD3F4u;
    {
        const bool branch_taken_0x1ad3f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ad3f4) {
            ctx->pc = 0x1AD408u;
            goto label_1ad408;
        }
    }
    ctx->pc = 0x1AD3FCu;
label_1ad3fc:
    // 0x1ad3fc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ad3fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ad400:
    // 0x1ad400: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ad404:
    if (ctx->pc == 0x1AD404u) {
        ctx->pc = 0x1AD408u;
        goto label_1ad408;
    }
    ctx->pc = 0x1AD400u;
    {
        const bool branch_taken_0x1ad400 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ad400) {
            ctx->pc = 0x1AD420u;
            goto label_1ad420;
        }
    }
    ctx->pc = 0x1AD408u;
label_1ad408:
    // 0x1ad408: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x1ad408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_1ad40c:
    // 0x1ad40c: 0x40f809  jalr        $v0
label_1ad410:
    if (ctx->pc == 0x1AD410u) {
        ctx->pc = 0x1AD410u;
            // 0x1ad410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD414u;
        goto label_1ad414;
    }
    ctx->pc = 0x1AD40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD414u);
        ctx->pc = 0x1AD410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD40Cu;
            // 0x1ad410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACF10u: goto label_1acf10;
            case 0x1ACF14u: goto label_1acf14;
            case 0x1ACF18u: goto label_1acf18;
            case 0x1ACF1Cu: goto label_1acf1c;
            case 0x1ACF20u: goto label_1acf20;
            case 0x1ACF24u: goto label_1acf24;
            case 0x1ACF28u: goto label_1acf28;
            case 0x1ACF2Cu: goto label_1acf2c;
            case 0x1ACF30u: goto label_1acf30;
            case 0x1ACF34u: goto label_1acf34;
            case 0x1ACF38u: goto label_1acf38;
            case 0x1ACF3Cu: goto label_1acf3c;
            case 0x1ACF40u: goto label_1acf40;
            case 0x1ACF44u: goto label_1acf44;
            case 0x1ACF48u: goto label_1acf48;
            case 0x1ACF4Cu: goto label_1acf4c;
            case 0x1ACF50u: goto label_1acf50;
            case 0x1ACF54u: goto label_1acf54;
            case 0x1ACF58u: goto label_1acf58;
            case 0x1ACF5Cu: goto label_1acf5c;
            case 0x1ACF60u: goto label_1acf60;
            case 0x1ACF64u: goto label_1acf64;
            case 0x1ACF68u: goto label_1acf68;
            case 0x1ACF6Cu: goto label_1acf6c;
            case 0x1ACF70u: goto label_1acf70;
            case 0x1ACF74u: goto label_1acf74;
            case 0x1ACF78u: goto label_1acf78;
            case 0x1ACF7Cu: goto label_1acf7c;
            case 0x1ACF80u: goto label_1acf80;
            case 0x1ACF84u: goto label_1acf84;
            case 0x1ACF88u: goto label_1acf88;
            case 0x1ACF8Cu: goto label_1acf8c;
            case 0x1ACF90u: goto label_1acf90;
            case 0x1ACF94u: goto label_1acf94;
            case 0x1ACF98u: goto label_1acf98;
            case 0x1ACF9Cu: goto label_1acf9c;
            case 0x1ACFA0u: goto label_1acfa0;
            case 0x1ACFA4u: goto label_1acfa4;
            case 0x1ACFA8u: goto label_1acfa8;
            case 0x1ACFACu: goto label_1acfac;
            case 0x1ACFB0u: goto label_1acfb0;
            case 0x1ACFB4u: goto label_1acfb4;
            case 0x1ACFB8u: goto label_1acfb8;
            case 0x1ACFBCu: goto label_1acfbc;
            case 0x1ACFC0u: goto label_1acfc0;
            case 0x1ACFC4u: goto label_1acfc4;
            case 0x1ACFC8u: goto label_1acfc8;
            case 0x1ACFCCu: goto label_1acfcc;
            case 0x1ACFD0u: goto label_1acfd0;
            case 0x1ACFD4u: goto label_1acfd4;
            case 0x1ACFD8u: goto label_1acfd8;
            case 0x1ACFDCu: goto label_1acfdc;
            case 0x1ACFE0u: goto label_1acfe0;
            case 0x1ACFE4u: goto label_1acfe4;
            case 0x1ACFE8u: goto label_1acfe8;
            case 0x1ACFECu: goto label_1acfec;
            case 0x1ACFF0u: goto label_1acff0;
            case 0x1ACFF4u: goto label_1acff4;
            case 0x1ACFF8u: goto label_1acff8;
            case 0x1ACFFCu: goto label_1acffc;
            case 0x1AD000u: goto label_1ad000;
            case 0x1AD004u: goto label_1ad004;
            case 0x1AD008u: goto label_1ad008;
            case 0x1AD00Cu: goto label_1ad00c;
            case 0x1AD010u: goto label_1ad010;
            case 0x1AD014u: goto label_1ad014;
            case 0x1AD018u: goto label_1ad018;
            case 0x1AD01Cu: goto label_1ad01c;
            case 0x1AD020u: goto label_1ad020;
            case 0x1AD024u: goto label_1ad024;
            case 0x1AD028u: goto label_1ad028;
            case 0x1AD02Cu: goto label_1ad02c;
            case 0x1AD030u: goto label_1ad030;
            case 0x1AD034u: goto label_1ad034;
            case 0x1AD038u: goto label_1ad038;
            case 0x1AD03Cu: goto label_1ad03c;
            case 0x1AD040u: goto label_1ad040;
            case 0x1AD044u: goto label_1ad044;
            case 0x1AD048u: goto label_1ad048;
            case 0x1AD04Cu: goto label_1ad04c;
            case 0x1AD050u: goto label_1ad050;
            case 0x1AD054u: goto label_1ad054;
            case 0x1AD058u: goto label_1ad058;
            case 0x1AD05Cu: goto label_1ad05c;
            case 0x1AD060u: goto label_1ad060;
            case 0x1AD064u: goto label_1ad064;
            case 0x1AD068u: goto label_1ad068;
            case 0x1AD06Cu: goto label_1ad06c;
            case 0x1AD070u: goto label_1ad070;
            case 0x1AD074u: goto label_1ad074;
            case 0x1AD078u: goto label_1ad078;
            case 0x1AD07Cu: goto label_1ad07c;
            case 0x1AD080u: goto label_1ad080;
            case 0x1AD084u: goto label_1ad084;
            case 0x1AD088u: goto label_1ad088;
            case 0x1AD08Cu: goto label_1ad08c;
            case 0x1AD090u: goto label_1ad090;
            case 0x1AD094u: goto label_1ad094;
            case 0x1AD098u: goto label_1ad098;
            case 0x1AD09Cu: goto label_1ad09c;
            case 0x1AD0A0u: goto label_1ad0a0;
            case 0x1AD0A4u: goto label_1ad0a4;
            case 0x1AD0A8u: goto label_1ad0a8;
            case 0x1AD0ACu: goto label_1ad0ac;
            case 0x1AD0B0u: goto label_1ad0b0;
            case 0x1AD0B4u: goto label_1ad0b4;
            case 0x1AD0B8u: goto label_1ad0b8;
            case 0x1AD0BCu: goto label_1ad0bc;
            case 0x1AD0C0u: goto label_1ad0c0;
            case 0x1AD0C4u: goto label_1ad0c4;
            case 0x1AD0C8u: goto label_1ad0c8;
            case 0x1AD0CCu: goto label_1ad0cc;
            case 0x1AD0D0u: goto label_1ad0d0;
            case 0x1AD0D4u: goto label_1ad0d4;
            case 0x1AD0D8u: goto label_1ad0d8;
            case 0x1AD0DCu: goto label_1ad0dc;
            case 0x1AD0E0u: goto label_1ad0e0;
            case 0x1AD0E4u: goto label_1ad0e4;
            case 0x1AD0E8u: goto label_1ad0e8;
            case 0x1AD0ECu: goto label_1ad0ec;
            case 0x1AD0F0u: goto label_1ad0f0;
            case 0x1AD0F4u: goto label_1ad0f4;
            case 0x1AD0F8u: goto label_1ad0f8;
            case 0x1AD0FCu: goto label_1ad0fc;
            case 0x1AD100u: goto label_1ad100;
            case 0x1AD104u: goto label_1ad104;
            case 0x1AD108u: goto label_1ad108;
            case 0x1AD10Cu: goto label_1ad10c;
            case 0x1AD110u: goto label_1ad110;
            case 0x1AD114u: goto label_1ad114;
            case 0x1AD118u: goto label_1ad118;
            case 0x1AD11Cu: goto label_1ad11c;
            case 0x1AD120u: goto label_1ad120;
            case 0x1AD124u: goto label_1ad124;
            case 0x1AD128u: goto label_1ad128;
            case 0x1AD12Cu: goto label_1ad12c;
            case 0x1AD130u: goto label_1ad130;
            case 0x1AD134u: goto label_1ad134;
            case 0x1AD138u: goto label_1ad138;
            case 0x1AD13Cu: goto label_1ad13c;
            case 0x1AD140u: goto label_1ad140;
            case 0x1AD144u: goto label_1ad144;
            case 0x1AD148u: goto label_1ad148;
            case 0x1AD14Cu: goto label_1ad14c;
            case 0x1AD150u: goto label_1ad150;
            case 0x1AD154u: goto label_1ad154;
            case 0x1AD158u: goto label_1ad158;
            case 0x1AD15Cu: goto label_1ad15c;
            case 0x1AD160u: goto label_1ad160;
            case 0x1AD164u: goto label_1ad164;
            case 0x1AD168u: goto label_1ad168;
            case 0x1AD16Cu: goto label_1ad16c;
            case 0x1AD170u: goto label_1ad170;
            case 0x1AD174u: goto label_1ad174;
            case 0x1AD178u: goto label_1ad178;
            case 0x1AD17Cu: goto label_1ad17c;
            case 0x1AD180u: goto label_1ad180;
            case 0x1AD184u: goto label_1ad184;
            case 0x1AD188u: goto label_1ad188;
            case 0x1AD18Cu: goto label_1ad18c;
            case 0x1AD190u: goto label_1ad190;
            case 0x1AD194u: goto label_1ad194;
            case 0x1AD198u: goto label_1ad198;
            case 0x1AD19Cu: goto label_1ad19c;
            case 0x1AD1A0u: goto label_1ad1a0;
            case 0x1AD1A4u: goto label_1ad1a4;
            case 0x1AD1A8u: goto label_1ad1a8;
            case 0x1AD1ACu: goto label_1ad1ac;
            case 0x1AD1B0u: goto label_1ad1b0;
            case 0x1AD1B4u: goto label_1ad1b4;
            case 0x1AD1B8u: goto label_1ad1b8;
            case 0x1AD1BCu: goto label_1ad1bc;
            case 0x1AD1C0u: goto label_1ad1c0;
            case 0x1AD1C4u: goto label_1ad1c4;
            case 0x1AD1C8u: goto label_1ad1c8;
            case 0x1AD1CCu: goto label_1ad1cc;
            case 0x1AD1D0u: goto label_1ad1d0;
            case 0x1AD1D4u: goto label_1ad1d4;
            case 0x1AD1D8u: goto label_1ad1d8;
            case 0x1AD1DCu: goto label_1ad1dc;
            case 0x1AD1E0u: goto label_1ad1e0;
            case 0x1AD1E4u: goto label_1ad1e4;
            case 0x1AD1E8u: goto label_1ad1e8;
            case 0x1AD1ECu: goto label_1ad1ec;
            case 0x1AD1F0u: goto label_1ad1f0;
            case 0x1AD1F4u: goto label_1ad1f4;
            case 0x1AD1F8u: goto label_1ad1f8;
            case 0x1AD1FCu: goto label_1ad1fc;
            case 0x1AD200u: goto label_1ad200;
            case 0x1AD204u: goto label_1ad204;
            case 0x1AD208u: goto label_1ad208;
            case 0x1AD20Cu: goto label_1ad20c;
            case 0x1AD210u: goto label_1ad210;
            case 0x1AD214u: goto label_1ad214;
            case 0x1AD218u: goto label_1ad218;
            case 0x1AD21Cu: goto label_1ad21c;
            case 0x1AD220u: goto label_1ad220;
            case 0x1AD224u: goto label_1ad224;
            case 0x1AD228u: goto label_1ad228;
            case 0x1AD22Cu: goto label_1ad22c;
            case 0x1AD230u: goto label_1ad230;
            case 0x1AD234u: goto label_1ad234;
            case 0x1AD238u: goto label_1ad238;
            case 0x1AD23Cu: goto label_1ad23c;
            case 0x1AD240u: goto label_1ad240;
            case 0x1AD244u: goto label_1ad244;
            case 0x1AD248u: goto label_1ad248;
            case 0x1AD24Cu: goto label_1ad24c;
            case 0x1AD250u: goto label_1ad250;
            case 0x1AD254u: goto label_1ad254;
            case 0x1AD258u: goto label_1ad258;
            case 0x1AD25Cu: goto label_1ad25c;
            case 0x1AD260u: goto label_1ad260;
            case 0x1AD264u: goto label_1ad264;
            case 0x1AD268u: goto label_1ad268;
            case 0x1AD26Cu: goto label_1ad26c;
            case 0x1AD270u: goto label_1ad270;
            case 0x1AD274u: goto label_1ad274;
            case 0x1AD278u: goto label_1ad278;
            case 0x1AD27Cu: goto label_1ad27c;
            case 0x1AD280u: goto label_1ad280;
            case 0x1AD284u: goto label_1ad284;
            case 0x1AD288u: goto label_1ad288;
            case 0x1AD28Cu: goto label_1ad28c;
            case 0x1AD290u: goto label_1ad290;
            case 0x1AD294u: goto label_1ad294;
            case 0x1AD298u: goto label_1ad298;
            case 0x1AD29Cu: goto label_1ad29c;
            case 0x1AD2A0u: goto label_1ad2a0;
            case 0x1AD2A4u: goto label_1ad2a4;
            case 0x1AD2A8u: goto label_1ad2a8;
            case 0x1AD2ACu: goto label_1ad2ac;
            case 0x1AD2B0u: goto label_1ad2b0;
            case 0x1AD2B4u: goto label_1ad2b4;
            case 0x1AD2B8u: goto label_1ad2b8;
            case 0x1AD2BCu: goto label_1ad2bc;
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2C4u: goto label_1ad2c4;
            case 0x1AD2C8u: goto label_1ad2c8;
            case 0x1AD2CCu: goto label_1ad2cc;
            case 0x1AD2D0u: goto label_1ad2d0;
            case 0x1AD2D4u: goto label_1ad2d4;
            case 0x1AD2D8u: goto label_1ad2d8;
            case 0x1AD2DCu: goto label_1ad2dc;
            case 0x1AD2E0u: goto label_1ad2e0;
            case 0x1AD2E4u: goto label_1ad2e4;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD2F0u: goto label_1ad2f0;
            case 0x1AD2F4u: goto label_1ad2f4;
            case 0x1AD2F8u: goto label_1ad2f8;
            case 0x1AD2FCu: goto label_1ad2fc;
            case 0x1AD300u: goto label_1ad300;
            case 0x1AD304u: goto label_1ad304;
            case 0x1AD308u: goto label_1ad308;
            case 0x1AD30Cu: goto label_1ad30c;
            case 0x1AD310u: goto label_1ad310;
            case 0x1AD314u: goto label_1ad314;
            case 0x1AD318u: goto label_1ad318;
            case 0x1AD31Cu: goto label_1ad31c;
            case 0x1AD320u: goto label_1ad320;
            case 0x1AD324u: goto label_1ad324;
            case 0x1AD328u: goto label_1ad328;
            case 0x1AD32Cu: goto label_1ad32c;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD334u: goto label_1ad334;
            case 0x1AD338u: goto label_1ad338;
            case 0x1AD33Cu: goto label_1ad33c;
            case 0x1AD340u: goto label_1ad340;
            case 0x1AD344u: goto label_1ad344;
            case 0x1AD348u: goto label_1ad348;
            case 0x1AD34Cu: goto label_1ad34c;
            case 0x1AD350u: goto label_1ad350;
            case 0x1AD354u: goto label_1ad354;
            case 0x1AD358u: goto label_1ad358;
            case 0x1AD35Cu: goto label_1ad35c;
            case 0x1AD360u: goto label_1ad360;
            case 0x1AD364u: goto label_1ad364;
            case 0x1AD368u: goto label_1ad368;
            case 0x1AD36Cu: goto label_1ad36c;
            case 0x1AD370u: goto label_1ad370;
            case 0x1AD374u: goto label_1ad374;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD37Cu: goto label_1ad37c;
            case 0x1AD380u: goto label_1ad380;
            case 0x1AD384u: goto label_1ad384;
            case 0x1AD388u: goto label_1ad388;
            case 0x1AD38Cu: goto label_1ad38c;
            case 0x1AD390u: goto label_1ad390;
            case 0x1AD394u: goto label_1ad394;
            case 0x1AD398u: goto label_1ad398;
            case 0x1AD39Cu: goto label_1ad39c;
            case 0x1AD3A0u: goto label_1ad3a0;
            case 0x1AD3A4u: goto label_1ad3a4;
            case 0x1AD3A8u: goto label_1ad3a8;
            case 0x1AD3ACu: goto label_1ad3ac;
            case 0x1AD3B0u: goto label_1ad3b0;
            case 0x1AD3B4u: goto label_1ad3b4;
            case 0x1AD3B8u: goto label_1ad3b8;
            case 0x1AD3BCu: goto label_1ad3bc;
            case 0x1AD3C0u: goto label_1ad3c0;
            case 0x1AD3C4u: goto label_1ad3c4;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD3CCu: goto label_1ad3cc;
            case 0x1AD3D0u: goto label_1ad3d0;
            case 0x1AD3D4u: goto label_1ad3d4;
            case 0x1AD3D8u: goto label_1ad3d8;
            case 0x1AD3DCu: goto label_1ad3dc;
            case 0x1AD3E0u: goto label_1ad3e0;
            case 0x1AD3E4u: goto label_1ad3e4;
            case 0x1AD3E8u: goto label_1ad3e8;
            case 0x1AD3ECu: goto label_1ad3ec;
            case 0x1AD3F0u: goto label_1ad3f0;
            case 0x1AD3F4u: goto label_1ad3f4;
            case 0x1AD3F8u: goto label_1ad3f8;
            case 0x1AD3FCu: goto label_1ad3fc;
            case 0x1AD400u: goto label_1ad400;
            case 0x1AD404u: goto label_1ad404;
            case 0x1AD408u: goto label_1ad408;
            case 0x1AD40Cu: goto label_1ad40c;
            case 0x1AD410u: goto label_1ad410;
            case 0x1AD414u: goto label_1ad414;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD41Cu: goto label_1ad41c;
            case 0x1AD420u: goto label_1ad420;
            case 0x1AD424u: goto label_1ad424;
            case 0x1AD428u: goto label_1ad428;
            case 0x1AD42Cu: goto label_1ad42c;
            case 0x1AD430u: goto label_1ad430;
            case 0x1AD434u: goto label_1ad434;
            case 0x1AD438u: goto label_1ad438;
            case 0x1AD43Cu: goto label_1ad43c;
            case 0x1AD440u: goto label_1ad440;
            case 0x1AD444u: goto label_1ad444;
            case 0x1AD448u: goto label_1ad448;
            case 0x1AD44Cu: goto label_1ad44c;
            case 0x1AD450u: goto label_1ad450;
            case 0x1AD454u: goto label_1ad454;
            case 0x1AD458u: goto label_1ad458;
            case 0x1AD45Cu: goto label_1ad45c;
            case 0x1AD460u: goto label_1ad460;
            case 0x1AD464u: goto label_1ad464;
            case 0x1AD468u: goto label_1ad468;
            case 0x1AD46Cu: goto label_1ad46c;
            case 0x1AD470u: goto label_1ad470;
            case 0x1AD474u: goto label_1ad474;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD47Cu: goto label_1ad47c;
            case 0x1AD480u: goto label_1ad480;
            case 0x1AD484u: goto label_1ad484;
            case 0x1AD488u: goto label_1ad488;
            case 0x1AD48Cu: goto label_1ad48c;
            case 0x1AD490u: goto label_1ad490;
            case 0x1AD494u: goto label_1ad494;
            case 0x1AD498u: goto label_1ad498;
            case 0x1AD49Cu: goto label_1ad49c;
            case 0x1AD4A0u: goto label_1ad4a0;
            case 0x1AD4A4u: goto label_1ad4a4;
            case 0x1AD4A8u: goto label_1ad4a8;
            case 0x1AD4ACu: goto label_1ad4ac;
            case 0x1AD4B0u: goto label_1ad4b0;
            case 0x1AD4B4u: goto label_1ad4b4;
            case 0x1AD4B8u: goto label_1ad4b8;
            case 0x1AD4BCu: goto label_1ad4bc;
            case 0x1AD4C0u: goto label_1ad4c0;
            case 0x1AD4C4u: goto label_1ad4c4;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD4CCu: goto label_1ad4cc;
            case 0x1AD4D0u: goto label_1ad4d0;
            case 0x1AD4D4u: goto label_1ad4d4;
            case 0x1AD4D8u: goto label_1ad4d8;
            case 0x1AD4DCu: goto label_1ad4dc;
            case 0x1AD4E0u: goto label_1ad4e0;
            case 0x1AD4E4u: goto label_1ad4e4;
            case 0x1AD4E8u: goto label_1ad4e8;
            case 0x1AD4ECu: goto label_1ad4ec;
            case 0x1AD4F0u: goto label_1ad4f0;
            case 0x1AD4F4u: goto label_1ad4f4;
            case 0x1AD4F8u: goto label_1ad4f8;
            case 0x1AD4FCu: goto label_1ad4fc;
            case 0x1AD500u: goto label_1ad500;
            case 0x1AD504u: goto label_1ad504;
            case 0x1AD508u: goto label_1ad508;
            case 0x1AD50Cu: goto label_1ad50c;
            case 0x1AD510u: goto label_1ad510;
            case 0x1AD514u: goto label_1ad514;
            case 0x1AD518u: goto label_1ad518;
            case 0x1AD51Cu: goto label_1ad51c;
            case 0x1AD520u: goto label_1ad520;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD528u: goto label_1ad528;
            case 0x1AD52Cu: goto label_1ad52c;
            case 0x1AD530u: goto label_1ad530;
            case 0x1AD534u: goto label_1ad534;
            case 0x1AD538u: goto label_1ad538;
            case 0x1AD53Cu: goto label_1ad53c;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD544u: goto label_1ad544;
            case 0x1AD548u: goto label_1ad548;
            case 0x1AD54Cu: goto label_1ad54c;
            case 0x1AD550u: goto label_1ad550;
            case 0x1AD554u: goto label_1ad554;
            case 0x1AD558u: goto label_1ad558;
            case 0x1AD55Cu: goto label_1ad55c;
            case 0x1AD560u: goto label_1ad560;
            case 0x1AD564u: goto label_1ad564;
            case 0x1AD568u: goto label_1ad568;
            case 0x1AD56Cu: goto label_1ad56c;
            case 0x1AD570u: goto label_1ad570;
            case 0x1AD574u: goto label_1ad574;
            case 0x1AD578u: goto label_1ad578;
            case 0x1AD57Cu: goto label_1ad57c;
            case 0x1AD580u: goto label_1ad580;
            case 0x1AD584u: goto label_1ad584;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD414u; }
            if (ctx->pc != 0x1AD414u) { return; }
        }
    }
    ctx->pc = 0x1AD414u;
label_1ad414:
    // 0x1ad414: 0x10000056  b           . + 4 + (0x56 << 2)
label_1ad418:
    if (ctx->pc == 0x1AD418u) {
        ctx->pc = 0x1AD41Cu;
        goto label_1ad41c;
    }
    ctx->pc = 0x1AD414u;
    {
        const bool branch_taken_0x1ad414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad414) {
            ctx->pc = 0x1AD570u;
            goto label_1ad570;
        }
    }
    ctx->pc = 0x1AD41Cu;
label_1ad41c:
    // 0x1ad41c: 0x0  nop
    ctx->pc = 0x1ad41cu;
    // NOP
label_1ad420:
    // 0x1ad420: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ad420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ad424:
    // 0x1ad424: 0x1c40004a  bgtz        $v0, . + 4 + (0x4A << 2)
label_1ad428:
    if (ctx->pc == 0x1AD428u) {
        ctx->pc = 0x1AD428u;
            // 0x1ad428: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->pc = 0x1AD42Cu;
        goto label_1ad42c;
    }
    ctx->pc = 0x1AD424u;
    {
        const bool branch_taken_0x1ad424 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1AD428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD424u;
            // 0x1ad428: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad424) {
            ctx->pc = 0x1AD550u;
            goto label_1ad550;
        }
    }
    ctx->pc = 0x1AD42Cu;
label_1ad42c:
    // 0x1ad42c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ad42cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ad430:
    // 0x1ad430: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad434:
    // 0x1ad434: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ad434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ad438:
    // 0x1ad438: 0xc06ba20  jal         func_1AE880
label_1ad43c:
    if (ctx->pc == 0x1AD43Cu) {
        ctx->pc = 0x1AD43Cu;
            // 0x1ad43c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD440u;
        goto label_1ad440;
    }
    ctx->pc = 0x1AD438u;
    SET_GPR_U32(ctx, 31, 0x1AD440u);
    ctx->pc = 0x1AD43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD438u;
            // 0x1ad43c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE880u;
    if (runtime->hasFunction(0x1AE880u)) {
        auto targetFn = runtime->lookupFunction(0x1AE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD440u; }
        if (ctx->pc != 0x1AD440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_06_0x1ae880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD440u; }
        if (ctx->pc != 0x1AD440u) { return; }
    }
    ctx->pc = 0x1AD440u;
label_1ad440:
    // 0x1ad440: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ad440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad444:
    // 0x1ad444: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1ad444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad448:
    // 0x1ad448: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ad448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad44c:
    // 0x1ad44c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad44cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ad450:
    // 0x1ad450: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad450u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad454:
    // 0x1ad454: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ad454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ad458:
    // 0x1ad458: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ad458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ad45c:
    // 0x1ad45c: 0xc06ba20  jal         func_1AE880
label_1ad460:
    if (ctx->pc == 0x1AD460u) {
        ctx->pc = 0x1AD460u;
            // 0x1ad460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD464u;
        goto label_1ad464;
    }
    ctx->pc = 0x1AD45Cu;
    SET_GPR_U32(ctx, 31, 0x1AD464u);
    ctx->pc = 0x1AD460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD45Cu;
            // 0x1ad460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE880u;
    if (runtime->hasFunction(0x1AE880u)) {
        auto targetFn = runtime->lookupFunction(0x1AE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD464u; }
        if (ctx->pc != 0x1AD464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_06_0x1ae880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD464u; }
        if (ctx->pc != 0x1AD464u) { return; }
    }
    ctx->pc = 0x1AD464u;
label_1ad464:
    // 0x1ad464: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ad464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad468:
    // 0x1ad468: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1ad468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad46c:
    // 0x1ad46c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ad46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad470:
    // 0x1ad470: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad470u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ad474:
    // 0x1ad474: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad474u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad478:
    // 0x1ad478: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ad478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ad47c:
    // 0x1ad47c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ad47cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ad480:
    // 0x1ad480: 0xc06ba20  jal         func_1AE880
label_1ad484:
    if (ctx->pc == 0x1AD484u) {
        ctx->pc = 0x1AD484u;
            // 0x1ad484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD488u;
        goto label_1ad488;
    }
    ctx->pc = 0x1AD480u;
    SET_GPR_U32(ctx, 31, 0x1AD488u);
    ctx->pc = 0x1AD484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD480u;
            // 0x1ad484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE880u;
    if (runtime->hasFunction(0x1AE880u)) {
        auto targetFn = runtime->lookupFunction(0x1AE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD488u; }
        if (ctx->pc != 0x1AD488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_06_0x1ae880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD488u; }
        if (ctx->pc != 0x1AD488u) { return; }
    }
    ctx->pc = 0x1AD488u;
label_1ad488:
    // 0x1ad488: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ad488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad48c:
    // 0x1ad48c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1ad48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad490:
    // 0x1ad490: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ad490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad494:
    // 0x1ad494: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ad498:
    // 0x1ad498: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad498u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad49c:
    // 0x1ad49c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ad49cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ad4a0:
    // 0x1ad4a0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ad4a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ad4a4:
    // 0x1ad4a4: 0xc06ba20  jal         func_1AE880
label_1ad4a8:
    if (ctx->pc == 0x1AD4A8u) {
        ctx->pc = 0x1AD4A8u;
            // 0x1ad4a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4ACu;
        goto label_1ad4ac;
    }
    ctx->pc = 0x1AD4A4u;
    SET_GPR_U32(ctx, 31, 0x1AD4ACu);
    ctx->pc = 0x1AD4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD4A4u;
            // 0x1ad4a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE880u;
    if (runtime->hasFunction(0x1AE880u)) {
        auto targetFn = runtime->lookupFunction(0x1AE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4ACu; }
        if (ctx->pc != 0x1AD4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_06_0x1ae880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4ACu; }
        if (ctx->pc != 0x1AD4ACu) { return; }
    }
    ctx->pc = 0x1AD4ACu;
label_1ad4ac:
    // 0x1ad4ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ad4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad4b0:
    // 0x1ad4b0: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1ad4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad4b4:
    // 0x1ad4b4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ad4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad4b8:
    // 0x1ad4b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad4b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ad4bc:
    // 0x1ad4bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad4bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad4c0:
    // 0x1ad4c0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ad4c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ad4c4:
    // 0x1ad4c4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ad4c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ad4c8:
    // 0x1ad4c8: 0xc06b83c  jal         func_1AE0F0
label_1ad4cc:
    if (ctx->pc == 0x1AD4CCu) {
        ctx->pc = 0x1AD4CCu;
            // 0x1ad4cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4D0u;
        goto label_1ad4d0;
    }
    ctx->pc = 0x1AD4C8u;
    SET_GPR_U32(ctx, 31, 0x1AD4D0u);
    ctx->pc = 0x1AD4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD4C8u;
            // 0x1ad4cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F0u;
    if (runtime->hasFunction(0x1AE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4D0u; }
        if (ctx->pc != 0x1AD4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_07_0x1ae0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4D0u; }
        if (ctx->pc != 0x1AD4D0u) { return; }
    }
    ctx->pc = 0x1AD4D0u;
label_1ad4d0:
    // 0x1ad4d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ad4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad4d4:
    // 0x1ad4d4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1ad4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad4d8:
    // 0x1ad4d8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ad4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad4dc:
    // 0x1ad4dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad4dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ad4e0:
    // 0x1ad4e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad4e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad4e4:
    // 0x1ad4e4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ad4e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ad4e8:
    // 0x1ad4e8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ad4e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ad4ec:
    // 0x1ad4ec: 0xc06b83c  jal         func_1AE0F0
label_1ad4f0:
    if (ctx->pc == 0x1AD4F0u) {
        ctx->pc = 0x1AD4F0u;
            // 0x1ad4f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4F4u;
        goto label_1ad4f4;
    }
    ctx->pc = 0x1AD4ECu;
    SET_GPR_U32(ctx, 31, 0x1AD4F4u);
    ctx->pc = 0x1AD4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD4ECu;
            // 0x1ad4f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F0u;
    if (runtime->hasFunction(0x1AE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4F4u; }
        if (ctx->pc != 0x1AD4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_07_0x1ae0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4F4u; }
        if (ctx->pc != 0x1AD4F4u) { return; }
    }
    ctx->pc = 0x1AD4F4u;
label_1ad4f4:
    // 0x1ad4f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ad4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad4f8:
    // 0x1ad4f8: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1ad4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad4fc:
    // 0x1ad4fc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ad4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad500:
    // 0x1ad500: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad500u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ad504:
    // 0x1ad504: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad504u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad508:
    // 0x1ad508: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ad508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ad50c:
    // 0x1ad50c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ad50cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ad510:
    // 0x1ad510: 0xc06b83c  jal         func_1AE0F0
label_1ad514:
    if (ctx->pc == 0x1AD514u) {
        ctx->pc = 0x1AD514u;
            // 0x1ad514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD518u;
        goto label_1ad518;
    }
    ctx->pc = 0x1AD510u;
    SET_GPR_U32(ctx, 31, 0x1AD518u);
    ctx->pc = 0x1AD514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD510u;
            // 0x1ad514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F0u;
    if (runtime->hasFunction(0x1AE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD518u; }
        if (ctx->pc != 0x1AD518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_07_0x1ae0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD518u; }
        if (ctx->pc != 0x1AD518u) { return; }
    }
    ctx->pc = 0x1AD518u;
label_1ad518:
    // 0x1ad518: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ad518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad51c:
    // 0x1ad51c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1ad51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad520:
    // 0x1ad520: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ad520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad524:
    // 0x1ad524: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad524u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ad528:
    // 0x1ad528: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad528u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad52c:
    // 0x1ad52c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ad52cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ad530:
    // 0x1ad530: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ad530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ad534:
    // 0x1ad534: 0xc06b83c  jal         func_1AE0F0
label_1ad538:
    if (ctx->pc == 0x1AD538u) {
        ctx->pc = 0x1AD538u;
            // 0x1ad538: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD53Cu;
        goto label_1ad53c;
    }
    ctx->pc = 0x1AD534u;
    SET_GPR_U32(ctx, 31, 0x1AD53Cu);
    ctx->pc = 0x1AD538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD534u;
            // 0x1ad538: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F0u;
    if (runtime->hasFunction(0x1AE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD53Cu; }
        if (ctx->pc != 0x1AD53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_07_0x1ae0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD53Cu; }
        if (ctx->pc != 0x1AD53Cu) { return; }
    }
    ctx->pc = 0x1AD53Cu;
label_1ad53c:
    // 0x1ad53c: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x1ad53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_1ad540:
    // 0x1ad540: 0x40f809  jalr        $v0
label_1ad544:
    if (ctx->pc == 0x1AD544u) {
        ctx->pc = 0x1AD544u;
            // 0x1ad544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD548u;
        goto label_1ad548;
    }
    ctx->pc = 0x1AD540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD548u);
        ctx->pc = 0x1AD544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD540u;
            // 0x1ad544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACF10u: goto label_1acf10;
            case 0x1ACF14u: goto label_1acf14;
            case 0x1ACF18u: goto label_1acf18;
            case 0x1ACF1Cu: goto label_1acf1c;
            case 0x1ACF20u: goto label_1acf20;
            case 0x1ACF24u: goto label_1acf24;
            case 0x1ACF28u: goto label_1acf28;
            case 0x1ACF2Cu: goto label_1acf2c;
            case 0x1ACF30u: goto label_1acf30;
            case 0x1ACF34u: goto label_1acf34;
            case 0x1ACF38u: goto label_1acf38;
            case 0x1ACF3Cu: goto label_1acf3c;
            case 0x1ACF40u: goto label_1acf40;
            case 0x1ACF44u: goto label_1acf44;
            case 0x1ACF48u: goto label_1acf48;
            case 0x1ACF4Cu: goto label_1acf4c;
            case 0x1ACF50u: goto label_1acf50;
            case 0x1ACF54u: goto label_1acf54;
            case 0x1ACF58u: goto label_1acf58;
            case 0x1ACF5Cu: goto label_1acf5c;
            case 0x1ACF60u: goto label_1acf60;
            case 0x1ACF64u: goto label_1acf64;
            case 0x1ACF68u: goto label_1acf68;
            case 0x1ACF6Cu: goto label_1acf6c;
            case 0x1ACF70u: goto label_1acf70;
            case 0x1ACF74u: goto label_1acf74;
            case 0x1ACF78u: goto label_1acf78;
            case 0x1ACF7Cu: goto label_1acf7c;
            case 0x1ACF80u: goto label_1acf80;
            case 0x1ACF84u: goto label_1acf84;
            case 0x1ACF88u: goto label_1acf88;
            case 0x1ACF8Cu: goto label_1acf8c;
            case 0x1ACF90u: goto label_1acf90;
            case 0x1ACF94u: goto label_1acf94;
            case 0x1ACF98u: goto label_1acf98;
            case 0x1ACF9Cu: goto label_1acf9c;
            case 0x1ACFA0u: goto label_1acfa0;
            case 0x1ACFA4u: goto label_1acfa4;
            case 0x1ACFA8u: goto label_1acfa8;
            case 0x1ACFACu: goto label_1acfac;
            case 0x1ACFB0u: goto label_1acfb0;
            case 0x1ACFB4u: goto label_1acfb4;
            case 0x1ACFB8u: goto label_1acfb8;
            case 0x1ACFBCu: goto label_1acfbc;
            case 0x1ACFC0u: goto label_1acfc0;
            case 0x1ACFC4u: goto label_1acfc4;
            case 0x1ACFC8u: goto label_1acfc8;
            case 0x1ACFCCu: goto label_1acfcc;
            case 0x1ACFD0u: goto label_1acfd0;
            case 0x1ACFD4u: goto label_1acfd4;
            case 0x1ACFD8u: goto label_1acfd8;
            case 0x1ACFDCu: goto label_1acfdc;
            case 0x1ACFE0u: goto label_1acfe0;
            case 0x1ACFE4u: goto label_1acfe4;
            case 0x1ACFE8u: goto label_1acfe8;
            case 0x1ACFECu: goto label_1acfec;
            case 0x1ACFF0u: goto label_1acff0;
            case 0x1ACFF4u: goto label_1acff4;
            case 0x1ACFF8u: goto label_1acff8;
            case 0x1ACFFCu: goto label_1acffc;
            case 0x1AD000u: goto label_1ad000;
            case 0x1AD004u: goto label_1ad004;
            case 0x1AD008u: goto label_1ad008;
            case 0x1AD00Cu: goto label_1ad00c;
            case 0x1AD010u: goto label_1ad010;
            case 0x1AD014u: goto label_1ad014;
            case 0x1AD018u: goto label_1ad018;
            case 0x1AD01Cu: goto label_1ad01c;
            case 0x1AD020u: goto label_1ad020;
            case 0x1AD024u: goto label_1ad024;
            case 0x1AD028u: goto label_1ad028;
            case 0x1AD02Cu: goto label_1ad02c;
            case 0x1AD030u: goto label_1ad030;
            case 0x1AD034u: goto label_1ad034;
            case 0x1AD038u: goto label_1ad038;
            case 0x1AD03Cu: goto label_1ad03c;
            case 0x1AD040u: goto label_1ad040;
            case 0x1AD044u: goto label_1ad044;
            case 0x1AD048u: goto label_1ad048;
            case 0x1AD04Cu: goto label_1ad04c;
            case 0x1AD050u: goto label_1ad050;
            case 0x1AD054u: goto label_1ad054;
            case 0x1AD058u: goto label_1ad058;
            case 0x1AD05Cu: goto label_1ad05c;
            case 0x1AD060u: goto label_1ad060;
            case 0x1AD064u: goto label_1ad064;
            case 0x1AD068u: goto label_1ad068;
            case 0x1AD06Cu: goto label_1ad06c;
            case 0x1AD070u: goto label_1ad070;
            case 0x1AD074u: goto label_1ad074;
            case 0x1AD078u: goto label_1ad078;
            case 0x1AD07Cu: goto label_1ad07c;
            case 0x1AD080u: goto label_1ad080;
            case 0x1AD084u: goto label_1ad084;
            case 0x1AD088u: goto label_1ad088;
            case 0x1AD08Cu: goto label_1ad08c;
            case 0x1AD090u: goto label_1ad090;
            case 0x1AD094u: goto label_1ad094;
            case 0x1AD098u: goto label_1ad098;
            case 0x1AD09Cu: goto label_1ad09c;
            case 0x1AD0A0u: goto label_1ad0a0;
            case 0x1AD0A4u: goto label_1ad0a4;
            case 0x1AD0A8u: goto label_1ad0a8;
            case 0x1AD0ACu: goto label_1ad0ac;
            case 0x1AD0B0u: goto label_1ad0b0;
            case 0x1AD0B4u: goto label_1ad0b4;
            case 0x1AD0B8u: goto label_1ad0b8;
            case 0x1AD0BCu: goto label_1ad0bc;
            case 0x1AD0C0u: goto label_1ad0c0;
            case 0x1AD0C4u: goto label_1ad0c4;
            case 0x1AD0C8u: goto label_1ad0c8;
            case 0x1AD0CCu: goto label_1ad0cc;
            case 0x1AD0D0u: goto label_1ad0d0;
            case 0x1AD0D4u: goto label_1ad0d4;
            case 0x1AD0D8u: goto label_1ad0d8;
            case 0x1AD0DCu: goto label_1ad0dc;
            case 0x1AD0E0u: goto label_1ad0e0;
            case 0x1AD0E4u: goto label_1ad0e4;
            case 0x1AD0E8u: goto label_1ad0e8;
            case 0x1AD0ECu: goto label_1ad0ec;
            case 0x1AD0F0u: goto label_1ad0f0;
            case 0x1AD0F4u: goto label_1ad0f4;
            case 0x1AD0F8u: goto label_1ad0f8;
            case 0x1AD0FCu: goto label_1ad0fc;
            case 0x1AD100u: goto label_1ad100;
            case 0x1AD104u: goto label_1ad104;
            case 0x1AD108u: goto label_1ad108;
            case 0x1AD10Cu: goto label_1ad10c;
            case 0x1AD110u: goto label_1ad110;
            case 0x1AD114u: goto label_1ad114;
            case 0x1AD118u: goto label_1ad118;
            case 0x1AD11Cu: goto label_1ad11c;
            case 0x1AD120u: goto label_1ad120;
            case 0x1AD124u: goto label_1ad124;
            case 0x1AD128u: goto label_1ad128;
            case 0x1AD12Cu: goto label_1ad12c;
            case 0x1AD130u: goto label_1ad130;
            case 0x1AD134u: goto label_1ad134;
            case 0x1AD138u: goto label_1ad138;
            case 0x1AD13Cu: goto label_1ad13c;
            case 0x1AD140u: goto label_1ad140;
            case 0x1AD144u: goto label_1ad144;
            case 0x1AD148u: goto label_1ad148;
            case 0x1AD14Cu: goto label_1ad14c;
            case 0x1AD150u: goto label_1ad150;
            case 0x1AD154u: goto label_1ad154;
            case 0x1AD158u: goto label_1ad158;
            case 0x1AD15Cu: goto label_1ad15c;
            case 0x1AD160u: goto label_1ad160;
            case 0x1AD164u: goto label_1ad164;
            case 0x1AD168u: goto label_1ad168;
            case 0x1AD16Cu: goto label_1ad16c;
            case 0x1AD170u: goto label_1ad170;
            case 0x1AD174u: goto label_1ad174;
            case 0x1AD178u: goto label_1ad178;
            case 0x1AD17Cu: goto label_1ad17c;
            case 0x1AD180u: goto label_1ad180;
            case 0x1AD184u: goto label_1ad184;
            case 0x1AD188u: goto label_1ad188;
            case 0x1AD18Cu: goto label_1ad18c;
            case 0x1AD190u: goto label_1ad190;
            case 0x1AD194u: goto label_1ad194;
            case 0x1AD198u: goto label_1ad198;
            case 0x1AD19Cu: goto label_1ad19c;
            case 0x1AD1A0u: goto label_1ad1a0;
            case 0x1AD1A4u: goto label_1ad1a4;
            case 0x1AD1A8u: goto label_1ad1a8;
            case 0x1AD1ACu: goto label_1ad1ac;
            case 0x1AD1B0u: goto label_1ad1b0;
            case 0x1AD1B4u: goto label_1ad1b4;
            case 0x1AD1B8u: goto label_1ad1b8;
            case 0x1AD1BCu: goto label_1ad1bc;
            case 0x1AD1C0u: goto label_1ad1c0;
            case 0x1AD1C4u: goto label_1ad1c4;
            case 0x1AD1C8u: goto label_1ad1c8;
            case 0x1AD1CCu: goto label_1ad1cc;
            case 0x1AD1D0u: goto label_1ad1d0;
            case 0x1AD1D4u: goto label_1ad1d4;
            case 0x1AD1D8u: goto label_1ad1d8;
            case 0x1AD1DCu: goto label_1ad1dc;
            case 0x1AD1E0u: goto label_1ad1e0;
            case 0x1AD1E4u: goto label_1ad1e4;
            case 0x1AD1E8u: goto label_1ad1e8;
            case 0x1AD1ECu: goto label_1ad1ec;
            case 0x1AD1F0u: goto label_1ad1f0;
            case 0x1AD1F4u: goto label_1ad1f4;
            case 0x1AD1F8u: goto label_1ad1f8;
            case 0x1AD1FCu: goto label_1ad1fc;
            case 0x1AD200u: goto label_1ad200;
            case 0x1AD204u: goto label_1ad204;
            case 0x1AD208u: goto label_1ad208;
            case 0x1AD20Cu: goto label_1ad20c;
            case 0x1AD210u: goto label_1ad210;
            case 0x1AD214u: goto label_1ad214;
            case 0x1AD218u: goto label_1ad218;
            case 0x1AD21Cu: goto label_1ad21c;
            case 0x1AD220u: goto label_1ad220;
            case 0x1AD224u: goto label_1ad224;
            case 0x1AD228u: goto label_1ad228;
            case 0x1AD22Cu: goto label_1ad22c;
            case 0x1AD230u: goto label_1ad230;
            case 0x1AD234u: goto label_1ad234;
            case 0x1AD238u: goto label_1ad238;
            case 0x1AD23Cu: goto label_1ad23c;
            case 0x1AD240u: goto label_1ad240;
            case 0x1AD244u: goto label_1ad244;
            case 0x1AD248u: goto label_1ad248;
            case 0x1AD24Cu: goto label_1ad24c;
            case 0x1AD250u: goto label_1ad250;
            case 0x1AD254u: goto label_1ad254;
            case 0x1AD258u: goto label_1ad258;
            case 0x1AD25Cu: goto label_1ad25c;
            case 0x1AD260u: goto label_1ad260;
            case 0x1AD264u: goto label_1ad264;
            case 0x1AD268u: goto label_1ad268;
            case 0x1AD26Cu: goto label_1ad26c;
            case 0x1AD270u: goto label_1ad270;
            case 0x1AD274u: goto label_1ad274;
            case 0x1AD278u: goto label_1ad278;
            case 0x1AD27Cu: goto label_1ad27c;
            case 0x1AD280u: goto label_1ad280;
            case 0x1AD284u: goto label_1ad284;
            case 0x1AD288u: goto label_1ad288;
            case 0x1AD28Cu: goto label_1ad28c;
            case 0x1AD290u: goto label_1ad290;
            case 0x1AD294u: goto label_1ad294;
            case 0x1AD298u: goto label_1ad298;
            case 0x1AD29Cu: goto label_1ad29c;
            case 0x1AD2A0u: goto label_1ad2a0;
            case 0x1AD2A4u: goto label_1ad2a4;
            case 0x1AD2A8u: goto label_1ad2a8;
            case 0x1AD2ACu: goto label_1ad2ac;
            case 0x1AD2B0u: goto label_1ad2b0;
            case 0x1AD2B4u: goto label_1ad2b4;
            case 0x1AD2B8u: goto label_1ad2b8;
            case 0x1AD2BCu: goto label_1ad2bc;
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2C4u: goto label_1ad2c4;
            case 0x1AD2C8u: goto label_1ad2c8;
            case 0x1AD2CCu: goto label_1ad2cc;
            case 0x1AD2D0u: goto label_1ad2d0;
            case 0x1AD2D4u: goto label_1ad2d4;
            case 0x1AD2D8u: goto label_1ad2d8;
            case 0x1AD2DCu: goto label_1ad2dc;
            case 0x1AD2E0u: goto label_1ad2e0;
            case 0x1AD2E4u: goto label_1ad2e4;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD2F0u: goto label_1ad2f0;
            case 0x1AD2F4u: goto label_1ad2f4;
            case 0x1AD2F8u: goto label_1ad2f8;
            case 0x1AD2FCu: goto label_1ad2fc;
            case 0x1AD300u: goto label_1ad300;
            case 0x1AD304u: goto label_1ad304;
            case 0x1AD308u: goto label_1ad308;
            case 0x1AD30Cu: goto label_1ad30c;
            case 0x1AD310u: goto label_1ad310;
            case 0x1AD314u: goto label_1ad314;
            case 0x1AD318u: goto label_1ad318;
            case 0x1AD31Cu: goto label_1ad31c;
            case 0x1AD320u: goto label_1ad320;
            case 0x1AD324u: goto label_1ad324;
            case 0x1AD328u: goto label_1ad328;
            case 0x1AD32Cu: goto label_1ad32c;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD334u: goto label_1ad334;
            case 0x1AD338u: goto label_1ad338;
            case 0x1AD33Cu: goto label_1ad33c;
            case 0x1AD340u: goto label_1ad340;
            case 0x1AD344u: goto label_1ad344;
            case 0x1AD348u: goto label_1ad348;
            case 0x1AD34Cu: goto label_1ad34c;
            case 0x1AD350u: goto label_1ad350;
            case 0x1AD354u: goto label_1ad354;
            case 0x1AD358u: goto label_1ad358;
            case 0x1AD35Cu: goto label_1ad35c;
            case 0x1AD360u: goto label_1ad360;
            case 0x1AD364u: goto label_1ad364;
            case 0x1AD368u: goto label_1ad368;
            case 0x1AD36Cu: goto label_1ad36c;
            case 0x1AD370u: goto label_1ad370;
            case 0x1AD374u: goto label_1ad374;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD37Cu: goto label_1ad37c;
            case 0x1AD380u: goto label_1ad380;
            case 0x1AD384u: goto label_1ad384;
            case 0x1AD388u: goto label_1ad388;
            case 0x1AD38Cu: goto label_1ad38c;
            case 0x1AD390u: goto label_1ad390;
            case 0x1AD394u: goto label_1ad394;
            case 0x1AD398u: goto label_1ad398;
            case 0x1AD39Cu: goto label_1ad39c;
            case 0x1AD3A0u: goto label_1ad3a0;
            case 0x1AD3A4u: goto label_1ad3a4;
            case 0x1AD3A8u: goto label_1ad3a8;
            case 0x1AD3ACu: goto label_1ad3ac;
            case 0x1AD3B0u: goto label_1ad3b0;
            case 0x1AD3B4u: goto label_1ad3b4;
            case 0x1AD3B8u: goto label_1ad3b8;
            case 0x1AD3BCu: goto label_1ad3bc;
            case 0x1AD3C0u: goto label_1ad3c0;
            case 0x1AD3C4u: goto label_1ad3c4;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD3CCu: goto label_1ad3cc;
            case 0x1AD3D0u: goto label_1ad3d0;
            case 0x1AD3D4u: goto label_1ad3d4;
            case 0x1AD3D8u: goto label_1ad3d8;
            case 0x1AD3DCu: goto label_1ad3dc;
            case 0x1AD3E0u: goto label_1ad3e0;
            case 0x1AD3E4u: goto label_1ad3e4;
            case 0x1AD3E8u: goto label_1ad3e8;
            case 0x1AD3ECu: goto label_1ad3ec;
            case 0x1AD3F0u: goto label_1ad3f0;
            case 0x1AD3F4u: goto label_1ad3f4;
            case 0x1AD3F8u: goto label_1ad3f8;
            case 0x1AD3FCu: goto label_1ad3fc;
            case 0x1AD400u: goto label_1ad400;
            case 0x1AD404u: goto label_1ad404;
            case 0x1AD408u: goto label_1ad408;
            case 0x1AD40Cu: goto label_1ad40c;
            case 0x1AD410u: goto label_1ad410;
            case 0x1AD414u: goto label_1ad414;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD41Cu: goto label_1ad41c;
            case 0x1AD420u: goto label_1ad420;
            case 0x1AD424u: goto label_1ad424;
            case 0x1AD428u: goto label_1ad428;
            case 0x1AD42Cu: goto label_1ad42c;
            case 0x1AD430u: goto label_1ad430;
            case 0x1AD434u: goto label_1ad434;
            case 0x1AD438u: goto label_1ad438;
            case 0x1AD43Cu: goto label_1ad43c;
            case 0x1AD440u: goto label_1ad440;
            case 0x1AD444u: goto label_1ad444;
            case 0x1AD448u: goto label_1ad448;
            case 0x1AD44Cu: goto label_1ad44c;
            case 0x1AD450u: goto label_1ad450;
            case 0x1AD454u: goto label_1ad454;
            case 0x1AD458u: goto label_1ad458;
            case 0x1AD45Cu: goto label_1ad45c;
            case 0x1AD460u: goto label_1ad460;
            case 0x1AD464u: goto label_1ad464;
            case 0x1AD468u: goto label_1ad468;
            case 0x1AD46Cu: goto label_1ad46c;
            case 0x1AD470u: goto label_1ad470;
            case 0x1AD474u: goto label_1ad474;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD47Cu: goto label_1ad47c;
            case 0x1AD480u: goto label_1ad480;
            case 0x1AD484u: goto label_1ad484;
            case 0x1AD488u: goto label_1ad488;
            case 0x1AD48Cu: goto label_1ad48c;
            case 0x1AD490u: goto label_1ad490;
            case 0x1AD494u: goto label_1ad494;
            case 0x1AD498u: goto label_1ad498;
            case 0x1AD49Cu: goto label_1ad49c;
            case 0x1AD4A0u: goto label_1ad4a0;
            case 0x1AD4A4u: goto label_1ad4a4;
            case 0x1AD4A8u: goto label_1ad4a8;
            case 0x1AD4ACu: goto label_1ad4ac;
            case 0x1AD4B0u: goto label_1ad4b0;
            case 0x1AD4B4u: goto label_1ad4b4;
            case 0x1AD4B8u: goto label_1ad4b8;
            case 0x1AD4BCu: goto label_1ad4bc;
            case 0x1AD4C0u: goto label_1ad4c0;
            case 0x1AD4C4u: goto label_1ad4c4;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD4CCu: goto label_1ad4cc;
            case 0x1AD4D0u: goto label_1ad4d0;
            case 0x1AD4D4u: goto label_1ad4d4;
            case 0x1AD4D8u: goto label_1ad4d8;
            case 0x1AD4DCu: goto label_1ad4dc;
            case 0x1AD4E0u: goto label_1ad4e0;
            case 0x1AD4E4u: goto label_1ad4e4;
            case 0x1AD4E8u: goto label_1ad4e8;
            case 0x1AD4ECu: goto label_1ad4ec;
            case 0x1AD4F0u: goto label_1ad4f0;
            case 0x1AD4F4u: goto label_1ad4f4;
            case 0x1AD4F8u: goto label_1ad4f8;
            case 0x1AD4FCu: goto label_1ad4fc;
            case 0x1AD500u: goto label_1ad500;
            case 0x1AD504u: goto label_1ad504;
            case 0x1AD508u: goto label_1ad508;
            case 0x1AD50Cu: goto label_1ad50c;
            case 0x1AD510u: goto label_1ad510;
            case 0x1AD514u: goto label_1ad514;
            case 0x1AD518u: goto label_1ad518;
            case 0x1AD51Cu: goto label_1ad51c;
            case 0x1AD520u: goto label_1ad520;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD528u: goto label_1ad528;
            case 0x1AD52Cu: goto label_1ad52c;
            case 0x1AD530u: goto label_1ad530;
            case 0x1AD534u: goto label_1ad534;
            case 0x1AD538u: goto label_1ad538;
            case 0x1AD53Cu: goto label_1ad53c;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD544u: goto label_1ad544;
            case 0x1AD548u: goto label_1ad548;
            case 0x1AD54Cu: goto label_1ad54c;
            case 0x1AD550u: goto label_1ad550;
            case 0x1AD554u: goto label_1ad554;
            case 0x1AD558u: goto label_1ad558;
            case 0x1AD55Cu: goto label_1ad55c;
            case 0x1AD560u: goto label_1ad560;
            case 0x1AD564u: goto label_1ad564;
            case 0x1AD568u: goto label_1ad568;
            case 0x1AD56Cu: goto label_1ad56c;
            case 0x1AD570u: goto label_1ad570;
            case 0x1AD574u: goto label_1ad574;
            case 0x1AD578u: goto label_1ad578;
            case 0x1AD57Cu: goto label_1ad57c;
            case 0x1AD580u: goto label_1ad580;
            case 0x1AD584u: goto label_1ad584;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD548u; }
            if (ctx->pc != 0x1AD548u) { return; }
        }
    }
    ctx->pc = 0x1AD548u;
label_1ad548:
    // 0x1ad548: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ad54c:
    if (ctx->pc == 0x1AD54Cu) {
        ctx->pc = 0x1AD550u;
        goto label_1ad550;
    }
    ctx->pc = 0x1AD548u;
    {
        const bool branch_taken_0x1ad548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad548) {
            ctx->pc = 0x1AD570u;
            goto label_1ad570;
        }
    }
    ctx->pc = 0x1AD550u;
label_1ad550:
    // 0x1ad550: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1ad550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1ad554:
    // 0x1ad554: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ad554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ad558:
    // 0x1ad558: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x1ad558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_1ad55c:
    // 0x1ad55c: 0x24c6cd10  addiu       $a2, $a2, -0x32F0
    ctx->pc = 0x1ad55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954256));
label_1ad560:
    // 0x1ad560: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ad560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ad564:
    // 0x1ad564: 0xc053ca4  jal         func_14F290
label_1ad568:
    if (ctx->pc == 0x1AD568u) {
        ctx->pc = 0x1AD568u;
            // 0x1ad568: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD56Cu;
        goto label_1ad56c;
    }
    ctx->pc = 0x1AD564u;
    SET_GPR_U32(ctx, 31, 0x1AD56Cu);
    ctx->pc = 0x1AD568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD564u;
            // 0x1ad568: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD56Cu; }
        if (ctx->pc != 0x1AD56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD56Cu; }
        if (ctx->pc != 0x1AD56Cu) { return; }
    }
    ctx->pc = 0x1AD56Cu;
label_1ad56c:
    // 0x1ad56c: 0x0  nop
    ctx->pc = 0x1ad56cu;
    // NOP
label_1ad570:
    // 0x1ad570: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ad570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ad574:
    // 0x1ad574: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ad574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad578:
    // 0x1ad578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ad578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ad57c:
    // 0x1ad57c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ad57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ad580:
    // 0x1ad580: 0x3e00008  jr          $ra
label_1ad584:
    if (ctx->pc == 0x1AD584u) {
        ctx->pc = 0x1AD584u;
            // 0x1ad584: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1AD588u;
        goto label_fallthrough_0x1ad580;
    }
    ctx->pc = 0x1AD580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD580u;
            // 0x1ad584: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACF10u: goto label_1acf10;
            case 0x1ACF14u: goto label_1acf14;
            case 0x1ACF18u: goto label_1acf18;
            case 0x1ACF1Cu: goto label_1acf1c;
            case 0x1ACF20u: goto label_1acf20;
            case 0x1ACF24u: goto label_1acf24;
            case 0x1ACF28u: goto label_1acf28;
            case 0x1ACF2Cu: goto label_1acf2c;
            case 0x1ACF30u: goto label_1acf30;
            case 0x1ACF34u: goto label_1acf34;
            case 0x1ACF38u: goto label_1acf38;
            case 0x1ACF3Cu: goto label_1acf3c;
            case 0x1ACF40u: goto label_1acf40;
            case 0x1ACF44u: goto label_1acf44;
            case 0x1ACF48u: goto label_1acf48;
            case 0x1ACF4Cu: goto label_1acf4c;
            case 0x1ACF50u: goto label_1acf50;
            case 0x1ACF54u: goto label_1acf54;
            case 0x1ACF58u: goto label_1acf58;
            case 0x1ACF5Cu: goto label_1acf5c;
            case 0x1ACF60u: goto label_1acf60;
            case 0x1ACF64u: goto label_1acf64;
            case 0x1ACF68u: goto label_1acf68;
            case 0x1ACF6Cu: goto label_1acf6c;
            case 0x1ACF70u: goto label_1acf70;
            case 0x1ACF74u: goto label_1acf74;
            case 0x1ACF78u: goto label_1acf78;
            case 0x1ACF7Cu: goto label_1acf7c;
            case 0x1ACF80u: goto label_1acf80;
            case 0x1ACF84u: goto label_1acf84;
            case 0x1ACF88u: goto label_1acf88;
            case 0x1ACF8Cu: goto label_1acf8c;
            case 0x1ACF90u: goto label_1acf90;
            case 0x1ACF94u: goto label_1acf94;
            case 0x1ACF98u: goto label_1acf98;
            case 0x1ACF9Cu: goto label_1acf9c;
            case 0x1ACFA0u: goto label_1acfa0;
            case 0x1ACFA4u: goto label_1acfa4;
            case 0x1ACFA8u: goto label_1acfa8;
            case 0x1ACFACu: goto label_1acfac;
            case 0x1ACFB0u: goto label_1acfb0;
            case 0x1ACFB4u: goto label_1acfb4;
            case 0x1ACFB8u: goto label_1acfb8;
            case 0x1ACFBCu: goto label_1acfbc;
            case 0x1ACFC0u: goto label_1acfc0;
            case 0x1ACFC4u: goto label_1acfc4;
            case 0x1ACFC8u: goto label_1acfc8;
            case 0x1ACFCCu: goto label_1acfcc;
            case 0x1ACFD0u: goto label_1acfd0;
            case 0x1ACFD4u: goto label_1acfd4;
            case 0x1ACFD8u: goto label_1acfd8;
            case 0x1ACFDCu: goto label_1acfdc;
            case 0x1ACFE0u: goto label_1acfe0;
            case 0x1ACFE4u: goto label_1acfe4;
            case 0x1ACFE8u: goto label_1acfe8;
            case 0x1ACFECu: goto label_1acfec;
            case 0x1ACFF0u: goto label_1acff0;
            case 0x1ACFF4u: goto label_1acff4;
            case 0x1ACFF8u: goto label_1acff8;
            case 0x1ACFFCu: goto label_1acffc;
            case 0x1AD000u: goto label_1ad000;
            case 0x1AD004u: goto label_1ad004;
            case 0x1AD008u: goto label_1ad008;
            case 0x1AD00Cu: goto label_1ad00c;
            case 0x1AD010u: goto label_1ad010;
            case 0x1AD014u: goto label_1ad014;
            case 0x1AD018u: goto label_1ad018;
            case 0x1AD01Cu: goto label_1ad01c;
            case 0x1AD020u: goto label_1ad020;
            case 0x1AD024u: goto label_1ad024;
            case 0x1AD028u: goto label_1ad028;
            case 0x1AD02Cu: goto label_1ad02c;
            case 0x1AD030u: goto label_1ad030;
            case 0x1AD034u: goto label_1ad034;
            case 0x1AD038u: goto label_1ad038;
            case 0x1AD03Cu: goto label_1ad03c;
            case 0x1AD040u: goto label_1ad040;
            case 0x1AD044u: goto label_1ad044;
            case 0x1AD048u: goto label_1ad048;
            case 0x1AD04Cu: goto label_1ad04c;
            case 0x1AD050u: goto label_1ad050;
            case 0x1AD054u: goto label_1ad054;
            case 0x1AD058u: goto label_1ad058;
            case 0x1AD05Cu: goto label_1ad05c;
            case 0x1AD060u: goto label_1ad060;
            case 0x1AD064u: goto label_1ad064;
            case 0x1AD068u: goto label_1ad068;
            case 0x1AD06Cu: goto label_1ad06c;
            case 0x1AD070u: goto label_1ad070;
            case 0x1AD074u: goto label_1ad074;
            case 0x1AD078u: goto label_1ad078;
            case 0x1AD07Cu: goto label_1ad07c;
            case 0x1AD080u: goto label_1ad080;
            case 0x1AD084u: goto label_1ad084;
            case 0x1AD088u: goto label_1ad088;
            case 0x1AD08Cu: goto label_1ad08c;
            case 0x1AD090u: goto label_1ad090;
            case 0x1AD094u: goto label_1ad094;
            case 0x1AD098u: goto label_1ad098;
            case 0x1AD09Cu: goto label_1ad09c;
            case 0x1AD0A0u: goto label_1ad0a0;
            case 0x1AD0A4u: goto label_1ad0a4;
            case 0x1AD0A8u: goto label_1ad0a8;
            case 0x1AD0ACu: goto label_1ad0ac;
            case 0x1AD0B0u: goto label_1ad0b0;
            case 0x1AD0B4u: goto label_1ad0b4;
            case 0x1AD0B8u: goto label_1ad0b8;
            case 0x1AD0BCu: goto label_1ad0bc;
            case 0x1AD0C0u: goto label_1ad0c0;
            case 0x1AD0C4u: goto label_1ad0c4;
            case 0x1AD0C8u: goto label_1ad0c8;
            case 0x1AD0CCu: goto label_1ad0cc;
            case 0x1AD0D0u: goto label_1ad0d0;
            case 0x1AD0D4u: goto label_1ad0d4;
            case 0x1AD0D8u: goto label_1ad0d8;
            case 0x1AD0DCu: goto label_1ad0dc;
            case 0x1AD0E0u: goto label_1ad0e0;
            case 0x1AD0E4u: goto label_1ad0e4;
            case 0x1AD0E8u: goto label_1ad0e8;
            case 0x1AD0ECu: goto label_1ad0ec;
            case 0x1AD0F0u: goto label_1ad0f0;
            case 0x1AD0F4u: goto label_1ad0f4;
            case 0x1AD0F8u: goto label_1ad0f8;
            case 0x1AD0FCu: goto label_1ad0fc;
            case 0x1AD100u: goto label_1ad100;
            case 0x1AD104u: goto label_1ad104;
            case 0x1AD108u: goto label_1ad108;
            case 0x1AD10Cu: goto label_1ad10c;
            case 0x1AD110u: goto label_1ad110;
            case 0x1AD114u: goto label_1ad114;
            case 0x1AD118u: goto label_1ad118;
            case 0x1AD11Cu: goto label_1ad11c;
            case 0x1AD120u: goto label_1ad120;
            case 0x1AD124u: goto label_1ad124;
            case 0x1AD128u: goto label_1ad128;
            case 0x1AD12Cu: goto label_1ad12c;
            case 0x1AD130u: goto label_1ad130;
            case 0x1AD134u: goto label_1ad134;
            case 0x1AD138u: goto label_1ad138;
            case 0x1AD13Cu: goto label_1ad13c;
            case 0x1AD140u: goto label_1ad140;
            case 0x1AD144u: goto label_1ad144;
            case 0x1AD148u: goto label_1ad148;
            case 0x1AD14Cu: goto label_1ad14c;
            case 0x1AD150u: goto label_1ad150;
            case 0x1AD154u: goto label_1ad154;
            case 0x1AD158u: goto label_1ad158;
            case 0x1AD15Cu: goto label_1ad15c;
            case 0x1AD160u: goto label_1ad160;
            case 0x1AD164u: goto label_1ad164;
            case 0x1AD168u: goto label_1ad168;
            case 0x1AD16Cu: goto label_1ad16c;
            case 0x1AD170u: goto label_1ad170;
            case 0x1AD174u: goto label_1ad174;
            case 0x1AD178u: goto label_1ad178;
            case 0x1AD17Cu: goto label_1ad17c;
            case 0x1AD180u: goto label_1ad180;
            case 0x1AD184u: goto label_1ad184;
            case 0x1AD188u: goto label_1ad188;
            case 0x1AD18Cu: goto label_1ad18c;
            case 0x1AD190u: goto label_1ad190;
            case 0x1AD194u: goto label_1ad194;
            case 0x1AD198u: goto label_1ad198;
            case 0x1AD19Cu: goto label_1ad19c;
            case 0x1AD1A0u: goto label_1ad1a0;
            case 0x1AD1A4u: goto label_1ad1a4;
            case 0x1AD1A8u: goto label_1ad1a8;
            case 0x1AD1ACu: goto label_1ad1ac;
            case 0x1AD1B0u: goto label_1ad1b0;
            case 0x1AD1B4u: goto label_1ad1b4;
            case 0x1AD1B8u: goto label_1ad1b8;
            case 0x1AD1BCu: goto label_1ad1bc;
            case 0x1AD1C0u: goto label_1ad1c0;
            case 0x1AD1C4u: goto label_1ad1c4;
            case 0x1AD1C8u: goto label_1ad1c8;
            case 0x1AD1CCu: goto label_1ad1cc;
            case 0x1AD1D0u: goto label_1ad1d0;
            case 0x1AD1D4u: goto label_1ad1d4;
            case 0x1AD1D8u: goto label_1ad1d8;
            case 0x1AD1DCu: goto label_1ad1dc;
            case 0x1AD1E0u: goto label_1ad1e0;
            case 0x1AD1E4u: goto label_1ad1e4;
            case 0x1AD1E8u: goto label_1ad1e8;
            case 0x1AD1ECu: goto label_1ad1ec;
            case 0x1AD1F0u: goto label_1ad1f0;
            case 0x1AD1F4u: goto label_1ad1f4;
            case 0x1AD1F8u: goto label_1ad1f8;
            case 0x1AD1FCu: goto label_1ad1fc;
            case 0x1AD200u: goto label_1ad200;
            case 0x1AD204u: goto label_1ad204;
            case 0x1AD208u: goto label_1ad208;
            case 0x1AD20Cu: goto label_1ad20c;
            case 0x1AD210u: goto label_1ad210;
            case 0x1AD214u: goto label_1ad214;
            case 0x1AD218u: goto label_1ad218;
            case 0x1AD21Cu: goto label_1ad21c;
            case 0x1AD220u: goto label_1ad220;
            case 0x1AD224u: goto label_1ad224;
            case 0x1AD228u: goto label_1ad228;
            case 0x1AD22Cu: goto label_1ad22c;
            case 0x1AD230u: goto label_1ad230;
            case 0x1AD234u: goto label_1ad234;
            case 0x1AD238u: goto label_1ad238;
            case 0x1AD23Cu: goto label_1ad23c;
            case 0x1AD240u: goto label_1ad240;
            case 0x1AD244u: goto label_1ad244;
            case 0x1AD248u: goto label_1ad248;
            case 0x1AD24Cu: goto label_1ad24c;
            case 0x1AD250u: goto label_1ad250;
            case 0x1AD254u: goto label_1ad254;
            case 0x1AD258u: goto label_1ad258;
            case 0x1AD25Cu: goto label_1ad25c;
            case 0x1AD260u: goto label_1ad260;
            case 0x1AD264u: goto label_1ad264;
            case 0x1AD268u: goto label_1ad268;
            case 0x1AD26Cu: goto label_1ad26c;
            case 0x1AD270u: goto label_1ad270;
            case 0x1AD274u: goto label_1ad274;
            case 0x1AD278u: goto label_1ad278;
            case 0x1AD27Cu: goto label_1ad27c;
            case 0x1AD280u: goto label_1ad280;
            case 0x1AD284u: goto label_1ad284;
            case 0x1AD288u: goto label_1ad288;
            case 0x1AD28Cu: goto label_1ad28c;
            case 0x1AD290u: goto label_1ad290;
            case 0x1AD294u: goto label_1ad294;
            case 0x1AD298u: goto label_1ad298;
            case 0x1AD29Cu: goto label_1ad29c;
            case 0x1AD2A0u: goto label_1ad2a0;
            case 0x1AD2A4u: goto label_1ad2a4;
            case 0x1AD2A8u: goto label_1ad2a8;
            case 0x1AD2ACu: goto label_1ad2ac;
            case 0x1AD2B0u: goto label_1ad2b0;
            case 0x1AD2B4u: goto label_1ad2b4;
            case 0x1AD2B8u: goto label_1ad2b8;
            case 0x1AD2BCu: goto label_1ad2bc;
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2C4u: goto label_1ad2c4;
            case 0x1AD2C8u: goto label_1ad2c8;
            case 0x1AD2CCu: goto label_1ad2cc;
            case 0x1AD2D0u: goto label_1ad2d0;
            case 0x1AD2D4u: goto label_1ad2d4;
            case 0x1AD2D8u: goto label_1ad2d8;
            case 0x1AD2DCu: goto label_1ad2dc;
            case 0x1AD2E0u: goto label_1ad2e0;
            case 0x1AD2E4u: goto label_1ad2e4;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD2F0u: goto label_1ad2f0;
            case 0x1AD2F4u: goto label_1ad2f4;
            case 0x1AD2F8u: goto label_1ad2f8;
            case 0x1AD2FCu: goto label_1ad2fc;
            case 0x1AD300u: goto label_1ad300;
            case 0x1AD304u: goto label_1ad304;
            case 0x1AD308u: goto label_1ad308;
            case 0x1AD30Cu: goto label_1ad30c;
            case 0x1AD310u: goto label_1ad310;
            case 0x1AD314u: goto label_1ad314;
            case 0x1AD318u: goto label_1ad318;
            case 0x1AD31Cu: goto label_1ad31c;
            case 0x1AD320u: goto label_1ad320;
            case 0x1AD324u: goto label_1ad324;
            case 0x1AD328u: goto label_1ad328;
            case 0x1AD32Cu: goto label_1ad32c;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD334u: goto label_1ad334;
            case 0x1AD338u: goto label_1ad338;
            case 0x1AD33Cu: goto label_1ad33c;
            case 0x1AD340u: goto label_1ad340;
            case 0x1AD344u: goto label_1ad344;
            case 0x1AD348u: goto label_1ad348;
            case 0x1AD34Cu: goto label_1ad34c;
            case 0x1AD350u: goto label_1ad350;
            case 0x1AD354u: goto label_1ad354;
            case 0x1AD358u: goto label_1ad358;
            case 0x1AD35Cu: goto label_1ad35c;
            case 0x1AD360u: goto label_1ad360;
            case 0x1AD364u: goto label_1ad364;
            case 0x1AD368u: goto label_1ad368;
            case 0x1AD36Cu: goto label_1ad36c;
            case 0x1AD370u: goto label_1ad370;
            case 0x1AD374u: goto label_1ad374;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD37Cu: goto label_1ad37c;
            case 0x1AD380u: goto label_1ad380;
            case 0x1AD384u: goto label_1ad384;
            case 0x1AD388u: goto label_1ad388;
            case 0x1AD38Cu: goto label_1ad38c;
            case 0x1AD390u: goto label_1ad390;
            case 0x1AD394u: goto label_1ad394;
            case 0x1AD398u: goto label_1ad398;
            case 0x1AD39Cu: goto label_1ad39c;
            case 0x1AD3A0u: goto label_1ad3a0;
            case 0x1AD3A4u: goto label_1ad3a4;
            case 0x1AD3A8u: goto label_1ad3a8;
            case 0x1AD3ACu: goto label_1ad3ac;
            case 0x1AD3B0u: goto label_1ad3b0;
            case 0x1AD3B4u: goto label_1ad3b4;
            case 0x1AD3B8u: goto label_1ad3b8;
            case 0x1AD3BCu: goto label_1ad3bc;
            case 0x1AD3C0u: goto label_1ad3c0;
            case 0x1AD3C4u: goto label_1ad3c4;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD3CCu: goto label_1ad3cc;
            case 0x1AD3D0u: goto label_1ad3d0;
            case 0x1AD3D4u: goto label_1ad3d4;
            case 0x1AD3D8u: goto label_1ad3d8;
            case 0x1AD3DCu: goto label_1ad3dc;
            case 0x1AD3E0u: goto label_1ad3e0;
            case 0x1AD3E4u: goto label_1ad3e4;
            case 0x1AD3E8u: goto label_1ad3e8;
            case 0x1AD3ECu: goto label_1ad3ec;
            case 0x1AD3F0u: goto label_1ad3f0;
            case 0x1AD3F4u: goto label_1ad3f4;
            case 0x1AD3F8u: goto label_1ad3f8;
            case 0x1AD3FCu: goto label_1ad3fc;
            case 0x1AD400u: goto label_1ad400;
            case 0x1AD404u: goto label_1ad404;
            case 0x1AD408u: goto label_1ad408;
            case 0x1AD40Cu: goto label_1ad40c;
            case 0x1AD410u: goto label_1ad410;
            case 0x1AD414u: goto label_1ad414;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD41Cu: goto label_1ad41c;
            case 0x1AD420u: goto label_1ad420;
            case 0x1AD424u: goto label_1ad424;
            case 0x1AD428u: goto label_1ad428;
            case 0x1AD42Cu: goto label_1ad42c;
            case 0x1AD430u: goto label_1ad430;
            case 0x1AD434u: goto label_1ad434;
            case 0x1AD438u: goto label_1ad438;
            case 0x1AD43Cu: goto label_1ad43c;
            case 0x1AD440u: goto label_1ad440;
            case 0x1AD444u: goto label_1ad444;
            case 0x1AD448u: goto label_1ad448;
            case 0x1AD44Cu: goto label_1ad44c;
            case 0x1AD450u: goto label_1ad450;
            case 0x1AD454u: goto label_1ad454;
            case 0x1AD458u: goto label_1ad458;
            case 0x1AD45Cu: goto label_1ad45c;
            case 0x1AD460u: goto label_1ad460;
            case 0x1AD464u: goto label_1ad464;
            case 0x1AD468u: goto label_1ad468;
            case 0x1AD46Cu: goto label_1ad46c;
            case 0x1AD470u: goto label_1ad470;
            case 0x1AD474u: goto label_1ad474;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD47Cu: goto label_1ad47c;
            case 0x1AD480u: goto label_1ad480;
            case 0x1AD484u: goto label_1ad484;
            case 0x1AD488u: goto label_1ad488;
            case 0x1AD48Cu: goto label_1ad48c;
            case 0x1AD490u: goto label_1ad490;
            case 0x1AD494u: goto label_1ad494;
            case 0x1AD498u: goto label_1ad498;
            case 0x1AD49Cu: goto label_1ad49c;
            case 0x1AD4A0u: goto label_1ad4a0;
            case 0x1AD4A4u: goto label_1ad4a4;
            case 0x1AD4A8u: goto label_1ad4a8;
            case 0x1AD4ACu: goto label_1ad4ac;
            case 0x1AD4B0u: goto label_1ad4b0;
            case 0x1AD4B4u: goto label_1ad4b4;
            case 0x1AD4B8u: goto label_1ad4b8;
            case 0x1AD4BCu: goto label_1ad4bc;
            case 0x1AD4C0u: goto label_1ad4c0;
            case 0x1AD4C4u: goto label_1ad4c4;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD4CCu: goto label_1ad4cc;
            case 0x1AD4D0u: goto label_1ad4d0;
            case 0x1AD4D4u: goto label_1ad4d4;
            case 0x1AD4D8u: goto label_1ad4d8;
            case 0x1AD4DCu: goto label_1ad4dc;
            case 0x1AD4E0u: goto label_1ad4e0;
            case 0x1AD4E4u: goto label_1ad4e4;
            case 0x1AD4E8u: goto label_1ad4e8;
            case 0x1AD4ECu: goto label_1ad4ec;
            case 0x1AD4F0u: goto label_1ad4f0;
            case 0x1AD4F4u: goto label_1ad4f4;
            case 0x1AD4F8u: goto label_1ad4f8;
            case 0x1AD4FCu: goto label_1ad4fc;
            case 0x1AD500u: goto label_1ad500;
            case 0x1AD504u: goto label_1ad504;
            case 0x1AD508u: goto label_1ad508;
            case 0x1AD50Cu: goto label_1ad50c;
            case 0x1AD510u: goto label_1ad510;
            case 0x1AD514u: goto label_1ad514;
            case 0x1AD518u: goto label_1ad518;
            case 0x1AD51Cu: goto label_1ad51c;
            case 0x1AD520u: goto label_1ad520;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD528u: goto label_1ad528;
            case 0x1AD52Cu: goto label_1ad52c;
            case 0x1AD530u: goto label_1ad530;
            case 0x1AD534u: goto label_1ad534;
            case 0x1AD538u: goto label_1ad538;
            case 0x1AD53Cu: goto label_1ad53c;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD544u: goto label_1ad544;
            case 0x1AD548u: goto label_1ad548;
            case 0x1AD54Cu: goto label_1ad54c;
            case 0x1AD550u: goto label_1ad550;
            case 0x1AD554u: goto label_1ad554;
            case 0x1AD558u: goto label_1ad558;
            case 0x1AD55Cu: goto label_1ad55c;
            case 0x1AD560u: goto label_1ad560;
            case 0x1AD564u: goto label_1ad564;
            case 0x1AD568u: goto label_1ad568;
            case 0x1AD56Cu: goto label_1ad56c;
            case 0x1AD570u: goto label_1ad570;
            case 0x1AD574u: goto label_1ad574;
            case 0x1AD578u: goto label_1ad578;
            case 0x1AD57Cu: goto label_1ad57c;
            case 0x1AD580u: goto label_1ad580;
            case 0x1AD584u: goto label_1ad584;
            default: break;
        }
        return;
    }
label_fallthrough_0x1ad580:
    ctx->pc = 0x1AD588u;
}

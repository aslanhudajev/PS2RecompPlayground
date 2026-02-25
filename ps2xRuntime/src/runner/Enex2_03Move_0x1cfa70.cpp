#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex2_03Move
// Address: 0x1cfa70 - 0x1d0cd4
void Enex2_03Move_0x1cfa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex2_03Move_0x1cfa70");
#endif

    ctx->pc = 0x1cfa70u;

label_1cfa70:
    // 0x1cfa70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cfa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1cfa74:
    // 0x1cfa74: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1cfa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1cfa78:
    // 0x1cfa78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cfa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cfa7c:
    // 0x1cfa7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cfa7cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cfa80:
    // 0x1cfa80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cfa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cfa84:
    // 0x1cfa84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfa84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfa88:
    // 0x1cfa88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cfa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cfa8c:
    // 0x1cfa8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cfa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cfa90:
    // 0x1cfa90: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1cfa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cfa94:
    // 0x1cfa94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfa94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa98:
    // 0x1cfa98: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1cfa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfa9c:
    // 0x1cfa9c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cfa9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cfaa0:
    // 0x1cfaa0: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1cfaa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1cfaa4:
    // 0x1cfaa4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cfaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cfaa8:
    // 0x1cfaa8: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1cfaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cfaac:
    // 0x1cfaac: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1cfaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfab0:
    // 0x1cfab0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cfab0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cfab4:
    // 0x1cfab4: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1cfab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1cfab8:
    // 0x1cfab8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cfab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cfabc:
    // 0x1cfabc: 0xc48200d8  lwc1        $f2, 0xD8($a0)
    ctx->pc = 0x1cfabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cfac0:
    // 0x1cfac0: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1cfac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfac4:
    // 0x1cfac4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cfac4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cfac8:
    // 0x1cfac8: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x1cfac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_1cfacc:
    // 0x1cfacc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cfaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cfad0:
    // 0x1cfad0: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1cfad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cfad4:
    // 0x1cfad4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1cfad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfad8:
    // 0x1cfad8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cfad8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cfadc:
    // 0x1cfadc: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1cfadcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1cfae0:
    // 0x1cfae0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cfae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cfae4:
    // 0x1cfae4: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1cfae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cfae8:
    // 0x1cfae8: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1cfae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfaec:
    // 0x1cfaec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cfaecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cfaf0:
    // 0x1cfaf0: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1cfaf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1cfaf4:
    // 0x1cfaf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cfaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cfaf8:
    // 0x1cfaf8: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1cfaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cfafc:
    // 0x1cfafc: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1cfafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfb00:
    // 0x1cfb00: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cfb00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cfb04:
    // 0x1cfb04: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1cfb04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1cfb08:
    // 0x1cfb08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cfb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cfb0c:
    // 0x1cfb0c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1cfb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfb10:
    // 0x1cfb10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cfb10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfb14:
    // 0x1cfb14: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1cfb18:
    if (ctx->pc == 0x1CFB18u) {
        ctx->pc = 0x1CFB18u;
            // 0x1cfb18: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1CFB1Cu;
        goto label_1cfb1c;
    }
    ctx->pc = 0x1CFB14u;
    {
        const bool branch_taken_0x1cfb14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB14u;
            // 0x1cfb18: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb14) {
            ctx->pc = 0x1CFB38u;
            goto label_1cfb38;
        }
    }
    ctx->pc = 0x1CFB1Cu;
label_1cfb1c:
    // 0x1cfb1c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cfb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cfb20:
    // 0x1cfb20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cfb20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cfb24:
    // 0x1cfb24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfb28:
    // 0x1cfb28: 0x0  nop
    ctx->pc = 0x1cfb28u;
    // NOP
label_1cfb2c:
    // 0x1cfb2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfb2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cfb30:
    // 0x1cfb30: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1cfb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1cfb34:
    // 0x1cfb34: 0x0  nop
    ctx->pc = 0x1cfb34u;
    // NOP
label_1cfb38:
    // 0x1cfb38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cfb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cfb3c:
    // 0x1cfb3c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cfb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1cfb40:
    // 0x1cfb40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cfb40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cfb44:
    // 0x1cfb44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfb48:
    // 0x1cfb48: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1cfb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfb4c:
    // 0x1cfb4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfb4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfb50:
    // 0x1cfb50: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1cfb54:
    if (ctx->pc == 0x1CFB54u) {
        ctx->pc = 0x1CFB54u;
            // 0x1cfb54: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1CFB58u;
        goto label_1cfb58;
    }
    ctx->pc = 0x1CFB50u;
    {
        const bool branch_taken_0x1cfb50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB50u;
            // 0x1cfb54: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb50) {
            ctx->pc = 0x1CFB70u;
            goto label_1cfb70;
        }
    }
    ctx->pc = 0x1CFB58u;
label_1cfb58:
    // 0x1cfb58: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cfb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cfb5c:
    // 0x1cfb5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cfb5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cfb60:
    // 0x1cfb60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfb64:
    // 0x1cfb64: 0x0  nop
    ctx->pc = 0x1cfb64u;
    // NOP
label_1cfb68:
    // 0x1cfb68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cfb68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cfb6c:
    // 0x1cfb6c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cfb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cfb70:
    // 0x1cfb70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cfb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cfb74:
    // 0x1cfb74: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1cfb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1cfb78:
    // 0x1cfb78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cfb78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cfb7c:
    // 0x1cfb7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfb7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfb80:
    // 0x1cfb80: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1cfb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfb84:
    // 0x1cfb84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cfb84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfb88:
    // 0x1cfb88: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1cfb8c:
    if (ctx->pc == 0x1CFB8Cu) {
        ctx->pc = 0x1CFB8Cu;
            // 0x1cfb8c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1CFB90u;
        goto label_1cfb90;
    }
    ctx->pc = 0x1CFB88u;
    {
        const bool branch_taken_0x1cfb88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB88u;
            // 0x1cfb8c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb88) {
            ctx->pc = 0x1CFBA8u;
            goto label_1cfba8;
        }
    }
    ctx->pc = 0x1CFB90u;
label_1cfb90:
    // 0x1cfb90: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cfb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cfb94:
    // 0x1cfb94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cfb94u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cfb98:
    // 0x1cfb98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfb98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfb9c:
    // 0x1cfb9c: 0x0  nop
    ctx->pc = 0x1cfb9cu;
    // NOP
label_1cfba0:
    // 0x1cfba0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cfba4:
    // 0x1cfba4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cfba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cfba8:
    // 0x1cfba8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cfba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cfbac:
    // 0x1cfbac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cfbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1cfbb0:
    // 0x1cfbb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cfbb0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cfbb4:
    // 0x1cfbb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfbb8:
    // 0x1cfbb8: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1cfbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfbbc:
    // 0x1cfbbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfbbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfbc0:
    // 0x1cfbc0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1cfbc4:
    if (ctx->pc == 0x1CFBC4u) {
        ctx->pc = 0x1CFBC4u;
            // 0x1cfbc4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1CFBC8u;
        goto label_1cfbc8;
    }
    ctx->pc = 0x1CFBC0u;
    {
        const bool branch_taken_0x1cfbc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFBC0u;
            // 0x1cfbc4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfbc0) {
            ctx->pc = 0x1CFBE0u;
            goto label_1cfbe0;
        }
    }
    ctx->pc = 0x1CFBC8u;
label_1cfbc8:
    // 0x1cfbc8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cfbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cfbcc:
    // 0x1cfbcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cfbccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cfbd0:
    // 0x1cfbd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfbd4:
    // 0x1cfbd4: 0x0  nop
    ctx->pc = 0x1cfbd4u;
    // NOP
label_1cfbd8:
    // 0x1cfbd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cfbd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cfbdc:
    // 0x1cfbdc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cfbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cfbe0:
    // 0x1cfbe0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cfbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cfbe4:
    // 0x1cfbe4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1cfbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1cfbe8:
    // 0x1cfbe8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cfbe8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cfbec:
    // 0x1cfbec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfbf0:
    // 0x1cfbf0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1cfbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfbf4:
    // 0x1cfbf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cfbf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfbf8:
    // 0x1cfbf8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1cfbfc:
    if (ctx->pc == 0x1CFBFCu) {
        ctx->pc = 0x1CFBFCu;
            // 0x1cfbfc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1CFC00u;
        goto label_1cfc00;
    }
    ctx->pc = 0x1CFBF8u;
    {
        const bool branch_taken_0x1cfbf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFBF8u;
            // 0x1cfbfc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfbf8) {
            ctx->pc = 0x1CFC18u;
            goto label_1cfc18;
        }
    }
    ctx->pc = 0x1CFC00u;
label_1cfc00:
    // 0x1cfc00: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cfc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cfc04:
    // 0x1cfc04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cfc04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cfc08:
    // 0x1cfc08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfc0c:
    // 0x1cfc0c: 0x0  nop
    ctx->pc = 0x1cfc0cu;
    // NOP
label_1cfc10:
    // 0x1cfc10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfc10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cfc14:
    // 0x1cfc14: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cfc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cfc18:
    // 0x1cfc18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cfc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cfc1c:
    // 0x1cfc1c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cfc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1cfc20:
    // 0x1cfc20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cfc20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cfc24:
    // 0x1cfc24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfc24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfc28:
    // 0x1cfc28: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1cfc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfc2c:
    // 0x1cfc2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfc2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfc30:
    // 0x1cfc30: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1cfc34:
    if (ctx->pc == 0x1CFC34u) {
        ctx->pc = 0x1CFC34u;
            // 0x1cfc34: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1CFC38u;
        goto label_1cfc38;
    }
    ctx->pc = 0x1CFC30u;
    {
        const bool branch_taken_0x1cfc30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC30u;
            // 0x1cfc34: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc30) {
            ctx->pc = 0x1CFC50u;
            goto label_1cfc50;
        }
    }
    ctx->pc = 0x1CFC38u;
label_1cfc38:
    // 0x1cfc38: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cfc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cfc3c:
    // 0x1cfc3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cfc3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cfc40:
    // 0x1cfc40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfc44:
    // 0x1cfc44: 0x0  nop
    ctx->pc = 0x1cfc44u;
    // NOP
label_1cfc48:
    // 0x1cfc48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cfc48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cfc4c:
    // 0x1cfc4c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cfc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cfc50:
    // 0x1cfc50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cfc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cfc54:
    // 0x1cfc54: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1cfc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1cfc58:
    // 0x1cfc58: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1cfc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cfc5c:
    // 0x1cfc5c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1cfc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cfc60:
    // 0x1cfc60: 0xc074338  jal         func_1D0CE0
label_1cfc64:
    if (ctx->pc == 0x1CFC64u) {
        ctx->pc = 0x1CFC64u;
            // 0x1cfc64: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x1CFC68u;
        goto label_1cfc68;
    }
    ctx->pc = 0x1CFC60u;
    SET_GPR_U32(ctx, 31, 0x1CFC68u);
    ctx->pc = 0x1CFC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC60u;
            // 0x1cfc64: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0CE0u;
    if (runtime->hasFunction(0x1D0CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D0CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC68u; }
        if (ctx->pc != 0x1CFC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1d0ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC68u; }
        if (ctx->pc != 0x1CFC68u) { return; }
    }
    ctx->pc = 0x1CFC68u;
label_1cfc68:
    // 0x1cfc68: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1cfc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1cfc6c:
    // 0x1cfc6c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1cfc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1cfc70:
    // 0x1cfc70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cfc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1cfc74:
    // 0x1cfc74: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1cfc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1cfc78:
    // 0x1cfc78: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1cfc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1cfc7c:
    // 0x1cfc7c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1cfc7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1cfc80:
    // 0x1cfc80: 0x10200369  beqz        $at, . + 4 + (0x369 << 2)
label_1cfc84:
    if (ctx->pc == 0x1CFC84u) {
        ctx->pc = 0x1CFC84u;
            // 0x1cfc84: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1CFC88u;
        goto label_1cfc88;
    }
    ctx->pc = 0x1CFC80u;
    {
        const bool branch_taken_0x1cfc80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC80u;
            // 0x1cfc84: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc80) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1CFC88u;
label_1cfc88:
    // 0x1cfc88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cfc8c:
    // 0x1cfc8c: 0x24632cb0  addiu       $v1, $v1, 0x2CB0
    ctx->pc = 0x1cfc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11440));
label_1cfc90:
    // 0x1cfc90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cfc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cfc94:
    // 0x1cfc94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cfc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cfc98:
    // 0x1cfc98: 0x400008  jr          $v0
label_1cfc9c:
    if (ctx->pc == 0x1CFC9Cu) {
        ctx->pc = 0x1CFCA0u;
        goto label_1cfca0;
    }
    ctx->pc = 0x1CFC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFCA0u: goto label_1cfca0;
            case 0x1CFF28u: goto label_1cff28;
            case 0x1D0370u: goto label_1d0370;
            case 0x1D0860u: goto label_1d0860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CFCA0u;
label_1cfca0:
    // 0x1cfca0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1cfca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1cfca4:
    // 0x1cfca4: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_1cfca8:
    if (ctx->pc == 0x1CFCA8u) {
        ctx->pc = 0x1CFCACu;
        goto label_1cfcac;
    }
    ctx->pc = 0x1CFCA4u;
    {
        const bool branch_taken_0x1cfca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfca4) {
            ctx->pc = 0x1CFD48u;
            goto label_1cfd48;
        }
    }
    ctx->pc = 0x1CFCACu;
label_1cfcac:
    // 0x1cfcac: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1cfcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfcb0:
    // 0x1cfcb0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1cfcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1cfcb4:
    // 0x1cfcb4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cfcb4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cfcb8:
    // 0x1cfcb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfcb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfcbc:
    // 0x1cfcbc: 0x0  nop
    ctx->pc = 0x1cfcbcu;
    // NOP
label_1cfcc0:
    // 0x1cfcc0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1cfcc0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cfcc4:
    // 0x1cfcc4: 0xc040d72  jal         func_1035C8
label_1cfcc8:
    if (ctx->pc == 0x1CFCC8u) {
        ctx->pc = 0x1CFCC8u;
            // 0x1cfcc8: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1CFCCCu;
        goto label_1cfccc;
    }
    ctx->pc = 0x1CFCC4u;
    SET_GPR_U32(ctx, 31, 0x1CFCCCu);
    ctx->pc = 0x1CFCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCC4u;
            // 0x1cfcc8: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCCCu; }
        if (ctx->pc != 0x1CFCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCCCu; }
        if (ctx->pc != 0x1CFCCCu) { return; }
    }
    ctx->pc = 0x1CFCCCu;
label_1cfccc:
    // 0x1cfccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cfcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfcd0:
    // 0x1cfcd0: 0xc040078  jal         func_1001E0
label_1cfcd4:
    if (ctx->pc == 0x1CFCD4u) {
        ctx->pc = 0x1CFCD4u;
            // 0x1cfcd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCD8u;
        goto label_1cfcd8;
    }
    ctx->pc = 0x1CFCD0u;
    SET_GPR_U32(ctx, 31, 0x1CFCD8u);
    ctx->pc = 0x1CFCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCD0u;
            // 0x1cfcd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCD8u; }
        if (ctx->pc != 0x1CFCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCD8u; }
        if (ctx->pc != 0x1CFCD8u) { return; }
    }
    ctx->pc = 0x1CFCD8u;
label_1cfcd8:
    // 0x1cfcd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1cfcdc:
    if (ctx->pc == 0x1CFCDCu) {
        ctx->pc = 0x1CFCE0u;
        goto label_1cfce0;
    }
    ctx->pc = 0x1CFCD8u;
    {
        const bool branch_taken_0x1cfcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfcd8) {
            ctx->pc = 0x1CFD00u;
            goto label_1cfd00;
        }
    }
    ctx->pc = 0x1CFCE0u;
label_1cfce0:
    // 0x1cfce0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1cfce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfce4:
    // 0x1cfce4: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1cfce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1cfce8:
    // 0x1cfce8: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1cfce8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1cfcec:
    // 0x1cfcec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfcecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfcf0:
    // 0x1cfcf0: 0x0  nop
    ctx->pc = 0x1cfcf0u;
    // NOP
label_1cfcf4:
    // 0x1cfcf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cfcf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cfcf8:
    // 0x1cfcf8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1cfcfc:
    if (ctx->pc == 0x1CFCFCu) {
        ctx->pc = 0x1CFCFCu;
            // 0x1cfcfc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1CFD00u;
        goto label_1cfd00;
    }
    ctx->pc = 0x1CFCF8u;
    {
        const bool branch_taken_0x1cfcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCF8u;
            // 0x1cfcfc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcf8) {
            ctx->pc = 0x1CFD10u;
            goto label_1cfd10;
        }
    }
    ctx->pc = 0x1CFD00u;
label_1cfd00:
    // 0x1cfd00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfd04:
    // 0x1cfd04: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1cfd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1cfd08:
    // 0x1cfd08: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cfd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1cfd0c:
    // 0x1cfd0c: 0x0  nop
    ctx->pc = 0x1cfd0cu;
    // NOP
label_1cfd10:
    // 0x1cfd10: 0xc065d00  jal         func_197400
label_1cfd14:
    if (ctx->pc == 0x1CFD14u) {
        ctx->pc = 0x1CFD18u;
        goto label_1cfd18;
    }
    ctx->pc = 0x1CFD10u;
    SET_GPR_U32(ctx, 31, 0x1CFD18u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD18u; }
        if (ctx->pc != 0x1CFD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD18u; }
        if (ctx->pc != 0x1CFD18u) { return; }
    }
    ctx->pc = 0x1CFD18u;
label_1cfd18:
    // 0x1cfd18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cfd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cfd1c:
    // 0x1cfd1c: 0x14430342  bne         $v0, $v1, . + 4 + (0x342 << 2)
label_1cfd20:
    if (ctx->pc == 0x1CFD20u) {
        ctx->pc = 0x1CFD24u;
        goto label_1cfd24;
    }
    ctx->pc = 0x1CFD1Cu;
    {
        const bool branch_taken_0x1cfd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfd1c) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1CFD24u;
label_1cfd24:
    // 0x1cfd24: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1cfd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cfd28:
    // 0x1cfd28: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1cfd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cfd2c:
    // 0x1cfd2c: 0x1462033e  bne         $v1, $v0, . + 4 + (0x33E << 2)
label_1cfd30:
    if (ctx->pc == 0x1CFD30u) {
        ctx->pc = 0x1CFD34u;
        goto label_1cfd34;
    }
    ctx->pc = 0x1CFD2Cu;
    {
        const bool branch_taken_0x1cfd2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cfd2c) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1CFD34u;
label_1cfd34:
    // 0x1cfd34: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1cfd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1cfd38:
    // 0x1cfd38: 0xc06560c  jal         func_195830
label_1cfd3c:
    if (ctx->pc == 0x1CFD3Cu) {
        ctx->pc = 0x1CFD3Cu;
            // 0x1cfd3c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1CFD40u;
        goto label_1cfd40;
    }
    ctx->pc = 0x1CFD38u;
    SET_GPR_U32(ctx, 31, 0x1CFD40u);
    ctx->pc = 0x1CFD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD38u;
            // 0x1cfd3c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD40u; }
        if (ctx->pc != 0x1CFD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD40u; }
        if (ctx->pc != 0x1CFD40u) { return; }
    }
    ctx->pc = 0x1CFD40u;
label_1cfd40:
    // 0x1cfd40: 0x10000339  b           . + 4 + (0x339 << 2)
label_1cfd44:
    if (ctx->pc == 0x1CFD44u) {
        ctx->pc = 0x1CFD48u;
        goto label_1cfd48;
    }
    ctx->pc = 0x1CFD40u;
    {
        const bool branch_taken_0x1cfd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd40) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1CFD48u;
label_1cfd48:
    // 0x1cfd48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfd4c:
    // 0x1cfd4c: 0x1462004e  bne         $v1, $v0, . + 4 + (0x4E << 2)
label_1cfd50:
    if (ctx->pc == 0x1CFD50u) {
        ctx->pc = 0x1CFD50u;
            // 0x1cfd50: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1CFD54u;
        goto label_1cfd54;
    }
    ctx->pc = 0x1CFD4Cu;
    {
        const bool branch_taken_0x1cfd4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CFD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD4Cu;
            // 0x1cfd50: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd4c) {
            ctx->pc = 0x1CFE88u;
            goto label_1cfe88;
        }
    }
    ctx->pc = 0x1CFD54u;
label_1cfd54:
    // 0x1cfd54: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1cfd54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cfd58:
    // 0x1cfd58: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1cfd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1cfd5c:
    // 0x1cfd5c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cfd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1cfd60:
    // 0x1cfd60: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1cfd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cfd64:
    // 0x1cfd64: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1cfd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cfd68:
    // 0x1cfd68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1cfd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1cfd6c:
    // 0x1cfd6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cfd6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfd70:
    // 0x1cfd70: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1cfd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1cfd74:
    // 0x1cfd74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cfd74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cfd78:
    // 0x1cfd78: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1cfd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1cfd7c:
    // 0x1cfd7c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cfd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cfd80:
    // 0x1cfd80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cfd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cfd84:
    // 0x1cfd84: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1cfd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1cfd88:
    // 0x1cfd88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfd8c:
    // 0x1cfd8c: 0x0  nop
    ctx->pc = 0x1cfd8cu;
    // NOP
label_1cfd90:
    // 0x1cfd90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cfd90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cfd94:
    // 0x1cfd94: 0xc04b6ee  jal         func_12DBB8
label_1cfd98:
    if (ctx->pc == 0x1CFD98u) {
        ctx->pc = 0x1CFD98u;
            // 0x1cfd98: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1CFD9Cu;
        goto label_1cfd9c;
    }
    ctx->pc = 0x1CFD94u;
    SET_GPR_U32(ctx, 31, 0x1CFD9Cu);
    ctx->pc = 0x1CFD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD94u;
            // 0x1cfd98: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD9Cu; }
        if (ctx->pc != 0x1CFD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD9Cu; }
        if (ctx->pc != 0x1CFD9Cu) { return; }
    }
    ctx->pc = 0x1CFD9Cu;
label_1cfd9c:
    // 0x1cfd9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cfd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cfda0:
    // 0x1cfda0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1cfda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfda4:
    // 0x1cfda4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1cfda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfda8:
    // 0x1cfda8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cfda8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1cfdac:
    // 0x1cfdac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfdacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfdb0:
    // 0x1cfdb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1cfdb4:
    if (ctx->pc == 0x1CFDB4u) {
        ctx->pc = 0x1CFDB4u;
            // 0x1cfdb4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1CFDB8u;
        goto label_1cfdb8;
    }
    ctx->pc = 0x1CFDB0u;
    {
        const bool branch_taken_0x1cfdb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDB0u;
            // 0x1cfdb4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdb0) {
            ctx->pc = 0x1CFDC0u;
            goto label_1cfdc0;
        }
    }
    ctx->pc = 0x1CFDB8u;
label_1cfdb8:
    // 0x1cfdb8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cfdb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cfdbc:
    // 0x1cfdbc: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1cfdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1cfdc0:
    // 0x1cfdc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cfdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cfdc4:
    // 0x1cfdc4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1cfdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfdc8:
    // 0x1cfdc8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1cfdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfdcc:
    // 0x1cfdcc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cfdccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1cfdd0:
    // 0x1cfdd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cfdd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfdd4:
    // 0x1cfdd4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1cfdd8:
    if (ctx->pc == 0x1CFDD8u) {
        ctx->pc = 0x1CFDD8u;
            // 0x1cfdd8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1CFDDCu;
        goto label_1cfddc;
    }
    ctx->pc = 0x1CFDD4u;
    {
        const bool branch_taken_0x1cfdd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDD4u;
            // 0x1cfdd8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdd4) {
            ctx->pc = 0x1CFDE8u;
            goto label_1cfde8;
        }
    }
    ctx->pc = 0x1CFDDCu;
label_1cfddc:
    // 0x1cfddc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cfddcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cfde0:
    // 0x1cfde0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1cfde0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1cfde4:
    // 0x1cfde4: 0x0  nop
    ctx->pc = 0x1cfde4u;
    // NOP
label_1cfde8:
    // 0x1cfde8: 0xc065d00  jal         func_197400
label_1cfdec:
    if (ctx->pc == 0x1CFDECu) {
        ctx->pc = 0x1CFDF0u;
        goto label_1cfdf0;
    }
    ctx->pc = 0x1CFDE8u;
    SET_GPR_U32(ctx, 31, 0x1CFDF0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDF0u; }
        if (ctx->pc != 0x1CFDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDF0u; }
        if (ctx->pc != 0x1CFDF0u) { return; }
    }
    ctx->pc = 0x1CFDF0u;
label_1cfdf0:
    // 0x1cfdf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cfdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cfdf4:
    // 0x1cfdf4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1cfdf8:
    if (ctx->pc == 0x1CFDF8u) {
        ctx->pc = 0x1CFDFCu;
        goto label_1cfdfc;
    }
    ctx->pc = 0x1CFDF4u;
    {
        const bool branch_taken_0x1cfdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfdf4) {
            ctx->pc = 0x1CFE18u;
            goto label_1cfe18;
        }
    }
    ctx->pc = 0x1CFDFCu;
label_1cfdfc:
    // 0x1cfdfc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1cfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cfe00:
    // 0x1cfe00: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1cfe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cfe04:
    // 0x1cfe04: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1cfe08:
    if (ctx->pc == 0x1CFE08u) {
        ctx->pc = 0x1CFE0Cu;
        goto label_1cfe0c;
    }
    ctx->pc = 0x1CFE04u;
    {
        const bool branch_taken_0x1cfe04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cfe04) {
            ctx->pc = 0x1CFE18u;
            goto label_1cfe18;
        }
    }
    ctx->pc = 0x1CFE0Cu;
label_1cfe0c:
    // 0x1cfe0c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1cfe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1cfe10:
    // 0x1cfe10: 0xc06560c  jal         func_195830
label_1cfe14:
    if (ctx->pc == 0x1CFE14u) {
        ctx->pc = 0x1CFE14u;
            // 0x1cfe14: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1CFE18u;
        goto label_1cfe18;
    }
    ctx->pc = 0x1CFE10u;
    SET_GPR_U32(ctx, 31, 0x1CFE18u);
    ctx->pc = 0x1CFE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE10u;
            // 0x1cfe14: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE18u; }
        if (ctx->pc != 0x1CFE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE18u; }
        if (ctx->pc != 0x1CFE18u) { return; }
    }
    ctx->pc = 0x1CFE18u;
label_1cfe18:
    // 0x1cfe18: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1cfe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cfe1c:
    // 0x1cfe1c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1cfe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1cfe20:
    // 0x1cfe20: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1cfe24:
    if (ctx->pc == 0x1CFE24u) {
        ctx->pc = 0x1CFE28u;
        goto label_1cfe28;
    }
    ctx->pc = 0x1CFE20u;
    {
        const bool branch_taken_0x1cfe20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cfe20) {
            ctx->pc = 0x1CFE38u;
            goto label_1cfe38;
        }
    }
    ctx->pc = 0x1CFE28u;
label_1cfe28:
    // 0x1cfe28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cfe28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cfe2c:
    // 0x1cfe2c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1cfe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1cfe30:
    // 0x1cfe30: 0xc0655b0  jal         func_1956C0
label_1cfe34:
    if (ctx->pc == 0x1CFE34u) {
        ctx->pc = 0x1CFE34u;
            // 0x1cfe34: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1CFE38u;
        goto label_1cfe38;
    }
    ctx->pc = 0x1CFE30u;
    SET_GPR_U32(ctx, 31, 0x1CFE38u);
    ctx->pc = 0x1CFE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE30u;
            // 0x1cfe34: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE38u; }
        if (ctx->pc != 0x1CFE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE38u; }
        if (ctx->pc != 0x1CFE38u) { return; }
    }
    ctx->pc = 0x1CFE38u;
label_1cfe38:
    // 0x1cfe38: 0xc065d00  jal         func_197400
label_1cfe3c:
    if (ctx->pc == 0x1CFE3Cu) {
        ctx->pc = 0x1CFE40u;
        goto label_1cfe40;
    }
    ctx->pc = 0x1CFE38u;
    SET_GPR_U32(ctx, 31, 0x1CFE40u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE40u; }
        if (ctx->pc != 0x1CFE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE40u; }
        if (ctx->pc != 0x1CFE40u) { return; }
    }
    ctx->pc = 0x1CFE40u;
label_1cfe40:
    // 0x1cfe40: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1cfe40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cfe44:
    // 0x1cfe44: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1cfe48:
    if (ctx->pc == 0x1CFE48u) {
        ctx->pc = 0x1CFE4Cu;
        goto label_1cfe4c;
    }
    ctx->pc = 0x1CFE44u;
    {
        const bool branch_taken_0x1cfe44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfe44) {
            ctx->pc = 0x1CFE68u;
            goto label_1cfe68;
        }
    }
    ctx->pc = 0x1CFE4Cu;
label_1cfe4c:
    // 0x1cfe4c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1cfe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cfe50:
    // 0x1cfe50: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1cfe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1cfe54:
    // 0x1cfe54: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1cfe58:
    if (ctx->pc == 0x1CFE58u) {
        ctx->pc = 0x1CFE5Cu;
        goto label_1cfe5c;
    }
    ctx->pc = 0x1CFE54u;
    {
        const bool branch_taken_0x1cfe54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cfe54) {
            ctx->pc = 0x1CFE68u;
            goto label_1cfe68;
        }
    }
    ctx->pc = 0x1CFE5Cu;
label_1cfe5c:
    // 0x1cfe5c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1cfe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1cfe60:
    // 0x1cfe60: 0xc06560c  jal         func_195830
label_1cfe64:
    if (ctx->pc == 0x1CFE64u) {
        ctx->pc = 0x1CFE64u;
            // 0x1cfe64: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1CFE68u;
        goto label_1cfe68;
    }
    ctx->pc = 0x1CFE60u;
    SET_GPR_U32(ctx, 31, 0x1CFE68u);
    ctx->pc = 0x1CFE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE60u;
            // 0x1cfe64: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE68u; }
        if (ctx->pc != 0x1CFE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE68u; }
        if (ctx->pc != 0x1CFE68u) { return; }
    }
    ctx->pc = 0x1CFE68u;
label_1cfe68:
    // 0x1cfe68: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1cfe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cfe6c:
    // 0x1cfe6c: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1cfe6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1cfe70:
    // 0x1cfe70: 0x142002ed  bnez        $at, . + 4 + (0x2ED << 2)
label_1cfe74:
    if (ctx->pc == 0x1CFE74u) {
        ctx->pc = 0x1CFE74u;
            // 0x1cfe74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1CFE78u;
        goto label_1cfe78;
    }
    ctx->pc = 0x1CFE70u;
    {
        const bool branch_taken_0x1cfe70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE70u;
            // 0x1cfe74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe70) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1CFE78u;
label_1cfe78:
    // 0x1cfe78: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1cfe78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1cfe7c:
    // 0x1cfe7c: 0x100002ea  b           . + 4 + (0x2EA << 2)
label_1cfe80:
    if (ctx->pc == 0x1CFE80u) {
        ctx->pc = 0x1CFE80u;
            // 0x1cfe80: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1CFE84u;
        goto label_1cfe84;
    }
    ctx->pc = 0x1CFE7Cu;
    {
        const bool branch_taken_0x1cfe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE7Cu;
            // 0x1cfe80: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe7c) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1CFE84u;
label_1cfe84:
    // 0x1cfe84: 0x0  nop
    ctx->pc = 0x1cfe84u;
    // NOP
label_1cfe88:
    // 0x1cfe88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cfe8c:
    // 0x1cfe8c: 0x146202e6  bne         $v1, $v0, . + 4 + (0x2E6 << 2)
label_1cfe90:
    if (ctx->pc == 0x1CFE90u) {
        ctx->pc = 0x1CFE94u;
        goto label_1cfe94;
    }
    ctx->pc = 0x1CFE8Cu;
    {
        const bool branch_taken_0x1cfe8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cfe8c) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1CFE94u;
label_1cfe94:
    // 0x1cfe94: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1cfe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cfe98:
    // 0x1cfe98: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1cfe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1cfe9c:
    // 0x1cfe9c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cfe9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cfea0:
    // 0x1cfea0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cfea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cfea4:
    // 0x1cfea4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfea8:
    // 0x1cfea8: 0x0  nop
    ctx->pc = 0x1cfea8u;
    // NOP
label_1cfeac:
    // 0x1cfeac: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1cfeacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1cfeb0:
    // 0x1cfeb0: 0xe60100d4  swc1        $f1, 0xD4($s0)
    ctx->pc = 0x1cfeb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1cfeb4:
    // 0x1cfeb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cfeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cfeb8:
    // 0x1cfeb8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1cfeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfebc:
    // 0x1cfebc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfec0:
    // 0x1cfec0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1cfec4:
    if (ctx->pc == 0x1CFEC4u) {
        ctx->pc = 0x1CFEC4u;
            // 0x1cfec4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1CFEC8u;
        goto label_1cfec8;
    }
    ctx->pc = 0x1CFEC0u;
    {
        const bool branch_taken_0x1cfec0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFEC0u;
            // 0x1cfec4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfec0) {
            ctx->pc = 0x1CFED8u;
            goto label_1cfed8;
        }
    }
    ctx->pc = 0x1CFEC8u;
label_1cfec8:
    // 0x1cfec8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cfec8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cfecc:
    // 0x1cfecc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cfed0:
    if (ctx->pc == 0x1CFED0u) {
        ctx->pc = 0x1CFED0u;
            // 0x1cfed0: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x1CFED4u;
        goto label_1cfed4;
    }
    ctx->pc = 0x1CFECCu;
    {
        const bool branch_taken_0x1cfecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFECCu;
            // 0x1cfed0: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfecc) {
            ctx->pc = 0x1CFEF0u;
            goto label_1cfef0;
        }
    }
    ctx->pc = 0x1CFED4u;
label_1cfed4:
    // 0x1cfed4: 0x0  nop
    ctx->pc = 0x1cfed4u;
    // NOP
label_1cfed8:
    // 0x1cfed8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfedc:
    // 0x1cfedc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1cfee0:
    if (ctx->pc == 0x1CFEE0u) {
        ctx->pc = 0x1CFEE0u;
            // 0x1cfee0: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1CFEE4u;
        goto label_1cfee4;
    }
    ctx->pc = 0x1CFEDCu;
    {
        const bool branch_taken_0x1cfedc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFEDCu;
            // 0x1cfee0: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfedc) {
            ctx->pc = 0x1CFEF0u;
            goto label_1cfef0;
        }
    }
    ctx->pc = 0x1CFEE4u;
label_1cfee4:
    // 0x1cfee4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cfee4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cfee8:
    // 0x1cfee8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1cfee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1cfeec:
    // 0x1cfeec: 0x0  nop
    ctx->pc = 0x1cfeecu;
    // NOP
label_1cfef0:
    // 0x1cfef0: 0xc065d00  jal         func_197400
label_1cfef4:
    if (ctx->pc == 0x1CFEF4u) {
        ctx->pc = 0x1CFEF8u;
        goto label_1cfef8;
    }
    ctx->pc = 0x1CFEF0u;
    SET_GPR_U32(ctx, 31, 0x1CFEF8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEF8u; }
        if (ctx->pc != 0x1CFEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEF8u; }
        if (ctx->pc != 0x1CFEF8u) { return; }
    }
    ctx->pc = 0x1CFEF8u;
label_1cfef8:
    // 0x1cfef8: 0x184002cb  blez        $v0, . + 4 + (0x2CB << 2)
label_1cfefc:
    if (ctx->pc == 0x1CFEFCu) {
        ctx->pc = 0x1CFF00u;
        goto label_1cff00;
    }
    ctx->pc = 0x1CFEF8u;
    {
        const bool branch_taken_0x1cfef8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1cfef8) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1CFF00u;
label_1cff00:
    // 0x1cff00: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1cff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cff04:
    // 0x1cff04: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1cff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cff08:
    // 0x1cff08: 0x146202c7  bne         $v1, $v0, . + 4 + (0x2C7 << 2)
label_1cff0c:
    if (ctx->pc == 0x1CFF0Cu) {
        ctx->pc = 0x1CFF10u;
        goto label_1cff10;
    }
    ctx->pc = 0x1CFF08u;
    {
        const bool branch_taken_0x1cff08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cff08) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1CFF10u;
label_1cff10:
    // 0x1cff10: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1cff10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1cff14:
    // 0x1cff14: 0xc06560c  jal         func_195830
label_1cff18:
    if (ctx->pc == 0x1CFF18u) {
        ctx->pc = 0x1CFF18u;
            // 0x1cff18: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1CFF1Cu;
        goto label_1cff1c;
    }
    ctx->pc = 0x1CFF14u;
    SET_GPR_U32(ctx, 31, 0x1CFF1Cu);
    ctx->pc = 0x1CFF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF14u;
            // 0x1cff18: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF1Cu; }
        if (ctx->pc != 0x1CFF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF1Cu; }
        if (ctx->pc != 0x1CFF1Cu) { return; }
    }
    ctx->pc = 0x1CFF1Cu;
label_1cff1c:
    // 0x1cff1c: 0x100002c2  b           . + 4 + (0x2C2 << 2)
label_1cff20:
    if (ctx->pc == 0x1CFF20u) {
        ctx->pc = 0x1CFF24u;
        goto label_1cff24;
    }
    ctx->pc = 0x1CFF1Cu;
    {
        const bool branch_taken_0x1cff1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff1c) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1CFF24u;
label_1cff24:
    // 0x1cff24: 0x0  nop
    ctx->pc = 0x1cff24u;
    // NOP
label_1cff28:
    // 0x1cff28: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1cff28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1cff2c:
    // 0x1cff2c: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
label_1cff30:
    if (ctx->pc == 0x1CFF30u) {
        ctx->pc = 0x1CFF34u;
        goto label_1cff34;
    }
    ctx->pc = 0x1CFF2Cu;
    {
        const bool branch_taken_0x1cff2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cff2c) {
            ctx->pc = 0x1D0048u;
            goto label_1d0048;
        }
    }
    ctx->pc = 0x1CFF34u;
label_1cff34:
    // 0x1cff34: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1cff34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cff38:
    // 0x1cff38: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1cff38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1cff3c:
    // 0x1cff3c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cff3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cff40:
    // 0x1cff40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cff40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cff44:
    // 0x1cff44: 0x0  nop
    ctx->pc = 0x1cff44u;
    // NOP
label_1cff48:
    // 0x1cff48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cff48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cff4c:
    // 0x1cff4c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1cff4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1cff50:
    // 0x1cff50: 0xc040d72  jal         func_1035C8
label_1cff54:
    if (ctx->pc == 0x1CFF54u) {
        ctx->pc = 0x1CFF54u;
            // 0x1cff54: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1CFF58u;
        goto label_1cff58;
    }
    ctx->pc = 0x1CFF50u;
    SET_GPR_U32(ctx, 31, 0x1CFF58u);
    ctx->pc = 0x1CFF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF50u;
            // 0x1cff54: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF58u; }
        if (ctx->pc != 0x1CFF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF58u; }
        if (ctx->pc != 0x1CFF58u) { return; }
    }
    ctx->pc = 0x1CFF58u;
label_1cff58:
    // 0x1cff58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cff58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cff5c:
    // 0x1cff5c: 0xc040078  jal         func_1001E0
label_1cff60:
    if (ctx->pc == 0x1CFF60u) {
        ctx->pc = 0x1CFF60u;
            // 0x1cff60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF64u;
        goto label_1cff64;
    }
    ctx->pc = 0x1CFF5Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF64u);
    ctx->pc = 0x1CFF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF5Cu;
            // 0x1cff60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF64u; }
        if (ctx->pc != 0x1CFF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF64u; }
        if (ctx->pc != 0x1CFF64u) { return; }
    }
    ctx->pc = 0x1CFF64u;
label_1cff64:
    // 0x1cff64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cff68:
    if (ctx->pc == 0x1CFF68u) {
        ctx->pc = 0x1CFF6Cu;
        goto label_1cff6c;
    }
    ctx->pc = 0x1CFF64u;
    {
        const bool branch_taken_0x1cff64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff64) {
            ctx->pc = 0x1CFF88u;
            goto label_1cff88;
        }
    }
    ctx->pc = 0x1CFF6Cu;
label_1cff6c:
    // 0x1cff6c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1cff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cff70:
    // 0x1cff70: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1cff70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1cff74:
    // 0x1cff74: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cff74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cff78:
    // 0x1cff78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cff78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cff7c:
    // 0x1cff7c: 0x0  nop
    ctx->pc = 0x1cff7cu;
    // NOP
label_1cff80:
    // 0x1cff80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cff80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cff84:
    // 0x1cff84: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1cff84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1cff88:
    // 0x1cff88: 0xc040d72  jal         func_1035C8
label_1cff8c:
    if (ctx->pc == 0x1CFF8Cu) {
        ctx->pc = 0x1CFF8Cu;
            // 0x1cff8c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1CFF90u;
        goto label_1cff90;
    }
    ctx->pc = 0x1CFF88u;
    SET_GPR_U32(ctx, 31, 0x1CFF90u);
    ctx->pc = 0x1CFF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF88u;
            // 0x1cff8c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF90u; }
        if (ctx->pc != 0x1CFF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF90u; }
        if (ctx->pc != 0x1CFF90u) { return; }
    }
    ctx->pc = 0x1CFF90u;
label_1cff90:
    // 0x1cff90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cff94:
    // 0x1cff94: 0xc04008c  jal         func_100230
label_1cff98:
    if (ctx->pc == 0x1CFF98u) {
        ctx->pc = 0x1CFF98u;
            // 0x1cff98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF9Cu;
        goto label_1cff9c;
    }
    ctx->pc = 0x1CFF94u;
    SET_GPR_U32(ctx, 31, 0x1CFF9Cu);
    ctx->pc = 0x1CFF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF94u;
            // 0x1cff98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF9Cu; }
        if (ctx->pc != 0x1CFF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF9Cu; }
        if (ctx->pc != 0x1CFF9Cu) { return; }
    }
    ctx->pc = 0x1CFF9Cu;
label_1cff9c:
    // 0x1cff9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cffa0:
    if (ctx->pc == 0x1CFFA0u) {
        ctx->pc = 0x1CFFA4u;
        goto label_1cffa4;
    }
    ctx->pc = 0x1CFF9Cu;
    {
        const bool branch_taken_0x1cff9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff9c) {
            ctx->pc = 0x1CFFC0u;
            goto label_1cffc0;
        }
    }
    ctx->pc = 0x1CFFA4u;
label_1cffa4:
    // 0x1cffa4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1cffa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cffa8:
    // 0x1cffa8: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1cffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1cffac:
    // 0x1cffac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cffacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cffb0:
    // 0x1cffb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cffb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cffb4:
    // 0x1cffb4: 0x0  nop
    ctx->pc = 0x1cffb4u;
    // NOP
label_1cffb8:
    // 0x1cffb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cffb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cffbc:
    // 0x1cffbc: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1cffbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1cffc0:
    // 0x1cffc0: 0xc040d72  jal         func_1035C8
label_1cffc4:
    if (ctx->pc == 0x1CFFC4u) {
        ctx->pc = 0x1CFFC4u;
            // 0x1cffc4: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1CFFC8u;
        goto label_1cffc8;
    }
    ctx->pc = 0x1CFFC0u;
    SET_GPR_U32(ctx, 31, 0x1CFFC8u);
    ctx->pc = 0x1CFFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFC0u;
            // 0x1cffc4: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFC8u; }
        if (ctx->pc != 0x1CFFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFC8u; }
        if (ctx->pc != 0x1CFFC8u) { return; }
    }
    ctx->pc = 0x1CFFC8u;
label_1cffc8:
    // 0x1cffc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cffc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cffcc:
    // 0x1cffcc: 0xc040078  jal         func_1001E0
label_1cffd0:
    if (ctx->pc == 0x1CFFD0u) {
        ctx->pc = 0x1CFFD0u;
            // 0x1cffd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFD4u;
        goto label_1cffd4;
    }
    ctx->pc = 0x1CFFCCu;
    SET_GPR_U32(ctx, 31, 0x1CFFD4u);
    ctx->pc = 0x1CFFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFCCu;
            // 0x1cffd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFD4u; }
        if (ctx->pc != 0x1CFFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFD4u; }
        if (ctx->pc != 0x1CFFD4u) { return; }
    }
    ctx->pc = 0x1CFFD4u;
label_1cffd4:
    // 0x1cffd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1cffd8:
    if (ctx->pc == 0x1CFFD8u) {
        ctx->pc = 0x1CFFDCu;
        goto label_1cffdc;
    }
    ctx->pc = 0x1CFFD4u;
    {
        const bool branch_taken_0x1cffd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cffd4) {
            ctx->pc = 0x1D0000u;
            goto label_1d0000;
        }
    }
    ctx->pc = 0x1CFFDCu;
label_1cffdc:
    // 0x1cffdc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1cffdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cffe0:
    // 0x1cffe0: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1cffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1cffe4:
    // 0x1cffe4: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1cffe4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1cffe8:
    // 0x1cffe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cffe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cffec:
    // 0x1cffec: 0x0  nop
    ctx->pc = 0x1cffecu;
    // NOP
label_1cfff0:
    // 0x1cfff0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cfff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cfff4:
    // 0x1cfff4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1cfff8:
    if (ctx->pc == 0x1CFFF8u) {
        ctx->pc = 0x1CFFF8u;
            // 0x1cfff8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1CFFFCu;
        goto label_1cfffc;
    }
    ctx->pc = 0x1CFFF4u;
    {
        const bool branch_taken_0x1cfff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFF4u;
            // 0x1cfff8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfff4) {
            ctx->pc = 0x1D0010u;
            goto label_1d0010;
        }
    }
    ctx->pc = 0x1CFFFCu;
label_1cfffc:
    // 0x1cfffc: 0x0  nop
    ctx->pc = 0x1cfffcu;
    // NOP
label_1d0000:
    // 0x1d0000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0004:
    // 0x1d0004: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d0004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d0008:
    // 0x1d0008: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d0008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1d000c:
    // 0x1d000c: 0x0  nop
    ctx->pc = 0x1d000cu;
    // NOP
label_1d0010:
    // 0x1d0010: 0xc065d00  jal         func_197400
label_1d0014:
    if (ctx->pc == 0x1D0014u) {
        ctx->pc = 0x1D0018u;
        goto label_1d0018;
    }
    ctx->pc = 0x1D0010u;
    SET_GPR_U32(ctx, 31, 0x1D0018u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0018u; }
        if (ctx->pc != 0x1D0018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0018u; }
        if (ctx->pc != 0x1D0018u) { return; }
    }
    ctx->pc = 0x1D0018u;
label_1d0018:
    // 0x1d0018: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d0018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d001c:
    // 0x1d001c: 0x14430282  bne         $v0, $v1, . + 4 + (0x282 << 2)
label_1d0020:
    if (ctx->pc == 0x1D0020u) {
        ctx->pc = 0x1D0024u;
        goto label_1d0024;
    }
    ctx->pc = 0x1D001Cu;
    {
        const bool branch_taken_0x1d001c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d001c) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D0024u;
label_1d0024:
    // 0x1d0024: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d0024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d0028:
    // 0x1d0028: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d0028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d002c:
    // 0x1d002c: 0x1462027e  bne         $v1, $v0, . + 4 + (0x27E << 2)
label_1d0030:
    if (ctx->pc == 0x1D0030u) {
        ctx->pc = 0x1D0034u;
        goto label_1d0034;
    }
    ctx->pc = 0x1D002Cu;
    {
        const bool branch_taken_0x1d002c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d002c) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D0034u;
label_1d0034:
    // 0x1d0034: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d0034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d0038:
    // 0x1d0038: 0xc06560c  jal         func_195830
label_1d003c:
    if (ctx->pc == 0x1D003Cu) {
        ctx->pc = 0x1D003Cu;
            // 0x1d003c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D0040u;
        goto label_1d0040;
    }
    ctx->pc = 0x1D0038u;
    SET_GPR_U32(ctx, 31, 0x1D0040u);
    ctx->pc = 0x1D003Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0038u;
            // 0x1d003c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0040u; }
        if (ctx->pc != 0x1D0040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0040u; }
        if (ctx->pc != 0x1D0040u) { return; }
    }
    ctx->pc = 0x1D0040u;
label_1d0040:
    // 0x1d0040: 0x10000279  b           . + 4 + (0x279 << 2)
label_1d0044:
    if (ctx->pc == 0x1D0044u) {
        ctx->pc = 0x1D0048u;
        goto label_1d0048;
    }
    ctx->pc = 0x1D0040u;
    {
        const bool branch_taken_0x1d0040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0040) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D0048u;
label_1d0048:
    // 0x1d0048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d004c:
    // 0x1d004c: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
label_1d0050:
    if (ctx->pc == 0x1D0050u) {
        ctx->pc = 0x1D0050u;
            // 0x1d0050: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1D0054u;
        goto label_1d0054;
    }
    ctx->pc = 0x1D004Cu;
    {
        const bool branch_taken_0x1d004c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D004Cu;
            // 0x1d0050: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d004c) {
            ctx->pc = 0x1D01A0u;
            goto label_1d01a0;
        }
    }
    ctx->pc = 0x1D0054u;
label_1d0054:
    // 0x1d0054: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1d0054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d0058:
    // 0x1d0058: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1d0058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1d005c:
    // 0x1d005c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d005cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d0060:
    // 0x1d0060: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d0060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d0064:
    // 0x1d0064: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d0064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d0068:
    // 0x1d0068: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d0068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1d006c:
    // 0x1d006c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d006cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0070:
    // 0x1d0070: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1d0070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1d0074:
    // 0x1d0074: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d0074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d0078:
    // 0x1d0078: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d0078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d007c:
    // 0x1d007c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d007cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d0080:
    // 0x1d0080: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d0080u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0084:
    // 0x1d0084: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d0084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1d0088:
    // 0x1d0088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d008c:
    // 0x1d008c: 0x0  nop
    ctx->pc = 0x1d008cu;
    // NOP
label_1d0090:
    // 0x1d0090: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d0090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d0094:
    // 0x1d0094: 0xc04b6ee  jal         func_12DBB8
label_1d0098:
    if (ctx->pc == 0x1D0098u) {
        ctx->pc = 0x1D0098u;
            // 0x1d0098: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1D009Cu;
        goto label_1d009c;
    }
    ctx->pc = 0x1D0094u;
    SET_GPR_U32(ctx, 31, 0x1D009Cu);
    ctx->pc = 0x1D0098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0094u;
            // 0x1d0098: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D009Cu; }
        if (ctx->pc != 0x1D009Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D009Cu; }
        if (ctx->pc != 0x1D009Cu) { return; }
    }
    ctx->pc = 0x1D009Cu;
label_1d009c:
    // 0x1d009c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d00a0:
    // 0x1d00a0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d00a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d00a4:
    // 0x1d00a4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d00a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d00a8:
    // 0x1d00a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d00a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d00ac:
    // 0x1d00ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d00acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d00b0:
    // 0x1d00b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1d00b4:
    if (ctx->pc == 0x1D00B4u) {
        ctx->pc = 0x1D00B4u;
            // 0x1d00b4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1D00B8u;
        goto label_1d00b8;
    }
    ctx->pc = 0x1D00B0u;
    {
        const bool branch_taken_0x1d00b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D00B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00B0u;
            // 0x1d00b4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00b0) {
            ctx->pc = 0x1D00C0u;
            goto label_1d00c0;
        }
    }
    ctx->pc = 0x1D00B8u;
label_1d00b8:
    // 0x1d00b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d00b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d00bc:
    // 0x1d00bc: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d00bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d00c0:
    // 0x1d00c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d00c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d00c4:
    // 0x1d00c4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d00c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d00c8:
    // 0x1d00c8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d00c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d00cc:
    // 0x1d00cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d00ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d00d0:
    // 0x1d00d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d00d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d00d4:
    // 0x1d00d4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d00d8:
    if (ctx->pc == 0x1D00D8u) {
        ctx->pc = 0x1D00D8u;
            // 0x1d00d8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1D00DCu;
        goto label_1d00dc;
    }
    ctx->pc = 0x1D00D4u;
    {
        const bool branch_taken_0x1d00d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D00D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00D4u;
            // 0x1d00d8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00d4) {
            ctx->pc = 0x1D00E8u;
            goto label_1d00e8;
        }
    }
    ctx->pc = 0x1D00DCu;
label_1d00dc:
    // 0x1d00dc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d00dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d00e0:
    // 0x1d00e0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d00e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d00e4:
    // 0x1d00e4: 0x0  nop
    ctx->pc = 0x1d00e4u;
    // NOP
label_1d00e8:
    // 0x1d00e8: 0xc065d00  jal         func_197400
label_1d00ec:
    if (ctx->pc == 0x1D00ECu) {
        ctx->pc = 0x1D00F0u;
        goto label_1d00f0;
    }
    ctx->pc = 0x1D00E8u;
    SET_GPR_U32(ctx, 31, 0x1D00F0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00F0u; }
        if (ctx->pc != 0x1D00F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00F0u; }
        if (ctx->pc != 0x1D00F0u) { return; }
    }
    ctx->pc = 0x1D00F0u;
label_1d00f0:
    // 0x1d00f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d00f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d00f4:
    // 0x1d00f4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1d00f8:
    if (ctx->pc == 0x1D00F8u) {
        ctx->pc = 0x1D00FCu;
        goto label_1d00fc;
    }
    ctx->pc = 0x1D00F4u;
    {
        const bool branch_taken_0x1d00f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d00f4) {
            ctx->pc = 0x1D0118u;
            goto label_1d0118;
        }
    }
    ctx->pc = 0x1D00FCu;
label_1d00fc:
    // 0x1d00fc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d00fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d0100:
    // 0x1d0100: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d0100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d0104:
    // 0x1d0104: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d0108:
    if (ctx->pc == 0x1D0108u) {
        ctx->pc = 0x1D010Cu;
        goto label_1d010c;
    }
    ctx->pc = 0x1D0104u;
    {
        const bool branch_taken_0x1d0104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0104) {
            ctx->pc = 0x1D0118u;
            goto label_1d0118;
        }
    }
    ctx->pc = 0x1D010Cu;
label_1d010c:
    // 0x1d010c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d010cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d0110:
    // 0x1d0110: 0xc06560c  jal         func_195830
label_1d0114:
    if (ctx->pc == 0x1D0114u) {
        ctx->pc = 0x1D0114u;
            // 0x1d0114: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D0118u;
        goto label_1d0118;
    }
    ctx->pc = 0x1D0110u;
    SET_GPR_U32(ctx, 31, 0x1D0118u);
    ctx->pc = 0x1D0114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0110u;
            // 0x1d0114: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0118u; }
        if (ctx->pc != 0x1D0118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0118u; }
        if (ctx->pc != 0x1D0118u) { return; }
    }
    ctx->pc = 0x1D0118u;
label_1d0118:
    // 0x1d0118: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d0118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d011c:
    // 0x1d011c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1d011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d0120:
    // 0x1d0120: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1d0124:
    if (ctx->pc == 0x1D0124u) {
        ctx->pc = 0x1D0128u;
        goto label_1d0128;
    }
    ctx->pc = 0x1D0120u;
    {
        const bool branch_taken_0x1d0120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0120) {
            ctx->pc = 0x1D0150u;
            goto label_1d0150;
        }
    }
    ctx->pc = 0x1D0128u;
label_1d0128:
    // 0x1d0128: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d0128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1d012c:
    // 0x1d012c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d012cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d0130:
    // 0x1d0130: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d0130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d0134:
    // 0x1d0134: 0xc0655b0  jal         func_1956C0
label_1d0138:
    if (ctx->pc == 0x1D0138u) {
        ctx->pc = 0x1D0138u;
            // 0x1d0138: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D013Cu;
        goto label_1d013c;
    }
    ctx->pc = 0x1D0134u;
    SET_GPR_U32(ctx, 31, 0x1D013Cu);
    ctx->pc = 0x1D0138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0134u;
            // 0x1d0138: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D013Cu; }
        if (ctx->pc != 0x1D013Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D013Cu; }
        if (ctx->pc != 0x1D013Cu) { return; }
    }
    ctx->pc = 0x1D013Cu;
label_1d013c:
    // 0x1d013c: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1d013cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
label_1d0140:
    // 0x1d0140: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d0140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d0144:
    // 0x1d0144: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d0144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d0148:
    // 0x1d0148: 0xc0655b0  jal         func_1956C0
label_1d014c:
    if (ctx->pc == 0x1D014Cu) {
        ctx->pc = 0x1D014Cu;
            // 0x1d014c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D0150u;
        goto label_1d0150;
    }
    ctx->pc = 0x1D0148u;
    SET_GPR_U32(ctx, 31, 0x1D0150u);
    ctx->pc = 0x1D014Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0148u;
            // 0x1d014c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0150u; }
        if (ctx->pc != 0x1D0150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0150u; }
        if (ctx->pc != 0x1D0150u) { return; }
    }
    ctx->pc = 0x1D0150u;
label_1d0150:
    // 0x1d0150: 0xc065d00  jal         func_197400
label_1d0154:
    if (ctx->pc == 0x1D0154u) {
        ctx->pc = 0x1D0158u;
        goto label_1d0158;
    }
    ctx->pc = 0x1D0150u;
    SET_GPR_U32(ctx, 31, 0x1D0158u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0158u; }
        if (ctx->pc != 0x1D0158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0158u; }
        if (ctx->pc != 0x1D0158u) { return; }
    }
    ctx->pc = 0x1D0158u;
label_1d0158:
    // 0x1d0158: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d0158u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d015c:
    // 0x1d015c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1d0160:
    if (ctx->pc == 0x1D0160u) {
        ctx->pc = 0x1D0164u;
        goto label_1d0164;
    }
    ctx->pc = 0x1D015Cu;
    {
        const bool branch_taken_0x1d015c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d015c) {
            ctx->pc = 0x1D0180u;
            goto label_1d0180;
        }
    }
    ctx->pc = 0x1D0164u;
label_1d0164:
    // 0x1d0164: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d0164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d0168:
    // 0x1d0168: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1d0168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d016c:
    // 0x1d016c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d0170:
    if (ctx->pc == 0x1D0170u) {
        ctx->pc = 0x1D0174u;
        goto label_1d0174;
    }
    ctx->pc = 0x1D016Cu;
    {
        const bool branch_taken_0x1d016c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d016c) {
            ctx->pc = 0x1D0180u;
            goto label_1d0180;
        }
    }
    ctx->pc = 0x1D0174u;
label_1d0174:
    // 0x1d0174: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d0174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d0178:
    // 0x1d0178: 0xc06560c  jal         func_195830
label_1d017c:
    if (ctx->pc == 0x1D017Cu) {
        ctx->pc = 0x1D017Cu;
            // 0x1d017c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D0180u;
        goto label_1d0180;
    }
    ctx->pc = 0x1D0178u;
    SET_GPR_U32(ctx, 31, 0x1D0180u);
    ctx->pc = 0x1D017Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0178u;
            // 0x1d017c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0180u; }
        if (ctx->pc != 0x1D0180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0180u; }
        if (ctx->pc != 0x1D0180u) { return; }
    }
    ctx->pc = 0x1D0180u;
label_1d0180:
    // 0x1d0180: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d0180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d0184:
    // 0x1d0184: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1d0184u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1d0188:
    // 0x1d0188: 0x14200227  bnez        $at, . + 4 + (0x227 << 2)
label_1d018c:
    if (ctx->pc == 0x1D018Cu) {
        ctx->pc = 0x1D018Cu;
            // 0x1d018c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D0190u;
        goto label_1d0190;
    }
    ctx->pc = 0x1D0188u;
    {
        const bool branch_taken_0x1d0188 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0188u;
            // 0x1d018c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0188) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D0190u;
label_1d0190:
    // 0x1d0190: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d0190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d0194:
    // 0x1d0194: 0x10000224  b           . + 4 + (0x224 << 2)
label_1d0198:
    if (ctx->pc == 0x1D0198u) {
        ctx->pc = 0x1D0198u;
            // 0x1d0198: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1D019Cu;
        goto label_1d019c;
    }
    ctx->pc = 0x1D0194u;
    {
        const bool branch_taken_0x1d0194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0194u;
            // 0x1d0198: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0194) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D019Cu;
label_1d019c:
    // 0x1d019c: 0x0  nop
    ctx->pc = 0x1d019cu;
    // NOP
label_1d01a0:
    // 0x1d01a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d01a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d01a4:
    // 0x1d01a4: 0x14620220  bne         $v1, $v0, . + 4 + (0x220 << 2)
label_1d01a8:
    if (ctx->pc == 0x1D01A8u) {
        ctx->pc = 0x1D01A8u;
            // 0x1d01a8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1D01ACu;
        goto label_1d01ac;
    }
    ctx->pc = 0x1D01A4u;
    {
        const bool branch_taken_0x1d01a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D01A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D01A4u;
            // 0x1d01a8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01a4) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D01ACu;
label_1d01ac:
    // 0x1d01ac: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1d01acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d01b0:
    // 0x1d01b0: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1d01b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1d01b4:
    // 0x1d01b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d01b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d01b8:
    // 0x1d01b8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d01b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d01bc:
    // 0x1d01bc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d01bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d01c0:
    // 0x1d01c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d01c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1d01c4:
    // 0x1d01c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d01c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d01c8:
    // 0x1d01c8: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1d01c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1d01cc:
    // 0x1d01cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d01ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d01d0:
    // 0x1d01d0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d01d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d01d4:
    // 0x1d01d4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d01d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d01d8:
    // 0x1d01d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d01d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d01dc:
    // 0x1d01dc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d01dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1d01e0:
    // 0x1d01e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d01e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d01e4:
    // 0x1d01e4: 0x0  nop
    ctx->pc = 0x1d01e4u;
    // NOP
label_1d01e8:
    // 0x1d01e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d01e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d01ec:
    // 0x1d01ec: 0xc04b6ee  jal         func_12DBB8
label_1d01f0:
    if (ctx->pc == 0x1D01F0u) {
        ctx->pc = 0x1D01F0u;
            // 0x1d01f0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1D01F4u;
        goto label_1d01f4;
    }
    ctx->pc = 0x1D01ECu;
    SET_GPR_U32(ctx, 31, 0x1D01F4u);
    ctx->pc = 0x1D01F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D01ECu;
            // 0x1d01f0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D01F4u; }
        if (ctx->pc != 0x1D01F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D01F4u; }
        if (ctx->pc != 0x1D01F4u) { return; }
    }
    ctx->pc = 0x1D01F4u;
label_1d01f4:
    // 0x1d01f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d01f8:
    // 0x1d01f8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d01f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d01fc:
    // 0x1d01fc: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d01fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0200:
    // 0x1d0200: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d0200u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d0204:
    // 0x1d0204: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0208:
    // 0x1d0208: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1d020c:
    if (ctx->pc == 0x1D020Cu) {
        ctx->pc = 0x1D020Cu;
            // 0x1d020c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1D0210u;
        goto label_1d0210;
    }
    ctx->pc = 0x1D0208u;
    {
        const bool branch_taken_0x1d0208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D020Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0208u;
            // 0x1d020c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0208) {
            ctx->pc = 0x1D0218u;
            goto label_1d0218;
        }
    }
    ctx->pc = 0x1D0210u;
label_1d0210:
    // 0x1d0210: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d0210u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d0214:
    // 0x1d0214: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d0214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d0218:
    // 0x1d0218: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d021c:
    // 0x1d021c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0220:
    // 0x1d0220: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d0220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0224:
    // 0x1d0224: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d0224u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d0228:
    // 0x1d0228: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d0228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d022c:
    // 0x1d022c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d0230:
    if (ctx->pc == 0x1D0230u) {
        ctx->pc = 0x1D0230u;
            // 0x1d0230: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1D0234u;
        goto label_1d0234;
    }
    ctx->pc = 0x1D022Cu;
    {
        const bool branch_taken_0x1d022c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D022Cu;
            // 0x1d0230: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d022c) {
            ctx->pc = 0x1D0240u;
            goto label_1d0240;
        }
    }
    ctx->pc = 0x1D0234u;
label_1d0234:
    // 0x1d0234: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d0234u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d0238:
    // 0x1d0238: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d0238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d023c:
    // 0x1d023c: 0x0  nop
    ctx->pc = 0x1d023cu;
    // NOP
label_1d0240:
    // 0x1d0240: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x1d0240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
label_1d0244:
    // 0x1d0244: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1d0244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d0248:
    // 0x1d0248: 0x34437ae1  ori         $v1, $v0, 0x7AE1
    ctx->pc = 0x1d0248u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31457u)));
label_1d024c:
    // 0x1d024c: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x1d024cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_1d0250:
    // 0x1d0250: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d0250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d0254:
    // 0x1d0254: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1d0254u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_1d0258:
    // 0x1d0258: 0xc040d72  jal         func_1035C8
label_1d025c:
    if (ctx->pc == 0x1D025Cu) {
        ctx->pc = 0x1D025Cu;
            // 0x1d025c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D0260u;
        goto label_1d0260;
    }
    ctx->pc = 0x1D0258u;
    SET_GPR_U32(ctx, 31, 0x1D0260u);
    ctx->pc = 0x1D025Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0258u;
            // 0x1d025c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0260u; }
        if (ctx->pc != 0x1D0260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0260u; }
        if (ctx->pc != 0x1D0260u) { return; }
    }
    ctx->pc = 0x1D0260u;
label_1d0260:
    // 0x1d0260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0264:
    // 0x1d0264: 0xc040880  jal         func_102200
label_1d0268:
    if (ctx->pc == 0x1D0268u) {
        ctx->pc = 0x1D0268u;
            // 0x1d0268: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D026Cu;
        goto label_1d026c;
    }
    ctx->pc = 0x1D0264u;
    SET_GPR_U32(ctx, 31, 0x1D026Cu);
    ctx->pc = 0x1D0268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0264u;
            // 0x1d0268: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D026Cu; }
        if (ctx->pc != 0x1D026Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D026Cu; }
        if (ctx->pc != 0x1D026Cu) { return; }
    }
    ctx->pc = 0x1D026Cu;
label_1d026c:
    // 0x1d026c: 0xc040a74  jal         func_1029D0
label_1d0270:
    if (ctx->pc == 0x1D0270u) {
        ctx->pc = 0x1D0270u;
            // 0x1d0270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0274u;
        goto label_1d0274;
    }
    ctx->pc = 0x1D026Cu;
    SET_GPR_U32(ctx, 31, 0x1D0274u);
    ctx->pc = 0x1D0270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D026Cu;
            // 0x1d0270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0274u; }
        if (ctx->pc != 0x1D0274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0274u; }
        if (ctx->pc != 0x1D0274u) { return; }
    }
    ctx->pc = 0x1D0274u;
label_1d0274:
    // 0x1d0274: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1d0274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d0278:
    // 0x1d0278: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d0278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d027c:
    // 0x1d027c: 0x0  nop
    ctx->pc = 0x1d027cu;
    // NOP
label_1d0280:
    // 0x1d0280: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1d0280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d0284:
    // 0x1d0284: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d0284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d0288:
    // 0x1d0288: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1d0288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d028c:
    // 0x1d028c: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1d028cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0290:
    // 0x1d0290: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1d0294:
    if (ctx->pc == 0x1D0294u) {
        ctx->pc = 0x1D0294u;
            // 0x1d0294: 0x3c033f84  lui         $v1, 0x3F84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
        ctx->pc = 0x1D0298u;
        goto label_1d0298;
    }
    ctx->pc = 0x1D0290u;
    {
        const bool branch_taken_0x1d0290 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0290u;
            // 0x1d0294: 0x3c033f84  lui         $v1, 0x3F84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0290) {
            ctx->pc = 0x1D02D8u;
            goto label_1d02d8;
        }
    }
    ctx->pc = 0x1D0298u;
label_1d0298:
    // 0x1d0298: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x1d0298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_1d029c:
    // 0x1d029c: 0x34637ae1  ori         $v1, $v1, 0x7AE1
    ctx->pc = 0x1d029cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)31457u)));
label_1d02a0:
    // 0x1d02a0: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1d02a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_1d02a4:
    // 0x1d02a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d02a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d02a8:
    // 0x1d02a8: 0xc040d72  jal         func_1035C8
label_1d02ac:
    if (ctx->pc == 0x1D02ACu) {
        ctx->pc = 0x1D02ACu;
            // 0x1d02ac: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D02B0u;
        goto label_1d02b0;
    }
    ctx->pc = 0x1D02A8u;
    SET_GPR_U32(ctx, 31, 0x1D02B0u);
    ctx->pc = 0x1D02ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02A8u;
            // 0x1d02ac: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D02B0u; }
        if (ctx->pc != 0x1D02B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D02B0u; }
        if (ctx->pc != 0x1D02B0u) { return; }
    }
    ctx->pc = 0x1D02B0u;
label_1d02b0:
    // 0x1d02b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d02b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d02b4:
    // 0x1d02b4: 0xc040880  jal         func_102200
label_1d02b8:
    if (ctx->pc == 0x1D02B8u) {
        ctx->pc = 0x1D02B8u;
            // 0x1d02b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D02BCu;
        goto label_1d02bc;
    }
    ctx->pc = 0x1D02B4u;
    SET_GPR_U32(ctx, 31, 0x1D02BCu);
    ctx->pc = 0x1D02B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02B4u;
            // 0x1d02b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D02BCu; }
        if (ctx->pc != 0x1D02BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D02BCu; }
        if (ctx->pc != 0x1D02BCu) { return; }
    }
    ctx->pc = 0x1D02BCu;
label_1d02bc:
    // 0x1d02bc: 0xc040a74  jal         func_1029D0
label_1d02c0:
    if (ctx->pc == 0x1D02C0u) {
        ctx->pc = 0x1D02C0u;
            // 0x1d02c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D02C4u;
        goto label_1d02c4;
    }
    ctx->pc = 0x1D02BCu;
    SET_GPR_U32(ctx, 31, 0x1D02C4u);
    ctx->pc = 0x1D02C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02BCu;
            // 0x1d02c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D02C4u; }
        if (ctx->pc != 0x1D02C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D02C4u; }
        if (ctx->pc != 0x1D02C4u) { return; }
    }
    ctx->pc = 0x1D02C4u;
label_1d02c4:
    // 0x1d02c4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d02c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d02c8:
    // 0x1d02c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d02c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d02cc:
    // 0x1d02cc: 0x10000012  b           . + 4 + (0x12 << 2)
label_1d02d0:
    if (ctx->pc == 0x1D02D0u) {
        ctx->pc = 0x1D02D0u;
            // 0x1d02d0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D02D4u;
        goto label_1d02d4;
    }
    ctx->pc = 0x1D02CCu;
    {
        const bool branch_taken_0x1d02cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02CCu;
            // 0x1d02d0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02cc) {
            ctx->pc = 0x1D0318u;
            goto label_1d0318;
        }
    }
    ctx->pc = 0x1D02D4u;
label_1d02d4:
    // 0x1d02d4: 0x0  nop
    ctx->pc = 0x1d02d4u;
    // NOP
label_1d02d8:
    // 0x1d02d8: 0xc040d72  jal         func_1035C8
label_1d02dc:
    if (ctx->pc == 0x1D02DCu) {
        ctx->pc = 0x1D02DCu;
            // 0x1d02dc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->pc = 0x1D02E0u;
        goto label_1d02e0;
    }
    ctx->pc = 0x1D02D8u;
    SET_GPR_U32(ctx, 31, 0x1D02E0u);
    ctx->pc = 0x1D02DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02D8u;
            // 0x1d02dc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D02E0u; }
        if (ctx->pc != 0x1D02E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D02E0u; }
        if (ctx->pc != 0x1D02E0u) { return; }
    }
    ctx->pc = 0x1D02E0u;
label_1d02e0:
    // 0x1d02e0: 0x3c043f84  lui         $a0, 0x3F84
    ctx->pc = 0x1d02e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16260 << 16));
label_1d02e4:
    // 0x1d02e4: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x1d02e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
label_1d02e8:
    // 0x1d02e8: 0x34847ae1  ori         $a0, $a0, 0x7AE1
    ctx->pc = 0x1d02e8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)31457u)));
label_1d02ec:
    // 0x1d02ec: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x1d02ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)5243u)));
label_1d02f0:
    // 0x1d02f0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d02f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d02f4:
    // 0x1d02f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d02f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d02f8:
    // 0x1d02f8: 0xc040880  jal         func_102200
label_1d02fc:
    if (ctx->pc == 0x1D02FCu) {
        ctx->pc = 0x1D02FCu;
            // 0x1d02fc: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->pc = 0x1D0300u;
        goto label_1d0300;
    }
    ctx->pc = 0x1D02F8u;
    SET_GPR_U32(ctx, 31, 0x1D0300u);
    ctx->pc = 0x1D02FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02F8u;
            // 0x1d02fc: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0300u; }
        if (ctx->pc != 0x1D0300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0300u; }
        if (ctx->pc != 0x1D0300u) { return; }
    }
    ctx->pc = 0x1D0300u;
label_1d0300:
    // 0x1d0300: 0xc040a74  jal         func_1029D0
label_1d0304:
    if (ctx->pc == 0x1D0304u) {
        ctx->pc = 0x1D0304u;
            // 0x1d0304: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0308u;
        goto label_1d0308;
    }
    ctx->pc = 0x1D0300u;
    SET_GPR_U32(ctx, 31, 0x1D0308u);
    ctx->pc = 0x1D0304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0300u;
            // 0x1d0304: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0308u; }
        if (ctx->pc != 0x1D0308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0308u; }
        if (ctx->pc != 0x1D0308u) { return; }
    }
    ctx->pc = 0x1D0308u;
label_1d0308:
    // 0x1d0308: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d0308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d030c:
    // 0x1d030c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d030cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d0310:
    // 0x1d0310: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d0310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d0314:
    // 0x1d0314: 0x0  nop
    ctx->pc = 0x1d0314u;
    // NOP
label_1d0318:
    // 0x1d0318: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d031c:
    // 0x1d031c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0320:
    // 0x1d0320: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1d0320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0324:
    // 0x1d0324: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d0324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d0328:
    // 0x1d0328: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1d0328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_1d032c:
    // 0x1d032c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0330:
    // 0x1d0330: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d0330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0334:
    // 0x1d0334: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1d0334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0338:
    // 0x1d0338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d0338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d033c:
    // 0x1d033c: 0xc065d00  jal         func_197400
label_1d0340:
    if (ctx->pc == 0x1D0340u) {
        ctx->pc = 0x1D0340u;
            // 0x1d0340: 0xe4400124  swc1        $f0, 0x124($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
        ctx->pc = 0x1D0344u;
        goto label_1d0344;
    }
    ctx->pc = 0x1D033Cu;
    SET_GPR_U32(ctx, 31, 0x1D0344u);
    ctx->pc = 0x1D0340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D033Cu;
            // 0x1d0340: 0xe4400124  swc1        $f0, 0x124($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0344u; }
        if (ctx->pc != 0x1D0344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0344u; }
        if (ctx->pc != 0x1D0344u) { return; }
    }
    ctx->pc = 0x1D0344u;
label_1d0344:
    // 0x1d0344: 0x184001b8  blez        $v0, . + 4 + (0x1B8 << 2)
label_1d0348:
    if (ctx->pc == 0x1D0348u) {
        ctx->pc = 0x1D034Cu;
        goto label_1d034c;
    }
    ctx->pc = 0x1D0344u;
    {
        const bool branch_taken_0x1d0344 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d0344) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D034Cu;
label_1d034c:
    // 0x1d034c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d034cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d0350:
    // 0x1d0350: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d0350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d0354:
    // 0x1d0354: 0x146201b4  bne         $v1, $v0, . + 4 + (0x1B4 << 2)
label_1d0358:
    if (ctx->pc == 0x1D0358u) {
        ctx->pc = 0x1D035Cu;
        goto label_1d035c;
    }
    ctx->pc = 0x1D0354u;
    {
        const bool branch_taken_0x1d0354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0354) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D035Cu;
label_1d035c:
    // 0x1d035c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d035cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d0360:
    // 0x1d0360: 0xc06560c  jal         func_195830
label_1d0364:
    if (ctx->pc == 0x1D0364u) {
        ctx->pc = 0x1D0364u;
            // 0x1d0364: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D0368u;
        goto label_1d0368;
    }
    ctx->pc = 0x1D0360u;
    SET_GPR_U32(ctx, 31, 0x1D0368u);
    ctx->pc = 0x1D0364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0360u;
            // 0x1d0364: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0368u; }
        if (ctx->pc != 0x1D0368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0368u; }
        if (ctx->pc != 0x1D0368u) { return; }
    }
    ctx->pc = 0x1D0368u;
label_1d0368:
    // 0x1d0368: 0x100001af  b           . + 4 + (0x1AF << 2)
label_1d036c:
    if (ctx->pc == 0x1D036Cu) {
        ctx->pc = 0x1D0370u;
        goto label_1d0370;
    }
    ctx->pc = 0x1D0368u;
    {
        const bool branch_taken_0x1d0368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0368) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D0370u;
label_1d0370:
    // 0x1d0370: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1d0370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1d0374:
    // 0x1d0374: 0x1460006e  bnez        $v1, . + 4 + (0x6E << 2)
label_1d0378:
    if (ctx->pc == 0x1D0378u) {
        ctx->pc = 0x1D037Cu;
        goto label_1d037c;
    }
    ctx->pc = 0x1D0374u;
    {
        const bool branch_taken_0x1d0374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0374) {
            ctx->pc = 0x1D0530u;
            goto label_1d0530;
        }
    }
    ctx->pc = 0x1D037Cu;
label_1d037c:
    // 0x1d037c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0380:
    // 0x1d0380: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d0380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1d0384:
    // 0x1d0384: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d0384u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d0388:
    // 0x1d0388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d038c:
    // 0x1d038c: 0x0  nop
    ctx->pc = 0x1d038cu;
    // NOP
label_1d0390:
    // 0x1d0390: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d0390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d0394:
    // 0x1d0394: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d0394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d0398:
    // 0x1d0398: 0xc040d72  jal         func_1035C8
label_1d039c:
    if (ctx->pc == 0x1D039Cu) {
        ctx->pc = 0x1D039Cu;
            // 0x1d039c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D03A0u;
        goto label_1d03a0;
    }
    ctx->pc = 0x1D0398u;
    SET_GPR_U32(ctx, 31, 0x1D03A0u);
    ctx->pc = 0x1D039Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0398u;
            // 0x1d039c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03A0u; }
        if (ctx->pc != 0x1D03A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03A0u; }
        if (ctx->pc != 0x1D03A0u) { return; }
    }
    ctx->pc = 0x1D03A0u;
label_1d03a0:
    // 0x1d03a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d03a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d03a4:
    // 0x1d03a4: 0xc040078  jal         func_1001E0
label_1d03a8:
    if (ctx->pc == 0x1D03A8u) {
        ctx->pc = 0x1D03A8u;
            // 0x1d03a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D03ACu;
        goto label_1d03ac;
    }
    ctx->pc = 0x1D03A4u;
    SET_GPR_U32(ctx, 31, 0x1D03ACu);
    ctx->pc = 0x1D03A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03A4u;
            // 0x1d03a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03ACu; }
        if (ctx->pc != 0x1D03ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03ACu; }
        if (ctx->pc != 0x1D03ACu) { return; }
    }
    ctx->pc = 0x1D03ACu;
label_1d03ac:
    // 0x1d03ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d03b0:
    if (ctx->pc == 0x1D03B0u) {
        ctx->pc = 0x1D03B4u;
        goto label_1d03b4;
    }
    ctx->pc = 0x1D03ACu;
    {
        const bool branch_taken_0x1d03ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d03ac) {
            ctx->pc = 0x1D03D0u;
            goto label_1d03d0;
        }
    }
    ctx->pc = 0x1D03B4u;
label_1d03b4:
    // 0x1d03b4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d03b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d03b8:
    // 0x1d03b8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1d03bc:
    // 0x1d03bc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d03bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d03c0:
    // 0x1d03c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d03c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d03c4:
    // 0x1d03c4: 0x0  nop
    ctx->pc = 0x1d03c4u;
    // NOP
label_1d03c8:
    // 0x1d03c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d03c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d03cc:
    // 0x1d03cc: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d03ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d03d0:
    // 0x1d03d0: 0xc040d72  jal         func_1035C8
label_1d03d4:
    if (ctx->pc == 0x1D03D4u) {
        ctx->pc = 0x1D03D4u;
            // 0x1d03d4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D03D8u;
        goto label_1d03d8;
    }
    ctx->pc = 0x1D03D0u;
    SET_GPR_U32(ctx, 31, 0x1D03D8u);
    ctx->pc = 0x1D03D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03D0u;
            // 0x1d03d4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03D8u; }
        if (ctx->pc != 0x1D03D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03D8u; }
        if (ctx->pc != 0x1D03D8u) { return; }
    }
    ctx->pc = 0x1D03D8u;
label_1d03d8:
    // 0x1d03d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d03d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d03dc:
    // 0x1d03dc: 0xc04008c  jal         func_100230
label_1d03e0:
    if (ctx->pc == 0x1D03E0u) {
        ctx->pc = 0x1D03E0u;
            // 0x1d03e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D03E4u;
        goto label_1d03e4;
    }
    ctx->pc = 0x1D03DCu;
    SET_GPR_U32(ctx, 31, 0x1D03E4u);
    ctx->pc = 0x1D03E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03DCu;
            // 0x1d03e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03E4u; }
        if (ctx->pc != 0x1D03E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03E4u; }
        if (ctx->pc != 0x1D03E4u) { return; }
    }
    ctx->pc = 0x1D03E4u;
label_1d03e4:
    // 0x1d03e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d03e8:
    if (ctx->pc == 0x1D03E8u) {
        ctx->pc = 0x1D03ECu;
        goto label_1d03ec;
    }
    ctx->pc = 0x1D03E4u;
    {
        const bool branch_taken_0x1d03e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d03e4) {
            ctx->pc = 0x1D0408u;
            goto label_1d0408;
        }
    }
    ctx->pc = 0x1D03ECu;
label_1d03ec:
    // 0x1d03ec: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d03ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d03f0:
    // 0x1d03f0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1d03f4:
    // 0x1d03f4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d03f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d03f8:
    // 0x1d03f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d03f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d03fc:
    // 0x1d03fc: 0x0  nop
    ctx->pc = 0x1d03fcu;
    // NOP
label_1d0400:
    // 0x1d0400: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d0400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d0404:
    // 0x1d0404: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d0404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d0408:
    // 0x1d0408: 0xc040d72  jal         func_1035C8
label_1d040c:
    if (ctx->pc == 0x1D040Cu) {
        ctx->pc = 0x1D040Cu;
            // 0x1d040c: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D0410u;
        goto label_1d0410;
    }
    ctx->pc = 0x1D0408u;
    SET_GPR_U32(ctx, 31, 0x1D0410u);
    ctx->pc = 0x1D040Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0408u;
            // 0x1d040c: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0410u; }
        if (ctx->pc != 0x1D0410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0410u; }
        if (ctx->pc != 0x1D0410u) { return; }
    }
    ctx->pc = 0x1D0410u;
label_1d0410:
    // 0x1d0410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0414:
    // 0x1d0414: 0xc040078  jal         func_1001E0
label_1d0418:
    if (ctx->pc == 0x1D0418u) {
        ctx->pc = 0x1D0418u;
            // 0x1d0418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D041Cu;
        goto label_1d041c;
    }
    ctx->pc = 0x1D0414u;
    SET_GPR_U32(ctx, 31, 0x1D041Cu);
    ctx->pc = 0x1D0418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0414u;
            // 0x1d0418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D041Cu; }
        if (ctx->pc != 0x1D041Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D041Cu; }
        if (ctx->pc != 0x1D041Cu) { return; }
    }
    ctx->pc = 0x1D041Cu;
label_1d041c:
    // 0x1d041c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1d0420:
    if (ctx->pc == 0x1D0420u) {
        ctx->pc = 0x1D0424u;
        goto label_1d0424;
    }
    ctx->pc = 0x1D041Cu;
    {
        const bool branch_taken_0x1d041c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d041c) {
            ctx->pc = 0x1D0448u;
            goto label_1d0448;
        }
    }
    ctx->pc = 0x1D0424u;
label_1d0424:
    // 0x1d0424: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d0424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0428:
    // 0x1d0428: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1d0428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1d042c:
    // 0x1d042c: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1d042cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1d0430:
    // 0x1d0430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0434:
    // 0x1d0434: 0x0  nop
    ctx->pc = 0x1d0434u;
    // NOP
label_1d0438:
    // 0x1d0438: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d0438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d043c:
    // 0x1d043c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d0440:
    if (ctx->pc == 0x1D0440u) {
        ctx->pc = 0x1D0440u;
            // 0x1d0440: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D0444u;
        goto label_1d0444;
    }
    ctx->pc = 0x1D043Cu;
    {
        const bool branch_taken_0x1d043c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D043Cu;
            // 0x1d0440: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d043c) {
            ctx->pc = 0x1D0458u;
            goto label_1d0458;
        }
    }
    ctx->pc = 0x1D0444u;
label_1d0444:
    // 0x1d0444: 0x0  nop
    ctx->pc = 0x1d0444u;
    // NOP
label_1d0448:
    // 0x1d0448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d044c:
    // 0x1d044c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d044cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d0450:
    // 0x1d0450: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d0450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1d0454:
    // 0x1d0454: 0x0  nop
    ctx->pc = 0x1d0454u;
    // NOP
label_1d0458:
    // 0x1d0458: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d0458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1d045c:
    // 0x1d045c: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1d045cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1d0460:
    // 0x1d0460: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d0460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d0464:
    // 0x1d0464: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1d0464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d0468:
    // 0x1d0468: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d0468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d046c:
    // 0x1d046c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d046cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1d0470:
    // 0x1d0470: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d0470u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d0474:
    // 0x1d0474: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1d0474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1d0478:
    // 0x1d0478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d047c:
    // 0x1d047c: 0x0  nop
    ctx->pc = 0x1d047cu;
    // NOP
label_1d0480:
    // 0x1d0480: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d0480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d0484:
    // 0x1d0484: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d0484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d0488:
    // 0x1d0488: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d0488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d048c:
    // 0x1d048c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d048cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0490:
    // 0x1d0490: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d0490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1d0494:
    // 0x1d0494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0498:
    // 0x1d0498: 0x0  nop
    ctx->pc = 0x1d0498u;
    // NOP
label_1d049c:
    // 0x1d049c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d049cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d04a0:
    // 0x1d04a0: 0xc04b6ee  jal         func_12DBB8
label_1d04a4:
    if (ctx->pc == 0x1D04A4u) {
        ctx->pc = 0x1D04A4u;
            // 0x1d04a4: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1D04A8u;
        goto label_1d04a8;
    }
    ctx->pc = 0x1D04A0u;
    SET_GPR_U32(ctx, 31, 0x1D04A8u);
    ctx->pc = 0x1D04A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04A0u;
            // 0x1d04a4: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04A8u; }
        if (ctx->pc != 0x1D04A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04A8u; }
        if (ctx->pc != 0x1D04A8u) { return; }
    }
    ctx->pc = 0x1D04A8u;
label_1d04a8:
    // 0x1d04a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d04ac:
    // 0x1d04ac: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d04acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d04b0:
    // 0x1d04b0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d04b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d04b4:
    // 0x1d04b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d04b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d04b8:
    // 0x1d04b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d04b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d04bc:
    // 0x1d04bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1d04c0:
    if (ctx->pc == 0x1D04C0u) {
        ctx->pc = 0x1D04C0u;
            // 0x1d04c0: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1D04C4u;
        goto label_1d04c4;
    }
    ctx->pc = 0x1D04BCu;
    {
        const bool branch_taken_0x1d04bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D04C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04BCu;
            // 0x1d04c0: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04bc) {
            ctx->pc = 0x1D04D0u;
            goto label_1d04d0;
        }
    }
    ctx->pc = 0x1D04C4u;
label_1d04c4:
    // 0x1d04c4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d04c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d04c8:
    // 0x1d04c8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d04c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d04cc:
    // 0x1d04cc: 0x0  nop
    ctx->pc = 0x1d04ccu;
    // NOP
label_1d04d0:
    // 0x1d04d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d04d4:
    // 0x1d04d4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d04d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d04d8:
    // 0x1d04d8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d04d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d04dc:
    // 0x1d04dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d04dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d04e0:
    // 0x1d04e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d04e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d04e4:
    // 0x1d04e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d04e8:
    if (ctx->pc == 0x1D04E8u) {
        ctx->pc = 0x1D04E8u;
            // 0x1d04e8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1D04ECu;
        goto label_1d04ec;
    }
    ctx->pc = 0x1D04E4u;
    {
        const bool branch_taken_0x1d04e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D04E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04E4u;
            // 0x1d04e8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04e4) {
            ctx->pc = 0x1D04F8u;
            goto label_1d04f8;
        }
    }
    ctx->pc = 0x1D04ECu;
label_1d04ec:
    // 0x1d04ec: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d04ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d04f0:
    // 0x1d04f0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d04f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d04f4:
    // 0x1d04f4: 0x0  nop
    ctx->pc = 0x1d04f4u;
    // NOP
label_1d04f8:
    // 0x1d04f8: 0xc065d00  jal         func_197400
label_1d04fc:
    if (ctx->pc == 0x1D04FCu) {
        ctx->pc = 0x1D0500u;
        goto label_1d0500;
    }
    ctx->pc = 0x1D04F8u;
    SET_GPR_U32(ctx, 31, 0x1D0500u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0500u; }
        if (ctx->pc != 0x1D0500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0500u; }
        if (ctx->pc != 0x1D0500u) { return; }
    }
    ctx->pc = 0x1D0500u;
label_1d0500:
    // 0x1d0500: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d0500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d0504:
    // 0x1d0504: 0x14430148  bne         $v0, $v1, . + 4 + (0x148 << 2)
label_1d0508:
    if (ctx->pc == 0x1D0508u) {
        ctx->pc = 0x1D050Cu;
        goto label_1d050c;
    }
    ctx->pc = 0x1D0504u;
    {
        const bool branch_taken_0x1d0504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0504) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D050Cu;
label_1d050c:
    // 0x1d050c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d0510:
    // 0x1d0510: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d0510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d0514:
    // 0x1d0514: 0x14620144  bne         $v1, $v0, . + 4 + (0x144 << 2)
label_1d0518:
    if (ctx->pc == 0x1D0518u) {
        ctx->pc = 0x1D051Cu;
        goto label_1d051c;
    }
    ctx->pc = 0x1D0514u;
    {
        const bool branch_taken_0x1d0514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0514) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D051Cu;
label_1d051c:
    // 0x1d051c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d051cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d0520:
    // 0x1d0520: 0xc06560c  jal         func_195830
label_1d0524:
    if (ctx->pc == 0x1D0524u) {
        ctx->pc = 0x1D0524u;
            // 0x1d0524: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D0528u;
        goto label_1d0528;
    }
    ctx->pc = 0x1D0520u;
    SET_GPR_U32(ctx, 31, 0x1D0528u);
    ctx->pc = 0x1D0524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0520u;
            // 0x1d0524: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0528u; }
        if (ctx->pc != 0x1D0528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0528u; }
        if (ctx->pc != 0x1D0528u) { return; }
    }
    ctx->pc = 0x1D0528u;
label_1d0528:
    // 0x1d0528: 0x1000013f  b           . + 4 + (0x13F << 2)
label_1d052c:
    if (ctx->pc == 0x1D052Cu) {
        ctx->pc = 0x1D0530u;
        goto label_1d0530;
    }
    ctx->pc = 0x1D0528u;
    {
        const bool branch_taken_0x1d0528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0528) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D0530u;
label_1d0530:
    // 0x1d0530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0534:
    // 0x1d0534: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
label_1d0538:
    if (ctx->pc == 0x1D0538u) {
        ctx->pc = 0x1D0538u;
            // 0x1d0538: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1D053Cu;
        goto label_1d053c;
    }
    ctx->pc = 0x1D0534u;
    {
        const bool branch_taken_0x1d0534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0534u;
            // 0x1d0538: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0534) {
            ctx->pc = 0x1D0688u;
            goto label_1d0688;
        }
    }
    ctx->pc = 0x1D053Cu;
label_1d053c:
    // 0x1d053c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1d053cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d0540:
    // 0x1d0540: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1d0540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1d0544:
    // 0x1d0544: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d0544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d0548:
    // 0x1d0548: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d0548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d054c:
    // 0x1d054c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d054cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d0550:
    // 0x1d0550: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d0550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1d0554:
    // 0x1d0554: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0558:
    // 0x1d0558: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1d0558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1d055c:
    // 0x1d055c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d055cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d0560:
    // 0x1d0560: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d0560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d0564:
    // 0x1d0564: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d0564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d0568:
    // 0x1d0568: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d0568u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d056c:
    // 0x1d056c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d056cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1d0570:
    // 0x1d0570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0574:
    // 0x1d0574: 0x0  nop
    ctx->pc = 0x1d0574u;
    // NOP
label_1d0578:
    // 0x1d0578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d0578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d057c:
    // 0x1d057c: 0xc04b6ee  jal         func_12DBB8
label_1d0580:
    if (ctx->pc == 0x1D0580u) {
        ctx->pc = 0x1D0580u;
            // 0x1d0580: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1D0584u;
        goto label_1d0584;
    }
    ctx->pc = 0x1D057Cu;
    SET_GPR_U32(ctx, 31, 0x1D0584u);
    ctx->pc = 0x1D0580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D057Cu;
            // 0x1d0580: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0584u; }
        if (ctx->pc != 0x1D0584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0584u; }
        if (ctx->pc != 0x1D0584u) { return; }
    }
    ctx->pc = 0x1D0584u;
label_1d0584:
    // 0x1d0584: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0588:
    // 0x1d0588: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d0588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d058c:
    // 0x1d058c: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0590:
    // 0x1d0590: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d0590u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d0594:
    // 0x1d0594: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0598:
    // 0x1d0598: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1d059c:
    if (ctx->pc == 0x1D059Cu) {
        ctx->pc = 0x1D059Cu;
            // 0x1d059c: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1D05A0u;
        goto label_1d05a0;
    }
    ctx->pc = 0x1D0598u;
    {
        const bool branch_taken_0x1d0598 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D059Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0598u;
            // 0x1d059c: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0598) {
            ctx->pc = 0x1D05A8u;
            goto label_1d05a8;
        }
    }
    ctx->pc = 0x1D05A0u;
label_1d05a0:
    // 0x1d05a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d05a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d05a4:
    // 0x1d05a4: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d05a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d05a8:
    // 0x1d05a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d05ac:
    // 0x1d05ac: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d05acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d05b0:
    // 0x1d05b0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d05b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d05b4:
    // 0x1d05b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d05b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d05b8:
    // 0x1d05b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d05b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d05bc:
    // 0x1d05bc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d05c0:
    if (ctx->pc == 0x1D05C0u) {
        ctx->pc = 0x1D05C0u;
            // 0x1d05c0: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1D05C4u;
        goto label_1d05c4;
    }
    ctx->pc = 0x1D05BCu;
    {
        const bool branch_taken_0x1d05bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D05C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D05BCu;
            // 0x1d05c0: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05bc) {
            ctx->pc = 0x1D05D0u;
            goto label_1d05d0;
        }
    }
    ctx->pc = 0x1D05C4u;
label_1d05c4:
    // 0x1d05c4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d05c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d05c8:
    // 0x1d05c8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d05c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d05cc:
    // 0x1d05cc: 0x0  nop
    ctx->pc = 0x1d05ccu;
    // NOP
label_1d05d0:
    // 0x1d05d0: 0xc065d00  jal         func_197400
label_1d05d4:
    if (ctx->pc == 0x1D05D4u) {
        ctx->pc = 0x1D05D8u;
        goto label_1d05d8;
    }
    ctx->pc = 0x1D05D0u;
    SET_GPR_U32(ctx, 31, 0x1D05D8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D05D8u; }
        if (ctx->pc != 0x1D05D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D05D8u; }
        if (ctx->pc != 0x1D05D8u) { return; }
    }
    ctx->pc = 0x1D05D8u;
label_1d05d8:
    // 0x1d05d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d05d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d05dc:
    // 0x1d05dc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1d05e0:
    if (ctx->pc == 0x1D05E0u) {
        ctx->pc = 0x1D05E4u;
        goto label_1d05e4;
    }
    ctx->pc = 0x1D05DCu;
    {
        const bool branch_taken_0x1d05dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d05dc) {
            ctx->pc = 0x1D0600u;
            goto label_1d0600;
        }
    }
    ctx->pc = 0x1D05E4u;
label_1d05e4:
    // 0x1d05e4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d05e8:
    // 0x1d05e8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d05ec:
    // 0x1d05ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d05f0:
    if (ctx->pc == 0x1D05F0u) {
        ctx->pc = 0x1D05F4u;
        goto label_1d05f4;
    }
    ctx->pc = 0x1D05ECu;
    {
        const bool branch_taken_0x1d05ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d05ec) {
            ctx->pc = 0x1D0600u;
            goto label_1d0600;
        }
    }
    ctx->pc = 0x1D05F4u;
label_1d05f4:
    // 0x1d05f4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d05f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d05f8:
    // 0x1d05f8: 0xc06560c  jal         func_195830
label_1d05fc:
    if (ctx->pc == 0x1D05FCu) {
        ctx->pc = 0x1D05FCu;
            // 0x1d05fc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D0600u;
        goto label_1d0600;
    }
    ctx->pc = 0x1D05F8u;
    SET_GPR_U32(ctx, 31, 0x1D0600u);
    ctx->pc = 0x1D05FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D05F8u;
            // 0x1d05fc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0600u; }
        if (ctx->pc != 0x1D0600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0600u; }
        if (ctx->pc != 0x1D0600u) { return; }
    }
    ctx->pc = 0x1D0600u;
label_1d0600:
    // 0x1d0600: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d0600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d0604:
    // 0x1d0604: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1d0604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d0608:
    // 0x1d0608: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1d060c:
    if (ctx->pc == 0x1D060Cu) {
        ctx->pc = 0x1D0610u;
        goto label_1d0610;
    }
    ctx->pc = 0x1D0608u;
    {
        const bool branch_taken_0x1d0608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0608) {
            ctx->pc = 0x1D0638u;
            goto label_1d0638;
        }
    }
    ctx->pc = 0x1D0610u;
label_1d0610:
    // 0x1d0610: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d0610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1d0614:
    // 0x1d0614: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d0614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d0618:
    // 0x1d0618: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d0618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d061c:
    // 0x1d061c: 0xc0655b0  jal         func_1956C0
label_1d0620:
    if (ctx->pc == 0x1D0620u) {
        ctx->pc = 0x1D0620u;
            // 0x1d0620: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D0624u;
        goto label_1d0624;
    }
    ctx->pc = 0x1D061Cu;
    SET_GPR_U32(ctx, 31, 0x1D0624u);
    ctx->pc = 0x1D0620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D061Cu;
            // 0x1d0620: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0624u; }
        if (ctx->pc != 0x1D0624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0624u; }
        if (ctx->pc != 0x1D0624u) { return; }
    }
    ctx->pc = 0x1D0624u;
label_1d0624:
    // 0x1d0624: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d0624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_1d0628:
    // 0x1d0628: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d0628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d062c:
    // 0x1d062c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d062cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d0630:
    // 0x1d0630: 0xc0655b0  jal         func_1956C0
label_1d0634:
    if (ctx->pc == 0x1D0634u) {
        ctx->pc = 0x1D0634u;
            // 0x1d0634: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D0638u;
        goto label_1d0638;
    }
    ctx->pc = 0x1D0630u;
    SET_GPR_U32(ctx, 31, 0x1D0638u);
    ctx->pc = 0x1D0634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0630u;
            // 0x1d0634: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0638u; }
        if (ctx->pc != 0x1D0638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0638u; }
        if (ctx->pc != 0x1D0638u) { return; }
    }
    ctx->pc = 0x1D0638u;
label_1d0638:
    // 0x1d0638: 0xc065d00  jal         func_197400
label_1d063c:
    if (ctx->pc == 0x1D063Cu) {
        ctx->pc = 0x1D0640u;
        goto label_1d0640;
    }
    ctx->pc = 0x1D0638u;
    SET_GPR_U32(ctx, 31, 0x1D0640u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0640u; }
        if (ctx->pc != 0x1D0640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0640u; }
        if (ctx->pc != 0x1D0640u) { return; }
    }
    ctx->pc = 0x1D0640u;
label_1d0640:
    // 0x1d0640: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d0640u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d0644:
    // 0x1d0644: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1d0648:
    if (ctx->pc == 0x1D0648u) {
        ctx->pc = 0x1D064Cu;
        goto label_1d064c;
    }
    ctx->pc = 0x1D0644u;
    {
        const bool branch_taken_0x1d0644 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0644) {
            ctx->pc = 0x1D0668u;
            goto label_1d0668;
        }
    }
    ctx->pc = 0x1D064Cu;
label_1d064c:
    // 0x1d064c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d064cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d0650:
    // 0x1d0650: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1d0650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d0654:
    // 0x1d0654: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d0658:
    if (ctx->pc == 0x1D0658u) {
        ctx->pc = 0x1D065Cu;
        goto label_1d065c;
    }
    ctx->pc = 0x1D0654u;
    {
        const bool branch_taken_0x1d0654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0654) {
            ctx->pc = 0x1D0668u;
            goto label_1d0668;
        }
    }
    ctx->pc = 0x1D065Cu;
label_1d065c:
    // 0x1d065c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d065cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d0660:
    // 0x1d0660: 0xc06560c  jal         func_195830
label_1d0664:
    if (ctx->pc == 0x1D0664u) {
        ctx->pc = 0x1D0664u;
            // 0x1d0664: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D0668u;
        goto label_1d0668;
    }
    ctx->pc = 0x1D0660u;
    SET_GPR_U32(ctx, 31, 0x1D0668u);
    ctx->pc = 0x1D0664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0660u;
            // 0x1d0664: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0668u; }
        if (ctx->pc != 0x1D0668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0668u; }
        if (ctx->pc != 0x1D0668u) { return; }
    }
    ctx->pc = 0x1D0668u;
label_1d0668:
    // 0x1d0668: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d0668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d066c:
    // 0x1d066c: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1d066cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1d0670:
    // 0x1d0670: 0x142000ed  bnez        $at, . + 4 + (0xED << 2)
label_1d0674:
    if (ctx->pc == 0x1D0674u) {
        ctx->pc = 0x1D0674u;
            // 0x1d0674: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D0678u;
        goto label_1d0678;
    }
    ctx->pc = 0x1D0670u;
    {
        const bool branch_taken_0x1d0670 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0670u;
            // 0x1d0674: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0670) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D0678u;
label_1d0678:
    // 0x1d0678: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d0678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d067c:
    // 0x1d067c: 0x100000ea  b           . + 4 + (0xEA << 2)
label_1d0680:
    if (ctx->pc == 0x1D0680u) {
        ctx->pc = 0x1D0680u;
            // 0x1d0680: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1D0684u;
        goto label_1d0684;
    }
    ctx->pc = 0x1D067Cu;
    {
        const bool branch_taken_0x1d067c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D067Cu;
            // 0x1d0680: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d067c) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D0684u;
label_1d0684:
    // 0x1d0684: 0x0  nop
    ctx->pc = 0x1d0684u;
    // NOP
label_1d0688:
    // 0x1d0688: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d0688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d068c:
    // 0x1d068c: 0x146200e6  bne         $v1, $v0, . + 4 + (0xE6 << 2)
label_1d0690:
    if (ctx->pc == 0x1D0690u) {
        ctx->pc = 0x1D0690u;
            // 0x1d0690: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1D0694u;
        goto label_1d0694;
    }
    ctx->pc = 0x1D068Cu;
    {
        const bool branch_taken_0x1d068c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D068Cu;
            // 0x1d0690: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d068c) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D0694u;
label_1d0694:
    // 0x1d0694: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1d0694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d0698:
    // 0x1d0698: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1d0698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1d069c:
    // 0x1d069c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d06a0:
    // 0x1d06a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d06a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d06a4:
    // 0x1d06a4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d06a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d06a8:
    // 0x1d06a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d06a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1d06ac:
    // 0x1d06ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d06acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d06b0:
    // 0x1d06b0: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1d06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1d06b4:
    // 0x1d06b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d06b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d06b8:
    // 0x1d06b8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d06b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d06bc:
    // 0x1d06bc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d06bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d06c0:
    // 0x1d06c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d06c4:
    // 0x1d06c4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d06c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1d06c8:
    // 0x1d06c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d06c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d06cc:
    // 0x1d06cc: 0x0  nop
    ctx->pc = 0x1d06ccu;
    // NOP
label_1d06d0:
    // 0x1d06d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d06d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d06d4:
    // 0x1d06d4: 0xc04b6ee  jal         func_12DBB8
label_1d06d8:
    if (ctx->pc == 0x1D06D8u) {
        ctx->pc = 0x1D06D8u;
            // 0x1d06d8: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1D06DCu;
        goto label_1d06dc;
    }
    ctx->pc = 0x1D06D4u;
    SET_GPR_U32(ctx, 31, 0x1D06DCu);
    ctx->pc = 0x1D06D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D06D4u;
            // 0x1d06d8: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D06DCu; }
        if (ctx->pc != 0x1D06DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D06DCu; }
        if (ctx->pc != 0x1D06DCu) { return; }
    }
    ctx->pc = 0x1D06DCu;
label_1d06dc:
    // 0x1d06dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d06e0:
    // 0x1d06e0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d06e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d06e4:
    // 0x1d06e4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d06e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d06e8:
    // 0x1d06e8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d06e8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d06ec:
    // 0x1d06ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d06ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d06f0:
    // 0x1d06f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1d06f4:
    if (ctx->pc == 0x1D06F4u) {
        ctx->pc = 0x1D06F4u;
            // 0x1d06f4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1D06F8u;
        goto label_1d06f8;
    }
    ctx->pc = 0x1D06F0u;
    {
        const bool branch_taken_0x1d06f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D06F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D06F0u;
            // 0x1d06f4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06f0) {
            ctx->pc = 0x1D0700u;
            goto label_1d0700;
        }
    }
    ctx->pc = 0x1D06F8u;
label_1d06f8:
    // 0x1d06f8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d06f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d06fc:
    // 0x1d06fc: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d06fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d0700:
    // 0x1d0700: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0704:
    // 0x1d0704: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d0704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0708:
    // 0x1d0708: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d0708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d070c:
    // 0x1d070c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d070cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d0710:
    // 0x1d0710: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d0710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0714:
    // 0x1d0714: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d0718:
    if (ctx->pc == 0x1D0718u) {
        ctx->pc = 0x1D0718u;
            // 0x1d0718: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1D071Cu;
        goto label_1d071c;
    }
    ctx->pc = 0x1D0714u;
    {
        const bool branch_taken_0x1d0714 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0714u;
            // 0x1d0718: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0714) {
            ctx->pc = 0x1D0728u;
            goto label_1d0728;
        }
    }
    ctx->pc = 0x1D071Cu;
label_1d071c:
    // 0x1d071c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d071cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d0720:
    // 0x1d0720: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d0720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d0724:
    // 0x1d0724: 0x0  nop
    ctx->pc = 0x1d0724u;
    // NOP
label_1d0728:
    // 0x1d0728: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1d0728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1d072c:
    // 0x1d072c: 0x34439374  ori         $v1, $v0, 0x9374
    ctx->pc = 0x1d072cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)37748u)));
label_1d0730:
    // 0x1d0730: 0x3402bc6a  ori         $v0, $zero, 0xBC6A
    ctx->pc = 0x1d0730u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1d0734:
    // 0x1d0734: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d0734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d0738:
    // 0x1d0738: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d0738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1d073c:
    // 0x1d073c: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x1d073cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32506u)));
label_1d0740:
    // 0x1d0740: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1d0740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d0744:
    // 0x1d0744: 0xc040d72  jal         func_1035C8
label_1d0748:
    if (ctx->pc == 0x1D0748u) {
        ctx->pc = 0x1D0748u;
            // 0x1d0748: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D074Cu;
        goto label_1d074c;
    }
    ctx->pc = 0x1D0744u;
    SET_GPR_U32(ctx, 31, 0x1D074Cu);
    ctx->pc = 0x1D0748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0744u;
            // 0x1d0748: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D074Cu; }
        if (ctx->pc != 0x1D074Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D074Cu; }
        if (ctx->pc != 0x1D074Cu) { return; }
    }
    ctx->pc = 0x1D074Cu;
label_1d074c:
    // 0x1d074c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d074cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0750:
    // 0x1d0750: 0xc040880  jal         func_102200
label_1d0754:
    if (ctx->pc == 0x1D0754u) {
        ctx->pc = 0x1D0754u;
            // 0x1d0754: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0758u;
        goto label_1d0758;
    }
    ctx->pc = 0x1D0750u;
    SET_GPR_U32(ctx, 31, 0x1D0758u);
    ctx->pc = 0x1D0754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0750u;
            // 0x1d0754: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0758u; }
        if (ctx->pc != 0x1D0758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0758u; }
        if (ctx->pc != 0x1D0758u) { return; }
    }
    ctx->pc = 0x1D0758u;
label_1d0758:
    // 0x1d0758: 0xc040a74  jal         func_1029D0
label_1d075c:
    if (ctx->pc == 0x1D075Cu) {
        ctx->pc = 0x1D075Cu;
            // 0x1d075c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0760u;
        goto label_1d0760;
    }
    ctx->pc = 0x1D0758u;
    SET_GPR_U32(ctx, 31, 0x1D0760u);
    ctx->pc = 0x1D075Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0758u;
            // 0x1d075c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0760u; }
        if (ctx->pc != 0x1D0760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0760u; }
        if (ctx->pc != 0x1D0760u) { return; }
    }
    ctx->pc = 0x1D0760u;
label_1d0760:
    // 0x1d0760: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1d0760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d0764:
    // 0x1d0764: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d0764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0768:
    // 0x1d0768: 0x0  nop
    ctx->pc = 0x1d0768u;
    // NOP
label_1d076c:
    // 0x1d076c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1d076cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d0770:
    // 0x1d0770: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d0770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d0774:
    // 0x1d0774: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1d0774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d0778:
    // 0x1d0778: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1d0778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d077c:
    // 0x1d077c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_1d0780:
    if (ctx->pc == 0x1D0780u) {
        ctx->pc = 0x1D0780u;
            // 0x1d0780: 0x3c033f68  lui         $v1, 0x3F68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16232 << 16));
        ctx->pc = 0x1D0784u;
        goto label_1d0784;
    }
    ctx->pc = 0x1D077Cu;
    {
        const bool branch_taken_0x1d077c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D077Cu;
            // 0x1d0780: 0x3c033f68  lui         $v1, 0x3F68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16232 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d077c) {
            ctx->pc = 0x1D07C8u;
            goto label_1d07c8;
        }
    }
    ctx->pc = 0x1D0784u;
label_1d0784:
    // 0x1d0784: 0x3402bc6a  ori         $v0, $zero, 0xBC6A
    ctx->pc = 0x1d0784u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1d0788:
    // 0x1d0788: 0x34639374  ori         $v1, $v1, 0x9374
    ctx->pc = 0x1d0788u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)37748u)));
label_1d078c:
    // 0x1d078c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d078cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1d0790:
    // 0x1d0790: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d0790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d0794:
    // 0x1d0794: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x1d0794u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32506u)));
label_1d0798:
    // 0x1d0798: 0xc040d72  jal         func_1035C8
label_1d079c:
    if (ctx->pc == 0x1D079Cu) {
        ctx->pc = 0x1D079Cu;
            // 0x1d079c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D07A0u;
        goto label_1d07a0;
    }
    ctx->pc = 0x1D0798u;
    SET_GPR_U32(ctx, 31, 0x1D07A0u);
    ctx->pc = 0x1D079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0798u;
            // 0x1d079c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07A0u; }
        if (ctx->pc != 0x1D07A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07A0u; }
        if (ctx->pc != 0x1D07A0u) { return; }
    }
    ctx->pc = 0x1D07A0u;
label_1d07a0:
    // 0x1d07a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d07a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d07a4:
    // 0x1d07a4: 0xc040880  jal         func_102200
label_1d07a8:
    if (ctx->pc == 0x1D07A8u) {
        ctx->pc = 0x1D07A8u;
            // 0x1d07a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D07ACu;
        goto label_1d07ac;
    }
    ctx->pc = 0x1D07A4u;
    SET_GPR_U32(ctx, 31, 0x1D07ACu);
    ctx->pc = 0x1D07A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07A4u;
            // 0x1d07a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07ACu; }
        if (ctx->pc != 0x1D07ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07ACu; }
        if (ctx->pc != 0x1D07ACu) { return; }
    }
    ctx->pc = 0x1D07ACu;
label_1d07ac:
    // 0x1d07ac: 0xc040a74  jal         func_1029D0
label_1d07b0:
    if (ctx->pc == 0x1D07B0u) {
        ctx->pc = 0x1D07B0u;
            // 0x1d07b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D07B4u;
        goto label_1d07b4;
    }
    ctx->pc = 0x1D07ACu;
    SET_GPR_U32(ctx, 31, 0x1D07B4u);
    ctx->pc = 0x1D07B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07ACu;
            // 0x1d07b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07B4u; }
        if (ctx->pc != 0x1D07B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07B4u; }
        if (ctx->pc != 0x1D07B4u) { return; }
    }
    ctx->pc = 0x1D07B4u;
label_1d07b4:
    // 0x1d07b4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d07b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d07b8:
    // 0x1d07b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d07b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d07bc:
    // 0x1d07bc: 0x10000012  b           . + 4 + (0x12 << 2)
label_1d07c0:
    if (ctx->pc == 0x1D07C0u) {
        ctx->pc = 0x1D07C0u;
            // 0x1d07c0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D07C4u;
        goto label_1d07c4;
    }
    ctx->pc = 0x1D07BCu;
    {
        const bool branch_taken_0x1d07bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07BCu;
            // 0x1d07c0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07bc) {
            ctx->pc = 0x1D0808u;
            goto label_1d0808;
        }
    }
    ctx->pc = 0x1D07C4u;
label_1d07c4:
    // 0x1d07c4: 0x0  nop
    ctx->pc = 0x1d07c4u;
    // NOP
label_1d07c8:
    // 0x1d07c8: 0xc040d72  jal         func_1035C8
label_1d07cc:
    if (ctx->pc == 0x1D07CCu) {
        ctx->pc = 0x1D07CCu;
            // 0x1d07cc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->pc = 0x1D07D0u;
        goto label_1d07d0;
    }
    ctx->pc = 0x1D07C8u;
    SET_GPR_U32(ctx, 31, 0x1D07D0u);
    ctx->pc = 0x1D07CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07C8u;
            // 0x1d07cc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07D0u; }
        if (ctx->pc != 0x1D07D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07D0u; }
        if (ctx->pc != 0x1D07D0u) { return; }
    }
    ctx->pc = 0x1D07D0u;
label_1d07d0:
    // 0x1d07d0: 0x3c043f68  lui         $a0, 0x3F68
    ctx->pc = 0x1d07d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16232 << 16));
label_1d07d4:
    // 0x1d07d4: 0x3403bc6a  ori         $v1, $zero, 0xBC6A
    ctx->pc = 0x1d07d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1d07d8:
    // 0x1d07d8: 0x34849374  ori         $a0, $a0, 0x9374
    ctx->pc = 0x1d07d8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)37748u)));
label_1d07dc:
    // 0x1d07dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d07dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d07e0:
    // 0x1d07e0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d07e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d07e4:
    // 0x1d07e4: 0x34637efa  ori         $v1, $v1, 0x7EFA
    ctx->pc = 0x1d07e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32506u)));
label_1d07e8:
    // 0x1d07e8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d07e8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1d07ec:
    // 0x1d07ec: 0xc040880  jal         func_102200
label_1d07f0:
    if (ctx->pc == 0x1D07F0u) {
        ctx->pc = 0x1D07F0u;
            // 0x1d07f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D07F4u;
        goto label_1d07f4;
    }
    ctx->pc = 0x1D07ECu;
    SET_GPR_U32(ctx, 31, 0x1D07F4u);
    ctx->pc = 0x1D07F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07ECu;
            // 0x1d07f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07F4u; }
        if (ctx->pc != 0x1D07F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07F4u; }
        if (ctx->pc != 0x1D07F4u) { return; }
    }
    ctx->pc = 0x1D07F4u;
label_1d07f4:
    // 0x1d07f4: 0xc040a74  jal         func_1029D0
label_1d07f8:
    if (ctx->pc == 0x1D07F8u) {
        ctx->pc = 0x1D07F8u;
            // 0x1d07f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D07FCu;
        goto label_1d07fc;
    }
    ctx->pc = 0x1D07F4u;
    SET_GPR_U32(ctx, 31, 0x1D07FCu);
    ctx->pc = 0x1D07F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07F4u;
            // 0x1d07f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07FCu; }
        if (ctx->pc != 0x1D07FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07FCu; }
        if (ctx->pc != 0x1D07FCu) { return; }
    }
    ctx->pc = 0x1D07FCu;
label_1d07fc:
    // 0x1d07fc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0800:
    // 0x1d0800: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d0800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d0804:
    // 0x1d0804: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d0804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d0808:
    // 0x1d0808: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d080c:
    // 0x1d080c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0810:
    // 0x1d0810: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1d0810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0814:
    // 0x1d0814: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d0814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d0818:
    // 0x1d0818: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1d0818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_1d081c:
    // 0x1d081c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0820:
    // 0x1d0820: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d0820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0824:
    // 0x1d0824: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1d0824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0828:
    // 0x1d0828: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d0828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d082c:
    // 0x1d082c: 0xc065d00  jal         func_197400
label_1d0830:
    if (ctx->pc == 0x1D0830u) {
        ctx->pc = 0x1D0830u;
            // 0x1d0830: 0xe4400124  swc1        $f0, 0x124($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
        ctx->pc = 0x1D0834u;
        goto label_1d0834;
    }
    ctx->pc = 0x1D082Cu;
    SET_GPR_U32(ctx, 31, 0x1D0834u);
    ctx->pc = 0x1D0830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D082Cu;
            // 0x1d0830: 0xe4400124  swc1        $f0, 0x124($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0834u; }
        if (ctx->pc != 0x1D0834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0834u; }
        if (ctx->pc != 0x1D0834u) { return; }
    }
    ctx->pc = 0x1D0834u;
label_1d0834:
    // 0x1d0834: 0x1840007c  blez        $v0, . + 4 + (0x7C << 2)
label_1d0838:
    if (ctx->pc == 0x1D0838u) {
        ctx->pc = 0x1D083Cu;
        goto label_1d083c;
    }
    ctx->pc = 0x1D0834u;
    {
        const bool branch_taken_0x1d0834 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d0834) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D083Cu;
label_1d083c:
    // 0x1d083c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d0840:
    // 0x1d0840: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d0840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d0844:
    // 0x1d0844: 0x14620078  bne         $v1, $v0, . + 4 + (0x78 << 2)
label_1d0848:
    if (ctx->pc == 0x1D0848u) {
        ctx->pc = 0x1D084Cu;
        goto label_1d084c;
    }
    ctx->pc = 0x1D0844u;
    {
        const bool branch_taken_0x1d0844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0844) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D084Cu;
label_1d084c:
    // 0x1d084c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d084cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d0850:
    // 0x1d0850: 0xc06560c  jal         func_195830
label_1d0854:
    if (ctx->pc == 0x1D0854u) {
        ctx->pc = 0x1D0854u;
            // 0x1d0854: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D0858u;
        goto label_1d0858;
    }
    ctx->pc = 0x1D0850u;
    SET_GPR_U32(ctx, 31, 0x1D0858u);
    ctx->pc = 0x1D0854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0850u;
            // 0x1d0854: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0858u; }
        if (ctx->pc != 0x1D0858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0858u; }
        if (ctx->pc != 0x1D0858u) { return; }
    }
    ctx->pc = 0x1D0858u;
label_1d0858:
    // 0x1d0858: 0x10000073  b           . + 4 + (0x73 << 2)
label_1d085c:
    if (ctx->pc == 0x1D085Cu) {
        ctx->pc = 0x1D0860u;
        goto label_1d0860;
    }
    ctx->pc = 0x1D0858u;
    {
        const bool branch_taken_0x1d0858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0858) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D0860u;
label_1d0860:
    // 0x1d0860: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d0860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1d0864:
    // 0x1d0864: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1d0864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1d0868:
    // 0x1d0868: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d0868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d086c:
    // 0x1d086c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1d086cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d0870:
    // 0x1d0870: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d0870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d0874:
    // 0x1d0874: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d0874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1d0878:
    // 0x1d0878: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d0878u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d087c:
    // 0x1d087c: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1d087cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1d0880:
    // 0x1d0880: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0884:
    // 0x1d0884: 0x0  nop
    ctx->pc = 0x1d0884u;
    // NOP
label_1d0888:
    // 0x1d0888: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d0888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d088c:
    // 0x1d088c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d088cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d0890:
    // 0x1d0890: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d0890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d0894:
    // 0x1d0894: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d0894u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0898:
    // 0x1d0898: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d0898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1d089c:
    // 0x1d089c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d089cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d08a0:
    // 0x1d08a0: 0x0  nop
    ctx->pc = 0x1d08a0u;
    // NOP
label_1d08a4:
    // 0x1d08a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d08a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d08a8:
    // 0x1d08a8: 0xc04b6ee  jal         func_12DBB8
label_1d08ac:
    if (ctx->pc == 0x1D08ACu) {
        ctx->pc = 0x1D08ACu;
            // 0x1d08ac: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1D08B0u;
        goto label_1d08b0;
    }
    ctx->pc = 0x1D08A8u;
    SET_GPR_U32(ctx, 31, 0x1D08B0u);
    ctx->pc = 0x1D08ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08A8u;
            // 0x1d08ac: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D08B0u; }
        if (ctx->pc != 0x1D08B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D08B0u; }
        if (ctx->pc != 0x1D08B0u) { return; }
    }
    ctx->pc = 0x1D08B0u;
label_1d08b0:
    // 0x1d08b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d08b4:
    // 0x1d08b4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d08b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d08b8:
    // 0x1d08b8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d08b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d08bc:
    // 0x1d08bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d08bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d08c0:
    // 0x1d08c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d08c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d08c4:
    // 0x1d08c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1d08c8:
    if (ctx->pc == 0x1D08C8u) {
        ctx->pc = 0x1D08C8u;
            // 0x1d08c8: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1D08CCu;
        goto label_1d08cc;
    }
    ctx->pc = 0x1D08C4u;
    {
        const bool branch_taken_0x1d08c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D08C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08C4u;
            // 0x1d08c8: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08c4) {
            ctx->pc = 0x1D08D8u;
            goto label_1d08d8;
        }
    }
    ctx->pc = 0x1D08CCu;
label_1d08cc:
    // 0x1d08cc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d08ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d08d0:
    // 0x1d08d0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d08d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d08d4:
    // 0x1d08d4: 0x0  nop
    ctx->pc = 0x1d08d4u;
    // NOP
label_1d08d8:
    // 0x1d08d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d08d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d08dc:
    // 0x1d08dc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d08dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d08e0:
    // 0x1d08e0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d08e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d08e4:
    // 0x1d08e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d08e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d08e8:
    // 0x1d08e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d08e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d08ec:
    // 0x1d08ec: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d08f0:
    if (ctx->pc == 0x1D08F0u) {
        ctx->pc = 0x1D08F0u;
            // 0x1d08f0: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1D08F4u;
        goto label_1d08f4;
    }
    ctx->pc = 0x1D08ECu;
    {
        const bool branch_taken_0x1d08ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D08F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08ECu;
            // 0x1d08f0: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08ec) {
            ctx->pc = 0x1D0900u;
            goto label_1d0900;
        }
    }
    ctx->pc = 0x1D08F4u;
label_1d08f4:
    // 0x1d08f4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d08f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d08f8:
    // 0x1d08f8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d08f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d08fc:
    // 0x1d08fc: 0x0  nop
    ctx->pc = 0x1d08fcu;
    // NOP
label_1d0900:
    // 0x1d0900: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x1d0900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
label_1d0904:
    // 0x1d0904: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1d0904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d0908:
    // 0x1d0908: 0x34437ae1  ori         $v1, $v0, 0x7AE1
    ctx->pc = 0x1d0908u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31457u)));
label_1d090c:
    // 0x1d090c: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x1d090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_1d0910:
    // 0x1d0910: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d0910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d0914:
    // 0x1d0914: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1d0914u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_1d0918:
    // 0x1d0918: 0xc040d72  jal         func_1035C8
label_1d091c:
    if (ctx->pc == 0x1D091Cu) {
        ctx->pc = 0x1D091Cu;
            // 0x1d091c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D0920u;
        goto label_1d0920;
    }
    ctx->pc = 0x1D0918u;
    SET_GPR_U32(ctx, 31, 0x1D0920u);
    ctx->pc = 0x1D091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0918u;
            // 0x1d091c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0920u; }
        if (ctx->pc != 0x1D0920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0920u; }
        if (ctx->pc != 0x1D0920u) { return; }
    }
    ctx->pc = 0x1D0920u;
label_1d0920:
    // 0x1d0920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0924:
    // 0x1d0924: 0xc040880  jal         func_102200
label_1d0928:
    if (ctx->pc == 0x1D0928u) {
        ctx->pc = 0x1D0928u;
            // 0x1d0928: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D092Cu;
        goto label_1d092c;
    }
    ctx->pc = 0x1D0924u;
    SET_GPR_U32(ctx, 31, 0x1D092Cu);
    ctx->pc = 0x1D0928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0924u;
            // 0x1d0928: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D092Cu; }
        if (ctx->pc != 0x1D092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D092Cu; }
        if (ctx->pc != 0x1D092Cu) { return; }
    }
    ctx->pc = 0x1D092Cu;
label_1d092c:
    // 0x1d092c: 0xc040a74  jal         func_1029D0
label_1d0930:
    if (ctx->pc == 0x1D0930u) {
        ctx->pc = 0x1D0930u;
            // 0x1d0930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0934u;
        goto label_1d0934;
    }
    ctx->pc = 0x1D092Cu;
    SET_GPR_U32(ctx, 31, 0x1D0934u);
    ctx->pc = 0x1D0930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D092Cu;
            // 0x1d0930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0934u; }
        if (ctx->pc != 0x1D0934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0934u; }
        if (ctx->pc != 0x1D0934u) { return; }
    }
    ctx->pc = 0x1D0934u;
label_1d0934:
    // 0x1d0934: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1d0934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d0938:
    // 0x1d0938: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d0938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d093c:
    // 0x1d093c: 0x0  nop
    ctx->pc = 0x1d093cu;
    // NOP
label_1d0940:
    // 0x1d0940: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1d0940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d0944:
    // 0x1d0944: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d0944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d0948:
    // 0x1d0948: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1d0948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d094c:
    // 0x1d094c: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1d094cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0950:
    // 0x1d0950: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_1d0954:
    if (ctx->pc == 0x1D0954u) {
        ctx->pc = 0x1D0954u;
            // 0x1d0954: 0x3c033f94  lui         $v1, 0x3F94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16276 << 16));
        ctx->pc = 0x1D0958u;
        goto label_1d0958;
    }
    ctx->pc = 0x1D0950u;
    {
        const bool branch_taken_0x1d0950 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0950u;
            // 0x1d0954: 0x3c033f94  lui         $v1, 0x3F94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16276 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0950) {
            ctx->pc = 0x1D0990u;
            goto label_1d0990;
        }
    }
    ctx->pc = 0x1D0958u;
label_1d0958:
    // 0x1d0958: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x1d0958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_1d095c:
    // 0x1d095c: 0x34637ae1  ori         $v1, $v1, 0x7AE1
    ctx->pc = 0x1d095cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)31457u)));
label_1d0960:
    // 0x1d0960: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1d0960u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_1d0964:
    // 0x1d0964: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d0964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d0968:
    // 0x1d0968: 0xc040d72  jal         func_1035C8
label_1d096c:
    if (ctx->pc == 0x1D096Cu) {
        ctx->pc = 0x1D096Cu;
            // 0x1d096c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D0970u;
        goto label_1d0970;
    }
    ctx->pc = 0x1D0968u;
    SET_GPR_U32(ctx, 31, 0x1D0970u);
    ctx->pc = 0x1D096Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0968u;
            // 0x1d096c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0970u; }
        if (ctx->pc != 0x1D0970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0970u; }
        if (ctx->pc != 0x1D0970u) { return; }
    }
    ctx->pc = 0x1D0970u;
label_1d0970:
    // 0x1d0970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0974:
    // 0x1d0974: 0xc040880  jal         func_102200
label_1d0978:
    if (ctx->pc == 0x1D0978u) {
        ctx->pc = 0x1D0978u;
            // 0x1d0978: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D097Cu;
        goto label_1d097c;
    }
    ctx->pc = 0x1D0974u;
    SET_GPR_U32(ctx, 31, 0x1D097Cu);
    ctx->pc = 0x1D0978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0974u;
            // 0x1d0978: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D097Cu; }
        if (ctx->pc != 0x1D097Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D097Cu; }
        if (ctx->pc != 0x1D097Cu) { return; }
    }
    ctx->pc = 0x1D097Cu;
label_1d097c:
    // 0x1d097c: 0xc040a74  jal         func_1029D0
label_1d0980:
    if (ctx->pc == 0x1D0980u) {
        ctx->pc = 0x1D0980u;
            // 0x1d0980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0984u;
        goto label_1d0984;
    }
    ctx->pc = 0x1D097Cu;
    SET_GPR_U32(ctx, 31, 0x1D0984u);
    ctx->pc = 0x1D0980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D097Cu;
            // 0x1d0980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0984u; }
        if (ctx->pc != 0x1D0984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0984u; }
        if (ctx->pc != 0x1D0984u) { return; }
    }
    ctx->pc = 0x1D0984u;
label_1d0984:
    // 0x1d0984: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d0984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0988:
    // 0x1d0988: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d0988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d098c:
    // 0x1d098c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d098cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d0990:
    // 0x1d0990: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0994:
    // 0x1d0994: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d0994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0998:
    // 0x1d0998: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1d0998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d099c:
    // 0x1d099c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d099cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d09a0:
    // 0x1d09a0: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1d09a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_1d09a4:
    // 0x1d09a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d09a8:
    // 0x1d09a8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d09a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d09ac:
    // 0x1d09ac: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1d09acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d09b0:
    // 0x1d09b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d09b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d09b4:
    // 0x1d09b4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d09b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1d09b8:
    // 0x1d09b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d09bc:
    // 0x1d09bc: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x1d09bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
label_1d09c0:
    // 0x1d09c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1d09c4:
    if (ctx->pc == 0x1D09C4u) {
        ctx->pc = 0x1D09C4u;
            // 0x1d09c4: 0x28610033  slti        $at, $v1, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
        ctx->pc = 0x1D09C8u;
        goto label_1d09c8;
    }
    ctx->pc = 0x1D09C0u;
    {
        const bool branch_taken_0x1d09c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D09C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09C0u;
            // 0x1d09c4: 0x28610033  slti        $at, $v1, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09c0) {
            ctx->pc = 0x1D09F8u;
            goto label_1d09f8;
        }
    }
    ctx->pc = 0x1D09C8u;
label_1d09c8:
    // 0x1d09c8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1d09cc:
    if (ctx->pc == 0x1D09CCu) {
        ctx->pc = 0x1D09CCu;
            // 0x1d09cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1D09D0u;
        goto label_1d09d0;
    }
    ctx->pc = 0x1D09C8u;
    {
        const bool branch_taken_0x1d09c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D09CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09C8u;
            // 0x1d09cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09c8) {
            ctx->pc = 0x1D09F8u;
            goto label_1d09f8;
        }
    }
    ctx->pc = 0x1D09D0u;
label_1d09d0:
    // 0x1d09d0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d09d0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d09d4:
    // 0x1d09d4: 0x0  nop
    ctx->pc = 0x1d09d4u;
    // NOP
label_1d09d8:
    // 0x1d09d8: 0x0  nop
    ctx->pc = 0x1d09d8u;
    // NOP
label_1d09dc:
    // 0x1d09dc: 0x1010  mfhi        $v0
    ctx->pc = 0x1d09dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d09e0:
    // 0x1d09e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d09e4:
    if (ctx->pc == 0x1D09E4u) {
        ctx->pc = 0x1D09E8u;
        goto label_1d09e8;
    }
    ctx->pc = 0x1D09E0u;
    {
        const bool branch_taken_0x1d09e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d09e0) {
            ctx->pc = 0x1D09F8u;
            goto label_1d09f8;
        }
    }
    ctx->pc = 0x1D09E8u;
label_1d09e8:
    // 0x1d09e8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d09e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d09ec:
    // 0x1d09ec: 0xc0655a0  jal         func_195680
label_1d09f0:
    if (ctx->pc == 0x1D09F0u) {
        ctx->pc = 0x1D09F0u;
            // 0x1d09f0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D09F4u;
        goto label_1d09f4;
    }
    ctx->pc = 0x1D09ECu;
    SET_GPR_U32(ctx, 31, 0x1D09F4u);
    ctx->pc = 0x1D09F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09ECu;
            // 0x1d09f0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D09F4u; }
        if (ctx->pc != 0x1D09F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D09F4u; }
        if (ctx->pc != 0x1D09F4u) { return; }
    }
    ctx->pc = 0x1D09F4u;
label_1d09f4:
    // 0x1d09f4: 0x0  nop
    ctx->pc = 0x1d09f4u;
    // NOP
label_1d09f8:
    // 0x1d09f8: 0xc065d00  jal         func_197400
label_1d09fc:
    if (ctx->pc == 0x1D09FCu) {
        ctx->pc = 0x1D0A00u;
        goto label_1d0a00;
    }
    ctx->pc = 0x1D09F8u;
    SET_GPR_U32(ctx, 31, 0x1D0A00u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A00u; }
        if (ctx->pc != 0x1D0A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A00u; }
        if (ctx->pc != 0x1D0A00u) { return; }
    }
    ctx->pc = 0x1D0A00u;
label_1d0a00:
    // 0x1d0a00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d0a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d0a04:
    // 0x1d0a04: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1d0a08:
    if (ctx->pc == 0x1D0A08u) {
        ctx->pc = 0x1D0A0Cu;
        goto label_1d0a0c;
    }
    ctx->pc = 0x1D0A04u;
    {
        const bool branch_taken_0x1d0a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0a04) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D0A0Cu;
label_1d0a0c:
    // 0x1d0a0c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d0a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d0a10:
    // 0x1d0a10: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1d0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1d0a14:
    // 0x1d0a14: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d0a18:
    if (ctx->pc == 0x1D0A18u) {
        ctx->pc = 0x1D0A1Cu;
        goto label_1d0a1c;
    }
    ctx->pc = 0x1D0A14u;
    {
        const bool branch_taken_0x1d0a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0a14) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D0A1Cu;
label_1d0a1c:
    // 0x1d0a1c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d0a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d0a20:
    // 0x1d0a20: 0xc06560c  jal         func_195830
label_1d0a24:
    if (ctx->pc == 0x1D0A24u) {
        ctx->pc = 0x1D0A24u;
            // 0x1d0a24: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D0A28u;
        goto label_1d0a28;
    }
    ctx->pc = 0x1D0A20u;
    SET_GPR_U32(ctx, 31, 0x1D0A28u);
    ctx->pc = 0x1D0A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A20u;
            // 0x1d0a24: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A28u; }
        if (ctx->pc != 0x1D0A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A28u; }
        if (ctx->pc != 0x1D0A28u) { return; }
    }
    ctx->pc = 0x1D0A28u;
label_1d0a28:
    // 0x1d0a28: 0xc04b788  jal         func_12DE20
label_1d0a2c:
    if (ctx->pc == 0x1D0A2Cu) {
        ctx->pc = 0x1D0A2Cu;
            // 0x1d0a2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D0A30u;
        goto label_1d0a30;
    }
    ctx->pc = 0x1D0A28u;
    SET_GPR_U32(ctx, 31, 0x1D0A30u);
    ctx->pc = 0x1D0A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A28u;
            // 0x1d0a2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A30u; }
        if (ctx->pc != 0x1D0A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A30u; }
        if (ctx->pc != 0x1D0A30u) { return; }
    }
    ctx->pc = 0x1D0A30u;
label_1d0a30:
    // 0x1d0a30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d0a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0a34:
    // 0x1d0a34: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1d0a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d0a38:
    // 0x1d0a38: 0xc04b7da  jal         func_12DF68
label_1d0a3c:
    if (ctx->pc == 0x1D0A3Cu) {
        ctx->pc = 0x1D0A3Cu;
            // 0x1d0a3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A40u;
        goto label_1d0a40;
    }
    ctx->pc = 0x1D0A38u;
    SET_GPR_U32(ctx, 31, 0x1D0A40u);
    ctx->pc = 0x1D0A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A38u;
            // 0x1d0a3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A40u; }
        if (ctx->pc != 0x1D0A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A40u; }
        if (ctx->pc != 0x1D0A40u) { return; }
    }
    ctx->pc = 0x1D0A40u;
label_1d0a40:
    // 0x1d0a40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d0a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0a44:
    // 0x1d0a44: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1d0a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d0a48:
    // 0x1d0a48: 0xc04b804  jal         func_12E010
label_1d0a4c:
    if (ctx->pc == 0x1D0A4Cu) {
        ctx->pc = 0x1D0A4Cu;
            // 0x1d0a4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A50u;
        goto label_1d0a50;
    }
    ctx->pc = 0x1D0A48u;
    SET_GPR_U32(ctx, 31, 0x1D0A50u);
    ctx->pc = 0x1D0A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A48u;
            // 0x1d0a4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A50u; }
        if (ctx->pc != 0x1D0A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A50u; }
        if (ctx->pc != 0x1D0A50u) { return; }
    }
    ctx->pc = 0x1D0A50u;
label_1d0a50:
    // 0x1d0a50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d0a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0a54:
    // 0x1d0a54: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1d0a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d0a58:
    // 0x1d0a58: 0xc04b7b0  jal         func_12DEC0
label_1d0a5c:
    if (ctx->pc == 0x1D0A5Cu) {
        ctx->pc = 0x1D0A5Cu;
            // 0x1d0a5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A60u;
        goto label_1d0a60;
    }
    ctx->pc = 0x1D0A58u;
    SET_GPR_U32(ctx, 31, 0x1D0A60u);
    ctx->pc = 0x1D0A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A58u;
            // 0x1d0a5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A60u; }
        if (ctx->pc != 0x1D0A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A60u; }
        if (ctx->pc != 0x1D0A60u) { return; }
    }
    ctx->pc = 0x1D0A60u;
label_1d0a60:
    // 0x1d0a60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d0a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0a64:
    // 0x1d0a64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d0a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0a68:
    // 0x1d0a68: 0xc04b75e  jal         func_12DD78
label_1d0a6c:
    if (ctx->pc == 0x1D0A6Cu) {
        ctx->pc = 0x1D0A6Cu;
            // 0x1d0a6c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1D0A70u;
        goto label_1d0a70;
    }
    ctx->pc = 0x1D0A68u;
    SET_GPR_U32(ctx, 31, 0x1D0A70u);
    ctx->pc = 0x1D0A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A68u;
            // 0x1d0a6c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A70u; }
        if (ctx->pc != 0x1D0A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A70u; }
        if (ctx->pc != 0x1D0A70u) { return; }
    }
    ctx->pc = 0x1D0A70u;
label_1d0a70:
    // 0x1d0a70: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d0a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d0a74:
    // 0x1d0a74: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d0a78:
    // 0x1d0a78: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1d0a78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d0a7c:
    // 0x1d0a7c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1d0a80:
    if (ctx->pc == 0x1D0A80u) {
        ctx->pc = 0x1D0A84u;
        goto label_1d0a84;
    }
    ctx->pc = 0x1D0A7Cu;
    {
        const bool branch_taken_0x1d0a7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a7c) {
            ctx->pc = 0x1D0AD0u;
            goto label_1d0ad0;
        }
    }
    ctx->pc = 0x1D0A84u;
label_1d0a84:
    // 0x1d0a84: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1d0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1d0a88:
    // 0x1d0a88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d0a8c:
    if (ctx->pc == 0x1D0A8Cu) {
        ctx->pc = 0x1D0A90u;
        goto label_1d0a90;
    }
    ctx->pc = 0x1D0A88u;
    {
        const bool branch_taken_0x1d0a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a88) {
            ctx->pc = 0x1D0AA0u;
            goto label_1d0aa0;
        }
    }
    ctx->pc = 0x1D0A90u;
label_1d0a90:
    // 0x1d0a90: 0xc0604f0  jal         func_1813C0
label_1d0a94:
    if (ctx->pc == 0x1D0A94u) {
        ctx->pc = 0x1D0A94u;
            // 0x1d0a94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D0A98u;
        goto label_1d0a98;
    }
    ctx->pc = 0x1D0A90u;
    SET_GPR_U32(ctx, 31, 0x1D0A98u);
    ctx->pc = 0x1D0A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A90u;
            // 0x1d0a94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A98u; }
        if (ctx->pc != 0x1D0A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A98u; }
        if (ctx->pc != 0x1D0A98u) { return; }
    }
    ctx->pc = 0x1D0A98u;
label_1d0a98:
    // 0x1d0a98: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d0a9c:
    if (ctx->pc == 0x1D0A9Cu) {
        ctx->pc = 0x1D0AA0u;
        goto label_1d0aa0;
    }
    ctx->pc = 0x1D0A98u;
    {
        const bool branch_taken_0x1d0a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a98) {
            ctx->pc = 0x1D0AA8u;
            goto label_1d0aa8;
        }
    }
    ctx->pc = 0x1D0AA0u;
label_1d0aa0:
    // 0x1d0aa0: 0xc0604dc  jal         func_181370
label_1d0aa4:
    if (ctx->pc == 0x1D0AA4u) {
        ctx->pc = 0x1D0AA4u;
            // 0x1d0aa4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D0AA8u;
        goto label_1d0aa8;
    }
    ctx->pc = 0x1D0AA0u;
    SET_GPR_U32(ctx, 31, 0x1D0AA8u);
    ctx->pc = 0x1D0AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0AA0u;
            // 0x1d0aa4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AA8u; }
        if (ctx->pc != 0x1D0AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AA8u; }
        if (ctx->pc != 0x1D0AA8u) { return; }
    }
    ctx->pc = 0x1D0AA8u;
label_1d0aa8:
    // 0x1d0aa8: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1d0aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1d0aac:
    // 0x1d0aac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d0ab0:
    if (ctx->pc == 0x1D0AB0u) {
        ctx->pc = 0x1D0AB4u;
        goto label_1d0ab4;
    }
    ctx->pc = 0x1D0AACu;
    {
        const bool branch_taken_0x1d0aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0aac) {
            ctx->pc = 0x1D0AC0u;
            goto label_1d0ac0;
        }
    }
    ctx->pc = 0x1D0AB4u;
label_1d0ab4:
    // 0x1d0ab4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d0ab8:
    if (ctx->pc == 0x1D0AB8u) {
        ctx->pc = 0x1D0AB8u;
            // 0x1d0ab8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1D0ABCu;
        goto label_1d0abc;
    }
    ctx->pc = 0x1D0AB4u;
    {
        const bool branch_taken_0x1d0ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0AB4u;
            // 0x1d0ab8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ab4) {
            ctx->pc = 0x1D0AE0u;
            goto label_1d0ae0;
        }
    }
    ctx->pc = 0x1D0ABCu;
label_1d0abc:
    // 0x1d0abc: 0x0  nop
    ctx->pc = 0x1d0abcu;
    // NOP
label_1d0ac0:
    // 0x1d0ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0ac4:
    // 0x1d0ac4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d0ac8:
    if (ctx->pc == 0x1D0AC8u) {
        ctx->pc = 0x1D0AC8u;
            // 0x1d0ac8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1D0ACCu;
        goto label_1d0acc;
    }
    ctx->pc = 0x1D0AC4u;
    {
        const bool branch_taken_0x1d0ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0AC4u;
            // 0x1d0ac8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ac4) {
            ctx->pc = 0x1D0AE0u;
            goto label_1d0ae0;
        }
    }
    ctx->pc = 0x1D0ACCu;
label_1d0acc:
    // 0x1d0acc: 0x0  nop
    ctx->pc = 0x1d0accu;
    // NOP
label_1d0ad0:
    // 0x1d0ad0: 0xc0604dc  jal         func_181370
label_1d0ad4:
    if (ctx->pc == 0x1D0AD4u) {
        ctx->pc = 0x1D0AD4u;
            // 0x1d0ad4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D0AD8u;
        goto label_1d0ad8;
    }
    ctx->pc = 0x1D0AD0u;
    SET_GPR_U32(ctx, 31, 0x1D0AD8u);
    ctx->pc = 0x1D0AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0AD0u;
            // 0x1d0ad4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AD8u; }
        if (ctx->pc != 0x1D0AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AD8u; }
        if (ctx->pc != 0x1D0AD8u) { return; }
    }
    ctx->pc = 0x1D0AD8u;
label_1d0ad8:
    // 0x1d0ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0adc:
    // 0x1d0adc: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1d0adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1d0ae0:
    // 0x1d0ae0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d0ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d0ae4:
    // 0x1d0ae4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1d0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1d0ae8:
    // 0x1d0ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0aec:
    // 0x1d0aec: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1d0af0:
    // 0x1d0af0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d0af4:
    // 0x1d0af4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1d0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1d0af8:
    // 0x1d0af8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0afc:
    // 0x1d0afc: 0x0  nop
    ctx->pc = 0x1d0afcu;
    // NOP
label_1d0b00:
    // 0x1d0b00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d0b00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d0b04:
    // 0x1d0b04: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1d0b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1d0b08:
    // 0x1d0b08: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d0b0c:
    // 0x1d0b0c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1d0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1d0b10:
    // 0x1d0b10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0b14:
    // 0x1d0b14: 0x0  nop
    ctx->pc = 0x1d0b14u;
    // NOP
label_1d0b18:
    // 0x1d0b18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d0b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d0b1c:
    // 0x1d0b1c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1d0b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1d0b20:
    // 0x1d0b20: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d0b24:
    // 0x1d0b24: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1d0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d0b28:
    // 0x1d0b28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0b2c:
    // 0x1d0b2c: 0x0  nop
    ctx->pc = 0x1d0b2cu;
    // NOP
label_1d0b30:
    // 0x1d0b30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d0b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d0b34:
    // 0x1d0b34: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1d0b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1d0b38:
    // 0x1d0b38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d0b3c:
    // 0x1d0b3c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1d0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d0b40:
    // 0x1d0b40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0b44:
    // 0x1d0b44: 0x0  nop
    ctx->pc = 0x1d0b44u;
    // NOP
label_1d0b48:
    // 0x1d0b48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d0b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d0b4c:
    // 0x1d0b4c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1d0b4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1d0b50:
    // 0x1d0b50: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d0b54:
    // 0x1d0b54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d0b58:
    // 0x1d0b58: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1d0b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1d0b5c:
    // 0x1d0b5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0b60:
    // 0x1d0b60: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1d0b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0b64:
    // 0x1d0b64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d0b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0b68:
    // 0x1d0b68: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1d0b6c:
    if (ctx->pc == 0x1D0B6Cu) {
        ctx->pc = 0x1D0B6Cu;
            // 0x1d0b6c: 0x3c02c28c  lui         $v0, 0xC28C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49804 << 16));
        ctx->pc = 0x1D0B70u;
        goto label_1d0b70;
    }
    ctx->pc = 0x1D0B68u;
    {
        const bool branch_taken_0x1d0b68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B68u;
            // 0x1d0b6c: 0x3c02c28c  lui         $v0, 0xC28C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49804 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b68) {
            ctx->pc = 0x1D0BB8u;
            goto label_1d0bb8;
        }
    }
    ctx->pc = 0x1D0B70u;
label_1d0b70:
    // 0x1d0b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0b74:
    // 0x1d0b74: 0x0  nop
    ctx->pc = 0x1d0b74u;
    // NOP
label_1d0b78:
    // 0x1d0b78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0b7c:
    // 0x1d0b7c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_1d0b80:
    if (ctx->pc == 0x1D0B80u) {
        ctx->pc = 0x1D0B84u;
        goto label_1d0b84;
    }
    ctx->pc = 0x1D0B7Cu;
    {
        const bool branch_taken_0x1d0b7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0b7c) {
            ctx->pc = 0x1D0BB8u;
            goto label_1d0bb8;
        }
    }
    ctx->pc = 0x1D0B84u;
label_1d0b84:
    // 0x1d0b84: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1d0b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0b88:
    // 0x1d0b88: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d0b8c:
    // 0x1d0b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0b90:
    // 0x1d0b90: 0x0  nop
    ctx->pc = 0x1d0b90u;
    // NOP
label_1d0b94:
    // 0x1d0b94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d0b94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0b98:
    // 0x1d0b98: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d0b9c:
    if (ctx->pc == 0x1D0B9Cu) {
        ctx->pc = 0x1D0B9Cu;
            // 0x1d0b9c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1D0BA0u;
        goto label_1d0ba0;
    }
    ctx->pc = 0x1D0B98u;
    {
        const bool branch_taken_0x1d0b98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B98u;
            // 0x1d0b9c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b98) {
            ctx->pc = 0x1D0BB8u;
            goto label_1d0bb8;
        }
    }
    ctx->pc = 0x1D0BA0u;
label_1d0ba0:
    // 0x1d0ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0ba4:
    // 0x1d0ba4: 0x0  nop
    ctx->pc = 0x1d0ba4u;
    // NOP
label_1d0ba8:
    // 0x1d0ba8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0ba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0bac:
    // 0x1d0bac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1d0bb0:
    if (ctx->pc == 0x1D0BB0u) {
        ctx->pc = 0x1D0BB4u;
        goto label_1d0bb4;
    }
    ctx->pc = 0x1D0BACu;
    {
        const bool branch_taken_0x1d0bac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0bac) {
            ctx->pc = 0x1D0BD0u;
            goto label_1d0bd0;
        }
    }
    ctx->pc = 0x1D0BB4u;
label_1d0bb4:
    // 0x1d0bb4: 0x0  nop
    ctx->pc = 0x1d0bb4u;
    // NOP
label_1d0bb8:
    // 0x1d0bb8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1d0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1d0bbc:
    // 0x1d0bbc: 0x40f809  jalr        $v0
label_1d0bc0:
    if (ctx->pc == 0x1D0BC0u) {
        ctx->pc = 0x1D0BC0u;
            // 0x1d0bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BC4u;
        goto label_1d0bc4;
    }
    ctx->pc = 0x1D0BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0BC4u);
        ctx->pc = 0x1D0BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0BBCu;
            // 0x1d0bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFA70u: goto label_1cfa70;
            case 0x1CFA74u: goto label_1cfa74;
            case 0x1CFA78u: goto label_1cfa78;
            case 0x1CFA7Cu: goto label_1cfa7c;
            case 0x1CFA80u: goto label_1cfa80;
            case 0x1CFA84u: goto label_1cfa84;
            case 0x1CFA88u: goto label_1cfa88;
            case 0x1CFA8Cu: goto label_1cfa8c;
            case 0x1CFA90u: goto label_1cfa90;
            case 0x1CFA94u: goto label_1cfa94;
            case 0x1CFA98u: goto label_1cfa98;
            case 0x1CFA9Cu: goto label_1cfa9c;
            case 0x1CFAA0u: goto label_1cfaa0;
            case 0x1CFAA4u: goto label_1cfaa4;
            case 0x1CFAA8u: goto label_1cfaa8;
            case 0x1CFAACu: goto label_1cfaac;
            case 0x1CFAB0u: goto label_1cfab0;
            case 0x1CFAB4u: goto label_1cfab4;
            case 0x1CFAB8u: goto label_1cfab8;
            case 0x1CFABCu: goto label_1cfabc;
            case 0x1CFAC0u: goto label_1cfac0;
            case 0x1CFAC4u: goto label_1cfac4;
            case 0x1CFAC8u: goto label_1cfac8;
            case 0x1CFACCu: goto label_1cfacc;
            case 0x1CFAD0u: goto label_1cfad0;
            case 0x1CFAD4u: goto label_1cfad4;
            case 0x1CFAD8u: goto label_1cfad8;
            case 0x1CFADCu: goto label_1cfadc;
            case 0x1CFAE0u: goto label_1cfae0;
            case 0x1CFAE4u: goto label_1cfae4;
            case 0x1CFAE8u: goto label_1cfae8;
            case 0x1CFAECu: goto label_1cfaec;
            case 0x1CFAF0u: goto label_1cfaf0;
            case 0x1CFAF4u: goto label_1cfaf4;
            case 0x1CFAF8u: goto label_1cfaf8;
            case 0x1CFAFCu: goto label_1cfafc;
            case 0x1CFB00u: goto label_1cfb00;
            case 0x1CFB04u: goto label_1cfb04;
            case 0x1CFB08u: goto label_1cfb08;
            case 0x1CFB0Cu: goto label_1cfb0c;
            case 0x1CFB10u: goto label_1cfb10;
            case 0x1CFB14u: goto label_1cfb14;
            case 0x1CFB18u: goto label_1cfb18;
            case 0x1CFB1Cu: goto label_1cfb1c;
            case 0x1CFB20u: goto label_1cfb20;
            case 0x1CFB24u: goto label_1cfb24;
            case 0x1CFB28u: goto label_1cfb28;
            case 0x1CFB2Cu: goto label_1cfb2c;
            case 0x1CFB30u: goto label_1cfb30;
            case 0x1CFB34u: goto label_1cfb34;
            case 0x1CFB38u: goto label_1cfb38;
            case 0x1CFB3Cu: goto label_1cfb3c;
            case 0x1CFB40u: goto label_1cfb40;
            case 0x1CFB44u: goto label_1cfb44;
            case 0x1CFB48u: goto label_1cfb48;
            case 0x1CFB4Cu: goto label_1cfb4c;
            case 0x1CFB50u: goto label_1cfb50;
            case 0x1CFB54u: goto label_1cfb54;
            case 0x1CFB58u: goto label_1cfb58;
            case 0x1CFB5Cu: goto label_1cfb5c;
            case 0x1CFB60u: goto label_1cfb60;
            case 0x1CFB64u: goto label_1cfb64;
            case 0x1CFB68u: goto label_1cfb68;
            case 0x1CFB6Cu: goto label_1cfb6c;
            case 0x1CFB70u: goto label_1cfb70;
            case 0x1CFB74u: goto label_1cfb74;
            case 0x1CFB78u: goto label_1cfb78;
            case 0x1CFB7Cu: goto label_1cfb7c;
            case 0x1CFB80u: goto label_1cfb80;
            case 0x1CFB84u: goto label_1cfb84;
            case 0x1CFB88u: goto label_1cfb88;
            case 0x1CFB8Cu: goto label_1cfb8c;
            case 0x1CFB90u: goto label_1cfb90;
            case 0x1CFB94u: goto label_1cfb94;
            case 0x1CFB98u: goto label_1cfb98;
            case 0x1CFB9Cu: goto label_1cfb9c;
            case 0x1CFBA0u: goto label_1cfba0;
            case 0x1CFBA4u: goto label_1cfba4;
            case 0x1CFBA8u: goto label_1cfba8;
            case 0x1CFBACu: goto label_1cfbac;
            case 0x1CFBB0u: goto label_1cfbb0;
            case 0x1CFBB4u: goto label_1cfbb4;
            case 0x1CFBB8u: goto label_1cfbb8;
            case 0x1CFBBCu: goto label_1cfbbc;
            case 0x1CFBC0u: goto label_1cfbc0;
            case 0x1CFBC4u: goto label_1cfbc4;
            case 0x1CFBC8u: goto label_1cfbc8;
            case 0x1CFBCCu: goto label_1cfbcc;
            case 0x1CFBD0u: goto label_1cfbd0;
            case 0x1CFBD4u: goto label_1cfbd4;
            case 0x1CFBD8u: goto label_1cfbd8;
            case 0x1CFBDCu: goto label_1cfbdc;
            case 0x1CFBE0u: goto label_1cfbe0;
            case 0x1CFBE4u: goto label_1cfbe4;
            case 0x1CFBE8u: goto label_1cfbe8;
            case 0x1CFBECu: goto label_1cfbec;
            case 0x1CFBF0u: goto label_1cfbf0;
            case 0x1CFBF4u: goto label_1cfbf4;
            case 0x1CFBF8u: goto label_1cfbf8;
            case 0x1CFBFCu: goto label_1cfbfc;
            case 0x1CFC00u: goto label_1cfc00;
            case 0x1CFC04u: goto label_1cfc04;
            case 0x1CFC08u: goto label_1cfc08;
            case 0x1CFC0Cu: goto label_1cfc0c;
            case 0x1CFC10u: goto label_1cfc10;
            case 0x1CFC14u: goto label_1cfc14;
            case 0x1CFC18u: goto label_1cfc18;
            case 0x1CFC1Cu: goto label_1cfc1c;
            case 0x1CFC20u: goto label_1cfc20;
            case 0x1CFC24u: goto label_1cfc24;
            case 0x1CFC28u: goto label_1cfc28;
            case 0x1CFC2Cu: goto label_1cfc2c;
            case 0x1CFC30u: goto label_1cfc30;
            case 0x1CFC34u: goto label_1cfc34;
            case 0x1CFC38u: goto label_1cfc38;
            case 0x1CFC3Cu: goto label_1cfc3c;
            case 0x1CFC40u: goto label_1cfc40;
            case 0x1CFC44u: goto label_1cfc44;
            case 0x1CFC48u: goto label_1cfc48;
            case 0x1CFC4Cu: goto label_1cfc4c;
            case 0x1CFC50u: goto label_1cfc50;
            case 0x1CFC54u: goto label_1cfc54;
            case 0x1CFC58u: goto label_1cfc58;
            case 0x1CFC5Cu: goto label_1cfc5c;
            case 0x1CFC60u: goto label_1cfc60;
            case 0x1CFC64u: goto label_1cfc64;
            case 0x1CFC68u: goto label_1cfc68;
            case 0x1CFC6Cu: goto label_1cfc6c;
            case 0x1CFC70u: goto label_1cfc70;
            case 0x1CFC74u: goto label_1cfc74;
            case 0x1CFC78u: goto label_1cfc78;
            case 0x1CFC7Cu: goto label_1cfc7c;
            case 0x1CFC80u: goto label_1cfc80;
            case 0x1CFC84u: goto label_1cfc84;
            case 0x1CFC88u: goto label_1cfc88;
            case 0x1CFC8Cu: goto label_1cfc8c;
            case 0x1CFC90u: goto label_1cfc90;
            case 0x1CFC94u: goto label_1cfc94;
            case 0x1CFC98u: goto label_1cfc98;
            case 0x1CFC9Cu: goto label_1cfc9c;
            case 0x1CFCA0u: goto label_1cfca0;
            case 0x1CFCA4u: goto label_1cfca4;
            case 0x1CFCA8u: goto label_1cfca8;
            case 0x1CFCACu: goto label_1cfcac;
            case 0x1CFCB0u: goto label_1cfcb0;
            case 0x1CFCB4u: goto label_1cfcb4;
            case 0x1CFCB8u: goto label_1cfcb8;
            case 0x1CFCBCu: goto label_1cfcbc;
            case 0x1CFCC0u: goto label_1cfcc0;
            case 0x1CFCC4u: goto label_1cfcc4;
            case 0x1CFCC8u: goto label_1cfcc8;
            case 0x1CFCCCu: goto label_1cfccc;
            case 0x1CFCD0u: goto label_1cfcd0;
            case 0x1CFCD4u: goto label_1cfcd4;
            case 0x1CFCD8u: goto label_1cfcd8;
            case 0x1CFCDCu: goto label_1cfcdc;
            case 0x1CFCE0u: goto label_1cfce0;
            case 0x1CFCE4u: goto label_1cfce4;
            case 0x1CFCE8u: goto label_1cfce8;
            case 0x1CFCECu: goto label_1cfcec;
            case 0x1CFCF0u: goto label_1cfcf0;
            case 0x1CFCF4u: goto label_1cfcf4;
            case 0x1CFCF8u: goto label_1cfcf8;
            case 0x1CFCFCu: goto label_1cfcfc;
            case 0x1CFD00u: goto label_1cfd00;
            case 0x1CFD04u: goto label_1cfd04;
            case 0x1CFD08u: goto label_1cfd08;
            case 0x1CFD0Cu: goto label_1cfd0c;
            case 0x1CFD10u: goto label_1cfd10;
            case 0x1CFD14u: goto label_1cfd14;
            case 0x1CFD18u: goto label_1cfd18;
            case 0x1CFD1Cu: goto label_1cfd1c;
            case 0x1CFD20u: goto label_1cfd20;
            case 0x1CFD24u: goto label_1cfd24;
            case 0x1CFD28u: goto label_1cfd28;
            case 0x1CFD2Cu: goto label_1cfd2c;
            case 0x1CFD30u: goto label_1cfd30;
            case 0x1CFD34u: goto label_1cfd34;
            case 0x1CFD38u: goto label_1cfd38;
            case 0x1CFD3Cu: goto label_1cfd3c;
            case 0x1CFD40u: goto label_1cfd40;
            case 0x1CFD44u: goto label_1cfd44;
            case 0x1CFD48u: goto label_1cfd48;
            case 0x1CFD4Cu: goto label_1cfd4c;
            case 0x1CFD50u: goto label_1cfd50;
            case 0x1CFD54u: goto label_1cfd54;
            case 0x1CFD58u: goto label_1cfd58;
            case 0x1CFD5Cu: goto label_1cfd5c;
            case 0x1CFD60u: goto label_1cfd60;
            case 0x1CFD64u: goto label_1cfd64;
            case 0x1CFD68u: goto label_1cfd68;
            case 0x1CFD6Cu: goto label_1cfd6c;
            case 0x1CFD70u: goto label_1cfd70;
            case 0x1CFD74u: goto label_1cfd74;
            case 0x1CFD78u: goto label_1cfd78;
            case 0x1CFD7Cu: goto label_1cfd7c;
            case 0x1CFD80u: goto label_1cfd80;
            case 0x1CFD84u: goto label_1cfd84;
            case 0x1CFD88u: goto label_1cfd88;
            case 0x1CFD8Cu: goto label_1cfd8c;
            case 0x1CFD90u: goto label_1cfd90;
            case 0x1CFD94u: goto label_1cfd94;
            case 0x1CFD98u: goto label_1cfd98;
            case 0x1CFD9Cu: goto label_1cfd9c;
            case 0x1CFDA0u: goto label_1cfda0;
            case 0x1CFDA4u: goto label_1cfda4;
            case 0x1CFDA8u: goto label_1cfda8;
            case 0x1CFDACu: goto label_1cfdac;
            case 0x1CFDB0u: goto label_1cfdb0;
            case 0x1CFDB4u: goto label_1cfdb4;
            case 0x1CFDB8u: goto label_1cfdb8;
            case 0x1CFDBCu: goto label_1cfdbc;
            case 0x1CFDC0u: goto label_1cfdc0;
            case 0x1CFDC4u: goto label_1cfdc4;
            case 0x1CFDC8u: goto label_1cfdc8;
            case 0x1CFDCCu: goto label_1cfdcc;
            case 0x1CFDD0u: goto label_1cfdd0;
            case 0x1CFDD4u: goto label_1cfdd4;
            case 0x1CFDD8u: goto label_1cfdd8;
            case 0x1CFDDCu: goto label_1cfddc;
            case 0x1CFDE0u: goto label_1cfde0;
            case 0x1CFDE4u: goto label_1cfde4;
            case 0x1CFDE8u: goto label_1cfde8;
            case 0x1CFDECu: goto label_1cfdec;
            case 0x1CFDF0u: goto label_1cfdf0;
            case 0x1CFDF4u: goto label_1cfdf4;
            case 0x1CFDF8u: goto label_1cfdf8;
            case 0x1CFDFCu: goto label_1cfdfc;
            case 0x1CFE00u: goto label_1cfe00;
            case 0x1CFE04u: goto label_1cfe04;
            case 0x1CFE08u: goto label_1cfe08;
            case 0x1CFE0Cu: goto label_1cfe0c;
            case 0x1CFE10u: goto label_1cfe10;
            case 0x1CFE14u: goto label_1cfe14;
            case 0x1CFE18u: goto label_1cfe18;
            case 0x1CFE1Cu: goto label_1cfe1c;
            case 0x1CFE20u: goto label_1cfe20;
            case 0x1CFE24u: goto label_1cfe24;
            case 0x1CFE28u: goto label_1cfe28;
            case 0x1CFE2Cu: goto label_1cfe2c;
            case 0x1CFE30u: goto label_1cfe30;
            case 0x1CFE34u: goto label_1cfe34;
            case 0x1CFE38u: goto label_1cfe38;
            case 0x1CFE3Cu: goto label_1cfe3c;
            case 0x1CFE40u: goto label_1cfe40;
            case 0x1CFE44u: goto label_1cfe44;
            case 0x1CFE48u: goto label_1cfe48;
            case 0x1CFE4Cu: goto label_1cfe4c;
            case 0x1CFE50u: goto label_1cfe50;
            case 0x1CFE54u: goto label_1cfe54;
            case 0x1CFE58u: goto label_1cfe58;
            case 0x1CFE5Cu: goto label_1cfe5c;
            case 0x1CFE60u: goto label_1cfe60;
            case 0x1CFE64u: goto label_1cfe64;
            case 0x1CFE68u: goto label_1cfe68;
            case 0x1CFE6Cu: goto label_1cfe6c;
            case 0x1CFE70u: goto label_1cfe70;
            case 0x1CFE74u: goto label_1cfe74;
            case 0x1CFE78u: goto label_1cfe78;
            case 0x1CFE7Cu: goto label_1cfe7c;
            case 0x1CFE80u: goto label_1cfe80;
            case 0x1CFE84u: goto label_1cfe84;
            case 0x1CFE88u: goto label_1cfe88;
            case 0x1CFE8Cu: goto label_1cfe8c;
            case 0x1CFE90u: goto label_1cfe90;
            case 0x1CFE94u: goto label_1cfe94;
            case 0x1CFE98u: goto label_1cfe98;
            case 0x1CFE9Cu: goto label_1cfe9c;
            case 0x1CFEA0u: goto label_1cfea0;
            case 0x1CFEA4u: goto label_1cfea4;
            case 0x1CFEA8u: goto label_1cfea8;
            case 0x1CFEACu: goto label_1cfeac;
            case 0x1CFEB0u: goto label_1cfeb0;
            case 0x1CFEB4u: goto label_1cfeb4;
            case 0x1CFEB8u: goto label_1cfeb8;
            case 0x1CFEBCu: goto label_1cfebc;
            case 0x1CFEC0u: goto label_1cfec0;
            case 0x1CFEC4u: goto label_1cfec4;
            case 0x1CFEC8u: goto label_1cfec8;
            case 0x1CFECCu: goto label_1cfecc;
            case 0x1CFED0u: goto label_1cfed0;
            case 0x1CFED4u: goto label_1cfed4;
            case 0x1CFED8u: goto label_1cfed8;
            case 0x1CFEDCu: goto label_1cfedc;
            case 0x1CFEE0u: goto label_1cfee0;
            case 0x1CFEE4u: goto label_1cfee4;
            case 0x1CFEE8u: goto label_1cfee8;
            case 0x1CFEECu: goto label_1cfeec;
            case 0x1CFEF0u: goto label_1cfef0;
            case 0x1CFEF4u: goto label_1cfef4;
            case 0x1CFEF8u: goto label_1cfef8;
            case 0x1CFEFCu: goto label_1cfefc;
            case 0x1CFF00u: goto label_1cff00;
            case 0x1CFF04u: goto label_1cff04;
            case 0x1CFF08u: goto label_1cff08;
            case 0x1CFF0Cu: goto label_1cff0c;
            case 0x1CFF10u: goto label_1cff10;
            case 0x1CFF14u: goto label_1cff14;
            case 0x1CFF18u: goto label_1cff18;
            case 0x1CFF1Cu: goto label_1cff1c;
            case 0x1CFF20u: goto label_1cff20;
            case 0x1CFF24u: goto label_1cff24;
            case 0x1CFF28u: goto label_1cff28;
            case 0x1CFF2Cu: goto label_1cff2c;
            case 0x1CFF30u: goto label_1cff30;
            case 0x1CFF34u: goto label_1cff34;
            case 0x1CFF38u: goto label_1cff38;
            case 0x1CFF3Cu: goto label_1cff3c;
            case 0x1CFF40u: goto label_1cff40;
            case 0x1CFF44u: goto label_1cff44;
            case 0x1CFF48u: goto label_1cff48;
            case 0x1CFF4Cu: goto label_1cff4c;
            case 0x1CFF50u: goto label_1cff50;
            case 0x1CFF54u: goto label_1cff54;
            case 0x1CFF58u: goto label_1cff58;
            case 0x1CFF5Cu: goto label_1cff5c;
            case 0x1CFF60u: goto label_1cff60;
            case 0x1CFF64u: goto label_1cff64;
            case 0x1CFF68u: goto label_1cff68;
            case 0x1CFF6Cu: goto label_1cff6c;
            case 0x1CFF70u: goto label_1cff70;
            case 0x1CFF74u: goto label_1cff74;
            case 0x1CFF78u: goto label_1cff78;
            case 0x1CFF7Cu: goto label_1cff7c;
            case 0x1CFF80u: goto label_1cff80;
            case 0x1CFF84u: goto label_1cff84;
            case 0x1CFF88u: goto label_1cff88;
            case 0x1CFF8Cu: goto label_1cff8c;
            case 0x1CFF90u: goto label_1cff90;
            case 0x1CFF94u: goto label_1cff94;
            case 0x1CFF98u: goto label_1cff98;
            case 0x1CFF9Cu: goto label_1cff9c;
            case 0x1CFFA0u: goto label_1cffa0;
            case 0x1CFFA4u: goto label_1cffa4;
            case 0x1CFFA8u: goto label_1cffa8;
            case 0x1CFFACu: goto label_1cffac;
            case 0x1CFFB0u: goto label_1cffb0;
            case 0x1CFFB4u: goto label_1cffb4;
            case 0x1CFFB8u: goto label_1cffb8;
            case 0x1CFFBCu: goto label_1cffbc;
            case 0x1CFFC0u: goto label_1cffc0;
            case 0x1CFFC4u: goto label_1cffc4;
            case 0x1CFFC8u: goto label_1cffc8;
            case 0x1CFFCCu: goto label_1cffcc;
            case 0x1CFFD0u: goto label_1cffd0;
            case 0x1CFFD4u: goto label_1cffd4;
            case 0x1CFFD8u: goto label_1cffd8;
            case 0x1CFFDCu: goto label_1cffdc;
            case 0x1CFFE0u: goto label_1cffe0;
            case 0x1CFFE4u: goto label_1cffe4;
            case 0x1CFFE8u: goto label_1cffe8;
            case 0x1CFFECu: goto label_1cffec;
            case 0x1CFFF0u: goto label_1cfff0;
            case 0x1CFFF4u: goto label_1cfff4;
            case 0x1CFFF8u: goto label_1cfff8;
            case 0x1CFFFCu: goto label_1cfffc;
            case 0x1D0000u: goto label_1d0000;
            case 0x1D0004u: goto label_1d0004;
            case 0x1D0008u: goto label_1d0008;
            case 0x1D000Cu: goto label_1d000c;
            case 0x1D0010u: goto label_1d0010;
            case 0x1D0014u: goto label_1d0014;
            case 0x1D0018u: goto label_1d0018;
            case 0x1D001Cu: goto label_1d001c;
            case 0x1D0020u: goto label_1d0020;
            case 0x1D0024u: goto label_1d0024;
            case 0x1D0028u: goto label_1d0028;
            case 0x1D002Cu: goto label_1d002c;
            case 0x1D0030u: goto label_1d0030;
            case 0x1D0034u: goto label_1d0034;
            case 0x1D0038u: goto label_1d0038;
            case 0x1D003Cu: goto label_1d003c;
            case 0x1D0040u: goto label_1d0040;
            case 0x1D0044u: goto label_1d0044;
            case 0x1D0048u: goto label_1d0048;
            case 0x1D004Cu: goto label_1d004c;
            case 0x1D0050u: goto label_1d0050;
            case 0x1D0054u: goto label_1d0054;
            case 0x1D0058u: goto label_1d0058;
            case 0x1D005Cu: goto label_1d005c;
            case 0x1D0060u: goto label_1d0060;
            case 0x1D0064u: goto label_1d0064;
            case 0x1D0068u: goto label_1d0068;
            case 0x1D006Cu: goto label_1d006c;
            case 0x1D0070u: goto label_1d0070;
            case 0x1D0074u: goto label_1d0074;
            case 0x1D0078u: goto label_1d0078;
            case 0x1D007Cu: goto label_1d007c;
            case 0x1D0080u: goto label_1d0080;
            case 0x1D0084u: goto label_1d0084;
            case 0x1D0088u: goto label_1d0088;
            case 0x1D008Cu: goto label_1d008c;
            case 0x1D0090u: goto label_1d0090;
            case 0x1D0094u: goto label_1d0094;
            case 0x1D0098u: goto label_1d0098;
            case 0x1D009Cu: goto label_1d009c;
            case 0x1D00A0u: goto label_1d00a0;
            case 0x1D00A4u: goto label_1d00a4;
            case 0x1D00A8u: goto label_1d00a8;
            case 0x1D00ACu: goto label_1d00ac;
            case 0x1D00B0u: goto label_1d00b0;
            case 0x1D00B4u: goto label_1d00b4;
            case 0x1D00B8u: goto label_1d00b8;
            case 0x1D00BCu: goto label_1d00bc;
            case 0x1D00C0u: goto label_1d00c0;
            case 0x1D00C4u: goto label_1d00c4;
            case 0x1D00C8u: goto label_1d00c8;
            case 0x1D00CCu: goto label_1d00cc;
            case 0x1D00D0u: goto label_1d00d0;
            case 0x1D00D4u: goto label_1d00d4;
            case 0x1D00D8u: goto label_1d00d8;
            case 0x1D00DCu: goto label_1d00dc;
            case 0x1D00E0u: goto label_1d00e0;
            case 0x1D00E4u: goto label_1d00e4;
            case 0x1D00E8u: goto label_1d00e8;
            case 0x1D00ECu: goto label_1d00ec;
            case 0x1D00F0u: goto label_1d00f0;
            case 0x1D00F4u: goto label_1d00f4;
            case 0x1D00F8u: goto label_1d00f8;
            case 0x1D00FCu: goto label_1d00fc;
            case 0x1D0100u: goto label_1d0100;
            case 0x1D0104u: goto label_1d0104;
            case 0x1D0108u: goto label_1d0108;
            case 0x1D010Cu: goto label_1d010c;
            case 0x1D0110u: goto label_1d0110;
            case 0x1D0114u: goto label_1d0114;
            case 0x1D0118u: goto label_1d0118;
            case 0x1D011Cu: goto label_1d011c;
            case 0x1D0120u: goto label_1d0120;
            case 0x1D0124u: goto label_1d0124;
            case 0x1D0128u: goto label_1d0128;
            case 0x1D012Cu: goto label_1d012c;
            case 0x1D0130u: goto label_1d0130;
            case 0x1D0134u: goto label_1d0134;
            case 0x1D0138u: goto label_1d0138;
            case 0x1D013Cu: goto label_1d013c;
            case 0x1D0140u: goto label_1d0140;
            case 0x1D0144u: goto label_1d0144;
            case 0x1D0148u: goto label_1d0148;
            case 0x1D014Cu: goto label_1d014c;
            case 0x1D0150u: goto label_1d0150;
            case 0x1D0154u: goto label_1d0154;
            case 0x1D0158u: goto label_1d0158;
            case 0x1D015Cu: goto label_1d015c;
            case 0x1D0160u: goto label_1d0160;
            case 0x1D0164u: goto label_1d0164;
            case 0x1D0168u: goto label_1d0168;
            case 0x1D016Cu: goto label_1d016c;
            case 0x1D0170u: goto label_1d0170;
            case 0x1D0174u: goto label_1d0174;
            case 0x1D0178u: goto label_1d0178;
            case 0x1D017Cu: goto label_1d017c;
            case 0x1D0180u: goto label_1d0180;
            case 0x1D0184u: goto label_1d0184;
            case 0x1D0188u: goto label_1d0188;
            case 0x1D018Cu: goto label_1d018c;
            case 0x1D0190u: goto label_1d0190;
            case 0x1D0194u: goto label_1d0194;
            case 0x1D0198u: goto label_1d0198;
            case 0x1D019Cu: goto label_1d019c;
            case 0x1D01A0u: goto label_1d01a0;
            case 0x1D01A4u: goto label_1d01a4;
            case 0x1D01A8u: goto label_1d01a8;
            case 0x1D01ACu: goto label_1d01ac;
            case 0x1D01B0u: goto label_1d01b0;
            case 0x1D01B4u: goto label_1d01b4;
            case 0x1D01B8u: goto label_1d01b8;
            case 0x1D01BCu: goto label_1d01bc;
            case 0x1D01C0u: goto label_1d01c0;
            case 0x1D01C4u: goto label_1d01c4;
            case 0x1D01C8u: goto label_1d01c8;
            case 0x1D01CCu: goto label_1d01cc;
            case 0x1D01D0u: goto label_1d01d0;
            case 0x1D01D4u: goto label_1d01d4;
            case 0x1D01D8u: goto label_1d01d8;
            case 0x1D01DCu: goto label_1d01dc;
            case 0x1D01E0u: goto label_1d01e0;
            case 0x1D01E4u: goto label_1d01e4;
            case 0x1D01E8u: goto label_1d01e8;
            case 0x1D01ECu: goto label_1d01ec;
            case 0x1D01F0u: goto label_1d01f0;
            case 0x1D01F4u: goto label_1d01f4;
            case 0x1D01F8u: goto label_1d01f8;
            case 0x1D01FCu: goto label_1d01fc;
            case 0x1D0200u: goto label_1d0200;
            case 0x1D0204u: goto label_1d0204;
            case 0x1D0208u: goto label_1d0208;
            case 0x1D020Cu: goto label_1d020c;
            case 0x1D0210u: goto label_1d0210;
            case 0x1D0214u: goto label_1d0214;
            case 0x1D0218u: goto label_1d0218;
            case 0x1D021Cu: goto label_1d021c;
            case 0x1D0220u: goto label_1d0220;
            case 0x1D0224u: goto label_1d0224;
            case 0x1D0228u: goto label_1d0228;
            case 0x1D022Cu: goto label_1d022c;
            case 0x1D0230u: goto label_1d0230;
            case 0x1D0234u: goto label_1d0234;
            case 0x1D0238u: goto label_1d0238;
            case 0x1D023Cu: goto label_1d023c;
            case 0x1D0240u: goto label_1d0240;
            case 0x1D0244u: goto label_1d0244;
            case 0x1D0248u: goto label_1d0248;
            case 0x1D024Cu: goto label_1d024c;
            case 0x1D0250u: goto label_1d0250;
            case 0x1D0254u: goto label_1d0254;
            case 0x1D0258u: goto label_1d0258;
            case 0x1D025Cu: goto label_1d025c;
            case 0x1D0260u: goto label_1d0260;
            case 0x1D0264u: goto label_1d0264;
            case 0x1D0268u: goto label_1d0268;
            case 0x1D026Cu: goto label_1d026c;
            case 0x1D0270u: goto label_1d0270;
            case 0x1D0274u: goto label_1d0274;
            case 0x1D0278u: goto label_1d0278;
            case 0x1D027Cu: goto label_1d027c;
            case 0x1D0280u: goto label_1d0280;
            case 0x1D0284u: goto label_1d0284;
            case 0x1D0288u: goto label_1d0288;
            case 0x1D028Cu: goto label_1d028c;
            case 0x1D0290u: goto label_1d0290;
            case 0x1D0294u: goto label_1d0294;
            case 0x1D0298u: goto label_1d0298;
            case 0x1D029Cu: goto label_1d029c;
            case 0x1D02A0u: goto label_1d02a0;
            case 0x1D02A4u: goto label_1d02a4;
            case 0x1D02A8u: goto label_1d02a8;
            case 0x1D02ACu: goto label_1d02ac;
            case 0x1D02B0u: goto label_1d02b0;
            case 0x1D02B4u: goto label_1d02b4;
            case 0x1D02B8u: goto label_1d02b8;
            case 0x1D02BCu: goto label_1d02bc;
            case 0x1D02C0u: goto label_1d02c0;
            case 0x1D02C4u: goto label_1d02c4;
            case 0x1D02C8u: goto label_1d02c8;
            case 0x1D02CCu: goto label_1d02cc;
            case 0x1D02D0u: goto label_1d02d0;
            case 0x1D02D4u: goto label_1d02d4;
            case 0x1D02D8u: goto label_1d02d8;
            case 0x1D02DCu: goto label_1d02dc;
            case 0x1D02E0u: goto label_1d02e0;
            case 0x1D02E4u: goto label_1d02e4;
            case 0x1D02E8u: goto label_1d02e8;
            case 0x1D02ECu: goto label_1d02ec;
            case 0x1D02F0u: goto label_1d02f0;
            case 0x1D02F4u: goto label_1d02f4;
            case 0x1D02F8u: goto label_1d02f8;
            case 0x1D02FCu: goto label_1d02fc;
            case 0x1D0300u: goto label_1d0300;
            case 0x1D0304u: goto label_1d0304;
            case 0x1D0308u: goto label_1d0308;
            case 0x1D030Cu: goto label_1d030c;
            case 0x1D0310u: goto label_1d0310;
            case 0x1D0314u: goto label_1d0314;
            case 0x1D0318u: goto label_1d0318;
            case 0x1D031Cu: goto label_1d031c;
            case 0x1D0320u: goto label_1d0320;
            case 0x1D0324u: goto label_1d0324;
            case 0x1D0328u: goto label_1d0328;
            case 0x1D032Cu: goto label_1d032c;
            case 0x1D0330u: goto label_1d0330;
            case 0x1D0334u: goto label_1d0334;
            case 0x1D0338u: goto label_1d0338;
            case 0x1D033Cu: goto label_1d033c;
            case 0x1D0340u: goto label_1d0340;
            case 0x1D0344u: goto label_1d0344;
            case 0x1D0348u: goto label_1d0348;
            case 0x1D034Cu: goto label_1d034c;
            case 0x1D0350u: goto label_1d0350;
            case 0x1D0354u: goto label_1d0354;
            case 0x1D0358u: goto label_1d0358;
            case 0x1D035Cu: goto label_1d035c;
            case 0x1D0360u: goto label_1d0360;
            case 0x1D0364u: goto label_1d0364;
            case 0x1D0368u: goto label_1d0368;
            case 0x1D036Cu: goto label_1d036c;
            case 0x1D0370u: goto label_1d0370;
            case 0x1D0374u: goto label_1d0374;
            case 0x1D0378u: goto label_1d0378;
            case 0x1D037Cu: goto label_1d037c;
            case 0x1D0380u: goto label_1d0380;
            case 0x1D0384u: goto label_1d0384;
            case 0x1D0388u: goto label_1d0388;
            case 0x1D038Cu: goto label_1d038c;
            case 0x1D0390u: goto label_1d0390;
            case 0x1D0394u: goto label_1d0394;
            case 0x1D0398u: goto label_1d0398;
            case 0x1D039Cu: goto label_1d039c;
            case 0x1D03A0u: goto label_1d03a0;
            case 0x1D03A4u: goto label_1d03a4;
            case 0x1D03A8u: goto label_1d03a8;
            case 0x1D03ACu: goto label_1d03ac;
            case 0x1D03B0u: goto label_1d03b0;
            case 0x1D03B4u: goto label_1d03b4;
            case 0x1D03B8u: goto label_1d03b8;
            case 0x1D03BCu: goto label_1d03bc;
            case 0x1D03C0u: goto label_1d03c0;
            case 0x1D03C4u: goto label_1d03c4;
            case 0x1D03C8u: goto label_1d03c8;
            case 0x1D03CCu: goto label_1d03cc;
            case 0x1D03D0u: goto label_1d03d0;
            case 0x1D03D4u: goto label_1d03d4;
            case 0x1D03D8u: goto label_1d03d8;
            case 0x1D03DCu: goto label_1d03dc;
            case 0x1D03E0u: goto label_1d03e0;
            case 0x1D03E4u: goto label_1d03e4;
            case 0x1D03E8u: goto label_1d03e8;
            case 0x1D03ECu: goto label_1d03ec;
            case 0x1D03F0u: goto label_1d03f0;
            case 0x1D03F4u: goto label_1d03f4;
            case 0x1D03F8u: goto label_1d03f8;
            case 0x1D03FCu: goto label_1d03fc;
            case 0x1D0400u: goto label_1d0400;
            case 0x1D0404u: goto label_1d0404;
            case 0x1D0408u: goto label_1d0408;
            case 0x1D040Cu: goto label_1d040c;
            case 0x1D0410u: goto label_1d0410;
            case 0x1D0414u: goto label_1d0414;
            case 0x1D0418u: goto label_1d0418;
            case 0x1D041Cu: goto label_1d041c;
            case 0x1D0420u: goto label_1d0420;
            case 0x1D0424u: goto label_1d0424;
            case 0x1D0428u: goto label_1d0428;
            case 0x1D042Cu: goto label_1d042c;
            case 0x1D0430u: goto label_1d0430;
            case 0x1D0434u: goto label_1d0434;
            case 0x1D0438u: goto label_1d0438;
            case 0x1D043Cu: goto label_1d043c;
            case 0x1D0440u: goto label_1d0440;
            case 0x1D0444u: goto label_1d0444;
            case 0x1D0448u: goto label_1d0448;
            case 0x1D044Cu: goto label_1d044c;
            case 0x1D0450u: goto label_1d0450;
            case 0x1D0454u: goto label_1d0454;
            case 0x1D0458u: goto label_1d0458;
            case 0x1D045Cu: goto label_1d045c;
            case 0x1D0460u: goto label_1d0460;
            case 0x1D0464u: goto label_1d0464;
            case 0x1D0468u: goto label_1d0468;
            case 0x1D046Cu: goto label_1d046c;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D0474u: goto label_1d0474;
            case 0x1D0478u: goto label_1d0478;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0480u: goto label_1d0480;
            case 0x1D0484u: goto label_1d0484;
            case 0x1D0488u: goto label_1d0488;
            case 0x1D048Cu: goto label_1d048c;
            case 0x1D0490u: goto label_1d0490;
            case 0x1D0494u: goto label_1d0494;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D049Cu: goto label_1d049c;
            case 0x1D04A0u: goto label_1d04a0;
            case 0x1D04A4u: goto label_1d04a4;
            case 0x1D04A8u: goto label_1d04a8;
            case 0x1D04ACu: goto label_1d04ac;
            case 0x1D04B0u: goto label_1d04b0;
            case 0x1D04B4u: goto label_1d04b4;
            case 0x1D04B8u: goto label_1d04b8;
            case 0x1D04BCu: goto label_1d04bc;
            case 0x1D04C0u: goto label_1d04c0;
            case 0x1D04C4u: goto label_1d04c4;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04CCu: goto label_1d04cc;
            case 0x1D04D0u: goto label_1d04d0;
            case 0x1D04D4u: goto label_1d04d4;
            case 0x1D04D8u: goto label_1d04d8;
            case 0x1D04DCu: goto label_1d04dc;
            case 0x1D04E0u: goto label_1d04e0;
            case 0x1D04E4u: goto label_1d04e4;
            case 0x1D04E8u: goto label_1d04e8;
            case 0x1D04ECu: goto label_1d04ec;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D04F4u: goto label_1d04f4;
            case 0x1D04F8u: goto label_1d04f8;
            case 0x1D04FCu: goto label_1d04fc;
            case 0x1D0500u: goto label_1d0500;
            case 0x1D0504u: goto label_1d0504;
            case 0x1D0508u: goto label_1d0508;
            case 0x1D050Cu: goto label_1d050c;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0518u: goto label_1d0518;
            case 0x1D051Cu: goto label_1d051c;
            case 0x1D0520u: goto label_1d0520;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0528u: goto label_1d0528;
            case 0x1D052Cu: goto label_1d052c;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0538u: goto label_1d0538;
            case 0x1D053Cu: goto label_1d053c;
            case 0x1D0540u: goto label_1d0540;
            case 0x1D0544u: goto label_1d0544;
            case 0x1D0548u: goto label_1d0548;
            case 0x1D054Cu: goto label_1d054c;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0554u: goto label_1d0554;
            case 0x1D0558u: goto label_1d0558;
            case 0x1D055Cu: goto label_1d055c;
            case 0x1D0560u: goto label_1d0560;
            case 0x1D0564u: goto label_1d0564;
            case 0x1D0568u: goto label_1d0568;
            case 0x1D056Cu: goto label_1d056c;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D0574u: goto label_1d0574;
            case 0x1D0578u: goto label_1d0578;
            case 0x1D057Cu: goto label_1d057c;
            case 0x1D0580u: goto label_1d0580;
            case 0x1D0584u: goto label_1d0584;
            case 0x1D0588u: goto label_1d0588;
            case 0x1D058Cu: goto label_1d058c;
            case 0x1D0590u: goto label_1d0590;
            case 0x1D0594u: goto label_1d0594;
            case 0x1D0598u: goto label_1d0598;
            case 0x1D059Cu: goto label_1d059c;
            case 0x1D05A0u: goto label_1d05a0;
            case 0x1D05A4u: goto label_1d05a4;
            case 0x1D05A8u: goto label_1d05a8;
            case 0x1D05ACu: goto label_1d05ac;
            case 0x1D05B0u: goto label_1d05b0;
            case 0x1D05B4u: goto label_1d05b4;
            case 0x1D05B8u: goto label_1d05b8;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05C4u: goto label_1d05c4;
            case 0x1D05C8u: goto label_1d05c8;
            case 0x1D05CCu: goto label_1d05cc;
            case 0x1D05D0u: goto label_1d05d0;
            case 0x1D05D4u: goto label_1d05d4;
            case 0x1D05D8u: goto label_1d05d8;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D05E0u: goto label_1d05e0;
            case 0x1D05E4u: goto label_1d05e4;
            case 0x1D05E8u: goto label_1d05e8;
            case 0x1D05ECu: goto label_1d05ec;
            case 0x1D05F0u: goto label_1d05f0;
            case 0x1D05F4u: goto label_1d05f4;
            case 0x1D05F8u: goto label_1d05f8;
            case 0x1D05FCu: goto label_1d05fc;
            case 0x1D0600u: goto label_1d0600;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0608u: goto label_1d0608;
            case 0x1D060Cu: goto label_1d060c;
            case 0x1D0610u: goto label_1d0610;
            case 0x1D0614u: goto label_1d0614;
            case 0x1D0618u: goto label_1d0618;
            case 0x1D061Cu: goto label_1d061c;
            case 0x1D0620u: goto label_1d0620;
            case 0x1D0624u: goto label_1d0624;
            case 0x1D0628u: goto label_1d0628;
            case 0x1D062Cu: goto label_1d062c;
            case 0x1D0630u: goto label_1d0630;
            case 0x1D0634u: goto label_1d0634;
            case 0x1D0638u: goto label_1d0638;
            case 0x1D063Cu: goto label_1d063c;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0644u: goto label_1d0644;
            case 0x1D0648u: goto label_1d0648;
            case 0x1D064Cu: goto label_1d064c;
            case 0x1D0650u: goto label_1d0650;
            case 0x1D0654u: goto label_1d0654;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D065Cu: goto label_1d065c;
            case 0x1D0660u: goto label_1d0660;
            case 0x1D0664u: goto label_1d0664;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0670u: goto label_1d0670;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D0678u: goto label_1d0678;
            case 0x1D067Cu: goto label_1d067c;
            case 0x1D0680u: goto label_1d0680;
            case 0x1D0684u: goto label_1d0684;
            case 0x1D0688u: goto label_1d0688;
            case 0x1D068Cu: goto label_1d068c;
            case 0x1D0690u: goto label_1d0690;
            case 0x1D0694u: goto label_1d0694;
            case 0x1D0698u: goto label_1d0698;
            case 0x1D069Cu: goto label_1d069c;
            case 0x1D06A0u: goto label_1d06a0;
            case 0x1D06A4u: goto label_1d06a4;
            case 0x1D06A8u: goto label_1d06a8;
            case 0x1D06ACu: goto label_1d06ac;
            case 0x1D06B0u: goto label_1d06b0;
            case 0x1D06B4u: goto label_1d06b4;
            case 0x1D06B8u: goto label_1d06b8;
            case 0x1D06BCu: goto label_1d06bc;
            case 0x1D06C0u: goto label_1d06c0;
            case 0x1D06C4u: goto label_1d06c4;
            case 0x1D06C8u: goto label_1d06c8;
            case 0x1D06CCu: goto label_1d06cc;
            case 0x1D06D0u: goto label_1d06d0;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D06D8u: goto label_1d06d8;
            case 0x1D06DCu: goto label_1d06dc;
            case 0x1D06E0u: goto label_1d06e0;
            case 0x1D06E4u: goto label_1d06e4;
            case 0x1D06E8u: goto label_1d06e8;
            case 0x1D06ECu: goto label_1d06ec;
            case 0x1D06F0u: goto label_1d06f0;
            case 0x1D06F4u: goto label_1d06f4;
            case 0x1D06F8u: goto label_1d06f8;
            case 0x1D06FCu: goto label_1d06fc;
            case 0x1D0700u: goto label_1d0700;
            case 0x1D0704u: goto label_1d0704;
            case 0x1D0708u: goto label_1d0708;
            case 0x1D070Cu: goto label_1d070c;
            case 0x1D0710u: goto label_1d0710;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D0718u: goto label_1d0718;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D0720u: goto label_1d0720;
            case 0x1D0724u: goto label_1d0724;
            case 0x1D0728u: goto label_1d0728;
            case 0x1D072Cu: goto label_1d072c;
            case 0x1D0730u: goto label_1d0730;
            case 0x1D0734u: goto label_1d0734;
            case 0x1D0738u: goto label_1d0738;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0744u: goto label_1d0744;
            case 0x1D0748u: goto label_1d0748;
            case 0x1D074Cu: goto label_1d074c;
            case 0x1D0750u: goto label_1d0750;
            case 0x1D0754u: goto label_1d0754;
            case 0x1D0758u: goto label_1d0758;
            case 0x1D075Cu: goto label_1d075c;
            case 0x1D0760u: goto label_1d0760;
            case 0x1D0764u: goto label_1d0764;
            case 0x1D0768u: goto label_1d0768;
            case 0x1D076Cu: goto label_1d076c;
            case 0x1D0770u: goto label_1d0770;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0778u: goto label_1d0778;
            case 0x1D077Cu: goto label_1d077c;
            case 0x1D0780u: goto label_1d0780;
            case 0x1D0784u: goto label_1d0784;
            case 0x1D0788u: goto label_1d0788;
            case 0x1D078Cu: goto label_1d078c;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D0794u: goto label_1d0794;
            case 0x1D0798u: goto label_1d0798;
            case 0x1D079Cu: goto label_1d079c;
            case 0x1D07A0u: goto label_1d07a0;
            case 0x1D07A4u: goto label_1d07a4;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07ACu: goto label_1d07ac;
            case 0x1D07B0u: goto label_1d07b0;
            case 0x1D07B4u: goto label_1d07b4;
            case 0x1D07B8u: goto label_1d07b8;
            case 0x1D07BCu: goto label_1d07bc;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07C4u: goto label_1d07c4;
            case 0x1D07C8u: goto label_1d07c8;
            case 0x1D07CCu: goto label_1d07cc;
            case 0x1D07D0u: goto label_1d07d0;
            case 0x1D07D4u: goto label_1d07d4;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07DCu: goto label_1d07dc;
            case 0x1D07E0u: goto label_1d07e0;
            case 0x1D07E4u: goto label_1d07e4;
            case 0x1D07E8u: goto label_1d07e8;
            case 0x1D07ECu: goto label_1d07ec;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D07F4u: goto label_1d07f4;
            case 0x1D07F8u: goto label_1d07f8;
            case 0x1D07FCu: goto label_1d07fc;
            case 0x1D0800u: goto label_1d0800;
            case 0x1D0804u: goto label_1d0804;
            case 0x1D0808u: goto label_1d0808;
            case 0x1D080Cu: goto label_1d080c;
            case 0x1D0810u: goto label_1d0810;
            case 0x1D0814u: goto label_1d0814;
            case 0x1D0818u: goto label_1d0818;
            case 0x1D081Cu: goto label_1d081c;
            case 0x1D0820u: goto label_1d0820;
            case 0x1D0824u: goto label_1d0824;
            case 0x1D0828u: goto label_1d0828;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0830u: goto label_1d0830;
            case 0x1D0834u: goto label_1d0834;
            case 0x1D0838u: goto label_1d0838;
            case 0x1D083Cu: goto label_1d083c;
            case 0x1D0840u: goto label_1d0840;
            case 0x1D0844u: goto label_1d0844;
            case 0x1D0848u: goto label_1d0848;
            case 0x1D084Cu: goto label_1d084c;
            case 0x1D0850u: goto label_1d0850;
            case 0x1D0854u: goto label_1d0854;
            case 0x1D0858u: goto label_1d0858;
            case 0x1D085Cu: goto label_1d085c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D0864u: goto label_1d0864;
            case 0x1D0868u: goto label_1d0868;
            case 0x1D086Cu: goto label_1d086c;
            case 0x1D0870u: goto label_1d0870;
            case 0x1D0874u: goto label_1d0874;
            case 0x1D0878u: goto label_1d0878;
            case 0x1D087Cu: goto label_1d087c;
            case 0x1D0880u: goto label_1d0880;
            case 0x1D0884u: goto label_1d0884;
            case 0x1D0888u: goto label_1d0888;
            case 0x1D088Cu: goto label_1d088c;
            case 0x1D0890u: goto label_1d0890;
            case 0x1D0894u: goto label_1d0894;
            case 0x1D0898u: goto label_1d0898;
            case 0x1D089Cu: goto label_1d089c;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08A4u: goto label_1d08a4;
            case 0x1D08A8u: goto label_1d08a8;
            case 0x1D08ACu: goto label_1d08ac;
            case 0x1D08B0u: goto label_1d08b0;
            case 0x1D08B4u: goto label_1d08b4;
            case 0x1D08B8u: goto label_1d08b8;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08C0u: goto label_1d08c0;
            case 0x1D08C4u: goto label_1d08c4;
            case 0x1D08C8u: goto label_1d08c8;
            case 0x1D08CCu: goto label_1d08cc;
            case 0x1D08D0u: goto label_1d08d0;
            case 0x1D08D4u: goto label_1d08d4;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08DCu: goto label_1d08dc;
            case 0x1D08E0u: goto label_1d08e0;
            case 0x1D08E4u: goto label_1d08e4;
            case 0x1D08E8u: goto label_1d08e8;
            case 0x1D08ECu: goto label_1d08ec;
            case 0x1D08F0u: goto label_1d08f0;
            case 0x1D08F4u: goto label_1d08f4;
            case 0x1D08F8u: goto label_1d08f8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0900u: goto label_1d0900;
            case 0x1D0904u: goto label_1d0904;
            case 0x1D0908u: goto label_1d0908;
            case 0x1D090Cu: goto label_1d090c;
            case 0x1D0910u: goto label_1d0910;
            case 0x1D0914u: goto label_1d0914;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D091Cu: goto label_1d091c;
            case 0x1D0920u: goto label_1d0920;
            case 0x1D0924u: goto label_1d0924;
            case 0x1D0928u: goto label_1d0928;
            case 0x1D092Cu: goto label_1d092c;
            case 0x1D0930u: goto label_1d0930;
            case 0x1D0934u: goto label_1d0934;
            case 0x1D0938u: goto label_1d0938;
            case 0x1D093Cu: goto label_1d093c;
            case 0x1D0940u: goto label_1d0940;
            case 0x1D0944u: goto label_1d0944;
            case 0x1D0948u: goto label_1d0948;
            case 0x1D094Cu: goto label_1d094c;
            case 0x1D0950u: goto label_1d0950;
            case 0x1D0954u: goto label_1d0954;
            case 0x1D0958u: goto label_1d0958;
            case 0x1D095Cu: goto label_1d095c;
            case 0x1D0960u: goto label_1d0960;
            case 0x1D0964u: goto label_1d0964;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D096Cu: goto label_1d096c;
            case 0x1D0970u: goto label_1d0970;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D0978u: goto label_1d0978;
            case 0x1D097Cu: goto label_1d097c;
            case 0x1D0980u: goto label_1d0980;
            case 0x1D0984u: goto label_1d0984;
            case 0x1D0988u: goto label_1d0988;
            case 0x1D098Cu: goto label_1d098c;
            case 0x1D0990u: goto label_1d0990;
            case 0x1D0994u: goto label_1d0994;
            case 0x1D0998u: goto label_1d0998;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09A4u: goto label_1d09a4;
            case 0x1D09A8u: goto label_1d09a8;
            case 0x1D09ACu: goto label_1d09ac;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09B4u: goto label_1d09b4;
            case 0x1D09B8u: goto label_1d09b8;
            case 0x1D09BCu: goto label_1d09bc;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09D0u: goto label_1d09d0;
            case 0x1D09D4u: goto label_1d09d4;
            case 0x1D09D8u: goto label_1d09d8;
            case 0x1D09DCu: goto label_1d09dc;
            case 0x1D09E0u: goto label_1d09e0;
            case 0x1D09E4u: goto label_1d09e4;
            case 0x1D09E8u: goto label_1d09e8;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D09F0u: goto label_1d09f0;
            case 0x1D09F4u: goto label_1d09f4;
            case 0x1D09F8u: goto label_1d09f8;
            case 0x1D09FCu: goto label_1d09fc;
            case 0x1D0A00u: goto label_1d0a00;
            case 0x1D0A04u: goto label_1d0a04;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A0Cu: goto label_1d0a0c;
            case 0x1D0A10u: goto label_1d0a10;
            case 0x1D0A14u: goto label_1d0a14;
            case 0x1D0A18u: goto label_1d0a18;
            case 0x1D0A1Cu: goto label_1d0a1c;
            case 0x1D0A20u: goto label_1d0a20;
            case 0x1D0A24u: goto label_1d0a24;
            case 0x1D0A28u: goto label_1d0a28;
            case 0x1D0A2Cu: goto label_1d0a2c;
            case 0x1D0A30u: goto label_1d0a30;
            case 0x1D0A34u: goto label_1d0a34;
            case 0x1D0A38u: goto label_1d0a38;
            case 0x1D0A3Cu: goto label_1d0a3c;
            case 0x1D0A40u: goto label_1d0a40;
            case 0x1D0A44u: goto label_1d0a44;
            case 0x1D0A48u: goto label_1d0a48;
            case 0x1D0A4Cu: goto label_1d0a4c;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0A54u: goto label_1d0a54;
            case 0x1D0A58u: goto label_1d0a58;
            case 0x1D0A5Cu: goto label_1d0a5c;
            case 0x1D0A60u: goto label_1d0a60;
            case 0x1D0A64u: goto label_1d0a64;
            case 0x1D0A68u: goto label_1d0a68;
            case 0x1D0A6Cu: goto label_1d0a6c;
            case 0x1D0A70u: goto label_1d0a70;
            case 0x1D0A74u: goto label_1d0a74;
            case 0x1D0A78u: goto label_1d0a78;
            case 0x1D0A7Cu: goto label_1d0a7c;
            case 0x1D0A80u: goto label_1d0a80;
            case 0x1D0A84u: goto label_1d0a84;
            case 0x1D0A88u: goto label_1d0a88;
            case 0x1D0A8Cu: goto label_1d0a8c;
            case 0x1D0A90u: goto label_1d0a90;
            case 0x1D0A94u: goto label_1d0a94;
            case 0x1D0A98u: goto label_1d0a98;
            case 0x1D0A9Cu: goto label_1d0a9c;
            case 0x1D0AA0u: goto label_1d0aa0;
            case 0x1D0AA4u: goto label_1d0aa4;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AACu: goto label_1d0aac;
            case 0x1D0AB0u: goto label_1d0ab0;
            case 0x1D0AB4u: goto label_1d0ab4;
            case 0x1D0AB8u: goto label_1d0ab8;
            case 0x1D0ABCu: goto label_1d0abc;
            case 0x1D0AC0u: goto label_1d0ac0;
            case 0x1D0AC4u: goto label_1d0ac4;
            case 0x1D0AC8u: goto label_1d0ac8;
            case 0x1D0ACCu: goto label_1d0acc;
            case 0x1D0AD0u: goto label_1d0ad0;
            case 0x1D0AD4u: goto label_1d0ad4;
            case 0x1D0AD8u: goto label_1d0ad8;
            case 0x1D0ADCu: goto label_1d0adc;
            case 0x1D0AE0u: goto label_1d0ae0;
            case 0x1D0AE4u: goto label_1d0ae4;
            case 0x1D0AE8u: goto label_1d0ae8;
            case 0x1D0AECu: goto label_1d0aec;
            case 0x1D0AF0u: goto label_1d0af0;
            case 0x1D0AF4u: goto label_1d0af4;
            case 0x1D0AF8u: goto label_1d0af8;
            case 0x1D0AFCu: goto label_1d0afc;
            case 0x1D0B00u: goto label_1d0b00;
            case 0x1D0B04u: goto label_1d0b04;
            case 0x1D0B08u: goto label_1d0b08;
            case 0x1D0B0Cu: goto label_1d0b0c;
            case 0x1D0B10u: goto label_1d0b10;
            case 0x1D0B14u: goto label_1d0b14;
            case 0x1D0B18u: goto label_1d0b18;
            case 0x1D0B1Cu: goto label_1d0b1c;
            case 0x1D0B20u: goto label_1d0b20;
            case 0x1D0B24u: goto label_1d0b24;
            case 0x1D0B28u: goto label_1d0b28;
            case 0x1D0B2Cu: goto label_1d0b2c;
            case 0x1D0B30u: goto label_1d0b30;
            case 0x1D0B34u: goto label_1d0b34;
            case 0x1D0B38u: goto label_1d0b38;
            case 0x1D0B3Cu: goto label_1d0b3c;
            case 0x1D0B40u: goto label_1d0b40;
            case 0x1D0B44u: goto label_1d0b44;
            case 0x1D0B48u: goto label_1d0b48;
            case 0x1D0B4Cu: goto label_1d0b4c;
            case 0x1D0B50u: goto label_1d0b50;
            case 0x1D0B54u: goto label_1d0b54;
            case 0x1D0B58u: goto label_1d0b58;
            case 0x1D0B5Cu: goto label_1d0b5c;
            case 0x1D0B60u: goto label_1d0b60;
            case 0x1D0B64u: goto label_1d0b64;
            case 0x1D0B68u: goto label_1d0b68;
            case 0x1D0B6Cu: goto label_1d0b6c;
            case 0x1D0B70u: goto label_1d0b70;
            case 0x1D0B74u: goto label_1d0b74;
            case 0x1D0B78u: goto label_1d0b78;
            case 0x1D0B7Cu: goto label_1d0b7c;
            case 0x1D0B80u: goto label_1d0b80;
            case 0x1D0B84u: goto label_1d0b84;
            case 0x1D0B88u: goto label_1d0b88;
            case 0x1D0B8Cu: goto label_1d0b8c;
            case 0x1D0B90u: goto label_1d0b90;
            case 0x1D0B94u: goto label_1d0b94;
            case 0x1D0B98u: goto label_1d0b98;
            case 0x1D0B9Cu: goto label_1d0b9c;
            case 0x1D0BA0u: goto label_1d0ba0;
            case 0x1D0BA4u: goto label_1d0ba4;
            case 0x1D0BA8u: goto label_1d0ba8;
            case 0x1D0BACu: goto label_1d0bac;
            case 0x1D0BB0u: goto label_1d0bb0;
            case 0x1D0BB4u: goto label_1d0bb4;
            case 0x1D0BB8u: goto label_1d0bb8;
            case 0x1D0BBCu: goto label_1d0bbc;
            case 0x1D0BC0u: goto label_1d0bc0;
            case 0x1D0BC4u: goto label_1d0bc4;
            case 0x1D0BC8u: goto label_1d0bc8;
            case 0x1D0BCCu: goto label_1d0bcc;
            case 0x1D0BD0u: goto label_1d0bd0;
            case 0x1D0BD4u: goto label_1d0bd4;
            case 0x1D0BD8u: goto label_1d0bd8;
            case 0x1D0BDCu: goto label_1d0bdc;
            case 0x1D0BE0u: goto label_1d0be0;
            case 0x1D0BE4u: goto label_1d0be4;
            case 0x1D0BE8u: goto label_1d0be8;
            case 0x1D0BECu: goto label_1d0bec;
            case 0x1D0BF0u: goto label_1d0bf0;
            case 0x1D0BF4u: goto label_1d0bf4;
            case 0x1D0BF8u: goto label_1d0bf8;
            case 0x1D0BFCu: goto label_1d0bfc;
            case 0x1D0C00u: goto label_1d0c00;
            case 0x1D0C04u: goto label_1d0c04;
            case 0x1D0C08u: goto label_1d0c08;
            case 0x1D0C0Cu: goto label_1d0c0c;
            case 0x1D0C10u: goto label_1d0c10;
            case 0x1D0C14u: goto label_1d0c14;
            case 0x1D0C18u: goto label_1d0c18;
            case 0x1D0C1Cu: goto label_1d0c1c;
            case 0x1D0C20u: goto label_1d0c20;
            case 0x1D0C24u: goto label_1d0c24;
            case 0x1D0C28u: goto label_1d0c28;
            case 0x1D0C2Cu: goto label_1d0c2c;
            case 0x1D0C30u: goto label_1d0c30;
            case 0x1D0C34u: goto label_1d0c34;
            case 0x1D0C38u: goto label_1d0c38;
            case 0x1D0C3Cu: goto label_1d0c3c;
            case 0x1D0C40u: goto label_1d0c40;
            case 0x1D0C44u: goto label_1d0c44;
            case 0x1D0C48u: goto label_1d0c48;
            case 0x1D0C4Cu: goto label_1d0c4c;
            case 0x1D0C50u: goto label_1d0c50;
            case 0x1D0C54u: goto label_1d0c54;
            case 0x1D0C58u: goto label_1d0c58;
            case 0x1D0C5Cu: goto label_1d0c5c;
            case 0x1D0C60u: goto label_1d0c60;
            case 0x1D0C64u: goto label_1d0c64;
            case 0x1D0C68u: goto label_1d0c68;
            case 0x1D0C6Cu: goto label_1d0c6c;
            case 0x1D0C70u: goto label_1d0c70;
            case 0x1D0C74u: goto label_1d0c74;
            case 0x1D0C78u: goto label_1d0c78;
            case 0x1D0C7Cu: goto label_1d0c7c;
            case 0x1D0C80u: goto label_1d0c80;
            case 0x1D0C84u: goto label_1d0c84;
            case 0x1D0C88u: goto label_1d0c88;
            case 0x1D0C8Cu: goto label_1d0c8c;
            case 0x1D0C90u: goto label_1d0c90;
            case 0x1D0C94u: goto label_1d0c94;
            case 0x1D0C98u: goto label_1d0c98;
            case 0x1D0C9Cu: goto label_1d0c9c;
            case 0x1D0CA0u: goto label_1d0ca0;
            case 0x1D0CA4u: goto label_1d0ca4;
            case 0x1D0CA8u: goto label_1d0ca8;
            case 0x1D0CACu: goto label_1d0cac;
            case 0x1D0CB0u: goto label_1d0cb0;
            case 0x1D0CB4u: goto label_1d0cb4;
            case 0x1D0CB8u: goto label_1d0cb8;
            case 0x1D0CBCu: goto label_1d0cbc;
            case 0x1D0CC0u: goto label_1d0cc0;
            case 0x1D0CC4u: goto label_1d0cc4;
            case 0x1D0CC8u: goto label_1d0cc8;
            case 0x1D0CCCu: goto label_1d0ccc;
            case 0x1D0CD0u: goto label_1d0cd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BC4u; }
            if (ctx->pc != 0x1D0BC4u) { return; }
        }
    }
    ctx->pc = 0x1D0BC4u;
label_1d0bc4:
    // 0x1d0bc4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1d0bc8:
    if (ctx->pc == 0x1D0BC8u) {
        ctx->pc = 0x1D0BCCu;
        goto label_1d0bcc;
    }
    ctx->pc = 0x1D0BC4u;
    {
        const bool branch_taken_0x1d0bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0bc4) {
            ctx->pc = 0x1D0CC0u;
            goto label_1d0cc0;
        }
    }
    ctx->pc = 0x1D0BCCu;
label_1d0bcc:
    // 0x1d0bcc: 0x0  nop
    ctx->pc = 0x1d0bccu;
    // NOP
label_1d0bd0:
    // 0x1d0bd0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d0bd4:
    // 0x1d0bd4: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1d0bd8:
    if (ctx->pc == 0x1D0BD8u) {
        ctx->pc = 0x1D0BDCu;
        goto label_1d0bdc;
    }
    ctx->pc = 0x1D0BD4u;
    {
        const bool branch_taken_0x1d0bd4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d0bd4) {
            ctx->pc = 0x1D0CA0u;
            goto label_1d0ca0;
        }
    }
    ctx->pc = 0x1D0BDCu;
label_1d0bdc:
    // 0x1d0bdc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d0bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0be0:
    // 0x1d0be0: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1d0be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1d0be4:
    // 0x1d0be4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d0be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0be8:
    // 0x1d0be8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d0be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d0bec:
    // 0x1d0bec: 0xc05d080  jal         func_174200
label_1d0bf0:
    if (ctx->pc == 0x1D0BF0u) {
        ctx->pc = 0x1D0BF0u;
            // 0x1d0bf0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D0BF4u;
        goto label_1d0bf4;
    }
    ctx->pc = 0x1D0BECu;
    SET_GPR_U32(ctx, 31, 0x1D0BF4u);
    ctx->pc = 0x1D0BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0BECu;
            // 0x1d0bf0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BF4u; }
        if (ctx->pc != 0x1D0BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BF4u; }
        if (ctx->pc != 0x1D0BF4u) { return; }
    }
    ctx->pc = 0x1D0BF4u;
label_1d0bf4:
    // 0x1d0bf4: 0xc050bb4  jal         func_142ED0
label_1d0bf8:
    if (ctx->pc == 0x1D0BF8u) {
        ctx->pc = 0x1D0BFCu;
        goto label_1d0bfc;
    }
    ctx->pc = 0x1D0BF4u;
    SET_GPR_U32(ctx, 31, 0x1D0BFCu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BFCu; }
        if (ctx->pc != 0x1D0BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BFCu; }
        if (ctx->pc != 0x1D0BFCu) { return; }
    }
    ctx->pc = 0x1D0BFCu;
label_1d0bfc:
    // 0x1d0bfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0bfcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d0c00:
    // 0x1d0c00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d0c04:
    if (ctx->pc == 0x1D0C04u) {
        ctx->pc = 0x1D0C08u;
        goto label_1d0c08;
    }
    ctx->pc = 0x1D0C00u;
    {
        const bool branch_taken_0x1d0c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c00) {
            ctx->pc = 0x1D0C20u;
            goto label_1d0c20;
        }
    }
    ctx->pc = 0x1D0C08u;
label_1d0c08:
    // 0x1d0c08: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d0c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0c0c:
    // 0x1d0c0c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1d0c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1d0c10:
    // 0x1d0c10: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d0c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0c14:
    // 0x1d0c14: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d0c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d0c18:
    // 0x1d0c18: 0xc05d080  jal         func_174200
label_1d0c1c:
    if (ctx->pc == 0x1D0C1Cu) {
        ctx->pc = 0x1D0C1Cu;
            // 0x1d0c1c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D0C20u;
        goto label_1d0c20;
    }
    ctx->pc = 0x1D0C18u;
    SET_GPR_U32(ctx, 31, 0x1D0C20u);
    ctx->pc = 0x1D0C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C18u;
            // 0x1d0c1c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C20u; }
        if (ctx->pc != 0x1D0C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C20u; }
        if (ctx->pc != 0x1D0C20u) { return; }
    }
    ctx->pc = 0x1D0C20u;
label_1d0c20:
    // 0x1d0c20: 0xc050bb4  jal         func_142ED0
label_1d0c24:
    if (ctx->pc == 0x1D0C24u) {
        ctx->pc = 0x1D0C28u;
        goto label_1d0c28;
    }
    ctx->pc = 0x1D0C20u;
    SET_GPR_U32(ctx, 31, 0x1D0C28u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C28u; }
        if (ctx->pc != 0x1D0C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C28u; }
        if (ctx->pc != 0x1D0C28u) { return; }
    }
    ctx->pc = 0x1D0C28u;
label_1d0c28:
    // 0x1d0c28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0c28u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d0c2c:
    // 0x1d0c2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d0c30:
    if (ctx->pc == 0x1D0C30u) {
        ctx->pc = 0x1D0C34u;
        goto label_1d0c34;
    }
    ctx->pc = 0x1D0C2Cu;
    {
        const bool branch_taken_0x1d0c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c2c) {
            ctx->pc = 0x1D0C50u;
            goto label_1d0c50;
        }
    }
    ctx->pc = 0x1D0C34u;
label_1d0c34:
    // 0x1d0c34: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d0c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0c38:
    // 0x1d0c38: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1d0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1d0c3c:
    // 0x1d0c3c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d0c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0c40:
    // 0x1d0c40: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d0c40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d0c44:
    // 0x1d0c44: 0xc05d080  jal         func_174200
label_1d0c48:
    if (ctx->pc == 0x1D0C48u) {
        ctx->pc = 0x1D0C48u;
            // 0x1d0c48: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D0C4Cu;
        goto label_1d0c4c;
    }
    ctx->pc = 0x1D0C44u;
    SET_GPR_U32(ctx, 31, 0x1D0C4Cu);
    ctx->pc = 0x1D0C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C44u;
            // 0x1d0c48: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C4Cu; }
        if (ctx->pc != 0x1D0C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C4Cu; }
        if (ctx->pc != 0x1D0C4Cu) { return; }
    }
    ctx->pc = 0x1D0C4Cu;
label_1d0c4c:
    // 0x1d0c4c: 0x0  nop
    ctx->pc = 0x1d0c4cu;
    // NOP
label_1d0c50:
    // 0x1d0c50: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1d0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1d0c54:
    // 0x1d0c54: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d0c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0c58:
    // 0x1d0c58: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1d0c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d0c5c:
    // 0x1d0c5c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d0c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0c60:
    // 0x1d0c60: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d0c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d0c64:
    // 0x1d0c64: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d0c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d0c68:
    // 0x1d0c68: 0x0  nop
    ctx->pc = 0x1d0c68u;
    // NOP
label_1d0c6c:
    // 0x1d0c6c: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1d0c6cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d0c70:
    // 0x1d0c70: 0xc053740  jal         func_14DD00
label_1d0c74:
    if (ctx->pc == 0x1D0C74u) {
        ctx->pc = 0x1D0C74u;
            // 0x1d0c74: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1D0C78u;
        goto label_1d0c78;
    }
    ctx->pc = 0x1D0C70u;
    SET_GPR_U32(ctx, 31, 0x1D0C78u);
    ctx->pc = 0x1D0C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C70u;
            // 0x1d0c74: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C78u; }
        if (ctx->pc != 0x1D0C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C78u; }
        if (ctx->pc != 0x1D0C78u) { return; }
    }
    ctx->pc = 0x1D0C78u;
label_1d0c78:
    // 0x1d0c78: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1d0c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d0c7c:
    // 0x1d0c7c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1d0c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d0c80:
    // 0x1d0c80: 0xc07b0fc  jal         func_1EC3F0
label_1d0c84:
    if (ctx->pc == 0x1D0C84u) {
        ctx->pc = 0x1D0C84u;
            // 0x1d0c84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D0C88u;
        goto label_1d0c88;
    }
    ctx->pc = 0x1D0C80u;
    SET_GPR_U32(ctx, 31, 0x1D0C88u);
    ctx->pc = 0x1D0C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C80u;
            // 0x1d0c84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C88u; }
        if (ctx->pc != 0x1D0C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C88u; }
        if (ctx->pc != 0x1D0C88u) { return; }
    }
    ctx->pc = 0x1D0C88u;
label_1d0c88:
    // 0x1d0c88: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1d0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1d0c8c:
    // 0x1d0c8c: 0x40f809  jalr        $v0
label_1d0c90:
    if (ctx->pc == 0x1D0C90u) {
        ctx->pc = 0x1D0C90u;
            // 0x1d0c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C94u;
        goto label_1d0c94;
    }
    ctx->pc = 0x1D0C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0C94u);
        ctx->pc = 0x1D0C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C8Cu;
            // 0x1d0c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFA70u: goto label_1cfa70;
            case 0x1CFA74u: goto label_1cfa74;
            case 0x1CFA78u: goto label_1cfa78;
            case 0x1CFA7Cu: goto label_1cfa7c;
            case 0x1CFA80u: goto label_1cfa80;
            case 0x1CFA84u: goto label_1cfa84;
            case 0x1CFA88u: goto label_1cfa88;
            case 0x1CFA8Cu: goto label_1cfa8c;
            case 0x1CFA90u: goto label_1cfa90;
            case 0x1CFA94u: goto label_1cfa94;
            case 0x1CFA98u: goto label_1cfa98;
            case 0x1CFA9Cu: goto label_1cfa9c;
            case 0x1CFAA0u: goto label_1cfaa0;
            case 0x1CFAA4u: goto label_1cfaa4;
            case 0x1CFAA8u: goto label_1cfaa8;
            case 0x1CFAACu: goto label_1cfaac;
            case 0x1CFAB0u: goto label_1cfab0;
            case 0x1CFAB4u: goto label_1cfab4;
            case 0x1CFAB8u: goto label_1cfab8;
            case 0x1CFABCu: goto label_1cfabc;
            case 0x1CFAC0u: goto label_1cfac0;
            case 0x1CFAC4u: goto label_1cfac4;
            case 0x1CFAC8u: goto label_1cfac8;
            case 0x1CFACCu: goto label_1cfacc;
            case 0x1CFAD0u: goto label_1cfad0;
            case 0x1CFAD4u: goto label_1cfad4;
            case 0x1CFAD8u: goto label_1cfad8;
            case 0x1CFADCu: goto label_1cfadc;
            case 0x1CFAE0u: goto label_1cfae0;
            case 0x1CFAE4u: goto label_1cfae4;
            case 0x1CFAE8u: goto label_1cfae8;
            case 0x1CFAECu: goto label_1cfaec;
            case 0x1CFAF0u: goto label_1cfaf0;
            case 0x1CFAF4u: goto label_1cfaf4;
            case 0x1CFAF8u: goto label_1cfaf8;
            case 0x1CFAFCu: goto label_1cfafc;
            case 0x1CFB00u: goto label_1cfb00;
            case 0x1CFB04u: goto label_1cfb04;
            case 0x1CFB08u: goto label_1cfb08;
            case 0x1CFB0Cu: goto label_1cfb0c;
            case 0x1CFB10u: goto label_1cfb10;
            case 0x1CFB14u: goto label_1cfb14;
            case 0x1CFB18u: goto label_1cfb18;
            case 0x1CFB1Cu: goto label_1cfb1c;
            case 0x1CFB20u: goto label_1cfb20;
            case 0x1CFB24u: goto label_1cfb24;
            case 0x1CFB28u: goto label_1cfb28;
            case 0x1CFB2Cu: goto label_1cfb2c;
            case 0x1CFB30u: goto label_1cfb30;
            case 0x1CFB34u: goto label_1cfb34;
            case 0x1CFB38u: goto label_1cfb38;
            case 0x1CFB3Cu: goto label_1cfb3c;
            case 0x1CFB40u: goto label_1cfb40;
            case 0x1CFB44u: goto label_1cfb44;
            case 0x1CFB48u: goto label_1cfb48;
            case 0x1CFB4Cu: goto label_1cfb4c;
            case 0x1CFB50u: goto label_1cfb50;
            case 0x1CFB54u: goto label_1cfb54;
            case 0x1CFB58u: goto label_1cfb58;
            case 0x1CFB5Cu: goto label_1cfb5c;
            case 0x1CFB60u: goto label_1cfb60;
            case 0x1CFB64u: goto label_1cfb64;
            case 0x1CFB68u: goto label_1cfb68;
            case 0x1CFB6Cu: goto label_1cfb6c;
            case 0x1CFB70u: goto label_1cfb70;
            case 0x1CFB74u: goto label_1cfb74;
            case 0x1CFB78u: goto label_1cfb78;
            case 0x1CFB7Cu: goto label_1cfb7c;
            case 0x1CFB80u: goto label_1cfb80;
            case 0x1CFB84u: goto label_1cfb84;
            case 0x1CFB88u: goto label_1cfb88;
            case 0x1CFB8Cu: goto label_1cfb8c;
            case 0x1CFB90u: goto label_1cfb90;
            case 0x1CFB94u: goto label_1cfb94;
            case 0x1CFB98u: goto label_1cfb98;
            case 0x1CFB9Cu: goto label_1cfb9c;
            case 0x1CFBA0u: goto label_1cfba0;
            case 0x1CFBA4u: goto label_1cfba4;
            case 0x1CFBA8u: goto label_1cfba8;
            case 0x1CFBACu: goto label_1cfbac;
            case 0x1CFBB0u: goto label_1cfbb0;
            case 0x1CFBB4u: goto label_1cfbb4;
            case 0x1CFBB8u: goto label_1cfbb8;
            case 0x1CFBBCu: goto label_1cfbbc;
            case 0x1CFBC0u: goto label_1cfbc0;
            case 0x1CFBC4u: goto label_1cfbc4;
            case 0x1CFBC8u: goto label_1cfbc8;
            case 0x1CFBCCu: goto label_1cfbcc;
            case 0x1CFBD0u: goto label_1cfbd0;
            case 0x1CFBD4u: goto label_1cfbd4;
            case 0x1CFBD8u: goto label_1cfbd8;
            case 0x1CFBDCu: goto label_1cfbdc;
            case 0x1CFBE0u: goto label_1cfbe0;
            case 0x1CFBE4u: goto label_1cfbe4;
            case 0x1CFBE8u: goto label_1cfbe8;
            case 0x1CFBECu: goto label_1cfbec;
            case 0x1CFBF0u: goto label_1cfbf0;
            case 0x1CFBF4u: goto label_1cfbf4;
            case 0x1CFBF8u: goto label_1cfbf8;
            case 0x1CFBFCu: goto label_1cfbfc;
            case 0x1CFC00u: goto label_1cfc00;
            case 0x1CFC04u: goto label_1cfc04;
            case 0x1CFC08u: goto label_1cfc08;
            case 0x1CFC0Cu: goto label_1cfc0c;
            case 0x1CFC10u: goto label_1cfc10;
            case 0x1CFC14u: goto label_1cfc14;
            case 0x1CFC18u: goto label_1cfc18;
            case 0x1CFC1Cu: goto label_1cfc1c;
            case 0x1CFC20u: goto label_1cfc20;
            case 0x1CFC24u: goto label_1cfc24;
            case 0x1CFC28u: goto label_1cfc28;
            case 0x1CFC2Cu: goto label_1cfc2c;
            case 0x1CFC30u: goto label_1cfc30;
            case 0x1CFC34u: goto label_1cfc34;
            case 0x1CFC38u: goto label_1cfc38;
            case 0x1CFC3Cu: goto label_1cfc3c;
            case 0x1CFC40u: goto label_1cfc40;
            case 0x1CFC44u: goto label_1cfc44;
            case 0x1CFC48u: goto label_1cfc48;
            case 0x1CFC4Cu: goto label_1cfc4c;
            case 0x1CFC50u: goto label_1cfc50;
            case 0x1CFC54u: goto label_1cfc54;
            case 0x1CFC58u: goto label_1cfc58;
            case 0x1CFC5Cu: goto label_1cfc5c;
            case 0x1CFC60u: goto label_1cfc60;
            case 0x1CFC64u: goto label_1cfc64;
            case 0x1CFC68u: goto label_1cfc68;
            case 0x1CFC6Cu: goto label_1cfc6c;
            case 0x1CFC70u: goto label_1cfc70;
            case 0x1CFC74u: goto label_1cfc74;
            case 0x1CFC78u: goto label_1cfc78;
            case 0x1CFC7Cu: goto label_1cfc7c;
            case 0x1CFC80u: goto label_1cfc80;
            case 0x1CFC84u: goto label_1cfc84;
            case 0x1CFC88u: goto label_1cfc88;
            case 0x1CFC8Cu: goto label_1cfc8c;
            case 0x1CFC90u: goto label_1cfc90;
            case 0x1CFC94u: goto label_1cfc94;
            case 0x1CFC98u: goto label_1cfc98;
            case 0x1CFC9Cu: goto label_1cfc9c;
            case 0x1CFCA0u: goto label_1cfca0;
            case 0x1CFCA4u: goto label_1cfca4;
            case 0x1CFCA8u: goto label_1cfca8;
            case 0x1CFCACu: goto label_1cfcac;
            case 0x1CFCB0u: goto label_1cfcb0;
            case 0x1CFCB4u: goto label_1cfcb4;
            case 0x1CFCB8u: goto label_1cfcb8;
            case 0x1CFCBCu: goto label_1cfcbc;
            case 0x1CFCC0u: goto label_1cfcc0;
            case 0x1CFCC4u: goto label_1cfcc4;
            case 0x1CFCC8u: goto label_1cfcc8;
            case 0x1CFCCCu: goto label_1cfccc;
            case 0x1CFCD0u: goto label_1cfcd0;
            case 0x1CFCD4u: goto label_1cfcd4;
            case 0x1CFCD8u: goto label_1cfcd8;
            case 0x1CFCDCu: goto label_1cfcdc;
            case 0x1CFCE0u: goto label_1cfce0;
            case 0x1CFCE4u: goto label_1cfce4;
            case 0x1CFCE8u: goto label_1cfce8;
            case 0x1CFCECu: goto label_1cfcec;
            case 0x1CFCF0u: goto label_1cfcf0;
            case 0x1CFCF4u: goto label_1cfcf4;
            case 0x1CFCF8u: goto label_1cfcf8;
            case 0x1CFCFCu: goto label_1cfcfc;
            case 0x1CFD00u: goto label_1cfd00;
            case 0x1CFD04u: goto label_1cfd04;
            case 0x1CFD08u: goto label_1cfd08;
            case 0x1CFD0Cu: goto label_1cfd0c;
            case 0x1CFD10u: goto label_1cfd10;
            case 0x1CFD14u: goto label_1cfd14;
            case 0x1CFD18u: goto label_1cfd18;
            case 0x1CFD1Cu: goto label_1cfd1c;
            case 0x1CFD20u: goto label_1cfd20;
            case 0x1CFD24u: goto label_1cfd24;
            case 0x1CFD28u: goto label_1cfd28;
            case 0x1CFD2Cu: goto label_1cfd2c;
            case 0x1CFD30u: goto label_1cfd30;
            case 0x1CFD34u: goto label_1cfd34;
            case 0x1CFD38u: goto label_1cfd38;
            case 0x1CFD3Cu: goto label_1cfd3c;
            case 0x1CFD40u: goto label_1cfd40;
            case 0x1CFD44u: goto label_1cfd44;
            case 0x1CFD48u: goto label_1cfd48;
            case 0x1CFD4Cu: goto label_1cfd4c;
            case 0x1CFD50u: goto label_1cfd50;
            case 0x1CFD54u: goto label_1cfd54;
            case 0x1CFD58u: goto label_1cfd58;
            case 0x1CFD5Cu: goto label_1cfd5c;
            case 0x1CFD60u: goto label_1cfd60;
            case 0x1CFD64u: goto label_1cfd64;
            case 0x1CFD68u: goto label_1cfd68;
            case 0x1CFD6Cu: goto label_1cfd6c;
            case 0x1CFD70u: goto label_1cfd70;
            case 0x1CFD74u: goto label_1cfd74;
            case 0x1CFD78u: goto label_1cfd78;
            case 0x1CFD7Cu: goto label_1cfd7c;
            case 0x1CFD80u: goto label_1cfd80;
            case 0x1CFD84u: goto label_1cfd84;
            case 0x1CFD88u: goto label_1cfd88;
            case 0x1CFD8Cu: goto label_1cfd8c;
            case 0x1CFD90u: goto label_1cfd90;
            case 0x1CFD94u: goto label_1cfd94;
            case 0x1CFD98u: goto label_1cfd98;
            case 0x1CFD9Cu: goto label_1cfd9c;
            case 0x1CFDA0u: goto label_1cfda0;
            case 0x1CFDA4u: goto label_1cfda4;
            case 0x1CFDA8u: goto label_1cfda8;
            case 0x1CFDACu: goto label_1cfdac;
            case 0x1CFDB0u: goto label_1cfdb0;
            case 0x1CFDB4u: goto label_1cfdb4;
            case 0x1CFDB8u: goto label_1cfdb8;
            case 0x1CFDBCu: goto label_1cfdbc;
            case 0x1CFDC0u: goto label_1cfdc0;
            case 0x1CFDC4u: goto label_1cfdc4;
            case 0x1CFDC8u: goto label_1cfdc8;
            case 0x1CFDCCu: goto label_1cfdcc;
            case 0x1CFDD0u: goto label_1cfdd0;
            case 0x1CFDD4u: goto label_1cfdd4;
            case 0x1CFDD8u: goto label_1cfdd8;
            case 0x1CFDDCu: goto label_1cfddc;
            case 0x1CFDE0u: goto label_1cfde0;
            case 0x1CFDE4u: goto label_1cfde4;
            case 0x1CFDE8u: goto label_1cfde8;
            case 0x1CFDECu: goto label_1cfdec;
            case 0x1CFDF0u: goto label_1cfdf0;
            case 0x1CFDF4u: goto label_1cfdf4;
            case 0x1CFDF8u: goto label_1cfdf8;
            case 0x1CFDFCu: goto label_1cfdfc;
            case 0x1CFE00u: goto label_1cfe00;
            case 0x1CFE04u: goto label_1cfe04;
            case 0x1CFE08u: goto label_1cfe08;
            case 0x1CFE0Cu: goto label_1cfe0c;
            case 0x1CFE10u: goto label_1cfe10;
            case 0x1CFE14u: goto label_1cfe14;
            case 0x1CFE18u: goto label_1cfe18;
            case 0x1CFE1Cu: goto label_1cfe1c;
            case 0x1CFE20u: goto label_1cfe20;
            case 0x1CFE24u: goto label_1cfe24;
            case 0x1CFE28u: goto label_1cfe28;
            case 0x1CFE2Cu: goto label_1cfe2c;
            case 0x1CFE30u: goto label_1cfe30;
            case 0x1CFE34u: goto label_1cfe34;
            case 0x1CFE38u: goto label_1cfe38;
            case 0x1CFE3Cu: goto label_1cfe3c;
            case 0x1CFE40u: goto label_1cfe40;
            case 0x1CFE44u: goto label_1cfe44;
            case 0x1CFE48u: goto label_1cfe48;
            case 0x1CFE4Cu: goto label_1cfe4c;
            case 0x1CFE50u: goto label_1cfe50;
            case 0x1CFE54u: goto label_1cfe54;
            case 0x1CFE58u: goto label_1cfe58;
            case 0x1CFE5Cu: goto label_1cfe5c;
            case 0x1CFE60u: goto label_1cfe60;
            case 0x1CFE64u: goto label_1cfe64;
            case 0x1CFE68u: goto label_1cfe68;
            case 0x1CFE6Cu: goto label_1cfe6c;
            case 0x1CFE70u: goto label_1cfe70;
            case 0x1CFE74u: goto label_1cfe74;
            case 0x1CFE78u: goto label_1cfe78;
            case 0x1CFE7Cu: goto label_1cfe7c;
            case 0x1CFE80u: goto label_1cfe80;
            case 0x1CFE84u: goto label_1cfe84;
            case 0x1CFE88u: goto label_1cfe88;
            case 0x1CFE8Cu: goto label_1cfe8c;
            case 0x1CFE90u: goto label_1cfe90;
            case 0x1CFE94u: goto label_1cfe94;
            case 0x1CFE98u: goto label_1cfe98;
            case 0x1CFE9Cu: goto label_1cfe9c;
            case 0x1CFEA0u: goto label_1cfea0;
            case 0x1CFEA4u: goto label_1cfea4;
            case 0x1CFEA8u: goto label_1cfea8;
            case 0x1CFEACu: goto label_1cfeac;
            case 0x1CFEB0u: goto label_1cfeb0;
            case 0x1CFEB4u: goto label_1cfeb4;
            case 0x1CFEB8u: goto label_1cfeb8;
            case 0x1CFEBCu: goto label_1cfebc;
            case 0x1CFEC0u: goto label_1cfec0;
            case 0x1CFEC4u: goto label_1cfec4;
            case 0x1CFEC8u: goto label_1cfec8;
            case 0x1CFECCu: goto label_1cfecc;
            case 0x1CFED0u: goto label_1cfed0;
            case 0x1CFED4u: goto label_1cfed4;
            case 0x1CFED8u: goto label_1cfed8;
            case 0x1CFEDCu: goto label_1cfedc;
            case 0x1CFEE0u: goto label_1cfee0;
            case 0x1CFEE4u: goto label_1cfee4;
            case 0x1CFEE8u: goto label_1cfee8;
            case 0x1CFEECu: goto label_1cfeec;
            case 0x1CFEF0u: goto label_1cfef0;
            case 0x1CFEF4u: goto label_1cfef4;
            case 0x1CFEF8u: goto label_1cfef8;
            case 0x1CFEFCu: goto label_1cfefc;
            case 0x1CFF00u: goto label_1cff00;
            case 0x1CFF04u: goto label_1cff04;
            case 0x1CFF08u: goto label_1cff08;
            case 0x1CFF0Cu: goto label_1cff0c;
            case 0x1CFF10u: goto label_1cff10;
            case 0x1CFF14u: goto label_1cff14;
            case 0x1CFF18u: goto label_1cff18;
            case 0x1CFF1Cu: goto label_1cff1c;
            case 0x1CFF20u: goto label_1cff20;
            case 0x1CFF24u: goto label_1cff24;
            case 0x1CFF28u: goto label_1cff28;
            case 0x1CFF2Cu: goto label_1cff2c;
            case 0x1CFF30u: goto label_1cff30;
            case 0x1CFF34u: goto label_1cff34;
            case 0x1CFF38u: goto label_1cff38;
            case 0x1CFF3Cu: goto label_1cff3c;
            case 0x1CFF40u: goto label_1cff40;
            case 0x1CFF44u: goto label_1cff44;
            case 0x1CFF48u: goto label_1cff48;
            case 0x1CFF4Cu: goto label_1cff4c;
            case 0x1CFF50u: goto label_1cff50;
            case 0x1CFF54u: goto label_1cff54;
            case 0x1CFF58u: goto label_1cff58;
            case 0x1CFF5Cu: goto label_1cff5c;
            case 0x1CFF60u: goto label_1cff60;
            case 0x1CFF64u: goto label_1cff64;
            case 0x1CFF68u: goto label_1cff68;
            case 0x1CFF6Cu: goto label_1cff6c;
            case 0x1CFF70u: goto label_1cff70;
            case 0x1CFF74u: goto label_1cff74;
            case 0x1CFF78u: goto label_1cff78;
            case 0x1CFF7Cu: goto label_1cff7c;
            case 0x1CFF80u: goto label_1cff80;
            case 0x1CFF84u: goto label_1cff84;
            case 0x1CFF88u: goto label_1cff88;
            case 0x1CFF8Cu: goto label_1cff8c;
            case 0x1CFF90u: goto label_1cff90;
            case 0x1CFF94u: goto label_1cff94;
            case 0x1CFF98u: goto label_1cff98;
            case 0x1CFF9Cu: goto label_1cff9c;
            case 0x1CFFA0u: goto label_1cffa0;
            case 0x1CFFA4u: goto label_1cffa4;
            case 0x1CFFA8u: goto label_1cffa8;
            case 0x1CFFACu: goto label_1cffac;
            case 0x1CFFB0u: goto label_1cffb0;
            case 0x1CFFB4u: goto label_1cffb4;
            case 0x1CFFB8u: goto label_1cffb8;
            case 0x1CFFBCu: goto label_1cffbc;
            case 0x1CFFC0u: goto label_1cffc0;
            case 0x1CFFC4u: goto label_1cffc4;
            case 0x1CFFC8u: goto label_1cffc8;
            case 0x1CFFCCu: goto label_1cffcc;
            case 0x1CFFD0u: goto label_1cffd0;
            case 0x1CFFD4u: goto label_1cffd4;
            case 0x1CFFD8u: goto label_1cffd8;
            case 0x1CFFDCu: goto label_1cffdc;
            case 0x1CFFE0u: goto label_1cffe0;
            case 0x1CFFE4u: goto label_1cffe4;
            case 0x1CFFE8u: goto label_1cffe8;
            case 0x1CFFECu: goto label_1cffec;
            case 0x1CFFF0u: goto label_1cfff0;
            case 0x1CFFF4u: goto label_1cfff4;
            case 0x1CFFF8u: goto label_1cfff8;
            case 0x1CFFFCu: goto label_1cfffc;
            case 0x1D0000u: goto label_1d0000;
            case 0x1D0004u: goto label_1d0004;
            case 0x1D0008u: goto label_1d0008;
            case 0x1D000Cu: goto label_1d000c;
            case 0x1D0010u: goto label_1d0010;
            case 0x1D0014u: goto label_1d0014;
            case 0x1D0018u: goto label_1d0018;
            case 0x1D001Cu: goto label_1d001c;
            case 0x1D0020u: goto label_1d0020;
            case 0x1D0024u: goto label_1d0024;
            case 0x1D0028u: goto label_1d0028;
            case 0x1D002Cu: goto label_1d002c;
            case 0x1D0030u: goto label_1d0030;
            case 0x1D0034u: goto label_1d0034;
            case 0x1D0038u: goto label_1d0038;
            case 0x1D003Cu: goto label_1d003c;
            case 0x1D0040u: goto label_1d0040;
            case 0x1D0044u: goto label_1d0044;
            case 0x1D0048u: goto label_1d0048;
            case 0x1D004Cu: goto label_1d004c;
            case 0x1D0050u: goto label_1d0050;
            case 0x1D0054u: goto label_1d0054;
            case 0x1D0058u: goto label_1d0058;
            case 0x1D005Cu: goto label_1d005c;
            case 0x1D0060u: goto label_1d0060;
            case 0x1D0064u: goto label_1d0064;
            case 0x1D0068u: goto label_1d0068;
            case 0x1D006Cu: goto label_1d006c;
            case 0x1D0070u: goto label_1d0070;
            case 0x1D0074u: goto label_1d0074;
            case 0x1D0078u: goto label_1d0078;
            case 0x1D007Cu: goto label_1d007c;
            case 0x1D0080u: goto label_1d0080;
            case 0x1D0084u: goto label_1d0084;
            case 0x1D0088u: goto label_1d0088;
            case 0x1D008Cu: goto label_1d008c;
            case 0x1D0090u: goto label_1d0090;
            case 0x1D0094u: goto label_1d0094;
            case 0x1D0098u: goto label_1d0098;
            case 0x1D009Cu: goto label_1d009c;
            case 0x1D00A0u: goto label_1d00a0;
            case 0x1D00A4u: goto label_1d00a4;
            case 0x1D00A8u: goto label_1d00a8;
            case 0x1D00ACu: goto label_1d00ac;
            case 0x1D00B0u: goto label_1d00b0;
            case 0x1D00B4u: goto label_1d00b4;
            case 0x1D00B8u: goto label_1d00b8;
            case 0x1D00BCu: goto label_1d00bc;
            case 0x1D00C0u: goto label_1d00c0;
            case 0x1D00C4u: goto label_1d00c4;
            case 0x1D00C8u: goto label_1d00c8;
            case 0x1D00CCu: goto label_1d00cc;
            case 0x1D00D0u: goto label_1d00d0;
            case 0x1D00D4u: goto label_1d00d4;
            case 0x1D00D8u: goto label_1d00d8;
            case 0x1D00DCu: goto label_1d00dc;
            case 0x1D00E0u: goto label_1d00e0;
            case 0x1D00E4u: goto label_1d00e4;
            case 0x1D00E8u: goto label_1d00e8;
            case 0x1D00ECu: goto label_1d00ec;
            case 0x1D00F0u: goto label_1d00f0;
            case 0x1D00F4u: goto label_1d00f4;
            case 0x1D00F8u: goto label_1d00f8;
            case 0x1D00FCu: goto label_1d00fc;
            case 0x1D0100u: goto label_1d0100;
            case 0x1D0104u: goto label_1d0104;
            case 0x1D0108u: goto label_1d0108;
            case 0x1D010Cu: goto label_1d010c;
            case 0x1D0110u: goto label_1d0110;
            case 0x1D0114u: goto label_1d0114;
            case 0x1D0118u: goto label_1d0118;
            case 0x1D011Cu: goto label_1d011c;
            case 0x1D0120u: goto label_1d0120;
            case 0x1D0124u: goto label_1d0124;
            case 0x1D0128u: goto label_1d0128;
            case 0x1D012Cu: goto label_1d012c;
            case 0x1D0130u: goto label_1d0130;
            case 0x1D0134u: goto label_1d0134;
            case 0x1D0138u: goto label_1d0138;
            case 0x1D013Cu: goto label_1d013c;
            case 0x1D0140u: goto label_1d0140;
            case 0x1D0144u: goto label_1d0144;
            case 0x1D0148u: goto label_1d0148;
            case 0x1D014Cu: goto label_1d014c;
            case 0x1D0150u: goto label_1d0150;
            case 0x1D0154u: goto label_1d0154;
            case 0x1D0158u: goto label_1d0158;
            case 0x1D015Cu: goto label_1d015c;
            case 0x1D0160u: goto label_1d0160;
            case 0x1D0164u: goto label_1d0164;
            case 0x1D0168u: goto label_1d0168;
            case 0x1D016Cu: goto label_1d016c;
            case 0x1D0170u: goto label_1d0170;
            case 0x1D0174u: goto label_1d0174;
            case 0x1D0178u: goto label_1d0178;
            case 0x1D017Cu: goto label_1d017c;
            case 0x1D0180u: goto label_1d0180;
            case 0x1D0184u: goto label_1d0184;
            case 0x1D0188u: goto label_1d0188;
            case 0x1D018Cu: goto label_1d018c;
            case 0x1D0190u: goto label_1d0190;
            case 0x1D0194u: goto label_1d0194;
            case 0x1D0198u: goto label_1d0198;
            case 0x1D019Cu: goto label_1d019c;
            case 0x1D01A0u: goto label_1d01a0;
            case 0x1D01A4u: goto label_1d01a4;
            case 0x1D01A8u: goto label_1d01a8;
            case 0x1D01ACu: goto label_1d01ac;
            case 0x1D01B0u: goto label_1d01b0;
            case 0x1D01B4u: goto label_1d01b4;
            case 0x1D01B8u: goto label_1d01b8;
            case 0x1D01BCu: goto label_1d01bc;
            case 0x1D01C0u: goto label_1d01c0;
            case 0x1D01C4u: goto label_1d01c4;
            case 0x1D01C8u: goto label_1d01c8;
            case 0x1D01CCu: goto label_1d01cc;
            case 0x1D01D0u: goto label_1d01d0;
            case 0x1D01D4u: goto label_1d01d4;
            case 0x1D01D8u: goto label_1d01d8;
            case 0x1D01DCu: goto label_1d01dc;
            case 0x1D01E0u: goto label_1d01e0;
            case 0x1D01E4u: goto label_1d01e4;
            case 0x1D01E8u: goto label_1d01e8;
            case 0x1D01ECu: goto label_1d01ec;
            case 0x1D01F0u: goto label_1d01f0;
            case 0x1D01F4u: goto label_1d01f4;
            case 0x1D01F8u: goto label_1d01f8;
            case 0x1D01FCu: goto label_1d01fc;
            case 0x1D0200u: goto label_1d0200;
            case 0x1D0204u: goto label_1d0204;
            case 0x1D0208u: goto label_1d0208;
            case 0x1D020Cu: goto label_1d020c;
            case 0x1D0210u: goto label_1d0210;
            case 0x1D0214u: goto label_1d0214;
            case 0x1D0218u: goto label_1d0218;
            case 0x1D021Cu: goto label_1d021c;
            case 0x1D0220u: goto label_1d0220;
            case 0x1D0224u: goto label_1d0224;
            case 0x1D0228u: goto label_1d0228;
            case 0x1D022Cu: goto label_1d022c;
            case 0x1D0230u: goto label_1d0230;
            case 0x1D0234u: goto label_1d0234;
            case 0x1D0238u: goto label_1d0238;
            case 0x1D023Cu: goto label_1d023c;
            case 0x1D0240u: goto label_1d0240;
            case 0x1D0244u: goto label_1d0244;
            case 0x1D0248u: goto label_1d0248;
            case 0x1D024Cu: goto label_1d024c;
            case 0x1D0250u: goto label_1d0250;
            case 0x1D0254u: goto label_1d0254;
            case 0x1D0258u: goto label_1d0258;
            case 0x1D025Cu: goto label_1d025c;
            case 0x1D0260u: goto label_1d0260;
            case 0x1D0264u: goto label_1d0264;
            case 0x1D0268u: goto label_1d0268;
            case 0x1D026Cu: goto label_1d026c;
            case 0x1D0270u: goto label_1d0270;
            case 0x1D0274u: goto label_1d0274;
            case 0x1D0278u: goto label_1d0278;
            case 0x1D027Cu: goto label_1d027c;
            case 0x1D0280u: goto label_1d0280;
            case 0x1D0284u: goto label_1d0284;
            case 0x1D0288u: goto label_1d0288;
            case 0x1D028Cu: goto label_1d028c;
            case 0x1D0290u: goto label_1d0290;
            case 0x1D0294u: goto label_1d0294;
            case 0x1D0298u: goto label_1d0298;
            case 0x1D029Cu: goto label_1d029c;
            case 0x1D02A0u: goto label_1d02a0;
            case 0x1D02A4u: goto label_1d02a4;
            case 0x1D02A8u: goto label_1d02a8;
            case 0x1D02ACu: goto label_1d02ac;
            case 0x1D02B0u: goto label_1d02b0;
            case 0x1D02B4u: goto label_1d02b4;
            case 0x1D02B8u: goto label_1d02b8;
            case 0x1D02BCu: goto label_1d02bc;
            case 0x1D02C0u: goto label_1d02c0;
            case 0x1D02C4u: goto label_1d02c4;
            case 0x1D02C8u: goto label_1d02c8;
            case 0x1D02CCu: goto label_1d02cc;
            case 0x1D02D0u: goto label_1d02d0;
            case 0x1D02D4u: goto label_1d02d4;
            case 0x1D02D8u: goto label_1d02d8;
            case 0x1D02DCu: goto label_1d02dc;
            case 0x1D02E0u: goto label_1d02e0;
            case 0x1D02E4u: goto label_1d02e4;
            case 0x1D02E8u: goto label_1d02e8;
            case 0x1D02ECu: goto label_1d02ec;
            case 0x1D02F0u: goto label_1d02f0;
            case 0x1D02F4u: goto label_1d02f4;
            case 0x1D02F8u: goto label_1d02f8;
            case 0x1D02FCu: goto label_1d02fc;
            case 0x1D0300u: goto label_1d0300;
            case 0x1D0304u: goto label_1d0304;
            case 0x1D0308u: goto label_1d0308;
            case 0x1D030Cu: goto label_1d030c;
            case 0x1D0310u: goto label_1d0310;
            case 0x1D0314u: goto label_1d0314;
            case 0x1D0318u: goto label_1d0318;
            case 0x1D031Cu: goto label_1d031c;
            case 0x1D0320u: goto label_1d0320;
            case 0x1D0324u: goto label_1d0324;
            case 0x1D0328u: goto label_1d0328;
            case 0x1D032Cu: goto label_1d032c;
            case 0x1D0330u: goto label_1d0330;
            case 0x1D0334u: goto label_1d0334;
            case 0x1D0338u: goto label_1d0338;
            case 0x1D033Cu: goto label_1d033c;
            case 0x1D0340u: goto label_1d0340;
            case 0x1D0344u: goto label_1d0344;
            case 0x1D0348u: goto label_1d0348;
            case 0x1D034Cu: goto label_1d034c;
            case 0x1D0350u: goto label_1d0350;
            case 0x1D0354u: goto label_1d0354;
            case 0x1D0358u: goto label_1d0358;
            case 0x1D035Cu: goto label_1d035c;
            case 0x1D0360u: goto label_1d0360;
            case 0x1D0364u: goto label_1d0364;
            case 0x1D0368u: goto label_1d0368;
            case 0x1D036Cu: goto label_1d036c;
            case 0x1D0370u: goto label_1d0370;
            case 0x1D0374u: goto label_1d0374;
            case 0x1D0378u: goto label_1d0378;
            case 0x1D037Cu: goto label_1d037c;
            case 0x1D0380u: goto label_1d0380;
            case 0x1D0384u: goto label_1d0384;
            case 0x1D0388u: goto label_1d0388;
            case 0x1D038Cu: goto label_1d038c;
            case 0x1D0390u: goto label_1d0390;
            case 0x1D0394u: goto label_1d0394;
            case 0x1D0398u: goto label_1d0398;
            case 0x1D039Cu: goto label_1d039c;
            case 0x1D03A0u: goto label_1d03a0;
            case 0x1D03A4u: goto label_1d03a4;
            case 0x1D03A8u: goto label_1d03a8;
            case 0x1D03ACu: goto label_1d03ac;
            case 0x1D03B0u: goto label_1d03b0;
            case 0x1D03B4u: goto label_1d03b4;
            case 0x1D03B8u: goto label_1d03b8;
            case 0x1D03BCu: goto label_1d03bc;
            case 0x1D03C0u: goto label_1d03c0;
            case 0x1D03C4u: goto label_1d03c4;
            case 0x1D03C8u: goto label_1d03c8;
            case 0x1D03CCu: goto label_1d03cc;
            case 0x1D03D0u: goto label_1d03d0;
            case 0x1D03D4u: goto label_1d03d4;
            case 0x1D03D8u: goto label_1d03d8;
            case 0x1D03DCu: goto label_1d03dc;
            case 0x1D03E0u: goto label_1d03e0;
            case 0x1D03E4u: goto label_1d03e4;
            case 0x1D03E8u: goto label_1d03e8;
            case 0x1D03ECu: goto label_1d03ec;
            case 0x1D03F0u: goto label_1d03f0;
            case 0x1D03F4u: goto label_1d03f4;
            case 0x1D03F8u: goto label_1d03f8;
            case 0x1D03FCu: goto label_1d03fc;
            case 0x1D0400u: goto label_1d0400;
            case 0x1D0404u: goto label_1d0404;
            case 0x1D0408u: goto label_1d0408;
            case 0x1D040Cu: goto label_1d040c;
            case 0x1D0410u: goto label_1d0410;
            case 0x1D0414u: goto label_1d0414;
            case 0x1D0418u: goto label_1d0418;
            case 0x1D041Cu: goto label_1d041c;
            case 0x1D0420u: goto label_1d0420;
            case 0x1D0424u: goto label_1d0424;
            case 0x1D0428u: goto label_1d0428;
            case 0x1D042Cu: goto label_1d042c;
            case 0x1D0430u: goto label_1d0430;
            case 0x1D0434u: goto label_1d0434;
            case 0x1D0438u: goto label_1d0438;
            case 0x1D043Cu: goto label_1d043c;
            case 0x1D0440u: goto label_1d0440;
            case 0x1D0444u: goto label_1d0444;
            case 0x1D0448u: goto label_1d0448;
            case 0x1D044Cu: goto label_1d044c;
            case 0x1D0450u: goto label_1d0450;
            case 0x1D0454u: goto label_1d0454;
            case 0x1D0458u: goto label_1d0458;
            case 0x1D045Cu: goto label_1d045c;
            case 0x1D0460u: goto label_1d0460;
            case 0x1D0464u: goto label_1d0464;
            case 0x1D0468u: goto label_1d0468;
            case 0x1D046Cu: goto label_1d046c;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D0474u: goto label_1d0474;
            case 0x1D0478u: goto label_1d0478;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0480u: goto label_1d0480;
            case 0x1D0484u: goto label_1d0484;
            case 0x1D0488u: goto label_1d0488;
            case 0x1D048Cu: goto label_1d048c;
            case 0x1D0490u: goto label_1d0490;
            case 0x1D0494u: goto label_1d0494;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D049Cu: goto label_1d049c;
            case 0x1D04A0u: goto label_1d04a0;
            case 0x1D04A4u: goto label_1d04a4;
            case 0x1D04A8u: goto label_1d04a8;
            case 0x1D04ACu: goto label_1d04ac;
            case 0x1D04B0u: goto label_1d04b0;
            case 0x1D04B4u: goto label_1d04b4;
            case 0x1D04B8u: goto label_1d04b8;
            case 0x1D04BCu: goto label_1d04bc;
            case 0x1D04C0u: goto label_1d04c0;
            case 0x1D04C4u: goto label_1d04c4;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04CCu: goto label_1d04cc;
            case 0x1D04D0u: goto label_1d04d0;
            case 0x1D04D4u: goto label_1d04d4;
            case 0x1D04D8u: goto label_1d04d8;
            case 0x1D04DCu: goto label_1d04dc;
            case 0x1D04E0u: goto label_1d04e0;
            case 0x1D04E4u: goto label_1d04e4;
            case 0x1D04E8u: goto label_1d04e8;
            case 0x1D04ECu: goto label_1d04ec;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D04F4u: goto label_1d04f4;
            case 0x1D04F8u: goto label_1d04f8;
            case 0x1D04FCu: goto label_1d04fc;
            case 0x1D0500u: goto label_1d0500;
            case 0x1D0504u: goto label_1d0504;
            case 0x1D0508u: goto label_1d0508;
            case 0x1D050Cu: goto label_1d050c;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0518u: goto label_1d0518;
            case 0x1D051Cu: goto label_1d051c;
            case 0x1D0520u: goto label_1d0520;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0528u: goto label_1d0528;
            case 0x1D052Cu: goto label_1d052c;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0538u: goto label_1d0538;
            case 0x1D053Cu: goto label_1d053c;
            case 0x1D0540u: goto label_1d0540;
            case 0x1D0544u: goto label_1d0544;
            case 0x1D0548u: goto label_1d0548;
            case 0x1D054Cu: goto label_1d054c;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0554u: goto label_1d0554;
            case 0x1D0558u: goto label_1d0558;
            case 0x1D055Cu: goto label_1d055c;
            case 0x1D0560u: goto label_1d0560;
            case 0x1D0564u: goto label_1d0564;
            case 0x1D0568u: goto label_1d0568;
            case 0x1D056Cu: goto label_1d056c;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D0574u: goto label_1d0574;
            case 0x1D0578u: goto label_1d0578;
            case 0x1D057Cu: goto label_1d057c;
            case 0x1D0580u: goto label_1d0580;
            case 0x1D0584u: goto label_1d0584;
            case 0x1D0588u: goto label_1d0588;
            case 0x1D058Cu: goto label_1d058c;
            case 0x1D0590u: goto label_1d0590;
            case 0x1D0594u: goto label_1d0594;
            case 0x1D0598u: goto label_1d0598;
            case 0x1D059Cu: goto label_1d059c;
            case 0x1D05A0u: goto label_1d05a0;
            case 0x1D05A4u: goto label_1d05a4;
            case 0x1D05A8u: goto label_1d05a8;
            case 0x1D05ACu: goto label_1d05ac;
            case 0x1D05B0u: goto label_1d05b0;
            case 0x1D05B4u: goto label_1d05b4;
            case 0x1D05B8u: goto label_1d05b8;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05C4u: goto label_1d05c4;
            case 0x1D05C8u: goto label_1d05c8;
            case 0x1D05CCu: goto label_1d05cc;
            case 0x1D05D0u: goto label_1d05d0;
            case 0x1D05D4u: goto label_1d05d4;
            case 0x1D05D8u: goto label_1d05d8;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D05E0u: goto label_1d05e0;
            case 0x1D05E4u: goto label_1d05e4;
            case 0x1D05E8u: goto label_1d05e8;
            case 0x1D05ECu: goto label_1d05ec;
            case 0x1D05F0u: goto label_1d05f0;
            case 0x1D05F4u: goto label_1d05f4;
            case 0x1D05F8u: goto label_1d05f8;
            case 0x1D05FCu: goto label_1d05fc;
            case 0x1D0600u: goto label_1d0600;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0608u: goto label_1d0608;
            case 0x1D060Cu: goto label_1d060c;
            case 0x1D0610u: goto label_1d0610;
            case 0x1D0614u: goto label_1d0614;
            case 0x1D0618u: goto label_1d0618;
            case 0x1D061Cu: goto label_1d061c;
            case 0x1D0620u: goto label_1d0620;
            case 0x1D0624u: goto label_1d0624;
            case 0x1D0628u: goto label_1d0628;
            case 0x1D062Cu: goto label_1d062c;
            case 0x1D0630u: goto label_1d0630;
            case 0x1D0634u: goto label_1d0634;
            case 0x1D0638u: goto label_1d0638;
            case 0x1D063Cu: goto label_1d063c;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0644u: goto label_1d0644;
            case 0x1D0648u: goto label_1d0648;
            case 0x1D064Cu: goto label_1d064c;
            case 0x1D0650u: goto label_1d0650;
            case 0x1D0654u: goto label_1d0654;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D065Cu: goto label_1d065c;
            case 0x1D0660u: goto label_1d0660;
            case 0x1D0664u: goto label_1d0664;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0670u: goto label_1d0670;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D0678u: goto label_1d0678;
            case 0x1D067Cu: goto label_1d067c;
            case 0x1D0680u: goto label_1d0680;
            case 0x1D0684u: goto label_1d0684;
            case 0x1D0688u: goto label_1d0688;
            case 0x1D068Cu: goto label_1d068c;
            case 0x1D0690u: goto label_1d0690;
            case 0x1D0694u: goto label_1d0694;
            case 0x1D0698u: goto label_1d0698;
            case 0x1D069Cu: goto label_1d069c;
            case 0x1D06A0u: goto label_1d06a0;
            case 0x1D06A4u: goto label_1d06a4;
            case 0x1D06A8u: goto label_1d06a8;
            case 0x1D06ACu: goto label_1d06ac;
            case 0x1D06B0u: goto label_1d06b0;
            case 0x1D06B4u: goto label_1d06b4;
            case 0x1D06B8u: goto label_1d06b8;
            case 0x1D06BCu: goto label_1d06bc;
            case 0x1D06C0u: goto label_1d06c0;
            case 0x1D06C4u: goto label_1d06c4;
            case 0x1D06C8u: goto label_1d06c8;
            case 0x1D06CCu: goto label_1d06cc;
            case 0x1D06D0u: goto label_1d06d0;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D06D8u: goto label_1d06d8;
            case 0x1D06DCu: goto label_1d06dc;
            case 0x1D06E0u: goto label_1d06e0;
            case 0x1D06E4u: goto label_1d06e4;
            case 0x1D06E8u: goto label_1d06e8;
            case 0x1D06ECu: goto label_1d06ec;
            case 0x1D06F0u: goto label_1d06f0;
            case 0x1D06F4u: goto label_1d06f4;
            case 0x1D06F8u: goto label_1d06f8;
            case 0x1D06FCu: goto label_1d06fc;
            case 0x1D0700u: goto label_1d0700;
            case 0x1D0704u: goto label_1d0704;
            case 0x1D0708u: goto label_1d0708;
            case 0x1D070Cu: goto label_1d070c;
            case 0x1D0710u: goto label_1d0710;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D0718u: goto label_1d0718;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D0720u: goto label_1d0720;
            case 0x1D0724u: goto label_1d0724;
            case 0x1D0728u: goto label_1d0728;
            case 0x1D072Cu: goto label_1d072c;
            case 0x1D0730u: goto label_1d0730;
            case 0x1D0734u: goto label_1d0734;
            case 0x1D0738u: goto label_1d0738;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0744u: goto label_1d0744;
            case 0x1D0748u: goto label_1d0748;
            case 0x1D074Cu: goto label_1d074c;
            case 0x1D0750u: goto label_1d0750;
            case 0x1D0754u: goto label_1d0754;
            case 0x1D0758u: goto label_1d0758;
            case 0x1D075Cu: goto label_1d075c;
            case 0x1D0760u: goto label_1d0760;
            case 0x1D0764u: goto label_1d0764;
            case 0x1D0768u: goto label_1d0768;
            case 0x1D076Cu: goto label_1d076c;
            case 0x1D0770u: goto label_1d0770;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0778u: goto label_1d0778;
            case 0x1D077Cu: goto label_1d077c;
            case 0x1D0780u: goto label_1d0780;
            case 0x1D0784u: goto label_1d0784;
            case 0x1D0788u: goto label_1d0788;
            case 0x1D078Cu: goto label_1d078c;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D0794u: goto label_1d0794;
            case 0x1D0798u: goto label_1d0798;
            case 0x1D079Cu: goto label_1d079c;
            case 0x1D07A0u: goto label_1d07a0;
            case 0x1D07A4u: goto label_1d07a4;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07ACu: goto label_1d07ac;
            case 0x1D07B0u: goto label_1d07b0;
            case 0x1D07B4u: goto label_1d07b4;
            case 0x1D07B8u: goto label_1d07b8;
            case 0x1D07BCu: goto label_1d07bc;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07C4u: goto label_1d07c4;
            case 0x1D07C8u: goto label_1d07c8;
            case 0x1D07CCu: goto label_1d07cc;
            case 0x1D07D0u: goto label_1d07d0;
            case 0x1D07D4u: goto label_1d07d4;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07DCu: goto label_1d07dc;
            case 0x1D07E0u: goto label_1d07e0;
            case 0x1D07E4u: goto label_1d07e4;
            case 0x1D07E8u: goto label_1d07e8;
            case 0x1D07ECu: goto label_1d07ec;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D07F4u: goto label_1d07f4;
            case 0x1D07F8u: goto label_1d07f8;
            case 0x1D07FCu: goto label_1d07fc;
            case 0x1D0800u: goto label_1d0800;
            case 0x1D0804u: goto label_1d0804;
            case 0x1D0808u: goto label_1d0808;
            case 0x1D080Cu: goto label_1d080c;
            case 0x1D0810u: goto label_1d0810;
            case 0x1D0814u: goto label_1d0814;
            case 0x1D0818u: goto label_1d0818;
            case 0x1D081Cu: goto label_1d081c;
            case 0x1D0820u: goto label_1d0820;
            case 0x1D0824u: goto label_1d0824;
            case 0x1D0828u: goto label_1d0828;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0830u: goto label_1d0830;
            case 0x1D0834u: goto label_1d0834;
            case 0x1D0838u: goto label_1d0838;
            case 0x1D083Cu: goto label_1d083c;
            case 0x1D0840u: goto label_1d0840;
            case 0x1D0844u: goto label_1d0844;
            case 0x1D0848u: goto label_1d0848;
            case 0x1D084Cu: goto label_1d084c;
            case 0x1D0850u: goto label_1d0850;
            case 0x1D0854u: goto label_1d0854;
            case 0x1D0858u: goto label_1d0858;
            case 0x1D085Cu: goto label_1d085c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D0864u: goto label_1d0864;
            case 0x1D0868u: goto label_1d0868;
            case 0x1D086Cu: goto label_1d086c;
            case 0x1D0870u: goto label_1d0870;
            case 0x1D0874u: goto label_1d0874;
            case 0x1D0878u: goto label_1d0878;
            case 0x1D087Cu: goto label_1d087c;
            case 0x1D0880u: goto label_1d0880;
            case 0x1D0884u: goto label_1d0884;
            case 0x1D0888u: goto label_1d0888;
            case 0x1D088Cu: goto label_1d088c;
            case 0x1D0890u: goto label_1d0890;
            case 0x1D0894u: goto label_1d0894;
            case 0x1D0898u: goto label_1d0898;
            case 0x1D089Cu: goto label_1d089c;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08A4u: goto label_1d08a4;
            case 0x1D08A8u: goto label_1d08a8;
            case 0x1D08ACu: goto label_1d08ac;
            case 0x1D08B0u: goto label_1d08b0;
            case 0x1D08B4u: goto label_1d08b4;
            case 0x1D08B8u: goto label_1d08b8;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08C0u: goto label_1d08c0;
            case 0x1D08C4u: goto label_1d08c4;
            case 0x1D08C8u: goto label_1d08c8;
            case 0x1D08CCu: goto label_1d08cc;
            case 0x1D08D0u: goto label_1d08d0;
            case 0x1D08D4u: goto label_1d08d4;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08DCu: goto label_1d08dc;
            case 0x1D08E0u: goto label_1d08e0;
            case 0x1D08E4u: goto label_1d08e4;
            case 0x1D08E8u: goto label_1d08e8;
            case 0x1D08ECu: goto label_1d08ec;
            case 0x1D08F0u: goto label_1d08f0;
            case 0x1D08F4u: goto label_1d08f4;
            case 0x1D08F8u: goto label_1d08f8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0900u: goto label_1d0900;
            case 0x1D0904u: goto label_1d0904;
            case 0x1D0908u: goto label_1d0908;
            case 0x1D090Cu: goto label_1d090c;
            case 0x1D0910u: goto label_1d0910;
            case 0x1D0914u: goto label_1d0914;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D091Cu: goto label_1d091c;
            case 0x1D0920u: goto label_1d0920;
            case 0x1D0924u: goto label_1d0924;
            case 0x1D0928u: goto label_1d0928;
            case 0x1D092Cu: goto label_1d092c;
            case 0x1D0930u: goto label_1d0930;
            case 0x1D0934u: goto label_1d0934;
            case 0x1D0938u: goto label_1d0938;
            case 0x1D093Cu: goto label_1d093c;
            case 0x1D0940u: goto label_1d0940;
            case 0x1D0944u: goto label_1d0944;
            case 0x1D0948u: goto label_1d0948;
            case 0x1D094Cu: goto label_1d094c;
            case 0x1D0950u: goto label_1d0950;
            case 0x1D0954u: goto label_1d0954;
            case 0x1D0958u: goto label_1d0958;
            case 0x1D095Cu: goto label_1d095c;
            case 0x1D0960u: goto label_1d0960;
            case 0x1D0964u: goto label_1d0964;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D096Cu: goto label_1d096c;
            case 0x1D0970u: goto label_1d0970;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D0978u: goto label_1d0978;
            case 0x1D097Cu: goto label_1d097c;
            case 0x1D0980u: goto label_1d0980;
            case 0x1D0984u: goto label_1d0984;
            case 0x1D0988u: goto label_1d0988;
            case 0x1D098Cu: goto label_1d098c;
            case 0x1D0990u: goto label_1d0990;
            case 0x1D0994u: goto label_1d0994;
            case 0x1D0998u: goto label_1d0998;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09A4u: goto label_1d09a4;
            case 0x1D09A8u: goto label_1d09a8;
            case 0x1D09ACu: goto label_1d09ac;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09B4u: goto label_1d09b4;
            case 0x1D09B8u: goto label_1d09b8;
            case 0x1D09BCu: goto label_1d09bc;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09D0u: goto label_1d09d0;
            case 0x1D09D4u: goto label_1d09d4;
            case 0x1D09D8u: goto label_1d09d8;
            case 0x1D09DCu: goto label_1d09dc;
            case 0x1D09E0u: goto label_1d09e0;
            case 0x1D09E4u: goto label_1d09e4;
            case 0x1D09E8u: goto label_1d09e8;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D09F0u: goto label_1d09f0;
            case 0x1D09F4u: goto label_1d09f4;
            case 0x1D09F8u: goto label_1d09f8;
            case 0x1D09FCu: goto label_1d09fc;
            case 0x1D0A00u: goto label_1d0a00;
            case 0x1D0A04u: goto label_1d0a04;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A0Cu: goto label_1d0a0c;
            case 0x1D0A10u: goto label_1d0a10;
            case 0x1D0A14u: goto label_1d0a14;
            case 0x1D0A18u: goto label_1d0a18;
            case 0x1D0A1Cu: goto label_1d0a1c;
            case 0x1D0A20u: goto label_1d0a20;
            case 0x1D0A24u: goto label_1d0a24;
            case 0x1D0A28u: goto label_1d0a28;
            case 0x1D0A2Cu: goto label_1d0a2c;
            case 0x1D0A30u: goto label_1d0a30;
            case 0x1D0A34u: goto label_1d0a34;
            case 0x1D0A38u: goto label_1d0a38;
            case 0x1D0A3Cu: goto label_1d0a3c;
            case 0x1D0A40u: goto label_1d0a40;
            case 0x1D0A44u: goto label_1d0a44;
            case 0x1D0A48u: goto label_1d0a48;
            case 0x1D0A4Cu: goto label_1d0a4c;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0A54u: goto label_1d0a54;
            case 0x1D0A58u: goto label_1d0a58;
            case 0x1D0A5Cu: goto label_1d0a5c;
            case 0x1D0A60u: goto label_1d0a60;
            case 0x1D0A64u: goto label_1d0a64;
            case 0x1D0A68u: goto label_1d0a68;
            case 0x1D0A6Cu: goto label_1d0a6c;
            case 0x1D0A70u: goto label_1d0a70;
            case 0x1D0A74u: goto label_1d0a74;
            case 0x1D0A78u: goto label_1d0a78;
            case 0x1D0A7Cu: goto label_1d0a7c;
            case 0x1D0A80u: goto label_1d0a80;
            case 0x1D0A84u: goto label_1d0a84;
            case 0x1D0A88u: goto label_1d0a88;
            case 0x1D0A8Cu: goto label_1d0a8c;
            case 0x1D0A90u: goto label_1d0a90;
            case 0x1D0A94u: goto label_1d0a94;
            case 0x1D0A98u: goto label_1d0a98;
            case 0x1D0A9Cu: goto label_1d0a9c;
            case 0x1D0AA0u: goto label_1d0aa0;
            case 0x1D0AA4u: goto label_1d0aa4;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AACu: goto label_1d0aac;
            case 0x1D0AB0u: goto label_1d0ab0;
            case 0x1D0AB4u: goto label_1d0ab4;
            case 0x1D0AB8u: goto label_1d0ab8;
            case 0x1D0ABCu: goto label_1d0abc;
            case 0x1D0AC0u: goto label_1d0ac0;
            case 0x1D0AC4u: goto label_1d0ac4;
            case 0x1D0AC8u: goto label_1d0ac8;
            case 0x1D0ACCu: goto label_1d0acc;
            case 0x1D0AD0u: goto label_1d0ad0;
            case 0x1D0AD4u: goto label_1d0ad4;
            case 0x1D0AD8u: goto label_1d0ad8;
            case 0x1D0ADCu: goto label_1d0adc;
            case 0x1D0AE0u: goto label_1d0ae0;
            case 0x1D0AE4u: goto label_1d0ae4;
            case 0x1D0AE8u: goto label_1d0ae8;
            case 0x1D0AECu: goto label_1d0aec;
            case 0x1D0AF0u: goto label_1d0af0;
            case 0x1D0AF4u: goto label_1d0af4;
            case 0x1D0AF8u: goto label_1d0af8;
            case 0x1D0AFCu: goto label_1d0afc;
            case 0x1D0B00u: goto label_1d0b00;
            case 0x1D0B04u: goto label_1d0b04;
            case 0x1D0B08u: goto label_1d0b08;
            case 0x1D0B0Cu: goto label_1d0b0c;
            case 0x1D0B10u: goto label_1d0b10;
            case 0x1D0B14u: goto label_1d0b14;
            case 0x1D0B18u: goto label_1d0b18;
            case 0x1D0B1Cu: goto label_1d0b1c;
            case 0x1D0B20u: goto label_1d0b20;
            case 0x1D0B24u: goto label_1d0b24;
            case 0x1D0B28u: goto label_1d0b28;
            case 0x1D0B2Cu: goto label_1d0b2c;
            case 0x1D0B30u: goto label_1d0b30;
            case 0x1D0B34u: goto label_1d0b34;
            case 0x1D0B38u: goto label_1d0b38;
            case 0x1D0B3Cu: goto label_1d0b3c;
            case 0x1D0B40u: goto label_1d0b40;
            case 0x1D0B44u: goto label_1d0b44;
            case 0x1D0B48u: goto label_1d0b48;
            case 0x1D0B4Cu: goto label_1d0b4c;
            case 0x1D0B50u: goto label_1d0b50;
            case 0x1D0B54u: goto label_1d0b54;
            case 0x1D0B58u: goto label_1d0b58;
            case 0x1D0B5Cu: goto label_1d0b5c;
            case 0x1D0B60u: goto label_1d0b60;
            case 0x1D0B64u: goto label_1d0b64;
            case 0x1D0B68u: goto label_1d0b68;
            case 0x1D0B6Cu: goto label_1d0b6c;
            case 0x1D0B70u: goto label_1d0b70;
            case 0x1D0B74u: goto label_1d0b74;
            case 0x1D0B78u: goto label_1d0b78;
            case 0x1D0B7Cu: goto label_1d0b7c;
            case 0x1D0B80u: goto label_1d0b80;
            case 0x1D0B84u: goto label_1d0b84;
            case 0x1D0B88u: goto label_1d0b88;
            case 0x1D0B8Cu: goto label_1d0b8c;
            case 0x1D0B90u: goto label_1d0b90;
            case 0x1D0B94u: goto label_1d0b94;
            case 0x1D0B98u: goto label_1d0b98;
            case 0x1D0B9Cu: goto label_1d0b9c;
            case 0x1D0BA0u: goto label_1d0ba0;
            case 0x1D0BA4u: goto label_1d0ba4;
            case 0x1D0BA8u: goto label_1d0ba8;
            case 0x1D0BACu: goto label_1d0bac;
            case 0x1D0BB0u: goto label_1d0bb0;
            case 0x1D0BB4u: goto label_1d0bb4;
            case 0x1D0BB8u: goto label_1d0bb8;
            case 0x1D0BBCu: goto label_1d0bbc;
            case 0x1D0BC0u: goto label_1d0bc0;
            case 0x1D0BC4u: goto label_1d0bc4;
            case 0x1D0BC8u: goto label_1d0bc8;
            case 0x1D0BCCu: goto label_1d0bcc;
            case 0x1D0BD0u: goto label_1d0bd0;
            case 0x1D0BD4u: goto label_1d0bd4;
            case 0x1D0BD8u: goto label_1d0bd8;
            case 0x1D0BDCu: goto label_1d0bdc;
            case 0x1D0BE0u: goto label_1d0be0;
            case 0x1D0BE4u: goto label_1d0be4;
            case 0x1D0BE8u: goto label_1d0be8;
            case 0x1D0BECu: goto label_1d0bec;
            case 0x1D0BF0u: goto label_1d0bf0;
            case 0x1D0BF4u: goto label_1d0bf4;
            case 0x1D0BF8u: goto label_1d0bf8;
            case 0x1D0BFCu: goto label_1d0bfc;
            case 0x1D0C00u: goto label_1d0c00;
            case 0x1D0C04u: goto label_1d0c04;
            case 0x1D0C08u: goto label_1d0c08;
            case 0x1D0C0Cu: goto label_1d0c0c;
            case 0x1D0C10u: goto label_1d0c10;
            case 0x1D0C14u: goto label_1d0c14;
            case 0x1D0C18u: goto label_1d0c18;
            case 0x1D0C1Cu: goto label_1d0c1c;
            case 0x1D0C20u: goto label_1d0c20;
            case 0x1D0C24u: goto label_1d0c24;
            case 0x1D0C28u: goto label_1d0c28;
            case 0x1D0C2Cu: goto label_1d0c2c;
            case 0x1D0C30u: goto label_1d0c30;
            case 0x1D0C34u: goto label_1d0c34;
            case 0x1D0C38u: goto label_1d0c38;
            case 0x1D0C3Cu: goto label_1d0c3c;
            case 0x1D0C40u: goto label_1d0c40;
            case 0x1D0C44u: goto label_1d0c44;
            case 0x1D0C48u: goto label_1d0c48;
            case 0x1D0C4Cu: goto label_1d0c4c;
            case 0x1D0C50u: goto label_1d0c50;
            case 0x1D0C54u: goto label_1d0c54;
            case 0x1D0C58u: goto label_1d0c58;
            case 0x1D0C5Cu: goto label_1d0c5c;
            case 0x1D0C60u: goto label_1d0c60;
            case 0x1D0C64u: goto label_1d0c64;
            case 0x1D0C68u: goto label_1d0c68;
            case 0x1D0C6Cu: goto label_1d0c6c;
            case 0x1D0C70u: goto label_1d0c70;
            case 0x1D0C74u: goto label_1d0c74;
            case 0x1D0C78u: goto label_1d0c78;
            case 0x1D0C7Cu: goto label_1d0c7c;
            case 0x1D0C80u: goto label_1d0c80;
            case 0x1D0C84u: goto label_1d0c84;
            case 0x1D0C88u: goto label_1d0c88;
            case 0x1D0C8Cu: goto label_1d0c8c;
            case 0x1D0C90u: goto label_1d0c90;
            case 0x1D0C94u: goto label_1d0c94;
            case 0x1D0C98u: goto label_1d0c98;
            case 0x1D0C9Cu: goto label_1d0c9c;
            case 0x1D0CA0u: goto label_1d0ca0;
            case 0x1D0CA4u: goto label_1d0ca4;
            case 0x1D0CA8u: goto label_1d0ca8;
            case 0x1D0CACu: goto label_1d0cac;
            case 0x1D0CB0u: goto label_1d0cb0;
            case 0x1D0CB4u: goto label_1d0cb4;
            case 0x1D0CB8u: goto label_1d0cb8;
            case 0x1D0CBCu: goto label_1d0cbc;
            case 0x1D0CC0u: goto label_1d0cc0;
            case 0x1D0CC4u: goto label_1d0cc4;
            case 0x1D0CC8u: goto label_1d0cc8;
            case 0x1D0CCCu: goto label_1d0ccc;
            case 0x1D0CD0u: goto label_1d0cd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C94u; }
            if (ctx->pc != 0x1D0C94u) { return; }
        }
    }
    ctx->pc = 0x1D0C94u;
label_1d0c94:
    // 0x1d0c94: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d0c98:
    if (ctx->pc == 0x1D0C98u) {
        ctx->pc = 0x1D0C9Cu;
        goto label_1d0c9c;
    }
    ctx->pc = 0x1D0C94u;
    {
        const bool branch_taken_0x1d0c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c94) {
            ctx->pc = 0x1D0CC0u;
            goto label_1d0cc0;
        }
    }
    ctx->pc = 0x1D0C9Cu;
label_1d0c9c:
    // 0x1d0c9c: 0x0  nop
    ctx->pc = 0x1d0c9cu;
    // NOP
label_1d0ca0:
    // 0x1d0ca0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d0ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
label_1d0ca4:
    // 0x1d0ca4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d0ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d0ca8:
    // 0x1d0ca8: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1d0ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1d0cac:
    // 0x1d0cac: 0x24c6f840  addiu       $a2, $a2, -0x7C0
    ctx->pc = 0x1d0cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965312));
label_1d0cb0:
    // 0x1d0cb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d0cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0cb4:
    // 0x1d0cb4: 0xc053ca4  jal         func_14F290
label_1d0cb8:
    if (ctx->pc == 0x1D0CB8u) {
        ctx->pc = 0x1D0CB8u;
            // 0x1d0cb8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CBCu;
        goto label_1d0cbc;
    }
    ctx->pc = 0x1D0CB4u;
    SET_GPR_U32(ctx, 31, 0x1D0CBCu);
    ctx->pc = 0x1D0CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CB4u;
            // 0x1d0cb8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CBCu; }
        if (ctx->pc != 0x1D0CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CBCu; }
        if (ctx->pc != 0x1D0CBCu) { return; }
    }
    ctx->pc = 0x1D0CBCu;
label_1d0cbc:
    // 0x1d0cbc: 0x0  nop
    ctx->pc = 0x1d0cbcu;
    // NOP
label_1d0cc0:
    // 0x1d0cc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d0cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d0cc4:
    // 0x1d0cc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0cc8:
    // 0x1d0cc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0ccc:
    // 0x1d0ccc: 0x3e00008  jr          $ra
label_1d0cd0:
    if (ctx->pc == 0x1D0CD0u) {
        ctx->pc = 0x1D0CD0u;
            // 0x1d0cd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1D0CD4u;
        goto label_fallthrough_0x1d0ccc;
    }
    ctx->pc = 0x1D0CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CCCu;
            // 0x1d0cd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFA70u: goto label_1cfa70;
            case 0x1CFA74u: goto label_1cfa74;
            case 0x1CFA78u: goto label_1cfa78;
            case 0x1CFA7Cu: goto label_1cfa7c;
            case 0x1CFA80u: goto label_1cfa80;
            case 0x1CFA84u: goto label_1cfa84;
            case 0x1CFA88u: goto label_1cfa88;
            case 0x1CFA8Cu: goto label_1cfa8c;
            case 0x1CFA90u: goto label_1cfa90;
            case 0x1CFA94u: goto label_1cfa94;
            case 0x1CFA98u: goto label_1cfa98;
            case 0x1CFA9Cu: goto label_1cfa9c;
            case 0x1CFAA0u: goto label_1cfaa0;
            case 0x1CFAA4u: goto label_1cfaa4;
            case 0x1CFAA8u: goto label_1cfaa8;
            case 0x1CFAACu: goto label_1cfaac;
            case 0x1CFAB0u: goto label_1cfab0;
            case 0x1CFAB4u: goto label_1cfab4;
            case 0x1CFAB8u: goto label_1cfab8;
            case 0x1CFABCu: goto label_1cfabc;
            case 0x1CFAC0u: goto label_1cfac0;
            case 0x1CFAC4u: goto label_1cfac4;
            case 0x1CFAC8u: goto label_1cfac8;
            case 0x1CFACCu: goto label_1cfacc;
            case 0x1CFAD0u: goto label_1cfad0;
            case 0x1CFAD4u: goto label_1cfad4;
            case 0x1CFAD8u: goto label_1cfad8;
            case 0x1CFADCu: goto label_1cfadc;
            case 0x1CFAE0u: goto label_1cfae0;
            case 0x1CFAE4u: goto label_1cfae4;
            case 0x1CFAE8u: goto label_1cfae8;
            case 0x1CFAECu: goto label_1cfaec;
            case 0x1CFAF0u: goto label_1cfaf0;
            case 0x1CFAF4u: goto label_1cfaf4;
            case 0x1CFAF8u: goto label_1cfaf8;
            case 0x1CFAFCu: goto label_1cfafc;
            case 0x1CFB00u: goto label_1cfb00;
            case 0x1CFB04u: goto label_1cfb04;
            case 0x1CFB08u: goto label_1cfb08;
            case 0x1CFB0Cu: goto label_1cfb0c;
            case 0x1CFB10u: goto label_1cfb10;
            case 0x1CFB14u: goto label_1cfb14;
            case 0x1CFB18u: goto label_1cfb18;
            case 0x1CFB1Cu: goto label_1cfb1c;
            case 0x1CFB20u: goto label_1cfb20;
            case 0x1CFB24u: goto label_1cfb24;
            case 0x1CFB28u: goto label_1cfb28;
            case 0x1CFB2Cu: goto label_1cfb2c;
            case 0x1CFB30u: goto label_1cfb30;
            case 0x1CFB34u: goto label_1cfb34;
            case 0x1CFB38u: goto label_1cfb38;
            case 0x1CFB3Cu: goto label_1cfb3c;
            case 0x1CFB40u: goto label_1cfb40;
            case 0x1CFB44u: goto label_1cfb44;
            case 0x1CFB48u: goto label_1cfb48;
            case 0x1CFB4Cu: goto label_1cfb4c;
            case 0x1CFB50u: goto label_1cfb50;
            case 0x1CFB54u: goto label_1cfb54;
            case 0x1CFB58u: goto label_1cfb58;
            case 0x1CFB5Cu: goto label_1cfb5c;
            case 0x1CFB60u: goto label_1cfb60;
            case 0x1CFB64u: goto label_1cfb64;
            case 0x1CFB68u: goto label_1cfb68;
            case 0x1CFB6Cu: goto label_1cfb6c;
            case 0x1CFB70u: goto label_1cfb70;
            case 0x1CFB74u: goto label_1cfb74;
            case 0x1CFB78u: goto label_1cfb78;
            case 0x1CFB7Cu: goto label_1cfb7c;
            case 0x1CFB80u: goto label_1cfb80;
            case 0x1CFB84u: goto label_1cfb84;
            case 0x1CFB88u: goto label_1cfb88;
            case 0x1CFB8Cu: goto label_1cfb8c;
            case 0x1CFB90u: goto label_1cfb90;
            case 0x1CFB94u: goto label_1cfb94;
            case 0x1CFB98u: goto label_1cfb98;
            case 0x1CFB9Cu: goto label_1cfb9c;
            case 0x1CFBA0u: goto label_1cfba0;
            case 0x1CFBA4u: goto label_1cfba4;
            case 0x1CFBA8u: goto label_1cfba8;
            case 0x1CFBACu: goto label_1cfbac;
            case 0x1CFBB0u: goto label_1cfbb0;
            case 0x1CFBB4u: goto label_1cfbb4;
            case 0x1CFBB8u: goto label_1cfbb8;
            case 0x1CFBBCu: goto label_1cfbbc;
            case 0x1CFBC0u: goto label_1cfbc0;
            case 0x1CFBC4u: goto label_1cfbc4;
            case 0x1CFBC8u: goto label_1cfbc8;
            case 0x1CFBCCu: goto label_1cfbcc;
            case 0x1CFBD0u: goto label_1cfbd0;
            case 0x1CFBD4u: goto label_1cfbd4;
            case 0x1CFBD8u: goto label_1cfbd8;
            case 0x1CFBDCu: goto label_1cfbdc;
            case 0x1CFBE0u: goto label_1cfbe0;
            case 0x1CFBE4u: goto label_1cfbe4;
            case 0x1CFBE8u: goto label_1cfbe8;
            case 0x1CFBECu: goto label_1cfbec;
            case 0x1CFBF0u: goto label_1cfbf0;
            case 0x1CFBF4u: goto label_1cfbf4;
            case 0x1CFBF8u: goto label_1cfbf8;
            case 0x1CFBFCu: goto label_1cfbfc;
            case 0x1CFC00u: goto label_1cfc00;
            case 0x1CFC04u: goto label_1cfc04;
            case 0x1CFC08u: goto label_1cfc08;
            case 0x1CFC0Cu: goto label_1cfc0c;
            case 0x1CFC10u: goto label_1cfc10;
            case 0x1CFC14u: goto label_1cfc14;
            case 0x1CFC18u: goto label_1cfc18;
            case 0x1CFC1Cu: goto label_1cfc1c;
            case 0x1CFC20u: goto label_1cfc20;
            case 0x1CFC24u: goto label_1cfc24;
            case 0x1CFC28u: goto label_1cfc28;
            case 0x1CFC2Cu: goto label_1cfc2c;
            case 0x1CFC30u: goto label_1cfc30;
            case 0x1CFC34u: goto label_1cfc34;
            case 0x1CFC38u: goto label_1cfc38;
            case 0x1CFC3Cu: goto label_1cfc3c;
            case 0x1CFC40u: goto label_1cfc40;
            case 0x1CFC44u: goto label_1cfc44;
            case 0x1CFC48u: goto label_1cfc48;
            case 0x1CFC4Cu: goto label_1cfc4c;
            case 0x1CFC50u: goto label_1cfc50;
            case 0x1CFC54u: goto label_1cfc54;
            case 0x1CFC58u: goto label_1cfc58;
            case 0x1CFC5Cu: goto label_1cfc5c;
            case 0x1CFC60u: goto label_1cfc60;
            case 0x1CFC64u: goto label_1cfc64;
            case 0x1CFC68u: goto label_1cfc68;
            case 0x1CFC6Cu: goto label_1cfc6c;
            case 0x1CFC70u: goto label_1cfc70;
            case 0x1CFC74u: goto label_1cfc74;
            case 0x1CFC78u: goto label_1cfc78;
            case 0x1CFC7Cu: goto label_1cfc7c;
            case 0x1CFC80u: goto label_1cfc80;
            case 0x1CFC84u: goto label_1cfc84;
            case 0x1CFC88u: goto label_1cfc88;
            case 0x1CFC8Cu: goto label_1cfc8c;
            case 0x1CFC90u: goto label_1cfc90;
            case 0x1CFC94u: goto label_1cfc94;
            case 0x1CFC98u: goto label_1cfc98;
            case 0x1CFC9Cu: goto label_1cfc9c;
            case 0x1CFCA0u: goto label_1cfca0;
            case 0x1CFCA4u: goto label_1cfca4;
            case 0x1CFCA8u: goto label_1cfca8;
            case 0x1CFCACu: goto label_1cfcac;
            case 0x1CFCB0u: goto label_1cfcb0;
            case 0x1CFCB4u: goto label_1cfcb4;
            case 0x1CFCB8u: goto label_1cfcb8;
            case 0x1CFCBCu: goto label_1cfcbc;
            case 0x1CFCC0u: goto label_1cfcc0;
            case 0x1CFCC4u: goto label_1cfcc4;
            case 0x1CFCC8u: goto label_1cfcc8;
            case 0x1CFCCCu: goto label_1cfccc;
            case 0x1CFCD0u: goto label_1cfcd0;
            case 0x1CFCD4u: goto label_1cfcd4;
            case 0x1CFCD8u: goto label_1cfcd8;
            case 0x1CFCDCu: goto label_1cfcdc;
            case 0x1CFCE0u: goto label_1cfce0;
            case 0x1CFCE4u: goto label_1cfce4;
            case 0x1CFCE8u: goto label_1cfce8;
            case 0x1CFCECu: goto label_1cfcec;
            case 0x1CFCF0u: goto label_1cfcf0;
            case 0x1CFCF4u: goto label_1cfcf4;
            case 0x1CFCF8u: goto label_1cfcf8;
            case 0x1CFCFCu: goto label_1cfcfc;
            case 0x1CFD00u: goto label_1cfd00;
            case 0x1CFD04u: goto label_1cfd04;
            case 0x1CFD08u: goto label_1cfd08;
            case 0x1CFD0Cu: goto label_1cfd0c;
            case 0x1CFD10u: goto label_1cfd10;
            case 0x1CFD14u: goto label_1cfd14;
            case 0x1CFD18u: goto label_1cfd18;
            case 0x1CFD1Cu: goto label_1cfd1c;
            case 0x1CFD20u: goto label_1cfd20;
            case 0x1CFD24u: goto label_1cfd24;
            case 0x1CFD28u: goto label_1cfd28;
            case 0x1CFD2Cu: goto label_1cfd2c;
            case 0x1CFD30u: goto label_1cfd30;
            case 0x1CFD34u: goto label_1cfd34;
            case 0x1CFD38u: goto label_1cfd38;
            case 0x1CFD3Cu: goto label_1cfd3c;
            case 0x1CFD40u: goto label_1cfd40;
            case 0x1CFD44u: goto label_1cfd44;
            case 0x1CFD48u: goto label_1cfd48;
            case 0x1CFD4Cu: goto label_1cfd4c;
            case 0x1CFD50u: goto label_1cfd50;
            case 0x1CFD54u: goto label_1cfd54;
            case 0x1CFD58u: goto label_1cfd58;
            case 0x1CFD5Cu: goto label_1cfd5c;
            case 0x1CFD60u: goto label_1cfd60;
            case 0x1CFD64u: goto label_1cfd64;
            case 0x1CFD68u: goto label_1cfd68;
            case 0x1CFD6Cu: goto label_1cfd6c;
            case 0x1CFD70u: goto label_1cfd70;
            case 0x1CFD74u: goto label_1cfd74;
            case 0x1CFD78u: goto label_1cfd78;
            case 0x1CFD7Cu: goto label_1cfd7c;
            case 0x1CFD80u: goto label_1cfd80;
            case 0x1CFD84u: goto label_1cfd84;
            case 0x1CFD88u: goto label_1cfd88;
            case 0x1CFD8Cu: goto label_1cfd8c;
            case 0x1CFD90u: goto label_1cfd90;
            case 0x1CFD94u: goto label_1cfd94;
            case 0x1CFD98u: goto label_1cfd98;
            case 0x1CFD9Cu: goto label_1cfd9c;
            case 0x1CFDA0u: goto label_1cfda0;
            case 0x1CFDA4u: goto label_1cfda4;
            case 0x1CFDA8u: goto label_1cfda8;
            case 0x1CFDACu: goto label_1cfdac;
            case 0x1CFDB0u: goto label_1cfdb0;
            case 0x1CFDB4u: goto label_1cfdb4;
            case 0x1CFDB8u: goto label_1cfdb8;
            case 0x1CFDBCu: goto label_1cfdbc;
            case 0x1CFDC0u: goto label_1cfdc0;
            case 0x1CFDC4u: goto label_1cfdc4;
            case 0x1CFDC8u: goto label_1cfdc8;
            case 0x1CFDCCu: goto label_1cfdcc;
            case 0x1CFDD0u: goto label_1cfdd0;
            case 0x1CFDD4u: goto label_1cfdd4;
            case 0x1CFDD8u: goto label_1cfdd8;
            case 0x1CFDDCu: goto label_1cfddc;
            case 0x1CFDE0u: goto label_1cfde0;
            case 0x1CFDE4u: goto label_1cfde4;
            case 0x1CFDE8u: goto label_1cfde8;
            case 0x1CFDECu: goto label_1cfdec;
            case 0x1CFDF0u: goto label_1cfdf0;
            case 0x1CFDF4u: goto label_1cfdf4;
            case 0x1CFDF8u: goto label_1cfdf8;
            case 0x1CFDFCu: goto label_1cfdfc;
            case 0x1CFE00u: goto label_1cfe00;
            case 0x1CFE04u: goto label_1cfe04;
            case 0x1CFE08u: goto label_1cfe08;
            case 0x1CFE0Cu: goto label_1cfe0c;
            case 0x1CFE10u: goto label_1cfe10;
            case 0x1CFE14u: goto label_1cfe14;
            case 0x1CFE18u: goto label_1cfe18;
            case 0x1CFE1Cu: goto label_1cfe1c;
            case 0x1CFE20u: goto label_1cfe20;
            case 0x1CFE24u: goto label_1cfe24;
            case 0x1CFE28u: goto label_1cfe28;
            case 0x1CFE2Cu: goto label_1cfe2c;
            case 0x1CFE30u: goto label_1cfe30;
            case 0x1CFE34u: goto label_1cfe34;
            case 0x1CFE38u: goto label_1cfe38;
            case 0x1CFE3Cu: goto label_1cfe3c;
            case 0x1CFE40u: goto label_1cfe40;
            case 0x1CFE44u: goto label_1cfe44;
            case 0x1CFE48u: goto label_1cfe48;
            case 0x1CFE4Cu: goto label_1cfe4c;
            case 0x1CFE50u: goto label_1cfe50;
            case 0x1CFE54u: goto label_1cfe54;
            case 0x1CFE58u: goto label_1cfe58;
            case 0x1CFE5Cu: goto label_1cfe5c;
            case 0x1CFE60u: goto label_1cfe60;
            case 0x1CFE64u: goto label_1cfe64;
            case 0x1CFE68u: goto label_1cfe68;
            case 0x1CFE6Cu: goto label_1cfe6c;
            case 0x1CFE70u: goto label_1cfe70;
            case 0x1CFE74u: goto label_1cfe74;
            case 0x1CFE78u: goto label_1cfe78;
            case 0x1CFE7Cu: goto label_1cfe7c;
            case 0x1CFE80u: goto label_1cfe80;
            case 0x1CFE84u: goto label_1cfe84;
            case 0x1CFE88u: goto label_1cfe88;
            case 0x1CFE8Cu: goto label_1cfe8c;
            case 0x1CFE90u: goto label_1cfe90;
            case 0x1CFE94u: goto label_1cfe94;
            case 0x1CFE98u: goto label_1cfe98;
            case 0x1CFE9Cu: goto label_1cfe9c;
            case 0x1CFEA0u: goto label_1cfea0;
            case 0x1CFEA4u: goto label_1cfea4;
            case 0x1CFEA8u: goto label_1cfea8;
            case 0x1CFEACu: goto label_1cfeac;
            case 0x1CFEB0u: goto label_1cfeb0;
            case 0x1CFEB4u: goto label_1cfeb4;
            case 0x1CFEB8u: goto label_1cfeb8;
            case 0x1CFEBCu: goto label_1cfebc;
            case 0x1CFEC0u: goto label_1cfec0;
            case 0x1CFEC4u: goto label_1cfec4;
            case 0x1CFEC8u: goto label_1cfec8;
            case 0x1CFECCu: goto label_1cfecc;
            case 0x1CFED0u: goto label_1cfed0;
            case 0x1CFED4u: goto label_1cfed4;
            case 0x1CFED8u: goto label_1cfed8;
            case 0x1CFEDCu: goto label_1cfedc;
            case 0x1CFEE0u: goto label_1cfee0;
            case 0x1CFEE4u: goto label_1cfee4;
            case 0x1CFEE8u: goto label_1cfee8;
            case 0x1CFEECu: goto label_1cfeec;
            case 0x1CFEF0u: goto label_1cfef0;
            case 0x1CFEF4u: goto label_1cfef4;
            case 0x1CFEF8u: goto label_1cfef8;
            case 0x1CFEFCu: goto label_1cfefc;
            case 0x1CFF00u: goto label_1cff00;
            case 0x1CFF04u: goto label_1cff04;
            case 0x1CFF08u: goto label_1cff08;
            case 0x1CFF0Cu: goto label_1cff0c;
            case 0x1CFF10u: goto label_1cff10;
            case 0x1CFF14u: goto label_1cff14;
            case 0x1CFF18u: goto label_1cff18;
            case 0x1CFF1Cu: goto label_1cff1c;
            case 0x1CFF20u: goto label_1cff20;
            case 0x1CFF24u: goto label_1cff24;
            case 0x1CFF28u: goto label_1cff28;
            case 0x1CFF2Cu: goto label_1cff2c;
            case 0x1CFF30u: goto label_1cff30;
            case 0x1CFF34u: goto label_1cff34;
            case 0x1CFF38u: goto label_1cff38;
            case 0x1CFF3Cu: goto label_1cff3c;
            case 0x1CFF40u: goto label_1cff40;
            case 0x1CFF44u: goto label_1cff44;
            case 0x1CFF48u: goto label_1cff48;
            case 0x1CFF4Cu: goto label_1cff4c;
            case 0x1CFF50u: goto label_1cff50;
            case 0x1CFF54u: goto label_1cff54;
            case 0x1CFF58u: goto label_1cff58;
            case 0x1CFF5Cu: goto label_1cff5c;
            case 0x1CFF60u: goto label_1cff60;
            case 0x1CFF64u: goto label_1cff64;
            case 0x1CFF68u: goto label_1cff68;
            case 0x1CFF6Cu: goto label_1cff6c;
            case 0x1CFF70u: goto label_1cff70;
            case 0x1CFF74u: goto label_1cff74;
            case 0x1CFF78u: goto label_1cff78;
            case 0x1CFF7Cu: goto label_1cff7c;
            case 0x1CFF80u: goto label_1cff80;
            case 0x1CFF84u: goto label_1cff84;
            case 0x1CFF88u: goto label_1cff88;
            case 0x1CFF8Cu: goto label_1cff8c;
            case 0x1CFF90u: goto label_1cff90;
            case 0x1CFF94u: goto label_1cff94;
            case 0x1CFF98u: goto label_1cff98;
            case 0x1CFF9Cu: goto label_1cff9c;
            case 0x1CFFA0u: goto label_1cffa0;
            case 0x1CFFA4u: goto label_1cffa4;
            case 0x1CFFA8u: goto label_1cffa8;
            case 0x1CFFACu: goto label_1cffac;
            case 0x1CFFB0u: goto label_1cffb0;
            case 0x1CFFB4u: goto label_1cffb4;
            case 0x1CFFB8u: goto label_1cffb8;
            case 0x1CFFBCu: goto label_1cffbc;
            case 0x1CFFC0u: goto label_1cffc0;
            case 0x1CFFC4u: goto label_1cffc4;
            case 0x1CFFC8u: goto label_1cffc8;
            case 0x1CFFCCu: goto label_1cffcc;
            case 0x1CFFD0u: goto label_1cffd0;
            case 0x1CFFD4u: goto label_1cffd4;
            case 0x1CFFD8u: goto label_1cffd8;
            case 0x1CFFDCu: goto label_1cffdc;
            case 0x1CFFE0u: goto label_1cffe0;
            case 0x1CFFE4u: goto label_1cffe4;
            case 0x1CFFE8u: goto label_1cffe8;
            case 0x1CFFECu: goto label_1cffec;
            case 0x1CFFF0u: goto label_1cfff0;
            case 0x1CFFF4u: goto label_1cfff4;
            case 0x1CFFF8u: goto label_1cfff8;
            case 0x1CFFFCu: goto label_1cfffc;
            case 0x1D0000u: goto label_1d0000;
            case 0x1D0004u: goto label_1d0004;
            case 0x1D0008u: goto label_1d0008;
            case 0x1D000Cu: goto label_1d000c;
            case 0x1D0010u: goto label_1d0010;
            case 0x1D0014u: goto label_1d0014;
            case 0x1D0018u: goto label_1d0018;
            case 0x1D001Cu: goto label_1d001c;
            case 0x1D0020u: goto label_1d0020;
            case 0x1D0024u: goto label_1d0024;
            case 0x1D0028u: goto label_1d0028;
            case 0x1D002Cu: goto label_1d002c;
            case 0x1D0030u: goto label_1d0030;
            case 0x1D0034u: goto label_1d0034;
            case 0x1D0038u: goto label_1d0038;
            case 0x1D003Cu: goto label_1d003c;
            case 0x1D0040u: goto label_1d0040;
            case 0x1D0044u: goto label_1d0044;
            case 0x1D0048u: goto label_1d0048;
            case 0x1D004Cu: goto label_1d004c;
            case 0x1D0050u: goto label_1d0050;
            case 0x1D0054u: goto label_1d0054;
            case 0x1D0058u: goto label_1d0058;
            case 0x1D005Cu: goto label_1d005c;
            case 0x1D0060u: goto label_1d0060;
            case 0x1D0064u: goto label_1d0064;
            case 0x1D0068u: goto label_1d0068;
            case 0x1D006Cu: goto label_1d006c;
            case 0x1D0070u: goto label_1d0070;
            case 0x1D0074u: goto label_1d0074;
            case 0x1D0078u: goto label_1d0078;
            case 0x1D007Cu: goto label_1d007c;
            case 0x1D0080u: goto label_1d0080;
            case 0x1D0084u: goto label_1d0084;
            case 0x1D0088u: goto label_1d0088;
            case 0x1D008Cu: goto label_1d008c;
            case 0x1D0090u: goto label_1d0090;
            case 0x1D0094u: goto label_1d0094;
            case 0x1D0098u: goto label_1d0098;
            case 0x1D009Cu: goto label_1d009c;
            case 0x1D00A0u: goto label_1d00a0;
            case 0x1D00A4u: goto label_1d00a4;
            case 0x1D00A8u: goto label_1d00a8;
            case 0x1D00ACu: goto label_1d00ac;
            case 0x1D00B0u: goto label_1d00b0;
            case 0x1D00B4u: goto label_1d00b4;
            case 0x1D00B8u: goto label_1d00b8;
            case 0x1D00BCu: goto label_1d00bc;
            case 0x1D00C0u: goto label_1d00c0;
            case 0x1D00C4u: goto label_1d00c4;
            case 0x1D00C8u: goto label_1d00c8;
            case 0x1D00CCu: goto label_1d00cc;
            case 0x1D00D0u: goto label_1d00d0;
            case 0x1D00D4u: goto label_1d00d4;
            case 0x1D00D8u: goto label_1d00d8;
            case 0x1D00DCu: goto label_1d00dc;
            case 0x1D00E0u: goto label_1d00e0;
            case 0x1D00E4u: goto label_1d00e4;
            case 0x1D00E8u: goto label_1d00e8;
            case 0x1D00ECu: goto label_1d00ec;
            case 0x1D00F0u: goto label_1d00f0;
            case 0x1D00F4u: goto label_1d00f4;
            case 0x1D00F8u: goto label_1d00f8;
            case 0x1D00FCu: goto label_1d00fc;
            case 0x1D0100u: goto label_1d0100;
            case 0x1D0104u: goto label_1d0104;
            case 0x1D0108u: goto label_1d0108;
            case 0x1D010Cu: goto label_1d010c;
            case 0x1D0110u: goto label_1d0110;
            case 0x1D0114u: goto label_1d0114;
            case 0x1D0118u: goto label_1d0118;
            case 0x1D011Cu: goto label_1d011c;
            case 0x1D0120u: goto label_1d0120;
            case 0x1D0124u: goto label_1d0124;
            case 0x1D0128u: goto label_1d0128;
            case 0x1D012Cu: goto label_1d012c;
            case 0x1D0130u: goto label_1d0130;
            case 0x1D0134u: goto label_1d0134;
            case 0x1D0138u: goto label_1d0138;
            case 0x1D013Cu: goto label_1d013c;
            case 0x1D0140u: goto label_1d0140;
            case 0x1D0144u: goto label_1d0144;
            case 0x1D0148u: goto label_1d0148;
            case 0x1D014Cu: goto label_1d014c;
            case 0x1D0150u: goto label_1d0150;
            case 0x1D0154u: goto label_1d0154;
            case 0x1D0158u: goto label_1d0158;
            case 0x1D015Cu: goto label_1d015c;
            case 0x1D0160u: goto label_1d0160;
            case 0x1D0164u: goto label_1d0164;
            case 0x1D0168u: goto label_1d0168;
            case 0x1D016Cu: goto label_1d016c;
            case 0x1D0170u: goto label_1d0170;
            case 0x1D0174u: goto label_1d0174;
            case 0x1D0178u: goto label_1d0178;
            case 0x1D017Cu: goto label_1d017c;
            case 0x1D0180u: goto label_1d0180;
            case 0x1D0184u: goto label_1d0184;
            case 0x1D0188u: goto label_1d0188;
            case 0x1D018Cu: goto label_1d018c;
            case 0x1D0190u: goto label_1d0190;
            case 0x1D0194u: goto label_1d0194;
            case 0x1D0198u: goto label_1d0198;
            case 0x1D019Cu: goto label_1d019c;
            case 0x1D01A0u: goto label_1d01a0;
            case 0x1D01A4u: goto label_1d01a4;
            case 0x1D01A8u: goto label_1d01a8;
            case 0x1D01ACu: goto label_1d01ac;
            case 0x1D01B0u: goto label_1d01b0;
            case 0x1D01B4u: goto label_1d01b4;
            case 0x1D01B8u: goto label_1d01b8;
            case 0x1D01BCu: goto label_1d01bc;
            case 0x1D01C0u: goto label_1d01c0;
            case 0x1D01C4u: goto label_1d01c4;
            case 0x1D01C8u: goto label_1d01c8;
            case 0x1D01CCu: goto label_1d01cc;
            case 0x1D01D0u: goto label_1d01d0;
            case 0x1D01D4u: goto label_1d01d4;
            case 0x1D01D8u: goto label_1d01d8;
            case 0x1D01DCu: goto label_1d01dc;
            case 0x1D01E0u: goto label_1d01e0;
            case 0x1D01E4u: goto label_1d01e4;
            case 0x1D01E8u: goto label_1d01e8;
            case 0x1D01ECu: goto label_1d01ec;
            case 0x1D01F0u: goto label_1d01f0;
            case 0x1D01F4u: goto label_1d01f4;
            case 0x1D01F8u: goto label_1d01f8;
            case 0x1D01FCu: goto label_1d01fc;
            case 0x1D0200u: goto label_1d0200;
            case 0x1D0204u: goto label_1d0204;
            case 0x1D0208u: goto label_1d0208;
            case 0x1D020Cu: goto label_1d020c;
            case 0x1D0210u: goto label_1d0210;
            case 0x1D0214u: goto label_1d0214;
            case 0x1D0218u: goto label_1d0218;
            case 0x1D021Cu: goto label_1d021c;
            case 0x1D0220u: goto label_1d0220;
            case 0x1D0224u: goto label_1d0224;
            case 0x1D0228u: goto label_1d0228;
            case 0x1D022Cu: goto label_1d022c;
            case 0x1D0230u: goto label_1d0230;
            case 0x1D0234u: goto label_1d0234;
            case 0x1D0238u: goto label_1d0238;
            case 0x1D023Cu: goto label_1d023c;
            case 0x1D0240u: goto label_1d0240;
            case 0x1D0244u: goto label_1d0244;
            case 0x1D0248u: goto label_1d0248;
            case 0x1D024Cu: goto label_1d024c;
            case 0x1D0250u: goto label_1d0250;
            case 0x1D0254u: goto label_1d0254;
            case 0x1D0258u: goto label_1d0258;
            case 0x1D025Cu: goto label_1d025c;
            case 0x1D0260u: goto label_1d0260;
            case 0x1D0264u: goto label_1d0264;
            case 0x1D0268u: goto label_1d0268;
            case 0x1D026Cu: goto label_1d026c;
            case 0x1D0270u: goto label_1d0270;
            case 0x1D0274u: goto label_1d0274;
            case 0x1D0278u: goto label_1d0278;
            case 0x1D027Cu: goto label_1d027c;
            case 0x1D0280u: goto label_1d0280;
            case 0x1D0284u: goto label_1d0284;
            case 0x1D0288u: goto label_1d0288;
            case 0x1D028Cu: goto label_1d028c;
            case 0x1D0290u: goto label_1d0290;
            case 0x1D0294u: goto label_1d0294;
            case 0x1D0298u: goto label_1d0298;
            case 0x1D029Cu: goto label_1d029c;
            case 0x1D02A0u: goto label_1d02a0;
            case 0x1D02A4u: goto label_1d02a4;
            case 0x1D02A8u: goto label_1d02a8;
            case 0x1D02ACu: goto label_1d02ac;
            case 0x1D02B0u: goto label_1d02b0;
            case 0x1D02B4u: goto label_1d02b4;
            case 0x1D02B8u: goto label_1d02b8;
            case 0x1D02BCu: goto label_1d02bc;
            case 0x1D02C0u: goto label_1d02c0;
            case 0x1D02C4u: goto label_1d02c4;
            case 0x1D02C8u: goto label_1d02c8;
            case 0x1D02CCu: goto label_1d02cc;
            case 0x1D02D0u: goto label_1d02d0;
            case 0x1D02D4u: goto label_1d02d4;
            case 0x1D02D8u: goto label_1d02d8;
            case 0x1D02DCu: goto label_1d02dc;
            case 0x1D02E0u: goto label_1d02e0;
            case 0x1D02E4u: goto label_1d02e4;
            case 0x1D02E8u: goto label_1d02e8;
            case 0x1D02ECu: goto label_1d02ec;
            case 0x1D02F0u: goto label_1d02f0;
            case 0x1D02F4u: goto label_1d02f4;
            case 0x1D02F8u: goto label_1d02f8;
            case 0x1D02FCu: goto label_1d02fc;
            case 0x1D0300u: goto label_1d0300;
            case 0x1D0304u: goto label_1d0304;
            case 0x1D0308u: goto label_1d0308;
            case 0x1D030Cu: goto label_1d030c;
            case 0x1D0310u: goto label_1d0310;
            case 0x1D0314u: goto label_1d0314;
            case 0x1D0318u: goto label_1d0318;
            case 0x1D031Cu: goto label_1d031c;
            case 0x1D0320u: goto label_1d0320;
            case 0x1D0324u: goto label_1d0324;
            case 0x1D0328u: goto label_1d0328;
            case 0x1D032Cu: goto label_1d032c;
            case 0x1D0330u: goto label_1d0330;
            case 0x1D0334u: goto label_1d0334;
            case 0x1D0338u: goto label_1d0338;
            case 0x1D033Cu: goto label_1d033c;
            case 0x1D0340u: goto label_1d0340;
            case 0x1D0344u: goto label_1d0344;
            case 0x1D0348u: goto label_1d0348;
            case 0x1D034Cu: goto label_1d034c;
            case 0x1D0350u: goto label_1d0350;
            case 0x1D0354u: goto label_1d0354;
            case 0x1D0358u: goto label_1d0358;
            case 0x1D035Cu: goto label_1d035c;
            case 0x1D0360u: goto label_1d0360;
            case 0x1D0364u: goto label_1d0364;
            case 0x1D0368u: goto label_1d0368;
            case 0x1D036Cu: goto label_1d036c;
            case 0x1D0370u: goto label_1d0370;
            case 0x1D0374u: goto label_1d0374;
            case 0x1D0378u: goto label_1d0378;
            case 0x1D037Cu: goto label_1d037c;
            case 0x1D0380u: goto label_1d0380;
            case 0x1D0384u: goto label_1d0384;
            case 0x1D0388u: goto label_1d0388;
            case 0x1D038Cu: goto label_1d038c;
            case 0x1D0390u: goto label_1d0390;
            case 0x1D0394u: goto label_1d0394;
            case 0x1D0398u: goto label_1d0398;
            case 0x1D039Cu: goto label_1d039c;
            case 0x1D03A0u: goto label_1d03a0;
            case 0x1D03A4u: goto label_1d03a4;
            case 0x1D03A8u: goto label_1d03a8;
            case 0x1D03ACu: goto label_1d03ac;
            case 0x1D03B0u: goto label_1d03b0;
            case 0x1D03B4u: goto label_1d03b4;
            case 0x1D03B8u: goto label_1d03b8;
            case 0x1D03BCu: goto label_1d03bc;
            case 0x1D03C0u: goto label_1d03c0;
            case 0x1D03C4u: goto label_1d03c4;
            case 0x1D03C8u: goto label_1d03c8;
            case 0x1D03CCu: goto label_1d03cc;
            case 0x1D03D0u: goto label_1d03d0;
            case 0x1D03D4u: goto label_1d03d4;
            case 0x1D03D8u: goto label_1d03d8;
            case 0x1D03DCu: goto label_1d03dc;
            case 0x1D03E0u: goto label_1d03e0;
            case 0x1D03E4u: goto label_1d03e4;
            case 0x1D03E8u: goto label_1d03e8;
            case 0x1D03ECu: goto label_1d03ec;
            case 0x1D03F0u: goto label_1d03f0;
            case 0x1D03F4u: goto label_1d03f4;
            case 0x1D03F8u: goto label_1d03f8;
            case 0x1D03FCu: goto label_1d03fc;
            case 0x1D0400u: goto label_1d0400;
            case 0x1D0404u: goto label_1d0404;
            case 0x1D0408u: goto label_1d0408;
            case 0x1D040Cu: goto label_1d040c;
            case 0x1D0410u: goto label_1d0410;
            case 0x1D0414u: goto label_1d0414;
            case 0x1D0418u: goto label_1d0418;
            case 0x1D041Cu: goto label_1d041c;
            case 0x1D0420u: goto label_1d0420;
            case 0x1D0424u: goto label_1d0424;
            case 0x1D0428u: goto label_1d0428;
            case 0x1D042Cu: goto label_1d042c;
            case 0x1D0430u: goto label_1d0430;
            case 0x1D0434u: goto label_1d0434;
            case 0x1D0438u: goto label_1d0438;
            case 0x1D043Cu: goto label_1d043c;
            case 0x1D0440u: goto label_1d0440;
            case 0x1D0444u: goto label_1d0444;
            case 0x1D0448u: goto label_1d0448;
            case 0x1D044Cu: goto label_1d044c;
            case 0x1D0450u: goto label_1d0450;
            case 0x1D0454u: goto label_1d0454;
            case 0x1D0458u: goto label_1d0458;
            case 0x1D045Cu: goto label_1d045c;
            case 0x1D0460u: goto label_1d0460;
            case 0x1D0464u: goto label_1d0464;
            case 0x1D0468u: goto label_1d0468;
            case 0x1D046Cu: goto label_1d046c;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D0474u: goto label_1d0474;
            case 0x1D0478u: goto label_1d0478;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0480u: goto label_1d0480;
            case 0x1D0484u: goto label_1d0484;
            case 0x1D0488u: goto label_1d0488;
            case 0x1D048Cu: goto label_1d048c;
            case 0x1D0490u: goto label_1d0490;
            case 0x1D0494u: goto label_1d0494;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D049Cu: goto label_1d049c;
            case 0x1D04A0u: goto label_1d04a0;
            case 0x1D04A4u: goto label_1d04a4;
            case 0x1D04A8u: goto label_1d04a8;
            case 0x1D04ACu: goto label_1d04ac;
            case 0x1D04B0u: goto label_1d04b0;
            case 0x1D04B4u: goto label_1d04b4;
            case 0x1D04B8u: goto label_1d04b8;
            case 0x1D04BCu: goto label_1d04bc;
            case 0x1D04C0u: goto label_1d04c0;
            case 0x1D04C4u: goto label_1d04c4;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04CCu: goto label_1d04cc;
            case 0x1D04D0u: goto label_1d04d0;
            case 0x1D04D4u: goto label_1d04d4;
            case 0x1D04D8u: goto label_1d04d8;
            case 0x1D04DCu: goto label_1d04dc;
            case 0x1D04E0u: goto label_1d04e0;
            case 0x1D04E4u: goto label_1d04e4;
            case 0x1D04E8u: goto label_1d04e8;
            case 0x1D04ECu: goto label_1d04ec;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D04F4u: goto label_1d04f4;
            case 0x1D04F8u: goto label_1d04f8;
            case 0x1D04FCu: goto label_1d04fc;
            case 0x1D0500u: goto label_1d0500;
            case 0x1D0504u: goto label_1d0504;
            case 0x1D0508u: goto label_1d0508;
            case 0x1D050Cu: goto label_1d050c;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0518u: goto label_1d0518;
            case 0x1D051Cu: goto label_1d051c;
            case 0x1D0520u: goto label_1d0520;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0528u: goto label_1d0528;
            case 0x1D052Cu: goto label_1d052c;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0538u: goto label_1d0538;
            case 0x1D053Cu: goto label_1d053c;
            case 0x1D0540u: goto label_1d0540;
            case 0x1D0544u: goto label_1d0544;
            case 0x1D0548u: goto label_1d0548;
            case 0x1D054Cu: goto label_1d054c;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0554u: goto label_1d0554;
            case 0x1D0558u: goto label_1d0558;
            case 0x1D055Cu: goto label_1d055c;
            case 0x1D0560u: goto label_1d0560;
            case 0x1D0564u: goto label_1d0564;
            case 0x1D0568u: goto label_1d0568;
            case 0x1D056Cu: goto label_1d056c;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D0574u: goto label_1d0574;
            case 0x1D0578u: goto label_1d0578;
            case 0x1D057Cu: goto label_1d057c;
            case 0x1D0580u: goto label_1d0580;
            case 0x1D0584u: goto label_1d0584;
            case 0x1D0588u: goto label_1d0588;
            case 0x1D058Cu: goto label_1d058c;
            case 0x1D0590u: goto label_1d0590;
            case 0x1D0594u: goto label_1d0594;
            case 0x1D0598u: goto label_1d0598;
            case 0x1D059Cu: goto label_1d059c;
            case 0x1D05A0u: goto label_1d05a0;
            case 0x1D05A4u: goto label_1d05a4;
            case 0x1D05A8u: goto label_1d05a8;
            case 0x1D05ACu: goto label_1d05ac;
            case 0x1D05B0u: goto label_1d05b0;
            case 0x1D05B4u: goto label_1d05b4;
            case 0x1D05B8u: goto label_1d05b8;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05C4u: goto label_1d05c4;
            case 0x1D05C8u: goto label_1d05c8;
            case 0x1D05CCu: goto label_1d05cc;
            case 0x1D05D0u: goto label_1d05d0;
            case 0x1D05D4u: goto label_1d05d4;
            case 0x1D05D8u: goto label_1d05d8;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D05E0u: goto label_1d05e0;
            case 0x1D05E4u: goto label_1d05e4;
            case 0x1D05E8u: goto label_1d05e8;
            case 0x1D05ECu: goto label_1d05ec;
            case 0x1D05F0u: goto label_1d05f0;
            case 0x1D05F4u: goto label_1d05f4;
            case 0x1D05F8u: goto label_1d05f8;
            case 0x1D05FCu: goto label_1d05fc;
            case 0x1D0600u: goto label_1d0600;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0608u: goto label_1d0608;
            case 0x1D060Cu: goto label_1d060c;
            case 0x1D0610u: goto label_1d0610;
            case 0x1D0614u: goto label_1d0614;
            case 0x1D0618u: goto label_1d0618;
            case 0x1D061Cu: goto label_1d061c;
            case 0x1D0620u: goto label_1d0620;
            case 0x1D0624u: goto label_1d0624;
            case 0x1D0628u: goto label_1d0628;
            case 0x1D062Cu: goto label_1d062c;
            case 0x1D0630u: goto label_1d0630;
            case 0x1D0634u: goto label_1d0634;
            case 0x1D0638u: goto label_1d0638;
            case 0x1D063Cu: goto label_1d063c;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0644u: goto label_1d0644;
            case 0x1D0648u: goto label_1d0648;
            case 0x1D064Cu: goto label_1d064c;
            case 0x1D0650u: goto label_1d0650;
            case 0x1D0654u: goto label_1d0654;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D065Cu: goto label_1d065c;
            case 0x1D0660u: goto label_1d0660;
            case 0x1D0664u: goto label_1d0664;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0670u: goto label_1d0670;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D0678u: goto label_1d0678;
            case 0x1D067Cu: goto label_1d067c;
            case 0x1D0680u: goto label_1d0680;
            case 0x1D0684u: goto label_1d0684;
            case 0x1D0688u: goto label_1d0688;
            case 0x1D068Cu: goto label_1d068c;
            case 0x1D0690u: goto label_1d0690;
            case 0x1D0694u: goto label_1d0694;
            case 0x1D0698u: goto label_1d0698;
            case 0x1D069Cu: goto label_1d069c;
            case 0x1D06A0u: goto label_1d06a0;
            case 0x1D06A4u: goto label_1d06a4;
            case 0x1D06A8u: goto label_1d06a8;
            case 0x1D06ACu: goto label_1d06ac;
            case 0x1D06B0u: goto label_1d06b0;
            case 0x1D06B4u: goto label_1d06b4;
            case 0x1D06B8u: goto label_1d06b8;
            case 0x1D06BCu: goto label_1d06bc;
            case 0x1D06C0u: goto label_1d06c0;
            case 0x1D06C4u: goto label_1d06c4;
            case 0x1D06C8u: goto label_1d06c8;
            case 0x1D06CCu: goto label_1d06cc;
            case 0x1D06D0u: goto label_1d06d0;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D06D8u: goto label_1d06d8;
            case 0x1D06DCu: goto label_1d06dc;
            case 0x1D06E0u: goto label_1d06e0;
            case 0x1D06E4u: goto label_1d06e4;
            case 0x1D06E8u: goto label_1d06e8;
            case 0x1D06ECu: goto label_1d06ec;
            case 0x1D06F0u: goto label_1d06f0;
            case 0x1D06F4u: goto label_1d06f4;
            case 0x1D06F8u: goto label_1d06f8;
            case 0x1D06FCu: goto label_1d06fc;
            case 0x1D0700u: goto label_1d0700;
            case 0x1D0704u: goto label_1d0704;
            case 0x1D0708u: goto label_1d0708;
            case 0x1D070Cu: goto label_1d070c;
            case 0x1D0710u: goto label_1d0710;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D0718u: goto label_1d0718;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D0720u: goto label_1d0720;
            case 0x1D0724u: goto label_1d0724;
            case 0x1D0728u: goto label_1d0728;
            case 0x1D072Cu: goto label_1d072c;
            case 0x1D0730u: goto label_1d0730;
            case 0x1D0734u: goto label_1d0734;
            case 0x1D0738u: goto label_1d0738;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0744u: goto label_1d0744;
            case 0x1D0748u: goto label_1d0748;
            case 0x1D074Cu: goto label_1d074c;
            case 0x1D0750u: goto label_1d0750;
            case 0x1D0754u: goto label_1d0754;
            case 0x1D0758u: goto label_1d0758;
            case 0x1D075Cu: goto label_1d075c;
            case 0x1D0760u: goto label_1d0760;
            case 0x1D0764u: goto label_1d0764;
            case 0x1D0768u: goto label_1d0768;
            case 0x1D076Cu: goto label_1d076c;
            case 0x1D0770u: goto label_1d0770;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0778u: goto label_1d0778;
            case 0x1D077Cu: goto label_1d077c;
            case 0x1D0780u: goto label_1d0780;
            case 0x1D0784u: goto label_1d0784;
            case 0x1D0788u: goto label_1d0788;
            case 0x1D078Cu: goto label_1d078c;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D0794u: goto label_1d0794;
            case 0x1D0798u: goto label_1d0798;
            case 0x1D079Cu: goto label_1d079c;
            case 0x1D07A0u: goto label_1d07a0;
            case 0x1D07A4u: goto label_1d07a4;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07ACu: goto label_1d07ac;
            case 0x1D07B0u: goto label_1d07b0;
            case 0x1D07B4u: goto label_1d07b4;
            case 0x1D07B8u: goto label_1d07b8;
            case 0x1D07BCu: goto label_1d07bc;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07C4u: goto label_1d07c4;
            case 0x1D07C8u: goto label_1d07c8;
            case 0x1D07CCu: goto label_1d07cc;
            case 0x1D07D0u: goto label_1d07d0;
            case 0x1D07D4u: goto label_1d07d4;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07DCu: goto label_1d07dc;
            case 0x1D07E0u: goto label_1d07e0;
            case 0x1D07E4u: goto label_1d07e4;
            case 0x1D07E8u: goto label_1d07e8;
            case 0x1D07ECu: goto label_1d07ec;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D07F4u: goto label_1d07f4;
            case 0x1D07F8u: goto label_1d07f8;
            case 0x1D07FCu: goto label_1d07fc;
            case 0x1D0800u: goto label_1d0800;
            case 0x1D0804u: goto label_1d0804;
            case 0x1D0808u: goto label_1d0808;
            case 0x1D080Cu: goto label_1d080c;
            case 0x1D0810u: goto label_1d0810;
            case 0x1D0814u: goto label_1d0814;
            case 0x1D0818u: goto label_1d0818;
            case 0x1D081Cu: goto label_1d081c;
            case 0x1D0820u: goto label_1d0820;
            case 0x1D0824u: goto label_1d0824;
            case 0x1D0828u: goto label_1d0828;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0830u: goto label_1d0830;
            case 0x1D0834u: goto label_1d0834;
            case 0x1D0838u: goto label_1d0838;
            case 0x1D083Cu: goto label_1d083c;
            case 0x1D0840u: goto label_1d0840;
            case 0x1D0844u: goto label_1d0844;
            case 0x1D0848u: goto label_1d0848;
            case 0x1D084Cu: goto label_1d084c;
            case 0x1D0850u: goto label_1d0850;
            case 0x1D0854u: goto label_1d0854;
            case 0x1D0858u: goto label_1d0858;
            case 0x1D085Cu: goto label_1d085c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D0864u: goto label_1d0864;
            case 0x1D0868u: goto label_1d0868;
            case 0x1D086Cu: goto label_1d086c;
            case 0x1D0870u: goto label_1d0870;
            case 0x1D0874u: goto label_1d0874;
            case 0x1D0878u: goto label_1d0878;
            case 0x1D087Cu: goto label_1d087c;
            case 0x1D0880u: goto label_1d0880;
            case 0x1D0884u: goto label_1d0884;
            case 0x1D0888u: goto label_1d0888;
            case 0x1D088Cu: goto label_1d088c;
            case 0x1D0890u: goto label_1d0890;
            case 0x1D0894u: goto label_1d0894;
            case 0x1D0898u: goto label_1d0898;
            case 0x1D089Cu: goto label_1d089c;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08A4u: goto label_1d08a4;
            case 0x1D08A8u: goto label_1d08a8;
            case 0x1D08ACu: goto label_1d08ac;
            case 0x1D08B0u: goto label_1d08b0;
            case 0x1D08B4u: goto label_1d08b4;
            case 0x1D08B8u: goto label_1d08b8;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08C0u: goto label_1d08c0;
            case 0x1D08C4u: goto label_1d08c4;
            case 0x1D08C8u: goto label_1d08c8;
            case 0x1D08CCu: goto label_1d08cc;
            case 0x1D08D0u: goto label_1d08d0;
            case 0x1D08D4u: goto label_1d08d4;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08DCu: goto label_1d08dc;
            case 0x1D08E0u: goto label_1d08e0;
            case 0x1D08E4u: goto label_1d08e4;
            case 0x1D08E8u: goto label_1d08e8;
            case 0x1D08ECu: goto label_1d08ec;
            case 0x1D08F0u: goto label_1d08f0;
            case 0x1D08F4u: goto label_1d08f4;
            case 0x1D08F8u: goto label_1d08f8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0900u: goto label_1d0900;
            case 0x1D0904u: goto label_1d0904;
            case 0x1D0908u: goto label_1d0908;
            case 0x1D090Cu: goto label_1d090c;
            case 0x1D0910u: goto label_1d0910;
            case 0x1D0914u: goto label_1d0914;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D091Cu: goto label_1d091c;
            case 0x1D0920u: goto label_1d0920;
            case 0x1D0924u: goto label_1d0924;
            case 0x1D0928u: goto label_1d0928;
            case 0x1D092Cu: goto label_1d092c;
            case 0x1D0930u: goto label_1d0930;
            case 0x1D0934u: goto label_1d0934;
            case 0x1D0938u: goto label_1d0938;
            case 0x1D093Cu: goto label_1d093c;
            case 0x1D0940u: goto label_1d0940;
            case 0x1D0944u: goto label_1d0944;
            case 0x1D0948u: goto label_1d0948;
            case 0x1D094Cu: goto label_1d094c;
            case 0x1D0950u: goto label_1d0950;
            case 0x1D0954u: goto label_1d0954;
            case 0x1D0958u: goto label_1d0958;
            case 0x1D095Cu: goto label_1d095c;
            case 0x1D0960u: goto label_1d0960;
            case 0x1D0964u: goto label_1d0964;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D096Cu: goto label_1d096c;
            case 0x1D0970u: goto label_1d0970;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D0978u: goto label_1d0978;
            case 0x1D097Cu: goto label_1d097c;
            case 0x1D0980u: goto label_1d0980;
            case 0x1D0984u: goto label_1d0984;
            case 0x1D0988u: goto label_1d0988;
            case 0x1D098Cu: goto label_1d098c;
            case 0x1D0990u: goto label_1d0990;
            case 0x1D0994u: goto label_1d0994;
            case 0x1D0998u: goto label_1d0998;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09A4u: goto label_1d09a4;
            case 0x1D09A8u: goto label_1d09a8;
            case 0x1D09ACu: goto label_1d09ac;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09B4u: goto label_1d09b4;
            case 0x1D09B8u: goto label_1d09b8;
            case 0x1D09BCu: goto label_1d09bc;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09D0u: goto label_1d09d0;
            case 0x1D09D4u: goto label_1d09d4;
            case 0x1D09D8u: goto label_1d09d8;
            case 0x1D09DCu: goto label_1d09dc;
            case 0x1D09E0u: goto label_1d09e0;
            case 0x1D09E4u: goto label_1d09e4;
            case 0x1D09E8u: goto label_1d09e8;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D09F0u: goto label_1d09f0;
            case 0x1D09F4u: goto label_1d09f4;
            case 0x1D09F8u: goto label_1d09f8;
            case 0x1D09FCu: goto label_1d09fc;
            case 0x1D0A00u: goto label_1d0a00;
            case 0x1D0A04u: goto label_1d0a04;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A0Cu: goto label_1d0a0c;
            case 0x1D0A10u: goto label_1d0a10;
            case 0x1D0A14u: goto label_1d0a14;
            case 0x1D0A18u: goto label_1d0a18;
            case 0x1D0A1Cu: goto label_1d0a1c;
            case 0x1D0A20u: goto label_1d0a20;
            case 0x1D0A24u: goto label_1d0a24;
            case 0x1D0A28u: goto label_1d0a28;
            case 0x1D0A2Cu: goto label_1d0a2c;
            case 0x1D0A30u: goto label_1d0a30;
            case 0x1D0A34u: goto label_1d0a34;
            case 0x1D0A38u: goto label_1d0a38;
            case 0x1D0A3Cu: goto label_1d0a3c;
            case 0x1D0A40u: goto label_1d0a40;
            case 0x1D0A44u: goto label_1d0a44;
            case 0x1D0A48u: goto label_1d0a48;
            case 0x1D0A4Cu: goto label_1d0a4c;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0A54u: goto label_1d0a54;
            case 0x1D0A58u: goto label_1d0a58;
            case 0x1D0A5Cu: goto label_1d0a5c;
            case 0x1D0A60u: goto label_1d0a60;
            case 0x1D0A64u: goto label_1d0a64;
            case 0x1D0A68u: goto label_1d0a68;
            case 0x1D0A6Cu: goto label_1d0a6c;
            case 0x1D0A70u: goto label_1d0a70;
            case 0x1D0A74u: goto label_1d0a74;
            case 0x1D0A78u: goto label_1d0a78;
            case 0x1D0A7Cu: goto label_1d0a7c;
            case 0x1D0A80u: goto label_1d0a80;
            case 0x1D0A84u: goto label_1d0a84;
            case 0x1D0A88u: goto label_1d0a88;
            case 0x1D0A8Cu: goto label_1d0a8c;
            case 0x1D0A90u: goto label_1d0a90;
            case 0x1D0A94u: goto label_1d0a94;
            case 0x1D0A98u: goto label_1d0a98;
            case 0x1D0A9Cu: goto label_1d0a9c;
            case 0x1D0AA0u: goto label_1d0aa0;
            case 0x1D0AA4u: goto label_1d0aa4;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AACu: goto label_1d0aac;
            case 0x1D0AB0u: goto label_1d0ab0;
            case 0x1D0AB4u: goto label_1d0ab4;
            case 0x1D0AB8u: goto label_1d0ab8;
            case 0x1D0ABCu: goto label_1d0abc;
            case 0x1D0AC0u: goto label_1d0ac0;
            case 0x1D0AC4u: goto label_1d0ac4;
            case 0x1D0AC8u: goto label_1d0ac8;
            case 0x1D0ACCu: goto label_1d0acc;
            case 0x1D0AD0u: goto label_1d0ad0;
            case 0x1D0AD4u: goto label_1d0ad4;
            case 0x1D0AD8u: goto label_1d0ad8;
            case 0x1D0ADCu: goto label_1d0adc;
            case 0x1D0AE0u: goto label_1d0ae0;
            case 0x1D0AE4u: goto label_1d0ae4;
            case 0x1D0AE8u: goto label_1d0ae8;
            case 0x1D0AECu: goto label_1d0aec;
            case 0x1D0AF0u: goto label_1d0af0;
            case 0x1D0AF4u: goto label_1d0af4;
            case 0x1D0AF8u: goto label_1d0af8;
            case 0x1D0AFCu: goto label_1d0afc;
            case 0x1D0B00u: goto label_1d0b00;
            case 0x1D0B04u: goto label_1d0b04;
            case 0x1D0B08u: goto label_1d0b08;
            case 0x1D0B0Cu: goto label_1d0b0c;
            case 0x1D0B10u: goto label_1d0b10;
            case 0x1D0B14u: goto label_1d0b14;
            case 0x1D0B18u: goto label_1d0b18;
            case 0x1D0B1Cu: goto label_1d0b1c;
            case 0x1D0B20u: goto label_1d0b20;
            case 0x1D0B24u: goto label_1d0b24;
            case 0x1D0B28u: goto label_1d0b28;
            case 0x1D0B2Cu: goto label_1d0b2c;
            case 0x1D0B30u: goto label_1d0b30;
            case 0x1D0B34u: goto label_1d0b34;
            case 0x1D0B38u: goto label_1d0b38;
            case 0x1D0B3Cu: goto label_1d0b3c;
            case 0x1D0B40u: goto label_1d0b40;
            case 0x1D0B44u: goto label_1d0b44;
            case 0x1D0B48u: goto label_1d0b48;
            case 0x1D0B4Cu: goto label_1d0b4c;
            case 0x1D0B50u: goto label_1d0b50;
            case 0x1D0B54u: goto label_1d0b54;
            case 0x1D0B58u: goto label_1d0b58;
            case 0x1D0B5Cu: goto label_1d0b5c;
            case 0x1D0B60u: goto label_1d0b60;
            case 0x1D0B64u: goto label_1d0b64;
            case 0x1D0B68u: goto label_1d0b68;
            case 0x1D0B6Cu: goto label_1d0b6c;
            case 0x1D0B70u: goto label_1d0b70;
            case 0x1D0B74u: goto label_1d0b74;
            case 0x1D0B78u: goto label_1d0b78;
            case 0x1D0B7Cu: goto label_1d0b7c;
            case 0x1D0B80u: goto label_1d0b80;
            case 0x1D0B84u: goto label_1d0b84;
            case 0x1D0B88u: goto label_1d0b88;
            case 0x1D0B8Cu: goto label_1d0b8c;
            case 0x1D0B90u: goto label_1d0b90;
            case 0x1D0B94u: goto label_1d0b94;
            case 0x1D0B98u: goto label_1d0b98;
            case 0x1D0B9Cu: goto label_1d0b9c;
            case 0x1D0BA0u: goto label_1d0ba0;
            case 0x1D0BA4u: goto label_1d0ba4;
            case 0x1D0BA8u: goto label_1d0ba8;
            case 0x1D0BACu: goto label_1d0bac;
            case 0x1D0BB0u: goto label_1d0bb0;
            case 0x1D0BB4u: goto label_1d0bb4;
            case 0x1D0BB8u: goto label_1d0bb8;
            case 0x1D0BBCu: goto label_1d0bbc;
            case 0x1D0BC0u: goto label_1d0bc0;
            case 0x1D0BC4u: goto label_1d0bc4;
            case 0x1D0BC8u: goto label_1d0bc8;
            case 0x1D0BCCu: goto label_1d0bcc;
            case 0x1D0BD0u: goto label_1d0bd0;
            case 0x1D0BD4u: goto label_1d0bd4;
            case 0x1D0BD8u: goto label_1d0bd8;
            case 0x1D0BDCu: goto label_1d0bdc;
            case 0x1D0BE0u: goto label_1d0be0;
            case 0x1D0BE4u: goto label_1d0be4;
            case 0x1D0BE8u: goto label_1d0be8;
            case 0x1D0BECu: goto label_1d0bec;
            case 0x1D0BF0u: goto label_1d0bf0;
            case 0x1D0BF4u: goto label_1d0bf4;
            case 0x1D0BF8u: goto label_1d0bf8;
            case 0x1D0BFCu: goto label_1d0bfc;
            case 0x1D0C00u: goto label_1d0c00;
            case 0x1D0C04u: goto label_1d0c04;
            case 0x1D0C08u: goto label_1d0c08;
            case 0x1D0C0Cu: goto label_1d0c0c;
            case 0x1D0C10u: goto label_1d0c10;
            case 0x1D0C14u: goto label_1d0c14;
            case 0x1D0C18u: goto label_1d0c18;
            case 0x1D0C1Cu: goto label_1d0c1c;
            case 0x1D0C20u: goto label_1d0c20;
            case 0x1D0C24u: goto label_1d0c24;
            case 0x1D0C28u: goto label_1d0c28;
            case 0x1D0C2Cu: goto label_1d0c2c;
            case 0x1D0C30u: goto label_1d0c30;
            case 0x1D0C34u: goto label_1d0c34;
            case 0x1D0C38u: goto label_1d0c38;
            case 0x1D0C3Cu: goto label_1d0c3c;
            case 0x1D0C40u: goto label_1d0c40;
            case 0x1D0C44u: goto label_1d0c44;
            case 0x1D0C48u: goto label_1d0c48;
            case 0x1D0C4Cu: goto label_1d0c4c;
            case 0x1D0C50u: goto label_1d0c50;
            case 0x1D0C54u: goto label_1d0c54;
            case 0x1D0C58u: goto label_1d0c58;
            case 0x1D0C5Cu: goto label_1d0c5c;
            case 0x1D0C60u: goto label_1d0c60;
            case 0x1D0C64u: goto label_1d0c64;
            case 0x1D0C68u: goto label_1d0c68;
            case 0x1D0C6Cu: goto label_1d0c6c;
            case 0x1D0C70u: goto label_1d0c70;
            case 0x1D0C74u: goto label_1d0c74;
            case 0x1D0C78u: goto label_1d0c78;
            case 0x1D0C7Cu: goto label_1d0c7c;
            case 0x1D0C80u: goto label_1d0c80;
            case 0x1D0C84u: goto label_1d0c84;
            case 0x1D0C88u: goto label_1d0c88;
            case 0x1D0C8Cu: goto label_1d0c8c;
            case 0x1D0C90u: goto label_1d0c90;
            case 0x1D0C94u: goto label_1d0c94;
            case 0x1D0C98u: goto label_1d0c98;
            case 0x1D0C9Cu: goto label_1d0c9c;
            case 0x1D0CA0u: goto label_1d0ca0;
            case 0x1D0CA4u: goto label_1d0ca4;
            case 0x1D0CA8u: goto label_1d0ca8;
            case 0x1D0CACu: goto label_1d0cac;
            case 0x1D0CB0u: goto label_1d0cb0;
            case 0x1D0CB4u: goto label_1d0cb4;
            case 0x1D0CB8u: goto label_1d0cb8;
            case 0x1D0CBCu: goto label_1d0cbc;
            case 0x1D0CC0u: goto label_1d0cc0;
            case 0x1D0CC4u: goto label_1d0cc4;
            case 0x1D0CC8u: goto label_1d0cc8;
            case 0x1D0CCCu: goto label_1d0ccc;
            case 0x1D0CD0u: goto label_1d0cd0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1d0ccc:
    ctx->pc = 0x1D0CD4u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_06Move
// Address: 0x1aeca0 - 0x1af0a8
void En6_06Move_0x1aeca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_06Move_0x1aeca0");
#endif

    ctx->pc = 0x1aeca0u;

label_1aeca0:
    // 0x1aeca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aeca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1aeca4:
    // 0x1aeca4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1aeca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1aeca8:
    // 0x1aeca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aeca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1aecac:
    // 0x1aecac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aecacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aecb0:
    // 0x1aecb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aecb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1aecb4:
    // 0x1aecb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aecb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aecb8:
    // 0x1aecb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1aecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aecbc:
    // 0x1aecbc: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1aecbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aecc0:
    // 0x1aecc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aecc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aecc4:
    // 0x1aecc4: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1aecc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aecc8:
    // 0x1aecc8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1aecc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1aeccc:
    // 0x1aeccc: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1aecccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1aecd0:
    // 0x1aecd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1aecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aecd4:
    // 0x1aecd4: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1aecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aecd8:
    // 0x1aecd8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1aecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aecdc:
    // 0x1aecdc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1aecdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1aece0:
    // 0x1aece0: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1aece0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1aece4:
    // 0x1aece4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1aece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aece8:
    // 0x1aece8: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1aece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aecec:
    // 0x1aecec: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1aececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aecf0:
    // 0x1aecf0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1aecf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1aecf4:
    // 0x1aecf4: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1aecf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1aecf8:
    // 0x1aecf8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1aecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aecfc:
    // 0x1aecfc: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1aecfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aed00:
    // 0x1aed00: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1aed00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aed04:
    // 0x1aed04: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1aed04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1aed08:
    // 0x1aed08: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1aed08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1aed0c:
    // 0x1aed0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1aed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aed10:
    // 0x1aed10: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1aed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aed14:
    // 0x1aed14: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1aed14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aed18:
    // 0x1aed18: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1aed18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1aed1c:
    // 0x1aed1c: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1aed1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1aed20:
    // 0x1aed20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1aed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aed24:
    // 0x1aed24: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1aed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aed28:
    // 0x1aed28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aed28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aed2c:
    // 0x1aed2c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1aed30:
    if (ctx->pc == 0x1AED30u) {
        ctx->pc = 0x1AED30u;
            // 0x1aed30: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1AED34u;
        goto label_1aed34;
    }
    ctx->pc = 0x1AED2Cu;
    {
        const bool branch_taken_0x1aed2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AED30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED2Cu;
            // 0x1aed30: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed2c) {
            ctx->pc = 0x1AED50u;
            goto label_1aed50;
        }
    }
    ctx->pc = 0x1AED34u;
label_1aed34:
    // 0x1aed34: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1aed34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1aed38:
    // 0x1aed38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aed38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aed3c:
    // 0x1aed3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aed3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aed40:
    // 0x1aed40: 0x0  nop
    ctx->pc = 0x1aed40u;
    // NOP
label_1aed44:
    // 0x1aed44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aed44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1aed48:
    // 0x1aed48: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1aed48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1aed4c:
    // 0x1aed4c: 0x0  nop
    ctx->pc = 0x1aed4cu;
    // NOP
label_1aed50:
    // 0x1aed50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aed54:
    // 0x1aed54: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1aed54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1aed58:
    // 0x1aed58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aed58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aed5c:
    // 0x1aed5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aed5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aed60:
    // 0x1aed60: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1aed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aed64:
    // 0x1aed64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aed64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aed68:
    // 0x1aed68: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1aed6c:
    if (ctx->pc == 0x1AED6Cu) {
        ctx->pc = 0x1AED6Cu;
            // 0x1aed6c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1AED70u;
        goto label_1aed70;
    }
    ctx->pc = 0x1AED68u;
    {
        const bool branch_taken_0x1aed68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AED6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED68u;
            // 0x1aed6c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed68) {
            ctx->pc = 0x1AED88u;
            goto label_1aed88;
        }
    }
    ctx->pc = 0x1AED70u;
label_1aed70:
    // 0x1aed70: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1aed70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1aed74:
    // 0x1aed74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aed74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aed78:
    // 0x1aed78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aed78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aed7c:
    // 0x1aed7c: 0x0  nop
    ctx->pc = 0x1aed7cu;
    // NOP
label_1aed80:
    // 0x1aed80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1aed80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1aed84:
    // 0x1aed84: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1aed84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1aed88:
    // 0x1aed88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aed8c:
    // 0x1aed8c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1aed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1aed90:
    // 0x1aed90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aed90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aed94:
    // 0x1aed94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aed94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aed98:
    // 0x1aed98: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1aed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aed9c:
    // 0x1aed9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aed9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aeda0:
    // 0x1aeda0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1aeda4:
    if (ctx->pc == 0x1AEDA4u) {
        ctx->pc = 0x1AEDA4u;
            // 0x1aeda4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1AEDA8u;
        goto label_1aeda8;
    }
    ctx->pc = 0x1AEDA0u;
    {
        const bool branch_taken_0x1aeda0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AEDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEDA0u;
            // 0x1aeda4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeda0) {
            ctx->pc = 0x1AEDC0u;
            goto label_1aedc0;
        }
    }
    ctx->pc = 0x1AEDA8u;
label_1aeda8:
    // 0x1aeda8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1aeda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1aedac:
    // 0x1aedac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aedacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aedb0:
    // 0x1aedb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aedb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aedb4:
    // 0x1aedb4: 0x0  nop
    ctx->pc = 0x1aedb4u;
    // NOP
label_1aedb8:
    // 0x1aedb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aedb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1aedbc:
    // 0x1aedbc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1aedbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1aedc0:
    // 0x1aedc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aedc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aedc4:
    // 0x1aedc4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1aedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1aedc8:
    // 0x1aedc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aedc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aedcc:
    // 0x1aedcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aedccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aedd0:
    // 0x1aedd0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1aedd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aedd4:
    // 0x1aedd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aedd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aedd8:
    // 0x1aedd8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1aeddc:
    if (ctx->pc == 0x1AEDDCu) {
        ctx->pc = 0x1AEDDCu;
            // 0x1aeddc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1AEDE0u;
        goto label_1aede0;
    }
    ctx->pc = 0x1AEDD8u;
    {
        const bool branch_taken_0x1aedd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AEDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEDD8u;
            // 0x1aeddc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedd8) {
            ctx->pc = 0x1AEDF8u;
            goto label_1aedf8;
        }
    }
    ctx->pc = 0x1AEDE0u;
label_1aede0:
    // 0x1aede0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1aede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1aede4:
    // 0x1aede4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aede4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aede8:
    // 0x1aede8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aede8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aedec:
    // 0x1aedec: 0x0  nop
    ctx->pc = 0x1aedecu;
    // NOP
label_1aedf0:
    // 0x1aedf0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1aedf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1aedf4:
    // 0x1aedf4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1aedf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1aedf8:
    // 0x1aedf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aedf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aedfc:
    // 0x1aedfc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1aedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1aee00:
    // 0x1aee00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aee00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aee04:
    // 0x1aee04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aee04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aee08:
    // 0x1aee08: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1aee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aee0c:
    // 0x1aee0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aee0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aee10:
    // 0x1aee10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1aee14:
    if (ctx->pc == 0x1AEE14u) {
        ctx->pc = 0x1AEE14u;
            // 0x1aee14: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1AEE18u;
        goto label_1aee18;
    }
    ctx->pc = 0x1AEE10u;
    {
        const bool branch_taken_0x1aee10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AEE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE10u;
            // 0x1aee14: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee10) {
            ctx->pc = 0x1AEE30u;
            goto label_1aee30;
        }
    }
    ctx->pc = 0x1AEE18u;
label_1aee18:
    // 0x1aee18: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1aee18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1aee1c:
    // 0x1aee1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aee1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aee20:
    // 0x1aee20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aee20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aee24:
    // 0x1aee24: 0x0  nop
    ctx->pc = 0x1aee24u;
    // NOP
label_1aee28:
    // 0x1aee28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aee28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1aee2c:
    // 0x1aee2c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1aee2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1aee30:
    // 0x1aee30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aee34:
    // 0x1aee34: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1aee34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1aee38:
    // 0x1aee38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aee38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aee3c:
    // 0x1aee3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aee3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aee40:
    // 0x1aee40: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1aee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aee44:
    // 0x1aee44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aee44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aee48:
    // 0x1aee48: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1aee4c:
    if (ctx->pc == 0x1AEE4Cu) {
        ctx->pc = 0x1AEE4Cu;
            // 0x1aee4c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1AEE50u;
        goto label_1aee50;
    }
    ctx->pc = 0x1AEE48u;
    {
        const bool branch_taken_0x1aee48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AEE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE48u;
            // 0x1aee4c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee48) {
            ctx->pc = 0x1AEE68u;
            goto label_1aee68;
        }
    }
    ctx->pc = 0x1AEE50u;
label_1aee50:
    // 0x1aee50: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1aee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1aee54:
    // 0x1aee54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aee54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aee58:
    // 0x1aee58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aee58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aee5c:
    // 0x1aee5c: 0x0  nop
    ctx->pc = 0x1aee5cu;
    // NOP
label_1aee60:
    // 0x1aee60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1aee60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1aee64:
    // 0x1aee64: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1aee64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1aee68:
    // 0x1aee68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aee6c:
    // 0x1aee6c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1aee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1aee70:
    // 0x1aee70: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1aee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1aee74:
    // 0x1aee74: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1aee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1aee78:
    // 0x1aee78: 0xc06bc2c  jal         func_1AF0B0
label_1aee7c:
    if (ctx->pc == 0x1AEE7Cu) {
        ctx->pc = 0x1AEE7Cu;
            // 0x1aee7c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x1AEE80u;
        goto label_1aee80;
    }
    ctx->pc = 0x1AEE78u;
    SET_GPR_U32(ctx, 31, 0x1AEE80u);
    ctx->pc = 0x1AEE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE78u;
            // 0x1aee7c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF0B0u;
    if (runtime->hasFunction(0x1AF0B0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE80u; }
        if (ctx->pc != 0x1AEE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1af0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE80u; }
        if (ctx->pc != 0x1AEE80u) { return; }
    }
    ctx->pc = 0x1AEE80u;
label_1aee80:
    // 0x1aee80: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1aee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1aee84:
    // 0x1aee84: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1aee84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1aee88:
    // 0x1aee88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1aee88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1aee8c:
    // 0x1aee8c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1aee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1aee90:
    // 0x1aee90: 0xc04b788  jal         func_12DE20
label_1aee94:
    if (ctx->pc == 0x1AEE94u) {
        ctx->pc = 0x1AEE94u;
            // 0x1aee94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AEE98u;
        goto label_1aee98;
    }
    ctx->pc = 0x1AEE90u;
    SET_GPR_U32(ctx, 31, 0x1AEE98u);
    ctx->pc = 0x1AEE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE90u;
            // 0x1aee94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE98u; }
        if (ctx->pc != 0x1AEE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE98u; }
        if (ctx->pc != 0x1AEE98u) { return; }
    }
    ctx->pc = 0x1AEE98u;
label_1aee98:
    // 0x1aee98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1aee98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aee9c:
    // 0x1aee9c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1aee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1aeea0:
    // 0x1aeea0: 0xc04b7da  jal         func_12DF68
label_1aeea4:
    if (ctx->pc == 0x1AEEA4u) {
        ctx->pc = 0x1AEEA4u;
            // 0x1aeea4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEEA8u;
        goto label_1aeea8;
    }
    ctx->pc = 0x1AEEA0u;
    SET_GPR_U32(ctx, 31, 0x1AEEA8u);
    ctx->pc = 0x1AEEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEA0u;
            // 0x1aeea4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEA8u; }
        if (ctx->pc != 0x1AEEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEA8u; }
        if (ctx->pc != 0x1AEEA8u) { return; }
    }
    ctx->pc = 0x1AEEA8u;
label_1aeea8:
    // 0x1aeea8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1aeea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aeeac:
    // 0x1aeeac: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1aeeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1aeeb0:
    // 0x1aeeb0: 0xc04b804  jal         func_12E010
label_1aeeb4:
    if (ctx->pc == 0x1AEEB4u) {
        ctx->pc = 0x1AEEB4u;
            // 0x1aeeb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEEB8u;
        goto label_1aeeb8;
    }
    ctx->pc = 0x1AEEB0u;
    SET_GPR_U32(ctx, 31, 0x1AEEB8u);
    ctx->pc = 0x1AEEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEB0u;
            // 0x1aeeb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEB8u; }
        if (ctx->pc != 0x1AEEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEB8u; }
        if (ctx->pc != 0x1AEEB8u) { return; }
    }
    ctx->pc = 0x1AEEB8u;
label_1aeeb8:
    // 0x1aeeb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1aeeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aeebc:
    // 0x1aeebc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1aeebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1aeec0:
    // 0x1aeec0: 0xc04b7b0  jal         func_12DEC0
label_1aeec4:
    if (ctx->pc == 0x1AEEC4u) {
        ctx->pc = 0x1AEEC4u;
            // 0x1aeec4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEEC8u;
        goto label_1aeec8;
    }
    ctx->pc = 0x1AEEC0u;
    SET_GPR_U32(ctx, 31, 0x1AEEC8u);
    ctx->pc = 0x1AEEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEC0u;
            // 0x1aeec4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEC8u; }
        if (ctx->pc != 0x1AEEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEC8u; }
        if (ctx->pc != 0x1AEEC8u) { return; }
    }
    ctx->pc = 0x1AEEC8u;
label_1aeec8:
    // 0x1aeec8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1aeec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aeecc:
    // 0x1aeecc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1aeeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aeed0:
    // 0x1aeed0: 0xc04b75e  jal         func_12DD78
label_1aeed4:
    if (ctx->pc == 0x1AEED4u) {
        ctx->pc = 0x1AEED4u;
            // 0x1aeed4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1AEED8u;
        goto label_1aeed8;
    }
    ctx->pc = 0x1AEED0u;
    SET_GPR_U32(ctx, 31, 0x1AEED8u);
    ctx->pc = 0x1AEED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEED0u;
            // 0x1aeed4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEED8u; }
        if (ctx->pc != 0x1AEED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEED8u; }
        if (ctx->pc != 0x1AEED8u) { return; }
    }
    ctx->pc = 0x1AEED8u;
label_1aeed8:
    // 0x1aeed8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1aeed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1aeedc:
    // 0x1aeedc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1aeedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1aeee0:
    // 0x1aeee0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1aeee0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1aeee4:
    // 0x1aeee4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1aeee8:
    if (ctx->pc == 0x1AEEE8u) {
        ctx->pc = 0x1AEEECu;
        goto label_1aeeec;
    }
    ctx->pc = 0x1AEEE4u;
    {
        const bool branch_taken_0x1aeee4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeee4) {
            ctx->pc = 0x1AEF38u;
            goto label_1aef38;
        }
    }
    ctx->pc = 0x1AEEECu;
label_1aeeec:
    // 0x1aeeec: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1aeeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1aeef0:
    // 0x1aeef0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1aeef4:
    if (ctx->pc == 0x1AEEF4u) {
        ctx->pc = 0x1AEEF8u;
        goto label_1aeef8;
    }
    ctx->pc = 0x1AEEF0u;
    {
        const bool branch_taken_0x1aeef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeef0) {
            ctx->pc = 0x1AEF08u;
            goto label_1aef08;
        }
    }
    ctx->pc = 0x1AEEF8u;
label_1aeef8:
    // 0x1aeef8: 0xc0604f0  jal         func_1813C0
label_1aeefc:
    if (ctx->pc == 0x1AEEFCu) {
        ctx->pc = 0x1AEEFCu;
            // 0x1aeefc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AEF00u;
        goto label_1aef00;
    }
    ctx->pc = 0x1AEEF8u;
    SET_GPR_U32(ctx, 31, 0x1AEF00u);
    ctx->pc = 0x1AEEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEF8u;
            // 0x1aeefc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF00u; }
        if (ctx->pc != 0x1AEF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF00u; }
        if (ctx->pc != 0x1AEF00u) { return; }
    }
    ctx->pc = 0x1AEF00u;
label_1aef00:
    // 0x1aef00: 0x10000003  b           . + 4 + (0x3 << 2)
label_1aef04:
    if (ctx->pc == 0x1AEF04u) {
        ctx->pc = 0x1AEF08u;
        goto label_1aef08;
    }
    ctx->pc = 0x1AEF00u;
    {
        const bool branch_taken_0x1aef00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aef00) {
            ctx->pc = 0x1AEF10u;
            goto label_1aef10;
        }
    }
    ctx->pc = 0x1AEF08u;
label_1aef08:
    // 0x1aef08: 0xc0604dc  jal         func_181370
label_1aef0c:
    if (ctx->pc == 0x1AEF0Cu) {
        ctx->pc = 0x1AEF0Cu;
            // 0x1aef0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AEF10u;
        goto label_1aef10;
    }
    ctx->pc = 0x1AEF08u;
    SET_GPR_U32(ctx, 31, 0x1AEF10u);
    ctx->pc = 0x1AEF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF08u;
            // 0x1aef0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF10u; }
        if (ctx->pc != 0x1AEF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF10u; }
        if (ctx->pc != 0x1AEF10u) { return; }
    }
    ctx->pc = 0x1AEF10u;
label_1aef10:
    // 0x1aef10: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1aef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1aef14:
    // 0x1aef14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aef18:
    if (ctx->pc == 0x1AEF18u) {
        ctx->pc = 0x1AEF1Cu;
        goto label_1aef1c;
    }
    ctx->pc = 0x1AEF14u;
    {
        const bool branch_taken_0x1aef14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aef14) {
            ctx->pc = 0x1AEF28u;
            goto label_1aef28;
        }
    }
    ctx->pc = 0x1AEF1Cu;
label_1aef1c:
    // 0x1aef1c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1aef20:
    if (ctx->pc == 0x1AEF20u) {
        ctx->pc = 0x1AEF20u;
            // 0x1aef20: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1AEF24u;
        goto label_1aef24;
    }
    ctx->pc = 0x1AEF1Cu;
    {
        const bool branch_taken_0x1aef1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF1Cu;
            // 0x1aef20: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef1c) {
            ctx->pc = 0x1AEF48u;
            goto label_1aef48;
        }
    }
    ctx->pc = 0x1AEF24u;
label_1aef24:
    // 0x1aef24: 0x0  nop
    ctx->pc = 0x1aef24u;
    // NOP
label_1aef28:
    // 0x1aef28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aef2c:
    // 0x1aef2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1aef30:
    if (ctx->pc == 0x1AEF30u) {
        ctx->pc = 0x1AEF30u;
            // 0x1aef30: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1AEF34u;
        goto label_1aef34;
    }
    ctx->pc = 0x1AEF2Cu;
    {
        const bool branch_taken_0x1aef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF2Cu;
            // 0x1aef30: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef2c) {
            ctx->pc = 0x1AEF48u;
            goto label_1aef48;
        }
    }
    ctx->pc = 0x1AEF34u;
label_1aef34:
    // 0x1aef34: 0x0  nop
    ctx->pc = 0x1aef34u;
    // NOP
label_1aef38:
    // 0x1aef38: 0xc0604dc  jal         func_181370
label_1aef3c:
    if (ctx->pc == 0x1AEF3Cu) {
        ctx->pc = 0x1AEF3Cu;
            // 0x1aef3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AEF40u;
        goto label_1aef40;
    }
    ctx->pc = 0x1AEF38u;
    SET_GPR_U32(ctx, 31, 0x1AEF40u);
    ctx->pc = 0x1AEF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF38u;
            // 0x1aef3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF40u; }
        if (ctx->pc != 0x1AEF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF40u; }
        if (ctx->pc != 0x1AEF40u) { return; }
    }
    ctx->pc = 0x1AEF40u;
label_1aef40:
    // 0x1aef40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aef40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aef44:
    // 0x1aef44: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1aef44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1aef48:
    // 0x1aef48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1aef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1aef4c:
    // 0x1aef4c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1aef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1aef50:
    // 0x1aef50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aef50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1aef54:
    // 0x1aef54: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1aef54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1aef58:
    // 0x1aef58: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1aef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1aef5c:
    // 0x1aef5c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1aef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1aef60:
    // 0x1aef60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aef60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aef64:
    // 0x1aef64: 0x0  nop
    ctx->pc = 0x1aef64u;
    // NOP
label_1aef68:
    // 0x1aef68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aef68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aef6c:
    // 0x1aef6c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1aef6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1aef70:
    // 0x1aef70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1aef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1aef74:
    // 0x1aef74: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1aef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1aef78:
    // 0x1aef78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aef78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aef7c:
    // 0x1aef7c: 0x0  nop
    ctx->pc = 0x1aef7cu;
    // NOP
label_1aef80:
    // 0x1aef80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aef80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aef84:
    // 0x1aef84: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1aef84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1aef88:
    // 0x1aef88: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1aef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1aef8c:
    // 0x1aef8c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1aef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1aef90:
    // 0x1aef90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aef90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aef94:
    // 0x1aef94: 0x0  nop
    ctx->pc = 0x1aef94u;
    // NOP
label_1aef98:
    // 0x1aef98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aef98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aef9c:
    // 0x1aef9c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1aef9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1aefa0:
    // 0x1aefa0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1aefa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1aefa4:
    // 0x1aefa4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1aefa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1aefa8:
    // 0x1aefa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aefa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aefac:
    // 0x1aefac: 0x0  nop
    ctx->pc = 0x1aefacu;
    // NOP
label_1aefb0:
    // 0x1aefb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aefb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aefb4:
    // 0x1aefb4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1aefb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1aefb8:
    // 0x1aefb8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1aefb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aefbc:
    // 0x1aefbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1aefbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1aefc0:
    // 0x1aefc0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1aefc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1aefc4:
    // 0x1aefc4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aefc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aefc8:
    // 0x1aefc8: 0xc4630124  lwc1        $f3, 0x124($v1)
    ctx->pc = 0x1aefc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1aefcc:
    // 0x1aefcc: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1aefccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aefd0:
    // 0x1aefd0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1aefd4:
    if (ctx->pc == 0x1AEFD4u) {
        ctx->pc = 0x1AEFD4u;
            // 0x1aefd4: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1AEFD8u;
        goto label_1aefd8;
    }
    ctx->pc = 0x1AEFD0u;
    {
        const bool branch_taken_0x1aefd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AEFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEFD0u;
            // 0x1aefd4: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aefd0) {
            ctx->pc = 0x1AF008u;
            goto label_1af008;
        }
    }
    ctx->pc = 0x1AEFD8u;
label_1aefd8:
    // 0x1aefd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aefd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aefdc:
    // 0x1aefdc: 0x0  nop
    ctx->pc = 0x1aefdcu;
    // NOP
label_1aefe0:
    // 0x1aefe0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1aefe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aefe4:
    // 0x1aefe4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1aefe8:
    if (ctx->pc == 0x1AEFE8u) {
        ctx->pc = 0x1AEFECu;
        goto label_1aefec;
    }
    ctx->pc = 0x1AEFE4u;
    {
        const bool branch_taken_0x1aefe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aefe4) {
            ctx->pc = 0x1AF008u;
            goto label_1af008;
        }
    }
    ctx->pc = 0x1AEFECu;
label_1aefec:
    // 0x1aefec: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x1aefecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aeff0:
    // 0x1aeff0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1aeff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aeff4:
    // 0x1aeff4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1aeff8:
    if (ctx->pc == 0x1AEFF8u) {
        ctx->pc = 0x1AEFFCu;
        goto label_1aeffc;
    }
    ctx->pc = 0x1AEFF4u;
    {
        const bool branch_taken_0x1aeff4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aeff4) {
            ctx->pc = 0x1AF008u;
            goto label_1af008;
        }
    }
    ctx->pc = 0x1AEFFCu;
label_1aeffc:
    // 0x1aeffc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1aeffcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af000:
    // 0x1af000: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1af004:
    if (ctx->pc == 0x1AF004u) {
        ctx->pc = 0x1AF008u;
        goto label_1af008;
    }
    ctx->pc = 0x1AF000u;
    {
        const bool branch_taken_0x1af000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1af000) {
            ctx->pc = 0x1AF020u;
            goto label_1af020;
        }
    }
    ctx->pc = 0x1AF008u;
label_1af008:
    // 0x1af008: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1af008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1af00c:
    // 0x1af00c: 0x40f809  jalr        $v0
label_1af010:
    if (ctx->pc == 0x1AF010u) {
        ctx->pc = 0x1AF010u;
            // 0x1af010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AF014u;
        goto label_1af014;
    }
    ctx->pc = 0x1AF00Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AF014u);
        ctx->pc = 0x1AF010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF00Cu;
            // 0x1af010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AECA0u: goto label_1aeca0;
            case 0x1AECA4u: goto label_1aeca4;
            case 0x1AECA8u: goto label_1aeca8;
            case 0x1AECACu: goto label_1aecac;
            case 0x1AECB0u: goto label_1aecb0;
            case 0x1AECB4u: goto label_1aecb4;
            case 0x1AECB8u: goto label_1aecb8;
            case 0x1AECBCu: goto label_1aecbc;
            case 0x1AECC0u: goto label_1aecc0;
            case 0x1AECC4u: goto label_1aecc4;
            case 0x1AECC8u: goto label_1aecc8;
            case 0x1AECCCu: goto label_1aeccc;
            case 0x1AECD0u: goto label_1aecd0;
            case 0x1AECD4u: goto label_1aecd4;
            case 0x1AECD8u: goto label_1aecd8;
            case 0x1AECDCu: goto label_1aecdc;
            case 0x1AECE0u: goto label_1aece0;
            case 0x1AECE4u: goto label_1aece4;
            case 0x1AECE8u: goto label_1aece8;
            case 0x1AECECu: goto label_1aecec;
            case 0x1AECF0u: goto label_1aecf0;
            case 0x1AECF4u: goto label_1aecf4;
            case 0x1AECF8u: goto label_1aecf8;
            case 0x1AECFCu: goto label_1aecfc;
            case 0x1AED00u: goto label_1aed00;
            case 0x1AED04u: goto label_1aed04;
            case 0x1AED08u: goto label_1aed08;
            case 0x1AED0Cu: goto label_1aed0c;
            case 0x1AED10u: goto label_1aed10;
            case 0x1AED14u: goto label_1aed14;
            case 0x1AED18u: goto label_1aed18;
            case 0x1AED1Cu: goto label_1aed1c;
            case 0x1AED20u: goto label_1aed20;
            case 0x1AED24u: goto label_1aed24;
            case 0x1AED28u: goto label_1aed28;
            case 0x1AED2Cu: goto label_1aed2c;
            case 0x1AED30u: goto label_1aed30;
            case 0x1AED34u: goto label_1aed34;
            case 0x1AED38u: goto label_1aed38;
            case 0x1AED3Cu: goto label_1aed3c;
            case 0x1AED40u: goto label_1aed40;
            case 0x1AED44u: goto label_1aed44;
            case 0x1AED48u: goto label_1aed48;
            case 0x1AED4Cu: goto label_1aed4c;
            case 0x1AED50u: goto label_1aed50;
            case 0x1AED54u: goto label_1aed54;
            case 0x1AED58u: goto label_1aed58;
            case 0x1AED5Cu: goto label_1aed5c;
            case 0x1AED60u: goto label_1aed60;
            case 0x1AED64u: goto label_1aed64;
            case 0x1AED68u: goto label_1aed68;
            case 0x1AED6Cu: goto label_1aed6c;
            case 0x1AED70u: goto label_1aed70;
            case 0x1AED74u: goto label_1aed74;
            case 0x1AED78u: goto label_1aed78;
            case 0x1AED7Cu: goto label_1aed7c;
            case 0x1AED80u: goto label_1aed80;
            case 0x1AED84u: goto label_1aed84;
            case 0x1AED88u: goto label_1aed88;
            case 0x1AED8Cu: goto label_1aed8c;
            case 0x1AED90u: goto label_1aed90;
            case 0x1AED94u: goto label_1aed94;
            case 0x1AED98u: goto label_1aed98;
            case 0x1AED9Cu: goto label_1aed9c;
            case 0x1AEDA0u: goto label_1aeda0;
            case 0x1AEDA4u: goto label_1aeda4;
            case 0x1AEDA8u: goto label_1aeda8;
            case 0x1AEDACu: goto label_1aedac;
            case 0x1AEDB0u: goto label_1aedb0;
            case 0x1AEDB4u: goto label_1aedb4;
            case 0x1AEDB8u: goto label_1aedb8;
            case 0x1AEDBCu: goto label_1aedbc;
            case 0x1AEDC0u: goto label_1aedc0;
            case 0x1AEDC4u: goto label_1aedc4;
            case 0x1AEDC8u: goto label_1aedc8;
            case 0x1AEDCCu: goto label_1aedcc;
            case 0x1AEDD0u: goto label_1aedd0;
            case 0x1AEDD4u: goto label_1aedd4;
            case 0x1AEDD8u: goto label_1aedd8;
            case 0x1AEDDCu: goto label_1aeddc;
            case 0x1AEDE0u: goto label_1aede0;
            case 0x1AEDE4u: goto label_1aede4;
            case 0x1AEDE8u: goto label_1aede8;
            case 0x1AEDECu: goto label_1aedec;
            case 0x1AEDF0u: goto label_1aedf0;
            case 0x1AEDF4u: goto label_1aedf4;
            case 0x1AEDF8u: goto label_1aedf8;
            case 0x1AEDFCu: goto label_1aedfc;
            case 0x1AEE00u: goto label_1aee00;
            case 0x1AEE04u: goto label_1aee04;
            case 0x1AEE08u: goto label_1aee08;
            case 0x1AEE0Cu: goto label_1aee0c;
            case 0x1AEE10u: goto label_1aee10;
            case 0x1AEE14u: goto label_1aee14;
            case 0x1AEE18u: goto label_1aee18;
            case 0x1AEE1Cu: goto label_1aee1c;
            case 0x1AEE20u: goto label_1aee20;
            case 0x1AEE24u: goto label_1aee24;
            case 0x1AEE28u: goto label_1aee28;
            case 0x1AEE2Cu: goto label_1aee2c;
            case 0x1AEE30u: goto label_1aee30;
            case 0x1AEE34u: goto label_1aee34;
            case 0x1AEE38u: goto label_1aee38;
            case 0x1AEE3Cu: goto label_1aee3c;
            case 0x1AEE40u: goto label_1aee40;
            case 0x1AEE44u: goto label_1aee44;
            case 0x1AEE48u: goto label_1aee48;
            case 0x1AEE4Cu: goto label_1aee4c;
            case 0x1AEE50u: goto label_1aee50;
            case 0x1AEE54u: goto label_1aee54;
            case 0x1AEE58u: goto label_1aee58;
            case 0x1AEE5Cu: goto label_1aee5c;
            case 0x1AEE60u: goto label_1aee60;
            case 0x1AEE64u: goto label_1aee64;
            case 0x1AEE68u: goto label_1aee68;
            case 0x1AEE6Cu: goto label_1aee6c;
            case 0x1AEE70u: goto label_1aee70;
            case 0x1AEE74u: goto label_1aee74;
            case 0x1AEE78u: goto label_1aee78;
            case 0x1AEE7Cu: goto label_1aee7c;
            case 0x1AEE80u: goto label_1aee80;
            case 0x1AEE84u: goto label_1aee84;
            case 0x1AEE88u: goto label_1aee88;
            case 0x1AEE8Cu: goto label_1aee8c;
            case 0x1AEE90u: goto label_1aee90;
            case 0x1AEE94u: goto label_1aee94;
            case 0x1AEE98u: goto label_1aee98;
            case 0x1AEE9Cu: goto label_1aee9c;
            case 0x1AEEA0u: goto label_1aeea0;
            case 0x1AEEA4u: goto label_1aeea4;
            case 0x1AEEA8u: goto label_1aeea8;
            case 0x1AEEACu: goto label_1aeeac;
            case 0x1AEEB0u: goto label_1aeeb0;
            case 0x1AEEB4u: goto label_1aeeb4;
            case 0x1AEEB8u: goto label_1aeeb8;
            case 0x1AEEBCu: goto label_1aeebc;
            case 0x1AEEC0u: goto label_1aeec0;
            case 0x1AEEC4u: goto label_1aeec4;
            case 0x1AEEC8u: goto label_1aeec8;
            case 0x1AEECCu: goto label_1aeecc;
            case 0x1AEED0u: goto label_1aeed0;
            case 0x1AEED4u: goto label_1aeed4;
            case 0x1AEED8u: goto label_1aeed8;
            case 0x1AEEDCu: goto label_1aeedc;
            case 0x1AEEE0u: goto label_1aeee0;
            case 0x1AEEE4u: goto label_1aeee4;
            case 0x1AEEE8u: goto label_1aeee8;
            case 0x1AEEECu: goto label_1aeeec;
            case 0x1AEEF0u: goto label_1aeef0;
            case 0x1AEEF4u: goto label_1aeef4;
            case 0x1AEEF8u: goto label_1aeef8;
            case 0x1AEEFCu: goto label_1aeefc;
            case 0x1AEF00u: goto label_1aef00;
            case 0x1AEF04u: goto label_1aef04;
            case 0x1AEF08u: goto label_1aef08;
            case 0x1AEF0Cu: goto label_1aef0c;
            case 0x1AEF10u: goto label_1aef10;
            case 0x1AEF14u: goto label_1aef14;
            case 0x1AEF18u: goto label_1aef18;
            case 0x1AEF1Cu: goto label_1aef1c;
            case 0x1AEF20u: goto label_1aef20;
            case 0x1AEF24u: goto label_1aef24;
            case 0x1AEF28u: goto label_1aef28;
            case 0x1AEF2Cu: goto label_1aef2c;
            case 0x1AEF30u: goto label_1aef30;
            case 0x1AEF34u: goto label_1aef34;
            case 0x1AEF38u: goto label_1aef38;
            case 0x1AEF3Cu: goto label_1aef3c;
            case 0x1AEF40u: goto label_1aef40;
            case 0x1AEF44u: goto label_1aef44;
            case 0x1AEF48u: goto label_1aef48;
            case 0x1AEF4Cu: goto label_1aef4c;
            case 0x1AEF50u: goto label_1aef50;
            case 0x1AEF54u: goto label_1aef54;
            case 0x1AEF58u: goto label_1aef58;
            case 0x1AEF5Cu: goto label_1aef5c;
            case 0x1AEF60u: goto label_1aef60;
            case 0x1AEF64u: goto label_1aef64;
            case 0x1AEF68u: goto label_1aef68;
            case 0x1AEF6Cu: goto label_1aef6c;
            case 0x1AEF70u: goto label_1aef70;
            case 0x1AEF74u: goto label_1aef74;
            case 0x1AEF78u: goto label_1aef78;
            case 0x1AEF7Cu: goto label_1aef7c;
            case 0x1AEF80u: goto label_1aef80;
            case 0x1AEF84u: goto label_1aef84;
            case 0x1AEF88u: goto label_1aef88;
            case 0x1AEF8Cu: goto label_1aef8c;
            case 0x1AEF90u: goto label_1aef90;
            case 0x1AEF94u: goto label_1aef94;
            case 0x1AEF98u: goto label_1aef98;
            case 0x1AEF9Cu: goto label_1aef9c;
            case 0x1AEFA0u: goto label_1aefa0;
            case 0x1AEFA4u: goto label_1aefa4;
            case 0x1AEFA8u: goto label_1aefa8;
            case 0x1AEFACu: goto label_1aefac;
            case 0x1AEFB0u: goto label_1aefb0;
            case 0x1AEFB4u: goto label_1aefb4;
            case 0x1AEFB8u: goto label_1aefb8;
            case 0x1AEFBCu: goto label_1aefbc;
            case 0x1AEFC0u: goto label_1aefc0;
            case 0x1AEFC4u: goto label_1aefc4;
            case 0x1AEFC8u: goto label_1aefc8;
            case 0x1AEFCCu: goto label_1aefcc;
            case 0x1AEFD0u: goto label_1aefd0;
            case 0x1AEFD4u: goto label_1aefd4;
            case 0x1AEFD8u: goto label_1aefd8;
            case 0x1AEFDCu: goto label_1aefdc;
            case 0x1AEFE0u: goto label_1aefe0;
            case 0x1AEFE4u: goto label_1aefe4;
            case 0x1AEFE8u: goto label_1aefe8;
            case 0x1AEFECu: goto label_1aefec;
            case 0x1AEFF0u: goto label_1aeff0;
            case 0x1AEFF4u: goto label_1aeff4;
            case 0x1AEFF8u: goto label_1aeff8;
            case 0x1AEFFCu: goto label_1aeffc;
            case 0x1AF000u: goto label_1af000;
            case 0x1AF004u: goto label_1af004;
            case 0x1AF008u: goto label_1af008;
            case 0x1AF00Cu: goto label_1af00c;
            case 0x1AF010u: goto label_1af010;
            case 0x1AF014u: goto label_1af014;
            case 0x1AF018u: goto label_1af018;
            case 0x1AF01Cu: goto label_1af01c;
            case 0x1AF020u: goto label_1af020;
            case 0x1AF024u: goto label_1af024;
            case 0x1AF028u: goto label_1af028;
            case 0x1AF02Cu: goto label_1af02c;
            case 0x1AF030u: goto label_1af030;
            case 0x1AF034u: goto label_1af034;
            case 0x1AF038u: goto label_1af038;
            case 0x1AF03Cu: goto label_1af03c;
            case 0x1AF040u: goto label_1af040;
            case 0x1AF044u: goto label_1af044;
            case 0x1AF048u: goto label_1af048;
            case 0x1AF04Cu: goto label_1af04c;
            case 0x1AF050u: goto label_1af050;
            case 0x1AF054u: goto label_1af054;
            case 0x1AF058u: goto label_1af058;
            case 0x1AF05Cu: goto label_1af05c;
            case 0x1AF060u: goto label_1af060;
            case 0x1AF064u: goto label_1af064;
            case 0x1AF068u: goto label_1af068;
            case 0x1AF06Cu: goto label_1af06c;
            case 0x1AF070u: goto label_1af070;
            case 0x1AF074u: goto label_1af074;
            case 0x1AF078u: goto label_1af078;
            case 0x1AF07Cu: goto label_1af07c;
            case 0x1AF080u: goto label_1af080;
            case 0x1AF084u: goto label_1af084;
            case 0x1AF088u: goto label_1af088;
            case 0x1AF08Cu: goto label_1af08c;
            case 0x1AF090u: goto label_1af090;
            case 0x1AF094u: goto label_1af094;
            case 0x1AF098u: goto label_1af098;
            case 0x1AF09Cu: goto label_1af09c;
            case 0x1AF0A0u: goto label_1af0a0;
            case 0x1AF0A4u: goto label_1af0a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AF014u; }
            if (ctx->pc != 0x1AF014u) { return; }
        }
    }
    ctx->pc = 0x1AF014u;
label_1af014:
    // 0x1af014: 0x10000020  b           . + 4 + (0x20 << 2)
label_1af018:
    if (ctx->pc == 0x1AF018u) {
        ctx->pc = 0x1AF01Cu;
        goto label_1af01c;
    }
    ctx->pc = 0x1AF014u;
    {
        const bool branch_taken_0x1af014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af014) {
            ctx->pc = 0x1AF098u;
            goto label_1af098;
        }
    }
    ctx->pc = 0x1AF01Cu;
label_1af01c:
    // 0x1af01c: 0x0  nop
    ctx->pc = 0x1af01cu;
    // NOP
label_1af020:
    // 0x1af020: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1af020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1af024:
    // 0x1af024: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
label_1af028:
    if (ctx->pc == 0x1AF028u) {
        ctx->pc = 0x1AF028u;
            // 0x1af028: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->pc = 0x1AF02Cu;
        goto label_1af02c;
    }
    ctx->pc = 0x1AF024u;
    {
        const bool branch_taken_0x1af024 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1AF028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF024u;
            // 0x1af028: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af024) {
            ctx->pc = 0x1AF078u;
            goto label_1af078;
        }
    }
    ctx->pc = 0x1AF02Cu;
label_1af02c:
    // 0x1af02c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1af02cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1af030:
    // 0x1af030: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af030u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1af034:
    // 0x1af034: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1af034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1af038:
    // 0x1af038: 0xc06b83c  jal         func_1AE0F0
label_1af03c:
    if (ctx->pc == 0x1AF03Cu) {
        ctx->pc = 0x1AF03Cu;
            // 0x1af03c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AF040u;
        goto label_1af040;
    }
    ctx->pc = 0x1AF038u;
    SET_GPR_U32(ctx, 31, 0x1AF040u);
    ctx->pc = 0x1AF03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF038u;
            // 0x1af03c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F0u;
    if (runtime->hasFunction(0x1AE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF040u; }
        if (ctx->pc != 0x1AF040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_07_0x1ae0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF040u; }
        if (ctx->pc != 0x1AF040u) { return; }
    }
    ctx->pc = 0x1AF040u;
label_1af040:
    // 0x1af040: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1af040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af044:
    // 0x1af044: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1af044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af048:
    // 0x1af048: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1af048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af04c:
    // 0x1af04c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af04cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1af050:
    // 0x1af050: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af050u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1af054:
    // 0x1af054: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1af054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1af058:
    // 0x1af058: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1af058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1af05c:
    // 0x1af05c: 0xc06b83c  jal         func_1AE0F0
label_1af060:
    if (ctx->pc == 0x1AF060u) {
        ctx->pc = 0x1AF060u;
            // 0x1af060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AF064u;
        goto label_1af064;
    }
    ctx->pc = 0x1AF05Cu;
    SET_GPR_U32(ctx, 31, 0x1AF064u);
    ctx->pc = 0x1AF060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF05Cu;
            // 0x1af060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F0u;
    if (runtime->hasFunction(0x1AE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF064u; }
        if (ctx->pc != 0x1AF064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_07_0x1ae0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF064u; }
        if (ctx->pc != 0x1AF064u) { return; }
    }
    ctx->pc = 0x1AF064u;
label_1af064:
    // 0x1af064: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1af064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1af068:
    // 0x1af068: 0x40f809  jalr        $v0
label_1af06c:
    if (ctx->pc == 0x1AF06Cu) {
        ctx->pc = 0x1AF06Cu;
            // 0x1af06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AF070u;
        goto label_1af070;
    }
    ctx->pc = 0x1AF068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AF070u);
        ctx->pc = 0x1AF06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF068u;
            // 0x1af06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AECA0u: goto label_1aeca0;
            case 0x1AECA4u: goto label_1aeca4;
            case 0x1AECA8u: goto label_1aeca8;
            case 0x1AECACu: goto label_1aecac;
            case 0x1AECB0u: goto label_1aecb0;
            case 0x1AECB4u: goto label_1aecb4;
            case 0x1AECB8u: goto label_1aecb8;
            case 0x1AECBCu: goto label_1aecbc;
            case 0x1AECC0u: goto label_1aecc0;
            case 0x1AECC4u: goto label_1aecc4;
            case 0x1AECC8u: goto label_1aecc8;
            case 0x1AECCCu: goto label_1aeccc;
            case 0x1AECD0u: goto label_1aecd0;
            case 0x1AECD4u: goto label_1aecd4;
            case 0x1AECD8u: goto label_1aecd8;
            case 0x1AECDCu: goto label_1aecdc;
            case 0x1AECE0u: goto label_1aece0;
            case 0x1AECE4u: goto label_1aece4;
            case 0x1AECE8u: goto label_1aece8;
            case 0x1AECECu: goto label_1aecec;
            case 0x1AECF0u: goto label_1aecf0;
            case 0x1AECF4u: goto label_1aecf4;
            case 0x1AECF8u: goto label_1aecf8;
            case 0x1AECFCu: goto label_1aecfc;
            case 0x1AED00u: goto label_1aed00;
            case 0x1AED04u: goto label_1aed04;
            case 0x1AED08u: goto label_1aed08;
            case 0x1AED0Cu: goto label_1aed0c;
            case 0x1AED10u: goto label_1aed10;
            case 0x1AED14u: goto label_1aed14;
            case 0x1AED18u: goto label_1aed18;
            case 0x1AED1Cu: goto label_1aed1c;
            case 0x1AED20u: goto label_1aed20;
            case 0x1AED24u: goto label_1aed24;
            case 0x1AED28u: goto label_1aed28;
            case 0x1AED2Cu: goto label_1aed2c;
            case 0x1AED30u: goto label_1aed30;
            case 0x1AED34u: goto label_1aed34;
            case 0x1AED38u: goto label_1aed38;
            case 0x1AED3Cu: goto label_1aed3c;
            case 0x1AED40u: goto label_1aed40;
            case 0x1AED44u: goto label_1aed44;
            case 0x1AED48u: goto label_1aed48;
            case 0x1AED4Cu: goto label_1aed4c;
            case 0x1AED50u: goto label_1aed50;
            case 0x1AED54u: goto label_1aed54;
            case 0x1AED58u: goto label_1aed58;
            case 0x1AED5Cu: goto label_1aed5c;
            case 0x1AED60u: goto label_1aed60;
            case 0x1AED64u: goto label_1aed64;
            case 0x1AED68u: goto label_1aed68;
            case 0x1AED6Cu: goto label_1aed6c;
            case 0x1AED70u: goto label_1aed70;
            case 0x1AED74u: goto label_1aed74;
            case 0x1AED78u: goto label_1aed78;
            case 0x1AED7Cu: goto label_1aed7c;
            case 0x1AED80u: goto label_1aed80;
            case 0x1AED84u: goto label_1aed84;
            case 0x1AED88u: goto label_1aed88;
            case 0x1AED8Cu: goto label_1aed8c;
            case 0x1AED90u: goto label_1aed90;
            case 0x1AED94u: goto label_1aed94;
            case 0x1AED98u: goto label_1aed98;
            case 0x1AED9Cu: goto label_1aed9c;
            case 0x1AEDA0u: goto label_1aeda0;
            case 0x1AEDA4u: goto label_1aeda4;
            case 0x1AEDA8u: goto label_1aeda8;
            case 0x1AEDACu: goto label_1aedac;
            case 0x1AEDB0u: goto label_1aedb0;
            case 0x1AEDB4u: goto label_1aedb4;
            case 0x1AEDB8u: goto label_1aedb8;
            case 0x1AEDBCu: goto label_1aedbc;
            case 0x1AEDC0u: goto label_1aedc0;
            case 0x1AEDC4u: goto label_1aedc4;
            case 0x1AEDC8u: goto label_1aedc8;
            case 0x1AEDCCu: goto label_1aedcc;
            case 0x1AEDD0u: goto label_1aedd0;
            case 0x1AEDD4u: goto label_1aedd4;
            case 0x1AEDD8u: goto label_1aedd8;
            case 0x1AEDDCu: goto label_1aeddc;
            case 0x1AEDE0u: goto label_1aede0;
            case 0x1AEDE4u: goto label_1aede4;
            case 0x1AEDE8u: goto label_1aede8;
            case 0x1AEDECu: goto label_1aedec;
            case 0x1AEDF0u: goto label_1aedf0;
            case 0x1AEDF4u: goto label_1aedf4;
            case 0x1AEDF8u: goto label_1aedf8;
            case 0x1AEDFCu: goto label_1aedfc;
            case 0x1AEE00u: goto label_1aee00;
            case 0x1AEE04u: goto label_1aee04;
            case 0x1AEE08u: goto label_1aee08;
            case 0x1AEE0Cu: goto label_1aee0c;
            case 0x1AEE10u: goto label_1aee10;
            case 0x1AEE14u: goto label_1aee14;
            case 0x1AEE18u: goto label_1aee18;
            case 0x1AEE1Cu: goto label_1aee1c;
            case 0x1AEE20u: goto label_1aee20;
            case 0x1AEE24u: goto label_1aee24;
            case 0x1AEE28u: goto label_1aee28;
            case 0x1AEE2Cu: goto label_1aee2c;
            case 0x1AEE30u: goto label_1aee30;
            case 0x1AEE34u: goto label_1aee34;
            case 0x1AEE38u: goto label_1aee38;
            case 0x1AEE3Cu: goto label_1aee3c;
            case 0x1AEE40u: goto label_1aee40;
            case 0x1AEE44u: goto label_1aee44;
            case 0x1AEE48u: goto label_1aee48;
            case 0x1AEE4Cu: goto label_1aee4c;
            case 0x1AEE50u: goto label_1aee50;
            case 0x1AEE54u: goto label_1aee54;
            case 0x1AEE58u: goto label_1aee58;
            case 0x1AEE5Cu: goto label_1aee5c;
            case 0x1AEE60u: goto label_1aee60;
            case 0x1AEE64u: goto label_1aee64;
            case 0x1AEE68u: goto label_1aee68;
            case 0x1AEE6Cu: goto label_1aee6c;
            case 0x1AEE70u: goto label_1aee70;
            case 0x1AEE74u: goto label_1aee74;
            case 0x1AEE78u: goto label_1aee78;
            case 0x1AEE7Cu: goto label_1aee7c;
            case 0x1AEE80u: goto label_1aee80;
            case 0x1AEE84u: goto label_1aee84;
            case 0x1AEE88u: goto label_1aee88;
            case 0x1AEE8Cu: goto label_1aee8c;
            case 0x1AEE90u: goto label_1aee90;
            case 0x1AEE94u: goto label_1aee94;
            case 0x1AEE98u: goto label_1aee98;
            case 0x1AEE9Cu: goto label_1aee9c;
            case 0x1AEEA0u: goto label_1aeea0;
            case 0x1AEEA4u: goto label_1aeea4;
            case 0x1AEEA8u: goto label_1aeea8;
            case 0x1AEEACu: goto label_1aeeac;
            case 0x1AEEB0u: goto label_1aeeb0;
            case 0x1AEEB4u: goto label_1aeeb4;
            case 0x1AEEB8u: goto label_1aeeb8;
            case 0x1AEEBCu: goto label_1aeebc;
            case 0x1AEEC0u: goto label_1aeec0;
            case 0x1AEEC4u: goto label_1aeec4;
            case 0x1AEEC8u: goto label_1aeec8;
            case 0x1AEECCu: goto label_1aeecc;
            case 0x1AEED0u: goto label_1aeed0;
            case 0x1AEED4u: goto label_1aeed4;
            case 0x1AEED8u: goto label_1aeed8;
            case 0x1AEEDCu: goto label_1aeedc;
            case 0x1AEEE0u: goto label_1aeee0;
            case 0x1AEEE4u: goto label_1aeee4;
            case 0x1AEEE8u: goto label_1aeee8;
            case 0x1AEEECu: goto label_1aeeec;
            case 0x1AEEF0u: goto label_1aeef0;
            case 0x1AEEF4u: goto label_1aeef4;
            case 0x1AEEF8u: goto label_1aeef8;
            case 0x1AEEFCu: goto label_1aeefc;
            case 0x1AEF00u: goto label_1aef00;
            case 0x1AEF04u: goto label_1aef04;
            case 0x1AEF08u: goto label_1aef08;
            case 0x1AEF0Cu: goto label_1aef0c;
            case 0x1AEF10u: goto label_1aef10;
            case 0x1AEF14u: goto label_1aef14;
            case 0x1AEF18u: goto label_1aef18;
            case 0x1AEF1Cu: goto label_1aef1c;
            case 0x1AEF20u: goto label_1aef20;
            case 0x1AEF24u: goto label_1aef24;
            case 0x1AEF28u: goto label_1aef28;
            case 0x1AEF2Cu: goto label_1aef2c;
            case 0x1AEF30u: goto label_1aef30;
            case 0x1AEF34u: goto label_1aef34;
            case 0x1AEF38u: goto label_1aef38;
            case 0x1AEF3Cu: goto label_1aef3c;
            case 0x1AEF40u: goto label_1aef40;
            case 0x1AEF44u: goto label_1aef44;
            case 0x1AEF48u: goto label_1aef48;
            case 0x1AEF4Cu: goto label_1aef4c;
            case 0x1AEF50u: goto label_1aef50;
            case 0x1AEF54u: goto label_1aef54;
            case 0x1AEF58u: goto label_1aef58;
            case 0x1AEF5Cu: goto label_1aef5c;
            case 0x1AEF60u: goto label_1aef60;
            case 0x1AEF64u: goto label_1aef64;
            case 0x1AEF68u: goto label_1aef68;
            case 0x1AEF6Cu: goto label_1aef6c;
            case 0x1AEF70u: goto label_1aef70;
            case 0x1AEF74u: goto label_1aef74;
            case 0x1AEF78u: goto label_1aef78;
            case 0x1AEF7Cu: goto label_1aef7c;
            case 0x1AEF80u: goto label_1aef80;
            case 0x1AEF84u: goto label_1aef84;
            case 0x1AEF88u: goto label_1aef88;
            case 0x1AEF8Cu: goto label_1aef8c;
            case 0x1AEF90u: goto label_1aef90;
            case 0x1AEF94u: goto label_1aef94;
            case 0x1AEF98u: goto label_1aef98;
            case 0x1AEF9Cu: goto label_1aef9c;
            case 0x1AEFA0u: goto label_1aefa0;
            case 0x1AEFA4u: goto label_1aefa4;
            case 0x1AEFA8u: goto label_1aefa8;
            case 0x1AEFACu: goto label_1aefac;
            case 0x1AEFB0u: goto label_1aefb0;
            case 0x1AEFB4u: goto label_1aefb4;
            case 0x1AEFB8u: goto label_1aefb8;
            case 0x1AEFBCu: goto label_1aefbc;
            case 0x1AEFC0u: goto label_1aefc0;
            case 0x1AEFC4u: goto label_1aefc4;
            case 0x1AEFC8u: goto label_1aefc8;
            case 0x1AEFCCu: goto label_1aefcc;
            case 0x1AEFD0u: goto label_1aefd0;
            case 0x1AEFD4u: goto label_1aefd4;
            case 0x1AEFD8u: goto label_1aefd8;
            case 0x1AEFDCu: goto label_1aefdc;
            case 0x1AEFE0u: goto label_1aefe0;
            case 0x1AEFE4u: goto label_1aefe4;
            case 0x1AEFE8u: goto label_1aefe8;
            case 0x1AEFECu: goto label_1aefec;
            case 0x1AEFF0u: goto label_1aeff0;
            case 0x1AEFF4u: goto label_1aeff4;
            case 0x1AEFF8u: goto label_1aeff8;
            case 0x1AEFFCu: goto label_1aeffc;
            case 0x1AF000u: goto label_1af000;
            case 0x1AF004u: goto label_1af004;
            case 0x1AF008u: goto label_1af008;
            case 0x1AF00Cu: goto label_1af00c;
            case 0x1AF010u: goto label_1af010;
            case 0x1AF014u: goto label_1af014;
            case 0x1AF018u: goto label_1af018;
            case 0x1AF01Cu: goto label_1af01c;
            case 0x1AF020u: goto label_1af020;
            case 0x1AF024u: goto label_1af024;
            case 0x1AF028u: goto label_1af028;
            case 0x1AF02Cu: goto label_1af02c;
            case 0x1AF030u: goto label_1af030;
            case 0x1AF034u: goto label_1af034;
            case 0x1AF038u: goto label_1af038;
            case 0x1AF03Cu: goto label_1af03c;
            case 0x1AF040u: goto label_1af040;
            case 0x1AF044u: goto label_1af044;
            case 0x1AF048u: goto label_1af048;
            case 0x1AF04Cu: goto label_1af04c;
            case 0x1AF050u: goto label_1af050;
            case 0x1AF054u: goto label_1af054;
            case 0x1AF058u: goto label_1af058;
            case 0x1AF05Cu: goto label_1af05c;
            case 0x1AF060u: goto label_1af060;
            case 0x1AF064u: goto label_1af064;
            case 0x1AF068u: goto label_1af068;
            case 0x1AF06Cu: goto label_1af06c;
            case 0x1AF070u: goto label_1af070;
            case 0x1AF074u: goto label_1af074;
            case 0x1AF078u: goto label_1af078;
            case 0x1AF07Cu: goto label_1af07c;
            case 0x1AF080u: goto label_1af080;
            case 0x1AF084u: goto label_1af084;
            case 0x1AF088u: goto label_1af088;
            case 0x1AF08Cu: goto label_1af08c;
            case 0x1AF090u: goto label_1af090;
            case 0x1AF094u: goto label_1af094;
            case 0x1AF098u: goto label_1af098;
            case 0x1AF09Cu: goto label_1af09c;
            case 0x1AF0A0u: goto label_1af0a0;
            case 0x1AF0A4u: goto label_1af0a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AF070u; }
            if (ctx->pc != 0x1AF070u) { return; }
        }
    }
    ctx->pc = 0x1AF070u;
label_1af070:
    // 0x1af070: 0x10000009  b           . + 4 + (0x9 << 2)
label_1af074:
    if (ctx->pc == 0x1AF074u) {
        ctx->pc = 0x1AF078u;
        goto label_1af078;
    }
    ctx->pc = 0x1AF070u;
    {
        const bool branch_taken_0x1af070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af070) {
            ctx->pc = 0x1AF098u;
            goto label_1af098;
        }
    }
    ctx->pc = 0x1AF078u;
label_1af078:
    // 0x1af078: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1af078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1af07c:
    // 0x1af07c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1af07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1af080:
    // 0x1af080: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1af080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1af084:
    // 0x1af084: 0x24c6eaa0  addiu       $a2, $a2, -0x1560
    ctx->pc = 0x1af084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961824));
label_1af088:
    // 0x1af088: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1af088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af08c:
    // 0x1af08c: 0xc053ca4  jal         func_14F290
label_1af090:
    if (ctx->pc == 0x1AF090u) {
        ctx->pc = 0x1AF090u;
            // 0x1af090: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AF094u;
        goto label_1af094;
    }
    ctx->pc = 0x1AF08Cu;
    SET_GPR_U32(ctx, 31, 0x1AF094u);
    ctx->pc = 0x1AF090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF08Cu;
            // 0x1af090: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF094u; }
        if (ctx->pc != 0x1AF094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF094u; }
        if (ctx->pc != 0x1AF094u) { return; }
    }
    ctx->pc = 0x1AF094u;
label_1af094:
    // 0x1af094: 0x0  nop
    ctx->pc = 0x1af094u;
    // NOP
label_1af098:
    // 0x1af098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1af09c:
    // 0x1af09c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1af0a0:
    // 0x1af0a0: 0x3e00008  jr          $ra
label_1af0a4:
    if (ctx->pc == 0x1AF0A4u) {
        ctx->pc = 0x1AF0A4u;
            // 0x1af0a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1AF0A8u;
        goto label_fallthrough_0x1af0a0;
    }
    ctx->pc = 0x1AF0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0A0u;
            // 0x1af0a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AECA0u: goto label_1aeca0;
            case 0x1AECA4u: goto label_1aeca4;
            case 0x1AECA8u: goto label_1aeca8;
            case 0x1AECACu: goto label_1aecac;
            case 0x1AECB0u: goto label_1aecb0;
            case 0x1AECB4u: goto label_1aecb4;
            case 0x1AECB8u: goto label_1aecb8;
            case 0x1AECBCu: goto label_1aecbc;
            case 0x1AECC0u: goto label_1aecc0;
            case 0x1AECC4u: goto label_1aecc4;
            case 0x1AECC8u: goto label_1aecc8;
            case 0x1AECCCu: goto label_1aeccc;
            case 0x1AECD0u: goto label_1aecd0;
            case 0x1AECD4u: goto label_1aecd4;
            case 0x1AECD8u: goto label_1aecd8;
            case 0x1AECDCu: goto label_1aecdc;
            case 0x1AECE0u: goto label_1aece0;
            case 0x1AECE4u: goto label_1aece4;
            case 0x1AECE8u: goto label_1aece8;
            case 0x1AECECu: goto label_1aecec;
            case 0x1AECF0u: goto label_1aecf0;
            case 0x1AECF4u: goto label_1aecf4;
            case 0x1AECF8u: goto label_1aecf8;
            case 0x1AECFCu: goto label_1aecfc;
            case 0x1AED00u: goto label_1aed00;
            case 0x1AED04u: goto label_1aed04;
            case 0x1AED08u: goto label_1aed08;
            case 0x1AED0Cu: goto label_1aed0c;
            case 0x1AED10u: goto label_1aed10;
            case 0x1AED14u: goto label_1aed14;
            case 0x1AED18u: goto label_1aed18;
            case 0x1AED1Cu: goto label_1aed1c;
            case 0x1AED20u: goto label_1aed20;
            case 0x1AED24u: goto label_1aed24;
            case 0x1AED28u: goto label_1aed28;
            case 0x1AED2Cu: goto label_1aed2c;
            case 0x1AED30u: goto label_1aed30;
            case 0x1AED34u: goto label_1aed34;
            case 0x1AED38u: goto label_1aed38;
            case 0x1AED3Cu: goto label_1aed3c;
            case 0x1AED40u: goto label_1aed40;
            case 0x1AED44u: goto label_1aed44;
            case 0x1AED48u: goto label_1aed48;
            case 0x1AED4Cu: goto label_1aed4c;
            case 0x1AED50u: goto label_1aed50;
            case 0x1AED54u: goto label_1aed54;
            case 0x1AED58u: goto label_1aed58;
            case 0x1AED5Cu: goto label_1aed5c;
            case 0x1AED60u: goto label_1aed60;
            case 0x1AED64u: goto label_1aed64;
            case 0x1AED68u: goto label_1aed68;
            case 0x1AED6Cu: goto label_1aed6c;
            case 0x1AED70u: goto label_1aed70;
            case 0x1AED74u: goto label_1aed74;
            case 0x1AED78u: goto label_1aed78;
            case 0x1AED7Cu: goto label_1aed7c;
            case 0x1AED80u: goto label_1aed80;
            case 0x1AED84u: goto label_1aed84;
            case 0x1AED88u: goto label_1aed88;
            case 0x1AED8Cu: goto label_1aed8c;
            case 0x1AED90u: goto label_1aed90;
            case 0x1AED94u: goto label_1aed94;
            case 0x1AED98u: goto label_1aed98;
            case 0x1AED9Cu: goto label_1aed9c;
            case 0x1AEDA0u: goto label_1aeda0;
            case 0x1AEDA4u: goto label_1aeda4;
            case 0x1AEDA8u: goto label_1aeda8;
            case 0x1AEDACu: goto label_1aedac;
            case 0x1AEDB0u: goto label_1aedb0;
            case 0x1AEDB4u: goto label_1aedb4;
            case 0x1AEDB8u: goto label_1aedb8;
            case 0x1AEDBCu: goto label_1aedbc;
            case 0x1AEDC0u: goto label_1aedc0;
            case 0x1AEDC4u: goto label_1aedc4;
            case 0x1AEDC8u: goto label_1aedc8;
            case 0x1AEDCCu: goto label_1aedcc;
            case 0x1AEDD0u: goto label_1aedd0;
            case 0x1AEDD4u: goto label_1aedd4;
            case 0x1AEDD8u: goto label_1aedd8;
            case 0x1AEDDCu: goto label_1aeddc;
            case 0x1AEDE0u: goto label_1aede0;
            case 0x1AEDE4u: goto label_1aede4;
            case 0x1AEDE8u: goto label_1aede8;
            case 0x1AEDECu: goto label_1aedec;
            case 0x1AEDF0u: goto label_1aedf0;
            case 0x1AEDF4u: goto label_1aedf4;
            case 0x1AEDF8u: goto label_1aedf8;
            case 0x1AEDFCu: goto label_1aedfc;
            case 0x1AEE00u: goto label_1aee00;
            case 0x1AEE04u: goto label_1aee04;
            case 0x1AEE08u: goto label_1aee08;
            case 0x1AEE0Cu: goto label_1aee0c;
            case 0x1AEE10u: goto label_1aee10;
            case 0x1AEE14u: goto label_1aee14;
            case 0x1AEE18u: goto label_1aee18;
            case 0x1AEE1Cu: goto label_1aee1c;
            case 0x1AEE20u: goto label_1aee20;
            case 0x1AEE24u: goto label_1aee24;
            case 0x1AEE28u: goto label_1aee28;
            case 0x1AEE2Cu: goto label_1aee2c;
            case 0x1AEE30u: goto label_1aee30;
            case 0x1AEE34u: goto label_1aee34;
            case 0x1AEE38u: goto label_1aee38;
            case 0x1AEE3Cu: goto label_1aee3c;
            case 0x1AEE40u: goto label_1aee40;
            case 0x1AEE44u: goto label_1aee44;
            case 0x1AEE48u: goto label_1aee48;
            case 0x1AEE4Cu: goto label_1aee4c;
            case 0x1AEE50u: goto label_1aee50;
            case 0x1AEE54u: goto label_1aee54;
            case 0x1AEE58u: goto label_1aee58;
            case 0x1AEE5Cu: goto label_1aee5c;
            case 0x1AEE60u: goto label_1aee60;
            case 0x1AEE64u: goto label_1aee64;
            case 0x1AEE68u: goto label_1aee68;
            case 0x1AEE6Cu: goto label_1aee6c;
            case 0x1AEE70u: goto label_1aee70;
            case 0x1AEE74u: goto label_1aee74;
            case 0x1AEE78u: goto label_1aee78;
            case 0x1AEE7Cu: goto label_1aee7c;
            case 0x1AEE80u: goto label_1aee80;
            case 0x1AEE84u: goto label_1aee84;
            case 0x1AEE88u: goto label_1aee88;
            case 0x1AEE8Cu: goto label_1aee8c;
            case 0x1AEE90u: goto label_1aee90;
            case 0x1AEE94u: goto label_1aee94;
            case 0x1AEE98u: goto label_1aee98;
            case 0x1AEE9Cu: goto label_1aee9c;
            case 0x1AEEA0u: goto label_1aeea0;
            case 0x1AEEA4u: goto label_1aeea4;
            case 0x1AEEA8u: goto label_1aeea8;
            case 0x1AEEACu: goto label_1aeeac;
            case 0x1AEEB0u: goto label_1aeeb0;
            case 0x1AEEB4u: goto label_1aeeb4;
            case 0x1AEEB8u: goto label_1aeeb8;
            case 0x1AEEBCu: goto label_1aeebc;
            case 0x1AEEC0u: goto label_1aeec0;
            case 0x1AEEC4u: goto label_1aeec4;
            case 0x1AEEC8u: goto label_1aeec8;
            case 0x1AEECCu: goto label_1aeecc;
            case 0x1AEED0u: goto label_1aeed0;
            case 0x1AEED4u: goto label_1aeed4;
            case 0x1AEED8u: goto label_1aeed8;
            case 0x1AEEDCu: goto label_1aeedc;
            case 0x1AEEE0u: goto label_1aeee0;
            case 0x1AEEE4u: goto label_1aeee4;
            case 0x1AEEE8u: goto label_1aeee8;
            case 0x1AEEECu: goto label_1aeeec;
            case 0x1AEEF0u: goto label_1aeef0;
            case 0x1AEEF4u: goto label_1aeef4;
            case 0x1AEEF8u: goto label_1aeef8;
            case 0x1AEEFCu: goto label_1aeefc;
            case 0x1AEF00u: goto label_1aef00;
            case 0x1AEF04u: goto label_1aef04;
            case 0x1AEF08u: goto label_1aef08;
            case 0x1AEF0Cu: goto label_1aef0c;
            case 0x1AEF10u: goto label_1aef10;
            case 0x1AEF14u: goto label_1aef14;
            case 0x1AEF18u: goto label_1aef18;
            case 0x1AEF1Cu: goto label_1aef1c;
            case 0x1AEF20u: goto label_1aef20;
            case 0x1AEF24u: goto label_1aef24;
            case 0x1AEF28u: goto label_1aef28;
            case 0x1AEF2Cu: goto label_1aef2c;
            case 0x1AEF30u: goto label_1aef30;
            case 0x1AEF34u: goto label_1aef34;
            case 0x1AEF38u: goto label_1aef38;
            case 0x1AEF3Cu: goto label_1aef3c;
            case 0x1AEF40u: goto label_1aef40;
            case 0x1AEF44u: goto label_1aef44;
            case 0x1AEF48u: goto label_1aef48;
            case 0x1AEF4Cu: goto label_1aef4c;
            case 0x1AEF50u: goto label_1aef50;
            case 0x1AEF54u: goto label_1aef54;
            case 0x1AEF58u: goto label_1aef58;
            case 0x1AEF5Cu: goto label_1aef5c;
            case 0x1AEF60u: goto label_1aef60;
            case 0x1AEF64u: goto label_1aef64;
            case 0x1AEF68u: goto label_1aef68;
            case 0x1AEF6Cu: goto label_1aef6c;
            case 0x1AEF70u: goto label_1aef70;
            case 0x1AEF74u: goto label_1aef74;
            case 0x1AEF78u: goto label_1aef78;
            case 0x1AEF7Cu: goto label_1aef7c;
            case 0x1AEF80u: goto label_1aef80;
            case 0x1AEF84u: goto label_1aef84;
            case 0x1AEF88u: goto label_1aef88;
            case 0x1AEF8Cu: goto label_1aef8c;
            case 0x1AEF90u: goto label_1aef90;
            case 0x1AEF94u: goto label_1aef94;
            case 0x1AEF98u: goto label_1aef98;
            case 0x1AEF9Cu: goto label_1aef9c;
            case 0x1AEFA0u: goto label_1aefa0;
            case 0x1AEFA4u: goto label_1aefa4;
            case 0x1AEFA8u: goto label_1aefa8;
            case 0x1AEFACu: goto label_1aefac;
            case 0x1AEFB0u: goto label_1aefb0;
            case 0x1AEFB4u: goto label_1aefb4;
            case 0x1AEFB8u: goto label_1aefb8;
            case 0x1AEFBCu: goto label_1aefbc;
            case 0x1AEFC0u: goto label_1aefc0;
            case 0x1AEFC4u: goto label_1aefc4;
            case 0x1AEFC8u: goto label_1aefc8;
            case 0x1AEFCCu: goto label_1aefcc;
            case 0x1AEFD0u: goto label_1aefd0;
            case 0x1AEFD4u: goto label_1aefd4;
            case 0x1AEFD8u: goto label_1aefd8;
            case 0x1AEFDCu: goto label_1aefdc;
            case 0x1AEFE0u: goto label_1aefe0;
            case 0x1AEFE4u: goto label_1aefe4;
            case 0x1AEFE8u: goto label_1aefe8;
            case 0x1AEFECu: goto label_1aefec;
            case 0x1AEFF0u: goto label_1aeff0;
            case 0x1AEFF4u: goto label_1aeff4;
            case 0x1AEFF8u: goto label_1aeff8;
            case 0x1AEFFCu: goto label_1aeffc;
            case 0x1AF000u: goto label_1af000;
            case 0x1AF004u: goto label_1af004;
            case 0x1AF008u: goto label_1af008;
            case 0x1AF00Cu: goto label_1af00c;
            case 0x1AF010u: goto label_1af010;
            case 0x1AF014u: goto label_1af014;
            case 0x1AF018u: goto label_1af018;
            case 0x1AF01Cu: goto label_1af01c;
            case 0x1AF020u: goto label_1af020;
            case 0x1AF024u: goto label_1af024;
            case 0x1AF028u: goto label_1af028;
            case 0x1AF02Cu: goto label_1af02c;
            case 0x1AF030u: goto label_1af030;
            case 0x1AF034u: goto label_1af034;
            case 0x1AF038u: goto label_1af038;
            case 0x1AF03Cu: goto label_1af03c;
            case 0x1AF040u: goto label_1af040;
            case 0x1AF044u: goto label_1af044;
            case 0x1AF048u: goto label_1af048;
            case 0x1AF04Cu: goto label_1af04c;
            case 0x1AF050u: goto label_1af050;
            case 0x1AF054u: goto label_1af054;
            case 0x1AF058u: goto label_1af058;
            case 0x1AF05Cu: goto label_1af05c;
            case 0x1AF060u: goto label_1af060;
            case 0x1AF064u: goto label_1af064;
            case 0x1AF068u: goto label_1af068;
            case 0x1AF06Cu: goto label_1af06c;
            case 0x1AF070u: goto label_1af070;
            case 0x1AF074u: goto label_1af074;
            case 0x1AF078u: goto label_1af078;
            case 0x1AF07Cu: goto label_1af07c;
            case 0x1AF080u: goto label_1af080;
            case 0x1AF084u: goto label_1af084;
            case 0x1AF088u: goto label_1af088;
            case 0x1AF08Cu: goto label_1af08c;
            case 0x1AF090u: goto label_1af090;
            case 0x1AF094u: goto label_1af094;
            case 0x1AF098u: goto label_1af098;
            case 0x1AF09Cu: goto label_1af09c;
            case 0x1AF0A0u: goto label_1af0a0;
            case 0x1AF0A4u: goto label_1af0a4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1af0a0:
    ctx->pc = 0x1AF0A8u;
}

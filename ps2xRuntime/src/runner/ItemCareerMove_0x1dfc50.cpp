#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemCareerMove
// Address: 0x1dfc50 - 0x1e067c
void ItemCareerMove_0x1dfc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemCareerMove_0x1dfc50");
#endif

    ctx->pc = 0x1dfc50u;

label_1dfc50:
    // 0x1dfc50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dfc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1dfc54:
    // 0x1dfc54: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1dfc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1dfc58:
    // 0x1dfc58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dfc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1dfc5c:
    // 0x1dfc5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dfc5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1dfc60:
    // 0x1dfc60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dfc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dfc64:
    // 0x1dfc64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfc64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfc68:
    // 0x1dfc68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dfc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dfc6c:
    // 0x1dfc6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dfc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfc70:
    // 0x1dfc70: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1dfc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dfc74:
    // 0x1dfc74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfc74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dfc78:
    // 0x1dfc78: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1dfc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfc7c:
    // 0x1dfc7c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1dfc7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1dfc80:
    // 0x1dfc80: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1dfc80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1dfc84:
    // 0x1dfc84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1dfc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfc88:
    // 0x1dfc88: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1dfc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dfc8c:
    // 0x1dfc8c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1dfc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfc90:
    // 0x1dfc90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1dfc90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1dfc94:
    // 0x1dfc94: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1dfc94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1dfc98:
    // 0x1dfc98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1dfc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfc9c:
    // 0x1dfc9c: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1dfc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dfca0:
    // 0x1dfca0: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1dfca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfca4:
    // 0x1dfca4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1dfca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1dfca8:
    // 0x1dfca8: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1dfca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1dfcac:
    // 0x1dfcac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1dfcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfcb0:
    // 0x1dfcb0: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1dfcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dfcb4:
    // 0x1dfcb4: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1dfcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfcb8:
    // 0x1dfcb8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1dfcb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1dfcbc:
    // 0x1dfcbc: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1dfcbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1dfcc0:
    // 0x1dfcc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1dfcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfcc4:
    // 0x1dfcc4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1dfcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfcc8:
    // 0x1dfcc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dfcc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dfccc:
    // 0x1dfccc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1dfcd0:
    if (ctx->pc == 0x1DFCD0u) {
        ctx->pc = 0x1DFCD0u;
            // 0x1dfcd0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1DFCD4u;
        goto label_1dfcd4;
    }
    ctx->pc = 0x1DFCCCu;
    {
        const bool branch_taken_0x1dfccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFCCCu;
            // 0x1dfcd0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfccc) {
            ctx->pc = 0x1DFCF0u;
            goto label_1dfcf0;
        }
    }
    ctx->pc = 0x1DFCD4u;
label_1dfcd4:
    // 0x1dfcd4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1dfcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1dfcd8:
    // 0x1dfcd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dfcd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1dfcdc:
    // 0x1dfcdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfcdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfce0:
    // 0x1dfce0: 0x0  nop
    ctx->pc = 0x1dfce0u;
    // NOP
label_1dfce4:
    // 0x1dfce4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dfce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dfce8:
    // 0x1dfce8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1dfce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1dfcec:
    // 0x1dfcec: 0x0  nop
    ctx->pc = 0x1dfcecu;
    // NOP
label_1dfcf0:
    // 0x1dfcf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dfcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfcf4:
    // 0x1dfcf4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1dfcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1dfcf8:
    // 0x1dfcf8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dfcf8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1dfcfc:
    // 0x1dfcfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfcfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfd00:
    // 0x1dfd00: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1dfd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfd04:
    // 0x1dfd04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dfd04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dfd08:
    // 0x1dfd08: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1dfd0c:
    if (ctx->pc == 0x1DFD0Cu) {
        ctx->pc = 0x1DFD0Cu;
            // 0x1dfd0c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1DFD10u;
        goto label_1dfd10;
    }
    ctx->pc = 0x1DFD08u;
    {
        const bool branch_taken_0x1dfd08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD08u;
            // 0x1dfd0c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd08) {
            ctx->pc = 0x1DFD28u;
            goto label_1dfd28;
        }
    }
    ctx->pc = 0x1DFD10u;
label_1dfd10:
    // 0x1dfd10: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1dfd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1dfd14:
    // 0x1dfd14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dfd14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1dfd18:
    // 0x1dfd18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfd18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfd1c:
    // 0x1dfd1c: 0x0  nop
    ctx->pc = 0x1dfd1cu;
    // NOP
label_1dfd20:
    // 0x1dfd20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dfd20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1dfd24:
    // 0x1dfd24: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1dfd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1dfd28:
    // 0x1dfd28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dfd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfd2c:
    // 0x1dfd2c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1dfd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1dfd30:
    // 0x1dfd30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dfd30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1dfd34:
    // 0x1dfd34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfd34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfd38:
    // 0x1dfd38: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1dfd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfd3c:
    // 0x1dfd3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dfd3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dfd40:
    // 0x1dfd40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1dfd44:
    if (ctx->pc == 0x1DFD44u) {
        ctx->pc = 0x1DFD44u;
            // 0x1dfd44: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1DFD48u;
        goto label_1dfd48;
    }
    ctx->pc = 0x1DFD40u;
    {
        const bool branch_taken_0x1dfd40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD40u;
            // 0x1dfd44: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd40) {
            ctx->pc = 0x1DFD60u;
            goto label_1dfd60;
        }
    }
    ctx->pc = 0x1DFD48u;
label_1dfd48:
    // 0x1dfd48: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1dfd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1dfd4c:
    // 0x1dfd4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dfd4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1dfd50:
    // 0x1dfd50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfd54:
    // 0x1dfd54: 0x0  nop
    ctx->pc = 0x1dfd54u;
    // NOP
label_1dfd58:
    // 0x1dfd58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dfd58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dfd5c:
    // 0x1dfd5c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1dfd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1dfd60:
    // 0x1dfd60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dfd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfd64:
    // 0x1dfd64: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1dfd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1dfd68:
    // 0x1dfd68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dfd68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1dfd6c:
    // 0x1dfd6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfd70:
    // 0x1dfd70: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1dfd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfd74:
    // 0x1dfd74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dfd74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dfd78:
    // 0x1dfd78: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1dfd7c:
    if (ctx->pc == 0x1DFD7Cu) {
        ctx->pc = 0x1DFD7Cu;
            // 0x1dfd7c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1DFD80u;
        goto label_1dfd80;
    }
    ctx->pc = 0x1DFD78u;
    {
        const bool branch_taken_0x1dfd78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD78u;
            // 0x1dfd7c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd78) {
            ctx->pc = 0x1DFD98u;
            goto label_1dfd98;
        }
    }
    ctx->pc = 0x1DFD80u;
label_1dfd80:
    // 0x1dfd80: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1dfd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1dfd84:
    // 0x1dfd84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dfd84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1dfd88:
    // 0x1dfd88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfd8c:
    // 0x1dfd8c: 0x0  nop
    ctx->pc = 0x1dfd8cu;
    // NOP
label_1dfd90:
    // 0x1dfd90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dfd90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1dfd94:
    // 0x1dfd94: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1dfd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1dfd98:
    // 0x1dfd98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dfd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfd9c:
    // 0x1dfd9c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1dfd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1dfda0:
    // 0x1dfda0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1dfda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dfda4:
    // 0x1dfda4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1dfda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1dfda8:
    // 0x1dfda8: 0xc0781a0  jal         func_1E0680
label_1dfdac:
    if (ctx->pc == 0x1DFDACu) {
        ctx->pc = 0x1DFDACu;
            // 0x1dfdac: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x1DFDB0u;
        goto label_1dfdb0;
    }
    ctx->pc = 0x1DFDA8u;
    SET_GPR_U32(ctx, 31, 0x1DFDB0u);
    ctx->pc = 0x1DFDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFDA8u;
            // 0x1dfdac: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0680u;
    if (runtime->hasFunction(0x1E0680u)) {
        auto targetFn = runtime->lookupFunction(0x1E0680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDB0u; }
        if (ctx->pc != 0x1DFDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1e0680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDB0u; }
        if (ctx->pc != 0x1DFDB0u) { return; }
    }
    ctx->pc = 0x1DFDB0u;
label_1dfdb0:
    // 0x1dfdb0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1dfdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1dfdb4:
    // 0x1dfdb4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1dfdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1dfdb8:
    // 0x1dfdb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1dfdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1dfdbc:
    // 0x1dfdbc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1dfdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1dfdc0:
    // 0x1dfdc0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dfdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1dfdc4:
    // 0x1dfdc4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_1dfdc8:
    if (ctx->pc == 0x1DFDC8u) {
        ctx->pc = 0x1DFDCCu;
        goto label_1dfdcc;
    }
    ctx->pc = 0x1DFDC4u;
    {
        const bool branch_taken_0x1dfdc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfdc4) {
            ctx->pc = 0x1DFE20u;
            goto label_1dfe20;
        }
    }
    ctx->pc = 0x1DFDCCu;
label_1dfdcc:
    // 0x1dfdcc: 0xc050bb4  jal         func_142ED0
label_1dfdd0:
    if (ctx->pc == 0x1DFDD0u) {
        ctx->pc = 0x1DFDD4u;
        goto label_1dfdd4;
    }
    ctx->pc = 0x1DFDCCu;
    SET_GPR_U32(ctx, 31, 0x1DFDD4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDD4u; }
        if (ctx->pc != 0x1DFDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDD4u; }
        if (ctx->pc != 0x1DFDD4u) { return; }
    }
    ctx->pc = 0x1DFDD4u;
label_1dfdd4:
    // 0x1dfdd4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1dfdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1dfdd8:
    // 0x1dfdd8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1dfdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1dfddc:
    // 0x1dfddc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1dfddcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1dfde0:
    // 0x1dfde0: 0x0  nop
    ctx->pc = 0x1dfde0u;
    // NOP
label_1dfde4:
    // 0x1dfde4: 0x0  nop
    ctx->pc = 0x1dfde4u;
    // NOP
label_1dfde8:
    // 0x1dfde8: 0x1010  mfhi        $v0
    ctx->pc = 0x1dfde8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1dfdec:
    // 0x1dfdec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1dfdecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1dfdf0:
    // 0x1dfdf0: 0xc050bb4  jal         func_142ED0
label_1dfdf4:
    if (ctx->pc == 0x1DFDF4u) {
        ctx->pc = 0x1DFDF4u;
            // 0x1dfdf4: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1DFDF8u;
        goto label_1dfdf8;
    }
    ctx->pc = 0x1DFDF0u;
    SET_GPR_U32(ctx, 31, 0x1DFDF8u);
    ctx->pc = 0x1DFDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFDF0u;
            // 0x1dfdf4: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDF8u; }
        if (ctx->pc != 0x1DFDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDF8u; }
        if (ctx->pc != 0x1DFDF8u) { return; }
    }
    ctx->pc = 0x1DFDF8u;
label_1dfdf8:
    // 0x1dfdf8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1dfdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1dfdfc:
    // 0x1dfdfc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1dfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1dfe00:
    // 0x1dfe00: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1dfe00u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1dfe04:
    // 0x1dfe04: 0x0  nop
    ctx->pc = 0x1dfe04u;
    // NOP
label_1dfe08:
    // 0x1dfe08: 0x0  nop
    ctx->pc = 0x1dfe08u;
    // NOP
label_1dfe0c:
    // 0x1dfe0c: 0x1010  mfhi        $v0
    ctx->pc = 0x1dfe0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1dfe10:
    // 0x1dfe10: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1dfe10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1dfe14:
    // 0x1dfe14: 0x1000009c  b           . + 4 + (0x9C << 2)
label_1dfe18:
    if (ctx->pc == 0x1DFE18u) {
        ctx->pc = 0x1DFE18u;
            // 0x1dfe18: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x1DFE1Cu;
        goto label_1dfe1c;
    }
    ctx->pc = 0x1DFE14u;
    {
        const bool branch_taken_0x1dfe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE14u;
            // 0x1dfe18: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe14) {
            ctx->pc = 0x1E0088u;
            goto label_1e0088;
        }
    }
    ctx->pc = 0x1DFE1Cu;
label_1dfe1c:
    // 0x1dfe1c: 0x0  nop
    ctx->pc = 0x1dfe1cu;
    // NOP
label_1dfe20:
    // 0x1dfe20: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x1dfe20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
label_1dfe24:
    // 0x1dfe24: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
label_1dfe28:
    if (ctx->pc == 0x1DFE28u) {
        ctx->pc = 0x1DFE28u;
            // 0x1dfe28: 0x2861005a  slti        $at, $v1, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->pc = 0x1DFE2Cu;
        goto label_1dfe2c;
    }
    ctx->pc = 0x1DFE24u;
    {
        const bool branch_taken_0x1dfe24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE24u;
            // 0x1dfe28: 0x2861005a  slti        $at, $v1, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe24) {
            ctx->pc = 0x1E0088u;
            goto label_1e0088;
        }
    }
    ctx->pc = 0x1DFE2Cu;
label_1dfe2c:
    // 0x1dfe2c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1dfe30:
    if (ctx->pc == 0x1DFE30u) {
        ctx->pc = 0x1DFE34u;
        goto label_1dfe34;
    }
    ctx->pc = 0x1DFE2Cu;
    {
        const bool branch_taken_0x1dfe2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfe2c) {
            ctx->pc = 0x1DFE58u;
            goto label_1dfe58;
        }
    }
    ctx->pc = 0x1DFE34u;
label_1dfe34:
    // 0x1dfe34: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1dfe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dfe38:
    // 0x1dfe38: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x1dfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_1dfe3c:
    // 0x1dfe3c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1dfe3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
label_1dfe40:
    // 0x1dfe40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dfe40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dfe44:
    // 0x1dfe44: 0x0  nop
    ctx->pc = 0x1dfe44u;
    // NOP
label_1dfe48:
    // 0x1dfe48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1dfe48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1dfe4c:
    // 0x1dfe4c: 0x1000008e  b           . + 4 + (0x8E << 2)
label_1dfe50:
    if (ctx->pc == 0x1DFE50u) {
        ctx->pc = 0x1DFE50u;
            // 0x1dfe50: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1DFE54u;
        goto label_1dfe54;
    }
    ctx->pc = 0x1DFE4Cu;
    {
        const bool branch_taken_0x1dfe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE4Cu;
            // 0x1dfe50: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe4c) {
            ctx->pc = 0x1E0088u;
            goto label_1e0088;
        }
    }
    ctx->pc = 0x1DFE54u;
label_1dfe54:
    // 0x1dfe54: 0x0  nop
    ctx->pc = 0x1dfe54u;
    // NOP
label_1dfe58:
    // 0x1dfe58: 0x28610104  slti        $at, $v1, 0x104
    ctx->pc = 0x1dfe58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)260) ? 1 : 0);
label_1dfe5c:
    // 0x1dfe5c: 0x10200076  beqz        $at, . + 4 + (0x76 << 2)
label_1dfe60:
    if (ctx->pc == 0x1DFE60u) {
        ctx->pc = 0x1DFE64u;
        goto label_1dfe64;
    }
    ctx->pc = 0x1DFE5Cu;
    {
        const bool branch_taken_0x1dfe5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfe5c) {
            ctx->pc = 0x1E0038u;
            goto label_1e0038;
        }
    }
    ctx->pc = 0x1DFE64u;
label_1dfe64:
    // 0x1dfe64: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1dfe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1dfe68:
    // 0x1dfe68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dfe6c:
    // 0x1dfe6c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1dfe70:
    if (ctx->pc == 0x1DFE70u) {
        ctx->pc = 0x1DFE74u;
        goto label_1dfe74;
    }
    ctx->pc = 0x1DFE6Cu;
    {
        const bool branch_taken_0x1dfe6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dfe6c) {
            ctx->pc = 0x1DFEB0u;
            goto label_1dfeb0;
        }
    }
    ctx->pc = 0x1DFE74u;
label_1dfe74:
    // 0x1dfe74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1dfe78:
    if (ctx->pc == 0x1DFE78u) {
        ctx->pc = 0x1DFE7Cu;
        goto label_1dfe7c;
    }
    ctx->pc = 0x1DFE74u;
    {
        const bool branch_taken_0x1dfe74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfe74) {
            ctx->pc = 0x1DFE88u;
            goto label_1dfe88;
        }
    }
    ctx->pc = 0x1DFE7Cu;
label_1dfe7c:
    // 0x1dfe7c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1dfe80:
    if (ctx->pc == 0x1DFE80u) {
        ctx->pc = 0x1DFE84u;
        goto label_1dfe84;
    }
    ctx->pc = 0x1DFE7Cu;
    {
        const bool branch_taken_0x1dfe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfe7c) {
            ctx->pc = 0x1DFED0u;
            goto label_1dfed0;
        }
    }
    ctx->pc = 0x1DFE84u;
label_1dfe84:
    // 0x1dfe84: 0x0  nop
    ctx->pc = 0x1dfe84u;
    // NOP
label_1dfe88:
    // 0x1dfe88: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1dfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1dfe8c:
    // 0x1dfe8c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1dfe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfe90:
    // 0x1dfe90: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1dfe90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1dfe94:
    // 0x1dfe94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfe94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfe98:
    // 0x1dfe98: 0x0  nop
    ctx->pc = 0x1dfe98u;
    // NOP
label_1dfe9c:
    // 0x1dfe9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dfe9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dfea0:
    // 0x1dfea0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1dfea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1dfea4:
    // 0x1dfea4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dfea8:
    if (ctx->pc == 0x1DFEA8u) {
        ctx->pc = 0x1DFEA8u;
            // 0x1dfea8: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x1DFEACu;
        goto label_1dfeac;
    }
    ctx->pc = 0x1DFEA4u;
    {
        const bool branch_taken_0x1dfea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFEA4u;
            // 0x1dfea8: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfea4) {
            ctx->pc = 0x1DFED0u;
            goto label_1dfed0;
        }
    }
    ctx->pc = 0x1DFEACu;
label_1dfeac:
    // 0x1dfeac: 0x0  nop
    ctx->pc = 0x1dfeacu;
    // NOP
label_1dfeb0:
    // 0x1dfeb0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1dfeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1dfeb4:
    // 0x1dfeb4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1dfeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfeb8:
    // 0x1dfeb8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1dfeb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1dfebc:
    // 0x1dfebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfec0:
    // 0x1dfec0: 0x0  nop
    ctx->pc = 0x1dfec0u;
    // NOP
label_1dfec4:
    // 0x1dfec4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dfec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1dfec8:
    // 0x1dfec8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1dfec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1dfecc:
    // 0x1dfecc: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1dfeccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_1dfed0:
    // 0x1dfed0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dfed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1dfed4:
    // 0x1dfed4: 0x240200d2  addiu       $v0, $zero, 0xD2
    ctx->pc = 0x1dfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_1dfed8:
    // 0x1dfed8: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
label_1dfedc:
    if (ctx->pc == 0x1DFEDCu) {
        ctx->pc = 0x1DFEDCu;
            // 0x1dfedc: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->pc = 0x1DFEE0u;
        goto label_1dfee0;
    }
    ctx->pc = 0x1DFED8u;
    {
        const bool branch_taken_0x1dfed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFED8u;
            // 0x1dfedc: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfed8) {
            ctx->pc = 0x1DFFD8u;
            goto label_1dffd8;
        }
    }
    ctx->pc = 0x1DFEE0u;
label_1dfee0:
    // 0x1dfee0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_1dfee4:
    if (ctx->pc == 0x1DFEE4u) {
        ctx->pc = 0x1DFEE8u;
        goto label_1dfee8;
    }
    ctx->pc = 0x1DFEE0u;
    {
        const bool branch_taken_0x1dfee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dfee0) {
            ctx->pc = 0x1DFF60u;
            goto label_1dff60;
        }
    }
    ctx->pc = 0x1DFEE8u;
label_1dfee8:
    // 0x1dfee8: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1dfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_1dfeec:
    // 0x1dfeec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1dfef0:
    if (ctx->pc == 0x1DFEF0u) {
        ctx->pc = 0x1DFEF4u;
        goto label_1dfef4;
    }
    ctx->pc = 0x1DFEECu;
    {
        const bool branch_taken_0x1dfeec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dfeec) {
            ctx->pc = 0x1DFF00u;
            goto label_1dff00;
        }
    }
    ctx->pc = 0x1DFEF4u;
label_1dfef4:
    // 0x1dfef4: 0x10000064  b           . + 4 + (0x64 << 2)
label_1dfef8:
    if (ctx->pc == 0x1DFEF8u) {
        ctx->pc = 0x1DFEFCu;
        goto label_1dfefc;
    }
    ctx->pc = 0x1DFEF4u;
    {
        const bool branch_taken_0x1dfef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfef4) {
            ctx->pc = 0x1E0088u;
            goto label_1e0088;
        }
    }
    ctx->pc = 0x1DFEFCu;
label_1dfefc:
    // 0x1dfefc: 0x0  nop
    ctx->pc = 0x1dfefcu;
    // NOP
label_1dff00:
    // 0x1dff00: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1dff00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1dff04:
    // 0x1dff04: 0xc0655a8  jal         func_1956A0
label_1dff08:
    if (ctx->pc == 0x1DFF08u) {
        ctx->pc = 0x1DFF08u;
            // 0x1dff08: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1DFF0Cu;
        goto label_1dff0c;
    }
    ctx->pc = 0x1DFF04u;
    SET_GPR_U32(ctx, 31, 0x1DFF0Cu);
    ctx->pc = 0x1DFF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF04u;
            // 0x1dff08: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF0Cu; }
        if (ctx->pc != 0x1DFF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF0Cu; }
        if (ctx->pc != 0x1DFF0Cu) { return; }
    }
    ctx->pc = 0x1DFF0Cu;
label_1dff0c:
    // 0x1dff0c: 0xc065d00  jal         func_197400
label_1dff10:
    if (ctx->pc == 0x1DFF10u) {
        ctx->pc = 0x1DFF14u;
        goto label_1dff14;
    }
    ctx->pc = 0x1DFF0Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF14u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF14u; }
        if (ctx->pc != 0x1DFF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF14u; }
        if (ctx->pc != 0x1DFF14u) { return; }
    }
    ctx->pc = 0x1DFF14u;
label_1dff14:
    // 0x1dff14: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1dff14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1dff18:
    // 0x1dff18: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1dff1c:
    if (ctx->pc == 0x1DFF1Cu) {
        ctx->pc = 0x1DFF20u;
        goto label_1dff20;
    }
    ctx->pc = 0x1DFF18u;
    {
        const bool branch_taken_0x1dff18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dff18) {
            ctx->pc = 0x1DFF30u;
            goto label_1dff30;
        }
    }
    ctx->pc = 0x1DFF20u;
label_1dff20:
    // 0x1dff20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dff20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dff24:
    // 0x1dff24: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1dff24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1dff28:
    // 0x1dff28: 0xc0655b0  jal         func_1956C0
label_1dff2c:
    if (ctx->pc == 0x1DFF2Cu) {
        ctx->pc = 0x1DFF2Cu;
            // 0x1dff2c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1DFF30u;
        goto label_1dff30;
    }
    ctx->pc = 0x1DFF28u;
    SET_GPR_U32(ctx, 31, 0x1DFF30u);
    ctx->pc = 0x1DFF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF28u;
            // 0x1dff2c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF30u; }
        if (ctx->pc != 0x1DFF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF30u; }
        if (ctx->pc != 0x1DFF30u) { return; }
    }
    ctx->pc = 0x1DFF30u;
label_1dff30:
    // 0x1dff30: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1dff30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1dff34:
    // 0x1dff34: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x1dff34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_1dff38:
    // 0x1dff38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dff38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dff3c:
    // 0x1dff3c: 0xc0655b0  jal         func_1956C0
label_1dff40:
    if (ctx->pc == 0x1DFF40u) {
        ctx->pc = 0x1DFF40u;
            // 0x1dff40: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1DFF44u;
        goto label_1dff44;
    }
    ctx->pc = 0x1DFF3Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF44u);
    ctx->pc = 0x1DFF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF3Cu;
            // 0x1dff40: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF44u; }
        if (ctx->pc != 0x1DFF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF44u; }
        if (ctx->pc != 0x1DFF44u) { return; }
    }
    ctx->pc = 0x1DFF44u;
label_1dff44:
    // 0x1dff44: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1dff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1dff48:
    // 0x1dff48: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1dff48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1dff4c:
    // 0x1dff4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dff4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dff50:
    // 0x1dff50: 0xc0655b0  jal         func_1956C0
label_1dff54:
    if (ctx->pc == 0x1DFF54u) {
        ctx->pc = 0x1DFF54u;
            // 0x1dff54: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1DFF58u;
        goto label_1dff58;
    }
    ctx->pc = 0x1DFF50u;
    SET_GPR_U32(ctx, 31, 0x1DFF58u);
    ctx->pc = 0x1DFF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF50u;
            // 0x1dff54: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF58u; }
        if (ctx->pc != 0x1DFF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF58u; }
        if (ctx->pc != 0x1DFF58u) { return; }
    }
    ctx->pc = 0x1DFF58u;
label_1dff58:
    // 0x1dff58: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1dff5c:
    if (ctx->pc == 0x1DFF5Cu) {
        ctx->pc = 0x1DFF60u;
        goto label_1dff60;
    }
    ctx->pc = 0x1DFF58u;
    {
        const bool branch_taken_0x1dff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dff58) {
            ctx->pc = 0x1E0088u;
            goto label_1e0088;
        }
    }
    ctx->pc = 0x1DFF60u;
label_1dff60:
    // 0x1dff60: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1dff60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1dff64:
    // 0x1dff64: 0xc0655a8  jal         func_1956A0
label_1dff68:
    if (ctx->pc == 0x1DFF68u) {
        ctx->pc = 0x1DFF68u;
            // 0x1dff68: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1DFF6Cu;
        goto label_1dff6c;
    }
    ctx->pc = 0x1DFF64u;
    SET_GPR_U32(ctx, 31, 0x1DFF6Cu);
    ctx->pc = 0x1DFF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF64u;
            // 0x1dff68: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF6Cu; }
        if (ctx->pc != 0x1DFF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF6Cu; }
        if (ctx->pc != 0x1DFF6Cu) { return; }
    }
    ctx->pc = 0x1DFF6Cu;
label_1dff6c:
    // 0x1dff6c: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x1dff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
label_1dff70:
    // 0x1dff70: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1dff70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1dff74:
    // 0x1dff74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dff74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dff78:
    // 0x1dff78: 0xc0655b0  jal         func_1956C0
label_1dff7c:
    if (ctx->pc == 0x1DFF7Cu) {
        ctx->pc = 0x1DFF7Cu;
            // 0x1dff7c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1DFF80u;
        goto label_1dff80;
    }
    ctx->pc = 0x1DFF78u;
    SET_GPR_U32(ctx, 31, 0x1DFF80u);
    ctx->pc = 0x1DFF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF78u;
            // 0x1dff7c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF80u; }
        if (ctx->pc != 0x1DFF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF80u; }
        if (ctx->pc != 0x1DFF80u) { return; }
    }
    ctx->pc = 0x1DFF80u;
label_1dff80:
    // 0x1dff80: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1dff80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_1dff84:
    // 0x1dff84: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1dff84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1dff88:
    // 0x1dff88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dff88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dff8c:
    // 0x1dff8c: 0xc0655b0  jal         func_1956C0
label_1dff90:
    if (ctx->pc == 0x1DFF90u) {
        ctx->pc = 0x1DFF90u;
            // 0x1dff90: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1DFF94u;
        goto label_1dff94;
    }
    ctx->pc = 0x1DFF8Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF94u);
    ctx->pc = 0x1DFF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF8Cu;
            // 0x1dff90: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF94u; }
        if (ctx->pc != 0x1DFF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF94u; }
        if (ctx->pc != 0x1DFF94u) { return; }
    }
    ctx->pc = 0x1DFF94u;
label_1dff94:
    // 0x1dff94: 0xc065d00  jal         func_197400
label_1dff98:
    if (ctx->pc == 0x1DFF98u) {
        ctx->pc = 0x1DFF9Cu;
        goto label_1dff9c;
    }
    ctx->pc = 0x1DFF94u;
    SET_GPR_U32(ctx, 31, 0x1DFF9Cu);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF9Cu; }
        if (ctx->pc != 0x1DFF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF9Cu; }
        if (ctx->pc != 0x1DFF9Cu) { return; }
    }
    ctx->pc = 0x1DFF9Cu;
label_1dff9c:
    // 0x1dff9c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1dff9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1dffa0:
    // 0x1dffa0: 0x14200039  bnez        $at, . + 4 + (0x39 << 2)
label_1dffa4:
    if (ctx->pc == 0x1DFFA4u) {
        ctx->pc = 0x1DFFA8u;
        goto label_1dffa8;
    }
    ctx->pc = 0x1DFFA0u;
    {
        const bool branch_taken_0x1dffa0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dffa0) {
            ctx->pc = 0x1E0088u;
            goto label_1e0088;
        }
    }
    ctx->pc = 0x1DFFA8u;
label_1dffa8:
    // 0x1dffa8: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x1dffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_1dffac:
    // 0x1dffac: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1dffacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1dffb0:
    // 0x1dffb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dffb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dffb4:
    // 0x1dffb4: 0xc0655b0  jal         func_1956C0
label_1dffb8:
    if (ctx->pc == 0x1DFFB8u) {
        ctx->pc = 0x1DFFB8u;
            // 0x1dffb8: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1DFFBCu;
        goto label_1dffbc;
    }
    ctx->pc = 0x1DFFB4u;
    SET_GPR_U32(ctx, 31, 0x1DFFBCu);
    ctx->pc = 0x1DFFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFFB4u;
            // 0x1dffb8: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFBCu; }
        if (ctx->pc != 0x1DFFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFBCu; }
        if (ctx->pc != 0x1DFFBCu) { return; }
    }
    ctx->pc = 0x1DFFBCu;
label_1dffbc:
    // 0x1dffbc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1dffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1dffc0:
    // 0x1dffc0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1dffc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1dffc4:
    // 0x1dffc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dffc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dffc8:
    // 0x1dffc8: 0xc0655b0  jal         func_1956C0
label_1dffcc:
    if (ctx->pc == 0x1DFFCCu) {
        ctx->pc = 0x1DFFCCu;
            // 0x1dffcc: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1DFFD0u;
        goto label_1dffd0;
    }
    ctx->pc = 0x1DFFC8u;
    SET_GPR_U32(ctx, 31, 0x1DFFD0u);
    ctx->pc = 0x1DFFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFFC8u;
            // 0x1dffcc: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFD0u; }
        if (ctx->pc != 0x1DFFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFD0u; }
        if (ctx->pc != 0x1DFFD0u) { return; }
    }
    ctx->pc = 0x1DFFD0u;
label_1dffd0:
    // 0x1dffd0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1dffd4:
    if (ctx->pc == 0x1DFFD4u) {
        ctx->pc = 0x1DFFD8u;
        goto label_1dffd8;
    }
    ctx->pc = 0x1DFFD0u;
    {
        const bool branch_taken_0x1dffd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dffd0) {
            ctx->pc = 0x1E0088u;
            goto label_1e0088;
        }
    }
    ctx->pc = 0x1DFFD8u;
label_1dffd8:
    // 0x1dffd8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1dffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1dffdc:
    // 0x1dffdc: 0xc0655a8  jal         func_1956A0
label_1dffe0:
    if (ctx->pc == 0x1DFFE0u) {
        ctx->pc = 0x1DFFE0u;
            // 0x1dffe0: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1DFFE4u;
        goto label_1dffe4;
    }
    ctx->pc = 0x1DFFDCu;
    SET_GPR_U32(ctx, 31, 0x1DFFE4u);
    ctx->pc = 0x1DFFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFFDCu;
            // 0x1dffe0: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFE4u; }
        if (ctx->pc != 0x1DFFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFE4u; }
        if (ctx->pc != 0x1DFFE4u) { return; }
    }
    ctx->pc = 0x1DFFE4u;
label_1dffe4:
    // 0x1dffe4: 0xc065d00  jal         func_197400
label_1dffe8:
    if (ctx->pc == 0x1DFFE8u) {
        ctx->pc = 0x1DFFECu;
        goto label_1dffec;
    }
    ctx->pc = 0x1DFFE4u;
    SET_GPR_U32(ctx, 31, 0x1DFFECu);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFECu; }
        if (ctx->pc != 0x1DFFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFECu; }
        if (ctx->pc != 0x1DFFECu) { return; }
    }
    ctx->pc = 0x1DFFECu;
label_1dffec:
    // 0x1dffec: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_1dfff0:
    if (ctx->pc == 0x1DFFF0u) {
        ctx->pc = 0x1DFFF4u;
        goto label_1dfff4;
    }
    ctx->pc = 0x1DFFECu;
    {
        const bool branch_taken_0x1dffec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dffec) {
            ctx->pc = 0x1E0008u;
            goto label_1e0008;
        }
    }
    ctx->pc = 0x1DFFF4u;
label_1dfff4:
    // 0x1dfff4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dfff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dfff8:
    // 0x1dfff8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1dfff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1dfffc:
    // 0x1dfffc: 0xc0655b0  jal         func_1956C0
label_1e0000:
    if (ctx->pc == 0x1E0000u) {
        ctx->pc = 0x1E0000u;
            // 0x1e0000: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1E0004u;
        goto label_1e0004;
    }
    ctx->pc = 0x1DFFFCu;
    SET_GPR_U32(ctx, 31, 0x1E0004u);
    ctx->pc = 0x1E0000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFFFCu;
            // 0x1e0000: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0004u; }
        if (ctx->pc != 0x1E0004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0004u; }
        if (ctx->pc != 0x1E0004u) { return; }
    }
    ctx->pc = 0x1E0004u;
label_1e0004:
    // 0x1e0004: 0x0  nop
    ctx->pc = 0x1e0004u;
    // NOP
label_1e0008:
    // 0x1e0008: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e0008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e000c:
    // 0x1e000c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x1e000cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_1e0010:
    // 0x1e0010: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e0010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e0014:
    // 0x1e0014: 0xc0655b0  jal         func_1956C0
label_1e0018:
    if (ctx->pc == 0x1E0018u) {
        ctx->pc = 0x1E0018u;
            // 0x1e0018: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1E001Cu;
        goto label_1e001c;
    }
    ctx->pc = 0x1E0014u;
    SET_GPR_U32(ctx, 31, 0x1E001Cu);
    ctx->pc = 0x1E0018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0014u;
            // 0x1e0018: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E001Cu; }
        if (ctx->pc != 0x1E001Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E001Cu; }
        if (ctx->pc != 0x1E001Cu) { return; }
    }
    ctx->pc = 0x1E001Cu;
label_1e001c:
    // 0x1e001c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1e001cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1e0020:
    // 0x1e0020: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e0020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e0024:
    // 0x1e0024: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e0024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e0028:
    // 0x1e0028: 0xc0655b0  jal         func_1956C0
label_1e002c:
    if (ctx->pc == 0x1E002Cu) {
        ctx->pc = 0x1E002Cu;
            // 0x1e002c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1E0030u;
        goto label_1e0030;
    }
    ctx->pc = 0x1E0028u;
    SET_GPR_U32(ctx, 31, 0x1E0030u);
    ctx->pc = 0x1E002Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0028u;
            // 0x1e002c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0030u; }
        if (ctx->pc != 0x1E0030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0030u; }
        if (ctx->pc != 0x1E0030u) { return; }
    }
    ctx->pc = 0x1E0030u;
label_1e0030:
    // 0x1e0030: 0x10000015  b           . + 4 + (0x15 << 2)
label_1e0034:
    if (ctx->pc == 0x1E0034u) {
        ctx->pc = 0x1E0038u;
        goto label_1e0038;
    }
    ctx->pc = 0x1E0030u;
    {
        const bool branch_taken_0x1e0030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0030) {
            ctx->pc = 0x1E0088u;
            goto label_1e0088;
        }
    }
    ctx->pc = 0x1E0038u;
label_1e0038:
    // 0x1e0038: 0x2861012c  slti        $at, $v1, 0x12C
    ctx->pc = 0x1e0038u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
label_1e003c:
    // 0x1e003c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1e0040:
    if (ctx->pc == 0x1E0040u) {
        ctx->pc = 0x1E0040u;
            // 0x1e0040: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->pc = 0x1E0044u;
        goto label_1e0044;
    }
    ctx->pc = 0x1E003Cu;
    {
        const bool branch_taken_0x1e003c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E003Cu;
            // 0x1e0040: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e003c) {
            ctx->pc = 0x1E0050u;
            goto label_1e0050;
        }
    }
    ctx->pc = 0x1E0044u;
label_1e0044:
    // 0x1e0044: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1e0044u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1e0048:
    // 0x1e0048: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e004c:
    if (ctx->pc == 0x1E004Cu) {
        ctx->pc = 0x1E004Cu;
            // 0x1e004c: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x1E0050u;
        goto label_1e0050;
    }
    ctx->pc = 0x1E0048u;
    {
        const bool branch_taken_0x1e0048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E004Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0048u;
            // 0x1e004c: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0048) {
            ctx->pc = 0x1E0088u;
            goto label_1e0088;
        }
    }
    ctx->pc = 0x1E0050u;
label_1e0050:
    // 0x1e0050: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x1e0050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_1e0054:
    // 0x1e0054: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1e0054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e0058:
    // 0x1e0058: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1e0058u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
label_1e005c:
    // 0x1e005c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e005cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e0060:
    // 0x1e0060: 0x3c023f81  lui         $v0, 0x3F81
    ctx->pc = 0x1e0060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16257 << 16));
label_1e0064:
    // 0x1e0064: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x1e0064u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18350u)));
label_1e0068:
    // 0x1e0068: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e006c:
    // 0x1e006c: 0x0  nop
    ctx->pc = 0x1e006cu;
    // NOP
label_1e0070:
    // 0x1e0070: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e0070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1e0074:
    // 0x1e0074: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1e0074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1e0078:
    // 0x1e0078: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e0078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e007c:
    // 0x1e007c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e007cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e0080:
    // 0x1e0080: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e0080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1e0084:
    // 0x1e0084: 0x0  nop
    ctx->pc = 0x1e0084u;
    // NOP
label_1e0088:
    // 0x1e0088: 0xc04b788  jal         func_12DE20
label_1e008c:
    if (ctx->pc == 0x1E008Cu) {
        ctx->pc = 0x1E008Cu;
            // 0x1e008c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E0090u;
        goto label_1e0090;
    }
    ctx->pc = 0x1E0088u;
    SET_GPR_U32(ctx, 31, 0x1E0090u);
    ctx->pc = 0x1E008Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0088u;
            // 0x1e008c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0090u; }
        if (ctx->pc != 0x1E0090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0090u; }
        if (ctx->pc != 0x1E0090u) { return; }
    }
    ctx->pc = 0x1E0090u;
label_1e0090:
    // 0x1e0090: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e0090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0094:
    // 0x1e0094: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1e0094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e0098:
    // 0x1e0098: 0xc04b7da  jal         func_12DF68
label_1e009c:
    if (ctx->pc == 0x1E009Cu) {
        ctx->pc = 0x1E009Cu;
            // 0x1e009c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E00A0u;
        goto label_1e00a0;
    }
    ctx->pc = 0x1E0098u;
    SET_GPR_U32(ctx, 31, 0x1E00A0u);
    ctx->pc = 0x1E009Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0098u;
            // 0x1e009c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00A0u; }
        if (ctx->pc != 0x1E00A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00A0u; }
        if (ctx->pc != 0x1E00A0u) { return; }
    }
    ctx->pc = 0x1E00A0u;
label_1e00a0:
    // 0x1e00a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e00a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e00a4:
    // 0x1e00a4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1e00a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e00a8:
    // 0x1e00a8: 0xc04b804  jal         func_12E010
label_1e00ac:
    if (ctx->pc == 0x1E00ACu) {
        ctx->pc = 0x1E00ACu;
            // 0x1e00ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E00B0u;
        goto label_1e00b0;
    }
    ctx->pc = 0x1E00A8u;
    SET_GPR_U32(ctx, 31, 0x1E00B0u);
    ctx->pc = 0x1E00ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00A8u;
            // 0x1e00ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00B0u; }
        if (ctx->pc != 0x1E00B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00B0u; }
        if (ctx->pc != 0x1E00B0u) { return; }
    }
    ctx->pc = 0x1E00B0u;
label_1e00b0:
    // 0x1e00b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e00b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e00b4:
    // 0x1e00b4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1e00b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e00b8:
    // 0x1e00b8: 0xc04b7b0  jal         func_12DEC0
label_1e00bc:
    if (ctx->pc == 0x1E00BCu) {
        ctx->pc = 0x1E00BCu;
            // 0x1e00bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E00C0u;
        goto label_1e00c0;
    }
    ctx->pc = 0x1E00B8u;
    SET_GPR_U32(ctx, 31, 0x1E00C0u);
    ctx->pc = 0x1E00BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00B8u;
            // 0x1e00bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00C0u; }
        if (ctx->pc != 0x1E00C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00C0u; }
        if (ctx->pc != 0x1E00C0u) { return; }
    }
    ctx->pc = 0x1E00C0u;
label_1e00c0:
    // 0x1e00c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e00c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e00c4:
    // 0x1e00c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e00c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e00c8:
    // 0x1e00c8: 0xc04b75e  jal         func_12DD78
label_1e00cc:
    if (ctx->pc == 0x1E00CCu) {
        ctx->pc = 0x1E00CCu;
            // 0x1e00cc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1E00D0u;
        goto label_1e00d0;
    }
    ctx->pc = 0x1E00C8u;
    SET_GPR_U32(ctx, 31, 0x1E00D0u);
    ctx->pc = 0x1E00CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00C8u;
            // 0x1e00cc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00D0u; }
        if (ctx->pc != 0x1E00D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00D0u; }
        if (ctx->pc != 0x1E00D0u) { return; }
    }
    ctx->pc = 0x1E00D0u;
label_1e00d0:
    // 0x1e00d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e00d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e00d4:
    // 0x1e00d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e00d8:
    // 0x1e00d8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e00d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e00dc:
    // 0x1e00dc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e00e0:
    if (ctx->pc == 0x1E00E0u) {
        ctx->pc = 0x1E00E4u;
        goto label_1e00e4;
    }
    ctx->pc = 0x1E00DCu;
    {
        const bool branch_taken_0x1e00dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e00dc) {
            ctx->pc = 0x1E0130u;
            goto label_1e0130;
        }
    }
    ctx->pc = 0x1E00E4u;
label_1e00e4:
    // 0x1e00e4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e00e8:
    // 0x1e00e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e00ec:
    if (ctx->pc == 0x1E00ECu) {
        ctx->pc = 0x1E00F0u;
        goto label_1e00f0;
    }
    ctx->pc = 0x1E00E8u;
    {
        const bool branch_taken_0x1e00e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e00e8) {
            ctx->pc = 0x1E0100u;
            goto label_1e0100;
        }
    }
    ctx->pc = 0x1E00F0u;
label_1e00f0:
    // 0x1e00f0: 0xc0604f0  jal         func_1813C0
label_1e00f4:
    if (ctx->pc == 0x1E00F4u) {
        ctx->pc = 0x1E00F4u;
            // 0x1e00f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E00F8u;
        goto label_1e00f8;
    }
    ctx->pc = 0x1E00F0u;
    SET_GPR_U32(ctx, 31, 0x1E00F8u);
    ctx->pc = 0x1E00F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00F0u;
            // 0x1e00f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00F8u; }
        if (ctx->pc != 0x1E00F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00F8u; }
        if (ctx->pc != 0x1E00F8u) { return; }
    }
    ctx->pc = 0x1E00F8u;
label_1e00f8:
    // 0x1e00f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e00fc:
    if (ctx->pc == 0x1E00FCu) {
        ctx->pc = 0x1E0100u;
        goto label_1e0100;
    }
    ctx->pc = 0x1E00F8u;
    {
        const bool branch_taken_0x1e00f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e00f8) {
            ctx->pc = 0x1E0108u;
            goto label_1e0108;
        }
    }
    ctx->pc = 0x1E0100u;
label_1e0100:
    // 0x1e0100: 0xc0604dc  jal         func_181370
label_1e0104:
    if (ctx->pc == 0x1E0104u) {
        ctx->pc = 0x1E0104u;
            // 0x1e0104: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E0108u;
        goto label_1e0108;
    }
    ctx->pc = 0x1E0100u;
    SET_GPR_U32(ctx, 31, 0x1E0108u);
    ctx->pc = 0x1E0104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0100u;
            // 0x1e0104: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0108u; }
        if (ctx->pc != 0x1E0108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0108u; }
        if (ctx->pc != 0x1E0108u) { return; }
    }
    ctx->pc = 0x1E0108u;
label_1e0108:
    // 0x1e0108: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e0108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e010c:
    // 0x1e010c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e0110:
    if (ctx->pc == 0x1E0110u) {
        ctx->pc = 0x1E0114u;
        goto label_1e0114;
    }
    ctx->pc = 0x1E010Cu;
    {
        const bool branch_taken_0x1e010c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e010c) {
            ctx->pc = 0x1E0120u;
            goto label_1e0120;
        }
    }
    ctx->pc = 0x1E0114u;
label_1e0114:
    // 0x1e0114: 0x10000022  b           . + 4 + (0x22 << 2)
label_1e0118:
    if (ctx->pc == 0x1E0118u) {
        ctx->pc = 0x1E0118u;
            // 0x1e0118: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x1E011Cu;
        goto label_1e011c;
    }
    ctx->pc = 0x1E0114u;
    {
        const bool branch_taken_0x1e0114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0114u;
            // 0x1e0118: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0114) {
            ctx->pc = 0x1E01A0u;
            goto label_1e01a0;
        }
    }
    ctx->pc = 0x1E011Cu;
label_1e011c:
    // 0x1e011c: 0x0  nop
    ctx->pc = 0x1e011cu;
    // NOP
label_1e0120:
    // 0x1e0120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0124:
    // 0x1e0124: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1e0128:
    if (ctx->pc == 0x1E0128u) {
        ctx->pc = 0x1E0128u;
            // 0x1e0128: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1E012Cu;
        goto label_1e012c;
    }
    ctx->pc = 0x1E0124u;
    {
        const bool branch_taken_0x1e0124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0124u;
            // 0x1e0128: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0124) {
            ctx->pc = 0x1E01A0u;
            goto label_1e01a0;
        }
    }
    ctx->pc = 0x1E012Cu;
label_1e012c:
    // 0x1e012c: 0x0  nop
    ctx->pc = 0x1e012cu;
    // NOP
label_1e0130:
    // 0x1e0130: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x1e0130u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
label_1e0134:
    // 0x1e0134: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1e0138:
    if (ctx->pc == 0x1E0138u) {
        ctx->pc = 0x1E013Cu;
        goto label_1e013c;
    }
    ctx->pc = 0x1E0134u;
    {
        const bool branch_taken_0x1e0134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0134) {
            ctx->pc = 0x1E0190u;
            goto label_1e0190;
        }
    }
    ctx->pc = 0x1E013Cu;
label_1e013c:
    // 0x1e013c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e013cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e0140:
    // 0x1e0140: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1e0140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e0144:
    // 0x1e0144: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e0144u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e0148:
    // 0x1e0148: 0x0  nop
    ctx->pc = 0x1e0148u;
    // NOP
label_1e014c:
    // 0x1e014c: 0x0  nop
    ctx->pc = 0x1e014cu;
    // NOP
label_1e0150:
    // 0x1e0150: 0x1010  mfhi        $v0
    ctx->pc = 0x1e0150u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e0154:
    // 0x1e0154: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e0158:
    if (ctx->pc == 0x1E0158u) {
        ctx->pc = 0x1E015Cu;
        goto label_1e015c;
    }
    ctx->pc = 0x1E0154u;
    {
        const bool branch_taken_0x1e0154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0154) {
            ctx->pc = 0x1E0190u;
            goto label_1e0190;
        }
    }
    ctx->pc = 0x1E015Cu;
label_1e015c:
    // 0x1e015c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e015cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e0160:
    // 0x1e0160: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1e0160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1e0164:
    // 0x1e0164: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1e0164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1e0168:
    // 0x1e0168: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e0168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e016c:
    // 0x1e016c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e016cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e0170:
    // 0x1e0170: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e0170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e0174:
    // 0x1e0174: 0xc0536d8  jal         func_14DB60
label_1e0178:
    if (ctx->pc == 0x1E0178u) {
        ctx->pc = 0x1E0178u;
            // 0x1e0178: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1E017Cu;
        goto label_1e017c;
    }
    ctx->pc = 0x1E0174u;
    SET_GPR_U32(ctx, 31, 0x1E017Cu);
    ctx->pc = 0x1E0178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0174u;
            // 0x1e0178: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E017Cu; }
        if (ctx->pc != 0x1E017Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E017Cu; }
        if (ctx->pc != 0x1E017Cu) { return; }
    }
    ctx->pc = 0x1E017Cu;
label_1e017c:
    // 0x1e017c: 0xc060500  jal         func_181400
label_1e0180:
    if (ctx->pc == 0x1E0180u) {
        ctx->pc = 0x1E0180u;
            // 0x1e0180: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E0184u;
        goto label_1e0184;
    }
    ctx->pc = 0x1E017Cu;
    SET_GPR_U32(ctx, 31, 0x1E0184u);
    ctx->pc = 0x1E0180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E017Cu;
            // 0x1e0180: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0184u; }
        if (ctx->pc != 0x1E0184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0184u; }
        if (ctx->pc != 0x1E0184u) { return; }
    }
    ctx->pc = 0x1E0184u;
label_1e0184:
    // 0x1e0184: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e0188:
    if (ctx->pc == 0x1E0188u) {
        ctx->pc = 0x1E018Cu;
        goto label_1e018c;
    }
    ctx->pc = 0x1E0184u;
    {
        const bool branch_taken_0x1e0184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0184) {
            ctx->pc = 0x1E0198u;
            goto label_1e0198;
        }
    }
    ctx->pc = 0x1E018Cu;
label_1e018c:
    // 0x1e018c: 0x0  nop
    ctx->pc = 0x1e018cu;
    // NOP
label_1e0190:
    // 0x1e0190: 0xc0604dc  jal         func_181370
label_1e0194:
    if (ctx->pc == 0x1E0194u) {
        ctx->pc = 0x1E0194u;
            // 0x1e0194: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E0198u;
        goto label_1e0198;
    }
    ctx->pc = 0x1E0190u;
    SET_GPR_U32(ctx, 31, 0x1E0198u);
    ctx->pc = 0x1E0194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0190u;
            // 0x1e0194: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0198u; }
        if (ctx->pc != 0x1E0198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0198u; }
        if (ctx->pc != 0x1E0198u) { return; }
    }
    ctx->pc = 0x1E0198u;
label_1e0198:
    // 0x1e0198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e019c:
    // 0x1e019c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1e019cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1e01a0:
    // 0x1e01a0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e01a4:
    // 0x1e01a4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1e01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1e01a8:
    // 0x1e01a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e01a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e01ac:
    // 0x1e01ac: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e01acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e01b0:
    // 0x1e01b0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1e01b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e01b4:
    // 0x1e01b4: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1e01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1e01b8:
    // 0x1e01b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e01b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e01bc:
    // 0x1e01bc: 0x0  nop
    ctx->pc = 0x1e01bcu;
    // NOP
label_1e01c0:
    // 0x1e01c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e01c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e01c4:
    // 0x1e01c4: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1e01c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1e01c8:
    // 0x1e01c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1e01c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e01cc:
    // 0x1e01cc: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1e01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1e01d0:
    // 0x1e01d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e01d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e01d4:
    // 0x1e01d4: 0x0  nop
    ctx->pc = 0x1e01d4u;
    // NOP
label_1e01d8:
    // 0x1e01d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e01d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e01dc:
    // 0x1e01dc: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1e01dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1e01e0:
    // 0x1e01e0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1e01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e01e4:
    // 0x1e01e4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1e01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1e01e8:
    // 0x1e01e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e01e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e01ec:
    // 0x1e01ec: 0x0  nop
    ctx->pc = 0x1e01ecu;
    // NOP
label_1e01f0:
    // 0x1e01f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e01f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e01f4:
    // 0x1e01f4: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1e01f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1e01f8:
    // 0x1e01f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1e01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e01fc:
    // 0x1e01fc: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x1e01fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_1e0200:
    // 0x1e0200: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e0204:
    // 0x1e0204: 0x0  nop
    ctx->pc = 0x1e0204u;
    // NOP
label_1e0208:
    // 0x1e0208: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e0208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e020c:
    // 0x1e020c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1e020cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1e0210:
    // 0x1e0210: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e0210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e0214:
    // 0x1e0214: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e0218:
    // 0x1e0218: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1e0218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1e021c:
    // 0x1e021c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0220:
    // 0x1e0220: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e0220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e0224:
    // 0x1e0224: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e0224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e0228:
    // 0x1e0228: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e022c:
    if (ctx->pc == 0x1E022Cu) {
        ctx->pc = 0x1E0230u;
        goto label_1e0230;
    }
    ctx->pc = 0x1E0228u;
    {
        const bool branch_taken_0x1e0228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0228) {
            ctx->pc = 0x1E0248u;
            goto label_1e0248;
        }
    }
    ctx->pc = 0x1E0230u;
label_1e0230:
    // 0x1e0230: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e0230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1e0234:
    // 0x1e0234: 0x40f809  jalr        $v0
label_1e0238:
    if (ctx->pc == 0x1E0238u) {
        ctx->pc = 0x1E0238u;
            // 0x1e0238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E023Cu;
        goto label_1e023c;
    }
    ctx->pc = 0x1E0234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E023Cu);
        ctx->pc = 0x1E0238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0234u;
            // 0x1e0238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFC50u: goto label_1dfc50;
            case 0x1DFC54u: goto label_1dfc54;
            case 0x1DFC58u: goto label_1dfc58;
            case 0x1DFC5Cu: goto label_1dfc5c;
            case 0x1DFC60u: goto label_1dfc60;
            case 0x1DFC64u: goto label_1dfc64;
            case 0x1DFC68u: goto label_1dfc68;
            case 0x1DFC6Cu: goto label_1dfc6c;
            case 0x1DFC70u: goto label_1dfc70;
            case 0x1DFC74u: goto label_1dfc74;
            case 0x1DFC78u: goto label_1dfc78;
            case 0x1DFC7Cu: goto label_1dfc7c;
            case 0x1DFC80u: goto label_1dfc80;
            case 0x1DFC84u: goto label_1dfc84;
            case 0x1DFC88u: goto label_1dfc88;
            case 0x1DFC8Cu: goto label_1dfc8c;
            case 0x1DFC90u: goto label_1dfc90;
            case 0x1DFC94u: goto label_1dfc94;
            case 0x1DFC98u: goto label_1dfc98;
            case 0x1DFC9Cu: goto label_1dfc9c;
            case 0x1DFCA0u: goto label_1dfca0;
            case 0x1DFCA4u: goto label_1dfca4;
            case 0x1DFCA8u: goto label_1dfca8;
            case 0x1DFCACu: goto label_1dfcac;
            case 0x1DFCB0u: goto label_1dfcb0;
            case 0x1DFCB4u: goto label_1dfcb4;
            case 0x1DFCB8u: goto label_1dfcb8;
            case 0x1DFCBCu: goto label_1dfcbc;
            case 0x1DFCC0u: goto label_1dfcc0;
            case 0x1DFCC4u: goto label_1dfcc4;
            case 0x1DFCC8u: goto label_1dfcc8;
            case 0x1DFCCCu: goto label_1dfccc;
            case 0x1DFCD0u: goto label_1dfcd0;
            case 0x1DFCD4u: goto label_1dfcd4;
            case 0x1DFCD8u: goto label_1dfcd8;
            case 0x1DFCDCu: goto label_1dfcdc;
            case 0x1DFCE0u: goto label_1dfce0;
            case 0x1DFCE4u: goto label_1dfce4;
            case 0x1DFCE8u: goto label_1dfce8;
            case 0x1DFCECu: goto label_1dfcec;
            case 0x1DFCF0u: goto label_1dfcf0;
            case 0x1DFCF4u: goto label_1dfcf4;
            case 0x1DFCF8u: goto label_1dfcf8;
            case 0x1DFCFCu: goto label_1dfcfc;
            case 0x1DFD00u: goto label_1dfd00;
            case 0x1DFD04u: goto label_1dfd04;
            case 0x1DFD08u: goto label_1dfd08;
            case 0x1DFD0Cu: goto label_1dfd0c;
            case 0x1DFD10u: goto label_1dfd10;
            case 0x1DFD14u: goto label_1dfd14;
            case 0x1DFD18u: goto label_1dfd18;
            case 0x1DFD1Cu: goto label_1dfd1c;
            case 0x1DFD20u: goto label_1dfd20;
            case 0x1DFD24u: goto label_1dfd24;
            case 0x1DFD28u: goto label_1dfd28;
            case 0x1DFD2Cu: goto label_1dfd2c;
            case 0x1DFD30u: goto label_1dfd30;
            case 0x1DFD34u: goto label_1dfd34;
            case 0x1DFD38u: goto label_1dfd38;
            case 0x1DFD3Cu: goto label_1dfd3c;
            case 0x1DFD40u: goto label_1dfd40;
            case 0x1DFD44u: goto label_1dfd44;
            case 0x1DFD48u: goto label_1dfd48;
            case 0x1DFD4Cu: goto label_1dfd4c;
            case 0x1DFD50u: goto label_1dfd50;
            case 0x1DFD54u: goto label_1dfd54;
            case 0x1DFD58u: goto label_1dfd58;
            case 0x1DFD5Cu: goto label_1dfd5c;
            case 0x1DFD60u: goto label_1dfd60;
            case 0x1DFD64u: goto label_1dfd64;
            case 0x1DFD68u: goto label_1dfd68;
            case 0x1DFD6Cu: goto label_1dfd6c;
            case 0x1DFD70u: goto label_1dfd70;
            case 0x1DFD74u: goto label_1dfd74;
            case 0x1DFD78u: goto label_1dfd78;
            case 0x1DFD7Cu: goto label_1dfd7c;
            case 0x1DFD80u: goto label_1dfd80;
            case 0x1DFD84u: goto label_1dfd84;
            case 0x1DFD88u: goto label_1dfd88;
            case 0x1DFD8Cu: goto label_1dfd8c;
            case 0x1DFD90u: goto label_1dfd90;
            case 0x1DFD94u: goto label_1dfd94;
            case 0x1DFD98u: goto label_1dfd98;
            case 0x1DFD9Cu: goto label_1dfd9c;
            case 0x1DFDA0u: goto label_1dfda0;
            case 0x1DFDA4u: goto label_1dfda4;
            case 0x1DFDA8u: goto label_1dfda8;
            case 0x1DFDACu: goto label_1dfdac;
            case 0x1DFDB0u: goto label_1dfdb0;
            case 0x1DFDB4u: goto label_1dfdb4;
            case 0x1DFDB8u: goto label_1dfdb8;
            case 0x1DFDBCu: goto label_1dfdbc;
            case 0x1DFDC0u: goto label_1dfdc0;
            case 0x1DFDC4u: goto label_1dfdc4;
            case 0x1DFDC8u: goto label_1dfdc8;
            case 0x1DFDCCu: goto label_1dfdcc;
            case 0x1DFDD0u: goto label_1dfdd0;
            case 0x1DFDD4u: goto label_1dfdd4;
            case 0x1DFDD8u: goto label_1dfdd8;
            case 0x1DFDDCu: goto label_1dfddc;
            case 0x1DFDE0u: goto label_1dfde0;
            case 0x1DFDE4u: goto label_1dfde4;
            case 0x1DFDE8u: goto label_1dfde8;
            case 0x1DFDECu: goto label_1dfdec;
            case 0x1DFDF0u: goto label_1dfdf0;
            case 0x1DFDF4u: goto label_1dfdf4;
            case 0x1DFDF8u: goto label_1dfdf8;
            case 0x1DFDFCu: goto label_1dfdfc;
            case 0x1DFE00u: goto label_1dfe00;
            case 0x1DFE04u: goto label_1dfe04;
            case 0x1DFE08u: goto label_1dfe08;
            case 0x1DFE0Cu: goto label_1dfe0c;
            case 0x1DFE10u: goto label_1dfe10;
            case 0x1DFE14u: goto label_1dfe14;
            case 0x1DFE18u: goto label_1dfe18;
            case 0x1DFE1Cu: goto label_1dfe1c;
            case 0x1DFE20u: goto label_1dfe20;
            case 0x1DFE24u: goto label_1dfe24;
            case 0x1DFE28u: goto label_1dfe28;
            case 0x1DFE2Cu: goto label_1dfe2c;
            case 0x1DFE30u: goto label_1dfe30;
            case 0x1DFE34u: goto label_1dfe34;
            case 0x1DFE38u: goto label_1dfe38;
            case 0x1DFE3Cu: goto label_1dfe3c;
            case 0x1DFE40u: goto label_1dfe40;
            case 0x1DFE44u: goto label_1dfe44;
            case 0x1DFE48u: goto label_1dfe48;
            case 0x1DFE4Cu: goto label_1dfe4c;
            case 0x1DFE50u: goto label_1dfe50;
            case 0x1DFE54u: goto label_1dfe54;
            case 0x1DFE58u: goto label_1dfe58;
            case 0x1DFE5Cu: goto label_1dfe5c;
            case 0x1DFE60u: goto label_1dfe60;
            case 0x1DFE64u: goto label_1dfe64;
            case 0x1DFE68u: goto label_1dfe68;
            case 0x1DFE6Cu: goto label_1dfe6c;
            case 0x1DFE70u: goto label_1dfe70;
            case 0x1DFE74u: goto label_1dfe74;
            case 0x1DFE78u: goto label_1dfe78;
            case 0x1DFE7Cu: goto label_1dfe7c;
            case 0x1DFE80u: goto label_1dfe80;
            case 0x1DFE84u: goto label_1dfe84;
            case 0x1DFE88u: goto label_1dfe88;
            case 0x1DFE8Cu: goto label_1dfe8c;
            case 0x1DFE90u: goto label_1dfe90;
            case 0x1DFE94u: goto label_1dfe94;
            case 0x1DFE98u: goto label_1dfe98;
            case 0x1DFE9Cu: goto label_1dfe9c;
            case 0x1DFEA0u: goto label_1dfea0;
            case 0x1DFEA4u: goto label_1dfea4;
            case 0x1DFEA8u: goto label_1dfea8;
            case 0x1DFEACu: goto label_1dfeac;
            case 0x1DFEB0u: goto label_1dfeb0;
            case 0x1DFEB4u: goto label_1dfeb4;
            case 0x1DFEB8u: goto label_1dfeb8;
            case 0x1DFEBCu: goto label_1dfebc;
            case 0x1DFEC0u: goto label_1dfec0;
            case 0x1DFEC4u: goto label_1dfec4;
            case 0x1DFEC8u: goto label_1dfec8;
            case 0x1DFECCu: goto label_1dfecc;
            case 0x1DFED0u: goto label_1dfed0;
            case 0x1DFED4u: goto label_1dfed4;
            case 0x1DFED8u: goto label_1dfed8;
            case 0x1DFEDCu: goto label_1dfedc;
            case 0x1DFEE0u: goto label_1dfee0;
            case 0x1DFEE4u: goto label_1dfee4;
            case 0x1DFEE8u: goto label_1dfee8;
            case 0x1DFEECu: goto label_1dfeec;
            case 0x1DFEF0u: goto label_1dfef0;
            case 0x1DFEF4u: goto label_1dfef4;
            case 0x1DFEF8u: goto label_1dfef8;
            case 0x1DFEFCu: goto label_1dfefc;
            case 0x1DFF00u: goto label_1dff00;
            case 0x1DFF04u: goto label_1dff04;
            case 0x1DFF08u: goto label_1dff08;
            case 0x1DFF0Cu: goto label_1dff0c;
            case 0x1DFF10u: goto label_1dff10;
            case 0x1DFF14u: goto label_1dff14;
            case 0x1DFF18u: goto label_1dff18;
            case 0x1DFF1Cu: goto label_1dff1c;
            case 0x1DFF20u: goto label_1dff20;
            case 0x1DFF24u: goto label_1dff24;
            case 0x1DFF28u: goto label_1dff28;
            case 0x1DFF2Cu: goto label_1dff2c;
            case 0x1DFF30u: goto label_1dff30;
            case 0x1DFF34u: goto label_1dff34;
            case 0x1DFF38u: goto label_1dff38;
            case 0x1DFF3Cu: goto label_1dff3c;
            case 0x1DFF40u: goto label_1dff40;
            case 0x1DFF44u: goto label_1dff44;
            case 0x1DFF48u: goto label_1dff48;
            case 0x1DFF4Cu: goto label_1dff4c;
            case 0x1DFF50u: goto label_1dff50;
            case 0x1DFF54u: goto label_1dff54;
            case 0x1DFF58u: goto label_1dff58;
            case 0x1DFF5Cu: goto label_1dff5c;
            case 0x1DFF60u: goto label_1dff60;
            case 0x1DFF64u: goto label_1dff64;
            case 0x1DFF68u: goto label_1dff68;
            case 0x1DFF6Cu: goto label_1dff6c;
            case 0x1DFF70u: goto label_1dff70;
            case 0x1DFF74u: goto label_1dff74;
            case 0x1DFF78u: goto label_1dff78;
            case 0x1DFF7Cu: goto label_1dff7c;
            case 0x1DFF80u: goto label_1dff80;
            case 0x1DFF84u: goto label_1dff84;
            case 0x1DFF88u: goto label_1dff88;
            case 0x1DFF8Cu: goto label_1dff8c;
            case 0x1DFF90u: goto label_1dff90;
            case 0x1DFF94u: goto label_1dff94;
            case 0x1DFF98u: goto label_1dff98;
            case 0x1DFF9Cu: goto label_1dff9c;
            case 0x1DFFA0u: goto label_1dffa0;
            case 0x1DFFA4u: goto label_1dffa4;
            case 0x1DFFA8u: goto label_1dffa8;
            case 0x1DFFACu: goto label_1dffac;
            case 0x1DFFB0u: goto label_1dffb0;
            case 0x1DFFB4u: goto label_1dffb4;
            case 0x1DFFB8u: goto label_1dffb8;
            case 0x1DFFBCu: goto label_1dffbc;
            case 0x1DFFC0u: goto label_1dffc0;
            case 0x1DFFC4u: goto label_1dffc4;
            case 0x1DFFC8u: goto label_1dffc8;
            case 0x1DFFCCu: goto label_1dffcc;
            case 0x1DFFD0u: goto label_1dffd0;
            case 0x1DFFD4u: goto label_1dffd4;
            case 0x1DFFD8u: goto label_1dffd8;
            case 0x1DFFDCu: goto label_1dffdc;
            case 0x1DFFE0u: goto label_1dffe0;
            case 0x1DFFE4u: goto label_1dffe4;
            case 0x1DFFE8u: goto label_1dffe8;
            case 0x1DFFECu: goto label_1dffec;
            case 0x1DFFF0u: goto label_1dfff0;
            case 0x1DFFF4u: goto label_1dfff4;
            case 0x1DFFF8u: goto label_1dfff8;
            case 0x1DFFFCu: goto label_1dfffc;
            case 0x1E0000u: goto label_1e0000;
            case 0x1E0004u: goto label_1e0004;
            case 0x1E0008u: goto label_1e0008;
            case 0x1E000Cu: goto label_1e000c;
            case 0x1E0010u: goto label_1e0010;
            case 0x1E0014u: goto label_1e0014;
            case 0x1E0018u: goto label_1e0018;
            case 0x1E001Cu: goto label_1e001c;
            case 0x1E0020u: goto label_1e0020;
            case 0x1E0024u: goto label_1e0024;
            case 0x1E0028u: goto label_1e0028;
            case 0x1E002Cu: goto label_1e002c;
            case 0x1E0030u: goto label_1e0030;
            case 0x1E0034u: goto label_1e0034;
            case 0x1E0038u: goto label_1e0038;
            case 0x1E003Cu: goto label_1e003c;
            case 0x1E0040u: goto label_1e0040;
            case 0x1E0044u: goto label_1e0044;
            case 0x1E0048u: goto label_1e0048;
            case 0x1E004Cu: goto label_1e004c;
            case 0x1E0050u: goto label_1e0050;
            case 0x1E0054u: goto label_1e0054;
            case 0x1E0058u: goto label_1e0058;
            case 0x1E005Cu: goto label_1e005c;
            case 0x1E0060u: goto label_1e0060;
            case 0x1E0064u: goto label_1e0064;
            case 0x1E0068u: goto label_1e0068;
            case 0x1E006Cu: goto label_1e006c;
            case 0x1E0070u: goto label_1e0070;
            case 0x1E0074u: goto label_1e0074;
            case 0x1E0078u: goto label_1e0078;
            case 0x1E007Cu: goto label_1e007c;
            case 0x1E0080u: goto label_1e0080;
            case 0x1E0084u: goto label_1e0084;
            case 0x1E0088u: goto label_1e0088;
            case 0x1E008Cu: goto label_1e008c;
            case 0x1E0090u: goto label_1e0090;
            case 0x1E0094u: goto label_1e0094;
            case 0x1E0098u: goto label_1e0098;
            case 0x1E009Cu: goto label_1e009c;
            case 0x1E00A0u: goto label_1e00a0;
            case 0x1E00A4u: goto label_1e00a4;
            case 0x1E00A8u: goto label_1e00a8;
            case 0x1E00ACu: goto label_1e00ac;
            case 0x1E00B0u: goto label_1e00b0;
            case 0x1E00B4u: goto label_1e00b4;
            case 0x1E00B8u: goto label_1e00b8;
            case 0x1E00BCu: goto label_1e00bc;
            case 0x1E00C0u: goto label_1e00c0;
            case 0x1E00C4u: goto label_1e00c4;
            case 0x1E00C8u: goto label_1e00c8;
            case 0x1E00CCu: goto label_1e00cc;
            case 0x1E00D0u: goto label_1e00d0;
            case 0x1E00D4u: goto label_1e00d4;
            case 0x1E00D8u: goto label_1e00d8;
            case 0x1E00DCu: goto label_1e00dc;
            case 0x1E00E0u: goto label_1e00e0;
            case 0x1E00E4u: goto label_1e00e4;
            case 0x1E00E8u: goto label_1e00e8;
            case 0x1E00ECu: goto label_1e00ec;
            case 0x1E00F0u: goto label_1e00f0;
            case 0x1E00F4u: goto label_1e00f4;
            case 0x1E00F8u: goto label_1e00f8;
            case 0x1E00FCu: goto label_1e00fc;
            case 0x1E0100u: goto label_1e0100;
            case 0x1E0104u: goto label_1e0104;
            case 0x1E0108u: goto label_1e0108;
            case 0x1E010Cu: goto label_1e010c;
            case 0x1E0110u: goto label_1e0110;
            case 0x1E0114u: goto label_1e0114;
            case 0x1E0118u: goto label_1e0118;
            case 0x1E011Cu: goto label_1e011c;
            case 0x1E0120u: goto label_1e0120;
            case 0x1E0124u: goto label_1e0124;
            case 0x1E0128u: goto label_1e0128;
            case 0x1E012Cu: goto label_1e012c;
            case 0x1E0130u: goto label_1e0130;
            case 0x1E0134u: goto label_1e0134;
            case 0x1E0138u: goto label_1e0138;
            case 0x1E013Cu: goto label_1e013c;
            case 0x1E0140u: goto label_1e0140;
            case 0x1E0144u: goto label_1e0144;
            case 0x1E0148u: goto label_1e0148;
            case 0x1E014Cu: goto label_1e014c;
            case 0x1E0150u: goto label_1e0150;
            case 0x1E0154u: goto label_1e0154;
            case 0x1E0158u: goto label_1e0158;
            case 0x1E015Cu: goto label_1e015c;
            case 0x1E0160u: goto label_1e0160;
            case 0x1E0164u: goto label_1e0164;
            case 0x1E0168u: goto label_1e0168;
            case 0x1E016Cu: goto label_1e016c;
            case 0x1E0170u: goto label_1e0170;
            case 0x1E0174u: goto label_1e0174;
            case 0x1E0178u: goto label_1e0178;
            case 0x1E017Cu: goto label_1e017c;
            case 0x1E0180u: goto label_1e0180;
            case 0x1E0184u: goto label_1e0184;
            case 0x1E0188u: goto label_1e0188;
            case 0x1E018Cu: goto label_1e018c;
            case 0x1E0190u: goto label_1e0190;
            case 0x1E0194u: goto label_1e0194;
            case 0x1E0198u: goto label_1e0198;
            case 0x1E019Cu: goto label_1e019c;
            case 0x1E01A0u: goto label_1e01a0;
            case 0x1E01A4u: goto label_1e01a4;
            case 0x1E01A8u: goto label_1e01a8;
            case 0x1E01ACu: goto label_1e01ac;
            case 0x1E01B0u: goto label_1e01b0;
            case 0x1E01B4u: goto label_1e01b4;
            case 0x1E01B8u: goto label_1e01b8;
            case 0x1E01BCu: goto label_1e01bc;
            case 0x1E01C0u: goto label_1e01c0;
            case 0x1E01C4u: goto label_1e01c4;
            case 0x1E01C8u: goto label_1e01c8;
            case 0x1E01CCu: goto label_1e01cc;
            case 0x1E01D0u: goto label_1e01d0;
            case 0x1E01D4u: goto label_1e01d4;
            case 0x1E01D8u: goto label_1e01d8;
            case 0x1E01DCu: goto label_1e01dc;
            case 0x1E01E0u: goto label_1e01e0;
            case 0x1E01E4u: goto label_1e01e4;
            case 0x1E01E8u: goto label_1e01e8;
            case 0x1E01ECu: goto label_1e01ec;
            case 0x1E01F0u: goto label_1e01f0;
            case 0x1E01F4u: goto label_1e01f4;
            case 0x1E01F8u: goto label_1e01f8;
            case 0x1E01FCu: goto label_1e01fc;
            case 0x1E0200u: goto label_1e0200;
            case 0x1E0204u: goto label_1e0204;
            case 0x1E0208u: goto label_1e0208;
            case 0x1E020Cu: goto label_1e020c;
            case 0x1E0210u: goto label_1e0210;
            case 0x1E0214u: goto label_1e0214;
            case 0x1E0218u: goto label_1e0218;
            case 0x1E021Cu: goto label_1e021c;
            case 0x1E0220u: goto label_1e0220;
            case 0x1E0224u: goto label_1e0224;
            case 0x1E0228u: goto label_1e0228;
            case 0x1E022Cu: goto label_1e022c;
            case 0x1E0230u: goto label_1e0230;
            case 0x1E0234u: goto label_1e0234;
            case 0x1E0238u: goto label_1e0238;
            case 0x1E023Cu: goto label_1e023c;
            case 0x1E0240u: goto label_1e0240;
            case 0x1E0244u: goto label_1e0244;
            case 0x1E0248u: goto label_1e0248;
            case 0x1E024Cu: goto label_1e024c;
            case 0x1E0250u: goto label_1e0250;
            case 0x1E0254u: goto label_1e0254;
            case 0x1E0258u: goto label_1e0258;
            case 0x1E025Cu: goto label_1e025c;
            case 0x1E0260u: goto label_1e0260;
            case 0x1E0264u: goto label_1e0264;
            case 0x1E0268u: goto label_1e0268;
            case 0x1E026Cu: goto label_1e026c;
            case 0x1E0270u: goto label_1e0270;
            case 0x1E0274u: goto label_1e0274;
            case 0x1E0278u: goto label_1e0278;
            case 0x1E027Cu: goto label_1e027c;
            case 0x1E0280u: goto label_1e0280;
            case 0x1E0284u: goto label_1e0284;
            case 0x1E0288u: goto label_1e0288;
            case 0x1E028Cu: goto label_1e028c;
            case 0x1E0290u: goto label_1e0290;
            case 0x1E0294u: goto label_1e0294;
            case 0x1E0298u: goto label_1e0298;
            case 0x1E029Cu: goto label_1e029c;
            case 0x1E02A0u: goto label_1e02a0;
            case 0x1E02A4u: goto label_1e02a4;
            case 0x1E02A8u: goto label_1e02a8;
            case 0x1E02ACu: goto label_1e02ac;
            case 0x1E02B0u: goto label_1e02b0;
            case 0x1E02B4u: goto label_1e02b4;
            case 0x1E02B8u: goto label_1e02b8;
            case 0x1E02BCu: goto label_1e02bc;
            case 0x1E02C0u: goto label_1e02c0;
            case 0x1E02C4u: goto label_1e02c4;
            case 0x1E02C8u: goto label_1e02c8;
            case 0x1E02CCu: goto label_1e02cc;
            case 0x1E02D0u: goto label_1e02d0;
            case 0x1E02D4u: goto label_1e02d4;
            case 0x1E02D8u: goto label_1e02d8;
            case 0x1E02DCu: goto label_1e02dc;
            case 0x1E02E0u: goto label_1e02e0;
            case 0x1E02E4u: goto label_1e02e4;
            case 0x1E02E8u: goto label_1e02e8;
            case 0x1E02ECu: goto label_1e02ec;
            case 0x1E02F0u: goto label_1e02f0;
            case 0x1E02F4u: goto label_1e02f4;
            case 0x1E02F8u: goto label_1e02f8;
            case 0x1E02FCu: goto label_1e02fc;
            case 0x1E0300u: goto label_1e0300;
            case 0x1E0304u: goto label_1e0304;
            case 0x1E0308u: goto label_1e0308;
            case 0x1E030Cu: goto label_1e030c;
            case 0x1E0310u: goto label_1e0310;
            case 0x1E0314u: goto label_1e0314;
            case 0x1E0318u: goto label_1e0318;
            case 0x1E031Cu: goto label_1e031c;
            case 0x1E0320u: goto label_1e0320;
            case 0x1E0324u: goto label_1e0324;
            case 0x1E0328u: goto label_1e0328;
            case 0x1E032Cu: goto label_1e032c;
            case 0x1E0330u: goto label_1e0330;
            case 0x1E0334u: goto label_1e0334;
            case 0x1E0338u: goto label_1e0338;
            case 0x1E033Cu: goto label_1e033c;
            case 0x1E0340u: goto label_1e0340;
            case 0x1E0344u: goto label_1e0344;
            case 0x1E0348u: goto label_1e0348;
            case 0x1E034Cu: goto label_1e034c;
            case 0x1E0350u: goto label_1e0350;
            case 0x1E0354u: goto label_1e0354;
            case 0x1E0358u: goto label_1e0358;
            case 0x1E035Cu: goto label_1e035c;
            case 0x1E0360u: goto label_1e0360;
            case 0x1E0364u: goto label_1e0364;
            case 0x1E0368u: goto label_1e0368;
            case 0x1E036Cu: goto label_1e036c;
            case 0x1E0370u: goto label_1e0370;
            case 0x1E0374u: goto label_1e0374;
            case 0x1E0378u: goto label_1e0378;
            case 0x1E037Cu: goto label_1e037c;
            case 0x1E0380u: goto label_1e0380;
            case 0x1E0384u: goto label_1e0384;
            case 0x1E0388u: goto label_1e0388;
            case 0x1E038Cu: goto label_1e038c;
            case 0x1E0390u: goto label_1e0390;
            case 0x1E0394u: goto label_1e0394;
            case 0x1E0398u: goto label_1e0398;
            case 0x1E039Cu: goto label_1e039c;
            case 0x1E03A0u: goto label_1e03a0;
            case 0x1E03A4u: goto label_1e03a4;
            case 0x1E03A8u: goto label_1e03a8;
            case 0x1E03ACu: goto label_1e03ac;
            case 0x1E03B0u: goto label_1e03b0;
            case 0x1E03B4u: goto label_1e03b4;
            case 0x1E03B8u: goto label_1e03b8;
            case 0x1E03BCu: goto label_1e03bc;
            case 0x1E03C0u: goto label_1e03c0;
            case 0x1E03C4u: goto label_1e03c4;
            case 0x1E03C8u: goto label_1e03c8;
            case 0x1E03CCu: goto label_1e03cc;
            case 0x1E03D0u: goto label_1e03d0;
            case 0x1E03D4u: goto label_1e03d4;
            case 0x1E03D8u: goto label_1e03d8;
            case 0x1E03DCu: goto label_1e03dc;
            case 0x1E03E0u: goto label_1e03e0;
            case 0x1E03E4u: goto label_1e03e4;
            case 0x1E03E8u: goto label_1e03e8;
            case 0x1E03ECu: goto label_1e03ec;
            case 0x1E03F0u: goto label_1e03f0;
            case 0x1E03F4u: goto label_1e03f4;
            case 0x1E03F8u: goto label_1e03f8;
            case 0x1E03FCu: goto label_1e03fc;
            case 0x1E0400u: goto label_1e0400;
            case 0x1E0404u: goto label_1e0404;
            case 0x1E0408u: goto label_1e0408;
            case 0x1E040Cu: goto label_1e040c;
            case 0x1E0410u: goto label_1e0410;
            case 0x1E0414u: goto label_1e0414;
            case 0x1E0418u: goto label_1e0418;
            case 0x1E041Cu: goto label_1e041c;
            case 0x1E0420u: goto label_1e0420;
            case 0x1E0424u: goto label_1e0424;
            case 0x1E0428u: goto label_1e0428;
            case 0x1E042Cu: goto label_1e042c;
            case 0x1E0430u: goto label_1e0430;
            case 0x1E0434u: goto label_1e0434;
            case 0x1E0438u: goto label_1e0438;
            case 0x1E043Cu: goto label_1e043c;
            case 0x1E0440u: goto label_1e0440;
            case 0x1E0444u: goto label_1e0444;
            case 0x1E0448u: goto label_1e0448;
            case 0x1E044Cu: goto label_1e044c;
            case 0x1E0450u: goto label_1e0450;
            case 0x1E0454u: goto label_1e0454;
            case 0x1E0458u: goto label_1e0458;
            case 0x1E045Cu: goto label_1e045c;
            case 0x1E0460u: goto label_1e0460;
            case 0x1E0464u: goto label_1e0464;
            case 0x1E0468u: goto label_1e0468;
            case 0x1E046Cu: goto label_1e046c;
            case 0x1E0470u: goto label_1e0470;
            case 0x1E0474u: goto label_1e0474;
            case 0x1E0478u: goto label_1e0478;
            case 0x1E047Cu: goto label_1e047c;
            case 0x1E0480u: goto label_1e0480;
            case 0x1E0484u: goto label_1e0484;
            case 0x1E0488u: goto label_1e0488;
            case 0x1E048Cu: goto label_1e048c;
            case 0x1E0490u: goto label_1e0490;
            case 0x1E0494u: goto label_1e0494;
            case 0x1E0498u: goto label_1e0498;
            case 0x1E049Cu: goto label_1e049c;
            case 0x1E04A0u: goto label_1e04a0;
            case 0x1E04A4u: goto label_1e04a4;
            case 0x1E04A8u: goto label_1e04a8;
            case 0x1E04ACu: goto label_1e04ac;
            case 0x1E04B0u: goto label_1e04b0;
            case 0x1E04B4u: goto label_1e04b4;
            case 0x1E04B8u: goto label_1e04b8;
            case 0x1E04BCu: goto label_1e04bc;
            case 0x1E04C0u: goto label_1e04c0;
            case 0x1E04C4u: goto label_1e04c4;
            case 0x1E04C8u: goto label_1e04c8;
            case 0x1E04CCu: goto label_1e04cc;
            case 0x1E04D0u: goto label_1e04d0;
            case 0x1E04D4u: goto label_1e04d4;
            case 0x1E04D8u: goto label_1e04d8;
            case 0x1E04DCu: goto label_1e04dc;
            case 0x1E04E0u: goto label_1e04e0;
            case 0x1E04E4u: goto label_1e04e4;
            case 0x1E04E8u: goto label_1e04e8;
            case 0x1E04ECu: goto label_1e04ec;
            case 0x1E04F0u: goto label_1e04f0;
            case 0x1E04F4u: goto label_1e04f4;
            case 0x1E04F8u: goto label_1e04f8;
            case 0x1E04FCu: goto label_1e04fc;
            case 0x1E0500u: goto label_1e0500;
            case 0x1E0504u: goto label_1e0504;
            case 0x1E0508u: goto label_1e0508;
            case 0x1E050Cu: goto label_1e050c;
            case 0x1E0510u: goto label_1e0510;
            case 0x1E0514u: goto label_1e0514;
            case 0x1E0518u: goto label_1e0518;
            case 0x1E051Cu: goto label_1e051c;
            case 0x1E0520u: goto label_1e0520;
            case 0x1E0524u: goto label_1e0524;
            case 0x1E0528u: goto label_1e0528;
            case 0x1E052Cu: goto label_1e052c;
            case 0x1E0530u: goto label_1e0530;
            case 0x1E0534u: goto label_1e0534;
            case 0x1E0538u: goto label_1e0538;
            case 0x1E053Cu: goto label_1e053c;
            case 0x1E0540u: goto label_1e0540;
            case 0x1E0544u: goto label_1e0544;
            case 0x1E0548u: goto label_1e0548;
            case 0x1E054Cu: goto label_1e054c;
            case 0x1E0550u: goto label_1e0550;
            case 0x1E0554u: goto label_1e0554;
            case 0x1E0558u: goto label_1e0558;
            case 0x1E055Cu: goto label_1e055c;
            case 0x1E0560u: goto label_1e0560;
            case 0x1E0564u: goto label_1e0564;
            case 0x1E0568u: goto label_1e0568;
            case 0x1E056Cu: goto label_1e056c;
            case 0x1E0570u: goto label_1e0570;
            case 0x1E0574u: goto label_1e0574;
            case 0x1E0578u: goto label_1e0578;
            case 0x1E057Cu: goto label_1e057c;
            case 0x1E0580u: goto label_1e0580;
            case 0x1E0584u: goto label_1e0584;
            case 0x1E0588u: goto label_1e0588;
            case 0x1E058Cu: goto label_1e058c;
            case 0x1E0590u: goto label_1e0590;
            case 0x1E0594u: goto label_1e0594;
            case 0x1E0598u: goto label_1e0598;
            case 0x1E059Cu: goto label_1e059c;
            case 0x1E05A0u: goto label_1e05a0;
            case 0x1E05A4u: goto label_1e05a4;
            case 0x1E05A8u: goto label_1e05a8;
            case 0x1E05ACu: goto label_1e05ac;
            case 0x1E05B0u: goto label_1e05b0;
            case 0x1E05B4u: goto label_1e05b4;
            case 0x1E05B8u: goto label_1e05b8;
            case 0x1E05BCu: goto label_1e05bc;
            case 0x1E05C0u: goto label_1e05c0;
            case 0x1E05C4u: goto label_1e05c4;
            case 0x1E05C8u: goto label_1e05c8;
            case 0x1E05CCu: goto label_1e05cc;
            case 0x1E05D0u: goto label_1e05d0;
            case 0x1E05D4u: goto label_1e05d4;
            case 0x1E05D8u: goto label_1e05d8;
            case 0x1E05DCu: goto label_1e05dc;
            case 0x1E05E0u: goto label_1e05e0;
            case 0x1E05E4u: goto label_1e05e4;
            case 0x1E05E8u: goto label_1e05e8;
            case 0x1E05ECu: goto label_1e05ec;
            case 0x1E05F0u: goto label_1e05f0;
            case 0x1E05F4u: goto label_1e05f4;
            case 0x1E05F8u: goto label_1e05f8;
            case 0x1E05FCu: goto label_1e05fc;
            case 0x1E0600u: goto label_1e0600;
            case 0x1E0604u: goto label_1e0604;
            case 0x1E0608u: goto label_1e0608;
            case 0x1E060Cu: goto label_1e060c;
            case 0x1E0610u: goto label_1e0610;
            case 0x1E0614u: goto label_1e0614;
            case 0x1E0618u: goto label_1e0618;
            case 0x1E061Cu: goto label_1e061c;
            case 0x1E0620u: goto label_1e0620;
            case 0x1E0624u: goto label_1e0624;
            case 0x1E0628u: goto label_1e0628;
            case 0x1E062Cu: goto label_1e062c;
            case 0x1E0630u: goto label_1e0630;
            case 0x1E0634u: goto label_1e0634;
            case 0x1E0638u: goto label_1e0638;
            case 0x1E063Cu: goto label_1e063c;
            case 0x1E0640u: goto label_1e0640;
            case 0x1E0644u: goto label_1e0644;
            case 0x1E0648u: goto label_1e0648;
            case 0x1E064Cu: goto label_1e064c;
            case 0x1E0650u: goto label_1e0650;
            case 0x1E0654u: goto label_1e0654;
            case 0x1E0658u: goto label_1e0658;
            case 0x1E065Cu: goto label_1e065c;
            case 0x1E0660u: goto label_1e0660;
            case 0x1E0664u: goto label_1e0664;
            case 0x1E0668u: goto label_1e0668;
            case 0x1E066Cu: goto label_1e066c;
            case 0x1E0670u: goto label_1e0670;
            case 0x1E0674u: goto label_1e0674;
            case 0x1E0678u: goto label_1e0678;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E023Cu; }
            if (ctx->pc != 0x1E023Cu) { return; }
        }
    }
    ctx->pc = 0x1E023Cu;
label_1e023c:
    // 0x1e023c: 0x1000010a  b           . + 4 + (0x10A << 2)
label_1e0240:
    if (ctx->pc == 0x1E0240u) {
        ctx->pc = 0x1E0244u;
        goto label_1e0244;
    }
    ctx->pc = 0x1E023Cu;
    {
        const bool branch_taken_0x1e023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e023c) {
            ctx->pc = 0x1E0668u;
            goto label_1e0668;
        }
    }
    ctx->pc = 0x1E0244u;
label_1e0244:
    // 0x1e0244: 0x0  nop
    ctx->pc = 0x1e0244u;
    // NOP
label_1e0248:
    // 0x1e0248: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e0248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e024c:
    // 0x1e024c: 0x1c4000fe  bgtz        $v0, . + 4 + (0xFE << 2)
label_1e0250:
    if (ctx->pc == 0x1E0250u) {
        ctx->pc = 0x1E0254u;
        goto label_1e0254;
    }
    ctx->pc = 0x1E024Cu;
    {
        const bool branch_taken_0x1e024c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e024c) {
            ctx->pc = 0x1E0648u;
            goto label_1e0648;
        }
    }
    ctx->pc = 0x1E0254u;
label_1e0254:
    // 0x1e0254: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1e0254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e0258:
    // 0x1e0258: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1e0258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1e025c:
    // 0x1e025c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e0260:
    // 0x1e0260: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e0260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e0264:
    // 0x1e0264: 0xc05d080  jal         func_174200
label_1e0268:
    if (ctx->pc == 0x1E0268u) {
        ctx->pc = 0x1E0268u;
            // 0x1e0268: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E026Cu;
        goto label_1e026c;
    }
    ctx->pc = 0x1E0264u;
    SET_GPR_U32(ctx, 31, 0x1E026Cu);
    ctx->pc = 0x1E0268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0264u;
            // 0x1e0268: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E026Cu; }
        if (ctx->pc != 0x1E026Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E026Cu; }
        if (ctx->pc != 0x1E026Cu) { return; }
    }
    ctx->pc = 0x1E026Cu;
label_1e026c:
    // 0x1e026c: 0xc050bb4  jal         func_142ED0
label_1e0270:
    if (ctx->pc == 0x1E0270u) {
        ctx->pc = 0x1E0274u;
        goto label_1e0274;
    }
    ctx->pc = 0x1E026Cu;
    SET_GPR_U32(ctx, 31, 0x1E0274u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0274u; }
        if (ctx->pc != 0x1E0274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0274u; }
        if (ctx->pc != 0x1E0274u) { return; }
    }
    ctx->pc = 0x1E0274u;
label_1e0274:
    // 0x1e0274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0274u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1e0278:
    // 0x1e0278: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e027c:
    if (ctx->pc == 0x1E027Cu) {
        ctx->pc = 0x1E0280u;
        goto label_1e0280;
    }
    ctx->pc = 0x1E0278u;
    {
        const bool branch_taken_0x1e0278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0278) {
            ctx->pc = 0x1E0298u;
            goto label_1e0298;
        }
    }
    ctx->pc = 0x1E0280u;
label_1e0280:
    // 0x1e0280: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1e0280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e0284:
    // 0x1e0284: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1e0284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1e0288:
    // 0x1e0288: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e0288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e028c:
    // 0x1e028c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e028cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e0290:
    // 0x1e0290: 0xc05d080  jal         func_174200
label_1e0294:
    if (ctx->pc == 0x1E0294u) {
        ctx->pc = 0x1E0294u;
            // 0x1e0294: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E0298u;
        goto label_1e0298;
    }
    ctx->pc = 0x1E0290u;
    SET_GPR_U32(ctx, 31, 0x1E0298u);
    ctx->pc = 0x1E0294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0290u;
            // 0x1e0294: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0298u; }
        if (ctx->pc != 0x1E0298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0298u; }
        if (ctx->pc != 0x1E0298u) { return; }
    }
    ctx->pc = 0x1E0298u;
label_1e0298:
    // 0x1e0298: 0xc050bb4  jal         func_142ED0
label_1e029c:
    if (ctx->pc == 0x1E029Cu) {
        ctx->pc = 0x1E02A0u;
        goto label_1e02a0;
    }
    ctx->pc = 0x1E0298u;
    SET_GPR_U32(ctx, 31, 0x1E02A0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02A0u; }
        if (ctx->pc != 0x1E02A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02A0u; }
        if (ctx->pc != 0x1E02A0u) { return; }
    }
    ctx->pc = 0x1E02A0u;
label_1e02a0:
    // 0x1e02a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e02a0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1e02a4:
    // 0x1e02a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e02a8:
    if (ctx->pc == 0x1E02A8u) {
        ctx->pc = 0x1E02ACu;
        goto label_1e02ac;
    }
    ctx->pc = 0x1E02A4u;
    {
        const bool branch_taken_0x1e02a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e02a4) {
            ctx->pc = 0x1E02C8u;
            goto label_1e02c8;
        }
    }
    ctx->pc = 0x1E02ACu;
label_1e02ac:
    // 0x1e02ac: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1e02acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e02b0:
    // 0x1e02b0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1e02b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e02b4:
    // 0x1e02b4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e02b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e02b8:
    // 0x1e02b8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e02b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e02bc:
    // 0x1e02bc: 0xc05d080  jal         func_174200
label_1e02c0:
    if (ctx->pc == 0x1E02C0u) {
        ctx->pc = 0x1E02C0u;
            // 0x1e02c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E02C4u;
        goto label_1e02c4;
    }
    ctx->pc = 0x1E02BCu;
    SET_GPR_U32(ctx, 31, 0x1E02C4u);
    ctx->pc = 0x1E02C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E02BCu;
            // 0x1e02c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02C4u; }
        if (ctx->pc != 0x1E02C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02C4u; }
        if (ctx->pc != 0x1E02C4u) { return; }
    }
    ctx->pc = 0x1E02C4u;
label_1e02c4:
    // 0x1e02c4: 0x0  nop
    ctx->pc = 0x1e02c4u;
    // NOP
label_1e02c8:
    // 0x1e02c8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1e02c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e02cc:
    // 0x1e02cc: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1e02ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e02d0:
    // 0x1e02d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e02d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e02d4:
    // 0x1e02d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e02d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e02d8:
    // 0x1e02d8: 0xc065944  jal         func_196510
label_1e02dc:
    if (ctx->pc == 0x1E02DCu) {
        ctx->pc = 0x1E02DCu;
            // 0x1e02dc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1E02E0u;
        goto label_1e02e0;
    }
    ctx->pc = 0x1E02D8u;
    SET_GPR_U32(ctx, 31, 0x1E02E0u);
    ctx->pc = 0x1E02DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E02D8u;
            // 0x1e02dc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02E0u; }
        if (ctx->pc != 0x1E02E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02E0u; }
        if (ctx->pc != 0x1E02E0u) { return; }
    }
    ctx->pc = 0x1E02E0u;
label_1e02e0:
    // 0x1e02e0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e02e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e02e4:
    // 0x1e02e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e02e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e02e8:
    // 0x1e02e8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e02e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e02ec:
    // 0x1e02ec: 0xc053740  jal         func_14DD00
label_1e02f0:
    if (ctx->pc == 0x1E02F0u) {
        ctx->pc = 0x1E02F0u;
            // 0x1e02f0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1E02F4u;
        goto label_1e02f4;
    }
    ctx->pc = 0x1E02ECu;
    SET_GPR_U32(ctx, 31, 0x1E02F4u);
    ctx->pc = 0x1E02F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E02ECu;
            // 0x1e02f0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02F4u; }
        if (ctx->pc != 0x1E02F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02F4u; }
        if (ctx->pc != 0x1E02F4u) { return; }
    }
    ctx->pc = 0x1E02F4u;
label_1e02f4:
    // 0x1e02f4: 0xc050bb4  jal         func_142ED0
label_1e02f8:
    if (ctx->pc == 0x1E02F8u) {
        ctx->pc = 0x1E02FCu;
        goto label_1e02fc;
    }
    ctx->pc = 0x1E02F4u;
    SET_GPR_U32(ctx, 31, 0x1E02FCu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02FCu; }
        if (ctx->pc != 0x1E02FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02FCu; }
        if (ctx->pc != 0x1E02FCu) { return; }
    }
    ctx->pc = 0x1E02FCu;
label_1e02fc:
    // 0x1e02fc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e02fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e0300:
    // 0x1e0300: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e0300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e0304:
    // 0x1e0304: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e0304u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e0308:
    // 0x1e0308: 0x0  nop
    ctx->pc = 0x1e0308u;
    // NOP
label_1e030c:
    // 0x1e030c: 0x0  nop
    ctx->pc = 0x1e030cu;
    // NOP
label_1e0310:
    // 0x1e0310: 0x1010  mfhi        $v0
    ctx->pc = 0x1e0310u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e0314:
    // 0x1e0314: 0xc050bb4  jal         func_142ED0
label_1e0318:
    if (ctx->pc == 0x1E0318u) {
        ctx->pc = 0x1E0318u;
            // 0x1e0318: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E031Cu;
        goto label_1e031c;
    }
    ctx->pc = 0x1E0314u;
    SET_GPR_U32(ctx, 31, 0x1E031Cu);
    ctx->pc = 0x1E0318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0314u;
            // 0x1e0318: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E031Cu; }
        if (ctx->pc != 0x1E031Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E031Cu; }
        if (ctx->pc != 0x1E031Cu) { return; }
    }
    ctx->pc = 0x1E031Cu;
label_1e031c:
    // 0x1e031c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e031cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e0320:
    // 0x1e0320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0324:
    // 0x1e0324: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e0324u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e0328:
    // 0x1e0328: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e0328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e032c:
    // 0x1e032c: 0x0  nop
    ctx->pc = 0x1e032cu;
    // NOP
label_1e0330:
    // 0x1e0330: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e0330u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e0334:
    // 0x1e0334: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e0334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e0338:
    // 0x1e0338: 0x1810  mfhi        $v1
    ctx->pc = 0x1e0338u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1e033c:
    // 0x1e033c: 0xc053740  jal         func_14DD00
label_1e0340:
    if (ctx->pc == 0x1E0340u) {
        ctx->pc = 0x1E0340u;
            // 0x1e0340: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1E0344u;
        goto label_1e0344;
    }
    ctx->pc = 0x1E033Cu;
    SET_GPR_U32(ctx, 31, 0x1E0344u);
    ctx->pc = 0x1E0340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E033Cu;
            // 0x1e0340: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0344u; }
        if (ctx->pc != 0x1E0344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0344u; }
        if (ctx->pc != 0x1E0344u) { return; }
    }
    ctx->pc = 0x1E0344u;
label_1e0344:
    // 0x1e0344: 0xc050bb4  jal         func_142ED0
label_1e0348:
    if (ctx->pc == 0x1E0348u) {
        ctx->pc = 0x1E034Cu;
        goto label_1e034c;
    }
    ctx->pc = 0x1E0344u;
    SET_GPR_U32(ctx, 31, 0x1E034Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E034Cu; }
        if (ctx->pc != 0x1E034Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E034Cu; }
        if (ctx->pc != 0x1E034Cu) { return; }
    }
    ctx->pc = 0x1E034Cu;
label_1e034c:
    // 0x1e034c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e034cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e0350:
    // 0x1e0350: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e0350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e0354:
    // 0x1e0354: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e0354u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e0358:
    // 0x1e0358: 0x0  nop
    ctx->pc = 0x1e0358u;
    // NOP
label_1e035c:
    // 0x1e035c: 0x0  nop
    ctx->pc = 0x1e035cu;
    // NOP
label_1e0360:
    // 0x1e0360: 0x1010  mfhi        $v0
    ctx->pc = 0x1e0360u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e0364:
    // 0x1e0364: 0xc050bb4  jal         func_142ED0
label_1e0368:
    if (ctx->pc == 0x1E0368u) {
        ctx->pc = 0x1E0368u;
            // 0x1e0368: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E036Cu;
        goto label_1e036c;
    }
    ctx->pc = 0x1E0364u;
    SET_GPR_U32(ctx, 31, 0x1E036Cu);
    ctx->pc = 0x1E0368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0364u;
            // 0x1e0368: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E036Cu; }
        if (ctx->pc != 0x1E036Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E036Cu; }
        if (ctx->pc != 0x1E036Cu) { return; }
    }
    ctx->pc = 0x1E036Cu;
label_1e036c:
    // 0x1e036c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e036cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e0370:
    // 0x1e0370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0374:
    // 0x1e0374: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e0374u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e0378:
    // 0x1e0378: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e0378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e037c:
    // 0x1e037c: 0x0  nop
    ctx->pc = 0x1e037cu;
    // NOP
label_1e0380:
    // 0x1e0380: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e0380u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e0384:
    // 0x1e0384: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e0384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e0388:
    // 0x1e0388: 0x1810  mfhi        $v1
    ctx->pc = 0x1e0388u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1e038c:
    // 0x1e038c: 0xc053740  jal         func_14DD00
label_1e0390:
    if (ctx->pc == 0x1E0390u) {
        ctx->pc = 0x1E0390u;
            // 0x1e0390: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1E0394u;
        goto label_1e0394;
    }
    ctx->pc = 0x1E038Cu;
    SET_GPR_U32(ctx, 31, 0x1E0394u);
    ctx->pc = 0x1E0390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E038Cu;
            // 0x1e0390: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0394u; }
        if (ctx->pc != 0x1E0394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0394u; }
        if (ctx->pc != 0x1E0394u) { return; }
    }
    ctx->pc = 0x1E0394u;
label_1e0394:
    // 0x1e0394: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e0394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e0398:
    // 0x1e0398: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e0398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e039c:
    // 0x1e039c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e039cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e03a0:
    // 0x1e03a0: 0xc053740  jal         func_14DD00
label_1e03a4:
    if (ctx->pc == 0x1E03A4u) {
        ctx->pc = 0x1E03A4u;
            // 0x1e03a4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1E03A8u;
        goto label_1e03a8;
    }
    ctx->pc = 0x1E03A0u;
    SET_GPR_U32(ctx, 31, 0x1E03A8u);
    ctx->pc = 0x1E03A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E03A0u;
            // 0x1e03a4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03A8u; }
        if (ctx->pc != 0x1E03A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03A8u; }
        if (ctx->pc != 0x1E03A8u) { return; }
    }
    ctx->pc = 0x1E03A8u;
label_1e03a8:
    // 0x1e03a8: 0xc050bb4  jal         func_142ED0
label_1e03ac:
    if (ctx->pc == 0x1E03ACu) {
        ctx->pc = 0x1E03B0u;
        goto label_1e03b0;
    }
    ctx->pc = 0x1E03A8u;
    SET_GPR_U32(ctx, 31, 0x1E03B0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03B0u; }
        if (ctx->pc != 0x1E03B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03B0u; }
        if (ctx->pc != 0x1E03B0u) { return; }
    }
    ctx->pc = 0x1E03B0u;
label_1e03b0:
    // 0x1e03b0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e03b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e03b4:
    // 0x1e03b4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e03b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e03b8:
    // 0x1e03b8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e03b8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e03bc:
    // 0x1e03bc: 0x0  nop
    ctx->pc = 0x1e03bcu;
    // NOP
label_1e03c0:
    // 0x1e03c0: 0x0  nop
    ctx->pc = 0x1e03c0u;
    // NOP
label_1e03c4:
    // 0x1e03c4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e03c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e03c8:
    // 0x1e03c8: 0xc050bb4  jal         func_142ED0
label_1e03cc:
    if (ctx->pc == 0x1E03CCu) {
        ctx->pc = 0x1E03CCu;
            // 0x1e03cc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E03D0u;
        goto label_1e03d0;
    }
    ctx->pc = 0x1E03C8u;
    SET_GPR_U32(ctx, 31, 0x1E03D0u);
    ctx->pc = 0x1E03CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E03C8u;
            // 0x1e03cc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03D0u; }
        if (ctx->pc != 0x1E03D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03D0u; }
        if (ctx->pc != 0x1E03D0u) { return; }
    }
    ctx->pc = 0x1E03D0u;
label_1e03d0:
    // 0x1e03d0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e03d4:
    // 0x1e03d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e03d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e03d8:
    // 0x1e03d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e03d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e03dc:
    // 0x1e03dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1e03e0:
    // 0x1e03e0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e03e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e03e4:
    // 0x1e03e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e03e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e03e8:
    // 0x1e03e8: 0x1010  mfhi        $v0
    ctx->pc = 0x1e03e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e03ec:
    // 0x1e03ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e03ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e03f0:
    // 0x1e03f0: 0xc053740  jal         func_14DD00
label_1e03f4:
    if (ctx->pc == 0x1E03F4u) {
        ctx->pc = 0x1E03F4u;
            // 0x1e03f4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E03F8u;
        goto label_1e03f8;
    }
    ctx->pc = 0x1E03F0u;
    SET_GPR_U32(ctx, 31, 0x1E03F8u);
    ctx->pc = 0x1E03F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E03F0u;
            // 0x1e03f4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03F8u; }
        if (ctx->pc != 0x1E03F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03F8u; }
        if (ctx->pc != 0x1E03F8u) { return; }
    }
    ctx->pc = 0x1E03F8u;
label_1e03f8:
    // 0x1e03f8: 0xc050bb4  jal         func_142ED0
label_1e03fc:
    if (ctx->pc == 0x1E03FCu) {
        ctx->pc = 0x1E0400u;
        goto label_1e0400;
    }
    ctx->pc = 0x1E03F8u;
    SET_GPR_U32(ctx, 31, 0x1E0400u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0400u; }
        if (ctx->pc != 0x1E0400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0400u; }
        if (ctx->pc != 0x1E0400u) { return; }
    }
    ctx->pc = 0x1E0400u;
label_1e0400:
    // 0x1e0400: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e0400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e0404:
    // 0x1e0404: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e0404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e0408:
    // 0x1e0408: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e0408u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e040c:
    // 0x1e040c: 0x0  nop
    ctx->pc = 0x1e040cu;
    // NOP
label_1e0410:
    // 0x1e0410: 0x0  nop
    ctx->pc = 0x1e0410u;
    // NOP
label_1e0414:
    // 0x1e0414: 0x1010  mfhi        $v0
    ctx->pc = 0x1e0414u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e0418:
    // 0x1e0418: 0xc050bb4  jal         func_142ED0
label_1e041c:
    if (ctx->pc == 0x1E041Cu) {
        ctx->pc = 0x1E041Cu;
            // 0x1e041c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E0420u;
        goto label_1e0420;
    }
    ctx->pc = 0x1E0418u;
    SET_GPR_U32(ctx, 31, 0x1E0420u);
    ctx->pc = 0x1E041Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0418u;
            // 0x1e041c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0420u; }
        if (ctx->pc != 0x1E0420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0420u; }
        if (ctx->pc != 0x1E0420u) { return; }
    }
    ctx->pc = 0x1E0420u;
label_1e0420:
    // 0x1e0420: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e0420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e0424:
    // 0x1e0424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0428:
    // 0x1e0428: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e0428u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e042c:
    // 0x1e042c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1e0430:
    // 0x1e0430: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e0430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e0434:
    // 0x1e0434: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e0434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e0438:
    // 0x1e0438: 0x1010  mfhi        $v0
    ctx->pc = 0x1e0438u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e043c:
    // 0x1e043c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e043cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e0440:
    // 0x1e0440: 0xc053740  jal         func_14DD00
label_1e0444:
    if (ctx->pc == 0x1E0444u) {
        ctx->pc = 0x1E0444u;
            // 0x1e0444: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E0448u;
        goto label_1e0448;
    }
    ctx->pc = 0x1E0440u;
    SET_GPR_U32(ctx, 31, 0x1E0448u);
    ctx->pc = 0x1E0444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0440u;
            // 0x1e0444: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0448u; }
        if (ctx->pc != 0x1E0448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0448u; }
        if (ctx->pc != 0x1E0448u) { return; }
    }
    ctx->pc = 0x1E0448u;
label_1e0448:
    // 0x1e0448: 0xc050bb4  jal         func_142ED0
label_1e044c:
    if (ctx->pc == 0x1E044Cu) {
        ctx->pc = 0x1E0450u;
        goto label_1e0450;
    }
    ctx->pc = 0x1E0448u;
    SET_GPR_U32(ctx, 31, 0x1E0450u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0450u; }
        if (ctx->pc != 0x1E0450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0450u; }
        if (ctx->pc != 0x1E0450u) { return; }
    }
    ctx->pc = 0x1E0450u;
label_1e0450:
    // 0x1e0450: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e0450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e0454:
    // 0x1e0454: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e0454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e0458:
    // 0x1e0458: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e0458u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e045c:
    // 0x1e045c: 0x0  nop
    ctx->pc = 0x1e045cu;
    // NOP
label_1e0460:
    // 0x1e0460: 0x0  nop
    ctx->pc = 0x1e0460u;
    // NOP
label_1e0464:
    // 0x1e0464: 0x1010  mfhi        $v0
    ctx->pc = 0x1e0464u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e0468:
    // 0x1e0468: 0xc050bb4  jal         func_142ED0
label_1e046c:
    if (ctx->pc == 0x1E046Cu) {
        ctx->pc = 0x1E046Cu;
            // 0x1e046c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E0470u;
        goto label_1e0470;
    }
    ctx->pc = 0x1E0468u;
    SET_GPR_U32(ctx, 31, 0x1E0470u);
    ctx->pc = 0x1E046Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0468u;
            // 0x1e046c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0470u; }
        if (ctx->pc != 0x1E0470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0470u; }
        if (ctx->pc != 0x1E0470u) { return; }
    }
    ctx->pc = 0x1E0470u;
label_1e0470:
    // 0x1e0470: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e0470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e0474:
    // 0x1e0474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0478:
    // 0x1e0478: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e0478u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e047c:
    // 0x1e047c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e047cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1e0480:
    // 0x1e0480: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e0480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e0484:
    // 0x1e0484: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e0484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e0488:
    // 0x1e0488: 0x1010  mfhi        $v0
    ctx->pc = 0x1e0488u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e048c:
    // 0x1e048c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e048cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e0490:
    // 0x1e0490: 0xc053740  jal         func_14DD00
label_1e0494:
    if (ctx->pc == 0x1E0494u) {
        ctx->pc = 0x1E0494u;
            // 0x1e0494: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E0498u;
        goto label_1e0498;
    }
    ctx->pc = 0x1E0490u;
    SET_GPR_U32(ctx, 31, 0x1E0498u);
    ctx->pc = 0x1E0494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0490u;
            // 0x1e0494: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0498u; }
        if (ctx->pc != 0x1E0498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0498u; }
        if (ctx->pc != 0x1E0498u) { return; }
    }
    ctx->pc = 0x1E0498u;
label_1e0498:
    // 0x1e0498: 0xc050bb4  jal         func_142ED0
label_1e049c:
    if (ctx->pc == 0x1E049Cu) {
        ctx->pc = 0x1E04A0u;
        goto label_1e04a0;
    }
    ctx->pc = 0x1E0498u;
    SET_GPR_U32(ctx, 31, 0x1E04A0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04A0u; }
        if (ctx->pc != 0x1E04A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04A0u; }
        if (ctx->pc != 0x1E04A0u) { return; }
    }
    ctx->pc = 0x1E04A0u;
label_1e04a0:
    // 0x1e04a0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e04a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e04a4:
    // 0x1e04a4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e04a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e04a8:
    // 0x1e04a8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e04a8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e04ac:
    // 0x1e04ac: 0x0  nop
    ctx->pc = 0x1e04acu;
    // NOP
label_1e04b0:
    // 0x1e04b0: 0x0  nop
    ctx->pc = 0x1e04b0u;
    // NOP
label_1e04b4:
    // 0x1e04b4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e04b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e04b8:
    // 0x1e04b8: 0xc050bb4  jal         func_142ED0
label_1e04bc:
    if (ctx->pc == 0x1E04BCu) {
        ctx->pc = 0x1E04BCu;
            // 0x1e04bc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E04C0u;
        goto label_1e04c0;
    }
    ctx->pc = 0x1E04B8u;
    SET_GPR_U32(ctx, 31, 0x1E04C0u);
    ctx->pc = 0x1E04BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E04B8u;
            // 0x1e04bc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04C0u; }
        if (ctx->pc != 0x1E04C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04C0u; }
        if (ctx->pc != 0x1E04C0u) { return; }
    }
    ctx->pc = 0x1E04C0u;
label_1e04c0:
    // 0x1e04c0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e04c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e04c4:
    // 0x1e04c4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e04c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e04c8:
    // 0x1e04c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e04c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e04cc:
    // 0x1e04cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e04ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e04d0:
    // 0x1e04d0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1e04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1e04d4:
    // 0x1e04d4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e04d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1e04d8:
    // 0x1e04d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e04d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e04dc:
    // 0x1e04dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1e04dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e04e0:
    // 0x1e04e0: 0x1010  mfhi        $v0
    ctx->pc = 0x1e04e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e04e4:
    // 0x1e04e4: 0xc053740  jal         func_14DD00
label_1e04e8:
    if (ctx->pc == 0x1E04E8u) {
        ctx->pc = 0x1E04E8u;
            // 0x1e04e8: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E04ECu;
        goto label_1e04ec;
    }
    ctx->pc = 0x1E04E4u;
    SET_GPR_U32(ctx, 31, 0x1E04ECu);
    ctx->pc = 0x1E04E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E04E4u;
            // 0x1e04e8: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04ECu; }
        if (ctx->pc != 0x1E04ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04ECu; }
        if (ctx->pc != 0x1E04ECu) { return; }
    }
    ctx->pc = 0x1E04ECu;
label_1e04ec:
    // 0x1e04ec: 0xc050bb4  jal         func_142ED0
label_1e04f0:
    if (ctx->pc == 0x1E04F0u) {
        ctx->pc = 0x1E04F4u;
        goto label_1e04f4;
    }
    ctx->pc = 0x1E04ECu;
    SET_GPR_U32(ctx, 31, 0x1E04F4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04F4u; }
        if (ctx->pc != 0x1E04F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04F4u; }
        if (ctx->pc != 0x1E04F4u) { return; }
    }
    ctx->pc = 0x1E04F4u;
label_1e04f4:
    // 0x1e04f4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e04f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e04f8:
    // 0x1e04f8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e04fc:
    // 0x1e04fc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e04fcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e0500:
    // 0x1e0500: 0x0  nop
    ctx->pc = 0x1e0500u;
    // NOP
label_1e0504:
    // 0x1e0504: 0x0  nop
    ctx->pc = 0x1e0504u;
    // NOP
label_1e0508:
    // 0x1e0508: 0x1010  mfhi        $v0
    ctx->pc = 0x1e0508u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e050c:
    // 0x1e050c: 0xc050bb4  jal         func_142ED0
label_1e0510:
    if (ctx->pc == 0x1E0510u) {
        ctx->pc = 0x1E0510u;
            // 0x1e0510: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E0514u;
        goto label_1e0514;
    }
    ctx->pc = 0x1E050Cu;
    SET_GPR_U32(ctx, 31, 0x1E0514u);
    ctx->pc = 0x1E0510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E050Cu;
            // 0x1e0510: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0514u; }
        if (ctx->pc != 0x1E0514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0514u; }
        if (ctx->pc != 0x1E0514u) { return; }
    }
    ctx->pc = 0x1E0514u;
label_1e0514:
    // 0x1e0514: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e0514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e0518:
    // 0x1e0518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e051c:
    // 0x1e051c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e051cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e0520:
    // 0x1e0520: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1e0520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1e0524:
    // 0x1e0524: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e0524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e0528:
    // 0x1e0528: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e0528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e052c:
    // 0x1e052c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e052cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e0530:
    // 0x1e0530: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e0530u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e0534:
    // 0x1e0534: 0xc053740  jal         func_14DD00
label_1e0538:
    if (ctx->pc == 0x1E0538u) {
        ctx->pc = 0x1E0538u;
            // 0x1e0538: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E053Cu;
        goto label_1e053c;
    }
    ctx->pc = 0x1E0534u;
    SET_GPR_U32(ctx, 31, 0x1E053Cu);
    ctx->pc = 0x1E0538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0534u;
            // 0x1e0538: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E053Cu; }
        if (ctx->pc != 0x1E053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E053Cu; }
        if (ctx->pc != 0x1E053Cu) { return; }
    }
    ctx->pc = 0x1E053Cu;
label_1e053c:
    // 0x1e053c: 0xc050bb4  jal         func_142ED0
label_1e0540:
    if (ctx->pc == 0x1E0540u) {
        ctx->pc = 0x1E0544u;
        goto label_1e0544;
    }
    ctx->pc = 0x1E053Cu;
    SET_GPR_U32(ctx, 31, 0x1E0544u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0544u; }
        if (ctx->pc != 0x1E0544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0544u; }
        if (ctx->pc != 0x1E0544u) { return; }
    }
    ctx->pc = 0x1E0544u;
label_1e0544:
    // 0x1e0544: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e0544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e0548:
    // 0x1e0548: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e0548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e054c:
    // 0x1e054c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e054cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e0550:
    // 0x1e0550: 0x0  nop
    ctx->pc = 0x1e0550u;
    // NOP
label_1e0554:
    // 0x1e0554: 0x0  nop
    ctx->pc = 0x1e0554u;
    // NOP
label_1e0558:
    // 0x1e0558: 0x1010  mfhi        $v0
    ctx->pc = 0x1e0558u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e055c:
    // 0x1e055c: 0xc050bb4  jal         func_142ED0
label_1e0560:
    if (ctx->pc == 0x1E0560u) {
        ctx->pc = 0x1E0560u;
            // 0x1e0560: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E0564u;
        goto label_1e0564;
    }
    ctx->pc = 0x1E055Cu;
    SET_GPR_U32(ctx, 31, 0x1E0564u);
    ctx->pc = 0x1E0560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E055Cu;
            // 0x1e0560: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0564u; }
        if (ctx->pc != 0x1E0564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0564u; }
        if (ctx->pc != 0x1E0564u) { return; }
    }
    ctx->pc = 0x1E0564u;
label_1e0564:
    // 0x1e0564: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e0564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e0568:
    // 0x1e0568: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e0568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e056c:
    // 0x1e056c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e056cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e0570:
    // 0x1e0570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0574:
    // 0x1e0574: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e0574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1e0578:
    // 0x1e0578: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x1e0578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
label_1e057c:
    // 0x1e057c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e057cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e0580:
    // 0x1e0580: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1e0580u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e0584:
    // 0x1e0584: 0x1010  mfhi        $v0
    ctx->pc = 0x1e0584u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e0588:
    // 0x1e0588: 0xc053740  jal         func_14DD00
label_1e058c:
    if (ctx->pc == 0x1E058Cu) {
        ctx->pc = 0x1E058Cu;
            // 0x1e058c: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E0590u;
        goto label_1e0590;
    }
    ctx->pc = 0x1E0588u;
    SET_GPR_U32(ctx, 31, 0x1E0590u);
    ctx->pc = 0x1E058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0588u;
            // 0x1e058c: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0590u; }
        if (ctx->pc != 0x1E0590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0590u; }
        if (ctx->pc != 0x1E0590u) { return; }
    }
    ctx->pc = 0x1E0590u;
label_1e0590:
    // 0x1e0590: 0xc050bb4  jal         func_142ED0
label_1e0594:
    if (ctx->pc == 0x1E0594u) {
        ctx->pc = 0x1E0598u;
        goto label_1e0598;
    }
    ctx->pc = 0x1E0590u;
    SET_GPR_U32(ctx, 31, 0x1E0598u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0598u; }
        if (ctx->pc != 0x1E0598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0598u; }
        if (ctx->pc != 0x1E0598u) { return; }
    }
    ctx->pc = 0x1E0598u;
label_1e0598:
    // 0x1e0598: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e0598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e059c:
    // 0x1e059c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e05a0:
    // 0x1e05a0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e05a0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e05a4:
    // 0x1e05a4: 0x0  nop
    ctx->pc = 0x1e05a4u;
    // NOP
label_1e05a8:
    // 0x1e05a8: 0x0  nop
    ctx->pc = 0x1e05a8u;
    // NOP
label_1e05ac:
    // 0x1e05ac: 0x1010  mfhi        $v0
    ctx->pc = 0x1e05acu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e05b0:
    // 0x1e05b0: 0xc050bb4  jal         func_142ED0
label_1e05b4:
    if (ctx->pc == 0x1E05B4u) {
        ctx->pc = 0x1E05B4u;
            // 0x1e05b4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E05B8u;
        goto label_1e05b8;
    }
    ctx->pc = 0x1E05B0u;
    SET_GPR_U32(ctx, 31, 0x1E05B8u);
    ctx->pc = 0x1E05B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05B0u;
            // 0x1e05b4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05B8u; }
        if (ctx->pc != 0x1E05B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05B8u; }
        if (ctx->pc != 0x1E05B8u) { return; }
    }
    ctx->pc = 0x1E05B8u;
label_1e05b8:
    // 0x1e05b8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e05b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e05bc:
    // 0x1e05bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e05bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e05c0:
    // 0x1e05c0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e05c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e05c4:
    // 0x1e05c4: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1e05c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1e05c8:
    // 0x1e05c8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e05c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e05cc:
    // 0x1e05cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e05ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e05d0:
    // 0x1e05d0: 0x1010  mfhi        $v0
    ctx->pc = 0x1e05d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e05d4:
    // 0x1e05d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e05d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e05d8:
    // 0x1e05d8: 0xc053740  jal         func_14DD00
label_1e05dc:
    if (ctx->pc == 0x1E05DCu) {
        ctx->pc = 0x1E05DCu;
            // 0x1e05dc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E05E0u;
        goto label_1e05e0;
    }
    ctx->pc = 0x1E05D8u;
    SET_GPR_U32(ctx, 31, 0x1E05E0u);
    ctx->pc = 0x1E05DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05D8u;
            // 0x1e05dc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05E0u; }
        if (ctx->pc != 0x1E05E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05E0u; }
        if (ctx->pc != 0x1E05E0u) { return; }
    }
    ctx->pc = 0x1E05E0u;
label_1e05e0:
    // 0x1e05e0: 0xc050bb4  jal         func_142ED0
label_1e05e4:
    if (ctx->pc == 0x1E05E4u) {
        ctx->pc = 0x1E05E8u;
        goto label_1e05e8;
    }
    ctx->pc = 0x1E05E0u;
    SET_GPR_U32(ctx, 31, 0x1E05E8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05E8u; }
        if (ctx->pc != 0x1E05E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05E8u; }
        if (ctx->pc != 0x1E05E8u) { return; }
    }
    ctx->pc = 0x1E05E8u;
label_1e05e8:
    // 0x1e05e8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e05ec:
    // 0x1e05ec: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e05f0:
    // 0x1e05f0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e05f0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e05f4:
    // 0x1e05f4: 0x0  nop
    ctx->pc = 0x1e05f4u;
    // NOP
label_1e05f8:
    // 0x1e05f8: 0x0  nop
    ctx->pc = 0x1e05f8u;
    // NOP
label_1e05fc:
    // 0x1e05fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1e05fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e0600:
    // 0x1e0600: 0xc050bb4  jal         func_142ED0
label_1e0604:
    if (ctx->pc == 0x1E0604u) {
        ctx->pc = 0x1E0604u;
            // 0x1e0604: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E0608u;
        goto label_1e0608;
    }
    ctx->pc = 0x1E0600u;
    SET_GPR_U32(ctx, 31, 0x1E0608u);
    ctx->pc = 0x1E0604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0600u;
            // 0x1e0604: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0608u; }
        if (ctx->pc != 0x1E0608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0608u; }
        if (ctx->pc != 0x1E0608u) { return; }
    }
    ctx->pc = 0x1E0608u;
label_1e0608:
    // 0x1e0608: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e0608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e060c:
    // 0x1e060c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e060cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0610:
    // 0x1e0610: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e0610u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e0614:
    // 0x1e0614: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1e0614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1e0618:
    // 0x1e0618: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e0618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e061c:
    // 0x1e061c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e061cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e0620:
    // 0x1e0620: 0x1010  mfhi        $v0
    ctx->pc = 0x1e0620u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e0624:
    // 0x1e0624: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e0624u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e0628:
    // 0x1e0628: 0xc053740  jal         func_14DD00
label_1e062c:
    if (ctx->pc == 0x1E062Cu) {
        ctx->pc = 0x1E062Cu;
            // 0x1e062c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E0630u;
        goto label_1e0630;
    }
    ctx->pc = 0x1E0628u;
    SET_GPR_U32(ctx, 31, 0x1E0630u);
    ctx->pc = 0x1E062Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0628u;
            // 0x1e062c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0630u; }
        if (ctx->pc != 0x1E0630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0630u; }
        if (ctx->pc != 0x1E0630u) { return; }
    }
    ctx->pc = 0x1E0630u;
label_1e0630:
    // 0x1e0630: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e0630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1e0634:
    // 0x1e0634: 0x40f809  jalr        $v0
label_1e0638:
    if (ctx->pc == 0x1E0638u) {
        ctx->pc = 0x1E0638u;
            // 0x1e0638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E063Cu;
        goto label_1e063c;
    }
    ctx->pc = 0x1E0634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E063Cu);
        ctx->pc = 0x1E0638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0634u;
            // 0x1e0638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFC50u: goto label_1dfc50;
            case 0x1DFC54u: goto label_1dfc54;
            case 0x1DFC58u: goto label_1dfc58;
            case 0x1DFC5Cu: goto label_1dfc5c;
            case 0x1DFC60u: goto label_1dfc60;
            case 0x1DFC64u: goto label_1dfc64;
            case 0x1DFC68u: goto label_1dfc68;
            case 0x1DFC6Cu: goto label_1dfc6c;
            case 0x1DFC70u: goto label_1dfc70;
            case 0x1DFC74u: goto label_1dfc74;
            case 0x1DFC78u: goto label_1dfc78;
            case 0x1DFC7Cu: goto label_1dfc7c;
            case 0x1DFC80u: goto label_1dfc80;
            case 0x1DFC84u: goto label_1dfc84;
            case 0x1DFC88u: goto label_1dfc88;
            case 0x1DFC8Cu: goto label_1dfc8c;
            case 0x1DFC90u: goto label_1dfc90;
            case 0x1DFC94u: goto label_1dfc94;
            case 0x1DFC98u: goto label_1dfc98;
            case 0x1DFC9Cu: goto label_1dfc9c;
            case 0x1DFCA0u: goto label_1dfca0;
            case 0x1DFCA4u: goto label_1dfca4;
            case 0x1DFCA8u: goto label_1dfca8;
            case 0x1DFCACu: goto label_1dfcac;
            case 0x1DFCB0u: goto label_1dfcb0;
            case 0x1DFCB4u: goto label_1dfcb4;
            case 0x1DFCB8u: goto label_1dfcb8;
            case 0x1DFCBCu: goto label_1dfcbc;
            case 0x1DFCC0u: goto label_1dfcc0;
            case 0x1DFCC4u: goto label_1dfcc4;
            case 0x1DFCC8u: goto label_1dfcc8;
            case 0x1DFCCCu: goto label_1dfccc;
            case 0x1DFCD0u: goto label_1dfcd0;
            case 0x1DFCD4u: goto label_1dfcd4;
            case 0x1DFCD8u: goto label_1dfcd8;
            case 0x1DFCDCu: goto label_1dfcdc;
            case 0x1DFCE0u: goto label_1dfce0;
            case 0x1DFCE4u: goto label_1dfce4;
            case 0x1DFCE8u: goto label_1dfce8;
            case 0x1DFCECu: goto label_1dfcec;
            case 0x1DFCF0u: goto label_1dfcf0;
            case 0x1DFCF4u: goto label_1dfcf4;
            case 0x1DFCF8u: goto label_1dfcf8;
            case 0x1DFCFCu: goto label_1dfcfc;
            case 0x1DFD00u: goto label_1dfd00;
            case 0x1DFD04u: goto label_1dfd04;
            case 0x1DFD08u: goto label_1dfd08;
            case 0x1DFD0Cu: goto label_1dfd0c;
            case 0x1DFD10u: goto label_1dfd10;
            case 0x1DFD14u: goto label_1dfd14;
            case 0x1DFD18u: goto label_1dfd18;
            case 0x1DFD1Cu: goto label_1dfd1c;
            case 0x1DFD20u: goto label_1dfd20;
            case 0x1DFD24u: goto label_1dfd24;
            case 0x1DFD28u: goto label_1dfd28;
            case 0x1DFD2Cu: goto label_1dfd2c;
            case 0x1DFD30u: goto label_1dfd30;
            case 0x1DFD34u: goto label_1dfd34;
            case 0x1DFD38u: goto label_1dfd38;
            case 0x1DFD3Cu: goto label_1dfd3c;
            case 0x1DFD40u: goto label_1dfd40;
            case 0x1DFD44u: goto label_1dfd44;
            case 0x1DFD48u: goto label_1dfd48;
            case 0x1DFD4Cu: goto label_1dfd4c;
            case 0x1DFD50u: goto label_1dfd50;
            case 0x1DFD54u: goto label_1dfd54;
            case 0x1DFD58u: goto label_1dfd58;
            case 0x1DFD5Cu: goto label_1dfd5c;
            case 0x1DFD60u: goto label_1dfd60;
            case 0x1DFD64u: goto label_1dfd64;
            case 0x1DFD68u: goto label_1dfd68;
            case 0x1DFD6Cu: goto label_1dfd6c;
            case 0x1DFD70u: goto label_1dfd70;
            case 0x1DFD74u: goto label_1dfd74;
            case 0x1DFD78u: goto label_1dfd78;
            case 0x1DFD7Cu: goto label_1dfd7c;
            case 0x1DFD80u: goto label_1dfd80;
            case 0x1DFD84u: goto label_1dfd84;
            case 0x1DFD88u: goto label_1dfd88;
            case 0x1DFD8Cu: goto label_1dfd8c;
            case 0x1DFD90u: goto label_1dfd90;
            case 0x1DFD94u: goto label_1dfd94;
            case 0x1DFD98u: goto label_1dfd98;
            case 0x1DFD9Cu: goto label_1dfd9c;
            case 0x1DFDA0u: goto label_1dfda0;
            case 0x1DFDA4u: goto label_1dfda4;
            case 0x1DFDA8u: goto label_1dfda8;
            case 0x1DFDACu: goto label_1dfdac;
            case 0x1DFDB0u: goto label_1dfdb0;
            case 0x1DFDB4u: goto label_1dfdb4;
            case 0x1DFDB8u: goto label_1dfdb8;
            case 0x1DFDBCu: goto label_1dfdbc;
            case 0x1DFDC0u: goto label_1dfdc0;
            case 0x1DFDC4u: goto label_1dfdc4;
            case 0x1DFDC8u: goto label_1dfdc8;
            case 0x1DFDCCu: goto label_1dfdcc;
            case 0x1DFDD0u: goto label_1dfdd0;
            case 0x1DFDD4u: goto label_1dfdd4;
            case 0x1DFDD8u: goto label_1dfdd8;
            case 0x1DFDDCu: goto label_1dfddc;
            case 0x1DFDE0u: goto label_1dfde0;
            case 0x1DFDE4u: goto label_1dfde4;
            case 0x1DFDE8u: goto label_1dfde8;
            case 0x1DFDECu: goto label_1dfdec;
            case 0x1DFDF0u: goto label_1dfdf0;
            case 0x1DFDF4u: goto label_1dfdf4;
            case 0x1DFDF8u: goto label_1dfdf8;
            case 0x1DFDFCu: goto label_1dfdfc;
            case 0x1DFE00u: goto label_1dfe00;
            case 0x1DFE04u: goto label_1dfe04;
            case 0x1DFE08u: goto label_1dfe08;
            case 0x1DFE0Cu: goto label_1dfe0c;
            case 0x1DFE10u: goto label_1dfe10;
            case 0x1DFE14u: goto label_1dfe14;
            case 0x1DFE18u: goto label_1dfe18;
            case 0x1DFE1Cu: goto label_1dfe1c;
            case 0x1DFE20u: goto label_1dfe20;
            case 0x1DFE24u: goto label_1dfe24;
            case 0x1DFE28u: goto label_1dfe28;
            case 0x1DFE2Cu: goto label_1dfe2c;
            case 0x1DFE30u: goto label_1dfe30;
            case 0x1DFE34u: goto label_1dfe34;
            case 0x1DFE38u: goto label_1dfe38;
            case 0x1DFE3Cu: goto label_1dfe3c;
            case 0x1DFE40u: goto label_1dfe40;
            case 0x1DFE44u: goto label_1dfe44;
            case 0x1DFE48u: goto label_1dfe48;
            case 0x1DFE4Cu: goto label_1dfe4c;
            case 0x1DFE50u: goto label_1dfe50;
            case 0x1DFE54u: goto label_1dfe54;
            case 0x1DFE58u: goto label_1dfe58;
            case 0x1DFE5Cu: goto label_1dfe5c;
            case 0x1DFE60u: goto label_1dfe60;
            case 0x1DFE64u: goto label_1dfe64;
            case 0x1DFE68u: goto label_1dfe68;
            case 0x1DFE6Cu: goto label_1dfe6c;
            case 0x1DFE70u: goto label_1dfe70;
            case 0x1DFE74u: goto label_1dfe74;
            case 0x1DFE78u: goto label_1dfe78;
            case 0x1DFE7Cu: goto label_1dfe7c;
            case 0x1DFE80u: goto label_1dfe80;
            case 0x1DFE84u: goto label_1dfe84;
            case 0x1DFE88u: goto label_1dfe88;
            case 0x1DFE8Cu: goto label_1dfe8c;
            case 0x1DFE90u: goto label_1dfe90;
            case 0x1DFE94u: goto label_1dfe94;
            case 0x1DFE98u: goto label_1dfe98;
            case 0x1DFE9Cu: goto label_1dfe9c;
            case 0x1DFEA0u: goto label_1dfea0;
            case 0x1DFEA4u: goto label_1dfea4;
            case 0x1DFEA8u: goto label_1dfea8;
            case 0x1DFEACu: goto label_1dfeac;
            case 0x1DFEB0u: goto label_1dfeb0;
            case 0x1DFEB4u: goto label_1dfeb4;
            case 0x1DFEB8u: goto label_1dfeb8;
            case 0x1DFEBCu: goto label_1dfebc;
            case 0x1DFEC0u: goto label_1dfec0;
            case 0x1DFEC4u: goto label_1dfec4;
            case 0x1DFEC8u: goto label_1dfec8;
            case 0x1DFECCu: goto label_1dfecc;
            case 0x1DFED0u: goto label_1dfed0;
            case 0x1DFED4u: goto label_1dfed4;
            case 0x1DFED8u: goto label_1dfed8;
            case 0x1DFEDCu: goto label_1dfedc;
            case 0x1DFEE0u: goto label_1dfee0;
            case 0x1DFEE4u: goto label_1dfee4;
            case 0x1DFEE8u: goto label_1dfee8;
            case 0x1DFEECu: goto label_1dfeec;
            case 0x1DFEF0u: goto label_1dfef0;
            case 0x1DFEF4u: goto label_1dfef4;
            case 0x1DFEF8u: goto label_1dfef8;
            case 0x1DFEFCu: goto label_1dfefc;
            case 0x1DFF00u: goto label_1dff00;
            case 0x1DFF04u: goto label_1dff04;
            case 0x1DFF08u: goto label_1dff08;
            case 0x1DFF0Cu: goto label_1dff0c;
            case 0x1DFF10u: goto label_1dff10;
            case 0x1DFF14u: goto label_1dff14;
            case 0x1DFF18u: goto label_1dff18;
            case 0x1DFF1Cu: goto label_1dff1c;
            case 0x1DFF20u: goto label_1dff20;
            case 0x1DFF24u: goto label_1dff24;
            case 0x1DFF28u: goto label_1dff28;
            case 0x1DFF2Cu: goto label_1dff2c;
            case 0x1DFF30u: goto label_1dff30;
            case 0x1DFF34u: goto label_1dff34;
            case 0x1DFF38u: goto label_1dff38;
            case 0x1DFF3Cu: goto label_1dff3c;
            case 0x1DFF40u: goto label_1dff40;
            case 0x1DFF44u: goto label_1dff44;
            case 0x1DFF48u: goto label_1dff48;
            case 0x1DFF4Cu: goto label_1dff4c;
            case 0x1DFF50u: goto label_1dff50;
            case 0x1DFF54u: goto label_1dff54;
            case 0x1DFF58u: goto label_1dff58;
            case 0x1DFF5Cu: goto label_1dff5c;
            case 0x1DFF60u: goto label_1dff60;
            case 0x1DFF64u: goto label_1dff64;
            case 0x1DFF68u: goto label_1dff68;
            case 0x1DFF6Cu: goto label_1dff6c;
            case 0x1DFF70u: goto label_1dff70;
            case 0x1DFF74u: goto label_1dff74;
            case 0x1DFF78u: goto label_1dff78;
            case 0x1DFF7Cu: goto label_1dff7c;
            case 0x1DFF80u: goto label_1dff80;
            case 0x1DFF84u: goto label_1dff84;
            case 0x1DFF88u: goto label_1dff88;
            case 0x1DFF8Cu: goto label_1dff8c;
            case 0x1DFF90u: goto label_1dff90;
            case 0x1DFF94u: goto label_1dff94;
            case 0x1DFF98u: goto label_1dff98;
            case 0x1DFF9Cu: goto label_1dff9c;
            case 0x1DFFA0u: goto label_1dffa0;
            case 0x1DFFA4u: goto label_1dffa4;
            case 0x1DFFA8u: goto label_1dffa8;
            case 0x1DFFACu: goto label_1dffac;
            case 0x1DFFB0u: goto label_1dffb0;
            case 0x1DFFB4u: goto label_1dffb4;
            case 0x1DFFB8u: goto label_1dffb8;
            case 0x1DFFBCu: goto label_1dffbc;
            case 0x1DFFC0u: goto label_1dffc0;
            case 0x1DFFC4u: goto label_1dffc4;
            case 0x1DFFC8u: goto label_1dffc8;
            case 0x1DFFCCu: goto label_1dffcc;
            case 0x1DFFD0u: goto label_1dffd0;
            case 0x1DFFD4u: goto label_1dffd4;
            case 0x1DFFD8u: goto label_1dffd8;
            case 0x1DFFDCu: goto label_1dffdc;
            case 0x1DFFE0u: goto label_1dffe0;
            case 0x1DFFE4u: goto label_1dffe4;
            case 0x1DFFE8u: goto label_1dffe8;
            case 0x1DFFECu: goto label_1dffec;
            case 0x1DFFF0u: goto label_1dfff0;
            case 0x1DFFF4u: goto label_1dfff4;
            case 0x1DFFF8u: goto label_1dfff8;
            case 0x1DFFFCu: goto label_1dfffc;
            case 0x1E0000u: goto label_1e0000;
            case 0x1E0004u: goto label_1e0004;
            case 0x1E0008u: goto label_1e0008;
            case 0x1E000Cu: goto label_1e000c;
            case 0x1E0010u: goto label_1e0010;
            case 0x1E0014u: goto label_1e0014;
            case 0x1E0018u: goto label_1e0018;
            case 0x1E001Cu: goto label_1e001c;
            case 0x1E0020u: goto label_1e0020;
            case 0x1E0024u: goto label_1e0024;
            case 0x1E0028u: goto label_1e0028;
            case 0x1E002Cu: goto label_1e002c;
            case 0x1E0030u: goto label_1e0030;
            case 0x1E0034u: goto label_1e0034;
            case 0x1E0038u: goto label_1e0038;
            case 0x1E003Cu: goto label_1e003c;
            case 0x1E0040u: goto label_1e0040;
            case 0x1E0044u: goto label_1e0044;
            case 0x1E0048u: goto label_1e0048;
            case 0x1E004Cu: goto label_1e004c;
            case 0x1E0050u: goto label_1e0050;
            case 0x1E0054u: goto label_1e0054;
            case 0x1E0058u: goto label_1e0058;
            case 0x1E005Cu: goto label_1e005c;
            case 0x1E0060u: goto label_1e0060;
            case 0x1E0064u: goto label_1e0064;
            case 0x1E0068u: goto label_1e0068;
            case 0x1E006Cu: goto label_1e006c;
            case 0x1E0070u: goto label_1e0070;
            case 0x1E0074u: goto label_1e0074;
            case 0x1E0078u: goto label_1e0078;
            case 0x1E007Cu: goto label_1e007c;
            case 0x1E0080u: goto label_1e0080;
            case 0x1E0084u: goto label_1e0084;
            case 0x1E0088u: goto label_1e0088;
            case 0x1E008Cu: goto label_1e008c;
            case 0x1E0090u: goto label_1e0090;
            case 0x1E0094u: goto label_1e0094;
            case 0x1E0098u: goto label_1e0098;
            case 0x1E009Cu: goto label_1e009c;
            case 0x1E00A0u: goto label_1e00a0;
            case 0x1E00A4u: goto label_1e00a4;
            case 0x1E00A8u: goto label_1e00a8;
            case 0x1E00ACu: goto label_1e00ac;
            case 0x1E00B0u: goto label_1e00b0;
            case 0x1E00B4u: goto label_1e00b4;
            case 0x1E00B8u: goto label_1e00b8;
            case 0x1E00BCu: goto label_1e00bc;
            case 0x1E00C0u: goto label_1e00c0;
            case 0x1E00C4u: goto label_1e00c4;
            case 0x1E00C8u: goto label_1e00c8;
            case 0x1E00CCu: goto label_1e00cc;
            case 0x1E00D0u: goto label_1e00d0;
            case 0x1E00D4u: goto label_1e00d4;
            case 0x1E00D8u: goto label_1e00d8;
            case 0x1E00DCu: goto label_1e00dc;
            case 0x1E00E0u: goto label_1e00e0;
            case 0x1E00E4u: goto label_1e00e4;
            case 0x1E00E8u: goto label_1e00e8;
            case 0x1E00ECu: goto label_1e00ec;
            case 0x1E00F0u: goto label_1e00f0;
            case 0x1E00F4u: goto label_1e00f4;
            case 0x1E00F8u: goto label_1e00f8;
            case 0x1E00FCu: goto label_1e00fc;
            case 0x1E0100u: goto label_1e0100;
            case 0x1E0104u: goto label_1e0104;
            case 0x1E0108u: goto label_1e0108;
            case 0x1E010Cu: goto label_1e010c;
            case 0x1E0110u: goto label_1e0110;
            case 0x1E0114u: goto label_1e0114;
            case 0x1E0118u: goto label_1e0118;
            case 0x1E011Cu: goto label_1e011c;
            case 0x1E0120u: goto label_1e0120;
            case 0x1E0124u: goto label_1e0124;
            case 0x1E0128u: goto label_1e0128;
            case 0x1E012Cu: goto label_1e012c;
            case 0x1E0130u: goto label_1e0130;
            case 0x1E0134u: goto label_1e0134;
            case 0x1E0138u: goto label_1e0138;
            case 0x1E013Cu: goto label_1e013c;
            case 0x1E0140u: goto label_1e0140;
            case 0x1E0144u: goto label_1e0144;
            case 0x1E0148u: goto label_1e0148;
            case 0x1E014Cu: goto label_1e014c;
            case 0x1E0150u: goto label_1e0150;
            case 0x1E0154u: goto label_1e0154;
            case 0x1E0158u: goto label_1e0158;
            case 0x1E015Cu: goto label_1e015c;
            case 0x1E0160u: goto label_1e0160;
            case 0x1E0164u: goto label_1e0164;
            case 0x1E0168u: goto label_1e0168;
            case 0x1E016Cu: goto label_1e016c;
            case 0x1E0170u: goto label_1e0170;
            case 0x1E0174u: goto label_1e0174;
            case 0x1E0178u: goto label_1e0178;
            case 0x1E017Cu: goto label_1e017c;
            case 0x1E0180u: goto label_1e0180;
            case 0x1E0184u: goto label_1e0184;
            case 0x1E0188u: goto label_1e0188;
            case 0x1E018Cu: goto label_1e018c;
            case 0x1E0190u: goto label_1e0190;
            case 0x1E0194u: goto label_1e0194;
            case 0x1E0198u: goto label_1e0198;
            case 0x1E019Cu: goto label_1e019c;
            case 0x1E01A0u: goto label_1e01a0;
            case 0x1E01A4u: goto label_1e01a4;
            case 0x1E01A8u: goto label_1e01a8;
            case 0x1E01ACu: goto label_1e01ac;
            case 0x1E01B0u: goto label_1e01b0;
            case 0x1E01B4u: goto label_1e01b4;
            case 0x1E01B8u: goto label_1e01b8;
            case 0x1E01BCu: goto label_1e01bc;
            case 0x1E01C0u: goto label_1e01c0;
            case 0x1E01C4u: goto label_1e01c4;
            case 0x1E01C8u: goto label_1e01c8;
            case 0x1E01CCu: goto label_1e01cc;
            case 0x1E01D0u: goto label_1e01d0;
            case 0x1E01D4u: goto label_1e01d4;
            case 0x1E01D8u: goto label_1e01d8;
            case 0x1E01DCu: goto label_1e01dc;
            case 0x1E01E0u: goto label_1e01e0;
            case 0x1E01E4u: goto label_1e01e4;
            case 0x1E01E8u: goto label_1e01e8;
            case 0x1E01ECu: goto label_1e01ec;
            case 0x1E01F0u: goto label_1e01f0;
            case 0x1E01F4u: goto label_1e01f4;
            case 0x1E01F8u: goto label_1e01f8;
            case 0x1E01FCu: goto label_1e01fc;
            case 0x1E0200u: goto label_1e0200;
            case 0x1E0204u: goto label_1e0204;
            case 0x1E0208u: goto label_1e0208;
            case 0x1E020Cu: goto label_1e020c;
            case 0x1E0210u: goto label_1e0210;
            case 0x1E0214u: goto label_1e0214;
            case 0x1E0218u: goto label_1e0218;
            case 0x1E021Cu: goto label_1e021c;
            case 0x1E0220u: goto label_1e0220;
            case 0x1E0224u: goto label_1e0224;
            case 0x1E0228u: goto label_1e0228;
            case 0x1E022Cu: goto label_1e022c;
            case 0x1E0230u: goto label_1e0230;
            case 0x1E0234u: goto label_1e0234;
            case 0x1E0238u: goto label_1e0238;
            case 0x1E023Cu: goto label_1e023c;
            case 0x1E0240u: goto label_1e0240;
            case 0x1E0244u: goto label_1e0244;
            case 0x1E0248u: goto label_1e0248;
            case 0x1E024Cu: goto label_1e024c;
            case 0x1E0250u: goto label_1e0250;
            case 0x1E0254u: goto label_1e0254;
            case 0x1E0258u: goto label_1e0258;
            case 0x1E025Cu: goto label_1e025c;
            case 0x1E0260u: goto label_1e0260;
            case 0x1E0264u: goto label_1e0264;
            case 0x1E0268u: goto label_1e0268;
            case 0x1E026Cu: goto label_1e026c;
            case 0x1E0270u: goto label_1e0270;
            case 0x1E0274u: goto label_1e0274;
            case 0x1E0278u: goto label_1e0278;
            case 0x1E027Cu: goto label_1e027c;
            case 0x1E0280u: goto label_1e0280;
            case 0x1E0284u: goto label_1e0284;
            case 0x1E0288u: goto label_1e0288;
            case 0x1E028Cu: goto label_1e028c;
            case 0x1E0290u: goto label_1e0290;
            case 0x1E0294u: goto label_1e0294;
            case 0x1E0298u: goto label_1e0298;
            case 0x1E029Cu: goto label_1e029c;
            case 0x1E02A0u: goto label_1e02a0;
            case 0x1E02A4u: goto label_1e02a4;
            case 0x1E02A8u: goto label_1e02a8;
            case 0x1E02ACu: goto label_1e02ac;
            case 0x1E02B0u: goto label_1e02b0;
            case 0x1E02B4u: goto label_1e02b4;
            case 0x1E02B8u: goto label_1e02b8;
            case 0x1E02BCu: goto label_1e02bc;
            case 0x1E02C0u: goto label_1e02c0;
            case 0x1E02C4u: goto label_1e02c4;
            case 0x1E02C8u: goto label_1e02c8;
            case 0x1E02CCu: goto label_1e02cc;
            case 0x1E02D0u: goto label_1e02d0;
            case 0x1E02D4u: goto label_1e02d4;
            case 0x1E02D8u: goto label_1e02d8;
            case 0x1E02DCu: goto label_1e02dc;
            case 0x1E02E0u: goto label_1e02e0;
            case 0x1E02E4u: goto label_1e02e4;
            case 0x1E02E8u: goto label_1e02e8;
            case 0x1E02ECu: goto label_1e02ec;
            case 0x1E02F0u: goto label_1e02f0;
            case 0x1E02F4u: goto label_1e02f4;
            case 0x1E02F8u: goto label_1e02f8;
            case 0x1E02FCu: goto label_1e02fc;
            case 0x1E0300u: goto label_1e0300;
            case 0x1E0304u: goto label_1e0304;
            case 0x1E0308u: goto label_1e0308;
            case 0x1E030Cu: goto label_1e030c;
            case 0x1E0310u: goto label_1e0310;
            case 0x1E0314u: goto label_1e0314;
            case 0x1E0318u: goto label_1e0318;
            case 0x1E031Cu: goto label_1e031c;
            case 0x1E0320u: goto label_1e0320;
            case 0x1E0324u: goto label_1e0324;
            case 0x1E0328u: goto label_1e0328;
            case 0x1E032Cu: goto label_1e032c;
            case 0x1E0330u: goto label_1e0330;
            case 0x1E0334u: goto label_1e0334;
            case 0x1E0338u: goto label_1e0338;
            case 0x1E033Cu: goto label_1e033c;
            case 0x1E0340u: goto label_1e0340;
            case 0x1E0344u: goto label_1e0344;
            case 0x1E0348u: goto label_1e0348;
            case 0x1E034Cu: goto label_1e034c;
            case 0x1E0350u: goto label_1e0350;
            case 0x1E0354u: goto label_1e0354;
            case 0x1E0358u: goto label_1e0358;
            case 0x1E035Cu: goto label_1e035c;
            case 0x1E0360u: goto label_1e0360;
            case 0x1E0364u: goto label_1e0364;
            case 0x1E0368u: goto label_1e0368;
            case 0x1E036Cu: goto label_1e036c;
            case 0x1E0370u: goto label_1e0370;
            case 0x1E0374u: goto label_1e0374;
            case 0x1E0378u: goto label_1e0378;
            case 0x1E037Cu: goto label_1e037c;
            case 0x1E0380u: goto label_1e0380;
            case 0x1E0384u: goto label_1e0384;
            case 0x1E0388u: goto label_1e0388;
            case 0x1E038Cu: goto label_1e038c;
            case 0x1E0390u: goto label_1e0390;
            case 0x1E0394u: goto label_1e0394;
            case 0x1E0398u: goto label_1e0398;
            case 0x1E039Cu: goto label_1e039c;
            case 0x1E03A0u: goto label_1e03a0;
            case 0x1E03A4u: goto label_1e03a4;
            case 0x1E03A8u: goto label_1e03a8;
            case 0x1E03ACu: goto label_1e03ac;
            case 0x1E03B0u: goto label_1e03b0;
            case 0x1E03B4u: goto label_1e03b4;
            case 0x1E03B8u: goto label_1e03b8;
            case 0x1E03BCu: goto label_1e03bc;
            case 0x1E03C0u: goto label_1e03c0;
            case 0x1E03C4u: goto label_1e03c4;
            case 0x1E03C8u: goto label_1e03c8;
            case 0x1E03CCu: goto label_1e03cc;
            case 0x1E03D0u: goto label_1e03d0;
            case 0x1E03D4u: goto label_1e03d4;
            case 0x1E03D8u: goto label_1e03d8;
            case 0x1E03DCu: goto label_1e03dc;
            case 0x1E03E0u: goto label_1e03e0;
            case 0x1E03E4u: goto label_1e03e4;
            case 0x1E03E8u: goto label_1e03e8;
            case 0x1E03ECu: goto label_1e03ec;
            case 0x1E03F0u: goto label_1e03f0;
            case 0x1E03F4u: goto label_1e03f4;
            case 0x1E03F8u: goto label_1e03f8;
            case 0x1E03FCu: goto label_1e03fc;
            case 0x1E0400u: goto label_1e0400;
            case 0x1E0404u: goto label_1e0404;
            case 0x1E0408u: goto label_1e0408;
            case 0x1E040Cu: goto label_1e040c;
            case 0x1E0410u: goto label_1e0410;
            case 0x1E0414u: goto label_1e0414;
            case 0x1E0418u: goto label_1e0418;
            case 0x1E041Cu: goto label_1e041c;
            case 0x1E0420u: goto label_1e0420;
            case 0x1E0424u: goto label_1e0424;
            case 0x1E0428u: goto label_1e0428;
            case 0x1E042Cu: goto label_1e042c;
            case 0x1E0430u: goto label_1e0430;
            case 0x1E0434u: goto label_1e0434;
            case 0x1E0438u: goto label_1e0438;
            case 0x1E043Cu: goto label_1e043c;
            case 0x1E0440u: goto label_1e0440;
            case 0x1E0444u: goto label_1e0444;
            case 0x1E0448u: goto label_1e0448;
            case 0x1E044Cu: goto label_1e044c;
            case 0x1E0450u: goto label_1e0450;
            case 0x1E0454u: goto label_1e0454;
            case 0x1E0458u: goto label_1e0458;
            case 0x1E045Cu: goto label_1e045c;
            case 0x1E0460u: goto label_1e0460;
            case 0x1E0464u: goto label_1e0464;
            case 0x1E0468u: goto label_1e0468;
            case 0x1E046Cu: goto label_1e046c;
            case 0x1E0470u: goto label_1e0470;
            case 0x1E0474u: goto label_1e0474;
            case 0x1E0478u: goto label_1e0478;
            case 0x1E047Cu: goto label_1e047c;
            case 0x1E0480u: goto label_1e0480;
            case 0x1E0484u: goto label_1e0484;
            case 0x1E0488u: goto label_1e0488;
            case 0x1E048Cu: goto label_1e048c;
            case 0x1E0490u: goto label_1e0490;
            case 0x1E0494u: goto label_1e0494;
            case 0x1E0498u: goto label_1e0498;
            case 0x1E049Cu: goto label_1e049c;
            case 0x1E04A0u: goto label_1e04a0;
            case 0x1E04A4u: goto label_1e04a4;
            case 0x1E04A8u: goto label_1e04a8;
            case 0x1E04ACu: goto label_1e04ac;
            case 0x1E04B0u: goto label_1e04b0;
            case 0x1E04B4u: goto label_1e04b4;
            case 0x1E04B8u: goto label_1e04b8;
            case 0x1E04BCu: goto label_1e04bc;
            case 0x1E04C0u: goto label_1e04c0;
            case 0x1E04C4u: goto label_1e04c4;
            case 0x1E04C8u: goto label_1e04c8;
            case 0x1E04CCu: goto label_1e04cc;
            case 0x1E04D0u: goto label_1e04d0;
            case 0x1E04D4u: goto label_1e04d4;
            case 0x1E04D8u: goto label_1e04d8;
            case 0x1E04DCu: goto label_1e04dc;
            case 0x1E04E0u: goto label_1e04e0;
            case 0x1E04E4u: goto label_1e04e4;
            case 0x1E04E8u: goto label_1e04e8;
            case 0x1E04ECu: goto label_1e04ec;
            case 0x1E04F0u: goto label_1e04f0;
            case 0x1E04F4u: goto label_1e04f4;
            case 0x1E04F8u: goto label_1e04f8;
            case 0x1E04FCu: goto label_1e04fc;
            case 0x1E0500u: goto label_1e0500;
            case 0x1E0504u: goto label_1e0504;
            case 0x1E0508u: goto label_1e0508;
            case 0x1E050Cu: goto label_1e050c;
            case 0x1E0510u: goto label_1e0510;
            case 0x1E0514u: goto label_1e0514;
            case 0x1E0518u: goto label_1e0518;
            case 0x1E051Cu: goto label_1e051c;
            case 0x1E0520u: goto label_1e0520;
            case 0x1E0524u: goto label_1e0524;
            case 0x1E0528u: goto label_1e0528;
            case 0x1E052Cu: goto label_1e052c;
            case 0x1E0530u: goto label_1e0530;
            case 0x1E0534u: goto label_1e0534;
            case 0x1E0538u: goto label_1e0538;
            case 0x1E053Cu: goto label_1e053c;
            case 0x1E0540u: goto label_1e0540;
            case 0x1E0544u: goto label_1e0544;
            case 0x1E0548u: goto label_1e0548;
            case 0x1E054Cu: goto label_1e054c;
            case 0x1E0550u: goto label_1e0550;
            case 0x1E0554u: goto label_1e0554;
            case 0x1E0558u: goto label_1e0558;
            case 0x1E055Cu: goto label_1e055c;
            case 0x1E0560u: goto label_1e0560;
            case 0x1E0564u: goto label_1e0564;
            case 0x1E0568u: goto label_1e0568;
            case 0x1E056Cu: goto label_1e056c;
            case 0x1E0570u: goto label_1e0570;
            case 0x1E0574u: goto label_1e0574;
            case 0x1E0578u: goto label_1e0578;
            case 0x1E057Cu: goto label_1e057c;
            case 0x1E0580u: goto label_1e0580;
            case 0x1E0584u: goto label_1e0584;
            case 0x1E0588u: goto label_1e0588;
            case 0x1E058Cu: goto label_1e058c;
            case 0x1E0590u: goto label_1e0590;
            case 0x1E0594u: goto label_1e0594;
            case 0x1E0598u: goto label_1e0598;
            case 0x1E059Cu: goto label_1e059c;
            case 0x1E05A0u: goto label_1e05a0;
            case 0x1E05A4u: goto label_1e05a4;
            case 0x1E05A8u: goto label_1e05a8;
            case 0x1E05ACu: goto label_1e05ac;
            case 0x1E05B0u: goto label_1e05b0;
            case 0x1E05B4u: goto label_1e05b4;
            case 0x1E05B8u: goto label_1e05b8;
            case 0x1E05BCu: goto label_1e05bc;
            case 0x1E05C0u: goto label_1e05c0;
            case 0x1E05C4u: goto label_1e05c4;
            case 0x1E05C8u: goto label_1e05c8;
            case 0x1E05CCu: goto label_1e05cc;
            case 0x1E05D0u: goto label_1e05d0;
            case 0x1E05D4u: goto label_1e05d4;
            case 0x1E05D8u: goto label_1e05d8;
            case 0x1E05DCu: goto label_1e05dc;
            case 0x1E05E0u: goto label_1e05e0;
            case 0x1E05E4u: goto label_1e05e4;
            case 0x1E05E8u: goto label_1e05e8;
            case 0x1E05ECu: goto label_1e05ec;
            case 0x1E05F0u: goto label_1e05f0;
            case 0x1E05F4u: goto label_1e05f4;
            case 0x1E05F8u: goto label_1e05f8;
            case 0x1E05FCu: goto label_1e05fc;
            case 0x1E0600u: goto label_1e0600;
            case 0x1E0604u: goto label_1e0604;
            case 0x1E0608u: goto label_1e0608;
            case 0x1E060Cu: goto label_1e060c;
            case 0x1E0610u: goto label_1e0610;
            case 0x1E0614u: goto label_1e0614;
            case 0x1E0618u: goto label_1e0618;
            case 0x1E061Cu: goto label_1e061c;
            case 0x1E0620u: goto label_1e0620;
            case 0x1E0624u: goto label_1e0624;
            case 0x1E0628u: goto label_1e0628;
            case 0x1E062Cu: goto label_1e062c;
            case 0x1E0630u: goto label_1e0630;
            case 0x1E0634u: goto label_1e0634;
            case 0x1E0638u: goto label_1e0638;
            case 0x1E063Cu: goto label_1e063c;
            case 0x1E0640u: goto label_1e0640;
            case 0x1E0644u: goto label_1e0644;
            case 0x1E0648u: goto label_1e0648;
            case 0x1E064Cu: goto label_1e064c;
            case 0x1E0650u: goto label_1e0650;
            case 0x1E0654u: goto label_1e0654;
            case 0x1E0658u: goto label_1e0658;
            case 0x1E065Cu: goto label_1e065c;
            case 0x1E0660u: goto label_1e0660;
            case 0x1E0664u: goto label_1e0664;
            case 0x1E0668u: goto label_1e0668;
            case 0x1E066Cu: goto label_1e066c;
            case 0x1E0670u: goto label_1e0670;
            case 0x1E0674u: goto label_1e0674;
            case 0x1E0678u: goto label_1e0678;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E063Cu; }
            if (ctx->pc != 0x1E063Cu) { return; }
        }
    }
    ctx->pc = 0x1E063Cu;
label_1e063c:
    // 0x1e063c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e0640:
    if (ctx->pc == 0x1E0640u) {
        ctx->pc = 0x1E0644u;
        goto label_1e0644;
    }
    ctx->pc = 0x1E063Cu;
    {
        const bool branch_taken_0x1e063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e063c) {
            ctx->pc = 0x1E0668u;
            goto label_1e0668;
        }
    }
    ctx->pc = 0x1E0644u;
label_1e0644:
    // 0x1e0644: 0x0  nop
    ctx->pc = 0x1e0644u;
    // NOP
label_1e0648:
    // 0x1e0648: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e0648u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
label_1e064c:
    // 0x1e064c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e064cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e0650:
    // 0x1e0650: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1e0650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1e0654:
    // 0x1e0654: 0x24c6f970  addiu       $a2, $a2, -0x690
    ctx->pc = 0x1e0654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965616));
label_1e0658:
    // 0x1e0658: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e0658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e065c:
    // 0x1e065c: 0xc053ca4  jal         func_14F290
label_1e0660:
    if (ctx->pc == 0x1E0660u) {
        ctx->pc = 0x1E0660u;
            // 0x1e0660: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E0664u;
        goto label_1e0664;
    }
    ctx->pc = 0x1E065Cu;
    SET_GPR_U32(ctx, 31, 0x1E0664u);
    ctx->pc = 0x1E0660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E065Cu;
            // 0x1e0660: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0664u; }
        if (ctx->pc != 0x1E0664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0664u; }
        if (ctx->pc != 0x1E0664u) { return; }
    }
    ctx->pc = 0x1E0664u;
label_1e0664:
    // 0x1e0664: 0x0  nop
    ctx->pc = 0x1e0664u;
    // NOP
label_1e0668:
    // 0x1e0668: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e066c:
    // 0x1e066c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e066cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0670:
    // 0x1e0670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0674:
    // 0x1e0674: 0x3e00008  jr          $ra
label_1e0678:
    if (ctx->pc == 0x1E0678u) {
        ctx->pc = 0x1E0678u;
            // 0x1e0678: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E067Cu;
        goto label_fallthrough_0x1e0674;
    }
    ctx->pc = 0x1E0674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0674u;
            // 0x1e0678: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFC50u: goto label_1dfc50;
            case 0x1DFC54u: goto label_1dfc54;
            case 0x1DFC58u: goto label_1dfc58;
            case 0x1DFC5Cu: goto label_1dfc5c;
            case 0x1DFC60u: goto label_1dfc60;
            case 0x1DFC64u: goto label_1dfc64;
            case 0x1DFC68u: goto label_1dfc68;
            case 0x1DFC6Cu: goto label_1dfc6c;
            case 0x1DFC70u: goto label_1dfc70;
            case 0x1DFC74u: goto label_1dfc74;
            case 0x1DFC78u: goto label_1dfc78;
            case 0x1DFC7Cu: goto label_1dfc7c;
            case 0x1DFC80u: goto label_1dfc80;
            case 0x1DFC84u: goto label_1dfc84;
            case 0x1DFC88u: goto label_1dfc88;
            case 0x1DFC8Cu: goto label_1dfc8c;
            case 0x1DFC90u: goto label_1dfc90;
            case 0x1DFC94u: goto label_1dfc94;
            case 0x1DFC98u: goto label_1dfc98;
            case 0x1DFC9Cu: goto label_1dfc9c;
            case 0x1DFCA0u: goto label_1dfca0;
            case 0x1DFCA4u: goto label_1dfca4;
            case 0x1DFCA8u: goto label_1dfca8;
            case 0x1DFCACu: goto label_1dfcac;
            case 0x1DFCB0u: goto label_1dfcb0;
            case 0x1DFCB4u: goto label_1dfcb4;
            case 0x1DFCB8u: goto label_1dfcb8;
            case 0x1DFCBCu: goto label_1dfcbc;
            case 0x1DFCC0u: goto label_1dfcc0;
            case 0x1DFCC4u: goto label_1dfcc4;
            case 0x1DFCC8u: goto label_1dfcc8;
            case 0x1DFCCCu: goto label_1dfccc;
            case 0x1DFCD0u: goto label_1dfcd0;
            case 0x1DFCD4u: goto label_1dfcd4;
            case 0x1DFCD8u: goto label_1dfcd8;
            case 0x1DFCDCu: goto label_1dfcdc;
            case 0x1DFCE0u: goto label_1dfce0;
            case 0x1DFCE4u: goto label_1dfce4;
            case 0x1DFCE8u: goto label_1dfce8;
            case 0x1DFCECu: goto label_1dfcec;
            case 0x1DFCF0u: goto label_1dfcf0;
            case 0x1DFCF4u: goto label_1dfcf4;
            case 0x1DFCF8u: goto label_1dfcf8;
            case 0x1DFCFCu: goto label_1dfcfc;
            case 0x1DFD00u: goto label_1dfd00;
            case 0x1DFD04u: goto label_1dfd04;
            case 0x1DFD08u: goto label_1dfd08;
            case 0x1DFD0Cu: goto label_1dfd0c;
            case 0x1DFD10u: goto label_1dfd10;
            case 0x1DFD14u: goto label_1dfd14;
            case 0x1DFD18u: goto label_1dfd18;
            case 0x1DFD1Cu: goto label_1dfd1c;
            case 0x1DFD20u: goto label_1dfd20;
            case 0x1DFD24u: goto label_1dfd24;
            case 0x1DFD28u: goto label_1dfd28;
            case 0x1DFD2Cu: goto label_1dfd2c;
            case 0x1DFD30u: goto label_1dfd30;
            case 0x1DFD34u: goto label_1dfd34;
            case 0x1DFD38u: goto label_1dfd38;
            case 0x1DFD3Cu: goto label_1dfd3c;
            case 0x1DFD40u: goto label_1dfd40;
            case 0x1DFD44u: goto label_1dfd44;
            case 0x1DFD48u: goto label_1dfd48;
            case 0x1DFD4Cu: goto label_1dfd4c;
            case 0x1DFD50u: goto label_1dfd50;
            case 0x1DFD54u: goto label_1dfd54;
            case 0x1DFD58u: goto label_1dfd58;
            case 0x1DFD5Cu: goto label_1dfd5c;
            case 0x1DFD60u: goto label_1dfd60;
            case 0x1DFD64u: goto label_1dfd64;
            case 0x1DFD68u: goto label_1dfd68;
            case 0x1DFD6Cu: goto label_1dfd6c;
            case 0x1DFD70u: goto label_1dfd70;
            case 0x1DFD74u: goto label_1dfd74;
            case 0x1DFD78u: goto label_1dfd78;
            case 0x1DFD7Cu: goto label_1dfd7c;
            case 0x1DFD80u: goto label_1dfd80;
            case 0x1DFD84u: goto label_1dfd84;
            case 0x1DFD88u: goto label_1dfd88;
            case 0x1DFD8Cu: goto label_1dfd8c;
            case 0x1DFD90u: goto label_1dfd90;
            case 0x1DFD94u: goto label_1dfd94;
            case 0x1DFD98u: goto label_1dfd98;
            case 0x1DFD9Cu: goto label_1dfd9c;
            case 0x1DFDA0u: goto label_1dfda0;
            case 0x1DFDA4u: goto label_1dfda4;
            case 0x1DFDA8u: goto label_1dfda8;
            case 0x1DFDACu: goto label_1dfdac;
            case 0x1DFDB0u: goto label_1dfdb0;
            case 0x1DFDB4u: goto label_1dfdb4;
            case 0x1DFDB8u: goto label_1dfdb8;
            case 0x1DFDBCu: goto label_1dfdbc;
            case 0x1DFDC0u: goto label_1dfdc0;
            case 0x1DFDC4u: goto label_1dfdc4;
            case 0x1DFDC8u: goto label_1dfdc8;
            case 0x1DFDCCu: goto label_1dfdcc;
            case 0x1DFDD0u: goto label_1dfdd0;
            case 0x1DFDD4u: goto label_1dfdd4;
            case 0x1DFDD8u: goto label_1dfdd8;
            case 0x1DFDDCu: goto label_1dfddc;
            case 0x1DFDE0u: goto label_1dfde0;
            case 0x1DFDE4u: goto label_1dfde4;
            case 0x1DFDE8u: goto label_1dfde8;
            case 0x1DFDECu: goto label_1dfdec;
            case 0x1DFDF0u: goto label_1dfdf0;
            case 0x1DFDF4u: goto label_1dfdf4;
            case 0x1DFDF8u: goto label_1dfdf8;
            case 0x1DFDFCu: goto label_1dfdfc;
            case 0x1DFE00u: goto label_1dfe00;
            case 0x1DFE04u: goto label_1dfe04;
            case 0x1DFE08u: goto label_1dfe08;
            case 0x1DFE0Cu: goto label_1dfe0c;
            case 0x1DFE10u: goto label_1dfe10;
            case 0x1DFE14u: goto label_1dfe14;
            case 0x1DFE18u: goto label_1dfe18;
            case 0x1DFE1Cu: goto label_1dfe1c;
            case 0x1DFE20u: goto label_1dfe20;
            case 0x1DFE24u: goto label_1dfe24;
            case 0x1DFE28u: goto label_1dfe28;
            case 0x1DFE2Cu: goto label_1dfe2c;
            case 0x1DFE30u: goto label_1dfe30;
            case 0x1DFE34u: goto label_1dfe34;
            case 0x1DFE38u: goto label_1dfe38;
            case 0x1DFE3Cu: goto label_1dfe3c;
            case 0x1DFE40u: goto label_1dfe40;
            case 0x1DFE44u: goto label_1dfe44;
            case 0x1DFE48u: goto label_1dfe48;
            case 0x1DFE4Cu: goto label_1dfe4c;
            case 0x1DFE50u: goto label_1dfe50;
            case 0x1DFE54u: goto label_1dfe54;
            case 0x1DFE58u: goto label_1dfe58;
            case 0x1DFE5Cu: goto label_1dfe5c;
            case 0x1DFE60u: goto label_1dfe60;
            case 0x1DFE64u: goto label_1dfe64;
            case 0x1DFE68u: goto label_1dfe68;
            case 0x1DFE6Cu: goto label_1dfe6c;
            case 0x1DFE70u: goto label_1dfe70;
            case 0x1DFE74u: goto label_1dfe74;
            case 0x1DFE78u: goto label_1dfe78;
            case 0x1DFE7Cu: goto label_1dfe7c;
            case 0x1DFE80u: goto label_1dfe80;
            case 0x1DFE84u: goto label_1dfe84;
            case 0x1DFE88u: goto label_1dfe88;
            case 0x1DFE8Cu: goto label_1dfe8c;
            case 0x1DFE90u: goto label_1dfe90;
            case 0x1DFE94u: goto label_1dfe94;
            case 0x1DFE98u: goto label_1dfe98;
            case 0x1DFE9Cu: goto label_1dfe9c;
            case 0x1DFEA0u: goto label_1dfea0;
            case 0x1DFEA4u: goto label_1dfea4;
            case 0x1DFEA8u: goto label_1dfea8;
            case 0x1DFEACu: goto label_1dfeac;
            case 0x1DFEB0u: goto label_1dfeb0;
            case 0x1DFEB4u: goto label_1dfeb4;
            case 0x1DFEB8u: goto label_1dfeb8;
            case 0x1DFEBCu: goto label_1dfebc;
            case 0x1DFEC0u: goto label_1dfec0;
            case 0x1DFEC4u: goto label_1dfec4;
            case 0x1DFEC8u: goto label_1dfec8;
            case 0x1DFECCu: goto label_1dfecc;
            case 0x1DFED0u: goto label_1dfed0;
            case 0x1DFED4u: goto label_1dfed4;
            case 0x1DFED8u: goto label_1dfed8;
            case 0x1DFEDCu: goto label_1dfedc;
            case 0x1DFEE0u: goto label_1dfee0;
            case 0x1DFEE4u: goto label_1dfee4;
            case 0x1DFEE8u: goto label_1dfee8;
            case 0x1DFEECu: goto label_1dfeec;
            case 0x1DFEF0u: goto label_1dfef0;
            case 0x1DFEF4u: goto label_1dfef4;
            case 0x1DFEF8u: goto label_1dfef8;
            case 0x1DFEFCu: goto label_1dfefc;
            case 0x1DFF00u: goto label_1dff00;
            case 0x1DFF04u: goto label_1dff04;
            case 0x1DFF08u: goto label_1dff08;
            case 0x1DFF0Cu: goto label_1dff0c;
            case 0x1DFF10u: goto label_1dff10;
            case 0x1DFF14u: goto label_1dff14;
            case 0x1DFF18u: goto label_1dff18;
            case 0x1DFF1Cu: goto label_1dff1c;
            case 0x1DFF20u: goto label_1dff20;
            case 0x1DFF24u: goto label_1dff24;
            case 0x1DFF28u: goto label_1dff28;
            case 0x1DFF2Cu: goto label_1dff2c;
            case 0x1DFF30u: goto label_1dff30;
            case 0x1DFF34u: goto label_1dff34;
            case 0x1DFF38u: goto label_1dff38;
            case 0x1DFF3Cu: goto label_1dff3c;
            case 0x1DFF40u: goto label_1dff40;
            case 0x1DFF44u: goto label_1dff44;
            case 0x1DFF48u: goto label_1dff48;
            case 0x1DFF4Cu: goto label_1dff4c;
            case 0x1DFF50u: goto label_1dff50;
            case 0x1DFF54u: goto label_1dff54;
            case 0x1DFF58u: goto label_1dff58;
            case 0x1DFF5Cu: goto label_1dff5c;
            case 0x1DFF60u: goto label_1dff60;
            case 0x1DFF64u: goto label_1dff64;
            case 0x1DFF68u: goto label_1dff68;
            case 0x1DFF6Cu: goto label_1dff6c;
            case 0x1DFF70u: goto label_1dff70;
            case 0x1DFF74u: goto label_1dff74;
            case 0x1DFF78u: goto label_1dff78;
            case 0x1DFF7Cu: goto label_1dff7c;
            case 0x1DFF80u: goto label_1dff80;
            case 0x1DFF84u: goto label_1dff84;
            case 0x1DFF88u: goto label_1dff88;
            case 0x1DFF8Cu: goto label_1dff8c;
            case 0x1DFF90u: goto label_1dff90;
            case 0x1DFF94u: goto label_1dff94;
            case 0x1DFF98u: goto label_1dff98;
            case 0x1DFF9Cu: goto label_1dff9c;
            case 0x1DFFA0u: goto label_1dffa0;
            case 0x1DFFA4u: goto label_1dffa4;
            case 0x1DFFA8u: goto label_1dffa8;
            case 0x1DFFACu: goto label_1dffac;
            case 0x1DFFB0u: goto label_1dffb0;
            case 0x1DFFB4u: goto label_1dffb4;
            case 0x1DFFB8u: goto label_1dffb8;
            case 0x1DFFBCu: goto label_1dffbc;
            case 0x1DFFC0u: goto label_1dffc0;
            case 0x1DFFC4u: goto label_1dffc4;
            case 0x1DFFC8u: goto label_1dffc8;
            case 0x1DFFCCu: goto label_1dffcc;
            case 0x1DFFD0u: goto label_1dffd0;
            case 0x1DFFD4u: goto label_1dffd4;
            case 0x1DFFD8u: goto label_1dffd8;
            case 0x1DFFDCu: goto label_1dffdc;
            case 0x1DFFE0u: goto label_1dffe0;
            case 0x1DFFE4u: goto label_1dffe4;
            case 0x1DFFE8u: goto label_1dffe8;
            case 0x1DFFECu: goto label_1dffec;
            case 0x1DFFF0u: goto label_1dfff0;
            case 0x1DFFF4u: goto label_1dfff4;
            case 0x1DFFF8u: goto label_1dfff8;
            case 0x1DFFFCu: goto label_1dfffc;
            case 0x1E0000u: goto label_1e0000;
            case 0x1E0004u: goto label_1e0004;
            case 0x1E0008u: goto label_1e0008;
            case 0x1E000Cu: goto label_1e000c;
            case 0x1E0010u: goto label_1e0010;
            case 0x1E0014u: goto label_1e0014;
            case 0x1E0018u: goto label_1e0018;
            case 0x1E001Cu: goto label_1e001c;
            case 0x1E0020u: goto label_1e0020;
            case 0x1E0024u: goto label_1e0024;
            case 0x1E0028u: goto label_1e0028;
            case 0x1E002Cu: goto label_1e002c;
            case 0x1E0030u: goto label_1e0030;
            case 0x1E0034u: goto label_1e0034;
            case 0x1E0038u: goto label_1e0038;
            case 0x1E003Cu: goto label_1e003c;
            case 0x1E0040u: goto label_1e0040;
            case 0x1E0044u: goto label_1e0044;
            case 0x1E0048u: goto label_1e0048;
            case 0x1E004Cu: goto label_1e004c;
            case 0x1E0050u: goto label_1e0050;
            case 0x1E0054u: goto label_1e0054;
            case 0x1E0058u: goto label_1e0058;
            case 0x1E005Cu: goto label_1e005c;
            case 0x1E0060u: goto label_1e0060;
            case 0x1E0064u: goto label_1e0064;
            case 0x1E0068u: goto label_1e0068;
            case 0x1E006Cu: goto label_1e006c;
            case 0x1E0070u: goto label_1e0070;
            case 0x1E0074u: goto label_1e0074;
            case 0x1E0078u: goto label_1e0078;
            case 0x1E007Cu: goto label_1e007c;
            case 0x1E0080u: goto label_1e0080;
            case 0x1E0084u: goto label_1e0084;
            case 0x1E0088u: goto label_1e0088;
            case 0x1E008Cu: goto label_1e008c;
            case 0x1E0090u: goto label_1e0090;
            case 0x1E0094u: goto label_1e0094;
            case 0x1E0098u: goto label_1e0098;
            case 0x1E009Cu: goto label_1e009c;
            case 0x1E00A0u: goto label_1e00a0;
            case 0x1E00A4u: goto label_1e00a4;
            case 0x1E00A8u: goto label_1e00a8;
            case 0x1E00ACu: goto label_1e00ac;
            case 0x1E00B0u: goto label_1e00b0;
            case 0x1E00B4u: goto label_1e00b4;
            case 0x1E00B8u: goto label_1e00b8;
            case 0x1E00BCu: goto label_1e00bc;
            case 0x1E00C0u: goto label_1e00c0;
            case 0x1E00C4u: goto label_1e00c4;
            case 0x1E00C8u: goto label_1e00c8;
            case 0x1E00CCu: goto label_1e00cc;
            case 0x1E00D0u: goto label_1e00d0;
            case 0x1E00D4u: goto label_1e00d4;
            case 0x1E00D8u: goto label_1e00d8;
            case 0x1E00DCu: goto label_1e00dc;
            case 0x1E00E0u: goto label_1e00e0;
            case 0x1E00E4u: goto label_1e00e4;
            case 0x1E00E8u: goto label_1e00e8;
            case 0x1E00ECu: goto label_1e00ec;
            case 0x1E00F0u: goto label_1e00f0;
            case 0x1E00F4u: goto label_1e00f4;
            case 0x1E00F8u: goto label_1e00f8;
            case 0x1E00FCu: goto label_1e00fc;
            case 0x1E0100u: goto label_1e0100;
            case 0x1E0104u: goto label_1e0104;
            case 0x1E0108u: goto label_1e0108;
            case 0x1E010Cu: goto label_1e010c;
            case 0x1E0110u: goto label_1e0110;
            case 0x1E0114u: goto label_1e0114;
            case 0x1E0118u: goto label_1e0118;
            case 0x1E011Cu: goto label_1e011c;
            case 0x1E0120u: goto label_1e0120;
            case 0x1E0124u: goto label_1e0124;
            case 0x1E0128u: goto label_1e0128;
            case 0x1E012Cu: goto label_1e012c;
            case 0x1E0130u: goto label_1e0130;
            case 0x1E0134u: goto label_1e0134;
            case 0x1E0138u: goto label_1e0138;
            case 0x1E013Cu: goto label_1e013c;
            case 0x1E0140u: goto label_1e0140;
            case 0x1E0144u: goto label_1e0144;
            case 0x1E0148u: goto label_1e0148;
            case 0x1E014Cu: goto label_1e014c;
            case 0x1E0150u: goto label_1e0150;
            case 0x1E0154u: goto label_1e0154;
            case 0x1E0158u: goto label_1e0158;
            case 0x1E015Cu: goto label_1e015c;
            case 0x1E0160u: goto label_1e0160;
            case 0x1E0164u: goto label_1e0164;
            case 0x1E0168u: goto label_1e0168;
            case 0x1E016Cu: goto label_1e016c;
            case 0x1E0170u: goto label_1e0170;
            case 0x1E0174u: goto label_1e0174;
            case 0x1E0178u: goto label_1e0178;
            case 0x1E017Cu: goto label_1e017c;
            case 0x1E0180u: goto label_1e0180;
            case 0x1E0184u: goto label_1e0184;
            case 0x1E0188u: goto label_1e0188;
            case 0x1E018Cu: goto label_1e018c;
            case 0x1E0190u: goto label_1e0190;
            case 0x1E0194u: goto label_1e0194;
            case 0x1E0198u: goto label_1e0198;
            case 0x1E019Cu: goto label_1e019c;
            case 0x1E01A0u: goto label_1e01a0;
            case 0x1E01A4u: goto label_1e01a4;
            case 0x1E01A8u: goto label_1e01a8;
            case 0x1E01ACu: goto label_1e01ac;
            case 0x1E01B0u: goto label_1e01b0;
            case 0x1E01B4u: goto label_1e01b4;
            case 0x1E01B8u: goto label_1e01b8;
            case 0x1E01BCu: goto label_1e01bc;
            case 0x1E01C0u: goto label_1e01c0;
            case 0x1E01C4u: goto label_1e01c4;
            case 0x1E01C8u: goto label_1e01c8;
            case 0x1E01CCu: goto label_1e01cc;
            case 0x1E01D0u: goto label_1e01d0;
            case 0x1E01D4u: goto label_1e01d4;
            case 0x1E01D8u: goto label_1e01d8;
            case 0x1E01DCu: goto label_1e01dc;
            case 0x1E01E0u: goto label_1e01e0;
            case 0x1E01E4u: goto label_1e01e4;
            case 0x1E01E8u: goto label_1e01e8;
            case 0x1E01ECu: goto label_1e01ec;
            case 0x1E01F0u: goto label_1e01f0;
            case 0x1E01F4u: goto label_1e01f4;
            case 0x1E01F8u: goto label_1e01f8;
            case 0x1E01FCu: goto label_1e01fc;
            case 0x1E0200u: goto label_1e0200;
            case 0x1E0204u: goto label_1e0204;
            case 0x1E0208u: goto label_1e0208;
            case 0x1E020Cu: goto label_1e020c;
            case 0x1E0210u: goto label_1e0210;
            case 0x1E0214u: goto label_1e0214;
            case 0x1E0218u: goto label_1e0218;
            case 0x1E021Cu: goto label_1e021c;
            case 0x1E0220u: goto label_1e0220;
            case 0x1E0224u: goto label_1e0224;
            case 0x1E0228u: goto label_1e0228;
            case 0x1E022Cu: goto label_1e022c;
            case 0x1E0230u: goto label_1e0230;
            case 0x1E0234u: goto label_1e0234;
            case 0x1E0238u: goto label_1e0238;
            case 0x1E023Cu: goto label_1e023c;
            case 0x1E0240u: goto label_1e0240;
            case 0x1E0244u: goto label_1e0244;
            case 0x1E0248u: goto label_1e0248;
            case 0x1E024Cu: goto label_1e024c;
            case 0x1E0250u: goto label_1e0250;
            case 0x1E0254u: goto label_1e0254;
            case 0x1E0258u: goto label_1e0258;
            case 0x1E025Cu: goto label_1e025c;
            case 0x1E0260u: goto label_1e0260;
            case 0x1E0264u: goto label_1e0264;
            case 0x1E0268u: goto label_1e0268;
            case 0x1E026Cu: goto label_1e026c;
            case 0x1E0270u: goto label_1e0270;
            case 0x1E0274u: goto label_1e0274;
            case 0x1E0278u: goto label_1e0278;
            case 0x1E027Cu: goto label_1e027c;
            case 0x1E0280u: goto label_1e0280;
            case 0x1E0284u: goto label_1e0284;
            case 0x1E0288u: goto label_1e0288;
            case 0x1E028Cu: goto label_1e028c;
            case 0x1E0290u: goto label_1e0290;
            case 0x1E0294u: goto label_1e0294;
            case 0x1E0298u: goto label_1e0298;
            case 0x1E029Cu: goto label_1e029c;
            case 0x1E02A0u: goto label_1e02a0;
            case 0x1E02A4u: goto label_1e02a4;
            case 0x1E02A8u: goto label_1e02a8;
            case 0x1E02ACu: goto label_1e02ac;
            case 0x1E02B0u: goto label_1e02b0;
            case 0x1E02B4u: goto label_1e02b4;
            case 0x1E02B8u: goto label_1e02b8;
            case 0x1E02BCu: goto label_1e02bc;
            case 0x1E02C0u: goto label_1e02c0;
            case 0x1E02C4u: goto label_1e02c4;
            case 0x1E02C8u: goto label_1e02c8;
            case 0x1E02CCu: goto label_1e02cc;
            case 0x1E02D0u: goto label_1e02d0;
            case 0x1E02D4u: goto label_1e02d4;
            case 0x1E02D8u: goto label_1e02d8;
            case 0x1E02DCu: goto label_1e02dc;
            case 0x1E02E0u: goto label_1e02e0;
            case 0x1E02E4u: goto label_1e02e4;
            case 0x1E02E8u: goto label_1e02e8;
            case 0x1E02ECu: goto label_1e02ec;
            case 0x1E02F0u: goto label_1e02f0;
            case 0x1E02F4u: goto label_1e02f4;
            case 0x1E02F8u: goto label_1e02f8;
            case 0x1E02FCu: goto label_1e02fc;
            case 0x1E0300u: goto label_1e0300;
            case 0x1E0304u: goto label_1e0304;
            case 0x1E0308u: goto label_1e0308;
            case 0x1E030Cu: goto label_1e030c;
            case 0x1E0310u: goto label_1e0310;
            case 0x1E0314u: goto label_1e0314;
            case 0x1E0318u: goto label_1e0318;
            case 0x1E031Cu: goto label_1e031c;
            case 0x1E0320u: goto label_1e0320;
            case 0x1E0324u: goto label_1e0324;
            case 0x1E0328u: goto label_1e0328;
            case 0x1E032Cu: goto label_1e032c;
            case 0x1E0330u: goto label_1e0330;
            case 0x1E0334u: goto label_1e0334;
            case 0x1E0338u: goto label_1e0338;
            case 0x1E033Cu: goto label_1e033c;
            case 0x1E0340u: goto label_1e0340;
            case 0x1E0344u: goto label_1e0344;
            case 0x1E0348u: goto label_1e0348;
            case 0x1E034Cu: goto label_1e034c;
            case 0x1E0350u: goto label_1e0350;
            case 0x1E0354u: goto label_1e0354;
            case 0x1E0358u: goto label_1e0358;
            case 0x1E035Cu: goto label_1e035c;
            case 0x1E0360u: goto label_1e0360;
            case 0x1E0364u: goto label_1e0364;
            case 0x1E0368u: goto label_1e0368;
            case 0x1E036Cu: goto label_1e036c;
            case 0x1E0370u: goto label_1e0370;
            case 0x1E0374u: goto label_1e0374;
            case 0x1E0378u: goto label_1e0378;
            case 0x1E037Cu: goto label_1e037c;
            case 0x1E0380u: goto label_1e0380;
            case 0x1E0384u: goto label_1e0384;
            case 0x1E0388u: goto label_1e0388;
            case 0x1E038Cu: goto label_1e038c;
            case 0x1E0390u: goto label_1e0390;
            case 0x1E0394u: goto label_1e0394;
            case 0x1E0398u: goto label_1e0398;
            case 0x1E039Cu: goto label_1e039c;
            case 0x1E03A0u: goto label_1e03a0;
            case 0x1E03A4u: goto label_1e03a4;
            case 0x1E03A8u: goto label_1e03a8;
            case 0x1E03ACu: goto label_1e03ac;
            case 0x1E03B0u: goto label_1e03b0;
            case 0x1E03B4u: goto label_1e03b4;
            case 0x1E03B8u: goto label_1e03b8;
            case 0x1E03BCu: goto label_1e03bc;
            case 0x1E03C0u: goto label_1e03c0;
            case 0x1E03C4u: goto label_1e03c4;
            case 0x1E03C8u: goto label_1e03c8;
            case 0x1E03CCu: goto label_1e03cc;
            case 0x1E03D0u: goto label_1e03d0;
            case 0x1E03D4u: goto label_1e03d4;
            case 0x1E03D8u: goto label_1e03d8;
            case 0x1E03DCu: goto label_1e03dc;
            case 0x1E03E0u: goto label_1e03e0;
            case 0x1E03E4u: goto label_1e03e4;
            case 0x1E03E8u: goto label_1e03e8;
            case 0x1E03ECu: goto label_1e03ec;
            case 0x1E03F0u: goto label_1e03f0;
            case 0x1E03F4u: goto label_1e03f4;
            case 0x1E03F8u: goto label_1e03f8;
            case 0x1E03FCu: goto label_1e03fc;
            case 0x1E0400u: goto label_1e0400;
            case 0x1E0404u: goto label_1e0404;
            case 0x1E0408u: goto label_1e0408;
            case 0x1E040Cu: goto label_1e040c;
            case 0x1E0410u: goto label_1e0410;
            case 0x1E0414u: goto label_1e0414;
            case 0x1E0418u: goto label_1e0418;
            case 0x1E041Cu: goto label_1e041c;
            case 0x1E0420u: goto label_1e0420;
            case 0x1E0424u: goto label_1e0424;
            case 0x1E0428u: goto label_1e0428;
            case 0x1E042Cu: goto label_1e042c;
            case 0x1E0430u: goto label_1e0430;
            case 0x1E0434u: goto label_1e0434;
            case 0x1E0438u: goto label_1e0438;
            case 0x1E043Cu: goto label_1e043c;
            case 0x1E0440u: goto label_1e0440;
            case 0x1E0444u: goto label_1e0444;
            case 0x1E0448u: goto label_1e0448;
            case 0x1E044Cu: goto label_1e044c;
            case 0x1E0450u: goto label_1e0450;
            case 0x1E0454u: goto label_1e0454;
            case 0x1E0458u: goto label_1e0458;
            case 0x1E045Cu: goto label_1e045c;
            case 0x1E0460u: goto label_1e0460;
            case 0x1E0464u: goto label_1e0464;
            case 0x1E0468u: goto label_1e0468;
            case 0x1E046Cu: goto label_1e046c;
            case 0x1E0470u: goto label_1e0470;
            case 0x1E0474u: goto label_1e0474;
            case 0x1E0478u: goto label_1e0478;
            case 0x1E047Cu: goto label_1e047c;
            case 0x1E0480u: goto label_1e0480;
            case 0x1E0484u: goto label_1e0484;
            case 0x1E0488u: goto label_1e0488;
            case 0x1E048Cu: goto label_1e048c;
            case 0x1E0490u: goto label_1e0490;
            case 0x1E0494u: goto label_1e0494;
            case 0x1E0498u: goto label_1e0498;
            case 0x1E049Cu: goto label_1e049c;
            case 0x1E04A0u: goto label_1e04a0;
            case 0x1E04A4u: goto label_1e04a4;
            case 0x1E04A8u: goto label_1e04a8;
            case 0x1E04ACu: goto label_1e04ac;
            case 0x1E04B0u: goto label_1e04b0;
            case 0x1E04B4u: goto label_1e04b4;
            case 0x1E04B8u: goto label_1e04b8;
            case 0x1E04BCu: goto label_1e04bc;
            case 0x1E04C0u: goto label_1e04c0;
            case 0x1E04C4u: goto label_1e04c4;
            case 0x1E04C8u: goto label_1e04c8;
            case 0x1E04CCu: goto label_1e04cc;
            case 0x1E04D0u: goto label_1e04d0;
            case 0x1E04D4u: goto label_1e04d4;
            case 0x1E04D8u: goto label_1e04d8;
            case 0x1E04DCu: goto label_1e04dc;
            case 0x1E04E0u: goto label_1e04e0;
            case 0x1E04E4u: goto label_1e04e4;
            case 0x1E04E8u: goto label_1e04e8;
            case 0x1E04ECu: goto label_1e04ec;
            case 0x1E04F0u: goto label_1e04f0;
            case 0x1E04F4u: goto label_1e04f4;
            case 0x1E04F8u: goto label_1e04f8;
            case 0x1E04FCu: goto label_1e04fc;
            case 0x1E0500u: goto label_1e0500;
            case 0x1E0504u: goto label_1e0504;
            case 0x1E0508u: goto label_1e0508;
            case 0x1E050Cu: goto label_1e050c;
            case 0x1E0510u: goto label_1e0510;
            case 0x1E0514u: goto label_1e0514;
            case 0x1E0518u: goto label_1e0518;
            case 0x1E051Cu: goto label_1e051c;
            case 0x1E0520u: goto label_1e0520;
            case 0x1E0524u: goto label_1e0524;
            case 0x1E0528u: goto label_1e0528;
            case 0x1E052Cu: goto label_1e052c;
            case 0x1E0530u: goto label_1e0530;
            case 0x1E0534u: goto label_1e0534;
            case 0x1E0538u: goto label_1e0538;
            case 0x1E053Cu: goto label_1e053c;
            case 0x1E0540u: goto label_1e0540;
            case 0x1E0544u: goto label_1e0544;
            case 0x1E0548u: goto label_1e0548;
            case 0x1E054Cu: goto label_1e054c;
            case 0x1E0550u: goto label_1e0550;
            case 0x1E0554u: goto label_1e0554;
            case 0x1E0558u: goto label_1e0558;
            case 0x1E055Cu: goto label_1e055c;
            case 0x1E0560u: goto label_1e0560;
            case 0x1E0564u: goto label_1e0564;
            case 0x1E0568u: goto label_1e0568;
            case 0x1E056Cu: goto label_1e056c;
            case 0x1E0570u: goto label_1e0570;
            case 0x1E0574u: goto label_1e0574;
            case 0x1E0578u: goto label_1e0578;
            case 0x1E057Cu: goto label_1e057c;
            case 0x1E0580u: goto label_1e0580;
            case 0x1E0584u: goto label_1e0584;
            case 0x1E0588u: goto label_1e0588;
            case 0x1E058Cu: goto label_1e058c;
            case 0x1E0590u: goto label_1e0590;
            case 0x1E0594u: goto label_1e0594;
            case 0x1E0598u: goto label_1e0598;
            case 0x1E059Cu: goto label_1e059c;
            case 0x1E05A0u: goto label_1e05a0;
            case 0x1E05A4u: goto label_1e05a4;
            case 0x1E05A8u: goto label_1e05a8;
            case 0x1E05ACu: goto label_1e05ac;
            case 0x1E05B0u: goto label_1e05b0;
            case 0x1E05B4u: goto label_1e05b4;
            case 0x1E05B8u: goto label_1e05b8;
            case 0x1E05BCu: goto label_1e05bc;
            case 0x1E05C0u: goto label_1e05c0;
            case 0x1E05C4u: goto label_1e05c4;
            case 0x1E05C8u: goto label_1e05c8;
            case 0x1E05CCu: goto label_1e05cc;
            case 0x1E05D0u: goto label_1e05d0;
            case 0x1E05D4u: goto label_1e05d4;
            case 0x1E05D8u: goto label_1e05d8;
            case 0x1E05DCu: goto label_1e05dc;
            case 0x1E05E0u: goto label_1e05e0;
            case 0x1E05E4u: goto label_1e05e4;
            case 0x1E05E8u: goto label_1e05e8;
            case 0x1E05ECu: goto label_1e05ec;
            case 0x1E05F0u: goto label_1e05f0;
            case 0x1E05F4u: goto label_1e05f4;
            case 0x1E05F8u: goto label_1e05f8;
            case 0x1E05FCu: goto label_1e05fc;
            case 0x1E0600u: goto label_1e0600;
            case 0x1E0604u: goto label_1e0604;
            case 0x1E0608u: goto label_1e0608;
            case 0x1E060Cu: goto label_1e060c;
            case 0x1E0610u: goto label_1e0610;
            case 0x1E0614u: goto label_1e0614;
            case 0x1E0618u: goto label_1e0618;
            case 0x1E061Cu: goto label_1e061c;
            case 0x1E0620u: goto label_1e0620;
            case 0x1E0624u: goto label_1e0624;
            case 0x1E0628u: goto label_1e0628;
            case 0x1E062Cu: goto label_1e062c;
            case 0x1E0630u: goto label_1e0630;
            case 0x1E0634u: goto label_1e0634;
            case 0x1E0638u: goto label_1e0638;
            case 0x1E063Cu: goto label_1e063c;
            case 0x1E0640u: goto label_1e0640;
            case 0x1E0644u: goto label_1e0644;
            case 0x1E0648u: goto label_1e0648;
            case 0x1E064Cu: goto label_1e064c;
            case 0x1E0650u: goto label_1e0650;
            case 0x1E0654u: goto label_1e0654;
            case 0x1E0658u: goto label_1e0658;
            case 0x1E065Cu: goto label_1e065c;
            case 0x1E0660u: goto label_1e0660;
            case 0x1E0664u: goto label_1e0664;
            case 0x1E0668u: goto label_1e0668;
            case 0x1E066Cu: goto label_1e066c;
            case 0x1E0670u: goto label_1e0670;
            case 0x1E0674u: goto label_1e0674;
            case 0x1E0678u: goto label_1e0678;
            default: break;
        }
        return;
    }
label_fallthrough_0x1e0674:
    ctx->pc = 0x1E067Cu;
}

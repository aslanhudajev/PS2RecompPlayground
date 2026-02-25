#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En3_03Move
// Address: 0x19cc50 - 0x19ed3c
void En3_03Move_0x19cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En3_03Move_0x19cc50");
#endif

    ctx->pc = 0x19cc50u;

label_19cc50:
    // 0x19cc50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19cc54:
    // 0x19cc54: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x19cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19cc58:
    // 0x19cc58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19cc5c:
    // 0x19cc5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19cc5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19cc60:
    // 0x19cc60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19cc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19cc64:
    // 0x19cc64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cc64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cc68:
    // 0x19cc68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19cc6c:
    // 0x19cc6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19cc70:
    // 0x19cc70: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x19cc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19cc74:
    // 0x19cc74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19cc74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19cc78:
    // 0x19cc78: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x19cc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cc7c:
    // 0x19cc7c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19cc7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19cc80:
    // 0x19cc80: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x19cc80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_19cc84:
    // 0x19cc84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19cc88:
    // 0x19cc88: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x19cc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19cc8c:
    // 0x19cc8c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19cc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cc90:
    // 0x19cc90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19cc90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19cc94:
    // 0x19cc94: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x19cc94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_19cc98:
    // 0x19cc98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19cc9c:
    // 0x19cc9c: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x19cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19cca0:
    // 0x19cca0: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x19cca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cca4:
    // 0x19cca4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19cca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19cca8:
    // 0x19cca8: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x19cca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_19ccac:
    // 0x19ccac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19ccb0:
    // 0x19ccb0: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x19ccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19ccb4:
    // 0x19ccb4: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x19ccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ccb8:
    // 0x19ccb8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19ccb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19ccbc:
    // 0x19ccbc: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x19ccbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_19ccc0:
    // 0x19ccc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19ccc4:
    // 0x19ccc4: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x19ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19ccc8:
    // 0x19ccc8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x19ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cccc:
    // 0x19cccc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19ccccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19ccd0:
    // 0x19ccd0: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x19ccd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_19ccd4:
    // 0x19ccd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19ccd8:
    // 0x19ccd8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x19ccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ccdc:
    // 0x19ccdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19ccdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19cce0:
    // 0x19cce0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19cce4:
    if (ctx->pc == 0x19CCE4u) {
        ctx->pc = 0x19CCE4u;
            // 0x19cce4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x19CCE8u;
        goto label_19cce8;
    }
    ctx->pc = 0x19CCE0u;
    {
        const bool branch_taken_0x19cce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCE0u;
            // 0x19cce4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cce0) {
            ctx->pc = 0x19CD00u;
            goto label_19cd00;
        }
    }
    ctx->pc = 0x19CCE8u;
label_19cce8:
    // 0x19cce8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19ccec:
    // 0x19ccec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19ccecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19ccf0:
    // 0x19ccf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ccf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ccf4:
    // 0x19ccf4: 0x0  nop
    ctx->pc = 0x19ccf4u;
    // NOP
label_19ccf8:
    // 0x19ccf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19ccf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19ccfc:
    // 0x19ccfc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19ccfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_19cd00:
    // 0x19cd00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cd04:
    // 0x19cd04: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19cd08:
    // 0x19cd08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19cd08u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19cd0c:
    // 0x19cd0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cd10:
    // 0x19cd10: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x19cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cd14:
    // 0x19cd14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19cd14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19cd18:
    // 0x19cd18: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19cd1c:
    if (ctx->pc == 0x19CD1Cu) {
        ctx->pc = 0x19CD1Cu;
            // 0x19cd1c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x19CD20u;
        goto label_19cd20;
    }
    ctx->pc = 0x19CD18u;
    {
        const bool branch_taken_0x19cd18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD18u;
            // 0x19cd1c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd18) {
            ctx->pc = 0x19CD38u;
            goto label_19cd38;
        }
    }
    ctx->pc = 0x19CD20u;
label_19cd20:
    // 0x19cd20: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19cd24:
    // 0x19cd24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19cd24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19cd28:
    // 0x19cd28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cd2c:
    // 0x19cd2c: 0x0  nop
    ctx->pc = 0x19cd2cu;
    // NOP
label_19cd30:
    // 0x19cd30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19cd30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19cd34:
    // 0x19cd34: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19cd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19cd38:
    // 0x19cd38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cd3c:
    // 0x19cd3c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x19cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19cd40:
    // 0x19cd40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19cd40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19cd44:
    // 0x19cd44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cd48:
    // 0x19cd48: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x19cd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cd4c:
    // 0x19cd4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19cd4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19cd50:
    // 0x19cd50: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19cd54:
    if (ctx->pc == 0x19CD54u) {
        ctx->pc = 0x19CD54u;
            // 0x19cd54: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x19CD58u;
        goto label_19cd58;
    }
    ctx->pc = 0x19CD50u;
    {
        const bool branch_taken_0x19cd50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD50u;
            // 0x19cd54: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd50) {
            ctx->pc = 0x19CD70u;
            goto label_19cd70;
        }
    }
    ctx->pc = 0x19CD58u;
label_19cd58:
    // 0x19cd58: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19cd5c:
    // 0x19cd5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19cd5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19cd60:
    // 0x19cd60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cd64:
    // 0x19cd64: 0x0  nop
    ctx->pc = 0x19cd64u;
    // NOP
label_19cd68:
    // 0x19cd68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19cd68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19cd6c:
    // 0x19cd6c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19cd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19cd70:
    // 0x19cd70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cd74:
    // 0x19cd74: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19cd78:
    // 0x19cd78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19cd78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19cd7c:
    // 0x19cd7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cd80:
    // 0x19cd80: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x19cd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cd84:
    // 0x19cd84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19cd84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19cd88:
    // 0x19cd88: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19cd8c:
    if (ctx->pc == 0x19CD8Cu) {
        ctx->pc = 0x19CD8Cu;
            // 0x19cd8c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x19CD90u;
        goto label_19cd90;
    }
    ctx->pc = 0x19CD88u;
    {
        const bool branch_taken_0x19cd88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD88u;
            // 0x19cd8c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd88) {
            ctx->pc = 0x19CDA8u;
            goto label_19cda8;
        }
    }
    ctx->pc = 0x19CD90u;
label_19cd90:
    // 0x19cd90: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19cd94:
    // 0x19cd94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19cd94u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19cd98:
    // 0x19cd98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cd9c:
    // 0x19cd9c: 0x0  nop
    ctx->pc = 0x19cd9cu;
    // NOP
label_19cda0:
    // 0x19cda0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19cda0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19cda4:
    // 0x19cda4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19cda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19cda8:
    // 0x19cda8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cdac:
    // 0x19cdac: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x19cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19cdb0:
    // 0x19cdb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19cdb0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19cdb4:
    // 0x19cdb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cdb8:
    // 0x19cdb8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x19cdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cdbc:
    // 0x19cdbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19cdbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19cdc0:
    // 0x19cdc0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19cdc4:
    if (ctx->pc == 0x19CDC4u) {
        ctx->pc = 0x19CDC4u;
            // 0x19cdc4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x19CDC8u;
        goto label_19cdc8;
    }
    ctx->pc = 0x19CDC0u;
    {
        const bool branch_taken_0x19cdc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CDC0u;
            // 0x19cdc4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdc0) {
            ctx->pc = 0x19CDE0u;
            goto label_19cde0;
        }
    }
    ctx->pc = 0x19CDC8u;
label_19cdc8:
    // 0x19cdc8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19cdcc:
    // 0x19cdcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19cdccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19cdd0:
    // 0x19cdd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cdd4:
    // 0x19cdd4: 0x0  nop
    ctx->pc = 0x19cdd4u;
    // NOP
label_19cdd8:
    // 0x19cdd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19cdd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19cddc:
    // 0x19cddc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19cddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19cde0:
    // 0x19cde0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cde4:
    // 0x19cde4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19cde8:
    // 0x19cde8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19cde8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19cdec:
    // 0x19cdec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cdf0:
    // 0x19cdf0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x19cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cdf4:
    // 0x19cdf4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19cdf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19cdf8:
    // 0x19cdf8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19cdfc:
    if (ctx->pc == 0x19CDFCu) {
        ctx->pc = 0x19CDFCu;
            // 0x19cdfc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x19CE00u;
        goto label_19ce00;
    }
    ctx->pc = 0x19CDF8u;
    {
        const bool branch_taken_0x19cdf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CDF8u;
            // 0x19cdfc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdf8) {
            ctx->pc = 0x19CE18u;
            goto label_19ce18;
        }
    }
    ctx->pc = 0x19CE00u;
label_19ce00:
    // 0x19ce00: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19ce04:
    // 0x19ce04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19ce04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19ce08:
    // 0x19ce08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ce08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ce0c:
    // 0x19ce0c: 0x0  nop
    ctx->pc = 0x19ce0cu;
    // NOP
label_19ce10:
    // 0x19ce10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19ce10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19ce14:
    // 0x19ce14: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19ce14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19ce18:
    // 0x19ce18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ce1c:
    // 0x19ce1c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x19ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_19ce20:
    // 0x19ce20: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x19ce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19ce24:
    // 0x19ce24: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x19ce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19ce28:
    // 0x19ce28: 0xc067bd0  jal         func_19EF40
label_19ce2c:
    if (ctx->pc == 0x19CE2Cu) {
        ctx->pc = 0x19CE2Cu;
            // 0x19ce2c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x19CE30u;
        goto label_19ce30;
    }
    ctx->pc = 0x19CE28u;
    SET_GPR_U32(ctx, 31, 0x19CE30u);
    ctx->pc = 0x19CE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE28u;
            // 0x19ce2c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EF40u;
    if (runtime->hasFunction(0x19EF40u)) {
        auto targetFn = runtime->lookupFunction(0x19EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE30u; }
        if (ctx->pc != 0x19CE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x19ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE30u; }
        if (ctx->pc != 0x19CE30u) { return; }
    }
    ctx->pc = 0x19CE30u;
label_19ce30:
    // 0x19ce30: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19ce34:
    // 0x19ce34: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x19ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_19ce38:
    // 0x19ce38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ce3c:
    // 0x19ce3c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x19ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_19ce40:
    // 0x19ce40: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19ce44:
    // 0x19ce44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19ce48:
    if (ctx->pc == 0x19CE48u) {
        ctx->pc = 0x19CE4Cu;
        goto label_19ce4c;
    }
    ctx->pc = 0x19CE44u;
    {
        const bool branch_taken_0x19ce44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce44) {
            ctx->pc = 0x19CE58u;
            goto label_19ce58;
        }
    }
    ctx->pc = 0x19CE4Cu;
label_19ce4c:
    // 0x19ce4c: 0x1000048e  b           . + 4 + (0x48E << 2)
label_19ce50:
    if (ctx->pc == 0x19CE50u) {
        ctx->pc = 0x19CE54u;
        goto label_19ce54;
    }
    ctx->pc = 0x19CE4Cu;
    {
        const bool branch_taken_0x19ce4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce4c) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19CE54u;
label_19ce54:
    // 0x19ce54: 0x0  nop
    ctx->pc = 0x19ce54u;
    // NOP
label_19ce58:
    // 0x19ce58: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x19ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_19ce5c:
    // 0x19ce5c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_19ce60:
    if (ctx->pc == 0x19CE60u) {
        ctx->pc = 0x19CE64u;
        goto label_19ce64;
    }
    ctx->pc = 0x19CE5Cu;
    {
        const bool branch_taken_0x19ce5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce5c) {
            ctx->pc = 0x19CEB0u;
            goto label_19ceb0;
        }
    }
    ctx->pc = 0x19CE64u;
label_19ce64:
    // 0x19ce64: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19ce68:
    // 0x19ce68: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_19ce6c:
    if (ctx->pc == 0x19CE6Cu) {
        ctx->pc = 0x19CE6Cu;
            // 0x19ce6c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->pc = 0x19CE70u;
        goto label_19ce70;
    }
    ctx->pc = 0x19CE68u;
    {
        const bool branch_taken_0x19ce68 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19CE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE68u;
            // 0x19ce6c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce68) {
            ctx->pc = 0x19CE7Cu;
            goto label_19ce7c;
        }
    }
    ctx->pc = 0x19CE70u;
label_19ce70:
    // 0x19ce70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_19ce74:
    if (ctx->pc == 0x19CE74u) {
        ctx->pc = 0x19CE78u;
        goto label_19ce78;
    }
    ctx->pc = 0x19CE70u;
    {
        const bool branch_taken_0x19ce70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce70) {
            ctx->pc = 0x19CE7Cu;
            goto label_19ce7c;
        }
    }
    ctx->pc = 0x19CE78u;
label_19ce78:
    // 0x19ce78: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x19ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_19ce7c:
    // 0x19ce7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_19ce80:
    if (ctx->pc == 0x19CE80u) {
        ctx->pc = 0x19CE84u;
        goto label_19ce84;
    }
    ctx->pc = 0x19CE7Cu;
    {
        const bool branch_taken_0x19ce7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce7c) {
            ctx->pc = 0x19CEB0u;
            goto label_19ceb0;
        }
    }
    ctx->pc = 0x19CE84u;
label_19ce84:
    // 0x19ce84: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19ce88:
    // 0x19ce88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ce8c:
    // 0x19ce8c: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x19ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_19ce90:
    // 0x19ce90: 0xc065598  jal         func_195660
label_19ce94:
    if (ctx->pc == 0x19CE94u) {
        ctx->pc = 0x19CE94u;
            // 0x19ce94: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19CE98u;
        goto label_19ce98;
    }
    ctx->pc = 0x19CE90u;
    SET_GPR_U32(ctx, 31, 0x19CE98u);
    ctx->pc = 0x19CE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE90u;
            // 0x19ce94: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195660u;
    if (runtime->hasFunction(0x195660u)) {
        auto targetFn = runtime->lookupFunction(0x195660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE98u; }
        if (ctx->pc != 0x19CE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Small_0x195660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE98u; }
        if (ctx->pc != 0x19CE98u) { return; }
    }
    ctx->pc = 0x19CE98u;
label_19ce98:
    // 0x19ce98: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19ce9c:
    // 0x19ce9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19cea0:
    // 0x19cea0: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x19cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_19cea4:
    // 0x19cea4: 0xc065598  jal         func_195660
label_19cea8:
    if (ctx->pc == 0x19CEA8u) {
        ctx->pc = 0x19CEA8u;
            // 0x19cea8: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19CEACu;
        goto label_19ceac;
    }
    ctx->pc = 0x19CEA4u;
    SET_GPR_U32(ctx, 31, 0x19CEACu);
    ctx->pc = 0x19CEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CEA4u;
            // 0x19cea8: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195660u;
    if (runtime->hasFunction(0x195660u)) {
        auto targetFn = runtime->lookupFunction(0x195660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CEACu; }
        if (ctx->pc != 0x19CEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Small_0x195660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CEACu; }
        if (ctx->pc != 0x19CEACu) { return; }
    }
    ctx->pc = 0x19CEACu;
label_19ceac:
    // 0x19ceac: 0x0  nop
    ctx->pc = 0x19ceacu;
    // NOP
label_19ceb0:
    // 0x19ceb0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x19ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19ceb4:
    // 0x19ceb4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_19ceb8:
    if (ctx->pc == 0x19CEB8u) {
        ctx->pc = 0x19CEB8u;
            // 0x19ceb8: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->pc = 0x19CEBCu;
        goto label_19cebc;
    }
    ctx->pc = 0x19CEB4u;
    {
        const bool branch_taken_0x19ceb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CEB4u;
            // 0x19ceb8: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ceb4) {
            ctx->pc = 0x19CF10u;
            goto label_19cf10;
        }
    }
    ctx->pc = 0x19CEBCu;
label_19cebc:
    // 0x19cebc: 0xc050bb4  jal         func_142ED0
label_19cec0:
    if (ctx->pc == 0x19CEC0u) {
        ctx->pc = 0x19CEC0u;
            // 0x19cec0: 0xac201a98  sw          $zero, 0x1A98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 0));
        ctx->pc = 0x19CEC4u;
        goto label_19cec4;
    }
    ctx->pc = 0x19CEBCu;
    SET_GPR_U32(ctx, 31, 0x19CEC4u);
    ctx->pc = 0x19CEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CEBCu;
            // 0x19cec0: 0xac201a98  sw          $zero, 0x1A98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CEC4u; }
        if (ctx->pc != 0x19CEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CEC4u; }
        if (ctx->pc != 0x19CEC4u) { return; }
    }
    ctx->pc = 0x19CEC4u;
label_19cec4:
    // 0x19cec4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x19cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_19cec8:
    // 0x19cec8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x19cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_19cecc:
    // 0x19cecc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19ceccu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19ced0:
    // 0x19ced0: 0x0  nop
    ctx->pc = 0x19ced0u;
    // NOP
label_19ced4:
    // 0x19ced4: 0x0  nop
    ctx->pc = 0x19ced4u;
    // NOP
label_19ced8:
    // 0x19ced8: 0x1010  mfhi        $v0
    ctx->pc = 0x19ced8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19cedc:
    // 0x19cedc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x19cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19cee0:
    // 0x19cee0: 0xc050bb4  jal         func_142ED0
label_19cee4:
    if (ctx->pc == 0x19CEE4u) {
        ctx->pc = 0x19CEE4u;
            // 0x19cee4: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x19CEE8u;
        goto label_19cee8;
    }
    ctx->pc = 0x19CEE0u;
    SET_GPR_U32(ctx, 31, 0x19CEE8u);
    ctx->pc = 0x19CEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CEE0u;
            // 0x19cee4: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CEE8u; }
        if (ctx->pc != 0x19CEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CEE8u; }
        if (ctx->pc != 0x19CEE8u) { return; }
    }
    ctx->pc = 0x19CEE8u;
label_19cee8:
    // 0x19cee8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x19cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_19ceec:
    // 0x19ceec: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x19ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_19cef0:
    // 0x19cef0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19cef0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19cef4:
    // 0x19cef4: 0x0  nop
    ctx->pc = 0x19cef4u;
    // NOP
label_19cef8:
    // 0x19cef8: 0x0  nop
    ctx->pc = 0x19cef8u;
    // NOP
label_19cefc:
    // 0x19cefc: 0x1010  mfhi        $v0
    ctx->pc = 0x19cefcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19cf00:
    // 0x19cf00: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x19cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19cf04:
    // 0x19cf04: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x19cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_19cf08:
    // 0x19cf08: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x19cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_19cf0c:
    // 0x19cf0c: 0x0  nop
    ctx->pc = 0x19cf0cu;
    // NOP
label_19cf10:
    // 0x19cf10: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x19cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_19cf14:
    // 0x19cf14: 0x14800032  bnez        $a0, . + 4 + (0x32 << 2)
label_19cf18:
    if (ctx->pc == 0x19CF18u) {
        ctx->pc = 0x19CF1Cu;
        goto label_19cf1c;
    }
    ctx->pc = 0x19CF14u;
    {
        const bool branch_taken_0x19cf14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cf14) {
            ctx->pc = 0x19CFE0u;
            goto label_19cfe0;
        }
    }
    ctx->pc = 0x19CF1Cu;
label_19cf1c:
    // 0x19cf1c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x19cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19cf20:
    // 0x19cf20: 0x3c023c44  lui         $v0, 0x3C44
    ctx->pc = 0x19cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15428 << 16));
label_19cf24:
    // 0x19cf24: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x19cf24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_19cf28:
    // 0x19cf28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19cf28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19cf2c:
    // 0x19cf2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19cf2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cf30:
    // 0x19cf30: 0x0  nop
    ctx->pc = 0x19cf30u;
    // NOP
label_19cf34:
    // 0x19cf34: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x19cf34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_19cf38:
    // 0x19cf38: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x19cf38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_19cf3c:
    // 0x19cf3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cf40:
    // 0x19cf40: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x19cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cf44:
    // 0x19cf44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19cf44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19cf48:
    // 0x19cf48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19cf4c:
    if (ctx->pc == 0x19CF4Cu) {
        ctx->pc = 0x19CF4Cu;
            // 0x19cf4c: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x19CF50u;
        goto label_19cf50;
    }
    ctx->pc = 0x19CF48u;
    {
        const bool branch_taken_0x19cf48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF48u;
            // 0x19cf4c: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf48) {
            ctx->pc = 0x19CF68u;
            goto label_19cf68;
        }
    }
    ctx->pc = 0x19CF50u;
label_19cf50:
    // 0x19cf50: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x19cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_19cf54:
    // 0x19cf54: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19cf54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19cf58:
    // 0x19cf58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cf5c:
    // 0x19cf5c: 0x0  nop
    ctx->pc = 0x19cf5cu;
    // NOP
label_19cf60:
    // 0x19cf60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19cf60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19cf64:
    // 0x19cf64: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19cf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_19cf68:
    // 0x19cf68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cf6c:
    // 0x19cf6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19cf6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cf70:
    // 0x19cf70: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x19cf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cf74:
    // 0x19cf74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19cf74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19cf78:
    // 0x19cf78: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19cf7c:
    if (ctx->pc == 0x19CF7Cu) {
        ctx->pc = 0x19CF7Cu;
            // 0x19cf7c: 0x24430118  addiu       $v1, $v0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
        ctx->pc = 0x19CF80u;
        goto label_19cf80;
    }
    ctx->pc = 0x19CF78u;
    {
        const bool branch_taken_0x19cf78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF78u;
            // 0x19cf7c: 0x24430118  addiu       $v1, $v0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf78) {
            ctx->pc = 0x19CF98u;
            goto label_19cf98;
        }
    }
    ctx->pc = 0x19CF80u;
label_19cf80:
    // 0x19cf80: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x19cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_19cf84:
    // 0x19cf84: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19cf84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19cf88:
    // 0x19cf88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cf88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cf8c:
    // 0x19cf8c: 0x0  nop
    ctx->pc = 0x19cf8cu;
    // NOP
label_19cf90:
    // 0x19cf90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19cf90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19cf94:
    // 0x19cf94: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19cf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_19cf98:
    // 0x19cf98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cf9c:
    // 0x19cf9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19cf9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cfa0:
    // 0x19cfa0: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x19cfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cfa4:
    // 0x19cfa4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19cfa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19cfa8:
    // 0x19cfa8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19cfac:
    if (ctx->pc == 0x19CFACu) {
        ctx->pc = 0x19CFACu;
            // 0x19cfac: 0x24430128  addiu       $v1, $v0, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
        ctx->pc = 0x19CFB0u;
        goto label_19cfb0;
    }
    ctx->pc = 0x19CFA8u;
    {
        const bool branch_taken_0x19cfa8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CFA8u;
            // 0x19cfac: 0x24430128  addiu       $v1, $v0, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cfa8) {
            ctx->pc = 0x19CFC8u;
            goto label_19cfc8;
        }
    }
    ctx->pc = 0x19CFB0u;
label_19cfb0:
    // 0x19cfb0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_19cfb4:
    // 0x19cfb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cfb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cfb8:
    // 0x19cfb8: 0x0  nop
    ctx->pc = 0x19cfb8u;
    // NOP
label_19cfbc:
    // 0x19cfbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19cfbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19cfc0:
    // 0x19cfc0: 0x10000431  b           . + 4 + (0x431 << 2)
label_19cfc4:
    if (ctx->pc == 0x19CFC4u) {
        ctx->pc = 0x19CFC4u;
            // 0x19cfc4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x19CFC8u;
        goto label_19cfc8;
    }
    ctx->pc = 0x19CFC0u;
    {
        const bool branch_taken_0x19cfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CFC0u;
            // 0x19cfc4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cfc0) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19CFC8u;
label_19cfc8:
    // 0x19cfc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cfcc:
    // 0x19cfcc: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x19cfccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_19cfd0:
    // 0x19cfd0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x19cfd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_19cfd4:
    // 0x19cfd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cfd8:
    // 0x19cfd8: 0x1000042b  b           . + 4 + (0x42B << 2)
label_19cfdc:
    if (ctx->pc == 0x19CFDCu) {
        ctx->pc = 0x19CFDCu;
            // 0x19cfdc: 0xe4400128  swc1        $f0, 0x128($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
        ctx->pc = 0x19CFE0u;
        goto label_19cfe0;
    }
    ctx->pc = 0x19CFD8u;
    {
        const bool branch_taken_0x19cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CFD8u;
            // 0x19cfdc: 0xe4400128  swc1        $f0, 0x128($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cfd8) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19CFE0u;
label_19cfe0:
    // 0x19cfe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cfe4:
    // 0x19cfe4: 0x148201e4  bne         $a0, $v0, . + 4 + (0x1E4 << 2)
label_19cfe8:
    if (ctx->pc == 0x19CFE8u) {
        ctx->pc = 0x19CFECu;
        goto label_19cfec;
    }
    ctx->pc = 0x19CFE4u;
    {
        const bool branch_taken_0x19cfe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19cfe4) {
            ctx->pc = 0x19D778u;
            goto label_19d778;
        }
    }
    ctx->pc = 0x19CFECu;
label_19cfec:
    // 0x19cfec: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x19cfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cff0:
    // 0x19cff0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x19cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_19cff4:
    // 0x19cff4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19cff4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19cff8:
    // 0x19cff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cffc:
    // 0x19cffc: 0x0  nop
    ctx->pc = 0x19cffcu;
    // NOP
label_19d000:
    // 0x19d000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19d000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d004:
    // 0x19d004: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_19d008:
    if (ctx->pc == 0x19D008u) {
        ctx->pc = 0x19D008u;
            // 0x19d008: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x19D00Cu;
        goto label_19d00c;
    }
    ctx->pc = 0x19D004u;
    {
        const bool branch_taken_0x19d004 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D004u;
            // 0x19d008: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d004) {
            ctx->pc = 0x19D060u;
            goto label_19d060;
        }
    }
    ctx->pc = 0x19D00Cu;
label_19d00c:
    // 0x19d00c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19d00cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19d010:
    // 0x19d010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d014:
    // 0x19d014: 0x0  nop
    ctx->pc = 0x19d014u;
    // NOP
label_19d018:
    // 0x19d018: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19d018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d01c:
    // 0x19d01c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_19d020:
    if (ctx->pc == 0x19D020u) {
        ctx->pc = 0x19D020u;
            // 0x19d020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19D024u;
        goto label_19d024;
    }
    ctx->pc = 0x19D01Cu;
    {
        const bool branch_taken_0x19d01c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D01Cu;
            // 0x19d020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d01c) {
            ctx->pc = 0x19D060u;
            goto label_19d060;
        }
    }
    ctx->pc = 0x19D024u;
label_19d024:
    // 0x19d024: 0xc067b50  jal         func_19ED40
label_19d028:
    if (ctx->pc == 0x19D028u) {
        ctx->pc = 0x19D02Cu;
        goto label_19d02c;
    }
    ctx->pc = 0x19D024u;
    SET_GPR_U32(ctx, 31, 0x19D02Cu);
    ctx->pc = 0x19ED40u;
    if (runtime->hasFunction(0x19ED40u)) {
        auto targetFn = runtime->lookupFunction(0x19ED40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D02Cu; }
        if (ctx->pc != 0x19D02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x19ed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D02Cu; }
        if (ctx->pc != 0x19D02Cu) { return; }
    }
    ctx->pc = 0x19D02Cu;
label_19d02c:
    // 0x19d02c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d030:
    // 0x19d030: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d034:
    // 0x19d034: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x19d034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_19d038:
    // 0x19d038: 0xc065590  jal         func_195640
label_19d03c:
    if (ctx->pc == 0x19D03Cu) {
        ctx->pc = 0x19D03Cu;
            // 0x19d03c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19D040u;
        goto label_19d040;
    }
    ctx->pc = 0x19D038u;
    SET_GPR_U32(ctx, 31, 0x19D040u);
    ctx->pc = 0x19D03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D038u;
            // 0x19d03c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D040u; }
        if (ctx->pc != 0x19D040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D040u; }
        if (ctx->pc != 0x19D040u) { return; }
    }
    ctx->pc = 0x19D040u;
label_19d040:
    // 0x19d040: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d044:
    // 0x19d044: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d048:
    // 0x19d048: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x19d048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_19d04c:
    // 0x19d04c: 0xc065590  jal         func_195640
label_19d050:
    if (ctx->pc == 0x19D050u) {
        ctx->pc = 0x19D050u;
            // 0x19d050: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19D054u;
        goto label_19d054;
    }
    ctx->pc = 0x19D04Cu;
    SET_GPR_U32(ctx, 31, 0x19D054u);
    ctx->pc = 0x19D050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D04Cu;
            // 0x19d050: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D054u; }
        if (ctx->pc != 0x19D054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D054u; }
        if (ctx->pc != 0x19D054u) { return; }
    }
    ctx->pc = 0x19D054u;
label_19d054:
    // 0x19d054: 0x10000028  b           . + 4 + (0x28 << 2)
label_19d058:
    if (ctx->pc == 0x19D058u) {
        ctx->pc = 0x19D05Cu;
        goto label_19d05c;
    }
    ctx->pc = 0x19D054u;
    {
        const bool branch_taken_0x19d054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d054) {
            ctx->pc = 0x19D0F8u;
            goto label_19d0f8;
        }
    }
    ctx->pc = 0x19D05Cu;
label_19d05c:
    // 0x19d05c: 0x0  nop
    ctx->pc = 0x19d05cu;
    // NOP
label_19d060:
    // 0x19d060: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x19d060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_19d064:
    // 0x19d064: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x19d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d068:
    // 0x19d068: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19d068u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19d06c:
    // 0x19d06c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d070:
    // 0x19d070: 0x0  nop
    ctx->pc = 0x19d070u;
    // NOP
label_19d074:
    // 0x19d074: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19d074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d078:
    // 0x19d078: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_19d07c:
    if (ctx->pc == 0x19D07Cu) {
        ctx->pc = 0x19D07Cu;
            // 0x19d07c: 0x3c02bba3  lui         $v0, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
        ctx->pc = 0x19D080u;
        goto label_19d080;
    }
    ctx->pc = 0x19D078u;
    {
        const bool branch_taken_0x19d078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D078u;
            // 0x19d07c: 0x3c02bba3  lui         $v0, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d078) {
            ctx->pc = 0x19D0D0u;
            goto label_19d0d0;
        }
    }
    ctx->pc = 0x19D080u;
label_19d080:
    // 0x19d080: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19d080u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19d084:
    // 0x19d084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d088:
    // 0x19d088: 0x0  nop
    ctx->pc = 0x19d088u;
    // NOP
label_19d08c:
    // 0x19d08c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19d08cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d090:
    // 0x19d090: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_19d094:
    if (ctx->pc == 0x19D094u) {
        ctx->pc = 0x19D094u;
            // 0x19d094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19D098u;
        goto label_19d098;
    }
    ctx->pc = 0x19D090u;
    {
        const bool branch_taken_0x19d090 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D090u;
            // 0x19d094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d090) {
            ctx->pc = 0x19D0D0u;
            goto label_19d0d0;
        }
    }
    ctx->pc = 0x19D098u;
label_19d098:
    // 0x19d098: 0xc067b50  jal         func_19ED40
label_19d09c:
    if (ctx->pc == 0x19D09Cu) {
        ctx->pc = 0x19D0A0u;
        goto label_19d0a0;
    }
    ctx->pc = 0x19D098u;
    SET_GPR_U32(ctx, 31, 0x19D0A0u);
    ctx->pc = 0x19ED40u;
    if (runtime->hasFunction(0x19ED40u)) {
        auto targetFn = runtime->lookupFunction(0x19ED40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0A0u; }
        if (ctx->pc != 0x19D0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x19ed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0A0u; }
        if (ctx->pc != 0x19D0A0u) { return; }
    }
    ctx->pc = 0x19D0A0u;
label_19d0a0:
    // 0x19d0a0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d0a4:
    // 0x19d0a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d0a8:
    // 0x19d0a8: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x19d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_19d0ac:
    // 0x19d0ac: 0xc065590  jal         func_195640
label_19d0b0:
    if (ctx->pc == 0x19D0B0u) {
        ctx->pc = 0x19D0B0u;
            // 0x19d0b0: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19D0B4u;
        goto label_19d0b4;
    }
    ctx->pc = 0x19D0ACu;
    SET_GPR_U32(ctx, 31, 0x19D0B4u);
    ctx->pc = 0x19D0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0ACu;
            // 0x19d0b0: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0B4u; }
        if (ctx->pc != 0x19D0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0B4u; }
        if (ctx->pc != 0x19D0B4u) { return; }
    }
    ctx->pc = 0x19D0B4u;
label_19d0b4:
    // 0x19d0b4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d0b8:
    // 0x19d0b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d0bc:
    // 0x19d0bc: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x19d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_19d0c0:
    // 0x19d0c0: 0xc065590  jal         func_195640
label_19d0c4:
    if (ctx->pc == 0x19D0C4u) {
        ctx->pc = 0x19D0C4u;
            // 0x19d0c4: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19D0C8u;
        goto label_19d0c8;
    }
    ctx->pc = 0x19D0C0u;
    SET_GPR_U32(ctx, 31, 0x19D0C8u);
    ctx->pc = 0x19D0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0C0u;
            // 0x19d0c4: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0C8u; }
        if (ctx->pc != 0x19D0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0C8u; }
        if (ctx->pc != 0x19D0C8u) { return; }
    }
    ctx->pc = 0x19D0C8u;
label_19d0c8:
    // 0x19d0c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_19d0cc:
    if (ctx->pc == 0x19D0CCu) {
        ctx->pc = 0x19D0D0u;
        goto label_19d0d0;
    }
    ctx->pc = 0x19D0C8u;
    {
        const bool branch_taken_0x19d0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d0c8) {
            ctx->pc = 0x19D0F8u;
            goto label_19d0f8;
        }
    }
    ctx->pc = 0x19D0D0u;
label_19d0d0:
    // 0x19d0d0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x19d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_19d0d4:
    // 0x19d0d4: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x19d0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19d0d8:
    // 0x19d0d8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x19d0d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
label_19d0dc:
    // 0x19d0dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19d0e0:
    // 0x19d0e0: 0x0  nop
    ctx->pc = 0x19d0e0u;
    // NOP
label_19d0e4:
    // 0x19d0e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19d0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19d0e8:
    // 0x19d0e8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x19d0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_19d0ec:
    // 0x19d0ec: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x19d0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19d0f0:
    // 0x19d0f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19d0f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19d0f4:
    // 0x19d0f4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x19d0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_19d0f8:
    // 0x19d0f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x19d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d0fc:
    // 0x19d0fc: 0x284106a5  slti        $at, $v0, 0x6A5
    ctx->pc = 0x19d0fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1701) ? 1 : 0);
label_19d100:
    // 0x19d100: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_19d104:
    if (ctx->pc == 0x19D104u) {
        ctx->pc = 0x19D104u;
            // 0x19d104: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x19D108u;
        goto label_19d108;
    }
    ctx->pc = 0x19D100u;
    {
        const bool branch_taken_0x19d100 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D100u;
            // 0x19d104: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d100) {
            ctx->pc = 0x19D110u;
            goto label_19d110;
        }
    }
    ctx->pc = 0x19D108u;
label_19d108:
    // 0x19d108: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x19d108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_19d10c:
    // 0x19d10c: 0x0  nop
    ctx->pc = 0x19d10cu;
    // NOP
label_19d110:
    // 0x19d110: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19d110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19d114:
    // 0x19d114: 0x284103e8  slti        $at, $v0, 0x3E8
    ctx->pc = 0x19d114u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
label_19d118:
    // 0x19d118: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_19d11c:
    if (ctx->pc == 0x19D11Cu) {
        ctx->pc = 0x19D11Cu;
            // 0x19d11c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x19D120u;
        goto label_19d120;
    }
    ctx->pc = 0x19D118u;
    {
        const bool branch_taken_0x19d118 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D118u;
            // 0x19d11c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d118) {
            ctx->pc = 0x19D128u;
            goto label_19d128;
        }
    }
    ctx->pc = 0x19D120u;
label_19d120:
    // 0x19d120: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x19d120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_19d124:
    // 0x19d124: 0x0  nop
    ctx->pc = 0x19d124u;
    // NOP
label_19d128:
    // 0x19d128: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19d12c:
    // 0x19d12c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x19d12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_19d130:
    // 0x19d130: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x19d130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19d134:
    // 0x19d134: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x19d134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19d138:
    // 0x19d138: 0xc067bd0  jal         func_19EF40
label_19d13c:
    if (ctx->pc == 0x19D13Cu) {
        ctx->pc = 0x19D13Cu;
            // 0x19d13c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x19D140u;
        goto label_19d140;
    }
    ctx->pc = 0x19D138u;
    SET_GPR_U32(ctx, 31, 0x19D140u);
    ctx->pc = 0x19D13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D138u;
            // 0x19d13c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EF40u;
    if (runtime->hasFunction(0x19EF40u)) {
        auto targetFn = runtime->lookupFunction(0x19EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D140u; }
        if (ctx->pc != 0x19D140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x19ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D140u; }
        if (ctx->pc != 0x19D140u) { return; }
    }
    ctx->pc = 0x19D140u;
label_19d140:
    // 0x19d140: 0xc065d00  jal         func_197400
label_19d144:
    if (ctx->pc == 0x19D144u) {
        ctx->pc = 0x19D148u;
        goto label_19d148;
    }
    ctx->pc = 0x19D140u;
    SET_GPR_U32(ctx, 31, 0x19D148u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D148u; }
        if (ctx->pc != 0x19D148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D148u; }
        if (ctx->pc != 0x19D148u) { return; }
    }
    ctx->pc = 0x19D148u;
label_19d148:
    // 0x19d148: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
label_19d14c:
    if (ctx->pc == 0x19D14Cu) {
        ctx->pc = 0x19D150u;
        goto label_19d150;
    }
    ctx->pc = 0x19D148u;
    {
        const bool branch_taken_0x19d148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d148) {
            ctx->pc = 0x19D290u;
            goto label_19d290;
        }
    }
    ctx->pc = 0x19D150u;
label_19d150:
    // 0x19d150: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19d150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d154:
    // 0x19d154: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x19d154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_19d158:
    // 0x19d158: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d158u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19d15c:
    // 0x19d15c: 0x0  nop
    ctx->pc = 0x19d15cu;
    // NOP
label_19d160:
    // 0x19d160: 0x0  nop
    ctx->pc = 0x19d160u;
    // NOP
label_19d164:
    // 0x19d164: 0x1010  mfhi        $v0
    ctx->pc = 0x19d164u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19d168:
    // 0x19d168: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_19d16c:
    if (ctx->pc == 0x19D16Cu) {
        ctx->pc = 0x19D170u;
        goto label_19d170;
    }
    ctx->pc = 0x19D168u;
    {
        const bool branch_taken_0x19d168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d168) {
            ctx->pc = 0x19D188u;
            goto label_19d188;
        }
    }
    ctx->pc = 0x19D170u;
label_19d170:
    // 0x19d170: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d174:
    // 0x19d174: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19d174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d178:
    // 0x19d178: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d17c:
    // 0x19d17c: 0xc0655b0  jal         func_1956C0
label_19d180:
    if (ctx->pc == 0x19D180u) {
        ctx->pc = 0x19D180u;
            // 0x19d180: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x19D184u;
        goto label_19d184;
    }
    ctx->pc = 0x19D17Cu;
    SET_GPR_U32(ctx, 31, 0x19D184u);
    ctx->pc = 0x19D180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D17Cu;
            // 0x19d180: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D184u; }
        if (ctx->pc != 0x19D184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D184u; }
        if (ctx->pc != 0x19D184u) { return; }
    }
    ctx->pc = 0x19D184u;
label_19d184:
    // 0x19d184: 0x0  nop
    ctx->pc = 0x19d184u;
    // NOP
label_19d188:
    // 0x19d188: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19d188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d18c:
    // 0x19d18c: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x19d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_19d190:
    // 0x19d190: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d190u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19d194:
    // 0x19d194: 0x0  nop
    ctx->pc = 0x19d194u;
    // NOP
label_19d198:
    // 0x19d198: 0x0  nop
    ctx->pc = 0x19d198u;
    // NOP
label_19d19c:
    // 0x19d19c: 0x1010  mfhi        $v0
    ctx->pc = 0x19d19cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19d1a0:
    // 0x19d1a0: 0x144003b9  bnez        $v0, . + 4 + (0x3B9 << 2)
label_19d1a4:
    if (ctx->pc == 0x19D1A4u) {
        ctx->pc = 0x19D1A8u;
        goto label_19d1a8;
    }
    ctx->pc = 0x19D1A0u;
    {
        const bool branch_taken_0x19d1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d1a0) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19D1A8u;
label_19d1a8:
    // 0x19d1a8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d1ac:
    // 0x19d1ac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19d1b0:
    // 0x19d1b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d1b4:
    // 0x19d1b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d1b8:
    // 0x19d1b8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d1bc:
    // 0x19d1bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d1bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19d1c0:
    // 0x19d1c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d1c4:
    // 0x19d1c4: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19d1c8:
    // 0x19d1c8: 0xc0655dc  jal         func_195770
label_19d1cc:
    if (ctx->pc == 0x19D1CCu) {
        ctx->pc = 0x19D1CCu;
            // 0x19d1cc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D1D0u;
        goto label_19d1d0;
    }
    ctx->pc = 0x19D1C8u;
    SET_GPR_U32(ctx, 31, 0x19D1D0u);
    ctx->pc = 0x19D1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D1C8u;
            // 0x19d1cc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D1D0u; }
        if (ctx->pc != 0x19D1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D1D0u; }
        if (ctx->pc != 0x19D1D0u) { return; }
    }
    ctx->pc = 0x19D1D0u;
label_19d1d0:
    // 0x19d1d0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d1d4:
    // 0x19d1d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19d1d8:
    // 0x19d1d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d1dc:
    // 0x19d1dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19d1dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d1e0:
    // 0x19d1e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d1e4:
    // 0x19d1e4: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19d1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19d1e8:
    // 0x19d1e8: 0xc0655dc  jal         func_195770
label_19d1ec:
    if (ctx->pc == 0x19D1ECu) {
        ctx->pc = 0x19D1ECu;
            // 0x19d1ec: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D1F0u;
        goto label_19d1f0;
    }
    ctx->pc = 0x19D1E8u;
    SET_GPR_U32(ctx, 31, 0x19D1F0u);
    ctx->pc = 0x19D1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D1E8u;
            // 0x19d1ec: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D1F0u; }
        if (ctx->pc != 0x19D1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D1F0u; }
        if (ctx->pc != 0x19D1F0u) { return; }
    }
    ctx->pc = 0x19D1F0u;
label_19d1f0:
    // 0x19d1f0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d1f4:
    // 0x19d1f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19d1f8:
    // 0x19d1f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d1fc:
    // 0x19d1fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d200:
    // 0x19d200: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d204:
    // 0x19d204: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d204u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19d208:
    // 0x19d208: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d20c:
    // 0x19d20c: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19d20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19d210:
    // 0x19d210: 0xc0655dc  jal         func_195770
label_19d214:
    if (ctx->pc == 0x19D214u) {
        ctx->pc = 0x19D214u;
            // 0x19d214: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D218u;
        goto label_19d218;
    }
    ctx->pc = 0x19D210u;
    SET_GPR_U32(ctx, 31, 0x19D218u);
    ctx->pc = 0x19D214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D210u;
            // 0x19d214: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D218u; }
        if (ctx->pc != 0x19D218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D218u; }
        if (ctx->pc != 0x19D218u) { return; }
    }
    ctx->pc = 0x19D218u;
label_19d218:
    // 0x19d218: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d21c:
    // 0x19d21c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19d220:
    // 0x19d220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d224:
    // 0x19d224: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d228:
    // 0x19d228: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d22c:
    // 0x19d22c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d22cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19d230:
    // 0x19d230: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d234:
    // 0x19d234: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19d234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19d238:
    // 0x19d238: 0xc0655dc  jal         func_195770
label_19d23c:
    if (ctx->pc == 0x19D23Cu) {
        ctx->pc = 0x19D23Cu;
            // 0x19d23c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D240u;
        goto label_19d240;
    }
    ctx->pc = 0x19D238u;
    SET_GPR_U32(ctx, 31, 0x19D240u);
    ctx->pc = 0x19D23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D238u;
            // 0x19d23c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D240u; }
        if (ctx->pc != 0x19D240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D240u; }
        if (ctx->pc != 0x19D240u) { return; }
    }
    ctx->pc = 0x19D240u;
label_19d240:
    // 0x19d240: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d244:
    // 0x19d244: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19d248:
    // 0x19d248: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d24c:
    // 0x19d24c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19d24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d250:
    // 0x19d250: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d254:
    // 0x19d254: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19d254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19d258:
    // 0x19d258: 0xc0655dc  jal         func_195770
label_19d25c:
    if (ctx->pc == 0x19D25Cu) {
        ctx->pc = 0x19D25Cu;
            // 0x19d25c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D260u;
        goto label_19d260;
    }
    ctx->pc = 0x19D258u;
    SET_GPR_U32(ctx, 31, 0x19D260u);
    ctx->pc = 0x19D25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D258u;
            // 0x19d25c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D260u; }
        if (ctx->pc != 0x19D260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D260u; }
        if (ctx->pc != 0x19D260u) { return; }
    }
    ctx->pc = 0x19D260u;
label_19d260:
    // 0x19d260: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d264:
    // 0x19d264: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19d268:
    // 0x19d268: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d26c:
    // 0x19d26c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d270:
    // 0x19d270: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d274:
    // 0x19d274: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d274u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19d278:
    // 0x19d278: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d27c:
    // 0x19d27c: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19d27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19d280:
    // 0x19d280: 0xc0655dc  jal         func_195770
label_19d284:
    if (ctx->pc == 0x19D284u) {
        ctx->pc = 0x19D284u;
            // 0x19d284: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D288u;
        goto label_19d288;
    }
    ctx->pc = 0x19D280u;
    SET_GPR_U32(ctx, 31, 0x19D288u);
    ctx->pc = 0x19D284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D280u;
            // 0x19d284: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D288u; }
        if (ctx->pc != 0x19D288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D288u; }
        if (ctx->pc != 0x19D288u) { return; }
    }
    ctx->pc = 0x19D288u;
label_19d288:
    // 0x19d288: 0x1000037f  b           . + 4 + (0x37F << 2)
label_19d28c:
    if (ctx->pc == 0x19D28Cu) {
        ctx->pc = 0x19D290u;
        goto label_19d290;
    }
    ctx->pc = 0x19D288u;
    {
        const bool branch_taken_0x19d288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d288) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19D290u;
label_19d290:
    // 0x19d290: 0xc065d00  jal         func_197400
label_19d294:
    if (ctx->pc == 0x19D294u) {
        ctx->pc = 0x19D298u;
        goto label_19d298;
    }
    ctx->pc = 0x19D290u;
    SET_GPR_U32(ctx, 31, 0x19D298u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D298u; }
        if (ctx->pc != 0x19D298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D298u; }
        if (ctx->pc != 0x19D298u) { return; }
    }
    ctx->pc = 0x19D298u;
label_19d298:
    // 0x19d298: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d29c:
    // 0x19d29c: 0x14430094  bne         $v0, $v1, . + 4 + (0x94 << 2)
label_19d2a0:
    if (ctx->pc == 0x19D2A0u) {
        ctx->pc = 0x19D2A4u;
        goto label_19d2a4;
    }
    ctx->pc = 0x19D29Cu;
    {
        const bool branch_taken_0x19d29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d29c) {
            ctx->pc = 0x19D4F0u;
            goto label_19d4f0;
        }
    }
    ctx->pc = 0x19D2A4u;
label_19d2a4:
    // 0x19d2a4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d2a8:
    // 0x19d2a8: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x19d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_19d2ac:
    // 0x19d2ac: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d2acu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19d2b0:
    // 0x19d2b0: 0x0  nop
    ctx->pc = 0x19d2b0u;
    // NOP
label_19d2b4:
    // 0x19d2b4: 0x0  nop
    ctx->pc = 0x19d2b4u;
    // NOP
label_19d2b8:
    // 0x19d2b8: 0x1010  mfhi        $v0
    ctx->pc = 0x19d2b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19d2bc:
    // 0x19d2bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_19d2c0:
    if (ctx->pc == 0x19D2C0u) {
        ctx->pc = 0x19D2C4u;
        goto label_19d2c4;
    }
    ctx->pc = 0x19D2BCu;
    {
        const bool branch_taken_0x19d2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d2bc) {
            ctx->pc = 0x19D2D8u;
            goto label_19d2d8;
        }
    }
    ctx->pc = 0x19D2C4u;
label_19d2c4:
    // 0x19d2c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d2c8:
    // 0x19d2c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19d2c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d2cc:
    // 0x19d2cc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d2d0:
    // 0x19d2d0: 0xc0655b0  jal         func_1956C0
label_19d2d4:
    if (ctx->pc == 0x19D2D4u) {
        ctx->pc = 0x19D2D4u;
            // 0x19d2d4: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x19D2D8u;
        goto label_19d2d8;
    }
    ctx->pc = 0x19D2D0u;
    SET_GPR_U32(ctx, 31, 0x19D2D8u);
    ctx->pc = 0x19D2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D2D0u;
            // 0x19d2d4: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2D8u; }
        if (ctx->pc != 0x19D2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2D8u; }
        if (ctx->pc != 0x19D2D8u) { return; }
    }
    ctx->pc = 0x19D2D8u;
label_19d2d8:
    // 0x19d2d8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d2dc:
    // 0x19d2dc: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x19d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_19d2e0:
    // 0x19d2e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d2e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19d2e4:
    // 0x19d2e4: 0x0  nop
    ctx->pc = 0x19d2e4u;
    // NOP
label_19d2e8:
    // 0x19d2e8: 0x0  nop
    ctx->pc = 0x19d2e8u;
    // NOP
label_19d2ec:
    // 0x19d2ec: 0x1010  mfhi        $v0
    ctx->pc = 0x19d2ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19d2f0:
    // 0x19d2f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_19d2f4:
    if (ctx->pc == 0x19D2F4u) {
        ctx->pc = 0x19D2F8u;
        goto label_19d2f8;
    }
    ctx->pc = 0x19D2F0u;
    {
        const bool branch_taken_0x19d2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d2f0) {
            ctx->pc = 0x19D320u;
            goto label_19d320;
        }
    }
    ctx->pc = 0x19D2F8u;
label_19d2f8:
    // 0x19d2f8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d2fc:
    // 0x19d2fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d300:
    // 0x19d300: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x19d300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_19d304:
    // 0x19d304: 0xc06560c  jal         func_195830
label_19d308:
    if (ctx->pc == 0x19D308u) {
        ctx->pc = 0x19D308u;
            // 0x19d308: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19D30Cu;
        goto label_19d30c;
    }
    ctx->pc = 0x19D304u;
    SET_GPR_U32(ctx, 31, 0x19D30Cu);
    ctx->pc = 0x19D308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D304u;
            // 0x19d308: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D30Cu; }
        if (ctx->pc != 0x19D30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D30Cu; }
        if (ctx->pc != 0x19D30Cu) { return; }
    }
    ctx->pc = 0x19D30Cu;
label_19d30c:
    // 0x19d30c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d310:
    // 0x19d310: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d314:
    // 0x19d314: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x19d314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_19d318:
    // 0x19d318: 0xc06560c  jal         func_195830
label_19d31c:
    if (ctx->pc == 0x19D31Cu) {
        ctx->pc = 0x19D31Cu;
            // 0x19d31c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19D320u;
        goto label_19d320;
    }
    ctx->pc = 0x19D318u;
    SET_GPR_U32(ctx, 31, 0x19D320u);
    ctx->pc = 0x19D31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D318u;
            // 0x19d31c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D320u; }
        if (ctx->pc != 0x19D320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D320u; }
        if (ctx->pc != 0x19D320u) { return; }
    }
    ctx->pc = 0x19D320u;
label_19d320:
    // 0x19d320: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19d320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d324:
    // 0x19d324: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x19d324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_19d328:
    // 0x19d328: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d328u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19d32c:
    // 0x19d32c: 0x0  nop
    ctx->pc = 0x19d32cu;
    // NOP
label_19d330:
    // 0x19d330: 0x0  nop
    ctx->pc = 0x19d330u;
    // NOP
label_19d334:
    // 0x19d334: 0x1010  mfhi        $v0
    ctx->pc = 0x19d334u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19d338:
    // 0x19d338: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_19d33c:
    if (ctx->pc == 0x19D33Cu) {
        ctx->pc = 0x19D340u;
        goto label_19d340;
    }
    ctx->pc = 0x19D338u;
    {
        const bool branch_taken_0x19d338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d338) {
            ctx->pc = 0x19D420u;
            goto label_19d420;
        }
    }
    ctx->pc = 0x19D340u;
label_19d340:
    // 0x19d340: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d344:
    // 0x19d344: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19d344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19d348:
    // 0x19d348: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d34c:
    // 0x19d34c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d350:
    // 0x19d350: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d354:
    // 0x19d354: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d354u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19d358:
    // 0x19d358: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d35c:
    // 0x19d35c: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19d35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19d360:
    // 0x19d360: 0xc0655dc  jal         func_195770
label_19d364:
    if (ctx->pc == 0x19D364u) {
        ctx->pc = 0x19D364u;
            // 0x19d364: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D368u;
        goto label_19d368;
    }
    ctx->pc = 0x19D360u;
    SET_GPR_U32(ctx, 31, 0x19D368u);
    ctx->pc = 0x19D364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D360u;
            // 0x19d364: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D368u; }
        if (ctx->pc != 0x19D368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D368u; }
        if (ctx->pc != 0x19D368u) { return; }
    }
    ctx->pc = 0x19D368u;
label_19d368:
    // 0x19d368: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d36c:
    // 0x19d36c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19d370:
    // 0x19d370: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d374:
    // 0x19d374: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19d374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d378:
    // 0x19d378: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d37c:
    // 0x19d37c: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19d380:
    // 0x19d380: 0xc0655dc  jal         func_195770
label_19d384:
    if (ctx->pc == 0x19D384u) {
        ctx->pc = 0x19D384u;
            // 0x19d384: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D388u;
        goto label_19d388;
    }
    ctx->pc = 0x19D380u;
    SET_GPR_U32(ctx, 31, 0x19D388u);
    ctx->pc = 0x19D384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D380u;
            // 0x19d384: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D388u; }
        if (ctx->pc != 0x19D388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D388u; }
        if (ctx->pc != 0x19D388u) { return; }
    }
    ctx->pc = 0x19D388u;
label_19d388:
    // 0x19d388: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d38c:
    // 0x19d38c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19d390:
    // 0x19d390: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d394:
    // 0x19d394: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d398:
    // 0x19d398: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d39c:
    // 0x19d39c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d39cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19d3a0:
    // 0x19d3a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d3a4:
    // 0x19d3a4: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19d3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19d3a8:
    // 0x19d3a8: 0xc0655dc  jal         func_195770
label_19d3ac:
    if (ctx->pc == 0x19D3ACu) {
        ctx->pc = 0x19D3ACu;
            // 0x19d3ac: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D3B0u;
        goto label_19d3b0;
    }
    ctx->pc = 0x19D3A8u;
    SET_GPR_U32(ctx, 31, 0x19D3B0u);
    ctx->pc = 0x19D3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3A8u;
            // 0x19d3ac: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3B0u; }
        if (ctx->pc != 0x19D3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3B0u; }
        if (ctx->pc != 0x19D3B0u) { return; }
    }
    ctx->pc = 0x19D3B0u;
label_19d3b0:
    // 0x19d3b0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d3b4:
    // 0x19d3b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19d3b8:
    // 0x19d3b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d3bc:
    // 0x19d3bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d3c0:
    // 0x19d3c0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d3c4:
    // 0x19d3c4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d3c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19d3c8:
    // 0x19d3c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d3cc:
    // 0x19d3cc: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19d3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19d3d0:
    // 0x19d3d0: 0xc0655dc  jal         func_195770
label_19d3d4:
    if (ctx->pc == 0x19D3D4u) {
        ctx->pc = 0x19D3D4u;
            // 0x19d3d4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D3D8u;
        goto label_19d3d8;
    }
    ctx->pc = 0x19D3D0u;
    SET_GPR_U32(ctx, 31, 0x19D3D8u);
    ctx->pc = 0x19D3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3D0u;
            // 0x19d3d4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3D8u; }
        if (ctx->pc != 0x19D3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3D8u; }
        if (ctx->pc != 0x19D3D8u) { return; }
    }
    ctx->pc = 0x19D3D8u;
label_19d3d8:
    // 0x19d3d8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d3dc:
    // 0x19d3dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19d3e0:
    // 0x19d3e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d3e4:
    // 0x19d3e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19d3e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d3e8:
    // 0x19d3e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d3ec:
    // 0x19d3ec: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19d3f0:
    // 0x19d3f0: 0xc0655dc  jal         func_195770
label_19d3f4:
    if (ctx->pc == 0x19D3F4u) {
        ctx->pc = 0x19D3F4u;
            // 0x19d3f4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D3F8u;
        goto label_19d3f8;
    }
    ctx->pc = 0x19D3F0u;
    SET_GPR_U32(ctx, 31, 0x19D3F8u);
    ctx->pc = 0x19D3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3F0u;
            // 0x19d3f4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3F8u; }
        if (ctx->pc != 0x19D3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3F8u; }
        if (ctx->pc != 0x19D3F8u) { return; }
    }
    ctx->pc = 0x19D3F8u;
label_19d3f8:
    // 0x19d3f8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d3fc:
    // 0x19d3fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19d400:
    // 0x19d400: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d404:
    // 0x19d404: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d408:
    // 0x19d408: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d40c:
    // 0x19d40c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d40cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19d410:
    // 0x19d410: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d414:
    // 0x19d414: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19d414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19d418:
    // 0x19d418: 0xc0655dc  jal         func_195770
label_19d41c:
    if (ctx->pc == 0x19D41Cu) {
        ctx->pc = 0x19D41Cu;
            // 0x19d41c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D420u;
        goto label_19d420;
    }
    ctx->pc = 0x19D418u;
    SET_GPR_U32(ctx, 31, 0x19D420u);
    ctx->pc = 0x19D41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D418u;
            // 0x19d41c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D420u; }
        if (ctx->pc != 0x19D420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D420u; }
        if (ctx->pc != 0x19D420u) { return; }
    }
    ctx->pc = 0x19D420u;
label_19d420:
    // 0x19d420: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19d420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d424:
    // 0x19d424: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x19d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_19d428:
    // 0x19d428: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d428u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19d42c:
    // 0x19d42c: 0x0  nop
    ctx->pc = 0x19d42cu;
    // NOP
label_19d430:
    // 0x19d430: 0x0  nop
    ctx->pc = 0x19d430u;
    // NOP
label_19d434:
    // 0x19d434: 0x1010  mfhi        $v0
    ctx->pc = 0x19d434u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19d438:
    // 0x19d438: 0x14400313  bnez        $v0, . + 4 + (0x313 << 2)
label_19d43c:
    if (ctx->pc == 0x19D43Cu) {
        ctx->pc = 0x19D43Cu;
            // 0x19d43c: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->pc = 0x19D440u;
        goto label_19d440;
    }
    ctx->pc = 0x19D438u;
    {
        const bool branch_taken_0x19d438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D438u;
            // 0x19d43c: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d438) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19D440u;
label_19d440:
    // 0x19d440: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d444:
    // 0x19d444: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19d444u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19d448:
    // 0x19d448: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d44c:
    // 0x19d44c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d450:
    // 0x19d450: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19d450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19d454:
    // 0x19d454: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19d454u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19d458:
    // 0x19d458: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d45c:
    // 0x19d45c: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x19d45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_19d460:
    // 0x19d460: 0xc0655dc  jal         func_195770
label_19d464:
    if (ctx->pc == 0x19D464u) {
        ctx->pc = 0x19D464u;
            // 0x19d464: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19D468u;
        goto label_19d468;
    }
    ctx->pc = 0x19D460u;
    SET_GPR_U32(ctx, 31, 0x19D468u);
    ctx->pc = 0x19D464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D460u;
            // 0x19d464: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D468u; }
        if (ctx->pc != 0x19D468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D468u; }
        if (ctx->pc != 0x19D468u) { return; }
    }
    ctx->pc = 0x19D468u;
label_19d468:
    // 0x19d468: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d46c:
    // 0x19d46c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19d470:
    // 0x19d470: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d474:
    // 0x19d474: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19d474u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19d478:
    // 0x19d478: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d47c:
    // 0x19d47c: 0x0  nop
    ctx->pc = 0x19d47cu;
    // NOP
label_19d480:
    // 0x19d480: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19d480u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19d484:
    // 0x19d484: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x19d484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_19d488:
    // 0x19d488: 0xc0655dc  jal         func_195770
label_19d48c:
    if (ctx->pc == 0x19D48Cu) {
        ctx->pc = 0x19D48Cu;
            // 0x19d48c: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19D490u;
        goto label_19d490;
    }
    ctx->pc = 0x19D488u;
    SET_GPR_U32(ctx, 31, 0x19D490u);
    ctx->pc = 0x19D48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D488u;
            // 0x19d48c: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D490u; }
        if (ctx->pc != 0x19D490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D490u; }
        if (ctx->pc != 0x19D490u) { return; }
    }
    ctx->pc = 0x19D490u;
label_19d490:
    // 0x19d490: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x19d490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_19d494:
    // 0x19d494: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d498:
    // 0x19d498: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19d498u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19d49c:
    // 0x19d49c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d4a0:
    // 0x19d4a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d4a4:
    // 0x19d4a4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19d4a8:
    // 0x19d4a8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19d4a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19d4ac:
    // 0x19d4ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d4b0:
    // 0x19d4b0: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x19d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_19d4b4:
    // 0x19d4b4: 0xc0655dc  jal         func_195770
label_19d4b8:
    if (ctx->pc == 0x19D4B8u) {
        ctx->pc = 0x19D4B8u;
            // 0x19d4b8: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19D4BCu;
        goto label_19d4bc;
    }
    ctx->pc = 0x19D4B4u;
    SET_GPR_U32(ctx, 31, 0x19D4BCu);
    ctx->pc = 0x19D4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D4B4u;
            // 0x19d4b8: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4BCu; }
        if (ctx->pc != 0x19D4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4BCu; }
        if (ctx->pc != 0x19D4BCu) { return; }
    }
    ctx->pc = 0x19D4BCu;
label_19d4bc:
    // 0x19d4bc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d4c0:
    // 0x19d4c0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19d4c4:
    // 0x19d4c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d4c8:
    // 0x19d4c8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19d4c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19d4cc:
    // 0x19d4cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d4d0:
    // 0x19d4d0: 0x0  nop
    ctx->pc = 0x19d4d0u;
    // NOP
label_19d4d4:
    // 0x19d4d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19d4d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19d4d8:
    // 0x19d4d8: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x19d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_19d4dc:
    // 0x19d4dc: 0xc0655dc  jal         func_195770
label_19d4e0:
    if (ctx->pc == 0x19D4E0u) {
        ctx->pc = 0x19D4E0u;
            // 0x19d4e0: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19D4E4u;
        goto label_19d4e4;
    }
    ctx->pc = 0x19D4DCu;
    SET_GPR_U32(ctx, 31, 0x19D4E4u);
    ctx->pc = 0x19D4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D4DCu;
            // 0x19d4e0: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4E4u; }
        if (ctx->pc != 0x19D4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4E4u; }
        if (ctx->pc != 0x19D4E4u) { return; }
    }
    ctx->pc = 0x19D4E4u;
label_19d4e4:
    // 0x19d4e4: 0x100002e8  b           . + 4 + (0x2E8 << 2)
label_19d4e8:
    if (ctx->pc == 0x19D4E8u) {
        ctx->pc = 0x19D4ECu;
        goto label_19d4ec;
    }
    ctx->pc = 0x19D4E4u;
    {
        const bool branch_taken_0x19d4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d4e4) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19D4ECu;
label_19d4ec:
    // 0x19d4ec: 0x0  nop
    ctx->pc = 0x19d4ecu;
    // NOP
label_19d4f0:
    // 0x19d4f0: 0xc065d00  jal         func_197400
label_19d4f4:
    if (ctx->pc == 0x19D4F4u) {
        ctx->pc = 0x19D4F8u;
        goto label_19d4f8;
    }
    ctx->pc = 0x19D4F0u;
    SET_GPR_U32(ctx, 31, 0x19D4F8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4F8u; }
        if (ctx->pc != 0x19D4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4F8u; }
        if (ctx->pc != 0x19D4F8u) { return; }
    }
    ctx->pc = 0x19D4F8u;
label_19d4f8:
    // 0x19d4f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d4fc:
    // 0x19d4fc: 0x144302e2  bne         $v0, $v1, . + 4 + (0x2E2 << 2)
label_19d500:
    if (ctx->pc == 0x19D500u) {
        ctx->pc = 0x19D504u;
        goto label_19d504;
    }
    ctx->pc = 0x19D4FCu;
    {
        const bool branch_taken_0x19d4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d4fc) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19D504u;
label_19d504:
    // 0x19d504: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19d504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d508:
    // 0x19d508: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x19d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_19d50c:
    // 0x19d50c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d50cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19d510:
    // 0x19d510: 0x0  nop
    ctx->pc = 0x19d510u;
    // NOP
label_19d514:
    // 0x19d514: 0x0  nop
    ctx->pc = 0x19d514u;
    // NOP
label_19d518:
    // 0x19d518: 0x1010  mfhi        $v0
    ctx->pc = 0x19d518u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19d51c:
    // 0x19d51c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_19d520:
    if (ctx->pc == 0x19D520u) {
        ctx->pc = 0x19D524u;
        goto label_19d524;
    }
    ctx->pc = 0x19D51Cu;
    {
        const bool branch_taken_0x19d51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d51c) {
            ctx->pc = 0x19D538u;
            goto label_19d538;
        }
    }
    ctx->pc = 0x19D524u;
label_19d524:
    // 0x19d524: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d528:
    // 0x19d528: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19d528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d52c:
    // 0x19d52c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d530:
    // 0x19d530: 0xc0655b0  jal         func_1956C0
label_19d534:
    if (ctx->pc == 0x19D534u) {
        ctx->pc = 0x19D534u;
            // 0x19d534: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x19D538u;
        goto label_19d538;
    }
    ctx->pc = 0x19D530u;
    SET_GPR_U32(ctx, 31, 0x19D538u);
    ctx->pc = 0x19D534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D530u;
            // 0x19d534: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D538u; }
        if (ctx->pc != 0x19D538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D538u; }
        if (ctx->pc != 0x19D538u) { return; }
    }
    ctx->pc = 0x19D538u;
label_19d538:
    // 0x19d538: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19d538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d53c:
    // 0x19d53c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x19d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_19d540:
    // 0x19d540: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d540u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19d544:
    // 0x19d544: 0x0  nop
    ctx->pc = 0x19d544u;
    // NOP
label_19d548:
    // 0x19d548: 0x0  nop
    ctx->pc = 0x19d548u;
    // NOP
label_19d54c:
    // 0x19d54c: 0x1010  mfhi        $v0
    ctx->pc = 0x19d54cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19d550:
    // 0x19d550: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_19d554:
    if (ctx->pc == 0x19D554u) {
        ctx->pc = 0x19D558u;
        goto label_19d558;
    }
    ctx->pc = 0x19D550u;
    {
        const bool branch_taken_0x19d550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d550) {
            ctx->pc = 0x19D5A8u;
            goto label_19d5a8;
        }
    }
    ctx->pc = 0x19D558u;
label_19d558:
    // 0x19d558: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d55c:
    // 0x19d55c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d560:
    // 0x19d560: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x19d560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_19d564:
    // 0x19d564: 0xc06560c  jal         func_195830
label_19d568:
    if (ctx->pc == 0x19D568u) {
        ctx->pc = 0x19D568u;
            // 0x19d568: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19D56Cu;
        goto label_19d56c;
    }
    ctx->pc = 0x19D564u;
    SET_GPR_U32(ctx, 31, 0x19D56Cu);
    ctx->pc = 0x19D568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D564u;
            // 0x19d568: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D56Cu; }
        if (ctx->pc != 0x19D56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D56Cu; }
        if (ctx->pc != 0x19D56Cu) { return; }
    }
    ctx->pc = 0x19D56Cu;
label_19d56c:
    // 0x19d56c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d570:
    // 0x19d570: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d574:
    // 0x19d574: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x19d574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_19d578:
    // 0x19d578: 0xc06560c  jal         func_195830
label_19d57c:
    if (ctx->pc == 0x19D57Cu) {
        ctx->pc = 0x19D57Cu;
            // 0x19d57c: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x19D580u;
        goto label_19d580;
    }
    ctx->pc = 0x19D578u;
    SET_GPR_U32(ctx, 31, 0x19D580u);
    ctx->pc = 0x19D57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D578u;
            // 0x19d57c: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D580u; }
        if (ctx->pc != 0x19D580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D580u; }
        if (ctx->pc != 0x19D580u) { return; }
    }
    ctx->pc = 0x19D580u;
label_19d580:
    // 0x19d580: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d584:
    // 0x19d584: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d588:
    // 0x19d588: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x19d588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_19d58c:
    // 0x19d58c: 0xc06560c  jal         func_195830
label_19d590:
    if (ctx->pc == 0x19D590u) {
        ctx->pc = 0x19D590u;
            // 0x19d590: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19D594u;
        goto label_19d594;
    }
    ctx->pc = 0x19D58Cu;
    SET_GPR_U32(ctx, 31, 0x19D594u);
    ctx->pc = 0x19D590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D58Cu;
            // 0x19d590: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D594u; }
        if (ctx->pc != 0x19D594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D594u; }
        if (ctx->pc != 0x19D594u) { return; }
    }
    ctx->pc = 0x19D594u;
label_19d594:
    // 0x19d594: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d598:
    // 0x19d598: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d59c:
    // 0x19d59c: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x19d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_19d5a0:
    // 0x19d5a0: 0xc06560c  jal         func_195830
label_19d5a4:
    if (ctx->pc == 0x19D5A4u) {
        ctx->pc = 0x19D5A4u;
            // 0x19d5a4: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x19D5A8u;
        goto label_19d5a8;
    }
    ctx->pc = 0x19D5A0u;
    SET_GPR_U32(ctx, 31, 0x19D5A8u);
    ctx->pc = 0x19D5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5A0u;
            // 0x19d5a4: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5A8u; }
        if (ctx->pc != 0x19D5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5A8u; }
        if (ctx->pc != 0x19D5A8u) { return; }
    }
    ctx->pc = 0x19D5A8u;
label_19d5a8:
    // 0x19d5a8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d5ac:
    // 0x19d5ac: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x19d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_19d5b0:
    // 0x19d5b0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d5b0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19d5b4:
    // 0x19d5b4: 0x0  nop
    ctx->pc = 0x19d5b4u;
    // NOP
label_19d5b8:
    // 0x19d5b8: 0x0  nop
    ctx->pc = 0x19d5b8u;
    // NOP
label_19d5bc:
    // 0x19d5bc: 0x1010  mfhi        $v0
    ctx->pc = 0x19d5bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19d5c0:
    // 0x19d5c0: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_19d5c4:
    if (ctx->pc == 0x19D5C4u) {
        ctx->pc = 0x19D5C8u;
        goto label_19d5c8;
    }
    ctx->pc = 0x19D5C0u;
    {
        const bool branch_taken_0x19d5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d5c0) {
            ctx->pc = 0x19D6A8u;
            goto label_19d6a8;
        }
    }
    ctx->pc = 0x19D5C8u;
label_19d5c8:
    // 0x19d5c8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d5cc:
    // 0x19d5cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19d5d0:
    // 0x19d5d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d5d4:
    // 0x19d5d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d5d8:
    // 0x19d5d8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d5dc:
    // 0x19d5dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d5dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19d5e0:
    // 0x19d5e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d5e4:
    // 0x19d5e4: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19d5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19d5e8:
    // 0x19d5e8: 0xc0655dc  jal         func_195770
label_19d5ec:
    if (ctx->pc == 0x19D5ECu) {
        ctx->pc = 0x19D5ECu;
            // 0x19d5ec: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D5F0u;
        goto label_19d5f0;
    }
    ctx->pc = 0x19D5E8u;
    SET_GPR_U32(ctx, 31, 0x19D5F0u);
    ctx->pc = 0x19D5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5E8u;
            // 0x19d5ec: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5F0u; }
        if (ctx->pc != 0x19D5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5F0u; }
        if (ctx->pc != 0x19D5F0u) { return; }
    }
    ctx->pc = 0x19D5F0u;
label_19d5f0:
    // 0x19d5f0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d5f4:
    // 0x19d5f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19d5f8:
    // 0x19d5f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d5fc:
    // 0x19d5fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19d5fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d600:
    // 0x19d600: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d604:
    // 0x19d604: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19d604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19d608:
    // 0x19d608: 0xc0655dc  jal         func_195770
label_19d60c:
    if (ctx->pc == 0x19D60Cu) {
        ctx->pc = 0x19D60Cu;
            // 0x19d60c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D610u;
        goto label_19d610;
    }
    ctx->pc = 0x19D608u;
    SET_GPR_U32(ctx, 31, 0x19D610u);
    ctx->pc = 0x19D60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D608u;
            // 0x19d60c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D610u; }
        if (ctx->pc != 0x19D610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D610u; }
        if (ctx->pc != 0x19D610u) { return; }
    }
    ctx->pc = 0x19D610u;
label_19d610:
    // 0x19d610: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d614:
    // 0x19d614: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19d618:
    // 0x19d618: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d61c:
    // 0x19d61c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d620:
    // 0x19d620: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d624:
    // 0x19d624: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d624u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19d628:
    // 0x19d628: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d62c:
    // 0x19d62c: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19d630:
    // 0x19d630: 0xc0655dc  jal         func_195770
label_19d634:
    if (ctx->pc == 0x19D634u) {
        ctx->pc = 0x19D634u;
            // 0x19d634: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D638u;
        goto label_19d638;
    }
    ctx->pc = 0x19D630u;
    SET_GPR_U32(ctx, 31, 0x19D638u);
    ctx->pc = 0x19D634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D630u;
            // 0x19d634: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D638u; }
        if (ctx->pc != 0x19D638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D638u; }
        if (ctx->pc != 0x19D638u) { return; }
    }
    ctx->pc = 0x19D638u;
label_19d638:
    // 0x19d638: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d63c:
    // 0x19d63c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19d640:
    // 0x19d640: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d644:
    // 0x19d644: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d648:
    // 0x19d648: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d64c:
    // 0x19d64c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d64cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19d650:
    // 0x19d650: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d654:
    // 0x19d654: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19d654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19d658:
    // 0x19d658: 0xc0655dc  jal         func_195770
label_19d65c:
    if (ctx->pc == 0x19D65Cu) {
        ctx->pc = 0x19D65Cu;
            // 0x19d65c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D660u;
        goto label_19d660;
    }
    ctx->pc = 0x19D658u;
    SET_GPR_U32(ctx, 31, 0x19D660u);
    ctx->pc = 0x19D65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D658u;
            // 0x19d65c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D660u; }
        if (ctx->pc != 0x19D660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D660u; }
        if (ctx->pc != 0x19D660u) { return; }
    }
    ctx->pc = 0x19D660u;
label_19d660:
    // 0x19d660: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d664:
    // 0x19d664: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19d668:
    // 0x19d668: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d66c:
    // 0x19d66c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19d66cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d670:
    // 0x19d670: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d674:
    // 0x19d674: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19d674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19d678:
    // 0x19d678: 0xc0655dc  jal         func_195770
label_19d67c:
    if (ctx->pc == 0x19D67Cu) {
        ctx->pc = 0x19D67Cu;
            // 0x19d67c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D680u;
        goto label_19d680;
    }
    ctx->pc = 0x19D678u;
    SET_GPR_U32(ctx, 31, 0x19D680u);
    ctx->pc = 0x19D67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D678u;
            // 0x19d67c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D680u; }
        if (ctx->pc != 0x19D680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D680u; }
        if (ctx->pc != 0x19D680u) { return; }
    }
    ctx->pc = 0x19D680u;
label_19d680:
    // 0x19d680: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d684:
    // 0x19d684: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19d688:
    // 0x19d688: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d68c:
    // 0x19d68c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d68cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d690:
    // 0x19d690: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d694:
    // 0x19d694: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d694u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19d698:
    // 0x19d698: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d69c:
    // 0x19d69c: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19d6a0:
    // 0x19d6a0: 0xc0655dc  jal         func_195770
label_19d6a4:
    if (ctx->pc == 0x19D6A4u) {
        ctx->pc = 0x19D6A4u;
            // 0x19d6a4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19D6A8u;
        goto label_19d6a8;
    }
    ctx->pc = 0x19D6A0u;
    SET_GPR_U32(ctx, 31, 0x19D6A8u);
    ctx->pc = 0x19D6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6A0u;
            // 0x19d6a4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6A8u; }
        if (ctx->pc != 0x19D6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6A8u; }
        if (ctx->pc != 0x19D6A8u) { return; }
    }
    ctx->pc = 0x19D6A8u;
label_19d6a8:
    // 0x19d6a8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d6ac:
    // 0x19d6ac: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x19d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_19d6b0:
    // 0x19d6b0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d6b0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19d6b4:
    // 0x19d6b4: 0x0  nop
    ctx->pc = 0x19d6b4u;
    // NOP
label_19d6b8:
    // 0x19d6b8: 0x0  nop
    ctx->pc = 0x19d6b8u;
    // NOP
label_19d6bc:
    // 0x19d6bc: 0x1010  mfhi        $v0
    ctx->pc = 0x19d6bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19d6c0:
    // 0x19d6c0: 0x14400271  bnez        $v0, . + 4 + (0x271 << 2)
label_19d6c4:
    if (ctx->pc == 0x19D6C4u) {
        ctx->pc = 0x19D6C4u;
            // 0x19d6c4: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->pc = 0x19D6C8u;
        goto label_19d6c8;
    }
    ctx->pc = 0x19D6C0u;
    {
        const bool branch_taken_0x19d6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6C0u;
            // 0x19d6c4: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d6c0) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19D6C8u;
label_19d6c8:
    // 0x19d6c8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d6cc:
    // 0x19d6cc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19d6ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19d6d0:
    // 0x19d6d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d6d4:
    // 0x19d6d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d6d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d6d8:
    // 0x19d6d8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19d6dc:
    // 0x19d6dc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19d6dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19d6e0:
    // 0x19d6e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d6e4:
    // 0x19d6e4: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x19d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_19d6e8:
    // 0x19d6e8: 0xc0655dc  jal         func_195770
label_19d6ec:
    if (ctx->pc == 0x19D6ECu) {
        ctx->pc = 0x19D6ECu;
            // 0x19d6ec: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19D6F0u;
        goto label_19d6f0;
    }
    ctx->pc = 0x19D6E8u;
    SET_GPR_U32(ctx, 31, 0x19D6F0u);
    ctx->pc = 0x19D6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6E8u;
            // 0x19d6ec: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6F0u; }
        if (ctx->pc != 0x19D6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6F0u; }
        if (ctx->pc != 0x19D6F0u) { return; }
    }
    ctx->pc = 0x19D6F0u;
label_19d6f0:
    // 0x19d6f0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d6f4:
    // 0x19d6f4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19d6f8:
    // 0x19d6f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d6fc:
    // 0x19d6fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19d6fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19d700:
    // 0x19d700: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d704:
    // 0x19d704: 0x0  nop
    ctx->pc = 0x19d704u;
    // NOP
label_19d708:
    // 0x19d708: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19d708u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19d70c:
    // 0x19d70c: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x19d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_19d710:
    // 0x19d710: 0xc0655dc  jal         func_195770
label_19d714:
    if (ctx->pc == 0x19D714u) {
        ctx->pc = 0x19D714u;
            // 0x19d714: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19D718u;
        goto label_19d718;
    }
    ctx->pc = 0x19D710u;
    SET_GPR_U32(ctx, 31, 0x19D718u);
    ctx->pc = 0x19D714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D710u;
            // 0x19d714: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D718u; }
        if (ctx->pc != 0x19D718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D718u; }
        if (ctx->pc != 0x19D718u) { return; }
    }
    ctx->pc = 0x19D718u;
label_19d718:
    // 0x19d718: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x19d718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_19d71c:
    // 0x19d71c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d720:
    // 0x19d720: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19d720u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19d724:
    // 0x19d724: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d728:
    // 0x19d728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d72c:
    // 0x19d72c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19d730:
    // 0x19d730: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19d730u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19d734:
    // 0x19d734: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d738:
    // 0x19d738: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x19d738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_19d73c:
    // 0x19d73c: 0xc0655dc  jal         func_195770
label_19d740:
    if (ctx->pc == 0x19D740u) {
        ctx->pc = 0x19D740u;
            // 0x19d740: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19D744u;
        goto label_19d744;
    }
    ctx->pc = 0x19D73Cu;
    SET_GPR_U32(ctx, 31, 0x19D744u);
    ctx->pc = 0x19D740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D73Cu;
            // 0x19d740: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D744u; }
        if (ctx->pc != 0x19D744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D744u; }
        if (ctx->pc != 0x19D744u) { return; }
    }
    ctx->pc = 0x19D744u;
label_19d744:
    // 0x19d744: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d748:
    // 0x19d748: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19d748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19d74c:
    // 0x19d74c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d750:
    // 0x19d750: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19d750u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19d754:
    // 0x19d754: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d758:
    // 0x19d758: 0x0  nop
    ctx->pc = 0x19d758u;
    // NOP
label_19d75c:
    // 0x19d75c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19d75cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19d760:
    // 0x19d760: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x19d760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_19d764:
    // 0x19d764: 0xc0655dc  jal         func_195770
label_19d768:
    if (ctx->pc == 0x19D768u) {
        ctx->pc = 0x19D768u;
            // 0x19d768: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19D76Cu;
        goto label_19d76c;
    }
    ctx->pc = 0x19D764u;
    SET_GPR_U32(ctx, 31, 0x19D76Cu);
    ctx->pc = 0x19D768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D764u;
            // 0x19d768: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D76Cu; }
        if (ctx->pc != 0x19D76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D76Cu; }
        if (ctx->pc != 0x19D76Cu) { return; }
    }
    ctx->pc = 0x19D76Cu;
label_19d76c:
    // 0x19d76c: 0x10000246  b           . + 4 + (0x246 << 2)
label_19d770:
    if (ctx->pc == 0x19D770u) {
        ctx->pc = 0x19D774u;
        goto label_19d774;
    }
    ctx->pc = 0x19D76Cu;
    {
        const bool branch_taken_0x19d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d76c) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19D774u;
label_19d774:
    // 0x19d774: 0x0  nop
    ctx->pc = 0x19d774u;
    // NOP
label_19d778:
    // 0x19d778: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19d778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d77c:
    // 0x19d77c: 0x14820018  bne         $a0, $v0, . + 4 + (0x18 << 2)
label_19d780:
    if (ctx->pc == 0x19D780u) {
        ctx->pc = 0x19D784u;
        goto label_19d784;
    }
    ctx->pc = 0x19D77Cu;
    {
        const bool branch_taken_0x19d77c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d77c) {
            ctx->pc = 0x19D7E0u;
            goto label_19d7e0;
        }
    }
    ctx->pc = 0x19D784u;
label_19d784:
    // 0x19d784: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x19d784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19d788:
    // 0x19d788: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x19d788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_19d78c:
    // 0x19d78c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x19d78cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_19d790:
    // 0x19d790: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19d794:
    // 0x19d794: 0x0  nop
    ctx->pc = 0x19d794u;
    // NOP
label_19d798:
    // 0x19d798: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19d798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19d79c:
    // 0x19d79c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x19d79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_19d7a0:
    // 0x19d7a0: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x19d7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19d7a4:
    // 0x19d7a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19d7a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19d7a8:
    // 0x19d7a8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x19d7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_19d7ac:
    // 0x19d7ac: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x19d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d7b0:
    // 0x19d7b0: 0x284106a5  slti        $at, $v0, 0x6A5
    ctx->pc = 0x19d7b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1701) ? 1 : 0);
label_19d7b4:
    // 0x19d7b4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_19d7b8:
    if (ctx->pc == 0x19D7B8u) {
        ctx->pc = 0x19D7B8u;
            // 0x19d7b8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x19D7BCu;
        goto label_19d7bc;
    }
    ctx->pc = 0x19D7B4u;
    {
        const bool branch_taken_0x19d7b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7B4u;
            // 0x19d7b8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7b4) {
            ctx->pc = 0x19D7C0u;
            goto label_19d7c0;
        }
    }
    ctx->pc = 0x19D7BCu;
label_19d7bc:
    // 0x19d7bc: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x19d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_19d7c0:
    // 0x19d7c0: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x19d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19d7c4:
    // 0x19d7c4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x19d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19d7c8:
    // 0x19d7c8: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x19d7c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
label_19d7cc:
    // 0x19d7cc: 0x1420022e  bnez        $at, . + 4 + (0x22E << 2)
label_19d7d0:
    if (ctx->pc == 0x19D7D0u) {
        ctx->pc = 0x19D7D0u;
            // 0x19d7d0: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->pc = 0x19D7D4u;
        goto label_19d7d4;
    }
    ctx->pc = 0x19D7CCu;
    {
        const bool branch_taken_0x19d7cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7CCu;
            // 0x19d7d0: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7cc) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19D7D4u;
label_19d7d4:
    // 0x19d7d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19d7d8:
    // 0x19d7d8: 0x1000022b  b           . + 4 + (0x22B << 2)
label_19d7dc:
    if (ctx->pc == 0x19D7DCu) {
        ctx->pc = 0x19D7DCu;
            // 0x19d7dc: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x19D7E0u;
        goto label_19d7e0;
    }
    ctx->pc = 0x19D7D8u;
    {
        const bool branch_taken_0x19d7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7D8u;
            // 0x19d7dc: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7d8) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19D7E0u;
label_19d7e0:
    // 0x19d7e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19d7e4:
    // 0x19d7e4: 0x1483020c  bne         $a0, $v1, . + 4 + (0x20C << 2)
label_19d7e8:
    if (ctx->pc == 0x19D7E8u) {
        ctx->pc = 0x19D7ECu;
        goto label_19d7ec;
    }
    ctx->pc = 0x19D7E4u;
    {
        const bool branch_taken_0x19d7e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d7e4) {
            ctx->pc = 0x19E018u;
            goto label_19e018;
        }
    }
    ctx->pc = 0x19D7ECu;
label_19d7ec:
    // 0x19d7ec: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x19d7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d7f0:
    // 0x19d7f0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x19d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_19d7f4:
    // 0x19d7f4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19d7f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19d7f8:
    // 0x19d7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d7fc:
    // 0x19d7fc: 0x0  nop
    ctx->pc = 0x19d7fcu;
    // NOP
label_19d800:
    // 0x19d800: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19d800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d804:
    // 0x19d804: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_19d808:
    if (ctx->pc == 0x19D808u) {
        ctx->pc = 0x19D808u;
            // 0x19d808: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x19D80Cu;
        goto label_19d80c;
    }
    ctx->pc = 0x19D804u;
    {
        const bool branch_taken_0x19d804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D804u;
            // 0x19d808: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d804) {
            ctx->pc = 0x19D860u;
            goto label_19d860;
        }
    }
    ctx->pc = 0x19D80Cu;
label_19d80c:
    // 0x19d80c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19d80cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19d810:
    // 0x19d810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d814:
    // 0x19d814: 0x0  nop
    ctx->pc = 0x19d814u;
    // NOP
label_19d818:
    // 0x19d818: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19d818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d81c:
    // 0x19d81c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_19d820:
    if (ctx->pc == 0x19D820u) {
        ctx->pc = 0x19D820u;
            // 0x19d820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19D824u;
        goto label_19d824;
    }
    ctx->pc = 0x19D81Cu;
    {
        const bool branch_taken_0x19d81c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D81Cu;
            // 0x19d820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d81c) {
            ctx->pc = 0x19D860u;
            goto label_19d860;
        }
    }
    ctx->pc = 0x19D824u;
label_19d824:
    // 0x19d824: 0xc067b50  jal         func_19ED40
label_19d828:
    if (ctx->pc == 0x19D828u) {
        ctx->pc = 0x19D82Cu;
        goto label_19d82c;
    }
    ctx->pc = 0x19D824u;
    SET_GPR_U32(ctx, 31, 0x19D82Cu);
    ctx->pc = 0x19ED40u;
    if (runtime->hasFunction(0x19ED40u)) {
        auto targetFn = runtime->lookupFunction(0x19ED40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D82Cu; }
        if (ctx->pc != 0x19D82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x19ed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D82Cu; }
        if (ctx->pc != 0x19D82Cu) { return; }
    }
    ctx->pc = 0x19D82Cu;
label_19d82c:
    // 0x19d82c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d830:
    // 0x19d830: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d834:
    // 0x19d834: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x19d834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_19d838:
    // 0x19d838: 0xc065590  jal         func_195640
label_19d83c:
    if (ctx->pc == 0x19D83Cu) {
        ctx->pc = 0x19D83Cu;
            // 0x19d83c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19D840u;
        goto label_19d840;
    }
    ctx->pc = 0x19D838u;
    SET_GPR_U32(ctx, 31, 0x19D840u);
    ctx->pc = 0x19D83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D838u;
            // 0x19d83c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D840u; }
        if (ctx->pc != 0x19D840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D840u; }
        if (ctx->pc != 0x19D840u) { return; }
    }
    ctx->pc = 0x19D840u;
label_19d840:
    // 0x19d840: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d844:
    // 0x19d844: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d848:
    // 0x19d848: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x19d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_19d84c:
    // 0x19d84c: 0xc065590  jal         func_195640
label_19d850:
    if (ctx->pc == 0x19D850u) {
        ctx->pc = 0x19D850u;
            // 0x19d850: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19D854u;
        goto label_19d854;
    }
    ctx->pc = 0x19D84Cu;
    SET_GPR_U32(ctx, 31, 0x19D854u);
    ctx->pc = 0x19D850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D84Cu;
            // 0x19d850: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D854u; }
        if (ctx->pc != 0x19D854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D854u; }
        if (ctx->pc != 0x19D854u) { return; }
    }
    ctx->pc = 0x19D854u;
label_19d854:
    // 0x19d854: 0x10000028  b           . + 4 + (0x28 << 2)
label_19d858:
    if (ctx->pc == 0x19D858u) {
        ctx->pc = 0x19D85Cu;
        goto label_19d85c;
    }
    ctx->pc = 0x19D854u;
    {
        const bool branch_taken_0x19d854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d854) {
            ctx->pc = 0x19D8F8u;
            goto label_19d8f8;
        }
    }
    ctx->pc = 0x19D85Cu;
label_19d85c:
    // 0x19d85c: 0x0  nop
    ctx->pc = 0x19d85cu;
    // NOP
label_19d860:
    // 0x19d860: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x19d860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_19d864:
    // 0x19d864: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x19d864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d868:
    // 0x19d868: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19d868u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19d86c:
    // 0x19d86c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d870:
    // 0x19d870: 0x0  nop
    ctx->pc = 0x19d870u;
    // NOP
label_19d874:
    // 0x19d874: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19d874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d878:
    // 0x19d878: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_19d87c:
    if (ctx->pc == 0x19D87Cu) {
        ctx->pc = 0x19D87Cu;
            // 0x19d87c: 0x3c02bba3  lui         $v0, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
        ctx->pc = 0x19D880u;
        goto label_19d880;
    }
    ctx->pc = 0x19D878u;
    {
        const bool branch_taken_0x19d878 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D878u;
            // 0x19d87c: 0x3c02bba3  lui         $v0, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d878) {
            ctx->pc = 0x19D8D0u;
            goto label_19d8d0;
        }
    }
    ctx->pc = 0x19D880u;
label_19d880:
    // 0x19d880: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19d880u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19d884:
    // 0x19d884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d888:
    // 0x19d888: 0x0  nop
    ctx->pc = 0x19d888u;
    // NOP
label_19d88c:
    // 0x19d88c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19d88cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d890:
    // 0x19d890: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_19d894:
    if (ctx->pc == 0x19D894u) {
        ctx->pc = 0x19D894u;
            // 0x19d894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19D898u;
        goto label_19d898;
    }
    ctx->pc = 0x19D890u;
    {
        const bool branch_taken_0x19d890 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D890u;
            // 0x19d894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d890) {
            ctx->pc = 0x19D8D0u;
            goto label_19d8d0;
        }
    }
    ctx->pc = 0x19D898u;
label_19d898:
    // 0x19d898: 0xc067b50  jal         func_19ED40
label_19d89c:
    if (ctx->pc == 0x19D89Cu) {
        ctx->pc = 0x19D8A0u;
        goto label_19d8a0;
    }
    ctx->pc = 0x19D898u;
    SET_GPR_U32(ctx, 31, 0x19D8A0u);
    ctx->pc = 0x19ED40u;
    if (runtime->hasFunction(0x19ED40u)) {
        auto targetFn = runtime->lookupFunction(0x19ED40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8A0u; }
        if (ctx->pc != 0x19D8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x19ed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8A0u; }
        if (ctx->pc != 0x19D8A0u) { return; }
    }
    ctx->pc = 0x19D8A0u;
label_19d8a0:
    // 0x19d8a0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d8a4:
    // 0x19d8a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d8a8:
    // 0x19d8a8: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x19d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_19d8ac:
    // 0x19d8ac: 0xc065590  jal         func_195640
label_19d8b0:
    if (ctx->pc == 0x19D8B0u) {
        ctx->pc = 0x19D8B0u;
            // 0x19d8b0: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19D8B4u;
        goto label_19d8b4;
    }
    ctx->pc = 0x19D8ACu;
    SET_GPR_U32(ctx, 31, 0x19D8B4u);
    ctx->pc = 0x19D8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D8ACu;
            // 0x19d8b0: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8B4u; }
        if (ctx->pc != 0x19D8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8B4u; }
        if (ctx->pc != 0x19D8B4u) { return; }
    }
    ctx->pc = 0x19D8B4u;
label_19d8b4:
    // 0x19d8b4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d8b8:
    // 0x19d8b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d8bc:
    // 0x19d8bc: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x19d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_19d8c0:
    // 0x19d8c0: 0xc065590  jal         func_195640
label_19d8c4:
    if (ctx->pc == 0x19D8C4u) {
        ctx->pc = 0x19D8C4u;
            // 0x19d8c4: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19D8C8u;
        goto label_19d8c8;
    }
    ctx->pc = 0x19D8C0u;
    SET_GPR_U32(ctx, 31, 0x19D8C8u);
    ctx->pc = 0x19D8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D8C0u;
            // 0x19d8c4: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8C8u; }
        if (ctx->pc != 0x19D8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8C8u; }
        if (ctx->pc != 0x19D8C8u) { return; }
    }
    ctx->pc = 0x19D8C8u;
label_19d8c8:
    // 0x19d8c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_19d8cc:
    if (ctx->pc == 0x19D8CCu) {
        ctx->pc = 0x19D8D0u;
        goto label_19d8d0;
    }
    ctx->pc = 0x19D8C8u;
    {
        const bool branch_taken_0x19d8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d8c8) {
            ctx->pc = 0x19D8F8u;
            goto label_19d8f8;
        }
    }
    ctx->pc = 0x19D8D0u;
label_19d8d0:
    // 0x19d8d0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x19d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_19d8d4:
    // 0x19d8d4: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x19d8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19d8d8:
    // 0x19d8d8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x19d8d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
label_19d8dc:
    // 0x19d8dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19d8e0:
    // 0x19d8e0: 0x0  nop
    ctx->pc = 0x19d8e0u;
    // NOP
label_19d8e4:
    // 0x19d8e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19d8e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19d8e8:
    // 0x19d8e8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x19d8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_19d8ec:
    // 0x19d8ec: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x19d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19d8f0:
    // 0x19d8f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19d8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19d8f4:
    // 0x19d8f4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x19d8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_19d8f8:
    // 0x19d8f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x19d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d8fc:
    // 0x19d8fc: 0x284106a5  slti        $at, $v0, 0x6A5
    ctx->pc = 0x19d8fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1701) ? 1 : 0);
label_19d900:
    // 0x19d900: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_19d904:
    if (ctx->pc == 0x19D904u) {
        ctx->pc = 0x19D904u;
            // 0x19d904: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x19D908u;
        goto label_19d908;
    }
    ctx->pc = 0x19D900u;
    {
        const bool branch_taken_0x19d900 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D900u;
            // 0x19d904: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d900) {
            ctx->pc = 0x19D910u;
            goto label_19d910;
        }
    }
    ctx->pc = 0x19D908u;
label_19d908:
    // 0x19d908: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x19d908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_19d90c:
    // 0x19d90c: 0x0  nop
    ctx->pc = 0x19d90cu;
    // NOP
label_19d910:
    // 0x19d910: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19d910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19d914:
    // 0x19d914: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x19d914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_19d918:
    // 0x19d918: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x19d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19d91c:
    // 0x19d91c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x19d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19d920:
    // 0x19d920: 0xc067bd0  jal         func_19EF40
label_19d924:
    if (ctx->pc == 0x19D924u) {
        ctx->pc = 0x19D924u;
            // 0x19d924: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x19D928u;
        goto label_19d928;
    }
    ctx->pc = 0x19D920u;
    SET_GPR_U32(ctx, 31, 0x19D928u);
    ctx->pc = 0x19D924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D920u;
            // 0x19d924: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EF40u;
    if (runtime->hasFunction(0x19EF40u)) {
        auto targetFn = runtime->lookupFunction(0x19EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D928u; }
        if (ctx->pc != 0x19D928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x19ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D928u; }
        if (ctx->pc != 0x19D928u) { return; }
    }
    ctx->pc = 0x19D928u;
label_19d928:
    // 0x19d928: 0xc065d00  jal         func_197400
label_19d92c:
    if (ctx->pc == 0x19D92Cu) {
        ctx->pc = 0x19D930u;
        goto label_19d930;
    }
    ctx->pc = 0x19D928u;
    SET_GPR_U32(ctx, 31, 0x19D930u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D930u; }
        if (ctx->pc != 0x19D930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D930u; }
        if (ctx->pc != 0x19D930u) { return; }
    }
    ctx->pc = 0x19D930u;
label_19d930:
    // 0x19d930: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_19d934:
    if (ctx->pc == 0x19D934u) {
        ctx->pc = 0x19D938u;
        goto label_19d938;
    }
    ctx->pc = 0x19D930u;
    {
        const bool branch_taken_0x19d930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d930) {
            ctx->pc = 0x19DAC0u;
            goto label_19dac0;
        }
    }
    ctx->pc = 0x19D938u;
label_19d938:
    // 0x19d938: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19d938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d93c:
    // 0x19d93c: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x19d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_19d940:
    // 0x19d940: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d940u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19d944:
    // 0x19d944: 0x0  nop
    ctx->pc = 0x19d944u;
    // NOP
label_19d948:
    // 0x19d948: 0x0  nop
    ctx->pc = 0x19d948u;
    // NOP
label_19d94c:
    // 0x19d94c: 0x1010  mfhi        $v0
    ctx->pc = 0x19d94cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19d950:
    // 0x19d950: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_19d954:
    if (ctx->pc == 0x19D954u) {
        ctx->pc = 0x19D958u;
        goto label_19d958;
    }
    ctx->pc = 0x19D950u;
    {
        const bool branch_taken_0x19d950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d950) {
            ctx->pc = 0x19D970u;
            goto label_19d970;
        }
    }
    ctx->pc = 0x19D958u;
label_19d958:
    // 0x19d958: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d95c:
    // 0x19d95c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19d95cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d960:
    // 0x19d960: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d964:
    // 0x19d964: 0xc0655b0  jal         func_1956C0
label_19d968:
    if (ctx->pc == 0x19D968u) {
        ctx->pc = 0x19D968u;
            // 0x19d968: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x19D96Cu;
        goto label_19d96c;
    }
    ctx->pc = 0x19D964u;
    SET_GPR_U32(ctx, 31, 0x19D96Cu);
    ctx->pc = 0x19D968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D964u;
            // 0x19d968: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D96Cu; }
        if (ctx->pc != 0x19D96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D96Cu; }
        if (ctx->pc != 0x19D96Cu) { return; }
    }
    ctx->pc = 0x19D96Cu;
label_19d96c:
    // 0x19d96c: 0x0  nop
    ctx->pc = 0x19d96cu;
    // NOP
label_19d970:
    // 0x19d970: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19d970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d974:
    // 0x19d974: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x19d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_19d978:
    // 0x19d978: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d978u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19d97c:
    // 0x19d97c: 0x0  nop
    ctx->pc = 0x19d97cu;
    // NOP
label_19d980:
    // 0x19d980: 0x0  nop
    ctx->pc = 0x19d980u;
    // NOP
label_19d984:
    // 0x19d984: 0x1010  mfhi        $v0
    ctx->pc = 0x19d984u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19d988:
    // 0x19d988: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_19d98c:
    if (ctx->pc == 0x19D98Cu) {
        ctx->pc = 0x19D990u;
        goto label_19d990;
    }
    ctx->pc = 0x19D988u;
    {
        const bool branch_taken_0x19d988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d988) {
            ctx->pc = 0x19D9B8u;
            goto label_19d9b8;
        }
    }
    ctx->pc = 0x19D990u;
label_19d990:
    // 0x19d990: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d994:
    // 0x19d994: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d998:
    // 0x19d998: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x19d998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_19d99c:
    // 0x19d99c: 0xc06560c  jal         func_195830
label_19d9a0:
    if (ctx->pc == 0x19D9A0u) {
        ctx->pc = 0x19D9A0u;
            // 0x19d9a0: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19D9A4u;
        goto label_19d9a4;
    }
    ctx->pc = 0x19D99Cu;
    SET_GPR_U32(ctx, 31, 0x19D9A4u);
    ctx->pc = 0x19D9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D99Cu;
            // 0x19d9a0: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9A4u; }
        if (ctx->pc != 0x19D9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9A4u; }
        if (ctx->pc != 0x19D9A4u) { return; }
    }
    ctx->pc = 0x19D9A4u;
label_19d9a4:
    // 0x19d9a4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d9a8:
    // 0x19d9a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d9ac:
    // 0x19d9ac: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x19d9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_19d9b0:
    // 0x19d9b0: 0xc06560c  jal         func_195830
label_19d9b4:
    if (ctx->pc == 0x19D9B4u) {
        ctx->pc = 0x19D9B4u;
            // 0x19d9b4: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19D9B8u;
        goto label_19d9b8;
    }
    ctx->pc = 0x19D9B0u;
    SET_GPR_U32(ctx, 31, 0x19D9B8u);
    ctx->pc = 0x19D9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D9B0u;
            // 0x19d9b4: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9B8u; }
        if (ctx->pc != 0x19D9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9B8u; }
        if (ctx->pc != 0x19D9B8u) { return; }
    }
    ctx->pc = 0x19D9B8u;
label_19d9b8:
    // 0x19d9b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d9bc:
    // 0x19d9bc: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x19d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_19d9c0:
    // 0x19d9c0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d9c0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19d9c4:
    // 0x19d9c4: 0x0  nop
    ctx->pc = 0x19d9c4u;
    // NOP
label_19d9c8:
    // 0x19d9c8: 0x0  nop
    ctx->pc = 0x19d9c8u;
    // NOP
label_19d9cc:
    // 0x19d9cc: 0x1010  mfhi        $v0
    ctx->pc = 0x19d9ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19d9d0:
    // 0x19d9d0: 0x144001ad  bnez        $v0, . + 4 + (0x1AD << 2)
label_19d9d4:
    if (ctx->pc == 0x19D9D4u) {
        ctx->pc = 0x19D9D8u;
        goto label_19d9d8;
    }
    ctx->pc = 0x19D9D0u;
    {
        const bool branch_taken_0x19d9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d9d0) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19D9D8u;
label_19d9d8:
    // 0x19d9d8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19d9dc:
    // 0x19d9dc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19d9e0:
    // 0x19d9e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19d9e4:
    // 0x19d9e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d9e8:
    // 0x19d9e8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d9ec:
    // 0x19d9ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d9ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19d9f0:
    // 0x19d9f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19d9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d9f4:
    // 0x19d9f4: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19d9f8:
    // 0x19d9f8: 0xc0655dc  jal         func_195770
label_19d9fc:
    if (ctx->pc == 0x19D9FCu) {
        ctx->pc = 0x19D9FCu;
            // 0x19d9fc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DA00u;
        goto label_19da00;
    }
    ctx->pc = 0x19D9F8u;
    SET_GPR_U32(ctx, 31, 0x19DA00u);
    ctx->pc = 0x19D9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D9F8u;
            // 0x19d9fc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA00u; }
        if (ctx->pc != 0x19DA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA00u; }
        if (ctx->pc != 0x19DA00u) { return; }
    }
    ctx->pc = 0x19DA00u;
label_19da00:
    // 0x19da00: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19da00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19da04:
    // 0x19da04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19da04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19da08:
    // 0x19da08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19da08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19da0c:
    // 0x19da0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19da0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19da10:
    // 0x19da10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19da10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19da14:
    // 0x19da14: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19da14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19da18:
    // 0x19da18: 0xc0655dc  jal         func_195770
label_19da1c:
    if (ctx->pc == 0x19DA1Cu) {
        ctx->pc = 0x19DA1Cu;
            // 0x19da1c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DA20u;
        goto label_19da20;
    }
    ctx->pc = 0x19DA18u;
    SET_GPR_U32(ctx, 31, 0x19DA20u);
    ctx->pc = 0x19DA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA18u;
            // 0x19da1c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA20u; }
        if (ctx->pc != 0x19DA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA20u; }
        if (ctx->pc != 0x19DA20u) { return; }
    }
    ctx->pc = 0x19DA20u;
label_19da20:
    // 0x19da20: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19da20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19da24:
    // 0x19da24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19da24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19da28:
    // 0x19da28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19da28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19da2c:
    // 0x19da2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19da2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19da30:
    // 0x19da30: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19da30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19da34:
    // 0x19da34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19da34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19da38:
    // 0x19da38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19da38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19da3c:
    // 0x19da3c: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19da40:
    // 0x19da40: 0xc0655dc  jal         func_195770
label_19da44:
    if (ctx->pc == 0x19DA44u) {
        ctx->pc = 0x19DA44u;
            // 0x19da44: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DA48u;
        goto label_19da48;
    }
    ctx->pc = 0x19DA40u;
    SET_GPR_U32(ctx, 31, 0x19DA48u);
    ctx->pc = 0x19DA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA40u;
            // 0x19da44: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA48u; }
        if (ctx->pc != 0x19DA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA48u; }
        if (ctx->pc != 0x19DA48u) { return; }
    }
    ctx->pc = 0x19DA48u;
label_19da48:
    // 0x19da48: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19da48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19da4c:
    // 0x19da4c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19da50:
    // 0x19da50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19da50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19da54:
    // 0x19da54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19da54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19da58:
    // 0x19da58: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19da58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19da5c:
    // 0x19da5c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19da5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19da60:
    // 0x19da60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19da60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19da64:
    // 0x19da64: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19da64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19da68:
    // 0x19da68: 0xc0655dc  jal         func_195770
label_19da6c:
    if (ctx->pc == 0x19DA6Cu) {
        ctx->pc = 0x19DA6Cu;
            // 0x19da6c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DA70u;
        goto label_19da70;
    }
    ctx->pc = 0x19DA68u;
    SET_GPR_U32(ctx, 31, 0x19DA70u);
    ctx->pc = 0x19DA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA68u;
            // 0x19da6c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA70u; }
        if (ctx->pc != 0x19DA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA70u; }
        if (ctx->pc != 0x19DA70u) { return; }
    }
    ctx->pc = 0x19DA70u;
label_19da70:
    // 0x19da70: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19da70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19da74:
    // 0x19da74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19da74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19da78:
    // 0x19da78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19da7c:
    // 0x19da7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19da7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19da80:
    // 0x19da80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19da80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19da84:
    // 0x19da84: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19da84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19da88:
    // 0x19da88: 0xc0655dc  jal         func_195770
label_19da8c:
    if (ctx->pc == 0x19DA8Cu) {
        ctx->pc = 0x19DA8Cu;
            // 0x19da8c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DA90u;
        goto label_19da90;
    }
    ctx->pc = 0x19DA88u;
    SET_GPR_U32(ctx, 31, 0x19DA90u);
    ctx->pc = 0x19DA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA88u;
            // 0x19da8c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA90u; }
        if (ctx->pc != 0x19DA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA90u; }
        if (ctx->pc != 0x19DA90u) { return; }
    }
    ctx->pc = 0x19DA90u;
label_19da90:
    // 0x19da90: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19da90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19da94:
    // 0x19da94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19da94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19da98:
    // 0x19da98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19da98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19da9c:
    // 0x19da9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19da9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19daa0:
    // 0x19daa0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19daa4:
    // 0x19daa4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19daa4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19daa8:
    // 0x19daa8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19daa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19daac:
    // 0x19daac: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19daacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19dab0:
    // 0x19dab0: 0xc0655dc  jal         func_195770
label_19dab4:
    if (ctx->pc == 0x19DAB4u) {
        ctx->pc = 0x19DAB4u;
            // 0x19dab4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DAB8u;
        goto label_19dab8;
    }
    ctx->pc = 0x19DAB0u;
    SET_GPR_U32(ctx, 31, 0x19DAB8u);
    ctx->pc = 0x19DAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DAB0u;
            // 0x19dab4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAB8u; }
        if (ctx->pc != 0x19DAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAB8u; }
        if (ctx->pc != 0x19DAB8u) { return; }
    }
    ctx->pc = 0x19DAB8u;
label_19dab8:
    // 0x19dab8: 0x10000173  b           . + 4 + (0x173 << 2)
label_19dabc:
    if (ctx->pc == 0x19DABCu) {
        ctx->pc = 0x19DAC0u;
        goto label_19dac0;
    }
    ctx->pc = 0x19DAB8u;
    {
        const bool branch_taken_0x19dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dab8) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19DAC0u;
label_19dac0:
    // 0x19dac0: 0xc065d00  jal         func_197400
label_19dac4:
    if (ctx->pc == 0x19DAC4u) {
        ctx->pc = 0x19DAC8u;
        goto label_19dac8;
    }
    ctx->pc = 0x19DAC0u;
    SET_GPR_U32(ctx, 31, 0x19DAC8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAC8u; }
        if (ctx->pc != 0x19DAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAC8u; }
        if (ctx->pc != 0x19DAC8u) { return; }
    }
    ctx->pc = 0x19DAC8u;
label_19dac8:
    // 0x19dac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dacc:
    // 0x19dacc: 0x1443009e  bne         $v0, $v1, . + 4 + (0x9E << 2)
label_19dad0:
    if (ctx->pc == 0x19DAD0u) {
        ctx->pc = 0x19DAD4u;
        goto label_19dad4;
    }
    ctx->pc = 0x19DACCu;
    {
        const bool branch_taken_0x19dacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19dacc) {
            ctx->pc = 0x19DD48u;
            goto label_19dd48;
        }
    }
    ctx->pc = 0x19DAD4u;
label_19dad4:
    // 0x19dad4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19dad8:
    // 0x19dad8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x19dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_19dadc:
    // 0x19dadc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19dadcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19dae0:
    // 0x19dae0: 0x0  nop
    ctx->pc = 0x19dae0u;
    // NOP
label_19dae4:
    // 0x19dae4: 0x0  nop
    ctx->pc = 0x19dae4u;
    // NOP
label_19dae8:
    // 0x19dae8: 0x1010  mfhi        $v0
    ctx->pc = 0x19dae8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19daec:
    // 0x19daec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_19daf0:
    if (ctx->pc == 0x19DAF0u) {
        ctx->pc = 0x19DAF4u;
        goto label_19daf4;
    }
    ctx->pc = 0x19DAECu;
    {
        const bool branch_taken_0x19daec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19daec) {
            ctx->pc = 0x19DB08u;
            goto label_19db08;
        }
    }
    ctx->pc = 0x19DAF4u;
label_19daf4:
    // 0x19daf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19daf8:
    // 0x19daf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19daf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dafc:
    // 0x19dafc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19db00:
    // 0x19db00: 0xc0655b0  jal         func_1956C0
label_19db04:
    if (ctx->pc == 0x19DB04u) {
        ctx->pc = 0x19DB04u;
            // 0x19db04: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x19DB08u;
        goto label_19db08;
    }
    ctx->pc = 0x19DB00u;
    SET_GPR_U32(ctx, 31, 0x19DB08u);
    ctx->pc = 0x19DB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB00u;
            // 0x19db04: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB08u; }
        if (ctx->pc != 0x19DB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB08u; }
        if (ctx->pc != 0x19DB08u) { return; }
    }
    ctx->pc = 0x19DB08u;
label_19db08:
    // 0x19db08: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19db08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19db0c:
    // 0x19db0c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x19db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_19db10:
    // 0x19db10: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19db10u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19db14:
    // 0x19db14: 0x0  nop
    ctx->pc = 0x19db14u;
    // NOP
label_19db18:
    // 0x19db18: 0x0  nop
    ctx->pc = 0x19db18u;
    // NOP
label_19db1c:
    // 0x19db1c: 0x1010  mfhi        $v0
    ctx->pc = 0x19db1cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19db20:
    // 0x19db20: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_19db24:
    if (ctx->pc == 0x19DB24u) {
        ctx->pc = 0x19DB28u;
        goto label_19db28;
    }
    ctx->pc = 0x19DB20u;
    {
        const bool branch_taken_0x19db20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19db20) {
            ctx->pc = 0x19DB78u;
            goto label_19db78;
        }
    }
    ctx->pc = 0x19DB28u;
label_19db28:
    // 0x19db28: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19db28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19db2c:
    // 0x19db2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19db30:
    // 0x19db30: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x19db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_19db34:
    // 0x19db34: 0xc06560c  jal         func_195830
label_19db38:
    if (ctx->pc == 0x19DB38u) {
        ctx->pc = 0x19DB38u;
            // 0x19db38: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19DB3Cu;
        goto label_19db3c;
    }
    ctx->pc = 0x19DB34u;
    SET_GPR_U32(ctx, 31, 0x19DB3Cu);
    ctx->pc = 0x19DB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB34u;
            // 0x19db38: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB3Cu; }
        if (ctx->pc != 0x19DB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB3Cu; }
        if (ctx->pc != 0x19DB3Cu) { return; }
    }
    ctx->pc = 0x19DB3Cu;
label_19db3c:
    // 0x19db3c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19db40:
    // 0x19db40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19db44:
    // 0x19db44: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x19db44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_19db48:
    // 0x19db48: 0xc06560c  jal         func_195830
label_19db4c:
    if (ctx->pc == 0x19DB4Cu) {
        ctx->pc = 0x19DB4Cu;
            // 0x19db4c: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x19DB50u;
        goto label_19db50;
    }
    ctx->pc = 0x19DB48u;
    SET_GPR_U32(ctx, 31, 0x19DB50u);
    ctx->pc = 0x19DB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB48u;
            // 0x19db4c: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB50u; }
        if (ctx->pc != 0x19DB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB50u; }
        if (ctx->pc != 0x19DB50u) { return; }
    }
    ctx->pc = 0x19DB50u;
label_19db50:
    // 0x19db50: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19db50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19db54:
    // 0x19db54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19db54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19db58:
    // 0x19db58: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x19db58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_19db5c:
    // 0x19db5c: 0xc06560c  jal         func_195830
label_19db60:
    if (ctx->pc == 0x19DB60u) {
        ctx->pc = 0x19DB60u;
            // 0x19db60: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19DB64u;
        goto label_19db64;
    }
    ctx->pc = 0x19DB5Cu;
    SET_GPR_U32(ctx, 31, 0x19DB64u);
    ctx->pc = 0x19DB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB5Cu;
            // 0x19db60: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB64u; }
        if (ctx->pc != 0x19DB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB64u; }
        if (ctx->pc != 0x19DB64u) { return; }
    }
    ctx->pc = 0x19DB64u;
label_19db64:
    // 0x19db64: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19db64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19db68:
    // 0x19db68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19db6c:
    // 0x19db6c: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x19db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_19db70:
    // 0x19db70: 0xc06560c  jal         func_195830
label_19db74:
    if (ctx->pc == 0x19DB74u) {
        ctx->pc = 0x19DB74u;
            // 0x19db74: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x19DB78u;
        goto label_19db78;
    }
    ctx->pc = 0x19DB70u;
    SET_GPR_U32(ctx, 31, 0x19DB78u);
    ctx->pc = 0x19DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB70u;
            // 0x19db74: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB78u; }
        if (ctx->pc != 0x19DB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB78u; }
        if (ctx->pc != 0x19DB78u) { return; }
    }
    ctx->pc = 0x19DB78u;
label_19db78:
    // 0x19db78: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19db78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19db7c:
    // 0x19db7c: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x19db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_19db80:
    // 0x19db80: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19db80u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19db84:
    // 0x19db84: 0x0  nop
    ctx->pc = 0x19db84u;
    // NOP
label_19db88:
    // 0x19db88: 0x0  nop
    ctx->pc = 0x19db88u;
    // NOP
label_19db8c:
    // 0x19db8c: 0x1010  mfhi        $v0
    ctx->pc = 0x19db8cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19db90:
    // 0x19db90: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_19db94:
    if (ctx->pc == 0x19DB94u) {
        ctx->pc = 0x19DB98u;
        goto label_19db98;
    }
    ctx->pc = 0x19DB90u;
    {
        const bool branch_taken_0x19db90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19db90) {
            ctx->pc = 0x19DC78u;
            goto label_19dc78;
        }
    }
    ctx->pc = 0x19DB98u;
label_19db98:
    // 0x19db98: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19db98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19db9c:
    // 0x19db9c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19dba0:
    // 0x19dba0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dba4:
    // 0x19dba4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dba8:
    // 0x19dba8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19dbac:
    // 0x19dbac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19dbacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19dbb0:
    // 0x19dbb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19dbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19dbb4:
    // 0x19dbb4: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19dbb8:
    // 0x19dbb8: 0xc0655dc  jal         func_195770
label_19dbbc:
    if (ctx->pc == 0x19DBBCu) {
        ctx->pc = 0x19DBBCu;
            // 0x19dbbc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DBC0u;
        goto label_19dbc0;
    }
    ctx->pc = 0x19DBB8u;
    SET_GPR_U32(ctx, 31, 0x19DBC0u);
    ctx->pc = 0x19DBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DBB8u;
            // 0x19dbbc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBC0u; }
        if (ctx->pc != 0x19DBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBC0u; }
        if (ctx->pc != 0x19DBC0u) { return; }
    }
    ctx->pc = 0x19DBC0u;
label_19dbc0:
    // 0x19dbc0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dbc4:
    // 0x19dbc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19dbc8:
    // 0x19dbc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dbcc:
    // 0x19dbcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19dbccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dbd0:
    // 0x19dbd0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19dbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19dbd4:
    // 0x19dbd4: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19dbd8:
    // 0x19dbd8: 0xc0655dc  jal         func_195770
label_19dbdc:
    if (ctx->pc == 0x19DBDCu) {
        ctx->pc = 0x19DBDCu;
            // 0x19dbdc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DBE0u;
        goto label_19dbe0;
    }
    ctx->pc = 0x19DBD8u;
    SET_GPR_U32(ctx, 31, 0x19DBE0u);
    ctx->pc = 0x19DBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DBD8u;
            // 0x19dbdc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBE0u; }
        if (ctx->pc != 0x19DBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBE0u; }
        if (ctx->pc != 0x19DBE0u) { return; }
    }
    ctx->pc = 0x19DBE0u;
label_19dbe0:
    // 0x19dbe0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dbe4:
    // 0x19dbe4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19dbe8:
    // 0x19dbe8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dbec:
    // 0x19dbec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dbf0:
    // 0x19dbf0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19dbf4:
    // 0x19dbf4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19dbf4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19dbf8:
    // 0x19dbf8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19dbf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19dbfc:
    // 0x19dbfc: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19dc00:
    // 0x19dc00: 0xc0655dc  jal         func_195770
label_19dc04:
    if (ctx->pc == 0x19DC04u) {
        ctx->pc = 0x19DC04u;
            // 0x19dc04: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DC08u;
        goto label_19dc08;
    }
    ctx->pc = 0x19DC00u;
    SET_GPR_U32(ctx, 31, 0x19DC08u);
    ctx->pc = 0x19DC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC00u;
            // 0x19dc04: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC08u; }
        if (ctx->pc != 0x19DC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC08u; }
        if (ctx->pc != 0x19DC08u) { return; }
    }
    ctx->pc = 0x19DC08u;
label_19dc08:
    // 0x19dc08: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dc0c:
    // 0x19dc0c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19dc10:
    // 0x19dc10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dc14:
    // 0x19dc14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dc18:
    // 0x19dc18: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19dc1c:
    // 0x19dc1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19dc1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19dc20:
    // 0x19dc20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19dc20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19dc24:
    // 0x19dc24: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19dc28:
    // 0x19dc28: 0xc0655dc  jal         func_195770
label_19dc2c:
    if (ctx->pc == 0x19DC2Cu) {
        ctx->pc = 0x19DC2Cu;
            // 0x19dc2c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DC30u;
        goto label_19dc30;
    }
    ctx->pc = 0x19DC28u;
    SET_GPR_U32(ctx, 31, 0x19DC30u);
    ctx->pc = 0x19DC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC28u;
            // 0x19dc2c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC30u; }
        if (ctx->pc != 0x19DC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC30u; }
        if (ctx->pc != 0x19DC30u) { return; }
    }
    ctx->pc = 0x19DC30u;
label_19dc30:
    // 0x19dc30: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dc34:
    // 0x19dc34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19dc38:
    // 0x19dc38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dc3c:
    // 0x19dc3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19dc3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dc40:
    // 0x19dc40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19dc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19dc44:
    // 0x19dc44: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19dc48:
    // 0x19dc48: 0xc0655dc  jal         func_195770
label_19dc4c:
    if (ctx->pc == 0x19DC4Cu) {
        ctx->pc = 0x19DC4Cu;
            // 0x19dc4c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DC50u;
        goto label_19dc50;
    }
    ctx->pc = 0x19DC48u;
    SET_GPR_U32(ctx, 31, 0x19DC50u);
    ctx->pc = 0x19DC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC48u;
            // 0x19dc4c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC50u; }
        if (ctx->pc != 0x19DC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC50u; }
        if (ctx->pc != 0x19DC50u) { return; }
    }
    ctx->pc = 0x19DC50u;
label_19dc50:
    // 0x19dc50: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dc54:
    // 0x19dc54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19dc58:
    // 0x19dc58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dc5c:
    // 0x19dc5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dc5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dc60:
    // 0x19dc60: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19dc64:
    // 0x19dc64: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19dc64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19dc68:
    // 0x19dc68: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19dc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19dc6c:
    // 0x19dc6c: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19dc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19dc70:
    // 0x19dc70: 0xc0655dc  jal         func_195770
label_19dc74:
    if (ctx->pc == 0x19DC74u) {
        ctx->pc = 0x19DC74u;
            // 0x19dc74: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DC78u;
        goto label_19dc78;
    }
    ctx->pc = 0x19DC70u;
    SET_GPR_U32(ctx, 31, 0x19DC78u);
    ctx->pc = 0x19DC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC70u;
            // 0x19dc74: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC78u; }
        if (ctx->pc != 0x19DC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC78u; }
        if (ctx->pc != 0x19DC78u) { return; }
    }
    ctx->pc = 0x19DC78u;
label_19dc78:
    // 0x19dc78: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19dc7c:
    // 0x19dc7c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x19dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_19dc80:
    // 0x19dc80: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19dc80u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19dc84:
    // 0x19dc84: 0x0  nop
    ctx->pc = 0x19dc84u;
    // NOP
label_19dc88:
    // 0x19dc88: 0x0  nop
    ctx->pc = 0x19dc88u;
    // NOP
label_19dc8c:
    // 0x19dc8c: 0x1010  mfhi        $v0
    ctx->pc = 0x19dc8cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19dc90:
    // 0x19dc90: 0x144000fd  bnez        $v0, . + 4 + (0xFD << 2)
label_19dc94:
    if (ctx->pc == 0x19DC94u) {
        ctx->pc = 0x19DC94u;
            // 0x19dc94: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->pc = 0x19DC98u;
        goto label_19dc98;
    }
    ctx->pc = 0x19DC90u;
    {
        const bool branch_taken_0x19dc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC90u;
            // 0x19dc94: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc90) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19DC98u;
label_19dc98:
    // 0x19dc98: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dc9c:
    // 0x19dc9c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19dc9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19dca0:
    // 0x19dca0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dca4:
    // 0x19dca4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dca8:
    // 0x19dca8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19dcac:
    // 0x19dcac: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19dcacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19dcb0:
    // 0x19dcb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19dcb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19dcb4:
    // 0x19dcb4: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x19dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_19dcb8:
    // 0x19dcb8: 0xc0655dc  jal         func_195770
label_19dcbc:
    if (ctx->pc == 0x19DCBCu) {
        ctx->pc = 0x19DCBCu;
            // 0x19dcbc: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19DCC0u;
        goto label_19dcc0;
    }
    ctx->pc = 0x19DCB8u;
    SET_GPR_U32(ctx, 31, 0x19DCC0u);
    ctx->pc = 0x19DCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DCB8u;
            // 0x19dcbc: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DCC0u; }
        if (ctx->pc != 0x19DCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DCC0u; }
        if (ctx->pc != 0x19DCC0u) { return; }
    }
    ctx->pc = 0x19DCC0u;
label_19dcc0:
    // 0x19dcc0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dcc4:
    // 0x19dcc4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19dcc8:
    // 0x19dcc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dccc:
    // 0x19dccc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19dcccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19dcd0:
    // 0x19dcd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dcd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dcd4:
    // 0x19dcd4: 0x0  nop
    ctx->pc = 0x19dcd4u;
    // NOP
label_19dcd8:
    // 0x19dcd8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19dcd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19dcdc:
    // 0x19dcdc: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x19dcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_19dce0:
    // 0x19dce0: 0xc0655dc  jal         func_195770
label_19dce4:
    if (ctx->pc == 0x19DCE4u) {
        ctx->pc = 0x19DCE4u;
            // 0x19dce4: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19DCE8u;
        goto label_19dce8;
    }
    ctx->pc = 0x19DCE0u;
    SET_GPR_U32(ctx, 31, 0x19DCE8u);
    ctx->pc = 0x19DCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DCE0u;
            // 0x19dce4: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DCE8u; }
        if (ctx->pc != 0x19DCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DCE8u; }
        if (ctx->pc != 0x19DCE8u) { return; }
    }
    ctx->pc = 0x19DCE8u;
label_19dce8:
    // 0x19dce8: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x19dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_19dcec:
    // 0x19dcec: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dcf0:
    // 0x19dcf0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19dcf0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19dcf4:
    // 0x19dcf4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dcf8:
    // 0x19dcf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dcf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dcfc:
    // 0x19dcfc: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19dd00:
    // 0x19dd00: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19dd00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19dd04:
    // 0x19dd04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19dd04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19dd08:
    // 0x19dd08: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x19dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_19dd0c:
    // 0x19dd0c: 0xc0655dc  jal         func_195770
label_19dd10:
    if (ctx->pc == 0x19DD10u) {
        ctx->pc = 0x19DD10u;
            // 0x19dd10: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19DD14u;
        goto label_19dd14;
    }
    ctx->pc = 0x19DD0Cu;
    SET_GPR_U32(ctx, 31, 0x19DD14u);
    ctx->pc = 0x19DD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD0Cu;
            // 0x19dd10: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD14u; }
        if (ctx->pc != 0x19DD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD14u; }
        if (ctx->pc != 0x19DD14u) { return; }
    }
    ctx->pc = 0x19DD14u;
label_19dd14:
    // 0x19dd14: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dd18:
    // 0x19dd18: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19dd1c:
    // 0x19dd1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dd20:
    // 0x19dd20: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19dd20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19dd24:
    // 0x19dd24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dd28:
    // 0x19dd28: 0x0  nop
    ctx->pc = 0x19dd28u;
    // NOP
label_19dd2c:
    // 0x19dd2c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19dd2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19dd30:
    // 0x19dd30: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x19dd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_19dd34:
    // 0x19dd34: 0xc0655dc  jal         func_195770
label_19dd38:
    if (ctx->pc == 0x19DD38u) {
        ctx->pc = 0x19DD38u;
            // 0x19dd38: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19DD3Cu;
        goto label_19dd3c;
    }
    ctx->pc = 0x19DD34u;
    SET_GPR_U32(ctx, 31, 0x19DD3Cu);
    ctx->pc = 0x19DD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD34u;
            // 0x19dd38: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD3Cu; }
        if (ctx->pc != 0x19DD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD3Cu; }
        if (ctx->pc != 0x19DD3Cu) { return; }
    }
    ctx->pc = 0x19DD3Cu;
label_19dd3c:
    // 0x19dd3c: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_19dd40:
    if (ctx->pc == 0x19DD40u) {
        ctx->pc = 0x19DD44u;
        goto label_19dd44;
    }
    ctx->pc = 0x19DD3Cu;
    {
        const bool branch_taken_0x19dd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dd3c) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19DD44u;
label_19dd44:
    // 0x19dd44: 0x0  nop
    ctx->pc = 0x19dd44u;
    // NOP
label_19dd48:
    // 0x19dd48: 0xc065d00  jal         func_197400
label_19dd4c:
    if (ctx->pc == 0x19DD4Cu) {
        ctx->pc = 0x19DD50u;
        goto label_19dd50;
    }
    ctx->pc = 0x19DD48u;
    SET_GPR_U32(ctx, 31, 0x19DD50u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD50u; }
        if (ctx->pc != 0x19DD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD50u; }
        if (ctx->pc != 0x19DD50u) { return; }
    }
    ctx->pc = 0x19DD50u;
label_19dd50:
    // 0x19dd50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19dd54:
    // 0x19dd54: 0x144300cc  bne         $v0, $v1, . + 4 + (0xCC << 2)
label_19dd58:
    if (ctx->pc == 0x19DD58u) {
        ctx->pc = 0x19DD5Cu;
        goto label_19dd5c;
    }
    ctx->pc = 0x19DD54u;
    {
        const bool branch_taken_0x19dd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19dd54) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19DD5Cu;
label_19dd5c:
    // 0x19dd5c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19dd60:
    // 0x19dd60: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x19dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_19dd64:
    // 0x19dd64: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19dd64u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19dd68:
    // 0x19dd68: 0x0  nop
    ctx->pc = 0x19dd68u;
    // NOP
label_19dd6c:
    // 0x19dd6c: 0x0  nop
    ctx->pc = 0x19dd6cu;
    // NOP
label_19dd70:
    // 0x19dd70: 0x1010  mfhi        $v0
    ctx->pc = 0x19dd70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19dd74:
    // 0x19dd74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_19dd78:
    if (ctx->pc == 0x19DD78u) {
        ctx->pc = 0x19DD7Cu;
        goto label_19dd7c;
    }
    ctx->pc = 0x19DD74u;
    {
        const bool branch_taken_0x19dd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dd74) {
            ctx->pc = 0x19DD90u;
            goto label_19dd90;
        }
    }
    ctx->pc = 0x19DD7Cu;
label_19dd7c:
    // 0x19dd7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dd80:
    // 0x19dd80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19dd80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dd84:
    // 0x19dd84: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dd88:
    // 0x19dd88: 0xc0655b0  jal         func_1956C0
label_19dd8c:
    if (ctx->pc == 0x19DD8Cu) {
        ctx->pc = 0x19DD8Cu;
            // 0x19dd8c: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x19DD90u;
        goto label_19dd90;
    }
    ctx->pc = 0x19DD88u;
    SET_GPR_U32(ctx, 31, 0x19DD90u);
    ctx->pc = 0x19DD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD88u;
            // 0x19dd8c: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD90u; }
        if (ctx->pc != 0x19DD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD90u; }
        if (ctx->pc != 0x19DD90u) { return; }
    }
    ctx->pc = 0x19DD90u;
label_19dd90:
    // 0x19dd90: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19dd94:
    // 0x19dd94: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x19dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19dd98:
    // 0x19dd98: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19dd98u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19dd9c:
    // 0x19dd9c: 0x0  nop
    ctx->pc = 0x19dd9cu;
    // NOP
label_19dda0:
    // 0x19dda0: 0x0  nop
    ctx->pc = 0x19dda0u;
    // NOP
label_19dda4:
    // 0x19dda4: 0x1010  mfhi        $v0
    ctx->pc = 0x19dda4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19dda8:
    // 0x19dda8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_19ddac:
    if (ctx->pc == 0x19DDACu) {
        ctx->pc = 0x19DDB0u;
        goto label_19ddb0;
    }
    ctx->pc = 0x19DDA8u;
    {
        const bool branch_taken_0x19dda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dda8) {
            ctx->pc = 0x19DE00u;
            goto label_19de00;
        }
    }
    ctx->pc = 0x19DDB0u;
label_19ddb0:
    // 0x19ddb0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19ddb4:
    // 0x19ddb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ddb8:
    // 0x19ddb8: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x19ddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_19ddbc:
    // 0x19ddbc: 0xc06560c  jal         func_195830
label_19ddc0:
    if (ctx->pc == 0x19DDC0u) {
        ctx->pc = 0x19DDC0u;
            // 0x19ddc0: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19DDC4u;
        goto label_19ddc4;
    }
    ctx->pc = 0x19DDBCu;
    SET_GPR_U32(ctx, 31, 0x19DDC4u);
    ctx->pc = 0x19DDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DDBCu;
            // 0x19ddc0: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DDC4u; }
        if (ctx->pc != 0x19DDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DDC4u; }
        if (ctx->pc != 0x19DDC4u) { return; }
    }
    ctx->pc = 0x19DDC4u;
label_19ddc4:
    // 0x19ddc4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19ddc8:
    // 0x19ddc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ddcc:
    // 0x19ddcc: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x19ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_19ddd0:
    // 0x19ddd0: 0xc06560c  jal         func_195830
label_19ddd4:
    if (ctx->pc == 0x19DDD4u) {
        ctx->pc = 0x19DDD4u;
            // 0x19ddd4: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x19DDD8u;
        goto label_19ddd8;
    }
    ctx->pc = 0x19DDD0u;
    SET_GPR_U32(ctx, 31, 0x19DDD8u);
    ctx->pc = 0x19DDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DDD0u;
            // 0x19ddd4: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DDD8u; }
        if (ctx->pc != 0x19DDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DDD8u; }
        if (ctx->pc != 0x19DDD8u) { return; }
    }
    ctx->pc = 0x19DDD8u;
label_19ddd8:
    // 0x19ddd8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dddc:
    // 0x19dddc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dde0:
    // 0x19dde0: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x19dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_19dde4:
    // 0x19dde4: 0xc06560c  jal         func_195830
label_19dde8:
    if (ctx->pc == 0x19DDE8u) {
        ctx->pc = 0x19DDE8u;
            // 0x19dde8: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19DDECu;
        goto label_19ddec;
    }
    ctx->pc = 0x19DDE4u;
    SET_GPR_U32(ctx, 31, 0x19DDECu);
    ctx->pc = 0x19DDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DDE4u;
            // 0x19dde8: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DDECu; }
        if (ctx->pc != 0x19DDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DDECu; }
        if (ctx->pc != 0x19DDECu) { return; }
    }
    ctx->pc = 0x19DDECu;
label_19ddec:
    // 0x19ddec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19ddf0:
    // 0x19ddf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ddf4:
    // 0x19ddf4: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x19ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_19ddf8:
    // 0x19ddf8: 0xc06560c  jal         func_195830
label_19ddfc:
    if (ctx->pc == 0x19DDFCu) {
        ctx->pc = 0x19DDFCu;
            // 0x19ddfc: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x19DE00u;
        goto label_19de00;
    }
    ctx->pc = 0x19DDF8u;
    SET_GPR_U32(ctx, 31, 0x19DE00u);
    ctx->pc = 0x19DDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DDF8u;
            // 0x19ddfc: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE00u; }
        if (ctx->pc != 0x19DE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE00u; }
        if (ctx->pc != 0x19DE00u) { return; }
    }
    ctx->pc = 0x19DE00u;
label_19de00:
    // 0x19de00: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19de00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19de04:
    // 0x19de04: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x19de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_19de08:
    // 0x19de08: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19de08u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19de0c:
    // 0x19de0c: 0x0  nop
    ctx->pc = 0x19de0cu;
    // NOP
label_19de10:
    // 0x19de10: 0x0  nop
    ctx->pc = 0x19de10u;
    // NOP
label_19de14:
    // 0x19de14: 0x1010  mfhi        $v0
    ctx->pc = 0x19de14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19de18:
    // 0x19de18: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_19de1c:
    if (ctx->pc == 0x19DE1Cu) {
        ctx->pc = 0x19DE20u;
        goto label_19de20;
    }
    ctx->pc = 0x19DE18u;
    {
        const bool branch_taken_0x19de18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19de18) {
            ctx->pc = 0x19DF00u;
            goto label_19df00;
        }
    }
    ctx->pc = 0x19DE20u;
label_19de20:
    // 0x19de20: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19de20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19de24:
    // 0x19de24: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19de24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19de28:
    // 0x19de28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19de28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19de2c:
    // 0x19de2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19de2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19de30:
    // 0x19de30: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19de30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19de34:
    // 0x19de34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19de34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19de38:
    // 0x19de38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19de38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19de3c:
    // 0x19de3c: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19de3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19de40:
    // 0x19de40: 0xc0655dc  jal         func_195770
label_19de44:
    if (ctx->pc == 0x19DE44u) {
        ctx->pc = 0x19DE44u;
            // 0x19de44: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DE48u;
        goto label_19de48;
    }
    ctx->pc = 0x19DE40u;
    SET_GPR_U32(ctx, 31, 0x19DE48u);
    ctx->pc = 0x19DE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE40u;
            // 0x19de44: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE48u; }
        if (ctx->pc != 0x19DE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE48u; }
        if (ctx->pc != 0x19DE48u) { return; }
    }
    ctx->pc = 0x19DE48u;
label_19de48:
    // 0x19de48: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19de48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19de4c:
    // 0x19de4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19de50:
    // 0x19de50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19de50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19de54:
    // 0x19de54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19de54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19de58:
    // 0x19de58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19de58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19de5c:
    // 0x19de5c: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19de60:
    // 0x19de60: 0xc0655dc  jal         func_195770
label_19de64:
    if (ctx->pc == 0x19DE64u) {
        ctx->pc = 0x19DE64u;
            // 0x19de64: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DE68u;
        goto label_19de68;
    }
    ctx->pc = 0x19DE60u;
    SET_GPR_U32(ctx, 31, 0x19DE68u);
    ctx->pc = 0x19DE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE60u;
            // 0x19de64: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE68u; }
        if (ctx->pc != 0x19DE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE68u; }
        if (ctx->pc != 0x19DE68u) { return; }
    }
    ctx->pc = 0x19DE68u;
label_19de68:
    // 0x19de68: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19de68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19de6c:
    // 0x19de6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19de70:
    // 0x19de70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19de74:
    // 0x19de74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19de74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19de78:
    // 0x19de78: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19de78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19de7c:
    // 0x19de7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19de7cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19de80:
    // 0x19de80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19de80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19de84:
    // 0x19de84: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x19de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_19de88:
    // 0x19de88: 0xc0655dc  jal         func_195770
label_19de8c:
    if (ctx->pc == 0x19DE8Cu) {
        ctx->pc = 0x19DE8Cu;
            // 0x19de8c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DE90u;
        goto label_19de90;
    }
    ctx->pc = 0x19DE88u;
    SET_GPR_U32(ctx, 31, 0x19DE90u);
    ctx->pc = 0x19DE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE88u;
            // 0x19de8c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE90u; }
        if (ctx->pc != 0x19DE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE90u; }
        if (ctx->pc != 0x19DE90u) { return; }
    }
    ctx->pc = 0x19DE90u;
label_19de90:
    // 0x19de90: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19de90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19de94:
    // 0x19de94: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19de94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19de98:
    // 0x19de98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19de98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19de9c:
    // 0x19de9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19de9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dea0:
    // 0x19dea0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19dea4:
    // 0x19dea4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19dea4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19dea8:
    // 0x19dea8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19dea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19deac:
    // 0x19deac: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19deacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19deb0:
    // 0x19deb0: 0xc0655dc  jal         func_195770
label_19deb4:
    if (ctx->pc == 0x19DEB4u) {
        ctx->pc = 0x19DEB4u;
            // 0x19deb4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DEB8u;
        goto label_19deb8;
    }
    ctx->pc = 0x19DEB0u;
    SET_GPR_U32(ctx, 31, 0x19DEB8u);
    ctx->pc = 0x19DEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DEB0u;
            // 0x19deb4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DEB8u; }
        if (ctx->pc != 0x19DEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DEB8u; }
        if (ctx->pc != 0x19DEB8u) { return; }
    }
    ctx->pc = 0x19DEB8u;
label_19deb8:
    // 0x19deb8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19debc:
    // 0x19debc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19debcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19dec0:
    // 0x19dec0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dec4:
    // 0x19dec4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19dec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dec8:
    // 0x19dec8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19dec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19decc:
    // 0x19decc: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19deccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19ded0:
    // 0x19ded0: 0xc0655dc  jal         func_195770
label_19ded4:
    if (ctx->pc == 0x19DED4u) {
        ctx->pc = 0x19DED4u;
            // 0x19ded4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DED8u;
        goto label_19ded8;
    }
    ctx->pc = 0x19DED0u;
    SET_GPR_U32(ctx, 31, 0x19DED8u);
    ctx->pc = 0x19DED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DED0u;
            // 0x19ded4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DED8u; }
        if (ctx->pc != 0x19DED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DED8u; }
        if (ctx->pc != 0x19DED8u) { return; }
    }
    ctx->pc = 0x19DED8u;
label_19ded8:
    // 0x19ded8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19ded8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dedc:
    // 0x19dedc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19dee0:
    // 0x19dee0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dee4:
    // 0x19dee4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dee8:
    // 0x19dee8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19deec:
    // 0x19deec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19deecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19def0:
    // 0x19def0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19def0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19def4:
    // 0x19def4: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x19def4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_19def8:
    // 0x19def8: 0xc0655dc  jal         func_195770
label_19defc:
    if (ctx->pc == 0x19DEFCu) {
        ctx->pc = 0x19DEFCu;
            // 0x19defc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x19DF00u;
        goto label_19df00;
    }
    ctx->pc = 0x19DEF8u;
    SET_GPR_U32(ctx, 31, 0x19DF00u);
    ctx->pc = 0x19DEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DEF8u;
            // 0x19defc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF00u; }
        if (ctx->pc != 0x19DF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF00u; }
        if (ctx->pc != 0x19DF00u) { return; }
    }
    ctx->pc = 0x19DF00u;
label_19df00:
    // 0x19df00: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19df00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19df04:
    // 0x19df04: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x19df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_19df08:
    // 0x19df08: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19df08u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19df0c:
    // 0x19df0c: 0x0  nop
    ctx->pc = 0x19df0cu;
    // NOP
label_19df10:
    // 0x19df10: 0x0  nop
    ctx->pc = 0x19df10u;
    // NOP
label_19df14:
    // 0x19df14: 0x1010  mfhi        $v0
    ctx->pc = 0x19df14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19df18:
    // 0x19df18: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_19df1c:
    if (ctx->pc == 0x19DF1Cu) {
        ctx->pc = 0x19DF1Cu;
            // 0x19df1c: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->pc = 0x19DF20u;
        goto label_19df20;
    }
    ctx->pc = 0x19DF18u;
    {
        const bool branch_taken_0x19df18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF18u;
            // 0x19df1c: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df18) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19DF20u;
label_19df20:
    // 0x19df20: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19df20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19df24:
    // 0x19df24: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19df24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19df28:
    // 0x19df28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19df28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19df2c:
    // 0x19df2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19df2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19df30:
    // 0x19df30: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19df30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19df34:
    // 0x19df34: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19df34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19df38:
    // 0x19df38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19df38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19df3c:
    // 0x19df3c: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x19df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_19df40:
    // 0x19df40: 0xc0655dc  jal         func_195770
label_19df44:
    if (ctx->pc == 0x19DF44u) {
        ctx->pc = 0x19DF44u;
            // 0x19df44: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19DF48u;
        goto label_19df48;
    }
    ctx->pc = 0x19DF40u;
    SET_GPR_U32(ctx, 31, 0x19DF48u);
    ctx->pc = 0x19DF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF40u;
            // 0x19df44: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF48u; }
        if (ctx->pc != 0x19DF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF48u; }
        if (ctx->pc != 0x19DF48u) { return; }
    }
    ctx->pc = 0x19DF48u;
label_19df48:
    // 0x19df48: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19df48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19df4c:
    // 0x19df4c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19df50:
    // 0x19df50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19df50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19df54:
    // 0x19df54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19df54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19df58:
    // 0x19df58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19df58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19df5c:
    // 0x19df5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19df5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19df60:
    // 0x19df60: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x19df60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_19df64:
    // 0x19df64: 0xc0655dc  jal         func_195770
label_19df68:
    if (ctx->pc == 0x19DF68u) {
        ctx->pc = 0x19DF68u;
            // 0x19df68: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19DF6Cu;
        goto label_19df6c;
    }
    ctx->pc = 0x19DF64u;
    SET_GPR_U32(ctx, 31, 0x19DF6Cu);
    ctx->pc = 0x19DF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF64u;
            // 0x19df68: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF6Cu; }
        if (ctx->pc != 0x19DF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF6Cu; }
        if (ctx->pc != 0x19DF6Cu) { return; }
    }
    ctx->pc = 0x19DF6Cu;
label_19df6c:
    // 0x19df6c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19df70:
    // 0x19df70: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19df70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19df74:
    // 0x19df74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19df74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19df78:
    // 0x19df78: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19df78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19df7c:
    // 0x19df7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19df7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19df80:
    // 0x19df80: 0x0  nop
    ctx->pc = 0x19df80u;
    // NOP
label_19df84:
    // 0x19df84: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19df84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19df88:
    // 0x19df88: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x19df88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_19df8c:
    // 0x19df8c: 0xc0655dc  jal         func_195770
label_19df90:
    if (ctx->pc == 0x19DF90u) {
        ctx->pc = 0x19DF90u;
            // 0x19df90: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19DF94u;
        goto label_19df94;
    }
    ctx->pc = 0x19DF8Cu;
    SET_GPR_U32(ctx, 31, 0x19DF94u);
    ctx->pc = 0x19DF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF8Cu;
            // 0x19df90: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF94u; }
        if (ctx->pc != 0x19DF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF94u; }
        if (ctx->pc != 0x19DF94u) { return; }
    }
    ctx->pc = 0x19DF94u;
label_19df94:
    // 0x19df94: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x19df94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_19df98:
    // 0x19df98: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19df98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19df9c:
    // 0x19df9c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19df9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19dfa0:
    // 0x19dfa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dfa4:
    // 0x19dfa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dfa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dfa8:
    // 0x19dfa8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19dfac:
    // 0x19dfac: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19dfacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19dfb0:
    // 0x19dfb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19dfb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19dfb4:
    // 0x19dfb4: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x19dfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_19dfb8:
    // 0x19dfb8: 0xc0655dc  jal         func_195770
label_19dfbc:
    if (ctx->pc == 0x19DFBCu) {
        ctx->pc = 0x19DFBCu;
            // 0x19dfbc: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19DFC0u;
        goto label_19dfc0;
    }
    ctx->pc = 0x19DFB8u;
    SET_GPR_U32(ctx, 31, 0x19DFC0u);
    ctx->pc = 0x19DFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DFB8u;
            // 0x19dfbc: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DFC0u; }
        if (ctx->pc != 0x19DFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DFC0u; }
        if (ctx->pc != 0x19DFC0u) { return; }
    }
    ctx->pc = 0x19DFC0u;
label_19dfc0:
    // 0x19dfc0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dfc4:
    // 0x19dfc4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19dfc8:
    // 0x19dfc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dfcc:
    // 0x19dfcc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19dfccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_19dfd0:
    // 0x19dfd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19dfd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dfd4:
    // 0x19dfd4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19dfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19dfd8:
    // 0x19dfd8: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x19dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_19dfdc:
    // 0x19dfdc: 0xc0655dc  jal         func_195770
label_19dfe0:
    if (ctx->pc == 0x19DFE0u) {
        ctx->pc = 0x19DFE0u;
            // 0x19dfe0: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19DFE4u;
        goto label_19dfe4;
    }
    ctx->pc = 0x19DFDCu;
    SET_GPR_U32(ctx, 31, 0x19DFE4u);
    ctx->pc = 0x19DFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DFDCu;
            // 0x19dfe0: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DFE4u; }
        if (ctx->pc != 0x19DFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DFE4u; }
        if (ctx->pc != 0x19DFE4u) { return; }
    }
    ctx->pc = 0x19DFE4u;
label_19dfe4:
    // 0x19dfe4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x19dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19dfe8:
    // 0x19dfe8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_19dfec:
    // 0x19dfec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19dff0:
    // 0x19dff0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19dff0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_19dff4:
    // 0x19dff4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dff8:
    // 0x19dff8: 0x0  nop
    ctx->pc = 0x19dff8u;
    // NOP
label_19dffc:
    // 0x19dffc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19dffcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e000:
    // 0x19e000: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x19e000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_19e004:
    // 0x19e004: 0xc0655dc  jal         func_195770
label_19e008:
    if (ctx->pc == 0x19E008u) {
        ctx->pc = 0x19E008u;
            // 0x19e008: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x19E00Cu;
        goto label_19e00c;
    }
    ctx->pc = 0x19E004u;
    SET_GPR_U32(ctx, 31, 0x19E00Cu);
    ctx->pc = 0x19E008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E004u;
            // 0x19e008: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E00Cu; }
        if (ctx->pc != 0x19E00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E00Cu; }
        if (ctx->pc != 0x19E00Cu) { return; }
    }
    ctx->pc = 0x19E00Cu;
label_19e00c:
    // 0x19e00c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_19e010:
    if (ctx->pc == 0x19E010u) {
        ctx->pc = 0x19E014u;
        goto label_19e014;
    }
    ctx->pc = 0x19E00Cu;
    {
        const bool branch_taken_0x19e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e00c) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19E014u;
label_19e014:
    // 0x19e014: 0x0  nop
    ctx->pc = 0x19e014u;
    // NOP
label_19e018:
    // 0x19e018: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19e018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19e01c:
    // 0x19e01c: 0x1482001a  bne         $a0, $v0, . + 4 + (0x1A << 2)
label_19e020:
    if (ctx->pc == 0x19E020u) {
        ctx->pc = 0x19E024u;
        goto label_19e024;
    }
    ctx->pc = 0x19E01Cu;
    {
        const bool branch_taken_0x19e01c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e01c) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19E024u;
label_19e024:
    // 0x19e024: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x19e024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e028:
    // 0x19e028: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x19e028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_19e02c:
    // 0x19e02c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19e02cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19e030:
    // 0x19e030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e034:
    // 0x19e034: 0x0  nop
    ctx->pc = 0x19e034u;
    // NOP
label_19e038:
    // 0x19e038: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19e038u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19e03c:
    // 0x19e03c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x19e03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_19e040:
    // 0x19e040: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x19e040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19e044:
    // 0x19e044: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19e044u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19e048:
    // 0x19e048: 0x0  nop
    ctx->pc = 0x19e048u;
    // NOP
label_19e04c:
    // 0x19e04c: 0x0  nop
    ctx->pc = 0x19e04cu;
    // NOP
label_19e050:
    // 0x19e050: 0x1010  mfhi        $v0
    ctx->pc = 0x19e050u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e054:
    // 0x19e054: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_19e058:
    if (ctx->pc == 0x19E058u) {
        ctx->pc = 0x19E05Cu;
        goto label_19e05c;
    }
    ctx->pc = 0x19E054u;
    {
        const bool branch_taken_0x19e054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e054) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19E05Cu;
label_19e05c:
    // 0x19e05c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19e060:
    // 0x19e060: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19e060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19e064:
    // 0x19e064: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x19e064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_19e068:
    // 0x19e068: 0xc065590  jal         func_195640
label_19e06c:
    if (ctx->pc == 0x19E06Cu) {
        ctx->pc = 0x19E06Cu;
            // 0x19e06c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19E070u;
        goto label_19e070;
    }
    ctx->pc = 0x19E068u;
    SET_GPR_U32(ctx, 31, 0x19E070u);
    ctx->pc = 0x19E06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E068u;
            // 0x19e06c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E070u; }
        if (ctx->pc != 0x19E070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E070u; }
        if (ctx->pc != 0x19E070u) { return; }
    }
    ctx->pc = 0x19E070u;
label_19e070:
    // 0x19e070: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19e070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19e074:
    // 0x19e074: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19e078:
    // 0x19e078: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x19e078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_19e07c:
    // 0x19e07c: 0xc065590  jal         func_195640
label_19e080:
    if (ctx->pc == 0x19E080u) {
        ctx->pc = 0x19E080u;
            // 0x19e080: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19E084u;
        goto label_19e084;
    }
    ctx->pc = 0x19E07Cu;
    SET_GPR_U32(ctx, 31, 0x19E084u);
    ctx->pc = 0x19E080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E07Cu;
            // 0x19e080: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E084u; }
        if (ctx->pc != 0x19E084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E084u; }
        if (ctx->pc != 0x19E084u) { return; }
    }
    ctx->pc = 0x19E084u;
label_19e084:
    // 0x19e084: 0x0  nop
    ctx->pc = 0x19e084u;
    // NOP
label_19e088:
    // 0x19e088: 0xc04b788  jal         func_12DE20
label_19e08c:
    if (ctx->pc == 0x19E08Cu) {
        ctx->pc = 0x19E08Cu;
            // 0x19e08c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19E090u;
        goto label_19e090;
    }
    ctx->pc = 0x19E088u;
    SET_GPR_U32(ctx, 31, 0x19E090u);
    ctx->pc = 0x19E08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E088u;
            // 0x19e08c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E090u; }
        if (ctx->pc != 0x19E090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E090u; }
        if (ctx->pc != 0x19E090u) { return; }
    }
    ctx->pc = 0x19E090u;
label_19e090:
    // 0x19e090: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19e090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19e094:
    // 0x19e094: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x19e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19e098:
    // 0x19e098: 0xc04b7da  jal         func_12DF68
label_19e09c:
    if (ctx->pc == 0x19E09Cu) {
        ctx->pc = 0x19E09Cu;
            // 0x19e09c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E0A0u;
        goto label_19e0a0;
    }
    ctx->pc = 0x19E098u;
    SET_GPR_U32(ctx, 31, 0x19E0A0u);
    ctx->pc = 0x19E09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E098u;
            // 0x19e09c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0A0u; }
        if (ctx->pc != 0x19E0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0A0u; }
        if (ctx->pc != 0x19E0A0u) { return; }
    }
    ctx->pc = 0x19E0A0u;
label_19e0a0:
    // 0x19e0a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19e0a4:
    // 0x19e0a4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x19e0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19e0a8:
    // 0x19e0a8: 0xc04b804  jal         func_12E010
label_19e0ac:
    if (ctx->pc == 0x19E0ACu) {
        ctx->pc = 0x19E0ACu;
            // 0x19e0ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E0B0u;
        goto label_19e0b0;
    }
    ctx->pc = 0x19E0A8u;
    SET_GPR_U32(ctx, 31, 0x19E0B0u);
    ctx->pc = 0x19E0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E0A8u;
            // 0x19e0ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0B0u; }
        if (ctx->pc != 0x19E0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0B0u; }
        if (ctx->pc != 0x19E0B0u) { return; }
    }
    ctx->pc = 0x19E0B0u;
label_19e0b0:
    // 0x19e0b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19e0b4:
    // 0x19e0b4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x19e0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19e0b8:
    // 0x19e0b8: 0xc04b7b0  jal         func_12DEC0
label_19e0bc:
    if (ctx->pc == 0x19E0BCu) {
        ctx->pc = 0x19E0BCu;
            // 0x19e0bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E0C0u;
        goto label_19e0c0;
    }
    ctx->pc = 0x19E0B8u;
    SET_GPR_U32(ctx, 31, 0x19E0C0u);
    ctx->pc = 0x19E0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E0B8u;
            // 0x19e0bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0C0u; }
        if (ctx->pc != 0x19E0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0C0u; }
        if (ctx->pc != 0x19E0C0u) { return; }
    }
    ctx->pc = 0x19E0C0u;
label_19e0c0:
    // 0x19e0c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19e0c4:
    // 0x19e0c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19e0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e0c8:
    // 0x19e0c8: 0xc04b75e  jal         func_12DD78
label_19e0cc:
    if (ctx->pc == 0x19E0CCu) {
        ctx->pc = 0x19E0CCu;
            // 0x19e0cc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x19E0D0u;
        goto label_19e0d0;
    }
    ctx->pc = 0x19E0C8u;
    SET_GPR_U32(ctx, 31, 0x19E0D0u);
    ctx->pc = 0x19E0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E0C8u;
            // 0x19e0cc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0D0u; }
        if (ctx->pc != 0x19E0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0D0u; }
        if (ctx->pc != 0x19E0D0u) { return; }
    }
    ctx->pc = 0x19E0D0u;
label_19e0d0:
    // 0x19e0d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19e0d4:
    // 0x19e0d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x19e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_19e0d8:
    // 0x19e0d8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19e0d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19e0dc:
    // 0x19e0dc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_19e0e0:
    if (ctx->pc == 0x19E0E0u) {
        ctx->pc = 0x19E0E4u;
        goto label_19e0e4;
    }
    ctx->pc = 0x19E0DCu;
    {
        const bool branch_taken_0x19e0dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e0dc) {
            ctx->pc = 0x19E130u;
            goto label_19e130;
        }
    }
    ctx->pc = 0x19E0E4u;
label_19e0e4:
    // 0x19e0e4: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x19e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_19e0e8:
    // 0x19e0e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19e0ec:
    if (ctx->pc == 0x19E0ECu) {
        ctx->pc = 0x19E0F0u;
        goto label_19e0f0;
    }
    ctx->pc = 0x19E0E8u;
    {
        const bool branch_taken_0x19e0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e0e8) {
            ctx->pc = 0x19E100u;
            goto label_19e100;
        }
    }
    ctx->pc = 0x19E0F0u;
label_19e0f0:
    // 0x19e0f0: 0xc0604f0  jal         func_1813C0
label_19e0f4:
    if (ctx->pc == 0x19E0F4u) {
        ctx->pc = 0x19E0F4u;
            // 0x19e0f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19E0F8u;
        goto label_19e0f8;
    }
    ctx->pc = 0x19E0F0u;
    SET_GPR_U32(ctx, 31, 0x19E0F8u);
    ctx->pc = 0x19E0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E0F0u;
            // 0x19e0f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0F8u; }
        if (ctx->pc != 0x19E0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0F8u; }
        if (ctx->pc != 0x19E0F8u) { return; }
    }
    ctx->pc = 0x19E0F8u;
label_19e0f8:
    // 0x19e0f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_19e0fc:
    if (ctx->pc == 0x19E0FCu) {
        ctx->pc = 0x19E100u;
        goto label_19e100;
    }
    ctx->pc = 0x19E0F8u;
    {
        const bool branch_taken_0x19e0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e0f8) {
            ctx->pc = 0x19E108u;
            goto label_19e108;
        }
    }
    ctx->pc = 0x19E100u;
label_19e100:
    // 0x19e100: 0xc0604dc  jal         func_181370
label_19e104:
    if (ctx->pc == 0x19E104u) {
        ctx->pc = 0x19E104u;
            // 0x19e104: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19E108u;
        goto label_19e108;
    }
    ctx->pc = 0x19E100u;
    SET_GPR_U32(ctx, 31, 0x19E108u);
    ctx->pc = 0x19E104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E100u;
            // 0x19e104: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E108u; }
        if (ctx->pc != 0x19E108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E108u; }
        if (ctx->pc != 0x19E108u) { return; }
    }
    ctx->pc = 0x19E108u;
label_19e108:
    // 0x19e108: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x19e108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_19e10c:
    // 0x19e10c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_19e110:
    if (ctx->pc == 0x19E110u) {
        ctx->pc = 0x19E114u;
        goto label_19e114;
    }
    ctx->pc = 0x19E10Cu;
    {
        const bool branch_taken_0x19e10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e10c) {
            ctx->pc = 0x19E120u;
            goto label_19e120;
        }
    }
    ctx->pc = 0x19E114u;
label_19e114:
    // 0x19e114: 0x1000000a  b           . + 4 + (0xA << 2)
label_19e118:
    if (ctx->pc == 0x19E118u) {
        ctx->pc = 0x19E118u;
            // 0x19e118: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x19E11Cu;
        goto label_19e11c;
    }
    ctx->pc = 0x19E114u;
    {
        const bool branch_taken_0x19e114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E114u;
            // 0x19e118: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e114) {
            ctx->pc = 0x19E140u;
            goto label_19e140;
        }
    }
    ctx->pc = 0x19E11Cu;
label_19e11c:
    // 0x19e11c: 0x0  nop
    ctx->pc = 0x19e11cu;
    // NOP
label_19e120:
    // 0x19e120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e124:
    // 0x19e124: 0x10000006  b           . + 4 + (0x6 << 2)
label_19e128:
    if (ctx->pc == 0x19E128u) {
        ctx->pc = 0x19E128u;
            // 0x19e128: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->pc = 0x19E12Cu;
        goto label_19e12c;
    }
    ctx->pc = 0x19E124u;
    {
        const bool branch_taken_0x19e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E124u;
            // 0x19e128: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e124) {
            ctx->pc = 0x19E140u;
            goto label_19e140;
        }
    }
    ctx->pc = 0x19E12Cu;
label_19e12c:
    // 0x19e12c: 0x0  nop
    ctx->pc = 0x19e12cu;
    // NOP
label_19e130:
    // 0x19e130: 0xc0604dc  jal         func_181370
label_19e134:
    if (ctx->pc == 0x19E134u) {
        ctx->pc = 0x19E134u;
            // 0x19e134: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19E138u;
        goto label_19e138;
    }
    ctx->pc = 0x19E130u;
    SET_GPR_U32(ctx, 31, 0x19E138u);
    ctx->pc = 0x19E134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E130u;
            // 0x19e134: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E138u; }
        if (ctx->pc != 0x19E138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E138u; }
        if (ctx->pc != 0x19E138u) { return; }
    }
    ctx->pc = 0x19E138u;
label_19e138:
    // 0x19e138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e13c:
    // 0x19e13c: 0xae030110  sw          $v1, 0x110($s0)
    ctx->pc = 0x19e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
label_19e140:
    // 0x19e140: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x19e140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19e144:
    // 0x19e144: 0x3c03c270  lui         $v1, 0xC270
    ctx->pc = 0x19e144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49776 << 16));
label_19e148:
    // 0x19e148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19e148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e14c:
    // 0x19e14c: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x19e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_19e150:
    // 0x19e150: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19e150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19e154:
    // 0x19e154: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19e154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19e158:
    // 0x19e158: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x19e158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_19e15c:
    // 0x19e15c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19e160:
    // 0x19e160: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x19e160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e164:
    // 0x19e164: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19e164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19e168:
    // 0x19e168: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_19e16c:
    if (ctx->pc == 0x19E16Cu) {
        ctx->pc = 0x19E170u;
        goto label_19e170;
    }
    ctx->pc = 0x19E168u;
    {
        const bool branch_taken_0x19e168 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e168) {
            ctx->pc = 0x19E190u;
            goto label_19e190;
        }
    }
    ctx->pc = 0x19E170u;
label_19e170:
    // 0x19e170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e174:
    // 0x19e174: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19e174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
label_19e178:
    // 0x19e178: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x19e178u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_19e17c:
    // 0x19e17c: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x19e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_19e180:
    // 0x19e180: 0x40f809  jalr        $v0
label_19e184:
    if (ctx->pc == 0x19E184u) {
        ctx->pc = 0x19E184u;
            // 0x19e184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E188u;
        goto label_19e188;
    }
    ctx->pc = 0x19E180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E188u);
        ctx->pc = 0x19E184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E180u;
            // 0x19e184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CC50u: goto label_19cc50;
            case 0x19CC54u: goto label_19cc54;
            case 0x19CC58u: goto label_19cc58;
            case 0x19CC5Cu: goto label_19cc5c;
            case 0x19CC60u: goto label_19cc60;
            case 0x19CC64u: goto label_19cc64;
            case 0x19CC68u: goto label_19cc68;
            case 0x19CC6Cu: goto label_19cc6c;
            case 0x19CC70u: goto label_19cc70;
            case 0x19CC74u: goto label_19cc74;
            case 0x19CC78u: goto label_19cc78;
            case 0x19CC7Cu: goto label_19cc7c;
            case 0x19CC80u: goto label_19cc80;
            case 0x19CC84u: goto label_19cc84;
            case 0x19CC88u: goto label_19cc88;
            case 0x19CC8Cu: goto label_19cc8c;
            case 0x19CC90u: goto label_19cc90;
            case 0x19CC94u: goto label_19cc94;
            case 0x19CC98u: goto label_19cc98;
            case 0x19CC9Cu: goto label_19cc9c;
            case 0x19CCA0u: goto label_19cca0;
            case 0x19CCA4u: goto label_19cca4;
            case 0x19CCA8u: goto label_19cca8;
            case 0x19CCACu: goto label_19ccac;
            case 0x19CCB0u: goto label_19ccb0;
            case 0x19CCB4u: goto label_19ccb4;
            case 0x19CCB8u: goto label_19ccb8;
            case 0x19CCBCu: goto label_19ccbc;
            case 0x19CCC0u: goto label_19ccc0;
            case 0x19CCC4u: goto label_19ccc4;
            case 0x19CCC8u: goto label_19ccc8;
            case 0x19CCCCu: goto label_19cccc;
            case 0x19CCD0u: goto label_19ccd0;
            case 0x19CCD4u: goto label_19ccd4;
            case 0x19CCD8u: goto label_19ccd8;
            case 0x19CCDCu: goto label_19ccdc;
            case 0x19CCE0u: goto label_19cce0;
            case 0x19CCE4u: goto label_19cce4;
            case 0x19CCE8u: goto label_19cce8;
            case 0x19CCECu: goto label_19ccec;
            case 0x19CCF0u: goto label_19ccf0;
            case 0x19CCF4u: goto label_19ccf4;
            case 0x19CCF8u: goto label_19ccf8;
            case 0x19CCFCu: goto label_19ccfc;
            case 0x19CD00u: goto label_19cd00;
            case 0x19CD04u: goto label_19cd04;
            case 0x19CD08u: goto label_19cd08;
            case 0x19CD0Cu: goto label_19cd0c;
            case 0x19CD10u: goto label_19cd10;
            case 0x19CD14u: goto label_19cd14;
            case 0x19CD18u: goto label_19cd18;
            case 0x19CD1Cu: goto label_19cd1c;
            case 0x19CD20u: goto label_19cd20;
            case 0x19CD24u: goto label_19cd24;
            case 0x19CD28u: goto label_19cd28;
            case 0x19CD2Cu: goto label_19cd2c;
            case 0x19CD30u: goto label_19cd30;
            case 0x19CD34u: goto label_19cd34;
            case 0x19CD38u: goto label_19cd38;
            case 0x19CD3Cu: goto label_19cd3c;
            case 0x19CD40u: goto label_19cd40;
            case 0x19CD44u: goto label_19cd44;
            case 0x19CD48u: goto label_19cd48;
            case 0x19CD4Cu: goto label_19cd4c;
            case 0x19CD50u: goto label_19cd50;
            case 0x19CD54u: goto label_19cd54;
            case 0x19CD58u: goto label_19cd58;
            case 0x19CD5Cu: goto label_19cd5c;
            case 0x19CD60u: goto label_19cd60;
            case 0x19CD64u: goto label_19cd64;
            case 0x19CD68u: goto label_19cd68;
            case 0x19CD6Cu: goto label_19cd6c;
            case 0x19CD70u: goto label_19cd70;
            case 0x19CD74u: goto label_19cd74;
            case 0x19CD78u: goto label_19cd78;
            case 0x19CD7Cu: goto label_19cd7c;
            case 0x19CD80u: goto label_19cd80;
            case 0x19CD84u: goto label_19cd84;
            case 0x19CD88u: goto label_19cd88;
            case 0x19CD8Cu: goto label_19cd8c;
            case 0x19CD90u: goto label_19cd90;
            case 0x19CD94u: goto label_19cd94;
            case 0x19CD98u: goto label_19cd98;
            case 0x19CD9Cu: goto label_19cd9c;
            case 0x19CDA0u: goto label_19cda0;
            case 0x19CDA4u: goto label_19cda4;
            case 0x19CDA8u: goto label_19cda8;
            case 0x19CDACu: goto label_19cdac;
            case 0x19CDB0u: goto label_19cdb0;
            case 0x19CDB4u: goto label_19cdb4;
            case 0x19CDB8u: goto label_19cdb8;
            case 0x19CDBCu: goto label_19cdbc;
            case 0x19CDC0u: goto label_19cdc0;
            case 0x19CDC4u: goto label_19cdc4;
            case 0x19CDC8u: goto label_19cdc8;
            case 0x19CDCCu: goto label_19cdcc;
            case 0x19CDD0u: goto label_19cdd0;
            case 0x19CDD4u: goto label_19cdd4;
            case 0x19CDD8u: goto label_19cdd8;
            case 0x19CDDCu: goto label_19cddc;
            case 0x19CDE0u: goto label_19cde0;
            case 0x19CDE4u: goto label_19cde4;
            case 0x19CDE8u: goto label_19cde8;
            case 0x19CDECu: goto label_19cdec;
            case 0x19CDF0u: goto label_19cdf0;
            case 0x19CDF4u: goto label_19cdf4;
            case 0x19CDF8u: goto label_19cdf8;
            case 0x19CDFCu: goto label_19cdfc;
            case 0x19CE00u: goto label_19ce00;
            case 0x19CE04u: goto label_19ce04;
            case 0x19CE08u: goto label_19ce08;
            case 0x19CE0Cu: goto label_19ce0c;
            case 0x19CE10u: goto label_19ce10;
            case 0x19CE14u: goto label_19ce14;
            case 0x19CE18u: goto label_19ce18;
            case 0x19CE1Cu: goto label_19ce1c;
            case 0x19CE20u: goto label_19ce20;
            case 0x19CE24u: goto label_19ce24;
            case 0x19CE28u: goto label_19ce28;
            case 0x19CE2Cu: goto label_19ce2c;
            case 0x19CE30u: goto label_19ce30;
            case 0x19CE34u: goto label_19ce34;
            case 0x19CE38u: goto label_19ce38;
            case 0x19CE3Cu: goto label_19ce3c;
            case 0x19CE40u: goto label_19ce40;
            case 0x19CE44u: goto label_19ce44;
            case 0x19CE48u: goto label_19ce48;
            case 0x19CE4Cu: goto label_19ce4c;
            case 0x19CE50u: goto label_19ce50;
            case 0x19CE54u: goto label_19ce54;
            case 0x19CE58u: goto label_19ce58;
            case 0x19CE5Cu: goto label_19ce5c;
            case 0x19CE60u: goto label_19ce60;
            case 0x19CE64u: goto label_19ce64;
            case 0x19CE68u: goto label_19ce68;
            case 0x19CE6Cu: goto label_19ce6c;
            case 0x19CE70u: goto label_19ce70;
            case 0x19CE74u: goto label_19ce74;
            case 0x19CE78u: goto label_19ce78;
            case 0x19CE7Cu: goto label_19ce7c;
            case 0x19CE80u: goto label_19ce80;
            case 0x19CE84u: goto label_19ce84;
            case 0x19CE88u: goto label_19ce88;
            case 0x19CE8Cu: goto label_19ce8c;
            case 0x19CE90u: goto label_19ce90;
            case 0x19CE94u: goto label_19ce94;
            case 0x19CE98u: goto label_19ce98;
            case 0x19CE9Cu: goto label_19ce9c;
            case 0x19CEA0u: goto label_19cea0;
            case 0x19CEA4u: goto label_19cea4;
            case 0x19CEA8u: goto label_19cea8;
            case 0x19CEACu: goto label_19ceac;
            case 0x19CEB0u: goto label_19ceb0;
            case 0x19CEB4u: goto label_19ceb4;
            case 0x19CEB8u: goto label_19ceb8;
            case 0x19CEBCu: goto label_19cebc;
            case 0x19CEC0u: goto label_19cec0;
            case 0x19CEC4u: goto label_19cec4;
            case 0x19CEC8u: goto label_19cec8;
            case 0x19CECCu: goto label_19cecc;
            case 0x19CED0u: goto label_19ced0;
            case 0x19CED4u: goto label_19ced4;
            case 0x19CED8u: goto label_19ced8;
            case 0x19CEDCu: goto label_19cedc;
            case 0x19CEE0u: goto label_19cee0;
            case 0x19CEE4u: goto label_19cee4;
            case 0x19CEE8u: goto label_19cee8;
            case 0x19CEECu: goto label_19ceec;
            case 0x19CEF0u: goto label_19cef0;
            case 0x19CEF4u: goto label_19cef4;
            case 0x19CEF8u: goto label_19cef8;
            case 0x19CEFCu: goto label_19cefc;
            case 0x19CF00u: goto label_19cf00;
            case 0x19CF04u: goto label_19cf04;
            case 0x19CF08u: goto label_19cf08;
            case 0x19CF0Cu: goto label_19cf0c;
            case 0x19CF10u: goto label_19cf10;
            case 0x19CF14u: goto label_19cf14;
            case 0x19CF18u: goto label_19cf18;
            case 0x19CF1Cu: goto label_19cf1c;
            case 0x19CF20u: goto label_19cf20;
            case 0x19CF24u: goto label_19cf24;
            case 0x19CF28u: goto label_19cf28;
            case 0x19CF2Cu: goto label_19cf2c;
            case 0x19CF30u: goto label_19cf30;
            case 0x19CF34u: goto label_19cf34;
            case 0x19CF38u: goto label_19cf38;
            case 0x19CF3Cu: goto label_19cf3c;
            case 0x19CF40u: goto label_19cf40;
            case 0x19CF44u: goto label_19cf44;
            case 0x19CF48u: goto label_19cf48;
            case 0x19CF4Cu: goto label_19cf4c;
            case 0x19CF50u: goto label_19cf50;
            case 0x19CF54u: goto label_19cf54;
            case 0x19CF58u: goto label_19cf58;
            case 0x19CF5Cu: goto label_19cf5c;
            case 0x19CF60u: goto label_19cf60;
            case 0x19CF64u: goto label_19cf64;
            case 0x19CF68u: goto label_19cf68;
            case 0x19CF6Cu: goto label_19cf6c;
            case 0x19CF70u: goto label_19cf70;
            case 0x19CF74u: goto label_19cf74;
            case 0x19CF78u: goto label_19cf78;
            case 0x19CF7Cu: goto label_19cf7c;
            case 0x19CF80u: goto label_19cf80;
            case 0x19CF84u: goto label_19cf84;
            case 0x19CF88u: goto label_19cf88;
            case 0x19CF8Cu: goto label_19cf8c;
            case 0x19CF90u: goto label_19cf90;
            case 0x19CF94u: goto label_19cf94;
            case 0x19CF98u: goto label_19cf98;
            case 0x19CF9Cu: goto label_19cf9c;
            case 0x19CFA0u: goto label_19cfa0;
            case 0x19CFA4u: goto label_19cfa4;
            case 0x19CFA8u: goto label_19cfa8;
            case 0x19CFACu: goto label_19cfac;
            case 0x19CFB0u: goto label_19cfb0;
            case 0x19CFB4u: goto label_19cfb4;
            case 0x19CFB8u: goto label_19cfb8;
            case 0x19CFBCu: goto label_19cfbc;
            case 0x19CFC0u: goto label_19cfc0;
            case 0x19CFC4u: goto label_19cfc4;
            case 0x19CFC8u: goto label_19cfc8;
            case 0x19CFCCu: goto label_19cfcc;
            case 0x19CFD0u: goto label_19cfd0;
            case 0x19CFD4u: goto label_19cfd4;
            case 0x19CFD8u: goto label_19cfd8;
            case 0x19CFDCu: goto label_19cfdc;
            case 0x19CFE0u: goto label_19cfe0;
            case 0x19CFE4u: goto label_19cfe4;
            case 0x19CFE8u: goto label_19cfe8;
            case 0x19CFECu: goto label_19cfec;
            case 0x19CFF0u: goto label_19cff0;
            case 0x19CFF4u: goto label_19cff4;
            case 0x19CFF8u: goto label_19cff8;
            case 0x19CFFCu: goto label_19cffc;
            case 0x19D000u: goto label_19d000;
            case 0x19D004u: goto label_19d004;
            case 0x19D008u: goto label_19d008;
            case 0x19D00Cu: goto label_19d00c;
            case 0x19D010u: goto label_19d010;
            case 0x19D014u: goto label_19d014;
            case 0x19D018u: goto label_19d018;
            case 0x19D01Cu: goto label_19d01c;
            case 0x19D020u: goto label_19d020;
            case 0x19D024u: goto label_19d024;
            case 0x19D028u: goto label_19d028;
            case 0x19D02Cu: goto label_19d02c;
            case 0x19D030u: goto label_19d030;
            case 0x19D034u: goto label_19d034;
            case 0x19D038u: goto label_19d038;
            case 0x19D03Cu: goto label_19d03c;
            case 0x19D040u: goto label_19d040;
            case 0x19D044u: goto label_19d044;
            case 0x19D048u: goto label_19d048;
            case 0x19D04Cu: goto label_19d04c;
            case 0x19D050u: goto label_19d050;
            case 0x19D054u: goto label_19d054;
            case 0x19D058u: goto label_19d058;
            case 0x19D05Cu: goto label_19d05c;
            case 0x19D060u: goto label_19d060;
            case 0x19D064u: goto label_19d064;
            case 0x19D068u: goto label_19d068;
            case 0x19D06Cu: goto label_19d06c;
            case 0x19D070u: goto label_19d070;
            case 0x19D074u: goto label_19d074;
            case 0x19D078u: goto label_19d078;
            case 0x19D07Cu: goto label_19d07c;
            case 0x19D080u: goto label_19d080;
            case 0x19D084u: goto label_19d084;
            case 0x19D088u: goto label_19d088;
            case 0x19D08Cu: goto label_19d08c;
            case 0x19D090u: goto label_19d090;
            case 0x19D094u: goto label_19d094;
            case 0x19D098u: goto label_19d098;
            case 0x19D09Cu: goto label_19d09c;
            case 0x19D0A0u: goto label_19d0a0;
            case 0x19D0A4u: goto label_19d0a4;
            case 0x19D0A8u: goto label_19d0a8;
            case 0x19D0ACu: goto label_19d0ac;
            case 0x19D0B0u: goto label_19d0b0;
            case 0x19D0B4u: goto label_19d0b4;
            case 0x19D0B8u: goto label_19d0b8;
            case 0x19D0BCu: goto label_19d0bc;
            case 0x19D0C0u: goto label_19d0c0;
            case 0x19D0C4u: goto label_19d0c4;
            case 0x19D0C8u: goto label_19d0c8;
            case 0x19D0CCu: goto label_19d0cc;
            case 0x19D0D0u: goto label_19d0d0;
            case 0x19D0D4u: goto label_19d0d4;
            case 0x19D0D8u: goto label_19d0d8;
            case 0x19D0DCu: goto label_19d0dc;
            case 0x19D0E0u: goto label_19d0e0;
            case 0x19D0E4u: goto label_19d0e4;
            case 0x19D0E8u: goto label_19d0e8;
            case 0x19D0ECu: goto label_19d0ec;
            case 0x19D0F0u: goto label_19d0f0;
            case 0x19D0F4u: goto label_19d0f4;
            case 0x19D0F8u: goto label_19d0f8;
            case 0x19D0FCu: goto label_19d0fc;
            case 0x19D100u: goto label_19d100;
            case 0x19D104u: goto label_19d104;
            case 0x19D108u: goto label_19d108;
            case 0x19D10Cu: goto label_19d10c;
            case 0x19D110u: goto label_19d110;
            case 0x19D114u: goto label_19d114;
            case 0x19D118u: goto label_19d118;
            case 0x19D11Cu: goto label_19d11c;
            case 0x19D120u: goto label_19d120;
            case 0x19D124u: goto label_19d124;
            case 0x19D128u: goto label_19d128;
            case 0x19D12Cu: goto label_19d12c;
            case 0x19D130u: goto label_19d130;
            case 0x19D134u: goto label_19d134;
            case 0x19D138u: goto label_19d138;
            case 0x19D13Cu: goto label_19d13c;
            case 0x19D140u: goto label_19d140;
            case 0x19D144u: goto label_19d144;
            case 0x19D148u: goto label_19d148;
            case 0x19D14Cu: goto label_19d14c;
            case 0x19D150u: goto label_19d150;
            case 0x19D154u: goto label_19d154;
            case 0x19D158u: goto label_19d158;
            case 0x19D15Cu: goto label_19d15c;
            case 0x19D160u: goto label_19d160;
            case 0x19D164u: goto label_19d164;
            case 0x19D168u: goto label_19d168;
            case 0x19D16Cu: goto label_19d16c;
            case 0x19D170u: goto label_19d170;
            case 0x19D174u: goto label_19d174;
            case 0x19D178u: goto label_19d178;
            case 0x19D17Cu: goto label_19d17c;
            case 0x19D180u: goto label_19d180;
            case 0x19D184u: goto label_19d184;
            case 0x19D188u: goto label_19d188;
            case 0x19D18Cu: goto label_19d18c;
            case 0x19D190u: goto label_19d190;
            case 0x19D194u: goto label_19d194;
            case 0x19D198u: goto label_19d198;
            case 0x19D19Cu: goto label_19d19c;
            case 0x19D1A0u: goto label_19d1a0;
            case 0x19D1A4u: goto label_19d1a4;
            case 0x19D1A8u: goto label_19d1a8;
            case 0x19D1ACu: goto label_19d1ac;
            case 0x19D1B0u: goto label_19d1b0;
            case 0x19D1B4u: goto label_19d1b4;
            case 0x19D1B8u: goto label_19d1b8;
            case 0x19D1BCu: goto label_19d1bc;
            case 0x19D1C0u: goto label_19d1c0;
            case 0x19D1C4u: goto label_19d1c4;
            case 0x19D1C8u: goto label_19d1c8;
            case 0x19D1CCu: goto label_19d1cc;
            case 0x19D1D0u: goto label_19d1d0;
            case 0x19D1D4u: goto label_19d1d4;
            case 0x19D1D8u: goto label_19d1d8;
            case 0x19D1DCu: goto label_19d1dc;
            case 0x19D1E0u: goto label_19d1e0;
            case 0x19D1E4u: goto label_19d1e4;
            case 0x19D1E8u: goto label_19d1e8;
            case 0x19D1ECu: goto label_19d1ec;
            case 0x19D1F0u: goto label_19d1f0;
            case 0x19D1F4u: goto label_19d1f4;
            case 0x19D1F8u: goto label_19d1f8;
            case 0x19D1FCu: goto label_19d1fc;
            case 0x19D200u: goto label_19d200;
            case 0x19D204u: goto label_19d204;
            case 0x19D208u: goto label_19d208;
            case 0x19D20Cu: goto label_19d20c;
            case 0x19D210u: goto label_19d210;
            case 0x19D214u: goto label_19d214;
            case 0x19D218u: goto label_19d218;
            case 0x19D21Cu: goto label_19d21c;
            case 0x19D220u: goto label_19d220;
            case 0x19D224u: goto label_19d224;
            case 0x19D228u: goto label_19d228;
            case 0x19D22Cu: goto label_19d22c;
            case 0x19D230u: goto label_19d230;
            case 0x19D234u: goto label_19d234;
            case 0x19D238u: goto label_19d238;
            case 0x19D23Cu: goto label_19d23c;
            case 0x19D240u: goto label_19d240;
            case 0x19D244u: goto label_19d244;
            case 0x19D248u: goto label_19d248;
            case 0x19D24Cu: goto label_19d24c;
            case 0x19D250u: goto label_19d250;
            case 0x19D254u: goto label_19d254;
            case 0x19D258u: goto label_19d258;
            case 0x19D25Cu: goto label_19d25c;
            case 0x19D260u: goto label_19d260;
            case 0x19D264u: goto label_19d264;
            case 0x19D268u: goto label_19d268;
            case 0x19D26Cu: goto label_19d26c;
            case 0x19D270u: goto label_19d270;
            case 0x19D274u: goto label_19d274;
            case 0x19D278u: goto label_19d278;
            case 0x19D27Cu: goto label_19d27c;
            case 0x19D280u: goto label_19d280;
            case 0x19D284u: goto label_19d284;
            case 0x19D288u: goto label_19d288;
            case 0x19D28Cu: goto label_19d28c;
            case 0x19D290u: goto label_19d290;
            case 0x19D294u: goto label_19d294;
            case 0x19D298u: goto label_19d298;
            case 0x19D29Cu: goto label_19d29c;
            case 0x19D2A0u: goto label_19d2a0;
            case 0x19D2A4u: goto label_19d2a4;
            case 0x19D2A8u: goto label_19d2a8;
            case 0x19D2ACu: goto label_19d2ac;
            case 0x19D2B0u: goto label_19d2b0;
            case 0x19D2B4u: goto label_19d2b4;
            case 0x19D2B8u: goto label_19d2b8;
            case 0x19D2BCu: goto label_19d2bc;
            case 0x19D2C0u: goto label_19d2c0;
            case 0x19D2C4u: goto label_19d2c4;
            case 0x19D2C8u: goto label_19d2c8;
            case 0x19D2CCu: goto label_19d2cc;
            case 0x19D2D0u: goto label_19d2d0;
            case 0x19D2D4u: goto label_19d2d4;
            case 0x19D2D8u: goto label_19d2d8;
            case 0x19D2DCu: goto label_19d2dc;
            case 0x19D2E0u: goto label_19d2e0;
            case 0x19D2E4u: goto label_19d2e4;
            case 0x19D2E8u: goto label_19d2e8;
            case 0x19D2ECu: goto label_19d2ec;
            case 0x19D2F0u: goto label_19d2f0;
            case 0x19D2F4u: goto label_19d2f4;
            case 0x19D2F8u: goto label_19d2f8;
            case 0x19D2FCu: goto label_19d2fc;
            case 0x19D300u: goto label_19d300;
            case 0x19D304u: goto label_19d304;
            case 0x19D308u: goto label_19d308;
            case 0x19D30Cu: goto label_19d30c;
            case 0x19D310u: goto label_19d310;
            case 0x19D314u: goto label_19d314;
            case 0x19D318u: goto label_19d318;
            case 0x19D31Cu: goto label_19d31c;
            case 0x19D320u: goto label_19d320;
            case 0x19D324u: goto label_19d324;
            case 0x19D328u: goto label_19d328;
            case 0x19D32Cu: goto label_19d32c;
            case 0x19D330u: goto label_19d330;
            case 0x19D334u: goto label_19d334;
            case 0x19D338u: goto label_19d338;
            case 0x19D33Cu: goto label_19d33c;
            case 0x19D340u: goto label_19d340;
            case 0x19D344u: goto label_19d344;
            case 0x19D348u: goto label_19d348;
            case 0x19D34Cu: goto label_19d34c;
            case 0x19D350u: goto label_19d350;
            case 0x19D354u: goto label_19d354;
            case 0x19D358u: goto label_19d358;
            case 0x19D35Cu: goto label_19d35c;
            case 0x19D360u: goto label_19d360;
            case 0x19D364u: goto label_19d364;
            case 0x19D368u: goto label_19d368;
            case 0x19D36Cu: goto label_19d36c;
            case 0x19D370u: goto label_19d370;
            case 0x19D374u: goto label_19d374;
            case 0x19D378u: goto label_19d378;
            case 0x19D37Cu: goto label_19d37c;
            case 0x19D380u: goto label_19d380;
            case 0x19D384u: goto label_19d384;
            case 0x19D388u: goto label_19d388;
            case 0x19D38Cu: goto label_19d38c;
            case 0x19D390u: goto label_19d390;
            case 0x19D394u: goto label_19d394;
            case 0x19D398u: goto label_19d398;
            case 0x19D39Cu: goto label_19d39c;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D3A4u: goto label_19d3a4;
            case 0x19D3A8u: goto label_19d3a8;
            case 0x19D3ACu: goto label_19d3ac;
            case 0x19D3B0u: goto label_19d3b0;
            case 0x19D3B4u: goto label_19d3b4;
            case 0x19D3B8u: goto label_19d3b8;
            case 0x19D3BCu: goto label_19d3bc;
            case 0x19D3C0u: goto label_19d3c0;
            case 0x19D3C4u: goto label_19d3c4;
            case 0x19D3C8u: goto label_19d3c8;
            case 0x19D3CCu: goto label_19d3cc;
            case 0x19D3D0u: goto label_19d3d0;
            case 0x19D3D4u: goto label_19d3d4;
            case 0x19D3D8u: goto label_19d3d8;
            case 0x19D3DCu: goto label_19d3dc;
            case 0x19D3E0u: goto label_19d3e0;
            case 0x19D3E4u: goto label_19d3e4;
            case 0x19D3E8u: goto label_19d3e8;
            case 0x19D3ECu: goto label_19d3ec;
            case 0x19D3F0u: goto label_19d3f0;
            case 0x19D3F4u: goto label_19d3f4;
            case 0x19D3F8u: goto label_19d3f8;
            case 0x19D3FCu: goto label_19d3fc;
            case 0x19D400u: goto label_19d400;
            case 0x19D404u: goto label_19d404;
            case 0x19D408u: goto label_19d408;
            case 0x19D40Cu: goto label_19d40c;
            case 0x19D410u: goto label_19d410;
            case 0x19D414u: goto label_19d414;
            case 0x19D418u: goto label_19d418;
            case 0x19D41Cu: goto label_19d41c;
            case 0x19D420u: goto label_19d420;
            case 0x19D424u: goto label_19d424;
            case 0x19D428u: goto label_19d428;
            case 0x19D42Cu: goto label_19d42c;
            case 0x19D430u: goto label_19d430;
            case 0x19D434u: goto label_19d434;
            case 0x19D438u: goto label_19d438;
            case 0x19D43Cu: goto label_19d43c;
            case 0x19D440u: goto label_19d440;
            case 0x19D444u: goto label_19d444;
            case 0x19D448u: goto label_19d448;
            case 0x19D44Cu: goto label_19d44c;
            case 0x19D450u: goto label_19d450;
            case 0x19D454u: goto label_19d454;
            case 0x19D458u: goto label_19d458;
            case 0x19D45Cu: goto label_19d45c;
            case 0x19D460u: goto label_19d460;
            case 0x19D464u: goto label_19d464;
            case 0x19D468u: goto label_19d468;
            case 0x19D46Cu: goto label_19d46c;
            case 0x19D470u: goto label_19d470;
            case 0x19D474u: goto label_19d474;
            case 0x19D478u: goto label_19d478;
            case 0x19D47Cu: goto label_19d47c;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D488u: goto label_19d488;
            case 0x19D48Cu: goto label_19d48c;
            case 0x19D490u: goto label_19d490;
            case 0x19D494u: goto label_19d494;
            case 0x19D498u: goto label_19d498;
            case 0x19D49Cu: goto label_19d49c;
            case 0x19D4A0u: goto label_19d4a0;
            case 0x19D4A4u: goto label_19d4a4;
            case 0x19D4A8u: goto label_19d4a8;
            case 0x19D4ACu: goto label_19d4ac;
            case 0x19D4B0u: goto label_19d4b0;
            case 0x19D4B4u: goto label_19d4b4;
            case 0x19D4B8u: goto label_19d4b8;
            case 0x19D4BCu: goto label_19d4bc;
            case 0x19D4C0u: goto label_19d4c0;
            case 0x19D4C4u: goto label_19d4c4;
            case 0x19D4C8u: goto label_19d4c8;
            case 0x19D4CCu: goto label_19d4cc;
            case 0x19D4D0u: goto label_19d4d0;
            case 0x19D4D4u: goto label_19d4d4;
            case 0x19D4D8u: goto label_19d4d8;
            case 0x19D4DCu: goto label_19d4dc;
            case 0x19D4E0u: goto label_19d4e0;
            case 0x19D4E4u: goto label_19d4e4;
            case 0x19D4E8u: goto label_19d4e8;
            case 0x19D4ECu: goto label_19d4ec;
            case 0x19D4F0u: goto label_19d4f0;
            case 0x19D4F4u: goto label_19d4f4;
            case 0x19D4F8u: goto label_19d4f8;
            case 0x19D4FCu: goto label_19d4fc;
            case 0x19D500u: goto label_19d500;
            case 0x19D504u: goto label_19d504;
            case 0x19D508u: goto label_19d508;
            case 0x19D50Cu: goto label_19d50c;
            case 0x19D510u: goto label_19d510;
            case 0x19D514u: goto label_19d514;
            case 0x19D518u: goto label_19d518;
            case 0x19D51Cu: goto label_19d51c;
            case 0x19D520u: goto label_19d520;
            case 0x19D524u: goto label_19d524;
            case 0x19D528u: goto label_19d528;
            case 0x19D52Cu: goto label_19d52c;
            case 0x19D530u: goto label_19d530;
            case 0x19D534u: goto label_19d534;
            case 0x19D538u: goto label_19d538;
            case 0x19D53Cu: goto label_19d53c;
            case 0x19D540u: goto label_19d540;
            case 0x19D544u: goto label_19d544;
            case 0x19D548u: goto label_19d548;
            case 0x19D54Cu: goto label_19d54c;
            case 0x19D550u: goto label_19d550;
            case 0x19D554u: goto label_19d554;
            case 0x19D558u: goto label_19d558;
            case 0x19D55Cu: goto label_19d55c;
            case 0x19D560u: goto label_19d560;
            case 0x19D564u: goto label_19d564;
            case 0x19D568u: goto label_19d568;
            case 0x19D56Cu: goto label_19d56c;
            case 0x19D570u: goto label_19d570;
            case 0x19D574u: goto label_19d574;
            case 0x19D578u: goto label_19d578;
            case 0x19D57Cu: goto label_19d57c;
            case 0x19D580u: goto label_19d580;
            case 0x19D584u: goto label_19d584;
            case 0x19D588u: goto label_19d588;
            case 0x19D58Cu: goto label_19d58c;
            case 0x19D590u: goto label_19d590;
            case 0x19D594u: goto label_19d594;
            case 0x19D598u: goto label_19d598;
            case 0x19D59Cu: goto label_19d59c;
            case 0x19D5A0u: goto label_19d5a0;
            case 0x19D5A4u: goto label_19d5a4;
            case 0x19D5A8u: goto label_19d5a8;
            case 0x19D5ACu: goto label_19d5ac;
            case 0x19D5B0u: goto label_19d5b0;
            case 0x19D5B4u: goto label_19d5b4;
            case 0x19D5B8u: goto label_19d5b8;
            case 0x19D5BCu: goto label_19d5bc;
            case 0x19D5C0u: goto label_19d5c0;
            case 0x19D5C4u: goto label_19d5c4;
            case 0x19D5C8u: goto label_19d5c8;
            case 0x19D5CCu: goto label_19d5cc;
            case 0x19D5D0u: goto label_19d5d0;
            case 0x19D5D4u: goto label_19d5d4;
            case 0x19D5D8u: goto label_19d5d8;
            case 0x19D5DCu: goto label_19d5dc;
            case 0x19D5E0u: goto label_19d5e0;
            case 0x19D5E4u: goto label_19d5e4;
            case 0x19D5E8u: goto label_19d5e8;
            case 0x19D5ECu: goto label_19d5ec;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D5F4u: goto label_19d5f4;
            case 0x19D5F8u: goto label_19d5f8;
            case 0x19D5FCu: goto label_19d5fc;
            case 0x19D600u: goto label_19d600;
            case 0x19D604u: goto label_19d604;
            case 0x19D608u: goto label_19d608;
            case 0x19D60Cu: goto label_19d60c;
            case 0x19D610u: goto label_19d610;
            case 0x19D614u: goto label_19d614;
            case 0x19D618u: goto label_19d618;
            case 0x19D61Cu: goto label_19d61c;
            case 0x19D620u: goto label_19d620;
            case 0x19D624u: goto label_19d624;
            case 0x19D628u: goto label_19d628;
            case 0x19D62Cu: goto label_19d62c;
            case 0x19D630u: goto label_19d630;
            case 0x19D634u: goto label_19d634;
            case 0x19D638u: goto label_19d638;
            case 0x19D63Cu: goto label_19d63c;
            case 0x19D640u: goto label_19d640;
            case 0x19D644u: goto label_19d644;
            case 0x19D648u: goto label_19d648;
            case 0x19D64Cu: goto label_19d64c;
            case 0x19D650u: goto label_19d650;
            case 0x19D654u: goto label_19d654;
            case 0x19D658u: goto label_19d658;
            case 0x19D65Cu: goto label_19d65c;
            case 0x19D660u: goto label_19d660;
            case 0x19D664u: goto label_19d664;
            case 0x19D668u: goto label_19d668;
            case 0x19D66Cu: goto label_19d66c;
            case 0x19D670u: goto label_19d670;
            case 0x19D674u: goto label_19d674;
            case 0x19D678u: goto label_19d678;
            case 0x19D67Cu: goto label_19d67c;
            case 0x19D680u: goto label_19d680;
            case 0x19D684u: goto label_19d684;
            case 0x19D688u: goto label_19d688;
            case 0x19D68Cu: goto label_19d68c;
            case 0x19D690u: goto label_19d690;
            case 0x19D694u: goto label_19d694;
            case 0x19D698u: goto label_19d698;
            case 0x19D69Cu: goto label_19d69c;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6A4u: goto label_19d6a4;
            case 0x19D6A8u: goto label_19d6a8;
            case 0x19D6ACu: goto label_19d6ac;
            case 0x19D6B0u: goto label_19d6b0;
            case 0x19D6B4u: goto label_19d6b4;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C0u: goto label_19d6c0;
            case 0x19D6C4u: goto label_19d6c4;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6CCu: goto label_19d6cc;
            case 0x19D6D0u: goto label_19d6d0;
            case 0x19D6D4u: goto label_19d6d4;
            case 0x19D6D8u: goto label_19d6d8;
            case 0x19D6DCu: goto label_19d6dc;
            case 0x19D6E0u: goto label_19d6e0;
            case 0x19D6E4u: goto label_19d6e4;
            case 0x19D6E8u: goto label_19d6e8;
            case 0x19D6ECu: goto label_19d6ec;
            case 0x19D6F0u: goto label_19d6f0;
            case 0x19D6F4u: goto label_19d6f4;
            case 0x19D6F8u: goto label_19d6f8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D700u: goto label_19d700;
            case 0x19D704u: goto label_19d704;
            case 0x19D708u: goto label_19d708;
            case 0x19D70Cu: goto label_19d70c;
            case 0x19D710u: goto label_19d710;
            case 0x19D714u: goto label_19d714;
            case 0x19D718u: goto label_19d718;
            case 0x19D71Cu: goto label_19d71c;
            case 0x19D720u: goto label_19d720;
            case 0x19D724u: goto label_19d724;
            case 0x19D728u: goto label_19d728;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D730u: goto label_19d730;
            case 0x19D734u: goto label_19d734;
            case 0x19D738u: goto label_19d738;
            case 0x19D73Cu: goto label_19d73c;
            case 0x19D740u: goto label_19d740;
            case 0x19D744u: goto label_19d744;
            case 0x19D748u: goto label_19d748;
            case 0x19D74Cu: goto label_19d74c;
            case 0x19D750u: goto label_19d750;
            case 0x19D754u: goto label_19d754;
            case 0x19D758u: goto label_19d758;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D760u: goto label_19d760;
            case 0x19D764u: goto label_19d764;
            case 0x19D768u: goto label_19d768;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D770u: goto label_19d770;
            case 0x19D774u: goto label_19d774;
            case 0x19D778u: goto label_19d778;
            case 0x19D77Cu: goto label_19d77c;
            case 0x19D780u: goto label_19d780;
            case 0x19D784u: goto label_19d784;
            case 0x19D788u: goto label_19d788;
            case 0x19D78Cu: goto label_19d78c;
            case 0x19D790u: goto label_19d790;
            case 0x19D794u: goto label_19d794;
            case 0x19D798u: goto label_19d798;
            case 0x19D79Cu: goto label_19d79c;
            case 0x19D7A0u: goto label_19d7a0;
            case 0x19D7A4u: goto label_19d7a4;
            case 0x19D7A8u: goto label_19d7a8;
            case 0x19D7ACu: goto label_19d7ac;
            case 0x19D7B0u: goto label_19d7b0;
            case 0x19D7B4u: goto label_19d7b4;
            case 0x19D7B8u: goto label_19d7b8;
            case 0x19D7BCu: goto label_19d7bc;
            case 0x19D7C0u: goto label_19d7c0;
            case 0x19D7C4u: goto label_19d7c4;
            case 0x19D7C8u: goto label_19d7c8;
            case 0x19D7CCu: goto label_19d7cc;
            case 0x19D7D0u: goto label_19d7d0;
            case 0x19D7D4u: goto label_19d7d4;
            case 0x19D7D8u: goto label_19d7d8;
            case 0x19D7DCu: goto label_19d7dc;
            case 0x19D7E0u: goto label_19d7e0;
            case 0x19D7E4u: goto label_19d7e4;
            case 0x19D7E8u: goto label_19d7e8;
            case 0x19D7ECu: goto label_19d7ec;
            case 0x19D7F0u: goto label_19d7f0;
            case 0x19D7F4u: goto label_19d7f4;
            case 0x19D7F8u: goto label_19d7f8;
            case 0x19D7FCu: goto label_19d7fc;
            case 0x19D800u: goto label_19d800;
            case 0x19D804u: goto label_19d804;
            case 0x19D808u: goto label_19d808;
            case 0x19D80Cu: goto label_19d80c;
            case 0x19D810u: goto label_19d810;
            case 0x19D814u: goto label_19d814;
            case 0x19D818u: goto label_19d818;
            case 0x19D81Cu: goto label_19d81c;
            case 0x19D820u: goto label_19d820;
            case 0x19D824u: goto label_19d824;
            case 0x19D828u: goto label_19d828;
            case 0x19D82Cu: goto label_19d82c;
            case 0x19D830u: goto label_19d830;
            case 0x19D834u: goto label_19d834;
            case 0x19D838u: goto label_19d838;
            case 0x19D83Cu: goto label_19d83c;
            case 0x19D840u: goto label_19d840;
            case 0x19D844u: goto label_19d844;
            case 0x19D848u: goto label_19d848;
            case 0x19D84Cu: goto label_19d84c;
            case 0x19D850u: goto label_19d850;
            case 0x19D854u: goto label_19d854;
            case 0x19D858u: goto label_19d858;
            case 0x19D85Cu: goto label_19d85c;
            case 0x19D860u: goto label_19d860;
            case 0x19D864u: goto label_19d864;
            case 0x19D868u: goto label_19d868;
            case 0x19D86Cu: goto label_19d86c;
            case 0x19D870u: goto label_19d870;
            case 0x19D874u: goto label_19d874;
            case 0x19D878u: goto label_19d878;
            case 0x19D87Cu: goto label_19d87c;
            case 0x19D880u: goto label_19d880;
            case 0x19D884u: goto label_19d884;
            case 0x19D888u: goto label_19d888;
            case 0x19D88Cu: goto label_19d88c;
            case 0x19D890u: goto label_19d890;
            case 0x19D894u: goto label_19d894;
            case 0x19D898u: goto label_19d898;
            case 0x19D89Cu: goto label_19d89c;
            case 0x19D8A0u: goto label_19d8a0;
            case 0x19D8A4u: goto label_19d8a4;
            case 0x19D8A8u: goto label_19d8a8;
            case 0x19D8ACu: goto label_19d8ac;
            case 0x19D8B0u: goto label_19d8b0;
            case 0x19D8B4u: goto label_19d8b4;
            case 0x19D8B8u: goto label_19d8b8;
            case 0x19D8BCu: goto label_19d8bc;
            case 0x19D8C0u: goto label_19d8c0;
            case 0x19D8C4u: goto label_19d8c4;
            case 0x19D8C8u: goto label_19d8c8;
            case 0x19D8CCu: goto label_19d8cc;
            case 0x19D8D0u: goto label_19d8d0;
            case 0x19D8D4u: goto label_19d8d4;
            case 0x19D8D8u: goto label_19d8d8;
            case 0x19D8DCu: goto label_19d8dc;
            case 0x19D8E0u: goto label_19d8e0;
            case 0x19D8E4u: goto label_19d8e4;
            case 0x19D8E8u: goto label_19d8e8;
            case 0x19D8ECu: goto label_19d8ec;
            case 0x19D8F0u: goto label_19d8f0;
            case 0x19D8F4u: goto label_19d8f4;
            case 0x19D8F8u: goto label_19d8f8;
            case 0x19D8FCu: goto label_19d8fc;
            case 0x19D900u: goto label_19d900;
            case 0x19D904u: goto label_19d904;
            case 0x19D908u: goto label_19d908;
            case 0x19D90Cu: goto label_19d90c;
            case 0x19D910u: goto label_19d910;
            case 0x19D914u: goto label_19d914;
            case 0x19D918u: goto label_19d918;
            case 0x19D91Cu: goto label_19d91c;
            case 0x19D920u: goto label_19d920;
            case 0x19D924u: goto label_19d924;
            case 0x19D928u: goto label_19d928;
            case 0x19D92Cu: goto label_19d92c;
            case 0x19D930u: goto label_19d930;
            case 0x19D934u: goto label_19d934;
            case 0x19D938u: goto label_19d938;
            case 0x19D93Cu: goto label_19d93c;
            case 0x19D940u: goto label_19d940;
            case 0x19D944u: goto label_19d944;
            case 0x19D948u: goto label_19d948;
            case 0x19D94Cu: goto label_19d94c;
            case 0x19D950u: goto label_19d950;
            case 0x19D954u: goto label_19d954;
            case 0x19D958u: goto label_19d958;
            case 0x19D95Cu: goto label_19d95c;
            case 0x19D960u: goto label_19d960;
            case 0x19D964u: goto label_19d964;
            case 0x19D968u: goto label_19d968;
            case 0x19D96Cu: goto label_19d96c;
            case 0x19D970u: goto label_19d970;
            case 0x19D974u: goto label_19d974;
            case 0x19D978u: goto label_19d978;
            case 0x19D97Cu: goto label_19d97c;
            case 0x19D980u: goto label_19d980;
            case 0x19D984u: goto label_19d984;
            case 0x19D988u: goto label_19d988;
            case 0x19D98Cu: goto label_19d98c;
            case 0x19D990u: goto label_19d990;
            case 0x19D994u: goto label_19d994;
            case 0x19D998u: goto label_19d998;
            case 0x19D99Cu: goto label_19d99c;
            case 0x19D9A0u: goto label_19d9a0;
            case 0x19D9A4u: goto label_19d9a4;
            case 0x19D9A8u: goto label_19d9a8;
            case 0x19D9ACu: goto label_19d9ac;
            case 0x19D9B0u: goto label_19d9b0;
            case 0x19D9B4u: goto label_19d9b4;
            case 0x19D9B8u: goto label_19d9b8;
            case 0x19D9BCu: goto label_19d9bc;
            case 0x19D9C0u: goto label_19d9c0;
            case 0x19D9C4u: goto label_19d9c4;
            case 0x19D9C8u: goto label_19d9c8;
            case 0x19D9CCu: goto label_19d9cc;
            case 0x19D9D0u: goto label_19d9d0;
            case 0x19D9D4u: goto label_19d9d4;
            case 0x19D9D8u: goto label_19d9d8;
            case 0x19D9DCu: goto label_19d9dc;
            case 0x19D9E0u: goto label_19d9e0;
            case 0x19D9E4u: goto label_19d9e4;
            case 0x19D9E8u: goto label_19d9e8;
            case 0x19D9ECu: goto label_19d9ec;
            case 0x19D9F0u: goto label_19d9f0;
            case 0x19D9F4u: goto label_19d9f4;
            case 0x19D9F8u: goto label_19d9f8;
            case 0x19D9FCu: goto label_19d9fc;
            case 0x19DA00u: goto label_19da00;
            case 0x19DA04u: goto label_19da04;
            case 0x19DA08u: goto label_19da08;
            case 0x19DA0Cu: goto label_19da0c;
            case 0x19DA10u: goto label_19da10;
            case 0x19DA14u: goto label_19da14;
            case 0x19DA18u: goto label_19da18;
            case 0x19DA1Cu: goto label_19da1c;
            case 0x19DA20u: goto label_19da20;
            case 0x19DA24u: goto label_19da24;
            case 0x19DA28u: goto label_19da28;
            case 0x19DA2Cu: goto label_19da2c;
            case 0x19DA30u: goto label_19da30;
            case 0x19DA34u: goto label_19da34;
            case 0x19DA38u: goto label_19da38;
            case 0x19DA3Cu: goto label_19da3c;
            case 0x19DA40u: goto label_19da40;
            case 0x19DA44u: goto label_19da44;
            case 0x19DA48u: goto label_19da48;
            case 0x19DA4Cu: goto label_19da4c;
            case 0x19DA50u: goto label_19da50;
            case 0x19DA54u: goto label_19da54;
            case 0x19DA58u: goto label_19da58;
            case 0x19DA5Cu: goto label_19da5c;
            case 0x19DA60u: goto label_19da60;
            case 0x19DA64u: goto label_19da64;
            case 0x19DA68u: goto label_19da68;
            case 0x19DA6Cu: goto label_19da6c;
            case 0x19DA70u: goto label_19da70;
            case 0x19DA74u: goto label_19da74;
            case 0x19DA78u: goto label_19da78;
            case 0x19DA7Cu: goto label_19da7c;
            case 0x19DA80u: goto label_19da80;
            case 0x19DA84u: goto label_19da84;
            case 0x19DA88u: goto label_19da88;
            case 0x19DA8Cu: goto label_19da8c;
            case 0x19DA90u: goto label_19da90;
            case 0x19DA94u: goto label_19da94;
            case 0x19DA98u: goto label_19da98;
            case 0x19DA9Cu: goto label_19da9c;
            case 0x19DAA0u: goto label_19daa0;
            case 0x19DAA4u: goto label_19daa4;
            case 0x19DAA8u: goto label_19daa8;
            case 0x19DAACu: goto label_19daac;
            case 0x19DAB0u: goto label_19dab0;
            case 0x19DAB4u: goto label_19dab4;
            case 0x19DAB8u: goto label_19dab8;
            case 0x19DABCu: goto label_19dabc;
            case 0x19DAC0u: goto label_19dac0;
            case 0x19DAC4u: goto label_19dac4;
            case 0x19DAC8u: goto label_19dac8;
            case 0x19DACCu: goto label_19dacc;
            case 0x19DAD0u: goto label_19dad0;
            case 0x19DAD4u: goto label_19dad4;
            case 0x19DAD8u: goto label_19dad8;
            case 0x19DADCu: goto label_19dadc;
            case 0x19DAE0u: goto label_19dae0;
            case 0x19DAE4u: goto label_19dae4;
            case 0x19DAE8u: goto label_19dae8;
            case 0x19DAECu: goto label_19daec;
            case 0x19DAF0u: goto label_19daf0;
            case 0x19DAF4u: goto label_19daf4;
            case 0x19DAF8u: goto label_19daf8;
            case 0x19DAFCu: goto label_19dafc;
            case 0x19DB00u: goto label_19db00;
            case 0x19DB04u: goto label_19db04;
            case 0x19DB08u: goto label_19db08;
            case 0x19DB0Cu: goto label_19db0c;
            case 0x19DB10u: goto label_19db10;
            case 0x19DB14u: goto label_19db14;
            case 0x19DB18u: goto label_19db18;
            case 0x19DB1Cu: goto label_19db1c;
            case 0x19DB20u: goto label_19db20;
            case 0x19DB24u: goto label_19db24;
            case 0x19DB28u: goto label_19db28;
            case 0x19DB2Cu: goto label_19db2c;
            case 0x19DB30u: goto label_19db30;
            case 0x19DB34u: goto label_19db34;
            case 0x19DB38u: goto label_19db38;
            case 0x19DB3Cu: goto label_19db3c;
            case 0x19DB40u: goto label_19db40;
            case 0x19DB44u: goto label_19db44;
            case 0x19DB48u: goto label_19db48;
            case 0x19DB4Cu: goto label_19db4c;
            case 0x19DB50u: goto label_19db50;
            case 0x19DB54u: goto label_19db54;
            case 0x19DB58u: goto label_19db58;
            case 0x19DB5Cu: goto label_19db5c;
            case 0x19DB60u: goto label_19db60;
            case 0x19DB64u: goto label_19db64;
            case 0x19DB68u: goto label_19db68;
            case 0x19DB6Cu: goto label_19db6c;
            case 0x19DB70u: goto label_19db70;
            case 0x19DB74u: goto label_19db74;
            case 0x19DB78u: goto label_19db78;
            case 0x19DB7Cu: goto label_19db7c;
            case 0x19DB80u: goto label_19db80;
            case 0x19DB84u: goto label_19db84;
            case 0x19DB88u: goto label_19db88;
            case 0x19DB8Cu: goto label_19db8c;
            case 0x19DB90u: goto label_19db90;
            case 0x19DB94u: goto label_19db94;
            case 0x19DB98u: goto label_19db98;
            case 0x19DB9Cu: goto label_19db9c;
            case 0x19DBA0u: goto label_19dba0;
            case 0x19DBA4u: goto label_19dba4;
            case 0x19DBA8u: goto label_19dba8;
            case 0x19DBACu: goto label_19dbac;
            case 0x19DBB0u: goto label_19dbb0;
            case 0x19DBB4u: goto label_19dbb4;
            case 0x19DBB8u: goto label_19dbb8;
            case 0x19DBBCu: goto label_19dbbc;
            case 0x19DBC0u: goto label_19dbc0;
            case 0x19DBC4u: goto label_19dbc4;
            case 0x19DBC8u: goto label_19dbc8;
            case 0x19DBCCu: goto label_19dbcc;
            case 0x19DBD0u: goto label_19dbd0;
            case 0x19DBD4u: goto label_19dbd4;
            case 0x19DBD8u: goto label_19dbd8;
            case 0x19DBDCu: goto label_19dbdc;
            case 0x19DBE0u: goto label_19dbe0;
            case 0x19DBE4u: goto label_19dbe4;
            case 0x19DBE8u: goto label_19dbe8;
            case 0x19DBECu: goto label_19dbec;
            case 0x19DBF0u: goto label_19dbf0;
            case 0x19DBF4u: goto label_19dbf4;
            case 0x19DBF8u: goto label_19dbf8;
            case 0x19DBFCu: goto label_19dbfc;
            case 0x19DC00u: goto label_19dc00;
            case 0x19DC04u: goto label_19dc04;
            case 0x19DC08u: goto label_19dc08;
            case 0x19DC0Cu: goto label_19dc0c;
            case 0x19DC10u: goto label_19dc10;
            case 0x19DC14u: goto label_19dc14;
            case 0x19DC18u: goto label_19dc18;
            case 0x19DC1Cu: goto label_19dc1c;
            case 0x19DC20u: goto label_19dc20;
            case 0x19DC24u: goto label_19dc24;
            case 0x19DC28u: goto label_19dc28;
            case 0x19DC2Cu: goto label_19dc2c;
            case 0x19DC30u: goto label_19dc30;
            case 0x19DC34u: goto label_19dc34;
            case 0x19DC38u: goto label_19dc38;
            case 0x19DC3Cu: goto label_19dc3c;
            case 0x19DC40u: goto label_19dc40;
            case 0x19DC44u: goto label_19dc44;
            case 0x19DC48u: goto label_19dc48;
            case 0x19DC4Cu: goto label_19dc4c;
            case 0x19DC50u: goto label_19dc50;
            case 0x19DC54u: goto label_19dc54;
            case 0x19DC58u: goto label_19dc58;
            case 0x19DC5Cu: goto label_19dc5c;
            case 0x19DC60u: goto label_19dc60;
            case 0x19DC64u: goto label_19dc64;
            case 0x19DC68u: goto label_19dc68;
            case 0x19DC6Cu: goto label_19dc6c;
            case 0x19DC70u: goto label_19dc70;
            case 0x19DC74u: goto label_19dc74;
            case 0x19DC78u: goto label_19dc78;
            case 0x19DC7Cu: goto label_19dc7c;
            case 0x19DC80u: goto label_19dc80;
            case 0x19DC84u: goto label_19dc84;
            case 0x19DC88u: goto label_19dc88;
            case 0x19DC8Cu: goto label_19dc8c;
            case 0x19DC90u: goto label_19dc90;
            case 0x19DC94u: goto label_19dc94;
            case 0x19DC98u: goto label_19dc98;
            case 0x19DC9Cu: goto label_19dc9c;
            case 0x19DCA0u: goto label_19dca0;
            case 0x19DCA4u: goto label_19dca4;
            case 0x19DCA8u: goto label_19dca8;
            case 0x19DCACu: goto label_19dcac;
            case 0x19DCB0u: goto label_19dcb0;
            case 0x19DCB4u: goto label_19dcb4;
            case 0x19DCB8u: goto label_19dcb8;
            case 0x19DCBCu: goto label_19dcbc;
            case 0x19DCC0u: goto label_19dcc0;
            case 0x19DCC4u: goto label_19dcc4;
            case 0x19DCC8u: goto label_19dcc8;
            case 0x19DCCCu: goto label_19dccc;
            case 0x19DCD0u: goto label_19dcd0;
            case 0x19DCD4u: goto label_19dcd4;
            case 0x19DCD8u: goto label_19dcd8;
            case 0x19DCDCu: goto label_19dcdc;
            case 0x19DCE0u: goto label_19dce0;
            case 0x19DCE4u: goto label_19dce4;
            case 0x19DCE8u: goto label_19dce8;
            case 0x19DCECu: goto label_19dcec;
            case 0x19DCF0u: goto label_19dcf0;
            case 0x19DCF4u: goto label_19dcf4;
            case 0x19DCF8u: goto label_19dcf8;
            case 0x19DCFCu: goto label_19dcfc;
            case 0x19DD00u: goto label_19dd00;
            case 0x19DD04u: goto label_19dd04;
            case 0x19DD08u: goto label_19dd08;
            case 0x19DD0Cu: goto label_19dd0c;
            case 0x19DD10u: goto label_19dd10;
            case 0x19DD14u: goto label_19dd14;
            case 0x19DD18u: goto label_19dd18;
            case 0x19DD1Cu: goto label_19dd1c;
            case 0x19DD20u: goto label_19dd20;
            case 0x19DD24u: goto label_19dd24;
            case 0x19DD28u: goto label_19dd28;
            case 0x19DD2Cu: goto label_19dd2c;
            case 0x19DD30u: goto label_19dd30;
            case 0x19DD34u: goto label_19dd34;
            case 0x19DD38u: goto label_19dd38;
            case 0x19DD3Cu: goto label_19dd3c;
            case 0x19DD40u: goto label_19dd40;
            case 0x19DD44u: goto label_19dd44;
            case 0x19DD48u: goto label_19dd48;
            case 0x19DD4Cu: goto label_19dd4c;
            case 0x19DD50u: goto label_19dd50;
            case 0x19DD54u: goto label_19dd54;
            case 0x19DD58u: goto label_19dd58;
            case 0x19DD5Cu: goto label_19dd5c;
            case 0x19DD60u: goto label_19dd60;
            case 0x19DD64u: goto label_19dd64;
            case 0x19DD68u: goto label_19dd68;
            case 0x19DD6Cu: goto label_19dd6c;
            case 0x19DD70u: goto label_19dd70;
            case 0x19DD74u: goto label_19dd74;
            case 0x19DD78u: goto label_19dd78;
            case 0x19DD7Cu: goto label_19dd7c;
            case 0x19DD80u: goto label_19dd80;
            case 0x19DD84u: goto label_19dd84;
            case 0x19DD88u: goto label_19dd88;
            case 0x19DD8Cu: goto label_19dd8c;
            case 0x19DD90u: goto label_19dd90;
            case 0x19DD94u: goto label_19dd94;
            case 0x19DD98u: goto label_19dd98;
            case 0x19DD9Cu: goto label_19dd9c;
            case 0x19DDA0u: goto label_19dda0;
            case 0x19DDA4u: goto label_19dda4;
            case 0x19DDA8u: goto label_19dda8;
            case 0x19DDACu: goto label_19ddac;
            case 0x19DDB0u: goto label_19ddb0;
            case 0x19DDB4u: goto label_19ddb4;
            case 0x19DDB8u: goto label_19ddb8;
            case 0x19DDBCu: goto label_19ddbc;
            case 0x19DDC0u: goto label_19ddc0;
            case 0x19DDC4u: goto label_19ddc4;
            case 0x19DDC8u: goto label_19ddc8;
            case 0x19DDCCu: goto label_19ddcc;
            case 0x19DDD0u: goto label_19ddd0;
            case 0x19DDD4u: goto label_19ddd4;
            case 0x19DDD8u: goto label_19ddd8;
            case 0x19DDDCu: goto label_19dddc;
            case 0x19DDE0u: goto label_19dde0;
            case 0x19DDE4u: goto label_19dde4;
            case 0x19DDE8u: goto label_19dde8;
            case 0x19DDECu: goto label_19ddec;
            case 0x19DDF0u: goto label_19ddf0;
            case 0x19DDF4u: goto label_19ddf4;
            case 0x19DDF8u: goto label_19ddf8;
            case 0x19DDFCu: goto label_19ddfc;
            case 0x19DE00u: goto label_19de00;
            case 0x19DE04u: goto label_19de04;
            case 0x19DE08u: goto label_19de08;
            case 0x19DE0Cu: goto label_19de0c;
            case 0x19DE10u: goto label_19de10;
            case 0x19DE14u: goto label_19de14;
            case 0x19DE18u: goto label_19de18;
            case 0x19DE1Cu: goto label_19de1c;
            case 0x19DE20u: goto label_19de20;
            case 0x19DE24u: goto label_19de24;
            case 0x19DE28u: goto label_19de28;
            case 0x19DE2Cu: goto label_19de2c;
            case 0x19DE30u: goto label_19de30;
            case 0x19DE34u: goto label_19de34;
            case 0x19DE38u: goto label_19de38;
            case 0x19DE3Cu: goto label_19de3c;
            case 0x19DE40u: goto label_19de40;
            case 0x19DE44u: goto label_19de44;
            case 0x19DE48u: goto label_19de48;
            case 0x19DE4Cu: goto label_19de4c;
            case 0x19DE50u: goto label_19de50;
            case 0x19DE54u: goto label_19de54;
            case 0x19DE58u: goto label_19de58;
            case 0x19DE5Cu: goto label_19de5c;
            case 0x19DE60u: goto label_19de60;
            case 0x19DE64u: goto label_19de64;
            case 0x19DE68u: goto label_19de68;
            case 0x19DE6Cu: goto label_19de6c;
            case 0x19DE70u: goto label_19de70;
            case 0x19DE74u: goto label_19de74;
            case 0x19DE78u: goto label_19de78;
            case 0x19DE7Cu: goto label_19de7c;
            case 0x19DE80u: goto label_19de80;
            case 0x19DE84u: goto label_19de84;
            case 0x19DE88u: goto label_19de88;
            case 0x19DE8Cu: goto label_19de8c;
            case 0x19DE90u: goto label_19de90;
            case 0x19DE94u: goto label_19de94;
            case 0x19DE98u: goto label_19de98;
            case 0x19DE9Cu: goto label_19de9c;
            case 0x19DEA0u: goto label_19dea0;
            case 0x19DEA4u: goto label_19dea4;
            case 0x19DEA8u: goto label_19dea8;
            case 0x19DEACu: goto label_19deac;
            case 0x19DEB0u: goto label_19deb0;
            case 0x19DEB4u: goto label_19deb4;
            case 0x19DEB8u: goto label_19deb8;
            case 0x19DEBCu: goto label_19debc;
            case 0x19DEC0u: goto label_19dec0;
            case 0x19DEC4u: goto label_19dec4;
            case 0x19DEC8u: goto label_19dec8;
            case 0x19DECCu: goto label_19decc;
            case 0x19DED0u: goto label_19ded0;
            case 0x19DED4u: goto label_19ded4;
            case 0x19DED8u: goto label_19ded8;
            case 0x19DEDCu: goto label_19dedc;
            case 0x19DEE0u: goto label_19dee0;
            case 0x19DEE4u: goto label_19dee4;
            case 0x19DEE8u: goto label_19dee8;
            case 0x19DEECu: goto label_19deec;
            case 0x19DEF0u: goto label_19def0;
            case 0x19DEF4u: goto label_19def4;
            case 0x19DEF8u: goto label_19def8;
            case 0x19DEFCu: goto label_19defc;
            case 0x19DF00u: goto label_19df00;
            case 0x19DF04u: goto label_19df04;
            case 0x19DF08u: goto label_19df08;
            case 0x19DF0Cu: goto label_19df0c;
            case 0x19DF10u: goto label_19df10;
            case 0x19DF14u: goto label_19df14;
            case 0x19DF18u: goto label_19df18;
            case 0x19DF1Cu: goto label_19df1c;
            case 0x19DF20u: goto label_19df20;
            case 0x19DF24u: goto label_19df24;
            case 0x19DF28u: goto label_19df28;
            case 0x19DF2Cu: goto label_19df2c;
            case 0x19DF30u: goto label_19df30;
            case 0x19DF34u: goto label_19df34;
            case 0x19DF38u: goto label_19df38;
            case 0x19DF3Cu: goto label_19df3c;
            case 0x19DF40u: goto label_19df40;
            case 0x19DF44u: goto label_19df44;
            case 0x19DF48u: goto label_19df48;
            case 0x19DF4Cu: goto label_19df4c;
            case 0x19DF50u: goto label_19df50;
            case 0x19DF54u: goto label_19df54;
            case 0x19DF58u: goto label_19df58;
            case 0x19DF5Cu: goto label_19df5c;
            case 0x19DF60u: goto label_19df60;
            case 0x19DF64u: goto label_19df64;
            case 0x19DF68u: goto label_19df68;
            case 0x19DF6Cu: goto label_19df6c;
            case 0x19DF70u: goto label_19df70;
            case 0x19DF74u: goto label_19df74;
            case 0x19DF78u: goto label_19df78;
            case 0x19DF7Cu: goto label_19df7c;
            case 0x19DF80u: goto label_19df80;
            case 0x19DF84u: goto label_19df84;
            case 0x19DF88u: goto label_19df88;
            case 0x19DF8Cu: goto label_19df8c;
            case 0x19DF90u: goto label_19df90;
            case 0x19DF94u: goto label_19df94;
            case 0x19DF98u: goto label_19df98;
            case 0x19DF9Cu: goto label_19df9c;
            case 0x19DFA0u: goto label_19dfa0;
            case 0x19DFA4u: goto label_19dfa4;
            case 0x19DFA8u: goto label_19dfa8;
            case 0x19DFACu: goto label_19dfac;
            case 0x19DFB0u: goto label_19dfb0;
            case 0x19DFB4u: goto label_19dfb4;
            case 0x19DFB8u: goto label_19dfb8;
            case 0x19DFBCu: goto label_19dfbc;
            case 0x19DFC0u: goto label_19dfc0;
            case 0x19DFC4u: goto label_19dfc4;
            case 0x19DFC8u: goto label_19dfc8;
            case 0x19DFCCu: goto label_19dfcc;
            case 0x19DFD0u: goto label_19dfd0;
            case 0x19DFD4u: goto label_19dfd4;
            case 0x19DFD8u: goto label_19dfd8;
            case 0x19DFDCu: goto label_19dfdc;
            case 0x19DFE0u: goto label_19dfe0;
            case 0x19DFE4u: goto label_19dfe4;
            case 0x19DFE8u: goto label_19dfe8;
            case 0x19DFECu: goto label_19dfec;
            case 0x19DFF0u: goto label_19dff0;
            case 0x19DFF4u: goto label_19dff4;
            case 0x19DFF8u: goto label_19dff8;
            case 0x19DFFCu: goto label_19dffc;
            case 0x19E000u: goto label_19e000;
            case 0x19E004u: goto label_19e004;
            case 0x19E008u: goto label_19e008;
            case 0x19E00Cu: goto label_19e00c;
            case 0x19E010u: goto label_19e010;
            case 0x19E014u: goto label_19e014;
            case 0x19E018u: goto label_19e018;
            case 0x19E01Cu: goto label_19e01c;
            case 0x19E020u: goto label_19e020;
            case 0x19E024u: goto label_19e024;
            case 0x19E028u: goto label_19e028;
            case 0x19E02Cu: goto label_19e02c;
            case 0x19E030u: goto label_19e030;
            case 0x19E034u: goto label_19e034;
            case 0x19E038u: goto label_19e038;
            case 0x19E03Cu: goto label_19e03c;
            case 0x19E040u: goto label_19e040;
            case 0x19E044u: goto label_19e044;
            case 0x19E048u: goto label_19e048;
            case 0x19E04Cu: goto label_19e04c;
            case 0x19E050u: goto label_19e050;
            case 0x19E054u: goto label_19e054;
            case 0x19E058u: goto label_19e058;
            case 0x19E05Cu: goto label_19e05c;
            case 0x19E060u: goto label_19e060;
            case 0x19E064u: goto label_19e064;
            case 0x19E068u: goto label_19e068;
            case 0x19E06Cu: goto label_19e06c;
            case 0x19E070u: goto label_19e070;
            case 0x19E074u: goto label_19e074;
            case 0x19E078u: goto label_19e078;
            case 0x19E07Cu: goto label_19e07c;
            case 0x19E080u: goto label_19e080;
            case 0x19E084u: goto label_19e084;
            case 0x19E088u: goto label_19e088;
            case 0x19E08Cu: goto label_19e08c;
            case 0x19E090u: goto label_19e090;
            case 0x19E094u: goto label_19e094;
            case 0x19E098u: goto label_19e098;
            case 0x19E09Cu: goto label_19e09c;
            case 0x19E0A0u: goto label_19e0a0;
            case 0x19E0A4u: goto label_19e0a4;
            case 0x19E0A8u: goto label_19e0a8;
            case 0x19E0ACu: goto label_19e0ac;
            case 0x19E0B0u: goto label_19e0b0;
            case 0x19E0B4u: goto label_19e0b4;
            case 0x19E0B8u: goto label_19e0b8;
            case 0x19E0BCu: goto label_19e0bc;
            case 0x19E0C0u: goto label_19e0c0;
            case 0x19E0C4u: goto label_19e0c4;
            case 0x19E0C8u: goto label_19e0c8;
            case 0x19E0CCu: goto label_19e0cc;
            case 0x19E0D0u: goto label_19e0d0;
            case 0x19E0D4u: goto label_19e0d4;
            case 0x19E0D8u: goto label_19e0d8;
            case 0x19E0DCu: goto label_19e0dc;
            case 0x19E0E0u: goto label_19e0e0;
            case 0x19E0E4u: goto label_19e0e4;
            case 0x19E0E8u: goto label_19e0e8;
            case 0x19E0ECu: goto label_19e0ec;
            case 0x19E0F0u: goto label_19e0f0;
            case 0x19E0F4u: goto label_19e0f4;
            case 0x19E0F8u: goto label_19e0f8;
            case 0x19E0FCu: goto label_19e0fc;
            case 0x19E100u: goto label_19e100;
            case 0x19E104u: goto label_19e104;
            case 0x19E108u: goto label_19e108;
            case 0x19E10Cu: goto label_19e10c;
            case 0x19E110u: goto label_19e110;
            case 0x19E114u: goto label_19e114;
            case 0x19E118u: goto label_19e118;
            case 0x19E11Cu: goto label_19e11c;
            case 0x19E120u: goto label_19e120;
            case 0x19E124u: goto label_19e124;
            case 0x19E128u: goto label_19e128;
            case 0x19E12Cu: goto label_19e12c;
            case 0x19E130u: goto label_19e130;
            case 0x19E134u: goto label_19e134;
            case 0x19E138u: goto label_19e138;
            case 0x19E13Cu: goto label_19e13c;
            case 0x19E140u: goto label_19e140;
            case 0x19E144u: goto label_19e144;
            case 0x19E148u: goto label_19e148;
            case 0x19E14Cu: goto label_19e14c;
            case 0x19E150u: goto label_19e150;
            case 0x19E154u: goto label_19e154;
            case 0x19E158u: goto label_19e158;
            case 0x19E15Cu: goto label_19e15c;
            case 0x19E160u: goto label_19e160;
            case 0x19E164u: goto label_19e164;
            case 0x19E168u: goto label_19e168;
            case 0x19E16Cu: goto label_19e16c;
            case 0x19E170u: goto label_19e170;
            case 0x19E174u: goto label_19e174;
            case 0x19E178u: goto label_19e178;
            case 0x19E17Cu: goto label_19e17c;
            case 0x19E180u: goto label_19e180;
            case 0x19E184u: goto label_19e184;
            case 0x19E188u: goto label_19e188;
            case 0x19E18Cu: goto label_19e18c;
            case 0x19E190u: goto label_19e190;
            case 0x19E194u: goto label_19e194;
            case 0x19E198u: goto label_19e198;
            case 0x19E19Cu: goto label_19e19c;
            case 0x19E1A0u: goto label_19e1a0;
            case 0x19E1A4u: goto label_19e1a4;
            case 0x19E1A8u: goto label_19e1a8;
            case 0x19E1ACu: goto label_19e1ac;
            case 0x19E1B0u: goto label_19e1b0;
            case 0x19E1B4u: goto label_19e1b4;
            case 0x19E1B8u: goto label_19e1b8;
            case 0x19E1BCu: goto label_19e1bc;
            case 0x19E1C0u: goto label_19e1c0;
            case 0x19E1C4u: goto label_19e1c4;
            case 0x19E1C8u: goto label_19e1c8;
            case 0x19E1CCu: goto label_19e1cc;
            case 0x19E1D0u: goto label_19e1d0;
            case 0x19E1D4u: goto label_19e1d4;
            case 0x19E1D8u: goto label_19e1d8;
            case 0x19E1DCu: goto label_19e1dc;
            case 0x19E1E0u: goto label_19e1e0;
            case 0x19E1E4u: goto label_19e1e4;
            case 0x19E1E8u: goto label_19e1e8;
            case 0x19E1ECu: goto label_19e1ec;
            case 0x19E1F0u: goto label_19e1f0;
            case 0x19E1F4u: goto label_19e1f4;
            case 0x19E1F8u: goto label_19e1f8;
            case 0x19E1FCu: goto label_19e1fc;
            case 0x19E200u: goto label_19e200;
            case 0x19E204u: goto label_19e204;
            case 0x19E208u: goto label_19e208;
            case 0x19E20Cu: goto label_19e20c;
            case 0x19E210u: goto label_19e210;
            case 0x19E214u: goto label_19e214;
            case 0x19E218u: goto label_19e218;
            case 0x19E21Cu: goto label_19e21c;
            case 0x19E220u: goto label_19e220;
            case 0x19E224u: goto label_19e224;
            case 0x19E228u: goto label_19e228;
            case 0x19E22Cu: goto label_19e22c;
            case 0x19E230u: goto label_19e230;
            case 0x19E234u: goto label_19e234;
            case 0x19E238u: goto label_19e238;
            case 0x19E23Cu: goto label_19e23c;
            case 0x19E240u: goto label_19e240;
            case 0x19E244u: goto label_19e244;
            case 0x19E248u: goto label_19e248;
            case 0x19E24Cu: goto label_19e24c;
            case 0x19E250u: goto label_19e250;
            case 0x19E254u: goto label_19e254;
            case 0x19E258u: goto label_19e258;
            case 0x19E25Cu: goto label_19e25c;
            case 0x19E260u: goto label_19e260;
            case 0x19E264u: goto label_19e264;
            case 0x19E268u: goto label_19e268;
            case 0x19E26Cu: goto label_19e26c;
            case 0x19E270u: goto label_19e270;
            case 0x19E274u: goto label_19e274;
            case 0x19E278u: goto label_19e278;
            case 0x19E27Cu: goto label_19e27c;
            case 0x19E280u: goto label_19e280;
            case 0x19E284u: goto label_19e284;
            case 0x19E288u: goto label_19e288;
            case 0x19E28Cu: goto label_19e28c;
            case 0x19E290u: goto label_19e290;
            case 0x19E294u: goto label_19e294;
            case 0x19E298u: goto label_19e298;
            case 0x19E29Cu: goto label_19e29c;
            case 0x19E2A0u: goto label_19e2a0;
            case 0x19E2A4u: goto label_19e2a4;
            case 0x19E2A8u: goto label_19e2a8;
            case 0x19E2ACu: goto label_19e2ac;
            case 0x19E2B0u: goto label_19e2b0;
            case 0x19E2B4u: goto label_19e2b4;
            case 0x19E2B8u: goto label_19e2b8;
            case 0x19E2BCu: goto label_19e2bc;
            case 0x19E2C0u: goto label_19e2c0;
            case 0x19E2C4u: goto label_19e2c4;
            case 0x19E2C8u: goto label_19e2c8;
            case 0x19E2CCu: goto label_19e2cc;
            case 0x19E2D0u: goto label_19e2d0;
            case 0x19E2D4u: goto label_19e2d4;
            case 0x19E2D8u: goto label_19e2d8;
            case 0x19E2DCu: goto label_19e2dc;
            case 0x19E2E0u: goto label_19e2e0;
            case 0x19E2E4u: goto label_19e2e4;
            case 0x19E2E8u: goto label_19e2e8;
            case 0x19E2ECu: goto label_19e2ec;
            case 0x19E2F0u: goto label_19e2f0;
            case 0x19E2F4u: goto label_19e2f4;
            case 0x19E2F8u: goto label_19e2f8;
            case 0x19E2FCu: goto label_19e2fc;
            case 0x19E300u: goto label_19e300;
            case 0x19E304u: goto label_19e304;
            case 0x19E308u: goto label_19e308;
            case 0x19E30Cu: goto label_19e30c;
            case 0x19E310u: goto label_19e310;
            case 0x19E314u: goto label_19e314;
            case 0x19E318u: goto label_19e318;
            case 0x19E31Cu: goto label_19e31c;
            case 0x19E320u: goto label_19e320;
            case 0x19E324u: goto label_19e324;
            case 0x19E328u: goto label_19e328;
            case 0x19E32Cu: goto label_19e32c;
            case 0x19E330u: goto label_19e330;
            case 0x19E334u: goto label_19e334;
            case 0x19E338u: goto label_19e338;
            case 0x19E33Cu: goto label_19e33c;
            case 0x19E340u: goto label_19e340;
            case 0x19E344u: goto label_19e344;
            case 0x19E348u: goto label_19e348;
            case 0x19E34Cu: goto label_19e34c;
            case 0x19E350u: goto label_19e350;
            case 0x19E354u: goto label_19e354;
            case 0x19E358u: goto label_19e358;
            case 0x19E35Cu: goto label_19e35c;
            case 0x19E360u: goto label_19e360;
            case 0x19E364u: goto label_19e364;
            case 0x19E368u: goto label_19e368;
            case 0x19E36Cu: goto label_19e36c;
            case 0x19E370u: goto label_19e370;
            case 0x19E374u: goto label_19e374;
            case 0x19E378u: goto label_19e378;
            case 0x19E37Cu: goto label_19e37c;
            case 0x19E380u: goto label_19e380;
            case 0x19E384u: goto label_19e384;
            case 0x19E388u: goto label_19e388;
            case 0x19E38Cu: goto label_19e38c;
            case 0x19E390u: goto label_19e390;
            case 0x19E394u: goto label_19e394;
            case 0x19E398u: goto label_19e398;
            case 0x19E39Cu: goto label_19e39c;
            case 0x19E3A0u: goto label_19e3a0;
            case 0x19E3A4u: goto label_19e3a4;
            case 0x19E3A8u: goto label_19e3a8;
            case 0x19E3ACu: goto label_19e3ac;
            case 0x19E3B0u: goto label_19e3b0;
            case 0x19E3B4u: goto label_19e3b4;
            case 0x19E3B8u: goto label_19e3b8;
            case 0x19E3BCu: goto label_19e3bc;
            case 0x19E3C0u: goto label_19e3c0;
            case 0x19E3C4u: goto label_19e3c4;
            case 0x19E3C8u: goto label_19e3c8;
            case 0x19E3CCu: goto label_19e3cc;
            case 0x19E3D0u: goto label_19e3d0;
            case 0x19E3D4u: goto label_19e3d4;
            case 0x19E3D8u: goto label_19e3d8;
            case 0x19E3DCu: goto label_19e3dc;
            case 0x19E3E0u: goto label_19e3e0;
            case 0x19E3E4u: goto label_19e3e4;
            case 0x19E3E8u: goto label_19e3e8;
            case 0x19E3ECu: goto label_19e3ec;
            case 0x19E3F0u: goto label_19e3f0;
            case 0x19E3F4u: goto label_19e3f4;
            case 0x19E3F8u: goto label_19e3f8;
            case 0x19E3FCu: goto label_19e3fc;
            case 0x19E400u: goto label_19e400;
            case 0x19E404u: goto label_19e404;
            case 0x19E408u: goto label_19e408;
            case 0x19E40Cu: goto label_19e40c;
            case 0x19E410u: goto label_19e410;
            case 0x19E414u: goto label_19e414;
            case 0x19E418u: goto label_19e418;
            case 0x19E41Cu: goto label_19e41c;
            case 0x19E420u: goto label_19e420;
            case 0x19E424u: goto label_19e424;
            case 0x19E428u: goto label_19e428;
            case 0x19E42Cu: goto label_19e42c;
            case 0x19E430u: goto label_19e430;
            case 0x19E434u: goto label_19e434;
            case 0x19E438u: goto label_19e438;
            case 0x19E43Cu: goto label_19e43c;
            case 0x19E440u: goto label_19e440;
            case 0x19E444u: goto label_19e444;
            case 0x19E448u: goto label_19e448;
            case 0x19E44Cu: goto label_19e44c;
            case 0x19E450u: goto label_19e450;
            case 0x19E454u: goto label_19e454;
            case 0x19E458u: goto label_19e458;
            case 0x19E45Cu: goto label_19e45c;
            case 0x19E460u: goto label_19e460;
            case 0x19E464u: goto label_19e464;
            case 0x19E468u: goto label_19e468;
            case 0x19E46Cu: goto label_19e46c;
            case 0x19E470u: goto label_19e470;
            case 0x19E474u: goto label_19e474;
            case 0x19E478u: goto label_19e478;
            case 0x19E47Cu: goto label_19e47c;
            case 0x19E480u: goto label_19e480;
            case 0x19E484u: goto label_19e484;
            case 0x19E488u: goto label_19e488;
            case 0x19E48Cu: goto label_19e48c;
            case 0x19E490u: goto label_19e490;
            case 0x19E494u: goto label_19e494;
            case 0x19E498u: goto label_19e498;
            case 0x19E49Cu: goto label_19e49c;
            case 0x19E4A0u: goto label_19e4a0;
            case 0x19E4A4u: goto label_19e4a4;
            case 0x19E4A8u: goto label_19e4a8;
            case 0x19E4ACu: goto label_19e4ac;
            case 0x19E4B0u: goto label_19e4b0;
            case 0x19E4B4u: goto label_19e4b4;
            case 0x19E4B8u: goto label_19e4b8;
            case 0x19E4BCu: goto label_19e4bc;
            case 0x19E4C0u: goto label_19e4c0;
            case 0x19E4C4u: goto label_19e4c4;
            case 0x19E4C8u: goto label_19e4c8;
            case 0x19E4CCu: goto label_19e4cc;
            case 0x19E4D0u: goto label_19e4d0;
            case 0x19E4D4u: goto label_19e4d4;
            case 0x19E4D8u: goto label_19e4d8;
            case 0x19E4DCu: goto label_19e4dc;
            case 0x19E4E0u: goto label_19e4e0;
            case 0x19E4E4u: goto label_19e4e4;
            case 0x19E4E8u: goto label_19e4e8;
            case 0x19E4ECu: goto label_19e4ec;
            case 0x19E4F0u: goto label_19e4f0;
            case 0x19E4F4u: goto label_19e4f4;
            case 0x19E4F8u: goto label_19e4f8;
            case 0x19E4FCu: goto label_19e4fc;
            case 0x19E500u: goto label_19e500;
            case 0x19E504u: goto label_19e504;
            case 0x19E508u: goto label_19e508;
            case 0x19E50Cu: goto label_19e50c;
            case 0x19E510u: goto label_19e510;
            case 0x19E514u: goto label_19e514;
            case 0x19E518u: goto label_19e518;
            case 0x19E51Cu: goto label_19e51c;
            case 0x19E520u: goto label_19e520;
            case 0x19E524u: goto label_19e524;
            case 0x19E528u: goto label_19e528;
            case 0x19E52Cu: goto label_19e52c;
            case 0x19E530u: goto label_19e530;
            case 0x19E534u: goto label_19e534;
            case 0x19E538u: goto label_19e538;
            case 0x19E53Cu: goto label_19e53c;
            case 0x19E540u: goto label_19e540;
            case 0x19E544u: goto label_19e544;
            case 0x19E548u: goto label_19e548;
            case 0x19E54Cu: goto label_19e54c;
            case 0x19E550u: goto label_19e550;
            case 0x19E554u: goto label_19e554;
            case 0x19E558u: goto label_19e558;
            case 0x19E55Cu: goto label_19e55c;
            case 0x19E560u: goto label_19e560;
            case 0x19E564u: goto label_19e564;
            case 0x19E568u: goto label_19e568;
            case 0x19E56Cu: goto label_19e56c;
            case 0x19E570u: goto label_19e570;
            case 0x19E574u: goto label_19e574;
            case 0x19E578u: goto label_19e578;
            case 0x19E57Cu: goto label_19e57c;
            case 0x19E580u: goto label_19e580;
            case 0x19E584u: goto label_19e584;
            case 0x19E588u: goto label_19e588;
            case 0x19E58Cu: goto label_19e58c;
            case 0x19E590u: goto label_19e590;
            case 0x19E594u: goto label_19e594;
            case 0x19E598u: goto label_19e598;
            case 0x19E59Cu: goto label_19e59c;
            case 0x19E5A0u: goto label_19e5a0;
            case 0x19E5A4u: goto label_19e5a4;
            case 0x19E5A8u: goto label_19e5a8;
            case 0x19E5ACu: goto label_19e5ac;
            case 0x19E5B0u: goto label_19e5b0;
            case 0x19E5B4u: goto label_19e5b4;
            case 0x19E5B8u: goto label_19e5b8;
            case 0x19E5BCu: goto label_19e5bc;
            case 0x19E5C0u: goto label_19e5c0;
            case 0x19E5C4u: goto label_19e5c4;
            case 0x19E5C8u: goto label_19e5c8;
            case 0x19E5CCu: goto label_19e5cc;
            case 0x19E5D0u: goto label_19e5d0;
            case 0x19E5D4u: goto label_19e5d4;
            case 0x19E5D8u: goto label_19e5d8;
            case 0x19E5DCu: goto label_19e5dc;
            case 0x19E5E0u: goto label_19e5e0;
            case 0x19E5E4u: goto label_19e5e4;
            case 0x19E5E8u: goto label_19e5e8;
            case 0x19E5ECu: goto label_19e5ec;
            case 0x19E5F0u: goto label_19e5f0;
            case 0x19E5F4u: goto label_19e5f4;
            case 0x19E5F8u: goto label_19e5f8;
            case 0x19E5FCu: goto label_19e5fc;
            case 0x19E600u: goto label_19e600;
            case 0x19E604u: goto label_19e604;
            case 0x19E608u: goto label_19e608;
            case 0x19E60Cu: goto label_19e60c;
            case 0x19E610u: goto label_19e610;
            case 0x19E614u: goto label_19e614;
            case 0x19E618u: goto label_19e618;
            case 0x19E61Cu: goto label_19e61c;
            case 0x19E620u: goto label_19e620;
            case 0x19E624u: goto label_19e624;
            case 0x19E628u: goto label_19e628;
            case 0x19E62Cu: goto label_19e62c;
            case 0x19E630u: goto label_19e630;
            case 0x19E634u: goto label_19e634;
            case 0x19E638u: goto label_19e638;
            case 0x19E63Cu: goto label_19e63c;
            case 0x19E640u: goto label_19e640;
            case 0x19E644u: goto label_19e644;
            case 0x19E648u: goto label_19e648;
            case 0x19E64Cu: goto label_19e64c;
            case 0x19E650u: goto label_19e650;
            case 0x19E654u: goto label_19e654;
            case 0x19E658u: goto label_19e658;
            case 0x19E65Cu: goto label_19e65c;
            case 0x19E660u: goto label_19e660;
            case 0x19E664u: goto label_19e664;
            case 0x19E668u: goto label_19e668;
            case 0x19E66Cu: goto label_19e66c;
            case 0x19E670u: goto label_19e670;
            case 0x19E674u: goto label_19e674;
            case 0x19E678u: goto label_19e678;
            case 0x19E67Cu: goto label_19e67c;
            case 0x19E680u: goto label_19e680;
            case 0x19E684u: goto label_19e684;
            case 0x19E688u: goto label_19e688;
            case 0x19E68Cu: goto label_19e68c;
            case 0x19E690u: goto label_19e690;
            case 0x19E694u: goto label_19e694;
            case 0x19E698u: goto label_19e698;
            case 0x19E69Cu: goto label_19e69c;
            case 0x19E6A0u: goto label_19e6a0;
            case 0x19E6A4u: goto label_19e6a4;
            case 0x19E6A8u: goto label_19e6a8;
            case 0x19E6ACu: goto label_19e6ac;
            case 0x19E6B0u: goto label_19e6b0;
            case 0x19E6B4u: goto label_19e6b4;
            case 0x19E6B8u: goto label_19e6b8;
            case 0x19E6BCu: goto label_19e6bc;
            case 0x19E6C0u: goto label_19e6c0;
            case 0x19E6C4u: goto label_19e6c4;
            case 0x19E6C8u: goto label_19e6c8;
            case 0x19E6CCu: goto label_19e6cc;
            case 0x19E6D0u: goto label_19e6d0;
            case 0x19E6D4u: goto label_19e6d4;
            case 0x19E6D8u: goto label_19e6d8;
            case 0x19E6DCu: goto label_19e6dc;
            case 0x19E6E0u: goto label_19e6e0;
            case 0x19E6E4u: goto label_19e6e4;
            case 0x19E6E8u: goto label_19e6e8;
            case 0x19E6ECu: goto label_19e6ec;
            case 0x19E6F0u: goto label_19e6f0;
            case 0x19E6F4u: goto label_19e6f4;
            case 0x19E6F8u: goto label_19e6f8;
            case 0x19E6FCu: goto label_19e6fc;
            case 0x19E700u: goto label_19e700;
            case 0x19E704u: goto label_19e704;
            case 0x19E708u: goto label_19e708;
            case 0x19E70Cu: goto label_19e70c;
            case 0x19E710u: goto label_19e710;
            case 0x19E714u: goto label_19e714;
            case 0x19E718u: goto label_19e718;
            case 0x19E71Cu: goto label_19e71c;
            case 0x19E720u: goto label_19e720;
            case 0x19E724u: goto label_19e724;
            case 0x19E728u: goto label_19e728;
            case 0x19E72Cu: goto label_19e72c;
            case 0x19E730u: goto label_19e730;
            case 0x19E734u: goto label_19e734;
            case 0x19E738u: goto label_19e738;
            case 0x19E73Cu: goto label_19e73c;
            case 0x19E740u: goto label_19e740;
            case 0x19E744u: goto label_19e744;
            case 0x19E748u: goto label_19e748;
            case 0x19E74Cu: goto label_19e74c;
            case 0x19E750u: goto label_19e750;
            case 0x19E754u: goto label_19e754;
            case 0x19E758u: goto label_19e758;
            case 0x19E75Cu: goto label_19e75c;
            case 0x19E760u: goto label_19e760;
            case 0x19E764u: goto label_19e764;
            case 0x19E768u: goto label_19e768;
            case 0x19E76Cu: goto label_19e76c;
            case 0x19E770u: goto label_19e770;
            case 0x19E774u: goto label_19e774;
            case 0x19E778u: goto label_19e778;
            case 0x19E77Cu: goto label_19e77c;
            case 0x19E780u: goto label_19e780;
            case 0x19E784u: goto label_19e784;
            case 0x19E788u: goto label_19e788;
            case 0x19E78Cu: goto label_19e78c;
            case 0x19E790u: goto label_19e790;
            case 0x19E794u: goto label_19e794;
            case 0x19E798u: goto label_19e798;
            case 0x19E79Cu: goto label_19e79c;
            case 0x19E7A0u: goto label_19e7a0;
            case 0x19E7A4u: goto label_19e7a4;
            case 0x19E7A8u: goto label_19e7a8;
            case 0x19E7ACu: goto label_19e7ac;
            case 0x19E7B0u: goto label_19e7b0;
            case 0x19E7B4u: goto label_19e7b4;
            case 0x19E7B8u: goto label_19e7b8;
            case 0x19E7BCu: goto label_19e7bc;
            case 0x19E7C0u: goto label_19e7c0;
            case 0x19E7C4u: goto label_19e7c4;
            case 0x19E7C8u: goto label_19e7c8;
            case 0x19E7CCu: goto label_19e7cc;
            case 0x19E7D0u: goto label_19e7d0;
            case 0x19E7D4u: goto label_19e7d4;
            case 0x19E7D8u: goto label_19e7d8;
            case 0x19E7DCu: goto label_19e7dc;
            case 0x19E7E0u: goto label_19e7e0;
            case 0x19E7E4u: goto label_19e7e4;
            case 0x19E7E8u: goto label_19e7e8;
            case 0x19E7ECu: goto label_19e7ec;
            case 0x19E7F0u: goto label_19e7f0;
            case 0x19E7F4u: goto label_19e7f4;
            case 0x19E7F8u: goto label_19e7f8;
            case 0x19E7FCu: goto label_19e7fc;
            case 0x19E800u: goto label_19e800;
            case 0x19E804u: goto label_19e804;
            case 0x19E808u: goto label_19e808;
            case 0x19E80Cu: goto label_19e80c;
            case 0x19E810u: goto label_19e810;
            case 0x19E814u: goto label_19e814;
            case 0x19E818u: goto label_19e818;
            case 0x19E81Cu: goto label_19e81c;
            case 0x19E820u: goto label_19e820;
            case 0x19E824u: goto label_19e824;
            case 0x19E828u: goto label_19e828;
            case 0x19E82Cu: goto label_19e82c;
            case 0x19E830u: goto label_19e830;
            case 0x19E834u: goto label_19e834;
            case 0x19E838u: goto label_19e838;
            case 0x19E83Cu: goto label_19e83c;
            case 0x19E840u: goto label_19e840;
            case 0x19E844u: goto label_19e844;
            case 0x19E848u: goto label_19e848;
            case 0x19E84Cu: goto label_19e84c;
            case 0x19E850u: goto label_19e850;
            case 0x19E854u: goto label_19e854;
            case 0x19E858u: goto label_19e858;
            case 0x19E85Cu: goto label_19e85c;
            case 0x19E860u: goto label_19e860;
            case 0x19E864u: goto label_19e864;
            case 0x19E868u: goto label_19e868;
            case 0x19E86Cu: goto label_19e86c;
            case 0x19E870u: goto label_19e870;
            case 0x19E874u: goto label_19e874;
            case 0x19E878u: goto label_19e878;
            case 0x19E87Cu: goto label_19e87c;
            case 0x19E880u: goto label_19e880;
            case 0x19E884u: goto label_19e884;
            case 0x19E888u: goto label_19e888;
            case 0x19E88Cu: goto label_19e88c;
            case 0x19E890u: goto label_19e890;
            case 0x19E894u: goto label_19e894;
            case 0x19E898u: goto label_19e898;
            case 0x19E89Cu: goto label_19e89c;
            case 0x19E8A0u: goto label_19e8a0;
            case 0x19E8A4u: goto label_19e8a4;
            case 0x19E8A8u: goto label_19e8a8;
            case 0x19E8ACu: goto label_19e8ac;
            case 0x19E8B0u: goto label_19e8b0;
            case 0x19E8B4u: goto label_19e8b4;
            case 0x19E8B8u: goto label_19e8b8;
            case 0x19E8BCu: goto label_19e8bc;
            case 0x19E8C0u: goto label_19e8c0;
            case 0x19E8C4u: goto label_19e8c4;
            case 0x19E8C8u: goto label_19e8c8;
            case 0x19E8CCu: goto label_19e8cc;
            case 0x19E8D0u: goto label_19e8d0;
            case 0x19E8D4u: goto label_19e8d4;
            case 0x19E8D8u: goto label_19e8d8;
            case 0x19E8DCu: goto label_19e8dc;
            case 0x19E8E0u: goto label_19e8e0;
            case 0x19E8E4u: goto label_19e8e4;
            case 0x19E8E8u: goto label_19e8e8;
            case 0x19E8ECu: goto label_19e8ec;
            case 0x19E8F0u: goto label_19e8f0;
            case 0x19E8F4u: goto label_19e8f4;
            case 0x19E8F8u: goto label_19e8f8;
            case 0x19E8FCu: goto label_19e8fc;
            case 0x19E900u: goto label_19e900;
            case 0x19E904u: goto label_19e904;
            case 0x19E908u: goto label_19e908;
            case 0x19E90Cu: goto label_19e90c;
            case 0x19E910u: goto label_19e910;
            case 0x19E914u: goto label_19e914;
            case 0x19E918u: goto label_19e918;
            case 0x19E91Cu: goto label_19e91c;
            case 0x19E920u: goto label_19e920;
            case 0x19E924u: goto label_19e924;
            case 0x19E928u: goto label_19e928;
            case 0x19E92Cu: goto label_19e92c;
            case 0x19E930u: goto label_19e930;
            case 0x19E934u: goto label_19e934;
            case 0x19E938u: goto label_19e938;
            case 0x19E93Cu: goto label_19e93c;
            case 0x19E940u: goto label_19e940;
            case 0x19E944u: goto label_19e944;
            case 0x19E948u: goto label_19e948;
            case 0x19E94Cu: goto label_19e94c;
            case 0x19E950u: goto label_19e950;
            case 0x19E954u: goto label_19e954;
            case 0x19E958u: goto label_19e958;
            case 0x19E95Cu: goto label_19e95c;
            case 0x19E960u: goto label_19e960;
            case 0x19E964u: goto label_19e964;
            case 0x19E968u: goto label_19e968;
            case 0x19E96Cu: goto label_19e96c;
            case 0x19E970u: goto label_19e970;
            case 0x19E974u: goto label_19e974;
            case 0x19E978u: goto label_19e978;
            case 0x19E97Cu: goto label_19e97c;
            case 0x19E980u: goto label_19e980;
            case 0x19E984u: goto label_19e984;
            case 0x19E988u: goto label_19e988;
            case 0x19E98Cu: goto label_19e98c;
            case 0x19E990u: goto label_19e990;
            case 0x19E994u: goto label_19e994;
            case 0x19E998u: goto label_19e998;
            case 0x19E99Cu: goto label_19e99c;
            case 0x19E9A0u: goto label_19e9a0;
            case 0x19E9A4u: goto label_19e9a4;
            case 0x19E9A8u: goto label_19e9a8;
            case 0x19E9ACu: goto label_19e9ac;
            case 0x19E9B0u: goto label_19e9b0;
            case 0x19E9B4u: goto label_19e9b4;
            case 0x19E9B8u: goto label_19e9b8;
            case 0x19E9BCu: goto label_19e9bc;
            case 0x19E9C0u: goto label_19e9c0;
            case 0x19E9C4u: goto label_19e9c4;
            case 0x19E9C8u: goto label_19e9c8;
            case 0x19E9CCu: goto label_19e9cc;
            case 0x19E9D0u: goto label_19e9d0;
            case 0x19E9D4u: goto label_19e9d4;
            case 0x19E9D8u: goto label_19e9d8;
            case 0x19E9DCu: goto label_19e9dc;
            case 0x19E9E0u: goto label_19e9e0;
            case 0x19E9E4u: goto label_19e9e4;
            case 0x19E9E8u: goto label_19e9e8;
            case 0x19E9ECu: goto label_19e9ec;
            case 0x19E9F0u: goto label_19e9f0;
            case 0x19E9F4u: goto label_19e9f4;
            case 0x19E9F8u: goto label_19e9f8;
            case 0x19E9FCu: goto label_19e9fc;
            case 0x19EA00u: goto label_19ea00;
            case 0x19EA04u: goto label_19ea04;
            case 0x19EA08u: goto label_19ea08;
            case 0x19EA0Cu: goto label_19ea0c;
            case 0x19EA10u: goto label_19ea10;
            case 0x19EA14u: goto label_19ea14;
            case 0x19EA18u: goto label_19ea18;
            case 0x19EA1Cu: goto label_19ea1c;
            case 0x19EA20u: goto label_19ea20;
            case 0x19EA24u: goto label_19ea24;
            case 0x19EA28u: goto label_19ea28;
            case 0x19EA2Cu: goto label_19ea2c;
            case 0x19EA30u: goto label_19ea30;
            case 0x19EA34u: goto label_19ea34;
            case 0x19EA38u: goto label_19ea38;
            case 0x19EA3Cu: goto label_19ea3c;
            case 0x19EA40u: goto label_19ea40;
            case 0x19EA44u: goto label_19ea44;
            case 0x19EA48u: goto label_19ea48;
            case 0x19EA4Cu: goto label_19ea4c;
            case 0x19EA50u: goto label_19ea50;
            case 0x19EA54u: goto label_19ea54;
            case 0x19EA58u: goto label_19ea58;
            case 0x19EA5Cu: goto label_19ea5c;
            case 0x19EA60u: goto label_19ea60;
            case 0x19EA64u: goto label_19ea64;
            case 0x19EA68u: goto label_19ea68;
            case 0x19EA6Cu: goto label_19ea6c;
            case 0x19EA70u: goto label_19ea70;
            case 0x19EA74u: goto label_19ea74;
            case 0x19EA78u: goto label_19ea78;
            case 0x19EA7Cu: goto label_19ea7c;
            case 0x19EA80u: goto label_19ea80;
            case 0x19EA84u: goto label_19ea84;
            case 0x19EA88u: goto label_19ea88;
            case 0x19EA8Cu: goto label_19ea8c;
            case 0x19EA90u: goto label_19ea90;
            case 0x19EA94u: goto label_19ea94;
            case 0x19EA98u: goto label_19ea98;
            case 0x19EA9Cu: goto label_19ea9c;
            case 0x19EAA0u: goto label_19eaa0;
            case 0x19EAA4u: goto label_19eaa4;
            case 0x19EAA8u: goto label_19eaa8;
            case 0x19EAACu: goto label_19eaac;
            case 0x19EAB0u: goto label_19eab0;
            case 0x19EAB4u: goto label_19eab4;
            case 0x19EAB8u: goto label_19eab8;
            case 0x19EABCu: goto label_19eabc;
            case 0x19EAC0u: goto label_19eac0;
            case 0x19EAC4u: goto label_19eac4;
            case 0x19EAC8u: goto label_19eac8;
            case 0x19EACCu: goto label_19eacc;
            case 0x19EAD0u: goto label_19ead0;
            case 0x19EAD4u: goto label_19ead4;
            case 0x19EAD8u: goto label_19ead8;
            case 0x19EADCu: goto label_19eadc;
            case 0x19EAE0u: goto label_19eae0;
            case 0x19EAE4u: goto label_19eae4;
            case 0x19EAE8u: goto label_19eae8;
            case 0x19EAECu: goto label_19eaec;
            case 0x19EAF0u: goto label_19eaf0;
            case 0x19EAF4u: goto label_19eaf4;
            case 0x19EAF8u: goto label_19eaf8;
            case 0x19EAFCu: goto label_19eafc;
            case 0x19EB00u: goto label_19eb00;
            case 0x19EB04u: goto label_19eb04;
            case 0x19EB08u: goto label_19eb08;
            case 0x19EB0Cu: goto label_19eb0c;
            case 0x19EB10u: goto label_19eb10;
            case 0x19EB14u: goto label_19eb14;
            case 0x19EB18u: goto label_19eb18;
            case 0x19EB1Cu: goto label_19eb1c;
            case 0x19EB20u: goto label_19eb20;
            case 0x19EB24u: goto label_19eb24;
            case 0x19EB28u: goto label_19eb28;
            case 0x19EB2Cu: goto label_19eb2c;
            case 0x19EB30u: goto label_19eb30;
            case 0x19EB34u: goto label_19eb34;
            case 0x19EB38u: goto label_19eb38;
            case 0x19EB3Cu: goto label_19eb3c;
            case 0x19EB40u: goto label_19eb40;
            case 0x19EB44u: goto label_19eb44;
            case 0x19EB48u: goto label_19eb48;
            case 0x19EB4Cu: goto label_19eb4c;
            case 0x19EB50u: goto label_19eb50;
            case 0x19EB54u: goto label_19eb54;
            case 0x19EB58u: goto label_19eb58;
            case 0x19EB5Cu: goto label_19eb5c;
            case 0x19EB60u: goto label_19eb60;
            case 0x19EB64u: goto label_19eb64;
            case 0x19EB68u: goto label_19eb68;
            case 0x19EB6Cu: goto label_19eb6c;
            case 0x19EB70u: goto label_19eb70;
            case 0x19EB74u: goto label_19eb74;
            case 0x19EB78u: goto label_19eb78;
            case 0x19EB7Cu: goto label_19eb7c;
            case 0x19EB80u: goto label_19eb80;
            case 0x19EB84u: goto label_19eb84;
            case 0x19EB88u: goto label_19eb88;
            case 0x19EB8Cu: goto label_19eb8c;
            case 0x19EB90u: goto label_19eb90;
            case 0x19EB94u: goto label_19eb94;
            case 0x19EB98u: goto label_19eb98;
            case 0x19EB9Cu: goto label_19eb9c;
            case 0x19EBA0u: goto label_19eba0;
            case 0x19EBA4u: goto label_19eba4;
            case 0x19EBA8u: goto label_19eba8;
            case 0x19EBACu: goto label_19ebac;
            case 0x19EBB0u: goto label_19ebb0;
            case 0x19EBB4u: goto label_19ebb4;
            case 0x19EBB8u: goto label_19ebb8;
            case 0x19EBBCu: goto label_19ebbc;
            case 0x19EBC0u: goto label_19ebc0;
            case 0x19EBC4u: goto label_19ebc4;
            case 0x19EBC8u: goto label_19ebc8;
            case 0x19EBCCu: goto label_19ebcc;
            case 0x19EBD0u: goto label_19ebd0;
            case 0x19EBD4u: goto label_19ebd4;
            case 0x19EBD8u: goto label_19ebd8;
            case 0x19EBDCu: goto label_19ebdc;
            case 0x19EBE0u: goto label_19ebe0;
            case 0x19EBE4u: goto label_19ebe4;
            case 0x19EBE8u: goto label_19ebe8;
            case 0x19EBECu: goto label_19ebec;
            case 0x19EBF0u: goto label_19ebf0;
            case 0x19EBF4u: goto label_19ebf4;
            case 0x19EBF8u: goto label_19ebf8;
            case 0x19EBFCu: goto label_19ebfc;
            case 0x19EC00u: goto label_19ec00;
            case 0x19EC04u: goto label_19ec04;
            case 0x19EC08u: goto label_19ec08;
            case 0x19EC0Cu: goto label_19ec0c;
            case 0x19EC10u: goto label_19ec10;
            case 0x19EC14u: goto label_19ec14;
            case 0x19EC18u: goto label_19ec18;
            case 0x19EC1Cu: goto label_19ec1c;
            case 0x19EC20u: goto label_19ec20;
            case 0x19EC24u: goto label_19ec24;
            case 0x19EC28u: goto label_19ec28;
            case 0x19EC2Cu: goto label_19ec2c;
            case 0x19EC30u: goto label_19ec30;
            case 0x19EC34u: goto label_19ec34;
            case 0x19EC38u: goto label_19ec38;
            case 0x19EC3Cu: goto label_19ec3c;
            case 0x19EC40u: goto label_19ec40;
            case 0x19EC44u: goto label_19ec44;
            case 0x19EC48u: goto label_19ec48;
            case 0x19EC4Cu: goto label_19ec4c;
            case 0x19EC50u: goto label_19ec50;
            case 0x19EC54u: goto label_19ec54;
            case 0x19EC58u: goto label_19ec58;
            case 0x19EC5Cu: goto label_19ec5c;
            case 0x19EC60u: goto label_19ec60;
            case 0x19EC64u: goto label_19ec64;
            case 0x19EC68u: goto label_19ec68;
            case 0x19EC6Cu: goto label_19ec6c;
            case 0x19EC70u: goto label_19ec70;
            case 0x19EC74u: goto label_19ec74;
            case 0x19EC78u: goto label_19ec78;
            case 0x19EC7Cu: goto label_19ec7c;
            case 0x19EC80u: goto label_19ec80;
            case 0x19EC84u: goto label_19ec84;
            case 0x19EC88u: goto label_19ec88;
            case 0x19EC8Cu: goto label_19ec8c;
            case 0x19EC90u: goto label_19ec90;
            case 0x19EC94u: goto label_19ec94;
            case 0x19EC98u: goto label_19ec98;
            case 0x19EC9Cu: goto label_19ec9c;
            case 0x19ECA0u: goto label_19eca0;
            case 0x19ECA4u: goto label_19eca4;
            case 0x19ECA8u: goto label_19eca8;
            case 0x19ECACu: goto label_19ecac;
            case 0x19ECB0u: goto label_19ecb0;
            case 0x19ECB4u: goto label_19ecb4;
            case 0x19ECB8u: goto label_19ecb8;
            case 0x19ECBCu: goto label_19ecbc;
            case 0x19ECC0u: goto label_19ecc0;
            case 0x19ECC4u: goto label_19ecc4;
            case 0x19ECC8u: goto label_19ecc8;
            case 0x19ECCCu: goto label_19eccc;
            case 0x19ECD0u: goto label_19ecd0;
            case 0x19ECD4u: goto label_19ecd4;
            case 0x19ECD8u: goto label_19ecd8;
            case 0x19ECDCu: goto label_19ecdc;
            case 0x19ECE0u: goto label_19ece0;
            case 0x19ECE4u: goto label_19ece4;
            case 0x19ECE8u: goto label_19ece8;
            case 0x19ECECu: goto label_19ecec;
            case 0x19ECF0u: goto label_19ecf0;
            case 0x19ECF4u: goto label_19ecf4;
            case 0x19ECF8u: goto label_19ecf8;
            case 0x19ECFCu: goto label_19ecfc;
            case 0x19ED00u: goto label_19ed00;
            case 0x19ED04u: goto label_19ed04;
            case 0x19ED08u: goto label_19ed08;
            case 0x19ED0Cu: goto label_19ed0c;
            case 0x19ED10u: goto label_19ed10;
            case 0x19ED14u: goto label_19ed14;
            case 0x19ED18u: goto label_19ed18;
            case 0x19ED1Cu: goto label_19ed1c;
            case 0x19ED20u: goto label_19ed20;
            case 0x19ED24u: goto label_19ed24;
            case 0x19ED28u: goto label_19ed28;
            case 0x19ED2Cu: goto label_19ed2c;
            case 0x19ED30u: goto label_19ed30;
            case 0x19ED34u: goto label_19ed34;
            case 0x19ED38u: goto label_19ed38;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19E188u; }
            if (ctx->pc != 0x19E188u) { return; }
        }
    }
    ctx->pc = 0x19E188u;
label_19e188:
    // 0x19e188: 0x100002e7  b           . + 4 + (0x2E7 << 2)
label_19e18c:
    if (ctx->pc == 0x19E18Cu) {
        ctx->pc = 0x19E190u;
        goto label_19e190;
    }
    ctx->pc = 0x19E188u;
    {
        const bool branch_taken_0x19e188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e188) {
            ctx->pc = 0x19ED28u;
            goto label_19ed28;
        }
    }
    ctx->pc = 0x19E190u;
label_19e190:
    // 0x19e190: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19e190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19e194:
    // 0x19e194: 0x1c6001aa  bgtz        $v1, . + 4 + (0x1AA << 2)
label_19e198:
    if (ctx->pc == 0x19E198u) {
        ctx->pc = 0x19E198u;
            // 0x19e198: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x19E19Cu;
        goto label_19e19c;
    }
    ctx->pc = 0x19E194u;
    {
        const bool branch_taken_0x19e194 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x19E198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E194u;
            // 0x19e198: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e194) {
            ctx->pc = 0x19E840u;
            goto label_19e840;
        }
    }
    ctx->pc = 0x19E19Cu;
label_19e19c:
    // 0x19e19c: 0xc060718  jal         func_181C60
label_19e1a0:
    if (ctx->pc == 0x19E1A0u) {
        ctx->pc = 0x19E1A4u;
        goto label_19e1a4;
    }
    ctx->pc = 0x19E19Cu;
    SET_GPR_U32(ctx, 31, 0x19E1A4u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1A4u; }
        if (ctx->pc != 0x19E1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1A4u; }
        if (ctx->pc != 0x19E1A4u) { return; }
    }
    ctx->pc = 0x19E1A4u;
label_19e1a4:
    // 0x19e1a4: 0xc0656b4  jal         func_195AD0
label_19e1a8:
    if (ctx->pc == 0x19E1A8u) {
        ctx->pc = 0x19E1ACu;
        goto label_19e1ac;
    }
    ctx->pc = 0x19E1A4u;
    SET_GPR_U32(ctx, 31, 0x19E1ACu);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1ACu; }
        if (ctx->pc != 0x19E1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1ACu; }
        if (ctx->pc != 0x19E1ACu) { return; }
    }
    ctx->pc = 0x19E1ACu;
label_19e1ac:
    // 0x19e1ac: 0xc056f84  jal         func_15BE10
label_19e1b0:
    if (ctx->pc == 0x19E1B0u) {
        ctx->pc = 0x19E1B0u;
            // 0x19e1b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E1B4u;
        goto label_19e1b4;
    }
    ctx->pc = 0x19E1ACu;
    SET_GPR_U32(ctx, 31, 0x19E1B4u);
    ctx->pc = 0x19E1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1ACu;
            // 0x19e1b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1B4u; }
        if (ctx->pc != 0x19E1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1B4u; }
        if (ctx->pc != 0x19E1B4u) { return; }
    }
    ctx->pc = 0x19E1B4u;
label_19e1b4:
    // 0x19e1b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19e1b8:
    if (ctx->pc == 0x19E1B8u) {
        ctx->pc = 0x19E1B8u;
            // 0x19e1b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E1BCu;
        goto label_19e1bc;
    }
    ctx->pc = 0x19E1B4u;
    {
        const bool branch_taken_0x19e1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1B4u;
            // 0x19e1b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1b4) {
            ctx->pc = 0x19E1C8u;
            goto label_19e1c8;
        }
    }
    ctx->pc = 0x19E1BCu;
label_19e1bc:
    // 0x19e1bc: 0xc055124  jal         func_154490
label_19e1c0:
    if (ctx->pc == 0x19E1C0u) {
        ctx->pc = 0x19E1C0u;
            // 0x19e1c0: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x19E1C4u;
        goto label_19e1c4;
    }
    ctx->pc = 0x19E1BCu;
    SET_GPR_U32(ctx, 31, 0x19E1C4u);
    ctx->pc = 0x19E1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1BCu;
            // 0x19e1c0: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1C4u; }
        if (ctx->pc != 0x19E1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1C4u; }
        if (ctx->pc != 0x19E1C4u) { return; }
    }
    ctx->pc = 0x19E1C4u;
label_19e1c4:
    // 0x19e1c4: 0x0  nop
    ctx->pc = 0x19e1c4u;
    // NOP
label_19e1c8:
    // 0x19e1c8: 0xc056f84  jal         func_15BE10
label_19e1cc:
    if (ctx->pc == 0x19E1CCu) {
        ctx->pc = 0x19E1CCu;
            // 0x19e1cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x19E1D0u;
        goto label_19e1d0;
    }
    ctx->pc = 0x19E1C8u;
    SET_GPR_U32(ctx, 31, 0x19E1D0u);
    ctx->pc = 0x19E1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1C8u;
            // 0x19e1cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1D0u; }
        if (ctx->pc != 0x19E1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1D0u; }
        if (ctx->pc != 0x19E1D0u) { return; }
    }
    ctx->pc = 0x19E1D0u;
label_19e1d0:
    // 0x19e1d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19e1d4:
    if (ctx->pc == 0x19E1D4u) {
        ctx->pc = 0x19E1D4u;
            // 0x19e1d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x19E1D8u;
        goto label_19e1d8;
    }
    ctx->pc = 0x19E1D0u;
    {
        const bool branch_taken_0x19e1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1D0u;
            // 0x19e1d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1d0) {
            ctx->pc = 0x19E1E0u;
            goto label_19e1e0;
        }
    }
    ctx->pc = 0x19E1D8u;
label_19e1d8:
    // 0x19e1d8: 0xc055124  jal         func_154490
label_19e1dc:
    if (ctx->pc == 0x19E1DCu) {
        ctx->pc = 0x19E1DCu;
            // 0x19e1dc: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x19E1E0u;
        goto label_19e1e0;
    }
    ctx->pc = 0x19E1D8u;
    SET_GPR_U32(ctx, 31, 0x19E1E0u);
    ctx->pc = 0x19E1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1D8u;
            // 0x19e1dc: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1E0u; }
        if (ctx->pc != 0x19E1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1E0u; }
        if (ctx->pc != 0x19E1E0u) { return; }
    }
    ctx->pc = 0x19E1E0u;
label_19e1e0:
    // 0x19e1e0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x19e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_19e1e4:
    // 0x19e1e4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x19e1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e1e8:
    // 0x19e1e8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19e1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e1ec:
    // 0x19e1ec: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19e1ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19e1f0:
    // 0x19e1f0: 0xc05d080  jal         func_174200
label_19e1f4:
    if (ctx->pc == 0x19E1F4u) {
        ctx->pc = 0x19E1F4u;
            // 0x19e1f4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19E1F8u;
        goto label_19e1f8;
    }
    ctx->pc = 0x19E1F0u;
    SET_GPR_U32(ctx, 31, 0x19E1F8u);
    ctx->pc = 0x19E1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1F0u;
            // 0x19e1f4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1F8u; }
        if (ctx->pc != 0x19E1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1F8u; }
        if (ctx->pc != 0x19E1F8u) { return; }
    }
    ctx->pc = 0x19E1F8u;
label_19e1f8:
    // 0x19e1f8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x19e1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e1fc:
    // 0x19e1fc: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x19e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_19e200:
    // 0x19e200: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19e200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e204:
    // 0x19e204: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19e204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19e208:
    // 0x19e208: 0xc05d080  jal         func_174200
label_19e20c:
    if (ctx->pc == 0x19E20Cu) {
        ctx->pc = 0x19E20Cu;
            // 0x19e20c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19E210u;
        goto label_19e210;
    }
    ctx->pc = 0x19E208u;
    SET_GPR_U32(ctx, 31, 0x19E210u);
    ctx->pc = 0x19E20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E208u;
            // 0x19e20c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E210u; }
        if (ctx->pc != 0x19E210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E210u; }
        if (ctx->pc != 0x19E210u) { return; }
    }
    ctx->pc = 0x19E210u;
label_19e210:
    // 0x19e210: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x19e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e214:
    // 0x19e214: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x19e214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_19e218:
    // 0x19e218: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19e218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e21c:
    // 0x19e21c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19e21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19e220:
    // 0x19e220: 0xc05d080  jal         func_174200
label_19e224:
    if (ctx->pc == 0x19E224u) {
        ctx->pc = 0x19E224u;
            // 0x19e224: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19E228u;
        goto label_19e228;
    }
    ctx->pc = 0x19E220u;
    SET_GPR_U32(ctx, 31, 0x19E228u);
    ctx->pc = 0x19E224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E220u;
            // 0x19e224: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E228u; }
        if (ctx->pc != 0x19E228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E228u; }
        if (ctx->pc != 0x19E228u) { return; }
    }
    ctx->pc = 0x19E228u;
label_19e228:
    // 0x19e228: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x19e228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e22c:
    // 0x19e22c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19e22cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e230:
    // 0x19e230: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x19e230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e234:
    // 0x19e234: 0xc053740  jal         func_14DD00
label_19e238:
    if (ctx->pc == 0x19E238u) {
        ctx->pc = 0x19E238u;
            // 0x19e238: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x19E23Cu;
        goto label_19e23c;
    }
    ctx->pc = 0x19E234u;
    SET_GPR_U32(ctx, 31, 0x19E23Cu);
    ctx->pc = 0x19E238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E234u;
            // 0x19e238: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E23Cu; }
        if (ctx->pc != 0x19E23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E23Cu; }
        if (ctx->pc != 0x19E23Cu) { return; }
    }
    ctx->pc = 0x19E23Cu;
label_19e23c:
    // 0x19e23c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e240:
    // 0x19e240: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19e240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e244:
    // 0x19e244: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x19e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e248:
    // 0x19e248: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e248u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e24c:
    // 0x19e24c: 0x24640046  addiu       $a0, $v1, 0x46
    ctx->pc = 0x19e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 70));
label_19e250:
    // 0x19e250: 0xc053740  jal         func_14DD00
label_19e254:
    if (ctx->pc == 0x19E254u) {
        ctx->pc = 0x19E254u;
            // 0x19e254: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19E258u;
        goto label_19e258;
    }
    ctx->pc = 0x19E250u;
    SET_GPR_U32(ctx, 31, 0x19E258u);
    ctx->pc = 0x19E254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E250u;
            // 0x19e254: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E258u; }
        if (ctx->pc != 0x19E258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E258u; }
        if (ctx->pc != 0x19E258u) { return; }
    }
    ctx->pc = 0x19E258u;
label_19e258:
    // 0x19e258: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e25c:
    // 0x19e25c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19e25cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e260:
    // 0x19e260: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x19e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e264:
    // 0x19e264: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e264u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e268:
    // 0x19e268: 0x2464ffba  addiu       $a0, $v1, -0x46
    ctx->pc = 0x19e268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967226));
label_19e26c:
    // 0x19e26c: 0xc053740  jal         func_14DD00
label_19e270:
    if (ctx->pc == 0x19E270u) {
        ctx->pc = 0x19E270u;
            // 0x19e270: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19E274u;
        goto label_19e274;
    }
    ctx->pc = 0x19E26Cu;
    SET_GPR_U32(ctx, 31, 0x19E274u);
    ctx->pc = 0x19E270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E26Cu;
            // 0x19e270: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E274u; }
        if (ctx->pc != 0x19E274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E274u; }
        if (ctx->pc != 0x19E274u) { return; }
    }
    ctx->pc = 0x19E274u;
label_19e274:
    // 0x19e274: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e278:
    // 0x19e278: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19e278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e27c:
    // 0x19e27c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x19e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e280:
    // 0x19e280: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e280u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e284:
    // 0x19e284: 0x24640032  addiu       $a0, $v1, 0x32
    ctx->pc = 0x19e284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
label_19e288:
    // 0x19e288: 0xc053740  jal         func_14DD00
label_19e28c:
    if (ctx->pc == 0x19E28Cu) {
        ctx->pc = 0x19E28Cu;
            // 0x19e28c: 0x2445002d  addiu       $a1, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->pc = 0x19E290u;
        goto label_19e290;
    }
    ctx->pc = 0x19E288u;
    SET_GPR_U32(ctx, 31, 0x19E290u);
    ctx->pc = 0x19E28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E288u;
            // 0x19e28c: 0x2445002d  addiu       $a1, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E290u; }
        if (ctx->pc != 0x19E290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E290u; }
        if (ctx->pc != 0x19E290u) { return; }
    }
    ctx->pc = 0x19E290u;
label_19e290:
    // 0x19e290: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e294:
    // 0x19e294: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19e294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e298:
    // 0x19e298: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x19e298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e29c:
    // 0x19e29c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e29cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e2a0:
    // 0x19e2a0: 0x2464ffce  addiu       $a0, $v1, -0x32
    ctx->pc = 0x19e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
label_19e2a4:
    // 0x19e2a4: 0xc053740  jal         func_14DD00
label_19e2a8:
    if (ctx->pc == 0x19E2A8u) {
        ctx->pc = 0x19E2A8u;
            // 0x19e2a8: 0x2445002d  addiu       $a1, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->pc = 0x19E2ACu;
        goto label_19e2ac;
    }
    ctx->pc = 0x19E2A4u;
    SET_GPR_U32(ctx, 31, 0x19E2ACu);
    ctx->pc = 0x19E2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2A4u;
            // 0x19e2a8: 0x2445002d  addiu       $a1, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2ACu; }
        if (ctx->pc != 0x19E2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2ACu; }
        if (ctx->pc != 0x19E2ACu) { return; }
    }
    ctx->pc = 0x19E2ACu;
label_19e2ac:
    // 0x19e2ac: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x19e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e2b0:
    // 0x19e2b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19e2b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e2b4:
    // 0x19e2b4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x19e2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e2b8:
    // 0x19e2b8: 0xc053740  jal         func_14DD00
label_19e2bc:
    if (ctx->pc == 0x19E2BCu) {
        ctx->pc = 0x19E2BCu;
            // 0x19e2bc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x19E2C0u;
        goto label_19e2c0;
    }
    ctx->pc = 0x19E2B8u;
    SET_GPR_U32(ctx, 31, 0x19E2C0u);
    ctx->pc = 0x19E2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2B8u;
            // 0x19e2bc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2C0u; }
        if (ctx->pc != 0x19E2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2C0u; }
        if (ctx->pc != 0x19E2C0u) { return; }
    }
    ctx->pc = 0x19E2C0u;
label_19e2c0:
    // 0x19e2c0: 0xc050bb4  jal         func_142ED0
label_19e2c4:
    if (ctx->pc == 0x19E2C4u) {
        ctx->pc = 0x19E2C8u;
        goto label_19e2c8;
    }
    ctx->pc = 0x19E2C0u;
    SET_GPR_U32(ctx, 31, 0x19E2C8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2C8u; }
        if (ctx->pc != 0x19E2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2C8u; }
        if (ctx->pc != 0x19E2C8u) { return; }
    }
    ctx->pc = 0x19E2C8u;
label_19e2c8:
    // 0x19e2c8: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e2cc:
    // 0x19e2cc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e2d0:
    // 0x19e2d0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e2d0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e2d4:
    // 0x19e2d4: 0x0  nop
    ctx->pc = 0x19e2d4u;
    // NOP
label_19e2d8:
    // 0x19e2d8: 0x0  nop
    ctx->pc = 0x19e2d8u;
    // NOP
label_19e2dc:
    // 0x19e2dc: 0x1010  mfhi        $v0
    ctx->pc = 0x19e2dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e2e0:
    // 0x19e2e0: 0xc050bb4  jal         func_142ED0
label_19e2e4:
    if (ctx->pc == 0x19E2E4u) {
        ctx->pc = 0x19E2E4u;
            // 0x19e2e4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E2E8u;
        goto label_19e2e8;
    }
    ctx->pc = 0x19E2E0u;
    SET_GPR_U32(ctx, 31, 0x19E2E8u);
    ctx->pc = 0x19E2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2E0u;
            // 0x19e2e4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2E8u; }
        if (ctx->pc != 0x19E2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2E8u; }
        if (ctx->pc != 0x19E2E8u) { return; }
    }
    ctx->pc = 0x19E2E8u;
label_19e2e8:
    // 0x19e2e8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e2ec:
    // 0x19e2ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e2f0:
    // 0x19e2f0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e2f0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e2f4:
    // 0x19e2f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19e2f8:
    // 0x19e2f8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e2fc:
    // 0x19e2fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e300:
    // 0x19e300: 0x1010  mfhi        $v0
    ctx->pc = 0x19e300u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e304:
    // 0x19e304: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e304u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e308:
    // 0x19e308: 0xc053740  jal         func_14DD00
label_19e30c:
    if (ctx->pc == 0x19E30Cu) {
        ctx->pc = 0x19E30Cu;
            // 0x19e30c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E310u;
        goto label_19e310;
    }
    ctx->pc = 0x19E308u;
    SET_GPR_U32(ctx, 31, 0x19E310u);
    ctx->pc = 0x19E30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E308u;
            // 0x19e30c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E310u; }
        if (ctx->pc != 0x19E310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E310u; }
        if (ctx->pc != 0x19E310u) { return; }
    }
    ctx->pc = 0x19E310u;
label_19e310:
    // 0x19e310: 0xc050bb4  jal         func_142ED0
label_19e314:
    if (ctx->pc == 0x19E314u) {
        ctx->pc = 0x19E318u;
        goto label_19e318;
    }
    ctx->pc = 0x19E310u;
    SET_GPR_U32(ctx, 31, 0x19E318u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E318u; }
        if (ctx->pc != 0x19E318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E318u; }
        if (ctx->pc != 0x19E318u) { return; }
    }
    ctx->pc = 0x19E318u;
label_19e318:
    // 0x19e318: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e31c:
    // 0x19e31c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e320:
    // 0x19e320: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e320u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e324:
    // 0x19e324: 0x0  nop
    ctx->pc = 0x19e324u;
    // NOP
label_19e328:
    // 0x19e328: 0x0  nop
    ctx->pc = 0x19e328u;
    // NOP
label_19e32c:
    // 0x19e32c: 0x1010  mfhi        $v0
    ctx->pc = 0x19e32cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e330:
    // 0x19e330: 0xc050bb4  jal         func_142ED0
label_19e334:
    if (ctx->pc == 0x19E334u) {
        ctx->pc = 0x19E334u;
            // 0x19e334: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E338u;
        goto label_19e338;
    }
    ctx->pc = 0x19E330u;
    SET_GPR_U32(ctx, 31, 0x19E338u);
    ctx->pc = 0x19E334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E330u;
            // 0x19e334: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E338u; }
        if (ctx->pc != 0x19E338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E338u; }
        if (ctx->pc != 0x19E338u) { return; }
    }
    ctx->pc = 0x19E338u;
label_19e338:
    // 0x19e338: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e33c:
    // 0x19e33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e340:
    // 0x19e340: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e340u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e344:
    // 0x19e344: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19e344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19e348:
    // 0x19e348: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19e348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e34c:
    // 0x19e34c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e350:
    // 0x19e350: 0x1010  mfhi        $v0
    ctx->pc = 0x19e350u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e354:
    // 0x19e354: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e354u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e358:
    // 0x19e358: 0xc053740  jal         func_14DD00
label_19e35c:
    if (ctx->pc == 0x19E35Cu) {
        ctx->pc = 0x19E35Cu;
            // 0x19e35c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E360u;
        goto label_19e360;
    }
    ctx->pc = 0x19E358u;
    SET_GPR_U32(ctx, 31, 0x19E360u);
    ctx->pc = 0x19E35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E358u;
            // 0x19e35c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E360u; }
        if (ctx->pc != 0x19E360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E360u; }
        if (ctx->pc != 0x19E360u) { return; }
    }
    ctx->pc = 0x19E360u;
label_19e360:
    // 0x19e360: 0xc050bb4  jal         func_142ED0
label_19e364:
    if (ctx->pc == 0x19E364u) {
        ctx->pc = 0x19E368u;
        goto label_19e368;
    }
    ctx->pc = 0x19E360u;
    SET_GPR_U32(ctx, 31, 0x19E368u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E368u; }
        if (ctx->pc != 0x19E368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E368u; }
        if (ctx->pc != 0x19E368u) { return; }
    }
    ctx->pc = 0x19E368u;
label_19e368:
    // 0x19e368: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e36c:
    // 0x19e36c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e370:
    // 0x19e370: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e370u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e374:
    // 0x19e374: 0x0  nop
    ctx->pc = 0x19e374u;
    // NOP
label_19e378:
    // 0x19e378: 0x0  nop
    ctx->pc = 0x19e378u;
    // NOP
label_19e37c:
    // 0x19e37c: 0x1010  mfhi        $v0
    ctx->pc = 0x19e37cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e380:
    // 0x19e380: 0xc050bb4  jal         func_142ED0
label_19e384:
    if (ctx->pc == 0x19E384u) {
        ctx->pc = 0x19E384u;
            // 0x19e384: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E388u;
        goto label_19e388;
    }
    ctx->pc = 0x19E380u;
    SET_GPR_U32(ctx, 31, 0x19E388u);
    ctx->pc = 0x19E384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E380u;
            // 0x19e384: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E388u; }
        if (ctx->pc != 0x19E388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E388u; }
        if (ctx->pc != 0x19E388u) { return; }
    }
    ctx->pc = 0x19E388u;
label_19e388:
    // 0x19e388: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e38c:
    // 0x19e38c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e390:
    // 0x19e390: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e390u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e394:
    // 0x19e394: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19e394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19e398:
    // 0x19e398: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19e398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e39c:
    // 0x19e39c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e3a0:
    // 0x19e3a0: 0x1010  mfhi        $v0
    ctx->pc = 0x19e3a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e3a4:
    // 0x19e3a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e3a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e3a8:
    // 0x19e3a8: 0xc053740  jal         func_14DD00
label_19e3ac:
    if (ctx->pc == 0x19E3ACu) {
        ctx->pc = 0x19E3ACu;
            // 0x19e3ac: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E3B0u;
        goto label_19e3b0;
    }
    ctx->pc = 0x19E3A8u;
    SET_GPR_U32(ctx, 31, 0x19E3B0u);
    ctx->pc = 0x19E3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E3A8u;
            // 0x19e3ac: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E3B0u; }
        if (ctx->pc != 0x19E3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E3B0u; }
        if (ctx->pc != 0x19E3B0u) { return; }
    }
    ctx->pc = 0x19E3B0u;
label_19e3b0:
    // 0x19e3b0: 0xc050bb4  jal         func_142ED0
label_19e3b4:
    if (ctx->pc == 0x19E3B4u) {
        ctx->pc = 0x19E3B8u;
        goto label_19e3b8;
    }
    ctx->pc = 0x19E3B0u;
    SET_GPR_U32(ctx, 31, 0x19E3B8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E3B8u; }
        if (ctx->pc != 0x19E3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E3B8u; }
        if (ctx->pc != 0x19E3B8u) { return; }
    }
    ctx->pc = 0x19E3B8u;
label_19e3b8:
    // 0x19e3b8: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e3bc:
    // 0x19e3bc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e3c0:
    // 0x19e3c0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e3c0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e3c4:
    // 0x19e3c4: 0x0  nop
    ctx->pc = 0x19e3c4u;
    // NOP
label_19e3c8:
    // 0x19e3c8: 0x0  nop
    ctx->pc = 0x19e3c8u;
    // NOP
label_19e3cc:
    // 0x19e3cc: 0x1010  mfhi        $v0
    ctx->pc = 0x19e3ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e3d0:
    // 0x19e3d0: 0xc050bb4  jal         func_142ED0
label_19e3d4:
    if (ctx->pc == 0x19E3D4u) {
        ctx->pc = 0x19E3D4u;
            // 0x19e3d4: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E3D8u;
        goto label_19e3d8;
    }
    ctx->pc = 0x19E3D0u;
    SET_GPR_U32(ctx, 31, 0x19E3D8u);
    ctx->pc = 0x19E3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E3D0u;
            // 0x19e3d4: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E3D8u; }
        if (ctx->pc != 0x19E3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E3D8u; }
        if (ctx->pc != 0x19E3D8u) { return; }
    }
    ctx->pc = 0x19E3D8u;
label_19e3d8:
    // 0x19e3d8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e3dc:
    // 0x19e3dc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x19e3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e3e0:
    // 0x19e3e0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e3e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e3e4:
    // 0x19e3e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e3e8:
    // 0x19e3e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19e3ec:
    // 0x19e3ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_19e3f0:
    // 0x19e3f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19e3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19e3f4:
    // 0x19e3f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x19e3f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e3f8:
    // 0x19e3f8: 0x1010  mfhi        $v0
    ctx->pc = 0x19e3f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e3fc:
    // 0x19e3fc: 0xc053740  jal         func_14DD00
label_19e400:
    if (ctx->pc == 0x19E400u) {
        ctx->pc = 0x19E400u;
            // 0x19e400: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E404u;
        goto label_19e404;
    }
    ctx->pc = 0x19E3FCu;
    SET_GPR_U32(ctx, 31, 0x19E404u);
    ctx->pc = 0x19E400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E3FCu;
            // 0x19e400: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E404u; }
        if (ctx->pc != 0x19E404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E404u; }
        if (ctx->pc != 0x19E404u) { return; }
    }
    ctx->pc = 0x19E404u;
label_19e404:
    // 0x19e404: 0xc050bb4  jal         func_142ED0
label_19e408:
    if (ctx->pc == 0x19E408u) {
        ctx->pc = 0x19E40Cu;
        goto label_19e40c;
    }
    ctx->pc = 0x19E404u;
    SET_GPR_U32(ctx, 31, 0x19E40Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E40Cu; }
        if (ctx->pc != 0x19E40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E40Cu; }
        if (ctx->pc != 0x19E40Cu) { return; }
    }
    ctx->pc = 0x19E40Cu;
label_19e40c:
    // 0x19e40c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e410:
    // 0x19e410: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e414:
    // 0x19e414: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e414u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e418:
    // 0x19e418: 0x0  nop
    ctx->pc = 0x19e418u;
    // NOP
label_19e41c:
    // 0x19e41c: 0x0  nop
    ctx->pc = 0x19e41cu;
    // NOP
label_19e420:
    // 0x19e420: 0x1010  mfhi        $v0
    ctx->pc = 0x19e420u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e424:
    // 0x19e424: 0xc050bb4  jal         func_142ED0
label_19e428:
    if (ctx->pc == 0x19E428u) {
        ctx->pc = 0x19E428u;
            // 0x19e428: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E42Cu;
        goto label_19e42c;
    }
    ctx->pc = 0x19E424u;
    SET_GPR_U32(ctx, 31, 0x19E42Cu);
    ctx->pc = 0x19E428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E424u;
            // 0x19e428: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E42Cu; }
        if (ctx->pc != 0x19E42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E42Cu; }
        if (ctx->pc != 0x19E42Cu) { return; }
    }
    ctx->pc = 0x19E42Cu;
label_19e42c:
    // 0x19e42c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e430:
    // 0x19e430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e434:
    // 0x19e434: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e434u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e438:
    // 0x19e438: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19e438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19e43c:
    // 0x19e43c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e440:
    // 0x19e440: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e444:
    // 0x19e444: 0x1010  mfhi        $v0
    ctx->pc = 0x19e444u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e448:
    // 0x19e448: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e448u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e44c:
    // 0x19e44c: 0xc053740  jal         func_14DD00
label_19e450:
    if (ctx->pc == 0x19E450u) {
        ctx->pc = 0x19E450u;
            // 0x19e450: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E454u;
        goto label_19e454;
    }
    ctx->pc = 0x19E44Cu;
    SET_GPR_U32(ctx, 31, 0x19E454u);
    ctx->pc = 0x19E450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E44Cu;
            // 0x19e450: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E454u; }
        if (ctx->pc != 0x19E454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E454u; }
        if (ctx->pc != 0x19E454u) { return; }
    }
    ctx->pc = 0x19E454u;
label_19e454:
    // 0x19e454: 0xc050bb4  jal         func_142ED0
label_19e458:
    if (ctx->pc == 0x19E458u) {
        ctx->pc = 0x19E45Cu;
        goto label_19e45c;
    }
    ctx->pc = 0x19E454u;
    SET_GPR_U32(ctx, 31, 0x19E45Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E45Cu; }
        if (ctx->pc != 0x19E45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E45Cu; }
        if (ctx->pc != 0x19E45Cu) { return; }
    }
    ctx->pc = 0x19E45Cu;
label_19e45c:
    // 0x19e45c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e460:
    // 0x19e460: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e464:
    // 0x19e464: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e464u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e468:
    // 0x19e468: 0x0  nop
    ctx->pc = 0x19e468u;
    // NOP
label_19e46c:
    // 0x19e46c: 0x0  nop
    ctx->pc = 0x19e46cu;
    // NOP
label_19e470:
    // 0x19e470: 0x1010  mfhi        $v0
    ctx->pc = 0x19e470u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e474:
    // 0x19e474: 0xc050bb4  jal         func_142ED0
label_19e478:
    if (ctx->pc == 0x19E478u) {
        ctx->pc = 0x19E478u;
            // 0x19e478: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E47Cu;
        goto label_19e47c;
    }
    ctx->pc = 0x19E474u;
    SET_GPR_U32(ctx, 31, 0x19E47Cu);
    ctx->pc = 0x19E478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E474u;
            // 0x19e478: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E47Cu; }
        if (ctx->pc != 0x19E47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E47Cu; }
        if (ctx->pc != 0x19E47Cu) { return; }
    }
    ctx->pc = 0x19E47Cu;
label_19e47c:
    // 0x19e47c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e480:
    // 0x19e480: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x19e480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e484:
    // 0x19e484: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e484u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e488:
    // 0x19e488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e48c:
    // 0x19e48c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19e490:
    // 0x19e490: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x19e490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_19e494:
    // 0x19e494: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19e494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19e498:
    // 0x19e498: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x19e498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e49c:
    // 0x19e49c: 0x1010  mfhi        $v0
    ctx->pc = 0x19e49cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e4a0:
    // 0x19e4a0: 0xc053740  jal         func_14DD00
label_19e4a4:
    if (ctx->pc == 0x19E4A4u) {
        ctx->pc = 0x19E4A4u;
            // 0x19e4a4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E4A8u;
        goto label_19e4a8;
    }
    ctx->pc = 0x19E4A0u;
    SET_GPR_U32(ctx, 31, 0x19E4A8u);
    ctx->pc = 0x19E4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E4A0u;
            // 0x19e4a4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4A8u; }
        if (ctx->pc != 0x19E4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4A8u; }
        if (ctx->pc != 0x19E4A8u) { return; }
    }
    ctx->pc = 0x19E4A8u;
label_19e4a8:
    // 0x19e4a8: 0xc050bb4  jal         func_142ED0
label_19e4ac:
    if (ctx->pc == 0x19E4ACu) {
        ctx->pc = 0x19E4B0u;
        goto label_19e4b0;
    }
    ctx->pc = 0x19E4A8u;
    SET_GPR_U32(ctx, 31, 0x19E4B0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4B0u; }
        if (ctx->pc != 0x19E4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4B0u; }
        if (ctx->pc != 0x19E4B0u) { return; }
    }
    ctx->pc = 0x19E4B0u;
label_19e4b0:
    // 0x19e4b0: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e4b4:
    // 0x19e4b4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e4b8:
    // 0x19e4b8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e4b8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e4bc:
    // 0x19e4bc: 0x0  nop
    ctx->pc = 0x19e4bcu;
    // NOP
label_19e4c0:
    // 0x19e4c0: 0x0  nop
    ctx->pc = 0x19e4c0u;
    // NOP
label_19e4c4:
    // 0x19e4c4: 0x1010  mfhi        $v0
    ctx->pc = 0x19e4c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e4c8:
    // 0x19e4c8: 0xc050bb4  jal         func_142ED0
label_19e4cc:
    if (ctx->pc == 0x19E4CCu) {
        ctx->pc = 0x19E4CCu;
            // 0x19e4cc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E4D0u;
        goto label_19e4d0;
    }
    ctx->pc = 0x19E4C8u;
    SET_GPR_U32(ctx, 31, 0x19E4D0u);
    ctx->pc = 0x19E4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E4C8u;
            // 0x19e4cc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4D0u; }
        if (ctx->pc != 0x19E4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4D0u; }
        if (ctx->pc != 0x19E4D0u) { return; }
    }
    ctx->pc = 0x19E4D0u;
label_19e4d0:
    // 0x19e4d0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e4d4:
    // 0x19e4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e4d8:
    // 0x19e4d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e4d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e4dc:
    // 0x19e4dc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19e4e0:
    // 0x19e4e0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e4e4:
    // 0x19e4e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e4e8:
    // 0x19e4e8: 0x1010  mfhi        $v0
    ctx->pc = 0x19e4e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e4ec:
    // 0x19e4ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e4ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e4f0:
    // 0x19e4f0: 0xc053740  jal         func_14DD00
label_19e4f4:
    if (ctx->pc == 0x19E4F4u) {
        ctx->pc = 0x19E4F4u;
            // 0x19e4f4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E4F8u;
        goto label_19e4f8;
    }
    ctx->pc = 0x19E4F0u;
    SET_GPR_U32(ctx, 31, 0x19E4F8u);
    ctx->pc = 0x19E4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E4F0u;
            // 0x19e4f4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4F8u; }
        if (ctx->pc != 0x19E4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4F8u; }
        if (ctx->pc != 0x19E4F8u) { return; }
    }
    ctx->pc = 0x19E4F8u;
label_19e4f8:
    // 0x19e4f8: 0xc050bb4  jal         func_142ED0
label_19e4fc:
    if (ctx->pc == 0x19E4FCu) {
        ctx->pc = 0x19E500u;
        goto label_19e500;
    }
    ctx->pc = 0x19E4F8u;
    SET_GPR_U32(ctx, 31, 0x19E500u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E500u; }
        if (ctx->pc != 0x19E500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E500u; }
        if (ctx->pc != 0x19E500u) { return; }
    }
    ctx->pc = 0x19E500u;
label_19e500:
    // 0x19e500: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e504:
    // 0x19e504: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e508:
    // 0x19e508: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e508u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e50c:
    // 0x19e50c: 0x0  nop
    ctx->pc = 0x19e50cu;
    // NOP
label_19e510:
    // 0x19e510: 0x0  nop
    ctx->pc = 0x19e510u;
    // NOP
label_19e514:
    // 0x19e514: 0x1010  mfhi        $v0
    ctx->pc = 0x19e514u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e518:
    // 0x19e518: 0xc050bb4  jal         func_142ED0
label_19e51c:
    if (ctx->pc == 0x19E51Cu) {
        ctx->pc = 0x19E51Cu;
            // 0x19e51c: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E520u;
        goto label_19e520;
    }
    ctx->pc = 0x19E518u;
    SET_GPR_U32(ctx, 31, 0x19E520u);
    ctx->pc = 0x19E51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E518u;
            // 0x19e51c: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E520u; }
        if (ctx->pc != 0x19E520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E520u; }
        if (ctx->pc != 0x19E520u) { return; }
    }
    ctx->pc = 0x19E520u;
label_19e520:
    // 0x19e520: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e524:
    // 0x19e524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e528:
    // 0x19e528: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e528u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e52c:
    // 0x19e52c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19e530:
    // 0x19e530: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19e530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e534:
    // 0x19e534: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e538:
    // 0x19e538: 0x1010  mfhi        $v0
    ctx->pc = 0x19e538u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e53c:
    // 0x19e53c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e53cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e540:
    // 0x19e540: 0xc053740  jal         func_14DD00
label_19e544:
    if (ctx->pc == 0x19E544u) {
        ctx->pc = 0x19E544u;
            // 0x19e544: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E548u;
        goto label_19e548;
    }
    ctx->pc = 0x19E540u;
    SET_GPR_U32(ctx, 31, 0x19E548u);
    ctx->pc = 0x19E544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E540u;
            // 0x19e544: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E548u; }
        if (ctx->pc != 0x19E548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E548u; }
        if (ctx->pc != 0x19E548u) { return; }
    }
    ctx->pc = 0x19E548u;
label_19e548:
    // 0x19e548: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x19e548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e54c:
    // 0x19e54c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19e54cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e550:
    // 0x19e550: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x19e550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e554:
    // 0x19e554: 0xc053740  jal         func_14DD00
label_19e558:
    if (ctx->pc == 0x19E558u) {
        ctx->pc = 0x19E558u;
            // 0x19e558: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x19E55Cu;
        goto label_19e55c;
    }
    ctx->pc = 0x19E554u;
    SET_GPR_U32(ctx, 31, 0x19E55Cu);
    ctx->pc = 0x19E558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E554u;
            // 0x19e558: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E55Cu; }
        if (ctx->pc != 0x19E55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E55Cu; }
        if (ctx->pc != 0x19E55Cu) { return; }
    }
    ctx->pc = 0x19E55Cu;
label_19e55c:
    // 0x19e55c: 0xc050bb4  jal         func_142ED0
label_19e560:
    if (ctx->pc == 0x19E560u) {
        ctx->pc = 0x19E564u;
        goto label_19e564;
    }
    ctx->pc = 0x19E55Cu;
    SET_GPR_U32(ctx, 31, 0x19E564u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E564u; }
        if (ctx->pc != 0x19E564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E564u; }
        if (ctx->pc != 0x19E564u) { return; }
    }
    ctx->pc = 0x19E564u;
label_19e564:
    // 0x19e564: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e568:
    // 0x19e568: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e56c:
    // 0x19e56c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e56cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e570:
    // 0x19e570: 0x0  nop
    ctx->pc = 0x19e570u;
    // NOP
label_19e574:
    // 0x19e574: 0x0  nop
    ctx->pc = 0x19e574u;
    // NOP
label_19e578:
    // 0x19e578: 0x1010  mfhi        $v0
    ctx->pc = 0x19e578u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e57c:
    // 0x19e57c: 0xc050bb4  jal         func_142ED0
label_19e580:
    if (ctx->pc == 0x19E580u) {
        ctx->pc = 0x19E580u;
            // 0x19e580: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E584u;
        goto label_19e584;
    }
    ctx->pc = 0x19E57Cu;
    SET_GPR_U32(ctx, 31, 0x19E584u);
    ctx->pc = 0x19E580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E57Cu;
            // 0x19e580: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E584u; }
        if (ctx->pc != 0x19E584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E584u; }
        if (ctx->pc != 0x19E584u) { return; }
    }
    ctx->pc = 0x19E584u;
label_19e584:
    // 0x19e584: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e588:
    // 0x19e588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e58c:
    // 0x19e58c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e58cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e590:
    // 0x19e590: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x19e590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_19e594:
    // 0x19e594: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19e594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e598:
    // 0x19e598: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e59c:
    // 0x19e59c: 0x1010  mfhi        $v0
    ctx->pc = 0x19e59cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e5a0:
    // 0x19e5a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e5a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e5a4:
    // 0x19e5a4: 0xc053740  jal         func_14DD00
label_19e5a8:
    if (ctx->pc == 0x19E5A8u) {
        ctx->pc = 0x19E5A8u;
            // 0x19e5a8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E5ACu;
        goto label_19e5ac;
    }
    ctx->pc = 0x19E5A4u;
    SET_GPR_U32(ctx, 31, 0x19E5ACu);
    ctx->pc = 0x19E5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E5A4u;
            // 0x19e5a8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5ACu; }
        if (ctx->pc != 0x19E5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5ACu; }
        if (ctx->pc != 0x19E5ACu) { return; }
    }
    ctx->pc = 0x19E5ACu;
label_19e5ac:
    // 0x19e5ac: 0xc050bb4  jal         func_142ED0
label_19e5b0:
    if (ctx->pc == 0x19E5B0u) {
        ctx->pc = 0x19E5B4u;
        goto label_19e5b4;
    }
    ctx->pc = 0x19E5ACu;
    SET_GPR_U32(ctx, 31, 0x19E5B4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5B4u; }
        if (ctx->pc != 0x19E5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5B4u; }
        if (ctx->pc != 0x19E5B4u) { return; }
    }
    ctx->pc = 0x19E5B4u;
label_19e5b4:
    // 0x19e5b4: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e5b8:
    // 0x19e5b8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e5bc:
    // 0x19e5bc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e5bcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e5c0:
    // 0x19e5c0: 0x0  nop
    ctx->pc = 0x19e5c0u;
    // NOP
label_19e5c4:
    // 0x19e5c4: 0x0  nop
    ctx->pc = 0x19e5c4u;
    // NOP
label_19e5c8:
    // 0x19e5c8: 0x1010  mfhi        $v0
    ctx->pc = 0x19e5c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e5cc:
    // 0x19e5cc: 0xc050bb4  jal         func_142ED0
label_19e5d0:
    if (ctx->pc == 0x19E5D0u) {
        ctx->pc = 0x19E5D0u;
            // 0x19e5d0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E5D4u;
        goto label_19e5d4;
    }
    ctx->pc = 0x19E5CCu;
    SET_GPR_U32(ctx, 31, 0x19E5D4u);
    ctx->pc = 0x19E5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E5CCu;
            // 0x19e5d0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5D4u; }
        if (ctx->pc != 0x19E5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5D4u; }
        if (ctx->pc != 0x19E5D4u) { return; }
    }
    ctx->pc = 0x19E5D4u;
label_19e5d4:
    // 0x19e5d4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e5d8:
    // 0x19e5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e5dc:
    // 0x19e5dc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e5dcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e5e0:
    // 0x19e5e0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x19e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_19e5e4:
    // 0x19e5e4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e5e8:
    // 0x19e5e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e5ec:
    // 0x19e5ec: 0x1010  mfhi        $v0
    ctx->pc = 0x19e5ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e5f0:
    // 0x19e5f0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e5f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e5f4:
    // 0x19e5f4: 0xc053740  jal         func_14DD00
label_19e5f8:
    if (ctx->pc == 0x19E5F8u) {
        ctx->pc = 0x19E5F8u;
            // 0x19e5f8: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E5FCu;
        goto label_19e5fc;
    }
    ctx->pc = 0x19E5F4u;
    SET_GPR_U32(ctx, 31, 0x19E5FCu);
    ctx->pc = 0x19E5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E5F4u;
            // 0x19e5f8: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5FCu; }
        if (ctx->pc != 0x19E5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5FCu; }
        if (ctx->pc != 0x19E5FCu) { return; }
    }
    ctx->pc = 0x19E5FCu;
label_19e5fc:
    // 0x19e5fc: 0xc050bb4  jal         func_142ED0
label_19e600:
    if (ctx->pc == 0x19E600u) {
        ctx->pc = 0x19E604u;
        goto label_19e604;
    }
    ctx->pc = 0x19E5FCu;
    SET_GPR_U32(ctx, 31, 0x19E604u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E604u; }
        if (ctx->pc != 0x19E604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E604u; }
        if (ctx->pc != 0x19E604u) { return; }
    }
    ctx->pc = 0x19E604u;
label_19e604:
    // 0x19e604: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e608:
    // 0x19e608: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e60c:
    // 0x19e60c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e60cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e610:
    // 0x19e610: 0x0  nop
    ctx->pc = 0x19e610u;
    // NOP
label_19e614:
    // 0x19e614: 0x0  nop
    ctx->pc = 0x19e614u;
    // NOP
label_19e618:
    // 0x19e618: 0x1010  mfhi        $v0
    ctx->pc = 0x19e618u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e61c:
    // 0x19e61c: 0xc050bb4  jal         func_142ED0
label_19e620:
    if (ctx->pc == 0x19E620u) {
        ctx->pc = 0x19E620u;
            // 0x19e620: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E624u;
        goto label_19e624;
    }
    ctx->pc = 0x19E61Cu;
    SET_GPR_U32(ctx, 31, 0x19E624u);
    ctx->pc = 0x19E620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E61Cu;
            // 0x19e620: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E624u; }
        if (ctx->pc != 0x19E624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E624u; }
        if (ctx->pc != 0x19E624u) { return; }
    }
    ctx->pc = 0x19E624u;
label_19e624:
    // 0x19e624: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e628:
    // 0x19e628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e62c:
    // 0x19e62c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e62cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e630:
    // 0x19e630: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x19e630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_19e634:
    // 0x19e634: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19e634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e638:
    // 0x19e638: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e63c:
    // 0x19e63c: 0x1010  mfhi        $v0
    ctx->pc = 0x19e63cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e640:
    // 0x19e640: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e640u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e644:
    // 0x19e644: 0xc053740  jal         func_14DD00
label_19e648:
    if (ctx->pc == 0x19E648u) {
        ctx->pc = 0x19E648u;
            // 0x19e648: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E64Cu;
        goto label_19e64c;
    }
    ctx->pc = 0x19E644u;
    SET_GPR_U32(ctx, 31, 0x19E64Cu);
    ctx->pc = 0x19E648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E644u;
            // 0x19e648: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E64Cu; }
        if (ctx->pc != 0x19E64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E64Cu; }
        if (ctx->pc != 0x19E64Cu) { return; }
    }
    ctx->pc = 0x19E64Cu;
label_19e64c:
    // 0x19e64c: 0xc050bb4  jal         func_142ED0
label_19e650:
    if (ctx->pc == 0x19E650u) {
        ctx->pc = 0x19E654u;
        goto label_19e654;
    }
    ctx->pc = 0x19E64Cu;
    SET_GPR_U32(ctx, 31, 0x19E654u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E654u; }
        if (ctx->pc != 0x19E654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E654u; }
        if (ctx->pc != 0x19E654u) { return; }
    }
    ctx->pc = 0x19E654u;
label_19e654:
    // 0x19e654: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e658:
    // 0x19e658: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e65c:
    // 0x19e65c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e65cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e660:
    // 0x19e660: 0x0  nop
    ctx->pc = 0x19e660u;
    // NOP
label_19e664:
    // 0x19e664: 0x0  nop
    ctx->pc = 0x19e664u;
    // NOP
label_19e668:
    // 0x19e668: 0x1010  mfhi        $v0
    ctx->pc = 0x19e668u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e66c:
    // 0x19e66c: 0xc050bb4  jal         func_142ED0
label_19e670:
    if (ctx->pc == 0x19E670u) {
        ctx->pc = 0x19E670u;
            // 0x19e670: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E674u;
        goto label_19e674;
    }
    ctx->pc = 0x19E66Cu;
    SET_GPR_U32(ctx, 31, 0x19E674u);
    ctx->pc = 0x19E670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E66Cu;
            // 0x19e670: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E674u; }
        if (ctx->pc != 0x19E674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E674u; }
        if (ctx->pc != 0x19E674u) { return; }
    }
    ctx->pc = 0x19E674u;
label_19e674:
    // 0x19e674: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e678:
    // 0x19e678: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x19e678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e67c:
    // 0x19e67c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e67cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e680:
    // 0x19e680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e684:
    // 0x19e684: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x19e684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_19e688:
    // 0x19e688: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x19e688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_19e68c:
    // 0x19e68c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19e68cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19e690:
    // 0x19e690: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x19e690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e694:
    // 0x19e694: 0x1010  mfhi        $v0
    ctx->pc = 0x19e694u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e698:
    // 0x19e698: 0xc053740  jal         func_14DD00
label_19e69c:
    if (ctx->pc == 0x19E69Cu) {
        ctx->pc = 0x19E69Cu;
            // 0x19e69c: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E6A0u;
        goto label_19e6a0;
    }
    ctx->pc = 0x19E698u;
    SET_GPR_U32(ctx, 31, 0x19E6A0u);
    ctx->pc = 0x19E69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E698u;
            // 0x19e69c: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6A0u; }
        if (ctx->pc != 0x19E6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6A0u; }
        if (ctx->pc != 0x19E6A0u) { return; }
    }
    ctx->pc = 0x19E6A0u;
label_19e6a0:
    // 0x19e6a0: 0xc050bb4  jal         func_142ED0
label_19e6a4:
    if (ctx->pc == 0x19E6A4u) {
        ctx->pc = 0x19E6A8u;
        goto label_19e6a8;
    }
    ctx->pc = 0x19E6A0u;
    SET_GPR_U32(ctx, 31, 0x19E6A8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6A8u; }
        if (ctx->pc != 0x19E6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6A8u; }
        if (ctx->pc != 0x19E6A8u) { return; }
    }
    ctx->pc = 0x19E6A8u;
label_19e6a8:
    // 0x19e6a8: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e6ac:
    // 0x19e6ac: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e6b0:
    // 0x19e6b0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e6b0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e6b4:
    // 0x19e6b4: 0x0  nop
    ctx->pc = 0x19e6b4u;
    // NOP
label_19e6b8:
    // 0x19e6b8: 0x0  nop
    ctx->pc = 0x19e6b8u;
    // NOP
label_19e6bc:
    // 0x19e6bc: 0x1010  mfhi        $v0
    ctx->pc = 0x19e6bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e6c0:
    // 0x19e6c0: 0xc050bb4  jal         func_142ED0
label_19e6c4:
    if (ctx->pc == 0x19E6C4u) {
        ctx->pc = 0x19E6C4u;
            // 0x19e6c4: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E6C8u;
        goto label_19e6c8;
    }
    ctx->pc = 0x19E6C0u;
    SET_GPR_U32(ctx, 31, 0x19E6C8u);
    ctx->pc = 0x19E6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E6C0u;
            // 0x19e6c4: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6C8u; }
        if (ctx->pc != 0x19E6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6C8u; }
        if (ctx->pc != 0x19E6C8u) { return; }
    }
    ctx->pc = 0x19E6C8u;
label_19e6c8:
    // 0x19e6c8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e6cc:
    // 0x19e6cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e6d0:
    // 0x19e6d0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e6d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e6d4:
    // 0x19e6d4: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x19e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_19e6d8:
    // 0x19e6d8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e6dc:
    // 0x19e6dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e6e0:
    // 0x19e6e0: 0x1010  mfhi        $v0
    ctx->pc = 0x19e6e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e6e4:
    // 0x19e6e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e6e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e6e8:
    // 0x19e6e8: 0xc053740  jal         func_14DD00
label_19e6ec:
    if (ctx->pc == 0x19E6ECu) {
        ctx->pc = 0x19E6ECu;
            // 0x19e6ec: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E6F0u;
        goto label_19e6f0;
    }
    ctx->pc = 0x19E6E8u;
    SET_GPR_U32(ctx, 31, 0x19E6F0u);
    ctx->pc = 0x19E6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E6E8u;
            // 0x19e6ec: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6F0u; }
        if (ctx->pc != 0x19E6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6F0u; }
        if (ctx->pc != 0x19E6F0u) { return; }
    }
    ctx->pc = 0x19E6F0u;
label_19e6f0:
    // 0x19e6f0: 0xc050bb4  jal         func_142ED0
label_19e6f4:
    if (ctx->pc == 0x19E6F4u) {
        ctx->pc = 0x19E6F8u;
        goto label_19e6f8;
    }
    ctx->pc = 0x19E6F0u;
    SET_GPR_U32(ctx, 31, 0x19E6F8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6F8u; }
        if (ctx->pc != 0x19E6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6F8u; }
        if (ctx->pc != 0x19E6F8u) { return; }
    }
    ctx->pc = 0x19E6F8u;
label_19e6f8:
    // 0x19e6f8: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e6fc:
    // 0x19e6fc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e700:
    // 0x19e700: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e700u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e704:
    // 0x19e704: 0x0  nop
    ctx->pc = 0x19e704u;
    // NOP
label_19e708:
    // 0x19e708: 0x0  nop
    ctx->pc = 0x19e708u;
    // NOP
label_19e70c:
    // 0x19e70c: 0x1010  mfhi        $v0
    ctx->pc = 0x19e70cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e710:
    // 0x19e710: 0xc050bb4  jal         func_142ED0
label_19e714:
    if (ctx->pc == 0x19E714u) {
        ctx->pc = 0x19E714u;
            // 0x19e714: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E718u;
        goto label_19e718;
    }
    ctx->pc = 0x19E710u;
    SET_GPR_U32(ctx, 31, 0x19E718u);
    ctx->pc = 0x19E714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E710u;
            // 0x19e714: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E718u; }
        if (ctx->pc != 0x19E718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E718u; }
        if (ctx->pc != 0x19E718u) { return; }
    }
    ctx->pc = 0x19E718u;
label_19e718:
    // 0x19e718: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e71c:
    // 0x19e71c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x19e71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e720:
    // 0x19e720: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e720u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e724:
    // 0x19e724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e728:
    // 0x19e728: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x19e728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_19e72c:
    // 0x19e72c: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x19e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
label_19e730:
    // 0x19e730: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19e730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19e734:
    // 0x19e734: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x19e734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e738:
    // 0x19e738: 0x1010  mfhi        $v0
    ctx->pc = 0x19e738u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e73c:
    // 0x19e73c: 0xc053740  jal         func_14DD00
label_19e740:
    if (ctx->pc == 0x19E740u) {
        ctx->pc = 0x19E740u;
            // 0x19e740: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E744u;
        goto label_19e744;
    }
    ctx->pc = 0x19E73Cu;
    SET_GPR_U32(ctx, 31, 0x19E744u);
    ctx->pc = 0x19E740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E73Cu;
            // 0x19e740: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E744u; }
        if (ctx->pc != 0x19E744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E744u; }
        if (ctx->pc != 0x19E744u) { return; }
    }
    ctx->pc = 0x19E744u;
label_19e744:
    // 0x19e744: 0xc050bb4  jal         func_142ED0
label_19e748:
    if (ctx->pc == 0x19E748u) {
        ctx->pc = 0x19E74Cu;
        goto label_19e74c;
    }
    ctx->pc = 0x19E744u;
    SET_GPR_U32(ctx, 31, 0x19E74Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E74Cu; }
        if (ctx->pc != 0x19E74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E74Cu; }
        if (ctx->pc != 0x19E74Cu) { return; }
    }
    ctx->pc = 0x19E74Cu;
label_19e74c:
    // 0x19e74c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e750:
    // 0x19e750: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e754:
    // 0x19e754: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e754u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e758:
    // 0x19e758: 0x0  nop
    ctx->pc = 0x19e758u;
    // NOP
label_19e75c:
    // 0x19e75c: 0x0  nop
    ctx->pc = 0x19e75cu;
    // NOP
label_19e760:
    // 0x19e760: 0x1010  mfhi        $v0
    ctx->pc = 0x19e760u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e764:
    // 0x19e764: 0xc050bb4  jal         func_142ED0
label_19e768:
    if (ctx->pc == 0x19E768u) {
        ctx->pc = 0x19E768u;
            // 0x19e768: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E76Cu;
        goto label_19e76c;
    }
    ctx->pc = 0x19E764u;
    SET_GPR_U32(ctx, 31, 0x19E76Cu);
    ctx->pc = 0x19E768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E764u;
            // 0x19e768: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E76Cu; }
        if (ctx->pc != 0x19E76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E76Cu; }
        if (ctx->pc != 0x19E76Cu) { return; }
    }
    ctx->pc = 0x19E76Cu;
label_19e76c:
    // 0x19e76c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e770:
    // 0x19e770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e774:
    // 0x19e774: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e774u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e778:
    // 0x19e778: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x19e778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_19e77c:
    // 0x19e77c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e780:
    // 0x19e780: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e784:
    // 0x19e784: 0x1010  mfhi        $v0
    ctx->pc = 0x19e784u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e788:
    // 0x19e788: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e788u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e78c:
    // 0x19e78c: 0xc053740  jal         func_14DD00
label_19e790:
    if (ctx->pc == 0x19E790u) {
        ctx->pc = 0x19E790u;
            // 0x19e790: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E794u;
        goto label_19e794;
    }
    ctx->pc = 0x19E78Cu;
    SET_GPR_U32(ctx, 31, 0x19E794u);
    ctx->pc = 0x19E790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E78Cu;
            // 0x19e790: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E794u; }
        if (ctx->pc != 0x19E794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E794u; }
        if (ctx->pc != 0x19E794u) { return; }
    }
    ctx->pc = 0x19E794u;
label_19e794:
    // 0x19e794: 0xc050bb4  jal         func_142ED0
label_19e798:
    if (ctx->pc == 0x19E798u) {
        ctx->pc = 0x19E79Cu;
        goto label_19e79c;
    }
    ctx->pc = 0x19E794u;
    SET_GPR_U32(ctx, 31, 0x19E79Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E79Cu; }
        if (ctx->pc != 0x19E79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E79Cu; }
        if (ctx->pc != 0x19E79Cu) { return; }
    }
    ctx->pc = 0x19E79Cu;
label_19e79c:
    // 0x19e79c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x19e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19e7a0:
    // 0x19e7a0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e7a4:
    // 0x19e7a4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19e7a4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e7a8:
    // 0x19e7a8: 0x0  nop
    ctx->pc = 0x19e7a8u;
    // NOP
label_19e7ac:
    // 0x19e7ac: 0x0  nop
    ctx->pc = 0x19e7acu;
    // NOP
label_19e7b0:
    // 0x19e7b0: 0x1010  mfhi        $v0
    ctx->pc = 0x19e7b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e7b4:
    // 0x19e7b4: 0xc050bb4  jal         func_142ED0
label_19e7b8:
    if (ctx->pc == 0x19E7B8u) {
        ctx->pc = 0x19E7B8u;
            // 0x19e7b8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E7BCu;
        goto label_19e7bc;
    }
    ctx->pc = 0x19E7B4u;
    SET_GPR_U32(ctx, 31, 0x19E7BCu);
    ctx->pc = 0x19E7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E7B4u;
            // 0x19e7b8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E7BCu; }
        if (ctx->pc != 0x19E7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E7BCu; }
        if (ctx->pc != 0x19E7BCu) { return; }
    }
    ctx->pc = 0x19E7BCu;
label_19e7bc:
    // 0x19e7bc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19e7c0:
    // 0x19e7c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e7c4:
    // 0x19e7c4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19e7c4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19e7c8:
    // 0x19e7c8: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x19e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_19e7cc:
    // 0x19e7cc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e7d0:
    // 0x19e7d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e7d4:
    // 0x19e7d4: 0x1010  mfhi        $v0
    ctx->pc = 0x19e7d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19e7d8:
    // 0x19e7d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19e7d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19e7dc:
    // 0x19e7dc: 0xc053740  jal         func_14DD00
label_19e7e0:
    if (ctx->pc == 0x19E7E0u) {
        ctx->pc = 0x19E7E0u;
            // 0x19e7e0: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19E7E4u;
        goto label_19e7e4;
    }
    ctx->pc = 0x19E7DCu;
    SET_GPR_U32(ctx, 31, 0x19E7E4u);
    ctx->pc = 0x19E7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E7DCu;
            // 0x19e7e0: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E7E4u; }
        if (ctx->pc != 0x19E7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E7E4u; }
        if (ctx->pc != 0x19E7E4u) { return; }
    }
    ctx->pc = 0x19E7E4u;
label_19e7e4:
    // 0x19e7e4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x19e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e7e8:
    // 0x19e7e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19e7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19e7ec:
    // 0x19e7ec: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x19e7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e7f0:
    // 0x19e7f0: 0xc07b0ac  jal         func_1EC2B0
label_19e7f4:
    if (ctx->pc == 0x19E7F4u) {
        ctx->pc = 0x19E7F4u;
            // 0x19e7f4: 0x2445ffba  addiu       $a1, $v0, -0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
        ctx->pc = 0x19E7F8u;
        goto label_19e7f8;
    }
    ctx->pc = 0x19E7F0u;
    SET_GPR_U32(ctx, 31, 0x19E7F8u);
    ctx->pc = 0x19E7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E7F0u;
            // 0x19e7f4: 0x2445ffba  addiu       $a1, $v0, -0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E7F8u; }
        if (ctx->pc != 0x19E7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E7F8u; }
        if (ctx->pc != 0x19E7F8u) { return; }
    }
    ctx->pc = 0x19E7F8u;
label_19e7f8:
    // 0x19e7f8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x19e7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e7fc:
    // 0x19e7fc: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x19e7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e800:
    // 0x19e800: 0xc07b0ac  jal         func_1EC2B0
label_19e804:
    if (ctx->pc == 0x19E804u) {
        ctx->pc = 0x19E804u;
            // 0x19e804: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x19E808u;
        goto label_19e808;
    }
    ctx->pc = 0x19E800u;
    SET_GPR_U32(ctx, 31, 0x19E808u);
    ctx->pc = 0x19E804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E800u;
            // 0x19e804: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E808u; }
        if (ctx->pc != 0x19E808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E808u; }
        if (ctx->pc != 0x19E808u) { return; }
    }
    ctx->pc = 0x19E808u;
label_19e808:
    // 0x19e808: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x19e808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e80c:
    // 0x19e80c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19e810:
    // 0x19e810: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x19e810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e814:
    // 0x19e814: 0xc07b0ac  jal         func_1EC2B0
label_19e818:
    if (ctx->pc == 0x19E818u) {
        ctx->pc = 0x19E818u;
            // 0x19e818: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x19E81Cu;
        goto label_19e81c;
    }
    ctx->pc = 0x19E814u;
    SET_GPR_U32(ctx, 31, 0x19E81Cu);
    ctx->pc = 0x19E818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E814u;
            // 0x19e818: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E81Cu; }
        if (ctx->pc != 0x19E81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E81Cu; }
        if (ctx->pc != 0x19E81Cu) { return; }
    }
    ctx->pc = 0x19E81Cu;
label_19e81c:
    // 0x19e81c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e820:
    // 0x19e820: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19e820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
label_19e824:
    // 0x19e824: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x19e824u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_19e828:
    // 0x19e828: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x19e828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_19e82c:
    // 0x19e82c: 0x40f809  jalr        $v0
label_19e830:
    if (ctx->pc == 0x19E830u) {
        ctx->pc = 0x19E830u;
            // 0x19e830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E834u;
        goto label_19e834;
    }
    ctx->pc = 0x19E82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E834u);
        ctx->pc = 0x19E830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E82Cu;
            // 0x19e830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CC50u: goto label_19cc50;
            case 0x19CC54u: goto label_19cc54;
            case 0x19CC58u: goto label_19cc58;
            case 0x19CC5Cu: goto label_19cc5c;
            case 0x19CC60u: goto label_19cc60;
            case 0x19CC64u: goto label_19cc64;
            case 0x19CC68u: goto label_19cc68;
            case 0x19CC6Cu: goto label_19cc6c;
            case 0x19CC70u: goto label_19cc70;
            case 0x19CC74u: goto label_19cc74;
            case 0x19CC78u: goto label_19cc78;
            case 0x19CC7Cu: goto label_19cc7c;
            case 0x19CC80u: goto label_19cc80;
            case 0x19CC84u: goto label_19cc84;
            case 0x19CC88u: goto label_19cc88;
            case 0x19CC8Cu: goto label_19cc8c;
            case 0x19CC90u: goto label_19cc90;
            case 0x19CC94u: goto label_19cc94;
            case 0x19CC98u: goto label_19cc98;
            case 0x19CC9Cu: goto label_19cc9c;
            case 0x19CCA0u: goto label_19cca0;
            case 0x19CCA4u: goto label_19cca4;
            case 0x19CCA8u: goto label_19cca8;
            case 0x19CCACu: goto label_19ccac;
            case 0x19CCB0u: goto label_19ccb0;
            case 0x19CCB4u: goto label_19ccb4;
            case 0x19CCB8u: goto label_19ccb8;
            case 0x19CCBCu: goto label_19ccbc;
            case 0x19CCC0u: goto label_19ccc0;
            case 0x19CCC4u: goto label_19ccc4;
            case 0x19CCC8u: goto label_19ccc8;
            case 0x19CCCCu: goto label_19cccc;
            case 0x19CCD0u: goto label_19ccd0;
            case 0x19CCD4u: goto label_19ccd4;
            case 0x19CCD8u: goto label_19ccd8;
            case 0x19CCDCu: goto label_19ccdc;
            case 0x19CCE0u: goto label_19cce0;
            case 0x19CCE4u: goto label_19cce4;
            case 0x19CCE8u: goto label_19cce8;
            case 0x19CCECu: goto label_19ccec;
            case 0x19CCF0u: goto label_19ccf0;
            case 0x19CCF4u: goto label_19ccf4;
            case 0x19CCF8u: goto label_19ccf8;
            case 0x19CCFCu: goto label_19ccfc;
            case 0x19CD00u: goto label_19cd00;
            case 0x19CD04u: goto label_19cd04;
            case 0x19CD08u: goto label_19cd08;
            case 0x19CD0Cu: goto label_19cd0c;
            case 0x19CD10u: goto label_19cd10;
            case 0x19CD14u: goto label_19cd14;
            case 0x19CD18u: goto label_19cd18;
            case 0x19CD1Cu: goto label_19cd1c;
            case 0x19CD20u: goto label_19cd20;
            case 0x19CD24u: goto label_19cd24;
            case 0x19CD28u: goto label_19cd28;
            case 0x19CD2Cu: goto label_19cd2c;
            case 0x19CD30u: goto label_19cd30;
            case 0x19CD34u: goto label_19cd34;
            case 0x19CD38u: goto label_19cd38;
            case 0x19CD3Cu: goto label_19cd3c;
            case 0x19CD40u: goto label_19cd40;
            case 0x19CD44u: goto label_19cd44;
            case 0x19CD48u: goto label_19cd48;
            case 0x19CD4Cu: goto label_19cd4c;
            case 0x19CD50u: goto label_19cd50;
            case 0x19CD54u: goto label_19cd54;
            case 0x19CD58u: goto label_19cd58;
            case 0x19CD5Cu: goto label_19cd5c;
            case 0x19CD60u: goto label_19cd60;
            case 0x19CD64u: goto label_19cd64;
            case 0x19CD68u: goto label_19cd68;
            case 0x19CD6Cu: goto label_19cd6c;
            case 0x19CD70u: goto label_19cd70;
            case 0x19CD74u: goto label_19cd74;
            case 0x19CD78u: goto label_19cd78;
            case 0x19CD7Cu: goto label_19cd7c;
            case 0x19CD80u: goto label_19cd80;
            case 0x19CD84u: goto label_19cd84;
            case 0x19CD88u: goto label_19cd88;
            case 0x19CD8Cu: goto label_19cd8c;
            case 0x19CD90u: goto label_19cd90;
            case 0x19CD94u: goto label_19cd94;
            case 0x19CD98u: goto label_19cd98;
            case 0x19CD9Cu: goto label_19cd9c;
            case 0x19CDA0u: goto label_19cda0;
            case 0x19CDA4u: goto label_19cda4;
            case 0x19CDA8u: goto label_19cda8;
            case 0x19CDACu: goto label_19cdac;
            case 0x19CDB0u: goto label_19cdb0;
            case 0x19CDB4u: goto label_19cdb4;
            case 0x19CDB8u: goto label_19cdb8;
            case 0x19CDBCu: goto label_19cdbc;
            case 0x19CDC0u: goto label_19cdc0;
            case 0x19CDC4u: goto label_19cdc4;
            case 0x19CDC8u: goto label_19cdc8;
            case 0x19CDCCu: goto label_19cdcc;
            case 0x19CDD0u: goto label_19cdd0;
            case 0x19CDD4u: goto label_19cdd4;
            case 0x19CDD8u: goto label_19cdd8;
            case 0x19CDDCu: goto label_19cddc;
            case 0x19CDE0u: goto label_19cde0;
            case 0x19CDE4u: goto label_19cde4;
            case 0x19CDE8u: goto label_19cde8;
            case 0x19CDECu: goto label_19cdec;
            case 0x19CDF0u: goto label_19cdf0;
            case 0x19CDF4u: goto label_19cdf4;
            case 0x19CDF8u: goto label_19cdf8;
            case 0x19CDFCu: goto label_19cdfc;
            case 0x19CE00u: goto label_19ce00;
            case 0x19CE04u: goto label_19ce04;
            case 0x19CE08u: goto label_19ce08;
            case 0x19CE0Cu: goto label_19ce0c;
            case 0x19CE10u: goto label_19ce10;
            case 0x19CE14u: goto label_19ce14;
            case 0x19CE18u: goto label_19ce18;
            case 0x19CE1Cu: goto label_19ce1c;
            case 0x19CE20u: goto label_19ce20;
            case 0x19CE24u: goto label_19ce24;
            case 0x19CE28u: goto label_19ce28;
            case 0x19CE2Cu: goto label_19ce2c;
            case 0x19CE30u: goto label_19ce30;
            case 0x19CE34u: goto label_19ce34;
            case 0x19CE38u: goto label_19ce38;
            case 0x19CE3Cu: goto label_19ce3c;
            case 0x19CE40u: goto label_19ce40;
            case 0x19CE44u: goto label_19ce44;
            case 0x19CE48u: goto label_19ce48;
            case 0x19CE4Cu: goto label_19ce4c;
            case 0x19CE50u: goto label_19ce50;
            case 0x19CE54u: goto label_19ce54;
            case 0x19CE58u: goto label_19ce58;
            case 0x19CE5Cu: goto label_19ce5c;
            case 0x19CE60u: goto label_19ce60;
            case 0x19CE64u: goto label_19ce64;
            case 0x19CE68u: goto label_19ce68;
            case 0x19CE6Cu: goto label_19ce6c;
            case 0x19CE70u: goto label_19ce70;
            case 0x19CE74u: goto label_19ce74;
            case 0x19CE78u: goto label_19ce78;
            case 0x19CE7Cu: goto label_19ce7c;
            case 0x19CE80u: goto label_19ce80;
            case 0x19CE84u: goto label_19ce84;
            case 0x19CE88u: goto label_19ce88;
            case 0x19CE8Cu: goto label_19ce8c;
            case 0x19CE90u: goto label_19ce90;
            case 0x19CE94u: goto label_19ce94;
            case 0x19CE98u: goto label_19ce98;
            case 0x19CE9Cu: goto label_19ce9c;
            case 0x19CEA0u: goto label_19cea0;
            case 0x19CEA4u: goto label_19cea4;
            case 0x19CEA8u: goto label_19cea8;
            case 0x19CEACu: goto label_19ceac;
            case 0x19CEB0u: goto label_19ceb0;
            case 0x19CEB4u: goto label_19ceb4;
            case 0x19CEB8u: goto label_19ceb8;
            case 0x19CEBCu: goto label_19cebc;
            case 0x19CEC0u: goto label_19cec0;
            case 0x19CEC4u: goto label_19cec4;
            case 0x19CEC8u: goto label_19cec8;
            case 0x19CECCu: goto label_19cecc;
            case 0x19CED0u: goto label_19ced0;
            case 0x19CED4u: goto label_19ced4;
            case 0x19CED8u: goto label_19ced8;
            case 0x19CEDCu: goto label_19cedc;
            case 0x19CEE0u: goto label_19cee0;
            case 0x19CEE4u: goto label_19cee4;
            case 0x19CEE8u: goto label_19cee8;
            case 0x19CEECu: goto label_19ceec;
            case 0x19CEF0u: goto label_19cef0;
            case 0x19CEF4u: goto label_19cef4;
            case 0x19CEF8u: goto label_19cef8;
            case 0x19CEFCu: goto label_19cefc;
            case 0x19CF00u: goto label_19cf00;
            case 0x19CF04u: goto label_19cf04;
            case 0x19CF08u: goto label_19cf08;
            case 0x19CF0Cu: goto label_19cf0c;
            case 0x19CF10u: goto label_19cf10;
            case 0x19CF14u: goto label_19cf14;
            case 0x19CF18u: goto label_19cf18;
            case 0x19CF1Cu: goto label_19cf1c;
            case 0x19CF20u: goto label_19cf20;
            case 0x19CF24u: goto label_19cf24;
            case 0x19CF28u: goto label_19cf28;
            case 0x19CF2Cu: goto label_19cf2c;
            case 0x19CF30u: goto label_19cf30;
            case 0x19CF34u: goto label_19cf34;
            case 0x19CF38u: goto label_19cf38;
            case 0x19CF3Cu: goto label_19cf3c;
            case 0x19CF40u: goto label_19cf40;
            case 0x19CF44u: goto label_19cf44;
            case 0x19CF48u: goto label_19cf48;
            case 0x19CF4Cu: goto label_19cf4c;
            case 0x19CF50u: goto label_19cf50;
            case 0x19CF54u: goto label_19cf54;
            case 0x19CF58u: goto label_19cf58;
            case 0x19CF5Cu: goto label_19cf5c;
            case 0x19CF60u: goto label_19cf60;
            case 0x19CF64u: goto label_19cf64;
            case 0x19CF68u: goto label_19cf68;
            case 0x19CF6Cu: goto label_19cf6c;
            case 0x19CF70u: goto label_19cf70;
            case 0x19CF74u: goto label_19cf74;
            case 0x19CF78u: goto label_19cf78;
            case 0x19CF7Cu: goto label_19cf7c;
            case 0x19CF80u: goto label_19cf80;
            case 0x19CF84u: goto label_19cf84;
            case 0x19CF88u: goto label_19cf88;
            case 0x19CF8Cu: goto label_19cf8c;
            case 0x19CF90u: goto label_19cf90;
            case 0x19CF94u: goto label_19cf94;
            case 0x19CF98u: goto label_19cf98;
            case 0x19CF9Cu: goto label_19cf9c;
            case 0x19CFA0u: goto label_19cfa0;
            case 0x19CFA4u: goto label_19cfa4;
            case 0x19CFA8u: goto label_19cfa8;
            case 0x19CFACu: goto label_19cfac;
            case 0x19CFB0u: goto label_19cfb0;
            case 0x19CFB4u: goto label_19cfb4;
            case 0x19CFB8u: goto label_19cfb8;
            case 0x19CFBCu: goto label_19cfbc;
            case 0x19CFC0u: goto label_19cfc0;
            case 0x19CFC4u: goto label_19cfc4;
            case 0x19CFC8u: goto label_19cfc8;
            case 0x19CFCCu: goto label_19cfcc;
            case 0x19CFD0u: goto label_19cfd0;
            case 0x19CFD4u: goto label_19cfd4;
            case 0x19CFD8u: goto label_19cfd8;
            case 0x19CFDCu: goto label_19cfdc;
            case 0x19CFE0u: goto label_19cfe0;
            case 0x19CFE4u: goto label_19cfe4;
            case 0x19CFE8u: goto label_19cfe8;
            case 0x19CFECu: goto label_19cfec;
            case 0x19CFF0u: goto label_19cff0;
            case 0x19CFF4u: goto label_19cff4;
            case 0x19CFF8u: goto label_19cff8;
            case 0x19CFFCu: goto label_19cffc;
            case 0x19D000u: goto label_19d000;
            case 0x19D004u: goto label_19d004;
            case 0x19D008u: goto label_19d008;
            case 0x19D00Cu: goto label_19d00c;
            case 0x19D010u: goto label_19d010;
            case 0x19D014u: goto label_19d014;
            case 0x19D018u: goto label_19d018;
            case 0x19D01Cu: goto label_19d01c;
            case 0x19D020u: goto label_19d020;
            case 0x19D024u: goto label_19d024;
            case 0x19D028u: goto label_19d028;
            case 0x19D02Cu: goto label_19d02c;
            case 0x19D030u: goto label_19d030;
            case 0x19D034u: goto label_19d034;
            case 0x19D038u: goto label_19d038;
            case 0x19D03Cu: goto label_19d03c;
            case 0x19D040u: goto label_19d040;
            case 0x19D044u: goto label_19d044;
            case 0x19D048u: goto label_19d048;
            case 0x19D04Cu: goto label_19d04c;
            case 0x19D050u: goto label_19d050;
            case 0x19D054u: goto label_19d054;
            case 0x19D058u: goto label_19d058;
            case 0x19D05Cu: goto label_19d05c;
            case 0x19D060u: goto label_19d060;
            case 0x19D064u: goto label_19d064;
            case 0x19D068u: goto label_19d068;
            case 0x19D06Cu: goto label_19d06c;
            case 0x19D070u: goto label_19d070;
            case 0x19D074u: goto label_19d074;
            case 0x19D078u: goto label_19d078;
            case 0x19D07Cu: goto label_19d07c;
            case 0x19D080u: goto label_19d080;
            case 0x19D084u: goto label_19d084;
            case 0x19D088u: goto label_19d088;
            case 0x19D08Cu: goto label_19d08c;
            case 0x19D090u: goto label_19d090;
            case 0x19D094u: goto label_19d094;
            case 0x19D098u: goto label_19d098;
            case 0x19D09Cu: goto label_19d09c;
            case 0x19D0A0u: goto label_19d0a0;
            case 0x19D0A4u: goto label_19d0a4;
            case 0x19D0A8u: goto label_19d0a8;
            case 0x19D0ACu: goto label_19d0ac;
            case 0x19D0B0u: goto label_19d0b0;
            case 0x19D0B4u: goto label_19d0b4;
            case 0x19D0B8u: goto label_19d0b8;
            case 0x19D0BCu: goto label_19d0bc;
            case 0x19D0C0u: goto label_19d0c0;
            case 0x19D0C4u: goto label_19d0c4;
            case 0x19D0C8u: goto label_19d0c8;
            case 0x19D0CCu: goto label_19d0cc;
            case 0x19D0D0u: goto label_19d0d0;
            case 0x19D0D4u: goto label_19d0d4;
            case 0x19D0D8u: goto label_19d0d8;
            case 0x19D0DCu: goto label_19d0dc;
            case 0x19D0E0u: goto label_19d0e0;
            case 0x19D0E4u: goto label_19d0e4;
            case 0x19D0E8u: goto label_19d0e8;
            case 0x19D0ECu: goto label_19d0ec;
            case 0x19D0F0u: goto label_19d0f0;
            case 0x19D0F4u: goto label_19d0f4;
            case 0x19D0F8u: goto label_19d0f8;
            case 0x19D0FCu: goto label_19d0fc;
            case 0x19D100u: goto label_19d100;
            case 0x19D104u: goto label_19d104;
            case 0x19D108u: goto label_19d108;
            case 0x19D10Cu: goto label_19d10c;
            case 0x19D110u: goto label_19d110;
            case 0x19D114u: goto label_19d114;
            case 0x19D118u: goto label_19d118;
            case 0x19D11Cu: goto label_19d11c;
            case 0x19D120u: goto label_19d120;
            case 0x19D124u: goto label_19d124;
            case 0x19D128u: goto label_19d128;
            case 0x19D12Cu: goto label_19d12c;
            case 0x19D130u: goto label_19d130;
            case 0x19D134u: goto label_19d134;
            case 0x19D138u: goto label_19d138;
            case 0x19D13Cu: goto label_19d13c;
            case 0x19D140u: goto label_19d140;
            case 0x19D144u: goto label_19d144;
            case 0x19D148u: goto label_19d148;
            case 0x19D14Cu: goto label_19d14c;
            case 0x19D150u: goto label_19d150;
            case 0x19D154u: goto label_19d154;
            case 0x19D158u: goto label_19d158;
            case 0x19D15Cu: goto label_19d15c;
            case 0x19D160u: goto label_19d160;
            case 0x19D164u: goto label_19d164;
            case 0x19D168u: goto label_19d168;
            case 0x19D16Cu: goto label_19d16c;
            case 0x19D170u: goto label_19d170;
            case 0x19D174u: goto label_19d174;
            case 0x19D178u: goto label_19d178;
            case 0x19D17Cu: goto label_19d17c;
            case 0x19D180u: goto label_19d180;
            case 0x19D184u: goto label_19d184;
            case 0x19D188u: goto label_19d188;
            case 0x19D18Cu: goto label_19d18c;
            case 0x19D190u: goto label_19d190;
            case 0x19D194u: goto label_19d194;
            case 0x19D198u: goto label_19d198;
            case 0x19D19Cu: goto label_19d19c;
            case 0x19D1A0u: goto label_19d1a0;
            case 0x19D1A4u: goto label_19d1a4;
            case 0x19D1A8u: goto label_19d1a8;
            case 0x19D1ACu: goto label_19d1ac;
            case 0x19D1B0u: goto label_19d1b0;
            case 0x19D1B4u: goto label_19d1b4;
            case 0x19D1B8u: goto label_19d1b8;
            case 0x19D1BCu: goto label_19d1bc;
            case 0x19D1C0u: goto label_19d1c0;
            case 0x19D1C4u: goto label_19d1c4;
            case 0x19D1C8u: goto label_19d1c8;
            case 0x19D1CCu: goto label_19d1cc;
            case 0x19D1D0u: goto label_19d1d0;
            case 0x19D1D4u: goto label_19d1d4;
            case 0x19D1D8u: goto label_19d1d8;
            case 0x19D1DCu: goto label_19d1dc;
            case 0x19D1E0u: goto label_19d1e0;
            case 0x19D1E4u: goto label_19d1e4;
            case 0x19D1E8u: goto label_19d1e8;
            case 0x19D1ECu: goto label_19d1ec;
            case 0x19D1F0u: goto label_19d1f0;
            case 0x19D1F4u: goto label_19d1f4;
            case 0x19D1F8u: goto label_19d1f8;
            case 0x19D1FCu: goto label_19d1fc;
            case 0x19D200u: goto label_19d200;
            case 0x19D204u: goto label_19d204;
            case 0x19D208u: goto label_19d208;
            case 0x19D20Cu: goto label_19d20c;
            case 0x19D210u: goto label_19d210;
            case 0x19D214u: goto label_19d214;
            case 0x19D218u: goto label_19d218;
            case 0x19D21Cu: goto label_19d21c;
            case 0x19D220u: goto label_19d220;
            case 0x19D224u: goto label_19d224;
            case 0x19D228u: goto label_19d228;
            case 0x19D22Cu: goto label_19d22c;
            case 0x19D230u: goto label_19d230;
            case 0x19D234u: goto label_19d234;
            case 0x19D238u: goto label_19d238;
            case 0x19D23Cu: goto label_19d23c;
            case 0x19D240u: goto label_19d240;
            case 0x19D244u: goto label_19d244;
            case 0x19D248u: goto label_19d248;
            case 0x19D24Cu: goto label_19d24c;
            case 0x19D250u: goto label_19d250;
            case 0x19D254u: goto label_19d254;
            case 0x19D258u: goto label_19d258;
            case 0x19D25Cu: goto label_19d25c;
            case 0x19D260u: goto label_19d260;
            case 0x19D264u: goto label_19d264;
            case 0x19D268u: goto label_19d268;
            case 0x19D26Cu: goto label_19d26c;
            case 0x19D270u: goto label_19d270;
            case 0x19D274u: goto label_19d274;
            case 0x19D278u: goto label_19d278;
            case 0x19D27Cu: goto label_19d27c;
            case 0x19D280u: goto label_19d280;
            case 0x19D284u: goto label_19d284;
            case 0x19D288u: goto label_19d288;
            case 0x19D28Cu: goto label_19d28c;
            case 0x19D290u: goto label_19d290;
            case 0x19D294u: goto label_19d294;
            case 0x19D298u: goto label_19d298;
            case 0x19D29Cu: goto label_19d29c;
            case 0x19D2A0u: goto label_19d2a0;
            case 0x19D2A4u: goto label_19d2a4;
            case 0x19D2A8u: goto label_19d2a8;
            case 0x19D2ACu: goto label_19d2ac;
            case 0x19D2B0u: goto label_19d2b0;
            case 0x19D2B4u: goto label_19d2b4;
            case 0x19D2B8u: goto label_19d2b8;
            case 0x19D2BCu: goto label_19d2bc;
            case 0x19D2C0u: goto label_19d2c0;
            case 0x19D2C4u: goto label_19d2c4;
            case 0x19D2C8u: goto label_19d2c8;
            case 0x19D2CCu: goto label_19d2cc;
            case 0x19D2D0u: goto label_19d2d0;
            case 0x19D2D4u: goto label_19d2d4;
            case 0x19D2D8u: goto label_19d2d8;
            case 0x19D2DCu: goto label_19d2dc;
            case 0x19D2E0u: goto label_19d2e0;
            case 0x19D2E4u: goto label_19d2e4;
            case 0x19D2E8u: goto label_19d2e8;
            case 0x19D2ECu: goto label_19d2ec;
            case 0x19D2F0u: goto label_19d2f0;
            case 0x19D2F4u: goto label_19d2f4;
            case 0x19D2F8u: goto label_19d2f8;
            case 0x19D2FCu: goto label_19d2fc;
            case 0x19D300u: goto label_19d300;
            case 0x19D304u: goto label_19d304;
            case 0x19D308u: goto label_19d308;
            case 0x19D30Cu: goto label_19d30c;
            case 0x19D310u: goto label_19d310;
            case 0x19D314u: goto label_19d314;
            case 0x19D318u: goto label_19d318;
            case 0x19D31Cu: goto label_19d31c;
            case 0x19D320u: goto label_19d320;
            case 0x19D324u: goto label_19d324;
            case 0x19D328u: goto label_19d328;
            case 0x19D32Cu: goto label_19d32c;
            case 0x19D330u: goto label_19d330;
            case 0x19D334u: goto label_19d334;
            case 0x19D338u: goto label_19d338;
            case 0x19D33Cu: goto label_19d33c;
            case 0x19D340u: goto label_19d340;
            case 0x19D344u: goto label_19d344;
            case 0x19D348u: goto label_19d348;
            case 0x19D34Cu: goto label_19d34c;
            case 0x19D350u: goto label_19d350;
            case 0x19D354u: goto label_19d354;
            case 0x19D358u: goto label_19d358;
            case 0x19D35Cu: goto label_19d35c;
            case 0x19D360u: goto label_19d360;
            case 0x19D364u: goto label_19d364;
            case 0x19D368u: goto label_19d368;
            case 0x19D36Cu: goto label_19d36c;
            case 0x19D370u: goto label_19d370;
            case 0x19D374u: goto label_19d374;
            case 0x19D378u: goto label_19d378;
            case 0x19D37Cu: goto label_19d37c;
            case 0x19D380u: goto label_19d380;
            case 0x19D384u: goto label_19d384;
            case 0x19D388u: goto label_19d388;
            case 0x19D38Cu: goto label_19d38c;
            case 0x19D390u: goto label_19d390;
            case 0x19D394u: goto label_19d394;
            case 0x19D398u: goto label_19d398;
            case 0x19D39Cu: goto label_19d39c;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D3A4u: goto label_19d3a4;
            case 0x19D3A8u: goto label_19d3a8;
            case 0x19D3ACu: goto label_19d3ac;
            case 0x19D3B0u: goto label_19d3b0;
            case 0x19D3B4u: goto label_19d3b4;
            case 0x19D3B8u: goto label_19d3b8;
            case 0x19D3BCu: goto label_19d3bc;
            case 0x19D3C0u: goto label_19d3c0;
            case 0x19D3C4u: goto label_19d3c4;
            case 0x19D3C8u: goto label_19d3c8;
            case 0x19D3CCu: goto label_19d3cc;
            case 0x19D3D0u: goto label_19d3d0;
            case 0x19D3D4u: goto label_19d3d4;
            case 0x19D3D8u: goto label_19d3d8;
            case 0x19D3DCu: goto label_19d3dc;
            case 0x19D3E0u: goto label_19d3e0;
            case 0x19D3E4u: goto label_19d3e4;
            case 0x19D3E8u: goto label_19d3e8;
            case 0x19D3ECu: goto label_19d3ec;
            case 0x19D3F0u: goto label_19d3f0;
            case 0x19D3F4u: goto label_19d3f4;
            case 0x19D3F8u: goto label_19d3f8;
            case 0x19D3FCu: goto label_19d3fc;
            case 0x19D400u: goto label_19d400;
            case 0x19D404u: goto label_19d404;
            case 0x19D408u: goto label_19d408;
            case 0x19D40Cu: goto label_19d40c;
            case 0x19D410u: goto label_19d410;
            case 0x19D414u: goto label_19d414;
            case 0x19D418u: goto label_19d418;
            case 0x19D41Cu: goto label_19d41c;
            case 0x19D420u: goto label_19d420;
            case 0x19D424u: goto label_19d424;
            case 0x19D428u: goto label_19d428;
            case 0x19D42Cu: goto label_19d42c;
            case 0x19D430u: goto label_19d430;
            case 0x19D434u: goto label_19d434;
            case 0x19D438u: goto label_19d438;
            case 0x19D43Cu: goto label_19d43c;
            case 0x19D440u: goto label_19d440;
            case 0x19D444u: goto label_19d444;
            case 0x19D448u: goto label_19d448;
            case 0x19D44Cu: goto label_19d44c;
            case 0x19D450u: goto label_19d450;
            case 0x19D454u: goto label_19d454;
            case 0x19D458u: goto label_19d458;
            case 0x19D45Cu: goto label_19d45c;
            case 0x19D460u: goto label_19d460;
            case 0x19D464u: goto label_19d464;
            case 0x19D468u: goto label_19d468;
            case 0x19D46Cu: goto label_19d46c;
            case 0x19D470u: goto label_19d470;
            case 0x19D474u: goto label_19d474;
            case 0x19D478u: goto label_19d478;
            case 0x19D47Cu: goto label_19d47c;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D488u: goto label_19d488;
            case 0x19D48Cu: goto label_19d48c;
            case 0x19D490u: goto label_19d490;
            case 0x19D494u: goto label_19d494;
            case 0x19D498u: goto label_19d498;
            case 0x19D49Cu: goto label_19d49c;
            case 0x19D4A0u: goto label_19d4a0;
            case 0x19D4A4u: goto label_19d4a4;
            case 0x19D4A8u: goto label_19d4a8;
            case 0x19D4ACu: goto label_19d4ac;
            case 0x19D4B0u: goto label_19d4b0;
            case 0x19D4B4u: goto label_19d4b4;
            case 0x19D4B8u: goto label_19d4b8;
            case 0x19D4BCu: goto label_19d4bc;
            case 0x19D4C0u: goto label_19d4c0;
            case 0x19D4C4u: goto label_19d4c4;
            case 0x19D4C8u: goto label_19d4c8;
            case 0x19D4CCu: goto label_19d4cc;
            case 0x19D4D0u: goto label_19d4d0;
            case 0x19D4D4u: goto label_19d4d4;
            case 0x19D4D8u: goto label_19d4d8;
            case 0x19D4DCu: goto label_19d4dc;
            case 0x19D4E0u: goto label_19d4e0;
            case 0x19D4E4u: goto label_19d4e4;
            case 0x19D4E8u: goto label_19d4e8;
            case 0x19D4ECu: goto label_19d4ec;
            case 0x19D4F0u: goto label_19d4f0;
            case 0x19D4F4u: goto label_19d4f4;
            case 0x19D4F8u: goto label_19d4f8;
            case 0x19D4FCu: goto label_19d4fc;
            case 0x19D500u: goto label_19d500;
            case 0x19D504u: goto label_19d504;
            case 0x19D508u: goto label_19d508;
            case 0x19D50Cu: goto label_19d50c;
            case 0x19D510u: goto label_19d510;
            case 0x19D514u: goto label_19d514;
            case 0x19D518u: goto label_19d518;
            case 0x19D51Cu: goto label_19d51c;
            case 0x19D520u: goto label_19d520;
            case 0x19D524u: goto label_19d524;
            case 0x19D528u: goto label_19d528;
            case 0x19D52Cu: goto label_19d52c;
            case 0x19D530u: goto label_19d530;
            case 0x19D534u: goto label_19d534;
            case 0x19D538u: goto label_19d538;
            case 0x19D53Cu: goto label_19d53c;
            case 0x19D540u: goto label_19d540;
            case 0x19D544u: goto label_19d544;
            case 0x19D548u: goto label_19d548;
            case 0x19D54Cu: goto label_19d54c;
            case 0x19D550u: goto label_19d550;
            case 0x19D554u: goto label_19d554;
            case 0x19D558u: goto label_19d558;
            case 0x19D55Cu: goto label_19d55c;
            case 0x19D560u: goto label_19d560;
            case 0x19D564u: goto label_19d564;
            case 0x19D568u: goto label_19d568;
            case 0x19D56Cu: goto label_19d56c;
            case 0x19D570u: goto label_19d570;
            case 0x19D574u: goto label_19d574;
            case 0x19D578u: goto label_19d578;
            case 0x19D57Cu: goto label_19d57c;
            case 0x19D580u: goto label_19d580;
            case 0x19D584u: goto label_19d584;
            case 0x19D588u: goto label_19d588;
            case 0x19D58Cu: goto label_19d58c;
            case 0x19D590u: goto label_19d590;
            case 0x19D594u: goto label_19d594;
            case 0x19D598u: goto label_19d598;
            case 0x19D59Cu: goto label_19d59c;
            case 0x19D5A0u: goto label_19d5a0;
            case 0x19D5A4u: goto label_19d5a4;
            case 0x19D5A8u: goto label_19d5a8;
            case 0x19D5ACu: goto label_19d5ac;
            case 0x19D5B0u: goto label_19d5b0;
            case 0x19D5B4u: goto label_19d5b4;
            case 0x19D5B8u: goto label_19d5b8;
            case 0x19D5BCu: goto label_19d5bc;
            case 0x19D5C0u: goto label_19d5c0;
            case 0x19D5C4u: goto label_19d5c4;
            case 0x19D5C8u: goto label_19d5c8;
            case 0x19D5CCu: goto label_19d5cc;
            case 0x19D5D0u: goto label_19d5d0;
            case 0x19D5D4u: goto label_19d5d4;
            case 0x19D5D8u: goto label_19d5d8;
            case 0x19D5DCu: goto label_19d5dc;
            case 0x19D5E0u: goto label_19d5e0;
            case 0x19D5E4u: goto label_19d5e4;
            case 0x19D5E8u: goto label_19d5e8;
            case 0x19D5ECu: goto label_19d5ec;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D5F4u: goto label_19d5f4;
            case 0x19D5F8u: goto label_19d5f8;
            case 0x19D5FCu: goto label_19d5fc;
            case 0x19D600u: goto label_19d600;
            case 0x19D604u: goto label_19d604;
            case 0x19D608u: goto label_19d608;
            case 0x19D60Cu: goto label_19d60c;
            case 0x19D610u: goto label_19d610;
            case 0x19D614u: goto label_19d614;
            case 0x19D618u: goto label_19d618;
            case 0x19D61Cu: goto label_19d61c;
            case 0x19D620u: goto label_19d620;
            case 0x19D624u: goto label_19d624;
            case 0x19D628u: goto label_19d628;
            case 0x19D62Cu: goto label_19d62c;
            case 0x19D630u: goto label_19d630;
            case 0x19D634u: goto label_19d634;
            case 0x19D638u: goto label_19d638;
            case 0x19D63Cu: goto label_19d63c;
            case 0x19D640u: goto label_19d640;
            case 0x19D644u: goto label_19d644;
            case 0x19D648u: goto label_19d648;
            case 0x19D64Cu: goto label_19d64c;
            case 0x19D650u: goto label_19d650;
            case 0x19D654u: goto label_19d654;
            case 0x19D658u: goto label_19d658;
            case 0x19D65Cu: goto label_19d65c;
            case 0x19D660u: goto label_19d660;
            case 0x19D664u: goto label_19d664;
            case 0x19D668u: goto label_19d668;
            case 0x19D66Cu: goto label_19d66c;
            case 0x19D670u: goto label_19d670;
            case 0x19D674u: goto label_19d674;
            case 0x19D678u: goto label_19d678;
            case 0x19D67Cu: goto label_19d67c;
            case 0x19D680u: goto label_19d680;
            case 0x19D684u: goto label_19d684;
            case 0x19D688u: goto label_19d688;
            case 0x19D68Cu: goto label_19d68c;
            case 0x19D690u: goto label_19d690;
            case 0x19D694u: goto label_19d694;
            case 0x19D698u: goto label_19d698;
            case 0x19D69Cu: goto label_19d69c;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6A4u: goto label_19d6a4;
            case 0x19D6A8u: goto label_19d6a8;
            case 0x19D6ACu: goto label_19d6ac;
            case 0x19D6B0u: goto label_19d6b0;
            case 0x19D6B4u: goto label_19d6b4;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C0u: goto label_19d6c0;
            case 0x19D6C4u: goto label_19d6c4;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6CCu: goto label_19d6cc;
            case 0x19D6D0u: goto label_19d6d0;
            case 0x19D6D4u: goto label_19d6d4;
            case 0x19D6D8u: goto label_19d6d8;
            case 0x19D6DCu: goto label_19d6dc;
            case 0x19D6E0u: goto label_19d6e0;
            case 0x19D6E4u: goto label_19d6e4;
            case 0x19D6E8u: goto label_19d6e8;
            case 0x19D6ECu: goto label_19d6ec;
            case 0x19D6F0u: goto label_19d6f0;
            case 0x19D6F4u: goto label_19d6f4;
            case 0x19D6F8u: goto label_19d6f8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D700u: goto label_19d700;
            case 0x19D704u: goto label_19d704;
            case 0x19D708u: goto label_19d708;
            case 0x19D70Cu: goto label_19d70c;
            case 0x19D710u: goto label_19d710;
            case 0x19D714u: goto label_19d714;
            case 0x19D718u: goto label_19d718;
            case 0x19D71Cu: goto label_19d71c;
            case 0x19D720u: goto label_19d720;
            case 0x19D724u: goto label_19d724;
            case 0x19D728u: goto label_19d728;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D730u: goto label_19d730;
            case 0x19D734u: goto label_19d734;
            case 0x19D738u: goto label_19d738;
            case 0x19D73Cu: goto label_19d73c;
            case 0x19D740u: goto label_19d740;
            case 0x19D744u: goto label_19d744;
            case 0x19D748u: goto label_19d748;
            case 0x19D74Cu: goto label_19d74c;
            case 0x19D750u: goto label_19d750;
            case 0x19D754u: goto label_19d754;
            case 0x19D758u: goto label_19d758;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D760u: goto label_19d760;
            case 0x19D764u: goto label_19d764;
            case 0x19D768u: goto label_19d768;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D770u: goto label_19d770;
            case 0x19D774u: goto label_19d774;
            case 0x19D778u: goto label_19d778;
            case 0x19D77Cu: goto label_19d77c;
            case 0x19D780u: goto label_19d780;
            case 0x19D784u: goto label_19d784;
            case 0x19D788u: goto label_19d788;
            case 0x19D78Cu: goto label_19d78c;
            case 0x19D790u: goto label_19d790;
            case 0x19D794u: goto label_19d794;
            case 0x19D798u: goto label_19d798;
            case 0x19D79Cu: goto label_19d79c;
            case 0x19D7A0u: goto label_19d7a0;
            case 0x19D7A4u: goto label_19d7a4;
            case 0x19D7A8u: goto label_19d7a8;
            case 0x19D7ACu: goto label_19d7ac;
            case 0x19D7B0u: goto label_19d7b0;
            case 0x19D7B4u: goto label_19d7b4;
            case 0x19D7B8u: goto label_19d7b8;
            case 0x19D7BCu: goto label_19d7bc;
            case 0x19D7C0u: goto label_19d7c0;
            case 0x19D7C4u: goto label_19d7c4;
            case 0x19D7C8u: goto label_19d7c8;
            case 0x19D7CCu: goto label_19d7cc;
            case 0x19D7D0u: goto label_19d7d0;
            case 0x19D7D4u: goto label_19d7d4;
            case 0x19D7D8u: goto label_19d7d8;
            case 0x19D7DCu: goto label_19d7dc;
            case 0x19D7E0u: goto label_19d7e0;
            case 0x19D7E4u: goto label_19d7e4;
            case 0x19D7E8u: goto label_19d7e8;
            case 0x19D7ECu: goto label_19d7ec;
            case 0x19D7F0u: goto label_19d7f0;
            case 0x19D7F4u: goto label_19d7f4;
            case 0x19D7F8u: goto label_19d7f8;
            case 0x19D7FCu: goto label_19d7fc;
            case 0x19D800u: goto label_19d800;
            case 0x19D804u: goto label_19d804;
            case 0x19D808u: goto label_19d808;
            case 0x19D80Cu: goto label_19d80c;
            case 0x19D810u: goto label_19d810;
            case 0x19D814u: goto label_19d814;
            case 0x19D818u: goto label_19d818;
            case 0x19D81Cu: goto label_19d81c;
            case 0x19D820u: goto label_19d820;
            case 0x19D824u: goto label_19d824;
            case 0x19D828u: goto label_19d828;
            case 0x19D82Cu: goto label_19d82c;
            case 0x19D830u: goto label_19d830;
            case 0x19D834u: goto label_19d834;
            case 0x19D838u: goto label_19d838;
            case 0x19D83Cu: goto label_19d83c;
            case 0x19D840u: goto label_19d840;
            case 0x19D844u: goto label_19d844;
            case 0x19D848u: goto label_19d848;
            case 0x19D84Cu: goto label_19d84c;
            case 0x19D850u: goto label_19d850;
            case 0x19D854u: goto label_19d854;
            case 0x19D858u: goto label_19d858;
            case 0x19D85Cu: goto label_19d85c;
            case 0x19D860u: goto label_19d860;
            case 0x19D864u: goto label_19d864;
            case 0x19D868u: goto label_19d868;
            case 0x19D86Cu: goto label_19d86c;
            case 0x19D870u: goto label_19d870;
            case 0x19D874u: goto label_19d874;
            case 0x19D878u: goto label_19d878;
            case 0x19D87Cu: goto label_19d87c;
            case 0x19D880u: goto label_19d880;
            case 0x19D884u: goto label_19d884;
            case 0x19D888u: goto label_19d888;
            case 0x19D88Cu: goto label_19d88c;
            case 0x19D890u: goto label_19d890;
            case 0x19D894u: goto label_19d894;
            case 0x19D898u: goto label_19d898;
            case 0x19D89Cu: goto label_19d89c;
            case 0x19D8A0u: goto label_19d8a0;
            case 0x19D8A4u: goto label_19d8a4;
            case 0x19D8A8u: goto label_19d8a8;
            case 0x19D8ACu: goto label_19d8ac;
            case 0x19D8B0u: goto label_19d8b0;
            case 0x19D8B4u: goto label_19d8b4;
            case 0x19D8B8u: goto label_19d8b8;
            case 0x19D8BCu: goto label_19d8bc;
            case 0x19D8C0u: goto label_19d8c0;
            case 0x19D8C4u: goto label_19d8c4;
            case 0x19D8C8u: goto label_19d8c8;
            case 0x19D8CCu: goto label_19d8cc;
            case 0x19D8D0u: goto label_19d8d0;
            case 0x19D8D4u: goto label_19d8d4;
            case 0x19D8D8u: goto label_19d8d8;
            case 0x19D8DCu: goto label_19d8dc;
            case 0x19D8E0u: goto label_19d8e0;
            case 0x19D8E4u: goto label_19d8e4;
            case 0x19D8E8u: goto label_19d8e8;
            case 0x19D8ECu: goto label_19d8ec;
            case 0x19D8F0u: goto label_19d8f0;
            case 0x19D8F4u: goto label_19d8f4;
            case 0x19D8F8u: goto label_19d8f8;
            case 0x19D8FCu: goto label_19d8fc;
            case 0x19D900u: goto label_19d900;
            case 0x19D904u: goto label_19d904;
            case 0x19D908u: goto label_19d908;
            case 0x19D90Cu: goto label_19d90c;
            case 0x19D910u: goto label_19d910;
            case 0x19D914u: goto label_19d914;
            case 0x19D918u: goto label_19d918;
            case 0x19D91Cu: goto label_19d91c;
            case 0x19D920u: goto label_19d920;
            case 0x19D924u: goto label_19d924;
            case 0x19D928u: goto label_19d928;
            case 0x19D92Cu: goto label_19d92c;
            case 0x19D930u: goto label_19d930;
            case 0x19D934u: goto label_19d934;
            case 0x19D938u: goto label_19d938;
            case 0x19D93Cu: goto label_19d93c;
            case 0x19D940u: goto label_19d940;
            case 0x19D944u: goto label_19d944;
            case 0x19D948u: goto label_19d948;
            case 0x19D94Cu: goto label_19d94c;
            case 0x19D950u: goto label_19d950;
            case 0x19D954u: goto label_19d954;
            case 0x19D958u: goto label_19d958;
            case 0x19D95Cu: goto label_19d95c;
            case 0x19D960u: goto label_19d960;
            case 0x19D964u: goto label_19d964;
            case 0x19D968u: goto label_19d968;
            case 0x19D96Cu: goto label_19d96c;
            case 0x19D970u: goto label_19d970;
            case 0x19D974u: goto label_19d974;
            case 0x19D978u: goto label_19d978;
            case 0x19D97Cu: goto label_19d97c;
            case 0x19D980u: goto label_19d980;
            case 0x19D984u: goto label_19d984;
            case 0x19D988u: goto label_19d988;
            case 0x19D98Cu: goto label_19d98c;
            case 0x19D990u: goto label_19d990;
            case 0x19D994u: goto label_19d994;
            case 0x19D998u: goto label_19d998;
            case 0x19D99Cu: goto label_19d99c;
            case 0x19D9A0u: goto label_19d9a0;
            case 0x19D9A4u: goto label_19d9a4;
            case 0x19D9A8u: goto label_19d9a8;
            case 0x19D9ACu: goto label_19d9ac;
            case 0x19D9B0u: goto label_19d9b0;
            case 0x19D9B4u: goto label_19d9b4;
            case 0x19D9B8u: goto label_19d9b8;
            case 0x19D9BCu: goto label_19d9bc;
            case 0x19D9C0u: goto label_19d9c0;
            case 0x19D9C4u: goto label_19d9c4;
            case 0x19D9C8u: goto label_19d9c8;
            case 0x19D9CCu: goto label_19d9cc;
            case 0x19D9D0u: goto label_19d9d0;
            case 0x19D9D4u: goto label_19d9d4;
            case 0x19D9D8u: goto label_19d9d8;
            case 0x19D9DCu: goto label_19d9dc;
            case 0x19D9E0u: goto label_19d9e0;
            case 0x19D9E4u: goto label_19d9e4;
            case 0x19D9E8u: goto label_19d9e8;
            case 0x19D9ECu: goto label_19d9ec;
            case 0x19D9F0u: goto label_19d9f0;
            case 0x19D9F4u: goto label_19d9f4;
            case 0x19D9F8u: goto label_19d9f8;
            case 0x19D9FCu: goto label_19d9fc;
            case 0x19DA00u: goto label_19da00;
            case 0x19DA04u: goto label_19da04;
            case 0x19DA08u: goto label_19da08;
            case 0x19DA0Cu: goto label_19da0c;
            case 0x19DA10u: goto label_19da10;
            case 0x19DA14u: goto label_19da14;
            case 0x19DA18u: goto label_19da18;
            case 0x19DA1Cu: goto label_19da1c;
            case 0x19DA20u: goto label_19da20;
            case 0x19DA24u: goto label_19da24;
            case 0x19DA28u: goto label_19da28;
            case 0x19DA2Cu: goto label_19da2c;
            case 0x19DA30u: goto label_19da30;
            case 0x19DA34u: goto label_19da34;
            case 0x19DA38u: goto label_19da38;
            case 0x19DA3Cu: goto label_19da3c;
            case 0x19DA40u: goto label_19da40;
            case 0x19DA44u: goto label_19da44;
            case 0x19DA48u: goto label_19da48;
            case 0x19DA4Cu: goto label_19da4c;
            case 0x19DA50u: goto label_19da50;
            case 0x19DA54u: goto label_19da54;
            case 0x19DA58u: goto label_19da58;
            case 0x19DA5Cu: goto label_19da5c;
            case 0x19DA60u: goto label_19da60;
            case 0x19DA64u: goto label_19da64;
            case 0x19DA68u: goto label_19da68;
            case 0x19DA6Cu: goto label_19da6c;
            case 0x19DA70u: goto label_19da70;
            case 0x19DA74u: goto label_19da74;
            case 0x19DA78u: goto label_19da78;
            case 0x19DA7Cu: goto label_19da7c;
            case 0x19DA80u: goto label_19da80;
            case 0x19DA84u: goto label_19da84;
            case 0x19DA88u: goto label_19da88;
            case 0x19DA8Cu: goto label_19da8c;
            case 0x19DA90u: goto label_19da90;
            case 0x19DA94u: goto label_19da94;
            case 0x19DA98u: goto label_19da98;
            case 0x19DA9Cu: goto label_19da9c;
            case 0x19DAA0u: goto label_19daa0;
            case 0x19DAA4u: goto label_19daa4;
            case 0x19DAA8u: goto label_19daa8;
            case 0x19DAACu: goto label_19daac;
            case 0x19DAB0u: goto label_19dab0;
            case 0x19DAB4u: goto label_19dab4;
            case 0x19DAB8u: goto label_19dab8;
            case 0x19DABCu: goto label_19dabc;
            case 0x19DAC0u: goto label_19dac0;
            case 0x19DAC4u: goto label_19dac4;
            case 0x19DAC8u: goto label_19dac8;
            case 0x19DACCu: goto label_19dacc;
            case 0x19DAD0u: goto label_19dad0;
            case 0x19DAD4u: goto label_19dad4;
            case 0x19DAD8u: goto label_19dad8;
            case 0x19DADCu: goto label_19dadc;
            case 0x19DAE0u: goto label_19dae0;
            case 0x19DAE4u: goto label_19dae4;
            case 0x19DAE8u: goto label_19dae8;
            case 0x19DAECu: goto label_19daec;
            case 0x19DAF0u: goto label_19daf0;
            case 0x19DAF4u: goto label_19daf4;
            case 0x19DAF8u: goto label_19daf8;
            case 0x19DAFCu: goto label_19dafc;
            case 0x19DB00u: goto label_19db00;
            case 0x19DB04u: goto label_19db04;
            case 0x19DB08u: goto label_19db08;
            case 0x19DB0Cu: goto label_19db0c;
            case 0x19DB10u: goto label_19db10;
            case 0x19DB14u: goto label_19db14;
            case 0x19DB18u: goto label_19db18;
            case 0x19DB1Cu: goto label_19db1c;
            case 0x19DB20u: goto label_19db20;
            case 0x19DB24u: goto label_19db24;
            case 0x19DB28u: goto label_19db28;
            case 0x19DB2Cu: goto label_19db2c;
            case 0x19DB30u: goto label_19db30;
            case 0x19DB34u: goto label_19db34;
            case 0x19DB38u: goto label_19db38;
            case 0x19DB3Cu: goto label_19db3c;
            case 0x19DB40u: goto label_19db40;
            case 0x19DB44u: goto label_19db44;
            case 0x19DB48u: goto label_19db48;
            case 0x19DB4Cu: goto label_19db4c;
            case 0x19DB50u: goto label_19db50;
            case 0x19DB54u: goto label_19db54;
            case 0x19DB58u: goto label_19db58;
            case 0x19DB5Cu: goto label_19db5c;
            case 0x19DB60u: goto label_19db60;
            case 0x19DB64u: goto label_19db64;
            case 0x19DB68u: goto label_19db68;
            case 0x19DB6Cu: goto label_19db6c;
            case 0x19DB70u: goto label_19db70;
            case 0x19DB74u: goto label_19db74;
            case 0x19DB78u: goto label_19db78;
            case 0x19DB7Cu: goto label_19db7c;
            case 0x19DB80u: goto label_19db80;
            case 0x19DB84u: goto label_19db84;
            case 0x19DB88u: goto label_19db88;
            case 0x19DB8Cu: goto label_19db8c;
            case 0x19DB90u: goto label_19db90;
            case 0x19DB94u: goto label_19db94;
            case 0x19DB98u: goto label_19db98;
            case 0x19DB9Cu: goto label_19db9c;
            case 0x19DBA0u: goto label_19dba0;
            case 0x19DBA4u: goto label_19dba4;
            case 0x19DBA8u: goto label_19dba8;
            case 0x19DBACu: goto label_19dbac;
            case 0x19DBB0u: goto label_19dbb0;
            case 0x19DBB4u: goto label_19dbb4;
            case 0x19DBB8u: goto label_19dbb8;
            case 0x19DBBCu: goto label_19dbbc;
            case 0x19DBC0u: goto label_19dbc0;
            case 0x19DBC4u: goto label_19dbc4;
            case 0x19DBC8u: goto label_19dbc8;
            case 0x19DBCCu: goto label_19dbcc;
            case 0x19DBD0u: goto label_19dbd0;
            case 0x19DBD4u: goto label_19dbd4;
            case 0x19DBD8u: goto label_19dbd8;
            case 0x19DBDCu: goto label_19dbdc;
            case 0x19DBE0u: goto label_19dbe0;
            case 0x19DBE4u: goto label_19dbe4;
            case 0x19DBE8u: goto label_19dbe8;
            case 0x19DBECu: goto label_19dbec;
            case 0x19DBF0u: goto label_19dbf0;
            case 0x19DBF4u: goto label_19dbf4;
            case 0x19DBF8u: goto label_19dbf8;
            case 0x19DBFCu: goto label_19dbfc;
            case 0x19DC00u: goto label_19dc00;
            case 0x19DC04u: goto label_19dc04;
            case 0x19DC08u: goto label_19dc08;
            case 0x19DC0Cu: goto label_19dc0c;
            case 0x19DC10u: goto label_19dc10;
            case 0x19DC14u: goto label_19dc14;
            case 0x19DC18u: goto label_19dc18;
            case 0x19DC1Cu: goto label_19dc1c;
            case 0x19DC20u: goto label_19dc20;
            case 0x19DC24u: goto label_19dc24;
            case 0x19DC28u: goto label_19dc28;
            case 0x19DC2Cu: goto label_19dc2c;
            case 0x19DC30u: goto label_19dc30;
            case 0x19DC34u: goto label_19dc34;
            case 0x19DC38u: goto label_19dc38;
            case 0x19DC3Cu: goto label_19dc3c;
            case 0x19DC40u: goto label_19dc40;
            case 0x19DC44u: goto label_19dc44;
            case 0x19DC48u: goto label_19dc48;
            case 0x19DC4Cu: goto label_19dc4c;
            case 0x19DC50u: goto label_19dc50;
            case 0x19DC54u: goto label_19dc54;
            case 0x19DC58u: goto label_19dc58;
            case 0x19DC5Cu: goto label_19dc5c;
            case 0x19DC60u: goto label_19dc60;
            case 0x19DC64u: goto label_19dc64;
            case 0x19DC68u: goto label_19dc68;
            case 0x19DC6Cu: goto label_19dc6c;
            case 0x19DC70u: goto label_19dc70;
            case 0x19DC74u: goto label_19dc74;
            case 0x19DC78u: goto label_19dc78;
            case 0x19DC7Cu: goto label_19dc7c;
            case 0x19DC80u: goto label_19dc80;
            case 0x19DC84u: goto label_19dc84;
            case 0x19DC88u: goto label_19dc88;
            case 0x19DC8Cu: goto label_19dc8c;
            case 0x19DC90u: goto label_19dc90;
            case 0x19DC94u: goto label_19dc94;
            case 0x19DC98u: goto label_19dc98;
            case 0x19DC9Cu: goto label_19dc9c;
            case 0x19DCA0u: goto label_19dca0;
            case 0x19DCA4u: goto label_19dca4;
            case 0x19DCA8u: goto label_19dca8;
            case 0x19DCACu: goto label_19dcac;
            case 0x19DCB0u: goto label_19dcb0;
            case 0x19DCB4u: goto label_19dcb4;
            case 0x19DCB8u: goto label_19dcb8;
            case 0x19DCBCu: goto label_19dcbc;
            case 0x19DCC0u: goto label_19dcc0;
            case 0x19DCC4u: goto label_19dcc4;
            case 0x19DCC8u: goto label_19dcc8;
            case 0x19DCCCu: goto label_19dccc;
            case 0x19DCD0u: goto label_19dcd0;
            case 0x19DCD4u: goto label_19dcd4;
            case 0x19DCD8u: goto label_19dcd8;
            case 0x19DCDCu: goto label_19dcdc;
            case 0x19DCE0u: goto label_19dce0;
            case 0x19DCE4u: goto label_19dce4;
            case 0x19DCE8u: goto label_19dce8;
            case 0x19DCECu: goto label_19dcec;
            case 0x19DCF0u: goto label_19dcf0;
            case 0x19DCF4u: goto label_19dcf4;
            case 0x19DCF8u: goto label_19dcf8;
            case 0x19DCFCu: goto label_19dcfc;
            case 0x19DD00u: goto label_19dd00;
            case 0x19DD04u: goto label_19dd04;
            case 0x19DD08u: goto label_19dd08;
            case 0x19DD0Cu: goto label_19dd0c;
            case 0x19DD10u: goto label_19dd10;
            case 0x19DD14u: goto label_19dd14;
            case 0x19DD18u: goto label_19dd18;
            case 0x19DD1Cu: goto label_19dd1c;
            case 0x19DD20u: goto label_19dd20;
            case 0x19DD24u: goto label_19dd24;
            case 0x19DD28u: goto label_19dd28;
            case 0x19DD2Cu: goto label_19dd2c;
            case 0x19DD30u: goto label_19dd30;
            case 0x19DD34u: goto label_19dd34;
            case 0x19DD38u: goto label_19dd38;
            case 0x19DD3Cu: goto label_19dd3c;
            case 0x19DD40u: goto label_19dd40;
            case 0x19DD44u: goto label_19dd44;
            case 0x19DD48u: goto label_19dd48;
            case 0x19DD4Cu: goto label_19dd4c;
            case 0x19DD50u: goto label_19dd50;
            case 0x19DD54u: goto label_19dd54;
            case 0x19DD58u: goto label_19dd58;
            case 0x19DD5Cu: goto label_19dd5c;
            case 0x19DD60u: goto label_19dd60;
            case 0x19DD64u: goto label_19dd64;
            case 0x19DD68u: goto label_19dd68;
            case 0x19DD6Cu: goto label_19dd6c;
            case 0x19DD70u: goto label_19dd70;
            case 0x19DD74u: goto label_19dd74;
            case 0x19DD78u: goto label_19dd78;
            case 0x19DD7Cu: goto label_19dd7c;
            case 0x19DD80u: goto label_19dd80;
            case 0x19DD84u: goto label_19dd84;
            case 0x19DD88u: goto label_19dd88;
            case 0x19DD8Cu: goto label_19dd8c;
            case 0x19DD90u: goto label_19dd90;
            case 0x19DD94u: goto label_19dd94;
            case 0x19DD98u: goto label_19dd98;
            case 0x19DD9Cu: goto label_19dd9c;
            case 0x19DDA0u: goto label_19dda0;
            case 0x19DDA4u: goto label_19dda4;
            case 0x19DDA8u: goto label_19dda8;
            case 0x19DDACu: goto label_19ddac;
            case 0x19DDB0u: goto label_19ddb0;
            case 0x19DDB4u: goto label_19ddb4;
            case 0x19DDB8u: goto label_19ddb8;
            case 0x19DDBCu: goto label_19ddbc;
            case 0x19DDC0u: goto label_19ddc0;
            case 0x19DDC4u: goto label_19ddc4;
            case 0x19DDC8u: goto label_19ddc8;
            case 0x19DDCCu: goto label_19ddcc;
            case 0x19DDD0u: goto label_19ddd0;
            case 0x19DDD4u: goto label_19ddd4;
            case 0x19DDD8u: goto label_19ddd8;
            case 0x19DDDCu: goto label_19dddc;
            case 0x19DDE0u: goto label_19dde0;
            case 0x19DDE4u: goto label_19dde4;
            case 0x19DDE8u: goto label_19dde8;
            case 0x19DDECu: goto label_19ddec;
            case 0x19DDF0u: goto label_19ddf0;
            case 0x19DDF4u: goto label_19ddf4;
            case 0x19DDF8u: goto label_19ddf8;
            case 0x19DDFCu: goto label_19ddfc;
            case 0x19DE00u: goto label_19de00;
            case 0x19DE04u: goto label_19de04;
            case 0x19DE08u: goto label_19de08;
            case 0x19DE0Cu: goto label_19de0c;
            case 0x19DE10u: goto label_19de10;
            case 0x19DE14u: goto label_19de14;
            case 0x19DE18u: goto label_19de18;
            case 0x19DE1Cu: goto label_19de1c;
            case 0x19DE20u: goto label_19de20;
            case 0x19DE24u: goto label_19de24;
            case 0x19DE28u: goto label_19de28;
            case 0x19DE2Cu: goto label_19de2c;
            case 0x19DE30u: goto label_19de30;
            case 0x19DE34u: goto label_19de34;
            case 0x19DE38u: goto label_19de38;
            case 0x19DE3Cu: goto label_19de3c;
            case 0x19DE40u: goto label_19de40;
            case 0x19DE44u: goto label_19de44;
            case 0x19DE48u: goto label_19de48;
            case 0x19DE4Cu: goto label_19de4c;
            case 0x19DE50u: goto label_19de50;
            case 0x19DE54u: goto label_19de54;
            case 0x19DE58u: goto label_19de58;
            case 0x19DE5Cu: goto label_19de5c;
            case 0x19DE60u: goto label_19de60;
            case 0x19DE64u: goto label_19de64;
            case 0x19DE68u: goto label_19de68;
            case 0x19DE6Cu: goto label_19de6c;
            case 0x19DE70u: goto label_19de70;
            case 0x19DE74u: goto label_19de74;
            case 0x19DE78u: goto label_19de78;
            case 0x19DE7Cu: goto label_19de7c;
            case 0x19DE80u: goto label_19de80;
            case 0x19DE84u: goto label_19de84;
            case 0x19DE88u: goto label_19de88;
            case 0x19DE8Cu: goto label_19de8c;
            case 0x19DE90u: goto label_19de90;
            case 0x19DE94u: goto label_19de94;
            case 0x19DE98u: goto label_19de98;
            case 0x19DE9Cu: goto label_19de9c;
            case 0x19DEA0u: goto label_19dea0;
            case 0x19DEA4u: goto label_19dea4;
            case 0x19DEA8u: goto label_19dea8;
            case 0x19DEACu: goto label_19deac;
            case 0x19DEB0u: goto label_19deb0;
            case 0x19DEB4u: goto label_19deb4;
            case 0x19DEB8u: goto label_19deb8;
            case 0x19DEBCu: goto label_19debc;
            case 0x19DEC0u: goto label_19dec0;
            case 0x19DEC4u: goto label_19dec4;
            case 0x19DEC8u: goto label_19dec8;
            case 0x19DECCu: goto label_19decc;
            case 0x19DED0u: goto label_19ded0;
            case 0x19DED4u: goto label_19ded4;
            case 0x19DED8u: goto label_19ded8;
            case 0x19DEDCu: goto label_19dedc;
            case 0x19DEE0u: goto label_19dee0;
            case 0x19DEE4u: goto label_19dee4;
            case 0x19DEE8u: goto label_19dee8;
            case 0x19DEECu: goto label_19deec;
            case 0x19DEF0u: goto label_19def0;
            case 0x19DEF4u: goto label_19def4;
            case 0x19DEF8u: goto label_19def8;
            case 0x19DEFCu: goto label_19defc;
            case 0x19DF00u: goto label_19df00;
            case 0x19DF04u: goto label_19df04;
            case 0x19DF08u: goto label_19df08;
            case 0x19DF0Cu: goto label_19df0c;
            case 0x19DF10u: goto label_19df10;
            case 0x19DF14u: goto label_19df14;
            case 0x19DF18u: goto label_19df18;
            case 0x19DF1Cu: goto label_19df1c;
            case 0x19DF20u: goto label_19df20;
            case 0x19DF24u: goto label_19df24;
            case 0x19DF28u: goto label_19df28;
            case 0x19DF2Cu: goto label_19df2c;
            case 0x19DF30u: goto label_19df30;
            case 0x19DF34u: goto label_19df34;
            case 0x19DF38u: goto label_19df38;
            case 0x19DF3Cu: goto label_19df3c;
            case 0x19DF40u: goto label_19df40;
            case 0x19DF44u: goto label_19df44;
            case 0x19DF48u: goto label_19df48;
            case 0x19DF4Cu: goto label_19df4c;
            case 0x19DF50u: goto label_19df50;
            case 0x19DF54u: goto label_19df54;
            case 0x19DF58u: goto label_19df58;
            case 0x19DF5Cu: goto label_19df5c;
            case 0x19DF60u: goto label_19df60;
            case 0x19DF64u: goto label_19df64;
            case 0x19DF68u: goto label_19df68;
            case 0x19DF6Cu: goto label_19df6c;
            case 0x19DF70u: goto label_19df70;
            case 0x19DF74u: goto label_19df74;
            case 0x19DF78u: goto label_19df78;
            case 0x19DF7Cu: goto label_19df7c;
            case 0x19DF80u: goto label_19df80;
            case 0x19DF84u: goto label_19df84;
            case 0x19DF88u: goto label_19df88;
            case 0x19DF8Cu: goto label_19df8c;
            case 0x19DF90u: goto label_19df90;
            case 0x19DF94u: goto label_19df94;
            case 0x19DF98u: goto label_19df98;
            case 0x19DF9Cu: goto label_19df9c;
            case 0x19DFA0u: goto label_19dfa0;
            case 0x19DFA4u: goto label_19dfa4;
            case 0x19DFA8u: goto label_19dfa8;
            case 0x19DFACu: goto label_19dfac;
            case 0x19DFB0u: goto label_19dfb0;
            case 0x19DFB4u: goto label_19dfb4;
            case 0x19DFB8u: goto label_19dfb8;
            case 0x19DFBCu: goto label_19dfbc;
            case 0x19DFC0u: goto label_19dfc0;
            case 0x19DFC4u: goto label_19dfc4;
            case 0x19DFC8u: goto label_19dfc8;
            case 0x19DFCCu: goto label_19dfcc;
            case 0x19DFD0u: goto label_19dfd0;
            case 0x19DFD4u: goto label_19dfd4;
            case 0x19DFD8u: goto label_19dfd8;
            case 0x19DFDCu: goto label_19dfdc;
            case 0x19DFE0u: goto label_19dfe0;
            case 0x19DFE4u: goto label_19dfe4;
            case 0x19DFE8u: goto label_19dfe8;
            case 0x19DFECu: goto label_19dfec;
            case 0x19DFF0u: goto label_19dff0;
            case 0x19DFF4u: goto label_19dff4;
            case 0x19DFF8u: goto label_19dff8;
            case 0x19DFFCu: goto label_19dffc;
            case 0x19E000u: goto label_19e000;
            case 0x19E004u: goto label_19e004;
            case 0x19E008u: goto label_19e008;
            case 0x19E00Cu: goto label_19e00c;
            case 0x19E010u: goto label_19e010;
            case 0x19E014u: goto label_19e014;
            case 0x19E018u: goto label_19e018;
            case 0x19E01Cu: goto label_19e01c;
            case 0x19E020u: goto label_19e020;
            case 0x19E024u: goto label_19e024;
            case 0x19E028u: goto label_19e028;
            case 0x19E02Cu: goto label_19e02c;
            case 0x19E030u: goto label_19e030;
            case 0x19E034u: goto label_19e034;
            case 0x19E038u: goto label_19e038;
            case 0x19E03Cu: goto label_19e03c;
            case 0x19E040u: goto label_19e040;
            case 0x19E044u: goto label_19e044;
            case 0x19E048u: goto label_19e048;
            case 0x19E04Cu: goto label_19e04c;
            case 0x19E050u: goto label_19e050;
            case 0x19E054u: goto label_19e054;
            case 0x19E058u: goto label_19e058;
            case 0x19E05Cu: goto label_19e05c;
            case 0x19E060u: goto label_19e060;
            case 0x19E064u: goto label_19e064;
            case 0x19E068u: goto label_19e068;
            case 0x19E06Cu: goto label_19e06c;
            case 0x19E070u: goto label_19e070;
            case 0x19E074u: goto label_19e074;
            case 0x19E078u: goto label_19e078;
            case 0x19E07Cu: goto label_19e07c;
            case 0x19E080u: goto label_19e080;
            case 0x19E084u: goto label_19e084;
            case 0x19E088u: goto label_19e088;
            case 0x19E08Cu: goto label_19e08c;
            case 0x19E090u: goto label_19e090;
            case 0x19E094u: goto label_19e094;
            case 0x19E098u: goto label_19e098;
            case 0x19E09Cu: goto label_19e09c;
            case 0x19E0A0u: goto label_19e0a0;
            case 0x19E0A4u: goto label_19e0a4;
            case 0x19E0A8u: goto label_19e0a8;
            case 0x19E0ACu: goto label_19e0ac;
            case 0x19E0B0u: goto label_19e0b0;
            case 0x19E0B4u: goto label_19e0b4;
            case 0x19E0B8u: goto label_19e0b8;
            case 0x19E0BCu: goto label_19e0bc;
            case 0x19E0C0u: goto label_19e0c0;
            case 0x19E0C4u: goto label_19e0c4;
            case 0x19E0C8u: goto label_19e0c8;
            case 0x19E0CCu: goto label_19e0cc;
            case 0x19E0D0u: goto label_19e0d0;
            case 0x19E0D4u: goto label_19e0d4;
            case 0x19E0D8u: goto label_19e0d8;
            case 0x19E0DCu: goto label_19e0dc;
            case 0x19E0E0u: goto label_19e0e0;
            case 0x19E0E4u: goto label_19e0e4;
            case 0x19E0E8u: goto label_19e0e8;
            case 0x19E0ECu: goto label_19e0ec;
            case 0x19E0F0u: goto label_19e0f0;
            case 0x19E0F4u: goto label_19e0f4;
            case 0x19E0F8u: goto label_19e0f8;
            case 0x19E0FCu: goto label_19e0fc;
            case 0x19E100u: goto label_19e100;
            case 0x19E104u: goto label_19e104;
            case 0x19E108u: goto label_19e108;
            case 0x19E10Cu: goto label_19e10c;
            case 0x19E110u: goto label_19e110;
            case 0x19E114u: goto label_19e114;
            case 0x19E118u: goto label_19e118;
            case 0x19E11Cu: goto label_19e11c;
            case 0x19E120u: goto label_19e120;
            case 0x19E124u: goto label_19e124;
            case 0x19E128u: goto label_19e128;
            case 0x19E12Cu: goto label_19e12c;
            case 0x19E130u: goto label_19e130;
            case 0x19E134u: goto label_19e134;
            case 0x19E138u: goto label_19e138;
            case 0x19E13Cu: goto label_19e13c;
            case 0x19E140u: goto label_19e140;
            case 0x19E144u: goto label_19e144;
            case 0x19E148u: goto label_19e148;
            case 0x19E14Cu: goto label_19e14c;
            case 0x19E150u: goto label_19e150;
            case 0x19E154u: goto label_19e154;
            case 0x19E158u: goto label_19e158;
            case 0x19E15Cu: goto label_19e15c;
            case 0x19E160u: goto label_19e160;
            case 0x19E164u: goto label_19e164;
            case 0x19E168u: goto label_19e168;
            case 0x19E16Cu: goto label_19e16c;
            case 0x19E170u: goto label_19e170;
            case 0x19E174u: goto label_19e174;
            case 0x19E178u: goto label_19e178;
            case 0x19E17Cu: goto label_19e17c;
            case 0x19E180u: goto label_19e180;
            case 0x19E184u: goto label_19e184;
            case 0x19E188u: goto label_19e188;
            case 0x19E18Cu: goto label_19e18c;
            case 0x19E190u: goto label_19e190;
            case 0x19E194u: goto label_19e194;
            case 0x19E198u: goto label_19e198;
            case 0x19E19Cu: goto label_19e19c;
            case 0x19E1A0u: goto label_19e1a0;
            case 0x19E1A4u: goto label_19e1a4;
            case 0x19E1A8u: goto label_19e1a8;
            case 0x19E1ACu: goto label_19e1ac;
            case 0x19E1B0u: goto label_19e1b0;
            case 0x19E1B4u: goto label_19e1b4;
            case 0x19E1B8u: goto label_19e1b8;
            case 0x19E1BCu: goto label_19e1bc;
            case 0x19E1C0u: goto label_19e1c0;
            case 0x19E1C4u: goto label_19e1c4;
            case 0x19E1C8u: goto label_19e1c8;
            case 0x19E1CCu: goto label_19e1cc;
            case 0x19E1D0u: goto label_19e1d0;
            case 0x19E1D4u: goto label_19e1d4;
            case 0x19E1D8u: goto label_19e1d8;
            case 0x19E1DCu: goto label_19e1dc;
            case 0x19E1E0u: goto label_19e1e0;
            case 0x19E1E4u: goto label_19e1e4;
            case 0x19E1E8u: goto label_19e1e8;
            case 0x19E1ECu: goto label_19e1ec;
            case 0x19E1F0u: goto label_19e1f0;
            case 0x19E1F4u: goto label_19e1f4;
            case 0x19E1F8u: goto label_19e1f8;
            case 0x19E1FCu: goto label_19e1fc;
            case 0x19E200u: goto label_19e200;
            case 0x19E204u: goto label_19e204;
            case 0x19E208u: goto label_19e208;
            case 0x19E20Cu: goto label_19e20c;
            case 0x19E210u: goto label_19e210;
            case 0x19E214u: goto label_19e214;
            case 0x19E218u: goto label_19e218;
            case 0x19E21Cu: goto label_19e21c;
            case 0x19E220u: goto label_19e220;
            case 0x19E224u: goto label_19e224;
            case 0x19E228u: goto label_19e228;
            case 0x19E22Cu: goto label_19e22c;
            case 0x19E230u: goto label_19e230;
            case 0x19E234u: goto label_19e234;
            case 0x19E238u: goto label_19e238;
            case 0x19E23Cu: goto label_19e23c;
            case 0x19E240u: goto label_19e240;
            case 0x19E244u: goto label_19e244;
            case 0x19E248u: goto label_19e248;
            case 0x19E24Cu: goto label_19e24c;
            case 0x19E250u: goto label_19e250;
            case 0x19E254u: goto label_19e254;
            case 0x19E258u: goto label_19e258;
            case 0x19E25Cu: goto label_19e25c;
            case 0x19E260u: goto label_19e260;
            case 0x19E264u: goto label_19e264;
            case 0x19E268u: goto label_19e268;
            case 0x19E26Cu: goto label_19e26c;
            case 0x19E270u: goto label_19e270;
            case 0x19E274u: goto label_19e274;
            case 0x19E278u: goto label_19e278;
            case 0x19E27Cu: goto label_19e27c;
            case 0x19E280u: goto label_19e280;
            case 0x19E284u: goto label_19e284;
            case 0x19E288u: goto label_19e288;
            case 0x19E28Cu: goto label_19e28c;
            case 0x19E290u: goto label_19e290;
            case 0x19E294u: goto label_19e294;
            case 0x19E298u: goto label_19e298;
            case 0x19E29Cu: goto label_19e29c;
            case 0x19E2A0u: goto label_19e2a0;
            case 0x19E2A4u: goto label_19e2a4;
            case 0x19E2A8u: goto label_19e2a8;
            case 0x19E2ACu: goto label_19e2ac;
            case 0x19E2B0u: goto label_19e2b0;
            case 0x19E2B4u: goto label_19e2b4;
            case 0x19E2B8u: goto label_19e2b8;
            case 0x19E2BCu: goto label_19e2bc;
            case 0x19E2C0u: goto label_19e2c0;
            case 0x19E2C4u: goto label_19e2c4;
            case 0x19E2C8u: goto label_19e2c8;
            case 0x19E2CCu: goto label_19e2cc;
            case 0x19E2D0u: goto label_19e2d0;
            case 0x19E2D4u: goto label_19e2d4;
            case 0x19E2D8u: goto label_19e2d8;
            case 0x19E2DCu: goto label_19e2dc;
            case 0x19E2E0u: goto label_19e2e0;
            case 0x19E2E4u: goto label_19e2e4;
            case 0x19E2E8u: goto label_19e2e8;
            case 0x19E2ECu: goto label_19e2ec;
            case 0x19E2F0u: goto label_19e2f0;
            case 0x19E2F4u: goto label_19e2f4;
            case 0x19E2F8u: goto label_19e2f8;
            case 0x19E2FCu: goto label_19e2fc;
            case 0x19E300u: goto label_19e300;
            case 0x19E304u: goto label_19e304;
            case 0x19E308u: goto label_19e308;
            case 0x19E30Cu: goto label_19e30c;
            case 0x19E310u: goto label_19e310;
            case 0x19E314u: goto label_19e314;
            case 0x19E318u: goto label_19e318;
            case 0x19E31Cu: goto label_19e31c;
            case 0x19E320u: goto label_19e320;
            case 0x19E324u: goto label_19e324;
            case 0x19E328u: goto label_19e328;
            case 0x19E32Cu: goto label_19e32c;
            case 0x19E330u: goto label_19e330;
            case 0x19E334u: goto label_19e334;
            case 0x19E338u: goto label_19e338;
            case 0x19E33Cu: goto label_19e33c;
            case 0x19E340u: goto label_19e340;
            case 0x19E344u: goto label_19e344;
            case 0x19E348u: goto label_19e348;
            case 0x19E34Cu: goto label_19e34c;
            case 0x19E350u: goto label_19e350;
            case 0x19E354u: goto label_19e354;
            case 0x19E358u: goto label_19e358;
            case 0x19E35Cu: goto label_19e35c;
            case 0x19E360u: goto label_19e360;
            case 0x19E364u: goto label_19e364;
            case 0x19E368u: goto label_19e368;
            case 0x19E36Cu: goto label_19e36c;
            case 0x19E370u: goto label_19e370;
            case 0x19E374u: goto label_19e374;
            case 0x19E378u: goto label_19e378;
            case 0x19E37Cu: goto label_19e37c;
            case 0x19E380u: goto label_19e380;
            case 0x19E384u: goto label_19e384;
            case 0x19E388u: goto label_19e388;
            case 0x19E38Cu: goto label_19e38c;
            case 0x19E390u: goto label_19e390;
            case 0x19E394u: goto label_19e394;
            case 0x19E398u: goto label_19e398;
            case 0x19E39Cu: goto label_19e39c;
            case 0x19E3A0u: goto label_19e3a0;
            case 0x19E3A4u: goto label_19e3a4;
            case 0x19E3A8u: goto label_19e3a8;
            case 0x19E3ACu: goto label_19e3ac;
            case 0x19E3B0u: goto label_19e3b0;
            case 0x19E3B4u: goto label_19e3b4;
            case 0x19E3B8u: goto label_19e3b8;
            case 0x19E3BCu: goto label_19e3bc;
            case 0x19E3C0u: goto label_19e3c0;
            case 0x19E3C4u: goto label_19e3c4;
            case 0x19E3C8u: goto label_19e3c8;
            case 0x19E3CCu: goto label_19e3cc;
            case 0x19E3D0u: goto label_19e3d0;
            case 0x19E3D4u: goto label_19e3d4;
            case 0x19E3D8u: goto label_19e3d8;
            case 0x19E3DCu: goto label_19e3dc;
            case 0x19E3E0u: goto label_19e3e0;
            case 0x19E3E4u: goto label_19e3e4;
            case 0x19E3E8u: goto label_19e3e8;
            case 0x19E3ECu: goto label_19e3ec;
            case 0x19E3F0u: goto label_19e3f0;
            case 0x19E3F4u: goto label_19e3f4;
            case 0x19E3F8u: goto label_19e3f8;
            case 0x19E3FCu: goto label_19e3fc;
            case 0x19E400u: goto label_19e400;
            case 0x19E404u: goto label_19e404;
            case 0x19E408u: goto label_19e408;
            case 0x19E40Cu: goto label_19e40c;
            case 0x19E410u: goto label_19e410;
            case 0x19E414u: goto label_19e414;
            case 0x19E418u: goto label_19e418;
            case 0x19E41Cu: goto label_19e41c;
            case 0x19E420u: goto label_19e420;
            case 0x19E424u: goto label_19e424;
            case 0x19E428u: goto label_19e428;
            case 0x19E42Cu: goto label_19e42c;
            case 0x19E430u: goto label_19e430;
            case 0x19E434u: goto label_19e434;
            case 0x19E438u: goto label_19e438;
            case 0x19E43Cu: goto label_19e43c;
            case 0x19E440u: goto label_19e440;
            case 0x19E444u: goto label_19e444;
            case 0x19E448u: goto label_19e448;
            case 0x19E44Cu: goto label_19e44c;
            case 0x19E450u: goto label_19e450;
            case 0x19E454u: goto label_19e454;
            case 0x19E458u: goto label_19e458;
            case 0x19E45Cu: goto label_19e45c;
            case 0x19E460u: goto label_19e460;
            case 0x19E464u: goto label_19e464;
            case 0x19E468u: goto label_19e468;
            case 0x19E46Cu: goto label_19e46c;
            case 0x19E470u: goto label_19e470;
            case 0x19E474u: goto label_19e474;
            case 0x19E478u: goto label_19e478;
            case 0x19E47Cu: goto label_19e47c;
            case 0x19E480u: goto label_19e480;
            case 0x19E484u: goto label_19e484;
            case 0x19E488u: goto label_19e488;
            case 0x19E48Cu: goto label_19e48c;
            case 0x19E490u: goto label_19e490;
            case 0x19E494u: goto label_19e494;
            case 0x19E498u: goto label_19e498;
            case 0x19E49Cu: goto label_19e49c;
            case 0x19E4A0u: goto label_19e4a0;
            case 0x19E4A4u: goto label_19e4a4;
            case 0x19E4A8u: goto label_19e4a8;
            case 0x19E4ACu: goto label_19e4ac;
            case 0x19E4B0u: goto label_19e4b0;
            case 0x19E4B4u: goto label_19e4b4;
            case 0x19E4B8u: goto label_19e4b8;
            case 0x19E4BCu: goto label_19e4bc;
            case 0x19E4C0u: goto label_19e4c0;
            case 0x19E4C4u: goto label_19e4c4;
            case 0x19E4C8u: goto label_19e4c8;
            case 0x19E4CCu: goto label_19e4cc;
            case 0x19E4D0u: goto label_19e4d0;
            case 0x19E4D4u: goto label_19e4d4;
            case 0x19E4D8u: goto label_19e4d8;
            case 0x19E4DCu: goto label_19e4dc;
            case 0x19E4E0u: goto label_19e4e0;
            case 0x19E4E4u: goto label_19e4e4;
            case 0x19E4E8u: goto label_19e4e8;
            case 0x19E4ECu: goto label_19e4ec;
            case 0x19E4F0u: goto label_19e4f0;
            case 0x19E4F4u: goto label_19e4f4;
            case 0x19E4F8u: goto label_19e4f8;
            case 0x19E4FCu: goto label_19e4fc;
            case 0x19E500u: goto label_19e500;
            case 0x19E504u: goto label_19e504;
            case 0x19E508u: goto label_19e508;
            case 0x19E50Cu: goto label_19e50c;
            case 0x19E510u: goto label_19e510;
            case 0x19E514u: goto label_19e514;
            case 0x19E518u: goto label_19e518;
            case 0x19E51Cu: goto label_19e51c;
            case 0x19E520u: goto label_19e520;
            case 0x19E524u: goto label_19e524;
            case 0x19E528u: goto label_19e528;
            case 0x19E52Cu: goto label_19e52c;
            case 0x19E530u: goto label_19e530;
            case 0x19E534u: goto label_19e534;
            case 0x19E538u: goto label_19e538;
            case 0x19E53Cu: goto label_19e53c;
            case 0x19E540u: goto label_19e540;
            case 0x19E544u: goto label_19e544;
            case 0x19E548u: goto label_19e548;
            case 0x19E54Cu: goto label_19e54c;
            case 0x19E550u: goto label_19e550;
            case 0x19E554u: goto label_19e554;
            case 0x19E558u: goto label_19e558;
            case 0x19E55Cu: goto label_19e55c;
            case 0x19E560u: goto label_19e560;
            case 0x19E564u: goto label_19e564;
            case 0x19E568u: goto label_19e568;
            case 0x19E56Cu: goto label_19e56c;
            case 0x19E570u: goto label_19e570;
            case 0x19E574u: goto label_19e574;
            case 0x19E578u: goto label_19e578;
            case 0x19E57Cu: goto label_19e57c;
            case 0x19E580u: goto label_19e580;
            case 0x19E584u: goto label_19e584;
            case 0x19E588u: goto label_19e588;
            case 0x19E58Cu: goto label_19e58c;
            case 0x19E590u: goto label_19e590;
            case 0x19E594u: goto label_19e594;
            case 0x19E598u: goto label_19e598;
            case 0x19E59Cu: goto label_19e59c;
            case 0x19E5A0u: goto label_19e5a0;
            case 0x19E5A4u: goto label_19e5a4;
            case 0x19E5A8u: goto label_19e5a8;
            case 0x19E5ACu: goto label_19e5ac;
            case 0x19E5B0u: goto label_19e5b0;
            case 0x19E5B4u: goto label_19e5b4;
            case 0x19E5B8u: goto label_19e5b8;
            case 0x19E5BCu: goto label_19e5bc;
            case 0x19E5C0u: goto label_19e5c0;
            case 0x19E5C4u: goto label_19e5c4;
            case 0x19E5C8u: goto label_19e5c8;
            case 0x19E5CCu: goto label_19e5cc;
            case 0x19E5D0u: goto label_19e5d0;
            case 0x19E5D4u: goto label_19e5d4;
            case 0x19E5D8u: goto label_19e5d8;
            case 0x19E5DCu: goto label_19e5dc;
            case 0x19E5E0u: goto label_19e5e0;
            case 0x19E5E4u: goto label_19e5e4;
            case 0x19E5E8u: goto label_19e5e8;
            case 0x19E5ECu: goto label_19e5ec;
            case 0x19E5F0u: goto label_19e5f0;
            case 0x19E5F4u: goto label_19e5f4;
            case 0x19E5F8u: goto label_19e5f8;
            case 0x19E5FCu: goto label_19e5fc;
            case 0x19E600u: goto label_19e600;
            case 0x19E604u: goto label_19e604;
            case 0x19E608u: goto label_19e608;
            case 0x19E60Cu: goto label_19e60c;
            case 0x19E610u: goto label_19e610;
            case 0x19E614u: goto label_19e614;
            case 0x19E618u: goto label_19e618;
            case 0x19E61Cu: goto label_19e61c;
            case 0x19E620u: goto label_19e620;
            case 0x19E624u: goto label_19e624;
            case 0x19E628u: goto label_19e628;
            case 0x19E62Cu: goto label_19e62c;
            case 0x19E630u: goto label_19e630;
            case 0x19E634u: goto label_19e634;
            case 0x19E638u: goto label_19e638;
            case 0x19E63Cu: goto label_19e63c;
            case 0x19E640u: goto label_19e640;
            case 0x19E644u: goto label_19e644;
            case 0x19E648u: goto label_19e648;
            case 0x19E64Cu: goto label_19e64c;
            case 0x19E650u: goto label_19e650;
            case 0x19E654u: goto label_19e654;
            case 0x19E658u: goto label_19e658;
            case 0x19E65Cu: goto label_19e65c;
            case 0x19E660u: goto label_19e660;
            case 0x19E664u: goto label_19e664;
            case 0x19E668u: goto label_19e668;
            case 0x19E66Cu: goto label_19e66c;
            case 0x19E670u: goto label_19e670;
            case 0x19E674u: goto label_19e674;
            case 0x19E678u: goto label_19e678;
            case 0x19E67Cu: goto label_19e67c;
            case 0x19E680u: goto label_19e680;
            case 0x19E684u: goto label_19e684;
            case 0x19E688u: goto label_19e688;
            case 0x19E68Cu: goto label_19e68c;
            case 0x19E690u: goto label_19e690;
            case 0x19E694u: goto label_19e694;
            case 0x19E698u: goto label_19e698;
            case 0x19E69Cu: goto label_19e69c;
            case 0x19E6A0u: goto label_19e6a0;
            case 0x19E6A4u: goto label_19e6a4;
            case 0x19E6A8u: goto label_19e6a8;
            case 0x19E6ACu: goto label_19e6ac;
            case 0x19E6B0u: goto label_19e6b0;
            case 0x19E6B4u: goto label_19e6b4;
            case 0x19E6B8u: goto label_19e6b8;
            case 0x19E6BCu: goto label_19e6bc;
            case 0x19E6C0u: goto label_19e6c0;
            case 0x19E6C4u: goto label_19e6c4;
            case 0x19E6C8u: goto label_19e6c8;
            case 0x19E6CCu: goto label_19e6cc;
            case 0x19E6D0u: goto label_19e6d0;
            case 0x19E6D4u: goto label_19e6d4;
            case 0x19E6D8u: goto label_19e6d8;
            case 0x19E6DCu: goto label_19e6dc;
            case 0x19E6E0u: goto label_19e6e0;
            case 0x19E6E4u: goto label_19e6e4;
            case 0x19E6E8u: goto label_19e6e8;
            case 0x19E6ECu: goto label_19e6ec;
            case 0x19E6F0u: goto label_19e6f0;
            case 0x19E6F4u: goto label_19e6f4;
            case 0x19E6F8u: goto label_19e6f8;
            case 0x19E6FCu: goto label_19e6fc;
            case 0x19E700u: goto label_19e700;
            case 0x19E704u: goto label_19e704;
            case 0x19E708u: goto label_19e708;
            case 0x19E70Cu: goto label_19e70c;
            case 0x19E710u: goto label_19e710;
            case 0x19E714u: goto label_19e714;
            case 0x19E718u: goto label_19e718;
            case 0x19E71Cu: goto label_19e71c;
            case 0x19E720u: goto label_19e720;
            case 0x19E724u: goto label_19e724;
            case 0x19E728u: goto label_19e728;
            case 0x19E72Cu: goto label_19e72c;
            case 0x19E730u: goto label_19e730;
            case 0x19E734u: goto label_19e734;
            case 0x19E738u: goto label_19e738;
            case 0x19E73Cu: goto label_19e73c;
            case 0x19E740u: goto label_19e740;
            case 0x19E744u: goto label_19e744;
            case 0x19E748u: goto label_19e748;
            case 0x19E74Cu: goto label_19e74c;
            case 0x19E750u: goto label_19e750;
            case 0x19E754u: goto label_19e754;
            case 0x19E758u: goto label_19e758;
            case 0x19E75Cu: goto label_19e75c;
            case 0x19E760u: goto label_19e760;
            case 0x19E764u: goto label_19e764;
            case 0x19E768u: goto label_19e768;
            case 0x19E76Cu: goto label_19e76c;
            case 0x19E770u: goto label_19e770;
            case 0x19E774u: goto label_19e774;
            case 0x19E778u: goto label_19e778;
            case 0x19E77Cu: goto label_19e77c;
            case 0x19E780u: goto label_19e780;
            case 0x19E784u: goto label_19e784;
            case 0x19E788u: goto label_19e788;
            case 0x19E78Cu: goto label_19e78c;
            case 0x19E790u: goto label_19e790;
            case 0x19E794u: goto label_19e794;
            case 0x19E798u: goto label_19e798;
            case 0x19E79Cu: goto label_19e79c;
            case 0x19E7A0u: goto label_19e7a0;
            case 0x19E7A4u: goto label_19e7a4;
            case 0x19E7A8u: goto label_19e7a8;
            case 0x19E7ACu: goto label_19e7ac;
            case 0x19E7B0u: goto label_19e7b0;
            case 0x19E7B4u: goto label_19e7b4;
            case 0x19E7B8u: goto label_19e7b8;
            case 0x19E7BCu: goto label_19e7bc;
            case 0x19E7C0u: goto label_19e7c0;
            case 0x19E7C4u: goto label_19e7c4;
            case 0x19E7C8u: goto label_19e7c8;
            case 0x19E7CCu: goto label_19e7cc;
            case 0x19E7D0u: goto label_19e7d0;
            case 0x19E7D4u: goto label_19e7d4;
            case 0x19E7D8u: goto label_19e7d8;
            case 0x19E7DCu: goto label_19e7dc;
            case 0x19E7E0u: goto label_19e7e0;
            case 0x19E7E4u: goto label_19e7e4;
            case 0x19E7E8u: goto label_19e7e8;
            case 0x19E7ECu: goto label_19e7ec;
            case 0x19E7F0u: goto label_19e7f0;
            case 0x19E7F4u: goto label_19e7f4;
            case 0x19E7F8u: goto label_19e7f8;
            case 0x19E7FCu: goto label_19e7fc;
            case 0x19E800u: goto label_19e800;
            case 0x19E804u: goto label_19e804;
            case 0x19E808u: goto label_19e808;
            case 0x19E80Cu: goto label_19e80c;
            case 0x19E810u: goto label_19e810;
            case 0x19E814u: goto label_19e814;
            case 0x19E818u: goto label_19e818;
            case 0x19E81Cu: goto label_19e81c;
            case 0x19E820u: goto label_19e820;
            case 0x19E824u: goto label_19e824;
            case 0x19E828u: goto label_19e828;
            case 0x19E82Cu: goto label_19e82c;
            case 0x19E830u: goto label_19e830;
            case 0x19E834u: goto label_19e834;
            case 0x19E838u: goto label_19e838;
            case 0x19E83Cu: goto label_19e83c;
            case 0x19E840u: goto label_19e840;
            case 0x19E844u: goto label_19e844;
            case 0x19E848u: goto label_19e848;
            case 0x19E84Cu: goto label_19e84c;
            case 0x19E850u: goto label_19e850;
            case 0x19E854u: goto label_19e854;
            case 0x19E858u: goto label_19e858;
            case 0x19E85Cu: goto label_19e85c;
            case 0x19E860u: goto label_19e860;
            case 0x19E864u: goto label_19e864;
            case 0x19E868u: goto label_19e868;
            case 0x19E86Cu: goto label_19e86c;
            case 0x19E870u: goto label_19e870;
            case 0x19E874u: goto label_19e874;
            case 0x19E878u: goto label_19e878;
            case 0x19E87Cu: goto label_19e87c;
            case 0x19E880u: goto label_19e880;
            case 0x19E884u: goto label_19e884;
            case 0x19E888u: goto label_19e888;
            case 0x19E88Cu: goto label_19e88c;
            case 0x19E890u: goto label_19e890;
            case 0x19E894u: goto label_19e894;
            case 0x19E898u: goto label_19e898;
            case 0x19E89Cu: goto label_19e89c;
            case 0x19E8A0u: goto label_19e8a0;
            case 0x19E8A4u: goto label_19e8a4;
            case 0x19E8A8u: goto label_19e8a8;
            case 0x19E8ACu: goto label_19e8ac;
            case 0x19E8B0u: goto label_19e8b0;
            case 0x19E8B4u: goto label_19e8b4;
            case 0x19E8B8u: goto label_19e8b8;
            case 0x19E8BCu: goto label_19e8bc;
            case 0x19E8C0u: goto label_19e8c0;
            case 0x19E8C4u: goto label_19e8c4;
            case 0x19E8C8u: goto label_19e8c8;
            case 0x19E8CCu: goto label_19e8cc;
            case 0x19E8D0u: goto label_19e8d0;
            case 0x19E8D4u: goto label_19e8d4;
            case 0x19E8D8u: goto label_19e8d8;
            case 0x19E8DCu: goto label_19e8dc;
            case 0x19E8E0u: goto label_19e8e0;
            case 0x19E8E4u: goto label_19e8e4;
            case 0x19E8E8u: goto label_19e8e8;
            case 0x19E8ECu: goto label_19e8ec;
            case 0x19E8F0u: goto label_19e8f0;
            case 0x19E8F4u: goto label_19e8f4;
            case 0x19E8F8u: goto label_19e8f8;
            case 0x19E8FCu: goto label_19e8fc;
            case 0x19E900u: goto label_19e900;
            case 0x19E904u: goto label_19e904;
            case 0x19E908u: goto label_19e908;
            case 0x19E90Cu: goto label_19e90c;
            case 0x19E910u: goto label_19e910;
            case 0x19E914u: goto label_19e914;
            case 0x19E918u: goto label_19e918;
            case 0x19E91Cu: goto label_19e91c;
            case 0x19E920u: goto label_19e920;
            case 0x19E924u: goto label_19e924;
            case 0x19E928u: goto label_19e928;
            case 0x19E92Cu: goto label_19e92c;
            case 0x19E930u: goto label_19e930;
            case 0x19E934u: goto label_19e934;
            case 0x19E938u: goto label_19e938;
            case 0x19E93Cu: goto label_19e93c;
            case 0x19E940u: goto label_19e940;
            case 0x19E944u: goto label_19e944;
            case 0x19E948u: goto label_19e948;
            case 0x19E94Cu: goto label_19e94c;
            case 0x19E950u: goto label_19e950;
            case 0x19E954u: goto label_19e954;
            case 0x19E958u: goto label_19e958;
            case 0x19E95Cu: goto label_19e95c;
            case 0x19E960u: goto label_19e960;
            case 0x19E964u: goto label_19e964;
            case 0x19E968u: goto label_19e968;
            case 0x19E96Cu: goto label_19e96c;
            case 0x19E970u: goto label_19e970;
            case 0x19E974u: goto label_19e974;
            case 0x19E978u: goto label_19e978;
            case 0x19E97Cu: goto label_19e97c;
            case 0x19E980u: goto label_19e980;
            case 0x19E984u: goto label_19e984;
            case 0x19E988u: goto label_19e988;
            case 0x19E98Cu: goto label_19e98c;
            case 0x19E990u: goto label_19e990;
            case 0x19E994u: goto label_19e994;
            case 0x19E998u: goto label_19e998;
            case 0x19E99Cu: goto label_19e99c;
            case 0x19E9A0u: goto label_19e9a0;
            case 0x19E9A4u: goto label_19e9a4;
            case 0x19E9A8u: goto label_19e9a8;
            case 0x19E9ACu: goto label_19e9ac;
            case 0x19E9B0u: goto label_19e9b0;
            case 0x19E9B4u: goto label_19e9b4;
            case 0x19E9B8u: goto label_19e9b8;
            case 0x19E9BCu: goto label_19e9bc;
            case 0x19E9C0u: goto label_19e9c0;
            case 0x19E9C4u: goto label_19e9c4;
            case 0x19E9C8u: goto label_19e9c8;
            case 0x19E9CCu: goto label_19e9cc;
            case 0x19E9D0u: goto label_19e9d0;
            case 0x19E9D4u: goto label_19e9d4;
            case 0x19E9D8u: goto label_19e9d8;
            case 0x19E9DCu: goto label_19e9dc;
            case 0x19E9E0u: goto label_19e9e0;
            case 0x19E9E4u: goto label_19e9e4;
            case 0x19E9E8u: goto label_19e9e8;
            case 0x19E9ECu: goto label_19e9ec;
            case 0x19E9F0u: goto label_19e9f0;
            case 0x19E9F4u: goto label_19e9f4;
            case 0x19E9F8u: goto label_19e9f8;
            case 0x19E9FCu: goto label_19e9fc;
            case 0x19EA00u: goto label_19ea00;
            case 0x19EA04u: goto label_19ea04;
            case 0x19EA08u: goto label_19ea08;
            case 0x19EA0Cu: goto label_19ea0c;
            case 0x19EA10u: goto label_19ea10;
            case 0x19EA14u: goto label_19ea14;
            case 0x19EA18u: goto label_19ea18;
            case 0x19EA1Cu: goto label_19ea1c;
            case 0x19EA20u: goto label_19ea20;
            case 0x19EA24u: goto label_19ea24;
            case 0x19EA28u: goto label_19ea28;
            case 0x19EA2Cu: goto label_19ea2c;
            case 0x19EA30u: goto label_19ea30;
            case 0x19EA34u: goto label_19ea34;
            case 0x19EA38u: goto label_19ea38;
            case 0x19EA3Cu: goto label_19ea3c;
            case 0x19EA40u: goto label_19ea40;
            case 0x19EA44u: goto label_19ea44;
            case 0x19EA48u: goto label_19ea48;
            case 0x19EA4Cu: goto label_19ea4c;
            case 0x19EA50u: goto label_19ea50;
            case 0x19EA54u: goto label_19ea54;
            case 0x19EA58u: goto label_19ea58;
            case 0x19EA5Cu: goto label_19ea5c;
            case 0x19EA60u: goto label_19ea60;
            case 0x19EA64u: goto label_19ea64;
            case 0x19EA68u: goto label_19ea68;
            case 0x19EA6Cu: goto label_19ea6c;
            case 0x19EA70u: goto label_19ea70;
            case 0x19EA74u: goto label_19ea74;
            case 0x19EA78u: goto label_19ea78;
            case 0x19EA7Cu: goto label_19ea7c;
            case 0x19EA80u: goto label_19ea80;
            case 0x19EA84u: goto label_19ea84;
            case 0x19EA88u: goto label_19ea88;
            case 0x19EA8Cu: goto label_19ea8c;
            case 0x19EA90u: goto label_19ea90;
            case 0x19EA94u: goto label_19ea94;
            case 0x19EA98u: goto label_19ea98;
            case 0x19EA9Cu: goto label_19ea9c;
            case 0x19EAA0u: goto label_19eaa0;
            case 0x19EAA4u: goto label_19eaa4;
            case 0x19EAA8u: goto label_19eaa8;
            case 0x19EAACu: goto label_19eaac;
            case 0x19EAB0u: goto label_19eab0;
            case 0x19EAB4u: goto label_19eab4;
            case 0x19EAB8u: goto label_19eab8;
            case 0x19EABCu: goto label_19eabc;
            case 0x19EAC0u: goto label_19eac0;
            case 0x19EAC4u: goto label_19eac4;
            case 0x19EAC8u: goto label_19eac8;
            case 0x19EACCu: goto label_19eacc;
            case 0x19EAD0u: goto label_19ead0;
            case 0x19EAD4u: goto label_19ead4;
            case 0x19EAD8u: goto label_19ead8;
            case 0x19EADCu: goto label_19eadc;
            case 0x19EAE0u: goto label_19eae0;
            case 0x19EAE4u: goto label_19eae4;
            case 0x19EAE8u: goto label_19eae8;
            case 0x19EAECu: goto label_19eaec;
            case 0x19EAF0u: goto label_19eaf0;
            case 0x19EAF4u: goto label_19eaf4;
            case 0x19EAF8u: goto label_19eaf8;
            case 0x19EAFCu: goto label_19eafc;
            case 0x19EB00u: goto label_19eb00;
            case 0x19EB04u: goto label_19eb04;
            case 0x19EB08u: goto label_19eb08;
            case 0x19EB0Cu: goto label_19eb0c;
            case 0x19EB10u: goto label_19eb10;
            case 0x19EB14u: goto label_19eb14;
            case 0x19EB18u: goto label_19eb18;
            case 0x19EB1Cu: goto label_19eb1c;
            case 0x19EB20u: goto label_19eb20;
            case 0x19EB24u: goto label_19eb24;
            case 0x19EB28u: goto label_19eb28;
            case 0x19EB2Cu: goto label_19eb2c;
            case 0x19EB30u: goto label_19eb30;
            case 0x19EB34u: goto label_19eb34;
            case 0x19EB38u: goto label_19eb38;
            case 0x19EB3Cu: goto label_19eb3c;
            case 0x19EB40u: goto label_19eb40;
            case 0x19EB44u: goto label_19eb44;
            case 0x19EB48u: goto label_19eb48;
            case 0x19EB4Cu: goto label_19eb4c;
            case 0x19EB50u: goto label_19eb50;
            case 0x19EB54u: goto label_19eb54;
            case 0x19EB58u: goto label_19eb58;
            case 0x19EB5Cu: goto label_19eb5c;
            case 0x19EB60u: goto label_19eb60;
            case 0x19EB64u: goto label_19eb64;
            case 0x19EB68u: goto label_19eb68;
            case 0x19EB6Cu: goto label_19eb6c;
            case 0x19EB70u: goto label_19eb70;
            case 0x19EB74u: goto label_19eb74;
            case 0x19EB78u: goto label_19eb78;
            case 0x19EB7Cu: goto label_19eb7c;
            case 0x19EB80u: goto label_19eb80;
            case 0x19EB84u: goto label_19eb84;
            case 0x19EB88u: goto label_19eb88;
            case 0x19EB8Cu: goto label_19eb8c;
            case 0x19EB90u: goto label_19eb90;
            case 0x19EB94u: goto label_19eb94;
            case 0x19EB98u: goto label_19eb98;
            case 0x19EB9Cu: goto label_19eb9c;
            case 0x19EBA0u: goto label_19eba0;
            case 0x19EBA4u: goto label_19eba4;
            case 0x19EBA8u: goto label_19eba8;
            case 0x19EBACu: goto label_19ebac;
            case 0x19EBB0u: goto label_19ebb0;
            case 0x19EBB4u: goto label_19ebb4;
            case 0x19EBB8u: goto label_19ebb8;
            case 0x19EBBCu: goto label_19ebbc;
            case 0x19EBC0u: goto label_19ebc0;
            case 0x19EBC4u: goto label_19ebc4;
            case 0x19EBC8u: goto label_19ebc8;
            case 0x19EBCCu: goto label_19ebcc;
            case 0x19EBD0u: goto label_19ebd0;
            case 0x19EBD4u: goto label_19ebd4;
            case 0x19EBD8u: goto label_19ebd8;
            case 0x19EBDCu: goto label_19ebdc;
            case 0x19EBE0u: goto label_19ebe0;
            case 0x19EBE4u: goto label_19ebe4;
            case 0x19EBE8u: goto label_19ebe8;
            case 0x19EBECu: goto label_19ebec;
            case 0x19EBF0u: goto label_19ebf0;
            case 0x19EBF4u: goto label_19ebf4;
            case 0x19EBF8u: goto label_19ebf8;
            case 0x19EBFCu: goto label_19ebfc;
            case 0x19EC00u: goto label_19ec00;
            case 0x19EC04u: goto label_19ec04;
            case 0x19EC08u: goto label_19ec08;
            case 0x19EC0Cu: goto label_19ec0c;
            case 0x19EC10u: goto label_19ec10;
            case 0x19EC14u: goto label_19ec14;
            case 0x19EC18u: goto label_19ec18;
            case 0x19EC1Cu: goto label_19ec1c;
            case 0x19EC20u: goto label_19ec20;
            case 0x19EC24u: goto label_19ec24;
            case 0x19EC28u: goto label_19ec28;
            case 0x19EC2Cu: goto label_19ec2c;
            case 0x19EC30u: goto label_19ec30;
            case 0x19EC34u: goto label_19ec34;
            case 0x19EC38u: goto label_19ec38;
            case 0x19EC3Cu: goto label_19ec3c;
            case 0x19EC40u: goto label_19ec40;
            case 0x19EC44u: goto label_19ec44;
            case 0x19EC48u: goto label_19ec48;
            case 0x19EC4Cu: goto label_19ec4c;
            case 0x19EC50u: goto label_19ec50;
            case 0x19EC54u: goto label_19ec54;
            case 0x19EC58u: goto label_19ec58;
            case 0x19EC5Cu: goto label_19ec5c;
            case 0x19EC60u: goto label_19ec60;
            case 0x19EC64u: goto label_19ec64;
            case 0x19EC68u: goto label_19ec68;
            case 0x19EC6Cu: goto label_19ec6c;
            case 0x19EC70u: goto label_19ec70;
            case 0x19EC74u: goto label_19ec74;
            case 0x19EC78u: goto label_19ec78;
            case 0x19EC7Cu: goto label_19ec7c;
            case 0x19EC80u: goto label_19ec80;
            case 0x19EC84u: goto label_19ec84;
            case 0x19EC88u: goto label_19ec88;
            case 0x19EC8Cu: goto label_19ec8c;
            case 0x19EC90u: goto label_19ec90;
            case 0x19EC94u: goto label_19ec94;
            case 0x19EC98u: goto label_19ec98;
            case 0x19EC9Cu: goto label_19ec9c;
            case 0x19ECA0u: goto label_19eca0;
            case 0x19ECA4u: goto label_19eca4;
            case 0x19ECA8u: goto label_19eca8;
            case 0x19ECACu: goto label_19ecac;
            case 0x19ECB0u: goto label_19ecb0;
            case 0x19ECB4u: goto label_19ecb4;
            case 0x19ECB8u: goto label_19ecb8;
            case 0x19ECBCu: goto label_19ecbc;
            case 0x19ECC0u: goto label_19ecc0;
            case 0x19ECC4u: goto label_19ecc4;
            case 0x19ECC8u: goto label_19ecc8;
            case 0x19ECCCu: goto label_19eccc;
            case 0x19ECD0u: goto label_19ecd0;
            case 0x19ECD4u: goto label_19ecd4;
            case 0x19ECD8u: goto label_19ecd8;
            case 0x19ECDCu: goto label_19ecdc;
            case 0x19ECE0u: goto label_19ece0;
            case 0x19ECE4u: goto label_19ece4;
            case 0x19ECE8u: goto label_19ece8;
            case 0x19ECECu: goto label_19ecec;
            case 0x19ECF0u: goto label_19ecf0;
            case 0x19ECF4u: goto label_19ecf4;
            case 0x19ECF8u: goto label_19ecf8;
            case 0x19ECFCu: goto label_19ecfc;
            case 0x19ED00u: goto label_19ed00;
            case 0x19ED04u: goto label_19ed04;
            case 0x19ED08u: goto label_19ed08;
            case 0x19ED0Cu: goto label_19ed0c;
            case 0x19ED10u: goto label_19ed10;
            case 0x19ED14u: goto label_19ed14;
            case 0x19ED18u: goto label_19ed18;
            case 0x19ED1Cu: goto label_19ed1c;
            case 0x19ED20u: goto label_19ed20;
            case 0x19ED24u: goto label_19ed24;
            case 0x19ED28u: goto label_19ed28;
            case 0x19ED2Cu: goto label_19ed2c;
            case 0x19ED30u: goto label_19ed30;
            case 0x19ED34u: goto label_19ed34;
            case 0x19ED38u: goto label_19ed38;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19E834u; }
            if (ctx->pc != 0x19E834u) { return; }
        }
    }
    ctx->pc = 0x19E834u;
label_19e834:
    // 0x19e834: 0x1000013c  b           . + 4 + (0x13C << 2)
label_19e838:
    if (ctx->pc == 0x19E838u) {
        ctx->pc = 0x19E83Cu;
        goto label_19e83c;
    }
    ctx->pc = 0x19E834u;
    {
        const bool branch_taken_0x19e834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e834) {
            ctx->pc = 0x19ED28u;
            goto label_19ed28;
        }
    }
    ctx->pc = 0x19E83Cu;
label_19e83c:
    // 0x19e83c: 0x0  nop
    ctx->pc = 0x19e83cu;
    // NOP
label_19e840:
    // 0x19e840: 0x286103e8  slti        $at, $v1, 0x3E8
    ctx->pc = 0x19e840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
label_19e844:
    // 0x19e844: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_19e848:
    if (ctx->pc == 0x19E848u) {
        ctx->pc = 0x19E84Cu;
        goto label_19e84c;
    }
    ctx->pc = 0x19E844u;
    {
        const bool branch_taken_0x19e844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e844) {
            ctx->pc = 0x19E898u;
            goto label_19e898;
        }
    }
    ctx->pc = 0x19E84Cu;
label_19e84c:
    // 0x19e84c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x19e84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19e850:
    // 0x19e850: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x19e850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_19e854:
    // 0x19e854: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x19e854u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19e858:
    // 0x19e858: 0x0  nop
    ctx->pc = 0x19e858u;
    // NOP
label_19e85c:
    // 0x19e85c: 0x0  nop
    ctx->pc = 0x19e85cu;
    // NOP
label_19e860:
    // 0x19e860: 0x1810  mfhi        $v1
    ctx->pc = 0x19e860u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_19e864:
    // 0x19e864: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_19e868:
    if (ctx->pc == 0x19E868u) {
        ctx->pc = 0x19E86Cu;
        goto label_19e86c;
    }
    ctx->pc = 0x19E864u;
    {
        const bool branch_taken_0x19e864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e864) {
            ctx->pc = 0x19E898u;
            goto label_19e898;
        }
    }
    ctx->pc = 0x19E86Cu;
label_19e86c:
    // 0x19e86c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x19e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e870:
    // 0x19e870: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x19e870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_19e874:
    // 0x19e874: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x19e874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_19e878:
    // 0x19e878: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19e878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e87c:
    // 0x19e87c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x19e87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e880:
    // 0x19e880: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19e880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19e884:
    // 0x19e884: 0xc0536d8  jal         func_14DB60
label_19e888:
    if (ctx->pc == 0x19E888u) {
        ctx->pc = 0x19E888u;
            // 0x19e888: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x19E88Cu;
        goto label_19e88c;
    }
    ctx->pc = 0x19E884u;
    SET_GPR_U32(ctx, 31, 0x19E88Cu);
    ctx->pc = 0x19E888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E884u;
            // 0x19e888: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E88Cu; }
        if (ctx->pc != 0x19E88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E88Cu; }
        if (ctx->pc != 0x19E88Cu) { return; }
    }
    ctx->pc = 0x19E88Cu;
label_19e88c:
    // 0x19e88c: 0xc060500  jal         func_181400
label_19e890:
    if (ctx->pc == 0x19E890u) {
        ctx->pc = 0x19E890u;
            // 0x19e890: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19E894u;
        goto label_19e894;
    }
    ctx->pc = 0x19E88Cu;
    SET_GPR_U32(ctx, 31, 0x19E894u);
    ctx->pc = 0x19E890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E88Cu;
            // 0x19e890: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E894u; }
        if (ctx->pc != 0x19E894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E894u; }
        if (ctx->pc != 0x19E894u) { return; }
    }
    ctx->pc = 0x19E894u;
label_19e894:
    // 0x19e894: 0x0  nop
    ctx->pc = 0x19e894u;
    // NOP
label_19e898:
    // 0x19e898: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19e898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19e89c:
    // 0x19e89c: 0x286101f4  slti        $at, $v1, 0x1F4
    ctx->pc = 0x19e89cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)500) ? 1 : 0);
label_19e8a0:
    // 0x19e8a0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_19e8a4:
    if (ctx->pc == 0x19E8A4u) {
        ctx->pc = 0x19E8A8u;
        goto label_19e8a8;
    }
    ctx->pc = 0x19E8A0u;
    {
        const bool branch_taken_0x19e8a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e8a0) {
            ctx->pc = 0x19E8E8u;
            goto label_19e8e8;
        }
    }
    ctx->pc = 0x19E8A8u;
label_19e8a8:
    // 0x19e8a8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x19e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19e8ac:
    // 0x19e8ac: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x19e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_19e8b0:
    // 0x19e8b0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x19e8b0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19e8b4:
    // 0x19e8b4: 0x0  nop
    ctx->pc = 0x19e8b4u;
    // NOP
label_19e8b8:
    // 0x19e8b8: 0x0  nop
    ctx->pc = 0x19e8b8u;
    // NOP
label_19e8bc:
    // 0x19e8bc: 0x1810  mfhi        $v1
    ctx->pc = 0x19e8bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_19e8c0:
    // 0x19e8c0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_19e8c4:
    if (ctx->pc == 0x19E8C4u) {
        ctx->pc = 0x19E8C8u;
        goto label_19e8c8;
    }
    ctx->pc = 0x19E8C0u;
    {
        const bool branch_taken_0x19e8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e8c0) {
            ctx->pc = 0x19E8E8u;
            goto label_19e8e8;
        }
    }
    ctx->pc = 0x19E8C8u;
label_19e8c8:
    // 0x19e8c8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x19e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19e8cc:
    // 0x19e8cc: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x19e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_19e8d0:
    // 0x19e8d0: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x19e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_19e8d4:
    // 0x19e8d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19e8d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e8d8:
    // 0x19e8d8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x19e8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19e8dc:
    // 0x19e8dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19e8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19e8e0:
    // 0x19e8e0: 0xc0536d8  jal         func_14DB60
label_19e8e4:
    if (ctx->pc == 0x19E8E4u) {
        ctx->pc = 0x19E8E4u;
            // 0x19e8e4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x19E8E8u;
        goto label_19e8e8;
    }
    ctx->pc = 0x19E8E0u;
    SET_GPR_U32(ctx, 31, 0x19E8E8u);
    ctx->pc = 0x19E8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E8E0u;
            // 0x19e8e4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8E8u; }
        if (ctx->pc != 0x19E8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8E8u; }
        if (ctx->pc != 0x19E8E8u) { return; }
    }
    ctx->pc = 0x19E8E8u;
label_19e8e8:
    // 0x19e8e8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19e8ec:
    // 0x19e8ec: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x19e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_19e8f0:
    // 0x19e8f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19e8f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e8f4:
    // 0x19e8f4: 0x0  nop
    ctx->pc = 0x19e8f4u;
    // NOP
label_19e8f8:
    // 0x19e8f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19e8f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19e8fc:
    // 0x19e8fc: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x19e8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_19e900:
    // 0x19e900: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19e900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19e904:
    // 0x19e904: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x19e904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_19e908:
    // 0x19e908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19e908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e90c:
    // 0x19e90c: 0x0  nop
    ctx->pc = 0x19e90cu;
    // NOP
label_19e910:
    // 0x19e910: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19e910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19e914:
    // 0x19e914: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x19e914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_19e918:
    // 0x19e918: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19e91c:
    // 0x19e91c: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x19e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_19e920:
    // 0x19e920: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19e920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e924:
    // 0x19e924: 0x0  nop
    ctx->pc = 0x19e924u;
    // NOP
label_19e928:
    // 0x19e928: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19e928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19e92c:
    // 0x19e92c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x19e92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_19e930:
    // 0x19e930: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19e930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19e934:
    // 0x19e934: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x19e934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_19e938:
    // 0x19e938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19e938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e93c:
    // 0x19e93c: 0x0  nop
    ctx->pc = 0x19e93cu;
    // NOP
label_19e940:
    // 0x19e940: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19e940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19e944:
    // 0x19e944: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x19e944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_19e948:
    // 0x19e948: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x19e948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_19e94c:
    // 0x19e94c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_19e950:
    if (ctx->pc == 0x19E950u) {
        ctx->pc = 0x19E950u;
            // 0x19e950: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->pc = 0x19E954u;
        goto label_19e954;
    }
    ctx->pc = 0x19E94Cu;
    {
        const bool branch_taken_0x19e94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E94Cu;
            // 0x19e950: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e94c) {
            ctx->pc = 0x19E970u;
            goto label_19e970;
        }
    }
    ctx->pc = 0x19E954u;
label_19e954:
    // 0x19e954: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19e954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19e958:
    // 0x19e958: 0x2605007c  addiu       $a1, $s0, 0x7C
    ctx->pc = 0x19e958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
label_19e95c:
    // 0x19e95c: 0x24c6c960  addiu       $a2, $a2, -0x36A0
    ctx->pc = 0x19e95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953312));
label_19e960:
    // 0x19e960: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19e960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e964:
    // 0x19e964: 0xc053ca4  jal         func_14F290
label_19e968:
    if (ctx->pc == 0x19E968u) {
        ctx->pc = 0x19E968u;
            // 0x19e968: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E96Cu;
        goto label_19e96c;
    }
    ctx->pc = 0x19E964u;
    SET_GPR_U32(ctx, 31, 0x19E96Cu);
    ctx->pc = 0x19E968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E964u;
            // 0x19e968: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E96Cu; }
        if (ctx->pc != 0x19E96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E96Cu; }
        if (ctx->pc != 0x19E96Cu) { return; }
    }
    ctx->pc = 0x19E96Cu;
label_19e96c:
    // 0x19e96c: 0x0  nop
    ctx->pc = 0x19e96cu;
    // NOP
label_19e970:
    // 0x19e970: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19e970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19e974:
    // 0x19e974: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x19e974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_19e978:
    // 0x19e978: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19e978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e97c:
    // 0x19e97c: 0x0  nop
    ctx->pc = 0x19e97cu;
    // NOP
label_19e980:
    // 0x19e980: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19e980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19e984:
    // 0x19e984: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x19e984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_19e988:
    // 0x19e988: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19e988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19e98c:
    // 0x19e98c: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x19e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_19e990:
    // 0x19e990: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19e990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e994:
    // 0x19e994: 0x0  nop
    ctx->pc = 0x19e994u;
    // NOP
label_19e998:
    // 0x19e998: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19e998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19e99c:
    // 0x19e99c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x19e99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_19e9a0:
    // 0x19e9a0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19e9a4:
    // 0x19e9a4: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x19e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
label_19e9a8:
    // 0x19e9a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19e9a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e9ac:
    // 0x19e9ac: 0x0  nop
    ctx->pc = 0x19e9acu;
    // NOP
label_19e9b0:
    // 0x19e9b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19e9b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19e9b4:
    // 0x19e9b4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x19e9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_19e9b8:
    // 0x19e9b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19e9bc:
    // 0x19e9bc: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x19e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_19e9c0:
    // 0x19e9c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19e9c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e9c4:
    // 0x19e9c4: 0x0  nop
    ctx->pc = 0x19e9c4u;
    // NOP
label_19e9c8:
    // 0x19e9c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19e9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19e9cc:
    // 0x19e9cc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x19e9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_19e9d0:
    // 0x19e9d0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x19e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_19e9d4:
    // 0x19e9d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_19e9d8:
    if (ctx->pc == 0x19E9D8u) {
        ctx->pc = 0x19E9D8u;
            // 0x19e9d8: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->pc = 0x19E9DCu;
        goto label_19e9dc;
    }
    ctx->pc = 0x19E9D4u;
    {
        const bool branch_taken_0x19e9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E9D4u;
            // 0x19e9d8: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9d4) {
            ctx->pc = 0x19E9F8u;
            goto label_19e9f8;
        }
    }
    ctx->pc = 0x19E9DCu;
label_19e9dc:
    // 0x19e9dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19e9e0:
    // 0x19e9e0: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x19e9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_19e9e4:
    // 0x19e9e4: 0x24c6c960  addiu       $a2, $a2, -0x36A0
    ctx->pc = 0x19e9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953312));
label_19e9e8:
    // 0x19e9e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19e9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e9ec:
    // 0x19e9ec: 0xc053ca4  jal         func_14F290
label_19e9f0:
    if (ctx->pc == 0x19E9F0u) {
        ctx->pc = 0x19E9F0u;
            // 0x19e9f0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E9F4u;
        goto label_19e9f4;
    }
    ctx->pc = 0x19E9ECu;
    SET_GPR_U32(ctx, 31, 0x19E9F4u);
    ctx->pc = 0x19E9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E9ECu;
            // 0x19e9f0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E9F4u; }
        if (ctx->pc != 0x19E9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E9F4u; }
        if (ctx->pc != 0x19E9F4u) { return; }
    }
    ctx->pc = 0x19E9F4u;
label_19e9f4:
    // 0x19e9f4: 0x0  nop
    ctx->pc = 0x19e9f4u;
    // NOP
label_19e9f8:
    // 0x19e9f8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19e9fc:
    // 0x19e9fc: 0x2463ffc4  addiu       $v1, $v1, -0x3C
    ctx->pc = 0x19e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
label_19ea00:
    // 0x19ea00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ea00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ea04:
    // 0x19ea04: 0x0  nop
    ctx->pc = 0x19ea04u;
    // NOP
label_19ea08:
    // 0x19ea08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ea08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ea0c:
    // 0x19ea0c: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x19ea0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_19ea10:
    // 0x19ea10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ea14:
    // 0x19ea14: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x19ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_19ea18:
    // 0x19ea18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ea18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ea1c:
    // 0x19ea1c: 0x0  nop
    ctx->pc = 0x19ea1cu;
    // NOP
label_19ea20:
    // 0x19ea20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ea20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ea24:
    // 0x19ea24: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x19ea24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_19ea28:
    // 0x19ea28: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19ea2c:
    // 0x19ea2c: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x19ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_19ea30:
    // 0x19ea30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ea30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ea34:
    // 0x19ea34: 0x0  nop
    ctx->pc = 0x19ea34u;
    // NOP
label_19ea38:
    // 0x19ea38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ea38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ea3c:
    // 0x19ea3c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x19ea3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_19ea40:
    // 0x19ea40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ea44:
    // 0x19ea44: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x19ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_19ea48:
    // 0x19ea48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ea48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ea4c:
    // 0x19ea4c: 0x0  nop
    ctx->pc = 0x19ea4cu;
    // NOP
label_19ea50:
    // 0x19ea50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ea50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ea54:
    // 0x19ea54: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x19ea54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_19ea58:
    // 0x19ea58: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x19ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_19ea5c:
    // 0x19ea5c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_19ea60:
    if (ctx->pc == 0x19EA60u) {
        ctx->pc = 0x19EA60u;
            // 0x19ea60: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->pc = 0x19EA64u;
        goto label_19ea64;
    }
    ctx->pc = 0x19EA5Cu;
    {
        const bool branch_taken_0x19ea5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA5Cu;
            // 0x19ea60: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea5c) {
            ctx->pc = 0x19EA80u;
            goto label_19ea80;
        }
    }
    ctx->pc = 0x19EA64u;
label_19ea64:
    // 0x19ea64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19ea68:
    // 0x19ea68: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x19ea68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_19ea6c:
    // 0x19ea6c: 0x24c6c960  addiu       $a2, $a2, -0x36A0
    ctx->pc = 0x19ea6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953312));
label_19ea70:
    // 0x19ea70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19ea70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ea74:
    // 0x19ea74: 0xc053ca4  jal         func_14F290
label_19ea78:
    if (ctx->pc == 0x19EA78u) {
        ctx->pc = 0x19EA78u;
            // 0x19ea78: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19EA7Cu;
        goto label_19ea7c;
    }
    ctx->pc = 0x19EA74u;
    SET_GPR_U32(ctx, 31, 0x19EA7Cu);
    ctx->pc = 0x19EA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA74u;
            // 0x19ea78: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA7Cu; }
        if (ctx->pc != 0x19EA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA7Cu; }
        if (ctx->pc != 0x19EA7Cu) { return; }
    }
    ctx->pc = 0x19EA7Cu;
label_19ea7c:
    // 0x19ea7c: 0x0  nop
    ctx->pc = 0x19ea7cu;
    // NOP
label_19ea80:
    // 0x19ea80: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19ea84:
    // 0x19ea84: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x19ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_19ea88:
    // 0x19ea88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ea88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ea8c:
    // 0x19ea8c: 0x0  nop
    ctx->pc = 0x19ea8cu;
    // NOP
label_19ea90:
    // 0x19ea90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ea90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ea94:
    // 0x19ea94: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x19ea94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_19ea98:
    // 0x19ea98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ea9c:
    // 0x19ea9c: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x19ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_19eaa0:
    // 0x19eaa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19eaa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19eaa4:
    // 0x19eaa4: 0x0  nop
    ctx->pc = 0x19eaa4u;
    // NOP
label_19eaa8:
    // 0x19eaa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19eaa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19eaac:
    // 0x19eaac: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x19eaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_19eab0:
    // 0x19eab0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19eab4:
    // 0x19eab4: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x19eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_19eab8:
    // 0x19eab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19eab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19eabc:
    // 0x19eabc: 0x0  nop
    ctx->pc = 0x19eabcu;
    // NOP
label_19eac0:
    // 0x19eac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19eac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19eac4:
    // 0x19eac4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x19eac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_19eac8:
    // 0x19eac8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19eacc:
    // 0x19eacc: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x19eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_19ead0:
    // 0x19ead0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ead0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ead4:
    // 0x19ead4: 0x0  nop
    ctx->pc = 0x19ead4u;
    // NOP
label_19ead8:
    // 0x19ead8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ead8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19eadc:
    // 0x19eadc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x19eadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_19eae0:
    // 0x19eae0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x19eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_19eae4:
    // 0x19eae4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_19eae8:
    if (ctx->pc == 0x19EAE8u) {
        ctx->pc = 0x19EAE8u;
            // 0x19eae8: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->pc = 0x19EAECu;
        goto label_19eaec;
    }
    ctx->pc = 0x19EAE4u;
    {
        const bool branch_taken_0x19eae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EAE4u;
            // 0x19eae8: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eae4) {
            ctx->pc = 0x19EB08u;
            goto label_19eb08;
        }
    }
    ctx->pc = 0x19EAECu;
label_19eaec:
    // 0x19eaec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19eaf0:
    // 0x19eaf0: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x19eaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_19eaf4:
    // 0x19eaf4: 0x24c6c960  addiu       $a2, $a2, -0x36A0
    ctx->pc = 0x19eaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953312));
label_19eaf8:
    // 0x19eaf8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19eaf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19eafc:
    // 0x19eafc: 0xc053ca4  jal         func_14F290
label_19eb00:
    if (ctx->pc == 0x19EB00u) {
        ctx->pc = 0x19EB00u;
            // 0x19eb00: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19EB04u;
        goto label_19eb04;
    }
    ctx->pc = 0x19EAFCu;
    SET_GPR_U32(ctx, 31, 0x19EB04u);
    ctx->pc = 0x19EB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EAFCu;
            // 0x19eb00: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB04u; }
        if (ctx->pc != 0x19EB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB04u; }
        if (ctx->pc != 0x19EB04u) { return; }
    }
    ctx->pc = 0x19EB04u;
label_19eb04:
    // 0x19eb04: 0x0  nop
    ctx->pc = 0x19eb04u;
    // NOP
label_19eb08:
    // 0x19eb08: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19eb0c:
    // 0x19eb0c: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x19eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
label_19eb10:
    // 0x19eb10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19eb10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19eb14:
    // 0x19eb14: 0x0  nop
    ctx->pc = 0x19eb14u;
    // NOP
label_19eb18:
    // 0x19eb18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19eb18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19eb1c:
    // 0x19eb1c: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x19eb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_19eb20:
    // 0x19eb20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19eb24:
    // 0x19eb24: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x19eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_19eb28:
    // 0x19eb28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19eb28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19eb2c:
    // 0x19eb2c: 0x0  nop
    ctx->pc = 0x19eb2cu;
    // NOP
label_19eb30:
    // 0x19eb30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19eb30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19eb34:
    // 0x19eb34: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x19eb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_19eb38:
    // 0x19eb38: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19eb3c:
    // 0x19eb3c: 0x2463ffc4  addiu       $v1, $v1, -0x3C
    ctx->pc = 0x19eb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
label_19eb40:
    // 0x19eb40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19eb40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19eb44:
    // 0x19eb44: 0x0  nop
    ctx->pc = 0x19eb44u;
    // NOP
label_19eb48:
    // 0x19eb48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19eb48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19eb4c:
    // 0x19eb4c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x19eb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_19eb50:
    // 0x19eb50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19eb54:
    // 0x19eb54: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x19eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_19eb58:
    // 0x19eb58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19eb58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19eb5c:
    // 0x19eb5c: 0x0  nop
    ctx->pc = 0x19eb5cu;
    // NOP
label_19eb60:
    // 0x19eb60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19eb60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19eb64:
    // 0x19eb64: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x19eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_19eb68:
    // 0x19eb68: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x19eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_19eb6c:
    // 0x19eb6c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_19eb70:
    if (ctx->pc == 0x19EB70u) {
        ctx->pc = 0x19EB70u;
            // 0x19eb70: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->pc = 0x19EB74u;
        goto label_19eb74;
    }
    ctx->pc = 0x19EB6Cu;
    {
        const bool branch_taken_0x19eb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB6Cu;
            // 0x19eb70: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb6c) {
            ctx->pc = 0x19EB90u;
            goto label_19eb90;
        }
    }
    ctx->pc = 0x19EB74u;
label_19eb74:
    // 0x19eb74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19eb78:
    // 0x19eb78: 0x2605005c  addiu       $a1, $s0, 0x5C
    ctx->pc = 0x19eb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
label_19eb7c:
    // 0x19eb7c: 0x24c6c960  addiu       $a2, $a2, -0x36A0
    ctx->pc = 0x19eb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953312));
label_19eb80:
    // 0x19eb80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19eb80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19eb84:
    // 0x19eb84: 0xc053ca4  jal         func_14F290
label_19eb88:
    if (ctx->pc == 0x19EB88u) {
        ctx->pc = 0x19EB88u;
            // 0x19eb88: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19EB8Cu;
        goto label_19eb8c;
    }
    ctx->pc = 0x19EB84u;
    SET_GPR_U32(ctx, 31, 0x19EB8Cu);
    ctx->pc = 0x19EB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB84u;
            // 0x19eb88: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB8Cu; }
        if (ctx->pc != 0x19EB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB8Cu; }
        if (ctx->pc != 0x19EB8Cu) { return; }
    }
    ctx->pc = 0x19EB8Cu;
label_19eb8c:
    // 0x19eb8c: 0x0  nop
    ctx->pc = 0x19eb8cu;
    // NOP
label_19eb90:
    // 0x19eb90: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19eb94:
    // 0x19eb94: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x19eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_19eb98:
    // 0x19eb98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19eb98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19eb9c:
    // 0x19eb9c: 0x0  nop
    ctx->pc = 0x19eb9cu;
    // NOP
label_19eba0:
    // 0x19eba0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19eba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19eba4:
    // 0x19eba4: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x19eba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
label_19eba8:
    // 0x19eba8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ebac:
    // 0x19ebac: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x19ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_19ebb0:
    // 0x19ebb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ebb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ebb4:
    // 0x19ebb4: 0x0  nop
    ctx->pc = 0x19ebb4u;
    // NOP
label_19ebb8:
    // 0x19ebb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ebb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ebbc:
    // 0x19ebbc: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x19ebbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_19ebc0:
    // 0x19ebc0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19ebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19ebc4:
    // 0x19ebc4: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x19ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_19ebc8:
    // 0x19ebc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ebc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ebcc:
    // 0x19ebcc: 0x0  nop
    ctx->pc = 0x19ebccu;
    // NOP
label_19ebd0:
    // 0x19ebd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ebd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ebd4:
    // 0x19ebd4: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x19ebd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_19ebd8:
    // 0x19ebd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ebdc:
    // 0x19ebdc: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x19ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_19ebe0:
    // 0x19ebe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ebe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ebe4:
    // 0x19ebe4: 0x0  nop
    ctx->pc = 0x19ebe4u;
    // NOP
label_19ebe8:
    // 0x19ebe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ebe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ebec:
    // 0x19ebec: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x19ebecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_19ebf0:
    // 0x19ebf0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x19ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_19ebf4:
    // 0x19ebf4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_19ebf8:
    if (ctx->pc == 0x19EBF8u) {
        ctx->pc = 0x19EBF8u;
            // 0x19ebf8: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->pc = 0x19EBFCu;
        goto label_19ebfc;
    }
    ctx->pc = 0x19EBF4u;
    {
        const bool branch_taken_0x19ebf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBF4u;
            // 0x19ebf8: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ebf4) {
            ctx->pc = 0x19EC18u;
            goto label_19ec18;
        }
    }
    ctx->pc = 0x19EBFCu;
label_19ebfc:
    // 0x19ebfc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19ec00:
    // 0x19ec00: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x19ec00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_19ec04:
    // 0x19ec04: 0x24c6c960  addiu       $a2, $a2, -0x36A0
    ctx->pc = 0x19ec04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953312));
label_19ec08:
    // 0x19ec08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19ec08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ec0c:
    // 0x19ec0c: 0xc053ca4  jal         func_14F290
label_19ec10:
    if (ctx->pc == 0x19EC10u) {
        ctx->pc = 0x19EC10u;
            // 0x19ec10: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19EC14u;
        goto label_19ec14;
    }
    ctx->pc = 0x19EC0Cu;
    SET_GPR_U32(ctx, 31, 0x19EC14u);
    ctx->pc = 0x19EC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC0Cu;
            // 0x19ec10: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC14u; }
        if (ctx->pc != 0x19EC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC14u; }
        if (ctx->pc != 0x19EC14u) { return; }
    }
    ctx->pc = 0x19EC14u;
label_19ec14:
    // 0x19ec14: 0x0  nop
    ctx->pc = 0x19ec14u;
    // NOP
label_19ec18:
    // 0x19ec18: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19ec1c:
    // 0x19ec1c: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x19ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
label_19ec20:
    // 0x19ec20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ec20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ec24:
    // 0x19ec24: 0x0  nop
    ctx->pc = 0x19ec24u;
    // NOP
label_19ec28:
    // 0x19ec28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ec28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ec2c:
    // 0x19ec2c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x19ec2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_19ec30:
    // 0x19ec30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ec34:
    // 0x19ec34: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x19ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
label_19ec38:
    // 0x19ec38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ec38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ec3c:
    // 0x19ec3c: 0x0  nop
    ctx->pc = 0x19ec3cu;
    // NOP
label_19ec40:
    // 0x19ec40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ec40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ec44:
    // 0x19ec44: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x19ec44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_19ec48:
    // 0x19ec48: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19ec4c:
    // 0x19ec4c: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x19ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
label_19ec50:
    // 0x19ec50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ec50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ec54:
    // 0x19ec54: 0x0  nop
    ctx->pc = 0x19ec54u;
    // NOP
label_19ec58:
    // 0x19ec58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ec58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ec5c:
    // 0x19ec5c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x19ec5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_19ec60:
    // 0x19ec60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ec64:
    // 0x19ec64: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x19ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_19ec68:
    // 0x19ec68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ec68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ec6c:
    // 0x19ec6c: 0x0  nop
    ctx->pc = 0x19ec6cu;
    // NOP
label_19ec70:
    // 0x19ec70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ec70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ec74:
    // 0x19ec74: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x19ec74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_19ec78:
    // 0x19ec78: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x19ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_19ec7c:
    // 0x19ec7c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_19ec80:
    if (ctx->pc == 0x19EC80u) {
        ctx->pc = 0x19EC80u;
            // 0x19ec80: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->pc = 0x19EC84u;
        goto label_19ec84;
    }
    ctx->pc = 0x19EC7Cu;
    {
        const bool branch_taken_0x19ec7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC7Cu;
            // 0x19ec80: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec7c) {
            ctx->pc = 0x19ECA0u;
            goto label_19eca0;
        }
    }
    ctx->pc = 0x19EC84u;
label_19ec84:
    // 0x19ec84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19ec88:
    // 0x19ec88: 0x2605008c  addiu       $a1, $s0, 0x8C
    ctx->pc = 0x19ec88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
label_19ec8c:
    // 0x19ec8c: 0x24c6c960  addiu       $a2, $a2, -0x36A0
    ctx->pc = 0x19ec8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953312));
label_19ec90:
    // 0x19ec90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19ec90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ec94:
    // 0x19ec94: 0xc053ca4  jal         func_14F290
label_19ec98:
    if (ctx->pc == 0x19EC98u) {
        ctx->pc = 0x19EC98u;
            // 0x19ec98: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19EC9Cu;
        goto label_19ec9c;
    }
    ctx->pc = 0x19EC94u;
    SET_GPR_U32(ctx, 31, 0x19EC9Cu);
    ctx->pc = 0x19EC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC94u;
            // 0x19ec98: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC9Cu; }
        if (ctx->pc != 0x19EC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC9Cu; }
        if (ctx->pc != 0x19EC9Cu) { return; }
    }
    ctx->pc = 0x19EC9Cu;
label_19ec9c:
    // 0x19ec9c: 0x0  nop
    ctx->pc = 0x19ec9cu;
    // NOP
label_19eca0:
    // 0x19eca0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19eca4:
    // 0x19eca4: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x19eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_19eca8:
    // 0x19eca8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19eca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ecac:
    // 0x19ecac: 0x0  nop
    ctx->pc = 0x19ecacu;
    // NOP
label_19ecb0:
    // 0x19ecb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ecb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ecb4:
    // 0x19ecb4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x19ecb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_19ecb8:
    // 0x19ecb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ecbc:
    // 0x19ecbc: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x19ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
label_19ecc0:
    // 0x19ecc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ecc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ecc4:
    // 0x19ecc4: 0x0  nop
    ctx->pc = 0x19ecc4u;
    // NOP
label_19ecc8:
    // 0x19ecc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ecc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19eccc:
    // 0x19eccc: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x19ecccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_19ecd0:
    // 0x19ecd0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19ecd4:
    // 0x19ecd4: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x19ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_19ecd8:
    // 0x19ecd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ecd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ecdc:
    // 0x19ecdc: 0x0  nop
    ctx->pc = 0x19ecdcu;
    // NOP
label_19ece0:
    // 0x19ece0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ece0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ece4:
    // 0x19ece4: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x19ece4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
label_19ece8:
    // 0x19ece8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19ecec:
    // 0x19ecec: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x19ececu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_19ecf0:
    // 0x19ecf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ecf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ecf4:
    // 0x19ecf4: 0x0  nop
    ctx->pc = 0x19ecf4u;
    // NOP
label_19ecf8:
    // 0x19ecf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ecf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ecfc:
    // 0x19ecfc: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x19ecfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
label_19ed00:
    // 0x19ed00: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x19ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_19ed04:
    // 0x19ed04: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_19ed08:
    if (ctx->pc == 0x19ED08u) {
        ctx->pc = 0x19ED08u;
            // 0x19ed08: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->pc = 0x19ED0Cu;
        goto label_19ed0c;
    }
    ctx->pc = 0x19ED04u;
    {
        const bool branch_taken_0x19ed04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED04u;
            // 0x19ed08: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed04) {
            ctx->pc = 0x19ED28u;
            goto label_19ed28;
        }
    }
    ctx->pc = 0x19ED0Cu;
label_19ed0c:
    // 0x19ed0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19ed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19ed10:
    // 0x19ed10: 0x2605009c  addiu       $a1, $s0, 0x9C
    ctx->pc = 0x19ed10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
label_19ed14:
    // 0x19ed14: 0x24c6c960  addiu       $a2, $a2, -0x36A0
    ctx->pc = 0x19ed14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953312));
label_19ed18:
    // 0x19ed18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19ed18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ed1c:
    // 0x19ed1c: 0xc053ca4  jal         func_14F290
label_19ed20:
    if (ctx->pc == 0x19ED20u) {
        ctx->pc = 0x19ED20u;
            // 0x19ed20: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19ED24u;
        goto label_19ed24;
    }
    ctx->pc = 0x19ED1Cu;
    SET_GPR_U32(ctx, 31, 0x19ED24u);
    ctx->pc = 0x19ED20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED1Cu;
            // 0x19ed20: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ED24u; }
        if (ctx->pc != 0x19ED24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ED24u; }
        if (ctx->pc != 0x19ED24u) { return; }
    }
    ctx->pc = 0x19ED24u;
label_19ed24:
    // 0x19ed24: 0x0  nop
    ctx->pc = 0x19ed24u;
    // NOP
label_19ed28:
    // 0x19ed28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19ed28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19ed2c:
    // 0x19ed2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ed2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19ed30:
    // 0x19ed30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ed30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19ed34:
    // 0x19ed34: 0x3e00008  jr          $ra
label_19ed38:
    if (ctx->pc == 0x19ED38u) {
        ctx->pc = 0x19ED38u;
            // 0x19ed38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x19ED3Cu;
        goto label_fallthrough_0x19ed34;
    }
    ctx->pc = 0x19ED34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ED38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED34u;
            // 0x19ed38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CC50u: goto label_19cc50;
            case 0x19CC54u: goto label_19cc54;
            case 0x19CC58u: goto label_19cc58;
            case 0x19CC5Cu: goto label_19cc5c;
            case 0x19CC60u: goto label_19cc60;
            case 0x19CC64u: goto label_19cc64;
            case 0x19CC68u: goto label_19cc68;
            case 0x19CC6Cu: goto label_19cc6c;
            case 0x19CC70u: goto label_19cc70;
            case 0x19CC74u: goto label_19cc74;
            case 0x19CC78u: goto label_19cc78;
            case 0x19CC7Cu: goto label_19cc7c;
            case 0x19CC80u: goto label_19cc80;
            case 0x19CC84u: goto label_19cc84;
            case 0x19CC88u: goto label_19cc88;
            case 0x19CC8Cu: goto label_19cc8c;
            case 0x19CC90u: goto label_19cc90;
            case 0x19CC94u: goto label_19cc94;
            case 0x19CC98u: goto label_19cc98;
            case 0x19CC9Cu: goto label_19cc9c;
            case 0x19CCA0u: goto label_19cca0;
            case 0x19CCA4u: goto label_19cca4;
            case 0x19CCA8u: goto label_19cca8;
            case 0x19CCACu: goto label_19ccac;
            case 0x19CCB0u: goto label_19ccb0;
            case 0x19CCB4u: goto label_19ccb4;
            case 0x19CCB8u: goto label_19ccb8;
            case 0x19CCBCu: goto label_19ccbc;
            case 0x19CCC0u: goto label_19ccc0;
            case 0x19CCC4u: goto label_19ccc4;
            case 0x19CCC8u: goto label_19ccc8;
            case 0x19CCCCu: goto label_19cccc;
            case 0x19CCD0u: goto label_19ccd0;
            case 0x19CCD4u: goto label_19ccd4;
            case 0x19CCD8u: goto label_19ccd8;
            case 0x19CCDCu: goto label_19ccdc;
            case 0x19CCE0u: goto label_19cce0;
            case 0x19CCE4u: goto label_19cce4;
            case 0x19CCE8u: goto label_19cce8;
            case 0x19CCECu: goto label_19ccec;
            case 0x19CCF0u: goto label_19ccf0;
            case 0x19CCF4u: goto label_19ccf4;
            case 0x19CCF8u: goto label_19ccf8;
            case 0x19CCFCu: goto label_19ccfc;
            case 0x19CD00u: goto label_19cd00;
            case 0x19CD04u: goto label_19cd04;
            case 0x19CD08u: goto label_19cd08;
            case 0x19CD0Cu: goto label_19cd0c;
            case 0x19CD10u: goto label_19cd10;
            case 0x19CD14u: goto label_19cd14;
            case 0x19CD18u: goto label_19cd18;
            case 0x19CD1Cu: goto label_19cd1c;
            case 0x19CD20u: goto label_19cd20;
            case 0x19CD24u: goto label_19cd24;
            case 0x19CD28u: goto label_19cd28;
            case 0x19CD2Cu: goto label_19cd2c;
            case 0x19CD30u: goto label_19cd30;
            case 0x19CD34u: goto label_19cd34;
            case 0x19CD38u: goto label_19cd38;
            case 0x19CD3Cu: goto label_19cd3c;
            case 0x19CD40u: goto label_19cd40;
            case 0x19CD44u: goto label_19cd44;
            case 0x19CD48u: goto label_19cd48;
            case 0x19CD4Cu: goto label_19cd4c;
            case 0x19CD50u: goto label_19cd50;
            case 0x19CD54u: goto label_19cd54;
            case 0x19CD58u: goto label_19cd58;
            case 0x19CD5Cu: goto label_19cd5c;
            case 0x19CD60u: goto label_19cd60;
            case 0x19CD64u: goto label_19cd64;
            case 0x19CD68u: goto label_19cd68;
            case 0x19CD6Cu: goto label_19cd6c;
            case 0x19CD70u: goto label_19cd70;
            case 0x19CD74u: goto label_19cd74;
            case 0x19CD78u: goto label_19cd78;
            case 0x19CD7Cu: goto label_19cd7c;
            case 0x19CD80u: goto label_19cd80;
            case 0x19CD84u: goto label_19cd84;
            case 0x19CD88u: goto label_19cd88;
            case 0x19CD8Cu: goto label_19cd8c;
            case 0x19CD90u: goto label_19cd90;
            case 0x19CD94u: goto label_19cd94;
            case 0x19CD98u: goto label_19cd98;
            case 0x19CD9Cu: goto label_19cd9c;
            case 0x19CDA0u: goto label_19cda0;
            case 0x19CDA4u: goto label_19cda4;
            case 0x19CDA8u: goto label_19cda8;
            case 0x19CDACu: goto label_19cdac;
            case 0x19CDB0u: goto label_19cdb0;
            case 0x19CDB4u: goto label_19cdb4;
            case 0x19CDB8u: goto label_19cdb8;
            case 0x19CDBCu: goto label_19cdbc;
            case 0x19CDC0u: goto label_19cdc0;
            case 0x19CDC4u: goto label_19cdc4;
            case 0x19CDC8u: goto label_19cdc8;
            case 0x19CDCCu: goto label_19cdcc;
            case 0x19CDD0u: goto label_19cdd0;
            case 0x19CDD4u: goto label_19cdd4;
            case 0x19CDD8u: goto label_19cdd8;
            case 0x19CDDCu: goto label_19cddc;
            case 0x19CDE0u: goto label_19cde0;
            case 0x19CDE4u: goto label_19cde4;
            case 0x19CDE8u: goto label_19cde8;
            case 0x19CDECu: goto label_19cdec;
            case 0x19CDF0u: goto label_19cdf0;
            case 0x19CDF4u: goto label_19cdf4;
            case 0x19CDF8u: goto label_19cdf8;
            case 0x19CDFCu: goto label_19cdfc;
            case 0x19CE00u: goto label_19ce00;
            case 0x19CE04u: goto label_19ce04;
            case 0x19CE08u: goto label_19ce08;
            case 0x19CE0Cu: goto label_19ce0c;
            case 0x19CE10u: goto label_19ce10;
            case 0x19CE14u: goto label_19ce14;
            case 0x19CE18u: goto label_19ce18;
            case 0x19CE1Cu: goto label_19ce1c;
            case 0x19CE20u: goto label_19ce20;
            case 0x19CE24u: goto label_19ce24;
            case 0x19CE28u: goto label_19ce28;
            case 0x19CE2Cu: goto label_19ce2c;
            case 0x19CE30u: goto label_19ce30;
            case 0x19CE34u: goto label_19ce34;
            case 0x19CE38u: goto label_19ce38;
            case 0x19CE3Cu: goto label_19ce3c;
            case 0x19CE40u: goto label_19ce40;
            case 0x19CE44u: goto label_19ce44;
            case 0x19CE48u: goto label_19ce48;
            case 0x19CE4Cu: goto label_19ce4c;
            case 0x19CE50u: goto label_19ce50;
            case 0x19CE54u: goto label_19ce54;
            case 0x19CE58u: goto label_19ce58;
            case 0x19CE5Cu: goto label_19ce5c;
            case 0x19CE60u: goto label_19ce60;
            case 0x19CE64u: goto label_19ce64;
            case 0x19CE68u: goto label_19ce68;
            case 0x19CE6Cu: goto label_19ce6c;
            case 0x19CE70u: goto label_19ce70;
            case 0x19CE74u: goto label_19ce74;
            case 0x19CE78u: goto label_19ce78;
            case 0x19CE7Cu: goto label_19ce7c;
            case 0x19CE80u: goto label_19ce80;
            case 0x19CE84u: goto label_19ce84;
            case 0x19CE88u: goto label_19ce88;
            case 0x19CE8Cu: goto label_19ce8c;
            case 0x19CE90u: goto label_19ce90;
            case 0x19CE94u: goto label_19ce94;
            case 0x19CE98u: goto label_19ce98;
            case 0x19CE9Cu: goto label_19ce9c;
            case 0x19CEA0u: goto label_19cea0;
            case 0x19CEA4u: goto label_19cea4;
            case 0x19CEA8u: goto label_19cea8;
            case 0x19CEACu: goto label_19ceac;
            case 0x19CEB0u: goto label_19ceb0;
            case 0x19CEB4u: goto label_19ceb4;
            case 0x19CEB8u: goto label_19ceb8;
            case 0x19CEBCu: goto label_19cebc;
            case 0x19CEC0u: goto label_19cec0;
            case 0x19CEC4u: goto label_19cec4;
            case 0x19CEC8u: goto label_19cec8;
            case 0x19CECCu: goto label_19cecc;
            case 0x19CED0u: goto label_19ced0;
            case 0x19CED4u: goto label_19ced4;
            case 0x19CED8u: goto label_19ced8;
            case 0x19CEDCu: goto label_19cedc;
            case 0x19CEE0u: goto label_19cee0;
            case 0x19CEE4u: goto label_19cee4;
            case 0x19CEE8u: goto label_19cee8;
            case 0x19CEECu: goto label_19ceec;
            case 0x19CEF0u: goto label_19cef0;
            case 0x19CEF4u: goto label_19cef4;
            case 0x19CEF8u: goto label_19cef8;
            case 0x19CEFCu: goto label_19cefc;
            case 0x19CF00u: goto label_19cf00;
            case 0x19CF04u: goto label_19cf04;
            case 0x19CF08u: goto label_19cf08;
            case 0x19CF0Cu: goto label_19cf0c;
            case 0x19CF10u: goto label_19cf10;
            case 0x19CF14u: goto label_19cf14;
            case 0x19CF18u: goto label_19cf18;
            case 0x19CF1Cu: goto label_19cf1c;
            case 0x19CF20u: goto label_19cf20;
            case 0x19CF24u: goto label_19cf24;
            case 0x19CF28u: goto label_19cf28;
            case 0x19CF2Cu: goto label_19cf2c;
            case 0x19CF30u: goto label_19cf30;
            case 0x19CF34u: goto label_19cf34;
            case 0x19CF38u: goto label_19cf38;
            case 0x19CF3Cu: goto label_19cf3c;
            case 0x19CF40u: goto label_19cf40;
            case 0x19CF44u: goto label_19cf44;
            case 0x19CF48u: goto label_19cf48;
            case 0x19CF4Cu: goto label_19cf4c;
            case 0x19CF50u: goto label_19cf50;
            case 0x19CF54u: goto label_19cf54;
            case 0x19CF58u: goto label_19cf58;
            case 0x19CF5Cu: goto label_19cf5c;
            case 0x19CF60u: goto label_19cf60;
            case 0x19CF64u: goto label_19cf64;
            case 0x19CF68u: goto label_19cf68;
            case 0x19CF6Cu: goto label_19cf6c;
            case 0x19CF70u: goto label_19cf70;
            case 0x19CF74u: goto label_19cf74;
            case 0x19CF78u: goto label_19cf78;
            case 0x19CF7Cu: goto label_19cf7c;
            case 0x19CF80u: goto label_19cf80;
            case 0x19CF84u: goto label_19cf84;
            case 0x19CF88u: goto label_19cf88;
            case 0x19CF8Cu: goto label_19cf8c;
            case 0x19CF90u: goto label_19cf90;
            case 0x19CF94u: goto label_19cf94;
            case 0x19CF98u: goto label_19cf98;
            case 0x19CF9Cu: goto label_19cf9c;
            case 0x19CFA0u: goto label_19cfa0;
            case 0x19CFA4u: goto label_19cfa4;
            case 0x19CFA8u: goto label_19cfa8;
            case 0x19CFACu: goto label_19cfac;
            case 0x19CFB0u: goto label_19cfb0;
            case 0x19CFB4u: goto label_19cfb4;
            case 0x19CFB8u: goto label_19cfb8;
            case 0x19CFBCu: goto label_19cfbc;
            case 0x19CFC0u: goto label_19cfc0;
            case 0x19CFC4u: goto label_19cfc4;
            case 0x19CFC8u: goto label_19cfc8;
            case 0x19CFCCu: goto label_19cfcc;
            case 0x19CFD0u: goto label_19cfd0;
            case 0x19CFD4u: goto label_19cfd4;
            case 0x19CFD8u: goto label_19cfd8;
            case 0x19CFDCu: goto label_19cfdc;
            case 0x19CFE0u: goto label_19cfe0;
            case 0x19CFE4u: goto label_19cfe4;
            case 0x19CFE8u: goto label_19cfe8;
            case 0x19CFECu: goto label_19cfec;
            case 0x19CFF0u: goto label_19cff0;
            case 0x19CFF4u: goto label_19cff4;
            case 0x19CFF8u: goto label_19cff8;
            case 0x19CFFCu: goto label_19cffc;
            case 0x19D000u: goto label_19d000;
            case 0x19D004u: goto label_19d004;
            case 0x19D008u: goto label_19d008;
            case 0x19D00Cu: goto label_19d00c;
            case 0x19D010u: goto label_19d010;
            case 0x19D014u: goto label_19d014;
            case 0x19D018u: goto label_19d018;
            case 0x19D01Cu: goto label_19d01c;
            case 0x19D020u: goto label_19d020;
            case 0x19D024u: goto label_19d024;
            case 0x19D028u: goto label_19d028;
            case 0x19D02Cu: goto label_19d02c;
            case 0x19D030u: goto label_19d030;
            case 0x19D034u: goto label_19d034;
            case 0x19D038u: goto label_19d038;
            case 0x19D03Cu: goto label_19d03c;
            case 0x19D040u: goto label_19d040;
            case 0x19D044u: goto label_19d044;
            case 0x19D048u: goto label_19d048;
            case 0x19D04Cu: goto label_19d04c;
            case 0x19D050u: goto label_19d050;
            case 0x19D054u: goto label_19d054;
            case 0x19D058u: goto label_19d058;
            case 0x19D05Cu: goto label_19d05c;
            case 0x19D060u: goto label_19d060;
            case 0x19D064u: goto label_19d064;
            case 0x19D068u: goto label_19d068;
            case 0x19D06Cu: goto label_19d06c;
            case 0x19D070u: goto label_19d070;
            case 0x19D074u: goto label_19d074;
            case 0x19D078u: goto label_19d078;
            case 0x19D07Cu: goto label_19d07c;
            case 0x19D080u: goto label_19d080;
            case 0x19D084u: goto label_19d084;
            case 0x19D088u: goto label_19d088;
            case 0x19D08Cu: goto label_19d08c;
            case 0x19D090u: goto label_19d090;
            case 0x19D094u: goto label_19d094;
            case 0x19D098u: goto label_19d098;
            case 0x19D09Cu: goto label_19d09c;
            case 0x19D0A0u: goto label_19d0a0;
            case 0x19D0A4u: goto label_19d0a4;
            case 0x19D0A8u: goto label_19d0a8;
            case 0x19D0ACu: goto label_19d0ac;
            case 0x19D0B0u: goto label_19d0b0;
            case 0x19D0B4u: goto label_19d0b4;
            case 0x19D0B8u: goto label_19d0b8;
            case 0x19D0BCu: goto label_19d0bc;
            case 0x19D0C0u: goto label_19d0c0;
            case 0x19D0C4u: goto label_19d0c4;
            case 0x19D0C8u: goto label_19d0c8;
            case 0x19D0CCu: goto label_19d0cc;
            case 0x19D0D0u: goto label_19d0d0;
            case 0x19D0D4u: goto label_19d0d4;
            case 0x19D0D8u: goto label_19d0d8;
            case 0x19D0DCu: goto label_19d0dc;
            case 0x19D0E0u: goto label_19d0e0;
            case 0x19D0E4u: goto label_19d0e4;
            case 0x19D0E8u: goto label_19d0e8;
            case 0x19D0ECu: goto label_19d0ec;
            case 0x19D0F0u: goto label_19d0f0;
            case 0x19D0F4u: goto label_19d0f4;
            case 0x19D0F8u: goto label_19d0f8;
            case 0x19D0FCu: goto label_19d0fc;
            case 0x19D100u: goto label_19d100;
            case 0x19D104u: goto label_19d104;
            case 0x19D108u: goto label_19d108;
            case 0x19D10Cu: goto label_19d10c;
            case 0x19D110u: goto label_19d110;
            case 0x19D114u: goto label_19d114;
            case 0x19D118u: goto label_19d118;
            case 0x19D11Cu: goto label_19d11c;
            case 0x19D120u: goto label_19d120;
            case 0x19D124u: goto label_19d124;
            case 0x19D128u: goto label_19d128;
            case 0x19D12Cu: goto label_19d12c;
            case 0x19D130u: goto label_19d130;
            case 0x19D134u: goto label_19d134;
            case 0x19D138u: goto label_19d138;
            case 0x19D13Cu: goto label_19d13c;
            case 0x19D140u: goto label_19d140;
            case 0x19D144u: goto label_19d144;
            case 0x19D148u: goto label_19d148;
            case 0x19D14Cu: goto label_19d14c;
            case 0x19D150u: goto label_19d150;
            case 0x19D154u: goto label_19d154;
            case 0x19D158u: goto label_19d158;
            case 0x19D15Cu: goto label_19d15c;
            case 0x19D160u: goto label_19d160;
            case 0x19D164u: goto label_19d164;
            case 0x19D168u: goto label_19d168;
            case 0x19D16Cu: goto label_19d16c;
            case 0x19D170u: goto label_19d170;
            case 0x19D174u: goto label_19d174;
            case 0x19D178u: goto label_19d178;
            case 0x19D17Cu: goto label_19d17c;
            case 0x19D180u: goto label_19d180;
            case 0x19D184u: goto label_19d184;
            case 0x19D188u: goto label_19d188;
            case 0x19D18Cu: goto label_19d18c;
            case 0x19D190u: goto label_19d190;
            case 0x19D194u: goto label_19d194;
            case 0x19D198u: goto label_19d198;
            case 0x19D19Cu: goto label_19d19c;
            case 0x19D1A0u: goto label_19d1a0;
            case 0x19D1A4u: goto label_19d1a4;
            case 0x19D1A8u: goto label_19d1a8;
            case 0x19D1ACu: goto label_19d1ac;
            case 0x19D1B0u: goto label_19d1b0;
            case 0x19D1B4u: goto label_19d1b4;
            case 0x19D1B8u: goto label_19d1b8;
            case 0x19D1BCu: goto label_19d1bc;
            case 0x19D1C0u: goto label_19d1c0;
            case 0x19D1C4u: goto label_19d1c4;
            case 0x19D1C8u: goto label_19d1c8;
            case 0x19D1CCu: goto label_19d1cc;
            case 0x19D1D0u: goto label_19d1d0;
            case 0x19D1D4u: goto label_19d1d4;
            case 0x19D1D8u: goto label_19d1d8;
            case 0x19D1DCu: goto label_19d1dc;
            case 0x19D1E0u: goto label_19d1e0;
            case 0x19D1E4u: goto label_19d1e4;
            case 0x19D1E8u: goto label_19d1e8;
            case 0x19D1ECu: goto label_19d1ec;
            case 0x19D1F0u: goto label_19d1f0;
            case 0x19D1F4u: goto label_19d1f4;
            case 0x19D1F8u: goto label_19d1f8;
            case 0x19D1FCu: goto label_19d1fc;
            case 0x19D200u: goto label_19d200;
            case 0x19D204u: goto label_19d204;
            case 0x19D208u: goto label_19d208;
            case 0x19D20Cu: goto label_19d20c;
            case 0x19D210u: goto label_19d210;
            case 0x19D214u: goto label_19d214;
            case 0x19D218u: goto label_19d218;
            case 0x19D21Cu: goto label_19d21c;
            case 0x19D220u: goto label_19d220;
            case 0x19D224u: goto label_19d224;
            case 0x19D228u: goto label_19d228;
            case 0x19D22Cu: goto label_19d22c;
            case 0x19D230u: goto label_19d230;
            case 0x19D234u: goto label_19d234;
            case 0x19D238u: goto label_19d238;
            case 0x19D23Cu: goto label_19d23c;
            case 0x19D240u: goto label_19d240;
            case 0x19D244u: goto label_19d244;
            case 0x19D248u: goto label_19d248;
            case 0x19D24Cu: goto label_19d24c;
            case 0x19D250u: goto label_19d250;
            case 0x19D254u: goto label_19d254;
            case 0x19D258u: goto label_19d258;
            case 0x19D25Cu: goto label_19d25c;
            case 0x19D260u: goto label_19d260;
            case 0x19D264u: goto label_19d264;
            case 0x19D268u: goto label_19d268;
            case 0x19D26Cu: goto label_19d26c;
            case 0x19D270u: goto label_19d270;
            case 0x19D274u: goto label_19d274;
            case 0x19D278u: goto label_19d278;
            case 0x19D27Cu: goto label_19d27c;
            case 0x19D280u: goto label_19d280;
            case 0x19D284u: goto label_19d284;
            case 0x19D288u: goto label_19d288;
            case 0x19D28Cu: goto label_19d28c;
            case 0x19D290u: goto label_19d290;
            case 0x19D294u: goto label_19d294;
            case 0x19D298u: goto label_19d298;
            case 0x19D29Cu: goto label_19d29c;
            case 0x19D2A0u: goto label_19d2a0;
            case 0x19D2A4u: goto label_19d2a4;
            case 0x19D2A8u: goto label_19d2a8;
            case 0x19D2ACu: goto label_19d2ac;
            case 0x19D2B0u: goto label_19d2b0;
            case 0x19D2B4u: goto label_19d2b4;
            case 0x19D2B8u: goto label_19d2b8;
            case 0x19D2BCu: goto label_19d2bc;
            case 0x19D2C0u: goto label_19d2c0;
            case 0x19D2C4u: goto label_19d2c4;
            case 0x19D2C8u: goto label_19d2c8;
            case 0x19D2CCu: goto label_19d2cc;
            case 0x19D2D0u: goto label_19d2d0;
            case 0x19D2D4u: goto label_19d2d4;
            case 0x19D2D8u: goto label_19d2d8;
            case 0x19D2DCu: goto label_19d2dc;
            case 0x19D2E0u: goto label_19d2e0;
            case 0x19D2E4u: goto label_19d2e4;
            case 0x19D2E8u: goto label_19d2e8;
            case 0x19D2ECu: goto label_19d2ec;
            case 0x19D2F0u: goto label_19d2f0;
            case 0x19D2F4u: goto label_19d2f4;
            case 0x19D2F8u: goto label_19d2f8;
            case 0x19D2FCu: goto label_19d2fc;
            case 0x19D300u: goto label_19d300;
            case 0x19D304u: goto label_19d304;
            case 0x19D308u: goto label_19d308;
            case 0x19D30Cu: goto label_19d30c;
            case 0x19D310u: goto label_19d310;
            case 0x19D314u: goto label_19d314;
            case 0x19D318u: goto label_19d318;
            case 0x19D31Cu: goto label_19d31c;
            case 0x19D320u: goto label_19d320;
            case 0x19D324u: goto label_19d324;
            case 0x19D328u: goto label_19d328;
            case 0x19D32Cu: goto label_19d32c;
            case 0x19D330u: goto label_19d330;
            case 0x19D334u: goto label_19d334;
            case 0x19D338u: goto label_19d338;
            case 0x19D33Cu: goto label_19d33c;
            case 0x19D340u: goto label_19d340;
            case 0x19D344u: goto label_19d344;
            case 0x19D348u: goto label_19d348;
            case 0x19D34Cu: goto label_19d34c;
            case 0x19D350u: goto label_19d350;
            case 0x19D354u: goto label_19d354;
            case 0x19D358u: goto label_19d358;
            case 0x19D35Cu: goto label_19d35c;
            case 0x19D360u: goto label_19d360;
            case 0x19D364u: goto label_19d364;
            case 0x19D368u: goto label_19d368;
            case 0x19D36Cu: goto label_19d36c;
            case 0x19D370u: goto label_19d370;
            case 0x19D374u: goto label_19d374;
            case 0x19D378u: goto label_19d378;
            case 0x19D37Cu: goto label_19d37c;
            case 0x19D380u: goto label_19d380;
            case 0x19D384u: goto label_19d384;
            case 0x19D388u: goto label_19d388;
            case 0x19D38Cu: goto label_19d38c;
            case 0x19D390u: goto label_19d390;
            case 0x19D394u: goto label_19d394;
            case 0x19D398u: goto label_19d398;
            case 0x19D39Cu: goto label_19d39c;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D3A4u: goto label_19d3a4;
            case 0x19D3A8u: goto label_19d3a8;
            case 0x19D3ACu: goto label_19d3ac;
            case 0x19D3B0u: goto label_19d3b0;
            case 0x19D3B4u: goto label_19d3b4;
            case 0x19D3B8u: goto label_19d3b8;
            case 0x19D3BCu: goto label_19d3bc;
            case 0x19D3C0u: goto label_19d3c0;
            case 0x19D3C4u: goto label_19d3c4;
            case 0x19D3C8u: goto label_19d3c8;
            case 0x19D3CCu: goto label_19d3cc;
            case 0x19D3D0u: goto label_19d3d0;
            case 0x19D3D4u: goto label_19d3d4;
            case 0x19D3D8u: goto label_19d3d8;
            case 0x19D3DCu: goto label_19d3dc;
            case 0x19D3E0u: goto label_19d3e0;
            case 0x19D3E4u: goto label_19d3e4;
            case 0x19D3E8u: goto label_19d3e8;
            case 0x19D3ECu: goto label_19d3ec;
            case 0x19D3F0u: goto label_19d3f0;
            case 0x19D3F4u: goto label_19d3f4;
            case 0x19D3F8u: goto label_19d3f8;
            case 0x19D3FCu: goto label_19d3fc;
            case 0x19D400u: goto label_19d400;
            case 0x19D404u: goto label_19d404;
            case 0x19D408u: goto label_19d408;
            case 0x19D40Cu: goto label_19d40c;
            case 0x19D410u: goto label_19d410;
            case 0x19D414u: goto label_19d414;
            case 0x19D418u: goto label_19d418;
            case 0x19D41Cu: goto label_19d41c;
            case 0x19D420u: goto label_19d420;
            case 0x19D424u: goto label_19d424;
            case 0x19D428u: goto label_19d428;
            case 0x19D42Cu: goto label_19d42c;
            case 0x19D430u: goto label_19d430;
            case 0x19D434u: goto label_19d434;
            case 0x19D438u: goto label_19d438;
            case 0x19D43Cu: goto label_19d43c;
            case 0x19D440u: goto label_19d440;
            case 0x19D444u: goto label_19d444;
            case 0x19D448u: goto label_19d448;
            case 0x19D44Cu: goto label_19d44c;
            case 0x19D450u: goto label_19d450;
            case 0x19D454u: goto label_19d454;
            case 0x19D458u: goto label_19d458;
            case 0x19D45Cu: goto label_19d45c;
            case 0x19D460u: goto label_19d460;
            case 0x19D464u: goto label_19d464;
            case 0x19D468u: goto label_19d468;
            case 0x19D46Cu: goto label_19d46c;
            case 0x19D470u: goto label_19d470;
            case 0x19D474u: goto label_19d474;
            case 0x19D478u: goto label_19d478;
            case 0x19D47Cu: goto label_19d47c;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D488u: goto label_19d488;
            case 0x19D48Cu: goto label_19d48c;
            case 0x19D490u: goto label_19d490;
            case 0x19D494u: goto label_19d494;
            case 0x19D498u: goto label_19d498;
            case 0x19D49Cu: goto label_19d49c;
            case 0x19D4A0u: goto label_19d4a0;
            case 0x19D4A4u: goto label_19d4a4;
            case 0x19D4A8u: goto label_19d4a8;
            case 0x19D4ACu: goto label_19d4ac;
            case 0x19D4B0u: goto label_19d4b0;
            case 0x19D4B4u: goto label_19d4b4;
            case 0x19D4B8u: goto label_19d4b8;
            case 0x19D4BCu: goto label_19d4bc;
            case 0x19D4C0u: goto label_19d4c0;
            case 0x19D4C4u: goto label_19d4c4;
            case 0x19D4C8u: goto label_19d4c8;
            case 0x19D4CCu: goto label_19d4cc;
            case 0x19D4D0u: goto label_19d4d0;
            case 0x19D4D4u: goto label_19d4d4;
            case 0x19D4D8u: goto label_19d4d8;
            case 0x19D4DCu: goto label_19d4dc;
            case 0x19D4E0u: goto label_19d4e0;
            case 0x19D4E4u: goto label_19d4e4;
            case 0x19D4E8u: goto label_19d4e8;
            case 0x19D4ECu: goto label_19d4ec;
            case 0x19D4F0u: goto label_19d4f0;
            case 0x19D4F4u: goto label_19d4f4;
            case 0x19D4F8u: goto label_19d4f8;
            case 0x19D4FCu: goto label_19d4fc;
            case 0x19D500u: goto label_19d500;
            case 0x19D504u: goto label_19d504;
            case 0x19D508u: goto label_19d508;
            case 0x19D50Cu: goto label_19d50c;
            case 0x19D510u: goto label_19d510;
            case 0x19D514u: goto label_19d514;
            case 0x19D518u: goto label_19d518;
            case 0x19D51Cu: goto label_19d51c;
            case 0x19D520u: goto label_19d520;
            case 0x19D524u: goto label_19d524;
            case 0x19D528u: goto label_19d528;
            case 0x19D52Cu: goto label_19d52c;
            case 0x19D530u: goto label_19d530;
            case 0x19D534u: goto label_19d534;
            case 0x19D538u: goto label_19d538;
            case 0x19D53Cu: goto label_19d53c;
            case 0x19D540u: goto label_19d540;
            case 0x19D544u: goto label_19d544;
            case 0x19D548u: goto label_19d548;
            case 0x19D54Cu: goto label_19d54c;
            case 0x19D550u: goto label_19d550;
            case 0x19D554u: goto label_19d554;
            case 0x19D558u: goto label_19d558;
            case 0x19D55Cu: goto label_19d55c;
            case 0x19D560u: goto label_19d560;
            case 0x19D564u: goto label_19d564;
            case 0x19D568u: goto label_19d568;
            case 0x19D56Cu: goto label_19d56c;
            case 0x19D570u: goto label_19d570;
            case 0x19D574u: goto label_19d574;
            case 0x19D578u: goto label_19d578;
            case 0x19D57Cu: goto label_19d57c;
            case 0x19D580u: goto label_19d580;
            case 0x19D584u: goto label_19d584;
            case 0x19D588u: goto label_19d588;
            case 0x19D58Cu: goto label_19d58c;
            case 0x19D590u: goto label_19d590;
            case 0x19D594u: goto label_19d594;
            case 0x19D598u: goto label_19d598;
            case 0x19D59Cu: goto label_19d59c;
            case 0x19D5A0u: goto label_19d5a0;
            case 0x19D5A4u: goto label_19d5a4;
            case 0x19D5A8u: goto label_19d5a8;
            case 0x19D5ACu: goto label_19d5ac;
            case 0x19D5B0u: goto label_19d5b0;
            case 0x19D5B4u: goto label_19d5b4;
            case 0x19D5B8u: goto label_19d5b8;
            case 0x19D5BCu: goto label_19d5bc;
            case 0x19D5C0u: goto label_19d5c0;
            case 0x19D5C4u: goto label_19d5c4;
            case 0x19D5C8u: goto label_19d5c8;
            case 0x19D5CCu: goto label_19d5cc;
            case 0x19D5D0u: goto label_19d5d0;
            case 0x19D5D4u: goto label_19d5d4;
            case 0x19D5D8u: goto label_19d5d8;
            case 0x19D5DCu: goto label_19d5dc;
            case 0x19D5E0u: goto label_19d5e0;
            case 0x19D5E4u: goto label_19d5e4;
            case 0x19D5E8u: goto label_19d5e8;
            case 0x19D5ECu: goto label_19d5ec;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D5F4u: goto label_19d5f4;
            case 0x19D5F8u: goto label_19d5f8;
            case 0x19D5FCu: goto label_19d5fc;
            case 0x19D600u: goto label_19d600;
            case 0x19D604u: goto label_19d604;
            case 0x19D608u: goto label_19d608;
            case 0x19D60Cu: goto label_19d60c;
            case 0x19D610u: goto label_19d610;
            case 0x19D614u: goto label_19d614;
            case 0x19D618u: goto label_19d618;
            case 0x19D61Cu: goto label_19d61c;
            case 0x19D620u: goto label_19d620;
            case 0x19D624u: goto label_19d624;
            case 0x19D628u: goto label_19d628;
            case 0x19D62Cu: goto label_19d62c;
            case 0x19D630u: goto label_19d630;
            case 0x19D634u: goto label_19d634;
            case 0x19D638u: goto label_19d638;
            case 0x19D63Cu: goto label_19d63c;
            case 0x19D640u: goto label_19d640;
            case 0x19D644u: goto label_19d644;
            case 0x19D648u: goto label_19d648;
            case 0x19D64Cu: goto label_19d64c;
            case 0x19D650u: goto label_19d650;
            case 0x19D654u: goto label_19d654;
            case 0x19D658u: goto label_19d658;
            case 0x19D65Cu: goto label_19d65c;
            case 0x19D660u: goto label_19d660;
            case 0x19D664u: goto label_19d664;
            case 0x19D668u: goto label_19d668;
            case 0x19D66Cu: goto label_19d66c;
            case 0x19D670u: goto label_19d670;
            case 0x19D674u: goto label_19d674;
            case 0x19D678u: goto label_19d678;
            case 0x19D67Cu: goto label_19d67c;
            case 0x19D680u: goto label_19d680;
            case 0x19D684u: goto label_19d684;
            case 0x19D688u: goto label_19d688;
            case 0x19D68Cu: goto label_19d68c;
            case 0x19D690u: goto label_19d690;
            case 0x19D694u: goto label_19d694;
            case 0x19D698u: goto label_19d698;
            case 0x19D69Cu: goto label_19d69c;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6A4u: goto label_19d6a4;
            case 0x19D6A8u: goto label_19d6a8;
            case 0x19D6ACu: goto label_19d6ac;
            case 0x19D6B0u: goto label_19d6b0;
            case 0x19D6B4u: goto label_19d6b4;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C0u: goto label_19d6c0;
            case 0x19D6C4u: goto label_19d6c4;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6CCu: goto label_19d6cc;
            case 0x19D6D0u: goto label_19d6d0;
            case 0x19D6D4u: goto label_19d6d4;
            case 0x19D6D8u: goto label_19d6d8;
            case 0x19D6DCu: goto label_19d6dc;
            case 0x19D6E0u: goto label_19d6e0;
            case 0x19D6E4u: goto label_19d6e4;
            case 0x19D6E8u: goto label_19d6e8;
            case 0x19D6ECu: goto label_19d6ec;
            case 0x19D6F0u: goto label_19d6f0;
            case 0x19D6F4u: goto label_19d6f4;
            case 0x19D6F8u: goto label_19d6f8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D700u: goto label_19d700;
            case 0x19D704u: goto label_19d704;
            case 0x19D708u: goto label_19d708;
            case 0x19D70Cu: goto label_19d70c;
            case 0x19D710u: goto label_19d710;
            case 0x19D714u: goto label_19d714;
            case 0x19D718u: goto label_19d718;
            case 0x19D71Cu: goto label_19d71c;
            case 0x19D720u: goto label_19d720;
            case 0x19D724u: goto label_19d724;
            case 0x19D728u: goto label_19d728;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D730u: goto label_19d730;
            case 0x19D734u: goto label_19d734;
            case 0x19D738u: goto label_19d738;
            case 0x19D73Cu: goto label_19d73c;
            case 0x19D740u: goto label_19d740;
            case 0x19D744u: goto label_19d744;
            case 0x19D748u: goto label_19d748;
            case 0x19D74Cu: goto label_19d74c;
            case 0x19D750u: goto label_19d750;
            case 0x19D754u: goto label_19d754;
            case 0x19D758u: goto label_19d758;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D760u: goto label_19d760;
            case 0x19D764u: goto label_19d764;
            case 0x19D768u: goto label_19d768;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D770u: goto label_19d770;
            case 0x19D774u: goto label_19d774;
            case 0x19D778u: goto label_19d778;
            case 0x19D77Cu: goto label_19d77c;
            case 0x19D780u: goto label_19d780;
            case 0x19D784u: goto label_19d784;
            case 0x19D788u: goto label_19d788;
            case 0x19D78Cu: goto label_19d78c;
            case 0x19D790u: goto label_19d790;
            case 0x19D794u: goto label_19d794;
            case 0x19D798u: goto label_19d798;
            case 0x19D79Cu: goto label_19d79c;
            case 0x19D7A0u: goto label_19d7a0;
            case 0x19D7A4u: goto label_19d7a4;
            case 0x19D7A8u: goto label_19d7a8;
            case 0x19D7ACu: goto label_19d7ac;
            case 0x19D7B0u: goto label_19d7b0;
            case 0x19D7B4u: goto label_19d7b4;
            case 0x19D7B8u: goto label_19d7b8;
            case 0x19D7BCu: goto label_19d7bc;
            case 0x19D7C0u: goto label_19d7c0;
            case 0x19D7C4u: goto label_19d7c4;
            case 0x19D7C8u: goto label_19d7c8;
            case 0x19D7CCu: goto label_19d7cc;
            case 0x19D7D0u: goto label_19d7d0;
            case 0x19D7D4u: goto label_19d7d4;
            case 0x19D7D8u: goto label_19d7d8;
            case 0x19D7DCu: goto label_19d7dc;
            case 0x19D7E0u: goto label_19d7e0;
            case 0x19D7E4u: goto label_19d7e4;
            case 0x19D7E8u: goto label_19d7e8;
            case 0x19D7ECu: goto label_19d7ec;
            case 0x19D7F0u: goto label_19d7f0;
            case 0x19D7F4u: goto label_19d7f4;
            case 0x19D7F8u: goto label_19d7f8;
            case 0x19D7FCu: goto label_19d7fc;
            case 0x19D800u: goto label_19d800;
            case 0x19D804u: goto label_19d804;
            case 0x19D808u: goto label_19d808;
            case 0x19D80Cu: goto label_19d80c;
            case 0x19D810u: goto label_19d810;
            case 0x19D814u: goto label_19d814;
            case 0x19D818u: goto label_19d818;
            case 0x19D81Cu: goto label_19d81c;
            case 0x19D820u: goto label_19d820;
            case 0x19D824u: goto label_19d824;
            case 0x19D828u: goto label_19d828;
            case 0x19D82Cu: goto label_19d82c;
            case 0x19D830u: goto label_19d830;
            case 0x19D834u: goto label_19d834;
            case 0x19D838u: goto label_19d838;
            case 0x19D83Cu: goto label_19d83c;
            case 0x19D840u: goto label_19d840;
            case 0x19D844u: goto label_19d844;
            case 0x19D848u: goto label_19d848;
            case 0x19D84Cu: goto label_19d84c;
            case 0x19D850u: goto label_19d850;
            case 0x19D854u: goto label_19d854;
            case 0x19D858u: goto label_19d858;
            case 0x19D85Cu: goto label_19d85c;
            case 0x19D860u: goto label_19d860;
            case 0x19D864u: goto label_19d864;
            case 0x19D868u: goto label_19d868;
            case 0x19D86Cu: goto label_19d86c;
            case 0x19D870u: goto label_19d870;
            case 0x19D874u: goto label_19d874;
            case 0x19D878u: goto label_19d878;
            case 0x19D87Cu: goto label_19d87c;
            case 0x19D880u: goto label_19d880;
            case 0x19D884u: goto label_19d884;
            case 0x19D888u: goto label_19d888;
            case 0x19D88Cu: goto label_19d88c;
            case 0x19D890u: goto label_19d890;
            case 0x19D894u: goto label_19d894;
            case 0x19D898u: goto label_19d898;
            case 0x19D89Cu: goto label_19d89c;
            case 0x19D8A0u: goto label_19d8a0;
            case 0x19D8A4u: goto label_19d8a4;
            case 0x19D8A8u: goto label_19d8a8;
            case 0x19D8ACu: goto label_19d8ac;
            case 0x19D8B0u: goto label_19d8b0;
            case 0x19D8B4u: goto label_19d8b4;
            case 0x19D8B8u: goto label_19d8b8;
            case 0x19D8BCu: goto label_19d8bc;
            case 0x19D8C0u: goto label_19d8c0;
            case 0x19D8C4u: goto label_19d8c4;
            case 0x19D8C8u: goto label_19d8c8;
            case 0x19D8CCu: goto label_19d8cc;
            case 0x19D8D0u: goto label_19d8d0;
            case 0x19D8D4u: goto label_19d8d4;
            case 0x19D8D8u: goto label_19d8d8;
            case 0x19D8DCu: goto label_19d8dc;
            case 0x19D8E0u: goto label_19d8e0;
            case 0x19D8E4u: goto label_19d8e4;
            case 0x19D8E8u: goto label_19d8e8;
            case 0x19D8ECu: goto label_19d8ec;
            case 0x19D8F0u: goto label_19d8f0;
            case 0x19D8F4u: goto label_19d8f4;
            case 0x19D8F8u: goto label_19d8f8;
            case 0x19D8FCu: goto label_19d8fc;
            case 0x19D900u: goto label_19d900;
            case 0x19D904u: goto label_19d904;
            case 0x19D908u: goto label_19d908;
            case 0x19D90Cu: goto label_19d90c;
            case 0x19D910u: goto label_19d910;
            case 0x19D914u: goto label_19d914;
            case 0x19D918u: goto label_19d918;
            case 0x19D91Cu: goto label_19d91c;
            case 0x19D920u: goto label_19d920;
            case 0x19D924u: goto label_19d924;
            case 0x19D928u: goto label_19d928;
            case 0x19D92Cu: goto label_19d92c;
            case 0x19D930u: goto label_19d930;
            case 0x19D934u: goto label_19d934;
            case 0x19D938u: goto label_19d938;
            case 0x19D93Cu: goto label_19d93c;
            case 0x19D940u: goto label_19d940;
            case 0x19D944u: goto label_19d944;
            case 0x19D948u: goto label_19d948;
            case 0x19D94Cu: goto label_19d94c;
            case 0x19D950u: goto label_19d950;
            case 0x19D954u: goto label_19d954;
            case 0x19D958u: goto label_19d958;
            case 0x19D95Cu: goto label_19d95c;
            case 0x19D960u: goto label_19d960;
            case 0x19D964u: goto label_19d964;
            case 0x19D968u: goto label_19d968;
            case 0x19D96Cu: goto label_19d96c;
            case 0x19D970u: goto label_19d970;
            case 0x19D974u: goto label_19d974;
            case 0x19D978u: goto label_19d978;
            case 0x19D97Cu: goto label_19d97c;
            case 0x19D980u: goto label_19d980;
            case 0x19D984u: goto label_19d984;
            case 0x19D988u: goto label_19d988;
            case 0x19D98Cu: goto label_19d98c;
            case 0x19D990u: goto label_19d990;
            case 0x19D994u: goto label_19d994;
            case 0x19D998u: goto label_19d998;
            case 0x19D99Cu: goto label_19d99c;
            case 0x19D9A0u: goto label_19d9a0;
            case 0x19D9A4u: goto label_19d9a4;
            case 0x19D9A8u: goto label_19d9a8;
            case 0x19D9ACu: goto label_19d9ac;
            case 0x19D9B0u: goto label_19d9b0;
            case 0x19D9B4u: goto label_19d9b4;
            case 0x19D9B8u: goto label_19d9b8;
            case 0x19D9BCu: goto label_19d9bc;
            case 0x19D9C0u: goto label_19d9c0;
            case 0x19D9C4u: goto label_19d9c4;
            case 0x19D9C8u: goto label_19d9c8;
            case 0x19D9CCu: goto label_19d9cc;
            case 0x19D9D0u: goto label_19d9d0;
            case 0x19D9D4u: goto label_19d9d4;
            case 0x19D9D8u: goto label_19d9d8;
            case 0x19D9DCu: goto label_19d9dc;
            case 0x19D9E0u: goto label_19d9e0;
            case 0x19D9E4u: goto label_19d9e4;
            case 0x19D9E8u: goto label_19d9e8;
            case 0x19D9ECu: goto label_19d9ec;
            case 0x19D9F0u: goto label_19d9f0;
            case 0x19D9F4u: goto label_19d9f4;
            case 0x19D9F8u: goto label_19d9f8;
            case 0x19D9FCu: goto label_19d9fc;
            case 0x19DA00u: goto label_19da00;
            case 0x19DA04u: goto label_19da04;
            case 0x19DA08u: goto label_19da08;
            case 0x19DA0Cu: goto label_19da0c;
            case 0x19DA10u: goto label_19da10;
            case 0x19DA14u: goto label_19da14;
            case 0x19DA18u: goto label_19da18;
            case 0x19DA1Cu: goto label_19da1c;
            case 0x19DA20u: goto label_19da20;
            case 0x19DA24u: goto label_19da24;
            case 0x19DA28u: goto label_19da28;
            case 0x19DA2Cu: goto label_19da2c;
            case 0x19DA30u: goto label_19da30;
            case 0x19DA34u: goto label_19da34;
            case 0x19DA38u: goto label_19da38;
            case 0x19DA3Cu: goto label_19da3c;
            case 0x19DA40u: goto label_19da40;
            case 0x19DA44u: goto label_19da44;
            case 0x19DA48u: goto label_19da48;
            case 0x19DA4Cu: goto label_19da4c;
            case 0x19DA50u: goto label_19da50;
            case 0x19DA54u: goto label_19da54;
            case 0x19DA58u: goto label_19da58;
            case 0x19DA5Cu: goto label_19da5c;
            case 0x19DA60u: goto label_19da60;
            case 0x19DA64u: goto label_19da64;
            case 0x19DA68u: goto label_19da68;
            case 0x19DA6Cu: goto label_19da6c;
            case 0x19DA70u: goto label_19da70;
            case 0x19DA74u: goto label_19da74;
            case 0x19DA78u: goto label_19da78;
            case 0x19DA7Cu: goto label_19da7c;
            case 0x19DA80u: goto label_19da80;
            case 0x19DA84u: goto label_19da84;
            case 0x19DA88u: goto label_19da88;
            case 0x19DA8Cu: goto label_19da8c;
            case 0x19DA90u: goto label_19da90;
            case 0x19DA94u: goto label_19da94;
            case 0x19DA98u: goto label_19da98;
            case 0x19DA9Cu: goto label_19da9c;
            case 0x19DAA0u: goto label_19daa0;
            case 0x19DAA4u: goto label_19daa4;
            case 0x19DAA8u: goto label_19daa8;
            case 0x19DAACu: goto label_19daac;
            case 0x19DAB0u: goto label_19dab0;
            case 0x19DAB4u: goto label_19dab4;
            case 0x19DAB8u: goto label_19dab8;
            case 0x19DABCu: goto label_19dabc;
            case 0x19DAC0u: goto label_19dac0;
            case 0x19DAC4u: goto label_19dac4;
            case 0x19DAC8u: goto label_19dac8;
            case 0x19DACCu: goto label_19dacc;
            case 0x19DAD0u: goto label_19dad0;
            case 0x19DAD4u: goto label_19dad4;
            case 0x19DAD8u: goto label_19dad8;
            case 0x19DADCu: goto label_19dadc;
            case 0x19DAE0u: goto label_19dae0;
            case 0x19DAE4u: goto label_19dae4;
            case 0x19DAE8u: goto label_19dae8;
            case 0x19DAECu: goto label_19daec;
            case 0x19DAF0u: goto label_19daf0;
            case 0x19DAF4u: goto label_19daf4;
            case 0x19DAF8u: goto label_19daf8;
            case 0x19DAFCu: goto label_19dafc;
            case 0x19DB00u: goto label_19db00;
            case 0x19DB04u: goto label_19db04;
            case 0x19DB08u: goto label_19db08;
            case 0x19DB0Cu: goto label_19db0c;
            case 0x19DB10u: goto label_19db10;
            case 0x19DB14u: goto label_19db14;
            case 0x19DB18u: goto label_19db18;
            case 0x19DB1Cu: goto label_19db1c;
            case 0x19DB20u: goto label_19db20;
            case 0x19DB24u: goto label_19db24;
            case 0x19DB28u: goto label_19db28;
            case 0x19DB2Cu: goto label_19db2c;
            case 0x19DB30u: goto label_19db30;
            case 0x19DB34u: goto label_19db34;
            case 0x19DB38u: goto label_19db38;
            case 0x19DB3Cu: goto label_19db3c;
            case 0x19DB40u: goto label_19db40;
            case 0x19DB44u: goto label_19db44;
            case 0x19DB48u: goto label_19db48;
            case 0x19DB4Cu: goto label_19db4c;
            case 0x19DB50u: goto label_19db50;
            case 0x19DB54u: goto label_19db54;
            case 0x19DB58u: goto label_19db58;
            case 0x19DB5Cu: goto label_19db5c;
            case 0x19DB60u: goto label_19db60;
            case 0x19DB64u: goto label_19db64;
            case 0x19DB68u: goto label_19db68;
            case 0x19DB6Cu: goto label_19db6c;
            case 0x19DB70u: goto label_19db70;
            case 0x19DB74u: goto label_19db74;
            case 0x19DB78u: goto label_19db78;
            case 0x19DB7Cu: goto label_19db7c;
            case 0x19DB80u: goto label_19db80;
            case 0x19DB84u: goto label_19db84;
            case 0x19DB88u: goto label_19db88;
            case 0x19DB8Cu: goto label_19db8c;
            case 0x19DB90u: goto label_19db90;
            case 0x19DB94u: goto label_19db94;
            case 0x19DB98u: goto label_19db98;
            case 0x19DB9Cu: goto label_19db9c;
            case 0x19DBA0u: goto label_19dba0;
            case 0x19DBA4u: goto label_19dba4;
            case 0x19DBA8u: goto label_19dba8;
            case 0x19DBACu: goto label_19dbac;
            case 0x19DBB0u: goto label_19dbb0;
            case 0x19DBB4u: goto label_19dbb4;
            case 0x19DBB8u: goto label_19dbb8;
            case 0x19DBBCu: goto label_19dbbc;
            case 0x19DBC0u: goto label_19dbc0;
            case 0x19DBC4u: goto label_19dbc4;
            case 0x19DBC8u: goto label_19dbc8;
            case 0x19DBCCu: goto label_19dbcc;
            case 0x19DBD0u: goto label_19dbd0;
            case 0x19DBD4u: goto label_19dbd4;
            case 0x19DBD8u: goto label_19dbd8;
            case 0x19DBDCu: goto label_19dbdc;
            case 0x19DBE0u: goto label_19dbe0;
            case 0x19DBE4u: goto label_19dbe4;
            case 0x19DBE8u: goto label_19dbe8;
            case 0x19DBECu: goto label_19dbec;
            case 0x19DBF0u: goto label_19dbf0;
            case 0x19DBF4u: goto label_19dbf4;
            case 0x19DBF8u: goto label_19dbf8;
            case 0x19DBFCu: goto label_19dbfc;
            case 0x19DC00u: goto label_19dc00;
            case 0x19DC04u: goto label_19dc04;
            case 0x19DC08u: goto label_19dc08;
            case 0x19DC0Cu: goto label_19dc0c;
            case 0x19DC10u: goto label_19dc10;
            case 0x19DC14u: goto label_19dc14;
            case 0x19DC18u: goto label_19dc18;
            case 0x19DC1Cu: goto label_19dc1c;
            case 0x19DC20u: goto label_19dc20;
            case 0x19DC24u: goto label_19dc24;
            case 0x19DC28u: goto label_19dc28;
            case 0x19DC2Cu: goto label_19dc2c;
            case 0x19DC30u: goto label_19dc30;
            case 0x19DC34u: goto label_19dc34;
            case 0x19DC38u: goto label_19dc38;
            case 0x19DC3Cu: goto label_19dc3c;
            case 0x19DC40u: goto label_19dc40;
            case 0x19DC44u: goto label_19dc44;
            case 0x19DC48u: goto label_19dc48;
            case 0x19DC4Cu: goto label_19dc4c;
            case 0x19DC50u: goto label_19dc50;
            case 0x19DC54u: goto label_19dc54;
            case 0x19DC58u: goto label_19dc58;
            case 0x19DC5Cu: goto label_19dc5c;
            case 0x19DC60u: goto label_19dc60;
            case 0x19DC64u: goto label_19dc64;
            case 0x19DC68u: goto label_19dc68;
            case 0x19DC6Cu: goto label_19dc6c;
            case 0x19DC70u: goto label_19dc70;
            case 0x19DC74u: goto label_19dc74;
            case 0x19DC78u: goto label_19dc78;
            case 0x19DC7Cu: goto label_19dc7c;
            case 0x19DC80u: goto label_19dc80;
            case 0x19DC84u: goto label_19dc84;
            case 0x19DC88u: goto label_19dc88;
            case 0x19DC8Cu: goto label_19dc8c;
            case 0x19DC90u: goto label_19dc90;
            case 0x19DC94u: goto label_19dc94;
            case 0x19DC98u: goto label_19dc98;
            case 0x19DC9Cu: goto label_19dc9c;
            case 0x19DCA0u: goto label_19dca0;
            case 0x19DCA4u: goto label_19dca4;
            case 0x19DCA8u: goto label_19dca8;
            case 0x19DCACu: goto label_19dcac;
            case 0x19DCB0u: goto label_19dcb0;
            case 0x19DCB4u: goto label_19dcb4;
            case 0x19DCB8u: goto label_19dcb8;
            case 0x19DCBCu: goto label_19dcbc;
            case 0x19DCC0u: goto label_19dcc0;
            case 0x19DCC4u: goto label_19dcc4;
            case 0x19DCC8u: goto label_19dcc8;
            case 0x19DCCCu: goto label_19dccc;
            case 0x19DCD0u: goto label_19dcd0;
            case 0x19DCD4u: goto label_19dcd4;
            case 0x19DCD8u: goto label_19dcd8;
            case 0x19DCDCu: goto label_19dcdc;
            case 0x19DCE0u: goto label_19dce0;
            case 0x19DCE4u: goto label_19dce4;
            case 0x19DCE8u: goto label_19dce8;
            case 0x19DCECu: goto label_19dcec;
            case 0x19DCF0u: goto label_19dcf0;
            case 0x19DCF4u: goto label_19dcf4;
            case 0x19DCF8u: goto label_19dcf8;
            case 0x19DCFCu: goto label_19dcfc;
            case 0x19DD00u: goto label_19dd00;
            case 0x19DD04u: goto label_19dd04;
            case 0x19DD08u: goto label_19dd08;
            case 0x19DD0Cu: goto label_19dd0c;
            case 0x19DD10u: goto label_19dd10;
            case 0x19DD14u: goto label_19dd14;
            case 0x19DD18u: goto label_19dd18;
            case 0x19DD1Cu: goto label_19dd1c;
            case 0x19DD20u: goto label_19dd20;
            case 0x19DD24u: goto label_19dd24;
            case 0x19DD28u: goto label_19dd28;
            case 0x19DD2Cu: goto label_19dd2c;
            case 0x19DD30u: goto label_19dd30;
            case 0x19DD34u: goto label_19dd34;
            case 0x19DD38u: goto label_19dd38;
            case 0x19DD3Cu: goto label_19dd3c;
            case 0x19DD40u: goto label_19dd40;
            case 0x19DD44u: goto label_19dd44;
            case 0x19DD48u: goto label_19dd48;
            case 0x19DD4Cu: goto label_19dd4c;
            case 0x19DD50u: goto label_19dd50;
            case 0x19DD54u: goto label_19dd54;
            case 0x19DD58u: goto label_19dd58;
            case 0x19DD5Cu: goto label_19dd5c;
            case 0x19DD60u: goto label_19dd60;
            case 0x19DD64u: goto label_19dd64;
            case 0x19DD68u: goto label_19dd68;
            case 0x19DD6Cu: goto label_19dd6c;
            case 0x19DD70u: goto label_19dd70;
            case 0x19DD74u: goto label_19dd74;
            case 0x19DD78u: goto label_19dd78;
            case 0x19DD7Cu: goto label_19dd7c;
            case 0x19DD80u: goto label_19dd80;
            case 0x19DD84u: goto label_19dd84;
            case 0x19DD88u: goto label_19dd88;
            case 0x19DD8Cu: goto label_19dd8c;
            case 0x19DD90u: goto label_19dd90;
            case 0x19DD94u: goto label_19dd94;
            case 0x19DD98u: goto label_19dd98;
            case 0x19DD9Cu: goto label_19dd9c;
            case 0x19DDA0u: goto label_19dda0;
            case 0x19DDA4u: goto label_19dda4;
            case 0x19DDA8u: goto label_19dda8;
            case 0x19DDACu: goto label_19ddac;
            case 0x19DDB0u: goto label_19ddb0;
            case 0x19DDB4u: goto label_19ddb4;
            case 0x19DDB8u: goto label_19ddb8;
            case 0x19DDBCu: goto label_19ddbc;
            case 0x19DDC0u: goto label_19ddc0;
            case 0x19DDC4u: goto label_19ddc4;
            case 0x19DDC8u: goto label_19ddc8;
            case 0x19DDCCu: goto label_19ddcc;
            case 0x19DDD0u: goto label_19ddd0;
            case 0x19DDD4u: goto label_19ddd4;
            case 0x19DDD8u: goto label_19ddd8;
            case 0x19DDDCu: goto label_19dddc;
            case 0x19DDE0u: goto label_19dde0;
            case 0x19DDE4u: goto label_19dde4;
            case 0x19DDE8u: goto label_19dde8;
            case 0x19DDECu: goto label_19ddec;
            case 0x19DDF0u: goto label_19ddf0;
            case 0x19DDF4u: goto label_19ddf4;
            case 0x19DDF8u: goto label_19ddf8;
            case 0x19DDFCu: goto label_19ddfc;
            case 0x19DE00u: goto label_19de00;
            case 0x19DE04u: goto label_19de04;
            case 0x19DE08u: goto label_19de08;
            case 0x19DE0Cu: goto label_19de0c;
            case 0x19DE10u: goto label_19de10;
            case 0x19DE14u: goto label_19de14;
            case 0x19DE18u: goto label_19de18;
            case 0x19DE1Cu: goto label_19de1c;
            case 0x19DE20u: goto label_19de20;
            case 0x19DE24u: goto label_19de24;
            case 0x19DE28u: goto label_19de28;
            case 0x19DE2Cu: goto label_19de2c;
            case 0x19DE30u: goto label_19de30;
            case 0x19DE34u: goto label_19de34;
            case 0x19DE38u: goto label_19de38;
            case 0x19DE3Cu: goto label_19de3c;
            case 0x19DE40u: goto label_19de40;
            case 0x19DE44u: goto label_19de44;
            case 0x19DE48u: goto label_19de48;
            case 0x19DE4Cu: goto label_19de4c;
            case 0x19DE50u: goto label_19de50;
            case 0x19DE54u: goto label_19de54;
            case 0x19DE58u: goto label_19de58;
            case 0x19DE5Cu: goto label_19de5c;
            case 0x19DE60u: goto label_19de60;
            case 0x19DE64u: goto label_19de64;
            case 0x19DE68u: goto label_19de68;
            case 0x19DE6Cu: goto label_19de6c;
            case 0x19DE70u: goto label_19de70;
            case 0x19DE74u: goto label_19de74;
            case 0x19DE78u: goto label_19de78;
            case 0x19DE7Cu: goto label_19de7c;
            case 0x19DE80u: goto label_19de80;
            case 0x19DE84u: goto label_19de84;
            case 0x19DE88u: goto label_19de88;
            case 0x19DE8Cu: goto label_19de8c;
            case 0x19DE90u: goto label_19de90;
            case 0x19DE94u: goto label_19de94;
            case 0x19DE98u: goto label_19de98;
            case 0x19DE9Cu: goto label_19de9c;
            case 0x19DEA0u: goto label_19dea0;
            case 0x19DEA4u: goto label_19dea4;
            case 0x19DEA8u: goto label_19dea8;
            case 0x19DEACu: goto label_19deac;
            case 0x19DEB0u: goto label_19deb0;
            case 0x19DEB4u: goto label_19deb4;
            case 0x19DEB8u: goto label_19deb8;
            case 0x19DEBCu: goto label_19debc;
            case 0x19DEC0u: goto label_19dec0;
            case 0x19DEC4u: goto label_19dec4;
            case 0x19DEC8u: goto label_19dec8;
            case 0x19DECCu: goto label_19decc;
            case 0x19DED0u: goto label_19ded0;
            case 0x19DED4u: goto label_19ded4;
            case 0x19DED8u: goto label_19ded8;
            case 0x19DEDCu: goto label_19dedc;
            case 0x19DEE0u: goto label_19dee0;
            case 0x19DEE4u: goto label_19dee4;
            case 0x19DEE8u: goto label_19dee8;
            case 0x19DEECu: goto label_19deec;
            case 0x19DEF0u: goto label_19def0;
            case 0x19DEF4u: goto label_19def4;
            case 0x19DEF8u: goto label_19def8;
            case 0x19DEFCu: goto label_19defc;
            case 0x19DF00u: goto label_19df00;
            case 0x19DF04u: goto label_19df04;
            case 0x19DF08u: goto label_19df08;
            case 0x19DF0Cu: goto label_19df0c;
            case 0x19DF10u: goto label_19df10;
            case 0x19DF14u: goto label_19df14;
            case 0x19DF18u: goto label_19df18;
            case 0x19DF1Cu: goto label_19df1c;
            case 0x19DF20u: goto label_19df20;
            case 0x19DF24u: goto label_19df24;
            case 0x19DF28u: goto label_19df28;
            case 0x19DF2Cu: goto label_19df2c;
            case 0x19DF30u: goto label_19df30;
            case 0x19DF34u: goto label_19df34;
            case 0x19DF38u: goto label_19df38;
            case 0x19DF3Cu: goto label_19df3c;
            case 0x19DF40u: goto label_19df40;
            case 0x19DF44u: goto label_19df44;
            case 0x19DF48u: goto label_19df48;
            case 0x19DF4Cu: goto label_19df4c;
            case 0x19DF50u: goto label_19df50;
            case 0x19DF54u: goto label_19df54;
            case 0x19DF58u: goto label_19df58;
            case 0x19DF5Cu: goto label_19df5c;
            case 0x19DF60u: goto label_19df60;
            case 0x19DF64u: goto label_19df64;
            case 0x19DF68u: goto label_19df68;
            case 0x19DF6Cu: goto label_19df6c;
            case 0x19DF70u: goto label_19df70;
            case 0x19DF74u: goto label_19df74;
            case 0x19DF78u: goto label_19df78;
            case 0x19DF7Cu: goto label_19df7c;
            case 0x19DF80u: goto label_19df80;
            case 0x19DF84u: goto label_19df84;
            case 0x19DF88u: goto label_19df88;
            case 0x19DF8Cu: goto label_19df8c;
            case 0x19DF90u: goto label_19df90;
            case 0x19DF94u: goto label_19df94;
            case 0x19DF98u: goto label_19df98;
            case 0x19DF9Cu: goto label_19df9c;
            case 0x19DFA0u: goto label_19dfa0;
            case 0x19DFA4u: goto label_19dfa4;
            case 0x19DFA8u: goto label_19dfa8;
            case 0x19DFACu: goto label_19dfac;
            case 0x19DFB0u: goto label_19dfb0;
            case 0x19DFB4u: goto label_19dfb4;
            case 0x19DFB8u: goto label_19dfb8;
            case 0x19DFBCu: goto label_19dfbc;
            case 0x19DFC0u: goto label_19dfc0;
            case 0x19DFC4u: goto label_19dfc4;
            case 0x19DFC8u: goto label_19dfc8;
            case 0x19DFCCu: goto label_19dfcc;
            case 0x19DFD0u: goto label_19dfd0;
            case 0x19DFD4u: goto label_19dfd4;
            case 0x19DFD8u: goto label_19dfd8;
            case 0x19DFDCu: goto label_19dfdc;
            case 0x19DFE0u: goto label_19dfe0;
            case 0x19DFE4u: goto label_19dfe4;
            case 0x19DFE8u: goto label_19dfe8;
            case 0x19DFECu: goto label_19dfec;
            case 0x19DFF0u: goto label_19dff0;
            case 0x19DFF4u: goto label_19dff4;
            case 0x19DFF8u: goto label_19dff8;
            case 0x19DFFCu: goto label_19dffc;
            case 0x19E000u: goto label_19e000;
            case 0x19E004u: goto label_19e004;
            case 0x19E008u: goto label_19e008;
            case 0x19E00Cu: goto label_19e00c;
            case 0x19E010u: goto label_19e010;
            case 0x19E014u: goto label_19e014;
            case 0x19E018u: goto label_19e018;
            case 0x19E01Cu: goto label_19e01c;
            case 0x19E020u: goto label_19e020;
            case 0x19E024u: goto label_19e024;
            case 0x19E028u: goto label_19e028;
            case 0x19E02Cu: goto label_19e02c;
            case 0x19E030u: goto label_19e030;
            case 0x19E034u: goto label_19e034;
            case 0x19E038u: goto label_19e038;
            case 0x19E03Cu: goto label_19e03c;
            case 0x19E040u: goto label_19e040;
            case 0x19E044u: goto label_19e044;
            case 0x19E048u: goto label_19e048;
            case 0x19E04Cu: goto label_19e04c;
            case 0x19E050u: goto label_19e050;
            case 0x19E054u: goto label_19e054;
            case 0x19E058u: goto label_19e058;
            case 0x19E05Cu: goto label_19e05c;
            case 0x19E060u: goto label_19e060;
            case 0x19E064u: goto label_19e064;
            case 0x19E068u: goto label_19e068;
            case 0x19E06Cu: goto label_19e06c;
            case 0x19E070u: goto label_19e070;
            case 0x19E074u: goto label_19e074;
            case 0x19E078u: goto label_19e078;
            case 0x19E07Cu: goto label_19e07c;
            case 0x19E080u: goto label_19e080;
            case 0x19E084u: goto label_19e084;
            case 0x19E088u: goto label_19e088;
            case 0x19E08Cu: goto label_19e08c;
            case 0x19E090u: goto label_19e090;
            case 0x19E094u: goto label_19e094;
            case 0x19E098u: goto label_19e098;
            case 0x19E09Cu: goto label_19e09c;
            case 0x19E0A0u: goto label_19e0a0;
            case 0x19E0A4u: goto label_19e0a4;
            case 0x19E0A8u: goto label_19e0a8;
            case 0x19E0ACu: goto label_19e0ac;
            case 0x19E0B0u: goto label_19e0b0;
            case 0x19E0B4u: goto label_19e0b4;
            case 0x19E0B8u: goto label_19e0b8;
            case 0x19E0BCu: goto label_19e0bc;
            case 0x19E0C0u: goto label_19e0c0;
            case 0x19E0C4u: goto label_19e0c4;
            case 0x19E0C8u: goto label_19e0c8;
            case 0x19E0CCu: goto label_19e0cc;
            case 0x19E0D0u: goto label_19e0d0;
            case 0x19E0D4u: goto label_19e0d4;
            case 0x19E0D8u: goto label_19e0d8;
            case 0x19E0DCu: goto label_19e0dc;
            case 0x19E0E0u: goto label_19e0e0;
            case 0x19E0E4u: goto label_19e0e4;
            case 0x19E0E8u: goto label_19e0e8;
            case 0x19E0ECu: goto label_19e0ec;
            case 0x19E0F0u: goto label_19e0f0;
            case 0x19E0F4u: goto label_19e0f4;
            case 0x19E0F8u: goto label_19e0f8;
            case 0x19E0FCu: goto label_19e0fc;
            case 0x19E100u: goto label_19e100;
            case 0x19E104u: goto label_19e104;
            case 0x19E108u: goto label_19e108;
            case 0x19E10Cu: goto label_19e10c;
            case 0x19E110u: goto label_19e110;
            case 0x19E114u: goto label_19e114;
            case 0x19E118u: goto label_19e118;
            case 0x19E11Cu: goto label_19e11c;
            case 0x19E120u: goto label_19e120;
            case 0x19E124u: goto label_19e124;
            case 0x19E128u: goto label_19e128;
            case 0x19E12Cu: goto label_19e12c;
            case 0x19E130u: goto label_19e130;
            case 0x19E134u: goto label_19e134;
            case 0x19E138u: goto label_19e138;
            case 0x19E13Cu: goto label_19e13c;
            case 0x19E140u: goto label_19e140;
            case 0x19E144u: goto label_19e144;
            case 0x19E148u: goto label_19e148;
            case 0x19E14Cu: goto label_19e14c;
            case 0x19E150u: goto label_19e150;
            case 0x19E154u: goto label_19e154;
            case 0x19E158u: goto label_19e158;
            case 0x19E15Cu: goto label_19e15c;
            case 0x19E160u: goto label_19e160;
            case 0x19E164u: goto label_19e164;
            case 0x19E168u: goto label_19e168;
            case 0x19E16Cu: goto label_19e16c;
            case 0x19E170u: goto label_19e170;
            case 0x19E174u: goto label_19e174;
            case 0x19E178u: goto label_19e178;
            case 0x19E17Cu: goto label_19e17c;
            case 0x19E180u: goto label_19e180;
            case 0x19E184u: goto label_19e184;
            case 0x19E188u: goto label_19e188;
            case 0x19E18Cu: goto label_19e18c;
            case 0x19E190u: goto label_19e190;
            case 0x19E194u: goto label_19e194;
            case 0x19E198u: goto label_19e198;
            case 0x19E19Cu: goto label_19e19c;
            case 0x19E1A0u: goto label_19e1a0;
            case 0x19E1A4u: goto label_19e1a4;
            case 0x19E1A8u: goto label_19e1a8;
            case 0x19E1ACu: goto label_19e1ac;
            case 0x19E1B0u: goto label_19e1b0;
            case 0x19E1B4u: goto label_19e1b4;
            case 0x19E1B8u: goto label_19e1b8;
            case 0x19E1BCu: goto label_19e1bc;
            case 0x19E1C0u: goto label_19e1c0;
            case 0x19E1C4u: goto label_19e1c4;
            case 0x19E1C8u: goto label_19e1c8;
            case 0x19E1CCu: goto label_19e1cc;
            case 0x19E1D0u: goto label_19e1d0;
            case 0x19E1D4u: goto label_19e1d4;
            case 0x19E1D8u: goto label_19e1d8;
            case 0x19E1DCu: goto label_19e1dc;
            case 0x19E1E0u: goto label_19e1e0;
            case 0x19E1E4u: goto label_19e1e4;
            case 0x19E1E8u: goto label_19e1e8;
            case 0x19E1ECu: goto label_19e1ec;
            case 0x19E1F0u: goto label_19e1f0;
            case 0x19E1F4u: goto label_19e1f4;
            case 0x19E1F8u: goto label_19e1f8;
            case 0x19E1FCu: goto label_19e1fc;
            case 0x19E200u: goto label_19e200;
            case 0x19E204u: goto label_19e204;
            case 0x19E208u: goto label_19e208;
            case 0x19E20Cu: goto label_19e20c;
            case 0x19E210u: goto label_19e210;
            case 0x19E214u: goto label_19e214;
            case 0x19E218u: goto label_19e218;
            case 0x19E21Cu: goto label_19e21c;
            case 0x19E220u: goto label_19e220;
            case 0x19E224u: goto label_19e224;
            case 0x19E228u: goto label_19e228;
            case 0x19E22Cu: goto label_19e22c;
            case 0x19E230u: goto label_19e230;
            case 0x19E234u: goto label_19e234;
            case 0x19E238u: goto label_19e238;
            case 0x19E23Cu: goto label_19e23c;
            case 0x19E240u: goto label_19e240;
            case 0x19E244u: goto label_19e244;
            case 0x19E248u: goto label_19e248;
            case 0x19E24Cu: goto label_19e24c;
            case 0x19E250u: goto label_19e250;
            case 0x19E254u: goto label_19e254;
            case 0x19E258u: goto label_19e258;
            case 0x19E25Cu: goto label_19e25c;
            case 0x19E260u: goto label_19e260;
            case 0x19E264u: goto label_19e264;
            case 0x19E268u: goto label_19e268;
            case 0x19E26Cu: goto label_19e26c;
            case 0x19E270u: goto label_19e270;
            case 0x19E274u: goto label_19e274;
            case 0x19E278u: goto label_19e278;
            case 0x19E27Cu: goto label_19e27c;
            case 0x19E280u: goto label_19e280;
            case 0x19E284u: goto label_19e284;
            case 0x19E288u: goto label_19e288;
            case 0x19E28Cu: goto label_19e28c;
            case 0x19E290u: goto label_19e290;
            case 0x19E294u: goto label_19e294;
            case 0x19E298u: goto label_19e298;
            case 0x19E29Cu: goto label_19e29c;
            case 0x19E2A0u: goto label_19e2a0;
            case 0x19E2A4u: goto label_19e2a4;
            case 0x19E2A8u: goto label_19e2a8;
            case 0x19E2ACu: goto label_19e2ac;
            case 0x19E2B0u: goto label_19e2b0;
            case 0x19E2B4u: goto label_19e2b4;
            case 0x19E2B8u: goto label_19e2b8;
            case 0x19E2BCu: goto label_19e2bc;
            case 0x19E2C0u: goto label_19e2c0;
            case 0x19E2C4u: goto label_19e2c4;
            case 0x19E2C8u: goto label_19e2c8;
            case 0x19E2CCu: goto label_19e2cc;
            case 0x19E2D0u: goto label_19e2d0;
            case 0x19E2D4u: goto label_19e2d4;
            case 0x19E2D8u: goto label_19e2d8;
            case 0x19E2DCu: goto label_19e2dc;
            case 0x19E2E0u: goto label_19e2e0;
            case 0x19E2E4u: goto label_19e2e4;
            case 0x19E2E8u: goto label_19e2e8;
            case 0x19E2ECu: goto label_19e2ec;
            case 0x19E2F0u: goto label_19e2f0;
            case 0x19E2F4u: goto label_19e2f4;
            case 0x19E2F8u: goto label_19e2f8;
            case 0x19E2FCu: goto label_19e2fc;
            case 0x19E300u: goto label_19e300;
            case 0x19E304u: goto label_19e304;
            case 0x19E308u: goto label_19e308;
            case 0x19E30Cu: goto label_19e30c;
            case 0x19E310u: goto label_19e310;
            case 0x19E314u: goto label_19e314;
            case 0x19E318u: goto label_19e318;
            case 0x19E31Cu: goto label_19e31c;
            case 0x19E320u: goto label_19e320;
            case 0x19E324u: goto label_19e324;
            case 0x19E328u: goto label_19e328;
            case 0x19E32Cu: goto label_19e32c;
            case 0x19E330u: goto label_19e330;
            case 0x19E334u: goto label_19e334;
            case 0x19E338u: goto label_19e338;
            case 0x19E33Cu: goto label_19e33c;
            case 0x19E340u: goto label_19e340;
            case 0x19E344u: goto label_19e344;
            case 0x19E348u: goto label_19e348;
            case 0x19E34Cu: goto label_19e34c;
            case 0x19E350u: goto label_19e350;
            case 0x19E354u: goto label_19e354;
            case 0x19E358u: goto label_19e358;
            case 0x19E35Cu: goto label_19e35c;
            case 0x19E360u: goto label_19e360;
            case 0x19E364u: goto label_19e364;
            case 0x19E368u: goto label_19e368;
            case 0x19E36Cu: goto label_19e36c;
            case 0x19E370u: goto label_19e370;
            case 0x19E374u: goto label_19e374;
            case 0x19E378u: goto label_19e378;
            case 0x19E37Cu: goto label_19e37c;
            case 0x19E380u: goto label_19e380;
            case 0x19E384u: goto label_19e384;
            case 0x19E388u: goto label_19e388;
            case 0x19E38Cu: goto label_19e38c;
            case 0x19E390u: goto label_19e390;
            case 0x19E394u: goto label_19e394;
            case 0x19E398u: goto label_19e398;
            case 0x19E39Cu: goto label_19e39c;
            case 0x19E3A0u: goto label_19e3a0;
            case 0x19E3A4u: goto label_19e3a4;
            case 0x19E3A8u: goto label_19e3a8;
            case 0x19E3ACu: goto label_19e3ac;
            case 0x19E3B0u: goto label_19e3b0;
            case 0x19E3B4u: goto label_19e3b4;
            case 0x19E3B8u: goto label_19e3b8;
            case 0x19E3BCu: goto label_19e3bc;
            case 0x19E3C0u: goto label_19e3c0;
            case 0x19E3C4u: goto label_19e3c4;
            case 0x19E3C8u: goto label_19e3c8;
            case 0x19E3CCu: goto label_19e3cc;
            case 0x19E3D0u: goto label_19e3d0;
            case 0x19E3D4u: goto label_19e3d4;
            case 0x19E3D8u: goto label_19e3d8;
            case 0x19E3DCu: goto label_19e3dc;
            case 0x19E3E0u: goto label_19e3e0;
            case 0x19E3E4u: goto label_19e3e4;
            case 0x19E3E8u: goto label_19e3e8;
            case 0x19E3ECu: goto label_19e3ec;
            case 0x19E3F0u: goto label_19e3f0;
            case 0x19E3F4u: goto label_19e3f4;
            case 0x19E3F8u: goto label_19e3f8;
            case 0x19E3FCu: goto label_19e3fc;
            case 0x19E400u: goto label_19e400;
            case 0x19E404u: goto label_19e404;
            case 0x19E408u: goto label_19e408;
            case 0x19E40Cu: goto label_19e40c;
            case 0x19E410u: goto label_19e410;
            case 0x19E414u: goto label_19e414;
            case 0x19E418u: goto label_19e418;
            case 0x19E41Cu: goto label_19e41c;
            case 0x19E420u: goto label_19e420;
            case 0x19E424u: goto label_19e424;
            case 0x19E428u: goto label_19e428;
            case 0x19E42Cu: goto label_19e42c;
            case 0x19E430u: goto label_19e430;
            case 0x19E434u: goto label_19e434;
            case 0x19E438u: goto label_19e438;
            case 0x19E43Cu: goto label_19e43c;
            case 0x19E440u: goto label_19e440;
            case 0x19E444u: goto label_19e444;
            case 0x19E448u: goto label_19e448;
            case 0x19E44Cu: goto label_19e44c;
            case 0x19E450u: goto label_19e450;
            case 0x19E454u: goto label_19e454;
            case 0x19E458u: goto label_19e458;
            case 0x19E45Cu: goto label_19e45c;
            case 0x19E460u: goto label_19e460;
            case 0x19E464u: goto label_19e464;
            case 0x19E468u: goto label_19e468;
            case 0x19E46Cu: goto label_19e46c;
            case 0x19E470u: goto label_19e470;
            case 0x19E474u: goto label_19e474;
            case 0x19E478u: goto label_19e478;
            case 0x19E47Cu: goto label_19e47c;
            case 0x19E480u: goto label_19e480;
            case 0x19E484u: goto label_19e484;
            case 0x19E488u: goto label_19e488;
            case 0x19E48Cu: goto label_19e48c;
            case 0x19E490u: goto label_19e490;
            case 0x19E494u: goto label_19e494;
            case 0x19E498u: goto label_19e498;
            case 0x19E49Cu: goto label_19e49c;
            case 0x19E4A0u: goto label_19e4a0;
            case 0x19E4A4u: goto label_19e4a4;
            case 0x19E4A8u: goto label_19e4a8;
            case 0x19E4ACu: goto label_19e4ac;
            case 0x19E4B0u: goto label_19e4b0;
            case 0x19E4B4u: goto label_19e4b4;
            case 0x19E4B8u: goto label_19e4b8;
            case 0x19E4BCu: goto label_19e4bc;
            case 0x19E4C0u: goto label_19e4c0;
            case 0x19E4C4u: goto label_19e4c4;
            case 0x19E4C8u: goto label_19e4c8;
            case 0x19E4CCu: goto label_19e4cc;
            case 0x19E4D0u: goto label_19e4d0;
            case 0x19E4D4u: goto label_19e4d4;
            case 0x19E4D8u: goto label_19e4d8;
            case 0x19E4DCu: goto label_19e4dc;
            case 0x19E4E0u: goto label_19e4e0;
            case 0x19E4E4u: goto label_19e4e4;
            case 0x19E4E8u: goto label_19e4e8;
            case 0x19E4ECu: goto label_19e4ec;
            case 0x19E4F0u: goto label_19e4f0;
            case 0x19E4F4u: goto label_19e4f4;
            case 0x19E4F8u: goto label_19e4f8;
            case 0x19E4FCu: goto label_19e4fc;
            case 0x19E500u: goto label_19e500;
            case 0x19E504u: goto label_19e504;
            case 0x19E508u: goto label_19e508;
            case 0x19E50Cu: goto label_19e50c;
            case 0x19E510u: goto label_19e510;
            case 0x19E514u: goto label_19e514;
            case 0x19E518u: goto label_19e518;
            case 0x19E51Cu: goto label_19e51c;
            case 0x19E520u: goto label_19e520;
            case 0x19E524u: goto label_19e524;
            case 0x19E528u: goto label_19e528;
            case 0x19E52Cu: goto label_19e52c;
            case 0x19E530u: goto label_19e530;
            case 0x19E534u: goto label_19e534;
            case 0x19E538u: goto label_19e538;
            case 0x19E53Cu: goto label_19e53c;
            case 0x19E540u: goto label_19e540;
            case 0x19E544u: goto label_19e544;
            case 0x19E548u: goto label_19e548;
            case 0x19E54Cu: goto label_19e54c;
            case 0x19E550u: goto label_19e550;
            case 0x19E554u: goto label_19e554;
            case 0x19E558u: goto label_19e558;
            case 0x19E55Cu: goto label_19e55c;
            case 0x19E560u: goto label_19e560;
            case 0x19E564u: goto label_19e564;
            case 0x19E568u: goto label_19e568;
            case 0x19E56Cu: goto label_19e56c;
            case 0x19E570u: goto label_19e570;
            case 0x19E574u: goto label_19e574;
            case 0x19E578u: goto label_19e578;
            case 0x19E57Cu: goto label_19e57c;
            case 0x19E580u: goto label_19e580;
            case 0x19E584u: goto label_19e584;
            case 0x19E588u: goto label_19e588;
            case 0x19E58Cu: goto label_19e58c;
            case 0x19E590u: goto label_19e590;
            case 0x19E594u: goto label_19e594;
            case 0x19E598u: goto label_19e598;
            case 0x19E59Cu: goto label_19e59c;
            case 0x19E5A0u: goto label_19e5a0;
            case 0x19E5A4u: goto label_19e5a4;
            case 0x19E5A8u: goto label_19e5a8;
            case 0x19E5ACu: goto label_19e5ac;
            case 0x19E5B0u: goto label_19e5b0;
            case 0x19E5B4u: goto label_19e5b4;
            case 0x19E5B8u: goto label_19e5b8;
            case 0x19E5BCu: goto label_19e5bc;
            case 0x19E5C0u: goto label_19e5c0;
            case 0x19E5C4u: goto label_19e5c4;
            case 0x19E5C8u: goto label_19e5c8;
            case 0x19E5CCu: goto label_19e5cc;
            case 0x19E5D0u: goto label_19e5d0;
            case 0x19E5D4u: goto label_19e5d4;
            case 0x19E5D8u: goto label_19e5d8;
            case 0x19E5DCu: goto label_19e5dc;
            case 0x19E5E0u: goto label_19e5e0;
            case 0x19E5E4u: goto label_19e5e4;
            case 0x19E5E8u: goto label_19e5e8;
            case 0x19E5ECu: goto label_19e5ec;
            case 0x19E5F0u: goto label_19e5f0;
            case 0x19E5F4u: goto label_19e5f4;
            case 0x19E5F8u: goto label_19e5f8;
            case 0x19E5FCu: goto label_19e5fc;
            case 0x19E600u: goto label_19e600;
            case 0x19E604u: goto label_19e604;
            case 0x19E608u: goto label_19e608;
            case 0x19E60Cu: goto label_19e60c;
            case 0x19E610u: goto label_19e610;
            case 0x19E614u: goto label_19e614;
            case 0x19E618u: goto label_19e618;
            case 0x19E61Cu: goto label_19e61c;
            case 0x19E620u: goto label_19e620;
            case 0x19E624u: goto label_19e624;
            case 0x19E628u: goto label_19e628;
            case 0x19E62Cu: goto label_19e62c;
            case 0x19E630u: goto label_19e630;
            case 0x19E634u: goto label_19e634;
            case 0x19E638u: goto label_19e638;
            case 0x19E63Cu: goto label_19e63c;
            case 0x19E640u: goto label_19e640;
            case 0x19E644u: goto label_19e644;
            case 0x19E648u: goto label_19e648;
            case 0x19E64Cu: goto label_19e64c;
            case 0x19E650u: goto label_19e650;
            case 0x19E654u: goto label_19e654;
            case 0x19E658u: goto label_19e658;
            case 0x19E65Cu: goto label_19e65c;
            case 0x19E660u: goto label_19e660;
            case 0x19E664u: goto label_19e664;
            case 0x19E668u: goto label_19e668;
            case 0x19E66Cu: goto label_19e66c;
            case 0x19E670u: goto label_19e670;
            case 0x19E674u: goto label_19e674;
            case 0x19E678u: goto label_19e678;
            case 0x19E67Cu: goto label_19e67c;
            case 0x19E680u: goto label_19e680;
            case 0x19E684u: goto label_19e684;
            case 0x19E688u: goto label_19e688;
            case 0x19E68Cu: goto label_19e68c;
            case 0x19E690u: goto label_19e690;
            case 0x19E694u: goto label_19e694;
            case 0x19E698u: goto label_19e698;
            case 0x19E69Cu: goto label_19e69c;
            case 0x19E6A0u: goto label_19e6a0;
            case 0x19E6A4u: goto label_19e6a4;
            case 0x19E6A8u: goto label_19e6a8;
            case 0x19E6ACu: goto label_19e6ac;
            case 0x19E6B0u: goto label_19e6b0;
            case 0x19E6B4u: goto label_19e6b4;
            case 0x19E6B8u: goto label_19e6b8;
            case 0x19E6BCu: goto label_19e6bc;
            case 0x19E6C0u: goto label_19e6c0;
            case 0x19E6C4u: goto label_19e6c4;
            case 0x19E6C8u: goto label_19e6c8;
            case 0x19E6CCu: goto label_19e6cc;
            case 0x19E6D0u: goto label_19e6d0;
            case 0x19E6D4u: goto label_19e6d4;
            case 0x19E6D8u: goto label_19e6d8;
            case 0x19E6DCu: goto label_19e6dc;
            case 0x19E6E0u: goto label_19e6e0;
            case 0x19E6E4u: goto label_19e6e4;
            case 0x19E6E8u: goto label_19e6e8;
            case 0x19E6ECu: goto label_19e6ec;
            case 0x19E6F0u: goto label_19e6f0;
            case 0x19E6F4u: goto label_19e6f4;
            case 0x19E6F8u: goto label_19e6f8;
            case 0x19E6FCu: goto label_19e6fc;
            case 0x19E700u: goto label_19e700;
            case 0x19E704u: goto label_19e704;
            case 0x19E708u: goto label_19e708;
            case 0x19E70Cu: goto label_19e70c;
            case 0x19E710u: goto label_19e710;
            case 0x19E714u: goto label_19e714;
            case 0x19E718u: goto label_19e718;
            case 0x19E71Cu: goto label_19e71c;
            case 0x19E720u: goto label_19e720;
            case 0x19E724u: goto label_19e724;
            case 0x19E728u: goto label_19e728;
            case 0x19E72Cu: goto label_19e72c;
            case 0x19E730u: goto label_19e730;
            case 0x19E734u: goto label_19e734;
            case 0x19E738u: goto label_19e738;
            case 0x19E73Cu: goto label_19e73c;
            case 0x19E740u: goto label_19e740;
            case 0x19E744u: goto label_19e744;
            case 0x19E748u: goto label_19e748;
            case 0x19E74Cu: goto label_19e74c;
            case 0x19E750u: goto label_19e750;
            case 0x19E754u: goto label_19e754;
            case 0x19E758u: goto label_19e758;
            case 0x19E75Cu: goto label_19e75c;
            case 0x19E760u: goto label_19e760;
            case 0x19E764u: goto label_19e764;
            case 0x19E768u: goto label_19e768;
            case 0x19E76Cu: goto label_19e76c;
            case 0x19E770u: goto label_19e770;
            case 0x19E774u: goto label_19e774;
            case 0x19E778u: goto label_19e778;
            case 0x19E77Cu: goto label_19e77c;
            case 0x19E780u: goto label_19e780;
            case 0x19E784u: goto label_19e784;
            case 0x19E788u: goto label_19e788;
            case 0x19E78Cu: goto label_19e78c;
            case 0x19E790u: goto label_19e790;
            case 0x19E794u: goto label_19e794;
            case 0x19E798u: goto label_19e798;
            case 0x19E79Cu: goto label_19e79c;
            case 0x19E7A0u: goto label_19e7a0;
            case 0x19E7A4u: goto label_19e7a4;
            case 0x19E7A8u: goto label_19e7a8;
            case 0x19E7ACu: goto label_19e7ac;
            case 0x19E7B0u: goto label_19e7b0;
            case 0x19E7B4u: goto label_19e7b4;
            case 0x19E7B8u: goto label_19e7b8;
            case 0x19E7BCu: goto label_19e7bc;
            case 0x19E7C0u: goto label_19e7c0;
            case 0x19E7C4u: goto label_19e7c4;
            case 0x19E7C8u: goto label_19e7c8;
            case 0x19E7CCu: goto label_19e7cc;
            case 0x19E7D0u: goto label_19e7d0;
            case 0x19E7D4u: goto label_19e7d4;
            case 0x19E7D8u: goto label_19e7d8;
            case 0x19E7DCu: goto label_19e7dc;
            case 0x19E7E0u: goto label_19e7e0;
            case 0x19E7E4u: goto label_19e7e4;
            case 0x19E7E8u: goto label_19e7e8;
            case 0x19E7ECu: goto label_19e7ec;
            case 0x19E7F0u: goto label_19e7f0;
            case 0x19E7F4u: goto label_19e7f4;
            case 0x19E7F8u: goto label_19e7f8;
            case 0x19E7FCu: goto label_19e7fc;
            case 0x19E800u: goto label_19e800;
            case 0x19E804u: goto label_19e804;
            case 0x19E808u: goto label_19e808;
            case 0x19E80Cu: goto label_19e80c;
            case 0x19E810u: goto label_19e810;
            case 0x19E814u: goto label_19e814;
            case 0x19E818u: goto label_19e818;
            case 0x19E81Cu: goto label_19e81c;
            case 0x19E820u: goto label_19e820;
            case 0x19E824u: goto label_19e824;
            case 0x19E828u: goto label_19e828;
            case 0x19E82Cu: goto label_19e82c;
            case 0x19E830u: goto label_19e830;
            case 0x19E834u: goto label_19e834;
            case 0x19E838u: goto label_19e838;
            case 0x19E83Cu: goto label_19e83c;
            case 0x19E840u: goto label_19e840;
            case 0x19E844u: goto label_19e844;
            case 0x19E848u: goto label_19e848;
            case 0x19E84Cu: goto label_19e84c;
            case 0x19E850u: goto label_19e850;
            case 0x19E854u: goto label_19e854;
            case 0x19E858u: goto label_19e858;
            case 0x19E85Cu: goto label_19e85c;
            case 0x19E860u: goto label_19e860;
            case 0x19E864u: goto label_19e864;
            case 0x19E868u: goto label_19e868;
            case 0x19E86Cu: goto label_19e86c;
            case 0x19E870u: goto label_19e870;
            case 0x19E874u: goto label_19e874;
            case 0x19E878u: goto label_19e878;
            case 0x19E87Cu: goto label_19e87c;
            case 0x19E880u: goto label_19e880;
            case 0x19E884u: goto label_19e884;
            case 0x19E888u: goto label_19e888;
            case 0x19E88Cu: goto label_19e88c;
            case 0x19E890u: goto label_19e890;
            case 0x19E894u: goto label_19e894;
            case 0x19E898u: goto label_19e898;
            case 0x19E89Cu: goto label_19e89c;
            case 0x19E8A0u: goto label_19e8a0;
            case 0x19E8A4u: goto label_19e8a4;
            case 0x19E8A8u: goto label_19e8a8;
            case 0x19E8ACu: goto label_19e8ac;
            case 0x19E8B0u: goto label_19e8b0;
            case 0x19E8B4u: goto label_19e8b4;
            case 0x19E8B8u: goto label_19e8b8;
            case 0x19E8BCu: goto label_19e8bc;
            case 0x19E8C0u: goto label_19e8c0;
            case 0x19E8C4u: goto label_19e8c4;
            case 0x19E8C8u: goto label_19e8c8;
            case 0x19E8CCu: goto label_19e8cc;
            case 0x19E8D0u: goto label_19e8d0;
            case 0x19E8D4u: goto label_19e8d4;
            case 0x19E8D8u: goto label_19e8d8;
            case 0x19E8DCu: goto label_19e8dc;
            case 0x19E8E0u: goto label_19e8e0;
            case 0x19E8E4u: goto label_19e8e4;
            case 0x19E8E8u: goto label_19e8e8;
            case 0x19E8ECu: goto label_19e8ec;
            case 0x19E8F0u: goto label_19e8f0;
            case 0x19E8F4u: goto label_19e8f4;
            case 0x19E8F8u: goto label_19e8f8;
            case 0x19E8FCu: goto label_19e8fc;
            case 0x19E900u: goto label_19e900;
            case 0x19E904u: goto label_19e904;
            case 0x19E908u: goto label_19e908;
            case 0x19E90Cu: goto label_19e90c;
            case 0x19E910u: goto label_19e910;
            case 0x19E914u: goto label_19e914;
            case 0x19E918u: goto label_19e918;
            case 0x19E91Cu: goto label_19e91c;
            case 0x19E920u: goto label_19e920;
            case 0x19E924u: goto label_19e924;
            case 0x19E928u: goto label_19e928;
            case 0x19E92Cu: goto label_19e92c;
            case 0x19E930u: goto label_19e930;
            case 0x19E934u: goto label_19e934;
            case 0x19E938u: goto label_19e938;
            case 0x19E93Cu: goto label_19e93c;
            case 0x19E940u: goto label_19e940;
            case 0x19E944u: goto label_19e944;
            case 0x19E948u: goto label_19e948;
            case 0x19E94Cu: goto label_19e94c;
            case 0x19E950u: goto label_19e950;
            case 0x19E954u: goto label_19e954;
            case 0x19E958u: goto label_19e958;
            case 0x19E95Cu: goto label_19e95c;
            case 0x19E960u: goto label_19e960;
            case 0x19E964u: goto label_19e964;
            case 0x19E968u: goto label_19e968;
            case 0x19E96Cu: goto label_19e96c;
            case 0x19E970u: goto label_19e970;
            case 0x19E974u: goto label_19e974;
            case 0x19E978u: goto label_19e978;
            case 0x19E97Cu: goto label_19e97c;
            case 0x19E980u: goto label_19e980;
            case 0x19E984u: goto label_19e984;
            case 0x19E988u: goto label_19e988;
            case 0x19E98Cu: goto label_19e98c;
            case 0x19E990u: goto label_19e990;
            case 0x19E994u: goto label_19e994;
            case 0x19E998u: goto label_19e998;
            case 0x19E99Cu: goto label_19e99c;
            case 0x19E9A0u: goto label_19e9a0;
            case 0x19E9A4u: goto label_19e9a4;
            case 0x19E9A8u: goto label_19e9a8;
            case 0x19E9ACu: goto label_19e9ac;
            case 0x19E9B0u: goto label_19e9b0;
            case 0x19E9B4u: goto label_19e9b4;
            case 0x19E9B8u: goto label_19e9b8;
            case 0x19E9BCu: goto label_19e9bc;
            case 0x19E9C0u: goto label_19e9c0;
            case 0x19E9C4u: goto label_19e9c4;
            case 0x19E9C8u: goto label_19e9c8;
            case 0x19E9CCu: goto label_19e9cc;
            case 0x19E9D0u: goto label_19e9d0;
            case 0x19E9D4u: goto label_19e9d4;
            case 0x19E9D8u: goto label_19e9d8;
            case 0x19E9DCu: goto label_19e9dc;
            case 0x19E9E0u: goto label_19e9e0;
            case 0x19E9E4u: goto label_19e9e4;
            case 0x19E9E8u: goto label_19e9e8;
            case 0x19E9ECu: goto label_19e9ec;
            case 0x19E9F0u: goto label_19e9f0;
            case 0x19E9F4u: goto label_19e9f4;
            case 0x19E9F8u: goto label_19e9f8;
            case 0x19E9FCu: goto label_19e9fc;
            case 0x19EA00u: goto label_19ea00;
            case 0x19EA04u: goto label_19ea04;
            case 0x19EA08u: goto label_19ea08;
            case 0x19EA0Cu: goto label_19ea0c;
            case 0x19EA10u: goto label_19ea10;
            case 0x19EA14u: goto label_19ea14;
            case 0x19EA18u: goto label_19ea18;
            case 0x19EA1Cu: goto label_19ea1c;
            case 0x19EA20u: goto label_19ea20;
            case 0x19EA24u: goto label_19ea24;
            case 0x19EA28u: goto label_19ea28;
            case 0x19EA2Cu: goto label_19ea2c;
            case 0x19EA30u: goto label_19ea30;
            case 0x19EA34u: goto label_19ea34;
            case 0x19EA38u: goto label_19ea38;
            case 0x19EA3Cu: goto label_19ea3c;
            case 0x19EA40u: goto label_19ea40;
            case 0x19EA44u: goto label_19ea44;
            case 0x19EA48u: goto label_19ea48;
            case 0x19EA4Cu: goto label_19ea4c;
            case 0x19EA50u: goto label_19ea50;
            case 0x19EA54u: goto label_19ea54;
            case 0x19EA58u: goto label_19ea58;
            case 0x19EA5Cu: goto label_19ea5c;
            case 0x19EA60u: goto label_19ea60;
            case 0x19EA64u: goto label_19ea64;
            case 0x19EA68u: goto label_19ea68;
            case 0x19EA6Cu: goto label_19ea6c;
            case 0x19EA70u: goto label_19ea70;
            case 0x19EA74u: goto label_19ea74;
            case 0x19EA78u: goto label_19ea78;
            case 0x19EA7Cu: goto label_19ea7c;
            case 0x19EA80u: goto label_19ea80;
            case 0x19EA84u: goto label_19ea84;
            case 0x19EA88u: goto label_19ea88;
            case 0x19EA8Cu: goto label_19ea8c;
            case 0x19EA90u: goto label_19ea90;
            case 0x19EA94u: goto label_19ea94;
            case 0x19EA98u: goto label_19ea98;
            case 0x19EA9Cu: goto label_19ea9c;
            case 0x19EAA0u: goto label_19eaa0;
            case 0x19EAA4u: goto label_19eaa4;
            case 0x19EAA8u: goto label_19eaa8;
            case 0x19EAACu: goto label_19eaac;
            case 0x19EAB0u: goto label_19eab0;
            case 0x19EAB4u: goto label_19eab4;
            case 0x19EAB8u: goto label_19eab8;
            case 0x19EABCu: goto label_19eabc;
            case 0x19EAC0u: goto label_19eac0;
            case 0x19EAC4u: goto label_19eac4;
            case 0x19EAC8u: goto label_19eac8;
            case 0x19EACCu: goto label_19eacc;
            case 0x19EAD0u: goto label_19ead0;
            case 0x19EAD4u: goto label_19ead4;
            case 0x19EAD8u: goto label_19ead8;
            case 0x19EADCu: goto label_19eadc;
            case 0x19EAE0u: goto label_19eae0;
            case 0x19EAE4u: goto label_19eae4;
            case 0x19EAE8u: goto label_19eae8;
            case 0x19EAECu: goto label_19eaec;
            case 0x19EAF0u: goto label_19eaf0;
            case 0x19EAF4u: goto label_19eaf4;
            case 0x19EAF8u: goto label_19eaf8;
            case 0x19EAFCu: goto label_19eafc;
            case 0x19EB00u: goto label_19eb00;
            case 0x19EB04u: goto label_19eb04;
            case 0x19EB08u: goto label_19eb08;
            case 0x19EB0Cu: goto label_19eb0c;
            case 0x19EB10u: goto label_19eb10;
            case 0x19EB14u: goto label_19eb14;
            case 0x19EB18u: goto label_19eb18;
            case 0x19EB1Cu: goto label_19eb1c;
            case 0x19EB20u: goto label_19eb20;
            case 0x19EB24u: goto label_19eb24;
            case 0x19EB28u: goto label_19eb28;
            case 0x19EB2Cu: goto label_19eb2c;
            case 0x19EB30u: goto label_19eb30;
            case 0x19EB34u: goto label_19eb34;
            case 0x19EB38u: goto label_19eb38;
            case 0x19EB3Cu: goto label_19eb3c;
            case 0x19EB40u: goto label_19eb40;
            case 0x19EB44u: goto label_19eb44;
            case 0x19EB48u: goto label_19eb48;
            case 0x19EB4Cu: goto label_19eb4c;
            case 0x19EB50u: goto label_19eb50;
            case 0x19EB54u: goto label_19eb54;
            case 0x19EB58u: goto label_19eb58;
            case 0x19EB5Cu: goto label_19eb5c;
            case 0x19EB60u: goto label_19eb60;
            case 0x19EB64u: goto label_19eb64;
            case 0x19EB68u: goto label_19eb68;
            case 0x19EB6Cu: goto label_19eb6c;
            case 0x19EB70u: goto label_19eb70;
            case 0x19EB74u: goto label_19eb74;
            case 0x19EB78u: goto label_19eb78;
            case 0x19EB7Cu: goto label_19eb7c;
            case 0x19EB80u: goto label_19eb80;
            case 0x19EB84u: goto label_19eb84;
            case 0x19EB88u: goto label_19eb88;
            case 0x19EB8Cu: goto label_19eb8c;
            case 0x19EB90u: goto label_19eb90;
            case 0x19EB94u: goto label_19eb94;
            case 0x19EB98u: goto label_19eb98;
            case 0x19EB9Cu: goto label_19eb9c;
            case 0x19EBA0u: goto label_19eba0;
            case 0x19EBA4u: goto label_19eba4;
            case 0x19EBA8u: goto label_19eba8;
            case 0x19EBACu: goto label_19ebac;
            case 0x19EBB0u: goto label_19ebb0;
            case 0x19EBB4u: goto label_19ebb4;
            case 0x19EBB8u: goto label_19ebb8;
            case 0x19EBBCu: goto label_19ebbc;
            case 0x19EBC0u: goto label_19ebc0;
            case 0x19EBC4u: goto label_19ebc4;
            case 0x19EBC8u: goto label_19ebc8;
            case 0x19EBCCu: goto label_19ebcc;
            case 0x19EBD0u: goto label_19ebd0;
            case 0x19EBD4u: goto label_19ebd4;
            case 0x19EBD8u: goto label_19ebd8;
            case 0x19EBDCu: goto label_19ebdc;
            case 0x19EBE0u: goto label_19ebe0;
            case 0x19EBE4u: goto label_19ebe4;
            case 0x19EBE8u: goto label_19ebe8;
            case 0x19EBECu: goto label_19ebec;
            case 0x19EBF0u: goto label_19ebf0;
            case 0x19EBF4u: goto label_19ebf4;
            case 0x19EBF8u: goto label_19ebf8;
            case 0x19EBFCu: goto label_19ebfc;
            case 0x19EC00u: goto label_19ec00;
            case 0x19EC04u: goto label_19ec04;
            case 0x19EC08u: goto label_19ec08;
            case 0x19EC0Cu: goto label_19ec0c;
            case 0x19EC10u: goto label_19ec10;
            case 0x19EC14u: goto label_19ec14;
            case 0x19EC18u: goto label_19ec18;
            case 0x19EC1Cu: goto label_19ec1c;
            case 0x19EC20u: goto label_19ec20;
            case 0x19EC24u: goto label_19ec24;
            case 0x19EC28u: goto label_19ec28;
            case 0x19EC2Cu: goto label_19ec2c;
            case 0x19EC30u: goto label_19ec30;
            case 0x19EC34u: goto label_19ec34;
            case 0x19EC38u: goto label_19ec38;
            case 0x19EC3Cu: goto label_19ec3c;
            case 0x19EC40u: goto label_19ec40;
            case 0x19EC44u: goto label_19ec44;
            case 0x19EC48u: goto label_19ec48;
            case 0x19EC4Cu: goto label_19ec4c;
            case 0x19EC50u: goto label_19ec50;
            case 0x19EC54u: goto label_19ec54;
            case 0x19EC58u: goto label_19ec58;
            case 0x19EC5Cu: goto label_19ec5c;
            case 0x19EC60u: goto label_19ec60;
            case 0x19EC64u: goto label_19ec64;
            case 0x19EC68u: goto label_19ec68;
            case 0x19EC6Cu: goto label_19ec6c;
            case 0x19EC70u: goto label_19ec70;
            case 0x19EC74u: goto label_19ec74;
            case 0x19EC78u: goto label_19ec78;
            case 0x19EC7Cu: goto label_19ec7c;
            case 0x19EC80u: goto label_19ec80;
            case 0x19EC84u: goto label_19ec84;
            case 0x19EC88u: goto label_19ec88;
            case 0x19EC8Cu: goto label_19ec8c;
            case 0x19EC90u: goto label_19ec90;
            case 0x19EC94u: goto label_19ec94;
            case 0x19EC98u: goto label_19ec98;
            case 0x19EC9Cu: goto label_19ec9c;
            case 0x19ECA0u: goto label_19eca0;
            case 0x19ECA4u: goto label_19eca4;
            case 0x19ECA8u: goto label_19eca8;
            case 0x19ECACu: goto label_19ecac;
            case 0x19ECB0u: goto label_19ecb0;
            case 0x19ECB4u: goto label_19ecb4;
            case 0x19ECB8u: goto label_19ecb8;
            case 0x19ECBCu: goto label_19ecbc;
            case 0x19ECC0u: goto label_19ecc0;
            case 0x19ECC4u: goto label_19ecc4;
            case 0x19ECC8u: goto label_19ecc8;
            case 0x19ECCCu: goto label_19eccc;
            case 0x19ECD0u: goto label_19ecd0;
            case 0x19ECD4u: goto label_19ecd4;
            case 0x19ECD8u: goto label_19ecd8;
            case 0x19ECDCu: goto label_19ecdc;
            case 0x19ECE0u: goto label_19ece0;
            case 0x19ECE4u: goto label_19ece4;
            case 0x19ECE8u: goto label_19ece8;
            case 0x19ECECu: goto label_19ecec;
            case 0x19ECF0u: goto label_19ecf0;
            case 0x19ECF4u: goto label_19ecf4;
            case 0x19ECF8u: goto label_19ecf8;
            case 0x19ECFCu: goto label_19ecfc;
            case 0x19ED00u: goto label_19ed00;
            case 0x19ED04u: goto label_19ed04;
            case 0x19ED08u: goto label_19ed08;
            case 0x19ED0Cu: goto label_19ed0c;
            case 0x19ED10u: goto label_19ed10;
            case 0x19ED14u: goto label_19ed14;
            case 0x19ED18u: goto label_19ed18;
            case 0x19ED1Cu: goto label_19ed1c;
            case 0x19ED20u: goto label_19ed20;
            case 0x19ED24u: goto label_19ed24;
            case 0x19ED28u: goto label_19ed28;
            case 0x19ED2Cu: goto label_19ed2c;
            case 0x19ED30u: goto label_19ed30;
            case 0x19ED34u: goto label_19ed34;
            case 0x19ED38u: goto label_19ed38;
            default: break;
        }
        return;
    }
label_fallthrough_0x19ed34:
    ctx->pc = 0x19ED3Cu;
}

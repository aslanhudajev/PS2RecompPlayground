#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En1_01Move
// Address: 0x1e8e20 - 0x1e9740
void En1_01Move_0x1e8e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En1_01Move_0x1e8e20");
#endif

    ctx->pc = 0x1e8e20u;

label_1e8e20:
    // 0x1e8e20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e8e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e8e24:
    // 0x1e8e24: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e8e28:
    // 0x1e8e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e8e2c:
    // 0x1e8e2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e8e2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e8e30:
    // 0x1e8e30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8e34:
    // 0x1e8e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8e38:
    // 0x1e8e38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8e3c:
    // 0x1e8e3c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1e8e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8e40:
    // 0x1e8e40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8e44:
    // 0x1e8e44: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1e8e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8e48:
    // 0x1e8e48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e8e48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e8e4c:
    // 0x1e8e4c: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1e8e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1e8e50:
    // 0x1e8e50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e8e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8e54:
    // 0x1e8e54: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1e8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8e58:
    // 0x1e8e58: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e8e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8e5c:
    // 0x1e8e5c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e8e5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e8e60:
    // 0x1e8e60: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1e8e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1e8e64:
    // 0x1e8e64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8e68:
    // 0x1e8e68: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1e8e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8e6c:
    // 0x1e8e6c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e8e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8e70:
    // 0x1e8e70: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e8e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e8e74:
    // 0x1e8e74: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1e8e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1e8e78:
    // 0x1e8e78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8e7c:
    // 0x1e8e7c: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1e8e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8e80:
    // 0x1e8e80: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1e8e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8e84:
    // 0x1e8e84: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e8e84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e8e88:
    // 0x1e8e88: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1e8e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1e8e8c:
    // 0x1e8e8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8e90:
    // 0x1e8e90: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1e8e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8e94:
    // 0x1e8e94: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e8e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8e98:
    // 0x1e8e98: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e8e98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e8e9c:
    // 0x1e8e9c: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1e8e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1e8ea0:
    // 0x1e8ea0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8ea4:
    // 0x1e8ea4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e8ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8ea8:
    // 0x1e8ea8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8eac:
    // 0x1e8eac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1e8eb0:
    if (ctx->pc == 0x1E8EB0u) {
        ctx->pc = 0x1E8EB0u;
            // 0x1e8eb0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1E8EB4u;
        goto label_1e8eb4;
    }
    ctx->pc = 0x1E8EACu;
    {
        const bool branch_taken_0x1e8eac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8EACu;
            // 0x1e8eb0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8eac) {
            ctx->pc = 0x1E8ED0u;
            goto label_1e8ed0;
        }
    }
    ctx->pc = 0x1E8EB4u;
label_1e8eb4:
    // 0x1e8eb4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e8eb8:
    // 0x1e8eb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e8eb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e8ebc:
    // 0x1e8ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8ec0:
    // 0x1e8ec0: 0x0  nop
    ctx->pc = 0x1e8ec0u;
    // NOP
label_1e8ec4:
    // 0x1e8ec4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e8ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e8ec8:
    // 0x1e8ec8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e8ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1e8ecc:
    // 0x1e8ecc: 0x0  nop
    ctx->pc = 0x1e8eccu;
    // NOP
label_1e8ed0:
    // 0x1e8ed0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e8ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8ed4:
    // 0x1e8ed4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e8ed8:
    // 0x1e8ed8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e8ed8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e8edc:
    // 0x1e8edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8ee0:
    // 0x1e8ee0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1e8ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8ee4:
    // 0x1e8ee4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e8ee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8ee8:
    // 0x1e8ee8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e8eec:
    if (ctx->pc == 0x1E8EECu) {
        ctx->pc = 0x1E8EECu;
            // 0x1e8eec: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1E8EF0u;
        goto label_1e8ef0;
    }
    ctx->pc = 0x1E8EE8u;
    {
        const bool branch_taken_0x1e8ee8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8EE8u;
            // 0x1e8eec: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ee8) {
            ctx->pc = 0x1E8F08u;
            goto label_1e8f08;
        }
    }
    ctx->pc = 0x1E8EF0u;
label_1e8ef0:
    // 0x1e8ef0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e8ef4:
    // 0x1e8ef4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e8ef4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e8ef8:
    // 0x1e8ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8efc:
    // 0x1e8efc: 0x0  nop
    ctx->pc = 0x1e8efcu;
    // NOP
label_1e8f00:
    // 0x1e8f00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e8f00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e8f04:
    // 0x1e8f04: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e8f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e8f08:
    // 0x1e8f08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e8f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8f0c:
    // 0x1e8f0c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e8f10:
    // 0x1e8f10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e8f10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e8f14:
    // 0x1e8f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8f18:
    // 0x1e8f18: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e8f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8f1c:
    // 0x1e8f1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8f1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8f20:
    // 0x1e8f20: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e8f24:
    if (ctx->pc == 0x1E8F24u) {
        ctx->pc = 0x1E8F24u;
            // 0x1e8f24: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E8F28u;
        goto label_1e8f28;
    }
    ctx->pc = 0x1E8F20u;
    {
        const bool branch_taken_0x1e8f20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8F20u;
            // 0x1e8f24: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f20) {
            ctx->pc = 0x1E8F40u;
            goto label_1e8f40;
        }
    }
    ctx->pc = 0x1E8F28u;
label_1e8f28:
    // 0x1e8f28: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e8f2c:
    // 0x1e8f2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e8f2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e8f30:
    // 0x1e8f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8f34:
    // 0x1e8f34: 0x0  nop
    ctx->pc = 0x1e8f34u;
    // NOP
label_1e8f38:
    // 0x1e8f38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e8f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e8f3c:
    // 0x1e8f3c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e8f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e8f40:
    // 0x1e8f40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8f44:
    // 0x1e8f44: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e8f48:
    // 0x1e8f48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e8f48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e8f4c:
    // 0x1e8f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8f50:
    // 0x1e8f50: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e8f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8f54:
    // 0x1e8f54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e8f54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8f58:
    // 0x1e8f58: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e8f5c:
    if (ctx->pc == 0x1E8F5Cu) {
        ctx->pc = 0x1E8F5Cu;
            // 0x1e8f5c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E8F60u;
        goto label_1e8f60;
    }
    ctx->pc = 0x1E8F58u;
    {
        const bool branch_taken_0x1e8f58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8F58u;
            // 0x1e8f5c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f58) {
            ctx->pc = 0x1E8F78u;
            goto label_1e8f78;
        }
    }
    ctx->pc = 0x1E8F60u;
label_1e8f60:
    // 0x1e8f60: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e8f64:
    // 0x1e8f64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e8f64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e8f68:
    // 0x1e8f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8f6c:
    // 0x1e8f6c: 0x0  nop
    ctx->pc = 0x1e8f6cu;
    // NOP
label_1e8f70:
    // 0x1e8f70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e8f70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e8f74:
    // 0x1e8f74: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e8f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e8f78:
    // 0x1e8f78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e8f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8f7c:
    // 0x1e8f7c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e8f80:
    // 0x1e8f80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e8f80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e8f84:
    // 0x1e8f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8f88:
    // 0x1e8f88: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1e8f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8f8c:
    // 0x1e8f8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8f90:
    // 0x1e8f90: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e8f94:
    if (ctx->pc == 0x1E8F94u) {
        ctx->pc = 0x1E8F94u;
            // 0x1e8f94: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1E8F98u;
        goto label_1e8f98;
    }
    ctx->pc = 0x1E8F90u;
    {
        const bool branch_taken_0x1e8f90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8F90u;
            // 0x1e8f94: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f90) {
            ctx->pc = 0x1E8FB0u;
            goto label_1e8fb0;
        }
    }
    ctx->pc = 0x1E8F98u;
label_1e8f98:
    // 0x1e8f98: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e8f9c:
    // 0x1e8f9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e8f9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e8fa0:
    // 0x1e8fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8fa4:
    // 0x1e8fa4: 0x0  nop
    ctx->pc = 0x1e8fa4u;
    // NOP
label_1e8fa8:
    // 0x1e8fa8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e8fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e8fac:
    // 0x1e8fac: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e8facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e8fb0:
    // 0x1e8fb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e8fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8fb4:
    // 0x1e8fb4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e8fb8:
    // 0x1e8fb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e8fb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e8fbc:
    // 0x1e8fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8fc0:
    // 0x1e8fc0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1e8fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8fc4:
    // 0x1e8fc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e8fc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8fc8:
    // 0x1e8fc8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e8fcc:
    if (ctx->pc == 0x1E8FCCu) {
        ctx->pc = 0x1E8FCCu;
            // 0x1e8fcc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1E8FD0u;
        goto label_1e8fd0;
    }
    ctx->pc = 0x1E8FC8u;
    {
        const bool branch_taken_0x1e8fc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FC8u;
            // 0x1e8fcc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fc8) {
            ctx->pc = 0x1E8FE8u;
            goto label_1e8fe8;
        }
    }
    ctx->pc = 0x1E8FD0u;
label_1e8fd0:
    // 0x1e8fd0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e8fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e8fd4:
    // 0x1e8fd4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e8fd4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e8fd8:
    // 0x1e8fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8fdc:
    // 0x1e8fdc: 0x0  nop
    ctx->pc = 0x1e8fdcu;
    // NOP
label_1e8fe0:
    // 0x1e8fe0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e8fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e8fe4:
    // 0x1e8fe4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e8fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e8fe8:
    // 0x1e8fe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8fec:
    // 0x1e8fec: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1e8fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1e8ff0:
    // 0x1e8ff0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1e8ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e8ff4:
    // 0x1e8ff4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1e8ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e8ff8:
    // 0x1e8ff8: 0xc07a5d0  jal         func_1E9740
label_1e8ffc:
    if (ctx->pc == 0x1E8FFCu) {
        ctx->pc = 0x1E8FFCu;
            // 0x1e8ffc: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x1E9000u;
        goto label_1e9000;
    }
    ctx->pc = 0x1E8FF8u;
    SET_GPR_U32(ctx, 31, 0x1E9000u);
    ctx->pc = 0x1E8FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FF8u;
            // 0x1e8ffc: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9740u;
    if (runtime->hasFunction(0x1E9740u)) {
        auto targetFn = runtime->lookupFunction(0x1E9740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9000u; }
        if (ctx->pc != 0x1E9000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1e9740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9000u; }
        if (ctx->pc != 0x1E9000u) { return; }
    }
    ctx->pc = 0x1E9000u;
label_1e9000:
    // 0x1e9000: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1e9000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e9004:
    // 0x1e9004: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1e9004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1e9008:
    // 0x1e9008: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1e9008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e900c:
    // 0x1e900c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e900cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e9010:
    // 0x1e9010: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1e9010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1e9014:
    // 0x1e9014: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x1e9014u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1e9018:
    // 0x1e9018: 0x1020012b  beqz        $at, . + 4 + (0x12B << 2)
label_1e901c:
    if (ctx->pc == 0x1E901Cu) {
        ctx->pc = 0x1E901Cu;
            // 0x1e901c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1E9020u;
        goto label_1e9020;
    }
    ctx->pc = 0x1E9018u;
    {
        const bool branch_taken_0x1e9018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E901Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9018u;
            // 0x1e901c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9018) {
            ctx->pc = 0x1E94C8u;
            goto label_1e94c8;
        }
    }
    ctx->pc = 0x1E9020u;
label_1e9020:
    // 0x1e9020: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e9024:
    // 0x1e9024: 0x24632f40  addiu       $v1, $v1, 0x2F40
    ctx->pc = 0x1e9024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12096));
label_1e9028:
    // 0x1e9028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e902c:
    // 0x1e902c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e9030:
    // 0x1e9030: 0x400008  jr          $v0
label_1e9034:
    if (ctx->pc == 0x1E9034u) {
        ctx->pc = 0x1E9038u;
        goto label_1e9038;
    }
    ctx->pc = 0x1E9030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9038u: goto label_1e9038;
            case 0x1E90E0u: goto label_1e90e0;
            case 0x1E9168u: goto label_1e9168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9038u;
label_1e9038:
    // 0x1e9038: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e903c:
    // 0x1e903c: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x1e903cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
label_1e9040:
    // 0x1e9040: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1e9044:
    if (ctx->pc == 0x1E9044u) {
        ctx->pc = 0x1E9044u;
            // 0x1e9044: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->pc = 0x1E9048u;
        goto label_1e9048;
    }
    ctx->pc = 0x1E9040u;
    {
        const bool branch_taken_0x1e9040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9040u;
            // 0x1e9044: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9040) {
            ctx->pc = 0x1E9070u;
            goto label_1e9070;
        }
    }
    ctx->pc = 0x1E9048u;
label_1e9048:
    // 0x1e9048: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e904c:
    if (ctx->pc == 0x1E904Cu) {
        ctx->pc = 0x1E9050u;
        goto label_1e9050;
    }
    ctx->pc = 0x1E9048u;
    {
        const bool branch_taken_0x1e9048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9048) {
            ctx->pc = 0x1E9070u;
            goto label_1e9070;
        }
    }
    ctx->pc = 0x1E9050u;
label_1e9050:
    // 0x1e9050: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e9050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9054:
    // 0x1e9054: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x1e9054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_1e9058:
    // 0x1e9058: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1e9058u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
label_1e905c:
    // 0x1e905c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e905cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e9060:
    // 0x1e9060: 0x0  nop
    ctx->pc = 0x1e9060u;
    // NOP
label_1e9064:
    // 0x1e9064: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e9064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e9068:
    // 0x1e9068: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e9068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1e906c:
    // 0x1e906c: 0x0  nop
    ctx->pc = 0x1e906cu;
    // NOP
label_1e9070:
    // 0x1e9070: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e9070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e9074:
    // 0x1e9074: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1e9074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e9078:
    // 0x1e9078: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1e907c:
    if (ctx->pc == 0x1E907Cu) {
        ctx->pc = 0x1E907Cu;
            // 0x1e907c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x1E9080u;
        goto label_1e9080;
    }
    ctx->pc = 0x1E9078u;
    {
        const bool branch_taken_0x1e9078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E907Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9078u;
            // 0x1e907c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9078) {
            ctx->pc = 0x1E90B8u;
            goto label_1e90b8;
        }
    }
    ctx->pc = 0x1E9080u;
label_1e9080:
    // 0x1e9080: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e9084:
    if (ctx->pc == 0x1E9084u) {
        ctx->pc = 0x1E9088u;
        goto label_1e9088;
    }
    ctx->pc = 0x1E9080u;
    {
        const bool branch_taken_0x1e9080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e9080) {
            ctx->pc = 0x1E9090u;
            goto label_1e9090;
        }
    }
    ctx->pc = 0x1E9088u;
label_1e9088:
    // 0x1e9088: 0x1000010f  b           . + 4 + (0x10F << 2)
label_1e908c:
    if (ctx->pc == 0x1E908Cu) {
        ctx->pc = 0x1E9090u;
        goto label_1e9090;
    }
    ctx->pc = 0x1E9088u;
    {
        const bool branch_taken_0x1e9088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9088) {
            ctx->pc = 0x1E94C8u;
            goto label_1e94c8;
        }
    }
    ctx->pc = 0x1E9090u;
label_1e9090:
    // 0x1e9090: 0xc065d00  jal         func_197400
label_1e9094:
    if (ctx->pc == 0x1E9094u) {
        ctx->pc = 0x1E9098u;
        goto label_1e9098;
    }
    ctx->pc = 0x1E9090u;
    SET_GPR_U32(ctx, 31, 0x1E9098u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9098u; }
        if (ctx->pc != 0x1E9098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9098u; }
        if (ctx->pc != 0x1E9098u) { return; }
    }
    ctx->pc = 0x1E9098u;
label_1e9098:
    // 0x1e9098: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1e9098u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e909c:
    // 0x1e909c: 0x1420010a  bnez        $at, . + 4 + (0x10A << 2)
label_1e90a0:
    if (ctx->pc == 0x1E90A0u) {
        ctx->pc = 0x1E90A4u;
        goto label_1e90a4;
    }
    ctx->pc = 0x1E909Cu;
    {
        const bool branch_taken_0x1e909c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e909c) {
            ctx->pc = 0x1E94C8u;
            goto label_1e94c8;
        }
    }
    ctx->pc = 0x1E90A4u;
label_1e90a4:
    // 0x1e90a4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e90a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e90a8:
    // 0x1e90a8: 0xc06560c  jal         func_195830
label_1e90ac:
    if (ctx->pc == 0x1E90ACu) {
        ctx->pc = 0x1E90ACu;
            // 0x1e90ac: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1E90B0u;
        goto label_1e90b0;
    }
    ctx->pc = 0x1E90A8u;
    SET_GPR_U32(ctx, 31, 0x1E90B0u);
    ctx->pc = 0x1E90ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90A8u;
            // 0x1e90ac: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90B0u; }
        if (ctx->pc != 0x1E90B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90B0u; }
        if (ctx->pc != 0x1E90B0u) { return; }
    }
    ctx->pc = 0x1E90B0u;
label_1e90b0:
    // 0x1e90b0: 0x10000105  b           . + 4 + (0x105 << 2)
label_1e90b4:
    if (ctx->pc == 0x1E90B4u) {
        ctx->pc = 0x1E90B8u;
        goto label_1e90b8;
    }
    ctx->pc = 0x1E90B0u;
    {
        const bool branch_taken_0x1e90b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e90b0) {
            ctx->pc = 0x1E94C8u;
            goto label_1e94c8;
        }
    }
    ctx->pc = 0x1E90B8u;
label_1e90b8:
    // 0x1e90b8: 0xc065d00  jal         func_197400
label_1e90bc:
    if (ctx->pc == 0x1E90BCu) {
        ctx->pc = 0x1E90C0u;
        goto label_1e90c0;
    }
    ctx->pc = 0x1E90B8u;
    SET_GPR_U32(ctx, 31, 0x1E90C0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90C0u; }
        if (ctx->pc != 0x1E90C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90C0u; }
        if (ctx->pc != 0x1E90C0u) { return; }
    }
    ctx->pc = 0x1E90C0u;
label_1e90c0:
    // 0x1e90c0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1e90c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e90c4:
    // 0x1e90c4: 0x14200100  bnez        $at, . + 4 + (0x100 << 2)
label_1e90c8:
    if (ctx->pc == 0x1E90C8u) {
        ctx->pc = 0x1E90CCu;
        goto label_1e90cc;
    }
    ctx->pc = 0x1E90C4u;
    {
        const bool branch_taken_0x1e90c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e90c4) {
            ctx->pc = 0x1E94C8u;
            goto label_1e94c8;
        }
    }
    ctx->pc = 0x1E90CCu;
label_1e90cc:
    // 0x1e90cc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e90ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e90d0:
    // 0x1e90d0: 0xc06560c  jal         func_195830
label_1e90d4:
    if (ctx->pc == 0x1E90D4u) {
        ctx->pc = 0x1E90D4u;
            // 0x1e90d4: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1E90D8u;
        goto label_1e90d8;
    }
    ctx->pc = 0x1E90D0u;
    SET_GPR_U32(ctx, 31, 0x1E90D8u);
    ctx->pc = 0x1E90D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90D0u;
            // 0x1e90d4: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90D8u; }
        if (ctx->pc != 0x1E90D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90D8u; }
        if (ctx->pc != 0x1E90D8u) { return; }
    }
    ctx->pc = 0x1E90D8u;
label_1e90d8:
    // 0x1e90d8: 0x100000fb  b           . + 4 + (0xFB << 2)
label_1e90dc:
    if (ctx->pc == 0x1E90DCu) {
        ctx->pc = 0x1E90E0u;
        goto label_1e90e0;
    }
    ctx->pc = 0x1E90D8u;
    {
        const bool branch_taken_0x1e90d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e90d8) {
            ctx->pc = 0x1E94C8u;
            goto label_1e94c8;
        }
    }
    ctx->pc = 0x1E90E0u;
label_1e90e0:
    // 0x1e90e0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e90e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e90e4:
    // 0x1e90e4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1e90e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e90e8:
    // 0x1e90e8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1e90ec:
    if (ctx->pc == 0x1E90ECu) {
        ctx->pc = 0x1E90ECu;
            // 0x1e90ec: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x1E90F0u;
        goto label_1e90f0;
    }
    ctx->pc = 0x1E90E8u;
    {
        const bool branch_taken_0x1e90e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E90ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90E8u;
            // 0x1e90ec: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90e8) {
            ctx->pc = 0x1E9128u;
            goto label_1e9128;
        }
    }
    ctx->pc = 0x1E90F0u;
label_1e90f0:
    // 0x1e90f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e90f4:
    if (ctx->pc == 0x1E90F4u) {
        ctx->pc = 0x1E90F8u;
        goto label_1e90f8;
    }
    ctx->pc = 0x1E90F0u;
    {
        const bool branch_taken_0x1e90f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e90f0) {
            ctx->pc = 0x1E9100u;
            goto label_1e9100;
        }
    }
    ctx->pc = 0x1E90F8u;
label_1e90f8:
    // 0x1e90f8: 0x10000013  b           . + 4 + (0x13 << 2)
label_1e90fc:
    if (ctx->pc == 0x1E90FCu) {
        ctx->pc = 0x1E9100u;
        goto label_1e9100;
    }
    ctx->pc = 0x1E90F8u;
    {
        const bool branch_taken_0x1e90f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e90f8) {
            ctx->pc = 0x1E9148u;
            goto label_1e9148;
        }
    }
    ctx->pc = 0x1E9100u;
label_1e9100:
    // 0x1e9100: 0xc065d00  jal         func_197400
label_1e9104:
    if (ctx->pc == 0x1E9104u) {
        ctx->pc = 0x1E9108u;
        goto label_1e9108;
    }
    ctx->pc = 0x1E9100u;
    SET_GPR_U32(ctx, 31, 0x1E9108u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9108u; }
        if (ctx->pc != 0x1E9108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9108u; }
        if (ctx->pc != 0x1E9108u) { return; }
    }
    ctx->pc = 0x1E9108u;
label_1e9108:
    // 0x1e9108: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1e9108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e910c:
    // 0x1e910c: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e9110:
    if (ctx->pc == 0x1E9110u) {
        ctx->pc = 0x1E9114u;
        goto label_1e9114;
    }
    ctx->pc = 0x1E910Cu;
    {
        const bool branch_taken_0x1e910c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e910c) {
            ctx->pc = 0x1E9148u;
            goto label_1e9148;
        }
    }
    ctx->pc = 0x1E9114u;
label_1e9114:
    // 0x1e9114: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e9114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e9118:
    // 0x1e9118: 0xc06560c  jal         func_195830
label_1e911c:
    if (ctx->pc == 0x1E911Cu) {
        ctx->pc = 0x1E911Cu;
            // 0x1e911c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1E9120u;
        goto label_1e9120;
    }
    ctx->pc = 0x1E9118u;
    SET_GPR_U32(ctx, 31, 0x1E9120u);
    ctx->pc = 0x1E911Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9118u;
            // 0x1e911c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9120u; }
        if (ctx->pc != 0x1E9120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9120u; }
        if (ctx->pc != 0x1E9120u) { return; }
    }
    ctx->pc = 0x1E9120u;
label_1e9120:
    // 0x1e9120: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e9124:
    if (ctx->pc == 0x1E9124u) {
        ctx->pc = 0x1E9128u;
        goto label_1e9128;
    }
    ctx->pc = 0x1E9120u;
    {
        const bool branch_taken_0x1e9120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9120) {
            ctx->pc = 0x1E9148u;
            goto label_1e9148;
        }
    }
    ctx->pc = 0x1E9128u;
label_1e9128:
    // 0x1e9128: 0xc065d00  jal         func_197400
label_1e912c:
    if (ctx->pc == 0x1E912Cu) {
        ctx->pc = 0x1E9130u;
        goto label_1e9130;
    }
    ctx->pc = 0x1E9128u;
    SET_GPR_U32(ctx, 31, 0x1E9130u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9130u; }
        if (ctx->pc != 0x1E9130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9130u; }
        if (ctx->pc != 0x1E9130u) { return; }
    }
    ctx->pc = 0x1E9130u;
label_1e9130:
    // 0x1e9130: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1e9130u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e9134:
    // 0x1e9134: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1e9138:
    if (ctx->pc == 0x1E9138u) {
        ctx->pc = 0x1E913Cu;
        goto label_1e913c;
    }
    ctx->pc = 0x1E9134u;
    {
        const bool branch_taken_0x1e9134 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9134) {
            ctx->pc = 0x1E9148u;
            goto label_1e9148;
        }
    }
    ctx->pc = 0x1E913Cu;
label_1e913c:
    // 0x1e913c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e913cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e9140:
    // 0x1e9140: 0xc06560c  jal         func_195830
label_1e9144:
    if (ctx->pc == 0x1E9144u) {
        ctx->pc = 0x1E9144u;
            // 0x1e9144: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1E9148u;
        goto label_1e9148;
    }
    ctx->pc = 0x1E9140u;
    SET_GPR_U32(ctx, 31, 0x1E9148u);
    ctx->pc = 0x1E9144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9140u;
            // 0x1e9144: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9148u; }
        if (ctx->pc != 0x1E9148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9148u; }
        if (ctx->pc != 0x1E9148u) { return; }
    }
    ctx->pc = 0x1E9148u;
label_1e9148:
    // 0x1e9148: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1e9148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1e914c:
    // 0x1e914c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1e914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9150:
    // 0x1e9150: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e9150u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e9154:
    // 0x1e9154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9158:
    // 0x1e9158: 0x0  nop
    ctx->pc = 0x1e9158u;
    // NOP
label_1e915c:
    // 0x1e915c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e915cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e9160:
    // 0x1e9160: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_1e9164:
    if (ctx->pc == 0x1E9164u) {
        ctx->pc = 0x1E9164u;
            // 0x1e9164: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1E9168u;
        goto label_1e9168;
    }
    ctx->pc = 0x1E9160u;
    {
        const bool branch_taken_0x1e9160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9160u;
            // 0x1e9164: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9160) {
            ctx->pc = 0x1E94C8u;
            goto label_1e94c8;
        }
    }
    ctx->pc = 0x1E9168u;
label_1e9168:
    // 0x1e9168: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1e9168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e916c:
    // 0x1e916c: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
label_1e9170:
    if (ctx->pc == 0x1E9170u) {
        ctx->pc = 0x1E9174u;
        goto label_1e9174;
    }
    ctx->pc = 0x1E916Cu;
    {
        const bool branch_taken_0x1e916c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e916c) {
            ctx->pc = 0x1E92D0u;
            goto label_1e92d0;
        }
    }
    ctx->pc = 0x1E9174u;
label_1e9174:
    // 0x1e9174: 0xc040d72  jal         func_1035C8
label_1e9178:
    if (ctx->pc == 0x1E9178u) {
        ctx->pc = 0x1E9178u;
            // 0x1e9178: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1E917Cu;
        goto label_1e917c;
    }
    ctx->pc = 0x1E9174u;
    SET_GPR_U32(ctx, 31, 0x1E917Cu);
    ctx->pc = 0x1E9178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9174u;
            // 0x1e9178: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E917Cu; }
        if (ctx->pc != 0x1E917Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E917Cu; }
        if (ctx->pc != 0x1E917Cu) { return; }
    }
    ctx->pc = 0x1E917Cu;
label_1e917c:
    // 0x1e917c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9180:
    // 0x1e9180: 0xc040078  jal         func_1001E0
label_1e9184:
    if (ctx->pc == 0x1E9184u) {
        ctx->pc = 0x1E9184u;
            // 0x1e9184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9188u;
        goto label_1e9188;
    }
    ctx->pc = 0x1E9180u;
    SET_GPR_U32(ctx, 31, 0x1E9188u);
    ctx->pc = 0x1E9184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9180u;
            // 0x1e9184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9188u; }
        if (ctx->pc != 0x1E9188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9188u; }
        if (ctx->pc != 0x1E9188u) { return; }
    }
    ctx->pc = 0x1E9188u;
label_1e9188:
    // 0x1e9188: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1e918c:
    if (ctx->pc == 0x1E918Cu) {
        ctx->pc = 0x1E9190u;
        goto label_1e9190;
    }
    ctx->pc = 0x1E9188u;
    {
        const bool branch_taken_0x1e9188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9188) {
            ctx->pc = 0x1E91B0u;
            goto label_1e91b0;
        }
    }
    ctx->pc = 0x1E9190u;
label_1e9190:
    // 0x1e9190: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1e9190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9194:
    // 0x1e9194: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1e9194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1e9198:
    // 0x1e9198: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1e9198u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1e919c:
    // 0x1e919c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e919cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e91a0:
    // 0x1e91a0: 0x0  nop
    ctx->pc = 0x1e91a0u;
    // NOP
label_1e91a4:
    // 0x1e91a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e91a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e91a8:
    // 0x1e91a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e91ac:
    if (ctx->pc == 0x1E91ACu) {
        ctx->pc = 0x1E91ACu;
            // 0x1e91ac: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1E91B0u;
        goto label_1e91b0;
    }
    ctx->pc = 0x1E91A8u;
    {
        const bool branch_taken_0x1e91a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E91ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91A8u;
            // 0x1e91ac: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91a8) {
            ctx->pc = 0x1E91B8u;
            goto label_1e91b8;
        }
    }
    ctx->pc = 0x1E91B0u;
label_1e91b0:
    // 0x1e91b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e91b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e91b4:
    // 0x1e91b4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1e91b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1e91b8:
    // 0x1e91b8: 0xc040d72  jal         func_1035C8
label_1e91bc:
    if (ctx->pc == 0x1E91BCu) {
        ctx->pc = 0x1E91BCu;
            // 0x1e91bc: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1E91C0u;
        goto label_1e91c0;
    }
    ctx->pc = 0x1E91B8u;
    SET_GPR_U32(ctx, 31, 0x1E91C0u);
    ctx->pc = 0x1E91BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91B8u;
            // 0x1e91bc: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91C0u; }
        if (ctx->pc != 0x1E91C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91C0u; }
        if (ctx->pc != 0x1E91C0u) { return; }
    }
    ctx->pc = 0x1E91C0u;
label_1e91c0:
    // 0x1e91c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e91c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e91c4:
    // 0x1e91c4: 0xc040078  jal         func_1001E0
label_1e91c8:
    if (ctx->pc == 0x1E91C8u) {
        ctx->pc = 0x1E91C8u;
            // 0x1e91c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E91CCu;
        goto label_1e91cc;
    }
    ctx->pc = 0x1E91C4u;
    SET_GPR_U32(ctx, 31, 0x1E91CCu);
    ctx->pc = 0x1E91C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91C4u;
            // 0x1e91c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91CCu; }
        if (ctx->pc != 0x1E91CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91CCu; }
        if (ctx->pc != 0x1E91CCu) { return; }
    }
    ctx->pc = 0x1E91CCu;
label_1e91cc:
    // 0x1e91cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e91d0:
    if (ctx->pc == 0x1E91D0u) {
        ctx->pc = 0x1E91D4u;
        goto label_1e91d4;
    }
    ctx->pc = 0x1E91CCu;
    {
        const bool branch_taken_0x1e91cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e91cc) {
            ctx->pc = 0x1E91F0u;
            goto label_1e91f0;
        }
    }
    ctx->pc = 0x1E91D4u;
label_1e91d4:
    // 0x1e91d4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e91d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e91d8:
    // 0x1e91d8: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1e91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1e91dc:
    // 0x1e91dc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e91dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e91e0:
    // 0x1e91e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e91e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e91e4:
    // 0x1e91e4: 0x0  nop
    ctx->pc = 0x1e91e4u;
    // NOP
label_1e91e8:
    // 0x1e91e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e91e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e91ec:
    // 0x1e91ec: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1e91ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1e91f0:
    // 0x1e91f0: 0xc040d72  jal         func_1035C8
label_1e91f4:
    if (ctx->pc == 0x1E91F4u) {
        ctx->pc = 0x1E91F4u;
            // 0x1e91f4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1E91F8u;
        goto label_1e91f8;
    }
    ctx->pc = 0x1E91F0u;
    SET_GPR_U32(ctx, 31, 0x1E91F8u);
    ctx->pc = 0x1E91F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91F0u;
            // 0x1e91f4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91F8u; }
        if (ctx->pc != 0x1E91F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91F8u; }
        if (ctx->pc != 0x1E91F8u) { return; }
    }
    ctx->pc = 0x1E91F8u;
label_1e91f8:
    // 0x1e91f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e91f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e91fc:
    // 0x1e91fc: 0xc04008c  jal         func_100230
label_1e9200:
    if (ctx->pc == 0x1E9200u) {
        ctx->pc = 0x1E9200u;
            // 0x1e9200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9204u;
        goto label_1e9204;
    }
    ctx->pc = 0x1E91FCu;
    SET_GPR_U32(ctx, 31, 0x1E9204u);
    ctx->pc = 0x1E9200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91FCu;
            // 0x1e9200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9204u; }
        if (ctx->pc != 0x1E9204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9204u; }
        if (ctx->pc != 0x1E9204u) { return; }
    }
    ctx->pc = 0x1E9204u;
label_1e9204:
    // 0x1e9204: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e9208:
    if (ctx->pc == 0x1E9208u) {
        ctx->pc = 0x1E920Cu;
        goto label_1e920c;
    }
    ctx->pc = 0x1E9204u;
    {
        const bool branch_taken_0x1e9204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9204) {
            ctx->pc = 0x1E9228u;
            goto label_1e9228;
        }
    }
    ctx->pc = 0x1E920Cu;
label_1e920c:
    // 0x1e920c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e920cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9210:
    // 0x1e9210: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1e9210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1e9214:
    // 0x1e9214: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e9214u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e9218:
    // 0x1e9218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e921c:
    // 0x1e921c: 0x0  nop
    ctx->pc = 0x1e921cu;
    // NOP
label_1e9220:
    // 0x1e9220: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e9220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e9224:
    // 0x1e9224: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1e9224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1e9228:
    // 0x1e9228: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e9228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1e922c:
    // 0x1e922c: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1e922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1e9230:
    // 0x1e9230: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e9230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e9234:
    // 0x1e9234: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1e9234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e9238:
    // 0x1e9238: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e9238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e923c:
    // 0x1e923c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e923cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1e9240:
    // 0x1e9240: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1e9240u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e9244:
    // 0x1e9244: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1e9244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1e9248:
    // 0x1e9248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e9248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e924c:
    // 0x1e924c: 0x0  nop
    ctx->pc = 0x1e924cu;
    // NOP
label_1e9250:
    // 0x1e9250: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e9250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e9254:
    // 0x1e9254: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e9254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e9258:
    // 0x1e9258: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e9258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e925c:
    // 0x1e925c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e925cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e9260:
    // 0x1e9260: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1e9260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1e9264:
    // 0x1e9264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9268:
    // 0x1e9268: 0x0  nop
    ctx->pc = 0x1e9268u;
    // NOP
label_1e926c:
    // 0x1e926c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e926cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e9270:
    // 0x1e9270: 0xc04b6ee  jal         func_12DBB8
label_1e9274:
    if (ctx->pc == 0x1E9274u) {
        ctx->pc = 0x1E9274u;
            // 0x1e9274: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x1E9278u;
        goto label_1e9278;
    }
    ctx->pc = 0x1E9270u;
    SET_GPR_U32(ctx, 31, 0x1E9278u);
    ctx->pc = 0x1E9274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9270u;
            // 0x1e9274: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9278u; }
        if (ctx->pc != 0x1E9278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9278u; }
        if (ctx->pc != 0x1E9278u) { return; }
    }
    ctx->pc = 0x1E9278u;
label_1e9278:
    // 0x1e9278: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e927c:
    // 0x1e927c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9280:
    // 0x1e9280: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e9280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9284:
    // 0x1e9284: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e9284u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e9288:
    // 0x1e9288: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e9288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e928c:
    // 0x1e928c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1e9290:
    if (ctx->pc == 0x1E9290u) {
        ctx->pc = 0x1E9290u;
            // 0x1e9290: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1E9294u;
        goto label_1e9294;
    }
    ctx->pc = 0x1E928Cu;
    {
        const bool branch_taken_0x1e928c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E928Cu;
            // 0x1e9290: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e928c) {
            ctx->pc = 0x1E92A0u;
            goto label_1e92a0;
        }
    }
    ctx->pc = 0x1E9294u;
label_1e9294:
    // 0x1e9294: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e9294u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e9298:
    // 0x1e9298: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1e9298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1e929c:
    // 0x1e929c: 0x0  nop
    ctx->pc = 0x1e929cu;
    // NOP
label_1e92a0:
    // 0x1e92a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e92a4:
    // 0x1e92a4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e92a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e92a8:
    // 0x1e92a8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e92a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e92ac:
    // 0x1e92ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e92acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e92b0:
    // 0x1e92b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e92b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e92b4:
    // 0x1e92b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1e92b8:
    if (ctx->pc == 0x1E92B8u) {
        ctx->pc = 0x1E92B8u;
            // 0x1e92b8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1E92BCu;
        goto label_1e92bc;
    }
    ctx->pc = 0x1E92B4u;
    {
        const bool branch_taken_0x1e92b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E92B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92B4u;
            // 0x1e92b8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92b4) {
            ctx->pc = 0x1E92C8u;
            goto label_1e92c8;
        }
    }
    ctx->pc = 0x1E92BCu;
label_1e92bc:
    // 0x1e92bc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e92bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e92c0:
    // 0x1e92c0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1e92c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1e92c4:
    // 0x1e92c4: 0x0  nop
    ctx->pc = 0x1e92c4u;
    // NOP
label_1e92c8:
    // 0x1e92c8: 0x1000007f  b           . + 4 + (0x7F << 2)
label_1e92cc:
    if (ctx->pc == 0x1E92CCu) {
        ctx->pc = 0x1E92CCu;
            // 0x1e92cc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1E92D0u;
        goto label_1e92d0;
    }
    ctx->pc = 0x1E92C8u;
    {
        const bool branch_taken_0x1e92c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92C8u;
            // 0x1e92cc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92c8) {
            ctx->pc = 0x1E94C8u;
            goto label_1e94c8;
        }
    }
    ctx->pc = 0x1E92D0u;
label_1e92d0:
    // 0x1e92d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e92d4:
    // 0x1e92d4: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
label_1e92d8:
    if (ctx->pc == 0x1E92D8u) {
        ctx->pc = 0x1E92D8u;
            // 0x1e92d8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1E92DCu;
        goto label_1e92dc;
    }
    ctx->pc = 0x1E92D4u;
    {
        const bool branch_taken_0x1e92d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E92D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92D4u;
            // 0x1e92d8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92d4) {
            ctx->pc = 0x1E9400u;
            goto label_1e9400;
        }
    }
    ctx->pc = 0x1E92DCu;
label_1e92dc:
    // 0x1e92dc: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1e92dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e92e0:
    // 0x1e92e0: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1e92e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1e92e4:
    // 0x1e92e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e92e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e92e8:
    // 0x1e92e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e92e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e92ec:
    // 0x1e92ec: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1e92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e92f0:
    // 0x1e92f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e92f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1e92f4:
    // 0x1e92f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e92f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e92f8:
    // 0x1e92f8: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1e92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1e92fc:
    // 0x1e92fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e92fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e9300:
    // 0x1e9300: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e9300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e9304:
    // 0x1e9304: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e9304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e9308:
    // 0x1e9308: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e9308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e930c:
    // 0x1e930c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1e930cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1e9310:
    // 0x1e9310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9314:
    // 0x1e9314: 0x0  nop
    ctx->pc = 0x1e9314u;
    // NOP
label_1e9318:
    // 0x1e9318: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e9318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e931c:
    // 0x1e931c: 0xc04b6ee  jal         func_12DBB8
label_1e9320:
    if (ctx->pc == 0x1E9320u) {
        ctx->pc = 0x1E9320u;
            // 0x1e9320: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x1E9324u;
        goto label_1e9324;
    }
    ctx->pc = 0x1E931Cu;
    SET_GPR_U32(ctx, 31, 0x1E9324u);
    ctx->pc = 0x1E9320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E931Cu;
            // 0x1e9320: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9324u; }
        if (ctx->pc != 0x1E9324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9324u; }
        if (ctx->pc != 0x1E9324u) { return; }
    }
    ctx->pc = 0x1E9324u;
label_1e9324:
    // 0x1e9324: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9328:
    // 0x1e9328: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e9328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e932c:
    // 0x1e932c: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9330:
    // 0x1e9330: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e9330u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e9334:
    // 0x1e9334: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e9334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9338:
    // 0x1e9338: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e933c:
    if (ctx->pc == 0x1E933Cu) {
        ctx->pc = 0x1E933Cu;
            // 0x1e933c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1E9340u;
        goto label_1e9340;
    }
    ctx->pc = 0x1E9338u;
    {
        const bool branch_taken_0x1e9338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9338u;
            // 0x1e933c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9338) {
            ctx->pc = 0x1E9348u;
            goto label_1e9348;
        }
    }
    ctx->pc = 0x1E9340u;
label_1e9340:
    // 0x1e9340: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e9340u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e9344:
    // 0x1e9344: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1e9344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1e9348:
    // 0x1e9348: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e934c:
    // 0x1e934c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9350:
    // 0x1e9350: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e9350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9354:
    // 0x1e9354: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e9354u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e9358:
    // 0x1e9358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e9358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e935c:
    // 0x1e935c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1e9360:
    if (ctx->pc == 0x1E9360u) {
        ctx->pc = 0x1E9360u;
            // 0x1e9360: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1E9364u;
        goto label_1e9364;
    }
    ctx->pc = 0x1E935Cu;
    {
        const bool branch_taken_0x1e935c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E935Cu;
            // 0x1e9360: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e935c) {
            ctx->pc = 0x1E9370u;
            goto label_1e9370;
        }
    }
    ctx->pc = 0x1E9364u;
label_1e9364:
    // 0x1e9364: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e9364u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e9368:
    // 0x1e9368: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1e9368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1e936c:
    // 0x1e936c: 0x0  nop
    ctx->pc = 0x1e936cu;
    // NOP
label_1e9370:
    // 0x1e9370: 0xc065d00  jal         func_197400
label_1e9374:
    if (ctx->pc == 0x1E9374u) {
        ctx->pc = 0x1E9378u;
        goto label_1e9378;
    }
    ctx->pc = 0x1E9370u;
    SET_GPR_U32(ctx, 31, 0x1E9378u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9378u; }
        if (ctx->pc != 0x1E9378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9378u; }
        if (ctx->pc != 0x1E9378u) { return; }
    }
    ctx->pc = 0x1E9378u;
label_1e9378:
    // 0x1e9378: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1e9378u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e937c:
    // 0x1e937c: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_1e9380:
    if (ctx->pc == 0x1E9380u) {
        ctx->pc = 0x1E9384u;
        goto label_1e9384;
    }
    ctx->pc = 0x1E937Cu;
    {
        const bool branch_taken_0x1e937c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e937c) {
            ctx->pc = 0x1E93B0u;
            goto label_1e93b0;
        }
    }
    ctx->pc = 0x1E9384u;
label_1e9384:
    // 0x1e9384: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e9384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e9388:
    // 0x1e9388: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1e9388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1e938c:
    // 0x1e938c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e938cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e9390:
    // 0x1e9390: 0x0  nop
    ctx->pc = 0x1e9390u;
    // NOP
label_1e9394:
    // 0x1e9394: 0x0  nop
    ctx->pc = 0x1e9394u;
    // NOP
label_1e9398:
    // 0x1e9398: 0x1010  mfhi        $v0
    ctx->pc = 0x1e9398u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e939c:
    // 0x1e939c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e93a0:
    if (ctx->pc == 0x1E93A0u) {
        ctx->pc = 0x1E93A4u;
        goto label_1e93a4;
    }
    ctx->pc = 0x1E939Cu;
    {
        const bool branch_taken_0x1e939c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e939c) {
            ctx->pc = 0x1E93B0u;
            goto label_1e93b0;
        }
    }
    ctx->pc = 0x1E93A4u;
label_1e93a4:
    // 0x1e93a4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e93a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e93a8:
    // 0x1e93a8: 0xc06560c  jal         func_195830
label_1e93ac:
    if (ctx->pc == 0x1E93ACu) {
        ctx->pc = 0x1E93ACu;
            // 0x1e93ac: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1E93B0u;
        goto label_1e93b0;
    }
    ctx->pc = 0x1E93A8u;
    SET_GPR_U32(ctx, 31, 0x1E93B0u);
    ctx->pc = 0x1E93ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93A8u;
            // 0x1e93ac: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93B0u; }
        if (ctx->pc != 0x1E93B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93B0u; }
        if (ctx->pc != 0x1E93B0u) { return; }
    }
    ctx->pc = 0x1E93B0u;
label_1e93b0:
    // 0x1e93b0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e93b4:
    // 0x1e93b4: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1e93b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1e93b8:
    // 0x1e93b8: 0x14200043  bnez        $at, . + 4 + (0x43 << 2)
label_1e93bc:
    if (ctx->pc == 0x1E93BCu) {
        ctx->pc = 0x1E93C0u;
        goto label_1e93c0;
    }
    ctx->pc = 0x1E93B8u;
    {
        const bool branch_taken_0x1e93b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e93b8) {
            ctx->pc = 0x1E94C8u;
            goto label_1e94c8;
        }
    }
    ctx->pc = 0x1E93C0u;
label_1e93c0:
    // 0x1e93c0: 0xc065d00  jal         func_197400
label_1e93c4:
    if (ctx->pc == 0x1E93C4u) {
        ctx->pc = 0x1E93C8u;
        goto label_1e93c8;
    }
    ctx->pc = 0x1E93C0u;
    SET_GPR_U32(ctx, 31, 0x1E93C8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93C8u; }
        if (ctx->pc != 0x1E93C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93C8u; }
        if (ctx->pc != 0x1E93C8u) { return; }
    }
    ctx->pc = 0x1E93C8u;
label_1e93c8:
    // 0x1e93c8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_1e93cc:
    if (ctx->pc == 0x1E93CCu) {
        ctx->pc = 0x1E93D0u;
        goto label_1e93d0;
    }
    ctx->pc = 0x1E93C8u;
    {
        const bool branch_taken_0x1e93c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e93c8) {
            ctx->pc = 0x1E93E0u;
            goto label_1e93e0;
        }
    }
    ctx->pc = 0x1E93D0u;
label_1e93d0:
    // 0x1e93d0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e93d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e93d4:
    // 0x1e93d4: 0xc06560c  jal         func_195830
label_1e93d8:
    if (ctx->pc == 0x1E93D8u) {
        ctx->pc = 0x1E93D8u;
            // 0x1e93d8: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1E93DCu;
        goto label_1e93dc;
    }
    ctx->pc = 0x1E93D4u;
    SET_GPR_U32(ctx, 31, 0x1E93DCu);
    ctx->pc = 0x1E93D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93D4u;
            // 0x1e93d8: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93DCu; }
        if (ctx->pc != 0x1E93DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93DCu; }
        if (ctx->pc != 0x1E93DCu) { return; }
    }
    ctx->pc = 0x1E93DCu;
label_1e93dc:
    // 0x1e93dc: 0x0  nop
    ctx->pc = 0x1e93dcu;
    // NOP
label_1e93e0:
    // 0x1e93e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e93e4:
    // 0x1e93e4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1e93e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1e93e8:
    // 0x1e93e8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e93e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e93ec:
    // 0x1e93ec: 0xc0655a0  jal         func_195680
label_1e93f0:
    if (ctx->pc == 0x1E93F0u) {
        ctx->pc = 0x1E93F0u;
            // 0x1e93f0: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1E93F4u;
        goto label_1e93f4;
    }
    ctx->pc = 0x1E93ECu;
    SET_GPR_U32(ctx, 31, 0x1E93F4u);
    ctx->pc = 0x1E93F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93ECu;
            // 0x1e93f0: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93F4u; }
        if (ctx->pc != 0x1E93F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93F4u; }
        if (ctx->pc != 0x1E93F4u) { return; }
    }
    ctx->pc = 0x1E93F4u;
label_1e93f4:
    // 0x1e93f4: 0x10000034  b           . + 4 + (0x34 << 2)
label_1e93f8:
    if (ctx->pc == 0x1E93F8u) {
        ctx->pc = 0x1E93FCu;
        goto label_1e93fc;
    }
    ctx->pc = 0x1E93F4u;
    {
        const bool branch_taken_0x1e93f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e93f4) {
            ctx->pc = 0x1E94C8u;
            goto label_1e94c8;
        }
    }
    ctx->pc = 0x1E93FCu;
label_1e93fc:
    // 0x1e93fc: 0x0  nop
    ctx->pc = 0x1e93fcu;
    // NOP
label_1e9400:
    // 0x1e9400: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e9400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9404:
    // 0x1e9404: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
label_1e9408:
    if (ctx->pc == 0x1E9408u) {
        ctx->pc = 0x1E940Cu;
        goto label_1e940c;
    }
    ctx->pc = 0x1E9404u;
    {
        const bool branch_taken_0x1e9404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9404) {
            ctx->pc = 0x1E94C8u;
            goto label_1e94c8;
        }
    }
    ctx->pc = 0x1E940Cu;
label_1e940c:
    // 0x1e940c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1e940cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9410:
    // 0x1e9410: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1e9410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_1e9414:
    // 0x1e9414: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1e9414u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1e9418:
    // 0x1e9418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e941c:
    // 0x1e941c: 0x0  nop
    ctx->pc = 0x1e941cu;
    // NOP
label_1e9420:
    // 0x1e9420: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e9420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e9424:
    // 0x1e9424: 0xc065d00  jal         func_197400
label_1e9428:
    if (ctx->pc == 0x1E9428u) {
        ctx->pc = 0x1E9428u;
            // 0x1e9428: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1E942Cu;
        goto label_1e942c;
    }
    ctx->pc = 0x1E9424u;
    SET_GPR_U32(ctx, 31, 0x1E942Cu);
    ctx->pc = 0x1E9428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9424u;
            // 0x1e9428: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E942Cu; }
        if (ctx->pc != 0x1E942Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E942Cu; }
        if (ctx->pc != 0x1E942Cu) { return; }
    }
    ctx->pc = 0x1E942Cu;
label_1e942c:
    // 0x1e942c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1e942cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e9430:
    // 0x1e9430: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_1e9434:
    if (ctx->pc == 0x1E9434u) {
        ctx->pc = 0x1E9438u;
        goto label_1e9438;
    }
    ctx->pc = 0x1E9430u;
    {
        const bool branch_taken_0x1e9430 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9430) {
            ctx->pc = 0x1E9468u;
            goto label_1e9468;
        }
    }
    ctx->pc = 0x1E9438u;
label_1e9438:
    // 0x1e9438: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e9438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e943c:
    // 0x1e943c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1e943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1e9440:
    // 0x1e9440: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e9440u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e9444:
    // 0x1e9444: 0x0  nop
    ctx->pc = 0x1e9444u;
    // NOP
label_1e9448:
    // 0x1e9448: 0x0  nop
    ctx->pc = 0x1e9448u;
    // NOP
label_1e944c:
    // 0x1e944c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e944cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e9450:
    // 0x1e9450: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e9454:
    if (ctx->pc == 0x1E9454u) {
        ctx->pc = 0x1E9458u;
        goto label_1e9458;
    }
    ctx->pc = 0x1E9450u;
    {
        const bool branch_taken_0x1e9450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9450) {
            ctx->pc = 0x1E9468u;
            goto label_1e9468;
        }
    }
    ctx->pc = 0x1E9458u;
label_1e9458:
    // 0x1e9458: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e9458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e945c:
    // 0x1e945c: 0xc06560c  jal         func_195830
label_1e9460:
    if (ctx->pc == 0x1E9460u) {
        ctx->pc = 0x1E9460u;
            // 0x1e9460: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1E9464u;
        goto label_1e9464;
    }
    ctx->pc = 0x1E945Cu;
    SET_GPR_U32(ctx, 31, 0x1E9464u);
    ctx->pc = 0x1E9460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E945Cu;
            // 0x1e9460: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9464u; }
        if (ctx->pc != 0x1E9464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9464u; }
        if (ctx->pc != 0x1E9464u) { return; }
    }
    ctx->pc = 0x1E9464u;
label_1e9464:
    // 0x1e9464: 0x0  nop
    ctx->pc = 0x1e9464u;
    // NOP
label_1e9468:
    // 0x1e9468: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1e9468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1e946c:
    // 0x1e946c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1e946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9470:
    // 0x1e9470: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e9470u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e9474:
    // 0x1e9474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9478:
    // 0x1e9478: 0x0  nop
    ctx->pc = 0x1e9478u;
    // NOP
label_1e947c:
    // 0x1e947c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e947cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e9480:
    // 0x1e9480: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e9480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1e9484:
    // 0x1e9484: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9488:
    // 0x1e9488: 0xc040d72  jal         func_1035C8
label_1e948c:
    if (ctx->pc == 0x1E948Cu) {
        ctx->pc = 0x1E948Cu;
            // 0x1e948c: 0xc44c0118  lwc1        $f12, 0x118($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1E9490u;
        goto label_1e9490;
    }
    ctx->pc = 0x1E9488u;
    SET_GPR_U32(ctx, 31, 0x1E9490u);
    ctx->pc = 0x1E948Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9488u;
            // 0x1e948c: 0xc44c0118  lwc1        $f12, 0x118($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9490u; }
        if (ctx->pc != 0x1E9490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9490u; }
        if (ctx->pc != 0x1E9490u) { return; }
    }
    ctx->pc = 0x1E9490u;
label_1e9490:
    // 0x1e9490: 0x3c044009  lui         $a0, 0x4009
    ctx->pc = 0x1e9490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16393 << 16));
label_1e9494:
    // 0x1e9494: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1e9494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1e9498:
    // 0x1e9498: 0x34841eb8  ori         $a0, $a0, 0x1EB8
    ctx->pc = 0x1e9498u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)7864u)));
label_1e949c:
    // 0x1e949c: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1e949cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)34079u)));
label_1e94a0:
    // 0x1e94a0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1e94a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_1e94a4:
    // 0x1e94a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e94a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e94a8:
    // 0x1e94a8: 0xc04008c  jal         func_100230
label_1e94ac:
    if (ctx->pc == 0x1E94ACu) {
        ctx->pc = 0x1E94ACu;
            // 0x1e94ac: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->pc = 0x1E94B0u;
        goto label_1e94b0;
    }
    ctx->pc = 0x1E94A8u;
    SET_GPR_U32(ctx, 31, 0x1E94B0u);
    ctx->pc = 0x1E94ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94A8u;
            // 0x1e94ac: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94B0u; }
        if (ctx->pc != 0x1E94B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94B0u; }
        if (ctx->pc != 0x1E94B0u) { return; }
    }
    ctx->pc = 0x1E94B0u;
label_1e94b0:
    // 0x1e94b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e94b4:
    if (ctx->pc == 0x1E94B4u) {
        ctx->pc = 0x1E94B8u;
        goto label_1e94b8;
    }
    ctx->pc = 0x1E94B0u;
    {
        const bool branch_taken_0x1e94b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e94b0) {
            ctx->pc = 0x1E94C8u;
            goto label_1e94c8;
        }
    }
    ctx->pc = 0x1E94B8u;
label_1e94b8:
    // 0x1e94b8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1e94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_1e94bc:
    // 0x1e94bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e94bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1e94c0:
    // 0x1e94c0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1e94c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1e94c4:
    // 0x1e94c4: 0x0  nop
    ctx->pc = 0x1e94c4u;
    // NOP
label_1e94c8:
    // 0x1e94c8: 0xc04b788  jal         func_12DE20
label_1e94cc:
    if (ctx->pc == 0x1E94CCu) {
        ctx->pc = 0x1E94CCu;
            // 0x1e94cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E94D0u;
        goto label_1e94d0;
    }
    ctx->pc = 0x1E94C8u;
    SET_GPR_U32(ctx, 31, 0x1E94D0u);
    ctx->pc = 0x1E94CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94C8u;
            // 0x1e94cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94D0u; }
        if (ctx->pc != 0x1E94D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94D0u; }
        if (ctx->pc != 0x1E94D0u) { return; }
    }
    ctx->pc = 0x1E94D0u;
label_1e94d0:
    // 0x1e94d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e94d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e94d4:
    // 0x1e94d4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1e94d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e94d8:
    // 0x1e94d8: 0xc04b7da  jal         func_12DF68
label_1e94dc:
    if (ctx->pc == 0x1E94DCu) {
        ctx->pc = 0x1E94DCu;
            // 0x1e94dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E94E0u;
        goto label_1e94e0;
    }
    ctx->pc = 0x1E94D8u;
    SET_GPR_U32(ctx, 31, 0x1E94E0u);
    ctx->pc = 0x1E94DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94D8u;
            // 0x1e94dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94E0u; }
        if (ctx->pc != 0x1E94E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94E0u; }
        if (ctx->pc != 0x1E94E0u) { return; }
    }
    ctx->pc = 0x1E94E0u;
label_1e94e0:
    // 0x1e94e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e94e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e94e4:
    // 0x1e94e4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1e94e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e94e8:
    // 0x1e94e8: 0xc04b804  jal         func_12E010
label_1e94ec:
    if (ctx->pc == 0x1E94ECu) {
        ctx->pc = 0x1E94ECu;
            // 0x1e94ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E94F0u;
        goto label_1e94f0;
    }
    ctx->pc = 0x1E94E8u;
    SET_GPR_U32(ctx, 31, 0x1E94F0u);
    ctx->pc = 0x1E94ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94E8u;
            // 0x1e94ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94F0u; }
        if (ctx->pc != 0x1E94F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94F0u; }
        if (ctx->pc != 0x1E94F0u) { return; }
    }
    ctx->pc = 0x1E94F0u;
label_1e94f0:
    // 0x1e94f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e94f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e94f4:
    // 0x1e94f4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1e94f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e94f8:
    // 0x1e94f8: 0xc04b7b0  jal         func_12DEC0
label_1e94fc:
    if (ctx->pc == 0x1E94FCu) {
        ctx->pc = 0x1E94FCu;
            // 0x1e94fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9500u;
        goto label_1e9500;
    }
    ctx->pc = 0x1E94F8u;
    SET_GPR_U32(ctx, 31, 0x1E9500u);
    ctx->pc = 0x1E94FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94F8u;
            // 0x1e94fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9500u; }
        if (ctx->pc != 0x1E9500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9500u; }
        if (ctx->pc != 0x1E9500u) { return; }
    }
    ctx->pc = 0x1E9500u;
label_1e9500:
    // 0x1e9500: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e9500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9504:
    // 0x1e9504: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e9504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9508:
    // 0x1e9508: 0xc04b75e  jal         func_12DD78
label_1e950c:
    if (ctx->pc == 0x1E950Cu) {
        ctx->pc = 0x1E950Cu;
            // 0x1e950c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1E9510u;
        goto label_1e9510;
    }
    ctx->pc = 0x1E9508u;
    SET_GPR_U32(ctx, 31, 0x1E9510u);
    ctx->pc = 0x1E950Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9508u;
            // 0x1e950c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9510u; }
        if (ctx->pc != 0x1E9510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9510u; }
        if (ctx->pc != 0x1E9510u) { return; }
    }
    ctx->pc = 0x1E9510u;
label_1e9510:
    // 0x1e9510: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e9510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e9514:
    // 0x1e9514: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e9514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e9518:
    // 0x1e9518: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e9518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e951c:
    // 0x1e951c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e9520:
    if (ctx->pc == 0x1E9520u) {
        ctx->pc = 0x1E9524u;
        goto label_1e9524;
    }
    ctx->pc = 0x1E951Cu;
    {
        const bool branch_taken_0x1e951c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e951c) {
            ctx->pc = 0x1E9570u;
            goto label_1e9570;
        }
    }
    ctx->pc = 0x1E9524u;
label_1e9524:
    // 0x1e9524: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1e9524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1e9528:
    // 0x1e9528: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e952c:
    if (ctx->pc == 0x1E952Cu) {
        ctx->pc = 0x1E9530u;
        goto label_1e9530;
    }
    ctx->pc = 0x1E9528u;
    {
        const bool branch_taken_0x1e9528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9528) {
            ctx->pc = 0x1E9540u;
            goto label_1e9540;
        }
    }
    ctx->pc = 0x1E9530u;
label_1e9530:
    // 0x1e9530: 0xc0604f0  jal         func_1813C0
label_1e9534:
    if (ctx->pc == 0x1E9534u) {
        ctx->pc = 0x1E9534u;
            // 0x1e9534: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E9538u;
        goto label_1e9538;
    }
    ctx->pc = 0x1E9530u;
    SET_GPR_U32(ctx, 31, 0x1E9538u);
    ctx->pc = 0x1E9534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9530u;
            // 0x1e9534: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9538u; }
        if (ctx->pc != 0x1E9538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9538u; }
        if (ctx->pc != 0x1E9538u) { return; }
    }
    ctx->pc = 0x1E9538u;
label_1e9538:
    // 0x1e9538: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e953c:
    if (ctx->pc == 0x1E953Cu) {
        ctx->pc = 0x1E9540u;
        goto label_1e9540;
    }
    ctx->pc = 0x1E9538u;
    {
        const bool branch_taken_0x1e9538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9538) {
            ctx->pc = 0x1E9548u;
            goto label_1e9548;
        }
    }
    ctx->pc = 0x1E9540u;
label_1e9540:
    // 0x1e9540: 0xc0604dc  jal         func_181370
label_1e9544:
    if (ctx->pc == 0x1E9544u) {
        ctx->pc = 0x1E9544u;
            // 0x1e9544: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E9548u;
        goto label_1e9548;
    }
    ctx->pc = 0x1E9540u;
    SET_GPR_U32(ctx, 31, 0x1E9548u);
    ctx->pc = 0x1E9544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9540u;
            // 0x1e9544: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9548u; }
        if (ctx->pc != 0x1E9548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9548u; }
        if (ctx->pc != 0x1E9548u) { return; }
    }
    ctx->pc = 0x1E9548u;
label_1e9548:
    // 0x1e9548: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1e9548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1e954c:
    // 0x1e954c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e9550:
    if (ctx->pc == 0x1E9550u) {
        ctx->pc = 0x1E9554u;
        goto label_1e9554;
    }
    ctx->pc = 0x1E954Cu;
    {
        const bool branch_taken_0x1e954c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e954c) {
            ctx->pc = 0x1E9560u;
            goto label_1e9560;
        }
    }
    ctx->pc = 0x1E9554u;
label_1e9554:
    // 0x1e9554: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e9558:
    if (ctx->pc == 0x1E9558u) {
        ctx->pc = 0x1E9558u;
            // 0x1e9558: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1E955Cu;
        goto label_1e955c;
    }
    ctx->pc = 0x1E9554u;
    {
        const bool branch_taken_0x1e9554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9554u;
            // 0x1e9558: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9554) {
            ctx->pc = 0x1E9580u;
            goto label_1e9580;
        }
    }
    ctx->pc = 0x1E955Cu;
label_1e955c:
    // 0x1e955c: 0x0  nop
    ctx->pc = 0x1e955cu;
    // NOP
label_1e9560:
    // 0x1e9560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9564:
    // 0x1e9564: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e9568:
    if (ctx->pc == 0x1E9568u) {
        ctx->pc = 0x1E9568u;
            // 0x1e9568: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1E956Cu;
        goto label_1e956c;
    }
    ctx->pc = 0x1E9564u;
    {
        const bool branch_taken_0x1e9564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9564u;
            // 0x1e9568: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9564) {
            ctx->pc = 0x1E9580u;
            goto label_1e9580;
        }
    }
    ctx->pc = 0x1E956Cu;
label_1e956c:
    // 0x1e956c: 0x0  nop
    ctx->pc = 0x1e956cu;
    // NOP
label_1e9570:
    // 0x1e9570: 0xc0604dc  jal         func_181370
label_1e9574:
    if (ctx->pc == 0x1E9574u) {
        ctx->pc = 0x1E9574u;
            // 0x1e9574: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E9578u;
        goto label_1e9578;
    }
    ctx->pc = 0x1E9570u;
    SET_GPR_U32(ctx, 31, 0x1E9578u);
    ctx->pc = 0x1E9574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9570u;
            // 0x1e9574: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9578u; }
        if (ctx->pc != 0x1E9578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9578u; }
        if (ctx->pc != 0x1E9578u) { return; }
    }
    ctx->pc = 0x1E9578u;
label_1e9578:
    // 0x1e9578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e957c:
    // 0x1e957c: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1e957cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1e9580:
    // 0x1e9580: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e9580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e9584:
    // 0x1e9584: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1e9584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1e9588:
    // 0x1e9588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e958c:
    // 0x1e958c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e958cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e9590:
    // 0x1e9590: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1e9590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e9594:
    // 0x1e9594: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1e9594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1e9598:
    // 0x1e9598: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e9598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e959c:
    // 0x1e959c: 0x0  nop
    ctx->pc = 0x1e959cu;
    // NOP
label_1e95a0:
    // 0x1e95a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e95a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e95a4:
    // 0x1e95a4: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1e95a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1e95a8:
    // 0x1e95a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1e95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e95ac:
    // 0x1e95ac: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1e95acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1e95b0:
    // 0x1e95b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e95b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e95b4:
    // 0x1e95b4: 0x0  nop
    ctx->pc = 0x1e95b4u;
    // NOP
label_1e95b8:
    // 0x1e95b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e95b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e95bc:
    // 0x1e95bc: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1e95bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1e95c0:
    // 0x1e95c0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1e95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e95c4:
    // 0x1e95c4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e95c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1e95c8:
    // 0x1e95c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e95c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e95cc:
    // 0x1e95cc: 0x0  nop
    ctx->pc = 0x1e95ccu;
    // NOP
label_1e95d0:
    // 0x1e95d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e95d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e95d4:
    // 0x1e95d4: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1e95d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1e95d8:
    // 0x1e95d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1e95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e95dc:
    // 0x1e95dc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1e95e0:
    // 0x1e95e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e95e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e95e4:
    // 0x1e95e4: 0x0  nop
    ctx->pc = 0x1e95e4u;
    // NOP
label_1e95e8:
    // 0x1e95e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e95e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e95ec:
    // 0x1e95ec: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1e95ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1e95f0:
    // 0x1e95f0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e95f4:
    // 0x1e95f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e95f8:
    // 0x1e95f8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1e95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1e95fc:
    // 0x1e95fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e95fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9600:
    // 0x1e9600: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e9600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9604:
    // 0x1e9604: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e9604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9608:
    // 0x1e9608: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e960c:
    if (ctx->pc == 0x1E960Cu) {
        ctx->pc = 0x1E960Cu;
            // 0x1e960c: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->pc = 0x1E9610u;
        goto label_1e9610;
    }
    ctx->pc = 0x1E9608u;
    {
        const bool branch_taken_0x1e9608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E960Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9608u;
            // 0x1e960c: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9608) {
            ctx->pc = 0x1E9628u;
            goto label_1e9628;
        }
    }
    ctx->pc = 0x1E9610u;
label_1e9610:
    // 0x1e9610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9614:
    // 0x1e9614: 0x0  nop
    ctx->pc = 0x1e9614u;
    // NOP
label_1e9618:
    // 0x1e9618: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e9618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e961c:
    // 0x1e961c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1e9620:
    if (ctx->pc == 0x1E9620u) {
        ctx->pc = 0x1E9624u;
        goto label_1e9624;
    }
    ctx->pc = 0x1E961Cu;
    {
        const bool branch_taken_0x1e961c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e961c) {
            ctx->pc = 0x1E9640u;
            goto label_1e9640;
        }
    }
    ctx->pc = 0x1E9624u;
label_1e9624:
    // 0x1e9624: 0x0  nop
    ctx->pc = 0x1e9624u;
    // NOP
label_1e9628:
    // 0x1e9628: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e9628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1e962c:
    // 0x1e962c: 0x40f809  jalr        $v0
label_1e9630:
    if (ctx->pc == 0x1E9630u) {
        ctx->pc = 0x1E9630u;
            // 0x1e9630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9634u;
        goto label_1e9634;
    }
    ctx->pc = 0x1E962Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9634u);
        ctx->pc = 0x1E9630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E962Cu;
            // 0x1e9630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8E20u: goto label_1e8e20;
            case 0x1E8E24u: goto label_1e8e24;
            case 0x1E8E28u: goto label_1e8e28;
            case 0x1E8E2Cu: goto label_1e8e2c;
            case 0x1E8E30u: goto label_1e8e30;
            case 0x1E8E34u: goto label_1e8e34;
            case 0x1E8E38u: goto label_1e8e38;
            case 0x1E8E3Cu: goto label_1e8e3c;
            case 0x1E8E40u: goto label_1e8e40;
            case 0x1E8E44u: goto label_1e8e44;
            case 0x1E8E48u: goto label_1e8e48;
            case 0x1E8E4Cu: goto label_1e8e4c;
            case 0x1E8E50u: goto label_1e8e50;
            case 0x1E8E54u: goto label_1e8e54;
            case 0x1E8E58u: goto label_1e8e58;
            case 0x1E8E5Cu: goto label_1e8e5c;
            case 0x1E8E60u: goto label_1e8e60;
            case 0x1E8E64u: goto label_1e8e64;
            case 0x1E8E68u: goto label_1e8e68;
            case 0x1E8E6Cu: goto label_1e8e6c;
            case 0x1E8E70u: goto label_1e8e70;
            case 0x1E8E74u: goto label_1e8e74;
            case 0x1E8E78u: goto label_1e8e78;
            case 0x1E8E7Cu: goto label_1e8e7c;
            case 0x1E8E80u: goto label_1e8e80;
            case 0x1E8E84u: goto label_1e8e84;
            case 0x1E8E88u: goto label_1e8e88;
            case 0x1E8E8Cu: goto label_1e8e8c;
            case 0x1E8E90u: goto label_1e8e90;
            case 0x1E8E94u: goto label_1e8e94;
            case 0x1E8E98u: goto label_1e8e98;
            case 0x1E8E9Cu: goto label_1e8e9c;
            case 0x1E8EA0u: goto label_1e8ea0;
            case 0x1E8EA4u: goto label_1e8ea4;
            case 0x1E8EA8u: goto label_1e8ea8;
            case 0x1E8EACu: goto label_1e8eac;
            case 0x1E8EB0u: goto label_1e8eb0;
            case 0x1E8EB4u: goto label_1e8eb4;
            case 0x1E8EB8u: goto label_1e8eb8;
            case 0x1E8EBCu: goto label_1e8ebc;
            case 0x1E8EC0u: goto label_1e8ec0;
            case 0x1E8EC4u: goto label_1e8ec4;
            case 0x1E8EC8u: goto label_1e8ec8;
            case 0x1E8ECCu: goto label_1e8ecc;
            case 0x1E8ED0u: goto label_1e8ed0;
            case 0x1E8ED4u: goto label_1e8ed4;
            case 0x1E8ED8u: goto label_1e8ed8;
            case 0x1E8EDCu: goto label_1e8edc;
            case 0x1E8EE0u: goto label_1e8ee0;
            case 0x1E8EE4u: goto label_1e8ee4;
            case 0x1E8EE8u: goto label_1e8ee8;
            case 0x1E8EECu: goto label_1e8eec;
            case 0x1E8EF0u: goto label_1e8ef0;
            case 0x1E8EF4u: goto label_1e8ef4;
            case 0x1E8EF8u: goto label_1e8ef8;
            case 0x1E8EFCu: goto label_1e8efc;
            case 0x1E8F00u: goto label_1e8f00;
            case 0x1E8F04u: goto label_1e8f04;
            case 0x1E8F08u: goto label_1e8f08;
            case 0x1E8F0Cu: goto label_1e8f0c;
            case 0x1E8F10u: goto label_1e8f10;
            case 0x1E8F14u: goto label_1e8f14;
            case 0x1E8F18u: goto label_1e8f18;
            case 0x1E8F1Cu: goto label_1e8f1c;
            case 0x1E8F20u: goto label_1e8f20;
            case 0x1E8F24u: goto label_1e8f24;
            case 0x1E8F28u: goto label_1e8f28;
            case 0x1E8F2Cu: goto label_1e8f2c;
            case 0x1E8F30u: goto label_1e8f30;
            case 0x1E8F34u: goto label_1e8f34;
            case 0x1E8F38u: goto label_1e8f38;
            case 0x1E8F3Cu: goto label_1e8f3c;
            case 0x1E8F40u: goto label_1e8f40;
            case 0x1E8F44u: goto label_1e8f44;
            case 0x1E8F48u: goto label_1e8f48;
            case 0x1E8F4Cu: goto label_1e8f4c;
            case 0x1E8F50u: goto label_1e8f50;
            case 0x1E8F54u: goto label_1e8f54;
            case 0x1E8F58u: goto label_1e8f58;
            case 0x1E8F5Cu: goto label_1e8f5c;
            case 0x1E8F60u: goto label_1e8f60;
            case 0x1E8F64u: goto label_1e8f64;
            case 0x1E8F68u: goto label_1e8f68;
            case 0x1E8F6Cu: goto label_1e8f6c;
            case 0x1E8F70u: goto label_1e8f70;
            case 0x1E8F74u: goto label_1e8f74;
            case 0x1E8F78u: goto label_1e8f78;
            case 0x1E8F7Cu: goto label_1e8f7c;
            case 0x1E8F80u: goto label_1e8f80;
            case 0x1E8F84u: goto label_1e8f84;
            case 0x1E8F88u: goto label_1e8f88;
            case 0x1E8F8Cu: goto label_1e8f8c;
            case 0x1E8F90u: goto label_1e8f90;
            case 0x1E8F94u: goto label_1e8f94;
            case 0x1E8F98u: goto label_1e8f98;
            case 0x1E8F9Cu: goto label_1e8f9c;
            case 0x1E8FA0u: goto label_1e8fa0;
            case 0x1E8FA4u: goto label_1e8fa4;
            case 0x1E8FA8u: goto label_1e8fa8;
            case 0x1E8FACu: goto label_1e8fac;
            case 0x1E8FB0u: goto label_1e8fb0;
            case 0x1E8FB4u: goto label_1e8fb4;
            case 0x1E8FB8u: goto label_1e8fb8;
            case 0x1E8FBCu: goto label_1e8fbc;
            case 0x1E8FC0u: goto label_1e8fc0;
            case 0x1E8FC4u: goto label_1e8fc4;
            case 0x1E8FC8u: goto label_1e8fc8;
            case 0x1E8FCCu: goto label_1e8fcc;
            case 0x1E8FD0u: goto label_1e8fd0;
            case 0x1E8FD4u: goto label_1e8fd4;
            case 0x1E8FD8u: goto label_1e8fd8;
            case 0x1E8FDCu: goto label_1e8fdc;
            case 0x1E8FE0u: goto label_1e8fe0;
            case 0x1E8FE4u: goto label_1e8fe4;
            case 0x1E8FE8u: goto label_1e8fe8;
            case 0x1E8FECu: goto label_1e8fec;
            case 0x1E8FF0u: goto label_1e8ff0;
            case 0x1E8FF4u: goto label_1e8ff4;
            case 0x1E8FF8u: goto label_1e8ff8;
            case 0x1E8FFCu: goto label_1e8ffc;
            case 0x1E9000u: goto label_1e9000;
            case 0x1E9004u: goto label_1e9004;
            case 0x1E9008u: goto label_1e9008;
            case 0x1E900Cu: goto label_1e900c;
            case 0x1E9010u: goto label_1e9010;
            case 0x1E9014u: goto label_1e9014;
            case 0x1E9018u: goto label_1e9018;
            case 0x1E901Cu: goto label_1e901c;
            case 0x1E9020u: goto label_1e9020;
            case 0x1E9024u: goto label_1e9024;
            case 0x1E9028u: goto label_1e9028;
            case 0x1E902Cu: goto label_1e902c;
            case 0x1E9030u: goto label_1e9030;
            case 0x1E9034u: goto label_1e9034;
            case 0x1E9038u: goto label_1e9038;
            case 0x1E903Cu: goto label_1e903c;
            case 0x1E9040u: goto label_1e9040;
            case 0x1E9044u: goto label_1e9044;
            case 0x1E9048u: goto label_1e9048;
            case 0x1E904Cu: goto label_1e904c;
            case 0x1E9050u: goto label_1e9050;
            case 0x1E9054u: goto label_1e9054;
            case 0x1E9058u: goto label_1e9058;
            case 0x1E905Cu: goto label_1e905c;
            case 0x1E9060u: goto label_1e9060;
            case 0x1E9064u: goto label_1e9064;
            case 0x1E9068u: goto label_1e9068;
            case 0x1E906Cu: goto label_1e906c;
            case 0x1E9070u: goto label_1e9070;
            case 0x1E9074u: goto label_1e9074;
            case 0x1E9078u: goto label_1e9078;
            case 0x1E907Cu: goto label_1e907c;
            case 0x1E9080u: goto label_1e9080;
            case 0x1E9084u: goto label_1e9084;
            case 0x1E9088u: goto label_1e9088;
            case 0x1E908Cu: goto label_1e908c;
            case 0x1E9090u: goto label_1e9090;
            case 0x1E9094u: goto label_1e9094;
            case 0x1E9098u: goto label_1e9098;
            case 0x1E909Cu: goto label_1e909c;
            case 0x1E90A0u: goto label_1e90a0;
            case 0x1E90A4u: goto label_1e90a4;
            case 0x1E90A8u: goto label_1e90a8;
            case 0x1E90ACu: goto label_1e90ac;
            case 0x1E90B0u: goto label_1e90b0;
            case 0x1E90B4u: goto label_1e90b4;
            case 0x1E90B8u: goto label_1e90b8;
            case 0x1E90BCu: goto label_1e90bc;
            case 0x1E90C0u: goto label_1e90c0;
            case 0x1E90C4u: goto label_1e90c4;
            case 0x1E90C8u: goto label_1e90c8;
            case 0x1E90CCu: goto label_1e90cc;
            case 0x1E90D0u: goto label_1e90d0;
            case 0x1E90D4u: goto label_1e90d4;
            case 0x1E90D8u: goto label_1e90d8;
            case 0x1E90DCu: goto label_1e90dc;
            case 0x1E90E0u: goto label_1e90e0;
            case 0x1E90E4u: goto label_1e90e4;
            case 0x1E90E8u: goto label_1e90e8;
            case 0x1E90ECu: goto label_1e90ec;
            case 0x1E90F0u: goto label_1e90f0;
            case 0x1E90F4u: goto label_1e90f4;
            case 0x1E90F8u: goto label_1e90f8;
            case 0x1E90FCu: goto label_1e90fc;
            case 0x1E9100u: goto label_1e9100;
            case 0x1E9104u: goto label_1e9104;
            case 0x1E9108u: goto label_1e9108;
            case 0x1E910Cu: goto label_1e910c;
            case 0x1E9110u: goto label_1e9110;
            case 0x1E9114u: goto label_1e9114;
            case 0x1E9118u: goto label_1e9118;
            case 0x1E911Cu: goto label_1e911c;
            case 0x1E9120u: goto label_1e9120;
            case 0x1E9124u: goto label_1e9124;
            case 0x1E9128u: goto label_1e9128;
            case 0x1E912Cu: goto label_1e912c;
            case 0x1E9130u: goto label_1e9130;
            case 0x1E9134u: goto label_1e9134;
            case 0x1E9138u: goto label_1e9138;
            case 0x1E913Cu: goto label_1e913c;
            case 0x1E9140u: goto label_1e9140;
            case 0x1E9144u: goto label_1e9144;
            case 0x1E9148u: goto label_1e9148;
            case 0x1E914Cu: goto label_1e914c;
            case 0x1E9150u: goto label_1e9150;
            case 0x1E9154u: goto label_1e9154;
            case 0x1E9158u: goto label_1e9158;
            case 0x1E915Cu: goto label_1e915c;
            case 0x1E9160u: goto label_1e9160;
            case 0x1E9164u: goto label_1e9164;
            case 0x1E9168u: goto label_1e9168;
            case 0x1E916Cu: goto label_1e916c;
            case 0x1E9170u: goto label_1e9170;
            case 0x1E9174u: goto label_1e9174;
            case 0x1E9178u: goto label_1e9178;
            case 0x1E917Cu: goto label_1e917c;
            case 0x1E9180u: goto label_1e9180;
            case 0x1E9184u: goto label_1e9184;
            case 0x1E9188u: goto label_1e9188;
            case 0x1E918Cu: goto label_1e918c;
            case 0x1E9190u: goto label_1e9190;
            case 0x1E9194u: goto label_1e9194;
            case 0x1E9198u: goto label_1e9198;
            case 0x1E919Cu: goto label_1e919c;
            case 0x1E91A0u: goto label_1e91a0;
            case 0x1E91A4u: goto label_1e91a4;
            case 0x1E91A8u: goto label_1e91a8;
            case 0x1E91ACu: goto label_1e91ac;
            case 0x1E91B0u: goto label_1e91b0;
            case 0x1E91B4u: goto label_1e91b4;
            case 0x1E91B8u: goto label_1e91b8;
            case 0x1E91BCu: goto label_1e91bc;
            case 0x1E91C0u: goto label_1e91c0;
            case 0x1E91C4u: goto label_1e91c4;
            case 0x1E91C8u: goto label_1e91c8;
            case 0x1E91CCu: goto label_1e91cc;
            case 0x1E91D0u: goto label_1e91d0;
            case 0x1E91D4u: goto label_1e91d4;
            case 0x1E91D8u: goto label_1e91d8;
            case 0x1E91DCu: goto label_1e91dc;
            case 0x1E91E0u: goto label_1e91e0;
            case 0x1E91E4u: goto label_1e91e4;
            case 0x1E91E8u: goto label_1e91e8;
            case 0x1E91ECu: goto label_1e91ec;
            case 0x1E91F0u: goto label_1e91f0;
            case 0x1E91F4u: goto label_1e91f4;
            case 0x1E91F8u: goto label_1e91f8;
            case 0x1E91FCu: goto label_1e91fc;
            case 0x1E9200u: goto label_1e9200;
            case 0x1E9204u: goto label_1e9204;
            case 0x1E9208u: goto label_1e9208;
            case 0x1E920Cu: goto label_1e920c;
            case 0x1E9210u: goto label_1e9210;
            case 0x1E9214u: goto label_1e9214;
            case 0x1E9218u: goto label_1e9218;
            case 0x1E921Cu: goto label_1e921c;
            case 0x1E9220u: goto label_1e9220;
            case 0x1E9224u: goto label_1e9224;
            case 0x1E9228u: goto label_1e9228;
            case 0x1E922Cu: goto label_1e922c;
            case 0x1E9230u: goto label_1e9230;
            case 0x1E9234u: goto label_1e9234;
            case 0x1E9238u: goto label_1e9238;
            case 0x1E923Cu: goto label_1e923c;
            case 0x1E9240u: goto label_1e9240;
            case 0x1E9244u: goto label_1e9244;
            case 0x1E9248u: goto label_1e9248;
            case 0x1E924Cu: goto label_1e924c;
            case 0x1E9250u: goto label_1e9250;
            case 0x1E9254u: goto label_1e9254;
            case 0x1E9258u: goto label_1e9258;
            case 0x1E925Cu: goto label_1e925c;
            case 0x1E9260u: goto label_1e9260;
            case 0x1E9264u: goto label_1e9264;
            case 0x1E9268u: goto label_1e9268;
            case 0x1E926Cu: goto label_1e926c;
            case 0x1E9270u: goto label_1e9270;
            case 0x1E9274u: goto label_1e9274;
            case 0x1E9278u: goto label_1e9278;
            case 0x1E927Cu: goto label_1e927c;
            case 0x1E9280u: goto label_1e9280;
            case 0x1E9284u: goto label_1e9284;
            case 0x1E9288u: goto label_1e9288;
            case 0x1E928Cu: goto label_1e928c;
            case 0x1E9290u: goto label_1e9290;
            case 0x1E9294u: goto label_1e9294;
            case 0x1E9298u: goto label_1e9298;
            case 0x1E929Cu: goto label_1e929c;
            case 0x1E92A0u: goto label_1e92a0;
            case 0x1E92A4u: goto label_1e92a4;
            case 0x1E92A8u: goto label_1e92a8;
            case 0x1E92ACu: goto label_1e92ac;
            case 0x1E92B0u: goto label_1e92b0;
            case 0x1E92B4u: goto label_1e92b4;
            case 0x1E92B8u: goto label_1e92b8;
            case 0x1E92BCu: goto label_1e92bc;
            case 0x1E92C0u: goto label_1e92c0;
            case 0x1E92C4u: goto label_1e92c4;
            case 0x1E92C8u: goto label_1e92c8;
            case 0x1E92CCu: goto label_1e92cc;
            case 0x1E92D0u: goto label_1e92d0;
            case 0x1E92D4u: goto label_1e92d4;
            case 0x1E92D8u: goto label_1e92d8;
            case 0x1E92DCu: goto label_1e92dc;
            case 0x1E92E0u: goto label_1e92e0;
            case 0x1E92E4u: goto label_1e92e4;
            case 0x1E92E8u: goto label_1e92e8;
            case 0x1E92ECu: goto label_1e92ec;
            case 0x1E92F0u: goto label_1e92f0;
            case 0x1E92F4u: goto label_1e92f4;
            case 0x1E92F8u: goto label_1e92f8;
            case 0x1E92FCu: goto label_1e92fc;
            case 0x1E9300u: goto label_1e9300;
            case 0x1E9304u: goto label_1e9304;
            case 0x1E9308u: goto label_1e9308;
            case 0x1E930Cu: goto label_1e930c;
            case 0x1E9310u: goto label_1e9310;
            case 0x1E9314u: goto label_1e9314;
            case 0x1E9318u: goto label_1e9318;
            case 0x1E931Cu: goto label_1e931c;
            case 0x1E9320u: goto label_1e9320;
            case 0x1E9324u: goto label_1e9324;
            case 0x1E9328u: goto label_1e9328;
            case 0x1E932Cu: goto label_1e932c;
            case 0x1E9330u: goto label_1e9330;
            case 0x1E9334u: goto label_1e9334;
            case 0x1E9338u: goto label_1e9338;
            case 0x1E933Cu: goto label_1e933c;
            case 0x1E9340u: goto label_1e9340;
            case 0x1E9344u: goto label_1e9344;
            case 0x1E9348u: goto label_1e9348;
            case 0x1E934Cu: goto label_1e934c;
            case 0x1E9350u: goto label_1e9350;
            case 0x1E9354u: goto label_1e9354;
            case 0x1E9358u: goto label_1e9358;
            case 0x1E935Cu: goto label_1e935c;
            case 0x1E9360u: goto label_1e9360;
            case 0x1E9364u: goto label_1e9364;
            case 0x1E9368u: goto label_1e9368;
            case 0x1E936Cu: goto label_1e936c;
            case 0x1E9370u: goto label_1e9370;
            case 0x1E9374u: goto label_1e9374;
            case 0x1E9378u: goto label_1e9378;
            case 0x1E937Cu: goto label_1e937c;
            case 0x1E9380u: goto label_1e9380;
            case 0x1E9384u: goto label_1e9384;
            case 0x1E9388u: goto label_1e9388;
            case 0x1E938Cu: goto label_1e938c;
            case 0x1E9390u: goto label_1e9390;
            case 0x1E9394u: goto label_1e9394;
            case 0x1E9398u: goto label_1e9398;
            case 0x1E939Cu: goto label_1e939c;
            case 0x1E93A0u: goto label_1e93a0;
            case 0x1E93A4u: goto label_1e93a4;
            case 0x1E93A8u: goto label_1e93a8;
            case 0x1E93ACu: goto label_1e93ac;
            case 0x1E93B0u: goto label_1e93b0;
            case 0x1E93B4u: goto label_1e93b4;
            case 0x1E93B8u: goto label_1e93b8;
            case 0x1E93BCu: goto label_1e93bc;
            case 0x1E93C0u: goto label_1e93c0;
            case 0x1E93C4u: goto label_1e93c4;
            case 0x1E93C8u: goto label_1e93c8;
            case 0x1E93CCu: goto label_1e93cc;
            case 0x1E93D0u: goto label_1e93d0;
            case 0x1E93D4u: goto label_1e93d4;
            case 0x1E93D8u: goto label_1e93d8;
            case 0x1E93DCu: goto label_1e93dc;
            case 0x1E93E0u: goto label_1e93e0;
            case 0x1E93E4u: goto label_1e93e4;
            case 0x1E93E8u: goto label_1e93e8;
            case 0x1E93ECu: goto label_1e93ec;
            case 0x1E93F0u: goto label_1e93f0;
            case 0x1E93F4u: goto label_1e93f4;
            case 0x1E93F8u: goto label_1e93f8;
            case 0x1E93FCu: goto label_1e93fc;
            case 0x1E9400u: goto label_1e9400;
            case 0x1E9404u: goto label_1e9404;
            case 0x1E9408u: goto label_1e9408;
            case 0x1E940Cu: goto label_1e940c;
            case 0x1E9410u: goto label_1e9410;
            case 0x1E9414u: goto label_1e9414;
            case 0x1E9418u: goto label_1e9418;
            case 0x1E941Cu: goto label_1e941c;
            case 0x1E9420u: goto label_1e9420;
            case 0x1E9424u: goto label_1e9424;
            case 0x1E9428u: goto label_1e9428;
            case 0x1E942Cu: goto label_1e942c;
            case 0x1E9430u: goto label_1e9430;
            case 0x1E9434u: goto label_1e9434;
            case 0x1E9438u: goto label_1e9438;
            case 0x1E943Cu: goto label_1e943c;
            case 0x1E9440u: goto label_1e9440;
            case 0x1E9444u: goto label_1e9444;
            case 0x1E9448u: goto label_1e9448;
            case 0x1E944Cu: goto label_1e944c;
            case 0x1E9450u: goto label_1e9450;
            case 0x1E9454u: goto label_1e9454;
            case 0x1E9458u: goto label_1e9458;
            case 0x1E945Cu: goto label_1e945c;
            case 0x1E9460u: goto label_1e9460;
            case 0x1E9464u: goto label_1e9464;
            case 0x1E9468u: goto label_1e9468;
            case 0x1E946Cu: goto label_1e946c;
            case 0x1E9470u: goto label_1e9470;
            case 0x1E9474u: goto label_1e9474;
            case 0x1E9478u: goto label_1e9478;
            case 0x1E947Cu: goto label_1e947c;
            case 0x1E9480u: goto label_1e9480;
            case 0x1E9484u: goto label_1e9484;
            case 0x1E9488u: goto label_1e9488;
            case 0x1E948Cu: goto label_1e948c;
            case 0x1E9490u: goto label_1e9490;
            case 0x1E9494u: goto label_1e9494;
            case 0x1E9498u: goto label_1e9498;
            case 0x1E949Cu: goto label_1e949c;
            case 0x1E94A0u: goto label_1e94a0;
            case 0x1E94A4u: goto label_1e94a4;
            case 0x1E94A8u: goto label_1e94a8;
            case 0x1E94ACu: goto label_1e94ac;
            case 0x1E94B0u: goto label_1e94b0;
            case 0x1E94B4u: goto label_1e94b4;
            case 0x1E94B8u: goto label_1e94b8;
            case 0x1E94BCu: goto label_1e94bc;
            case 0x1E94C0u: goto label_1e94c0;
            case 0x1E94C4u: goto label_1e94c4;
            case 0x1E94C8u: goto label_1e94c8;
            case 0x1E94CCu: goto label_1e94cc;
            case 0x1E94D0u: goto label_1e94d0;
            case 0x1E94D4u: goto label_1e94d4;
            case 0x1E94D8u: goto label_1e94d8;
            case 0x1E94DCu: goto label_1e94dc;
            case 0x1E94E0u: goto label_1e94e0;
            case 0x1E94E4u: goto label_1e94e4;
            case 0x1E94E8u: goto label_1e94e8;
            case 0x1E94ECu: goto label_1e94ec;
            case 0x1E94F0u: goto label_1e94f0;
            case 0x1E94F4u: goto label_1e94f4;
            case 0x1E94F8u: goto label_1e94f8;
            case 0x1E94FCu: goto label_1e94fc;
            case 0x1E9500u: goto label_1e9500;
            case 0x1E9504u: goto label_1e9504;
            case 0x1E9508u: goto label_1e9508;
            case 0x1E950Cu: goto label_1e950c;
            case 0x1E9510u: goto label_1e9510;
            case 0x1E9514u: goto label_1e9514;
            case 0x1E9518u: goto label_1e9518;
            case 0x1E951Cu: goto label_1e951c;
            case 0x1E9520u: goto label_1e9520;
            case 0x1E9524u: goto label_1e9524;
            case 0x1E9528u: goto label_1e9528;
            case 0x1E952Cu: goto label_1e952c;
            case 0x1E9530u: goto label_1e9530;
            case 0x1E9534u: goto label_1e9534;
            case 0x1E9538u: goto label_1e9538;
            case 0x1E953Cu: goto label_1e953c;
            case 0x1E9540u: goto label_1e9540;
            case 0x1E9544u: goto label_1e9544;
            case 0x1E9548u: goto label_1e9548;
            case 0x1E954Cu: goto label_1e954c;
            case 0x1E9550u: goto label_1e9550;
            case 0x1E9554u: goto label_1e9554;
            case 0x1E9558u: goto label_1e9558;
            case 0x1E955Cu: goto label_1e955c;
            case 0x1E9560u: goto label_1e9560;
            case 0x1E9564u: goto label_1e9564;
            case 0x1E9568u: goto label_1e9568;
            case 0x1E956Cu: goto label_1e956c;
            case 0x1E9570u: goto label_1e9570;
            case 0x1E9574u: goto label_1e9574;
            case 0x1E9578u: goto label_1e9578;
            case 0x1E957Cu: goto label_1e957c;
            case 0x1E9580u: goto label_1e9580;
            case 0x1E9584u: goto label_1e9584;
            case 0x1E9588u: goto label_1e9588;
            case 0x1E958Cu: goto label_1e958c;
            case 0x1E9590u: goto label_1e9590;
            case 0x1E9594u: goto label_1e9594;
            case 0x1E9598u: goto label_1e9598;
            case 0x1E959Cu: goto label_1e959c;
            case 0x1E95A0u: goto label_1e95a0;
            case 0x1E95A4u: goto label_1e95a4;
            case 0x1E95A8u: goto label_1e95a8;
            case 0x1E95ACu: goto label_1e95ac;
            case 0x1E95B0u: goto label_1e95b0;
            case 0x1E95B4u: goto label_1e95b4;
            case 0x1E95B8u: goto label_1e95b8;
            case 0x1E95BCu: goto label_1e95bc;
            case 0x1E95C0u: goto label_1e95c0;
            case 0x1E95C4u: goto label_1e95c4;
            case 0x1E95C8u: goto label_1e95c8;
            case 0x1E95CCu: goto label_1e95cc;
            case 0x1E95D0u: goto label_1e95d0;
            case 0x1E95D4u: goto label_1e95d4;
            case 0x1E95D8u: goto label_1e95d8;
            case 0x1E95DCu: goto label_1e95dc;
            case 0x1E95E0u: goto label_1e95e0;
            case 0x1E95E4u: goto label_1e95e4;
            case 0x1E95E8u: goto label_1e95e8;
            case 0x1E95ECu: goto label_1e95ec;
            case 0x1E95F0u: goto label_1e95f0;
            case 0x1E95F4u: goto label_1e95f4;
            case 0x1E95F8u: goto label_1e95f8;
            case 0x1E95FCu: goto label_1e95fc;
            case 0x1E9600u: goto label_1e9600;
            case 0x1E9604u: goto label_1e9604;
            case 0x1E9608u: goto label_1e9608;
            case 0x1E960Cu: goto label_1e960c;
            case 0x1E9610u: goto label_1e9610;
            case 0x1E9614u: goto label_1e9614;
            case 0x1E9618u: goto label_1e9618;
            case 0x1E961Cu: goto label_1e961c;
            case 0x1E9620u: goto label_1e9620;
            case 0x1E9624u: goto label_1e9624;
            case 0x1E9628u: goto label_1e9628;
            case 0x1E962Cu: goto label_1e962c;
            case 0x1E9630u: goto label_1e9630;
            case 0x1E9634u: goto label_1e9634;
            case 0x1E9638u: goto label_1e9638;
            case 0x1E963Cu: goto label_1e963c;
            case 0x1E9640u: goto label_1e9640;
            case 0x1E9644u: goto label_1e9644;
            case 0x1E9648u: goto label_1e9648;
            case 0x1E964Cu: goto label_1e964c;
            case 0x1E9650u: goto label_1e9650;
            case 0x1E9654u: goto label_1e9654;
            case 0x1E9658u: goto label_1e9658;
            case 0x1E965Cu: goto label_1e965c;
            case 0x1E9660u: goto label_1e9660;
            case 0x1E9664u: goto label_1e9664;
            case 0x1E9668u: goto label_1e9668;
            case 0x1E966Cu: goto label_1e966c;
            case 0x1E9670u: goto label_1e9670;
            case 0x1E9674u: goto label_1e9674;
            case 0x1E9678u: goto label_1e9678;
            case 0x1E967Cu: goto label_1e967c;
            case 0x1E9680u: goto label_1e9680;
            case 0x1E9684u: goto label_1e9684;
            case 0x1E9688u: goto label_1e9688;
            case 0x1E968Cu: goto label_1e968c;
            case 0x1E9690u: goto label_1e9690;
            case 0x1E9694u: goto label_1e9694;
            case 0x1E9698u: goto label_1e9698;
            case 0x1E969Cu: goto label_1e969c;
            case 0x1E96A0u: goto label_1e96a0;
            case 0x1E96A4u: goto label_1e96a4;
            case 0x1E96A8u: goto label_1e96a8;
            case 0x1E96ACu: goto label_1e96ac;
            case 0x1E96B0u: goto label_1e96b0;
            case 0x1E96B4u: goto label_1e96b4;
            case 0x1E96B8u: goto label_1e96b8;
            case 0x1E96BCu: goto label_1e96bc;
            case 0x1E96C0u: goto label_1e96c0;
            case 0x1E96C4u: goto label_1e96c4;
            case 0x1E96C8u: goto label_1e96c8;
            case 0x1E96CCu: goto label_1e96cc;
            case 0x1E96D0u: goto label_1e96d0;
            case 0x1E96D4u: goto label_1e96d4;
            case 0x1E96D8u: goto label_1e96d8;
            case 0x1E96DCu: goto label_1e96dc;
            case 0x1E96E0u: goto label_1e96e0;
            case 0x1E96E4u: goto label_1e96e4;
            case 0x1E96E8u: goto label_1e96e8;
            case 0x1E96ECu: goto label_1e96ec;
            case 0x1E96F0u: goto label_1e96f0;
            case 0x1E96F4u: goto label_1e96f4;
            case 0x1E96F8u: goto label_1e96f8;
            case 0x1E96FCu: goto label_1e96fc;
            case 0x1E9700u: goto label_1e9700;
            case 0x1E9704u: goto label_1e9704;
            case 0x1E9708u: goto label_1e9708;
            case 0x1E970Cu: goto label_1e970c;
            case 0x1E9710u: goto label_1e9710;
            case 0x1E9714u: goto label_1e9714;
            case 0x1E9718u: goto label_1e9718;
            case 0x1E971Cu: goto label_1e971c;
            case 0x1E9720u: goto label_1e9720;
            case 0x1E9724u: goto label_1e9724;
            case 0x1E9728u: goto label_1e9728;
            case 0x1E972Cu: goto label_1e972c;
            case 0x1E9730u: goto label_1e9730;
            case 0x1E9734u: goto label_1e9734;
            case 0x1E9738u: goto label_1e9738;
            case 0x1E973Cu: goto label_1e973c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9634u; }
            if (ctx->pc != 0x1E9634u) { return; }
        }
    }
    ctx->pc = 0x1E9634u;
label_1e9634:
    // 0x1e9634: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1e9638:
    if (ctx->pc == 0x1E9638u) {
        ctx->pc = 0x1E963Cu;
        goto label_1e963c;
    }
    ctx->pc = 0x1E9634u;
    {
        const bool branch_taken_0x1e9634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9634) {
            ctx->pc = 0x1E9730u;
            goto label_1e9730;
        }
    }
    ctx->pc = 0x1E963Cu;
label_1e963c:
    // 0x1e963c: 0x0  nop
    ctx->pc = 0x1e963cu;
    // NOP
label_1e9640:
    // 0x1e9640: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e9640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e9644:
    // 0x1e9644: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1e9648:
    if (ctx->pc == 0x1E9648u) {
        ctx->pc = 0x1E964Cu;
        goto label_1e964c;
    }
    ctx->pc = 0x1E9644u;
    {
        const bool branch_taken_0x1e9644 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e9644) {
            ctx->pc = 0x1E9710u;
            goto label_1e9710;
        }
    }
    ctx->pc = 0x1E964Cu;
label_1e964c:
    // 0x1e964c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9650:
    // 0x1e9650: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e9650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e9654:
    // 0x1e9654: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e9654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9658:
    // 0x1e9658: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e9658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e965c:
    // 0x1e965c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e965cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e9660:
    // 0x1e9660: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e9660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e9664:
    // 0x1e9664: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1e9664u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1e9668:
    // 0x1e9668: 0xc053740  jal         func_14DD00
label_1e966c:
    if (ctx->pc == 0x1E966Cu) {
        ctx->pc = 0x1E966Cu;
            // 0x1e966c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1E9670u;
        goto label_1e9670;
    }
    ctx->pc = 0x1E9668u;
    SET_GPR_U32(ctx, 31, 0x1E9670u);
    ctx->pc = 0x1E966Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9668u;
            // 0x1e966c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9670u; }
        if (ctx->pc != 0x1E9670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9670u; }
        if (ctx->pc != 0x1E9670u) { return; }
    }
    ctx->pc = 0x1E9670u;
label_1e9670:
    // 0x1e9670: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1e9670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9674:
    // 0x1e9674: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1e9674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1e9678:
    // 0x1e9678: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e9678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e967c:
    // 0x1e967c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e967cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e9680:
    // 0x1e9680: 0xc05d080  jal         func_174200
label_1e9684:
    if (ctx->pc == 0x1E9684u) {
        ctx->pc = 0x1E9684u;
            // 0x1e9684: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E9688u;
        goto label_1e9688;
    }
    ctx->pc = 0x1E9680u;
    SET_GPR_U32(ctx, 31, 0x1E9688u);
    ctx->pc = 0x1E9684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9680u;
            // 0x1e9684: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9688u; }
        if (ctx->pc != 0x1E9688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9688u; }
        if (ctx->pc != 0x1E9688u) { return; }
    }
    ctx->pc = 0x1E9688u;
label_1e9688:
    // 0x1e9688: 0xc050bb4  jal         func_142ED0
label_1e968c:
    if (ctx->pc == 0x1E968Cu) {
        ctx->pc = 0x1E9690u;
        goto label_1e9690;
    }
    ctx->pc = 0x1E9688u;
    SET_GPR_U32(ctx, 31, 0x1E9690u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9690u; }
        if (ctx->pc != 0x1E9690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9690u; }
        if (ctx->pc != 0x1E9690u) { return; }
    }
    ctx->pc = 0x1E9690u;
label_1e9690:
    // 0x1e9690: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e9690u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1e9694:
    // 0x1e9694: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e9698:
    if (ctx->pc == 0x1E9698u) {
        ctx->pc = 0x1E969Cu;
        goto label_1e969c;
    }
    ctx->pc = 0x1E9694u;
    {
        const bool branch_taken_0x1e9694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9694) {
            ctx->pc = 0x1E96B8u;
            goto label_1e96b8;
        }
    }
    ctx->pc = 0x1E969Cu;
label_1e969c:
    // 0x1e969c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1e969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e96a0:
    // 0x1e96a0: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1e96a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1e96a4:
    // 0x1e96a4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e96a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e96a8:
    // 0x1e96a8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e96a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e96ac:
    // 0x1e96ac: 0xc05d080  jal         func_174200
label_1e96b0:
    if (ctx->pc == 0x1E96B0u) {
        ctx->pc = 0x1E96B0u;
            // 0x1e96b0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E96B4u;
        goto label_1e96b4;
    }
    ctx->pc = 0x1E96ACu;
    SET_GPR_U32(ctx, 31, 0x1E96B4u);
    ctx->pc = 0x1E96B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96ACu;
            // 0x1e96b0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96B4u; }
        if (ctx->pc != 0x1E96B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96B4u; }
        if (ctx->pc != 0x1E96B4u) { return; }
    }
    ctx->pc = 0x1E96B4u;
label_1e96b4:
    // 0x1e96b4: 0x0  nop
    ctx->pc = 0x1e96b4u;
    // NOP
label_1e96b8:
    // 0x1e96b8: 0xc050bb4  jal         func_142ED0
label_1e96bc:
    if (ctx->pc == 0x1E96BCu) {
        ctx->pc = 0x1E96C0u;
        goto label_1e96c0;
    }
    ctx->pc = 0x1E96B8u;
    SET_GPR_U32(ctx, 31, 0x1E96C0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96C0u; }
        if (ctx->pc != 0x1E96C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96C0u; }
        if (ctx->pc != 0x1E96C0u) { return; }
    }
    ctx->pc = 0x1E96C0u;
label_1e96c0:
    // 0x1e96c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e96c0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1e96c4:
    // 0x1e96c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e96c8:
    if (ctx->pc == 0x1E96C8u) {
        ctx->pc = 0x1E96CCu;
        goto label_1e96cc;
    }
    ctx->pc = 0x1E96C4u;
    {
        const bool branch_taken_0x1e96c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e96c4) {
            ctx->pc = 0x1E96E8u;
            goto label_1e96e8;
        }
    }
    ctx->pc = 0x1E96CCu;
label_1e96cc:
    // 0x1e96cc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1e96ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e96d0:
    // 0x1e96d0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1e96d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1e96d4:
    // 0x1e96d4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e96d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e96d8:
    // 0x1e96d8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e96d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e96dc:
    // 0x1e96dc: 0xc05d080  jal         func_174200
label_1e96e0:
    if (ctx->pc == 0x1E96E0u) {
        ctx->pc = 0x1E96E0u;
            // 0x1e96e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E96E4u;
        goto label_1e96e4;
    }
    ctx->pc = 0x1E96DCu;
    SET_GPR_U32(ctx, 31, 0x1E96E4u);
    ctx->pc = 0x1E96E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96DCu;
            // 0x1e96e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96E4u; }
        if (ctx->pc != 0x1E96E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96E4u; }
        if (ctx->pc != 0x1E96E4u) { return; }
    }
    ctx->pc = 0x1E96E4u;
label_1e96e4:
    // 0x1e96e4: 0x0  nop
    ctx->pc = 0x1e96e4u;
    // NOP
label_1e96e8:
    // 0x1e96e8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1e96e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e96ec:
    // 0x1e96ec: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1e96ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e96f0:
    // 0x1e96f0: 0xc07b0fc  jal         func_1EC3F0
label_1e96f4:
    if (ctx->pc == 0x1E96F4u) {
        ctx->pc = 0x1E96F4u;
            // 0x1e96f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E96F8u;
        goto label_1e96f8;
    }
    ctx->pc = 0x1E96F0u;
    SET_GPR_U32(ctx, 31, 0x1E96F8u);
    ctx->pc = 0x1E96F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96F0u;
            // 0x1e96f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96F8u; }
        if (ctx->pc != 0x1E96F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96F8u; }
        if (ctx->pc != 0x1E96F8u) { return; }
    }
    ctx->pc = 0x1E96F8u;
label_1e96f8:
    // 0x1e96f8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1e96fc:
    // 0x1e96fc: 0x40f809  jalr        $v0
label_1e9700:
    if (ctx->pc == 0x1E9700u) {
        ctx->pc = 0x1E9700u;
            // 0x1e9700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9704u;
        goto label_1e9704;
    }
    ctx->pc = 0x1E96FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9704u);
        ctx->pc = 0x1E9700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96FCu;
            // 0x1e9700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8E20u: goto label_1e8e20;
            case 0x1E8E24u: goto label_1e8e24;
            case 0x1E8E28u: goto label_1e8e28;
            case 0x1E8E2Cu: goto label_1e8e2c;
            case 0x1E8E30u: goto label_1e8e30;
            case 0x1E8E34u: goto label_1e8e34;
            case 0x1E8E38u: goto label_1e8e38;
            case 0x1E8E3Cu: goto label_1e8e3c;
            case 0x1E8E40u: goto label_1e8e40;
            case 0x1E8E44u: goto label_1e8e44;
            case 0x1E8E48u: goto label_1e8e48;
            case 0x1E8E4Cu: goto label_1e8e4c;
            case 0x1E8E50u: goto label_1e8e50;
            case 0x1E8E54u: goto label_1e8e54;
            case 0x1E8E58u: goto label_1e8e58;
            case 0x1E8E5Cu: goto label_1e8e5c;
            case 0x1E8E60u: goto label_1e8e60;
            case 0x1E8E64u: goto label_1e8e64;
            case 0x1E8E68u: goto label_1e8e68;
            case 0x1E8E6Cu: goto label_1e8e6c;
            case 0x1E8E70u: goto label_1e8e70;
            case 0x1E8E74u: goto label_1e8e74;
            case 0x1E8E78u: goto label_1e8e78;
            case 0x1E8E7Cu: goto label_1e8e7c;
            case 0x1E8E80u: goto label_1e8e80;
            case 0x1E8E84u: goto label_1e8e84;
            case 0x1E8E88u: goto label_1e8e88;
            case 0x1E8E8Cu: goto label_1e8e8c;
            case 0x1E8E90u: goto label_1e8e90;
            case 0x1E8E94u: goto label_1e8e94;
            case 0x1E8E98u: goto label_1e8e98;
            case 0x1E8E9Cu: goto label_1e8e9c;
            case 0x1E8EA0u: goto label_1e8ea0;
            case 0x1E8EA4u: goto label_1e8ea4;
            case 0x1E8EA8u: goto label_1e8ea8;
            case 0x1E8EACu: goto label_1e8eac;
            case 0x1E8EB0u: goto label_1e8eb0;
            case 0x1E8EB4u: goto label_1e8eb4;
            case 0x1E8EB8u: goto label_1e8eb8;
            case 0x1E8EBCu: goto label_1e8ebc;
            case 0x1E8EC0u: goto label_1e8ec0;
            case 0x1E8EC4u: goto label_1e8ec4;
            case 0x1E8EC8u: goto label_1e8ec8;
            case 0x1E8ECCu: goto label_1e8ecc;
            case 0x1E8ED0u: goto label_1e8ed0;
            case 0x1E8ED4u: goto label_1e8ed4;
            case 0x1E8ED8u: goto label_1e8ed8;
            case 0x1E8EDCu: goto label_1e8edc;
            case 0x1E8EE0u: goto label_1e8ee0;
            case 0x1E8EE4u: goto label_1e8ee4;
            case 0x1E8EE8u: goto label_1e8ee8;
            case 0x1E8EECu: goto label_1e8eec;
            case 0x1E8EF0u: goto label_1e8ef0;
            case 0x1E8EF4u: goto label_1e8ef4;
            case 0x1E8EF8u: goto label_1e8ef8;
            case 0x1E8EFCu: goto label_1e8efc;
            case 0x1E8F00u: goto label_1e8f00;
            case 0x1E8F04u: goto label_1e8f04;
            case 0x1E8F08u: goto label_1e8f08;
            case 0x1E8F0Cu: goto label_1e8f0c;
            case 0x1E8F10u: goto label_1e8f10;
            case 0x1E8F14u: goto label_1e8f14;
            case 0x1E8F18u: goto label_1e8f18;
            case 0x1E8F1Cu: goto label_1e8f1c;
            case 0x1E8F20u: goto label_1e8f20;
            case 0x1E8F24u: goto label_1e8f24;
            case 0x1E8F28u: goto label_1e8f28;
            case 0x1E8F2Cu: goto label_1e8f2c;
            case 0x1E8F30u: goto label_1e8f30;
            case 0x1E8F34u: goto label_1e8f34;
            case 0x1E8F38u: goto label_1e8f38;
            case 0x1E8F3Cu: goto label_1e8f3c;
            case 0x1E8F40u: goto label_1e8f40;
            case 0x1E8F44u: goto label_1e8f44;
            case 0x1E8F48u: goto label_1e8f48;
            case 0x1E8F4Cu: goto label_1e8f4c;
            case 0x1E8F50u: goto label_1e8f50;
            case 0x1E8F54u: goto label_1e8f54;
            case 0x1E8F58u: goto label_1e8f58;
            case 0x1E8F5Cu: goto label_1e8f5c;
            case 0x1E8F60u: goto label_1e8f60;
            case 0x1E8F64u: goto label_1e8f64;
            case 0x1E8F68u: goto label_1e8f68;
            case 0x1E8F6Cu: goto label_1e8f6c;
            case 0x1E8F70u: goto label_1e8f70;
            case 0x1E8F74u: goto label_1e8f74;
            case 0x1E8F78u: goto label_1e8f78;
            case 0x1E8F7Cu: goto label_1e8f7c;
            case 0x1E8F80u: goto label_1e8f80;
            case 0x1E8F84u: goto label_1e8f84;
            case 0x1E8F88u: goto label_1e8f88;
            case 0x1E8F8Cu: goto label_1e8f8c;
            case 0x1E8F90u: goto label_1e8f90;
            case 0x1E8F94u: goto label_1e8f94;
            case 0x1E8F98u: goto label_1e8f98;
            case 0x1E8F9Cu: goto label_1e8f9c;
            case 0x1E8FA0u: goto label_1e8fa0;
            case 0x1E8FA4u: goto label_1e8fa4;
            case 0x1E8FA8u: goto label_1e8fa8;
            case 0x1E8FACu: goto label_1e8fac;
            case 0x1E8FB0u: goto label_1e8fb0;
            case 0x1E8FB4u: goto label_1e8fb4;
            case 0x1E8FB8u: goto label_1e8fb8;
            case 0x1E8FBCu: goto label_1e8fbc;
            case 0x1E8FC0u: goto label_1e8fc0;
            case 0x1E8FC4u: goto label_1e8fc4;
            case 0x1E8FC8u: goto label_1e8fc8;
            case 0x1E8FCCu: goto label_1e8fcc;
            case 0x1E8FD0u: goto label_1e8fd0;
            case 0x1E8FD4u: goto label_1e8fd4;
            case 0x1E8FD8u: goto label_1e8fd8;
            case 0x1E8FDCu: goto label_1e8fdc;
            case 0x1E8FE0u: goto label_1e8fe0;
            case 0x1E8FE4u: goto label_1e8fe4;
            case 0x1E8FE8u: goto label_1e8fe8;
            case 0x1E8FECu: goto label_1e8fec;
            case 0x1E8FF0u: goto label_1e8ff0;
            case 0x1E8FF4u: goto label_1e8ff4;
            case 0x1E8FF8u: goto label_1e8ff8;
            case 0x1E8FFCu: goto label_1e8ffc;
            case 0x1E9000u: goto label_1e9000;
            case 0x1E9004u: goto label_1e9004;
            case 0x1E9008u: goto label_1e9008;
            case 0x1E900Cu: goto label_1e900c;
            case 0x1E9010u: goto label_1e9010;
            case 0x1E9014u: goto label_1e9014;
            case 0x1E9018u: goto label_1e9018;
            case 0x1E901Cu: goto label_1e901c;
            case 0x1E9020u: goto label_1e9020;
            case 0x1E9024u: goto label_1e9024;
            case 0x1E9028u: goto label_1e9028;
            case 0x1E902Cu: goto label_1e902c;
            case 0x1E9030u: goto label_1e9030;
            case 0x1E9034u: goto label_1e9034;
            case 0x1E9038u: goto label_1e9038;
            case 0x1E903Cu: goto label_1e903c;
            case 0x1E9040u: goto label_1e9040;
            case 0x1E9044u: goto label_1e9044;
            case 0x1E9048u: goto label_1e9048;
            case 0x1E904Cu: goto label_1e904c;
            case 0x1E9050u: goto label_1e9050;
            case 0x1E9054u: goto label_1e9054;
            case 0x1E9058u: goto label_1e9058;
            case 0x1E905Cu: goto label_1e905c;
            case 0x1E9060u: goto label_1e9060;
            case 0x1E9064u: goto label_1e9064;
            case 0x1E9068u: goto label_1e9068;
            case 0x1E906Cu: goto label_1e906c;
            case 0x1E9070u: goto label_1e9070;
            case 0x1E9074u: goto label_1e9074;
            case 0x1E9078u: goto label_1e9078;
            case 0x1E907Cu: goto label_1e907c;
            case 0x1E9080u: goto label_1e9080;
            case 0x1E9084u: goto label_1e9084;
            case 0x1E9088u: goto label_1e9088;
            case 0x1E908Cu: goto label_1e908c;
            case 0x1E9090u: goto label_1e9090;
            case 0x1E9094u: goto label_1e9094;
            case 0x1E9098u: goto label_1e9098;
            case 0x1E909Cu: goto label_1e909c;
            case 0x1E90A0u: goto label_1e90a0;
            case 0x1E90A4u: goto label_1e90a4;
            case 0x1E90A8u: goto label_1e90a8;
            case 0x1E90ACu: goto label_1e90ac;
            case 0x1E90B0u: goto label_1e90b0;
            case 0x1E90B4u: goto label_1e90b4;
            case 0x1E90B8u: goto label_1e90b8;
            case 0x1E90BCu: goto label_1e90bc;
            case 0x1E90C0u: goto label_1e90c0;
            case 0x1E90C4u: goto label_1e90c4;
            case 0x1E90C8u: goto label_1e90c8;
            case 0x1E90CCu: goto label_1e90cc;
            case 0x1E90D0u: goto label_1e90d0;
            case 0x1E90D4u: goto label_1e90d4;
            case 0x1E90D8u: goto label_1e90d8;
            case 0x1E90DCu: goto label_1e90dc;
            case 0x1E90E0u: goto label_1e90e0;
            case 0x1E90E4u: goto label_1e90e4;
            case 0x1E90E8u: goto label_1e90e8;
            case 0x1E90ECu: goto label_1e90ec;
            case 0x1E90F0u: goto label_1e90f0;
            case 0x1E90F4u: goto label_1e90f4;
            case 0x1E90F8u: goto label_1e90f8;
            case 0x1E90FCu: goto label_1e90fc;
            case 0x1E9100u: goto label_1e9100;
            case 0x1E9104u: goto label_1e9104;
            case 0x1E9108u: goto label_1e9108;
            case 0x1E910Cu: goto label_1e910c;
            case 0x1E9110u: goto label_1e9110;
            case 0x1E9114u: goto label_1e9114;
            case 0x1E9118u: goto label_1e9118;
            case 0x1E911Cu: goto label_1e911c;
            case 0x1E9120u: goto label_1e9120;
            case 0x1E9124u: goto label_1e9124;
            case 0x1E9128u: goto label_1e9128;
            case 0x1E912Cu: goto label_1e912c;
            case 0x1E9130u: goto label_1e9130;
            case 0x1E9134u: goto label_1e9134;
            case 0x1E9138u: goto label_1e9138;
            case 0x1E913Cu: goto label_1e913c;
            case 0x1E9140u: goto label_1e9140;
            case 0x1E9144u: goto label_1e9144;
            case 0x1E9148u: goto label_1e9148;
            case 0x1E914Cu: goto label_1e914c;
            case 0x1E9150u: goto label_1e9150;
            case 0x1E9154u: goto label_1e9154;
            case 0x1E9158u: goto label_1e9158;
            case 0x1E915Cu: goto label_1e915c;
            case 0x1E9160u: goto label_1e9160;
            case 0x1E9164u: goto label_1e9164;
            case 0x1E9168u: goto label_1e9168;
            case 0x1E916Cu: goto label_1e916c;
            case 0x1E9170u: goto label_1e9170;
            case 0x1E9174u: goto label_1e9174;
            case 0x1E9178u: goto label_1e9178;
            case 0x1E917Cu: goto label_1e917c;
            case 0x1E9180u: goto label_1e9180;
            case 0x1E9184u: goto label_1e9184;
            case 0x1E9188u: goto label_1e9188;
            case 0x1E918Cu: goto label_1e918c;
            case 0x1E9190u: goto label_1e9190;
            case 0x1E9194u: goto label_1e9194;
            case 0x1E9198u: goto label_1e9198;
            case 0x1E919Cu: goto label_1e919c;
            case 0x1E91A0u: goto label_1e91a0;
            case 0x1E91A4u: goto label_1e91a4;
            case 0x1E91A8u: goto label_1e91a8;
            case 0x1E91ACu: goto label_1e91ac;
            case 0x1E91B0u: goto label_1e91b0;
            case 0x1E91B4u: goto label_1e91b4;
            case 0x1E91B8u: goto label_1e91b8;
            case 0x1E91BCu: goto label_1e91bc;
            case 0x1E91C0u: goto label_1e91c0;
            case 0x1E91C4u: goto label_1e91c4;
            case 0x1E91C8u: goto label_1e91c8;
            case 0x1E91CCu: goto label_1e91cc;
            case 0x1E91D0u: goto label_1e91d0;
            case 0x1E91D4u: goto label_1e91d4;
            case 0x1E91D8u: goto label_1e91d8;
            case 0x1E91DCu: goto label_1e91dc;
            case 0x1E91E0u: goto label_1e91e0;
            case 0x1E91E4u: goto label_1e91e4;
            case 0x1E91E8u: goto label_1e91e8;
            case 0x1E91ECu: goto label_1e91ec;
            case 0x1E91F0u: goto label_1e91f0;
            case 0x1E91F4u: goto label_1e91f4;
            case 0x1E91F8u: goto label_1e91f8;
            case 0x1E91FCu: goto label_1e91fc;
            case 0x1E9200u: goto label_1e9200;
            case 0x1E9204u: goto label_1e9204;
            case 0x1E9208u: goto label_1e9208;
            case 0x1E920Cu: goto label_1e920c;
            case 0x1E9210u: goto label_1e9210;
            case 0x1E9214u: goto label_1e9214;
            case 0x1E9218u: goto label_1e9218;
            case 0x1E921Cu: goto label_1e921c;
            case 0x1E9220u: goto label_1e9220;
            case 0x1E9224u: goto label_1e9224;
            case 0x1E9228u: goto label_1e9228;
            case 0x1E922Cu: goto label_1e922c;
            case 0x1E9230u: goto label_1e9230;
            case 0x1E9234u: goto label_1e9234;
            case 0x1E9238u: goto label_1e9238;
            case 0x1E923Cu: goto label_1e923c;
            case 0x1E9240u: goto label_1e9240;
            case 0x1E9244u: goto label_1e9244;
            case 0x1E9248u: goto label_1e9248;
            case 0x1E924Cu: goto label_1e924c;
            case 0x1E9250u: goto label_1e9250;
            case 0x1E9254u: goto label_1e9254;
            case 0x1E9258u: goto label_1e9258;
            case 0x1E925Cu: goto label_1e925c;
            case 0x1E9260u: goto label_1e9260;
            case 0x1E9264u: goto label_1e9264;
            case 0x1E9268u: goto label_1e9268;
            case 0x1E926Cu: goto label_1e926c;
            case 0x1E9270u: goto label_1e9270;
            case 0x1E9274u: goto label_1e9274;
            case 0x1E9278u: goto label_1e9278;
            case 0x1E927Cu: goto label_1e927c;
            case 0x1E9280u: goto label_1e9280;
            case 0x1E9284u: goto label_1e9284;
            case 0x1E9288u: goto label_1e9288;
            case 0x1E928Cu: goto label_1e928c;
            case 0x1E9290u: goto label_1e9290;
            case 0x1E9294u: goto label_1e9294;
            case 0x1E9298u: goto label_1e9298;
            case 0x1E929Cu: goto label_1e929c;
            case 0x1E92A0u: goto label_1e92a0;
            case 0x1E92A4u: goto label_1e92a4;
            case 0x1E92A8u: goto label_1e92a8;
            case 0x1E92ACu: goto label_1e92ac;
            case 0x1E92B0u: goto label_1e92b0;
            case 0x1E92B4u: goto label_1e92b4;
            case 0x1E92B8u: goto label_1e92b8;
            case 0x1E92BCu: goto label_1e92bc;
            case 0x1E92C0u: goto label_1e92c0;
            case 0x1E92C4u: goto label_1e92c4;
            case 0x1E92C8u: goto label_1e92c8;
            case 0x1E92CCu: goto label_1e92cc;
            case 0x1E92D0u: goto label_1e92d0;
            case 0x1E92D4u: goto label_1e92d4;
            case 0x1E92D8u: goto label_1e92d8;
            case 0x1E92DCu: goto label_1e92dc;
            case 0x1E92E0u: goto label_1e92e0;
            case 0x1E92E4u: goto label_1e92e4;
            case 0x1E92E8u: goto label_1e92e8;
            case 0x1E92ECu: goto label_1e92ec;
            case 0x1E92F0u: goto label_1e92f0;
            case 0x1E92F4u: goto label_1e92f4;
            case 0x1E92F8u: goto label_1e92f8;
            case 0x1E92FCu: goto label_1e92fc;
            case 0x1E9300u: goto label_1e9300;
            case 0x1E9304u: goto label_1e9304;
            case 0x1E9308u: goto label_1e9308;
            case 0x1E930Cu: goto label_1e930c;
            case 0x1E9310u: goto label_1e9310;
            case 0x1E9314u: goto label_1e9314;
            case 0x1E9318u: goto label_1e9318;
            case 0x1E931Cu: goto label_1e931c;
            case 0x1E9320u: goto label_1e9320;
            case 0x1E9324u: goto label_1e9324;
            case 0x1E9328u: goto label_1e9328;
            case 0x1E932Cu: goto label_1e932c;
            case 0x1E9330u: goto label_1e9330;
            case 0x1E9334u: goto label_1e9334;
            case 0x1E9338u: goto label_1e9338;
            case 0x1E933Cu: goto label_1e933c;
            case 0x1E9340u: goto label_1e9340;
            case 0x1E9344u: goto label_1e9344;
            case 0x1E9348u: goto label_1e9348;
            case 0x1E934Cu: goto label_1e934c;
            case 0x1E9350u: goto label_1e9350;
            case 0x1E9354u: goto label_1e9354;
            case 0x1E9358u: goto label_1e9358;
            case 0x1E935Cu: goto label_1e935c;
            case 0x1E9360u: goto label_1e9360;
            case 0x1E9364u: goto label_1e9364;
            case 0x1E9368u: goto label_1e9368;
            case 0x1E936Cu: goto label_1e936c;
            case 0x1E9370u: goto label_1e9370;
            case 0x1E9374u: goto label_1e9374;
            case 0x1E9378u: goto label_1e9378;
            case 0x1E937Cu: goto label_1e937c;
            case 0x1E9380u: goto label_1e9380;
            case 0x1E9384u: goto label_1e9384;
            case 0x1E9388u: goto label_1e9388;
            case 0x1E938Cu: goto label_1e938c;
            case 0x1E9390u: goto label_1e9390;
            case 0x1E9394u: goto label_1e9394;
            case 0x1E9398u: goto label_1e9398;
            case 0x1E939Cu: goto label_1e939c;
            case 0x1E93A0u: goto label_1e93a0;
            case 0x1E93A4u: goto label_1e93a4;
            case 0x1E93A8u: goto label_1e93a8;
            case 0x1E93ACu: goto label_1e93ac;
            case 0x1E93B0u: goto label_1e93b0;
            case 0x1E93B4u: goto label_1e93b4;
            case 0x1E93B8u: goto label_1e93b8;
            case 0x1E93BCu: goto label_1e93bc;
            case 0x1E93C0u: goto label_1e93c0;
            case 0x1E93C4u: goto label_1e93c4;
            case 0x1E93C8u: goto label_1e93c8;
            case 0x1E93CCu: goto label_1e93cc;
            case 0x1E93D0u: goto label_1e93d0;
            case 0x1E93D4u: goto label_1e93d4;
            case 0x1E93D8u: goto label_1e93d8;
            case 0x1E93DCu: goto label_1e93dc;
            case 0x1E93E0u: goto label_1e93e0;
            case 0x1E93E4u: goto label_1e93e4;
            case 0x1E93E8u: goto label_1e93e8;
            case 0x1E93ECu: goto label_1e93ec;
            case 0x1E93F0u: goto label_1e93f0;
            case 0x1E93F4u: goto label_1e93f4;
            case 0x1E93F8u: goto label_1e93f8;
            case 0x1E93FCu: goto label_1e93fc;
            case 0x1E9400u: goto label_1e9400;
            case 0x1E9404u: goto label_1e9404;
            case 0x1E9408u: goto label_1e9408;
            case 0x1E940Cu: goto label_1e940c;
            case 0x1E9410u: goto label_1e9410;
            case 0x1E9414u: goto label_1e9414;
            case 0x1E9418u: goto label_1e9418;
            case 0x1E941Cu: goto label_1e941c;
            case 0x1E9420u: goto label_1e9420;
            case 0x1E9424u: goto label_1e9424;
            case 0x1E9428u: goto label_1e9428;
            case 0x1E942Cu: goto label_1e942c;
            case 0x1E9430u: goto label_1e9430;
            case 0x1E9434u: goto label_1e9434;
            case 0x1E9438u: goto label_1e9438;
            case 0x1E943Cu: goto label_1e943c;
            case 0x1E9440u: goto label_1e9440;
            case 0x1E9444u: goto label_1e9444;
            case 0x1E9448u: goto label_1e9448;
            case 0x1E944Cu: goto label_1e944c;
            case 0x1E9450u: goto label_1e9450;
            case 0x1E9454u: goto label_1e9454;
            case 0x1E9458u: goto label_1e9458;
            case 0x1E945Cu: goto label_1e945c;
            case 0x1E9460u: goto label_1e9460;
            case 0x1E9464u: goto label_1e9464;
            case 0x1E9468u: goto label_1e9468;
            case 0x1E946Cu: goto label_1e946c;
            case 0x1E9470u: goto label_1e9470;
            case 0x1E9474u: goto label_1e9474;
            case 0x1E9478u: goto label_1e9478;
            case 0x1E947Cu: goto label_1e947c;
            case 0x1E9480u: goto label_1e9480;
            case 0x1E9484u: goto label_1e9484;
            case 0x1E9488u: goto label_1e9488;
            case 0x1E948Cu: goto label_1e948c;
            case 0x1E9490u: goto label_1e9490;
            case 0x1E9494u: goto label_1e9494;
            case 0x1E9498u: goto label_1e9498;
            case 0x1E949Cu: goto label_1e949c;
            case 0x1E94A0u: goto label_1e94a0;
            case 0x1E94A4u: goto label_1e94a4;
            case 0x1E94A8u: goto label_1e94a8;
            case 0x1E94ACu: goto label_1e94ac;
            case 0x1E94B0u: goto label_1e94b0;
            case 0x1E94B4u: goto label_1e94b4;
            case 0x1E94B8u: goto label_1e94b8;
            case 0x1E94BCu: goto label_1e94bc;
            case 0x1E94C0u: goto label_1e94c0;
            case 0x1E94C4u: goto label_1e94c4;
            case 0x1E94C8u: goto label_1e94c8;
            case 0x1E94CCu: goto label_1e94cc;
            case 0x1E94D0u: goto label_1e94d0;
            case 0x1E94D4u: goto label_1e94d4;
            case 0x1E94D8u: goto label_1e94d8;
            case 0x1E94DCu: goto label_1e94dc;
            case 0x1E94E0u: goto label_1e94e0;
            case 0x1E94E4u: goto label_1e94e4;
            case 0x1E94E8u: goto label_1e94e8;
            case 0x1E94ECu: goto label_1e94ec;
            case 0x1E94F0u: goto label_1e94f0;
            case 0x1E94F4u: goto label_1e94f4;
            case 0x1E94F8u: goto label_1e94f8;
            case 0x1E94FCu: goto label_1e94fc;
            case 0x1E9500u: goto label_1e9500;
            case 0x1E9504u: goto label_1e9504;
            case 0x1E9508u: goto label_1e9508;
            case 0x1E950Cu: goto label_1e950c;
            case 0x1E9510u: goto label_1e9510;
            case 0x1E9514u: goto label_1e9514;
            case 0x1E9518u: goto label_1e9518;
            case 0x1E951Cu: goto label_1e951c;
            case 0x1E9520u: goto label_1e9520;
            case 0x1E9524u: goto label_1e9524;
            case 0x1E9528u: goto label_1e9528;
            case 0x1E952Cu: goto label_1e952c;
            case 0x1E9530u: goto label_1e9530;
            case 0x1E9534u: goto label_1e9534;
            case 0x1E9538u: goto label_1e9538;
            case 0x1E953Cu: goto label_1e953c;
            case 0x1E9540u: goto label_1e9540;
            case 0x1E9544u: goto label_1e9544;
            case 0x1E9548u: goto label_1e9548;
            case 0x1E954Cu: goto label_1e954c;
            case 0x1E9550u: goto label_1e9550;
            case 0x1E9554u: goto label_1e9554;
            case 0x1E9558u: goto label_1e9558;
            case 0x1E955Cu: goto label_1e955c;
            case 0x1E9560u: goto label_1e9560;
            case 0x1E9564u: goto label_1e9564;
            case 0x1E9568u: goto label_1e9568;
            case 0x1E956Cu: goto label_1e956c;
            case 0x1E9570u: goto label_1e9570;
            case 0x1E9574u: goto label_1e9574;
            case 0x1E9578u: goto label_1e9578;
            case 0x1E957Cu: goto label_1e957c;
            case 0x1E9580u: goto label_1e9580;
            case 0x1E9584u: goto label_1e9584;
            case 0x1E9588u: goto label_1e9588;
            case 0x1E958Cu: goto label_1e958c;
            case 0x1E9590u: goto label_1e9590;
            case 0x1E9594u: goto label_1e9594;
            case 0x1E9598u: goto label_1e9598;
            case 0x1E959Cu: goto label_1e959c;
            case 0x1E95A0u: goto label_1e95a0;
            case 0x1E95A4u: goto label_1e95a4;
            case 0x1E95A8u: goto label_1e95a8;
            case 0x1E95ACu: goto label_1e95ac;
            case 0x1E95B0u: goto label_1e95b0;
            case 0x1E95B4u: goto label_1e95b4;
            case 0x1E95B8u: goto label_1e95b8;
            case 0x1E95BCu: goto label_1e95bc;
            case 0x1E95C0u: goto label_1e95c0;
            case 0x1E95C4u: goto label_1e95c4;
            case 0x1E95C8u: goto label_1e95c8;
            case 0x1E95CCu: goto label_1e95cc;
            case 0x1E95D0u: goto label_1e95d0;
            case 0x1E95D4u: goto label_1e95d4;
            case 0x1E95D8u: goto label_1e95d8;
            case 0x1E95DCu: goto label_1e95dc;
            case 0x1E95E0u: goto label_1e95e0;
            case 0x1E95E4u: goto label_1e95e4;
            case 0x1E95E8u: goto label_1e95e8;
            case 0x1E95ECu: goto label_1e95ec;
            case 0x1E95F0u: goto label_1e95f0;
            case 0x1E95F4u: goto label_1e95f4;
            case 0x1E95F8u: goto label_1e95f8;
            case 0x1E95FCu: goto label_1e95fc;
            case 0x1E9600u: goto label_1e9600;
            case 0x1E9604u: goto label_1e9604;
            case 0x1E9608u: goto label_1e9608;
            case 0x1E960Cu: goto label_1e960c;
            case 0x1E9610u: goto label_1e9610;
            case 0x1E9614u: goto label_1e9614;
            case 0x1E9618u: goto label_1e9618;
            case 0x1E961Cu: goto label_1e961c;
            case 0x1E9620u: goto label_1e9620;
            case 0x1E9624u: goto label_1e9624;
            case 0x1E9628u: goto label_1e9628;
            case 0x1E962Cu: goto label_1e962c;
            case 0x1E9630u: goto label_1e9630;
            case 0x1E9634u: goto label_1e9634;
            case 0x1E9638u: goto label_1e9638;
            case 0x1E963Cu: goto label_1e963c;
            case 0x1E9640u: goto label_1e9640;
            case 0x1E9644u: goto label_1e9644;
            case 0x1E9648u: goto label_1e9648;
            case 0x1E964Cu: goto label_1e964c;
            case 0x1E9650u: goto label_1e9650;
            case 0x1E9654u: goto label_1e9654;
            case 0x1E9658u: goto label_1e9658;
            case 0x1E965Cu: goto label_1e965c;
            case 0x1E9660u: goto label_1e9660;
            case 0x1E9664u: goto label_1e9664;
            case 0x1E9668u: goto label_1e9668;
            case 0x1E966Cu: goto label_1e966c;
            case 0x1E9670u: goto label_1e9670;
            case 0x1E9674u: goto label_1e9674;
            case 0x1E9678u: goto label_1e9678;
            case 0x1E967Cu: goto label_1e967c;
            case 0x1E9680u: goto label_1e9680;
            case 0x1E9684u: goto label_1e9684;
            case 0x1E9688u: goto label_1e9688;
            case 0x1E968Cu: goto label_1e968c;
            case 0x1E9690u: goto label_1e9690;
            case 0x1E9694u: goto label_1e9694;
            case 0x1E9698u: goto label_1e9698;
            case 0x1E969Cu: goto label_1e969c;
            case 0x1E96A0u: goto label_1e96a0;
            case 0x1E96A4u: goto label_1e96a4;
            case 0x1E96A8u: goto label_1e96a8;
            case 0x1E96ACu: goto label_1e96ac;
            case 0x1E96B0u: goto label_1e96b0;
            case 0x1E96B4u: goto label_1e96b4;
            case 0x1E96B8u: goto label_1e96b8;
            case 0x1E96BCu: goto label_1e96bc;
            case 0x1E96C0u: goto label_1e96c0;
            case 0x1E96C4u: goto label_1e96c4;
            case 0x1E96C8u: goto label_1e96c8;
            case 0x1E96CCu: goto label_1e96cc;
            case 0x1E96D0u: goto label_1e96d0;
            case 0x1E96D4u: goto label_1e96d4;
            case 0x1E96D8u: goto label_1e96d8;
            case 0x1E96DCu: goto label_1e96dc;
            case 0x1E96E0u: goto label_1e96e0;
            case 0x1E96E4u: goto label_1e96e4;
            case 0x1E96E8u: goto label_1e96e8;
            case 0x1E96ECu: goto label_1e96ec;
            case 0x1E96F0u: goto label_1e96f0;
            case 0x1E96F4u: goto label_1e96f4;
            case 0x1E96F8u: goto label_1e96f8;
            case 0x1E96FCu: goto label_1e96fc;
            case 0x1E9700u: goto label_1e9700;
            case 0x1E9704u: goto label_1e9704;
            case 0x1E9708u: goto label_1e9708;
            case 0x1E970Cu: goto label_1e970c;
            case 0x1E9710u: goto label_1e9710;
            case 0x1E9714u: goto label_1e9714;
            case 0x1E9718u: goto label_1e9718;
            case 0x1E971Cu: goto label_1e971c;
            case 0x1E9720u: goto label_1e9720;
            case 0x1E9724u: goto label_1e9724;
            case 0x1E9728u: goto label_1e9728;
            case 0x1E972Cu: goto label_1e972c;
            case 0x1E9730u: goto label_1e9730;
            case 0x1E9734u: goto label_1e9734;
            case 0x1E9738u: goto label_1e9738;
            case 0x1E973Cu: goto label_1e973c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9704u; }
            if (ctx->pc != 0x1E9704u) { return; }
        }
    }
    ctx->pc = 0x1E9704u;
label_1e9704:
    // 0x1e9704: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e9708:
    if (ctx->pc == 0x1E9708u) {
        ctx->pc = 0x1E970Cu;
        goto label_1e970c;
    }
    ctx->pc = 0x1E9704u;
    {
        const bool branch_taken_0x1e9704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9704) {
            ctx->pc = 0x1E9730u;
            goto label_1e9730;
        }
    }
    ctx->pc = 0x1E970Cu;
label_1e970c:
    // 0x1e970c: 0x0  nop
    ctx->pc = 0x1e970cu;
    // NOP
label_1e9710:
    // 0x1e9710: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1e9710u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
label_1e9714:
    // 0x1e9714: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e9714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e9718:
    // 0x1e9718: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1e9718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1e971c:
    // 0x1e971c: 0x24c68bb0  addiu       $a2, $a2, -0x7450
    ctx->pc = 0x1e971cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937520));
label_1e9720:
    // 0x1e9720: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e9720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9724:
    // 0x1e9724: 0xc053ca4  jal         func_14F290
label_1e9728:
    if (ctx->pc == 0x1E9728u) {
        ctx->pc = 0x1E9728u;
            // 0x1e9728: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E972Cu;
        goto label_1e972c;
    }
    ctx->pc = 0x1E9724u;
    SET_GPR_U32(ctx, 31, 0x1E972Cu);
    ctx->pc = 0x1E9728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9724u;
            // 0x1e9728: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E972Cu; }
        if (ctx->pc != 0x1E972Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E972Cu; }
        if (ctx->pc != 0x1E972Cu) { return; }
    }
    ctx->pc = 0x1E972Cu;
label_1e972c:
    // 0x1e972c: 0x0  nop
    ctx->pc = 0x1e972cu;
    // NOP
label_1e9730:
    // 0x1e9730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9734:
    // 0x1e9734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9738:
    // 0x1e9738: 0x3e00008  jr          $ra
label_1e973c:
    if (ctx->pc == 0x1E973Cu) {
        ctx->pc = 0x1E973Cu;
            // 0x1e973c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E9740u;
        goto label_fallthrough_0x1e9738;
    }
    ctx->pc = 0x1E9738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E973Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9738u;
            // 0x1e973c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8E20u: goto label_1e8e20;
            case 0x1E8E24u: goto label_1e8e24;
            case 0x1E8E28u: goto label_1e8e28;
            case 0x1E8E2Cu: goto label_1e8e2c;
            case 0x1E8E30u: goto label_1e8e30;
            case 0x1E8E34u: goto label_1e8e34;
            case 0x1E8E38u: goto label_1e8e38;
            case 0x1E8E3Cu: goto label_1e8e3c;
            case 0x1E8E40u: goto label_1e8e40;
            case 0x1E8E44u: goto label_1e8e44;
            case 0x1E8E48u: goto label_1e8e48;
            case 0x1E8E4Cu: goto label_1e8e4c;
            case 0x1E8E50u: goto label_1e8e50;
            case 0x1E8E54u: goto label_1e8e54;
            case 0x1E8E58u: goto label_1e8e58;
            case 0x1E8E5Cu: goto label_1e8e5c;
            case 0x1E8E60u: goto label_1e8e60;
            case 0x1E8E64u: goto label_1e8e64;
            case 0x1E8E68u: goto label_1e8e68;
            case 0x1E8E6Cu: goto label_1e8e6c;
            case 0x1E8E70u: goto label_1e8e70;
            case 0x1E8E74u: goto label_1e8e74;
            case 0x1E8E78u: goto label_1e8e78;
            case 0x1E8E7Cu: goto label_1e8e7c;
            case 0x1E8E80u: goto label_1e8e80;
            case 0x1E8E84u: goto label_1e8e84;
            case 0x1E8E88u: goto label_1e8e88;
            case 0x1E8E8Cu: goto label_1e8e8c;
            case 0x1E8E90u: goto label_1e8e90;
            case 0x1E8E94u: goto label_1e8e94;
            case 0x1E8E98u: goto label_1e8e98;
            case 0x1E8E9Cu: goto label_1e8e9c;
            case 0x1E8EA0u: goto label_1e8ea0;
            case 0x1E8EA4u: goto label_1e8ea4;
            case 0x1E8EA8u: goto label_1e8ea8;
            case 0x1E8EACu: goto label_1e8eac;
            case 0x1E8EB0u: goto label_1e8eb0;
            case 0x1E8EB4u: goto label_1e8eb4;
            case 0x1E8EB8u: goto label_1e8eb8;
            case 0x1E8EBCu: goto label_1e8ebc;
            case 0x1E8EC0u: goto label_1e8ec0;
            case 0x1E8EC4u: goto label_1e8ec4;
            case 0x1E8EC8u: goto label_1e8ec8;
            case 0x1E8ECCu: goto label_1e8ecc;
            case 0x1E8ED0u: goto label_1e8ed0;
            case 0x1E8ED4u: goto label_1e8ed4;
            case 0x1E8ED8u: goto label_1e8ed8;
            case 0x1E8EDCu: goto label_1e8edc;
            case 0x1E8EE0u: goto label_1e8ee0;
            case 0x1E8EE4u: goto label_1e8ee4;
            case 0x1E8EE8u: goto label_1e8ee8;
            case 0x1E8EECu: goto label_1e8eec;
            case 0x1E8EF0u: goto label_1e8ef0;
            case 0x1E8EF4u: goto label_1e8ef4;
            case 0x1E8EF8u: goto label_1e8ef8;
            case 0x1E8EFCu: goto label_1e8efc;
            case 0x1E8F00u: goto label_1e8f00;
            case 0x1E8F04u: goto label_1e8f04;
            case 0x1E8F08u: goto label_1e8f08;
            case 0x1E8F0Cu: goto label_1e8f0c;
            case 0x1E8F10u: goto label_1e8f10;
            case 0x1E8F14u: goto label_1e8f14;
            case 0x1E8F18u: goto label_1e8f18;
            case 0x1E8F1Cu: goto label_1e8f1c;
            case 0x1E8F20u: goto label_1e8f20;
            case 0x1E8F24u: goto label_1e8f24;
            case 0x1E8F28u: goto label_1e8f28;
            case 0x1E8F2Cu: goto label_1e8f2c;
            case 0x1E8F30u: goto label_1e8f30;
            case 0x1E8F34u: goto label_1e8f34;
            case 0x1E8F38u: goto label_1e8f38;
            case 0x1E8F3Cu: goto label_1e8f3c;
            case 0x1E8F40u: goto label_1e8f40;
            case 0x1E8F44u: goto label_1e8f44;
            case 0x1E8F48u: goto label_1e8f48;
            case 0x1E8F4Cu: goto label_1e8f4c;
            case 0x1E8F50u: goto label_1e8f50;
            case 0x1E8F54u: goto label_1e8f54;
            case 0x1E8F58u: goto label_1e8f58;
            case 0x1E8F5Cu: goto label_1e8f5c;
            case 0x1E8F60u: goto label_1e8f60;
            case 0x1E8F64u: goto label_1e8f64;
            case 0x1E8F68u: goto label_1e8f68;
            case 0x1E8F6Cu: goto label_1e8f6c;
            case 0x1E8F70u: goto label_1e8f70;
            case 0x1E8F74u: goto label_1e8f74;
            case 0x1E8F78u: goto label_1e8f78;
            case 0x1E8F7Cu: goto label_1e8f7c;
            case 0x1E8F80u: goto label_1e8f80;
            case 0x1E8F84u: goto label_1e8f84;
            case 0x1E8F88u: goto label_1e8f88;
            case 0x1E8F8Cu: goto label_1e8f8c;
            case 0x1E8F90u: goto label_1e8f90;
            case 0x1E8F94u: goto label_1e8f94;
            case 0x1E8F98u: goto label_1e8f98;
            case 0x1E8F9Cu: goto label_1e8f9c;
            case 0x1E8FA0u: goto label_1e8fa0;
            case 0x1E8FA4u: goto label_1e8fa4;
            case 0x1E8FA8u: goto label_1e8fa8;
            case 0x1E8FACu: goto label_1e8fac;
            case 0x1E8FB0u: goto label_1e8fb0;
            case 0x1E8FB4u: goto label_1e8fb4;
            case 0x1E8FB8u: goto label_1e8fb8;
            case 0x1E8FBCu: goto label_1e8fbc;
            case 0x1E8FC0u: goto label_1e8fc0;
            case 0x1E8FC4u: goto label_1e8fc4;
            case 0x1E8FC8u: goto label_1e8fc8;
            case 0x1E8FCCu: goto label_1e8fcc;
            case 0x1E8FD0u: goto label_1e8fd0;
            case 0x1E8FD4u: goto label_1e8fd4;
            case 0x1E8FD8u: goto label_1e8fd8;
            case 0x1E8FDCu: goto label_1e8fdc;
            case 0x1E8FE0u: goto label_1e8fe0;
            case 0x1E8FE4u: goto label_1e8fe4;
            case 0x1E8FE8u: goto label_1e8fe8;
            case 0x1E8FECu: goto label_1e8fec;
            case 0x1E8FF0u: goto label_1e8ff0;
            case 0x1E8FF4u: goto label_1e8ff4;
            case 0x1E8FF8u: goto label_1e8ff8;
            case 0x1E8FFCu: goto label_1e8ffc;
            case 0x1E9000u: goto label_1e9000;
            case 0x1E9004u: goto label_1e9004;
            case 0x1E9008u: goto label_1e9008;
            case 0x1E900Cu: goto label_1e900c;
            case 0x1E9010u: goto label_1e9010;
            case 0x1E9014u: goto label_1e9014;
            case 0x1E9018u: goto label_1e9018;
            case 0x1E901Cu: goto label_1e901c;
            case 0x1E9020u: goto label_1e9020;
            case 0x1E9024u: goto label_1e9024;
            case 0x1E9028u: goto label_1e9028;
            case 0x1E902Cu: goto label_1e902c;
            case 0x1E9030u: goto label_1e9030;
            case 0x1E9034u: goto label_1e9034;
            case 0x1E9038u: goto label_1e9038;
            case 0x1E903Cu: goto label_1e903c;
            case 0x1E9040u: goto label_1e9040;
            case 0x1E9044u: goto label_1e9044;
            case 0x1E9048u: goto label_1e9048;
            case 0x1E904Cu: goto label_1e904c;
            case 0x1E9050u: goto label_1e9050;
            case 0x1E9054u: goto label_1e9054;
            case 0x1E9058u: goto label_1e9058;
            case 0x1E905Cu: goto label_1e905c;
            case 0x1E9060u: goto label_1e9060;
            case 0x1E9064u: goto label_1e9064;
            case 0x1E9068u: goto label_1e9068;
            case 0x1E906Cu: goto label_1e906c;
            case 0x1E9070u: goto label_1e9070;
            case 0x1E9074u: goto label_1e9074;
            case 0x1E9078u: goto label_1e9078;
            case 0x1E907Cu: goto label_1e907c;
            case 0x1E9080u: goto label_1e9080;
            case 0x1E9084u: goto label_1e9084;
            case 0x1E9088u: goto label_1e9088;
            case 0x1E908Cu: goto label_1e908c;
            case 0x1E9090u: goto label_1e9090;
            case 0x1E9094u: goto label_1e9094;
            case 0x1E9098u: goto label_1e9098;
            case 0x1E909Cu: goto label_1e909c;
            case 0x1E90A0u: goto label_1e90a0;
            case 0x1E90A4u: goto label_1e90a4;
            case 0x1E90A8u: goto label_1e90a8;
            case 0x1E90ACu: goto label_1e90ac;
            case 0x1E90B0u: goto label_1e90b0;
            case 0x1E90B4u: goto label_1e90b4;
            case 0x1E90B8u: goto label_1e90b8;
            case 0x1E90BCu: goto label_1e90bc;
            case 0x1E90C0u: goto label_1e90c0;
            case 0x1E90C4u: goto label_1e90c4;
            case 0x1E90C8u: goto label_1e90c8;
            case 0x1E90CCu: goto label_1e90cc;
            case 0x1E90D0u: goto label_1e90d0;
            case 0x1E90D4u: goto label_1e90d4;
            case 0x1E90D8u: goto label_1e90d8;
            case 0x1E90DCu: goto label_1e90dc;
            case 0x1E90E0u: goto label_1e90e0;
            case 0x1E90E4u: goto label_1e90e4;
            case 0x1E90E8u: goto label_1e90e8;
            case 0x1E90ECu: goto label_1e90ec;
            case 0x1E90F0u: goto label_1e90f0;
            case 0x1E90F4u: goto label_1e90f4;
            case 0x1E90F8u: goto label_1e90f8;
            case 0x1E90FCu: goto label_1e90fc;
            case 0x1E9100u: goto label_1e9100;
            case 0x1E9104u: goto label_1e9104;
            case 0x1E9108u: goto label_1e9108;
            case 0x1E910Cu: goto label_1e910c;
            case 0x1E9110u: goto label_1e9110;
            case 0x1E9114u: goto label_1e9114;
            case 0x1E9118u: goto label_1e9118;
            case 0x1E911Cu: goto label_1e911c;
            case 0x1E9120u: goto label_1e9120;
            case 0x1E9124u: goto label_1e9124;
            case 0x1E9128u: goto label_1e9128;
            case 0x1E912Cu: goto label_1e912c;
            case 0x1E9130u: goto label_1e9130;
            case 0x1E9134u: goto label_1e9134;
            case 0x1E9138u: goto label_1e9138;
            case 0x1E913Cu: goto label_1e913c;
            case 0x1E9140u: goto label_1e9140;
            case 0x1E9144u: goto label_1e9144;
            case 0x1E9148u: goto label_1e9148;
            case 0x1E914Cu: goto label_1e914c;
            case 0x1E9150u: goto label_1e9150;
            case 0x1E9154u: goto label_1e9154;
            case 0x1E9158u: goto label_1e9158;
            case 0x1E915Cu: goto label_1e915c;
            case 0x1E9160u: goto label_1e9160;
            case 0x1E9164u: goto label_1e9164;
            case 0x1E9168u: goto label_1e9168;
            case 0x1E916Cu: goto label_1e916c;
            case 0x1E9170u: goto label_1e9170;
            case 0x1E9174u: goto label_1e9174;
            case 0x1E9178u: goto label_1e9178;
            case 0x1E917Cu: goto label_1e917c;
            case 0x1E9180u: goto label_1e9180;
            case 0x1E9184u: goto label_1e9184;
            case 0x1E9188u: goto label_1e9188;
            case 0x1E918Cu: goto label_1e918c;
            case 0x1E9190u: goto label_1e9190;
            case 0x1E9194u: goto label_1e9194;
            case 0x1E9198u: goto label_1e9198;
            case 0x1E919Cu: goto label_1e919c;
            case 0x1E91A0u: goto label_1e91a0;
            case 0x1E91A4u: goto label_1e91a4;
            case 0x1E91A8u: goto label_1e91a8;
            case 0x1E91ACu: goto label_1e91ac;
            case 0x1E91B0u: goto label_1e91b0;
            case 0x1E91B4u: goto label_1e91b4;
            case 0x1E91B8u: goto label_1e91b8;
            case 0x1E91BCu: goto label_1e91bc;
            case 0x1E91C0u: goto label_1e91c0;
            case 0x1E91C4u: goto label_1e91c4;
            case 0x1E91C8u: goto label_1e91c8;
            case 0x1E91CCu: goto label_1e91cc;
            case 0x1E91D0u: goto label_1e91d0;
            case 0x1E91D4u: goto label_1e91d4;
            case 0x1E91D8u: goto label_1e91d8;
            case 0x1E91DCu: goto label_1e91dc;
            case 0x1E91E0u: goto label_1e91e0;
            case 0x1E91E4u: goto label_1e91e4;
            case 0x1E91E8u: goto label_1e91e8;
            case 0x1E91ECu: goto label_1e91ec;
            case 0x1E91F0u: goto label_1e91f0;
            case 0x1E91F4u: goto label_1e91f4;
            case 0x1E91F8u: goto label_1e91f8;
            case 0x1E91FCu: goto label_1e91fc;
            case 0x1E9200u: goto label_1e9200;
            case 0x1E9204u: goto label_1e9204;
            case 0x1E9208u: goto label_1e9208;
            case 0x1E920Cu: goto label_1e920c;
            case 0x1E9210u: goto label_1e9210;
            case 0x1E9214u: goto label_1e9214;
            case 0x1E9218u: goto label_1e9218;
            case 0x1E921Cu: goto label_1e921c;
            case 0x1E9220u: goto label_1e9220;
            case 0x1E9224u: goto label_1e9224;
            case 0x1E9228u: goto label_1e9228;
            case 0x1E922Cu: goto label_1e922c;
            case 0x1E9230u: goto label_1e9230;
            case 0x1E9234u: goto label_1e9234;
            case 0x1E9238u: goto label_1e9238;
            case 0x1E923Cu: goto label_1e923c;
            case 0x1E9240u: goto label_1e9240;
            case 0x1E9244u: goto label_1e9244;
            case 0x1E9248u: goto label_1e9248;
            case 0x1E924Cu: goto label_1e924c;
            case 0x1E9250u: goto label_1e9250;
            case 0x1E9254u: goto label_1e9254;
            case 0x1E9258u: goto label_1e9258;
            case 0x1E925Cu: goto label_1e925c;
            case 0x1E9260u: goto label_1e9260;
            case 0x1E9264u: goto label_1e9264;
            case 0x1E9268u: goto label_1e9268;
            case 0x1E926Cu: goto label_1e926c;
            case 0x1E9270u: goto label_1e9270;
            case 0x1E9274u: goto label_1e9274;
            case 0x1E9278u: goto label_1e9278;
            case 0x1E927Cu: goto label_1e927c;
            case 0x1E9280u: goto label_1e9280;
            case 0x1E9284u: goto label_1e9284;
            case 0x1E9288u: goto label_1e9288;
            case 0x1E928Cu: goto label_1e928c;
            case 0x1E9290u: goto label_1e9290;
            case 0x1E9294u: goto label_1e9294;
            case 0x1E9298u: goto label_1e9298;
            case 0x1E929Cu: goto label_1e929c;
            case 0x1E92A0u: goto label_1e92a0;
            case 0x1E92A4u: goto label_1e92a4;
            case 0x1E92A8u: goto label_1e92a8;
            case 0x1E92ACu: goto label_1e92ac;
            case 0x1E92B0u: goto label_1e92b0;
            case 0x1E92B4u: goto label_1e92b4;
            case 0x1E92B8u: goto label_1e92b8;
            case 0x1E92BCu: goto label_1e92bc;
            case 0x1E92C0u: goto label_1e92c0;
            case 0x1E92C4u: goto label_1e92c4;
            case 0x1E92C8u: goto label_1e92c8;
            case 0x1E92CCu: goto label_1e92cc;
            case 0x1E92D0u: goto label_1e92d0;
            case 0x1E92D4u: goto label_1e92d4;
            case 0x1E92D8u: goto label_1e92d8;
            case 0x1E92DCu: goto label_1e92dc;
            case 0x1E92E0u: goto label_1e92e0;
            case 0x1E92E4u: goto label_1e92e4;
            case 0x1E92E8u: goto label_1e92e8;
            case 0x1E92ECu: goto label_1e92ec;
            case 0x1E92F0u: goto label_1e92f0;
            case 0x1E92F4u: goto label_1e92f4;
            case 0x1E92F8u: goto label_1e92f8;
            case 0x1E92FCu: goto label_1e92fc;
            case 0x1E9300u: goto label_1e9300;
            case 0x1E9304u: goto label_1e9304;
            case 0x1E9308u: goto label_1e9308;
            case 0x1E930Cu: goto label_1e930c;
            case 0x1E9310u: goto label_1e9310;
            case 0x1E9314u: goto label_1e9314;
            case 0x1E9318u: goto label_1e9318;
            case 0x1E931Cu: goto label_1e931c;
            case 0x1E9320u: goto label_1e9320;
            case 0x1E9324u: goto label_1e9324;
            case 0x1E9328u: goto label_1e9328;
            case 0x1E932Cu: goto label_1e932c;
            case 0x1E9330u: goto label_1e9330;
            case 0x1E9334u: goto label_1e9334;
            case 0x1E9338u: goto label_1e9338;
            case 0x1E933Cu: goto label_1e933c;
            case 0x1E9340u: goto label_1e9340;
            case 0x1E9344u: goto label_1e9344;
            case 0x1E9348u: goto label_1e9348;
            case 0x1E934Cu: goto label_1e934c;
            case 0x1E9350u: goto label_1e9350;
            case 0x1E9354u: goto label_1e9354;
            case 0x1E9358u: goto label_1e9358;
            case 0x1E935Cu: goto label_1e935c;
            case 0x1E9360u: goto label_1e9360;
            case 0x1E9364u: goto label_1e9364;
            case 0x1E9368u: goto label_1e9368;
            case 0x1E936Cu: goto label_1e936c;
            case 0x1E9370u: goto label_1e9370;
            case 0x1E9374u: goto label_1e9374;
            case 0x1E9378u: goto label_1e9378;
            case 0x1E937Cu: goto label_1e937c;
            case 0x1E9380u: goto label_1e9380;
            case 0x1E9384u: goto label_1e9384;
            case 0x1E9388u: goto label_1e9388;
            case 0x1E938Cu: goto label_1e938c;
            case 0x1E9390u: goto label_1e9390;
            case 0x1E9394u: goto label_1e9394;
            case 0x1E9398u: goto label_1e9398;
            case 0x1E939Cu: goto label_1e939c;
            case 0x1E93A0u: goto label_1e93a0;
            case 0x1E93A4u: goto label_1e93a4;
            case 0x1E93A8u: goto label_1e93a8;
            case 0x1E93ACu: goto label_1e93ac;
            case 0x1E93B0u: goto label_1e93b0;
            case 0x1E93B4u: goto label_1e93b4;
            case 0x1E93B8u: goto label_1e93b8;
            case 0x1E93BCu: goto label_1e93bc;
            case 0x1E93C0u: goto label_1e93c0;
            case 0x1E93C4u: goto label_1e93c4;
            case 0x1E93C8u: goto label_1e93c8;
            case 0x1E93CCu: goto label_1e93cc;
            case 0x1E93D0u: goto label_1e93d0;
            case 0x1E93D4u: goto label_1e93d4;
            case 0x1E93D8u: goto label_1e93d8;
            case 0x1E93DCu: goto label_1e93dc;
            case 0x1E93E0u: goto label_1e93e0;
            case 0x1E93E4u: goto label_1e93e4;
            case 0x1E93E8u: goto label_1e93e8;
            case 0x1E93ECu: goto label_1e93ec;
            case 0x1E93F0u: goto label_1e93f0;
            case 0x1E93F4u: goto label_1e93f4;
            case 0x1E93F8u: goto label_1e93f8;
            case 0x1E93FCu: goto label_1e93fc;
            case 0x1E9400u: goto label_1e9400;
            case 0x1E9404u: goto label_1e9404;
            case 0x1E9408u: goto label_1e9408;
            case 0x1E940Cu: goto label_1e940c;
            case 0x1E9410u: goto label_1e9410;
            case 0x1E9414u: goto label_1e9414;
            case 0x1E9418u: goto label_1e9418;
            case 0x1E941Cu: goto label_1e941c;
            case 0x1E9420u: goto label_1e9420;
            case 0x1E9424u: goto label_1e9424;
            case 0x1E9428u: goto label_1e9428;
            case 0x1E942Cu: goto label_1e942c;
            case 0x1E9430u: goto label_1e9430;
            case 0x1E9434u: goto label_1e9434;
            case 0x1E9438u: goto label_1e9438;
            case 0x1E943Cu: goto label_1e943c;
            case 0x1E9440u: goto label_1e9440;
            case 0x1E9444u: goto label_1e9444;
            case 0x1E9448u: goto label_1e9448;
            case 0x1E944Cu: goto label_1e944c;
            case 0x1E9450u: goto label_1e9450;
            case 0x1E9454u: goto label_1e9454;
            case 0x1E9458u: goto label_1e9458;
            case 0x1E945Cu: goto label_1e945c;
            case 0x1E9460u: goto label_1e9460;
            case 0x1E9464u: goto label_1e9464;
            case 0x1E9468u: goto label_1e9468;
            case 0x1E946Cu: goto label_1e946c;
            case 0x1E9470u: goto label_1e9470;
            case 0x1E9474u: goto label_1e9474;
            case 0x1E9478u: goto label_1e9478;
            case 0x1E947Cu: goto label_1e947c;
            case 0x1E9480u: goto label_1e9480;
            case 0x1E9484u: goto label_1e9484;
            case 0x1E9488u: goto label_1e9488;
            case 0x1E948Cu: goto label_1e948c;
            case 0x1E9490u: goto label_1e9490;
            case 0x1E9494u: goto label_1e9494;
            case 0x1E9498u: goto label_1e9498;
            case 0x1E949Cu: goto label_1e949c;
            case 0x1E94A0u: goto label_1e94a0;
            case 0x1E94A4u: goto label_1e94a4;
            case 0x1E94A8u: goto label_1e94a8;
            case 0x1E94ACu: goto label_1e94ac;
            case 0x1E94B0u: goto label_1e94b0;
            case 0x1E94B4u: goto label_1e94b4;
            case 0x1E94B8u: goto label_1e94b8;
            case 0x1E94BCu: goto label_1e94bc;
            case 0x1E94C0u: goto label_1e94c0;
            case 0x1E94C4u: goto label_1e94c4;
            case 0x1E94C8u: goto label_1e94c8;
            case 0x1E94CCu: goto label_1e94cc;
            case 0x1E94D0u: goto label_1e94d0;
            case 0x1E94D4u: goto label_1e94d4;
            case 0x1E94D8u: goto label_1e94d8;
            case 0x1E94DCu: goto label_1e94dc;
            case 0x1E94E0u: goto label_1e94e0;
            case 0x1E94E4u: goto label_1e94e4;
            case 0x1E94E8u: goto label_1e94e8;
            case 0x1E94ECu: goto label_1e94ec;
            case 0x1E94F0u: goto label_1e94f0;
            case 0x1E94F4u: goto label_1e94f4;
            case 0x1E94F8u: goto label_1e94f8;
            case 0x1E94FCu: goto label_1e94fc;
            case 0x1E9500u: goto label_1e9500;
            case 0x1E9504u: goto label_1e9504;
            case 0x1E9508u: goto label_1e9508;
            case 0x1E950Cu: goto label_1e950c;
            case 0x1E9510u: goto label_1e9510;
            case 0x1E9514u: goto label_1e9514;
            case 0x1E9518u: goto label_1e9518;
            case 0x1E951Cu: goto label_1e951c;
            case 0x1E9520u: goto label_1e9520;
            case 0x1E9524u: goto label_1e9524;
            case 0x1E9528u: goto label_1e9528;
            case 0x1E952Cu: goto label_1e952c;
            case 0x1E9530u: goto label_1e9530;
            case 0x1E9534u: goto label_1e9534;
            case 0x1E9538u: goto label_1e9538;
            case 0x1E953Cu: goto label_1e953c;
            case 0x1E9540u: goto label_1e9540;
            case 0x1E9544u: goto label_1e9544;
            case 0x1E9548u: goto label_1e9548;
            case 0x1E954Cu: goto label_1e954c;
            case 0x1E9550u: goto label_1e9550;
            case 0x1E9554u: goto label_1e9554;
            case 0x1E9558u: goto label_1e9558;
            case 0x1E955Cu: goto label_1e955c;
            case 0x1E9560u: goto label_1e9560;
            case 0x1E9564u: goto label_1e9564;
            case 0x1E9568u: goto label_1e9568;
            case 0x1E956Cu: goto label_1e956c;
            case 0x1E9570u: goto label_1e9570;
            case 0x1E9574u: goto label_1e9574;
            case 0x1E9578u: goto label_1e9578;
            case 0x1E957Cu: goto label_1e957c;
            case 0x1E9580u: goto label_1e9580;
            case 0x1E9584u: goto label_1e9584;
            case 0x1E9588u: goto label_1e9588;
            case 0x1E958Cu: goto label_1e958c;
            case 0x1E9590u: goto label_1e9590;
            case 0x1E9594u: goto label_1e9594;
            case 0x1E9598u: goto label_1e9598;
            case 0x1E959Cu: goto label_1e959c;
            case 0x1E95A0u: goto label_1e95a0;
            case 0x1E95A4u: goto label_1e95a4;
            case 0x1E95A8u: goto label_1e95a8;
            case 0x1E95ACu: goto label_1e95ac;
            case 0x1E95B0u: goto label_1e95b0;
            case 0x1E95B4u: goto label_1e95b4;
            case 0x1E95B8u: goto label_1e95b8;
            case 0x1E95BCu: goto label_1e95bc;
            case 0x1E95C0u: goto label_1e95c0;
            case 0x1E95C4u: goto label_1e95c4;
            case 0x1E95C8u: goto label_1e95c8;
            case 0x1E95CCu: goto label_1e95cc;
            case 0x1E95D0u: goto label_1e95d0;
            case 0x1E95D4u: goto label_1e95d4;
            case 0x1E95D8u: goto label_1e95d8;
            case 0x1E95DCu: goto label_1e95dc;
            case 0x1E95E0u: goto label_1e95e0;
            case 0x1E95E4u: goto label_1e95e4;
            case 0x1E95E8u: goto label_1e95e8;
            case 0x1E95ECu: goto label_1e95ec;
            case 0x1E95F0u: goto label_1e95f0;
            case 0x1E95F4u: goto label_1e95f4;
            case 0x1E95F8u: goto label_1e95f8;
            case 0x1E95FCu: goto label_1e95fc;
            case 0x1E9600u: goto label_1e9600;
            case 0x1E9604u: goto label_1e9604;
            case 0x1E9608u: goto label_1e9608;
            case 0x1E960Cu: goto label_1e960c;
            case 0x1E9610u: goto label_1e9610;
            case 0x1E9614u: goto label_1e9614;
            case 0x1E9618u: goto label_1e9618;
            case 0x1E961Cu: goto label_1e961c;
            case 0x1E9620u: goto label_1e9620;
            case 0x1E9624u: goto label_1e9624;
            case 0x1E9628u: goto label_1e9628;
            case 0x1E962Cu: goto label_1e962c;
            case 0x1E9630u: goto label_1e9630;
            case 0x1E9634u: goto label_1e9634;
            case 0x1E9638u: goto label_1e9638;
            case 0x1E963Cu: goto label_1e963c;
            case 0x1E9640u: goto label_1e9640;
            case 0x1E9644u: goto label_1e9644;
            case 0x1E9648u: goto label_1e9648;
            case 0x1E964Cu: goto label_1e964c;
            case 0x1E9650u: goto label_1e9650;
            case 0x1E9654u: goto label_1e9654;
            case 0x1E9658u: goto label_1e9658;
            case 0x1E965Cu: goto label_1e965c;
            case 0x1E9660u: goto label_1e9660;
            case 0x1E9664u: goto label_1e9664;
            case 0x1E9668u: goto label_1e9668;
            case 0x1E966Cu: goto label_1e966c;
            case 0x1E9670u: goto label_1e9670;
            case 0x1E9674u: goto label_1e9674;
            case 0x1E9678u: goto label_1e9678;
            case 0x1E967Cu: goto label_1e967c;
            case 0x1E9680u: goto label_1e9680;
            case 0x1E9684u: goto label_1e9684;
            case 0x1E9688u: goto label_1e9688;
            case 0x1E968Cu: goto label_1e968c;
            case 0x1E9690u: goto label_1e9690;
            case 0x1E9694u: goto label_1e9694;
            case 0x1E9698u: goto label_1e9698;
            case 0x1E969Cu: goto label_1e969c;
            case 0x1E96A0u: goto label_1e96a0;
            case 0x1E96A4u: goto label_1e96a4;
            case 0x1E96A8u: goto label_1e96a8;
            case 0x1E96ACu: goto label_1e96ac;
            case 0x1E96B0u: goto label_1e96b0;
            case 0x1E96B4u: goto label_1e96b4;
            case 0x1E96B8u: goto label_1e96b8;
            case 0x1E96BCu: goto label_1e96bc;
            case 0x1E96C0u: goto label_1e96c0;
            case 0x1E96C4u: goto label_1e96c4;
            case 0x1E96C8u: goto label_1e96c8;
            case 0x1E96CCu: goto label_1e96cc;
            case 0x1E96D0u: goto label_1e96d0;
            case 0x1E96D4u: goto label_1e96d4;
            case 0x1E96D8u: goto label_1e96d8;
            case 0x1E96DCu: goto label_1e96dc;
            case 0x1E96E0u: goto label_1e96e0;
            case 0x1E96E4u: goto label_1e96e4;
            case 0x1E96E8u: goto label_1e96e8;
            case 0x1E96ECu: goto label_1e96ec;
            case 0x1E96F0u: goto label_1e96f0;
            case 0x1E96F4u: goto label_1e96f4;
            case 0x1E96F8u: goto label_1e96f8;
            case 0x1E96FCu: goto label_1e96fc;
            case 0x1E9700u: goto label_1e9700;
            case 0x1E9704u: goto label_1e9704;
            case 0x1E9708u: goto label_1e9708;
            case 0x1E970Cu: goto label_1e970c;
            case 0x1E9710u: goto label_1e9710;
            case 0x1E9714u: goto label_1e9714;
            case 0x1E9718u: goto label_1e9718;
            case 0x1E971Cu: goto label_1e971c;
            case 0x1E9720u: goto label_1e9720;
            case 0x1E9724u: goto label_1e9724;
            case 0x1E9728u: goto label_1e9728;
            case 0x1E972Cu: goto label_1e972c;
            case 0x1E9730u: goto label_1e9730;
            case 0x1E9734u: goto label_1e9734;
            case 0x1E9738u: goto label_1e9738;
            case 0x1E973Cu: goto label_1e973c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1e9738:
    ctx->pc = 0x1E9740u;
}

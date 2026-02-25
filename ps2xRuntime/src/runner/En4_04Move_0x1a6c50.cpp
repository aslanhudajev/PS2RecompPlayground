#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En4_04Move
// Address: 0x1a6c50 - 0x1a7ec4
void En4_04Move_0x1a6c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En4_04Move_0x1a6c50");
#endif

    ctx->pc = 0x1a6c50u;

label_1a6c50:
    // 0x1a6c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a6c54:
    // 0x1a6c54: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a6c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a6c58:
    // 0x1a6c58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a6c5c:
    // 0x1a6c5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a6c5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a6c60:
    // 0x1a6c60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a6c64:
    // 0x1a6c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6c68:
    // 0x1a6c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a6c6c:
    // 0x1a6c6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6c70:
    // 0x1a6c70: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1a6c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6c74:
    // 0x1a6c74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6c78:
    // 0x1a6c78: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1a6c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6c7c:
    // 0x1a6c7c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a6c7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a6c80:
    // 0x1a6c80: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1a6c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1a6c84:
    // 0x1a6c84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6c88:
    // 0x1a6c88: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1a6c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6c8c:
    // 0x1a6c8c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1a6c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6c90:
    // 0x1a6c90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a6c90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a6c94:
    // 0x1a6c94: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1a6c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1a6c98:
    // 0x1a6c98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6c9c:
    // 0x1a6c9c: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1a6c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6ca0:
    // 0x1a6ca0: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a6ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6ca4:
    // 0x1a6ca4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a6ca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a6ca8:
    // 0x1a6ca8: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1a6ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1a6cac:
    // 0x1a6cac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6cb0:
    // 0x1a6cb0: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1a6cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6cb4:
    // 0x1a6cb4: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1a6cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6cb8:
    // 0x1a6cb8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a6cb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a6cbc:
    // 0x1a6cbc: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1a6cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1a6cc0:
    // 0x1a6cc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6cc4:
    // 0x1a6cc4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a6cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6cc8:
    // 0x1a6cc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a6cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6ccc:
    // 0x1a6ccc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1a6cd0:
    if (ctx->pc == 0x1A6CD0u) {
        ctx->pc = 0x1A6CD0u;
            // 0x1a6cd0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1A6CD4u;
        goto label_1a6cd4;
    }
    ctx->pc = 0x1A6CCCu;
    {
        const bool branch_taken_0x1a6ccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6CCCu;
            // 0x1a6cd0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ccc) {
            ctx->pc = 0x1A6CF0u;
            goto label_1a6cf0;
        }
    }
    ctx->pc = 0x1A6CD4u;
label_1a6cd4:
    // 0x1a6cd4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a6cd8:
    // 0x1a6cd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a6cd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a6cdc:
    // 0x1a6cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6ce0:
    // 0x1a6ce0: 0x0  nop
    ctx->pc = 0x1a6ce0u;
    // NOP
label_1a6ce4:
    // 0x1a6ce4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a6ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6ce8:
    // 0x1a6ce8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1a6ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1a6cec:
    // 0x1a6cec: 0x0  nop
    ctx->pc = 0x1a6cecu;
    // NOP
label_1a6cf0:
    // 0x1a6cf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a6cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6cf4:
    // 0x1a6cf4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a6cf8:
    // 0x1a6cf8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a6cf8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a6cfc:
    // 0x1a6cfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6d00:
    // 0x1a6d00: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1a6d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6d04:
    // 0x1a6d04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a6d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6d08:
    // 0x1a6d08: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a6d0c:
    if (ctx->pc == 0x1A6D0Cu) {
        ctx->pc = 0x1A6D0Cu;
            // 0x1a6d0c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1A6D10u;
        goto label_1a6d10;
    }
    ctx->pc = 0x1A6D08u;
    {
        const bool branch_taken_0x1a6d08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D08u;
            // 0x1a6d0c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d08) {
            ctx->pc = 0x1A6D28u;
            goto label_1a6d28;
        }
    }
    ctx->pc = 0x1A6D10u;
label_1a6d10:
    // 0x1a6d10: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a6d14:
    // 0x1a6d14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a6d14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a6d18:
    // 0x1a6d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6d1c:
    // 0x1a6d1c: 0x0  nop
    ctx->pc = 0x1a6d1cu;
    // NOP
label_1a6d20:
    // 0x1a6d20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a6d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a6d24:
    // 0x1a6d24: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a6d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a6d28:
    // 0x1a6d28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a6d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d2c:
    // 0x1a6d2c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a6d30:
    // 0x1a6d30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a6d30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a6d34:
    // 0x1a6d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6d38:
    // 0x1a6d38: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1a6d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6d3c:
    // 0x1a6d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a6d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6d40:
    // 0x1a6d40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a6d44:
    if (ctx->pc == 0x1A6D44u) {
        ctx->pc = 0x1A6D44u;
            // 0x1a6d44: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1A6D48u;
        goto label_1a6d48;
    }
    ctx->pc = 0x1A6D40u;
    {
        const bool branch_taken_0x1a6d40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D40u;
            // 0x1a6d44: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d40) {
            ctx->pc = 0x1A6D60u;
            goto label_1a6d60;
        }
    }
    ctx->pc = 0x1A6D48u;
label_1a6d48:
    // 0x1a6d48: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a6d4c:
    // 0x1a6d4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a6d4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a6d50:
    // 0x1a6d50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6d54:
    // 0x1a6d54: 0x0  nop
    ctx->pc = 0x1a6d54u;
    // NOP
label_1a6d58:
    // 0x1a6d58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a6d58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6d5c:
    // 0x1a6d5c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a6d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a6d60:
    // 0x1a6d60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a6d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d64:
    // 0x1a6d64: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a6d68:
    // 0x1a6d68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a6d68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a6d6c:
    // 0x1a6d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6d70:
    // 0x1a6d70: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1a6d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6d74:
    // 0x1a6d74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a6d74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6d78:
    // 0x1a6d78: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a6d7c:
    if (ctx->pc == 0x1A6D7Cu) {
        ctx->pc = 0x1A6D7Cu;
            // 0x1a6d7c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1A6D80u;
        goto label_1a6d80;
    }
    ctx->pc = 0x1A6D78u;
    {
        const bool branch_taken_0x1a6d78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D78u;
            // 0x1a6d7c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d78) {
            ctx->pc = 0x1A6D98u;
            goto label_1a6d98;
        }
    }
    ctx->pc = 0x1A6D80u;
label_1a6d80:
    // 0x1a6d80: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a6d84:
    // 0x1a6d84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a6d84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a6d88:
    // 0x1a6d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6d8c:
    // 0x1a6d8c: 0x0  nop
    ctx->pc = 0x1a6d8cu;
    // NOP
label_1a6d90:
    // 0x1a6d90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a6d90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a6d94:
    // 0x1a6d94: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a6d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a6d98:
    // 0x1a6d98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d9c:
    // 0x1a6d9c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1a6d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1a6da0:
    // 0x1a6da0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a6da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6da4:
    // 0x1a6da4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a6da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a6da8:
    // 0x1a6da8: 0xc069fb4  jal         func_1A7ED0
label_1a6dac:
    if (ctx->pc == 0x1A6DACu) {
        ctx->pc = 0x1A6DACu;
            // 0x1a6dac: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x1A6DB0u;
        goto label_1a6db0;
    }
    ctx->pc = 0x1A6DA8u;
    SET_GPR_U32(ctx, 31, 0x1A6DB0u);
    ctx->pc = 0x1A6DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DA8u;
            // 0x1a6dac: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7ED0u;
    if (runtime->hasFunction(0x1A7ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1A7ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DB0u; }
        if (ctx->pc != 0x1A6DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1a7ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DB0u; }
        if (ctx->pc != 0x1A6DB0u) { return; }
    }
    ctx->pc = 0x1A6DB0u;
label_1a6db0:
    // 0x1a6db0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a6db4:
    // 0x1a6db4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1a6db8:
    // 0x1a6db8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a6dbc:
    // 0x1a6dbc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a6dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1a6dc0:
    // 0x1a6dc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a6dc4:
    // 0x1a6dc4: 0x18400278  blez        $v0, . + 4 + (0x278 << 2)
label_1a6dc8:
    if (ctx->pc == 0x1A6DC8u) {
        ctx->pc = 0x1A6DCCu;
        goto label_1a6dcc;
    }
    ctx->pc = 0x1A6DC4u;
    {
        const bool branch_taken_0x1a6dc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a6dc4) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A6DCCu;
label_1a6dcc:
    // 0x1a6dcc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a6dd0:
    // 0x1a6dd0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1a6dd4:
    if (ctx->pc == 0x1A6DD4u) {
        ctx->pc = 0x1A6DD8u;
        goto label_1a6dd8;
    }
    ctx->pc = 0x1A6DD0u;
    {
        const bool branch_taken_0x1a6dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6dd0) {
            ctx->pc = 0x1A6E48u;
            goto label_1a6e48;
        }
    }
    ctx->pc = 0x1A6DD8u;
label_1a6dd8:
    // 0x1a6dd8: 0xc050bb4  jal         func_142ED0
label_1a6ddc:
    if (ctx->pc == 0x1A6DDCu) {
        ctx->pc = 0x1A6DE0u;
        goto label_1a6de0;
    }
    ctx->pc = 0x1A6DD8u;
    SET_GPR_U32(ctx, 31, 0x1A6DE0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DE0u; }
        if (ctx->pc != 0x1A6DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DE0u; }
        if (ctx->pc != 0x1A6DE0u) { return; }
    }
    ctx->pc = 0x1A6DE0u;
label_1a6de0:
    // 0x1a6de0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a6de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a6de4:
    // 0x1a6de4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1a6de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a6de8:
    // 0x1a6de8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a6de8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a6dec:
    // 0x1a6dec: 0x0  nop
    ctx->pc = 0x1a6decu;
    // NOP
label_1a6df0:
    // 0x1a6df0: 0x0  nop
    ctx->pc = 0x1a6df0u;
    // NOP
label_1a6df4:
    // 0x1a6df4: 0x1010  mfhi        $v0
    ctx->pc = 0x1a6df4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a6df8:
    // 0x1a6df8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1a6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a6dfc:
    // 0x1a6dfc: 0xc050bb4  jal         func_142ED0
label_1a6e00:
    if (ctx->pc == 0x1A6E00u) {
        ctx->pc = 0x1A6E00u;
            // 0x1a6e00: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1A6E04u;
        goto label_1a6e04;
    }
    ctx->pc = 0x1A6DFCu;
    SET_GPR_U32(ctx, 31, 0x1A6E04u);
    ctx->pc = 0x1A6E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DFCu;
            // 0x1a6e00: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E04u; }
        if (ctx->pc != 0x1A6E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E04u; }
        if (ctx->pc != 0x1A6E04u) { return; }
    }
    ctx->pc = 0x1A6E04u;
label_1a6e04:
    // 0x1a6e04: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a6e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a6e08:
    // 0x1a6e08: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1a6e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a6e0c:
    // 0x1a6e0c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a6e0cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a6e10:
    // 0x1a6e10: 0x0  nop
    ctx->pc = 0x1a6e10u;
    // NOP
label_1a6e14:
    // 0x1a6e14: 0x0  nop
    ctx->pc = 0x1a6e14u;
    // NOP
label_1a6e18:
    // 0x1a6e18: 0x1010  mfhi        $v0
    ctx->pc = 0x1a6e18u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a6e1c:
    // 0x1a6e1c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1a6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a6e20:
    // 0x1a6e20: 0xc050bb4  jal         func_142ED0
label_1a6e24:
    if (ctx->pc == 0x1A6E24u) {
        ctx->pc = 0x1A6E24u;
            // 0x1a6e24: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x1A6E28u;
        goto label_1a6e28;
    }
    ctx->pc = 0x1A6E20u;
    SET_GPR_U32(ctx, 31, 0x1A6E28u);
    ctx->pc = 0x1A6E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E20u;
            // 0x1a6e24: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E28u; }
        if (ctx->pc != 0x1A6E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E28u; }
        if (ctx->pc != 0x1A6E28u) { return; }
    }
    ctx->pc = 0x1A6E28u;
label_1a6e28:
    // 0x1a6e28: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a6e2c:
    // 0x1a6e2c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a6e2cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a6e30:
    // 0x1a6e30: 0x0  nop
    ctx->pc = 0x1a6e30u;
    // NOP
label_1a6e34:
    // 0x1a6e34: 0x0  nop
    ctx->pc = 0x1a6e34u;
    // NOP
label_1a6e38:
    // 0x1a6e38: 0x1010  mfhi        $v0
    ctx->pc = 0x1a6e38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a6e3c:
    // 0x1a6e3c: 0x1000025a  b           . + 4 + (0x25A << 2)
label_1a6e40:
    if (ctx->pc == 0x1A6E40u) {
        ctx->pc = 0x1A6E40u;
            // 0x1a6e40: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->pc = 0x1A6E44u;
        goto label_1a6e44;
    }
    ctx->pc = 0x1A6E3Cu;
    {
        const bool branch_taken_0x1a6e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E3Cu;
            // 0x1a6e40: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e3c) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A6E44u;
label_1a6e44:
    // 0x1a6e44: 0x0  nop
    ctx->pc = 0x1a6e44u;
    // NOP
label_1a6e48:
    // 0x1a6e48: 0x28410104  slti        $at, $v0, 0x104
    ctx->pc = 0x1a6e48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)260) ? 1 : 0);
label_1a6e4c:
    // 0x1a6e4c: 0x10200256  beqz        $at, . + 4 + (0x256 << 2)
label_1a6e50:
    if (ctx->pc == 0x1A6E50u) {
        ctx->pc = 0x1A6E54u;
        goto label_1a6e54;
    }
    ctx->pc = 0x1A6E4Cu;
    {
        const bool branch_taken_0x1a6e4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6e4c) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A6E54u;
label_1a6e54:
    // 0x1a6e54: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a6e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6e58:
    // 0x1a6e58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a6e5c:
    // 0x1a6e5c: 0x3443a3d7  ori         $v1, $v0, 0xA3D7
    ctx->pc = 0x1a6e5cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)41943u)));
label_1a6e60:
    // 0x1a6e60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a6e60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6e64:
    // 0x1a6e64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a6e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a6e68:
    // 0x1a6e68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a6e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a6e6c:
    // 0x1a6e6c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a6e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a6e70:
    // 0x1a6e70: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a6e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a6e74:
    // 0x1a6e74: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a6e74u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a6e78:
    // 0x1a6e78: 0x0  nop
    ctx->pc = 0x1a6e78u;
    // NOP
label_1a6e7c:
    // 0x1a6e7c: 0x0  nop
    ctx->pc = 0x1a6e7cu;
    // NOP
label_1a6e80:
    // 0x1a6e80: 0x1010  mfhi        $v0
    ctx->pc = 0x1a6e80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a6e84:
    // 0x1a6e84: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1a6e88:
    if (ctx->pc == 0x1A6E88u) {
        ctx->pc = 0x1A6E8Cu;
        goto label_1a6e8c;
    }
    ctx->pc = 0x1A6E84u;
    {
        const bool branch_taken_0x1a6e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6e84) {
            ctx->pc = 0x1A6EB0u;
            goto label_1a6eb0;
        }
    }
    ctx->pc = 0x1A6E8Cu;
label_1a6e8c:
    // 0x1a6e8c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a6e90:
    // 0x1a6e90: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a6e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a6e94:
    // 0x1a6e94: 0xc0655a0  jal         func_195680
label_1a6e98:
    if (ctx->pc == 0x1A6E98u) {
        ctx->pc = 0x1A6E98u;
            // 0x1a6e98: 0x24440019  addiu       $a0, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x1A6E9Cu;
        goto label_1a6e9c;
    }
    ctx->pc = 0x1A6E94u;
    SET_GPR_U32(ctx, 31, 0x1A6E9Cu);
    ctx->pc = 0x1A6E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E94u;
            // 0x1a6e98: 0x24440019  addiu       $a0, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E9Cu; }
        if (ctx->pc != 0x1A6E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E9Cu; }
        if (ctx->pc != 0x1A6E9Cu) { return; }
    }
    ctx->pc = 0x1A6E9Cu;
label_1a6e9c:
    // 0x1a6e9c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a6ea0:
    // 0x1a6ea0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a6ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a6ea4:
    // 0x1a6ea4: 0xc0655a0  jal         func_195680
label_1a6ea8:
    if (ctx->pc == 0x1A6EA8u) {
        ctx->pc = 0x1A6EA8u;
            // 0x1a6ea8: 0x2444ffe7  addiu       $a0, $v0, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
        ctx->pc = 0x1A6EACu;
        goto label_1a6eac;
    }
    ctx->pc = 0x1A6EA4u;
    SET_GPR_U32(ctx, 31, 0x1A6EACu);
    ctx->pc = 0x1A6EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EA4u;
            // 0x1a6ea8: 0x2444ffe7  addiu       $a0, $v0, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6EACu; }
        if (ctx->pc != 0x1A6EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6EACu; }
        if (ctx->pc != 0x1A6EACu) { return; }
    }
    ctx->pc = 0x1A6EACu;
label_1a6eac:
    // 0x1a6eac: 0x0  nop
    ctx->pc = 0x1a6eacu;
    // NOP
label_1a6eb0:
    // 0x1a6eb0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a6eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a6eb4:
    // 0x1a6eb4: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1a6eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_1a6eb8:
    // 0x1a6eb8: 0x1062021f  beq         $v1, $v0, . + 4 + (0x21F << 2)
label_1a6ebc:
    if (ctx->pc == 0x1A6EBCu) {
        ctx->pc = 0x1A6EBCu;
            // 0x1a6ebc: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x1A6EC0u;
        goto label_1a6ec0;
    }
    ctx->pc = 0x1A6EB8u;
    {
        const bool branch_taken_0x1a6eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EB8u;
            // 0x1a6ebc: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6eb8) {
            ctx->pc = 0x1A7738u;
            goto label_1a7738;
        }
    }
    ctx->pc = 0x1A6EC0u;
label_1a6ec0:
    // 0x1a6ec0: 0x106201ff  beq         $v1, $v0, . + 4 + (0x1FF << 2)
label_1a6ec4:
    if (ctx->pc == 0x1A6EC4u) {
        ctx->pc = 0x1A6EC8u;
        goto label_1a6ec8;
    }
    ctx->pc = 0x1A6EC0u;
    {
        const bool branch_taken_0x1a6ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6ec0) {
            ctx->pc = 0x1A76C0u;
            goto label_1a76c0;
        }
    }
    ctx->pc = 0x1A6EC8u;
label_1a6ec8:
    // 0x1a6ec8: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x1a6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_1a6ecc:
    // 0x1a6ecc: 0x106201de  beq         $v1, $v0, . + 4 + (0x1DE << 2)
label_1a6ed0:
    if (ctx->pc == 0x1A6ED0u) {
        ctx->pc = 0x1A6ED0u;
            // 0x1a6ed0: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x1A6ED4u;
        goto label_1a6ed4;
    }
    ctx->pc = 0x1A6ECCu;
    {
        const bool branch_taken_0x1a6ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6ECCu;
            // 0x1a6ed0: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ecc) {
            ctx->pc = 0x1A7648u;
            goto label_1a7648;
        }
    }
    ctx->pc = 0x1A6ED4u;
label_1a6ed4:
    // 0x1a6ed4: 0x106201b2  beq         $v1, $v0, . + 4 + (0x1B2 << 2)
label_1a6ed8:
    if (ctx->pc == 0x1A6ED8u) {
        ctx->pc = 0x1A6EDCu;
        goto label_1a6edc;
    }
    ctx->pc = 0x1A6ED4u;
    {
        const bool branch_taken_0x1a6ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6ed4) {
            ctx->pc = 0x1A75A0u;
            goto label_1a75a0;
        }
    }
    ctx->pc = 0x1A6EDCu;
label_1a6edc:
    // 0x1a6edc: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1a6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_1a6ee0:
    // 0x1a6ee0: 0x10620183  beq         $v1, $v0, . + 4 + (0x183 << 2)
label_1a6ee4:
    if (ctx->pc == 0x1A6EE4u) {
        ctx->pc = 0x1A6EE4u;
            // 0x1a6ee4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1A6EE8u;
        goto label_1a6ee8;
    }
    ctx->pc = 0x1A6EE0u;
    {
        const bool branch_taken_0x1a6ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EE0u;
            // 0x1a6ee4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ee0) {
            ctx->pc = 0x1A74F0u;
            goto label_1a74f0;
        }
    }
    ctx->pc = 0x1A6EE8u;
label_1a6ee8:
    // 0x1a6ee8: 0x10620153  beq         $v1, $v0, . + 4 + (0x153 << 2)
label_1a6eec:
    if (ctx->pc == 0x1A6EECu) {
        ctx->pc = 0x1A6EF0u;
        goto label_1a6ef0;
    }
    ctx->pc = 0x1A6EE8u;
    {
        const bool branch_taken_0x1a6ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6ee8) {
            ctx->pc = 0x1A7438u;
            goto label_1a7438;
        }
    }
    ctx->pc = 0x1A6EF0u;
label_1a6ef0:
    // 0x1a6ef0: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1a6ef4:
    // 0x1a6ef4: 0x10620120  beq         $v1, $v0, . + 4 + (0x120 << 2)
label_1a6ef8:
    if (ctx->pc == 0x1A6EF8u) {
        ctx->pc = 0x1A6EF8u;
            // 0x1a6ef8: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x1A6EFCu;
        goto label_1a6efc;
    }
    ctx->pc = 0x1A6EF4u;
    {
        const bool branch_taken_0x1a6ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EF4u;
            // 0x1a6ef8: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ef4) {
            ctx->pc = 0x1A7378u;
            goto label_1a7378;
        }
    }
    ctx->pc = 0x1A6EFCu;
label_1a6efc:
    // 0x1a6efc: 0x106200f4  beq         $v1, $v0, . + 4 + (0xF4 << 2)
label_1a6f00:
    if (ctx->pc == 0x1A6F00u) {
        ctx->pc = 0x1A6F04u;
        goto label_1a6f04;
    }
    ctx->pc = 0x1A6EFCu;
    {
        const bool branch_taken_0x1a6efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6efc) {
            ctx->pc = 0x1A72D0u;
            goto label_1a72d0;
        }
    }
    ctx->pc = 0x1A6F04u;
label_1a6f04:
    // 0x1a6f04: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1a6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1a6f08:
    // 0x1a6f08: 0x106200c5  beq         $v1, $v0, . + 4 + (0xC5 << 2)
label_1a6f0c:
    if (ctx->pc == 0x1A6F0Cu) {
        ctx->pc = 0x1A6F0Cu;
            // 0x1a6f0c: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x1A6F10u;
        goto label_1a6f10;
    }
    ctx->pc = 0x1A6F08u;
    {
        const bool branch_taken_0x1a6f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F08u;
            // 0x1a6f0c: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f08) {
            ctx->pc = 0x1A7220u;
            goto label_1a7220;
        }
    }
    ctx->pc = 0x1A6F10u;
label_1a6f10:
    // 0x1a6f10: 0x10620093  beq         $v1, $v0, . + 4 + (0x93 << 2)
label_1a6f14:
    if (ctx->pc == 0x1A6F14u) {
        ctx->pc = 0x1A6F18u;
        goto label_1a6f18;
    }
    ctx->pc = 0x1A6F10u;
    {
        const bool branch_taken_0x1a6f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6f10) {
            ctx->pc = 0x1A7160u;
            goto label_1a7160;
        }
    }
    ctx->pc = 0x1A6F18u;
label_1a6f18:
    // 0x1a6f18: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1a6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1a6f1c:
    // 0x1a6f1c: 0x10620062  beq         $v1, $v0, . + 4 + (0x62 << 2)
label_1a6f20:
    if (ctx->pc == 0x1A6F20u) {
        ctx->pc = 0x1A6F20u;
            // 0x1a6f20: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1A6F24u;
        goto label_1a6f24;
    }
    ctx->pc = 0x1A6F1Cu;
    {
        const bool branch_taken_0x1a6f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F1Cu;
            // 0x1a6f20: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f1c) {
            ctx->pc = 0x1A70A8u;
            goto label_1a70a8;
        }
    }
    ctx->pc = 0x1A6F24u;
label_1a6f24:
    // 0x1a6f24: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
label_1a6f28:
    if (ctx->pc == 0x1A6F28u) {
        ctx->pc = 0x1A6F2Cu;
        goto label_1a6f2c;
    }
    ctx->pc = 0x1A6F24u;
    {
        const bool branch_taken_0x1a6f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6f24) {
            ctx->pc = 0x1A6FE8u;
            goto label_1a6fe8;
        }
    }
    ctx->pc = 0x1A6F2Cu;
label_1a6f2c:
    // 0x1a6f2c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1a6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a6f30:
    // 0x1a6f30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a6f34:
    if (ctx->pc == 0x1A6F34u) {
        ctx->pc = 0x1A6F38u;
        goto label_1a6f38;
    }
    ctx->pc = 0x1A6F30u;
    {
        const bool branch_taken_0x1a6f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6f30) {
            ctx->pc = 0x1A6F40u;
            goto label_1a6f40;
        }
    }
    ctx->pc = 0x1A6F38u;
label_1a6f38:
    // 0x1a6f38: 0x1000021b  b           . + 4 + (0x21B << 2)
label_1a6f3c:
    if (ctx->pc == 0x1A6F3Cu) {
        ctx->pc = 0x1A6F40u;
        goto label_1a6f40;
    }
    ctx->pc = 0x1A6F38u;
    {
        const bool branch_taken_0x1a6f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f38) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A6F40u;
label_1a6f40:
    // 0x1a6f40: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a6f44:
    // 0x1a6f44: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a6f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a6f48:
    // 0x1a6f48: 0xc0655a8  jal         func_1956A0
label_1a6f4c:
    if (ctx->pc == 0x1A6F4Cu) {
        ctx->pc = 0x1A6F4Cu;
            // 0x1a6f4c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A6F50u;
        goto label_1a6f50;
    }
    ctx->pc = 0x1A6F48u;
    SET_GPR_U32(ctx, 31, 0x1A6F50u);
    ctx->pc = 0x1A6F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F48u;
            // 0x1a6f4c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F50u; }
        if (ctx->pc != 0x1A6F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F50u; }
        if (ctx->pc != 0x1A6F50u) { return; }
    }
    ctx->pc = 0x1A6F50u;
label_1a6f50:
    // 0x1a6f50: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a6f54:
    // 0x1a6f54: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a6f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a6f58:
    // 0x1a6f58: 0xc0655a8  jal         func_1956A0
label_1a6f5c:
    if (ctx->pc == 0x1A6F5Cu) {
        ctx->pc = 0x1A6F5Cu;
            // 0x1a6f5c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1A6F60u;
        goto label_1a6f60;
    }
    ctx->pc = 0x1A6F58u;
    SET_GPR_U32(ctx, 31, 0x1A6F60u);
    ctx->pc = 0x1A6F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F58u;
            // 0x1a6f5c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F60u; }
        if (ctx->pc != 0x1A6F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F60u; }
        if (ctx->pc != 0x1A6F60u) { return; }
    }
    ctx->pc = 0x1A6F60u;
label_1a6f60:
    // 0x1a6f60: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a6f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a6f64:
    // 0x1a6f64: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a6f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a6f68:
    // 0x1a6f68: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a6f6c:
    // 0x1a6f6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a6f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a6f70:
    // 0x1a6f70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a6f74:
    // 0x1a6f74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a6f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a6f78:
    // 0x1a6f78: 0xc0655dc  jal         func_195770
label_1a6f7c:
    if (ctx->pc == 0x1A6F7Cu) {
        ctx->pc = 0x1A6F7Cu;
            // 0x1a6f7c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A6F80u;
        goto label_1a6f80;
    }
    ctx->pc = 0x1A6F78u;
    SET_GPR_U32(ctx, 31, 0x1A6F80u);
    ctx->pc = 0x1A6F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F78u;
            // 0x1a6f7c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F80u; }
        if (ctx->pc != 0x1A6F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F80u; }
        if (ctx->pc != 0x1A6F80u) { return; }
    }
    ctx->pc = 0x1A6F80u;
label_1a6f80:
    // 0x1a6f80: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a6f84:
    // 0x1a6f84: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a6f88:
    // 0x1a6f88: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a6f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a6f8c:
    // 0x1a6f8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a6f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a6f90:
    // 0x1a6f90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a6f94:
    // 0x1a6f94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a6f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a6f98:
    // 0x1a6f98: 0xc0655dc  jal         func_195770
label_1a6f9c:
    if (ctx->pc == 0x1A6F9Cu) {
        ctx->pc = 0x1A6F9Cu;
            // 0x1a6f9c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A6FA0u;
        goto label_1a6fa0;
    }
    ctx->pc = 0x1A6F98u;
    SET_GPR_U32(ctx, 31, 0x1A6FA0u);
    ctx->pc = 0x1A6F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F98u;
            // 0x1a6f9c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FA0u; }
        if (ctx->pc != 0x1A6FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FA0u; }
        if (ctx->pc != 0x1A6FA0u) { return; }
    }
    ctx->pc = 0x1A6FA0u;
label_1a6fa0:
    // 0x1a6fa0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a6fa4:
    // 0x1a6fa4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a6fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a6fa8:
    // 0x1a6fa8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a6fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a6fac:
    // 0x1a6fac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a6facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a6fb0:
    // 0x1a6fb0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a6fb4:
    // 0x1a6fb4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a6fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a6fb8:
    // 0x1a6fb8: 0xc0655dc  jal         func_195770
label_1a6fbc:
    if (ctx->pc == 0x1A6FBCu) {
        ctx->pc = 0x1A6FBCu;
            // 0x1a6fbc: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A6FC0u;
        goto label_1a6fc0;
    }
    ctx->pc = 0x1A6FB8u;
    SET_GPR_U32(ctx, 31, 0x1A6FC0u);
    ctx->pc = 0x1A6FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FB8u;
            // 0x1a6fbc: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FC0u; }
        if (ctx->pc != 0x1A6FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FC0u; }
        if (ctx->pc != 0x1A6FC0u) { return; }
    }
    ctx->pc = 0x1A6FC0u;
label_1a6fc0:
    // 0x1a6fc0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a6fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a6fc4:
    // 0x1a6fc4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a6fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a6fc8:
    // 0x1a6fc8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a6fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a6fcc:
    // 0x1a6fcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a6fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a6fd0:
    // 0x1a6fd0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a6fd4:
    // 0x1a6fd4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a6fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a6fd8:
    // 0x1a6fd8: 0xc0655dc  jal         func_195770
label_1a6fdc:
    if (ctx->pc == 0x1A6FDCu) {
        ctx->pc = 0x1A6FDCu;
            // 0x1a6fdc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A6FE0u;
        goto label_1a6fe0;
    }
    ctx->pc = 0x1A6FD8u;
    SET_GPR_U32(ctx, 31, 0x1A6FE0u);
    ctx->pc = 0x1A6FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FD8u;
            // 0x1a6fdc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FE0u; }
        if (ctx->pc != 0x1A6FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FE0u; }
        if (ctx->pc != 0x1A6FE0u) { return; }
    }
    ctx->pc = 0x1A6FE0u;
label_1a6fe0:
    // 0x1a6fe0: 0x100001f1  b           . + 4 + (0x1F1 << 2)
label_1a6fe4:
    if (ctx->pc == 0x1A6FE4u) {
        ctx->pc = 0x1A6FE8u;
        goto label_1a6fe8;
    }
    ctx->pc = 0x1A6FE0u;
    {
        const bool branch_taken_0x1a6fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6fe0) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A6FE8u;
label_1a6fe8:
    // 0x1a6fe8: 0xc065d00  jal         func_197400
label_1a6fec:
    if (ctx->pc == 0x1A6FECu) {
        ctx->pc = 0x1A6FF0u;
        goto label_1a6ff0;
    }
    ctx->pc = 0x1A6FE8u;
    SET_GPR_U32(ctx, 31, 0x1A6FF0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FF0u; }
        if (ctx->pc != 0x1A6FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FF0u; }
        if (ctx->pc != 0x1A6FF0u) { return; }
    }
    ctx->pc = 0x1A6FF0u;
label_1a6ff0:
    // 0x1a6ff0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a6ff0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a6ff4:
    // 0x1a6ff4: 0x142001ec  bnez        $at, . + 4 + (0x1EC << 2)
label_1a6ff8:
    if (ctx->pc == 0x1A6FF8u) {
        ctx->pc = 0x1A6FFCu;
        goto label_1a6ffc;
    }
    ctx->pc = 0x1A6FF4u;
    {
        const bool branch_taken_0x1a6ff4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6ff4) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A6FFCu;
label_1a6ffc:
    // 0x1a6ffc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7000:
    // 0x1a7000: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7004:
    // 0x1a7004: 0xc0655a8  jal         func_1956A0
label_1a7008:
    if (ctx->pc == 0x1A7008u) {
        ctx->pc = 0x1A7008u;
            // 0x1a7008: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A700Cu;
        goto label_1a700c;
    }
    ctx->pc = 0x1A7004u;
    SET_GPR_U32(ctx, 31, 0x1A700Cu);
    ctx->pc = 0x1A7008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7004u;
            // 0x1a7008: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A700Cu; }
        if (ctx->pc != 0x1A700Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A700Cu; }
        if (ctx->pc != 0x1A700Cu) { return; }
    }
    ctx->pc = 0x1A700Cu;
label_1a700c:
    // 0x1a700c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7010:
    // 0x1a7010: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7014:
    // 0x1a7014: 0xc0655a8  jal         func_1956A0
label_1a7018:
    if (ctx->pc == 0x1A7018u) {
        ctx->pc = 0x1A7018u;
            // 0x1a7018: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1A701Cu;
        goto label_1a701c;
    }
    ctx->pc = 0x1A7014u;
    SET_GPR_U32(ctx, 31, 0x1A701Cu);
    ctx->pc = 0x1A7018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7014u;
            // 0x1a7018: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A701Cu; }
        if (ctx->pc != 0x1A701Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A701Cu; }
        if (ctx->pc != 0x1A701Cu) { return; }
    }
    ctx->pc = 0x1A701Cu;
label_1a701c:
    // 0x1a701c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7020:
    // 0x1a7020: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1a7020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1a7024:
    // 0x1a7024: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7028:
    // 0x1a7028: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a702c:
    // 0x1a702c: 0x0  nop
    ctx->pc = 0x1a702cu;
    // NOP
label_1a7030:
    // 0x1a7030: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7030u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a7034:
    // 0x1a7034: 0xc0655dc  jal         func_195770
label_1a7038:
    if (ctx->pc == 0x1A7038u) {
        ctx->pc = 0x1A7038u;
            // 0x1a7038: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A703Cu;
        goto label_1a703c;
    }
    ctx->pc = 0x1A7034u;
    SET_GPR_U32(ctx, 31, 0x1A703Cu);
    ctx->pc = 0x1A7038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7034u;
            // 0x1a7038: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A703Cu; }
        if (ctx->pc != 0x1A703Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A703Cu; }
        if (ctx->pc != 0x1A703Cu) { return; }
    }
    ctx->pc = 0x1A703Cu;
label_1a703c:
    // 0x1a703c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7040:
    // 0x1a7040: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1a7040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1a7044:
    // 0x1a7044: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7048:
    // 0x1a7048: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a704c:
    // 0x1a704c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1a704cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1a7050:
    // 0x1a7050: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7054:
    // 0x1a7054: 0xc0655dc  jal         func_195770
label_1a7058:
    if (ctx->pc == 0x1A7058u) {
        ctx->pc = 0x1A7058u;
            // 0x1a7058: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A705Cu;
        goto label_1a705c;
    }
    ctx->pc = 0x1A7054u;
    SET_GPR_U32(ctx, 31, 0x1A705Cu);
    ctx->pc = 0x1A7058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7054u;
            // 0x1a7058: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A705Cu; }
        if (ctx->pc != 0x1A705Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A705Cu; }
        if (ctx->pc != 0x1A705Cu) { return; }
    }
    ctx->pc = 0x1A705Cu;
label_1a705c:
    // 0x1a705c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7060:
    // 0x1a7060: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1a7060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1a7064:
    // 0x1a7064: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7068:
    // 0x1a7068: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a706c:
    // 0x1a706c: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1a706cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1a7070:
    // 0x1a7070: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7074:
    // 0x1a7074: 0xc0655dc  jal         func_195770
label_1a7078:
    if (ctx->pc == 0x1A7078u) {
        ctx->pc = 0x1A7078u;
            // 0x1a7078: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A707Cu;
        goto label_1a707c;
    }
    ctx->pc = 0x1A7074u;
    SET_GPR_U32(ctx, 31, 0x1A707Cu);
    ctx->pc = 0x1A7078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7074u;
            // 0x1a7078: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A707Cu; }
        if (ctx->pc != 0x1A707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A707Cu; }
        if (ctx->pc != 0x1A707Cu) { return; }
    }
    ctx->pc = 0x1A707Cu;
label_1a707c:
    // 0x1a707c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7080:
    // 0x1a7080: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1a7080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1a7084:
    // 0x1a7084: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7088:
    // 0x1a7088: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a708c:
    // 0x1a708c: 0x0  nop
    ctx->pc = 0x1a708cu;
    // NOP
label_1a7090:
    // 0x1a7090: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7090u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a7094:
    // 0x1a7094: 0xc0655dc  jal         func_195770
label_1a7098:
    if (ctx->pc == 0x1A7098u) {
        ctx->pc = 0x1A7098u;
            // 0x1a7098: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A709Cu;
        goto label_1a709c;
    }
    ctx->pc = 0x1A7094u;
    SET_GPR_U32(ctx, 31, 0x1A709Cu);
    ctx->pc = 0x1A7098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7094u;
            // 0x1a7098: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A709Cu; }
        if (ctx->pc != 0x1A709Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A709Cu; }
        if (ctx->pc != 0x1A709Cu) { return; }
    }
    ctx->pc = 0x1A709Cu;
label_1a709c:
    // 0x1a709c: 0x100001c2  b           . + 4 + (0x1C2 << 2)
label_1a70a0:
    if (ctx->pc == 0x1A70A0u) {
        ctx->pc = 0x1A70A4u;
        goto label_1a70a4;
    }
    ctx->pc = 0x1A709Cu;
    {
        const bool branch_taken_0x1a709c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a709c) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A70A4u;
label_1a70a4:
    // 0x1a70a4: 0x0  nop
    ctx->pc = 0x1a70a4u;
    // NOP
label_1a70a8:
    // 0x1a70a8: 0xc065d00  jal         func_197400
label_1a70ac:
    if (ctx->pc == 0x1A70ACu) {
        ctx->pc = 0x1A70B0u;
        goto label_1a70b0;
    }
    ctx->pc = 0x1A70A8u;
    SET_GPR_U32(ctx, 31, 0x1A70B0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70B0u; }
        if (ctx->pc != 0x1A70B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70B0u; }
        if (ctx->pc != 0x1A70B0u) { return; }
    }
    ctx->pc = 0x1A70B0u;
label_1a70b0:
    // 0x1a70b0: 0x184001bd  blez        $v0, . + 4 + (0x1BD << 2)
label_1a70b4:
    if (ctx->pc == 0x1A70B4u) {
        ctx->pc = 0x1A70B8u;
        goto label_1a70b8;
    }
    ctx->pc = 0x1A70B0u;
    {
        const bool branch_taken_0x1a70b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a70b0) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A70B8u;
label_1a70b8:
    // 0x1a70b8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a70bc:
    // 0x1a70bc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a70bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a70c0:
    // 0x1a70c0: 0xc0655a8  jal         func_1956A0
label_1a70c4:
    if (ctx->pc == 0x1A70C4u) {
        ctx->pc = 0x1A70C4u;
            // 0x1a70c4: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A70C8u;
        goto label_1a70c8;
    }
    ctx->pc = 0x1A70C0u;
    SET_GPR_U32(ctx, 31, 0x1A70C8u);
    ctx->pc = 0x1A70C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70C0u;
            // 0x1a70c4: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70C8u; }
        if (ctx->pc != 0x1A70C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70C8u; }
        if (ctx->pc != 0x1A70C8u) { return; }
    }
    ctx->pc = 0x1A70C8u;
label_1a70c8:
    // 0x1a70c8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a70cc:
    // 0x1a70cc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a70ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a70d0:
    // 0x1a70d0: 0xc0655a8  jal         func_1956A0
label_1a70d4:
    if (ctx->pc == 0x1A70D4u) {
        ctx->pc = 0x1A70D4u;
            // 0x1a70d4: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1A70D8u;
        goto label_1a70d8;
    }
    ctx->pc = 0x1A70D0u;
    SET_GPR_U32(ctx, 31, 0x1A70D8u);
    ctx->pc = 0x1A70D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70D0u;
            // 0x1a70d4: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70D8u; }
        if (ctx->pc != 0x1A70D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70D8u; }
        if (ctx->pc != 0x1A70D8u) { return; }
    }
    ctx->pc = 0x1A70D8u;
label_1a70d8:
    // 0x1a70d8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a70dc:
    // 0x1a70dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a70e0:
    // 0x1a70e0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a70e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a70e4:
    // 0x1a70e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a70e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a70e8:
    // 0x1a70e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a70ec:
    // 0x1a70ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a70ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a70f0:
    // 0x1a70f0: 0xc0655dc  jal         func_195770
label_1a70f4:
    if (ctx->pc == 0x1A70F4u) {
        ctx->pc = 0x1A70F4u;
            // 0x1a70f4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A70F8u;
        goto label_1a70f8;
    }
    ctx->pc = 0x1A70F0u;
    SET_GPR_U32(ctx, 31, 0x1A70F8u);
    ctx->pc = 0x1A70F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70F0u;
            // 0x1a70f4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70F8u; }
        if (ctx->pc != 0x1A70F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70F8u; }
        if (ctx->pc != 0x1A70F8u) { return; }
    }
    ctx->pc = 0x1A70F8u;
label_1a70f8:
    // 0x1a70f8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a70fc:
    // 0x1a70fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a7100:
    // 0x1a7100: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7104:
    // 0x1a7104: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7108:
    // 0x1a7108: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a7108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a710c:
    // 0x1a710c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a710cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7110:
    // 0x1a7110: 0xc0655dc  jal         func_195770
label_1a7114:
    if (ctx->pc == 0x1A7114u) {
        ctx->pc = 0x1A7114u;
            // 0x1a7114: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A7118u;
        goto label_1a7118;
    }
    ctx->pc = 0x1A7110u;
    SET_GPR_U32(ctx, 31, 0x1A7118u);
    ctx->pc = 0x1A7114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7110u;
            // 0x1a7114: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7118u; }
        if (ctx->pc != 0x1A7118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7118u; }
        if (ctx->pc != 0x1A7118u) { return; }
    }
    ctx->pc = 0x1A7118u;
label_1a7118:
    // 0x1a7118: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a711c:
    // 0x1a711c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a711cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a7120:
    // 0x1a7120: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7124:
    // 0x1a7124: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7128:
    // 0x1a7128: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a7128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a712c:
    // 0x1a712c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a712cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7130:
    // 0x1a7130: 0xc0655dc  jal         func_195770
label_1a7134:
    if (ctx->pc == 0x1A7134u) {
        ctx->pc = 0x1A7134u;
            // 0x1a7134: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A7138u;
        goto label_1a7138;
    }
    ctx->pc = 0x1A7130u;
    SET_GPR_U32(ctx, 31, 0x1A7138u);
    ctx->pc = 0x1A7134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7130u;
            // 0x1a7134: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7138u; }
        if (ctx->pc != 0x1A7138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7138u; }
        if (ctx->pc != 0x1A7138u) { return; }
    }
    ctx->pc = 0x1A7138u;
label_1a7138:
    // 0x1a7138: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a713c:
    // 0x1a713c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a713cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a7140:
    // 0x1a7140: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7144:
    // 0x1a7144: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7148:
    // 0x1a7148: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a7148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a714c:
    // 0x1a714c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a714cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7150:
    // 0x1a7150: 0xc0655dc  jal         func_195770
label_1a7154:
    if (ctx->pc == 0x1A7154u) {
        ctx->pc = 0x1A7154u;
            // 0x1a7154: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A7158u;
        goto label_1a7158;
    }
    ctx->pc = 0x1A7150u;
    SET_GPR_U32(ctx, 31, 0x1A7158u);
    ctx->pc = 0x1A7154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7150u;
            // 0x1a7154: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7158u; }
        if (ctx->pc != 0x1A7158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7158u; }
        if (ctx->pc != 0x1A7158u) { return; }
    }
    ctx->pc = 0x1A7158u;
label_1a7158:
    // 0x1a7158: 0x10000193  b           . + 4 + (0x193 << 2)
label_1a715c:
    if (ctx->pc == 0x1A715Cu) {
        ctx->pc = 0x1A7160u;
        goto label_1a7160;
    }
    ctx->pc = 0x1A7158u;
    {
        const bool branch_taken_0x1a7158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7158) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7160u;
label_1a7160:
    // 0x1a7160: 0xc065d00  jal         func_197400
label_1a7164:
    if (ctx->pc == 0x1A7164u) {
        ctx->pc = 0x1A7168u;
        goto label_1a7168;
    }
    ctx->pc = 0x1A7160u;
    SET_GPR_U32(ctx, 31, 0x1A7168u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7168u; }
        if (ctx->pc != 0x1A7168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7168u; }
        if (ctx->pc != 0x1A7168u) { return; }
    }
    ctx->pc = 0x1A7168u;
label_1a7168:
    // 0x1a7168: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a7168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a716c:
    // 0x1a716c: 0x1443018e  bne         $v0, $v1, . + 4 + (0x18E << 2)
label_1a7170:
    if (ctx->pc == 0x1A7170u) {
        ctx->pc = 0x1A7174u;
        goto label_1a7174;
    }
    ctx->pc = 0x1A716Cu;
    {
        const bool branch_taken_0x1a716c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a716c) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7174u;
label_1a7174:
    // 0x1a7174: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7178:
    // 0x1a7178: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a717c:
    // 0x1a717c: 0xc0655a8  jal         func_1956A0
label_1a7180:
    if (ctx->pc == 0x1A7180u) {
        ctx->pc = 0x1A7180u;
            // 0x1a7180: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A7184u;
        goto label_1a7184;
    }
    ctx->pc = 0x1A717Cu;
    SET_GPR_U32(ctx, 31, 0x1A7184u);
    ctx->pc = 0x1A7180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A717Cu;
            // 0x1a7180: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7184u; }
        if (ctx->pc != 0x1A7184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7184u; }
        if (ctx->pc != 0x1A7184u) { return; }
    }
    ctx->pc = 0x1A7184u;
label_1a7184:
    // 0x1a7184: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7188:
    // 0x1a7188: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a718c:
    // 0x1a718c: 0xc0655a8  jal         func_1956A0
label_1a7190:
    if (ctx->pc == 0x1A7190u) {
        ctx->pc = 0x1A7190u;
            // 0x1a7190: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1A7194u;
        goto label_1a7194;
    }
    ctx->pc = 0x1A718Cu;
    SET_GPR_U32(ctx, 31, 0x1A7194u);
    ctx->pc = 0x1A7190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A718Cu;
            // 0x1a7190: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7194u; }
        if (ctx->pc != 0x1A7194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7194u; }
        if (ctx->pc != 0x1A7194u) { return; }
    }
    ctx->pc = 0x1A7194u;
label_1a7194:
    // 0x1a7194: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7198:
    // 0x1a7198: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a7198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a719c:
    // 0x1a719c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a719cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a71a0:
    // 0x1a71a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a71a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a71a4:
    // 0x1a71a4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1a71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1a71a8:
    // 0x1a71a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a71a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a71ac:
    // 0x1a71ac: 0xc0655dc  jal         func_195770
label_1a71b0:
    if (ctx->pc == 0x1A71B0u) {
        ctx->pc = 0x1A71B0u;
            // 0x1a71b0: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A71B4u;
        goto label_1a71b4;
    }
    ctx->pc = 0x1A71ACu;
    SET_GPR_U32(ctx, 31, 0x1A71B4u);
    ctx->pc = 0x1A71B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A71ACu;
            // 0x1a71b0: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A71B4u; }
        if (ctx->pc != 0x1A71B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A71B4u; }
        if (ctx->pc != 0x1A71B4u) { return; }
    }
    ctx->pc = 0x1A71B4u;
label_1a71b4:
    // 0x1a71b4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a71b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a71b8:
    // 0x1a71b8: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1a71bc:
    // 0x1a71bc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a71bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a71c0:
    // 0x1a71c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a71c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a71c4:
    // 0x1a71c4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1a71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1a71c8:
    // 0x1a71c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a71c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a71cc:
    // 0x1a71cc: 0xc0655dc  jal         func_195770
label_1a71d0:
    if (ctx->pc == 0x1A71D0u) {
        ctx->pc = 0x1A71D0u;
            // 0x1a71d0: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A71D4u;
        goto label_1a71d4;
    }
    ctx->pc = 0x1A71CCu;
    SET_GPR_U32(ctx, 31, 0x1A71D4u);
    ctx->pc = 0x1A71D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A71CCu;
            // 0x1a71d0: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A71D4u; }
        if (ctx->pc != 0x1A71D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A71D4u; }
        if (ctx->pc != 0x1A71D4u) { return; }
    }
    ctx->pc = 0x1A71D4u;
label_1a71d4:
    // 0x1a71d4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a71d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a71d8:
    // 0x1a71d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a71dc:
    // 0x1a71dc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a71dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a71e0:
    // 0x1a71e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a71e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a71e4:
    // 0x1a71e4: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x1a71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_1a71e8:
    // 0x1a71e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a71e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a71ec:
    // 0x1a71ec: 0xc0655dc  jal         func_195770
label_1a71f0:
    if (ctx->pc == 0x1A71F0u) {
        ctx->pc = 0x1A71F0u;
            // 0x1a71f0: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A71F4u;
        goto label_1a71f4;
    }
    ctx->pc = 0x1A71ECu;
    SET_GPR_U32(ctx, 31, 0x1A71F4u);
    ctx->pc = 0x1A71F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A71ECu;
            // 0x1a71f0: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A71F4u; }
        if (ctx->pc != 0x1A71F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A71F4u; }
        if (ctx->pc != 0x1A71F4u) { return; }
    }
    ctx->pc = 0x1A71F4u;
label_1a71f4:
    // 0x1a71f4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a71f8:
    // 0x1a71f8: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1a71fc:
    // 0x1a71fc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a71fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7200:
    // 0x1a7200: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7204:
    // 0x1a7204: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x1a7204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_1a7208:
    // 0x1a7208: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a720c:
    // 0x1a720c: 0xc0655dc  jal         func_195770
label_1a7210:
    if (ctx->pc == 0x1A7210u) {
        ctx->pc = 0x1A7210u;
            // 0x1a7210: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A7214u;
        goto label_1a7214;
    }
    ctx->pc = 0x1A720Cu;
    SET_GPR_U32(ctx, 31, 0x1A7214u);
    ctx->pc = 0x1A7210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A720Cu;
            // 0x1a7210: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7214u; }
        if (ctx->pc != 0x1A7214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7214u; }
        if (ctx->pc != 0x1A7214u) { return; }
    }
    ctx->pc = 0x1A7214u;
label_1a7214:
    // 0x1a7214: 0x10000164  b           . + 4 + (0x164 << 2)
label_1a7218:
    if (ctx->pc == 0x1A7218u) {
        ctx->pc = 0x1A721Cu;
        goto label_1a721c;
    }
    ctx->pc = 0x1A7214u;
    {
        const bool branch_taken_0x1a7214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7214) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A721Cu;
label_1a721c:
    // 0x1a721c: 0x0  nop
    ctx->pc = 0x1a721cu;
    // NOP
label_1a7220:
    // 0x1a7220: 0xc065d00  jal         func_197400
label_1a7224:
    if (ctx->pc == 0x1A7224u) {
        ctx->pc = 0x1A7228u;
        goto label_1a7228;
    }
    ctx->pc = 0x1A7220u;
    SET_GPR_U32(ctx, 31, 0x1A7228u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7228u; }
        if (ctx->pc != 0x1A7228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7228u; }
        if (ctx->pc != 0x1A7228u) { return; }
    }
    ctx->pc = 0x1A7228u;
label_1a7228:
    // 0x1a7228: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a7228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a722c:
    // 0x1a722c: 0x1443015e  bne         $v0, $v1, . + 4 + (0x15E << 2)
label_1a7230:
    if (ctx->pc == 0x1A7230u) {
        ctx->pc = 0x1A7234u;
        goto label_1a7234;
    }
    ctx->pc = 0x1A722Cu;
    {
        const bool branch_taken_0x1a722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a722c) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7234u;
label_1a7234:
    // 0x1a7234: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7238:
    // 0x1a7238: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a723c:
    // 0x1a723c: 0xc0655a8  jal         func_1956A0
label_1a7240:
    if (ctx->pc == 0x1A7240u) {
        ctx->pc = 0x1A7240u;
            // 0x1a7240: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A7244u;
        goto label_1a7244;
    }
    ctx->pc = 0x1A723Cu;
    SET_GPR_U32(ctx, 31, 0x1A7244u);
    ctx->pc = 0x1A7240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A723Cu;
            // 0x1a7240: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7244u; }
        if (ctx->pc != 0x1A7244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7244u; }
        if (ctx->pc != 0x1A7244u) { return; }
    }
    ctx->pc = 0x1A7244u;
label_1a7244:
    // 0x1a7244: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7248:
    // 0x1a7248: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a724c:
    // 0x1a724c: 0xc0655a8  jal         func_1956A0
label_1a7250:
    if (ctx->pc == 0x1A7250u) {
        ctx->pc = 0x1A7250u;
            // 0x1a7250: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1A7254u;
        goto label_1a7254;
    }
    ctx->pc = 0x1A724Cu;
    SET_GPR_U32(ctx, 31, 0x1A7254u);
    ctx->pc = 0x1A7250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A724Cu;
            // 0x1a7250: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7254u; }
        if (ctx->pc != 0x1A7254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7254u; }
        if (ctx->pc != 0x1A7254u) { return; }
    }
    ctx->pc = 0x1A7254u;
label_1a7254:
    // 0x1a7254: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7258:
    // 0x1a7258: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a7258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a725c:
    // 0x1a725c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a725cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7260:
    // 0x1a7260: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7264:
    // 0x1a7264: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7268:
    // 0x1a7268: 0xc0655dc  jal         func_195770
label_1a726c:
    if (ctx->pc == 0x1A726Cu) {
        ctx->pc = 0x1A726Cu;
            // 0x1a726c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A7270u;
        goto label_1a7270;
    }
    ctx->pc = 0x1A7268u;
    SET_GPR_U32(ctx, 31, 0x1A7270u);
    ctx->pc = 0x1A726Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7268u;
            // 0x1a726c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7270u; }
        if (ctx->pc != 0x1A7270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7270u; }
        if (ctx->pc != 0x1A7270u) { return; }
    }
    ctx->pc = 0x1A7270u;
label_1a7270:
    // 0x1a7270: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7274:
    // 0x1a7274: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a7274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a7278:
    // 0x1a7278: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a727c:
    // 0x1a727c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a727cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7280:
    // 0x1a7280: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7284:
    // 0x1a7284: 0xc0655dc  jal         func_195770
label_1a7288:
    if (ctx->pc == 0x1A7288u) {
        ctx->pc = 0x1A7288u;
            // 0x1a7288: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A728Cu;
        goto label_1a728c;
    }
    ctx->pc = 0x1A7284u;
    SET_GPR_U32(ctx, 31, 0x1A728Cu);
    ctx->pc = 0x1A7288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7284u;
            // 0x1a7288: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A728Cu; }
        if (ctx->pc != 0x1A728Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A728Cu; }
        if (ctx->pc != 0x1A728Cu) { return; }
    }
    ctx->pc = 0x1A728Cu;
label_1a728c:
    // 0x1a728c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a728cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7290:
    // 0x1a7290: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a7290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1a7294:
    // 0x1a7294: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7298:
    // 0x1a7298: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a729c:
    // 0x1a729c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a729cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a72a0:
    // 0x1a72a0: 0xc0655dc  jal         func_195770
label_1a72a4:
    if (ctx->pc == 0x1A72A4u) {
        ctx->pc = 0x1A72A4u;
            // 0x1a72a4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A72A8u;
        goto label_1a72a8;
    }
    ctx->pc = 0x1A72A0u;
    SET_GPR_U32(ctx, 31, 0x1A72A8u);
    ctx->pc = 0x1A72A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72A0u;
            // 0x1a72a4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72A8u; }
        if (ctx->pc != 0x1A72A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72A8u; }
        if (ctx->pc != 0x1A72A8u) { return; }
    }
    ctx->pc = 0x1A72A8u;
label_1a72a8:
    // 0x1a72a8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a72a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a72ac:
    // 0x1a72ac: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a72acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1a72b0:
    // 0x1a72b0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a72b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a72b4:
    // 0x1a72b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a72b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a72b8:
    // 0x1a72b8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a72b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a72bc:
    // 0x1a72bc: 0xc0655dc  jal         func_195770
label_1a72c0:
    if (ctx->pc == 0x1A72C0u) {
        ctx->pc = 0x1A72C0u;
            // 0x1a72c0: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A72C4u;
        goto label_1a72c4;
    }
    ctx->pc = 0x1A72BCu;
    SET_GPR_U32(ctx, 31, 0x1A72C4u);
    ctx->pc = 0x1A72C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72BCu;
            // 0x1a72c0: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72C4u; }
        if (ctx->pc != 0x1A72C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72C4u; }
        if (ctx->pc != 0x1A72C4u) { return; }
    }
    ctx->pc = 0x1A72C4u;
label_1a72c4:
    // 0x1a72c4: 0x10000138  b           . + 4 + (0x138 << 2)
label_1a72c8:
    if (ctx->pc == 0x1A72C8u) {
        ctx->pc = 0x1A72CCu;
        goto label_1a72cc;
    }
    ctx->pc = 0x1A72C4u;
    {
        const bool branch_taken_0x1a72c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a72c4) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A72CCu;
label_1a72cc:
    // 0x1a72cc: 0x0  nop
    ctx->pc = 0x1a72ccu;
    // NOP
label_1a72d0:
    // 0x1a72d0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a72d4:
    // 0x1a72d4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a72d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a72d8:
    // 0x1a72d8: 0xc0655a8  jal         func_1956A0
label_1a72dc:
    if (ctx->pc == 0x1A72DCu) {
        ctx->pc = 0x1A72DCu;
            // 0x1a72dc: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A72E0u;
        goto label_1a72e0;
    }
    ctx->pc = 0x1A72D8u;
    SET_GPR_U32(ctx, 31, 0x1A72E0u);
    ctx->pc = 0x1A72DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72D8u;
            // 0x1a72dc: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72E0u; }
        if (ctx->pc != 0x1A72E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72E0u; }
        if (ctx->pc != 0x1A72E0u) { return; }
    }
    ctx->pc = 0x1A72E0u;
label_1a72e0:
    // 0x1a72e0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a72e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a72e4:
    // 0x1a72e4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a72e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a72e8:
    // 0x1a72e8: 0xc0655a8  jal         func_1956A0
label_1a72ec:
    if (ctx->pc == 0x1A72ECu) {
        ctx->pc = 0x1A72ECu;
            // 0x1a72ec: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1A72F0u;
        goto label_1a72f0;
    }
    ctx->pc = 0x1A72E8u;
    SET_GPR_U32(ctx, 31, 0x1A72F0u);
    ctx->pc = 0x1A72ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72E8u;
            // 0x1a72ec: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72F0u; }
        if (ctx->pc != 0x1A72F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72F0u; }
        if (ctx->pc != 0x1A72F0u) { return; }
    }
    ctx->pc = 0x1A72F0u;
label_1a72f0:
    // 0x1a72f0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a72f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a72f4:
    // 0x1a72f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a72f8:
    // 0x1a72f8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a72f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a72fc:
    // 0x1a72fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a72fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7300:
    // 0x1a7300: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a7300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a7304:
    // 0x1a7304: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7308:
    // 0x1a7308: 0xc0655dc  jal         func_195770
label_1a730c:
    if (ctx->pc == 0x1A730Cu) {
        ctx->pc = 0x1A730Cu;
            // 0x1a730c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A7310u;
        goto label_1a7310;
    }
    ctx->pc = 0x1A7308u;
    SET_GPR_U32(ctx, 31, 0x1A7310u);
    ctx->pc = 0x1A730Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7308u;
            // 0x1a730c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7310u; }
        if (ctx->pc != 0x1A7310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7310u; }
        if (ctx->pc != 0x1A7310u) { return; }
    }
    ctx->pc = 0x1A7310u;
label_1a7310:
    // 0x1a7310: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7314:
    // 0x1a7314: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a7314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a7318:
    // 0x1a7318: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a731c:
    // 0x1a731c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a731cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7320:
    // 0x1a7320: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a7320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a7324:
    // 0x1a7324: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7328:
    // 0x1a7328: 0xc0655dc  jal         func_195770
label_1a732c:
    if (ctx->pc == 0x1A732Cu) {
        ctx->pc = 0x1A732Cu;
            // 0x1a732c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A7330u;
        goto label_1a7330;
    }
    ctx->pc = 0x1A7328u;
    SET_GPR_U32(ctx, 31, 0x1A7330u);
    ctx->pc = 0x1A732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7328u;
            // 0x1a732c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7330u; }
        if (ctx->pc != 0x1A7330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7330u; }
        if (ctx->pc != 0x1A7330u) { return; }
    }
    ctx->pc = 0x1A7330u;
label_1a7330:
    // 0x1a7330: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7334:
    // 0x1a7334: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a7334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a7338:
    // 0x1a7338: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a733c:
    // 0x1a733c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a733cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7340:
    // 0x1a7340: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a7340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a7344:
    // 0x1a7344: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7348:
    // 0x1a7348: 0xc0655dc  jal         func_195770
label_1a734c:
    if (ctx->pc == 0x1A734Cu) {
        ctx->pc = 0x1A734Cu;
            // 0x1a734c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A7350u;
        goto label_1a7350;
    }
    ctx->pc = 0x1A7348u;
    SET_GPR_U32(ctx, 31, 0x1A7350u);
    ctx->pc = 0x1A734Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7348u;
            // 0x1a734c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7350u; }
        if (ctx->pc != 0x1A7350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7350u; }
        if (ctx->pc != 0x1A7350u) { return; }
    }
    ctx->pc = 0x1A7350u;
label_1a7350:
    // 0x1a7350: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7354:
    // 0x1a7354: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a7354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a7358:
    // 0x1a7358: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a735c:
    // 0x1a735c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a735cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7360:
    // 0x1a7360: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a7360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a7364:
    // 0x1a7364: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7368:
    // 0x1a7368: 0xc0655dc  jal         func_195770
label_1a736c:
    if (ctx->pc == 0x1A736Cu) {
        ctx->pc = 0x1A736Cu;
            // 0x1a736c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A7370u;
        goto label_1a7370;
    }
    ctx->pc = 0x1A7368u;
    SET_GPR_U32(ctx, 31, 0x1A7370u);
    ctx->pc = 0x1A736Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7368u;
            // 0x1a736c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7370u; }
        if (ctx->pc != 0x1A7370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7370u; }
        if (ctx->pc != 0x1A7370u) { return; }
    }
    ctx->pc = 0x1A7370u;
label_1a7370:
    // 0x1a7370: 0x1000010d  b           . + 4 + (0x10D << 2)
label_1a7374:
    if (ctx->pc == 0x1A7374u) {
        ctx->pc = 0x1A7378u;
        goto label_1a7378;
    }
    ctx->pc = 0x1A7370u;
    {
        const bool branch_taken_0x1a7370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7370) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7378u;
label_1a7378:
    // 0x1a7378: 0xc065d00  jal         func_197400
label_1a737c:
    if (ctx->pc == 0x1A737Cu) {
        ctx->pc = 0x1A7380u;
        goto label_1a7380;
    }
    ctx->pc = 0x1A7378u;
    SET_GPR_U32(ctx, 31, 0x1A7380u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7380u; }
        if (ctx->pc != 0x1A7380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7380u; }
        if (ctx->pc != 0x1A7380u) { return; }
    }
    ctx->pc = 0x1A7380u;
label_1a7380:
    // 0x1a7380: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a7380u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a7384:
    // 0x1a7384: 0x14200108  bnez        $at, . + 4 + (0x108 << 2)
label_1a7388:
    if (ctx->pc == 0x1A7388u) {
        ctx->pc = 0x1A738Cu;
        goto label_1a738c;
    }
    ctx->pc = 0x1A7384u;
    {
        const bool branch_taken_0x1a7384 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7384) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A738Cu;
label_1a738c:
    // 0x1a738c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7390:
    // 0x1a7390: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7394:
    // 0x1a7394: 0xc0655a8  jal         func_1956A0
label_1a7398:
    if (ctx->pc == 0x1A7398u) {
        ctx->pc = 0x1A7398u;
            // 0x1a7398: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A739Cu;
        goto label_1a739c;
    }
    ctx->pc = 0x1A7394u;
    SET_GPR_U32(ctx, 31, 0x1A739Cu);
    ctx->pc = 0x1A7398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7394u;
            // 0x1a7398: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A739Cu; }
        if (ctx->pc != 0x1A739Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A739Cu; }
        if (ctx->pc != 0x1A739Cu) { return; }
    }
    ctx->pc = 0x1A739Cu;
label_1a739c:
    // 0x1a739c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a73a0:
    // 0x1a73a0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a73a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a73a4:
    // 0x1a73a4: 0xc0655a8  jal         func_1956A0
label_1a73a8:
    if (ctx->pc == 0x1A73A8u) {
        ctx->pc = 0x1A73A8u;
            // 0x1a73a8: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1A73ACu;
        goto label_1a73ac;
    }
    ctx->pc = 0x1A73A4u;
    SET_GPR_U32(ctx, 31, 0x1A73ACu);
    ctx->pc = 0x1A73A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73A4u;
            // 0x1a73a8: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73ACu; }
        if (ctx->pc != 0x1A73ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73ACu; }
        if (ctx->pc != 0x1A73ACu) { return; }
    }
    ctx->pc = 0x1A73ACu;
label_1a73ac:
    // 0x1a73ac: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a73acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a73b0:
    // 0x1a73b0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1a73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1a73b4:
    // 0x1a73b4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a73b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a73b8:
    // 0x1a73b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a73b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a73bc:
    // 0x1a73bc: 0x0  nop
    ctx->pc = 0x1a73bcu;
    // NOP
label_1a73c0:
    // 0x1a73c0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a73c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a73c4:
    // 0x1a73c4: 0xc0655dc  jal         func_195770
label_1a73c8:
    if (ctx->pc == 0x1A73C8u) {
        ctx->pc = 0x1A73C8u;
            // 0x1a73c8: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A73CCu;
        goto label_1a73cc;
    }
    ctx->pc = 0x1A73C4u;
    SET_GPR_U32(ctx, 31, 0x1A73CCu);
    ctx->pc = 0x1A73C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73C4u;
            // 0x1a73c8: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73CCu; }
        if (ctx->pc != 0x1A73CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73CCu; }
        if (ctx->pc != 0x1A73CCu) { return; }
    }
    ctx->pc = 0x1A73CCu;
label_1a73cc:
    // 0x1a73cc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a73ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a73d0:
    // 0x1a73d0: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1a73d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1a73d4:
    // 0x1a73d4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a73d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a73d8:
    // 0x1a73d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a73d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a73dc:
    // 0x1a73dc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1a73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1a73e0:
    // 0x1a73e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a73e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a73e4:
    // 0x1a73e4: 0xc0655dc  jal         func_195770
label_1a73e8:
    if (ctx->pc == 0x1A73E8u) {
        ctx->pc = 0x1A73E8u;
            // 0x1a73e8: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A73ECu;
        goto label_1a73ec;
    }
    ctx->pc = 0x1A73E4u;
    SET_GPR_U32(ctx, 31, 0x1A73ECu);
    ctx->pc = 0x1A73E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73E4u;
            // 0x1a73e8: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73ECu; }
        if (ctx->pc != 0x1A73ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73ECu; }
        if (ctx->pc != 0x1A73ECu) { return; }
    }
    ctx->pc = 0x1A73ECu;
label_1a73ec:
    // 0x1a73ec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a73ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a73f0:
    // 0x1a73f0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1a73f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1a73f4:
    // 0x1a73f4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a73f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a73f8:
    // 0x1a73f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a73f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a73fc:
    // 0x1a73fc: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1a73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1a7400:
    // 0x1a7400: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7404:
    // 0x1a7404: 0xc0655dc  jal         func_195770
label_1a7408:
    if (ctx->pc == 0x1A7408u) {
        ctx->pc = 0x1A7408u;
            // 0x1a7408: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A740Cu;
        goto label_1a740c;
    }
    ctx->pc = 0x1A7404u;
    SET_GPR_U32(ctx, 31, 0x1A740Cu);
    ctx->pc = 0x1A7408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7404u;
            // 0x1a7408: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A740Cu; }
        if (ctx->pc != 0x1A740Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A740Cu; }
        if (ctx->pc != 0x1A740Cu) { return; }
    }
    ctx->pc = 0x1A740Cu;
label_1a740c:
    // 0x1a740c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a740cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7410:
    // 0x1a7410: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1a7410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1a7414:
    // 0x1a7414: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7418:
    // 0x1a7418: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a741c:
    // 0x1a741c: 0x0  nop
    ctx->pc = 0x1a741cu;
    // NOP
label_1a7420:
    // 0x1a7420: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7420u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a7424:
    // 0x1a7424: 0xc0655dc  jal         func_195770
label_1a7428:
    if (ctx->pc == 0x1A7428u) {
        ctx->pc = 0x1A7428u;
            // 0x1a7428: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A742Cu;
        goto label_1a742c;
    }
    ctx->pc = 0x1A7424u;
    SET_GPR_U32(ctx, 31, 0x1A742Cu);
    ctx->pc = 0x1A7428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7424u;
            // 0x1a7428: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A742Cu; }
        if (ctx->pc != 0x1A742Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A742Cu; }
        if (ctx->pc != 0x1A742Cu) { return; }
    }
    ctx->pc = 0x1A742Cu;
label_1a742c:
    // 0x1a742c: 0x100000de  b           . + 4 + (0xDE << 2)
label_1a7430:
    if (ctx->pc == 0x1A7430u) {
        ctx->pc = 0x1A7434u;
        goto label_1a7434;
    }
    ctx->pc = 0x1A742Cu;
    {
        const bool branch_taken_0x1a742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a742c) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7434u;
label_1a7434:
    // 0x1a7434: 0x0  nop
    ctx->pc = 0x1a7434u;
    // NOP
label_1a7438:
    // 0x1a7438: 0xc065d00  jal         func_197400
label_1a743c:
    if (ctx->pc == 0x1A743Cu) {
        ctx->pc = 0x1A7440u;
        goto label_1a7440;
    }
    ctx->pc = 0x1A7438u;
    SET_GPR_U32(ctx, 31, 0x1A7440u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7440u; }
        if (ctx->pc != 0x1A7440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7440u; }
        if (ctx->pc != 0x1A7440u) { return; }
    }
    ctx->pc = 0x1A7440u;
label_1a7440:
    // 0x1a7440: 0x184000d9  blez        $v0, . + 4 + (0xD9 << 2)
label_1a7444:
    if (ctx->pc == 0x1A7444u) {
        ctx->pc = 0x1A7448u;
        goto label_1a7448;
    }
    ctx->pc = 0x1A7440u;
    {
        const bool branch_taken_0x1a7440 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a7440) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7448u;
label_1a7448:
    // 0x1a7448: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a744c:
    // 0x1a744c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a744cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7450:
    // 0x1a7450: 0xc0655a8  jal         func_1956A0
label_1a7454:
    if (ctx->pc == 0x1A7454u) {
        ctx->pc = 0x1A7454u;
            // 0x1a7454: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A7458u;
        goto label_1a7458;
    }
    ctx->pc = 0x1A7450u;
    SET_GPR_U32(ctx, 31, 0x1A7458u);
    ctx->pc = 0x1A7454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7450u;
            // 0x1a7454: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7458u; }
        if (ctx->pc != 0x1A7458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7458u; }
        if (ctx->pc != 0x1A7458u) { return; }
    }
    ctx->pc = 0x1A7458u;
label_1a7458:
    // 0x1a7458: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a745c:
    // 0x1a745c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a745cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7460:
    // 0x1a7460: 0xc0655a8  jal         func_1956A0
label_1a7464:
    if (ctx->pc == 0x1A7464u) {
        ctx->pc = 0x1A7464u;
            // 0x1a7464: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1A7468u;
        goto label_1a7468;
    }
    ctx->pc = 0x1A7460u;
    SET_GPR_U32(ctx, 31, 0x1A7468u);
    ctx->pc = 0x1A7464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7460u;
            // 0x1a7464: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7468u; }
        if (ctx->pc != 0x1A7468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7468u; }
        if (ctx->pc != 0x1A7468u) { return; }
    }
    ctx->pc = 0x1A7468u;
label_1a7468:
    // 0x1a7468: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a746c:
    // 0x1a746c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a746cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a7470:
    // 0x1a7470: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7474:
    // 0x1a7474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7478:
    // 0x1a7478: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a7478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a747c:
    // 0x1a747c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a747cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7480:
    // 0x1a7480: 0xc0655dc  jal         func_195770
label_1a7484:
    if (ctx->pc == 0x1A7484u) {
        ctx->pc = 0x1A7484u;
            // 0x1a7484: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A7488u;
        goto label_1a7488;
    }
    ctx->pc = 0x1A7480u;
    SET_GPR_U32(ctx, 31, 0x1A7488u);
    ctx->pc = 0x1A7484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7480u;
            // 0x1a7484: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7488u; }
        if (ctx->pc != 0x1A7488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7488u; }
        if (ctx->pc != 0x1A7488u) { return; }
    }
    ctx->pc = 0x1A7488u;
label_1a7488:
    // 0x1a7488: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a748c:
    // 0x1a748c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a748cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a7490:
    // 0x1a7490: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7494:
    // 0x1a7494: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7498:
    // 0x1a7498: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a7498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a749c:
    // 0x1a749c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a749cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a74a0:
    // 0x1a74a0: 0xc0655dc  jal         func_195770
label_1a74a4:
    if (ctx->pc == 0x1A74A4u) {
        ctx->pc = 0x1A74A4u;
            // 0x1a74a4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A74A8u;
        goto label_1a74a8;
    }
    ctx->pc = 0x1A74A0u;
    SET_GPR_U32(ctx, 31, 0x1A74A8u);
    ctx->pc = 0x1A74A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74A0u;
            // 0x1a74a4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74A8u; }
        if (ctx->pc != 0x1A74A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74A8u; }
        if (ctx->pc != 0x1A74A8u) { return; }
    }
    ctx->pc = 0x1A74A8u;
label_1a74a8:
    // 0x1a74a8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a74a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a74ac:
    // 0x1a74ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a74acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a74b0:
    // 0x1a74b0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a74b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a74b4:
    // 0x1a74b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a74b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a74b8:
    // 0x1a74b8: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a74bc:
    // 0x1a74bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a74bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a74c0:
    // 0x1a74c0: 0xc0655dc  jal         func_195770
label_1a74c4:
    if (ctx->pc == 0x1A74C4u) {
        ctx->pc = 0x1A74C4u;
            // 0x1a74c4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A74C8u;
        goto label_1a74c8;
    }
    ctx->pc = 0x1A74C0u;
    SET_GPR_U32(ctx, 31, 0x1A74C8u);
    ctx->pc = 0x1A74C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74C0u;
            // 0x1a74c4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74C8u; }
        if (ctx->pc != 0x1A74C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74C8u; }
        if (ctx->pc != 0x1A74C8u) { return; }
    }
    ctx->pc = 0x1A74C8u;
label_1a74c8:
    // 0x1a74c8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a74c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a74cc:
    // 0x1a74cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a74d0:
    // 0x1a74d0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a74d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a74d4:
    // 0x1a74d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a74d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a74d8:
    // 0x1a74d8: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a74dc:
    // 0x1a74dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a74dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a74e0:
    // 0x1a74e0: 0xc0655dc  jal         func_195770
label_1a74e4:
    if (ctx->pc == 0x1A74E4u) {
        ctx->pc = 0x1A74E4u;
            // 0x1a74e4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A74E8u;
        goto label_1a74e8;
    }
    ctx->pc = 0x1A74E0u;
    SET_GPR_U32(ctx, 31, 0x1A74E8u);
    ctx->pc = 0x1A74E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74E0u;
            // 0x1a74e4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74E8u; }
        if (ctx->pc != 0x1A74E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74E8u; }
        if (ctx->pc != 0x1A74E8u) { return; }
    }
    ctx->pc = 0x1A74E8u;
label_1a74e8:
    // 0x1a74e8: 0x100000af  b           . + 4 + (0xAF << 2)
label_1a74ec:
    if (ctx->pc == 0x1A74ECu) {
        ctx->pc = 0x1A74F0u;
        goto label_1a74f0;
    }
    ctx->pc = 0x1A74E8u;
    {
        const bool branch_taken_0x1a74e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a74e8) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A74F0u;
label_1a74f0:
    // 0x1a74f0: 0xc065d00  jal         func_197400
label_1a74f4:
    if (ctx->pc == 0x1A74F4u) {
        ctx->pc = 0x1A74F8u;
        goto label_1a74f8;
    }
    ctx->pc = 0x1A74F0u;
    SET_GPR_U32(ctx, 31, 0x1A74F8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74F8u; }
        if (ctx->pc != 0x1A74F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74F8u; }
        if (ctx->pc != 0x1A74F8u) { return; }
    }
    ctx->pc = 0x1A74F8u;
label_1a74f8:
    // 0x1a74f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a74f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a74fc:
    // 0x1a74fc: 0x144300aa  bne         $v0, $v1, . + 4 + (0xAA << 2)
label_1a7500:
    if (ctx->pc == 0x1A7500u) {
        ctx->pc = 0x1A7504u;
        goto label_1a7504;
    }
    ctx->pc = 0x1A74FCu;
    {
        const bool branch_taken_0x1a74fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a74fc) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7504u;
label_1a7504:
    // 0x1a7504: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7508:
    // 0x1a7508: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a750c:
    // 0x1a750c: 0xc0655a8  jal         func_1956A0
label_1a7510:
    if (ctx->pc == 0x1A7510u) {
        ctx->pc = 0x1A7510u;
            // 0x1a7510: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A7514u;
        goto label_1a7514;
    }
    ctx->pc = 0x1A750Cu;
    SET_GPR_U32(ctx, 31, 0x1A7514u);
    ctx->pc = 0x1A7510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A750Cu;
            // 0x1a7510: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7514u; }
        if (ctx->pc != 0x1A7514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7514u; }
        if (ctx->pc != 0x1A7514u) { return; }
    }
    ctx->pc = 0x1A7514u;
label_1a7514:
    // 0x1a7514: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7518:
    // 0x1a7518: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a751c:
    // 0x1a751c: 0xc0655a8  jal         func_1956A0
label_1a7520:
    if (ctx->pc == 0x1A7520u) {
        ctx->pc = 0x1A7520u;
            // 0x1a7520: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1A7524u;
        goto label_1a7524;
    }
    ctx->pc = 0x1A751Cu;
    SET_GPR_U32(ctx, 31, 0x1A7524u);
    ctx->pc = 0x1A7520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A751Cu;
            // 0x1a7520: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7524u; }
        if (ctx->pc != 0x1A7524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7524u; }
        if (ctx->pc != 0x1A7524u) { return; }
    }
    ctx->pc = 0x1A7524u;
label_1a7524:
    // 0x1a7524: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7528:
    // 0x1a7528: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a7528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a752c:
    // 0x1a752c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a752cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7530:
    // 0x1a7530: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7534:
    // 0x1a7534: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7538:
    // 0x1a7538: 0xc0655dc  jal         func_195770
label_1a753c:
    if (ctx->pc == 0x1A753Cu) {
        ctx->pc = 0x1A753Cu;
            // 0x1a753c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A7540u;
        goto label_1a7540;
    }
    ctx->pc = 0x1A7538u;
    SET_GPR_U32(ctx, 31, 0x1A7540u);
    ctx->pc = 0x1A753Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7538u;
            // 0x1a753c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7540u; }
        if (ctx->pc != 0x1A7540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7540u; }
        if (ctx->pc != 0x1A7540u) { return; }
    }
    ctx->pc = 0x1A7540u;
label_1a7540:
    // 0x1a7540: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7544:
    // 0x1a7544: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a7544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a7548:
    // 0x1a7548: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a754c:
    // 0x1a754c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a754cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7550:
    // 0x1a7550: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7554:
    // 0x1a7554: 0xc0655dc  jal         func_195770
label_1a7558:
    if (ctx->pc == 0x1A7558u) {
        ctx->pc = 0x1A7558u;
            // 0x1a7558: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A755Cu;
        goto label_1a755c;
    }
    ctx->pc = 0x1A7554u;
    SET_GPR_U32(ctx, 31, 0x1A755Cu);
    ctx->pc = 0x1A7558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7554u;
            // 0x1a7558: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A755Cu; }
        if (ctx->pc != 0x1A755Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A755Cu; }
        if (ctx->pc != 0x1A755Cu) { return; }
    }
    ctx->pc = 0x1A755Cu;
label_1a755c:
    // 0x1a755c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7560:
    // 0x1a7560: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a7560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1a7564:
    // 0x1a7564: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7568:
    // 0x1a7568: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a756c:
    // 0x1a756c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a756cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7570:
    // 0x1a7570: 0xc0655dc  jal         func_195770
label_1a7574:
    if (ctx->pc == 0x1A7574u) {
        ctx->pc = 0x1A7574u;
            // 0x1a7574: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A7578u;
        goto label_1a7578;
    }
    ctx->pc = 0x1A7570u;
    SET_GPR_U32(ctx, 31, 0x1A7578u);
    ctx->pc = 0x1A7574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7570u;
            // 0x1a7574: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7578u; }
        if (ctx->pc != 0x1A7578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7578u; }
        if (ctx->pc != 0x1A7578u) { return; }
    }
    ctx->pc = 0x1A7578u;
label_1a7578:
    // 0x1a7578: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a757c:
    // 0x1a757c: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a757cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1a7580:
    // 0x1a7580: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7584:
    // 0x1a7584: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7588:
    // 0x1a7588: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a758c:
    // 0x1a758c: 0xc0655dc  jal         func_195770
label_1a7590:
    if (ctx->pc == 0x1A7590u) {
        ctx->pc = 0x1A7590u;
            // 0x1a7590: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A7594u;
        goto label_1a7594;
    }
    ctx->pc = 0x1A758Cu;
    SET_GPR_U32(ctx, 31, 0x1A7594u);
    ctx->pc = 0x1A7590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A758Cu;
            // 0x1a7590: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7594u; }
        if (ctx->pc != 0x1A7594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7594u; }
        if (ctx->pc != 0x1A7594u) { return; }
    }
    ctx->pc = 0x1A7594u;
label_1a7594:
    // 0x1a7594: 0x10000084  b           . + 4 + (0x84 << 2)
label_1a7598:
    if (ctx->pc == 0x1A7598u) {
        ctx->pc = 0x1A759Cu;
        goto label_1a759c;
    }
    ctx->pc = 0x1A7594u;
    {
        const bool branch_taken_0x1a7594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7594) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A759Cu;
label_1a759c:
    // 0x1a759c: 0x0  nop
    ctx->pc = 0x1a759cu;
    // NOP
label_1a75a0:
    // 0x1a75a0: 0xc065d00  jal         func_197400
label_1a75a4:
    if (ctx->pc == 0x1A75A4u) {
        ctx->pc = 0x1A75A8u;
        goto label_1a75a8;
    }
    ctx->pc = 0x1A75A0u;
    SET_GPR_U32(ctx, 31, 0x1A75A8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75A8u; }
        if (ctx->pc != 0x1A75A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75A8u; }
        if (ctx->pc != 0x1A75A8u) { return; }
    }
    ctx->pc = 0x1A75A8u;
label_1a75a8:
    // 0x1a75a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a75ac:
    // 0x1a75ac: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
label_1a75b0:
    if (ctx->pc == 0x1A75B0u) {
        ctx->pc = 0x1A75B4u;
        goto label_1a75b4;
    }
    ctx->pc = 0x1A75ACu;
    {
        const bool branch_taken_0x1a75ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a75ac) {
            ctx->pc = 0x1A7648u;
            goto label_1a7648;
        }
    }
    ctx->pc = 0x1A75B4u;
label_1a75b4:
    // 0x1a75b4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a75b8:
    // 0x1a75b8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a75b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a75bc:
    // 0x1a75bc: 0xc0655a8  jal         func_1956A0
label_1a75c0:
    if (ctx->pc == 0x1A75C0u) {
        ctx->pc = 0x1A75C0u;
            // 0x1a75c0: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A75C4u;
        goto label_1a75c4;
    }
    ctx->pc = 0x1A75BCu;
    SET_GPR_U32(ctx, 31, 0x1A75C4u);
    ctx->pc = 0x1A75C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75BCu;
            // 0x1a75c0: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75C4u; }
        if (ctx->pc != 0x1A75C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75C4u; }
        if (ctx->pc != 0x1A75C4u) { return; }
    }
    ctx->pc = 0x1A75C4u;
label_1a75c4:
    // 0x1a75c4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a75c8:
    // 0x1a75c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a75c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a75cc:
    // 0x1a75cc: 0xc0655a8  jal         func_1956A0
label_1a75d0:
    if (ctx->pc == 0x1A75D0u) {
        ctx->pc = 0x1A75D0u;
            // 0x1a75d0: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1A75D4u;
        goto label_1a75d4;
    }
    ctx->pc = 0x1A75CCu;
    SET_GPR_U32(ctx, 31, 0x1A75D4u);
    ctx->pc = 0x1A75D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75CCu;
            // 0x1a75d0: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75D4u; }
        if (ctx->pc != 0x1A75D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75D4u; }
        if (ctx->pc != 0x1A75D4u) { return; }
    }
    ctx->pc = 0x1A75D4u;
label_1a75d4:
    // 0x1a75d4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a75d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a75d8:
    // 0x1a75d8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a75dc:
    // 0x1a75dc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a75dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a75e0:
    // 0x1a75e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a75e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a75e4:
    // 0x1a75e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a75e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a75e8:
    // 0x1a75e8: 0xc0655dc  jal         func_195770
label_1a75ec:
    if (ctx->pc == 0x1A75ECu) {
        ctx->pc = 0x1A75ECu;
            // 0x1a75ec: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A75F0u;
        goto label_1a75f0;
    }
    ctx->pc = 0x1A75E8u;
    SET_GPR_U32(ctx, 31, 0x1A75F0u);
    ctx->pc = 0x1A75ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75E8u;
            // 0x1a75ec: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75F0u; }
        if (ctx->pc != 0x1A75F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75F0u; }
        if (ctx->pc != 0x1A75F0u) { return; }
    }
    ctx->pc = 0x1A75F0u;
label_1a75f0:
    // 0x1a75f0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a75f4:
    // 0x1a75f4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a75f8:
    // 0x1a75f8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a75f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a75fc:
    // 0x1a75fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a75fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7600:
    // 0x1a7600: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7604:
    // 0x1a7604: 0xc0655dc  jal         func_195770
label_1a7608:
    if (ctx->pc == 0x1A7608u) {
        ctx->pc = 0x1A7608u;
            // 0x1a7608: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A760Cu;
        goto label_1a760c;
    }
    ctx->pc = 0x1A7604u;
    SET_GPR_U32(ctx, 31, 0x1A760Cu);
    ctx->pc = 0x1A7608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7604u;
            // 0x1a7608: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A760Cu; }
        if (ctx->pc != 0x1A760Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A760Cu; }
        if (ctx->pc != 0x1A760Cu) { return; }
    }
    ctx->pc = 0x1A760Cu;
label_1a760c:
    // 0x1a760c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7610:
    // 0x1a7610: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a7610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1a7614:
    // 0x1a7614: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7618:
    // 0x1a7618: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a761c:
    // 0x1a761c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a761cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7620:
    // 0x1a7620: 0xc0655dc  jal         func_195770
label_1a7624:
    if (ctx->pc == 0x1A7624u) {
        ctx->pc = 0x1A7624u;
            // 0x1a7624: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A7628u;
        goto label_1a7628;
    }
    ctx->pc = 0x1A7620u;
    SET_GPR_U32(ctx, 31, 0x1A7628u);
    ctx->pc = 0x1A7624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7620u;
            // 0x1a7624: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7628u; }
        if (ctx->pc != 0x1A7628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7628u; }
        if (ctx->pc != 0x1A7628u) { return; }
    }
    ctx->pc = 0x1A7628u;
label_1a7628:
    // 0x1a7628: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a762c:
    // 0x1a762c: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a762cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1a7630:
    // 0x1a7630: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7634:
    // 0x1a7634: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7638:
    // 0x1a7638: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a763c:
    // 0x1a763c: 0xc0655dc  jal         func_195770
label_1a7640:
    if (ctx->pc == 0x1A7640u) {
        ctx->pc = 0x1A7640u;
            // 0x1a7640: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A7644u;
        goto label_1a7644;
    }
    ctx->pc = 0x1A763Cu;
    SET_GPR_U32(ctx, 31, 0x1A7644u);
    ctx->pc = 0x1A7640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A763Cu;
            // 0x1a7640: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7644u; }
        if (ctx->pc != 0x1A7644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7644u; }
        if (ctx->pc != 0x1A7644u) { return; }
    }
    ctx->pc = 0x1A7644u;
label_1a7644:
    // 0x1a7644: 0x0  nop
    ctx->pc = 0x1a7644u;
    // NOP
label_1a7648:
    // 0x1a7648: 0xc065d00  jal         func_197400
label_1a764c:
    if (ctx->pc == 0x1A764Cu) {
        ctx->pc = 0x1A7650u;
        goto label_1a7650;
    }
    ctx->pc = 0x1A7648u;
    SET_GPR_U32(ctx, 31, 0x1A7650u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7650u; }
        if (ctx->pc != 0x1A7650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7650u; }
        if (ctx->pc != 0x1A7650u) { return; }
    }
    ctx->pc = 0x1A7650u;
label_1a7650:
    // 0x1a7650: 0x18400055  blez        $v0, . + 4 + (0x55 << 2)
label_1a7654:
    if (ctx->pc == 0x1A7654u) {
        ctx->pc = 0x1A7658u;
        goto label_1a7658;
    }
    ctx->pc = 0x1A7650u;
    {
        const bool branch_taken_0x1a7650 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a7650) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7658u;
label_1a7658:
    // 0x1a7658: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a765c:
    // 0x1a765c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a765cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7660:
    // 0x1a7660: 0xc0655a8  jal         func_1956A0
label_1a7664:
    if (ctx->pc == 0x1A7664u) {
        ctx->pc = 0x1A7664u;
            // 0x1a7664: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A7668u;
        goto label_1a7668;
    }
    ctx->pc = 0x1A7660u;
    SET_GPR_U32(ctx, 31, 0x1A7668u);
    ctx->pc = 0x1A7664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7660u;
            // 0x1a7664: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7668u; }
        if (ctx->pc != 0x1A7668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7668u; }
        if (ctx->pc != 0x1A7668u) { return; }
    }
    ctx->pc = 0x1A7668u;
label_1a7668:
    // 0x1a7668: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a766c:
    // 0x1a766c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a766cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7670:
    // 0x1a7670: 0xc0655a8  jal         func_1956A0
label_1a7674:
    if (ctx->pc == 0x1A7674u) {
        ctx->pc = 0x1A7674u;
            // 0x1a7674: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1A7678u;
        goto label_1a7678;
    }
    ctx->pc = 0x1A7670u;
    SET_GPR_U32(ctx, 31, 0x1A7678u);
    ctx->pc = 0x1A7674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7670u;
            // 0x1a7674: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7678u; }
        if (ctx->pc != 0x1A7678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7678u; }
        if (ctx->pc != 0x1A7678u) { return; }
    }
    ctx->pc = 0x1A7678u;
label_1a7678:
    // 0x1a7678: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a767c:
    // 0x1a767c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a767cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a7680:
    // 0x1a7680: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7684:
    // 0x1a7684: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7688:
    // 0x1a7688: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a7688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a768c:
    // 0x1a768c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a768cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7690:
    // 0x1a7690: 0xc0655dc  jal         func_195770
label_1a7694:
    if (ctx->pc == 0x1A7694u) {
        ctx->pc = 0x1A7694u;
            // 0x1a7694: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A7698u;
        goto label_1a7698;
    }
    ctx->pc = 0x1A7690u;
    SET_GPR_U32(ctx, 31, 0x1A7698u);
    ctx->pc = 0x1A7694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7690u;
            // 0x1a7694: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7698u; }
        if (ctx->pc != 0x1A7698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7698u; }
        if (ctx->pc != 0x1A7698u) { return; }
    }
    ctx->pc = 0x1A7698u;
label_1a7698:
    // 0x1a7698: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a769c:
    // 0x1a769c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a769cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a76a0:
    // 0x1a76a0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a76a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a76a4:
    // 0x1a76a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a76a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a76a8:
    // 0x1a76a8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a76ac:
    // 0x1a76ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a76acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a76b0:
    // 0x1a76b0: 0xc0655dc  jal         func_195770
label_1a76b4:
    if (ctx->pc == 0x1A76B4u) {
        ctx->pc = 0x1A76B4u;
            // 0x1a76b4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A76B8u;
        goto label_1a76b8;
    }
    ctx->pc = 0x1A76B0u;
    SET_GPR_U32(ctx, 31, 0x1A76B8u);
    ctx->pc = 0x1A76B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A76B0u;
            // 0x1a76b4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76B8u; }
        if (ctx->pc != 0x1A76B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76B8u; }
        if (ctx->pc != 0x1A76B8u) { return; }
    }
    ctx->pc = 0x1A76B8u;
label_1a76b8:
    // 0x1a76b8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1a76bc:
    if (ctx->pc == 0x1A76BCu) {
        ctx->pc = 0x1A76C0u;
        goto label_1a76c0;
    }
    ctx->pc = 0x1A76B8u;
    {
        const bool branch_taken_0x1a76b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a76b8) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A76C0u;
label_1a76c0:
    // 0x1a76c0: 0xc065d00  jal         func_197400
label_1a76c4:
    if (ctx->pc == 0x1A76C4u) {
        ctx->pc = 0x1A76C8u;
        goto label_1a76c8;
    }
    ctx->pc = 0x1A76C0u;
    SET_GPR_U32(ctx, 31, 0x1A76C8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76C8u; }
        if (ctx->pc != 0x1A76C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76C8u; }
        if (ctx->pc != 0x1A76C8u) { return; }
    }
    ctx->pc = 0x1A76C8u;
label_1a76c8:
    // 0x1a76c8: 0x18400037  blez        $v0, . + 4 + (0x37 << 2)
label_1a76cc:
    if (ctx->pc == 0x1A76CCu) {
        ctx->pc = 0x1A76D0u;
        goto label_1a76d0;
    }
    ctx->pc = 0x1A76C8u;
    {
        const bool branch_taken_0x1a76c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a76c8) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A76D0u;
label_1a76d0:
    // 0x1a76d0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a76d4:
    // 0x1a76d4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a76d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a76d8:
    // 0x1a76d8: 0xc0655a8  jal         func_1956A0
label_1a76dc:
    if (ctx->pc == 0x1A76DCu) {
        ctx->pc = 0x1A76DCu;
            // 0x1a76dc: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A76E0u;
        goto label_1a76e0;
    }
    ctx->pc = 0x1A76D8u;
    SET_GPR_U32(ctx, 31, 0x1A76E0u);
    ctx->pc = 0x1A76DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A76D8u;
            // 0x1a76dc: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76E0u; }
        if (ctx->pc != 0x1A76E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76E0u; }
        if (ctx->pc != 0x1A76E0u) { return; }
    }
    ctx->pc = 0x1A76E0u;
label_1a76e0:
    // 0x1a76e0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a76e4:
    // 0x1a76e4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a76e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a76e8:
    // 0x1a76e8: 0xc0655a8  jal         func_1956A0
label_1a76ec:
    if (ctx->pc == 0x1A76ECu) {
        ctx->pc = 0x1A76ECu;
            // 0x1a76ec: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1A76F0u;
        goto label_1a76f0;
    }
    ctx->pc = 0x1A76E8u;
    SET_GPR_U32(ctx, 31, 0x1A76F0u);
    ctx->pc = 0x1A76ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A76E8u;
            // 0x1a76ec: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76F0u; }
        if (ctx->pc != 0x1A76F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76F0u; }
        if (ctx->pc != 0x1A76F0u) { return; }
    }
    ctx->pc = 0x1A76F0u;
label_1a76f0:
    // 0x1a76f0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a76f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a76f4:
    // 0x1a76f4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1a76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1a76f8:
    // 0x1a76f8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a76f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a76fc:
    // 0x1a76fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a76fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7700:
    // 0x1a7700: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1a7700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1a7704:
    // 0x1a7704: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7708:
    // 0x1a7708: 0xc0655dc  jal         func_195770
label_1a770c:
    if (ctx->pc == 0x1A770Cu) {
        ctx->pc = 0x1A770Cu;
            // 0x1a770c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A7710u;
        goto label_1a7710;
    }
    ctx->pc = 0x1A7708u;
    SET_GPR_U32(ctx, 31, 0x1A7710u);
    ctx->pc = 0x1A770Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7708u;
            // 0x1a770c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7710u; }
        if (ctx->pc != 0x1A7710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7710u; }
        if (ctx->pc != 0x1A7710u) { return; }
    }
    ctx->pc = 0x1A7710u;
label_1a7710:
    // 0x1a7710: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7714:
    // 0x1a7714: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1a7714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1a7718:
    // 0x1a7718: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a771c:
    // 0x1a771c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a771cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7720:
    // 0x1a7720: 0x0  nop
    ctx->pc = 0x1a7720u;
    // NOP
label_1a7724:
    // 0x1a7724: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7724u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a7728:
    // 0x1a7728: 0xc0655dc  jal         func_195770
label_1a772c:
    if (ctx->pc == 0x1A772Cu) {
        ctx->pc = 0x1A772Cu;
            // 0x1a772c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A7730u;
        goto label_1a7730;
    }
    ctx->pc = 0x1A7728u;
    SET_GPR_U32(ctx, 31, 0x1A7730u);
    ctx->pc = 0x1A772Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7728u;
            // 0x1a772c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7730u; }
        if (ctx->pc != 0x1A7730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7730u; }
        if (ctx->pc != 0x1A7730u) { return; }
    }
    ctx->pc = 0x1A7730u;
label_1a7730:
    // 0x1a7730: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1a7734:
    if (ctx->pc == 0x1A7734u) {
        ctx->pc = 0x1A7738u;
        goto label_1a7738;
    }
    ctx->pc = 0x1A7730u;
    {
        const bool branch_taken_0x1a7730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7730) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7738u;
label_1a7738:
    // 0x1a7738: 0xc065d00  jal         func_197400
label_1a773c:
    if (ctx->pc == 0x1A773Cu) {
        ctx->pc = 0x1A7740u;
        goto label_1a7740;
    }
    ctx->pc = 0x1A7738u;
    SET_GPR_U32(ctx, 31, 0x1A7740u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7740u; }
        if (ctx->pc != 0x1A7740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7740u; }
        if (ctx->pc != 0x1A7740u) { return; }
    }
    ctx->pc = 0x1A7740u;
label_1a7740:
    // 0x1a7740: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_1a7744:
    if (ctx->pc == 0x1A7744u) {
        ctx->pc = 0x1A7748u;
        goto label_1a7748;
    }
    ctx->pc = 0x1A7740u;
    {
        const bool branch_taken_0x1a7740 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a7740) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7748u;
label_1a7748:
    // 0x1a7748: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a774c:
    // 0x1a774c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a774cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7750:
    // 0x1a7750: 0xc0655a8  jal         func_1956A0
label_1a7754:
    if (ctx->pc == 0x1A7754u) {
        ctx->pc = 0x1A7754u;
            // 0x1a7754: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A7758u;
        goto label_1a7758;
    }
    ctx->pc = 0x1A7750u;
    SET_GPR_U32(ctx, 31, 0x1A7758u);
    ctx->pc = 0x1A7754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7750u;
            // 0x1a7754: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7758u; }
        if (ctx->pc != 0x1A7758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7758u; }
        if (ctx->pc != 0x1A7758u) { return; }
    }
    ctx->pc = 0x1A7758u;
label_1a7758:
    // 0x1a7758: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a775c:
    // 0x1a775c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a775cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7760:
    // 0x1a7760: 0xc0655a8  jal         func_1956A0
label_1a7764:
    if (ctx->pc == 0x1A7764u) {
        ctx->pc = 0x1A7764u;
            // 0x1a7764: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1A7768u;
        goto label_1a7768;
    }
    ctx->pc = 0x1A7760u;
    SET_GPR_U32(ctx, 31, 0x1A7768u);
    ctx->pc = 0x1A7764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7760u;
            // 0x1a7764: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7768u; }
        if (ctx->pc != 0x1A7768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7768u; }
        if (ctx->pc != 0x1A7768u) { return; }
    }
    ctx->pc = 0x1A7768u;
label_1a7768:
    // 0x1a7768: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a776c:
    // 0x1a776c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a776cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a7770:
    // 0x1a7770: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7774:
    // 0x1a7774: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7778:
    // 0x1a7778: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a7778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a777c:
    // 0x1a777c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a777cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7780:
    // 0x1a7780: 0xc0655dc  jal         func_195770
label_1a7784:
    if (ctx->pc == 0x1A7784u) {
        ctx->pc = 0x1A7784u;
            // 0x1a7784: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1A7788u;
        goto label_1a7788;
    }
    ctx->pc = 0x1A7780u;
    SET_GPR_U32(ctx, 31, 0x1A7788u);
    ctx->pc = 0x1A7784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7780u;
            // 0x1a7784: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7788u; }
        if (ctx->pc != 0x1A7788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7788u; }
        if (ctx->pc != 0x1A7788u) { return; }
    }
    ctx->pc = 0x1A7788u;
label_1a7788:
    // 0x1a7788: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a7788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a778c:
    // 0x1a778c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a778cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a7790:
    // 0x1a7790: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a7790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a7794:
    // 0x1a7794: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7798:
    // 0x1a7798: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a7798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a779c:
    // 0x1a779c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a779cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a77a0:
    // 0x1a77a0: 0xc0655dc  jal         func_195770
label_1a77a4:
    if (ctx->pc == 0x1A77A4u) {
        ctx->pc = 0x1A77A4u;
            // 0x1a77a4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1A77A8u;
        goto label_1a77a8;
    }
    ctx->pc = 0x1A77A0u;
    SET_GPR_U32(ctx, 31, 0x1A77A8u);
    ctx->pc = 0x1A77A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77A0u;
            // 0x1a77a4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77A8u; }
        if (ctx->pc != 0x1A77A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77A8u; }
        if (ctx->pc != 0x1A77A8u) { return; }
    }
    ctx->pc = 0x1A77A8u;
label_1a77a8:
    // 0x1a77a8: 0xc04b788  jal         func_12DE20
label_1a77ac:
    if (ctx->pc == 0x1A77ACu) {
        ctx->pc = 0x1A77ACu;
            // 0x1a77ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A77B0u;
        goto label_1a77b0;
    }
    ctx->pc = 0x1A77A8u;
    SET_GPR_U32(ctx, 31, 0x1A77B0u);
    ctx->pc = 0x1A77ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77A8u;
            // 0x1a77ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77B0u; }
        if (ctx->pc != 0x1A77B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77B0u; }
        if (ctx->pc != 0x1A77B0u) { return; }
    }
    ctx->pc = 0x1A77B0u;
label_1a77b0:
    // 0x1a77b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a77b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a77b4:
    // 0x1a77b4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1a77b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a77b8:
    // 0x1a77b8: 0xc04b7da  jal         func_12DF68
label_1a77bc:
    if (ctx->pc == 0x1A77BCu) {
        ctx->pc = 0x1A77BCu;
            // 0x1a77bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A77C0u;
        goto label_1a77c0;
    }
    ctx->pc = 0x1A77B8u;
    SET_GPR_U32(ctx, 31, 0x1A77C0u);
    ctx->pc = 0x1A77BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77B8u;
            // 0x1a77bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77C0u; }
        if (ctx->pc != 0x1A77C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77C0u; }
        if (ctx->pc != 0x1A77C0u) { return; }
    }
    ctx->pc = 0x1A77C0u;
label_1a77c0:
    // 0x1a77c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a77c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a77c4:
    // 0x1a77c4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1a77c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a77c8:
    // 0x1a77c8: 0xc04b804  jal         func_12E010
label_1a77cc:
    if (ctx->pc == 0x1A77CCu) {
        ctx->pc = 0x1A77CCu;
            // 0x1a77cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A77D0u;
        goto label_1a77d0;
    }
    ctx->pc = 0x1A77C8u;
    SET_GPR_U32(ctx, 31, 0x1A77D0u);
    ctx->pc = 0x1A77CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77C8u;
            // 0x1a77cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77D0u; }
        if (ctx->pc != 0x1A77D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77D0u; }
        if (ctx->pc != 0x1A77D0u) { return; }
    }
    ctx->pc = 0x1A77D0u;
label_1a77d0:
    // 0x1a77d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a77d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a77d4:
    // 0x1a77d4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1a77d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a77d8:
    // 0x1a77d8: 0xc04b7b0  jal         func_12DEC0
label_1a77dc:
    if (ctx->pc == 0x1A77DCu) {
        ctx->pc = 0x1A77DCu;
            // 0x1a77dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A77E0u;
        goto label_1a77e0;
    }
    ctx->pc = 0x1A77D8u;
    SET_GPR_U32(ctx, 31, 0x1A77E0u);
    ctx->pc = 0x1A77DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77D8u;
            // 0x1a77dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77E0u; }
        if (ctx->pc != 0x1A77E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77E0u; }
        if (ctx->pc != 0x1A77E0u) { return; }
    }
    ctx->pc = 0x1A77E0u;
label_1a77e0:
    // 0x1a77e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a77e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a77e4:
    // 0x1a77e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a77e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a77e8:
    // 0x1a77e8: 0xc04b75e  jal         func_12DD78
label_1a77ec:
    if (ctx->pc == 0x1A77ECu) {
        ctx->pc = 0x1A77ECu;
            // 0x1a77ec: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1A77F0u;
        goto label_1a77f0;
    }
    ctx->pc = 0x1A77E8u;
    SET_GPR_U32(ctx, 31, 0x1A77F0u);
    ctx->pc = 0x1A77ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77E8u;
            // 0x1a77ec: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77F0u; }
        if (ctx->pc != 0x1A77F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77F0u; }
        if (ctx->pc != 0x1A77F0u) { return; }
    }
    ctx->pc = 0x1A77F0u;
label_1a77f0:
    // 0x1a77f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a77f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a77f4:
    // 0x1a77f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a77f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a77f8:
    // 0x1a77f8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a77f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a77fc:
    // 0x1a77fc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1a7800:
    if (ctx->pc == 0x1A7800u) {
        ctx->pc = 0x1A7804u;
        goto label_1a7804;
    }
    ctx->pc = 0x1A77FCu;
    {
        const bool branch_taken_0x1a77fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a77fc) {
            ctx->pc = 0x1A7850u;
            goto label_1a7850;
        }
    }
    ctx->pc = 0x1A7804u;
label_1a7804:
    // 0x1a7804: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1a7804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1a7808:
    // 0x1a7808: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a780c:
    if (ctx->pc == 0x1A780Cu) {
        ctx->pc = 0x1A7810u;
        goto label_1a7810;
    }
    ctx->pc = 0x1A7808u;
    {
        const bool branch_taken_0x1a7808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7808) {
            ctx->pc = 0x1A7820u;
            goto label_1a7820;
        }
    }
    ctx->pc = 0x1A7810u;
label_1a7810:
    // 0x1a7810: 0xc0604f0  jal         func_1813C0
label_1a7814:
    if (ctx->pc == 0x1A7814u) {
        ctx->pc = 0x1A7814u;
            // 0x1a7814: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A7818u;
        goto label_1a7818;
    }
    ctx->pc = 0x1A7810u;
    SET_GPR_U32(ctx, 31, 0x1A7818u);
    ctx->pc = 0x1A7814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7810u;
            // 0x1a7814: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7818u; }
        if (ctx->pc != 0x1A7818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7818u; }
        if (ctx->pc != 0x1A7818u) { return; }
    }
    ctx->pc = 0x1A7818u;
label_1a7818:
    // 0x1a7818: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a781c:
    if (ctx->pc == 0x1A781Cu) {
        ctx->pc = 0x1A7820u;
        goto label_1a7820;
    }
    ctx->pc = 0x1A7818u;
    {
        const bool branch_taken_0x1a7818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7818) {
            ctx->pc = 0x1A7828u;
            goto label_1a7828;
        }
    }
    ctx->pc = 0x1A7820u;
label_1a7820:
    // 0x1a7820: 0xc0604dc  jal         func_181370
label_1a7824:
    if (ctx->pc == 0x1A7824u) {
        ctx->pc = 0x1A7824u;
            // 0x1a7824: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A7828u;
        goto label_1a7828;
    }
    ctx->pc = 0x1A7820u;
    SET_GPR_U32(ctx, 31, 0x1A7828u);
    ctx->pc = 0x1A7824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7820u;
            // 0x1a7824: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7828u; }
        if (ctx->pc != 0x1A7828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7828u; }
        if (ctx->pc != 0x1A7828u) { return; }
    }
    ctx->pc = 0x1A7828u;
label_1a7828:
    // 0x1a7828: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1a7828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1a782c:
    // 0x1a782c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a7830:
    if (ctx->pc == 0x1A7830u) {
        ctx->pc = 0x1A7834u;
        goto label_1a7834;
    }
    ctx->pc = 0x1A782Cu;
    {
        const bool branch_taken_0x1a782c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a782c) {
            ctx->pc = 0x1A7840u;
            goto label_1a7840;
        }
    }
    ctx->pc = 0x1A7834u;
label_1a7834:
    // 0x1a7834: 0x10000022  b           . + 4 + (0x22 << 2)
label_1a7838:
    if (ctx->pc == 0x1A7838u) {
        ctx->pc = 0x1A7838u;
            // 0x1a7838: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x1A783Cu;
        goto label_1a783c;
    }
    ctx->pc = 0x1A7834u;
    {
        const bool branch_taken_0x1a7834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7834u;
            // 0x1a7838: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7834) {
            ctx->pc = 0x1A78C0u;
            goto label_1a78c0;
        }
    }
    ctx->pc = 0x1A783Cu;
label_1a783c:
    // 0x1a783c: 0x0  nop
    ctx->pc = 0x1a783cu;
    // NOP
label_1a7840:
    // 0x1a7840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7844:
    // 0x1a7844: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1a7848:
    if (ctx->pc == 0x1A7848u) {
        ctx->pc = 0x1A7848u;
            // 0x1a7848: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1A784Cu;
        goto label_1a784c;
    }
    ctx->pc = 0x1A7844u;
    {
        const bool branch_taken_0x1a7844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7844u;
            // 0x1a7848: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7844) {
            ctx->pc = 0x1A78C0u;
            goto label_1a78c0;
        }
    }
    ctx->pc = 0x1A784Cu;
label_1a784c:
    // 0x1a784c: 0x0  nop
    ctx->pc = 0x1a784cu;
    // NOP
label_1a7850:
    // 0x1a7850: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x1a7850u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
label_1a7854:
    // 0x1a7854: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1a7858:
    if (ctx->pc == 0x1A7858u) {
        ctx->pc = 0x1A785Cu;
        goto label_1a785c;
    }
    ctx->pc = 0x1A7854u;
    {
        const bool branch_taken_0x1a7854 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7854) {
            ctx->pc = 0x1A78B0u;
            goto label_1a78b0;
        }
    }
    ctx->pc = 0x1A785Cu;
label_1a785c:
    // 0x1a785c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a7860:
    // 0x1a7860: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a7860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a7864:
    // 0x1a7864: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a7864u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a7868:
    // 0x1a7868: 0x0  nop
    ctx->pc = 0x1a7868u;
    // NOP
label_1a786c:
    // 0x1a786c: 0x0  nop
    ctx->pc = 0x1a786cu;
    // NOP
label_1a7870:
    // 0x1a7870: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7870u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7874:
    // 0x1a7874: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1a7878:
    if (ctx->pc == 0x1A7878u) {
        ctx->pc = 0x1A787Cu;
        goto label_1a787c;
    }
    ctx->pc = 0x1A7874u;
    {
        const bool branch_taken_0x1a7874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7874) {
            ctx->pc = 0x1A78B0u;
            goto label_1a78b0;
        }
    }
    ctx->pc = 0x1A787Cu;
label_1a787c:
    // 0x1a787c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a787cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7880:
    // 0x1a7880: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a7880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a7884:
    // 0x1a7884: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1a7884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1a7888:
    // 0x1a7888: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a788c:
    // 0x1a788c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a788cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7890:
    // 0x1a7890: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7894:
    // 0x1a7894: 0xc0536d8  jal         func_14DB60
label_1a7898:
    if (ctx->pc == 0x1A7898u) {
        ctx->pc = 0x1A7898u;
            // 0x1a7898: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1A789Cu;
        goto label_1a789c;
    }
    ctx->pc = 0x1A7894u;
    SET_GPR_U32(ctx, 31, 0x1A789Cu);
    ctx->pc = 0x1A7898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7894u;
            // 0x1a7898: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A789Cu; }
        if (ctx->pc != 0x1A789Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A789Cu; }
        if (ctx->pc != 0x1A789Cu) { return; }
    }
    ctx->pc = 0x1A789Cu;
label_1a789c:
    // 0x1a789c: 0xc060500  jal         func_181400
label_1a78a0:
    if (ctx->pc == 0x1A78A0u) {
        ctx->pc = 0x1A78A0u;
            // 0x1a78a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A78A4u;
        goto label_1a78a4;
    }
    ctx->pc = 0x1A789Cu;
    SET_GPR_U32(ctx, 31, 0x1A78A4u);
    ctx->pc = 0x1A78A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A789Cu;
            // 0x1a78a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A78A4u; }
        if (ctx->pc != 0x1A78A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A78A4u; }
        if (ctx->pc != 0x1A78A4u) { return; }
    }
    ctx->pc = 0x1A78A4u;
label_1a78a4:
    // 0x1a78a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a78a8:
    if (ctx->pc == 0x1A78A8u) {
        ctx->pc = 0x1A78ACu;
        goto label_1a78ac;
    }
    ctx->pc = 0x1A78A4u;
    {
        const bool branch_taken_0x1a78a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a78a4) {
            ctx->pc = 0x1A78B8u;
            goto label_1a78b8;
        }
    }
    ctx->pc = 0x1A78ACu;
label_1a78ac:
    // 0x1a78ac: 0x0  nop
    ctx->pc = 0x1a78acu;
    // NOP
label_1a78b0:
    // 0x1a78b0: 0xc0604dc  jal         func_181370
label_1a78b4:
    if (ctx->pc == 0x1A78B4u) {
        ctx->pc = 0x1A78B4u;
            // 0x1a78b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A78B8u;
        goto label_1a78b8;
    }
    ctx->pc = 0x1A78B0u;
    SET_GPR_U32(ctx, 31, 0x1A78B8u);
    ctx->pc = 0x1A78B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A78B0u;
            // 0x1a78b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A78B8u; }
        if (ctx->pc != 0x1A78B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A78B8u; }
        if (ctx->pc != 0x1A78B8u) { return; }
    }
    ctx->pc = 0x1A78B8u;
label_1a78b8:
    // 0x1a78b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a78bc:
    // 0x1a78bc: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a78bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a78c0:
    // 0x1a78c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a78c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a78c4:
    // 0x1a78c4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1a78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1a78c8:
    // 0x1a78c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a78c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a78cc:
    // 0x1a78cc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1a78d0:
    // 0x1a78d0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a78d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a78d4:
    // 0x1a78d4: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1a78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1a78d8:
    // 0x1a78d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a78d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a78dc:
    // 0x1a78dc: 0x0  nop
    ctx->pc = 0x1a78dcu;
    // NOP
label_1a78e0:
    // 0x1a78e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a78e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a78e4:
    // 0x1a78e4: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1a78e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1a78e8:
    // 0x1a78e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a78ec:
    // 0x1a78ec: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1a78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1a78f0:
    // 0x1a78f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a78f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a78f4:
    // 0x1a78f4: 0x0  nop
    ctx->pc = 0x1a78f4u;
    // NOP
label_1a78f8:
    // 0x1a78f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a78f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a78fc:
    // 0x1a78fc: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1a78fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1a7900:
    // 0x1a7900: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a7904:
    // 0x1a7904: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1a7904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1a7908:
    // 0x1a7908: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a790c:
    // 0x1a790c: 0x0  nop
    ctx->pc = 0x1a790cu;
    // NOP
label_1a7910:
    // 0x1a7910: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a7910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a7914:
    // 0x1a7914: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1a7914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1a7918:
    // 0x1a7918: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a7918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a791c:
    // 0x1a791c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1a791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1a7920:
    // 0x1a7920: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7924:
    // 0x1a7924: 0x0  nop
    ctx->pc = 0x1a7924u;
    // NOP
label_1a7928:
    // 0x1a7928: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a7928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a792c:
    // 0x1a792c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1a792cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1a7930:
    // 0x1a7930: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a7930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a7934:
    // 0x1a7934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a7934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a7938:
    // 0x1a7938: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1a7938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1a793c:
    // 0x1a793c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7940:
    // 0x1a7940: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1a7940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7944:
    // 0x1a7944: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a7944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7948:
    // 0x1a7948: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a794c:
    if (ctx->pc == 0x1A794Cu) {
        ctx->pc = 0x1A7950u;
        goto label_1a7950;
    }
    ctx->pc = 0x1A7948u;
    {
        const bool branch_taken_0x1a7948 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7948) {
            ctx->pc = 0x1A7968u;
            goto label_1a7968;
        }
    }
    ctx->pc = 0x1A7950u;
label_1a7950:
    // 0x1a7950: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1a7950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1a7954:
    // 0x1a7954: 0x40f809  jalr        $v0
label_1a7958:
    if (ctx->pc == 0x1A7958u) {
        ctx->pc = 0x1A7958u;
            // 0x1a7958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A795Cu;
        goto label_1a795c;
    }
    ctx->pc = 0x1A7954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A795Cu);
        ctx->pc = 0x1A7958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7954u;
            // 0x1a7958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C50u: goto label_1a6c50;
            case 0x1A6C54u: goto label_1a6c54;
            case 0x1A6C58u: goto label_1a6c58;
            case 0x1A6C5Cu: goto label_1a6c5c;
            case 0x1A6C60u: goto label_1a6c60;
            case 0x1A6C64u: goto label_1a6c64;
            case 0x1A6C68u: goto label_1a6c68;
            case 0x1A6C6Cu: goto label_1a6c6c;
            case 0x1A6C70u: goto label_1a6c70;
            case 0x1A6C74u: goto label_1a6c74;
            case 0x1A6C78u: goto label_1a6c78;
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6C80u: goto label_1a6c80;
            case 0x1A6C84u: goto label_1a6c84;
            case 0x1A6C88u: goto label_1a6c88;
            case 0x1A6C8Cu: goto label_1a6c8c;
            case 0x1A6C90u: goto label_1a6c90;
            case 0x1A6C94u: goto label_1a6c94;
            case 0x1A6C98u: goto label_1a6c98;
            case 0x1A6C9Cu: goto label_1a6c9c;
            case 0x1A6CA0u: goto label_1a6ca0;
            case 0x1A6CA4u: goto label_1a6ca4;
            case 0x1A6CA8u: goto label_1a6ca8;
            case 0x1A6CACu: goto label_1a6cac;
            case 0x1A6CB0u: goto label_1a6cb0;
            case 0x1A6CB4u: goto label_1a6cb4;
            case 0x1A6CB8u: goto label_1a6cb8;
            case 0x1A6CBCu: goto label_1a6cbc;
            case 0x1A6CC0u: goto label_1a6cc0;
            case 0x1A6CC4u: goto label_1a6cc4;
            case 0x1A6CC8u: goto label_1a6cc8;
            case 0x1A6CCCu: goto label_1a6ccc;
            case 0x1A6CD0u: goto label_1a6cd0;
            case 0x1A6CD4u: goto label_1a6cd4;
            case 0x1A6CD8u: goto label_1a6cd8;
            case 0x1A6CDCu: goto label_1a6cdc;
            case 0x1A6CE0u: goto label_1a6ce0;
            case 0x1A6CE4u: goto label_1a6ce4;
            case 0x1A6CE8u: goto label_1a6ce8;
            case 0x1A6CECu: goto label_1a6cec;
            case 0x1A6CF0u: goto label_1a6cf0;
            case 0x1A6CF4u: goto label_1a6cf4;
            case 0x1A6CF8u: goto label_1a6cf8;
            case 0x1A6CFCu: goto label_1a6cfc;
            case 0x1A6D00u: goto label_1a6d00;
            case 0x1A6D04u: goto label_1a6d04;
            case 0x1A6D08u: goto label_1a6d08;
            case 0x1A6D0Cu: goto label_1a6d0c;
            case 0x1A6D10u: goto label_1a6d10;
            case 0x1A6D14u: goto label_1a6d14;
            case 0x1A6D18u: goto label_1a6d18;
            case 0x1A6D1Cu: goto label_1a6d1c;
            case 0x1A6D20u: goto label_1a6d20;
            case 0x1A6D24u: goto label_1a6d24;
            case 0x1A6D28u: goto label_1a6d28;
            case 0x1A6D2Cu: goto label_1a6d2c;
            case 0x1A6D30u: goto label_1a6d30;
            case 0x1A6D34u: goto label_1a6d34;
            case 0x1A6D38u: goto label_1a6d38;
            case 0x1A6D3Cu: goto label_1a6d3c;
            case 0x1A6D40u: goto label_1a6d40;
            case 0x1A6D44u: goto label_1a6d44;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6D4Cu: goto label_1a6d4c;
            case 0x1A6D50u: goto label_1a6d50;
            case 0x1A6D54u: goto label_1a6d54;
            case 0x1A6D58u: goto label_1a6d58;
            case 0x1A6D5Cu: goto label_1a6d5c;
            case 0x1A6D60u: goto label_1a6d60;
            case 0x1A6D64u: goto label_1a6d64;
            case 0x1A6D68u: goto label_1a6d68;
            case 0x1A6D6Cu: goto label_1a6d6c;
            case 0x1A6D70u: goto label_1a6d70;
            case 0x1A6D74u: goto label_1a6d74;
            case 0x1A6D78u: goto label_1a6d78;
            case 0x1A6D7Cu: goto label_1a6d7c;
            case 0x1A6D80u: goto label_1a6d80;
            case 0x1A6D84u: goto label_1a6d84;
            case 0x1A6D88u: goto label_1a6d88;
            case 0x1A6D8Cu: goto label_1a6d8c;
            case 0x1A6D90u: goto label_1a6d90;
            case 0x1A6D94u: goto label_1a6d94;
            case 0x1A6D98u: goto label_1a6d98;
            case 0x1A6D9Cu: goto label_1a6d9c;
            case 0x1A6DA0u: goto label_1a6da0;
            case 0x1A6DA4u: goto label_1a6da4;
            case 0x1A6DA8u: goto label_1a6da8;
            case 0x1A6DACu: goto label_1a6dac;
            case 0x1A6DB0u: goto label_1a6db0;
            case 0x1A6DB4u: goto label_1a6db4;
            case 0x1A6DB8u: goto label_1a6db8;
            case 0x1A6DBCu: goto label_1a6dbc;
            case 0x1A6DC0u: goto label_1a6dc0;
            case 0x1A6DC4u: goto label_1a6dc4;
            case 0x1A6DC8u: goto label_1a6dc8;
            case 0x1A6DCCu: goto label_1a6dcc;
            case 0x1A6DD0u: goto label_1a6dd0;
            case 0x1A6DD4u: goto label_1a6dd4;
            case 0x1A6DD8u: goto label_1a6dd8;
            case 0x1A6DDCu: goto label_1a6ddc;
            case 0x1A6DE0u: goto label_1a6de0;
            case 0x1A6DE4u: goto label_1a6de4;
            case 0x1A6DE8u: goto label_1a6de8;
            case 0x1A6DECu: goto label_1a6dec;
            case 0x1A6DF0u: goto label_1a6df0;
            case 0x1A6DF4u: goto label_1a6df4;
            case 0x1A6DF8u: goto label_1a6df8;
            case 0x1A6DFCu: goto label_1a6dfc;
            case 0x1A6E00u: goto label_1a6e00;
            case 0x1A6E04u: goto label_1a6e04;
            case 0x1A6E08u: goto label_1a6e08;
            case 0x1A6E0Cu: goto label_1a6e0c;
            case 0x1A6E10u: goto label_1a6e10;
            case 0x1A6E14u: goto label_1a6e14;
            case 0x1A6E18u: goto label_1a6e18;
            case 0x1A6E1Cu: goto label_1a6e1c;
            case 0x1A6E20u: goto label_1a6e20;
            case 0x1A6E24u: goto label_1a6e24;
            case 0x1A6E28u: goto label_1a6e28;
            case 0x1A6E2Cu: goto label_1a6e2c;
            case 0x1A6E30u: goto label_1a6e30;
            case 0x1A6E34u: goto label_1a6e34;
            case 0x1A6E38u: goto label_1a6e38;
            case 0x1A6E3Cu: goto label_1a6e3c;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E44u: goto label_1a6e44;
            case 0x1A6E48u: goto label_1a6e48;
            case 0x1A6E4Cu: goto label_1a6e4c;
            case 0x1A6E50u: goto label_1a6e50;
            case 0x1A6E54u: goto label_1a6e54;
            case 0x1A6E58u: goto label_1a6e58;
            case 0x1A6E5Cu: goto label_1a6e5c;
            case 0x1A6E60u: goto label_1a6e60;
            case 0x1A6E64u: goto label_1a6e64;
            case 0x1A6E68u: goto label_1a6e68;
            case 0x1A6E6Cu: goto label_1a6e6c;
            case 0x1A6E70u: goto label_1a6e70;
            case 0x1A6E74u: goto label_1a6e74;
            case 0x1A6E78u: goto label_1a6e78;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6E80u: goto label_1a6e80;
            case 0x1A6E84u: goto label_1a6e84;
            case 0x1A6E88u: goto label_1a6e88;
            case 0x1A6E8Cu: goto label_1a6e8c;
            case 0x1A6E90u: goto label_1a6e90;
            case 0x1A6E94u: goto label_1a6e94;
            case 0x1A6E98u: goto label_1a6e98;
            case 0x1A6E9Cu: goto label_1a6e9c;
            case 0x1A6EA0u: goto label_1a6ea0;
            case 0x1A6EA4u: goto label_1a6ea4;
            case 0x1A6EA8u: goto label_1a6ea8;
            case 0x1A6EACu: goto label_1a6eac;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EB4u: goto label_1a6eb4;
            case 0x1A6EB8u: goto label_1a6eb8;
            case 0x1A6EBCu: goto label_1a6ebc;
            case 0x1A6EC0u: goto label_1a6ec0;
            case 0x1A6EC4u: goto label_1a6ec4;
            case 0x1A6EC8u: goto label_1a6ec8;
            case 0x1A6ECCu: goto label_1a6ecc;
            case 0x1A6ED0u: goto label_1a6ed0;
            case 0x1A6ED4u: goto label_1a6ed4;
            case 0x1A6ED8u: goto label_1a6ed8;
            case 0x1A6EDCu: goto label_1a6edc;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6EE4u: goto label_1a6ee4;
            case 0x1A6EE8u: goto label_1a6ee8;
            case 0x1A6EECu: goto label_1a6eec;
            case 0x1A6EF0u: goto label_1a6ef0;
            case 0x1A6EF4u: goto label_1a6ef4;
            case 0x1A6EF8u: goto label_1a6ef8;
            case 0x1A6EFCu: goto label_1a6efc;
            case 0x1A6F00u: goto label_1a6f00;
            case 0x1A6F04u: goto label_1a6f04;
            case 0x1A6F08u: goto label_1a6f08;
            case 0x1A6F0Cu: goto label_1a6f0c;
            case 0x1A6F10u: goto label_1a6f10;
            case 0x1A6F14u: goto label_1a6f14;
            case 0x1A6F18u: goto label_1a6f18;
            case 0x1A6F1Cu: goto label_1a6f1c;
            case 0x1A6F20u: goto label_1a6f20;
            case 0x1A6F24u: goto label_1a6f24;
            case 0x1A6F28u: goto label_1a6f28;
            case 0x1A6F2Cu: goto label_1a6f2c;
            case 0x1A6F30u: goto label_1a6f30;
            case 0x1A6F34u: goto label_1a6f34;
            case 0x1A6F38u: goto label_1a6f38;
            case 0x1A6F3Cu: goto label_1a6f3c;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F44u: goto label_1a6f44;
            case 0x1A6F48u: goto label_1a6f48;
            case 0x1A6F4Cu: goto label_1a6f4c;
            case 0x1A6F50u: goto label_1a6f50;
            case 0x1A6F54u: goto label_1a6f54;
            case 0x1A6F58u: goto label_1a6f58;
            case 0x1A6F5Cu: goto label_1a6f5c;
            case 0x1A6F60u: goto label_1a6f60;
            case 0x1A6F64u: goto label_1a6f64;
            case 0x1A6F68u: goto label_1a6f68;
            case 0x1A6F6Cu: goto label_1a6f6c;
            case 0x1A6F70u: goto label_1a6f70;
            case 0x1A6F74u: goto label_1a6f74;
            case 0x1A6F78u: goto label_1a6f78;
            case 0x1A6F7Cu: goto label_1a6f7c;
            case 0x1A6F80u: goto label_1a6f80;
            case 0x1A6F84u: goto label_1a6f84;
            case 0x1A6F88u: goto label_1a6f88;
            case 0x1A6F8Cu: goto label_1a6f8c;
            case 0x1A6F90u: goto label_1a6f90;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6F98u: goto label_1a6f98;
            case 0x1A6F9Cu: goto label_1a6f9c;
            case 0x1A6FA0u: goto label_1a6fa0;
            case 0x1A6FA4u: goto label_1a6fa4;
            case 0x1A6FA8u: goto label_1a6fa8;
            case 0x1A6FACu: goto label_1a6fac;
            case 0x1A6FB0u: goto label_1a6fb0;
            case 0x1A6FB4u: goto label_1a6fb4;
            case 0x1A6FB8u: goto label_1a6fb8;
            case 0x1A6FBCu: goto label_1a6fbc;
            case 0x1A6FC0u: goto label_1a6fc0;
            case 0x1A6FC4u: goto label_1a6fc4;
            case 0x1A6FC8u: goto label_1a6fc8;
            case 0x1A6FCCu: goto label_1a6fcc;
            case 0x1A6FD0u: goto label_1a6fd0;
            case 0x1A6FD4u: goto label_1a6fd4;
            case 0x1A6FD8u: goto label_1a6fd8;
            case 0x1A6FDCu: goto label_1a6fdc;
            case 0x1A6FE0u: goto label_1a6fe0;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FE8u: goto label_1a6fe8;
            case 0x1A6FECu: goto label_1a6fec;
            case 0x1A6FF0u: goto label_1a6ff0;
            case 0x1A6FF4u: goto label_1a6ff4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A6FFCu: goto label_1a6ffc;
            case 0x1A7000u: goto label_1a7000;
            case 0x1A7004u: goto label_1a7004;
            case 0x1A7008u: goto label_1a7008;
            case 0x1A700Cu: goto label_1a700c;
            case 0x1A7010u: goto label_1a7010;
            case 0x1A7014u: goto label_1a7014;
            case 0x1A7018u: goto label_1a7018;
            case 0x1A701Cu: goto label_1a701c;
            case 0x1A7020u: goto label_1a7020;
            case 0x1A7024u: goto label_1a7024;
            case 0x1A7028u: goto label_1a7028;
            case 0x1A702Cu: goto label_1a702c;
            case 0x1A7030u: goto label_1a7030;
            case 0x1A7034u: goto label_1a7034;
            case 0x1A7038u: goto label_1a7038;
            case 0x1A703Cu: goto label_1a703c;
            case 0x1A7040u: goto label_1a7040;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A7048u: goto label_1a7048;
            case 0x1A704Cu: goto label_1a704c;
            case 0x1A7050u: goto label_1a7050;
            case 0x1A7054u: goto label_1a7054;
            case 0x1A7058u: goto label_1a7058;
            case 0x1A705Cu: goto label_1a705c;
            case 0x1A7060u: goto label_1a7060;
            case 0x1A7064u: goto label_1a7064;
            case 0x1A7068u: goto label_1a7068;
            case 0x1A706Cu: goto label_1a706c;
            case 0x1A7070u: goto label_1a7070;
            case 0x1A7074u: goto label_1a7074;
            case 0x1A7078u: goto label_1a7078;
            case 0x1A707Cu: goto label_1a707c;
            case 0x1A7080u: goto label_1a7080;
            case 0x1A7084u: goto label_1a7084;
            case 0x1A7088u: goto label_1a7088;
            case 0x1A708Cu: goto label_1a708c;
            case 0x1A7090u: goto label_1a7090;
            case 0x1A7094u: goto label_1a7094;
            case 0x1A7098u: goto label_1a7098;
            case 0x1A709Cu: goto label_1a709c;
            case 0x1A70A0u: goto label_1a70a0;
            case 0x1A70A4u: goto label_1a70a4;
            case 0x1A70A8u: goto label_1a70a8;
            case 0x1A70ACu: goto label_1a70ac;
            case 0x1A70B0u: goto label_1a70b0;
            case 0x1A70B4u: goto label_1a70b4;
            case 0x1A70B8u: goto label_1a70b8;
            case 0x1A70BCu: goto label_1a70bc;
            case 0x1A70C0u: goto label_1a70c0;
            case 0x1A70C4u: goto label_1a70c4;
            case 0x1A70C8u: goto label_1a70c8;
            case 0x1A70CCu: goto label_1a70cc;
            case 0x1A70D0u: goto label_1a70d0;
            case 0x1A70D4u: goto label_1a70d4;
            case 0x1A70D8u: goto label_1a70d8;
            case 0x1A70DCu: goto label_1a70dc;
            case 0x1A70E0u: goto label_1a70e0;
            case 0x1A70E4u: goto label_1a70e4;
            case 0x1A70E8u: goto label_1a70e8;
            case 0x1A70ECu: goto label_1a70ec;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A70F4u: goto label_1a70f4;
            case 0x1A70F8u: goto label_1a70f8;
            case 0x1A70FCu: goto label_1a70fc;
            case 0x1A7100u: goto label_1a7100;
            case 0x1A7104u: goto label_1a7104;
            case 0x1A7108u: goto label_1a7108;
            case 0x1A710Cu: goto label_1a710c;
            case 0x1A7110u: goto label_1a7110;
            case 0x1A7114u: goto label_1a7114;
            case 0x1A7118u: goto label_1a7118;
            case 0x1A711Cu: goto label_1a711c;
            case 0x1A7120u: goto label_1a7120;
            case 0x1A7124u: goto label_1a7124;
            case 0x1A7128u: goto label_1a7128;
            case 0x1A712Cu: goto label_1a712c;
            case 0x1A7130u: goto label_1a7130;
            case 0x1A7134u: goto label_1a7134;
            case 0x1A7138u: goto label_1a7138;
            case 0x1A713Cu: goto label_1a713c;
            case 0x1A7140u: goto label_1a7140;
            case 0x1A7144u: goto label_1a7144;
            case 0x1A7148u: goto label_1a7148;
            case 0x1A714Cu: goto label_1a714c;
            case 0x1A7150u: goto label_1a7150;
            case 0x1A7154u: goto label_1a7154;
            case 0x1A7158u: goto label_1a7158;
            case 0x1A715Cu: goto label_1a715c;
            case 0x1A7160u: goto label_1a7160;
            case 0x1A7164u: goto label_1a7164;
            case 0x1A7168u: goto label_1a7168;
            case 0x1A716Cu: goto label_1a716c;
            case 0x1A7170u: goto label_1a7170;
            case 0x1A7174u: goto label_1a7174;
            case 0x1A7178u: goto label_1a7178;
            case 0x1A717Cu: goto label_1a717c;
            case 0x1A7180u: goto label_1a7180;
            case 0x1A7184u: goto label_1a7184;
            case 0x1A7188u: goto label_1a7188;
            case 0x1A718Cu: goto label_1a718c;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7194u: goto label_1a7194;
            case 0x1A7198u: goto label_1a7198;
            case 0x1A719Cu: goto label_1a719c;
            case 0x1A71A0u: goto label_1a71a0;
            case 0x1A71A4u: goto label_1a71a4;
            case 0x1A71A8u: goto label_1a71a8;
            case 0x1A71ACu: goto label_1a71ac;
            case 0x1A71B0u: goto label_1a71b0;
            case 0x1A71B4u: goto label_1a71b4;
            case 0x1A71B8u: goto label_1a71b8;
            case 0x1A71BCu: goto label_1a71bc;
            case 0x1A71C0u: goto label_1a71c0;
            case 0x1A71C4u: goto label_1a71c4;
            case 0x1A71C8u: goto label_1a71c8;
            case 0x1A71CCu: goto label_1a71cc;
            case 0x1A71D0u: goto label_1a71d0;
            case 0x1A71D4u: goto label_1a71d4;
            case 0x1A71D8u: goto label_1a71d8;
            case 0x1A71DCu: goto label_1a71dc;
            case 0x1A71E0u: goto label_1a71e0;
            case 0x1A71E4u: goto label_1a71e4;
            case 0x1A71E8u: goto label_1a71e8;
            case 0x1A71ECu: goto label_1a71ec;
            case 0x1A71F0u: goto label_1a71f0;
            case 0x1A71F4u: goto label_1a71f4;
            case 0x1A71F8u: goto label_1a71f8;
            case 0x1A71FCu: goto label_1a71fc;
            case 0x1A7200u: goto label_1a7200;
            case 0x1A7204u: goto label_1a7204;
            case 0x1A7208u: goto label_1a7208;
            case 0x1A720Cu: goto label_1a720c;
            case 0x1A7210u: goto label_1a7210;
            case 0x1A7214u: goto label_1a7214;
            case 0x1A7218u: goto label_1a7218;
            case 0x1A721Cu: goto label_1a721c;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7224u: goto label_1a7224;
            case 0x1A7228u: goto label_1a7228;
            case 0x1A722Cu: goto label_1a722c;
            case 0x1A7230u: goto label_1a7230;
            case 0x1A7234u: goto label_1a7234;
            case 0x1A7238u: goto label_1a7238;
            case 0x1A723Cu: goto label_1a723c;
            case 0x1A7240u: goto label_1a7240;
            case 0x1A7244u: goto label_1a7244;
            case 0x1A7248u: goto label_1a7248;
            case 0x1A724Cu: goto label_1a724c;
            case 0x1A7250u: goto label_1a7250;
            case 0x1A7254u: goto label_1a7254;
            case 0x1A7258u: goto label_1a7258;
            case 0x1A725Cu: goto label_1a725c;
            case 0x1A7260u: goto label_1a7260;
            case 0x1A7264u: goto label_1a7264;
            case 0x1A7268u: goto label_1a7268;
            case 0x1A726Cu: goto label_1a726c;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7274u: goto label_1a7274;
            case 0x1A7278u: goto label_1a7278;
            case 0x1A727Cu: goto label_1a727c;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            case 0x1A7288u: goto label_1a7288;
            case 0x1A728Cu: goto label_1a728c;
            case 0x1A7290u: goto label_1a7290;
            case 0x1A7294u: goto label_1a7294;
            case 0x1A7298u: goto label_1a7298;
            case 0x1A729Cu: goto label_1a729c;
            case 0x1A72A0u: goto label_1a72a0;
            case 0x1A72A4u: goto label_1a72a4;
            case 0x1A72A8u: goto label_1a72a8;
            case 0x1A72ACu: goto label_1a72ac;
            case 0x1A72B0u: goto label_1a72b0;
            case 0x1A72B4u: goto label_1a72b4;
            case 0x1A72B8u: goto label_1a72b8;
            case 0x1A72BCu: goto label_1a72bc;
            case 0x1A72C0u: goto label_1a72c0;
            case 0x1A72C4u: goto label_1a72c4;
            case 0x1A72C8u: goto label_1a72c8;
            case 0x1A72CCu: goto label_1a72cc;
            case 0x1A72D0u: goto label_1a72d0;
            case 0x1A72D4u: goto label_1a72d4;
            case 0x1A72D8u: goto label_1a72d8;
            case 0x1A72DCu: goto label_1a72dc;
            case 0x1A72E0u: goto label_1a72e0;
            case 0x1A72E4u: goto label_1a72e4;
            case 0x1A72E8u: goto label_1a72e8;
            case 0x1A72ECu: goto label_1a72ec;
            case 0x1A72F0u: goto label_1a72f0;
            case 0x1A72F4u: goto label_1a72f4;
            case 0x1A72F8u: goto label_1a72f8;
            case 0x1A72FCu: goto label_1a72fc;
            case 0x1A7300u: goto label_1a7300;
            case 0x1A7304u: goto label_1a7304;
            case 0x1A7308u: goto label_1a7308;
            case 0x1A730Cu: goto label_1a730c;
            case 0x1A7310u: goto label_1a7310;
            case 0x1A7314u: goto label_1a7314;
            case 0x1A7318u: goto label_1a7318;
            case 0x1A731Cu: goto label_1a731c;
            case 0x1A7320u: goto label_1a7320;
            case 0x1A7324u: goto label_1a7324;
            case 0x1A7328u: goto label_1a7328;
            case 0x1A732Cu: goto label_1a732c;
            case 0x1A7330u: goto label_1a7330;
            case 0x1A7334u: goto label_1a7334;
            case 0x1A7338u: goto label_1a7338;
            case 0x1A733Cu: goto label_1a733c;
            case 0x1A7340u: goto label_1a7340;
            case 0x1A7344u: goto label_1a7344;
            case 0x1A7348u: goto label_1a7348;
            case 0x1A734Cu: goto label_1a734c;
            case 0x1A7350u: goto label_1a7350;
            case 0x1A7354u: goto label_1a7354;
            case 0x1A7358u: goto label_1a7358;
            case 0x1A735Cu: goto label_1a735c;
            case 0x1A7360u: goto label_1a7360;
            case 0x1A7364u: goto label_1a7364;
            case 0x1A7368u: goto label_1a7368;
            case 0x1A736Cu: goto label_1a736c;
            case 0x1A7370u: goto label_1a7370;
            case 0x1A7374u: goto label_1a7374;
            case 0x1A7378u: goto label_1a7378;
            case 0x1A737Cu: goto label_1a737c;
            case 0x1A7380u: goto label_1a7380;
            case 0x1A7384u: goto label_1a7384;
            case 0x1A7388u: goto label_1a7388;
            case 0x1A738Cu: goto label_1a738c;
            case 0x1A7390u: goto label_1a7390;
            case 0x1A7394u: goto label_1a7394;
            case 0x1A7398u: goto label_1a7398;
            case 0x1A739Cu: goto label_1a739c;
            case 0x1A73A0u: goto label_1a73a0;
            case 0x1A73A4u: goto label_1a73a4;
            case 0x1A73A8u: goto label_1a73a8;
            case 0x1A73ACu: goto label_1a73ac;
            case 0x1A73B0u: goto label_1a73b0;
            case 0x1A73B4u: goto label_1a73b4;
            case 0x1A73B8u: goto label_1a73b8;
            case 0x1A73BCu: goto label_1a73bc;
            case 0x1A73C0u: goto label_1a73c0;
            case 0x1A73C4u: goto label_1a73c4;
            case 0x1A73C8u: goto label_1a73c8;
            case 0x1A73CCu: goto label_1a73cc;
            case 0x1A73D0u: goto label_1a73d0;
            case 0x1A73D4u: goto label_1a73d4;
            case 0x1A73D8u: goto label_1a73d8;
            case 0x1A73DCu: goto label_1a73dc;
            case 0x1A73E0u: goto label_1a73e0;
            case 0x1A73E4u: goto label_1a73e4;
            case 0x1A73E8u: goto label_1a73e8;
            case 0x1A73ECu: goto label_1a73ec;
            case 0x1A73F0u: goto label_1a73f0;
            case 0x1A73F4u: goto label_1a73f4;
            case 0x1A73F8u: goto label_1a73f8;
            case 0x1A73FCu: goto label_1a73fc;
            case 0x1A7400u: goto label_1a7400;
            case 0x1A7404u: goto label_1a7404;
            case 0x1A7408u: goto label_1a7408;
            case 0x1A740Cu: goto label_1a740c;
            case 0x1A7410u: goto label_1a7410;
            case 0x1A7414u: goto label_1a7414;
            case 0x1A7418u: goto label_1a7418;
            case 0x1A741Cu: goto label_1a741c;
            case 0x1A7420u: goto label_1a7420;
            case 0x1A7424u: goto label_1a7424;
            case 0x1A7428u: goto label_1a7428;
            case 0x1A742Cu: goto label_1a742c;
            case 0x1A7430u: goto label_1a7430;
            case 0x1A7434u: goto label_1a7434;
            case 0x1A7438u: goto label_1a7438;
            case 0x1A743Cu: goto label_1a743c;
            case 0x1A7440u: goto label_1a7440;
            case 0x1A7444u: goto label_1a7444;
            case 0x1A7448u: goto label_1a7448;
            case 0x1A744Cu: goto label_1a744c;
            case 0x1A7450u: goto label_1a7450;
            case 0x1A7454u: goto label_1a7454;
            case 0x1A7458u: goto label_1a7458;
            case 0x1A745Cu: goto label_1a745c;
            case 0x1A7460u: goto label_1a7460;
            case 0x1A7464u: goto label_1a7464;
            case 0x1A7468u: goto label_1a7468;
            case 0x1A746Cu: goto label_1a746c;
            case 0x1A7470u: goto label_1a7470;
            case 0x1A7474u: goto label_1a7474;
            case 0x1A7478u: goto label_1a7478;
            case 0x1A747Cu: goto label_1a747c;
            case 0x1A7480u: goto label_1a7480;
            case 0x1A7484u: goto label_1a7484;
            case 0x1A7488u: goto label_1a7488;
            case 0x1A748Cu: goto label_1a748c;
            case 0x1A7490u: goto label_1a7490;
            case 0x1A7494u: goto label_1a7494;
            case 0x1A7498u: goto label_1a7498;
            case 0x1A749Cu: goto label_1a749c;
            case 0x1A74A0u: goto label_1a74a0;
            case 0x1A74A4u: goto label_1a74a4;
            case 0x1A74A8u: goto label_1a74a8;
            case 0x1A74ACu: goto label_1a74ac;
            case 0x1A74B0u: goto label_1a74b0;
            case 0x1A74B4u: goto label_1a74b4;
            case 0x1A74B8u: goto label_1a74b8;
            case 0x1A74BCu: goto label_1a74bc;
            case 0x1A74C0u: goto label_1a74c0;
            case 0x1A74C4u: goto label_1a74c4;
            case 0x1A74C8u: goto label_1a74c8;
            case 0x1A74CCu: goto label_1a74cc;
            case 0x1A74D0u: goto label_1a74d0;
            case 0x1A74D4u: goto label_1a74d4;
            case 0x1A74D8u: goto label_1a74d8;
            case 0x1A74DCu: goto label_1a74dc;
            case 0x1A74E0u: goto label_1a74e0;
            case 0x1A74E4u: goto label_1a74e4;
            case 0x1A74E8u: goto label_1a74e8;
            case 0x1A74ECu: goto label_1a74ec;
            case 0x1A74F0u: goto label_1a74f0;
            case 0x1A74F4u: goto label_1a74f4;
            case 0x1A74F8u: goto label_1a74f8;
            case 0x1A74FCu: goto label_1a74fc;
            case 0x1A7500u: goto label_1a7500;
            case 0x1A7504u: goto label_1a7504;
            case 0x1A7508u: goto label_1a7508;
            case 0x1A750Cu: goto label_1a750c;
            case 0x1A7510u: goto label_1a7510;
            case 0x1A7514u: goto label_1a7514;
            case 0x1A7518u: goto label_1a7518;
            case 0x1A751Cu: goto label_1a751c;
            case 0x1A7520u: goto label_1a7520;
            case 0x1A7524u: goto label_1a7524;
            case 0x1A7528u: goto label_1a7528;
            case 0x1A752Cu: goto label_1a752c;
            case 0x1A7530u: goto label_1a7530;
            case 0x1A7534u: goto label_1a7534;
            case 0x1A7538u: goto label_1a7538;
            case 0x1A753Cu: goto label_1a753c;
            case 0x1A7540u: goto label_1a7540;
            case 0x1A7544u: goto label_1a7544;
            case 0x1A7548u: goto label_1a7548;
            case 0x1A754Cu: goto label_1a754c;
            case 0x1A7550u: goto label_1a7550;
            case 0x1A7554u: goto label_1a7554;
            case 0x1A7558u: goto label_1a7558;
            case 0x1A755Cu: goto label_1a755c;
            case 0x1A7560u: goto label_1a7560;
            case 0x1A7564u: goto label_1a7564;
            case 0x1A7568u: goto label_1a7568;
            case 0x1A756Cu: goto label_1a756c;
            case 0x1A7570u: goto label_1a7570;
            case 0x1A7574u: goto label_1a7574;
            case 0x1A7578u: goto label_1a7578;
            case 0x1A757Cu: goto label_1a757c;
            case 0x1A7580u: goto label_1a7580;
            case 0x1A7584u: goto label_1a7584;
            case 0x1A7588u: goto label_1a7588;
            case 0x1A758Cu: goto label_1a758c;
            case 0x1A7590u: goto label_1a7590;
            case 0x1A7594u: goto label_1a7594;
            case 0x1A7598u: goto label_1a7598;
            case 0x1A759Cu: goto label_1a759c;
            case 0x1A75A0u: goto label_1a75a0;
            case 0x1A75A4u: goto label_1a75a4;
            case 0x1A75A8u: goto label_1a75a8;
            case 0x1A75ACu: goto label_1a75ac;
            case 0x1A75B0u: goto label_1a75b0;
            case 0x1A75B4u: goto label_1a75b4;
            case 0x1A75B8u: goto label_1a75b8;
            case 0x1A75BCu: goto label_1a75bc;
            case 0x1A75C0u: goto label_1a75c0;
            case 0x1A75C4u: goto label_1a75c4;
            case 0x1A75C8u: goto label_1a75c8;
            case 0x1A75CCu: goto label_1a75cc;
            case 0x1A75D0u: goto label_1a75d0;
            case 0x1A75D4u: goto label_1a75d4;
            case 0x1A75D8u: goto label_1a75d8;
            case 0x1A75DCu: goto label_1a75dc;
            case 0x1A75E0u: goto label_1a75e0;
            case 0x1A75E4u: goto label_1a75e4;
            case 0x1A75E8u: goto label_1a75e8;
            case 0x1A75ECu: goto label_1a75ec;
            case 0x1A75F0u: goto label_1a75f0;
            case 0x1A75F4u: goto label_1a75f4;
            case 0x1A75F8u: goto label_1a75f8;
            case 0x1A75FCu: goto label_1a75fc;
            case 0x1A7600u: goto label_1a7600;
            case 0x1A7604u: goto label_1a7604;
            case 0x1A7608u: goto label_1a7608;
            case 0x1A760Cu: goto label_1a760c;
            case 0x1A7610u: goto label_1a7610;
            case 0x1A7614u: goto label_1a7614;
            case 0x1A7618u: goto label_1a7618;
            case 0x1A761Cu: goto label_1a761c;
            case 0x1A7620u: goto label_1a7620;
            case 0x1A7624u: goto label_1a7624;
            case 0x1A7628u: goto label_1a7628;
            case 0x1A762Cu: goto label_1a762c;
            case 0x1A7630u: goto label_1a7630;
            case 0x1A7634u: goto label_1a7634;
            case 0x1A7638u: goto label_1a7638;
            case 0x1A763Cu: goto label_1a763c;
            case 0x1A7640u: goto label_1a7640;
            case 0x1A7644u: goto label_1a7644;
            case 0x1A7648u: goto label_1a7648;
            case 0x1A764Cu: goto label_1a764c;
            case 0x1A7650u: goto label_1a7650;
            case 0x1A7654u: goto label_1a7654;
            case 0x1A7658u: goto label_1a7658;
            case 0x1A765Cu: goto label_1a765c;
            case 0x1A7660u: goto label_1a7660;
            case 0x1A7664u: goto label_1a7664;
            case 0x1A7668u: goto label_1a7668;
            case 0x1A766Cu: goto label_1a766c;
            case 0x1A7670u: goto label_1a7670;
            case 0x1A7674u: goto label_1a7674;
            case 0x1A7678u: goto label_1a7678;
            case 0x1A767Cu: goto label_1a767c;
            case 0x1A7680u: goto label_1a7680;
            case 0x1A7684u: goto label_1a7684;
            case 0x1A7688u: goto label_1a7688;
            case 0x1A768Cu: goto label_1a768c;
            case 0x1A7690u: goto label_1a7690;
            case 0x1A7694u: goto label_1a7694;
            case 0x1A7698u: goto label_1a7698;
            case 0x1A769Cu: goto label_1a769c;
            case 0x1A76A0u: goto label_1a76a0;
            case 0x1A76A4u: goto label_1a76a4;
            case 0x1A76A8u: goto label_1a76a8;
            case 0x1A76ACu: goto label_1a76ac;
            case 0x1A76B0u: goto label_1a76b0;
            case 0x1A76B4u: goto label_1a76b4;
            case 0x1A76B8u: goto label_1a76b8;
            case 0x1A76BCu: goto label_1a76bc;
            case 0x1A76C0u: goto label_1a76c0;
            case 0x1A76C4u: goto label_1a76c4;
            case 0x1A76C8u: goto label_1a76c8;
            case 0x1A76CCu: goto label_1a76cc;
            case 0x1A76D0u: goto label_1a76d0;
            case 0x1A76D4u: goto label_1a76d4;
            case 0x1A76D8u: goto label_1a76d8;
            case 0x1A76DCu: goto label_1a76dc;
            case 0x1A76E0u: goto label_1a76e0;
            case 0x1A76E4u: goto label_1a76e4;
            case 0x1A76E8u: goto label_1a76e8;
            case 0x1A76ECu: goto label_1a76ec;
            case 0x1A76F0u: goto label_1a76f0;
            case 0x1A76F4u: goto label_1a76f4;
            case 0x1A76F8u: goto label_1a76f8;
            case 0x1A76FCu: goto label_1a76fc;
            case 0x1A7700u: goto label_1a7700;
            case 0x1A7704u: goto label_1a7704;
            case 0x1A7708u: goto label_1a7708;
            case 0x1A770Cu: goto label_1a770c;
            case 0x1A7710u: goto label_1a7710;
            case 0x1A7714u: goto label_1a7714;
            case 0x1A7718u: goto label_1a7718;
            case 0x1A771Cu: goto label_1a771c;
            case 0x1A7720u: goto label_1a7720;
            case 0x1A7724u: goto label_1a7724;
            case 0x1A7728u: goto label_1a7728;
            case 0x1A772Cu: goto label_1a772c;
            case 0x1A7730u: goto label_1a7730;
            case 0x1A7734u: goto label_1a7734;
            case 0x1A7738u: goto label_1a7738;
            case 0x1A773Cu: goto label_1a773c;
            case 0x1A7740u: goto label_1a7740;
            case 0x1A7744u: goto label_1a7744;
            case 0x1A7748u: goto label_1a7748;
            case 0x1A774Cu: goto label_1a774c;
            case 0x1A7750u: goto label_1a7750;
            case 0x1A7754u: goto label_1a7754;
            case 0x1A7758u: goto label_1a7758;
            case 0x1A775Cu: goto label_1a775c;
            case 0x1A7760u: goto label_1a7760;
            case 0x1A7764u: goto label_1a7764;
            case 0x1A7768u: goto label_1a7768;
            case 0x1A776Cu: goto label_1a776c;
            case 0x1A7770u: goto label_1a7770;
            case 0x1A7774u: goto label_1a7774;
            case 0x1A7778u: goto label_1a7778;
            case 0x1A777Cu: goto label_1a777c;
            case 0x1A7780u: goto label_1a7780;
            case 0x1A7784u: goto label_1a7784;
            case 0x1A7788u: goto label_1a7788;
            case 0x1A778Cu: goto label_1a778c;
            case 0x1A7790u: goto label_1a7790;
            case 0x1A7794u: goto label_1a7794;
            case 0x1A7798u: goto label_1a7798;
            case 0x1A779Cu: goto label_1a779c;
            case 0x1A77A0u: goto label_1a77a0;
            case 0x1A77A4u: goto label_1a77a4;
            case 0x1A77A8u: goto label_1a77a8;
            case 0x1A77ACu: goto label_1a77ac;
            case 0x1A77B0u: goto label_1a77b0;
            case 0x1A77B4u: goto label_1a77b4;
            case 0x1A77B8u: goto label_1a77b8;
            case 0x1A77BCu: goto label_1a77bc;
            case 0x1A77C0u: goto label_1a77c0;
            case 0x1A77C4u: goto label_1a77c4;
            case 0x1A77C8u: goto label_1a77c8;
            case 0x1A77CCu: goto label_1a77cc;
            case 0x1A77D0u: goto label_1a77d0;
            case 0x1A77D4u: goto label_1a77d4;
            case 0x1A77D8u: goto label_1a77d8;
            case 0x1A77DCu: goto label_1a77dc;
            case 0x1A77E0u: goto label_1a77e0;
            case 0x1A77E4u: goto label_1a77e4;
            case 0x1A77E8u: goto label_1a77e8;
            case 0x1A77ECu: goto label_1a77ec;
            case 0x1A77F0u: goto label_1a77f0;
            case 0x1A77F4u: goto label_1a77f4;
            case 0x1A77F8u: goto label_1a77f8;
            case 0x1A77FCu: goto label_1a77fc;
            case 0x1A7800u: goto label_1a7800;
            case 0x1A7804u: goto label_1a7804;
            case 0x1A7808u: goto label_1a7808;
            case 0x1A780Cu: goto label_1a780c;
            case 0x1A7810u: goto label_1a7810;
            case 0x1A7814u: goto label_1a7814;
            case 0x1A7818u: goto label_1a7818;
            case 0x1A781Cu: goto label_1a781c;
            case 0x1A7820u: goto label_1a7820;
            case 0x1A7824u: goto label_1a7824;
            case 0x1A7828u: goto label_1a7828;
            case 0x1A782Cu: goto label_1a782c;
            case 0x1A7830u: goto label_1a7830;
            case 0x1A7834u: goto label_1a7834;
            case 0x1A7838u: goto label_1a7838;
            case 0x1A783Cu: goto label_1a783c;
            case 0x1A7840u: goto label_1a7840;
            case 0x1A7844u: goto label_1a7844;
            case 0x1A7848u: goto label_1a7848;
            case 0x1A784Cu: goto label_1a784c;
            case 0x1A7850u: goto label_1a7850;
            case 0x1A7854u: goto label_1a7854;
            case 0x1A7858u: goto label_1a7858;
            case 0x1A785Cu: goto label_1a785c;
            case 0x1A7860u: goto label_1a7860;
            case 0x1A7864u: goto label_1a7864;
            case 0x1A7868u: goto label_1a7868;
            case 0x1A786Cu: goto label_1a786c;
            case 0x1A7870u: goto label_1a7870;
            case 0x1A7874u: goto label_1a7874;
            case 0x1A7878u: goto label_1a7878;
            case 0x1A787Cu: goto label_1a787c;
            case 0x1A7880u: goto label_1a7880;
            case 0x1A7884u: goto label_1a7884;
            case 0x1A7888u: goto label_1a7888;
            case 0x1A788Cu: goto label_1a788c;
            case 0x1A7890u: goto label_1a7890;
            case 0x1A7894u: goto label_1a7894;
            case 0x1A7898u: goto label_1a7898;
            case 0x1A789Cu: goto label_1a789c;
            case 0x1A78A0u: goto label_1a78a0;
            case 0x1A78A4u: goto label_1a78a4;
            case 0x1A78A8u: goto label_1a78a8;
            case 0x1A78ACu: goto label_1a78ac;
            case 0x1A78B0u: goto label_1a78b0;
            case 0x1A78B4u: goto label_1a78b4;
            case 0x1A78B8u: goto label_1a78b8;
            case 0x1A78BCu: goto label_1a78bc;
            case 0x1A78C0u: goto label_1a78c0;
            case 0x1A78C4u: goto label_1a78c4;
            case 0x1A78C8u: goto label_1a78c8;
            case 0x1A78CCu: goto label_1a78cc;
            case 0x1A78D0u: goto label_1a78d0;
            case 0x1A78D4u: goto label_1a78d4;
            case 0x1A78D8u: goto label_1a78d8;
            case 0x1A78DCu: goto label_1a78dc;
            case 0x1A78E0u: goto label_1a78e0;
            case 0x1A78E4u: goto label_1a78e4;
            case 0x1A78E8u: goto label_1a78e8;
            case 0x1A78ECu: goto label_1a78ec;
            case 0x1A78F0u: goto label_1a78f0;
            case 0x1A78F4u: goto label_1a78f4;
            case 0x1A78F8u: goto label_1a78f8;
            case 0x1A78FCu: goto label_1a78fc;
            case 0x1A7900u: goto label_1a7900;
            case 0x1A7904u: goto label_1a7904;
            case 0x1A7908u: goto label_1a7908;
            case 0x1A790Cu: goto label_1a790c;
            case 0x1A7910u: goto label_1a7910;
            case 0x1A7914u: goto label_1a7914;
            case 0x1A7918u: goto label_1a7918;
            case 0x1A791Cu: goto label_1a791c;
            case 0x1A7920u: goto label_1a7920;
            case 0x1A7924u: goto label_1a7924;
            case 0x1A7928u: goto label_1a7928;
            case 0x1A792Cu: goto label_1a792c;
            case 0x1A7930u: goto label_1a7930;
            case 0x1A7934u: goto label_1a7934;
            case 0x1A7938u: goto label_1a7938;
            case 0x1A793Cu: goto label_1a793c;
            case 0x1A7940u: goto label_1a7940;
            case 0x1A7944u: goto label_1a7944;
            case 0x1A7948u: goto label_1a7948;
            case 0x1A794Cu: goto label_1a794c;
            case 0x1A7950u: goto label_1a7950;
            case 0x1A7954u: goto label_1a7954;
            case 0x1A7958u: goto label_1a7958;
            case 0x1A795Cu: goto label_1a795c;
            case 0x1A7960u: goto label_1a7960;
            case 0x1A7964u: goto label_1a7964;
            case 0x1A7968u: goto label_1a7968;
            case 0x1A796Cu: goto label_1a796c;
            case 0x1A7970u: goto label_1a7970;
            case 0x1A7974u: goto label_1a7974;
            case 0x1A7978u: goto label_1a7978;
            case 0x1A797Cu: goto label_1a797c;
            case 0x1A7980u: goto label_1a7980;
            case 0x1A7984u: goto label_1a7984;
            case 0x1A7988u: goto label_1a7988;
            case 0x1A798Cu: goto label_1a798c;
            case 0x1A7990u: goto label_1a7990;
            case 0x1A7994u: goto label_1a7994;
            case 0x1A7998u: goto label_1a7998;
            case 0x1A799Cu: goto label_1a799c;
            case 0x1A79A0u: goto label_1a79a0;
            case 0x1A79A4u: goto label_1a79a4;
            case 0x1A79A8u: goto label_1a79a8;
            case 0x1A79ACu: goto label_1a79ac;
            case 0x1A79B0u: goto label_1a79b0;
            case 0x1A79B4u: goto label_1a79b4;
            case 0x1A79B8u: goto label_1a79b8;
            case 0x1A79BCu: goto label_1a79bc;
            case 0x1A79C0u: goto label_1a79c0;
            case 0x1A79C4u: goto label_1a79c4;
            case 0x1A79C8u: goto label_1a79c8;
            case 0x1A79CCu: goto label_1a79cc;
            case 0x1A79D0u: goto label_1a79d0;
            case 0x1A79D4u: goto label_1a79d4;
            case 0x1A79D8u: goto label_1a79d8;
            case 0x1A79DCu: goto label_1a79dc;
            case 0x1A79E0u: goto label_1a79e0;
            case 0x1A79E4u: goto label_1a79e4;
            case 0x1A79E8u: goto label_1a79e8;
            case 0x1A79ECu: goto label_1a79ec;
            case 0x1A79F0u: goto label_1a79f0;
            case 0x1A79F4u: goto label_1a79f4;
            case 0x1A79F8u: goto label_1a79f8;
            case 0x1A79FCu: goto label_1a79fc;
            case 0x1A7A00u: goto label_1a7a00;
            case 0x1A7A04u: goto label_1a7a04;
            case 0x1A7A08u: goto label_1a7a08;
            case 0x1A7A0Cu: goto label_1a7a0c;
            case 0x1A7A10u: goto label_1a7a10;
            case 0x1A7A14u: goto label_1a7a14;
            case 0x1A7A18u: goto label_1a7a18;
            case 0x1A7A1Cu: goto label_1a7a1c;
            case 0x1A7A20u: goto label_1a7a20;
            case 0x1A7A24u: goto label_1a7a24;
            case 0x1A7A28u: goto label_1a7a28;
            case 0x1A7A2Cu: goto label_1a7a2c;
            case 0x1A7A30u: goto label_1a7a30;
            case 0x1A7A34u: goto label_1a7a34;
            case 0x1A7A38u: goto label_1a7a38;
            case 0x1A7A3Cu: goto label_1a7a3c;
            case 0x1A7A40u: goto label_1a7a40;
            case 0x1A7A44u: goto label_1a7a44;
            case 0x1A7A48u: goto label_1a7a48;
            case 0x1A7A4Cu: goto label_1a7a4c;
            case 0x1A7A50u: goto label_1a7a50;
            case 0x1A7A54u: goto label_1a7a54;
            case 0x1A7A58u: goto label_1a7a58;
            case 0x1A7A5Cu: goto label_1a7a5c;
            case 0x1A7A60u: goto label_1a7a60;
            case 0x1A7A64u: goto label_1a7a64;
            case 0x1A7A68u: goto label_1a7a68;
            case 0x1A7A6Cu: goto label_1a7a6c;
            case 0x1A7A70u: goto label_1a7a70;
            case 0x1A7A74u: goto label_1a7a74;
            case 0x1A7A78u: goto label_1a7a78;
            case 0x1A7A7Cu: goto label_1a7a7c;
            case 0x1A7A80u: goto label_1a7a80;
            case 0x1A7A84u: goto label_1a7a84;
            case 0x1A7A88u: goto label_1a7a88;
            case 0x1A7A8Cu: goto label_1a7a8c;
            case 0x1A7A90u: goto label_1a7a90;
            case 0x1A7A94u: goto label_1a7a94;
            case 0x1A7A98u: goto label_1a7a98;
            case 0x1A7A9Cu: goto label_1a7a9c;
            case 0x1A7AA0u: goto label_1a7aa0;
            case 0x1A7AA4u: goto label_1a7aa4;
            case 0x1A7AA8u: goto label_1a7aa8;
            case 0x1A7AACu: goto label_1a7aac;
            case 0x1A7AB0u: goto label_1a7ab0;
            case 0x1A7AB4u: goto label_1a7ab4;
            case 0x1A7AB8u: goto label_1a7ab8;
            case 0x1A7ABCu: goto label_1a7abc;
            case 0x1A7AC0u: goto label_1a7ac0;
            case 0x1A7AC4u: goto label_1a7ac4;
            case 0x1A7AC8u: goto label_1a7ac8;
            case 0x1A7ACCu: goto label_1a7acc;
            case 0x1A7AD0u: goto label_1a7ad0;
            case 0x1A7AD4u: goto label_1a7ad4;
            case 0x1A7AD8u: goto label_1a7ad8;
            case 0x1A7ADCu: goto label_1a7adc;
            case 0x1A7AE0u: goto label_1a7ae0;
            case 0x1A7AE4u: goto label_1a7ae4;
            case 0x1A7AE8u: goto label_1a7ae8;
            case 0x1A7AECu: goto label_1a7aec;
            case 0x1A7AF0u: goto label_1a7af0;
            case 0x1A7AF4u: goto label_1a7af4;
            case 0x1A7AF8u: goto label_1a7af8;
            case 0x1A7AFCu: goto label_1a7afc;
            case 0x1A7B00u: goto label_1a7b00;
            case 0x1A7B04u: goto label_1a7b04;
            case 0x1A7B08u: goto label_1a7b08;
            case 0x1A7B0Cu: goto label_1a7b0c;
            case 0x1A7B10u: goto label_1a7b10;
            case 0x1A7B14u: goto label_1a7b14;
            case 0x1A7B18u: goto label_1a7b18;
            case 0x1A7B1Cu: goto label_1a7b1c;
            case 0x1A7B20u: goto label_1a7b20;
            case 0x1A7B24u: goto label_1a7b24;
            case 0x1A7B28u: goto label_1a7b28;
            case 0x1A7B2Cu: goto label_1a7b2c;
            case 0x1A7B30u: goto label_1a7b30;
            case 0x1A7B34u: goto label_1a7b34;
            case 0x1A7B38u: goto label_1a7b38;
            case 0x1A7B3Cu: goto label_1a7b3c;
            case 0x1A7B40u: goto label_1a7b40;
            case 0x1A7B44u: goto label_1a7b44;
            case 0x1A7B48u: goto label_1a7b48;
            case 0x1A7B4Cu: goto label_1a7b4c;
            case 0x1A7B50u: goto label_1a7b50;
            case 0x1A7B54u: goto label_1a7b54;
            case 0x1A7B58u: goto label_1a7b58;
            case 0x1A7B5Cu: goto label_1a7b5c;
            case 0x1A7B60u: goto label_1a7b60;
            case 0x1A7B64u: goto label_1a7b64;
            case 0x1A7B68u: goto label_1a7b68;
            case 0x1A7B6Cu: goto label_1a7b6c;
            case 0x1A7B70u: goto label_1a7b70;
            case 0x1A7B74u: goto label_1a7b74;
            case 0x1A7B78u: goto label_1a7b78;
            case 0x1A7B7Cu: goto label_1a7b7c;
            case 0x1A7B80u: goto label_1a7b80;
            case 0x1A7B84u: goto label_1a7b84;
            case 0x1A7B88u: goto label_1a7b88;
            case 0x1A7B8Cu: goto label_1a7b8c;
            case 0x1A7B90u: goto label_1a7b90;
            case 0x1A7B94u: goto label_1a7b94;
            case 0x1A7B98u: goto label_1a7b98;
            case 0x1A7B9Cu: goto label_1a7b9c;
            case 0x1A7BA0u: goto label_1a7ba0;
            case 0x1A7BA4u: goto label_1a7ba4;
            case 0x1A7BA8u: goto label_1a7ba8;
            case 0x1A7BACu: goto label_1a7bac;
            case 0x1A7BB0u: goto label_1a7bb0;
            case 0x1A7BB4u: goto label_1a7bb4;
            case 0x1A7BB8u: goto label_1a7bb8;
            case 0x1A7BBCu: goto label_1a7bbc;
            case 0x1A7BC0u: goto label_1a7bc0;
            case 0x1A7BC4u: goto label_1a7bc4;
            case 0x1A7BC8u: goto label_1a7bc8;
            case 0x1A7BCCu: goto label_1a7bcc;
            case 0x1A7BD0u: goto label_1a7bd0;
            case 0x1A7BD4u: goto label_1a7bd4;
            case 0x1A7BD8u: goto label_1a7bd8;
            case 0x1A7BDCu: goto label_1a7bdc;
            case 0x1A7BE0u: goto label_1a7be0;
            case 0x1A7BE4u: goto label_1a7be4;
            case 0x1A7BE8u: goto label_1a7be8;
            case 0x1A7BECu: goto label_1a7bec;
            case 0x1A7BF0u: goto label_1a7bf0;
            case 0x1A7BF4u: goto label_1a7bf4;
            case 0x1A7BF8u: goto label_1a7bf8;
            case 0x1A7BFCu: goto label_1a7bfc;
            case 0x1A7C00u: goto label_1a7c00;
            case 0x1A7C04u: goto label_1a7c04;
            case 0x1A7C08u: goto label_1a7c08;
            case 0x1A7C0Cu: goto label_1a7c0c;
            case 0x1A7C10u: goto label_1a7c10;
            case 0x1A7C14u: goto label_1a7c14;
            case 0x1A7C18u: goto label_1a7c18;
            case 0x1A7C1Cu: goto label_1a7c1c;
            case 0x1A7C20u: goto label_1a7c20;
            case 0x1A7C24u: goto label_1a7c24;
            case 0x1A7C28u: goto label_1a7c28;
            case 0x1A7C2Cu: goto label_1a7c2c;
            case 0x1A7C30u: goto label_1a7c30;
            case 0x1A7C34u: goto label_1a7c34;
            case 0x1A7C38u: goto label_1a7c38;
            case 0x1A7C3Cu: goto label_1a7c3c;
            case 0x1A7C40u: goto label_1a7c40;
            case 0x1A7C44u: goto label_1a7c44;
            case 0x1A7C48u: goto label_1a7c48;
            case 0x1A7C4Cu: goto label_1a7c4c;
            case 0x1A7C50u: goto label_1a7c50;
            case 0x1A7C54u: goto label_1a7c54;
            case 0x1A7C58u: goto label_1a7c58;
            case 0x1A7C5Cu: goto label_1a7c5c;
            case 0x1A7C60u: goto label_1a7c60;
            case 0x1A7C64u: goto label_1a7c64;
            case 0x1A7C68u: goto label_1a7c68;
            case 0x1A7C6Cu: goto label_1a7c6c;
            case 0x1A7C70u: goto label_1a7c70;
            case 0x1A7C74u: goto label_1a7c74;
            case 0x1A7C78u: goto label_1a7c78;
            case 0x1A7C7Cu: goto label_1a7c7c;
            case 0x1A7C80u: goto label_1a7c80;
            case 0x1A7C84u: goto label_1a7c84;
            case 0x1A7C88u: goto label_1a7c88;
            case 0x1A7C8Cu: goto label_1a7c8c;
            case 0x1A7C90u: goto label_1a7c90;
            case 0x1A7C94u: goto label_1a7c94;
            case 0x1A7C98u: goto label_1a7c98;
            case 0x1A7C9Cu: goto label_1a7c9c;
            case 0x1A7CA0u: goto label_1a7ca0;
            case 0x1A7CA4u: goto label_1a7ca4;
            case 0x1A7CA8u: goto label_1a7ca8;
            case 0x1A7CACu: goto label_1a7cac;
            case 0x1A7CB0u: goto label_1a7cb0;
            case 0x1A7CB4u: goto label_1a7cb4;
            case 0x1A7CB8u: goto label_1a7cb8;
            case 0x1A7CBCu: goto label_1a7cbc;
            case 0x1A7CC0u: goto label_1a7cc0;
            case 0x1A7CC4u: goto label_1a7cc4;
            case 0x1A7CC8u: goto label_1a7cc8;
            case 0x1A7CCCu: goto label_1a7ccc;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CD4u: goto label_1a7cd4;
            case 0x1A7CD8u: goto label_1a7cd8;
            case 0x1A7CDCu: goto label_1a7cdc;
            case 0x1A7CE0u: goto label_1a7ce0;
            case 0x1A7CE4u: goto label_1a7ce4;
            case 0x1A7CE8u: goto label_1a7ce8;
            case 0x1A7CECu: goto label_1a7cec;
            case 0x1A7CF0u: goto label_1a7cf0;
            case 0x1A7CF4u: goto label_1a7cf4;
            case 0x1A7CF8u: goto label_1a7cf8;
            case 0x1A7CFCu: goto label_1a7cfc;
            case 0x1A7D00u: goto label_1a7d00;
            case 0x1A7D04u: goto label_1a7d04;
            case 0x1A7D08u: goto label_1a7d08;
            case 0x1A7D0Cu: goto label_1a7d0c;
            case 0x1A7D10u: goto label_1a7d10;
            case 0x1A7D14u: goto label_1a7d14;
            case 0x1A7D18u: goto label_1a7d18;
            case 0x1A7D1Cu: goto label_1a7d1c;
            case 0x1A7D20u: goto label_1a7d20;
            case 0x1A7D24u: goto label_1a7d24;
            case 0x1A7D28u: goto label_1a7d28;
            case 0x1A7D2Cu: goto label_1a7d2c;
            case 0x1A7D30u: goto label_1a7d30;
            case 0x1A7D34u: goto label_1a7d34;
            case 0x1A7D38u: goto label_1a7d38;
            case 0x1A7D3Cu: goto label_1a7d3c;
            case 0x1A7D40u: goto label_1a7d40;
            case 0x1A7D44u: goto label_1a7d44;
            case 0x1A7D48u: goto label_1a7d48;
            case 0x1A7D4Cu: goto label_1a7d4c;
            case 0x1A7D50u: goto label_1a7d50;
            case 0x1A7D54u: goto label_1a7d54;
            case 0x1A7D58u: goto label_1a7d58;
            case 0x1A7D5Cu: goto label_1a7d5c;
            case 0x1A7D60u: goto label_1a7d60;
            case 0x1A7D64u: goto label_1a7d64;
            case 0x1A7D68u: goto label_1a7d68;
            case 0x1A7D6Cu: goto label_1a7d6c;
            case 0x1A7D70u: goto label_1a7d70;
            case 0x1A7D74u: goto label_1a7d74;
            case 0x1A7D78u: goto label_1a7d78;
            case 0x1A7D7Cu: goto label_1a7d7c;
            case 0x1A7D80u: goto label_1a7d80;
            case 0x1A7D84u: goto label_1a7d84;
            case 0x1A7D88u: goto label_1a7d88;
            case 0x1A7D8Cu: goto label_1a7d8c;
            case 0x1A7D90u: goto label_1a7d90;
            case 0x1A7D94u: goto label_1a7d94;
            case 0x1A7D98u: goto label_1a7d98;
            case 0x1A7D9Cu: goto label_1a7d9c;
            case 0x1A7DA0u: goto label_1a7da0;
            case 0x1A7DA4u: goto label_1a7da4;
            case 0x1A7DA8u: goto label_1a7da8;
            case 0x1A7DACu: goto label_1a7dac;
            case 0x1A7DB0u: goto label_1a7db0;
            case 0x1A7DB4u: goto label_1a7db4;
            case 0x1A7DB8u: goto label_1a7db8;
            case 0x1A7DBCu: goto label_1a7dbc;
            case 0x1A7DC0u: goto label_1a7dc0;
            case 0x1A7DC4u: goto label_1a7dc4;
            case 0x1A7DC8u: goto label_1a7dc8;
            case 0x1A7DCCu: goto label_1a7dcc;
            case 0x1A7DD0u: goto label_1a7dd0;
            case 0x1A7DD4u: goto label_1a7dd4;
            case 0x1A7DD8u: goto label_1a7dd8;
            case 0x1A7DDCu: goto label_1a7ddc;
            case 0x1A7DE0u: goto label_1a7de0;
            case 0x1A7DE4u: goto label_1a7de4;
            case 0x1A7DE8u: goto label_1a7de8;
            case 0x1A7DECu: goto label_1a7dec;
            case 0x1A7DF0u: goto label_1a7df0;
            case 0x1A7DF4u: goto label_1a7df4;
            case 0x1A7DF8u: goto label_1a7df8;
            case 0x1A7DFCu: goto label_1a7dfc;
            case 0x1A7E00u: goto label_1a7e00;
            case 0x1A7E04u: goto label_1a7e04;
            case 0x1A7E08u: goto label_1a7e08;
            case 0x1A7E0Cu: goto label_1a7e0c;
            case 0x1A7E10u: goto label_1a7e10;
            case 0x1A7E14u: goto label_1a7e14;
            case 0x1A7E18u: goto label_1a7e18;
            case 0x1A7E1Cu: goto label_1a7e1c;
            case 0x1A7E20u: goto label_1a7e20;
            case 0x1A7E24u: goto label_1a7e24;
            case 0x1A7E28u: goto label_1a7e28;
            case 0x1A7E2Cu: goto label_1a7e2c;
            case 0x1A7E30u: goto label_1a7e30;
            case 0x1A7E34u: goto label_1a7e34;
            case 0x1A7E38u: goto label_1a7e38;
            case 0x1A7E3Cu: goto label_1a7e3c;
            case 0x1A7E40u: goto label_1a7e40;
            case 0x1A7E44u: goto label_1a7e44;
            case 0x1A7E48u: goto label_1a7e48;
            case 0x1A7E4Cu: goto label_1a7e4c;
            case 0x1A7E50u: goto label_1a7e50;
            case 0x1A7E54u: goto label_1a7e54;
            case 0x1A7E58u: goto label_1a7e58;
            case 0x1A7E5Cu: goto label_1a7e5c;
            case 0x1A7E60u: goto label_1a7e60;
            case 0x1A7E64u: goto label_1a7e64;
            case 0x1A7E68u: goto label_1a7e68;
            case 0x1A7E6Cu: goto label_1a7e6c;
            case 0x1A7E70u: goto label_1a7e70;
            case 0x1A7E74u: goto label_1a7e74;
            case 0x1A7E78u: goto label_1a7e78;
            case 0x1A7E7Cu: goto label_1a7e7c;
            case 0x1A7E80u: goto label_1a7e80;
            case 0x1A7E84u: goto label_1a7e84;
            case 0x1A7E88u: goto label_1a7e88;
            case 0x1A7E8Cu: goto label_1a7e8c;
            case 0x1A7E90u: goto label_1a7e90;
            case 0x1A7E94u: goto label_1a7e94;
            case 0x1A7E98u: goto label_1a7e98;
            case 0x1A7E9Cu: goto label_1a7e9c;
            case 0x1A7EA0u: goto label_1a7ea0;
            case 0x1A7EA4u: goto label_1a7ea4;
            case 0x1A7EA8u: goto label_1a7ea8;
            case 0x1A7EACu: goto label_1a7eac;
            case 0x1A7EB0u: goto label_1a7eb0;
            case 0x1A7EB4u: goto label_1a7eb4;
            case 0x1A7EB8u: goto label_1a7eb8;
            case 0x1A7EBCu: goto label_1a7ebc;
            case 0x1A7EC0u: goto label_1a7ec0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A795Cu; }
            if (ctx->pc != 0x1A795Cu) { return; }
        }
    }
    ctx->pc = 0x1A795Cu;
label_1a795c:
    // 0x1a795c: 0x10000154  b           . + 4 + (0x154 << 2)
label_1a7960:
    if (ctx->pc == 0x1A7960u) {
        ctx->pc = 0x1A7964u;
        goto label_1a7964;
    }
    ctx->pc = 0x1A795Cu;
    {
        const bool branch_taken_0x1a795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a795c) {
            ctx->pc = 0x1A7EB0u;
            goto label_1a7eb0;
        }
    }
    ctx->pc = 0x1A7964u;
label_1a7964:
    // 0x1a7964: 0x0  nop
    ctx->pc = 0x1a7964u;
    // NOP
label_1a7968:
    // 0x1a7968: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a7968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a796c:
    // 0x1a796c: 0x1c400148  bgtz        $v0, . + 4 + (0x148 << 2)
label_1a7970:
    if (ctx->pc == 0x1A7970u) {
        ctx->pc = 0x1A7974u;
        goto label_1a7974;
    }
    ctx->pc = 0x1A796Cu;
    {
        const bool branch_taken_0x1a796c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a796c) {
            ctx->pc = 0x1A7E90u;
            goto label_1a7e90;
        }
    }
    ctx->pc = 0x1A7974u;
label_1a7974:
    // 0x1a7974: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1a7974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1a7978:
    // 0x1a7978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a7978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a797c:
    // 0x1a797c: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x1a797cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_1a7980:
    // 0x1a7980: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1a7980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1a7984:
    // 0x1a7984: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1a7984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1a7988:
    // 0x1a7988: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1a7988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_1a798c:
    // 0x1a798c: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1a798cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1a7990:
    // 0x1a7990: 0xc0604b0  jal         func_1812C0
label_1a7994:
    if (ctx->pc == 0x1A7994u) {
        ctx->pc = 0x1A7994u;
            // 0x1a7994: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A7998u;
        goto label_1a7998;
    }
    ctx->pc = 0x1A7990u;
    SET_GPR_U32(ctx, 31, 0x1A7998u);
    ctx->pc = 0x1A7994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7990u;
            // 0x1a7994: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7998u; }
        if (ctx->pc != 0x1A7998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7998u; }
        if (ctx->pc != 0x1A7998u) { return; }
    }
    ctx->pc = 0x1A7998u;
label_1a7998:
    // 0x1a7998: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a7998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a799c:
    // 0x1a799c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1a799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1a79a0:
    // 0x1a79a0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1a79a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1a79a4:
    // 0x1a79a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a79a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a79a8:
    // 0x1a79a8: 0x0  nop
    ctx->pc = 0x1a79a8u;
    // NOP
label_1a79ac:
    // 0x1a79ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a79acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a79b0:
    // 0x1a79b0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a79b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a79b4:
    // 0x1a79b4: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a79b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a79b8:
    // 0x1a79b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a79b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a79bc:
    // 0x1a79bc: 0xc050ba4  jal         func_142E90
label_1a79c0:
    if (ctx->pc == 0x1A79C0u) {
        ctx->pc = 0x1A79C0u;
            // 0x1a79c0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1A79C4u;
        goto label_1a79c4;
    }
    ctx->pc = 0x1A79BCu;
    SET_GPR_U32(ctx, 31, 0x1A79C4u);
    ctx->pc = 0x1A79C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79BCu;
            // 0x1a79c0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79C4u; }
        if (ctx->pc != 0x1A79C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79C4u; }
        if (ctx->pc != 0x1A79C4u) { return; }
    }
    ctx->pc = 0x1A79C4u;
label_1a79c4:
    // 0x1a79c4: 0xc040d72  jal         func_1035C8
label_1a79c8:
    if (ctx->pc == 0x1A79C8u) {
        ctx->pc = 0x1A79C8u;
            // 0x1a79c8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1A79CCu;
        goto label_1a79cc;
    }
    ctx->pc = 0x1A79C4u;
    SET_GPR_U32(ctx, 31, 0x1A79CCu);
    ctx->pc = 0x1A79C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79C4u;
            // 0x1a79c8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79CCu; }
        if (ctx->pc != 0x1A79CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79CCu; }
        if (ctx->pc != 0x1A79CCu) { return; }
    }
    ctx->pc = 0x1A79CCu;
label_1a79cc:
    // 0x1a79cc: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1a79ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1a79d0:
    // 0x1a79d0: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1a79d0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1a79d4:
    // 0x1a79d4: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1a79d4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1a79d8:
    // 0x1a79d8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a79d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1a79dc:
    // 0x1a79dc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a79dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1a79e0:
    // 0x1a79e0: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1a79e0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1a79e4:
    // 0x1a79e4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a79e4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1a79e8:
    // 0x1a79e8: 0xc040880  jal         func_102200
label_1a79ec:
    if (ctx->pc == 0x1A79ECu) {
        ctx->pc = 0x1A79ECu;
            // 0x1a79ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A79F0u;
        goto label_1a79f0;
    }
    ctx->pc = 0x1A79E8u;
    SET_GPR_U32(ctx, 31, 0x1A79F0u);
    ctx->pc = 0x1A79ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79E8u;
            // 0x1a79ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79F0u; }
        if (ctx->pc != 0x1A79F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79F0u; }
        if (ctx->pc != 0x1A79F0u) { return; }
    }
    ctx->pc = 0x1A79F0u;
label_1a79f0:
    // 0x1a79f0: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1a79f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1a79f4:
    // 0x1a79f4: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1a79f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1a79f8:
    // 0x1a79f8: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1a79f8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1a79fc:
    // 0x1a79fc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a79fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1a7a00:
    // 0x1a7a00: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a7a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1a7a04:
    // 0x1a7a04: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1a7a04u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1a7a08:
    // 0x1a7a08: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a7a08u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1a7a0c:
    // 0x1a7a0c: 0xc040866  jal         func_102198
label_1a7a10:
    if (ctx->pc == 0x1A7A10u) {
        ctx->pc = 0x1A7A10u;
            // 0x1a7a10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A14u;
        goto label_1a7a14;
    }
    ctx->pc = 0x1A7A0Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A14u);
    ctx->pc = 0x1A7A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A0Cu;
            // 0x1a7a10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A14u; }
        if (ctx->pc != 0x1A7A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A14u; }
        if (ctx->pc != 0x1A7A14u) { return; }
    }
    ctx->pc = 0x1A7A14u;
label_1a7a14:
    // 0x1a7a14: 0xc040a74  jal         func_1029D0
label_1a7a18:
    if (ctx->pc == 0x1A7A18u) {
        ctx->pc = 0x1A7A18u;
            // 0x1a7a18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A1Cu;
        goto label_1a7a1c;
    }
    ctx->pc = 0x1A7A14u;
    SET_GPR_U32(ctx, 31, 0x1A7A1Cu);
    ctx->pc = 0x1A7A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A14u;
            // 0x1a7a18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A1Cu; }
        if (ctx->pc != 0x1A7A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A1Cu; }
        if (ctx->pc != 0x1A7A1Cu) { return; }
    }
    ctx->pc = 0x1A7A1Cu;
label_1a7a1c:
    // 0x1a7a1c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1a7a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7a20:
    // 0x1a7a20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a7a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a7a24:
    // 0x1a7a24: 0xc050ba4  jal         func_142E90
label_1a7a28:
    if (ctx->pc == 0x1A7A28u) {
        ctx->pc = 0x1A7A28u;
            // 0x1a7a28: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1A7A2Cu;
        goto label_1a7a2c;
    }
    ctx->pc = 0x1A7A24u;
    SET_GPR_U32(ctx, 31, 0x1A7A2Cu);
    ctx->pc = 0x1A7A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A24u;
            // 0x1a7a28: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A2Cu; }
        if (ctx->pc != 0x1A7A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A2Cu; }
        if (ctx->pc != 0x1A7A2Cu) { return; }
    }
    ctx->pc = 0x1A7A2Cu;
label_1a7a2c:
    // 0x1a7a2c: 0xc040d72  jal         func_1035C8
label_1a7a30:
    if (ctx->pc == 0x1A7A30u) {
        ctx->pc = 0x1A7A30u;
            // 0x1a7a30: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1A7A34u;
        goto label_1a7a34;
    }
    ctx->pc = 0x1A7A2Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A34u);
    ctx->pc = 0x1A7A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A2Cu;
            // 0x1a7a30: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A34u; }
        if (ctx->pc != 0x1A7A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A34u; }
        if (ctx->pc != 0x1A7A34u) { return; }
    }
    ctx->pc = 0x1A7A34u;
label_1a7a34:
    // 0x1a7a34: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1a7a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1a7a38:
    // 0x1a7a38: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1a7a38u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1a7a3c:
    // 0x1a7a3c: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1a7a3cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1a7a40:
    // 0x1a7a40: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a7a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1a7a44:
    // 0x1a7a44: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a7a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1a7a48:
    // 0x1a7a48: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1a7a48u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1a7a4c:
    // 0x1a7a4c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a7a4cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1a7a50:
    // 0x1a7a50: 0xc040880  jal         func_102200
label_1a7a54:
    if (ctx->pc == 0x1A7A54u) {
        ctx->pc = 0x1A7A54u;
            // 0x1a7a54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A58u;
        goto label_1a7a58;
    }
    ctx->pc = 0x1A7A50u;
    SET_GPR_U32(ctx, 31, 0x1A7A58u);
    ctx->pc = 0x1A7A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A50u;
            // 0x1a7a54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A58u; }
        if (ctx->pc != 0x1A7A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A58u; }
        if (ctx->pc != 0x1A7A58u) { return; }
    }
    ctx->pc = 0x1A7A58u;
label_1a7a58:
    // 0x1a7a58: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1a7a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1a7a5c:
    // 0x1a7a5c: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1a7a5cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1a7a60:
    // 0x1a7a60: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1a7a60u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1a7a64:
    // 0x1a7a64: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a7a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1a7a68:
    // 0x1a7a68: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a7a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1a7a6c:
    // 0x1a7a6c: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1a7a6cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1a7a70:
    // 0x1a7a70: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a7a70u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1a7a74:
    // 0x1a7a74: 0xc040866  jal         func_102198
label_1a7a78:
    if (ctx->pc == 0x1A7A78u) {
        ctx->pc = 0x1A7A78u;
            // 0x1a7a78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A7Cu;
        goto label_1a7a7c;
    }
    ctx->pc = 0x1A7A74u;
    SET_GPR_U32(ctx, 31, 0x1A7A7Cu);
    ctx->pc = 0x1A7A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A74u;
            // 0x1a7a78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A7Cu; }
        if (ctx->pc != 0x1A7A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A7Cu; }
        if (ctx->pc != 0x1A7A7Cu) { return; }
    }
    ctx->pc = 0x1A7A7Cu;
label_1a7a7c:
    // 0x1a7a7c: 0xc040a74  jal         func_1029D0
label_1a7a80:
    if (ctx->pc == 0x1A7A80u) {
        ctx->pc = 0x1A7A80u;
            // 0x1a7a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A84u;
        goto label_1a7a84;
    }
    ctx->pc = 0x1A7A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A84u);
    ctx->pc = 0x1A7A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A7Cu;
            // 0x1a7a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A84u; }
        if (ctx->pc != 0x1A7A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A84u; }
        if (ctx->pc != 0x1A7A84u) { return; }
    }
    ctx->pc = 0x1A7A84u;
label_1a7a84:
    // 0x1a7a84: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1a7a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7a88:
    // 0x1a7a88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a7a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a7a8c:
    // 0x1a7a8c: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1a7a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1a7a90:
    // 0x1a7a90: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1a7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1a7a94:
    // 0x1a7a94: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x1a7a94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_1a7a98:
    // 0x1a7a98: 0x14200105  bnez        $at, . + 4 + (0x105 << 2)
label_1a7a9c:
    if (ctx->pc == 0x1A7A9Cu) {
        ctx->pc = 0x1A7AA0u;
        goto label_1a7aa0;
    }
    ctx->pc = 0x1A7A98u;
    {
        const bool branch_taken_0x1a7a98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7a98) {
            ctx->pc = 0x1A7EB0u;
            goto label_1a7eb0;
        }
    }
    ctx->pc = 0x1A7AA0u;
label_1a7aa0:
    // 0x1a7aa0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a7aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7aa4:
    // 0x1a7aa4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1a7aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a7aa8:
    // 0x1a7aa8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a7aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7aac:
    // 0x1a7aac: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a7aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a7ab0:
    // 0x1a7ab0: 0xc05d080  jal         func_174200
label_1a7ab4:
    if (ctx->pc == 0x1A7AB4u) {
        ctx->pc = 0x1A7AB4u;
            // 0x1a7ab4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A7AB8u;
        goto label_1a7ab8;
    }
    ctx->pc = 0x1A7AB0u;
    SET_GPR_U32(ctx, 31, 0x1A7AB8u);
    ctx->pc = 0x1A7AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AB0u;
            // 0x1a7ab4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AB8u; }
        if (ctx->pc != 0x1A7AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AB8u; }
        if (ctx->pc != 0x1A7AB8u) { return; }
    }
    ctx->pc = 0x1A7AB8u;
label_1a7ab8:
    // 0x1a7ab8: 0xc050bb4  jal         func_142ED0
label_1a7abc:
    if (ctx->pc == 0x1A7ABCu) {
        ctx->pc = 0x1A7AC0u;
        goto label_1a7ac0;
    }
    ctx->pc = 0x1A7AB8u;
    SET_GPR_U32(ctx, 31, 0x1A7AC0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AC0u; }
        if (ctx->pc != 0x1A7AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AC0u; }
        if (ctx->pc != 0x1A7AC0u) { return; }
    }
    ctx->pc = 0x1A7AC0u;
label_1a7ac0:
    // 0x1a7ac0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a7ac0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a7ac4:
    // 0x1a7ac4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a7ac8:
    if (ctx->pc == 0x1A7AC8u) {
        ctx->pc = 0x1A7ACCu;
        goto label_1a7acc;
    }
    ctx->pc = 0x1A7AC4u;
    {
        const bool branch_taken_0x1a7ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7ac4) {
            ctx->pc = 0x1A7AE8u;
            goto label_1a7ae8;
        }
    }
    ctx->pc = 0x1A7ACCu;
label_1a7acc:
    // 0x1a7acc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a7accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7ad0:
    // 0x1a7ad0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1a7ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1a7ad4:
    // 0x1a7ad4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a7ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7ad8:
    // 0x1a7ad8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a7ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a7adc:
    // 0x1a7adc: 0xc05d080  jal         func_174200
label_1a7ae0:
    if (ctx->pc == 0x1A7AE0u) {
        ctx->pc = 0x1A7AE0u;
            // 0x1a7ae0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A7AE4u;
        goto label_1a7ae4;
    }
    ctx->pc = 0x1A7ADCu;
    SET_GPR_U32(ctx, 31, 0x1A7AE4u);
    ctx->pc = 0x1A7AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7ADCu;
            // 0x1a7ae0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AE4u; }
        if (ctx->pc != 0x1A7AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AE4u; }
        if (ctx->pc != 0x1A7AE4u) { return; }
    }
    ctx->pc = 0x1A7AE4u;
label_1a7ae4:
    // 0x1a7ae4: 0x0  nop
    ctx->pc = 0x1a7ae4u;
    // NOP
label_1a7ae8:
    // 0x1a7ae8: 0xc050bb4  jal         func_142ED0
label_1a7aec:
    if (ctx->pc == 0x1A7AECu) {
        ctx->pc = 0x1A7AF0u;
        goto label_1a7af0;
    }
    ctx->pc = 0x1A7AE8u;
    SET_GPR_U32(ctx, 31, 0x1A7AF0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AF0u; }
        if (ctx->pc != 0x1A7AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AF0u; }
        if (ctx->pc != 0x1A7AF0u) { return; }
    }
    ctx->pc = 0x1A7AF0u;
label_1a7af0:
    // 0x1a7af0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a7af0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a7af4:
    // 0x1a7af4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a7af8:
    if (ctx->pc == 0x1A7AF8u) {
        ctx->pc = 0x1A7AFCu;
        goto label_1a7afc;
    }
    ctx->pc = 0x1A7AF4u;
    {
        const bool branch_taken_0x1a7af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7af4) {
            ctx->pc = 0x1A7B18u;
            goto label_1a7b18;
        }
    }
    ctx->pc = 0x1A7AFCu;
label_1a7afc:
    // 0x1a7afc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a7afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7b00:
    // 0x1a7b00: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1a7b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a7b04:
    // 0x1a7b04: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a7b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7b08:
    // 0x1a7b08: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a7b08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a7b0c:
    // 0x1a7b0c: 0xc05d080  jal         func_174200
label_1a7b10:
    if (ctx->pc == 0x1A7B10u) {
        ctx->pc = 0x1A7B10u;
            // 0x1a7b10: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A7B14u;
        goto label_1a7b14;
    }
    ctx->pc = 0x1A7B0Cu;
    SET_GPR_U32(ctx, 31, 0x1A7B14u);
    ctx->pc = 0x1A7B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B0Cu;
            // 0x1a7b10: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B14u; }
        if (ctx->pc != 0x1A7B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B14u; }
        if (ctx->pc != 0x1A7B14u) { return; }
    }
    ctx->pc = 0x1A7B14u;
label_1a7b14:
    // 0x1a7b14: 0x0  nop
    ctx->pc = 0x1a7b14u;
    // NOP
label_1a7b18:
    // 0x1a7b18: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a7b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7b1c:
    // 0x1a7b1c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a7b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7b20:
    // 0x1a7b20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7b24:
    // 0x1a7b24: 0xc053740  jal         func_14DD00
label_1a7b28:
    if (ctx->pc == 0x1A7B28u) {
        ctx->pc = 0x1A7B28u;
            // 0x1a7b28: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1A7B2Cu;
        goto label_1a7b2c;
    }
    ctx->pc = 0x1A7B24u;
    SET_GPR_U32(ctx, 31, 0x1A7B2Cu);
    ctx->pc = 0x1A7B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B24u;
            // 0x1a7b28: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B2Cu; }
        if (ctx->pc != 0x1A7B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B2Cu; }
        if (ctx->pc != 0x1A7B2Cu) { return; }
    }
    ctx->pc = 0x1A7B2Cu;
label_1a7b2c:
    // 0x1a7b2c: 0xc050bb4  jal         func_142ED0
label_1a7b30:
    if (ctx->pc == 0x1A7B30u) {
        ctx->pc = 0x1A7B34u;
        goto label_1a7b34;
    }
    ctx->pc = 0x1A7B2Cu;
    SET_GPR_U32(ctx, 31, 0x1A7B34u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B34u; }
        if (ctx->pc != 0x1A7B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B34u; }
        if (ctx->pc != 0x1A7B34u) { return; }
    }
    ctx->pc = 0x1A7B34u;
label_1a7b34:
    // 0x1a7b34: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a7b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7b38:
    // 0x1a7b38: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7b3c:
    // 0x1a7b3c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a7b3cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7b40:
    // 0x1a7b40: 0x0  nop
    ctx->pc = 0x1a7b40u;
    // NOP
label_1a7b44:
    // 0x1a7b44: 0x0  nop
    ctx->pc = 0x1a7b44u;
    // NOP
label_1a7b48:
    // 0x1a7b48: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7b48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7b4c:
    // 0x1a7b4c: 0xc050bb4  jal         func_142ED0
label_1a7b50:
    if (ctx->pc == 0x1A7B50u) {
        ctx->pc = 0x1A7B50u;
            // 0x1a7b50: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7B54u;
        goto label_1a7b54;
    }
    ctx->pc = 0x1A7B4Cu;
    SET_GPR_U32(ctx, 31, 0x1A7B54u);
    ctx->pc = 0x1A7B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B4Cu;
            // 0x1a7b50: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B54u; }
        if (ctx->pc != 0x1A7B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B54u; }
        if (ctx->pc != 0x1A7B54u) { return; }
    }
    ctx->pc = 0x1A7B54u;
label_1a7b54:
    // 0x1a7b54: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7b58:
    // 0x1a7b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b5c:
    // 0x1a7b5c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a7b5cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7b60:
    // 0x1a7b60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7b64:
    // 0x1a7b64: 0x0  nop
    ctx->pc = 0x1a7b64u;
    // NOP
label_1a7b68:
    // 0x1a7b68: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7b68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a7b6c:
    // 0x1a7b6c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7b70:
    // 0x1a7b70: 0x1810  mfhi        $v1
    ctx->pc = 0x1a7b70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1a7b74:
    // 0x1a7b74: 0xc053740  jal         func_14DD00
label_1a7b78:
    if (ctx->pc == 0x1A7B78u) {
        ctx->pc = 0x1A7B78u;
            // 0x1a7b78: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1A7B7Cu;
        goto label_1a7b7c;
    }
    ctx->pc = 0x1A7B74u;
    SET_GPR_U32(ctx, 31, 0x1A7B7Cu);
    ctx->pc = 0x1A7B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B74u;
            // 0x1a7b78: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B7Cu; }
        if (ctx->pc != 0x1A7B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B7Cu; }
        if (ctx->pc != 0x1A7B7Cu) { return; }
    }
    ctx->pc = 0x1A7B7Cu;
label_1a7b7c:
    // 0x1a7b7c: 0xc050bb4  jal         func_142ED0
label_1a7b80:
    if (ctx->pc == 0x1A7B80u) {
        ctx->pc = 0x1A7B84u;
        goto label_1a7b84;
    }
    ctx->pc = 0x1A7B7Cu;
    SET_GPR_U32(ctx, 31, 0x1A7B84u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B84u; }
        if (ctx->pc != 0x1A7B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B84u; }
        if (ctx->pc != 0x1A7B84u) { return; }
    }
    ctx->pc = 0x1A7B84u;
label_1a7b84:
    // 0x1a7b84: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a7b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7b88:
    // 0x1a7b88: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a7b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7b8c:
    // 0x1a7b8c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a7b8cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7b90:
    // 0x1a7b90: 0x0  nop
    ctx->pc = 0x1a7b90u;
    // NOP
label_1a7b94:
    // 0x1a7b94: 0x0  nop
    ctx->pc = 0x1a7b94u;
    // NOP
label_1a7b98:
    // 0x1a7b98: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7b98u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7b9c:
    // 0x1a7b9c: 0xc050bb4  jal         func_142ED0
label_1a7ba0:
    if (ctx->pc == 0x1A7BA0u) {
        ctx->pc = 0x1A7BA0u;
            // 0x1a7ba0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7BA4u;
        goto label_1a7ba4;
    }
    ctx->pc = 0x1A7B9Cu;
    SET_GPR_U32(ctx, 31, 0x1A7BA4u);
    ctx->pc = 0x1A7BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B9Cu;
            // 0x1a7ba0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BA4u; }
        if (ctx->pc != 0x1A7BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BA4u; }
        if (ctx->pc != 0x1A7BA4u) { return; }
    }
    ctx->pc = 0x1A7BA4u;
label_1a7ba4:
    // 0x1a7ba4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a7ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7ba8:
    // 0x1a7ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7bac:
    // 0x1a7bac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a7bacu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7bb0:
    // 0x1a7bb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7bb4:
    // 0x1a7bb4: 0x0  nop
    ctx->pc = 0x1a7bb4u;
    // NOP
label_1a7bb8:
    // 0x1a7bb8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7bb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a7bbc:
    // 0x1a7bbc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a7bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7bc0:
    // 0x1a7bc0: 0x1810  mfhi        $v1
    ctx->pc = 0x1a7bc0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1a7bc4:
    // 0x1a7bc4: 0xc053740  jal         func_14DD00
label_1a7bc8:
    if (ctx->pc == 0x1A7BC8u) {
        ctx->pc = 0x1A7BC8u;
            // 0x1a7bc8: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1A7BCCu;
        goto label_1a7bcc;
    }
    ctx->pc = 0x1A7BC4u;
    SET_GPR_U32(ctx, 31, 0x1A7BCCu);
    ctx->pc = 0x1A7BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BC4u;
            // 0x1a7bc8: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BCCu; }
        if (ctx->pc != 0x1A7BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BCCu; }
        if (ctx->pc != 0x1A7BCCu) { return; }
    }
    ctx->pc = 0x1A7BCCu;
label_1a7bcc:
    // 0x1a7bcc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a7bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7bd0:
    // 0x1a7bd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7bd4:
    // 0x1a7bd4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a7bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7bd8:
    // 0x1a7bd8: 0xc053740  jal         func_14DD00
label_1a7bdc:
    if (ctx->pc == 0x1A7BDCu) {
        ctx->pc = 0x1A7BDCu;
            // 0x1a7bdc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1A7BE0u;
        goto label_1a7be0;
    }
    ctx->pc = 0x1A7BD8u;
    SET_GPR_U32(ctx, 31, 0x1A7BE0u);
    ctx->pc = 0x1A7BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BD8u;
            // 0x1a7bdc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BE0u; }
        if (ctx->pc != 0x1A7BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BE0u; }
        if (ctx->pc != 0x1A7BE0u) { return; }
    }
    ctx->pc = 0x1A7BE0u;
label_1a7be0:
    // 0x1a7be0: 0xc050bb4  jal         func_142ED0
label_1a7be4:
    if (ctx->pc == 0x1A7BE4u) {
        ctx->pc = 0x1A7BE8u;
        goto label_1a7be8;
    }
    ctx->pc = 0x1A7BE0u;
    SET_GPR_U32(ctx, 31, 0x1A7BE8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BE8u; }
        if (ctx->pc != 0x1A7BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BE8u; }
        if (ctx->pc != 0x1A7BE8u) { return; }
    }
    ctx->pc = 0x1A7BE8u;
label_1a7be8:
    // 0x1a7be8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a7be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7bec:
    // 0x1a7bec: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a7becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7bf0:
    // 0x1a7bf0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a7bf0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7bf4:
    // 0x1a7bf4: 0x0  nop
    ctx->pc = 0x1a7bf4u;
    // NOP
label_1a7bf8:
    // 0x1a7bf8: 0x0  nop
    ctx->pc = 0x1a7bf8u;
    // NOP
label_1a7bfc:
    // 0x1a7bfc: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7bfcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7c00:
    // 0x1a7c00: 0xc050bb4  jal         func_142ED0
label_1a7c04:
    if (ctx->pc == 0x1A7C04u) {
        ctx->pc = 0x1A7C04u;
            // 0x1a7c04: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7C08u;
        goto label_1a7c08;
    }
    ctx->pc = 0x1A7C00u;
    SET_GPR_U32(ctx, 31, 0x1A7C08u);
    ctx->pc = 0x1A7C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C00u;
            // 0x1a7c04: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C08u; }
        if (ctx->pc != 0x1A7C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C08u; }
        if (ctx->pc != 0x1A7C08u) { return; }
    }
    ctx->pc = 0x1A7C08u;
label_1a7c08:
    // 0x1a7c08: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7c0c:
    // 0x1a7c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c10:
    // 0x1a7c10: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a7c10u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7c14:
    // 0x1a7c14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a7c18:
    // 0x1a7c18: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a7c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7c1c:
    // 0x1a7c1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7c20:
    // 0x1a7c20: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7c20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7c24:
    // 0x1a7c24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7c24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a7c28:
    // 0x1a7c28: 0xc053740  jal         func_14DD00
label_1a7c2c:
    if (ctx->pc == 0x1A7C2Cu) {
        ctx->pc = 0x1A7C2Cu;
            // 0x1a7c2c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7C30u;
        goto label_1a7c30;
    }
    ctx->pc = 0x1A7C28u;
    SET_GPR_U32(ctx, 31, 0x1A7C30u);
    ctx->pc = 0x1A7C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C28u;
            // 0x1a7c2c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C30u; }
        if (ctx->pc != 0x1A7C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C30u; }
        if (ctx->pc != 0x1A7C30u) { return; }
    }
    ctx->pc = 0x1A7C30u;
label_1a7c30:
    // 0x1a7c30: 0xc050bb4  jal         func_142ED0
label_1a7c34:
    if (ctx->pc == 0x1A7C34u) {
        ctx->pc = 0x1A7C38u;
        goto label_1a7c38;
    }
    ctx->pc = 0x1A7C30u;
    SET_GPR_U32(ctx, 31, 0x1A7C38u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C38u; }
        if (ctx->pc != 0x1A7C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C38u; }
        if (ctx->pc != 0x1A7C38u) { return; }
    }
    ctx->pc = 0x1A7C38u;
label_1a7c38:
    // 0x1a7c38: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a7c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7c3c:
    // 0x1a7c3c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a7c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7c40:
    // 0x1a7c40: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a7c40u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7c44:
    // 0x1a7c44: 0x0  nop
    ctx->pc = 0x1a7c44u;
    // NOP
label_1a7c48:
    // 0x1a7c48: 0x0  nop
    ctx->pc = 0x1a7c48u;
    // NOP
label_1a7c4c:
    // 0x1a7c4c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7c4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7c50:
    // 0x1a7c50: 0xc050bb4  jal         func_142ED0
label_1a7c54:
    if (ctx->pc == 0x1A7C54u) {
        ctx->pc = 0x1A7C54u;
            // 0x1a7c54: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7C58u;
        goto label_1a7c58;
    }
    ctx->pc = 0x1A7C50u;
    SET_GPR_U32(ctx, 31, 0x1A7C58u);
    ctx->pc = 0x1A7C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C50u;
            // 0x1a7c54: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C58u; }
        if (ctx->pc != 0x1A7C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C58u; }
        if (ctx->pc != 0x1A7C58u) { return; }
    }
    ctx->pc = 0x1A7C58u;
label_1a7c58:
    // 0x1a7c58: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a7c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7c5c:
    // 0x1a7c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c60:
    // 0x1a7c60: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a7c60u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7c64:
    // 0x1a7c64: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a7c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a7c68:
    // 0x1a7c68: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7c6c:
    // 0x1a7c6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7c70:
    // 0x1a7c70: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7c70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7c74:
    // 0x1a7c74: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7c74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a7c78:
    // 0x1a7c78: 0xc053740  jal         func_14DD00
label_1a7c7c:
    if (ctx->pc == 0x1A7C7Cu) {
        ctx->pc = 0x1A7C7Cu;
            // 0x1a7c7c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7C80u;
        goto label_1a7c80;
    }
    ctx->pc = 0x1A7C78u;
    SET_GPR_U32(ctx, 31, 0x1A7C80u);
    ctx->pc = 0x1A7C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C78u;
            // 0x1a7c7c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C80u; }
        if (ctx->pc != 0x1A7C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C80u; }
        if (ctx->pc != 0x1A7C80u) { return; }
    }
    ctx->pc = 0x1A7C80u;
label_1a7c80:
    // 0x1a7c80: 0xc050bb4  jal         func_142ED0
label_1a7c84:
    if (ctx->pc == 0x1A7C84u) {
        ctx->pc = 0x1A7C88u;
        goto label_1a7c88;
    }
    ctx->pc = 0x1A7C80u;
    SET_GPR_U32(ctx, 31, 0x1A7C88u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C88u; }
        if (ctx->pc != 0x1A7C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C88u; }
        if (ctx->pc != 0x1A7C88u) { return; }
    }
    ctx->pc = 0x1A7C88u;
label_1a7c88:
    // 0x1a7c88: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a7c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7c8c:
    // 0x1a7c8c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a7c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7c90:
    // 0x1a7c90: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a7c90u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7c94:
    // 0x1a7c94: 0x0  nop
    ctx->pc = 0x1a7c94u;
    // NOP
label_1a7c98:
    // 0x1a7c98: 0x0  nop
    ctx->pc = 0x1a7c98u;
    // NOP
label_1a7c9c:
    // 0x1a7c9c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7c9cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7ca0:
    // 0x1a7ca0: 0xc050bb4  jal         func_142ED0
label_1a7ca4:
    if (ctx->pc == 0x1A7CA4u) {
        ctx->pc = 0x1A7CA4u;
            // 0x1a7ca4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7CA8u;
        goto label_1a7ca8;
    }
    ctx->pc = 0x1A7CA0u;
    SET_GPR_U32(ctx, 31, 0x1A7CA8u);
    ctx->pc = 0x1A7CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7CA0u;
            // 0x1a7ca4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CA8u; }
        if (ctx->pc != 0x1A7CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CA8u; }
        if (ctx->pc != 0x1A7CA8u) { return; }
    }
    ctx->pc = 0x1A7CA8u;
label_1a7ca8:
    // 0x1a7ca8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a7ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7cac:
    // 0x1a7cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7cb0:
    // 0x1a7cb0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a7cb0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7cb4:
    // 0x1a7cb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a7cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a7cb8:
    // 0x1a7cb8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a7cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7cbc:
    // 0x1a7cbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7cc0:
    // 0x1a7cc0: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7cc0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7cc4:
    // 0x1a7cc4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7cc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a7cc8:
    // 0x1a7cc8: 0xc053740  jal         func_14DD00
label_1a7ccc:
    if (ctx->pc == 0x1A7CCCu) {
        ctx->pc = 0x1A7CCCu;
            // 0x1a7ccc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7CD0u;
        goto label_1a7cd0;
    }
    ctx->pc = 0x1A7CC8u;
    SET_GPR_U32(ctx, 31, 0x1A7CD0u);
    ctx->pc = 0x1A7CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7CC8u;
            // 0x1a7ccc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CD0u; }
        if (ctx->pc != 0x1A7CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CD0u; }
        if (ctx->pc != 0x1A7CD0u) { return; }
    }
    ctx->pc = 0x1A7CD0u;
label_1a7cd0:
    // 0x1a7cd0: 0xc050bb4  jal         func_142ED0
label_1a7cd4:
    if (ctx->pc == 0x1A7CD4u) {
        ctx->pc = 0x1A7CD8u;
        goto label_1a7cd8;
    }
    ctx->pc = 0x1A7CD0u;
    SET_GPR_U32(ctx, 31, 0x1A7CD8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CD8u; }
        if (ctx->pc != 0x1A7CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CD8u; }
        if (ctx->pc != 0x1A7CD8u) { return; }
    }
    ctx->pc = 0x1A7CD8u;
label_1a7cd8:
    // 0x1a7cd8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a7cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7cdc:
    // 0x1a7cdc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7ce0:
    // 0x1a7ce0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a7ce0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7ce4:
    // 0x1a7ce4: 0x0  nop
    ctx->pc = 0x1a7ce4u;
    // NOP
label_1a7ce8:
    // 0x1a7ce8: 0x0  nop
    ctx->pc = 0x1a7ce8u;
    // NOP
label_1a7cec:
    // 0x1a7cec: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7cecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7cf0:
    // 0x1a7cf0: 0xc050bb4  jal         func_142ED0
label_1a7cf4:
    if (ctx->pc == 0x1A7CF4u) {
        ctx->pc = 0x1A7CF4u;
            // 0x1a7cf4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7CF8u;
        goto label_1a7cf8;
    }
    ctx->pc = 0x1A7CF0u;
    SET_GPR_U32(ctx, 31, 0x1A7CF8u);
    ctx->pc = 0x1A7CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7CF0u;
            // 0x1a7cf4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CF8u; }
        if (ctx->pc != 0x1A7CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CF8u; }
        if (ctx->pc != 0x1A7CF8u) { return; }
    }
    ctx->pc = 0x1A7CF8u;
label_1a7cf8:
    // 0x1a7cf8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a7cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7cfc:
    // 0x1a7cfc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a7cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7d00:
    // 0x1a7d00: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a7d00u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7d04:
    // 0x1a7d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7d08:
    // 0x1a7d08: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a7d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a7d0c:
    // 0x1a7d0c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a7d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1a7d10:
    // 0x1a7d10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7d14:
    // 0x1a7d14: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a7d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7d18:
    // 0x1a7d18: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7d18u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7d1c:
    // 0x1a7d1c: 0xc053740  jal         func_14DD00
label_1a7d20:
    if (ctx->pc == 0x1A7D20u) {
        ctx->pc = 0x1A7D20u;
            // 0x1a7d20: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7D24u;
        goto label_1a7d24;
    }
    ctx->pc = 0x1A7D1Cu;
    SET_GPR_U32(ctx, 31, 0x1A7D24u);
    ctx->pc = 0x1A7D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D1Cu;
            // 0x1a7d20: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D24u; }
        if (ctx->pc != 0x1A7D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D24u; }
        if (ctx->pc != 0x1A7D24u) { return; }
    }
    ctx->pc = 0x1A7D24u;
label_1a7d24:
    // 0x1a7d24: 0xc050bb4  jal         func_142ED0
label_1a7d28:
    if (ctx->pc == 0x1A7D28u) {
        ctx->pc = 0x1A7D2Cu;
        goto label_1a7d2c;
    }
    ctx->pc = 0x1A7D24u;
    SET_GPR_U32(ctx, 31, 0x1A7D2Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D2Cu; }
        if (ctx->pc != 0x1A7D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D2Cu; }
        if (ctx->pc != 0x1A7D2Cu) { return; }
    }
    ctx->pc = 0x1A7D2Cu;
label_1a7d2c:
    // 0x1a7d2c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a7d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7d30:
    // 0x1a7d30: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7d34:
    // 0x1a7d34: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a7d34u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7d38:
    // 0x1a7d38: 0x0  nop
    ctx->pc = 0x1a7d38u;
    // NOP
label_1a7d3c:
    // 0x1a7d3c: 0x0  nop
    ctx->pc = 0x1a7d3cu;
    // NOP
label_1a7d40:
    // 0x1a7d40: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7d40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7d44:
    // 0x1a7d44: 0xc050bb4  jal         func_142ED0
label_1a7d48:
    if (ctx->pc == 0x1A7D48u) {
        ctx->pc = 0x1A7D48u;
            // 0x1a7d48: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7D4Cu;
        goto label_1a7d4c;
    }
    ctx->pc = 0x1A7D44u;
    SET_GPR_U32(ctx, 31, 0x1A7D4Cu);
    ctx->pc = 0x1A7D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D44u;
            // 0x1a7d48: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D4Cu; }
        if (ctx->pc != 0x1A7D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D4Cu; }
        if (ctx->pc != 0x1A7D4Cu) { return; }
    }
    ctx->pc = 0x1A7D4Cu;
label_1a7d4c:
    // 0x1a7d4c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a7d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7d50:
    // 0x1a7d50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7d54:
    // 0x1a7d54: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a7d54u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7d58:
    // 0x1a7d58: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a7d5c:
    // 0x1a7d5c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a7d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7d60:
    // 0x1a7d60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7d64:
    // 0x1a7d64: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7d64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7d68:
    // 0x1a7d68: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7d68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a7d6c:
    // 0x1a7d6c: 0xc053740  jal         func_14DD00
label_1a7d70:
    if (ctx->pc == 0x1A7D70u) {
        ctx->pc = 0x1A7D70u;
            // 0x1a7d70: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7D74u;
        goto label_1a7d74;
    }
    ctx->pc = 0x1A7D6Cu;
    SET_GPR_U32(ctx, 31, 0x1A7D74u);
    ctx->pc = 0x1A7D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D6Cu;
            // 0x1a7d70: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D74u; }
        if (ctx->pc != 0x1A7D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D74u; }
        if (ctx->pc != 0x1A7D74u) { return; }
    }
    ctx->pc = 0x1A7D74u;
label_1a7d74:
    // 0x1a7d74: 0xc050bb4  jal         func_142ED0
label_1a7d78:
    if (ctx->pc == 0x1A7D78u) {
        ctx->pc = 0x1A7D7Cu;
        goto label_1a7d7c;
    }
    ctx->pc = 0x1A7D74u;
    SET_GPR_U32(ctx, 31, 0x1A7D7Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D7Cu; }
        if (ctx->pc != 0x1A7D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D7Cu; }
        if (ctx->pc != 0x1A7D7Cu) { return; }
    }
    ctx->pc = 0x1A7D7Cu;
label_1a7d7c:
    // 0x1a7d7c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a7d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7d80:
    // 0x1a7d80: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7d84:
    // 0x1a7d84: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a7d84u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7d88:
    // 0x1a7d88: 0x0  nop
    ctx->pc = 0x1a7d88u;
    // NOP
label_1a7d8c:
    // 0x1a7d8c: 0x0  nop
    ctx->pc = 0x1a7d8cu;
    // NOP
label_1a7d90:
    // 0x1a7d90: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7d90u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7d94:
    // 0x1a7d94: 0xc050bb4  jal         func_142ED0
label_1a7d98:
    if (ctx->pc == 0x1A7D98u) {
        ctx->pc = 0x1A7D98u;
            // 0x1a7d98: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7D9Cu;
        goto label_1a7d9c;
    }
    ctx->pc = 0x1A7D94u;
    SET_GPR_U32(ctx, 31, 0x1A7D9Cu);
    ctx->pc = 0x1A7D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D94u;
            // 0x1a7d98: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D9Cu; }
        if (ctx->pc != 0x1A7D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D9Cu; }
        if (ctx->pc != 0x1A7D9Cu) { return; }
    }
    ctx->pc = 0x1A7D9Cu;
label_1a7d9c:
    // 0x1a7d9c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a7d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7da0:
    // 0x1a7da0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a7da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7da4:
    // 0x1a7da4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a7da4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7da8:
    // 0x1a7da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7dac:
    // 0x1a7dac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a7db0:
    // 0x1a7db0: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x1a7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_1a7db4:
    // 0x1a7db4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a7db8:
    // 0x1a7db8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a7db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7dbc:
    // 0x1a7dbc: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7dbcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7dc0:
    // 0x1a7dc0: 0xc053740  jal         func_14DD00
label_1a7dc4:
    if (ctx->pc == 0x1A7DC4u) {
        ctx->pc = 0x1A7DC4u;
            // 0x1a7dc4: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7DC8u;
        goto label_1a7dc8;
    }
    ctx->pc = 0x1A7DC0u;
    SET_GPR_U32(ctx, 31, 0x1A7DC8u);
    ctx->pc = 0x1A7DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DC0u;
            // 0x1a7dc4: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DC8u; }
        if (ctx->pc != 0x1A7DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DC8u; }
        if (ctx->pc != 0x1A7DC8u) { return; }
    }
    ctx->pc = 0x1A7DC8u;
label_1a7dc8:
    // 0x1a7dc8: 0xc050bb4  jal         func_142ED0
label_1a7dcc:
    if (ctx->pc == 0x1A7DCCu) {
        ctx->pc = 0x1A7DD0u;
        goto label_1a7dd0;
    }
    ctx->pc = 0x1A7DC8u;
    SET_GPR_U32(ctx, 31, 0x1A7DD0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DD0u; }
        if (ctx->pc != 0x1A7DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DD0u; }
        if (ctx->pc != 0x1A7DD0u) { return; }
    }
    ctx->pc = 0x1A7DD0u;
label_1a7dd0:
    // 0x1a7dd0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a7dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7dd4:
    // 0x1a7dd4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a7dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7dd8:
    // 0x1a7dd8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a7dd8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7ddc:
    // 0x1a7ddc: 0x0  nop
    ctx->pc = 0x1a7ddcu;
    // NOP
label_1a7de0:
    // 0x1a7de0: 0x0  nop
    ctx->pc = 0x1a7de0u;
    // NOP
label_1a7de4:
    // 0x1a7de4: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7de4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7de8:
    // 0x1a7de8: 0xc050bb4  jal         func_142ED0
label_1a7dec:
    if (ctx->pc == 0x1A7DECu) {
        ctx->pc = 0x1A7DECu;
            // 0x1a7dec: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7DF0u;
        goto label_1a7df0;
    }
    ctx->pc = 0x1A7DE8u;
    SET_GPR_U32(ctx, 31, 0x1A7DF0u);
    ctx->pc = 0x1A7DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DE8u;
            // 0x1a7dec: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DF0u; }
        if (ctx->pc != 0x1A7DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DF0u; }
        if (ctx->pc != 0x1A7DF0u) { return; }
    }
    ctx->pc = 0x1A7DF0u;
label_1a7df0:
    // 0x1a7df0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a7df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7df4:
    // 0x1a7df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7df8:
    // 0x1a7df8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a7df8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7dfc:
    // 0x1a7dfc: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a7e00:
    // 0x1a7e00: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a7e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7e04:
    // 0x1a7e04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7e08:
    // 0x1a7e08: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7e08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7e0c:
    // 0x1a7e0c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7e0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a7e10:
    // 0x1a7e10: 0xc053740  jal         func_14DD00
label_1a7e14:
    if (ctx->pc == 0x1A7E14u) {
        ctx->pc = 0x1A7E14u;
            // 0x1a7e14: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7E18u;
        goto label_1a7e18;
    }
    ctx->pc = 0x1A7E10u;
    SET_GPR_U32(ctx, 31, 0x1A7E18u);
    ctx->pc = 0x1A7E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E10u;
            // 0x1a7e14: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E18u; }
        if (ctx->pc != 0x1A7E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E18u; }
        if (ctx->pc != 0x1A7E18u) { return; }
    }
    ctx->pc = 0x1A7E18u;
label_1a7e18:
    // 0x1a7e18: 0xc050bb4  jal         func_142ED0
label_1a7e1c:
    if (ctx->pc == 0x1A7E1Cu) {
        ctx->pc = 0x1A7E20u;
        goto label_1a7e20;
    }
    ctx->pc = 0x1A7E18u;
    SET_GPR_U32(ctx, 31, 0x1A7E20u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E20u; }
        if (ctx->pc != 0x1A7E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E20u; }
        if (ctx->pc != 0x1A7E20u) { return; }
    }
    ctx->pc = 0x1A7E20u;
label_1a7e20:
    // 0x1a7e20: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a7e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7e24:
    // 0x1a7e24: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a7e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7e28:
    // 0x1a7e28: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a7e28u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7e2c:
    // 0x1a7e2c: 0x0  nop
    ctx->pc = 0x1a7e2cu;
    // NOP
label_1a7e30:
    // 0x1a7e30: 0x0  nop
    ctx->pc = 0x1a7e30u;
    // NOP
label_1a7e34:
    // 0x1a7e34: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7e34u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7e38:
    // 0x1a7e38: 0xc050bb4  jal         func_142ED0
label_1a7e3c:
    if (ctx->pc == 0x1A7E3Cu) {
        ctx->pc = 0x1A7E3Cu;
            // 0x1a7e3c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7E40u;
        goto label_1a7e40;
    }
    ctx->pc = 0x1A7E38u;
    SET_GPR_U32(ctx, 31, 0x1A7E40u);
    ctx->pc = 0x1A7E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E38u;
            // 0x1a7e3c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E40u; }
        if (ctx->pc != 0x1A7E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E40u; }
        if (ctx->pc != 0x1A7E40u) { return; }
    }
    ctx->pc = 0x1A7E40u;
label_1a7e40:
    // 0x1a7e40: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a7e44:
    // 0x1a7e44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7e48:
    // 0x1a7e48: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a7e48u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a7e4c:
    // 0x1a7e4c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a7e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a7e50:
    // 0x1a7e50: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7e54:
    // 0x1a7e54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7e58:
    // 0x1a7e58: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7e58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7e5c:
    // 0x1a7e5c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7e5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a7e60:
    // 0x1a7e60: 0xc053740  jal         func_14DD00
label_1a7e64:
    if (ctx->pc == 0x1A7E64u) {
        ctx->pc = 0x1A7E64u;
            // 0x1a7e64: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7E68u;
        goto label_1a7e68;
    }
    ctx->pc = 0x1A7E60u;
    SET_GPR_U32(ctx, 31, 0x1A7E68u);
    ctx->pc = 0x1A7E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E60u;
            // 0x1a7e64: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E68u; }
        if (ctx->pc != 0x1A7E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E68u; }
        if (ctx->pc != 0x1A7E68u) { return; }
    }
    ctx->pc = 0x1A7E68u;
label_1a7e68:
    // 0x1a7e68: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a7e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7e6c:
    // 0x1a7e6c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1a7e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7e70:
    // 0x1a7e70: 0xc07b0ac  jal         func_1EC2B0
label_1a7e74:
    if (ctx->pc == 0x1A7E74u) {
        ctx->pc = 0x1A7E74u;
            // 0x1a7e74: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1A7E78u;
        goto label_1a7e78;
    }
    ctx->pc = 0x1A7E70u;
    SET_GPR_U32(ctx, 31, 0x1A7E78u);
    ctx->pc = 0x1A7E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E70u;
            // 0x1a7e74: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E78u; }
        if (ctx->pc != 0x1A7E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E78u; }
        if (ctx->pc != 0x1A7E78u) { return; }
    }
    ctx->pc = 0x1A7E78u;
label_1a7e78:
    // 0x1a7e78: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1a7e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1a7e7c:
    // 0x1a7e7c: 0x40f809  jalr        $v0
label_1a7e80:
    if (ctx->pc == 0x1A7E80u) {
        ctx->pc = 0x1A7E80u;
            // 0x1a7e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E84u;
        goto label_1a7e84;
    }
    ctx->pc = 0x1A7E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7E84u);
        ctx->pc = 0x1A7E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E7Cu;
            // 0x1a7e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C50u: goto label_1a6c50;
            case 0x1A6C54u: goto label_1a6c54;
            case 0x1A6C58u: goto label_1a6c58;
            case 0x1A6C5Cu: goto label_1a6c5c;
            case 0x1A6C60u: goto label_1a6c60;
            case 0x1A6C64u: goto label_1a6c64;
            case 0x1A6C68u: goto label_1a6c68;
            case 0x1A6C6Cu: goto label_1a6c6c;
            case 0x1A6C70u: goto label_1a6c70;
            case 0x1A6C74u: goto label_1a6c74;
            case 0x1A6C78u: goto label_1a6c78;
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6C80u: goto label_1a6c80;
            case 0x1A6C84u: goto label_1a6c84;
            case 0x1A6C88u: goto label_1a6c88;
            case 0x1A6C8Cu: goto label_1a6c8c;
            case 0x1A6C90u: goto label_1a6c90;
            case 0x1A6C94u: goto label_1a6c94;
            case 0x1A6C98u: goto label_1a6c98;
            case 0x1A6C9Cu: goto label_1a6c9c;
            case 0x1A6CA0u: goto label_1a6ca0;
            case 0x1A6CA4u: goto label_1a6ca4;
            case 0x1A6CA8u: goto label_1a6ca8;
            case 0x1A6CACu: goto label_1a6cac;
            case 0x1A6CB0u: goto label_1a6cb0;
            case 0x1A6CB4u: goto label_1a6cb4;
            case 0x1A6CB8u: goto label_1a6cb8;
            case 0x1A6CBCu: goto label_1a6cbc;
            case 0x1A6CC0u: goto label_1a6cc0;
            case 0x1A6CC4u: goto label_1a6cc4;
            case 0x1A6CC8u: goto label_1a6cc8;
            case 0x1A6CCCu: goto label_1a6ccc;
            case 0x1A6CD0u: goto label_1a6cd0;
            case 0x1A6CD4u: goto label_1a6cd4;
            case 0x1A6CD8u: goto label_1a6cd8;
            case 0x1A6CDCu: goto label_1a6cdc;
            case 0x1A6CE0u: goto label_1a6ce0;
            case 0x1A6CE4u: goto label_1a6ce4;
            case 0x1A6CE8u: goto label_1a6ce8;
            case 0x1A6CECu: goto label_1a6cec;
            case 0x1A6CF0u: goto label_1a6cf0;
            case 0x1A6CF4u: goto label_1a6cf4;
            case 0x1A6CF8u: goto label_1a6cf8;
            case 0x1A6CFCu: goto label_1a6cfc;
            case 0x1A6D00u: goto label_1a6d00;
            case 0x1A6D04u: goto label_1a6d04;
            case 0x1A6D08u: goto label_1a6d08;
            case 0x1A6D0Cu: goto label_1a6d0c;
            case 0x1A6D10u: goto label_1a6d10;
            case 0x1A6D14u: goto label_1a6d14;
            case 0x1A6D18u: goto label_1a6d18;
            case 0x1A6D1Cu: goto label_1a6d1c;
            case 0x1A6D20u: goto label_1a6d20;
            case 0x1A6D24u: goto label_1a6d24;
            case 0x1A6D28u: goto label_1a6d28;
            case 0x1A6D2Cu: goto label_1a6d2c;
            case 0x1A6D30u: goto label_1a6d30;
            case 0x1A6D34u: goto label_1a6d34;
            case 0x1A6D38u: goto label_1a6d38;
            case 0x1A6D3Cu: goto label_1a6d3c;
            case 0x1A6D40u: goto label_1a6d40;
            case 0x1A6D44u: goto label_1a6d44;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6D4Cu: goto label_1a6d4c;
            case 0x1A6D50u: goto label_1a6d50;
            case 0x1A6D54u: goto label_1a6d54;
            case 0x1A6D58u: goto label_1a6d58;
            case 0x1A6D5Cu: goto label_1a6d5c;
            case 0x1A6D60u: goto label_1a6d60;
            case 0x1A6D64u: goto label_1a6d64;
            case 0x1A6D68u: goto label_1a6d68;
            case 0x1A6D6Cu: goto label_1a6d6c;
            case 0x1A6D70u: goto label_1a6d70;
            case 0x1A6D74u: goto label_1a6d74;
            case 0x1A6D78u: goto label_1a6d78;
            case 0x1A6D7Cu: goto label_1a6d7c;
            case 0x1A6D80u: goto label_1a6d80;
            case 0x1A6D84u: goto label_1a6d84;
            case 0x1A6D88u: goto label_1a6d88;
            case 0x1A6D8Cu: goto label_1a6d8c;
            case 0x1A6D90u: goto label_1a6d90;
            case 0x1A6D94u: goto label_1a6d94;
            case 0x1A6D98u: goto label_1a6d98;
            case 0x1A6D9Cu: goto label_1a6d9c;
            case 0x1A6DA0u: goto label_1a6da0;
            case 0x1A6DA4u: goto label_1a6da4;
            case 0x1A6DA8u: goto label_1a6da8;
            case 0x1A6DACu: goto label_1a6dac;
            case 0x1A6DB0u: goto label_1a6db0;
            case 0x1A6DB4u: goto label_1a6db4;
            case 0x1A6DB8u: goto label_1a6db8;
            case 0x1A6DBCu: goto label_1a6dbc;
            case 0x1A6DC0u: goto label_1a6dc0;
            case 0x1A6DC4u: goto label_1a6dc4;
            case 0x1A6DC8u: goto label_1a6dc8;
            case 0x1A6DCCu: goto label_1a6dcc;
            case 0x1A6DD0u: goto label_1a6dd0;
            case 0x1A6DD4u: goto label_1a6dd4;
            case 0x1A6DD8u: goto label_1a6dd8;
            case 0x1A6DDCu: goto label_1a6ddc;
            case 0x1A6DE0u: goto label_1a6de0;
            case 0x1A6DE4u: goto label_1a6de4;
            case 0x1A6DE8u: goto label_1a6de8;
            case 0x1A6DECu: goto label_1a6dec;
            case 0x1A6DF0u: goto label_1a6df0;
            case 0x1A6DF4u: goto label_1a6df4;
            case 0x1A6DF8u: goto label_1a6df8;
            case 0x1A6DFCu: goto label_1a6dfc;
            case 0x1A6E00u: goto label_1a6e00;
            case 0x1A6E04u: goto label_1a6e04;
            case 0x1A6E08u: goto label_1a6e08;
            case 0x1A6E0Cu: goto label_1a6e0c;
            case 0x1A6E10u: goto label_1a6e10;
            case 0x1A6E14u: goto label_1a6e14;
            case 0x1A6E18u: goto label_1a6e18;
            case 0x1A6E1Cu: goto label_1a6e1c;
            case 0x1A6E20u: goto label_1a6e20;
            case 0x1A6E24u: goto label_1a6e24;
            case 0x1A6E28u: goto label_1a6e28;
            case 0x1A6E2Cu: goto label_1a6e2c;
            case 0x1A6E30u: goto label_1a6e30;
            case 0x1A6E34u: goto label_1a6e34;
            case 0x1A6E38u: goto label_1a6e38;
            case 0x1A6E3Cu: goto label_1a6e3c;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E44u: goto label_1a6e44;
            case 0x1A6E48u: goto label_1a6e48;
            case 0x1A6E4Cu: goto label_1a6e4c;
            case 0x1A6E50u: goto label_1a6e50;
            case 0x1A6E54u: goto label_1a6e54;
            case 0x1A6E58u: goto label_1a6e58;
            case 0x1A6E5Cu: goto label_1a6e5c;
            case 0x1A6E60u: goto label_1a6e60;
            case 0x1A6E64u: goto label_1a6e64;
            case 0x1A6E68u: goto label_1a6e68;
            case 0x1A6E6Cu: goto label_1a6e6c;
            case 0x1A6E70u: goto label_1a6e70;
            case 0x1A6E74u: goto label_1a6e74;
            case 0x1A6E78u: goto label_1a6e78;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6E80u: goto label_1a6e80;
            case 0x1A6E84u: goto label_1a6e84;
            case 0x1A6E88u: goto label_1a6e88;
            case 0x1A6E8Cu: goto label_1a6e8c;
            case 0x1A6E90u: goto label_1a6e90;
            case 0x1A6E94u: goto label_1a6e94;
            case 0x1A6E98u: goto label_1a6e98;
            case 0x1A6E9Cu: goto label_1a6e9c;
            case 0x1A6EA0u: goto label_1a6ea0;
            case 0x1A6EA4u: goto label_1a6ea4;
            case 0x1A6EA8u: goto label_1a6ea8;
            case 0x1A6EACu: goto label_1a6eac;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EB4u: goto label_1a6eb4;
            case 0x1A6EB8u: goto label_1a6eb8;
            case 0x1A6EBCu: goto label_1a6ebc;
            case 0x1A6EC0u: goto label_1a6ec0;
            case 0x1A6EC4u: goto label_1a6ec4;
            case 0x1A6EC8u: goto label_1a6ec8;
            case 0x1A6ECCu: goto label_1a6ecc;
            case 0x1A6ED0u: goto label_1a6ed0;
            case 0x1A6ED4u: goto label_1a6ed4;
            case 0x1A6ED8u: goto label_1a6ed8;
            case 0x1A6EDCu: goto label_1a6edc;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6EE4u: goto label_1a6ee4;
            case 0x1A6EE8u: goto label_1a6ee8;
            case 0x1A6EECu: goto label_1a6eec;
            case 0x1A6EF0u: goto label_1a6ef0;
            case 0x1A6EF4u: goto label_1a6ef4;
            case 0x1A6EF8u: goto label_1a6ef8;
            case 0x1A6EFCu: goto label_1a6efc;
            case 0x1A6F00u: goto label_1a6f00;
            case 0x1A6F04u: goto label_1a6f04;
            case 0x1A6F08u: goto label_1a6f08;
            case 0x1A6F0Cu: goto label_1a6f0c;
            case 0x1A6F10u: goto label_1a6f10;
            case 0x1A6F14u: goto label_1a6f14;
            case 0x1A6F18u: goto label_1a6f18;
            case 0x1A6F1Cu: goto label_1a6f1c;
            case 0x1A6F20u: goto label_1a6f20;
            case 0x1A6F24u: goto label_1a6f24;
            case 0x1A6F28u: goto label_1a6f28;
            case 0x1A6F2Cu: goto label_1a6f2c;
            case 0x1A6F30u: goto label_1a6f30;
            case 0x1A6F34u: goto label_1a6f34;
            case 0x1A6F38u: goto label_1a6f38;
            case 0x1A6F3Cu: goto label_1a6f3c;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F44u: goto label_1a6f44;
            case 0x1A6F48u: goto label_1a6f48;
            case 0x1A6F4Cu: goto label_1a6f4c;
            case 0x1A6F50u: goto label_1a6f50;
            case 0x1A6F54u: goto label_1a6f54;
            case 0x1A6F58u: goto label_1a6f58;
            case 0x1A6F5Cu: goto label_1a6f5c;
            case 0x1A6F60u: goto label_1a6f60;
            case 0x1A6F64u: goto label_1a6f64;
            case 0x1A6F68u: goto label_1a6f68;
            case 0x1A6F6Cu: goto label_1a6f6c;
            case 0x1A6F70u: goto label_1a6f70;
            case 0x1A6F74u: goto label_1a6f74;
            case 0x1A6F78u: goto label_1a6f78;
            case 0x1A6F7Cu: goto label_1a6f7c;
            case 0x1A6F80u: goto label_1a6f80;
            case 0x1A6F84u: goto label_1a6f84;
            case 0x1A6F88u: goto label_1a6f88;
            case 0x1A6F8Cu: goto label_1a6f8c;
            case 0x1A6F90u: goto label_1a6f90;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6F98u: goto label_1a6f98;
            case 0x1A6F9Cu: goto label_1a6f9c;
            case 0x1A6FA0u: goto label_1a6fa0;
            case 0x1A6FA4u: goto label_1a6fa4;
            case 0x1A6FA8u: goto label_1a6fa8;
            case 0x1A6FACu: goto label_1a6fac;
            case 0x1A6FB0u: goto label_1a6fb0;
            case 0x1A6FB4u: goto label_1a6fb4;
            case 0x1A6FB8u: goto label_1a6fb8;
            case 0x1A6FBCu: goto label_1a6fbc;
            case 0x1A6FC0u: goto label_1a6fc0;
            case 0x1A6FC4u: goto label_1a6fc4;
            case 0x1A6FC8u: goto label_1a6fc8;
            case 0x1A6FCCu: goto label_1a6fcc;
            case 0x1A6FD0u: goto label_1a6fd0;
            case 0x1A6FD4u: goto label_1a6fd4;
            case 0x1A6FD8u: goto label_1a6fd8;
            case 0x1A6FDCu: goto label_1a6fdc;
            case 0x1A6FE0u: goto label_1a6fe0;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FE8u: goto label_1a6fe8;
            case 0x1A6FECu: goto label_1a6fec;
            case 0x1A6FF0u: goto label_1a6ff0;
            case 0x1A6FF4u: goto label_1a6ff4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A6FFCu: goto label_1a6ffc;
            case 0x1A7000u: goto label_1a7000;
            case 0x1A7004u: goto label_1a7004;
            case 0x1A7008u: goto label_1a7008;
            case 0x1A700Cu: goto label_1a700c;
            case 0x1A7010u: goto label_1a7010;
            case 0x1A7014u: goto label_1a7014;
            case 0x1A7018u: goto label_1a7018;
            case 0x1A701Cu: goto label_1a701c;
            case 0x1A7020u: goto label_1a7020;
            case 0x1A7024u: goto label_1a7024;
            case 0x1A7028u: goto label_1a7028;
            case 0x1A702Cu: goto label_1a702c;
            case 0x1A7030u: goto label_1a7030;
            case 0x1A7034u: goto label_1a7034;
            case 0x1A7038u: goto label_1a7038;
            case 0x1A703Cu: goto label_1a703c;
            case 0x1A7040u: goto label_1a7040;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A7048u: goto label_1a7048;
            case 0x1A704Cu: goto label_1a704c;
            case 0x1A7050u: goto label_1a7050;
            case 0x1A7054u: goto label_1a7054;
            case 0x1A7058u: goto label_1a7058;
            case 0x1A705Cu: goto label_1a705c;
            case 0x1A7060u: goto label_1a7060;
            case 0x1A7064u: goto label_1a7064;
            case 0x1A7068u: goto label_1a7068;
            case 0x1A706Cu: goto label_1a706c;
            case 0x1A7070u: goto label_1a7070;
            case 0x1A7074u: goto label_1a7074;
            case 0x1A7078u: goto label_1a7078;
            case 0x1A707Cu: goto label_1a707c;
            case 0x1A7080u: goto label_1a7080;
            case 0x1A7084u: goto label_1a7084;
            case 0x1A7088u: goto label_1a7088;
            case 0x1A708Cu: goto label_1a708c;
            case 0x1A7090u: goto label_1a7090;
            case 0x1A7094u: goto label_1a7094;
            case 0x1A7098u: goto label_1a7098;
            case 0x1A709Cu: goto label_1a709c;
            case 0x1A70A0u: goto label_1a70a0;
            case 0x1A70A4u: goto label_1a70a4;
            case 0x1A70A8u: goto label_1a70a8;
            case 0x1A70ACu: goto label_1a70ac;
            case 0x1A70B0u: goto label_1a70b0;
            case 0x1A70B4u: goto label_1a70b4;
            case 0x1A70B8u: goto label_1a70b8;
            case 0x1A70BCu: goto label_1a70bc;
            case 0x1A70C0u: goto label_1a70c0;
            case 0x1A70C4u: goto label_1a70c4;
            case 0x1A70C8u: goto label_1a70c8;
            case 0x1A70CCu: goto label_1a70cc;
            case 0x1A70D0u: goto label_1a70d0;
            case 0x1A70D4u: goto label_1a70d4;
            case 0x1A70D8u: goto label_1a70d8;
            case 0x1A70DCu: goto label_1a70dc;
            case 0x1A70E0u: goto label_1a70e0;
            case 0x1A70E4u: goto label_1a70e4;
            case 0x1A70E8u: goto label_1a70e8;
            case 0x1A70ECu: goto label_1a70ec;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A70F4u: goto label_1a70f4;
            case 0x1A70F8u: goto label_1a70f8;
            case 0x1A70FCu: goto label_1a70fc;
            case 0x1A7100u: goto label_1a7100;
            case 0x1A7104u: goto label_1a7104;
            case 0x1A7108u: goto label_1a7108;
            case 0x1A710Cu: goto label_1a710c;
            case 0x1A7110u: goto label_1a7110;
            case 0x1A7114u: goto label_1a7114;
            case 0x1A7118u: goto label_1a7118;
            case 0x1A711Cu: goto label_1a711c;
            case 0x1A7120u: goto label_1a7120;
            case 0x1A7124u: goto label_1a7124;
            case 0x1A7128u: goto label_1a7128;
            case 0x1A712Cu: goto label_1a712c;
            case 0x1A7130u: goto label_1a7130;
            case 0x1A7134u: goto label_1a7134;
            case 0x1A7138u: goto label_1a7138;
            case 0x1A713Cu: goto label_1a713c;
            case 0x1A7140u: goto label_1a7140;
            case 0x1A7144u: goto label_1a7144;
            case 0x1A7148u: goto label_1a7148;
            case 0x1A714Cu: goto label_1a714c;
            case 0x1A7150u: goto label_1a7150;
            case 0x1A7154u: goto label_1a7154;
            case 0x1A7158u: goto label_1a7158;
            case 0x1A715Cu: goto label_1a715c;
            case 0x1A7160u: goto label_1a7160;
            case 0x1A7164u: goto label_1a7164;
            case 0x1A7168u: goto label_1a7168;
            case 0x1A716Cu: goto label_1a716c;
            case 0x1A7170u: goto label_1a7170;
            case 0x1A7174u: goto label_1a7174;
            case 0x1A7178u: goto label_1a7178;
            case 0x1A717Cu: goto label_1a717c;
            case 0x1A7180u: goto label_1a7180;
            case 0x1A7184u: goto label_1a7184;
            case 0x1A7188u: goto label_1a7188;
            case 0x1A718Cu: goto label_1a718c;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7194u: goto label_1a7194;
            case 0x1A7198u: goto label_1a7198;
            case 0x1A719Cu: goto label_1a719c;
            case 0x1A71A0u: goto label_1a71a0;
            case 0x1A71A4u: goto label_1a71a4;
            case 0x1A71A8u: goto label_1a71a8;
            case 0x1A71ACu: goto label_1a71ac;
            case 0x1A71B0u: goto label_1a71b0;
            case 0x1A71B4u: goto label_1a71b4;
            case 0x1A71B8u: goto label_1a71b8;
            case 0x1A71BCu: goto label_1a71bc;
            case 0x1A71C0u: goto label_1a71c0;
            case 0x1A71C4u: goto label_1a71c4;
            case 0x1A71C8u: goto label_1a71c8;
            case 0x1A71CCu: goto label_1a71cc;
            case 0x1A71D0u: goto label_1a71d0;
            case 0x1A71D4u: goto label_1a71d4;
            case 0x1A71D8u: goto label_1a71d8;
            case 0x1A71DCu: goto label_1a71dc;
            case 0x1A71E0u: goto label_1a71e0;
            case 0x1A71E4u: goto label_1a71e4;
            case 0x1A71E8u: goto label_1a71e8;
            case 0x1A71ECu: goto label_1a71ec;
            case 0x1A71F0u: goto label_1a71f0;
            case 0x1A71F4u: goto label_1a71f4;
            case 0x1A71F8u: goto label_1a71f8;
            case 0x1A71FCu: goto label_1a71fc;
            case 0x1A7200u: goto label_1a7200;
            case 0x1A7204u: goto label_1a7204;
            case 0x1A7208u: goto label_1a7208;
            case 0x1A720Cu: goto label_1a720c;
            case 0x1A7210u: goto label_1a7210;
            case 0x1A7214u: goto label_1a7214;
            case 0x1A7218u: goto label_1a7218;
            case 0x1A721Cu: goto label_1a721c;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7224u: goto label_1a7224;
            case 0x1A7228u: goto label_1a7228;
            case 0x1A722Cu: goto label_1a722c;
            case 0x1A7230u: goto label_1a7230;
            case 0x1A7234u: goto label_1a7234;
            case 0x1A7238u: goto label_1a7238;
            case 0x1A723Cu: goto label_1a723c;
            case 0x1A7240u: goto label_1a7240;
            case 0x1A7244u: goto label_1a7244;
            case 0x1A7248u: goto label_1a7248;
            case 0x1A724Cu: goto label_1a724c;
            case 0x1A7250u: goto label_1a7250;
            case 0x1A7254u: goto label_1a7254;
            case 0x1A7258u: goto label_1a7258;
            case 0x1A725Cu: goto label_1a725c;
            case 0x1A7260u: goto label_1a7260;
            case 0x1A7264u: goto label_1a7264;
            case 0x1A7268u: goto label_1a7268;
            case 0x1A726Cu: goto label_1a726c;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7274u: goto label_1a7274;
            case 0x1A7278u: goto label_1a7278;
            case 0x1A727Cu: goto label_1a727c;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            case 0x1A7288u: goto label_1a7288;
            case 0x1A728Cu: goto label_1a728c;
            case 0x1A7290u: goto label_1a7290;
            case 0x1A7294u: goto label_1a7294;
            case 0x1A7298u: goto label_1a7298;
            case 0x1A729Cu: goto label_1a729c;
            case 0x1A72A0u: goto label_1a72a0;
            case 0x1A72A4u: goto label_1a72a4;
            case 0x1A72A8u: goto label_1a72a8;
            case 0x1A72ACu: goto label_1a72ac;
            case 0x1A72B0u: goto label_1a72b0;
            case 0x1A72B4u: goto label_1a72b4;
            case 0x1A72B8u: goto label_1a72b8;
            case 0x1A72BCu: goto label_1a72bc;
            case 0x1A72C0u: goto label_1a72c0;
            case 0x1A72C4u: goto label_1a72c4;
            case 0x1A72C8u: goto label_1a72c8;
            case 0x1A72CCu: goto label_1a72cc;
            case 0x1A72D0u: goto label_1a72d0;
            case 0x1A72D4u: goto label_1a72d4;
            case 0x1A72D8u: goto label_1a72d8;
            case 0x1A72DCu: goto label_1a72dc;
            case 0x1A72E0u: goto label_1a72e0;
            case 0x1A72E4u: goto label_1a72e4;
            case 0x1A72E8u: goto label_1a72e8;
            case 0x1A72ECu: goto label_1a72ec;
            case 0x1A72F0u: goto label_1a72f0;
            case 0x1A72F4u: goto label_1a72f4;
            case 0x1A72F8u: goto label_1a72f8;
            case 0x1A72FCu: goto label_1a72fc;
            case 0x1A7300u: goto label_1a7300;
            case 0x1A7304u: goto label_1a7304;
            case 0x1A7308u: goto label_1a7308;
            case 0x1A730Cu: goto label_1a730c;
            case 0x1A7310u: goto label_1a7310;
            case 0x1A7314u: goto label_1a7314;
            case 0x1A7318u: goto label_1a7318;
            case 0x1A731Cu: goto label_1a731c;
            case 0x1A7320u: goto label_1a7320;
            case 0x1A7324u: goto label_1a7324;
            case 0x1A7328u: goto label_1a7328;
            case 0x1A732Cu: goto label_1a732c;
            case 0x1A7330u: goto label_1a7330;
            case 0x1A7334u: goto label_1a7334;
            case 0x1A7338u: goto label_1a7338;
            case 0x1A733Cu: goto label_1a733c;
            case 0x1A7340u: goto label_1a7340;
            case 0x1A7344u: goto label_1a7344;
            case 0x1A7348u: goto label_1a7348;
            case 0x1A734Cu: goto label_1a734c;
            case 0x1A7350u: goto label_1a7350;
            case 0x1A7354u: goto label_1a7354;
            case 0x1A7358u: goto label_1a7358;
            case 0x1A735Cu: goto label_1a735c;
            case 0x1A7360u: goto label_1a7360;
            case 0x1A7364u: goto label_1a7364;
            case 0x1A7368u: goto label_1a7368;
            case 0x1A736Cu: goto label_1a736c;
            case 0x1A7370u: goto label_1a7370;
            case 0x1A7374u: goto label_1a7374;
            case 0x1A7378u: goto label_1a7378;
            case 0x1A737Cu: goto label_1a737c;
            case 0x1A7380u: goto label_1a7380;
            case 0x1A7384u: goto label_1a7384;
            case 0x1A7388u: goto label_1a7388;
            case 0x1A738Cu: goto label_1a738c;
            case 0x1A7390u: goto label_1a7390;
            case 0x1A7394u: goto label_1a7394;
            case 0x1A7398u: goto label_1a7398;
            case 0x1A739Cu: goto label_1a739c;
            case 0x1A73A0u: goto label_1a73a0;
            case 0x1A73A4u: goto label_1a73a4;
            case 0x1A73A8u: goto label_1a73a8;
            case 0x1A73ACu: goto label_1a73ac;
            case 0x1A73B0u: goto label_1a73b0;
            case 0x1A73B4u: goto label_1a73b4;
            case 0x1A73B8u: goto label_1a73b8;
            case 0x1A73BCu: goto label_1a73bc;
            case 0x1A73C0u: goto label_1a73c0;
            case 0x1A73C4u: goto label_1a73c4;
            case 0x1A73C8u: goto label_1a73c8;
            case 0x1A73CCu: goto label_1a73cc;
            case 0x1A73D0u: goto label_1a73d0;
            case 0x1A73D4u: goto label_1a73d4;
            case 0x1A73D8u: goto label_1a73d8;
            case 0x1A73DCu: goto label_1a73dc;
            case 0x1A73E0u: goto label_1a73e0;
            case 0x1A73E4u: goto label_1a73e4;
            case 0x1A73E8u: goto label_1a73e8;
            case 0x1A73ECu: goto label_1a73ec;
            case 0x1A73F0u: goto label_1a73f0;
            case 0x1A73F4u: goto label_1a73f4;
            case 0x1A73F8u: goto label_1a73f8;
            case 0x1A73FCu: goto label_1a73fc;
            case 0x1A7400u: goto label_1a7400;
            case 0x1A7404u: goto label_1a7404;
            case 0x1A7408u: goto label_1a7408;
            case 0x1A740Cu: goto label_1a740c;
            case 0x1A7410u: goto label_1a7410;
            case 0x1A7414u: goto label_1a7414;
            case 0x1A7418u: goto label_1a7418;
            case 0x1A741Cu: goto label_1a741c;
            case 0x1A7420u: goto label_1a7420;
            case 0x1A7424u: goto label_1a7424;
            case 0x1A7428u: goto label_1a7428;
            case 0x1A742Cu: goto label_1a742c;
            case 0x1A7430u: goto label_1a7430;
            case 0x1A7434u: goto label_1a7434;
            case 0x1A7438u: goto label_1a7438;
            case 0x1A743Cu: goto label_1a743c;
            case 0x1A7440u: goto label_1a7440;
            case 0x1A7444u: goto label_1a7444;
            case 0x1A7448u: goto label_1a7448;
            case 0x1A744Cu: goto label_1a744c;
            case 0x1A7450u: goto label_1a7450;
            case 0x1A7454u: goto label_1a7454;
            case 0x1A7458u: goto label_1a7458;
            case 0x1A745Cu: goto label_1a745c;
            case 0x1A7460u: goto label_1a7460;
            case 0x1A7464u: goto label_1a7464;
            case 0x1A7468u: goto label_1a7468;
            case 0x1A746Cu: goto label_1a746c;
            case 0x1A7470u: goto label_1a7470;
            case 0x1A7474u: goto label_1a7474;
            case 0x1A7478u: goto label_1a7478;
            case 0x1A747Cu: goto label_1a747c;
            case 0x1A7480u: goto label_1a7480;
            case 0x1A7484u: goto label_1a7484;
            case 0x1A7488u: goto label_1a7488;
            case 0x1A748Cu: goto label_1a748c;
            case 0x1A7490u: goto label_1a7490;
            case 0x1A7494u: goto label_1a7494;
            case 0x1A7498u: goto label_1a7498;
            case 0x1A749Cu: goto label_1a749c;
            case 0x1A74A0u: goto label_1a74a0;
            case 0x1A74A4u: goto label_1a74a4;
            case 0x1A74A8u: goto label_1a74a8;
            case 0x1A74ACu: goto label_1a74ac;
            case 0x1A74B0u: goto label_1a74b0;
            case 0x1A74B4u: goto label_1a74b4;
            case 0x1A74B8u: goto label_1a74b8;
            case 0x1A74BCu: goto label_1a74bc;
            case 0x1A74C0u: goto label_1a74c0;
            case 0x1A74C4u: goto label_1a74c4;
            case 0x1A74C8u: goto label_1a74c8;
            case 0x1A74CCu: goto label_1a74cc;
            case 0x1A74D0u: goto label_1a74d0;
            case 0x1A74D4u: goto label_1a74d4;
            case 0x1A74D8u: goto label_1a74d8;
            case 0x1A74DCu: goto label_1a74dc;
            case 0x1A74E0u: goto label_1a74e0;
            case 0x1A74E4u: goto label_1a74e4;
            case 0x1A74E8u: goto label_1a74e8;
            case 0x1A74ECu: goto label_1a74ec;
            case 0x1A74F0u: goto label_1a74f0;
            case 0x1A74F4u: goto label_1a74f4;
            case 0x1A74F8u: goto label_1a74f8;
            case 0x1A74FCu: goto label_1a74fc;
            case 0x1A7500u: goto label_1a7500;
            case 0x1A7504u: goto label_1a7504;
            case 0x1A7508u: goto label_1a7508;
            case 0x1A750Cu: goto label_1a750c;
            case 0x1A7510u: goto label_1a7510;
            case 0x1A7514u: goto label_1a7514;
            case 0x1A7518u: goto label_1a7518;
            case 0x1A751Cu: goto label_1a751c;
            case 0x1A7520u: goto label_1a7520;
            case 0x1A7524u: goto label_1a7524;
            case 0x1A7528u: goto label_1a7528;
            case 0x1A752Cu: goto label_1a752c;
            case 0x1A7530u: goto label_1a7530;
            case 0x1A7534u: goto label_1a7534;
            case 0x1A7538u: goto label_1a7538;
            case 0x1A753Cu: goto label_1a753c;
            case 0x1A7540u: goto label_1a7540;
            case 0x1A7544u: goto label_1a7544;
            case 0x1A7548u: goto label_1a7548;
            case 0x1A754Cu: goto label_1a754c;
            case 0x1A7550u: goto label_1a7550;
            case 0x1A7554u: goto label_1a7554;
            case 0x1A7558u: goto label_1a7558;
            case 0x1A755Cu: goto label_1a755c;
            case 0x1A7560u: goto label_1a7560;
            case 0x1A7564u: goto label_1a7564;
            case 0x1A7568u: goto label_1a7568;
            case 0x1A756Cu: goto label_1a756c;
            case 0x1A7570u: goto label_1a7570;
            case 0x1A7574u: goto label_1a7574;
            case 0x1A7578u: goto label_1a7578;
            case 0x1A757Cu: goto label_1a757c;
            case 0x1A7580u: goto label_1a7580;
            case 0x1A7584u: goto label_1a7584;
            case 0x1A7588u: goto label_1a7588;
            case 0x1A758Cu: goto label_1a758c;
            case 0x1A7590u: goto label_1a7590;
            case 0x1A7594u: goto label_1a7594;
            case 0x1A7598u: goto label_1a7598;
            case 0x1A759Cu: goto label_1a759c;
            case 0x1A75A0u: goto label_1a75a0;
            case 0x1A75A4u: goto label_1a75a4;
            case 0x1A75A8u: goto label_1a75a8;
            case 0x1A75ACu: goto label_1a75ac;
            case 0x1A75B0u: goto label_1a75b0;
            case 0x1A75B4u: goto label_1a75b4;
            case 0x1A75B8u: goto label_1a75b8;
            case 0x1A75BCu: goto label_1a75bc;
            case 0x1A75C0u: goto label_1a75c0;
            case 0x1A75C4u: goto label_1a75c4;
            case 0x1A75C8u: goto label_1a75c8;
            case 0x1A75CCu: goto label_1a75cc;
            case 0x1A75D0u: goto label_1a75d0;
            case 0x1A75D4u: goto label_1a75d4;
            case 0x1A75D8u: goto label_1a75d8;
            case 0x1A75DCu: goto label_1a75dc;
            case 0x1A75E0u: goto label_1a75e0;
            case 0x1A75E4u: goto label_1a75e4;
            case 0x1A75E8u: goto label_1a75e8;
            case 0x1A75ECu: goto label_1a75ec;
            case 0x1A75F0u: goto label_1a75f0;
            case 0x1A75F4u: goto label_1a75f4;
            case 0x1A75F8u: goto label_1a75f8;
            case 0x1A75FCu: goto label_1a75fc;
            case 0x1A7600u: goto label_1a7600;
            case 0x1A7604u: goto label_1a7604;
            case 0x1A7608u: goto label_1a7608;
            case 0x1A760Cu: goto label_1a760c;
            case 0x1A7610u: goto label_1a7610;
            case 0x1A7614u: goto label_1a7614;
            case 0x1A7618u: goto label_1a7618;
            case 0x1A761Cu: goto label_1a761c;
            case 0x1A7620u: goto label_1a7620;
            case 0x1A7624u: goto label_1a7624;
            case 0x1A7628u: goto label_1a7628;
            case 0x1A762Cu: goto label_1a762c;
            case 0x1A7630u: goto label_1a7630;
            case 0x1A7634u: goto label_1a7634;
            case 0x1A7638u: goto label_1a7638;
            case 0x1A763Cu: goto label_1a763c;
            case 0x1A7640u: goto label_1a7640;
            case 0x1A7644u: goto label_1a7644;
            case 0x1A7648u: goto label_1a7648;
            case 0x1A764Cu: goto label_1a764c;
            case 0x1A7650u: goto label_1a7650;
            case 0x1A7654u: goto label_1a7654;
            case 0x1A7658u: goto label_1a7658;
            case 0x1A765Cu: goto label_1a765c;
            case 0x1A7660u: goto label_1a7660;
            case 0x1A7664u: goto label_1a7664;
            case 0x1A7668u: goto label_1a7668;
            case 0x1A766Cu: goto label_1a766c;
            case 0x1A7670u: goto label_1a7670;
            case 0x1A7674u: goto label_1a7674;
            case 0x1A7678u: goto label_1a7678;
            case 0x1A767Cu: goto label_1a767c;
            case 0x1A7680u: goto label_1a7680;
            case 0x1A7684u: goto label_1a7684;
            case 0x1A7688u: goto label_1a7688;
            case 0x1A768Cu: goto label_1a768c;
            case 0x1A7690u: goto label_1a7690;
            case 0x1A7694u: goto label_1a7694;
            case 0x1A7698u: goto label_1a7698;
            case 0x1A769Cu: goto label_1a769c;
            case 0x1A76A0u: goto label_1a76a0;
            case 0x1A76A4u: goto label_1a76a4;
            case 0x1A76A8u: goto label_1a76a8;
            case 0x1A76ACu: goto label_1a76ac;
            case 0x1A76B0u: goto label_1a76b0;
            case 0x1A76B4u: goto label_1a76b4;
            case 0x1A76B8u: goto label_1a76b8;
            case 0x1A76BCu: goto label_1a76bc;
            case 0x1A76C0u: goto label_1a76c0;
            case 0x1A76C4u: goto label_1a76c4;
            case 0x1A76C8u: goto label_1a76c8;
            case 0x1A76CCu: goto label_1a76cc;
            case 0x1A76D0u: goto label_1a76d0;
            case 0x1A76D4u: goto label_1a76d4;
            case 0x1A76D8u: goto label_1a76d8;
            case 0x1A76DCu: goto label_1a76dc;
            case 0x1A76E0u: goto label_1a76e0;
            case 0x1A76E4u: goto label_1a76e4;
            case 0x1A76E8u: goto label_1a76e8;
            case 0x1A76ECu: goto label_1a76ec;
            case 0x1A76F0u: goto label_1a76f0;
            case 0x1A76F4u: goto label_1a76f4;
            case 0x1A76F8u: goto label_1a76f8;
            case 0x1A76FCu: goto label_1a76fc;
            case 0x1A7700u: goto label_1a7700;
            case 0x1A7704u: goto label_1a7704;
            case 0x1A7708u: goto label_1a7708;
            case 0x1A770Cu: goto label_1a770c;
            case 0x1A7710u: goto label_1a7710;
            case 0x1A7714u: goto label_1a7714;
            case 0x1A7718u: goto label_1a7718;
            case 0x1A771Cu: goto label_1a771c;
            case 0x1A7720u: goto label_1a7720;
            case 0x1A7724u: goto label_1a7724;
            case 0x1A7728u: goto label_1a7728;
            case 0x1A772Cu: goto label_1a772c;
            case 0x1A7730u: goto label_1a7730;
            case 0x1A7734u: goto label_1a7734;
            case 0x1A7738u: goto label_1a7738;
            case 0x1A773Cu: goto label_1a773c;
            case 0x1A7740u: goto label_1a7740;
            case 0x1A7744u: goto label_1a7744;
            case 0x1A7748u: goto label_1a7748;
            case 0x1A774Cu: goto label_1a774c;
            case 0x1A7750u: goto label_1a7750;
            case 0x1A7754u: goto label_1a7754;
            case 0x1A7758u: goto label_1a7758;
            case 0x1A775Cu: goto label_1a775c;
            case 0x1A7760u: goto label_1a7760;
            case 0x1A7764u: goto label_1a7764;
            case 0x1A7768u: goto label_1a7768;
            case 0x1A776Cu: goto label_1a776c;
            case 0x1A7770u: goto label_1a7770;
            case 0x1A7774u: goto label_1a7774;
            case 0x1A7778u: goto label_1a7778;
            case 0x1A777Cu: goto label_1a777c;
            case 0x1A7780u: goto label_1a7780;
            case 0x1A7784u: goto label_1a7784;
            case 0x1A7788u: goto label_1a7788;
            case 0x1A778Cu: goto label_1a778c;
            case 0x1A7790u: goto label_1a7790;
            case 0x1A7794u: goto label_1a7794;
            case 0x1A7798u: goto label_1a7798;
            case 0x1A779Cu: goto label_1a779c;
            case 0x1A77A0u: goto label_1a77a0;
            case 0x1A77A4u: goto label_1a77a4;
            case 0x1A77A8u: goto label_1a77a8;
            case 0x1A77ACu: goto label_1a77ac;
            case 0x1A77B0u: goto label_1a77b0;
            case 0x1A77B4u: goto label_1a77b4;
            case 0x1A77B8u: goto label_1a77b8;
            case 0x1A77BCu: goto label_1a77bc;
            case 0x1A77C0u: goto label_1a77c0;
            case 0x1A77C4u: goto label_1a77c4;
            case 0x1A77C8u: goto label_1a77c8;
            case 0x1A77CCu: goto label_1a77cc;
            case 0x1A77D0u: goto label_1a77d0;
            case 0x1A77D4u: goto label_1a77d4;
            case 0x1A77D8u: goto label_1a77d8;
            case 0x1A77DCu: goto label_1a77dc;
            case 0x1A77E0u: goto label_1a77e0;
            case 0x1A77E4u: goto label_1a77e4;
            case 0x1A77E8u: goto label_1a77e8;
            case 0x1A77ECu: goto label_1a77ec;
            case 0x1A77F0u: goto label_1a77f0;
            case 0x1A77F4u: goto label_1a77f4;
            case 0x1A77F8u: goto label_1a77f8;
            case 0x1A77FCu: goto label_1a77fc;
            case 0x1A7800u: goto label_1a7800;
            case 0x1A7804u: goto label_1a7804;
            case 0x1A7808u: goto label_1a7808;
            case 0x1A780Cu: goto label_1a780c;
            case 0x1A7810u: goto label_1a7810;
            case 0x1A7814u: goto label_1a7814;
            case 0x1A7818u: goto label_1a7818;
            case 0x1A781Cu: goto label_1a781c;
            case 0x1A7820u: goto label_1a7820;
            case 0x1A7824u: goto label_1a7824;
            case 0x1A7828u: goto label_1a7828;
            case 0x1A782Cu: goto label_1a782c;
            case 0x1A7830u: goto label_1a7830;
            case 0x1A7834u: goto label_1a7834;
            case 0x1A7838u: goto label_1a7838;
            case 0x1A783Cu: goto label_1a783c;
            case 0x1A7840u: goto label_1a7840;
            case 0x1A7844u: goto label_1a7844;
            case 0x1A7848u: goto label_1a7848;
            case 0x1A784Cu: goto label_1a784c;
            case 0x1A7850u: goto label_1a7850;
            case 0x1A7854u: goto label_1a7854;
            case 0x1A7858u: goto label_1a7858;
            case 0x1A785Cu: goto label_1a785c;
            case 0x1A7860u: goto label_1a7860;
            case 0x1A7864u: goto label_1a7864;
            case 0x1A7868u: goto label_1a7868;
            case 0x1A786Cu: goto label_1a786c;
            case 0x1A7870u: goto label_1a7870;
            case 0x1A7874u: goto label_1a7874;
            case 0x1A7878u: goto label_1a7878;
            case 0x1A787Cu: goto label_1a787c;
            case 0x1A7880u: goto label_1a7880;
            case 0x1A7884u: goto label_1a7884;
            case 0x1A7888u: goto label_1a7888;
            case 0x1A788Cu: goto label_1a788c;
            case 0x1A7890u: goto label_1a7890;
            case 0x1A7894u: goto label_1a7894;
            case 0x1A7898u: goto label_1a7898;
            case 0x1A789Cu: goto label_1a789c;
            case 0x1A78A0u: goto label_1a78a0;
            case 0x1A78A4u: goto label_1a78a4;
            case 0x1A78A8u: goto label_1a78a8;
            case 0x1A78ACu: goto label_1a78ac;
            case 0x1A78B0u: goto label_1a78b0;
            case 0x1A78B4u: goto label_1a78b4;
            case 0x1A78B8u: goto label_1a78b8;
            case 0x1A78BCu: goto label_1a78bc;
            case 0x1A78C0u: goto label_1a78c0;
            case 0x1A78C4u: goto label_1a78c4;
            case 0x1A78C8u: goto label_1a78c8;
            case 0x1A78CCu: goto label_1a78cc;
            case 0x1A78D0u: goto label_1a78d0;
            case 0x1A78D4u: goto label_1a78d4;
            case 0x1A78D8u: goto label_1a78d8;
            case 0x1A78DCu: goto label_1a78dc;
            case 0x1A78E0u: goto label_1a78e0;
            case 0x1A78E4u: goto label_1a78e4;
            case 0x1A78E8u: goto label_1a78e8;
            case 0x1A78ECu: goto label_1a78ec;
            case 0x1A78F0u: goto label_1a78f0;
            case 0x1A78F4u: goto label_1a78f4;
            case 0x1A78F8u: goto label_1a78f8;
            case 0x1A78FCu: goto label_1a78fc;
            case 0x1A7900u: goto label_1a7900;
            case 0x1A7904u: goto label_1a7904;
            case 0x1A7908u: goto label_1a7908;
            case 0x1A790Cu: goto label_1a790c;
            case 0x1A7910u: goto label_1a7910;
            case 0x1A7914u: goto label_1a7914;
            case 0x1A7918u: goto label_1a7918;
            case 0x1A791Cu: goto label_1a791c;
            case 0x1A7920u: goto label_1a7920;
            case 0x1A7924u: goto label_1a7924;
            case 0x1A7928u: goto label_1a7928;
            case 0x1A792Cu: goto label_1a792c;
            case 0x1A7930u: goto label_1a7930;
            case 0x1A7934u: goto label_1a7934;
            case 0x1A7938u: goto label_1a7938;
            case 0x1A793Cu: goto label_1a793c;
            case 0x1A7940u: goto label_1a7940;
            case 0x1A7944u: goto label_1a7944;
            case 0x1A7948u: goto label_1a7948;
            case 0x1A794Cu: goto label_1a794c;
            case 0x1A7950u: goto label_1a7950;
            case 0x1A7954u: goto label_1a7954;
            case 0x1A7958u: goto label_1a7958;
            case 0x1A795Cu: goto label_1a795c;
            case 0x1A7960u: goto label_1a7960;
            case 0x1A7964u: goto label_1a7964;
            case 0x1A7968u: goto label_1a7968;
            case 0x1A796Cu: goto label_1a796c;
            case 0x1A7970u: goto label_1a7970;
            case 0x1A7974u: goto label_1a7974;
            case 0x1A7978u: goto label_1a7978;
            case 0x1A797Cu: goto label_1a797c;
            case 0x1A7980u: goto label_1a7980;
            case 0x1A7984u: goto label_1a7984;
            case 0x1A7988u: goto label_1a7988;
            case 0x1A798Cu: goto label_1a798c;
            case 0x1A7990u: goto label_1a7990;
            case 0x1A7994u: goto label_1a7994;
            case 0x1A7998u: goto label_1a7998;
            case 0x1A799Cu: goto label_1a799c;
            case 0x1A79A0u: goto label_1a79a0;
            case 0x1A79A4u: goto label_1a79a4;
            case 0x1A79A8u: goto label_1a79a8;
            case 0x1A79ACu: goto label_1a79ac;
            case 0x1A79B0u: goto label_1a79b0;
            case 0x1A79B4u: goto label_1a79b4;
            case 0x1A79B8u: goto label_1a79b8;
            case 0x1A79BCu: goto label_1a79bc;
            case 0x1A79C0u: goto label_1a79c0;
            case 0x1A79C4u: goto label_1a79c4;
            case 0x1A79C8u: goto label_1a79c8;
            case 0x1A79CCu: goto label_1a79cc;
            case 0x1A79D0u: goto label_1a79d0;
            case 0x1A79D4u: goto label_1a79d4;
            case 0x1A79D8u: goto label_1a79d8;
            case 0x1A79DCu: goto label_1a79dc;
            case 0x1A79E0u: goto label_1a79e0;
            case 0x1A79E4u: goto label_1a79e4;
            case 0x1A79E8u: goto label_1a79e8;
            case 0x1A79ECu: goto label_1a79ec;
            case 0x1A79F0u: goto label_1a79f0;
            case 0x1A79F4u: goto label_1a79f4;
            case 0x1A79F8u: goto label_1a79f8;
            case 0x1A79FCu: goto label_1a79fc;
            case 0x1A7A00u: goto label_1a7a00;
            case 0x1A7A04u: goto label_1a7a04;
            case 0x1A7A08u: goto label_1a7a08;
            case 0x1A7A0Cu: goto label_1a7a0c;
            case 0x1A7A10u: goto label_1a7a10;
            case 0x1A7A14u: goto label_1a7a14;
            case 0x1A7A18u: goto label_1a7a18;
            case 0x1A7A1Cu: goto label_1a7a1c;
            case 0x1A7A20u: goto label_1a7a20;
            case 0x1A7A24u: goto label_1a7a24;
            case 0x1A7A28u: goto label_1a7a28;
            case 0x1A7A2Cu: goto label_1a7a2c;
            case 0x1A7A30u: goto label_1a7a30;
            case 0x1A7A34u: goto label_1a7a34;
            case 0x1A7A38u: goto label_1a7a38;
            case 0x1A7A3Cu: goto label_1a7a3c;
            case 0x1A7A40u: goto label_1a7a40;
            case 0x1A7A44u: goto label_1a7a44;
            case 0x1A7A48u: goto label_1a7a48;
            case 0x1A7A4Cu: goto label_1a7a4c;
            case 0x1A7A50u: goto label_1a7a50;
            case 0x1A7A54u: goto label_1a7a54;
            case 0x1A7A58u: goto label_1a7a58;
            case 0x1A7A5Cu: goto label_1a7a5c;
            case 0x1A7A60u: goto label_1a7a60;
            case 0x1A7A64u: goto label_1a7a64;
            case 0x1A7A68u: goto label_1a7a68;
            case 0x1A7A6Cu: goto label_1a7a6c;
            case 0x1A7A70u: goto label_1a7a70;
            case 0x1A7A74u: goto label_1a7a74;
            case 0x1A7A78u: goto label_1a7a78;
            case 0x1A7A7Cu: goto label_1a7a7c;
            case 0x1A7A80u: goto label_1a7a80;
            case 0x1A7A84u: goto label_1a7a84;
            case 0x1A7A88u: goto label_1a7a88;
            case 0x1A7A8Cu: goto label_1a7a8c;
            case 0x1A7A90u: goto label_1a7a90;
            case 0x1A7A94u: goto label_1a7a94;
            case 0x1A7A98u: goto label_1a7a98;
            case 0x1A7A9Cu: goto label_1a7a9c;
            case 0x1A7AA0u: goto label_1a7aa0;
            case 0x1A7AA4u: goto label_1a7aa4;
            case 0x1A7AA8u: goto label_1a7aa8;
            case 0x1A7AACu: goto label_1a7aac;
            case 0x1A7AB0u: goto label_1a7ab0;
            case 0x1A7AB4u: goto label_1a7ab4;
            case 0x1A7AB8u: goto label_1a7ab8;
            case 0x1A7ABCu: goto label_1a7abc;
            case 0x1A7AC0u: goto label_1a7ac0;
            case 0x1A7AC4u: goto label_1a7ac4;
            case 0x1A7AC8u: goto label_1a7ac8;
            case 0x1A7ACCu: goto label_1a7acc;
            case 0x1A7AD0u: goto label_1a7ad0;
            case 0x1A7AD4u: goto label_1a7ad4;
            case 0x1A7AD8u: goto label_1a7ad8;
            case 0x1A7ADCu: goto label_1a7adc;
            case 0x1A7AE0u: goto label_1a7ae0;
            case 0x1A7AE4u: goto label_1a7ae4;
            case 0x1A7AE8u: goto label_1a7ae8;
            case 0x1A7AECu: goto label_1a7aec;
            case 0x1A7AF0u: goto label_1a7af0;
            case 0x1A7AF4u: goto label_1a7af4;
            case 0x1A7AF8u: goto label_1a7af8;
            case 0x1A7AFCu: goto label_1a7afc;
            case 0x1A7B00u: goto label_1a7b00;
            case 0x1A7B04u: goto label_1a7b04;
            case 0x1A7B08u: goto label_1a7b08;
            case 0x1A7B0Cu: goto label_1a7b0c;
            case 0x1A7B10u: goto label_1a7b10;
            case 0x1A7B14u: goto label_1a7b14;
            case 0x1A7B18u: goto label_1a7b18;
            case 0x1A7B1Cu: goto label_1a7b1c;
            case 0x1A7B20u: goto label_1a7b20;
            case 0x1A7B24u: goto label_1a7b24;
            case 0x1A7B28u: goto label_1a7b28;
            case 0x1A7B2Cu: goto label_1a7b2c;
            case 0x1A7B30u: goto label_1a7b30;
            case 0x1A7B34u: goto label_1a7b34;
            case 0x1A7B38u: goto label_1a7b38;
            case 0x1A7B3Cu: goto label_1a7b3c;
            case 0x1A7B40u: goto label_1a7b40;
            case 0x1A7B44u: goto label_1a7b44;
            case 0x1A7B48u: goto label_1a7b48;
            case 0x1A7B4Cu: goto label_1a7b4c;
            case 0x1A7B50u: goto label_1a7b50;
            case 0x1A7B54u: goto label_1a7b54;
            case 0x1A7B58u: goto label_1a7b58;
            case 0x1A7B5Cu: goto label_1a7b5c;
            case 0x1A7B60u: goto label_1a7b60;
            case 0x1A7B64u: goto label_1a7b64;
            case 0x1A7B68u: goto label_1a7b68;
            case 0x1A7B6Cu: goto label_1a7b6c;
            case 0x1A7B70u: goto label_1a7b70;
            case 0x1A7B74u: goto label_1a7b74;
            case 0x1A7B78u: goto label_1a7b78;
            case 0x1A7B7Cu: goto label_1a7b7c;
            case 0x1A7B80u: goto label_1a7b80;
            case 0x1A7B84u: goto label_1a7b84;
            case 0x1A7B88u: goto label_1a7b88;
            case 0x1A7B8Cu: goto label_1a7b8c;
            case 0x1A7B90u: goto label_1a7b90;
            case 0x1A7B94u: goto label_1a7b94;
            case 0x1A7B98u: goto label_1a7b98;
            case 0x1A7B9Cu: goto label_1a7b9c;
            case 0x1A7BA0u: goto label_1a7ba0;
            case 0x1A7BA4u: goto label_1a7ba4;
            case 0x1A7BA8u: goto label_1a7ba8;
            case 0x1A7BACu: goto label_1a7bac;
            case 0x1A7BB0u: goto label_1a7bb0;
            case 0x1A7BB4u: goto label_1a7bb4;
            case 0x1A7BB8u: goto label_1a7bb8;
            case 0x1A7BBCu: goto label_1a7bbc;
            case 0x1A7BC0u: goto label_1a7bc0;
            case 0x1A7BC4u: goto label_1a7bc4;
            case 0x1A7BC8u: goto label_1a7bc8;
            case 0x1A7BCCu: goto label_1a7bcc;
            case 0x1A7BD0u: goto label_1a7bd0;
            case 0x1A7BD4u: goto label_1a7bd4;
            case 0x1A7BD8u: goto label_1a7bd8;
            case 0x1A7BDCu: goto label_1a7bdc;
            case 0x1A7BE0u: goto label_1a7be0;
            case 0x1A7BE4u: goto label_1a7be4;
            case 0x1A7BE8u: goto label_1a7be8;
            case 0x1A7BECu: goto label_1a7bec;
            case 0x1A7BF0u: goto label_1a7bf0;
            case 0x1A7BF4u: goto label_1a7bf4;
            case 0x1A7BF8u: goto label_1a7bf8;
            case 0x1A7BFCu: goto label_1a7bfc;
            case 0x1A7C00u: goto label_1a7c00;
            case 0x1A7C04u: goto label_1a7c04;
            case 0x1A7C08u: goto label_1a7c08;
            case 0x1A7C0Cu: goto label_1a7c0c;
            case 0x1A7C10u: goto label_1a7c10;
            case 0x1A7C14u: goto label_1a7c14;
            case 0x1A7C18u: goto label_1a7c18;
            case 0x1A7C1Cu: goto label_1a7c1c;
            case 0x1A7C20u: goto label_1a7c20;
            case 0x1A7C24u: goto label_1a7c24;
            case 0x1A7C28u: goto label_1a7c28;
            case 0x1A7C2Cu: goto label_1a7c2c;
            case 0x1A7C30u: goto label_1a7c30;
            case 0x1A7C34u: goto label_1a7c34;
            case 0x1A7C38u: goto label_1a7c38;
            case 0x1A7C3Cu: goto label_1a7c3c;
            case 0x1A7C40u: goto label_1a7c40;
            case 0x1A7C44u: goto label_1a7c44;
            case 0x1A7C48u: goto label_1a7c48;
            case 0x1A7C4Cu: goto label_1a7c4c;
            case 0x1A7C50u: goto label_1a7c50;
            case 0x1A7C54u: goto label_1a7c54;
            case 0x1A7C58u: goto label_1a7c58;
            case 0x1A7C5Cu: goto label_1a7c5c;
            case 0x1A7C60u: goto label_1a7c60;
            case 0x1A7C64u: goto label_1a7c64;
            case 0x1A7C68u: goto label_1a7c68;
            case 0x1A7C6Cu: goto label_1a7c6c;
            case 0x1A7C70u: goto label_1a7c70;
            case 0x1A7C74u: goto label_1a7c74;
            case 0x1A7C78u: goto label_1a7c78;
            case 0x1A7C7Cu: goto label_1a7c7c;
            case 0x1A7C80u: goto label_1a7c80;
            case 0x1A7C84u: goto label_1a7c84;
            case 0x1A7C88u: goto label_1a7c88;
            case 0x1A7C8Cu: goto label_1a7c8c;
            case 0x1A7C90u: goto label_1a7c90;
            case 0x1A7C94u: goto label_1a7c94;
            case 0x1A7C98u: goto label_1a7c98;
            case 0x1A7C9Cu: goto label_1a7c9c;
            case 0x1A7CA0u: goto label_1a7ca0;
            case 0x1A7CA4u: goto label_1a7ca4;
            case 0x1A7CA8u: goto label_1a7ca8;
            case 0x1A7CACu: goto label_1a7cac;
            case 0x1A7CB0u: goto label_1a7cb0;
            case 0x1A7CB4u: goto label_1a7cb4;
            case 0x1A7CB8u: goto label_1a7cb8;
            case 0x1A7CBCu: goto label_1a7cbc;
            case 0x1A7CC0u: goto label_1a7cc0;
            case 0x1A7CC4u: goto label_1a7cc4;
            case 0x1A7CC8u: goto label_1a7cc8;
            case 0x1A7CCCu: goto label_1a7ccc;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CD4u: goto label_1a7cd4;
            case 0x1A7CD8u: goto label_1a7cd8;
            case 0x1A7CDCu: goto label_1a7cdc;
            case 0x1A7CE0u: goto label_1a7ce0;
            case 0x1A7CE4u: goto label_1a7ce4;
            case 0x1A7CE8u: goto label_1a7ce8;
            case 0x1A7CECu: goto label_1a7cec;
            case 0x1A7CF0u: goto label_1a7cf0;
            case 0x1A7CF4u: goto label_1a7cf4;
            case 0x1A7CF8u: goto label_1a7cf8;
            case 0x1A7CFCu: goto label_1a7cfc;
            case 0x1A7D00u: goto label_1a7d00;
            case 0x1A7D04u: goto label_1a7d04;
            case 0x1A7D08u: goto label_1a7d08;
            case 0x1A7D0Cu: goto label_1a7d0c;
            case 0x1A7D10u: goto label_1a7d10;
            case 0x1A7D14u: goto label_1a7d14;
            case 0x1A7D18u: goto label_1a7d18;
            case 0x1A7D1Cu: goto label_1a7d1c;
            case 0x1A7D20u: goto label_1a7d20;
            case 0x1A7D24u: goto label_1a7d24;
            case 0x1A7D28u: goto label_1a7d28;
            case 0x1A7D2Cu: goto label_1a7d2c;
            case 0x1A7D30u: goto label_1a7d30;
            case 0x1A7D34u: goto label_1a7d34;
            case 0x1A7D38u: goto label_1a7d38;
            case 0x1A7D3Cu: goto label_1a7d3c;
            case 0x1A7D40u: goto label_1a7d40;
            case 0x1A7D44u: goto label_1a7d44;
            case 0x1A7D48u: goto label_1a7d48;
            case 0x1A7D4Cu: goto label_1a7d4c;
            case 0x1A7D50u: goto label_1a7d50;
            case 0x1A7D54u: goto label_1a7d54;
            case 0x1A7D58u: goto label_1a7d58;
            case 0x1A7D5Cu: goto label_1a7d5c;
            case 0x1A7D60u: goto label_1a7d60;
            case 0x1A7D64u: goto label_1a7d64;
            case 0x1A7D68u: goto label_1a7d68;
            case 0x1A7D6Cu: goto label_1a7d6c;
            case 0x1A7D70u: goto label_1a7d70;
            case 0x1A7D74u: goto label_1a7d74;
            case 0x1A7D78u: goto label_1a7d78;
            case 0x1A7D7Cu: goto label_1a7d7c;
            case 0x1A7D80u: goto label_1a7d80;
            case 0x1A7D84u: goto label_1a7d84;
            case 0x1A7D88u: goto label_1a7d88;
            case 0x1A7D8Cu: goto label_1a7d8c;
            case 0x1A7D90u: goto label_1a7d90;
            case 0x1A7D94u: goto label_1a7d94;
            case 0x1A7D98u: goto label_1a7d98;
            case 0x1A7D9Cu: goto label_1a7d9c;
            case 0x1A7DA0u: goto label_1a7da0;
            case 0x1A7DA4u: goto label_1a7da4;
            case 0x1A7DA8u: goto label_1a7da8;
            case 0x1A7DACu: goto label_1a7dac;
            case 0x1A7DB0u: goto label_1a7db0;
            case 0x1A7DB4u: goto label_1a7db4;
            case 0x1A7DB8u: goto label_1a7db8;
            case 0x1A7DBCu: goto label_1a7dbc;
            case 0x1A7DC0u: goto label_1a7dc0;
            case 0x1A7DC4u: goto label_1a7dc4;
            case 0x1A7DC8u: goto label_1a7dc8;
            case 0x1A7DCCu: goto label_1a7dcc;
            case 0x1A7DD0u: goto label_1a7dd0;
            case 0x1A7DD4u: goto label_1a7dd4;
            case 0x1A7DD8u: goto label_1a7dd8;
            case 0x1A7DDCu: goto label_1a7ddc;
            case 0x1A7DE0u: goto label_1a7de0;
            case 0x1A7DE4u: goto label_1a7de4;
            case 0x1A7DE8u: goto label_1a7de8;
            case 0x1A7DECu: goto label_1a7dec;
            case 0x1A7DF0u: goto label_1a7df0;
            case 0x1A7DF4u: goto label_1a7df4;
            case 0x1A7DF8u: goto label_1a7df8;
            case 0x1A7DFCu: goto label_1a7dfc;
            case 0x1A7E00u: goto label_1a7e00;
            case 0x1A7E04u: goto label_1a7e04;
            case 0x1A7E08u: goto label_1a7e08;
            case 0x1A7E0Cu: goto label_1a7e0c;
            case 0x1A7E10u: goto label_1a7e10;
            case 0x1A7E14u: goto label_1a7e14;
            case 0x1A7E18u: goto label_1a7e18;
            case 0x1A7E1Cu: goto label_1a7e1c;
            case 0x1A7E20u: goto label_1a7e20;
            case 0x1A7E24u: goto label_1a7e24;
            case 0x1A7E28u: goto label_1a7e28;
            case 0x1A7E2Cu: goto label_1a7e2c;
            case 0x1A7E30u: goto label_1a7e30;
            case 0x1A7E34u: goto label_1a7e34;
            case 0x1A7E38u: goto label_1a7e38;
            case 0x1A7E3Cu: goto label_1a7e3c;
            case 0x1A7E40u: goto label_1a7e40;
            case 0x1A7E44u: goto label_1a7e44;
            case 0x1A7E48u: goto label_1a7e48;
            case 0x1A7E4Cu: goto label_1a7e4c;
            case 0x1A7E50u: goto label_1a7e50;
            case 0x1A7E54u: goto label_1a7e54;
            case 0x1A7E58u: goto label_1a7e58;
            case 0x1A7E5Cu: goto label_1a7e5c;
            case 0x1A7E60u: goto label_1a7e60;
            case 0x1A7E64u: goto label_1a7e64;
            case 0x1A7E68u: goto label_1a7e68;
            case 0x1A7E6Cu: goto label_1a7e6c;
            case 0x1A7E70u: goto label_1a7e70;
            case 0x1A7E74u: goto label_1a7e74;
            case 0x1A7E78u: goto label_1a7e78;
            case 0x1A7E7Cu: goto label_1a7e7c;
            case 0x1A7E80u: goto label_1a7e80;
            case 0x1A7E84u: goto label_1a7e84;
            case 0x1A7E88u: goto label_1a7e88;
            case 0x1A7E8Cu: goto label_1a7e8c;
            case 0x1A7E90u: goto label_1a7e90;
            case 0x1A7E94u: goto label_1a7e94;
            case 0x1A7E98u: goto label_1a7e98;
            case 0x1A7E9Cu: goto label_1a7e9c;
            case 0x1A7EA0u: goto label_1a7ea0;
            case 0x1A7EA4u: goto label_1a7ea4;
            case 0x1A7EA8u: goto label_1a7ea8;
            case 0x1A7EACu: goto label_1a7eac;
            case 0x1A7EB0u: goto label_1a7eb0;
            case 0x1A7EB4u: goto label_1a7eb4;
            case 0x1A7EB8u: goto label_1a7eb8;
            case 0x1A7EBCu: goto label_1a7ebc;
            case 0x1A7EC0u: goto label_1a7ec0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E84u; }
            if (ctx->pc != 0x1A7E84u) { return; }
        }
    }
    ctx->pc = 0x1A7E84u;
label_1a7e84:
    // 0x1a7e84: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a7e88:
    if (ctx->pc == 0x1A7E88u) {
        ctx->pc = 0x1A7E8Cu;
        goto label_1a7e8c;
    }
    ctx->pc = 0x1A7E84u;
    {
        const bool branch_taken_0x1a7e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7e84) {
            ctx->pc = 0x1A7EB0u;
            goto label_1a7eb0;
        }
    }
    ctx->pc = 0x1A7E8Cu;
label_1a7e8c:
    // 0x1a7e8c: 0x0  nop
    ctx->pc = 0x1a7e8cu;
    // NOP
label_1a7e90:
    // 0x1a7e90: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a7e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_1a7e94:
    // 0x1a7e94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a7e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a7e98:
    // 0x1a7e98: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1a7e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1a7e9c:
    // 0x1a7e9c: 0x24c66990  addiu       $a2, $a2, 0x6990
    ctx->pc = 0x1a7e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27024));
label_1a7ea0:
    // 0x1a7ea0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a7ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ea4:
    // 0x1a7ea4: 0xc053ca4  jal         func_14F290
label_1a7ea8:
    if (ctx->pc == 0x1A7EA8u) {
        ctx->pc = 0x1A7EA8u;
            // 0x1a7ea8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EACu;
        goto label_1a7eac;
    }
    ctx->pc = 0x1A7EA4u;
    SET_GPR_U32(ctx, 31, 0x1A7EACu);
    ctx->pc = 0x1A7EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EA4u;
            // 0x1a7ea8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EACu; }
        if (ctx->pc != 0x1A7EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EACu; }
        if (ctx->pc != 0x1A7EACu) { return; }
    }
    ctx->pc = 0x1A7EACu;
label_1a7eac:
    // 0x1a7eac: 0x0  nop
    ctx->pc = 0x1a7eacu;
    // NOP
label_1a7eb0:
    // 0x1a7eb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7eb4:
    // 0x1a7eb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7eb8:
    // 0x1a7eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7ebc:
    // 0x1a7ebc: 0x3e00008  jr          $ra
label_1a7ec0:
    if (ctx->pc == 0x1A7EC0u) {
        ctx->pc = 0x1A7EC0u;
            // 0x1a7ec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1A7EC4u;
        goto label_fallthrough_0x1a7ebc;
    }
    ctx->pc = 0x1A7EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EBCu;
            // 0x1a7ec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C50u: goto label_1a6c50;
            case 0x1A6C54u: goto label_1a6c54;
            case 0x1A6C58u: goto label_1a6c58;
            case 0x1A6C5Cu: goto label_1a6c5c;
            case 0x1A6C60u: goto label_1a6c60;
            case 0x1A6C64u: goto label_1a6c64;
            case 0x1A6C68u: goto label_1a6c68;
            case 0x1A6C6Cu: goto label_1a6c6c;
            case 0x1A6C70u: goto label_1a6c70;
            case 0x1A6C74u: goto label_1a6c74;
            case 0x1A6C78u: goto label_1a6c78;
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6C80u: goto label_1a6c80;
            case 0x1A6C84u: goto label_1a6c84;
            case 0x1A6C88u: goto label_1a6c88;
            case 0x1A6C8Cu: goto label_1a6c8c;
            case 0x1A6C90u: goto label_1a6c90;
            case 0x1A6C94u: goto label_1a6c94;
            case 0x1A6C98u: goto label_1a6c98;
            case 0x1A6C9Cu: goto label_1a6c9c;
            case 0x1A6CA0u: goto label_1a6ca0;
            case 0x1A6CA4u: goto label_1a6ca4;
            case 0x1A6CA8u: goto label_1a6ca8;
            case 0x1A6CACu: goto label_1a6cac;
            case 0x1A6CB0u: goto label_1a6cb0;
            case 0x1A6CB4u: goto label_1a6cb4;
            case 0x1A6CB8u: goto label_1a6cb8;
            case 0x1A6CBCu: goto label_1a6cbc;
            case 0x1A6CC0u: goto label_1a6cc0;
            case 0x1A6CC4u: goto label_1a6cc4;
            case 0x1A6CC8u: goto label_1a6cc8;
            case 0x1A6CCCu: goto label_1a6ccc;
            case 0x1A6CD0u: goto label_1a6cd0;
            case 0x1A6CD4u: goto label_1a6cd4;
            case 0x1A6CD8u: goto label_1a6cd8;
            case 0x1A6CDCu: goto label_1a6cdc;
            case 0x1A6CE0u: goto label_1a6ce0;
            case 0x1A6CE4u: goto label_1a6ce4;
            case 0x1A6CE8u: goto label_1a6ce8;
            case 0x1A6CECu: goto label_1a6cec;
            case 0x1A6CF0u: goto label_1a6cf0;
            case 0x1A6CF4u: goto label_1a6cf4;
            case 0x1A6CF8u: goto label_1a6cf8;
            case 0x1A6CFCu: goto label_1a6cfc;
            case 0x1A6D00u: goto label_1a6d00;
            case 0x1A6D04u: goto label_1a6d04;
            case 0x1A6D08u: goto label_1a6d08;
            case 0x1A6D0Cu: goto label_1a6d0c;
            case 0x1A6D10u: goto label_1a6d10;
            case 0x1A6D14u: goto label_1a6d14;
            case 0x1A6D18u: goto label_1a6d18;
            case 0x1A6D1Cu: goto label_1a6d1c;
            case 0x1A6D20u: goto label_1a6d20;
            case 0x1A6D24u: goto label_1a6d24;
            case 0x1A6D28u: goto label_1a6d28;
            case 0x1A6D2Cu: goto label_1a6d2c;
            case 0x1A6D30u: goto label_1a6d30;
            case 0x1A6D34u: goto label_1a6d34;
            case 0x1A6D38u: goto label_1a6d38;
            case 0x1A6D3Cu: goto label_1a6d3c;
            case 0x1A6D40u: goto label_1a6d40;
            case 0x1A6D44u: goto label_1a6d44;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6D4Cu: goto label_1a6d4c;
            case 0x1A6D50u: goto label_1a6d50;
            case 0x1A6D54u: goto label_1a6d54;
            case 0x1A6D58u: goto label_1a6d58;
            case 0x1A6D5Cu: goto label_1a6d5c;
            case 0x1A6D60u: goto label_1a6d60;
            case 0x1A6D64u: goto label_1a6d64;
            case 0x1A6D68u: goto label_1a6d68;
            case 0x1A6D6Cu: goto label_1a6d6c;
            case 0x1A6D70u: goto label_1a6d70;
            case 0x1A6D74u: goto label_1a6d74;
            case 0x1A6D78u: goto label_1a6d78;
            case 0x1A6D7Cu: goto label_1a6d7c;
            case 0x1A6D80u: goto label_1a6d80;
            case 0x1A6D84u: goto label_1a6d84;
            case 0x1A6D88u: goto label_1a6d88;
            case 0x1A6D8Cu: goto label_1a6d8c;
            case 0x1A6D90u: goto label_1a6d90;
            case 0x1A6D94u: goto label_1a6d94;
            case 0x1A6D98u: goto label_1a6d98;
            case 0x1A6D9Cu: goto label_1a6d9c;
            case 0x1A6DA0u: goto label_1a6da0;
            case 0x1A6DA4u: goto label_1a6da4;
            case 0x1A6DA8u: goto label_1a6da8;
            case 0x1A6DACu: goto label_1a6dac;
            case 0x1A6DB0u: goto label_1a6db0;
            case 0x1A6DB4u: goto label_1a6db4;
            case 0x1A6DB8u: goto label_1a6db8;
            case 0x1A6DBCu: goto label_1a6dbc;
            case 0x1A6DC0u: goto label_1a6dc0;
            case 0x1A6DC4u: goto label_1a6dc4;
            case 0x1A6DC8u: goto label_1a6dc8;
            case 0x1A6DCCu: goto label_1a6dcc;
            case 0x1A6DD0u: goto label_1a6dd0;
            case 0x1A6DD4u: goto label_1a6dd4;
            case 0x1A6DD8u: goto label_1a6dd8;
            case 0x1A6DDCu: goto label_1a6ddc;
            case 0x1A6DE0u: goto label_1a6de0;
            case 0x1A6DE4u: goto label_1a6de4;
            case 0x1A6DE8u: goto label_1a6de8;
            case 0x1A6DECu: goto label_1a6dec;
            case 0x1A6DF0u: goto label_1a6df0;
            case 0x1A6DF4u: goto label_1a6df4;
            case 0x1A6DF8u: goto label_1a6df8;
            case 0x1A6DFCu: goto label_1a6dfc;
            case 0x1A6E00u: goto label_1a6e00;
            case 0x1A6E04u: goto label_1a6e04;
            case 0x1A6E08u: goto label_1a6e08;
            case 0x1A6E0Cu: goto label_1a6e0c;
            case 0x1A6E10u: goto label_1a6e10;
            case 0x1A6E14u: goto label_1a6e14;
            case 0x1A6E18u: goto label_1a6e18;
            case 0x1A6E1Cu: goto label_1a6e1c;
            case 0x1A6E20u: goto label_1a6e20;
            case 0x1A6E24u: goto label_1a6e24;
            case 0x1A6E28u: goto label_1a6e28;
            case 0x1A6E2Cu: goto label_1a6e2c;
            case 0x1A6E30u: goto label_1a6e30;
            case 0x1A6E34u: goto label_1a6e34;
            case 0x1A6E38u: goto label_1a6e38;
            case 0x1A6E3Cu: goto label_1a6e3c;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E44u: goto label_1a6e44;
            case 0x1A6E48u: goto label_1a6e48;
            case 0x1A6E4Cu: goto label_1a6e4c;
            case 0x1A6E50u: goto label_1a6e50;
            case 0x1A6E54u: goto label_1a6e54;
            case 0x1A6E58u: goto label_1a6e58;
            case 0x1A6E5Cu: goto label_1a6e5c;
            case 0x1A6E60u: goto label_1a6e60;
            case 0x1A6E64u: goto label_1a6e64;
            case 0x1A6E68u: goto label_1a6e68;
            case 0x1A6E6Cu: goto label_1a6e6c;
            case 0x1A6E70u: goto label_1a6e70;
            case 0x1A6E74u: goto label_1a6e74;
            case 0x1A6E78u: goto label_1a6e78;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6E80u: goto label_1a6e80;
            case 0x1A6E84u: goto label_1a6e84;
            case 0x1A6E88u: goto label_1a6e88;
            case 0x1A6E8Cu: goto label_1a6e8c;
            case 0x1A6E90u: goto label_1a6e90;
            case 0x1A6E94u: goto label_1a6e94;
            case 0x1A6E98u: goto label_1a6e98;
            case 0x1A6E9Cu: goto label_1a6e9c;
            case 0x1A6EA0u: goto label_1a6ea0;
            case 0x1A6EA4u: goto label_1a6ea4;
            case 0x1A6EA8u: goto label_1a6ea8;
            case 0x1A6EACu: goto label_1a6eac;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EB4u: goto label_1a6eb4;
            case 0x1A6EB8u: goto label_1a6eb8;
            case 0x1A6EBCu: goto label_1a6ebc;
            case 0x1A6EC0u: goto label_1a6ec0;
            case 0x1A6EC4u: goto label_1a6ec4;
            case 0x1A6EC8u: goto label_1a6ec8;
            case 0x1A6ECCu: goto label_1a6ecc;
            case 0x1A6ED0u: goto label_1a6ed0;
            case 0x1A6ED4u: goto label_1a6ed4;
            case 0x1A6ED8u: goto label_1a6ed8;
            case 0x1A6EDCu: goto label_1a6edc;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6EE4u: goto label_1a6ee4;
            case 0x1A6EE8u: goto label_1a6ee8;
            case 0x1A6EECu: goto label_1a6eec;
            case 0x1A6EF0u: goto label_1a6ef0;
            case 0x1A6EF4u: goto label_1a6ef4;
            case 0x1A6EF8u: goto label_1a6ef8;
            case 0x1A6EFCu: goto label_1a6efc;
            case 0x1A6F00u: goto label_1a6f00;
            case 0x1A6F04u: goto label_1a6f04;
            case 0x1A6F08u: goto label_1a6f08;
            case 0x1A6F0Cu: goto label_1a6f0c;
            case 0x1A6F10u: goto label_1a6f10;
            case 0x1A6F14u: goto label_1a6f14;
            case 0x1A6F18u: goto label_1a6f18;
            case 0x1A6F1Cu: goto label_1a6f1c;
            case 0x1A6F20u: goto label_1a6f20;
            case 0x1A6F24u: goto label_1a6f24;
            case 0x1A6F28u: goto label_1a6f28;
            case 0x1A6F2Cu: goto label_1a6f2c;
            case 0x1A6F30u: goto label_1a6f30;
            case 0x1A6F34u: goto label_1a6f34;
            case 0x1A6F38u: goto label_1a6f38;
            case 0x1A6F3Cu: goto label_1a6f3c;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F44u: goto label_1a6f44;
            case 0x1A6F48u: goto label_1a6f48;
            case 0x1A6F4Cu: goto label_1a6f4c;
            case 0x1A6F50u: goto label_1a6f50;
            case 0x1A6F54u: goto label_1a6f54;
            case 0x1A6F58u: goto label_1a6f58;
            case 0x1A6F5Cu: goto label_1a6f5c;
            case 0x1A6F60u: goto label_1a6f60;
            case 0x1A6F64u: goto label_1a6f64;
            case 0x1A6F68u: goto label_1a6f68;
            case 0x1A6F6Cu: goto label_1a6f6c;
            case 0x1A6F70u: goto label_1a6f70;
            case 0x1A6F74u: goto label_1a6f74;
            case 0x1A6F78u: goto label_1a6f78;
            case 0x1A6F7Cu: goto label_1a6f7c;
            case 0x1A6F80u: goto label_1a6f80;
            case 0x1A6F84u: goto label_1a6f84;
            case 0x1A6F88u: goto label_1a6f88;
            case 0x1A6F8Cu: goto label_1a6f8c;
            case 0x1A6F90u: goto label_1a6f90;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6F98u: goto label_1a6f98;
            case 0x1A6F9Cu: goto label_1a6f9c;
            case 0x1A6FA0u: goto label_1a6fa0;
            case 0x1A6FA4u: goto label_1a6fa4;
            case 0x1A6FA8u: goto label_1a6fa8;
            case 0x1A6FACu: goto label_1a6fac;
            case 0x1A6FB0u: goto label_1a6fb0;
            case 0x1A6FB4u: goto label_1a6fb4;
            case 0x1A6FB8u: goto label_1a6fb8;
            case 0x1A6FBCu: goto label_1a6fbc;
            case 0x1A6FC0u: goto label_1a6fc0;
            case 0x1A6FC4u: goto label_1a6fc4;
            case 0x1A6FC8u: goto label_1a6fc8;
            case 0x1A6FCCu: goto label_1a6fcc;
            case 0x1A6FD0u: goto label_1a6fd0;
            case 0x1A6FD4u: goto label_1a6fd4;
            case 0x1A6FD8u: goto label_1a6fd8;
            case 0x1A6FDCu: goto label_1a6fdc;
            case 0x1A6FE0u: goto label_1a6fe0;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FE8u: goto label_1a6fe8;
            case 0x1A6FECu: goto label_1a6fec;
            case 0x1A6FF0u: goto label_1a6ff0;
            case 0x1A6FF4u: goto label_1a6ff4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A6FFCu: goto label_1a6ffc;
            case 0x1A7000u: goto label_1a7000;
            case 0x1A7004u: goto label_1a7004;
            case 0x1A7008u: goto label_1a7008;
            case 0x1A700Cu: goto label_1a700c;
            case 0x1A7010u: goto label_1a7010;
            case 0x1A7014u: goto label_1a7014;
            case 0x1A7018u: goto label_1a7018;
            case 0x1A701Cu: goto label_1a701c;
            case 0x1A7020u: goto label_1a7020;
            case 0x1A7024u: goto label_1a7024;
            case 0x1A7028u: goto label_1a7028;
            case 0x1A702Cu: goto label_1a702c;
            case 0x1A7030u: goto label_1a7030;
            case 0x1A7034u: goto label_1a7034;
            case 0x1A7038u: goto label_1a7038;
            case 0x1A703Cu: goto label_1a703c;
            case 0x1A7040u: goto label_1a7040;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A7048u: goto label_1a7048;
            case 0x1A704Cu: goto label_1a704c;
            case 0x1A7050u: goto label_1a7050;
            case 0x1A7054u: goto label_1a7054;
            case 0x1A7058u: goto label_1a7058;
            case 0x1A705Cu: goto label_1a705c;
            case 0x1A7060u: goto label_1a7060;
            case 0x1A7064u: goto label_1a7064;
            case 0x1A7068u: goto label_1a7068;
            case 0x1A706Cu: goto label_1a706c;
            case 0x1A7070u: goto label_1a7070;
            case 0x1A7074u: goto label_1a7074;
            case 0x1A7078u: goto label_1a7078;
            case 0x1A707Cu: goto label_1a707c;
            case 0x1A7080u: goto label_1a7080;
            case 0x1A7084u: goto label_1a7084;
            case 0x1A7088u: goto label_1a7088;
            case 0x1A708Cu: goto label_1a708c;
            case 0x1A7090u: goto label_1a7090;
            case 0x1A7094u: goto label_1a7094;
            case 0x1A7098u: goto label_1a7098;
            case 0x1A709Cu: goto label_1a709c;
            case 0x1A70A0u: goto label_1a70a0;
            case 0x1A70A4u: goto label_1a70a4;
            case 0x1A70A8u: goto label_1a70a8;
            case 0x1A70ACu: goto label_1a70ac;
            case 0x1A70B0u: goto label_1a70b0;
            case 0x1A70B4u: goto label_1a70b4;
            case 0x1A70B8u: goto label_1a70b8;
            case 0x1A70BCu: goto label_1a70bc;
            case 0x1A70C0u: goto label_1a70c0;
            case 0x1A70C4u: goto label_1a70c4;
            case 0x1A70C8u: goto label_1a70c8;
            case 0x1A70CCu: goto label_1a70cc;
            case 0x1A70D0u: goto label_1a70d0;
            case 0x1A70D4u: goto label_1a70d4;
            case 0x1A70D8u: goto label_1a70d8;
            case 0x1A70DCu: goto label_1a70dc;
            case 0x1A70E0u: goto label_1a70e0;
            case 0x1A70E4u: goto label_1a70e4;
            case 0x1A70E8u: goto label_1a70e8;
            case 0x1A70ECu: goto label_1a70ec;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A70F4u: goto label_1a70f4;
            case 0x1A70F8u: goto label_1a70f8;
            case 0x1A70FCu: goto label_1a70fc;
            case 0x1A7100u: goto label_1a7100;
            case 0x1A7104u: goto label_1a7104;
            case 0x1A7108u: goto label_1a7108;
            case 0x1A710Cu: goto label_1a710c;
            case 0x1A7110u: goto label_1a7110;
            case 0x1A7114u: goto label_1a7114;
            case 0x1A7118u: goto label_1a7118;
            case 0x1A711Cu: goto label_1a711c;
            case 0x1A7120u: goto label_1a7120;
            case 0x1A7124u: goto label_1a7124;
            case 0x1A7128u: goto label_1a7128;
            case 0x1A712Cu: goto label_1a712c;
            case 0x1A7130u: goto label_1a7130;
            case 0x1A7134u: goto label_1a7134;
            case 0x1A7138u: goto label_1a7138;
            case 0x1A713Cu: goto label_1a713c;
            case 0x1A7140u: goto label_1a7140;
            case 0x1A7144u: goto label_1a7144;
            case 0x1A7148u: goto label_1a7148;
            case 0x1A714Cu: goto label_1a714c;
            case 0x1A7150u: goto label_1a7150;
            case 0x1A7154u: goto label_1a7154;
            case 0x1A7158u: goto label_1a7158;
            case 0x1A715Cu: goto label_1a715c;
            case 0x1A7160u: goto label_1a7160;
            case 0x1A7164u: goto label_1a7164;
            case 0x1A7168u: goto label_1a7168;
            case 0x1A716Cu: goto label_1a716c;
            case 0x1A7170u: goto label_1a7170;
            case 0x1A7174u: goto label_1a7174;
            case 0x1A7178u: goto label_1a7178;
            case 0x1A717Cu: goto label_1a717c;
            case 0x1A7180u: goto label_1a7180;
            case 0x1A7184u: goto label_1a7184;
            case 0x1A7188u: goto label_1a7188;
            case 0x1A718Cu: goto label_1a718c;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7194u: goto label_1a7194;
            case 0x1A7198u: goto label_1a7198;
            case 0x1A719Cu: goto label_1a719c;
            case 0x1A71A0u: goto label_1a71a0;
            case 0x1A71A4u: goto label_1a71a4;
            case 0x1A71A8u: goto label_1a71a8;
            case 0x1A71ACu: goto label_1a71ac;
            case 0x1A71B0u: goto label_1a71b0;
            case 0x1A71B4u: goto label_1a71b4;
            case 0x1A71B8u: goto label_1a71b8;
            case 0x1A71BCu: goto label_1a71bc;
            case 0x1A71C0u: goto label_1a71c0;
            case 0x1A71C4u: goto label_1a71c4;
            case 0x1A71C8u: goto label_1a71c8;
            case 0x1A71CCu: goto label_1a71cc;
            case 0x1A71D0u: goto label_1a71d0;
            case 0x1A71D4u: goto label_1a71d4;
            case 0x1A71D8u: goto label_1a71d8;
            case 0x1A71DCu: goto label_1a71dc;
            case 0x1A71E0u: goto label_1a71e0;
            case 0x1A71E4u: goto label_1a71e4;
            case 0x1A71E8u: goto label_1a71e8;
            case 0x1A71ECu: goto label_1a71ec;
            case 0x1A71F0u: goto label_1a71f0;
            case 0x1A71F4u: goto label_1a71f4;
            case 0x1A71F8u: goto label_1a71f8;
            case 0x1A71FCu: goto label_1a71fc;
            case 0x1A7200u: goto label_1a7200;
            case 0x1A7204u: goto label_1a7204;
            case 0x1A7208u: goto label_1a7208;
            case 0x1A720Cu: goto label_1a720c;
            case 0x1A7210u: goto label_1a7210;
            case 0x1A7214u: goto label_1a7214;
            case 0x1A7218u: goto label_1a7218;
            case 0x1A721Cu: goto label_1a721c;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7224u: goto label_1a7224;
            case 0x1A7228u: goto label_1a7228;
            case 0x1A722Cu: goto label_1a722c;
            case 0x1A7230u: goto label_1a7230;
            case 0x1A7234u: goto label_1a7234;
            case 0x1A7238u: goto label_1a7238;
            case 0x1A723Cu: goto label_1a723c;
            case 0x1A7240u: goto label_1a7240;
            case 0x1A7244u: goto label_1a7244;
            case 0x1A7248u: goto label_1a7248;
            case 0x1A724Cu: goto label_1a724c;
            case 0x1A7250u: goto label_1a7250;
            case 0x1A7254u: goto label_1a7254;
            case 0x1A7258u: goto label_1a7258;
            case 0x1A725Cu: goto label_1a725c;
            case 0x1A7260u: goto label_1a7260;
            case 0x1A7264u: goto label_1a7264;
            case 0x1A7268u: goto label_1a7268;
            case 0x1A726Cu: goto label_1a726c;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7274u: goto label_1a7274;
            case 0x1A7278u: goto label_1a7278;
            case 0x1A727Cu: goto label_1a727c;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            case 0x1A7288u: goto label_1a7288;
            case 0x1A728Cu: goto label_1a728c;
            case 0x1A7290u: goto label_1a7290;
            case 0x1A7294u: goto label_1a7294;
            case 0x1A7298u: goto label_1a7298;
            case 0x1A729Cu: goto label_1a729c;
            case 0x1A72A0u: goto label_1a72a0;
            case 0x1A72A4u: goto label_1a72a4;
            case 0x1A72A8u: goto label_1a72a8;
            case 0x1A72ACu: goto label_1a72ac;
            case 0x1A72B0u: goto label_1a72b0;
            case 0x1A72B4u: goto label_1a72b4;
            case 0x1A72B8u: goto label_1a72b8;
            case 0x1A72BCu: goto label_1a72bc;
            case 0x1A72C0u: goto label_1a72c0;
            case 0x1A72C4u: goto label_1a72c4;
            case 0x1A72C8u: goto label_1a72c8;
            case 0x1A72CCu: goto label_1a72cc;
            case 0x1A72D0u: goto label_1a72d0;
            case 0x1A72D4u: goto label_1a72d4;
            case 0x1A72D8u: goto label_1a72d8;
            case 0x1A72DCu: goto label_1a72dc;
            case 0x1A72E0u: goto label_1a72e0;
            case 0x1A72E4u: goto label_1a72e4;
            case 0x1A72E8u: goto label_1a72e8;
            case 0x1A72ECu: goto label_1a72ec;
            case 0x1A72F0u: goto label_1a72f0;
            case 0x1A72F4u: goto label_1a72f4;
            case 0x1A72F8u: goto label_1a72f8;
            case 0x1A72FCu: goto label_1a72fc;
            case 0x1A7300u: goto label_1a7300;
            case 0x1A7304u: goto label_1a7304;
            case 0x1A7308u: goto label_1a7308;
            case 0x1A730Cu: goto label_1a730c;
            case 0x1A7310u: goto label_1a7310;
            case 0x1A7314u: goto label_1a7314;
            case 0x1A7318u: goto label_1a7318;
            case 0x1A731Cu: goto label_1a731c;
            case 0x1A7320u: goto label_1a7320;
            case 0x1A7324u: goto label_1a7324;
            case 0x1A7328u: goto label_1a7328;
            case 0x1A732Cu: goto label_1a732c;
            case 0x1A7330u: goto label_1a7330;
            case 0x1A7334u: goto label_1a7334;
            case 0x1A7338u: goto label_1a7338;
            case 0x1A733Cu: goto label_1a733c;
            case 0x1A7340u: goto label_1a7340;
            case 0x1A7344u: goto label_1a7344;
            case 0x1A7348u: goto label_1a7348;
            case 0x1A734Cu: goto label_1a734c;
            case 0x1A7350u: goto label_1a7350;
            case 0x1A7354u: goto label_1a7354;
            case 0x1A7358u: goto label_1a7358;
            case 0x1A735Cu: goto label_1a735c;
            case 0x1A7360u: goto label_1a7360;
            case 0x1A7364u: goto label_1a7364;
            case 0x1A7368u: goto label_1a7368;
            case 0x1A736Cu: goto label_1a736c;
            case 0x1A7370u: goto label_1a7370;
            case 0x1A7374u: goto label_1a7374;
            case 0x1A7378u: goto label_1a7378;
            case 0x1A737Cu: goto label_1a737c;
            case 0x1A7380u: goto label_1a7380;
            case 0x1A7384u: goto label_1a7384;
            case 0x1A7388u: goto label_1a7388;
            case 0x1A738Cu: goto label_1a738c;
            case 0x1A7390u: goto label_1a7390;
            case 0x1A7394u: goto label_1a7394;
            case 0x1A7398u: goto label_1a7398;
            case 0x1A739Cu: goto label_1a739c;
            case 0x1A73A0u: goto label_1a73a0;
            case 0x1A73A4u: goto label_1a73a4;
            case 0x1A73A8u: goto label_1a73a8;
            case 0x1A73ACu: goto label_1a73ac;
            case 0x1A73B0u: goto label_1a73b0;
            case 0x1A73B4u: goto label_1a73b4;
            case 0x1A73B8u: goto label_1a73b8;
            case 0x1A73BCu: goto label_1a73bc;
            case 0x1A73C0u: goto label_1a73c0;
            case 0x1A73C4u: goto label_1a73c4;
            case 0x1A73C8u: goto label_1a73c8;
            case 0x1A73CCu: goto label_1a73cc;
            case 0x1A73D0u: goto label_1a73d0;
            case 0x1A73D4u: goto label_1a73d4;
            case 0x1A73D8u: goto label_1a73d8;
            case 0x1A73DCu: goto label_1a73dc;
            case 0x1A73E0u: goto label_1a73e0;
            case 0x1A73E4u: goto label_1a73e4;
            case 0x1A73E8u: goto label_1a73e8;
            case 0x1A73ECu: goto label_1a73ec;
            case 0x1A73F0u: goto label_1a73f0;
            case 0x1A73F4u: goto label_1a73f4;
            case 0x1A73F8u: goto label_1a73f8;
            case 0x1A73FCu: goto label_1a73fc;
            case 0x1A7400u: goto label_1a7400;
            case 0x1A7404u: goto label_1a7404;
            case 0x1A7408u: goto label_1a7408;
            case 0x1A740Cu: goto label_1a740c;
            case 0x1A7410u: goto label_1a7410;
            case 0x1A7414u: goto label_1a7414;
            case 0x1A7418u: goto label_1a7418;
            case 0x1A741Cu: goto label_1a741c;
            case 0x1A7420u: goto label_1a7420;
            case 0x1A7424u: goto label_1a7424;
            case 0x1A7428u: goto label_1a7428;
            case 0x1A742Cu: goto label_1a742c;
            case 0x1A7430u: goto label_1a7430;
            case 0x1A7434u: goto label_1a7434;
            case 0x1A7438u: goto label_1a7438;
            case 0x1A743Cu: goto label_1a743c;
            case 0x1A7440u: goto label_1a7440;
            case 0x1A7444u: goto label_1a7444;
            case 0x1A7448u: goto label_1a7448;
            case 0x1A744Cu: goto label_1a744c;
            case 0x1A7450u: goto label_1a7450;
            case 0x1A7454u: goto label_1a7454;
            case 0x1A7458u: goto label_1a7458;
            case 0x1A745Cu: goto label_1a745c;
            case 0x1A7460u: goto label_1a7460;
            case 0x1A7464u: goto label_1a7464;
            case 0x1A7468u: goto label_1a7468;
            case 0x1A746Cu: goto label_1a746c;
            case 0x1A7470u: goto label_1a7470;
            case 0x1A7474u: goto label_1a7474;
            case 0x1A7478u: goto label_1a7478;
            case 0x1A747Cu: goto label_1a747c;
            case 0x1A7480u: goto label_1a7480;
            case 0x1A7484u: goto label_1a7484;
            case 0x1A7488u: goto label_1a7488;
            case 0x1A748Cu: goto label_1a748c;
            case 0x1A7490u: goto label_1a7490;
            case 0x1A7494u: goto label_1a7494;
            case 0x1A7498u: goto label_1a7498;
            case 0x1A749Cu: goto label_1a749c;
            case 0x1A74A0u: goto label_1a74a0;
            case 0x1A74A4u: goto label_1a74a4;
            case 0x1A74A8u: goto label_1a74a8;
            case 0x1A74ACu: goto label_1a74ac;
            case 0x1A74B0u: goto label_1a74b0;
            case 0x1A74B4u: goto label_1a74b4;
            case 0x1A74B8u: goto label_1a74b8;
            case 0x1A74BCu: goto label_1a74bc;
            case 0x1A74C0u: goto label_1a74c0;
            case 0x1A74C4u: goto label_1a74c4;
            case 0x1A74C8u: goto label_1a74c8;
            case 0x1A74CCu: goto label_1a74cc;
            case 0x1A74D0u: goto label_1a74d0;
            case 0x1A74D4u: goto label_1a74d4;
            case 0x1A74D8u: goto label_1a74d8;
            case 0x1A74DCu: goto label_1a74dc;
            case 0x1A74E0u: goto label_1a74e0;
            case 0x1A74E4u: goto label_1a74e4;
            case 0x1A74E8u: goto label_1a74e8;
            case 0x1A74ECu: goto label_1a74ec;
            case 0x1A74F0u: goto label_1a74f0;
            case 0x1A74F4u: goto label_1a74f4;
            case 0x1A74F8u: goto label_1a74f8;
            case 0x1A74FCu: goto label_1a74fc;
            case 0x1A7500u: goto label_1a7500;
            case 0x1A7504u: goto label_1a7504;
            case 0x1A7508u: goto label_1a7508;
            case 0x1A750Cu: goto label_1a750c;
            case 0x1A7510u: goto label_1a7510;
            case 0x1A7514u: goto label_1a7514;
            case 0x1A7518u: goto label_1a7518;
            case 0x1A751Cu: goto label_1a751c;
            case 0x1A7520u: goto label_1a7520;
            case 0x1A7524u: goto label_1a7524;
            case 0x1A7528u: goto label_1a7528;
            case 0x1A752Cu: goto label_1a752c;
            case 0x1A7530u: goto label_1a7530;
            case 0x1A7534u: goto label_1a7534;
            case 0x1A7538u: goto label_1a7538;
            case 0x1A753Cu: goto label_1a753c;
            case 0x1A7540u: goto label_1a7540;
            case 0x1A7544u: goto label_1a7544;
            case 0x1A7548u: goto label_1a7548;
            case 0x1A754Cu: goto label_1a754c;
            case 0x1A7550u: goto label_1a7550;
            case 0x1A7554u: goto label_1a7554;
            case 0x1A7558u: goto label_1a7558;
            case 0x1A755Cu: goto label_1a755c;
            case 0x1A7560u: goto label_1a7560;
            case 0x1A7564u: goto label_1a7564;
            case 0x1A7568u: goto label_1a7568;
            case 0x1A756Cu: goto label_1a756c;
            case 0x1A7570u: goto label_1a7570;
            case 0x1A7574u: goto label_1a7574;
            case 0x1A7578u: goto label_1a7578;
            case 0x1A757Cu: goto label_1a757c;
            case 0x1A7580u: goto label_1a7580;
            case 0x1A7584u: goto label_1a7584;
            case 0x1A7588u: goto label_1a7588;
            case 0x1A758Cu: goto label_1a758c;
            case 0x1A7590u: goto label_1a7590;
            case 0x1A7594u: goto label_1a7594;
            case 0x1A7598u: goto label_1a7598;
            case 0x1A759Cu: goto label_1a759c;
            case 0x1A75A0u: goto label_1a75a0;
            case 0x1A75A4u: goto label_1a75a4;
            case 0x1A75A8u: goto label_1a75a8;
            case 0x1A75ACu: goto label_1a75ac;
            case 0x1A75B0u: goto label_1a75b0;
            case 0x1A75B4u: goto label_1a75b4;
            case 0x1A75B8u: goto label_1a75b8;
            case 0x1A75BCu: goto label_1a75bc;
            case 0x1A75C0u: goto label_1a75c0;
            case 0x1A75C4u: goto label_1a75c4;
            case 0x1A75C8u: goto label_1a75c8;
            case 0x1A75CCu: goto label_1a75cc;
            case 0x1A75D0u: goto label_1a75d0;
            case 0x1A75D4u: goto label_1a75d4;
            case 0x1A75D8u: goto label_1a75d8;
            case 0x1A75DCu: goto label_1a75dc;
            case 0x1A75E0u: goto label_1a75e0;
            case 0x1A75E4u: goto label_1a75e4;
            case 0x1A75E8u: goto label_1a75e8;
            case 0x1A75ECu: goto label_1a75ec;
            case 0x1A75F0u: goto label_1a75f0;
            case 0x1A75F4u: goto label_1a75f4;
            case 0x1A75F8u: goto label_1a75f8;
            case 0x1A75FCu: goto label_1a75fc;
            case 0x1A7600u: goto label_1a7600;
            case 0x1A7604u: goto label_1a7604;
            case 0x1A7608u: goto label_1a7608;
            case 0x1A760Cu: goto label_1a760c;
            case 0x1A7610u: goto label_1a7610;
            case 0x1A7614u: goto label_1a7614;
            case 0x1A7618u: goto label_1a7618;
            case 0x1A761Cu: goto label_1a761c;
            case 0x1A7620u: goto label_1a7620;
            case 0x1A7624u: goto label_1a7624;
            case 0x1A7628u: goto label_1a7628;
            case 0x1A762Cu: goto label_1a762c;
            case 0x1A7630u: goto label_1a7630;
            case 0x1A7634u: goto label_1a7634;
            case 0x1A7638u: goto label_1a7638;
            case 0x1A763Cu: goto label_1a763c;
            case 0x1A7640u: goto label_1a7640;
            case 0x1A7644u: goto label_1a7644;
            case 0x1A7648u: goto label_1a7648;
            case 0x1A764Cu: goto label_1a764c;
            case 0x1A7650u: goto label_1a7650;
            case 0x1A7654u: goto label_1a7654;
            case 0x1A7658u: goto label_1a7658;
            case 0x1A765Cu: goto label_1a765c;
            case 0x1A7660u: goto label_1a7660;
            case 0x1A7664u: goto label_1a7664;
            case 0x1A7668u: goto label_1a7668;
            case 0x1A766Cu: goto label_1a766c;
            case 0x1A7670u: goto label_1a7670;
            case 0x1A7674u: goto label_1a7674;
            case 0x1A7678u: goto label_1a7678;
            case 0x1A767Cu: goto label_1a767c;
            case 0x1A7680u: goto label_1a7680;
            case 0x1A7684u: goto label_1a7684;
            case 0x1A7688u: goto label_1a7688;
            case 0x1A768Cu: goto label_1a768c;
            case 0x1A7690u: goto label_1a7690;
            case 0x1A7694u: goto label_1a7694;
            case 0x1A7698u: goto label_1a7698;
            case 0x1A769Cu: goto label_1a769c;
            case 0x1A76A0u: goto label_1a76a0;
            case 0x1A76A4u: goto label_1a76a4;
            case 0x1A76A8u: goto label_1a76a8;
            case 0x1A76ACu: goto label_1a76ac;
            case 0x1A76B0u: goto label_1a76b0;
            case 0x1A76B4u: goto label_1a76b4;
            case 0x1A76B8u: goto label_1a76b8;
            case 0x1A76BCu: goto label_1a76bc;
            case 0x1A76C0u: goto label_1a76c0;
            case 0x1A76C4u: goto label_1a76c4;
            case 0x1A76C8u: goto label_1a76c8;
            case 0x1A76CCu: goto label_1a76cc;
            case 0x1A76D0u: goto label_1a76d0;
            case 0x1A76D4u: goto label_1a76d4;
            case 0x1A76D8u: goto label_1a76d8;
            case 0x1A76DCu: goto label_1a76dc;
            case 0x1A76E0u: goto label_1a76e0;
            case 0x1A76E4u: goto label_1a76e4;
            case 0x1A76E8u: goto label_1a76e8;
            case 0x1A76ECu: goto label_1a76ec;
            case 0x1A76F0u: goto label_1a76f0;
            case 0x1A76F4u: goto label_1a76f4;
            case 0x1A76F8u: goto label_1a76f8;
            case 0x1A76FCu: goto label_1a76fc;
            case 0x1A7700u: goto label_1a7700;
            case 0x1A7704u: goto label_1a7704;
            case 0x1A7708u: goto label_1a7708;
            case 0x1A770Cu: goto label_1a770c;
            case 0x1A7710u: goto label_1a7710;
            case 0x1A7714u: goto label_1a7714;
            case 0x1A7718u: goto label_1a7718;
            case 0x1A771Cu: goto label_1a771c;
            case 0x1A7720u: goto label_1a7720;
            case 0x1A7724u: goto label_1a7724;
            case 0x1A7728u: goto label_1a7728;
            case 0x1A772Cu: goto label_1a772c;
            case 0x1A7730u: goto label_1a7730;
            case 0x1A7734u: goto label_1a7734;
            case 0x1A7738u: goto label_1a7738;
            case 0x1A773Cu: goto label_1a773c;
            case 0x1A7740u: goto label_1a7740;
            case 0x1A7744u: goto label_1a7744;
            case 0x1A7748u: goto label_1a7748;
            case 0x1A774Cu: goto label_1a774c;
            case 0x1A7750u: goto label_1a7750;
            case 0x1A7754u: goto label_1a7754;
            case 0x1A7758u: goto label_1a7758;
            case 0x1A775Cu: goto label_1a775c;
            case 0x1A7760u: goto label_1a7760;
            case 0x1A7764u: goto label_1a7764;
            case 0x1A7768u: goto label_1a7768;
            case 0x1A776Cu: goto label_1a776c;
            case 0x1A7770u: goto label_1a7770;
            case 0x1A7774u: goto label_1a7774;
            case 0x1A7778u: goto label_1a7778;
            case 0x1A777Cu: goto label_1a777c;
            case 0x1A7780u: goto label_1a7780;
            case 0x1A7784u: goto label_1a7784;
            case 0x1A7788u: goto label_1a7788;
            case 0x1A778Cu: goto label_1a778c;
            case 0x1A7790u: goto label_1a7790;
            case 0x1A7794u: goto label_1a7794;
            case 0x1A7798u: goto label_1a7798;
            case 0x1A779Cu: goto label_1a779c;
            case 0x1A77A0u: goto label_1a77a0;
            case 0x1A77A4u: goto label_1a77a4;
            case 0x1A77A8u: goto label_1a77a8;
            case 0x1A77ACu: goto label_1a77ac;
            case 0x1A77B0u: goto label_1a77b0;
            case 0x1A77B4u: goto label_1a77b4;
            case 0x1A77B8u: goto label_1a77b8;
            case 0x1A77BCu: goto label_1a77bc;
            case 0x1A77C0u: goto label_1a77c0;
            case 0x1A77C4u: goto label_1a77c4;
            case 0x1A77C8u: goto label_1a77c8;
            case 0x1A77CCu: goto label_1a77cc;
            case 0x1A77D0u: goto label_1a77d0;
            case 0x1A77D4u: goto label_1a77d4;
            case 0x1A77D8u: goto label_1a77d8;
            case 0x1A77DCu: goto label_1a77dc;
            case 0x1A77E0u: goto label_1a77e0;
            case 0x1A77E4u: goto label_1a77e4;
            case 0x1A77E8u: goto label_1a77e8;
            case 0x1A77ECu: goto label_1a77ec;
            case 0x1A77F0u: goto label_1a77f0;
            case 0x1A77F4u: goto label_1a77f4;
            case 0x1A77F8u: goto label_1a77f8;
            case 0x1A77FCu: goto label_1a77fc;
            case 0x1A7800u: goto label_1a7800;
            case 0x1A7804u: goto label_1a7804;
            case 0x1A7808u: goto label_1a7808;
            case 0x1A780Cu: goto label_1a780c;
            case 0x1A7810u: goto label_1a7810;
            case 0x1A7814u: goto label_1a7814;
            case 0x1A7818u: goto label_1a7818;
            case 0x1A781Cu: goto label_1a781c;
            case 0x1A7820u: goto label_1a7820;
            case 0x1A7824u: goto label_1a7824;
            case 0x1A7828u: goto label_1a7828;
            case 0x1A782Cu: goto label_1a782c;
            case 0x1A7830u: goto label_1a7830;
            case 0x1A7834u: goto label_1a7834;
            case 0x1A7838u: goto label_1a7838;
            case 0x1A783Cu: goto label_1a783c;
            case 0x1A7840u: goto label_1a7840;
            case 0x1A7844u: goto label_1a7844;
            case 0x1A7848u: goto label_1a7848;
            case 0x1A784Cu: goto label_1a784c;
            case 0x1A7850u: goto label_1a7850;
            case 0x1A7854u: goto label_1a7854;
            case 0x1A7858u: goto label_1a7858;
            case 0x1A785Cu: goto label_1a785c;
            case 0x1A7860u: goto label_1a7860;
            case 0x1A7864u: goto label_1a7864;
            case 0x1A7868u: goto label_1a7868;
            case 0x1A786Cu: goto label_1a786c;
            case 0x1A7870u: goto label_1a7870;
            case 0x1A7874u: goto label_1a7874;
            case 0x1A7878u: goto label_1a7878;
            case 0x1A787Cu: goto label_1a787c;
            case 0x1A7880u: goto label_1a7880;
            case 0x1A7884u: goto label_1a7884;
            case 0x1A7888u: goto label_1a7888;
            case 0x1A788Cu: goto label_1a788c;
            case 0x1A7890u: goto label_1a7890;
            case 0x1A7894u: goto label_1a7894;
            case 0x1A7898u: goto label_1a7898;
            case 0x1A789Cu: goto label_1a789c;
            case 0x1A78A0u: goto label_1a78a0;
            case 0x1A78A4u: goto label_1a78a4;
            case 0x1A78A8u: goto label_1a78a8;
            case 0x1A78ACu: goto label_1a78ac;
            case 0x1A78B0u: goto label_1a78b0;
            case 0x1A78B4u: goto label_1a78b4;
            case 0x1A78B8u: goto label_1a78b8;
            case 0x1A78BCu: goto label_1a78bc;
            case 0x1A78C0u: goto label_1a78c0;
            case 0x1A78C4u: goto label_1a78c4;
            case 0x1A78C8u: goto label_1a78c8;
            case 0x1A78CCu: goto label_1a78cc;
            case 0x1A78D0u: goto label_1a78d0;
            case 0x1A78D4u: goto label_1a78d4;
            case 0x1A78D8u: goto label_1a78d8;
            case 0x1A78DCu: goto label_1a78dc;
            case 0x1A78E0u: goto label_1a78e0;
            case 0x1A78E4u: goto label_1a78e4;
            case 0x1A78E8u: goto label_1a78e8;
            case 0x1A78ECu: goto label_1a78ec;
            case 0x1A78F0u: goto label_1a78f0;
            case 0x1A78F4u: goto label_1a78f4;
            case 0x1A78F8u: goto label_1a78f8;
            case 0x1A78FCu: goto label_1a78fc;
            case 0x1A7900u: goto label_1a7900;
            case 0x1A7904u: goto label_1a7904;
            case 0x1A7908u: goto label_1a7908;
            case 0x1A790Cu: goto label_1a790c;
            case 0x1A7910u: goto label_1a7910;
            case 0x1A7914u: goto label_1a7914;
            case 0x1A7918u: goto label_1a7918;
            case 0x1A791Cu: goto label_1a791c;
            case 0x1A7920u: goto label_1a7920;
            case 0x1A7924u: goto label_1a7924;
            case 0x1A7928u: goto label_1a7928;
            case 0x1A792Cu: goto label_1a792c;
            case 0x1A7930u: goto label_1a7930;
            case 0x1A7934u: goto label_1a7934;
            case 0x1A7938u: goto label_1a7938;
            case 0x1A793Cu: goto label_1a793c;
            case 0x1A7940u: goto label_1a7940;
            case 0x1A7944u: goto label_1a7944;
            case 0x1A7948u: goto label_1a7948;
            case 0x1A794Cu: goto label_1a794c;
            case 0x1A7950u: goto label_1a7950;
            case 0x1A7954u: goto label_1a7954;
            case 0x1A7958u: goto label_1a7958;
            case 0x1A795Cu: goto label_1a795c;
            case 0x1A7960u: goto label_1a7960;
            case 0x1A7964u: goto label_1a7964;
            case 0x1A7968u: goto label_1a7968;
            case 0x1A796Cu: goto label_1a796c;
            case 0x1A7970u: goto label_1a7970;
            case 0x1A7974u: goto label_1a7974;
            case 0x1A7978u: goto label_1a7978;
            case 0x1A797Cu: goto label_1a797c;
            case 0x1A7980u: goto label_1a7980;
            case 0x1A7984u: goto label_1a7984;
            case 0x1A7988u: goto label_1a7988;
            case 0x1A798Cu: goto label_1a798c;
            case 0x1A7990u: goto label_1a7990;
            case 0x1A7994u: goto label_1a7994;
            case 0x1A7998u: goto label_1a7998;
            case 0x1A799Cu: goto label_1a799c;
            case 0x1A79A0u: goto label_1a79a0;
            case 0x1A79A4u: goto label_1a79a4;
            case 0x1A79A8u: goto label_1a79a8;
            case 0x1A79ACu: goto label_1a79ac;
            case 0x1A79B0u: goto label_1a79b0;
            case 0x1A79B4u: goto label_1a79b4;
            case 0x1A79B8u: goto label_1a79b8;
            case 0x1A79BCu: goto label_1a79bc;
            case 0x1A79C0u: goto label_1a79c0;
            case 0x1A79C4u: goto label_1a79c4;
            case 0x1A79C8u: goto label_1a79c8;
            case 0x1A79CCu: goto label_1a79cc;
            case 0x1A79D0u: goto label_1a79d0;
            case 0x1A79D4u: goto label_1a79d4;
            case 0x1A79D8u: goto label_1a79d8;
            case 0x1A79DCu: goto label_1a79dc;
            case 0x1A79E0u: goto label_1a79e0;
            case 0x1A79E4u: goto label_1a79e4;
            case 0x1A79E8u: goto label_1a79e8;
            case 0x1A79ECu: goto label_1a79ec;
            case 0x1A79F0u: goto label_1a79f0;
            case 0x1A79F4u: goto label_1a79f4;
            case 0x1A79F8u: goto label_1a79f8;
            case 0x1A79FCu: goto label_1a79fc;
            case 0x1A7A00u: goto label_1a7a00;
            case 0x1A7A04u: goto label_1a7a04;
            case 0x1A7A08u: goto label_1a7a08;
            case 0x1A7A0Cu: goto label_1a7a0c;
            case 0x1A7A10u: goto label_1a7a10;
            case 0x1A7A14u: goto label_1a7a14;
            case 0x1A7A18u: goto label_1a7a18;
            case 0x1A7A1Cu: goto label_1a7a1c;
            case 0x1A7A20u: goto label_1a7a20;
            case 0x1A7A24u: goto label_1a7a24;
            case 0x1A7A28u: goto label_1a7a28;
            case 0x1A7A2Cu: goto label_1a7a2c;
            case 0x1A7A30u: goto label_1a7a30;
            case 0x1A7A34u: goto label_1a7a34;
            case 0x1A7A38u: goto label_1a7a38;
            case 0x1A7A3Cu: goto label_1a7a3c;
            case 0x1A7A40u: goto label_1a7a40;
            case 0x1A7A44u: goto label_1a7a44;
            case 0x1A7A48u: goto label_1a7a48;
            case 0x1A7A4Cu: goto label_1a7a4c;
            case 0x1A7A50u: goto label_1a7a50;
            case 0x1A7A54u: goto label_1a7a54;
            case 0x1A7A58u: goto label_1a7a58;
            case 0x1A7A5Cu: goto label_1a7a5c;
            case 0x1A7A60u: goto label_1a7a60;
            case 0x1A7A64u: goto label_1a7a64;
            case 0x1A7A68u: goto label_1a7a68;
            case 0x1A7A6Cu: goto label_1a7a6c;
            case 0x1A7A70u: goto label_1a7a70;
            case 0x1A7A74u: goto label_1a7a74;
            case 0x1A7A78u: goto label_1a7a78;
            case 0x1A7A7Cu: goto label_1a7a7c;
            case 0x1A7A80u: goto label_1a7a80;
            case 0x1A7A84u: goto label_1a7a84;
            case 0x1A7A88u: goto label_1a7a88;
            case 0x1A7A8Cu: goto label_1a7a8c;
            case 0x1A7A90u: goto label_1a7a90;
            case 0x1A7A94u: goto label_1a7a94;
            case 0x1A7A98u: goto label_1a7a98;
            case 0x1A7A9Cu: goto label_1a7a9c;
            case 0x1A7AA0u: goto label_1a7aa0;
            case 0x1A7AA4u: goto label_1a7aa4;
            case 0x1A7AA8u: goto label_1a7aa8;
            case 0x1A7AACu: goto label_1a7aac;
            case 0x1A7AB0u: goto label_1a7ab0;
            case 0x1A7AB4u: goto label_1a7ab4;
            case 0x1A7AB8u: goto label_1a7ab8;
            case 0x1A7ABCu: goto label_1a7abc;
            case 0x1A7AC0u: goto label_1a7ac0;
            case 0x1A7AC4u: goto label_1a7ac4;
            case 0x1A7AC8u: goto label_1a7ac8;
            case 0x1A7ACCu: goto label_1a7acc;
            case 0x1A7AD0u: goto label_1a7ad0;
            case 0x1A7AD4u: goto label_1a7ad4;
            case 0x1A7AD8u: goto label_1a7ad8;
            case 0x1A7ADCu: goto label_1a7adc;
            case 0x1A7AE0u: goto label_1a7ae0;
            case 0x1A7AE4u: goto label_1a7ae4;
            case 0x1A7AE8u: goto label_1a7ae8;
            case 0x1A7AECu: goto label_1a7aec;
            case 0x1A7AF0u: goto label_1a7af0;
            case 0x1A7AF4u: goto label_1a7af4;
            case 0x1A7AF8u: goto label_1a7af8;
            case 0x1A7AFCu: goto label_1a7afc;
            case 0x1A7B00u: goto label_1a7b00;
            case 0x1A7B04u: goto label_1a7b04;
            case 0x1A7B08u: goto label_1a7b08;
            case 0x1A7B0Cu: goto label_1a7b0c;
            case 0x1A7B10u: goto label_1a7b10;
            case 0x1A7B14u: goto label_1a7b14;
            case 0x1A7B18u: goto label_1a7b18;
            case 0x1A7B1Cu: goto label_1a7b1c;
            case 0x1A7B20u: goto label_1a7b20;
            case 0x1A7B24u: goto label_1a7b24;
            case 0x1A7B28u: goto label_1a7b28;
            case 0x1A7B2Cu: goto label_1a7b2c;
            case 0x1A7B30u: goto label_1a7b30;
            case 0x1A7B34u: goto label_1a7b34;
            case 0x1A7B38u: goto label_1a7b38;
            case 0x1A7B3Cu: goto label_1a7b3c;
            case 0x1A7B40u: goto label_1a7b40;
            case 0x1A7B44u: goto label_1a7b44;
            case 0x1A7B48u: goto label_1a7b48;
            case 0x1A7B4Cu: goto label_1a7b4c;
            case 0x1A7B50u: goto label_1a7b50;
            case 0x1A7B54u: goto label_1a7b54;
            case 0x1A7B58u: goto label_1a7b58;
            case 0x1A7B5Cu: goto label_1a7b5c;
            case 0x1A7B60u: goto label_1a7b60;
            case 0x1A7B64u: goto label_1a7b64;
            case 0x1A7B68u: goto label_1a7b68;
            case 0x1A7B6Cu: goto label_1a7b6c;
            case 0x1A7B70u: goto label_1a7b70;
            case 0x1A7B74u: goto label_1a7b74;
            case 0x1A7B78u: goto label_1a7b78;
            case 0x1A7B7Cu: goto label_1a7b7c;
            case 0x1A7B80u: goto label_1a7b80;
            case 0x1A7B84u: goto label_1a7b84;
            case 0x1A7B88u: goto label_1a7b88;
            case 0x1A7B8Cu: goto label_1a7b8c;
            case 0x1A7B90u: goto label_1a7b90;
            case 0x1A7B94u: goto label_1a7b94;
            case 0x1A7B98u: goto label_1a7b98;
            case 0x1A7B9Cu: goto label_1a7b9c;
            case 0x1A7BA0u: goto label_1a7ba0;
            case 0x1A7BA4u: goto label_1a7ba4;
            case 0x1A7BA8u: goto label_1a7ba8;
            case 0x1A7BACu: goto label_1a7bac;
            case 0x1A7BB0u: goto label_1a7bb0;
            case 0x1A7BB4u: goto label_1a7bb4;
            case 0x1A7BB8u: goto label_1a7bb8;
            case 0x1A7BBCu: goto label_1a7bbc;
            case 0x1A7BC0u: goto label_1a7bc0;
            case 0x1A7BC4u: goto label_1a7bc4;
            case 0x1A7BC8u: goto label_1a7bc8;
            case 0x1A7BCCu: goto label_1a7bcc;
            case 0x1A7BD0u: goto label_1a7bd0;
            case 0x1A7BD4u: goto label_1a7bd4;
            case 0x1A7BD8u: goto label_1a7bd8;
            case 0x1A7BDCu: goto label_1a7bdc;
            case 0x1A7BE0u: goto label_1a7be0;
            case 0x1A7BE4u: goto label_1a7be4;
            case 0x1A7BE8u: goto label_1a7be8;
            case 0x1A7BECu: goto label_1a7bec;
            case 0x1A7BF0u: goto label_1a7bf0;
            case 0x1A7BF4u: goto label_1a7bf4;
            case 0x1A7BF8u: goto label_1a7bf8;
            case 0x1A7BFCu: goto label_1a7bfc;
            case 0x1A7C00u: goto label_1a7c00;
            case 0x1A7C04u: goto label_1a7c04;
            case 0x1A7C08u: goto label_1a7c08;
            case 0x1A7C0Cu: goto label_1a7c0c;
            case 0x1A7C10u: goto label_1a7c10;
            case 0x1A7C14u: goto label_1a7c14;
            case 0x1A7C18u: goto label_1a7c18;
            case 0x1A7C1Cu: goto label_1a7c1c;
            case 0x1A7C20u: goto label_1a7c20;
            case 0x1A7C24u: goto label_1a7c24;
            case 0x1A7C28u: goto label_1a7c28;
            case 0x1A7C2Cu: goto label_1a7c2c;
            case 0x1A7C30u: goto label_1a7c30;
            case 0x1A7C34u: goto label_1a7c34;
            case 0x1A7C38u: goto label_1a7c38;
            case 0x1A7C3Cu: goto label_1a7c3c;
            case 0x1A7C40u: goto label_1a7c40;
            case 0x1A7C44u: goto label_1a7c44;
            case 0x1A7C48u: goto label_1a7c48;
            case 0x1A7C4Cu: goto label_1a7c4c;
            case 0x1A7C50u: goto label_1a7c50;
            case 0x1A7C54u: goto label_1a7c54;
            case 0x1A7C58u: goto label_1a7c58;
            case 0x1A7C5Cu: goto label_1a7c5c;
            case 0x1A7C60u: goto label_1a7c60;
            case 0x1A7C64u: goto label_1a7c64;
            case 0x1A7C68u: goto label_1a7c68;
            case 0x1A7C6Cu: goto label_1a7c6c;
            case 0x1A7C70u: goto label_1a7c70;
            case 0x1A7C74u: goto label_1a7c74;
            case 0x1A7C78u: goto label_1a7c78;
            case 0x1A7C7Cu: goto label_1a7c7c;
            case 0x1A7C80u: goto label_1a7c80;
            case 0x1A7C84u: goto label_1a7c84;
            case 0x1A7C88u: goto label_1a7c88;
            case 0x1A7C8Cu: goto label_1a7c8c;
            case 0x1A7C90u: goto label_1a7c90;
            case 0x1A7C94u: goto label_1a7c94;
            case 0x1A7C98u: goto label_1a7c98;
            case 0x1A7C9Cu: goto label_1a7c9c;
            case 0x1A7CA0u: goto label_1a7ca0;
            case 0x1A7CA4u: goto label_1a7ca4;
            case 0x1A7CA8u: goto label_1a7ca8;
            case 0x1A7CACu: goto label_1a7cac;
            case 0x1A7CB0u: goto label_1a7cb0;
            case 0x1A7CB4u: goto label_1a7cb4;
            case 0x1A7CB8u: goto label_1a7cb8;
            case 0x1A7CBCu: goto label_1a7cbc;
            case 0x1A7CC0u: goto label_1a7cc0;
            case 0x1A7CC4u: goto label_1a7cc4;
            case 0x1A7CC8u: goto label_1a7cc8;
            case 0x1A7CCCu: goto label_1a7ccc;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CD4u: goto label_1a7cd4;
            case 0x1A7CD8u: goto label_1a7cd8;
            case 0x1A7CDCu: goto label_1a7cdc;
            case 0x1A7CE0u: goto label_1a7ce0;
            case 0x1A7CE4u: goto label_1a7ce4;
            case 0x1A7CE8u: goto label_1a7ce8;
            case 0x1A7CECu: goto label_1a7cec;
            case 0x1A7CF0u: goto label_1a7cf0;
            case 0x1A7CF4u: goto label_1a7cf4;
            case 0x1A7CF8u: goto label_1a7cf8;
            case 0x1A7CFCu: goto label_1a7cfc;
            case 0x1A7D00u: goto label_1a7d00;
            case 0x1A7D04u: goto label_1a7d04;
            case 0x1A7D08u: goto label_1a7d08;
            case 0x1A7D0Cu: goto label_1a7d0c;
            case 0x1A7D10u: goto label_1a7d10;
            case 0x1A7D14u: goto label_1a7d14;
            case 0x1A7D18u: goto label_1a7d18;
            case 0x1A7D1Cu: goto label_1a7d1c;
            case 0x1A7D20u: goto label_1a7d20;
            case 0x1A7D24u: goto label_1a7d24;
            case 0x1A7D28u: goto label_1a7d28;
            case 0x1A7D2Cu: goto label_1a7d2c;
            case 0x1A7D30u: goto label_1a7d30;
            case 0x1A7D34u: goto label_1a7d34;
            case 0x1A7D38u: goto label_1a7d38;
            case 0x1A7D3Cu: goto label_1a7d3c;
            case 0x1A7D40u: goto label_1a7d40;
            case 0x1A7D44u: goto label_1a7d44;
            case 0x1A7D48u: goto label_1a7d48;
            case 0x1A7D4Cu: goto label_1a7d4c;
            case 0x1A7D50u: goto label_1a7d50;
            case 0x1A7D54u: goto label_1a7d54;
            case 0x1A7D58u: goto label_1a7d58;
            case 0x1A7D5Cu: goto label_1a7d5c;
            case 0x1A7D60u: goto label_1a7d60;
            case 0x1A7D64u: goto label_1a7d64;
            case 0x1A7D68u: goto label_1a7d68;
            case 0x1A7D6Cu: goto label_1a7d6c;
            case 0x1A7D70u: goto label_1a7d70;
            case 0x1A7D74u: goto label_1a7d74;
            case 0x1A7D78u: goto label_1a7d78;
            case 0x1A7D7Cu: goto label_1a7d7c;
            case 0x1A7D80u: goto label_1a7d80;
            case 0x1A7D84u: goto label_1a7d84;
            case 0x1A7D88u: goto label_1a7d88;
            case 0x1A7D8Cu: goto label_1a7d8c;
            case 0x1A7D90u: goto label_1a7d90;
            case 0x1A7D94u: goto label_1a7d94;
            case 0x1A7D98u: goto label_1a7d98;
            case 0x1A7D9Cu: goto label_1a7d9c;
            case 0x1A7DA0u: goto label_1a7da0;
            case 0x1A7DA4u: goto label_1a7da4;
            case 0x1A7DA8u: goto label_1a7da8;
            case 0x1A7DACu: goto label_1a7dac;
            case 0x1A7DB0u: goto label_1a7db0;
            case 0x1A7DB4u: goto label_1a7db4;
            case 0x1A7DB8u: goto label_1a7db8;
            case 0x1A7DBCu: goto label_1a7dbc;
            case 0x1A7DC0u: goto label_1a7dc0;
            case 0x1A7DC4u: goto label_1a7dc4;
            case 0x1A7DC8u: goto label_1a7dc8;
            case 0x1A7DCCu: goto label_1a7dcc;
            case 0x1A7DD0u: goto label_1a7dd0;
            case 0x1A7DD4u: goto label_1a7dd4;
            case 0x1A7DD8u: goto label_1a7dd8;
            case 0x1A7DDCu: goto label_1a7ddc;
            case 0x1A7DE0u: goto label_1a7de0;
            case 0x1A7DE4u: goto label_1a7de4;
            case 0x1A7DE8u: goto label_1a7de8;
            case 0x1A7DECu: goto label_1a7dec;
            case 0x1A7DF0u: goto label_1a7df0;
            case 0x1A7DF4u: goto label_1a7df4;
            case 0x1A7DF8u: goto label_1a7df8;
            case 0x1A7DFCu: goto label_1a7dfc;
            case 0x1A7E00u: goto label_1a7e00;
            case 0x1A7E04u: goto label_1a7e04;
            case 0x1A7E08u: goto label_1a7e08;
            case 0x1A7E0Cu: goto label_1a7e0c;
            case 0x1A7E10u: goto label_1a7e10;
            case 0x1A7E14u: goto label_1a7e14;
            case 0x1A7E18u: goto label_1a7e18;
            case 0x1A7E1Cu: goto label_1a7e1c;
            case 0x1A7E20u: goto label_1a7e20;
            case 0x1A7E24u: goto label_1a7e24;
            case 0x1A7E28u: goto label_1a7e28;
            case 0x1A7E2Cu: goto label_1a7e2c;
            case 0x1A7E30u: goto label_1a7e30;
            case 0x1A7E34u: goto label_1a7e34;
            case 0x1A7E38u: goto label_1a7e38;
            case 0x1A7E3Cu: goto label_1a7e3c;
            case 0x1A7E40u: goto label_1a7e40;
            case 0x1A7E44u: goto label_1a7e44;
            case 0x1A7E48u: goto label_1a7e48;
            case 0x1A7E4Cu: goto label_1a7e4c;
            case 0x1A7E50u: goto label_1a7e50;
            case 0x1A7E54u: goto label_1a7e54;
            case 0x1A7E58u: goto label_1a7e58;
            case 0x1A7E5Cu: goto label_1a7e5c;
            case 0x1A7E60u: goto label_1a7e60;
            case 0x1A7E64u: goto label_1a7e64;
            case 0x1A7E68u: goto label_1a7e68;
            case 0x1A7E6Cu: goto label_1a7e6c;
            case 0x1A7E70u: goto label_1a7e70;
            case 0x1A7E74u: goto label_1a7e74;
            case 0x1A7E78u: goto label_1a7e78;
            case 0x1A7E7Cu: goto label_1a7e7c;
            case 0x1A7E80u: goto label_1a7e80;
            case 0x1A7E84u: goto label_1a7e84;
            case 0x1A7E88u: goto label_1a7e88;
            case 0x1A7E8Cu: goto label_1a7e8c;
            case 0x1A7E90u: goto label_1a7e90;
            case 0x1A7E94u: goto label_1a7e94;
            case 0x1A7E98u: goto label_1a7e98;
            case 0x1A7E9Cu: goto label_1a7e9c;
            case 0x1A7EA0u: goto label_1a7ea0;
            case 0x1A7EA4u: goto label_1a7ea4;
            case 0x1A7EA8u: goto label_1a7ea8;
            case 0x1A7EACu: goto label_1a7eac;
            case 0x1A7EB0u: goto label_1a7eb0;
            case 0x1A7EB4u: goto label_1a7eb4;
            case 0x1A7EB8u: goto label_1a7eb8;
            case 0x1A7EBCu: goto label_1a7ebc;
            case 0x1A7EC0u: goto label_1a7ec0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a7ebc:
    ctx->pc = 0x1A7EC4u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En4_03Move
// Address: 0x1a5d40 - 0x1a67c0
void En4_03Move_0x1a5d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En4_03Move_0x1a5d40");
#endif

    ctx->pc = 0x1a5d40u;

label_1a5d40:
    // 0x1a5d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a5d44:
    // 0x1a5d44: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a5d48:
    // 0x1a5d48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a5d4c:
    // 0x1a5d4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a5d4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a5d50:
    // 0x1a5d50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a5d54:
    // 0x1a5d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5d58:
    // 0x1a5d58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a5d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a5d5c:
    // 0x1a5d5c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1a5d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5d60:
    // 0x1a5d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5d64:
    // 0x1a5d64: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1a5d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5d68:
    // 0x1a5d68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a5d68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a5d6c:
    // 0x1a5d6c: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1a5d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1a5d70:
    // 0x1a5d70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a5d74:
    // 0x1a5d74: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1a5d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5d78:
    // 0x1a5d78: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1a5d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5d7c:
    // 0x1a5d7c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a5d7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a5d80:
    // 0x1a5d80: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1a5d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1a5d84:
    // 0x1a5d84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a5d88:
    // 0x1a5d88: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1a5d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5d8c:
    // 0x1a5d8c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a5d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5d90:
    // 0x1a5d90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a5d90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a5d94:
    // 0x1a5d94: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1a5d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1a5d98:
    // 0x1a5d98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a5d9c:
    // 0x1a5d9c: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1a5d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5da0:
    // 0x1a5da0: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1a5da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5da4:
    // 0x1a5da4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a5da4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a5da8:
    // 0x1a5da8: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1a5da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1a5dac:
    // 0x1a5dac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a5db0:
    // 0x1a5db0: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1a5db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5db4:
    // 0x1a5db4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a5db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5db8:
    // 0x1a5db8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a5db8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a5dbc:
    // 0x1a5dbc: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1a5dbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1a5dc0:
    // 0x1a5dc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a5dc4:
    // 0x1a5dc4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a5dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5dc8:
    // 0x1a5dc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a5dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5dcc:
    // 0x1a5dcc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1a5dd0:
    if (ctx->pc == 0x1A5DD0u) {
        ctx->pc = 0x1A5DD0u;
            // 0x1a5dd0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1A5DD4u;
        goto label_1a5dd4;
    }
    ctx->pc = 0x1A5DCCu;
    {
        const bool branch_taken_0x1a5dcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DCCu;
            // 0x1a5dd0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5dcc) {
            ctx->pc = 0x1A5DF0u;
            goto label_1a5df0;
        }
    }
    ctx->pc = 0x1A5DD4u;
label_1a5dd4:
    // 0x1a5dd4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a5dd8:
    // 0x1a5dd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a5dd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a5ddc:
    // 0x1a5ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5de0:
    // 0x1a5de0: 0x0  nop
    ctx->pc = 0x1a5de0u;
    // NOP
label_1a5de4:
    // 0x1a5de4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a5de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a5de8:
    // 0x1a5de8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1a5de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1a5dec:
    // 0x1a5dec: 0x0  nop
    ctx->pc = 0x1a5decu;
    // NOP
label_1a5df0:
    // 0x1a5df0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5df4:
    // 0x1a5df4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a5df8:
    // 0x1a5df8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a5df8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a5dfc:
    // 0x1a5dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5e00:
    // 0x1a5e00: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1a5e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5e04:
    // 0x1a5e04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a5e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5e08:
    // 0x1a5e08: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a5e0c:
    if (ctx->pc == 0x1A5E0Cu) {
        ctx->pc = 0x1A5E0Cu;
            // 0x1a5e0c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1A5E10u;
        goto label_1a5e10;
    }
    ctx->pc = 0x1A5E08u;
    {
        const bool branch_taken_0x1a5e08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E08u;
            // 0x1a5e0c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e08) {
            ctx->pc = 0x1A5E28u;
            goto label_1a5e28;
        }
    }
    ctx->pc = 0x1A5E10u;
label_1a5e10:
    // 0x1a5e10: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a5e14:
    // 0x1a5e14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a5e14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a5e18:
    // 0x1a5e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5e1c:
    // 0x1a5e1c: 0x0  nop
    ctx->pc = 0x1a5e1cu;
    // NOP
label_1a5e20:
    // 0x1a5e20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a5e20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a5e24:
    // 0x1a5e24: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a5e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a5e28:
    // 0x1a5e28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a5e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5e2c:
    // 0x1a5e2c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a5e30:
    // 0x1a5e30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a5e30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a5e34:
    // 0x1a5e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5e38:
    // 0x1a5e38: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1a5e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5e3c:
    // 0x1a5e3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a5e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5e40:
    // 0x1a5e40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a5e44:
    if (ctx->pc == 0x1A5E44u) {
        ctx->pc = 0x1A5E44u;
            // 0x1a5e44: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1A5E48u;
        goto label_1a5e48;
    }
    ctx->pc = 0x1A5E40u;
    {
        const bool branch_taken_0x1a5e40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E40u;
            // 0x1a5e44: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e40) {
            ctx->pc = 0x1A5E60u;
            goto label_1a5e60;
        }
    }
    ctx->pc = 0x1A5E48u;
label_1a5e48:
    // 0x1a5e48: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a5e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a5e4c:
    // 0x1a5e4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a5e4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a5e50:
    // 0x1a5e50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5e54:
    // 0x1a5e54: 0x0  nop
    ctx->pc = 0x1a5e54u;
    // NOP
label_1a5e58:
    // 0x1a5e58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a5e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a5e5c:
    // 0x1a5e5c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a5e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a5e60:
    // 0x1a5e60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a5e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5e64:
    // 0x1a5e64: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a5e68:
    // 0x1a5e68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a5e68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a5e6c:
    // 0x1a5e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5e70:
    // 0x1a5e70: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1a5e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5e74:
    // 0x1a5e74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a5e74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5e78:
    // 0x1a5e78: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a5e7c:
    if (ctx->pc == 0x1A5E7Cu) {
        ctx->pc = 0x1A5E7Cu;
            // 0x1a5e7c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1A5E80u;
        goto label_1a5e80;
    }
    ctx->pc = 0x1A5E78u;
    {
        const bool branch_taken_0x1a5e78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E78u;
            // 0x1a5e7c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e78) {
            ctx->pc = 0x1A5E98u;
            goto label_1a5e98;
        }
    }
    ctx->pc = 0x1A5E80u;
label_1a5e80:
    // 0x1a5e80: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a5e84:
    // 0x1a5e84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a5e84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a5e88:
    // 0x1a5e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5e8c:
    // 0x1a5e8c: 0x0  nop
    ctx->pc = 0x1a5e8cu;
    // NOP
label_1a5e90:
    // 0x1a5e90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a5e90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a5e94:
    // 0x1a5e94: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a5e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a5e98:
    // 0x1a5e98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5e9c:
    // 0x1a5e9c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a5ea0:
    // 0x1a5ea0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a5ea0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a5ea4:
    // 0x1a5ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5ea8:
    // 0x1a5ea8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1a5ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5eac:
    // 0x1a5eac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a5eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5eb0:
    // 0x1a5eb0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a5eb4:
    if (ctx->pc == 0x1A5EB4u) {
        ctx->pc = 0x1A5EB4u;
            // 0x1a5eb4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1A5EB8u;
        goto label_1a5eb8;
    }
    ctx->pc = 0x1A5EB0u;
    {
        const bool branch_taken_0x1a5eb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5EB0u;
            // 0x1a5eb4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5eb0) {
            ctx->pc = 0x1A5ED0u;
            goto label_1a5ed0;
        }
    }
    ctx->pc = 0x1A5EB8u;
label_1a5eb8:
    // 0x1a5eb8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a5eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a5ebc:
    // 0x1a5ebc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a5ebcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a5ec0:
    // 0x1a5ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5ec4:
    // 0x1a5ec4: 0x0  nop
    ctx->pc = 0x1a5ec4u;
    // NOP
label_1a5ec8:
    // 0x1a5ec8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a5ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a5ecc:
    // 0x1a5ecc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a5eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a5ed0:
    // 0x1a5ed0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5ed4:
    // 0x1a5ed4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a5ed8:
    // 0x1a5ed8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a5ed8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a5edc:
    // 0x1a5edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5ee0:
    // 0x1a5ee0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1a5ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5ee4:
    // 0x1a5ee4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a5ee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5ee8:
    // 0x1a5ee8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a5eec:
    if (ctx->pc == 0x1A5EECu) {
        ctx->pc = 0x1A5EECu;
            // 0x1a5eec: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1A5EF0u;
        goto label_1a5ef0;
    }
    ctx->pc = 0x1A5EE8u;
    {
        const bool branch_taken_0x1a5ee8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5EE8u;
            // 0x1a5eec: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ee8) {
            ctx->pc = 0x1A5F08u;
            goto label_1a5f08;
        }
    }
    ctx->pc = 0x1A5EF0u;
label_1a5ef0:
    // 0x1a5ef0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a5ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a5ef4:
    // 0x1a5ef4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a5ef4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a5ef8:
    // 0x1a5ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5efc:
    // 0x1a5efc: 0x0  nop
    ctx->pc = 0x1a5efcu;
    // NOP
label_1a5f00:
    // 0x1a5f00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a5f00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a5f04:
    // 0x1a5f04: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a5f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a5f08:
    // 0x1a5f08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5f0c:
    // 0x1a5f0c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1a5f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1a5f10:
    // 0x1a5f10: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a5f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a5f14:
    // 0x1a5f14: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a5f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a5f18:
    // 0x1a5f18: 0xc0699f0  jal         func_1A67C0
label_1a5f1c:
    if (ctx->pc == 0x1A5F1Cu) {
        ctx->pc = 0x1A5F1Cu;
            // 0x1a5f1c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x1A5F20u;
        goto label_1a5f20;
    }
    ctx->pc = 0x1A5F18u;
    SET_GPR_U32(ctx, 31, 0x1A5F20u);
    ctx->pc = 0x1A5F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F18u;
            // 0x1a5f1c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A67C0u;
    if (runtime->hasFunction(0x1A67C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A67C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F20u; }
        if (ctx->pc != 0x1A5F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1a67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F20u; }
        if (ctx->pc != 0x1A5F20u) { return; }
    }
    ctx->pc = 0x1A5F20u;
label_1a5f20:
    // 0x1a5f20: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1a5f24:
    // 0x1a5f24: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a5f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1a5f28:
    // 0x1a5f28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a5f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a5f2c:
    // 0x1a5f2c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a5f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1a5f30:
    // 0x1a5f30: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a5f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a5f34:
    // 0x1a5f34: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x1a5f34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1a5f38:
    // 0x1a5f38: 0x10200179  beqz        $at, . + 4 + (0x179 << 2)
label_1a5f3c:
    if (ctx->pc == 0x1A5F3Cu) {
        ctx->pc = 0x1A5F3Cu;
            // 0x1a5f3c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1A5F40u;
        goto label_1a5f40;
    }
    ctx->pc = 0x1A5F38u;
    {
        const bool branch_taken_0x1a5f38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F38u;
            // 0x1a5f3c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f38) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A5F40u;
label_1a5f40:
    // 0x1a5f40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a5f44:
    // 0x1a5f44: 0x24632980  addiu       $v1, $v1, 0x2980
    ctx->pc = 0x1a5f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10624));
label_1a5f48:
    // 0x1a5f48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a5f4c:
    // 0x1a5f4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5f50:
    // 0x1a5f50: 0x400008  jr          $v0
label_1a5f54:
    if (ctx->pc == 0x1A5F54u) {
        ctx->pc = 0x1A5F58u;
        goto label_1a5f58;
    }
    ctx->pc = 0x1A5F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5F58u: goto label_1a5f58;
            case 0x1A6050u: goto label_1a6050;
            case 0x1A6148u: goto label_1a6148;
            case 0x1A6240u: goto label_1a6240;
            case 0x1A6338u: goto label_1a6338;
            case 0x1A6430u: goto label_1a6430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5F58u;
label_1a5f58:
    // 0x1a5f58: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x1a5f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
label_1a5f5c:
    // 0x1a5f5c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a5f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5f60:
    // 0x1a5f60: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1a5f60u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_1a5f64:
    // 0x1a5f64: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1a5f64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5f68:
    // 0x1a5f68: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1a5f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1a5f6c:
    // 0x1a5f6c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1a5f6cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a5f70:
    // 0x1a5f70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5f74:
    // 0x1a5f74: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1a5f78:
    // 0x1a5f78: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1a5f78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1a5f7c:
    // 0x1a5f7c: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a5f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a5f80:
    // 0x1a5f80: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a5f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5f84:
    // 0x1a5f84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a5f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a5f88:
    // 0x1a5f88: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a5f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a5f8c:
    // 0x1a5f8c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a5f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a5f90:
    // 0x1a5f90: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1a5f94:
    if (ctx->pc == 0x1A5F94u) {
        ctx->pc = 0x1A5F94u;
            // 0x1a5f94: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1A5F98u;
        goto label_1a5f98;
    }
    ctx->pc = 0x1A5F90u;
    {
        const bool branch_taken_0x1a5f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F90u;
            // 0x1a5f94: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f90) {
            ctx->pc = 0x1A6028u;
            goto label_1a6028;
        }
    }
    ctx->pc = 0x1A5F98u;
label_1a5f98:
    // 0x1a5f98: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1a5f9c:
    if (ctx->pc == 0x1A5F9Cu) {
        ctx->pc = 0x1A5FA0u;
        goto label_1a5fa0;
    }
    ctx->pc = 0x1A5F98u;
    {
        const bool branch_taken_0x1a5f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5f98) {
            ctx->pc = 0x1A6000u;
            goto label_1a6000;
        }
    }
    ctx->pc = 0x1A5FA0u;
label_1a5fa0:
    // 0x1a5fa0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1a5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1a5fa4:
    // 0x1a5fa4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1a5fa8:
    if (ctx->pc == 0x1A5FA8u) {
        ctx->pc = 0x1A5FA8u;
            // 0x1a5fa8: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1A5FACu;
        goto label_1a5fac;
    }
    ctx->pc = 0x1A5FA4u;
    {
        const bool branch_taken_0x1a5fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FA4u;
            // 0x1a5fa8: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fa4) {
            ctx->pc = 0x1A5FE8u;
            goto label_1a5fe8;
        }
    }
    ctx->pc = 0x1A5FACu;
label_1a5fac:
    // 0x1a5fac: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1a5fb0:
    if (ctx->pc == 0x1A5FB0u) {
        ctx->pc = 0x1A5FB4u;
        goto label_1a5fb4;
    }
    ctx->pc = 0x1A5FACu;
    {
        const bool branch_taken_0x1a5fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5fac) {
            ctx->pc = 0x1A5FC0u;
            goto label_1a5fc0;
        }
    }
    ctx->pc = 0x1A5FB4u;
label_1a5fb4:
    // 0x1a5fb4: 0x1000015a  b           . + 4 + (0x15A << 2)
label_1a5fb8:
    if (ctx->pc == 0x1A5FB8u) {
        ctx->pc = 0x1A5FBCu;
        goto label_1a5fbc;
    }
    ctx->pc = 0x1A5FB4u;
    {
        const bool branch_taken_0x1a5fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fb4) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A5FBCu;
label_1a5fbc:
    // 0x1a5fbc: 0x0  nop
    ctx->pc = 0x1a5fbcu;
    // NOP
label_1a5fc0:
    // 0x1a5fc0: 0xc065d00  jal         func_197400
label_1a5fc4:
    if (ctx->pc == 0x1A5FC4u) {
        ctx->pc = 0x1A5FC8u;
        goto label_1a5fc8;
    }
    ctx->pc = 0x1A5FC0u;
    SET_GPR_U32(ctx, 31, 0x1A5FC8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5FC8u; }
        if (ctx->pc != 0x1A5FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5FC8u; }
        if (ctx->pc != 0x1A5FC8u) { return; }
    }
    ctx->pc = 0x1A5FC8u;
label_1a5fc8:
    // 0x1a5fc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5fcc:
    // 0x1a5fcc: 0x14430154  bne         $v0, $v1, . + 4 + (0x154 << 2)
label_1a5fd0:
    if (ctx->pc == 0x1A5FD0u) {
        ctx->pc = 0x1A5FD4u;
        goto label_1a5fd4;
    }
    ctx->pc = 0x1A5FCCu;
    {
        const bool branch_taken_0x1a5fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a5fcc) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A5FD4u;
label_1a5fd4:
    // 0x1a5fd4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a5fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a5fd8:
    // 0x1a5fd8: 0xc06560c  jal         func_195830
label_1a5fdc:
    if (ctx->pc == 0x1A5FDCu) {
        ctx->pc = 0x1A5FDCu;
            // 0x1a5fdc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A5FE0u;
        goto label_1a5fe0;
    }
    ctx->pc = 0x1A5FD8u;
    SET_GPR_U32(ctx, 31, 0x1A5FE0u);
    ctx->pc = 0x1A5FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FD8u;
            // 0x1a5fdc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5FE0u; }
        if (ctx->pc != 0x1A5FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5FE0u; }
        if (ctx->pc != 0x1A5FE0u) { return; }
    }
    ctx->pc = 0x1A5FE0u;
label_1a5fe0:
    // 0x1a5fe0: 0x1000014f  b           . + 4 + (0x14F << 2)
label_1a5fe4:
    if (ctx->pc == 0x1A5FE4u) {
        ctx->pc = 0x1A5FE8u;
        goto label_1a5fe8;
    }
    ctx->pc = 0x1A5FE0u;
    {
        const bool branch_taken_0x1a5fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fe0) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A5FE8u;
label_1a5fe8:
    // 0x1a5fe8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a5fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a5fec:
    // 0x1a5fec: 0xc06560c  jal         func_195830
label_1a5ff0:
    if (ctx->pc == 0x1A5FF0u) {
        ctx->pc = 0x1A5FF0u;
            // 0x1a5ff0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A5FF4u;
        goto label_1a5ff4;
    }
    ctx->pc = 0x1A5FECu;
    SET_GPR_U32(ctx, 31, 0x1A5FF4u);
    ctx->pc = 0x1A5FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FECu;
            // 0x1a5ff0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5FF4u; }
        if (ctx->pc != 0x1A5FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5FF4u; }
        if (ctx->pc != 0x1A5FF4u) { return; }
    }
    ctx->pc = 0x1A5FF4u;
label_1a5ff4:
    // 0x1a5ff4: 0x1000014a  b           . + 4 + (0x14A << 2)
label_1a5ff8:
    if (ctx->pc == 0x1A5FF8u) {
        ctx->pc = 0x1A5FFCu;
        goto label_1a5ffc;
    }
    ctx->pc = 0x1A5FF4u;
    {
        const bool branch_taken_0x1a5ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5ff4) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A5FFCu;
label_1a5ffc:
    // 0x1a5ffc: 0x0  nop
    ctx->pc = 0x1a5ffcu;
    // NOP
label_1a6000:
    // 0x1a6000: 0xc065d00  jal         func_197400
label_1a6004:
    if (ctx->pc == 0x1A6004u) {
        ctx->pc = 0x1A6008u;
        goto label_1a6008;
    }
    ctx->pc = 0x1A6000u;
    SET_GPR_U32(ctx, 31, 0x1A6008u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6008u; }
        if (ctx->pc != 0x1A6008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6008u; }
        if (ctx->pc != 0x1A6008u) { return; }
    }
    ctx->pc = 0x1A6008u;
label_1a6008:
    // 0x1a6008: 0x18400145  blez        $v0, . + 4 + (0x145 << 2)
label_1a600c:
    if (ctx->pc == 0x1A600Cu) {
        ctx->pc = 0x1A6010u;
        goto label_1a6010;
    }
    ctx->pc = 0x1A6008u;
    {
        const bool branch_taken_0x1a6008 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a6008) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6010u;
label_1a6010:
    // 0x1a6010: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a6010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a6014:
    // 0x1a6014: 0xc06560c  jal         func_195830
label_1a6018:
    if (ctx->pc == 0x1A6018u) {
        ctx->pc = 0x1A6018u;
            // 0x1a6018: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A601Cu;
        goto label_1a601c;
    }
    ctx->pc = 0x1A6014u;
    SET_GPR_U32(ctx, 31, 0x1A601Cu);
    ctx->pc = 0x1A6018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6014u;
            // 0x1a6018: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A601Cu; }
        if (ctx->pc != 0x1A601Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A601Cu; }
        if (ctx->pc != 0x1A601Cu) { return; }
    }
    ctx->pc = 0x1A601Cu;
label_1a601c:
    // 0x1a601c: 0x10000140  b           . + 4 + (0x140 << 2)
label_1a6020:
    if (ctx->pc == 0x1A6020u) {
        ctx->pc = 0x1A6024u;
        goto label_1a6024;
    }
    ctx->pc = 0x1A601Cu;
    {
        const bool branch_taken_0x1a601c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a601c) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6024u;
label_1a6024:
    // 0x1a6024: 0x0  nop
    ctx->pc = 0x1a6024u;
    // NOP
label_1a6028:
    // 0x1a6028: 0xc065d00  jal         func_197400
label_1a602c:
    if (ctx->pc == 0x1A602Cu) {
        ctx->pc = 0x1A6030u;
        goto label_1a6030;
    }
    ctx->pc = 0x1A6028u;
    SET_GPR_U32(ctx, 31, 0x1A6030u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6030u; }
        if (ctx->pc != 0x1A6030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6030u; }
        if (ctx->pc != 0x1A6030u) { return; }
    }
    ctx->pc = 0x1A6030u;
label_1a6030:
    // 0x1a6030: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a6030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a6034:
    // 0x1a6034: 0x1443013a  bne         $v0, $v1, . + 4 + (0x13A << 2)
label_1a6038:
    if (ctx->pc == 0x1A6038u) {
        ctx->pc = 0x1A603Cu;
        goto label_1a603c;
    }
    ctx->pc = 0x1A6034u;
    {
        const bool branch_taken_0x1a6034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a6034) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A603Cu;
label_1a603c:
    // 0x1a603c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a603cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a6040:
    // 0x1a6040: 0xc06560c  jal         func_195830
label_1a6044:
    if (ctx->pc == 0x1A6044u) {
        ctx->pc = 0x1A6044u;
            // 0x1a6044: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A6048u;
        goto label_1a6048;
    }
    ctx->pc = 0x1A6040u;
    SET_GPR_U32(ctx, 31, 0x1A6048u);
    ctx->pc = 0x1A6044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6040u;
            // 0x1a6044: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6048u; }
        if (ctx->pc != 0x1A6048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6048u; }
        if (ctx->pc != 0x1A6048u) { return; }
    }
    ctx->pc = 0x1A6048u;
label_1a6048:
    // 0x1a6048: 0x10000135  b           . + 4 + (0x135 << 2)
label_1a604c:
    if (ctx->pc == 0x1A604Cu) {
        ctx->pc = 0x1A6050u;
        goto label_1a6050;
    }
    ctx->pc = 0x1A6048u;
    {
        const bool branch_taken_0x1a6048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6048) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6050u;
label_1a6050:
    // 0x1a6050: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x1a6050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
label_1a6054:
    // 0x1a6054: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a6054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6058:
    // 0x1a6058: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1a6058u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_1a605c:
    // 0x1a605c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1a605cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6060:
    // 0x1a6060: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1a6060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1a6064:
    // 0x1a6064: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1a6064u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a6068:
    // 0x1a6068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a6068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a606c:
    // 0x1a606c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1a6070:
    // 0x1a6070: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1a6070u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1a6074:
    // 0x1a6074: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a6074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a6078:
    // 0x1a6078: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a6078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a607c:
    // 0x1a607c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a607cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6080:
    // 0x1a6080: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a6080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a6084:
    // 0x1a6084: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a6084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a6088:
    // 0x1a6088: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1a608c:
    if (ctx->pc == 0x1A608Cu) {
        ctx->pc = 0x1A608Cu;
            // 0x1a608c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1A6090u;
        goto label_1a6090;
    }
    ctx->pc = 0x1A6088u;
    {
        const bool branch_taken_0x1a6088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A608Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6088u;
            // 0x1a608c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6088) {
            ctx->pc = 0x1A6120u;
            goto label_1a6120;
        }
    }
    ctx->pc = 0x1A6090u;
label_1a6090:
    // 0x1a6090: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1a6094:
    if (ctx->pc == 0x1A6094u) {
        ctx->pc = 0x1A6098u;
        goto label_1a6098;
    }
    ctx->pc = 0x1A6090u;
    {
        const bool branch_taken_0x1a6090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6090) {
            ctx->pc = 0x1A60F8u;
            goto label_1a60f8;
        }
    }
    ctx->pc = 0x1A6098u;
label_1a6098:
    // 0x1a6098: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1a6098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1a609c:
    // 0x1a609c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1a60a0:
    if (ctx->pc == 0x1A60A0u) {
        ctx->pc = 0x1A60A0u;
            // 0x1a60a0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1A60A4u;
        goto label_1a60a4;
    }
    ctx->pc = 0x1A609Cu;
    {
        const bool branch_taken_0x1a609c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A60A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A609Cu;
            // 0x1a60a0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a609c) {
            ctx->pc = 0x1A60E0u;
            goto label_1a60e0;
        }
    }
    ctx->pc = 0x1A60A4u;
label_1a60a4:
    // 0x1a60a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1a60a8:
    if (ctx->pc == 0x1A60A8u) {
        ctx->pc = 0x1A60ACu;
        goto label_1a60ac;
    }
    ctx->pc = 0x1A60A4u;
    {
        const bool branch_taken_0x1a60a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a60a4) {
            ctx->pc = 0x1A60B8u;
            goto label_1a60b8;
        }
    }
    ctx->pc = 0x1A60ACu;
label_1a60ac:
    // 0x1a60ac: 0x1000011c  b           . + 4 + (0x11C << 2)
label_1a60b0:
    if (ctx->pc == 0x1A60B0u) {
        ctx->pc = 0x1A60B4u;
        goto label_1a60b4;
    }
    ctx->pc = 0x1A60ACu;
    {
        const bool branch_taken_0x1a60ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a60ac) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A60B4u;
label_1a60b4:
    // 0x1a60b4: 0x0  nop
    ctx->pc = 0x1a60b4u;
    // NOP
label_1a60b8:
    // 0x1a60b8: 0xc065d00  jal         func_197400
label_1a60bc:
    if (ctx->pc == 0x1A60BCu) {
        ctx->pc = 0x1A60C0u;
        goto label_1a60c0;
    }
    ctx->pc = 0x1A60B8u;
    SET_GPR_U32(ctx, 31, 0x1A60C0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60C0u; }
        if (ctx->pc != 0x1A60C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60C0u; }
        if (ctx->pc != 0x1A60C0u) { return; }
    }
    ctx->pc = 0x1A60C0u;
label_1a60c0:
    // 0x1a60c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a60c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a60c4:
    // 0x1a60c4: 0x14430116  bne         $v0, $v1, . + 4 + (0x116 << 2)
label_1a60c8:
    if (ctx->pc == 0x1A60C8u) {
        ctx->pc = 0x1A60CCu;
        goto label_1a60cc;
    }
    ctx->pc = 0x1A60C4u;
    {
        const bool branch_taken_0x1a60c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a60c4) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A60CCu;
label_1a60cc:
    // 0x1a60cc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a60ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a60d0:
    // 0x1a60d0: 0xc06560c  jal         func_195830
label_1a60d4:
    if (ctx->pc == 0x1A60D4u) {
        ctx->pc = 0x1A60D4u;
            // 0x1a60d4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A60D8u;
        goto label_1a60d8;
    }
    ctx->pc = 0x1A60D0u;
    SET_GPR_U32(ctx, 31, 0x1A60D8u);
    ctx->pc = 0x1A60D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60D0u;
            // 0x1a60d4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60D8u; }
        if (ctx->pc != 0x1A60D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60D8u; }
        if (ctx->pc != 0x1A60D8u) { return; }
    }
    ctx->pc = 0x1A60D8u;
label_1a60d8:
    // 0x1a60d8: 0x10000111  b           . + 4 + (0x111 << 2)
label_1a60dc:
    if (ctx->pc == 0x1A60DCu) {
        ctx->pc = 0x1A60E0u;
        goto label_1a60e0;
    }
    ctx->pc = 0x1A60D8u;
    {
        const bool branch_taken_0x1a60d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a60d8) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A60E0u;
label_1a60e0:
    // 0x1a60e0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a60e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a60e4:
    // 0x1a60e4: 0xc06560c  jal         func_195830
label_1a60e8:
    if (ctx->pc == 0x1A60E8u) {
        ctx->pc = 0x1A60E8u;
            // 0x1a60e8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A60ECu;
        goto label_1a60ec;
    }
    ctx->pc = 0x1A60E4u;
    SET_GPR_U32(ctx, 31, 0x1A60ECu);
    ctx->pc = 0x1A60E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60E4u;
            // 0x1a60e8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60ECu; }
        if (ctx->pc != 0x1A60ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60ECu; }
        if (ctx->pc != 0x1A60ECu) { return; }
    }
    ctx->pc = 0x1A60ECu;
label_1a60ec:
    // 0x1a60ec: 0x1000010c  b           . + 4 + (0x10C << 2)
label_1a60f0:
    if (ctx->pc == 0x1A60F0u) {
        ctx->pc = 0x1A60F4u;
        goto label_1a60f4;
    }
    ctx->pc = 0x1A60ECu;
    {
        const bool branch_taken_0x1a60ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a60ec) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A60F4u;
label_1a60f4:
    // 0x1a60f4: 0x0  nop
    ctx->pc = 0x1a60f4u;
    // NOP
label_1a60f8:
    // 0x1a60f8: 0xc065d00  jal         func_197400
label_1a60fc:
    if (ctx->pc == 0x1A60FCu) {
        ctx->pc = 0x1A6100u;
        goto label_1a6100;
    }
    ctx->pc = 0x1A60F8u;
    SET_GPR_U32(ctx, 31, 0x1A6100u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6100u; }
        if (ctx->pc != 0x1A6100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6100u; }
        if (ctx->pc != 0x1A6100u) { return; }
    }
    ctx->pc = 0x1A6100u;
label_1a6100:
    // 0x1a6100: 0x18400107  blez        $v0, . + 4 + (0x107 << 2)
label_1a6104:
    if (ctx->pc == 0x1A6104u) {
        ctx->pc = 0x1A6108u;
        goto label_1a6108;
    }
    ctx->pc = 0x1A6100u;
    {
        const bool branch_taken_0x1a6100 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a6100) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6108u;
label_1a6108:
    // 0x1a6108: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a6108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a610c:
    // 0x1a610c: 0xc06560c  jal         func_195830
label_1a6110:
    if (ctx->pc == 0x1A6110u) {
        ctx->pc = 0x1A6110u;
            // 0x1a6110: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A6114u;
        goto label_1a6114;
    }
    ctx->pc = 0x1A610Cu;
    SET_GPR_U32(ctx, 31, 0x1A6114u);
    ctx->pc = 0x1A6110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A610Cu;
            // 0x1a6110: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6114u; }
        if (ctx->pc != 0x1A6114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6114u; }
        if (ctx->pc != 0x1A6114u) { return; }
    }
    ctx->pc = 0x1A6114u;
label_1a6114:
    // 0x1a6114: 0x10000102  b           . + 4 + (0x102 << 2)
label_1a6118:
    if (ctx->pc == 0x1A6118u) {
        ctx->pc = 0x1A611Cu;
        goto label_1a611c;
    }
    ctx->pc = 0x1A6114u;
    {
        const bool branch_taken_0x1a6114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6114) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A611Cu;
label_1a611c:
    // 0x1a611c: 0x0  nop
    ctx->pc = 0x1a611cu;
    // NOP
label_1a6120:
    // 0x1a6120: 0xc065d00  jal         func_197400
label_1a6124:
    if (ctx->pc == 0x1A6124u) {
        ctx->pc = 0x1A6128u;
        goto label_1a6128;
    }
    ctx->pc = 0x1A6120u;
    SET_GPR_U32(ctx, 31, 0x1A6128u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6128u; }
        if (ctx->pc != 0x1A6128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6128u; }
        if (ctx->pc != 0x1A6128u) { return; }
    }
    ctx->pc = 0x1A6128u;
label_1a6128:
    // 0x1a6128: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a6128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a612c:
    // 0x1a612c: 0x144300fc  bne         $v0, $v1, . + 4 + (0xFC << 2)
label_1a6130:
    if (ctx->pc == 0x1A6130u) {
        ctx->pc = 0x1A6134u;
        goto label_1a6134;
    }
    ctx->pc = 0x1A612Cu;
    {
        const bool branch_taken_0x1a612c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a612c) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6134u;
label_1a6134:
    // 0x1a6134: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a6134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a6138:
    // 0x1a6138: 0xc06560c  jal         func_195830
label_1a613c:
    if (ctx->pc == 0x1A613Cu) {
        ctx->pc = 0x1A613Cu;
            // 0x1a613c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A6140u;
        goto label_1a6140;
    }
    ctx->pc = 0x1A6138u;
    SET_GPR_U32(ctx, 31, 0x1A6140u);
    ctx->pc = 0x1A613Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6138u;
            // 0x1a613c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6140u; }
        if (ctx->pc != 0x1A6140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6140u; }
        if (ctx->pc != 0x1A6140u) { return; }
    }
    ctx->pc = 0x1A6140u;
label_1a6140:
    // 0x1a6140: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_1a6144:
    if (ctx->pc == 0x1A6144u) {
        ctx->pc = 0x1A6148u;
        goto label_1a6148;
    }
    ctx->pc = 0x1A6140u;
    {
        const bool branch_taken_0x1a6140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6140) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6148u;
label_1a6148:
    // 0x1a6148: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x1a6148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
label_1a614c:
    // 0x1a614c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6150:
    // 0x1a6150: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1a6150u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_1a6154:
    // 0x1a6154: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1a6154u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6158:
    // 0x1a6158: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1a6158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1a615c:
    // 0x1a615c: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x1a615cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1a6160:
    // 0x1a6160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a6160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6164:
    // 0x1a6164: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a6164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1a6168:
    // 0x1a6168: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1a6168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1a616c:
    // 0x1a616c: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a616cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a6170:
    // 0x1a6170: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a6170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6174:
    // 0x1a6174: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a6174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a6178:
    // 0x1a6178: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a6178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a617c:
    // 0x1a617c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a6180:
    // 0x1a6180: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1a6184:
    if (ctx->pc == 0x1A6184u) {
        ctx->pc = 0x1A6184u;
            // 0x1a6184: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1A6188u;
        goto label_1a6188;
    }
    ctx->pc = 0x1A6180u;
    {
        const bool branch_taken_0x1a6180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6180u;
            // 0x1a6184: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6180) {
            ctx->pc = 0x1A6218u;
            goto label_1a6218;
        }
    }
    ctx->pc = 0x1A6188u;
label_1a6188:
    // 0x1a6188: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1a618c:
    if (ctx->pc == 0x1A618Cu) {
        ctx->pc = 0x1A6190u;
        goto label_1a6190;
    }
    ctx->pc = 0x1A6188u;
    {
        const bool branch_taken_0x1a6188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6188) {
            ctx->pc = 0x1A61F0u;
            goto label_1a61f0;
        }
    }
    ctx->pc = 0x1A6190u;
label_1a6190:
    // 0x1a6190: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1a6190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1a6194:
    // 0x1a6194: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1a6198:
    if (ctx->pc == 0x1A6198u) {
        ctx->pc = 0x1A6198u;
            // 0x1a6198: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1A619Cu;
        goto label_1a619c;
    }
    ctx->pc = 0x1A6194u;
    {
        const bool branch_taken_0x1a6194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6194u;
            // 0x1a6198: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6194) {
            ctx->pc = 0x1A61C8u;
            goto label_1a61c8;
        }
    }
    ctx->pc = 0x1A619Cu;
label_1a619c:
    // 0x1a619c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1a61a0:
    if (ctx->pc == 0x1A61A0u) {
        ctx->pc = 0x1A61A4u;
        goto label_1a61a4;
    }
    ctx->pc = 0x1A619Cu;
    {
        const bool branch_taken_0x1a619c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a619c) {
            ctx->pc = 0x1A61B0u;
            goto label_1a61b0;
        }
    }
    ctx->pc = 0x1A61A4u;
label_1a61a4:
    // 0x1a61a4: 0x100000de  b           . + 4 + (0xDE << 2)
label_1a61a8:
    if (ctx->pc == 0x1A61A8u) {
        ctx->pc = 0x1A61ACu;
        goto label_1a61ac;
    }
    ctx->pc = 0x1A61A4u;
    {
        const bool branch_taken_0x1a61a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a61a4) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A61ACu;
label_1a61ac:
    // 0x1a61ac: 0x0  nop
    ctx->pc = 0x1a61acu;
    // NOP
label_1a61b0:
    // 0x1a61b0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a61b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a61b4:
    // 0x1a61b4: 0xc06560c  jal         func_195830
label_1a61b8:
    if (ctx->pc == 0x1A61B8u) {
        ctx->pc = 0x1A61B8u;
            // 0x1a61b8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A61BCu;
        goto label_1a61bc;
    }
    ctx->pc = 0x1A61B4u;
    SET_GPR_U32(ctx, 31, 0x1A61BCu);
    ctx->pc = 0x1A61B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61B4u;
            // 0x1a61b8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61BCu; }
        if (ctx->pc != 0x1A61BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61BCu; }
        if (ctx->pc != 0x1A61BCu) { return; }
    }
    ctx->pc = 0x1A61BCu;
label_1a61bc:
    // 0x1a61bc: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_1a61c0:
    if (ctx->pc == 0x1A61C0u) {
        ctx->pc = 0x1A61C4u;
        goto label_1a61c4;
    }
    ctx->pc = 0x1A61BCu;
    {
        const bool branch_taken_0x1a61bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a61bc) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A61C4u;
label_1a61c4:
    // 0x1a61c4: 0x0  nop
    ctx->pc = 0x1a61c4u;
    // NOP
label_1a61c8:
    // 0x1a61c8: 0xc065d00  jal         func_197400
label_1a61cc:
    if (ctx->pc == 0x1A61CCu) {
        ctx->pc = 0x1A61D0u;
        goto label_1a61d0;
    }
    ctx->pc = 0x1A61C8u;
    SET_GPR_U32(ctx, 31, 0x1A61D0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61D0u; }
        if (ctx->pc != 0x1A61D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61D0u; }
        if (ctx->pc != 0x1A61D0u) { return; }
    }
    ctx->pc = 0x1A61D0u;
label_1a61d0:
    // 0x1a61d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a61d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a61d4:
    // 0x1a61d4: 0x144300d2  bne         $v0, $v1, . + 4 + (0xD2 << 2)
label_1a61d8:
    if (ctx->pc == 0x1A61D8u) {
        ctx->pc = 0x1A61DCu;
        goto label_1a61dc;
    }
    ctx->pc = 0x1A61D4u;
    {
        const bool branch_taken_0x1a61d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a61d4) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A61DCu;
label_1a61dc:
    // 0x1a61dc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a61dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a61e0:
    // 0x1a61e0: 0xc06560c  jal         func_195830
label_1a61e4:
    if (ctx->pc == 0x1A61E4u) {
        ctx->pc = 0x1A61E4u;
            // 0x1a61e4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A61E8u;
        goto label_1a61e8;
    }
    ctx->pc = 0x1A61E0u;
    SET_GPR_U32(ctx, 31, 0x1A61E8u);
    ctx->pc = 0x1A61E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61E0u;
            // 0x1a61e4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61E8u; }
        if (ctx->pc != 0x1A61E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61E8u; }
        if (ctx->pc != 0x1A61E8u) { return; }
    }
    ctx->pc = 0x1A61E8u;
label_1a61e8:
    // 0x1a61e8: 0x100000cd  b           . + 4 + (0xCD << 2)
label_1a61ec:
    if (ctx->pc == 0x1A61ECu) {
        ctx->pc = 0x1A61F0u;
        goto label_1a61f0;
    }
    ctx->pc = 0x1A61E8u;
    {
        const bool branch_taken_0x1a61e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a61e8) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A61F0u;
label_1a61f0:
    // 0x1a61f0: 0xc065d00  jal         func_197400
label_1a61f4:
    if (ctx->pc == 0x1A61F4u) {
        ctx->pc = 0x1A61F8u;
        goto label_1a61f8;
    }
    ctx->pc = 0x1A61F0u;
    SET_GPR_U32(ctx, 31, 0x1A61F8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61F8u; }
        if (ctx->pc != 0x1A61F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61F8u; }
        if (ctx->pc != 0x1A61F8u) { return; }
    }
    ctx->pc = 0x1A61F8u;
label_1a61f8:
    // 0x1a61f8: 0x184000c9  blez        $v0, . + 4 + (0xC9 << 2)
label_1a61fc:
    if (ctx->pc == 0x1A61FCu) {
        ctx->pc = 0x1A6200u;
        goto label_1a6200;
    }
    ctx->pc = 0x1A61F8u;
    {
        const bool branch_taken_0x1a61f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a61f8) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6200u;
label_1a6200:
    // 0x1a6200: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a6200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a6204:
    // 0x1a6204: 0xc06560c  jal         func_195830
label_1a6208:
    if (ctx->pc == 0x1A6208u) {
        ctx->pc = 0x1A6208u;
            // 0x1a6208: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A620Cu;
        goto label_1a620c;
    }
    ctx->pc = 0x1A6204u;
    SET_GPR_U32(ctx, 31, 0x1A620Cu);
    ctx->pc = 0x1A6208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6204u;
            // 0x1a6208: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A620Cu; }
        if (ctx->pc != 0x1A620Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A620Cu; }
        if (ctx->pc != 0x1A620Cu) { return; }
    }
    ctx->pc = 0x1A620Cu;
label_1a620c:
    // 0x1a620c: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_1a6210:
    if (ctx->pc == 0x1A6210u) {
        ctx->pc = 0x1A6214u;
        goto label_1a6214;
    }
    ctx->pc = 0x1A620Cu;
    {
        const bool branch_taken_0x1a620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a620c) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6214u;
label_1a6214:
    // 0x1a6214: 0x0  nop
    ctx->pc = 0x1a6214u;
    // NOP
label_1a6218:
    // 0x1a6218: 0xc065d00  jal         func_197400
label_1a621c:
    if (ctx->pc == 0x1A621Cu) {
        ctx->pc = 0x1A6220u;
        goto label_1a6220;
    }
    ctx->pc = 0x1A6218u;
    SET_GPR_U32(ctx, 31, 0x1A6220u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6220u; }
        if (ctx->pc != 0x1A6220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6220u; }
        if (ctx->pc != 0x1A6220u) { return; }
    }
    ctx->pc = 0x1A6220u;
label_1a6220:
    // 0x1a6220: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a6220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a6224:
    // 0x1a6224: 0x144300be  bne         $v0, $v1, . + 4 + (0xBE << 2)
label_1a6228:
    if (ctx->pc == 0x1A6228u) {
        ctx->pc = 0x1A622Cu;
        goto label_1a622c;
    }
    ctx->pc = 0x1A6224u;
    {
        const bool branch_taken_0x1a6224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a6224) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A622Cu;
label_1a622c:
    // 0x1a622c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a622cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a6230:
    // 0x1a6230: 0xc06560c  jal         func_195830
label_1a6234:
    if (ctx->pc == 0x1A6234u) {
        ctx->pc = 0x1A6234u;
            // 0x1a6234: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A6238u;
        goto label_1a6238;
    }
    ctx->pc = 0x1A6230u;
    SET_GPR_U32(ctx, 31, 0x1A6238u);
    ctx->pc = 0x1A6234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6230u;
            // 0x1a6234: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6238u; }
        if (ctx->pc != 0x1A6238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6238u; }
        if (ctx->pc != 0x1A6238u) { return; }
    }
    ctx->pc = 0x1A6238u;
label_1a6238:
    // 0x1a6238: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_1a623c:
    if (ctx->pc == 0x1A623Cu) {
        ctx->pc = 0x1A6240u;
        goto label_1a6240;
    }
    ctx->pc = 0x1A6238u;
    {
        const bool branch_taken_0x1a6238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6238) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6240u;
label_1a6240:
    // 0x1a6240: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x1a6240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
label_1a6244:
    // 0x1a6244: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a6244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6248:
    // 0x1a6248: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1a6248u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_1a624c:
    // 0x1a624c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1a624cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6250:
    // 0x1a6250: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1a6250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1a6254:
    // 0x1a6254: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x1a6254u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1a6258:
    // 0x1a6258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a6258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a625c:
    // 0x1a625c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1a6260:
    // 0x1a6260: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1a6260u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1a6264:
    // 0x1a6264: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a6264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a6268:
    // 0x1a6268: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a6268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a626c:
    // 0x1a626c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a626cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a6270:
    // 0x1a6270: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a6270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a6274:
    // 0x1a6274: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a6274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a6278:
    // 0x1a6278: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1a627c:
    if (ctx->pc == 0x1A627Cu) {
        ctx->pc = 0x1A627Cu;
            // 0x1a627c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1A6280u;
        goto label_1a6280;
    }
    ctx->pc = 0x1A6278u;
    {
        const bool branch_taken_0x1a6278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A627Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6278u;
            // 0x1a627c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6278) {
            ctx->pc = 0x1A6310u;
            goto label_1a6310;
        }
    }
    ctx->pc = 0x1A6280u;
label_1a6280:
    // 0x1a6280: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1a6284:
    if (ctx->pc == 0x1A6284u) {
        ctx->pc = 0x1A6288u;
        goto label_1a6288;
    }
    ctx->pc = 0x1A6280u;
    {
        const bool branch_taken_0x1a6280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6280) {
            ctx->pc = 0x1A62E8u;
            goto label_1a62e8;
        }
    }
    ctx->pc = 0x1A6288u;
label_1a6288:
    // 0x1a6288: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1a6288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1a628c:
    // 0x1a628c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1a6290:
    if (ctx->pc == 0x1A6290u) {
        ctx->pc = 0x1A6290u;
            // 0x1a6290: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1A6294u;
        goto label_1a6294;
    }
    ctx->pc = 0x1A628Cu;
    {
        const bool branch_taken_0x1a628c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A628Cu;
            // 0x1a6290: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a628c) {
            ctx->pc = 0x1A62C0u;
            goto label_1a62c0;
        }
    }
    ctx->pc = 0x1A6294u;
label_1a6294:
    // 0x1a6294: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1a6298:
    if (ctx->pc == 0x1A6298u) {
        ctx->pc = 0x1A629Cu;
        goto label_1a629c;
    }
    ctx->pc = 0x1A6294u;
    {
        const bool branch_taken_0x1a6294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6294) {
            ctx->pc = 0x1A62A8u;
            goto label_1a62a8;
        }
    }
    ctx->pc = 0x1A629Cu;
label_1a629c:
    // 0x1a629c: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_1a62a0:
    if (ctx->pc == 0x1A62A0u) {
        ctx->pc = 0x1A62A4u;
        goto label_1a62a4;
    }
    ctx->pc = 0x1A629Cu;
    {
        const bool branch_taken_0x1a629c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a629c) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A62A4u;
label_1a62a4:
    // 0x1a62a4: 0x0  nop
    ctx->pc = 0x1a62a4u;
    // NOP
label_1a62a8:
    // 0x1a62a8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a62a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a62ac:
    // 0x1a62ac: 0xc06560c  jal         func_195830
label_1a62b0:
    if (ctx->pc == 0x1A62B0u) {
        ctx->pc = 0x1A62B0u;
            // 0x1a62b0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A62B4u;
        goto label_1a62b4;
    }
    ctx->pc = 0x1A62ACu;
    SET_GPR_U32(ctx, 31, 0x1A62B4u);
    ctx->pc = 0x1A62B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62ACu;
            // 0x1a62b0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62B4u; }
        if (ctx->pc != 0x1A62B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62B4u; }
        if (ctx->pc != 0x1A62B4u) { return; }
    }
    ctx->pc = 0x1A62B4u;
label_1a62b4:
    // 0x1a62b4: 0x1000009a  b           . + 4 + (0x9A << 2)
label_1a62b8:
    if (ctx->pc == 0x1A62B8u) {
        ctx->pc = 0x1A62BCu;
        goto label_1a62bc;
    }
    ctx->pc = 0x1A62B4u;
    {
        const bool branch_taken_0x1a62b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a62b4) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A62BCu;
label_1a62bc:
    // 0x1a62bc: 0x0  nop
    ctx->pc = 0x1a62bcu;
    // NOP
label_1a62c0:
    // 0x1a62c0: 0xc065d00  jal         func_197400
label_1a62c4:
    if (ctx->pc == 0x1A62C4u) {
        ctx->pc = 0x1A62C8u;
        goto label_1a62c8;
    }
    ctx->pc = 0x1A62C0u;
    SET_GPR_U32(ctx, 31, 0x1A62C8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62C8u; }
        if (ctx->pc != 0x1A62C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62C8u; }
        if (ctx->pc != 0x1A62C8u) { return; }
    }
    ctx->pc = 0x1A62C8u;
label_1a62c8:
    // 0x1a62c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a62c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a62cc:
    // 0x1a62cc: 0x14430094  bne         $v0, $v1, . + 4 + (0x94 << 2)
label_1a62d0:
    if (ctx->pc == 0x1A62D0u) {
        ctx->pc = 0x1A62D4u;
        goto label_1a62d4;
    }
    ctx->pc = 0x1A62CCu;
    {
        const bool branch_taken_0x1a62cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a62cc) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A62D4u;
label_1a62d4:
    // 0x1a62d4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a62d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a62d8:
    // 0x1a62d8: 0xc06560c  jal         func_195830
label_1a62dc:
    if (ctx->pc == 0x1A62DCu) {
        ctx->pc = 0x1A62DCu;
            // 0x1a62dc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A62E0u;
        goto label_1a62e0;
    }
    ctx->pc = 0x1A62D8u;
    SET_GPR_U32(ctx, 31, 0x1A62E0u);
    ctx->pc = 0x1A62DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62D8u;
            // 0x1a62dc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62E0u; }
        if (ctx->pc != 0x1A62E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62E0u; }
        if (ctx->pc != 0x1A62E0u) { return; }
    }
    ctx->pc = 0x1A62E0u;
label_1a62e0:
    // 0x1a62e0: 0x1000008f  b           . + 4 + (0x8F << 2)
label_1a62e4:
    if (ctx->pc == 0x1A62E4u) {
        ctx->pc = 0x1A62E8u;
        goto label_1a62e8;
    }
    ctx->pc = 0x1A62E0u;
    {
        const bool branch_taken_0x1a62e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a62e0) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A62E8u;
label_1a62e8:
    // 0x1a62e8: 0xc065d00  jal         func_197400
label_1a62ec:
    if (ctx->pc == 0x1A62ECu) {
        ctx->pc = 0x1A62F0u;
        goto label_1a62f0;
    }
    ctx->pc = 0x1A62E8u;
    SET_GPR_U32(ctx, 31, 0x1A62F0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62F0u; }
        if (ctx->pc != 0x1A62F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62F0u; }
        if (ctx->pc != 0x1A62F0u) { return; }
    }
    ctx->pc = 0x1A62F0u;
label_1a62f0:
    // 0x1a62f0: 0x1840008b  blez        $v0, . + 4 + (0x8B << 2)
label_1a62f4:
    if (ctx->pc == 0x1A62F4u) {
        ctx->pc = 0x1A62F8u;
        goto label_1a62f8;
    }
    ctx->pc = 0x1A62F0u;
    {
        const bool branch_taken_0x1a62f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a62f0) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A62F8u;
label_1a62f8:
    // 0x1a62f8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a62f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a62fc:
    // 0x1a62fc: 0xc06560c  jal         func_195830
label_1a6300:
    if (ctx->pc == 0x1A6300u) {
        ctx->pc = 0x1A6300u;
            // 0x1a6300: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A6304u;
        goto label_1a6304;
    }
    ctx->pc = 0x1A62FCu;
    SET_GPR_U32(ctx, 31, 0x1A6304u);
    ctx->pc = 0x1A6300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62FCu;
            // 0x1a6300: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6304u; }
        if (ctx->pc != 0x1A6304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6304u; }
        if (ctx->pc != 0x1A6304u) { return; }
    }
    ctx->pc = 0x1A6304u;
label_1a6304:
    // 0x1a6304: 0x10000086  b           . + 4 + (0x86 << 2)
label_1a6308:
    if (ctx->pc == 0x1A6308u) {
        ctx->pc = 0x1A630Cu;
        goto label_1a630c;
    }
    ctx->pc = 0x1A6304u;
    {
        const bool branch_taken_0x1a6304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6304) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A630Cu;
label_1a630c:
    // 0x1a630c: 0x0  nop
    ctx->pc = 0x1a630cu;
    // NOP
label_1a6310:
    // 0x1a6310: 0xc065d00  jal         func_197400
label_1a6314:
    if (ctx->pc == 0x1A6314u) {
        ctx->pc = 0x1A6318u;
        goto label_1a6318;
    }
    ctx->pc = 0x1A6310u;
    SET_GPR_U32(ctx, 31, 0x1A6318u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6318u; }
        if (ctx->pc != 0x1A6318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6318u; }
        if (ctx->pc != 0x1A6318u) { return; }
    }
    ctx->pc = 0x1A6318u;
label_1a6318:
    // 0x1a6318: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a6318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a631c:
    // 0x1a631c: 0x14430080  bne         $v0, $v1, . + 4 + (0x80 << 2)
label_1a6320:
    if (ctx->pc == 0x1A6320u) {
        ctx->pc = 0x1A6324u;
        goto label_1a6324;
    }
    ctx->pc = 0x1A631Cu;
    {
        const bool branch_taken_0x1a631c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a631c) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6324u;
label_1a6324:
    // 0x1a6324: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a6324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a6328:
    // 0x1a6328: 0xc06560c  jal         func_195830
label_1a632c:
    if (ctx->pc == 0x1A632Cu) {
        ctx->pc = 0x1A632Cu;
            // 0x1a632c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A6330u;
        goto label_1a6330;
    }
    ctx->pc = 0x1A6328u;
    SET_GPR_U32(ctx, 31, 0x1A6330u);
    ctx->pc = 0x1A632Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6328u;
            // 0x1a632c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6330u; }
        if (ctx->pc != 0x1A6330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6330u; }
        if (ctx->pc != 0x1A6330u) { return; }
    }
    ctx->pc = 0x1A6330u;
label_1a6330:
    // 0x1a6330: 0x1000007b  b           . + 4 + (0x7B << 2)
label_1a6334:
    if (ctx->pc == 0x1A6334u) {
        ctx->pc = 0x1A6338u;
        goto label_1a6338;
    }
    ctx->pc = 0x1A6330u;
    {
        const bool branch_taken_0x1a6330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6330) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6338u;
label_1a6338:
    // 0x1a6338: 0x3c033c03  lui         $v1, 0x3C03
    ctx->pc = 0x1a6338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
label_1a633c:
    // 0x1a633c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6340:
    // 0x1a6340: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1a6340u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_1a6344:
    // 0x1a6344: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1a6344u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6348:
    // 0x1a6348: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x1a6348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
label_1a634c:
    // 0x1a634c: 0x34439ba6  ori         $v1, $v0, 0x9BA6
    ctx->pc = 0x1a634cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_1a6350:
    // 0x1a6350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a6350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6354:
    // 0x1a6354: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a6354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1a6358:
    // 0x1a6358: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1a6358u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1a635c:
    // 0x1a635c: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a635cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a6360:
    // 0x1a6360: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a6360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6364:
    // 0x1a6364: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a6364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6368:
    // 0x1a6368: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a6368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a636c:
    // 0x1a636c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a6370:
    // 0x1a6370: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1a6374:
    if (ctx->pc == 0x1A6374u) {
        ctx->pc = 0x1A6374u;
            // 0x1a6374: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1A6378u;
        goto label_1a6378;
    }
    ctx->pc = 0x1A6370u;
    {
        const bool branch_taken_0x1a6370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6370u;
            // 0x1a6374: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6370) {
            ctx->pc = 0x1A6408u;
            goto label_1a6408;
        }
    }
    ctx->pc = 0x1A6378u;
label_1a6378:
    // 0x1a6378: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1a637c:
    if (ctx->pc == 0x1A637Cu) {
        ctx->pc = 0x1A6380u;
        goto label_1a6380;
    }
    ctx->pc = 0x1A6378u;
    {
        const bool branch_taken_0x1a6378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6378) {
            ctx->pc = 0x1A63E0u;
            goto label_1a63e0;
        }
    }
    ctx->pc = 0x1A6380u;
label_1a6380:
    // 0x1a6380: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1a6380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1a6384:
    // 0x1a6384: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1a6388:
    if (ctx->pc == 0x1A6388u) {
        ctx->pc = 0x1A6388u;
            // 0x1a6388: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1A638Cu;
        goto label_1a638c;
    }
    ctx->pc = 0x1A6384u;
    {
        const bool branch_taken_0x1a6384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6384u;
            // 0x1a6388: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6384) {
            ctx->pc = 0x1A63B8u;
            goto label_1a63b8;
        }
    }
    ctx->pc = 0x1A638Cu;
label_1a638c:
    // 0x1a638c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1a6390:
    if (ctx->pc == 0x1A6390u) {
        ctx->pc = 0x1A6394u;
        goto label_1a6394;
    }
    ctx->pc = 0x1A638Cu;
    {
        const bool branch_taken_0x1a638c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a638c) {
            ctx->pc = 0x1A63A0u;
            goto label_1a63a0;
        }
    }
    ctx->pc = 0x1A6394u;
label_1a6394:
    // 0x1a6394: 0x10000062  b           . + 4 + (0x62 << 2)
label_1a6398:
    if (ctx->pc == 0x1A6398u) {
        ctx->pc = 0x1A639Cu;
        goto label_1a639c;
    }
    ctx->pc = 0x1A6394u;
    {
        const bool branch_taken_0x1a6394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6394) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A639Cu;
label_1a639c:
    // 0x1a639c: 0x0  nop
    ctx->pc = 0x1a639cu;
    // NOP
label_1a63a0:
    // 0x1a63a0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a63a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a63a4:
    // 0x1a63a4: 0xc06560c  jal         func_195830
label_1a63a8:
    if (ctx->pc == 0x1A63A8u) {
        ctx->pc = 0x1A63A8u;
            // 0x1a63a8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A63ACu;
        goto label_1a63ac;
    }
    ctx->pc = 0x1A63A4u;
    SET_GPR_U32(ctx, 31, 0x1A63ACu);
    ctx->pc = 0x1A63A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A63A4u;
            // 0x1a63a8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63ACu; }
        if (ctx->pc != 0x1A63ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63ACu; }
        if (ctx->pc != 0x1A63ACu) { return; }
    }
    ctx->pc = 0x1A63ACu;
label_1a63ac:
    // 0x1a63ac: 0x1000005c  b           . + 4 + (0x5C << 2)
label_1a63b0:
    if (ctx->pc == 0x1A63B0u) {
        ctx->pc = 0x1A63B4u;
        goto label_1a63b4;
    }
    ctx->pc = 0x1A63ACu;
    {
        const bool branch_taken_0x1a63ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a63ac) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A63B4u;
label_1a63b4:
    // 0x1a63b4: 0x0  nop
    ctx->pc = 0x1a63b4u;
    // NOP
label_1a63b8:
    // 0x1a63b8: 0xc065d00  jal         func_197400
label_1a63bc:
    if (ctx->pc == 0x1A63BCu) {
        ctx->pc = 0x1A63C0u;
        goto label_1a63c0;
    }
    ctx->pc = 0x1A63B8u;
    SET_GPR_U32(ctx, 31, 0x1A63C0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63C0u; }
        if (ctx->pc != 0x1A63C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63C0u; }
        if (ctx->pc != 0x1A63C0u) { return; }
    }
    ctx->pc = 0x1A63C0u;
label_1a63c0:
    // 0x1a63c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a63c4:
    // 0x1a63c4: 0x14430056  bne         $v0, $v1, . + 4 + (0x56 << 2)
label_1a63c8:
    if (ctx->pc == 0x1A63C8u) {
        ctx->pc = 0x1A63CCu;
        goto label_1a63cc;
    }
    ctx->pc = 0x1A63C4u;
    {
        const bool branch_taken_0x1a63c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a63c4) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A63CCu;
label_1a63cc:
    // 0x1a63cc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a63ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a63d0:
    // 0x1a63d0: 0xc06560c  jal         func_195830
label_1a63d4:
    if (ctx->pc == 0x1A63D4u) {
        ctx->pc = 0x1A63D4u;
            // 0x1a63d4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A63D8u;
        goto label_1a63d8;
    }
    ctx->pc = 0x1A63D0u;
    SET_GPR_U32(ctx, 31, 0x1A63D8u);
    ctx->pc = 0x1A63D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A63D0u;
            // 0x1a63d4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63D8u; }
        if (ctx->pc != 0x1A63D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63D8u; }
        if (ctx->pc != 0x1A63D8u) { return; }
    }
    ctx->pc = 0x1A63D8u;
label_1a63d8:
    // 0x1a63d8: 0x10000051  b           . + 4 + (0x51 << 2)
label_1a63dc:
    if (ctx->pc == 0x1A63DCu) {
        ctx->pc = 0x1A63E0u;
        goto label_1a63e0;
    }
    ctx->pc = 0x1A63D8u;
    {
        const bool branch_taken_0x1a63d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a63d8) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A63E0u;
label_1a63e0:
    // 0x1a63e0: 0xc065d00  jal         func_197400
label_1a63e4:
    if (ctx->pc == 0x1A63E4u) {
        ctx->pc = 0x1A63E8u;
        goto label_1a63e8;
    }
    ctx->pc = 0x1A63E0u;
    SET_GPR_U32(ctx, 31, 0x1A63E8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63E8u; }
        if (ctx->pc != 0x1A63E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63E8u; }
        if (ctx->pc != 0x1A63E8u) { return; }
    }
    ctx->pc = 0x1A63E8u;
label_1a63e8:
    // 0x1a63e8: 0x1840004d  blez        $v0, . + 4 + (0x4D << 2)
label_1a63ec:
    if (ctx->pc == 0x1A63ECu) {
        ctx->pc = 0x1A63F0u;
        goto label_1a63f0;
    }
    ctx->pc = 0x1A63E8u;
    {
        const bool branch_taken_0x1a63e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a63e8) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A63F0u;
label_1a63f0:
    // 0x1a63f0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a63f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a63f4:
    // 0x1a63f4: 0xc06560c  jal         func_195830
label_1a63f8:
    if (ctx->pc == 0x1A63F8u) {
        ctx->pc = 0x1A63F8u;
            // 0x1a63f8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A63FCu;
        goto label_1a63fc;
    }
    ctx->pc = 0x1A63F4u;
    SET_GPR_U32(ctx, 31, 0x1A63FCu);
    ctx->pc = 0x1A63F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A63F4u;
            // 0x1a63f8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63FCu; }
        if (ctx->pc != 0x1A63FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63FCu; }
        if (ctx->pc != 0x1A63FCu) { return; }
    }
    ctx->pc = 0x1A63FCu;
label_1a63fc:
    // 0x1a63fc: 0x10000048  b           . + 4 + (0x48 << 2)
label_1a6400:
    if (ctx->pc == 0x1A6400u) {
        ctx->pc = 0x1A6404u;
        goto label_1a6404;
    }
    ctx->pc = 0x1A63FCu;
    {
        const bool branch_taken_0x1a63fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a63fc) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6404u;
label_1a6404:
    // 0x1a6404: 0x0  nop
    ctx->pc = 0x1a6404u;
    // NOP
label_1a6408:
    // 0x1a6408: 0xc065d00  jal         func_197400
label_1a640c:
    if (ctx->pc == 0x1A640Cu) {
        ctx->pc = 0x1A6410u;
        goto label_1a6410;
    }
    ctx->pc = 0x1A6408u;
    SET_GPR_U32(ctx, 31, 0x1A6410u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6410u; }
        if (ctx->pc != 0x1A6410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6410u; }
        if (ctx->pc != 0x1A6410u) { return; }
    }
    ctx->pc = 0x1A6410u;
label_1a6410:
    // 0x1a6410: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a6410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a6414:
    // 0x1a6414: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
label_1a6418:
    if (ctx->pc == 0x1A6418u) {
        ctx->pc = 0x1A641Cu;
        goto label_1a641c;
    }
    ctx->pc = 0x1A6414u;
    {
        const bool branch_taken_0x1a6414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a6414) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A641Cu;
label_1a641c:
    // 0x1a641c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a641cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a6420:
    // 0x1a6420: 0xc06560c  jal         func_195830
label_1a6424:
    if (ctx->pc == 0x1A6424u) {
        ctx->pc = 0x1A6424u;
            // 0x1a6424: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A6428u;
        goto label_1a6428;
    }
    ctx->pc = 0x1A6420u;
    SET_GPR_U32(ctx, 31, 0x1A6428u);
    ctx->pc = 0x1A6424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6420u;
            // 0x1a6424: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6428u; }
        if (ctx->pc != 0x1A6428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6428u; }
        if (ctx->pc != 0x1A6428u) { return; }
    }
    ctx->pc = 0x1A6428u;
label_1a6428:
    // 0x1a6428: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1a642c:
    if (ctx->pc == 0x1A642Cu) {
        ctx->pc = 0x1A6430u;
        goto label_1a6430;
    }
    ctx->pc = 0x1A6428u;
    {
        const bool branch_taken_0x1a6428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6428) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6430u;
label_1a6430:
    // 0x1a6430: 0x3c033c03  lui         $v1, 0x3C03
    ctx->pc = 0x1a6430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
label_1a6434:
    // 0x1a6434: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a6434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6438:
    // 0x1a6438: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1a6438u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_1a643c:
    // 0x1a643c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1a643cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6440:
    // 0x1a6440: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x1a6440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
label_1a6444:
    // 0x1a6444: 0x34439ba6  ori         $v1, $v0, 0x9BA6
    ctx->pc = 0x1a6444u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_1a6448:
    // 0x1a6448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a6448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a644c:
    // 0x1a644c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1a6450:
    // 0x1a6450: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1a6450u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1a6454:
    // 0x1a6454: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a6454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a6458:
    // 0x1a6458: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a6458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a645c:
    // 0x1a645c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a645cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6460:
    // 0x1a6460: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a6460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a6464:
    // 0x1a6464: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a6464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a6468:
    // 0x1a6468: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1a646c:
    if (ctx->pc == 0x1A646Cu) {
        ctx->pc = 0x1A646Cu;
            // 0x1a646c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1A6470u;
        goto label_1a6470;
    }
    ctx->pc = 0x1A6468u;
    {
        const bool branch_taken_0x1a6468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A646Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6468u;
            // 0x1a646c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6468) {
            ctx->pc = 0x1A6500u;
            goto label_1a6500;
        }
    }
    ctx->pc = 0x1A6470u;
label_1a6470:
    // 0x1a6470: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1a6474:
    if (ctx->pc == 0x1A6474u) {
        ctx->pc = 0x1A6478u;
        goto label_1a6478;
    }
    ctx->pc = 0x1A6470u;
    {
        const bool branch_taken_0x1a6470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6470) {
            ctx->pc = 0x1A64D8u;
            goto label_1a64d8;
        }
    }
    ctx->pc = 0x1A6478u;
label_1a6478:
    // 0x1a6478: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1a6478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1a647c:
    // 0x1a647c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1a6480:
    if (ctx->pc == 0x1A6480u) {
        ctx->pc = 0x1A6480u;
            // 0x1a6480: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1A6484u;
        goto label_1a6484;
    }
    ctx->pc = 0x1A647Cu;
    {
        const bool branch_taken_0x1a647c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A647Cu;
            // 0x1a6480: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a647c) {
            ctx->pc = 0x1A64B0u;
            goto label_1a64b0;
        }
    }
    ctx->pc = 0x1A6484u;
label_1a6484:
    // 0x1a6484: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1a6488:
    if (ctx->pc == 0x1A6488u) {
        ctx->pc = 0x1A648Cu;
        goto label_1a648c;
    }
    ctx->pc = 0x1A6484u;
    {
        const bool branch_taken_0x1a6484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6484) {
            ctx->pc = 0x1A6498u;
            goto label_1a6498;
        }
    }
    ctx->pc = 0x1A648Cu;
label_1a648c:
    // 0x1a648c: 0x10000024  b           . + 4 + (0x24 << 2)
label_1a6490:
    if (ctx->pc == 0x1A6490u) {
        ctx->pc = 0x1A6494u;
        goto label_1a6494;
    }
    ctx->pc = 0x1A648Cu;
    {
        const bool branch_taken_0x1a648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a648c) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6494u;
label_1a6494:
    // 0x1a6494: 0x0  nop
    ctx->pc = 0x1a6494u;
    // NOP
label_1a6498:
    // 0x1a6498: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a6498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a649c:
    // 0x1a649c: 0xc06560c  jal         func_195830
label_1a64a0:
    if (ctx->pc == 0x1A64A0u) {
        ctx->pc = 0x1A64A0u;
            // 0x1a64a0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A64A4u;
        goto label_1a64a4;
    }
    ctx->pc = 0x1A649Cu;
    SET_GPR_U32(ctx, 31, 0x1A64A4u);
    ctx->pc = 0x1A64A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A649Cu;
            // 0x1a64a0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64A4u; }
        if (ctx->pc != 0x1A64A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64A4u; }
        if (ctx->pc != 0x1A64A4u) { return; }
    }
    ctx->pc = 0x1A64A4u;
label_1a64a4:
    // 0x1a64a4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1a64a8:
    if (ctx->pc == 0x1A64A8u) {
        ctx->pc = 0x1A64ACu;
        goto label_1a64ac;
    }
    ctx->pc = 0x1A64A4u;
    {
        const bool branch_taken_0x1a64a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a64a4) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A64ACu;
label_1a64ac:
    // 0x1a64ac: 0x0  nop
    ctx->pc = 0x1a64acu;
    // NOP
label_1a64b0:
    // 0x1a64b0: 0xc065d00  jal         func_197400
label_1a64b4:
    if (ctx->pc == 0x1A64B4u) {
        ctx->pc = 0x1A64B8u;
        goto label_1a64b8;
    }
    ctx->pc = 0x1A64B0u;
    SET_GPR_U32(ctx, 31, 0x1A64B8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64B8u; }
        if (ctx->pc != 0x1A64B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64B8u; }
        if (ctx->pc != 0x1A64B8u) { return; }
    }
    ctx->pc = 0x1A64B8u;
label_1a64b8:
    // 0x1a64b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a64bc:
    // 0x1a64bc: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_1a64c0:
    if (ctx->pc == 0x1A64C0u) {
        ctx->pc = 0x1A64C4u;
        goto label_1a64c4;
    }
    ctx->pc = 0x1A64BCu;
    {
        const bool branch_taken_0x1a64bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a64bc) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A64C4u;
label_1a64c4:
    // 0x1a64c4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a64c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a64c8:
    // 0x1a64c8: 0xc06560c  jal         func_195830
label_1a64cc:
    if (ctx->pc == 0x1A64CCu) {
        ctx->pc = 0x1A64CCu;
            // 0x1a64cc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A64D0u;
        goto label_1a64d0;
    }
    ctx->pc = 0x1A64C8u;
    SET_GPR_U32(ctx, 31, 0x1A64D0u);
    ctx->pc = 0x1A64CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A64C8u;
            // 0x1a64cc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64D0u; }
        if (ctx->pc != 0x1A64D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64D0u; }
        if (ctx->pc != 0x1A64D0u) { return; }
    }
    ctx->pc = 0x1A64D0u;
label_1a64d0:
    // 0x1a64d0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a64d4:
    if (ctx->pc == 0x1A64D4u) {
        ctx->pc = 0x1A64D8u;
        goto label_1a64d8;
    }
    ctx->pc = 0x1A64D0u;
    {
        const bool branch_taken_0x1a64d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a64d0) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A64D8u;
label_1a64d8:
    // 0x1a64d8: 0xc065d00  jal         func_197400
label_1a64dc:
    if (ctx->pc == 0x1A64DCu) {
        ctx->pc = 0x1A64E0u;
        goto label_1a64e0;
    }
    ctx->pc = 0x1A64D8u;
    SET_GPR_U32(ctx, 31, 0x1A64E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64E0u; }
        if (ctx->pc != 0x1A64E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64E0u; }
        if (ctx->pc != 0x1A64E0u) { return; }
    }
    ctx->pc = 0x1A64E0u;
label_1a64e0:
    // 0x1a64e0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_1a64e4:
    if (ctx->pc == 0x1A64E4u) {
        ctx->pc = 0x1A64E8u;
        goto label_1a64e8;
    }
    ctx->pc = 0x1A64E0u;
    {
        const bool branch_taken_0x1a64e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a64e0) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A64E8u;
label_1a64e8:
    // 0x1a64e8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a64e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a64ec:
    // 0x1a64ec: 0xc06560c  jal         func_195830
label_1a64f0:
    if (ctx->pc == 0x1A64F0u) {
        ctx->pc = 0x1A64F0u;
            // 0x1a64f0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A64F4u;
        goto label_1a64f4;
    }
    ctx->pc = 0x1A64ECu;
    SET_GPR_U32(ctx, 31, 0x1A64F4u);
    ctx->pc = 0x1A64F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A64ECu;
            // 0x1a64f0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64F4u; }
        if (ctx->pc != 0x1A64F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64F4u; }
        if (ctx->pc != 0x1A64F4u) { return; }
    }
    ctx->pc = 0x1A64F4u;
label_1a64f4:
    // 0x1a64f4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a64f8:
    if (ctx->pc == 0x1A64F8u) {
        ctx->pc = 0x1A64FCu;
        goto label_1a64fc;
    }
    ctx->pc = 0x1A64F4u;
    {
        const bool branch_taken_0x1a64f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a64f4) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A64FCu;
label_1a64fc:
    // 0x1a64fc: 0x0  nop
    ctx->pc = 0x1a64fcu;
    // NOP
label_1a6500:
    // 0x1a6500: 0xc065d00  jal         func_197400
label_1a6504:
    if (ctx->pc == 0x1A6504u) {
        ctx->pc = 0x1A6508u;
        goto label_1a6508;
    }
    ctx->pc = 0x1A6500u;
    SET_GPR_U32(ctx, 31, 0x1A6508u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6508u; }
        if (ctx->pc != 0x1A6508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6508u; }
        if (ctx->pc != 0x1A6508u) { return; }
    }
    ctx->pc = 0x1A6508u;
label_1a6508:
    // 0x1a6508: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a6508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a650c:
    // 0x1a650c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1a6510:
    if (ctx->pc == 0x1A6510u) {
        ctx->pc = 0x1A6514u;
        goto label_1a6514;
    }
    ctx->pc = 0x1A650Cu;
    {
        const bool branch_taken_0x1a650c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a650c) {
            ctx->pc = 0x1A6520u;
            goto label_1a6520;
        }
    }
    ctx->pc = 0x1A6514u;
label_1a6514:
    // 0x1a6514: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a6514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a6518:
    // 0x1a6518: 0xc06560c  jal         func_195830
label_1a651c:
    if (ctx->pc == 0x1A651Cu) {
        ctx->pc = 0x1A651Cu;
            // 0x1a651c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A6520u;
        goto label_1a6520;
    }
    ctx->pc = 0x1A6518u;
    SET_GPR_U32(ctx, 31, 0x1A6520u);
    ctx->pc = 0x1A651Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6518u;
            // 0x1a651c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6520u; }
        if (ctx->pc != 0x1A6520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6520u; }
        if (ctx->pc != 0x1A6520u) { return; }
    }
    ctx->pc = 0x1A6520u;
label_1a6520:
    // 0x1a6520: 0xc04b788  jal         func_12DE20
label_1a6524:
    if (ctx->pc == 0x1A6524u) {
        ctx->pc = 0x1A6524u;
            // 0x1a6524: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A6528u;
        goto label_1a6528;
    }
    ctx->pc = 0x1A6520u;
    SET_GPR_U32(ctx, 31, 0x1A6528u);
    ctx->pc = 0x1A6524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6520u;
            // 0x1a6524: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6528u; }
        if (ctx->pc != 0x1A6528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6528u; }
        if (ctx->pc != 0x1A6528u) { return; }
    }
    ctx->pc = 0x1A6528u;
label_1a6528:
    // 0x1a6528: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a652c:
    // 0x1a652c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1a652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6530:
    // 0x1a6530: 0xc04b7da  jal         func_12DF68
label_1a6534:
    if (ctx->pc == 0x1A6534u) {
        ctx->pc = 0x1A6534u;
            // 0x1a6534: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6538u;
        goto label_1a6538;
    }
    ctx->pc = 0x1A6530u;
    SET_GPR_U32(ctx, 31, 0x1A6538u);
    ctx->pc = 0x1A6534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6530u;
            // 0x1a6534: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6538u; }
        if (ctx->pc != 0x1A6538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6538u; }
        if (ctx->pc != 0x1A6538u) { return; }
    }
    ctx->pc = 0x1A6538u;
label_1a6538:
    // 0x1a6538: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a653c:
    // 0x1a653c: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1a653cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6540:
    // 0x1a6540: 0xc04b804  jal         func_12E010
label_1a6544:
    if (ctx->pc == 0x1A6544u) {
        ctx->pc = 0x1A6544u;
            // 0x1a6544: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6548u;
        goto label_1a6548;
    }
    ctx->pc = 0x1A6540u;
    SET_GPR_U32(ctx, 31, 0x1A6548u);
    ctx->pc = 0x1A6544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6540u;
            // 0x1a6544: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6548u; }
        if (ctx->pc != 0x1A6548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6548u; }
        if (ctx->pc != 0x1A6548u) { return; }
    }
    ctx->pc = 0x1A6548u;
label_1a6548:
    // 0x1a6548: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a654c:
    // 0x1a654c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1a654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6550:
    // 0x1a6550: 0xc04b7b0  jal         func_12DEC0
label_1a6554:
    if (ctx->pc == 0x1A6554u) {
        ctx->pc = 0x1A6554u;
            // 0x1a6554: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6558u;
        goto label_1a6558;
    }
    ctx->pc = 0x1A6550u;
    SET_GPR_U32(ctx, 31, 0x1A6558u);
    ctx->pc = 0x1A6554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6550u;
            // 0x1a6554: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6558u; }
        if (ctx->pc != 0x1A6558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6558u; }
        if (ctx->pc != 0x1A6558u) { return; }
    }
    ctx->pc = 0x1A6558u;
label_1a6558:
    // 0x1a6558: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a655c:
    // 0x1a655c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a655cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6560:
    // 0x1a6560: 0xc04b75e  jal         func_12DD78
label_1a6564:
    if (ctx->pc == 0x1A6564u) {
        ctx->pc = 0x1A6564u;
            // 0x1a6564: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1A6568u;
        goto label_1a6568;
    }
    ctx->pc = 0x1A6560u;
    SET_GPR_U32(ctx, 31, 0x1A6568u);
    ctx->pc = 0x1A6564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6560u;
            // 0x1a6564: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6568u; }
        if (ctx->pc != 0x1A6568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6568u; }
        if (ctx->pc != 0x1A6568u) { return; }
    }
    ctx->pc = 0x1A6568u;
label_1a6568:
    // 0x1a6568: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a6568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a656c:
    // 0x1a656c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a6570:
    // 0x1a6570: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a6570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a6574:
    // 0x1a6574: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1a6578:
    if (ctx->pc == 0x1A6578u) {
        ctx->pc = 0x1A657Cu;
        goto label_1a657c;
    }
    ctx->pc = 0x1A6574u;
    {
        const bool branch_taken_0x1a6574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6574) {
            ctx->pc = 0x1A65C8u;
            goto label_1a65c8;
        }
    }
    ctx->pc = 0x1A657Cu;
label_1a657c:
    // 0x1a657c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1a657cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1a6580:
    // 0x1a6580: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a6584:
    if (ctx->pc == 0x1A6584u) {
        ctx->pc = 0x1A6588u;
        goto label_1a6588;
    }
    ctx->pc = 0x1A6580u;
    {
        const bool branch_taken_0x1a6580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6580) {
            ctx->pc = 0x1A6598u;
            goto label_1a6598;
        }
    }
    ctx->pc = 0x1A6588u;
label_1a6588:
    // 0x1a6588: 0xc0604f0  jal         func_1813C0
label_1a658c:
    if (ctx->pc == 0x1A658Cu) {
        ctx->pc = 0x1A658Cu;
            // 0x1a658c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A6590u;
        goto label_1a6590;
    }
    ctx->pc = 0x1A6588u;
    SET_GPR_U32(ctx, 31, 0x1A6590u);
    ctx->pc = 0x1A658Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6588u;
            // 0x1a658c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6590u; }
        if (ctx->pc != 0x1A6590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6590u; }
        if (ctx->pc != 0x1A6590u) { return; }
    }
    ctx->pc = 0x1A6590u;
label_1a6590:
    // 0x1a6590: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a6594:
    if (ctx->pc == 0x1A6594u) {
        ctx->pc = 0x1A6598u;
        goto label_1a6598;
    }
    ctx->pc = 0x1A6590u;
    {
        const bool branch_taken_0x1a6590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6590) {
            ctx->pc = 0x1A65A0u;
            goto label_1a65a0;
        }
    }
    ctx->pc = 0x1A6598u;
label_1a6598:
    // 0x1a6598: 0xc0604dc  jal         func_181370
label_1a659c:
    if (ctx->pc == 0x1A659Cu) {
        ctx->pc = 0x1A659Cu;
            // 0x1a659c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A65A0u;
        goto label_1a65a0;
    }
    ctx->pc = 0x1A6598u;
    SET_GPR_U32(ctx, 31, 0x1A65A0u);
    ctx->pc = 0x1A659Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6598u;
            // 0x1a659c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A65A0u; }
        if (ctx->pc != 0x1A65A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A65A0u; }
        if (ctx->pc != 0x1A65A0u) { return; }
    }
    ctx->pc = 0x1A65A0u;
label_1a65a0:
    // 0x1a65a0: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1a65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1a65a4:
    // 0x1a65a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a65a8:
    if (ctx->pc == 0x1A65A8u) {
        ctx->pc = 0x1A65ACu;
        goto label_1a65ac;
    }
    ctx->pc = 0x1A65A4u;
    {
        const bool branch_taken_0x1a65a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a65a4) {
            ctx->pc = 0x1A65B8u;
            goto label_1a65b8;
        }
    }
    ctx->pc = 0x1A65ACu;
label_1a65ac:
    // 0x1a65ac: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a65b0:
    if (ctx->pc == 0x1A65B0u) {
        ctx->pc = 0x1A65B0u;
            // 0x1a65b0: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1A65B4u;
        goto label_1a65b4;
    }
    ctx->pc = 0x1A65ACu;
    {
        const bool branch_taken_0x1a65ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A65ACu;
            // 0x1a65b0: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65ac) {
            ctx->pc = 0x1A65D8u;
            goto label_1a65d8;
        }
    }
    ctx->pc = 0x1A65B4u;
label_1a65b4:
    // 0x1a65b4: 0x0  nop
    ctx->pc = 0x1a65b4u;
    // NOP
label_1a65b8:
    // 0x1a65b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a65b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a65bc:
    // 0x1a65bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a65c0:
    if (ctx->pc == 0x1A65C0u) {
        ctx->pc = 0x1A65C0u;
            // 0x1a65c0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1A65C4u;
        goto label_1a65c4;
    }
    ctx->pc = 0x1A65BCu;
    {
        const bool branch_taken_0x1a65bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A65BCu;
            // 0x1a65c0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65bc) {
            ctx->pc = 0x1A65D8u;
            goto label_1a65d8;
        }
    }
    ctx->pc = 0x1A65C4u;
label_1a65c4:
    // 0x1a65c4: 0x0  nop
    ctx->pc = 0x1a65c4u;
    // NOP
label_1a65c8:
    // 0x1a65c8: 0xc0604dc  jal         func_181370
label_1a65cc:
    if (ctx->pc == 0x1A65CCu) {
        ctx->pc = 0x1A65CCu;
            // 0x1a65cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A65D0u;
        goto label_1a65d0;
    }
    ctx->pc = 0x1A65C8u;
    SET_GPR_U32(ctx, 31, 0x1A65D0u);
    ctx->pc = 0x1A65CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A65C8u;
            // 0x1a65cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A65D0u; }
        if (ctx->pc != 0x1A65D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A65D0u; }
        if (ctx->pc != 0x1A65D0u) { return; }
    }
    ctx->pc = 0x1A65D0u;
label_1a65d0:
    // 0x1a65d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a65d4:
    // 0x1a65d4: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1a65d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1a65d8:
    // 0x1a65d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a65dc:
    // 0x1a65dc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1a65dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1a65e0:
    // 0x1a65e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a65e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a65e4:
    // 0x1a65e4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a65e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1a65e8:
    // 0x1a65e8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1a65ec:
    // 0x1a65ec: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1a65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1a65f0:
    // 0x1a65f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a65f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a65f4:
    // 0x1a65f4: 0x0  nop
    ctx->pc = 0x1a65f4u;
    // NOP
label_1a65f8:
    // 0x1a65f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a65f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a65fc:
    // 0x1a65fc: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1a65fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1a6600:
    // 0x1a6600: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a6600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a6604:
    // 0x1a6604: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1a6604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1a6608:
    // 0x1a6608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a660c:
    // 0x1a660c: 0x0  nop
    ctx->pc = 0x1a660cu;
    // NOP
label_1a6610:
    // 0x1a6610: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a6610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a6614:
    // 0x1a6614: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1a6614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1a6618:
    // 0x1a6618: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a6618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1a661c:
    // 0x1a661c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1a661cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1a6620:
    // 0x1a6620: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6624:
    // 0x1a6624: 0x0  nop
    ctx->pc = 0x1a6624u;
    // NOP
label_1a6628:
    // 0x1a6628: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a6628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a662c:
    // 0x1a662c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1a662cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1a6630:
    // 0x1a6630: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a6630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a6634:
    // 0x1a6634: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1a6634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1a6638:
    // 0x1a6638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a663c:
    // 0x1a663c: 0x0  nop
    ctx->pc = 0x1a663cu;
    // NOP
label_1a6640:
    // 0x1a6640: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a6640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a6644:
    // 0x1a6644: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1a6644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1a6648:
    // 0x1a6648: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a6648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a664c:
    // 0x1a664c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6650:
    // 0x1a6650: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1a6650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1a6654:
    // 0x1a6654: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a6654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6658:
    // 0x1a6658: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1a6658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a665c:
    // 0x1a665c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1a665cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6660:
    // 0x1a6660: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1a6664:
    if (ctx->pc == 0x1A6664u) {
        ctx->pc = 0x1A6664u;
            // 0x1a6664: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1A6668u;
        goto label_1a6668;
    }
    ctx->pc = 0x1A6660u;
    {
        const bool branch_taken_0x1a6660 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6660u;
            // 0x1a6664: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6660) {
            ctx->pc = 0x1A66A8u;
            goto label_1a66a8;
        }
    }
    ctx->pc = 0x1A6668u;
label_1a6668:
    // 0x1a6668: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a666c:
    // 0x1a666c: 0x0  nop
    ctx->pc = 0x1a666cu;
    // NOP
label_1a6670:
    // 0x1a6670: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1a6670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6674:
    // 0x1a6674: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_1a6678:
    if (ctx->pc == 0x1A6678u) {
        ctx->pc = 0x1A667Cu;
        goto label_1a667c;
    }
    ctx->pc = 0x1A6674u;
    {
        const bool branch_taken_0x1a6674 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6674) {
            ctx->pc = 0x1A66A8u;
            goto label_1a66a8;
        }
    }
    ctx->pc = 0x1A667Cu;
label_1a667c:
    // 0x1a667c: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x1a667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6680:
    // 0x1a6680: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a6680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1a6684:
    // 0x1a6684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6688:
    // 0x1a6688: 0x0  nop
    ctx->pc = 0x1a6688u;
    // NOP
label_1a668c:
    // 0x1a668c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1a668cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6690:
    // 0x1a6690: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1a6694:
    if (ctx->pc == 0x1A6694u) {
        ctx->pc = 0x1A6698u;
        goto label_1a6698;
    }
    ctx->pc = 0x1A6690u;
    {
        const bool branch_taken_0x1a6690 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6690) {
            ctx->pc = 0x1A66A8u;
            goto label_1a66a8;
        }
    }
    ctx->pc = 0x1A6698u;
label_1a6698:
    // 0x1a6698: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1a6698u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a669c:
    // 0x1a669c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1a66a0:
    if (ctx->pc == 0x1A66A0u) {
        ctx->pc = 0x1A66A4u;
        goto label_1a66a4;
    }
    ctx->pc = 0x1A669Cu;
    {
        const bool branch_taken_0x1a669c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a669c) {
            ctx->pc = 0x1A66C0u;
            goto label_1a66c0;
        }
    }
    ctx->pc = 0x1A66A4u;
label_1a66a4:
    // 0x1a66a4: 0x0  nop
    ctx->pc = 0x1a66a4u;
    // NOP
label_1a66a8:
    // 0x1a66a8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1a66a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1a66ac:
    // 0x1a66ac: 0x40f809  jalr        $v0
label_1a66b0:
    if (ctx->pc == 0x1A66B0u) {
        ctx->pc = 0x1A66B0u;
            // 0x1a66b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A66B4u;
        goto label_1a66b4;
    }
    ctx->pc = 0x1A66ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A66B4u);
        ctx->pc = 0x1A66B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66ACu;
            // 0x1a66b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5D40u: goto label_1a5d40;
            case 0x1A5D44u: goto label_1a5d44;
            case 0x1A5D48u: goto label_1a5d48;
            case 0x1A5D4Cu: goto label_1a5d4c;
            case 0x1A5D50u: goto label_1a5d50;
            case 0x1A5D54u: goto label_1a5d54;
            case 0x1A5D58u: goto label_1a5d58;
            case 0x1A5D5Cu: goto label_1a5d5c;
            case 0x1A5D60u: goto label_1a5d60;
            case 0x1A5D64u: goto label_1a5d64;
            case 0x1A5D68u: goto label_1a5d68;
            case 0x1A5D6Cu: goto label_1a5d6c;
            case 0x1A5D70u: goto label_1a5d70;
            case 0x1A5D74u: goto label_1a5d74;
            case 0x1A5D78u: goto label_1a5d78;
            case 0x1A5D7Cu: goto label_1a5d7c;
            case 0x1A5D80u: goto label_1a5d80;
            case 0x1A5D84u: goto label_1a5d84;
            case 0x1A5D88u: goto label_1a5d88;
            case 0x1A5D8Cu: goto label_1a5d8c;
            case 0x1A5D90u: goto label_1a5d90;
            case 0x1A5D94u: goto label_1a5d94;
            case 0x1A5D98u: goto label_1a5d98;
            case 0x1A5D9Cu: goto label_1a5d9c;
            case 0x1A5DA0u: goto label_1a5da0;
            case 0x1A5DA4u: goto label_1a5da4;
            case 0x1A5DA8u: goto label_1a5da8;
            case 0x1A5DACu: goto label_1a5dac;
            case 0x1A5DB0u: goto label_1a5db0;
            case 0x1A5DB4u: goto label_1a5db4;
            case 0x1A5DB8u: goto label_1a5db8;
            case 0x1A5DBCu: goto label_1a5dbc;
            case 0x1A5DC0u: goto label_1a5dc0;
            case 0x1A5DC4u: goto label_1a5dc4;
            case 0x1A5DC8u: goto label_1a5dc8;
            case 0x1A5DCCu: goto label_1a5dcc;
            case 0x1A5DD0u: goto label_1a5dd0;
            case 0x1A5DD4u: goto label_1a5dd4;
            case 0x1A5DD8u: goto label_1a5dd8;
            case 0x1A5DDCu: goto label_1a5ddc;
            case 0x1A5DE0u: goto label_1a5de0;
            case 0x1A5DE4u: goto label_1a5de4;
            case 0x1A5DE8u: goto label_1a5de8;
            case 0x1A5DECu: goto label_1a5dec;
            case 0x1A5DF0u: goto label_1a5df0;
            case 0x1A5DF4u: goto label_1a5df4;
            case 0x1A5DF8u: goto label_1a5df8;
            case 0x1A5DFCu: goto label_1a5dfc;
            case 0x1A5E00u: goto label_1a5e00;
            case 0x1A5E04u: goto label_1a5e04;
            case 0x1A5E08u: goto label_1a5e08;
            case 0x1A5E0Cu: goto label_1a5e0c;
            case 0x1A5E10u: goto label_1a5e10;
            case 0x1A5E14u: goto label_1a5e14;
            case 0x1A5E18u: goto label_1a5e18;
            case 0x1A5E1Cu: goto label_1a5e1c;
            case 0x1A5E20u: goto label_1a5e20;
            case 0x1A5E24u: goto label_1a5e24;
            case 0x1A5E28u: goto label_1a5e28;
            case 0x1A5E2Cu: goto label_1a5e2c;
            case 0x1A5E30u: goto label_1a5e30;
            case 0x1A5E34u: goto label_1a5e34;
            case 0x1A5E38u: goto label_1a5e38;
            case 0x1A5E3Cu: goto label_1a5e3c;
            case 0x1A5E40u: goto label_1a5e40;
            case 0x1A5E44u: goto label_1a5e44;
            case 0x1A5E48u: goto label_1a5e48;
            case 0x1A5E4Cu: goto label_1a5e4c;
            case 0x1A5E50u: goto label_1a5e50;
            case 0x1A5E54u: goto label_1a5e54;
            case 0x1A5E58u: goto label_1a5e58;
            case 0x1A5E5Cu: goto label_1a5e5c;
            case 0x1A5E60u: goto label_1a5e60;
            case 0x1A5E64u: goto label_1a5e64;
            case 0x1A5E68u: goto label_1a5e68;
            case 0x1A5E6Cu: goto label_1a5e6c;
            case 0x1A5E70u: goto label_1a5e70;
            case 0x1A5E74u: goto label_1a5e74;
            case 0x1A5E78u: goto label_1a5e78;
            case 0x1A5E7Cu: goto label_1a5e7c;
            case 0x1A5E80u: goto label_1a5e80;
            case 0x1A5E84u: goto label_1a5e84;
            case 0x1A5E88u: goto label_1a5e88;
            case 0x1A5E8Cu: goto label_1a5e8c;
            case 0x1A5E90u: goto label_1a5e90;
            case 0x1A5E94u: goto label_1a5e94;
            case 0x1A5E98u: goto label_1a5e98;
            case 0x1A5E9Cu: goto label_1a5e9c;
            case 0x1A5EA0u: goto label_1a5ea0;
            case 0x1A5EA4u: goto label_1a5ea4;
            case 0x1A5EA8u: goto label_1a5ea8;
            case 0x1A5EACu: goto label_1a5eac;
            case 0x1A5EB0u: goto label_1a5eb0;
            case 0x1A5EB4u: goto label_1a5eb4;
            case 0x1A5EB8u: goto label_1a5eb8;
            case 0x1A5EBCu: goto label_1a5ebc;
            case 0x1A5EC0u: goto label_1a5ec0;
            case 0x1A5EC4u: goto label_1a5ec4;
            case 0x1A5EC8u: goto label_1a5ec8;
            case 0x1A5ECCu: goto label_1a5ecc;
            case 0x1A5ED0u: goto label_1a5ed0;
            case 0x1A5ED4u: goto label_1a5ed4;
            case 0x1A5ED8u: goto label_1a5ed8;
            case 0x1A5EDCu: goto label_1a5edc;
            case 0x1A5EE0u: goto label_1a5ee0;
            case 0x1A5EE4u: goto label_1a5ee4;
            case 0x1A5EE8u: goto label_1a5ee8;
            case 0x1A5EECu: goto label_1a5eec;
            case 0x1A5EF0u: goto label_1a5ef0;
            case 0x1A5EF4u: goto label_1a5ef4;
            case 0x1A5EF8u: goto label_1a5ef8;
            case 0x1A5EFCu: goto label_1a5efc;
            case 0x1A5F00u: goto label_1a5f00;
            case 0x1A5F04u: goto label_1a5f04;
            case 0x1A5F08u: goto label_1a5f08;
            case 0x1A5F0Cu: goto label_1a5f0c;
            case 0x1A5F10u: goto label_1a5f10;
            case 0x1A5F14u: goto label_1a5f14;
            case 0x1A5F18u: goto label_1a5f18;
            case 0x1A5F1Cu: goto label_1a5f1c;
            case 0x1A5F20u: goto label_1a5f20;
            case 0x1A5F24u: goto label_1a5f24;
            case 0x1A5F28u: goto label_1a5f28;
            case 0x1A5F2Cu: goto label_1a5f2c;
            case 0x1A5F30u: goto label_1a5f30;
            case 0x1A5F34u: goto label_1a5f34;
            case 0x1A5F38u: goto label_1a5f38;
            case 0x1A5F3Cu: goto label_1a5f3c;
            case 0x1A5F40u: goto label_1a5f40;
            case 0x1A5F44u: goto label_1a5f44;
            case 0x1A5F48u: goto label_1a5f48;
            case 0x1A5F4Cu: goto label_1a5f4c;
            case 0x1A5F50u: goto label_1a5f50;
            case 0x1A5F54u: goto label_1a5f54;
            case 0x1A5F58u: goto label_1a5f58;
            case 0x1A5F5Cu: goto label_1a5f5c;
            case 0x1A5F60u: goto label_1a5f60;
            case 0x1A5F64u: goto label_1a5f64;
            case 0x1A5F68u: goto label_1a5f68;
            case 0x1A5F6Cu: goto label_1a5f6c;
            case 0x1A5F70u: goto label_1a5f70;
            case 0x1A5F74u: goto label_1a5f74;
            case 0x1A5F78u: goto label_1a5f78;
            case 0x1A5F7Cu: goto label_1a5f7c;
            case 0x1A5F80u: goto label_1a5f80;
            case 0x1A5F84u: goto label_1a5f84;
            case 0x1A5F88u: goto label_1a5f88;
            case 0x1A5F8Cu: goto label_1a5f8c;
            case 0x1A5F90u: goto label_1a5f90;
            case 0x1A5F94u: goto label_1a5f94;
            case 0x1A5F98u: goto label_1a5f98;
            case 0x1A5F9Cu: goto label_1a5f9c;
            case 0x1A5FA0u: goto label_1a5fa0;
            case 0x1A5FA4u: goto label_1a5fa4;
            case 0x1A5FA8u: goto label_1a5fa8;
            case 0x1A5FACu: goto label_1a5fac;
            case 0x1A5FB0u: goto label_1a5fb0;
            case 0x1A5FB4u: goto label_1a5fb4;
            case 0x1A5FB8u: goto label_1a5fb8;
            case 0x1A5FBCu: goto label_1a5fbc;
            case 0x1A5FC0u: goto label_1a5fc0;
            case 0x1A5FC4u: goto label_1a5fc4;
            case 0x1A5FC8u: goto label_1a5fc8;
            case 0x1A5FCCu: goto label_1a5fcc;
            case 0x1A5FD0u: goto label_1a5fd0;
            case 0x1A5FD4u: goto label_1a5fd4;
            case 0x1A5FD8u: goto label_1a5fd8;
            case 0x1A5FDCu: goto label_1a5fdc;
            case 0x1A5FE0u: goto label_1a5fe0;
            case 0x1A5FE4u: goto label_1a5fe4;
            case 0x1A5FE8u: goto label_1a5fe8;
            case 0x1A5FECu: goto label_1a5fec;
            case 0x1A5FF0u: goto label_1a5ff0;
            case 0x1A5FF4u: goto label_1a5ff4;
            case 0x1A5FF8u: goto label_1a5ff8;
            case 0x1A5FFCu: goto label_1a5ffc;
            case 0x1A6000u: goto label_1a6000;
            case 0x1A6004u: goto label_1a6004;
            case 0x1A6008u: goto label_1a6008;
            case 0x1A600Cu: goto label_1a600c;
            case 0x1A6010u: goto label_1a6010;
            case 0x1A6014u: goto label_1a6014;
            case 0x1A6018u: goto label_1a6018;
            case 0x1A601Cu: goto label_1a601c;
            case 0x1A6020u: goto label_1a6020;
            case 0x1A6024u: goto label_1a6024;
            case 0x1A6028u: goto label_1a6028;
            case 0x1A602Cu: goto label_1a602c;
            case 0x1A6030u: goto label_1a6030;
            case 0x1A6034u: goto label_1a6034;
            case 0x1A6038u: goto label_1a6038;
            case 0x1A603Cu: goto label_1a603c;
            case 0x1A6040u: goto label_1a6040;
            case 0x1A6044u: goto label_1a6044;
            case 0x1A6048u: goto label_1a6048;
            case 0x1A604Cu: goto label_1a604c;
            case 0x1A6050u: goto label_1a6050;
            case 0x1A6054u: goto label_1a6054;
            case 0x1A6058u: goto label_1a6058;
            case 0x1A605Cu: goto label_1a605c;
            case 0x1A6060u: goto label_1a6060;
            case 0x1A6064u: goto label_1a6064;
            case 0x1A6068u: goto label_1a6068;
            case 0x1A606Cu: goto label_1a606c;
            case 0x1A6070u: goto label_1a6070;
            case 0x1A6074u: goto label_1a6074;
            case 0x1A6078u: goto label_1a6078;
            case 0x1A607Cu: goto label_1a607c;
            case 0x1A6080u: goto label_1a6080;
            case 0x1A6084u: goto label_1a6084;
            case 0x1A6088u: goto label_1a6088;
            case 0x1A608Cu: goto label_1a608c;
            case 0x1A6090u: goto label_1a6090;
            case 0x1A6094u: goto label_1a6094;
            case 0x1A6098u: goto label_1a6098;
            case 0x1A609Cu: goto label_1a609c;
            case 0x1A60A0u: goto label_1a60a0;
            case 0x1A60A4u: goto label_1a60a4;
            case 0x1A60A8u: goto label_1a60a8;
            case 0x1A60ACu: goto label_1a60ac;
            case 0x1A60B0u: goto label_1a60b0;
            case 0x1A60B4u: goto label_1a60b4;
            case 0x1A60B8u: goto label_1a60b8;
            case 0x1A60BCu: goto label_1a60bc;
            case 0x1A60C0u: goto label_1a60c0;
            case 0x1A60C4u: goto label_1a60c4;
            case 0x1A60C8u: goto label_1a60c8;
            case 0x1A60CCu: goto label_1a60cc;
            case 0x1A60D0u: goto label_1a60d0;
            case 0x1A60D4u: goto label_1a60d4;
            case 0x1A60D8u: goto label_1a60d8;
            case 0x1A60DCu: goto label_1a60dc;
            case 0x1A60E0u: goto label_1a60e0;
            case 0x1A60E4u: goto label_1a60e4;
            case 0x1A60E8u: goto label_1a60e8;
            case 0x1A60ECu: goto label_1a60ec;
            case 0x1A60F0u: goto label_1a60f0;
            case 0x1A60F4u: goto label_1a60f4;
            case 0x1A60F8u: goto label_1a60f8;
            case 0x1A60FCu: goto label_1a60fc;
            case 0x1A6100u: goto label_1a6100;
            case 0x1A6104u: goto label_1a6104;
            case 0x1A6108u: goto label_1a6108;
            case 0x1A610Cu: goto label_1a610c;
            case 0x1A6110u: goto label_1a6110;
            case 0x1A6114u: goto label_1a6114;
            case 0x1A6118u: goto label_1a6118;
            case 0x1A611Cu: goto label_1a611c;
            case 0x1A6120u: goto label_1a6120;
            case 0x1A6124u: goto label_1a6124;
            case 0x1A6128u: goto label_1a6128;
            case 0x1A612Cu: goto label_1a612c;
            case 0x1A6130u: goto label_1a6130;
            case 0x1A6134u: goto label_1a6134;
            case 0x1A6138u: goto label_1a6138;
            case 0x1A613Cu: goto label_1a613c;
            case 0x1A6140u: goto label_1a6140;
            case 0x1A6144u: goto label_1a6144;
            case 0x1A6148u: goto label_1a6148;
            case 0x1A614Cu: goto label_1a614c;
            case 0x1A6150u: goto label_1a6150;
            case 0x1A6154u: goto label_1a6154;
            case 0x1A6158u: goto label_1a6158;
            case 0x1A615Cu: goto label_1a615c;
            case 0x1A6160u: goto label_1a6160;
            case 0x1A6164u: goto label_1a6164;
            case 0x1A6168u: goto label_1a6168;
            case 0x1A616Cu: goto label_1a616c;
            case 0x1A6170u: goto label_1a6170;
            case 0x1A6174u: goto label_1a6174;
            case 0x1A6178u: goto label_1a6178;
            case 0x1A617Cu: goto label_1a617c;
            case 0x1A6180u: goto label_1a6180;
            case 0x1A6184u: goto label_1a6184;
            case 0x1A6188u: goto label_1a6188;
            case 0x1A618Cu: goto label_1a618c;
            case 0x1A6190u: goto label_1a6190;
            case 0x1A6194u: goto label_1a6194;
            case 0x1A6198u: goto label_1a6198;
            case 0x1A619Cu: goto label_1a619c;
            case 0x1A61A0u: goto label_1a61a0;
            case 0x1A61A4u: goto label_1a61a4;
            case 0x1A61A8u: goto label_1a61a8;
            case 0x1A61ACu: goto label_1a61ac;
            case 0x1A61B0u: goto label_1a61b0;
            case 0x1A61B4u: goto label_1a61b4;
            case 0x1A61B8u: goto label_1a61b8;
            case 0x1A61BCu: goto label_1a61bc;
            case 0x1A61C0u: goto label_1a61c0;
            case 0x1A61C4u: goto label_1a61c4;
            case 0x1A61C8u: goto label_1a61c8;
            case 0x1A61CCu: goto label_1a61cc;
            case 0x1A61D0u: goto label_1a61d0;
            case 0x1A61D4u: goto label_1a61d4;
            case 0x1A61D8u: goto label_1a61d8;
            case 0x1A61DCu: goto label_1a61dc;
            case 0x1A61E0u: goto label_1a61e0;
            case 0x1A61E4u: goto label_1a61e4;
            case 0x1A61E8u: goto label_1a61e8;
            case 0x1A61ECu: goto label_1a61ec;
            case 0x1A61F0u: goto label_1a61f0;
            case 0x1A61F4u: goto label_1a61f4;
            case 0x1A61F8u: goto label_1a61f8;
            case 0x1A61FCu: goto label_1a61fc;
            case 0x1A6200u: goto label_1a6200;
            case 0x1A6204u: goto label_1a6204;
            case 0x1A6208u: goto label_1a6208;
            case 0x1A620Cu: goto label_1a620c;
            case 0x1A6210u: goto label_1a6210;
            case 0x1A6214u: goto label_1a6214;
            case 0x1A6218u: goto label_1a6218;
            case 0x1A621Cu: goto label_1a621c;
            case 0x1A6220u: goto label_1a6220;
            case 0x1A6224u: goto label_1a6224;
            case 0x1A6228u: goto label_1a6228;
            case 0x1A622Cu: goto label_1a622c;
            case 0x1A6230u: goto label_1a6230;
            case 0x1A6234u: goto label_1a6234;
            case 0x1A6238u: goto label_1a6238;
            case 0x1A623Cu: goto label_1a623c;
            case 0x1A6240u: goto label_1a6240;
            case 0x1A6244u: goto label_1a6244;
            case 0x1A6248u: goto label_1a6248;
            case 0x1A624Cu: goto label_1a624c;
            case 0x1A6250u: goto label_1a6250;
            case 0x1A6254u: goto label_1a6254;
            case 0x1A6258u: goto label_1a6258;
            case 0x1A625Cu: goto label_1a625c;
            case 0x1A6260u: goto label_1a6260;
            case 0x1A6264u: goto label_1a6264;
            case 0x1A6268u: goto label_1a6268;
            case 0x1A626Cu: goto label_1a626c;
            case 0x1A6270u: goto label_1a6270;
            case 0x1A6274u: goto label_1a6274;
            case 0x1A6278u: goto label_1a6278;
            case 0x1A627Cu: goto label_1a627c;
            case 0x1A6280u: goto label_1a6280;
            case 0x1A6284u: goto label_1a6284;
            case 0x1A6288u: goto label_1a6288;
            case 0x1A628Cu: goto label_1a628c;
            case 0x1A6290u: goto label_1a6290;
            case 0x1A6294u: goto label_1a6294;
            case 0x1A6298u: goto label_1a6298;
            case 0x1A629Cu: goto label_1a629c;
            case 0x1A62A0u: goto label_1a62a0;
            case 0x1A62A4u: goto label_1a62a4;
            case 0x1A62A8u: goto label_1a62a8;
            case 0x1A62ACu: goto label_1a62ac;
            case 0x1A62B0u: goto label_1a62b0;
            case 0x1A62B4u: goto label_1a62b4;
            case 0x1A62B8u: goto label_1a62b8;
            case 0x1A62BCu: goto label_1a62bc;
            case 0x1A62C0u: goto label_1a62c0;
            case 0x1A62C4u: goto label_1a62c4;
            case 0x1A62C8u: goto label_1a62c8;
            case 0x1A62CCu: goto label_1a62cc;
            case 0x1A62D0u: goto label_1a62d0;
            case 0x1A62D4u: goto label_1a62d4;
            case 0x1A62D8u: goto label_1a62d8;
            case 0x1A62DCu: goto label_1a62dc;
            case 0x1A62E0u: goto label_1a62e0;
            case 0x1A62E4u: goto label_1a62e4;
            case 0x1A62E8u: goto label_1a62e8;
            case 0x1A62ECu: goto label_1a62ec;
            case 0x1A62F0u: goto label_1a62f0;
            case 0x1A62F4u: goto label_1a62f4;
            case 0x1A62F8u: goto label_1a62f8;
            case 0x1A62FCu: goto label_1a62fc;
            case 0x1A6300u: goto label_1a6300;
            case 0x1A6304u: goto label_1a6304;
            case 0x1A6308u: goto label_1a6308;
            case 0x1A630Cu: goto label_1a630c;
            case 0x1A6310u: goto label_1a6310;
            case 0x1A6314u: goto label_1a6314;
            case 0x1A6318u: goto label_1a6318;
            case 0x1A631Cu: goto label_1a631c;
            case 0x1A6320u: goto label_1a6320;
            case 0x1A6324u: goto label_1a6324;
            case 0x1A6328u: goto label_1a6328;
            case 0x1A632Cu: goto label_1a632c;
            case 0x1A6330u: goto label_1a6330;
            case 0x1A6334u: goto label_1a6334;
            case 0x1A6338u: goto label_1a6338;
            case 0x1A633Cu: goto label_1a633c;
            case 0x1A6340u: goto label_1a6340;
            case 0x1A6344u: goto label_1a6344;
            case 0x1A6348u: goto label_1a6348;
            case 0x1A634Cu: goto label_1a634c;
            case 0x1A6350u: goto label_1a6350;
            case 0x1A6354u: goto label_1a6354;
            case 0x1A6358u: goto label_1a6358;
            case 0x1A635Cu: goto label_1a635c;
            case 0x1A6360u: goto label_1a6360;
            case 0x1A6364u: goto label_1a6364;
            case 0x1A6368u: goto label_1a6368;
            case 0x1A636Cu: goto label_1a636c;
            case 0x1A6370u: goto label_1a6370;
            case 0x1A6374u: goto label_1a6374;
            case 0x1A6378u: goto label_1a6378;
            case 0x1A637Cu: goto label_1a637c;
            case 0x1A6380u: goto label_1a6380;
            case 0x1A6384u: goto label_1a6384;
            case 0x1A6388u: goto label_1a6388;
            case 0x1A638Cu: goto label_1a638c;
            case 0x1A6390u: goto label_1a6390;
            case 0x1A6394u: goto label_1a6394;
            case 0x1A6398u: goto label_1a6398;
            case 0x1A639Cu: goto label_1a639c;
            case 0x1A63A0u: goto label_1a63a0;
            case 0x1A63A4u: goto label_1a63a4;
            case 0x1A63A8u: goto label_1a63a8;
            case 0x1A63ACu: goto label_1a63ac;
            case 0x1A63B0u: goto label_1a63b0;
            case 0x1A63B4u: goto label_1a63b4;
            case 0x1A63B8u: goto label_1a63b8;
            case 0x1A63BCu: goto label_1a63bc;
            case 0x1A63C0u: goto label_1a63c0;
            case 0x1A63C4u: goto label_1a63c4;
            case 0x1A63C8u: goto label_1a63c8;
            case 0x1A63CCu: goto label_1a63cc;
            case 0x1A63D0u: goto label_1a63d0;
            case 0x1A63D4u: goto label_1a63d4;
            case 0x1A63D8u: goto label_1a63d8;
            case 0x1A63DCu: goto label_1a63dc;
            case 0x1A63E0u: goto label_1a63e0;
            case 0x1A63E4u: goto label_1a63e4;
            case 0x1A63E8u: goto label_1a63e8;
            case 0x1A63ECu: goto label_1a63ec;
            case 0x1A63F0u: goto label_1a63f0;
            case 0x1A63F4u: goto label_1a63f4;
            case 0x1A63F8u: goto label_1a63f8;
            case 0x1A63FCu: goto label_1a63fc;
            case 0x1A6400u: goto label_1a6400;
            case 0x1A6404u: goto label_1a6404;
            case 0x1A6408u: goto label_1a6408;
            case 0x1A640Cu: goto label_1a640c;
            case 0x1A6410u: goto label_1a6410;
            case 0x1A6414u: goto label_1a6414;
            case 0x1A6418u: goto label_1a6418;
            case 0x1A641Cu: goto label_1a641c;
            case 0x1A6420u: goto label_1a6420;
            case 0x1A6424u: goto label_1a6424;
            case 0x1A6428u: goto label_1a6428;
            case 0x1A642Cu: goto label_1a642c;
            case 0x1A6430u: goto label_1a6430;
            case 0x1A6434u: goto label_1a6434;
            case 0x1A6438u: goto label_1a6438;
            case 0x1A643Cu: goto label_1a643c;
            case 0x1A6440u: goto label_1a6440;
            case 0x1A6444u: goto label_1a6444;
            case 0x1A6448u: goto label_1a6448;
            case 0x1A644Cu: goto label_1a644c;
            case 0x1A6450u: goto label_1a6450;
            case 0x1A6454u: goto label_1a6454;
            case 0x1A6458u: goto label_1a6458;
            case 0x1A645Cu: goto label_1a645c;
            case 0x1A6460u: goto label_1a6460;
            case 0x1A6464u: goto label_1a6464;
            case 0x1A6468u: goto label_1a6468;
            case 0x1A646Cu: goto label_1a646c;
            case 0x1A6470u: goto label_1a6470;
            case 0x1A6474u: goto label_1a6474;
            case 0x1A6478u: goto label_1a6478;
            case 0x1A647Cu: goto label_1a647c;
            case 0x1A6480u: goto label_1a6480;
            case 0x1A6484u: goto label_1a6484;
            case 0x1A6488u: goto label_1a6488;
            case 0x1A648Cu: goto label_1a648c;
            case 0x1A6490u: goto label_1a6490;
            case 0x1A6494u: goto label_1a6494;
            case 0x1A6498u: goto label_1a6498;
            case 0x1A649Cu: goto label_1a649c;
            case 0x1A64A0u: goto label_1a64a0;
            case 0x1A64A4u: goto label_1a64a4;
            case 0x1A64A8u: goto label_1a64a8;
            case 0x1A64ACu: goto label_1a64ac;
            case 0x1A64B0u: goto label_1a64b0;
            case 0x1A64B4u: goto label_1a64b4;
            case 0x1A64B8u: goto label_1a64b8;
            case 0x1A64BCu: goto label_1a64bc;
            case 0x1A64C0u: goto label_1a64c0;
            case 0x1A64C4u: goto label_1a64c4;
            case 0x1A64C8u: goto label_1a64c8;
            case 0x1A64CCu: goto label_1a64cc;
            case 0x1A64D0u: goto label_1a64d0;
            case 0x1A64D4u: goto label_1a64d4;
            case 0x1A64D8u: goto label_1a64d8;
            case 0x1A64DCu: goto label_1a64dc;
            case 0x1A64E0u: goto label_1a64e0;
            case 0x1A64E4u: goto label_1a64e4;
            case 0x1A64E8u: goto label_1a64e8;
            case 0x1A64ECu: goto label_1a64ec;
            case 0x1A64F0u: goto label_1a64f0;
            case 0x1A64F4u: goto label_1a64f4;
            case 0x1A64F8u: goto label_1a64f8;
            case 0x1A64FCu: goto label_1a64fc;
            case 0x1A6500u: goto label_1a6500;
            case 0x1A6504u: goto label_1a6504;
            case 0x1A6508u: goto label_1a6508;
            case 0x1A650Cu: goto label_1a650c;
            case 0x1A6510u: goto label_1a6510;
            case 0x1A6514u: goto label_1a6514;
            case 0x1A6518u: goto label_1a6518;
            case 0x1A651Cu: goto label_1a651c;
            case 0x1A6520u: goto label_1a6520;
            case 0x1A6524u: goto label_1a6524;
            case 0x1A6528u: goto label_1a6528;
            case 0x1A652Cu: goto label_1a652c;
            case 0x1A6530u: goto label_1a6530;
            case 0x1A6534u: goto label_1a6534;
            case 0x1A6538u: goto label_1a6538;
            case 0x1A653Cu: goto label_1a653c;
            case 0x1A6540u: goto label_1a6540;
            case 0x1A6544u: goto label_1a6544;
            case 0x1A6548u: goto label_1a6548;
            case 0x1A654Cu: goto label_1a654c;
            case 0x1A6550u: goto label_1a6550;
            case 0x1A6554u: goto label_1a6554;
            case 0x1A6558u: goto label_1a6558;
            case 0x1A655Cu: goto label_1a655c;
            case 0x1A6560u: goto label_1a6560;
            case 0x1A6564u: goto label_1a6564;
            case 0x1A6568u: goto label_1a6568;
            case 0x1A656Cu: goto label_1a656c;
            case 0x1A6570u: goto label_1a6570;
            case 0x1A6574u: goto label_1a6574;
            case 0x1A6578u: goto label_1a6578;
            case 0x1A657Cu: goto label_1a657c;
            case 0x1A6580u: goto label_1a6580;
            case 0x1A6584u: goto label_1a6584;
            case 0x1A6588u: goto label_1a6588;
            case 0x1A658Cu: goto label_1a658c;
            case 0x1A6590u: goto label_1a6590;
            case 0x1A6594u: goto label_1a6594;
            case 0x1A6598u: goto label_1a6598;
            case 0x1A659Cu: goto label_1a659c;
            case 0x1A65A0u: goto label_1a65a0;
            case 0x1A65A4u: goto label_1a65a4;
            case 0x1A65A8u: goto label_1a65a8;
            case 0x1A65ACu: goto label_1a65ac;
            case 0x1A65B0u: goto label_1a65b0;
            case 0x1A65B4u: goto label_1a65b4;
            case 0x1A65B8u: goto label_1a65b8;
            case 0x1A65BCu: goto label_1a65bc;
            case 0x1A65C0u: goto label_1a65c0;
            case 0x1A65C4u: goto label_1a65c4;
            case 0x1A65C8u: goto label_1a65c8;
            case 0x1A65CCu: goto label_1a65cc;
            case 0x1A65D0u: goto label_1a65d0;
            case 0x1A65D4u: goto label_1a65d4;
            case 0x1A65D8u: goto label_1a65d8;
            case 0x1A65DCu: goto label_1a65dc;
            case 0x1A65E0u: goto label_1a65e0;
            case 0x1A65E4u: goto label_1a65e4;
            case 0x1A65E8u: goto label_1a65e8;
            case 0x1A65ECu: goto label_1a65ec;
            case 0x1A65F0u: goto label_1a65f0;
            case 0x1A65F4u: goto label_1a65f4;
            case 0x1A65F8u: goto label_1a65f8;
            case 0x1A65FCu: goto label_1a65fc;
            case 0x1A6600u: goto label_1a6600;
            case 0x1A6604u: goto label_1a6604;
            case 0x1A6608u: goto label_1a6608;
            case 0x1A660Cu: goto label_1a660c;
            case 0x1A6610u: goto label_1a6610;
            case 0x1A6614u: goto label_1a6614;
            case 0x1A6618u: goto label_1a6618;
            case 0x1A661Cu: goto label_1a661c;
            case 0x1A6620u: goto label_1a6620;
            case 0x1A6624u: goto label_1a6624;
            case 0x1A6628u: goto label_1a6628;
            case 0x1A662Cu: goto label_1a662c;
            case 0x1A6630u: goto label_1a6630;
            case 0x1A6634u: goto label_1a6634;
            case 0x1A6638u: goto label_1a6638;
            case 0x1A663Cu: goto label_1a663c;
            case 0x1A6640u: goto label_1a6640;
            case 0x1A6644u: goto label_1a6644;
            case 0x1A6648u: goto label_1a6648;
            case 0x1A664Cu: goto label_1a664c;
            case 0x1A6650u: goto label_1a6650;
            case 0x1A6654u: goto label_1a6654;
            case 0x1A6658u: goto label_1a6658;
            case 0x1A665Cu: goto label_1a665c;
            case 0x1A6660u: goto label_1a6660;
            case 0x1A6664u: goto label_1a6664;
            case 0x1A6668u: goto label_1a6668;
            case 0x1A666Cu: goto label_1a666c;
            case 0x1A6670u: goto label_1a6670;
            case 0x1A6674u: goto label_1a6674;
            case 0x1A6678u: goto label_1a6678;
            case 0x1A667Cu: goto label_1a667c;
            case 0x1A6680u: goto label_1a6680;
            case 0x1A6684u: goto label_1a6684;
            case 0x1A6688u: goto label_1a6688;
            case 0x1A668Cu: goto label_1a668c;
            case 0x1A6690u: goto label_1a6690;
            case 0x1A6694u: goto label_1a6694;
            case 0x1A6698u: goto label_1a6698;
            case 0x1A669Cu: goto label_1a669c;
            case 0x1A66A0u: goto label_1a66a0;
            case 0x1A66A4u: goto label_1a66a4;
            case 0x1A66A8u: goto label_1a66a8;
            case 0x1A66ACu: goto label_1a66ac;
            case 0x1A66B0u: goto label_1a66b0;
            case 0x1A66B4u: goto label_1a66b4;
            case 0x1A66B8u: goto label_1a66b8;
            case 0x1A66BCu: goto label_1a66bc;
            case 0x1A66C0u: goto label_1a66c0;
            case 0x1A66C4u: goto label_1a66c4;
            case 0x1A66C8u: goto label_1a66c8;
            case 0x1A66CCu: goto label_1a66cc;
            case 0x1A66D0u: goto label_1a66d0;
            case 0x1A66D4u: goto label_1a66d4;
            case 0x1A66D8u: goto label_1a66d8;
            case 0x1A66DCu: goto label_1a66dc;
            case 0x1A66E0u: goto label_1a66e0;
            case 0x1A66E4u: goto label_1a66e4;
            case 0x1A66E8u: goto label_1a66e8;
            case 0x1A66ECu: goto label_1a66ec;
            case 0x1A66F0u: goto label_1a66f0;
            case 0x1A66F4u: goto label_1a66f4;
            case 0x1A66F8u: goto label_1a66f8;
            case 0x1A66FCu: goto label_1a66fc;
            case 0x1A6700u: goto label_1a6700;
            case 0x1A6704u: goto label_1a6704;
            case 0x1A6708u: goto label_1a6708;
            case 0x1A670Cu: goto label_1a670c;
            case 0x1A6710u: goto label_1a6710;
            case 0x1A6714u: goto label_1a6714;
            case 0x1A6718u: goto label_1a6718;
            case 0x1A671Cu: goto label_1a671c;
            case 0x1A6720u: goto label_1a6720;
            case 0x1A6724u: goto label_1a6724;
            case 0x1A6728u: goto label_1a6728;
            case 0x1A672Cu: goto label_1a672c;
            case 0x1A6730u: goto label_1a6730;
            case 0x1A6734u: goto label_1a6734;
            case 0x1A6738u: goto label_1a6738;
            case 0x1A673Cu: goto label_1a673c;
            case 0x1A6740u: goto label_1a6740;
            case 0x1A6744u: goto label_1a6744;
            case 0x1A6748u: goto label_1a6748;
            case 0x1A674Cu: goto label_1a674c;
            case 0x1A6750u: goto label_1a6750;
            case 0x1A6754u: goto label_1a6754;
            case 0x1A6758u: goto label_1a6758;
            case 0x1A675Cu: goto label_1a675c;
            case 0x1A6760u: goto label_1a6760;
            case 0x1A6764u: goto label_1a6764;
            case 0x1A6768u: goto label_1a6768;
            case 0x1A676Cu: goto label_1a676c;
            case 0x1A6770u: goto label_1a6770;
            case 0x1A6774u: goto label_1a6774;
            case 0x1A6778u: goto label_1a6778;
            case 0x1A677Cu: goto label_1a677c;
            case 0x1A6780u: goto label_1a6780;
            case 0x1A6784u: goto label_1a6784;
            case 0x1A6788u: goto label_1a6788;
            case 0x1A678Cu: goto label_1a678c;
            case 0x1A6790u: goto label_1a6790;
            case 0x1A6794u: goto label_1a6794;
            case 0x1A6798u: goto label_1a6798;
            case 0x1A679Cu: goto label_1a679c;
            case 0x1A67A0u: goto label_1a67a0;
            case 0x1A67A4u: goto label_1a67a4;
            case 0x1A67A8u: goto label_1a67a8;
            case 0x1A67ACu: goto label_1a67ac;
            case 0x1A67B0u: goto label_1a67b0;
            case 0x1A67B4u: goto label_1a67b4;
            case 0x1A67B8u: goto label_1a67b8;
            case 0x1A67BCu: goto label_1a67bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A66B4u; }
            if (ctx->pc != 0x1A66B4u) { return; }
        }
    }
    ctx->pc = 0x1A66B4u;
label_1a66b4:
    // 0x1a66b4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1a66b8:
    if (ctx->pc == 0x1A66B8u) {
        ctx->pc = 0x1A66BCu;
        goto label_1a66bc;
    }
    ctx->pc = 0x1A66B4u;
    {
        const bool branch_taken_0x1a66b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a66b4) {
            ctx->pc = 0x1A67B0u;
            goto label_1a67b0;
        }
    }
    ctx->pc = 0x1A66BCu;
label_1a66bc:
    // 0x1a66bc: 0x0  nop
    ctx->pc = 0x1a66bcu;
    // NOP
label_1a66c0:
    // 0x1a66c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a66c4:
    // 0x1a66c4: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1a66c8:
    if (ctx->pc == 0x1A66C8u) {
        ctx->pc = 0x1A66CCu;
        goto label_1a66cc;
    }
    ctx->pc = 0x1A66C4u;
    {
        const bool branch_taken_0x1a66c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a66c4) {
            ctx->pc = 0x1A6790u;
            goto label_1a6790;
        }
    }
    ctx->pc = 0x1A66CCu;
label_1a66cc:
    // 0x1a66cc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a66ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a66d0:
    // 0x1a66d0: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1a66d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1a66d4:
    // 0x1a66d4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a66d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a66d8:
    // 0x1a66d8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a66d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a66dc:
    // 0x1a66dc: 0xc05d080  jal         func_174200
label_1a66e0:
    if (ctx->pc == 0x1A66E0u) {
        ctx->pc = 0x1A66E0u;
            // 0x1a66e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A66E4u;
        goto label_1a66e4;
    }
    ctx->pc = 0x1A66DCu;
    SET_GPR_U32(ctx, 31, 0x1A66E4u);
    ctx->pc = 0x1A66E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66DCu;
            // 0x1a66e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66E4u; }
        if (ctx->pc != 0x1A66E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66E4u; }
        if (ctx->pc != 0x1A66E4u) { return; }
    }
    ctx->pc = 0x1A66E4u;
label_1a66e4:
    // 0x1a66e4: 0xc050bb4  jal         func_142ED0
label_1a66e8:
    if (ctx->pc == 0x1A66E8u) {
        ctx->pc = 0x1A66ECu;
        goto label_1a66ec;
    }
    ctx->pc = 0x1A66E4u;
    SET_GPR_U32(ctx, 31, 0x1A66ECu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66ECu; }
        if (ctx->pc != 0x1A66ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66ECu; }
        if (ctx->pc != 0x1A66ECu) { return; }
    }
    ctx->pc = 0x1A66ECu;
label_1a66ec:
    // 0x1a66ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a66ecu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a66f0:
    // 0x1a66f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a66f4:
    if (ctx->pc == 0x1A66F4u) {
        ctx->pc = 0x1A66F8u;
        goto label_1a66f8;
    }
    ctx->pc = 0x1A66F0u;
    {
        const bool branch_taken_0x1a66f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a66f0) {
            ctx->pc = 0x1A6710u;
            goto label_1a6710;
        }
    }
    ctx->pc = 0x1A66F8u;
label_1a66f8:
    // 0x1a66f8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a66f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a66fc:
    // 0x1a66fc: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1a66fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1a6700:
    // 0x1a6700: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a6700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6704:
    // 0x1a6704: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a6704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a6708:
    // 0x1a6708: 0xc05d080  jal         func_174200
label_1a670c:
    if (ctx->pc == 0x1A670Cu) {
        ctx->pc = 0x1A670Cu;
            // 0x1a670c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A6710u;
        goto label_1a6710;
    }
    ctx->pc = 0x1A6708u;
    SET_GPR_U32(ctx, 31, 0x1A6710u);
    ctx->pc = 0x1A670Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6708u;
            // 0x1a670c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6710u; }
        if (ctx->pc != 0x1A6710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6710u; }
        if (ctx->pc != 0x1A6710u) { return; }
    }
    ctx->pc = 0x1A6710u;
label_1a6710:
    // 0x1a6710: 0xc050bb4  jal         func_142ED0
label_1a6714:
    if (ctx->pc == 0x1A6714u) {
        ctx->pc = 0x1A6718u;
        goto label_1a6718;
    }
    ctx->pc = 0x1A6710u;
    SET_GPR_U32(ctx, 31, 0x1A6718u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6718u; }
        if (ctx->pc != 0x1A6718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6718u; }
        if (ctx->pc != 0x1A6718u) { return; }
    }
    ctx->pc = 0x1A6718u;
label_1a6718:
    // 0x1a6718: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a6718u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a671c:
    // 0x1a671c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a6720:
    if (ctx->pc == 0x1A6720u) {
        ctx->pc = 0x1A6724u;
        goto label_1a6724;
    }
    ctx->pc = 0x1A671Cu;
    {
        const bool branch_taken_0x1a671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a671c) {
            ctx->pc = 0x1A6740u;
            goto label_1a6740;
        }
    }
    ctx->pc = 0x1A6724u;
label_1a6724:
    // 0x1a6724: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a6724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6728:
    // 0x1a6728: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1a6728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1a672c:
    // 0x1a672c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6730:
    // 0x1a6730: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a6730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a6734:
    // 0x1a6734: 0xc05d080  jal         func_174200
label_1a6738:
    if (ctx->pc == 0x1A6738u) {
        ctx->pc = 0x1A6738u;
            // 0x1a6738: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A673Cu;
        goto label_1a673c;
    }
    ctx->pc = 0x1A6734u;
    SET_GPR_U32(ctx, 31, 0x1A673Cu);
    ctx->pc = 0x1A6738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6734u;
            // 0x1a6738: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A673Cu; }
        if (ctx->pc != 0x1A673Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A673Cu; }
        if (ctx->pc != 0x1A673Cu) { return; }
    }
    ctx->pc = 0x1A673Cu;
label_1a673c:
    // 0x1a673c: 0x0  nop
    ctx->pc = 0x1a673cu;
    // NOP
label_1a6740:
    // 0x1a6740: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a6740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a6744:
    // 0x1a6744: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a6744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6748:
    // 0x1a6748: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a6748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a674c:
    // 0x1a674c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6750:
    // 0x1a6750: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a6750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a6754:
    // 0x1a6754: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a6754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a6758:
    // 0x1a6758: 0x0  nop
    ctx->pc = 0x1a6758u;
    // NOP
label_1a675c:
    // 0x1a675c: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1a675cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1a6760:
    // 0x1a6760: 0xc053740  jal         func_14DD00
label_1a6764:
    if (ctx->pc == 0x1A6764u) {
        ctx->pc = 0x1A6764u;
            // 0x1a6764: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1A6768u;
        goto label_1a6768;
    }
    ctx->pc = 0x1A6760u;
    SET_GPR_U32(ctx, 31, 0x1A6768u);
    ctx->pc = 0x1A6764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6760u;
            // 0x1a6764: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6768u; }
        if (ctx->pc != 0x1A6768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6768u; }
        if (ctx->pc != 0x1A6768u) { return; }
    }
    ctx->pc = 0x1A6768u;
label_1a6768:
    // 0x1a6768: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a6768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a676c:
    // 0x1a676c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1a676cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a6770:
    // 0x1a6770: 0xc07b0fc  jal         func_1EC3F0
label_1a6774:
    if (ctx->pc == 0x1A6774u) {
        ctx->pc = 0x1A6774u;
            // 0x1a6774: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1A6778u;
        goto label_1a6778;
    }
    ctx->pc = 0x1A6770u;
    SET_GPR_U32(ctx, 31, 0x1A6778u);
    ctx->pc = 0x1A6774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6770u;
            // 0x1a6774: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6778u; }
        if (ctx->pc != 0x1A6778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6778u; }
        if (ctx->pc != 0x1A6778u) { return; }
    }
    ctx->pc = 0x1A6778u;
label_1a6778:
    // 0x1a6778: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1a6778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1a677c:
    // 0x1a677c: 0x40f809  jalr        $v0
label_1a6780:
    if (ctx->pc == 0x1A6780u) {
        ctx->pc = 0x1A6780u;
            // 0x1a6780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6784u;
        goto label_1a6784;
    }
    ctx->pc = 0x1A677Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6784u);
        ctx->pc = 0x1A6780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A677Cu;
            // 0x1a6780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5D40u: goto label_1a5d40;
            case 0x1A5D44u: goto label_1a5d44;
            case 0x1A5D48u: goto label_1a5d48;
            case 0x1A5D4Cu: goto label_1a5d4c;
            case 0x1A5D50u: goto label_1a5d50;
            case 0x1A5D54u: goto label_1a5d54;
            case 0x1A5D58u: goto label_1a5d58;
            case 0x1A5D5Cu: goto label_1a5d5c;
            case 0x1A5D60u: goto label_1a5d60;
            case 0x1A5D64u: goto label_1a5d64;
            case 0x1A5D68u: goto label_1a5d68;
            case 0x1A5D6Cu: goto label_1a5d6c;
            case 0x1A5D70u: goto label_1a5d70;
            case 0x1A5D74u: goto label_1a5d74;
            case 0x1A5D78u: goto label_1a5d78;
            case 0x1A5D7Cu: goto label_1a5d7c;
            case 0x1A5D80u: goto label_1a5d80;
            case 0x1A5D84u: goto label_1a5d84;
            case 0x1A5D88u: goto label_1a5d88;
            case 0x1A5D8Cu: goto label_1a5d8c;
            case 0x1A5D90u: goto label_1a5d90;
            case 0x1A5D94u: goto label_1a5d94;
            case 0x1A5D98u: goto label_1a5d98;
            case 0x1A5D9Cu: goto label_1a5d9c;
            case 0x1A5DA0u: goto label_1a5da0;
            case 0x1A5DA4u: goto label_1a5da4;
            case 0x1A5DA8u: goto label_1a5da8;
            case 0x1A5DACu: goto label_1a5dac;
            case 0x1A5DB0u: goto label_1a5db0;
            case 0x1A5DB4u: goto label_1a5db4;
            case 0x1A5DB8u: goto label_1a5db8;
            case 0x1A5DBCu: goto label_1a5dbc;
            case 0x1A5DC0u: goto label_1a5dc0;
            case 0x1A5DC4u: goto label_1a5dc4;
            case 0x1A5DC8u: goto label_1a5dc8;
            case 0x1A5DCCu: goto label_1a5dcc;
            case 0x1A5DD0u: goto label_1a5dd0;
            case 0x1A5DD4u: goto label_1a5dd4;
            case 0x1A5DD8u: goto label_1a5dd8;
            case 0x1A5DDCu: goto label_1a5ddc;
            case 0x1A5DE0u: goto label_1a5de0;
            case 0x1A5DE4u: goto label_1a5de4;
            case 0x1A5DE8u: goto label_1a5de8;
            case 0x1A5DECu: goto label_1a5dec;
            case 0x1A5DF0u: goto label_1a5df0;
            case 0x1A5DF4u: goto label_1a5df4;
            case 0x1A5DF8u: goto label_1a5df8;
            case 0x1A5DFCu: goto label_1a5dfc;
            case 0x1A5E00u: goto label_1a5e00;
            case 0x1A5E04u: goto label_1a5e04;
            case 0x1A5E08u: goto label_1a5e08;
            case 0x1A5E0Cu: goto label_1a5e0c;
            case 0x1A5E10u: goto label_1a5e10;
            case 0x1A5E14u: goto label_1a5e14;
            case 0x1A5E18u: goto label_1a5e18;
            case 0x1A5E1Cu: goto label_1a5e1c;
            case 0x1A5E20u: goto label_1a5e20;
            case 0x1A5E24u: goto label_1a5e24;
            case 0x1A5E28u: goto label_1a5e28;
            case 0x1A5E2Cu: goto label_1a5e2c;
            case 0x1A5E30u: goto label_1a5e30;
            case 0x1A5E34u: goto label_1a5e34;
            case 0x1A5E38u: goto label_1a5e38;
            case 0x1A5E3Cu: goto label_1a5e3c;
            case 0x1A5E40u: goto label_1a5e40;
            case 0x1A5E44u: goto label_1a5e44;
            case 0x1A5E48u: goto label_1a5e48;
            case 0x1A5E4Cu: goto label_1a5e4c;
            case 0x1A5E50u: goto label_1a5e50;
            case 0x1A5E54u: goto label_1a5e54;
            case 0x1A5E58u: goto label_1a5e58;
            case 0x1A5E5Cu: goto label_1a5e5c;
            case 0x1A5E60u: goto label_1a5e60;
            case 0x1A5E64u: goto label_1a5e64;
            case 0x1A5E68u: goto label_1a5e68;
            case 0x1A5E6Cu: goto label_1a5e6c;
            case 0x1A5E70u: goto label_1a5e70;
            case 0x1A5E74u: goto label_1a5e74;
            case 0x1A5E78u: goto label_1a5e78;
            case 0x1A5E7Cu: goto label_1a5e7c;
            case 0x1A5E80u: goto label_1a5e80;
            case 0x1A5E84u: goto label_1a5e84;
            case 0x1A5E88u: goto label_1a5e88;
            case 0x1A5E8Cu: goto label_1a5e8c;
            case 0x1A5E90u: goto label_1a5e90;
            case 0x1A5E94u: goto label_1a5e94;
            case 0x1A5E98u: goto label_1a5e98;
            case 0x1A5E9Cu: goto label_1a5e9c;
            case 0x1A5EA0u: goto label_1a5ea0;
            case 0x1A5EA4u: goto label_1a5ea4;
            case 0x1A5EA8u: goto label_1a5ea8;
            case 0x1A5EACu: goto label_1a5eac;
            case 0x1A5EB0u: goto label_1a5eb0;
            case 0x1A5EB4u: goto label_1a5eb4;
            case 0x1A5EB8u: goto label_1a5eb8;
            case 0x1A5EBCu: goto label_1a5ebc;
            case 0x1A5EC0u: goto label_1a5ec0;
            case 0x1A5EC4u: goto label_1a5ec4;
            case 0x1A5EC8u: goto label_1a5ec8;
            case 0x1A5ECCu: goto label_1a5ecc;
            case 0x1A5ED0u: goto label_1a5ed0;
            case 0x1A5ED4u: goto label_1a5ed4;
            case 0x1A5ED8u: goto label_1a5ed8;
            case 0x1A5EDCu: goto label_1a5edc;
            case 0x1A5EE0u: goto label_1a5ee0;
            case 0x1A5EE4u: goto label_1a5ee4;
            case 0x1A5EE8u: goto label_1a5ee8;
            case 0x1A5EECu: goto label_1a5eec;
            case 0x1A5EF0u: goto label_1a5ef0;
            case 0x1A5EF4u: goto label_1a5ef4;
            case 0x1A5EF8u: goto label_1a5ef8;
            case 0x1A5EFCu: goto label_1a5efc;
            case 0x1A5F00u: goto label_1a5f00;
            case 0x1A5F04u: goto label_1a5f04;
            case 0x1A5F08u: goto label_1a5f08;
            case 0x1A5F0Cu: goto label_1a5f0c;
            case 0x1A5F10u: goto label_1a5f10;
            case 0x1A5F14u: goto label_1a5f14;
            case 0x1A5F18u: goto label_1a5f18;
            case 0x1A5F1Cu: goto label_1a5f1c;
            case 0x1A5F20u: goto label_1a5f20;
            case 0x1A5F24u: goto label_1a5f24;
            case 0x1A5F28u: goto label_1a5f28;
            case 0x1A5F2Cu: goto label_1a5f2c;
            case 0x1A5F30u: goto label_1a5f30;
            case 0x1A5F34u: goto label_1a5f34;
            case 0x1A5F38u: goto label_1a5f38;
            case 0x1A5F3Cu: goto label_1a5f3c;
            case 0x1A5F40u: goto label_1a5f40;
            case 0x1A5F44u: goto label_1a5f44;
            case 0x1A5F48u: goto label_1a5f48;
            case 0x1A5F4Cu: goto label_1a5f4c;
            case 0x1A5F50u: goto label_1a5f50;
            case 0x1A5F54u: goto label_1a5f54;
            case 0x1A5F58u: goto label_1a5f58;
            case 0x1A5F5Cu: goto label_1a5f5c;
            case 0x1A5F60u: goto label_1a5f60;
            case 0x1A5F64u: goto label_1a5f64;
            case 0x1A5F68u: goto label_1a5f68;
            case 0x1A5F6Cu: goto label_1a5f6c;
            case 0x1A5F70u: goto label_1a5f70;
            case 0x1A5F74u: goto label_1a5f74;
            case 0x1A5F78u: goto label_1a5f78;
            case 0x1A5F7Cu: goto label_1a5f7c;
            case 0x1A5F80u: goto label_1a5f80;
            case 0x1A5F84u: goto label_1a5f84;
            case 0x1A5F88u: goto label_1a5f88;
            case 0x1A5F8Cu: goto label_1a5f8c;
            case 0x1A5F90u: goto label_1a5f90;
            case 0x1A5F94u: goto label_1a5f94;
            case 0x1A5F98u: goto label_1a5f98;
            case 0x1A5F9Cu: goto label_1a5f9c;
            case 0x1A5FA0u: goto label_1a5fa0;
            case 0x1A5FA4u: goto label_1a5fa4;
            case 0x1A5FA8u: goto label_1a5fa8;
            case 0x1A5FACu: goto label_1a5fac;
            case 0x1A5FB0u: goto label_1a5fb0;
            case 0x1A5FB4u: goto label_1a5fb4;
            case 0x1A5FB8u: goto label_1a5fb8;
            case 0x1A5FBCu: goto label_1a5fbc;
            case 0x1A5FC0u: goto label_1a5fc0;
            case 0x1A5FC4u: goto label_1a5fc4;
            case 0x1A5FC8u: goto label_1a5fc8;
            case 0x1A5FCCu: goto label_1a5fcc;
            case 0x1A5FD0u: goto label_1a5fd0;
            case 0x1A5FD4u: goto label_1a5fd4;
            case 0x1A5FD8u: goto label_1a5fd8;
            case 0x1A5FDCu: goto label_1a5fdc;
            case 0x1A5FE0u: goto label_1a5fe0;
            case 0x1A5FE4u: goto label_1a5fe4;
            case 0x1A5FE8u: goto label_1a5fe8;
            case 0x1A5FECu: goto label_1a5fec;
            case 0x1A5FF0u: goto label_1a5ff0;
            case 0x1A5FF4u: goto label_1a5ff4;
            case 0x1A5FF8u: goto label_1a5ff8;
            case 0x1A5FFCu: goto label_1a5ffc;
            case 0x1A6000u: goto label_1a6000;
            case 0x1A6004u: goto label_1a6004;
            case 0x1A6008u: goto label_1a6008;
            case 0x1A600Cu: goto label_1a600c;
            case 0x1A6010u: goto label_1a6010;
            case 0x1A6014u: goto label_1a6014;
            case 0x1A6018u: goto label_1a6018;
            case 0x1A601Cu: goto label_1a601c;
            case 0x1A6020u: goto label_1a6020;
            case 0x1A6024u: goto label_1a6024;
            case 0x1A6028u: goto label_1a6028;
            case 0x1A602Cu: goto label_1a602c;
            case 0x1A6030u: goto label_1a6030;
            case 0x1A6034u: goto label_1a6034;
            case 0x1A6038u: goto label_1a6038;
            case 0x1A603Cu: goto label_1a603c;
            case 0x1A6040u: goto label_1a6040;
            case 0x1A6044u: goto label_1a6044;
            case 0x1A6048u: goto label_1a6048;
            case 0x1A604Cu: goto label_1a604c;
            case 0x1A6050u: goto label_1a6050;
            case 0x1A6054u: goto label_1a6054;
            case 0x1A6058u: goto label_1a6058;
            case 0x1A605Cu: goto label_1a605c;
            case 0x1A6060u: goto label_1a6060;
            case 0x1A6064u: goto label_1a6064;
            case 0x1A6068u: goto label_1a6068;
            case 0x1A606Cu: goto label_1a606c;
            case 0x1A6070u: goto label_1a6070;
            case 0x1A6074u: goto label_1a6074;
            case 0x1A6078u: goto label_1a6078;
            case 0x1A607Cu: goto label_1a607c;
            case 0x1A6080u: goto label_1a6080;
            case 0x1A6084u: goto label_1a6084;
            case 0x1A6088u: goto label_1a6088;
            case 0x1A608Cu: goto label_1a608c;
            case 0x1A6090u: goto label_1a6090;
            case 0x1A6094u: goto label_1a6094;
            case 0x1A6098u: goto label_1a6098;
            case 0x1A609Cu: goto label_1a609c;
            case 0x1A60A0u: goto label_1a60a0;
            case 0x1A60A4u: goto label_1a60a4;
            case 0x1A60A8u: goto label_1a60a8;
            case 0x1A60ACu: goto label_1a60ac;
            case 0x1A60B0u: goto label_1a60b0;
            case 0x1A60B4u: goto label_1a60b4;
            case 0x1A60B8u: goto label_1a60b8;
            case 0x1A60BCu: goto label_1a60bc;
            case 0x1A60C0u: goto label_1a60c0;
            case 0x1A60C4u: goto label_1a60c4;
            case 0x1A60C8u: goto label_1a60c8;
            case 0x1A60CCu: goto label_1a60cc;
            case 0x1A60D0u: goto label_1a60d0;
            case 0x1A60D4u: goto label_1a60d4;
            case 0x1A60D8u: goto label_1a60d8;
            case 0x1A60DCu: goto label_1a60dc;
            case 0x1A60E0u: goto label_1a60e0;
            case 0x1A60E4u: goto label_1a60e4;
            case 0x1A60E8u: goto label_1a60e8;
            case 0x1A60ECu: goto label_1a60ec;
            case 0x1A60F0u: goto label_1a60f0;
            case 0x1A60F4u: goto label_1a60f4;
            case 0x1A60F8u: goto label_1a60f8;
            case 0x1A60FCu: goto label_1a60fc;
            case 0x1A6100u: goto label_1a6100;
            case 0x1A6104u: goto label_1a6104;
            case 0x1A6108u: goto label_1a6108;
            case 0x1A610Cu: goto label_1a610c;
            case 0x1A6110u: goto label_1a6110;
            case 0x1A6114u: goto label_1a6114;
            case 0x1A6118u: goto label_1a6118;
            case 0x1A611Cu: goto label_1a611c;
            case 0x1A6120u: goto label_1a6120;
            case 0x1A6124u: goto label_1a6124;
            case 0x1A6128u: goto label_1a6128;
            case 0x1A612Cu: goto label_1a612c;
            case 0x1A6130u: goto label_1a6130;
            case 0x1A6134u: goto label_1a6134;
            case 0x1A6138u: goto label_1a6138;
            case 0x1A613Cu: goto label_1a613c;
            case 0x1A6140u: goto label_1a6140;
            case 0x1A6144u: goto label_1a6144;
            case 0x1A6148u: goto label_1a6148;
            case 0x1A614Cu: goto label_1a614c;
            case 0x1A6150u: goto label_1a6150;
            case 0x1A6154u: goto label_1a6154;
            case 0x1A6158u: goto label_1a6158;
            case 0x1A615Cu: goto label_1a615c;
            case 0x1A6160u: goto label_1a6160;
            case 0x1A6164u: goto label_1a6164;
            case 0x1A6168u: goto label_1a6168;
            case 0x1A616Cu: goto label_1a616c;
            case 0x1A6170u: goto label_1a6170;
            case 0x1A6174u: goto label_1a6174;
            case 0x1A6178u: goto label_1a6178;
            case 0x1A617Cu: goto label_1a617c;
            case 0x1A6180u: goto label_1a6180;
            case 0x1A6184u: goto label_1a6184;
            case 0x1A6188u: goto label_1a6188;
            case 0x1A618Cu: goto label_1a618c;
            case 0x1A6190u: goto label_1a6190;
            case 0x1A6194u: goto label_1a6194;
            case 0x1A6198u: goto label_1a6198;
            case 0x1A619Cu: goto label_1a619c;
            case 0x1A61A0u: goto label_1a61a0;
            case 0x1A61A4u: goto label_1a61a4;
            case 0x1A61A8u: goto label_1a61a8;
            case 0x1A61ACu: goto label_1a61ac;
            case 0x1A61B0u: goto label_1a61b0;
            case 0x1A61B4u: goto label_1a61b4;
            case 0x1A61B8u: goto label_1a61b8;
            case 0x1A61BCu: goto label_1a61bc;
            case 0x1A61C0u: goto label_1a61c0;
            case 0x1A61C4u: goto label_1a61c4;
            case 0x1A61C8u: goto label_1a61c8;
            case 0x1A61CCu: goto label_1a61cc;
            case 0x1A61D0u: goto label_1a61d0;
            case 0x1A61D4u: goto label_1a61d4;
            case 0x1A61D8u: goto label_1a61d8;
            case 0x1A61DCu: goto label_1a61dc;
            case 0x1A61E0u: goto label_1a61e0;
            case 0x1A61E4u: goto label_1a61e4;
            case 0x1A61E8u: goto label_1a61e8;
            case 0x1A61ECu: goto label_1a61ec;
            case 0x1A61F0u: goto label_1a61f0;
            case 0x1A61F4u: goto label_1a61f4;
            case 0x1A61F8u: goto label_1a61f8;
            case 0x1A61FCu: goto label_1a61fc;
            case 0x1A6200u: goto label_1a6200;
            case 0x1A6204u: goto label_1a6204;
            case 0x1A6208u: goto label_1a6208;
            case 0x1A620Cu: goto label_1a620c;
            case 0x1A6210u: goto label_1a6210;
            case 0x1A6214u: goto label_1a6214;
            case 0x1A6218u: goto label_1a6218;
            case 0x1A621Cu: goto label_1a621c;
            case 0x1A6220u: goto label_1a6220;
            case 0x1A6224u: goto label_1a6224;
            case 0x1A6228u: goto label_1a6228;
            case 0x1A622Cu: goto label_1a622c;
            case 0x1A6230u: goto label_1a6230;
            case 0x1A6234u: goto label_1a6234;
            case 0x1A6238u: goto label_1a6238;
            case 0x1A623Cu: goto label_1a623c;
            case 0x1A6240u: goto label_1a6240;
            case 0x1A6244u: goto label_1a6244;
            case 0x1A6248u: goto label_1a6248;
            case 0x1A624Cu: goto label_1a624c;
            case 0x1A6250u: goto label_1a6250;
            case 0x1A6254u: goto label_1a6254;
            case 0x1A6258u: goto label_1a6258;
            case 0x1A625Cu: goto label_1a625c;
            case 0x1A6260u: goto label_1a6260;
            case 0x1A6264u: goto label_1a6264;
            case 0x1A6268u: goto label_1a6268;
            case 0x1A626Cu: goto label_1a626c;
            case 0x1A6270u: goto label_1a6270;
            case 0x1A6274u: goto label_1a6274;
            case 0x1A6278u: goto label_1a6278;
            case 0x1A627Cu: goto label_1a627c;
            case 0x1A6280u: goto label_1a6280;
            case 0x1A6284u: goto label_1a6284;
            case 0x1A6288u: goto label_1a6288;
            case 0x1A628Cu: goto label_1a628c;
            case 0x1A6290u: goto label_1a6290;
            case 0x1A6294u: goto label_1a6294;
            case 0x1A6298u: goto label_1a6298;
            case 0x1A629Cu: goto label_1a629c;
            case 0x1A62A0u: goto label_1a62a0;
            case 0x1A62A4u: goto label_1a62a4;
            case 0x1A62A8u: goto label_1a62a8;
            case 0x1A62ACu: goto label_1a62ac;
            case 0x1A62B0u: goto label_1a62b0;
            case 0x1A62B4u: goto label_1a62b4;
            case 0x1A62B8u: goto label_1a62b8;
            case 0x1A62BCu: goto label_1a62bc;
            case 0x1A62C0u: goto label_1a62c0;
            case 0x1A62C4u: goto label_1a62c4;
            case 0x1A62C8u: goto label_1a62c8;
            case 0x1A62CCu: goto label_1a62cc;
            case 0x1A62D0u: goto label_1a62d0;
            case 0x1A62D4u: goto label_1a62d4;
            case 0x1A62D8u: goto label_1a62d8;
            case 0x1A62DCu: goto label_1a62dc;
            case 0x1A62E0u: goto label_1a62e0;
            case 0x1A62E4u: goto label_1a62e4;
            case 0x1A62E8u: goto label_1a62e8;
            case 0x1A62ECu: goto label_1a62ec;
            case 0x1A62F0u: goto label_1a62f0;
            case 0x1A62F4u: goto label_1a62f4;
            case 0x1A62F8u: goto label_1a62f8;
            case 0x1A62FCu: goto label_1a62fc;
            case 0x1A6300u: goto label_1a6300;
            case 0x1A6304u: goto label_1a6304;
            case 0x1A6308u: goto label_1a6308;
            case 0x1A630Cu: goto label_1a630c;
            case 0x1A6310u: goto label_1a6310;
            case 0x1A6314u: goto label_1a6314;
            case 0x1A6318u: goto label_1a6318;
            case 0x1A631Cu: goto label_1a631c;
            case 0x1A6320u: goto label_1a6320;
            case 0x1A6324u: goto label_1a6324;
            case 0x1A6328u: goto label_1a6328;
            case 0x1A632Cu: goto label_1a632c;
            case 0x1A6330u: goto label_1a6330;
            case 0x1A6334u: goto label_1a6334;
            case 0x1A6338u: goto label_1a6338;
            case 0x1A633Cu: goto label_1a633c;
            case 0x1A6340u: goto label_1a6340;
            case 0x1A6344u: goto label_1a6344;
            case 0x1A6348u: goto label_1a6348;
            case 0x1A634Cu: goto label_1a634c;
            case 0x1A6350u: goto label_1a6350;
            case 0x1A6354u: goto label_1a6354;
            case 0x1A6358u: goto label_1a6358;
            case 0x1A635Cu: goto label_1a635c;
            case 0x1A6360u: goto label_1a6360;
            case 0x1A6364u: goto label_1a6364;
            case 0x1A6368u: goto label_1a6368;
            case 0x1A636Cu: goto label_1a636c;
            case 0x1A6370u: goto label_1a6370;
            case 0x1A6374u: goto label_1a6374;
            case 0x1A6378u: goto label_1a6378;
            case 0x1A637Cu: goto label_1a637c;
            case 0x1A6380u: goto label_1a6380;
            case 0x1A6384u: goto label_1a6384;
            case 0x1A6388u: goto label_1a6388;
            case 0x1A638Cu: goto label_1a638c;
            case 0x1A6390u: goto label_1a6390;
            case 0x1A6394u: goto label_1a6394;
            case 0x1A6398u: goto label_1a6398;
            case 0x1A639Cu: goto label_1a639c;
            case 0x1A63A0u: goto label_1a63a0;
            case 0x1A63A4u: goto label_1a63a4;
            case 0x1A63A8u: goto label_1a63a8;
            case 0x1A63ACu: goto label_1a63ac;
            case 0x1A63B0u: goto label_1a63b0;
            case 0x1A63B4u: goto label_1a63b4;
            case 0x1A63B8u: goto label_1a63b8;
            case 0x1A63BCu: goto label_1a63bc;
            case 0x1A63C0u: goto label_1a63c0;
            case 0x1A63C4u: goto label_1a63c4;
            case 0x1A63C8u: goto label_1a63c8;
            case 0x1A63CCu: goto label_1a63cc;
            case 0x1A63D0u: goto label_1a63d0;
            case 0x1A63D4u: goto label_1a63d4;
            case 0x1A63D8u: goto label_1a63d8;
            case 0x1A63DCu: goto label_1a63dc;
            case 0x1A63E0u: goto label_1a63e0;
            case 0x1A63E4u: goto label_1a63e4;
            case 0x1A63E8u: goto label_1a63e8;
            case 0x1A63ECu: goto label_1a63ec;
            case 0x1A63F0u: goto label_1a63f0;
            case 0x1A63F4u: goto label_1a63f4;
            case 0x1A63F8u: goto label_1a63f8;
            case 0x1A63FCu: goto label_1a63fc;
            case 0x1A6400u: goto label_1a6400;
            case 0x1A6404u: goto label_1a6404;
            case 0x1A6408u: goto label_1a6408;
            case 0x1A640Cu: goto label_1a640c;
            case 0x1A6410u: goto label_1a6410;
            case 0x1A6414u: goto label_1a6414;
            case 0x1A6418u: goto label_1a6418;
            case 0x1A641Cu: goto label_1a641c;
            case 0x1A6420u: goto label_1a6420;
            case 0x1A6424u: goto label_1a6424;
            case 0x1A6428u: goto label_1a6428;
            case 0x1A642Cu: goto label_1a642c;
            case 0x1A6430u: goto label_1a6430;
            case 0x1A6434u: goto label_1a6434;
            case 0x1A6438u: goto label_1a6438;
            case 0x1A643Cu: goto label_1a643c;
            case 0x1A6440u: goto label_1a6440;
            case 0x1A6444u: goto label_1a6444;
            case 0x1A6448u: goto label_1a6448;
            case 0x1A644Cu: goto label_1a644c;
            case 0x1A6450u: goto label_1a6450;
            case 0x1A6454u: goto label_1a6454;
            case 0x1A6458u: goto label_1a6458;
            case 0x1A645Cu: goto label_1a645c;
            case 0x1A6460u: goto label_1a6460;
            case 0x1A6464u: goto label_1a6464;
            case 0x1A6468u: goto label_1a6468;
            case 0x1A646Cu: goto label_1a646c;
            case 0x1A6470u: goto label_1a6470;
            case 0x1A6474u: goto label_1a6474;
            case 0x1A6478u: goto label_1a6478;
            case 0x1A647Cu: goto label_1a647c;
            case 0x1A6480u: goto label_1a6480;
            case 0x1A6484u: goto label_1a6484;
            case 0x1A6488u: goto label_1a6488;
            case 0x1A648Cu: goto label_1a648c;
            case 0x1A6490u: goto label_1a6490;
            case 0x1A6494u: goto label_1a6494;
            case 0x1A6498u: goto label_1a6498;
            case 0x1A649Cu: goto label_1a649c;
            case 0x1A64A0u: goto label_1a64a0;
            case 0x1A64A4u: goto label_1a64a4;
            case 0x1A64A8u: goto label_1a64a8;
            case 0x1A64ACu: goto label_1a64ac;
            case 0x1A64B0u: goto label_1a64b0;
            case 0x1A64B4u: goto label_1a64b4;
            case 0x1A64B8u: goto label_1a64b8;
            case 0x1A64BCu: goto label_1a64bc;
            case 0x1A64C0u: goto label_1a64c0;
            case 0x1A64C4u: goto label_1a64c4;
            case 0x1A64C8u: goto label_1a64c8;
            case 0x1A64CCu: goto label_1a64cc;
            case 0x1A64D0u: goto label_1a64d0;
            case 0x1A64D4u: goto label_1a64d4;
            case 0x1A64D8u: goto label_1a64d8;
            case 0x1A64DCu: goto label_1a64dc;
            case 0x1A64E0u: goto label_1a64e0;
            case 0x1A64E4u: goto label_1a64e4;
            case 0x1A64E8u: goto label_1a64e8;
            case 0x1A64ECu: goto label_1a64ec;
            case 0x1A64F0u: goto label_1a64f0;
            case 0x1A64F4u: goto label_1a64f4;
            case 0x1A64F8u: goto label_1a64f8;
            case 0x1A64FCu: goto label_1a64fc;
            case 0x1A6500u: goto label_1a6500;
            case 0x1A6504u: goto label_1a6504;
            case 0x1A6508u: goto label_1a6508;
            case 0x1A650Cu: goto label_1a650c;
            case 0x1A6510u: goto label_1a6510;
            case 0x1A6514u: goto label_1a6514;
            case 0x1A6518u: goto label_1a6518;
            case 0x1A651Cu: goto label_1a651c;
            case 0x1A6520u: goto label_1a6520;
            case 0x1A6524u: goto label_1a6524;
            case 0x1A6528u: goto label_1a6528;
            case 0x1A652Cu: goto label_1a652c;
            case 0x1A6530u: goto label_1a6530;
            case 0x1A6534u: goto label_1a6534;
            case 0x1A6538u: goto label_1a6538;
            case 0x1A653Cu: goto label_1a653c;
            case 0x1A6540u: goto label_1a6540;
            case 0x1A6544u: goto label_1a6544;
            case 0x1A6548u: goto label_1a6548;
            case 0x1A654Cu: goto label_1a654c;
            case 0x1A6550u: goto label_1a6550;
            case 0x1A6554u: goto label_1a6554;
            case 0x1A6558u: goto label_1a6558;
            case 0x1A655Cu: goto label_1a655c;
            case 0x1A6560u: goto label_1a6560;
            case 0x1A6564u: goto label_1a6564;
            case 0x1A6568u: goto label_1a6568;
            case 0x1A656Cu: goto label_1a656c;
            case 0x1A6570u: goto label_1a6570;
            case 0x1A6574u: goto label_1a6574;
            case 0x1A6578u: goto label_1a6578;
            case 0x1A657Cu: goto label_1a657c;
            case 0x1A6580u: goto label_1a6580;
            case 0x1A6584u: goto label_1a6584;
            case 0x1A6588u: goto label_1a6588;
            case 0x1A658Cu: goto label_1a658c;
            case 0x1A6590u: goto label_1a6590;
            case 0x1A6594u: goto label_1a6594;
            case 0x1A6598u: goto label_1a6598;
            case 0x1A659Cu: goto label_1a659c;
            case 0x1A65A0u: goto label_1a65a0;
            case 0x1A65A4u: goto label_1a65a4;
            case 0x1A65A8u: goto label_1a65a8;
            case 0x1A65ACu: goto label_1a65ac;
            case 0x1A65B0u: goto label_1a65b0;
            case 0x1A65B4u: goto label_1a65b4;
            case 0x1A65B8u: goto label_1a65b8;
            case 0x1A65BCu: goto label_1a65bc;
            case 0x1A65C0u: goto label_1a65c0;
            case 0x1A65C4u: goto label_1a65c4;
            case 0x1A65C8u: goto label_1a65c8;
            case 0x1A65CCu: goto label_1a65cc;
            case 0x1A65D0u: goto label_1a65d0;
            case 0x1A65D4u: goto label_1a65d4;
            case 0x1A65D8u: goto label_1a65d8;
            case 0x1A65DCu: goto label_1a65dc;
            case 0x1A65E0u: goto label_1a65e0;
            case 0x1A65E4u: goto label_1a65e4;
            case 0x1A65E8u: goto label_1a65e8;
            case 0x1A65ECu: goto label_1a65ec;
            case 0x1A65F0u: goto label_1a65f0;
            case 0x1A65F4u: goto label_1a65f4;
            case 0x1A65F8u: goto label_1a65f8;
            case 0x1A65FCu: goto label_1a65fc;
            case 0x1A6600u: goto label_1a6600;
            case 0x1A6604u: goto label_1a6604;
            case 0x1A6608u: goto label_1a6608;
            case 0x1A660Cu: goto label_1a660c;
            case 0x1A6610u: goto label_1a6610;
            case 0x1A6614u: goto label_1a6614;
            case 0x1A6618u: goto label_1a6618;
            case 0x1A661Cu: goto label_1a661c;
            case 0x1A6620u: goto label_1a6620;
            case 0x1A6624u: goto label_1a6624;
            case 0x1A6628u: goto label_1a6628;
            case 0x1A662Cu: goto label_1a662c;
            case 0x1A6630u: goto label_1a6630;
            case 0x1A6634u: goto label_1a6634;
            case 0x1A6638u: goto label_1a6638;
            case 0x1A663Cu: goto label_1a663c;
            case 0x1A6640u: goto label_1a6640;
            case 0x1A6644u: goto label_1a6644;
            case 0x1A6648u: goto label_1a6648;
            case 0x1A664Cu: goto label_1a664c;
            case 0x1A6650u: goto label_1a6650;
            case 0x1A6654u: goto label_1a6654;
            case 0x1A6658u: goto label_1a6658;
            case 0x1A665Cu: goto label_1a665c;
            case 0x1A6660u: goto label_1a6660;
            case 0x1A6664u: goto label_1a6664;
            case 0x1A6668u: goto label_1a6668;
            case 0x1A666Cu: goto label_1a666c;
            case 0x1A6670u: goto label_1a6670;
            case 0x1A6674u: goto label_1a6674;
            case 0x1A6678u: goto label_1a6678;
            case 0x1A667Cu: goto label_1a667c;
            case 0x1A6680u: goto label_1a6680;
            case 0x1A6684u: goto label_1a6684;
            case 0x1A6688u: goto label_1a6688;
            case 0x1A668Cu: goto label_1a668c;
            case 0x1A6690u: goto label_1a6690;
            case 0x1A6694u: goto label_1a6694;
            case 0x1A6698u: goto label_1a6698;
            case 0x1A669Cu: goto label_1a669c;
            case 0x1A66A0u: goto label_1a66a0;
            case 0x1A66A4u: goto label_1a66a4;
            case 0x1A66A8u: goto label_1a66a8;
            case 0x1A66ACu: goto label_1a66ac;
            case 0x1A66B0u: goto label_1a66b0;
            case 0x1A66B4u: goto label_1a66b4;
            case 0x1A66B8u: goto label_1a66b8;
            case 0x1A66BCu: goto label_1a66bc;
            case 0x1A66C0u: goto label_1a66c0;
            case 0x1A66C4u: goto label_1a66c4;
            case 0x1A66C8u: goto label_1a66c8;
            case 0x1A66CCu: goto label_1a66cc;
            case 0x1A66D0u: goto label_1a66d0;
            case 0x1A66D4u: goto label_1a66d4;
            case 0x1A66D8u: goto label_1a66d8;
            case 0x1A66DCu: goto label_1a66dc;
            case 0x1A66E0u: goto label_1a66e0;
            case 0x1A66E4u: goto label_1a66e4;
            case 0x1A66E8u: goto label_1a66e8;
            case 0x1A66ECu: goto label_1a66ec;
            case 0x1A66F0u: goto label_1a66f0;
            case 0x1A66F4u: goto label_1a66f4;
            case 0x1A66F8u: goto label_1a66f8;
            case 0x1A66FCu: goto label_1a66fc;
            case 0x1A6700u: goto label_1a6700;
            case 0x1A6704u: goto label_1a6704;
            case 0x1A6708u: goto label_1a6708;
            case 0x1A670Cu: goto label_1a670c;
            case 0x1A6710u: goto label_1a6710;
            case 0x1A6714u: goto label_1a6714;
            case 0x1A6718u: goto label_1a6718;
            case 0x1A671Cu: goto label_1a671c;
            case 0x1A6720u: goto label_1a6720;
            case 0x1A6724u: goto label_1a6724;
            case 0x1A6728u: goto label_1a6728;
            case 0x1A672Cu: goto label_1a672c;
            case 0x1A6730u: goto label_1a6730;
            case 0x1A6734u: goto label_1a6734;
            case 0x1A6738u: goto label_1a6738;
            case 0x1A673Cu: goto label_1a673c;
            case 0x1A6740u: goto label_1a6740;
            case 0x1A6744u: goto label_1a6744;
            case 0x1A6748u: goto label_1a6748;
            case 0x1A674Cu: goto label_1a674c;
            case 0x1A6750u: goto label_1a6750;
            case 0x1A6754u: goto label_1a6754;
            case 0x1A6758u: goto label_1a6758;
            case 0x1A675Cu: goto label_1a675c;
            case 0x1A6760u: goto label_1a6760;
            case 0x1A6764u: goto label_1a6764;
            case 0x1A6768u: goto label_1a6768;
            case 0x1A676Cu: goto label_1a676c;
            case 0x1A6770u: goto label_1a6770;
            case 0x1A6774u: goto label_1a6774;
            case 0x1A6778u: goto label_1a6778;
            case 0x1A677Cu: goto label_1a677c;
            case 0x1A6780u: goto label_1a6780;
            case 0x1A6784u: goto label_1a6784;
            case 0x1A6788u: goto label_1a6788;
            case 0x1A678Cu: goto label_1a678c;
            case 0x1A6790u: goto label_1a6790;
            case 0x1A6794u: goto label_1a6794;
            case 0x1A6798u: goto label_1a6798;
            case 0x1A679Cu: goto label_1a679c;
            case 0x1A67A0u: goto label_1a67a0;
            case 0x1A67A4u: goto label_1a67a4;
            case 0x1A67A8u: goto label_1a67a8;
            case 0x1A67ACu: goto label_1a67ac;
            case 0x1A67B0u: goto label_1a67b0;
            case 0x1A67B4u: goto label_1a67b4;
            case 0x1A67B8u: goto label_1a67b8;
            case 0x1A67BCu: goto label_1a67bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6784u; }
            if (ctx->pc != 0x1A6784u) { return; }
        }
    }
    ctx->pc = 0x1A6784u;
label_1a6784:
    // 0x1a6784: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a6788:
    if (ctx->pc == 0x1A6788u) {
        ctx->pc = 0x1A678Cu;
        goto label_1a678c;
    }
    ctx->pc = 0x1A6784u;
    {
        const bool branch_taken_0x1a6784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6784) {
            ctx->pc = 0x1A67B0u;
            goto label_1a67b0;
        }
    }
    ctx->pc = 0x1A678Cu;
label_1a678c:
    // 0x1a678c: 0x0  nop
    ctx->pc = 0x1a678cu;
    // NOP
label_1a6790:
    // 0x1a6790: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a6790u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_1a6794:
    // 0x1a6794: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a6794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a6798:
    // 0x1a6798: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1a6798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1a679c:
    // 0x1a679c: 0x24c65b00  addiu       $a2, $a2, 0x5B00
    ctx->pc = 0x1a679cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23296));
label_1a67a0:
    // 0x1a67a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a67a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a67a4:
    // 0x1a67a4: 0xc053ca4  jal         func_14F290
label_1a67a8:
    if (ctx->pc == 0x1A67A8u) {
        ctx->pc = 0x1A67A8u;
            // 0x1a67a8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A67ACu;
        goto label_1a67ac;
    }
    ctx->pc = 0x1A67A4u;
    SET_GPR_U32(ctx, 31, 0x1A67ACu);
    ctx->pc = 0x1A67A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A67A4u;
            // 0x1a67a8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A67ACu; }
        if (ctx->pc != 0x1A67ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A67ACu; }
        if (ctx->pc != 0x1A67ACu) { return; }
    }
    ctx->pc = 0x1A67ACu;
label_1a67ac:
    // 0x1a67ac: 0x0  nop
    ctx->pc = 0x1a67acu;
    // NOP
label_1a67b0:
    // 0x1a67b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a67b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a67b4:
    // 0x1a67b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a67b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a67b8:
    // 0x1a67b8: 0x3e00008  jr          $ra
label_1a67bc:
    if (ctx->pc == 0x1A67BCu) {
        ctx->pc = 0x1A67BCu;
            // 0x1a67bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A67C0u;
        goto label_fallthrough_0x1a67b8;
    }
    ctx->pc = 0x1A67B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A67BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A67B8u;
            // 0x1a67bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5D40u: goto label_1a5d40;
            case 0x1A5D44u: goto label_1a5d44;
            case 0x1A5D48u: goto label_1a5d48;
            case 0x1A5D4Cu: goto label_1a5d4c;
            case 0x1A5D50u: goto label_1a5d50;
            case 0x1A5D54u: goto label_1a5d54;
            case 0x1A5D58u: goto label_1a5d58;
            case 0x1A5D5Cu: goto label_1a5d5c;
            case 0x1A5D60u: goto label_1a5d60;
            case 0x1A5D64u: goto label_1a5d64;
            case 0x1A5D68u: goto label_1a5d68;
            case 0x1A5D6Cu: goto label_1a5d6c;
            case 0x1A5D70u: goto label_1a5d70;
            case 0x1A5D74u: goto label_1a5d74;
            case 0x1A5D78u: goto label_1a5d78;
            case 0x1A5D7Cu: goto label_1a5d7c;
            case 0x1A5D80u: goto label_1a5d80;
            case 0x1A5D84u: goto label_1a5d84;
            case 0x1A5D88u: goto label_1a5d88;
            case 0x1A5D8Cu: goto label_1a5d8c;
            case 0x1A5D90u: goto label_1a5d90;
            case 0x1A5D94u: goto label_1a5d94;
            case 0x1A5D98u: goto label_1a5d98;
            case 0x1A5D9Cu: goto label_1a5d9c;
            case 0x1A5DA0u: goto label_1a5da0;
            case 0x1A5DA4u: goto label_1a5da4;
            case 0x1A5DA8u: goto label_1a5da8;
            case 0x1A5DACu: goto label_1a5dac;
            case 0x1A5DB0u: goto label_1a5db0;
            case 0x1A5DB4u: goto label_1a5db4;
            case 0x1A5DB8u: goto label_1a5db8;
            case 0x1A5DBCu: goto label_1a5dbc;
            case 0x1A5DC0u: goto label_1a5dc0;
            case 0x1A5DC4u: goto label_1a5dc4;
            case 0x1A5DC8u: goto label_1a5dc8;
            case 0x1A5DCCu: goto label_1a5dcc;
            case 0x1A5DD0u: goto label_1a5dd0;
            case 0x1A5DD4u: goto label_1a5dd4;
            case 0x1A5DD8u: goto label_1a5dd8;
            case 0x1A5DDCu: goto label_1a5ddc;
            case 0x1A5DE0u: goto label_1a5de0;
            case 0x1A5DE4u: goto label_1a5de4;
            case 0x1A5DE8u: goto label_1a5de8;
            case 0x1A5DECu: goto label_1a5dec;
            case 0x1A5DF0u: goto label_1a5df0;
            case 0x1A5DF4u: goto label_1a5df4;
            case 0x1A5DF8u: goto label_1a5df8;
            case 0x1A5DFCu: goto label_1a5dfc;
            case 0x1A5E00u: goto label_1a5e00;
            case 0x1A5E04u: goto label_1a5e04;
            case 0x1A5E08u: goto label_1a5e08;
            case 0x1A5E0Cu: goto label_1a5e0c;
            case 0x1A5E10u: goto label_1a5e10;
            case 0x1A5E14u: goto label_1a5e14;
            case 0x1A5E18u: goto label_1a5e18;
            case 0x1A5E1Cu: goto label_1a5e1c;
            case 0x1A5E20u: goto label_1a5e20;
            case 0x1A5E24u: goto label_1a5e24;
            case 0x1A5E28u: goto label_1a5e28;
            case 0x1A5E2Cu: goto label_1a5e2c;
            case 0x1A5E30u: goto label_1a5e30;
            case 0x1A5E34u: goto label_1a5e34;
            case 0x1A5E38u: goto label_1a5e38;
            case 0x1A5E3Cu: goto label_1a5e3c;
            case 0x1A5E40u: goto label_1a5e40;
            case 0x1A5E44u: goto label_1a5e44;
            case 0x1A5E48u: goto label_1a5e48;
            case 0x1A5E4Cu: goto label_1a5e4c;
            case 0x1A5E50u: goto label_1a5e50;
            case 0x1A5E54u: goto label_1a5e54;
            case 0x1A5E58u: goto label_1a5e58;
            case 0x1A5E5Cu: goto label_1a5e5c;
            case 0x1A5E60u: goto label_1a5e60;
            case 0x1A5E64u: goto label_1a5e64;
            case 0x1A5E68u: goto label_1a5e68;
            case 0x1A5E6Cu: goto label_1a5e6c;
            case 0x1A5E70u: goto label_1a5e70;
            case 0x1A5E74u: goto label_1a5e74;
            case 0x1A5E78u: goto label_1a5e78;
            case 0x1A5E7Cu: goto label_1a5e7c;
            case 0x1A5E80u: goto label_1a5e80;
            case 0x1A5E84u: goto label_1a5e84;
            case 0x1A5E88u: goto label_1a5e88;
            case 0x1A5E8Cu: goto label_1a5e8c;
            case 0x1A5E90u: goto label_1a5e90;
            case 0x1A5E94u: goto label_1a5e94;
            case 0x1A5E98u: goto label_1a5e98;
            case 0x1A5E9Cu: goto label_1a5e9c;
            case 0x1A5EA0u: goto label_1a5ea0;
            case 0x1A5EA4u: goto label_1a5ea4;
            case 0x1A5EA8u: goto label_1a5ea8;
            case 0x1A5EACu: goto label_1a5eac;
            case 0x1A5EB0u: goto label_1a5eb0;
            case 0x1A5EB4u: goto label_1a5eb4;
            case 0x1A5EB8u: goto label_1a5eb8;
            case 0x1A5EBCu: goto label_1a5ebc;
            case 0x1A5EC0u: goto label_1a5ec0;
            case 0x1A5EC4u: goto label_1a5ec4;
            case 0x1A5EC8u: goto label_1a5ec8;
            case 0x1A5ECCu: goto label_1a5ecc;
            case 0x1A5ED0u: goto label_1a5ed0;
            case 0x1A5ED4u: goto label_1a5ed4;
            case 0x1A5ED8u: goto label_1a5ed8;
            case 0x1A5EDCu: goto label_1a5edc;
            case 0x1A5EE0u: goto label_1a5ee0;
            case 0x1A5EE4u: goto label_1a5ee4;
            case 0x1A5EE8u: goto label_1a5ee8;
            case 0x1A5EECu: goto label_1a5eec;
            case 0x1A5EF0u: goto label_1a5ef0;
            case 0x1A5EF4u: goto label_1a5ef4;
            case 0x1A5EF8u: goto label_1a5ef8;
            case 0x1A5EFCu: goto label_1a5efc;
            case 0x1A5F00u: goto label_1a5f00;
            case 0x1A5F04u: goto label_1a5f04;
            case 0x1A5F08u: goto label_1a5f08;
            case 0x1A5F0Cu: goto label_1a5f0c;
            case 0x1A5F10u: goto label_1a5f10;
            case 0x1A5F14u: goto label_1a5f14;
            case 0x1A5F18u: goto label_1a5f18;
            case 0x1A5F1Cu: goto label_1a5f1c;
            case 0x1A5F20u: goto label_1a5f20;
            case 0x1A5F24u: goto label_1a5f24;
            case 0x1A5F28u: goto label_1a5f28;
            case 0x1A5F2Cu: goto label_1a5f2c;
            case 0x1A5F30u: goto label_1a5f30;
            case 0x1A5F34u: goto label_1a5f34;
            case 0x1A5F38u: goto label_1a5f38;
            case 0x1A5F3Cu: goto label_1a5f3c;
            case 0x1A5F40u: goto label_1a5f40;
            case 0x1A5F44u: goto label_1a5f44;
            case 0x1A5F48u: goto label_1a5f48;
            case 0x1A5F4Cu: goto label_1a5f4c;
            case 0x1A5F50u: goto label_1a5f50;
            case 0x1A5F54u: goto label_1a5f54;
            case 0x1A5F58u: goto label_1a5f58;
            case 0x1A5F5Cu: goto label_1a5f5c;
            case 0x1A5F60u: goto label_1a5f60;
            case 0x1A5F64u: goto label_1a5f64;
            case 0x1A5F68u: goto label_1a5f68;
            case 0x1A5F6Cu: goto label_1a5f6c;
            case 0x1A5F70u: goto label_1a5f70;
            case 0x1A5F74u: goto label_1a5f74;
            case 0x1A5F78u: goto label_1a5f78;
            case 0x1A5F7Cu: goto label_1a5f7c;
            case 0x1A5F80u: goto label_1a5f80;
            case 0x1A5F84u: goto label_1a5f84;
            case 0x1A5F88u: goto label_1a5f88;
            case 0x1A5F8Cu: goto label_1a5f8c;
            case 0x1A5F90u: goto label_1a5f90;
            case 0x1A5F94u: goto label_1a5f94;
            case 0x1A5F98u: goto label_1a5f98;
            case 0x1A5F9Cu: goto label_1a5f9c;
            case 0x1A5FA0u: goto label_1a5fa0;
            case 0x1A5FA4u: goto label_1a5fa4;
            case 0x1A5FA8u: goto label_1a5fa8;
            case 0x1A5FACu: goto label_1a5fac;
            case 0x1A5FB0u: goto label_1a5fb0;
            case 0x1A5FB4u: goto label_1a5fb4;
            case 0x1A5FB8u: goto label_1a5fb8;
            case 0x1A5FBCu: goto label_1a5fbc;
            case 0x1A5FC0u: goto label_1a5fc0;
            case 0x1A5FC4u: goto label_1a5fc4;
            case 0x1A5FC8u: goto label_1a5fc8;
            case 0x1A5FCCu: goto label_1a5fcc;
            case 0x1A5FD0u: goto label_1a5fd0;
            case 0x1A5FD4u: goto label_1a5fd4;
            case 0x1A5FD8u: goto label_1a5fd8;
            case 0x1A5FDCu: goto label_1a5fdc;
            case 0x1A5FE0u: goto label_1a5fe0;
            case 0x1A5FE4u: goto label_1a5fe4;
            case 0x1A5FE8u: goto label_1a5fe8;
            case 0x1A5FECu: goto label_1a5fec;
            case 0x1A5FF0u: goto label_1a5ff0;
            case 0x1A5FF4u: goto label_1a5ff4;
            case 0x1A5FF8u: goto label_1a5ff8;
            case 0x1A5FFCu: goto label_1a5ffc;
            case 0x1A6000u: goto label_1a6000;
            case 0x1A6004u: goto label_1a6004;
            case 0x1A6008u: goto label_1a6008;
            case 0x1A600Cu: goto label_1a600c;
            case 0x1A6010u: goto label_1a6010;
            case 0x1A6014u: goto label_1a6014;
            case 0x1A6018u: goto label_1a6018;
            case 0x1A601Cu: goto label_1a601c;
            case 0x1A6020u: goto label_1a6020;
            case 0x1A6024u: goto label_1a6024;
            case 0x1A6028u: goto label_1a6028;
            case 0x1A602Cu: goto label_1a602c;
            case 0x1A6030u: goto label_1a6030;
            case 0x1A6034u: goto label_1a6034;
            case 0x1A6038u: goto label_1a6038;
            case 0x1A603Cu: goto label_1a603c;
            case 0x1A6040u: goto label_1a6040;
            case 0x1A6044u: goto label_1a6044;
            case 0x1A6048u: goto label_1a6048;
            case 0x1A604Cu: goto label_1a604c;
            case 0x1A6050u: goto label_1a6050;
            case 0x1A6054u: goto label_1a6054;
            case 0x1A6058u: goto label_1a6058;
            case 0x1A605Cu: goto label_1a605c;
            case 0x1A6060u: goto label_1a6060;
            case 0x1A6064u: goto label_1a6064;
            case 0x1A6068u: goto label_1a6068;
            case 0x1A606Cu: goto label_1a606c;
            case 0x1A6070u: goto label_1a6070;
            case 0x1A6074u: goto label_1a6074;
            case 0x1A6078u: goto label_1a6078;
            case 0x1A607Cu: goto label_1a607c;
            case 0x1A6080u: goto label_1a6080;
            case 0x1A6084u: goto label_1a6084;
            case 0x1A6088u: goto label_1a6088;
            case 0x1A608Cu: goto label_1a608c;
            case 0x1A6090u: goto label_1a6090;
            case 0x1A6094u: goto label_1a6094;
            case 0x1A6098u: goto label_1a6098;
            case 0x1A609Cu: goto label_1a609c;
            case 0x1A60A0u: goto label_1a60a0;
            case 0x1A60A4u: goto label_1a60a4;
            case 0x1A60A8u: goto label_1a60a8;
            case 0x1A60ACu: goto label_1a60ac;
            case 0x1A60B0u: goto label_1a60b0;
            case 0x1A60B4u: goto label_1a60b4;
            case 0x1A60B8u: goto label_1a60b8;
            case 0x1A60BCu: goto label_1a60bc;
            case 0x1A60C0u: goto label_1a60c0;
            case 0x1A60C4u: goto label_1a60c4;
            case 0x1A60C8u: goto label_1a60c8;
            case 0x1A60CCu: goto label_1a60cc;
            case 0x1A60D0u: goto label_1a60d0;
            case 0x1A60D4u: goto label_1a60d4;
            case 0x1A60D8u: goto label_1a60d8;
            case 0x1A60DCu: goto label_1a60dc;
            case 0x1A60E0u: goto label_1a60e0;
            case 0x1A60E4u: goto label_1a60e4;
            case 0x1A60E8u: goto label_1a60e8;
            case 0x1A60ECu: goto label_1a60ec;
            case 0x1A60F0u: goto label_1a60f0;
            case 0x1A60F4u: goto label_1a60f4;
            case 0x1A60F8u: goto label_1a60f8;
            case 0x1A60FCu: goto label_1a60fc;
            case 0x1A6100u: goto label_1a6100;
            case 0x1A6104u: goto label_1a6104;
            case 0x1A6108u: goto label_1a6108;
            case 0x1A610Cu: goto label_1a610c;
            case 0x1A6110u: goto label_1a6110;
            case 0x1A6114u: goto label_1a6114;
            case 0x1A6118u: goto label_1a6118;
            case 0x1A611Cu: goto label_1a611c;
            case 0x1A6120u: goto label_1a6120;
            case 0x1A6124u: goto label_1a6124;
            case 0x1A6128u: goto label_1a6128;
            case 0x1A612Cu: goto label_1a612c;
            case 0x1A6130u: goto label_1a6130;
            case 0x1A6134u: goto label_1a6134;
            case 0x1A6138u: goto label_1a6138;
            case 0x1A613Cu: goto label_1a613c;
            case 0x1A6140u: goto label_1a6140;
            case 0x1A6144u: goto label_1a6144;
            case 0x1A6148u: goto label_1a6148;
            case 0x1A614Cu: goto label_1a614c;
            case 0x1A6150u: goto label_1a6150;
            case 0x1A6154u: goto label_1a6154;
            case 0x1A6158u: goto label_1a6158;
            case 0x1A615Cu: goto label_1a615c;
            case 0x1A6160u: goto label_1a6160;
            case 0x1A6164u: goto label_1a6164;
            case 0x1A6168u: goto label_1a6168;
            case 0x1A616Cu: goto label_1a616c;
            case 0x1A6170u: goto label_1a6170;
            case 0x1A6174u: goto label_1a6174;
            case 0x1A6178u: goto label_1a6178;
            case 0x1A617Cu: goto label_1a617c;
            case 0x1A6180u: goto label_1a6180;
            case 0x1A6184u: goto label_1a6184;
            case 0x1A6188u: goto label_1a6188;
            case 0x1A618Cu: goto label_1a618c;
            case 0x1A6190u: goto label_1a6190;
            case 0x1A6194u: goto label_1a6194;
            case 0x1A6198u: goto label_1a6198;
            case 0x1A619Cu: goto label_1a619c;
            case 0x1A61A0u: goto label_1a61a0;
            case 0x1A61A4u: goto label_1a61a4;
            case 0x1A61A8u: goto label_1a61a8;
            case 0x1A61ACu: goto label_1a61ac;
            case 0x1A61B0u: goto label_1a61b0;
            case 0x1A61B4u: goto label_1a61b4;
            case 0x1A61B8u: goto label_1a61b8;
            case 0x1A61BCu: goto label_1a61bc;
            case 0x1A61C0u: goto label_1a61c0;
            case 0x1A61C4u: goto label_1a61c4;
            case 0x1A61C8u: goto label_1a61c8;
            case 0x1A61CCu: goto label_1a61cc;
            case 0x1A61D0u: goto label_1a61d0;
            case 0x1A61D4u: goto label_1a61d4;
            case 0x1A61D8u: goto label_1a61d8;
            case 0x1A61DCu: goto label_1a61dc;
            case 0x1A61E0u: goto label_1a61e0;
            case 0x1A61E4u: goto label_1a61e4;
            case 0x1A61E8u: goto label_1a61e8;
            case 0x1A61ECu: goto label_1a61ec;
            case 0x1A61F0u: goto label_1a61f0;
            case 0x1A61F4u: goto label_1a61f4;
            case 0x1A61F8u: goto label_1a61f8;
            case 0x1A61FCu: goto label_1a61fc;
            case 0x1A6200u: goto label_1a6200;
            case 0x1A6204u: goto label_1a6204;
            case 0x1A6208u: goto label_1a6208;
            case 0x1A620Cu: goto label_1a620c;
            case 0x1A6210u: goto label_1a6210;
            case 0x1A6214u: goto label_1a6214;
            case 0x1A6218u: goto label_1a6218;
            case 0x1A621Cu: goto label_1a621c;
            case 0x1A6220u: goto label_1a6220;
            case 0x1A6224u: goto label_1a6224;
            case 0x1A6228u: goto label_1a6228;
            case 0x1A622Cu: goto label_1a622c;
            case 0x1A6230u: goto label_1a6230;
            case 0x1A6234u: goto label_1a6234;
            case 0x1A6238u: goto label_1a6238;
            case 0x1A623Cu: goto label_1a623c;
            case 0x1A6240u: goto label_1a6240;
            case 0x1A6244u: goto label_1a6244;
            case 0x1A6248u: goto label_1a6248;
            case 0x1A624Cu: goto label_1a624c;
            case 0x1A6250u: goto label_1a6250;
            case 0x1A6254u: goto label_1a6254;
            case 0x1A6258u: goto label_1a6258;
            case 0x1A625Cu: goto label_1a625c;
            case 0x1A6260u: goto label_1a6260;
            case 0x1A6264u: goto label_1a6264;
            case 0x1A6268u: goto label_1a6268;
            case 0x1A626Cu: goto label_1a626c;
            case 0x1A6270u: goto label_1a6270;
            case 0x1A6274u: goto label_1a6274;
            case 0x1A6278u: goto label_1a6278;
            case 0x1A627Cu: goto label_1a627c;
            case 0x1A6280u: goto label_1a6280;
            case 0x1A6284u: goto label_1a6284;
            case 0x1A6288u: goto label_1a6288;
            case 0x1A628Cu: goto label_1a628c;
            case 0x1A6290u: goto label_1a6290;
            case 0x1A6294u: goto label_1a6294;
            case 0x1A6298u: goto label_1a6298;
            case 0x1A629Cu: goto label_1a629c;
            case 0x1A62A0u: goto label_1a62a0;
            case 0x1A62A4u: goto label_1a62a4;
            case 0x1A62A8u: goto label_1a62a8;
            case 0x1A62ACu: goto label_1a62ac;
            case 0x1A62B0u: goto label_1a62b0;
            case 0x1A62B4u: goto label_1a62b4;
            case 0x1A62B8u: goto label_1a62b8;
            case 0x1A62BCu: goto label_1a62bc;
            case 0x1A62C0u: goto label_1a62c0;
            case 0x1A62C4u: goto label_1a62c4;
            case 0x1A62C8u: goto label_1a62c8;
            case 0x1A62CCu: goto label_1a62cc;
            case 0x1A62D0u: goto label_1a62d0;
            case 0x1A62D4u: goto label_1a62d4;
            case 0x1A62D8u: goto label_1a62d8;
            case 0x1A62DCu: goto label_1a62dc;
            case 0x1A62E0u: goto label_1a62e0;
            case 0x1A62E4u: goto label_1a62e4;
            case 0x1A62E8u: goto label_1a62e8;
            case 0x1A62ECu: goto label_1a62ec;
            case 0x1A62F0u: goto label_1a62f0;
            case 0x1A62F4u: goto label_1a62f4;
            case 0x1A62F8u: goto label_1a62f8;
            case 0x1A62FCu: goto label_1a62fc;
            case 0x1A6300u: goto label_1a6300;
            case 0x1A6304u: goto label_1a6304;
            case 0x1A6308u: goto label_1a6308;
            case 0x1A630Cu: goto label_1a630c;
            case 0x1A6310u: goto label_1a6310;
            case 0x1A6314u: goto label_1a6314;
            case 0x1A6318u: goto label_1a6318;
            case 0x1A631Cu: goto label_1a631c;
            case 0x1A6320u: goto label_1a6320;
            case 0x1A6324u: goto label_1a6324;
            case 0x1A6328u: goto label_1a6328;
            case 0x1A632Cu: goto label_1a632c;
            case 0x1A6330u: goto label_1a6330;
            case 0x1A6334u: goto label_1a6334;
            case 0x1A6338u: goto label_1a6338;
            case 0x1A633Cu: goto label_1a633c;
            case 0x1A6340u: goto label_1a6340;
            case 0x1A6344u: goto label_1a6344;
            case 0x1A6348u: goto label_1a6348;
            case 0x1A634Cu: goto label_1a634c;
            case 0x1A6350u: goto label_1a6350;
            case 0x1A6354u: goto label_1a6354;
            case 0x1A6358u: goto label_1a6358;
            case 0x1A635Cu: goto label_1a635c;
            case 0x1A6360u: goto label_1a6360;
            case 0x1A6364u: goto label_1a6364;
            case 0x1A6368u: goto label_1a6368;
            case 0x1A636Cu: goto label_1a636c;
            case 0x1A6370u: goto label_1a6370;
            case 0x1A6374u: goto label_1a6374;
            case 0x1A6378u: goto label_1a6378;
            case 0x1A637Cu: goto label_1a637c;
            case 0x1A6380u: goto label_1a6380;
            case 0x1A6384u: goto label_1a6384;
            case 0x1A6388u: goto label_1a6388;
            case 0x1A638Cu: goto label_1a638c;
            case 0x1A6390u: goto label_1a6390;
            case 0x1A6394u: goto label_1a6394;
            case 0x1A6398u: goto label_1a6398;
            case 0x1A639Cu: goto label_1a639c;
            case 0x1A63A0u: goto label_1a63a0;
            case 0x1A63A4u: goto label_1a63a4;
            case 0x1A63A8u: goto label_1a63a8;
            case 0x1A63ACu: goto label_1a63ac;
            case 0x1A63B0u: goto label_1a63b0;
            case 0x1A63B4u: goto label_1a63b4;
            case 0x1A63B8u: goto label_1a63b8;
            case 0x1A63BCu: goto label_1a63bc;
            case 0x1A63C0u: goto label_1a63c0;
            case 0x1A63C4u: goto label_1a63c4;
            case 0x1A63C8u: goto label_1a63c8;
            case 0x1A63CCu: goto label_1a63cc;
            case 0x1A63D0u: goto label_1a63d0;
            case 0x1A63D4u: goto label_1a63d4;
            case 0x1A63D8u: goto label_1a63d8;
            case 0x1A63DCu: goto label_1a63dc;
            case 0x1A63E0u: goto label_1a63e0;
            case 0x1A63E4u: goto label_1a63e4;
            case 0x1A63E8u: goto label_1a63e8;
            case 0x1A63ECu: goto label_1a63ec;
            case 0x1A63F0u: goto label_1a63f0;
            case 0x1A63F4u: goto label_1a63f4;
            case 0x1A63F8u: goto label_1a63f8;
            case 0x1A63FCu: goto label_1a63fc;
            case 0x1A6400u: goto label_1a6400;
            case 0x1A6404u: goto label_1a6404;
            case 0x1A6408u: goto label_1a6408;
            case 0x1A640Cu: goto label_1a640c;
            case 0x1A6410u: goto label_1a6410;
            case 0x1A6414u: goto label_1a6414;
            case 0x1A6418u: goto label_1a6418;
            case 0x1A641Cu: goto label_1a641c;
            case 0x1A6420u: goto label_1a6420;
            case 0x1A6424u: goto label_1a6424;
            case 0x1A6428u: goto label_1a6428;
            case 0x1A642Cu: goto label_1a642c;
            case 0x1A6430u: goto label_1a6430;
            case 0x1A6434u: goto label_1a6434;
            case 0x1A6438u: goto label_1a6438;
            case 0x1A643Cu: goto label_1a643c;
            case 0x1A6440u: goto label_1a6440;
            case 0x1A6444u: goto label_1a6444;
            case 0x1A6448u: goto label_1a6448;
            case 0x1A644Cu: goto label_1a644c;
            case 0x1A6450u: goto label_1a6450;
            case 0x1A6454u: goto label_1a6454;
            case 0x1A6458u: goto label_1a6458;
            case 0x1A645Cu: goto label_1a645c;
            case 0x1A6460u: goto label_1a6460;
            case 0x1A6464u: goto label_1a6464;
            case 0x1A6468u: goto label_1a6468;
            case 0x1A646Cu: goto label_1a646c;
            case 0x1A6470u: goto label_1a6470;
            case 0x1A6474u: goto label_1a6474;
            case 0x1A6478u: goto label_1a6478;
            case 0x1A647Cu: goto label_1a647c;
            case 0x1A6480u: goto label_1a6480;
            case 0x1A6484u: goto label_1a6484;
            case 0x1A6488u: goto label_1a6488;
            case 0x1A648Cu: goto label_1a648c;
            case 0x1A6490u: goto label_1a6490;
            case 0x1A6494u: goto label_1a6494;
            case 0x1A6498u: goto label_1a6498;
            case 0x1A649Cu: goto label_1a649c;
            case 0x1A64A0u: goto label_1a64a0;
            case 0x1A64A4u: goto label_1a64a4;
            case 0x1A64A8u: goto label_1a64a8;
            case 0x1A64ACu: goto label_1a64ac;
            case 0x1A64B0u: goto label_1a64b0;
            case 0x1A64B4u: goto label_1a64b4;
            case 0x1A64B8u: goto label_1a64b8;
            case 0x1A64BCu: goto label_1a64bc;
            case 0x1A64C0u: goto label_1a64c0;
            case 0x1A64C4u: goto label_1a64c4;
            case 0x1A64C8u: goto label_1a64c8;
            case 0x1A64CCu: goto label_1a64cc;
            case 0x1A64D0u: goto label_1a64d0;
            case 0x1A64D4u: goto label_1a64d4;
            case 0x1A64D8u: goto label_1a64d8;
            case 0x1A64DCu: goto label_1a64dc;
            case 0x1A64E0u: goto label_1a64e0;
            case 0x1A64E4u: goto label_1a64e4;
            case 0x1A64E8u: goto label_1a64e8;
            case 0x1A64ECu: goto label_1a64ec;
            case 0x1A64F0u: goto label_1a64f0;
            case 0x1A64F4u: goto label_1a64f4;
            case 0x1A64F8u: goto label_1a64f8;
            case 0x1A64FCu: goto label_1a64fc;
            case 0x1A6500u: goto label_1a6500;
            case 0x1A6504u: goto label_1a6504;
            case 0x1A6508u: goto label_1a6508;
            case 0x1A650Cu: goto label_1a650c;
            case 0x1A6510u: goto label_1a6510;
            case 0x1A6514u: goto label_1a6514;
            case 0x1A6518u: goto label_1a6518;
            case 0x1A651Cu: goto label_1a651c;
            case 0x1A6520u: goto label_1a6520;
            case 0x1A6524u: goto label_1a6524;
            case 0x1A6528u: goto label_1a6528;
            case 0x1A652Cu: goto label_1a652c;
            case 0x1A6530u: goto label_1a6530;
            case 0x1A6534u: goto label_1a6534;
            case 0x1A6538u: goto label_1a6538;
            case 0x1A653Cu: goto label_1a653c;
            case 0x1A6540u: goto label_1a6540;
            case 0x1A6544u: goto label_1a6544;
            case 0x1A6548u: goto label_1a6548;
            case 0x1A654Cu: goto label_1a654c;
            case 0x1A6550u: goto label_1a6550;
            case 0x1A6554u: goto label_1a6554;
            case 0x1A6558u: goto label_1a6558;
            case 0x1A655Cu: goto label_1a655c;
            case 0x1A6560u: goto label_1a6560;
            case 0x1A6564u: goto label_1a6564;
            case 0x1A6568u: goto label_1a6568;
            case 0x1A656Cu: goto label_1a656c;
            case 0x1A6570u: goto label_1a6570;
            case 0x1A6574u: goto label_1a6574;
            case 0x1A6578u: goto label_1a6578;
            case 0x1A657Cu: goto label_1a657c;
            case 0x1A6580u: goto label_1a6580;
            case 0x1A6584u: goto label_1a6584;
            case 0x1A6588u: goto label_1a6588;
            case 0x1A658Cu: goto label_1a658c;
            case 0x1A6590u: goto label_1a6590;
            case 0x1A6594u: goto label_1a6594;
            case 0x1A6598u: goto label_1a6598;
            case 0x1A659Cu: goto label_1a659c;
            case 0x1A65A0u: goto label_1a65a0;
            case 0x1A65A4u: goto label_1a65a4;
            case 0x1A65A8u: goto label_1a65a8;
            case 0x1A65ACu: goto label_1a65ac;
            case 0x1A65B0u: goto label_1a65b0;
            case 0x1A65B4u: goto label_1a65b4;
            case 0x1A65B8u: goto label_1a65b8;
            case 0x1A65BCu: goto label_1a65bc;
            case 0x1A65C0u: goto label_1a65c0;
            case 0x1A65C4u: goto label_1a65c4;
            case 0x1A65C8u: goto label_1a65c8;
            case 0x1A65CCu: goto label_1a65cc;
            case 0x1A65D0u: goto label_1a65d0;
            case 0x1A65D4u: goto label_1a65d4;
            case 0x1A65D8u: goto label_1a65d8;
            case 0x1A65DCu: goto label_1a65dc;
            case 0x1A65E0u: goto label_1a65e0;
            case 0x1A65E4u: goto label_1a65e4;
            case 0x1A65E8u: goto label_1a65e8;
            case 0x1A65ECu: goto label_1a65ec;
            case 0x1A65F0u: goto label_1a65f0;
            case 0x1A65F4u: goto label_1a65f4;
            case 0x1A65F8u: goto label_1a65f8;
            case 0x1A65FCu: goto label_1a65fc;
            case 0x1A6600u: goto label_1a6600;
            case 0x1A6604u: goto label_1a6604;
            case 0x1A6608u: goto label_1a6608;
            case 0x1A660Cu: goto label_1a660c;
            case 0x1A6610u: goto label_1a6610;
            case 0x1A6614u: goto label_1a6614;
            case 0x1A6618u: goto label_1a6618;
            case 0x1A661Cu: goto label_1a661c;
            case 0x1A6620u: goto label_1a6620;
            case 0x1A6624u: goto label_1a6624;
            case 0x1A6628u: goto label_1a6628;
            case 0x1A662Cu: goto label_1a662c;
            case 0x1A6630u: goto label_1a6630;
            case 0x1A6634u: goto label_1a6634;
            case 0x1A6638u: goto label_1a6638;
            case 0x1A663Cu: goto label_1a663c;
            case 0x1A6640u: goto label_1a6640;
            case 0x1A6644u: goto label_1a6644;
            case 0x1A6648u: goto label_1a6648;
            case 0x1A664Cu: goto label_1a664c;
            case 0x1A6650u: goto label_1a6650;
            case 0x1A6654u: goto label_1a6654;
            case 0x1A6658u: goto label_1a6658;
            case 0x1A665Cu: goto label_1a665c;
            case 0x1A6660u: goto label_1a6660;
            case 0x1A6664u: goto label_1a6664;
            case 0x1A6668u: goto label_1a6668;
            case 0x1A666Cu: goto label_1a666c;
            case 0x1A6670u: goto label_1a6670;
            case 0x1A6674u: goto label_1a6674;
            case 0x1A6678u: goto label_1a6678;
            case 0x1A667Cu: goto label_1a667c;
            case 0x1A6680u: goto label_1a6680;
            case 0x1A6684u: goto label_1a6684;
            case 0x1A6688u: goto label_1a6688;
            case 0x1A668Cu: goto label_1a668c;
            case 0x1A6690u: goto label_1a6690;
            case 0x1A6694u: goto label_1a6694;
            case 0x1A6698u: goto label_1a6698;
            case 0x1A669Cu: goto label_1a669c;
            case 0x1A66A0u: goto label_1a66a0;
            case 0x1A66A4u: goto label_1a66a4;
            case 0x1A66A8u: goto label_1a66a8;
            case 0x1A66ACu: goto label_1a66ac;
            case 0x1A66B0u: goto label_1a66b0;
            case 0x1A66B4u: goto label_1a66b4;
            case 0x1A66B8u: goto label_1a66b8;
            case 0x1A66BCu: goto label_1a66bc;
            case 0x1A66C0u: goto label_1a66c0;
            case 0x1A66C4u: goto label_1a66c4;
            case 0x1A66C8u: goto label_1a66c8;
            case 0x1A66CCu: goto label_1a66cc;
            case 0x1A66D0u: goto label_1a66d0;
            case 0x1A66D4u: goto label_1a66d4;
            case 0x1A66D8u: goto label_1a66d8;
            case 0x1A66DCu: goto label_1a66dc;
            case 0x1A66E0u: goto label_1a66e0;
            case 0x1A66E4u: goto label_1a66e4;
            case 0x1A66E8u: goto label_1a66e8;
            case 0x1A66ECu: goto label_1a66ec;
            case 0x1A66F0u: goto label_1a66f0;
            case 0x1A66F4u: goto label_1a66f4;
            case 0x1A66F8u: goto label_1a66f8;
            case 0x1A66FCu: goto label_1a66fc;
            case 0x1A6700u: goto label_1a6700;
            case 0x1A6704u: goto label_1a6704;
            case 0x1A6708u: goto label_1a6708;
            case 0x1A670Cu: goto label_1a670c;
            case 0x1A6710u: goto label_1a6710;
            case 0x1A6714u: goto label_1a6714;
            case 0x1A6718u: goto label_1a6718;
            case 0x1A671Cu: goto label_1a671c;
            case 0x1A6720u: goto label_1a6720;
            case 0x1A6724u: goto label_1a6724;
            case 0x1A6728u: goto label_1a6728;
            case 0x1A672Cu: goto label_1a672c;
            case 0x1A6730u: goto label_1a6730;
            case 0x1A6734u: goto label_1a6734;
            case 0x1A6738u: goto label_1a6738;
            case 0x1A673Cu: goto label_1a673c;
            case 0x1A6740u: goto label_1a6740;
            case 0x1A6744u: goto label_1a6744;
            case 0x1A6748u: goto label_1a6748;
            case 0x1A674Cu: goto label_1a674c;
            case 0x1A6750u: goto label_1a6750;
            case 0x1A6754u: goto label_1a6754;
            case 0x1A6758u: goto label_1a6758;
            case 0x1A675Cu: goto label_1a675c;
            case 0x1A6760u: goto label_1a6760;
            case 0x1A6764u: goto label_1a6764;
            case 0x1A6768u: goto label_1a6768;
            case 0x1A676Cu: goto label_1a676c;
            case 0x1A6770u: goto label_1a6770;
            case 0x1A6774u: goto label_1a6774;
            case 0x1A6778u: goto label_1a6778;
            case 0x1A677Cu: goto label_1a677c;
            case 0x1A6780u: goto label_1a6780;
            case 0x1A6784u: goto label_1a6784;
            case 0x1A6788u: goto label_1a6788;
            case 0x1A678Cu: goto label_1a678c;
            case 0x1A6790u: goto label_1a6790;
            case 0x1A6794u: goto label_1a6794;
            case 0x1A6798u: goto label_1a6798;
            case 0x1A679Cu: goto label_1a679c;
            case 0x1A67A0u: goto label_1a67a0;
            case 0x1A67A4u: goto label_1a67a4;
            case 0x1A67A8u: goto label_1a67a8;
            case 0x1A67ACu: goto label_1a67ac;
            case 0x1A67B0u: goto label_1a67b0;
            case 0x1A67B4u: goto label_1a67b4;
            case 0x1A67B8u: goto label_1a67b8;
            case 0x1A67BCu: goto label_1a67bc;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a67b8:
    ctx->pc = 0x1A67C0u;
}

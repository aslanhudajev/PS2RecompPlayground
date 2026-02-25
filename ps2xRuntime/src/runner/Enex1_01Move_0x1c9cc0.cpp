#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex1_01Move
// Address: 0x1c9cc0 - 0x1cbe74
void Enex1_01Move_0x1c9cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex1_01Move_0x1c9cc0");
#endif

    ctx->pc = 0x1c9cc0u;

label_1c9cc0:
    // 0x1c9cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c9cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c9cc4:
    // 0x1c9cc4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c9cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1c9cc8:
    // 0x1c9cc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c9cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c9ccc:
    // 0x1c9ccc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9cccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c9cd0:
    // 0x1c9cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c9cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c9cd4:
    // 0x1c9cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9cd8:
    // 0x1c9cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c9cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c9cdc:
    // 0x1c9cdc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9ce0:
    // 0x1c9ce0: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1c9ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c9ce4:
    // 0x1c9ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9ce8:
    // 0x1c9ce8: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1c9ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9cec:
    // 0x1c9cec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c9cecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c9cf0:
    // 0x1c9cf0: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1c9cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1c9cf4:
    // 0x1c9cf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9cf8:
    // 0x1c9cf8: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1c9cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c9cfc:
    // 0x1c9cfc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1c9cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9d00:
    // 0x1c9d00: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c9d00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c9d04:
    // 0x1c9d04: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1c9d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1c9d08:
    // 0x1c9d08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9d0c:
    // 0x1c9d0c: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1c9d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c9d10:
    // 0x1c9d10: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1c9d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9d14:
    // 0x1c9d14: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c9d14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c9d18:
    // 0x1c9d18: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1c9d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1c9d1c:
    // 0x1c9d1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9d20:
    // 0x1c9d20: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1c9d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c9d24:
    // 0x1c9d24: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1c9d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9d28:
    // 0x1c9d28: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c9d28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c9d2c:
    // 0x1c9d2c: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1c9d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1c9d30:
    // 0x1c9d30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9d34:
    // 0x1c9d34: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1c9d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c9d38:
    // 0x1c9d38: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1c9d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9d3c:
    // 0x1c9d3c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c9d3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c9d40:
    // 0x1c9d40: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1c9d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1c9d44:
    // 0x1c9d44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9d48:
    // 0x1c9d48: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1c9d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9d4c:
    // 0x1c9d4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9d50:
    // 0x1c9d50: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1c9d54:
    if (ctx->pc == 0x1C9D54u) {
        ctx->pc = 0x1C9D54u;
            // 0x1c9d54: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1C9D58u;
        goto label_1c9d58;
    }
    ctx->pc = 0x1C9D50u;
    {
        const bool branch_taken_0x1c9d50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D50u;
            // 0x1c9d54: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d50) {
            ctx->pc = 0x1C9D70u;
            goto label_1c9d70;
        }
    }
    ctx->pc = 0x1C9D58u;
label_1c9d58:
    // 0x1c9d58: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c9d5c:
    // 0x1c9d5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9d5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c9d60:
    // 0x1c9d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9d64:
    // 0x1c9d64: 0x0  nop
    ctx->pc = 0x1c9d64u;
    // NOP
label_1c9d68:
    // 0x1c9d68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c9d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c9d6c:
    // 0x1c9d6c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c9d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1c9d70:
    // 0x1c9d70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9d74:
    // 0x1c9d74: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1c9d78:
    // 0x1c9d78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9d78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c9d7c:
    // 0x1c9d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9d80:
    // 0x1c9d80: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1c9d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9d84:
    // 0x1c9d84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c9d84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9d88:
    // 0x1c9d88: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1c9d8c:
    if (ctx->pc == 0x1C9D8Cu) {
        ctx->pc = 0x1C9D8Cu;
            // 0x1c9d8c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1C9D90u;
        goto label_1c9d90;
    }
    ctx->pc = 0x1C9D88u;
    {
        const bool branch_taken_0x1c9d88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D88u;
            // 0x1c9d8c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d88) {
            ctx->pc = 0x1C9DA8u;
            goto label_1c9da8;
        }
    }
    ctx->pc = 0x1C9D90u;
label_1c9d90:
    // 0x1c9d90: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c9d94:
    // 0x1c9d94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9d94u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c9d98:
    // 0x1c9d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9d9c:
    // 0x1c9d9c: 0x0  nop
    ctx->pc = 0x1c9d9cu;
    // NOP
label_1c9da0:
    // 0x1c9da0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c9da0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c9da4:
    // 0x1c9da4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c9da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c9da8:
    // 0x1c9da8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c9da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9dac:
    // 0x1c9dac: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1c9db0:
    // 0x1c9db0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9db0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c9db4:
    // 0x1c9db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9db8:
    // 0x1c9db8: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1c9db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9dbc:
    // 0x1c9dbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9dc0:
    // 0x1c9dc0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1c9dc4:
    if (ctx->pc == 0x1C9DC4u) {
        ctx->pc = 0x1C9DC4u;
            // 0x1c9dc4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1C9DC8u;
        goto label_1c9dc8;
    }
    ctx->pc = 0x1C9DC0u;
    {
        const bool branch_taken_0x1c9dc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DC0u;
            // 0x1c9dc4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9dc0) {
            ctx->pc = 0x1C9DE0u;
            goto label_1c9de0;
        }
    }
    ctx->pc = 0x1C9DC8u;
label_1c9dc8:
    // 0x1c9dc8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c9dcc:
    // 0x1c9dcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9dccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c9dd0:
    // 0x1c9dd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9dd4:
    // 0x1c9dd4: 0x0  nop
    ctx->pc = 0x1c9dd4u;
    // NOP
label_1c9dd8:
    // 0x1c9dd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c9dd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c9ddc:
    // 0x1c9ddc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c9ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c9de0:
    // 0x1c9de0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c9de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9de4:
    // 0x1c9de4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1c9de8:
    // 0x1c9de8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9de8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c9dec:
    // 0x1c9dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9df0:
    // 0x1c9df0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1c9df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9df4:
    // 0x1c9df4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c9df4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9df8:
    // 0x1c9df8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1c9dfc:
    if (ctx->pc == 0x1C9DFCu) {
        ctx->pc = 0x1C9DFCu;
            // 0x1c9dfc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1C9E00u;
        goto label_1c9e00;
    }
    ctx->pc = 0x1C9DF8u;
    {
        const bool branch_taken_0x1c9df8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DF8u;
            // 0x1c9dfc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9df8) {
            ctx->pc = 0x1C9E18u;
            goto label_1c9e18;
        }
    }
    ctx->pc = 0x1C9E00u;
label_1c9e00:
    // 0x1c9e00: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c9e04:
    // 0x1c9e04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9e04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c9e08:
    // 0x1c9e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9e0c:
    // 0x1c9e0c: 0x0  nop
    ctx->pc = 0x1c9e0cu;
    // NOP
label_1c9e10:
    // 0x1c9e10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c9e10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c9e14:
    // 0x1c9e14: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c9e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c9e18:
    // 0x1c9e18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9e1c:
    // 0x1c9e1c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1c9e20:
    // 0x1c9e20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9e20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c9e24:
    // 0x1c9e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9e28:
    // 0x1c9e28: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1c9e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9e2c:
    // 0x1c9e2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9e2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9e30:
    // 0x1c9e30: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1c9e34:
    if (ctx->pc == 0x1C9E34u) {
        ctx->pc = 0x1C9E34u;
            // 0x1c9e34: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1C9E38u;
        goto label_1c9e38;
    }
    ctx->pc = 0x1C9E30u;
    {
        const bool branch_taken_0x1c9e30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E30u;
            // 0x1c9e34: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e30) {
            ctx->pc = 0x1C9E50u;
            goto label_1c9e50;
        }
    }
    ctx->pc = 0x1C9E38u;
label_1c9e38:
    // 0x1c9e38: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c9e3c:
    // 0x1c9e3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9e3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c9e40:
    // 0x1c9e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9e44:
    // 0x1c9e44: 0x0  nop
    ctx->pc = 0x1c9e44u;
    // NOP
label_1c9e48:
    // 0x1c9e48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c9e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c9e4c:
    // 0x1c9e4c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c9e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c9e50:
    // 0x1c9e50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c9e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9e54:
    // 0x1c9e54: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1c9e58:
    // 0x1c9e58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9e58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c9e5c:
    // 0x1c9e5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9e60:
    // 0x1c9e60: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1c9e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9e64:
    // 0x1c9e64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c9e64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9e68:
    // 0x1c9e68: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1c9e6c:
    if (ctx->pc == 0x1C9E6Cu) {
        ctx->pc = 0x1C9E6Cu;
            // 0x1c9e6c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1C9E70u;
        goto label_1c9e70;
    }
    ctx->pc = 0x1C9E68u;
    {
        const bool branch_taken_0x1c9e68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E68u;
            // 0x1c9e6c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e68) {
            ctx->pc = 0x1C9E88u;
            goto label_1c9e88;
        }
    }
    ctx->pc = 0x1C9E70u;
label_1c9e70:
    // 0x1c9e70: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c9e74:
    // 0x1c9e74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9e74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c9e78:
    // 0x1c9e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9e7c:
    // 0x1c9e7c: 0x0  nop
    ctx->pc = 0x1c9e7cu;
    // NOP
label_1c9e80:
    // 0x1c9e80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c9e80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c9e84:
    // 0x1c9e84: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c9e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c9e88:
    // 0x1c9e88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9e8c:
    // 0x1c9e8c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1c9e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1c9e90:
    // 0x1c9e90: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c9e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c9e94:
    // 0x1c9e94: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c9e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c9e98:
    // 0x1c9e98: 0xc0730a0  jal         func_1CC280
label_1c9e9c:
    if (ctx->pc == 0x1C9E9Cu) {
        ctx->pc = 0x1C9E9Cu;
            // 0x1c9e9c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x1C9EA0u;
        goto label_1c9ea0;
    }
    ctx->pc = 0x1C9E98u;
    SET_GPR_U32(ctx, 31, 0x1C9EA0u);
    ctx->pc = 0x1C9E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E98u;
            // 0x1c9e9c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC280u;
    if (runtime->hasFunction(0x1CC280u)) {
        auto targetFn = runtime->lookupFunction(0x1CC280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9EA0u; }
        if (ctx->pc != 0x1C9EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1cc280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9EA0u; }
        if (ctx->pc != 0x1C9EA0u) { return; }
    }
    ctx->pc = 0x1C9EA0u;
label_1c9ea0:
    // 0x1c9ea0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1c9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1c9ea4:
    // 0x1c9ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9ea8:
    // 0x1c9ea8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1c9ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_1c9eac:
    // 0x1c9eac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c9eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c9eb0:
    // 0x1c9eb0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1c9eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1c9eb4:
    // 0x1c9eb4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1c9eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1c9eb8:
    // 0x1c9eb8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1c9ebc:
    if (ctx->pc == 0x1C9EBCu) {
        ctx->pc = 0x1C9EC0u;
        goto label_1c9ec0;
    }
    ctx->pc = 0x1C9EB8u;
    {
        const bool branch_taken_0x1c9eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9eb8) {
            ctx->pc = 0x1C9ED0u;
            goto label_1c9ed0;
        }
    }
    ctx->pc = 0x1C9EC0u;
label_1c9ec0:
    // 0x1c9ec0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c9ec4:
    if (ctx->pc == 0x1C9EC4u) {
        ctx->pc = 0x1C9EC8u;
        goto label_1c9ec8;
    }
    ctx->pc = 0x1C9EC0u;
    {
        const bool branch_taken_0x1c9ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ec0) {
            ctx->pc = 0x1C9ED0u;
            goto label_1c9ed0;
        }
    }
    ctx->pc = 0x1C9EC8u;
label_1c9ec8:
    // 0x1c9ec8: 0x100004c3  b           . + 4 + (0x4C3 << 2)
label_1c9ecc:
    if (ctx->pc == 0x1C9ECCu) {
        ctx->pc = 0x1C9ED0u;
        goto label_1c9ed0;
    }
    ctx->pc = 0x1C9EC8u;
    {
        const bool branch_taken_0x1c9ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ec8) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1C9ED0u;
label_1c9ed0:
    // 0x1c9ed0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1c9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1c9ed4:
    // 0x1c9ed4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1c9ed8:
    if (ctx->pc == 0x1C9ED8u) {
        ctx->pc = 0x1C9EDCu;
        goto label_1c9edc;
    }
    ctx->pc = 0x1C9ED4u;
    {
        const bool branch_taken_0x1c9ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ed4) {
            ctx->pc = 0x1C9F28u;
            goto label_1c9f28;
        }
    }
    ctx->pc = 0x1C9EDCu;
label_1c9edc:
    // 0x1c9edc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c9edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c9ee0:
    // 0x1c9ee0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1c9ee4:
    if (ctx->pc == 0x1C9EE4u) {
        ctx->pc = 0x1C9EE4u;
            // 0x1c9ee4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->pc = 0x1C9EE8u;
        goto label_1c9ee8;
    }
    ctx->pc = 0x1C9EE0u;
    {
        const bool branch_taken_0x1c9ee0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C9EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9EE0u;
            // 0x1c9ee4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ee0) {
            ctx->pc = 0x1C9EF4u;
            goto label_1c9ef4;
        }
    }
    ctx->pc = 0x1C9EE8u;
label_1c9ee8:
    // 0x1c9ee8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1c9eec:
    if (ctx->pc == 0x1C9EECu) {
        ctx->pc = 0x1C9EF0u;
        goto label_1c9ef0;
    }
    ctx->pc = 0x1C9EE8u;
    {
        const bool branch_taken_0x1c9ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ee8) {
            ctx->pc = 0x1C9EF4u;
            goto label_1c9ef4;
        }
    }
    ctx->pc = 0x1C9EF0u;
label_1c9ef0:
    // 0x1c9ef0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1c9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1c9ef4:
    // 0x1c9ef4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1c9ef8:
    if (ctx->pc == 0x1C9EF8u) {
        ctx->pc = 0x1C9EFCu;
        goto label_1c9efc;
    }
    ctx->pc = 0x1C9EF4u;
    {
        const bool branch_taken_0x1c9ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ef4) {
            ctx->pc = 0x1C9F28u;
            goto label_1c9f28;
        }
    }
    ctx->pc = 0x1C9EFCu;
label_1c9efc:
    // 0x1c9efc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1c9efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1c9f00:
    // 0x1c9f00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c9f04:
    // 0x1c9f04: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1c9f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_1c9f08:
    // 0x1c9f08: 0xc065598  jal         func_195660
label_1c9f0c:
    if (ctx->pc == 0x1C9F0Cu) {
        ctx->pc = 0x1C9F0Cu;
            // 0x1c9f0c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1C9F10u;
        goto label_1c9f10;
    }
    ctx->pc = 0x1C9F08u;
    SET_GPR_U32(ctx, 31, 0x1C9F10u);
    ctx->pc = 0x1C9F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F08u;
            // 0x1c9f0c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195660u;
    if (runtime->hasFunction(0x195660u)) {
        auto targetFn = runtime->lookupFunction(0x195660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9F10u; }
        if (ctx->pc != 0x1C9F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Small_0x195660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9F10u; }
        if (ctx->pc != 0x1C9F10u) { return; }
    }
    ctx->pc = 0x1C9F10u;
label_1c9f10:
    // 0x1c9f10: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1c9f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1c9f14:
    // 0x1c9f14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c9f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c9f18:
    // 0x1c9f18: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1c9f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_1c9f1c:
    // 0x1c9f1c: 0xc065598  jal         func_195660
label_1c9f20:
    if (ctx->pc == 0x1C9F20u) {
        ctx->pc = 0x1C9F20u;
            // 0x1c9f20: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1C9F24u;
        goto label_1c9f24;
    }
    ctx->pc = 0x1C9F1Cu;
    SET_GPR_U32(ctx, 31, 0x1C9F24u);
    ctx->pc = 0x1C9F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F1Cu;
            // 0x1c9f20: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195660u;
    if (runtime->hasFunction(0x195660u)) {
        auto targetFn = runtime->lookupFunction(0x195660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9F24u; }
        if (ctx->pc != 0x1C9F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Small_0x195660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9F24u; }
        if (ctx->pc != 0x1C9F24u) { return; }
    }
    ctx->pc = 0x1C9F24u;
label_1c9f24:
    // 0x1c9f24: 0x0  nop
    ctx->pc = 0x1c9f24u;
    // NOP
label_1c9f28:
    // 0x1c9f28: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c9f2c:
    // 0x1c9f2c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1c9f30:
    if (ctx->pc == 0x1C9F30u) {
        ctx->pc = 0x1C9F30u;
            // 0x1c9f30: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->pc = 0x1C9F34u;
        goto label_1c9f34;
    }
    ctx->pc = 0x1C9F2Cu;
    {
        const bool branch_taken_0x1c9f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F2Cu;
            // 0x1c9f30: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f2c) {
            ctx->pc = 0x1C9F88u;
            goto label_1c9f88;
        }
    }
    ctx->pc = 0x1C9F34u;
label_1c9f34:
    // 0x1c9f34: 0xc050bb4  jal         func_142ED0
label_1c9f38:
    if (ctx->pc == 0x1C9F38u) {
        ctx->pc = 0x1C9F38u;
            // 0x1c9f38: 0xac201d10  sw          $zero, 0x1D10($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7440), GPR_U32(ctx, 0));
        ctx->pc = 0x1C9F3Cu;
        goto label_1c9f3c;
    }
    ctx->pc = 0x1C9F34u;
    SET_GPR_U32(ctx, 31, 0x1C9F3Cu);
    ctx->pc = 0x1C9F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F34u;
            // 0x1c9f38: 0xac201d10  sw          $zero, 0x1D10($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9F3Cu; }
        if (ctx->pc != 0x1C9F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9F3Cu; }
        if (ctx->pc != 0x1C9F3Cu) { return; }
    }
    ctx->pc = 0x1C9F3Cu;
label_1c9f3c:
    // 0x1c9f3c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1c9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1c9f40:
    // 0x1c9f40: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1c9f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1c9f44:
    // 0x1c9f44: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1c9f44u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1c9f48:
    // 0x1c9f48: 0x0  nop
    ctx->pc = 0x1c9f48u;
    // NOP
label_1c9f4c:
    // 0x1c9f4c: 0x0  nop
    ctx->pc = 0x1c9f4cu;
    // NOP
label_1c9f50:
    // 0x1c9f50: 0x1010  mfhi        $v0
    ctx->pc = 0x1c9f50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1c9f54:
    // 0x1c9f54: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1c9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c9f58:
    // 0x1c9f58: 0xc050bb4  jal         func_142ED0
label_1c9f5c:
    if (ctx->pc == 0x1C9F5Cu) {
        ctx->pc = 0x1C9F5Cu;
            // 0x1c9f5c: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x1C9F60u;
        goto label_1c9f60;
    }
    ctx->pc = 0x1C9F58u;
    SET_GPR_U32(ctx, 31, 0x1C9F60u);
    ctx->pc = 0x1C9F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F58u;
            // 0x1c9f5c: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9F60u; }
        if (ctx->pc != 0x1C9F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9F60u; }
        if (ctx->pc != 0x1C9F60u) { return; }
    }
    ctx->pc = 0x1C9F60u;
label_1c9f60:
    // 0x1c9f60: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1c9f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1c9f64:
    // 0x1c9f64: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1c9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1c9f68:
    // 0x1c9f68: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1c9f68u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1c9f6c:
    // 0x1c9f6c: 0x0  nop
    ctx->pc = 0x1c9f6cu;
    // NOP
label_1c9f70:
    // 0x1c9f70: 0x0  nop
    ctx->pc = 0x1c9f70u;
    // NOP
label_1c9f74:
    // 0x1c9f74: 0x1010  mfhi        $v0
    ctx->pc = 0x1c9f74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1c9f78:
    // 0x1c9f78: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1c9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c9f7c:
    // 0x1c9f7c: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x1c9f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_1c9f80:
    // 0x1c9f80: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x1c9f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_1c9f84:
    // 0x1c9f84: 0x0  nop
    ctx->pc = 0x1c9f84u;
    // NOP
label_1c9f88:
    // 0x1c9f88: 0x8e05010c  lw          $a1, 0x10C($s0)
    ctx->pc = 0x1c9f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1c9f8c:
    // 0x1c9f8c: 0x14a0004c  bnez        $a1, . + 4 + (0x4C << 2)
label_1c9f90:
    if (ctx->pc == 0x1C9F90u) {
        ctx->pc = 0x1C9F94u;
        goto label_1c9f94;
    }
    ctx->pc = 0x1C9F8Cu;
    {
        const bool branch_taken_0x1c9f8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f8c) {
            ctx->pc = 0x1CA0C0u;
            goto label_1ca0c0;
        }
    }
    ctx->pc = 0x1C9F94u;
label_1c9f94:
    // 0x1c9f94: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1c9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1c9f98:
    // 0x1c9f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9f9c:
    // 0x1c9f9c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1c9fa0:
    if (ctx->pc == 0x1C9FA0u) {
        ctx->pc = 0x1C9FA4u;
        goto label_1c9fa4;
    }
    ctx->pc = 0x1C9F9Cu;
    {
        const bool branch_taken_0x1c9f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c9f9c) {
            ctx->pc = 0x1C9FC8u;
            goto label_1c9fc8;
        }
    }
    ctx->pc = 0x1C9FA4u;
label_1c9fa4:
    // 0x1c9fa4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1c9fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9fa8:
    // 0x1c9fa8: 0x3c023c44  lui         $v0, 0x3C44
    ctx->pc = 0x1c9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15428 << 16));
label_1c9fac:
    // 0x1c9fac: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1c9facu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_1c9fb0:
    // 0x1c9fb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9fb4:
    // 0x1c9fb4: 0x0  nop
    ctx->pc = 0x1c9fb4u;
    // NOP
label_1c9fb8:
    // 0x1c9fb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c9fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c9fbc:
    // 0x1c9fbc: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c9fc0:
    if (ctx->pc == 0x1C9FC0u) {
        ctx->pc = 0x1C9FC0u;
            // 0x1c9fc0: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->pc = 0x1C9FC4u;
        goto label_1c9fc4;
    }
    ctx->pc = 0x1C9FBCu;
    {
        const bool branch_taken_0x1c9fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FBCu;
            // 0x1c9fc0: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9fbc) {
            ctx->pc = 0x1C9FE8u;
            goto label_1c9fe8;
        }
    }
    ctx->pc = 0x1C9FC4u;
label_1c9fc4:
    // 0x1c9fc4: 0x0  nop
    ctx->pc = 0x1c9fc4u;
    // NOP
label_1c9fc8:
    // 0x1c9fc8: 0x3c023c44  lui         $v0, 0x3C44
    ctx->pc = 0x1c9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15428 << 16));
label_1c9fcc:
    // 0x1c9fcc: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1c9fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9fd0:
    // 0x1c9fd0: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1c9fd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_1c9fd4:
    // 0x1c9fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9fd8:
    // 0x1c9fd8: 0x0  nop
    ctx->pc = 0x1c9fd8u;
    // NOP
label_1c9fdc:
    // 0x1c9fdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c9fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c9fe0:
    // 0x1c9fe0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c9fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1c9fe4:
    // 0x1c9fe4: 0x0  nop
    ctx->pc = 0x1c9fe4u;
    // NOP
label_1c9fe8:
    // 0x1c9fe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9fec:
    // 0x1c9fec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9ff0:
    // 0x1c9ff0: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1c9ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9ff4:
    // 0x1c9ff4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9ff8:
    // 0x1c9ff8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1c9ffc:
    if (ctx->pc == 0x1C9FFCu) {
        ctx->pc = 0x1C9FFCu;
            // 0x1c9ffc: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1CA000u;
        goto label_1ca000;
    }
    ctx->pc = 0x1C9FF8u;
    {
        const bool branch_taken_0x1c9ff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FF8u;
            // 0x1c9ffc: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ff8) {
            ctx->pc = 0x1CA018u;
            goto label_1ca018;
        }
    }
    ctx->pc = 0x1CA000u;
label_1ca000:
    // 0x1ca000: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1ca000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1ca004:
    // 0x1ca004: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ca004u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ca008:
    // 0x1ca008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca00c:
    // 0x1ca00c: 0x0  nop
    ctx->pc = 0x1ca00cu;
    // NOP
label_1ca010:
    // 0x1ca010: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ca010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ca014:
    // 0x1ca014: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ca014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1ca018:
    // 0x1ca018: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca01c:
    // 0x1ca01c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca01cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca020:
    // 0x1ca020: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1ca020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca024:
    // 0x1ca024: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca028:
    // 0x1ca028: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1ca02c:
    if (ctx->pc == 0x1CA02Cu) {
        ctx->pc = 0x1CA02Cu;
            // 0x1ca02c: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1CA030u;
        goto label_1ca030;
    }
    ctx->pc = 0x1CA028u;
    {
        const bool branch_taken_0x1ca028 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA028u;
            // 0x1ca02c: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca028) {
            ctx->pc = 0x1CA048u;
            goto label_1ca048;
        }
    }
    ctx->pc = 0x1CA030u;
label_1ca030:
    // 0x1ca030: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1ca030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1ca034:
    // 0x1ca034: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ca034u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ca038:
    // 0x1ca038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca03c:
    // 0x1ca03c: 0x0  nop
    ctx->pc = 0x1ca03cu;
    // NOP
label_1ca040:
    // 0x1ca040: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ca040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ca044:
    // 0x1ca044: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ca044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1ca048:
    // 0x1ca048: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca04c:
    // 0x1ca04c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca04cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca050:
    // 0x1ca050: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1ca050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca054:
    // 0x1ca054: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca058:
    // 0x1ca058: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1ca05c:
    if (ctx->pc == 0x1CA05Cu) {
        ctx->pc = 0x1CA05Cu;
            // 0x1ca05c: 0x24430118  addiu       $v1, $v0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
        ctx->pc = 0x1CA060u;
        goto label_1ca060;
    }
    ctx->pc = 0x1CA058u;
    {
        const bool branch_taken_0x1ca058 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA058u;
            // 0x1ca05c: 0x24430118  addiu       $v1, $v0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca058) {
            ctx->pc = 0x1CA078u;
            goto label_1ca078;
        }
    }
    ctx->pc = 0x1CA060u;
label_1ca060:
    // 0x1ca060: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1ca060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1ca064:
    // 0x1ca064: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ca064u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ca068:
    // 0x1ca068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca06c:
    // 0x1ca06c: 0x0  nop
    ctx->pc = 0x1ca06cu;
    // NOP
label_1ca070:
    // 0x1ca070: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ca070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ca074:
    // 0x1ca074: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ca074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1ca078:
    // 0x1ca078: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca07c:
    // 0x1ca07c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca07cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca080:
    // 0x1ca080: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1ca080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca084:
    // 0x1ca084: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca088:
    // 0x1ca088: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1ca08c:
    if (ctx->pc == 0x1CA08Cu) {
        ctx->pc = 0x1CA08Cu;
            // 0x1ca08c: 0x24430128  addiu       $v1, $v0, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
        ctx->pc = 0x1CA090u;
        goto label_1ca090;
    }
    ctx->pc = 0x1CA088u;
    {
        const bool branch_taken_0x1ca088 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA088u;
            // 0x1ca08c: 0x24430128  addiu       $v1, $v0, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca088) {
            ctx->pc = 0x1CA0A8u;
            goto label_1ca0a8;
        }
    }
    ctx->pc = 0x1CA090u;
label_1ca090:
    // 0x1ca090: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ca090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1ca094:
    // 0x1ca094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca098:
    // 0x1ca098: 0x0  nop
    ctx->pc = 0x1ca098u;
    // NOP
label_1ca09c:
    // 0x1ca09c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ca09cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ca0a0:
    // 0x1ca0a0: 0x1000044d  b           . + 4 + (0x44D << 2)
label_1ca0a4:
    if (ctx->pc == 0x1CA0A4u) {
        ctx->pc = 0x1CA0A4u;
            // 0x1ca0a4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x1CA0A8u;
        goto label_1ca0a8;
    }
    ctx->pc = 0x1CA0A0u;
    {
        const bool branch_taken_0x1ca0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA0A0u;
            // 0x1ca0a4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0a0) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CA0A8u;
label_1ca0a8:
    // 0x1ca0a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca0ac:
    // 0x1ca0ac: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1ca0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1ca0b0:
    // 0x1ca0b0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1ca0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1ca0b4:
    // 0x1ca0b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca0b8:
    // 0x1ca0b8: 0x10000447  b           . + 4 + (0x447 << 2)
label_1ca0bc:
    if (ctx->pc == 0x1CA0BCu) {
        ctx->pc = 0x1CA0BCu;
            // 0x1ca0bc: 0xe4400128  swc1        $f0, 0x128($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
        ctx->pc = 0x1CA0C0u;
        goto label_1ca0c0;
    }
    ctx->pc = 0x1CA0B8u;
    {
        const bool branch_taken_0x1ca0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA0B8u;
            // 0x1ca0bc: 0xe4400128  swc1        $f0, 0x128($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0b8) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CA0C0u;
label_1ca0c0:
    // 0x1ca0c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca0c4:
    // 0x1ca0c4: 0x14a401f2  bne         $a1, $a0, . + 4 + (0x1F2 << 2)
label_1ca0c8:
    if (ctx->pc == 0x1CA0C8u) {
        ctx->pc = 0x1CA0CCu;
        goto label_1ca0cc;
    }
    ctx->pc = 0x1CA0C4u;
    {
        const bool branch_taken_0x1ca0c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ca0c4) {
            ctx->pc = 0x1CA890u;
            goto label_1ca890;
        }
    }
    ctx->pc = 0x1CA0CCu;
label_1ca0cc:
    // 0x1ca0cc: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ca0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca0d0:
    // 0x1ca0d0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1ca0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1ca0d4:
    // 0x1ca0d4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ca0d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ca0d8:
    // 0x1ca0d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca0dc:
    // 0x1ca0dc: 0x0  nop
    ctx->pc = 0x1ca0dcu;
    // NOP
label_1ca0e0:
    // 0x1ca0e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ca0e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca0e4:
    // 0x1ca0e4: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_1ca0e8:
    if (ctx->pc == 0x1CA0E8u) {
        ctx->pc = 0x1CA0E8u;
            // 0x1ca0e8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1CA0ECu;
        goto label_1ca0ec;
    }
    ctx->pc = 0x1CA0E4u;
    {
        const bool branch_taken_0x1ca0e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA0E4u;
            // 0x1ca0e8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0e4) {
            ctx->pc = 0x1CA158u;
            goto label_1ca158;
        }
    }
    ctx->pc = 0x1CA0ECu;
label_1ca0ec:
    // 0x1ca0ec: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ca0ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ca0f0:
    // 0x1ca0f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca0f4:
    // 0x1ca0f4: 0x0  nop
    ctx->pc = 0x1ca0f4u;
    // NOP
label_1ca0f8:
    // 0x1ca0f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca0f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca0fc:
    // 0x1ca0fc: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_1ca100:
    if (ctx->pc == 0x1CA100u) {
        ctx->pc = 0x1CA104u;
        goto label_1ca104;
    }
    ctx->pc = 0x1CA0FCu;
    {
        const bool branch_taken_0x1ca0fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca0fc) {
            ctx->pc = 0x1CA158u;
            goto label_1ca158;
        }
    }
    ctx->pc = 0x1CA104u;
label_1ca104:
    // 0x1ca104: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1ca104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1ca108:
    // 0x1ca108: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_1ca10c:
    if (ctx->pc == 0x1CA10Cu) {
        ctx->pc = 0x1CA110u;
        goto label_1ca110;
    }
    ctx->pc = 0x1CA108u;
    {
        const bool branch_taken_0x1ca108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ca108) {
            ctx->pc = 0x1CA120u;
            goto label_1ca120;
        }
    }
    ctx->pc = 0x1CA110u;
label_1ca110:
    // 0x1ca110: 0xc073020  jal         func_1CC080
label_1ca114:
    if (ctx->pc == 0x1CA114u) {
        ctx->pc = 0x1CA114u;
            // 0x1ca114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA118u;
        goto label_1ca118;
    }
    ctx->pc = 0x1CA110u;
    SET_GPR_U32(ctx, 31, 0x1CA118u);
    ctx->pc = 0x1CA114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA110u;
            // 0x1ca114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC080u;
    if (runtime->hasFunction(0x1CC080u)) {
        auto targetFn = runtime->lookupFunction(0x1CC080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA118u; }
        if (ctx->pc != 0x1CA118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1cc080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA118u; }
        if (ctx->pc != 0x1CA118u) { return; }
    }
    ctx->pc = 0x1CA118u;
label_1ca118:
    // 0x1ca118: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ca11c:
    if (ctx->pc == 0x1CA11Cu) {
        ctx->pc = 0x1CA120u;
        goto label_1ca120;
    }
    ctx->pc = 0x1CA118u;
    {
        const bool branch_taken_0x1ca118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca118) {
            ctx->pc = 0x1CA128u;
            goto label_1ca128;
        }
    }
    ctx->pc = 0x1CA120u;
label_1ca120:
    // 0x1ca120: 0xc072fa0  jal         func_1CBE80
label_1ca124:
    if (ctx->pc == 0x1CA124u) {
        ctx->pc = 0x1CA124u;
            // 0x1ca124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA128u;
        goto label_1ca128;
    }
    ctx->pc = 0x1CA120u;
    SET_GPR_U32(ctx, 31, 0x1CA128u);
    ctx->pc = 0x1CA124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA120u;
            // 0x1ca124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBE80u;
    if (runtime->hasFunction(0x1CBE80u)) {
        auto targetFn = runtime->lookupFunction(0x1CBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA128u; }
        if (ctx->pc != 0x1CA128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector2_0x1cbe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA128u; }
        if (ctx->pc != 0x1CA128u) { return; }
    }
    ctx->pc = 0x1CA128u;
label_1ca128:
    // 0x1ca128: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ca128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca12c:
    // 0x1ca12c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca130:
    // 0x1ca130: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1ca130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_1ca134:
    // 0x1ca134: 0xc065590  jal         func_195640
label_1ca138:
    if (ctx->pc == 0x1CA138u) {
        ctx->pc = 0x1CA138u;
            // 0x1ca138: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1CA13Cu;
        goto label_1ca13c;
    }
    ctx->pc = 0x1CA134u;
    SET_GPR_U32(ctx, 31, 0x1CA13Cu);
    ctx->pc = 0x1CA138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA134u;
            // 0x1ca138: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA13Cu; }
        if (ctx->pc != 0x1CA13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA13Cu; }
        if (ctx->pc != 0x1CA13Cu) { return; }
    }
    ctx->pc = 0x1CA13Cu;
label_1ca13c:
    // 0x1ca13c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ca13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca140:
    // 0x1ca140: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca144:
    // 0x1ca144: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1ca144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_1ca148:
    // 0x1ca148: 0xc065590  jal         func_195640
label_1ca14c:
    if (ctx->pc == 0x1CA14Cu) {
        ctx->pc = 0x1CA14Cu;
            // 0x1ca14c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1CA150u;
        goto label_1ca150;
    }
    ctx->pc = 0x1CA148u;
    SET_GPR_U32(ctx, 31, 0x1CA150u);
    ctx->pc = 0x1CA14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA148u;
            // 0x1ca14c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA150u; }
        if (ctx->pc != 0x1CA150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA150u; }
        if (ctx->pc != 0x1CA150u) { return; }
    }
    ctx->pc = 0x1CA150u;
label_1ca150:
    // 0x1ca150: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1ca154:
    if (ctx->pc == 0x1CA154u) {
        ctx->pc = 0x1CA158u;
        goto label_1ca158;
    }
    ctx->pc = 0x1CA150u;
    {
        const bool branch_taken_0x1ca150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca150) {
            ctx->pc = 0x1CA210u;
            goto label_1ca210;
        }
    }
    ctx->pc = 0x1CA158u;
label_1ca158:
    // 0x1ca158: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1ca158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1ca15c:
    // 0x1ca15c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ca15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca160:
    // 0x1ca160: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ca160u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ca164:
    // 0x1ca164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca168:
    // 0x1ca168: 0x0  nop
    ctx->pc = 0x1ca168u;
    // NOP
label_1ca16c:
    // 0x1ca16c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ca16cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca170:
    // 0x1ca170: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_1ca174:
    if (ctx->pc == 0x1CA174u) {
        ctx->pc = 0x1CA174u;
            // 0x1ca174: 0x3c02bba3  lui         $v0, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
        ctx->pc = 0x1CA178u;
        goto label_1ca178;
    }
    ctx->pc = 0x1CA170u;
    {
        const bool branch_taken_0x1ca170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA170u;
            // 0x1ca174: 0x3c02bba3  lui         $v0, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca170) {
            ctx->pc = 0x1CA1E8u;
            goto label_1ca1e8;
        }
    }
    ctx->pc = 0x1CA178u;
label_1ca178:
    // 0x1ca178: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ca178u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ca17c:
    // 0x1ca17c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca180:
    // 0x1ca180: 0x0  nop
    ctx->pc = 0x1ca180u;
    // NOP
label_1ca184:
    // 0x1ca184: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca188:
    // 0x1ca188: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_1ca18c:
    if (ctx->pc == 0x1CA18Cu) {
        ctx->pc = 0x1CA190u;
        goto label_1ca190;
    }
    ctx->pc = 0x1CA188u;
    {
        const bool branch_taken_0x1ca188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca188) {
            ctx->pc = 0x1CA1E8u;
            goto label_1ca1e8;
        }
    }
    ctx->pc = 0x1CA190u;
label_1ca190:
    // 0x1ca190: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1ca190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1ca194:
    // 0x1ca194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca198:
    // 0x1ca198: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ca19c:
    if (ctx->pc == 0x1CA19Cu) {
        ctx->pc = 0x1CA19Cu;
            // 0x1ca19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1A0u;
        goto label_1ca1a0;
    }
    ctx->pc = 0x1CA198u;
    {
        const bool branch_taken_0x1ca198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA198u;
            // 0x1ca19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca198) {
            ctx->pc = 0x1CA1B0u;
            goto label_1ca1b0;
        }
    }
    ctx->pc = 0x1CA1A0u;
label_1ca1a0:
    // 0x1ca1a0: 0xc073020  jal         func_1CC080
label_1ca1a4:
    if (ctx->pc == 0x1CA1A4u) {
        ctx->pc = 0x1CA1A8u;
        goto label_1ca1a8;
    }
    ctx->pc = 0x1CA1A0u;
    SET_GPR_U32(ctx, 31, 0x1CA1A8u);
    ctx->pc = 0x1CC080u;
    if (runtime->hasFunction(0x1CC080u)) {
        auto targetFn = runtime->lookupFunction(0x1CC080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1A8u; }
        if (ctx->pc != 0x1CA1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1cc080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1A8u; }
        if (ctx->pc != 0x1CA1A8u) { return; }
    }
    ctx->pc = 0x1CA1A8u;
label_1ca1a8:
    // 0x1ca1a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ca1ac:
    if (ctx->pc == 0x1CA1ACu) {
        ctx->pc = 0x1CA1B0u;
        goto label_1ca1b0;
    }
    ctx->pc = 0x1CA1A8u;
    {
        const bool branch_taken_0x1ca1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1a8) {
            ctx->pc = 0x1CA1B8u;
            goto label_1ca1b8;
        }
    }
    ctx->pc = 0x1CA1B0u;
label_1ca1b0:
    // 0x1ca1b0: 0xc072fa0  jal         func_1CBE80
label_1ca1b4:
    if (ctx->pc == 0x1CA1B4u) {
        ctx->pc = 0x1CA1B4u;
            // 0x1ca1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1B8u;
        goto label_1ca1b8;
    }
    ctx->pc = 0x1CA1B0u;
    SET_GPR_U32(ctx, 31, 0x1CA1B8u);
    ctx->pc = 0x1CA1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1B0u;
            // 0x1ca1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBE80u;
    if (runtime->hasFunction(0x1CBE80u)) {
        auto targetFn = runtime->lookupFunction(0x1CBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1B8u; }
        if (ctx->pc != 0x1CA1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector2_0x1cbe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1B8u; }
        if (ctx->pc != 0x1CA1B8u) { return; }
    }
    ctx->pc = 0x1CA1B8u;
label_1ca1b8:
    // 0x1ca1b8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ca1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca1bc:
    // 0x1ca1bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca1c0:
    // 0x1ca1c0: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1ca1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_1ca1c4:
    // 0x1ca1c4: 0xc065590  jal         func_195640
label_1ca1c8:
    if (ctx->pc == 0x1CA1C8u) {
        ctx->pc = 0x1CA1C8u;
            // 0x1ca1c8: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1CA1CCu;
        goto label_1ca1cc;
    }
    ctx->pc = 0x1CA1C4u;
    SET_GPR_U32(ctx, 31, 0x1CA1CCu);
    ctx->pc = 0x1CA1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1C4u;
            // 0x1ca1c8: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1CCu; }
        if (ctx->pc != 0x1CA1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1CCu; }
        if (ctx->pc != 0x1CA1CCu) { return; }
    }
    ctx->pc = 0x1CA1CCu;
label_1ca1cc:
    // 0x1ca1cc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ca1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca1d0:
    // 0x1ca1d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca1d4:
    // 0x1ca1d4: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1ca1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_1ca1d8:
    // 0x1ca1d8: 0xc065590  jal         func_195640
label_1ca1dc:
    if (ctx->pc == 0x1CA1DCu) {
        ctx->pc = 0x1CA1DCu;
            // 0x1ca1dc: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1CA1E0u;
        goto label_1ca1e0;
    }
    ctx->pc = 0x1CA1D8u;
    SET_GPR_U32(ctx, 31, 0x1CA1E0u);
    ctx->pc = 0x1CA1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1D8u;
            // 0x1ca1dc: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1E0u; }
        if (ctx->pc != 0x1CA1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1E0u; }
        if (ctx->pc != 0x1CA1E0u) { return; }
    }
    ctx->pc = 0x1CA1E0u;
label_1ca1e0:
    // 0x1ca1e0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ca1e4:
    if (ctx->pc == 0x1CA1E4u) {
        ctx->pc = 0x1CA1E8u;
        goto label_1ca1e8;
    }
    ctx->pc = 0x1CA1E0u;
    {
        const bool branch_taken_0x1ca1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1e0) {
            ctx->pc = 0x1CA210u;
            goto label_1ca210;
        }
    }
    ctx->pc = 0x1CA1E8u;
label_1ca1e8:
    // 0x1ca1e8: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x1ca1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_1ca1ec:
    // 0x1ca1ec: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1ca1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca1f0:
    // 0x1ca1f0: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1ca1f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
label_1ca1f4:
    // 0x1ca1f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca1f8:
    // 0x1ca1f8: 0x0  nop
    ctx->pc = 0x1ca1f8u;
    // NOP
label_1ca1fc:
    // 0x1ca1fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ca1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ca200:
    // 0x1ca200: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1ca200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1ca204:
    // 0x1ca204: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ca204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca208:
    // 0x1ca208: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ca208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ca20c:
    // 0x1ca20c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ca20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1ca210:
    // 0x1ca210: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ca210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ca214:
    // 0x1ca214: 0x284106a5  slti        $at, $v0, 0x6A5
    ctx->pc = 0x1ca214u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1701) ? 1 : 0);
label_1ca218:
    // 0x1ca218: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1ca21c:
    if (ctx->pc == 0x1CA21Cu) {
        ctx->pc = 0x1CA21Cu;
            // 0x1ca21c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1CA220u;
        goto label_1ca220;
    }
    ctx->pc = 0x1CA218u;
    {
        const bool branch_taken_0x1ca218 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA218u;
            // 0x1ca21c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca218) {
            ctx->pc = 0x1CA228u;
            goto label_1ca228;
        }
    }
    ctx->pc = 0x1CA220u;
label_1ca220:
    // 0x1ca220: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1ca220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1ca224:
    // 0x1ca224: 0x0  nop
    ctx->pc = 0x1ca224u;
    // NOP
label_1ca228:
    // 0x1ca228: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ca228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ca22c:
    // 0x1ca22c: 0x284103e8  slti        $at, $v0, 0x3E8
    ctx->pc = 0x1ca22cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
label_1ca230:
    // 0x1ca230: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1ca234:
    if (ctx->pc == 0x1CA234u) {
        ctx->pc = 0x1CA234u;
            // 0x1ca234: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1CA238u;
        goto label_1ca238;
    }
    ctx->pc = 0x1CA230u;
    {
        const bool branch_taken_0x1ca230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA230u;
            // 0x1ca234: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca230) {
            ctx->pc = 0x1CA240u;
            goto label_1ca240;
        }
    }
    ctx->pc = 0x1CA238u;
label_1ca238:
    // 0x1ca238: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1ca238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1ca23c:
    // 0x1ca23c: 0x0  nop
    ctx->pc = 0x1ca23cu;
    // NOP
label_1ca240:
    // 0x1ca240: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca244:
    // 0x1ca244: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1ca244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1ca248:
    // 0x1ca248: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1ca248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ca24c:
    // 0x1ca24c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1ca24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ca250:
    // 0x1ca250: 0xc0730a0  jal         func_1CC280
label_1ca254:
    if (ctx->pc == 0x1CA254u) {
        ctx->pc = 0x1CA254u;
            // 0x1ca254: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x1CA258u;
        goto label_1ca258;
    }
    ctx->pc = 0x1CA250u;
    SET_GPR_U32(ctx, 31, 0x1CA258u);
    ctx->pc = 0x1CA254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA250u;
            // 0x1ca254: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC280u;
    if (runtime->hasFunction(0x1CC280u)) {
        auto targetFn = runtime->lookupFunction(0x1CC280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA258u; }
        if (ctx->pc != 0x1CA258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1cc280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA258u; }
        if (ctx->pc != 0x1CA258u) { return; }
    }
    ctx->pc = 0x1CA258u;
label_1ca258:
    // 0x1ca258: 0xc065d00  jal         func_197400
label_1ca25c:
    if (ctx->pc == 0x1CA25Cu) {
        ctx->pc = 0x1CA260u;
        goto label_1ca260;
    }
    ctx->pc = 0x1CA258u;
    SET_GPR_U32(ctx, 31, 0x1CA260u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA260u; }
        if (ctx->pc != 0x1CA260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA260u; }
        if (ctx->pc != 0x1CA260u) { return; }
    }
    ctx->pc = 0x1CA260u;
label_1ca260:
    // 0x1ca260: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
label_1ca264:
    if (ctx->pc == 0x1CA264u) {
        ctx->pc = 0x1CA268u;
        goto label_1ca268;
    }
    ctx->pc = 0x1CA260u;
    {
        const bool branch_taken_0x1ca260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca260) {
            ctx->pc = 0x1CA3A8u;
            goto label_1ca3a8;
        }
    }
    ctx->pc = 0x1CA268u;
label_1ca268:
    // 0x1ca268: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ca268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ca26c:
    // 0x1ca26c: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1ca26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1ca270:
    // 0x1ca270: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ca270u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca274:
    // 0x1ca274: 0x0  nop
    ctx->pc = 0x1ca274u;
    // NOP
label_1ca278:
    // 0x1ca278: 0x0  nop
    ctx->pc = 0x1ca278u;
    // NOP
label_1ca27c:
    // 0x1ca27c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ca27cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ca280:
    // 0x1ca280: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ca284:
    if (ctx->pc == 0x1CA284u) {
        ctx->pc = 0x1CA288u;
        goto label_1ca288;
    }
    ctx->pc = 0x1CA280u;
    {
        const bool branch_taken_0x1ca280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca280) {
            ctx->pc = 0x1CA2A0u;
            goto label_1ca2a0;
        }
    }
    ctx->pc = 0x1CA288u;
label_1ca288:
    // 0x1ca288: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca28c:
    // 0x1ca28c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca28cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca290:
    // 0x1ca290: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca294:
    // 0x1ca294: 0xc0655b0  jal         func_1956C0
label_1ca298:
    if (ctx->pc == 0x1CA298u) {
        ctx->pc = 0x1CA298u;
            // 0x1ca298: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x1CA29Cu;
        goto label_1ca29c;
    }
    ctx->pc = 0x1CA294u;
    SET_GPR_U32(ctx, 31, 0x1CA29Cu);
    ctx->pc = 0x1CA298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA294u;
            // 0x1ca298: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA29Cu; }
        if (ctx->pc != 0x1CA29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA29Cu; }
        if (ctx->pc != 0x1CA29Cu) { return; }
    }
    ctx->pc = 0x1CA29Cu;
label_1ca29c:
    // 0x1ca29c: 0x0  nop
    ctx->pc = 0x1ca29cu;
    // NOP
label_1ca2a0:
    // 0x1ca2a0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ca2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ca2a4:
    // 0x1ca2a4: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x1ca2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_1ca2a8:
    // 0x1ca2a8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ca2a8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca2ac:
    // 0x1ca2ac: 0x0  nop
    ctx->pc = 0x1ca2acu;
    // NOP
label_1ca2b0:
    // 0x1ca2b0: 0x0  nop
    ctx->pc = 0x1ca2b0u;
    // NOP
label_1ca2b4:
    // 0x1ca2b4: 0x1010  mfhi        $v0
    ctx->pc = 0x1ca2b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ca2b8:
    // 0x1ca2b8: 0x144003c7  bnez        $v0, . + 4 + (0x3C7 << 2)
label_1ca2bc:
    if (ctx->pc == 0x1CA2BCu) {
        ctx->pc = 0x1CA2C0u;
        goto label_1ca2c0;
    }
    ctx->pc = 0x1CA2B8u;
    {
        const bool branch_taken_0x1ca2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca2b8) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CA2C0u;
label_1ca2c0:
    // 0x1ca2c0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca2c4:
    // 0x1ca2c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ca2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1ca2c8:
    // 0x1ca2c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca2cc:
    // 0x1ca2cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca2d0:
    // 0x1ca2d0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1ca2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1ca2d4:
    // 0x1ca2d4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ca2d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1ca2d8:
    // 0x1ca2d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca2dc:
    // 0x1ca2dc: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1ca2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1ca2e0:
    // 0x1ca2e0: 0xc0655dc  jal         func_195770
label_1ca2e4:
    if (ctx->pc == 0x1CA2E4u) {
        ctx->pc = 0x1CA2E4u;
            // 0x1ca2e4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA2E8u;
        goto label_1ca2e8;
    }
    ctx->pc = 0x1CA2E0u;
    SET_GPR_U32(ctx, 31, 0x1CA2E8u);
    ctx->pc = 0x1CA2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2E0u;
            // 0x1ca2e4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2E8u; }
        if (ctx->pc != 0x1CA2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2E8u; }
        if (ctx->pc != 0x1CA2E8u) { return; }
    }
    ctx->pc = 0x1CA2E8u;
label_1ca2e8:
    // 0x1ca2e8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca2ec:
    // 0x1ca2ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ca2f0:
    // 0x1ca2f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca2f4:
    // 0x1ca2f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca2f8:
    // 0x1ca2f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca2fc:
    // 0x1ca2fc: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1ca2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1ca300:
    // 0x1ca300: 0xc0655dc  jal         func_195770
label_1ca304:
    if (ctx->pc == 0x1CA304u) {
        ctx->pc = 0x1CA304u;
            // 0x1ca304: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA308u;
        goto label_1ca308;
    }
    ctx->pc = 0x1CA300u;
    SET_GPR_U32(ctx, 31, 0x1CA308u);
    ctx->pc = 0x1CA304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA300u;
            // 0x1ca304: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA308u; }
        if (ctx->pc != 0x1CA308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA308u; }
        if (ctx->pc != 0x1CA308u) { return; }
    }
    ctx->pc = 0x1CA308u;
label_1ca308:
    // 0x1ca308: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca30c:
    // 0x1ca30c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ca310:
    // 0x1ca310: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca314:
    // 0x1ca314: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca318:
    // 0x1ca318: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1ca318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1ca31c:
    // 0x1ca31c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ca31cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1ca320:
    // 0x1ca320: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca324:
    // 0x1ca324: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1ca324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1ca328:
    // 0x1ca328: 0xc0655dc  jal         func_195770
label_1ca32c:
    if (ctx->pc == 0x1CA32Cu) {
        ctx->pc = 0x1CA32Cu;
            // 0x1ca32c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA330u;
        goto label_1ca330;
    }
    ctx->pc = 0x1CA328u;
    SET_GPR_U32(ctx, 31, 0x1CA330u);
    ctx->pc = 0x1CA32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA328u;
            // 0x1ca32c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA330u; }
        if (ctx->pc != 0x1CA330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA330u; }
        if (ctx->pc != 0x1CA330u) { return; }
    }
    ctx->pc = 0x1CA330u;
label_1ca330:
    // 0x1ca330: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca334:
    // 0x1ca334: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ca334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1ca338:
    // 0x1ca338: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca33c:
    // 0x1ca33c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca340:
    // 0x1ca340: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1ca340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1ca344:
    // 0x1ca344: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ca344u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1ca348:
    // 0x1ca348: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca34c:
    // 0x1ca34c: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1ca34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1ca350:
    // 0x1ca350: 0xc0655dc  jal         func_195770
label_1ca354:
    if (ctx->pc == 0x1CA354u) {
        ctx->pc = 0x1CA354u;
            // 0x1ca354: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA358u;
        goto label_1ca358;
    }
    ctx->pc = 0x1CA350u;
    SET_GPR_U32(ctx, 31, 0x1CA358u);
    ctx->pc = 0x1CA354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA350u;
            // 0x1ca354: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA358u; }
        if (ctx->pc != 0x1CA358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA358u; }
        if (ctx->pc != 0x1CA358u) { return; }
    }
    ctx->pc = 0x1CA358u;
label_1ca358:
    // 0x1ca358: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca35c:
    // 0x1ca35c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ca360:
    // 0x1ca360: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca364:
    // 0x1ca364: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca368:
    // 0x1ca368: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca36c:
    // 0x1ca36c: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1ca36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1ca370:
    // 0x1ca370: 0xc0655dc  jal         func_195770
label_1ca374:
    if (ctx->pc == 0x1CA374u) {
        ctx->pc = 0x1CA374u;
            // 0x1ca374: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA378u;
        goto label_1ca378;
    }
    ctx->pc = 0x1CA370u;
    SET_GPR_U32(ctx, 31, 0x1CA378u);
    ctx->pc = 0x1CA374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA370u;
            // 0x1ca374: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA378u; }
        if (ctx->pc != 0x1CA378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA378u; }
        if (ctx->pc != 0x1CA378u) { return; }
    }
    ctx->pc = 0x1CA378u;
label_1ca378:
    // 0x1ca378: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca37c:
    // 0x1ca37c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ca380:
    // 0x1ca380: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca384:
    // 0x1ca384: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca388:
    // 0x1ca388: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1ca388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1ca38c:
    // 0x1ca38c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ca38cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1ca390:
    // 0x1ca390: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca394:
    // 0x1ca394: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1ca394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1ca398:
    // 0x1ca398: 0xc0655dc  jal         func_195770
label_1ca39c:
    if (ctx->pc == 0x1CA39Cu) {
        ctx->pc = 0x1CA39Cu;
            // 0x1ca39c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA3A0u;
        goto label_1ca3a0;
    }
    ctx->pc = 0x1CA398u;
    SET_GPR_U32(ctx, 31, 0x1CA3A0u);
    ctx->pc = 0x1CA39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA398u;
            // 0x1ca39c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3A0u; }
        if (ctx->pc != 0x1CA3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3A0u; }
        if (ctx->pc != 0x1CA3A0u) { return; }
    }
    ctx->pc = 0x1CA3A0u;
label_1ca3a0:
    // 0x1ca3a0: 0x1000038d  b           . + 4 + (0x38D << 2)
label_1ca3a4:
    if (ctx->pc == 0x1CA3A4u) {
        ctx->pc = 0x1CA3A8u;
        goto label_1ca3a8;
    }
    ctx->pc = 0x1CA3A0u;
    {
        const bool branch_taken_0x1ca3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca3a0) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CA3A8u;
label_1ca3a8:
    // 0x1ca3a8: 0xc065d00  jal         func_197400
label_1ca3ac:
    if (ctx->pc == 0x1CA3ACu) {
        ctx->pc = 0x1CA3B0u;
        goto label_1ca3b0;
    }
    ctx->pc = 0x1CA3A8u;
    SET_GPR_U32(ctx, 31, 0x1CA3B0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3B0u; }
        if (ctx->pc != 0x1CA3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3B0u; }
        if (ctx->pc != 0x1CA3B0u) { return; }
    }
    ctx->pc = 0x1CA3B0u;
label_1ca3b0:
    // 0x1ca3b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca3b4:
    // 0x1ca3b4: 0x14430094  bne         $v0, $v1, . + 4 + (0x94 << 2)
label_1ca3b8:
    if (ctx->pc == 0x1CA3B8u) {
        ctx->pc = 0x1CA3BCu;
        goto label_1ca3bc;
    }
    ctx->pc = 0x1CA3B4u;
    {
        const bool branch_taken_0x1ca3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ca3b4) {
            ctx->pc = 0x1CA608u;
            goto label_1ca608;
        }
    }
    ctx->pc = 0x1CA3BCu;
label_1ca3bc:
    // 0x1ca3bc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ca3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ca3c0:
    // 0x1ca3c0: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1ca3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1ca3c4:
    // 0x1ca3c4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ca3c4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca3c8:
    // 0x1ca3c8: 0x0  nop
    ctx->pc = 0x1ca3c8u;
    // NOP
label_1ca3cc:
    // 0x1ca3cc: 0x0  nop
    ctx->pc = 0x1ca3ccu;
    // NOP
label_1ca3d0:
    // 0x1ca3d0: 0x1010  mfhi        $v0
    ctx->pc = 0x1ca3d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ca3d4:
    // 0x1ca3d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1ca3d8:
    if (ctx->pc == 0x1CA3D8u) {
        ctx->pc = 0x1CA3DCu;
        goto label_1ca3dc;
    }
    ctx->pc = 0x1CA3D4u;
    {
        const bool branch_taken_0x1ca3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca3d4) {
            ctx->pc = 0x1CA3F0u;
            goto label_1ca3f0;
        }
    }
    ctx->pc = 0x1CA3DCu;
label_1ca3dc:
    // 0x1ca3dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca3e0:
    // 0x1ca3e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca3e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca3e4:
    // 0x1ca3e4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca3e8:
    // 0x1ca3e8: 0xc0655b0  jal         func_1956C0
label_1ca3ec:
    if (ctx->pc == 0x1CA3ECu) {
        ctx->pc = 0x1CA3ECu;
            // 0x1ca3ec: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x1CA3F0u;
        goto label_1ca3f0;
    }
    ctx->pc = 0x1CA3E8u;
    SET_GPR_U32(ctx, 31, 0x1CA3F0u);
    ctx->pc = 0x1CA3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3E8u;
            // 0x1ca3ec: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3F0u; }
        if (ctx->pc != 0x1CA3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3F0u; }
        if (ctx->pc != 0x1CA3F0u) { return; }
    }
    ctx->pc = 0x1CA3F0u;
label_1ca3f0:
    // 0x1ca3f0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ca3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ca3f4:
    // 0x1ca3f4: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1ca3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_1ca3f8:
    // 0x1ca3f8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ca3f8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca3fc:
    // 0x1ca3fc: 0x0  nop
    ctx->pc = 0x1ca3fcu;
    // NOP
label_1ca400:
    // 0x1ca400: 0x0  nop
    ctx->pc = 0x1ca400u;
    // NOP
label_1ca404:
    // 0x1ca404: 0x1010  mfhi        $v0
    ctx->pc = 0x1ca404u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ca408:
    // 0x1ca408: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1ca40c:
    if (ctx->pc == 0x1CA40Cu) {
        ctx->pc = 0x1CA410u;
        goto label_1ca410;
    }
    ctx->pc = 0x1CA408u;
    {
        const bool branch_taken_0x1ca408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca408) {
            ctx->pc = 0x1CA438u;
            goto label_1ca438;
        }
    }
    ctx->pc = 0x1CA410u;
label_1ca410:
    // 0x1ca410: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ca410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca414:
    // 0x1ca414: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca418:
    // 0x1ca418: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ca418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1ca41c:
    // 0x1ca41c: 0xc06560c  jal         func_195830
label_1ca420:
    if (ctx->pc == 0x1CA420u) {
        ctx->pc = 0x1CA420u;
            // 0x1ca420: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CA424u;
        goto label_1ca424;
    }
    ctx->pc = 0x1CA41Cu;
    SET_GPR_U32(ctx, 31, 0x1CA424u);
    ctx->pc = 0x1CA420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA41Cu;
            // 0x1ca420: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA424u; }
        if (ctx->pc != 0x1CA424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA424u; }
        if (ctx->pc != 0x1CA424u) { return; }
    }
    ctx->pc = 0x1CA424u;
label_1ca424:
    // 0x1ca424: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ca424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca428:
    // 0x1ca428: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca42c:
    // 0x1ca42c: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ca42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1ca430:
    // 0x1ca430: 0xc06560c  jal         func_195830
label_1ca434:
    if (ctx->pc == 0x1CA434u) {
        ctx->pc = 0x1CA434u;
            // 0x1ca434: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CA438u;
        goto label_1ca438;
    }
    ctx->pc = 0x1CA430u;
    SET_GPR_U32(ctx, 31, 0x1CA438u);
    ctx->pc = 0x1CA434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA430u;
            // 0x1ca434: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA438u; }
        if (ctx->pc != 0x1CA438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA438u; }
        if (ctx->pc != 0x1CA438u) { return; }
    }
    ctx->pc = 0x1CA438u;
label_1ca438:
    // 0x1ca438: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ca438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ca43c:
    // 0x1ca43c: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1ca43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1ca440:
    // 0x1ca440: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ca440u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca444:
    // 0x1ca444: 0x0  nop
    ctx->pc = 0x1ca444u;
    // NOP
label_1ca448:
    // 0x1ca448: 0x0  nop
    ctx->pc = 0x1ca448u;
    // NOP
label_1ca44c:
    // 0x1ca44c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ca44cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ca450:
    // 0x1ca450: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_1ca454:
    if (ctx->pc == 0x1CA454u) {
        ctx->pc = 0x1CA458u;
        goto label_1ca458;
    }
    ctx->pc = 0x1CA450u;
    {
        const bool branch_taken_0x1ca450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca450) {
            ctx->pc = 0x1CA538u;
            goto label_1ca538;
        }
    }
    ctx->pc = 0x1CA458u;
label_1ca458:
    // 0x1ca458: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca45c:
    // 0x1ca45c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ca45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1ca460:
    // 0x1ca460: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca464:
    // 0x1ca464: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca468:
    // 0x1ca468: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1ca468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1ca46c:
    // 0x1ca46c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ca46cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1ca470:
    // 0x1ca470: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca474:
    // 0x1ca474: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1ca474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1ca478:
    // 0x1ca478: 0xc0655dc  jal         func_195770
label_1ca47c:
    if (ctx->pc == 0x1CA47Cu) {
        ctx->pc = 0x1CA47Cu;
            // 0x1ca47c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA480u;
        goto label_1ca480;
    }
    ctx->pc = 0x1CA478u;
    SET_GPR_U32(ctx, 31, 0x1CA480u);
    ctx->pc = 0x1CA47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA478u;
            // 0x1ca47c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA480u; }
        if (ctx->pc != 0x1CA480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA480u; }
        if (ctx->pc != 0x1CA480u) { return; }
    }
    ctx->pc = 0x1CA480u;
label_1ca480:
    // 0x1ca480: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca484:
    // 0x1ca484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ca488:
    // 0x1ca488: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca48c:
    // 0x1ca48c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca48cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca490:
    // 0x1ca490: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca494:
    // 0x1ca494: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1ca494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1ca498:
    // 0x1ca498: 0xc0655dc  jal         func_195770
label_1ca49c:
    if (ctx->pc == 0x1CA49Cu) {
        ctx->pc = 0x1CA49Cu;
            // 0x1ca49c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA4A0u;
        goto label_1ca4a0;
    }
    ctx->pc = 0x1CA498u;
    SET_GPR_U32(ctx, 31, 0x1CA4A0u);
    ctx->pc = 0x1CA49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA498u;
            // 0x1ca49c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA4A0u; }
        if (ctx->pc != 0x1CA4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA4A0u; }
        if (ctx->pc != 0x1CA4A0u) { return; }
    }
    ctx->pc = 0x1CA4A0u;
label_1ca4a0:
    // 0x1ca4a0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca4a4:
    // 0x1ca4a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ca4a8:
    // 0x1ca4a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca4ac:
    // 0x1ca4ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca4b0:
    // 0x1ca4b0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1ca4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1ca4b4:
    // 0x1ca4b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ca4b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1ca4b8:
    // 0x1ca4b8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca4bc:
    // 0x1ca4bc: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1ca4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1ca4c0:
    // 0x1ca4c0: 0xc0655dc  jal         func_195770
label_1ca4c4:
    if (ctx->pc == 0x1CA4C4u) {
        ctx->pc = 0x1CA4C4u;
            // 0x1ca4c4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA4C8u;
        goto label_1ca4c8;
    }
    ctx->pc = 0x1CA4C0u;
    SET_GPR_U32(ctx, 31, 0x1CA4C8u);
    ctx->pc = 0x1CA4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA4C0u;
            // 0x1ca4c4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA4C8u; }
        if (ctx->pc != 0x1CA4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA4C8u; }
        if (ctx->pc != 0x1CA4C8u) { return; }
    }
    ctx->pc = 0x1CA4C8u;
label_1ca4c8:
    // 0x1ca4c8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca4cc:
    // 0x1ca4cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ca4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1ca4d0:
    // 0x1ca4d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca4d4:
    // 0x1ca4d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca4d8:
    // 0x1ca4d8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1ca4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1ca4dc:
    // 0x1ca4dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ca4dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1ca4e0:
    // 0x1ca4e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca4e4:
    // 0x1ca4e4: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1ca4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1ca4e8:
    // 0x1ca4e8: 0xc0655dc  jal         func_195770
label_1ca4ec:
    if (ctx->pc == 0x1CA4ECu) {
        ctx->pc = 0x1CA4ECu;
            // 0x1ca4ec: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA4F0u;
        goto label_1ca4f0;
    }
    ctx->pc = 0x1CA4E8u;
    SET_GPR_U32(ctx, 31, 0x1CA4F0u);
    ctx->pc = 0x1CA4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA4E8u;
            // 0x1ca4ec: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA4F0u; }
        if (ctx->pc != 0x1CA4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA4F0u; }
        if (ctx->pc != 0x1CA4F0u) { return; }
    }
    ctx->pc = 0x1CA4F0u;
label_1ca4f0:
    // 0x1ca4f0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca4f4:
    // 0x1ca4f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ca4f8:
    // 0x1ca4f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca4fc:
    // 0x1ca4fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca4fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca500:
    // 0x1ca500: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca504:
    // 0x1ca504: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1ca504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1ca508:
    // 0x1ca508: 0xc0655dc  jal         func_195770
label_1ca50c:
    if (ctx->pc == 0x1CA50Cu) {
        ctx->pc = 0x1CA50Cu;
            // 0x1ca50c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA510u;
        goto label_1ca510;
    }
    ctx->pc = 0x1CA508u;
    SET_GPR_U32(ctx, 31, 0x1CA510u);
    ctx->pc = 0x1CA50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA508u;
            // 0x1ca50c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA510u; }
        if (ctx->pc != 0x1CA510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA510u; }
        if (ctx->pc != 0x1CA510u) { return; }
    }
    ctx->pc = 0x1CA510u;
label_1ca510:
    // 0x1ca510: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca514:
    // 0x1ca514: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ca518:
    // 0x1ca518: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca51c:
    // 0x1ca51c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca520:
    // 0x1ca520: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1ca520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1ca524:
    // 0x1ca524: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ca524u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1ca528:
    // 0x1ca528: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca52c:
    // 0x1ca52c: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1ca52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1ca530:
    // 0x1ca530: 0xc0655dc  jal         func_195770
label_1ca534:
    if (ctx->pc == 0x1CA534u) {
        ctx->pc = 0x1CA534u;
            // 0x1ca534: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA538u;
        goto label_1ca538;
    }
    ctx->pc = 0x1CA530u;
    SET_GPR_U32(ctx, 31, 0x1CA538u);
    ctx->pc = 0x1CA534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA530u;
            // 0x1ca534: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA538u; }
        if (ctx->pc != 0x1CA538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA538u; }
        if (ctx->pc != 0x1CA538u) { return; }
    }
    ctx->pc = 0x1CA538u;
label_1ca538:
    // 0x1ca538: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ca538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ca53c:
    // 0x1ca53c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1ca53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1ca540:
    // 0x1ca540: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ca540u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca544:
    // 0x1ca544: 0x0  nop
    ctx->pc = 0x1ca544u;
    // NOP
label_1ca548:
    // 0x1ca548: 0x0  nop
    ctx->pc = 0x1ca548u;
    // NOP
label_1ca54c:
    // 0x1ca54c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ca54cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ca550:
    // 0x1ca550: 0x14400321  bnez        $v0, . + 4 + (0x321 << 2)
label_1ca554:
    if (ctx->pc == 0x1CA554u) {
        ctx->pc = 0x1CA554u;
            // 0x1ca554: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->pc = 0x1CA558u;
        goto label_1ca558;
    }
    ctx->pc = 0x1CA550u;
    {
        const bool branch_taken_0x1ca550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA550u;
            // 0x1ca554: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca550) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CA558u;
label_1ca558:
    // 0x1ca558: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca55c:
    // 0x1ca55c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ca55cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1ca560:
    // 0x1ca560: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca564:
    // 0x1ca564: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca568:
    // 0x1ca568: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1ca568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1ca56c:
    // 0x1ca56c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ca56cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1ca570:
    // 0x1ca570: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca574:
    // 0x1ca574: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x1ca574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_1ca578:
    // 0x1ca578: 0xc0655dc  jal         func_195770
label_1ca57c:
    if (ctx->pc == 0x1CA57Cu) {
        ctx->pc = 0x1CA57Cu;
            // 0x1ca57c: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CA580u;
        goto label_1ca580;
    }
    ctx->pc = 0x1CA578u;
    SET_GPR_U32(ctx, 31, 0x1CA580u);
    ctx->pc = 0x1CA57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA578u;
            // 0x1ca57c: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA580u; }
        if (ctx->pc != 0x1CA580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA580u; }
        if (ctx->pc != 0x1CA580u) { return; }
    }
    ctx->pc = 0x1CA580u;
label_1ca580:
    // 0x1ca580: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca584:
    // 0x1ca584: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1ca584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1ca588:
    // 0x1ca588: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca58c:
    // 0x1ca58c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ca58cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1ca590:
    // 0x1ca590: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca594:
    // 0x1ca594: 0x0  nop
    ctx->pc = 0x1ca594u;
    // NOP
label_1ca598:
    // 0x1ca598: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ca598u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ca59c:
    // 0x1ca59c: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x1ca59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_1ca5a0:
    // 0x1ca5a0: 0xc0655dc  jal         func_195770
label_1ca5a4:
    if (ctx->pc == 0x1CA5A4u) {
        ctx->pc = 0x1CA5A4u;
            // 0x1ca5a4: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CA5A8u;
        goto label_1ca5a8;
    }
    ctx->pc = 0x1CA5A0u;
    SET_GPR_U32(ctx, 31, 0x1CA5A8u);
    ctx->pc = 0x1CA5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5A0u;
            // 0x1ca5a4: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5A8u; }
        if (ctx->pc != 0x1CA5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5A8u; }
        if (ctx->pc != 0x1CA5A8u) { return; }
    }
    ctx->pc = 0x1CA5A8u;
label_1ca5a8:
    // 0x1ca5a8: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1ca5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_1ca5ac:
    // 0x1ca5ac: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca5b0:
    // 0x1ca5b0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ca5b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1ca5b4:
    // 0x1ca5b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca5b8:
    // 0x1ca5b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca5bc:
    // 0x1ca5bc: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1ca5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1ca5c0:
    // 0x1ca5c0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ca5c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1ca5c4:
    // 0x1ca5c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca5c8:
    // 0x1ca5c8: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x1ca5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_1ca5cc:
    // 0x1ca5cc: 0xc0655dc  jal         func_195770
label_1ca5d0:
    if (ctx->pc == 0x1CA5D0u) {
        ctx->pc = 0x1CA5D0u;
            // 0x1ca5d0: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CA5D4u;
        goto label_1ca5d4;
    }
    ctx->pc = 0x1CA5CCu;
    SET_GPR_U32(ctx, 31, 0x1CA5D4u);
    ctx->pc = 0x1CA5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5CCu;
            // 0x1ca5d0: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5D4u; }
        if (ctx->pc != 0x1CA5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5D4u; }
        if (ctx->pc != 0x1CA5D4u) { return; }
    }
    ctx->pc = 0x1CA5D4u;
label_1ca5d4:
    // 0x1ca5d4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca5d8:
    // 0x1ca5d8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1ca5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1ca5dc:
    // 0x1ca5dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca5e0:
    // 0x1ca5e0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ca5e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1ca5e4:
    // 0x1ca5e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca5e8:
    // 0x1ca5e8: 0x0  nop
    ctx->pc = 0x1ca5e8u;
    // NOP
label_1ca5ec:
    // 0x1ca5ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ca5ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ca5f0:
    // 0x1ca5f0: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x1ca5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_1ca5f4:
    // 0x1ca5f4: 0xc0655dc  jal         func_195770
label_1ca5f8:
    if (ctx->pc == 0x1CA5F8u) {
        ctx->pc = 0x1CA5F8u;
            // 0x1ca5f8: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CA5FCu;
        goto label_1ca5fc;
    }
    ctx->pc = 0x1CA5F4u;
    SET_GPR_U32(ctx, 31, 0x1CA5FCu);
    ctx->pc = 0x1CA5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5F4u;
            // 0x1ca5f8: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5FCu; }
        if (ctx->pc != 0x1CA5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5FCu; }
        if (ctx->pc != 0x1CA5FCu) { return; }
    }
    ctx->pc = 0x1CA5FCu;
label_1ca5fc:
    // 0x1ca5fc: 0x100002f6  b           . + 4 + (0x2F6 << 2)
label_1ca600:
    if (ctx->pc == 0x1CA600u) {
        ctx->pc = 0x1CA604u;
        goto label_1ca604;
    }
    ctx->pc = 0x1CA5FCu;
    {
        const bool branch_taken_0x1ca5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca5fc) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CA604u;
label_1ca604:
    // 0x1ca604: 0x0  nop
    ctx->pc = 0x1ca604u;
    // NOP
label_1ca608:
    // 0x1ca608: 0xc065d00  jal         func_197400
label_1ca60c:
    if (ctx->pc == 0x1CA60Cu) {
        ctx->pc = 0x1CA610u;
        goto label_1ca610;
    }
    ctx->pc = 0x1CA608u;
    SET_GPR_U32(ctx, 31, 0x1CA610u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA610u; }
        if (ctx->pc != 0x1CA610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA610u; }
        if (ctx->pc != 0x1CA610u) { return; }
    }
    ctx->pc = 0x1CA610u;
label_1ca610:
    // 0x1ca610: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ca610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ca614:
    // 0x1ca614: 0x144302f0  bne         $v0, $v1, . + 4 + (0x2F0 << 2)
label_1ca618:
    if (ctx->pc == 0x1CA618u) {
        ctx->pc = 0x1CA61Cu;
        goto label_1ca61c;
    }
    ctx->pc = 0x1CA614u;
    {
        const bool branch_taken_0x1ca614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ca614) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CA61Cu;
label_1ca61c:
    // 0x1ca61c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ca61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ca620:
    // 0x1ca620: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1ca620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1ca624:
    // 0x1ca624: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ca624u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca628:
    // 0x1ca628: 0x0  nop
    ctx->pc = 0x1ca628u;
    // NOP
label_1ca62c:
    // 0x1ca62c: 0x0  nop
    ctx->pc = 0x1ca62cu;
    // NOP
label_1ca630:
    // 0x1ca630: 0x1010  mfhi        $v0
    ctx->pc = 0x1ca630u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ca634:
    // 0x1ca634: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1ca638:
    if (ctx->pc == 0x1CA638u) {
        ctx->pc = 0x1CA63Cu;
        goto label_1ca63c;
    }
    ctx->pc = 0x1CA634u;
    {
        const bool branch_taken_0x1ca634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca634) {
            ctx->pc = 0x1CA650u;
            goto label_1ca650;
        }
    }
    ctx->pc = 0x1CA63Cu;
label_1ca63c:
    // 0x1ca63c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca640:
    // 0x1ca640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca644:
    // 0x1ca644: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca648:
    // 0x1ca648: 0xc0655b0  jal         func_1956C0
label_1ca64c:
    if (ctx->pc == 0x1CA64Cu) {
        ctx->pc = 0x1CA64Cu;
            // 0x1ca64c: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x1CA650u;
        goto label_1ca650;
    }
    ctx->pc = 0x1CA648u;
    SET_GPR_U32(ctx, 31, 0x1CA650u);
    ctx->pc = 0x1CA64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA648u;
            // 0x1ca64c: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA650u; }
        if (ctx->pc != 0x1CA650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA650u; }
        if (ctx->pc != 0x1CA650u) { return; }
    }
    ctx->pc = 0x1CA650u;
label_1ca650:
    // 0x1ca650: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ca650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ca654:
    // 0x1ca654: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1ca654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1ca658:
    // 0x1ca658: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ca658u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca65c:
    // 0x1ca65c: 0x0  nop
    ctx->pc = 0x1ca65cu;
    // NOP
label_1ca660:
    // 0x1ca660: 0x0  nop
    ctx->pc = 0x1ca660u;
    // NOP
label_1ca664:
    // 0x1ca664: 0x1010  mfhi        $v0
    ctx->pc = 0x1ca664u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ca668:
    // 0x1ca668: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1ca66c:
    if (ctx->pc == 0x1CA66Cu) {
        ctx->pc = 0x1CA670u;
        goto label_1ca670;
    }
    ctx->pc = 0x1CA668u;
    {
        const bool branch_taken_0x1ca668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca668) {
            ctx->pc = 0x1CA6C0u;
            goto label_1ca6c0;
        }
    }
    ctx->pc = 0x1CA670u;
label_1ca670:
    // 0x1ca670: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ca670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca674:
    // 0x1ca674: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca678:
    // 0x1ca678: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ca678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1ca67c:
    // 0x1ca67c: 0xc06560c  jal         func_195830
label_1ca680:
    if (ctx->pc == 0x1CA680u) {
        ctx->pc = 0x1CA680u;
            // 0x1ca680: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CA684u;
        goto label_1ca684;
    }
    ctx->pc = 0x1CA67Cu;
    SET_GPR_U32(ctx, 31, 0x1CA684u);
    ctx->pc = 0x1CA680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA67Cu;
            // 0x1ca680: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA684u; }
        if (ctx->pc != 0x1CA684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA684u; }
        if (ctx->pc != 0x1CA684u) { return; }
    }
    ctx->pc = 0x1CA684u;
label_1ca684:
    // 0x1ca684: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ca684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca688:
    // 0x1ca688: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca68c:
    // 0x1ca68c: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ca68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1ca690:
    // 0x1ca690: 0xc06560c  jal         func_195830
label_1ca694:
    if (ctx->pc == 0x1CA694u) {
        ctx->pc = 0x1CA694u;
            // 0x1ca694: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x1CA698u;
        goto label_1ca698;
    }
    ctx->pc = 0x1CA690u;
    SET_GPR_U32(ctx, 31, 0x1CA698u);
    ctx->pc = 0x1CA694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA690u;
            // 0x1ca694: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA698u; }
        if (ctx->pc != 0x1CA698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA698u; }
        if (ctx->pc != 0x1CA698u) { return; }
    }
    ctx->pc = 0x1CA698u;
label_1ca698:
    // 0x1ca698: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ca698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca69c:
    // 0x1ca69c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca6a0:
    // 0x1ca6a0: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ca6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1ca6a4:
    // 0x1ca6a4: 0xc06560c  jal         func_195830
label_1ca6a8:
    if (ctx->pc == 0x1CA6A8u) {
        ctx->pc = 0x1CA6A8u;
            // 0x1ca6a8: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CA6ACu;
        goto label_1ca6ac;
    }
    ctx->pc = 0x1CA6A4u;
    SET_GPR_U32(ctx, 31, 0x1CA6ACu);
    ctx->pc = 0x1CA6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6A4u;
            // 0x1ca6a8: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6ACu; }
        if (ctx->pc != 0x1CA6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6ACu; }
        if (ctx->pc != 0x1CA6ACu) { return; }
    }
    ctx->pc = 0x1CA6ACu;
label_1ca6ac:
    // 0x1ca6ac: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ca6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca6b0:
    // 0x1ca6b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca6b4:
    // 0x1ca6b4: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ca6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1ca6b8:
    // 0x1ca6b8: 0xc06560c  jal         func_195830
label_1ca6bc:
    if (ctx->pc == 0x1CA6BCu) {
        ctx->pc = 0x1CA6BCu;
            // 0x1ca6bc: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x1CA6C0u;
        goto label_1ca6c0;
    }
    ctx->pc = 0x1CA6B8u;
    SET_GPR_U32(ctx, 31, 0x1CA6C0u);
    ctx->pc = 0x1CA6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6B8u;
            // 0x1ca6bc: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6C0u; }
        if (ctx->pc != 0x1CA6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6C0u; }
        if (ctx->pc != 0x1CA6C0u) { return; }
    }
    ctx->pc = 0x1CA6C0u;
label_1ca6c0:
    // 0x1ca6c0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ca6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ca6c4:
    // 0x1ca6c4: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1ca6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1ca6c8:
    // 0x1ca6c8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ca6c8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca6cc:
    // 0x1ca6cc: 0x0  nop
    ctx->pc = 0x1ca6ccu;
    // NOP
label_1ca6d0:
    // 0x1ca6d0: 0x0  nop
    ctx->pc = 0x1ca6d0u;
    // NOP
label_1ca6d4:
    // 0x1ca6d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1ca6d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ca6d8:
    // 0x1ca6d8: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_1ca6dc:
    if (ctx->pc == 0x1CA6DCu) {
        ctx->pc = 0x1CA6E0u;
        goto label_1ca6e0;
    }
    ctx->pc = 0x1CA6D8u;
    {
        const bool branch_taken_0x1ca6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca6d8) {
            ctx->pc = 0x1CA7C0u;
            goto label_1ca7c0;
        }
    }
    ctx->pc = 0x1CA6E0u;
label_1ca6e0:
    // 0x1ca6e0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca6e4:
    // 0x1ca6e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ca6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1ca6e8:
    // 0x1ca6e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca6ec:
    // 0x1ca6ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca6f0:
    // 0x1ca6f0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1ca6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1ca6f4:
    // 0x1ca6f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ca6f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1ca6f8:
    // 0x1ca6f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca6fc:
    // 0x1ca6fc: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1ca6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1ca700:
    // 0x1ca700: 0xc0655dc  jal         func_195770
label_1ca704:
    if (ctx->pc == 0x1CA704u) {
        ctx->pc = 0x1CA704u;
            // 0x1ca704: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA708u;
        goto label_1ca708;
    }
    ctx->pc = 0x1CA700u;
    SET_GPR_U32(ctx, 31, 0x1CA708u);
    ctx->pc = 0x1CA704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA700u;
            // 0x1ca704: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA708u; }
        if (ctx->pc != 0x1CA708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA708u; }
        if (ctx->pc != 0x1CA708u) { return; }
    }
    ctx->pc = 0x1CA708u;
label_1ca708:
    // 0x1ca708: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca70c:
    // 0x1ca70c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ca710:
    // 0x1ca710: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca714:
    // 0x1ca714: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca718:
    // 0x1ca718: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca71c:
    // 0x1ca71c: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1ca71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1ca720:
    // 0x1ca720: 0xc0655dc  jal         func_195770
label_1ca724:
    if (ctx->pc == 0x1CA724u) {
        ctx->pc = 0x1CA724u;
            // 0x1ca724: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA728u;
        goto label_1ca728;
    }
    ctx->pc = 0x1CA720u;
    SET_GPR_U32(ctx, 31, 0x1CA728u);
    ctx->pc = 0x1CA724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA720u;
            // 0x1ca724: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA728u; }
        if (ctx->pc != 0x1CA728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA728u; }
        if (ctx->pc != 0x1CA728u) { return; }
    }
    ctx->pc = 0x1CA728u;
label_1ca728:
    // 0x1ca728: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca72c:
    // 0x1ca72c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ca730:
    // 0x1ca730: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca734:
    // 0x1ca734: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca738:
    // 0x1ca738: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1ca738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1ca73c:
    // 0x1ca73c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ca73cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1ca740:
    // 0x1ca740: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca744:
    // 0x1ca744: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1ca744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1ca748:
    // 0x1ca748: 0xc0655dc  jal         func_195770
label_1ca74c:
    if (ctx->pc == 0x1CA74Cu) {
        ctx->pc = 0x1CA74Cu;
            // 0x1ca74c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA750u;
        goto label_1ca750;
    }
    ctx->pc = 0x1CA748u;
    SET_GPR_U32(ctx, 31, 0x1CA750u);
    ctx->pc = 0x1CA74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA748u;
            // 0x1ca74c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA750u; }
        if (ctx->pc != 0x1CA750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA750u; }
        if (ctx->pc != 0x1CA750u) { return; }
    }
    ctx->pc = 0x1CA750u;
label_1ca750:
    // 0x1ca750: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca754:
    // 0x1ca754: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ca754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1ca758:
    // 0x1ca758: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca75c:
    // 0x1ca75c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca760:
    // 0x1ca760: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1ca760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1ca764:
    // 0x1ca764: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ca764u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1ca768:
    // 0x1ca768: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca76c:
    // 0x1ca76c: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1ca76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1ca770:
    // 0x1ca770: 0xc0655dc  jal         func_195770
label_1ca774:
    if (ctx->pc == 0x1CA774u) {
        ctx->pc = 0x1CA774u;
            // 0x1ca774: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA778u;
        goto label_1ca778;
    }
    ctx->pc = 0x1CA770u;
    SET_GPR_U32(ctx, 31, 0x1CA778u);
    ctx->pc = 0x1CA774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA770u;
            // 0x1ca774: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA778u; }
        if (ctx->pc != 0x1CA778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA778u; }
        if (ctx->pc != 0x1CA778u) { return; }
    }
    ctx->pc = 0x1CA778u;
label_1ca778:
    // 0x1ca778: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca77c:
    // 0x1ca77c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ca780:
    // 0x1ca780: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca784:
    // 0x1ca784: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca788:
    // 0x1ca788: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca78c:
    // 0x1ca78c: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1ca78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1ca790:
    // 0x1ca790: 0xc0655dc  jal         func_195770
label_1ca794:
    if (ctx->pc == 0x1CA794u) {
        ctx->pc = 0x1CA794u;
            // 0x1ca794: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA798u;
        goto label_1ca798;
    }
    ctx->pc = 0x1CA790u;
    SET_GPR_U32(ctx, 31, 0x1CA798u);
    ctx->pc = 0x1CA794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA790u;
            // 0x1ca794: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA798u; }
        if (ctx->pc != 0x1CA798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA798u; }
        if (ctx->pc != 0x1CA798u) { return; }
    }
    ctx->pc = 0x1CA798u;
label_1ca798:
    // 0x1ca798: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca79c:
    // 0x1ca79c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ca7a0:
    // 0x1ca7a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca7a4:
    // 0x1ca7a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca7a8:
    // 0x1ca7a8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1ca7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1ca7ac:
    // 0x1ca7ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ca7acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1ca7b0:
    // 0x1ca7b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca7b4:
    // 0x1ca7b4: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1ca7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1ca7b8:
    // 0x1ca7b8: 0xc0655dc  jal         func_195770
label_1ca7bc:
    if (ctx->pc == 0x1CA7BCu) {
        ctx->pc = 0x1CA7BCu;
            // 0x1ca7bc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CA7C0u;
        goto label_1ca7c0;
    }
    ctx->pc = 0x1CA7B8u;
    SET_GPR_U32(ctx, 31, 0x1CA7C0u);
    ctx->pc = 0x1CA7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA7B8u;
            // 0x1ca7bc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA7C0u; }
        if (ctx->pc != 0x1CA7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA7C0u; }
        if (ctx->pc != 0x1CA7C0u) { return; }
    }
    ctx->pc = 0x1CA7C0u;
label_1ca7c0:
    // 0x1ca7c0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ca7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ca7c4:
    // 0x1ca7c4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1ca7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1ca7c8:
    // 0x1ca7c8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ca7c8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca7cc:
    // 0x1ca7cc: 0x0  nop
    ctx->pc = 0x1ca7ccu;
    // NOP
label_1ca7d0:
    // 0x1ca7d0: 0x0  nop
    ctx->pc = 0x1ca7d0u;
    // NOP
label_1ca7d4:
    // 0x1ca7d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1ca7d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ca7d8:
    // 0x1ca7d8: 0x1440027f  bnez        $v0, . + 4 + (0x27F << 2)
label_1ca7dc:
    if (ctx->pc == 0x1CA7DCu) {
        ctx->pc = 0x1CA7DCu;
            // 0x1ca7dc: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->pc = 0x1CA7E0u;
        goto label_1ca7e0;
    }
    ctx->pc = 0x1CA7D8u;
    {
        const bool branch_taken_0x1ca7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA7D8u;
            // 0x1ca7dc: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7d8) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CA7E0u;
label_1ca7e0:
    // 0x1ca7e0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca7e4:
    // 0x1ca7e4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ca7e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1ca7e8:
    // 0x1ca7e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca7ec:
    // 0x1ca7ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca7f0:
    // 0x1ca7f0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1ca7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1ca7f4:
    // 0x1ca7f4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ca7f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1ca7f8:
    // 0x1ca7f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca7fc:
    // 0x1ca7fc: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x1ca7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_1ca800:
    // 0x1ca800: 0xc0655dc  jal         func_195770
label_1ca804:
    if (ctx->pc == 0x1CA804u) {
        ctx->pc = 0x1CA804u;
            // 0x1ca804: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CA808u;
        goto label_1ca808;
    }
    ctx->pc = 0x1CA800u;
    SET_GPR_U32(ctx, 31, 0x1CA808u);
    ctx->pc = 0x1CA804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA800u;
            // 0x1ca804: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA808u; }
        if (ctx->pc != 0x1CA808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA808u; }
        if (ctx->pc != 0x1CA808u) { return; }
    }
    ctx->pc = 0x1CA808u;
label_1ca808:
    // 0x1ca808: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca80c:
    // 0x1ca80c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1ca80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1ca810:
    // 0x1ca810: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca814:
    // 0x1ca814: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ca814u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1ca818:
    // 0x1ca818: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca81c:
    // 0x1ca81c: 0x0  nop
    ctx->pc = 0x1ca81cu;
    // NOP
label_1ca820:
    // 0x1ca820: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ca820u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ca824:
    // 0x1ca824: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x1ca824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_1ca828:
    // 0x1ca828: 0xc0655dc  jal         func_195770
label_1ca82c:
    if (ctx->pc == 0x1CA82Cu) {
        ctx->pc = 0x1CA82Cu;
            // 0x1ca82c: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CA830u;
        goto label_1ca830;
    }
    ctx->pc = 0x1CA828u;
    SET_GPR_U32(ctx, 31, 0x1CA830u);
    ctx->pc = 0x1CA82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA828u;
            // 0x1ca82c: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA830u; }
        if (ctx->pc != 0x1CA830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA830u; }
        if (ctx->pc != 0x1CA830u) { return; }
    }
    ctx->pc = 0x1CA830u;
label_1ca830:
    // 0x1ca830: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1ca830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_1ca834:
    // 0x1ca834: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca838:
    // 0x1ca838: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ca838u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1ca83c:
    // 0x1ca83c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca840:
    // 0x1ca840: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca844:
    // 0x1ca844: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1ca844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1ca848:
    // 0x1ca848: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ca848u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1ca84c:
    // 0x1ca84c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca850:
    // 0x1ca850: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x1ca850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_1ca854:
    // 0x1ca854: 0xc0655dc  jal         func_195770
label_1ca858:
    if (ctx->pc == 0x1CA858u) {
        ctx->pc = 0x1CA858u;
            // 0x1ca858: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CA85Cu;
        goto label_1ca85c;
    }
    ctx->pc = 0x1CA854u;
    SET_GPR_U32(ctx, 31, 0x1CA85Cu);
    ctx->pc = 0x1CA858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA854u;
            // 0x1ca858: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA85Cu; }
        if (ctx->pc != 0x1CA85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA85Cu; }
        if (ctx->pc != 0x1CA85Cu) { return; }
    }
    ctx->pc = 0x1CA85Cu;
label_1ca85c:
    // 0x1ca85c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ca85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca860:
    // 0x1ca860: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1ca860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1ca864:
    // 0x1ca864: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ca864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca868:
    // 0x1ca868: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ca868u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1ca86c:
    // 0x1ca86c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca870:
    // 0x1ca870: 0x0  nop
    ctx->pc = 0x1ca870u;
    // NOP
label_1ca874:
    // 0x1ca874: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ca874u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ca878:
    // 0x1ca878: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x1ca878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_1ca87c:
    // 0x1ca87c: 0xc0655dc  jal         func_195770
label_1ca880:
    if (ctx->pc == 0x1CA880u) {
        ctx->pc = 0x1CA880u;
            // 0x1ca880: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CA884u;
        goto label_1ca884;
    }
    ctx->pc = 0x1CA87Cu;
    SET_GPR_U32(ctx, 31, 0x1CA884u);
    ctx->pc = 0x1CA880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA87Cu;
            // 0x1ca880: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA884u; }
        if (ctx->pc != 0x1CA884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA884u; }
        if (ctx->pc != 0x1CA884u) { return; }
    }
    ctx->pc = 0x1CA884u;
label_1ca884:
    // 0x1ca884: 0x10000254  b           . + 4 + (0x254 << 2)
label_1ca888:
    if (ctx->pc == 0x1CA888u) {
        ctx->pc = 0x1CA88Cu;
        goto label_1ca88c;
    }
    ctx->pc = 0x1CA884u;
    {
        const bool branch_taken_0x1ca884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca884) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CA88Cu;
label_1ca88c:
    // 0x1ca88c: 0x0  nop
    ctx->pc = 0x1ca88cu;
    // NOP
label_1ca890:
    // 0x1ca890: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ca890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ca894:
    // 0x1ca894: 0x14a20018  bne         $a1, $v0, . + 4 + (0x18 << 2)
label_1ca898:
    if (ctx->pc == 0x1CA898u) {
        ctx->pc = 0x1CA89Cu;
        goto label_1ca89c;
    }
    ctx->pc = 0x1CA894u;
    {
        const bool branch_taken_0x1ca894 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ca894) {
            ctx->pc = 0x1CA8F8u;
            goto label_1ca8f8;
        }
    }
    ctx->pc = 0x1CA89Cu;
label_1ca89c:
    // 0x1ca89c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1ca89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca8a0:
    // 0x1ca8a0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1ca8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1ca8a4:
    // 0x1ca8a4: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1ca8a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1ca8a8:
    // 0x1ca8a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca8ac:
    // 0x1ca8ac: 0x0  nop
    ctx->pc = 0x1ca8acu;
    // NOP
label_1ca8b0:
    // 0x1ca8b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ca8b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ca8b4:
    // 0x1ca8b4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1ca8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1ca8b8:
    // 0x1ca8b8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ca8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca8bc:
    // 0x1ca8bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ca8bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ca8c0:
    // 0x1ca8c0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ca8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1ca8c4:
    // 0x1ca8c4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ca8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ca8c8:
    // 0x1ca8c8: 0x284106a5  slti        $at, $v0, 0x6A5
    ctx->pc = 0x1ca8c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1701) ? 1 : 0);
label_1ca8cc:
    // 0x1ca8cc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1ca8d0:
    if (ctx->pc == 0x1CA8D0u) {
        ctx->pc = 0x1CA8D0u;
            // 0x1ca8d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1CA8D4u;
        goto label_1ca8d4;
    }
    ctx->pc = 0x1CA8CCu;
    {
        const bool branch_taken_0x1ca8cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA8CCu;
            // 0x1ca8d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8cc) {
            ctx->pc = 0x1CA8D8u;
            goto label_1ca8d8;
        }
    }
    ctx->pc = 0x1CA8D4u;
label_1ca8d4:
    // 0x1ca8d4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1ca8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1ca8d8:
    // 0x1ca8d8: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1ca8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1ca8dc:
    // 0x1ca8dc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1ca8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ca8e0:
    // 0x1ca8e0: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x1ca8e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
label_1ca8e4:
    // 0x1ca8e4: 0x1420023c  bnez        $at, . + 4 + (0x23C << 2)
label_1ca8e8:
    if (ctx->pc == 0x1CA8E8u) {
        ctx->pc = 0x1CA8E8u;
            // 0x1ca8e8: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->pc = 0x1CA8ECu;
        goto label_1ca8ec;
    }
    ctx->pc = 0x1CA8E4u;
    {
        const bool branch_taken_0x1ca8e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA8E4u;
            // 0x1ca8e8: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8e4) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CA8ECu;
label_1ca8ec:
    // 0x1ca8ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ca8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ca8f0:
    // 0x1ca8f0: 0x10000239  b           . + 4 + (0x239 << 2)
label_1ca8f4:
    if (ctx->pc == 0x1CA8F4u) {
        ctx->pc = 0x1CA8F4u;
            // 0x1ca8f4: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1CA8F8u;
        goto label_1ca8f8;
    }
    ctx->pc = 0x1CA8F0u;
    {
        const bool branch_taken_0x1ca8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA8F0u;
            // 0x1ca8f4: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8f0) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CA8F8u;
label_1ca8f8:
    // 0x1ca8f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ca8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ca8fc:
    // 0x1ca8fc: 0x14a3021a  bne         $a1, $v1, . + 4 + (0x21A << 2)
label_1ca900:
    if (ctx->pc == 0x1CA900u) {
        ctx->pc = 0x1CA904u;
        goto label_1ca904;
    }
    ctx->pc = 0x1CA8FCu;
    {
        const bool branch_taken_0x1ca8fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ca8fc) {
            ctx->pc = 0x1CB168u;
            goto label_1cb168;
        }
    }
    ctx->pc = 0x1CA904u;
label_1ca904:
    // 0x1ca904: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ca904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca908:
    // 0x1ca908: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1ca908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1ca90c:
    // 0x1ca90c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ca90cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ca910:
    // 0x1ca910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca914:
    // 0x1ca914: 0x0  nop
    ctx->pc = 0x1ca914u;
    // NOP
label_1ca918:
    // 0x1ca918: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ca918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca91c:
    // 0x1ca91c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_1ca920:
    if (ctx->pc == 0x1CA920u) {
        ctx->pc = 0x1CA920u;
            // 0x1ca920: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1CA924u;
        goto label_1ca924;
    }
    ctx->pc = 0x1CA91Cu;
    {
        const bool branch_taken_0x1ca91c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA91Cu;
            // 0x1ca920: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca91c) {
            ctx->pc = 0x1CA990u;
            goto label_1ca990;
        }
    }
    ctx->pc = 0x1CA924u;
label_1ca924:
    // 0x1ca924: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ca924u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ca928:
    // 0x1ca928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca92c:
    // 0x1ca92c: 0x0  nop
    ctx->pc = 0x1ca92cu;
    // NOP
label_1ca930:
    // 0x1ca930: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca934:
    // 0x1ca934: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_1ca938:
    if (ctx->pc == 0x1CA938u) {
        ctx->pc = 0x1CA93Cu;
        goto label_1ca93c;
    }
    ctx->pc = 0x1CA934u;
    {
        const bool branch_taken_0x1ca934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca934) {
            ctx->pc = 0x1CA990u;
            goto label_1ca990;
        }
    }
    ctx->pc = 0x1CA93Cu;
label_1ca93c:
    // 0x1ca93c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1ca93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1ca940:
    // 0x1ca940: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_1ca944:
    if (ctx->pc == 0x1CA944u) {
        ctx->pc = 0x1CA948u;
        goto label_1ca948;
    }
    ctx->pc = 0x1CA940u;
    {
        const bool branch_taken_0x1ca940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ca940) {
            ctx->pc = 0x1CA958u;
            goto label_1ca958;
        }
    }
    ctx->pc = 0x1CA948u;
label_1ca948:
    // 0x1ca948: 0xc073020  jal         func_1CC080
label_1ca94c:
    if (ctx->pc == 0x1CA94Cu) {
        ctx->pc = 0x1CA94Cu;
            // 0x1ca94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA950u;
        goto label_1ca950;
    }
    ctx->pc = 0x1CA948u;
    SET_GPR_U32(ctx, 31, 0x1CA950u);
    ctx->pc = 0x1CA94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA948u;
            // 0x1ca94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC080u;
    if (runtime->hasFunction(0x1CC080u)) {
        auto targetFn = runtime->lookupFunction(0x1CC080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA950u; }
        if (ctx->pc != 0x1CA950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1cc080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA950u; }
        if (ctx->pc != 0x1CA950u) { return; }
    }
    ctx->pc = 0x1CA950u;
label_1ca950:
    // 0x1ca950: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ca954:
    if (ctx->pc == 0x1CA954u) {
        ctx->pc = 0x1CA958u;
        goto label_1ca958;
    }
    ctx->pc = 0x1CA950u;
    {
        const bool branch_taken_0x1ca950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca950) {
            ctx->pc = 0x1CA960u;
            goto label_1ca960;
        }
    }
    ctx->pc = 0x1CA958u;
label_1ca958:
    // 0x1ca958: 0xc072fa0  jal         func_1CBE80
label_1ca95c:
    if (ctx->pc == 0x1CA95Cu) {
        ctx->pc = 0x1CA95Cu;
            // 0x1ca95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA960u;
        goto label_1ca960;
    }
    ctx->pc = 0x1CA958u;
    SET_GPR_U32(ctx, 31, 0x1CA960u);
    ctx->pc = 0x1CA95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA958u;
            // 0x1ca95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBE80u;
    if (runtime->hasFunction(0x1CBE80u)) {
        auto targetFn = runtime->lookupFunction(0x1CBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA960u; }
        if (ctx->pc != 0x1CA960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector2_0x1cbe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA960u; }
        if (ctx->pc != 0x1CA960u) { return; }
    }
    ctx->pc = 0x1CA960u;
label_1ca960:
    // 0x1ca960: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ca960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca964:
    // 0x1ca964: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca968:
    // 0x1ca968: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1ca968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_1ca96c:
    // 0x1ca96c: 0xc065590  jal         func_195640
label_1ca970:
    if (ctx->pc == 0x1CA970u) {
        ctx->pc = 0x1CA970u;
            // 0x1ca970: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1CA974u;
        goto label_1ca974;
    }
    ctx->pc = 0x1CA96Cu;
    SET_GPR_U32(ctx, 31, 0x1CA974u);
    ctx->pc = 0x1CA970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA96Cu;
            // 0x1ca970: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA974u; }
        if (ctx->pc != 0x1CA974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA974u; }
        if (ctx->pc != 0x1CA974u) { return; }
    }
    ctx->pc = 0x1CA974u;
label_1ca974:
    // 0x1ca974: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ca974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca978:
    // 0x1ca978: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca97c:
    // 0x1ca97c: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1ca97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_1ca980:
    // 0x1ca980: 0xc065590  jal         func_195640
label_1ca984:
    if (ctx->pc == 0x1CA984u) {
        ctx->pc = 0x1CA984u;
            // 0x1ca984: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1CA988u;
        goto label_1ca988;
    }
    ctx->pc = 0x1CA980u;
    SET_GPR_U32(ctx, 31, 0x1CA988u);
    ctx->pc = 0x1CA984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA980u;
            // 0x1ca984: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA988u; }
        if (ctx->pc != 0x1CA988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA988u; }
        if (ctx->pc != 0x1CA988u) { return; }
    }
    ctx->pc = 0x1CA988u;
label_1ca988:
    // 0x1ca988: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1ca98c:
    if (ctx->pc == 0x1CA98Cu) {
        ctx->pc = 0x1CA990u;
        goto label_1ca990;
    }
    ctx->pc = 0x1CA988u;
    {
        const bool branch_taken_0x1ca988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca988) {
            ctx->pc = 0x1CAA48u;
            goto label_1caa48;
        }
    }
    ctx->pc = 0x1CA990u;
label_1ca990:
    // 0x1ca990: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1ca990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1ca994:
    // 0x1ca994: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ca994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca998:
    // 0x1ca998: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ca998u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ca99c:
    // 0x1ca99c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca9a0:
    // 0x1ca9a0: 0x0  nop
    ctx->pc = 0x1ca9a0u;
    // NOP
label_1ca9a4:
    // 0x1ca9a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ca9a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca9a8:
    // 0x1ca9a8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_1ca9ac:
    if (ctx->pc == 0x1CA9ACu) {
        ctx->pc = 0x1CA9ACu;
            // 0x1ca9ac: 0x3c02bba3  lui         $v0, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
        ctx->pc = 0x1CA9B0u;
        goto label_1ca9b0;
    }
    ctx->pc = 0x1CA9A8u;
    {
        const bool branch_taken_0x1ca9a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9A8u;
            // 0x1ca9ac: 0x3c02bba3  lui         $v0, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9a8) {
            ctx->pc = 0x1CAA20u;
            goto label_1caa20;
        }
    }
    ctx->pc = 0x1CA9B0u;
label_1ca9b0:
    // 0x1ca9b0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ca9b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ca9b4:
    // 0x1ca9b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca9b8:
    // 0x1ca9b8: 0x0  nop
    ctx->pc = 0x1ca9b8u;
    // NOP
label_1ca9bc:
    // 0x1ca9bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca9bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca9c0:
    // 0x1ca9c0: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_1ca9c4:
    if (ctx->pc == 0x1CA9C4u) {
        ctx->pc = 0x1CA9C8u;
        goto label_1ca9c8;
    }
    ctx->pc = 0x1CA9C0u;
    {
        const bool branch_taken_0x1ca9c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca9c0) {
            ctx->pc = 0x1CAA20u;
            goto label_1caa20;
        }
    }
    ctx->pc = 0x1CA9C8u;
label_1ca9c8:
    // 0x1ca9c8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1ca9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1ca9cc:
    // 0x1ca9cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca9d0:
    // 0x1ca9d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ca9d4:
    if (ctx->pc == 0x1CA9D4u) {
        ctx->pc = 0x1CA9D4u;
            // 0x1ca9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9D8u;
        goto label_1ca9d8;
    }
    ctx->pc = 0x1CA9D0u;
    {
        const bool branch_taken_0x1ca9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9D0u;
            // 0x1ca9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9d0) {
            ctx->pc = 0x1CA9E8u;
            goto label_1ca9e8;
        }
    }
    ctx->pc = 0x1CA9D8u;
label_1ca9d8:
    // 0x1ca9d8: 0xc073020  jal         func_1CC080
label_1ca9dc:
    if (ctx->pc == 0x1CA9DCu) {
        ctx->pc = 0x1CA9E0u;
        goto label_1ca9e0;
    }
    ctx->pc = 0x1CA9D8u;
    SET_GPR_U32(ctx, 31, 0x1CA9E0u);
    ctx->pc = 0x1CC080u;
    if (runtime->hasFunction(0x1CC080u)) {
        auto targetFn = runtime->lookupFunction(0x1CC080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9E0u; }
        if (ctx->pc != 0x1CA9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1cc080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9E0u; }
        if (ctx->pc != 0x1CA9E0u) { return; }
    }
    ctx->pc = 0x1CA9E0u;
label_1ca9e0:
    // 0x1ca9e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ca9e4:
    if (ctx->pc == 0x1CA9E4u) {
        ctx->pc = 0x1CA9E8u;
        goto label_1ca9e8;
    }
    ctx->pc = 0x1CA9E0u;
    {
        const bool branch_taken_0x1ca9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca9e0) {
            ctx->pc = 0x1CA9F0u;
            goto label_1ca9f0;
        }
    }
    ctx->pc = 0x1CA9E8u;
label_1ca9e8:
    // 0x1ca9e8: 0xc072fa0  jal         func_1CBE80
label_1ca9ec:
    if (ctx->pc == 0x1CA9ECu) {
        ctx->pc = 0x1CA9ECu;
            // 0x1ca9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9F0u;
        goto label_1ca9f0;
    }
    ctx->pc = 0x1CA9E8u;
    SET_GPR_U32(ctx, 31, 0x1CA9F0u);
    ctx->pc = 0x1CA9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9E8u;
            // 0x1ca9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBE80u;
    if (runtime->hasFunction(0x1CBE80u)) {
        auto targetFn = runtime->lookupFunction(0x1CBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9F0u; }
        if (ctx->pc != 0x1CA9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector2_0x1cbe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9F0u; }
        if (ctx->pc != 0x1CA9F0u) { return; }
    }
    ctx->pc = 0x1CA9F0u;
label_1ca9f0:
    // 0x1ca9f0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ca9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ca9f4:
    // 0x1ca9f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ca9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca9f8:
    // 0x1ca9f8: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1ca9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_1ca9fc:
    // 0x1ca9fc: 0xc065590  jal         func_195640
label_1caa00:
    if (ctx->pc == 0x1CAA00u) {
        ctx->pc = 0x1CAA00u;
            // 0x1caa00: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1CAA04u;
        goto label_1caa04;
    }
    ctx->pc = 0x1CA9FCu;
    SET_GPR_U32(ctx, 31, 0x1CAA04u);
    ctx->pc = 0x1CAA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9FCu;
            // 0x1caa00: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA04u; }
        if (ctx->pc != 0x1CAA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA04u; }
        if (ctx->pc != 0x1CAA04u) { return; }
    }
    ctx->pc = 0x1CAA04u;
label_1caa04:
    // 0x1caa04: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1caa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1caa08:
    // 0x1caa08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1caa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1caa0c:
    // 0x1caa0c: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1caa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_1caa10:
    // 0x1caa10: 0xc065590  jal         func_195640
label_1caa14:
    if (ctx->pc == 0x1CAA14u) {
        ctx->pc = 0x1CAA14u;
            // 0x1caa14: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1CAA18u;
        goto label_1caa18;
    }
    ctx->pc = 0x1CAA10u;
    SET_GPR_U32(ctx, 31, 0x1CAA18u);
    ctx->pc = 0x1CAA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA10u;
            // 0x1caa14: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA18u; }
        if (ctx->pc != 0x1CAA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA18u; }
        if (ctx->pc != 0x1CAA18u) { return; }
    }
    ctx->pc = 0x1CAA18u;
label_1caa18:
    // 0x1caa18: 0x1000000b  b           . + 4 + (0xB << 2)
label_1caa1c:
    if (ctx->pc == 0x1CAA1Cu) {
        ctx->pc = 0x1CAA20u;
        goto label_1caa20;
    }
    ctx->pc = 0x1CAA18u;
    {
        const bool branch_taken_0x1caa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caa18) {
            ctx->pc = 0x1CAA48u;
            goto label_1caa48;
        }
    }
    ctx->pc = 0x1CAA20u;
label_1caa20:
    // 0x1caa20: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x1caa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_1caa24:
    // 0x1caa24: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1caa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1caa28:
    // 0x1caa28: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1caa28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
label_1caa2c:
    // 0x1caa2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1caa2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1caa30:
    // 0x1caa30: 0x0  nop
    ctx->pc = 0x1caa30u;
    // NOP
label_1caa34:
    // 0x1caa34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1caa34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1caa38:
    // 0x1caa38: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1caa38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1caa3c:
    // 0x1caa3c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1caa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1caa40:
    // 0x1caa40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1caa40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1caa44:
    // 0x1caa44: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1caa44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1caa48:
    // 0x1caa48: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1caa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1caa4c:
    // 0x1caa4c: 0x284106a5  slti        $at, $v0, 0x6A5
    ctx->pc = 0x1caa4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1701) ? 1 : 0);
label_1caa50:
    // 0x1caa50: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1caa54:
    if (ctx->pc == 0x1CAA54u) {
        ctx->pc = 0x1CAA54u;
            // 0x1caa54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1CAA58u;
        goto label_1caa58;
    }
    ctx->pc = 0x1CAA50u;
    {
        const bool branch_taken_0x1caa50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA50u;
            // 0x1caa54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa50) {
            ctx->pc = 0x1CAA60u;
            goto label_1caa60;
        }
    }
    ctx->pc = 0x1CAA58u;
label_1caa58:
    // 0x1caa58: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1caa58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1caa5c:
    // 0x1caa5c: 0x0  nop
    ctx->pc = 0x1caa5cu;
    // NOP
label_1caa60:
    // 0x1caa60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1caa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1caa64:
    // 0x1caa64: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1caa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1caa68:
    // 0x1caa68: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1caa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1caa6c:
    // 0x1caa6c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1caa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1caa70:
    // 0x1caa70: 0xc0730a0  jal         func_1CC280
label_1caa74:
    if (ctx->pc == 0x1CAA74u) {
        ctx->pc = 0x1CAA74u;
            // 0x1caa74: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x1CAA78u;
        goto label_1caa78;
    }
    ctx->pc = 0x1CAA70u;
    SET_GPR_U32(ctx, 31, 0x1CAA78u);
    ctx->pc = 0x1CAA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA70u;
            // 0x1caa74: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC280u;
    if (runtime->hasFunction(0x1CC280u)) {
        auto targetFn = runtime->lookupFunction(0x1CC280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA78u; }
        if (ctx->pc != 0x1CAA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1cc280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA78u; }
        if (ctx->pc != 0x1CAA78u) { return; }
    }
    ctx->pc = 0x1CAA78u;
label_1caa78:
    // 0x1caa78: 0xc065d00  jal         func_197400
label_1caa7c:
    if (ctx->pc == 0x1CAA7Cu) {
        ctx->pc = 0x1CAA80u;
        goto label_1caa80;
    }
    ctx->pc = 0x1CAA78u;
    SET_GPR_U32(ctx, 31, 0x1CAA80u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA80u; }
        if (ctx->pc != 0x1CAA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA80u; }
        if (ctx->pc != 0x1CAA80u) { return; }
    }
    ctx->pc = 0x1CAA80u;
label_1caa80:
    // 0x1caa80: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_1caa84:
    if (ctx->pc == 0x1CAA84u) {
        ctx->pc = 0x1CAA88u;
        goto label_1caa88;
    }
    ctx->pc = 0x1CAA80u;
    {
        const bool branch_taken_0x1caa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caa80) {
            ctx->pc = 0x1CAC10u;
            goto label_1cac10;
        }
    }
    ctx->pc = 0x1CAA88u;
label_1caa88:
    // 0x1caa88: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1caa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1caa8c:
    // 0x1caa8c: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1caa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_1caa90:
    // 0x1caa90: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1caa90u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1caa94:
    // 0x1caa94: 0x0  nop
    ctx->pc = 0x1caa94u;
    // NOP
label_1caa98:
    // 0x1caa98: 0x0  nop
    ctx->pc = 0x1caa98u;
    // NOP
label_1caa9c:
    // 0x1caa9c: 0x1010  mfhi        $v0
    ctx->pc = 0x1caa9cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1caaa0:
    // 0x1caaa0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1caaa4:
    if (ctx->pc == 0x1CAAA4u) {
        ctx->pc = 0x1CAAA8u;
        goto label_1caaa8;
    }
    ctx->pc = 0x1CAAA0u;
    {
        const bool branch_taken_0x1caaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caaa0) {
            ctx->pc = 0x1CAAC0u;
            goto label_1caac0;
        }
    }
    ctx->pc = 0x1CAAA8u;
label_1caaa8:
    // 0x1caaa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1caaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1caaac:
    // 0x1caaac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1caaacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1caab0:
    // 0x1caab0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1caab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1caab4:
    // 0x1caab4: 0xc0655b0  jal         func_1956C0
label_1caab8:
    if (ctx->pc == 0x1CAAB8u) {
        ctx->pc = 0x1CAAB8u;
            // 0x1caab8: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x1CAABCu;
        goto label_1caabc;
    }
    ctx->pc = 0x1CAAB4u;
    SET_GPR_U32(ctx, 31, 0x1CAABCu);
    ctx->pc = 0x1CAAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAAB4u;
            // 0x1caab8: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAABCu; }
        if (ctx->pc != 0x1CAABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAABCu; }
        if (ctx->pc != 0x1CAABCu) { return; }
    }
    ctx->pc = 0x1CAABCu;
label_1caabc:
    // 0x1caabc: 0x0  nop
    ctx->pc = 0x1caabcu;
    // NOP
label_1caac0:
    // 0x1caac0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1caac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1caac4:
    // 0x1caac4: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1caac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1caac8:
    // 0x1caac8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1caac8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1caacc:
    // 0x1caacc: 0x0  nop
    ctx->pc = 0x1caaccu;
    // NOP
label_1caad0:
    // 0x1caad0: 0x0  nop
    ctx->pc = 0x1caad0u;
    // NOP
label_1caad4:
    // 0x1caad4: 0x1010  mfhi        $v0
    ctx->pc = 0x1caad4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1caad8:
    // 0x1caad8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1caadc:
    if (ctx->pc == 0x1CAADCu) {
        ctx->pc = 0x1CAAE0u;
        goto label_1caae0;
    }
    ctx->pc = 0x1CAAD8u;
    {
        const bool branch_taken_0x1caad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caad8) {
            ctx->pc = 0x1CAB08u;
            goto label_1cab08;
        }
    }
    ctx->pc = 0x1CAAE0u;
label_1caae0:
    // 0x1caae0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1caae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1caae4:
    // 0x1caae4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1caae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1caae8:
    // 0x1caae8: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1caae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1caaec:
    // 0x1caaec: 0xc06560c  jal         func_195830
label_1caaf0:
    if (ctx->pc == 0x1CAAF0u) {
        ctx->pc = 0x1CAAF0u;
            // 0x1caaf0: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CAAF4u;
        goto label_1caaf4;
    }
    ctx->pc = 0x1CAAECu;
    SET_GPR_U32(ctx, 31, 0x1CAAF4u);
    ctx->pc = 0x1CAAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAAECu;
            // 0x1caaf0: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAAF4u; }
        if (ctx->pc != 0x1CAAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAAF4u; }
        if (ctx->pc != 0x1CAAF4u) { return; }
    }
    ctx->pc = 0x1CAAF4u;
label_1caaf4:
    // 0x1caaf4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1caaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1caaf8:
    // 0x1caaf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1caaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1caafc:
    // 0x1caafc: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1caafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1cab00:
    // 0x1cab00: 0xc06560c  jal         func_195830
label_1cab04:
    if (ctx->pc == 0x1CAB04u) {
        ctx->pc = 0x1CAB04u;
            // 0x1cab04: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CAB08u;
        goto label_1cab08;
    }
    ctx->pc = 0x1CAB00u;
    SET_GPR_U32(ctx, 31, 0x1CAB08u);
    ctx->pc = 0x1CAB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB00u;
            // 0x1cab04: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB08u; }
        if (ctx->pc != 0x1CAB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB08u; }
        if (ctx->pc != 0x1CAB08u) { return; }
    }
    ctx->pc = 0x1CAB08u;
label_1cab08:
    // 0x1cab08: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1cab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cab0c:
    // 0x1cab0c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1cab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1cab10:
    // 0x1cab10: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1cab10u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cab14:
    // 0x1cab14: 0x0  nop
    ctx->pc = 0x1cab14u;
    // NOP
label_1cab18:
    // 0x1cab18: 0x0  nop
    ctx->pc = 0x1cab18u;
    // NOP
label_1cab1c:
    // 0x1cab1c: 0x1010  mfhi        $v0
    ctx->pc = 0x1cab1cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cab20:
    // 0x1cab20: 0x144001ad  bnez        $v0, . + 4 + (0x1AD << 2)
label_1cab24:
    if (ctx->pc == 0x1CAB24u) {
        ctx->pc = 0x1CAB28u;
        goto label_1cab28;
    }
    ctx->pc = 0x1CAB20u;
    {
        const bool branch_taken_0x1cab20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cab20) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CAB28u;
label_1cab28:
    // 0x1cab28: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cab28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cab2c:
    // 0x1cab2c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1cab30:
    // 0x1cab30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cab34:
    // 0x1cab34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cab34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cab38:
    // 0x1cab38: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cab3c:
    // 0x1cab3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cab3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1cab40:
    // 0x1cab40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cab40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cab44:
    // 0x1cab44: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1cab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1cab48:
    // 0x1cab48: 0xc0655dc  jal         func_195770
label_1cab4c:
    if (ctx->pc == 0x1CAB4Cu) {
        ctx->pc = 0x1CAB4Cu;
            // 0x1cab4c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CAB50u;
        goto label_1cab50;
    }
    ctx->pc = 0x1CAB48u;
    SET_GPR_U32(ctx, 31, 0x1CAB50u);
    ctx->pc = 0x1CAB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB48u;
            // 0x1cab4c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB50u; }
        if (ctx->pc != 0x1CAB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB50u; }
        if (ctx->pc != 0x1CAB50u) { return; }
    }
    ctx->pc = 0x1CAB50u;
label_1cab50:
    // 0x1cab50: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cab50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cab54:
    // 0x1cab54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cab54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cab58:
    // 0x1cab58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cab58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cab5c:
    // 0x1cab5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cab5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cab60:
    // 0x1cab60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cab60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cab64:
    // 0x1cab64: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1cab64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1cab68:
    // 0x1cab68: 0xc0655dc  jal         func_195770
label_1cab6c:
    if (ctx->pc == 0x1CAB6Cu) {
        ctx->pc = 0x1CAB6Cu;
            // 0x1cab6c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CAB70u;
        goto label_1cab70;
    }
    ctx->pc = 0x1CAB68u;
    SET_GPR_U32(ctx, 31, 0x1CAB70u);
    ctx->pc = 0x1CAB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB68u;
            // 0x1cab6c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB70u; }
        if (ctx->pc != 0x1CAB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB70u; }
        if (ctx->pc != 0x1CAB70u) { return; }
    }
    ctx->pc = 0x1CAB70u;
label_1cab70:
    // 0x1cab70: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cab74:
    // 0x1cab74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cab74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cab78:
    // 0x1cab78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cab78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cab7c:
    // 0x1cab7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cab7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cab80:
    // 0x1cab80: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cab80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cab84:
    // 0x1cab84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cab84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1cab88:
    // 0x1cab88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cab88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cab8c:
    // 0x1cab8c: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1cab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1cab90:
    // 0x1cab90: 0xc0655dc  jal         func_195770
label_1cab94:
    if (ctx->pc == 0x1CAB94u) {
        ctx->pc = 0x1CAB94u;
            // 0x1cab94: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CAB98u;
        goto label_1cab98;
    }
    ctx->pc = 0x1CAB90u;
    SET_GPR_U32(ctx, 31, 0x1CAB98u);
    ctx->pc = 0x1CAB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB90u;
            // 0x1cab94: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB98u; }
        if (ctx->pc != 0x1CAB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB98u; }
        if (ctx->pc != 0x1CAB98u) { return; }
    }
    ctx->pc = 0x1CAB98u;
label_1cab98:
    // 0x1cab98: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cab9c:
    // 0x1cab9c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1caba0:
    // 0x1caba0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1caba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1caba4:
    // 0x1caba4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1caba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1caba8:
    // 0x1caba8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1caba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cabac:
    // 0x1cabac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cabacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1cabb0:
    // 0x1cabb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cabb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cabb4:
    // 0x1cabb4: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1cabb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1cabb8:
    // 0x1cabb8: 0xc0655dc  jal         func_195770
label_1cabbc:
    if (ctx->pc == 0x1CABBCu) {
        ctx->pc = 0x1CABBCu;
            // 0x1cabbc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CABC0u;
        goto label_1cabc0;
    }
    ctx->pc = 0x1CABB8u;
    SET_GPR_U32(ctx, 31, 0x1CABC0u);
    ctx->pc = 0x1CABBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABB8u;
            // 0x1cabbc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABC0u; }
        if (ctx->pc != 0x1CABC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABC0u; }
        if (ctx->pc != 0x1CABC0u) { return; }
    }
    ctx->pc = 0x1CABC0u;
label_1cabc0:
    // 0x1cabc0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cabc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cabc4:
    // 0x1cabc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cabc8:
    // 0x1cabc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cabc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cabcc:
    // 0x1cabcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cabccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cabd0:
    // 0x1cabd0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cabd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cabd4:
    // 0x1cabd4: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1cabd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1cabd8:
    // 0x1cabd8: 0xc0655dc  jal         func_195770
label_1cabdc:
    if (ctx->pc == 0x1CABDCu) {
        ctx->pc = 0x1CABDCu;
            // 0x1cabdc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CABE0u;
        goto label_1cabe0;
    }
    ctx->pc = 0x1CABD8u;
    SET_GPR_U32(ctx, 31, 0x1CABE0u);
    ctx->pc = 0x1CABDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABD8u;
            // 0x1cabdc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABE0u; }
        if (ctx->pc != 0x1CABE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABE0u; }
        if (ctx->pc != 0x1CABE0u) { return; }
    }
    ctx->pc = 0x1CABE0u;
label_1cabe0:
    // 0x1cabe0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cabe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cabe4:
    // 0x1cabe4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cabe8:
    // 0x1cabe8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cabec:
    // 0x1cabec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cabecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cabf0:
    // 0x1cabf0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cabf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cabf4:
    // 0x1cabf4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cabf4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1cabf8:
    // 0x1cabf8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cabf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cabfc:
    // 0x1cabfc: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1cabfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1cac00:
    // 0x1cac00: 0xc0655dc  jal         func_195770
label_1cac04:
    if (ctx->pc == 0x1CAC04u) {
        ctx->pc = 0x1CAC04u;
            // 0x1cac04: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CAC08u;
        goto label_1cac08;
    }
    ctx->pc = 0x1CAC00u;
    SET_GPR_U32(ctx, 31, 0x1CAC08u);
    ctx->pc = 0x1CAC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC00u;
            // 0x1cac04: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC08u; }
        if (ctx->pc != 0x1CAC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC08u; }
        if (ctx->pc != 0x1CAC08u) { return; }
    }
    ctx->pc = 0x1CAC08u;
label_1cac08:
    // 0x1cac08: 0x10000173  b           . + 4 + (0x173 << 2)
label_1cac0c:
    if (ctx->pc == 0x1CAC0Cu) {
        ctx->pc = 0x1CAC10u;
        goto label_1cac10;
    }
    ctx->pc = 0x1CAC08u;
    {
        const bool branch_taken_0x1cac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cac08) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CAC10u;
label_1cac10:
    // 0x1cac10: 0xc065d00  jal         func_197400
label_1cac14:
    if (ctx->pc == 0x1CAC14u) {
        ctx->pc = 0x1CAC18u;
        goto label_1cac18;
    }
    ctx->pc = 0x1CAC10u;
    SET_GPR_U32(ctx, 31, 0x1CAC18u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC18u; }
        if (ctx->pc != 0x1CAC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC18u; }
        if (ctx->pc != 0x1CAC18u) { return; }
    }
    ctx->pc = 0x1CAC18u;
label_1cac18:
    // 0x1cac18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cac1c:
    // 0x1cac1c: 0x1443009e  bne         $v0, $v1, . + 4 + (0x9E << 2)
label_1cac20:
    if (ctx->pc == 0x1CAC20u) {
        ctx->pc = 0x1CAC24u;
        goto label_1cac24;
    }
    ctx->pc = 0x1CAC1Cu;
    {
        const bool branch_taken_0x1cac1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cac1c) {
            ctx->pc = 0x1CAE98u;
            goto label_1cae98;
        }
    }
    ctx->pc = 0x1CAC24u;
label_1cac24:
    // 0x1cac24: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1cac24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cac28:
    // 0x1cac28: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1cac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1cac2c:
    // 0x1cac2c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1cac2cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cac30:
    // 0x1cac30: 0x0  nop
    ctx->pc = 0x1cac30u;
    // NOP
label_1cac34:
    // 0x1cac34: 0x0  nop
    ctx->pc = 0x1cac34u;
    // NOP
label_1cac38:
    // 0x1cac38: 0x1010  mfhi        $v0
    ctx->pc = 0x1cac38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cac3c:
    // 0x1cac3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1cac40:
    if (ctx->pc == 0x1CAC40u) {
        ctx->pc = 0x1CAC44u;
        goto label_1cac44;
    }
    ctx->pc = 0x1CAC3Cu;
    {
        const bool branch_taken_0x1cac3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cac3c) {
            ctx->pc = 0x1CAC58u;
            goto label_1cac58;
        }
    }
    ctx->pc = 0x1CAC44u;
label_1cac44:
    // 0x1cac44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cac48:
    // 0x1cac48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cac48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cac4c:
    // 0x1cac4c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cac50:
    // 0x1cac50: 0xc0655b0  jal         func_1956C0
label_1cac54:
    if (ctx->pc == 0x1CAC54u) {
        ctx->pc = 0x1CAC54u;
            // 0x1cac54: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x1CAC58u;
        goto label_1cac58;
    }
    ctx->pc = 0x1CAC50u;
    SET_GPR_U32(ctx, 31, 0x1CAC58u);
    ctx->pc = 0x1CAC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC50u;
            // 0x1cac54: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC58u; }
        if (ctx->pc != 0x1CAC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC58u; }
        if (ctx->pc != 0x1CAC58u) { return; }
    }
    ctx->pc = 0x1CAC58u;
label_1cac58:
    // 0x1cac58: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1cac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cac5c:
    // 0x1cac5c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1cac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1cac60:
    // 0x1cac60: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1cac60u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cac64:
    // 0x1cac64: 0x0  nop
    ctx->pc = 0x1cac64u;
    // NOP
label_1cac68:
    // 0x1cac68: 0x0  nop
    ctx->pc = 0x1cac68u;
    // NOP
label_1cac6c:
    // 0x1cac6c: 0x1010  mfhi        $v0
    ctx->pc = 0x1cac6cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cac70:
    // 0x1cac70: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1cac74:
    if (ctx->pc == 0x1CAC74u) {
        ctx->pc = 0x1CAC78u;
        goto label_1cac78;
    }
    ctx->pc = 0x1CAC70u;
    {
        const bool branch_taken_0x1cac70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cac70) {
            ctx->pc = 0x1CACC8u;
            goto label_1cacc8;
        }
    }
    ctx->pc = 0x1CAC78u;
label_1cac78:
    // 0x1cac78: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cac7c:
    // 0x1cac7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cac80:
    // 0x1cac80: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1cac80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1cac84:
    // 0x1cac84: 0xc06560c  jal         func_195830
label_1cac88:
    if (ctx->pc == 0x1CAC88u) {
        ctx->pc = 0x1CAC88u;
            // 0x1cac88: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CAC8Cu;
        goto label_1cac8c;
    }
    ctx->pc = 0x1CAC84u;
    SET_GPR_U32(ctx, 31, 0x1CAC8Cu);
    ctx->pc = 0x1CAC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC84u;
            // 0x1cac88: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC8Cu; }
        if (ctx->pc != 0x1CAC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC8Cu; }
        if (ctx->pc != 0x1CAC8Cu) { return; }
    }
    ctx->pc = 0x1CAC8Cu;
label_1cac8c:
    // 0x1cac8c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cac90:
    // 0x1cac90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cac94:
    // 0x1cac94: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1cac94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1cac98:
    // 0x1cac98: 0xc06560c  jal         func_195830
label_1cac9c:
    if (ctx->pc == 0x1CAC9Cu) {
        ctx->pc = 0x1CAC9Cu;
            // 0x1cac9c: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x1CACA0u;
        goto label_1caca0;
    }
    ctx->pc = 0x1CAC98u;
    SET_GPR_U32(ctx, 31, 0x1CACA0u);
    ctx->pc = 0x1CAC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC98u;
            // 0x1cac9c: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACA0u; }
        if (ctx->pc != 0x1CACA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACA0u; }
        if (ctx->pc != 0x1CACA0u) { return; }
    }
    ctx->pc = 0x1CACA0u;
label_1caca0:
    // 0x1caca0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1caca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1caca4:
    // 0x1caca4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1caca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1caca8:
    // 0x1caca8: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1caca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1cacac:
    // 0x1cacac: 0xc06560c  jal         func_195830
label_1cacb0:
    if (ctx->pc == 0x1CACB0u) {
        ctx->pc = 0x1CACB0u;
            // 0x1cacb0: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CACB4u;
        goto label_1cacb4;
    }
    ctx->pc = 0x1CACACu;
    SET_GPR_U32(ctx, 31, 0x1CACB4u);
    ctx->pc = 0x1CACB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACACu;
            // 0x1cacb0: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACB4u; }
        if (ctx->pc != 0x1CACB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACB4u; }
        if (ctx->pc != 0x1CACB4u) { return; }
    }
    ctx->pc = 0x1CACB4u;
label_1cacb4:
    // 0x1cacb4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cacb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cacb8:
    // 0x1cacb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cacbc:
    // 0x1cacbc: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1cacbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1cacc0:
    // 0x1cacc0: 0xc06560c  jal         func_195830
label_1cacc4:
    if (ctx->pc == 0x1CACC4u) {
        ctx->pc = 0x1CACC4u;
            // 0x1cacc4: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x1CACC8u;
        goto label_1cacc8;
    }
    ctx->pc = 0x1CACC0u;
    SET_GPR_U32(ctx, 31, 0x1CACC8u);
    ctx->pc = 0x1CACC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACC0u;
            // 0x1cacc4: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACC8u; }
        if (ctx->pc != 0x1CACC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACC8u; }
        if (ctx->pc != 0x1CACC8u) { return; }
    }
    ctx->pc = 0x1CACC8u;
label_1cacc8:
    // 0x1cacc8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1cacc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1caccc:
    // 0x1caccc: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1cacccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1cacd0:
    // 0x1cacd0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1cacd0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cacd4:
    // 0x1cacd4: 0x0  nop
    ctx->pc = 0x1cacd4u;
    // NOP
label_1cacd8:
    // 0x1cacd8: 0x0  nop
    ctx->pc = 0x1cacd8u;
    // NOP
label_1cacdc:
    // 0x1cacdc: 0x1010  mfhi        $v0
    ctx->pc = 0x1cacdcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cace0:
    // 0x1cace0: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_1cace4:
    if (ctx->pc == 0x1CACE4u) {
        ctx->pc = 0x1CACE8u;
        goto label_1cace8;
    }
    ctx->pc = 0x1CACE0u;
    {
        const bool branch_taken_0x1cace0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cace0) {
            ctx->pc = 0x1CADC8u;
            goto label_1cadc8;
        }
    }
    ctx->pc = 0x1CACE8u;
label_1cace8:
    // 0x1cace8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cace8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cacec:
    // 0x1cacec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cacecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1cacf0:
    // 0x1cacf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cacf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cacf4:
    // 0x1cacf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cacf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cacf8:
    // 0x1cacf8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cacf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cacfc:
    // 0x1cacfc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cacfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1cad00:
    // 0x1cad00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cad00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cad04:
    // 0x1cad04: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1cad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1cad08:
    // 0x1cad08: 0xc0655dc  jal         func_195770
label_1cad0c:
    if (ctx->pc == 0x1CAD0Cu) {
        ctx->pc = 0x1CAD0Cu;
            // 0x1cad0c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CAD10u;
        goto label_1cad10;
    }
    ctx->pc = 0x1CAD08u;
    SET_GPR_U32(ctx, 31, 0x1CAD10u);
    ctx->pc = 0x1CAD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD08u;
            // 0x1cad0c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD10u; }
        if (ctx->pc != 0x1CAD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD10u; }
        if (ctx->pc != 0x1CAD10u) { return; }
    }
    ctx->pc = 0x1CAD10u;
label_1cad10:
    // 0x1cad10: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cad10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cad14:
    // 0x1cad14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cad14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cad18:
    // 0x1cad18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cad18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cad1c:
    // 0x1cad1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cad1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cad20:
    // 0x1cad20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cad20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cad24:
    // 0x1cad24: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1cad24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1cad28:
    // 0x1cad28: 0xc0655dc  jal         func_195770
label_1cad2c:
    if (ctx->pc == 0x1CAD2Cu) {
        ctx->pc = 0x1CAD2Cu;
            // 0x1cad2c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CAD30u;
        goto label_1cad30;
    }
    ctx->pc = 0x1CAD28u;
    SET_GPR_U32(ctx, 31, 0x1CAD30u);
    ctx->pc = 0x1CAD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD28u;
            // 0x1cad2c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD30u; }
        if (ctx->pc != 0x1CAD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD30u; }
        if (ctx->pc != 0x1CAD30u) { return; }
    }
    ctx->pc = 0x1CAD30u;
label_1cad30:
    // 0x1cad30: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cad30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cad34:
    // 0x1cad34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cad34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cad38:
    // 0x1cad38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cad38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cad3c:
    // 0x1cad3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cad3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cad40:
    // 0x1cad40: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cad40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cad44:
    // 0x1cad44: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cad44u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1cad48:
    // 0x1cad48: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cad48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cad4c:
    // 0x1cad4c: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1cad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1cad50:
    // 0x1cad50: 0xc0655dc  jal         func_195770
label_1cad54:
    if (ctx->pc == 0x1CAD54u) {
        ctx->pc = 0x1CAD54u;
            // 0x1cad54: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CAD58u;
        goto label_1cad58;
    }
    ctx->pc = 0x1CAD50u;
    SET_GPR_U32(ctx, 31, 0x1CAD58u);
    ctx->pc = 0x1CAD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD50u;
            // 0x1cad54: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD58u; }
        if (ctx->pc != 0x1CAD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD58u; }
        if (ctx->pc != 0x1CAD58u) { return; }
    }
    ctx->pc = 0x1CAD58u;
label_1cad58:
    // 0x1cad58: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cad58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cad5c:
    // 0x1cad5c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1cad60:
    // 0x1cad60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cad64:
    // 0x1cad64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cad64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cad68:
    // 0x1cad68: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cad68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cad6c:
    // 0x1cad6c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cad6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1cad70:
    // 0x1cad70: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cad70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cad74:
    // 0x1cad74: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1cad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1cad78:
    // 0x1cad78: 0xc0655dc  jal         func_195770
label_1cad7c:
    if (ctx->pc == 0x1CAD7Cu) {
        ctx->pc = 0x1CAD7Cu;
            // 0x1cad7c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CAD80u;
        goto label_1cad80;
    }
    ctx->pc = 0x1CAD78u;
    SET_GPR_U32(ctx, 31, 0x1CAD80u);
    ctx->pc = 0x1CAD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD78u;
            // 0x1cad7c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD80u; }
        if (ctx->pc != 0x1CAD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD80u; }
        if (ctx->pc != 0x1CAD80u) { return; }
    }
    ctx->pc = 0x1CAD80u;
label_1cad80:
    // 0x1cad80: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cad80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cad84:
    // 0x1cad84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cad84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cad88:
    // 0x1cad88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cad88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cad8c:
    // 0x1cad8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cad8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cad90:
    // 0x1cad90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cad90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cad94:
    // 0x1cad94: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1cad94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1cad98:
    // 0x1cad98: 0xc0655dc  jal         func_195770
label_1cad9c:
    if (ctx->pc == 0x1CAD9Cu) {
        ctx->pc = 0x1CAD9Cu;
            // 0x1cad9c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CADA0u;
        goto label_1cada0;
    }
    ctx->pc = 0x1CAD98u;
    SET_GPR_U32(ctx, 31, 0x1CADA0u);
    ctx->pc = 0x1CAD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD98u;
            // 0x1cad9c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CADA0u; }
        if (ctx->pc != 0x1CADA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CADA0u; }
        if (ctx->pc != 0x1CADA0u) { return; }
    }
    ctx->pc = 0x1CADA0u;
label_1cada0:
    // 0x1cada0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cada0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cada4:
    // 0x1cada4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cada8:
    // 0x1cada8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cadac:
    // 0x1cadac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cadacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cadb0:
    // 0x1cadb0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cadb4:
    // 0x1cadb4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cadb4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1cadb8:
    // 0x1cadb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cadb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cadbc:
    // 0x1cadbc: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1cadbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1cadc0:
    // 0x1cadc0: 0xc0655dc  jal         func_195770
label_1cadc4:
    if (ctx->pc == 0x1CADC4u) {
        ctx->pc = 0x1CADC4u;
            // 0x1cadc4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CADC8u;
        goto label_1cadc8;
    }
    ctx->pc = 0x1CADC0u;
    SET_GPR_U32(ctx, 31, 0x1CADC8u);
    ctx->pc = 0x1CADC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADC0u;
            // 0x1cadc4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CADC8u; }
        if (ctx->pc != 0x1CADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CADC8u; }
        if (ctx->pc != 0x1CADC8u) { return; }
    }
    ctx->pc = 0x1CADC8u;
label_1cadc8:
    // 0x1cadc8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1cadc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cadcc:
    // 0x1cadcc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1cadccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1cadd0:
    // 0x1cadd0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1cadd0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cadd4:
    // 0x1cadd4: 0x0  nop
    ctx->pc = 0x1cadd4u;
    // NOP
label_1cadd8:
    // 0x1cadd8: 0x0  nop
    ctx->pc = 0x1cadd8u;
    // NOP
label_1caddc:
    // 0x1caddc: 0x1010  mfhi        $v0
    ctx->pc = 0x1caddcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cade0:
    // 0x1cade0: 0x144000fd  bnez        $v0, . + 4 + (0xFD << 2)
label_1cade4:
    if (ctx->pc == 0x1CADE4u) {
        ctx->pc = 0x1CADE4u;
            // 0x1cade4: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->pc = 0x1CADE8u;
        goto label_1cade8;
    }
    ctx->pc = 0x1CADE0u;
    {
        const bool branch_taken_0x1cade0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CADE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADE0u;
            // 0x1cade4: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cade0) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CADE8u;
label_1cade8:
    // 0x1cade8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cade8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cadec:
    // 0x1cadec: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cadecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1cadf0:
    // 0x1cadf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cadf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cadf4:
    // 0x1cadf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cadf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cadf8:
    // 0x1cadf8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1cadf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1cadfc:
    // 0x1cadfc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cadfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1cae00:
    // 0x1cae00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cae00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cae04:
    // 0x1cae04: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x1cae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_1cae08:
    // 0x1cae08: 0xc0655dc  jal         func_195770
label_1cae0c:
    if (ctx->pc == 0x1CAE0Cu) {
        ctx->pc = 0x1CAE0Cu;
            // 0x1cae0c: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CAE10u;
        goto label_1cae10;
    }
    ctx->pc = 0x1CAE08u;
    SET_GPR_U32(ctx, 31, 0x1CAE10u);
    ctx->pc = 0x1CAE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE08u;
            // 0x1cae0c: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE10u; }
        if (ctx->pc != 0x1CAE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE10u; }
        if (ctx->pc != 0x1CAE10u) { return; }
    }
    ctx->pc = 0x1CAE10u;
label_1cae10:
    // 0x1cae10: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cae10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cae14:
    // 0x1cae14: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1cae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1cae18:
    // 0x1cae18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cae1c:
    // 0x1cae1c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cae1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1cae20:
    // 0x1cae20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cae20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cae24:
    // 0x1cae24: 0x0  nop
    ctx->pc = 0x1cae24u;
    // NOP
label_1cae28:
    // 0x1cae28: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cae28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cae2c:
    // 0x1cae2c: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x1cae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_1cae30:
    // 0x1cae30: 0xc0655dc  jal         func_195770
label_1cae34:
    if (ctx->pc == 0x1CAE34u) {
        ctx->pc = 0x1CAE34u;
            // 0x1cae34: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CAE38u;
        goto label_1cae38;
    }
    ctx->pc = 0x1CAE30u;
    SET_GPR_U32(ctx, 31, 0x1CAE38u);
    ctx->pc = 0x1CAE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE30u;
            // 0x1cae34: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE38u; }
        if (ctx->pc != 0x1CAE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE38u; }
        if (ctx->pc != 0x1CAE38u) { return; }
    }
    ctx->pc = 0x1CAE38u;
label_1cae38:
    // 0x1cae38: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1cae38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_1cae3c:
    // 0x1cae3c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cae40:
    // 0x1cae40: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cae40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1cae44:
    // 0x1cae44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cae48:
    // 0x1cae48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cae48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cae4c:
    // 0x1cae4c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1cae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1cae50:
    // 0x1cae50: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cae50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1cae54:
    // 0x1cae54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cae54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cae58:
    // 0x1cae58: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x1cae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_1cae5c:
    // 0x1cae5c: 0xc0655dc  jal         func_195770
label_1cae60:
    if (ctx->pc == 0x1CAE60u) {
        ctx->pc = 0x1CAE60u;
            // 0x1cae60: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CAE64u;
        goto label_1cae64;
    }
    ctx->pc = 0x1CAE5Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE64u);
    ctx->pc = 0x1CAE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE5Cu;
            // 0x1cae60: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE64u; }
        if (ctx->pc != 0x1CAE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE64u; }
        if (ctx->pc != 0x1CAE64u) { return; }
    }
    ctx->pc = 0x1CAE64u;
label_1cae64:
    // 0x1cae64: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cae64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cae68:
    // 0x1cae68: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1cae68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1cae6c:
    // 0x1cae6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cae70:
    // 0x1cae70: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cae70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1cae74:
    // 0x1cae74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cae74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cae78:
    // 0x1cae78: 0x0  nop
    ctx->pc = 0x1cae78u;
    // NOP
label_1cae7c:
    // 0x1cae7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cae7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cae80:
    // 0x1cae80: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x1cae80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_1cae84:
    // 0x1cae84: 0xc0655dc  jal         func_195770
label_1cae88:
    if (ctx->pc == 0x1CAE88u) {
        ctx->pc = 0x1CAE88u;
            // 0x1cae88: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CAE8Cu;
        goto label_1cae8c;
    }
    ctx->pc = 0x1CAE84u;
    SET_GPR_U32(ctx, 31, 0x1CAE8Cu);
    ctx->pc = 0x1CAE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE84u;
            // 0x1cae88: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE8Cu; }
        if (ctx->pc != 0x1CAE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE8Cu; }
        if (ctx->pc != 0x1CAE8Cu) { return; }
    }
    ctx->pc = 0x1CAE8Cu;
label_1cae8c:
    // 0x1cae8c: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_1cae90:
    if (ctx->pc == 0x1CAE90u) {
        ctx->pc = 0x1CAE94u;
        goto label_1cae94;
    }
    ctx->pc = 0x1CAE8Cu;
    {
        const bool branch_taken_0x1cae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cae8c) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CAE94u;
label_1cae94:
    // 0x1cae94: 0x0  nop
    ctx->pc = 0x1cae94u;
    // NOP
label_1cae98:
    // 0x1cae98: 0xc065d00  jal         func_197400
label_1cae9c:
    if (ctx->pc == 0x1CAE9Cu) {
        ctx->pc = 0x1CAEA0u;
        goto label_1caea0;
    }
    ctx->pc = 0x1CAE98u;
    SET_GPR_U32(ctx, 31, 0x1CAEA0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAEA0u; }
        if (ctx->pc != 0x1CAEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAEA0u; }
        if (ctx->pc != 0x1CAEA0u) { return; }
    }
    ctx->pc = 0x1CAEA0u;
label_1caea0:
    // 0x1caea0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1caea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1caea4:
    // 0x1caea4: 0x144300cc  bne         $v0, $v1, . + 4 + (0xCC << 2)
label_1caea8:
    if (ctx->pc == 0x1CAEA8u) {
        ctx->pc = 0x1CAEACu;
        goto label_1caeac;
    }
    ctx->pc = 0x1CAEA4u;
    {
        const bool branch_taken_0x1caea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1caea4) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CAEACu;
label_1caeac:
    // 0x1caeac: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1caeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1caeb0:
    // 0x1caeb0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1caeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1caeb4:
    // 0x1caeb4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1caeb4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1caeb8:
    // 0x1caeb8: 0x0  nop
    ctx->pc = 0x1caeb8u;
    // NOP
label_1caebc:
    // 0x1caebc: 0x0  nop
    ctx->pc = 0x1caebcu;
    // NOP
label_1caec0:
    // 0x1caec0: 0x1010  mfhi        $v0
    ctx->pc = 0x1caec0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1caec4:
    // 0x1caec4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1caec8:
    if (ctx->pc == 0x1CAEC8u) {
        ctx->pc = 0x1CAECCu;
        goto label_1caecc;
    }
    ctx->pc = 0x1CAEC4u;
    {
        const bool branch_taken_0x1caec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caec4) {
            ctx->pc = 0x1CAEE0u;
            goto label_1caee0;
        }
    }
    ctx->pc = 0x1CAECCu;
label_1caecc:
    // 0x1caecc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1caeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1caed0:
    // 0x1caed0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1caed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1caed4:
    // 0x1caed4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1caed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1caed8:
    // 0x1caed8: 0xc0655b0  jal         func_1956C0
label_1caedc:
    if (ctx->pc == 0x1CAEDCu) {
        ctx->pc = 0x1CAEDCu;
            // 0x1caedc: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x1CAEE0u;
        goto label_1caee0;
    }
    ctx->pc = 0x1CAED8u;
    SET_GPR_U32(ctx, 31, 0x1CAEE0u);
    ctx->pc = 0x1CAEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAED8u;
            // 0x1caedc: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAEE0u; }
        if (ctx->pc != 0x1CAEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAEE0u; }
        if (ctx->pc != 0x1CAEE0u) { return; }
    }
    ctx->pc = 0x1CAEE0u;
label_1caee0:
    // 0x1caee0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1caee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1caee4:
    // 0x1caee4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1caee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1caee8:
    // 0x1caee8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1caee8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1caeec:
    // 0x1caeec: 0x0  nop
    ctx->pc = 0x1caeecu;
    // NOP
label_1caef0:
    // 0x1caef0: 0x0  nop
    ctx->pc = 0x1caef0u;
    // NOP
label_1caef4:
    // 0x1caef4: 0x1010  mfhi        $v0
    ctx->pc = 0x1caef4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1caef8:
    // 0x1caef8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1caefc:
    if (ctx->pc == 0x1CAEFCu) {
        ctx->pc = 0x1CAF00u;
        goto label_1caf00;
    }
    ctx->pc = 0x1CAEF8u;
    {
        const bool branch_taken_0x1caef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caef8) {
            ctx->pc = 0x1CAF50u;
            goto label_1caf50;
        }
    }
    ctx->pc = 0x1CAF00u;
label_1caf00:
    // 0x1caf00: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1caf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1caf04:
    // 0x1caf04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1caf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1caf08:
    // 0x1caf08: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1caf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1caf0c:
    // 0x1caf0c: 0xc06560c  jal         func_195830
label_1caf10:
    if (ctx->pc == 0x1CAF10u) {
        ctx->pc = 0x1CAF10u;
            // 0x1caf10: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CAF14u;
        goto label_1caf14;
    }
    ctx->pc = 0x1CAF0Cu;
    SET_GPR_U32(ctx, 31, 0x1CAF14u);
    ctx->pc = 0x1CAF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF0Cu;
            // 0x1caf10: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF14u; }
        if (ctx->pc != 0x1CAF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF14u; }
        if (ctx->pc != 0x1CAF14u) { return; }
    }
    ctx->pc = 0x1CAF14u;
label_1caf14:
    // 0x1caf14: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1caf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1caf18:
    // 0x1caf18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1caf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1caf1c:
    // 0x1caf1c: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1caf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1caf20:
    // 0x1caf20: 0xc06560c  jal         func_195830
label_1caf24:
    if (ctx->pc == 0x1CAF24u) {
        ctx->pc = 0x1CAF24u;
            // 0x1caf24: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x1CAF28u;
        goto label_1caf28;
    }
    ctx->pc = 0x1CAF20u;
    SET_GPR_U32(ctx, 31, 0x1CAF28u);
    ctx->pc = 0x1CAF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF20u;
            // 0x1caf24: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF28u; }
        if (ctx->pc != 0x1CAF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF28u; }
        if (ctx->pc != 0x1CAF28u) { return; }
    }
    ctx->pc = 0x1CAF28u;
label_1caf28:
    // 0x1caf28: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1caf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1caf2c:
    // 0x1caf2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1caf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1caf30:
    // 0x1caf30: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1caf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1caf34:
    // 0x1caf34: 0xc06560c  jal         func_195830
label_1caf38:
    if (ctx->pc == 0x1CAF38u) {
        ctx->pc = 0x1CAF38u;
            // 0x1caf38: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CAF3Cu;
        goto label_1caf3c;
    }
    ctx->pc = 0x1CAF34u;
    SET_GPR_U32(ctx, 31, 0x1CAF3Cu);
    ctx->pc = 0x1CAF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF34u;
            // 0x1caf38: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF3Cu; }
        if (ctx->pc != 0x1CAF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF3Cu; }
        if (ctx->pc != 0x1CAF3Cu) { return; }
    }
    ctx->pc = 0x1CAF3Cu;
label_1caf3c:
    // 0x1caf3c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1caf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1caf40:
    // 0x1caf40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1caf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1caf44:
    // 0x1caf44: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1caf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1caf48:
    // 0x1caf48: 0xc06560c  jal         func_195830
label_1caf4c:
    if (ctx->pc == 0x1CAF4Cu) {
        ctx->pc = 0x1CAF4Cu;
            // 0x1caf4c: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x1CAF50u;
        goto label_1caf50;
    }
    ctx->pc = 0x1CAF48u;
    SET_GPR_U32(ctx, 31, 0x1CAF50u);
    ctx->pc = 0x1CAF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF48u;
            // 0x1caf4c: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF50u; }
        if (ctx->pc != 0x1CAF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF50u; }
        if (ctx->pc != 0x1CAF50u) { return; }
    }
    ctx->pc = 0x1CAF50u;
label_1caf50:
    // 0x1caf50: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1caf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1caf54:
    // 0x1caf54: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1caf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1caf58:
    // 0x1caf58: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1caf58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1caf5c:
    // 0x1caf5c: 0x0  nop
    ctx->pc = 0x1caf5cu;
    // NOP
label_1caf60:
    // 0x1caf60: 0x0  nop
    ctx->pc = 0x1caf60u;
    // NOP
label_1caf64:
    // 0x1caf64: 0x1010  mfhi        $v0
    ctx->pc = 0x1caf64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1caf68:
    // 0x1caf68: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_1caf6c:
    if (ctx->pc == 0x1CAF6Cu) {
        ctx->pc = 0x1CAF70u;
        goto label_1caf70;
    }
    ctx->pc = 0x1CAF68u;
    {
        const bool branch_taken_0x1caf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caf68) {
            ctx->pc = 0x1CB050u;
            goto label_1cb050;
        }
    }
    ctx->pc = 0x1CAF70u;
label_1caf70:
    // 0x1caf70: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1caf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1caf74:
    // 0x1caf74: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1caf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1caf78:
    // 0x1caf78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1caf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1caf7c:
    // 0x1caf7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1caf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1caf80:
    // 0x1caf80: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1caf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1caf84:
    // 0x1caf84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1caf84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1caf88:
    // 0x1caf88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1caf88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1caf8c:
    // 0x1caf8c: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1caf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1caf90:
    // 0x1caf90: 0xc0655dc  jal         func_195770
label_1caf94:
    if (ctx->pc == 0x1CAF94u) {
        ctx->pc = 0x1CAF94u;
            // 0x1caf94: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CAF98u;
        goto label_1caf98;
    }
    ctx->pc = 0x1CAF90u;
    SET_GPR_U32(ctx, 31, 0x1CAF98u);
    ctx->pc = 0x1CAF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF90u;
            // 0x1caf94: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF98u; }
        if (ctx->pc != 0x1CAF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF98u; }
        if (ctx->pc != 0x1CAF98u) { return; }
    }
    ctx->pc = 0x1CAF98u;
label_1caf98:
    // 0x1caf98: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1caf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1caf9c:
    // 0x1caf9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1caf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cafa0:
    // 0x1cafa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cafa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cafa4:
    // 0x1cafa4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cafa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cafa8:
    // 0x1cafa8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cafa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cafac:
    // 0x1cafac: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1cafacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1cafb0:
    // 0x1cafb0: 0xc0655dc  jal         func_195770
label_1cafb4:
    if (ctx->pc == 0x1CAFB4u) {
        ctx->pc = 0x1CAFB4u;
            // 0x1cafb4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CAFB8u;
        goto label_1cafb8;
    }
    ctx->pc = 0x1CAFB0u;
    SET_GPR_U32(ctx, 31, 0x1CAFB8u);
    ctx->pc = 0x1CAFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAFB0u;
            // 0x1cafb4: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFB8u; }
        if (ctx->pc != 0x1CAFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFB8u; }
        if (ctx->pc != 0x1CAFB8u) { return; }
    }
    ctx->pc = 0x1CAFB8u;
label_1cafb8:
    // 0x1cafb8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cafb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cafbc:
    // 0x1cafbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cafc0:
    // 0x1cafc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cafc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cafc4:
    // 0x1cafc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cafc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cafc8:
    // 0x1cafc8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cafcc:
    // 0x1cafcc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cafccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1cafd0:
    // 0x1cafd0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cafd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cafd4:
    // 0x1cafd4: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x1cafd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_1cafd8:
    // 0x1cafd8: 0xc0655dc  jal         func_195770
label_1cafdc:
    if (ctx->pc == 0x1CAFDCu) {
        ctx->pc = 0x1CAFDCu;
            // 0x1cafdc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CAFE0u;
        goto label_1cafe0;
    }
    ctx->pc = 0x1CAFD8u;
    SET_GPR_U32(ctx, 31, 0x1CAFE0u);
    ctx->pc = 0x1CAFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAFD8u;
            // 0x1cafdc: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFE0u; }
        if (ctx->pc != 0x1CAFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFE0u; }
        if (ctx->pc != 0x1CAFE0u) { return; }
    }
    ctx->pc = 0x1CAFE0u;
label_1cafe0:
    // 0x1cafe0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cafe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cafe4:
    // 0x1cafe4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1cafe8:
    // 0x1cafe8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cafe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cafec:
    // 0x1cafec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cafecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1caff0:
    // 0x1caff0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1caff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1caff4:
    // 0x1caff4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1caff4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1caff8:
    // 0x1caff8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1caff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1caffc:
    // 0x1caffc: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1caffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1cb000:
    // 0x1cb000: 0xc0655dc  jal         func_195770
label_1cb004:
    if (ctx->pc == 0x1CB004u) {
        ctx->pc = 0x1CB004u;
            // 0x1cb004: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CB008u;
        goto label_1cb008;
    }
    ctx->pc = 0x1CB000u;
    SET_GPR_U32(ctx, 31, 0x1CB008u);
    ctx->pc = 0x1CB004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB000u;
            // 0x1cb004: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB008u; }
        if (ctx->pc != 0x1CB008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB008u; }
        if (ctx->pc != 0x1CB008u) { return; }
    }
    ctx->pc = 0x1CB008u;
label_1cb008:
    // 0x1cb008: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cb008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cb00c:
    // 0x1cb00c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cb010:
    // 0x1cb010: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cb010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cb014:
    // 0x1cb014: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb018:
    // 0x1cb018: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cb018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cb01c:
    // 0x1cb01c: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1cb01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1cb020:
    // 0x1cb020: 0xc0655dc  jal         func_195770
label_1cb024:
    if (ctx->pc == 0x1CB024u) {
        ctx->pc = 0x1CB024u;
            // 0x1cb024: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CB028u;
        goto label_1cb028;
    }
    ctx->pc = 0x1CB020u;
    SET_GPR_U32(ctx, 31, 0x1CB028u);
    ctx->pc = 0x1CB024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB020u;
            // 0x1cb024: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB028u; }
        if (ctx->pc != 0x1CB028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB028u; }
        if (ctx->pc != 0x1CB028u) { return; }
    }
    ctx->pc = 0x1CB028u;
label_1cb028:
    // 0x1cb028: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cb028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cb02c:
    // 0x1cb02c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cb030:
    // 0x1cb030: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cb030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cb034:
    // 0x1cb034: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb038:
    // 0x1cb038: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cb038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cb03c:
    // 0x1cb03c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cb03cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1cb040:
    // 0x1cb040: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cb040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cb044:
    // 0x1cb044: 0x2484ffba  addiu       $a0, $a0, -0x46
    ctx->pc = 0x1cb044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967226));
label_1cb048:
    // 0x1cb048: 0xc0655dc  jal         func_195770
label_1cb04c:
    if (ctx->pc == 0x1CB04Cu) {
        ctx->pc = 0x1CB04Cu;
            // 0x1cb04c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1CB050u;
        goto label_1cb050;
    }
    ctx->pc = 0x1CB048u;
    SET_GPR_U32(ctx, 31, 0x1CB050u);
    ctx->pc = 0x1CB04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB048u;
            // 0x1cb04c: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB050u; }
        if (ctx->pc != 0x1CB050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB050u; }
        if (ctx->pc != 0x1CB050u) { return; }
    }
    ctx->pc = 0x1CB050u;
label_1cb050:
    // 0x1cb050: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1cb050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cb054:
    // 0x1cb054: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1cb054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1cb058:
    // 0x1cb058: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1cb058u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cb05c:
    // 0x1cb05c: 0x0  nop
    ctx->pc = 0x1cb05cu;
    // NOP
label_1cb060:
    // 0x1cb060: 0x0  nop
    ctx->pc = 0x1cb060u;
    // NOP
label_1cb064:
    // 0x1cb064: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb064u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb068:
    // 0x1cb068: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_1cb06c:
    if (ctx->pc == 0x1CB06Cu) {
        ctx->pc = 0x1CB06Cu;
            // 0x1cb06c: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->pc = 0x1CB070u;
        goto label_1cb070;
    }
    ctx->pc = 0x1CB068u;
    {
        const bool branch_taken_0x1cb068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB068u;
            // 0x1cb06c: 0x3c02bf19  lui         $v0, 0xBF19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb068) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CB070u;
label_1cb070:
    // 0x1cb070: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cb070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cb074:
    // 0x1cb074: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cb074u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1cb078:
    // 0x1cb078: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cb078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cb07c:
    // 0x1cb07c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb080:
    // 0x1cb080: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1cb080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1cb084:
    // 0x1cb084: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cb084u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1cb088:
    // 0x1cb088: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cb088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cb08c:
    // 0x1cb08c: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x1cb08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_1cb090:
    // 0x1cb090: 0xc0655dc  jal         func_195770
label_1cb094:
    if (ctx->pc == 0x1CB094u) {
        ctx->pc = 0x1CB094u;
            // 0x1cb094: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CB098u;
        goto label_1cb098;
    }
    ctx->pc = 0x1CB090u;
    SET_GPR_U32(ctx, 31, 0x1CB098u);
    ctx->pc = 0x1CB094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB090u;
            // 0x1cb094: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB098u; }
        if (ctx->pc != 0x1CB098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB098u; }
        if (ctx->pc != 0x1CB098u) { return; }
    }
    ctx->pc = 0x1CB098u;
label_1cb098:
    // 0x1cb098: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cb098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cb09c:
    // 0x1cb09c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cb09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cb0a0:
    // 0x1cb0a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cb0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cb0a4:
    // 0x1cb0a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cb0a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1cb0a8:
    // 0x1cb0a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb0ac:
    // 0x1cb0ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cb0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cb0b0:
    // 0x1cb0b0: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x1cb0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_1cb0b4:
    // 0x1cb0b4: 0xc0655dc  jal         func_195770
label_1cb0b8:
    if (ctx->pc == 0x1CB0B8u) {
        ctx->pc = 0x1CB0B8u;
            // 0x1cb0b8: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CB0BCu;
        goto label_1cb0bc;
    }
    ctx->pc = 0x1CB0B4u;
    SET_GPR_U32(ctx, 31, 0x1CB0BCu);
    ctx->pc = 0x1CB0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0B4u;
            // 0x1cb0b8: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0BCu; }
        if (ctx->pc != 0x1CB0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0BCu; }
        if (ctx->pc != 0x1CB0BCu) { return; }
    }
    ctx->pc = 0x1CB0BCu;
label_1cb0bc:
    // 0x1cb0bc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cb0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cb0c0:
    // 0x1cb0c0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1cb0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1cb0c4:
    // 0x1cb0c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cb0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cb0c8:
    // 0x1cb0c8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cb0c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1cb0cc:
    // 0x1cb0cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb0d0:
    // 0x1cb0d0: 0x0  nop
    ctx->pc = 0x1cb0d0u;
    // NOP
label_1cb0d4:
    // 0x1cb0d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb0d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb0d8:
    // 0x1cb0d8: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x1cb0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_1cb0dc:
    // 0x1cb0dc: 0xc0655dc  jal         func_195770
label_1cb0e0:
    if (ctx->pc == 0x1CB0E0u) {
        ctx->pc = 0x1CB0E0u;
            // 0x1cb0e0: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CB0E4u;
        goto label_1cb0e4;
    }
    ctx->pc = 0x1CB0DCu;
    SET_GPR_U32(ctx, 31, 0x1CB0E4u);
    ctx->pc = 0x1CB0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0DCu;
            // 0x1cb0e0: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0E4u; }
        if (ctx->pc != 0x1CB0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0E4u; }
        if (ctx->pc != 0x1CB0E4u) { return; }
    }
    ctx->pc = 0x1CB0E4u;
label_1cb0e4:
    // 0x1cb0e4: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1cb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_1cb0e8:
    // 0x1cb0e8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cb0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cb0ec:
    // 0x1cb0ec: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cb0ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1cb0f0:
    // 0x1cb0f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cb0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cb0f4:
    // 0x1cb0f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb0f8:
    // 0x1cb0f8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1cb0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1cb0fc:
    // 0x1cb0fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cb0fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1cb100:
    // 0x1cb100: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cb100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cb104:
    // 0x1cb104: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x1cb104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_1cb108:
    // 0x1cb108: 0xc0655dc  jal         func_195770
label_1cb10c:
    if (ctx->pc == 0x1CB10Cu) {
        ctx->pc = 0x1CB10Cu;
            // 0x1cb10c: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CB110u;
        goto label_1cb110;
    }
    ctx->pc = 0x1CB108u;
    SET_GPR_U32(ctx, 31, 0x1CB110u);
    ctx->pc = 0x1CB10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB108u;
            // 0x1cb10c: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB110u; }
        if (ctx->pc != 0x1CB110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB110u; }
        if (ctx->pc != 0x1CB110u) { return; }
    }
    ctx->pc = 0x1CB110u;
label_1cb110:
    // 0x1cb110: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cb110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cb114:
    // 0x1cb114: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cb114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cb118:
    // 0x1cb118: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cb118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cb11c:
    // 0x1cb11c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cb11cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1cb120:
    // 0x1cb120: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb124:
    // 0x1cb124: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cb124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cb128:
    // 0x1cb128: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x1cb128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_1cb12c:
    // 0x1cb12c: 0xc0655dc  jal         func_195770
label_1cb130:
    if (ctx->pc == 0x1CB130u) {
        ctx->pc = 0x1CB130u;
            // 0x1cb130: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CB134u;
        goto label_1cb134;
    }
    ctx->pc = 0x1CB12Cu;
    SET_GPR_U32(ctx, 31, 0x1CB134u);
    ctx->pc = 0x1CB130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB12Cu;
            // 0x1cb130: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB134u; }
        if (ctx->pc != 0x1CB134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB134u; }
        if (ctx->pc != 0x1CB134u) { return; }
    }
    ctx->pc = 0x1CB134u;
label_1cb134:
    // 0x1cb134: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1cb134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cb138:
    // 0x1cb138: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1cb138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1cb13c:
    // 0x1cb13c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cb13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cb140:
    // 0x1cb140: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cb140u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1cb144:
    // 0x1cb144: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb148:
    // 0x1cb148: 0x0  nop
    ctx->pc = 0x1cb148u;
    // NOP
label_1cb14c:
    // 0x1cb14c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb14cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb150:
    // 0x1cb150: 0x2484ffce  addiu       $a0, $a0, -0x32
    ctx->pc = 0x1cb150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
label_1cb154:
    // 0x1cb154: 0xc0655dc  jal         func_195770
label_1cb158:
    if (ctx->pc == 0x1CB158u) {
        ctx->pc = 0x1CB158u;
            // 0x1cb158: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->pc = 0x1CB15Cu;
        goto label_1cb15c;
    }
    ctx->pc = 0x1CB154u;
    SET_GPR_U32(ctx, 31, 0x1CB15Cu);
    ctx->pc = 0x1CB158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB154u;
            // 0x1cb158: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB15Cu; }
        if (ctx->pc != 0x1CB15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB15Cu; }
        if (ctx->pc != 0x1CB15Cu) { return; }
    }
    ctx->pc = 0x1CB15Cu;
label_1cb15c:
    // 0x1cb15c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1cb160:
    if (ctx->pc == 0x1CB160u) {
        ctx->pc = 0x1CB164u;
        goto label_1cb164;
    }
    ctx->pc = 0x1CB15Cu;
    {
        const bool branch_taken_0x1cb15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb15c) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CB164u;
label_1cb164:
    // 0x1cb164: 0x0  nop
    ctx->pc = 0x1cb164u;
    // NOP
label_1cb168:
    // 0x1cb168: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cb168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cb16c:
    // 0x1cb16c: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
label_1cb170:
    if (ctx->pc == 0x1CB170u) {
        ctx->pc = 0x1CB174u;
        goto label_1cb174;
    }
    ctx->pc = 0x1CB16Cu;
    {
        const bool branch_taken_0x1cb16c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb16c) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CB174u;
label_1cb174:
    // 0x1cb174: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1cb174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb178:
    // 0x1cb178: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1cb178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1cb17c:
    // 0x1cb17c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cb17cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cb180:
    // 0x1cb180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb184:
    // 0x1cb184: 0x0  nop
    ctx->pc = 0x1cb184u;
    // NOP
label_1cb188:
    // 0x1cb188: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cb188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cb18c:
    // 0x1cb18c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1cb18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1cb190:
    // 0x1cb190: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1cb190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cb194:
    // 0x1cb194: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1cb194u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cb198:
    // 0x1cb198: 0x0  nop
    ctx->pc = 0x1cb198u;
    // NOP
label_1cb19c:
    // 0x1cb19c: 0x0  nop
    ctx->pc = 0x1cb19cu;
    // NOP
label_1cb1a0:
    // 0x1cb1a0: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb1a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb1a4:
    // 0x1cb1a4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1cb1a8:
    if (ctx->pc == 0x1CB1A8u) {
        ctx->pc = 0x1CB1ACu;
        goto label_1cb1ac;
    }
    ctx->pc = 0x1CB1A4u;
    {
        const bool branch_taken_0x1cb1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb1a4) {
            ctx->pc = 0x1CB1D8u;
            goto label_1cb1d8;
        }
    }
    ctx->pc = 0x1CB1ACu;
label_1cb1ac:
    // 0x1cb1ac: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cb1b0:
    // 0x1cb1b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cb1b4:
    // 0x1cb1b4: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1cb1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_1cb1b8:
    // 0x1cb1b8: 0xc065590  jal         func_195640
label_1cb1bc:
    if (ctx->pc == 0x1CB1BCu) {
        ctx->pc = 0x1CB1BCu;
            // 0x1cb1bc: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1CB1C0u;
        goto label_1cb1c0;
    }
    ctx->pc = 0x1CB1B8u;
    SET_GPR_U32(ctx, 31, 0x1CB1C0u);
    ctx->pc = 0x1CB1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1B8u;
            // 0x1cb1bc: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1C0u; }
        if (ctx->pc != 0x1CB1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1C0u; }
        if (ctx->pc != 0x1CB1C0u) { return; }
    }
    ctx->pc = 0x1CB1C0u;
label_1cb1c0:
    // 0x1cb1c0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cb1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cb1c4:
    // 0x1cb1c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cb1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cb1c8:
    // 0x1cb1c8: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1cb1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_1cb1cc:
    // 0x1cb1cc: 0xc065590  jal         func_195640
label_1cb1d0:
    if (ctx->pc == 0x1CB1D0u) {
        ctx->pc = 0x1CB1D0u;
            // 0x1cb1d0: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1CB1D4u;
        goto label_1cb1d4;
    }
    ctx->pc = 0x1CB1CCu;
    SET_GPR_U32(ctx, 31, 0x1CB1D4u);
    ctx->pc = 0x1CB1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1CCu;
            // 0x1cb1d0: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1D4u; }
        if (ctx->pc != 0x1CB1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1D4u; }
        if (ctx->pc != 0x1CB1D4u) { return; }
    }
    ctx->pc = 0x1CB1D4u;
label_1cb1d4:
    // 0x1cb1d4: 0x0  nop
    ctx->pc = 0x1cb1d4u;
    // NOP
label_1cb1d8:
    // 0x1cb1d8: 0xc04b788  jal         func_12DE20
label_1cb1dc:
    if (ctx->pc == 0x1CB1DCu) {
        ctx->pc = 0x1CB1DCu;
            // 0x1cb1dc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CB1E0u;
        goto label_1cb1e0;
    }
    ctx->pc = 0x1CB1D8u;
    SET_GPR_U32(ctx, 31, 0x1CB1E0u);
    ctx->pc = 0x1CB1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1D8u;
            // 0x1cb1dc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1E0u; }
        if (ctx->pc != 0x1CB1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1E0u; }
        if (ctx->pc != 0x1CB1E0u) { return; }
    }
    ctx->pc = 0x1CB1E0u;
label_1cb1e0:
    // 0x1cb1e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cb1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb1e4:
    // 0x1cb1e4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1cb1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cb1e8:
    // 0x1cb1e8: 0xc04b7da  jal         func_12DF68
label_1cb1ec:
    if (ctx->pc == 0x1CB1ECu) {
        ctx->pc = 0x1CB1ECu;
            // 0x1cb1ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1F0u;
        goto label_1cb1f0;
    }
    ctx->pc = 0x1CB1E8u;
    SET_GPR_U32(ctx, 31, 0x1CB1F0u);
    ctx->pc = 0x1CB1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1E8u;
            // 0x1cb1ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1F0u; }
        if (ctx->pc != 0x1CB1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1F0u; }
        if (ctx->pc != 0x1CB1F0u) { return; }
    }
    ctx->pc = 0x1CB1F0u;
label_1cb1f0:
    // 0x1cb1f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cb1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb1f4:
    // 0x1cb1f4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1cb1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cb1f8:
    // 0x1cb1f8: 0xc04b804  jal         func_12E010
label_1cb1fc:
    if (ctx->pc == 0x1CB1FCu) {
        ctx->pc = 0x1CB1FCu;
            // 0x1cb1fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB200u;
        goto label_1cb200;
    }
    ctx->pc = 0x1CB1F8u;
    SET_GPR_U32(ctx, 31, 0x1CB200u);
    ctx->pc = 0x1CB1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1F8u;
            // 0x1cb1fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB200u; }
        if (ctx->pc != 0x1CB200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB200u; }
        if (ctx->pc != 0x1CB200u) { return; }
    }
    ctx->pc = 0x1CB200u;
label_1cb200:
    // 0x1cb200: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cb200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb204:
    // 0x1cb204: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1cb204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cb208:
    // 0x1cb208: 0xc04b7b0  jal         func_12DEC0
label_1cb20c:
    if (ctx->pc == 0x1CB20Cu) {
        ctx->pc = 0x1CB20Cu;
            // 0x1cb20c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB210u;
        goto label_1cb210;
    }
    ctx->pc = 0x1CB208u;
    SET_GPR_U32(ctx, 31, 0x1CB210u);
    ctx->pc = 0x1CB20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB208u;
            // 0x1cb20c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB210u; }
        if (ctx->pc != 0x1CB210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB210u; }
        if (ctx->pc != 0x1CB210u) { return; }
    }
    ctx->pc = 0x1CB210u;
label_1cb210:
    // 0x1cb210: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cb210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb214:
    // 0x1cb214: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1cb214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb218:
    // 0x1cb218: 0xc04b75e  jal         func_12DD78
label_1cb21c:
    if (ctx->pc == 0x1CB21Cu) {
        ctx->pc = 0x1CB21Cu;
            // 0x1cb21c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1CB220u;
        goto label_1cb220;
    }
    ctx->pc = 0x1CB218u;
    SET_GPR_U32(ctx, 31, 0x1CB220u);
    ctx->pc = 0x1CB21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB218u;
            // 0x1cb21c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB220u; }
        if (ctx->pc != 0x1CB220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB220u; }
        if (ctx->pc != 0x1CB220u) { return; }
    }
    ctx->pc = 0x1CB220u;
label_1cb220:
    // 0x1cb220: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1cb220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1cb224:
    // 0x1cb224: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cb224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cb228:
    // 0x1cb228: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1cb228u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1cb22c:
    // 0x1cb22c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1cb230:
    if (ctx->pc == 0x1CB230u) {
        ctx->pc = 0x1CB234u;
        goto label_1cb234;
    }
    ctx->pc = 0x1CB22Cu;
    {
        const bool branch_taken_0x1cb22c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb22c) {
            ctx->pc = 0x1CB280u;
            goto label_1cb280;
        }
    }
    ctx->pc = 0x1CB234u;
label_1cb234:
    // 0x1cb234: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1cb234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1cb238:
    // 0x1cb238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1cb23c:
    if (ctx->pc == 0x1CB23Cu) {
        ctx->pc = 0x1CB240u;
        goto label_1cb240;
    }
    ctx->pc = 0x1CB238u;
    {
        const bool branch_taken_0x1cb238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb238) {
            ctx->pc = 0x1CB250u;
            goto label_1cb250;
        }
    }
    ctx->pc = 0x1CB240u;
label_1cb240:
    // 0x1cb240: 0xc0604f0  jal         func_1813C0
label_1cb244:
    if (ctx->pc == 0x1CB244u) {
        ctx->pc = 0x1CB244u;
            // 0x1cb244: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CB248u;
        goto label_1cb248;
    }
    ctx->pc = 0x1CB240u;
    SET_GPR_U32(ctx, 31, 0x1CB248u);
    ctx->pc = 0x1CB244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB240u;
            // 0x1cb244: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB248u; }
        if (ctx->pc != 0x1CB248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB248u; }
        if (ctx->pc != 0x1CB248u) { return; }
    }
    ctx->pc = 0x1CB248u;
label_1cb248:
    // 0x1cb248: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cb24c:
    if (ctx->pc == 0x1CB24Cu) {
        ctx->pc = 0x1CB250u;
        goto label_1cb250;
    }
    ctx->pc = 0x1CB248u;
    {
        const bool branch_taken_0x1cb248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb248) {
            ctx->pc = 0x1CB258u;
            goto label_1cb258;
        }
    }
    ctx->pc = 0x1CB250u;
label_1cb250:
    // 0x1cb250: 0xc0604dc  jal         func_181370
label_1cb254:
    if (ctx->pc == 0x1CB254u) {
        ctx->pc = 0x1CB254u;
            // 0x1cb254: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CB258u;
        goto label_1cb258;
    }
    ctx->pc = 0x1CB250u;
    SET_GPR_U32(ctx, 31, 0x1CB258u);
    ctx->pc = 0x1CB254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB250u;
            // 0x1cb254: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB258u; }
        if (ctx->pc != 0x1CB258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB258u; }
        if (ctx->pc != 0x1CB258u) { return; }
    }
    ctx->pc = 0x1CB258u;
label_1cb258:
    // 0x1cb258: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1cb258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1cb25c:
    // 0x1cb25c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1cb260:
    if (ctx->pc == 0x1CB260u) {
        ctx->pc = 0x1CB264u;
        goto label_1cb264;
    }
    ctx->pc = 0x1CB25Cu;
    {
        const bool branch_taken_0x1cb25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb25c) {
            ctx->pc = 0x1CB270u;
            goto label_1cb270;
        }
    }
    ctx->pc = 0x1CB264u;
label_1cb264:
    // 0x1cb264: 0x1000000a  b           . + 4 + (0xA << 2)
label_1cb268:
    if (ctx->pc == 0x1CB268u) {
        ctx->pc = 0x1CB268u;
            // 0x1cb268: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1CB26Cu;
        goto label_1cb26c;
    }
    ctx->pc = 0x1CB264u;
    {
        const bool branch_taken_0x1cb264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB264u;
            // 0x1cb268: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb264) {
            ctx->pc = 0x1CB290u;
            goto label_1cb290;
        }
    }
    ctx->pc = 0x1CB26Cu;
label_1cb26c:
    // 0x1cb26c: 0x0  nop
    ctx->pc = 0x1cb26cu;
    // NOP
label_1cb270:
    // 0x1cb270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb274:
    // 0x1cb274: 0x10000006  b           . + 4 + (0x6 << 2)
label_1cb278:
    if (ctx->pc == 0x1CB278u) {
        ctx->pc = 0x1CB278u;
            // 0x1cb278: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->pc = 0x1CB27Cu;
        goto label_1cb27c;
    }
    ctx->pc = 0x1CB274u;
    {
        const bool branch_taken_0x1cb274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB274u;
            // 0x1cb278: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb274) {
            ctx->pc = 0x1CB290u;
            goto label_1cb290;
        }
    }
    ctx->pc = 0x1CB27Cu;
label_1cb27c:
    // 0x1cb27c: 0x0  nop
    ctx->pc = 0x1cb27cu;
    // NOP
label_1cb280:
    // 0x1cb280: 0xc0604dc  jal         func_181370
label_1cb284:
    if (ctx->pc == 0x1CB284u) {
        ctx->pc = 0x1CB284u;
            // 0x1cb284: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CB288u;
        goto label_1cb288;
    }
    ctx->pc = 0x1CB280u;
    SET_GPR_U32(ctx, 31, 0x1CB288u);
    ctx->pc = 0x1CB284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB280u;
            // 0x1cb284: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB288u; }
        if (ctx->pc != 0x1CB288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB288u; }
        if (ctx->pc != 0x1CB288u) { return; }
    }
    ctx->pc = 0x1CB288u;
label_1cb288:
    // 0x1cb288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb28c:
    // 0x1cb28c: 0xae030110  sw          $v1, 0x110($s0)
    ctx->pc = 0x1cb28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
label_1cb290:
    // 0x1cb290: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1cb290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1cb294:
    // 0x1cb294: 0x3c03c270  lui         $v1, 0xC270
    ctx->pc = 0x1cb294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49776 << 16));
label_1cb298:
    // 0x1cb298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb29c:
    // 0x1cb29c: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1cb29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_1cb2a0:
    // 0x1cb2a0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1cb2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cb2a4:
    // 0x1cb2a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cb2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1cb2a8:
    // 0x1cb2a8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1cb2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_1cb2ac:
    // 0x1cb2ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cb2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb2b0:
    // 0x1cb2b0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1cb2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb2b4:
    // 0x1cb2b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb2b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cb2b8:
    // 0x1cb2b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1cb2bc:
    if (ctx->pc == 0x1CB2BCu) {
        ctx->pc = 0x1CB2C0u;
        goto label_1cb2c0;
    }
    ctx->pc = 0x1CB2B8u;
    {
        const bool branch_taken_0x1cb2b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb2b8) {
            ctx->pc = 0x1CB2D8u;
            goto label_1cb2d8;
        }
    }
    ctx->pc = 0x1CB2C0u;
label_1cb2c0:
    // 0x1cb2c0: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1cb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1cb2c4:
    // 0x1cb2c4: 0x40f809  jalr        $v0
label_1cb2c8:
    if (ctx->pc == 0x1CB2C8u) {
        ctx->pc = 0x1CB2C8u;
            // 0x1cb2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2CCu;
        goto label_1cb2cc;
    }
    ctx->pc = 0x1CB2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB2CCu);
        ctx->pc = 0x1CB2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2C4u;
            // 0x1cb2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9CC0u: goto label_1c9cc0;
            case 0x1C9CC4u: goto label_1c9cc4;
            case 0x1C9CC8u: goto label_1c9cc8;
            case 0x1C9CCCu: goto label_1c9ccc;
            case 0x1C9CD0u: goto label_1c9cd0;
            case 0x1C9CD4u: goto label_1c9cd4;
            case 0x1C9CD8u: goto label_1c9cd8;
            case 0x1C9CDCu: goto label_1c9cdc;
            case 0x1C9CE0u: goto label_1c9ce0;
            case 0x1C9CE4u: goto label_1c9ce4;
            case 0x1C9CE8u: goto label_1c9ce8;
            case 0x1C9CECu: goto label_1c9cec;
            case 0x1C9CF0u: goto label_1c9cf0;
            case 0x1C9CF4u: goto label_1c9cf4;
            case 0x1C9CF8u: goto label_1c9cf8;
            case 0x1C9CFCu: goto label_1c9cfc;
            case 0x1C9D00u: goto label_1c9d00;
            case 0x1C9D04u: goto label_1c9d04;
            case 0x1C9D08u: goto label_1c9d08;
            case 0x1C9D0Cu: goto label_1c9d0c;
            case 0x1C9D10u: goto label_1c9d10;
            case 0x1C9D14u: goto label_1c9d14;
            case 0x1C9D18u: goto label_1c9d18;
            case 0x1C9D1Cu: goto label_1c9d1c;
            case 0x1C9D20u: goto label_1c9d20;
            case 0x1C9D24u: goto label_1c9d24;
            case 0x1C9D28u: goto label_1c9d28;
            case 0x1C9D2Cu: goto label_1c9d2c;
            case 0x1C9D30u: goto label_1c9d30;
            case 0x1C9D34u: goto label_1c9d34;
            case 0x1C9D38u: goto label_1c9d38;
            case 0x1C9D3Cu: goto label_1c9d3c;
            case 0x1C9D40u: goto label_1c9d40;
            case 0x1C9D44u: goto label_1c9d44;
            case 0x1C9D48u: goto label_1c9d48;
            case 0x1C9D4Cu: goto label_1c9d4c;
            case 0x1C9D50u: goto label_1c9d50;
            case 0x1C9D54u: goto label_1c9d54;
            case 0x1C9D58u: goto label_1c9d58;
            case 0x1C9D5Cu: goto label_1c9d5c;
            case 0x1C9D60u: goto label_1c9d60;
            case 0x1C9D64u: goto label_1c9d64;
            case 0x1C9D68u: goto label_1c9d68;
            case 0x1C9D6Cu: goto label_1c9d6c;
            case 0x1C9D70u: goto label_1c9d70;
            case 0x1C9D74u: goto label_1c9d74;
            case 0x1C9D78u: goto label_1c9d78;
            case 0x1C9D7Cu: goto label_1c9d7c;
            case 0x1C9D80u: goto label_1c9d80;
            case 0x1C9D84u: goto label_1c9d84;
            case 0x1C9D88u: goto label_1c9d88;
            case 0x1C9D8Cu: goto label_1c9d8c;
            case 0x1C9D90u: goto label_1c9d90;
            case 0x1C9D94u: goto label_1c9d94;
            case 0x1C9D98u: goto label_1c9d98;
            case 0x1C9D9Cu: goto label_1c9d9c;
            case 0x1C9DA0u: goto label_1c9da0;
            case 0x1C9DA4u: goto label_1c9da4;
            case 0x1C9DA8u: goto label_1c9da8;
            case 0x1C9DACu: goto label_1c9dac;
            case 0x1C9DB0u: goto label_1c9db0;
            case 0x1C9DB4u: goto label_1c9db4;
            case 0x1C9DB8u: goto label_1c9db8;
            case 0x1C9DBCu: goto label_1c9dbc;
            case 0x1C9DC0u: goto label_1c9dc0;
            case 0x1C9DC4u: goto label_1c9dc4;
            case 0x1C9DC8u: goto label_1c9dc8;
            case 0x1C9DCCu: goto label_1c9dcc;
            case 0x1C9DD0u: goto label_1c9dd0;
            case 0x1C9DD4u: goto label_1c9dd4;
            case 0x1C9DD8u: goto label_1c9dd8;
            case 0x1C9DDCu: goto label_1c9ddc;
            case 0x1C9DE0u: goto label_1c9de0;
            case 0x1C9DE4u: goto label_1c9de4;
            case 0x1C9DE8u: goto label_1c9de8;
            case 0x1C9DECu: goto label_1c9dec;
            case 0x1C9DF0u: goto label_1c9df0;
            case 0x1C9DF4u: goto label_1c9df4;
            case 0x1C9DF8u: goto label_1c9df8;
            case 0x1C9DFCu: goto label_1c9dfc;
            case 0x1C9E00u: goto label_1c9e00;
            case 0x1C9E04u: goto label_1c9e04;
            case 0x1C9E08u: goto label_1c9e08;
            case 0x1C9E0Cu: goto label_1c9e0c;
            case 0x1C9E10u: goto label_1c9e10;
            case 0x1C9E14u: goto label_1c9e14;
            case 0x1C9E18u: goto label_1c9e18;
            case 0x1C9E1Cu: goto label_1c9e1c;
            case 0x1C9E20u: goto label_1c9e20;
            case 0x1C9E24u: goto label_1c9e24;
            case 0x1C9E28u: goto label_1c9e28;
            case 0x1C9E2Cu: goto label_1c9e2c;
            case 0x1C9E30u: goto label_1c9e30;
            case 0x1C9E34u: goto label_1c9e34;
            case 0x1C9E38u: goto label_1c9e38;
            case 0x1C9E3Cu: goto label_1c9e3c;
            case 0x1C9E40u: goto label_1c9e40;
            case 0x1C9E44u: goto label_1c9e44;
            case 0x1C9E48u: goto label_1c9e48;
            case 0x1C9E4Cu: goto label_1c9e4c;
            case 0x1C9E50u: goto label_1c9e50;
            case 0x1C9E54u: goto label_1c9e54;
            case 0x1C9E58u: goto label_1c9e58;
            case 0x1C9E5Cu: goto label_1c9e5c;
            case 0x1C9E60u: goto label_1c9e60;
            case 0x1C9E64u: goto label_1c9e64;
            case 0x1C9E68u: goto label_1c9e68;
            case 0x1C9E6Cu: goto label_1c9e6c;
            case 0x1C9E70u: goto label_1c9e70;
            case 0x1C9E74u: goto label_1c9e74;
            case 0x1C9E78u: goto label_1c9e78;
            case 0x1C9E7Cu: goto label_1c9e7c;
            case 0x1C9E80u: goto label_1c9e80;
            case 0x1C9E84u: goto label_1c9e84;
            case 0x1C9E88u: goto label_1c9e88;
            case 0x1C9E8Cu: goto label_1c9e8c;
            case 0x1C9E90u: goto label_1c9e90;
            case 0x1C9E94u: goto label_1c9e94;
            case 0x1C9E98u: goto label_1c9e98;
            case 0x1C9E9Cu: goto label_1c9e9c;
            case 0x1C9EA0u: goto label_1c9ea0;
            case 0x1C9EA4u: goto label_1c9ea4;
            case 0x1C9EA8u: goto label_1c9ea8;
            case 0x1C9EACu: goto label_1c9eac;
            case 0x1C9EB0u: goto label_1c9eb0;
            case 0x1C9EB4u: goto label_1c9eb4;
            case 0x1C9EB8u: goto label_1c9eb8;
            case 0x1C9EBCu: goto label_1c9ebc;
            case 0x1C9EC0u: goto label_1c9ec0;
            case 0x1C9EC4u: goto label_1c9ec4;
            case 0x1C9EC8u: goto label_1c9ec8;
            case 0x1C9ECCu: goto label_1c9ecc;
            case 0x1C9ED0u: goto label_1c9ed0;
            case 0x1C9ED4u: goto label_1c9ed4;
            case 0x1C9ED8u: goto label_1c9ed8;
            case 0x1C9EDCu: goto label_1c9edc;
            case 0x1C9EE0u: goto label_1c9ee0;
            case 0x1C9EE4u: goto label_1c9ee4;
            case 0x1C9EE8u: goto label_1c9ee8;
            case 0x1C9EECu: goto label_1c9eec;
            case 0x1C9EF0u: goto label_1c9ef0;
            case 0x1C9EF4u: goto label_1c9ef4;
            case 0x1C9EF8u: goto label_1c9ef8;
            case 0x1C9EFCu: goto label_1c9efc;
            case 0x1C9F00u: goto label_1c9f00;
            case 0x1C9F04u: goto label_1c9f04;
            case 0x1C9F08u: goto label_1c9f08;
            case 0x1C9F0Cu: goto label_1c9f0c;
            case 0x1C9F10u: goto label_1c9f10;
            case 0x1C9F14u: goto label_1c9f14;
            case 0x1C9F18u: goto label_1c9f18;
            case 0x1C9F1Cu: goto label_1c9f1c;
            case 0x1C9F20u: goto label_1c9f20;
            case 0x1C9F24u: goto label_1c9f24;
            case 0x1C9F28u: goto label_1c9f28;
            case 0x1C9F2Cu: goto label_1c9f2c;
            case 0x1C9F30u: goto label_1c9f30;
            case 0x1C9F34u: goto label_1c9f34;
            case 0x1C9F38u: goto label_1c9f38;
            case 0x1C9F3Cu: goto label_1c9f3c;
            case 0x1C9F40u: goto label_1c9f40;
            case 0x1C9F44u: goto label_1c9f44;
            case 0x1C9F48u: goto label_1c9f48;
            case 0x1C9F4Cu: goto label_1c9f4c;
            case 0x1C9F50u: goto label_1c9f50;
            case 0x1C9F54u: goto label_1c9f54;
            case 0x1C9F58u: goto label_1c9f58;
            case 0x1C9F5Cu: goto label_1c9f5c;
            case 0x1C9F60u: goto label_1c9f60;
            case 0x1C9F64u: goto label_1c9f64;
            case 0x1C9F68u: goto label_1c9f68;
            case 0x1C9F6Cu: goto label_1c9f6c;
            case 0x1C9F70u: goto label_1c9f70;
            case 0x1C9F74u: goto label_1c9f74;
            case 0x1C9F78u: goto label_1c9f78;
            case 0x1C9F7Cu: goto label_1c9f7c;
            case 0x1C9F80u: goto label_1c9f80;
            case 0x1C9F84u: goto label_1c9f84;
            case 0x1C9F88u: goto label_1c9f88;
            case 0x1C9F8Cu: goto label_1c9f8c;
            case 0x1C9F90u: goto label_1c9f90;
            case 0x1C9F94u: goto label_1c9f94;
            case 0x1C9F98u: goto label_1c9f98;
            case 0x1C9F9Cu: goto label_1c9f9c;
            case 0x1C9FA0u: goto label_1c9fa0;
            case 0x1C9FA4u: goto label_1c9fa4;
            case 0x1C9FA8u: goto label_1c9fa8;
            case 0x1C9FACu: goto label_1c9fac;
            case 0x1C9FB0u: goto label_1c9fb0;
            case 0x1C9FB4u: goto label_1c9fb4;
            case 0x1C9FB8u: goto label_1c9fb8;
            case 0x1C9FBCu: goto label_1c9fbc;
            case 0x1C9FC0u: goto label_1c9fc0;
            case 0x1C9FC4u: goto label_1c9fc4;
            case 0x1C9FC8u: goto label_1c9fc8;
            case 0x1C9FCCu: goto label_1c9fcc;
            case 0x1C9FD0u: goto label_1c9fd0;
            case 0x1C9FD4u: goto label_1c9fd4;
            case 0x1C9FD8u: goto label_1c9fd8;
            case 0x1C9FDCu: goto label_1c9fdc;
            case 0x1C9FE0u: goto label_1c9fe0;
            case 0x1C9FE4u: goto label_1c9fe4;
            case 0x1C9FE8u: goto label_1c9fe8;
            case 0x1C9FECu: goto label_1c9fec;
            case 0x1C9FF0u: goto label_1c9ff0;
            case 0x1C9FF4u: goto label_1c9ff4;
            case 0x1C9FF8u: goto label_1c9ff8;
            case 0x1C9FFCu: goto label_1c9ffc;
            case 0x1CA000u: goto label_1ca000;
            case 0x1CA004u: goto label_1ca004;
            case 0x1CA008u: goto label_1ca008;
            case 0x1CA00Cu: goto label_1ca00c;
            case 0x1CA010u: goto label_1ca010;
            case 0x1CA014u: goto label_1ca014;
            case 0x1CA018u: goto label_1ca018;
            case 0x1CA01Cu: goto label_1ca01c;
            case 0x1CA020u: goto label_1ca020;
            case 0x1CA024u: goto label_1ca024;
            case 0x1CA028u: goto label_1ca028;
            case 0x1CA02Cu: goto label_1ca02c;
            case 0x1CA030u: goto label_1ca030;
            case 0x1CA034u: goto label_1ca034;
            case 0x1CA038u: goto label_1ca038;
            case 0x1CA03Cu: goto label_1ca03c;
            case 0x1CA040u: goto label_1ca040;
            case 0x1CA044u: goto label_1ca044;
            case 0x1CA048u: goto label_1ca048;
            case 0x1CA04Cu: goto label_1ca04c;
            case 0x1CA050u: goto label_1ca050;
            case 0x1CA054u: goto label_1ca054;
            case 0x1CA058u: goto label_1ca058;
            case 0x1CA05Cu: goto label_1ca05c;
            case 0x1CA060u: goto label_1ca060;
            case 0x1CA064u: goto label_1ca064;
            case 0x1CA068u: goto label_1ca068;
            case 0x1CA06Cu: goto label_1ca06c;
            case 0x1CA070u: goto label_1ca070;
            case 0x1CA074u: goto label_1ca074;
            case 0x1CA078u: goto label_1ca078;
            case 0x1CA07Cu: goto label_1ca07c;
            case 0x1CA080u: goto label_1ca080;
            case 0x1CA084u: goto label_1ca084;
            case 0x1CA088u: goto label_1ca088;
            case 0x1CA08Cu: goto label_1ca08c;
            case 0x1CA090u: goto label_1ca090;
            case 0x1CA094u: goto label_1ca094;
            case 0x1CA098u: goto label_1ca098;
            case 0x1CA09Cu: goto label_1ca09c;
            case 0x1CA0A0u: goto label_1ca0a0;
            case 0x1CA0A4u: goto label_1ca0a4;
            case 0x1CA0A8u: goto label_1ca0a8;
            case 0x1CA0ACu: goto label_1ca0ac;
            case 0x1CA0B0u: goto label_1ca0b0;
            case 0x1CA0B4u: goto label_1ca0b4;
            case 0x1CA0B8u: goto label_1ca0b8;
            case 0x1CA0BCu: goto label_1ca0bc;
            case 0x1CA0C0u: goto label_1ca0c0;
            case 0x1CA0C4u: goto label_1ca0c4;
            case 0x1CA0C8u: goto label_1ca0c8;
            case 0x1CA0CCu: goto label_1ca0cc;
            case 0x1CA0D0u: goto label_1ca0d0;
            case 0x1CA0D4u: goto label_1ca0d4;
            case 0x1CA0D8u: goto label_1ca0d8;
            case 0x1CA0DCu: goto label_1ca0dc;
            case 0x1CA0E0u: goto label_1ca0e0;
            case 0x1CA0E4u: goto label_1ca0e4;
            case 0x1CA0E8u: goto label_1ca0e8;
            case 0x1CA0ECu: goto label_1ca0ec;
            case 0x1CA0F0u: goto label_1ca0f0;
            case 0x1CA0F4u: goto label_1ca0f4;
            case 0x1CA0F8u: goto label_1ca0f8;
            case 0x1CA0FCu: goto label_1ca0fc;
            case 0x1CA100u: goto label_1ca100;
            case 0x1CA104u: goto label_1ca104;
            case 0x1CA108u: goto label_1ca108;
            case 0x1CA10Cu: goto label_1ca10c;
            case 0x1CA110u: goto label_1ca110;
            case 0x1CA114u: goto label_1ca114;
            case 0x1CA118u: goto label_1ca118;
            case 0x1CA11Cu: goto label_1ca11c;
            case 0x1CA120u: goto label_1ca120;
            case 0x1CA124u: goto label_1ca124;
            case 0x1CA128u: goto label_1ca128;
            case 0x1CA12Cu: goto label_1ca12c;
            case 0x1CA130u: goto label_1ca130;
            case 0x1CA134u: goto label_1ca134;
            case 0x1CA138u: goto label_1ca138;
            case 0x1CA13Cu: goto label_1ca13c;
            case 0x1CA140u: goto label_1ca140;
            case 0x1CA144u: goto label_1ca144;
            case 0x1CA148u: goto label_1ca148;
            case 0x1CA14Cu: goto label_1ca14c;
            case 0x1CA150u: goto label_1ca150;
            case 0x1CA154u: goto label_1ca154;
            case 0x1CA158u: goto label_1ca158;
            case 0x1CA15Cu: goto label_1ca15c;
            case 0x1CA160u: goto label_1ca160;
            case 0x1CA164u: goto label_1ca164;
            case 0x1CA168u: goto label_1ca168;
            case 0x1CA16Cu: goto label_1ca16c;
            case 0x1CA170u: goto label_1ca170;
            case 0x1CA174u: goto label_1ca174;
            case 0x1CA178u: goto label_1ca178;
            case 0x1CA17Cu: goto label_1ca17c;
            case 0x1CA180u: goto label_1ca180;
            case 0x1CA184u: goto label_1ca184;
            case 0x1CA188u: goto label_1ca188;
            case 0x1CA18Cu: goto label_1ca18c;
            case 0x1CA190u: goto label_1ca190;
            case 0x1CA194u: goto label_1ca194;
            case 0x1CA198u: goto label_1ca198;
            case 0x1CA19Cu: goto label_1ca19c;
            case 0x1CA1A0u: goto label_1ca1a0;
            case 0x1CA1A4u: goto label_1ca1a4;
            case 0x1CA1A8u: goto label_1ca1a8;
            case 0x1CA1ACu: goto label_1ca1ac;
            case 0x1CA1B0u: goto label_1ca1b0;
            case 0x1CA1B4u: goto label_1ca1b4;
            case 0x1CA1B8u: goto label_1ca1b8;
            case 0x1CA1BCu: goto label_1ca1bc;
            case 0x1CA1C0u: goto label_1ca1c0;
            case 0x1CA1C4u: goto label_1ca1c4;
            case 0x1CA1C8u: goto label_1ca1c8;
            case 0x1CA1CCu: goto label_1ca1cc;
            case 0x1CA1D0u: goto label_1ca1d0;
            case 0x1CA1D4u: goto label_1ca1d4;
            case 0x1CA1D8u: goto label_1ca1d8;
            case 0x1CA1DCu: goto label_1ca1dc;
            case 0x1CA1E0u: goto label_1ca1e0;
            case 0x1CA1E4u: goto label_1ca1e4;
            case 0x1CA1E8u: goto label_1ca1e8;
            case 0x1CA1ECu: goto label_1ca1ec;
            case 0x1CA1F0u: goto label_1ca1f0;
            case 0x1CA1F4u: goto label_1ca1f4;
            case 0x1CA1F8u: goto label_1ca1f8;
            case 0x1CA1FCu: goto label_1ca1fc;
            case 0x1CA200u: goto label_1ca200;
            case 0x1CA204u: goto label_1ca204;
            case 0x1CA208u: goto label_1ca208;
            case 0x1CA20Cu: goto label_1ca20c;
            case 0x1CA210u: goto label_1ca210;
            case 0x1CA214u: goto label_1ca214;
            case 0x1CA218u: goto label_1ca218;
            case 0x1CA21Cu: goto label_1ca21c;
            case 0x1CA220u: goto label_1ca220;
            case 0x1CA224u: goto label_1ca224;
            case 0x1CA228u: goto label_1ca228;
            case 0x1CA22Cu: goto label_1ca22c;
            case 0x1CA230u: goto label_1ca230;
            case 0x1CA234u: goto label_1ca234;
            case 0x1CA238u: goto label_1ca238;
            case 0x1CA23Cu: goto label_1ca23c;
            case 0x1CA240u: goto label_1ca240;
            case 0x1CA244u: goto label_1ca244;
            case 0x1CA248u: goto label_1ca248;
            case 0x1CA24Cu: goto label_1ca24c;
            case 0x1CA250u: goto label_1ca250;
            case 0x1CA254u: goto label_1ca254;
            case 0x1CA258u: goto label_1ca258;
            case 0x1CA25Cu: goto label_1ca25c;
            case 0x1CA260u: goto label_1ca260;
            case 0x1CA264u: goto label_1ca264;
            case 0x1CA268u: goto label_1ca268;
            case 0x1CA26Cu: goto label_1ca26c;
            case 0x1CA270u: goto label_1ca270;
            case 0x1CA274u: goto label_1ca274;
            case 0x1CA278u: goto label_1ca278;
            case 0x1CA27Cu: goto label_1ca27c;
            case 0x1CA280u: goto label_1ca280;
            case 0x1CA284u: goto label_1ca284;
            case 0x1CA288u: goto label_1ca288;
            case 0x1CA28Cu: goto label_1ca28c;
            case 0x1CA290u: goto label_1ca290;
            case 0x1CA294u: goto label_1ca294;
            case 0x1CA298u: goto label_1ca298;
            case 0x1CA29Cu: goto label_1ca29c;
            case 0x1CA2A0u: goto label_1ca2a0;
            case 0x1CA2A4u: goto label_1ca2a4;
            case 0x1CA2A8u: goto label_1ca2a8;
            case 0x1CA2ACu: goto label_1ca2ac;
            case 0x1CA2B0u: goto label_1ca2b0;
            case 0x1CA2B4u: goto label_1ca2b4;
            case 0x1CA2B8u: goto label_1ca2b8;
            case 0x1CA2BCu: goto label_1ca2bc;
            case 0x1CA2C0u: goto label_1ca2c0;
            case 0x1CA2C4u: goto label_1ca2c4;
            case 0x1CA2C8u: goto label_1ca2c8;
            case 0x1CA2CCu: goto label_1ca2cc;
            case 0x1CA2D0u: goto label_1ca2d0;
            case 0x1CA2D4u: goto label_1ca2d4;
            case 0x1CA2D8u: goto label_1ca2d8;
            case 0x1CA2DCu: goto label_1ca2dc;
            case 0x1CA2E0u: goto label_1ca2e0;
            case 0x1CA2E4u: goto label_1ca2e4;
            case 0x1CA2E8u: goto label_1ca2e8;
            case 0x1CA2ECu: goto label_1ca2ec;
            case 0x1CA2F0u: goto label_1ca2f0;
            case 0x1CA2F4u: goto label_1ca2f4;
            case 0x1CA2F8u: goto label_1ca2f8;
            case 0x1CA2FCu: goto label_1ca2fc;
            case 0x1CA300u: goto label_1ca300;
            case 0x1CA304u: goto label_1ca304;
            case 0x1CA308u: goto label_1ca308;
            case 0x1CA30Cu: goto label_1ca30c;
            case 0x1CA310u: goto label_1ca310;
            case 0x1CA314u: goto label_1ca314;
            case 0x1CA318u: goto label_1ca318;
            case 0x1CA31Cu: goto label_1ca31c;
            case 0x1CA320u: goto label_1ca320;
            case 0x1CA324u: goto label_1ca324;
            case 0x1CA328u: goto label_1ca328;
            case 0x1CA32Cu: goto label_1ca32c;
            case 0x1CA330u: goto label_1ca330;
            case 0x1CA334u: goto label_1ca334;
            case 0x1CA338u: goto label_1ca338;
            case 0x1CA33Cu: goto label_1ca33c;
            case 0x1CA340u: goto label_1ca340;
            case 0x1CA344u: goto label_1ca344;
            case 0x1CA348u: goto label_1ca348;
            case 0x1CA34Cu: goto label_1ca34c;
            case 0x1CA350u: goto label_1ca350;
            case 0x1CA354u: goto label_1ca354;
            case 0x1CA358u: goto label_1ca358;
            case 0x1CA35Cu: goto label_1ca35c;
            case 0x1CA360u: goto label_1ca360;
            case 0x1CA364u: goto label_1ca364;
            case 0x1CA368u: goto label_1ca368;
            case 0x1CA36Cu: goto label_1ca36c;
            case 0x1CA370u: goto label_1ca370;
            case 0x1CA374u: goto label_1ca374;
            case 0x1CA378u: goto label_1ca378;
            case 0x1CA37Cu: goto label_1ca37c;
            case 0x1CA380u: goto label_1ca380;
            case 0x1CA384u: goto label_1ca384;
            case 0x1CA388u: goto label_1ca388;
            case 0x1CA38Cu: goto label_1ca38c;
            case 0x1CA390u: goto label_1ca390;
            case 0x1CA394u: goto label_1ca394;
            case 0x1CA398u: goto label_1ca398;
            case 0x1CA39Cu: goto label_1ca39c;
            case 0x1CA3A0u: goto label_1ca3a0;
            case 0x1CA3A4u: goto label_1ca3a4;
            case 0x1CA3A8u: goto label_1ca3a8;
            case 0x1CA3ACu: goto label_1ca3ac;
            case 0x1CA3B0u: goto label_1ca3b0;
            case 0x1CA3B4u: goto label_1ca3b4;
            case 0x1CA3B8u: goto label_1ca3b8;
            case 0x1CA3BCu: goto label_1ca3bc;
            case 0x1CA3C0u: goto label_1ca3c0;
            case 0x1CA3C4u: goto label_1ca3c4;
            case 0x1CA3C8u: goto label_1ca3c8;
            case 0x1CA3CCu: goto label_1ca3cc;
            case 0x1CA3D0u: goto label_1ca3d0;
            case 0x1CA3D4u: goto label_1ca3d4;
            case 0x1CA3D8u: goto label_1ca3d8;
            case 0x1CA3DCu: goto label_1ca3dc;
            case 0x1CA3E0u: goto label_1ca3e0;
            case 0x1CA3E4u: goto label_1ca3e4;
            case 0x1CA3E8u: goto label_1ca3e8;
            case 0x1CA3ECu: goto label_1ca3ec;
            case 0x1CA3F0u: goto label_1ca3f0;
            case 0x1CA3F4u: goto label_1ca3f4;
            case 0x1CA3F8u: goto label_1ca3f8;
            case 0x1CA3FCu: goto label_1ca3fc;
            case 0x1CA400u: goto label_1ca400;
            case 0x1CA404u: goto label_1ca404;
            case 0x1CA408u: goto label_1ca408;
            case 0x1CA40Cu: goto label_1ca40c;
            case 0x1CA410u: goto label_1ca410;
            case 0x1CA414u: goto label_1ca414;
            case 0x1CA418u: goto label_1ca418;
            case 0x1CA41Cu: goto label_1ca41c;
            case 0x1CA420u: goto label_1ca420;
            case 0x1CA424u: goto label_1ca424;
            case 0x1CA428u: goto label_1ca428;
            case 0x1CA42Cu: goto label_1ca42c;
            case 0x1CA430u: goto label_1ca430;
            case 0x1CA434u: goto label_1ca434;
            case 0x1CA438u: goto label_1ca438;
            case 0x1CA43Cu: goto label_1ca43c;
            case 0x1CA440u: goto label_1ca440;
            case 0x1CA444u: goto label_1ca444;
            case 0x1CA448u: goto label_1ca448;
            case 0x1CA44Cu: goto label_1ca44c;
            case 0x1CA450u: goto label_1ca450;
            case 0x1CA454u: goto label_1ca454;
            case 0x1CA458u: goto label_1ca458;
            case 0x1CA45Cu: goto label_1ca45c;
            case 0x1CA460u: goto label_1ca460;
            case 0x1CA464u: goto label_1ca464;
            case 0x1CA468u: goto label_1ca468;
            case 0x1CA46Cu: goto label_1ca46c;
            case 0x1CA470u: goto label_1ca470;
            case 0x1CA474u: goto label_1ca474;
            case 0x1CA478u: goto label_1ca478;
            case 0x1CA47Cu: goto label_1ca47c;
            case 0x1CA480u: goto label_1ca480;
            case 0x1CA484u: goto label_1ca484;
            case 0x1CA488u: goto label_1ca488;
            case 0x1CA48Cu: goto label_1ca48c;
            case 0x1CA490u: goto label_1ca490;
            case 0x1CA494u: goto label_1ca494;
            case 0x1CA498u: goto label_1ca498;
            case 0x1CA49Cu: goto label_1ca49c;
            case 0x1CA4A0u: goto label_1ca4a0;
            case 0x1CA4A4u: goto label_1ca4a4;
            case 0x1CA4A8u: goto label_1ca4a8;
            case 0x1CA4ACu: goto label_1ca4ac;
            case 0x1CA4B0u: goto label_1ca4b0;
            case 0x1CA4B4u: goto label_1ca4b4;
            case 0x1CA4B8u: goto label_1ca4b8;
            case 0x1CA4BCu: goto label_1ca4bc;
            case 0x1CA4C0u: goto label_1ca4c0;
            case 0x1CA4C4u: goto label_1ca4c4;
            case 0x1CA4C8u: goto label_1ca4c8;
            case 0x1CA4CCu: goto label_1ca4cc;
            case 0x1CA4D0u: goto label_1ca4d0;
            case 0x1CA4D4u: goto label_1ca4d4;
            case 0x1CA4D8u: goto label_1ca4d8;
            case 0x1CA4DCu: goto label_1ca4dc;
            case 0x1CA4E0u: goto label_1ca4e0;
            case 0x1CA4E4u: goto label_1ca4e4;
            case 0x1CA4E8u: goto label_1ca4e8;
            case 0x1CA4ECu: goto label_1ca4ec;
            case 0x1CA4F0u: goto label_1ca4f0;
            case 0x1CA4F4u: goto label_1ca4f4;
            case 0x1CA4F8u: goto label_1ca4f8;
            case 0x1CA4FCu: goto label_1ca4fc;
            case 0x1CA500u: goto label_1ca500;
            case 0x1CA504u: goto label_1ca504;
            case 0x1CA508u: goto label_1ca508;
            case 0x1CA50Cu: goto label_1ca50c;
            case 0x1CA510u: goto label_1ca510;
            case 0x1CA514u: goto label_1ca514;
            case 0x1CA518u: goto label_1ca518;
            case 0x1CA51Cu: goto label_1ca51c;
            case 0x1CA520u: goto label_1ca520;
            case 0x1CA524u: goto label_1ca524;
            case 0x1CA528u: goto label_1ca528;
            case 0x1CA52Cu: goto label_1ca52c;
            case 0x1CA530u: goto label_1ca530;
            case 0x1CA534u: goto label_1ca534;
            case 0x1CA538u: goto label_1ca538;
            case 0x1CA53Cu: goto label_1ca53c;
            case 0x1CA540u: goto label_1ca540;
            case 0x1CA544u: goto label_1ca544;
            case 0x1CA548u: goto label_1ca548;
            case 0x1CA54Cu: goto label_1ca54c;
            case 0x1CA550u: goto label_1ca550;
            case 0x1CA554u: goto label_1ca554;
            case 0x1CA558u: goto label_1ca558;
            case 0x1CA55Cu: goto label_1ca55c;
            case 0x1CA560u: goto label_1ca560;
            case 0x1CA564u: goto label_1ca564;
            case 0x1CA568u: goto label_1ca568;
            case 0x1CA56Cu: goto label_1ca56c;
            case 0x1CA570u: goto label_1ca570;
            case 0x1CA574u: goto label_1ca574;
            case 0x1CA578u: goto label_1ca578;
            case 0x1CA57Cu: goto label_1ca57c;
            case 0x1CA580u: goto label_1ca580;
            case 0x1CA584u: goto label_1ca584;
            case 0x1CA588u: goto label_1ca588;
            case 0x1CA58Cu: goto label_1ca58c;
            case 0x1CA590u: goto label_1ca590;
            case 0x1CA594u: goto label_1ca594;
            case 0x1CA598u: goto label_1ca598;
            case 0x1CA59Cu: goto label_1ca59c;
            case 0x1CA5A0u: goto label_1ca5a0;
            case 0x1CA5A4u: goto label_1ca5a4;
            case 0x1CA5A8u: goto label_1ca5a8;
            case 0x1CA5ACu: goto label_1ca5ac;
            case 0x1CA5B0u: goto label_1ca5b0;
            case 0x1CA5B4u: goto label_1ca5b4;
            case 0x1CA5B8u: goto label_1ca5b8;
            case 0x1CA5BCu: goto label_1ca5bc;
            case 0x1CA5C0u: goto label_1ca5c0;
            case 0x1CA5C4u: goto label_1ca5c4;
            case 0x1CA5C8u: goto label_1ca5c8;
            case 0x1CA5CCu: goto label_1ca5cc;
            case 0x1CA5D0u: goto label_1ca5d0;
            case 0x1CA5D4u: goto label_1ca5d4;
            case 0x1CA5D8u: goto label_1ca5d8;
            case 0x1CA5DCu: goto label_1ca5dc;
            case 0x1CA5E0u: goto label_1ca5e0;
            case 0x1CA5E4u: goto label_1ca5e4;
            case 0x1CA5E8u: goto label_1ca5e8;
            case 0x1CA5ECu: goto label_1ca5ec;
            case 0x1CA5F0u: goto label_1ca5f0;
            case 0x1CA5F4u: goto label_1ca5f4;
            case 0x1CA5F8u: goto label_1ca5f8;
            case 0x1CA5FCu: goto label_1ca5fc;
            case 0x1CA600u: goto label_1ca600;
            case 0x1CA604u: goto label_1ca604;
            case 0x1CA608u: goto label_1ca608;
            case 0x1CA60Cu: goto label_1ca60c;
            case 0x1CA610u: goto label_1ca610;
            case 0x1CA614u: goto label_1ca614;
            case 0x1CA618u: goto label_1ca618;
            case 0x1CA61Cu: goto label_1ca61c;
            case 0x1CA620u: goto label_1ca620;
            case 0x1CA624u: goto label_1ca624;
            case 0x1CA628u: goto label_1ca628;
            case 0x1CA62Cu: goto label_1ca62c;
            case 0x1CA630u: goto label_1ca630;
            case 0x1CA634u: goto label_1ca634;
            case 0x1CA638u: goto label_1ca638;
            case 0x1CA63Cu: goto label_1ca63c;
            case 0x1CA640u: goto label_1ca640;
            case 0x1CA644u: goto label_1ca644;
            case 0x1CA648u: goto label_1ca648;
            case 0x1CA64Cu: goto label_1ca64c;
            case 0x1CA650u: goto label_1ca650;
            case 0x1CA654u: goto label_1ca654;
            case 0x1CA658u: goto label_1ca658;
            case 0x1CA65Cu: goto label_1ca65c;
            case 0x1CA660u: goto label_1ca660;
            case 0x1CA664u: goto label_1ca664;
            case 0x1CA668u: goto label_1ca668;
            case 0x1CA66Cu: goto label_1ca66c;
            case 0x1CA670u: goto label_1ca670;
            case 0x1CA674u: goto label_1ca674;
            case 0x1CA678u: goto label_1ca678;
            case 0x1CA67Cu: goto label_1ca67c;
            case 0x1CA680u: goto label_1ca680;
            case 0x1CA684u: goto label_1ca684;
            case 0x1CA688u: goto label_1ca688;
            case 0x1CA68Cu: goto label_1ca68c;
            case 0x1CA690u: goto label_1ca690;
            case 0x1CA694u: goto label_1ca694;
            case 0x1CA698u: goto label_1ca698;
            case 0x1CA69Cu: goto label_1ca69c;
            case 0x1CA6A0u: goto label_1ca6a0;
            case 0x1CA6A4u: goto label_1ca6a4;
            case 0x1CA6A8u: goto label_1ca6a8;
            case 0x1CA6ACu: goto label_1ca6ac;
            case 0x1CA6B0u: goto label_1ca6b0;
            case 0x1CA6B4u: goto label_1ca6b4;
            case 0x1CA6B8u: goto label_1ca6b8;
            case 0x1CA6BCu: goto label_1ca6bc;
            case 0x1CA6C0u: goto label_1ca6c0;
            case 0x1CA6C4u: goto label_1ca6c4;
            case 0x1CA6C8u: goto label_1ca6c8;
            case 0x1CA6CCu: goto label_1ca6cc;
            case 0x1CA6D0u: goto label_1ca6d0;
            case 0x1CA6D4u: goto label_1ca6d4;
            case 0x1CA6D8u: goto label_1ca6d8;
            case 0x1CA6DCu: goto label_1ca6dc;
            case 0x1CA6E0u: goto label_1ca6e0;
            case 0x1CA6E4u: goto label_1ca6e4;
            case 0x1CA6E8u: goto label_1ca6e8;
            case 0x1CA6ECu: goto label_1ca6ec;
            case 0x1CA6F0u: goto label_1ca6f0;
            case 0x1CA6F4u: goto label_1ca6f4;
            case 0x1CA6F8u: goto label_1ca6f8;
            case 0x1CA6FCu: goto label_1ca6fc;
            case 0x1CA700u: goto label_1ca700;
            case 0x1CA704u: goto label_1ca704;
            case 0x1CA708u: goto label_1ca708;
            case 0x1CA70Cu: goto label_1ca70c;
            case 0x1CA710u: goto label_1ca710;
            case 0x1CA714u: goto label_1ca714;
            case 0x1CA718u: goto label_1ca718;
            case 0x1CA71Cu: goto label_1ca71c;
            case 0x1CA720u: goto label_1ca720;
            case 0x1CA724u: goto label_1ca724;
            case 0x1CA728u: goto label_1ca728;
            case 0x1CA72Cu: goto label_1ca72c;
            case 0x1CA730u: goto label_1ca730;
            case 0x1CA734u: goto label_1ca734;
            case 0x1CA738u: goto label_1ca738;
            case 0x1CA73Cu: goto label_1ca73c;
            case 0x1CA740u: goto label_1ca740;
            case 0x1CA744u: goto label_1ca744;
            case 0x1CA748u: goto label_1ca748;
            case 0x1CA74Cu: goto label_1ca74c;
            case 0x1CA750u: goto label_1ca750;
            case 0x1CA754u: goto label_1ca754;
            case 0x1CA758u: goto label_1ca758;
            case 0x1CA75Cu: goto label_1ca75c;
            case 0x1CA760u: goto label_1ca760;
            case 0x1CA764u: goto label_1ca764;
            case 0x1CA768u: goto label_1ca768;
            case 0x1CA76Cu: goto label_1ca76c;
            case 0x1CA770u: goto label_1ca770;
            case 0x1CA774u: goto label_1ca774;
            case 0x1CA778u: goto label_1ca778;
            case 0x1CA77Cu: goto label_1ca77c;
            case 0x1CA780u: goto label_1ca780;
            case 0x1CA784u: goto label_1ca784;
            case 0x1CA788u: goto label_1ca788;
            case 0x1CA78Cu: goto label_1ca78c;
            case 0x1CA790u: goto label_1ca790;
            case 0x1CA794u: goto label_1ca794;
            case 0x1CA798u: goto label_1ca798;
            case 0x1CA79Cu: goto label_1ca79c;
            case 0x1CA7A0u: goto label_1ca7a0;
            case 0x1CA7A4u: goto label_1ca7a4;
            case 0x1CA7A8u: goto label_1ca7a8;
            case 0x1CA7ACu: goto label_1ca7ac;
            case 0x1CA7B0u: goto label_1ca7b0;
            case 0x1CA7B4u: goto label_1ca7b4;
            case 0x1CA7B8u: goto label_1ca7b8;
            case 0x1CA7BCu: goto label_1ca7bc;
            case 0x1CA7C0u: goto label_1ca7c0;
            case 0x1CA7C4u: goto label_1ca7c4;
            case 0x1CA7C8u: goto label_1ca7c8;
            case 0x1CA7CCu: goto label_1ca7cc;
            case 0x1CA7D0u: goto label_1ca7d0;
            case 0x1CA7D4u: goto label_1ca7d4;
            case 0x1CA7D8u: goto label_1ca7d8;
            case 0x1CA7DCu: goto label_1ca7dc;
            case 0x1CA7E0u: goto label_1ca7e0;
            case 0x1CA7E4u: goto label_1ca7e4;
            case 0x1CA7E8u: goto label_1ca7e8;
            case 0x1CA7ECu: goto label_1ca7ec;
            case 0x1CA7F0u: goto label_1ca7f0;
            case 0x1CA7F4u: goto label_1ca7f4;
            case 0x1CA7F8u: goto label_1ca7f8;
            case 0x1CA7FCu: goto label_1ca7fc;
            case 0x1CA800u: goto label_1ca800;
            case 0x1CA804u: goto label_1ca804;
            case 0x1CA808u: goto label_1ca808;
            case 0x1CA80Cu: goto label_1ca80c;
            case 0x1CA810u: goto label_1ca810;
            case 0x1CA814u: goto label_1ca814;
            case 0x1CA818u: goto label_1ca818;
            case 0x1CA81Cu: goto label_1ca81c;
            case 0x1CA820u: goto label_1ca820;
            case 0x1CA824u: goto label_1ca824;
            case 0x1CA828u: goto label_1ca828;
            case 0x1CA82Cu: goto label_1ca82c;
            case 0x1CA830u: goto label_1ca830;
            case 0x1CA834u: goto label_1ca834;
            case 0x1CA838u: goto label_1ca838;
            case 0x1CA83Cu: goto label_1ca83c;
            case 0x1CA840u: goto label_1ca840;
            case 0x1CA844u: goto label_1ca844;
            case 0x1CA848u: goto label_1ca848;
            case 0x1CA84Cu: goto label_1ca84c;
            case 0x1CA850u: goto label_1ca850;
            case 0x1CA854u: goto label_1ca854;
            case 0x1CA858u: goto label_1ca858;
            case 0x1CA85Cu: goto label_1ca85c;
            case 0x1CA860u: goto label_1ca860;
            case 0x1CA864u: goto label_1ca864;
            case 0x1CA868u: goto label_1ca868;
            case 0x1CA86Cu: goto label_1ca86c;
            case 0x1CA870u: goto label_1ca870;
            case 0x1CA874u: goto label_1ca874;
            case 0x1CA878u: goto label_1ca878;
            case 0x1CA87Cu: goto label_1ca87c;
            case 0x1CA880u: goto label_1ca880;
            case 0x1CA884u: goto label_1ca884;
            case 0x1CA888u: goto label_1ca888;
            case 0x1CA88Cu: goto label_1ca88c;
            case 0x1CA890u: goto label_1ca890;
            case 0x1CA894u: goto label_1ca894;
            case 0x1CA898u: goto label_1ca898;
            case 0x1CA89Cu: goto label_1ca89c;
            case 0x1CA8A0u: goto label_1ca8a0;
            case 0x1CA8A4u: goto label_1ca8a4;
            case 0x1CA8A8u: goto label_1ca8a8;
            case 0x1CA8ACu: goto label_1ca8ac;
            case 0x1CA8B0u: goto label_1ca8b0;
            case 0x1CA8B4u: goto label_1ca8b4;
            case 0x1CA8B8u: goto label_1ca8b8;
            case 0x1CA8BCu: goto label_1ca8bc;
            case 0x1CA8C0u: goto label_1ca8c0;
            case 0x1CA8C4u: goto label_1ca8c4;
            case 0x1CA8C8u: goto label_1ca8c8;
            case 0x1CA8CCu: goto label_1ca8cc;
            case 0x1CA8D0u: goto label_1ca8d0;
            case 0x1CA8D4u: goto label_1ca8d4;
            case 0x1CA8D8u: goto label_1ca8d8;
            case 0x1CA8DCu: goto label_1ca8dc;
            case 0x1CA8E0u: goto label_1ca8e0;
            case 0x1CA8E4u: goto label_1ca8e4;
            case 0x1CA8E8u: goto label_1ca8e8;
            case 0x1CA8ECu: goto label_1ca8ec;
            case 0x1CA8F0u: goto label_1ca8f0;
            case 0x1CA8F4u: goto label_1ca8f4;
            case 0x1CA8F8u: goto label_1ca8f8;
            case 0x1CA8FCu: goto label_1ca8fc;
            case 0x1CA900u: goto label_1ca900;
            case 0x1CA904u: goto label_1ca904;
            case 0x1CA908u: goto label_1ca908;
            case 0x1CA90Cu: goto label_1ca90c;
            case 0x1CA910u: goto label_1ca910;
            case 0x1CA914u: goto label_1ca914;
            case 0x1CA918u: goto label_1ca918;
            case 0x1CA91Cu: goto label_1ca91c;
            case 0x1CA920u: goto label_1ca920;
            case 0x1CA924u: goto label_1ca924;
            case 0x1CA928u: goto label_1ca928;
            case 0x1CA92Cu: goto label_1ca92c;
            case 0x1CA930u: goto label_1ca930;
            case 0x1CA934u: goto label_1ca934;
            case 0x1CA938u: goto label_1ca938;
            case 0x1CA93Cu: goto label_1ca93c;
            case 0x1CA940u: goto label_1ca940;
            case 0x1CA944u: goto label_1ca944;
            case 0x1CA948u: goto label_1ca948;
            case 0x1CA94Cu: goto label_1ca94c;
            case 0x1CA950u: goto label_1ca950;
            case 0x1CA954u: goto label_1ca954;
            case 0x1CA958u: goto label_1ca958;
            case 0x1CA95Cu: goto label_1ca95c;
            case 0x1CA960u: goto label_1ca960;
            case 0x1CA964u: goto label_1ca964;
            case 0x1CA968u: goto label_1ca968;
            case 0x1CA96Cu: goto label_1ca96c;
            case 0x1CA970u: goto label_1ca970;
            case 0x1CA974u: goto label_1ca974;
            case 0x1CA978u: goto label_1ca978;
            case 0x1CA97Cu: goto label_1ca97c;
            case 0x1CA980u: goto label_1ca980;
            case 0x1CA984u: goto label_1ca984;
            case 0x1CA988u: goto label_1ca988;
            case 0x1CA98Cu: goto label_1ca98c;
            case 0x1CA990u: goto label_1ca990;
            case 0x1CA994u: goto label_1ca994;
            case 0x1CA998u: goto label_1ca998;
            case 0x1CA99Cu: goto label_1ca99c;
            case 0x1CA9A0u: goto label_1ca9a0;
            case 0x1CA9A4u: goto label_1ca9a4;
            case 0x1CA9A8u: goto label_1ca9a8;
            case 0x1CA9ACu: goto label_1ca9ac;
            case 0x1CA9B0u: goto label_1ca9b0;
            case 0x1CA9B4u: goto label_1ca9b4;
            case 0x1CA9B8u: goto label_1ca9b8;
            case 0x1CA9BCu: goto label_1ca9bc;
            case 0x1CA9C0u: goto label_1ca9c0;
            case 0x1CA9C4u: goto label_1ca9c4;
            case 0x1CA9C8u: goto label_1ca9c8;
            case 0x1CA9CCu: goto label_1ca9cc;
            case 0x1CA9D0u: goto label_1ca9d0;
            case 0x1CA9D4u: goto label_1ca9d4;
            case 0x1CA9D8u: goto label_1ca9d8;
            case 0x1CA9DCu: goto label_1ca9dc;
            case 0x1CA9E0u: goto label_1ca9e0;
            case 0x1CA9E4u: goto label_1ca9e4;
            case 0x1CA9E8u: goto label_1ca9e8;
            case 0x1CA9ECu: goto label_1ca9ec;
            case 0x1CA9F0u: goto label_1ca9f0;
            case 0x1CA9F4u: goto label_1ca9f4;
            case 0x1CA9F8u: goto label_1ca9f8;
            case 0x1CA9FCu: goto label_1ca9fc;
            case 0x1CAA00u: goto label_1caa00;
            case 0x1CAA04u: goto label_1caa04;
            case 0x1CAA08u: goto label_1caa08;
            case 0x1CAA0Cu: goto label_1caa0c;
            case 0x1CAA10u: goto label_1caa10;
            case 0x1CAA14u: goto label_1caa14;
            case 0x1CAA18u: goto label_1caa18;
            case 0x1CAA1Cu: goto label_1caa1c;
            case 0x1CAA20u: goto label_1caa20;
            case 0x1CAA24u: goto label_1caa24;
            case 0x1CAA28u: goto label_1caa28;
            case 0x1CAA2Cu: goto label_1caa2c;
            case 0x1CAA30u: goto label_1caa30;
            case 0x1CAA34u: goto label_1caa34;
            case 0x1CAA38u: goto label_1caa38;
            case 0x1CAA3Cu: goto label_1caa3c;
            case 0x1CAA40u: goto label_1caa40;
            case 0x1CAA44u: goto label_1caa44;
            case 0x1CAA48u: goto label_1caa48;
            case 0x1CAA4Cu: goto label_1caa4c;
            case 0x1CAA50u: goto label_1caa50;
            case 0x1CAA54u: goto label_1caa54;
            case 0x1CAA58u: goto label_1caa58;
            case 0x1CAA5Cu: goto label_1caa5c;
            case 0x1CAA60u: goto label_1caa60;
            case 0x1CAA64u: goto label_1caa64;
            case 0x1CAA68u: goto label_1caa68;
            case 0x1CAA6Cu: goto label_1caa6c;
            case 0x1CAA70u: goto label_1caa70;
            case 0x1CAA74u: goto label_1caa74;
            case 0x1CAA78u: goto label_1caa78;
            case 0x1CAA7Cu: goto label_1caa7c;
            case 0x1CAA80u: goto label_1caa80;
            case 0x1CAA84u: goto label_1caa84;
            case 0x1CAA88u: goto label_1caa88;
            case 0x1CAA8Cu: goto label_1caa8c;
            case 0x1CAA90u: goto label_1caa90;
            case 0x1CAA94u: goto label_1caa94;
            case 0x1CAA98u: goto label_1caa98;
            case 0x1CAA9Cu: goto label_1caa9c;
            case 0x1CAAA0u: goto label_1caaa0;
            case 0x1CAAA4u: goto label_1caaa4;
            case 0x1CAAA8u: goto label_1caaa8;
            case 0x1CAAACu: goto label_1caaac;
            case 0x1CAAB0u: goto label_1caab0;
            case 0x1CAAB4u: goto label_1caab4;
            case 0x1CAAB8u: goto label_1caab8;
            case 0x1CAABCu: goto label_1caabc;
            case 0x1CAAC0u: goto label_1caac0;
            case 0x1CAAC4u: goto label_1caac4;
            case 0x1CAAC8u: goto label_1caac8;
            case 0x1CAACCu: goto label_1caacc;
            case 0x1CAAD0u: goto label_1caad0;
            case 0x1CAAD4u: goto label_1caad4;
            case 0x1CAAD8u: goto label_1caad8;
            case 0x1CAADCu: goto label_1caadc;
            case 0x1CAAE0u: goto label_1caae0;
            case 0x1CAAE4u: goto label_1caae4;
            case 0x1CAAE8u: goto label_1caae8;
            case 0x1CAAECu: goto label_1caaec;
            case 0x1CAAF0u: goto label_1caaf0;
            case 0x1CAAF4u: goto label_1caaf4;
            case 0x1CAAF8u: goto label_1caaf8;
            case 0x1CAAFCu: goto label_1caafc;
            case 0x1CAB00u: goto label_1cab00;
            case 0x1CAB04u: goto label_1cab04;
            case 0x1CAB08u: goto label_1cab08;
            case 0x1CAB0Cu: goto label_1cab0c;
            case 0x1CAB10u: goto label_1cab10;
            case 0x1CAB14u: goto label_1cab14;
            case 0x1CAB18u: goto label_1cab18;
            case 0x1CAB1Cu: goto label_1cab1c;
            case 0x1CAB20u: goto label_1cab20;
            case 0x1CAB24u: goto label_1cab24;
            case 0x1CAB28u: goto label_1cab28;
            case 0x1CAB2Cu: goto label_1cab2c;
            case 0x1CAB30u: goto label_1cab30;
            case 0x1CAB34u: goto label_1cab34;
            case 0x1CAB38u: goto label_1cab38;
            case 0x1CAB3Cu: goto label_1cab3c;
            case 0x1CAB40u: goto label_1cab40;
            case 0x1CAB44u: goto label_1cab44;
            case 0x1CAB48u: goto label_1cab48;
            case 0x1CAB4Cu: goto label_1cab4c;
            case 0x1CAB50u: goto label_1cab50;
            case 0x1CAB54u: goto label_1cab54;
            case 0x1CAB58u: goto label_1cab58;
            case 0x1CAB5Cu: goto label_1cab5c;
            case 0x1CAB60u: goto label_1cab60;
            case 0x1CAB64u: goto label_1cab64;
            case 0x1CAB68u: goto label_1cab68;
            case 0x1CAB6Cu: goto label_1cab6c;
            case 0x1CAB70u: goto label_1cab70;
            case 0x1CAB74u: goto label_1cab74;
            case 0x1CAB78u: goto label_1cab78;
            case 0x1CAB7Cu: goto label_1cab7c;
            case 0x1CAB80u: goto label_1cab80;
            case 0x1CAB84u: goto label_1cab84;
            case 0x1CAB88u: goto label_1cab88;
            case 0x1CAB8Cu: goto label_1cab8c;
            case 0x1CAB90u: goto label_1cab90;
            case 0x1CAB94u: goto label_1cab94;
            case 0x1CAB98u: goto label_1cab98;
            case 0x1CAB9Cu: goto label_1cab9c;
            case 0x1CABA0u: goto label_1caba0;
            case 0x1CABA4u: goto label_1caba4;
            case 0x1CABA8u: goto label_1caba8;
            case 0x1CABACu: goto label_1cabac;
            case 0x1CABB0u: goto label_1cabb0;
            case 0x1CABB4u: goto label_1cabb4;
            case 0x1CABB8u: goto label_1cabb8;
            case 0x1CABBCu: goto label_1cabbc;
            case 0x1CABC0u: goto label_1cabc0;
            case 0x1CABC4u: goto label_1cabc4;
            case 0x1CABC8u: goto label_1cabc8;
            case 0x1CABCCu: goto label_1cabcc;
            case 0x1CABD0u: goto label_1cabd0;
            case 0x1CABD4u: goto label_1cabd4;
            case 0x1CABD8u: goto label_1cabd8;
            case 0x1CABDCu: goto label_1cabdc;
            case 0x1CABE0u: goto label_1cabe0;
            case 0x1CABE4u: goto label_1cabe4;
            case 0x1CABE8u: goto label_1cabe8;
            case 0x1CABECu: goto label_1cabec;
            case 0x1CABF0u: goto label_1cabf0;
            case 0x1CABF4u: goto label_1cabf4;
            case 0x1CABF8u: goto label_1cabf8;
            case 0x1CABFCu: goto label_1cabfc;
            case 0x1CAC00u: goto label_1cac00;
            case 0x1CAC04u: goto label_1cac04;
            case 0x1CAC08u: goto label_1cac08;
            case 0x1CAC0Cu: goto label_1cac0c;
            case 0x1CAC10u: goto label_1cac10;
            case 0x1CAC14u: goto label_1cac14;
            case 0x1CAC18u: goto label_1cac18;
            case 0x1CAC1Cu: goto label_1cac1c;
            case 0x1CAC20u: goto label_1cac20;
            case 0x1CAC24u: goto label_1cac24;
            case 0x1CAC28u: goto label_1cac28;
            case 0x1CAC2Cu: goto label_1cac2c;
            case 0x1CAC30u: goto label_1cac30;
            case 0x1CAC34u: goto label_1cac34;
            case 0x1CAC38u: goto label_1cac38;
            case 0x1CAC3Cu: goto label_1cac3c;
            case 0x1CAC40u: goto label_1cac40;
            case 0x1CAC44u: goto label_1cac44;
            case 0x1CAC48u: goto label_1cac48;
            case 0x1CAC4Cu: goto label_1cac4c;
            case 0x1CAC50u: goto label_1cac50;
            case 0x1CAC54u: goto label_1cac54;
            case 0x1CAC58u: goto label_1cac58;
            case 0x1CAC5Cu: goto label_1cac5c;
            case 0x1CAC60u: goto label_1cac60;
            case 0x1CAC64u: goto label_1cac64;
            case 0x1CAC68u: goto label_1cac68;
            case 0x1CAC6Cu: goto label_1cac6c;
            case 0x1CAC70u: goto label_1cac70;
            case 0x1CAC74u: goto label_1cac74;
            case 0x1CAC78u: goto label_1cac78;
            case 0x1CAC7Cu: goto label_1cac7c;
            case 0x1CAC80u: goto label_1cac80;
            case 0x1CAC84u: goto label_1cac84;
            case 0x1CAC88u: goto label_1cac88;
            case 0x1CAC8Cu: goto label_1cac8c;
            case 0x1CAC90u: goto label_1cac90;
            case 0x1CAC94u: goto label_1cac94;
            case 0x1CAC98u: goto label_1cac98;
            case 0x1CAC9Cu: goto label_1cac9c;
            case 0x1CACA0u: goto label_1caca0;
            case 0x1CACA4u: goto label_1caca4;
            case 0x1CACA8u: goto label_1caca8;
            case 0x1CACACu: goto label_1cacac;
            case 0x1CACB0u: goto label_1cacb0;
            case 0x1CACB4u: goto label_1cacb4;
            case 0x1CACB8u: goto label_1cacb8;
            case 0x1CACBCu: goto label_1cacbc;
            case 0x1CACC0u: goto label_1cacc0;
            case 0x1CACC4u: goto label_1cacc4;
            case 0x1CACC8u: goto label_1cacc8;
            case 0x1CACCCu: goto label_1caccc;
            case 0x1CACD0u: goto label_1cacd0;
            case 0x1CACD4u: goto label_1cacd4;
            case 0x1CACD8u: goto label_1cacd8;
            case 0x1CACDCu: goto label_1cacdc;
            case 0x1CACE0u: goto label_1cace0;
            case 0x1CACE4u: goto label_1cace4;
            case 0x1CACE8u: goto label_1cace8;
            case 0x1CACECu: goto label_1cacec;
            case 0x1CACF0u: goto label_1cacf0;
            case 0x1CACF4u: goto label_1cacf4;
            case 0x1CACF8u: goto label_1cacf8;
            case 0x1CACFCu: goto label_1cacfc;
            case 0x1CAD00u: goto label_1cad00;
            case 0x1CAD04u: goto label_1cad04;
            case 0x1CAD08u: goto label_1cad08;
            case 0x1CAD0Cu: goto label_1cad0c;
            case 0x1CAD10u: goto label_1cad10;
            case 0x1CAD14u: goto label_1cad14;
            case 0x1CAD18u: goto label_1cad18;
            case 0x1CAD1Cu: goto label_1cad1c;
            case 0x1CAD20u: goto label_1cad20;
            case 0x1CAD24u: goto label_1cad24;
            case 0x1CAD28u: goto label_1cad28;
            case 0x1CAD2Cu: goto label_1cad2c;
            case 0x1CAD30u: goto label_1cad30;
            case 0x1CAD34u: goto label_1cad34;
            case 0x1CAD38u: goto label_1cad38;
            case 0x1CAD3Cu: goto label_1cad3c;
            case 0x1CAD40u: goto label_1cad40;
            case 0x1CAD44u: goto label_1cad44;
            case 0x1CAD48u: goto label_1cad48;
            case 0x1CAD4Cu: goto label_1cad4c;
            case 0x1CAD50u: goto label_1cad50;
            case 0x1CAD54u: goto label_1cad54;
            case 0x1CAD58u: goto label_1cad58;
            case 0x1CAD5Cu: goto label_1cad5c;
            case 0x1CAD60u: goto label_1cad60;
            case 0x1CAD64u: goto label_1cad64;
            case 0x1CAD68u: goto label_1cad68;
            case 0x1CAD6Cu: goto label_1cad6c;
            case 0x1CAD70u: goto label_1cad70;
            case 0x1CAD74u: goto label_1cad74;
            case 0x1CAD78u: goto label_1cad78;
            case 0x1CAD7Cu: goto label_1cad7c;
            case 0x1CAD80u: goto label_1cad80;
            case 0x1CAD84u: goto label_1cad84;
            case 0x1CAD88u: goto label_1cad88;
            case 0x1CAD8Cu: goto label_1cad8c;
            case 0x1CAD90u: goto label_1cad90;
            case 0x1CAD94u: goto label_1cad94;
            case 0x1CAD98u: goto label_1cad98;
            case 0x1CAD9Cu: goto label_1cad9c;
            case 0x1CADA0u: goto label_1cada0;
            case 0x1CADA4u: goto label_1cada4;
            case 0x1CADA8u: goto label_1cada8;
            case 0x1CADACu: goto label_1cadac;
            case 0x1CADB0u: goto label_1cadb0;
            case 0x1CADB4u: goto label_1cadb4;
            case 0x1CADB8u: goto label_1cadb8;
            case 0x1CADBCu: goto label_1cadbc;
            case 0x1CADC0u: goto label_1cadc0;
            case 0x1CADC4u: goto label_1cadc4;
            case 0x1CADC8u: goto label_1cadc8;
            case 0x1CADCCu: goto label_1cadcc;
            case 0x1CADD0u: goto label_1cadd0;
            case 0x1CADD4u: goto label_1cadd4;
            case 0x1CADD8u: goto label_1cadd8;
            case 0x1CADDCu: goto label_1caddc;
            case 0x1CADE0u: goto label_1cade0;
            case 0x1CADE4u: goto label_1cade4;
            case 0x1CADE8u: goto label_1cade8;
            case 0x1CADECu: goto label_1cadec;
            case 0x1CADF0u: goto label_1cadf0;
            case 0x1CADF4u: goto label_1cadf4;
            case 0x1CADF8u: goto label_1cadf8;
            case 0x1CADFCu: goto label_1cadfc;
            case 0x1CAE00u: goto label_1cae00;
            case 0x1CAE04u: goto label_1cae04;
            case 0x1CAE08u: goto label_1cae08;
            case 0x1CAE0Cu: goto label_1cae0c;
            case 0x1CAE10u: goto label_1cae10;
            case 0x1CAE14u: goto label_1cae14;
            case 0x1CAE18u: goto label_1cae18;
            case 0x1CAE1Cu: goto label_1cae1c;
            case 0x1CAE20u: goto label_1cae20;
            case 0x1CAE24u: goto label_1cae24;
            case 0x1CAE28u: goto label_1cae28;
            case 0x1CAE2Cu: goto label_1cae2c;
            case 0x1CAE30u: goto label_1cae30;
            case 0x1CAE34u: goto label_1cae34;
            case 0x1CAE38u: goto label_1cae38;
            case 0x1CAE3Cu: goto label_1cae3c;
            case 0x1CAE40u: goto label_1cae40;
            case 0x1CAE44u: goto label_1cae44;
            case 0x1CAE48u: goto label_1cae48;
            case 0x1CAE4Cu: goto label_1cae4c;
            case 0x1CAE50u: goto label_1cae50;
            case 0x1CAE54u: goto label_1cae54;
            case 0x1CAE58u: goto label_1cae58;
            case 0x1CAE5Cu: goto label_1cae5c;
            case 0x1CAE60u: goto label_1cae60;
            case 0x1CAE64u: goto label_1cae64;
            case 0x1CAE68u: goto label_1cae68;
            case 0x1CAE6Cu: goto label_1cae6c;
            case 0x1CAE70u: goto label_1cae70;
            case 0x1CAE74u: goto label_1cae74;
            case 0x1CAE78u: goto label_1cae78;
            case 0x1CAE7Cu: goto label_1cae7c;
            case 0x1CAE80u: goto label_1cae80;
            case 0x1CAE84u: goto label_1cae84;
            case 0x1CAE88u: goto label_1cae88;
            case 0x1CAE8Cu: goto label_1cae8c;
            case 0x1CAE90u: goto label_1cae90;
            case 0x1CAE94u: goto label_1cae94;
            case 0x1CAE98u: goto label_1cae98;
            case 0x1CAE9Cu: goto label_1cae9c;
            case 0x1CAEA0u: goto label_1caea0;
            case 0x1CAEA4u: goto label_1caea4;
            case 0x1CAEA8u: goto label_1caea8;
            case 0x1CAEACu: goto label_1caeac;
            case 0x1CAEB0u: goto label_1caeb0;
            case 0x1CAEB4u: goto label_1caeb4;
            case 0x1CAEB8u: goto label_1caeb8;
            case 0x1CAEBCu: goto label_1caebc;
            case 0x1CAEC0u: goto label_1caec0;
            case 0x1CAEC4u: goto label_1caec4;
            case 0x1CAEC8u: goto label_1caec8;
            case 0x1CAECCu: goto label_1caecc;
            case 0x1CAED0u: goto label_1caed0;
            case 0x1CAED4u: goto label_1caed4;
            case 0x1CAED8u: goto label_1caed8;
            case 0x1CAEDCu: goto label_1caedc;
            case 0x1CAEE0u: goto label_1caee0;
            case 0x1CAEE4u: goto label_1caee4;
            case 0x1CAEE8u: goto label_1caee8;
            case 0x1CAEECu: goto label_1caeec;
            case 0x1CAEF0u: goto label_1caef0;
            case 0x1CAEF4u: goto label_1caef4;
            case 0x1CAEF8u: goto label_1caef8;
            case 0x1CAEFCu: goto label_1caefc;
            case 0x1CAF00u: goto label_1caf00;
            case 0x1CAF04u: goto label_1caf04;
            case 0x1CAF08u: goto label_1caf08;
            case 0x1CAF0Cu: goto label_1caf0c;
            case 0x1CAF10u: goto label_1caf10;
            case 0x1CAF14u: goto label_1caf14;
            case 0x1CAF18u: goto label_1caf18;
            case 0x1CAF1Cu: goto label_1caf1c;
            case 0x1CAF20u: goto label_1caf20;
            case 0x1CAF24u: goto label_1caf24;
            case 0x1CAF28u: goto label_1caf28;
            case 0x1CAF2Cu: goto label_1caf2c;
            case 0x1CAF30u: goto label_1caf30;
            case 0x1CAF34u: goto label_1caf34;
            case 0x1CAF38u: goto label_1caf38;
            case 0x1CAF3Cu: goto label_1caf3c;
            case 0x1CAF40u: goto label_1caf40;
            case 0x1CAF44u: goto label_1caf44;
            case 0x1CAF48u: goto label_1caf48;
            case 0x1CAF4Cu: goto label_1caf4c;
            case 0x1CAF50u: goto label_1caf50;
            case 0x1CAF54u: goto label_1caf54;
            case 0x1CAF58u: goto label_1caf58;
            case 0x1CAF5Cu: goto label_1caf5c;
            case 0x1CAF60u: goto label_1caf60;
            case 0x1CAF64u: goto label_1caf64;
            case 0x1CAF68u: goto label_1caf68;
            case 0x1CAF6Cu: goto label_1caf6c;
            case 0x1CAF70u: goto label_1caf70;
            case 0x1CAF74u: goto label_1caf74;
            case 0x1CAF78u: goto label_1caf78;
            case 0x1CAF7Cu: goto label_1caf7c;
            case 0x1CAF80u: goto label_1caf80;
            case 0x1CAF84u: goto label_1caf84;
            case 0x1CAF88u: goto label_1caf88;
            case 0x1CAF8Cu: goto label_1caf8c;
            case 0x1CAF90u: goto label_1caf90;
            case 0x1CAF94u: goto label_1caf94;
            case 0x1CAF98u: goto label_1caf98;
            case 0x1CAF9Cu: goto label_1caf9c;
            case 0x1CAFA0u: goto label_1cafa0;
            case 0x1CAFA4u: goto label_1cafa4;
            case 0x1CAFA8u: goto label_1cafa8;
            case 0x1CAFACu: goto label_1cafac;
            case 0x1CAFB0u: goto label_1cafb0;
            case 0x1CAFB4u: goto label_1cafb4;
            case 0x1CAFB8u: goto label_1cafb8;
            case 0x1CAFBCu: goto label_1cafbc;
            case 0x1CAFC0u: goto label_1cafc0;
            case 0x1CAFC4u: goto label_1cafc4;
            case 0x1CAFC8u: goto label_1cafc8;
            case 0x1CAFCCu: goto label_1cafcc;
            case 0x1CAFD0u: goto label_1cafd0;
            case 0x1CAFD4u: goto label_1cafd4;
            case 0x1CAFD8u: goto label_1cafd8;
            case 0x1CAFDCu: goto label_1cafdc;
            case 0x1CAFE0u: goto label_1cafe0;
            case 0x1CAFE4u: goto label_1cafe4;
            case 0x1CAFE8u: goto label_1cafe8;
            case 0x1CAFECu: goto label_1cafec;
            case 0x1CAFF0u: goto label_1caff0;
            case 0x1CAFF4u: goto label_1caff4;
            case 0x1CAFF8u: goto label_1caff8;
            case 0x1CAFFCu: goto label_1caffc;
            case 0x1CB000u: goto label_1cb000;
            case 0x1CB004u: goto label_1cb004;
            case 0x1CB008u: goto label_1cb008;
            case 0x1CB00Cu: goto label_1cb00c;
            case 0x1CB010u: goto label_1cb010;
            case 0x1CB014u: goto label_1cb014;
            case 0x1CB018u: goto label_1cb018;
            case 0x1CB01Cu: goto label_1cb01c;
            case 0x1CB020u: goto label_1cb020;
            case 0x1CB024u: goto label_1cb024;
            case 0x1CB028u: goto label_1cb028;
            case 0x1CB02Cu: goto label_1cb02c;
            case 0x1CB030u: goto label_1cb030;
            case 0x1CB034u: goto label_1cb034;
            case 0x1CB038u: goto label_1cb038;
            case 0x1CB03Cu: goto label_1cb03c;
            case 0x1CB040u: goto label_1cb040;
            case 0x1CB044u: goto label_1cb044;
            case 0x1CB048u: goto label_1cb048;
            case 0x1CB04Cu: goto label_1cb04c;
            case 0x1CB050u: goto label_1cb050;
            case 0x1CB054u: goto label_1cb054;
            case 0x1CB058u: goto label_1cb058;
            case 0x1CB05Cu: goto label_1cb05c;
            case 0x1CB060u: goto label_1cb060;
            case 0x1CB064u: goto label_1cb064;
            case 0x1CB068u: goto label_1cb068;
            case 0x1CB06Cu: goto label_1cb06c;
            case 0x1CB070u: goto label_1cb070;
            case 0x1CB074u: goto label_1cb074;
            case 0x1CB078u: goto label_1cb078;
            case 0x1CB07Cu: goto label_1cb07c;
            case 0x1CB080u: goto label_1cb080;
            case 0x1CB084u: goto label_1cb084;
            case 0x1CB088u: goto label_1cb088;
            case 0x1CB08Cu: goto label_1cb08c;
            case 0x1CB090u: goto label_1cb090;
            case 0x1CB094u: goto label_1cb094;
            case 0x1CB098u: goto label_1cb098;
            case 0x1CB09Cu: goto label_1cb09c;
            case 0x1CB0A0u: goto label_1cb0a0;
            case 0x1CB0A4u: goto label_1cb0a4;
            case 0x1CB0A8u: goto label_1cb0a8;
            case 0x1CB0ACu: goto label_1cb0ac;
            case 0x1CB0B0u: goto label_1cb0b0;
            case 0x1CB0B4u: goto label_1cb0b4;
            case 0x1CB0B8u: goto label_1cb0b8;
            case 0x1CB0BCu: goto label_1cb0bc;
            case 0x1CB0C0u: goto label_1cb0c0;
            case 0x1CB0C4u: goto label_1cb0c4;
            case 0x1CB0C8u: goto label_1cb0c8;
            case 0x1CB0CCu: goto label_1cb0cc;
            case 0x1CB0D0u: goto label_1cb0d0;
            case 0x1CB0D4u: goto label_1cb0d4;
            case 0x1CB0D8u: goto label_1cb0d8;
            case 0x1CB0DCu: goto label_1cb0dc;
            case 0x1CB0E0u: goto label_1cb0e0;
            case 0x1CB0E4u: goto label_1cb0e4;
            case 0x1CB0E8u: goto label_1cb0e8;
            case 0x1CB0ECu: goto label_1cb0ec;
            case 0x1CB0F0u: goto label_1cb0f0;
            case 0x1CB0F4u: goto label_1cb0f4;
            case 0x1CB0F8u: goto label_1cb0f8;
            case 0x1CB0FCu: goto label_1cb0fc;
            case 0x1CB100u: goto label_1cb100;
            case 0x1CB104u: goto label_1cb104;
            case 0x1CB108u: goto label_1cb108;
            case 0x1CB10Cu: goto label_1cb10c;
            case 0x1CB110u: goto label_1cb110;
            case 0x1CB114u: goto label_1cb114;
            case 0x1CB118u: goto label_1cb118;
            case 0x1CB11Cu: goto label_1cb11c;
            case 0x1CB120u: goto label_1cb120;
            case 0x1CB124u: goto label_1cb124;
            case 0x1CB128u: goto label_1cb128;
            case 0x1CB12Cu: goto label_1cb12c;
            case 0x1CB130u: goto label_1cb130;
            case 0x1CB134u: goto label_1cb134;
            case 0x1CB138u: goto label_1cb138;
            case 0x1CB13Cu: goto label_1cb13c;
            case 0x1CB140u: goto label_1cb140;
            case 0x1CB144u: goto label_1cb144;
            case 0x1CB148u: goto label_1cb148;
            case 0x1CB14Cu: goto label_1cb14c;
            case 0x1CB150u: goto label_1cb150;
            case 0x1CB154u: goto label_1cb154;
            case 0x1CB158u: goto label_1cb158;
            case 0x1CB15Cu: goto label_1cb15c;
            case 0x1CB160u: goto label_1cb160;
            case 0x1CB164u: goto label_1cb164;
            case 0x1CB168u: goto label_1cb168;
            case 0x1CB16Cu: goto label_1cb16c;
            case 0x1CB170u: goto label_1cb170;
            case 0x1CB174u: goto label_1cb174;
            case 0x1CB178u: goto label_1cb178;
            case 0x1CB17Cu: goto label_1cb17c;
            case 0x1CB180u: goto label_1cb180;
            case 0x1CB184u: goto label_1cb184;
            case 0x1CB188u: goto label_1cb188;
            case 0x1CB18Cu: goto label_1cb18c;
            case 0x1CB190u: goto label_1cb190;
            case 0x1CB194u: goto label_1cb194;
            case 0x1CB198u: goto label_1cb198;
            case 0x1CB19Cu: goto label_1cb19c;
            case 0x1CB1A0u: goto label_1cb1a0;
            case 0x1CB1A4u: goto label_1cb1a4;
            case 0x1CB1A8u: goto label_1cb1a8;
            case 0x1CB1ACu: goto label_1cb1ac;
            case 0x1CB1B0u: goto label_1cb1b0;
            case 0x1CB1B4u: goto label_1cb1b4;
            case 0x1CB1B8u: goto label_1cb1b8;
            case 0x1CB1BCu: goto label_1cb1bc;
            case 0x1CB1C0u: goto label_1cb1c0;
            case 0x1CB1C4u: goto label_1cb1c4;
            case 0x1CB1C8u: goto label_1cb1c8;
            case 0x1CB1CCu: goto label_1cb1cc;
            case 0x1CB1D0u: goto label_1cb1d0;
            case 0x1CB1D4u: goto label_1cb1d4;
            case 0x1CB1D8u: goto label_1cb1d8;
            case 0x1CB1DCu: goto label_1cb1dc;
            case 0x1CB1E0u: goto label_1cb1e0;
            case 0x1CB1E4u: goto label_1cb1e4;
            case 0x1CB1E8u: goto label_1cb1e8;
            case 0x1CB1ECu: goto label_1cb1ec;
            case 0x1CB1F0u: goto label_1cb1f0;
            case 0x1CB1F4u: goto label_1cb1f4;
            case 0x1CB1F8u: goto label_1cb1f8;
            case 0x1CB1FCu: goto label_1cb1fc;
            case 0x1CB200u: goto label_1cb200;
            case 0x1CB204u: goto label_1cb204;
            case 0x1CB208u: goto label_1cb208;
            case 0x1CB20Cu: goto label_1cb20c;
            case 0x1CB210u: goto label_1cb210;
            case 0x1CB214u: goto label_1cb214;
            case 0x1CB218u: goto label_1cb218;
            case 0x1CB21Cu: goto label_1cb21c;
            case 0x1CB220u: goto label_1cb220;
            case 0x1CB224u: goto label_1cb224;
            case 0x1CB228u: goto label_1cb228;
            case 0x1CB22Cu: goto label_1cb22c;
            case 0x1CB230u: goto label_1cb230;
            case 0x1CB234u: goto label_1cb234;
            case 0x1CB238u: goto label_1cb238;
            case 0x1CB23Cu: goto label_1cb23c;
            case 0x1CB240u: goto label_1cb240;
            case 0x1CB244u: goto label_1cb244;
            case 0x1CB248u: goto label_1cb248;
            case 0x1CB24Cu: goto label_1cb24c;
            case 0x1CB250u: goto label_1cb250;
            case 0x1CB254u: goto label_1cb254;
            case 0x1CB258u: goto label_1cb258;
            case 0x1CB25Cu: goto label_1cb25c;
            case 0x1CB260u: goto label_1cb260;
            case 0x1CB264u: goto label_1cb264;
            case 0x1CB268u: goto label_1cb268;
            case 0x1CB26Cu: goto label_1cb26c;
            case 0x1CB270u: goto label_1cb270;
            case 0x1CB274u: goto label_1cb274;
            case 0x1CB278u: goto label_1cb278;
            case 0x1CB27Cu: goto label_1cb27c;
            case 0x1CB280u: goto label_1cb280;
            case 0x1CB284u: goto label_1cb284;
            case 0x1CB288u: goto label_1cb288;
            case 0x1CB28Cu: goto label_1cb28c;
            case 0x1CB290u: goto label_1cb290;
            case 0x1CB294u: goto label_1cb294;
            case 0x1CB298u: goto label_1cb298;
            case 0x1CB29Cu: goto label_1cb29c;
            case 0x1CB2A0u: goto label_1cb2a0;
            case 0x1CB2A4u: goto label_1cb2a4;
            case 0x1CB2A8u: goto label_1cb2a8;
            case 0x1CB2ACu: goto label_1cb2ac;
            case 0x1CB2B0u: goto label_1cb2b0;
            case 0x1CB2B4u: goto label_1cb2b4;
            case 0x1CB2B8u: goto label_1cb2b8;
            case 0x1CB2BCu: goto label_1cb2bc;
            case 0x1CB2C0u: goto label_1cb2c0;
            case 0x1CB2C4u: goto label_1cb2c4;
            case 0x1CB2C8u: goto label_1cb2c8;
            case 0x1CB2CCu: goto label_1cb2cc;
            case 0x1CB2D0u: goto label_1cb2d0;
            case 0x1CB2D4u: goto label_1cb2d4;
            case 0x1CB2D8u: goto label_1cb2d8;
            case 0x1CB2DCu: goto label_1cb2dc;
            case 0x1CB2E0u: goto label_1cb2e0;
            case 0x1CB2E4u: goto label_1cb2e4;
            case 0x1CB2E8u: goto label_1cb2e8;
            case 0x1CB2ECu: goto label_1cb2ec;
            case 0x1CB2F0u: goto label_1cb2f0;
            case 0x1CB2F4u: goto label_1cb2f4;
            case 0x1CB2F8u: goto label_1cb2f8;
            case 0x1CB2FCu: goto label_1cb2fc;
            case 0x1CB300u: goto label_1cb300;
            case 0x1CB304u: goto label_1cb304;
            case 0x1CB308u: goto label_1cb308;
            case 0x1CB30Cu: goto label_1cb30c;
            case 0x1CB310u: goto label_1cb310;
            case 0x1CB314u: goto label_1cb314;
            case 0x1CB318u: goto label_1cb318;
            case 0x1CB31Cu: goto label_1cb31c;
            case 0x1CB320u: goto label_1cb320;
            case 0x1CB324u: goto label_1cb324;
            case 0x1CB328u: goto label_1cb328;
            case 0x1CB32Cu: goto label_1cb32c;
            case 0x1CB330u: goto label_1cb330;
            case 0x1CB334u: goto label_1cb334;
            case 0x1CB338u: goto label_1cb338;
            case 0x1CB33Cu: goto label_1cb33c;
            case 0x1CB340u: goto label_1cb340;
            case 0x1CB344u: goto label_1cb344;
            case 0x1CB348u: goto label_1cb348;
            case 0x1CB34Cu: goto label_1cb34c;
            case 0x1CB350u: goto label_1cb350;
            case 0x1CB354u: goto label_1cb354;
            case 0x1CB358u: goto label_1cb358;
            case 0x1CB35Cu: goto label_1cb35c;
            case 0x1CB360u: goto label_1cb360;
            case 0x1CB364u: goto label_1cb364;
            case 0x1CB368u: goto label_1cb368;
            case 0x1CB36Cu: goto label_1cb36c;
            case 0x1CB370u: goto label_1cb370;
            case 0x1CB374u: goto label_1cb374;
            case 0x1CB378u: goto label_1cb378;
            case 0x1CB37Cu: goto label_1cb37c;
            case 0x1CB380u: goto label_1cb380;
            case 0x1CB384u: goto label_1cb384;
            case 0x1CB388u: goto label_1cb388;
            case 0x1CB38Cu: goto label_1cb38c;
            case 0x1CB390u: goto label_1cb390;
            case 0x1CB394u: goto label_1cb394;
            case 0x1CB398u: goto label_1cb398;
            case 0x1CB39Cu: goto label_1cb39c;
            case 0x1CB3A0u: goto label_1cb3a0;
            case 0x1CB3A4u: goto label_1cb3a4;
            case 0x1CB3A8u: goto label_1cb3a8;
            case 0x1CB3ACu: goto label_1cb3ac;
            case 0x1CB3B0u: goto label_1cb3b0;
            case 0x1CB3B4u: goto label_1cb3b4;
            case 0x1CB3B8u: goto label_1cb3b8;
            case 0x1CB3BCu: goto label_1cb3bc;
            case 0x1CB3C0u: goto label_1cb3c0;
            case 0x1CB3C4u: goto label_1cb3c4;
            case 0x1CB3C8u: goto label_1cb3c8;
            case 0x1CB3CCu: goto label_1cb3cc;
            case 0x1CB3D0u: goto label_1cb3d0;
            case 0x1CB3D4u: goto label_1cb3d4;
            case 0x1CB3D8u: goto label_1cb3d8;
            case 0x1CB3DCu: goto label_1cb3dc;
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3E4u: goto label_1cb3e4;
            case 0x1CB3E8u: goto label_1cb3e8;
            case 0x1CB3ECu: goto label_1cb3ec;
            case 0x1CB3F0u: goto label_1cb3f0;
            case 0x1CB3F4u: goto label_1cb3f4;
            case 0x1CB3F8u: goto label_1cb3f8;
            case 0x1CB3FCu: goto label_1cb3fc;
            case 0x1CB400u: goto label_1cb400;
            case 0x1CB404u: goto label_1cb404;
            case 0x1CB408u: goto label_1cb408;
            case 0x1CB40Cu: goto label_1cb40c;
            case 0x1CB410u: goto label_1cb410;
            case 0x1CB414u: goto label_1cb414;
            case 0x1CB418u: goto label_1cb418;
            case 0x1CB41Cu: goto label_1cb41c;
            case 0x1CB420u: goto label_1cb420;
            case 0x1CB424u: goto label_1cb424;
            case 0x1CB428u: goto label_1cb428;
            case 0x1CB42Cu: goto label_1cb42c;
            case 0x1CB430u: goto label_1cb430;
            case 0x1CB434u: goto label_1cb434;
            case 0x1CB438u: goto label_1cb438;
            case 0x1CB43Cu: goto label_1cb43c;
            case 0x1CB440u: goto label_1cb440;
            case 0x1CB444u: goto label_1cb444;
            case 0x1CB448u: goto label_1cb448;
            case 0x1CB44Cu: goto label_1cb44c;
            case 0x1CB450u: goto label_1cb450;
            case 0x1CB454u: goto label_1cb454;
            case 0x1CB458u: goto label_1cb458;
            case 0x1CB45Cu: goto label_1cb45c;
            case 0x1CB460u: goto label_1cb460;
            case 0x1CB464u: goto label_1cb464;
            case 0x1CB468u: goto label_1cb468;
            case 0x1CB46Cu: goto label_1cb46c;
            case 0x1CB470u: goto label_1cb470;
            case 0x1CB474u: goto label_1cb474;
            case 0x1CB478u: goto label_1cb478;
            case 0x1CB47Cu: goto label_1cb47c;
            case 0x1CB480u: goto label_1cb480;
            case 0x1CB484u: goto label_1cb484;
            case 0x1CB488u: goto label_1cb488;
            case 0x1CB48Cu: goto label_1cb48c;
            case 0x1CB490u: goto label_1cb490;
            case 0x1CB494u: goto label_1cb494;
            case 0x1CB498u: goto label_1cb498;
            case 0x1CB49Cu: goto label_1cb49c;
            case 0x1CB4A0u: goto label_1cb4a0;
            case 0x1CB4A4u: goto label_1cb4a4;
            case 0x1CB4A8u: goto label_1cb4a8;
            case 0x1CB4ACu: goto label_1cb4ac;
            case 0x1CB4B0u: goto label_1cb4b0;
            case 0x1CB4B4u: goto label_1cb4b4;
            case 0x1CB4B8u: goto label_1cb4b8;
            case 0x1CB4BCu: goto label_1cb4bc;
            case 0x1CB4C0u: goto label_1cb4c0;
            case 0x1CB4C4u: goto label_1cb4c4;
            case 0x1CB4C8u: goto label_1cb4c8;
            case 0x1CB4CCu: goto label_1cb4cc;
            case 0x1CB4D0u: goto label_1cb4d0;
            case 0x1CB4D4u: goto label_1cb4d4;
            case 0x1CB4D8u: goto label_1cb4d8;
            case 0x1CB4DCu: goto label_1cb4dc;
            case 0x1CB4E0u: goto label_1cb4e0;
            case 0x1CB4E4u: goto label_1cb4e4;
            case 0x1CB4E8u: goto label_1cb4e8;
            case 0x1CB4ECu: goto label_1cb4ec;
            case 0x1CB4F0u: goto label_1cb4f0;
            case 0x1CB4F4u: goto label_1cb4f4;
            case 0x1CB4F8u: goto label_1cb4f8;
            case 0x1CB4FCu: goto label_1cb4fc;
            case 0x1CB500u: goto label_1cb500;
            case 0x1CB504u: goto label_1cb504;
            case 0x1CB508u: goto label_1cb508;
            case 0x1CB50Cu: goto label_1cb50c;
            case 0x1CB510u: goto label_1cb510;
            case 0x1CB514u: goto label_1cb514;
            case 0x1CB518u: goto label_1cb518;
            case 0x1CB51Cu: goto label_1cb51c;
            case 0x1CB520u: goto label_1cb520;
            case 0x1CB524u: goto label_1cb524;
            case 0x1CB528u: goto label_1cb528;
            case 0x1CB52Cu: goto label_1cb52c;
            case 0x1CB530u: goto label_1cb530;
            case 0x1CB534u: goto label_1cb534;
            case 0x1CB538u: goto label_1cb538;
            case 0x1CB53Cu: goto label_1cb53c;
            case 0x1CB540u: goto label_1cb540;
            case 0x1CB544u: goto label_1cb544;
            case 0x1CB548u: goto label_1cb548;
            case 0x1CB54Cu: goto label_1cb54c;
            case 0x1CB550u: goto label_1cb550;
            case 0x1CB554u: goto label_1cb554;
            case 0x1CB558u: goto label_1cb558;
            case 0x1CB55Cu: goto label_1cb55c;
            case 0x1CB560u: goto label_1cb560;
            case 0x1CB564u: goto label_1cb564;
            case 0x1CB568u: goto label_1cb568;
            case 0x1CB56Cu: goto label_1cb56c;
            case 0x1CB570u: goto label_1cb570;
            case 0x1CB574u: goto label_1cb574;
            case 0x1CB578u: goto label_1cb578;
            case 0x1CB57Cu: goto label_1cb57c;
            case 0x1CB580u: goto label_1cb580;
            case 0x1CB584u: goto label_1cb584;
            case 0x1CB588u: goto label_1cb588;
            case 0x1CB58Cu: goto label_1cb58c;
            case 0x1CB590u: goto label_1cb590;
            case 0x1CB594u: goto label_1cb594;
            case 0x1CB598u: goto label_1cb598;
            case 0x1CB59Cu: goto label_1cb59c;
            case 0x1CB5A0u: goto label_1cb5a0;
            case 0x1CB5A4u: goto label_1cb5a4;
            case 0x1CB5A8u: goto label_1cb5a8;
            case 0x1CB5ACu: goto label_1cb5ac;
            case 0x1CB5B0u: goto label_1cb5b0;
            case 0x1CB5B4u: goto label_1cb5b4;
            case 0x1CB5B8u: goto label_1cb5b8;
            case 0x1CB5BCu: goto label_1cb5bc;
            case 0x1CB5C0u: goto label_1cb5c0;
            case 0x1CB5C4u: goto label_1cb5c4;
            case 0x1CB5C8u: goto label_1cb5c8;
            case 0x1CB5CCu: goto label_1cb5cc;
            case 0x1CB5D0u: goto label_1cb5d0;
            case 0x1CB5D4u: goto label_1cb5d4;
            case 0x1CB5D8u: goto label_1cb5d8;
            case 0x1CB5DCu: goto label_1cb5dc;
            case 0x1CB5E0u: goto label_1cb5e0;
            case 0x1CB5E4u: goto label_1cb5e4;
            case 0x1CB5E8u: goto label_1cb5e8;
            case 0x1CB5ECu: goto label_1cb5ec;
            case 0x1CB5F0u: goto label_1cb5f0;
            case 0x1CB5F4u: goto label_1cb5f4;
            case 0x1CB5F8u: goto label_1cb5f8;
            case 0x1CB5FCu: goto label_1cb5fc;
            case 0x1CB600u: goto label_1cb600;
            case 0x1CB604u: goto label_1cb604;
            case 0x1CB608u: goto label_1cb608;
            case 0x1CB60Cu: goto label_1cb60c;
            case 0x1CB610u: goto label_1cb610;
            case 0x1CB614u: goto label_1cb614;
            case 0x1CB618u: goto label_1cb618;
            case 0x1CB61Cu: goto label_1cb61c;
            case 0x1CB620u: goto label_1cb620;
            case 0x1CB624u: goto label_1cb624;
            case 0x1CB628u: goto label_1cb628;
            case 0x1CB62Cu: goto label_1cb62c;
            case 0x1CB630u: goto label_1cb630;
            case 0x1CB634u: goto label_1cb634;
            case 0x1CB638u: goto label_1cb638;
            case 0x1CB63Cu: goto label_1cb63c;
            case 0x1CB640u: goto label_1cb640;
            case 0x1CB644u: goto label_1cb644;
            case 0x1CB648u: goto label_1cb648;
            case 0x1CB64Cu: goto label_1cb64c;
            case 0x1CB650u: goto label_1cb650;
            case 0x1CB654u: goto label_1cb654;
            case 0x1CB658u: goto label_1cb658;
            case 0x1CB65Cu: goto label_1cb65c;
            case 0x1CB660u: goto label_1cb660;
            case 0x1CB664u: goto label_1cb664;
            case 0x1CB668u: goto label_1cb668;
            case 0x1CB66Cu: goto label_1cb66c;
            case 0x1CB670u: goto label_1cb670;
            case 0x1CB674u: goto label_1cb674;
            case 0x1CB678u: goto label_1cb678;
            case 0x1CB67Cu: goto label_1cb67c;
            case 0x1CB680u: goto label_1cb680;
            case 0x1CB684u: goto label_1cb684;
            case 0x1CB688u: goto label_1cb688;
            case 0x1CB68Cu: goto label_1cb68c;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB694u: goto label_1cb694;
            case 0x1CB698u: goto label_1cb698;
            case 0x1CB69Cu: goto label_1cb69c;
            case 0x1CB6A0u: goto label_1cb6a0;
            case 0x1CB6A4u: goto label_1cb6a4;
            case 0x1CB6A8u: goto label_1cb6a8;
            case 0x1CB6ACu: goto label_1cb6ac;
            case 0x1CB6B0u: goto label_1cb6b0;
            case 0x1CB6B4u: goto label_1cb6b4;
            case 0x1CB6B8u: goto label_1cb6b8;
            case 0x1CB6BCu: goto label_1cb6bc;
            case 0x1CB6C0u: goto label_1cb6c0;
            case 0x1CB6C4u: goto label_1cb6c4;
            case 0x1CB6C8u: goto label_1cb6c8;
            case 0x1CB6CCu: goto label_1cb6cc;
            case 0x1CB6D0u: goto label_1cb6d0;
            case 0x1CB6D4u: goto label_1cb6d4;
            case 0x1CB6D8u: goto label_1cb6d8;
            case 0x1CB6DCu: goto label_1cb6dc;
            case 0x1CB6E0u: goto label_1cb6e0;
            case 0x1CB6E4u: goto label_1cb6e4;
            case 0x1CB6E8u: goto label_1cb6e8;
            case 0x1CB6ECu: goto label_1cb6ec;
            case 0x1CB6F0u: goto label_1cb6f0;
            case 0x1CB6F4u: goto label_1cb6f4;
            case 0x1CB6F8u: goto label_1cb6f8;
            case 0x1CB6FCu: goto label_1cb6fc;
            case 0x1CB700u: goto label_1cb700;
            case 0x1CB704u: goto label_1cb704;
            case 0x1CB708u: goto label_1cb708;
            case 0x1CB70Cu: goto label_1cb70c;
            case 0x1CB710u: goto label_1cb710;
            case 0x1CB714u: goto label_1cb714;
            case 0x1CB718u: goto label_1cb718;
            case 0x1CB71Cu: goto label_1cb71c;
            case 0x1CB720u: goto label_1cb720;
            case 0x1CB724u: goto label_1cb724;
            case 0x1CB728u: goto label_1cb728;
            case 0x1CB72Cu: goto label_1cb72c;
            case 0x1CB730u: goto label_1cb730;
            case 0x1CB734u: goto label_1cb734;
            case 0x1CB738u: goto label_1cb738;
            case 0x1CB73Cu: goto label_1cb73c;
            case 0x1CB740u: goto label_1cb740;
            case 0x1CB744u: goto label_1cb744;
            case 0x1CB748u: goto label_1cb748;
            case 0x1CB74Cu: goto label_1cb74c;
            case 0x1CB750u: goto label_1cb750;
            case 0x1CB754u: goto label_1cb754;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB75Cu: goto label_1cb75c;
            case 0x1CB760u: goto label_1cb760;
            case 0x1CB764u: goto label_1cb764;
            case 0x1CB768u: goto label_1cb768;
            case 0x1CB76Cu: goto label_1cb76c;
            case 0x1CB770u: goto label_1cb770;
            case 0x1CB774u: goto label_1cb774;
            case 0x1CB778u: goto label_1cb778;
            case 0x1CB77Cu: goto label_1cb77c;
            case 0x1CB780u: goto label_1cb780;
            case 0x1CB784u: goto label_1cb784;
            case 0x1CB788u: goto label_1cb788;
            case 0x1CB78Cu: goto label_1cb78c;
            case 0x1CB790u: goto label_1cb790;
            case 0x1CB794u: goto label_1cb794;
            case 0x1CB798u: goto label_1cb798;
            case 0x1CB79Cu: goto label_1cb79c;
            case 0x1CB7A0u: goto label_1cb7a0;
            case 0x1CB7A4u: goto label_1cb7a4;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7ACu: goto label_1cb7ac;
            case 0x1CB7B0u: goto label_1cb7b0;
            case 0x1CB7B4u: goto label_1cb7b4;
            case 0x1CB7B8u: goto label_1cb7b8;
            case 0x1CB7BCu: goto label_1cb7bc;
            case 0x1CB7C0u: goto label_1cb7c0;
            case 0x1CB7C4u: goto label_1cb7c4;
            case 0x1CB7C8u: goto label_1cb7c8;
            case 0x1CB7CCu: goto label_1cb7cc;
            case 0x1CB7D0u: goto label_1cb7d0;
            case 0x1CB7D4u: goto label_1cb7d4;
            case 0x1CB7D8u: goto label_1cb7d8;
            case 0x1CB7DCu: goto label_1cb7dc;
            case 0x1CB7E0u: goto label_1cb7e0;
            case 0x1CB7E4u: goto label_1cb7e4;
            case 0x1CB7E8u: goto label_1cb7e8;
            case 0x1CB7ECu: goto label_1cb7ec;
            case 0x1CB7F0u: goto label_1cb7f0;
            case 0x1CB7F4u: goto label_1cb7f4;
            case 0x1CB7F8u: goto label_1cb7f8;
            case 0x1CB7FCu: goto label_1cb7fc;
            case 0x1CB800u: goto label_1cb800;
            case 0x1CB804u: goto label_1cb804;
            case 0x1CB808u: goto label_1cb808;
            case 0x1CB80Cu: goto label_1cb80c;
            case 0x1CB810u: goto label_1cb810;
            case 0x1CB814u: goto label_1cb814;
            case 0x1CB818u: goto label_1cb818;
            case 0x1CB81Cu: goto label_1cb81c;
            case 0x1CB820u: goto label_1cb820;
            case 0x1CB824u: goto label_1cb824;
            case 0x1CB828u: goto label_1cb828;
            case 0x1CB82Cu: goto label_1cb82c;
            case 0x1CB830u: goto label_1cb830;
            case 0x1CB834u: goto label_1cb834;
            case 0x1CB838u: goto label_1cb838;
            case 0x1CB83Cu: goto label_1cb83c;
            case 0x1CB840u: goto label_1cb840;
            case 0x1CB844u: goto label_1cb844;
            case 0x1CB848u: goto label_1cb848;
            case 0x1CB84Cu: goto label_1cb84c;
            case 0x1CB850u: goto label_1cb850;
            case 0x1CB854u: goto label_1cb854;
            case 0x1CB858u: goto label_1cb858;
            case 0x1CB85Cu: goto label_1cb85c;
            case 0x1CB860u: goto label_1cb860;
            case 0x1CB864u: goto label_1cb864;
            case 0x1CB868u: goto label_1cb868;
            case 0x1CB86Cu: goto label_1cb86c;
            case 0x1CB870u: goto label_1cb870;
            case 0x1CB874u: goto label_1cb874;
            case 0x1CB878u: goto label_1cb878;
            case 0x1CB87Cu: goto label_1cb87c;
            case 0x1CB880u: goto label_1cb880;
            case 0x1CB884u: goto label_1cb884;
            case 0x1CB888u: goto label_1cb888;
            case 0x1CB88Cu: goto label_1cb88c;
            case 0x1CB890u: goto label_1cb890;
            case 0x1CB894u: goto label_1cb894;
            case 0x1CB898u: goto label_1cb898;
            case 0x1CB89Cu: goto label_1cb89c;
            case 0x1CB8A0u: goto label_1cb8a0;
            case 0x1CB8A4u: goto label_1cb8a4;
            case 0x1CB8A8u: goto label_1cb8a8;
            case 0x1CB8ACu: goto label_1cb8ac;
            case 0x1CB8B0u: goto label_1cb8b0;
            case 0x1CB8B4u: goto label_1cb8b4;
            case 0x1CB8B8u: goto label_1cb8b8;
            case 0x1CB8BCu: goto label_1cb8bc;
            case 0x1CB8C0u: goto label_1cb8c0;
            case 0x1CB8C4u: goto label_1cb8c4;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB8CCu: goto label_1cb8cc;
            case 0x1CB8D0u: goto label_1cb8d0;
            case 0x1CB8D4u: goto label_1cb8d4;
            case 0x1CB8D8u: goto label_1cb8d8;
            case 0x1CB8DCu: goto label_1cb8dc;
            case 0x1CB8E0u: goto label_1cb8e0;
            case 0x1CB8E4u: goto label_1cb8e4;
            case 0x1CB8E8u: goto label_1cb8e8;
            case 0x1CB8ECu: goto label_1cb8ec;
            case 0x1CB8F0u: goto label_1cb8f0;
            case 0x1CB8F4u: goto label_1cb8f4;
            case 0x1CB8F8u: goto label_1cb8f8;
            case 0x1CB8FCu: goto label_1cb8fc;
            case 0x1CB900u: goto label_1cb900;
            case 0x1CB904u: goto label_1cb904;
            case 0x1CB908u: goto label_1cb908;
            case 0x1CB90Cu: goto label_1cb90c;
            case 0x1CB910u: goto label_1cb910;
            case 0x1CB914u: goto label_1cb914;
            case 0x1CB918u: goto label_1cb918;
            case 0x1CB91Cu: goto label_1cb91c;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB924u: goto label_1cb924;
            case 0x1CB928u: goto label_1cb928;
            case 0x1CB92Cu: goto label_1cb92c;
            case 0x1CB930u: goto label_1cb930;
            case 0x1CB934u: goto label_1cb934;
            case 0x1CB938u: goto label_1cb938;
            case 0x1CB93Cu: goto label_1cb93c;
            case 0x1CB940u: goto label_1cb940;
            case 0x1CB944u: goto label_1cb944;
            case 0x1CB948u: goto label_1cb948;
            case 0x1CB94Cu: goto label_1cb94c;
            case 0x1CB950u: goto label_1cb950;
            case 0x1CB954u: goto label_1cb954;
            case 0x1CB958u: goto label_1cb958;
            case 0x1CB95Cu: goto label_1cb95c;
            case 0x1CB960u: goto label_1cb960;
            case 0x1CB964u: goto label_1cb964;
            case 0x1CB968u: goto label_1cb968;
            case 0x1CB96Cu: goto label_1cb96c;
            case 0x1CB970u: goto label_1cb970;
            case 0x1CB974u: goto label_1cb974;
            case 0x1CB978u: goto label_1cb978;
            case 0x1CB97Cu: goto label_1cb97c;
            case 0x1CB980u: goto label_1cb980;
            case 0x1CB984u: goto label_1cb984;
            case 0x1CB988u: goto label_1cb988;
            case 0x1CB98Cu: goto label_1cb98c;
            case 0x1CB990u: goto label_1cb990;
            case 0x1CB994u: goto label_1cb994;
            case 0x1CB998u: goto label_1cb998;
            case 0x1CB99Cu: goto label_1cb99c;
            case 0x1CB9A0u: goto label_1cb9a0;
            case 0x1CB9A4u: goto label_1cb9a4;
            case 0x1CB9A8u: goto label_1cb9a8;
            case 0x1CB9ACu: goto label_1cb9ac;
            case 0x1CB9B0u: goto label_1cb9b0;
            case 0x1CB9B4u: goto label_1cb9b4;
            case 0x1CB9B8u: goto label_1cb9b8;
            case 0x1CB9BCu: goto label_1cb9bc;
            case 0x1CB9C0u: goto label_1cb9c0;
            case 0x1CB9C4u: goto label_1cb9c4;
            case 0x1CB9C8u: goto label_1cb9c8;
            case 0x1CB9CCu: goto label_1cb9cc;
            case 0x1CB9D0u: goto label_1cb9d0;
            case 0x1CB9D4u: goto label_1cb9d4;
            case 0x1CB9D8u: goto label_1cb9d8;
            case 0x1CB9DCu: goto label_1cb9dc;
            case 0x1CB9E0u: goto label_1cb9e0;
            case 0x1CB9E4u: goto label_1cb9e4;
            case 0x1CB9E8u: goto label_1cb9e8;
            case 0x1CB9ECu: goto label_1cb9ec;
            case 0x1CB9F0u: goto label_1cb9f0;
            case 0x1CB9F4u: goto label_1cb9f4;
            case 0x1CB9F8u: goto label_1cb9f8;
            case 0x1CB9FCu: goto label_1cb9fc;
            case 0x1CBA00u: goto label_1cba00;
            case 0x1CBA04u: goto label_1cba04;
            case 0x1CBA08u: goto label_1cba08;
            case 0x1CBA0Cu: goto label_1cba0c;
            case 0x1CBA10u: goto label_1cba10;
            case 0x1CBA14u: goto label_1cba14;
            case 0x1CBA18u: goto label_1cba18;
            case 0x1CBA1Cu: goto label_1cba1c;
            case 0x1CBA20u: goto label_1cba20;
            case 0x1CBA24u: goto label_1cba24;
            case 0x1CBA28u: goto label_1cba28;
            case 0x1CBA2Cu: goto label_1cba2c;
            case 0x1CBA30u: goto label_1cba30;
            case 0x1CBA34u: goto label_1cba34;
            case 0x1CBA38u: goto label_1cba38;
            case 0x1CBA3Cu: goto label_1cba3c;
            case 0x1CBA40u: goto label_1cba40;
            case 0x1CBA44u: goto label_1cba44;
            case 0x1CBA48u: goto label_1cba48;
            case 0x1CBA4Cu: goto label_1cba4c;
            case 0x1CBA50u: goto label_1cba50;
            case 0x1CBA54u: goto label_1cba54;
            case 0x1CBA58u: goto label_1cba58;
            case 0x1CBA5Cu: goto label_1cba5c;
            case 0x1CBA60u: goto label_1cba60;
            case 0x1CBA64u: goto label_1cba64;
            case 0x1CBA68u: goto label_1cba68;
            case 0x1CBA6Cu: goto label_1cba6c;
            case 0x1CBA70u: goto label_1cba70;
            case 0x1CBA74u: goto label_1cba74;
            case 0x1CBA78u: goto label_1cba78;
            case 0x1CBA7Cu: goto label_1cba7c;
            case 0x1CBA80u: goto label_1cba80;
            case 0x1CBA84u: goto label_1cba84;
            case 0x1CBA88u: goto label_1cba88;
            case 0x1CBA8Cu: goto label_1cba8c;
            case 0x1CBA90u: goto label_1cba90;
            case 0x1CBA94u: goto label_1cba94;
            case 0x1CBA98u: goto label_1cba98;
            case 0x1CBA9Cu: goto label_1cba9c;
            case 0x1CBAA0u: goto label_1cbaa0;
            case 0x1CBAA4u: goto label_1cbaa4;
            case 0x1CBAA8u: goto label_1cbaa8;
            case 0x1CBAACu: goto label_1cbaac;
            case 0x1CBAB0u: goto label_1cbab0;
            case 0x1CBAB4u: goto label_1cbab4;
            case 0x1CBAB8u: goto label_1cbab8;
            case 0x1CBABCu: goto label_1cbabc;
            case 0x1CBAC0u: goto label_1cbac0;
            case 0x1CBAC4u: goto label_1cbac4;
            case 0x1CBAC8u: goto label_1cbac8;
            case 0x1CBACCu: goto label_1cbacc;
            case 0x1CBAD0u: goto label_1cbad0;
            case 0x1CBAD4u: goto label_1cbad4;
            case 0x1CBAD8u: goto label_1cbad8;
            case 0x1CBADCu: goto label_1cbadc;
            case 0x1CBAE0u: goto label_1cbae0;
            case 0x1CBAE4u: goto label_1cbae4;
            case 0x1CBAE8u: goto label_1cbae8;
            case 0x1CBAECu: goto label_1cbaec;
            case 0x1CBAF0u: goto label_1cbaf0;
            case 0x1CBAF4u: goto label_1cbaf4;
            case 0x1CBAF8u: goto label_1cbaf8;
            case 0x1CBAFCu: goto label_1cbafc;
            case 0x1CBB00u: goto label_1cbb00;
            case 0x1CBB04u: goto label_1cbb04;
            case 0x1CBB08u: goto label_1cbb08;
            case 0x1CBB0Cu: goto label_1cbb0c;
            case 0x1CBB10u: goto label_1cbb10;
            case 0x1CBB14u: goto label_1cbb14;
            case 0x1CBB18u: goto label_1cbb18;
            case 0x1CBB1Cu: goto label_1cbb1c;
            case 0x1CBB20u: goto label_1cbb20;
            case 0x1CBB24u: goto label_1cbb24;
            case 0x1CBB28u: goto label_1cbb28;
            case 0x1CBB2Cu: goto label_1cbb2c;
            case 0x1CBB30u: goto label_1cbb30;
            case 0x1CBB34u: goto label_1cbb34;
            case 0x1CBB38u: goto label_1cbb38;
            case 0x1CBB3Cu: goto label_1cbb3c;
            case 0x1CBB40u: goto label_1cbb40;
            case 0x1CBB44u: goto label_1cbb44;
            case 0x1CBB48u: goto label_1cbb48;
            case 0x1CBB4Cu: goto label_1cbb4c;
            case 0x1CBB50u: goto label_1cbb50;
            case 0x1CBB54u: goto label_1cbb54;
            case 0x1CBB58u: goto label_1cbb58;
            case 0x1CBB5Cu: goto label_1cbb5c;
            case 0x1CBB60u: goto label_1cbb60;
            case 0x1CBB64u: goto label_1cbb64;
            case 0x1CBB68u: goto label_1cbb68;
            case 0x1CBB6Cu: goto label_1cbb6c;
            case 0x1CBB70u: goto label_1cbb70;
            case 0x1CBB74u: goto label_1cbb74;
            case 0x1CBB78u: goto label_1cbb78;
            case 0x1CBB7Cu: goto label_1cbb7c;
            case 0x1CBB80u: goto label_1cbb80;
            case 0x1CBB84u: goto label_1cbb84;
            case 0x1CBB88u: goto label_1cbb88;
            case 0x1CBB8Cu: goto label_1cbb8c;
            case 0x1CBB90u: goto label_1cbb90;
            case 0x1CBB94u: goto label_1cbb94;
            case 0x1CBB98u: goto label_1cbb98;
            case 0x1CBB9Cu: goto label_1cbb9c;
            case 0x1CBBA0u: goto label_1cbba0;
            case 0x1CBBA4u: goto label_1cbba4;
            case 0x1CBBA8u: goto label_1cbba8;
            case 0x1CBBACu: goto label_1cbbac;
            case 0x1CBBB0u: goto label_1cbbb0;
            case 0x1CBBB4u: goto label_1cbbb4;
            case 0x1CBBB8u: goto label_1cbbb8;
            case 0x1CBBBCu: goto label_1cbbbc;
            case 0x1CBBC0u: goto label_1cbbc0;
            case 0x1CBBC4u: goto label_1cbbc4;
            case 0x1CBBC8u: goto label_1cbbc8;
            case 0x1CBBCCu: goto label_1cbbcc;
            case 0x1CBBD0u: goto label_1cbbd0;
            case 0x1CBBD4u: goto label_1cbbd4;
            case 0x1CBBD8u: goto label_1cbbd8;
            case 0x1CBBDCu: goto label_1cbbdc;
            case 0x1CBBE0u: goto label_1cbbe0;
            case 0x1CBBE4u: goto label_1cbbe4;
            case 0x1CBBE8u: goto label_1cbbe8;
            case 0x1CBBECu: goto label_1cbbec;
            case 0x1CBBF0u: goto label_1cbbf0;
            case 0x1CBBF4u: goto label_1cbbf4;
            case 0x1CBBF8u: goto label_1cbbf8;
            case 0x1CBBFCu: goto label_1cbbfc;
            case 0x1CBC00u: goto label_1cbc00;
            case 0x1CBC04u: goto label_1cbc04;
            case 0x1CBC08u: goto label_1cbc08;
            case 0x1CBC0Cu: goto label_1cbc0c;
            case 0x1CBC10u: goto label_1cbc10;
            case 0x1CBC14u: goto label_1cbc14;
            case 0x1CBC18u: goto label_1cbc18;
            case 0x1CBC1Cu: goto label_1cbc1c;
            case 0x1CBC20u: goto label_1cbc20;
            case 0x1CBC24u: goto label_1cbc24;
            case 0x1CBC28u: goto label_1cbc28;
            case 0x1CBC2Cu: goto label_1cbc2c;
            case 0x1CBC30u: goto label_1cbc30;
            case 0x1CBC34u: goto label_1cbc34;
            case 0x1CBC38u: goto label_1cbc38;
            case 0x1CBC3Cu: goto label_1cbc3c;
            case 0x1CBC40u: goto label_1cbc40;
            case 0x1CBC44u: goto label_1cbc44;
            case 0x1CBC48u: goto label_1cbc48;
            case 0x1CBC4Cu: goto label_1cbc4c;
            case 0x1CBC50u: goto label_1cbc50;
            case 0x1CBC54u: goto label_1cbc54;
            case 0x1CBC58u: goto label_1cbc58;
            case 0x1CBC5Cu: goto label_1cbc5c;
            case 0x1CBC60u: goto label_1cbc60;
            case 0x1CBC64u: goto label_1cbc64;
            case 0x1CBC68u: goto label_1cbc68;
            case 0x1CBC6Cu: goto label_1cbc6c;
            case 0x1CBC70u: goto label_1cbc70;
            case 0x1CBC74u: goto label_1cbc74;
            case 0x1CBC78u: goto label_1cbc78;
            case 0x1CBC7Cu: goto label_1cbc7c;
            case 0x1CBC80u: goto label_1cbc80;
            case 0x1CBC84u: goto label_1cbc84;
            case 0x1CBC88u: goto label_1cbc88;
            case 0x1CBC8Cu: goto label_1cbc8c;
            case 0x1CBC90u: goto label_1cbc90;
            case 0x1CBC94u: goto label_1cbc94;
            case 0x1CBC98u: goto label_1cbc98;
            case 0x1CBC9Cu: goto label_1cbc9c;
            case 0x1CBCA0u: goto label_1cbca0;
            case 0x1CBCA4u: goto label_1cbca4;
            case 0x1CBCA8u: goto label_1cbca8;
            case 0x1CBCACu: goto label_1cbcac;
            case 0x1CBCB0u: goto label_1cbcb0;
            case 0x1CBCB4u: goto label_1cbcb4;
            case 0x1CBCB8u: goto label_1cbcb8;
            case 0x1CBCBCu: goto label_1cbcbc;
            case 0x1CBCC0u: goto label_1cbcc0;
            case 0x1CBCC4u: goto label_1cbcc4;
            case 0x1CBCC8u: goto label_1cbcc8;
            case 0x1CBCCCu: goto label_1cbccc;
            case 0x1CBCD0u: goto label_1cbcd0;
            case 0x1CBCD4u: goto label_1cbcd4;
            case 0x1CBCD8u: goto label_1cbcd8;
            case 0x1CBCDCu: goto label_1cbcdc;
            case 0x1CBCE0u: goto label_1cbce0;
            case 0x1CBCE4u: goto label_1cbce4;
            case 0x1CBCE8u: goto label_1cbce8;
            case 0x1CBCECu: goto label_1cbcec;
            case 0x1CBCF0u: goto label_1cbcf0;
            case 0x1CBCF4u: goto label_1cbcf4;
            case 0x1CBCF8u: goto label_1cbcf8;
            case 0x1CBCFCu: goto label_1cbcfc;
            case 0x1CBD00u: goto label_1cbd00;
            case 0x1CBD04u: goto label_1cbd04;
            case 0x1CBD08u: goto label_1cbd08;
            case 0x1CBD0Cu: goto label_1cbd0c;
            case 0x1CBD10u: goto label_1cbd10;
            case 0x1CBD14u: goto label_1cbd14;
            case 0x1CBD18u: goto label_1cbd18;
            case 0x1CBD1Cu: goto label_1cbd1c;
            case 0x1CBD20u: goto label_1cbd20;
            case 0x1CBD24u: goto label_1cbd24;
            case 0x1CBD28u: goto label_1cbd28;
            case 0x1CBD2Cu: goto label_1cbd2c;
            case 0x1CBD30u: goto label_1cbd30;
            case 0x1CBD34u: goto label_1cbd34;
            case 0x1CBD38u: goto label_1cbd38;
            case 0x1CBD3Cu: goto label_1cbd3c;
            case 0x1CBD40u: goto label_1cbd40;
            case 0x1CBD44u: goto label_1cbd44;
            case 0x1CBD48u: goto label_1cbd48;
            case 0x1CBD4Cu: goto label_1cbd4c;
            case 0x1CBD50u: goto label_1cbd50;
            case 0x1CBD54u: goto label_1cbd54;
            case 0x1CBD58u: goto label_1cbd58;
            case 0x1CBD5Cu: goto label_1cbd5c;
            case 0x1CBD60u: goto label_1cbd60;
            case 0x1CBD64u: goto label_1cbd64;
            case 0x1CBD68u: goto label_1cbd68;
            case 0x1CBD6Cu: goto label_1cbd6c;
            case 0x1CBD70u: goto label_1cbd70;
            case 0x1CBD74u: goto label_1cbd74;
            case 0x1CBD78u: goto label_1cbd78;
            case 0x1CBD7Cu: goto label_1cbd7c;
            case 0x1CBD80u: goto label_1cbd80;
            case 0x1CBD84u: goto label_1cbd84;
            case 0x1CBD88u: goto label_1cbd88;
            case 0x1CBD8Cu: goto label_1cbd8c;
            case 0x1CBD90u: goto label_1cbd90;
            case 0x1CBD94u: goto label_1cbd94;
            case 0x1CBD98u: goto label_1cbd98;
            case 0x1CBD9Cu: goto label_1cbd9c;
            case 0x1CBDA0u: goto label_1cbda0;
            case 0x1CBDA4u: goto label_1cbda4;
            case 0x1CBDA8u: goto label_1cbda8;
            case 0x1CBDACu: goto label_1cbdac;
            case 0x1CBDB0u: goto label_1cbdb0;
            case 0x1CBDB4u: goto label_1cbdb4;
            case 0x1CBDB8u: goto label_1cbdb8;
            case 0x1CBDBCu: goto label_1cbdbc;
            case 0x1CBDC0u: goto label_1cbdc0;
            case 0x1CBDC4u: goto label_1cbdc4;
            case 0x1CBDC8u: goto label_1cbdc8;
            case 0x1CBDCCu: goto label_1cbdcc;
            case 0x1CBDD0u: goto label_1cbdd0;
            case 0x1CBDD4u: goto label_1cbdd4;
            case 0x1CBDD8u: goto label_1cbdd8;
            case 0x1CBDDCu: goto label_1cbddc;
            case 0x1CBDE0u: goto label_1cbde0;
            case 0x1CBDE4u: goto label_1cbde4;
            case 0x1CBDE8u: goto label_1cbde8;
            case 0x1CBDECu: goto label_1cbdec;
            case 0x1CBDF0u: goto label_1cbdf0;
            case 0x1CBDF4u: goto label_1cbdf4;
            case 0x1CBDF8u: goto label_1cbdf8;
            case 0x1CBDFCu: goto label_1cbdfc;
            case 0x1CBE00u: goto label_1cbe00;
            case 0x1CBE04u: goto label_1cbe04;
            case 0x1CBE08u: goto label_1cbe08;
            case 0x1CBE0Cu: goto label_1cbe0c;
            case 0x1CBE10u: goto label_1cbe10;
            case 0x1CBE14u: goto label_1cbe14;
            case 0x1CBE18u: goto label_1cbe18;
            case 0x1CBE1Cu: goto label_1cbe1c;
            case 0x1CBE20u: goto label_1cbe20;
            case 0x1CBE24u: goto label_1cbe24;
            case 0x1CBE28u: goto label_1cbe28;
            case 0x1CBE2Cu: goto label_1cbe2c;
            case 0x1CBE30u: goto label_1cbe30;
            case 0x1CBE34u: goto label_1cbe34;
            case 0x1CBE38u: goto label_1cbe38;
            case 0x1CBE3Cu: goto label_1cbe3c;
            case 0x1CBE40u: goto label_1cbe40;
            case 0x1CBE44u: goto label_1cbe44;
            case 0x1CBE48u: goto label_1cbe48;
            case 0x1CBE4Cu: goto label_1cbe4c;
            case 0x1CBE50u: goto label_1cbe50;
            case 0x1CBE54u: goto label_1cbe54;
            case 0x1CBE58u: goto label_1cbe58;
            case 0x1CBE5Cu: goto label_1cbe5c;
            case 0x1CBE60u: goto label_1cbe60;
            case 0x1CBE64u: goto label_1cbe64;
            case 0x1CBE68u: goto label_1cbe68;
            case 0x1CBE6Cu: goto label_1cbe6c;
            case 0x1CBE70u: goto label_1cbe70;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB2CCu; }
            if (ctx->pc != 0x1CB2CCu) { return; }
        }
    }
    ctx->pc = 0x1CB2CCu;
label_1cb2cc:
    // 0x1cb2cc: 0x100002e4  b           . + 4 + (0x2E4 << 2)
label_1cb2d0:
    if (ctx->pc == 0x1CB2D0u) {
        ctx->pc = 0x1CB2D4u;
        goto label_1cb2d4;
    }
    ctx->pc = 0x1CB2CCu;
    {
        const bool branch_taken_0x1cb2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb2cc) {
            ctx->pc = 0x1CBE60u;
            goto label_1cbe60;
        }
    }
    ctx->pc = 0x1CB2D4u;
label_1cb2d4:
    // 0x1cb2d4: 0x0  nop
    ctx->pc = 0x1cb2d4u;
    // NOP
label_1cb2d8:
    // 0x1cb2d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1cb2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1cb2dc:
    // 0x1cb2dc: 0x1c6001a6  bgtz        $v1, . + 4 + (0x1A6 << 2)
label_1cb2e0:
    if (ctx->pc == 0x1CB2E0u) {
        ctx->pc = 0x1CB2E0u;
            // 0x1cb2e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CB2E4u;
        goto label_1cb2e4;
    }
    ctx->pc = 0x1CB2DCu;
    {
        const bool branch_taken_0x1cb2dc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1CB2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2DCu;
            // 0x1cb2e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2dc) {
            ctx->pc = 0x1CB978u;
            goto label_1cb978;
        }
    }
    ctx->pc = 0x1CB2E4u;
label_1cb2e4:
    // 0x1cb2e4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cb2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
label_1cb2e8:
    // 0x1cb2e8: 0xc060718  jal         func_181C60
label_1cb2ec:
    if (ctx->pc == 0x1CB2ECu) {
        ctx->pc = 0x1CB2ECu;
            // 0x1cb2ec: 0xac241d10  sw          $a0, 0x1D10($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7440), GPR_U32(ctx, 4));
        ctx->pc = 0x1CB2F0u;
        goto label_1cb2f0;
    }
    ctx->pc = 0x1CB2E8u;
    SET_GPR_U32(ctx, 31, 0x1CB2F0u);
    ctx->pc = 0x1CB2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2E8u;
            // 0x1cb2ec: 0xac241d10  sw          $a0, 0x1D10($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7440), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB2F0u; }
        if (ctx->pc != 0x1CB2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB2F0u; }
        if (ctx->pc != 0x1CB2F0u) { return; }
    }
    ctx->pc = 0x1CB2F0u;
label_1cb2f0:
    // 0x1cb2f0: 0xc0656b4  jal         func_195AD0
label_1cb2f4:
    if (ctx->pc == 0x1CB2F4u) {
        ctx->pc = 0x1CB2F8u;
        goto label_1cb2f8;
    }
    ctx->pc = 0x1CB2F0u;
    SET_GPR_U32(ctx, 31, 0x1CB2F8u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB2F8u; }
        if (ctx->pc != 0x1CB2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB2F8u; }
        if (ctx->pc != 0x1CB2F8u) { return; }
    }
    ctx->pc = 0x1CB2F8u;
label_1cb2f8:
    // 0x1cb2f8: 0xc056f84  jal         func_15BE10
label_1cb2fc:
    if (ctx->pc == 0x1CB2FCu) {
        ctx->pc = 0x1CB2FCu;
            // 0x1cb2fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB300u;
        goto label_1cb300;
    }
    ctx->pc = 0x1CB2F8u;
    SET_GPR_U32(ctx, 31, 0x1CB300u);
    ctx->pc = 0x1CB2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2F8u;
            // 0x1cb2fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB300u; }
        if (ctx->pc != 0x1CB300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB300u; }
        if (ctx->pc != 0x1CB300u) { return; }
    }
    ctx->pc = 0x1CB300u;
label_1cb300:
    // 0x1cb300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1cb304:
    if (ctx->pc == 0x1CB304u) {
        ctx->pc = 0x1CB304u;
            // 0x1cb304: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB308u;
        goto label_1cb308;
    }
    ctx->pc = 0x1CB300u;
    {
        const bool branch_taken_0x1cb300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB300u;
            // 0x1cb304: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb300) {
            ctx->pc = 0x1CB310u;
            goto label_1cb310;
        }
    }
    ctx->pc = 0x1CB308u;
label_1cb308:
    // 0x1cb308: 0xc055124  jal         func_154490
label_1cb30c:
    if (ctx->pc == 0x1CB30Cu) {
        ctx->pc = 0x1CB30Cu;
            // 0x1cb30c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x1CB310u;
        goto label_1cb310;
    }
    ctx->pc = 0x1CB308u;
    SET_GPR_U32(ctx, 31, 0x1CB310u);
    ctx->pc = 0x1CB30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB308u;
            // 0x1cb30c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB310u; }
        if (ctx->pc != 0x1CB310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB310u; }
        if (ctx->pc != 0x1CB310u) { return; }
    }
    ctx->pc = 0x1CB310u;
label_1cb310:
    // 0x1cb310: 0xc056f84  jal         func_15BE10
label_1cb314:
    if (ctx->pc == 0x1CB314u) {
        ctx->pc = 0x1CB314u;
            // 0x1cb314: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CB318u;
        goto label_1cb318;
    }
    ctx->pc = 0x1CB310u;
    SET_GPR_U32(ctx, 31, 0x1CB318u);
    ctx->pc = 0x1CB314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB310u;
            // 0x1cb314: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB318u; }
        if (ctx->pc != 0x1CB318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB318u; }
        if (ctx->pc != 0x1CB318u) { return; }
    }
    ctx->pc = 0x1CB318u;
label_1cb318:
    // 0x1cb318: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1cb31c:
    if (ctx->pc == 0x1CB31Cu) {
        ctx->pc = 0x1CB31Cu;
            // 0x1cb31c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CB320u;
        goto label_1cb320;
    }
    ctx->pc = 0x1CB318u;
    {
        const bool branch_taken_0x1cb318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB318u;
            // 0x1cb31c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb318) {
            ctx->pc = 0x1CB328u;
            goto label_1cb328;
        }
    }
    ctx->pc = 0x1CB320u;
label_1cb320:
    // 0x1cb320: 0xc055124  jal         func_154490
label_1cb324:
    if (ctx->pc == 0x1CB324u) {
        ctx->pc = 0x1CB324u;
            // 0x1cb324: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x1CB328u;
        goto label_1cb328;
    }
    ctx->pc = 0x1CB320u;
    SET_GPR_U32(ctx, 31, 0x1CB328u);
    ctx->pc = 0x1CB324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB320u;
            // 0x1cb324: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB328u; }
        if (ctx->pc != 0x1CB328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB328u; }
        if (ctx->pc != 0x1CB328u) { return; }
    }
    ctx->pc = 0x1CB328u;
label_1cb328:
    // 0x1cb328: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1cb328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1cb32c:
    // 0x1cb32c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1cb32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb330:
    // 0x1cb330: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1cb330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb334:
    // 0x1cb334: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1cb334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1cb338:
    // 0x1cb338: 0xc05d080  jal         func_174200
label_1cb33c:
    if (ctx->pc == 0x1CB33Cu) {
        ctx->pc = 0x1CB33Cu;
            // 0x1cb33c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CB340u;
        goto label_1cb340;
    }
    ctx->pc = 0x1CB338u;
    SET_GPR_U32(ctx, 31, 0x1CB340u);
    ctx->pc = 0x1CB33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB338u;
            // 0x1cb33c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB340u; }
        if (ctx->pc != 0x1CB340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB340u; }
        if (ctx->pc != 0x1CB340u) { return; }
    }
    ctx->pc = 0x1CB340u;
label_1cb340:
    // 0x1cb340: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1cb340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb344:
    // 0x1cb344: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x1cb344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1cb348:
    // 0x1cb348: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1cb348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb34c:
    // 0x1cb34c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1cb34cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1cb350:
    // 0x1cb350: 0xc05d080  jal         func_174200
label_1cb354:
    if (ctx->pc == 0x1CB354u) {
        ctx->pc = 0x1CB354u;
            // 0x1cb354: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CB358u;
        goto label_1cb358;
    }
    ctx->pc = 0x1CB350u;
    SET_GPR_U32(ctx, 31, 0x1CB358u);
    ctx->pc = 0x1CB354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB350u;
            // 0x1cb354: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB358u; }
        if (ctx->pc != 0x1CB358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB358u; }
        if (ctx->pc != 0x1CB358u) { return; }
    }
    ctx->pc = 0x1CB358u;
label_1cb358:
    // 0x1cb358: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1cb358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb35c:
    // 0x1cb35c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cb35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1cb360:
    // 0x1cb360: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1cb360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb364:
    // 0x1cb364: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1cb364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1cb368:
    // 0x1cb368: 0xc05d080  jal         func_174200
label_1cb36c:
    if (ctx->pc == 0x1CB36Cu) {
        ctx->pc = 0x1CB36Cu;
            // 0x1cb36c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CB370u;
        goto label_1cb370;
    }
    ctx->pc = 0x1CB368u;
    SET_GPR_U32(ctx, 31, 0x1CB370u);
    ctx->pc = 0x1CB36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB368u;
            // 0x1cb36c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB370u; }
        if (ctx->pc != 0x1CB370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB370u; }
        if (ctx->pc != 0x1CB370u) { return; }
    }
    ctx->pc = 0x1CB370u;
label_1cb370:
    // 0x1cb370: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1cb370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb374:
    // 0x1cb374: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb378:
    // 0x1cb378: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1cb378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb37c:
    // 0x1cb37c: 0xc053740  jal         func_14DD00
label_1cb380:
    if (ctx->pc == 0x1CB380u) {
        ctx->pc = 0x1CB380u;
            // 0x1cb380: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1CB384u;
        goto label_1cb384;
    }
    ctx->pc = 0x1CB37Cu;
    SET_GPR_U32(ctx, 31, 0x1CB384u);
    ctx->pc = 0x1CB380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB37Cu;
            // 0x1cb380: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB384u; }
        if (ctx->pc != 0x1CB384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB384u; }
        if (ctx->pc != 0x1CB384u) { return; }
    }
    ctx->pc = 0x1CB384u;
label_1cb384:
    // 0x1cb384: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb388:
    // 0x1cb388: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb38c:
    // 0x1cb38c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1cb38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb390:
    // 0x1cb390: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb390u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb394:
    // 0x1cb394: 0x24640046  addiu       $a0, $v1, 0x46
    ctx->pc = 0x1cb394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 70));
label_1cb398:
    // 0x1cb398: 0xc053740  jal         func_14DD00
label_1cb39c:
    if (ctx->pc == 0x1CB39Cu) {
        ctx->pc = 0x1CB39Cu;
            // 0x1cb39c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CB3A0u;
        goto label_1cb3a0;
    }
    ctx->pc = 0x1CB398u;
    SET_GPR_U32(ctx, 31, 0x1CB3A0u);
    ctx->pc = 0x1CB39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB398u;
            // 0x1cb39c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3A0u; }
        if (ctx->pc != 0x1CB3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3A0u; }
        if (ctx->pc != 0x1CB3A0u) { return; }
    }
    ctx->pc = 0x1CB3A0u;
label_1cb3a0:
    // 0x1cb3a0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb3a4:
    // 0x1cb3a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb3a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb3a8:
    // 0x1cb3a8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1cb3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb3ac:
    // 0x1cb3ac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb3acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb3b0:
    // 0x1cb3b0: 0x2464ffba  addiu       $a0, $v1, -0x46
    ctx->pc = 0x1cb3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967226));
label_1cb3b4:
    // 0x1cb3b4: 0xc053740  jal         func_14DD00
label_1cb3b8:
    if (ctx->pc == 0x1CB3B8u) {
        ctx->pc = 0x1CB3B8u;
            // 0x1cb3b8: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CB3BCu;
        goto label_1cb3bc;
    }
    ctx->pc = 0x1CB3B4u;
    SET_GPR_U32(ctx, 31, 0x1CB3BCu);
    ctx->pc = 0x1CB3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3B4u;
            // 0x1cb3b8: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3BCu; }
        if (ctx->pc != 0x1CB3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3BCu; }
        if (ctx->pc != 0x1CB3BCu) { return; }
    }
    ctx->pc = 0x1CB3BCu;
label_1cb3bc:
    // 0x1cb3bc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb3c0:
    // 0x1cb3c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb3c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb3c4:
    // 0x1cb3c4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1cb3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb3c8:
    // 0x1cb3c8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb3c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb3cc:
    // 0x1cb3cc: 0x24640032  addiu       $a0, $v1, 0x32
    ctx->pc = 0x1cb3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
label_1cb3d0:
    // 0x1cb3d0: 0xc053740  jal         func_14DD00
label_1cb3d4:
    if (ctx->pc == 0x1CB3D4u) {
        ctx->pc = 0x1CB3D4u;
            // 0x1cb3d4: 0x2445002d  addiu       $a1, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->pc = 0x1CB3D8u;
        goto label_1cb3d8;
    }
    ctx->pc = 0x1CB3D0u;
    SET_GPR_U32(ctx, 31, 0x1CB3D8u);
    ctx->pc = 0x1CB3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3D0u;
            // 0x1cb3d4: 0x2445002d  addiu       $a1, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3D8u; }
        if (ctx->pc != 0x1CB3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3D8u; }
        if (ctx->pc != 0x1CB3D8u) { return; }
    }
    ctx->pc = 0x1CB3D8u;
label_1cb3d8:
    // 0x1cb3d8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb3dc:
    // 0x1cb3dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb3dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb3e0:
    // 0x1cb3e0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1cb3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb3e4:
    // 0x1cb3e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb3e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb3e8:
    // 0x1cb3e8: 0x2464ffce  addiu       $a0, $v1, -0x32
    ctx->pc = 0x1cb3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
label_1cb3ec:
    // 0x1cb3ec: 0xc053740  jal         func_14DD00
label_1cb3f0:
    if (ctx->pc == 0x1CB3F0u) {
        ctx->pc = 0x1CB3F0u;
            // 0x1cb3f0: 0x2445002d  addiu       $a1, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->pc = 0x1CB3F4u;
        goto label_1cb3f4;
    }
    ctx->pc = 0x1CB3ECu;
    SET_GPR_U32(ctx, 31, 0x1CB3F4u);
    ctx->pc = 0x1CB3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3ECu;
            // 0x1cb3f0: 0x2445002d  addiu       $a1, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3F4u; }
        if (ctx->pc != 0x1CB3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3F4u; }
        if (ctx->pc != 0x1CB3F4u) { return; }
    }
    ctx->pc = 0x1CB3F4u;
label_1cb3f4:
    // 0x1cb3f4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1cb3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb3f8:
    // 0x1cb3f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb3f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb3fc:
    // 0x1cb3fc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1cb3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb400:
    // 0x1cb400: 0xc053740  jal         func_14DD00
label_1cb404:
    if (ctx->pc == 0x1CB404u) {
        ctx->pc = 0x1CB404u;
            // 0x1cb404: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1CB408u;
        goto label_1cb408;
    }
    ctx->pc = 0x1CB400u;
    SET_GPR_U32(ctx, 31, 0x1CB408u);
    ctx->pc = 0x1CB404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB400u;
            // 0x1cb404: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB408u; }
        if (ctx->pc != 0x1CB408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB408u; }
        if (ctx->pc != 0x1CB408u) { return; }
    }
    ctx->pc = 0x1CB408u;
label_1cb408:
    // 0x1cb408: 0xc050bb4  jal         func_142ED0
label_1cb40c:
    if (ctx->pc == 0x1CB40Cu) {
        ctx->pc = 0x1CB410u;
        goto label_1cb410;
    }
    ctx->pc = 0x1CB408u;
    SET_GPR_U32(ctx, 31, 0x1CB410u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB410u; }
        if (ctx->pc != 0x1CB410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB410u; }
        if (ctx->pc != 0x1CB410u) { return; }
    }
    ctx->pc = 0x1CB410u;
label_1cb410:
    // 0x1cb410: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb414:
    // 0x1cb414: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb418:
    // 0x1cb418: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb418u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb41c:
    // 0x1cb41c: 0x0  nop
    ctx->pc = 0x1cb41cu;
    // NOP
label_1cb420:
    // 0x1cb420: 0x0  nop
    ctx->pc = 0x1cb420u;
    // NOP
label_1cb424:
    // 0x1cb424: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb424u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb428:
    // 0x1cb428: 0xc050bb4  jal         func_142ED0
label_1cb42c:
    if (ctx->pc == 0x1CB42Cu) {
        ctx->pc = 0x1CB42Cu;
            // 0x1cb42c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB430u;
        goto label_1cb430;
    }
    ctx->pc = 0x1CB428u;
    SET_GPR_U32(ctx, 31, 0x1CB430u);
    ctx->pc = 0x1CB42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB428u;
            // 0x1cb42c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB430u; }
        if (ctx->pc != 0x1CB430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB430u; }
        if (ctx->pc != 0x1CB430u) { return; }
    }
    ctx->pc = 0x1CB430u;
label_1cb430:
    // 0x1cb430: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb434:
    // 0x1cb434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb438:
    // 0x1cb438: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb438u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb43c:
    // 0x1cb43c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cb440:
    // 0x1cb440: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cb440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb444:
    // 0x1cb444: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb448:
    // 0x1cb448: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb448u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb44c:
    // 0x1cb44c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb44cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb450:
    // 0x1cb450: 0xc053740  jal         func_14DD00
label_1cb454:
    if (ctx->pc == 0x1CB454u) {
        ctx->pc = 0x1CB454u;
            // 0x1cb454: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB458u;
        goto label_1cb458;
    }
    ctx->pc = 0x1CB450u;
    SET_GPR_U32(ctx, 31, 0x1CB458u);
    ctx->pc = 0x1CB454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB450u;
            // 0x1cb454: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB458u; }
        if (ctx->pc != 0x1CB458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB458u; }
        if (ctx->pc != 0x1CB458u) { return; }
    }
    ctx->pc = 0x1CB458u;
label_1cb458:
    // 0x1cb458: 0xc050bb4  jal         func_142ED0
label_1cb45c:
    if (ctx->pc == 0x1CB45Cu) {
        ctx->pc = 0x1CB460u;
        goto label_1cb460;
    }
    ctx->pc = 0x1CB458u;
    SET_GPR_U32(ctx, 31, 0x1CB460u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB460u; }
        if (ctx->pc != 0x1CB460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB460u; }
        if (ctx->pc != 0x1CB460u) { return; }
    }
    ctx->pc = 0x1CB460u;
label_1cb460:
    // 0x1cb460: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb464:
    // 0x1cb464: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb468:
    // 0x1cb468: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb468u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb46c:
    // 0x1cb46c: 0x0  nop
    ctx->pc = 0x1cb46cu;
    // NOP
label_1cb470:
    // 0x1cb470: 0x0  nop
    ctx->pc = 0x1cb470u;
    // NOP
label_1cb474:
    // 0x1cb474: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb474u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb478:
    // 0x1cb478: 0xc050bb4  jal         func_142ED0
label_1cb47c:
    if (ctx->pc == 0x1CB47Cu) {
        ctx->pc = 0x1CB47Cu;
            // 0x1cb47c: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB480u;
        goto label_1cb480;
    }
    ctx->pc = 0x1CB478u;
    SET_GPR_U32(ctx, 31, 0x1CB480u);
    ctx->pc = 0x1CB47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB478u;
            // 0x1cb47c: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB480u; }
        if (ctx->pc != 0x1CB480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB480u; }
        if (ctx->pc != 0x1CB480u) { return; }
    }
    ctx->pc = 0x1CB480u;
label_1cb480:
    // 0x1cb480: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb484:
    // 0x1cb484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb488:
    // 0x1cb488: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb488u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb48c:
    // 0x1cb48c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cb490:
    // 0x1cb490: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cb490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb494:
    // 0x1cb494: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb498:
    // 0x1cb498: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb498u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb49c:
    // 0x1cb49c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb49cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb4a0:
    // 0x1cb4a0: 0xc053740  jal         func_14DD00
label_1cb4a4:
    if (ctx->pc == 0x1CB4A4u) {
        ctx->pc = 0x1CB4A4u;
            // 0x1cb4a4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB4A8u;
        goto label_1cb4a8;
    }
    ctx->pc = 0x1CB4A0u;
    SET_GPR_U32(ctx, 31, 0x1CB4A8u);
    ctx->pc = 0x1CB4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB4A0u;
            // 0x1cb4a4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB4A8u; }
        if (ctx->pc != 0x1CB4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB4A8u; }
        if (ctx->pc != 0x1CB4A8u) { return; }
    }
    ctx->pc = 0x1CB4A8u;
label_1cb4a8:
    // 0x1cb4a8: 0xc050bb4  jal         func_142ED0
label_1cb4ac:
    if (ctx->pc == 0x1CB4ACu) {
        ctx->pc = 0x1CB4B0u;
        goto label_1cb4b0;
    }
    ctx->pc = 0x1CB4A8u;
    SET_GPR_U32(ctx, 31, 0x1CB4B0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB4B0u; }
        if (ctx->pc != 0x1CB4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB4B0u; }
        if (ctx->pc != 0x1CB4B0u) { return; }
    }
    ctx->pc = 0x1CB4B0u;
label_1cb4b0:
    // 0x1cb4b0: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb4b4:
    // 0x1cb4b4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb4b8:
    // 0x1cb4b8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb4b8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb4bc:
    // 0x1cb4bc: 0x0  nop
    ctx->pc = 0x1cb4bcu;
    // NOP
label_1cb4c0:
    // 0x1cb4c0: 0x0  nop
    ctx->pc = 0x1cb4c0u;
    // NOP
label_1cb4c4:
    // 0x1cb4c4: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb4c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb4c8:
    // 0x1cb4c8: 0xc050bb4  jal         func_142ED0
label_1cb4cc:
    if (ctx->pc == 0x1CB4CCu) {
        ctx->pc = 0x1CB4CCu;
            // 0x1cb4cc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB4D0u;
        goto label_1cb4d0;
    }
    ctx->pc = 0x1CB4C8u;
    SET_GPR_U32(ctx, 31, 0x1CB4D0u);
    ctx->pc = 0x1CB4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB4C8u;
            // 0x1cb4cc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB4D0u; }
        if (ctx->pc != 0x1CB4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB4D0u; }
        if (ctx->pc != 0x1CB4D0u) { return; }
    }
    ctx->pc = 0x1CB4D0u;
label_1cb4d0:
    // 0x1cb4d0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb4d4:
    // 0x1cb4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb4d8:
    // 0x1cb4d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb4d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb4dc:
    // 0x1cb4dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cb4e0:
    // 0x1cb4e0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cb4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb4e4:
    // 0x1cb4e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb4e8:
    // 0x1cb4e8: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb4e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb4ec:
    // 0x1cb4ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb4ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb4f0:
    // 0x1cb4f0: 0xc053740  jal         func_14DD00
label_1cb4f4:
    if (ctx->pc == 0x1CB4F4u) {
        ctx->pc = 0x1CB4F4u;
            // 0x1cb4f4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB4F8u;
        goto label_1cb4f8;
    }
    ctx->pc = 0x1CB4F0u;
    SET_GPR_U32(ctx, 31, 0x1CB4F8u);
    ctx->pc = 0x1CB4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB4F0u;
            // 0x1cb4f4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB4F8u; }
        if (ctx->pc != 0x1CB4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB4F8u; }
        if (ctx->pc != 0x1CB4F8u) { return; }
    }
    ctx->pc = 0x1CB4F8u;
label_1cb4f8:
    // 0x1cb4f8: 0xc050bb4  jal         func_142ED0
label_1cb4fc:
    if (ctx->pc == 0x1CB4FCu) {
        ctx->pc = 0x1CB500u;
        goto label_1cb500;
    }
    ctx->pc = 0x1CB4F8u;
    SET_GPR_U32(ctx, 31, 0x1CB500u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB500u; }
        if (ctx->pc != 0x1CB500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB500u; }
        if (ctx->pc != 0x1CB500u) { return; }
    }
    ctx->pc = 0x1CB500u;
label_1cb500:
    // 0x1cb500: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb504:
    // 0x1cb504: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb508:
    // 0x1cb508: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb508u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb50c:
    // 0x1cb50c: 0x0  nop
    ctx->pc = 0x1cb50cu;
    // NOP
label_1cb510:
    // 0x1cb510: 0x0  nop
    ctx->pc = 0x1cb510u;
    // NOP
label_1cb514:
    // 0x1cb514: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb514u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb518:
    // 0x1cb518: 0xc050bb4  jal         func_142ED0
label_1cb51c:
    if (ctx->pc == 0x1CB51Cu) {
        ctx->pc = 0x1CB51Cu;
            // 0x1cb51c: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB520u;
        goto label_1cb520;
    }
    ctx->pc = 0x1CB518u;
    SET_GPR_U32(ctx, 31, 0x1CB520u);
    ctx->pc = 0x1CB51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB518u;
            // 0x1cb51c: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB520u; }
        if (ctx->pc != 0x1CB520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB520u; }
        if (ctx->pc != 0x1CB520u) { return; }
    }
    ctx->pc = 0x1CB520u;
label_1cb520:
    // 0x1cb520: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb524:
    // 0x1cb524: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1cb524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb528:
    // 0x1cb528: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb528u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb52c:
    // 0x1cb52c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb530:
    // 0x1cb530: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cb530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1cb534:
    // 0x1cb534: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cb534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1cb538:
    // 0x1cb538: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cb538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cb53c:
    // 0x1cb53c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cb53cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb540:
    // 0x1cb540: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb540u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb544:
    // 0x1cb544: 0xc053740  jal         func_14DD00
label_1cb548:
    if (ctx->pc == 0x1CB548u) {
        ctx->pc = 0x1CB548u;
            // 0x1cb548: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB54Cu;
        goto label_1cb54c;
    }
    ctx->pc = 0x1CB544u;
    SET_GPR_U32(ctx, 31, 0x1CB54Cu);
    ctx->pc = 0x1CB548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB544u;
            // 0x1cb548: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB54Cu; }
        if (ctx->pc != 0x1CB54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB54Cu; }
        if (ctx->pc != 0x1CB54Cu) { return; }
    }
    ctx->pc = 0x1CB54Cu;
label_1cb54c:
    // 0x1cb54c: 0xc050bb4  jal         func_142ED0
label_1cb550:
    if (ctx->pc == 0x1CB550u) {
        ctx->pc = 0x1CB554u;
        goto label_1cb554;
    }
    ctx->pc = 0x1CB54Cu;
    SET_GPR_U32(ctx, 31, 0x1CB554u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB554u; }
        if (ctx->pc != 0x1CB554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB554u; }
        if (ctx->pc != 0x1CB554u) { return; }
    }
    ctx->pc = 0x1CB554u;
label_1cb554:
    // 0x1cb554: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb558:
    // 0x1cb558: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb55c:
    // 0x1cb55c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb55cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb560:
    // 0x1cb560: 0x0  nop
    ctx->pc = 0x1cb560u;
    // NOP
label_1cb564:
    // 0x1cb564: 0x0  nop
    ctx->pc = 0x1cb564u;
    // NOP
label_1cb568:
    // 0x1cb568: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb568u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb56c:
    // 0x1cb56c: 0xc050bb4  jal         func_142ED0
label_1cb570:
    if (ctx->pc == 0x1CB570u) {
        ctx->pc = 0x1CB570u;
            // 0x1cb570: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB574u;
        goto label_1cb574;
    }
    ctx->pc = 0x1CB56Cu;
    SET_GPR_U32(ctx, 31, 0x1CB574u);
    ctx->pc = 0x1CB570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB56Cu;
            // 0x1cb570: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB574u; }
        if (ctx->pc != 0x1CB574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB574u; }
        if (ctx->pc != 0x1CB574u) { return; }
    }
    ctx->pc = 0x1CB574u;
label_1cb574:
    // 0x1cb574: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb578:
    // 0x1cb578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb57c:
    // 0x1cb57c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb57cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb580:
    // 0x1cb580: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cb580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1cb584:
    // 0x1cb584: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cb584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb588:
    // 0x1cb588: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb58c:
    // 0x1cb58c: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb58cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb590:
    // 0x1cb590: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb590u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb594:
    // 0x1cb594: 0xc053740  jal         func_14DD00
label_1cb598:
    if (ctx->pc == 0x1CB598u) {
        ctx->pc = 0x1CB598u;
            // 0x1cb598: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB59Cu;
        goto label_1cb59c;
    }
    ctx->pc = 0x1CB594u;
    SET_GPR_U32(ctx, 31, 0x1CB59Cu);
    ctx->pc = 0x1CB598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB594u;
            // 0x1cb598: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB59Cu; }
        if (ctx->pc != 0x1CB59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB59Cu; }
        if (ctx->pc != 0x1CB59Cu) { return; }
    }
    ctx->pc = 0x1CB59Cu;
label_1cb59c:
    // 0x1cb59c: 0xc050bb4  jal         func_142ED0
label_1cb5a0:
    if (ctx->pc == 0x1CB5A0u) {
        ctx->pc = 0x1CB5A4u;
        goto label_1cb5a4;
    }
    ctx->pc = 0x1CB59Cu;
    SET_GPR_U32(ctx, 31, 0x1CB5A4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5A4u; }
        if (ctx->pc != 0x1CB5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5A4u; }
        if (ctx->pc != 0x1CB5A4u) { return; }
    }
    ctx->pc = 0x1CB5A4u;
label_1cb5a4:
    // 0x1cb5a4: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb5a8:
    // 0x1cb5a8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb5ac:
    // 0x1cb5ac: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb5acu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb5b0:
    // 0x1cb5b0: 0x0  nop
    ctx->pc = 0x1cb5b0u;
    // NOP
label_1cb5b4:
    // 0x1cb5b4: 0x0  nop
    ctx->pc = 0x1cb5b4u;
    // NOP
label_1cb5b8:
    // 0x1cb5b8: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb5b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb5bc:
    // 0x1cb5bc: 0xc050bb4  jal         func_142ED0
label_1cb5c0:
    if (ctx->pc == 0x1CB5C0u) {
        ctx->pc = 0x1CB5C0u;
            // 0x1cb5c0: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB5C4u;
        goto label_1cb5c4;
    }
    ctx->pc = 0x1CB5BCu;
    SET_GPR_U32(ctx, 31, 0x1CB5C4u);
    ctx->pc = 0x1CB5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5BCu;
            // 0x1cb5c0: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5C4u; }
        if (ctx->pc != 0x1CB5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5C4u; }
        if (ctx->pc != 0x1CB5C4u) { return; }
    }
    ctx->pc = 0x1CB5C4u;
label_1cb5c4:
    // 0x1cb5c4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb5c8:
    // 0x1cb5c8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1cb5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb5cc:
    // 0x1cb5cc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb5ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb5d0:
    // 0x1cb5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb5d4:
    // 0x1cb5d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cb5d8:
    // 0x1cb5d8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1cb5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1cb5dc:
    // 0x1cb5dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cb5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cb5e0:
    // 0x1cb5e0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cb5e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb5e4:
    // 0x1cb5e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb5e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb5e8:
    // 0x1cb5e8: 0xc053740  jal         func_14DD00
label_1cb5ec:
    if (ctx->pc == 0x1CB5ECu) {
        ctx->pc = 0x1CB5ECu;
            // 0x1cb5ec: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB5F0u;
        goto label_1cb5f0;
    }
    ctx->pc = 0x1CB5E8u;
    SET_GPR_U32(ctx, 31, 0x1CB5F0u);
    ctx->pc = 0x1CB5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5E8u;
            // 0x1cb5ec: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5F0u; }
        if (ctx->pc != 0x1CB5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5F0u; }
        if (ctx->pc != 0x1CB5F0u) { return; }
    }
    ctx->pc = 0x1CB5F0u;
label_1cb5f0:
    // 0x1cb5f0: 0xc050bb4  jal         func_142ED0
label_1cb5f4:
    if (ctx->pc == 0x1CB5F4u) {
        ctx->pc = 0x1CB5F8u;
        goto label_1cb5f8;
    }
    ctx->pc = 0x1CB5F0u;
    SET_GPR_U32(ctx, 31, 0x1CB5F8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5F8u; }
        if (ctx->pc != 0x1CB5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5F8u; }
        if (ctx->pc != 0x1CB5F8u) { return; }
    }
    ctx->pc = 0x1CB5F8u;
label_1cb5f8:
    // 0x1cb5f8: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb5fc:
    // 0x1cb5fc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb600:
    // 0x1cb600: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb600u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb604:
    // 0x1cb604: 0x0  nop
    ctx->pc = 0x1cb604u;
    // NOP
label_1cb608:
    // 0x1cb608: 0x0  nop
    ctx->pc = 0x1cb608u;
    // NOP
label_1cb60c:
    // 0x1cb60c: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb60cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb610:
    // 0x1cb610: 0xc050bb4  jal         func_142ED0
label_1cb614:
    if (ctx->pc == 0x1CB614u) {
        ctx->pc = 0x1CB614u;
            // 0x1cb614: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB618u;
        goto label_1cb618;
    }
    ctx->pc = 0x1CB610u;
    SET_GPR_U32(ctx, 31, 0x1CB618u);
    ctx->pc = 0x1CB614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB610u;
            // 0x1cb614: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB618u; }
        if (ctx->pc != 0x1CB618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB618u; }
        if (ctx->pc != 0x1CB618u) { return; }
    }
    ctx->pc = 0x1CB618u;
label_1cb618:
    // 0x1cb618: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb61c:
    // 0x1cb61c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb620:
    // 0x1cb620: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb620u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb624:
    // 0x1cb624: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cb624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1cb628:
    // 0x1cb628: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cb628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb62c:
    // 0x1cb62c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb630:
    // 0x1cb630: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb630u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb634:
    // 0x1cb634: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb634u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb638:
    // 0x1cb638: 0xc053740  jal         func_14DD00
label_1cb63c:
    if (ctx->pc == 0x1CB63Cu) {
        ctx->pc = 0x1CB63Cu;
            // 0x1cb63c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB640u;
        goto label_1cb640;
    }
    ctx->pc = 0x1CB638u;
    SET_GPR_U32(ctx, 31, 0x1CB640u);
    ctx->pc = 0x1CB63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB638u;
            // 0x1cb63c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB640u; }
        if (ctx->pc != 0x1CB640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB640u; }
        if (ctx->pc != 0x1CB640u) { return; }
    }
    ctx->pc = 0x1CB640u;
label_1cb640:
    // 0x1cb640: 0xc050bb4  jal         func_142ED0
label_1cb644:
    if (ctx->pc == 0x1CB644u) {
        ctx->pc = 0x1CB648u;
        goto label_1cb648;
    }
    ctx->pc = 0x1CB640u;
    SET_GPR_U32(ctx, 31, 0x1CB648u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB648u; }
        if (ctx->pc != 0x1CB648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB648u; }
        if (ctx->pc != 0x1CB648u) { return; }
    }
    ctx->pc = 0x1CB648u;
label_1cb648:
    // 0x1cb648: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb64c:
    // 0x1cb64c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb650:
    // 0x1cb650: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb650u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb654:
    // 0x1cb654: 0x0  nop
    ctx->pc = 0x1cb654u;
    // NOP
label_1cb658:
    // 0x1cb658: 0x0  nop
    ctx->pc = 0x1cb658u;
    // NOP
label_1cb65c:
    // 0x1cb65c: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb65cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb660:
    // 0x1cb660: 0xc050bb4  jal         func_142ED0
label_1cb664:
    if (ctx->pc == 0x1CB664u) {
        ctx->pc = 0x1CB664u;
            // 0x1cb664: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB668u;
        goto label_1cb668;
    }
    ctx->pc = 0x1CB660u;
    SET_GPR_U32(ctx, 31, 0x1CB668u);
    ctx->pc = 0x1CB664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB660u;
            // 0x1cb664: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB668u; }
        if (ctx->pc != 0x1CB668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB668u; }
        if (ctx->pc != 0x1CB668u) { return; }
    }
    ctx->pc = 0x1CB668u;
label_1cb668:
    // 0x1cb668: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb66c:
    // 0x1cb66c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb670:
    // 0x1cb670: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb670u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb674:
    // 0x1cb674: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cb674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1cb678:
    // 0x1cb678: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cb678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb67c:
    // 0x1cb67c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb680:
    // 0x1cb680: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb680u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb684:
    // 0x1cb684: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb684u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb688:
    // 0x1cb688: 0xc053740  jal         func_14DD00
label_1cb68c:
    if (ctx->pc == 0x1CB68Cu) {
        ctx->pc = 0x1CB68Cu;
            // 0x1cb68c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB690u;
        goto label_1cb690;
    }
    ctx->pc = 0x1CB688u;
    SET_GPR_U32(ctx, 31, 0x1CB690u);
    ctx->pc = 0x1CB68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB688u;
            // 0x1cb68c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB690u; }
        if (ctx->pc != 0x1CB690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB690u; }
        if (ctx->pc != 0x1CB690u) { return; }
    }
    ctx->pc = 0x1CB690u;
label_1cb690:
    // 0x1cb690: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1cb690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb694:
    // 0x1cb694: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb698:
    // 0x1cb698: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1cb698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb69c:
    // 0x1cb69c: 0xc053740  jal         func_14DD00
label_1cb6a0:
    if (ctx->pc == 0x1CB6A0u) {
        ctx->pc = 0x1CB6A0u;
            // 0x1cb6a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1CB6A4u;
        goto label_1cb6a4;
    }
    ctx->pc = 0x1CB69Cu;
    SET_GPR_U32(ctx, 31, 0x1CB6A4u);
    ctx->pc = 0x1CB6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB69Cu;
            // 0x1cb6a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6A4u; }
        if (ctx->pc != 0x1CB6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6A4u; }
        if (ctx->pc != 0x1CB6A4u) { return; }
    }
    ctx->pc = 0x1CB6A4u;
label_1cb6a4:
    // 0x1cb6a4: 0xc050bb4  jal         func_142ED0
label_1cb6a8:
    if (ctx->pc == 0x1CB6A8u) {
        ctx->pc = 0x1CB6ACu;
        goto label_1cb6ac;
    }
    ctx->pc = 0x1CB6A4u;
    SET_GPR_U32(ctx, 31, 0x1CB6ACu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6ACu; }
        if (ctx->pc != 0x1CB6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6ACu; }
        if (ctx->pc != 0x1CB6ACu) { return; }
    }
    ctx->pc = 0x1CB6ACu;
label_1cb6ac:
    // 0x1cb6ac: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb6b0:
    // 0x1cb6b0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb6b4:
    // 0x1cb6b4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb6b4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb6b8:
    // 0x1cb6b8: 0x0  nop
    ctx->pc = 0x1cb6b8u;
    // NOP
label_1cb6bc:
    // 0x1cb6bc: 0x0  nop
    ctx->pc = 0x1cb6bcu;
    // NOP
label_1cb6c0:
    // 0x1cb6c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb6c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb6c4:
    // 0x1cb6c4: 0xc050bb4  jal         func_142ED0
label_1cb6c8:
    if (ctx->pc == 0x1CB6C8u) {
        ctx->pc = 0x1CB6C8u;
            // 0x1cb6c8: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB6CCu;
        goto label_1cb6cc;
    }
    ctx->pc = 0x1CB6C4u;
    SET_GPR_U32(ctx, 31, 0x1CB6CCu);
    ctx->pc = 0x1CB6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6C4u;
            // 0x1cb6c8: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6CCu; }
        if (ctx->pc != 0x1CB6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6CCu; }
        if (ctx->pc != 0x1CB6CCu) { return; }
    }
    ctx->pc = 0x1CB6CCu;
label_1cb6cc:
    // 0x1cb6cc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb6d0:
    // 0x1cb6d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb6d4:
    // 0x1cb6d4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb6d4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb6d8:
    // 0x1cb6d8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1cb6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1cb6dc:
    // 0x1cb6dc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cb6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb6e0:
    // 0x1cb6e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb6e4:
    // 0x1cb6e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb6e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb6e8:
    // 0x1cb6e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb6e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb6ec:
    // 0x1cb6ec: 0xc053740  jal         func_14DD00
label_1cb6f0:
    if (ctx->pc == 0x1CB6F0u) {
        ctx->pc = 0x1CB6F0u;
            // 0x1cb6f0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB6F4u;
        goto label_1cb6f4;
    }
    ctx->pc = 0x1CB6ECu;
    SET_GPR_U32(ctx, 31, 0x1CB6F4u);
    ctx->pc = 0x1CB6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6ECu;
            // 0x1cb6f0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6F4u; }
        if (ctx->pc != 0x1CB6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6F4u; }
        if (ctx->pc != 0x1CB6F4u) { return; }
    }
    ctx->pc = 0x1CB6F4u;
label_1cb6f4:
    // 0x1cb6f4: 0xc050bb4  jal         func_142ED0
label_1cb6f8:
    if (ctx->pc == 0x1CB6F8u) {
        ctx->pc = 0x1CB6FCu;
        goto label_1cb6fc;
    }
    ctx->pc = 0x1CB6F4u;
    SET_GPR_U32(ctx, 31, 0x1CB6FCu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6FCu; }
        if (ctx->pc != 0x1CB6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6FCu; }
        if (ctx->pc != 0x1CB6FCu) { return; }
    }
    ctx->pc = 0x1CB6FCu;
label_1cb6fc:
    // 0x1cb6fc: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb700:
    // 0x1cb700: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb704:
    // 0x1cb704: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb704u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb708:
    // 0x1cb708: 0x0  nop
    ctx->pc = 0x1cb708u;
    // NOP
label_1cb70c:
    // 0x1cb70c: 0x0  nop
    ctx->pc = 0x1cb70cu;
    // NOP
label_1cb710:
    // 0x1cb710: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb710u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb714:
    // 0x1cb714: 0xc050bb4  jal         func_142ED0
label_1cb718:
    if (ctx->pc == 0x1CB718u) {
        ctx->pc = 0x1CB718u;
            // 0x1cb718: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB71Cu;
        goto label_1cb71c;
    }
    ctx->pc = 0x1CB714u;
    SET_GPR_U32(ctx, 31, 0x1CB71Cu);
    ctx->pc = 0x1CB718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB714u;
            // 0x1cb718: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB71Cu; }
        if (ctx->pc != 0x1CB71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB71Cu; }
        if (ctx->pc != 0x1CB71Cu) { return; }
    }
    ctx->pc = 0x1CB71Cu;
label_1cb71c:
    // 0x1cb71c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb720:
    // 0x1cb720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb724:
    // 0x1cb724: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb724u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb728:
    // 0x1cb728: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1cb728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1cb72c:
    // 0x1cb72c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cb72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb730:
    // 0x1cb730: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb734:
    // 0x1cb734: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb734u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb738:
    // 0x1cb738: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb738u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb73c:
    // 0x1cb73c: 0xc053740  jal         func_14DD00
label_1cb740:
    if (ctx->pc == 0x1CB740u) {
        ctx->pc = 0x1CB740u;
            // 0x1cb740: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB744u;
        goto label_1cb744;
    }
    ctx->pc = 0x1CB73Cu;
    SET_GPR_U32(ctx, 31, 0x1CB744u);
    ctx->pc = 0x1CB740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB73Cu;
            // 0x1cb740: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB744u; }
        if (ctx->pc != 0x1CB744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB744u; }
        if (ctx->pc != 0x1CB744u) { return; }
    }
    ctx->pc = 0x1CB744u;
label_1cb744:
    // 0x1cb744: 0xc050bb4  jal         func_142ED0
label_1cb748:
    if (ctx->pc == 0x1CB748u) {
        ctx->pc = 0x1CB74Cu;
        goto label_1cb74c;
    }
    ctx->pc = 0x1CB744u;
    SET_GPR_U32(ctx, 31, 0x1CB74Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB74Cu; }
        if (ctx->pc != 0x1CB74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB74Cu; }
        if (ctx->pc != 0x1CB74Cu) { return; }
    }
    ctx->pc = 0x1CB74Cu;
label_1cb74c:
    // 0x1cb74c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb750:
    // 0x1cb750: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb754:
    // 0x1cb754: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb754u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb758:
    // 0x1cb758: 0x0  nop
    ctx->pc = 0x1cb758u;
    // NOP
label_1cb75c:
    // 0x1cb75c: 0x0  nop
    ctx->pc = 0x1cb75cu;
    // NOP
label_1cb760:
    // 0x1cb760: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb760u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb764:
    // 0x1cb764: 0xc050bb4  jal         func_142ED0
label_1cb768:
    if (ctx->pc == 0x1CB768u) {
        ctx->pc = 0x1CB768u;
            // 0x1cb768: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB76Cu;
        goto label_1cb76c;
    }
    ctx->pc = 0x1CB764u;
    SET_GPR_U32(ctx, 31, 0x1CB76Cu);
    ctx->pc = 0x1CB768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB764u;
            // 0x1cb768: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB76Cu; }
        if (ctx->pc != 0x1CB76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB76Cu; }
        if (ctx->pc != 0x1CB76Cu) { return; }
    }
    ctx->pc = 0x1CB76Cu;
label_1cb76c:
    // 0x1cb76c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb770:
    // 0x1cb770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb774:
    // 0x1cb774: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb774u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb778:
    // 0x1cb778: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1cb778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1cb77c:
    // 0x1cb77c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cb77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb780:
    // 0x1cb780: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb784:
    // 0x1cb784: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb784u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb788:
    // 0x1cb788: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb788u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb78c:
    // 0x1cb78c: 0xc053740  jal         func_14DD00
label_1cb790:
    if (ctx->pc == 0x1CB790u) {
        ctx->pc = 0x1CB790u;
            // 0x1cb790: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB794u;
        goto label_1cb794;
    }
    ctx->pc = 0x1CB78Cu;
    SET_GPR_U32(ctx, 31, 0x1CB794u);
    ctx->pc = 0x1CB790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB78Cu;
            // 0x1cb790: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB794u; }
        if (ctx->pc != 0x1CB794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB794u; }
        if (ctx->pc != 0x1CB794u) { return; }
    }
    ctx->pc = 0x1CB794u;
label_1cb794:
    // 0x1cb794: 0xc050bb4  jal         func_142ED0
label_1cb798:
    if (ctx->pc == 0x1CB798u) {
        ctx->pc = 0x1CB79Cu;
        goto label_1cb79c;
    }
    ctx->pc = 0x1CB794u;
    SET_GPR_U32(ctx, 31, 0x1CB79Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB79Cu; }
        if (ctx->pc != 0x1CB79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB79Cu; }
        if (ctx->pc != 0x1CB79Cu) { return; }
    }
    ctx->pc = 0x1CB79Cu;
label_1cb79c:
    // 0x1cb79c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb7a0:
    // 0x1cb7a0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb7a4:
    // 0x1cb7a4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb7a4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb7a8:
    // 0x1cb7a8: 0x0  nop
    ctx->pc = 0x1cb7a8u;
    // NOP
label_1cb7ac:
    // 0x1cb7ac: 0x0  nop
    ctx->pc = 0x1cb7acu;
    // NOP
label_1cb7b0:
    // 0x1cb7b0: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb7b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb7b4:
    // 0x1cb7b4: 0xc050bb4  jal         func_142ED0
label_1cb7b8:
    if (ctx->pc == 0x1CB7B8u) {
        ctx->pc = 0x1CB7B8u;
            // 0x1cb7b8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB7BCu;
        goto label_1cb7bc;
    }
    ctx->pc = 0x1CB7B4u;
    SET_GPR_U32(ctx, 31, 0x1CB7BCu);
    ctx->pc = 0x1CB7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7B4u;
            // 0x1cb7b8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7BCu; }
        if (ctx->pc != 0x1CB7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7BCu; }
        if (ctx->pc != 0x1CB7BCu) { return; }
    }
    ctx->pc = 0x1CB7BCu;
label_1cb7bc:
    // 0x1cb7bc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb7c0:
    // 0x1cb7c0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1cb7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb7c4:
    // 0x1cb7c4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb7c4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb7c8:
    // 0x1cb7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb7cc:
    // 0x1cb7cc: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1cb7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1cb7d0:
    // 0x1cb7d0: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1cb7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_1cb7d4:
    // 0x1cb7d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cb7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cb7d8:
    // 0x1cb7d8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cb7d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb7dc:
    // 0x1cb7dc: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb7dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb7e0:
    // 0x1cb7e0: 0xc053740  jal         func_14DD00
label_1cb7e4:
    if (ctx->pc == 0x1CB7E4u) {
        ctx->pc = 0x1CB7E4u;
            // 0x1cb7e4: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB7E8u;
        goto label_1cb7e8;
    }
    ctx->pc = 0x1CB7E0u;
    SET_GPR_U32(ctx, 31, 0x1CB7E8u);
    ctx->pc = 0x1CB7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7E0u;
            // 0x1cb7e4: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7E8u; }
        if (ctx->pc != 0x1CB7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7E8u; }
        if (ctx->pc != 0x1CB7E8u) { return; }
    }
    ctx->pc = 0x1CB7E8u;
label_1cb7e8:
    // 0x1cb7e8: 0xc050bb4  jal         func_142ED0
label_1cb7ec:
    if (ctx->pc == 0x1CB7ECu) {
        ctx->pc = 0x1CB7F0u;
        goto label_1cb7f0;
    }
    ctx->pc = 0x1CB7E8u;
    SET_GPR_U32(ctx, 31, 0x1CB7F0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7F0u; }
        if (ctx->pc != 0x1CB7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7F0u; }
        if (ctx->pc != 0x1CB7F0u) { return; }
    }
    ctx->pc = 0x1CB7F0u;
label_1cb7f0:
    // 0x1cb7f0: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb7f4:
    // 0x1cb7f4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb7f8:
    // 0x1cb7f8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb7f8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb7fc:
    // 0x1cb7fc: 0x0  nop
    ctx->pc = 0x1cb7fcu;
    // NOP
label_1cb800:
    // 0x1cb800: 0x0  nop
    ctx->pc = 0x1cb800u;
    // NOP
label_1cb804:
    // 0x1cb804: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb804u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb808:
    // 0x1cb808: 0xc050bb4  jal         func_142ED0
label_1cb80c:
    if (ctx->pc == 0x1CB80Cu) {
        ctx->pc = 0x1CB80Cu;
            // 0x1cb80c: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB810u;
        goto label_1cb810;
    }
    ctx->pc = 0x1CB808u;
    SET_GPR_U32(ctx, 31, 0x1CB810u);
    ctx->pc = 0x1CB80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB808u;
            // 0x1cb80c: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB810u; }
        if (ctx->pc != 0x1CB810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB810u; }
        if (ctx->pc != 0x1CB810u) { return; }
    }
    ctx->pc = 0x1CB810u;
label_1cb810:
    // 0x1cb810: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb814:
    // 0x1cb814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb818:
    // 0x1cb818: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb818u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb81c:
    // 0x1cb81c: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1cb81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1cb820:
    // 0x1cb820: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cb820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb824:
    // 0x1cb824: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb828:
    // 0x1cb828: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb828u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb82c:
    // 0x1cb82c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb82cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb830:
    // 0x1cb830: 0xc053740  jal         func_14DD00
label_1cb834:
    if (ctx->pc == 0x1CB834u) {
        ctx->pc = 0x1CB834u;
            // 0x1cb834: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB838u;
        goto label_1cb838;
    }
    ctx->pc = 0x1CB830u;
    SET_GPR_U32(ctx, 31, 0x1CB838u);
    ctx->pc = 0x1CB834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB830u;
            // 0x1cb834: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB838u; }
        if (ctx->pc != 0x1CB838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB838u; }
        if (ctx->pc != 0x1CB838u) { return; }
    }
    ctx->pc = 0x1CB838u;
label_1cb838:
    // 0x1cb838: 0xc050bb4  jal         func_142ED0
label_1cb83c:
    if (ctx->pc == 0x1CB83Cu) {
        ctx->pc = 0x1CB840u;
        goto label_1cb840;
    }
    ctx->pc = 0x1CB838u;
    SET_GPR_U32(ctx, 31, 0x1CB840u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB840u; }
        if (ctx->pc != 0x1CB840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB840u; }
        if (ctx->pc != 0x1CB840u) { return; }
    }
    ctx->pc = 0x1CB840u;
label_1cb840:
    // 0x1cb840: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb844:
    // 0x1cb844: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb848:
    // 0x1cb848: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb848u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb84c:
    // 0x1cb84c: 0x0  nop
    ctx->pc = 0x1cb84cu;
    // NOP
label_1cb850:
    // 0x1cb850: 0x0  nop
    ctx->pc = 0x1cb850u;
    // NOP
label_1cb854:
    // 0x1cb854: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb854u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb858:
    // 0x1cb858: 0xc050bb4  jal         func_142ED0
label_1cb85c:
    if (ctx->pc == 0x1CB85Cu) {
        ctx->pc = 0x1CB85Cu;
            // 0x1cb85c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB860u;
        goto label_1cb860;
    }
    ctx->pc = 0x1CB858u;
    SET_GPR_U32(ctx, 31, 0x1CB860u);
    ctx->pc = 0x1CB85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB858u;
            // 0x1cb85c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB860u; }
        if (ctx->pc != 0x1CB860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB860u; }
        if (ctx->pc != 0x1CB860u) { return; }
    }
    ctx->pc = 0x1CB860u;
label_1cb860:
    // 0x1cb860: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb864:
    // 0x1cb864: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1cb864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb868:
    // 0x1cb868: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb868u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb86c:
    // 0x1cb86c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb870:
    // 0x1cb870: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1cb870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1cb874:
    // 0x1cb874: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x1cb874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
label_1cb878:
    // 0x1cb878: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cb878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cb87c:
    // 0x1cb87c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cb87cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb880:
    // 0x1cb880: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb880u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb884:
    // 0x1cb884: 0xc053740  jal         func_14DD00
label_1cb888:
    if (ctx->pc == 0x1CB888u) {
        ctx->pc = 0x1CB888u;
            // 0x1cb888: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB88Cu;
        goto label_1cb88c;
    }
    ctx->pc = 0x1CB884u;
    SET_GPR_U32(ctx, 31, 0x1CB88Cu);
    ctx->pc = 0x1CB888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB884u;
            // 0x1cb888: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB88Cu; }
        if (ctx->pc != 0x1CB88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB88Cu; }
        if (ctx->pc != 0x1CB88Cu) { return; }
    }
    ctx->pc = 0x1CB88Cu;
label_1cb88c:
    // 0x1cb88c: 0xc050bb4  jal         func_142ED0
label_1cb890:
    if (ctx->pc == 0x1CB890u) {
        ctx->pc = 0x1CB894u;
        goto label_1cb894;
    }
    ctx->pc = 0x1CB88Cu;
    SET_GPR_U32(ctx, 31, 0x1CB894u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB894u; }
        if (ctx->pc != 0x1CB894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB894u; }
        if (ctx->pc != 0x1CB894u) { return; }
    }
    ctx->pc = 0x1CB894u;
label_1cb894:
    // 0x1cb894: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb898:
    // 0x1cb898: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb89c:
    // 0x1cb89c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb89cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb8a0:
    // 0x1cb8a0: 0x0  nop
    ctx->pc = 0x1cb8a0u;
    // NOP
label_1cb8a4:
    // 0x1cb8a4: 0x0  nop
    ctx->pc = 0x1cb8a4u;
    // NOP
label_1cb8a8:
    // 0x1cb8a8: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb8a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb8ac:
    // 0x1cb8ac: 0xc050bb4  jal         func_142ED0
label_1cb8b0:
    if (ctx->pc == 0x1CB8B0u) {
        ctx->pc = 0x1CB8B0u;
            // 0x1cb8b0: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB8B4u;
        goto label_1cb8b4;
    }
    ctx->pc = 0x1CB8ACu;
    SET_GPR_U32(ctx, 31, 0x1CB8B4u);
    ctx->pc = 0x1CB8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8ACu;
            // 0x1cb8b0: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8B4u; }
        if (ctx->pc != 0x1CB8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8B4u; }
        if (ctx->pc != 0x1CB8B4u) { return; }
    }
    ctx->pc = 0x1CB8B4u;
label_1cb8b4:
    // 0x1cb8b4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb8b8:
    // 0x1cb8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8bc:
    // 0x1cb8bc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb8bcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb8c0:
    // 0x1cb8c0: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1cb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1cb8c4:
    // 0x1cb8c4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cb8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb8c8:
    // 0x1cb8c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb8cc:
    // 0x1cb8cc: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb8ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb8d0:
    // 0x1cb8d0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb8d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb8d4:
    // 0x1cb8d4: 0xc053740  jal         func_14DD00
label_1cb8d8:
    if (ctx->pc == 0x1CB8D8u) {
        ctx->pc = 0x1CB8D8u;
            // 0x1cb8d8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB8DCu;
        goto label_1cb8dc;
    }
    ctx->pc = 0x1CB8D4u;
    SET_GPR_U32(ctx, 31, 0x1CB8DCu);
    ctx->pc = 0x1CB8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8D4u;
            // 0x1cb8d8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8DCu; }
        if (ctx->pc != 0x1CB8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8DCu; }
        if (ctx->pc != 0x1CB8DCu) { return; }
    }
    ctx->pc = 0x1CB8DCu;
label_1cb8dc:
    // 0x1cb8dc: 0xc050bb4  jal         func_142ED0
label_1cb8e0:
    if (ctx->pc == 0x1CB8E0u) {
        ctx->pc = 0x1CB8E4u;
        goto label_1cb8e4;
    }
    ctx->pc = 0x1CB8DCu;
    SET_GPR_U32(ctx, 31, 0x1CB8E4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8E4u; }
        if (ctx->pc != 0x1CB8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8E4u; }
        if (ctx->pc != 0x1CB8E4u) { return; }
    }
    ctx->pc = 0x1CB8E4u;
label_1cb8e4:
    // 0x1cb8e4: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cb8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1cb8e8:
    // 0x1cb8e8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb8ec:
    // 0x1cb8ec: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cb8ecu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb8f0:
    // 0x1cb8f0: 0x0  nop
    ctx->pc = 0x1cb8f0u;
    // NOP
label_1cb8f4:
    // 0x1cb8f4: 0x0  nop
    ctx->pc = 0x1cb8f4u;
    // NOP
label_1cb8f8:
    // 0x1cb8f8: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb8f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb8fc:
    // 0x1cb8fc: 0xc050bb4  jal         func_142ED0
label_1cb900:
    if (ctx->pc == 0x1CB900u) {
        ctx->pc = 0x1CB900u;
            // 0x1cb900: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB904u;
        goto label_1cb904;
    }
    ctx->pc = 0x1CB8FCu;
    SET_GPR_U32(ctx, 31, 0x1CB904u);
    ctx->pc = 0x1CB900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8FCu;
            // 0x1cb900: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB904u; }
        if (ctx->pc != 0x1CB904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB904u; }
        if (ctx->pc != 0x1CB904u) { return; }
    }
    ctx->pc = 0x1CB904u;
label_1cb904:
    // 0x1cb904: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cb904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cb908:
    // 0x1cb908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb90c:
    // 0x1cb90c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cb90cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cb910:
    // 0x1cb910: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1cb910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1cb914:
    // 0x1cb914: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cb914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb918:
    // 0x1cb918: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb91c:
    // 0x1cb91c: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb91cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb920:
    // 0x1cb920: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cb920u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cb924:
    // 0x1cb924: 0xc053740  jal         func_14DD00
label_1cb928:
    if (ctx->pc == 0x1CB928u) {
        ctx->pc = 0x1CB928u;
            // 0x1cb928: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CB92Cu;
        goto label_1cb92c;
    }
    ctx->pc = 0x1CB924u;
    SET_GPR_U32(ctx, 31, 0x1CB92Cu);
    ctx->pc = 0x1CB928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB924u;
            // 0x1cb928: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB92Cu; }
        if (ctx->pc != 0x1CB92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB92Cu; }
        if (ctx->pc != 0x1CB92Cu) { return; }
    }
    ctx->pc = 0x1CB92Cu;
label_1cb92c:
    // 0x1cb92c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1cb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb930:
    // 0x1cb930: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb934:
    // 0x1cb934: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1cb934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb938:
    // 0x1cb938: 0xc07b0ac  jal         func_1EC2B0
label_1cb93c:
    if (ctx->pc == 0x1CB93Cu) {
        ctx->pc = 0x1CB93Cu;
            // 0x1cb93c: 0x2445ffba  addiu       $a1, $v0, -0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
        ctx->pc = 0x1CB940u;
        goto label_1cb940;
    }
    ctx->pc = 0x1CB938u;
    SET_GPR_U32(ctx, 31, 0x1CB940u);
    ctx->pc = 0x1CB93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB938u;
            // 0x1cb93c: 0x2445ffba  addiu       $a1, $v0, -0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB940u; }
        if (ctx->pc != 0x1CB940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB940u; }
        if (ctx->pc != 0x1CB940u) { return; }
    }
    ctx->pc = 0x1CB940u;
label_1cb940:
    // 0x1cb940: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1cb940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb944:
    // 0x1cb944: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1cb944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb948:
    // 0x1cb948: 0xc07b0ac  jal         func_1EC2B0
label_1cb94c:
    if (ctx->pc == 0x1CB94Cu) {
        ctx->pc = 0x1CB94Cu;
            // 0x1cb94c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB950u;
        goto label_1cb950;
    }
    ctx->pc = 0x1CB948u;
    SET_GPR_U32(ctx, 31, 0x1CB950u);
    ctx->pc = 0x1CB94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB948u;
            // 0x1cb94c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB950u; }
        if (ctx->pc != 0x1CB950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB950u; }
        if (ctx->pc != 0x1CB950u) { return; }
    }
    ctx->pc = 0x1CB950u;
label_1cb950:
    // 0x1cb950: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1cb950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb954:
    // 0x1cb954: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb958:
    // 0x1cb958: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1cb958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb95c:
    // 0x1cb95c: 0xc07b0ac  jal         func_1EC2B0
label_1cb960:
    if (ctx->pc == 0x1CB960u) {
        ctx->pc = 0x1CB960u;
            // 0x1cb960: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1CB964u;
        goto label_1cb964;
    }
    ctx->pc = 0x1CB95Cu;
    SET_GPR_U32(ctx, 31, 0x1CB964u);
    ctx->pc = 0x1CB960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB95Cu;
            // 0x1cb960: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB964u; }
        if (ctx->pc != 0x1CB964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB964u; }
        if (ctx->pc != 0x1CB964u) { return; }
    }
    ctx->pc = 0x1CB964u;
label_1cb964:
    // 0x1cb964: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1cb964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1cb968:
    // 0x1cb968: 0x40f809  jalr        $v0
label_1cb96c:
    if (ctx->pc == 0x1CB96Cu) {
        ctx->pc = 0x1CB96Cu;
            // 0x1cb96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB970u;
        goto label_1cb970;
    }
    ctx->pc = 0x1CB968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB970u);
        ctx->pc = 0x1CB96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB968u;
            // 0x1cb96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9CC0u: goto label_1c9cc0;
            case 0x1C9CC4u: goto label_1c9cc4;
            case 0x1C9CC8u: goto label_1c9cc8;
            case 0x1C9CCCu: goto label_1c9ccc;
            case 0x1C9CD0u: goto label_1c9cd0;
            case 0x1C9CD4u: goto label_1c9cd4;
            case 0x1C9CD8u: goto label_1c9cd8;
            case 0x1C9CDCu: goto label_1c9cdc;
            case 0x1C9CE0u: goto label_1c9ce0;
            case 0x1C9CE4u: goto label_1c9ce4;
            case 0x1C9CE8u: goto label_1c9ce8;
            case 0x1C9CECu: goto label_1c9cec;
            case 0x1C9CF0u: goto label_1c9cf0;
            case 0x1C9CF4u: goto label_1c9cf4;
            case 0x1C9CF8u: goto label_1c9cf8;
            case 0x1C9CFCu: goto label_1c9cfc;
            case 0x1C9D00u: goto label_1c9d00;
            case 0x1C9D04u: goto label_1c9d04;
            case 0x1C9D08u: goto label_1c9d08;
            case 0x1C9D0Cu: goto label_1c9d0c;
            case 0x1C9D10u: goto label_1c9d10;
            case 0x1C9D14u: goto label_1c9d14;
            case 0x1C9D18u: goto label_1c9d18;
            case 0x1C9D1Cu: goto label_1c9d1c;
            case 0x1C9D20u: goto label_1c9d20;
            case 0x1C9D24u: goto label_1c9d24;
            case 0x1C9D28u: goto label_1c9d28;
            case 0x1C9D2Cu: goto label_1c9d2c;
            case 0x1C9D30u: goto label_1c9d30;
            case 0x1C9D34u: goto label_1c9d34;
            case 0x1C9D38u: goto label_1c9d38;
            case 0x1C9D3Cu: goto label_1c9d3c;
            case 0x1C9D40u: goto label_1c9d40;
            case 0x1C9D44u: goto label_1c9d44;
            case 0x1C9D48u: goto label_1c9d48;
            case 0x1C9D4Cu: goto label_1c9d4c;
            case 0x1C9D50u: goto label_1c9d50;
            case 0x1C9D54u: goto label_1c9d54;
            case 0x1C9D58u: goto label_1c9d58;
            case 0x1C9D5Cu: goto label_1c9d5c;
            case 0x1C9D60u: goto label_1c9d60;
            case 0x1C9D64u: goto label_1c9d64;
            case 0x1C9D68u: goto label_1c9d68;
            case 0x1C9D6Cu: goto label_1c9d6c;
            case 0x1C9D70u: goto label_1c9d70;
            case 0x1C9D74u: goto label_1c9d74;
            case 0x1C9D78u: goto label_1c9d78;
            case 0x1C9D7Cu: goto label_1c9d7c;
            case 0x1C9D80u: goto label_1c9d80;
            case 0x1C9D84u: goto label_1c9d84;
            case 0x1C9D88u: goto label_1c9d88;
            case 0x1C9D8Cu: goto label_1c9d8c;
            case 0x1C9D90u: goto label_1c9d90;
            case 0x1C9D94u: goto label_1c9d94;
            case 0x1C9D98u: goto label_1c9d98;
            case 0x1C9D9Cu: goto label_1c9d9c;
            case 0x1C9DA0u: goto label_1c9da0;
            case 0x1C9DA4u: goto label_1c9da4;
            case 0x1C9DA8u: goto label_1c9da8;
            case 0x1C9DACu: goto label_1c9dac;
            case 0x1C9DB0u: goto label_1c9db0;
            case 0x1C9DB4u: goto label_1c9db4;
            case 0x1C9DB8u: goto label_1c9db8;
            case 0x1C9DBCu: goto label_1c9dbc;
            case 0x1C9DC0u: goto label_1c9dc0;
            case 0x1C9DC4u: goto label_1c9dc4;
            case 0x1C9DC8u: goto label_1c9dc8;
            case 0x1C9DCCu: goto label_1c9dcc;
            case 0x1C9DD0u: goto label_1c9dd0;
            case 0x1C9DD4u: goto label_1c9dd4;
            case 0x1C9DD8u: goto label_1c9dd8;
            case 0x1C9DDCu: goto label_1c9ddc;
            case 0x1C9DE0u: goto label_1c9de0;
            case 0x1C9DE4u: goto label_1c9de4;
            case 0x1C9DE8u: goto label_1c9de8;
            case 0x1C9DECu: goto label_1c9dec;
            case 0x1C9DF0u: goto label_1c9df0;
            case 0x1C9DF4u: goto label_1c9df4;
            case 0x1C9DF8u: goto label_1c9df8;
            case 0x1C9DFCu: goto label_1c9dfc;
            case 0x1C9E00u: goto label_1c9e00;
            case 0x1C9E04u: goto label_1c9e04;
            case 0x1C9E08u: goto label_1c9e08;
            case 0x1C9E0Cu: goto label_1c9e0c;
            case 0x1C9E10u: goto label_1c9e10;
            case 0x1C9E14u: goto label_1c9e14;
            case 0x1C9E18u: goto label_1c9e18;
            case 0x1C9E1Cu: goto label_1c9e1c;
            case 0x1C9E20u: goto label_1c9e20;
            case 0x1C9E24u: goto label_1c9e24;
            case 0x1C9E28u: goto label_1c9e28;
            case 0x1C9E2Cu: goto label_1c9e2c;
            case 0x1C9E30u: goto label_1c9e30;
            case 0x1C9E34u: goto label_1c9e34;
            case 0x1C9E38u: goto label_1c9e38;
            case 0x1C9E3Cu: goto label_1c9e3c;
            case 0x1C9E40u: goto label_1c9e40;
            case 0x1C9E44u: goto label_1c9e44;
            case 0x1C9E48u: goto label_1c9e48;
            case 0x1C9E4Cu: goto label_1c9e4c;
            case 0x1C9E50u: goto label_1c9e50;
            case 0x1C9E54u: goto label_1c9e54;
            case 0x1C9E58u: goto label_1c9e58;
            case 0x1C9E5Cu: goto label_1c9e5c;
            case 0x1C9E60u: goto label_1c9e60;
            case 0x1C9E64u: goto label_1c9e64;
            case 0x1C9E68u: goto label_1c9e68;
            case 0x1C9E6Cu: goto label_1c9e6c;
            case 0x1C9E70u: goto label_1c9e70;
            case 0x1C9E74u: goto label_1c9e74;
            case 0x1C9E78u: goto label_1c9e78;
            case 0x1C9E7Cu: goto label_1c9e7c;
            case 0x1C9E80u: goto label_1c9e80;
            case 0x1C9E84u: goto label_1c9e84;
            case 0x1C9E88u: goto label_1c9e88;
            case 0x1C9E8Cu: goto label_1c9e8c;
            case 0x1C9E90u: goto label_1c9e90;
            case 0x1C9E94u: goto label_1c9e94;
            case 0x1C9E98u: goto label_1c9e98;
            case 0x1C9E9Cu: goto label_1c9e9c;
            case 0x1C9EA0u: goto label_1c9ea0;
            case 0x1C9EA4u: goto label_1c9ea4;
            case 0x1C9EA8u: goto label_1c9ea8;
            case 0x1C9EACu: goto label_1c9eac;
            case 0x1C9EB0u: goto label_1c9eb0;
            case 0x1C9EB4u: goto label_1c9eb4;
            case 0x1C9EB8u: goto label_1c9eb8;
            case 0x1C9EBCu: goto label_1c9ebc;
            case 0x1C9EC0u: goto label_1c9ec0;
            case 0x1C9EC4u: goto label_1c9ec4;
            case 0x1C9EC8u: goto label_1c9ec8;
            case 0x1C9ECCu: goto label_1c9ecc;
            case 0x1C9ED0u: goto label_1c9ed0;
            case 0x1C9ED4u: goto label_1c9ed4;
            case 0x1C9ED8u: goto label_1c9ed8;
            case 0x1C9EDCu: goto label_1c9edc;
            case 0x1C9EE0u: goto label_1c9ee0;
            case 0x1C9EE4u: goto label_1c9ee4;
            case 0x1C9EE8u: goto label_1c9ee8;
            case 0x1C9EECu: goto label_1c9eec;
            case 0x1C9EF0u: goto label_1c9ef0;
            case 0x1C9EF4u: goto label_1c9ef4;
            case 0x1C9EF8u: goto label_1c9ef8;
            case 0x1C9EFCu: goto label_1c9efc;
            case 0x1C9F00u: goto label_1c9f00;
            case 0x1C9F04u: goto label_1c9f04;
            case 0x1C9F08u: goto label_1c9f08;
            case 0x1C9F0Cu: goto label_1c9f0c;
            case 0x1C9F10u: goto label_1c9f10;
            case 0x1C9F14u: goto label_1c9f14;
            case 0x1C9F18u: goto label_1c9f18;
            case 0x1C9F1Cu: goto label_1c9f1c;
            case 0x1C9F20u: goto label_1c9f20;
            case 0x1C9F24u: goto label_1c9f24;
            case 0x1C9F28u: goto label_1c9f28;
            case 0x1C9F2Cu: goto label_1c9f2c;
            case 0x1C9F30u: goto label_1c9f30;
            case 0x1C9F34u: goto label_1c9f34;
            case 0x1C9F38u: goto label_1c9f38;
            case 0x1C9F3Cu: goto label_1c9f3c;
            case 0x1C9F40u: goto label_1c9f40;
            case 0x1C9F44u: goto label_1c9f44;
            case 0x1C9F48u: goto label_1c9f48;
            case 0x1C9F4Cu: goto label_1c9f4c;
            case 0x1C9F50u: goto label_1c9f50;
            case 0x1C9F54u: goto label_1c9f54;
            case 0x1C9F58u: goto label_1c9f58;
            case 0x1C9F5Cu: goto label_1c9f5c;
            case 0x1C9F60u: goto label_1c9f60;
            case 0x1C9F64u: goto label_1c9f64;
            case 0x1C9F68u: goto label_1c9f68;
            case 0x1C9F6Cu: goto label_1c9f6c;
            case 0x1C9F70u: goto label_1c9f70;
            case 0x1C9F74u: goto label_1c9f74;
            case 0x1C9F78u: goto label_1c9f78;
            case 0x1C9F7Cu: goto label_1c9f7c;
            case 0x1C9F80u: goto label_1c9f80;
            case 0x1C9F84u: goto label_1c9f84;
            case 0x1C9F88u: goto label_1c9f88;
            case 0x1C9F8Cu: goto label_1c9f8c;
            case 0x1C9F90u: goto label_1c9f90;
            case 0x1C9F94u: goto label_1c9f94;
            case 0x1C9F98u: goto label_1c9f98;
            case 0x1C9F9Cu: goto label_1c9f9c;
            case 0x1C9FA0u: goto label_1c9fa0;
            case 0x1C9FA4u: goto label_1c9fa4;
            case 0x1C9FA8u: goto label_1c9fa8;
            case 0x1C9FACu: goto label_1c9fac;
            case 0x1C9FB0u: goto label_1c9fb0;
            case 0x1C9FB4u: goto label_1c9fb4;
            case 0x1C9FB8u: goto label_1c9fb8;
            case 0x1C9FBCu: goto label_1c9fbc;
            case 0x1C9FC0u: goto label_1c9fc0;
            case 0x1C9FC4u: goto label_1c9fc4;
            case 0x1C9FC8u: goto label_1c9fc8;
            case 0x1C9FCCu: goto label_1c9fcc;
            case 0x1C9FD0u: goto label_1c9fd0;
            case 0x1C9FD4u: goto label_1c9fd4;
            case 0x1C9FD8u: goto label_1c9fd8;
            case 0x1C9FDCu: goto label_1c9fdc;
            case 0x1C9FE0u: goto label_1c9fe0;
            case 0x1C9FE4u: goto label_1c9fe4;
            case 0x1C9FE8u: goto label_1c9fe8;
            case 0x1C9FECu: goto label_1c9fec;
            case 0x1C9FF0u: goto label_1c9ff0;
            case 0x1C9FF4u: goto label_1c9ff4;
            case 0x1C9FF8u: goto label_1c9ff8;
            case 0x1C9FFCu: goto label_1c9ffc;
            case 0x1CA000u: goto label_1ca000;
            case 0x1CA004u: goto label_1ca004;
            case 0x1CA008u: goto label_1ca008;
            case 0x1CA00Cu: goto label_1ca00c;
            case 0x1CA010u: goto label_1ca010;
            case 0x1CA014u: goto label_1ca014;
            case 0x1CA018u: goto label_1ca018;
            case 0x1CA01Cu: goto label_1ca01c;
            case 0x1CA020u: goto label_1ca020;
            case 0x1CA024u: goto label_1ca024;
            case 0x1CA028u: goto label_1ca028;
            case 0x1CA02Cu: goto label_1ca02c;
            case 0x1CA030u: goto label_1ca030;
            case 0x1CA034u: goto label_1ca034;
            case 0x1CA038u: goto label_1ca038;
            case 0x1CA03Cu: goto label_1ca03c;
            case 0x1CA040u: goto label_1ca040;
            case 0x1CA044u: goto label_1ca044;
            case 0x1CA048u: goto label_1ca048;
            case 0x1CA04Cu: goto label_1ca04c;
            case 0x1CA050u: goto label_1ca050;
            case 0x1CA054u: goto label_1ca054;
            case 0x1CA058u: goto label_1ca058;
            case 0x1CA05Cu: goto label_1ca05c;
            case 0x1CA060u: goto label_1ca060;
            case 0x1CA064u: goto label_1ca064;
            case 0x1CA068u: goto label_1ca068;
            case 0x1CA06Cu: goto label_1ca06c;
            case 0x1CA070u: goto label_1ca070;
            case 0x1CA074u: goto label_1ca074;
            case 0x1CA078u: goto label_1ca078;
            case 0x1CA07Cu: goto label_1ca07c;
            case 0x1CA080u: goto label_1ca080;
            case 0x1CA084u: goto label_1ca084;
            case 0x1CA088u: goto label_1ca088;
            case 0x1CA08Cu: goto label_1ca08c;
            case 0x1CA090u: goto label_1ca090;
            case 0x1CA094u: goto label_1ca094;
            case 0x1CA098u: goto label_1ca098;
            case 0x1CA09Cu: goto label_1ca09c;
            case 0x1CA0A0u: goto label_1ca0a0;
            case 0x1CA0A4u: goto label_1ca0a4;
            case 0x1CA0A8u: goto label_1ca0a8;
            case 0x1CA0ACu: goto label_1ca0ac;
            case 0x1CA0B0u: goto label_1ca0b0;
            case 0x1CA0B4u: goto label_1ca0b4;
            case 0x1CA0B8u: goto label_1ca0b8;
            case 0x1CA0BCu: goto label_1ca0bc;
            case 0x1CA0C0u: goto label_1ca0c0;
            case 0x1CA0C4u: goto label_1ca0c4;
            case 0x1CA0C8u: goto label_1ca0c8;
            case 0x1CA0CCu: goto label_1ca0cc;
            case 0x1CA0D0u: goto label_1ca0d0;
            case 0x1CA0D4u: goto label_1ca0d4;
            case 0x1CA0D8u: goto label_1ca0d8;
            case 0x1CA0DCu: goto label_1ca0dc;
            case 0x1CA0E0u: goto label_1ca0e0;
            case 0x1CA0E4u: goto label_1ca0e4;
            case 0x1CA0E8u: goto label_1ca0e8;
            case 0x1CA0ECu: goto label_1ca0ec;
            case 0x1CA0F0u: goto label_1ca0f0;
            case 0x1CA0F4u: goto label_1ca0f4;
            case 0x1CA0F8u: goto label_1ca0f8;
            case 0x1CA0FCu: goto label_1ca0fc;
            case 0x1CA100u: goto label_1ca100;
            case 0x1CA104u: goto label_1ca104;
            case 0x1CA108u: goto label_1ca108;
            case 0x1CA10Cu: goto label_1ca10c;
            case 0x1CA110u: goto label_1ca110;
            case 0x1CA114u: goto label_1ca114;
            case 0x1CA118u: goto label_1ca118;
            case 0x1CA11Cu: goto label_1ca11c;
            case 0x1CA120u: goto label_1ca120;
            case 0x1CA124u: goto label_1ca124;
            case 0x1CA128u: goto label_1ca128;
            case 0x1CA12Cu: goto label_1ca12c;
            case 0x1CA130u: goto label_1ca130;
            case 0x1CA134u: goto label_1ca134;
            case 0x1CA138u: goto label_1ca138;
            case 0x1CA13Cu: goto label_1ca13c;
            case 0x1CA140u: goto label_1ca140;
            case 0x1CA144u: goto label_1ca144;
            case 0x1CA148u: goto label_1ca148;
            case 0x1CA14Cu: goto label_1ca14c;
            case 0x1CA150u: goto label_1ca150;
            case 0x1CA154u: goto label_1ca154;
            case 0x1CA158u: goto label_1ca158;
            case 0x1CA15Cu: goto label_1ca15c;
            case 0x1CA160u: goto label_1ca160;
            case 0x1CA164u: goto label_1ca164;
            case 0x1CA168u: goto label_1ca168;
            case 0x1CA16Cu: goto label_1ca16c;
            case 0x1CA170u: goto label_1ca170;
            case 0x1CA174u: goto label_1ca174;
            case 0x1CA178u: goto label_1ca178;
            case 0x1CA17Cu: goto label_1ca17c;
            case 0x1CA180u: goto label_1ca180;
            case 0x1CA184u: goto label_1ca184;
            case 0x1CA188u: goto label_1ca188;
            case 0x1CA18Cu: goto label_1ca18c;
            case 0x1CA190u: goto label_1ca190;
            case 0x1CA194u: goto label_1ca194;
            case 0x1CA198u: goto label_1ca198;
            case 0x1CA19Cu: goto label_1ca19c;
            case 0x1CA1A0u: goto label_1ca1a0;
            case 0x1CA1A4u: goto label_1ca1a4;
            case 0x1CA1A8u: goto label_1ca1a8;
            case 0x1CA1ACu: goto label_1ca1ac;
            case 0x1CA1B0u: goto label_1ca1b0;
            case 0x1CA1B4u: goto label_1ca1b4;
            case 0x1CA1B8u: goto label_1ca1b8;
            case 0x1CA1BCu: goto label_1ca1bc;
            case 0x1CA1C0u: goto label_1ca1c0;
            case 0x1CA1C4u: goto label_1ca1c4;
            case 0x1CA1C8u: goto label_1ca1c8;
            case 0x1CA1CCu: goto label_1ca1cc;
            case 0x1CA1D0u: goto label_1ca1d0;
            case 0x1CA1D4u: goto label_1ca1d4;
            case 0x1CA1D8u: goto label_1ca1d8;
            case 0x1CA1DCu: goto label_1ca1dc;
            case 0x1CA1E0u: goto label_1ca1e0;
            case 0x1CA1E4u: goto label_1ca1e4;
            case 0x1CA1E8u: goto label_1ca1e8;
            case 0x1CA1ECu: goto label_1ca1ec;
            case 0x1CA1F0u: goto label_1ca1f0;
            case 0x1CA1F4u: goto label_1ca1f4;
            case 0x1CA1F8u: goto label_1ca1f8;
            case 0x1CA1FCu: goto label_1ca1fc;
            case 0x1CA200u: goto label_1ca200;
            case 0x1CA204u: goto label_1ca204;
            case 0x1CA208u: goto label_1ca208;
            case 0x1CA20Cu: goto label_1ca20c;
            case 0x1CA210u: goto label_1ca210;
            case 0x1CA214u: goto label_1ca214;
            case 0x1CA218u: goto label_1ca218;
            case 0x1CA21Cu: goto label_1ca21c;
            case 0x1CA220u: goto label_1ca220;
            case 0x1CA224u: goto label_1ca224;
            case 0x1CA228u: goto label_1ca228;
            case 0x1CA22Cu: goto label_1ca22c;
            case 0x1CA230u: goto label_1ca230;
            case 0x1CA234u: goto label_1ca234;
            case 0x1CA238u: goto label_1ca238;
            case 0x1CA23Cu: goto label_1ca23c;
            case 0x1CA240u: goto label_1ca240;
            case 0x1CA244u: goto label_1ca244;
            case 0x1CA248u: goto label_1ca248;
            case 0x1CA24Cu: goto label_1ca24c;
            case 0x1CA250u: goto label_1ca250;
            case 0x1CA254u: goto label_1ca254;
            case 0x1CA258u: goto label_1ca258;
            case 0x1CA25Cu: goto label_1ca25c;
            case 0x1CA260u: goto label_1ca260;
            case 0x1CA264u: goto label_1ca264;
            case 0x1CA268u: goto label_1ca268;
            case 0x1CA26Cu: goto label_1ca26c;
            case 0x1CA270u: goto label_1ca270;
            case 0x1CA274u: goto label_1ca274;
            case 0x1CA278u: goto label_1ca278;
            case 0x1CA27Cu: goto label_1ca27c;
            case 0x1CA280u: goto label_1ca280;
            case 0x1CA284u: goto label_1ca284;
            case 0x1CA288u: goto label_1ca288;
            case 0x1CA28Cu: goto label_1ca28c;
            case 0x1CA290u: goto label_1ca290;
            case 0x1CA294u: goto label_1ca294;
            case 0x1CA298u: goto label_1ca298;
            case 0x1CA29Cu: goto label_1ca29c;
            case 0x1CA2A0u: goto label_1ca2a0;
            case 0x1CA2A4u: goto label_1ca2a4;
            case 0x1CA2A8u: goto label_1ca2a8;
            case 0x1CA2ACu: goto label_1ca2ac;
            case 0x1CA2B0u: goto label_1ca2b0;
            case 0x1CA2B4u: goto label_1ca2b4;
            case 0x1CA2B8u: goto label_1ca2b8;
            case 0x1CA2BCu: goto label_1ca2bc;
            case 0x1CA2C0u: goto label_1ca2c0;
            case 0x1CA2C4u: goto label_1ca2c4;
            case 0x1CA2C8u: goto label_1ca2c8;
            case 0x1CA2CCu: goto label_1ca2cc;
            case 0x1CA2D0u: goto label_1ca2d0;
            case 0x1CA2D4u: goto label_1ca2d4;
            case 0x1CA2D8u: goto label_1ca2d8;
            case 0x1CA2DCu: goto label_1ca2dc;
            case 0x1CA2E0u: goto label_1ca2e0;
            case 0x1CA2E4u: goto label_1ca2e4;
            case 0x1CA2E8u: goto label_1ca2e8;
            case 0x1CA2ECu: goto label_1ca2ec;
            case 0x1CA2F0u: goto label_1ca2f0;
            case 0x1CA2F4u: goto label_1ca2f4;
            case 0x1CA2F8u: goto label_1ca2f8;
            case 0x1CA2FCu: goto label_1ca2fc;
            case 0x1CA300u: goto label_1ca300;
            case 0x1CA304u: goto label_1ca304;
            case 0x1CA308u: goto label_1ca308;
            case 0x1CA30Cu: goto label_1ca30c;
            case 0x1CA310u: goto label_1ca310;
            case 0x1CA314u: goto label_1ca314;
            case 0x1CA318u: goto label_1ca318;
            case 0x1CA31Cu: goto label_1ca31c;
            case 0x1CA320u: goto label_1ca320;
            case 0x1CA324u: goto label_1ca324;
            case 0x1CA328u: goto label_1ca328;
            case 0x1CA32Cu: goto label_1ca32c;
            case 0x1CA330u: goto label_1ca330;
            case 0x1CA334u: goto label_1ca334;
            case 0x1CA338u: goto label_1ca338;
            case 0x1CA33Cu: goto label_1ca33c;
            case 0x1CA340u: goto label_1ca340;
            case 0x1CA344u: goto label_1ca344;
            case 0x1CA348u: goto label_1ca348;
            case 0x1CA34Cu: goto label_1ca34c;
            case 0x1CA350u: goto label_1ca350;
            case 0x1CA354u: goto label_1ca354;
            case 0x1CA358u: goto label_1ca358;
            case 0x1CA35Cu: goto label_1ca35c;
            case 0x1CA360u: goto label_1ca360;
            case 0x1CA364u: goto label_1ca364;
            case 0x1CA368u: goto label_1ca368;
            case 0x1CA36Cu: goto label_1ca36c;
            case 0x1CA370u: goto label_1ca370;
            case 0x1CA374u: goto label_1ca374;
            case 0x1CA378u: goto label_1ca378;
            case 0x1CA37Cu: goto label_1ca37c;
            case 0x1CA380u: goto label_1ca380;
            case 0x1CA384u: goto label_1ca384;
            case 0x1CA388u: goto label_1ca388;
            case 0x1CA38Cu: goto label_1ca38c;
            case 0x1CA390u: goto label_1ca390;
            case 0x1CA394u: goto label_1ca394;
            case 0x1CA398u: goto label_1ca398;
            case 0x1CA39Cu: goto label_1ca39c;
            case 0x1CA3A0u: goto label_1ca3a0;
            case 0x1CA3A4u: goto label_1ca3a4;
            case 0x1CA3A8u: goto label_1ca3a8;
            case 0x1CA3ACu: goto label_1ca3ac;
            case 0x1CA3B0u: goto label_1ca3b0;
            case 0x1CA3B4u: goto label_1ca3b4;
            case 0x1CA3B8u: goto label_1ca3b8;
            case 0x1CA3BCu: goto label_1ca3bc;
            case 0x1CA3C0u: goto label_1ca3c0;
            case 0x1CA3C4u: goto label_1ca3c4;
            case 0x1CA3C8u: goto label_1ca3c8;
            case 0x1CA3CCu: goto label_1ca3cc;
            case 0x1CA3D0u: goto label_1ca3d0;
            case 0x1CA3D4u: goto label_1ca3d4;
            case 0x1CA3D8u: goto label_1ca3d8;
            case 0x1CA3DCu: goto label_1ca3dc;
            case 0x1CA3E0u: goto label_1ca3e0;
            case 0x1CA3E4u: goto label_1ca3e4;
            case 0x1CA3E8u: goto label_1ca3e8;
            case 0x1CA3ECu: goto label_1ca3ec;
            case 0x1CA3F0u: goto label_1ca3f0;
            case 0x1CA3F4u: goto label_1ca3f4;
            case 0x1CA3F8u: goto label_1ca3f8;
            case 0x1CA3FCu: goto label_1ca3fc;
            case 0x1CA400u: goto label_1ca400;
            case 0x1CA404u: goto label_1ca404;
            case 0x1CA408u: goto label_1ca408;
            case 0x1CA40Cu: goto label_1ca40c;
            case 0x1CA410u: goto label_1ca410;
            case 0x1CA414u: goto label_1ca414;
            case 0x1CA418u: goto label_1ca418;
            case 0x1CA41Cu: goto label_1ca41c;
            case 0x1CA420u: goto label_1ca420;
            case 0x1CA424u: goto label_1ca424;
            case 0x1CA428u: goto label_1ca428;
            case 0x1CA42Cu: goto label_1ca42c;
            case 0x1CA430u: goto label_1ca430;
            case 0x1CA434u: goto label_1ca434;
            case 0x1CA438u: goto label_1ca438;
            case 0x1CA43Cu: goto label_1ca43c;
            case 0x1CA440u: goto label_1ca440;
            case 0x1CA444u: goto label_1ca444;
            case 0x1CA448u: goto label_1ca448;
            case 0x1CA44Cu: goto label_1ca44c;
            case 0x1CA450u: goto label_1ca450;
            case 0x1CA454u: goto label_1ca454;
            case 0x1CA458u: goto label_1ca458;
            case 0x1CA45Cu: goto label_1ca45c;
            case 0x1CA460u: goto label_1ca460;
            case 0x1CA464u: goto label_1ca464;
            case 0x1CA468u: goto label_1ca468;
            case 0x1CA46Cu: goto label_1ca46c;
            case 0x1CA470u: goto label_1ca470;
            case 0x1CA474u: goto label_1ca474;
            case 0x1CA478u: goto label_1ca478;
            case 0x1CA47Cu: goto label_1ca47c;
            case 0x1CA480u: goto label_1ca480;
            case 0x1CA484u: goto label_1ca484;
            case 0x1CA488u: goto label_1ca488;
            case 0x1CA48Cu: goto label_1ca48c;
            case 0x1CA490u: goto label_1ca490;
            case 0x1CA494u: goto label_1ca494;
            case 0x1CA498u: goto label_1ca498;
            case 0x1CA49Cu: goto label_1ca49c;
            case 0x1CA4A0u: goto label_1ca4a0;
            case 0x1CA4A4u: goto label_1ca4a4;
            case 0x1CA4A8u: goto label_1ca4a8;
            case 0x1CA4ACu: goto label_1ca4ac;
            case 0x1CA4B0u: goto label_1ca4b0;
            case 0x1CA4B4u: goto label_1ca4b4;
            case 0x1CA4B8u: goto label_1ca4b8;
            case 0x1CA4BCu: goto label_1ca4bc;
            case 0x1CA4C0u: goto label_1ca4c0;
            case 0x1CA4C4u: goto label_1ca4c4;
            case 0x1CA4C8u: goto label_1ca4c8;
            case 0x1CA4CCu: goto label_1ca4cc;
            case 0x1CA4D0u: goto label_1ca4d0;
            case 0x1CA4D4u: goto label_1ca4d4;
            case 0x1CA4D8u: goto label_1ca4d8;
            case 0x1CA4DCu: goto label_1ca4dc;
            case 0x1CA4E0u: goto label_1ca4e0;
            case 0x1CA4E4u: goto label_1ca4e4;
            case 0x1CA4E8u: goto label_1ca4e8;
            case 0x1CA4ECu: goto label_1ca4ec;
            case 0x1CA4F0u: goto label_1ca4f0;
            case 0x1CA4F4u: goto label_1ca4f4;
            case 0x1CA4F8u: goto label_1ca4f8;
            case 0x1CA4FCu: goto label_1ca4fc;
            case 0x1CA500u: goto label_1ca500;
            case 0x1CA504u: goto label_1ca504;
            case 0x1CA508u: goto label_1ca508;
            case 0x1CA50Cu: goto label_1ca50c;
            case 0x1CA510u: goto label_1ca510;
            case 0x1CA514u: goto label_1ca514;
            case 0x1CA518u: goto label_1ca518;
            case 0x1CA51Cu: goto label_1ca51c;
            case 0x1CA520u: goto label_1ca520;
            case 0x1CA524u: goto label_1ca524;
            case 0x1CA528u: goto label_1ca528;
            case 0x1CA52Cu: goto label_1ca52c;
            case 0x1CA530u: goto label_1ca530;
            case 0x1CA534u: goto label_1ca534;
            case 0x1CA538u: goto label_1ca538;
            case 0x1CA53Cu: goto label_1ca53c;
            case 0x1CA540u: goto label_1ca540;
            case 0x1CA544u: goto label_1ca544;
            case 0x1CA548u: goto label_1ca548;
            case 0x1CA54Cu: goto label_1ca54c;
            case 0x1CA550u: goto label_1ca550;
            case 0x1CA554u: goto label_1ca554;
            case 0x1CA558u: goto label_1ca558;
            case 0x1CA55Cu: goto label_1ca55c;
            case 0x1CA560u: goto label_1ca560;
            case 0x1CA564u: goto label_1ca564;
            case 0x1CA568u: goto label_1ca568;
            case 0x1CA56Cu: goto label_1ca56c;
            case 0x1CA570u: goto label_1ca570;
            case 0x1CA574u: goto label_1ca574;
            case 0x1CA578u: goto label_1ca578;
            case 0x1CA57Cu: goto label_1ca57c;
            case 0x1CA580u: goto label_1ca580;
            case 0x1CA584u: goto label_1ca584;
            case 0x1CA588u: goto label_1ca588;
            case 0x1CA58Cu: goto label_1ca58c;
            case 0x1CA590u: goto label_1ca590;
            case 0x1CA594u: goto label_1ca594;
            case 0x1CA598u: goto label_1ca598;
            case 0x1CA59Cu: goto label_1ca59c;
            case 0x1CA5A0u: goto label_1ca5a0;
            case 0x1CA5A4u: goto label_1ca5a4;
            case 0x1CA5A8u: goto label_1ca5a8;
            case 0x1CA5ACu: goto label_1ca5ac;
            case 0x1CA5B0u: goto label_1ca5b0;
            case 0x1CA5B4u: goto label_1ca5b4;
            case 0x1CA5B8u: goto label_1ca5b8;
            case 0x1CA5BCu: goto label_1ca5bc;
            case 0x1CA5C0u: goto label_1ca5c0;
            case 0x1CA5C4u: goto label_1ca5c4;
            case 0x1CA5C8u: goto label_1ca5c8;
            case 0x1CA5CCu: goto label_1ca5cc;
            case 0x1CA5D0u: goto label_1ca5d0;
            case 0x1CA5D4u: goto label_1ca5d4;
            case 0x1CA5D8u: goto label_1ca5d8;
            case 0x1CA5DCu: goto label_1ca5dc;
            case 0x1CA5E0u: goto label_1ca5e0;
            case 0x1CA5E4u: goto label_1ca5e4;
            case 0x1CA5E8u: goto label_1ca5e8;
            case 0x1CA5ECu: goto label_1ca5ec;
            case 0x1CA5F0u: goto label_1ca5f0;
            case 0x1CA5F4u: goto label_1ca5f4;
            case 0x1CA5F8u: goto label_1ca5f8;
            case 0x1CA5FCu: goto label_1ca5fc;
            case 0x1CA600u: goto label_1ca600;
            case 0x1CA604u: goto label_1ca604;
            case 0x1CA608u: goto label_1ca608;
            case 0x1CA60Cu: goto label_1ca60c;
            case 0x1CA610u: goto label_1ca610;
            case 0x1CA614u: goto label_1ca614;
            case 0x1CA618u: goto label_1ca618;
            case 0x1CA61Cu: goto label_1ca61c;
            case 0x1CA620u: goto label_1ca620;
            case 0x1CA624u: goto label_1ca624;
            case 0x1CA628u: goto label_1ca628;
            case 0x1CA62Cu: goto label_1ca62c;
            case 0x1CA630u: goto label_1ca630;
            case 0x1CA634u: goto label_1ca634;
            case 0x1CA638u: goto label_1ca638;
            case 0x1CA63Cu: goto label_1ca63c;
            case 0x1CA640u: goto label_1ca640;
            case 0x1CA644u: goto label_1ca644;
            case 0x1CA648u: goto label_1ca648;
            case 0x1CA64Cu: goto label_1ca64c;
            case 0x1CA650u: goto label_1ca650;
            case 0x1CA654u: goto label_1ca654;
            case 0x1CA658u: goto label_1ca658;
            case 0x1CA65Cu: goto label_1ca65c;
            case 0x1CA660u: goto label_1ca660;
            case 0x1CA664u: goto label_1ca664;
            case 0x1CA668u: goto label_1ca668;
            case 0x1CA66Cu: goto label_1ca66c;
            case 0x1CA670u: goto label_1ca670;
            case 0x1CA674u: goto label_1ca674;
            case 0x1CA678u: goto label_1ca678;
            case 0x1CA67Cu: goto label_1ca67c;
            case 0x1CA680u: goto label_1ca680;
            case 0x1CA684u: goto label_1ca684;
            case 0x1CA688u: goto label_1ca688;
            case 0x1CA68Cu: goto label_1ca68c;
            case 0x1CA690u: goto label_1ca690;
            case 0x1CA694u: goto label_1ca694;
            case 0x1CA698u: goto label_1ca698;
            case 0x1CA69Cu: goto label_1ca69c;
            case 0x1CA6A0u: goto label_1ca6a0;
            case 0x1CA6A4u: goto label_1ca6a4;
            case 0x1CA6A8u: goto label_1ca6a8;
            case 0x1CA6ACu: goto label_1ca6ac;
            case 0x1CA6B0u: goto label_1ca6b0;
            case 0x1CA6B4u: goto label_1ca6b4;
            case 0x1CA6B8u: goto label_1ca6b8;
            case 0x1CA6BCu: goto label_1ca6bc;
            case 0x1CA6C0u: goto label_1ca6c0;
            case 0x1CA6C4u: goto label_1ca6c4;
            case 0x1CA6C8u: goto label_1ca6c8;
            case 0x1CA6CCu: goto label_1ca6cc;
            case 0x1CA6D0u: goto label_1ca6d0;
            case 0x1CA6D4u: goto label_1ca6d4;
            case 0x1CA6D8u: goto label_1ca6d8;
            case 0x1CA6DCu: goto label_1ca6dc;
            case 0x1CA6E0u: goto label_1ca6e0;
            case 0x1CA6E4u: goto label_1ca6e4;
            case 0x1CA6E8u: goto label_1ca6e8;
            case 0x1CA6ECu: goto label_1ca6ec;
            case 0x1CA6F0u: goto label_1ca6f0;
            case 0x1CA6F4u: goto label_1ca6f4;
            case 0x1CA6F8u: goto label_1ca6f8;
            case 0x1CA6FCu: goto label_1ca6fc;
            case 0x1CA700u: goto label_1ca700;
            case 0x1CA704u: goto label_1ca704;
            case 0x1CA708u: goto label_1ca708;
            case 0x1CA70Cu: goto label_1ca70c;
            case 0x1CA710u: goto label_1ca710;
            case 0x1CA714u: goto label_1ca714;
            case 0x1CA718u: goto label_1ca718;
            case 0x1CA71Cu: goto label_1ca71c;
            case 0x1CA720u: goto label_1ca720;
            case 0x1CA724u: goto label_1ca724;
            case 0x1CA728u: goto label_1ca728;
            case 0x1CA72Cu: goto label_1ca72c;
            case 0x1CA730u: goto label_1ca730;
            case 0x1CA734u: goto label_1ca734;
            case 0x1CA738u: goto label_1ca738;
            case 0x1CA73Cu: goto label_1ca73c;
            case 0x1CA740u: goto label_1ca740;
            case 0x1CA744u: goto label_1ca744;
            case 0x1CA748u: goto label_1ca748;
            case 0x1CA74Cu: goto label_1ca74c;
            case 0x1CA750u: goto label_1ca750;
            case 0x1CA754u: goto label_1ca754;
            case 0x1CA758u: goto label_1ca758;
            case 0x1CA75Cu: goto label_1ca75c;
            case 0x1CA760u: goto label_1ca760;
            case 0x1CA764u: goto label_1ca764;
            case 0x1CA768u: goto label_1ca768;
            case 0x1CA76Cu: goto label_1ca76c;
            case 0x1CA770u: goto label_1ca770;
            case 0x1CA774u: goto label_1ca774;
            case 0x1CA778u: goto label_1ca778;
            case 0x1CA77Cu: goto label_1ca77c;
            case 0x1CA780u: goto label_1ca780;
            case 0x1CA784u: goto label_1ca784;
            case 0x1CA788u: goto label_1ca788;
            case 0x1CA78Cu: goto label_1ca78c;
            case 0x1CA790u: goto label_1ca790;
            case 0x1CA794u: goto label_1ca794;
            case 0x1CA798u: goto label_1ca798;
            case 0x1CA79Cu: goto label_1ca79c;
            case 0x1CA7A0u: goto label_1ca7a0;
            case 0x1CA7A4u: goto label_1ca7a4;
            case 0x1CA7A8u: goto label_1ca7a8;
            case 0x1CA7ACu: goto label_1ca7ac;
            case 0x1CA7B0u: goto label_1ca7b0;
            case 0x1CA7B4u: goto label_1ca7b4;
            case 0x1CA7B8u: goto label_1ca7b8;
            case 0x1CA7BCu: goto label_1ca7bc;
            case 0x1CA7C0u: goto label_1ca7c0;
            case 0x1CA7C4u: goto label_1ca7c4;
            case 0x1CA7C8u: goto label_1ca7c8;
            case 0x1CA7CCu: goto label_1ca7cc;
            case 0x1CA7D0u: goto label_1ca7d0;
            case 0x1CA7D4u: goto label_1ca7d4;
            case 0x1CA7D8u: goto label_1ca7d8;
            case 0x1CA7DCu: goto label_1ca7dc;
            case 0x1CA7E0u: goto label_1ca7e0;
            case 0x1CA7E4u: goto label_1ca7e4;
            case 0x1CA7E8u: goto label_1ca7e8;
            case 0x1CA7ECu: goto label_1ca7ec;
            case 0x1CA7F0u: goto label_1ca7f0;
            case 0x1CA7F4u: goto label_1ca7f4;
            case 0x1CA7F8u: goto label_1ca7f8;
            case 0x1CA7FCu: goto label_1ca7fc;
            case 0x1CA800u: goto label_1ca800;
            case 0x1CA804u: goto label_1ca804;
            case 0x1CA808u: goto label_1ca808;
            case 0x1CA80Cu: goto label_1ca80c;
            case 0x1CA810u: goto label_1ca810;
            case 0x1CA814u: goto label_1ca814;
            case 0x1CA818u: goto label_1ca818;
            case 0x1CA81Cu: goto label_1ca81c;
            case 0x1CA820u: goto label_1ca820;
            case 0x1CA824u: goto label_1ca824;
            case 0x1CA828u: goto label_1ca828;
            case 0x1CA82Cu: goto label_1ca82c;
            case 0x1CA830u: goto label_1ca830;
            case 0x1CA834u: goto label_1ca834;
            case 0x1CA838u: goto label_1ca838;
            case 0x1CA83Cu: goto label_1ca83c;
            case 0x1CA840u: goto label_1ca840;
            case 0x1CA844u: goto label_1ca844;
            case 0x1CA848u: goto label_1ca848;
            case 0x1CA84Cu: goto label_1ca84c;
            case 0x1CA850u: goto label_1ca850;
            case 0x1CA854u: goto label_1ca854;
            case 0x1CA858u: goto label_1ca858;
            case 0x1CA85Cu: goto label_1ca85c;
            case 0x1CA860u: goto label_1ca860;
            case 0x1CA864u: goto label_1ca864;
            case 0x1CA868u: goto label_1ca868;
            case 0x1CA86Cu: goto label_1ca86c;
            case 0x1CA870u: goto label_1ca870;
            case 0x1CA874u: goto label_1ca874;
            case 0x1CA878u: goto label_1ca878;
            case 0x1CA87Cu: goto label_1ca87c;
            case 0x1CA880u: goto label_1ca880;
            case 0x1CA884u: goto label_1ca884;
            case 0x1CA888u: goto label_1ca888;
            case 0x1CA88Cu: goto label_1ca88c;
            case 0x1CA890u: goto label_1ca890;
            case 0x1CA894u: goto label_1ca894;
            case 0x1CA898u: goto label_1ca898;
            case 0x1CA89Cu: goto label_1ca89c;
            case 0x1CA8A0u: goto label_1ca8a0;
            case 0x1CA8A4u: goto label_1ca8a4;
            case 0x1CA8A8u: goto label_1ca8a8;
            case 0x1CA8ACu: goto label_1ca8ac;
            case 0x1CA8B0u: goto label_1ca8b0;
            case 0x1CA8B4u: goto label_1ca8b4;
            case 0x1CA8B8u: goto label_1ca8b8;
            case 0x1CA8BCu: goto label_1ca8bc;
            case 0x1CA8C0u: goto label_1ca8c0;
            case 0x1CA8C4u: goto label_1ca8c4;
            case 0x1CA8C8u: goto label_1ca8c8;
            case 0x1CA8CCu: goto label_1ca8cc;
            case 0x1CA8D0u: goto label_1ca8d0;
            case 0x1CA8D4u: goto label_1ca8d4;
            case 0x1CA8D8u: goto label_1ca8d8;
            case 0x1CA8DCu: goto label_1ca8dc;
            case 0x1CA8E0u: goto label_1ca8e0;
            case 0x1CA8E4u: goto label_1ca8e4;
            case 0x1CA8E8u: goto label_1ca8e8;
            case 0x1CA8ECu: goto label_1ca8ec;
            case 0x1CA8F0u: goto label_1ca8f0;
            case 0x1CA8F4u: goto label_1ca8f4;
            case 0x1CA8F8u: goto label_1ca8f8;
            case 0x1CA8FCu: goto label_1ca8fc;
            case 0x1CA900u: goto label_1ca900;
            case 0x1CA904u: goto label_1ca904;
            case 0x1CA908u: goto label_1ca908;
            case 0x1CA90Cu: goto label_1ca90c;
            case 0x1CA910u: goto label_1ca910;
            case 0x1CA914u: goto label_1ca914;
            case 0x1CA918u: goto label_1ca918;
            case 0x1CA91Cu: goto label_1ca91c;
            case 0x1CA920u: goto label_1ca920;
            case 0x1CA924u: goto label_1ca924;
            case 0x1CA928u: goto label_1ca928;
            case 0x1CA92Cu: goto label_1ca92c;
            case 0x1CA930u: goto label_1ca930;
            case 0x1CA934u: goto label_1ca934;
            case 0x1CA938u: goto label_1ca938;
            case 0x1CA93Cu: goto label_1ca93c;
            case 0x1CA940u: goto label_1ca940;
            case 0x1CA944u: goto label_1ca944;
            case 0x1CA948u: goto label_1ca948;
            case 0x1CA94Cu: goto label_1ca94c;
            case 0x1CA950u: goto label_1ca950;
            case 0x1CA954u: goto label_1ca954;
            case 0x1CA958u: goto label_1ca958;
            case 0x1CA95Cu: goto label_1ca95c;
            case 0x1CA960u: goto label_1ca960;
            case 0x1CA964u: goto label_1ca964;
            case 0x1CA968u: goto label_1ca968;
            case 0x1CA96Cu: goto label_1ca96c;
            case 0x1CA970u: goto label_1ca970;
            case 0x1CA974u: goto label_1ca974;
            case 0x1CA978u: goto label_1ca978;
            case 0x1CA97Cu: goto label_1ca97c;
            case 0x1CA980u: goto label_1ca980;
            case 0x1CA984u: goto label_1ca984;
            case 0x1CA988u: goto label_1ca988;
            case 0x1CA98Cu: goto label_1ca98c;
            case 0x1CA990u: goto label_1ca990;
            case 0x1CA994u: goto label_1ca994;
            case 0x1CA998u: goto label_1ca998;
            case 0x1CA99Cu: goto label_1ca99c;
            case 0x1CA9A0u: goto label_1ca9a0;
            case 0x1CA9A4u: goto label_1ca9a4;
            case 0x1CA9A8u: goto label_1ca9a8;
            case 0x1CA9ACu: goto label_1ca9ac;
            case 0x1CA9B0u: goto label_1ca9b0;
            case 0x1CA9B4u: goto label_1ca9b4;
            case 0x1CA9B8u: goto label_1ca9b8;
            case 0x1CA9BCu: goto label_1ca9bc;
            case 0x1CA9C0u: goto label_1ca9c0;
            case 0x1CA9C4u: goto label_1ca9c4;
            case 0x1CA9C8u: goto label_1ca9c8;
            case 0x1CA9CCu: goto label_1ca9cc;
            case 0x1CA9D0u: goto label_1ca9d0;
            case 0x1CA9D4u: goto label_1ca9d4;
            case 0x1CA9D8u: goto label_1ca9d8;
            case 0x1CA9DCu: goto label_1ca9dc;
            case 0x1CA9E0u: goto label_1ca9e0;
            case 0x1CA9E4u: goto label_1ca9e4;
            case 0x1CA9E8u: goto label_1ca9e8;
            case 0x1CA9ECu: goto label_1ca9ec;
            case 0x1CA9F0u: goto label_1ca9f0;
            case 0x1CA9F4u: goto label_1ca9f4;
            case 0x1CA9F8u: goto label_1ca9f8;
            case 0x1CA9FCu: goto label_1ca9fc;
            case 0x1CAA00u: goto label_1caa00;
            case 0x1CAA04u: goto label_1caa04;
            case 0x1CAA08u: goto label_1caa08;
            case 0x1CAA0Cu: goto label_1caa0c;
            case 0x1CAA10u: goto label_1caa10;
            case 0x1CAA14u: goto label_1caa14;
            case 0x1CAA18u: goto label_1caa18;
            case 0x1CAA1Cu: goto label_1caa1c;
            case 0x1CAA20u: goto label_1caa20;
            case 0x1CAA24u: goto label_1caa24;
            case 0x1CAA28u: goto label_1caa28;
            case 0x1CAA2Cu: goto label_1caa2c;
            case 0x1CAA30u: goto label_1caa30;
            case 0x1CAA34u: goto label_1caa34;
            case 0x1CAA38u: goto label_1caa38;
            case 0x1CAA3Cu: goto label_1caa3c;
            case 0x1CAA40u: goto label_1caa40;
            case 0x1CAA44u: goto label_1caa44;
            case 0x1CAA48u: goto label_1caa48;
            case 0x1CAA4Cu: goto label_1caa4c;
            case 0x1CAA50u: goto label_1caa50;
            case 0x1CAA54u: goto label_1caa54;
            case 0x1CAA58u: goto label_1caa58;
            case 0x1CAA5Cu: goto label_1caa5c;
            case 0x1CAA60u: goto label_1caa60;
            case 0x1CAA64u: goto label_1caa64;
            case 0x1CAA68u: goto label_1caa68;
            case 0x1CAA6Cu: goto label_1caa6c;
            case 0x1CAA70u: goto label_1caa70;
            case 0x1CAA74u: goto label_1caa74;
            case 0x1CAA78u: goto label_1caa78;
            case 0x1CAA7Cu: goto label_1caa7c;
            case 0x1CAA80u: goto label_1caa80;
            case 0x1CAA84u: goto label_1caa84;
            case 0x1CAA88u: goto label_1caa88;
            case 0x1CAA8Cu: goto label_1caa8c;
            case 0x1CAA90u: goto label_1caa90;
            case 0x1CAA94u: goto label_1caa94;
            case 0x1CAA98u: goto label_1caa98;
            case 0x1CAA9Cu: goto label_1caa9c;
            case 0x1CAAA0u: goto label_1caaa0;
            case 0x1CAAA4u: goto label_1caaa4;
            case 0x1CAAA8u: goto label_1caaa8;
            case 0x1CAAACu: goto label_1caaac;
            case 0x1CAAB0u: goto label_1caab0;
            case 0x1CAAB4u: goto label_1caab4;
            case 0x1CAAB8u: goto label_1caab8;
            case 0x1CAABCu: goto label_1caabc;
            case 0x1CAAC0u: goto label_1caac0;
            case 0x1CAAC4u: goto label_1caac4;
            case 0x1CAAC8u: goto label_1caac8;
            case 0x1CAACCu: goto label_1caacc;
            case 0x1CAAD0u: goto label_1caad0;
            case 0x1CAAD4u: goto label_1caad4;
            case 0x1CAAD8u: goto label_1caad8;
            case 0x1CAADCu: goto label_1caadc;
            case 0x1CAAE0u: goto label_1caae0;
            case 0x1CAAE4u: goto label_1caae4;
            case 0x1CAAE8u: goto label_1caae8;
            case 0x1CAAECu: goto label_1caaec;
            case 0x1CAAF0u: goto label_1caaf0;
            case 0x1CAAF4u: goto label_1caaf4;
            case 0x1CAAF8u: goto label_1caaf8;
            case 0x1CAAFCu: goto label_1caafc;
            case 0x1CAB00u: goto label_1cab00;
            case 0x1CAB04u: goto label_1cab04;
            case 0x1CAB08u: goto label_1cab08;
            case 0x1CAB0Cu: goto label_1cab0c;
            case 0x1CAB10u: goto label_1cab10;
            case 0x1CAB14u: goto label_1cab14;
            case 0x1CAB18u: goto label_1cab18;
            case 0x1CAB1Cu: goto label_1cab1c;
            case 0x1CAB20u: goto label_1cab20;
            case 0x1CAB24u: goto label_1cab24;
            case 0x1CAB28u: goto label_1cab28;
            case 0x1CAB2Cu: goto label_1cab2c;
            case 0x1CAB30u: goto label_1cab30;
            case 0x1CAB34u: goto label_1cab34;
            case 0x1CAB38u: goto label_1cab38;
            case 0x1CAB3Cu: goto label_1cab3c;
            case 0x1CAB40u: goto label_1cab40;
            case 0x1CAB44u: goto label_1cab44;
            case 0x1CAB48u: goto label_1cab48;
            case 0x1CAB4Cu: goto label_1cab4c;
            case 0x1CAB50u: goto label_1cab50;
            case 0x1CAB54u: goto label_1cab54;
            case 0x1CAB58u: goto label_1cab58;
            case 0x1CAB5Cu: goto label_1cab5c;
            case 0x1CAB60u: goto label_1cab60;
            case 0x1CAB64u: goto label_1cab64;
            case 0x1CAB68u: goto label_1cab68;
            case 0x1CAB6Cu: goto label_1cab6c;
            case 0x1CAB70u: goto label_1cab70;
            case 0x1CAB74u: goto label_1cab74;
            case 0x1CAB78u: goto label_1cab78;
            case 0x1CAB7Cu: goto label_1cab7c;
            case 0x1CAB80u: goto label_1cab80;
            case 0x1CAB84u: goto label_1cab84;
            case 0x1CAB88u: goto label_1cab88;
            case 0x1CAB8Cu: goto label_1cab8c;
            case 0x1CAB90u: goto label_1cab90;
            case 0x1CAB94u: goto label_1cab94;
            case 0x1CAB98u: goto label_1cab98;
            case 0x1CAB9Cu: goto label_1cab9c;
            case 0x1CABA0u: goto label_1caba0;
            case 0x1CABA4u: goto label_1caba4;
            case 0x1CABA8u: goto label_1caba8;
            case 0x1CABACu: goto label_1cabac;
            case 0x1CABB0u: goto label_1cabb0;
            case 0x1CABB4u: goto label_1cabb4;
            case 0x1CABB8u: goto label_1cabb8;
            case 0x1CABBCu: goto label_1cabbc;
            case 0x1CABC0u: goto label_1cabc0;
            case 0x1CABC4u: goto label_1cabc4;
            case 0x1CABC8u: goto label_1cabc8;
            case 0x1CABCCu: goto label_1cabcc;
            case 0x1CABD0u: goto label_1cabd0;
            case 0x1CABD4u: goto label_1cabd4;
            case 0x1CABD8u: goto label_1cabd8;
            case 0x1CABDCu: goto label_1cabdc;
            case 0x1CABE0u: goto label_1cabe0;
            case 0x1CABE4u: goto label_1cabe4;
            case 0x1CABE8u: goto label_1cabe8;
            case 0x1CABECu: goto label_1cabec;
            case 0x1CABF0u: goto label_1cabf0;
            case 0x1CABF4u: goto label_1cabf4;
            case 0x1CABF8u: goto label_1cabf8;
            case 0x1CABFCu: goto label_1cabfc;
            case 0x1CAC00u: goto label_1cac00;
            case 0x1CAC04u: goto label_1cac04;
            case 0x1CAC08u: goto label_1cac08;
            case 0x1CAC0Cu: goto label_1cac0c;
            case 0x1CAC10u: goto label_1cac10;
            case 0x1CAC14u: goto label_1cac14;
            case 0x1CAC18u: goto label_1cac18;
            case 0x1CAC1Cu: goto label_1cac1c;
            case 0x1CAC20u: goto label_1cac20;
            case 0x1CAC24u: goto label_1cac24;
            case 0x1CAC28u: goto label_1cac28;
            case 0x1CAC2Cu: goto label_1cac2c;
            case 0x1CAC30u: goto label_1cac30;
            case 0x1CAC34u: goto label_1cac34;
            case 0x1CAC38u: goto label_1cac38;
            case 0x1CAC3Cu: goto label_1cac3c;
            case 0x1CAC40u: goto label_1cac40;
            case 0x1CAC44u: goto label_1cac44;
            case 0x1CAC48u: goto label_1cac48;
            case 0x1CAC4Cu: goto label_1cac4c;
            case 0x1CAC50u: goto label_1cac50;
            case 0x1CAC54u: goto label_1cac54;
            case 0x1CAC58u: goto label_1cac58;
            case 0x1CAC5Cu: goto label_1cac5c;
            case 0x1CAC60u: goto label_1cac60;
            case 0x1CAC64u: goto label_1cac64;
            case 0x1CAC68u: goto label_1cac68;
            case 0x1CAC6Cu: goto label_1cac6c;
            case 0x1CAC70u: goto label_1cac70;
            case 0x1CAC74u: goto label_1cac74;
            case 0x1CAC78u: goto label_1cac78;
            case 0x1CAC7Cu: goto label_1cac7c;
            case 0x1CAC80u: goto label_1cac80;
            case 0x1CAC84u: goto label_1cac84;
            case 0x1CAC88u: goto label_1cac88;
            case 0x1CAC8Cu: goto label_1cac8c;
            case 0x1CAC90u: goto label_1cac90;
            case 0x1CAC94u: goto label_1cac94;
            case 0x1CAC98u: goto label_1cac98;
            case 0x1CAC9Cu: goto label_1cac9c;
            case 0x1CACA0u: goto label_1caca0;
            case 0x1CACA4u: goto label_1caca4;
            case 0x1CACA8u: goto label_1caca8;
            case 0x1CACACu: goto label_1cacac;
            case 0x1CACB0u: goto label_1cacb0;
            case 0x1CACB4u: goto label_1cacb4;
            case 0x1CACB8u: goto label_1cacb8;
            case 0x1CACBCu: goto label_1cacbc;
            case 0x1CACC0u: goto label_1cacc0;
            case 0x1CACC4u: goto label_1cacc4;
            case 0x1CACC8u: goto label_1cacc8;
            case 0x1CACCCu: goto label_1caccc;
            case 0x1CACD0u: goto label_1cacd0;
            case 0x1CACD4u: goto label_1cacd4;
            case 0x1CACD8u: goto label_1cacd8;
            case 0x1CACDCu: goto label_1cacdc;
            case 0x1CACE0u: goto label_1cace0;
            case 0x1CACE4u: goto label_1cace4;
            case 0x1CACE8u: goto label_1cace8;
            case 0x1CACECu: goto label_1cacec;
            case 0x1CACF0u: goto label_1cacf0;
            case 0x1CACF4u: goto label_1cacf4;
            case 0x1CACF8u: goto label_1cacf8;
            case 0x1CACFCu: goto label_1cacfc;
            case 0x1CAD00u: goto label_1cad00;
            case 0x1CAD04u: goto label_1cad04;
            case 0x1CAD08u: goto label_1cad08;
            case 0x1CAD0Cu: goto label_1cad0c;
            case 0x1CAD10u: goto label_1cad10;
            case 0x1CAD14u: goto label_1cad14;
            case 0x1CAD18u: goto label_1cad18;
            case 0x1CAD1Cu: goto label_1cad1c;
            case 0x1CAD20u: goto label_1cad20;
            case 0x1CAD24u: goto label_1cad24;
            case 0x1CAD28u: goto label_1cad28;
            case 0x1CAD2Cu: goto label_1cad2c;
            case 0x1CAD30u: goto label_1cad30;
            case 0x1CAD34u: goto label_1cad34;
            case 0x1CAD38u: goto label_1cad38;
            case 0x1CAD3Cu: goto label_1cad3c;
            case 0x1CAD40u: goto label_1cad40;
            case 0x1CAD44u: goto label_1cad44;
            case 0x1CAD48u: goto label_1cad48;
            case 0x1CAD4Cu: goto label_1cad4c;
            case 0x1CAD50u: goto label_1cad50;
            case 0x1CAD54u: goto label_1cad54;
            case 0x1CAD58u: goto label_1cad58;
            case 0x1CAD5Cu: goto label_1cad5c;
            case 0x1CAD60u: goto label_1cad60;
            case 0x1CAD64u: goto label_1cad64;
            case 0x1CAD68u: goto label_1cad68;
            case 0x1CAD6Cu: goto label_1cad6c;
            case 0x1CAD70u: goto label_1cad70;
            case 0x1CAD74u: goto label_1cad74;
            case 0x1CAD78u: goto label_1cad78;
            case 0x1CAD7Cu: goto label_1cad7c;
            case 0x1CAD80u: goto label_1cad80;
            case 0x1CAD84u: goto label_1cad84;
            case 0x1CAD88u: goto label_1cad88;
            case 0x1CAD8Cu: goto label_1cad8c;
            case 0x1CAD90u: goto label_1cad90;
            case 0x1CAD94u: goto label_1cad94;
            case 0x1CAD98u: goto label_1cad98;
            case 0x1CAD9Cu: goto label_1cad9c;
            case 0x1CADA0u: goto label_1cada0;
            case 0x1CADA4u: goto label_1cada4;
            case 0x1CADA8u: goto label_1cada8;
            case 0x1CADACu: goto label_1cadac;
            case 0x1CADB0u: goto label_1cadb0;
            case 0x1CADB4u: goto label_1cadb4;
            case 0x1CADB8u: goto label_1cadb8;
            case 0x1CADBCu: goto label_1cadbc;
            case 0x1CADC0u: goto label_1cadc0;
            case 0x1CADC4u: goto label_1cadc4;
            case 0x1CADC8u: goto label_1cadc8;
            case 0x1CADCCu: goto label_1cadcc;
            case 0x1CADD0u: goto label_1cadd0;
            case 0x1CADD4u: goto label_1cadd4;
            case 0x1CADD8u: goto label_1cadd8;
            case 0x1CADDCu: goto label_1caddc;
            case 0x1CADE0u: goto label_1cade0;
            case 0x1CADE4u: goto label_1cade4;
            case 0x1CADE8u: goto label_1cade8;
            case 0x1CADECu: goto label_1cadec;
            case 0x1CADF0u: goto label_1cadf0;
            case 0x1CADF4u: goto label_1cadf4;
            case 0x1CADF8u: goto label_1cadf8;
            case 0x1CADFCu: goto label_1cadfc;
            case 0x1CAE00u: goto label_1cae00;
            case 0x1CAE04u: goto label_1cae04;
            case 0x1CAE08u: goto label_1cae08;
            case 0x1CAE0Cu: goto label_1cae0c;
            case 0x1CAE10u: goto label_1cae10;
            case 0x1CAE14u: goto label_1cae14;
            case 0x1CAE18u: goto label_1cae18;
            case 0x1CAE1Cu: goto label_1cae1c;
            case 0x1CAE20u: goto label_1cae20;
            case 0x1CAE24u: goto label_1cae24;
            case 0x1CAE28u: goto label_1cae28;
            case 0x1CAE2Cu: goto label_1cae2c;
            case 0x1CAE30u: goto label_1cae30;
            case 0x1CAE34u: goto label_1cae34;
            case 0x1CAE38u: goto label_1cae38;
            case 0x1CAE3Cu: goto label_1cae3c;
            case 0x1CAE40u: goto label_1cae40;
            case 0x1CAE44u: goto label_1cae44;
            case 0x1CAE48u: goto label_1cae48;
            case 0x1CAE4Cu: goto label_1cae4c;
            case 0x1CAE50u: goto label_1cae50;
            case 0x1CAE54u: goto label_1cae54;
            case 0x1CAE58u: goto label_1cae58;
            case 0x1CAE5Cu: goto label_1cae5c;
            case 0x1CAE60u: goto label_1cae60;
            case 0x1CAE64u: goto label_1cae64;
            case 0x1CAE68u: goto label_1cae68;
            case 0x1CAE6Cu: goto label_1cae6c;
            case 0x1CAE70u: goto label_1cae70;
            case 0x1CAE74u: goto label_1cae74;
            case 0x1CAE78u: goto label_1cae78;
            case 0x1CAE7Cu: goto label_1cae7c;
            case 0x1CAE80u: goto label_1cae80;
            case 0x1CAE84u: goto label_1cae84;
            case 0x1CAE88u: goto label_1cae88;
            case 0x1CAE8Cu: goto label_1cae8c;
            case 0x1CAE90u: goto label_1cae90;
            case 0x1CAE94u: goto label_1cae94;
            case 0x1CAE98u: goto label_1cae98;
            case 0x1CAE9Cu: goto label_1cae9c;
            case 0x1CAEA0u: goto label_1caea0;
            case 0x1CAEA4u: goto label_1caea4;
            case 0x1CAEA8u: goto label_1caea8;
            case 0x1CAEACu: goto label_1caeac;
            case 0x1CAEB0u: goto label_1caeb0;
            case 0x1CAEB4u: goto label_1caeb4;
            case 0x1CAEB8u: goto label_1caeb8;
            case 0x1CAEBCu: goto label_1caebc;
            case 0x1CAEC0u: goto label_1caec0;
            case 0x1CAEC4u: goto label_1caec4;
            case 0x1CAEC8u: goto label_1caec8;
            case 0x1CAECCu: goto label_1caecc;
            case 0x1CAED0u: goto label_1caed0;
            case 0x1CAED4u: goto label_1caed4;
            case 0x1CAED8u: goto label_1caed8;
            case 0x1CAEDCu: goto label_1caedc;
            case 0x1CAEE0u: goto label_1caee0;
            case 0x1CAEE4u: goto label_1caee4;
            case 0x1CAEE8u: goto label_1caee8;
            case 0x1CAEECu: goto label_1caeec;
            case 0x1CAEF0u: goto label_1caef0;
            case 0x1CAEF4u: goto label_1caef4;
            case 0x1CAEF8u: goto label_1caef8;
            case 0x1CAEFCu: goto label_1caefc;
            case 0x1CAF00u: goto label_1caf00;
            case 0x1CAF04u: goto label_1caf04;
            case 0x1CAF08u: goto label_1caf08;
            case 0x1CAF0Cu: goto label_1caf0c;
            case 0x1CAF10u: goto label_1caf10;
            case 0x1CAF14u: goto label_1caf14;
            case 0x1CAF18u: goto label_1caf18;
            case 0x1CAF1Cu: goto label_1caf1c;
            case 0x1CAF20u: goto label_1caf20;
            case 0x1CAF24u: goto label_1caf24;
            case 0x1CAF28u: goto label_1caf28;
            case 0x1CAF2Cu: goto label_1caf2c;
            case 0x1CAF30u: goto label_1caf30;
            case 0x1CAF34u: goto label_1caf34;
            case 0x1CAF38u: goto label_1caf38;
            case 0x1CAF3Cu: goto label_1caf3c;
            case 0x1CAF40u: goto label_1caf40;
            case 0x1CAF44u: goto label_1caf44;
            case 0x1CAF48u: goto label_1caf48;
            case 0x1CAF4Cu: goto label_1caf4c;
            case 0x1CAF50u: goto label_1caf50;
            case 0x1CAF54u: goto label_1caf54;
            case 0x1CAF58u: goto label_1caf58;
            case 0x1CAF5Cu: goto label_1caf5c;
            case 0x1CAF60u: goto label_1caf60;
            case 0x1CAF64u: goto label_1caf64;
            case 0x1CAF68u: goto label_1caf68;
            case 0x1CAF6Cu: goto label_1caf6c;
            case 0x1CAF70u: goto label_1caf70;
            case 0x1CAF74u: goto label_1caf74;
            case 0x1CAF78u: goto label_1caf78;
            case 0x1CAF7Cu: goto label_1caf7c;
            case 0x1CAF80u: goto label_1caf80;
            case 0x1CAF84u: goto label_1caf84;
            case 0x1CAF88u: goto label_1caf88;
            case 0x1CAF8Cu: goto label_1caf8c;
            case 0x1CAF90u: goto label_1caf90;
            case 0x1CAF94u: goto label_1caf94;
            case 0x1CAF98u: goto label_1caf98;
            case 0x1CAF9Cu: goto label_1caf9c;
            case 0x1CAFA0u: goto label_1cafa0;
            case 0x1CAFA4u: goto label_1cafa4;
            case 0x1CAFA8u: goto label_1cafa8;
            case 0x1CAFACu: goto label_1cafac;
            case 0x1CAFB0u: goto label_1cafb0;
            case 0x1CAFB4u: goto label_1cafb4;
            case 0x1CAFB8u: goto label_1cafb8;
            case 0x1CAFBCu: goto label_1cafbc;
            case 0x1CAFC0u: goto label_1cafc0;
            case 0x1CAFC4u: goto label_1cafc4;
            case 0x1CAFC8u: goto label_1cafc8;
            case 0x1CAFCCu: goto label_1cafcc;
            case 0x1CAFD0u: goto label_1cafd0;
            case 0x1CAFD4u: goto label_1cafd4;
            case 0x1CAFD8u: goto label_1cafd8;
            case 0x1CAFDCu: goto label_1cafdc;
            case 0x1CAFE0u: goto label_1cafe0;
            case 0x1CAFE4u: goto label_1cafe4;
            case 0x1CAFE8u: goto label_1cafe8;
            case 0x1CAFECu: goto label_1cafec;
            case 0x1CAFF0u: goto label_1caff0;
            case 0x1CAFF4u: goto label_1caff4;
            case 0x1CAFF8u: goto label_1caff8;
            case 0x1CAFFCu: goto label_1caffc;
            case 0x1CB000u: goto label_1cb000;
            case 0x1CB004u: goto label_1cb004;
            case 0x1CB008u: goto label_1cb008;
            case 0x1CB00Cu: goto label_1cb00c;
            case 0x1CB010u: goto label_1cb010;
            case 0x1CB014u: goto label_1cb014;
            case 0x1CB018u: goto label_1cb018;
            case 0x1CB01Cu: goto label_1cb01c;
            case 0x1CB020u: goto label_1cb020;
            case 0x1CB024u: goto label_1cb024;
            case 0x1CB028u: goto label_1cb028;
            case 0x1CB02Cu: goto label_1cb02c;
            case 0x1CB030u: goto label_1cb030;
            case 0x1CB034u: goto label_1cb034;
            case 0x1CB038u: goto label_1cb038;
            case 0x1CB03Cu: goto label_1cb03c;
            case 0x1CB040u: goto label_1cb040;
            case 0x1CB044u: goto label_1cb044;
            case 0x1CB048u: goto label_1cb048;
            case 0x1CB04Cu: goto label_1cb04c;
            case 0x1CB050u: goto label_1cb050;
            case 0x1CB054u: goto label_1cb054;
            case 0x1CB058u: goto label_1cb058;
            case 0x1CB05Cu: goto label_1cb05c;
            case 0x1CB060u: goto label_1cb060;
            case 0x1CB064u: goto label_1cb064;
            case 0x1CB068u: goto label_1cb068;
            case 0x1CB06Cu: goto label_1cb06c;
            case 0x1CB070u: goto label_1cb070;
            case 0x1CB074u: goto label_1cb074;
            case 0x1CB078u: goto label_1cb078;
            case 0x1CB07Cu: goto label_1cb07c;
            case 0x1CB080u: goto label_1cb080;
            case 0x1CB084u: goto label_1cb084;
            case 0x1CB088u: goto label_1cb088;
            case 0x1CB08Cu: goto label_1cb08c;
            case 0x1CB090u: goto label_1cb090;
            case 0x1CB094u: goto label_1cb094;
            case 0x1CB098u: goto label_1cb098;
            case 0x1CB09Cu: goto label_1cb09c;
            case 0x1CB0A0u: goto label_1cb0a0;
            case 0x1CB0A4u: goto label_1cb0a4;
            case 0x1CB0A8u: goto label_1cb0a8;
            case 0x1CB0ACu: goto label_1cb0ac;
            case 0x1CB0B0u: goto label_1cb0b0;
            case 0x1CB0B4u: goto label_1cb0b4;
            case 0x1CB0B8u: goto label_1cb0b8;
            case 0x1CB0BCu: goto label_1cb0bc;
            case 0x1CB0C0u: goto label_1cb0c0;
            case 0x1CB0C4u: goto label_1cb0c4;
            case 0x1CB0C8u: goto label_1cb0c8;
            case 0x1CB0CCu: goto label_1cb0cc;
            case 0x1CB0D0u: goto label_1cb0d0;
            case 0x1CB0D4u: goto label_1cb0d4;
            case 0x1CB0D8u: goto label_1cb0d8;
            case 0x1CB0DCu: goto label_1cb0dc;
            case 0x1CB0E0u: goto label_1cb0e0;
            case 0x1CB0E4u: goto label_1cb0e4;
            case 0x1CB0E8u: goto label_1cb0e8;
            case 0x1CB0ECu: goto label_1cb0ec;
            case 0x1CB0F0u: goto label_1cb0f0;
            case 0x1CB0F4u: goto label_1cb0f4;
            case 0x1CB0F8u: goto label_1cb0f8;
            case 0x1CB0FCu: goto label_1cb0fc;
            case 0x1CB100u: goto label_1cb100;
            case 0x1CB104u: goto label_1cb104;
            case 0x1CB108u: goto label_1cb108;
            case 0x1CB10Cu: goto label_1cb10c;
            case 0x1CB110u: goto label_1cb110;
            case 0x1CB114u: goto label_1cb114;
            case 0x1CB118u: goto label_1cb118;
            case 0x1CB11Cu: goto label_1cb11c;
            case 0x1CB120u: goto label_1cb120;
            case 0x1CB124u: goto label_1cb124;
            case 0x1CB128u: goto label_1cb128;
            case 0x1CB12Cu: goto label_1cb12c;
            case 0x1CB130u: goto label_1cb130;
            case 0x1CB134u: goto label_1cb134;
            case 0x1CB138u: goto label_1cb138;
            case 0x1CB13Cu: goto label_1cb13c;
            case 0x1CB140u: goto label_1cb140;
            case 0x1CB144u: goto label_1cb144;
            case 0x1CB148u: goto label_1cb148;
            case 0x1CB14Cu: goto label_1cb14c;
            case 0x1CB150u: goto label_1cb150;
            case 0x1CB154u: goto label_1cb154;
            case 0x1CB158u: goto label_1cb158;
            case 0x1CB15Cu: goto label_1cb15c;
            case 0x1CB160u: goto label_1cb160;
            case 0x1CB164u: goto label_1cb164;
            case 0x1CB168u: goto label_1cb168;
            case 0x1CB16Cu: goto label_1cb16c;
            case 0x1CB170u: goto label_1cb170;
            case 0x1CB174u: goto label_1cb174;
            case 0x1CB178u: goto label_1cb178;
            case 0x1CB17Cu: goto label_1cb17c;
            case 0x1CB180u: goto label_1cb180;
            case 0x1CB184u: goto label_1cb184;
            case 0x1CB188u: goto label_1cb188;
            case 0x1CB18Cu: goto label_1cb18c;
            case 0x1CB190u: goto label_1cb190;
            case 0x1CB194u: goto label_1cb194;
            case 0x1CB198u: goto label_1cb198;
            case 0x1CB19Cu: goto label_1cb19c;
            case 0x1CB1A0u: goto label_1cb1a0;
            case 0x1CB1A4u: goto label_1cb1a4;
            case 0x1CB1A8u: goto label_1cb1a8;
            case 0x1CB1ACu: goto label_1cb1ac;
            case 0x1CB1B0u: goto label_1cb1b0;
            case 0x1CB1B4u: goto label_1cb1b4;
            case 0x1CB1B8u: goto label_1cb1b8;
            case 0x1CB1BCu: goto label_1cb1bc;
            case 0x1CB1C0u: goto label_1cb1c0;
            case 0x1CB1C4u: goto label_1cb1c4;
            case 0x1CB1C8u: goto label_1cb1c8;
            case 0x1CB1CCu: goto label_1cb1cc;
            case 0x1CB1D0u: goto label_1cb1d0;
            case 0x1CB1D4u: goto label_1cb1d4;
            case 0x1CB1D8u: goto label_1cb1d8;
            case 0x1CB1DCu: goto label_1cb1dc;
            case 0x1CB1E0u: goto label_1cb1e0;
            case 0x1CB1E4u: goto label_1cb1e4;
            case 0x1CB1E8u: goto label_1cb1e8;
            case 0x1CB1ECu: goto label_1cb1ec;
            case 0x1CB1F0u: goto label_1cb1f0;
            case 0x1CB1F4u: goto label_1cb1f4;
            case 0x1CB1F8u: goto label_1cb1f8;
            case 0x1CB1FCu: goto label_1cb1fc;
            case 0x1CB200u: goto label_1cb200;
            case 0x1CB204u: goto label_1cb204;
            case 0x1CB208u: goto label_1cb208;
            case 0x1CB20Cu: goto label_1cb20c;
            case 0x1CB210u: goto label_1cb210;
            case 0x1CB214u: goto label_1cb214;
            case 0x1CB218u: goto label_1cb218;
            case 0x1CB21Cu: goto label_1cb21c;
            case 0x1CB220u: goto label_1cb220;
            case 0x1CB224u: goto label_1cb224;
            case 0x1CB228u: goto label_1cb228;
            case 0x1CB22Cu: goto label_1cb22c;
            case 0x1CB230u: goto label_1cb230;
            case 0x1CB234u: goto label_1cb234;
            case 0x1CB238u: goto label_1cb238;
            case 0x1CB23Cu: goto label_1cb23c;
            case 0x1CB240u: goto label_1cb240;
            case 0x1CB244u: goto label_1cb244;
            case 0x1CB248u: goto label_1cb248;
            case 0x1CB24Cu: goto label_1cb24c;
            case 0x1CB250u: goto label_1cb250;
            case 0x1CB254u: goto label_1cb254;
            case 0x1CB258u: goto label_1cb258;
            case 0x1CB25Cu: goto label_1cb25c;
            case 0x1CB260u: goto label_1cb260;
            case 0x1CB264u: goto label_1cb264;
            case 0x1CB268u: goto label_1cb268;
            case 0x1CB26Cu: goto label_1cb26c;
            case 0x1CB270u: goto label_1cb270;
            case 0x1CB274u: goto label_1cb274;
            case 0x1CB278u: goto label_1cb278;
            case 0x1CB27Cu: goto label_1cb27c;
            case 0x1CB280u: goto label_1cb280;
            case 0x1CB284u: goto label_1cb284;
            case 0x1CB288u: goto label_1cb288;
            case 0x1CB28Cu: goto label_1cb28c;
            case 0x1CB290u: goto label_1cb290;
            case 0x1CB294u: goto label_1cb294;
            case 0x1CB298u: goto label_1cb298;
            case 0x1CB29Cu: goto label_1cb29c;
            case 0x1CB2A0u: goto label_1cb2a0;
            case 0x1CB2A4u: goto label_1cb2a4;
            case 0x1CB2A8u: goto label_1cb2a8;
            case 0x1CB2ACu: goto label_1cb2ac;
            case 0x1CB2B0u: goto label_1cb2b0;
            case 0x1CB2B4u: goto label_1cb2b4;
            case 0x1CB2B8u: goto label_1cb2b8;
            case 0x1CB2BCu: goto label_1cb2bc;
            case 0x1CB2C0u: goto label_1cb2c0;
            case 0x1CB2C4u: goto label_1cb2c4;
            case 0x1CB2C8u: goto label_1cb2c8;
            case 0x1CB2CCu: goto label_1cb2cc;
            case 0x1CB2D0u: goto label_1cb2d0;
            case 0x1CB2D4u: goto label_1cb2d4;
            case 0x1CB2D8u: goto label_1cb2d8;
            case 0x1CB2DCu: goto label_1cb2dc;
            case 0x1CB2E0u: goto label_1cb2e0;
            case 0x1CB2E4u: goto label_1cb2e4;
            case 0x1CB2E8u: goto label_1cb2e8;
            case 0x1CB2ECu: goto label_1cb2ec;
            case 0x1CB2F0u: goto label_1cb2f0;
            case 0x1CB2F4u: goto label_1cb2f4;
            case 0x1CB2F8u: goto label_1cb2f8;
            case 0x1CB2FCu: goto label_1cb2fc;
            case 0x1CB300u: goto label_1cb300;
            case 0x1CB304u: goto label_1cb304;
            case 0x1CB308u: goto label_1cb308;
            case 0x1CB30Cu: goto label_1cb30c;
            case 0x1CB310u: goto label_1cb310;
            case 0x1CB314u: goto label_1cb314;
            case 0x1CB318u: goto label_1cb318;
            case 0x1CB31Cu: goto label_1cb31c;
            case 0x1CB320u: goto label_1cb320;
            case 0x1CB324u: goto label_1cb324;
            case 0x1CB328u: goto label_1cb328;
            case 0x1CB32Cu: goto label_1cb32c;
            case 0x1CB330u: goto label_1cb330;
            case 0x1CB334u: goto label_1cb334;
            case 0x1CB338u: goto label_1cb338;
            case 0x1CB33Cu: goto label_1cb33c;
            case 0x1CB340u: goto label_1cb340;
            case 0x1CB344u: goto label_1cb344;
            case 0x1CB348u: goto label_1cb348;
            case 0x1CB34Cu: goto label_1cb34c;
            case 0x1CB350u: goto label_1cb350;
            case 0x1CB354u: goto label_1cb354;
            case 0x1CB358u: goto label_1cb358;
            case 0x1CB35Cu: goto label_1cb35c;
            case 0x1CB360u: goto label_1cb360;
            case 0x1CB364u: goto label_1cb364;
            case 0x1CB368u: goto label_1cb368;
            case 0x1CB36Cu: goto label_1cb36c;
            case 0x1CB370u: goto label_1cb370;
            case 0x1CB374u: goto label_1cb374;
            case 0x1CB378u: goto label_1cb378;
            case 0x1CB37Cu: goto label_1cb37c;
            case 0x1CB380u: goto label_1cb380;
            case 0x1CB384u: goto label_1cb384;
            case 0x1CB388u: goto label_1cb388;
            case 0x1CB38Cu: goto label_1cb38c;
            case 0x1CB390u: goto label_1cb390;
            case 0x1CB394u: goto label_1cb394;
            case 0x1CB398u: goto label_1cb398;
            case 0x1CB39Cu: goto label_1cb39c;
            case 0x1CB3A0u: goto label_1cb3a0;
            case 0x1CB3A4u: goto label_1cb3a4;
            case 0x1CB3A8u: goto label_1cb3a8;
            case 0x1CB3ACu: goto label_1cb3ac;
            case 0x1CB3B0u: goto label_1cb3b0;
            case 0x1CB3B4u: goto label_1cb3b4;
            case 0x1CB3B8u: goto label_1cb3b8;
            case 0x1CB3BCu: goto label_1cb3bc;
            case 0x1CB3C0u: goto label_1cb3c0;
            case 0x1CB3C4u: goto label_1cb3c4;
            case 0x1CB3C8u: goto label_1cb3c8;
            case 0x1CB3CCu: goto label_1cb3cc;
            case 0x1CB3D0u: goto label_1cb3d0;
            case 0x1CB3D4u: goto label_1cb3d4;
            case 0x1CB3D8u: goto label_1cb3d8;
            case 0x1CB3DCu: goto label_1cb3dc;
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3E4u: goto label_1cb3e4;
            case 0x1CB3E8u: goto label_1cb3e8;
            case 0x1CB3ECu: goto label_1cb3ec;
            case 0x1CB3F0u: goto label_1cb3f0;
            case 0x1CB3F4u: goto label_1cb3f4;
            case 0x1CB3F8u: goto label_1cb3f8;
            case 0x1CB3FCu: goto label_1cb3fc;
            case 0x1CB400u: goto label_1cb400;
            case 0x1CB404u: goto label_1cb404;
            case 0x1CB408u: goto label_1cb408;
            case 0x1CB40Cu: goto label_1cb40c;
            case 0x1CB410u: goto label_1cb410;
            case 0x1CB414u: goto label_1cb414;
            case 0x1CB418u: goto label_1cb418;
            case 0x1CB41Cu: goto label_1cb41c;
            case 0x1CB420u: goto label_1cb420;
            case 0x1CB424u: goto label_1cb424;
            case 0x1CB428u: goto label_1cb428;
            case 0x1CB42Cu: goto label_1cb42c;
            case 0x1CB430u: goto label_1cb430;
            case 0x1CB434u: goto label_1cb434;
            case 0x1CB438u: goto label_1cb438;
            case 0x1CB43Cu: goto label_1cb43c;
            case 0x1CB440u: goto label_1cb440;
            case 0x1CB444u: goto label_1cb444;
            case 0x1CB448u: goto label_1cb448;
            case 0x1CB44Cu: goto label_1cb44c;
            case 0x1CB450u: goto label_1cb450;
            case 0x1CB454u: goto label_1cb454;
            case 0x1CB458u: goto label_1cb458;
            case 0x1CB45Cu: goto label_1cb45c;
            case 0x1CB460u: goto label_1cb460;
            case 0x1CB464u: goto label_1cb464;
            case 0x1CB468u: goto label_1cb468;
            case 0x1CB46Cu: goto label_1cb46c;
            case 0x1CB470u: goto label_1cb470;
            case 0x1CB474u: goto label_1cb474;
            case 0x1CB478u: goto label_1cb478;
            case 0x1CB47Cu: goto label_1cb47c;
            case 0x1CB480u: goto label_1cb480;
            case 0x1CB484u: goto label_1cb484;
            case 0x1CB488u: goto label_1cb488;
            case 0x1CB48Cu: goto label_1cb48c;
            case 0x1CB490u: goto label_1cb490;
            case 0x1CB494u: goto label_1cb494;
            case 0x1CB498u: goto label_1cb498;
            case 0x1CB49Cu: goto label_1cb49c;
            case 0x1CB4A0u: goto label_1cb4a0;
            case 0x1CB4A4u: goto label_1cb4a4;
            case 0x1CB4A8u: goto label_1cb4a8;
            case 0x1CB4ACu: goto label_1cb4ac;
            case 0x1CB4B0u: goto label_1cb4b0;
            case 0x1CB4B4u: goto label_1cb4b4;
            case 0x1CB4B8u: goto label_1cb4b8;
            case 0x1CB4BCu: goto label_1cb4bc;
            case 0x1CB4C0u: goto label_1cb4c0;
            case 0x1CB4C4u: goto label_1cb4c4;
            case 0x1CB4C8u: goto label_1cb4c8;
            case 0x1CB4CCu: goto label_1cb4cc;
            case 0x1CB4D0u: goto label_1cb4d0;
            case 0x1CB4D4u: goto label_1cb4d4;
            case 0x1CB4D8u: goto label_1cb4d8;
            case 0x1CB4DCu: goto label_1cb4dc;
            case 0x1CB4E0u: goto label_1cb4e0;
            case 0x1CB4E4u: goto label_1cb4e4;
            case 0x1CB4E8u: goto label_1cb4e8;
            case 0x1CB4ECu: goto label_1cb4ec;
            case 0x1CB4F0u: goto label_1cb4f0;
            case 0x1CB4F4u: goto label_1cb4f4;
            case 0x1CB4F8u: goto label_1cb4f8;
            case 0x1CB4FCu: goto label_1cb4fc;
            case 0x1CB500u: goto label_1cb500;
            case 0x1CB504u: goto label_1cb504;
            case 0x1CB508u: goto label_1cb508;
            case 0x1CB50Cu: goto label_1cb50c;
            case 0x1CB510u: goto label_1cb510;
            case 0x1CB514u: goto label_1cb514;
            case 0x1CB518u: goto label_1cb518;
            case 0x1CB51Cu: goto label_1cb51c;
            case 0x1CB520u: goto label_1cb520;
            case 0x1CB524u: goto label_1cb524;
            case 0x1CB528u: goto label_1cb528;
            case 0x1CB52Cu: goto label_1cb52c;
            case 0x1CB530u: goto label_1cb530;
            case 0x1CB534u: goto label_1cb534;
            case 0x1CB538u: goto label_1cb538;
            case 0x1CB53Cu: goto label_1cb53c;
            case 0x1CB540u: goto label_1cb540;
            case 0x1CB544u: goto label_1cb544;
            case 0x1CB548u: goto label_1cb548;
            case 0x1CB54Cu: goto label_1cb54c;
            case 0x1CB550u: goto label_1cb550;
            case 0x1CB554u: goto label_1cb554;
            case 0x1CB558u: goto label_1cb558;
            case 0x1CB55Cu: goto label_1cb55c;
            case 0x1CB560u: goto label_1cb560;
            case 0x1CB564u: goto label_1cb564;
            case 0x1CB568u: goto label_1cb568;
            case 0x1CB56Cu: goto label_1cb56c;
            case 0x1CB570u: goto label_1cb570;
            case 0x1CB574u: goto label_1cb574;
            case 0x1CB578u: goto label_1cb578;
            case 0x1CB57Cu: goto label_1cb57c;
            case 0x1CB580u: goto label_1cb580;
            case 0x1CB584u: goto label_1cb584;
            case 0x1CB588u: goto label_1cb588;
            case 0x1CB58Cu: goto label_1cb58c;
            case 0x1CB590u: goto label_1cb590;
            case 0x1CB594u: goto label_1cb594;
            case 0x1CB598u: goto label_1cb598;
            case 0x1CB59Cu: goto label_1cb59c;
            case 0x1CB5A0u: goto label_1cb5a0;
            case 0x1CB5A4u: goto label_1cb5a4;
            case 0x1CB5A8u: goto label_1cb5a8;
            case 0x1CB5ACu: goto label_1cb5ac;
            case 0x1CB5B0u: goto label_1cb5b0;
            case 0x1CB5B4u: goto label_1cb5b4;
            case 0x1CB5B8u: goto label_1cb5b8;
            case 0x1CB5BCu: goto label_1cb5bc;
            case 0x1CB5C0u: goto label_1cb5c0;
            case 0x1CB5C4u: goto label_1cb5c4;
            case 0x1CB5C8u: goto label_1cb5c8;
            case 0x1CB5CCu: goto label_1cb5cc;
            case 0x1CB5D0u: goto label_1cb5d0;
            case 0x1CB5D4u: goto label_1cb5d4;
            case 0x1CB5D8u: goto label_1cb5d8;
            case 0x1CB5DCu: goto label_1cb5dc;
            case 0x1CB5E0u: goto label_1cb5e0;
            case 0x1CB5E4u: goto label_1cb5e4;
            case 0x1CB5E8u: goto label_1cb5e8;
            case 0x1CB5ECu: goto label_1cb5ec;
            case 0x1CB5F0u: goto label_1cb5f0;
            case 0x1CB5F4u: goto label_1cb5f4;
            case 0x1CB5F8u: goto label_1cb5f8;
            case 0x1CB5FCu: goto label_1cb5fc;
            case 0x1CB600u: goto label_1cb600;
            case 0x1CB604u: goto label_1cb604;
            case 0x1CB608u: goto label_1cb608;
            case 0x1CB60Cu: goto label_1cb60c;
            case 0x1CB610u: goto label_1cb610;
            case 0x1CB614u: goto label_1cb614;
            case 0x1CB618u: goto label_1cb618;
            case 0x1CB61Cu: goto label_1cb61c;
            case 0x1CB620u: goto label_1cb620;
            case 0x1CB624u: goto label_1cb624;
            case 0x1CB628u: goto label_1cb628;
            case 0x1CB62Cu: goto label_1cb62c;
            case 0x1CB630u: goto label_1cb630;
            case 0x1CB634u: goto label_1cb634;
            case 0x1CB638u: goto label_1cb638;
            case 0x1CB63Cu: goto label_1cb63c;
            case 0x1CB640u: goto label_1cb640;
            case 0x1CB644u: goto label_1cb644;
            case 0x1CB648u: goto label_1cb648;
            case 0x1CB64Cu: goto label_1cb64c;
            case 0x1CB650u: goto label_1cb650;
            case 0x1CB654u: goto label_1cb654;
            case 0x1CB658u: goto label_1cb658;
            case 0x1CB65Cu: goto label_1cb65c;
            case 0x1CB660u: goto label_1cb660;
            case 0x1CB664u: goto label_1cb664;
            case 0x1CB668u: goto label_1cb668;
            case 0x1CB66Cu: goto label_1cb66c;
            case 0x1CB670u: goto label_1cb670;
            case 0x1CB674u: goto label_1cb674;
            case 0x1CB678u: goto label_1cb678;
            case 0x1CB67Cu: goto label_1cb67c;
            case 0x1CB680u: goto label_1cb680;
            case 0x1CB684u: goto label_1cb684;
            case 0x1CB688u: goto label_1cb688;
            case 0x1CB68Cu: goto label_1cb68c;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB694u: goto label_1cb694;
            case 0x1CB698u: goto label_1cb698;
            case 0x1CB69Cu: goto label_1cb69c;
            case 0x1CB6A0u: goto label_1cb6a0;
            case 0x1CB6A4u: goto label_1cb6a4;
            case 0x1CB6A8u: goto label_1cb6a8;
            case 0x1CB6ACu: goto label_1cb6ac;
            case 0x1CB6B0u: goto label_1cb6b0;
            case 0x1CB6B4u: goto label_1cb6b4;
            case 0x1CB6B8u: goto label_1cb6b8;
            case 0x1CB6BCu: goto label_1cb6bc;
            case 0x1CB6C0u: goto label_1cb6c0;
            case 0x1CB6C4u: goto label_1cb6c4;
            case 0x1CB6C8u: goto label_1cb6c8;
            case 0x1CB6CCu: goto label_1cb6cc;
            case 0x1CB6D0u: goto label_1cb6d0;
            case 0x1CB6D4u: goto label_1cb6d4;
            case 0x1CB6D8u: goto label_1cb6d8;
            case 0x1CB6DCu: goto label_1cb6dc;
            case 0x1CB6E0u: goto label_1cb6e0;
            case 0x1CB6E4u: goto label_1cb6e4;
            case 0x1CB6E8u: goto label_1cb6e8;
            case 0x1CB6ECu: goto label_1cb6ec;
            case 0x1CB6F0u: goto label_1cb6f0;
            case 0x1CB6F4u: goto label_1cb6f4;
            case 0x1CB6F8u: goto label_1cb6f8;
            case 0x1CB6FCu: goto label_1cb6fc;
            case 0x1CB700u: goto label_1cb700;
            case 0x1CB704u: goto label_1cb704;
            case 0x1CB708u: goto label_1cb708;
            case 0x1CB70Cu: goto label_1cb70c;
            case 0x1CB710u: goto label_1cb710;
            case 0x1CB714u: goto label_1cb714;
            case 0x1CB718u: goto label_1cb718;
            case 0x1CB71Cu: goto label_1cb71c;
            case 0x1CB720u: goto label_1cb720;
            case 0x1CB724u: goto label_1cb724;
            case 0x1CB728u: goto label_1cb728;
            case 0x1CB72Cu: goto label_1cb72c;
            case 0x1CB730u: goto label_1cb730;
            case 0x1CB734u: goto label_1cb734;
            case 0x1CB738u: goto label_1cb738;
            case 0x1CB73Cu: goto label_1cb73c;
            case 0x1CB740u: goto label_1cb740;
            case 0x1CB744u: goto label_1cb744;
            case 0x1CB748u: goto label_1cb748;
            case 0x1CB74Cu: goto label_1cb74c;
            case 0x1CB750u: goto label_1cb750;
            case 0x1CB754u: goto label_1cb754;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB75Cu: goto label_1cb75c;
            case 0x1CB760u: goto label_1cb760;
            case 0x1CB764u: goto label_1cb764;
            case 0x1CB768u: goto label_1cb768;
            case 0x1CB76Cu: goto label_1cb76c;
            case 0x1CB770u: goto label_1cb770;
            case 0x1CB774u: goto label_1cb774;
            case 0x1CB778u: goto label_1cb778;
            case 0x1CB77Cu: goto label_1cb77c;
            case 0x1CB780u: goto label_1cb780;
            case 0x1CB784u: goto label_1cb784;
            case 0x1CB788u: goto label_1cb788;
            case 0x1CB78Cu: goto label_1cb78c;
            case 0x1CB790u: goto label_1cb790;
            case 0x1CB794u: goto label_1cb794;
            case 0x1CB798u: goto label_1cb798;
            case 0x1CB79Cu: goto label_1cb79c;
            case 0x1CB7A0u: goto label_1cb7a0;
            case 0x1CB7A4u: goto label_1cb7a4;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7ACu: goto label_1cb7ac;
            case 0x1CB7B0u: goto label_1cb7b0;
            case 0x1CB7B4u: goto label_1cb7b4;
            case 0x1CB7B8u: goto label_1cb7b8;
            case 0x1CB7BCu: goto label_1cb7bc;
            case 0x1CB7C0u: goto label_1cb7c0;
            case 0x1CB7C4u: goto label_1cb7c4;
            case 0x1CB7C8u: goto label_1cb7c8;
            case 0x1CB7CCu: goto label_1cb7cc;
            case 0x1CB7D0u: goto label_1cb7d0;
            case 0x1CB7D4u: goto label_1cb7d4;
            case 0x1CB7D8u: goto label_1cb7d8;
            case 0x1CB7DCu: goto label_1cb7dc;
            case 0x1CB7E0u: goto label_1cb7e0;
            case 0x1CB7E4u: goto label_1cb7e4;
            case 0x1CB7E8u: goto label_1cb7e8;
            case 0x1CB7ECu: goto label_1cb7ec;
            case 0x1CB7F0u: goto label_1cb7f0;
            case 0x1CB7F4u: goto label_1cb7f4;
            case 0x1CB7F8u: goto label_1cb7f8;
            case 0x1CB7FCu: goto label_1cb7fc;
            case 0x1CB800u: goto label_1cb800;
            case 0x1CB804u: goto label_1cb804;
            case 0x1CB808u: goto label_1cb808;
            case 0x1CB80Cu: goto label_1cb80c;
            case 0x1CB810u: goto label_1cb810;
            case 0x1CB814u: goto label_1cb814;
            case 0x1CB818u: goto label_1cb818;
            case 0x1CB81Cu: goto label_1cb81c;
            case 0x1CB820u: goto label_1cb820;
            case 0x1CB824u: goto label_1cb824;
            case 0x1CB828u: goto label_1cb828;
            case 0x1CB82Cu: goto label_1cb82c;
            case 0x1CB830u: goto label_1cb830;
            case 0x1CB834u: goto label_1cb834;
            case 0x1CB838u: goto label_1cb838;
            case 0x1CB83Cu: goto label_1cb83c;
            case 0x1CB840u: goto label_1cb840;
            case 0x1CB844u: goto label_1cb844;
            case 0x1CB848u: goto label_1cb848;
            case 0x1CB84Cu: goto label_1cb84c;
            case 0x1CB850u: goto label_1cb850;
            case 0x1CB854u: goto label_1cb854;
            case 0x1CB858u: goto label_1cb858;
            case 0x1CB85Cu: goto label_1cb85c;
            case 0x1CB860u: goto label_1cb860;
            case 0x1CB864u: goto label_1cb864;
            case 0x1CB868u: goto label_1cb868;
            case 0x1CB86Cu: goto label_1cb86c;
            case 0x1CB870u: goto label_1cb870;
            case 0x1CB874u: goto label_1cb874;
            case 0x1CB878u: goto label_1cb878;
            case 0x1CB87Cu: goto label_1cb87c;
            case 0x1CB880u: goto label_1cb880;
            case 0x1CB884u: goto label_1cb884;
            case 0x1CB888u: goto label_1cb888;
            case 0x1CB88Cu: goto label_1cb88c;
            case 0x1CB890u: goto label_1cb890;
            case 0x1CB894u: goto label_1cb894;
            case 0x1CB898u: goto label_1cb898;
            case 0x1CB89Cu: goto label_1cb89c;
            case 0x1CB8A0u: goto label_1cb8a0;
            case 0x1CB8A4u: goto label_1cb8a4;
            case 0x1CB8A8u: goto label_1cb8a8;
            case 0x1CB8ACu: goto label_1cb8ac;
            case 0x1CB8B0u: goto label_1cb8b0;
            case 0x1CB8B4u: goto label_1cb8b4;
            case 0x1CB8B8u: goto label_1cb8b8;
            case 0x1CB8BCu: goto label_1cb8bc;
            case 0x1CB8C0u: goto label_1cb8c0;
            case 0x1CB8C4u: goto label_1cb8c4;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB8CCu: goto label_1cb8cc;
            case 0x1CB8D0u: goto label_1cb8d0;
            case 0x1CB8D4u: goto label_1cb8d4;
            case 0x1CB8D8u: goto label_1cb8d8;
            case 0x1CB8DCu: goto label_1cb8dc;
            case 0x1CB8E0u: goto label_1cb8e0;
            case 0x1CB8E4u: goto label_1cb8e4;
            case 0x1CB8E8u: goto label_1cb8e8;
            case 0x1CB8ECu: goto label_1cb8ec;
            case 0x1CB8F0u: goto label_1cb8f0;
            case 0x1CB8F4u: goto label_1cb8f4;
            case 0x1CB8F8u: goto label_1cb8f8;
            case 0x1CB8FCu: goto label_1cb8fc;
            case 0x1CB900u: goto label_1cb900;
            case 0x1CB904u: goto label_1cb904;
            case 0x1CB908u: goto label_1cb908;
            case 0x1CB90Cu: goto label_1cb90c;
            case 0x1CB910u: goto label_1cb910;
            case 0x1CB914u: goto label_1cb914;
            case 0x1CB918u: goto label_1cb918;
            case 0x1CB91Cu: goto label_1cb91c;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB924u: goto label_1cb924;
            case 0x1CB928u: goto label_1cb928;
            case 0x1CB92Cu: goto label_1cb92c;
            case 0x1CB930u: goto label_1cb930;
            case 0x1CB934u: goto label_1cb934;
            case 0x1CB938u: goto label_1cb938;
            case 0x1CB93Cu: goto label_1cb93c;
            case 0x1CB940u: goto label_1cb940;
            case 0x1CB944u: goto label_1cb944;
            case 0x1CB948u: goto label_1cb948;
            case 0x1CB94Cu: goto label_1cb94c;
            case 0x1CB950u: goto label_1cb950;
            case 0x1CB954u: goto label_1cb954;
            case 0x1CB958u: goto label_1cb958;
            case 0x1CB95Cu: goto label_1cb95c;
            case 0x1CB960u: goto label_1cb960;
            case 0x1CB964u: goto label_1cb964;
            case 0x1CB968u: goto label_1cb968;
            case 0x1CB96Cu: goto label_1cb96c;
            case 0x1CB970u: goto label_1cb970;
            case 0x1CB974u: goto label_1cb974;
            case 0x1CB978u: goto label_1cb978;
            case 0x1CB97Cu: goto label_1cb97c;
            case 0x1CB980u: goto label_1cb980;
            case 0x1CB984u: goto label_1cb984;
            case 0x1CB988u: goto label_1cb988;
            case 0x1CB98Cu: goto label_1cb98c;
            case 0x1CB990u: goto label_1cb990;
            case 0x1CB994u: goto label_1cb994;
            case 0x1CB998u: goto label_1cb998;
            case 0x1CB99Cu: goto label_1cb99c;
            case 0x1CB9A0u: goto label_1cb9a0;
            case 0x1CB9A4u: goto label_1cb9a4;
            case 0x1CB9A8u: goto label_1cb9a8;
            case 0x1CB9ACu: goto label_1cb9ac;
            case 0x1CB9B0u: goto label_1cb9b0;
            case 0x1CB9B4u: goto label_1cb9b4;
            case 0x1CB9B8u: goto label_1cb9b8;
            case 0x1CB9BCu: goto label_1cb9bc;
            case 0x1CB9C0u: goto label_1cb9c0;
            case 0x1CB9C4u: goto label_1cb9c4;
            case 0x1CB9C8u: goto label_1cb9c8;
            case 0x1CB9CCu: goto label_1cb9cc;
            case 0x1CB9D0u: goto label_1cb9d0;
            case 0x1CB9D4u: goto label_1cb9d4;
            case 0x1CB9D8u: goto label_1cb9d8;
            case 0x1CB9DCu: goto label_1cb9dc;
            case 0x1CB9E0u: goto label_1cb9e0;
            case 0x1CB9E4u: goto label_1cb9e4;
            case 0x1CB9E8u: goto label_1cb9e8;
            case 0x1CB9ECu: goto label_1cb9ec;
            case 0x1CB9F0u: goto label_1cb9f0;
            case 0x1CB9F4u: goto label_1cb9f4;
            case 0x1CB9F8u: goto label_1cb9f8;
            case 0x1CB9FCu: goto label_1cb9fc;
            case 0x1CBA00u: goto label_1cba00;
            case 0x1CBA04u: goto label_1cba04;
            case 0x1CBA08u: goto label_1cba08;
            case 0x1CBA0Cu: goto label_1cba0c;
            case 0x1CBA10u: goto label_1cba10;
            case 0x1CBA14u: goto label_1cba14;
            case 0x1CBA18u: goto label_1cba18;
            case 0x1CBA1Cu: goto label_1cba1c;
            case 0x1CBA20u: goto label_1cba20;
            case 0x1CBA24u: goto label_1cba24;
            case 0x1CBA28u: goto label_1cba28;
            case 0x1CBA2Cu: goto label_1cba2c;
            case 0x1CBA30u: goto label_1cba30;
            case 0x1CBA34u: goto label_1cba34;
            case 0x1CBA38u: goto label_1cba38;
            case 0x1CBA3Cu: goto label_1cba3c;
            case 0x1CBA40u: goto label_1cba40;
            case 0x1CBA44u: goto label_1cba44;
            case 0x1CBA48u: goto label_1cba48;
            case 0x1CBA4Cu: goto label_1cba4c;
            case 0x1CBA50u: goto label_1cba50;
            case 0x1CBA54u: goto label_1cba54;
            case 0x1CBA58u: goto label_1cba58;
            case 0x1CBA5Cu: goto label_1cba5c;
            case 0x1CBA60u: goto label_1cba60;
            case 0x1CBA64u: goto label_1cba64;
            case 0x1CBA68u: goto label_1cba68;
            case 0x1CBA6Cu: goto label_1cba6c;
            case 0x1CBA70u: goto label_1cba70;
            case 0x1CBA74u: goto label_1cba74;
            case 0x1CBA78u: goto label_1cba78;
            case 0x1CBA7Cu: goto label_1cba7c;
            case 0x1CBA80u: goto label_1cba80;
            case 0x1CBA84u: goto label_1cba84;
            case 0x1CBA88u: goto label_1cba88;
            case 0x1CBA8Cu: goto label_1cba8c;
            case 0x1CBA90u: goto label_1cba90;
            case 0x1CBA94u: goto label_1cba94;
            case 0x1CBA98u: goto label_1cba98;
            case 0x1CBA9Cu: goto label_1cba9c;
            case 0x1CBAA0u: goto label_1cbaa0;
            case 0x1CBAA4u: goto label_1cbaa4;
            case 0x1CBAA8u: goto label_1cbaa8;
            case 0x1CBAACu: goto label_1cbaac;
            case 0x1CBAB0u: goto label_1cbab0;
            case 0x1CBAB4u: goto label_1cbab4;
            case 0x1CBAB8u: goto label_1cbab8;
            case 0x1CBABCu: goto label_1cbabc;
            case 0x1CBAC0u: goto label_1cbac0;
            case 0x1CBAC4u: goto label_1cbac4;
            case 0x1CBAC8u: goto label_1cbac8;
            case 0x1CBACCu: goto label_1cbacc;
            case 0x1CBAD0u: goto label_1cbad0;
            case 0x1CBAD4u: goto label_1cbad4;
            case 0x1CBAD8u: goto label_1cbad8;
            case 0x1CBADCu: goto label_1cbadc;
            case 0x1CBAE0u: goto label_1cbae0;
            case 0x1CBAE4u: goto label_1cbae4;
            case 0x1CBAE8u: goto label_1cbae8;
            case 0x1CBAECu: goto label_1cbaec;
            case 0x1CBAF0u: goto label_1cbaf0;
            case 0x1CBAF4u: goto label_1cbaf4;
            case 0x1CBAF8u: goto label_1cbaf8;
            case 0x1CBAFCu: goto label_1cbafc;
            case 0x1CBB00u: goto label_1cbb00;
            case 0x1CBB04u: goto label_1cbb04;
            case 0x1CBB08u: goto label_1cbb08;
            case 0x1CBB0Cu: goto label_1cbb0c;
            case 0x1CBB10u: goto label_1cbb10;
            case 0x1CBB14u: goto label_1cbb14;
            case 0x1CBB18u: goto label_1cbb18;
            case 0x1CBB1Cu: goto label_1cbb1c;
            case 0x1CBB20u: goto label_1cbb20;
            case 0x1CBB24u: goto label_1cbb24;
            case 0x1CBB28u: goto label_1cbb28;
            case 0x1CBB2Cu: goto label_1cbb2c;
            case 0x1CBB30u: goto label_1cbb30;
            case 0x1CBB34u: goto label_1cbb34;
            case 0x1CBB38u: goto label_1cbb38;
            case 0x1CBB3Cu: goto label_1cbb3c;
            case 0x1CBB40u: goto label_1cbb40;
            case 0x1CBB44u: goto label_1cbb44;
            case 0x1CBB48u: goto label_1cbb48;
            case 0x1CBB4Cu: goto label_1cbb4c;
            case 0x1CBB50u: goto label_1cbb50;
            case 0x1CBB54u: goto label_1cbb54;
            case 0x1CBB58u: goto label_1cbb58;
            case 0x1CBB5Cu: goto label_1cbb5c;
            case 0x1CBB60u: goto label_1cbb60;
            case 0x1CBB64u: goto label_1cbb64;
            case 0x1CBB68u: goto label_1cbb68;
            case 0x1CBB6Cu: goto label_1cbb6c;
            case 0x1CBB70u: goto label_1cbb70;
            case 0x1CBB74u: goto label_1cbb74;
            case 0x1CBB78u: goto label_1cbb78;
            case 0x1CBB7Cu: goto label_1cbb7c;
            case 0x1CBB80u: goto label_1cbb80;
            case 0x1CBB84u: goto label_1cbb84;
            case 0x1CBB88u: goto label_1cbb88;
            case 0x1CBB8Cu: goto label_1cbb8c;
            case 0x1CBB90u: goto label_1cbb90;
            case 0x1CBB94u: goto label_1cbb94;
            case 0x1CBB98u: goto label_1cbb98;
            case 0x1CBB9Cu: goto label_1cbb9c;
            case 0x1CBBA0u: goto label_1cbba0;
            case 0x1CBBA4u: goto label_1cbba4;
            case 0x1CBBA8u: goto label_1cbba8;
            case 0x1CBBACu: goto label_1cbbac;
            case 0x1CBBB0u: goto label_1cbbb0;
            case 0x1CBBB4u: goto label_1cbbb4;
            case 0x1CBBB8u: goto label_1cbbb8;
            case 0x1CBBBCu: goto label_1cbbbc;
            case 0x1CBBC0u: goto label_1cbbc0;
            case 0x1CBBC4u: goto label_1cbbc4;
            case 0x1CBBC8u: goto label_1cbbc8;
            case 0x1CBBCCu: goto label_1cbbcc;
            case 0x1CBBD0u: goto label_1cbbd0;
            case 0x1CBBD4u: goto label_1cbbd4;
            case 0x1CBBD8u: goto label_1cbbd8;
            case 0x1CBBDCu: goto label_1cbbdc;
            case 0x1CBBE0u: goto label_1cbbe0;
            case 0x1CBBE4u: goto label_1cbbe4;
            case 0x1CBBE8u: goto label_1cbbe8;
            case 0x1CBBECu: goto label_1cbbec;
            case 0x1CBBF0u: goto label_1cbbf0;
            case 0x1CBBF4u: goto label_1cbbf4;
            case 0x1CBBF8u: goto label_1cbbf8;
            case 0x1CBBFCu: goto label_1cbbfc;
            case 0x1CBC00u: goto label_1cbc00;
            case 0x1CBC04u: goto label_1cbc04;
            case 0x1CBC08u: goto label_1cbc08;
            case 0x1CBC0Cu: goto label_1cbc0c;
            case 0x1CBC10u: goto label_1cbc10;
            case 0x1CBC14u: goto label_1cbc14;
            case 0x1CBC18u: goto label_1cbc18;
            case 0x1CBC1Cu: goto label_1cbc1c;
            case 0x1CBC20u: goto label_1cbc20;
            case 0x1CBC24u: goto label_1cbc24;
            case 0x1CBC28u: goto label_1cbc28;
            case 0x1CBC2Cu: goto label_1cbc2c;
            case 0x1CBC30u: goto label_1cbc30;
            case 0x1CBC34u: goto label_1cbc34;
            case 0x1CBC38u: goto label_1cbc38;
            case 0x1CBC3Cu: goto label_1cbc3c;
            case 0x1CBC40u: goto label_1cbc40;
            case 0x1CBC44u: goto label_1cbc44;
            case 0x1CBC48u: goto label_1cbc48;
            case 0x1CBC4Cu: goto label_1cbc4c;
            case 0x1CBC50u: goto label_1cbc50;
            case 0x1CBC54u: goto label_1cbc54;
            case 0x1CBC58u: goto label_1cbc58;
            case 0x1CBC5Cu: goto label_1cbc5c;
            case 0x1CBC60u: goto label_1cbc60;
            case 0x1CBC64u: goto label_1cbc64;
            case 0x1CBC68u: goto label_1cbc68;
            case 0x1CBC6Cu: goto label_1cbc6c;
            case 0x1CBC70u: goto label_1cbc70;
            case 0x1CBC74u: goto label_1cbc74;
            case 0x1CBC78u: goto label_1cbc78;
            case 0x1CBC7Cu: goto label_1cbc7c;
            case 0x1CBC80u: goto label_1cbc80;
            case 0x1CBC84u: goto label_1cbc84;
            case 0x1CBC88u: goto label_1cbc88;
            case 0x1CBC8Cu: goto label_1cbc8c;
            case 0x1CBC90u: goto label_1cbc90;
            case 0x1CBC94u: goto label_1cbc94;
            case 0x1CBC98u: goto label_1cbc98;
            case 0x1CBC9Cu: goto label_1cbc9c;
            case 0x1CBCA0u: goto label_1cbca0;
            case 0x1CBCA4u: goto label_1cbca4;
            case 0x1CBCA8u: goto label_1cbca8;
            case 0x1CBCACu: goto label_1cbcac;
            case 0x1CBCB0u: goto label_1cbcb0;
            case 0x1CBCB4u: goto label_1cbcb4;
            case 0x1CBCB8u: goto label_1cbcb8;
            case 0x1CBCBCu: goto label_1cbcbc;
            case 0x1CBCC0u: goto label_1cbcc0;
            case 0x1CBCC4u: goto label_1cbcc4;
            case 0x1CBCC8u: goto label_1cbcc8;
            case 0x1CBCCCu: goto label_1cbccc;
            case 0x1CBCD0u: goto label_1cbcd0;
            case 0x1CBCD4u: goto label_1cbcd4;
            case 0x1CBCD8u: goto label_1cbcd8;
            case 0x1CBCDCu: goto label_1cbcdc;
            case 0x1CBCE0u: goto label_1cbce0;
            case 0x1CBCE4u: goto label_1cbce4;
            case 0x1CBCE8u: goto label_1cbce8;
            case 0x1CBCECu: goto label_1cbcec;
            case 0x1CBCF0u: goto label_1cbcf0;
            case 0x1CBCF4u: goto label_1cbcf4;
            case 0x1CBCF8u: goto label_1cbcf8;
            case 0x1CBCFCu: goto label_1cbcfc;
            case 0x1CBD00u: goto label_1cbd00;
            case 0x1CBD04u: goto label_1cbd04;
            case 0x1CBD08u: goto label_1cbd08;
            case 0x1CBD0Cu: goto label_1cbd0c;
            case 0x1CBD10u: goto label_1cbd10;
            case 0x1CBD14u: goto label_1cbd14;
            case 0x1CBD18u: goto label_1cbd18;
            case 0x1CBD1Cu: goto label_1cbd1c;
            case 0x1CBD20u: goto label_1cbd20;
            case 0x1CBD24u: goto label_1cbd24;
            case 0x1CBD28u: goto label_1cbd28;
            case 0x1CBD2Cu: goto label_1cbd2c;
            case 0x1CBD30u: goto label_1cbd30;
            case 0x1CBD34u: goto label_1cbd34;
            case 0x1CBD38u: goto label_1cbd38;
            case 0x1CBD3Cu: goto label_1cbd3c;
            case 0x1CBD40u: goto label_1cbd40;
            case 0x1CBD44u: goto label_1cbd44;
            case 0x1CBD48u: goto label_1cbd48;
            case 0x1CBD4Cu: goto label_1cbd4c;
            case 0x1CBD50u: goto label_1cbd50;
            case 0x1CBD54u: goto label_1cbd54;
            case 0x1CBD58u: goto label_1cbd58;
            case 0x1CBD5Cu: goto label_1cbd5c;
            case 0x1CBD60u: goto label_1cbd60;
            case 0x1CBD64u: goto label_1cbd64;
            case 0x1CBD68u: goto label_1cbd68;
            case 0x1CBD6Cu: goto label_1cbd6c;
            case 0x1CBD70u: goto label_1cbd70;
            case 0x1CBD74u: goto label_1cbd74;
            case 0x1CBD78u: goto label_1cbd78;
            case 0x1CBD7Cu: goto label_1cbd7c;
            case 0x1CBD80u: goto label_1cbd80;
            case 0x1CBD84u: goto label_1cbd84;
            case 0x1CBD88u: goto label_1cbd88;
            case 0x1CBD8Cu: goto label_1cbd8c;
            case 0x1CBD90u: goto label_1cbd90;
            case 0x1CBD94u: goto label_1cbd94;
            case 0x1CBD98u: goto label_1cbd98;
            case 0x1CBD9Cu: goto label_1cbd9c;
            case 0x1CBDA0u: goto label_1cbda0;
            case 0x1CBDA4u: goto label_1cbda4;
            case 0x1CBDA8u: goto label_1cbda8;
            case 0x1CBDACu: goto label_1cbdac;
            case 0x1CBDB0u: goto label_1cbdb0;
            case 0x1CBDB4u: goto label_1cbdb4;
            case 0x1CBDB8u: goto label_1cbdb8;
            case 0x1CBDBCu: goto label_1cbdbc;
            case 0x1CBDC0u: goto label_1cbdc0;
            case 0x1CBDC4u: goto label_1cbdc4;
            case 0x1CBDC8u: goto label_1cbdc8;
            case 0x1CBDCCu: goto label_1cbdcc;
            case 0x1CBDD0u: goto label_1cbdd0;
            case 0x1CBDD4u: goto label_1cbdd4;
            case 0x1CBDD8u: goto label_1cbdd8;
            case 0x1CBDDCu: goto label_1cbddc;
            case 0x1CBDE0u: goto label_1cbde0;
            case 0x1CBDE4u: goto label_1cbde4;
            case 0x1CBDE8u: goto label_1cbde8;
            case 0x1CBDECu: goto label_1cbdec;
            case 0x1CBDF0u: goto label_1cbdf0;
            case 0x1CBDF4u: goto label_1cbdf4;
            case 0x1CBDF8u: goto label_1cbdf8;
            case 0x1CBDFCu: goto label_1cbdfc;
            case 0x1CBE00u: goto label_1cbe00;
            case 0x1CBE04u: goto label_1cbe04;
            case 0x1CBE08u: goto label_1cbe08;
            case 0x1CBE0Cu: goto label_1cbe0c;
            case 0x1CBE10u: goto label_1cbe10;
            case 0x1CBE14u: goto label_1cbe14;
            case 0x1CBE18u: goto label_1cbe18;
            case 0x1CBE1Cu: goto label_1cbe1c;
            case 0x1CBE20u: goto label_1cbe20;
            case 0x1CBE24u: goto label_1cbe24;
            case 0x1CBE28u: goto label_1cbe28;
            case 0x1CBE2Cu: goto label_1cbe2c;
            case 0x1CBE30u: goto label_1cbe30;
            case 0x1CBE34u: goto label_1cbe34;
            case 0x1CBE38u: goto label_1cbe38;
            case 0x1CBE3Cu: goto label_1cbe3c;
            case 0x1CBE40u: goto label_1cbe40;
            case 0x1CBE44u: goto label_1cbe44;
            case 0x1CBE48u: goto label_1cbe48;
            case 0x1CBE4Cu: goto label_1cbe4c;
            case 0x1CBE50u: goto label_1cbe50;
            case 0x1CBE54u: goto label_1cbe54;
            case 0x1CBE58u: goto label_1cbe58;
            case 0x1CBE5Cu: goto label_1cbe5c;
            case 0x1CBE60u: goto label_1cbe60;
            case 0x1CBE64u: goto label_1cbe64;
            case 0x1CBE68u: goto label_1cbe68;
            case 0x1CBE6Cu: goto label_1cbe6c;
            case 0x1CBE70u: goto label_1cbe70;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB970u; }
            if (ctx->pc != 0x1CB970u) { return; }
        }
    }
    ctx->pc = 0x1CB970u;
label_1cb970:
    // 0x1cb970: 0x1000013b  b           . + 4 + (0x13B << 2)
label_1cb974:
    if (ctx->pc == 0x1CB974u) {
        ctx->pc = 0x1CB978u;
        goto label_1cb978;
    }
    ctx->pc = 0x1CB970u;
    {
        const bool branch_taken_0x1cb970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb970) {
            ctx->pc = 0x1CBE60u;
            goto label_1cbe60;
        }
    }
    ctx->pc = 0x1CB978u;
label_1cb978:
    // 0x1cb978: 0x286102bc  slti        $at, $v1, 0x2BC
    ctx->pc = 0x1cb978u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)700) ? 1 : 0);
label_1cb97c:
    // 0x1cb97c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1cb980:
    if (ctx->pc == 0x1CB980u) {
        ctx->pc = 0x1CB984u;
        goto label_1cb984;
    }
    ctx->pc = 0x1CB97Cu;
    {
        const bool branch_taken_0x1cb97c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb97c) {
            ctx->pc = 0x1CB9D0u;
            goto label_1cb9d0;
        }
    }
    ctx->pc = 0x1CB984u;
label_1cb984:
    // 0x1cb984: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1cb984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cb988:
    // 0x1cb988: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cb988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cb98c:
    // 0x1cb98c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1cb98cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cb990:
    // 0x1cb990: 0x0  nop
    ctx->pc = 0x1cb990u;
    // NOP
label_1cb994:
    // 0x1cb994: 0x0  nop
    ctx->pc = 0x1cb994u;
    // NOP
label_1cb998:
    // 0x1cb998: 0x1810  mfhi        $v1
    ctx->pc = 0x1cb998u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1cb99c:
    // 0x1cb99c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_1cb9a0:
    if (ctx->pc == 0x1CB9A0u) {
        ctx->pc = 0x1CB9A4u;
        goto label_1cb9a4;
    }
    ctx->pc = 0x1CB99Cu;
    {
        const bool branch_taken_0x1cb99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb99c) {
            ctx->pc = 0x1CB9D0u;
            goto label_1cb9d0;
        }
    }
    ctx->pc = 0x1CB9A4u;
label_1cb9a4:
    // 0x1cb9a4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1cb9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cb9a8:
    // 0x1cb9a8: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1cb9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1cb9ac:
    // 0x1cb9ac: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1cb9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_1cb9b0:
    // 0x1cb9b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb9b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb9b4:
    // 0x1cb9b4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1cb9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cb9b8:
    // 0x1cb9b8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cb9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cb9bc:
    // 0x1cb9bc: 0xc0536d8  jal         func_14DB60
label_1cb9c0:
    if (ctx->pc == 0x1CB9C0u) {
        ctx->pc = 0x1CB9C0u;
            // 0x1cb9c0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1CB9C4u;
        goto label_1cb9c4;
    }
    ctx->pc = 0x1CB9BCu;
    SET_GPR_U32(ctx, 31, 0x1CB9C4u);
    ctx->pc = 0x1CB9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB9BCu;
            // 0x1cb9c0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9C4u; }
        if (ctx->pc != 0x1CB9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9C4u; }
        if (ctx->pc != 0x1CB9C4u) { return; }
    }
    ctx->pc = 0x1CB9C4u;
label_1cb9c4:
    // 0x1cb9c4: 0xc060500  jal         func_181400
label_1cb9c8:
    if (ctx->pc == 0x1CB9C8u) {
        ctx->pc = 0x1CB9C8u;
            // 0x1cb9c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CB9CCu;
        goto label_1cb9cc;
    }
    ctx->pc = 0x1CB9C4u;
    SET_GPR_U32(ctx, 31, 0x1CB9CCu);
    ctx->pc = 0x1CB9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB9C4u;
            // 0x1cb9c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9CCu; }
        if (ctx->pc != 0x1CB9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9CCu; }
        if (ctx->pc != 0x1CB9CCu) { return; }
    }
    ctx->pc = 0x1CB9CCu;
label_1cb9cc:
    // 0x1cb9cc: 0x0  nop
    ctx->pc = 0x1cb9ccu;
    // NOP
label_1cb9d0:
    // 0x1cb9d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1cb9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1cb9d4:
    // 0x1cb9d4: 0x2861012c  slti        $at, $v1, 0x12C
    ctx->pc = 0x1cb9d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
label_1cb9d8:
    // 0x1cb9d8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1cb9dc:
    if (ctx->pc == 0x1CB9DCu) {
        ctx->pc = 0x1CB9E0u;
        goto label_1cb9e0;
    }
    ctx->pc = 0x1CB9D8u;
    {
        const bool branch_taken_0x1cb9d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9d8) {
            ctx->pc = 0x1CBA20u;
            goto label_1cba20;
        }
    }
    ctx->pc = 0x1CB9E0u;
label_1cb9e0:
    // 0x1cb9e0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1cb9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cb9e4:
    // 0x1cb9e4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cb9e8:
    // 0x1cb9e8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1cb9e8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cb9ec:
    // 0x1cb9ec: 0x0  nop
    ctx->pc = 0x1cb9ecu;
    // NOP
label_1cb9f0:
    // 0x1cb9f0: 0x0  nop
    ctx->pc = 0x1cb9f0u;
    // NOP
label_1cb9f4:
    // 0x1cb9f4: 0x1810  mfhi        $v1
    ctx->pc = 0x1cb9f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1cb9f8:
    // 0x1cb9f8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1cb9fc:
    if (ctx->pc == 0x1CB9FCu) {
        ctx->pc = 0x1CBA00u;
        goto label_1cba00;
    }
    ctx->pc = 0x1CB9F8u;
    {
        const bool branch_taken_0x1cb9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9f8) {
            ctx->pc = 0x1CBA20u;
            goto label_1cba20;
        }
    }
    ctx->pc = 0x1CBA00u;
label_1cba00:
    // 0x1cba00: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1cba00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cba04:
    // 0x1cba04: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1cba04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1cba08:
    // 0x1cba08: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x1cba08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1cba0c:
    // 0x1cba0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cba0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cba10:
    // 0x1cba10: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1cba10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cba14:
    // 0x1cba14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cba14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cba18:
    // 0x1cba18: 0xc0536d8  jal         func_14DB60
label_1cba1c:
    if (ctx->pc == 0x1CBA1Cu) {
        ctx->pc = 0x1CBA1Cu;
            // 0x1cba1c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1CBA20u;
        goto label_1cba20;
    }
    ctx->pc = 0x1CBA18u;
    SET_GPR_U32(ctx, 31, 0x1CBA20u);
    ctx->pc = 0x1CBA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA18u;
            // 0x1cba1c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA20u; }
        if (ctx->pc != 0x1CBA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA20u; }
        if (ctx->pc != 0x1CBA20u) { return; }
    }
    ctx->pc = 0x1CBA20u;
label_1cba20:
    // 0x1cba20: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cba20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cba24:
    // 0x1cba24: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x1cba24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_1cba28:
    // 0x1cba28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cba28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cba2c:
    // 0x1cba2c: 0x0  nop
    ctx->pc = 0x1cba2cu;
    // NOP
label_1cba30:
    // 0x1cba30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cba30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cba34:
    // 0x1cba34: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1cba34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_1cba38:
    // 0x1cba38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cba3c:
    // 0x1cba3c: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x1cba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_1cba40:
    // 0x1cba40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cba40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cba44:
    // 0x1cba44: 0x0  nop
    ctx->pc = 0x1cba44u;
    // NOP
label_1cba48:
    // 0x1cba48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cba48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cba4c:
    // 0x1cba4c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1cba4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_1cba50:
    // 0x1cba50: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cba54:
    // 0x1cba54: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1cba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_1cba58:
    // 0x1cba58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cba58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cba5c:
    // 0x1cba5c: 0x0  nop
    ctx->pc = 0x1cba5cu;
    // NOP
label_1cba60:
    // 0x1cba60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cba60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cba64:
    // 0x1cba64: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x1cba64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_1cba68:
    // 0x1cba68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cba6c:
    // 0x1cba6c: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x1cba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_1cba70:
    // 0x1cba70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cba70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cba74:
    // 0x1cba74: 0x0  nop
    ctx->pc = 0x1cba74u;
    // NOP
label_1cba78:
    // 0x1cba78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cba78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cba7c:
    // 0x1cba7c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x1cba7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_1cba80:
    // 0x1cba80: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1cba80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1cba84:
    // 0x1cba84: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1cba88:
    if (ctx->pc == 0x1CBA88u) {
        ctx->pc = 0x1CBA88u;
            // 0x1cba88: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->pc = 0x1CBA8Cu;
        goto label_1cba8c;
    }
    ctx->pc = 0x1CBA84u;
    {
        const bool branch_taken_0x1cba84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA84u;
            // 0x1cba88: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba84) {
            ctx->pc = 0x1CBAA8u;
            goto label_1cbaa8;
        }
    }
    ctx->pc = 0x1CBA8Cu;
label_1cba8c:
    // 0x1cba8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cba90:
    // 0x1cba90: 0x2605007c  addiu       $a1, $s0, 0x7C
    ctx->pc = 0x1cba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
label_1cba94:
    // 0x1cba94: 0x24c699a0  addiu       $a2, $a2, -0x6660
    ctx->pc = 0x1cba94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941088));
label_1cba98:
    // 0x1cba98: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cba98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cba9c:
    // 0x1cba9c: 0xc053ca4  jal         func_14F290
label_1cbaa0:
    if (ctx->pc == 0x1CBAA0u) {
        ctx->pc = 0x1CBAA0u;
            // 0x1cbaa0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAA4u;
        goto label_1cbaa4;
    }
    ctx->pc = 0x1CBA9Cu;
    SET_GPR_U32(ctx, 31, 0x1CBAA4u);
    ctx->pc = 0x1CBAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA9Cu;
            // 0x1cbaa0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAA4u; }
        if (ctx->pc != 0x1CBAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAA4u; }
        if (ctx->pc != 0x1CBAA4u) { return; }
    }
    ctx->pc = 0x1CBAA4u;
label_1cbaa4:
    // 0x1cbaa4: 0x0  nop
    ctx->pc = 0x1cbaa4u;
    // NOP
label_1cbaa8:
    // 0x1cbaa8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbaac:
    // 0x1cbaac: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x1cbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_1cbab0:
    // 0x1cbab0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbab4:
    // 0x1cbab4: 0x0  nop
    ctx->pc = 0x1cbab4u;
    // NOP
label_1cbab8:
    // 0x1cbab8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbabc:
    // 0x1cbabc: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1cbabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1cbac0:
    // 0x1cbac0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbac4:
    // 0x1cbac4: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x1cbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_1cbac8:
    // 0x1cbac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbacc:
    // 0x1cbacc: 0x0  nop
    ctx->pc = 0x1cbaccu;
    // NOP
label_1cbad0:
    // 0x1cbad0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbad4:
    // 0x1cbad4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1cbad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1cbad8:
    // 0x1cbad8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbadc:
    // 0x1cbadc: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x1cbadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
label_1cbae0:
    // 0x1cbae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbae4:
    // 0x1cbae4: 0x0  nop
    ctx->pc = 0x1cbae4u;
    // NOP
label_1cbae8:
    // 0x1cbae8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbaec:
    // 0x1cbaec: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1cbaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1cbaf0:
    // 0x1cbaf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbaf4:
    // 0x1cbaf4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1cbaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1cbaf8:
    // 0x1cbaf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbaf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbafc:
    // 0x1cbafc: 0x0  nop
    ctx->pc = 0x1cbafcu;
    // NOP
label_1cbb00:
    // 0x1cbb00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbb00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbb04:
    // 0x1cbb04: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1cbb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1cbb08:
    // 0x1cbb08: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1cbb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1cbb0c:
    // 0x1cbb0c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1cbb10:
    if (ctx->pc == 0x1CBB10u) {
        ctx->pc = 0x1CBB10u;
            // 0x1cbb10: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->pc = 0x1CBB14u;
        goto label_1cbb14;
    }
    ctx->pc = 0x1CBB0Cu;
    {
        const bool branch_taken_0x1cbb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB0Cu;
            // 0x1cbb10: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb0c) {
            ctx->pc = 0x1CBB30u;
            goto label_1cbb30;
        }
    }
    ctx->pc = 0x1CBB14u;
label_1cbb14:
    // 0x1cbb14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cbb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cbb18:
    // 0x1cbb18: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1cbb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1cbb1c:
    // 0x1cbb1c: 0x24c699a0  addiu       $a2, $a2, -0x6660
    ctx->pc = 0x1cbb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941088));
label_1cbb20:
    // 0x1cbb20: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cbb20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb24:
    // 0x1cbb24: 0xc053ca4  jal         func_14F290
label_1cbb28:
    if (ctx->pc == 0x1CBB28u) {
        ctx->pc = 0x1CBB28u;
            // 0x1cbb28: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB2Cu;
        goto label_1cbb2c;
    }
    ctx->pc = 0x1CBB24u;
    SET_GPR_U32(ctx, 31, 0x1CBB2Cu);
    ctx->pc = 0x1CBB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB24u;
            // 0x1cbb28: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB2Cu; }
        if (ctx->pc != 0x1CBB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB2Cu; }
        if (ctx->pc != 0x1CBB2Cu) { return; }
    }
    ctx->pc = 0x1CBB2Cu;
label_1cbb2c:
    // 0x1cbb2c: 0x0  nop
    ctx->pc = 0x1cbb2cu;
    // NOP
label_1cbb30:
    // 0x1cbb30: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbb34:
    // 0x1cbb34: 0x2463ffc4  addiu       $v1, $v1, -0x3C
    ctx->pc = 0x1cbb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
label_1cbb38:
    // 0x1cbb38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbb38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbb3c:
    // 0x1cbb3c: 0x0  nop
    ctx->pc = 0x1cbb3cu;
    // NOP
label_1cbb40:
    // 0x1cbb40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbb40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbb44:
    // 0x1cbb44: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1cbb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_1cbb48:
    // 0x1cbb48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbb4c:
    // 0x1cbb4c: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x1cbb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_1cbb50:
    // 0x1cbb50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbb50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbb54:
    // 0x1cbb54: 0x0  nop
    ctx->pc = 0x1cbb54u;
    // NOP
label_1cbb58:
    // 0x1cbb58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbb58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbb5c:
    // 0x1cbb5c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1cbb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_1cbb60:
    // 0x1cbb60: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbb64:
    // 0x1cbb64: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_1cbb68:
    // 0x1cbb68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbb68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbb6c:
    // 0x1cbb6c: 0x0  nop
    ctx->pc = 0x1cbb6cu;
    // NOP
label_1cbb70:
    // 0x1cbb70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbb74:
    // 0x1cbb74: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1cbb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_1cbb78:
    // 0x1cbb78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbb7c:
    // 0x1cbb7c: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x1cbb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_1cbb80:
    // 0x1cbb80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbb80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbb84:
    // 0x1cbb84: 0x0  nop
    ctx->pc = 0x1cbb84u;
    // NOP
label_1cbb88:
    // 0x1cbb88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbb88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbb8c:
    // 0x1cbb8c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x1cbb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_1cbb90:
    // 0x1cbb90: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1cbb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1cbb94:
    // 0x1cbb94: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1cbb98:
    if (ctx->pc == 0x1CBB98u) {
        ctx->pc = 0x1CBB98u;
            // 0x1cbb98: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->pc = 0x1CBB9Cu;
        goto label_1cbb9c;
    }
    ctx->pc = 0x1CBB94u;
    {
        const bool branch_taken_0x1cbb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB94u;
            // 0x1cbb98: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb94) {
            ctx->pc = 0x1CBBB8u;
            goto label_1cbbb8;
        }
    }
    ctx->pc = 0x1CBB9Cu;
label_1cbb9c:
    // 0x1cbb9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cbb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cbba0:
    // 0x1cbba0: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x1cbba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_1cbba4:
    // 0x1cbba4: 0x24c699a0  addiu       $a2, $a2, -0x6660
    ctx->pc = 0x1cbba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941088));
label_1cbba8:
    // 0x1cbba8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cbba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbbac:
    // 0x1cbbac: 0xc053ca4  jal         func_14F290
label_1cbbb0:
    if (ctx->pc == 0x1CBBB0u) {
        ctx->pc = 0x1CBBB0u;
            // 0x1cbbb0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBB4u;
        goto label_1cbbb4;
    }
    ctx->pc = 0x1CBBACu;
    SET_GPR_U32(ctx, 31, 0x1CBBB4u);
    ctx->pc = 0x1CBBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBBACu;
            // 0x1cbbb0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBBB4u; }
        if (ctx->pc != 0x1CBBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBBB4u; }
        if (ctx->pc != 0x1CBBB4u) { return; }
    }
    ctx->pc = 0x1CBBB4u;
label_1cbbb4:
    // 0x1cbbb4: 0x0  nop
    ctx->pc = 0x1cbbb4u;
    // NOP
label_1cbbb8:
    // 0x1cbbb8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbbbc:
    // 0x1cbbbc: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x1cbbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_1cbbc0:
    // 0x1cbbc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbbc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbbc4:
    // 0x1cbbc4: 0x0  nop
    ctx->pc = 0x1cbbc4u;
    // NOP
label_1cbbc8:
    // 0x1cbbc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbbc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbbcc:
    // 0x1cbbcc: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x1cbbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_1cbbd0:
    // 0x1cbbd0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbbd4:
    // 0x1cbbd4: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x1cbbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_1cbbd8:
    // 0x1cbbd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbbd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbbdc:
    // 0x1cbbdc: 0x0  nop
    ctx->pc = 0x1cbbdcu;
    // NOP
label_1cbbe0:
    // 0x1cbbe0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbbe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbbe4:
    // 0x1cbbe4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1cbbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_1cbbe8:
    // 0x1cbbe8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbbec:
    // 0x1cbbec: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1cbbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_1cbbf0:
    // 0x1cbbf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbbf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbbf4:
    // 0x1cbbf4: 0x0  nop
    ctx->pc = 0x1cbbf4u;
    // NOP
label_1cbbf8:
    // 0x1cbbf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbbf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbbfc:
    // 0x1cbbfc: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1cbbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_1cbc00:
    // 0x1cbc00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbc04:
    // 0x1cbc04: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x1cbc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_1cbc08:
    // 0x1cbc08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbc08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbc0c:
    // 0x1cbc0c: 0x0  nop
    ctx->pc = 0x1cbc0cu;
    // NOP
label_1cbc10:
    // 0x1cbc10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbc10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbc14:
    // 0x1cbc14: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1cbc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_1cbc18:
    // 0x1cbc18: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1cbc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1cbc1c:
    // 0x1cbc1c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1cbc20:
    if (ctx->pc == 0x1CBC20u) {
        ctx->pc = 0x1CBC20u;
            // 0x1cbc20: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->pc = 0x1CBC24u;
        goto label_1cbc24;
    }
    ctx->pc = 0x1CBC1Cu;
    {
        const bool branch_taken_0x1cbc1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC1Cu;
            // 0x1cbc20: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc1c) {
            ctx->pc = 0x1CBC40u;
            goto label_1cbc40;
        }
    }
    ctx->pc = 0x1CBC24u;
label_1cbc24:
    // 0x1cbc24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cbc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cbc28:
    // 0x1cbc28: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x1cbc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_1cbc2c:
    // 0x1cbc2c: 0x24c699a0  addiu       $a2, $a2, -0x6660
    ctx->pc = 0x1cbc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941088));
label_1cbc30:
    // 0x1cbc30: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cbc30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc34:
    // 0x1cbc34: 0xc053ca4  jal         func_14F290
label_1cbc38:
    if (ctx->pc == 0x1CBC38u) {
        ctx->pc = 0x1CBC38u;
            // 0x1cbc38: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC3Cu;
        goto label_1cbc3c;
    }
    ctx->pc = 0x1CBC34u;
    SET_GPR_U32(ctx, 31, 0x1CBC3Cu);
    ctx->pc = 0x1CBC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC34u;
            // 0x1cbc38: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC3Cu; }
        if (ctx->pc != 0x1CBC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC3Cu; }
        if (ctx->pc != 0x1CBC3Cu) { return; }
    }
    ctx->pc = 0x1CBC3Cu;
label_1cbc3c:
    // 0x1cbc3c: 0x0  nop
    ctx->pc = 0x1cbc3cu;
    // NOP
label_1cbc40:
    // 0x1cbc40: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbc44:
    // 0x1cbc44: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1cbc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
label_1cbc48:
    // 0x1cbc48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbc48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbc4c:
    // 0x1cbc4c: 0x0  nop
    ctx->pc = 0x1cbc4cu;
    // NOP
label_1cbc50:
    // 0x1cbc50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbc50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbc54:
    // 0x1cbc54: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x1cbc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_1cbc58:
    // 0x1cbc58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbc5c:
    // 0x1cbc5c: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x1cbc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_1cbc60:
    // 0x1cbc60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbc60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbc64:
    // 0x1cbc64: 0x0  nop
    ctx->pc = 0x1cbc64u;
    // NOP
label_1cbc68:
    // 0x1cbc68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbc68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbc6c:
    // 0x1cbc6c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x1cbc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_1cbc70:
    // 0x1cbc70: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbc74:
    // 0x1cbc74: 0x2463ffc4  addiu       $v1, $v1, -0x3C
    ctx->pc = 0x1cbc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
label_1cbc78:
    // 0x1cbc78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbc78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbc7c:
    // 0x1cbc7c: 0x0  nop
    ctx->pc = 0x1cbc7cu;
    // NOP
label_1cbc80:
    // 0x1cbc80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbc80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbc84:
    // 0x1cbc84: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x1cbc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_1cbc88:
    // 0x1cbc88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbc8c:
    // 0x1cbc8c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1cbc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1cbc90:
    // 0x1cbc90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbc90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbc94:
    // 0x1cbc94: 0x0  nop
    ctx->pc = 0x1cbc94u;
    // NOP
label_1cbc98:
    // 0x1cbc98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbc98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbc9c:
    // 0x1cbc9c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x1cbc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_1cbca0:
    // 0x1cbca0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1cbca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1cbca4:
    // 0x1cbca4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1cbca8:
    if (ctx->pc == 0x1CBCA8u) {
        ctx->pc = 0x1CBCA8u;
            // 0x1cbca8: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->pc = 0x1CBCACu;
        goto label_1cbcac;
    }
    ctx->pc = 0x1CBCA4u;
    {
        const bool branch_taken_0x1cbca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCA4u;
            // 0x1cbca8: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbca4) {
            ctx->pc = 0x1CBCC8u;
            goto label_1cbcc8;
        }
    }
    ctx->pc = 0x1CBCACu;
label_1cbcac:
    // 0x1cbcac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cbcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cbcb0:
    // 0x1cbcb0: 0x2605005c  addiu       $a1, $s0, 0x5C
    ctx->pc = 0x1cbcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
label_1cbcb4:
    // 0x1cbcb4: 0x24c699a0  addiu       $a2, $a2, -0x6660
    ctx->pc = 0x1cbcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941088));
label_1cbcb8:
    // 0x1cbcb8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cbcb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbcbc:
    // 0x1cbcbc: 0xc053ca4  jal         func_14F290
label_1cbcc0:
    if (ctx->pc == 0x1CBCC0u) {
        ctx->pc = 0x1CBCC0u;
            // 0x1cbcc0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCC4u;
        goto label_1cbcc4;
    }
    ctx->pc = 0x1CBCBCu;
    SET_GPR_U32(ctx, 31, 0x1CBCC4u);
    ctx->pc = 0x1CBCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCBCu;
            // 0x1cbcc0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCC4u; }
        if (ctx->pc != 0x1CBCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCC4u; }
        if (ctx->pc != 0x1CBCC4u) { return; }
    }
    ctx->pc = 0x1CBCC4u;
label_1cbcc4:
    // 0x1cbcc4: 0x0  nop
    ctx->pc = 0x1cbcc4u;
    // NOP
label_1cbcc8:
    // 0x1cbcc8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbccc:
    // 0x1cbccc: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1cbcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_1cbcd0:
    // 0x1cbcd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbcd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbcd4:
    // 0x1cbcd4: 0x0  nop
    ctx->pc = 0x1cbcd4u;
    // NOP
label_1cbcd8:
    // 0x1cbcd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbcd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbcdc:
    // 0x1cbcdc: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x1cbcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
label_1cbce0:
    // 0x1cbce0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbce4:
    // 0x1cbce4: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x1cbce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_1cbce8:
    // 0x1cbce8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbcec:
    // 0x1cbcec: 0x0  nop
    ctx->pc = 0x1cbcecu;
    // NOP
label_1cbcf0:
    // 0x1cbcf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbcf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbcf4:
    // 0x1cbcf4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1cbcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_1cbcf8:
    // 0x1cbcf8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbcfc:
    // 0x1cbcfc: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1cbcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_1cbd00:
    // 0x1cbd00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbd00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbd04:
    // 0x1cbd04: 0x0  nop
    ctx->pc = 0x1cbd04u;
    // NOP
label_1cbd08:
    // 0x1cbd08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbd08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbd0c:
    // 0x1cbd0c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1cbd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_1cbd10:
    // 0x1cbd10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbd14:
    // 0x1cbd14: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1cbd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1cbd18:
    // 0x1cbd18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbd18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbd1c:
    // 0x1cbd1c: 0x0  nop
    ctx->pc = 0x1cbd1cu;
    // NOP
label_1cbd20:
    // 0x1cbd20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbd20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbd24:
    // 0x1cbd24: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x1cbd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_1cbd28:
    // 0x1cbd28: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1cbd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1cbd2c:
    // 0x1cbd2c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1cbd30:
    if (ctx->pc == 0x1CBD30u) {
        ctx->pc = 0x1CBD30u;
            // 0x1cbd30: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->pc = 0x1CBD34u;
        goto label_1cbd34;
    }
    ctx->pc = 0x1CBD2Cu;
    {
        const bool branch_taken_0x1cbd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD2Cu;
            // 0x1cbd30: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd2c) {
            ctx->pc = 0x1CBD50u;
            goto label_1cbd50;
        }
    }
    ctx->pc = 0x1CBD34u;
label_1cbd34:
    // 0x1cbd34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cbd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cbd38:
    // 0x1cbd38: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x1cbd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1cbd3c:
    // 0x1cbd3c: 0x24c699a0  addiu       $a2, $a2, -0x6660
    ctx->pc = 0x1cbd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941088));
label_1cbd40:
    // 0x1cbd40: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cbd40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd44:
    // 0x1cbd44: 0xc053ca4  jal         func_14F290
label_1cbd48:
    if (ctx->pc == 0x1CBD48u) {
        ctx->pc = 0x1CBD48u;
            // 0x1cbd48: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD4Cu;
        goto label_1cbd4c;
    }
    ctx->pc = 0x1CBD44u;
    SET_GPR_U32(ctx, 31, 0x1CBD4Cu);
    ctx->pc = 0x1CBD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD44u;
            // 0x1cbd48: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBD4Cu; }
        if (ctx->pc != 0x1CBD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBD4Cu; }
        if (ctx->pc != 0x1CBD4Cu) { return; }
    }
    ctx->pc = 0x1CBD4Cu;
label_1cbd4c:
    // 0x1cbd4c: 0x0  nop
    ctx->pc = 0x1cbd4cu;
    // NOP
label_1cbd50:
    // 0x1cbd50: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbd54:
    // 0x1cbd54: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1cbd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
label_1cbd58:
    // 0x1cbd58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbd58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbd5c:
    // 0x1cbd5c: 0x0  nop
    ctx->pc = 0x1cbd5cu;
    // NOP
label_1cbd60:
    // 0x1cbd60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbd60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbd64:
    // 0x1cbd64: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x1cbd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_1cbd68:
    // 0x1cbd68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbd6c:
    // 0x1cbd6c: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x1cbd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
label_1cbd70:
    // 0x1cbd70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbd70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbd74:
    // 0x1cbd74: 0x0  nop
    ctx->pc = 0x1cbd74u;
    // NOP
label_1cbd78:
    // 0x1cbd78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbd78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbd7c:
    // 0x1cbd7c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1cbd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_1cbd80:
    // 0x1cbd80: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbd84:
    // 0x1cbd84: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1cbd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
label_1cbd88:
    // 0x1cbd88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbd88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbd8c:
    // 0x1cbd8c: 0x0  nop
    ctx->pc = 0x1cbd8cu;
    // NOP
label_1cbd90:
    // 0x1cbd90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbd90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbd94:
    // 0x1cbd94: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x1cbd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_1cbd98:
    // 0x1cbd98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbd9c:
    // 0x1cbd9c: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x1cbd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_1cbda0:
    // 0x1cbda0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbda0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbda4:
    // 0x1cbda4: 0x0  nop
    ctx->pc = 0x1cbda4u;
    // NOP
label_1cbda8:
    // 0x1cbda8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbda8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbdac:
    // 0x1cbdac: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x1cbdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_1cbdb0:
    // 0x1cbdb0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1cbdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1cbdb4:
    // 0x1cbdb4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1cbdb8:
    if (ctx->pc == 0x1CBDB8u) {
        ctx->pc = 0x1CBDB8u;
            // 0x1cbdb8: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->pc = 0x1CBDBCu;
        goto label_1cbdbc;
    }
    ctx->pc = 0x1CBDB4u;
    {
        const bool branch_taken_0x1cbdb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDB4u;
            // 0x1cbdb8: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdb4) {
            ctx->pc = 0x1CBDD8u;
            goto label_1cbdd8;
        }
    }
    ctx->pc = 0x1CBDBCu;
label_1cbdbc:
    // 0x1cbdbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cbdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cbdc0:
    // 0x1cbdc0: 0x2605008c  addiu       $a1, $s0, 0x8C
    ctx->pc = 0x1cbdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
label_1cbdc4:
    // 0x1cbdc4: 0x24c699a0  addiu       $a2, $a2, -0x6660
    ctx->pc = 0x1cbdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941088));
label_1cbdc8:
    // 0x1cbdc8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cbdc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbdcc:
    // 0x1cbdcc: 0xc053ca4  jal         func_14F290
label_1cbdd0:
    if (ctx->pc == 0x1CBDD0u) {
        ctx->pc = 0x1CBDD0u;
            // 0x1cbdd0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDD4u;
        goto label_1cbdd4;
    }
    ctx->pc = 0x1CBDCCu;
    SET_GPR_U32(ctx, 31, 0x1CBDD4u);
    ctx->pc = 0x1CBDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDCCu;
            // 0x1cbdd0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDD4u; }
        if (ctx->pc != 0x1CBDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDD4u; }
        if (ctx->pc != 0x1CBDD4u) { return; }
    }
    ctx->pc = 0x1CBDD4u;
label_1cbdd4:
    // 0x1cbdd4: 0x0  nop
    ctx->pc = 0x1cbdd4u;
    // NOP
label_1cbdd8:
    // 0x1cbdd8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbddc:
    // 0x1cbddc: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1cbddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_1cbde0:
    // 0x1cbde0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbde0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbde4:
    // 0x1cbde4: 0x0  nop
    ctx->pc = 0x1cbde4u;
    // NOP
label_1cbde8:
    // 0x1cbde8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbde8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbdec:
    // 0x1cbdec: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x1cbdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_1cbdf0:
    // 0x1cbdf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbdf4:
    // 0x1cbdf4: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x1cbdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
label_1cbdf8:
    // 0x1cbdf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbdf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbdfc:
    // 0x1cbdfc: 0x0  nop
    ctx->pc = 0x1cbdfcu;
    // NOP
label_1cbe00:
    // 0x1cbe00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbe00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbe04:
    // 0x1cbe04: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x1cbe04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_1cbe08:
    // 0x1cbe08: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1cbe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1cbe0c:
    // 0x1cbe0c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x1cbe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_1cbe10:
    // 0x1cbe10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbe10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbe14:
    // 0x1cbe14: 0x0  nop
    ctx->pc = 0x1cbe14u;
    // NOP
label_1cbe18:
    // 0x1cbe18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbe18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbe1c:
    // 0x1cbe1c: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x1cbe1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
label_1cbe20:
    // 0x1cbe20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cbe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1cbe24:
    // 0x1cbe24: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x1cbe24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_1cbe28:
    // 0x1cbe28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbe28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbe2c:
    // 0x1cbe2c: 0x0  nop
    ctx->pc = 0x1cbe2cu;
    // NOP
label_1cbe30:
    // 0x1cbe30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbe30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbe34:
    // 0x1cbe34: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x1cbe34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
label_1cbe38:
    // 0x1cbe38: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1cbe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1cbe3c:
    // 0x1cbe3c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1cbe40:
    if (ctx->pc == 0x1CBE40u) {
        ctx->pc = 0x1CBE40u;
            // 0x1cbe40: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->pc = 0x1CBE44u;
        goto label_1cbe44;
    }
    ctx->pc = 0x1CBE3Cu;
    {
        const bool branch_taken_0x1cbe3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE3Cu;
            // 0x1cbe40: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe3c) {
            ctx->pc = 0x1CBE60u;
            goto label_1cbe60;
        }
    }
    ctx->pc = 0x1CBE44u;
label_1cbe44:
    // 0x1cbe44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cbe44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cbe48:
    // 0x1cbe48: 0x2605009c  addiu       $a1, $s0, 0x9C
    ctx->pc = 0x1cbe48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
label_1cbe4c:
    // 0x1cbe4c: 0x24c699a0  addiu       $a2, $a2, -0x6660
    ctx->pc = 0x1cbe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941088));
label_1cbe50:
    // 0x1cbe50: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cbe50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe54:
    // 0x1cbe54: 0xc053ca4  jal         func_14F290
label_1cbe58:
    if (ctx->pc == 0x1CBE58u) {
        ctx->pc = 0x1CBE58u;
            // 0x1cbe58: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE5Cu;
        goto label_1cbe5c;
    }
    ctx->pc = 0x1CBE54u;
    SET_GPR_U32(ctx, 31, 0x1CBE5Cu);
    ctx->pc = 0x1CBE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE54u;
            // 0x1cbe58: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE5Cu; }
        if (ctx->pc != 0x1CBE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE5Cu; }
        if (ctx->pc != 0x1CBE5Cu) { return; }
    }
    ctx->pc = 0x1CBE5Cu;
label_1cbe5c:
    // 0x1cbe5c: 0x0  nop
    ctx->pc = 0x1cbe5cu;
    // NOP
label_1cbe60:
    // 0x1cbe60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cbe60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbe64:
    // 0x1cbe64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cbe64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbe68:
    // 0x1cbe68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cbe68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbe6c:
    // 0x1cbe6c: 0x3e00008  jr          $ra
label_1cbe70:
    if (ctx->pc == 0x1CBE70u) {
        ctx->pc = 0x1CBE70u;
            // 0x1cbe70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1CBE74u;
        goto label_fallthrough_0x1cbe6c;
    }
    ctx->pc = 0x1CBE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE6Cu;
            // 0x1cbe70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9CC0u: goto label_1c9cc0;
            case 0x1C9CC4u: goto label_1c9cc4;
            case 0x1C9CC8u: goto label_1c9cc8;
            case 0x1C9CCCu: goto label_1c9ccc;
            case 0x1C9CD0u: goto label_1c9cd0;
            case 0x1C9CD4u: goto label_1c9cd4;
            case 0x1C9CD8u: goto label_1c9cd8;
            case 0x1C9CDCu: goto label_1c9cdc;
            case 0x1C9CE0u: goto label_1c9ce0;
            case 0x1C9CE4u: goto label_1c9ce4;
            case 0x1C9CE8u: goto label_1c9ce8;
            case 0x1C9CECu: goto label_1c9cec;
            case 0x1C9CF0u: goto label_1c9cf0;
            case 0x1C9CF4u: goto label_1c9cf4;
            case 0x1C9CF8u: goto label_1c9cf8;
            case 0x1C9CFCu: goto label_1c9cfc;
            case 0x1C9D00u: goto label_1c9d00;
            case 0x1C9D04u: goto label_1c9d04;
            case 0x1C9D08u: goto label_1c9d08;
            case 0x1C9D0Cu: goto label_1c9d0c;
            case 0x1C9D10u: goto label_1c9d10;
            case 0x1C9D14u: goto label_1c9d14;
            case 0x1C9D18u: goto label_1c9d18;
            case 0x1C9D1Cu: goto label_1c9d1c;
            case 0x1C9D20u: goto label_1c9d20;
            case 0x1C9D24u: goto label_1c9d24;
            case 0x1C9D28u: goto label_1c9d28;
            case 0x1C9D2Cu: goto label_1c9d2c;
            case 0x1C9D30u: goto label_1c9d30;
            case 0x1C9D34u: goto label_1c9d34;
            case 0x1C9D38u: goto label_1c9d38;
            case 0x1C9D3Cu: goto label_1c9d3c;
            case 0x1C9D40u: goto label_1c9d40;
            case 0x1C9D44u: goto label_1c9d44;
            case 0x1C9D48u: goto label_1c9d48;
            case 0x1C9D4Cu: goto label_1c9d4c;
            case 0x1C9D50u: goto label_1c9d50;
            case 0x1C9D54u: goto label_1c9d54;
            case 0x1C9D58u: goto label_1c9d58;
            case 0x1C9D5Cu: goto label_1c9d5c;
            case 0x1C9D60u: goto label_1c9d60;
            case 0x1C9D64u: goto label_1c9d64;
            case 0x1C9D68u: goto label_1c9d68;
            case 0x1C9D6Cu: goto label_1c9d6c;
            case 0x1C9D70u: goto label_1c9d70;
            case 0x1C9D74u: goto label_1c9d74;
            case 0x1C9D78u: goto label_1c9d78;
            case 0x1C9D7Cu: goto label_1c9d7c;
            case 0x1C9D80u: goto label_1c9d80;
            case 0x1C9D84u: goto label_1c9d84;
            case 0x1C9D88u: goto label_1c9d88;
            case 0x1C9D8Cu: goto label_1c9d8c;
            case 0x1C9D90u: goto label_1c9d90;
            case 0x1C9D94u: goto label_1c9d94;
            case 0x1C9D98u: goto label_1c9d98;
            case 0x1C9D9Cu: goto label_1c9d9c;
            case 0x1C9DA0u: goto label_1c9da0;
            case 0x1C9DA4u: goto label_1c9da4;
            case 0x1C9DA8u: goto label_1c9da8;
            case 0x1C9DACu: goto label_1c9dac;
            case 0x1C9DB0u: goto label_1c9db0;
            case 0x1C9DB4u: goto label_1c9db4;
            case 0x1C9DB8u: goto label_1c9db8;
            case 0x1C9DBCu: goto label_1c9dbc;
            case 0x1C9DC0u: goto label_1c9dc0;
            case 0x1C9DC4u: goto label_1c9dc4;
            case 0x1C9DC8u: goto label_1c9dc8;
            case 0x1C9DCCu: goto label_1c9dcc;
            case 0x1C9DD0u: goto label_1c9dd0;
            case 0x1C9DD4u: goto label_1c9dd4;
            case 0x1C9DD8u: goto label_1c9dd8;
            case 0x1C9DDCu: goto label_1c9ddc;
            case 0x1C9DE0u: goto label_1c9de0;
            case 0x1C9DE4u: goto label_1c9de4;
            case 0x1C9DE8u: goto label_1c9de8;
            case 0x1C9DECu: goto label_1c9dec;
            case 0x1C9DF0u: goto label_1c9df0;
            case 0x1C9DF4u: goto label_1c9df4;
            case 0x1C9DF8u: goto label_1c9df8;
            case 0x1C9DFCu: goto label_1c9dfc;
            case 0x1C9E00u: goto label_1c9e00;
            case 0x1C9E04u: goto label_1c9e04;
            case 0x1C9E08u: goto label_1c9e08;
            case 0x1C9E0Cu: goto label_1c9e0c;
            case 0x1C9E10u: goto label_1c9e10;
            case 0x1C9E14u: goto label_1c9e14;
            case 0x1C9E18u: goto label_1c9e18;
            case 0x1C9E1Cu: goto label_1c9e1c;
            case 0x1C9E20u: goto label_1c9e20;
            case 0x1C9E24u: goto label_1c9e24;
            case 0x1C9E28u: goto label_1c9e28;
            case 0x1C9E2Cu: goto label_1c9e2c;
            case 0x1C9E30u: goto label_1c9e30;
            case 0x1C9E34u: goto label_1c9e34;
            case 0x1C9E38u: goto label_1c9e38;
            case 0x1C9E3Cu: goto label_1c9e3c;
            case 0x1C9E40u: goto label_1c9e40;
            case 0x1C9E44u: goto label_1c9e44;
            case 0x1C9E48u: goto label_1c9e48;
            case 0x1C9E4Cu: goto label_1c9e4c;
            case 0x1C9E50u: goto label_1c9e50;
            case 0x1C9E54u: goto label_1c9e54;
            case 0x1C9E58u: goto label_1c9e58;
            case 0x1C9E5Cu: goto label_1c9e5c;
            case 0x1C9E60u: goto label_1c9e60;
            case 0x1C9E64u: goto label_1c9e64;
            case 0x1C9E68u: goto label_1c9e68;
            case 0x1C9E6Cu: goto label_1c9e6c;
            case 0x1C9E70u: goto label_1c9e70;
            case 0x1C9E74u: goto label_1c9e74;
            case 0x1C9E78u: goto label_1c9e78;
            case 0x1C9E7Cu: goto label_1c9e7c;
            case 0x1C9E80u: goto label_1c9e80;
            case 0x1C9E84u: goto label_1c9e84;
            case 0x1C9E88u: goto label_1c9e88;
            case 0x1C9E8Cu: goto label_1c9e8c;
            case 0x1C9E90u: goto label_1c9e90;
            case 0x1C9E94u: goto label_1c9e94;
            case 0x1C9E98u: goto label_1c9e98;
            case 0x1C9E9Cu: goto label_1c9e9c;
            case 0x1C9EA0u: goto label_1c9ea0;
            case 0x1C9EA4u: goto label_1c9ea4;
            case 0x1C9EA8u: goto label_1c9ea8;
            case 0x1C9EACu: goto label_1c9eac;
            case 0x1C9EB0u: goto label_1c9eb0;
            case 0x1C9EB4u: goto label_1c9eb4;
            case 0x1C9EB8u: goto label_1c9eb8;
            case 0x1C9EBCu: goto label_1c9ebc;
            case 0x1C9EC0u: goto label_1c9ec0;
            case 0x1C9EC4u: goto label_1c9ec4;
            case 0x1C9EC8u: goto label_1c9ec8;
            case 0x1C9ECCu: goto label_1c9ecc;
            case 0x1C9ED0u: goto label_1c9ed0;
            case 0x1C9ED4u: goto label_1c9ed4;
            case 0x1C9ED8u: goto label_1c9ed8;
            case 0x1C9EDCu: goto label_1c9edc;
            case 0x1C9EE0u: goto label_1c9ee0;
            case 0x1C9EE4u: goto label_1c9ee4;
            case 0x1C9EE8u: goto label_1c9ee8;
            case 0x1C9EECu: goto label_1c9eec;
            case 0x1C9EF0u: goto label_1c9ef0;
            case 0x1C9EF4u: goto label_1c9ef4;
            case 0x1C9EF8u: goto label_1c9ef8;
            case 0x1C9EFCu: goto label_1c9efc;
            case 0x1C9F00u: goto label_1c9f00;
            case 0x1C9F04u: goto label_1c9f04;
            case 0x1C9F08u: goto label_1c9f08;
            case 0x1C9F0Cu: goto label_1c9f0c;
            case 0x1C9F10u: goto label_1c9f10;
            case 0x1C9F14u: goto label_1c9f14;
            case 0x1C9F18u: goto label_1c9f18;
            case 0x1C9F1Cu: goto label_1c9f1c;
            case 0x1C9F20u: goto label_1c9f20;
            case 0x1C9F24u: goto label_1c9f24;
            case 0x1C9F28u: goto label_1c9f28;
            case 0x1C9F2Cu: goto label_1c9f2c;
            case 0x1C9F30u: goto label_1c9f30;
            case 0x1C9F34u: goto label_1c9f34;
            case 0x1C9F38u: goto label_1c9f38;
            case 0x1C9F3Cu: goto label_1c9f3c;
            case 0x1C9F40u: goto label_1c9f40;
            case 0x1C9F44u: goto label_1c9f44;
            case 0x1C9F48u: goto label_1c9f48;
            case 0x1C9F4Cu: goto label_1c9f4c;
            case 0x1C9F50u: goto label_1c9f50;
            case 0x1C9F54u: goto label_1c9f54;
            case 0x1C9F58u: goto label_1c9f58;
            case 0x1C9F5Cu: goto label_1c9f5c;
            case 0x1C9F60u: goto label_1c9f60;
            case 0x1C9F64u: goto label_1c9f64;
            case 0x1C9F68u: goto label_1c9f68;
            case 0x1C9F6Cu: goto label_1c9f6c;
            case 0x1C9F70u: goto label_1c9f70;
            case 0x1C9F74u: goto label_1c9f74;
            case 0x1C9F78u: goto label_1c9f78;
            case 0x1C9F7Cu: goto label_1c9f7c;
            case 0x1C9F80u: goto label_1c9f80;
            case 0x1C9F84u: goto label_1c9f84;
            case 0x1C9F88u: goto label_1c9f88;
            case 0x1C9F8Cu: goto label_1c9f8c;
            case 0x1C9F90u: goto label_1c9f90;
            case 0x1C9F94u: goto label_1c9f94;
            case 0x1C9F98u: goto label_1c9f98;
            case 0x1C9F9Cu: goto label_1c9f9c;
            case 0x1C9FA0u: goto label_1c9fa0;
            case 0x1C9FA4u: goto label_1c9fa4;
            case 0x1C9FA8u: goto label_1c9fa8;
            case 0x1C9FACu: goto label_1c9fac;
            case 0x1C9FB0u: goto label_1c9fb0;
            case 0x1C9FB4u: goto label_1c9fb4;
            case 0x1C9FB8u: goto label_1c9fb8;
            case 0x1C9FBCu: goto label_1c9fbc;
            case 0x1C9FC0u: goto label_1c9fc0;
            case 0x1C9FC4u: goto label_1c9fc4;
            case 0x1C9FC8u: goto label_1c9fc8;
            case 0x1C9FCCu: goto label_1c9fcc;
            case 0x1C9FD0u: goto label_1c9fd0;
            case 0x1C9FD4u: goto label_1c9fd4;
            case 0x1C9FD8u: goto label_1c9fd8;
            case 0x1C9FDCu: goto label_1c9fdc;
            case 0x1C9FE0u: goto label_1c9fe0;
            case 0x1C9FE4u: goto label_1c9fe4;
            case 0x1C9FE8u: goto label_1c9fe8;
            case 0x1C9FECu: goto label_1c9fec;
            case 0x1C9FF0u: goto label_1c9ff0;
            case 0x1C9FF4u: goto label_1c9ff4;
            case 0x1C9FF8u: goto label_1c9ff8;
            case 0x1C9FFCu: goto label_1c9ffc;
            case 0x1CA000u: goto label_1ca000;
            case 0x1CA004u: goto label_1ca004;
            case 0x1CA008u: goto label_1ca008;
            case 0x1CA00Cu: goto label_1ca00c;
            case 0x1CA010u: goto label_1ca010;
            case 0x1CA014u: goto label_1ca014;
            case 0x1CA018u: goto label_1ca018;
            case 0x1CA01Cu: goto label_1ca01c;
            case 0x1CA020u: goto label_1ca020;
            case 0x1CA024u: goto label_1ca024;
            case 0x1CA028u: goto label_1ca028;
            case 0x1CA02Cu: goto label_1ca02c;
            case 0x1CA030u: goto label_1ca030;
            case 0x1CA034u: goto label_1ca034;
            case 0x1CA038u: goto label_1ca038;
            case 0x1CA03Cu: goto label_1ca03c;
            case 0x1CA040u: goto label_1ca040;
            case 0x1CA044u: goto label_1ca044;
            case 0x1CA048u: goto label_1ca048;
            case 0x1CA04Cu: goto label_1ca04c;
            case 0x1CA050u: goto label_1ca050;
            case 0x1CA054u: goto label_1ca054;
            case 0x1CA058u: goto label_1ca058;
            case 0x1CA05Cu: goto label_1ca05c;
            case 0x1CA060u: goto label_1ca060;
            case 0x1CA064u: goto label_1ca064;
            case 0x1CA068u: goto label_1ca068;
            case 0x1CA06Cu: goto label_1ca06c;
            case 0x1CA070u: goto label_1ca070;
            case 0x1CA074u: goto label_1ca074;
            case 0x1CA078u: goto label_1ca078;
            case 0x1CA07Cu: goto label_1ca07c;
            case 0x1CA080u: goto label_1ca080;
            case 0x1CA084u: goto label_1ca084;
            case 0x1CA088u: goto label_1ca088;
            case 0x1CA08Cu: goto label_1ca08c;
            case 0x1CA090u: goto label_1ca090;
            case 0x1CA094u: goto label_1ca094;
            case 0x1CA098u: goto label_1ca098;
            case 0x1CA09Cu: goto label_1ca09c;
            case 0x1CA0A0u: goto label_1ca0a0;
            case 0x1CA0A4u: goto label_1ca0a4;
            case 0x1CA0A8u: goto label_1ca0a8;
            case 0x1CA0ACu: goto label_1ca0ac;
            case 0x1CA0B0u: goto label_1ca0b0;
            case 0x1CA0B4u: goto label_1ca0b4;
            case 0x1CA0B8u: goto label_1ca0b8;
            case 0x1CA0BCu: goto label_1ca0bc;
            case 0x1CA0C0u: goto label_1ca0c0;
            case 0x1CA0C4u: goto label_1ca0c4;
            case 0x1CA0C8u: goto label_1ca0c8;
            case 0x1CA0CCu: goto label_1ca0cc;
            case 0x1CA0D0u: goto label_1ca0d0;
            case 0x1CA0D4u: goto label_1ca0d4;
            case 0x1CA0D8u: goto label_1ca0d8;
            case 0x1CA0DCu: goto label_1ca0dc;
            case 0x1CA0E0u: goto label_1ca0e0;
            case 0x1CA0E4u: goto label_1ca0e4;
            case 0x1CA0E8u: goto label_1ca0e8;
            case 0x1CA0ECu: goto label_1ca0ec;
            case 0x1CA0F0u: goto label_1ca0f0;
            case 0x1CA0F4u: goto label_1ca0f4;
            case 0x1CA0F8u: goto label_1ca0f8;
            case 0x1CA0FCu: goto label_1ca0fc;
            case 0x1CA100u: goto label_1ca100;
            case 0x1CA104u: goto label_1ca104;
            case 0x1CA108u: goto label_1ca108;
            case 0x1CA10Cu: goto label_1ca10c;
            case 0x1CA110u: goto label_1ca110;
            case 0x1CA114u: goto label_1ca114;
            case 0x1CA118u: goto label_1ca118;
            case 0x1CA11Cu: goto label_1ca11c;
            case 0x1CA120u: goto label_1ca120;
            case 0x1CA124u: goto label_1ca124;
            case 0x1CA128u: goto label_1ca128;
            case 0x1CA12Cu: goto label_1ca12c;
            case 0x1CA130u: goto label_1ca130;
            case 0x1CA134u: goto label_1ca134;
            case 0x1CA138u: goto label_1ca138;
            case 0x1CA13Cu: goto label_1ca13c;
            case 0x1CA140u: goto label_1ca140;
            case 0x1CA144u: goto label_1ca144;
            case 0x1CA148u: goto label_1ca148;
            case 0x1CA14Cu: goto label_1ca14c;
            case 0x1CA150u: goto label_1ca150;
            case 0x1CA154u: goto label_1ca154;
            case 0x1CA158u: goto label_1ca158;
            case 0x1CA15Cu: goto label_1ca15c;
            case 0x1CA160u: goto label_1ca160;
            case 0x1CA164u: goto label_1ca164;
            case 0x1CA168u: goto label_1ca168;
            case 0x1CA16Cu: goto label_1ca16c;
            case 0x1CA170u: goto label_1ca170;
            case 0x1CA174u: goto label_1ca174;
            case 0x1CA178u: goto label_1ca178;
            case 0x1CA17Cu: goto label_1ca17c;
            case 0x1CA180u: goto label_1ca180;
            case 0x1CA184u: goto label_1ca184;
            case 0x1CA188u: goto label_1ca188;
            case 0x1CA18Cu: goto label_1ca18c;
            case 0x1CA190u: goto label_1ca190;
            case 0x1CA194u: goto label_1ca194;
            case 0x1CA198u: goto label_1ca198;
            case 0x1CA19Cu: goto label_1ca19c;
            case 0x1CA1A0u: goto label_1ca1a0;
            case 0x1CA1A4u: goto label_1ca1a4;
            case 0x1CA1A8u: goto label_1ca1a8;
            case 0x1CA1ACu: goto label_1ca1ac;
            case 0x1CA1B0u: goto label_1ca1b0;
            case 0x1CA1B4u: goto label_1ca1b4;
            case 0x1CA1B8u: goto label_1ca1b8;
            case 0x1CA1BCu: goto label_1ca1bc;
            case 0x1CA1C0u: goto label_1ca1c0;
            case 0x1CA1C4u: goto label_1ca1c4;
            case 0x1CA1C8u: goto label_1ca1c8;
            case 0x1CA1CCu: goto label_1ca1cc;
            case 0x1CA1D0u: goto label_1ca1d0;
            case 0x1CA1D4u: goto label_1ca1d4;
            case 0x1CA1D8u: goto label_1ca1d8;
            case 0x1CA1DCu: goto label_1ca1dc;
            case 0x1CA1E0u: goto label_1ca1e0;
            case 0x1CA1E4u: goto label_1ca1e4;
            case 0x1CA1E8u: goto label_1ca1e8;
            case 0x1CA1ECu: goto label_1ca1ec;
            case 0x1CA1F0u: goto label_1ca1f0;
            case 0x1CA1F4u: goto label_1ca1f4;
            case 0x1CA1F8u: goto label_1ca1f8;
            case 0x1CA1FCu: goto label_1ca1fc;
            case 0x1CA200u: goto label_1ca200;
            case 0x1CA204u: goto label_1ca204;
            case 0x1CA208u: goto label_1ca208;
            case 0x1CA20Cu: goto label_1ca20c;
            case 0x1CA210u: goto label_1ca210;
            case 0x1CA214u: goto label_1ca214;
            case 0x1CA218u: goto label_1ca218;
            case 0x1CA21Cu: goto label_1ca21c;
            case 0x1CA220u: goto label_1ca220;
            case 0x1CA224u: goto label_1ca224;
            case 0x1CA228u: goto label_1ca228;
            case 0x1CA22Cu: goto label_1ca22c;
            case 0x1CA230u: goto label_1ca230;
            case 0x1CA234u: goto label_1ca234;
            case 0x1CA238u: goto label_1ca238;
            case 0x1CA23Cu: goto label_1ca23c;
            case 0x1CA240u: goto label_1ca240;
            case 0x1CA244u: goto label_1ca244;
            case 0x1CA248u: goto label_1ca248;
            case 0x1CA24Cu: goto label_1ca24c;
            case 0x1CA250u: goto label_1ca250;
            case 0x1CA254u: goto label_1ca254;
            case 0x1CA258u: goto label_1ca258;
            case 0x1CA25Cu: goto label_1ca25c;
            case 0x1CA260u: goto label_1ca260;
            case 0x1CA264u: goto label_1ca264;
            case 0x1CA268u: goto label_1ca268;
            case 0x1CA26Cu: goto label_1ca26c;
            case 0x1CA270u: goto label_1ca270;
            case 0x1CA274u: goto label_1ca274;
            case 0x1CA278u: goto label_1ca278;
            case 0x1CA27Cu: goto label_1ca27c;
            case 0x1CA280u: goto label_1ca280;
            case 0x1CA284u: goto label_1ca284;
            case 0x1CA288u: goto label_1ca288;
            case 0x1CA28Cu: goto label_1ca28c;
            case 0x1CA290u: goto label_1ca290;
            case 0x1CA294u: goto label_1ca294;
            case 0x1CA298u: goto label_1ca298;
            case 0x1CA29Cu: goto label_1ca29c;
            case 0x1CA2A0u: goto label_1ca2a0;
            case 0x1CA2A4u: goto label_1ca2a4;
            case 0x1CA2A8u: goto label_1ca2a8;
            case 0x1CA2ACu: goto label_1ca2ac;
            case 0x1CA2B0u: goto label_1ca2b0;
            case 0x1CA2B4u: goto label_1ca2b4;
            case 0x1CA2B8u: goto label_1ca2b8;
            case 0x1CA2BCu: goto label_1ca2bc;
            case 0x1CA2C0u: goto label_1ca2c0;
            case 0x1CA2C4u: goto label_1ca2c4;
            case 0x1CA2C8u: goto label_1ca2c8;
            case 0x1CA2CCu: goto label_1ca2cc;
            case 0x1CA2D0u: goto label_1ca2d0;
            case 0x1CA2D4u: goto label_1ca2d4;
            case 0x1CA2D8u: goto label_1ca2d8;
            case 0x1CA2DCu: goto label_1ca2dc;
            case 0x1CA2E0u: goto label_1ca2e0;
            case 0x1CA2E4u: goto label_1ca2e4;
            case 0x1CA2E8u: goto label_1ca2e8;
            case 0x1CA2ECu: goto label_1ca2ec;
            case 0x1CA2F0u: goto label_1ca2f0;
            case 0x1CA2F4u: goto label_1ca2f4;
            case 0x1CA2F8u: goto label_1ca2f8;
            case 0x1CA2FCu: goto label_1ca2fc;
            case 0x1CA300u: goto label_1ca300;
            case 0x1CA304u: goto label_1ca304;
            case 0x1CA308u: goto label_1ca308;
            case 0x1CA30Cu: goto label_1ca30c;
            case 0x1CA310u: goto label_1ca310;
            case 0x1CA314u: goto label_1ca314;
            case 0x1CA318u: goto label_1ca318;
            case 0x1CA31Cu: goto label_1ca31c;
            case 0x1CA320u: goto label_1ca320;
            case 0x1CA324u: goto label_1ca324;
            case 0x1CA328u: goto label_1ca328;
            case 0x1CA32Cu: goto label_1ca32c;
            case 0x1CA330u: goto label_1ca330;
            case 0x1CA334u: goto label_1ca334;
            case 0x1CA338u: goto label_1ca338;
            case 0x1CA33Cu: goto label_1ca33c;
            case 0x1CA340u: goto label_1ca340;
            case 0x1CA344u: goto label_1ca344;
            case 0x1CA348u: goto label_1ca348;
            case 0x1CA34Cu: goto label_1ca34c;
            case 0x1CA350u: goto label_1ca350;
            case 0x1CA354u: goto label_1ca354;
            case 0x1CA358u: goto label_1ca358;
            case 0x1CA35Cu: goto label_1ca35c;
            case 0x1CA360u: goto label_1ca360;
            case 0x1CA364u: goto label_1ca364;
            case 0x1CA368u: goto label_1ca368;
            case 0x1CA36Cu: goto label_1ca36c;
            case 0x1CA370u: goto label_1ca370;
            case 0x1CA374u: goto label_1ca374;
            case 0x1CA378u: goto label_1ca378;
            case 0x1CA37Cu: goto label_1ca37c;
            case 0x1CA380u: goto label_1ca380;
            case 0x1CA384u: goto label_1ca384;
            case 0x1CA388u: goto label_1ca388;
            case 0x1CA38Cu: goto label_1ca38c;
            case 0x1CA390u: goto label_1ca390;
            case 0x1CA394u: goto label_1ca394;
            case 0x1CA398u: goto label_1ca398;
            case 0x1CA39Cu: goto label_1ca39c;
            case 0x1CA3A0u: goto label_1ca3a0;
            case 0x1CA3A4u: goto label_1ca3a4;
            case 0x1CA3A8u: goto label_1ca3a8;
            case 0x1CA3ACu: goto label_1ca3ac;
            case 0x1CA3B0u: goto label_1ca3b0;
            case 0x1CA3B4u: goto label_1ca3b4;
            case 0x1CA3B8u: goto label_1ca3b8;
            case 0x1CA3BCu: goto label_1ca3bc;
            case 0x1CA3C0u: goto label_1ca3c0;
            case 0x1CA3C4u: goto label_1ca3c4;
            case 0x1CA3C8u: goto label_1ca3c8;
            case 0x1CA3CCu: goto label_1ca3cc;
            case 0x1CA3D0u: goto label_1ca3d0;
            case 0x1CA3D4u: goto label_1ca3d4;
            case 0x1CA3D8u: goto label_1ca3d8;
            case 0x1CA3DCu: goto label_1ca3dc;
            case 0x1CA3E0u: goto label_1ca3e0;
            case 0x1CA3E4u: goto label_1ca3e4;
            case 0x1CA3E8u: goto label_1ca3e8;
            case 0x1CA3ECu: goto label_1ca3ec;
            case 0x1CA3F0u: goto label_1ca3f0;
            case 0x1CA3F4u: goto label_1ca3f4;
            case 0x1CA3F8u: goto label_1ca3f8;
            case 0x1CA3FCu: goto label_1ca3fc;
            case 0x1CA400u: goto label_1ca400;
            case 0x1CA404u: goto label_1ca404;
            case 0x1CA408u: goto label_1ca408;
            case 0x1CA40Cu: goto label_1ca40c;
            case 0x1CA410u: goto label_1ca410;
            case 0x1CA414u: goto label_1ca414;
            case 0x1CA418u: goto label_1ca418;
            case 0x1CA41Cu: goto label_1ca41c;
            case 0x1CA420u: goto label_1ca420;
            case 0x1CA424u: goto label_1ca424;
            case 0x1CA428u: goto label_1ca428;
            case 0x1CA42Cu: goto label_1ca42c;
            case 0x1CA430u: goto label_1ca430;
            case 0x1CA434u: goto label_1ca434;
            case 0x1CA438u: goto label_1ca438;
            case 0x1CA43Cu: goto label_1ca43c;
            case 0x1CA440u: goto label_1ca440;
            case 0x1CA444u: goto label_1ca444;
            case 0x1CA448u: goto label_1ca448;
            case 0x1CA44Cu: goto label_1ca44c;
            case 0x1CA450u: goto label_1ca450;
            case 0x1CA454u: goto label_1ca454;
            case 0x1CA458u: goto label_1ca458;
            case 0x1CA45Cu: goto label_1ca45c;
            case 0x1CA460u: goto label_1ca460;
            case 0x1CA464u: goto label_1ca464;
            case 0x1CA468u: goto label_1ca468;
            case 0x1CA46Cu: goto label_1ca46c;
            case 0x1CA470u: goto label_1ca470;
            case 0x1CA474u: goto label_1ca474;
            case 0x1CA478u: goto label_1ca478;
            case 0x1CA47Cu: goto label_1ca47c;
            case 0x1CA480u: goto label_1ca480;
            case 0x1CA484u: goto label_1ca484;
            case 0x1CA488u: goto label_1ca488;
            case 0x1CA48Cu: goto label_1ca48c;
            case 0x1CA490u: goto label_1ca490;
            case 0x1CA494u: goto label_1ca494;
            case 0x1CA498u: goto label_1ca498;
            case 0x1CA49Cu: goto label_1ca49c;
            case 0x1CA4A0u: goto label_1ca4a0;
            case 0x1CA4A4u: goto label_1ca4a4;
            case 0x1CA4A8u: goto label_1ca4a8;
            case 0x1CA4ACu: goto label_1ca4ac;
            case 0x1CA4B0u: goto label_1ca4b0;
            case 0x1CA4B4u: goto label_1ca4b4;
            case 0x1CA4B8u: goto label_1ca4b8;
            case 0x1CA4BCu: goto label_1ca4bc;
            case 0x1CA4C0u: goto label_1ca4c0;
            case 0x1CA4C4u: goto label_1ca4c4;
            case 0x1CA4C8u: goto label_1ca4c8;
            case 0x1CA4CCu: goto label_1ca4cc;
            case 0x1CA4D0u: goto label_1ca4d0;
            case 0x1CA4D4u: goto label_1ca4d4;
            case 0x1CA4D8u: goto label_1ca4d8;
            case 0x1CA4DCu: goto label_1ca4dc;
            case 0x1CA4E0u: goto label_1ca4e0;
            case 0x1CA4E4u: goto label_1ca4e4;
            case 0x1CA4E8u: goto label_1ca4e8;
            case 0x1CA4ECu: goto label_1ca4ec;
            case 0x1CA4F0u: goto label_1ca4f0;
            case 0x1CA4F4u: goto label_1ca4f4;
            case 0x1CA4F8u: goto label_1ca4f8;
            case 0x1CA4FCu: goto label_1ca4fc;
            case 0x1CA500u: goto label_1ca500;
            case 0x1CA504u: goto label_1ca504;
            case 0x1CA508u: goto label_1ca508;
            case 0x1CA50Cu: goto label_1ca50c;
            case 0x1CA510u: goto label_1ca510;
            case 0x1CA514u: goto label_1ca514;
            case 0x1CA518u: goto label_1ca518;
            case 0x1CA51Cu: goto label_1ca51c;
            case 0x1CA520u: goto label_1ca520;
            case 0x1CA524u: goto label_1ca524;
            case 0x1CA528u: goto label_1ca528;
            case 0x1CA52Cu: goto label_1ca52c;
            case 0x1CA530u: goto label_1ca530;
            case 0x1CA534u: goto label_1ca534;
            case 0x1CA538u: goto label_1ca538;
            case 0x1CA53Cu: goto label_1ca53c;
            case 0x1CA540u: goto label_1ca540;
            case 0x1CA544u: goto label_1ca544;
            case 0x1CA548u: goto label_1ca548;
            case 0x1CA54Cu: goto label_1ca54c;
            case 0x1CA550u: goto label_1ca550;
            case 0x1CA554u: goto label_1ca554;
            case 0x1CA558u: goto label_1ca558;
            case 0x1CA55Cu: goto label_1ca55c;
            case 0x1CA560u: goto label_1ca560;
            case 0x1CA564u: goto label_1ca564;
            case 0x1CA568u: goto label_1ca568;
            case 0x1CA56Cu: goto label_1ca56c;
            case 0x1CA570u: goto label_1ca570;
            case 0x1CA574u: goto label_1ca574;
            case 0x1CA578u: goto label_1ca578;
            case 0x1CA57Cu: goto label_1ca57c;
            case 0x1CA580u: goto label_1ca580;
            case 0x1CA584u: goto label_1ca584;
            case 0x1CA588u: goto label_1ca588;
            case 0x1CA58Cu: goto label_1ca58c;
            case 0x1CA590u: goto label_1ca590;
            case 0x1CA594u: goto label_1ca594;
            case 0x1CA598u: goto label_1ca598;
            case 0x1CA59Cu: goto label_1ca59c;
            case 0x1CA5A0u: goto label_1ca5a0;
            case 0x1CA5A4u: goto label_1ca5a4;
            case 0x1CA5A8u: goto label_1ca5a8;
            case 0x1CA5ACu: goto label_1ca5ac;
            case 0x1CA5B0u: goto label_1ca5b0;
            case 0x1CA5B4u: goto label_1ca5b4;
            case 0x1CA5B8u: goto label_1ca5b8;
            case 0x1CA5BCu: goto label_1ca5bc;
            case 0x1CA5C0u: goto label_1ca5c0;
            case 0x1CA5C4u: goto label_1ca5c4;
            case 0x1CA5C8u: goto label_1ca5c8;
            case 0x1CA5CCu: goto label_1ca5cc;
            case 0x1CA5D0u: goto label_1ca5d0;
            case 0x1CA5D4u: goto label_1ca5d4;
            case 0x1CA5D8u: goto label_1ca5d8;
            case 0x1CA5DCu: goto label_1ca5dc;
            case 0x1CA5E0u: goto label_1ca5e0;
            case 0x1CA5E4u: goto label_1ca5e4;
            case 0x1CA5E8u: goto label_1ca5e8;
            case 0x1CA5ECu: goto label_1ca5ec;
            case 0x1CA5F0u: goto label_1ca5f0;
            case 0x1CA5F4u: goto label_1ca5f4;
            case 0x1CA5F8u: goto label_1ca5f8;
            case 0x1CA5FCu: goto label_1ca5fc;
            case 0x1CA600u: goto label_1ca600;
            case 0x1CA604u: goto label_1ca604;
            case 0x1CA608u: goto label_1ca608;
            case 0x1CA60Cu: goto label_1ca60c;
            case 0x1CA610u: goto label_1ca610;
            case 0x1CA614u: goto label_1ca614;
            case 0x1CA618u: goto label_1ca618;
            case 0x1CA61Cu: goto label_1ca61c;
            case 0x1CA620u: goto label_1ca620;
            case 0x1CA624u: goto label_1ca624;
            case 0x1CA628u: goto label_1ca628;
            case 0x1CA62Cu: goto label_1ca62c;
            case 0x1CA630u: goto label_1ca630;
            case 0x1CA634u: goto label_1ca634;
            case 0x1CA638u: goto label_1ca638;
            case 0x1CA63Cu: goto label_1ca63c;
            case 0x1CA640u: goto label_1ca640;
            case 0x1CA644u: goto label_1ca644;
            case 0x1CA648u: goto label_1ca648;
            case 0x1CA64Cu: goto label_1ca64c;
            case 0x1CA650u: goto label_1ca650;
            case 0x1CA654u: goto label_1ca654;
            case 0x1CA658u: goto label_1ca658;
            case 0x1CA65Cu: goto label_1ca65c;
            case 0x1CA660u: goto label_1ca660;
            case 0x1CA664u: goto label_1ca664;
            case 0x1CA668u: goto label_1ca668;
            case 0x1CA66Cu: goto label_1ca66c;
            case 0x1CA670u: goto label_1ca670;
            case 0x1CA674u: goto label_1ca674;
            case 0x1CA678u: goto label_1ca678;
            case 0x1CA67Cu: goto label_1ca67c;
            case 0x1CA680u: goto label_1ca680;
            case 0x1CA684u: goto label_1ca684;
            case 0x1CA688u: goto label_1ca688;
            case 0x1CA68Cu: goto label_1ca68c;
            case 0x1CA690u: goto label_1ca690;
            case 0x1CA694u: goto label_1ca694;
            case 0x1CA698u: goto label_1ca698;
            case 0x1CA69Cu: goto label_1ca69c;
            case 0x1CA6A0u: goto label_1ca6a0;
            case 0x1CA6A4u: goto label_1ca6a4;
            case 0x1CA6A8u: goto label_1ca6a8;
            case 0x1CA6ACu: goto label_1ca6ac;
            case 0x1CA6B0u: goto label_1ca6b0;
            case 0x1CA6B4u: goto label_1ca6b4;
            case 0x1CA6B8u: goto label_1ca6b8;
            case 0x1CA6BCu: goto label_1ca6bc;
            case 0x1CA6C0u: goto label_1ca6c0;
            case 0x1CA6C4u: goto label_1ca6c4;
            case 0x1CA6C8u: goto label_1ca6c8;
            case 0x1CA6CCu: goto label_1ca6cc;
            case 0x1CA6D0u: goto label_1ca6d0;
            case 0x1CA6D4u: goto label_1ca6d4;
            case 0x1CA6D8u: goto label_1ca6d8;
            case 0x1CA6DCu: goto label_1ca6dc;
            case 0x1CA6E0u: goto label_1ca6e0;
            case 0x1CA6E4u: goto label_1ca6e4;
            case 0x1CA6E8u: goto label_1ca6e8;
            case 0x1CA6ECu: goto label_1ca6ec;
            case 0x1CA6F0u: goto label_1ca6f0;
            case 0x1CA6F4u: goto label_1ca6f4;
            case 0x1CA6F8u: goto label_1ca6f8;
            case 0x1CA6FCu: goto label_1ca6fc;
            case 0x1CA700u: goto label_1ca700;
            case 0x1CA704u: goto label_1ca704;
            case 0x1CA708u: goto label_1ca708;
            case 0x1CA70Cu: goto label_1ca70c;
            case 0x1CA710u: goto label_1ca710;
            case 0x1CA714u: goto label_1ca714;
            case 0x1CA718u: goto label_1ca718;
            case 0x1CA71Cu: goto label_1ca71c;
            case 0x1CA720u: goto label_1ca720;
            case 0x1CA724u: goto label_1ca724;
            case 0x1CA728u: goto label_1ca728;
            case 0x1CA72Cu: goto label_1ca72c;
            case 0x1CA730u: goto label_1ca730;
            case 0x1CA734u: goto label_1ca734;
            case 0x1CA738u: goto label_1ca738;
            case 0x1CA73Cu: goto label_1ca73c;
            case 0x1CA740u: goto label_1ca740;
            case 0x1CA744u: goto label_1ca744;
            case 0x1CA748u: goto label_1ca748;
            case 0x1CA74Cu: goto label_1ca74c;
            case 0x1CA750u: goto label_1ca750;
            case 0x1CA754u: goto label_1ca754;
            case 0x1CA758u: goto label_1ca758;
            case 0x1CA75Cu: goto label_1ca75c;
            case 0x1CA760u: goto label_1ca760;
            case 0x1CA764u: goto label_1ca764;
            case 0x1CA768u: goto label_1ca768;
            case 0x1CA76Cu: goto label_1ca76c;
            case 0x1CA770u: goto label_1ca770;
            case 0x1CA774u: goto label_1ca774;
            case 0x1CA778u: goto label_1ca778;
            case 0x1CA77Cu: goto label_1ca77c;
            case 0x1CA780u: goto label_1ca780;
            case 0x1CA784u: goto label_1ca784;
            case 0x1CA788u: goto label_1ca788;
            case 0x1CA78Cu: goto label_1ca78c;
            case 0x1CA790u: goto label_1ca790;
            case 0x1CA794u: goto label_1ca794;
            case 0x1CA798u: goto label_1ca798;
            case 0x1CA79Cu: goto label_1ca79c;
            case 0x1CA7A0u: goto label_1ca7a0;
            case 0x1CA7A4u: goto label_1ca7a4;
            case 0x1CA7A8u: goto label_1ca7a8;
            case 0x1CA7ACu: goto label_1ca7ac;
            case 0x1CA7B0u: goto label_1ca7b0;
            case 0x1CA7B4u: goto label_1ca7b4;
            case 0x1CA7B8u: goto label_1ca7b8;
            case 0x1CA7BCu: goto label_1ca7bc;
            case 0x1CA7C0u: goto label_1ca7c0;
            case 0x1CA7C4u: goto label_1ca7c4;
            case 0x1CA7C8u: goto label_1ca7c8;
            case 0x1CA7CCu: goto label_1ca7cc;
            case 0x1CA7D0u: goto label_1ca7d0;
            case 0x1CA7D4u: goto label_1ca7d4;
            case 0x1CA7D8u: goto label_1ca7d8;
            case 0x1CA7DCu: goto label_1ca7dc;
            case 0x1CA7E0u: goto label_1ca7e0;
            case 0x1CA7E4u: goto label_1ca7e4;
            case 0x1CA7E8u: goto label_1ca7e8;
            case 0x1CA7ECu: goto label_1ca7ec;
            case 0x1CA7F0u: goto label_1ca7f0;
            case 0x1CA7F4u: goto label_1ca7f4;
            case 0x1CA7F8u: goto label_1ca7f8;
            case 0x1CA7FCu: goto label_1ca7fc;
            case 0x1CA800u: goto label_1ca800;
            case 0x1CA804u: goto label_1ca804;
            case 0x1CA808u: goto label_1ca808;
            case 0x1CA80Cu: goto label_1ca80c;
            case 0x1CA810u: goto label_1ca810;
            case 0x1CA814u: goto label_1ca814;
            case 0x1CA818u: goto label_1ca818;
            case 0x1CA81Cu: goto label_1ca81c;
            case 0x1CA820u: goto label_1ca820;
            case 0x1CA824u: goto label_1ca824;
            case 0x1CA828u: goto label_1ca828;
            case 0x1CA82Cu: goto label_1ca82c;
            case 0x1CA830u: goto label_1ca830;
            case 0x1CA834u: goto label_1ca834;
            case 0x1CA838u: goto label_1ca838;
            case 0x1CA83Cu: goto label_1ca83c;
            case 0x1CA840u: goto label_1ca840;
            case 0x1CA844u: goto label_1ca844;
            case 0x1CA848u: goto label_1ca848;
            case 0x1CA84Cu: goto label_1ca84c;
            case 0x1CA850u: goto label_1ca850;
            case 0x1CA854u: goto label_1ca854;
            case 0x1CA858u: goto label_1ca858;
            case 0x1CA85Cu: goto label_1ca85c;
            case 0x1CA860u: goto label_1ca860;
            case 0x1CA864u: goto label_1ca864;
            case 0x1CA868u: goto label_1ca868;
            case 0x1CA86Cu: goto label_1ca86c;
            case 0x1CA870u: goto label_1ca870;
            case 0x1CA874u: goto label_1ca874;
            case 0x1CA878u: goto label_1ca878;
            case 0x1CA87Cu: goto label_1ca87c;
            case 0x1CA880u: goto label_1ca880;
            case 0x1CA884u: goto label_1ca884;
            case 0x1CA888u: goto label_1ca888;
            case 0x1CA88Cu: goto label_1ca88c;
            case 0x1CA890u: goto label_1ca890;
            case 0x1CA894u: goto label_1ca894;
            case 0x1CA898u: goto label_1ca898;
            case 0x1CA89Cu: goto label_1ca89c;
            case 0x1CA8A0u: goto label_1ca8a0;
            case 0x1CA8A4u: goto label_1ca8a4;
            case 0x1CA8A8u: goto label_1ca8a8;
            case 0x1CA8ACu: goto label_1ca8ac;
            case 0x1CA8B0u: goto label_1ca8b0;
            case 0x1CA8B4u: goto label_1ca8b4;
            case 0x1CA8B8u: goto label_1ca8b8;
            case 0x1CA8BCu: goto label_1ca8bc;
            case 0x1CA8C0u: goto label_1ca8c0;
            case 0x1CA8C4u: goto label_1ca8c4;
            case 0x1CA8C8u: goto label_1ca8c8;
            case 0x1CA8CCu: goto label_1ca8cc;
            case 0x1CA8D0u: goto label_1ca8d0;
            case 0x1CA8D4u: goto label_1ca8d4;
            case 0x1CA8D8u: goto label_1ca8d8;
            case 0x1CA8DCu: goto label_1ca8dc;
            case 0x1CA8E0u: goto label_1ca8e0;
            case 0x1CA8E4u: goto label_1ca8e4;
            case 0x1CA8E8u: goto label_1ca8e8;
            case 0x1CA8ECu: goto label_1ca8ec;
            case 0x1CA8F0u: goto label_1ca8f0;
            case 0x1CA8F4u: goto label_1ca8f4;
            case 0x1CA8F8u: goto label_1ca8f8;
            case 0x1CA8FCu: goto label_1ca8fc;
            case 0x1CA900u: goto label_1ca900;
            case 0x1CA904u: goto label_1ca904;
            case 0x1CA908u: goto label_1ca908;
            case 0x1CA90Cu: goto label_1ca90c;
            case 0x1CA910u: goto label_1ca910;
            case 0x1CA914u: goto label_1ca914;
            case 0x1CA918u: goto label_1ca918;
            case 0x1CA91Cu: goto label_1ca91c;
            case 0x1CA920u: goto label_1ca920;
            case 0x1CA924u: goto label_1ca924;
            case 0x1CA928u: goto label_1ca928;
            case 0x1CA92Cu: goto label_1ca92c;
            case 0x1CA930u: goto label_1ca930;
            case 0x1CA934u: goto label_1ca934;
            case 0x1CA938u: goto label_1ca938;
            case 0x1CA93Cu: goto label_1ca93c;
            case 0x1CA940u: goto label_1ca940;
            case 0x1CA944u: goto label_1ca944;
            case 0x1CA948u: goto label_1ca948;
            case 0x1CA94Cu: goto label_1ca94c;
            case 0x1CA950u: goto label_1ca950;
            case 0x1CA954u: goto label_1ca954;
            case 0x1CA958u: goto label_1ca958;
            case 0x1CA95Cu: goto label_1ca95c;
            case 0x1CA960u: goto label_1ca960;
            case 0x1CA964u: goto label_1ca964;
            case 0x1CA968u: goto label_1ca968;
            case 0x1CA96Cu: goto label_1ca96c;
            case 0x1CA970u: goto label_1ca970;
            case 0x1CA974u: goto label_1ca974;
            case 0x1CA978u: goto label_1ca978;
            case 0x1CA97Cu: goto label_1ca97c;
            case 0x1CA980u: goto label_1ca980;
            case 0x1CA984u: goto label_1ca984;
            case 0x1CA988u: goto label_1ca988;
            case 0x1CA98Cu: goto label_1ca98c;
            case 0x1CA990u: goto label_1ca990;
            case 0x1CA994u: goto label_1ca994;
            case 0x1CA998u: goto label_1ca998;
            case 0x1CA99Cu: goto label_1ca99c;
            case 0x1CA9A0u: goto label_1ca9a0;
            case 0x1CA9A4u: goto label_1ca9a4;
            case 0x1CA9A8u: goto label_1ca9a8;
            case 0x1CA9ACu: goto label_1ca9ac;
            case 0x1CA9B0u: goto label_1ca9b0;
            case 0x1CA9B4u: goto label_1ca9b4;
            case 0x1CA9B8u: goto label_1ca9b8;
            case 0x1CA9BCu: goto label_1ca9bc;
            case 0x1CA9C0u: goto label_1ca9c0;
            case 0x1CA9C4u: goto label_1ca9c4;
            case 0x1CA9C8u: goto label_1ca9c8;
            case 0x1CA9CCu: goto label_1ca9cc;
            case 0x1CA9D0u: goto label_1ca9d0;
            case 0x1CA9D4u: goto label_1ca9d4;
            case 0x1CA9D8u: goto label_1ca9d8;
            case 0x1CA9DCu: goto label_1ca9dc;
            case 0x1CA9E0u: goto label_1ca9e0;
            case 0x1CA9E4u: goto label_1ca9e4;
            case 0x1CA9E8u: goto label_1ca9e8;
            case 0x1CA9ECu: goto label_1ca9ec;
            case 0x1CA9F0u: goto label_1ca9f0;
            case 0x1CA9F4u: goto label_1ca9f4;
            case 0x1CA9F8u: goto label_1ca9f8;
            case 0x1CA9FCu: goto label_1ca9fc;
            case 0x1CAA00u: goto label_1caa00;
            case 0x1CAA04u: goto label_1caa04;
            case 0x1CAA08u: goto label_1caa08;
            case 0x1CAA0Cu: goto label_1caa0c;
            case 0x1CAA10u: goto label_1caa10;
            case 0x1CAA14u: goto label_1caa14;
            case 0x1CAA18u: goto label_1caa18;
            case 0x1CAA1Cu: goto label_1caa1c;
            case 0x1CAA20u: goto label_1caa20;
            case 0x1CAA24u: goto label_1caa24;
            case 0x1CAA28u: goto label_1caa28;
            case 0x1CAA2Cu: goto label_1caa2c;
            case 0x1CAA30u: goto label_1caa30;
            case 0x1CAA34u: goto label_1caa34;
            case 0x1CAA38u: goto label_1caa38;
            case 0x1CAA3Cu: goto label_1caa3c;
            case 0x1CAA40u: goto label_1caa40;
            case 0x1CAA44u: goto label_1caa44;
            case 0x1CAA48u: goto label_1caa48;
            case 0x1CAA4Cu: goto label_1caa4c;
            case 0x1CAA50u: goto label_1caa50;
            case 0x1CAA54u: goto label_1caa54;
            case 0x1CAA58u: goto label_1caa58;
            case 0x1CAA5Cu: goto label_1caa5c;
            case 0x1CAA60u: goto label_1caa60;
            case 0x1CAA64u: goto label_1caa64;
            case 0x1CAA68u: goto label_1caa68;
            case 0x1CAA6Cu: goto label_1caa6c;
            case 0x1CAA70u: goto label_1caa70;
            case 0x1CAA74u: goto label_1caa74;
            case 0x1CAA78u: goto label_1caa78;
            case 0x1CAA7Cu: goto label_1caa7c;
            case 0x1CAA80u: goto label_1caa80;
            case 0x1CAA84u: goto label_1caa84;
            case 0x1CAA88u: goto label_1caa88;
            case 0x1CAA8Cu: goto label_1caa8c;
            case 0x1CAA90u: goto label_1caa90;
            case 0x1CAA94u: goto label_1caa94;
            case 0x1CAA98u: goto label_1caa98;
            case 0x1CAA9Cu: goto label_1caa9c;
            case 0x1CAAA0u: goto label_1caaa0;
            case 0x1CAAA4u: goto label_1caaa4;
            case 0x1CAAA8u: goto label_1caaa8;
            case 0x1CAAACu: goto label_1caaac;
            case 0x1CAAB0u: goto label_1caab0;
            case 0x1CAAB4u: goto label_1caab4;
            case 0x1CAAB8u: goto label_1caab8;
            case 0x1CAABCu: goto label_1caabc;
            case 0x1CAAC0u: goto label_1caac0;
            case 0x1CAAC4u: goto label_1caac4;
            case 0x1CAAC8u: goto label_1caac8;
            case 0x1CAACCu: goto label_1caacc;
            case 0x1CAAD0u: goto label_1caad0;
            case 0x1CAAD4u: goto label_1caad4;
            case 0x1CAAD8u: goto label_1caad8;
            case 0x1CAADCu: goto label_1caadc;
            case 0x1CAAE0u: goto label_1caae0;
            case 0x1CAAE4u: goto label_1caae4;
            case 0x1CAAE8u: goto label_1caae8;
            case 0x1CAAECu: goto label_1caaec;
            case 0x1CAAF0u: goto label_1caaf0;
            case 0x1CAAF4u: goto label_1caaf4;
            case 0x1CAAF8u: goto label_1caaf8;
            case 0x1CAAFCu: goto label_1caafc;
            case 0x1CAB00u: goto label_1cab00;
            case 0x1CAB04u: goto label_1cab04;
            case 0x1CAB08u: goto label_1cab08;
            case 0x1CAB0Cu: goto label_1cab0c;
            case 0x1CAB10u: goto label_1cab10;
            case 0x1CAB14u: goto label_1cab14;
            case 0x1CAB18u: goto label_1cab18;
            case 0x1CAB1Cu: goto label_1cab1c;
            case 0x1CAB20u: goto label_1cab20;
            case 0x1CAB24u: goto label_1cab24;
            case 0x1CAB28u: goto label_1cab28;
            case 0x1CAB2Cu: goto label_1cab2c;
            case 0x1CAB30u: goto label_1cab30;
            case 0x1CAB34u: goto label_1cab34;
            case 0x1CAB38u: goto label_1cab38;
            case 0x1CAB3Cu: goto label_1cab3c;
            case 0x1CAB40u: goto label_1cab40;
            case 0x1CAB44u: goto label_1cab44;
            case 0x1CAB48u: goto label_1cab48;
            case 0x1CAB4Cu: goto label_1cab4c;
            case 0x1CAB50u: goto label_1cab50;
            case 0x1CAB54u: goto label_1cab54;
            case 0x1CAB58u: goto label_1cab58;
            case 0x1CAB5Cu: goto label_1cab5c;
            case 0x1CAB60u: goto label_1cab60;
            case 0x1CAB64u: goto label_1cab64;
            case 0x1CAB68u: goto label_1cab68;
            case 0x1CAB6Cu: goto label_1cab6c;
            case 0x1CAB70u: goto label_1cab70;
            case 0x1CAB74u: goto label_1cab74;
            case 0x1CAB78u: goto label_1cab78;
            case 0x1CAB7Cu: goto label_1cab7c;
            case 0x1CAB80u: goto label_1cab80;
            case 0x1CAB84u: goto label_1cab84;
            case 0x1CAB88u: goto label_1cab88;
            case 0x1CAB8Cu: goto label_1cab8c;
            case 0x1CAB90u: goto label_1cab90;
            case 0x1CAB94u: goto label_1cab94;
            case 0x1CAB98u: goto label_1cab98;
            case 0x1CAB9Cu: goto label_1cab9c;
            case 0x1CABA0u: goto label_1caba0;
            case 0x1CABA4u: goto label_1caba4;
            case 0x1CABA8u: goto label_1caba8;
            case 0x1CABACu: goto label_1cabac;
            case 0x1CABB0u: goto label_1cabb0;
            case 0x1CABB4u: goto label_1cabb4;
            case 0x1CABB8u: goto label_1cabb8;
            case 0x1CABBCu: goto label_1cabbc;
            case 0x1CABC0u: goto label_1cabc0;
            case 0x1CABC4u: goto label_1cabc4;
            case 0x1CABC8u: goto label_1cabc8;
            case 0x1CABCCu: goto label_1cabcc;
            case 0x1CABD0u: goto label_1cabd0;
            case 0x1CABD4u: goto label_1cabd4;
            case 0x1CABD8u: goto label_1cabd8;
            case 0x1CABDCu: goto label_1cabdc;
            case 0x1CABE0u: goto label_1cabe0;
            case 0x1CABE4u: goto label_1cabe4;
            case 0x1CABE8u: goto label_1cabe8;
            case 0x1CABECu: goto label_1cabec;
            case 0x1CABF0u: goto label_1cabf0;
            case 0x1CABF4u: goto label_1cabf4;
            case 0x1CABF8u: goto label_1cabf8;
            case 0x1CABFCu: goto label_1cabfc;
            case 0x1CAC00u: goto label_1cac00;
            case 0x1CAC04u: goto label_1cac04;
            case 0x1CAC08u: goto label_1cac08;
            case 0x1CAC0Cu: goto label_1cac0c;
            case 0x1CAC10u: goto label_1cac10;
            case 0x1CAC14u: goto label_1cac14;
            case 0x1CAC18u: goto label_1cac18;
            case 0x1CAC1Cu: goto label_1cac1c;
            case 0x1CAC20u: goto label_1cac20;
            case 0x1CAC24u: goto label_1cac24;
            case 0x1CAC28u: goto label_1cac28;
            case 0x1CAC2Cu: goto label_1cac2c;
            case 0x1CAC30u: goto label_1cac30;
            case 0x1CAC34u: goto label_1cac34;
            case 0x1CAC38u: goto label_1cac38;
            case 0x1CAC3Cu: goto label_1cac3c;
            case 0x1CAC40u: goto label_1cac40;
            case 0x1CAC44u: goto label_1cac44;
            case 0x1CAC48u: goto label_1cac48;
            case 0x1CAC4Cu: goto label_1cac4c;
            case 0x1CAC50u: goto label_1cac50;
            case 0x1CAC54u: goto label_1cac54;
            case 0x1CAC58u: goto label_1cac58;
            case 0x1CAC5Cu: goto label_1cac5c;
            case 0x1CAC60u: goto label_1cac60;
            case 0x1CAC64u: goto label_1cac64;
            case 0x1CAC68u: goto label_1cac68;
            case 0x1CAC6Cu: goto label_1cac6c;
            case 0x1CAC70u: goto label_1cac70;
            case 0x1CAC74u: goto label_1cac74;
            case 0x1CAC78u: goto label_1cac78;
            case 0x1CAC7Cu: goto label_1cac7c;
            case 0x1CAC80u: goto label_1cac80;
            case 0x1CAC84u: goto label_1cac84;
            case 0x1CAC88u: goto label_1cac88;
            case 0x1CAC8Cu: goto label_1cac8c;
            case 0x1CAC90u: goto label_1cac90;
            case 0x1CAC94u: goto label_1cac94;
            case 0x1CAC98u: goto label_1cac98;
            case 0x1CAC9Cu: goto label_1cac9c;
            case 0x1CACA0u: goto label_1caca0;
            case 0x1CACA4u: goto label_1caca4;
            case 0x1CACA8u: goto label_1caca8;
            case 0x1CACACu: goto label_1cacac;
            case 0x1CACB0u: goto label_1cacb0;
            case 0x1CACB4u: goto label_1cacb4;
            case 0x1CACB8u: goto label_1cacb8;
            case 0x1CACBCu: goto label_1cacbc;
            case 0x1CACC0u: goto label_1cacc0;
            case 0x1CACC4u: goto label_1cacc4;
            case 0x1CACC8u: goto label_1cacc8;
            case 0x1CACCCu: goto label_1caccc;
            case 0x1CACD0u: goto label_1cacd0;
            case 0x1CACD4u: goto label_1cacd4;
            case 0x1CACD8u: goto label_1cacd8;
            case 0x1CACDCu: goto label_1cacdc;
            case 0x1CACE0u: goto label_1cace0;
            case 0x1CACE4u: goto label_1cace4;
            case 0x1CACE8u: goto label_1cace8;
            case 0x1CACECu: goto label_1cacec;
            case 0x1CACF0u: goto label_1cacf0;
            case 0x1CACF4u: goto label_1cacf4;
            case 0x1CACF8u: goto label_1cacf8;
            case 0x1CACFCu: goto label_1cacfc;
            case 0x1CAD00u: goto label_1cad00;
            case 0x1CAD04u: goto label_1cad04;
            case 0x1CAD08u: goto label_1cad08;
            case 0x1CAD0Cu: goto label_1cad0c;
            case 0x1CAD10u: goto label_1cad10;
            case 0x1CAD14u: goto label_1cad14;
            case 0x1CAD18u: goto label_1cad18;
            case 0x1CAD1Cu: goto label_1cad1c;
            case 0x1CAD20u: goto label_1cad20;
            case 0x1CAD24u: goto label_1cad24;
            case 0x1CAD28u: goto label_1cad28;
            case 0x1CAD2Cu: goto label_1cad2c;
            case 0x1CAD30u: goto label_1cad30;
            case 0x1CAD34u: goto label_1cad34;
            case 0x1CAD38u: goto label_1cad38;
            case 0x1CAD3Cu: goto label_1cad3c;
            case 0x1CAD40u: goto label_1cad40;
            case 0x1CAD44u: goto label_1cad44;
            case 0x1CAD48u: goto label_1cad48;
            case 0x1CAD4Cu: goto label_1cad4c;
            case 0x1CAD50u: goto label_1cad50;
            case 0x1CAD54u: goto label_1cad54;
            case 0x1CAD58u: goto label_1cad58;
            case 0x1CAD5Cu: goto label_1cad5c;
            case 0x1CAD60u: goto label_1cad60;
            case 0x1CAD64u: goto label_1cad64;
            case 0x1CAD68u: goto label_1cad68;
            case 0x1CAD6Cu: goto label_1cad6c;
            case 0x1CAD70u: goto label_1cad70;
            case 0x1CAD74u: goto label_1cad74;
            case 0x1CAD78u: goto label_1cad78;
            case 0x1CAD7Cu: goto label_1cad7c;
            case 0x1CAD80u: goto label_1cad80;
            case 0x1CAD84u: goto label_1cad84;
            case 0x1CAD88u: goto label_1cad88;
            case 0x1CAD8Cu: goto label_1cad8c;
            case 0x1CAD90u: goto label_1cad90;
            case 0x1CAD94u: goto label_1cad94;
            case 0x1CAD98u: goto label_1cad98;
            case 0x1CAD9Cu: goto label_1cad9c;
            case 0x1CADA0u: goto label_1cada0;
            case 0x1CADA4u: goto label_1cada4;
            case 0x1CADA8u: goto label_1cada8;
            case 0x1CADACu: goto label_1cadac;
            case 0x1CADB0u: goto label_1cadb0;
            case 0x1CADB4u: goto label_1cadb4;
            case 0x1CADB8u: goto label_1cadb8;
            case 0x1CADBCu: goto label_1cadbc;
            case 0x1CADC0u: goto label_1cadc0;
            case 0x1CADC4u: goto label_1cadc4;
            case 0x1CADC8u: goto label_1cadc8;
            case 0x1CADCCu: goto label_1cadcc;
            case 0x1CADD0u: goto label_1cadd0;
            case 0x1CADD4u: goto label_1cadd4;
            case 0x1CADD8u: goto label_1cadd8;
            case 0x1CADDCu: goto label_1caddc;
            case 0x1CADE0u: goto label_1cade0;
            case 0x1CADE4u: goto label_1cade4;
            case 0x1CADE8u: goto label_1cade8;
            case 0x1CADECu: goto label_1cadec;
            case 0x1CADF0u: goto label_1cadf0;
            case 0x1CADF4u: goto label_1cadf4;
            case 0x1CADF8u: goto label_1cadf8;
            case 0x1CADFCu: goto label_1cadfc;
            case 0x1CAE00u: goto label_1cae00;
            case 0x1CAE04u: goto label_1cae04;
            case 0x1CAE08u: goto label_1cae08;
            case 0x1CAE0Cu: goto label_1cae0c;
            case 0x1CAE10u: goto label_1cae10;
            case 0x1CAE14u: goto label_1cae14;
            case 0x1CAE18u: goto label_1cae18;
            case 0x1CAE1Cu: goto label_1cae1c;
            case 0x1CAE20u: goto label_1cae20;
            case 0x1CAE24u: goto label_1cae24;
            case 0x1CAE28u: goto label_1cae28;
            case 0x1CAE2Cu: goto label_1cae2c;
            case 0x1CAE30u: goto label_1cae30;
            case 0x1CAE34u: goto label_1cae34;
            case 0x1CAE38u: goto label_1cae38;
            case 0x1CAE3Cu: goto label_1cae3c;
            case 0x1CAE40u: goto label_1cae40;
            case 0x1CAE44u: goto label_1cae44;
            case 0x1CAE48u: goto label_1cae48;
            case 0x1CAE4Cu: goto label_1cae4c;
            case 0x1CAE50u: goto label_1cae50;
            case 0x1CAE54u: goto label_1cae54;
            case 0x1CAE58u: goto label_1cae58;
            case 0x1CAE5Cu: goto label_1cae5c;
            case 0x1CAE60u: goto label_1cae60;
            case 0x1CAE64u: goto label_1cae64;
            case 0x1CAE68u: goto label_1cae68;
            case 0x1CAE6Cu: goto label_1cae6c;
            case 0x1CAE70u: goto label_1cae70;
            case 0x1CAE74u: goto label_1cae74;
            case 0x1CAE78u: goto label_1cae78;
            case 0x1CAE7Cu: goto label_1cae7c;
            case 0x1CAE80u: goto label_1cae80;
            case 0x1CAE84u: goto label_1cae84;
            case 0x1CAE88u: goto label_1cae88;
            case 0x1CAE8Cu: goto label_1cae8c;
            case 0x1CAE90u: goto label_1cae90;
            case 0x1CAE94u: goto label_1cae94;
            case 0x1CAE98u: goto label_1cae98;
            case 0x1CAE9Cu: goto label_1cae9c;
            case 0x1CAEA0u: goto label_1caea0;
            case 0x1CAEA4u: goto label_1caea4;
            case 0x1CAEA8u: goto label_1caea8;
            case 0x1CAEACu: goto label_1caeac;
            case 0x1CAEB0u: goto label_1caeb0;
            case 0x1CAEB4u: goto label_1caeb4;
            case 0x1CAEB8u: goto label_1caeb8;
            case 0x1CAEBCu: goto label_1caebc;
            case 0x1CAEC0u: goto label_1caec0;
            case 0x1CAEC4u: goto label_1caec4;
            case 0x1CAEC8u: goto label_1caec8;
            case 0x1CAECCu: goto label_1caecc;
            case 0x1CAED0u: goto label_1caed0;
            case 0x1CAED4u: goto label_1caed4;
            case 0x1CAED8u: goto label_1caed8;
            case 0x1CAEDCu: goto label_1caedc;
            case 0x1CAEE0u: goto label_1caee0;
            case 0x1CAEE4u: goto label_1caee4;
            case 0x1CAEE8u: goto label_1caee8;
            case 0x1CAEECu: goto label_1caeec;
            case 0x1CAEF0u: goto label_1caef0;
            case 0x1CAEF4u: goto label_1caef4;
            case 0x1CAEF8u: goto label_1caef8;
            case 0x1CAEFCu: goto label_1caefc;
            case 0x1CAF00u: goto label_1caf00;
            case 0x1CAF04u: goto label_1caf04;
            case 0x1CAF08u: goto label_1caf08;
            case 0x1CAF0Cu: goto label_1caf0c;
            case 0x1CAF10u: goto label_1caf10;
            case 0x1CAF14u: goto label_1caf14;
            case 0x1CAF18u: goto label_1caf18;
            case 0x1CAF1Cu: goto label_1caf1c;
            case 0x1CAF20u: goto label_1caf20;
            case 0x1CAF24u: goto label_1caf24;
            case 0x1CAF28u: goto label_1caf28;
            case 0x1CAF2Cu: goto label_1caf2c;
            case 0x1CAF30u: goto label_1caf30;
            case 0x1CAF34u: goto label_1caf34;
            case 0x1CAF38u: goto label_1caf38;
            case 0x1CAF3Cu: goto label_1caf3c;
            case 0x1CAF40u: goto label_1caf40;
            case 0x1CAF44u: goto label_1caf44;
            case 0x1CAF48u: goto label_1caf48;
            case 0x1CAF4Cu: goto label_1caf4c;
            case 0x1CAF50u: goto label_1caf50;
            case 0x1CAF54u: goto label_1caf54;
            case 0x1CAF58u: goto label_1caf58;
            case 0x1CAF5Cu: goto label_1caf5c;
            case 0x1CAF60u: goto label_1caf60;
            case 0x1CAF64u: goto label_1caf64;
            case 0x1CAF68u: goto label_1caf68;
            case 0x1CAF6Cu: goto label_1caf6c;
            case 0x1CAF70u: goto label_1caf70;
            case 0x1CAF74u: goto label_1caf74;
            case 0x1CAF78u: goto label_1caf78;
            case 0x1CAF7Cu: goto label_1caf7c;
            case 0x1CAF80u: goto label_1caf80;
            case 0x1CAF84u: goto label_1caf84;
            case 0x1CAF88u: goto label_1caf88;
            case 0x1CAF8Cu: goto label_1caf8c;
            case 0x1CAF90u: goto label_1caf90;
            case 0x1CAF94u: goto label_1caf94;
            case 0x1CAF98u: goto label_1caf98;
            case 0x1CAF9Cu: goto label_1caf9c;
            case 0x1CAFA0u: goto label_1cafa0;
            case 0x1CAFA4u: goto label_1cafa4;
            case 0x1CAFA8u: goto label_1cafa8;
            case 0x1CAFACu: goto label_1cafac;
            case 0x1CAFB0u: goto label_1cafb0;
            case 0x1CAFB4u: goto label_1cafb4;
            case 0x1CAFB8u: goto label_1cafb8;
            case 0x1CAFBCu: goto label_1cafbc;
            case 0x1CAFC0u: goto label_1cafc0;
            case 0x1CAFC4u: goto label_1cafc4;
            case 0x1CAFC8u: goto label_1cafc8;
            case 0x1CAFCCu: goto label_1cafcc;
            case 0x1CAFD0u: goto label_1cafd0;
            case 0x1CAFD4u: goto label_1cafd4;
            case 0x1CAFD8u: goto label_1cafd8;
            case 0x1CAFDCu: goto label_1cafdc;
            case 0x1CAFE0u: goto label_1cafe0;
            case 0x1CAFE4u: goto label_1cafe4;
            case 0x1CAFE8u: goto label_1cafe8;
            case 0x1CAFECu: goto label_1cafec;
            case 0x1CAFF0u: goto label_1caff0;
            case 0x1CAFF4u: goto label_1caff4;
            case 0x1CAFF8u: goto label_1caff8;
            case 0x1CAFFCu: goto label_1caffc;
            case 0x1CB000u: goto label_1cb000;
            case 0x1CB004u: goto label_1cb004;
            case 0x1CB008u: goto label_1cb008;
            case 0x1CB00Cu: goto label_1cb00c;
            case 0x1CB010u: goto label_1cb010;
            case 0x1CB014u: goto label_1cb014;
            case 0x1CB018u: goto label_1cb018;
            case 0x1CB01Cu: goto label_1cb01c;
            case 0x1CB020u: goto label_1cb020;
            case 0x1CB024u: goto label_1cb024;
            case 0x1CB028u: goto label_1cb028;
            case 0x1CB02Cu: goto label_1cb02c;
            case 0x1CB030u: goto label_1cb030;
            case 0x1CB034u: goto label_1cb034;
            case 0x1CB038u: goto label_1cb038;
            case 0x1CB03Cu: goto label_1cb03c;
            case 0x1CB040u: goto label_1cb040;
            case 0x1CB044u: goto label_1cb044;
            case 0x1CB048u: goto label_1cb048;
            case 0x1CB04Cu: goto label_1cb04c;
            case 0x1CB050u: goto label_1cb050;
            case 0x1CB054u: goto label_1cb054;
            case 0x1CB058u: goto label_1cb058;
            case 0x1CB05Cu: goto label_1cb05c;
            case 0x1CB060u: goto label_1cb060;
            case 0x1CB064u: goto label_1cb064;
            case 0x1CB068u: goto label_1cb068;
            case 0x1CB06Cu: goto label_1cb06c;
            case 0x1CB070u: goto label_1cb070;
            case 0x1CB074u: goto label_1cb074;
            case 0x1CB078u: goto label_1cb078;
            case 0x1CB07Cu: goto label_1cb07c;
            case 0x1CB080u: goto label_1cb080;
            case 0x1CB084u: goto label_1cb084;
            case 0x1CB088u: goto label_1cb088;
            case 0x1CB08Cu: goto label_1cb08c;
            case 0x1CB090u: goto label_1cb090;
            case 0x1CB094u: goto label_1cb094;
            case 0x1CB098u: goto label_1cb098;
            case 0x1CB09Cu: goto label_1cb09c;
            case 0x1CB0A0u: goto label_1cb0a0;
            case 0x1CB0A4u: goto label_1cb0a4;
            case 0x1CB0A8u: goto label_1cb0a8;
            case 0x1CB0ACu: goto label_1cb0ac;
            case 0x1CB0B0u: goto label_1cb0b0;
            case 0x1CB0B4u: goto label_1cb0b4;
            case 0x1CB0B8u: goto label_1cb0b8;
            case 0x1CB0BCu: goto label_1cb0bc;
            case 0x1CB0C0u: goto label_1cb0c0;
            case 0x1CB0C4u: goto label_1cb0c4;
            case 0x1CB0C8u: goto label_1cb0c8;
            case 0x1CB0CCu: goto label_1cb0cc;
            case 0x1CB0D0u: goto label_1cb0d0;
            case 0x1CB0D4u: goto label_1cb0d4;
            case 0x1CB0D8u: goto label_1cb0d8;
            case 0x1CB0DCu: goto label_1cb0dc;
            case 0x1CB0E0u: goto label_1cb0e0;
            case 0x1CB0E4u: goto label_1cb0e4;
            case 0x1CB0E8u: goto label_1cb0e8;
            case 0x1CB0ECu: goto label_1cb0ec;
            case 0x1CB0F0u: goto label_1cb0f0;
            case 0x1CB0F4u: goto label_1cb0f4;
            case 0x1CB0F8u: goto label_1cb0f8;
            case 0x1CB0FCu: goto label_1cb0fc;
            case 0x1CB100u: goto label_1cb100;
            case 0x1CB104u: goto label_1cb104;
            case 0x1CB108u: goto label_1cb108;
            case 0x1CB10Cu: goto label_1cb10c;
            case 0x1CB110u: goto label_1cb110;
            case 0x1CB114u: goto label_1cb114;
            case 0x1CB118u: goto label_1cb118;
            case 0x1CB11Cu: goto label_1cb11c;
            case 0x1CB120u: goto label_1cb120;
            case 0x1CB124u: goto label_1cb124;
            case 0x1CB128u: goto label_1cb128;
            case 0x1CB12Cu: goto label_1cb12c;
            case 0x1CB130u: goto label_1cb130;
            case 0x1CB134u: goto label_1cb134;
            case 0x1CB138u: goto label_1cb138;
            case 0x1CB13Cu: goto label_1cb13c;
            case 0x1CB140u: goto label_1cb140;
            case 0x1CB144u: goto label_1cb144;
            case 0x1CB148u: goto label_1cb148;
            case 0x1CB14Cu: goto label_1cb14c;
            case 0x1CB150u: goto label_1cb150;
            case 0x1CB154u: goto label_1cb154;
            case 0x1CB158u: goto label_1cb158;
            case 0x1CB15Cu: goto label_1cb15c;
            case 0x1CB160u: goto label_1cb160;
            case 0x1CB164u: goto label_1cb164;
            case 0x1CB168u: goto label_1cb168;
            case 0x1CB16Cu: goto label_1cb16c;
            case 0x1CB170u: goto label_1cb170;
            case 0x1CB174u: goto label_1cb174;
            case 0x1CB178u: goto label_1cb178;
            case 0x1CB17Cu: goto label_1cb17c;
            case 0x1CB180u: goto label_1cb180;
            case 0x1CB184u: goto label_1cb184;
            case 0x1CB188u: goto label_1cb188;
            case 0x1CB18Cu: goto label_1cb18c;
            case 0x1CB190u: goto label_1cb190;
            case 0x1CB194u: goto label_1cb194;
            case 0x1CB198u: goto label_1cb198;
            case 0x1CB19Cu: goto label_1cb19c;
            case 0x1CB1A0u: goto label_1cb1a0;
            case 0x1CB1A4u: goto label_1cb1a4;
            case 0x1CB1A8u: goto label_1cb1a8;
            case 0x1CB1ACu: goto label_1cb1ac;
            case 0x1CB1B0u: goto label_1cb1b0;
            case 0x1CB1B4u: goto label_1cb1b4;
            case 0x1CB1B8u: goto label_1cb1b8;
            case 0x1CB1BCu: goto label_1cb1bc;
            case 0x1CB1C0u: goto label_1cb1c0;
            case 0x1CB1C4u: goto label_1cb1c4;
            case 0x1CB1C8u: goto label_1cb1c8;
            case 0x1CB1CCu: goto label_1cb1cc;
            case 0x1CB1D0u: goto label_1cb1d0;
            case 0x1CB1D4u: goto label_1cb1d4;
            case 0x1CB1D8u: goto label_1cb1d8;
            case 0x1CB1DCu: goto label_1cb1dc;
            case 0x1CB1E0u: goto label_1cb1e0;
            case 0x1CB1E4u: goto label_1cb1e4;
            case 0x1CB1E8u: goto label_1cb1e8;
            case 0x1CB1ECu: goto label_1cb1ec;
            case 0x1CB1F0u: goto label_1cb1f0;
            case 0x1CB1F4u: goto label_1cb1f4;
            case 0x1CB1F8u: goto label_1cb1f8;
            case 0x1CB1FCu: goto label_1cb1fc;
            case 0x1CB200u: goto label_1cb200;
            case 0x1CB204u: goto label_1cb204;
            case 0x1CB208u: goto label_1cb208;
            case 0x1CB20Cu: goto label_1cb20c;
            case 0x1CB210u: goto label_1cb210;
            case 0x1CB214u: goto label_1cb214;
            case 0x1CB218u: goto label_1cb218;
            case 0x1CB21Cu: goto label_1cb21c;
            case 0x1CB220u: goto label_1cb220;
            case 0x1CB224u: goto label_1cb224;
            case 0x1CB228u: goto label_1cb228;
            case 0x1CB22Cu: goto label_1cb22c;
            case 0x1CB230u: goto label_1cb230;
            case 0x1CB234u: goto label_1cb234;
            case 0x1CB238u: goto label_1cb238;
            case 0x1CB23Cu: goto label_1cb23c;
            case 0x1CB240u: goto label_1cb240;
            case 0x1CB244u: goto label_1cb244;
            case 0x1CB248u: goto label_1cb248;
            case 0x1CB24Cu: goto label_1cb24c;
            case 0x1CB250u: goto label_1cb250;
            case 0x1CB254u: goto label_1cb254;
            case 0x1CB258u: goto label_1cb258;
            case 0x1CB25Cu: goto label_1cb25c;
            case 0x1CB260u: goto label_1cb260;
            case 0x1CB264u: goto label_1cb264;
            case 0x1CB268u: goto label_1cb268;
            case 0x1CB26Cu: goto label_1cb26c;
            case 0x1CB270u: goto label_1cb270;
            case 0x1CB274u: goto label_1cb274;
            case 0x1CB278u: goto label_1cb278;
            case 0x1CB27Cu: goto label_1cb27c;
            case 0x1CB280u: goto label_1cb280;
            case 0x1CB284u: goto label_1cb284;
            case 0x1CB288u: goto label_1cb288;
            case 0x1CB28Cu: goto label_1cb28c;
            case 0x1CB290u: goto label_1cb290;
            case 0x1CB294u: goto label_1cb294;
            case 0x1CB298u: goto label_1cb298;
            case 0x1CB29Cu: goto label_1cb29c;
            case 0x1CB2A0u: goto label_1cb2a0;
            case 0x1CB2A4u: goto label_1cb2a4;
            case 0x1CB2A8u: goto label_1cb2a8;
            case 0x1CB2ACu: goto label_1cb2ac;
            case 0x1CB2B0u: goto label_1cb2b0;
            case 0x1CB2B4u: goto label_1cb2b4;
            case 0x1CB2B8u: goto label_1cb2b8;
            case 0x1CB2BCu: goto label_1cb2bc;
            case 0x1CB2C0u: goto label_1cb2c0;
            case 0x1CB2C4u: goto label_1cb2c4;
            case 0x1CB2C8u: goto label_1cb2c8;
            case 0x1CB2CCu: goto label_1cb2cc;
            case 0x1CB2D0u: goto label_1cb2d0;
            case 0x1CB2D4u: goto label_1cb2d4;
            case 0x1CB2D8u: goto label_1cb2d8;
            case 0x1CB2DCu: goto label_1cb2dc;
            case 0x1CB2E0u: goto label_1cb2e0;
            case 0x1CB2E4u: goto label_1cb2e4;
            case 0x1CB2E8u: goto label_1cb2e8;
            case 0x1CB2ECu: goto label_1cb2ec;
            case 0x1CB2F0u: goto label_1cb2f0;
            case 0x1CB2F4u: goto label_1cb2f4;
            case 0x1CB2F8u: goto label_1cb2f8;
            case 0x1CB2FCu: goto label_1cb2fc;
            case 0x1CB300u: goto label_1cb300;
            case 0x1CB304u: goto label_1cb304;
            case 0x1CB308u: goto label_1cb308;
            case 0x1CB30Cu: goto label_1cb30c;
            case 0x1CB310u: goto label_1cb310;
            case 0x1CB314u: goto label_1cb314;
            case 0x1CB318u: goto label_1cb318;
            case 0x1CB31Cu: goto label_1cb31c;
            case 0x1CB320u: goto label_1cb320;
            case 0x1CB324u: goto label_1cb324;
            case 0x1CB328u: goto label_1cb328;
            case 0x1CB32Cu: goto label_1cb32c;
            case 0x1CB330u: goto label_1cb330;
            case 0x1CB334u: goto label_1cb334;
            case 0x1CB338u: goto label_1cb338;
            case 0x1CB33Cu: goto label_1cb33c;
            case 0x1CB340u: goto label_1cb340;
            case 0x1CB344u: goto label_1cb344;
            case 0x1CB348u: goto label_1cb348;
            case 0x1CB34Cu: goto label_1cb34c;
            case 0x1CB350u: goto label_1cb350;
            case 0x1CB354u: goto label_1cb354;
            case 0x1CB358u: goto label_1cb358;
            case 0x1CB35Cu: goto label_1cb35c;
            case 0x1CB360u: goto label_1cb360;
            case 0x1CB364u: goto label_1cb364;
            case 0x1CB368u: goto label_1cb368;
            case 0x1CB36Cu: goto label_1cb36c;
            case 0x1CB370u: goto label_1cb370;
            case 0x1CB374u: goto label_1cb374;
            case 0x1CB378u: goto label_1cb378;
            case 0x1CB37Cu: goto label_1cb37c;
            case 0x1CB380u: goto label_1cb380;
            case 0x1CB384u: goto label_1cb384;
            case 0x1CB388u: goto label_1cb388;
            case 0x1CB38Cu: goto label_1cb38c;
            case 0x1CB390u: goto label_1cb390;
            case 0x1CB394u: goto label_1cb394;
            case 0x1CB398u: goto label_1cb398;
            case 0x1CB39Cu: goto label_1cb39c;
            case 0x1CB3A0u: goto label_1cb3a0;
            case 0x1CB3A4u: goto label_1cb3a4;
            case 0x1CB3A8u: goto label_1cb3a8;
            case 0x1CB3ACu: goto label_1cb3ac;
            case 0x1CB3B0u: goto label_1cb3b0;
            case 0x1CB3B4u: goto label_1cb3b4;
            case 0x1CB3B8u: goto label_1cb3b8;
            case 0x1CB3BCu: goto label_1cb3bc;
            case 0x1CB3C0u: goto label_1cb3c0;
            case 0x1CB3C4u: goto label_1cb3c4;
            case 0x1CB3C8u: goto label_1cb3c8;
            case 0x1CB3CCu: goto label_1cb3cc;
            case 0x1CB3D0u: goto label_1cb3d0;
            case 0x1CB3D4u: goto label_1cb3d4;
            case 0x1CB3D8u: goto label_1cb3d8;
            case 0x1CB3DCu: goto label_1cb3dc;
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3E4u: goto label_1cb3e4;
            case 0x1CB3E8u: goto label_1cb3e8;
            case 0x1CB3ECu: goto label_1cb3ec;
            case 0x1CB3F0u: goto label_1cb3f0;
            case 0x1CB3F4u: goto label_1cb3f4;
            case 0x1CB3F8u: goto label_1cb3f8;
            case 0x1CB3FCu: goto label_1cb3fc;
            case 0x1CB400u: goto label_1cb400;
            case 0x1CB404u: goto label_1cb404;
            case 0x1CB408u: goto label_1cb408;
            case 0x1CB40Cu: goto label_1cb40c;
            case 0x1CB410u: goto label_1cb410;
            case 0x1CB414u: goto label_1cb414;
            case 0x1CB418u: goto label_1cb418;
            case 0x1CB41Cu: goto label_1cb41c;
            case 0x1CB420u: goto label_1cb420;
            case 0x1CB424u: goto label_1cb424;
            case 0x1CB428u: goto label_1cb428;
            case 0x1CB42Cu: goto label_1cb42c;
            case 0x1CB430u: goto label_1cb430;
            case 0x1CB434u: goto label_1cb434;
            case 0x1CB438u: goto label_1cb438;
            case 0x1CB43Cu: goto label_1cb43c;
            case 0x1CB440u: goto label_1cb440;
            case 0x1CB444u: goto label_1cb444;
            case 0x1CB448u: goto label_1cb448;
            case 0x1CB44Cu: goto label_1cb44c;
            case 0x1CB450u: goto label_1cb450;
            case 0x1CB454u: goto label_1cb454;
            case 0x1CB458u: goto label_1cb458;
            case 0x1CB45Cu: goto label_1cb45c;
            case 0x1CB460u: goto label_1cb460;
            case 0x1CB464u: goto label_1cb464;
            case 0x1CB468u: goto label_1cb468;
            case 0x1CB46Cu: goto label_1cb46c;
            case 0x1CB470u: goto label_1cb470;
            case 0x1CB474u: goto label_1cb474;
            case 0x1CB478u: goto label_1cb478;
            case 0x1CB47Cu: goto label_1cb47c;
            case 0x1CB480u: goto label_1cb480;
            case 0x1CB484u: goto label_1cb484;
            case 0x1CB488u: goto label_1cb488;
            case 0x1CB48Cu: goto label_1cb48c;
            case 0x1CB490u: goto label_1cb490;
            case 0x1CB494u: goto label_1cb494;
            case 0x1CB498u: goto label_1cb498;
            case 0x1CB49Cu: goto label_1cb49c;
            case 0x1CB4A0u: goto label_1cb4a0;
            case 0x1CB4A4u: goto label_1cb4a4;
            case 0x1CB4A8u: goto label_1cb4a8;
            case 0x1CB4ACu: goto label_1cb4ac;
            case 0x1CB4B0u: goto label_1cb4b0;
            case 0x1CB4B4u: goto label_1cb4b4;
            case 0x1CB4B8u: goto label_1cb4b8;
            case 0x1CB4BCu: goto label_1cb4bc;
            case 0x1CB4C0u: goto label_1cb4c0;
            case 0x1CB4C4u: goto label_1cb4c4;
            case 0x1CB4C8u: goto label_1cb4c8;
            case 0x1CB4CCu: goto label_1cb4cc;
            case 0x1CB4D0u: goto label_1cb4d0;
            case 0x1CB4D4u: goto label_1cb4d4;
            case 0x1CB4D8u: goto label_1cb4d8;
            case 0x1CB4DCu: goto label_1cb4dc;
            case 0x1CB4E0u: goto label_1cb4e0;
            case 0x1CB4E4u: goto label_1cb4e4;
            case 0x1CB4E8u: goto label_1cb4e8;
            case 0x1CB4ECu: goto label_1cb4ec;
            case 0x1CB4F0u: goto label_1cb4f0;
            case 0x1CB4F4u: goto label_1cb4f4;
            case 0x1CB4F8u: goto label_1cb4f8;
            case 0x1CB4FCu: goto label_1cb4fc;
            case 0x1CB500u: goto label_1cb500;
            case 0x1CB504u: goto label_1cb504;
            case 0x1CB508u: goto label_1cb508;
            case 0x1CB50Cu: goto label_1cb50c;
            case 0x1CB510u: goto label_1cb510;
            case 0x1CB514u: goto label_1cb514;
            case 0x1CB518u: goto label_1cb518;
            case 0x1CB51Cu: goto label_1cb51c;
            case 0x1CB520u: goto label_1cb520;
            case 0x1CB524u: goto label_1cb524;
            case 0x1CB528u: goto label_1cb528;
            case 0x1CB52Cu: goto label_1cb52c;
            case 0x1CB530u: goto label_1cb530;
            case 0x1CB534u: goto label_1cb534;
            case 0x1CB538u: goto label_1cb538;
            case 0x1CB53Cu: goto label_1cb53c;
            case 0x1CB540u: goto label_1cb540;
            case 0x1CB544u: goto label_1cb544;
            case 0x1CB548u: goto label_1cb548;
            case 0x1CB54Cu: goto label_1cb54c;
            case 0x1CB550u: goto label_1cb550;
            case 0x1CB554u: goto label_1cb554;
            case 0x1CB558u: goto label_1cb558;
            case 0x1CB55Cu: goto label_1cb55c;
            case 0x1CB560u: goto label_1cb560;
            case 0x1CB564u: goto label_1cb564;
            case 0x1CB568u: goto label_1cb568;
            case 0x1CB56Cu: goto label_1cb56c;
            case 0x1CB570u: goto label_1cb570;
            case 0x1CB574u: goto label_1cb574;
            case 0x1CB578u: goto label_1cb578;
            case 0x1CB57Cu: goto label_1cb57c;
            case 0x1CB580u: goto label_1cb580;
            case 0x1CB584u: goto label_1cb584;
            case 0x1CB588u: goto label_1cb588;
            case 0x1CB58Cu: goto label_1cb58c;
            case 0x1CB590u: goto label_1cb590;
            case 0x1CB594u: goto label_1cb594;
            case 0x1CB598u: goto label_1cb598;
            case 0x1CB59Cu: goto label_1cb59c;
            case 0x1CB5A0u: goto label_1cb5a0;
            case 0x1CB5A4u: goto label_1cb5a4;
            case 0x1CB5A8u: goto label_1cb5a8;
            case 0x1CB5ACu: goto label_1cb5ac;
            case 0x1CB5B0u: goto label_1cb5b0;
            case 0x1CB5B4u: goto label_1cb5b4;
            case 0x1CB5B8u: goto label_1cb5b8;
            case 0x1CB5BCu: goto label_1cb5bc;
            case 0x1CB5C0u: goto label_1cb5c0;
            case 0x1CB5C4u: goto label_1cb5c4;
            case 0x1CB5C8u: goto label_1cb5c8;
            case 0x1CB5CCu: goto label_1cb5cc;
            case 0x1CB5D0u: goto label_1cb5d0;
            case 0x1CB5D4u: goto label_1cb5d4;
            case 0x1CB5D8u: goto label_1cb5d8;
            case 0x1CB5DCu: goto label_1cb5dc;
            case 0x1CB5E0u: goto label_1cb5e0;
            case 0x1CB5E4u: goto label_1cb5e4;
            case 0x1CB5E8u: goto label_1cb5e8;
            case 0x1CB5ECu: goto label_1cb5ec;
            case 0x1CB5F0u: goto label_1cb5f0;
            case 0x1CB5F4u: goto label_1cb5f4;
            case 0x1CB5F8u: goto label_1cb5f8;
            case 0x1CB5FCu: goto label_1cb5fc;
            case 0x1CB600u: goto label_1cb600;
            case 0x1CB604u: goto label_1cb604;
            case 0x1CB608u: goto label_1cb608;
            case 0x1CB60Cu: goto label_1cb60c;
            case 0x1CB610u: goto label_1cb610;
            case 0x1CB614u: goto label_1cb614;
            case 0x1CB618u: goto label_1cb618;
            case 0x1CB61Cu: goto label_1cb61c;
            case 0x1CB620u: goto label_1cb620;
            case 0x1CB624u: goto label_1cb624;
            case 0x1CB628u: goto label_1cb628;
            case 0x1CB62Cu: goto label_1cb62c;
            case 0x1CB630u: goto label_1cb630;
            case 0x1CB634u: goto label_1cb634;
            case 0x1CB638u: goto label_1cb638;
            case 0x1CB63Cu: goto label_1cb63c;
            case 0x1CB640u: goto label_1cb640;
            case 0x1CB644u: goto label_1cb644;
            case 0x1CB648u: goto label_1cb648;
            case 0x1CB64Cu: goto label_1cb64c;
            case 0x1CB650u: goto label_1cb650;
            case 0x1CB654u: goto label_1cb654;
            case 0x1CB658u: goto label_1cb658;
            case 0x1CB65Cu: goto label_1cb65c;
            case 0x1CB660u: goto label_1cb660;
            case 0x1CB664u: goto label_1cb664;
            case 0x1CB668u: goto label_1cb668;
            case 0x1CB66Cu: goto label_1cb66c;
            case 0x1CB670u: goto label_1cb670;
            case 0x1CB674u: goto label_1cb674;
            case 0x1CB678u: goto label_1cb678;
            case 0x1CB67Cu: goto label_1cb67c;
            case 0x1CB680u: goto label_1cb680;
            case 0x1CB684u: goto label_1cb684;
            case 0x1CB688u: goto label_1cb688;
            case 0x1CB68Cu: goto label_1cb68c;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB694u: goto label_1cb694;
            case 0x1CB698u: goto label_1cb698;
            case 0x1CB69Cu: goto label_1cb69c;
            case 0x1CB6A0u: goto label_1cb6a0;
            case 0x1CB6A4u: goto label_1cb6a4;
            case 0x1CB6A8u: goto label_1cb6a8;
            case 0x1CB6ACu: goto label_1cb6ac;
            case 0x1CB6B0u: goto label_1cb6b0;
            case 0x1CB6B4u: goto label_1cb6b4;
            case 0x1CB6B8u: goto label_1cb6b8;
            case 0x1CB6BCu: goto label_1cb6bc;
            case 0x1CB6C0u: goto label_1cb6c0;
            case 0x1CB6C4u: goto label_1cb6c4;
            case 0x1CB6C8u: goto label_1cb6c8;
            case 0x1CB6CCu: goto label_1cb6cc;
            case 0x1CB6D0u: goto label_1cb6d0;
            case 0x1CB6D4u: goto label_1cb6d4;
            case 0x1CB6D8u: goto label_1cb6d8;
            case 0x1CB6DCu: goto label_1cb6dc;
            case 0x1CB6E0u: goto label_1cb6e0;
            case 0x1CB6E4u: goto label_1cb6e4;
            case 0x1CB6E8u: goto label_1cb6e8;
            case 0x1CB6ECu: goto label_1cb6ec;
            case 0x1CB6F0u: goto label_1cb6f0;
            case 0x1CB6F4u: goto label_1cb6f4;
            case 0x1CB6F8u: goto label_1cb6f8;
            case 0x1CB6FCu: goto label_1cb6fc;
            case 0x1CB700u: goto label_1cb700;
            case 0x1CB704u: goto label_1cb704;
            case 0x1CB708u: goto label_1cb708;
            case 0x1CB70Cu: goto label_1cb70c;
            case 0x1CB710u: goto label_1cb710;
            case 0x1CB714u: goto label_1cb714;
            case 0x1CB718u: goto label_1cb718;
            case 0x1CB71Cu: goto label_1cb71c;
            case 0x1CB720u: goto label_1cb720;
            case 0x1CB724u: goto label_1cb724;
            case 0x1CB728u: goto label_1cb728;
            case 0x1CB72Cu: goto label_1cb72c;
            case 0x1CB730u: goto label_1cb730;
            case 0x1CB734u: goto label_1cb734;
            case 0x1CB738u: goto label_1cb738;
            case 0x1CB73Cu: goto label_1cb73c;
            case 0x1CB740u: goto label_1cb740;
            case 0x1CB744u: goto label_1cb744;
            case 0x1CB748u: goto label_1cb748;
            case 0x1CB74Cu: goto label_1cb74c;
            case 0x1CB750u: goto label_1cb750;
            case 0x1CB754u: goto label_1cb754;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB75Cu: goto label_1cb75c;
            case 0x1CB760u: goto label_1cb760;
            case 0x1CB764u: goto label_1cb764;
            case 0x1CB768u: goto label_1cb768;
            case 0x1CB76Cu: goto label_1cb76c;
            case 0x1CB770u: goto label_1cb770;
            case 0x1CB774u: goto label_1cb774;
            case 0x1CB778u: goto label_1cb778;
            case 0x1CB77Cu: goto label_1cb77c;
            case 0x1CB780u: goto label_1cb780;
            case 0x1CB784u: goto label_1cb784;
            case 0x1CB788u: goto label_1cb788;
            case 0x1CB78Cu: goto label_1cb78c;
            case 0x1CB790u: goto label_1cb790;
            case 0x1CB794u: goto label_1cb794;
            case 0x1CB798u: goto label_1cb798;
            case 0x1CB79Cu: goto label_1cb79c;
            case 0x1CB7A0u: goto label_1cb7a0;
            case 0x1CB7A4u: goto label_1cb7a4;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7ACu: goto label_1cb7ac;
            case 0x1CB7B0u: goto label_1cb7b0;
            case 0x1CB7B4u: goto label_1cb7b4;
            case 0x1CB7B8u: goto label_1cb7b8;
            case 0x1CB7BCu: goto label_1cb7bc;
            case 0x1CB7C0u: goto label_1cb7c0;
            case 0x1CB7C4u: goto label_1cb7c4;
            case 0x1CB7C8u: goto label_1cb7c8;
            case 0x1CB7CCu: goto label_1cb7cc;
            case 0x1CB7D0u: goto label_1cb7d0;
            case 0x1CB7D4u: goto label_1cb7d4;
            case 0x1CB7D8u: goto label_1cb7d8;
            case 0x1CB7DCu: goto label_1cb7dc;
            case 0x1CB7E0u: goto label_1cb7e0;
            case 0x1CB7E4u: goto label_1cb7e4;
            case 0x1CB7E8u: goto label_1cb7e8;
            case 0x1CB7ECu: goto label_1cb7ec;
            case 0x1CB7F0u: goto label_1cb7f0;
            case 0x1CB7F4u: goto label_1cb7f4;
            case 0x1CB7F8u: goto label_1cb7f8;
            case 0x1CB7FCu: goto label_1cb7fc;
            case 0x1CB800u: goto label_1cb800;
            case 0x1CB804u: goto label_1cb804;
            case 0x1CB808u: goto label_1cb808;
            case 0x1CB80Cu: goto label_1cb80c;
            case 0x1CB810u: goto label_1cb810;
            case 0x1CB814u: goto label_1cb814;
            case 0x1CB818u: goto label_1cb818;
            case 0x1CB81Cu: goto label_1cb81c;
            case 0x1CB820u: goto label_1cb820;
            case 0x1CB824u: goto label_1cb824;
            case 0x1CB828u: goto label_1cb828;
            case 0x1CB82Cu: goto label_1cb82c;
            case 0x1CB830u: goto label_1cb830;
            case 0x1CB834u: goto label_1cb834;
            case 0x1CB838u: goto label_1cb838;
            case 0x1CB83Cu: goto label_1cb83c;
            case 0x1CB840u: goto label_1cb840;
            case 0x1CB844u: goto label_1cb844;
            case 0x1CB848u: goto label_1cb848;
            case 0x1CB84Cu: goto label_1cb84c;
            case 0x1CB850u: goto label_1cb850;
            case 0x1CB854u: goto label_1cb854;
            case 0x1CB858u: goto label_1cb858;
            case 0x1CB85Cu: goto label_1cb85c;
            case 0x1CB860u: goto label_1cb860;
            case 0x1CB864u: goto label_1cb864;
            case 0x1CB868u: goto label_1cb868;
            case 0x1CB86Cu: goto label_1cb86c;
            case 0x1CB870u: goto label_1cb870;
            case 0x1CB874u: goto label_1cb874;
            case 0x1CB878u: goto label_1cb878;
            case 0x1CB87Cu: goto label_1cb87c;
            case 0x1CB880u: goto label_1cb880;
            case 0x1CB884u: goto label_1cb884;
            case 0x1CB888u: goto label_1cb888;
            case 0x1CB88Cu: goto label_1cb88c;
            case 0x1CB890u: goto label_1cb890;
            case 0x1CB894u: goto label_1cb894;
            case 0x1CB898u: goto label_1cb898;
            case 0x1CB89Cu: goto label_1cb89c;
            case 0x1CB8A0u: goto label_1cb8a0;
            case 0x1CB8A4u: goto label_1cb8a4;
            case 0x1CB8A8u: goto label_1cb8a8;
            case 0x1CB8ACu: goto label_1cb8ac;
            case 0x1CB8B0u: goto label_1cb8b0;
            case 0x1CB8B4u: goto label_1cb8b4;
            case 0x1CB8B8u: goto label_1cb8b8;
            case 0x1CB8BCu: goto label_1cb8bc;
            case 0x1CB8C0u: goto label_1cb8c0;
            case 0x1CB8C4u: goto label_1cb8c4;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB8CCu: goto label_1cb8cc;
            case 0x1CB8D0u: goto label_1cb8d0;
            case 0x1CB8D4u: goto label_1cb8d4;
            case 0x1CB8D8u: goto label_1cb8d8;
            case 0x1CB8DCu: goto label_1cb8dc;
            case 0x1CB8E0u: goto label_1cb8e0;
            case 0x1CB8E4u: goto label_1cb8e4;
            case 0x1CB8E8u: goto label_1cb8e8;
            case 0x1CB8ECu: goto label_1cb8ec;
            case 0x1CB8F0u: goto label_1cb8f0;
            case 0x1CB8F4u: goto label_1cb8f4;
            case 0x1CB8F8u: goto label_1cb8f8;
            case 0x1CB8FCu: goto label_1cb8fc;
            case 0x1CB900u: goto label_1cb900;
            case 0x1CB904u: goto label_1cb904;
            case 0x1CB908u: goto label_1cb908;
            case 0x1CB90Cu: goto label_1cb90c;
            case 0x1CB910u: goto label_1cb910;
            case 0x1CB914u: goto label_1cb914;
            case 0x1CB918u: goto label_1cb918;
            case 0x1CB91Cu: goto label_1cb91c;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB924u: goto label_1cb924;
            case 0x1CB928u: goto label_1cb928;
            case 0x1CB92Cu: goto label_1cb92c;
            case 0x1CB930u: goto label_1cb930;
            case 0x1CB934u: goto label_1cb934;
            case 0x1CB938u: goto label_1cb938;
            case 0x1CB93Cu: goto label_1cb93c;
            case 0x1CB940u: goto label_1cb940;
            case 0x1CB944u: goto label_1cb944;
            case 0x1CB948u: goto label_1cb948;
            case 0x1CB94Cu: goto label_1cb94c;
            case 0x1CB950u: goto label_1cb950;
            case 0x1CB954u: goto label_1cb954;
            case 0x1CB958u: goto label_1cb958;
            case 0x1CB95Cu: goto label_1cb95c;
            case 0x1CB960u: goto label_1cb960;
            case 0x1CB964u: goto label_1cb964;
            case 0x1CB968u: goto label_1cb968;
            case 0x1CB96Cu: goto label_1cb96c;
            case 0x1CB970u: goto label_1cb970;
            case 0x1CB974u: goto label_1cb974;
            case 0x1CB978u: goto label_1cb978;
            case 0x1CB97Cu: goto label_1cb97c;
            case 0x1CB980u: goto label_1cb980;
            case 0x1CB984u: goto label_1cb984;
            case 0x1CB988u: goto label_1cb988;
            case 0x1CB98Cu: goto label_1cb98c;
            case 0x1CB990u: goto label_1cb990;
            case 0x1CB994u: goto label_1cb994;
            case 0x1CB998u: goto label_1cb998;
            case 0x1CB99Cu: goto label_1cb99c;
            case 0x1CB9A0u: goto label_1cb9a0;
            case 0x1CB9A4u: goto label_1cb9a4;
            case 0x1CB9A8u: goto label_1cb9a8;
            case 0x1CB9ACu: goto label_1cb9ac;
            case 0x1CB9B0u: goto label_1cb9b0;
            case 0x1CB9B4u: goto label_1cb9b4;
            case 0x1CB9B8u: goto label_1cb9b8;
            case 0x1CB9BCu: goto label_1cb9bc;
            case 0x1CB9C0u: goto label_1cb9c0;
            case 0x1CB9C4u: goto label_1cb9c4;
            case 0x1CB9C8u: goto label_1cb9c8;
            case 0x1CB9CCu: goto label_1cb9cc;
            case 0x1CB9D0u: goto label_1cb9d0;
            case 0x1CB9D4u: goto label_1cb9d4;
            case 0x1CB9D8u: goto label_1cb9d8;
            case 0x1CB9DCu: goto label_1cb9dc;
            case 0x1CB9E0u: goto label_1cb9e0;
            case 0x1CB9E4u: goto label_1cb9e4;
            case 0x1CB9E8u: goto label_1cb9e8;
            case 0x1CB9ECu: goto label_1cb9ec;
            case 0x1CB9F0u: goto label_1cb9f0;
            case 0x1CB9F4u: goto label_1cb9f4;
            case 0x1CB9F8u: goto label_1cb9f8;
            case 0x1CB9FCu: goto label_1cb9fc;
            case 0x1CBA00u: goto label_1cba00;
            case 0x1CBA04u: goto label_1cba04;
            case 0x1CBA08u: goto label_1cba08;
            case 0x1CBA0Cu: goto label_1cba0c;
            case 0x1CBA10u: goto label_1cba10;
            case 0x1CBA14u: goto label_1cba14;
            case 0x1CBA18u: goto label_1cba18;
            case 0x1CBA1Cu: goto label_1cba1c;
            case 0x1CBA20u: goto label_1cba20;
            case 0x1CBA24u: goto label_1cba24;
            case 0x1CBA28u: goto label_1cba28;
            case 0x1CBA2Cu: goto label_1cba2c;
            case 0x1CBA30u: goto label_1cba30;
            case 0x1CBA34u: goto label_1cba34;
            case 0x1CBA38u: goto label_1cba38;
            case 0x1CBA3Cu: goto label_1cba3c;
            case 0x1CBA40u: goto label_1cba40;
            case 0x1CBA44u: goto label_1cba44;
            case 0x1CBA48u: goto label_1cba48;
            case 0x1CBA4Cu: goto label_1cba4c;
            case 0x1CBA50u: goto label_1cba50;
            case 0x1CBA54u: goto label_1cba54;
            case 0x1CBA58u: goto label_1cba58;
            case 0x1CBA5Cu: goto label_1cba5c;
            case 0x1CBA60u: goto label_1cba60;
            case 0x1CBA64u: goto label_1cba64;
            case 0x1CBA68u: goto label_1cba68;
            case 0x1CBA6Cu: goto label_1cba6c;
            case 0x1CBA70u: goto label_1cba70;
            case 0x1CBA74u: goto label_1cba74;
            case 0x1CBA78u: goto label_1cba78;
            case 0x1CBA7Cu: goto label_1cba7c;
            case 0x1CBA80u: goto label_1cba80;
            case 0x1CBA84u: goto label_1cba84;
            case 0x1CBA88u: goto label_1cba88;
            case 0x1CBA8Cu: goto label_1cba8c;
            case 0x1CBA90u: goto label_1cba90;
            case 0x1CBA94u: goto label_1cba94;
            case 0x1CBA98u: goto label_1cba98;
            case 0x1CBA9Cu: goto label_1cba9c;
            case 0x1CBAA0u: goto label_1cbaa0;
            case 0x1CBAA4u: goto label_1cbaa4;
            case 0x1CBAA8u: goto label_1cbaa8;
            case 0x1CBAACu: goto label_1cbaac;
            case 0x1CBAB0u: goto label_1cbab0;
            case 0x1CBAB4u: goto label_1cbab4;
            case 0x1CBAB8u: goto label_1cbab8;
            case 0x1CBABCu: goto label_1cbabc;
            case 0x1CBAC0u: goto label_1cbac0;
            case 0x1CBAC4u: goto label_1cbac4;
            case 0x1CBAC8u: goto label_1cbac8;
            case 0x1CBACCu: goto label_1cbacc;
            case 0x1CBAD0u: goto label_1cbad0;
            case 0x1CBAD4u: goto label_1cbad4;
            case 0x1CBAD8u: goto label_1cbad8;
            case 0x1CBADCu: goto label_1cbadc;
            case 0x1CBAE0u: goto label_1cbae0;
            case 0x1CBAE4u: goto label_1cbae4;
            case 0x1CBAE8u: goto label_1cbae8;
            case 0x1CBAECu: goto label_1cbaec;
            case 0x1CBAF0u: goto label_1cbaf0;
            case 0x1CBAF4u: goto label_1cbaf4;
            case 0x1CBAF8u: goto label_1cbaf8;
            case 0x1CBAFCu: goto label_1cbafc;
            case 0x1CBB00u: goto label_1cbb00;
            case 0x1CBB04u: goto label_1cbb04;
            case 0x1CBB08u: goto label_1cbb08;
            case 0x1CBB0Cu: goto label_1cbb0c;
            case 0x1CBB10u: goto label_1cbb10;
            case 0x1CBB14u: goto label_1cbb14;
            case 0x1CBB18u: goto label_1cbb18;
            case 0x1CBB1Cu: goto label_1cbb1c;
            case 0x1CBB20u: goto label_1cbb20;
            case 0x1CBB24u: goto label_1cbb24;
            case 0x1CBB28u: goto label_1cbb28;
            case 0x1CBB2Cu: goto label_1cbb2c;
            case 0x1CBB30u: goto label_1cbb30;
            case 0x1CBB34u: goto label_1cbb34;
            case 0x1CBB38u: goto label_1cbb38;
            case 0x1CBB3Cu: goto label_1cbb3c;
            case 0x1CBB40u: goto label_1cbb40;
            case 0x1CBB44u: goto label_1cbb44;
            case 0x1CBB48u: goto label_1cbb48;
            case 0x1CBB4Cu: goto label_1cbb4c;
            case 0x1CBB50u: goto label_1cbb50;
            case 0x1CBB54u: goto label_1cbb54;
            case 0x1CBB58u: goto label_1cbb58;
            case 0x1CBB5Cu: goto label_1cbb5c;
            case 0x1CBB60u: goto label_1cbb60;
            case 0x1CBB64u: goto label_1cbb64;
            case 0x1CBB68u: goto label_1cbb68;
            case 0x1CBB6Cu: goto label_1cbb6c;
            case 0x1CBB70u: goto label_1cbb70;
            case 0x1CBB74u: goto label_1cbb74;
            case 0x1CBB78u: goto label_1cbb78;
            case 0x1CBB7Cu: goto label_1cbb7c;
            case 0x1CBB80u: goto label_1cbb80;
            case 0x1CBB84u: goto label_1cbb84;
            case 0x1CBB88u: goto label_1cbb88;
            case 0x1CBB8Cu: goto label_1cbb8c;
            case 0x1CBB90u: goto label_1cbb90;
            case 0x1CBB94u: goto label_1cbb94;
            case 0x1CBB98u: goto label_1cbb98;
            case 0x1CBB9Cu: goto label_1cbb9c;
            case 0x1CBBA0u: goto label_1cbba0;
            case 0x1CBBA4u: goto label_1cbba4;
            case 0x1CBBA8u: goto label_1cbba8;
            case 0x1CBBACu: goto label_1cbbac;
            case 0x1CBBB0u: goto label_1cbbb0;
            case 0x1CBBB4u: goto label_1cbbb4;
            case 0x1CBBB8u: goto label_1cbbb8;
            case 0x1CBBBCu: goto label_1cbbbc;
            case 0x1CBBC0u: goto label_1cbbc0;
            case 0x1CBBC4u: goto label_1cbbc4;
            case 0x1CBBC8u: goto label_1cbbc8;
            case 0x1CBBCCu: goto label_1cbbcc;
            case 0x1CBBD0u: goto label_1cbbd0;
            case 0x1CBBD4u: goto label_1cbbd4;
            case 0x1CBBD8u: goto label_1cbbd8;
            case 0x1CBBDCu: goto label_1cbbdc;
            case 0x1CBBE0u: goto label_1cbbe0;
            case 0x1CBBE4u: goto label_1cbbe4;
            case 0x1CBBE8u: goto label_1cbbe8;
            case 0x1CBBECu: goto label_1cbbec;
            case 0x1CBBF0u: goto label_1cbbf0;
            case 0x1CBBF4u: goto label_1cbbf4;
            case 0x1CBBF8u: goto label_1cbbf8;
            case 0x1CBBFCu: goto label_1cbbfc;
            case 0x1CBC00u: goto label_1cbc00;
            case 0x1CBC04u: goto label_1cbc04;
            case 0x1CBC08u: goto label_1cbc08;
            case 0x1CBC0Cu: goto label_1cbc0c;
            case 0x1CBC10u: goto label_1cbc10;
            case 0x1CBC14u: goto label_1cbc14;
            case 0x1CBC18u: goto label_1cbc18;
            case 0x1CBC1Cu: goto label_1cbc1c;
            case 0x1CBC20u: goto label_1cbc20;
            case 0x1CBC24u: goto label_1cbc24;
            case 0x1CBC28u: goto label_1cbc28;
            case 0x1CBC2Cu: goto label_1cbc2c;
            case 0x1CBC30u: goto label_1cbc30;
            case 0x1CBC34u: goto label_1cbc34;
            case 0x1CBC38u: goto label_1cbc38;
            case 0x1CBC3Cu: goto label_1cbc3c;
            case 0x1CBC40u: goto label_1cbc40;
            case 0x1CBC44u: goto label_1cbc44;
            case 0x1CBC48u: goto label_1cbc48;
            case 0x1CBC4Cu: goto label_1cbc4c;
            case 0x1CBC50u: goto label_1cbc50;
            case 0x1CBC54u: goto label_1cbc54;
            case 0x1CBC58u: goto label_1cbc58;
            case 0x1CBC5Cu: goto label_1cbc5c;
            case 0x1CBC60u: goto label_1cbc60;
            case 0x1CBC64u: goto label_1cbc64;
            case 0x1CBC68u: goto label_1cbc68;
            case 0x1CBC6Cu: goto label_1cbc6c;
            case 0x1CBC70u: goto label_1cbc70;
            case 0x1CBC74u: goto label_1cbc74;
            case 0x1CBC78u: goto label_1cbc78;
            case 0x1CBC7Cu: goto label_1cbc7c;
            case 0x1CBC80u: goto label_1cbc80;
            case 0x1CBC84u: goto label_1cbc84;
            case 0x1CBC88u: goto label_1cbc88;
            case 0x1CBC8Cu: goto label_1cbc8c;
            case 0x1CBC90u: goto label_1cbc90;
            case 0x1CBC94u: goto label_1cbc94;
            case 0x1CBC98u: goto label_1cbc98;
            case 0x1CBC9Cu: goto label_1cbc9c;
            case 0x1CBCA0u: goto label_1cbca0;
            case 0x1CBCA4u: goto label_1cbca4;
            case 0x1CBCA8u: goto label_1cbca8;
            case 0x1CBCACu: goto label_1cbcac;
            case 0x1CBCB0u: goto label_1cbcb0;
            case 0x1CBCB4u: goto label_1cbcb4;
            case 0x1CBCB8u: goto label_1cbcb8;
            case 0x1CBCBCu: goto label_1cbcbc;
            case 0x1CBCC0u: goto label_1cbcc0;
            case 0x1CBCC4u: goto label_1cbcc4;
            case 0x1CBCC8u: goto label_1cbcc8;
            case 0x1CBCCCu: goto label_1cbccc;
            case 0x1CBCD0u: goto label_1cbcd0;
            case 0x1CBCD4u: goto label_1cbcd4;
            case 0x1CBCD8u: goto label_1cbcd8;
            case 0x1CBCDCu: goto label_1cbcdc;
            case 0x1CBCE0u: goto label_1cbce0;
            case 0x1CBCE4u: goto label_1cbce4;
            case 0x1CBCE8u: goto label_1cbce8;
            case 0x1CBCECu: goto label_1cbcec;
            case 0x1CBCF0u: goto label_1cbcf0;
            case 0x1CBCF4u: goto label_1cbcf4;
            case 0x1CBCF8u: goto label_1cbcf8;
            case 0x1CBCFCu: goto label_1cbcfc;
            case 0x1CBD00u: goto label_1cbd00;
            case 0x1CBD04u: goto label_1cbd04;
            case 0x1CBD08u: goto label_1cbd08;
            case 0x1CBD0Cu: goto label_1cbd0c;
            case 0x1CBD10u: goto label_1cbd10;
            case 0x1CBD14u: goto label_1cbd14;
            case 0x1CBD18u: goto label_1cbd18;
            case 0x1CBD1Cu: goto label_1cbd1c;
            case 0x1CBD20u: goto label_1cbd20;
            case 0x1CBD24u: goto label_1cbd24;
            case 0x1CBD28u: goto label_1cbd28;
            case 0x1CBD2Cu: goto label_1cbd2c;
            case 0x1CBD30u: goto label_1cbd30;
            case 0x1CBD34u: goto label_1cbd34;
            case 0x1CBD38u: goto label_1cbd38;
            case 0x1CBD3Cu: goto label_1cbd3c;
            case 0x1CBD40u: goto label_1cbd40;
            case 0x1CBD44u: goto label_1cbd44;
            case 0x1CBD48u: goto label_1cbd48;
            case 0x1CBD4Cu: goto label_1cbd4c;
            case 0x1CBD50u: goto label_1cbd50;
            case 0x1CBD54u: goto label_1cbd54;
            case 0x1CBD58u: goto label_1cbd58;
            case 0x1CBD5Cu: goto label_1cbd5c;
            case 0x1CBD60u: goto label_1cbd60;
            case 0x1CBD64u: goto label_1cbd64;
            case 0x1CBD68u: goto label_1cbd68;
            case 0x1CBD6Cu: goto label_1cbd6c;
            case 0x1CBD70u: goto label_1cbd70;
            case 0x1CBD74u: goto label_1cbd74;
            case 0x1CBD78u: goto label_1cbd78;
            case 0x1CBD7Cu: goto label_1cbd7c;
            case 0x1CBD80u: goto label_1cbd80;
            case 0x1CBD84u: goto label_1cbd84;
            case 0x1CBD88u: goto label_1cbd88;
            case 0x1CBD8Cu: goto label_1cbd8c;
            case 0x1CBD90u: goto label_1cbd90;
            case 0x1CBD94u: goto label_1cbd94;
            case 0x1CBD98u: goto label_1cbd98;
            case 0x1CBD9Cu: goto label_1cbd9c;
            case 0x1CBDA0u: goto label_1cbda0;
            case 0x1CBDA4u: goto label_1cbda4;
            case 0x1CBDA8u: goto label_1cbda8;
            case 0x1CBDACu: goto label_1cbdac;
            case 0x1CBDB0u: goto label_1cbdb0;
            case 0x1CBDB4u: goto label_1cbdb4;
            case 0x1CBDB8u: goto label_1cbdb8;
            case 0x1CBDBCu: goto label_1cbdbc;
            case 0x1CBDC0u: goto label_1cbdc0;
            case 0x1CBDC4u: goto label_1cbdc4;
            case 0x1CBDC8u: goto label_1cbdc8;
            case 0x1CBDCCu: goto label_1cbdcc;
            case 0x1CBDD0u: goto label_1cbdd0;
            case 0x1CBDD4u: goto label_1cbdd4;
            case 0x1CBDD8u: goto label_1cbdd8;
            case 0x1CBDDCu: goto label_1cbddc;
            case 0x1CBDE0u: goto label_1cbde0;
            case 0x1CBDE4u: goto label_1cbde4;
            case 0x1CBDE8u: goto label_1cbde8;
            case 0x1CBDECu: goto label_1cbdec;
            case 0x1CBDF0u: goto label_1cbdf0;
            case 0x1CBDF4u: goto label_1cbdf4;
            case 0x1CBDF8u: goto label_1cbdf8;
            case 0x1CBDFCu: goto label_1cbdfc;
            case 0x1CBE00u: goto label_1cbe00;
            case 0x1CBE04u: goto label_1cbe04;
            case 0x1CBE08u: goto label_1cbe08;
            case 0x1CBE0Cu: goto label_1cbe0c;
            case 0x1CBE10u: goto label_1cbe10;
            case 0x1CBE14u: goto label_1cbe14;
            case 0x1CBE18u: goto label_1cbe18;
            case 0x1CBE1Cu: goto label_1cbe1c;
            case 0x1CBE20u: goto label_1cbe20;
            case 0x1CBE24u: goto label_1cbe24;
            case 0x1CBE28u: goto label_1cbe28;
            case 0x1CBE2Cu: goto label_1cbe2c;
            case 0x1CBE30u: goto label_1cbe30;
            case 0x1CBE34u: goto label_1cbe34;
            case 0x1CBE38u: goto label_1cbe38;
            case 0x1CBE3Cu: goto label_1cbe3c;
            case 0x1CBE40u: goto label_1cbe40;
            case 0x1CBE44u: goto label_1cbe44;
            case 0x1CBE48u: goto label_1cbe48;
            case 0x1CBE4Cu: goto label_1cbe4c;
            case 0x1CBE50u: goto label_1cbe50;
            case 0x1CBE54u: goto label_1cbe54;
            case 0x1CBE58u: goto label_1cbe58;
            case 0x1CBE5Cu: goto label_1cbe5c;
            case 0x1CBE60u: goto label_1cbe60;
            case 0x1CBE64u: goto label_1cbe64;
            case 0x1CBE68u: goto label_1cbe68;
            case 0x1CBE6Cu: goto label_1cbe6c;
            case 0x1CBE70u: goto label_1cbe70;
            default: break;
        }
        return;
    }
label_fallthrough_0x1cbe6c:
    ctx->pc = 0x1CBE74u;
}

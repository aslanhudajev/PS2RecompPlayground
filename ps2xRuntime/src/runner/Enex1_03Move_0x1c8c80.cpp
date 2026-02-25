#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex1_03Move
// Address: 0x1c8c80 - 0x1c9790
void Enex1_03Move_0x1c8c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex1_03Move_0x1c8c80");
#endif

    ctx->pc = 0x1c8c80u;

label_1c8c80:
    // 0x1c8c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c8c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c8c84:
    // 0x1c8c84: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1c8c88:
    // 0x1c8c88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c8c8c:
    // 0x1c8c8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8c8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8c90:
    // 0x1c8c90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c8c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c8c94:
    // 0x1c8c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8c98:
    // 0x1c8c98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c8c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c8c9c:
    // 0x1c8c9c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1c8c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c8ca0:
    // 0x1c8ca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c8ca4:
    // 0x1c8ca4: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1c8ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8ca8:
    // 0x1c8ca8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c8ca8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c8cac:
    // 0x1c8cac: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1c8cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1c8cb0:
    // 0x1c8cb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c8cb4:
    // 0x1c8cb4: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1c8cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c8cb8:
    // 0x1c8cb8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1c8cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8cbc:
    // 0x1c8cbc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c8cbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c8cc0:
    // 0x1c8cc0: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1c8cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1c8cc4:
    // 0x1c8cc4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c8cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c8cc8:
    // 0x1c8cc8: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1c8cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c8ccc:
    // 0x1c8ccc: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1c8cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8cd0:
    // 0x1c8cd0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c8cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c8cd4:
    // 0x1c8cd4: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1c8cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1c8cd8:
    // 0x1c8cd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c8cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c8cdc:
    // 0x1c8cdc: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1c8cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c8ce0:
    // 0x1c8ce0: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1c8ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8ce4:
    // 0x1c8ce4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c8ce4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c8ce8:
    // 0x1c8ce8: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1c8ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1c8cec:
    // 0x1c8cec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c8cf0:
    // 0x1c8cf0: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1c8cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c8cf4:
    // 0x1c8cf4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1c8cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8cf8:
    // 0x1c8cf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c8cf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c8cfc:
    // 0x1c8cfc: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1c8cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1c8d00:
    // 0x1c8d00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c8d04:
    // 0x1c8d04: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1c8d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8d08:
    // 0x1c8d08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8d0c:
    // 0x1c8d0c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1c8d10:
    if (ctx->pc == 0x1C8D10u) {
        ctx->pc = 0x1C8D10u;
            // 0x1c8d10: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1C8D14u;
        goto label_1c8d14;
    }
    ctx->pc = 0x1C8D0Cu;
    {
        const bool branch_taken_0x1c8d0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8D0Cu;
            // 0x1c8d10: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d0c) {
            ctx->pc = 0x1C8D30u;
            goto label_1c8d30;
        }
    }
    ctx->pc = 0x1C8D14u;
label_1c8d14:
    // 0x1c8d14: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c8d18:
    // 0x1c8d18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8d18u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8d1c:
    // 0x1c8d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8d20:
    // 0x1c8d20: 0x0  nop
    ctx->pc = 0x1c8d20u;
    // NOP
label_1c8d24:
    // 0x1c8d24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c8d28:
    // 0x1c8d28: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c8d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1c8d2c:
    // 0x1c8d2c: 0x0  nop
    ctx->pc = 0x1c8d2cu;
    // NOP
label_1c8d30:
    // 0x1c8d30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c8d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8d34:
    // 0x1c8d34: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1c8d38:
    // 0x1c8d38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8d38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8d3c:
    // 0x1c8d3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8d40:
    // 0x1c8d40: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1c8d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8d44:
    // 0x1c8d44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c8d44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8d48:
    // 0x1c8d48: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1c8d4c:
    if (ctx->pc == 0x1C8D4Cu) {
        ctx->pc = 0x1C8D4Cu;
            // 0x1c8d4c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1C8D50u;
        goto label_1c8d50;
    }
    ctx->pc = 0x1C8D48u;
    {
        const bool branch_taken_0x1c8d48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8D48u;
            // 0x1c8d4c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d48) {
            ctx->pc = 0x1C8D68u;
            goto label_1c8d68;
        }
    }
    ctx->pc = 0x1C8D50u;
label_1c8d50:
    // 0x1c8d50: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c8d54:
    // 0x1c8d54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8d54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8d58:
    // 0x1c8d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8d5c:
    // 0x1c8d5c: 0x0  nop
    ctx->pc = 0x1c8d5cu;
    // NOP
label_1c8d60:
    // 0x1c8d60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c8d60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c8d64:
    // 0x1c8d64: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c8d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c8d68:
    // 0x1c8d68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8d6c:
    // 0x1c8d6c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1c8d70:
    // 0x1c8d70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8d70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8d74:
    // 0x1c8d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8d78:
    // 0x1c8d78: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1c8d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8d7c:
    // 0x1c8d7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8d80:
    // 0x1c8d80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1c8d84:
    if (ctx->pc == 0x1C8D84u) {
        ctx->pc = 0x1C8D84u;
            // 0x1c8d84: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1C8D88u;
        goto label_1c8d88;
    }
    ctx->pc = 0x1C8D80u;
    {
        const bool branch_taken_0x1c8d80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8D80u;
            // 0x1c8d84: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d80) {
            ctx->pc = 0x1C8DA0u;
            goto label_1c8da0;
        }
    }
    ctx->pc = 0x1C8D88u;
label_1c8d88:
    // 0x1c8d88: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c8d8c:
    // 0x1c8d8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8d8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8d90:
    // 0x1c8d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8d94:
    // 0x1c8d94: 0x0  nop
    ctx->pc = 0x1c8d94u;
    // NOP
label_1c8d98:
    // 0x1c8d98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c8d9c:
    // 0x1c8d9c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c8d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c8da0:
    // 0x1c8da0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8da4:
    // 0x1c8da4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1c8da8:
    // 0x1c8da8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8da8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8dac:
    // 0x1c8dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8db0:
    // 0x1c8db0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1c8db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8db4:
    // 0x1c8db4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c8db4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8db8:
    // 0x1c8db8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1c8dbc:
    if (ctx->pc == 0x1C8DBCu) {
        ctx->pc = 0x1C8DBCu;
            // 0x1c8dbc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1C8DC0u;
        goto label_1c8dc0;
    }
    ctx->pc = 0x1C8DB8u;
    {
        const bool branch_taken_0x1c8db8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8DB8u;
            // 0x1c8dbc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8db8) {
            ctx->pc = 0x1C8DD8u;
            goto label_1c8dd8;
        }
    }
    ctx->pc = 0x1C8DC0u;
label_1c8dc0:
    // 0x1c8dc0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c8dc4:
    // 0x1c8dc4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8dc4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8dc8:
    // 0x1c8dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8dcc:
    // 0x1c8dcc: 0x0  nop
    ctx->pc = 0x1c8dccu;
    // NOP
label_1c8dd0:
    // 0x1c8dd0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c8dd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c8dd4:
    // 0x1c8dd4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c8dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c8dd8:
    // 0x1c8dd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c8dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8ddc:
    // 0x1c8ddc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1c8de0:
    // 0x1c8de0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8de0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8de4:
    // 0x1c8de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8de8:
    // 0x1c8de8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1c8de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8dec:
    // 0x1c8dec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8df0:
    // 0x1c8df0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1c8df4:
    if (ctx->pc == 0x1C8DF4u) {
        ctx->pc = 0x1C8DF4u;
            // 0x1c8df4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1C8DF8u;
        goto label_1c8df8;
    }
    ctx->pc = 0x1C8DF0u;
    {
        const bool branch_taken_0x1c8df0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8DF0u;
            // 0x1c8df4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8df0) {
            ctx->pc = 0x1C8E10u;
            goto label_1c8e10;
        }
    }
    ctx->pc = 0x1C8DF8u;
label_1c8df8:
    // 0x1c8df8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c8dfc:
    // 0x1c8dfc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8dfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8e00:
    // 0x1c8e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8e04:
    // 0x1c8e04: 0x0  nop
    ctx->pc = 0x1c8e04u;
    // NOP
label_1c8e08:
    // 0x1c8e08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c8e0c:
    // 0x1c8e0c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c8e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c8e10:
    // 0x1c8e10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8e14:
    // 0x1c8e14: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1c8e18:
    // 0x1c8e18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8e18u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8e1c:
    // 0x1c8e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8e20:
    // 0x1c8e20: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1c8e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8e24:
    // 0x1c8e24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c8e24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8e28:
    // 0x1c8e28: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1c8e2c:
    if (ctx->pc == 0x1C8E2Cu) {
        ctx->pc = 0x1C8E2Cu;
            // 0x1c8e2c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1C8E30u;
        goto label_1c8e30;
    }
    ctx->pc = 0x1C8E28u;
    {
        const bool branch_taken_0x1c8e28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E28u;
            // 0x1c8e2c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e28) {
            ctx->pc = 0x1C8E48u;
            goto label_1c8e48;
        }
    }
    ctx->pc = 0x1C8E30u;
label_1c8e30:
    // 0x1c8e30: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c8e34:
    // 0x1c8e34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c8e34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1c8e38:
    // 0x1c8e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8e3c:
    // 0x1c8e3c: 0x0  nop
    ctx->pc = 0x1c8e3cu;
    // NOP
label_1c8e40:
    // 0x1c8e40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c8e40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c8e44:
    // 0x1c8e44: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c8e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c8e48:
    // 0x1c8e48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8e4c:
    // 0x1c8e4c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c8e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1c8e50:
    // 0x1c8e50: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c8e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c8e54:
    // 0x1c8e54: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c8e58:
    // 0x1c8e58: 0xc0725e4  jal         func_1C9790
label_1c8e5c:
    if (ctx->pc == 0x1C8E5Cu) {
        ctx->pc = 0x1C8E5Cu;
            // 0x1c8e5c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x1C8E60u;
        goto label_1c8e60;
    }
    ctx->pc = 0x1C8E58u;
    SET_GPR_U32(ctx, 31, 0x1C8E60u);
    ctx->pc = 0x1C8E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E58u;
            // 0x1c8e5c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9790u;
    if (runtime->hasFunction(0x1C9790u)) {
        auto targetFn = runtime->lookupFunction(0x1C9790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E60u; }
        if (ctx->pc != 0x1C8E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1c9790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E60u; }
        if (ctx->pc != 0x1C8E60u) { return; }
    }
    ctx->pc = 0x1C8E60u;
label_1c8e60:
    // 0x1c8e60: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1c8e64:
    // 0x1c8e64: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1c8e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1c8e68:
    // 0x1c8e68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8e6c:
    // 0x1c8e6c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1c8e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1c8e70:
    // 0x1c8e70: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1c8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1c8e74:
    // 0x1c8e74: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x1c8e74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1c8e78:
    // 0x1c8e78: 0x102001a7  beqz        $at, . + 4 + (0x1A7 << 2)
label_1c8e7c:
    if (ctx->pc == 0x1C8E7Cu) {
        ctx->pc = 0x1C8E7Cu;
            // 0x1c8e7c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1C8E80u;
        goto label_1c8e80;
    }
    ctx->pc = 0x1C8E78u;
    {
        const bool branch_taken_0x1c8e78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E78u;
            // 0x1c8e7c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e78) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C8E80u;
label_1c8e80:
    // 0x1c8e80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c8e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c8e84:
    // 0x1c8e84: 0x24632c30  addiu       $v1, $v1, 0x2C30
    ctx->pc = 0x1c8e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11312));
label_1c8e88:
    // 0x1c8e88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c8e8c:
    // 0x1c8e8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c8e90:
    // 0x1c8e90: 0x400008  jr          $v0
label_1c8e94:
    if (ctx->pc == 0x1C8E94u) {
        ctx->pc = 0x1C8E98u;
        goto label_1c8e98;
    }
    ctx->pc = 0x1C8E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8E98u: goto label_1c8e98;
            case 0x1C8FA8u: goto label_1c8fa8;
            case 0x1C90B8u: goto label_1c90b8;
            case 0x1C9190u: goto label_1c9190;
            case 0x1C9268u: goto label_1c9268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8E98u;
label_1c8e98:
    // 0x1c8e98: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c8e9c:
    // 0x1c8e9c: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x1c8e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
label_1c8ea0:
    // 0x1c8ea0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1c8ea4:
    if (ctx->pc == 0x1C8EA4u) {
        ctx->pc = 0x1C8EA4u;
            // 0x1c8ea4: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->pc = 0x1C8EA8u;
        goto label_1c8ea8;
    }
    ctx->pc = 0x1C8EA0u;
    {
        const bool branch_taken_0x1c8ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8EA0u;
            // 0x1c8ea4: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ea0) {
            ctx->pc = 0x1C8F00u;
            goto label_1c8f00;
        }
    }
    ctx->pc = 0x1C8EA8u;
label_1c8ea8:
    // 0x1c8ea8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1c8eac:
    if (ctx->pc == 0x1C8EACu) {
        ctx->pc = 0x1C8EB0u;
        goto label_1c8eb0;
    }
    ctx->pc = 0x1C8EA8u;
    {
        const bool branch_taken_0x1c8ea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8ea8) {
            ctx->pc = 0x1C8F00u;
            goto label_1c8f00;
        }
    }
    ctx->pc = 0x1C8EB0u;
label_1c8eb0:
    // 0x1c8eb0: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x1c8eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c8eb4:
    // 0x1c8eb4: 0x3c023be5  lui         $v0, 0x3BE5
    ctx->pc = 0x1c8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15333 << 16));
label_1c8eb8:
    // 0x1c8eb8: 0x34436042  ori         $v1, $v0, 0x6042
    ctx->pc = 0x1c8eb8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1c8ebc:
    // 0x1c8ebc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c8ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c8ec0:
    // 0x1c8ec0: 0x3c023951  lui         $v0, 0x3951
    ctx->pc = 0x1c8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14673 << 16));
label_1c8ec4:
    // 0x1c8ec4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1c8ec4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1c8ec8:
    // 0x1c8ec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c8ecc:
    // 0x1c8ecc: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1c8eccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1c8ed0:
    // 0x1c8ed0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x1c8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_1c8ed4:
    // 0x1c8ed4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1c8ed4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1c8ed8:
    // 0x1c8ed8: 0xe60200d0  swc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c8ed8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1c8edc:
    // 0x1c8edc: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x1c8edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c8ee0:
    // 0x1c8ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8ee4:
    // 0x1c8ee4: 0x0  nop
    ctx->pc = 0x1c8ee4u;
    // NOP
label_1c8ee8:
    // 0x1c8ee8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1c8ee8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1c8eec:
    // 0x1c8eec: 0xe60100e4  swc1        $f1, 0xE4($s0)
    ctx->pc = 0x1c8eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1c8ef0:
    // 0x1c8ef0: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1c8ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8ef4:
    // 0x1c8ef4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c8ef8:
    // 0x1c8ef8: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1c8ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1c8efc:
    // 0x1c8efc: 0x0  nop
    ctx->pc = 0x1c8efcu;
    // NOP
label_1c8f00:
    // 0x1c8f00: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c8f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c8f04:
    // 0x1c8f04: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x1c8f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1c8f08:
    // 0x1c8f08: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_1c8f0c:
    if (ctx->pc == 0x1C8F0Cu) {
        ctx->pc = 0x1C8F0Cu;
            // 0x1c8f0c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1C8F10u;
        goto label_1c8f10;
    }
    ctx->pc = 0x1C8F08u;
    {
        const bool branch_taken_0x1c8f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F08u;
            // 0x1c8f0c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f08) {
            ctx->pc = 0x1C8F80u;
            goto label_1c8f80;
        }
    }
    ctx->pc = 0x1C8F10u;
label_1c8f10:
    // 0x1c8f10: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1c8f14:
    if (ctx->pc == 0x1C8F14u) {
        ctx->pc = 0x1C8F18u;
        goto label_1c8f18;
    }
    ctx->pc = 0x1C8F10u;
    {
        const bool branch_taken_0x1c8f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8f10) {
            ctx->pc = 0x1C8F58u;
            goto label_1c8f58;
        }
    }
    ctx->pc = 0x1C8F18u;
label_1c8f18:
    // 0x1c8f18: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1c8f1c:
    // 0x1c8f1c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1c8f20:
    if (ctx->pc == 0x1C8F20u) {
        ctx->pc = 0x1C8F24u;
        goto label_1c8f24;
    }
    ctx->pc = 0x1C8F1Cu;
    {
        const bool branch_taken_0x1c8f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8f1c) {
            ctx->pc = 0x1C8F30u;
            goto label_1c8f30;
        }
    }
    ctx->pc = 0x1C8F24u;
label_1c8f24:
    // 0x1c8f24: 0x1000017c  b           . + 4 + (0x17C << 2)
label_1c8f28:
    if (ctx->pc == 0x1C8F28u) {
        ctx->pc = 0x1C8F2Cu;
        goto label_1c8f2c;
    }
    ctx->pc = 0x1C8F24u;
    {
        const bool branch_taken_0x1c8f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8f24) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C8F2Cu;
label_1c8f2c:
    // 0x1c8f2c: 0x0  nop
    ctx->pc = 0x1c8f2cu;
    // NOP
label_1c8f30:
    // 0x1c8f30: 0xc065d00  jal         func_197400
label_1c8f34:
    if (ctx->pc == 0x1C8F34u) {
        ctx->pc = 0x1C8F38u;
        goto label_1c8f38;
    }
    ctx->pc = 0x1C8F30u;
    SET_GPR_U32(ctx, 31, 0x1C8F38u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F38u; }
        if (ctx->pc != 0x1C8F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F38u; }
        if (ctx->pc != 0x1C8F38u) { return; }
    }
    ctx->pc = 0x1C8F38u;
label_1c8f38:
    // 0x1c8f38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c8f3c:
    // 0x1c8f3c: 0x14430176  bne         $v0, $v1, . + 4 + (0x176 << 2)
label_1c8f40:
    if (ctx->pc == 0x1C8F40u) {
        ctx->pc = 0x1C8F44u;
        goto label_1c8f44;
    }
    ctx->pc = 0x1C8F3Cu;
    {
        const bool branch_taken_0x1c8f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8f3c) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C8F44u;
label_1c8f44:
    // 0x1c8f44: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c8f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8f48:
    // 0x1c8f48: 0xc06560c  jal         func_195830
label_1c8f4c:
    if (ctx->pc == 0x1C8F4Cu) {
        ctx->pc = 0x1C8F4Cu;
            // 0x1c8f4c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1C8F50u;
        goto label_1c8f50;
    }
    ctx->pc = 0x1C8F48u;
    SET_GPR_U32(ctx, 31, 0x1C8F50u);
    ctx->pc = 0x1C8F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F48u;
            // 0x1c8f4c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F50u; }
        if (ctx->pc != 0x1C8F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F50u; }
        if (ctx->pc != 0x1C8F50u) { return; }
    }
    ctx->pc = 0x1C8F50u;
label_1c8f50:
    // 0x1c8f50: 0x10000171  b           . + 4 + (0x171 << 2)
label_1c8f54:
    if (ctx->pc == 0x1C8F54u) {
        ctx->pc = 0x1C8F58u;
        goto label_1c8f58;
    }
    ctx->pc = 0x1C8F50u;
    {
        const bool branch_taken_0x1c8f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8f50) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C8F58u;
label_1c8f58:
    // 0x1c8f58: 0xc065d00  jal         func_197400
label_1c8f5c:
    if (ctx->pc == 0x1C8F5Cu) {
        ctx->pc = 0x1C8F60u;
        goto label_1c8f60;
    }
    ctx->pc = 0x1C8F58u;
    SET_GPR_U32(ctx, 31, 0x1C8F60u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F60u; }
        if (ctx->pc != 0x1C8F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F60u; }
        if (ctx->pc != 0x1C8F60u) { return; }
    }
    ctx->pc = 0x1C8F60u;
label_1c8f60:
    // 0x1c8f60: 0x1840016d  blez        $v0, . + 4 + (0x16D << 2)
label_1c8f64:
    if (ctx->pc == 0x1C8F64u) {
        ctx->pc = 0x1C8F68u;
        goto label_1c8f68;
    }
    ctx->pc = 0x1C8F60u;
    {
        const bool branch_taken_0x1c8f60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c8f60) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C8F68u;
label_1c8f68:
    // 0x1c8f68: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c8f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8f6c:
    // 0x1c8f6c: 0xc06560c  jal         func_195830
label_1c8f70:
    if (ctx->pc == 0x1C8F70u) {
        ctx->pc = 0x1C8F70u;
            // 0x1c8f70: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1C8F74u;
        goto label_1c8f74;
    }
    ctx->pc = 0x1C8F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F74u);
    ctx->pc = 0x1C8F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F6Cu;
            // 0x1c8f70: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F74u; }
        if (ctx->pc != 0x1C8F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F74u; }
        if (ctx->pc != 0x1C8F74u) { return; }
    }
    ctx->pc = 0x1C8F74u;
label_1c8f74:
    // 0x1c8f74: 0x10000168  b           . + 4 + (0x168 << 2)
label_1c8f78:
    if (ctx->pc == 0x1C8F78u) {
        ctx->pc = 0x1C8F7Cu;
        goto label_1c8f7c;
    }
    ctx->pc = 0x1C8F74u;
    {
        const bool branch_taken_0x1c8f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8f74) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C8F7Cu;
label_1c8f7c:
    // 0x1c8f7c: 0x0  nop
    ctx->pc = 0x1c8f7cu;
    // NOP
label_1c8f80:
    // 0x1c8f80: 0xc065d00  jal         func_197400
label_1c8f84:
    if (ctx->pc == 0x1C8F84u) {
        ctx->pc = 0x1C8F88u;
        goto label_1c8f88;
    }
    ctx->pc = 0x1C8F80u;
    SET_GPR_U32(ctx, 31, 0x1C8F88u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F88u; }
        if (ctx->pc != 0x1C8F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F88u; }
        if (ctx->pc != 0x1C8F88u) { return; }
    }
    ctx->pc = 0x1C8F88u;
label_1c8f88:
    // 0x1c8f88: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1c8f88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c8f8c:
    // 0x1c8f8c: 0x14200162  bnez        $at, . + 4 + (0x162 << 2)
label_1c8f90:
    if (ctx->pc == 0x1C8F90u) {
        ctx->pc = 0x1C8F94u;
        goto label_1c8f94;
    }
    ctx->pc = 0x1C8F8Cu;
    {
        const bool branch_taken_0x1c8f8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8f8c) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C8F94u;
label_1c8f94:
    // 0x1c8f94: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c8f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8f98:
    // 0x1c8f98: 0xc06560c  jal         func_195830
label_1c8f9c:
    if (ctx->pc == 0x1C8F9Cu) {
        ctx->pc = 0x1C8F9Cu;
            // 0x1c8f9c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1C8FA0u;
        goto label_1c8fa0;
    }
    ctx->pc = 0x1C8F98u;
    SET_GPR_U32(ctx, 31, 0x1C8FA0u);
    ctx->pc = 0x1C8F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F98u;
            // 0x1c8f9c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8FA0u; }
        if (ctx->pc != 0x1C8FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8FA0u; }
        if (ctx->pc != 0x1C8FA0u) { return; }
    }
    ctx->pc = 0x1C8FA0u;
label_1c8fa0:
    // 0x1c8fa0: 0x1000015d  b           . + 4 + (0x15D << 2)
label_1c8fa4:
    if (ctx->pc == 0x1C8FA4u) {
        ctx->pc = 0x1C8FA8u;
        goto label_1c8fa8;
    }
    ctx->pc = 0x1C8FA0u;
    {
        const bool branch_taken_0x1c8fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8fa0) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C8FA8u;
label_1c8fa8:
    // 0x1c8fa8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c8fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c8fac:
    // 0x1c8fac: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x1c8facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
label_1c8fb0:
    // 0x1c8fb0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1c8fb4:
    if (ctx->pc == 0x1C8FB4u) {
        ctx->pc = 0x1C8FB4u;
            // 0x1c8fb4: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->pc = 0x1C8FB8u;
        goto label_1c8fb8;
    }
    ctx->pc = 0x1C8FB0u;
    {
        const bool branch_taken_0x1c8fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8FB0u;
            // 0x1c8fb4: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8fb0) {
            ctx->pc = 0x1C9010u;
            goto label_1c9010;
        }
    }
    ctx->pc = 0x1C8FB8u;
label_1c8fb8:
    // 0x1c8fb8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1c8fbc:
    if (ctx->pc == 0x1C8FBCu) {
        ctx->pc = 0x1C8FC0u;
        goto label_1c8fc0;
    }
    ctx->pc = 0x1C8FB8u;
    {
        const bool branch_taken_0x1c8fb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8fb8) {
            ctx->pc = 0x1C9010u;
            goto label_1c9010;
        }
    }
    ctx->pc = 0x1C8FC0u;
label_1c8fc0:
    // 0x1c8fc0: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x1c8fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c8fc4:
    // 0x1c8fc4: 0x3c02bbe5  lui         $v0, 0xBBE5
    ctx->pc = 0x1c8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48101 << 16));
label_1c8fc8:
    // 0x1c8fc8: 0x34436042  ori         $v1, $v0, 0x6042
    ctx->pc = 0x1c8fc8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1c8fcc:
    // 0x1c8fcc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c8fccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c8fd0:
    // 0x1c8fd0: 0x3c023951  lui         $v0, 0x3951
    ctx->pc = 0x1c8fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14673 << 16));
label_1c8fd4:
    // 0x1c8fd4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1c8fd4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1c8fd8:
    // 0x1c8fd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c8fdc:
    // 0x1c8fdc: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1c8fdcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1c8fe0:
    // 0x1c8fe0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x1c8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_1c8fe4:
    // 0x1c8fe4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1c8fe4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1c8fe8:
    // 0x1c8fe8: 0xe60200d0  swc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c8fe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1c8fec:
    // 0x1c8fec: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x1c8fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c8ff0:
    // 0x1c8ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8ff4:
    // 0x1c8ff4: 0x0  nop
    ctx->pc = 0x1c8ff4u;
    // NOP
label_1c8ff8:
    // 0x1c8ff8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c8ff8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1c8ffc:
    // 0x1c8ffc: 0xe60100e4  swc1        $f1, 0xE4($s0)
    ctx->pc = 0x1c8ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1c9000:
    // 0x1c9000: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1c9000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9004:
    // 0x1c9004: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c9004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c9008:
    // 0x1c9008: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1c9008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1c900c:
    // 0x1c900c: 0x0  nop
    ctx->pc = 0x1c900cu;
    // NOP
label_1c9010:
    // 0x1c9010: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c9010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c9014:
    // 0x1c9014: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x1c9014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1c9018:
    // 0x1c9018: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_1c901c:
    if (ctx->pc == 0x1C901Cu) {
        ctx->pc = 0x1C901Cu;
            // 0x1c901c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1C9020u;
        goto label_1c9020;
    }
    ctx->pc = 0x1C9018u;
    {
        const bool branch_taken_0x1c9018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C901Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9018u;
            // 0x1c901c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9018) {
            ctx->pc = 0x1C9090u;
            goto label_1c9090;
        }
    }
    ctx->pc = 0x1C9020u;
label_1c9020:
    // 0x1c9020: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1c9024:
    if (ctx->pc == 0x1C9024u) {
        ctx->pc = 0x1C9028u;
        goto label_1c9028;
    }
    ctx->pc = 0x1C9020u;
    {
        const bool branch_taken_0x1c9020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9020) {
            ctx->pc = 0x1C9068u;
            goto label_1c9068;
        }
    }
    ctx->pc = 0x1C9028u;
label_1c9028:
    // 0x1c9028: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c9028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1c902c:
    // 0x1c902c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1c9030:
    if (ctx->pc == 0x1C9030u) {
        ctx->pc = 0x1C9034u;
        goto label_1c9034;
    }
    ctx->pc = 0x1C902Cu;
    {
        const bool branch_taken_0x1c902c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c902c) {
            ctx->pc = 0x1C9040u;
            goto label_1c9040;
        }
    }
    ctx->pc = 0x1C9034u;
label_1c9034:
    // 0x1c9034: 0x10000138  b           . + 4 + (0x138 << 2)
label_1c9038:
    if (ctx->pc == 0x1C9038u) {
        ctx->pc = 0x1C903Cu;
        goto label_1c903c;
    }
    ctx->pc = 0x1C9034u;
    {
        const bool branch_taken_0x1c9034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9034) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C903Cu;
label_1c903c:
    // 0x1c903c: 0x0  nop
    ctx->pc = 0x1c903cu;
    // NOP
label_1c9040:
    // 0x1c9040: 0xc065d00  jal         func_197400
label_1c9044:
    if (ctx->pc == 0x1C9044u) {
        ctx->pc = 0x1C9048u;
        goto label_1c9048;
    }
    ctx->pc = 0x1C9040u;
    SET_GPR_U32(ctx, 31, 0x1C9048u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9048u; }
        if (ctx->pc != 0x1C9048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9048u; }
        if (ctx->pc != 0x1C9048u) { return; }
    }
    ctx->pc = 0x1C9048u;
label_1c9048:
    // 0x1c9048: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c9048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c904c:
    // 0x1c904c: 0x14430132  bne         $v0, $v1, . + 4 + (0x132 << 2)
label_1c9050:
    if (ctx->pc == 0x1C9050u) {
        ctx->pc = 0x1C9054u;
        goto label_1c9054;
    }
    ctx->pc = 0x1C904Cu;
    {
        const bool branch_taken_0x1c904c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c904c) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9054u;
label_1c9054:
    // 0x1c9054: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c9054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c9058:
    // 0x1c9058: 0xc06560c  jal         func_195830
label_1c905c:
    if (ctx->pc == 0x1C905Cu) {
        ctx->pc = 0x1C905Cu;
            // 0x1c905c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1C9060u;
        goto label_1c9060;
    }
    ctx->pc = 0x1C9058u;
    SET_GPR_U32(ctx, 31, 0x1C9060u);
    ctx->pc = 0x1C905Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9058u;
            // 0x1c905c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9060u; }
        if (ctx->pc != 0x1C9060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9060u; }
        if (ctx->pc != 0x1C9060u) { return; }
    }
    ctx->pc = 0x1C9060u;
label_1c9060:
    // 0x1c9060: 0x1000012d  b           . + 4 + (0x12D << 2)
label_1c9064:
    if (ctx->pc == 0x1C9064u) {
        ctx->pc = 0x1C9068u;
        goto label_1c9068;
    }
    ctx->pc = 0x1C9060u;
    {
        const bool branch_taken_0x1c9060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9060) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9068u;
label_1c9068:
    // 0x1c9068: 0xc065d00  jal         func_197400
label_1c906c:
    if (ctx->pc == 0x1C906Cu) {
        ctx->pc = 0x1C9070u;
        goto label_1c9070;
    }
    ctx->pc = 0x1C9068u;
    SET_GPR_U32(ctx, 31, 0x1C9070u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9070u; }
        if (ctx->pc != 0x1C9070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9070u; }
        if (ctx->pc != 0x1C9070u) { return; }
    }
    ctx->pc = 0x1C9070u;
label_1c9070:
    // 0x1c9070: 0x18400129  blez        $v0, . + 4 + (0x129 << 2)
label_1c9074:
    if (ctx->pc == 0x1C9074u) {
        ctx->pc = 0x1C9078u;
        goto label_1c9078;
    }
    ctx->pc = 0x1C9070u;
    {
        const bool branch_taken_0x1c9070 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c9070) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9078u;
label_1c9078:
    // 0x1c9078: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c9078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c907c:
    // 0x1c907c: 0xc06560c  jal         func_195830
label_1c9080:
    if (ctx->pc == 0x1C9080u) {
        ctx->pc = 0x1C9080u;
            // 0x1c9080: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1C9084u;
        goto label_1c9084;
    }
    ctx->pc = 0x1C907Cu;
    SET_GPR_U32(ctx, 31, 0x1C9084u);
    ctx->pc = 0x1C9080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C907Cu;
            // 0x1c9080: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9084u; }
        if (ctx->pc != 0x1C9084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9084u; }
        if (ctx->pc != 0x1C9084u) { return; }
    }
    ctx->pc = 0x1C9084u;
label_1c9084:
    // 0x1c9084: 0x10000124  b           . + 4 + (0x124 << 2)
label_1c9088:
    if (ctx->pc == 0x1C9088u) {
        ctx->pc = 0x1C908Cu;
        goto label_1c908c;
    }
    ctx->pc = 0x1C9084u;
    {
        const bool branch_taken_0x1c9084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9084) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C908Cu;
label_1c908c:
    // 0x1c908c: 0x0  nop
    ctx->pc = 0x1c908cu;
    // NOP
label_1c9090:
    // 0x1c9090: 0xc065d00  jal         func_197400
label_1c9094:
    if (ctx->pc == 0x1C9094u) {
        ctx->pc = 0x1C9098u;
        goto label_1c9098;
    }
    ctx->pc = 0x1C9090u;
    SET_GPR_U32(ctx, 31, 0x1C9098u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9098u; }
        if (ctx->pc != 0x1C9098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9098u; }
        if (ctx->pc != 0x1C9098u) { return; }
    }
    ctx->pc = 0x1C9098u;
label_1c9098:
    // 0x1c9098: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1c9098u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c909c:
    // 0x1c909c: 0x1420011e  bnez        $at, . + 4 + (0x11E << 2)
label_1c90a0:
    if (ctx->pc == 0x1C90A0u) {
        ctx->pc = 0x1C90A4u;
        goto label_1c90a4;
    }
    ctx->pc = 0x1C909Cu;
    {
        const bool branch_taken_0x1c909c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c909c) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C90A4u;
label_1c90a4:
    // 0x1c90a4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c90a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c90a8:
    // 0x1c90a8: 0xc06560c  jal         func_195830
label_1c90ac:
    if (ctx->pc == 0x1C90ACu) {
        ctx->pc = 0x1C90ACu;
            // 0x1c90ac: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1C90B0u;
        goto label_1c90b0;
    }
    ctx->pc = 0x1C90A8u;
    SET_GPR_U32(ctx, 31, 0x1C90B0u);
    ctx->pc = 0x1C90ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C90A8u;
            // 0x1c90ac: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C90B0u; }
        if (ctx->pc != 0x1C90B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C90B0u; }
        if (ctx->pc != 0x1C90B0u) { return; }
    }
    ctx->pc = 0x1C90B0u;
label_1c90b0:
    // 0x1c90b0: 0x10000119  b           . + 4 + (0x119 << 2)
label_1c90b4:
    if (ctx->pc == 0x1C90B4u) {
        ctx->pc = 0x1C90B8u;
        goto label_1c90b8;
    }
    ctx->pc = 0x1C90B0u;
    {
        const bool branch_taken_0x1c90b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90b0) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C90B8u;
label_1c90b8:
    // 0x1c90b8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x1c90b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_1c90bc:
    // 0x1c90bc: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c90bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c90c0:
    // 0x1c90c0: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x1c90c0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_1c90c4:
    // 0x1c90c4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c90c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c90c8:
    // 0x1c90c8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1c90c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1c90cc:
    // 0x1c90cc: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x1c90ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1c90d0:
    // 0x1c90d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c90d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c90d4:
    // 0x1c90d4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1c90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1c90d8:
    // 0x1c90d8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1c90d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1c90dc:
    // 0x1c90dc: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1c90dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1c90e0:
    // 0x1c90e0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1c90e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c90e4:
    // 0x1c90e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c90e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c90e8:
    // 0x1c90e8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c90e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1c90ec:
    // 0x1c90ec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c90f0:
    // 0x1c90f0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_1c90f4:
    if (ctx->pc == 0x1C90F4u) {
        ctx->pc = 0x1C90F4u;
            // 0x1c90f4: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1C90F8u;
        goto label_1c90f8;
    }
    ctx->pc = 0x1C90F0u;
    {
        const bool branch_taken_0x1c90f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C90F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C90F0u;
            // 0x1c90f4: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90f0) {
            ctx->pc = 0x1C9168u;
            goto label_1c9168;
        }
    }
    ctx->pc = 0x1C90F8u;
label_1c90f8:
    // 0x1c90f8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1c90fc:
    if (ctx->pc == 0x1C90FCu) {
        ctx->pc = 0x1C9100u;
        goto label_1c9100;
    }
    ctx->pc = 0x1C90F8u;
    {
        const bool branch_taken_0x1c90f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c90f8) {
            ctx->pc = 0x1C9140u;
            goto label_1c9140;
        }
    }
    ctx->pc = 0x1C9100u;
label_1c9100:
    // 0x1c9100: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c9100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1c9104:
    // 0x1c9104: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1c9108:
    if (ctx->pc == 0x1C9108u) {
        ctx->pc = 0x1C910Cu;
        goto label_1c910c;
    }
    ctx->pc = 0x1C9104u;
    {
        const bool branch_taken_0x1c9104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9104) {
            ctx->pc = 0x1C9118u;
            goto label_1c9118;
        }
    }
    ctx->pc = 0x1C910Cu;
label_1c910c:
    // 0x1c910c: 0x10000102  b           . + 4 + (0x102 << 2)
label_1c9110:
    if (ctx->pc == 0x1C9110u) {
        ctx->pc = 0x1C9114u;
        goto label_1c9114;
    }
    ctx->pc = 0x1C910Cu;
    {
        const bool branch_taken_0x1c910c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c910c) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9114u;
label_1c9114:
    // 0x1c9114: 0x0  nop
    ctx->pc = 0x1c9114u;
    // NOP
label_1c9118:
    // 0x1c9118: 0xc065d00  jal         func_197400
label_1c911c:
    if (ctx->pc == 0x1C911Cu) {
        ctx->pc = 0x1C9120u;
        goto label_1c9120;
    }
    ctx->pc = 0x1C9118u;
    SET_GPR_U32(ctx, 31, 0x1C9120u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9120u; }
        if (ctx->pc != 0x1C9120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9120u; }
        if (ctx->pc != 0x1C9120u) { return; }
    }
    ctx->pc = 0x1C9120u;
label_1c9120:
    // 0x1c9120: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c9120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c9124:
    // 0x1c9124: 0x144300fc  bne         $v0, $v1, . + 4 + (0xFC << 2)
label_1c9128:
    if (ctx->pc == 0x1C9128u) {
        ctx->pc = 0x1C912Cu;
        goto label_1c912c;
    }
    ctx->pc = 0x1C9124u;
    {
        const bool branch_taken_0x1c9124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9124) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C912Cu;
label_1c912c:
    // 0x1c912c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c912cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c9130:
    // 0x1c9130: 0xc06560c  jal         func_195830
label_1c9134:
    if (ctx->pc == 0x1C9134u) {
        ctx->pc = 0x1C9134u;
            // 0x1c9134: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1C9138u;
        goto label_1c9138;
    }
    ctx->pc = 0x1C9130u;
    SET_GPR_U32(ctx, 31, 0x1C9138u);
    ctx->pc = 0x1C9134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9130u;
            // 0x1c9134: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9138u; }
        if (ctx->pc != 0x1C9138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9138u; }
        if (ctx->pc != 0x1C9138u) { return; }
    }
    ctx->pc = 0x1C9138u;
label_1c9138:
    // 0x1c9138: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_1c913c:
    if (ctx->pc == 0x1C913Cu) {
        ctx->pc = 0x1C9140u;
        goto label_1c9140;
    }
    ctx->pc = 0x1C9138u;
    {
        const bool branch_taken_0x1c9138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9138) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9140u;
label_1c9140:
    // 0x1c9140: 0xc065d00  jal         func_197400
label_1c9144:
    if (ctx->pc == 0x1C9144u) {
        ctx->pc = 0x1C9148u;
        goto label_1c9148;
    }
    ctx->pc = 0x1C9140u;
    SET_GPR_U32(ctx, 31, 0x1C9148u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9148u; }
        if (ctx->pc != 0x1C9148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9148u; }
        if (ctx->pc != 0x1C9148u) { return; }
    }
    ctx->pc = 0x1C9148u;
label_1c9148:
    // 0x1c9148: 0x184000f3  blez        $v0, . + 4 + (0xF3 << 2)
label_1c914c:
    if (ctx->pc == 0x1C914Cu) {
        ctx->pc = 0x1C9150u;
        goto label_1c9150;
    }
    ctx->pc = 0x1C9148u;
    {
        const bool branch_taken_0x1c9148 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c9148) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9150u;
label_1c9150:
    // 0x1c9150: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c9150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c9154:
    // 0x1c9154: 0xc06560c  jal         func_195830
label_1c9158:
    if (ctx->pc == 0x1C9158u) {
        ctx->pc = 0x1C9158u;
            // 0x1c9158: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1C915Cu;
        goto label_1c915c;
    }
    ctx->pc = 0x1C9154u;
    SET_GPR_U32(ctx, 31, 0x1C915Cu);
    ctx->pc = 0x1C9158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9154u;
            // 0x1c9158: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C915Cu; }
        if (ctx->pc != 0x1C915Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C915Cu; }
        if (ctx->pc != 0x1C915Cu) { return; }
    }
    ctx->pc = 0x1C915Cu;
label_1c915c:
    // 0x1c915c: 0x100000ee  b           . + 4 + (0xEE << 2)
label_1c9160:
    if (ctx->pc == 0x1C9160u) {
        ctx->pc = 0x1C9164u;
        goto label_1c9164;
    }
    ctx->pc = 0x1C915Cu;
    {
        const bool branch_taken_0x1c915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c915c) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9164u;
label_1c9164:
    // 0x1c9164: 0x0  nop
    ctx->pc = 0x1c9164u;
    // NOP
label_1c9168:
    // 0x1c9168: 0xc065d00  jal         func_197400
label_1c916c:
    if (ctx->pc == 0x1C916Cu) {
        ctx->pc = 0x1C9170u;
        goto label_1c9170;
    }
    ctx->pc = 0x1C9168u;
    SET_GPR_U32(ctx, 31, 0x1C9170u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9170u; }
        if (ctx->pc != 0x1C9170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9170u; }
        if (ctx->pc != 0x1C9170u) { return; }
    }
    ctx->pc = 0x1C9170u;
label_1c9170:
    // 0x1c9170: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1c9170u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c9174:
    // 0x1c9174: 0x142000e8  bnez        $at, . + 4 + (0xE8 << 2)
label_1c9178:
    if (ctx->pc == 0x1C9178u) {
        ctx->pc = 0x1C917Cu;
        goto label_1c917c;
    }
    ctx->pc = 0x1C9174u;
    {
        const bool branch_taken_0x1c9174 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9174) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C917Cu;
label_1c917c:
    // 0x1c917c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c917cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c9180:
    // 0x1c9180: 0xc06560c  jal         func_195830
label_1c9184:
    if (ctx->pc == 0x1C9184u) {
        ctx->pc = 0x1C9184u;
            // 0x1c9184: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1C9188u;
        goto label_1c9188;
    }
    ctx->pc = 0x1C9180u;
    SET_GPR_U32(ctx, 31, 0x1C9188u);
    ctx->pc = 0x1C9184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9180u;
            // 0x1c9184: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9188u; }
        if (ctx->pc != 0x1C9188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9188u; }
        if (ctx->pc != 0x1C9188u) { return; }
    }
    ctx->pc = 0x1C9188u;
label_1c9188:
    // 0x1c9188: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_1c918c:
    if (ctx->pc == 0x1C918Cu) {
        ctx->pc = 0x1C9190u;
        goto label_1c9190;
    }
    ctx->pc = 0x1C9188u;
    {
        const bool branch_taken_0x1c9188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9188) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9190u;
label_1c9190:
    // 0x1c9190: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x1c9190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_1c9194:
    // 0x1c9194: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c9194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c9198:
    // 0x1c9198: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x1c9198u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_1c919c:
    // 0x1c919c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c919cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c91a0:
    // 0x1c91a0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1c91a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1c91a4:
    // 0x1c91a4: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x1c91a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1c91a8:
    // 0x1c91a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c91a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c91ac:
    // 0x1c91ac: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1c91acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1c91b0:
    // 0x1c91b0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c91b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1c91b4:
    // 0x1c91b4: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1c91b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1c91b8:
    // 0x1c91b8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1c91b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c91bc:
    // 0x1c91bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c91bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c91c0:
    // 0x1c91c0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c91c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1c91c4:
    // 0x1c91c4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c91c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c91c8:
    // 0x1c91c8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_1c91cc:
    if (ctx->pc == 0x1C91CCu) {
        ctx->pc = 0x1C91CCu;
            // 0x1c91cc: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1C91D0u;
        goto label_1c91d0;
    }
    ctx->pc = 0x1C91C8u;
    {
        const bool branch_taken_0x1c91c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C91CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C91C8u;
            // 0x1c91cc: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91c8) {
            ctx->pc = 0x1C9240u;
            goto label_1c9240;
        }
    }
    ctx->pc = 0x1C91D0u;
label_1c91d0:
    // 0x1c91d0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1c91d4:
    if (ctx->pc == 0x1C91D4u) {
        ctx->pc = 0x1C91D8u;
        goto label_1c91d8;
    }
    ctx->pc = 0x1C91D0u;
    {
        const bool branch_taken_0x1c91d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c91d0) {
            ctx->pc = 0x1C9218u;
            goto label_1c9218;
        }
    }
    ctx->pc = 0x1C91D8u;
label_1c91d8:
    // 0x1c91d8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1c91dc:
    // 0x1c91dc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1c91e0:
    if (ctx->pc == 0x1C91E0u) {
        ctx->pc = 0x1C91E4u;
        goto label_1c91e4;
    }
    ctx->pc = 0x1C91DCu;
    {
        const bool branch_taken_0x1c91dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c91dc) {
            ctx->pc = 0x1C91F0u;
            goto label_1c91f0;
        }
    }
    ctx->pc = 0x1C91E4u;
label_1c91e4:
    // 0x1c91e4: 0x100000cc  b           . + 4 + (0xCC << 2)
label_1c91e8:
    if (ctx->pc == 0x1C91E8u) {
        ctx->pc = 0x1C91ECu;
        goto label_1c91ec;
    }
    ctx->pc = 0x1C91E4u;
    {
        const bool branch_taken_0x1c91e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c91e4) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C91ECu;
label_1c91ec:
    // 0x1c91ec: 0x0  nop
    ctx->pc = 0x1c91ecu;
    // NOP
label_1c91f0:
    // 0x1c91f0: 0xc065d00  jal         func_197400
label_1c91f4:
    if (ctx->pc == 0x1C91F4u) {
        ctx->pc = 0x1C91F8u;
        goto label_1c91f8;
    }
    ctx->pc = 0x1C91F0u;
    SET_GPR_U32(ctx, 31, 0x1C91F8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91F8u; }
        if (ctx->pc != 0x1C91F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91F8u; }
        if (ctx->pc != 0x1C91F8u) { return; }
    }
    ctx->pc = 0x1C91F8u;
label_1c91f8:
    // 0x1c91f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c91fc:
    // 0x1c91fc: 0x144300c6  bne         $v0, $v1, . + 4 + (0xC6 << 2)
label_1c9200:
    if (ctx->pc == 0x1C9200u) {
        ctx->pc = 0x1C9204u;
        goto label_1c9204;
    }
    ctx->pc = 0x1C91FCu;
    {
        const bool branch_taken_0x1c91fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c91fc) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9204u;
label_1c9204:
    // 0x1c9204: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c9204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c9208:
    // 0x1c9208: 0xc06560c  jal         func_195830
label_1c920c:
    if (ctx->pc == 0x1C920Cu) {
        ctx->pc = 0x1C920Cu;
            // 0x1c920c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1C9210u;
        goto label_1c9210;
    }
    ctx->pc = 0x1C9208u;
    SET_GPR_U32(ctx, 31, 0x1C9210u);
    ctx->pc = 0x1C920Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9208u;
            // 0x1c920c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9210u; }
        if (ctx->pc != 0x1C9210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9210u; }
        if (ctx->pc != 0x1C9210u) { return; }
    }
    ctx->pc = 0x1C9210u;
label_1c9210:
    // 0x1c9210: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1c9214:
    if (ctx->pc == 0x1C9214u) {
        ctx->pc = 0x1C9218u;
        goto label_1c9218;
    }
    ctx->pc = 0x1C9210u;
    {
        const bool branch_taken_0x1c9210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9210) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9218u;
label_1c9218:
    // 0x1c9218: 0xc065d00  jal         func_197400
label_1c921c:
    if (ctx->pc == 0x1C921Cu) {
        ctx->pc = 0x1C9220u;
        goto label_1c9220;
    }
    ctx->pc = 0x1C9218u;
    SET_GPR_U32(ctx, 31, 0x1C9220u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9220u; }
        if (ctx->pc != 0x1C9220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9220u; }
        if (ctx->pc != 0x1C9220u) { return; }
    }
    ctx->pc = 0x1C9220u;
label_1c9220:
    // 0x1c9220: 0x184000bd  blez        $v0, . + 4 + (0xBD << 2)
label_1c9224:
    if (ctx->pc == 0x1C9224u) {
        ctx->pc = 0x1C9228u;
        goto label_1c9228;
    }
    ctx->pc = 0x1C9220u;
    {
        const bool branch_taken_0x1c9220 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c9220) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9228u;
label_1c9228:
    // 0x1c9228: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c9228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c922c:
    // 0x1c922c: 0xc06560c  jal         func_195830
label_1c9230:
    if (ctx->pc == 0x1C9230u) {
        ctx->pc = 0x1C9230u;
            // 0x1c9230: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1C9234u;
        goto label_1c9234;
    }
    ctx->pc = 0x1C922Cu;
    SET_GPR_U32(ctx, 31, 0x1C9234u);
    ctx->pc = 0x1C9230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C922Cu;
            // 0x1c9230: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9234u; }
        if (ctx->pc != 0x1C9234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9234u; }
        if (ctx->pc != 0x1C9234u) { return; }
    }
    ctx->pc = 0x1C9234u;
label_1c9234:
    // 0x1c9234: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_1c9238:
    if (ctx->pc == 0x1C9238u) {
        ctx->pc = 0x1C923Cu;
        goto label_1c923c;
    }
    ctx->pc = 0x1C9234u;
    {
        const bool branch_taken_0x1c9234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9234) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C923Cu;
label_1c923c:
    // 0x1c923c: 0x0  nop
    ctx->pc = 0x1c923cu;
    // NOP
label_1c9240:
    // 0x1c9240: 0xc065d00  jal         func_197400
label_1c9244:
    if (ctx->pc == 0x1C9244u) {
        ctx->pc = 0x1C9248u;
        goto label_1c9248;
    }
    ctx->pc = 0x1C9240u;
    SET_GPR_U32(ctx, 31, 0x1C9248u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9248u; }
        if (ctx->pc != 0x1C9248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9248u; }
        if (ctx->pc != 0x1C9248u) { return; }
    }
    ctx->pc = 0x1C9248u;
label_1c9248:
    // 0x1c9248: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1c9248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c924c:
    // 0x1c924c: 0x142000b2  bnez        $at, . + 4 + (0xB2 << 2)
label_1c9250:
    if (ctx->pc == 0x1C9250u) {
        ctx->pc = 0x1C9254u;
        goto label_1c9254;
    }
    ctx->pc = 0x1C924Cu;
    {
        const bool branch_taken_0x1c924c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c924c) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9254u;
label_1c9254:
    // 0x1c9254: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c9254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c9258:
    // 0x1c9258: 0xc06560c  jal         func_195830
label_1c925c:
    if (ctx->pc == 0x1C925Cu) {
        ctx->pc = 0x1C925Cu;
            // 0x1c925c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1C9260u;
        goto label_1c9260;
    }
    ctx->pc = 0x1C9258u;
    SET_GPR_U32(ctx, 31, 0x1C9260u);
    ctx->pc = 0x1C925Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9258u;
            // 0x1c925c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9260u; }
        if (ctx->pc != 0x1C9260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9260u; }
        if (ctx->pc != 0x1C9260u) { return; }
    }
    ctx->pc = 0x1C9260u;
label_1c9260:
    // 0x1c9260: 0x100000ad  b           . + 4 + (0xAD << 2)
label_1c9264:
    if (ctx->pc == 0x1C9264u) {
        ctx->pc = 0x1C9268u;
        goto label_1c9268;
    }
    ctx->pc = 0x1C9260u;
    {
        const bool branch_taken_0x1c9260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9260) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9268u;
label_1c9268:
    // 0x1c9268: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1c9268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1c926c:
    // 0x1c926c: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
label_1c9270:
    if (ctx->pc == 0x1C9270u) {
        ctx->pc = 0x1C9274u;
        goto label_1c9274;
    }
    ctx->pc = 0x1C926Cu;
    {
        const bool branch_taken_0x1c926c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c926c) {
            ctx->pc = 0x1C93D0u;
            goto label_1c93d0;
        }
    }
    ctx->pc = 0x1C9274u;
label_1c9274:
    // 0x1c9274: 0xc040d72  jal         func_1035C8
label_1c9278:
    if (ctx->pc == 0x1C9278u) {
        ctx->pc = 0x1C9278u;
            // 0x1c9278: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1C927Cu;
        goto label_1c927c;
    }
    ctx->pc = 0x1C9274u;
    SET_GPR_U32(ctx, 31, 0x1C927Cu);
    ctx->pc = 0x1C9278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9274u;
            // 0x1c9278: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C927Cu; }
        if (ctx->pc != 0x1C927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C927Cu; }
        if (ctx->pc != 0x1C927Cu) { return; }
    }
    ctx->pc = 0x1C927Cu;
label_1c927c:
    // 0x1c927c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c927cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9280:
    // 0x1c9280: 0xc040078  jal         func_1001E0
label_1c9284:
    if (ctx->pc == 0x1C9284u) {
        ctx->pc = 0x1C9284u;
            // 0x1c9284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9288u;
        goto label_1c9288;
    }
    ctx->pc = 0x1C9280u;
    SET_GPR_U32(ctx, 31, 0x1C9288u);
    ctx->pc = 0x1C9284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9280u;
            // 0x1c9284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9288u; }
        if (ctx->pc != 0x1C9288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9288u; }
        if (ctx->pc != 0x1C9288u) { return; }
    }
    ctx->pc = 0x1C9288u;
label_1c9288:
    // 0x1c9288: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c928c:
    if (ctx->pc == 0x1C928Cu) {
        ctx->pc = 0x1C9290u;
        goto label_1c9290;
    }
    ctx->pc = 0x1C9288u;
    {
        const bool branch_taken_0x1c9288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9288) {
            ctx->pc = 0x1C92B0u;
            goto label_1c92b0;
        }
    }
    ctx->pc = 0x1C9290u;
label_1c9290:
    // 0x1c9290: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1c9290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9294:
    // 0x1c9294: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1c9294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1c9298:
    // 0x1c9298: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1c9298u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1c929c:
    // 0x1c929c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c929cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c92a0:
    // 0x1c92a0: 0x0  nop
    ctx->pc = 0x1c92a0u;
    // NOP
label_1c92a4:
    // 0x1c92a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c92a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c92a8:
    // 0x1c92a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c92ac:
    if (ctx->pc == 0x1C92ACu) {
        ctx->pc = 0x1C92ACu;
            // 0x1c92ac: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1C92B0u;
        goto label_1c92b0;
    }
    ctx->pc = 0x1C92A8u;
    {
        const bool branch_taken_0x1c92a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92A8u;
            // 0x1c92ac: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92a8) {
            ctx->pc = 0x1C92B8u;
            goto label_1c92b8;
        }
    }
    ctx->pc = 0x1C92B0u;
label_1c92b0:
    // 0x1c92b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c92b4:
    // 0x1c92b4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1c92b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1c92b8:
    // 0x1c92b8: 0xc040d72  jal         func_1035C8
label_1c92bc:
    if (ctx->pc == 0x1C92BCu) {
        ctx->pc = 0x1C92BCu;
            // 0x1c92bc: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1C92C0u;
        goto label_1c92c0;
    }
    ctx->pc = 0x1C92B8u;
    SET_GPR_U32(ctx, 31, 0x1C92C0u);
    ctx->pc = 0x1C92BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92B8u;
            // 0x1c92bc: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92C0u; }
        if (ctx->pc != 0x1C92C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92C0u; }
        if (ctx->pc != 0x1C92C0u) { return; }
    }
    ctx->pc = 0x1C92C0u;
label_1c92c0:
    // 0x1c92c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c92c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c92c4:
    // 0x1c92c4: 0xc040078  jal         func_1001E0
label_1c92c8:
    if (ctx->pc == 0x1C92C8u) {
        ctx->pc = 0x1C92C8u;
            // 0x1c92c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C92CCu;
        goto label_1c92cc;
    }
    ctx->pc = 0x1C92C4u;
    SET_GPR_U32(ctx, 31, 0x1C92CCu);
    ctx->pc = 0x1C92C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92C4u;
            // 0x1c92c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92CCu; }
        if (ctx->pc != 0x1C92CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92CCu; }
        if (ctx->pc != 0x1C92CCu) { return; }
    }
    ctx->pc = 0x1C92CCu;
label_1c92cc:
    // 0x1c92cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c92d0:
    if (ctx->pc == 0x1C92D0u) {
        ctx->pc = 0x1C92D4u;
        goto label_1c92d4;
    }
    ctx->pc = 0x1C92CCu;
    {
        const bool branch_taken_0x1c92cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c92cc) {
            ctx->pc = 0x1C92F0u;
            goto label_1c92f0;
        }
    }
    ctx->pc = 0x1C92D4u;
label_1c92d4:
    // 0x1c92d4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1c92d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c92d8:
    // 0x1c92d8: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1c92d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1c92dc:
    // 0x1c92dc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c92dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1c92e0:
    // 0x1c92e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c92e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c92e4:
    // 0x1c92e4: 0x0  nop
    ctx->pc = 0x1c92e4u;
    // NOP
label_1c92e8:
    // 0x1c92e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c92e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c92ec:
    // 0x1c92ec: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c92ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1c92f0:
    // 0x1c92f0: 0xc040d72  jal         func_1035C8
label_1c92f4:
    if (ctx->pc == 0x1C92F4u) {
        ctx->pc = 0x1C92F4u;
            // 0x1c92f4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1C92F8u;
        goto label_1c92f8;
    }
    ctx->pc = 0x1C92F0u;
    SET_GPR_U32(ctx, 31, 0x1C92F8u);
    ctx->pc = 0x1C92F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92F0u;
            // 0x1c92f4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92F8u; }
        if (ctx->pc != 0x1C92F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92F8u; }
        if (ctx->pc != 0x1C92F8u) { return; }
    }
    ctx->pc = 0x1C92F8u;
label_1c92f8:
    // 0x1c92f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c92f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c92fc:
    // 0x1c92fc: 0xc04008c  jal         func_100230
label_1c9300:
    if (ctx->pc == 0x1C9300u) {
        ctx->pc = 0x1C9300u;
            // 0x1c9300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9304u;
        goto label_1c9304;
    }
    ctx->pc = 0x1C92FCu;
    SET_GPR_U32(ctx, 31, 0x1C9304u);
    ctx->pc = 0x1C9300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92FCu;
            // 0x1c9300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9304u; }
        if (ctx->pc != 0x1C9304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9304u; }
        if (ctx->pc != 0x1C9304u) { return; }
    }
    ctx->pc = 0x1C9304u;
label_1c9304:
    // 0x1c9304: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c9308:
    if (ctx->pc == 0x1C9308u) {
        ctx->pc = 0x1C930Cu;
        goto label_1c930c;
    }
    ctx->pc = 0x1C9304u;
    {
        const bool branch_taken_0x1c9304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9304) {
            ctx->pc = 0x1C9328u;
            goto label_1c9328;
        }
    }
    ctx->pc = 0x1C930Cu;
label_1c930c:
    // 0x1c930c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1c930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9310:
    // 0x1c9310: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1c9310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1c9314:
    // 0x1c9314: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c9314u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1c9318:
    // 0x1c9318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c931c:
    // 0x1c931c: 0x0  nop
    ctx->pc = 0x1c931cu;
    // NOP
label_1c9320:
    // 0x1c9320: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c9320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c9324:
    // 0x1c9324: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c9324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1c9328:
    // 0x1c9328: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1c9328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1c932c:
    // 0x1c932c: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1c932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1c9330:
    // 0x1c9330: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c9330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c9334:
    // 0x1c9334: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1c9334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c9338:
    // 0x1c9338: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c9338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c933c:
    // 0x1c933c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1c933cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1c9340:
    // 0x1c9340: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1c9340u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1c9344:
    // 0x1c9344: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1c9344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1c9348:
    // 0x1c9348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c9348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c934c:
    // 0x1c934c: 0x0  nop
    ctx->pc = 0x1c934cu;
    // NOP
label_1c9350:
    // 0x1c9350: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c9350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c9354:
    // 0x1c9354: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c9354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c9358:
    // 0x1c9358: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c9358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1c935c:
    // 0x1c935c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c935cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c9360:
    // 0x1c9360: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1c9360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1c9364:
    // 0x1c9364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9368:
    // 0x1c9368: 0x0  nop
    ctx->pc = 0x1c9368u;
    // NOP
label_1c936c:
    // 0x1c936c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c936cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c9370:
    // 0x1c9370: 0xc04b6ee  jal         func_12DBB8
label_1c9374:
    if (ctx->pc == 0x1C9374u) {
        ctx->pc = 0x1C9374u;
            // 0x1c9374: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x1C9378u;
        goto label_1c9378;
    }
    ctx->pc = 0x1C9370u;
    SET_GPR_U32(ctx, 31, 0x1C9378u);
    ctx->pc = 0x1C9374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9370u;
            // 0x1c9374: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9378u; }
        if (ctx->pc != 0x1C9378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9378u; }
        if (ctx->pc != 0x1C9378u) { return; }
    }
    ctx->pc = 0x1C9378u;
label_1c9378:
    // 0x1c9378: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c937c:
    // 0x1c937c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1c937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9380:
    // 0x1c9380: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1c9380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9384:
    // 0x1c9384: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c9384u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1c9388:
    // 0x1c9388: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c9388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c938c:
    // 0x1c938c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1c9390:
    if (ctx->pc == 0x1C9390u) {
        ctx->pc = 0x1C9390u;
            // 0x1c9390: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1C9394u;
        goto label_1c9394;
    }
    ctx->pc = 0x1C938Cu;
    {
        const bool branch_taken_0x1c938c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C938Cu;
            // 0x1c9390: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c938c) {
            ctx->pc = 0x1C93A0u;
            goto label_1c93a0;
        }
    }
    ctx->pc = 0x1C9394u;
label_1c9394:
    // 0x1c9394: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c9394u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1c9398:
    // 0x1c9398: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1c9398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1c939c:
    // 0x1c939c: 0x0  nop
    ctx->pc = 0x1c939cu;
    // NOP
label_1c93a0:
    // 0x1c93a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c93a4:
    // 0x1c93a4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1c93a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c93a8:
    // 0x1c93a8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1c93a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c93ac:
    // 0x1c93ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c93acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1c93b0:
    // 0x1c93b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c93b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c93b4:
    // 0x1c93b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1c93b8:
    if (ctx->pc == 0x1C93B8u) {
        ctx->pc = 0x1C93B8u;
            // 0x1c93b8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1C93BCu;
        goto label_1c93bc;
    }
    ctx->pc = 0x1C93B4u;
    {
        const bool branch_taken_0x1c93b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C93B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93B4u;
            // 0x1c93b8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93b4) {
            ctx->pc = 0x1C93C8u;
            goto label_1c93c8;
        }
    }
    ctx->pc = 0x1C93BCu;
label_1c93bc:
    // 0x1c93bc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c93bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1c93c0:
    // 0x1c93c0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1c93c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1c93c4:
    // 0x1c93c4: 0x0  nop
    ctx->pc = 0x1c93c4u;
    // NOP
label_1c93c8:
    // 0x1c93c8: 0x10000053  b           . + 4 + (0x53 << 2)
label_1c93cc:
    if (ctx->pc == 0x1C93CCu) {
        ctx->pc = 0x1C93CCu;
            // 0x1c93cc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1C93D0u;
        goto label_1c93d0;
    }
    ctx->pc = 0x1C93C8u;
    {
        const bool branch_taken_0x1c93c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C93CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93C8u;
            // 0x1c93cc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93c8) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C93D0u;
label_1c93d0:
    // 0x1c93d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c93d4:
    // 0x1c93d4: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
label_1c93d8:
    if (ctx->pc == 0x1C93D8u) {
        ctx->pc = 0x1C93D8u;
            // 0x1c93d8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1C93DCu;
        goto label_1c93dc;
    }
    ctx->pc = 0x1C93D4u;
    {
        const bool branch_taken_0x1c93d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C93D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93D4u;
            // 0x1c93d8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93d4) {
            ctx->pc = 0x1C9498u;
            goto label_1c9498;
        }
    }
    ctx->pc = 0x1C93DCu;
label_1c93dc:
    // 0x1c93dc: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1c93dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c93e0:
    // 0x1c93e0: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1c93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1c93e4:
    // 0x1c93e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c93e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c93e8:
    // 0x1c93e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c93e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c93ec:
    // 0x1c93ec: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1c93ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1c93f0:
    // 0x1c93f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1c93f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1c93f4:
    // 0x1c93f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c93f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c93f8:
    // 0x1c93f8: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1c93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1c93fc:
    // 0x1c93fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c93fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c9400:
    // 0x1c9400: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c9400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c9404:
    // 0x1c9404: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c9404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1c9408:
    // 0x1c9408: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c9408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c940c:
    // 0x1c940c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1c940cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1c9410:
    // 0x1c9410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9414:
    // 0x1c9414: 0x0  nop
    ctx->pc = 0x1c9414u;
    // NOP
label_1c9418:
    // 0x1c9418: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c9418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c941c:
    // 0x1c941c: 0xc04b6ee  jal         func_12DBB8
label_1c9420:
    if (ctx->pc == 0x1C9420u) {
        ctx->pc = 0x1C9420u;
            // 0x1c9420: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x1C9424u;
        goto label_1c9424;
    }
    ctx->pc = 0x1C941Cu;
    SET_GPR_U32(ctx, 31, 0x1C9424u);
    ctx->pc = 0x1C9420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C941Cu;
            // 0x1c9420: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9424u; }
        if (ctx->pc != 0x1C9424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9424u; }
        if (ctx->pc != 0x1C9424u) { return; }
    }
    ctx->pc = 0x1C9424u;
label_1c9424:
    // 0x1c9424: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9428:
    // 0x1c9428: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1c9428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c942c:
    // 0x1c942c: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1c942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9430:
    // 0x1c9430: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c9430u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1c9434:
    // 0x1c9434: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c9434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9438:
    // 0x1c9438: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1c943c:
    if (ctx->pc == 0x1C943Cu) {
        ctx->pc = 0x1C943Cu;
            // 0x1c943c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1C9440u;
        goto label_1c9440;
    }
    ctx->pc = 0x1C9438u;
    {
        const bool branch_taken_0x1c9438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C943Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9438u;
            // 0x1c943c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9438) {
            ctx->pc = 0x1C9448u;
            goto label_1c9448;
        }
    }
    ctx->pc = 0x1C9440u;
label_1c9440:
    // 0x1c9440: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c9440u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1c9444:
    // 0x1c9444: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1c9444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1c9448:
    // 0x1c9448: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c944c:
    // 0x1c944c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1c944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9450:
    // 0x1c9450: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1c9450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9454:
    // 0x1c9454: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c9454u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1c9458:
    // 0x1c9458: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c945c:
    // 0x1c945c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1c9460:
    if (ctx->pc == 0x1C9460u) {
        ctx->pc = 0x1C9460u;
            // 0x1c9460: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1C9464u;
        goto label_1c9464;
    }
    ctx->pc = 0x1C945Cu;
    {
        const bool branch_taken_0x1c945c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C945Cu;
            // 0x1c9460: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c945c) {
            ctx->pc = 0x1C9470u;
            goto label_1c9470;
        }
    }
    ctx->pc = 0x1C9464u;
label_1c9464:
    // 0x1c9464: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c9464u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1c9468:
    // 0x1c9468: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1c9468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1c946c:
    // 0x1c946c: 0x0  nop
    ctx->pc = 0x1c946cu;
    // NOP
label_1c9470:
    // 0x1c9470: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c9470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c9474:
    // 0x1c9474: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1c9474u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1c9478:
    // 0x1c9478: 0x14200027  bnez        $at, . + 4 + (0x27 << 2)
label_1c947c:
    if (ctx->pc == 0x1C947Cu) {
        ctx->pc = 0x1C9480u;
        goto label_1c9480;
    }
    ctx->pc = 0x1C9478u;
    {
        const bool branch_taken_0x1c9478 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9478) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9480u;
label_1c9480:
    // 0x1c9480: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c9480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c9484:
    // 0x1c9484: 0xc06560c  jal         func_195830
label_1c9488:
    if (ctx->pc == 0x1C9488u) {
        ctx->pc = 0x1C9488u;
            // 0x1c9488: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1C948Cu;
        goto label_1c948c;
    }
    ctx->pc = 0x1C9484u;
    SET_GPR_U32(ctx, 31, 0x1C948Cu);
    ctx->pc = 0x1C9488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9484u;
            // 0x1c9488: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C948Cu; }
        if (ctx->pc != 0x1C948Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C948Cu; }
        if (ctx->pc != 0x1C948Cu) { return; }
    }
    ctx->pc = 0x1C948Cu;
label_1c948c:
    // 0x1c948c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c9490:
    // 0x1c9490: 0x10000021  b           . + 4 + (0x21 << 2)
label_1c9494:
    if (ctx->pc == 0x1C9494u) {
        ctx->pc = 0x1C9494u;
            // 0x1c9494: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1C9498u;
        goto label_1c9498;
    }
    ctx->pc = 0x1C9490u;
    {
        const bool branch_taken_0x1c9490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9490u;
            // 0x1c9494: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9490) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C9498u;
label_1c9498:
    // 0x1c9498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c9498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c949c:
    // 0x1c949c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_1c94a0:
    if (ctx->pc == 0x1C94A0u) {
        ctx->pc = 0x1C94A4u;
        goto label_1c94a4;
    }
    ctx->pc = 0x1C949Cu;
    {
        const bool branch_taken_0x1c949c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c949c) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C94A4u;
label_1c94a4:
    // 0x1c94a4: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1c94a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c94a8:
    // 0x1c94a8: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1c94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_1c94ac:
    // 0x1c94ac: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1c94acu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1c94b0:
    // 0x1c94b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c94b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c94b4:
    // 0x1c94b4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1c94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1c94b8:
    // 0x1c94b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c94b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1c94bc:
    // 0x1c94bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c94bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c94c0:
    // 0x1c94c0: 0x0  nop
    ctx->pc = 0x1c94c0u;
    // NOP
label_1c94c4:
    // 0x1c94c4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1c94c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1c94c8:
    // 0x1c94c8: 0xe60100d4  swc1        $f1, 0xD4($s0)
    ctx->pc = 0x1c94c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1c94cc:
    // 0x1c94cc: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1c94ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c94d0:
    // 0x1c94d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c94d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c94d4:
    // 0x1c94d4: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1c94d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1c94d8:
    // 0x1c94d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c94dc:
    // 0x1c94dc: 0xc040d72  jal         func_1035C8
label_1c94e0:
    if (ctx->pc == 0x1C94E0u) {
        ctx->pc = 0x1C94E0u;
            // 0x1c94e0: 0xc44c0118  lwc1        $f12, 0x118($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1C94E4u;
        goto label_1c94e4;
    }
    ctx->pc = 0x1C94DCu;
    SET_GPR_U32(ctx, 31, 0x1C94E4u);
    ctx->pc = 0x1C94E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C94DCu;
            // 0x1c94e0: 0xc44c0118  lwc1        $f12, 0x118($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C94E4u; }
        if (ctx->pc != 0x1C94E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C94E4u; }
        if (ctx->pc != 0x1C94E4u) { return; }
    }
    ctx->pc = 0x1C94E4u;
label_1c94e4:
    // 0x1c94e4: 0x3c044009  lui         $a0, 0x4009
    ctx->pc = 0x1c94e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16393 << 16));
label_1c94e8:
    // 0x1c94e8: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1c94e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1c94ec:
    // 0x1c94ec: 0x34841eb8  ori         $a0, $a0, 0x1EB8
    ctx->pc = 0x1c94ecu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)7864u)));
label_1c94f0:
    // 0x1c94f0: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1c94f0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)34079u)));
label_1c94f4:
    // 0x1c94f4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1c94f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_1c94f8:
    // 0x1c94f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c94f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c94fc:
    // 0x1c94fc: 0xc04008c  jal         func_100230
label_1c9500:
    if (ctx->pc == 0x1C9500u) {
        ctx->pc = 0x1C9500u;
            // 0x1c9500: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->pc = 0x1C9504u;
        goto label_1c9504;
    }
    ctx->pc = 0x1C94FCu;
    SET_GPR_U32(ctx, 31, 0x1C9504u);
    ctx->pc = 0x1C9500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C94FCu;
            // 0x1c9500: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9504u; }
        if (ctx->pc != 0x1C9504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9504u; }
        if (ctx->pc != 0x1C9504u) { return; }
    }
    ctx->pc = 0x1C9504u;
label_1c9504:
    // 0x1c9504: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c9508:
    if (ctx->pc == 0x1C9508u) {
        ctx->pc = 0x1C950Cu;
        goto label_1c950c;
    }
    ctx->pc = 0x1C9504u;
    {
        const bool branch_taken_0x1c9504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9504) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C950Cu;
label_1c950c:
    // 0x1c950c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1c950cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_1c9510:
    // 0x1c9510: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c9510u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1c9514:
    // 0x1c9514: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1c9514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1c9518:
    // 0x1c9518: 0xc04b788  jal         func_12DE20
label_1c951c:
    if (ctx->pc == 0x1C951Cu) {
        ctx->pc = 0x1C951Cu;
            // 0x1c951c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C9520u;
        goto label_1c9520;
    }
    ctx->pc = 0x1C9518u;
    SET_GPR_U32(ctx, 31, 0x1C9520u);
    ctx->pc = 0x1C951Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9518u;
            // 0x1c951c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9520u; }
        if (ctx->pc != 0x1C9520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9520u; }
        if (ctx->pc != 0x1C9520u) { return; }
    }
    ctx->pc = 0x1C9520u;
label_1c9520:
    // 0x1c9520: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9524:
    // 0x1c9524: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1c9524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c9528:
    // 0x1c9528: 0xc04b7da  jal         func_12DF68
label_1c952c:
    if (ctx->pc == 0x1C952Cu) {
        ctx->pc = 0x1C952Cu;
            // 0x1c952c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9530u;
        goto label_1c9530;
    }
    ctx->pc = 0x1C9528u;
    SET_GPR_U32(ctx, 31, 0x1C9530u);
    ctx->pc = 0x1C952Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9528u;
            // 0x1c952c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9530u; }
        if (ctx->pc != 0x1C9530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9530u; }
        if (ctx->pc != 0x1C9530u) { return; }
    }
    ctx->pc = 0x1C9530u;
label_1c9530:
    // 0x1c9530: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9534:
    // 0x1c9534: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1c9534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c9538:
    // 0x1c9538: 0xc04b804  jal         func_12E010
label_1c953c:
    if (ctx->pc == 0x1C953Cu) {
        ctx->pc = 0x1C953Cu;
            // 0x1c953c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9540u;
        goto label_1c9540;
    }
    ctx->pc = 0x1C9538u;
    SET_GPR_U32(ctx, 31, 0x1C9540u);
    ctx->pc = 0x1C953Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9538u;
            // 0x1c953c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9540u; }
        if (ctx->pc != 0x1C9540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9540u; }
        if (ctx->pc != 0x1C9540u) { return; }
    }
    ctx->pc = 0x1C9540u;
label_1c9540:
    // 0x1c9540: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9544:
    // 0x1c9544: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1c9544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c9548:
    // 0x1c9548: 0xc04b7b0  jal         func_12DEC0
label_1c954c:
    if (ctx->pc == 0x1C954Cu) {
        ctx->pc = 0x1C954Cu;
            // 0x1c954c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9550u;
        goto label_1c9550;
    }
    ctx->pc = 0x1C9548u;
    SET_GPR_U32(ctx, 31, 0x1C9550u);
    ctx->pc = 0x1C954Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9548u;
            // 0x1c954c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9550u; }
        if (ctx->pc != 0x1C9550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9550u; }
        if (ctx->pc != 0x1C9550u) { return; }
    }
    ctx->pc = 0x1C9550u;
label_1c9550:
    // 0x1c9550: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9554:
    // 0x1c9554: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c9554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9558:
    // 0x1c9558: 0xc04b75e  jal         func_12DD78
label_1c955c:
    if (ctx->pc == 0x1C955Cu) {
        ctx->pc = 0x1C955Cu;
            // 0x1c955c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1C9560u;
        goto label_1c9560;
    }
    ctx->pc = 0x1C9558u;
    SET_GPR_U32(ctx, 31, 0x1C9560u);
    ctx->pc = 0x1C955Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9558u;
            // 0x1c955c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9560u; }
        if (ctx->pc != 0x1C9560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9560u; }
        if (ctx->pc != 0x1C9560u) { return; }
    }
    ctx->pc = 0x1C9560u;
label_1c9560:
    // 0x1c9560: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c9560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c9564:
    // 0x1c9564: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c9564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c9568:
    // 0x1c9568: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1c9568u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c956c:
    // 0x1c956c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1c9570:
    if (ctx->pc == 0x1C9570u) {
        ctx->pc = 0x1C9574u;
        goto label_1c9574;
    }
    ctx->pc = 0x1C956Cu;
    {
        const bool branch_taken_0x1c956c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c956c) {
            ctx->pc = 0x1C95C0u;
            goto label_1c95c0;
        }
    }
    ctx->pc = 0x1C9574u;
label_1c9574:
    // 0x1c9574: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1c9574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1c9578:
    // 0x1c9578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c957c:
    if (ctx->pc == 0x1C957Cu) {
        ctx->pc = 0x1C9580u;
        goto label_1c9580;
    }
    ctx->pc = 0x1C9578u;
    {
        const bool branch_taken_0x1c9578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9578) {
            ctx->pc = 0x1C9590u;
            goto label_1c9590;
        }
    }
    ctx->pc = 0x1C9580u;
label_1c9580:
    // 0x1c9580: 0xc0604f0  jal         func_1813C0
label_1c9584:
    if (ctx->pc == 0x1C9584u) {
        ctx->pc = 0x1C9584u;
            // 0x1c9584: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C9588u;
        goto label_1c9588;
    }
    ctx->pc = 0x1C9580u;
    SET_GPR_U32(ctx, 31, 0x1C9588u);
    ctx->pc = 0x1C9584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9580u;
            // 0x1c9584: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9588u; }
        if (ctx->pc != 0x1C9588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9588u; }
        if (ctx->pc != 0x1C9588u) { return; }
    }
    ctx->pc = 0x1C9588u;
label_1c9588:
    // 0x1c9588: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c958c:
    if (ctx->pc == 0x1C958Cu) {
        ctx->pc = 0x1C9590u;
        goto label_1c9590;
    }
    ctx->pc = 0x1C9588u;
    {
        const bool branch_taken_0x1c9588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9588) {
            ctx->pc = 0x1C9598u;
            goto label_1c9598;
        }
    }
    ctx->pc = 0x1C9590u;
label_1c9590:
    // 0x1c9590: 0xc0604dc  jal         func_181370
label_1c9594:
    if (ctx->pc == 0x1C9594u) {
        ctx->pc = 0x1C9594u;
            // 0x1c9594: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C9598u;
        goto label_1c9598;
    }
    ctx->pc = 0x1C9590u;
    SET_GPR_U32(ctx, 31, 0x1C9598u);
    ctx->pc = 0x1C9594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9590u;
            // 0x1c9594: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9598u; }
        if (ctx->pc != 0x1C9598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9598u; }
        if (ctx->pc != 0x1C9598u) { return; }
    }
    ctx->pc = 0x1C9598u;
label_1c9598:
    // 0x1c9598: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1c9598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1c959c:
    // 0x1c959c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c95a0:
    if (ctx->pc == 0x1C95A0u) {
        ctx->pc = 0x1C95A4u;
        goto label_1c95a4;
    }
    ctx->pc = 0x1C959Cu;
    {
        const bool branch_taken_0x1c959c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c959c) {
            ctx->pc = 0x1C95B0u;
            goto label_1c95b0;
        }
    }
    ctx->pc = 0x1C95A4u;
label_1c95a4:
    // 0x1c95a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c95a8:
    if (ctx->pc == 0x1C95A8u) {
        ctx->pc = 0x1C95A8u;
            // 0x1c95a8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1C95ACu;
        goto label_1c95ac;
    }
    ctx->pc = 0x1C95A4u;
    {
        const bool branch_taken_0x1c95a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C95A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95A4u;
            // 0x1c95a8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95a4) {
            ctx->pc = 0x1C95D0u;
            goto label_1c95d0;
        }
    }
    ctx->pc = 0x1C95ACu;
label_1c95ac:
    // 0x1c95ac: 0x0  nop
    ctx->pc = 0x1c95acu;
    // NOP
label_1c95b0:
    // 0x1c95b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c95b4:
    // 0x1c95b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c95b8:
    if (ctx->pc == 0x1C95B8u) {
        ctx->pc = 0x1C95B8u;
            // 0x1c95b8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1C95BCu;
        goto label_1c95bc;
    }
    ctx->pc = 0x1C95B4u;
    {
        const bool branch_taken_0x1c95b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C95B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95B4u;
            // 0x1c95b8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95b4) {
            ctx->pc = 0x1C95D0u;
            goto label_1c95d0;
        }
    }
    ctx->pc = 0x1C95BCu;
label_1c95bc:
    // 0x1c95bc: 0x0  nop
    ctx->pc = 0x1c95bcu;
    // NOP
label_1c95c0:
    // 0x1c95c0: 0xc0604dc  jal         func_181370
label_1c95c4:
    if (ctx->pc == 0x1C95C4u) {
        ctx->pc = 0x1C95C4u;
            // 0x1c95c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C95C8u;
        goto label_1c95c8;
    }
    ctx->pc = 0x1C95C0u;
    SET_GPR_U32(ctx, 31, 0x1C95C8u);
    ctx->pc = 0x1C95C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95C0u;
            // 0x1c95c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C95C8u; }
        if (ctx->pc != 0x1C95C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C95C8u; }
        if (ctx->pc != 0x1C95C8u) { return; }
    }
    ctx->pc = 0x1C95C8u;
label_1c95c8:
    // 0x1c95c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c95cc:
    // 0x1c95cc: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1c95ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1c95d0:
    // 0x1c95d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c95d4:
    // 0x1c95d4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1c95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1c95d8:
    // 0x1c95d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c95d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c95dc:
    // 0x1c95dc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1c95dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1c95e0:
    // 0x1c95e0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c95e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1c95e4:
    // 0x1c95e4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1c95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1c95e8:
    // 0x1c95e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c95e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c95ec:
    // 0x1c95ec: 0x0  nop
    ctx->pc = 0x1c95ecu;
    // NOP
label_1c95f0:
    // 0x1c95f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c95f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c95f4:
    // 0x1c95f4: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c95f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1c95f8:
    // 0x1c95f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c95fc:
    // 0x1c95fc: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1c95fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1c9600:
    // 0x1c9600: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c9604:
    // 0x1c9604: 0x0  nop
    ctx->pc = 0x1c9604u;
    // NOP
label_1c9608:
    // 0x1c9608: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c9608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c960c:
    // 0x1c960c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1c960cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1c9610:
    // 0x1c9610: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c9610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1c9614:
    // 0x1c9614: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1c9614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1c9618:
    // 0x1c9618: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c961c:
    // 0x1c961c: 0x0  nop
    ctx->pc = 0x1c961cu;
    // NOP
label_1c9620:
    // 0x1c9620: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c9620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c9624:
    // 0x1c9624: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1c9624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1c9628:
    // 0x1c9628: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c9628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c962c:
    // 0x1c962c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1c962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1c9630:
    // 0x1c9630: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c9634:
    // 0x1c9634: 0x0  nop
    ctx->pc = 0x1c9634u;
    // NOP
label_1c9638:
    // 0x1c9638: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c9638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c963c:
    // 0x1c963c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1c963cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1c9640:
    // 0x1c9640: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c9640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c9644:
    // 0x1c9644: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c9644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c9648:
    // 0x1c9648: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1c9648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1c964c:
    // 0x1c964c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9650:
    // 0x1c9650: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1c9650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9654:
    // 0x1c9654: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9658:
    // 0x1c9658: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1c965c:
    if (ctx->pc == 0x1C965Cu) {
        ctx->pc = 0x1C965Cu;
            // 0x1c965c: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->pc = 0x1C9660u;
        goto label_1c9660;
    }
    ctx->pc = 0x1C9658u;
    {
        const bool branch_taken_0x1c9658 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C965Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9658u;
            // 0x1c965c: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9658) {
            ctx->pc = 0x1C9678u;
            goto label_1c9678;
        }
    }
    ctx->pc = 0x1C9660u;
label_1c9660:
    // 0x1c9660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9664:
    // 0x1c9664: 0x0  nop
    ctx->pc = 0x1c9664u;
    // NOP
label_1c9668:
    // 0x1c9668: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c9668u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c966c:
    // 0x1c966c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1c9670:
    if (ctx->pc == 0x1C9670u) {
        ctx->pc = 0x1C9674u;
        goto label_1c9674;
    }
    ctx->pc = 0x1C966Cu;
    {
        const bool branch_taken_0x1c966c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c966c) {
            ctx->pc = 0x1C9690u;
            goto label_1c9690;
        }
    }
    ctx->pc = 0x1C9674u;
label_1c9674:
    // 0x1c9674: 0x0  nop
    ctx->pc = 0x1c9674u;
    // NOP
label_1c9678:
    // 0x1c9678: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1c9678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1c967c:
    // 0x1c967c: 0x40f809  jalr        $v0
label_1c9680:
    if (ctx->pc == 0x1C9680u) {
        ctx->pc = 0x1C9680u;
            // 0x1c9680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9684u;
        goto label_1c9684;
    }
    ctx->pc = 0x1C967Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C9684u);
        ctx->pc = 0x1C9680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C967Cu;
            // 0x1c9680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8C80u: goto label_1c8c80;
            case 0x1C8C84u: goto label_1c8c84;
            case 0x1C8C88u: goto label_1c8c88;
            case 0x1C8C8Cu: goto label_1c8c8c;
            case 0x1C8C90u: goto label_1c8c90;
            case 0x1C8C94u: goto label_1c8c94;
            case 0x1C8C98u: goto label_1c8c98;
            case 0x1C8C9Cu: goto label_1c8c9c;
            case 0x1C8CA0u: goto label_1c8ca0;
            case 0x1C8CA4u: goto label_1c8ca4;
            case 0x1C8CA8u: goto label_1c8ca8;
            case 0x1C8CACu: goto label_1c8cac;
            case 0x1C8CB0u: goto label_1c8cb0;
            case 0x1C8CB4u: goto label_1c8cb4;
            case 0x1C8CB8u: goto label_1c8cb8;
            case 0x1C8CBCu: goto label_1c8cbc;
            case 0x1C8CC0u: goto label_1c8cc0;
            case 0x1C8CC4u: goto label_1c8cc4;
            case 0x1C8CC8u: goto label_1c8cc8;
            case 0x1C8CCCu: goto label_1c8ccc;
            case 0x1C8CD0u: goto label_1c8cd0;
            case 0x1C8CD4u: goto label_1c8cd4;
            case 0x1C8CD8u: goto label_1c8cd8;
            case 0x1C8CDCu: goto label_1c8cdc;
            case 0x1C8CE0u: goto label_1c8ce0;
            case 0x1C8CE4u: goto label_1c8ce4;
            case 0x1C8CE8u: goto label_1c8ce8;
            case 0x1C8CECu: goto label_1c8cec;
            case 0x1C8CF0u: goto label_1c8cf0;
            case 0x1C8CF4u: goto label_1c8cf4;
            case 0x1C8CF8u: goto label_1c8cf8;
            case 0x1C8CFCu: goto label_1c8cfc;
            case 0x1C8D00u: goto label_1c8d00;
            case 0x1C8D04u: goto label_1c8d04;
            case 0x1C8D08u: goto label_1c8d08;
            case 0x1C8D0Cu: goto label_1c8d0c;
            case 0x1C8D10u: goto label_1c8d10;
            case 0x1C8D14u: goto label_1c8d14;
            case 0x1C8D18u: goto label_1c8d18;
            case 0x1C8D1Cu: goto label_1c8d1c;
            case 0x1C8D20u: goto label_1c8d20;
            case 0x1C8D24u: goto label_1c8d24;
            case 0x1C8D28u: goto label_1c8d28;
            case 0x1C8D2Cu: goto label_1c8d2c;
            case 0x1C8D30u: goto label_1c8d30;
            case 0x1C8D34u: goto label_1c8d34;
            case 0x1C8D38u: goto label_1c8d38;
            case 0x1C8D3Cu: goto label_1c8d3c;
            case 0x1C8D40u: goto label_1c8d40;
            case 0x1C8D44u: goto label_1c8d44;
            case 0x1C8D48u: goto label_1c8d48;
            case 0x1C8D4Cu: goto label_1c8d4c;
            case 0x1C8D50u: goto label_1c8d50;
            case 0x1C8D54u: goto label_1c8d54;
            case 0x1C8D58u: goto label_1c8d58;
            case 0x1C8D5Cu: goto label_1c8d5c;
            case 0x1C8D60u: goto label_1c8d60;
            case 0x1C8D64u: goto label_1c8d64;
            case 0x1C8D68u: goto label_1c8d68;
            case 0x1C8D6Cu: goto label_1c8d6c;
            case 0x1C8D70u: goto label_1c8d70;
            case 0x1C8D74u: goto label_1c8d74;
            case 0x1C8D78u: goto label_1c8d78;
            case 0x1C8D7Cu: goto label_1c8d7c;
            case 0x1C8D80u: goto label_1c8d80;
            case 0x1C8D84u: goto label_1c8d84;
            case 0x1C8D88u: goto label_1c8d88;
            case 0x1C8D8Cu: goto label_1c8d8c;
            case 0x1C8D90u: goto label_1c8d90;
            case 0x1C8D94u: goto label_1c8d94;
            case 0x1C8D98u: goto label_1c8d98;
            case 0x1C8D9Cu: goto label_1c8d9c;
            case 0x1C8DA0u: goto label_1c8da0;
            case 0x1C8DA4u: goto label_1c8da4;
            case 0x1C8DA8u: goto label_1c8da8;
            case 0x1C8DACu: goto label_1c8dac;
            case 0x1C8DB0u: goto label_1c8db0;
            case 0x1C8DB4u: goto label_1c8db4;
            case 0x1C8DB8u: goto label_1c8db8;
            case 0x1C8DBCu: goto label_1c8dbc;
            case 0x1C8DC0u: goto label_1c8dc0;
            case 0x1C8DC4u: goto label_1c8dc4;
            case 0x1C8DC8u: goto label_1c8dc8;
            case 0x1C8DCCu: goto label_1c8dcc;
            case 0x1C8DD0u: goto label_1c8dd0;
            case 0x1C8DD4u: goto label_1c8dd4;
            case 0x1C8DD8u: goto label_1c8dd8;
            case 0x1C8DDCu: goto label_1c8ddc;
            case 0x1C8DE0u: goto label_1c8de0;
            case 0x1C8DE4u: goto label_1c8de4;
            case 0x1C8DE8u: goto label_1c8de8;
            case 0x1C8DECu: goto label_1c8dec;
            case 0x1C8DF0u: goto label_1c8df0;
            case 0x1C8DF4u: goto label_1c8df4;
            case 0x1C8DF8u: goto label_1c8df8;
            case 0x1C8DFCu: goto label_1c8dfc;
            case 0x1C8E00u: goto label_1c8e00;
            case 0x1C8E04u: goto label_1c8e04;
            case 0x1C8E08u: goto label_1c8e08;
            case 0x1C8E0Cu: goto label_1c8e0c;
            case 0x1C8E10u: goto label_1c8e10;
            case 0x1C8E14u: goto label_1c8e14;
            case 0x1C8E18u: goto label_1c8e18;
            case 0x1C8E1Cu: goto label_1c8e1c;
            case 0x1C8E20u: goto label_1c8e20;
            case 0x1C8E24u: goto label_1c8e24;
            case 0x1C8E28u: goto label_1c8e28;
            case 0x1C8E2Cu: goto label_1c8e2c;
            case 0x1C8E30u: goto label_1c8e30;
            case 0x1C8E34u: goto label_1c8e34;
            case 0x1C8E38u: goto label_1c8e38;
            case 0x1C8E3Cu: goto label_1c8e3c;
            case 0x1C8E40u: goto label_1c8e40;
            case 0x1C8E44u: goto label_1c8e44;
            case 0x1C8E48u: goto label_1c8e48;
            case 0x1C8E4Cu: goto label_1c8e4c;
            case 0x1C8E50u: goto label_1c8e50;
            case 0x1C8E54u: goto label_1c8e54;
            case 0x1C8E58u: goto label_1c8e58;
            case 0x1C8E5Cu: goto label_1c8e5c;
            case 0x1C8E60u: goto label_1c8e60;
            case 0x1C8E64u: goto label_1c8e64;
            case 0x1C8E68u: goto label_1c8e68;
            case 0x1C8E6Cu: goto label_1c8e6c;
            case 0x1C8E70u: goto label_1c8e70;
            case 0x1C8E74u: goto label_1c8e74;
            case 0x1C8E78u: goto label_1c8e78;
            case 0x1C8E7Cu: goto label_1c8e7c;
            case 0x1C8E80u: goto label_1c8e80;
            case 0x1C8E84u: goto label_1c8e84;
            case 0x1C8E88u: goto label_1c8e88;
            case 0x1C8E8Cu: goto label_1c8e8c;
            case 0x1C8E90u: goto label_1c8e90;
            case 0x1C8E94u: goto label_1c8e94;
            case 0x1C8E98u: goto label_1c8e98;
            case 0x1C8E9Cu: goto label_1c8e9c;
            case 0x1C8EA0u: goto label_1c8ea0;
            case 0x1C8EA4u: goto label_1c8ea4;
            case 0x1C8EA8u: goto label_1c8ea8;
            case 0x1C8EACu: goto label_1c8eac;
            case 0x1C8EB0u: goto label_1c8eb0;
            case 0x1C8EB4u: goto label_1c8eb4;
            case 0x1C8EB8u: goto label_1c8eb8;
            case 0x1C8EBCu: goto label_1c8ebc;
            case 0x1C8EC0u: goto label_1c8ec0;
            case 0x1C8EC4u: goto label_1c8ec4;
            case 0x1C8EC8u: goto label_1c8ec8;
            case 0x1C8ECCu: goto label_1c8ecc;
            case 0x1C8ED0u: goto label_1c8ed0;
            case 0x1C8ED4u: goto label_1c8ed4;
            case 0x1C8ED8u: goto label_1c8ed8;
            case 0x1C8EDCu: goto label_1c8edc;
            case 0x1C8EE0u: goto label_1c8ee0;
            case 0x1C8EE4u: goto label_1c8ee4;
            case 0x1C8EE8u: goto label_1c8ee8;
            case 0x1C8EECu: goto label_1c8eec;
            case 0x1C8EF0u: goto label_1c8ef0;
            case 0x1C8EF4u: goto label_1c8ef4;
            case 0x1C8EF8u: goto label_1c8ef8;
            case 0x1C8EFCu: goto label_1c8efc;
            case 0x1C8F00u: goto label_1c8f00;
            case 0x1C8F04u: goto label_1c8f04;
            case 0x1C8F08u: goto label_1c8f08;
            case 0x1C8F0Cu: goto label_1c8f0c;
            case 0x1C8F10u: goto label_1c8f10;
            case 0x1C8F14u: goto label_1c8f14;
            case 0x1C8F18u: goto label_1c8f18;
            case 0x1C8F1Cu: goto label_1c8f1c;
            case 0x1C8F20u: goto label_1c8f20;
            case 0x1C8F24u: goto label_1c8f24;
            case 0x1C8F28u: goto label_1c8f28;
            case 0x1C8F2Cu: goto label_1c8f2c;
            case 0x1C8F30u: goto label_1c8f30;
            case 0x1C8F34u: goto label_1c8f34;
            case 0x1C8F38u: goto label_1c8f38;
            case 0x1C8F3Cu: goto label_1c8f3c;
            case 0x1C8F40u: goto label_1c8f40;
            case 0x1C8F44u: goto label_1c8f44;
            case 0x1C8F48u: goto label_1c8f48;
            case 0x1C8F4Cu: goto label_1c8f4c;
            case 0x1C8F50u: goto label_1c8f50;
            case 0x1C8F54u: goto label_1c8f54;
            case 0x1C8F58u: goto label_1c8f58;
            case 0x1C8F5Cu: goto label_1c8f5c;
            case 0x1C8F60u: goto label_1c8f60;
            case 0x1C8F64u: goto label_1c8f64;
            case 0x1C8F68u: goto label_1c8f68;
            case 0x1C8F6Cu: goto label_1c8f6c;
            case 0x1C8F70u: goto label_1c8f70;
            case 0x1C8F74u: goto label_1c8f74;
            case 0x1C8F78u: goto label_1c8f78;
            case 0x1C8F7Cu: goto label_1c8f7c;
            case 0x1C8F80u: goto label_1c8f80;
            case 0x1C8F84u: goto label_1c8f84;
            case 0x1C8F88u: goto label_1c8f88;
            case 0x1C8F8Cu: goto label_1c8f8c;
            case 0x1C8F90u: goto label_1c8f90;
            case 0x1C8F94u: goto label_1c8f94;
            case 0x1C8F98u: goto label_1c8f98;
            case 0x1C8F9Cu: goto label_1c8f9c;
            case 0x1C8FA0u: goto label_1c8fa0;
            case 0x1C8FA4u: goto label_1c8fa4;
            case 0x1C8FA8u: goto label_1c8fa8;
            case 0x1C8FACu: goto label_1c8fac;
            case 0x1C8FB0u: goto label_1c8fb0;
            case 0x1C8FB4u: goto label_1c8fb4;
            case 0x1C8FB8u: goto label_1c8fb8;
            case 0x1C8FBCu: goto label_1c8fbc;
            case 0x1C8FC0u: goto label_1c8fc0;
            case 0x1C8FC4u: goto label_1c8fc4;
            case 0x1C8FC8u: goto label_1c8fc8;
            case 0x1C8FCCu: goto label_1c8fcc;
            case 0x1C8FD0u: goto label_1c8fd0;
            case 0x1C8FD4u: goto label_1c8fd4;
            case 0x1C8FD8u: goto label_1c8fd8;
            case 0x1C8FDCu: goto label_1c8fdc;
            case 0x1C8FE0u: goto label_1c8fe0;
            case 0x1C8FE4u: goto label_1c8fe4;
            case 0x1C8FE8u: goto label_1c8fe8;
            case 0x1C8FECu: goto label_1c8fec;
            case 0x1C8FF0u: goto label_1c8ff0;
            case 0x1C8FF4u: goto label_1c8ff4;
            case 0x1C8FF8u: goto label_1c8ff8;
            case 0x1C8FFCu: goto label_1c8ffc;
            case 0x1C9000u: goto label_1c9000;
            case 0x1C9004u: goto label_1c9004;
            case 0x1C9008u: goto label_1c9008;
            case 0x1C900Cu: goto label_1c900c;
            case 0x1C9010u: goto label_1c9010;
            case 0x1C9014u: goto label_1c9014;
            case 0x1C9018u: goto label_1c9018;
            case 0x1C901Cu: goto label_1c901c;
            case 0x1C9020u: goto label_1c9020;
            case 0x1C9024u: goto label_1c9024;
            case 0x1C9028u: goto label_1c9028;
            case 0x1C902Cu: goto label_1c902c;
            case 0x1C9030u: goto label_1c9030;
            case 0x1C9034u: goto label_1c9034;
            case 0x1C9038u: goto label_1c9038;
            case 0x1C903Cu: goto label_1c903c;
            case 0x1C9040u: goto label_1c9040;
            case 0x1C9044u: goto label_1c9044;
            case 0x1C9048u: goto label_1c9048;
            case 0x1C904Cu: goto label_1c904c;
            case 0x1C9050u: goto label_1c9050;
            case 0x1C9054u: goto label_1c9054;
            case 0x1C9058u: goto label_1c9058;
            case 0x1C905Cu: goto label_1c905c;
            case 0x1C9060u: goto label_1c9060;
            case 0x1C9064u: goto label_1c9064;
            case 0x1C9068u: goto label_1c9068;
            case 0x1C906Cu: goto label_1c906c;
            case 0x1C9070u: goto label_1c9070;
            case 0x1C9074u: goto label_1c9074;
            case 0x1C9078u: goto label_1c9078;
            case 0x1C907Cu: goto label_1c907c;
            case 0x1C9080u: goto label_1c9080;
            case 0x1C9084u: goto label_1c9084;
            case 0x1C9088u: goto label_1c9088;
            case 0x1C908Cu: goto label_1c908c;
            case 0x1C9090u: goto label_1c9090;
            case 0x1C9094u: goto label_1c9094;
            case 0x1C9098u: goto label_1c9098;
            case 0x1C909Cu: goto label_1c909c;
            case 0x1C90A0u: goto label_1c90a0;
            case 0x1C90A4u: goto label_1c90a4;
            case 0x1C90A8u: goto label_1c90a8;
            case 0x1C90ACu: goto label_1c90ac;
            case 0x1C90B0u: goto label_1c90b0;
            case 0x1C90B4u: goto label_1c90b4;
            case 0x1C90B8u: goto label_1c90b8;
            case 0x1C90BCu: goto label_1c90bc;
            case 0x1C90C0u: goto label_1c90c0;
            case 0x1C90C4u: goto label_1c90c4;
            case 0x1C90C8u: goto label_1c90c8;
            case 0x1C90CCu: goto label_1c90cc;
            case 0x1C90D0u: goto label_1c90d0;
            case 0x1C90D4u: goto label_1c90d4;
            case 0x1C90D8u: goto label_1c90d8;
            case 0x1C90DCu: goto label_1c90dc;
            case 0x1C90E0u: goto label_1c90e0;
            case 0x1C90E4u: goto label_1c90e4;
            case 0x1C90E8u: goto label_1c90e8;
            case 0x1C90ECu: goto label_1c90ec;
            case 0x1C90F0u: goto label_1c90f0;
            case 0x1C90F4u: goto label_1c90f4;
            case 0x1C90F8u: goto label_1c90f8;
            case 0x1C90FCu: goto label_1c90fc;
            case 0x1C9100u: goto label_1c9100;
            case 0x1C9104u: goto label_1c9104;
            case 0x1C9108u: goto label_1c9108;
            case 0x1C910Cu: goto label_1c910c;
            case 0x1C9110u: goto label_1c9110;
            case 0x1C9114u: goto label_1c9114;
            case 0x1C9118u: goto label_1c9118;
            case 0x1C911Cu: goto label_1c911c;
            case 0x1C9120u: goto label_1c9120;
            case 0x1C9124u: goto label_1c9124;
            case 0x1C9128u: goto label_1c9128;
            case 0x1C912Cu: goto label_1c912c;
            case 0x1C9130u: goto label_1c9130;
            case 0x1C9134u: goto label_1c9134;
            case 0x1C9138u: goto label_1c9138;
            case 0x1C913Cu: goto label_1c913c;
            case 0x1C9140u: goto label_1c9140;
            case 0x1C9144u: goto label_1c9144;
            case 0x1C9148u: goto label_1c9148;
            case 0x1C914Cu: goto label_1c914c;
            case 0x1C9150u: goto label_1c9150;
            case 0x1C9154u: goto label_1c9154;
            case 0x1C9158u: goto label_1c9158;
            case 0x1C915Cu: goto label_1c915c;
            case 0x1C9160u: goto label_1c9160;
            case 0x1C9164u: goto label_1c9164;
            case 0x1C9168u: goto label_1c9168;
            case 0x1C916Cu: goto label_1c916c;
            case 0x1C9170u: goto label_1c9170;
            case 0x1C9174u: goto label_1c9174;
            case 0x1C9178u: goto label_1c9178;
            case 0x1C917Cu: goto label_1c917c;
            case 0x1C9180u: goto label_1c9180;
            case 0x1C9184u: goto label_1c9184;
            case 0x1C9188u: goto label_1c9188;
            case 0x1C918Cu: goto label_1c918c;
            case 0x1C9190u: goto label_1c9190;
            case 0x1C9194u: goto label_1c9194;
            case 0x1C9198u: goto label_1c9198;
            case 0x1C919Cu: goto label_1c919c;
            case 0x1C91A0u: goto label_1c91a0;
            case 0x1C91A4u: goto label_1c91a4;
            case 0x1C91A8u: goto label_1c91a8;
            case 0x1C91ACu: goto label_1c91ac;
            case 0x1C91B0u: goto label_1c91b0;
            case 0x1C91B4u: goto label_1c91b4;
            case 0x1C91B8u: goto label_1c91b8;
            case 0x1C91BCu: goto label_1c91bc;
            case 0x1C91C0u: goto label_1c91c0;
            case 0x1C91C4u: goto label_1c91c4;
            case 0x1C91C8u: goto label_1c91c8;
            case 0x1C91CCu: goto label_1c91cc;
            case 0x1C91D0u: goto label_1c91d0;
            case 0x1C91D4u: goto label_1c91d4;
            case 0x1C91D8u: goto label_1c91d8;
            case 0x1C91DCu: goto label_1c91dc;
            case 0x1C91E0u: goto label_1c91e0;
            case 0x1C91E4u: goto label_1c91e4;
            case 0x1C91E8u: goto label_1c91e8;
            case 0x1C91ECu: goto label_1c91ec;
            case 0x1C91F0u: goto label_1c91f0;
            case 0x1C91F4u: goto label_1c91f4;
            case 0x1C91F8u: goto label_1c91f8;
            case 0x1C91FCu: goto label_1c91fc;
            case 0x1C9200u: goto label_1c9200;
            case 0x1C9204u: goto label_1c9204;
            case 0x1C9208u: goto label_1c9208;
            case 0x1C920Cu: goto label_1c920c;
            case 0x1C9210u: goto label_1c9210;
            case 0x1C9214u: goto label_1c9214;
            case 0x1C9218u: goto label_1c9218;
            case 0x1C921Cu: goto label_1c921c;
            case 0x1C9220u: goto label_1c9220;
            case 0x1C9224u: goto label_1c9224;
            case 0x1C9228u: goto label_1c9228;
            case 0x1C922Cu: goto label_1c922c;
            case 0x1C9230u: goto label_1c9230;
            case 0x1C9234u: goto label_1c9234;
            case 0x1C9238u: goto label_1c9238;
            case 0x1C923Cu: goto label_1c923c;
            case 0x1C9240u: goto label_1c9240;
            case 0x1C9244u: goto label_1c9244;
            case 0x1C9248u: goto label_1c9248;
            case 0x1C924Cu: goto label_1c924c;
            case 0x1C9250u: goto label_1c9250;
            case 0x1C9254u: goto label_1c9254;
            case 0x1C9258u: goto label_1c9258;
            case 0x1C925Cu: goto label_1c925c;
            case 0x1C9260u: goto label_1c9260;
            case 0x1C9264u: goto label_1c9264;
            case 0x1C9268u: goto label_1c9268;
            case 0x1C926Cu: goto label_1c926c;
            case 0x1C9270u: goto label_1c9270;
            case 0x1C9274u: goto label_1c9274;
            case 0x1C9278u: goto label_1c9278;
            case 0x1C927Cu: goto label_1c927c;
            case 0x1C9280u: goto label_1c9280;
            case 0x1C9284u: goto label_1c9284;
            case 0x1C9288u: goto label_1c9288;
            case 0x1C928Cu: goto label_1c928c;
            case 0x1C9290u: goto label_1c9290;
            case 0x1C9294u: goto label_1c9294;
            case 0x1C9298u: goto label_1c9298;
            case 0x1C929Cu: goto label_1c929c;
            case 0x1C92A0u: goto label_1c92a0;
            case 0x1C92A4u: goto label_1c92a4;
            case 0x1C92A8u: goto label_1c92a8;
            case 0x1C92ACu: goto label_1c92ac;
            case 0x1C92B0u: goto label_1c92b0;
            case 0x1C92B4u: goto label_1c92b4;
            case 0x1C92B8u: goto label_1c92b8;
            case 0x1C92BCu: goto label_1c92bc;
            case 0x1C92C0u: goto label_1c92c0;
            case 0x1C92C4u: goto label_1c92c4;
            case 0x1C92C8u: goto label_1c92c8;
            case 0x1C92CCu: goto label_1c92cc;
            case 0x1C92D0u: goto label_1c92d0;
            case 0x1C92D4u: goto label_1c92d4;
            case 0x1C92D8u: goto label_1c92d8;
            case 0x1C92DCu: goto label_1c92dc;
            case 0x1C92E0u: goto label_1c92e0;
            case 0x1C92E4u: goto label_1c92e4;
            case 0x1C92E8u: goto label_1c92e8;
            case 0x1C92ECu: goto label_1c92ec;
            case 0x1C92F0u: goto label_1c92f0;
            case 0x1C92F4u: goto label_1c92f4;
            case 0x1C92F8u: goto label_1c92f8;
            case 0x1C92FCu: goto label_1c92fc;
            case 0x1C9300u: goto label_1c9300;
            case 0x1C9304u: goto label_1c9304;
            case 0x1C9308u: goto label_1c9308;
            case 0x1C930Cu: goto label_1c930c;
            case 0x1C9310u: goto label_1c9310;
            case 0x1C9314u: goto label_1c9314;
            case 0x1C9318u: goto label_1c9318;
            case 0x1C931Cu: goto label_1c931c;
            case 0x1C9320u: goto label_1c9320;
            case 0x1C9324u: goto label_1c9324;
            case 0x1C9328u: goto label_1c9328;
            case 0x1C932Cu: goto label_1c932c;
            case 0x1C9330u: goto label_1c9330;
            case 0x1C9334u: goto label_1c9334;
            case 0x1C9338u: goto label_1c9338;
            case 0x1C933Cu: goto label_1c933c;
            case 0x1C9340u: goto label_1c9340;
            case 0x1C9344u: goto label_1c9344;
            case 0x1C9348u: goto label_1c9348;
            case 0x1C934Cu: goto label_1c934c;
            case 0x1C9350u: goto label_1c9350;
            case 0x1C9354u: goto label_1c9354;
            case 0x1C9358u: goto label_1c9358;
            case 0x1C935Cu: goto label_1c935c;
            case 0x1C9360u: goto label_1c9360;
            case 0x1C9364u: goto label_1c9364;
            case 0x1C9368u: goto label_1c9368;
            case 0x1C936Cu: goto label_1c936c;
            case 0x1C9370u: goto label_1c9370;
            case 0x1C9374u: goto label_1c9374;
            case 0x1C9378u: goto label_1c9378;
            case 0x1C937Cu: goto label_1c937c;
            case 0x1C9380u: goto label_1c9380;
            case 0x1C9384u: goto label_1c9384;
            case 0x1C9388u: goto label_1c9388;
            case 0x1C938Cu: goto label_1c938c;
            case 0x1C9390u: goto label_1c9390;
            case 0x1C9394u: goto label_1c9394;
            case 0x1C9398u: goto label_1c9398;
            case 0x1C939Cu: goto label_1c939c;
            case 0x1C93A0u: goto label_1c93a0;
            case 0x1C93A4u: goto label_1c93a4;
            case 0x1C93A8u: goto label_1c93a8;
            case 0x1C93ACu: goto label_1c93ac;
            case 0x1C93B0u: goto label_1c93b0;
            case 0x1C93B4u: goto label_1c93b4;
            case 0x1C93B8u: goto label_1c93b8;
            case 0x1C93BCu: goto label_1c93bc;
            case 0x1C93C0u: goto label_1c93c0;
            case 0x1C93C4u: goto label_1c93c4;
            case 0x1C93C8u: goto label_1c93c8;
            case 0x1C93CCu: goto label_1c93cc;
            case 0x1C93D0u: goto label_1c93d0;
            case 0x1C93D4u: goto label_1c93d4;
            case 0x1C93D8u: goto label_1c93d8;
            case 0x1C93DCu: goto label_1c93dc;
            case 0x1C93E0u: goto label_1c93e0;
            case 0x1C93E4u: goto label_1c93e4;
            case 0x1C93E8u: goto label_1c93e8;
            case 0x1C93ECu: goto label_1c93ec;
            case 0x1C93F0u: goto label_1c93f0;
            case 0x1C93F4u: goto label_1c93f4;
            case 0x1C93F8u: goto label_1c93f8;
            case 0x1C93FCu: goto label_1c93fc;
            case 0x1C9400u: goto label_1c9400;
            case 0x1C9404u: goto label_1c9404;
            case 0x1C9408u: goto label_1c9408;
            case 0x1C940Cu: goto label_1c940c;
            case 0x1C9410u: goto label_1c9410;
            case 0x1C9414u: goto label_1c9414;
            case 0x1C9418u: goto label_1c9418;
            case 0x1C941Cu: goto label_1c941c;
            case 0x1C9420u: goto label_1c9420;
            case 0x1C9424u: goto label_1c9424;
            case 0x1C9428u: goto label_1c9428;
            case 0x1C942Cu: goto label_1c942c;
            case 0x1C9430u: goto label_1c9430;
            case 0x1C9434u: goto label_1c9434;
            case 0x1C9438u: goto label_1c9438;
            case 0x1C943Cu: goto label_1c943c;
            case 0x1C9440u: goto label_1c9440;
            case 0x1C9444u: goto label_1c9444;
            case 0x1C9448u: goto label_1c9448;
            case 0x1C944Cu: goto label_1c944c;
            case 0x1C9450u: goto label_1c9450;
            case 0x1C9454u: goto label_1c9454;
            case 0x1C9458u: goto label_1c9458;
            case 0x1C945Cu: goto label_1c945c;
            case 0x1C9460u: goto label_1c9460;
            case 0x1C9464u: goto label_1c9464;
            case 0x1C9468u: goto label_1c9468;
            case 0x1C946Cu: goto label_1c946c;
            case 0x1C9470u: goto label_1c9470;
            case 0x1C9474u: goto label_1c9474;
            case 0x1C9478u: goto label_1c9478;
            case 0x1C947Cu: goto label_1c947c;
            case 0x1C9480u: goto label_1c9480;
            case 0x1C9484u: goto label_1c9484;
            case 0x1C9488u: goto label_1c9488;
            case 0x1C948Cu: goto label_1c948c;
            case 0x1C9490u: goto label_1c9490;
            case 0x1C9494u: goto label_1c9494;
            case 0x1C9498u: goto label_1c9498;
            case 0x1C949Cu: goto label_1c949c;
            case 0x1C94A0u: goto label_1c94a0;
            case 0x1C94A4u: goto label_1c94a4;
            case 0x1C94A8u: goto label_1c94a8;
            case 0x1C94ACu: goto label_1c94ac;
            case 0x1C94B0u: goto label_1c94b0;
            case 0x1C94B4u: goto label_1c94b4;
            case 0x1C94B8u: goto label_1c94b8;
            case 0x1C94BCu: goto label_1c94bc;
            case 0x1C94C0u: goto label_1c94c0;
            case 0x1C94C4u: goto label_1c94c4;
            case 0x1C94C8u: goto label_1c94c8;
            case 0x1C94CCu: goto label_1c94cc;
            case 0x1C94D0u: goto label_1c94d0;
            case 0x1C94D4u: goto label_1c94d4;
            case 0x1C94D8u: goto label_1c94d8;
            case 0x1C94DCu: goto label_1c94dc;
            case 0x1C94E0u: goto label_1c94e0;
            case 0x1C94E4u: goto label_1c94e4;
            case 0x1C94E8u: goto label_1c94e8;
            case 0x1C94ECu: goto label_1c94ec;
            case 0x1C94F0u: goto label_1c94f0;
            case 0x1C94F4u: goto label_1c94f4;
            case 0x1C94F8u: goto label_1c94f8;
            case 0x1C94FCu: goto label_1c94fc;
            case 0x1C9500u: goto label_1c9500;
            case 0x1C9504u: goto label_1c9504;
            case 0x1C9508u: goto label_1c9508;
            case 0x1C950Cu: goto label_1c950c;
            case 0x1C9510u: goto label_1c9510;
            case 0x1C9514u: goto label_1c9514;
            case 0x1C9518u: goto label_1c9518;
            case 0x1C951Cu: goto label_1c951c;
            case 0x1C9520u: goto label_1c9520;
            case 0x1C9524u: goto label_1c9524;
            case 0x1C9528u: goto label_1c9528;
            case 0x1C952Cu: goto label_1c952c;
            case 0x1C9530u: goto label_1c9530;
            case 0x1C9534u: goto label_1c9534;
            case 0x1C9538u: goto label_1c9538;
            case 0x1C953Cu: goto label_1c953c;
            case 0x1C9540u: goto label_1c9540;
            case 0x1C9544u: goto label_1c9544;
            case 0x1C9548u: goto label_1c9548;
            case 0x1C954Cu: goto label_1c954c;
            case 0x1C9550u: goto label_1c9550;
            case 0x1C9554u: goto label_1c9554;
            case 0x1C9558u: goto label_1c9558;
            case 0x1C955Cu: goto label_1c955c;
            case 0x1C9560u: goto label_1c9560;
            case 0x1C9564u: goto label_1c9564;
            case 0x1C9568u: goto label_1c9568;
            case 0x1C956Cu: goto label_1c956c;
            case 0x1C9570u: goto label_1c9570;
            case 0x1C9574u: goto label_1c9574;
            case 0x1C9578u: goto label_1c9578;
            case 0x1C957Cu: goto label_1c957c;
            case 0x1C9580u: goto label_1c9580;
            case 0x1C9584u: goto label_1c9584;
            case 0x1C9588u: goto label_1c9588;
            case 0x1C958Cu: goto label_1c958c;
            case 0x1C9590u: goto label_1c9590;
            case 0x1C9594u: goto label_1c9594;
            case 0x1C9598u: goto label_1c9598;
            case 0x1C959Cu: goto label_1c959c;
            case 0x1C95A0u: goto label_1c95a0;
            case 0x1C95A4u: goto label_1c95a4;
            case 0x1C95A8u: goto label_1c95a8;
            case 0x1C95ACu: goto label_1c95ac;
            case 0x1C95B0u: goto label_1c95b0;
            case 0x1C95B4u: goto label_1c95b4;
            case 0x1C95B8u: goto label_1c95b8;
            case 0x1C95BCu: goto label_1c95bc;
            case 0x1C95C0u: goto label_1c95c0;
            case 0x1C95C4u: goto label_1c95c4;
            case 0x1C95C8u: goto label_1c95c8;
            case 0x1C95CCu: goto label_1c95cc;
            case 0x1C95D0u: goto label_1c95d0;
            case 0x1C95D4u: goto label_1c95d4;
            case 0x1C95D8u: goto label_1c95d8;
            case 0x1C95DCu: goto label_1c95dc;
            case 0x1C95E0u: goto label_1c95e0;
            case 0x1C95E4u: goto label_1c95e4;
            case 0x1C95E8u: goto label_1c95e8;
            case 0x1C95ECu: goto label_1c95ec;
            case 0x1C95F0u: goto label_1c95f0;
            case 0x1C95F4u: goto label_1c95f4;
            case 0x1C95F8u: goto label_1c95f8;
            case 0x1C95FCu: goto label_1c95fc;
            case 0x1C9600u: goto label_1c9600;
            case 0x1C9604u: goto label_1c9604;
            case 0x1C9608u: goto label_1c9608;
            case 0x1C960Cu: goto label_1c960c;
            case 0x1C9610u: goto label_1c9610;
            case 0x1C9614u: goto label_1c9614;
            case 0x1C9618u: goto label_1c9618;
            case 0x1C961Cu: goto label_1c961c;
            case 0x1C9620u: goto label_1c9620;
            case 0x1C9624u: goto label_1c9624;
            case 0x1C9628u: goto label_1c9628;
            case 0x1C962Cu: goto label_1c962c;
            case 0x1C9630u: goto label_1c9630;
            case 0x1C9634u: goto label_1c9634;
            case 0x1C9638u: goto label_1c9638;
            case 0x1C963Cu: goto label_1c963c;
            case 0x1C9640u: goto label_1c9640;
            case 0x1C9644u: goto label_1c9644;
            case 0x1C9648u: goto label_1c9648;
            case 0x1C964Cu: goto label_1c964c;
            case 0x1C9650u: goto label_1c9650;
            case 0x1C9654u: goto label_1c9654;
            case 0x1C9658u: goto label_1c9658;
            case 0x1C965Cu: goto label_1c965c;
            case 0x1C9660u: goto label_1c9660;
            case 0x1C9664u: goto label_1c9664;
            case 0x1C9668u: goto label_1c9668;
            case 0x1C966Cu: goto label_1c966c;
            case 0x1C9670u: goto label_1c9670;
            case 0x1C9674u: goto label_1c9674;
            case 0x1C9678u: goto label_1c9678;
            case 0x1C967Cu: goto label_1c967c;
            case 0x1C9680u: goto label_1c9680;
            case 0x1C9684u: goto label_1c9684;
            case 0x1C9688u: goto label_1c9688;
            case 0x1C968Cu: goto label_1c968c;
            case 0x1C9690u: goto label_1c9690;
            case 0x1C9694u: goto label_1c9694;
            case 0x1C9698u: goto label_1c9698;
            case 0x1C969Cu: goto label_1c969c;
            case 0x1C96A0u: goto label_1c96a0;
            case 0x1C96A4u: goto label_1c96a4;
            case 0x1C96A8u: goto label_1c96a8;
            case 0x1C96ACu: goto label_1c96ac;
            case 0x1C96B0u: goto label_1c96b0;
            case 0x1C96B4u: goto label_1c96b4;
            case 0x1C96B8u: goto label_1c96b8;
            case 0x1C96BCu: goto label_1c96bc;
            case 0x1C96C0u: goto label_1c96c0;
            case 0x1C96C4u: goto label_1c96c4;
            case 0x1C96C8u: goto label_1c96c8;
            case 0x1C96CCu: goto label_1c96cc;
            case 0x1C96D0u: goto label_1c96d0;
            case 0x1C96D4u: goto label_1c96d4;
            case 0x1C96D8u: goto label_1c96d8;
            case 0x1C96DCu: goto label_1c96dc;
            case 0x1C96E0u: goto label_1c96e0;
            case 0x1C96E4u: goto label_1c96e4;
            case 0x1C96E8u: goto label_1c96e8;
            case 0x1C96ECu: goto label_1c96ec;
            case 0x1C96F0u: goto label_1c96f0;
            case 0x1C96F4u: goto label_1c96f4;
            case 0x1C96F8u: goto label_1c96f8;
            case 0x1C96FCu: goto label_1c96fc;
            case 0x1C9700u: goto label_1c9700;
            case 0x1C9704u: goto label_1c9704;
            case 0x1C9708u: goto label_1c9708;
            case 0x1C970Cu: goto label_1c970c;
            case 0x1C9710u: goto label_1c9710;
            case 0x1C9714u: goto label_1c9714;
            case 0x1C9718u: goto label_1c9718;
            case 0x1C971Cu: goto label_1c971c;
            case 0x1C9720u: goto label_1c9720;
            case 0x1C9724u: goto label_1c9724;
            case 0x1C9728u: goto label_1c9728;
            case 0x1C972Cu: goto label_1c972c;
            case 0x1C9730u: goto label_1c9730;
            case 0x1C9734u: goto label_1c9734;
            case 0x1C9738u: goto label_1c9738;
            case 0x1C973Cu: goto label_1c973c;
            case 0x1C9740u: goto label_1c9740;
            case 0x1C9744u: goto label_1c9744;
            case 0x1C9748u: goto label_1c9748;
            case 0x1C974Cu: goto label_1c974c;
            case 0x1C9750u: goto label_1c9750;
            case 0x1C9754u: goto label_1c9754;
            case 0x1C9758u: goto label_1c9758;
            case 0x1C975Cu: goto label_1c975c;
            case 0x1C9760u: goto label_1c9760;
            case 0x1C9764u: goto label_1c9764;
            case 0x1C9768u: goto label_1c9768;
            case 0x1C976Cu: goto label_1c976c;
            case 0x1C9770u: goto label_1c9770;
            case 0x1C9774u: goto label_1c9774;
            case 0x1C9778u: goto label_1c9778;
            case 0x1C977Cu: goto label_1c977c;
            case 0x1C9780u: goto label_1c9780;
            case 0x1C9784u: goto label_1c9784;
            case 0x1C9788u: goto label_1c9788;
            case 0x1C978Cu: goto label_1c978c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C9684u; }
            if (ctx->pc != 0x1C9684u) { return; }
        }
    }
    ctx->pc = 0x1C9684u;
label_1c9684:
    // 0x1c9684: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1c9688:
    if (ctx->pc == 0x1C9688u) {
        ctx->pc = 0x1C968Cu;
        goto label_1c968c;
    }
    ctx->pc = 0x1C9684u;
    {
        const bool branch_taken_0x1c9684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9684) {
            ctx->pc = 0x1C9780u;
            goto label_1c9780;
        }
    }
    ctx->pc = 0x1C968Cu;
label_1c968c:
    // 0x1c968c: 0x0  nop
    ctx->pc = 0x1c968cu;
    // NOP
label_1c9690:
    // 0x1c9690: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c9690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c9694:
    // 0x1c9694: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1c9698:
    if (ctx->pc == 0x1C9698u) {
        ctx->pc = 0x1C969Cu;
        goto label_1c969c;
    }
    ctx->pc = 0x1C9694u;
    {
        const bool branch_taken_0x1c9694 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1c9694) {
            ctx->pc = 0x1C9760u;
            goto label_1c9760;
        }
    }
    ctx->pc = 0x1C969Cu;
label_1c969c:
    // 0x1c969c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c96a0:
    // 0x1c96a0: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1c96a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1c96a4:
    // 0x1c96a4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c96a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c96a8:
    // 0x1c96a8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c96a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1c96ac:
    // 0x1c96ac: 0xc05d080  jal         func_174200
label_1c96b0:
    if (ctx->pc == 0x1C96B0u) {
        ctx->pc = 0x1C96B0u;
            // 0x1c96b0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1C96B4u;
        goto label_1c96b4;
    }
    ctx->pc = 0x1C96ACu;
    SET_GPR_U32(ctx, 31, 0x1C96B4u);
    ctx->pc = 0x1C96B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96ACu;
            // 0x1c96b0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96B4u; }
        if (ctx->pc != 0x1C96B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96B4u; }
        if (ctx->pc != 0x1C96B4u) { return; }
    }
    ctx->pc = 0x1C96B4u;
label_1c96b4:
    // 0x1c96b4: 0xc050bb4  jal         func_142ED0
label_1c96b8:
    if (ctx->pc == 0x1C96B8u) {
        ctx->pc = 0x1C96BCu;
        goto label_1c96bc;
    }
    ctx->pc = 0x1C96B4u;
    SET_GPR_U32(ctx, 31, 0x1C96BCu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96BCu; }
        if (ctx->pc != 0x1C96BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96BCu; }
        if (ctx->pc != 0x1C96BCu) { return; }
    }
    ctx->pc = 0x1C96BCu;
label_1c96bc:
    // 0x1c96bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c96bcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1c96c0:
    // 0x1c96c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c96c4:
    if (ctx->pc == 0x1C96C4u) {
        ctx->pc = 0x1C96C8u;
        goto label_1c96c8;
    }
    ctx->pc = 0x1C96C0u;
    {
        const bool branch_taken_0x1c96c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96c0) {
            ctx->pc = 0x1C96E0u;
            goto label_1c96e0;
        }
    }
    ctx->pc = 0x1C96C8u;
label_1c96c8:
    // 0x1c96c8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c96c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c96cc:
    // 0x1c96cc: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1c96ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1c96d0:
    // 0x1c96d0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c96d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c96d4:
    // 0x1c96d4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c96d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1c96d8:
    // 0x1c96d8: 0xc05d080  jal         func_174200
label_1c96dc:
    if (ctx->pc == 0x1C96DCu) {
        ctx->pc = 0x1C96DCu;
            // 0x1c96dc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1C96E0u;
        goto label_1c96e0;
    }
    ctx->pc = 0x1C96D8u;
    SET_GPR_U32(ctx, 31, 0x1C96E0u);
    ctx->pc = 0x1C96DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96D8u;
            // 0x1c96dc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96E0u; }
        if (ctx->pc != 0x1C96E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96E0u; }
        if (ctx->pc != 0x1C96E0u) { return; }
    }
    ctx->pc = 0x1C96E0u;
label_1c96e0:
    // 0x1c96e0: 0xc050bb4  jal         func_142ED0
label_1c96e4:
    if (ctx->pc == 0x1C96E4u) {
        ctx->pc = 0x1C96E8u;
        goto label_1c96e8;
    }
    ctx->pc = 0x1C96E0u;
    SET_GPR_U32(ctx, 31, 0x1C96E8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96E8u; }
        if (ctx->pc != 0x1C96E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96E8u; }
        if (ctx->pc != 0x1C96E8u) { return; }
    }
    ctx->pc = 0x1C96E8u;
label_1c96e8:
    // 0x1c96e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c96e8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1c96ec:
    // 0x1c96ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c96f0:
    if (ctx->pc == 0x1C96F0u) {
        ctx->pc = 0x1C96F4u;
        goto label_1c96f4;
    }
    ctx->pc = 0x1C96ECu;
    {
        const bool branch_taken_0x1c96ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96ec) {
            ctx->pc = 0x1C9710u;
            goto label_1c9710;
        }
    }
    ctx->pc = 0x1C96F4u;
label_1c96f4:
    // 0x1c96f4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c96f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c96f8:
    // 0x1c96f8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1c96f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1c96fc:
    // 0x1c96fc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c96fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9700:
    // 0x1c9700: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c9700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1c9704:
    // 0x1c9704: 0xc05d080  jal         func_174200
label_1c9708:
    if (ctx->pc == 0x1C9708u) {
        ctx->pc = 0x1C9708u;
            // 0x1c9708: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1C970Cu;
        goto label_1c970c;
    }
    ctx->pc = 0x1C9704u;
    SET_GPR_U32(ctx, 31, 0x1C970Cu);
    ctx->pc = 0x1C9708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9704u;
            // 0x1c9708: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C970Cu; }
        if (ctx->pc != 0x1C970Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C970Cu; }
        if (ctx->pc != 0x1C970Cu) { return; }
    }
    ctx->pc = 0x1C970Cu;
label_1c970c:
    // 0x1c970c: 0x0  nop
    ctx->pc = 0x1c970cu;
    // NOP
label_1c9710:
    // 0x1c9710: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c9710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1c9714:
    // 0x1c9714: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1c9714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9718:
    // 0x1c9718: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c9718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c971c:
    // 0x1c971c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c971cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9720:
    // 0x1c9720: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1c9720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1c9724:
    // 0x1c9724: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c9724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c9728:
    // 0x1c9728: 0x0  nop
    ctx->pc = 0x1c9728u;
    // NOP
label_1c972c:
    // 0x1c972c: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1c972cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1c9730:
    // 0x1c9730: 0xc053740  jal         func_14DD00
label_1c9734:
    if (ctx->pc == 0x1C9734u) {
        ctx->pc = 0x1C9734u;
            // 0x1c9734: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1C9738u;
        goto label_1c9738;
    }
    ctx->pc = 0x1C9730u;
    SET_GPR_U32(ctx, 31, 0x1C9738u);
    ctx->pc = 0x1C9734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9730u;
            // 0x1c9734: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9738u; }
        if (ctx->pc != 0x1C9738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9738u; }
        if (ctx->pc != 0x1C9738u) { return; }
    }
    ctx->pc = 0x1C9738u;
label_1c9738:
    // 0x1c9738: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1c9738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c973c:
    // 0x1c973c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1c973cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1c9740:
    // 0x1c9740: 0xc07b0fc  jal         func_1EC3F0
label_1c9744:
    if (ctx->pc == 0x1C9744u) {
        ctx->pc = 0x1C9744u;
            // 0x1c9744: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C9748u;
        goto label_1c9748;
    }
    ctx->pc = 0x1C9740u;
    SET_GPR_U32(ctx, 31, 0x1C9748u);
    ctx->pc = 0x1C9744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9740u;
            // 0x1c9744: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9748u; }
        if (ctx->pc != 0x1C9748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9748u; }
        if (ctx->pc != 0x1C9748u) { return; }
    }
    ctx->pc = 0x1C9748u;
label_1c9748:
    // 0x1c9748: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1c9748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1c974c:
    // 0x1c974c: 0x40f809  jalr        $v0
label_1c9750:
    if (ctx->pc == 0x1C9750u) {
        ctx->pc = 0x1C9750u;
            // 0x1c9750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9754u;
        goto label_1c9754;
    }
    ctx->pc = 0x1C974Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C9754u);
        ctx->pc = 0x1C9750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C974Cu;
            // 0x1c9750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8C80u: goto label_1c8c80;
            case 0x1C8C84u: goto label_1c8c84;
            case 0x1C8C88u: goto label_1c8c88;
            case 0x1C8C8Cu: goto label_1c8c8c;
            case 0x1C8C90u: goto label_1c8c90;
            case 0x1C8C94u: goto label_1c8c94;
            case 0x1C8C98u: goto label_1c8c98;
            case 0x1C8C9Cu: goto label_1c8c9c;
            case 0x1C8CA0u: goto label_1c8ca0;
            case 0x1C8CA4u: goto label_1c8ca4;
            case 0x1C8CA8u: goto label_1c8ca8;
            case 0x1C8CACu: goto label_1c8cac;
            case 0x1C8CB0u: goto label_1c8cb0;
            case 0x1C8CB4u: goto label_1c8cb4;
            case 0x1C8CB8u: goto label_1c8cb8;
            case 0x1C8CBCu: goto label_1c8cbc;
            case 0x1C8CC0u: goto label_1c8cc0;
            case 0x1C8CC4u: goto label_1c8cc4;
            case 0x1C8CC8u: goto label_1c8cc8;
            case 0x1C8CCCu: goto label_1c8ccc;
            case 0x1C8CD0u: goto label_1c8cd0;
            case 0x1C8CD4u: goto label_1c8cd4;
            case 0x1C8CD8u: goto label_1c8cd8;
            case 0x1C8CDCu: goto label_1c8cdc;
            case 0x1C8CE0u: goto label_1c8ce0;
            case 0x1C8CE4u: goto label_1c8ce4;
            case 0x1C8CE8u: goto label_1c8ce8;
            case 0x1C8CECu: goto label_1c8cec;
            case 0x1C8CF0u: goto label_1c8cf0;
            case 0x1C8CF4u: goto label_1c8cf4;
            case 0x1C8CF8u: goto label_1c8cf8;
            case 0x1C8CFCu: goto label_1c8cfc;
            case 0x1C8D00u: goto label_1c8d00;
            case 0x1C8D04u: goto label_1c8d04;
            case 0x1C8D08u: goto label_1c8d08;
            case 0x1C8D0Cu: goto label_1c8d0c;
            case 0x1C8D10u: goto label_1c8d10;
            case 0x1C8D14u: goto label_1c8d14;
            case 0x1C8D18u: goto label_1c8d18;
            case 0x1C8D1Cu: goto label_1c8d1c;
            case 0x1C8D20u: goto label_1c8d20;
            case 0x1C8D24u: goto label_1c8d24;
            case 0x1C8D28u: goto label_1c8d28;
            case 0x1C8D2Cu: goto label_1c8d2c;
            case 0x1C8D30u: goto label_1c8d30;
            case 0x1C8D34u: goto label_1c8d34;
            case 0x1C8D38u: goto label_1c8d38;
            case 0x1C8D3Cu: goto label_1c8d3c;
            case 0x1C8D40u: goto label_1c8d40;
            case 0x1C8D44u: goto label_1c8d44;
            case 0x1C8D48u: goto label_1c8d48;
            case 0x1C8D4Cu: goto label_1c8d4c;
            case 0x1C8D50u: goto label_1c8d50;
            case 0x1C8D54u: goto label_1c8d54;
            case 0x1C8D58u: goto label_1c8d58;
            case 0x1C8D5Cu: goto label_1c8d5c;
            case 0x1C8D60u: goto label_1c8d60;
            case 0x1C8D64u: goto label_1c8d64;
            case 0x1C8D68u: goto label_1c8d68;
            case 0x1C8D6Cu: goto label_1c8d6c;
            case 0x1C8D70u: goto label_1c8d70;
            case 0x1C8D74u: goto label_1c8d74;
            case 0x1C8D78u: goto label_1c8d78;
            case 0x1C8D7Cu: goto label_1c8d7c;
            case 0x1C8D80u: goto label_1c8d80;
            case 0x1C8D84u: goto label_1c8d84;
            case 0x1C8D88u: goto label_1c8d88;
            case 0x1C8D8Cu: goto label_1c8d8c;
            case 0x1C8D90u: goto label_1c8d90;
            case 0x1C8D94u: goto label_1c8d94;
            case 0x1C8D98u: goto label_1c8d98;
            case 0x1C8D9Cu: goto label_1c8d9c;
            case 0x1C8DA0u: goto label_1c8da0;
            case 0x1C8DA4u: goto label_1c8da4;
            case 0x1C8DA8u: goto label_1c8da8;
            case 0x1C8DACu: goto label_1c8dac;
            case 0x1C8DB0u: goto label_1c8db0;
            case 0x1C8DB4u: goto label_1c8db4;
            case 0x1C8DB8u: goto label_1c8db8;
            case 0x1C8DBCu: goto label_1c8dbc;
            case 0x1C8DC0u: goto label_1c8dc0;
            case 0x1C8DC4u: goto label_1c8dc4;
            case 0x1C8DC8u: goto label_1c8dc8;
            case 0x1C8DCCu: goto label_1c8dcc;
            case 0x1C8DD0u: goto label_1c8dd0;
            case 0x1C8DD4u: goto label_1c8dd4;
            case 0x1C8DD8u: goto label_1c8dd8;
            case 0x1C8DDCu: goto label_1c8ddc;
            case 0x1C8DE0u: goto label_1c8de0;
            case 0x1C8DE4u: goto label_1c8de4;
            case 0x1C8DE8u: goto label_1c8de8;
            case 0x1C8DECu: goto label_1c8dec;
            case 0x1C8DF0u: goto label_1c8df0;
            case 0x1C8DF4u: goto label_1c8df4;
            case 0x1C8DF8u: goto label_1c8df8;
            case 0x1C8DFCu: goto label_1c8dfc;
            case 0x1C8E00u: goto label_1c8e00;
            case 0x1C8E04u: goto label_1c8e04;
            case 0x1C8E08u: goto label_1c8e08;
            case 0x1C8E0Cu: goto label_1c8e0c;
            case 0x1C8E10u: goto label_1c8e10;
            case 0x1C8E14u: goto label_1c8e14;
            case 0x1C8E18u: goto label_1c8e18;
            case 0x1C8E1Cu: goto label_1c8e1c;
            case 0x1C8E20u: goto label_1c8e20;
            case 0x1C8E24u: goto label_1c8e24;
            case 0x1C8E28u: goto label_1c8e28;
            case 0x1C8E2Cu: goto label_1c8e2c;
            case 0x1C8E30u: goto label_1c8e30;
            case 0x1C8E34u: goto label_1c8e34;
            case 0x1C8E38u: goto label_1c8e38;
            case 0x1C8E3Cu: goto label_1c8e3c;
            case 0x1C8E40u: goto label_1c8e40;
            case 0x1C8E44u: goto label_1c8e44;
            case 0x1C8E48u: goto label_1c8e48;
            case 0x1C8E4Cu: goto label_1c8e4c;
            case 0x1C8E50u: goto label_1c8e50;
            case 0x1C8E54u: goto label_1c8e54;
            case 0x1C8E58u: goto label_1c8e58;
            case 0x1C8E5Cu: goto label_1c8e5c;
            case 0x1C8E60u: goto label_1c8e60;
            case 0x1C8E64u: goto label_1c8e64;
            case 0x1C8E68u: goto label_1c8e68;
            case 0x1C8E6Cu: goto label_1c8e6c;
            case 0x1C8E70u: goto label_1c8e70;
            case 0x1C8E74u: goto label_1c8e74;
            case 0x1C8E78u: goto label_1c8e78;
            case 0x1C8E7Cu: goto label_1c8e7c;
            case 0x1C8E80u: goto label_1c8e80;
            case 0x1C8E84u: goto label_1c8e84;
            case 0x1C8E88u: goto label_1c8e88;
            case 0x1C8E8Cu: goto label_1c8e8c;
            case 0x1C8E90u: goto label_1c8e90;
            case 0x1C8E94u: goto label_1c8e94;
            case 0x1C8E98u: goto label_1c8e98;
            case 0x1C8E9Cu: goto label_1c8e9c;
            case 0x1C8EA0u: goto label_1c8ea0;
            case 0x1C8EA4u: goto label_1c8ea4;
            case 0x1C8EA8u: goto label_1c8ea8;
            case 0x1C8EACu: goto label_1c8eac;
            case 0x1C8EB0u: goto label_1c8eb0;
            case 0x1C8EB4u: goto label_1c8eb4;
            case 0x1C8EB8u: goto label_1c8eb8;
            case 0x1C8EBCu: goto label_1c8ebc;
            case 0x1C8EC0u: goto label_1c8ec0;
            case 0x1C8EC4u: goto label_1c8ec4;
            case 0x1C8EC8u: goto label_1c8ec8;
            case 0x1C8ECCu: goto label_1c8ecc;
            case 0x1C8ED0u: goto label_1c8ed0;
            case 0x1C8ED4u: goto label_1c8ed4;
            case 0x1C8ED8u: goto label_1c8ed8;
            case 0x1C8EDCu: goto label_1c8edc;
            case 0x1C8EE0u: goto label_1c8ee0;
            case 0x1C8EE4u: goto label_1c8ee4;
            case 0x1C8EE8u: goto label_1c8ee8;
            case 0x1C8EECu: goto label_1c8eec;
            case 0x1C8EF0u: goto label_1c8ef0;
            case 0x1C8EF4u: goto label_1c8ef4;
            case 0x1C8EF8u: goto label_1c8ef8;
            case 0x1C8EFCu: goto label_1c8efc;
            case 0x1C8F00u: goto label_1c8f00;
            case 0x1C8F04u: goto label_1c8f04;
            case 0x1C8F08u: goto label_1c8f08;
            case 0x1C8F0Cu: goto label_1c8f0c;
            case 0x1C8F10u: goto label_1c8f10;
            case 0x1C8F14u: goto label_1c8f14;
            case 0x1C8F18u: goto label_1c8f18;
            case 0x1C8F1Cu: goto label_1c8f1c;
            case 0x1C8F20u: goto label_1c8f20;
            case 0x1C8F24u: goto label_1c8f24;
            case 0x1C8F28u: goto label_1c8f28;
            case 0x1C8F2Cu: goto label_1c8f2c;
            case 0x1C8F30u: goto label_1c8f30;
            case 0x1C8F34u: goto label_1c8f34;
            case 0x1C8F38u: goto label_1c8f38;
            case 0x1C8F3Cu: goto label_1c8f3c;
            case 0x1C8F40u: goto label_1c8f40;
            case 0x1C8F44u: goto label_1c8f44;
            case 0x1C8F48u: goto label_1c8f48;
            case 0x1C8F4Cu: goto label_1c8f4c;
            case 0x1C8F50u: goto label_1c8f50;
            case 0x1C8F54u: goto label_1c8f54;
            case 0x1C8F58u: goto label_1c8f58;
            case 0x1C8F5Cu: goto label_1c8f5c;
            case 0x1C8F60u: goto label_1c8f60;
            case 0x1C8F64u: goto label_1c8f64;
            case 0x1C8F68u: goto label_1c8f68;
            case 0x1C8F6Cu: goto label_1c8f6c;
            case 0x1C8F70u: goto label_1c8f70;
            case 0x1C8F74u: goto label_1c8f74;
            case 0x1C8F78u: goto label_1c8f78;
            case 0x1C8F7Cu: goto label_1c8f7c;
            case 0x1C8F80u: goto label_1c8f80;
            case 0x1C8F84u: goto label_1c8f84;
            case 0x1C8F88u: goto label_1c8f88;
            case 0x1C8F8Cu: goto label_1c8f8c;
            case 0x1C8F90u: goto label_1c8f90;
            case 0x1C8F94u: goto label_1c8f94;
            case 0x1C8F98u: goto label_1c8f98;
            case 0x1C8F9Cu: goto label_1c8f9c;
            case 0x1C8FA0u: goto label_1c8fa0;
            case 0x1C8FA4u: goto label_1c8fa4;
            case 0x1C8FA8u: goto label_1c8fa8;
            case 0x1C8FACu: goto label_1c8fac;
            case 0x1C8FB0u: goto label_1c8fb0;
            case 0x1C8FB4u: goto label_1c8fb4;
            case 0x1C8FB8u: goto label_1c8fb8;
            case 0x1C8FBCu: goto label_1c8fbc;
            case 0x1C8FC0u: goto label_1c8fc0;
            case 0x1C8FC4u: goto label_1c8fc4;
            case 0x1C8FC8u: goto label_1c8fc8;
            case 0x1C8FCCu: goto label_1c8fcc;
            case 0x1C8FD0u: goto label_1c8fd0;
            case 0x1C8FD4u: goto label_1c8fd4;
            case 0x1C8FD8u: goto label_1c8fd8;
            case 0x1C8FDCu: goto label_1c8fdc;
            case 0x1C8FE0u: goto label_1c8fe0;
            case 0x1C8FE4u: goto label_1c8fe4;
            case 0x1C8FE8u: goto label_1c8fe8;
            case 0x1C8FECu: goto label_1c8fec;
            case 0x1C8FF0u: goto label_1c8ff0;
            case 0x1C8FF4u: goto label_1c8ff4;
            case 0x1C8FF8u: goto label_1c8ff8;
            case 0x1C8FFCu: goto label_1c8ffc;
            case 0x1C9000u: goto label_1c9000;
            case 0x1C9004u: goto label_1c9004;
            case 0x1C9008u: goto label_1c9008;
            case 0x1C900Cu: goto label_1c900c;
            case 0x1C9010u: goto label_1c9010;
            case 0x1C9014u: goto label_1c9014;
            case 0x1C9018u: goto label_1c9018;
            case 0x1C901Cu: goto label_1c901c;
            case 0x1C9020u: goto label_1c9020;
            case 0x1C9024u: goto label_1c9024;
            case 0x1C9028u: goto label_1c9028;
            case 0x1C902Cu: goto label_1c902c;
            case 0x1C9030u: goto label_1c9030;
            case 0x1C9034u: goto label_1c9034;
            case 0x1C9038u: goto label_1c9038;
            case 0x1C903Cu: goto label_1c903c;
            case 0x1C9040u: goto label_1c9040;
            case 0x1C9044u: goto label_1c9044;
            case 0x1C9048u: goto label_1c9048;
            case 0x1C904Cu: goto label_1c904c;
            case 0x1C9050u: goto label_1c9050;
            case 0x1C9054u: goto label_1c9054;
            case 0x1C9058u: goto label_1c9058;
            case 0x1C905Cu: goto label_1c905c;
            case 0x1C9060u: goto label_1c9060;
            case 0x1C9064u: goto label_1c9064;
            case 0x1C9068u: goto label_1c9068;
            case 0x1C906Cu: goto label_1c906c;
            case 0x1C9070u: goto label_1c9070;
            case 0x1C9074u: goto label_1c9074;
            case 0x1C9078u: goto label_1c9078;
            case 0x1C907Cu: goto label_1c907c;
            case 0x1C9080u: goto label_1c9080;
            case 0x1C9084u: goto label_1c9084;
            case 0x1C9088u: goto label_1c9088;
            case 0x1C908Cu: goto label_1c908c;
            case 0x1C9090u: goto label_1c9090;
            case 0x1C9094u: goto label_1c9094;
            case 0x1C9098u: goto label_1c9098;
            case 0x1C909Cu: goto label_1c909c;
            case 0x1C90A0u: goto label_1c90a0;
            case 0x1C90A4u: goto label_1c90a4;
            case 0x1C90A8u: goto label_1c90a8;
            case 0x1C90ACu: goto label_1c90ac;
            case 0x1C90B0u: goto label_1c90b0;
            case 0x1C90B4u: goto label_1c90b4;
            case 0x1C90B8u: goto label_1c90b8;
            case 0x1C90BCu: goto label_1c90bc;
            case 0x1C90C0u: goto label_1c90c0;
            case 0x1C90C4u: goto label_1c90c4;
            case 0x1C90C8u: goto label_1c90c8;
            case 0x1C90CCu: goto label_1c90cc;
            case 0x1C90D0u: goto label_1c90d0;
            case 0x1C90D4u: goto label_1c90d4;
            case 0x1C90D8u: goto label_1c90d8;
            case 0x1C90DCu: goto label_1c90dc;
            case 0x1C90E0u: goto label_1c90e0;
            case 0x1C90E4u: goto label_1c90e4;
            case 0x1C90E8u: goto label_1c90e8;
            case 0x1C90ECu: goto label_1c90ec;
            case 0x1C90F0u: goto label_1c90f0;
            case 0x1C90F4u: goto label_1c90f4;
            case 0x1C90F8u: goto label_1c90f8;
            case 0x1C90FCu: goto label_1c90fc;
            case 0x1C9100u: goto label_1c9100;
            case 0x1C9104u: goto label_1c9104;
            case 0x1C9108u: goto label_1c9108;
            case 0x1C910Cu: goto label_1c910c;
            case 0x1C9110u: goto label_1c9110;
            case 0x1C9114u: goto label_1c9114;
            case 0x1C9118u: goto label_1c9118;
            case 0x1C911Cu: goto label_1c911c;
            case 0x1C9120u: goto label_1c9120;
            case 0x1C9124u: goto label_1c9124;
            case 0x1C9128u: goto label_1c9128;
            case 0x1C912Cu: goto label_1c912c;
            case 0x1C9130u: goto label_1c9130;
            case 0x1C9134u: goto label_1c9134;
            case 0x1C9138u: goto label_1c9138;
            case 0x1C913Cu: goto label_1c913c;
            case 0x1C9140u: goto label_1c9140;
            case 0x1C9144u: goto label_1c9144;
            case 0x1C9148u: goto label_1c9148;
            case 0x1C914Cu: goto label_1c914c;
            case 0x1C9150u: goto label_1c9150;
            case 0x1C9154u: goto label_1c9154;
            case 0x1C9158u: goto label_1c9158;
            case 0x1C915Cu: goto label_1c915c;
            case 0x1C9160u: goto label_1c9160;
            case 0x1C9164u: goto label_1c9164;
            case 0x1C9168u: goto label_1c9168;
            case 0x1C916Cu: goto label_1c916c;
            case 0x1C9170u: goto label_1c9170;
            case 0x1C9174u: goto label_1c9174;
            case 0x1C9178u: goto label_1c9178;
            case 0x1C917Cu: goto label_1c917c;
            case 0x1C9180u: goto label_1c9180;
            case 0x1C9184u: goto label_1c9184;
            case 0x1C9188u: goto label_1c9188;
            case 0x1C918Cu: goto label_1c918c;
            case 0x1C9190u: goto label_1c9190;
            case 0x1C9194u: goto label_1c9194;
            case 0x1C9198u: goto label_1c9198;
            case 0x1C919Cu: goto label_1c919c;
            case 0x1C91A0u: goto label_1c91a0;
            case 0x1C91A4u: goto label_1c91a4;
            case 0x1C91A8u: goto label_1c91a8;
            case 0x1C91ACu: goto label_1c91ac;
            case 0x1C91B0u: goto label_1c91b0;
            case 0x1C91B4u: goto label_1c91b4;
            case 0x1C91B8u: goto label_1c91b8;
            case 0x1C91BCu: goto label_1c91bc;
            case 0x1C91C0u: goto label_1c91c0;
            case 0x1C91C4u: goto label_1c91c4;
            case 0x1C91C8u: goto label_1c91c8;
            case 0x1C91CCu: goto label_1c91cc;
            case 0x1C91D0u: goto label_1c91d0;
            case 0x1C91D4u: goto label_1c91d4;
            case 0x1C91D8u: goto label_1c91d8;
            case 0x1C91DCu: goto label_1c91dc;
            case 0x1C91E0u: goto label_1c91e0;
            case 0x1C91E4u: goto label_1c91e4;
            case 0x1C91E8u: goto label_1c91e8;
            case 0x1C91ECu: goto label_1c91ec;
            case 0x1C91F0u: goto label_1c91f0;
            case 0x1C91F4u: goto label_1c91f4;
            case 0x1C91F8u: goto label_1c91f8;
            case 0x1C91FCu: goto label_1c91fc;
            case 0x1C9200u: goto label_1c9200;
            case 0x1C9204u: goto label_1c9204;
            case 0x1C9208u: goto label_1c9208;
            case 0x1C920Cu: goto label_1c920c;
            case 0x1C9210u: goto label_1c9210;
            case 0x1C9214u: goto label_1c9214;
            case 0x1C9218u: goto label_1c9218;
            case 0x1C921Cu: goto label_1c921c;
            case 0x1C9220u: goto label_1c9220;
            case 0x1C9224u: goto label_1c9224;
            case 0x1C9228u: goto label_1c9228;
            case 0x1C922Cu: goto label_1c922c;
            case 0x1C9230u: goto label_1c9230;
            case 0x1C9234u: goto label_1c9234;
            case 0x1C9238u: goto label_1c9238;
            case 0x1C923Cu: goto label_1c923c;
            case 0x1C9240u: goto label_1c9240;
            case 0x1C9244u: goto label_1c9244;
            case 0x1C9248u: goto label_1c9248;
            case 0x1C924Cu: goto label_1c924c;
            case 0x1C9250u: goto label_1c9250;
            case 0x1C9254u: goto label_1c9254;
            case 0x1C9258u: goto label_1c9258;
            case 0x1C925Cu: goto label_1c925c;
            case 0x1C9260u: goto label_1c9260;
            case 0x1C9264u: goto label_1c9264;
            case 0x1C9268u: goto label_1c9268;
            case 0x1C926Cu: goto label_1c926c;
            case 0x1C9270u: goto label_1c9270;
            case 0x1C9274u: goto label_1c9274;
            case 0x1C9278u: goto label_1c9278;
            case 0x1C927Cu: goto label_1c927c;
            case 0x1C9280u: goto label_1c9280;
            case 0x1C9284u: goto label_1c9284;
            case 0x1C9288u: goto label_1c9288;
            case 0x1C928Cu: goto label_1c928c;
            case 0x1C9290u: goto label_1c9290;
            case 0x1C9294u: goto label_1c9294;
            case 0x1C9298u: goto label_1c9298;
            case 0x1C929Cu: goto label_1c929c;
            case 0x1C92A0u: goto label_1c92a0;
            case 0x1C92A4u: goto label_1c92a4;
            case 0x1C92A8u: goto label_1c92a8;
            case 0x1C92ACu: goto label_1c92ac;
            case 0x1C92B0u: goto label_1c92b0;
            case 0x1C92B4u: goto label_1c92b4;
            case 0x1C92B8u: goto label_1c92b8;
            case 0x1C92BCu: goto label_1c92bc;
            case 0x1C92C0u: goto label_1c92c0;
            case 0x1C92C4u: goto label_1c92c4;
            case 0x1C92C8u: goto label_1c92c8;
            case 0x1C92CCu: goto label_1c92cc;
            case 0x1C92D0u: goto label_1c92d0;
            case 0x1C92D4u: goto label_1c92d4;
            case 0x1C92D8u: goto label_1c92d8;
            case 0x1C92DCu: goto label_1c92dc;
            case 0x1C92E0u: goto label_1c92e0;
            case 0x1C92E4u: goto label_1c92e4;
            case 0x1C92E8u: goto label_1c92e8;
            case 0x1C92ECu: goto label_1c92ec;
            case 0x1C92F0u: goto label_1c92f0;
            case 0x1C92F4u: goto label_1c92f4;
            case 0x1C92F8u: goto label_1c92f8;
            case 0x1C92FCu: goto label_1c92fc;
            case 0x1C9300u: goto label_1c9300;
            case 0x1C9304u: goto label_1c9304;
            case 0x1C9308u: goto label_1c9308;
            case 0x1C930Cu: goto label_1c930c;
            case 0x1C9310u: goto label_1c9310;
            case 0x1C9314u: goto label_1c9314;
            case 0x1C9318u: goto label_1c9318;
            case 0x1C931Cu: goto label_1c931c;
            case 0x1C9320u: goto label_1c9320;
            case 0x1C9324u: goto label_1c9324;
            case 0x1C9328u: goto label_1c9328;
            case 0x1C932Cu: goto label_1c932c;
            case 0x1C9330u: goto label_1c9330;
            case 0x1C9334u: goto label_1c9334;
            case 0x1C9338u: goto label_1c9338;
            case 0x1C933Cu: goto label_1c933c;
            case 0x1C9340u: goto label_1c9340;
            case 0x1C9344u: goto label_1c9344;
            case 0x1C9348u: goto label_1c9348;
            case 0x1C934Cu: goto label_1c934c;
            case 0x1C9350u: goto label_1c9350;
            case 0x1C9354u: goto label_1c9354;
            case 0x1C9358u: goto label_1c9358;
            case 0x1C935Cu: goto label_1c935c;
            case 0x1C9360u: goto label_1c9360;
            case 0x1C9364u: goto label_1c9364;
            case 0x1C9368u: goto label_1c9368;
            case 0x1C936Cu: goto label_1c936c;
            case 0x1C9370u: goto label_1c9370;
            case 0x1C9374u: goto label_1c9374;
            case 0x1C9378u: goto label_1c9378;
            case 0x1C937Cu: goto label_1c937c;
            case 0x1C9380u: goto label_1c9380;
            case 0x1C9384u: goto label_1c9384;
            case 0x1C9388u: goto label_1c9388;
            case 0x1C938Cu: goto label_1c938c;
            case 0x1C9390u: goto label_1c9390;
            case 0x1C9394u: goto label_1c9394;
            case 0x1C9398u: goto label_1c9398;
            case 0x1C939Cu: goto label_1c939c;
            case 0x1C93A0u: goto label_1c93a0;
            case 0x1C93A4u: goto label_1c93a4;
            case 0x1C93A8u: goto label_1c93a8;
            case 0x1C93ACu: goto label_1c93ac;
            case 0x1C93B0u: goto label_1c93b0;
            case 0x1C93B4u: goto label_1c93b4;
            case 0x1C93B8u: goto label_1c93b8;
            case 0x1C93BCu: goto label_1c93bc;
            case 0x1C93C0u: goto label_1c93c0;
            case 0x1C93C4u: goto label_1c93c4;
            case 0x1C93C8u: goto label_1c93c8;
            case 0x1C93CCu: goto label_1c93cc;
            case 0x1C93D0u: goto label_1c93d0;
            case 0x1C93D4u: goto label_1c93d4;
            case 0x1C93D8u: goto label_1c93d8;
            case 0x1C93DCu: goto label_1c93dc;
            case 0x1C93E0u: goto label_1c93e0;
            case 0x1C93E4u: goto label_1c93e4;
            case 0x1C93E8u: goto label_1c93e8;
            case 0x1C93ECu: goto label_1c93ec;
            case 0x1C93F0u: goto label_1c93f0;
            case 0x1C93F4u: goto label_1c93f4;
            case 0x1C93F8u: goto label_1c93f8;
            case 0x1C93FCu: goto label_1c93fc;
            case 0x1C9400u: goto label_1c9400;
            case 0x1C9404u: goto label_1c9404;
            case 0x1C9408u: goto label_1c9408;
            case 0x1C940Cu: goto label_1c940c;
            case 0x1C9410u: goto label_1c9410;
            case 0x1C9414u: goto label_1c9414;
            case 0x1C9418u: goto label_1c9418;
            case 0x1C941Cu: goto label_1c941c;
            case 0x1C9420u: goto label_1c9420;
            case 0x1C9424u: goto label_1c9424;
            case 0x1C9428u: goto label_1c9428;
            case 0x1C942Cu: goto label_1c942c;
            case 0x1C9430u: goto label_1c9430;
            case 0x1C9434u: goto label_1c9434;
            case 0x1C9438u: goto label_1c9438;
            case 0x1C943Cu: goto label_1c943c;
            case 0x1C9440u: goto label_1c9440;
            case 0x1C9444u: goto label_1c9444;
            case 0x1C9448u: goto label_1c9448;
            case 0x1C944Cu: goto label_1c944c;
            case 0x1C9450u: goto label_1c9450;
            case 0x1C9454u: goto label_1c9454;
            case 0x1C9458u: goto label_1c9458;
            case 0x1C945Cu: goto label_1c945c;
            case 0x1C9460u: goto label_1c9460;
            case 0x1C9464u: goto label_1c9464;
            case 0x1C9468u: goto label_1c9468;
            case 0x1C946Cu: goto label_1c946c;
            case 0x1C9470u: goto label_1c9470;
            case 0x1C9474u: goto label_1c9474;
            case 0x1C9478u: goto label_1c9478;
            case 0x1C947Cu: goto label_1c947c;
            case 0x1C9480u: goto label_1c9480;
            case 0x1C9484u: goto label_1c9484;
            case 0x1C9488u: goto label_1c9488;
            case 0x1C948Cu: goto label_1c948c;
            case 0x1C9490u: goto label_1c9490;
            case 0x1C9494u: goto label_1c9494;
            case 0x1C9498u: goto label_1c9498;
            case 0x1C949Cu: goto label_1c949c;
            case 0x1C94A0u: goto label_1c94a0;
            case 0x1C94A4u: goto label_1c94a4;
            case 0x1C94A8u: goto label_1c94a8;
            case 0x1C94ACu: goto label_1c94ac;
            case 0x1C94B0u: goto label_1c94b0;
            case 0x1C94B4u: goto label_1c94b4;
            case 0x1C94B8u: goto label_1c94b8;
            case 0x1C94BCu: goto label_1c94bc;
            case 0x1C94C0u: goto label_1c94c0;
            case 0x1C94C4u: goto label_1c94c4;
            case 0x1C94C8u: goto label_1c94c8;
            case 0x1C94CCu: goto label_1c94cc;
            case 0x1C94D0u: goto label_1c94d0;
            case 0x1C94D4u: goto label_1c94d4;
            case 0x1C94D8u: goto label_1c94d8;
            case 0x1C94DCu: goto label_1c94dc;
            case 0x1C94E0u: goto label_1c94e0;
            case 0x1C94E4u: goto label_1c94e4;
            case 0x1C94E8u: goto label_1c94e8;
            case 0x1C94ECu: goto label_1c94ec;
            case 0x1C94F0u: goto label_1c94f0;
            case 0x1C94F4u: goto label_1c94f4;
            case 0x1C94F8u: goto label_1c94f8;
            case 0x1C94FCu: goto label_1c94fc;
            case 0x1C9500u: goto label_1c9500;
            case 0x1C9504u: goto label_1c9504;
            case 0x1C9508u: goto label_1c9508;
            case 0x1C950Cu: goto label_1c950c;
            case 0x1C9510u: goto label_1c9510;
            case 0x1C9514u: goto label_1c9514;
            case 0x1C9518u: goto label_1c9518;
            case 0x1C951Cu: goto label_1c951c;
            case 0x1C9520u: goto label_1c9520;
            case 0x1C9524u: goto label_1c9524;
            case 0x1C9528u: goto label_1c9528;
            case 0x1C952Cu: goto label_1c952c;
            case 0x1C9530u: goto label_1c9530;
            case 0x1C9534u: goto label_1c9534;
            case 0x1C9538u: goto label_1c9538;
            case 0x1C953Cu: goto label_1c953c;
            case 0x1C9540u: goto label_1c9540;
            case 0x1C9544u: goto label_1c9544;
            case 0x1C9548u: goto label_1c9548;
            case 0x1C954Cu: goto label_1c954c;
            case 0x1C9550u: goto label_1c9550;
            case 0x1C9554u: goto label_1c9554;
            case 0x1C9558u: goto label_1c9558;
            case 0x1C955Cu: goto label_1c955c;
            case 0x1C9560u: goto label_1c9560;
            case 0x1C9564u: goto label_1c9564;
            case 0x1C9568u: goto label_1c9568;
            case 0x1C956Cu: goto label_1c956c;
            case 0x1C9570u: goto label_1c9570;
            case 0x1C9574u: goto label_1c9574;
            case 0x1C9578u: goto label_1c9578;
            case 0x1C957Cu: goto label_1c957c;
            case 0x1C9580u: goto label_1c9580;
            case 0x1C9584u: goto label_1c9584;
            case 0x1C9588u: goto label_1c9588;
            case 0x1C958Cu: goto label_1c958c;
            case 0x1C9590u: goto label_1c9590;
            case 0x1C9594u: goto label_1c9594;
            case 0x1C9598u: goto label_1c9598;
            case 0x1C959Cu: goto label_1c959c;
            case 0x1C95A0u: goto label_1c95a0;
            case 0x1C95A4u: goto label_1c95a4;
            case 0x1C95A8u: goto label_1c95a8;
            case 0x1C95ACu: goto label_1c95ac;
            case 0x1C95B0u: goto label_1c95b0;
            case 0x1C95B4u: goto label_1c95b4;
            case 0x1C95B8u: goto label_1c95b8;
            case 0x1C95BCu: goto label_1c95bc;
            case 0x1C95C0u: goto label_1c95c0;
            case 0x1C95C4u: goto label_1c95c4;
            case 0x1C95C8u: goto label_1c95c8;
            case 0x1C95CCu: goto label_1c95cc;
            case 0x1C95D0u: goto label_1c95d0;
            case 0x1C95D4u: goto label_1c95d4;
            case 0x1C95D8u: goto label_1c95d8;
            case 0x1C95DCu: goto label_1c95dc;
            case 0x1C95E0u: goto label_1c95e0;
            case 0x1C95E4u: goto label_1c95e4;
            case 0x1C95E8u: goto label_1c95e8;
            case 0x1C95ECu: goto label_1c95ec;
            case 0x1C95F0u: goto label_1c95f0;
            case 0x1C95F4u: goto label_1c95f4;
            case 0x1C95F8u: goto label_1c95f8;
            case 0x1C95FCu: goto label_1c95fc;
            case 0x1C9600u: goto label_1c9600;
            case 0x1C9604u: goto label_1c9604;
            case 0x1C9608u: goto label_1c9608;
            case 0x1C960Cu: goto label_1c960c;
            case 0x1C9610u: goto label_1c9610;
            case 0x1C9614u: goto label_1c9614;
            case 0x1C9618u: goto label_1c9618;
            case 0x1C961Cu: goto label_1c961c;
            case 0x1C9620u: goto label_1c9620;
            case 0x1C9624u: goto label_1c9624;
            case 0x1C9628u: goto label_1c9628;
            case 0x1C962Cu: goto label_1c962c;
            case 0x1C9630u: goto label_1c9630;
            case 0x1C9634u: goto label_1c9634;
            case 0x1C9638u: goto label_1c9638;
            case 0x1C963Cu: goto label_1c963c;
            case 0x1C9640u: goto label_1c9640;
            case 0x1C9644u: goto label_1c9644;
            case 0x1C9648u: goto label_1c9648;
            case 0x1C964Cu: goto label_1c964c;
            case 0x1C9650u: goto label_1c9650;
            case 0x1C9654u: goto label_1c9654;
            case 0x1C9658u: goto label_1c9658;
            case 0x1C965Cu: goto label_1c965c;
            case 0x1C9660u: goto label_1c9660;
            case 0x1C9664u: goto label_1c9664;
            case 0x1C9668u: goto label_1c9668;
            case 0x1C966Cu: goto label_1c966c;
            case 0x1C9670u: goto label_1c9670;
            case 0x1C9674u: goto label_1c9674;
            case 0x1C9678u: goto label_1c9678;
            case 0x1C967Cu: goto label_1c967c;
            case 0x1C9680u: goto label_1c9680;
            case 0x1C9684u: goto label_1c9684;
            case 0x1C9688u: goto label_1c9688;
            case 0x1C968Cu: goto label_1c968c;
            case 0x1C9690u: goto label_1c9690;
            case 0x1C9694u: goto label_1c9694;
            case 0x1C9698u: goto label_1c9698;
            case 0x1C969Cu: goto label_1c969c;
            case 0x1C96A0u: goto label_1c96a0;
            case 0x1C96A4u: goto label_1c96a4;
            case 0x1C96A8u: goto label_1c96a8;
            case 0x1C96ACu: goto label_1c96ac;
            case 0x1C96B0u: goto label_1c96b0;
            case 0x1C96B4u: goto label_1c96b4;
            case 0x1C96B8u: goto label_1c96b8;
            case 0x1C96BCu: goto label_1c96bc;
            case 0x1C96C0u: goto label_1c96c0;
            case 0x1C96C4u: goto label_1c96c4;
            case 0x1C96C8u: goto label_1c96c8;
            case 0x1C96CCu: goto label_1c96cc;
            case 0x1C96D0u: goto label_1c96d0;
            case 0x1C96D4u: goto label_1c96d4;
            case 0x1C96D8u: goto label_1c96d8;
            case 0x1C96DCu: goto label_1c96dc;
            case 0x1C96E0u: goto label_1c96e0;
            case 0x1C96E4u: goto label_1c96e4;
            case 0x1C96E8u: goto label_1c96e8;
            case 0x1C96ECu: goto label_1c96ec;
            case 0x1C96F0u: goto label_1c96f0;
            case 0x1C96F4u: goto label_1c96f4;
            case 0x1C96F8u: goto label_1c96f8;
            case 0x1C96FCu: goto label_1c96fc;
            case 0x1C9700u: goto label_1c9700;
            case 0x1C9704u: goto label_1c9704;
            case 0x1C9708u: goto label_1c9708;
            case 0x1C970Cu: goto label_1c970c;
            case 0x1C9710u: goto label_1c9710;
            case 0x1C9714u: goto label_1c9714;
            case 0x1C9718u: goto label_1c9718;
            case 0x1C971Cu: goto label_1c971c;
            case 0x1C9720u: goto label_1c9720;
            case 0x1C9724u: goto label_1c9724;
            case 0x1C9728u: goto label_1c9728;
            case 0x1C972Cu: goto label_1c972c;
            case 0x1C9730u: goto label_1c9730;
            case 0x1C9734u: goto label_1c9734;
            case 0x1C9738u: goto label_1c9738;
            case 0x1C973Cu: goto label_1c973c;
            case 0x1C9740u: goto label_1c9740;
            case 0x1C9744u: goto label_1c9744;
            case 0x1C9748u: goto label_1c9748;
            case 0x1C974Cu: goto label_1c974c;
            case 0x1C9750u: goto label_1c9750;
            case 0x1C9754u: goto label_1c9754;
            case 0x1C9758u: goto label_1c9758;
            case 0x1C975Cu: goto label_1c975c;
            case 0x1C9760u: goto label_1c9760;
            case 0x1C9764u: goto label_1c9764;
            case 0x1C9768u: goto label_1c9768;
            case 0x1C976Cu: goto label_1c976c;
            case 0x1C9770u: goto label_1c9770;
            case 0x1C9774u: goto label_1c9774;
            case 0x1C9778u: goto label_1c9778;
            case 0x1C977Cu: goto label_1c977c;
            case 0x1C9780u: goto label_1c9780;
            case 0x1C9784u: goto label_1c9784;
            case 0x1C9788u: goto label_1c9788;
            case 0x1C978Cu: goto label_1c978c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C9754u; }
            if (ctx->pc != 0x1C9754u) { return; }
        }
    }
    ctx->pc = 0x1C9754u;
label_1c9754:
    // 0x1c9754: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c9758:
    if (ctx->pc == 0x1C9758u) {
        ctx->pc = 0x1C975Cu;
        goto label_1c975c;
    }
    ctx->pc = 0x1C9754u;
    {
        const bool branch_taken_0x1c9754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9754) {
            ctx->pc = 0x1C9780u;
            goto label_1c9780;
        }
    }
    ctx->pc = 0x1C975Cu;
label_1c975c:
    // 0x1c975c: 0x0  nop
    ctx->pc = 0x1c975cu;
    // NOP
label_1c9760:
    // 0x1c9760: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1c9760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
label_1c9764:
    // 0x1c9764: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c9764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c9768:
    // 0x1c9768: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1c9768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1c976c:
    // 0x1c976c: 0x24c68a40  addiu       $a2, $a2, -0x75C0
    ctx->pc = 0x1c976cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937152));
label_1c9770:
    // 0x1c9770: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c9770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9774:
    // 0x1c9774: 0xc053ca4  jal         func_14F290
label_1c9778:
    if (ctx->pc == 0x1C9778u) {
        ctx->pc = 0x1C9778u;
            // 0x1c9778: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C977Cu;
        goto label_1c977c;
    }
    ctx->pc = 0x1C9774u;
    SET_GPR_U32(ctx, 31, 0x1C977Cu);
    ctx->pc = 0x1C9778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9774u;
            // 0x1c9778: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C977Cu; }
        if (ctx->pc != 0x1C977Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C977Cu; }
        if (ctx->pc != 0x1C977Cu) { return; }
    }
    ctx->pc = 0x1C977Cu;
label_1c977c:
    // 0x1c977c: 0x0  nop
    ctx->pc = 0x1c977cu;
    // NOP
label_1c9780:
    // 0x1c9780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9784:
    // 0x1c9784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9788:
    // 0x1c9788: 0x3e00008  jr          $ra
label_1c978c:
    if (ctx->pc == 0x1C978Cu) {
        ctx->pc = 0x1C978Cu;
            // 0x1c978c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1C9790u;
        goto label_fallthrough_0x1c9788;
    }
    ctx->pc = 0x1C9788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C978Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9788u;
            // 0x1c978c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8C80u: goto label_1c8c80;
            case 0x1C8C84u: goto label_1c8c84;
            case 0x1C8C88u: goto label_1c8c88;
            case 0x1C8C8Cu: goto label_1c8c8c;
            case 0x1C8C90u: goto label_1c8c90;
            case 0x1C8C94u: goto label_1c8c94;
            case 0x1C8C98u: goto label_1c8c98;
            case 0x1C8C9Cu: goto label_1c8c9c;
            case 0x1C8CA0u: goto label_1c8ca0;
            case 0x1C8CA4u: goto label_1c8ca4;
            case 0x1C8CA8u: goto label_1c8ca8;
            case 0x1C8CACu: goto label_1c8cac;
            case 0x1C8CB0u: goto label_1c8cb0;
            case 0x1C8CB4u: goto label_1c8cb4;
            case 0x1C8CB8u: goto label_1c8cb8;
            case 0x1C8CBCu: goto label_1c8cbc;
            case 0x1C8CC0u: goto label_1c8cc0;
            case 0x1C8CC4u: goto label_1c8cc4;
            case 0x1C8CC8u: goto label_1c8cc8;
            case 0x1C8CCCu: goto label_1c8ccc;
            case 0x1C8CD0u: goto label_1c8cd0;
            case 0x1C8CD4u: goto label_1c8cd4;
            case 0x1C8CD8u: goto label_1c8cd8;
            case 0x1C8CDCu: goto label_1c8cdc;
            case 0x1C8CE0u: goto label_1c8ce0;
            case 0x1C8CE4u: goto label_1c8ce4;
            case 0x1C8CE8u: goto label_1c8ce8;
            case 0x1C8CECu: goto label_1c8cec;
            case 0x1C8CF0u: goto label_1c8cf0;
            case 0x1C8CF4u: goto label_1c8cf4;
            case 0x1C8CF8u: goto label_1c8cf8;
            case 0x1C8CFCu: goto label_1c8cfc;
            case 0x1C8D00u: goto label_1c8d00;
            case 0x1C8D04u: goto label_1c8d04;
            case 0x1C8D08u: goto label_1c8d08;
            case 0x1C8D0Cu: goto label_1c8d0c;
            case 0x1C8D10u: goto label_1c8d10;
            case 0x1C8D14u: goto label_1c8d14;
            case 0x1C8D18u: goto label_1c8d18;
            case 0x1C8D1Cu: goto label_1c8d1c;
            case 0x1C8D20u: goto label_1c8d20;
            case 0x1C8D24u: goto label_1c8d24;
            case 0x1C8D28u: goto label_1c8d28;
            case 0x1C8D2Cu: goto label_1c8d2c;
            case 0x1C8D30u: goto label_1c8d30;
            case 0x1C8D34u: goto label_1c8d34;
            case 0x1C8D38u: goto label_1c8d38;
            case 0x1C8D3Cu: goto label_1c8d3c;
            case 0x1C8D40u: goto label_1c8d40;
            case 0x1C8D44u: goto label_1c8d44;
            case 0x1C8D48u: goto label_1c8d48;
            case 0x1C8D4Cu: goto label_1c8d4c;
            case 0x1C8D50u: goto label_1c8d50;
            case 0x1C8D54u: goto label_1c8d54;
            case 0x1C8D58u: goto label_1c8d58;
            case 0x1C8D5Cu: goto label_1c8d5c;
            case 0x1C8D60u: goto label_1c8d60;
            case 0x1C8D64u: goto label_1c8d64;
            case 0x1C8D68u: goto label_1c8d68;
            case 0x1C8D6Cu: goto label_1c8d6c;
            case 0x1C8D70u: goto label_1c8d70;
            case 0x1C8D74u: goto label_1c8d74;
            case 0x1C8D78u: goto label_1c8d78;
            case 0x1C8D7Cu: goto label_1c8d7c;
            case 0x1C8D80u: goto label_1c8d80;
            case 0x1C8D84u: goto label_1c8d84;
            case 0x1C8D88u: goto label_1c8d88;
            case 0x1C8D8Cu: goto label_1c8d8c;
            case 0x1C8D90u: goto label_1c8d90;
            case 0x1C8D94u: goto label_1c8d94;
            case 0x1C8D98u: goto label_1c8d98;
            case 0x1C8D9Cu: goto label_1c8d9c;
            case 0x1C8DA0u: goto label_1c8da0;
            case 0x1C8DA4u: goto label_1c8da4;
            case 0x1C8DA8u: goto label_1c8da8;
            case 0x1C8DACu: goto label_1c8dac;
            case 0x1C8DB0u: goto label_1c8db0;
            case 0x1C8DB4u: goto label_1c8db4;
            case 0x1C8DB8u: goto label_1c8db8;
            case 0x1C8DBCu: goto label_1c8dbc;
            case 0x1C8DC0u: goto label_1c8dc0;
            case 0x1C8DC4u: goto label_1c8dc4;
            case 0x1C8DC8u: goto label_1c8dc8;
            case 0x1C8DCCu: goto label_1c8dcc;
            case 0x1C8DD0u: goto label_1c8dd0;
            case 0x1C8DD4u: goto label_1c8dd4;
            case 0x1C8DD8u: goto label_1c8dd8;
            case 0x1C8DDCu: goto label_1c8ddc;
            case 0x1C8DE0u: goto label_1c8de0;
            case 0x1C8DE4u: goto label_1c8de4;
            case 0x1C8DE8u: goto label_1c8de8;
            case 0x1C8DECu: goto label_1c8dec;
            case 0x1C8DF0u: goto label_1c8df0;
            case 0x1C8DF4u: goto label_1c8df4;
            case 0x1C8DF8u: goto label_1c8df8;
            case 0x1C8DFCu: goto label_1c8dfc;
            case 0x1C8E00u: goto label_1c8e00;
            case 0x1C8E04u: goto label_1c8e04;
            case 0x1C8E08u: goto label_1c8e08;
            case 0x1C8E0Cu: goto label_1c8e0c;
            case 0x1C8E10u: goto label_1c8e10;
            case 0x1C8E14u: goto label_1c8e14;
            case 0x1C8E18u: goto label_1c8e18;
            case 0x1C8E1Cu: goto label_1c8e1c;
            case 0x1C8E20u: goto label_1c8e20;
            case 0x1C8E24u: goto label_1c8e24;
            case 0x1C8E28u: goto label_1c8e28;
            case 0x1C8E2Cu: goto label_1c8e2c;
            case 0x1C8E30u: goto label_1c8e30;
            case 0x1C8E34u: goto label_1c8e34;
            case 0x1C8E38u: goto label_1c8e38;
            case 0x1C8E3Cu: goto label_1c8e3c;
            case 0x1C8E40u: goto label_1c8e40;
            case 0x1C8E44u: goto label_1c8e44;
            case 0x1C8E48u: goto label_1c8e48;
            case 0x1C8E4Cu: goto label_1c8e4c;
            case 0x1C8E50u: goto label_1c8e50;
            case 0x1C8E54u: goto label_1c8e54;
            case 0x1C8E58u: goto label_1c8e58;
            case 0x1C8E5Cu: goto label_1c8e5c;
            case 0x1C8E60u: goto label_1c8e60;
            case 0x1C8E64u: goto label_1c8e64;
            case 0x1C8E68u: goto label_1c8e68;
            case 0x1C8E6Cu: goto label_1c8e6c;
            case 0x1C8E70u: goto label_1c8e70;
            case 0x1C8E74u: goto label_1c8e74;
            case 0x1C8E78u: goto label_1c8e78;
            case 0x1C8E7Cu: goto label_1c8e7c;
            case 0x1C8E80u: goto label_1c8e80;
            case 0x1C8E84u: goto label_1c8e84;
            case 0x1C8E88u: goto label_1c8e88;
            case 0x1C8E8Cu: goto label_1c8e8c;
            case 0x1C8E90u: goto label_1c8e90;
            case 0x1C8E94u: goto label_1c8e94;
            case 0x1C8E98u: goto label_1c8e98;
            case 0x1C8E9Cu: goto label_1c8e9c;
            case 0x1C8EA0u: goto label_1c8ea0;
            case 0x1C8EA4u: goto label_1c8ea4;
            case 0x1C8EA8u: goto label_1c8ea8;
            case 0x1C8EACu: goto label_1c8eac;
            case 0x1C8EB0u: goto label_1c8eb0;
            case 0x1C8EB4u: goto label_1c8eb4;
            case 0x1C8EB8u: goto label_1c8eb8;
            case 0x1C8EBCu: goto label_1c8ebc;
            case 0x1C8EC0u: goto label_1c8ec0;
            case 0x1C8EC4u: goto label_1c8ec4;
            case 0x1C8EC8u: goto label_1c8ec8;
            case 0x1C8ECCu: goto label_1c8ecc;
            case 0x1C8ED0u: goto label_1c8ed0;
            case 0x1C8ED4u: goto label_1c8ed4;
            case 0x1C8ED8u: goto label_1c8ed8;
            case 0x1C8EDCu: goto label_1c8edc;
            case 0x1C8EE0u: goto label_1c8ee0;
            case 0x1C8EE4u: goto label_1c8ee4;
            case 0x1C8EE8u: goto label_1c8ee8;
            case 0x1C8EECu: goto label_1c8eec;
            case 0x1C8EF0u: goto label_1c8ef0;
            case 0x1C8EF4u: goto label_1c8ef4;
            case 0x1C8EF8u: goto label_1c8ef8;
            case 0x1C8EFCu: goto label_1c8efc;
            case 0x1C8F00u: goto label_1c8f00;
            case 0x1C8F04u: goto label_1c8f04;
            case 0x1C8F08u: goto label_1c8f08;
            case 0x1C8F0Cu: goto label_1c8f0c;
            case 0x1C8F10u: goto label_1c8f10;
            case 0x1C8F14u: goto label_1c8f14;
            case 0x1C8F18u: goto label_1c8f18;
            case 0x1C8F1Cu: goto label_1c8f1c;
            case 0x1C8F20u: goto label_1c8f20;
            case 0x1C8F24u: goto label_1c8f24;
            case 0x1C8F28u: goto label_1c8f28;
            case 0x1C8F2Cu: goto label_1c8f2c;
            case 0x1C8F30u: goto label_1c8f30;
            case 0x1C8F34u: goto label_1c8f34;
            case 0x1C8F38u: goto label_1c8f38;
            case 0x1C8F3Cu: goto label_1c8f3c;
            case 0x1C8F40u: goto label_1c8f40;
            case 0x1C8F44u: goto label_1c8f44;
            case 0x1C8F48u: goto label_1c8f48;
            case 0x1C8F4Cu: goto label_1c8f4c;
            case 0x1C8F50u: goto label_1c8f50;
            case 0x1C8F54u: goto label_1c8f54;
            case 0x1C8F58u: goto label_1c8f58;
            case 0x1C8F5Cu: goto label_1c8f5c;
            case 0x1C8F60u: goto label_1c8f60;
            case 0x1C8F64u: goto label_1c8f64;
            case 0x1C8F68u: goto label_1c8f68;
            case 0x1C8F6Cu: goto label_1c8f6c;
            case 0x1C8F70u: goto label_1c8f70;
            case 0x1C8F74u: goto label_1c8f74;
            case 0x1C8F78u: goto label_1c8f78;
            case 0x1C8F7Cu: goto label_1c8f7c;
            case 0x1C8F80u: goto label_1c8f80;
            case 0x1C8F84u: goto label_1c8f84;
            case 0x1C8F88u: goto label_1c8f88;
            case 0x1C8F8Cu: goto label_1c8f8c;
            case 0x1C8F90u: goto label_1c8f90;
            case 0x1C8F94u: goto label_1c8f94;
            case 0x1C8F98u: goto label_1c8f98;
            case 0x1C8F9Cu: goto label_1c8f9c;
            case 0x1C8FA0u: goto label_1c8fa0;
            case 0x1C8FA4u: goto label_1c8fa4;
            case 0x1C8FA8u: goto label_1c8fa8;
            case 0x1C8FACu: goto label_1c8fac;
            case 0x1C8FB0u: goto label_1c8fb0;
            case 0x1C8FB4u: goto label_1c8fb4;
            case 0x1C8FB8u: goto label_1c8fb8;
            case 0x1C8FBCu: goto label_1c8fbc;
            case 0x1C8FC0u: goto label_1c8fc0;
            case 0x1C8FC4u: goto label_1c8fc4;
            case 0x1C8FC8u: goto label_1c8fc8;
            case 0x1C8FCCu: goto label_1c8fcc;
            case 0x1C8FD0u: goto label_1c8fd0;
            case 0x1C8FD4u: goto label_1c8fd4;
            case 0x1C8FD8u: goto label_1c8fd8;
            case 0x1C8FDCu: goto label_1c8fdc;
            case 0x1C8FE0u: goto label_1c8fe0;
            case 0x1C8FE4u: goto label_1c8fe4;
            case 0x1C8FE8u: goto label_1c8fe8;
            case 0x1C8FECu: goto label_1c8fec;
            case 0x1C8FF0u: goto label_1c8ff0;
            case 0x1C8FF4u: goto label_1c8ff4;
            case 0x1C8FF8u: goto label_1c8ff8;
            case 0x1C8FFCu: goto label_1c8ffc;
            case 0x1C9000u: goto label_1c9000;
            case 0x1C9004u: goto label_1c9004;
            case 0x1C9008u: goto label_1c9008;
            case 0x1C900Cu: goto label_1c900c;
            case 0x1C9010u: goto label_1c9010;
            case 0x1C9014u: goto label_1c9014;
            case 0x1C9018u: goto label_1c9018;
            case 0x1C901Cu: goto label_1c901c;
            case 0x1C9020u: goto label_1c9020;
            case 0x1C9024u: goto label_1c9024;
            case 0x1C9028u: goto label_1c9028;
            case 0x1C902Cu: goto label_1c902c;
            case 0x1C9030u: goto label_1c9030;
            case 0x1C9034u: goto label_1c9034;
            case 0x1C9038u: goto label_1c9038;
            case 0x1C903Cu: goto label_1c903c;
            case 0x1C9040u: goto label_1c9040;
            case 0x1C9044u: goto label_1c9044;
            case 0x1C9048u: goto label_1c9048;
            case 0x1C904Cu: goto label_1c904c;
            case 0x1C9050u: goto label_1c9050;
            case 0x1C9054u: goto label_1c9054;
            case 0x1C9058u: goto label_1c9058;
            case 0x1C905Cu: goto label_1c905c;
            case 0x1C9060u: goto label_1c9060;
            case 0x1C9064u: goto label_1c9064;
            case 0x1C9068u: goto label_1c9068;
            case 0x1C906Cu: goto label_1c906c;
            case 0x1C9070u: goto label_1c9070;
            case 0x1C9074u: goto label_1c9074;
            case 0x1C9078u: goto label_1c9078;
            case 0x1C907Cu: goto label_1c907c;
            case 0x1C9080u: goto label_1c9080;
            case 0x1C9084u: goto label_1c9084;
            case 0x1C9088u: goto label_1c9088;
            case 0x1C908Cu: goto label_1c908c;
            case 0x1C9090u: goto label_1c9090;
            case 0x1C9094u: goto label_1c9094;
            case 0x1C9098u: goto label_1c9098;
            case 0x1C909Cu: goto label_1c909c;
            case 0x1C90A0u: goto label_1c90a0;
            case 0x1C90A4u: goto label_1c90a4;
            case 0x1C90A8u: goto label_1c90a8;
            case 0x1C90ACu: goto label_1c90ac;
            case 0x1C90B0u: goto label_1c90b0;
            case 0x1C90B4u: goto label_1c90b4;
            case 0x1C90B8u: goto label_1c90b8;
            case 0x1C90BCu: goto label_1c90bc;
            case 0x1C90C0u: goto label_1c90c0;
            case 0x1C90C4u: goto label_1c90c4;
            case 0x1C90C8u: goto label_1c90c8;
            case 0x1C90CCu: goto label_1c90cc;
            case 0x1C90D0u: goto label_1c90d0;
            case 0x1C90D4u: goto label_1c90d4;
            case 0x1C90D8u: goto label_1c90d8;
            case 0x1C90DCu: goto label_1c90dc;
            case 0x1C90E0u: goto label_1c90e0;
            case 0x1C90E4u: goto label_1c90e4;
            case 0x1C90E8u: goto label_1c90e8;
            case 0x1C90ECu: goto label_1c90ec;
            case 0x1C90F0u: goto label_1c90f0;
            case 0x1C90F4u: goto label_1c90f4;
            case 0x1C90F8u: goto label_1c90f8;
            case 0x1C90FCu: goto label_1c90fc;
            case 0x1C9100u: goto label_1c9100;
            case 0x1C9104u: goto label_1c9104;
            case 0x1C9108u: goto label_1c9108;
            case 0x1C910Cu: goto label_1c910c;
            case 0x1C9110u: goto label_1c9110;
            case 0x1C9114u: goto label_1c9114;
            case 0x1C9118u: goto label_1c9118;
            case 0x1C911Cu: goto label_1c911c;
            case 0x1C9120u: goto label_1c9120;
            case 0x1C9124u: goto label_1c9124;
            case 0x1C9128u: goto label_1c9128;
            case 0x1C912Cu: goto label_1c912c;
            case 0x1C9130u: goto label_1c9130;
            case 0x1C9134u: goto label_1c9134;
            case 0x1C9138u: goto label_1c9138;
            case 0x1C913Cu: goto label_1c913c;
            case 0x1C9140u: goto label_1c9140;
            case 0x1C9144u: goto label_1c9144;
            case 0x1C9148u: goto label_1c9148;
            case 0x1C914Cu: goto label_1c914c;
            case 0x1C9150u: goto label_1c9150;
            case 0x1C9154u: goto label_1c9154;
            case 0x1C9158u: goto label_1c9158;
            case 0x1C915Cu: goto label_1c915c;
            case 0x1C9160u: goto label_1c9160;
            case 0x1C9164u: goto label_1c9164;
            case 0x1C9168u: goto label_1c9168;
            case 0x1C916Cu: goto label_1c916c;
            case 0x1C9170u: goto label_1c9170;
            case 0x1C9174u: goto label_1c9174;
            case 0x1C9178u: goto label_1c9178;
            case 0x1C917Cu: goto label_1c917c;
            case 0x1C9180u: goto label_1c9180;
            case 0x1C9184u: goto label_1c9184;
            case 0x1C9188u: goto label_1c9188;
            case 0x1C918Cu: goto label_1c918c;
            case 0x1C9190u: goto label_1c9190;
            case 0x1C9194u: goto label_1c9194;
            case 0x1C9198u: goto label_1c9198;
            case 0x1C919Cu: goto label_1c919c;
            case 0x1C91A0u: goto label_1c91a0;
            case 0x1C91A4u: goto label_1c91a4;
            case 0x1C91A8u: goto label_1c91a8;
            case 0x1C91ACu: goto label_1c91ac;
            case 0x1C91B0u: goto label_1c91b0;
            case 0x1C91B4u: goto label_1c91b4;
            case 0x1C91B8u: goto label_1c91b8;
            case 0x1C91BCu: goto label_1c91bc;
            case 0x1C91C0u: goto label_1c91c0;
            case 0x1C91C4u: goto label_1c91c4;
            case 0x1C91C8u: goto label_1c91c8;
            case 0x1C91CCu: goto label_1c91cc;
            case 0x1C91D0u: goto label_1c91d0;
            case 0x1C91D4u: goto label_1c91d4;
            case 0x1C91D8u: goto label_1c91d8;
            case 0x1C91DCu: goto label_1c91dc;
            case 0x1C91E0u: goto label_1c91e0;
            case 0x1C91E4u: goto label_1c91e4;
            case 0x1C91E8u: goto label_1c91e8;
            case 0x1C91ECu: goto label_1c91ec;
            case 0x1C91F0u: goto label_1c91f0;
            case 0x1C91F4u: goto label_1c91f4;
            case 0x1C91F8u: goto label_1c91f8;
            case 0x1C91FCu: goto label_1c91fc;
            case 0x1C9200u: goto label_1c9200;
            case 0x1C9204u: goto label_1c9204;
            case 0x1C9208u: goto label_1c9208;
            case 0x1C920Cu: goto label_1c920c;
            case 0x1C9210u: goto label_1c9210;
            case 0x1C9214u: goto label_1c9214;
            case 0x1C9218u: goto label_1c9218;
            case 0x1C921Cu: goto label_1c921c;
            case 0x1C9220u: goto label_1c9220;
            case 0x1C9224u: goto label_1c9224;
            case 0x1C9228u: goto label_1c9228;
            case 0x1C922Cu: goto label_1c922c;
            case 0x1C9230u: goto label_1c9230;
            case 0x1C9234u: goto label_1c9234;
            case 0x1C9238u: goto label_1c9238;
            case 0x1C923Cu: goto label_1c923c;
            case 0x1C9240u: goto label_1c9240;
            case 0x1C9244u: goto label_1c9244;
            case 0x1C9248u: goto label_1c9248;
            case 0x1C924Cu: goto label_1c924c;
            case 0x1C9250u: goto label_1c9250;
            case 0x1C9254u: goto label_1c9254;
            case 0x1C9258u: goto label_1c9258;
            case 0x1C925Cu: goto label_1c925c;
            case 0x1C9260u: goto label_1c9260;
            case 0x1C9264u: goto label_1c9264;
            case 0x1C9268u: goto label_1c9268;
            case 0x1C926Cu: goto label_1c926c;
            case 0x1C9270u: goto label_1c9270;
            case 0x1C9274u: goto label_1c9274;
            case 0x1C9278u: goto label_1c9278;
            case 0x1C927Cu: goto label_1c927c;
            case 0x1C9280u: goto label_1c9280;
            case 0x1C9284u: goto label_1c9284;
            case 0x1C9288u: goto label_1c9288;
            case 0x1C928Cu: goto label_1c928c;
            case 0x1C9290u: goto label_1c9290;
            case 0x1C9294u: goto label_1c9294;
            case 0x1C9298u: goto label_1c9298;
            case 0x1C929Cu: goto label_1c929c;
            case 0x1C92A0u: goto label_1c92a0;
            case 0x1C92A4u: goto label_1c92a4;
            case 0x1C92A8u: goto label_1c92a8;
            case 0x1C92ACu: goto label_1c92ac;
            case 0x1C92B0u: goto label_1c92b0;
            case 0x1C92B4u: goto label_1c92b4;
            case 0x1C92B8u: goto label_1c92b8;
            case 0x1C92BCu: goto label_1c92bc;
            case 0x1C92C0u: goto label_1c92c0;
            case 0x1C92C4u: goto label_1c92c4;
            case 0x1C92C8u: goto label_1c92c8;
            case 0x1C92CCu: goto label_1c92cc;
            case 0x1C92D0u: goto label_1c92d0;
            case 0x1C92D4u: goto label_1c92d4;
            case 0x1C92D8u: goto label_1c92d8;
            case 0x1C92DCu: goto label_1c92dc;
            case 0x1C92E0u: goto label_1c92e0;
            case 0x1C92E4u: goto label_1c92e4;
            case 0x1C92E8u: goto label_1c92e8;
            case 0x1C92ECu: goto label_1c92ec;
            case 0x1C92F0u: goto label_1c92f0;
            case 0x1C92F4u: goto label_1c92f4;
            case 0x1C92F8u: goto label_1c92f8;
            case 0x1C92FCu: goto label_1c92fc;
            case 0x1C9300u: goto label_1c9300;
            case 0x1C9304u: goto label_1c9304;
            case 0x1C9308u: goto label_1c9308;
            case 0x1C930Cu: goto label_1c930c;
            case 0x1C9310u: goto label_1c9310;
            case 0x1C9314u: goto label_1c9314;
            case 0x1C9318u: goto label_1c9318;
            case 0x1C931Cu: goto label_1c931c;
            case 0x1C9320u: goto label_1c9320;
            case 0x1C9324u: goto label_1c9324;
            case 0x1C9328u: goto label_1c9328;
            case 0x1C932Cu: goto label_1c932c;
            case 0x1C9330u: goto label_1c9330;
            case 0x1C9334u: goto label_1c9334;
            case 0x1C9338u: goto label_1c9338;
            case 0x1C933Cu: goto label_1c933c;
            case 0x1C9340u: goto label_1c9340;
            case 0x1C9344u: goto label_1c9344;
            case 0x1C9348u: goto label_1c9348;
            case 0x1C934Cu: goto label_1c934c;
            case 0x1C9350u: goto label_1c9350;
            case 0x1C9354u: goto label_1c9354;
            case 0x1C9358u: goto label_1c9358;
            case 0x1C935Cu: goto label_1c935c;
            case 0x1C9360u: goto label_1c9360;
            case 0x1C9364u: goto label_1c9364;
            case 0x1C9368u: goto label_1c9368;
            case 0x1C936Cu: goto label_1c936c;
            case 0x1C9370u: goto label_1c9370;
            case 0x1C9374u: goto label_1c9374;
            case 0x1C9378u: goto label_1c9378;
            case 0x1C937Cu: goto label_1c937c;
            case 0x1C9380u: goto label_1c9380;
            case 0x1C9384u: goto label_1c9384;
            case 0x1C9388u: goto label_1c9388;
            case 0x1C938Cu: goto label_1c938c;
            case 0x1C9390u: goto label_1c9390;
            case 0x1C9394u: goto label_1c9394;
            case 0x1C9398u: goto label_1c9398;
            case 0x1C939Cu: goto label_1c939c;
            case 0x1C93A0u: goto label_1c93a0;
            case 0x1C93A4u: goto label_1c93a4;
            case 0x1C93A8u: goto label_1c93a8;
            case 0x1C93ACu: goto label_1c93ac;
            case 0x1C93B0u: goto label_1c93b0;
            case 0x1C93B4u: goto label_1c93b4;
            case 0x1C93B8u: goto label_1c93b8;
            case 0x1C93BCu: goto label_1c93bc;
            case 0x1C93C0u: goto label_1c93c0;
            case 0x1C93C4u: goto label_1c93c4;
            case 0x1C93C8u: goto label_1c93c8;
            case 0x1C93CCu: goto label_1c93cc;
            case 0x1C93D0u: goto label_1c93d0;
            case 0x1C93D4u: goto label_1c93d4;
            case 0x1C93D8u: goto label_1c93d8;
            case 0x1C93DCu: goto label_1c93dc;
            case 0x1C93E0u: goto label_1c93e0;
            case 0x1C93E4u: goto label_1c93e4;
            case 0x1C93E8u: goto label_1c93e8;
            case 0x1C93ECu: goto label_1c93ec;
            case 0x1C93F0u: goto label_1c93f0;
            case 0x1C93F4u: goto label_1c93f4;
            case 0x1C93F8u: goto label_1c93f8;
            case 0x1C93FCu: goto label_1c93fc;
            case 0x1C9400u: goto label_1c9400;
            case 0x1C9404u: goto label_1c9404;
            case 0x1C9408u: goto label_1c9408;
            case 0x1C940Cu: goto label_1c940c;
            case 0x1C9410u: goto label_1c9410;
            case 0x1C9414u: goto label_1c9414;
            case 0x1C9418u: goto label_1c9418;
            case 0x1C941Cu: goto label_1c941c;
            case 0x1C9420u: goto label_1c9420;
            case 0x1C9424u: goto label_1c9424;
            case 0x1C9428u: goto label_1c9428;
            case 0x1C942Cu: goto label_1c942c;
            case 0x1C9430u: goto label_1c9430;
            case 0x1C9434u: goto label_1c9434;
            case 0x1C9438u: goto label_1c9438;
            case 0x1C943Cu: goto label_1c943c;
            case 0x1C9440u: goto label_1c9440;
            case 0x1C9444u: goto label_1c9444;
            case 0x1C9448u: goto label_1c9448;
            case 0x1C944Cu: goto label_1c944c;
            case 0x1C9450u: goto label_1c9450;
            case 0x1C9454u: goto label_1c9454;
            case 0x1C9458u: goto label_1c9458;
            case 0x1C945Cu: goto label_1c945c;
            case 0x1C9460u: goto label_1c9460;
            case 0x1C9464u: goto label_1c9464;
            case 0x1C9468u: goto label_1c9468;
            case 0x1C946Cu: goto label_1c946c;
            case 0x1C9470u: goto label_1c9470;
            case 0x1C9474u: goto label_1c9474;
            case 0x1C9478u: goto label_1c9478;
            case 0x1C947Cu: goto label_1c947c;
            case 0x1C9480u: goto label_1c9480;
            case 0x1C9484u: goto label_1c9484;
            case 0x1C9488u: goto label_1c9488;
            case 0x1C948Cu: goto label_1c948c;
            case 0x1C9490u: goto label_1c9490;
            case 0x1C9494u: goto label_1c9494;
            case 0x1C9498u: goto label_1c9498;
            case 0x1C949Cu: goto label_1c949c;
            case 0x1C94A0u: goto label_1c94a0;
            case 0x1C94A4u: goto label_1c94a4;
            case 0x1C94A8u: goto label_1c94a8;
            case 0x1C94ACu: goto label_1c94ac;
            case 0x1C94B0u: goto label_1c94b0;
            case 0x1C94B4u: goto label_1c94b4;
            case 0x1C94B8u: goto label_1c94b8;
            case 0x1C94BCu: goto label_1c94bc;
            case 0x1C94C0u: goto label_1c94c0;
            case 0x1C94C4u: goto label_1c94c4;
            case 0x1C94C8u: goto label_1c94c8;
            case 0x1C94CCu: goto label_1c94cc;
            case 0x1C94D0u: goto label_1c94d0;
            case 0x1C94D4u: goto label_1c94d4;
            case 0x1C94D8u: goto label_1c94d8;
            case 0x1C94DCu: goto label_1c94dc;
            case 0x1C94E0u: goto label_1c94e0;
            case 0x1C94E4u: goto label_1c94e4;
            case 0x1C94E8u: goto label_1c94e8;
            case 0x1C94ECu: goto label_1c94ec;
            case 0x1C94F0u: goto label_1c94f0;
            case 0x1C94F4u: goto label_1c94f4;
            case 0x1C94F8u: goto label_1c94f8;
            case 0x1C94FCu: goto label_1c94fc;
            case 0x1C9500u: goto label_1c9500;
            case 0x1C9504u: goto label_1c9504;
            case 0x1C9508u: goto label_1c9508;
            case 0x1C950Cu: goto label_1c950c;
            case 0x1C9510u: goto label_1c9510;
            case 0x1C9514u: goto label_1c9514;
            case 0x1C9518u: goto label_1c9518;
            case 0x1C951Cu: goto label_1c951c;
            case 0x1C9520u: goto label_1c9520;
            case 0x1C9524u: goto label_1c9524;
            case 0x1C9528u: goto label_1c9528;
            case 0x1C952Cu: goto label_1c952c;
            case 0x1C9530u: goto label_1c9530;
            case 0x1C9534u: goto label_1c9534;
            case 0x1C9538u: goto label_1c9538;
            case 0x1C953Cu: goto label_1c953c;
            case 0x1C9540u: goto label_1c9540;
            case 0x1C9544u: goto label_1c9544;
            case 0x1C9548u: goto label_1c9548;
            case 0x1C954Cu: goto label_1c954c;
            case 0x1C9550u: goto label_1c9550;
            case 0x1C9554u: goto label_1c9554;
            case 0x1C9558u: goto label_1c9558;
            case 0x1C955Cu: goto label_1c955c;
            case 0x1C9560u: goto label_1c9560;
            case 0x1C9564u: goto label_1c9564;
            case 0x1C9568u: goto label_1c9568;
            case 0x1C956Cu: goto label_1c956c;
            case 0x1C9570u: goto label_1c9570;
            case 0x1C9574u: goto label_1c9574;
            case 0x1C9578u: goto label_1c9578;
            case 0x1C957Cu: goto label_1c957c;
            case 0x1C9580u: goto label_1c9580;
            case 0x1C9584u: goto label_1c9584;
            case 0x1C9588u: goto label_1c9588;
            case 0x1C958Cu: goto label_1c958c;
            case 0x1C9590u: goto label_1c9590;
            case 0x1C9594u: goto label_1c9594;
            case 0x1C9598u: goto label_1c9598;
            case 0x1C959Cu: goto label_1c959c;
            case 0x1C95A0u: goto label_1c95a0;
            case 0x1C95A4u: goto label_1c95a4;
            case 0x1C95A8u: goto label_1c95a8;
            case 0x1C95ACu: goto label_1c95ac;
            case 0x1C95B0u: goto label_1c95b0;
            case 0x1C95B4u: goto label_1c95b4;
            case 0x1C95B8u: goto label_1c95b8;
            case 0x1C95BCu: goto label_1c95bc;
            case 0x1C95C0u: goto label_1c95c0;
            case 0x1C95C4u: goto label_1c95c4;
            case 0x1C95C8u: goto label_1c95c8;
            case 0x1C95CCu: goto label_1c95cc;
            case 0x1C95D0u: goto label_1c95d0;
            case 0x1C95D4u: goto label_1c95d4;
            case 0x1C95D8u: goto label_1c95d8;
            case 0x1C95DCu: goto label_1c95dc;
            case 0x1C95E0u: goto label_1c95e0;
            case 0x1C95E4u: goto label_1c95e4;
            case 0x1C95E8u: goto label_1c95e8;
            case 0x1C95ECu: goto label_1c95ec;
            case 0x1C95F0u: goto label_1c95f0;
            case 0x1C95F4u: goto label_1c95f4;
            case 0x1C95F8u: goto label_1c95f8;
            case 0x1C95FCu: goto label_1c95fc;
            case 0x1C9600u: goto label_1c9600;
            case 0x1C9604u: goto label_1c9604;
            case 0x1C9608u: goto label_1c9608;
            case 0x1C960Cu: goto label_1c960c;
            case 0x1C9610u: goto label_1c9610;
            case 0x1C9614u: goto label_1c9614;
            case 0x1C9618u: goto label_1c9618;
            case 0x1C961Cu: goto label_1c961c;
            case 0x1C9620u: goto label_1c9620;
            case 0x1C9624u: goto label_1c9624;
            case 0x1C9628u: goto label_1c9628;
            case 0x1C962Cu: goto label_1c962c;
            case 0x1C9630u: goto label_1c9630;
            case 0x1C9634u: goto label_1c9634;
            case 0x1C9638u: goto label_1c9638;
            case 0x1C963Cu: goto label_1c963c;
            case 0x1C9640u: goto label_1c9640;
            case 0x1C9644u: goto label_1c9644;
            case 0x1C9648u: goto label_1c9648;
            case 0x1C964Cu: goto label_1c964c;
            case 0x1C9650u: goto label_1c9650;
            case 0x1C9654u: goto label_1c9654;
            case 0x1C9658u: goto label_1c9658;
            case 0x1C965Cu: goto label_1c965c;
            case 0x1C9660u: goto label_1c9660;
            case 0x1C9664u: goto label_1c9664;
            case 0x1C9668u: goto label_1c9668;
            case 0x1C966Cu: goto label_1c966c;
            case 0x1C9670u: goto label_1c9670;
            case 0x1C9674u: goto label_1c9674;
            case 0x1C9678u: goto label_1c9678;
            case 0x1C967Cu: goto label_1c967c;
            case 0x1C9680u: goto label_1c9680;
            case 0x1C9684u: goto label_1c9684;
            case 0x1C9688u: goto label_1c9688;
            case 0x1C968Cu: goto label_1c968c;
            case 0x1C9690u: goto label_1c9690;
            case 0x1C9694u: goto label_1c9694;
            case 0x1C9698u: goto label_1c9698;
            case 0x1C969Cu: goto label_1c969c;
            case 0x1C96A0u: goto label_1c96a0;
            case 0x1C96A4u: goto label_1c96a4;
            case 0x1C96A8u: goto label_1c96a8;
            case 0x1C96ACu: goto label_1c96ac;
            case 0x1C96B0u: goto label_1c96b0;
            case 0x1C96B4u: goto label_1c96b4;
            case 0x1C96B8u: goto label_1c96b8;
            case 0x1C96BCu: goto label_1c96bc;
            case 0x1C96C0u: goto label_1c96c0;
            case 0x1C96C4u: goto label_1c96c4;
            case 0x1C96C8u: goto label_1c96c8;
            case 0x1C96CCu: goto label_1c96cc;
            case 0x1C96D0u: goto label_1c96d0;
            case 0x1C96D4u: goto label_1c96d4;
            case 0x1C96D8u: goto label_1c96d8;
            case 0x1C96DCu: goto label_1c96dc;
            case 0x1C96E0u: goto label_1c96e0;
            case 0x1C96E4u: goto label_1c96e4;
            case 0x1C96E8u: goto label_1c96e8;
            case 0x1C96ECu: goto label_1c96ec;
            case 0x1C96F0u: goto label_1c96f0;
            case 0x1C96F4u: goto label_1c96f4;
            case 0x1C96F8u: goto label_1c96f8;
            case 0x1C96FCu: goto label_1c96fc;
            case 0x1C9700u: goto label_1c9700;
            case 0x1C9704u: goto label_1c9704;
            case 0x1C9708u: goto label_1c9708;
            case 0x1C970Cu: goto label_1c970c;
            case 0x1C9710u: goto label_1c9710;
            case 0x1C9714u: goto label_1c9714;
            case 0x1C9718u: goto label_1c9718;
            case 0x1C971Cu: goto label_1c971c;
            case 0x1C9720u: goto label_1c9720;
            case 0x1C9724u: goto label_1c9724;
            case 0x1C9728u: goto label_1c9728;
            case 0x1C972Cu: goto label_1c972c;
            case 0x1C9730u: goto label_1c9730;
            case 0x1C9734u: goto label_1c9734;
            case 0x1C9738u: goto label_1c9738;
            case 0x1C973Cu: goto label_1c973c;
            case 0x1C9740u: goto label_1c9740;
            case 0x1C9744u: goto label_1c9744;
            case 0x1C9748u: goto label_1c9748;
            case 0x1C974Cu: goto label_1c974c;
            case 0x1C9750u: goto label_1c9750;
            case 0x1C9754u: goto label_1c9754;
            case 0x1C9758u: goto label_1c9758;
            case 0x1C975Cu: goto label_1c975c;
            case 0x1C9760u: goto label_1c9760;
            case 0x1C9764u: goto label_1c9764;
            case 0x1C9768u: goto label_1c9768;
            case 0x1C976Cu: goto label_1c976c;
            case 0x1C9770u: goto label_1c9770;
            case 0x1C9774u: goto label_1c9774;
            case 0x1C9778u: goto label_1c9778;
            case 0x1C977Cu: goto label_1c977c;
            case 0x1C9780u: goto label_1c9780;
            case 0x1C9784u: goto label_1c9784;
            case 0x1C9788u: goto label_1c9788;
            case 0x1C978Cu: goto label_1c978c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1c9788:
    ctx->pc = 0x1C9790u;
}

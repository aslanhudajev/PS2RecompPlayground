#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex2_05Move
// Address: 0x1cedd0 - 0x1cf548
void Enex2_05Move_0x1cedd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex2_05Move_0x1cedd0");
#endif

    ctx->pc = 0x1cedd0u;

label_1cedd0:
    // 0x1cedd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cedd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1cedd4:
    // 0x1cedd4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1cedd8:
    // 0x1cedd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cedd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ceddc:
    // 0x1ceddc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ceddcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cede0:
    // 0x1cede0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cede0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cede4:
    // 0x1cede4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cede4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cede8:
    // 0x1cede8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cede8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cedec:
    // 0x1cedec: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1cedecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cedf0:
    // 0x1cedf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cedf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cedf4:
    // 0x1cedf4: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1cedf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cedf8:
    // 0x1cedf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cedf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cedfc:
    // 0x1cedfc: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1cedfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1cee00:
    // 0x1cee00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cee04:
    // 0x1cee04: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1cee04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cee08:
    // 0x1cee08: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1cee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cee0c:
    // 0x1cee0c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cee0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cee10:
    // 0x1cee10: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1cee10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1cee14:
    // 0x1cee14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cee18:
    // 0x1cee18: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1cee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cee1c:
    // 0x1cee1c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1cee1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cee20:
    // 0x1cee20: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cee20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cee24:
    // 0x1cee24: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1cee24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1cee28:
    // 0x1cee28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cee2c:
    // 0x1cee2c: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1cee2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cee30:
    // 0x1cee30: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1cee30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cee34:
    // 0x1cee34: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cee34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cee38:
    // 0x1cee38: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1cee38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1cee3c:
    // 0x1cee3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cee40:
    // 0x1cee40: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1cee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cee44:
    // 0x1cee44: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1cee44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cee48:
    // 0x1cee48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cee48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cee4c:
    // 0x1cee4c: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1cee4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1cee50:
    // 0x1cee50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cee54:
    // 0x1cee54: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1cee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cee58:
    // 0x1cee58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cee58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cee5c:
    // 0x1cee5c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1cee60:
    if (ctx->pc == 0x1CEE60u) {
        ctx->pc = 0x1CEE60u;
            // 0x1cee60: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1CEE64u;
        goto label_1cee64;
    }
    ctx->pc = 0x1CEE5Cu;
    {
        const bool branch_taken_0x1cee5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE5Cu;
            // 0x1cee60: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee5c) {
            ctx->pc = 0x1CEE80u;
            goto label_1cee80;
        }
    }
    ctx->pc = 0x1CEE64u;
label_1cee64:
    // 0x1cee64: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cee68:
    // 0x1cee68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cee68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cee6c:
    // 0x1cee6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cee6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cee70:
    // 0x1cee70: 0x0  nop
    ctx->pc = 0x1cee70u;
    // NOP
label_1cee74:
    // 0x1cee74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cee74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cee78:
    // 0x1cee78: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1cee78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1cee7c:
    // 0x1cee7c: 0x0  nop
    ctx->pc = 0x1cee7cu;
    // NOP
label_1cee80:
    // 0x1cee80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cee84:
    // 0x1cee84: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cee84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1cee88:
    // 0x1cee88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cee88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cee8c:
    // 0x1cee8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cee8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cee90:
    // 0x1cee90: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1cee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cee94:
    // 0x1cee94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cee94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cee98:
    // 0x1cee98: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1cee9c:
    if (ctx->pc == 0x1CEE9Cu) {
        ctx->pc = 0x1CEE9Cu;
            // 0x1cee9c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1CEEA0u;
        goto label_1ceea0;
    }
    ctx->pc = 0x1CEE98u;
    {
        const bool branch_taken_0x1cee98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE98u;
            // 0x1cee9c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee98) {
            ctx->pc = 0x1CEEB8u;
            goto label_1ceeb8;
        }
    }
    ctx->pc = 0x1CEEA0u;
label_1ceea0:
    // 0x1ceea0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ceea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ceea4:
    // 0x1ceea4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ceea4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ceea8:
    // 0x1ceea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ceea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ceeac:
    // 0x1ceeac: 0x0  nop
    ctx->pc = 0x1ceeacu;
    // NOP
label_1ceeb0:
    // 0x1ceeb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ceeb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ceeb4:
    // 0x1ceeb4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ceeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ceeb8:
    // 0x1ceeb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ceeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ceebc:
    // 0x1ceebc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1ceebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1ceec0:
    // 0x1ceec0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ceec0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ceec4:
    // 0x1ceec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ceec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ceec8:
    // 0x1ceec8: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1ceec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ceecc:
    // 0x1ceecc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ceeccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ceed0:
    // 0x1ceed0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ceed4:
    if (ctx->pc == 0x1CEED4u) {
        ctx->pc = 0x1CEED4u;
            // 0x1ceed4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1CEED8u;
        goto label_1ceed8;
    }
    ctx->pc = 0x1CEED0u;
    {
        const bool branch_taken_0x1ceed0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEED0u;
            // 0x1ceed4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceed0) {
            ctx->pc = 0x1CEEF0u;
            goto label_1ceef0;
        }
    }
    ctx->pc = 0x1CEED8u;
label_1ceed8:
    // 0x1ceed8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ceed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ceedc:
    // 0x1ceedc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ceedcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ceee0:
    // 0x1ceee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ceee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ceee4:
    // 0x1ceee4: 0x0  nop
    ctx->pc = 0x1ceee4u;
    // NOP
label_1ceee8:
    // 0x1ceee8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ceee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ceeec:
    // 0x1ceeec: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ceeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ceef0:
    // 0x1ceef0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ceef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ceef4:
    // 0x1ceef4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ceef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1ceef8:
    // 0x1ceef8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ceef8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ceefc:
    // 0x1ceefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ceefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cef00:
    // 0x1cef00: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1cef00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cef04:
    // 0x1cef04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cef04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cef08:
    // 0x1cef08: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1cef0c:
    if (ctx->pc == 0x1CEF0Cu) {
        ctx->pc = 0x1CEF0Cu;
            // 0x1cef0c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1CEF10u;
        goto label_1cef10;
    }
    ctx->pc = 0x1CEF08u;
    {
        const bool branch_taken_0x1cef08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF08u;
            // 0x1cef0c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef08) {
            ctx->pc = 0x1CEF28u;
            goto label_1cef28;
        }
    }
    ctx->pc = 0x1CEF10u;
label_1cef10:
    // 0x1cef10: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cef10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cef14:
    // 0x1cef14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cef14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cef18:
    // 0x1cef18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cef18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cef1c:
    // 0x1cef1c: 0x0  nop
    ctx->pc = 0x1cef1cu;
    // NOP
label_1cef20:
    // 0x1cef20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cef20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cef24:
    // 0x1cef24: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cef24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cef28:
    // 0x1cef28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cef2c:
    // 0x1cef2c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1cef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1cef30:
    // 0x1cef30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cef30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cef34:
    // 0x1cef34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cef34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cef38:
    // 0x1cef38: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1cef38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cef3c:
    // 0x1cef3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cef3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cef40:
    // 0x1cef40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1cef44:
    if (ctx->pc == 0x1CEF44u) {
        ctx->pc = 0x1CEF44u;
            // 0x1cef44: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1CEF48u;
        goto label_1cef48;
    }
    ctx->pc = 0x1CEF40u;
    {
        const bool branch_taken_0x1cef40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF40u;
            // 0x1cef44: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef40) {
            ctx->pc = 0x1CEF60u;
            goto label_1cef60;
        }
    }
    ctx->pc = 0x1CEF48u;
label_1cef48:
    // 0x1cef48: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cef48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cef4c:
    // 0x1cef4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cef4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cef50:
    // 0x1cef50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cef50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cef54:
    // 0x1cef54: 0x0  nop
    ctx->pc = 0x1cef54u;
    // NOP
label_1cef58:
    // 0x1cef58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cef58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cef5c:
    // 0x1cef5c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cef5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cef60:
    // 0x1cef60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cef64:
    // 0x1cef64: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cef64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1cef68:
    // 0x1cef68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cef68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cef6c:
    // 0x1cef6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cef6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cef70:
    // 0x1cef70: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1cef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cef74:
    // 0x1cef74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cef74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cef78:
    // 0x1cef78: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1cef7c:
    if (ctx->pc == 0x1CEF7Cu) {
        ctx->pc = 0x1CEF7Cu;
            // 0x1cef7c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1CEF80u;
        goto label_1cef80;
    }
    ctx->pc = 0x1CEF78u;
    {
        const bool branch_taken_0x1cef78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF78u;
            // 0x1cef7c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef78) {
            ctx->pc = 0x1CEF98u;
            goto label_1cef98;
        }
    }
    ctx->pc = 0x1CEF80u;
label_1cef80:
    // 0x1cef80: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cef80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cef84:
    // 0x1cef84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cef84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cef88:
    // 0x1cef88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cef88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cef8c:
    // 0x1cef8c: 0x0  nop
    ctx->pc = 0x1cef8cu;
    // NOP
label_1cef90:
    // 0x1cef90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cef90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cef94:
    // 0x1cef94: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cef94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cef98:
    // 0x1cef98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cef9c:
    // 0x1cef9c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1cef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1cefa0:
    // 0x1cefa0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1cefa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cefa4:
    // 0x1cefa4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1cefa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cefa8:
    // 0x1cefa8: 0xc073d54  jal         func_1CF550
label_1cefac:
    if (ctx->pc == 0x1CEFACu) {
        ctx->pc = 0x1CEFACu;
            // 0x1cefac: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x1CEFB0u;
        goto label_1cefb0;
    }
    ctx->pc = 0x1CEFA8u;
    SET_GPR_U32(ctx, 31, 0x1CEFB0u);
    ctx->pc = 0x1CEFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFA8u;
            // 0x1cefac: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF550u;
    if (runtime->hasFunction(0x1CF550u)) {
        auto targetFn = runtime->lookupFunction(0x1CF550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFB0u; }
        if (ctx->pc != 0x1CEFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1cf550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFB0u; }
        if (ctx->pc != 0x1CEFB0u) { return; }
    }
    ctx->pc = 0x1CEFB0u;
label_1cefb0:
    // 0x1cefb0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1cefb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1cefb4:
    // 0x1cefb4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cefb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cefb8:
    // 0x1cefb8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1cefb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_1cefbc:
    // 0x1cefbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cefbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1cefc0:
    // 0x1cefc0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1cefc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1cefc4:
    // 0x1cefc4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1cefc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1cefc8:
    // 0x1cefc8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1cefcc:
    if (ctx->pc == 0x1CEFCCu) {
        ctx->pc = 0x1CEFCCu;
            // 0x1cefcc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1CEFD0u;
        goto label_1cefd0;
    }
    ctx->pc = 0x1CEFC8u;
    {
        const bool branch_taken_0x1cefc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CEFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFC8u;
            // 0x1cefcc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cefc8) {
            ctx->pc = 0x1CEFE0u;
            goto label_1cefe0;
        }
    }
    ctx->pc = 0x1CEFD0u;
label_1cefd0:
    // 0x1cefd0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1cefd4:
    if (ctx->pc == 0x1CEFD4u) {
        ctx->pc = 0x1CEFD8u;
        goto label_1cefd8;
    }
    ctx->pc = 0x1CEFD0u;
    {
        const bool branch_taken_0x1cefd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cefd0) {
            ctx->pc = 0x1CEFE0u;
            goto label_1cefe0;
        }
    }
    ctx->pc = 0x1CEFD8u;
label_1cefd8:
    // 0x1cefd8: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_1cefdc:
    if (ctx->pc == 0x1CEFDCu) {
        ctx->pc = 0x1CEFE0u;
        goto label_1cefe0;
    }
    ctx->pc = 0x1CEFD8u;
    {
        const bool branch_taken_0x1cefd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cefd8) {
            ctx->pc = 0x1CF2B8u;
            goto label_1cf2b8;
        }
    }
    ctx->pc = 0x1CEFE0u;
label_1cefe0:
    // 0x1cefe0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1cefe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1cefe4:
    // 0x1cefe4: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
label_1cefe8:
    if (ctx->pc == 0x1CEFE8u) {
        ctx->pc = 0x1CEFECu;
        goto label_1cefec;
    }
    ctx->pc = 0x1CEFE4u;
    {
        const bool branch_taken_0x1cefe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cefe4) {
            ctx->pc = 0x1CF148u;
            goto label_1cf148;
        }
    }
    ctx->pc = 0x1CEFECu;
label_1cefec:
    // 0x1cefec: 0xc040d72  jal         func_1035C8
label_1ceff0:
    if (ctx->pc == 0x1CEFF0u) {
        ctx->pc = 0x1CEFF0u;
            // 0x1ceff0: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1CEFF4u;
        goto label_1ceff4;
    }
    ctx->pc = 0x1CEFECu;
    SET_GPR_U32(ctx, 31, 0x1CEFF4u);
    ctx->pc = 0x1CEFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFECu;
            // 0x1ceff0: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFF4u; }
        if (ctx->pc != 0x1CEFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFF4u; }
        if (ctx->pc != 0x1CEFF4u) { return; }
    }
    ctx->pc = 0x1CEFF4u;
label_1ceff4:
    // 0x1ceff4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ceff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ceff8:
    // 0x1ceff8: 0xc040078  jal         func_1001E0
label_1ceffc:
    if (ctx->pc == 0x1CEFFCu) {
        ctx->pc = 0x1CEFFCu;
            // 0x1ceffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF000u;
        goto label_1cf000;
    }
    ctx->pc = 0x1CEFF8u;
    SET_GPR_U32(ctx, 31, 0x1CF000u);
    ctx->pc = 0x1CEFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFF8u;
            // 0x1ceffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF000u; }
        if (ctx->pc != 0x1CF000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF000u; }
        if (ctx->pc != 0x1CF000u) { return; }
    }
    ctx->pc = 0x1CF000u;
label_1cf000:
    // 0x1cf000: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1cf004:
    if (ctx->pc == 0x1CF004u) {
        ctx->pc = 0x1CF008u;
        goto label_1cf008;
    }
    ctx->pc = 0x1CF000u;
    {
        const bool branch_taken_0x1cf000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf000) {
            ctx->pc = 0x1CF028u;
            goto label_1cf028;
        }
    }
    ctx->pc = 0x1CF008u;
label_1cf008:
    // 0x1cf008: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1cf008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf00c:
    // 0x1cf00c: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1cf00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1cf010:
    // 0x1cf010: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1cf010u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1cf014:
    // 0x1cf014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf018:
    // 0x1cf018: 0x0  nop
    ctx->pc = 0x1cf018u;
    // NOP
label_1cf01c:
    // 0x1cf01c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cf01cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cf020:
    // 0x1cf020: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cf024:
    if (ctx->pc == 0x1CF024u) {
        ctx->pc = 0x1CF024u;
            // 0x1cf024: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1CF028u;
        goto label_1cf028;
    }
    ctx->pc = 0x1CF020u;
    {
        const bool branch_taken_0x1cf020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF020u;
            // 0x1cf024: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf020) {
            ctx->pc = 0x1CF030u;
            goto label_1cf030;
        }
    }
    ctx->pc = 0x1CF028u;
label_1cf028:
    // 0x1cf028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf02c:
    // 0x1cf02c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1cf02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1cf030:
    // 0x1cf030: 0xc040d72  jal         func_1035C8
label_1cf034:
    if (ctx->pc == 0x1CF034u) {
        ctx->pc = 0x1CF034u;
            // 0x1cf034: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1CF038u;
        goto label_1cf038;
    }
    ctx->pc = 0x1CF030u;
    SET_GPR_U32(ctx, 31, 0x1CF038u);
    ctx->pc = 0x1CF034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF030u;
            // 0x1cf034: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF038u; }
        if (ctx->pc != 0x1CF038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF038u; }
        if (ctx->pc != 0x1CF038u) { return; }
    }
    ctx->pc = 0x1CF038u;
label_1cf038:
    // 0x1cf038: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf03c:
    // 0x1cf03c: 0xc040078  jal         func_1001E0
label_1cf040:
    if (ctx->pc == 0x1CF040u) {
        ctx->pc = 0x1CF040u;
            // 0x1cf040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF044u;
        goto label_1cf044;
    }
    ctx->pc = 0x1CF03Cu;
    SET_GPR_U32(ctx, 31, 0x1CF044u);
    ctx->pc = 0x1CF040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF03Cu;
            // 0x1cf040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF044u; }
        if (ctx->pc != 0x1CF044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF044u; }
        if (ctx->pc != 0x1CF044u) { return; }
    }
    ctx->pc = 0x1CF044u;
label_1cf044:
    // 0x1cf044: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cf048:
    if (ctx->pc == 0x1CF048u) {
        ctx->pc = 0x1CF04Cu;
        goto label_1cf04c;
    }
    ctx->pc = 0x1CF044u;
    {
        const bool branch_taken_0x1cf044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf044) {
            ctx->pc = 0x1CF068u;
            goto label_1cf068;
        }
    }
    ctx->pc = 0x1CF04Cu;
label_1cf04c:
    // 0x1cf04c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1cf04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf050:
    // 0x1cf050: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1cf050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1cf054:
    // 0x1cf054: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cf054u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cf058:
    // 0x1cf058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf05c:
    // 0x1cf05c: 0x0  nop
    ctx->pc = 0x1cf05cu;
    // NOP
label_1cf060:
    // 0x1cf060: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cf060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cf064:
    // 0x1cf064: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1cf064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1cf068:
    // 0x1cf068: 0xc040d72  jal         func_1035C8
label_1cf06c:
    if (ctx->pc == 0x1CF06Cu) {
        ctx->pc = 0x1CF06Cu;
            // 0x1cf06c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1CF070u;
        goto label_1cf070;
    }
    ctx->pc = 0x1CF068u;
    SET_GPR_U32(ctx, 31, 0x1CF070u);
    ctx->pc = 0x1CF06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF068u;
            // 0x1cf06c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF070u; }
        if (ctx->pc != 0x1CF070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF070u; }
        if (ctx->pc != 0x1CF070u) { return; }
    }
    ctx->pc = 0x1CF070u;
label_1cf070:
    // 0x1cf070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf074:
    // 0x1cf074: 0xc04008c  jal         func_100230
label_1cf078:
    if (ctx->pc == 0x1CF078u) {
        ctx->pc = 0x1CF078u;
            // 0x1cf078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF07Cu;
        goto label_1cf07c;
    }
    ctx->pc = 0x1CF074u;
    SET_GPR_U32(ctx, 31, 0x1CF07Cu);
    ctx->pc = 0x1CF078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF074u;
            // 0x1cf078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF07Cu; }
        if (ctx->pc != 0x1CF07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF07Cu; }
        if (ctx->pc != 0x1CF07Cu) { return; }
    }
    ctx->pc = 0x1CF07Cu;
label_1cf07c:
    // 0x1cf07c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cf080:
    if (ctx->pc == 0x1CF080u) {
        ctx->pc = 0x1CF084u;
        goto label_1cf084;
    }
    ctx->pc = 0x1CF07Cu;
    {
        const bool branch_taken_0x1cf07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf07c) {
            ctx->pc = 0x1CF0A0u;
            goto label_1cf0a0;
        }
    }
    ctx->pc = 0x1CF084u;
label_1cf084:
    // 0x1cf084: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1cf084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf088:
    // 0x1cf088: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1cf088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1cf08c:
    // 0x1cf08c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cf08cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cf090:
    // 0x1cf090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf094:
    // 0x1cf094: 0x0  nop
    ctx->pc = 0x1cf094u;
    // NOP
label_1cf098:
    // 0x1cf098: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cf098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cf09c:
    // 0x1cf09c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1cf09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1cf0a0:
    // 0x1cf0a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1cf0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1cf0a4:
    // 0x1cf0a4: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1cf0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1cf0a8:
    // 0x1cf0a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cf0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cf0ac:
    // 0x1cf0ac: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1cf0acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cf0b0:
    // 0x1cf0b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1cf0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1cf0b4:
    // 0x1cf0b4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1cf0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1cf0b8:
    // 0x1cf0b8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1cf0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cf0bc:
    // 0x1cf0bc: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1cf0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1cf0c0:
    // 0x1cf0c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cf0c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf0c4:
    // 0x1cf0c4: 0x0  nop
    ctx->pc = 0x1cf0c4u;
    // NOP
label_1cf0c8:
    // 0x1cf0c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cf0c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cf0cc:
    // 0x1cf0cc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1cf0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1cf0d0:
    // 0x1cf0d0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cf0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cf0d4:
    // 0x1cf0d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cf0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf0d8:
    // 0x1cf0d8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1cf0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1cf0dc:
    // 0x1cf0dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf0e0:
    // 0x1cf0e0: 0x0  nop
    ctx->pc = 0x1cf0e0u;
    // NOP
label_1cf0e4:
    // 0x1cf0e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cf0e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cf0e8:
    // 0x1cf0e8: 0xc04b6ee  jal         func_12DBB8
label_1cf0ec:
    if (ctx->pc == 0x1CF0ECu) {
        ctx->pc = 0x1CF0ECu;
            // 0x1cf0ec: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x1CF0F0u;
        goto label_1cf0f0;
    }
    ctx->pc = 0x1CF0E8u;
    SET_GPR_U32(ctx, 31, 0x1CF0F0u);
    ctx->pc = 0x1CF0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF0E8u;
            // 0x1cf0ec: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF0F0u; }
        if (ctx->pc != 0x1CF0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF0F0u; }
        if (ctx->pc != 0x1CF0F0u) { return; }
    }
    ctx->pc = 0x1CF0F0u;
label_1cf0f0:
    // 0x1cf0f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cf0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf0f4:
    // 0x1cf0f4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1cf0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf0f8:
    // 0x1cf0f8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1cf0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf0fc:
    // 0x1cf0fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cf0fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1cf100:
    // 0x1cf100: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cf100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf104:
    // 0x1cf104: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1cf108:
    if (ctx->pc == 0x1CF108u) {
        ctx->pc = 0x1CF108u;
            // 0x1cf108: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1CF10Cu;
        goto label_1cf10c;
    }
    ctx->pc = 0x1CF104u;
    {
        const bool branch_taken_0x1cf104 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF104u;
            // 0x1cf108: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf104) {
            ctx->pc = 0x1CF118u;
            goto label_1cf118;
        }
    }
    ctx->pc = 0x1CF10Cu;
label_1cf10c:
    // 0x1cf10c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cf10cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cf110:
    // 0x1cf110: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1cf110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1cf114:
    // 0x1cf114: 0x0  nop
    ctx->pc = 0x1cf114u;
    // NOP
label_1cf118:
    // 0x1cf118: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cf118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf11c:
    // 0x1cf11c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1cf11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf120:
    // 0x1cf120: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1cf120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf124:
    // 0x1cf124: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cf124u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1cf128:
    // 0x1cf128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf12c:
    // 0x1cf12c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1cf130:
    if (ctx->pc == 0x1CF130u) {
        ctx->pc = 0x1CF130u;
            // 0x1cf130: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1CF134u;
        goto label_1cf134;
    }
    ctx->pc = 0x1CF12Cu;
    {
        const bool branch_taken_0x1cf12c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF12Cu;
            // 0x1cf130: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf12c) {
            ctx->pc = 0x1CF140u;
            goto label_1cf140;
        }
    }
    ctx->pc = 0x1CF134u;
label_1cf134:
    // 0x1cf134: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cf134u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cf138:
    // 0x1cf138: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1cf138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1cf13c:
    // 0x1cf13c: 0x0  nop
    ctx->pc = 0x1cf13cu;
    // NOP
label_1cf140:
    // 0x1cf140: 0x1000005d  b           . + 4 + (0x5D << 2)
label_1cf144:
    if (ctx->pc == 0x1CF144u) {
        ctx->pc = 0x1CF144u;
            // 0x1cf144: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1CF148u;
        goto label_1cf148;
    }
    ctx->pc = 0x1CF140u;
    {
        const bool branch_taken_0x1cf140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF140u;
            // 0x1cf144: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf140) {
            ctx->pc = 0x1CF2B8u;
            goto label_1cf2b8;
        }
    }
    ctx->pc = 0x1CF148u;
label_1cf148:
    // 0x1cf148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf14c:
    // 0x1cf14c: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_1cf150:
    if (ctx->pc == 0x1CF150u) {
        ctx->pc = 0x1CF150u;
            // 0x1cf150: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1CF154u;
        goto label_1cf154;
    }
    ctx->pc = 0x1CF14Cu;
    {
        const bool branch_taken_0x1cf14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF14Cu;
            // 0x1cf150: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf14c) {
            ctx->pc = 0x1CF238u;
            goto label_1cf238;
        }
    }
    ctx->pc = 0x1CF154u;
label_1cf154:
    // 0x1cf154: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1cf154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cf158:
    // 0x1cf158: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1cf158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1cf15c:
    // 0x1cf15c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cf15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cf160:
    // 0x1cf160: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1cf160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1cf164:
    // 0x1cf164: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1cf164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cf168:
    // 0x1cf168: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1cf168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1cf16c:
    // 0x1cf16c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cf16cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf170:
    // 0x1cf170: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1cf170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1cf174:
    // 0x1cf174: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cf174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cf178:
    // 0x1cf178: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1cf178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1cf17c:
    // 0x1cf17c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cf17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cf180:
    // 0x1cf180: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cf180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf184:
    // 0x1cf184: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1cf184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1cf188:
    // 0x1cf188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf18c:
    // 0x1cf18c: 0x0  nop
    ctx->pc = 0x1cf18cu;
    // NOP
label_1cf190:
    // 0x1cf190: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cf190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cf194:
    // 0x1cf194: 0xc04b6ee  jal         func_12DBB8
label_1cf198:
    if (ctx->pc == 0x1CF198u) {
        ctx->pc = 0x1CF198u;
            // 0x1cf198: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x1CF19Cu;
        goto label_1cf19c;
    }
    ctx->pc = 0x1CF194u;
    SET_GPR_U32(ctx, 31, 0x1CF19Cu);
    ctx->pc = 0x1CF198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF194u;
            // 0x1cf198: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF19Cu; }
        if (ctx->pc != 0x1CF19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF19Cu; }
        if (ctx->pc != 0x1CF19Cu) { return; }
    }
    ctx->pc = 0x1CF19Cu;
label_1cf19c:
    // 0x1cf19c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cf19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf1a0:
    // 0x1cf1a0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1cf1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf1a4:
    // 0x1cf1a4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1cf1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf1a8:
    // 0x1cf1a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cf1a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1cf1ac:
    // 0x1cf1ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cf1acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf1b0:
    // 0x1cf1b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1cf1b4:
    if (ctx->pc == 0x1CF1B4u) {
        ctx->pc = 0x1CF1B4u;
            // 0x1cf1b4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1CF1B8u;
        goto label_1cf1b8;
    }
    ctx->pc = 0x1CF1B0u;
    {
        const bool branch_taken_0x1cf1b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF1B0u;
            // 0x1cf1b4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1b0) {
            ctx->pc = 0x1CF1C0u;
            goto label_1cf1c0;
        }
    }
    ctx->pc = 0x1CF1B8u;
label_1cf1b8:
    // 0x1cf1b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cf1b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cf1bc:
    // 0x1cf1bc: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1cf1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1cf1c0:
    // 0x1cf1c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cf1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf1c4:
    // 0x1cf1c4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1cf1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf1c8:
    // 0x1cf1c8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1cf1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf1cc:
    // 0x1cf1cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cf1ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1cf1d0:
    // 0x1cf1d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf1d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf1d4:
    // 0x1cf1d4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1cf1d8:
    if (ctx->pc == 0x1CF1D8u) {
        ctx->pc = 0x1CF1D8u;
            // 0x1cf1d8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1CF1DCu;
        goto label_1cf1dc;
    }
    ctx->pc = 0x1CF1D4u;
    {
        const bool branch_taken_0x1cf1d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF1D4u;
            // 0x1cf1d8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1d4) {
            ctx->pc = 0x1CF1E8u;
            goto label_1cf1e8;
        }
    }
    ctx->pc = 0x1CF1DCu;
label_1cf1dc:
    // 0x1cf1dc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cf1dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cf1e0:
    // 0x1cf1e0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1cf1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1cf1e4:
    // 0x1cf1e4: 0x0  nop
    ctx->pc = 0x1cf1e4u;
    // NOP
label_1cf1e8:
    // 0x1cf1e8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1cf1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cf1ec:
    // 0x1cf1ec: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1cf1ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1cf1f0:
    // 0x1cf1f0: 0x14200031  bnez        $at, . + 4 + (0x31 << 2)
label_1cf1f4:
    if (ctx->pc == 0x1CF1F4u) {
        ctx->pc = 0x1CF1F8u;
        goto label_1cf1f8;
    }
    ctx->pc = 0x1CF1F0u;
    {
        const bool branch_taken_0x1cf1f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1f0) {
            ctx->pc = 0x1CF2B8u;
            goto label_1cf2b8;
        }
    }
    ctx->pc = 0x1CF1F8u;
label_1cf1f8:
    // 0x1cf1f8: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1cf1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1cf1fc:
    // 0x1cf1fc: 0x288100e0  slti        $at, $a0, 0xE0
    ctx->pc = 0x1cf1fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)224) ? 1 : 0);
label_1cf200:
    // 0x1cf200: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1cf204:
    if (ctx->pc == 0x1CF204u) {
        ctx->pc = 0x1CF204u;
            // 0x1cf204: 0x2881ff21  slti        $at, $a0, -0xDF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967073) ? 1 : 0);
        ctx->pc = 0x1CF208u;
        goto label_1cf208;
    }
    ctx->pc = 0x1CF200u;
    {
        const bool branch_taken_0x1cf200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF200u;
            // 0x1cf204: 0x2881ff21  slti        $at, $a0, -0xDF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967073) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf200) {
            ctx->pc = 0x1CF218u;
            goto label_1cf218;
        }
    }
    ctx->pc = 0x1CF208u;
label_1cf208:
    // 0x1cf208: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1cf20c:
    if (ctx->pc == 0x1CF20Cu) {
        ctx->pc = 0x1CF210u;
        goto label_1cf210;
    }
    ctx->pc = 0x1CF208u;
    {
        const bool branch_taken_0x1cf208 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf208) {
            ctx->pc = 0x1CF218u;
            goto label_1cf218;
        }
    }
    ctx->pc = 0x1CF210u;
label_1cf210:
    // 0x1cf210: 0xc06560c  jal         func_195830
label_1cf214:
    if (ctx->pc == 0x1CF214u) {
        ctx->pc = 0x1CF214u;
            // 0x1cf214: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x1CF218u;
        goto label_1cf218;
    }
    ctx->pc = 0x1CF210u;
    SET_GPR_U32(ctx, 31, 0x1CF218u);
    ctx->pc = 0x1CF214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF210u;
            // 0x1cf214: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF218u; }
        if (ctx->pc != 0x1CF218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF218u; }
        if (ctx->pc != 0x1CF218u) { return; }
    }
    ctx->pc = 0x1CF218u;
label_1cf218:
    // 0x1cf218: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cf218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1cf21c:
    // 0x1cf21c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1cf21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1cf220:
    // 0x1cf220: 0xc0655a0  jal         func_195680
label_1cf224:
    if (ctx->pc == 0x1CF224u) {
        ctx->pc = 0x1CF224u;
            // 0x1cf224: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->pc = 0x1CF228u;
        goto label_1cf228;
    }
    ctx->pc = 0x1CF220u;
    SET_GPR_U32(ctx, 31, 0x1CF228u);
    ctx->pc = 0x1CF224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF220u;
            // 0x1cf224: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF228u; }
        if (ctx->pc != 0x1CF228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF228u; }
        if (ctx->pc != 0x1CF228u) { return; }
    }
    ctx->pc = 0x1CF228u;
label_1cf228:
    // 0x1cf228: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cf228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf22c:
    // 0x1cf22c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1cf230:
    if (ctx->pc == 0x1CF230u) {
        ctx->pc = 0x1CF230u;
            // 0x1cf230: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1CF234u;
        goto label_1cf234;
    }
    ctx->pc = 0x1CF22Cu;
    {
        const bool branch_taken_0x1cf22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF22Cu;
            // 0x1cf230: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf22c) {
            ctx->pc = 0x1CF2B8u;
            goto label_1cf2b8;
        }
    }
    ctx->pc = 0x1CF234u;
label_1cf234:
    // 0x1cf234: 0x0  nop
    ctx->pc = 0x1cf234u;
    // NOP
label_1cf238:
    // 0x1cf238: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cf238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf23c:
    // 0x1cf23c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_1cf240:
    if (ctx->pc == 0x1CF240u) {
        ctx->pc = 0x1CF244u;
        goto label_1cf244;
    }
    ctx->pc = 0x1CF23Cu;
    {
        const bool branch_taken_0x1cf23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cf23c) {
            ctx->pc = 0x1CF2B8u;
            goto label_1cf2b8;
        }
    }
    ctx->pc = 0x1CF244u;
label_1cf244:
    // 0x1cf244: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1cf244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cf248:
    // 0x1cf248: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1cf248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_1cf24c:
    // 0x1cf24c: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1cf24cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1cf250:
    // 0x1cf250: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cf250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf254:
    // 0x1cf254: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1cf254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1cf258:
    // 0x1cf258: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cf258u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cf25c:
    // 0x1cf25c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf260:
    // 0x1cf260: 0x0  nop
    ctx->pc = 0x1cf260u;
    // NOP
label_1cf264:
    // 0x1cf264: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1cf264u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1cf268:
    // 0x1cf268: 0xe60100d4  swc1        $f1, 0xD4($s0)
    ctx->pc = 0x1cf268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1cf26c:
    // 0x1cf26c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1cf26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf270:
    // 0x1cf270: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cf270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cf274:
    // 0x1cf274: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1cf274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1cf278:
    // 0x1cf278: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cf278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf27c:
    // 0x1cf27c: 0xc040d72  jal         func_1035C8
label_1cf280:
    if (ctx->pc == 0x1CF280u) {
        ctx->pc = 0x1CF280u;
            // 0x1cf280: 0xc44c0118  lwc1        $f12, 0x118($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1CF284u;
        goto label_1cf284;
    }
    ctx->pc = 0x1CF27Cu;
    SET_GPR_U32(ctx, 31, 0x1CF284u);
    ctx->pc = 0x1CF280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF27Cu;
            // 0x1cf280: 0xc44c0118  lwc1        $f12, 0x118($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF284u; }
        if (ctx->pc != 0x1CF284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF284u; }
        if (ctx->pc != 0x1CF284u) { return; }
    }
    ctx->pc = 0x1CF284u;
label_1cf284:
    // 0x1cf284: 0x3c044009  lui         $a0, 0x4009
    ctx->pc = 0x1cf284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16393 << 16));
label_1cf288:
    // 0x1cf288: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1cf288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1cf28c:
    // 0x1cf28c: 0x34841eb8  ori         $a0, $a0, 0x1EB8
    ctx->pc = 0x1cf28cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)7864u)));
label_1cf290:
    // 0x1cf290: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1cf290u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)34079u)));
label_1cf294:
    // 0x1cf294: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1cf294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_1cf298:
    // 0x1cf298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf29c:
    // 0x1cf29c: 0xc04008c  jal         func_100230
label_1cf2a0:
    if (ctx->pc == 0x1CF2A0u) {
        ctx->pc = 0x1CF2A0u;
            // 0x1cf2a0: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->pc = 0x1CF2A4u;
        goto label_1cf2a4;
    }
    ctx->pc = 0x1CF29Cu;
    SET_GPR_U32(ctx, 31, 0x1CF2A4u);
    ctx->pc = 0x1CF2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF29Cu;
            // 0x1cf2a0: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2A4u; }
        if (ctx->pc != 0x1CF2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2A4u; }
        if (ctx->pc != 0x1CF2A4u) { return; }
    }
    ctx->pc = 0x1CF2A4u;
label_1cf2a4:
    // 0x1cf2a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1cf2a8:
    if (ctx->pc == 0x1CF2A8u) {
        ctx->pc = 0x1CF2ACu;
        goto label_1cf2ac;
    }
    ctx->pc = 0x1CF2A4u;
    {
        const bool branch_taken_0x1cf2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf2a4) {
            ctx->pc = 0x1CF2B8u;
            goto label_1cf2b8;
        }
    }
    ctx->pc = 0x1CF2ACu;
label_1cf2ac:
    // 0x1cf2ac: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1cf2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_1cf2b0:
    // 0x1cf2b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cf2b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1cf2b4:
    // 0x1cf2b4: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1cf2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1cf2b8:
    // 0x1cf2b8: 0xc04b788  jal         func_12DE20
label_1cf2bc:
    if (ctx->pc == 0x1CF2BCu) {
        ctx->pc = 0x1CF2BCu;
            // 0x1cf2bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CF2C0u;
        goto label_1cf2c0;
    }
    ctx->pc = 0x1CF2B8u;
    SET_GPR_U32(ctx, 31, 0x1CF2C0u);
    ctx->pc = 0x1CF2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2B8u;
            // 0x1cf2bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2C0u; }
        if (ctx->pc != 0x1CF2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2C0u; }
        if (ctx->pc != 0x1CF2C0u) { return; }
    }
    ctx->pc = 0x1CF2C0u;
label_1cf2c0:
    // 0x1cf2c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cf2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf2c4:
    // 0x1cf2c4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1cf2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cf2c8:
    // 0x1cf2c8: 0xc04b7da  jal         func_12DF68
label_1cf2cc:
    if (ctx->pc == 0x1CF2CCu) {
        ctx->pc = 0x1CF2CCu;
            // 0x1cf2cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2D0u;
        goto label_1cf2d0;
    }
    ctx->pc = 0x1CF2C8u;
    SET_GPR_U32(ctx, 31, 0x1CF2D0u);
    ctx->pc = 0x1CF2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2C8u;
            // 0x1cf2cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2D0u; }
        if (ctx->pc != 0x1CF2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2D0u; }
        if (ctx->pc != 0x1CF2D0u) { return; }
    }
    ctx->pc = 0x1CF2D0u;
label_1cf2d0:
    // 0x1cf2d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cf2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf2d4:
    // 0x1cf2d4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1cf2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cf2d8:
    // 0x1cf2d8: 0xc04b804  jal         func_12E010
label_1cf2dc:
    if (ctx->pc == 0x1CF2DCu) {
        ctx->pc = 0x1CF2DCu;
            // 0x1cf2dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2E0u;
        goto label_1cf2e0;
    }
    ctx->pc = 0x1CF2D8u;
    SET_GPR_U32(ctx, 31, 0x1CF2E0u);
    ctx->pc = 0x1CF2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2D8u;
            // 0x1cf2dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2E0u; }
        if (ctx->pc != 0x1CF2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2E0u; }
        if (ctx->pc != 0x1CF2E0u) { return; }
    }
    ctx->pc = 0x1CF2E0u;
label_1cf2e0:
    // 0x1cf2e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cf2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf2e4:
    // 0x1cf2e4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1cf2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cf2e8:
    // 0x1cf2e8: 0xc04b7b0  jal         func_12DEC0
label_1cf2ec:
    if (ctx->pc == 0x1CF2ECu) {
        ctx->pc = 0x1CF2ECu;
            // 0x1cf2ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2F0u;
        goto label_1cf2f0;
    }
    ctx->pc = 0x1CF2E8u;
    SET_GPR_U32(ctx, 31, 0x1CF2F0u);
    ctx->pc = 0x1CF2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2E8u;
            // 0x1cf2ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2F0u; }
        if (ctx->pc != 0x1CF2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2F0u; }
        if (ctx->pc != 0x1CF2F0u) { return; }
    }
    ctx->pc = 0x1CF2F0u;
label_1cf2f0:
    // 0x1cf2f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cf2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf2f4:
    // 0x1cf2f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1cf2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cf2f8:
    // 0x1cf2f8: 0xc04b75e  jal         func_12DD78
label_1cf2fc:
    if (ctx->pc == 0x1CF2FCu) {
        ctx->pc = 0x1CF2FCu;
            // 0x1cf2fc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1CF300u;
        goto label_1cf300;
    }
    ctx->pc = 0x1CF2F8u;
    SET_GPR_U32(ctx, 31, 0x1CF300u);
    ctx->pc = 0x1CF2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2F8u;
            // 0x1cf2fc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF300u; }
        if (ctx->pc != 0x1CF300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF300u; }
        if (ctx->pc != 0x1CF300u) { return; }
    }
    ctx->pc = 0x1CF300u;
label_1cf300:
    // 0x1cf300: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1cf300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1cf304:
    // 0x1cf304: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cf304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cf308:
    // 0x1cf308: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1cf308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1cf30c:
    // 0x1cf30c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1cf310:
    if (ctx->pc == 0x1CF310u) {
        ctx->pc = 0x1CF314u;
        goto label_1cf314;
    }
    ctx->pc = 0x1CF30Cu;
    {
        const bool branch_taken_0x1cf30c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf30c) {
            ctx->pc = 0x1CF360u;
            goto label_1cf360;
        }
    }
    ctx->pc = 0x1CF314u;
label_1cf314:
    // 0x1cf314: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1cf314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1cf318:
    // 0x1cf318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1cf31c:
    if (ctx->pc == 0x1CF31Cu) {
        ctx->pc = 0x1CF320u;
        goto label_1cf320;
    }
    ctx->pc = 0x1CF318u;
    {
        const bool branch_taken_0x1cf318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf318) {
            ctx->pc = 0x1CF330u;
            goto label_1cf330;
        }
    }
    ctx->pc = 0x1CF320u;
label_1cf320:
    // 0x1cf320: 0xc0604f0  jal         func_1813C0
label_1cf324:
    if (ctx->pc == 0x1CF324u) {
        ctx->pc = 0x1CF324u;
            // 0x1cf324: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CF328u;
        goto label_1cf328;
    }
    ctx->pc = 0x1CF320u;
    SET_GPR_U32(ctx, 31, 0x1CF328u);
    ctx->pc = 0x1CF324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF320u;
            // 0x1cf324: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF328u; }
        if (ctx->pc != 0x1CF328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF328u; }
        if (ctx->pc != 0x1CF328u) { return; }
    }
    ctx->pc = 0x1CF328u;
label_1cf328:
    // 0x1cf328: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cf32c:
    if (ctx->pc == 0x1CF32Cu) {
        ctx->pc = 0x1CF330u;
        goto label_1cf330;
    }
    ctx->pc = 0x1CF328u;
    {
        const bool branch_taken_0x1cf328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf328) {
            ctx->pc = 0x1CF338u;
            goto label_1cf338;
        }
    }
    ctx->pc = 0x1CF330u;
label_1cf330:
    // 0x1cf330: 0xc0604dc  jal         func_181370
label_1cf334:
    if (ctx->pc == 0x1CF334u) {
        ctx->pc = 0x1CF334u;
            // 0x1cf334: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CF338u;
        goto label_1cf338;
    }
    ctx->pc = 0x1CF330u;
    SET_GPR_U32(ctx, 31, 0x1CF338u);
    ctx->pc = 0x1CF334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF330u;
            // 0x1cf334: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF338u; }
        if (ctx->pc != 0x1CF338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF338u; }
        if (ctx->pc != 0x1CF338u) { return; }
    }
    ctx->pc = 0x1CF338u;
label_1cf338:
    // 0x1cf338: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1cf338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1cf33c:
    // 0x1cf33c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1cf340:
    if (ctx->pc == 0x1CF340u) {
        ctx->pc = 0x1CF344u;
        goto label_1cf344;
    }
    ctx->pc = 0x1CF33Cu;
    {
        const bool branch_taken_0x1cf33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf33c) {
            ctx->pc = 0x1CF350u;
            goto label_1cf350;
        }
    }
    ctx->pc = 0x1CF344u;
label_1cf344:
    // 0x1cf344: 0x1000000a  b           . + 4 + (0xA << 2)
label_1cf348:
    if (ctx->pc == 0x1CF348u) {
        ctx->pc = 0x1CF348u;
            // 0x1cf348: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1CF34Cu;
        goto label_1cf34c;
    }
    ctx->pc = 0x1CF344u;
    {
        const bool branch_taken_0x1cf344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF344u;
            // 0x1cf348: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf344) {
            ctx->pc = 0x1CF370u;
            goto label_1cf370;
        }
    }
    ctx->pc = 0x1CF34Cu;
label_1cf34c:
    // 0x1cf34c: 0x0  nop
    ctx->pc = 0x1cf34cu;
    // NOP
label_1cf350:
    // 0x1cf350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf354:
    // 0x1cf354: 0x10000006  b           . + 4 + (0x6 << 2)
label_1cf358:
    if (ctx->pc == 0x1CF358u) {
        ctx->pc = 0x1CF358u;
            // 0x1cf358: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1CF35Cu;
        goto label_1cf35c;
    }
    ctx->pc = 0x1CF354u;
    {
        const bool branch_taken_0x1cf354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF354u;
            // 0x1cf358: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf354) {
            ctx->pc = 0x1CF370u;
            goto label_1cf370;
        }
    }
    ctx->pc = 0x1CF35Cu;
label_1cf35c:
    // 0x1cf35c: 0x0  nop
    ctx->pc = 0x1cf35cu;
    // NOP
label_1cf360:
    // 0x1cf360: 0xc0604dc  jal         func_181370
label_1cf364:
    if (ctx->pc == 0x1CF364u) {
        ctx->pc = 0x1CF364u;
            // 0x1cf364: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CF368u;
        goto label_1cf368;
    }
    ctx->pc = 0x1CF360u;
    SET_GPR_U32(ctx, 31, 0x1CF368u);
    ctx->pc = 0x1CF364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF360u;
            // 0x1cf364: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF368u; }
        if (ctx->pc != 0x1CF368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF368u; }
        if (ctx->pc != 0x1CF368u) { return; }
    }
    ctx->pc = 0x1CF368u;
label_1cf368:
    // 0x1cf368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf36c:
    // 0x1cf36c: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1cf36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1cf370:
    // 0x1cf370: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1cf370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1cf374:
    // 0x1cf374: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1cf374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1cf378:
    // 0x1cf378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf37c:
    // 0x1cf37c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1cf37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1cf380:
    // 0x1cf380: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1cf380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1cf384:
    // 0x1cf384: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1cf384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1cf388:
    // 0x1cf388: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cf388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf38c:
    // 0x1cf38c: 0x0  nop
    ctx->pc = 0x1cf38cu;
    // NOP
label_1cf390:
    // 0x1cf390: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cf390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cf394:
    // 0x1cf394: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1cf394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1cf398:
    // 0x1cf398: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cf398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1cf39c:
    // 0x1cf39c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1cf39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1cf3a0:
    // 0x1cf3a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cf3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf3a4:
    // 0x1cf3a4: 0x0  nop
    ctx->pc = 0x1cf3a4u;
    // NOP
label_1cf3a8:
    // 0x1cf3a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cf3a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cf3ac:
    // 0x1cf3ac: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1cf3acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1cf3b0:
    // 0x1cf3b0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1cf3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1cf3b4:
    // 0x1cf3b4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1cf3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1cf3b8:
    // 0x1cf3b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cf3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf3bc:
    // 0x1cf3bc: 0x0  nop
    ctx->pc = 0x1cf3bcu;
    // NOP
label_1cf3c0:
    // 0x1cf3c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cf3c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cf3c4:
    // 0x1cf3c4: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1cf3c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1cf3c8:
    // 0x1cf3c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cf3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1cf3cc:
    // 0x1cf3cc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1cf3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1cf3d0:
    // 0x1cf3d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cf3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf3d4:
    // 0x1cf3d4: 0x0  nop
    ctx->pc = 0x1cf3d4u;
    // NOP
label_1cf3d8:
    // 0x1cf3d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cf3d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cf3dc:
    // 0x1cf3dc: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1cf3dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1cf3e0:
    // 0x1cf3e0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1cf3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cf3e4:
    // 0x1cf3e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cf3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cf3e8:
    // 0x1cf3e8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1cf3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1cf3ec:
    // 0x1cf3ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cf3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf3f0:
    // 0x1cf3f0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1cf3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf3f4:
    // 0x1cf3f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf3f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf3f8:
    // 0x1cf3f8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1cf3fc:
    if (ctx->pc == 0x1CF3FCu) {
        ctx->pc = 0x1CF3FCu;
            // 0x1cf3fc: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->pc = 0x1CF400u;
        goto label_1cf400;
    }
    ctx->pc = 0x1CF3F8u;
    {
        const bool branch_taken_0x1cf3f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF3F8u;
            // 0x1cf3fc: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3f8) {
            ctx->pc = 0x1CF430u;
            goto label_1cf430;
        }
    }
    ctx->pc = 0x1CF400u;
label_1cf400:
    // 0x1cf400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf404:
    // 0x1cf404: 0x0  nop
    ctx->pc = 0x1cf404u;
    // NOP
label_1cf408:
    // 0x1cf408: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cf408u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf40c:
    // 0x1cf40c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1cf410:
    if (ctx->pc == 0x1CF410u) {
        ctx->pc = 0x1CF414u;
        goto label_1cf414;
    }
    ctx->pc = 0x1CF40Cu;
    {
        const bool branch_taken_0x1cf40c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf40c) {
            ctx->pc = 0x1CF430u;
            goto label_1cf430;
        }
    }
    ctx->pc = 0x1CF414u;
label_1cf414:
    // 0x1cf414: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1cf414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_1cf418:
    // 0x1cf418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf41c:
    // 0x1cf41c: 0x0  nop
    ctx->pc = 0x1cf41cu;
    // NOP
label_1cf420:
    // 0x1cf420: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cf420u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf424:
    // 0x1cf424: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1cf428:
    if (ctx->pc == 0x1CF428u) {
        ctx->pc = 0x1CF42Cu;
        goto label_1cf42c;
    }
    ctx->pc = 0x1CF424u;
    {
        const bool branch_taken_0x1cf424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf424) {
            ctx->pc = 0x1CF448u;
            goto label_1cf448;
        }
    }
    ctx->pc = 0x1CF42Cu;
label_1cf42c:
    // 0x1cf42c: 0x0  nop
    ctx->pc = 0x1cf42cu;
    // NOP
label_1cf430:
    // 0x1cf430: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1cf430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1cf434:
    // 0x1cf434: 0x40f809  jalr        $v0
label_1cf438:
    if (ctx->pc == 0x1CF438u) {
        ctx->pc = 0x1CF438u;
            // 0x1cf438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF43Cu;
        goto label_1cf43c;
    }
    ctx->pc = 0x1CF434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF43Cu);
        ctx->pc = 0x1CF438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF434u;
            // 0x1cf438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEDD0u: goto label_1cedd0;
            case 0x1CEDD4u: goto label_1cedd4;
            case 0x1CEDD8u: goto label_1cedd8;
            case 0x1CEDDCu: goto label_1ceddc;
            case 0x1CEDE0u: goto label_1cede0;
            case 0x1CEDE4u: goto label_1cede4;
            case 0x1CEDE8u: goto label_1cede8;
            case 0x1CEDECu: goto label_1cedec;
            case 0x1CEDF0u: goto label_1cedf0;
            case 0x1CEDF4u: goto label_1cedf4;
            case 0x1CEDF8u: goto label_1cedf8;
            case 0x1CEDFCu: goto label_1cedfc;
            case 0x1CEE00u: goto label_1cee00;
            case 0x1CEE04u: goto label_1cee04;
            case 0x1CEE08u: goto label_1cee08;
            case 0x1CEE0Cu: goto label_1cee0c;
            case 0x1CEE10u: goto label_1cee10;
            case 0x1CEE14u: goto label_1cee14;
            case 0x1CEE18u: goto label_1cee18;
            case 0x1CEE1Cu: goto label_1cee1c;
            case 0x1CEE20u: goto label_1cee20;
            case 0x1CEE24u: goto label_1cee24;
            case 0x1CEE28u: goto label_1cee28;
            case 0x1CEE2Cu: goto label_1cee2c;
            case 0x1CEE30u: goto label_1cee30;
            case 0x1CEE34u: goto label_1cee34;
            case 0x1CEE38u: goto label_1cee38;
            case 0x1CEE3Cu: goto label_1cee3c;
            case 0x1CEE40u: goto label_1cee40;
            case 0x1CEE44u: goto label_1cee44;
            case 0x1CEE48u: goto label_1cee48;
            case 0x1CEE4Cu: goto label_1cee4c;
            case 0x1CEE50u: goto label_1cee50;
            case 0x1CEE54u: goto label_1cee54;
            case 0x1CEE58u: goto label_1cee58;
            case 0x1CEE5Cu: goto label_1cee5c;
            case 0x1CEE60u: goto label_1cee60;
            case 0x1CEE64u: goto label_1cee64;
            case 0x1CEE68u: goto label_1cee68;
            case 0x1CEE6Cu: goto label_1cee6c;
            case 0x1CEE70u: goto label_1cee70;
            case 0x1CEE74u: goto label_1cee74;
            case 0x1CEE78u: goto label_1cee78;
            case 0x1CEE7Cu: goto label_1cee7c;
            case 0x1CEE80u: goto label_1cee80;
            case 0x1CEE84u: goto label_1cee84;
            case 0x1CEE88u: goto label_1cee88;
            case 0x1CEE8Cu: goto label_1cee8c;
            case 0x1CEE90u: goto label_1cee90;
            case 0x1CEE94u: goto label_1cee94;
            case 0x1CEE98u: goto label_1cee98;
            case 0x1CEE9Cu: goto label_1cee9c;
            case 0x1CEEA0u: goto label_1ceea0;
            case 0x1CEEA4u: goto label_1ceea4;
            case 0x1CEEA8u: goto label_1ceea8;
            case 0x1CEEACu: goto label_1ceeac;
            case 0x1CEEB0u: goto label_1ceeb0;
            case 0x1CEEB4u: goto label_1ceeb4;
            case 0x1CEEB8u: goto label_1ceeb8;
            case 0x1CEEBCu: goto label_1ceebc;
            case 0x1CEEC0u: goto label_1ceec0;
            case 0x1CEEC4u: goto label_1ceec4;
            case 0x1CEEC8u: goto label_1ceec8;
            case 0x1CEECCu: goto label_1ceecc;
            case 0x1CEED0u: goto label_1ceed0;
            case 0x1CEED4u: goto label_1ceed4;
            case 0x1CEED8u: goto label_1ceed8;
            case 0x1CEEDCu: goto label_1ceedc;
            case 0x1CEEE0u: goto label_1ceee0;
            case 0x1CEEE4u: goto label_1ceee4;
            case 0x1CEEE8u: goto label_1ceee8;
            case 0x1CEEECu: goto label_1ceeec;
            case 0x1CEEF0u: goto label_1ceef0;
            case 0x1CEEF4u: goto label_1ceef4;
            case 0x1CEEF8u: goto label_1ceef8;
            case 0x1CEEFCu: goto label_1ceefc;
            case 0x1CEF00u: goto label_1cef00;
            case 0x1CEF04u: goto label_1cef04;
            case 0x1CEF08u: goto label_1cef08;
            case 0x1CEF0Cu: goto label_1cef0c;
            case 0x1CEF10u: goto label_1cef10;
            case 0x1CEF14u: goto label_1cef14;
            case 0x1CEF18u: goto label_1cef18;
            case 0x1CEF1Cu: goto label_1cef1c;
            case 0x1CEF20u: goto label_1cef20;
            case 0x1CEF24u: goto label_1cef24;
            case 0x1CEF28u: goto label_1cef28;
            case 0x1CEF2Cu: goto label_1cef2c;
            case 0x1CEF30u: goto label_1cef30;
            case 0x1CEF34u: goto label_1cef34;
            case 0x1CEF38u: goto label_1cef38;
            case 0x1CEF3Cu: goto label_1cef3c;
            case 0x1CEF40u: goto label_1cef40;
            case 0x1CEF44u: goto label_1cef44;
            case 0x1CEF48u: goto label_1cef48;
            case 0x1CEF4Cu: goto label_1cef4c;
            case 0x1CEF50u: goto label_1cef50;
            case 0x1CEF54u: goto label_1cef54;
            case 0x1CEF58u: goto label_1cef58;
            case 0x1CEF5Cu: goto label_1cef5c;
            case 0x1CEF60u: goto label_1cef60;
            case 0x1CEF64u: goto label_1cef64;
            case 0x1CEF68u: goto label_1cef68;
            case 0x1CEF6Cu: goto label_1cef6c;
            case 0x1CEF70u: goto label_1cef70;
            case 0x1CEF74u: goto label_1cef74;
            case 0x1CEF78u: goto label_1cef78;
            case 0x1CEF7Cu: goto label_1cef7c;
            case 0x1CEF80u: goto label_1cef80;
            case 0x1CEF84u: goto label_1cef84;
            case 0x1CEF88u: goto label_1cef88;
            case 0x1CEF8Cu: goto label_1cef8c;
            case 0x1CEF90u: goto label_1cef90;
            case 0x1CEF94u: goto label_1cef94;
            case 0x1CEF98u: goto label_1cef98;
            case 0x1CEF9Cu: goto label_1cef9c;
            case 0x1CEFA0u: goto label_1cefa0;
            case 0x1CEFA4u: goto label_1cefa4;
            case 0x1CEFA8u: goto label_1cefa8;
            case 0x1CEFACu: goto label_1cefac;
            case 0x1CEFB0u: goto label_1cefb0;
            case 0x1CEFB4u: goto label_1cefb4;
            case 0x1CEFB8u: goto label_1cefb8;
            case 0x1CEFBCu: goto label_1cefbc;
            case 0x1CEFC0u: goto label_1cefc0;
            case 0x1CEFC4u: goto label_1cefc4;
            case 0x1CEFC8u: goto label_1cefc8;
            case 0x1CEFCCu: goto label_1cefcc;
            case 0x1CEFD0u: goto label_1cefd0;
            case 0x1CEFD4u: goto label_1cefd4;
            case 0x1CEFD8u: goto label_1cefd8;
            case 0x1CEFDCu: goto label_1cefdc;
            case 0x1CEFE0u: goto label_1cefe0;
            case 0x1CEFE4u: goto label_1cefe4;
            case 0x1CEFE8u: goto label_1cefe8;
            case 0x1CEFECu: goto label_1cefec;
            case 0x1CEFF0u: goto label_1ceff0;
            case 0x1CEFF4u: goto label_1ceff4;
            case 0x1CEFF8u: goto label_1ceff8;
            case 0x1CEFFCu: goto label_1ceffc;
            case 0x1CF000u: goto label_1cf000;
            case 0x1CF004u: goto label_1cf004;
            case 0x1CF008u: goto label_1cf008;
            case 0x1CF00Cu: goto label_1cf00c;
            case 0x1CF010u: goto label_1cf010;
            case 0x1CF014u: goto label_1cf014;
            case 0x1CF018u: goto label_1cf018;
            case 0x1CF01Cu: goto label_1cf01c;
            case 0x1CF020u: goto label_1cf020;
            case 0x1CF024u: goto label_1cf024;
            case 0x1CF028u: goto label_1cf028;
            case 0x1CF02Cu: goto label_1cf02c;
            case 0x1CF030u: goto label_1cf030;
            case 0x1CF034u: goto label_1cf034;
            case 0x1CF038u: goto label_1cf038;
            case 0x1CF03Cu: goto label_1cf03c;
            case 0x1CF040u: goto label_1cf040;
            case 0x1CF044u: goto label_1cf044;
            case 0x1CF048u: goto label_1cf048;
            case 0x1CF04Cu: goto label_1cf04c;
            case 0x1CF050u: goto label_1cf050;
            case 0x1CF054u: goto label_1cf054;
            case 0x1CF058u: goto label_1cf058;
            case 0x1CF05Cu: goto label_1cf05c;
            case 0x1CF060u: goto label_1cf060;
            case 0x1CF064u: goto label_1cf064;
            case 0x1CF068u: goto label_1cf068;
            case 0x1CF06Cu: goto label_1cf06c;
            case 0x1CF070u: goto label_1cf070;
            case 0x1CF074u: goto label_1cf074;
            case 0x1CF078u: goto label_1cf078;
            case 0x1CF07Cu: goto label_1cf07c;
            case 0x1CF080u: goto label_1cf080;
            case 0x1CF084u: goto label_1cf084;
            case 0x1CF088u: goto label_1cf088;
            case 0x1CF08Cu: goto label_1cf08c;
            case 0x1CF090u: goto label_1cf090;
            case 0x1CF094u: goto label_1cf094;
            case 0x1CF098u: goto label_1cf098;
            case 0x1CF09Cu: goto label_1cf09c;
            case 0x1CF0A0u: goto label_1cf0a0;
            case 0x1CF0A4u: goto label_1cf0a4;
            case 0x1CF0A8u: goto label_1cf0a8;
            case 0x1CF0ACu: goto label_1cf0ac;
            case 0x1CF0B0u: goto label_1cf0b0;
            case 0x1CF0B4u: goto label_1cf0b4;
            case 0x1CF0B8u: goto label_1cf0b8;
            case 0x1CF0BCu: goto label_1cf0bc;
            case 0x1CF0C0u: goto label_1cf0c0;
            case 0x1CF0C4u: goto label_1cf0c4;
            case 0x1CF0C8u: goto label_1cf0c8;
            case 0x1CF0CCu: goto label_1cf0cc;
            case 0x1CF0D0u: goto label_1cf0d0;
            case 0x1CF0D4u: goto label_1cf0d4;
            case 0x1CF0D8u: goto label_1cf0d8;
            case 0x1CF0DCu: goto label_1cf0dc;
            case 0x1CF0E0u: goto label_1cf0e0;
            case 0x1CF0E4u: goto label_1cf0e4;
            case 0x1CF0E8u: goto label_1cf0e8;
            case 0x1CF0ECu: goto label_1cf0ec;
            case 0x1CF0F0u: goto label_1cf0f0;
            case 0x1CF0F4u: goto label_1cf0f4;
            case 0x1CF0F8u: goto label_1cf0f8;
            case 0x1CF0FCu: goto label_1cf0fc;
            case 0x1CF100u: goto label_1cf100;
            case 0x1CF104u: goto label_1cf104;
            case 0x1CF108u: goto label_1cf108;
            case 0x1CF10Cu: goto label_1cf10c;
            case 0x1CF110u: goto label_1cf110;
            case 0x1CF114u: goto label_1cf114;
            case 0x1CF118u: goto label_1cf118;
            case 0x1CF11Cu: goto label_1cf11c;
            case 0x1CF120u: goto label_1cf120;
            case 0x1CF124u: goto label_1cf124;
            case 0x1CF128u: goto label_1cf128;
            case 0x1CF12Cu: goto label_1cf12c;
            case 0x1CF130u: goto label_1cf130;
            case 0x1CF134u: goto label_1cf134;
            case 0x1CF138u: goto label_1cf138;
            case 0x1CF13Cu: goto label_1cf13c;
            case 0x1CF140u: goto label_1cf140;
            case 0x1CF144u: goto label_1cf144;
            case 0x1CF148u: goto label_1cf148;
            case 0x1CF14Cu: goto label_1cf14c;
            case 0x1CF150u: goto label_1cf150;
            case 0x1CF154u: goto label_1cf154;
            case 0x1CF158u: goto label_1cf158;
            case 0x1CF15Cu: goto label_1cf15c;
            case 0x1CF160u: goto label_1cf160;
            case 0x1CF164u: goto label_1cf164;
            case 0x1CF168u: goto label_1cf168;
            case 0x1CF16Cu: goto label_1cf16c;
            case 0x1CF170u: goto label_1cf170;
            case 0x1CF174u: goto label_1cf174;
            case 0x1CF178u: goto label_1cf178;
            case 0x1CF17Cu: goto label_1cf17c;
            case 0x1CF180u: goto label_1cf180;
            case 0x1CF184u: goto label_1cf184;
            case 0x1CF188u: goto label_1cf188;
            case 0x1CF18Cu: goto label_1cf18c;
            case 0x1CF190u: goto label_1cf190;
            case 0x1CF194u: goto label_1cf194;
            case 0x1CF198u: goto label_1cf198;
            case 0x1CF19Cu: goto label_1cf19c;
            case 0x1CF1A0u: goto label_1cf1a0;
            case 0x1CF1A4u: goto label_1cf1a4;
            case 0x1CF1A8u: goto label_1cf1a8;
            case 0x1CF1ACu: goto label_1cf1ac;
            case 0x1CF1B0u: goto label_1cf1b0;
            case 0x1CF1B4u: goto label_1cf1b4;
            case 0x1CF1B8u: goto label_1cf1b8;
            case 0x1CF1BCu: goto label_1cf1bc;
            case 0x1CF1C0u: goto label_1cf1c0;
            case 0x1CF1C4u: goto label_1cf1c4;
            case 0x1CF1C8u: goto label_1cf1c8;
            case 0x1CF1CCu: goto label_1cf1cc;
            case 0x1CF1D0u: goto label_1cf1d0;
            case 0x1CF1D4u: goto label_1cf1d4;
            case 0x1CF1D8u: goto label_1cf1d8;
            case 0x1CF1DCu: goto label_1cf1dc;
            case 0x1CF1E0u: goto label_1cf1e0;
            case 0x1CF1E4u: goto label_1cf1e4;
            case 0x1CF1E8u: goto label_1cf1e8;
            case 0x1CF1ECu: goto label_1cf1ec;
            case 0x1CF1F0u: goto label_1cf1f0;
            case 0x1CF1F4u: goto label_1cf1f4;
            case 0x1CF1F8u: goto label_1cf1f8;
            case 0x1CF1FCu: goto label_1cf1fc;
            case 0x1CF200u: goto label_1cf200;
            case 0x1CF204u: goto label_1cf204;
            case 0x1CF208u: goto label_1cf208;
            case 0x1CF20Cu: goto label_1cf20c;
            case 0x1CF210u: goto label_1cf210;
            case 0x1CF214u: goto label_1cf214;
            case 0x1CF218u: goto label_1cf218;
            case 0x1CF21Cu: goto label_1cf21c;
            case 0x1CF220u: goto label_1cf220;
            case 0x1CF224u: goto label_1cf224;
            case 0x1CF228u: goto label_1cf228;
            case 0x1CF22Cu: goto label_1cf22c;
            case 0x1CF230u: goto label_1cf230;
            case 0x1CF234u: goto label_1cf234;
            case 0x1CF238u: goto label_1cf238;
            case 0x1CF23Cu: goto label_1cf23c;
            case 0x1CF240u: goto label_1cf240;
            case 0x1CF244u: goto label_1cf244;
            case 0x1CF248u: goto label_1cf248;
            case 0x1CF24Cu: goto label_1cf24c;
            case 0x1CF250u: goto label_1cf250;
            case 0x1CF254u: goto label_1cf254;
            case 0x1CF258u: goto label_1cf258;
            case 0x1CF25Cu: goto label_1cf25c;
            case 0x1CF260u: goto label_1cf260;
            case 0x1CF264u: goto label_1cf264;
            case 0x1CF268u: goto label_1cf268;
            case 0x1CF26Cu: goto label_1cf26c;
            case 0x1CF270u: goto label_1cf270;
            case 0x1CF274u: goto label_1cf274;
            case 0x1CF278u: goto label_1cf278;
            case 0x1CF27Cu: goto label_1cf27c;
            case 0x1CF280u: goto label_1cf280;
            case 0x1CF284u: goto label_1cf284;
            case 0x1CF288u: goto label_1cf288;
            case 0x1CF28Cu: goto label_1cf28c;
            case 0x1CF290u: goto label_1cf290;
            case 0x1CF294u: goto label_1cf294;
            case 0x1CF298u: goto label_1cf298;
            case 0x1CF29Cu: goto label_1cf29c;
            case 0x1CF2A0u: goto label_1cf2a0;
            case 0x1CF2A4u: goto label_1cf2a4;
            case 0x1CF2A8u: goto label_1cf2a8;
            case 0x1CF2ACu: goto label_1cf2ac;
            case 0x1CF2B0u: goto label_1cf2b0;
            case 0x1CF2B4u: goto label_1cf2b4;
            case 0x1CF2B8u: goto label_1cf2b8;
            case 0x1CF2BCu: goto label_1cf2bc;
            case 0x1CF2C0u: goto label_1cf2c0;
            case 0x1CF2C4u: goto label_1cf2c4;
            case 0x1CF2C8u: goto label_1cf2c8;
            case 0x1CF2CCu: goto label_1cf2cc;
            case 0x1CF2D0u: goto label_1cf2d0;
            case 0x1CF2D4u: goto label_1cf2d4;
            case 0x1CF2D8u: goto label_1cf2d8;
            case 0x1CF2DCu: goto label_1cf2dc;
            case 0x1CF2E0u: goto label_1cf2e0;
            case 0x1CF2E4u: goto label_1cf2e4;
            case 0x1CF2E8u: goto label_1cf2e8;
            case 0x1CF2ECu: goto label_1cf2ec;
            case 0x1CF2F0u: goto label_1cf2f0;
            case 0x1CF2F4u: goto label_1cf2f4;
            case 0x1CF2F8u: goto label_1cf2f8;
            case 0x1CF2FCu: goto label_1cf2fc;
            case 0x1CF300u: goto label_1cf300;
            case 0x1CF304u: goto label_1cf304;
            case 0x1CF308u: goto label_1cf308;
            case 0x1CF30Cu: goto label_1cf30c;
            case 0x1CF310u: goto label_1cf310;
            case 0x1CF314u: goto label_1cf314;
            case 0x1CF318u: goto label_1cf318;
            case 0x1CF31Cu: goto label_1cf31c;
            case 0x1CF320u: goto label_1cf320;
            case 0x1CF324u: goto label_1cf324;
            case 0x1CF328u: goto label_1cf328;
            case 0x1CF32Cu: goto label_1cf32c;
            case 0x1CF330u: goto label_1cf330;
            case 0x1CF334u: goto label_1cf334;
            case 0x1CF338u: goto label_1cf338;
            case 0x1CF33Cu: goto label_1cf33c;
            case 0x1CF340u: goto label_1cf340;
            case 0x1CF344u: goto label_1cf344;
            case 0x1CF348u: goto label_1cf348;
            case 0x1CF34Cu: goto label_1cf34c;
            case 0x1CF350u: goto label_1cf350;
            case 0x1CF354u: goto label_1cf354;
            case 0x1CF358u: goto label_1cf358;
            case 0x1CF35Cu: goto label_1cf35c;
            case 0x1CF360u: goto label_1cf360;
            case 0x1CF364u: goto label_1cf364;
            case 0x1CF368u: goto label_1cf368;
            case 0x1CF36Cu: goto label_1cf36c;
            case 0x1CF370u: goto label_1cf370;
            case 0x1CF374u: goto label_1cf374;
            case 0x1CF378u: goto label_1cf378;
            case 0x1CF37Cu: goto label_1cf37c;
            case 0x1CF380u: goto label_1cf380;
            case 0x1CF384u: goto label_1cf384;
            case 0x1CF388u: goto label_1cf388;
            case 0x1CF38Cu: goto label_1cf38c;
            case 0x1CF390u: goto label_1cf390;
            case 0x1CF394u: goto label_1cf394;
            case 0x1CF398u: goto label_1cf398;
            case 0x1CF39Cu: goto label_1cf39c;
            case 0x1CF3A0u: goto label_1cf3a0;
            case 0x1CF3A4u: goto label_1cf3a4;
            case 0x1CF3A8u: goto label_1cf3a8;
            case 0x1CF3ACu: goto label_1cf3ac;
            case 0x1CF3B0u: goto label_1cf3b0;
            case 0x1CF3B4u: goto label_1cf3b4;
            case 0x1CF3B8u: goto label_1cf3b8;
            case 0x1CF3BCu: goto label_1cf3bc;
            case 0x1CF3C0u: goto label_1cf3c0;
            case 0x1CF3C4u: goto label_1cf3c4;
            case 0x1CF3C8u: goto label_1cf3c8;
            case 0x1CF3CCu: goto label_1cf3cc;
            case 0x1CF3D0u: goto label_1cf3d0;
            case 0x1CF3D4u: goto label_1cf3d4;
            case 0x1CF3D8u: goto label_1cf3d8;
            case 0x1CF3DCu: goto label_1cf3dc;
            case 0x1CF3E0u: goto label_1cf3e0;
            case 0x1CF3E4u: goto label_1cf3e4;
            case 0x1CF3E8u: goto label_1cf3e8;
            case 0x1CF3ECu: goto label_1cf3ec;
            case 0x1CF3F0u: goto label_1cf3f0;
            case 0x1CF3F4u: goto label_1cf3f4;
            case 0x1CF3F8u: goto label_1cf3f8;
            case 0x1CF3FCu: goto label_1cf3fc;
            case 0x1CF400u: goto label_1cf400;
            case 0x1CF404u: goto label_1cf404;
            case 0x1CF408u: goto label_1cf408;
            case 0x1CF40Cu: goto label_1cf40c;
            case 0x1CF410u: goto label_1cf410;
            case 0x1CF414u: goto label_1cf414;
            case 0x1CF418u: goto label_1cf418;
            case 0x1CF41Cu: goto label_1cf41c;
            case 0x1CF420u: goto label_1cf420;
            case 0x1CF424u: goto label_1cf424;
            case 0x1CF428u: goto label_1cf428;
            case 0x1CF42Cu: goto label_1cf42c;
            case 0x1CF430u: goto label_1cf430;
            case 0x1CF434u: goto label_1cf434;
            case 0x1CF438u: goto label_1cf438;
            case 0x1CF43Cu: goto label_1cf43c;
            case 0x1CF440u: goto label_1cf440;
            case 0x1CF444u: goto label_1cf444;
            case 0x1CF448u: goto label_1cf448;
            case 0x1CF44Cu: goto label_1cf44c;
            case 0x1CF450u: goto label_1cf450;
            case 0x1CF454u: goto label_1cf454;
            case 0x1CF458u: goto label_1cf458;
            case 0x1CF45Cu: goto label_1cf45c;
            case 0x1CF460u: goto label_1cf460;
            case 0x1CF464u: goto label_1cf464;
            case 0x1CF468u: goto label_1cf468;
            case 0x1CF46Cu: goto label_1cf46c;
            case 0x1CF470u: goto label_1cf470;
            case 0x1CF474u: goto label_1cf474;
            case 0x1CF478u: goto label_1cf478;
            case 0x1CF47Cu: goto label_1cf47c;
            case 0x1CF480u: goto label_1cf480;
            case 0x1CF484u: goto label_1cf484;
            case 0x1CF488u: goto label_1cf488;
            case 0x1CF48Cu: goto label_1cf48c;
            case 0x1CF490u: goto label_1cf490;
            case 0x1CF494u: goto label_1cf494;
            case 0x1CF498u: goto label_1cf498;
            case 0x1CF49Cu: goto label_1cf49c;
            case 0x1CF4A0u: goto label_1cf4a0;
            case 0x1CF4A4u: goto label_1cf4a4;
            case 0x1CF4A8u: goto label_1cf4a8;
            case 0x1CF4ACu: goto label_1cf4ac;
            case 0x1CF4B0u: goto label_1cf4b0;
            case 0x1CF4B4u: goto label_1cf4b4;
            case 0x1CF4B8u: goto label_1cf4b8;
            case 0x1CF4BCu: goto label_1cf4bc;
            case 0x1CF4C0u: goto label_1cf4c0;
            case 0x1CF4C4u: goto label_1cf4c4;
            case 0x1CF4C8u: goto label_1cf4c8;
            case 0x1CF4CCu: goto label_1cf4cc;
            case 0x1CF4D0u: goto label_1cf4d0;
            case 0x1CF4D4u: goto label_1cf4d4;
            case 0x1CF4D8u: goto label_1cf4d8;
            case 0x1CF4DCu: goto label_1cf4dc;
            case 0x1CF4E0u: goto label_1cf4e0;
            case 0x1CF4E4u: goto label_1cf4e4;
            case 0x1CF4E8u: goto label_1cf4e8;
            case 0x1CF4ECu: goto label_1cf4ec;
            case 0x1CF4F0u: goto label_1cf4f0;
            case 0x1CF4F4u: goto label_1cf4f4;
            case 0x1CF4F8u: goto label_1cf4f8;
            case 0x1CF4FCu: goto label_1cf4fc;
            case 0x1CF500u: goto label_1cf500;
            case 0x1CF504u: goto label_1cf504;
            case 0x1CF508u: goto label_1cf508;
            case 0x1CF50Cu: goto label_1cf50c;
            case 0x1CF510u: goto label_1cf510;
            case 0x1CF514u: goto label_1cf514;
            case 0x1CF518u: goto label_1cf518;
            case 0x1CF51Cu: goto label_1cf51c;
            case 0x1CF520u: goto label_1cf520;
            case 0x1CF524u: goto label_1cf524;
            case 0x1CF528u: goto label_1cf528;
            case 0x1CF52Cu: goto label_1cf52c;
            case 0x1CF530u: goto label_1cf530;
            case 0x1CF534u: goto label_1cf534;
            case 0x1CF538u: goto label_1cf538;
            case 0x1CF53Cu: goto label_1cf53c;
            case 0x1CF540u: goto label_1cf540;
            case 0x1CF544u: goto label_1cf544;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF43Cu; }
            if (ctx->pc != 0x1CF43Cu) { return; }
        }
    }
    ctx->pc = 0x1CF43Cu;
label_1cf43c:
    // 0x1cf43c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1cf440:
    if (ctx->pc == 0x1CF440u) {
        ctx->pc = 0x1CF444u;
        goto label_1cf444;
    }
    ctx->pc = 0x1CF43Cu;
    {
        const bool branch_taken_0x1cf43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf43c) {
            ctx->pc = 0x1CF538u;
            goto label_1cf538;
        }
    }
    ctx->pc = 0x1CF444u;
label_1cf444:
    // 0x1cf444: 0x0  nop
    ctx->pc = 0x1cf444u;
    // NOP
label_1cf448:
    // 0x1cf448: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1cf448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1cf44c:
    // 0x1cf44c: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1cf450:
    if (ctx->pc == 0x1CF450u) {
        ctx->pc = 0x1CF454u;
        goto label_1cf454;
    }
    ctx->pc = 0x1CF44Cu;
    {
        const bool branch_taken_0x1cf44c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1cf44c) {
            ctx->pc = 0x1CF518u;
            goto label_1cf518;
        }
    }
    ctx->pc = 0x1CF454u;
label_1cf454:
    // 0x1cf454: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1cf454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf458:
    // 0x1cf458: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1cf458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1cf45c:
    // 0x1cf45c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1cf45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf460:
    // 0x1cf460: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1cf460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1cf464:
    // 0x1cf464: 0xc05d080  jal         func_174200
label_1cf468:
    if (ctx->pc == 0x1CF468u) {
        ctx->pc = 0x1CF468u;
            // 0x1cf468: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CF46Cu;
        goto label_1cf46c;
    }
    ctx->pc = 0x1CF464u;
    SET_GPR_U32(ctx, 31, 0x1CF46Cu);
    ctx->pc = 0x1CF468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF464u;
            // 0x1cf468: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF46Cu; }
        if (ctx->pc != 0x1CF46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF46Cu; }
        if (ctx->pc != 0x1CF46Cu) { return; }
    }
    ctx->pc = 0x1CF46Cu;
label_1cf46c:
    // 0x1cf46c: 0xc050bb4  jal         func_142ED0
label_1cf470:
    if (ctx->pc == 0x1CF470u) {
        ctx->pc = 0x1CF474u;
        goto label_1cf474;
    }
    ctx->pc = 0x1CF46Cu;
    SET_GPR_U32(ctx, 31, 0x1CF474u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF474u; }
        if (ctx->pc != 0x1CF474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF474u; }
        if (ctx->pc != 0x1CF474u) { return; }
    }
    ctx->pc = 0x1CF474u;
label_1cf474:
    // 0x1cf474: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cf474u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1cf478:
    // 0x1cf478: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1cf47c:
    if (ctx->pc == 0x1CF47Cu) {
        ctx->pc = 0x1CF480u;
        goto label_1cf480;
    }
    ctx->pc = 0x1CF478u;
    {
        const bool branch_taken_0x1cf478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf478) {
            ctx->pc = 0x1CF498u;
            goto label_1cf498;
        }
    }
    ctx->pc = 0x1CF480u;
label_1cf480:
    // 0x1cf480: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1cf480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf484:
    // 0x1cf484: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1cf484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1cf488:
    // 0x1cf488: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1cf488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf48c:
    // 0x1cf48c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1cf48cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1cf490:
    // 0x1cf490: 0xc05d080  jal         func_174200
label_1cf494:
    if (ctx->pc == 0x1CF494u) {
        ctx->pc = 0x1CF494u;
            // 0x1cf494: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CF498u;
        goto label_1cf498;
    }
    ctx->pc = 0x1CF490u;
    SET_GPR_U32(ctx, 31, 0x1CF498u);
    ctx->pc = 0x1CF494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF490u;
            // 0x1cf494: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF498u; }
        if (ctx->pc != 0x1CF498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF498u; }
        if (ctx->pc != 0x1CF498u) { return; }
    }
    ctx->pc = 0x1CF498u;
label_1cf498:
    // 0x1cf498: 0xc050bb4  jal         func_142ED0
label_1cf49c:
    if (ctx->pc == 0x1CF49Cu) {
        ctx->pc = 0x1CF4A0u;
        goto label_1cf4a0;
    }
    ctx->pc = 0x1CF498u;
    SET_GPR_U32(ctx, 31, 0x1CF4A0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4A0u; }
        if (ctx->pc != 0x1CF4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4A0u; }
        if (ctx->pc != 0x1CF4A0u) { return; }
    }
    ctx->pc = 0x1CF4A0u;
label_1cf4a0:
    // 0x1cf4a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cf4a0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1cf4a4:
    // 0x1cf4a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cf4a8:
    if (ctx->pc == 0x1CF4A8u) {
        ctx->pc = 0x1CF4ACu;
        goto label_1cf4ac;
    }
    ctx->pc = 0x1CF4A4u;
    {
        const bool branch_taken_0x1cf4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf4a4) {
            ctx->pc = 0x1CF4C8u;
            goto label_1cf4c8;
        }
    }
    ctx->pc = 0x1CF4ACu;
label_1cf4ac:
    // 0x1cf4ac: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1cf4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf4b0:
    // 0x1cf4b0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1cf4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1cf4b4:
    // 0x1cf4b4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1cf4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf4b8:
    // 0x1cf4b8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1cf4b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1cf4bc:
    // 0x1cf4bc: 0xc05d080  jal         func_174200
label_1cf4c0:
    if (ctx->pc == 0x1CF4C0u) {
        ctx->pc = 0x1CF4C0u;
            // 0x1cf4c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CF4C4u;
        goto label_1cf4c4;
    }
    ctx->pc = 0x1CF4BCu;
    SET_GPR_U32(ctx, 31, 0x1CF4C4u);
    ctx->pc = 0x1CF4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4BCu;
            // 0x1cf4c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4C4u; }
        if (ctx->pc != 0x1CF4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4C4u; }
        if (ctx->pc != 0x1CF4C4u) { return; }
    }
    ctx->pc = 0x1CF4C4u;
label_1cf4c4:
    // 0x1cf4c4: 0x0  nop
    ctx->pc = 0x1cf4c4u;
    // NOP
label_1cf4c8:
    // 0x1cf4c8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1cf4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1cf4cc:
    // 0x1cf4cc: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1cf4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf4d0:
    // 0x1cf4d0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1cf4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cf4d4:
    // 0x1cf4d4: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1cf4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf4d8:
    // 0x1cf4d8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1cf4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cf4dc:
    // 0x1cf4dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cf4dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cf4e0:
    // 0x1cf4e0: 0x0  nop
    ctx->pc = 0x1cf4e0u;
    // NOP
label_1cf4e4:
    // 0x1cf4e4: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1cf4e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1cf4e8:
    // 0x1cf4e8: 0xc053740  jal         func_14DD00
label_1cf4ec:
    if (ctx->pc == 0x1CF4ECu) {
        ctx->pc = 0x1CF4ECu;
            // 0x1cf4ec: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1CF4F0u;
        goto label_1cf4f0;
    }
    ctx->pc = 0x1CF4E8u;
    SET_GPR_U32(ctx, 31, 0x1CF4F0u);
    ctx->pc = 0x1CF4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4E8u;
            // 0x1cf4ec: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4F0u; }
        if (ctx->pc != 0x1CF4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4F0u; }
        if (ctx->pc != 0x1CF4F0u) { return; }
    }
    ctx->pc = 0x1CF4F0u;
label_1cf4f0:
    // 0x1cf4f0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1cf4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cf4f4:
    // 0x1cf4f4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1cf4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cf4f8:
    // 0x1cf4f8: 0xc07b0fc  jal         func_1EC3F0
label_1cf4fc:
    if (ctx->pc == 0x1CF4FCu) {
        ctx->pc = 0x1CF4FCu;
            // 0x1cf4fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1CF500u;
        goto label_1cf500;
    }
    ctx->pc = 0x1CF4F8u;
    SET_GPR_U32(ctx, 31, 0x1CF500u);
    ctx->pc = 0x1CF4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4F8u;
            // 0x1cf4fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF500u; }
        if (ctx->pc != 0x1CF500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF500u; }
        if (ctx->pc != 0x1CF500u) { return; }
    }
    ctx->pc = 0x1CF500u;
label_1cf500:
    // 0x1cf500: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1cf500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1cf504:
    // 0x1cf504: 0x40f809  jalr        $v0
label_1cf508:
    if (ctx->pc == 0x1CF508u) {
        ctx->pc = 0x1CF508u;
            // 0x1cf508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF50Cu;
        goto label_1cf50c;
    }
    ctx->pc = 0x1CF504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF50Cu);
        ctx->pc = 0x1CF508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF504u;
            // 0x1cf508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEDD0u: goto label_1cedd0;
            case 0x1CEDD4u: goto label_1cedd4;
            case 0x1CEDD8u: goto label_1cedd8;
            case 0x1CEDDCu: goto label_1ceddc;
            case 0x1CEDE0u: goto label_1cede0;
            case 0x1CEDE4u: goto label_1cede4;
            case 0x1CEDE8u: goto label_1cede8;
            case 0x1CEDECu: goto label_1cedec;
            case 0x1CEDF0u: goto label_1cedf0;
            case 0x1CEDF4u: goto label_1cedf4;
            case 0x1CEDF8u: goto label_1cedf8;
            case 0x1CEDFCu: goto label_1cedfc;
            case 0x1CEE00u: goto label_1cee00;
            case 0x1CEE04u: goto label_1cee04;
            case 0x1CEE08u: goto label_1cee08;
            case 0x1CEE0Cu: goto label_1cee0c;
            case 0x1CEE10u: goto label_1cee10;
            case 0x1CEE14u: goto label_1cee14;
            case 0x1CEE18u: goto label_1cee18;
            case 0x1CEE1Cu: goto label_1cee1c;
            case 0x1CEE20u: goto label_1cee20;
            case 0x1CEE24u: goto label_1cee24;
            case 0x1CEE28u: goto label_1cee28;
            case 0x1CEE2Cu: goto label_1cee2c;
            case 0x1CEE30u: goto label_1cee30;
            case 0x1CEE34u: goto label_1cee34;
            case 0x1CEE38u: goto label_1cee38;
            case 0x1CEE3Cu: goto label_1cee3c;
            case 0x1CEE40u: goto label_1cee40;
            case 0x1CEE44u: goto label_1cee44;
            case 0x1CEE48u: goto label_1cee48;
            case 0x1CEE4Cu: goto label_1cee4c;
            case 0x1CEE50u: goto label_1cee50;
            case 0x1CEE54u: goto label_1cee54;
            case 0x1CEE58u: goto label_1cee58;
            case 0x1CEE5Cu: goto label_1cee5c;
            case 0x1CEE60u: goto label_1cee60;
            case 0x1CEE64u: goto label_1cee64;
            case 0x1CEE68u: goto label_1cee68;
            case 0x1CEE6Cu: goto label_1cee6c;
            case 0x1CEE70u: goto label_1cee70;
            case 0x1CEE74u: goto label_1cee74;
            case 0x1CEE78u: goto label_1cee78;
            case 0x1CEE7Cu: goto label_1cee7c;
            case 0x1CEE80u: goto label_1cee80;
            case 0x1CEE84u: goto label_1cee84;
            case 0x1CEE88u: goto label_1cee88;
            case 0x1CEE8Cu: goto label_1cee8c;
            case 0x1CEE90u: goto label_1cee90;
            case 0x1CEE94u: goto label_1cee94;
            case 0x1CEE98u: goto label_1cee98;
            case 0x1CEE9Cu: goto label_1cee9c;
            case 0x1CEEA0u: goto label_1ceea0;
            case 0x1CEEA4u: goto label_1ceea4;
            case 0x1CEEA8u: goto label_1ceea8;
            case 0x1CEEACu: goto label_1ceeac;
            case 0x1CEEB0u: goto label_1ceeb0;
            case 0x1CEEB4u: goto label_1ceeb4;
            case 0x1CEEB8u: goto label_1ceeb8;
            case 0x1CEEBCu: goto label_1ceebc;
            case 0x1CEEC0u: goto label_1ceec0;
            case 0x1CEEC4u: goto label_1ceec4;
            case 0x1CEEC8u: goto label_1ceec8;
            case 0x1CEECCu: goto label_1ceecc;
            case 0x1CEED0u: goto label_1ceed0;
            case 0x1CEED4u: goto label_1ceed4;
            case 0x1CEED8u: goto label_1ceed8;
            case 0x1CEEDCu: goto label_1ceedc;
            case 0x1CEEE0u: goto label_1ceee0;
            case 0x1CEEE4u: goto label_1ceee4;
            case 0x1CEEE8u: goto label_1ceee8;
            case 0x1CEEECu: goto label_1ceeec;
            case 0x1CEEF0u: goto label_1ceef0;
            case 0x1CEEF4u: goto label_1ceef4;
            case 0x1CEEF8u: goto label_1ceef8;
            case 0x1CEEFCu: goto label_1ceefc;
            case 0x1CEF00u: goto label_1cef00;
            case 0x1CEF04u: goto label_1cef04;
            case 0x1CEF08u: goto label_1cef08;
            case 0x1CEF0Cu: goto label_1cef0c;
            case 0x1CEF10u: goto label_1cef10;
            case 0x1CEF14u: goto label_1cef14;
            case 0x1CEF18u: goto label_1cef18;
            case 0x1CEF1Cu: goto label_1cef1c;
            case 0x1CEF20u: goto label_1cef20;
            case 0x1CEF24u: goto label_1cef24;
            case 0x1CEF28u: goto label_1cef28;
            case 0x1CEF2Cu: goto label_1cef2c;
            case 0x1CEF30u: goto label_1cef30;
            case 0x1CEF34u: goto label_1cef34;
            case 0x1CEF38u: goto label_1cef38;
            case 0x1CEF3Cu: goto label_1cef3c;
            case 0x1CEF40u: goto label_1cef40;
            case 0x1CEF44u: goto label_1cef44;
            case 0x1CEF48u: goto label_1cef48;
            case 0x1CEF4Cu: goto label_1cef4c;
            case 0x1CEF50u: goto label_1cef50;
            case 0x1CEF54u: goto label_1cef54;
            case 0x1CEF58u: goto label_1cef58;
            case 0x1CEF5Cu: goto label_1cef5c;
            case 0x1CEF60u: goto label_1cef60;
            case 0x1CEF64u: goto label_1cef64;
            case 0x1CEF68u: goto label_1cef68;
            case 0x1CEF6Cu: goto label_1cef6c;
            case 0x1CEF70u: goto label_1cef70;
            case 0x1CEF74u: goto label_1cef74;
            case 0x1CEF78u: goto label_1cef78;
            case 0x1CEF7Cu: goto label_1cef7c;
            case 0x1CEF80u: goto label_1cef80;
            case 0x1CEF84u: goto label_1cef84;
            case 0x1CEF88u: goto label_1cef88;
            case 0x1CEF8Cu: goto label_1cef8c;
            case 0x1CEF90u: goto label_1cef90;
            case 0x1CEF94u: goto label_1cef94;
            case 0x1CEF98u: goto label_1cef98;
            case 0x1CEF9Cu: goto label_1cef9c;
            case 0x1CEFA0u: goto label_1cefa0;
            case 0x1CEFA4u: goto label_1cefa4;
            case 0x1CEFA8u: goto label_1cefa8;
            case 0x1CEFACu: goto label_1cefac;
            case 0x1CEFB0u: goto label_1cefb0;
            case 0x1CEFB4u: goto label_1cefb4;
            case 0x1CEFB8u: goto label_1cefb8;
            case 0x1CEFBCu: goto label_1cefbc;
            case 0x1CEFC0u: goto label_1cefc0;
            case 0x1CEFC4u: goto label_1cefc4;
            case 0x1CEFC8u: goto label_1cefc8;
            case 0x1CEFCCu: goto label_1cefcc;
            case 0x1CEFD0u: goto label_1cefd0;
            case 0x1CEFD4u: goto label_1cefd4;
            case 0x1CEFD8u: goto label_1cefd8;
            case 0x1CEFDCu: goto label_1cefdc;
            case 0x1CEFE0u: goto label_1cefe0;
            case 0x1CEFE4u: goto label_1cefe4;
            case 0x1CEFE8u: goto label_1cefe8;
            case 0x1CEFECu: goto label_1cefec;
            case 0x1CEFF0u: goto label_1ceff0;
            case 0x1CEFF4u: goto label_1ceff4;
            case 0x1CEFF8u: goto label_1ceff8;
            case 0x1CEFFCu: goto label_1ceffc;
            case 0x1CF000u: goto label_1cf000;
            case 0x1CF004u: goto label_1cf004;
            case 0x1CF008u: goto label_1cf008;
            case 0x1CF00Cu: goto label_1cf00c;
            case 0x1CF010u: goto label_1cf010;
            case 0x1CF014u: goto label_1cf014;
            case 0x1CF018u: goto label_1cf018;
            case 0x1CF01Cu: goto label_1cf01c;
            case 0x1CF020u: goto label_1cf020;
            case 0x1CF024u: goto label_1cf024;
            case 0x1CF028u: goto label_1cf028;
            case 0x1CF02Cu: goto label_1cf02c;
            case 0x1CF030u: goto label_1cf030;
            case 0x1CF034u: goto label_1cf034;
            case 0x1CF038u: goto label_1cf038;
            case 0x1CF03Cu: goto label_1cf03c;
            case 0x1CF040u: goto label_1cf040;
            case 0x1CF044u: goto label_1cf044;
            case 0x1CF048u: goto label_1cf048;
            case 0x1CF04Cu: goto label_1cf04c;
            case 0x1CF050u: goto label_1cf050;
            case 0x1CF054u: goto label_1cf054;
            case 0x1CF058u: goto label_1cf058;
            case 0x1CF05Cu: goto label_1cf05c;
            case 0x1CF060u: goto label_1cf060;
            case 0x1CF064u: goto label_1cf064;
            case 0x1CF068u: goto label_1cf068;
            case 0x1CF06Cu: goto label_1cf06c;
            case 0x1CF070u: goto label_1cf070;
            case 0x1CF074u: goto label_1cf074;
            case 0x1CF078u: goto label_1cf078;
            case 0x1CF07Cu: goto label_1cf07c;
            case 0x1CF080u: goto label_1cf080;
            case 0x1CF084u: goto label_1cf084;
            case 0x1CF088u: goto label_1cf088;
            case 0x1CF08Cu: goto label_1cf08c;
            case 0x1CF090u: goto label_1cf090;
            case 0x1CF094u: goto label_1cf094;
            case 0x1CF098u: goto label_1cf098;
            case 0x1CF09Cu: goto label_1cf09c;
            case 0x1CF0A0u: goto label_1cf0a0;
            case 0x1CF0A4u: goto label_1cf0a4;
            case 0x1CF0A8u: goto label_1cf0a8;
            case 0x1CF0ACu: goto label_1cf0ac;
            case 0x1CF0B0u: goto label_1cf0b0;
            case 0x1CF0B4u: goto label_1cf0b4;
            case 0x1CF0B8u: goto label_1cf0b8;
            case 0x1CF0BCu: goto label_1cf0bc;
            case 0x1CF0C0u: goto label_1cf0c0;
            case 0x1CF0C4u: goto label_1cf0c4;
            case 0x1CF0C8u: goto label_1cf0c8;
            case 0x1CF0CCu: goto label_1cf0cc;
            case 0x1CF0D0u: goto label_1cf0d0;
            case 0x1CF0D4u: goto label_1cf0d4;
            case 0x1CF0D8u: goto label_1cf0d8;
            case 0x1CF0DCu: goto label_1cf0dc;
            case 0x1CF0E0u: goto label_1cf0e0;
            case 0x1CF0E4u: goto label_1cf0e4;
            case 0x1CF0E8u: goto label_1cf0e8;
            case 0x1CF0ECu: goto label_1cf0ec;
            case 0x1CF0F0u: goto label_1cf0f0;
            case 0x1CF0F4u: goto label_1cf0f4;
            case 0x1CF0F8u: goto label_1cf0f8;
            case 0x1CF0FCu: goto label_1cf0fc;
            case 0x1CF100u: goto label_1cf100;
            case 0x1CF104u: goto label_1cf104;
            case 0x1CF108u: goto label_1cf108;
            case 0x1CF10Cu: goto label_1cf10c;
            case 0x1CF110u: goto label_1cf110;
            case 0x1CF114u: goto label_1cf114;
            case 0x1CF118u: goto label_1cf118;
            case 0x1CF11Cu: goto label_1cf11c;
            case 0x1CF120u: goto label_1cf120;
            case 0x1CF124u: goto label_1cf124;
            case 0x1CF128u: goto label_1cf128;
            case 0x1CF12Cu: goto label_1cf12c;
            case 0x1CF130u: goto label_1cf130;
            case 0x1CF134u: goto label_1cf134;
            case 0x1CF138u: goto label_1cf138;
            case 0x1CF13Cu: goto label_1cf13c;
            case 0x1CF140u: goto label_1cf140;
            case 0x1CF144u: goto label_1cf144;
            case 0x1CF148u: goto label_1cf148;
            case 0x1CF14Cu: goto label_1cf14c;
            case 0x1CF150u: goto label_1cf150;
            case 0x1CF154u: goto label_1cf154;
            case 0x1CF158u: goto label_1cf158;
            case 0x1CF15Cu: goto label_1cf15c;
            case 0x1CF160u: goto label_1cf160;
            case 0x1CF164u: goto label_1cf164;
            case 0x1CF168u: goto label_1cf168;
            case 0x1CF16Cu: goto label_1cf16c;
            case 0x1CF170u: goto label_1cf170;
            case 0x1CF174u: goto label_1cf174;
            case 0x1CF178u: goto label_1cf178;
            case 0x1CF17Cu: goto label_1cf17c;
            case 0x1CF180u: goto label_1cf180;
            case 0x1CF184u: goto label_1cf184;
            case 0x1CF188u: goto label_1cf188;
            case 0x1CF18Cu: goto label_1cf18c;
            case 0x1CF190u: goto label_1cf190;
            case 0x1CF194u: goto label_1cf194;
            case 0x1CF198u: goto label_1cf198;
            case 0x1CF19Cu: goto label_1cf19c;
            case 0x1CF1A0u: goto label_1cf1a0;
            case 0x1CF1A4u: goto label_1cf1a4;
            case 0x1CF1A8u: goto label_1cf1a8;
            case 0x1CF1ACu: goto label_1cf1ac;
            case 0x1CF1B0u: goto label_1cf1b0;
            case 0x1CF1B4u: goto label_1cf1b4;
            case 0x1CF1B8u: goto label_1cf1b8;
            case 0x1CF1BCu: goto label_1cf1bc;
            case 0x1CF1C0u: goto label_1cf1c0;
            case 0x1CF1C4u: goto label_1cf1c4;
            case 0x1CF1C8u: goto label_1cf1c8;
            case 0x1CF1CCu: goto label_1cf1cc;
            case 0x1CF1D0u: goto label_1cf1d0;
            case 0x1CF1D4u: goto label_1cf1d4;
            case 0x1CF1D8u: goto label_1cf1d8;
            case 0x1CF1DCu: goto label_1cf1dc;
            case 0x1CF1E0u: goto label_1cf1e0;
            case 0x1CF1E4u: goto label_1cf1e4;
            case 0x1CF1E8u: goto label_1cf1e8;
            case 0x1CF1ECu: goto label_1cf1ec;
            case 0x1CF1F0u: goto label_1cf1f0;
            case 0x1CF1F4u: goto label_1cf1f4;
            case 0x1CF1F8u: goto label_1cf1f8;
            case 0x1CF1FCu: goto label_1cf1fc;
            case 0x1CF200u: goto label_1cf200;
            case 0x1CF204u: goto label_1cf204;
            case 0x1CF208u: goto label_1cf208;
            case 0x1CF20Cu: goto label_1cf20c;
            case 0x1CF210u: goto label_1cf210;
            case 0x1CF214u: goto label_1cf214;
            case 0x1CF218u: goto label_1cf218;
            case 0x1CF21Cu: goto label_1cf21c;
            case 0x1CF220u: goto label_1cf220;
            case 0x1CF224u: goto label_1cf224;
            case 0x1CF228u: goto label_1cf228;
            case 0x1CF22Cu: goto label_1cf22c;
            case 0x1CF230u: goto label_1cf230;
            case 0x1CF234u: goto label_1cf234;
            case 0x1CF238u: goto label_1cf238;
            case 0x1CF23Cu: goto label_1cf23c;
            case 0x1CF240u: goto label_1cf240;
            case 0x1CF244u: goto label_1cf244;
            case 0x1CF248u: goto label_1cf248;
            case 0x1CF24Cu: goto label_1cf24c;
            case 0x1CF250u: goto label_1cf250;
            case 0x1CF254u: goto label_1cf254;
            case 0x1CF258u: goto label_1cf258;
            case 0x1CF25Cu: goto label_1cf25c;
            case 0x1CF260u: goto label_1cf260;
            case 0x1CF264u: goto label_1cf264;
            case 0x1CF268u: goto label_1cf268;
            case 0x1CF26Cu: goto label_1cf26c;
            case 0x1CF270u: goto label_1cf270;
            case 0x1CF274u: goto label_1cf274;
            case 0x1CF278u: goto label_1cf278;
            case 0x1CF27Cu: goto label_1cf27c;
            case 0x1CF280u: goto label_1cf280;
            case 0x1CF284u: goto label_1cf284;
            case 0x1CF288u: goto label_1cf288;
            case 0x1CF28Cu: goto label_1cf28c;
            case 0x1CF290u: goto label_1cf290;
            case 0x1CF294u: goto label_1cf294;
            case 0x1CF298u: goto label_1cf298;
            case 0x1CF29Cu: goto label_1cf29c;
            case 0x1CF2A0u: goto label_1cf2a0;
            case 0x1CF2A4u: goto label_1cf2a4;
            case 0x1CF2A8u: goto label_1cf2a8;
            case 0x1CF2ACu: goto label_1cf2ac;
            case 0x1CF2B0u: goto label_1cf2b0;
            case 0x1CF2B4u: goto label_1cf2b4;
            case 0x1CF2B8u: goto label_1cf2b8;
            case 0x1CF2BCu: goto label_1cf2bc;
            case 0x1CF2C0u: goto label_1cf2c0;
            case 0x1CF2C4u: goto label_1cf2c4;
            case 0x1CF2C8u: goto label_1cf2c8;
            case 0x1CF2CCu: goto label_1cf2cc;
            case 0x1CF2D0u: goto label_1cf2d0;
            case 0x1CF2D4u: goto label_1cf2d4;
            case 0x1CF2D8u: goto label_1cf2d8;
            case 0x1CF2DCu: goto label_1cf2dc;
            case 0x1CF2E0u: goto label_1cf2e0;
            case 0x1CF2E4u: goto label_1cf2e4;
            case 0x1CF2E8u: goto label_1cf2e8;
            case 0x1CF2ECu: goto label_1cf2ec;
            case 0x1CF2F0u: goto label_1cf2f0;
            case 0x1CF2F4u: goto label_1cf2f4;
            case 0x1CF2F8u: goto label_1cf2f8;
            case 0x1CF2FCu: goto label_1cf2fc;
            case 0x1CF300u: goto label_1cf300;
            case 0x1CF304u: goto label_1cf304;
            case 0x1CF308u: goto label_1cf308;
            case 0x1CF30Cu: goto label_1cf30c;
            case 0x1CF310u: goto label_1cf310;
            case 0x1CF314u: goto label_1cf314;
            case 0x1CF318u: goto label_1cf318;
            case 0x1CF31Cu: goto label_1cf31c;
            case 0x1CF320u: goto label_1cf320;
            case 0x1CF324u: goto label_1cf324;
            case 0x1CF328u: goto label_1cf328;
            case 0x1CF32Cu: goto label_1cf32c;
            case 0x1CF330u: goto label_1cf330;
            case 0x1CF334u: goto label_1cf334;
            case 0x1CF338u: goto label_1cf338;
            case 0x1CF33Cu: goto label_1cf33c;
            case 0x1CF340u: goto label_1cf340;
            case 0x1CF344u: goto label_1cf344;
            case 0x1CF348u: goto label_1cf348;
            case 0x1CF34Cu: goto label_1cf34c;
            case 0x1CF350u: goto label_1cf350;
            case 0x1CF354u: goto label_1cf354;
            case 0x1CF358u: goto label_1cf358;
            case 0x1CF35Cu: goto label_1cf35c;
            case 0x1CF360u: goto label_1cf360;
            case 0x1CF364u: goto label_1cf364;
            case 0x1CF368u: goto label_1cf368;
            case 0x1CF36Cu: goto label_1cf36c;
            case 0x1CF370u: goto label_1cf370;
            case 0x1CF374u: goto label_1cf374;
            case 0x1CF378u: goto label_1cf378;
            case 0x1CF37Cu: goto label_1cf37c;
            case 0x1CF380u: goto label_1cf380;
            case 0x1CF384u: goto label_1cf384;
            case 0x1CF388u: goto label_1cf388;
            case 0x1CF38Cu: goto label_1cf38c;
            case 0x1CF390u: goto label_1cf390;
            case 0x1CF394u: goto label_1cf394;
            case 0x1CF398u: goto label_1cf398;
            case 0x1CF39Cu: goto label_1cf39c;
            case 0x1CF3A0u: goto label_1cf3a0;
            case 0x1CF3A4u: goto label_1cf3a4;
            case 0x1CF3A8u: goto label_1cf3a8;
            case 0x1CF3ACu: goto label_1cf3ac;
            case 0x1CF3B0u: goto label_1cf3b0;
            case 0x1CF3B4u: goto label_1cf3b4;
            case 0x1CF3B8u: goto label_1cf3b8;
            case 0x1CF3BCu: goto label_1cf3bc;
            case 0x1CF3C0u: goto label_1cf3c0;
            case 0x1CF3C4u: goto label_1cf3c4;
            case 0x1CF3C8u: goto label_1cf3c8;
            case 0x1CF3CCu: goto label_1cf3cc;
            case 0x1CF3D0u: goto label_1cf3d0;
            case 0x1CF3D4u: goto label_1cf3d4;
            case 0x1CF3D8u: goto label_1cf3d8;
            case 0x1CF3DCu: goto label_1cf3dc;
            case 0x1CF3E0u: goto label_1cf3e0;
            case 0x1CF3E4u: goto label_1cf3e4;
            case 0x1CF3E8u: goto label_1cf3e8;
            case 0x1CF3ECu: goto label_1cf3ec;
            case 0x1CF3F0u: goto label_1cf3f0;
            case 0x1CF3F4u: goto label_1cf3f4;
            case 0x1CF3F8u: goto label_1cf3f8;
            case 0x1CF3FCu: goto label_1cf3fc;
            case 0x1CF400u: goto label_1cf400;
            case 0x1CF404u: goto label_1cf404;
            case 0x1CF408u: goto label_1cf408;
            case 0x1CF40Cu: goto label_1cf40c;
            case 0x1CF410u: goto label_1cf410;
            case 0x1CF414u: goto label_1cf414;
            case 0x1CF418u: goto label_1cf418;
            case 0x1CF41Cu: goto label_1cf41c;
            case 0x1CF420u: goto label_1cf420;
            case 0x1CF424u: goto label_1cf424;
            case 0x1CF428u: goto label_1cf428;
            case 0x1CF42Cu: goto label_1cf42c;
            case 0x1CF430u: goto label_1cf430;
            case 0x1CF434u: goto label_1cf434;
            case 0x1CF438u: goto label_1cf438;
            case 0x1CF43Cu: goto label_1cf43c;
            case 0x1CF440u: goto label_1cf440;
            case 0x1CF444u: goto label_1cf444;
            case 0x1CF448u: goto label_1cf448;
            case 0x1CF44Cu: goto label_1cf44c;
            case 0x1CF450u: goto label_1cf450;
            case 0x1CF454u: goto label_1cf454;
            case 0x1CF458u: goto label_1cf458;
            case 0x1CF45Cu: goto label_1cf45c;
            case 0x1CF460u: goto label_1cf460;
            case 0x1CF464u: goto label_1cf464;
            case 0x1CF468u: goto label_1cf468;
            case 0x1CF46Cu: goto label_1cf46c;
            case 0x1CF470u: goto label_1cf470;
            case 0x1CF474u: goto label_1cf474;
            case 0x1CF478u: goto label_1cf478;
            case 0x1CF47Cu: goto label_1cf47c;
            case 0x1CF480u: goto label_1cf480;
            case 0x1CF484u: goto label_1cf484;
            case 0x1CF488u: goto label_1cf488;
            case 0x1CF48Cu: goto label_1cf48c;
            case 0x1CF490u: goto label_1cf490;
            case 0x1CF494u: goto label_1cf494;
            case 0x1CF498u: goto label_1cf498;
            case 0x1CF49Cu: goto label_1cf49c;
            case 0x1CF4A0u: goto label_1cf4a0;
            case 0x1CF4A4u: goto label_1cf4a4;
            case 0x1CF4A8u: goto label_1cf4a8;
            case 0x1CF4ACu: goto label_1cf4ac;
            case 0x1CF4B0u: goto label_1cf4b0;
            case 0x1CF4B4u: goto label_1cf4b4;
            case 0x1CF4B8u: goto label_1cf4b8;
            case 0x1CF4BCu: goto label_1cf4bc;
            case 0x1CF4C0u: goto label_1cf4c0;
            case 0x1CF4C4u: goto label_1cf4c4;
            case 0x1CF4C8u: goto label_1cf4c8;
            case 0x1CF4CCu: goto label_1cf4cc;
            case 0x1CF4D0u: goto label_1cf4d0;
            case 0x1CF4D4u: goto label_1cf4d4;
            case 0x1CF4D8u: goto label_1cf4d8;
            case 0x1CF4DCu: goto label_1cf4dc;
            case 0x1CF4E0u: goto label_1cf4e0;
            case 0x1CF4E4u: goto label_1cf4e4;
            case 0x1CF4E8u: goto label_1cf4e8;
            case 0x1CF4ECu: goto label_1cf4ec;
            case 0x1CF4F0u: goto label_1cf4f0;
            case 0x1CF4F4u: goto label_1cf4f4;
            case 0x1CF4F8u: goto label_1cf4f8;
            case 0x1CF4FCu: goto label_1cf4fc;
            case 0x1CF500u: goto label_1cf500;
            case 0x1CF504u: goto label_1cf504;
            case 0x1CF508u: goto label_1cf508;
            case 0x1CF50Cu: goto label_1cf50c;
            case 0x1CF510u: goto label_1cf510;
            case 0x1CF514u: goto label_1cf514;
            case 0x1CF518u: goto label_1cf518;
            case 0x1CF51Cu: goto label_1cf51c;
            case 0x1CF520u: goto label_1cf520;
            case 0x1CF524u: goto label_1cf524;
            case 0x1CF528u: goto label_1cf528;
            case 0x1CF52Cu: goto label_1cf52c;
            case 0x1CF530u: goto label_1cf530;
            case 0x1CF534u: goto label_1cf534;
            case 0x1CF538u: goto label_1cf538;
            case 0x1CF53Cu: goto label_1cf53c;
            case 0x1CF540u: goto label_1cf540;
            case 0x1CF544u: goto label_1cf544;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF50Cu; }
            if (ctx->pc != 0x1CF50Cu) { return; }
        }
    }
    ctx->pc = 0x1CF50Cu;
label_1cf50c:
    // 0x1cf50c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1cf510:
    if (ctx->pc == 0x1CF510u) {
        ctx->pc = 0x1CF514u;
        goto label_1cf514;
    }
    ctx->pc = 0x1CF50Cu;
    {
        const bool branch_taken_0x1cf50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf50c) {
            ctx->pc = 0x1CF538u;
            goto label_1cf538;
        }
    }
    ctx->pc = 0x1CF514u;
label_1cf514:
    // 0x1cf514: 0x0  nop
    ctx->pc = 0x1cf514u;
    // NOP
label_1cf518:
    // 0x1cf518: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1cf518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
label_1cf51c:
    // 0x1cf51c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cf51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cf520:
    // 0x1cf520: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1cf520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1cf524:
    // 0x1cf524: 0x24c6eb90  addiu       $a2, $a2, -0x1470
    ctx->pc = 0x1cf524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962064));
label_1cf528:
    // 0x1cf528: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cf528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cf52c:
    // 0x1cf52c: 0xc053ca4  jal         func_14F290
label_1cf530:
    if (ctx->pc == 0x1CF530u) {
        ctx->pc = 0x1CF530u;
            // 0x1cf530: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF534u;
        goto label_1cf534;
    }
    ctx->pc = 0x1CF52Cu;
    SET_GPR_U32(ctx, 31, 0x1CF534u);
    ctx->pc = 0x1CF530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF52Cu;
            // 0x1cf530: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF534u; }
        if (ctx->pc != 0x1CF534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF534u; }
        if (ctx->pc != 0x1CF534u) { return; }
    }
    ctx->pc = 0x1CF534u;
label_1cf534:
    // 0x1cf534: 0x0  nop
    ctx->pc = 0x1cf534u;
    // NOP
label_1cf538:
    // 0x1cf538: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cf53c:
    // 0x1cf53c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cf540:
    // 0x1cf540: 0x3e00008  jr          $ra
label_1cf544:
    if (ctx->pc == 0x1CF544u) {
        ctx->pc = 0x1CF544u;
            // 0x1cf544: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1CF548u;
        goto label_fallthrough_0x1cf540;
    }
    ctx->pc = 0x1CF540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF540u;
            // 0x1cf544: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEDD0u: goto label_1cedd0;
            case 0x1CEDD4u: goto label_1cedd4;
            case 0x1CEDD8u: goto label_1cedd8;
            case 0x1CEDDCu: goto label_1ceddc;
            case 0x1CEDE0u: goto label_1cede0;
            case 0x1CEDE4u: goto label_1cede4;
            case 0x1CEDE8u: goto label_1cede8;
            case 0x1CEDECu: goto label_1cedec;
            case 0x1CEDF0u: goto label_1cedf0;
            case 0x1CEDF4u: goto label_1cedf4;
            case 0x1CEDF8u: goto label_1cedf8;
            case 0x1CEDFCu: goto label_1cedfc;
            case 0x1CEE00u: goto label_1cee00;
            case 0x1CEE04u: goto label_1cee04;
            case 0x1CEE08u: goto label_1cee08;
            case 0x1CEE0Cu: goto label_1cee0c;
            case 0x1CEE10u: goto label_1cee10;
            case 0x1CEE14u: goto label_1cee14;
            case 0x1CEE18u: goto label_1cee18;
            case 0x1CEE1Cu: goto label_1cee1c;
            case 0x1CEE20u: goto label_1cee20;
            case 0x1CEE24u: goto label_1cee24;
            case 0x1CEE28u: goto label_1cee28;
            case 0x1CEE2Cu: goto label_1cee2c;
            case 0x1CEE30u: goto label_1cee30;
            case 0x1CEE34u: goto label_1cee34;
            case 0x1CEE38u: goto label_1cee38;
            case 0x1CEE3Cu: goto label_1cee3c;
            case 0x1CEE40u: goto label_1cee40;
            case 0x1CEE44u: goto label_1cee44;
            case 0x1CEE48u: goto label_1cee48;
            case 0x1CEE4Cu: goto label_1cee4c;
            case 0x1CEE50u: goto label_1cee50;
            case 0x1CEE54u: goto label_1cee54;
            case 0x1CEE58u: goto label_1cee58;
            case 0x1CEE5Cu: goto label_1cee5c;
            case 0x1CEE60u: goto label_1cee60;
            case 0x1CEE64u: goto label_1cee64;
            case 0x1CEE68u: goto label_1cee68;
            case 0x1CEE6Cu: goto label_1cee6c;
            case 0x1CEE70u: goto label_1cee70;
            case 0x1CEE74u: goto label_1cee74;
            case 0x1CEE78u: goto label_1cee78;
            case 0x1CEE7Cu: goto label_1cee7c;
            case 0x1CEE80u: goto label_1cee80;
            case 0x1CEE84u: goto label_1cee84;
            case 0x1CEE88u: goto label_1cee88;
            case 0x1CEE8Cu: goto label_1cee8c;
            case 0x1CEE90u: goto label_1cee90;
            case 0x1CEE94u: goto label_1cee94;
            case 0x1CEE98u: goto label_1cee98;
            case 0x1CEE9Cu: goto label_1cee9c;
            case 0x1CEEA0u: goto label_1ceea0;
            case 0x1CEEA4u: goto label_1ceea4;
            case 0x1CEEA8u: goto label_1ceea8;
            case 0x1CEEACu: goto label_1ceeac;
            case 0x1CEEB0u: goto label_1ceeb0;
            case 0x1CEEB4u: goto label_1ceeb4;
            case 0x1CEEB8u: goto label_1ceeb8;
            case 0x1CEEBCu: goto label_1ceebc;
            case 0x1CEEC0u: goto label_1ceec0;
            case 0x1CEEC4u: goto label_1ceec4;
            case 0x1CEEC8u: goto label_1ceec8;
            case 0x1CEECCu: goto label_1ceecc;
            case 0x1CEED0u: goto label_1ceed0;
            case 0x1CEED4u: goto label_1ceed4;
            case 0x1CEED8u: goto label_1ceed8;
            case 0x1CEEDCu: goto label_1ceedc;
            case 0x1CEEE0u: goto label_1ceee0;
            case 0x1CEEE4u: goto label_1ceee4;
            case 0x1CEEE8u: goto label_1ceee8;
            case 0x1CEEECu: goto label_1ceeec;
            case 0x1CEEF0u: goto label_1ceef0;
            case 0x1CEEF4u: goto label_1ceef4;
            case 0x1CEEF8u: goto label_1ceef8;
            case 0x1CEEFCu: goto label_1ceefc;
            case 0x1CEF00u: goto label_1cef00;
            case 0x1CEF04u: goto label_1cef04;
            case 0x1CEF08u: goto label_1cef08;
            case 0x1CEF0Cu: goto label_1cef0c;
            case 0x1CEF10u: goto label_1cef10;
            case 0x1CEF14u: goto label_1cef14;
            case 0x1CEF18u: goto label_1cef18;
            case 0x1CEF1Cu: goto label_1cef1c;
            case 0x1CEF20u: goto label_1cef20;
            case 0x1CEF24u: goto label_1cef24;
            case 0x1CEF28u: goto label_1cef28;
            case 0x1CEF2Cu: goto label_1cef2c;
            case 0x1CEF30u: goto label_1cef30;
            case 0x1CEF34u: goto label_1cef34;
            case 0x1CEF38u: goto label_1cef38;
            case 0x1CEF3Cu: goto label_1cef3c;
            case 0x1CEF40u: goto label_1cef40;
            case 0x1CEF44u: goto label_1cef44;
            case 0x1CEF48u: goto label_1cef48;
            case 0x1CEF4Cu: goto label_1cef4c;
            case 0x1CEF50u: goto label_1cef50;
            case 0x1CEF54u: goto label_1cef54;
            case 0x1CEF58u: goto label_1cef58;
            case 0x1CEF5Cu: goto label_1cef5c;
            case 0x1CEF60u: goto label_1cef60;
            case 0x1CEF64u: goto label_1cef64;
            case 0x1CEF68u: goto label_1cef68;
            case 0x1CEF6Cu: goto label_1cef6c;
            case 0x1CEF70u: goto label_1cef70;
            case 0x1CEF74u: goto label_1cef74;
            case 0x1CEF78u: goto label_1cef78;
            case 0x1CEF7Cu: goto label_1cef7c;
            case 0x1CEF80u: goto label_1cef80;
            case 0x1CEF84u: goto label_1cef84;
            case 0x1CEF88u: goto label_1cef88;
            case 0x1CEF8Cu: goto label_1cef8c;
            case 0x1CEF90u: goto label_1cef90;
            case 0x1CEF94u: goto label_1cef94;
            case 0x1CEF98u: goto label_1cef98;
            case 0x1CEF9Cu: goto label_1cef9c;
            case 0x1CEFA0u: goto label_1cefa0;
            case 0x1CEFA4u: goto label_1cefa4;
            case 0x1CEFA8u: goto label_1cefa8;
            case 0x1CEFACu: goto label_1cefac;
            case 0x1CEFB0u: goto label_1cefb0;
            case 0x1CEFB4u: goto label_1cefb4;
            case 0x1CEFB8u: goto label_1cefb8;
            case 0x1CEFBCu: goto label_1cefbc;
            case 0x1CEFC0u: goto label_1cefc0;
            case 0x1CEFC4u: goto label_1cefc4;
            case 0x1CEFC8u: goto label_1cefc8;
            case 0x1CEFCCu: goto label_1cefcc;
            case 0x1CEFD0u: goto label_1cefd0;
            case 0x1CEFD4u: goto label_1cefd4;
            case 0x1CEFD8u: goto label_1cefd8;
            case 0x1CEFDCu: goto label_1cefdc;
            case 0x1CEFE0u: goto label_1cefe0;
            case 0x1CEFE4u: goto label_1cefe4;
            case 0x1CEFE8u: goto label_1cefe8;
            case 0x1CEFECu: goto label_1cefec;
            case 0x1CEFF0u: goto label_1ceff0;
            case 0x1CEFF4u: goto label_1ceff4;
            case 0x1CEFF8u: goto label_1ceff8;
            case 0x1CEFFCu: goto label_1ceffc;
            case 0x1CF000u: goto label_1cf000;
            case 0x1CF004u: goto label_1cf004;
            case 0x1CF008u: goto label_1cf008;
            case 0x1CF00Cu: goto label_1cf00c;
            case 0x1CF010u: goto label_1cf010;
            case 0x1CF014u: goto label_1cf014;
            case 0x1CF018u: goto label_1cf018;
            case 0x1CF01Cu: goto label_1cf01c;
            case 0x1CF020u: goto label_1cf020;
            case 0x1CF024u: goto label_1cf024;
            case 0x1CF028u: goto label_1cf028;
            case 0x1CF02Cu: goto label_1cf02c;
            case 0x1CF030u: goto label_1cf030;
            case 0x1CF034u: goto label_1cf034;
            case 0x1CF038u: goto label_1cf038;
            case 0x1CF03Cu: goto label_1cf03c;
            case 0x1CF040u: goto label_1cf040;
            case 0x1CF044u: goto label_1cf044;
            case 0x1CF048u: goto label_1cf048;
            case 0x1CF04Cu: goto label_1cf04c;
            case 0x1CF050u: goto label_1cf050;
            case 0x1CF054u: goto label_1cf054;
            case 0x1CF058u: goto label_1cf058;
            case 0x1CF05Cu: goto label_1cf05c;
            case 0x1CF060u: goto label_1cf060;
            case 0x1CF064u: goto label_1cf064;
            case 0x1CF068u: goto label_1cf068;
            case 0x1CF06Cu: goto label_1cf06c;
            case 0x1CF070u: goto label_1cf070;
            case 0x1CF074u: goto label_1cf074;
            case 0x1CF078u: goto label_1cf078;
            case 0x1CF07Cu: goto label_1cf07c;
            case 0x1CF080u: goto label_1cf080;
            case 0x1CF084u: goto label_1cf084;
            case 0x1CF088u: goto label_1cf088;
            case 0x1CF08Cu: goto label_1cf08c;
            case 0x1CF090u: goto label_1cf090;
            case 0x1CF094u: goto label_1cf094;
            case 0x1CF098u: goto label_1cf098;
            case 0x1CF09Cu: goto label_1cf09c;
            case 0x1CF0A0u: goto label_1cf0a0;
            case 0x1CF0A4u: goto label_1cf0a4;
            case 0x1CF0A8u: goto label_1cf0a8;
            case 0x1CF0ACu: goto label_1cf0ac;
            case 0x1CF0B0u: goto label_1cf0b0;
            case 0x1CF0B4u: goto label_1cf0b4;
            case 0x1CF0B8u: goto label_1cf0b8;
            case 0x1CF0BCu: goto label_1cf0bc;
            case 0x1CF0C0u: goto label_1cf0c0;
            case 0x1CF0C4u: goto label_1cf0c4;
            case 0x1CF0C8u: goto label_1cf0c8;
            case 0x1CF0CCu: goto label_1cf0cc;
            case 0x1CF0D0u: goto label_1cf0d0;
            case 0x1CF0D4u: goto label_1cf0d4;
            case 0x1CF0D8u: goto label_1cf0d8;
            case 0x1CF0DCu: goto label_1cf0dc;
            case 0x1CF0E0u: goto label_1cf0e0;
            case 0x1CF0E4u: goto label_1cf0e4;
            case 0x1CF0E8u: goto label_1cf0e8;
            case 0x1CF0ECu: goto label_1cf0ec;
            case 0x1CF0F0u: goto label_1cf0f0;
            case 0x1CF0F4u: goto label_1cf0f4;
            case 0x1CF0F8u: goto label_1cf0f8;
            case 0x1CF0FCu: goto label_1cf0fc;
            case 0x1CF100u: goto label_1cf100;
            case 0x1CF104u: goto label_1cf104;
            case 0x1CF108u: goto label_1cf108;
            case 0x1CF10Cu: goto label_1cf10c;
            case 0x1CF110u: goto label_1cf110;
            case 0x1CF114u: goto label_1cf114;
            case 0x1CF118u: goto label_1cf118;
            case 0x1CF11Cu: goto label_1cf11c;
            case 0x1CF120u: goto label_1cf120;
            case 0x1CF124u: goto label_1cf124;
            case 0x1CF128u: goto label_1cf128;
            case 0x1CF12Cu: goto label_1cf12c;
            case 0x1CF130u: goto label_1cf130;
            case 0x1CF134u: goto label_1cf134;
            case 0x1CF138u: goto label_1cf138;
            case 0x1CF13Cu: goto label_1cf13c;
            case 0x1CF140u: goto label_1cf140;
            case 0x1CF144u: goto label_1cf144;
            case 0x1CF148u: goto label_1cf148;
            case 0x1CF14Cu: goto label_1cf14c;
            case 0x1CF150u: goto label_1cf150;
            case 0x1CF154u: goto label_1cf154;
            case 0x1CF158u: goto label_1cf158;
            case 0x1CF15Cu: goto label_1cf15c;
            case 0x1CF160u: goto label_1cf160;
            case 0x1CF164u: goto label_1cf164;
            case 0x1CF168u: goto label_1cf168;
            case 0x1CF16Cu: goto label_1cf16c;
            case 0x1CF170u: goto label_1cf170;
            case 0x1CF174u: goto label_1cf174;
            case 0x1CF178u: goto label_1cf178;
            case 0x1CF17Cu: goto label_1cf17c;
            case 0x1CF180u: goto label_1cf180;
            case 0x1CF184u: goto label_1cf184;
            case 0x1CF188u: goto label_1cf188;
            case 0x1CF18Cu: goto label_1cf18c;
            case 0x1CF190u: goto label_1cf190;
            case 0x1CF194u: goto label_1cf194;
            case 0x1CF198u: goto label_1cf198;
            case 0x1CF19Cu: goto label_1cf19c;
            case 0x1CF1A0u: goto label_1cf1a0;
            case 0x1CF1A4u: goto label_1cf1a4;
            case 0x1CF1A8u: goto label_1cf1a8;
            case 0x1CF1ACu: goto label_1cf1ac;
            case 0x1CF1B0u: goto label_1cf1b0;
            case 0x1CF1B4u: goto label_1cf1b4;
            case 0x1CF1B8u: goto label_1cf1b8;
            case 0x1CF1BCu: goto label_1cf1bc;
            case 0x1CF1C0u: goto label_1cf1c0;
            case 0x1CF1C4u: goto label_1cf1c4;
            case 0x1CF1C8u: goto label_1cf1c8;
            case 0x1CF1CCu: goto label_1cf1cc;
            case 0x1CF1D0u: goto label_1cf1d0;
            case 0x1CF1D4u: goto label_1cf1d4;
            case 0x1CF1D8u: goto label_1cf1d8;
            case 0x1CF1DCu: goto label_1cf1dc;
            case 0x1CF1E0u: goto label_1cf1e0;
            case 0x1CF1E4u: goto label_1cf1e4;
            case 0x1CF1E8u: goto label_1cf1e8;
            case 0x1CF1ECu: goto label_1cf1ec;
            case 0x1CF1F0u: goto label_1cf1f0;
            case 0x1CF1F4u: goto label_1cf1f4;
            case 0x1CF1F8u: goto label_1cf1f8;
            case 0x1CF1FCu: goto label_1cf1fc;
            case 0x1CF200u: goto label_1cf200;
            case 0x1CF204u: goto label_1cf204;
            case 0x1CF208u: goto label_1cf208;
            case 0x1CF20Cu: goto label_1cf20c;
            case 0x1CF210u: goto label_1cf210;
            case 0x1CF214u: goto label_1cf214;
            case 0x1CF218u: goto label_1cf218;
            case 0x1CF21Cu: goto label_1cf21c;
            case 0x1CF220u: goto label_1cf220;
            case 0x1CF224u: goto label_1cf224;
            case 0x1CF228u: goto label_1cf228;
            case 0x1CF22Cu: goto label_1cf22c;
            case 0x1CF230u: goto label_1cf230;
            case 0x1CF234u: goto label_1cf234;
            case 0x1CF238u: goto label_1cf238;
            case 0x1CF23Cu: goto label_1cf23c;
            case 0x1CF240u: goto label_1cf240;
            case 0x1CF244u: goto label_1cf244;
            case 0x1CF248u: goto label_1cf248;
            case 0x1CF24Cu: goto label_1cf24c;
            case 0x1CF250u: goto label_1cf250;
            case 0x1CF254u: goto label_1cf254;
            case 0x1CF258u: goto label_1cf258;
            case 0x1CF25Cu: goto label_1cf25c;
            case 0x1CF260u: goto label_1cf260;
            case 0x1CF264u: goto label_1cf264;
            case 0x1CF268u: goto label_1cf268;
            case 0x1CF26Cu: goto label_1cf26c;
            case 0x1CF270u: goto label_1cf270;
            case 0x1CF274u: goto label_1cf274;
            case 0x1CF278u: goto label_1cf278;
            case 0x1CF27Cu: goto label_1cf27c;
            case 0x1CF280u: goto label_1cf280;
            case 0x1CF284u: goto label_1cf284;
            case 0x1CF288u: goto label_1cf288;
            case 0x1CF28Cu: goto label_1cf28c;
            case 0x1CF290u: goto label_1cf290;
            case 0x1CF294u: goto label_1cf294;
            case 0x1CF298u: goto label_1cf298;
            case 0x1CF29Cu: goto label_1cf29c;
            case 0x1CF2A0u: goto label_1cf2a0;
            case 0x1CF2A4u: goto label_1cf2a4;
            case 0x1CF2A8u: goto label_1cf2a8;
            case 0x1CF2ACu: goto label_1cf2ac;
            case 0x1CF2B0u: goto label_1cf2b0;
            case 0x1CF2B4u: goto label_1cf2b4;
            case 0x1CF2B8u: goto label_1cf2b8;
            case 0x1CF2BCu: goto label_1cf2bc;
            case 0x1CF2C0u: goto label_1cf2c0;
            case 0x1CF2C4u: goto label_1cf2c4;
            case 0x1CF2C8u: goto label_1cf2c8;
            case 0x1CF2CCu: goto label_1cf2cc;
            case 0x1CF2D0u: goto label_1cf2d0;
            case 0x1CF2D4u: goto label_1cf2d4;
            case 0x1CF2D8u: goto label_1cf2d8;
            case 0x1CF2DCu: goto label_1cf2dc;
            case 0x1CF2E0u: goto label_1cf2e0;
            case 0x1CF2E4u: goto label_1cf2e4;
            case 0x1CF2E8u: goto label_1cf2e8;
            case 0x1CF2ECu: goto label_1cf2ec;
            case 0x1CF2F0u: goto label_1cf2f0;
            case 0x1CF2F4u: goto label_1cf2f4;
            case 0x1CF2F8u: goto label_1cf2f8;
            case 0x1CF2FCu: goto label_1cf2fc;
            case 0x1CF300u: goto label_1cf300;
            case 0x1CF304u: goto label_1cf304;
            case 0x1CF308u: goto label_1cf308;
            case 0x1CF30Cu: goto label_1cf30c;
            case 0x1CF310u: goto label_1cf310;
            case 0x1CF314u: goto label_1cf314;
            case 0x1CF318u: goto label_1cf318;
            case 0x1CF31Cu: goto label_1cf31c;
            case 0x1CF320u: goto label_1cf320;
            case 0x1CF324u: goto label_1cf324;
            case 0x1CF328u: goto label_1cf328;
            case 0x1CF32Cu: goto label_1cf32c;
            case 0x1CF330u: goto label_1cf330;
            case 0x1CF334u: goto label_1cf334;
            case 0x1CF338u: goto label_1cf338;
            case 0x1CF33Cu: goto label_1cf33c;
            case 0x1CF340u: goto label_1cf340;
            case 0x1CF344u: goto label_1cf344;
            case 0x1CF348u: goto label_1cf348;
            case 0x1CF34Cu: goto label_1cf34c;
            case 0x1CF350u: goto label_1cf350;
            case 0x1CF354u: goto label_1cf354;
            case 0x1CF358u: goto label_1cf358;
            case 0x1CF35Cu: goto label_1cf35c;
            case 0x1CF360u: goto label_1cf360;
            case 0x1CF364u: goto label_1cf364;
            case 0x1CF368u: goto label_1cf368;
            case 0x1CF36Cu: goto label_1cf36c;
            case 0x1CF370u: goto label_1cf370;
            case 0x1CF374u: goto label_1cf374;
            case 0x1CF378u: goto label_1cf378;
            case 0x1CF37Cu: goto label_1cf37c;
            case 0x1CF380u: goto label_1cf380;
            case 0x1CF384u: goto label_1cf384;
            case 0x1CF388u: goto label_1cf388;
            case 0x1CF38Cu: goto label_1cf38c;
            case 0x1CF390u: goto label_1cf390;
            case 0x1CF394u: goto label_1cf394;
            case 0x1CF398u: goto label_1cf398;
            case 0x1CF39Cu: goto label_1cf39c;
            case 0x1CF3A0u: goto label_1cf3a0;
            case 0x1CF3A4u: goto label_1cf3a4;
            case 0x1CF3A8u: goto label_1cf3a8;
            case 0x1CF3ACu: goto label_1cf3ac;
            case 0x1CF3B0u: goto label_1cf3b0;
            case 0x1CF3B4u: goto label_1cf3b4;
            case 0x1CF3B8u: goto label_1cf3b8;
            case 0x1CF3BCu: goto label_1cf3bc;
            case 0x1CF3C0u: goto label_1cf3c0;
            case 0x1CF3C4u: goto label_1cf3c4;
            case 0x1CF3C8u: goto label_1cf3c8;
            case 0x1CF3CCu: goto label_1cf3cc;
            case 0x1CF3D0u: goto label_1cf3d0;
            case 0x1CF3D4u: goto label_1cf3d4;
            case 0x1CF3D8u: goto label_1cf3d8;
            case 0x1CF3DCu: goto label_1cf3dc;
            case 0x1CF3E0u: goto label_1cf3e0;
            case 0x1CF3E4u: goto label_1cf3e4;
            case 0x1CF3E8u: goto label_1cf3e8;
            case 0x1CF3ECu: goto label_1cf3ec;
            case 0x1CF3F0u: goto label_1cf3f0;
            case 0x1CF3F4u: goto label_1cf3f4;
            case 0x1CF3F8u: goto label_1cf3f8;
            case 0x1CF3FCu: goto label_1cf3fc;
            case 0x1CF400u: goto label_1cf400;
            case 0x1CF404u: goto label_1cf404;
            case 0x1CF408u: goto label_1cf408;
            case 0x1CF40Cu: goto label_1cf40c;
            case 0x1CF410u: goto label_1cf410;
            case 0x1CF414u: goto label_1cf414;
            case 0x1CF418u: goto label_1cf418;
            case 0x1CF41Cu: goto label_1cf41c;
            case 0x1CF420u: goto label_1cf420;
            case 0x1CF424u: goto label_1cf424;
            case 0x1CF428u: goto label_1cf428;
            case 0x1CF42Cu: goto label_1cf42c;
            case 0x1CF430u: goto label_1cf430;
            case 0x1CF434u: goto label_1cf434;
            case 0x1CF438u: goto label_1cf438;
            case 0x1CF43Cu: goto label_1cf43c;
            case 0x1CF440u: goto label_1cf440;
            case 0x1CF444u: goto label_1cf444;
            case 0x1CF448u: goto label_1cf448;
            case 0x1CF44Cu: goto label_1cf44c;
            case 0x1CF450u: goto label_1cf450;
            case 0x1CF454u: goto label_1cf454;
            case 0x1CF458u: goto label_1cf458;
            case 0x1CF45Cu: goto label_1cf45c;
            case 0x1CF460u: goto label_1cf460;
            case 0x1CF464u: goto label_1cf464;
            case 0x1CF468u: goto label_1cf468;
            case 0x1CF46Cu: goto label_1cf46c;
            case 0x1CF470u: goto label_1cf470;
            case 0x1CF474u: goto label_1cf474;
            case 0x1CF478u: goto label_1cf478;
            case 0x1CF47Cu: goto label_1cf47c;
            case 0x1CF480u: goto label_1cf480;
            case 0x1CF484u: goto label_1cf484;
            case 0x1CF488u: goto label_1cf488;
            case 0x1CF48Cu: goto label_1cf48c;
            case 0x1CF490u: goto label_1cf490;
            case 0x1CF494u: goto label_1cf494;
            case 0x1CF498u: goto label_1cf498;
            case 0x1CF49Cu: goto label_1cf49c;
            case 0x1CF4A0u: goto label_1cf4a0;
            case 0x1CF4A4u: goto label_1cf4a4;
            case 0x1CF4A8u: goto label_1cf4a8;
            case 0x1CF4ACu: goto label_1cf4ac;
            case 0x1CF4B0u: goto label_1cf4b0;
            case 0x1CF4B4u: goto label_1cf4b4;
            case 0x1CF4B8u: goto label_1cf4b8;
            case 0x1CF4BCu: goto label_1cf4bc;
            case 0x1CF4C0u: goto label_1cf4c0;
            case 0x1CF4C4u: goto label_1cf4c4;
            case 0x1CF4C8u: goto label_1cf4c8;
            case 0x1CF4CCu: goto label_1cf4cc;
            case 0x1CF4D0u: goto label_1cf4d0;
            case 0x1CF4D4u: goto label_1cf4d4;
            case 0x1CF4D8u: goto label_1cf4d8;
            case 0x1CF4DCu: goto label_1cf4dc;
            case 0x1CF4E0u: goto label_1cf4e0;
            case 0x1CF4E4u: goto label_1cf4e4;
            case 0x1CF4E8u: goto label_1cf4e8;
            case 0x1CF4ECu: goto label_1cf4ec;
            case 0x1CF4F0u: goto label_1cf4f0;
            case 0x1CF4F4u: goto label_1cf4f4;
            case 0x1CF4F8u: goto label_1cf4f8;
            case 0x1CF4FCu: goto label_1cf4fc;
            case 0x1CF500u: goto label_1cf500;
            case 0x1CF504u: goto label_1cf504;
            case 0x1CF508u: goto label_1cf508;
            case 0x1CF50Cu: goto label_1cf50c;
            case 0x1CF510u: goto label_1cf510;
            case 0x1CF514u: goto label_1cf514;
            case 0x1CF518u: goto label_1cf518;
            case 0x1CF51Cu: goto label_1cf51c;
            case 0x1CF520u: goto label_1cf520;
            case 0x1CF524u: goto label_1cf524;
            case 0x1CF528u: goto label_1cf528;
            case 0x1CF52Cu: goto label_1cf52c;
            case 0x1CF530u: goto label_1cf530;
            case 0x1CF534u: goto label_1cf534;
            case 0x1CF538u: goto label_1cf538;
            case 0x1CF53Cu: goto label_1cf53c;
            case 0x1CF540u: goto label_1cf540;
            case 0x1CF544u: goto label_1cf544;
            default: break;
        }
        return;
    }
label_fallthrough_0x1cf540:
    ctx->pc = 0x1CF548u;
}

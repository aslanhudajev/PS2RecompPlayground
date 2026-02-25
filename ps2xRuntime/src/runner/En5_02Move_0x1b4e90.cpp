#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En5_02Move
// Address: 0x1b4e90 - 0x1b5628
void En5_02Move_0x1b4e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En5_02Move_0x1b4e90");
#endif

    ctx->pc = 0x1b4e90u;

label_1b4e90:
    // 0x1b4e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b4e94:
    // 0x1b4e94: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b4e98:
    // 0x1b4e98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b4e9c:
    // 0x1b4e9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4e9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4ea0:
    // 0x1b4ea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b4ea4:
    // 0x1b4ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4ea8:
    // 0x1b4ea8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b4ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4eac:
    // 0x1b4eac: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1b4eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b4eb0:
    // 0x1b4eb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4eb4:
    // 0x1b4eb4: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1b4eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4eb8:
    // 0x1b4eb8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b4eb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b4ebc:
    // 0x1b4ebc: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1b4ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1b4ec0:
    // 0x1b4ec0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4ec4:
    // 0x1b4ec4: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1b4ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b4ec8:
    // 0x1b4ec8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b4ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4ecc:
    // 0x1b4ecc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b4eccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b4ed0:
    // 0x1b4ed0: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1b4ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1b4ed4:
    // 0x1b4ed4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b4ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4ed8:
    // 0x1b4ed8: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1b4ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b4edc:
    // 0x1b4edc: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1b4edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4ee0:
    // 0x1b4ee0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b4ee0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b4ee4:
    // 0x1b4ee4: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1b4ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1b4ee8:
    // 0x1b4ee8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4eec:
    // 0x1b4eec: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1b4eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b4ef0:
    // 0x1b4ef0: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1b4ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4ef4:
    // 0x1b4ef4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b4ef4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b4ef8:
    // 0x1b4ef8: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1b4ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1b4efc:
    // 0x1b4efc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b4efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4f00:
    // 0x1b4f00: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1b4f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b4f04:
    // 0x1b4f04: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b4f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4f08:
    // 0x1b4f08: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b4f08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b4f0c:
    // 0x1b4f0c: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1b4f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1b4f10:
    // 0x1b4f10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4f14:
    // 0x1b4f14: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1b4f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4f18:
    // 0x1b4f18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b4f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4f1c:
    // 0x1b4f1c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1b4f20:
    if (ctx->pc == 0x1B4F20u) {
        ctx->pc = 0x1B4F20u;
            // 0x1b4f20: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1B4F24u;
        goto label_1b4f24;
    }
    ctx->pc = 0x1B4F1Cu;
    {
        const bool branch_taken_0x1b4f1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F1Cu;
            // 0x1b4f20: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f1c) {
            ctx->pc = 0x1B4F40u;
            goto label_1b4f40;
        }
    }
    ctx->pc = 0x1B4F24u;
label_1b4f24:
    // 0x1b4f24: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b4f28:
    // 0x1b4f28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4f28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4f2c:
    // 0x1b4f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4f30:
    // 0x1b4f30: 0x0  nop
    ctx->pc = 0x1b4f30u;
    // NOP
label_1b4f34:
    // 0x1b4f34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b4f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b4f38:
    // 0x1b4f38: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b4f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b4f3c:
    // 0x1b4f3c: 0x0  nop
    ctx->pc = 0x1b4f3cu;
    // NOP
label_1b4f40:
    // 0x1b4f40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b4f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b4f44:
    // 0x1b4f44: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b4f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b4f48:
    // 0x1b4f48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4f48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4f4c:
    // 0x1b4f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4f50:
    // 0x1b4f50: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1b4f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4f54:
    // 0x1b4f54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b4f54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4f58:
    // 0x1b4f58: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b4f5c:
    if (ctx->pc == 0x1B4F5Cu) {
        ctx->pc = 0x1B4F5Cu;
            // 0x1b4f5c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1B4F60u;
        goto label_1b4f60;
    }
    ctx->pc = 0x1B4F58u;
    {
        const bool branch_taken_0x1b4f58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F58u;
            // 0x1b4f5c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f58) {
            ctx->pc = 0x1B4F78u;
            goto label_1b4f78;
        }
    }
    ctx->pc = 0x1B4F60u;
label_1b4f60:
    // 0x1b4f60: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b4f64:
    // 0x1b4f64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4f64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4f68:
    // 0x1b4f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4f6c:
    // 0x1b4f6c: 0x0  nop
    ctx->pc = 0x1b4f6cu;
    // NOP
label_1b4f70:
    // 0x1b4f70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b4f70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b4f74:
    // 0x1b4f74: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b4f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b4f78:
    // 0x1b4f78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b4f7c:
    // 0x1b4f7c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b4f80:
    // 0x1b4f80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4f80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4f84:
    // 0x1b4f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4f88:
    // 0x1b4f88: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1b4f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4f8c:
    // 0x1b4f8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b4f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4f90:
    // 0x1b4f90: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b4f94:
    if (ctx->pc == 0x1B4F94u) {
        ctx->pc = 0x1B4F94u;
            // 0x1b4f94: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1B4F98u;
        goto label_1b4f98;
    }
    ctx->pc = 0x1B4F90u;
    {
        const bool branch_taken_0x1b4f90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F90u;
            // 0x1b4f94: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f90) {
            ctx->pc = 0x1B4FB0u;
            goto label_1b4fb0;
        }
    }
    ctx->pc = 0x1B4F98u;
label_1b4f98:
    // 0x1b4f98: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b4f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b4f9c:
    // 0x1b4f9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4f9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4fa0:
    // 0x1b4fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4fa4:
    // 0x1b4fa4: 0x0  nop
    ctx->pc = 0x1b4fa4u;
    // NOP
label_1b4fa8:
    // 0x1b4fa8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b4fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b4fac:
    // 0x1b4fac: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b4facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b4fb0:
    // 0x1b4fb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b4fb4:
    // 0x1b4fb4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b4fb8:
    // 0x1b4fb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4fb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4fbc:
    // 0x1b4fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4fc0:
    // 0x1b4fc0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1b4fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4fc4:
    // 0x1b4fc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b4fc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4fc8:
    // 0x1b4fc8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b4fcc:
    if (ctx->pc == 0x1B4FCCu) {
        ctx->pc = 0x1B4FCCu;
            // 0x1b4fcc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1B4FD0u;
        goto label_1b4fd0;
    }
    ctx->pc = 0x1B4FC8u;
    {
        const bool branch_taken_0x1b4fc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FC8u;
            // 0x1b4fcc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fc8) {
            ctx->pc = 0x1B4FE8u;
            goto label_1b4fe8;
        }
    }
    ctx->pc = 0x1B4FD0u;
label_1b4fd0:
    // 0x1b4fd0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b4fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b4fd4:
    // 0x1b4fd4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4fd4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4fd8:
    // 0x1b4fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4fdc:
    // 0x1b4fdc: 0x0  nop
    ctx->pc = 0x1b4fdcu;
    // NOP
label_1b4fe0:
    // 0x1b4fe0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b4fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b4fe4:
    // 0x1b4fe4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b4fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b4fe8:
    // 0x1b4fe8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b4fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b4fec:
    // 0x1b4fec: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b4ff0:
    // 0x1b4ff0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4ff0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4ff4:
    // 0x1b4ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4ff8:
    // 0x1b4ff8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1b4ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4ffc:
    // 0x1b4ffc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b4ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5000:
    // 0x1b5000: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b5004:
    if (ctx->pc == 0x1B5004u) {
        ctx->pc = 0x1B5004u;
            // 0x1b5004: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1B5008u;
        goto label_1b5008;
    }
    ctx->pc = 0x1B5000u;
    {
        const bool branch_taken_0x1b5000 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5000u;
            // 0x1b5004: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5000) {
            ctx->pc = 0x1B5020u;
            goto label_1b5020;
        }
    }
    ctx->pc = 0x1B5008u;
label_1b5008:
    // 0x1b5008: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b5008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b500c:
    // 0x1b500c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b500cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5010:
    // 0x1b5010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5014:
    // 0x1b5014: 0x0  nop
    ctx->pc = 0x1b5014u;
    // NOP
label_1b5018:
    // 0x1b5018: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b5018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b501c:
    // 0x1b501c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b501cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b5020:
    // 0x1b5020: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b5020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5024:
    // 0x1b5024: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b5024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b5028:
    // 0x1b5028: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5028u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b502c:
    // 0x1b502c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b502cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5030:
    // 0x1b5030: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1b5030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5034:
    // 0x1b5034: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5038:
    // 0x1b5038: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b503c:
    if (ctx->pc == 0x1B503Cu) {
        ctx->pc = 0x1B503Cu;
            // 0x1b503c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1B5040u;
        goto label_1b5040;
    }
    ctx->pc = 0x1B5038u;
    {
        const bool branch_taken_0x1b5038 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B503Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5038u;
            // 0x1b503c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5038) {
            ctx->pc = 0x1B5058u;
            goto label_1b5058;
        }
    }
    ctx->pc = 0x1B5040u;
label_1b5040:
    // 0x1b5040: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b5040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b5044:
    // 0x1b5044: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5044u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5048:
    // 0x1b5048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b504c:
    // 0x1b504c: 0x0  nop
    ctx->pc = 0x1b504cu;
    // NOP
label_1b5050:
    // 0x1b5050: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b5050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b5054:
    // 0x1b5054: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b5054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b5058:
    // 0x1b5058: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b5058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b505c:
    // 0x1b505c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1b505cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1b5060:
    // 0x1b5060: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1b5060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5064:
    // 0x1b5064: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1b5064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b5068:
    // 0x1b5068: 0xc06d58c  jal         func_1B5630
label_1b506c:
    if (ctx->pc == 0x1B506Cu) {
        ctx->pc = 0x1B506Cu;
            // 0x1b506c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x1B5070u;
        goto label_1b5070;
    }
    ctx->pc = 0x1B5068u;
    SET_GPR_U32(ctx, 31, 0x1B5070u);
    ctx->pc = 0x1B506Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5068u;
            // 0x1b506c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5630u;
    if (runtime->hasFunction(0x1B5630u)) {
        auto targetFn = runtime->lookupFunction(0x1B5630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5070u; }
        if (ctx->pc != 0x1B5070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1b5630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5070u; }
        if (ctx->pc != 0x1B5070u) { return; }
    }
    ctx->pc = 0x1B5070u;
label_1b5070:
    // 0x1b5070: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b5070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b5074:
    // 0x1b5074: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b5074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b5078:
    // 0x1b5078: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1b5078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_1b507c:
    // 0x1b507c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5080:
    // 0x1b5080: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1b5080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1b5084:
    // 0x1b5084: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b5084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b5088:
    // 0x1b5088: 0x10620051  beq         $v1, $v0, . + 4 + (0x51 << 2)
label_1b508c:
    if (ctx->pc == 0x1B508Cu) {
        ctx->pc = 0x1B508Cu;
            // 0x1b508c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B5090u;
        goto label_1b5090;
    }
    ctx->pc = 0x1B5088u;
    {
        const bool branch_taken_0x1b5088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B508Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5088u;
            // 0x1b508c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5088) {
            ctx->pc = 0x1B51D0u;
            goto label_1b51d0;
        }
    }
    ctx->pc = 0x1B5090u;
label_1b5090:
    // 0x1b5090: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
label_1b5094:
    if (ctx->pc == 0x1B5094u) {
        ctx->pc = 0x1B5098u;
        goto label_1b5098;
    }
    ctx->pc = 0x1B5090u;
    {
        const bool branch_taken_0x1b5090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5090) {
            ctx->pc = 0x1B51D0u;
            goto label_1b51d0;
        }
    }
    ctx->pc = 0x1B5098u;
label_1b5098:
    // 0x1b5098: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1b509c:
    if (ctx->pc == 0x1B509Cu) {
        ctx->pc = 0x1B50A0u;
        goto label_1b50a0;
    }
    ctx->pc = 0x1B5098u;
    {
        const bool branch_taken_0x1b5098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5098) {
            ctx->pc = 0x1B50A8u;
            goto label_1b50a8;
        }
    }
    ctx->pc = 0x1B50A0u;
label_1b50a0:
    // 0x1b50a0: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_1b50a4:
    if (ctx->pc == 0x1B50A4u) {
        ctx->pc = 0x1B50A8u;
        goto label_1b50a8;
    }
    ctx->pc = 0x1B50A0u;
    {
        const bool branch_taken_0x1b50a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50a0) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B50A8u;
label_1b50a8:
    // 0x1b50a8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b50ac:
    // 0x1b50ac: 0x28410050  slti        $at, $v0, 0x50
    ctx->pc = 0x1b50acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)80) ? 1 : 0);
label_1b50b0:
    // 0x1b50b0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1b50b4:
    if (ctx->pc == 0x1B50B4u) {
        ctx->pc = 0x1B50B8u;
        goto label_1b50b8;
    }
    ctx->pc = 0x1B50B0u;
    {
        const bool branch_taken_0x1b50b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50b0) {
            ctx->pc = 0x1B50D8u;
            goto label_1b50d8;
        }
    }
    ctx->pc = 0x1B50B8u;
label_1b50b8:
    // 0x1b50b8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b50b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b50bc:
    // 0x1b50bc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b50c0:
    // 0x1b50c0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b50c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b50c4:
    // 0x1b50c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b50c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b50c8:
    // 0x1b50c8: 0x0  nop
    ctx->pc = 0x1b50c8u;
    // NOP
label_1b50cc:
    // 0x1b50cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b50ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b50d0:
    // 0x1b50d0: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_1b50d4:
    if (ctx->pc == 0x1B50D4u) {
        ctx->pc = 0x1B50D4u;
            // 0x1b50d4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1B50D8u;
        goto label_1b50d8;
    }
    ctx->pc = 0x1B50D0u;
    {
        const bool branch_taken_0x1b50d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50D0u;
            // 0x1b50d4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50d0) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B50D8u;
label_1b50d8:
    // 0x1b50d8: 0x28410051  slti        $at, $v0, 0x51
    ctx->pc = 0x1b50d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
label_1b50dc:
    // 0x1b50dc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1b50e0:
    if (ctx->pc == 0x1B50E0u) {
        ctx->pc = 0x1B50E4u;
        goto label_1b50e4;
    }
    ctx->pc = 0x1B50DCu;
    {
        const bool branch_taken_0x1b50dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50dc) {
            ctx->pc = 0x1B5110u;
            goto label_1b5110;
        }
    }
    ctx->pc = 0x1B50E4u;
label_1b50e4:
    // 0x1b50e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b50e8:
    // 0x1b50e8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1b50e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b50ec:
    // 0x1b50ec: 0xc0655a0  jal         func_195680
label_1b50f0:
    if (ctx->pc == 0x1B50F0u) {
        ctx->pc = 0x1B50F0u;
            // 0x1b50f0: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->pc = 0x1B50F4u;
        goto label_1b50f4;
    }
    ctx->pc = 0x1B50ECu;
    SET_GPR_U32(ctx, 31, 0x1B50F4u);
    ctx->pc = 0x1B50F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50ECu;
            // 0x1b50f0: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50F4u; }
        if (ctx->pc != 0x1B50F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50F4u; }
        if (ctx->pc != 0x1B50F4u) { return; }
    }
    ctx->pc = 0x1B50F4u;
label_1b50f4:
    // 0x1b50f4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b50f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b50f8:
    // 0x1b50f8: 0xc06560c  jal         func_195830
label_1b50fc:
    if (ctx->pc == 0x1B50FCu) {
        ctx->pc = 0x1B50FCu;
            // 0x1b50fc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B5100u;
        goto label_1b5100;
    }
    ctx->pc = 0x1B50F8u;
    SET_GPR_U32(ctx, 31, 0x1B5100u);
    ctx->pc = 0x1B50FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50F8u;
            // 0x1b50fc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5100u; }
        if (ctx->pc != 0x1B5100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5100u; }
        if (ctx->pc != 0x1B5100u) { return; }
    }
    ctx->pc = 0x1B5100u;
label_1b5100:
    // 0x1b5100: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b5100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b5104:
    // 0x1b5104: 0x100000aa  b           . + 4 + (0xAA << 2)
label_1b5108:
    if (ctx->pc == 0x1B5108u) {
        ctx->pc = 0x1B5108u;
            // 0x1b5108: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x1B510Cu;
        goto label_1b510c;
    }
    ctx->pc = 0x1B5104u;
    {
        const bool branch_taken_0x1b5104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5104u;
            // 0x1b5108: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5104) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B510Cu;
label_1b510c:
    // 0x1b510c: 0x0  nop
    ctx->pc = 0x1b510cu;
    // NOP
label_1b5110:
    // 0x1b5110: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b5110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b5114:
    // 0x1b5114: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b5114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5118:
    // 0x1b5118: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b5118u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b511c:
    // 0x1b511c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b511cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5120:
    // 0x1b5120: 0x0  nop
    ctx->pc = 0x1b5120u;
    // NOP
label_1b5124:
    // 0x1b5124: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b5124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b5128:
    // 0x1b5128: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b5128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b512c:
    // 0x1b512c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b512cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5130:
    // 0x1b5130: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1b5134:
    if (ctx->pc == 0x1B5134u) {
        ctx->pc = 0x1B5134u;
            // 0x1b5134: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->pc = 0x1B5138u;
        goto label_1b5138;
    }
    ctx->pc = 0x1B5130u;
    {
        const bool branch_taken_0x1b5130 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B5134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5130u;
            // 0x1b5134: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5130) {
            ctx->pc = 0x1B5144u;
            goto label_1b5144;
        }
    }
    ctx->pc = 0x1B5138u;
label_1b5138:
    // 0x1b5138: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b513c:
    if (ctx->pc == 0x1B513Cu) {
        ctx->pc = 0x1B5140u;
        goto label_1b5140;
    }
    ctx->pc = 0x1B5138u;
    {
        const bool branch_taken_0x1b5138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5138) {
            ctx->pc = 0x1B5144u;
            goto label_1b5144;
        }
    }
    ctx->pc = 0x1B5140u;
label_1b5140:
    // 0x1b5140: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1b5140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1b5144:
    // 0x1b5144: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b5148:
    if (ctx->pc == 0x1B5148u) {
        ctx->pc = 0x1B514Cu;
        goto label_1b514c;
    }
    ctx->pc = 0x1B5144u;
    {
        const bool branch_taken_0x1b5144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5144) {
            ctx->pc = 0x1B5160u;
            goto label_1b5160;
        }
    }
    ctx->pc = 0x1B514Cu;
label_1b514c:
    // 0x1b514c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b514cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5150:
    // 0x1b5150: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1b5150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b5154:
    // 0x1b5154: 0xc065598  jal         func_195660
label_1b5158:
    if (ctx->pc == 0x1B5158u) {
        ctx->pc = 0x1B5158u;
            // 0x1b5158: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->pc = 0x1B515Cu;
        goto label_1b515c;
    }
    ctx->pc = 0x1B5154u;
    SET_GPR_U32(ctx, 31, 0x1B515Cu);
    ctx->pc = 0x1B5158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5154u;
            // 0x1b5158: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195660u;
    if (runtime->hasFunction(0x195660u)) {
        auto targetFn = runtime->lookupFunction(0x195660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B515Cu; }
        if (ctx->pc != 0x1B515Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Small_0x195660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B515Cu; }
        if (ctx->pc != 0x1B515Cu) { return; }
    }
    ctx->pc = 0x1B515Cu;
label_1b515c:
    // 0x1b515c: 0x0  nop
    ctx->pc = 0x1b515cu;
    // NOP
label_1b5160:
    // 0x1b5160: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b5160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5164:
    // 0x1b5164: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1b5164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1b5168:
    // 0x1b5168: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1b516c:
    if (ctx->pc == 0x1B516Cu) {
        ctx->pc = 0x1B516Cu;
            // 0x1b516c: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x1B5170u;
        goto label_1b5170;
    }
    ctx->pc = 0x1B5168u;
    {
        const bool branch_taken_0x1b5168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B516Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5168u;
            // 0x1b516c: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5168) {
            ctx->pc = 0x1B51A8u;
            goto label_1b51a8;
        }
    }
    ctx->pc = 0x1B5170u;
label_1b5170:
    // 0x1b5170: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b5174:
    if (ctx->pc == 0x1B5174u) {
        ctx->pc = 0x1B5178u;
        goto label_1b5178;
    }
    ctx->pc = 0x1B5170u;
    {
        const bool branch_taken_0x1b5170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5170) {
            ctx->pc = 0x1B5180u;
            goto label_1b5180;
        }
    }
    ctx->pc = 0x1B5178u;
label_1b5178:
    // 0x1b5178: 0x1000008d  b           . + 4 + (0x8D << 2)
label_1b517c:
    if (ctx->pc == 0x1B517Cu) {
        ctx->pc = 0x1B5180u;
        goto label_1b5180;
    }
    ctx->pc = 0x1B5178u;
    {
        const bool branch_taken_0x1b5178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5178) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B5180u;
label_1b5180:
    // 0x1b5180: 0xc065d00  jal         func_197400
label_1b5184:
    if (ctx->pc == 0x1B5184u) {
        ctx->pc = 0x1B5188u;
        goto label_1b5188;
    }
    ctx->pc = 0x1B5180u;
    SET_GPR_U32(ctx, 31, 0x1B5188u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5188u; }
        if (ctx->pc != 0x1B5188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5188u; }
        if (ctx->pc != 0x1B5188u) { return; }
    }
    ctx->pc = 0x1B5188u;
label_1b5188:
    // 0x1b5188: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b5188u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b518c:
    // 0x1b518c: 0x14200088  bnez        $at, . + 4 + (0x88 << 2)
label_1b5190:
    if (ctx->pc == 0x1B5190u) {
        ctx->pc = 0x1B5194u;
        goto label_1b5194;
    }
    ctx->pc = 0x1B518Cu;
    {
        const bool branch_taken_0x1b518c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b518c) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B5194u;
label_1b5194:
    // 0x1b5194: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b5194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5198:
    // 0x1b5198: 0xc06560c  jal         func_195830
label_1b519c:
    if (ctx->pc == 0x1B519Cu) {
        ctx->pc = 0x1B519Cu;
            // 0x1b519c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B51A0u;
        goto label_1b51a0;
    }
    ctx->pc = 0x1B5198u;
    SET_GPR_U32(ctx, 31, 0x1B51A0u);
    ctx->pc = 0x1B519Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5198u;
            // 0x1b519c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51A0u; }
        if (ctx->pc != 0x1B51A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51A0u; }
        if (ctx->pc != 0x1B51A0u) { return; }
    }
    ctx->pc = 0x1B51A0u;
label_1b51a0:
    // 0x1b51a0: 0x10000083  b           . + 4 + (0x83 << 2)
label_1b51a4:
    if (ctx->pc == 0x1B51A4u) {
        ctx->pc = 0x1B51A8u;
        goto label_1b51a8;
    }
    ctx->pc = 0x1B51A0u;
    {
        const bool branch_taken_0x1b51a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b51a0) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B51A8u;
label_1b51a8:
    // 0x1b51a8: 0xc065d00  jal         func_197400
label_1b51ac:
    if (ctx->pc == 0x1B51ACu) {
        ctx->pc = 0x1B51B0u;
        goto label_1b51b0;
    }
    ctx->pc = 0x1B51A8u;
    SET_GPR_U32(ctx, 31, 0x1B51B0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51B0u; }
        if (ctx->pc != 0x1B51B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51B0u; }
        if (ctx->pc != 0x1B51B0u) { return; }
    }
    ctx->pc = 0x1B51B0u;
label_1b51b0:
    // 0x1b51b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b51b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b51b4:
    // 0x1b51b4: 0x1443007e  bne         $v0, $v1, . + 4 + (0x7E << 2)
label_1b51b8:
    if (ctx->pc == 0x1B51B8u) {
        ctx->pc = 0x1B51BCu;
        goto label_1b51bc;
    }
    ctx->pc = 0x1B51B4u;
    {
        const bool branch_taken_0x1b51b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b51b4) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B51BCu;
label_1b51bc:
    // 0x1b51bc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b51bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b51c0:
    // 0x1b51c0: 0xc06560c  jal         func_195830
label_1b51c4:
    if (ctx->pc == 0x1B51C4u) {
        ctx->pc = 0x1B51C4u;
            // 0x1b51c4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B51C8u;
        goto label_1b51c8;
    }
    ctx->pc = 0x1B51C0u;
    SET_GPR_U32(ctx, 31, 0x1B51C8u);
    ctx->pc = 0x1B51C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51C0u;
            // 0x1b51c4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51C8u; }
        if (ctx->pc != 0x1B51C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51C8u; }
        if (ctx->pc != 0x1B51C8u) { return; }
    }
    ctx->pc = 0x1B51C8u;
label_1b51c8:
    // 0x1b51c8: 0x10000079  b           . + 4 + (0x79 << 2)
label_1b51cc:
    if (ctx->pc == 0x1B51CCu) {
        ctx->pc = 0x1B51D0u;
        goto label_1b51d0;
    }
    ctx->pc = 0x1B51C8u;
    {
        const bool branch_taken_0x1b51c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b51c8) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B51D0u;
label_1b51d0:
    // 0x1b51d0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1b51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1b51d4:
    // 0x1b51d4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_1b51d8:
    if (ctx->pc == 0x1B51D8u) {
        ctx->pc = 0x1B51DCu;
        goto label_1b51dc;
    }
    ctx->pc = 0x1B51D4u;
    {
        const bool branch_taken_0x1b51d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b51d4) {
            ctx->pc = 0x1B5278u;
            goto label_1b5278;
        }
    }
    ctx->pc = 0x1B51DCu;
label_1b51dc:
    // 0x1b51dc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b51dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b51e0:
    // 0x1b51e0: 0x3c023bc4  lui         $v0, 0x3BC4
    ctx->pc = 0x1b51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15300 << 16));
label_1b51e4:
    // 0x1b51e4: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1b51e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_1b51e8:
    // 0x1b51e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b51e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b51ec:
    // 0x1b51ec: 0x0  nop
    ctx->pc = 0x1b51ecu;
    // NOP
label_1b51f0:
    // 0x1b51f0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b51f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b51f4:
    // 0x1b51f4: 0xc040d72  jal         func_1035C8
label_1b51f8:
    if (ctx->pc == 0x1B51F8u) {
        ctx->pc = 0x1B51F8u;
            // 0x1b51f8: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1B51FCu;
        goto label_1b51fc;
    }
    ctx->pc = 0x1B51F4u;
    SET_GPR_U32(ctx, 31, 0x1B51FCu);
    ctx->pc = 0x1B51F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51F4u;
            // 0x1b51f8: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51FCu; }
        if (ctx->pc != 0x1B51FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51FCu; }
        if (ctx->pc != 0x1B51FCu) { return; }
    }
    ctx->pc = 0x1B51FCu;
label_1b51fc:
    // 0x1b51fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b51fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5200:
    // 0x1b5200: 0xc040078  jal         func_1001E0
label_1b5204:
    if (ctx->pc == 0x1B5204u) {
        ctx->pc = 0x1B5204u;
            // 0x1b5204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5208u;
        goto label_1b5208;
    }
    ctx->pc = 0x1B5200u;
    SET_GPR_U32(ctx, 31, 0x1B5208u);
    ctx->pc = 0x1B5204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5200u;
            // 0x1b5204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5208u; }
        if (ctx->pc != 0x1B5208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5208u; }
        if (ctx->pc != 0x1B5208u) { return; }
    }
    ctx->pc = 0x1B5208u;
label_1b5208:
    // 0x1b5208: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1b520c:
    if (ctx->pc == 0x1B520Cu) {
        ctx->pc = 0x1B5210u;
        goto label_1b5210;
    }
    ctx->pc = 0x1B5208u;
    {
        const bool branch_taken_0x1b5208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5208) {
            ctx->pc = 0x1B5230u;
            goto label_1b5230;
        }
    }
    ctx->pc = 0x1B5210u;
label_1b5210:
    // 0x1b5210: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b5210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5214:
    // 0x1b5214: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1b5214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1b5218:
    // 0x1b5218: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1b5218u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1b521c:
    // 0x1b521c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b521cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5220:
    // 0x1b5220: 0x0  nop
    ctx->pc = 0x1b5220u;
    // NOP
label_1b5224:
    // 0x1b5224: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b5224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b5228:
    // 0x1b5228: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b522c:
    if (ctx->pc == 0x1B522Cu) {
        ctx->pc = 0x1B522Cu;
            // 0x1b522c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1B5230u;
        goto label_1b5230;
    }
    ctx->pc = 0x1B5228u;
    {
        const bool branch_taken_0x1b5228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5228u;
            // 0x1b522c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5228) {
            ctx->pc = 0x1B5240u;
            goto label_1b5240;
        }
    }
    ctx->pc = 0x1B5230u;
label_1b5230:
    // 0x1b5230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5234:
    // 0x1b5234: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b5234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b5238:
    // 0x1b5238: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1b5238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1b523c:
    // 0x1b523c: 0x0  nop
    ctx->pc = 0x1b523cu;
    // NOP
label_1b5240:
    // 0x1b5240: 0xc065d00  jal         func_197400
label_1b5244:
    if (ctx->pc == 0x1B5244u) {
        ctx->pc = 0x1B5248u;
        goto label_1b5248;
    }
    ctx->pc = 0x1B5240u;
    SET_GPR_U32(ctx, 31, 0x1B5248u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5248u; }
        if (ctx->pc != 0x1B5248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5248u; }
        if (ctx->pc != 0x1B5248u) { return; }
    }
    ctx->pc = 0x1B5248u;
label_1b5248:
    // 0x1b5248: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b5248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b524c:
    // 0x1b524c: 0x14430058  bne         $v0, $v1, . + 4 + (0x58 << 2)
label_1b5250:
    if (ctx->pc == 0x1B5250u) {
        ctx->pc = 0x1B5254u;
        goto label_1b5254;
    }
    ctx->pc = 0x1B524Cu;
    {
        const bool branch_taken_0x1b524c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b524c) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B5254u;
label_1b5254:
    // 0x1b5254: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b5254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5258:
    // 0x1b5258: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b5258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b525c:
    // 0x1b525c: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
label_1b5260:
    if (ctx->pc == 0x1B5260u) {
        ctx->pc = 0x1B5264u;
        goto label_1b5264;
    }
    ctx->pc = 0x1B525Cu;
    {
        const bool branch_taken_0x1b525c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b525c) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B5264u;
label_1b5264:
    // 0x1b5264: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b5264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5268:
    // 0x1b5268: 0xc06560c  jal         func_195830
label_1b526c:
    if (ctx->pc == 0x1B526Cu) {
        ctx->pc = 0x1B526Cu;
            // 0x1b526c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B5270u;
        goto label_1b5270;
    }
    ctx->pc = 0x1B5268u;
    SET_GPR_U32(ctx, 31, 0x1B5270u);
    ctx->pc = 0x1B526Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5268u;
            // 0x1b526c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5270u; }
        if (ctx->pc != 0x1B5270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5270u; }
        if (ctx->pc != 0x1B5270u) { return; }
    }
    ctx->pc = 0x1B5270u;
label_1b5270:
    // 0x1b5270: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1b5274:
    if (ctx->pc == 0x1B5274u) {
        ctx->pc = 0x1B5278u;
        goto label_1b5278;
    }
    ctx->pc = 0x1B5270u;
    {
        const bool branch_taken_0x1b5270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5270) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B5278u;
label_1b5278:
    // 0x1b5278: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b5278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b527c:
    // 0x1b527c: 0x1443004c  bne         $v0, $v1, . + 4 + (0x4C << 2)
label_1b5280:
    if (ctx->pc == 0x1B5280u) {
        ctx->pc = 0x1B5284u;
        goto label_1b5284;
    }
    ctx->pc = 0x1B527Cu;
    {
        const bool branch_taken_0x1b527c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b527c) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B5284u;
label_1b5284:
    // 0x1b5284: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b5284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5288:
    // 0x1b5288: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
label_1b528c:
    if (ctx->pc == 0x1B528Cu) {
        ctx->pc = 0x1B5290u;
        goto label_1b5290;
    }
    ctx->pc = 0x1B5288u;
    {
        const bool branch_taken_0x1b5288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b5288) {
            ctx->pc = 0x1B5308u;
            goto label_1b5308;
        }
    }
    ctx->pc = 0x1B5290u;
label_1b5290:
    // 0x1b5290: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5294:
    // 0x1b5294: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1b5294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b5298:
    // 0x1b5298: 0xc0655a0  jal         func_195680
label_1b529c:
    if (ctx->pc == 0x1B529Cu) {
        ctx->pc = 0x1B529Cu;
            // 0x1b529c: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->pc = 0x1B52A0u;
        goto label_1b52a0;
    }
    ctx->pc = 0x1B5298u;
    SET_GPR_U32(ctx, 31, 0x1B52A0u);
    ctx->pc = 0x1B529Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5298u;
            // 0x1b529c: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52A0u; }
        if (ctx->pc != 0x1B52A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52A0u; }
        if (ctx->pc != 0x1B52A0u) { return; }
    }
    ctx->pc = 0x1B52A0u;
label_1b52a0:
    // 0x1b52a0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b52a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b52a4:
    // 0x1b52a4: 0xc06560c  jal         func_195830
label_1b52a8:
    if (ctx->pc == 0x1B52A8u) {
        ctx->pc = 0x1B52A8u;
            // 0x1b52a8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B52ACu;
        goto label_1b52ac;
    }
    ctx->pc = 0x1B52A4u;
    SET_GPR_U32(ctx, 31, 0x1B52ACu);
    ctx->pc = 0x1B52A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52A4u;
            // 0x1b52a8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52ACu; }
        if (ctx->pc != 0x1B52ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52ACu; }
        if (ctx->pc != 0x1B52ACu) { return; }
    }
    ctx->pc = 0x1B52ACu;
label_1b52ac:
    // 0x1b52ac: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1b52acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b52b0:
    // 0x1b52b0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b52b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b52b4:
    // 0x1b52b4: 0xc0652b4  jal         func_194AD0
label_1b52b8:
    if (ctx->pc == 0x1B52B8u) {
        ctx->pc = 0x1B52B8u;
            // 0x1b52b8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1B52BCu;
        goto label_1b52bc;
    }
    ctx->pc = 0x1B52B4u;
    SET_GPR_U32(ctx, 31, 0x1B52BCu);
    ctx->pc = 0x1B52B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52B4u;
            // 0x1b52b8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52BCu; }
        if (ctx->pc != 0x1B52BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52BCu; }
        if (ctx->pc != 0x1B52BCu) { return; }
    }
    ctx->pc = 0x1B52BCu;
label_1b52bc:
    // 0x1b52bc: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1b52bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b52c0:
    // 0x1b52c0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b52c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b52c4:
    // 0x1b52c4: 0xc0652b4  jal         func_194AD0
label_1b52c8:
    if (ctx->pc == 0x1B52C8u) {
        ctx->pc = 0x1B52C8u;
            // 0x1b52c8: 0x2406006e  addiu       $a2, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = 0x1B52CCu;
        goto label_1b52cc;
    }
    ctx->pc = 0x1B52C4u;
    SET_GPR_U32(ctx, 31, 0x1B52CCu);
    ctx->pc = 0x1B52C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52C4u;
            // 0x1b52c8: 0x2406006e  addiu       $a2, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52CCu; }
        if (ctx->pc != 0x1B52CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52CCu; }
        if (ctx->pc != 0x1B52CCu) { return; }
    }
    ctx->pc = 0x1B52CCu;
label_1b52cc:
    // 0x1b52cc: 0xc065d00  jal         func_197400
label_1b52d0:
    if (ctx->pc == 0x1B52D0u) {
        ctx->pc = 0x1B52D4u;
        goto label_1b52d4;
    }
    ctx->pc = 0x1B52CCu;
    SET_GPR_U32(ctx, 31, 0x1B52D4u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52D4u; }
        if (ctx->pc != 0x1B52D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52D4u; }
        if (ctx->pc != 0x1B52D4u) { return; }
    }
    ctx->pc = 0x1B52D4u;
label_1b52d4:
    // 0x1b52d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b52d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b52d8:
    // 0x1b52d8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_1b52dc:
    if (ctx->pc == 0x1B52DCu) {
        ctx->pc = 0x1B52E0u;
        goto label_1b52e0;
    }
    ctx->pc = 0x1B52D8u;
    {
        const bool branch_taken_0x1b52d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b52d8) {
            ctx->pc = 0x1B5308u;
            goto label_1b5308;
        }
    }
    ctx->pc = 0x1B52E0u;
label_1b52e0:
    // 0x1b52e0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1b52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_1b52e4:
    // 0x1b52e4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b52e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b52e8:
    // 0x1b52e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b52e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b52ec:
    // 0x1b52ec: 0xc0655b0  jal         func_1956C0
label_1b52f0:
    if (ctx->pc == 0x1B52F0u) {
        ctx->pc = 0x1B52F0u;
            // 0x1b52f0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B52F4u;
        goto label_1b52f4;
    }
    ctx->pc = 0x1B52ECu;
    SET_GPR_U32(ctx, 31, 0x1B52F4u);
    ctx->pc = 0x1B52F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52ECu;
            // 0x1b52f0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52F4u; }
        if (ctx->pc != 0x1B52F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52F4u; }
        if (ctx->pc != 0x1B52F4u) { return; }
    }
    ctx->pc = 0x1B52F4u;
label_1b52f4:
    // 0x1b52f4: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1b52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
label_1b52f8:
    // 0x1b52f8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b52f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b52fc:
    // 0x1b52fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b52fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b5300:
    // 0x1b5300: 0xc0655b0  jal         func_1956C0
label_1b5304:
    if (ctx->pc == 0x1B5304u) {
        ctx->pc = 0x1B5304u;
            // 0x1b5304: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B5308u;
        goto label_1b5308;
    }
    ctx->pc = 0x1B5300u;
    SET_GPR_U32(ctx, 31, 0x1B5308u);
    ctx->pc = 0x1B5304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5300u;
            // 0x1b5304: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5308u; }
        if (ctx->pc != 0x1B5308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5308u; }
        if (ctx->pc != 0x1B5308u) { return; }
    }
    ctx->pc = 0x1B5308u;
label_1b5308:
    // 0x1b5308: 0xc065d00  jal         func_197400
label_1b530c:
    if (ctx->pc == 0x1B530Cu) {
        ctx->pc = 0x1B5310u;
        goto label_1b5310;
    }
    ctx->pc = 0x1B5308u;
    SET_GPR_U32(ctx, 31, 0x1B5310u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5310u; }
        if (ctx->pc != 0x1B5310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5310u; }
        if (ctx->pc != 0x1B5310u) { return; }
    }
    ctx->pc = 0x1B5310u;
label_1b5310:
    // 0x1b5310: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b5310u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b5314:
    // 0x1b5314: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1b5318:
    if (ctx->pc == 0x1B5318u) {
        ctx->pc = 0x1B531Cu;
        goto label_1b531c;
    }
    ctx->pc = 0x1B5314u;
    {
        const bool branch_taken_0x1b5314 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5314) {
            ctx->pc = 0x1B5338u;
            goto label_1b5338;
        }
    }
    ctx->pc = 0x1B531Cu;
label_1b531c:
    // 0x1b531c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5320:
    // 0x1b5320: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1b5320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1b5324:
    // 0x1b5324: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1b5328:
    if (ctx->pc == 0x1B5328u) {
        ctx->pc = 0x1B532Cu;
        goto label_1b532c;
    }
    ctx->pc = 0x1B5324u;
    {
        const bool branch_taken_0x1b5324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5324) {
            ctx->pc = 0x1B5338u;
            goto label_1b5338;
        }
    }
    ctx->pc = 0x1B532Cu;
label_1b532c:
    // 0x1b532c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b532cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5330:
    // 0x1b5330: 0xc06560c  jal         func_195830
label_1b5334:
    if (ctx->pc == 0x1B5334u) {
        ctx->pc = 0x1B5334u;
            // 0x1b5334: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B5338u;
        goto label_1b5338;
    }
    ctx->pc = 0x1B5330u;
    SET_GPR_U32(ctx, 31, 0x1B5338u);
    ctx->pc = 0x1B5334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5330u;
            // 0x1b5334: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5338u; }
        if (ctx->pc != 0x1B5338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5338u; }
        if (ctx->pc != 0x1B5338u) { return; }
    }
    ctx->pc = 0x1B5338u;
label_1b5338:
    // 0x1b5338: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b5338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b533c:
    // 0x1b533c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5340:
    // 0x1b5340: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1b5344:
    if (ctx->pc == 0x1B5344u) {
        ctx->pc = 0x1B5348u;
        goto label_1b5348;
    }
    ctx->pc = 0x1B5340u;
    {
        const bool branch_taken_0x1b5340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5340) {
            ctx->pc = 0x1B5368u;
            goto label_1b5368;
        }
    }
    ctx->pc = 0x1B5348u;
label_1b5348:
    // 0x1b5348: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b5348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b534c:
    // 0x1b534c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1b534cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1b5350:
    // 0x1b5350: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b5350u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b5354:
    // 0x1b5354: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b5358:
    // 0x1b5358: 0x0  nop
    ctx->pc = 0x1b5358u;
    // NOP
label_1b535c:
    // 0x1b535c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b535cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1b5360:
    // 0x1b5360: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b5364:
    if (ctx->pc == 0x1B5364u) {
        ctx->pc = 0x1B5364u;
            // 0x1b5364: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->pc = 0x1B5368u;
        goto label_1b5368;
    }
    ctx->pc = 0x1B5360u;
    {
        const bool branch_taken_0x1b5360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5360u;
            // 0x1b5364: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5360) {
            ctx->pc = 0x1B5388u;
            goto label_1b5388;
        }
    }
    ctx->pc = 0x1B5368u;
label_1b5368:
    // 0x1b5368: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1b5368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1b536c:
    // 0x1b536c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5370:
    // 0x1b5370: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b5370u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b5374:
    // 0x1b5374: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b5378:
    // 0x1b5378: 0x0  nop
    ctx->pc = 0x1b5378u;
    // NOP
label_1b537c:
    // 0x1b537c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b537cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b5380:
    // 0x1b5380: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b5380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b5384:
    // 0x1b5384: 0x0  nop
    ctx->pc = 0x1b5384u;
    // NOP
label_1b5388:
    // 0x1b5388: 0x3c023ac4  lui         $v0, 0x3AC4
    ctx->pc = 0x1b5388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15044 << 16));
label_1b538c:
    // 0x1b538c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5390:
    // 0x1b5390: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1b5390u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_1b5394:
    // 0x1b5394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5398:
    // 0x1b5398: 0x0  nop
    ctx->pc = 0x1b5398u;
    // NOP
label_1b539c:
    // 0x1b539c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1b539cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1b53a0:
    // 0x1b53a0: 0xe60100d4  swc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b53a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b53a4:
    // 0x1b53a4: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1b53a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b53a8:
    // 0x1b53a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b53a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b53ac:
    // 0x1b53ac: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1b53acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1b53b0:
    // 0x1b53b0: 0xc04b788  jal         func_12DE20
label_1b53b4:
    if (ctx->pc == 0x1B53B4u) {
        ctx->pc = 0x1B53B4u;
            // 0x1b53b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B53B8u;
        goto label_1b53b8;
    }
    ctx->pc = 0x1B53B0u;
    SET_GPR_U32(ctx, 31, 0x1B53B8u);
    ctx->pc = 0x1B53B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53B0u;
            // 0x1b53b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53B8u; }
        if (ctx->pc != 0x1B53B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53B8u; }
        if (ctx->pc != 0x1B53B8u) { return; }
    }
    ctx->pc = 0x1B53B8u;
label_1b53b8:
    // 0x1b53b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b53b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b53bc:
    // 0x1b53bc: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1b53bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b53c0:
    // 0x1b53c0: 0xc04b7da  jal         func_12DF68
label_1b53c4:
    if (ctx->pc == 0x1B53C4u) {
        ctx->pc = 0x1B53C4u;
            // 0x1b53c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B53C8u;
        goto label_1b53c8;
    }
    ctx->pc = 0x1B53C0u;
    SET_GPR_U32(ctx, 31, 0x1B53C8u);
    ctx->pc = 0x1B53C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53C0u;
            // 0x1b53c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53C8u; }
        if (ctx->pc != 0x1B53C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53C8u; }
        if (ctx->pc != 0x1B53C8u) { return; }
    }
    ctx->pc = 0x1B53C8u;
label_1b53c8:
    // 0x1b53c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b53c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b53cc:
    // 0x1b53cc: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1b53ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b53d0:
    // 0x1b53d0: 0xc04b804  jal         func_12E010
label_1b53d4:
    if (ctx->pc == 0x1B53D4u) {
        ctx->pc = 0x1B53D4u;
            // 0x1b53d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B53D8u;
        goto label_1b53d8;
    }
    ctx->pc = 0x1B53D0u;
    SET_GPR_U32(ctx, 31, 0x1B53D8u);
    ctx->pc = 0x1B53D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53D0u;
            // 0x1b53d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53D8u; }
        if (ctx->pc != 0x1B53D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53D8u; }
        if (ctx->pc != 0x1B53D8u) { return; }
    }
    ctx->pc = 0x1B53D8u;
label_1b53d8:
    // 0x1b53d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b53d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b53dc:
    // 0x1b53dc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1b53dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b53e0:
    // 0x1b53e0: 0xc04b7b0  jal         func_12DEC0
label_1b53e4:
    if (ctx->pc == 0x1B53E4u) {
        ctx->pc = 0x1B53E4u;
            // 0x1b53e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B53E8u;
        goto label_1b53e8;
    }
    ctx->pc = 0x1B53E0u;
    SET_GPR_U32(ctx, 31, 0x1B53E8u);
    ctx->pc = 0x1B53E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53E0u;
            // 0x1b53e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53E8u; }
        if (ctx->pc != 0x1B53E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53E8u; }
        if (ctx->pc != 0x1B53E8u) { return; }
    }
    ctx->pc = 0x1B53E8u;
label_1b53e8:
    // 0x1b53e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b53e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b53ec:
    // 0x1b53ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b53ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b53f0:
    // 0x1b53f0: 0xc04b75e  jal         func_12DD78
label_1b53f4:
    if (ctx->pc == 0x1B53F4u) {
        ctx->pc = 0x1B53F4u;
            // 0x1b53f4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1B53F8u;
        goto label_1b53f8;
    }
    ctx->pc = 0x1B53F0u;
    SET_GPR_U32(ctx, 31, 0x1B53F8u);
    ctx->pc = 0x1B53F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53F0u;
            // 0x1b53f4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53F8u; }
        if (ctx->pc != 0x1B53F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53F8u; }
        if (ctx->pc != 0x1B53F8u) { return; }
    }
    ctx->pc = 0x1B53F8u;
label_1b53f8:
    // 0x1b53f8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b53fc:
    // 0x1b53fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b5400:
    // 0x1b5400: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1b5400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b5404:
    // 0x1b5404: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1b5408:
    if (ctx->pc == 0x1B5408u) {
        ctx->pc = 0x1B540Cu;
        goto label_1b540c;
    }
    ctx->pc = 0x1B5404u;
    {
        const bool branch_taken_0x1b5404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5404) {
            ctx->pc = 0x1B5458u;
            goto label_1b5458;
        }
    }
    ctx->pc = 0x1B540Cu;
label_1b540c:
    // 0x1b540c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1b540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1b5410:
    // 0x1b5410: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b5414:
    if (ctx->pc == 0x1B5414u) {
        ctx->pc = 0x1B5418u;
        goto label_1b5418;
    }
    ctx->pc = 0x1B5410u;
    {
        const bool branch_taken_0x1b5410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5410) {
            ctx->pc = 0x1B5428u;
            goto label_1b5428;
        }
    }
    ctx->pc = 0x1B5418u;
label_1b5418:
    // 0x1b5418: 0xc0604f0  jal         func_1813C0
label_1b541c:
    if (ctx->pc == 0x1B541Cu) {
        ctx->pc = 0x1B541Cu;
            // 0x1b541c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B5420u;
        goto label_1b5420;
    }
    ctx->pc = 0x1B5418u;
    SET_GPR_U32(ctx, 31, 0x1B5420u);
    ctx->pc = 0x1B541Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5418u;
            // 0x1b541c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5420u; }
        if (ctx->pc != 0x1B5420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5420u; }
        if (ctx->pc != 0x1B5420u) { return; }
    }
    ctx->pc = 0x1B5420u;
label_1b5420:
    // 0x1b5420: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b5424:
    if (ctx->pc == 0x1B5424u) {
        ctx->pc = 0x1B5428u;
        goto label_1b5428;
    }
    ctx->pc = 0x1B5420u;
    {
        const bool branch_taken_0x1b5420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5420) {
            ctx->pc = 0x1B5430u;
            goto label_1b5430;
        }
    }
    ctx->pc = 0x1B5428u;
label_1b5428:
    // 0x1b5428: 0xc0604dc  jal         func_181370
label_1b542c:
    if (ctx->pc == 0x1B542Cu) {
        ctx->pc = 0x1B542Cu;
            // 0x1b542c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B5430u;
        goto label_1b5430;
    }
    ctx->pc = 0x1B5428u;
    SET_GPR_U32(ctx, 31, 0x1B5430u);
    ctx->pc = 0x1B542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5428u;
            // 0x1b542c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5430u; }
        if (ctx->pc != 0x1B5430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5430u; }
        if (ctx->pc != 0x1B5430u) { return; }
    }
    ctx->pc = 0x1B5430u;
label_1b5430:
    // 0x1b5430: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1b5430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1b5434:
    // 0x1b5434: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b5438:
    if (ctx->pc == 0x1B5438u) {
        ctx->pc = 0x1B543Cu;
        goto label_1b543c;
    }
    ctx->pc = 0x1B5434u;
    {
        const bool branch_taken_0x1b5434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5434) {
            ctx->pc = 0x1B5448u;
            goto label_1b5448;
        }
    }
    ctx->pc = 0x1B543Cu;
label_1b543c:
    // 0x1b543c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b5440:
    if (ctx->pc == 0x1B5440u) {
        ctx->pc = 0x1B5440u;
            // 0x1b5440: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1B5444u;
        goto label_1b5444;
    }
    ctx->pc = 0x1B543Cu;
    {
        const bool branch_taken_0x1b543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B543Cu;
            // 0x1b5440: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b543c) {
            ctx->pc = 0x1B5468u;
            goto label_1b5468;
        }
    }
    ctx->pc = 0x1B5444u;
label_1b5444:
    // 0x1b5444: 0x0  nop
    ctx->pc = 0x1b5444u;
    // NOP
label_1b5448:
    // 0x1b5448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b544c:
    // 0x1b544c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b5450:
    if (ctx->pc == 0x1B5450u) {
        ctx->pc = 0x1B5450u;
            // 0x1b5450: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1B5454u;
        goto label_1b5454;
    }
    ctx->pc = 0x1B544Cu;
    {
        const bool branch_taken_0x1b544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B544Cu;
            // 0x1b5450: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b544c) {
            ctx->pc = 0x1B5468u;
            goto label_1b5468;
        }
    }
    ctx->pc = 0x1B5454u;
label_1b5454:
    // 0x1b5454: 0x0  nop
    ctx->pc = 0x1b5454u;
    // NOP
label_1b5458:
    // 0x1b5458: 0xc0604dc  jal         func_181370
label_1b545c:
    if (ctx->pc == 0x1B545Cu) {
        ctx->pc = 0x1B545Cu;
            // 0x1b545c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B5460u;
        goto label_1b5460;
    }
    ctx->pc = 0x1B5458u;
    SET_GPR_U32(ctx, 31, 0x1B5460u);
    ctx->pc = 0x1B545Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5458u;
            // 0x1b545c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5460u; }
        if (ctx->pc != 0x1B5460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5460u; }
        if (ctx->pc != 0x1B5460u) { return; }
    }
    ctx->pc = 0x1B5460u;
label_1b5460:
    // 0x1b5460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5464:
    // 0x1b5464: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1b5464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1b5468:
    // 0x1b5468: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b5468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b546c:
    // 0x1b546c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1b546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1b5470:
    // 0x1b5470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5474:
    // 0x1b5474: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1b5474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1b5478:
    // 0x1b5478: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b5478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b547c:
    // 0x1b547c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1b547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1b5480:
    // 0x1b5480: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b5480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b5484:
    // 0x1b5484: 0x0  nop
    ctx->pc = 0x1b5484u;
    // NOP
label_1b5488:
    // 0x1b5488: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b5488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b548c:
    // 0x1b548c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1b548cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1b5490:
    // 0x1b5490: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5494:
    // 0x1b5494: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1b5494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1b5498:
    // 0x1b5498: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b5498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b549c:
    // 0x1b549c: 0x0  nop
    ctx->pc = 0x1b549cu;
    // NOP
label_1b54a0:
    // 0x1b54a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b54a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b54a4:
    // 0x1b54a4: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1b54a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1b54a8:
    // 0x1b54a8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b54ac:
    // 0x1b54ac: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1b54acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1b54b0:
    // 0x1b54b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b54b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b54b4:
    // 0x1b54b4: 0x0  nop
    ctx->pc = 0x1b54b4u;
    // NOP
label_1b54b8:
    // 0x1b54b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b54b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b54bc:
    // 0x1b54bc: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1b54bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1b54c0:
    // 0x1b54c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b54c4:
    // 0x1b54c4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1b54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1b54c8:
    // 0x1b54c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b54c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b54cc:
    // 0x1b54cc: 0x0  nop
    ctx->pc = 0x1b54ccu;
    // NOP
label_1b54d0:
    // 0x1b54d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b54d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b54d4:
    // 0x1b54d4: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1b54d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1b54d8:
    // 0x1b54d8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b54dc:
    // 0x1b54dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b54dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b54e0:
    // 0x1b54e0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1b54e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1b54e4:
    // 0x1b54e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b54e8:
    // 0x1b54e8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b54e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b54ec:
    // 0x1b54ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b54ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b54f0:
    // 0x1b54f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b54f4:
    if (ctx->pc == 0x1B54F4u) {
        ctx->pc = 0x1B54F4u;
            // 0x1b54f4: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1B54F8u;
        goto label_1b54f8;
    }
    ctx->pc = 0x1B54F0u;
    {
        const bool branch_taken_0x1b54f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B54F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54F0u;
            // 0x1b54f4: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b54f0) {
            ctx->pc = 0x1B5510u;
            goto label_1b5510;
        }
    }
    ctx->pc = 0x1B54F8u;
label_1b54f8:
    // 0x1b54f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b54f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b54fc:
    // 0x1b54fc: 0x0  nop
    ctx->pc = 0x1b54fcu;
    // NOP
label_1b5500:
    // 0x1b5500: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5504:
    // 0x1b5504: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1b5508:
    if (ctx->pc == 0x1B5508u) {
        ctx->pc = 0x1B550Cu;
        goto label_1b550c;
    }
    ctx->pc = 0x1B5504u;
    {
        const bool branch_taken_0x1b5504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5504) {
            ctx->pc = 0x1B5528u;
            goto label_1b5528;
        }
    }
    ctx->pc = 0x1B550Cu;
label_1b550c:
    // 0x1b550c: 0x0  nop
    ctx->pc = 0x1b550cu;
    // NOP
label_1b5510:
    // 0x1b5510: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1b5510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1b5514:
    // 0x1b5514: 0x40f809  jalr        $v0
label_1b5518:
    if (ctx->pc == 0x1B5518u) {
        ctx->pc = 0x1B5518u;
            // 0x1b5518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B551Cu;
        goto label_1b551c;
    }
    ctx->pc = 0x1B5514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B551Cu);
        ctx->pc = 0x1B5518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5514u;
            // 0x1b5518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4E90u: goto label_1b4e90;
            case 0x1B4E94u: goto label_1b4e94;
            case 0x1B4E98u: goto label_1b4e98;
            case 0x1B4E9Cu: goto label_1b4e9c;
            case 0x1B4EA0u: goto label_1b4ea0;
            case 0x1B4EA4u: goto label_1b4ea4;
            case 0x1B4EA8u: goto label_1b4ea8;
            case 0x1B4EACu: goto label_1b4eac;
            case 0x1B4EB0u: goto label_1b4eb0;
            case 0x1B4EB4u: goto label_1b4eb4;
            case 0x1B4EB8u: goto label_1b4eb8;
            case 0x1B4EBCu: goto label_1b4ebc;
            case 0x1B4EC0u: goto label_1b4ec0;
            case 0x1B4EC4u: goto label_1b4ec4;
            case 0x1B4EC8u: goto label_1b4ec8;
            case 0x1B4ECCu: goto label_1b4ecc;
            case 0x1B4ED0u: goto label_1b4ed0;
            case 0x1B4ED4u: goto label_1b4ed4;
            case 0x1B4ED8u: goto label_1b4ed8;
            case 0x1B4EDCu: goto label_1b4edc;
            case 0x1B4EE0u: goto label_1b4ee0;
            case 0x1B4EE4u: goto label_1b4ee4;
            case 0x1B4EE8u: goto label_1b4ee8;
            case 0x1B4EECu: goto label_1b4eec;
            case 0x1B4EF0u: goto label_1b4ef0;
            case 0x1B4EF4u: goto label_1b4ef4;
            case 0x1B4EF8u: goto label_1b4ef8;
            case 0x1B4EFCu: goto label_1b4efc;
            case 0x1B4F00u: goto label_1b4f00;
            case 0x1B4F04u: goto label_1b4f04;
            case 0x1B4F08u: goto label_1b4f08;
            case 0x1B4F0Cu: goto label_1b4f0c;
            case 0x1B4F10u: goto label_1b4f10;
            case 0x1B4F14u: goto label_1b4f14;
            case 0x1B4F18u: goto label_1b4f18;
            case 0x1B4F1Cu: goto label_1b4f1c;
            case 0x1B4F20u: goto label_1b4f20;
            case 0x1B4F24u: goto label_1b4f24;
            case 0x1B4F28u: goto label_1b4f28;
            case 0x1B4F2Cu: goto label_1b4f2c;
            case 0x1B4F30u: goto label_1b4f30;
            case 0x1B4F34u: goto label_1b4f34;
            case 0x1B4F38u: goto label_1b4f38;
            case 0x1B4F3Cu: goto label_1b4f3c;
            case 0x1B4F40u: goto label_1b4f40;
            case 0x1B4F44u: goto label_1b4f44;
            case 0x1B4F48u: goto label_1b4f48;
            case 0x1B4F4Cu: goto label_1b4f4c;
            case 0x1B4F50u: goto label_1b4f50;
            case 0x1B4F54u: goto label_1b4f54;
            case 0x1B4F58u: goto label_1b4f58;
            case 0x1B4F5Cu: goto label_1b4f5c;
            case 0x1B4F60u: goto label_1b4f60;
            case 0x1B4F64u: goto label_1b4f64;
            case 0x1B4F68u: goto label_1b4f68;
            case 0x1B4F6Cu: goto label_1b4f6c;
            case 0x1B4F70u: goto label_1b4f70;
            case 0x1B4F74u: goto label_1b4f74;
            case 0x1B4F78u: goto label_1b4f78;
            case 0x1B4F7Cu: goto label_1b4f7c;
            case 0x1B4F80u: goto label_1b4f80;
            case 0x1B4F84u: goto label_1b4f84;
            case 0x1B4F88u: goto label_1b4f88;
            case 0x1B4F8Cu: goto label_1b4f8c;
            case 0x1B4F90u: goto label_1b4f90;
            case 0x1B4F94u: goto label_1b4f94;
            case 0x1B4F98u: goto label_1b4f98;
            case 0x1B4F9Cu: goto label_1b4f9c;
            case 0x1B4FA0u: goto label_1b4fa0;
            case 0x1B4FA4u: goto label_1b4fa4;
            case 0x1B4FA8u: goto label_1b4fa8;
            case 0x1B4FACu: goto label_1b4fac;
            case 0x1B4FB0u: goto label_1b4fb0;
            case 0x1B4FB4u: goto label_1b4fb4;
            case 0x1B4FB8u: goto label_1b4fb8;
            case 0x1B4FBCu: goto label_1b4fbc;
            case 0x1B4FC0u: goto label_1b4fc0;
            case 0x1B4FC4u: goto label_1b4fc4;
            case 0x1B4FC8u: goto label_1b4fc8;
            case 0x1B4FCCu: goto label_1b4fcc;
            case 0x1B4FD0u: goto label_1b4fd0;
            case 0x1B4FD4u: goto label_1b4fd4;
            case 0x1B4FD8u: goto label_1b4fd8;
            case 0x1B4FDCu: goto label_1b4fdc;
            case 0x1B4FE0u: goto label_1b4fe0;
            case 0x1B4FE4u: goto label_1b4fe4;
            case 0x1B4FE8u: goto label_1b4fe8;
            case 0x1B4FECu: goto label_1b4fec;
            case 0x1B4FF0u: goto label_1b4ff0;
            case 0x1B4FF4u: goto label_1b4ff4;
            case 0x1B4FF8u: goto label_1b4ff8;
            case 0x1B4FFCu: goto label_1b4ffc;
            case 0x1B5000u: goto label_1b5000;
            case 0x1B5004u: goto label_1b5004;
            case 0x1B5008u: goto label_1b5008;
            case 0x1B500Cu: goto label_1b500c;
            case 0x1B5010u: goto label_1b5010;
            case 0x1B5014u: goto label_1b5014;
            case 0x1B5018u: goto label_1b5018;
            case 0x1B501Cu: goto label_1b501c;
            case 0x1B5020u: goto label_1b5020;
            case 0x1B5024u: goto label_1b5024;
            case 0x1B5028u: goto label_1b5028;
            case 0x1B502Cu: goto label_1b502c;
            case 0x1B5030u: goto label_1b5030;
            case 0x1B5034u: goto label_1b5034;
            case 0x1B5038u: goto label_1b5038;
            case 0x1B503Cu: goto label_1b503c;
            case 0x1B5040u: goto label_1b5040;
            case 0x1B5044u: goto label_1b5044;
            case 0x1B5048u: goto label_1b5048;
            case 0x1B504Cu: goto label_1b504c;
            case 0x1B5050u: goto label_1b5050;
            case 0x1B5054u: goto label_1b5054;
            case 0x1B5058u: goto label_1b5058;
            case 0x1B505Cu: goto label_1b505c;
            case 0x1B5060u: goto label_1b5060;
            case 0x1B5064u: goto label_1b5064;
            case 0x1B5068u: goto label_1b5068;
            case 0x1B506Cu: goto label_1b506c;
            case 0x1B5070u: goto label_1b5070;
            case 0x1B5074u: goto label_1b5074;
            case 0x1B5078u: goto label_1b5078;
            case 0x1B507Cu: goto label_1b507c;
            case 0x1B5080u: goto label_1b5080;
            case 0x1B5084u: goto label_1b5084;
            case 0x1B5088u: goto label_1b5088;
            case 0x1B508Cu: goto label_1b508c;
            case 0x1B5090u: goto label_1b5090;
            case 0x1B5094u: goto label_1b5094;
            case 0x1B5098u: goto label_1b5098;
            case 0x1B509Cu: goto label_1b509c;
            case 0x1B50A0u: goto label_1b50a0;
            case 0x1B50A4u: goto label_1b50a4;
            case 0x1B50A8u: goto label_1b50a8;
            case 0x1B50ACu: goto label_1b50ac;
            case 0x1B50B0u: goto label_1b50b0;
            case 0x1B50B4u: goto label_1b50b4;
            case 0x1B50B8u: goto label_1b50b8;
            case 0x1B50BCu: goto label_1b50bc;
            case 0x1B50C0u: goto label_1b50c0;
            case 0x1B50C4u: goto label_1b50c4;
            case 0x1B50C8u: goto label_1b50c8;
            case 0x1B50CCu: goto label_1b50cc;
            case 0x1B50D0u: goto label_1b50d0;
            case 0x1B50D4u: goto label_1b50d4;
            case 0x1B50D8u: goto label_1b50d8;
            case 0x1B50DCu: goto label_1b50dc;
            case 0x1B50E0u: goto label_1b50e0;
            case 0x1B50E4u: goto label_1b50e4;
            case 0x1B50E8u: goto label_1b50e8;
            case 0x1B50ECu: goto label_1b50ec;
            case 0x1B50F0u: goto label_1b50f0;
            case 0x1B50F4u: goto label_1b50f4;
            case 0x1B50F8u: goto label_1b50f8;
            case 0x1B50FCu: goto label_1b50fc;
            case 0x1B5100u: goto label_1b5100;
            case 0x1B5104u: goto label_1b5104;
            case 0x1B5108u: goto label_1b5108;
            case 0x1B510Cu: goto label_1b510c;
            case 0x1B5110u: goto label_1b5110;
            case 0x1B5114u: goto label_1b5114;
            case 0x1B5118u: goto label_1b5118;
            case 0x1B511Cu: goto label_1b511c;
            case 0x1B5120u: goto label_1b5120;
            case 0x1B5124u: goto label_1b5124;
            case 0x1B5128u: goto label_1b5128;
            case 0x1B512Cu: goto label_1b512c;
            case 0x1B5130u: goto label_1b5130;
            case 0x1B5134u: goto label_1b5134;
            case 0x1B5138u: goto label_1b5138;
            case 0x1B513Cu: goto label_1b513c;
            case 0x1B5140u: goto label_1b5140;
            case 0x1B5144u: goto label_1b5144;
            case 0x1B5148u: goto label_1b5148;
            case 0x1B514Cu: goto label_1b514c;
            case 0x1B5150u: goto label_1b5150;
            case 0x1B5154u: goto label_1b5154;
            case 0x1B5158u: goto label_1b5158;
            case 0x1B515Cu: goto label_1b515c;
            case 0x1B5160u: goto label_1b5160;
            case 0x1B5164u: goto label_1b5164;
            case 0x1B5168u: goto label_1b5168;
            case 0x1B516Cu: goto label_1b516c;
            case 0x1B5170u: goto label_1b5170;
            case 0x1B5174u: goto label_1b5174;
            case 0x1B5178u: goto label_1b5178;
            case 0x1B517Cu: goto label_1b517c;
            case 0x1B5180u: goto label_1b5180;
            case 0x1B5184u: goto label_1b5184;
            case 0x1B5188u: goto label_1b5188;
            case 0x1B518Cu: goto label_1b518c;
            case 0x1B5190u: goto label_1b5190;
            case 0x1B5194u: goto label_1b5194;
            case 0x1B5198u: goto label_1b5198;
            case 0x1B519Cu: goto label_1b519c;
            case 0x1B51A0u: goto label_1b51a0;
            case 0x1B51A4u: goto label_1b51a4;
            case 0x1B51A8u: goto label_1b51a8;
            case 0x1B51ACu: goto label_1b51ac;
            case 0x1B51B0u: goto label_1b51b0;
            case 0x1B51B4u: goto label_1b51b4;
            case 0x1B51B8u: goto label_1b51b8;
            case 0x1B51BCu: goto label_1b51bc;
            case 0x1B51C0u: goto label_1b51c0;
            case 0x1B51C4u: goto label_1b51c4;
            case 0x1B51C8u: goto label_1b51c8;
            case 0x1B51CCu: goto label_1b51cc;
            case 0x1B51D0u: goto label_1b51d0;
            case 0x1B51D4u: goto label_1b51d4;
            case 0x1B51D8u: goto label_1b51d8;
            case 0x1B51DCu: goto label_1b51dc;
            case 0x1B51E0u: goto label_1b51e0;
            case 0x1B51E4u: goto label_1b51e4;
            case 0x1B51E8u: goto label_1b51e8;
            case 0x1B51ECu: goto label_1b51ec;
            case 0x1B51F0u: goto label_1b51f0;
            case 0x1B51F4u: goto label_1b51f4;
            case 0x1B51F8u: goto label_1b51f8;
            case 0x1B51FCu: goto label_1b51fc;
            case 0x1B5200u: goto label_1b5200;
            case 0x1B5204u: goto label_1b5204;
            case 0x1B5208u: goto label_1b5208;
            case 0x1B520Cu: goto label_1b520c;
            case 0x1B5210u: goto label_1b5210;
            case 0x1B5214u: goto label_1b5214;
            case 0x1B5218u: goto label_1b5218;
            case 0x1B521Cu: goto label_1b521c;
            case 0x1B5220u: goto label_1b5220;
            case 0x1B5224u: goto label_1b5224;
            case 0x1B5228u: goto label_1b5228;
            case 0x1B522Cu: goto label_1b522c;
            case 0x1B5230u: goto label_1b5230;
            case 0x1B5234u: goto label_1b5234;
            case 0x1B5238u: goto label_1b5238;
            case 0x1B523Cu: goto label_1b523c;
            case 0x1B5240u: goto label_1b5240;
            case 0x1B5244u: goto label_1b5244;
            case 0x1B5248u: goto label_1b5248;
            case 0x1B524Cu: goto label_1b524c;
            case 0x1B5250u: goto label_1b5250;
            case 0x1B5254u: goto label_1b5254;
            case 0x1B5258u: goto label_1b5258;
            case 0x1B525Cu: goto label_1b525c;
            case 0x1B5260u: goto label_1b5260;
            case 0x1B5264u: goto label_1b5264;
            case 0x1B5268u: goto label_1b5268;
            case 0x1B526Cu: goto label_1b526c;
            case 0x1B5270u: goto label_1b5270;
            case 0x1B5274u: goto label_1b5274;
            case 0x1B5278u: goto label_1b5278;
            case 0x1B527Cu: goto label_1b527c;
            case 0x1B5280u: goto label_1b5280;
            case 0x1B5284u: goto label_1b5284;
            case 0x1B5288u: goto label_1b5288;
            case 0x1B528Cu: goto label_1b528c;
            case 0x1B5290u: goto label_1b5290;
            case 0x1B5294u: goto label_1b5294;
            case 0x1B5298u: goto label_1b5298;
            case 0x1B529Cu: goto label_1b529c;
            case 0x1B52A0u: goto label_1b52a0;
            case 0x1B52A4u: goto label_1b52a4;
            case 0x1B52A8u: goto label_1b52a8;
            case 0x1B52ACu: goto label_1b52ac;
            case 0x1B52B0u: goto label_1b52b0;
            case 0x1B52B4u: goto label_1b52b4;
            case 0x1B52B8u: goto label_1b52b8;
            case 0x1B52BCu: goto label_1b52bc;
            case 0x1B52C0u: goto label_1b52c0;
            case 0x1B52C4u: goto label_1b52c4;
            case 0x1B52C8u: goto label_1b52c8;
            case 0x1B52CCu: goto label_1b52cc;
            case 0x1B52D0u: goto label_1b52d0;
            case 0x1B52D4u: goto label_1b52d4;
            case 0x1B52D8u: goto label_1b52d8;
            case 0x1B52DCu: goto label_1b52dc;
            case 0x1B52E0u: goto label_1b52e0;
            case 0x1B52E4u: goto label_1b52e4;
            case 0x1B52E8u: goto label_1b52e8;
            case 0x1B52ECu: goto label_1b52ec;
            case 0x1B52F0u: goto label_1b52f0;
            case 0x1B52F4u: goto label_1b52f4;
            case 0x1B52F8u: goto label_1b52f8;
            case 0x1B52FCu: goto label_1b52fc;
            case 0x1B5300u: goto label_1b5300;
            case 0x1B5304u: goto label_1b5304;
            case 0x1B5308u: goto label_1b5308;
            case 0x1B530Cu: goto label_1b530c;
            case 0x1B5310u: goto label_1b5310;
            case 0x1B5314u: goto label_1b5314;
            case 0x1B5318u: goto label_1b5318;
            case 0x1B531Cu: goto label_1b531c;
            case 0x1B5320u: goto label_1b5320;
            case 0x1B5324u: goto label_1b5324;
            case 0x1B5328u: goto label_1b5328;
            case 0x1B532Cu: goto label_1b532c;
            case 0x1B5330u: goto label_1b5330;
            case 0x1B5334u: goto label_1b5334;
            case 0x1B5338u: goto label_1b5338;
            case 0x1B533Cu: goto label_1b533c;
            case 0x1B5340u: goto label_1b5340;
            case 0x1B5344u: goto label_1b5344;
            case 0x1B5348u: goto label_1b5348;
            case 0x1B534Cu: goto label_1b534c;
            case 0x1B5350u: goto label_1b5350;
            case 0x1B5354u: goto label_1b5354;
            case 0x1B5358u: goto label_1b5358;
            case 0x1B535Cu: goto label_1b535c;
            case 0x1B5360u: goto label_1b5360;
            case 0x1B5364u: goto label_1b5364;
            case 0x1B5368u: goto label_1b5368;
            case 0x1B536Cu: goto label_1b536c;
            case 0x1B5370u: goto label_1b5370;
            case 0x1B5374u: goto label_1b5374;
            case 0x1B5378u: goto label_1b5378;
            case 0x1B537Cu: goto label_1b537c;
            case 0x1B5380u: goto label_1b5380;
            case 0x1B5384u: goto label_1b5384;
            case 0x1B5388u: goto label_1b5388;
            case 0x1B538Cu: goto label_1b538c;
            case 0x1B5390u: goto label_1b5390;
            case 0x1B5394u: goto label_1b5394;
            case 0x1B5398u: goto label_1b5398;
            case 0x1B539Cu: goto label_1b539c;
            case 0x1B53A0u: goto label_1b53a0;
            case 0x1B53A4u: goto label_1b53a4;
            case 0x1B53A8u: goto label_1b53a8;
            case 0x1B53ACu: goto label_1b53ac;
            case 0x1B53B0u: goto label_1b53b0;
            case 0x1B53B4u: goto label_1b53b4;
            case 0x1B53B8u: goto label_1b53b8;
            case 0x1B53BCu: goto label_1b53bc;
            case 0x1B53C0u: goto label_1b53c0;
            case 0x1B53C4u: goto label_1b53c4;
            case 0x1B53C8u: goto label_1b53c8;
            case 0x1B53CCu: goto label_1b53cc;
            case 0x1B53D0u: goto label_1b53d0;
            case 0x1B53D4u: goto label_1b53d4;
            case 0x1B53D8u: goto label_1b53d8;
            case 0x1B53DCu: goto label_1b53dc;
            case 0x1B53E0u: goto label_1b53e0;
            case 0x1B53E4u: goto label_1b53e4;
            case 0x1B53E8u: goto label_1b53e8;
            case 0x1B53ECu: goto label_1b53ec;
            case 0x1B53F0u: goto label_1b53f0;
            case 0x1B53F4u: goto label_1b53f4;
            case 0x1B53F8u: goto label_1b53f8;
            case 0x1B53FCu: goto label_1b53fc;
            case 0x1B5400u: goto label_1b5400;
            case 0x1B5404u: goto label_1b5404;
            case 0x1B5408u: goto label_1b5408;
            case 0x1B540Cu: goto label_1b540c;
            case 0x1B5410u: goto label_1b5410;
            case 0x1B5414u: goto label_1b5414;
            case 0x1B5418u: goto label_1b5418;
            case 0x1B541Cu: goto label_1b541c;
            case 0x1B5420u: goto label_1b5420;
            case 0x1B5424u: goto label_1b5424;
            case 0x1B5428u: goto label_1b5428;
            case 0x1B542Cu: goto label_1b542c;
            case 0x1B5430u: goto label_1b5430;
            case 0x1B5434u: goto label_1b5434;
            case 0x1B5438u: goto label_1b5438;
            case 0x1B543Cu: goto label_1b543c;
            case 0x1B5440u: goto label_1b5440;
            case 0x1B5444u: goto label_1b5444;
            case 0x1B5448u: goto label_1b5448;
            case 0x1B544Cu: goto label_1b544c;
            case 0x1B5450u: goto label_1b5450;
            case 0x1B5454u: goto label_1b5454;
            case 0x1B5458u: goto label_1b5458;
            case 0x1B545Cu: goto label_1b545c;
            case 0x1B5460u: goto label_1b5460;
            case 0x1B5464u: goto label_1b5464;
            case 0x1B5468u: goto label_1b5468;
            case 0x1B546Cu: goto label_1b546c;
            case 0x1B5470u: goto label_1b5470;
            case 0x1B5474u: goto label_1b5474;
            case 0x1B5478u: goto label_1b5478;
            case 0x1B547Cu: goto label_1b547c;
            case 0x1B5480u: goto label_1b5480;
            case 0x1B5484u: goto label_1b5484;
            case 0x1B5488u: goto label_1b5488;
            case 0x1B548Cu: goto label_1b548c;
            case 0x1B5490u: goto label_1b5490;
            case 0x1B5494u: goto label_1b5494;
            case 0x1B5498u: goto label_1b5498;
            case 0x1B549Cu: goto label_1b549c;
            case 0x1B54A0u: goto label_1b54a0;
            case 0x1B54A4u: goto label_1b54a4;
            case 0x1B54A8u: goto label_1b54a8;
            case 0x1B54ACu: goto label_1b54ac;
            case 0x1B54B0u: goto label_1b54b0;
            case 0x1B54B4u: goto label_1b54b4;
            case 0x1B54B8u: goto label_1b54b8;
            case 0x1B54BCu: goto label_1b54bc;
            case 0x1B54C0u: goto label_1b54c0;
            case 0x1B54C4u: goto label_1b54c4;
            case 0x1B54C8u: goto label_1b54c8;
            case 0x1B54CCu: goto label_1b54cc;
            case 0x1B54D0u: goto label_1b54d0;
            case 0x1B54D4u: goto label_1b54d4;
            case 0x1B54D8u: goto label_1b54d8;
            case 0x1B54DCu: goto label_1b54dc;
            case 0x1B54E0u: goto label_1b54e0;
            case 0x1B54E4u: goto label_1b54e4;
            case 0x1B54E8u: goto label_1b54e8;
            case 0x1B54ECu: goto label_1b54ec;
            case 0x1B54F0u: goto label_1b54f0;
            case 0x1B54F4u: goto label_1b54f4;
            case 0x1B54F8u: goto label_1b54f8;
            case 0x1B54FCu: goto label_1b54fc;
            case 0x1B5500u: goto label_1b5500;
            case 0x1B5504u: goto label_1b5504;
            case 0x1B5508u: goto label_1b5508;
            case 0x1B550Cu: goto label_1b550c;
            case 0x1B5510u: goto label_1b5510;
            case 0x1B5514u: goto label_1b5514;
            case 0x1B5518u: goto label_1b5518;
            case 0x1B551Cu: goto label_1b551c;
            case 0x1B5520u: goto label_1b5520;
            case 0x1B5524u: goto label_1b5524;
            case 0x1B5528u: goto label_1b5528;
            case 0x1B552Cu: goto label_1b552c;
            case 0x1B5530u: goto label_1b5530;
            case 0x1B5534u: goto label_1b5534;
            case 0x1B5538u: goto label_1b5538;
            case 0x1B553Cu: goto label_1b553c;
            case 0x1B5540u: goto label_1b5540;
            case 0x1B5544u: goto label_1b5544;
            case 0x1B5548u: goto label_1b5548;
            case 0x1B554Cu: goto label_1b554c;
            case 0x1B5550u: goto label_1b5550;
            case 0x1B5554u: goto label_1b5554;
            case 0x1B5558u: goto label_1b5558;
            case 0x1B555Cu: goto label_1b555c;
            case 0x1B5560u: goto label_1b5560;
            case 0x1B5564u: goto label_1b5564;
            case 0x1B5568u: goto label_1b5568;
            case 0x1B556Cu: goto label_1b556c;
            case 0x1B5570u: goto label_1b5570;
            case 0x1B5574u: goto label_1b5574;
            case 0x1B5578u: goto label_1b5578;
            case 0x1B557Cu: goto label_1b557c;
            case 0x1B5580u: goto label_1b5580;
            case 0x1B5584u: goto label_1b5584;
            case 0x1B5588u: goto label_1b5588;
            case 0x1B558Cu: goto label_1b558c;
            case 0x1B5590u: goto label_1b5590;
            case 0x1B5594u: goto label_1b5594;
            case 0x1B5598u: goto label_1b5598;
            case 0x1B559Cu: goto label_1b559c;
            case 0x1B55A0u: goto label_1b55a0;
            case 0x1B55A4u: goto label_1b55a4;
            case 0x1B55A8u: goto label_1b55a8;
            case 0x1B55ACu: goto label_1b55ac;
            case 0x1B55B0u: goto label_1b55b0;
            case 0x1B55B4u: goto label_1b55b4;
            case 0x1B55B8u: goto label_1b55b8;
            case 0x1B55BCu: goto label_1b55bc;
            case 0x1B55C0u: goto label_1b55c0;
            case 0x1B55C4u: goto label_1b55c4;
            case 0x1B55C8u: goto label_1b55c8;
            case 0x1B55CCu: goto label_1b55cc;
            case 0x1B55D0u: goto label_1b55d0;
            case 0x1B55D4u: goto label_1b55d4;
            case 0x1B55D8u: goto label_1b55d8;
            case 0x1B55DCu: goto label_1b55dc;
            case 0x1B55E0u: goto label_1b55e0;
            case 0x1B55E4u: goto label_1b55e4;
            case 0x1B55E8u: goto label_1b55e8;
            case 0x1B55ECu: goto label_1b55ec;
            case 0x1B55F0u: goto label_1b55f0;
            case 0x1B55F4u: goto label_1b55f4;
            case 0x1B55F8u: goto label_1b55f8;
            case 0x1B55FCu: goto label_1b55fc;
            case 0x1B5600u: goto label_1b5600;
            case 0x1B5604u: goto label_1b5604;
            case 0x1B5608u: goto label_1b5608;
            case 0x1B560Cu: goto label_1b560c;
            case 0x1B5610u: goto label_1b5610;
            case 0x1B5614u: goto label_1b5614;
            case 0x1B5618u: goto label_1b5618;
            case 0x1B561Cu: goto label_1b561c;
            case 0x1B5620u: goto label_1b5620;
            case 0x1B5624u: goto label_1b5624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B551Cu; }
            if (ctx->pc != 0x1B551Cu) { return; }
        }
    }
    ctx->pc = 0x1B551Cu;
label_1b551c:
    // 0x1b551c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1b5520:
    if (ctx->pc == 0x1B5520u) {
        ctx->pc = 0x1B5524u;
        goto label_1b5524;
    }
    ctx->pc = 0x1B551Cu;
    {
        const bool branch_taken_0x1b551c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b551c) {
            ctx->pc = 0x1B5618u;
            goto label_1b5618;
        }
    }
    ctx->pc = 0x1B5524u;
label_1b5524:
    // 0x1b5524: 0x0  nop
    ctx->pc = 0x1b5524u;
    // NOP
label_1b5528:
    // 0x1b5528: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b5528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b552c:
    // 0x1b552c: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1b5530:
    if (ctx->pc == 0x1B5530u) {
        ctx->pc = 0x1B5534u;
        goto label_1b5534;
    }
    ctx->pc = 0x1B552Cu;
    {
        const bool branch_taken_0x1b552c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1b552c) {
            ctx->pc = 0x1B55F8u;
            goto label_1b55f8;
        }
    }
    ctx->pc = 0x1B5534u;
label_1b5534:
    // 0x1b5534: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b5534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5538:
    // 0x1b5538: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1b5538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1b553c:
    // 0x1b553c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5540:
    // 0x1b5540: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b5540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b5544:
    // 0x1b5544: 0xc05d080  jal         func_174200
label_1b5548:
    if (ctx->pc == 0x1B5548u) {
        ctx->pc = 0x1B5548u;
            // 0x1b5548: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B554Cu;
        goto label_1b554c;
    }
    ctx->pc = 0x1B5544u;
    SET_GPR_U32(ctx, 31, 0x1B554Cu);
    ctx->pc = 0x1B5548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5544u;
            // 0x1b5548: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B554Cu; }
        if (ctx->pc != 0x1B554Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B554Cu; }
        if (ctx->pc != 0x1B554Cu) { return; }
    }
    ctx->pc = 0x1B554Cu;
label_1b554c:
    // 0x1b554c: 0xc050bb4  jal         func_142ED0
label_1b5550:
    if (ctx->pc == 0x1B5550u) {
        ctx->pc = 0x1B5554u;
        goto label_1b5554;
    }
    ctx->pc = 0x1B554Cu;
    SET_GPR_U32(ctx, 31, 0x1B5554u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5554u; }
        if (ctx->pc != 0x1B5554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5554u; }
        if (ctx->pc != 0x1B5554u) { return; }
    }
    ctx->pc = 0x1B5554u;
label_1b5554:
    // 0x1b5554: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5554u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1b5558:
    // 0x1b5558: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b555c:
    if (ctx->pc == 0x1B555Cu) {
        ctx->pc = 0x1B5560u;
        goto label_1b5560;
    }
    ctx->pc = 0x1B5558u;
    {
        const bool branch_taken_0x1b5558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5558) {
            ctx->pc = 0x1B5578u;
            goto label_1b5578;
        }
    }
    ctx->pc = 0x1B5560u;
label_1b5560:
    // 0x1b5560: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b5560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5564:
    // 0x1b5564: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1b5564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1b5568:
    // 0x1b5568: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b5568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b556c:
    // 0x1b556c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b556cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b5570:
    // 0x1b5570: 0xc05d080  jal         func_174200
label_1b5574:
    if (ctx->pc == 0x1B5574u) {
        ctx->pc = 0x1B5574u;
            // 0x1b5574: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B5578u;
        goto label_1b5578;
    }
    ctx->pc = 0x1B5570u;
    SET_GPR_U32(ctx, 31, 0x1B5578u);
    ctx->pc = 0x1B5574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5570u;
            // 0x1b5574: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5578u; }
        if (ctx->pc != 0x1B5578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5578u; }
        if (ctx->pc != 0x1B5578u) { return; }
    }
    ctx->pc = 0x1B5578u;
label_1b5578:
    // 0x1b5578: 0xc050bb4  jal         func_142ED0
label_1b557c:
    if (ctx->pc == 0x1B557Cu) {
        ctx->pc = 0x1B5580u;
        goto label_1b5580;
    }
    ctx->pc = 0x1B5578u;
    SET_GPR_U32(ctx, 31, 0x1B5580u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5580u; }
        if (ctx->pc != 0x1B5580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5580u; }
        if (ctx->pc != 0x1B5580u) { return; }
    }
    ctx->pc = 0x1B5580u;
label_1b5580:
    // 0x1b5580: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5580u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1b5584:
    // 0x1b5584: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b5588:
    if (ctx->pc == 0x1B5588u) {
        ctx->pc = 0x1B558Cu;
        goto label_1b558c;
    }
    ctx->pc = 0x1B5584u;
    {
        const bool branch_taken_0x1b5584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5584) {
            ctx->pc = 0x1B55A8u;
            goto label_1b55a8;
        }
    }
    ctx->pc = 0x1B558Cu;
label_1b558c:
    // 0x1b558c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5590:
    // 0x1b5590: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1b5590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1b5594:
    // 0x1b5594: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b5594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5598:
    // 0x1b5598: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b5598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b559c:
    // 0x1b559c: 0xc05d080  jal         func_174200
label_1b55a0:
    if (ctx->pc == 0x1B55A0u) {
        ctx->pc = 0x1B55A0u;
            // 0x1b55a0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B55A4u;
        goto label_1b55a4;
    }
    ctx->pc = 0x1B559Cu;
    SET_GPR_U32(ctx, 31, 0x1B55A4u);
    ctx->pc = 0x1B55A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B559Cu;
            // 0x1b55a0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55A4u; }
        if (ctx->pc != 0x1B55A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55A4u; }
        if (ctx->pc != 0x1B55A4u) { return; }
    }
    ctx->pc = 0x1B55A4u;
label_1b55a4:
    // 0x1b55a4: 0x0  nop
    ctx->pc = 0x1b55a4u;
    // NOP
label_1b55a8:
    // 0x1b55a8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1b55ac:
    // 0x1b55ac: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1b55acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b55b0:
    // 0x1b55b0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1b55b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b55b4:
    // 0x1b55b4: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b55b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b55b8:
    // 0x1b55b8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1b55b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b55bc:
    // 0x1b55bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b55bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b55c0:
    // 0x1b55c0: 0x0  nop
    ctx->pc = 0x1b55c0u;
    // NOP
label_1b55c4:
    // 0x1b55c4: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1b55c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1b55c8:
    // 0x1b55c8: 0xc053740  jal         func_14DD00
label_1b55cc:
    if (ctx->pc == 0x1B55CCu) {
        ctx->pc = 0x1B55CCu;
            // 0x1b55cc: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1B55D0u;
        goto label_1b55d0;
    }
    ctx->pc = 0x1B55C8u;
    SET_GPR_U32(ctx, 31, 0x1B55D0u);
    ctx->pc = 0x1B55CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55C8u;
            // 0x1b55cc: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55D0u; }
        if (ctx->pc != 0x1B55D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55D0u; }
        if (ctx->pc != 0x1B55D0u) { return; }
    }
    ctx->pc = 0x1B55D0u;
label_1b55d0:
    // 0x1b55d0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1b55d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b55d4:
    // 0x1b55d4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1b55d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b55d8:
    // 0x1b55d8: 0xc07b0fc  jal         func_1EC3F0
label_1b55dc:
    if (ctx->pc == 0x1B55DCu) {
        ctx->pc = 0x1B55DCu;
            // 0x1b55dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B55E0u;
        goto label_1b55e0;
    }
    ctx->pc = 0x1B55D8u;
    SET_GPR_U32(ctx, 31, 0x1B55E0u);
    ctx->pc = 0x1B55DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55D8u;
            // 0x1b55dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55E0u; }
        if (ctx->pc != 0x1B55E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55E0u; }
        if (ctx->pc != 0x1B55E0u) { return; }
    }
    ctx->pc = 0x1B55E0u;
label_1b55e0:
    // 0x1b55e0: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1b55e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1b55e4:
    // 0x1b55e4: 0x40f809  jalr        $v0
label_1b55e8:
    if (ctx->pc == 0x1B55E8u) {
        ctx->pc = 0x1B55E8u;
            // 0x1b55e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B55ECu;
        goto label_1b55ec;
    }
    ctx->pc = 0x1B55E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B55ECu);
        ctx->pc = 0x1B55E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55E4u;
            // 0x1b55e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4E90u: goto label_1b4e90;
            case 0x1B4E94u: goto label_1b4e94;
            case 0x1B4E98u: goto label_1b4e98;
            case 0x1B4E9Cu: goto label_1b4e9c;
            case 0x1B4EA0u: goto label_1b4ea0;
            case 0x1B4EA4u: goto label_1b4ea4;
            case 0x1B4EA8u: goto label_1b4ea8;
            case 0x1B4EACu: goto label_1b4eac;
            case 0x1B4EB0u: goto label_1b4eb0;
            case 0x1B4EB4u: goto label_1b4eb4;
            case 0x1B4EB8u: goto label_1b4eb8;
            case 0x1B4EBCu: goto label_1b4ebc;
            case 0x1B4EC0u: goto label_1b4ec0;
            case 0x1B4EC4u: goto label_1b4ec4;
            case 0x1B4EC8u: goto label_1b4ec8;
            case 0x1B4ECCu: goto label_1b4ecc;
            case 0x1B4ED0u: goto label_1b4ed0;
            case 0x1B4ED4u: goto label_1b4ed4;
            case 0x1B4ED8u: goto label_1b4ed8;
            case 0x1B4EDCu: goto label_1b4edc;
            case 0x1B4EE0u: goto label_1b4ee0;
            case 0x1B4EE4u: goto label_1b4ee4;
            case 0x1B4EE8u: goto label_1b4ee8;
            case 0x1B4EECu: goto label_1b4eec;
            case 0x1B4EF0u: goto label_1b4ef0;
            case 0x1B4EF4u: goto label_1b4ef4;
            case 0x1B4EF8u: goto label_1b4ef8;
            case 0x1B4EFCu: goto label_1b4efc;
            case 0x1B4F00u: goto label_1b4f00;
            case 0x1B4F04u: goto label_1b4f04;
            case 0x1B4F08u: goto label_1b4f08;
            case 0x1B4F0Cu: goto label_1b4f0c;
            case 0x1B4F10u: goto label_1b4f10;
            case 0x1B4F14u: goto label_1b4f14;
            case 0x1B4F18u: goto label_1b4f18;
            case 0x1B4F1Cu: goto label_1b4f1c;
            case 0x1B4F20u: goto label_1b4f20;
            case 0x1B4F24u: goto label_1b4f24;
            case 0x1B4F28u: goto label_1b4f28;
            case 0x1B4F2Cu: goto label_1b4f2c;
            case 0x1B4F30u: goto label_1b4f30;
            case 0x1B4F34u: goto label_1b4f34;
            case 0x1B4F38u: goto label_1b4f38;
            case 0x1B4F3Cu: goto label_1b4f3c;
            case 0x1B4F40u: goto label_1b4f40;
            case 0x1B4F44u: goto label_1b4f44;
            case 0x1B4F48u: goto label_1b4f48;
            case 0x1B4F4Cu: goto label_1b4f4c;
            case 0x1B4F50u: goto label_1b4f50;
            case 0x1B4F54u: goto label_1b4f54;
            case 0x1B4F58u: goto label_1b4f58;
            case 0x1B4F5Cu: goto label_1b4f5c;
            case 0x1B4F60u: goto label_1b4f60;
            case 0x1B4F64u: goto label_1b4f64;
            case 0x1B4F68u: goto label_1b4f68;
            case 0x1B4F6Cu: goto label_1b4f6c;
            case 0x1B4F70u: goto label_1b4f70;
            case 0x1B4F74u: goto label_1b4f74;
            case 0x1B4F78u: goto label_1b4f78;
            case 0x1B4F7Cu: goto label_1b4f7c;
            case 0x1B4F80u: goto label_1b4f80;
            case 0x1B4F84u: goto label_1b4f84;
            case 0x1B4F88u: goto label_1b4f88;
            case 0x1B4F8Cu: goto label_1b4f8c;
            case 0x1B4F90u: goto label_1b4f90;
            case 0x1B4F94u: goto label_1b4f94;
            case 0x1B4F98u: goto label_1b4f98;
            case 0x1B4F9Cu: goto label_1b4f9c;
            case 0x1B4FA0u: goto label_1b4fa0;
            case 0x1B4FA4u: goto label_1b4fa4;
            case 0x1B4FA8u: goto label_1b4fa8;
            case 0x1B4FACu: goto label_1b4fac;
            case 0x1B4FB0u: goto label_1b4fb0;
            case 0x1B4FB4u: goto label_1b4fb4;
            case 0x1B4FB8u: goto label_1b4fb8;
            case 0x1B4FBCu: goto label_1b4fbc;
            case 0x1B4FC0u: goto label_1b4fc0;
            case 0x1B4FC4u: goto label_1b4fc4;
            case 0x1B4FC8u: goto label_1b4fc8;
            case 0x1B4FCCu: goto label_1b4fcc;
            case 0x1B4FD0u: goto label_1b4fd0;
            case 0x1B4FD4u: goto label_1b4fd4;
            case 0x1B4FD8u: goto label_1b4fd8;
            case 0x1B4FDCu: goto label_1b4fdc;
            case 0x1B4FE0u: goto label_1b4fe0;
            case 0x1B4FE4u: goto label_1b4fe4;
            case 0x1B4FE8u: goto label_1b4fe8;
            case 0x1B4FECu: goto label_1b4fec;
            case 0x1B4FF0u: goto label_1b4ff0;
            case 0x1B4FF4u: goto label_1b4ff4;
            case 0x1B4FF8u: goto label_1b4ff8;
            case 0x1B4FFCu: goto label_1b4ffc;
            case 0x1B5000u: goto label_1b5000;
            case 0x1B5004u: goto label_1b5004;
            case 0x1B5008u: goto label_1b5008;
            case 0x1B500Cu: goto label_1b500c;
            case 0x1B5010u: goto label_1b5010;
            case 0x1B5014u: goto label_1b5014;
            case 0x1B5018u: goto label_1b5018;
            case 0x1B501Cu: goto label_1b501c;
            case 0x1B5020u: goto label_1b5020;
            case 0x1B5024u: goto label_1b5024;
            case 0x1B5028u: goto label_1b5028;
            case 0x1B502Cu: goto label_1b502c;
            case 0x1B5030u: goto label_1b5030;
            case 0x1B5034u: goto label_1b5034;
            case 0x1B5038u: goto label_1b5038;
            case 0x1B503Cu: goto label_1b503c;
            case 0x1B5040u: goto label_1b5040;
            case 0x1B5044u: goto label_1b5044;
            case 0x1B5048u: goto label_1b5048;
            case 0x1B504Cu: goto label_1b504c;
            case 0x1B5050u: goto label_1b5050;
            case 0x1B5054u: goto label_1b5054;
            case 0x1B5058u: goto label_1b5058;
            case 0x1B505Cu: goto label_1b505c;
            case 0x1B5060u: goto label_1b5060;
            case 0x1B5064u: goto label_1b5064;
            case 0x1B5068u: goto label_1b5068;
            case 0x1B506Cu: goto label_1b506c;
            case 0x1B5070u: goto label_1b5070;
            case 0x1B5074u: goto label_1b5074;
            case 0x1B5078u: goto label_1b5078;
            case 0x1B507Cu: goto label_1b507c;
            case 0x1B5080u: goto label_1b5080;
            case 0x1B5084u: goto label_1b5084;
            case 0x1B5088u: goto label_1b5088;
            case 0x1B508Cu: goto label_1b508c;
            case 0x1B5090u: goto label_1b5090;
            case 0x1B5094u: goto label_1b5094;
            case 0x1B5098u: goto label_1b5098;
            case 0x1B509Cu: goto label_1b509c;
            case 0x1B50A0u: goto label_1b50a0;
            case 0x1B50A4u: goto label_1b50a4;
            case 0x1B50A8u: goto label_1b50a8;
            case 0x1B50ACu: goto label_1b50ac;
            case 0x1B50B0u: goto label_1b50b0;
            case 0x1B50B4u: goto label_1b50b4;
            case 0x1B50B8u: goto label_1b50b8;
            case 0x1B50BCu: goto label_1b50bc;
            case 0x1B50C0u: goto label_1b50c0;
            case 0x1B50C4u: goto label_1b50c4;
            case 0x1B50C8u: goto label_1b50c8;
            case 0x1B50CCu: goto label_1b50cc;
            case 0x1B50D0u: goto label_1b50d0;
            case 0x1B50D4u: goto label_1b50d4;
            case 0x1B50D8u: goto label_1b50d8;
            case 0x1B50DCu: goto label_1b50dc;
            case 0x1B50E0u: goto label_1b50e0;
            case 0x1B50E4u: goto label_1b50e4;
            case 0x1B50E8u: goto label_1b50e8;
            case 0x1B50ECu: goto label_1b50ec;
            case 0x1B50F0u: goto label_1b50f0;
            case 0x1B50F4u: goto label_1b50f4;
            case 0x1B50F8u: goto label_1b50f8;
            case 0x1B50FCu: goto label_1b50fc;
            case 0x1B5100u: goto label_1b5100;
            case 0x1B5104u: goto label_1b5104;
            case 0x1B5108u: goto label_1b5108;
            case 0x1B510Cu: goto label_1b510c;
            case 0x1B5110u: goto label_1b5110;
            case 0x1B5114u: goto label_1b5114;
            case 0x1B5118u: goto label_1b5118;
            case 0x1B511Cu: goto label_1b511c;
            case 0x1B5120u: goto label_1b5120;
            case 0x1B5124u: goto label_1b5124;
            case 0x1B5128u: goto label_1b5128;
            case 0x1B512Cu: goto label_1b512c;
            case 0x1B5130u: goto label_1b5130;
            case 0x1B5134u: goto label_1b5134;
            case 0x1B5138u: goto label_1b5138;
            case 0x1B513Cu: goto label_1b513c;
            case 0x1B5140u: goto label_1b5140;
            case 0x1B5144u: goto label_1b5144;
            case 0x1B5148u: goto label_1b5148;
            case 0x1B514Cu: goto label_1b514c;
            case 0x1B5150u: goto label_1b5150;
            case 0x1B5154u: goto label_1b5154;
            case 0x1B5158u: goto label_1b5158;
            case 0x1B515Cu: goto label_1b515c;
            case 0x1B5160u: goto label_1b5160;
            case 0x1B5164u: goto label_1b5164;
            case 0x1B5168u: goto label_1b5168;
            case 0x1B516Cu: goto label_1b516c;
            case 0x1B5170u: goto label_1b5170;
            case 0x1B5174u: goto label_1b5174;
            case 0x1B5178u: goto label_1b5178;
            case 0x1B517Cu: goto label_1b517c;
            case 0x1B5180u: goto label_1b5180;
            case 0x1B5184u: goto label_1b5184;
            case 0x1B5188u: goto label_1b5188;
            case 0x1B518Cu: goto label_1b518c;
            case 0x1B5190u: goto label_1b5190;
            case 0x1B5194u: goto label_1b5194;
            case 0x1B5198u: goto label_1b5198;
            case 0x1B519Cu: goto label_1b519c;
            case 0x1B51A0u: goto label_1b51a0;
            case 0x1B51A4u: goto label_1b51a4;
            case 0x1B51A8u: goto label_1b51a8;
            case 0x1B51ACu: goto label_1b51ac;
            case 0x1B51B0u: goto label_1b51b0;
            case 0x1B51B4u: goto label_1b51b4;
            case 0x1B51B8u: goto label_1b51b8;
            case 0x1B51BCu: goto label_1b51bc;
            case 0x1B51C0u: goto label_1b51c0;
            case 0x1B51C4u: goto label_1b51c4;
            case 0x1B51C8u: goto label_1b51c8;
            case 0x1B51CCu: goto label_1b51cc;
            case 0x1B51D0u: goto label_1b51d0;
            case 0x1B51D4u: goto label_1b51d4;
            case 0x1B51D8u: goto label_1b51d8;
            case 0x1B51DCu: goto label_1b51dc;
            case 0x1B51E0u: goto label_1b51e0;
            case 0x1B51E4u: goto label_1b51e4;
            case 0x1B51E8u: goto label_1b51e8;
            case 0x1B51ECu: goto label_1b51ec;
            case 0x1B51F0u: goto label_1b51f0;
            case 0x1B51F4u: goto label_1b51f4;
            case 0x1B51F8u: goto label_1b51f8;
            case 0x1B51FCu: goto label_1b51fc;
            case 0x1B5200u: goto label_1b5200;
            case 0x1B5204u: goto label_1b5204;
            case 0x1B5208u: goto label_1b5208;
            case 0x1B520Cu: goto label_1b520c;
            case 0x1B5210u: goto label_1b5210;
            case 0x1B5214u: goto label_1b5214;
            case 0x1B5218u: goto label_1b5218;
            case 0x1B521Cu: goto label_1b521c;
            case 0x1B5220u: goto label_1b5220;
            case 0x1B5224u: goto label_1b5224;
            case 0x1B5228u: goto label_1b5228;
            case 0x1B522Cu: goto label_1b522c;
            case 0x1B5230u: goto label_1b5230;
            case 0x1B5234u: goto label_1b5234;
            case 0x1B5238u: goto label_1b5238;
            case 0x1B523Cu: goto label_1b523c;
            case 0x1B5240u: goto label_1b5240;
            case 0x1B5244u: goto label_1b5244;
            case 0x1B5248u: goto label_1b5248;
            case 0x1B524Cu: goto label_1b524c;
            case 0x1B5250u: goto label_1b5250;
            case 0x1B5254u: goto label_1b5254;
            case 0x1B5258u: goto label_1b5258;
            case 0x1B525Cu: goto label_1b525c;
            case 0x1B5260u: goto label_1b5260;
            case 0x1B5264u: goto label_1b5264;
            case 0x1B5268u: goto label_1b5268;
            case 0x1B526Cu: goto label_1b526c;
            case 0x1B5270u: goto label_1b5270;
            case 0x1B5274u: goto label_1b5274;
            case 0x1B5278u: goto label_1b5278;
            case 0x1B527Cu: goto label_1b527c;
            case 0x1B5280u: goto label_1b5280;
            case 0x1B5284u: goto label_1b5284;
            case 0x1B5288u: goto label_1b5288;
            case 0x1B528Cu: goto label_1b528c;
            case 0x1B5290u: goto label_1b5290;
            case 0x1B5294u: goto label_1b5294;
            case 0x1B5298u: goto label_1b5298;
            case 0x1B529Cu: goto label_1b529c;
            case 0x1B52A0u: goto label_1b52a0;
            case 0x1B52A4u: goto label_1b52a4;
            case 0x1B52A8u: goto label_1b52a8;
            case 0x1B52ACu: goto label_1b52ac;
            case 0x1B52B0u: goto label_1b52b0;
            case 0x1B52B4u: goto label_1b52b4;
            case 0x1B52B8u: goto label_1b52b8;
            case 0x1B52BCu: goto label_1b52bc;
            case 0x1B52C0u: goto label_1b52c0;
            case 0x1B52C4u: goto label_1b52c4;
            case 0x1B52C8u: goto label_1b52c8;
            case 0x1B52CCu: goto label_1b52cc;
            case 0x1B52D0u: goto label_1b52d0;
            case 0x1B52D4u: goto label_1b52d4;
            case 0x1B52D8u: goto label_1b52d8;
            case 0x1B52DCu: goto label_1b52dc;
            case 0x1B52E0u: goto label_1b52e0;
            case 0x1B52E4u: goto label_1b52e4;
            case 0x1B52E8u: goto label_1b52e8;
            case 0x1B52ECu: goto label_1b52ec;
            case 0x1B52F0u: goto label_1b52f0;
            case 0x1B52F4u: goto label_1b52f4;
            case 0x1B52F8u: goto label_1b52f8;
            case 0x1B52FCu: goto label_1b52fc;
            case 0x1B5300u: goto label_1b5300;
            case 0x1B5304u: goto label_1b5304;
            case 0x1B5308u: goto label_1b5308;
            case 0x1B530Cu: goto label_1b530c;
            case 0x1B5310u: goto label_1b5310;
            case 0x1B5314u: goto label_1b5314;
            case 0x1B5318u: goto label_1b5318;
            case 0x1B531Cu: goto label_1b531c;
            case 0x1B5320u: goto label_1b5320;
            case 0x1B5324u: goto label_1b5324;
            case 0x1B5328u: goto label_1b5328;
            case 0x1B532Cu: goto label_1b532c;
            case 0x1B5330u: goto label_1b5330;
            case 0x1B5334u: goto label_1b5334;
            case 0x1B5338u: goto label_1b5338;
            case 0x1B533Cu: goto label_1b533c;
            case 0x1B5340u: goto label_1b5340;
            case 0x1B5344u: goto label_1b5344;
            case 0x1B5348u: goto label_1b5348;
            case 0x1B534Cu: goto label_1b534c;
            case 0x1B5350u: goto label_1b5350;
            case 0x1B5354u: goto label_1b5354;
            case 0x1B5358u: goto label_1b5358;
            case 0x1B535Cu: goto label_1b535c;
            case 0x1B5360u: goto label_1b5360;
            case 0x1B5364u: goto label_1b5364;
            case 0x1B5368u: goto label_1b5368;
            case 0x1B536Cu: goto label_1b536c;
            case 0x1B5370u: goto label_1b5370;
            case 0x1B5374u: goto label_1b5374;
            case 0x1B5378u: goto label_1b5378;
            case 0x1B537Cu: goto label_1b537c;
            case 0x1B5380u: goto label_1b5380;
            case 0x1B5384u: goto label_1b5384;
            case 0x1B5388u: goto label_1b5388;
            case 0x1B538Cu: goto label_1b538c;
            case 0x1B5390u: goto label_1b5390;
            case 0x1B5394u: goto label_1b5394;
            case 0x1B5398u: goto label_1b5398;
            case 0x1B539Cu: goto label_1b539c;
            case 0x1B53A0u: goto label_1b53a0;
            case 0x1B53A4u: goto label_1b53a4;
            case 0x1B53A8u: goto label_1b53a8;
            case 0x1B53ACu: goto label_1b53ac;
            case 0x1B53B0u: goto label_1b53b0;
            case 0x1B53B4u: goto label_1b53b4;
            case 0x1B53B8u: goto label_1b53b8;
            case 0x1B53BCu: goto label_1b53bc;
            case 0x1B53C0u: goto label_1b53c0;
            case 0x1B53C4u: goto label_1b53c4;
            case 0x1B53C8u: goto label_1b53c8;
            case 0x1B53CCu: goto label_1b53cc;
            case 0x1B53D0u: goto label_1b53d0;
            case 0x1B53D4u: goto label_1b53d4;
            case 0x1B53D8u: goto label_1b53d8;
            case 0x1B53DCu: goto label_1b53dc;
            case 0x1B53E0u: goto label_1b53e0;
            case 0x1B53E4u: goto label_1b53e4;
            case 0x1B53E8u: goto label_1b53e8;
            case 0x1B53ECu: goto label_1b53ec;
            case 0x1B53F0u: goto label_1b53f0;
            case 0x1B53F4u: goto label_1b53f4;
            case 0x1B53F8u: goto label_1b53f8;
            case 0x1B53FCu: goto label_1b53fc;
            case 0x1B5400u: goto label_1b5400;
            case 0x1B5404u: goto label_1b5404;
            case 0x1B5408u: goto label_1b5408;
            case 0x1B540Cu: goto label_1b540c;
            case 0x1B5410u: goto label_1b5410;
            case 0x1B5414u: goto label_1b5414;
            case 0x1B5418u: goto label_1b5418;
            case 0x1B541Cu: goto label_1b541c;
            case 0x1B5420u: goto label_1b5420;
            case 0x1B5424u: goto label_1b5424;
            case 0x1B5428u: goto label_1b5428;
            case 0x1B542Cu: goto label_1b542c;
            case 0x1B5430u: goto label_1b5430;
            case 0x1B5434u: goto label_1b5434;
            case 0x1B5438u: goto label_1b5438;
            case 0x1B543Cu: goto label_1b543c;
            case 0x1B5440u: goto label_1b5440;
            case 0x1B5444u: goto label_1b5444;
            case 0x1B5448u: goto label_1b5448;
            case 0x1B544Cu: goto label_1b544c;
            case 0x1B5450u: goto label_1b5450;
            case 0x1B5454u: goto label_1b5454;
            case 0x1B5458u: goto label_1b5458;
            case 0x1B545Cu: goto label_1b545c;
            case 0x1B5460u: goto label_1b5460;
            case 0x1B5464u: goto label_1b5464;
            case 0x1B5468u: goto label_1b5468;
            case 0x1B546Cu: goto label_1b546c;
            case 0x1B5470u: goto label_1b5470;
            case 0x1B5474u: goto label_1b5474;
            case 0x1B5478u: goto label_1b5478;
            case 0x1B547Cu: goto label_1b547c;
            case 0x1B5480u: goto label_1b5480;
            case 0x1B5484u: goto label_1b5484;
            case 0x1B5488u: goto label_1b5488;
            case 0x1B548Cu: goto label_1b548c;
            case 0x1B5490u: goto label_1b5490;
            case 0x1B5494u: goto label_1b5494;
            case 0x1B5498u: goto label_1b5498;
            case 0x1B549Cu: goto label_1b549c;
            case 0x1B54A0u: goto label_1b54a0;
            case 0x1B54A4u: goto label_1b54a4;
            case 0x1B54A8u: goto label_1b54a8;
            case 0x1B54ACu: goto label_1b54ac;
            case 0x1B54B0u: goto label_1b54b0;
            case 0x1B54B4u: goto label_1b54b4;
            case 0x1B54B8u: goto label_1b54b8;
            case 0x1B54BCu: goto label_1b54bc;
            case 0x1B54C0u: goto label_1b54c0;
            case 0x1B54C4u: goto label_1b54c4;
            case 0x1B54C8u: goto label_1b54c8;
            case 0x1B54CCu: goto label_1b54cc;
            case 0x1B54D0u: goto label_1b54d0;
            case 0x1B54D4u: goto label_1b54d4;
            case 0x1B54D8u: goto label_1b54d8;
            case 0x1B54DCu: goto label_1b54dc;
            case 0x1B54E0u: goto label_1b54e0;
            case 0x1B54E4u: goto label_1b54e4;
            case 0x1B54E8u: goto label_1b54e8;
            case 0x1B54ECu: goto label_1b54ec;
            case 0x1B54F0u: goto label_1b54f0;
            case 0x1B54F4u: goto label_1b54f4;
            case 0x1B54F8u: goto label_1b54f8;
            case 0x1B54FCu: goto label_1b54fc;
            case 0x1B5500u: goto label_1b5500;
            case 0x1B5504u: goto label_1b5504;
            case 0x1B5508u: goto label_1b5508;
            case 0x1B550Cu: goto label_1b550c;
            case 0x1B5510u: goto label_1b5510;
            case 0x1B5514u: goto label_1b5514;
            case 0x1B5518u: goto label_1b5518;
            case 0x1B551Cu: goto label_1b551c;
            case 0x1B5520u: goto label_1b5520;
            case 0x1B5524u: goto label_1b5524;
            case 0x1B5528u: goto label_1b5528;
            case 0x1B552Cu: goto label_1b552c;
            case 0x1B5530u: goto label_1b5530;
            case 0x1B5534u: goto label_1b5534;
            case 0x1B5538u: goto label_1b5538;
            case 0x1B553Cu: goto label_1b553c;
            case 0x1B5540u: goto label_1b5540;
            case 0x1B5544u: goto label_1b5544;
            case 0x1B5548u: goto label_1b5548;
            case 0x1B554Cu: goto label_1b554c;
            case 0x1B5550u: goto label_1b5550;
            case 0x1B5554u: goto label_1b5554;
            case 0x1B5558u: goto label_1b5558;
            case 0x1B555Cu: goto label_1b555c;
            case 0x1B5560u: goto label_1b5560;
            case 0x1B5564u: goto label_1b5564;
            case 0x1B5568u: goto label_1b5568;
            case 0x1B556Cu: goto label_1b556c;
            case 0x1B5570u: goto label_1b5570;
            case 0x1B5574u: goto label_1b5574;
            case 0x1B5578u: goto label_1b5578;
            case 0x1B557Cu: goto label_1b557c;
            case 0x1B5580u: goto label_1b5580;
            case 0x1B5584u: goto label_1b5584;
            case 0x1B5588u: goto label_1b5588;
            case 0x1B558Cu: goto label_1b558c;
            case 0x1B5590u: goto label_1b5590;
            case 0x1B5594u: goto label_1b5594;
            case 0x1B5598u: goto label_1b5598;
            case 0x1B559Cu: goto label_1b559c;
            case 0x1B55A0u: goto label_1b55a0;
            case 0x1B55A4u: goto label_1b55a4;
            case 0x1B55A8u: goto label_1b55a8;
            case 0x1B55ACu: goto label_1b55ac;
            case 0x1B55B0u: goto label_1b55b0;
            case 0x1B55B4u: goto label_1b55b4;
            case 0x1B55B8u: goto label_1b55b8;
            case 0x1B55BCu: goto label_1b55bc;
            case 0x1B55C0u: goto label_1b55c0;
            case 0x1B55C4u: goto label_1b55c4;
            case 0x1B55C8u: goto label_1b55c8;
            case 0x1B55CCu: goto label_1b55cc;
            case 0x1B55D0u: goto label_1b55d0;
            case 0x1B55D4u: goto label_1b55d4;
            case 0x1B55D8u: goto label_1b55d8;
            case 0x1B55DCu: goto label_1b55dc;
            case 0x1B55E0u: goto label_1b55e0;
            case 0x1B55E4u: goto label_1b55e4;
            case 0x1B55E8u: goto label_1b55e8;
            case 0x1B55ECu: goto label_1b55ec;
            case 0x1B55F0u: goto label_1b55f0;
            case 0x1B55F4u: goto label_1b55f4;
            case 0x1B55F8u: goto label_1b55f8;
            case 0x1B55FCu: goto label_1b55fc;
            case 0x1B5600u: goto label_1b5600;
            case 0x1B5604u: goto label_1b5604;
            case 0x1B5608u: goto label_1b5608;
            case 0x1B560Cu: goto label_1b560c;
            case 0x1B5610u: goto label_1b5610;
            case 0x1B5614u: goto label_1b5614;
            case 0x1B5618u: goto label_1b5618;
            case 0x1B561Cu: goto label_1b561c;
            case 0x1B5620u: goto label_1b5620;
            case 0x1B5624u: goto label_1b5624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B55ECu; }
            if (ctx->pc != 0x1B55ECu) { return; }
        }
    }
    ctx->pc = 0x1B55ECu;
label_1b55ec:
    // 0x1b55ec: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b55f0:
    if (ctx->pc == 0x1B55F0u) {
        ctx->pc = 0x1B55F4u;
        goto label_1b55f4;
    }
    ctx->pc = 0x1B55ECu;
    {
        const bool branch_taken_0x1b55ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b55ec) {
            ctx->pc = 0x1B5618u;
            goto label_1b5618;
        }
    }
    ctx->pc = 0x1B55F4u;
label_1b55f4:
    // 0x1b55f4: 0x0  nop
    ctx->pc = 0x1b55f4u;
    // NOP
label_1b55f8:
    // 0x1b55f8: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b55f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1b55fc:
    // 0x1b55fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b55fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b5600:
    // 0x1b5600: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1b5600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1b5604:
    // 0x1b5604: 0x24c64c50  addiu       $a2, $a2, 0x4C50
    ctx->pc = 0x1b5604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19536));
label_1b5608:
    // 0x1b5608: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b5608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b560c:
    // 0x1b560c: 0xc053ca4  jal         func_14F290
label_1b5610:
    if (ctx->pc == 0x1B5610u) {
        ctx->pc = 0x1B5610u;
            // 0x1b5610: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5614u;
        goto label_1b5614;
    }
    ctx->pc = 0x1B560Cu;
    SET_GPR_U32(ctx, 31, 0x1B5614u);
    ctx->pc = 0x1B5610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B560Cu;
            // 0x1b5610: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5614u; }
        if (ctx->pc != 0x1B5614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5614u; }
        if (ctx->pc != 0x1B5614u) { return; }
    }
    ctx->pc = 0x1B5614u;
label_1b5614:
    // 0x1b5614: 0x0  nop
    ctx->pc = 0x1b5614u;
    // NOP
label_1b5618:
    // 0x1b5618: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b561c:
    // 0x1b561c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b561cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5620:
    // 0x1b5620: 0x3e00008  jr          $ra
label_1b5624:
    if (ctx->pc == 0x1B5624u) {
        ctx->pc = 0x1B5624u;
            // 0x1b5624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B5628u;
        goto label_fallthrough_0x1b5620;
    }
    ctx->pc = 0x1B5620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5620u;
            // 0x1b5624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4E90u: goto label_1b4e90;
            case 0x1B4E94u: goto label_1b4e94;
            case 0x1B4E98u: goto label_1b4e98;
            case 0x1B4E9Cu: goto label_1b4e9c;
            case 0x1B4EA0u: goto label_1b4ea0;
            case 0x1B4EA4u: goto label_1b4ea4;
            case 0x1B4EA8u: goto label_1b4ea8;
            case 0x1B4EACu: goto label_1b4eac;
            case 0x1B4EB0u: goto label_1b4eb0;
            case 0x1B4EB4u: goto label_1b4eb4;
            case 0x1B4EB8u: goto label_1b4eb8;
            case 0x1B4EBCu: goto label_1b4ebc;
            case 0x1B4EC0u: goto label_1b4ec0;
            case 0x1B4EC4u: goto label_1b4ec4;
            case 0x1B4EC8u: goto label_1b4ec8;
            case 0x1B4ECCu: goto label_1b4ecc;
            case 0x1B4ED0u: goto label_1b4ed0;
            case 0x1B4ED4u: goto label_1b4ed4;
            case 0x1B4ED8u: goto label_1b4ed8;
            case 0x1B4EDCu: goto label_1b4edc;
            case 0x1B4EE0u: goto label_1b4ee0;
            case 0x1B4EE4u: goto label_1b4ee4;
            case 0x1B4EE8u: goto label_1b4ee8;
            case 0x1B4EECu: goto label_1b4eec;
            case 0x1B4EF0u: goto label_1b4ef0;
            case 0x1B4EF4u: goto label_1b4ef4;
            case 0x1B4EF8u: goto label_1b4ef8;
            case 0x1B4EFCu: goto label_1b4efc;
            case 0x1B4F00u: goto label_1b4f00;
            case 0x1B4F04u: goto label_1b4f04;
            case 0x1B4F08u: goto label_1b4f08;
            case 0x1B4F0Cu: goto label_1b4f0c;
            case 0x1B4F10u: goto label_1b4f10;
            case 0x1B4F14u: goto label_1b4f14;
            case 0x1B4F18u: goto label_1b4f18;
            case 0x1B4F1Cu: goto label_1b4f1c;
            case 0x1B4F20u: goto label_1b4f20;
            case 0x1B4F24u: goto label_1b4f24;
            case 0x1B4F28u: goto label_1b4f28;
            case 0x1B4F2Cu: goto label_1b4f2c;
            case 0x1B4F30u: goto label_1b4f30;
            case 0x1B4F34u: goto label_1b4f34;
            case 0x1B4F38u: goto label_1b4f38;
            case 0x1B4F3Cu: goto label_1b4f3c;
            case 0x1B4F40u: goto label_1b4f40;
            case 0x1B4F44u: goto label_1b4f44;
            case 0x1B4F48u: goto label_1b4f48;
            case 0x1B4F4Cu: goto label_1b4f4c;
            case 0x1B4F50u: goto label_1b4f50;
            case 0x1B4F54u: goto label_1b4f54;
            case 0x1B4F58u: goto label_1b4f58;
            case 0x1B4F5Cu: goto label_1b4f5c;
            case 0x1B4F60u: goto label_1b4f60;
            case 0x1B4F64u: goto label_1b4f64;
            case 0x1B4F68u: goto label_1b4f68;
            case 0x1B4F6Cu: goto label_1b4f6c;
            case 0x1B4F70u: goto label_1b4f70;
            case 0x1B4F74u: goto label_1b4f74;
            case 0x1B4F78u: goto label_1b4f78;
            case 0x1B4F7Cu: goto label_1b4f7c;
            case 0x1B4F80u: goto label_1b4f80;
            case 0x1B4F84u: goto label_1b4f84;
            case 0x1B4F88u: goto label_1b4f88;
            case 0x1B4F8Cu: goto label_1b4f8c;
            case 0x1B4F90u: goto label_1b4f90;
            case 0x1B4F94u: goto label_1b4f94;
            case 0x1B4F98u: goto label_1b4f98;
            case 0x1B4F9Cu: goto label_1b4f9c;
            case 0x1B4FA0u: goto label_1b4fa0;
            case 0x1B4FA4u: goto label_1b4fa4;
            case 0x1B4FA8u: goto label_1b4fa8;
            case 0x1B4FACu: goto label_1b4fac;
            case 0x1B4FB0u: goto label_1b4fb0;
            case 0x1B4FB4u: goto label_1b4fb4;
            case 0x1B4FB8u: goto label_1b4fb8;
            case 0x1B4FBCu: goto label_1b4fbc;
            case 0x1B4FC0u: goto label_1b4fc0;
            case 0x1B4FC4u: goto label_1b4fc4;
            case 0x1B4FC8u: goto label_1b4fc8;
            case 0x1B4FCCu: goto label_1b4fcc;
            case 0x1B4FD0u: goto label_1b4fd0;
            case 0x1B4FD4u: goto label_1b4fd4;
            case 0x1B4FD8u: goto label_1b4fd8;
            case 0x1B4FDCu: goto label_1b4fdc;
            case 0x1B4FE0u: goto label_1b4fe0;
            case 0x1B4FE4u: goto label_1b4fe4;
            case 0x1B4FE8u: goto label_1b4fe8;
            case 0x1B4FECu: goto label_1b4fec;
            case 0x1B4FF0u: goto label_1b4ff0;
            case 0x1B4FF4u: goto label_1b4ff4;
            case 0x1B4FF8u: goto label_1b4ff8;
            case 0x1B4FFCu: goto label_1b4ffc;
            case 0x1B5000u: goto label_1b5000;
            case 0x1B5004u: goto label_1b5004;
            case 0x1B5008u: goto label_1b5008;
            case 0x1B500Cu: goto label_1b500c;
            case 0x1B5010u: goto label_1b5010;
            case 0x1B5014u: goto label_1b5014;
            case 0x1B5018u: goto label_1b5018;
            case 0x1B501Cu: goto label_1b501c;
            case 0x1B5020u: goto label_1b5020;
            case 0x1B5024u: goto label_1b5024;
            case 0x1B5028u: goto label_1b5028;
            case 0x1B502Cu: goto label_1b502c;
            case 0x1B5030u: goto label_1b5030;
            case 0x1B5034u: goto label_1b5034;
            case 0x1B5038u: goto label_1b5038;
            case 0x1B503Cu: goto label_1b503c;
            case 0x1B5040u: goto label_1b5040;
            case 0x1B5044u: goto label_1b5044;
            case 0x1B5048u: goto label_1b5048;
            case 0x1B504Cu: goto label_1b504c;
            case 0x1B5050u: goto label_1b5050;
            case 0x1B5054u: goto label_1b5054;
            case 0x1B5058u: goto label_1b5058;
            case 0x1B505Cu: goto label_1b505c;
            case 0x1B5060u: goto label_1b5060;
            case 0x1B5064u: goto label_1b5064;
            case 0x1B5068u: goto label_1b5068;
            case 0x1B506Cu: goto label_1b506c;
            case 0x1B5070u: goto label_1b5070;
            case 0x1B5074u: goto label_1b5074;
            case 0x1B5078u: goto label_1b5078;
            case 0x1B507Cu: goto label_1b507c;
            case 0x1B5080u: goto label_1b5080;
            case 0x1B5084u: goto label_1b5084;
            case 0x1B5088u: goto label_1b5088;
            case 0x1B508Cu: goto label_1b508c;
            case 0x1B5090u: goto label_1b5090;
            case 0x1B5094u: goto label_1b5094;
            case 0x1B5098u: goto label_1b5098;
            case 0x1B509Cu: goto label_1b509c;
            case 0x1B50A0u: goto label_1b50a0;
            case 0x1B50A4u: goto label_1b50a4;
            case 0x1B50A8u: goto label_1b50a8;
            case 0x1B50ACu: goto label_1b50ac;
            case 0x1B50B0u: goto label_1b50b0;
            case 0x1B50B4u: goto label_1b50b4;
            case 0x1B50B8u: goto label_1b50b8;
            case 0x1B50BCu: goto label_1b50bc;
            case 0x1B50C0u: goto label_1b50c0;
            case 0x1B50C4u: goto label_1b50c4;
            case 0x1B50C8u: goto label_1b50c8;
            case 0x1B50CCu: goto label_1b50cc;
            case 0x1B50D0u: goto label_1b50d0;
            case 0x1B50D4u: goto label_1b50d4;
            case 0x1B50D8u: goto label_1b50d8;
            case 0x1B50DCu: goto label_1b50dc;
            case 0x1B50E0u: goto label_1b50e0;
            case 0x1B50E4u: goto label_1b50e4;
            case 0x1B50E8u: goto label_1b50e8;
            case 0x1B50ECu: goto label_1b50ec;
            case 0x1B50F0u: goto label_1b50f0;
            case 0x1B50F4u: goto label_1b50f4;
            case 0x1B50F8u: goto label_1b50f8;
            case 0x1B50FCu: goto label_1b50fc;
            case 0x1B5100u: goto label_1b5100;
            case 0x1B5104u: goto label_1b5104;
            case 0x1B5108u: goto label_1b5108;
            case 0x1B510Cu: goto label_1b510c;
            case 0x1B5110u: goto label_1b5110;
            case 0x1B5114u: goto label_1b5114;
            case 0x1B5118u: goto label_1b5118;
            case 0x1B511Cu: goto label_1b511c;
            case 0x1B5120u: goto label_1b5120;
            case 0x1B5124u: goto label_1b5124;
            case 0x1B5128u: goto label_1b5128;
            case 0x1B512Cu: goto label_1b512c;
            case 0x1B5130u: goto label_1b5130;
            case 0x1B5134u: goto label_1b5134;
            case 0x1B5138u: goto label_1b5138;
            case 0x1B513Cu: goto label_1b513c;
            case 0x1B5140u: goto label_1b5140;
            case 0x1B5144u: goto label_1b5144;
            case 0x1B5148u: goto label_1b5148;
            case 0x1B514Cu: goto label_1b514c;
            case 0x1B5150u: goto label_1b5150;
            case 0x1B5154u: goto label_1b5154;
            case 0x1B5158u: goto label_1b5158;
            case 0x1B515Cu: goto label_1b515c;
            case 0x1B5160u: goto label_1b5160;
            case 0x1B5164u: goto label_1b5164;
            case 0x1B5168u: goto label_1b5168;
            case 0x1B516Cu: goto label_1b516c;
            case 0x1B5170u: goto label_1b5170;
            case 0x1B5174u: goto label_1b5174;
            case 0x1B5178u: goto label_1b5178;
            case 0x1B517Cu: goto label_1b517c;
            case 0x1B5180u: goto label_1b5180;
            case 0x1B5184u: goto label_1b5184;
            case 0x1B5188u: goto label_1b5188;
            case 0x1B518Cu: goto label_1b518c;
            case 0x1B5190u: goto label_1b5190;
            case 0x1B5194u: goto label_1b5194;
            case 0x1B5198u: goto label_1b5198;
            case 0x1B519Cu: goto label_1b519c;
            case 0x1B51A0u: goto label_1b51a0;
            case 0x1B51A4u: goto label_1b51a4;
            case 0x1B51A8u: goto label_1b51a8;
            case 0x1B51ACu: goto label_1b51ac;
            case 0x1B51B0u: goto label_1b51b0;
            case 0x1B51B4u: goto label_1b51b4;
            case 0x1B51B8u: goto label_1b51b8;
            case 0x1B51BCu: goto label_1b51bc;
            case 0x1B51C0u: goto label_1b51c0;
            case 0x1B51C4u: goto label_1b51c4;
            case 0x1B51C8u: goto label_1b51c8;
            case 0x1B51CCu: goto label_1b51cc;
            case 0x1B51D0u: goto label_1b51d0;
            case 0x1B51D4u: goto label_1b51d4;
            case 0x1B51D8u: goto label_1b51d8;
            case 0x1B51DCu: goto label_1b51dc;
            case 0x1B51E0u: goto label_1b51e0;
            case 0x1B51E4u: goto label_1b51e4;
            case 0x1B51E8u: goto label_1b51e8;
            case 0x1B51ECu: goto label_1b51ec;
            case 0x1B51F0u: goto label_1b51f0;
            case 0x1B51F4u: goto label_1b51f4;
            case 0x1B51F8u: goto label_1b51f8;
            case 0x1B51FCu: goto label_1b51fc;
            case 0x1B5200u: goto label_1b5200;
            case 0x1B5204u: goto label_1b5204;
            case 0x1B5208u: goto label_1b5208;
            case 0x1B520Cu: goto label_1b520c;
            case 0x1B5210u: goto label_1b5210;
            case 0x1B5214u: goto label_1b5214;
            case 0x1B5218u: goto label_1b5218;
            case 0x1B521Cu: goto label_1b521c;
            case 0x1B5220u: goto label_1b5220;
            case 0x1B5224u: goto label_1b5224;
            case 0x1B5228u: goto label_1b5228;
            case 0x1B522Cu: goto label_1b522c;
            case 0x1B5230u: goto label_1b5230;
            case 0x1B5234u: goto label_1b5234;
            case 0x1B5238u: goto label_1b5238;
            case 0x1B523Cu: goto label_1b523c;
            case 0x1B5240u: goto label_1b5240;
            case 0x1B5244u: goto label_1b5244;
            case 0x1B5248u: goto label_1b5248;
            case 0x1B524Cu: goto label_1b524c;
            case 0x1B5250u: goto label_1b5250;
            case 0x1B5254u: goto label_1b5254;
            case 0x1B5258u: goto label_1b5258;
            case 0x1B525Cu: goto label_1b525c;
            case 0x1B5260u: goto label_1b5260;
            case 0x1B5264u: goto label_1b5264;
            case 0x1B5268u: goto label_1b5268;
            case 0x1B526Cu: goto label_1b526c;
            case 0x1B5270u: goto label_1b5270;
            case 0x1B5274u: goto label_1b5274;
            case 0x1B5278u: goto label_1b5278;
            case 0x1B527Cu: goto label_1b527c;
            case 0x1B5280u: goto label_1b5280;
            case 0x1B5284u: goto label_1b5284;
            case 0x1B5288u: goto label_1b5288;
            case 0x1B528Cu: goto label_1b528c;
            case 0x1B5290u: goto label_1b5290;
            case 0x1B5294u: goto label_1b5294;
            case 0x1B5298u: goto label_1b5298;
            case 0x1B529Cu: goto label_1b529c;
            case 0x1B52A0u: goto label_1b52a0;
            case 0x1B52A4u: goto label_1b52a4;
            case 0x1B52A8u: goto label_1b52a8;
            case 0x1B52ACu: goto label_1b52ac;
            case 0x1B52B0u: goto label_1b52b0;
            case 0x1B52B4u: goto label_1b52b4;
            case 0x1B52B8u: goto label_1b52b8;
            case 0x1B52BCu: goto label_1b52bc;
            case 0x1B52C0u: goto label_1b52c0;
            case 0x1B52C4u: goto label_1b52c4;
            case 0x1B52C8u: goto label_1b52c8;
            case 0x1B52CCu: goto label_1b52cc;
            case 0x1B52D0u: goto label_1b52d0;
            case 0x1B52D4u: goto label_1b52d4;
            case 0x1B52D8u: goto label_1b52d8;
            case 0x1B52DCu: goto label_1b52dc;
            case 0x1B52E0u: goto label_1b52e0;
            case 0x1B52E4u: goto label_1b52e4;
            case 0x1B52E8u: goto label_1b52e8;
            case 0x1B52ECu: goto label_1b52ec;
            case 0x1B52F0u: goto label_1b52f0;
            case 0x1B52F4u: goto label_1b52f4;
            case 0x1B52F8u: goto label_1b52f8;
            case 0x1B52FCu: goto label_1b52fc;
            case 0x1B5300u: goto label_1b5300;
            case 0x1B5304u: goto label_1b5304;
            case 0x1B5308u: goto label_1b5308;
            case 0x1B530Cu: goto label_1b530c;
            case 0x1B5310u: goto label_1b5310;
            case 0x1B5314u: goto label_1b5314;
            case 0x1B5318u: goto label_1b5318;
            case 0x1B531Cu: goto label_1b531c;
            case 0x1B5320u: goto label_1b5320;
            case 0x1B5324u: goto label_1b5324;
            case 0x1B5328u: goto label_1b5328;
            case 0x1B532Cu: goto label_1b532c;
            case 0x1B5330u: goto label_1b5330;
            case 0x1B5334u: goto label_1b5334;
            case 0x1B5338u: goto label_1b5338;
            case 0x1B533Cu: goto label_1b533c;
            case 0x1B5340u: goto label_1b5340;
            case 0x1B5344u: goto label_1b5344;
            case 0x1B5348u: goto label_1b5348;
            case 0x1B534Cu: goto label_1b534c;
            case 0x1B5350u: goto label_1b5350;
            case 0x1B5354u: goto label_1b5354;
            case 0x1B5358u: goto label_1b5358;
            case 0x1B535Cu: goto label_1b535c;
            case 0x1B5360u: goto label_1b5360;
            case 0x1B5364u: goto label_1b5364;
            case 0x1B5368u: goto label_1b5368;
            case 0x1B536Cu: goto label_1b536c;
            case 0x1B5370u: goto label_1b5370;
            case 0x1B5374u: goto label_1b5374;
            case 0x1B5378u: goto label_1b5378;
            case 0x1B537Cu: goto label_1b537c;
            case 0x1B5380u: goto label_1b5380;
            case 0x1B5384u: goto label_1b5384;
            case 0x1B5388u: goto label_1b5388;
            case 0x1B538Cu: goto label_1b538c;
            case 0x1B5390u: goto label_1b5390;
            case 0x1B5394u: goto label_1b5394;
            case 0x1B5398u: goto label_1b5398;
            case 0x1B539Cu: goto label_1b539c;
            case 0x1B53A0u: goto label_1b53a0;
            case 0x1B53A4u: goto label_1b53a4;
            case 0x1B53A8u: goto label_1b53a8;
            case 0x1B53ACu: goto label_1b53ac;
            case 0x1B53B0u: goto label_1b53b0;
            case 0x1B53B4u: goto label_1b53b4;
            case 0x1B53B8u: goto label_1b53b8;
            case 0x1B53BCu: goto label_1b53bc;
            case 0x1B53C0u: goto label_1b53c0;
            case 0x1B53C4u: goto label_1b53c4;
            case 0x1B53C8u: goto label_1b53c8;
            case 0x1B53CCu: goto label_1b53cc;
            case 0x1B53D0u: goto label_1b53d0;
            case 0x1B53D4u: goto label_1b53d4;
            case 0x1B53D8u: goto label_1b53d8;
            case 0x1B53DCu: goto label_1b53dc;
            case 0x1B53E0u: goto label_1b53e0;
            case 0x1B53E4u: goto label_1b53e4;
            case 0x1B53E8u: goto label_1b53e8;
            case 0x1B53ECu: goto label_1b53ec;
            case 0x1B53F0u: goto label_1b53f0;
            case 0x1B53F4u: goto label_1b53f4;
            case 0x1B53F8u: goto label_1b53f8;
            case 0x1B53FCu: goto label_1b53fc;
            case 0x1B5400u: goto label_1b5400;
            case 0x1B5404u: goto label_1b5404;
            case 0x1B5408u: goto label_1b5408;
            case 0x1B540Cu: goto label_1b540c;
            case 0x1B5410u: goto label_1b5410;
            case 0x1B5414u: goto label_1b5414;
            case 0x1B5418u: goto label_1b5418;
            case 0x1B541Cu: goto label_1b541c;
            case 0x1B5420u: goto label_1b5420;
            case 0x1B5424u: goto label_1b5424;
            case 0x1B5428u: goto label_1b5428;
            case 0x1B542Cu: goto label_1b542c;
            case 0x1B5430u: goto label_1b5430;
            case 0x1B5434u: goto label_1b5434;
            case 0x1B5438u: goto label_1b5438;
            case 0x1B543Cu: goto label_1b543c;
            case 0x1B5440u: goto label_1b5440;
            case 0x1B5444u: goto label_1b5444;
            case 0x1B5448u: goto label_1b5448;
            case 0x1B544Cu: goto label_1b544c;
            case 0x1B5450u: goto label_1b5450;
            case 0x1B5454u: goto label_1b5454;
            case 0x1B5458u: goto label_1b5458;
            case 0x1B545Cu: goto label_1b545c;
            case 0x1B5460u: goto label_1b5460;
            case 0x1B5464u: goto label_1b5464;
            case 0x1B5468u: goto label_1b5468;
            case 0x1B546Cu: goto label_1b546c;
            case 0x1B5470u: goto label_1b5470;
            case 0x1B5474u: goto label_1b5474;
            case 0x1B5478u: goto label_1b5478;
            case 0x1B547Cu: goto label_1b547c;
            case 0x1B5480u: goto label_1b5480;
            case 0x1B5484u: goto label_1b5484;
            case 0x1B5488u: goto label_1b5488;
            case 0x1B548Cu: goto label_1b548c;
            case 0x1B5490u: goto label_1b5490;
            case 0x1B5494u: goto label_1b5494;
            case 0x1B5498u: goto label_1b5498;
            case 0x1B549Cu: goto label_1b549c;
            case 0x1B54A0u: goto label_1b54a0;
            case 0x1B54A4u: goto label_1b54a4;
            case 0x1B54A8u: goto label_1b54a8;
            case 0x1B54ACu: goto label_1b54ac;
            case 0x1B54B0u: goto label_1b54b0;
            case 0x1B54B4u: goto label_1b54b4;
            case 0x1B54B8u: goto label_1b54b8;
            case 0x1B54BCu: goto label_1b54bc;
            case 0x1B54C0u: goto label_1b54c0;
            case 0x1B54C4u: goto label_1b54c4;
            case 0x1B54C8u: goto label_1b54c8;
            case 0x1B54CCu: goto label_1b54cc;
            case 0x1B54D0u: goto label_1b54d0;
            case 0x1B54D4u: goto label_1b54d4;
            case 0x1B54D8u: goto label_1b54d8;
            case 0x1B54DCu: goto label_1b54dc;
            case 0x1B54E0u: goto label_1b54e0;
            case 0x1B54E4u: goto label_1b54e4;
            case 0x1B54E8u: goto label_1b54e8;
            case 0x1B54ECu: goto label_1b54ec;
            case 0x1B54F0u: goto label_1b54f0;
            case 0x1B54F4u: goto label_1b54f4;
            case 0x1B54F8u: goto label_1b54f8;
            case 0x1B54FCu: goto label_1b54fc;
            case 0x1B5500u: goto label_1b5500;
            case 0x1B5504u: goto label_1b5504;
            case 0x1B5508u: goto label_1b5508;
            case 0x1B550Cu: goto label_1b550c;
            case 0x1B5510u: goto label_1b5510;
            case 0x1B5514u: goto label_1b5514;
            case 0x1B5518u: goto label_1b5518;
            case 0x1B551Cu: goto label_1b551c;
            case 0x1B5520u: goto label_1b5520;
            case 0x1B5524u: goto label_1b5524;
            case 0x1B5528u: goto label_1b5528;
            case 0x1B552Cu: goto label_1b552c;
            case 0x1B5530u: goto label_1b5530;
            case 0x1B5534u: goto label_1b5534;
            case 0x1B5538u: goto label_1b5538;
            case 0x1B553Cu: goto label_1b553c;
            case 0x1B5540u: goto label_1b5540;
            case 0x1B5544u: goto label_1b5544;
            case 0x1B5548u: goto label_1b5548;
            case 0x1B554Cu: goto label_1b554c;
            case 0x1B5550u: goto label_1b5550;
            case 0x1B5554u: goto label_1b5554;
            case 0x1B5558u: goto label_1b5558;
            case 0x1B555Cu: goto label_1b555c;
            case 0x1B5560u: goto label_1b5560;
            case 0x1B5564u: goto label_1b5564;
            case 0x1B5568u: goto label_1b5568;
            case 0x1B556Cu: goto label_1b556c;
            case 0x1B5570u: goto label_1b5570;
            case 0x1B5574u: goto label_1b5574;
            case 0x1B5578u: goto label_1b5578;
            case 0x1B557Cu: goto label_1b557c;
            case 0x1B5580u: goto label_1b5580;
            case 0x1B5584u: goto label_1b5584;
            case 0x1B5588u: goto label_1b5588;
            case 0x1B558Cu: goto label_1b558c;
            case 0x1B5590u: goto label_1b5590;
            case 0x1B5594u: goto label_1b5594;
            case 0x1B5598u: goto label_1b5598;
            case 0x1B559Cu: goto label_1b559c;
            case 0x1B55A0u: goto label_1b55a0;
            case 0x1B55A4u: goto label_1b55a4;
            case 0x1B55A8u: goto label_1b55a8;
            case 0x1B55ACu: goto label_1b55ac;
            case 0x1B55B0u: goto label_1b55b0;
            case 0x1B55B4u: goto label_1b55b4;
            case 0x1B55B8u: goto label_1b55b8;
            case 0x1B55BCu: goto label_1b55bc;
            case 0x1B55C0u: goto label_1b55c0;
            case 0x1B55C4u: goto label_1b55c4;
            case 0x1B55C8u: goto label_1b55c8;
            case 0x1B55CCu: goto label_1b55cc;
            case 0x1B55D0u: goto label_1b55d0;
            case 0x1B55D4u: goto label_1b55d4;
            case 0x1B55D8u: goto label_1b55d8;
            case 0x1B55DCu: goto label_1b55dc;
            case 0x1B55E0u: goto label_1b55e0;
            case 0x1B55E4u: goto label_1b55e4;
            case 0x1B55E8u: goto label_1b55e8;
            case 0x1B55ECu: goto label_1b55ec;
            case 0x1B55F0u: goto label_1b55f0;
            case 0x1B55F4u: goto label_1b55f4;
            case 0x1B55F8u: goto label_1b55f8;
            case 0x1B55FCu: goto label_1b55fc;
            case 0x1B5600u: goto label_1b5600;
            case 0x1B5604u: goto label_1b5604;
            case 0x1B5608u: goto label_1b5608;
            case 0x1B560Cu: goto label_1b560c;
            case 0x1B5610u: goto label_1b5610;
            case 0x1B5614u: goto label_1b5614;
            case 0x1B5618u: goto label_1b5618;
            case 0x1B561Cu: goto label_1b561c;
            case 0x1B5620u: goto label_1b5620;
            case 0x1B5624u: goto label_1b5624;
            default: break;
        }
        return;
    }
label_fallthrough_0x1b5620:
    ctx->pc = 0x1B5628u;
}

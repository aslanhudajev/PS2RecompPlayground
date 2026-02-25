#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En1_02Move
// Address: 0x1e9b60 - 0x1ea0d8
void En1_02Move_0x1e9b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En1_02Move_0x1e9b60");
#endif

    ctx->pc = 0x1e9b60u;

label_1e9b60:
    // 0x1e9b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e9b64:
    // 0x1e9b64: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e9b68:
    // 0x1e9b68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e9b6c:
    // 0x1e9b6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e9b6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e9b70:
    // 0x1e9b70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9b74:
    // 0x1e9b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9b78:
    // 0x1e9b78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e9b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9b7c:
    // 0x1e9b7c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1e9b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e9b80:
    // 0x1e9b80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b84:
    // 0x1e9b84: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1e9b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9b88:
    // 0x1e9b88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e9b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e9b8c:
    // 0x1e9b8c: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1e9b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1e9b90:
    // 0x1e9b90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e9b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9b94:
    // 0x1e9b94: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1e9b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e9b98:
    // 0x1e9b98: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e9b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9b9c:
    // 0x1e9b9c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e9b9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e9ba0:
    // 0x1e9ba0: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1e9ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1e9ba4:
    // 0x1e9ba4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9ba8:
    // 0x1e9ba8: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1e9ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e9bac:
    // 0x1e9bac: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e9bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9bb0:
    // 0x1e9bb0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e9bb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e9bb4:
    // 0x1e9bb4: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1e9bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1e9bb8:
    // 0x1e9bb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9bbc:
    // 0x1e9bbc: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1e9bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e9bc0:
    // 0x1e9bc0: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1e9bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9bc4:
    // 0x1e9bc4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e9bc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e9bc8:
    // 0x1e9bc8: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1e9bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1e9bcc:
    // 0x1e9bcc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e9bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9bd0:
    // 0x1e9bd0: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e9bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9bd4:
    // 0x1e9bd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e9bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9bd8:
    // 0x1e9bd8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e9bdc:
    if (ctx->pc == 0x1E9BDCu) {
        ctx->pc = 0x1E9BDCu;
            // 0x1e9bdc: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1E9BE0u;
        goto label_1e9be0;
    }
    ctx->pc = 0x1E9BD8u;
    {
        const bool branch_taken_0x1e9bd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9BD8u;
            // 0x1e9bdc: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bd8) {
            ctx->pc = 0x1E9BF8u;
            goto label_1e9bf8;
        }
    }
    ctx->pc = 0x1E9BE0u;
label_1e9be0:
    // 0x1e9be0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e9be4:
    // 0x1e9be4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e9be4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e9be8:
    // 0x1e9be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9bec:
    // 0x1e9bec: 0x0  nop
    ctx->pc = 0x1e9becu;
    // NOP
label_1e9bf0:
    // 0x1e9bf0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e9bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e9bf4:
    // 0x1e9bf4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e9bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1e9bf8:
    // 0x1e9bf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e9bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9bfc:
    // 0x1e9bfc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e9c00:
    // 0x1e9c00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e9c00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e9c04:
    // 0x1e9c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9c08:
    // 0x1e9c08: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1e9c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9c0c:
    // 0x1e9c0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e9c0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9c10:
    // 0x1e9c10: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e9c14:
    if (ctx->pc == 0x1E9C14u) {
        ctx->pc = 0x1E9C14u;
            // 0x1e9c14: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1E9C18u;
        goto label_1e9c18;
    }
    ctx->pc = 0x1E9C10u;
    {
        const bool branch_taken_0x1e9c10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C10u;
            // 0x1e9c14: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c10) {
            ctx->pc = 0x1E9C30u;
            goto label_1e9c30;
        }
    }
    ctx->pc = 0x1E9C18u;
label_1e9c18:
    // 0x1e9c18: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e9c1c:
    // 0x1e9c1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e9c1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e9c20:
    // 0x1e9c20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9c24:
    // 0x1e9c24: 0x0  nop
    ctx->pc = 0x1e9c24u;
    // NOP
label_1e9c28:
    // 0x1e9c28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e9c28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e9c2c:
    // 0x1e9c2c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e9c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e9c30:
    // 0x1e9c30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9c34:
    // 0x1e9c34: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e9c38:
    // 0x1e9c38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e9c38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e9c3c:
    // 0x1e9c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9c40:
    // 0x1e9c40: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e9c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9c44:
    // 0x1e9c44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e9c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9c48:
    // 0x1e9c48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e9c4c:
    if (ctx->pc == 0x1E9C4Cu) {
        ctx->pc = 0x1E9C4Cu;
            // 0x1e9c4c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E9C50u;
        goto label_1e9c50;
    }
    ctx->pc = 0x1E9C48u;
    {
        const bool branch_taken_0x1e9c48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C48u;
            // 0x1e9c4c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c48) {
            ctx->pc = 0x1E9C68u;
            goto label_1e9c68;
        }
    }
    ctx->pc = 0x1E9C50u;
label_1e9c50:
    // 0x1e9c50: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e9c54:
    // 0x1e9c54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e9c54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e9c58:
    // 0x1e9c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9c5c:
    // 0x1e9c5c: 0x0  nop
    ctx->pc = 0x1e9c5cu;
    // NOP
label_1e9c60:
    // 0x1e9c60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e9c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e9c64:
    // 0x1e9c64: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e9c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e9c68:
    // 0x1e9c68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e9c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9c6c:
    // 0x1e9c6c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e9c70:
    // 0x1e9c70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e9c70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e9c74:
    // 0x1e9c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9c78:
    // 0x1e9c78: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e9c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9c7c:
    // 0x1e9c7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e9c7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9c80:
    // 0x1e9c80: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e9c84:
    if (ctx->pc == 0x1E9C84u) {
        ctx->pc = 0x1E9C84u;
            // 0x1e9c84: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E9C88u;
        goto label_1e9c88;
    }
    ctx->pc = 0x1E9C80u;
    {
        const bool branch_taken_0x1e9c80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C80u;
            // 0x1e9c84: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c80) {
            ctx->pc = 0x1E9CA0u;
            goto label_1e9ca0;
        }
    }
    ctx->pc = 0x1E9C88u;
label_1e9c88:
    // 0x1e9c88: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e9c8c:
    // 0x1e9c8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e9c8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e9c90:
    // 0x1e9c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9c94:
    // 0x1e9c94: 0x0  nop
    ctx->pc = 0x1e9c94u;
    // NOP
label_1e9c98:
    // 0x1e9c98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e9c98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e9c9c:
    // 0x1e9c9c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e9c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e9ca0:
    // 0x1e9ca0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9ca4:
    // 0x1e9ca4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1e9ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1e9ca8:
    // 0x1e9ca8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1e9ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e9cac:
    // 0x1e9cac: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1e9cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e9cb0:
    // 0x1e9cb0: 0xc07a838  jal         func_1EA0E0
label_1e9cb4:
    if (ctx->pc == 0x1E9CB4u) {
        ctx->pc = 0x1E9CB4u;
            // 0x1e9cb4: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x1E9CB8u;
        goto label_1e9cb8;
    }
    ctx->pc = 0x1E9CB0u;
    SET_GPR_U32(ctx, 31, 0x1E9CB8u);
    ctx->pc = 0x1E9CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CB0u;
            // 0x1e9cb4: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA0E0u;
    if (runtime->hasFunction(0x1EA0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CB8u; }
        if (ctx->pc != 0x1E9CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1ea0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CB8u; }
        if (ctx->pc != 0x1E9CB8u) { return; }
    }
    ctx->pc = 0x1E9CB8u;
label_1e9cb8:
    // 0x1e9cb8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e9cbc:
    // 0x1e9cbc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1e9cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1e9cc0:
    // 0x1e9cc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e9cc4:
    // 0x1e9cc4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e9cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e9cc8:
    // 0x1e9cc8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e9cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e9ccc:
    // 0x1e9ccc: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x1e9cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
label_1e9cd0:
    // 0x1e9cd0: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
label_1e9cd4:
    if (ctx->pc == 0x1E9CD4u) {
        ctx->pc = 0x1E9CD4u;
            // 0x1e9cd4: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->pc = 0x1E9CD8u;
        goto label_1e9cd8;
    }
    ctx->pc = 0x1E9CD0u;
    {
        const bool branch_taken_0x1e9cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CD0u;
            // 0x1e9cd4: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cd0) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9CD8u;
label_1e9cd8:
    // 0x1e9cd8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e9cdc:
    if (ctx->pc == 0x1E9CDCu) {
        ctx->pc = 0x1E9CE0u;
        goto label_1e9ce0;
    }
    ctx->pc = 0x1E9CD8u;
    {
        const bool branch_taken_0x1e9cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9cd8) {
            ctx->pc = 0x1E9D00u;
            goto label_1e9d00;
        }
    }
    ctx->pc = 0x1E9CE0u;
label_1e9ce0:
    // 0x1e9ce0: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e9ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9ce4:
    // 0x1e9ce4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x1e9ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_1e9ce8:
    // 0x1e9ce8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1e9ce8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
label_1e9cec:
    // 0x1e9cec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e9cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e9cf0:
    // 0x1e9cf0: 0x0  nop
    ctx->pc = 0x1e9cf0u;
    // NOP
label_1e9cf4:
    // 0x1e9cf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e9cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e9cf8:
    // 0x1e9cf8: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1e9cfc:
    if (ctx->pc == 0x1E9CFCu) {
        ctx->pc = 0x1E9CFCu;
            // 0x1e9cfc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1E9D00u;
        goto label_1e9d00;
    }
    ctx->pc = 0x1E9CF8u;
    {
        const bool branch_taken_0x1e9cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CF8u;
            // 0x1e9cfc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cf8) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9D00u;
label_1e9d00:
    // 0x1e9d00: 0x28610104  slti        $at, $v1, 0x104
    ctx->pc = 0x1e9d00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)260) ? 1 : 0);
label_1e9d04:
    // 0x1e9d04: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
label_1e9d08:
    if (ctx->pc == 0x1E9D08u) {
        ctx->pc = 0x1E9D08u;
            // 0x1e9d08: 0x240200fa  addiu       $v0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->pc = 0x1E9D0Cu;
        goto label_1e9d0c;
    }
    ctx->pc = 0x1E9D04u;
    {
        const bool branch_taken_0x1e9d04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D04u;
            // 0x1e9d08: 0x240200fa  addiu       $v0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d04) {
            ctx->pc = 0x1E9E40u;
            goto label_1e9e40;
        }
    }
    ctx->pc = 0x1E9D0Cu;
label_1e9d0c:
    // 0x1e9d0c: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
label_1e9d10:
    if (ctx->pc == 0x1E9D10u) {
        ctx->pc = 0x1E9D14u;
        goto label_1e9d14;
    }
    ctx->pc = 0x1E9D0Cu;
    {
        const bool branch_taken_0x1e9d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e9d0c) {
            ctx->pc = 0x1E9E18u;
            goto label_1e9e18;
        }
    }
    ctx->pc = 0x1E9D14u;
label_1e9d14:
    // 0x1e9d14: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1e9d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1e9d18:
    // 0x1e9d18: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_1e9d1c:
    if (ctx->pc == 0x1E9D1Cu) {
        ctx->pc = 0x1E9D1Cu;
            // 0x1e9d1c: 0x240200e6  addiu       $v0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->pc = 0x1E9D20u;
        goto label_1e9d20;
    }
    ctx->pc = 0x1E9D18u;
    {
        const bool branch_taken_0x1e9d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D18u;
            // 0x1e9d1c: 0x240200e6  addiu       $v0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d18) {
            ctx->pc = 0x1E9DF0u;
            goto label_1e9df0;
        }
    }
    ctx->pc = 0x1E9D20u;
label_1e9d20:
    // 0x1e9d20: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_1e9d24:
    if (ctx->pc == 0x1E9D24u) {
        ctx->pc = 0x1E9D28u;
        goto label_1e9d28;
    }
    ctx->pc = 0x1E9D20u;
    {
        const bool branch_taken_0x1e9d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e9d20) {
            ctx->pc = 0x1E9DC8u;
            goto label_1e9dc8;
        }
    }
    ctx->pc = 0x1E9D28u;
label_1e9d28:
    // 0x1e9d28: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1e9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1e9d2c:
    // 0x1e9d2c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_1e9d30:
    if (ctx->pc == 0x1E9D30u) {
        ctx->pc = 0x1E9D30u;
            // 0x1e9d30: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = 0x1E9D34u;
        goto label_1e9d34;
    }
    ctx->pc = 0x1E9D2Cu;
    {
        const bool branch_taken_0x1e9d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D2Cu;
            // 0x1e9d30: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d2c) {
            ctx->pc = 0x1E9DA0u;
            goto label_1e9da0;
        }
    }
    ctx->pc = 0x1E9D34u;
label_1e9d34:
    // 0x1e9d34: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1e9d38:
    if (ctx->pc == 0x1E9D38u) {
        ctx->pc = 0x1E9D3Cu;
        goto label_1e9d3c;
    }
    ctx->pc = 0x1E9D34u;
    {
        const bool branch_taken_0x1e9d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e9d34) {
            ctx->pc = 0x1E9D78u;
            goto label_1e9d78;
        }
    }
    ctx->pc = 0x1E9D3Cu;
label_1e9d3c:
    // 0x1e9d3c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1e9d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1e9d40:
    // 0x1e9d40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e9d44:
    if (ctx->pc == 0x1E9D44u) {
        ctx->pc = 0x1E9D48u;
        goto label_1e9d48;
    }
    ctx->pc = 0x1E9D40u;
    {
        const bool branch_taken_0x1e9d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e9d40) {
            ctx->pc = 0x1E9D50u;
            goto label_1e9d50;
        }
    }
    ctx->pc = 0x1E9D48u;
label_1e9d48:
    // 0x1e9d48: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1e9d4c:
    if (ctx->pc == 0x1E9D4Cu) {
        ctx->pc = 0x1E9D50u;
        goto label_1e9d50;
    }
    ctx->pc = 0x1E9D48u;
    {
        const bool branch_taken_0x1e9d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d48) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9D50u;
label_1e9d50:
    // 0x1e9d50: 0xc065d00  jal         func_197400
label_1e9d54:
    if (ctx->pc == 0x1E9D54u) {
        ctx->pc = 0x1E9D58u;
        goto label_1e9d58;
    }
    ctx->pc = 0x1E9D50u;
    SET_GPR_U32(ctx, 31, 0x1E9D58u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D58u; }
        if (ctx->pc != 0x1E9D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D58u; }
        if (ctx->pc != 0x1E9D58u) { return; }
    }
    ctx->pc = 0x1E9D58u;
label_1e9d58:
    // 0x1e9d58: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1e9d58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e9d5c:
    // 0x1e9d5c: 0x14200046  bnez        $at, . + 4 + (0x46 << 2)
label_1e9d60:
    if (ctx->pc == 0x1E9D60u) {
        ctx->pc = 0x1E9D64u;
        goto label_1e9d64;
    }
    ctx->pc = 0x1E9D5Cu;
    {
        const bool branch_taken_0x1e9d5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d5c) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9D64u;
label_1e9d64:
    // 0x1e9d64: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e9d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e9d68:
    // 0x1e9d68: 0xc06560c  jal         func_195830
label_1e9d6c:
    if (ctx->pc == 0x1E9D6Cu) {
        ctx->pc = 0x1E9D6Cu;
            // 0x1e9d6c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1E9D70u;
        goto label_1e9d70;
    }
    ctx->pc = 0x1E9D68u;
    SET_GPR_U32(ctx, 31, 0x1E9D70u);
    ctx->pc = 0x1E9D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D68u;
            // 0x1e9d6c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D70u; }
        if (ctx->pc != 0x1E9D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D70u; }
        if (ctx->pc != 0x1E9D70u) { return; }
    }
    ctx->pc = 0x1E9D70u;
label_1e9d70:
    // 0x1e9d70: 0x10000041  b           . + 4 + (0x41 << 2)
label_1e9d74:
    if (ctx->pc == 0x1E9D74u) {
        ctx->pc = 0x1E9D78u;
        goto label_1e9d78;
    }
    ctx->pc = 0x1E9D70u;
    {
        const bool branch_taken_0x1e9d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d70) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9D78u;
label_1e9d78:
    // 0x1e9d78: 0xc065d00  jal         func_197400
label_1e9d7c:
    if (ctx->pc == 0x1E9D7Cu) {
        ctx->pc = 0x1E9D80u;
        goto label_1e9d80;
    }
    ctx->pc = 0x1E9D78u;
    SET_GPR_U32(ctx, 31, 0x1E9D80u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D80u; }
        if (ctx->pc != 0x1E9D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D80u; }
        if (ctx->pc != 0x1E9D80u) { return; }
    }
    ctx->pc = 0x1E9D80u;
label_1e9d80:
    // 0x1e9d80: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1e9d80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e9d84:
    // 0x1e9d84: 0x1420003c  bnez        $at, . + 4 + (0x3C << 2)
label_1e9d88:
    if (ctx->pc == 0x1E9D88u) {
        ctx->pc = 0x1E9D8Cu;
        goto label_1e9d8c;
    }
    ctx->pc = 0x1E9D84u;
    {
        const bool branch_taken_0x1e9d84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d84) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9D8Cu;
label_1e9d8c:
    // 0x1e9d8c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e9d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e9d90:
    // 0x1e9d90: 0xc06560c  jal         func_195830
label_1e9d94:
    if (ctx->pc == 0x1E9D94u) {
        ctx->pc = 0x1E9D94u;
            // 0x1e9d94: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1E9D98u;
        goto label_1e9d98;
    }
    ctx->pc = 0x1E9D90u;
    SET_GPR_U32(ctx, 31, 0x1E9D98u);
    ctx->pc = 0x1E9D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D90u;
            // 0x1e9d94: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D98u; }
        if (ctx->pc != 0x1E9D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D98u; }
        if (ctx->pc != 0x1E9D98u) { return; }
    }
    ctx->pc = 0x1E9D98u;
label_1e9d98:
    // 0x1e9d98: 0x10000037  b           . + 4 + (0x37 << 2)
label_1e9d9c:
    if (ctx->pc == 0x1E9D9Cu) {
        ctx->pc = 0x1E9DA0u;
        goto label_1e9da0;
    }
    ctx->pc = 0x1E9D98u;
    {
        const bool branch_taken_0x1e9d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d98) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9DA0u;
label_1e9da0:
    // 0x1e9da0: 0xc065d00  jal         func_197400
label_1e9da4:
    if (ctx->pc == 0x1E9DA4u) {
        ctx->pc = 0x1E9DA8u;
        goto label_1e9da8;
    }
    ctx->pc = 0x1E9DA0u;
    SET_GPR_U32(ctx, 31, 0x1E9DA8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DA8u; }
        if (ctx->pc != 0x1E9DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DA8u; }
        if (ctx->pc != 0x1E9DA8u) { return; }
    }
    ctx->pc = 0x1E9DA8u;
label_1e9da8:
    // 0x1e9da8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1e9da8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e9dac:
    // 0x1e9dac: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
label_1e9db0:
    if (ctx->pc == 0x1E9DB0u) {
        ctx->pc = 0x1E9DB4u;
        goto label_1e9db4;
    }
    ctx->pc = 0x1E9DACu;
    {
        const bool branch_taken_0x1e9dac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9dac) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9DB4u;
label_1e9db4:
    // 0x1e9db4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e9db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e9db8:
    // 0x1e9db8: 0xc06560c  jal         func_195830
label_1e9dbc:
    if (ctx->pc == 0x1E9DBCu) {
        ctx->pc = 0x1E9DBCu;
            // 0x1e9dbc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1E9DC0u;
        goto label_1e9dc0;
    }
    ctx->pc = 0x1E9DB8u;
    SET_GPR_U32(ctx, 31, 0x1E9DC0u);
    ctx->pc = 0x1E9DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DB8u;
            // 0x1e9dbc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DC0u; }
        if (ctx->pc != 0x1E9DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DC0u; }
        if (ctx->pc != 0x1E9DC0u) { return; }
    }
    ctx->pc = 0x1E9DC0u;
label_1e9dc0:
    // 0x1e9dc0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1e9dc4:
    if (ctx->pc == 0x1E9DC4u) {
        ctx->pc = 0x1E9DC8u;
        goto label_1e9dc8;
    }
    ctx->pc = 0x1E9DC0u;
    {
        const bool branch_taken_0x1e9dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9dc0) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9DC8u;
label_1e9dc8:
    // 0x1e9dc8: 0xc065d00  jal         func_197400
label_1e9dcc:
    if (ctx->pc == 0x1E9DCCu) {
        ctx->pc = 0x1E9DD0u;
        goto label_1e9dd0;
    }
    ctx->pc = 0x1E9DC8u;
    SET_GPR_U32(ctx, 31, 0x1E9DD0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DD0u; }
        if (ctx->pc != 0x1E9DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DD0u; }
        if (ctx->pc != 0x1E9DD0u) { return; }
    }
    ctx->pc = 0x1E9DD0u;
label_1e9dd0:
    // 0x1e9dd0: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
label_1e9dd4:
    if (ctx->pc == 0x1E9DD4u) {
        ctx->pc = 0x1E9DD8u;
        goto label_1e9dd8;
    }
    ctx->pc = 0x1E9DD0u;
    {
        const bool branch_taken_0x1e9dd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e9dd0) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9DD8u;
label_1e9dd8:
    // 0x1e9dd8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e9dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e9ddc:
    // 0x1e9ddc: 0xc06560c  jal         func_195830
label_1e9de0:
    if (ctx->pc == 0x1E9DE0u) {
        ctx->pc = 0x1E9DE0u;
            // 0x1e9de0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1E9DE4u;
        goto label_1e9de4;
    }
    ctx->pc = 0x1E9DDCu;
    SET_GPR_U32(ctx, 31, 0x1E9DE4u);
    ctx->pc = 0x1E9DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DDCu;
            // 0x1e9de0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DE4u; }
        if (ctx->pc != 0x1E9DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DE4u; }
        if (ctx->pc != 0x1E9DE4u) { return; }
    }
    ctx->pc = 0x1E9DE4u;
label_1e9de4:
    // 0x1e9de4: 0x10000024  b           . + 4 + (0x24 << 2)
label_1e9de8:
    if (ctx->pc == 0x1E9DE8u) {
        ctx->pc = 0x1E9DECu;
        goto label_1e9dec;
    }
    ctx->pc = 0x1E9DE4u;
    {
        const bool branch_taken_0x1e9de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9de4) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9DECu;
label_1e9dec:
    // 0x1e9dec: 0x0  nop
    ctx->pc = 0x1e9decu;
    // NOP
label_1e9df0:
    // 0x1e9df0: 0xc065d00  jal         func_197400
label_1e9df4:
    if (ctx->pc == 0x1E9DF4u) {
        ctx->pc = 0x1E9DF8u;
        goto label_1e9df8;
    }
    ctx->pc = 0x1E9DF0u;
    SET_GPR_U32(ctx, 31, 0x1E9DF8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DF8u; }
        if (ctx->pc != 0x1E9DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DF8u; }
        if (ctx->pc != 0x1E9DF8u) { return; }
    }
    ctx->pc = 0x1E9DF8u;
label_1e9df8:
    // 0x1e9df8: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
label_1e9dfc:
    if (ctx->pc == 0x1E9DFCu) {
        ctx->pc = 0x1E9E00u;
        goto label_1e9e00;
    }
    ctx->pc = 0x1E9DF8u;
    {
        const bool branch_taken_0x1e9df8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e9df8) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9E00u;
label_1e9e00:
    // 0x1e9e00: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e9e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e9e04:
    // 0x1e9e04: 0xc06560c  jal         func_195830
label_1e9e08:
    if (ctx->pc == 0x1E9E08u) {
        ctx->pc = 0x1E9E08u;
            // 0x1e9e08: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1E9E0Cu;
        goto label_1e9e0c;
    }
    ctx->pc = 0x1E9E04u;
    SET_GPR_U32(ctx, 31, 0x1E9E0Cu);
    ctx->pc = 0x1E9E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E04u;
            // 0x1e9e08: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E0Cu; }
        if (ctx->pc != 0x1E9E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E0Cu; }
        if (ctx->pc != 0x1E9E0Cu) { return; }
    }
    ctx->pc = 0x1E9E0Cu;
label_1e9e0c:
    // 0x1e9e0c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1e9e10:
    if (ctx->pc == 0x1E9E10u) {
        ctx->pc = 0x1E9E14u;
        goto label_1e9e14;
    }
    ctx->pc = 0x1E9E0Cu;
    {
        const bool branch_taken_0x1e9e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e0c) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9E14u;
label_1e9e14:
    // 0x1e9e14: 0x0  nop
    ctx->pc = 0x1e9e14u;
    // NOP
label_1e9e18:
    // 0x1e9e18: 0xc065d00  jal         func_197400
label_1e9e1c:
    if (ctx->pc == 0x1E9E1Cu) {
        ctx->pc = 0x1E9E20u;
        goto label_1e9e20;
    }
    ctx->pc = 0x1E9E18u;
    SET_GPR_U32(ctx, 31, 0x1E9E20u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E20u; }
        if (ctx->pc != 0x1E9E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E20u; }
        if (ctx->pc != 0x1E9E20u) { return; }
    }
    ctx->pc = 0x1E9E20u;
label_1e9e20:
    // 0x1e9e20: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_1e9e24:
    if (ctx->pc == 0x1E9E24u) {
        ctx->pc = 0x1E9E28u;
        goto label_1e9e28;
    }
    ctx->pc = 0x1E9E20u;
    {
        const bool branch_taken_0x1e9e20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e9e20) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9E28u;
label_1e9e28:
    // 0x1e9e28: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e9e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e9e2c:
    // 0x1e9e2c: 0xc06560c  jal         func_195830
label_1e9e30:
    if (ctx->pc == 0x1E9E30u) {
        ctx->pc = 0x1E9E30u;
            // 0x1e9e30: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1E9E34u;
        goto label_1e9e34;
    }
    ctx->pc = 0x1E9E2Cu;
    SET_GPR_U32(ctx, 31, 0x1E9E34u);
    ctx->pc = 0x1E9E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E2Cu;
            // 0x1e9e30: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E34u; }
        if (ctx->pc != 0x1E9E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E34u; }
        if (ctx->pc != 0x1E9E34u) { return; }
    }
    ctx->pc = 0x1E9E34u;
label_1e9e34:
    // 0x1e9e34: 0x10000010  b           . + 4 + (0x10 << 2)
label_1e9e38:
    if (ctx->pc == 0x1E9E38u) {
        ctx->pc = 0x1E9E3Cu;
        goto label_1e9e3c;
    }
    ctx->pc = 0x1E9E34u;
    {
        const bool branch_taken_0x1e9e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e34) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9E3Cu;
label_1e9e3c:
    // 0x1e9e3c: 0x0  nop
    ctx->pc = 0x1e9e3cu;
    // NOP
label_1e9e40:
    // 0x1e9e40: 0x28610105  slti        $at, $v1, 0x105
    ctx->pc = 0x1e9e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)261) ? 1 : 0);
label_1e9e44:
    // 0x1e9e44: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1e9e48:
    if (ctx->pc == 0x1E9E48u) {
        ctx->pc = 0x1E9E48u;
            // 0x1e9e48: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1E9E4Cu;
        goto label_1e9e4c;
    }
    ctx->pc = 0x1E9E44u;
    {
        const bool branch_taken_0x1e9e44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E44u;
            // 0x1e9e48: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e44) {
            ctx->pc = 0x1E9E58u;
            goto label_1e9e58;
        }
    }
    ctx->pc = 0x1E9E4Cu;
label_1e9e4c:
    // 0x1e9e4c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e9e4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e9e50:
    // 0x1e9e50: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e9e54:
    if (ctx->pc == 0x1E9E54u) {
        ctx->pc = 0x1E9E54u;
            // 0x1e9e54: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x1E9E58u;
        goto label_1e9e58;
    }
    ctx->pc = 0x1E9E50u;
    {
        const bool branch_taken_0x1e9e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E50u;
            // 0x1e9e54: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e50) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9E58u;
label_1e9e58:
    // 0x1e9e58: 0x3c023f82  lui         $v0, 0x3F82
    ctx->pc = 0x1e9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16258 << 16));
label_1e9e5c:
    // 0x1e9e5c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e9e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9e60:
    // 0x1e9e60: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x1e9e60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36700u)));
label_1e9e64:
    // 0x1e9e64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e9e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e9e68:
    // 0x1e9e68: 0x0  nop
    ctx->pc = 0x1e9e68u;
    // NOP
label_1e9e6c:
    // 0x1e9e6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e9e6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e9e70:
    // 0x1e9e70: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e9e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1e9e74:
    // 0x1e9e74: 0x0  nop
    ctx->pc = 0x1e9e74u;
    // NOP
label_1e9e78:
    // 0x1e9e78: 0xc04b788  jal         func_12DE20
label_1e9e7c:
    if (ctx->pc == 0x1E9E7Cu) {
        ctx->pc = 0x1E9E7Cu;
            // 0x1e9e7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E9E80u;
        goto label_1e9e80;
    }
    ctx->pc = 0x1E9E78u;
    SET_GPR_U32(ctx, 31, 0x1E9E80u);
    ctx->pc = 0x1E9E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E78u;
            // 0x1e9e7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E80u; }
        if (ctx->pc != 0x1E9E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E80u; }
        if (ctx->pc != 0x1E9E80u) { return; }
    }
    ctx->pc = 0x1E9E80u;
label_1e9e80:
    // 0x1e9e80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e9e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9e84:
    // 0x1e9e84: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1e9e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e9e88:
    // 0x1e9e88: 0xc04b7da  jal         func_12DF68
label_1e9e8c:
    if (ctx->pc == 0x1E9E8Cu) {
        ctx->pc = 0x1E9E8Cu;
            // 0x1e9e8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E90u;
        goto label_1e9e90;
    }
    ctx->pc = 0x1E9E88u;
    SET_GPR_U32(ctx, 31, 0x1E9E90u);
    ctx->pc = 0x1E9E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E88u;
            // 0x1e9e8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E90u; }
        if (ctx->pc != 0x1E9E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E90u; }
        if (ctx->pc != 0x1E9E90u) { return; }
    }
    ctx->pc = 0x1E9E90u;
label_1e9e90:
    // 0x1e9e90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e9e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9e94:
    // 0x1e9e94: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1e9e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e9e98:
    // 0x1e9e98: 0xc04b804  jal         func_12E010
label_1e9e9c:
    if (ctx->pc == 0x1E9E9Cu) {
        ctx->pc = 0x1E9E9Cu;
            // 0x1e9e9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9EA0u;
        goto label_1e9ea0;
    }
    ctx->pc = 0x1E9E98u;
    SET_GPR_U32(ctx, 31, 0x1E9EA0u);
    ctx->pc = 0x1E9E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E98u;
            // 0x1e9e9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EA0u; }
        if (ctx->pc != 0x1E9EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EA0u; }
        if (ctx->pc != 0x1E9EA0u) { return; }
    }
    ctx->pc = 0x1E9EA0u;
label_1e9ea0:
    // 0x1e9ea0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e9ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9ea4:
    // 0x1e9ea4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1e9ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e9ea8:
    // 0x1e9ea8: 0xc04b7b0  jal         func_12DEC0
label_1e9eac:
    if (ctx->pc == 0x1E9EACu) {
        ctx->pc = 0x1E9EACu;
            // 0x1e9eac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9EB0u;
        goto label_1e9eb0;
    }
    ctx->pc = 0x1E9EA8u;
    SET_GPR_U32(ctx, 31, 0x1E9EB0u);
    ctx->pc = 0x1E9EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EA8u;
            // 0x1e9eac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EB0u; }
        if (ctx->pc != 0x1E9EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EB0u; }
        if (ctx->pc != 0x1E9EB0u) { return; }
    }
    ctx->pc = 0x1E9EB0u;
label_1e9eb0:
    // 0x1e9eb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e9eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9eb4:
    // 0x1e9eb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e9eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9eb8:
    // 0x1e9eb8: 0xc04b75e  jal         func_12DD78
label_1e9ebc:
    if (ctx->pc == 0x1E9EBCu) {
        ctx->pc = 0x1E9EBCu;
            // 0x1e9ebc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1E9EC0u;
        goto label_1e9ec0;
    }
    ctx->pc = 0x1E9EB8u;
    SET_GPR_U32(ctx, 31, 0x1E9EC0u);
    ctx->pc = 0x1E9EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EB8u;
            // 0x1e9ebc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EC0u; }
        if (ctx->pc != 0x1E9EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EC0u; }
        if (ctx->pc != 0x1E9EC0u) { return; }
    }
    ctx->pc = 0x1E9EC0u;
label_1e9ec0:
    // 0x1e9ec0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e9ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e9ec4:
    // 0x1e9ec4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e9ec8:
    // 0x1e9ec8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e9ec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e9ecc:
    // 0x1e9ecc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e9ed0:
    if (ctx->pc == 0x1E9ED0u) {
        ctx->pc = 0x1E9ED4u;
        goto label_1e9ed4;
    }
    ctx->pc = 0x1E9ECCu;
    {
        const bool branch_taken_0x1e9ecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ecc) {
            ctx->pc = 0x1E9F20u;
            goto label_1e9f20;
        }
    }
    ctx->pc = 0x1E9ED4u;
label_1e9ed4:
    // 0x1e9ed4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e9ed8:
    // 0x1e9ed8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e9edc:
    if (ctx->pc == 0x1E9EDCu) {
        ctx->pc = 0x1E9EE0u;
        goto label_1e9ee0;
    }
    ctx->pc = 0x1E9ED8u;
    {
        const bool branch_taken_0x1e9ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ed8) {
            ctx->pc = 0x1E9EF0u;
            goto label_1e9ef0;
        }
    }
    ctx->pc = 0x1E9EE0u;
label_1e9ee0:
    // 0x1e9ee0: 0xc0604f0  jal         func_1813C0
label_1e9ee4:
    if (ctx->pc == 0x1E9EE4u) {
        ctx->pc = 0x1E9EE4u;
            // 0x1e9ee4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E9EE8u;
        goto label_1e9ee8;
    }
    ctx->pc = 0x1E9EE0u;
    SET_GPR_U32(ctx, 31, 0x1E9EE8u);
    ctx->pc = 0x1E9EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EE0u;
            // 0x1e9ee4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EE8u; }
        if (ctx->pc != 0x1E9EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EE8u; }
        if (ctx->pc != 0x1E9EE8u) { return; }
    }
    ctx->pc = 0x1E9EE8u;
label_1e9ee8:
    // 0x1e9ee8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e9eec:
    if (ctx->pc == 0x1E9EECu) {
        ctx->pc = 0x1E9EF0u;
        goto label_1e9ef0;
    }
    ctx->pc = 0x1E9EE8u;
    {
        const bool branch_taken_0x1e9ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ee8) {
            ctx->pc = 0x1E9EF8u;
            goto label_1e9ef8;
        }
    }
    ctx->pc = 0x1E9EF0u;
label_1e9ef0:
    // 0x1e9ef0: 0xc0604dc  jal         func_181370
label_1e9ef4:
    if (ctx->pc == 0x1E9EF4u) {
        ctx->pc = 0x1E9EF4u;
            // 0x1e9ef4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E9EF8u;
        goto label_1e9ef8;
    }
    ctx->pc = 0x1E9EF0u;
    SET_GPR_U32(ctx, 31, 0x1E9EF8u);
    ctx->pc = 0x1E9EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EF0u;
            // 0x1e9ef4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EF8u; }
        if (ctx->pc != 0x1E9EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EF8u; }
        if (ctx->pc != 0x1E9EF8u) { return; }
    }
    ctx->pc = 0x1E9EF8u;
label_1e9ef8:
    // 0x1e9ef8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e9efc:
    // 0x1e9efc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e9f00:
    if (ctx->pc == 0x1E9F00u) {
        ctx->pc = 0x1E9F04u;
        goto label_1e9f04;
    }
    ctx->pc = 0x1E9EFCu;
    {
        const bool branch_taken_0x1e9efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9efc) {
            ctx->pc = 0x1E9F10u;
            goto label_1e9f10;
        }
    }
    ctx->pc = 0x1E9F04u;
label_1e9f04:
    // 0x1e9f04: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e9f08:
    if (ctx->pc == 0x1E9F08u) {
        ctx->pc = 0x1E9F08u;
            // 0x1e9f08: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x1E9F0Cu;
        goto label_1e9f0c;
    }
    ctx->pc = 0x1E9F04u;
    {
        const bool branch_taken_0x1e9f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F04u;
            // 0x1e9f08: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f04) {
            ctx->pc = 0x1E9F30u;
            goto label_1e9f30;
        }
    }
    ctx->pc = 0x1E9F0Cu;
label_1e9f0c:
    // 0x1e9f0c: 0x0  nop
    ctx->pc = 0x1e9f0cu;
    // NOP
label_1e9f10:
    // 0x1e9f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9f14:
    // 0x1e9f14: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e9f18:
    if (ctx->pc == 0x1E9F18u) {
        ctx->pc = 0x1E9F18u;
            // 0x1e9f18: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1E9F1Cu;
        goto label_1e9f1c;
    }
    ctx->pc = 0x1E9F14u;
    {
        const bool branch_taken_0x1e9f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F14u;
            // 0x1e9f18: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f14) {
            ctx->pc = 0x1E9F30u;
            goto label_1e9f30;
        }
    }
    ctx->pc = 0x1E9F1Cu;
label_1e9f1c:
    // 0x1e9f1c: 0x0  nop
    ctx->pc = 0x1e9f1cu;
    // NOP
label_1e9f20:
    // 0x1e9f20: 0xc0604dc  jal         func_181370
label_1e9f24:
    if (ctx->pc == 0x1E9F24u) {
        ctx->pc = 0x1E9F24u;
            // 0x1e9f24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E9F28u;
        goto label_1e9f28;
    }
    ctx->pc = 0x1E9F20u;
    SET_GPR_U32(ctx, 31, 0x1E9F28u);
    ctx->pc = 0x1E9F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F20u;
            // 0x1e9f24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F28u; }
        if (ctx->pc != 0x1E9F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F28u; }
        if (ctx->pc != 0x1E9F28u) { return; }
    }
    ctx->pc = 0x1E9F28u;
label_1e9f28:
    // 0x1e9f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9f2c:
    // 0x1e9f2c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1e9f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1e9f30:
    // 0x1e9f30: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e9f34:
    // 0x1e9f34: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1e9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1e9f38:
    // 0x1e9f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9f3c:
    // 0x1e9f3c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e9f40:
    // 0x1e9f40: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e9f44:
    // 0x1e9f44: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1e9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1e9f48:
    // 0x1e9f48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e9f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e9f4c:
    // 0x1e9f4c: 0x0  nop
    ctx->pc = 0x1e9f4cu;
    // NOP
label_1e9f50:
    // 0x1e9f50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e9f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e9f54:
    // 0x1e9f54: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1e9f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1e9f58:
    // 0x1e9f58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e9f5c:
    // 0x1e9f5c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1e9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1e9f60:
    // 0x1e9f60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e9f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e9f64:
    // 0x1e9f64: 0x0  nop
    ctx->pc = 0x1e9f64u;
    // NOP
label_1e9f68:
    // 0x1e9f68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e9f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e9f6c:
    // 0x1e9f6c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1e9f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1e9f70:
    // 0x1e9f70: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e9f74:
    // 0x1e9f74: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1e9f78:
    // 0x1e9f78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e9f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e9f7c:
    // 0x1e9f7c: 0x0  nop
    ctx->pc = 0x1e9f7cu;
    // NOP
label_1e9f80:
    // 0x1e9f80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e9f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e9f84:
    // 0x1e9f84: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1e9f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1e9f88:
    // 0x1e9f88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e9f8c:
    // 0x1e9f8c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1e9f90:
    // 0x1e9f90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e9f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e9f94:
    // 0x1e9f94: 0x0  nop
    ctx->pc = 0x1e9f94u;
    // NOP
label_1e9f98:
    // 0x1e9f98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e9f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e9f9c:
    // 0x1e9f9c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1e9f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1e9fa0:
    // 0x1e9fa0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e9fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e9fa4:
    // 0x1e9fa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e9fa8:
    // 0x1e9fa8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1e9fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1e9fac:
    // 0x1e9fac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9fb0:
    // 0x1e9fb0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e9fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9fb4:
    // 0x1e9fb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e9fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9fb8:
    // 0x1e9fb8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e9fbc:
    if (ctx->pc == 0x1E9FBCu) {
        ctx->pc = 0x1E9FC0u;
        goto label_1e9fc0;
    }
    ctx->pc = 0x1E9FB8u;
    {
        const bool branch_taken_0x1e9fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9fb8) {
            ctx->pc = 0x1E9FD8u;
            goto label_1e9fd8;
        }
    }
    ctx->pc = 0x1E9FC0u;
label_1e9fc0:
    // 0x1e9fc0: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1e9fc4:
    // 0x1e9fc4: 0x40f809  jalr        $v0
label_1e9fc8:
    if (ctx->pc == 0x1E9FC8u) {
        ctx->pc = 0x1E9FC8u;
            // 0x1e9fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9FCCu;
        goto label_1e9fcc;
    }
    ctx->pc = 0x1E9FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9FCCu);
        ctx->pc = 0x1E9FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9FC4u;
            // 0x1e9fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9B60u: goto label_1e9b60;
            case 0x1E9B64u: goto label_1e9b64;
            case 0x1E9B68u: goto label_1e9b68;
            case 0x1E9B6Cu: goto label_1e9b6c;
            case 0x1E9B70u: goto label_1e9b70;
            case 0x1E9B74u: goto label_1e9b74;
            case 0x1E9B78u: goto label_1e9b78;
            case 0x1E9B7Cu: goto label_1e9b7c;
            case 0x1E9B80u: goto label_1e9b80;
            case 0x1E9B84u: goto label_1e9b84;
            case 0x1E9B88u: goto label_1e9b88;
            case 0x1E9B8Cu: goto label_1e9b8c;
            case 0x1E9B90u: goto label_1e9b90;
            case 0x1E9B94u: goto label_1e9b94;
            case 0x1E9B98u: goto label_1e9b98;
            case 0x1E9B9Cu: goto label_1e9b9c;
            case 0x1E9BA0u: goto label_1e9ba0;
            case 0x1E9BA4u: goto label_1e9ba4;
            case 0x1E9BA8u: goto label_1e9ba8;
            case 0x1E9BACu: goto label_1e9bac;
            case 0x1E9BB0u: goto label_1e9bb0;
            case 0x1E9BB4u: goto label_1e9bb4;
            case 0x1E9BB8u: goto label_1e9bb8;
            case 0x1E9BBCu: goto label_1e9bbc;
            case 0x1E9BC0u: goto label_1e9bc0;
            case 0x1E9BC4u: goto label_1e9bc4;
            case 0x1E9BC8u: goto label_1e9bc8;
            case 0x1E9BCCu: goto label_1e9bcc;
            case 0x1E9BD0u: goto label_1e9bd0;
            case 0x1E9BD4u: goto label_1e9bd4;
            case 0x1E9BD8u: goto label_1e9bd8;
            case 0x1E9BDCu: goto label_1e9bdc;
            case 0x1E9BE0u: goto label_1e9be0;
            case 0x1E9BE4u: goto label_1e9be4;
            case 0x1E9BE8u: goto label_1e9be8;
            case 0x1E9BECu: goto label_1e9bec;
            case 0x1E9BF0u: goto label_1e9bf0;
            case 0x1E9BF4u: goto label_1e9bf4;
            case 0x1E9BF8u: goto label_1e9bf8;
            case 0x1E9BFCu: goto label_1e9bfc;
            case 0x1E9C00u: goto label_1e9c00;
            case 0x1E9C04u: goto label_1e9c04;
            case 0x1E9C08u: goto label_1e9c08;
            case 0x1E9C0Cu: goto label_1e9c0c;
            case 0x1E9C10u: goto label_1e9c10;
            case 0x1E9C14u: goto label_1e9c14;
            case 0x1E9C18u: goto label_1e9c18;
            case 0x1E9C1Cu: goto label_1e9c1c;
            case 0x1E9C20u: goto label_1e9c20;
            case 0x1E9C24u: goto label_1e9c24;
            case 0x1E9C28u: goto label_1e9c28;
            case 0x1E9C2Cu: goto label_1e9c2c;
            case 0x1E9C30u: goto label_1e9c30;
            case 0x1E9C34u: goto label_1e9c34;
            case 0x1E9C38u: goto label_1e9c38;
            case 0x1E9C3Cu: goto label_1e9c3c;
            case 0x1E9C40u: goto label_1e9c40;
            case 0x1E9C44u: goto label_1e9c44;
            case 0x1E9C48u: goto label_1e9c48;
            case 0x1E9C4Cu: goto label_1e9c4c;
            case 0x1E9C50u: goto label_1e9c50;
            case 0x1E9C54u: goto label_1e9c54;
            case 0x1E9C58u: goto label_1e9c58;
            case 0x1E9C5Cu: goto label_1e9c5c;
            case 0x1E9C60u: goto label_1e9c60;
            case 0x1E9C64u: goto label_1e9c64;
            case 0x1E9C68u: goto label_1e9c68;
            case 0x1E9C6Cu: goto label_1e9c6c;
            case 0x1E9C70u: goto label_1e9c70;
            case 0x1E9C74u: goto label_1e9c74;
            case 0x1E9C78u: goto label_1e9c78;
            case 0x1E9C7Cu: goto label_1e9c7c;
            case 0x1E9C80u: goto label_1e9c80;
            case 0x1E9C84u: goto label_1e9c84;
            case 0x1E9C88u: goto label_1e9c88;
            case 0x1E9C8Cu: goto label_1e9c8c;
            case 0x1E9C90u: goto label_1e9c90;
            case 0x1E9C94u: goto label_1e9c94;
            case 0x1E9C98u: goto label_1e9c98;
            case 0x1E9C9Cu: goto label_1e9c9c;
            case 0x1E9CA0u: goto label_1e9ca0;
            case 0x1E9CA4u: goto label_1e9ca4;
            case 0x1E9CA8u: goto label_1e9ca8;
            case 0x1E9CACu: goto label_1e9cac;
            case 0x1E9CB0u: goto label_1e9cb0;
            case 0x1E9CB4u: goto label_1e9cb4;
            case 0x1E9CB8u: goto label_1e9cb8;
            case 0x1E9CBCu: goto label_1e9cbc;
            case 0x1E9CC0u: goto label_1e9cc0;
            case 0x1E9CC4u: goto label_1e9cc4;
            case 0x1E9CC8u: goto label_1e9cc8;
            case 0x1E9CCCu: goto label_1e9ccc;
            case 0x1E9CD0u: goto label_1e9cd0;
            case 0x1E9CD4u: goto label_1e9cd4;
            case 0x1E9CD8u: goto label_1e9cd8;
            case 0x1E9CDCu: goto label_1e9cdc;
            case 0x1E9CE0u: goto label_1e9ce0;
            case 0x1E9CE4u: goto label_1e9ce4;
            case 0x1E9CE8u: goto label_1e9ce8;
            case 0x1E9CECu: goto label_1e9cec;
            case 0x1E9CF0u: goto label_1e9cf0;
            case 0x1E9CF4u: goto label_1e9cf4;
            case 0x1E9CF8u: goto label_1e9cf8;
            case 0x1E9CFCu: goto label_1e9cfc;
            case 0x1E9D00u: goto label_1e9d00;
            case 0x1E9D04u: goto label_1e9d04;
            case 0x1E9D08u: goto label_1e9d08;
            case 0x1E9D0Cu: goto label_1e9d0c;
            case 0x1E9D10u: goto label_1e9d10;
            case 0x1E9D14u: goto label_1e9d14;
            case 0x1E9D18u: goto label_1e9d18;
            case 0x1E9D1Cu: goto label_1e9d1c;
            case 0x1E9D20u: goto label_1e9d20;
            case 0x1E9D24u: goto label_1e9d24;
            case 0x1E9D28u: goto label_1e9d28;
            case 0x1E9D2Cu: goto label_1e9d2c;
            case 0x1E9D30u: goto label_1e9d30;
            case 0x1E9D34u: goto label_1e9d34;
            case 0x1E9D38u: goto label_1e9d38;
            case 0x1E9D3Cu: goto label_1e9d3c;
            case 0x1E9D40u: goto label_1e9d40;
            case 0x1E9D44u: goto label_1e9d44;
            case 0x1E9D48u: goto label_1e9d48;
            case 0x1E9D4Cu: goto label_1e9d4c;
            case 0x1E9D50u: goto label_1e9d50;
            case 0x1E9D54u: goto label_1e9d54;
            case 0x1E9D58u: goto label_1e9d58;
            case 0x1E9D5Cu: goto label_1e9d5c;
            case 0x1E9D60u: goto label_1e9d60;
            case 0x1E9D64u: goto label_1e9d64;
            case 0x1E9D68u: goto label_1e9d68;
            case 0x1E9D6Cu: goto label_1e9d6c;
            case 0x1E9D70u: goto label_1e9d70;
            case 0x1E9D74u: goto label_1e9d74;
            case 0x1E9D78u: goto label_1e9d78;
            case 0x1E9D7Cu: goto label_1e9d7c;
            case 0x1E9D80u: goto label_1e9d80;
            case 0x1E9D84u: goto label_1e9d84;
            case 0x1E9D88u: goto label_1e9d88;
            case 0x1E9D8Cu: goto label_1e9d8c;
            case 0x1E9D90u: goto label_1e9d90;
            case 0x1E9D94u: goto label_1e9d94;
            case 0x1E9D98u: goto label_1e9d98;
            case 0x1E9D9Cu: goto label_1e9d9c;
            case 0x1E9DA0u: goto label_1e9da0;
            case 0x1E9DA4u: goto label_1e9da4;
            case 0x1E9DA8u: goto label_1e9da8;
            case 0x1E9DACu: goto label_1e9dac;
            case 0x1E9DB0u: goto label_1e9db0;
            case 0x1E9DB4u: goto label_1e9db4;
            case 0x1E9DB8u: goto label_1e9db8;
            case 0x1E9DBCu: goto label_1e9dbc;
            case 0x1E9DC0u: goto label_1e9dc0;
            case 0x1E9DC4u: goto label_1e9dc4;
            case 0x1E9DC8u: goto label_1e9dc8;
            case 0x1E9DCCu: goto label_1e9dcc;
            case 0x1E9DD0u: goto label_1e9dd0;
            case 0x1E9DD4u: goto label_1e9dd4;
            case 0x1E9DD8u: goto label_1e9dd8;
            case 0x1E9DDCu: goto label_1e9ddc;
            case 0x1E9DE0u: goto label_1e9de0;
            case 0x1E9DE4u: goto label_1e9de4;
            case 0x1E9DE8u: goto label_1e9de8;
            case 0x1E9DECu: goto label_1e9dec;
            case 0x1E9DF0u: goto label_1e9df0;
            case 0x1E9DF4u: goto label_1e9df4;
            case 0x1E9DF8u: goto label_1e9df8;
            case 0x1E9DFCu: goto label_1e9dfc;
            case 0x1E9E00u: goto label_1e9e00;
            case 0x1E9E04u: goto label_1e9e04;
            case 0x1E9E08u: goto label_1e9e08;
            case 0x1E9E0Cu: goto label_1e9e0c;
            case 0x1E9E10u: goto label_1e9e10;
            case 0x1E9E14u: goto label_1e9e14;
            case 0x1E9E18u: goto label_1e9e18;
            case 0x1E9E1Cu: goto label_1e9e1c;
            case 0x1E9E20u: goto label_1e9e20;
            case 0x1E9E24u: goto label_1e9e24;
            case 0x1E9E28u: goto label_1e9e28;
            case 0x1E9E2Cu: goto label_1e9e2c;
            case 0x1E9E30u: goto label_1e9e30;
            case 0x1E9E34u: goto label_1e9e34;
            case 0x1E9E38u: goto label_1e9e38;
            case 0x1E9E3Cu: goto label_1e9e3c;
            case 0x1E9E40u: goto label_1e9e40;
            case 0x1E9E44u: goto label_1e9e44;
            case 0x1E9E48u: goto label_1e9e48;
            case 0x1E9E4Cu: goto label_1e9e4c;
            case 0x1E9E50u: goto label_1e9e50;
            case 0x1E9E54u: goto label_1e9e54;
            case 0x1E9E58u: goto label_1e9e58;
            case 0x1E9E5Cu: goto label_1e9e5c;
            case 0x1E9E60u: goto label_1e9e60;
            case 0x1E9E64u: goto label_1e9e64;
            case 0x1E9E68u: goto label_1e9e68;
            case 0x1E9E6Cu: goto label_1e9e6c;
            case 0x1E9E70u: goto label_1e9e70;
            case 0x1E9E74u: goto label_1e9e74;
            case 0x1E9E78u: goto label_1e9e78;
            case 0x1E9E7Cu: goto label_1e9e7c;
            case 0x1E9E80u: goto label_1e9e80;
            case 0x1E9E84u: goto label_1e9e84;
            case 0x1E9E88u: goto label_1e9e88;
            case 0x1E9E8Cu: goto label_1e9e8c;
            case 0x1E9E90u: goto label_1e9e90;
            case 0x1E9E94u: goto label_1e9e94;
            case 0x1E9E98u: goto label_1e9e98;
            case 0x1E9E9Cu: goto label_1e9e9c;
            case 0x1E9EA0u: goto label_1e9ea0;
            case 0x1E9EA4u: goto label_1e9ea4;
            case 0x1E9EA8u: goto label_1e9ea8;
            case 0x1E9EACu: goto label_1e9eac;
            case 0x1E9EB0u: goto label_1e9eb0;
            case 0x1E9EB4u: goto label_1e9eb4;
            case 0x1E9EB8u: goto label_1e9eb8;
            case 0x1E9EBCu: goto label_1e9ebc;
            case 0x1E9EC0u: goto label_1e9ec0;
            case 0x1E9EC4u: goto label_1e9ec4;
            case 0x1E9EC8u: goto label_1e9ec8;
            case 0x1E9ECCu: goto label_1e9ecc;
            case 0x1E9ED0u: goto label_1e9ed0;
            case 0x1E9ED4u: goto label_1e9ed4;
            case 0x1E9ED8u: goto label_1e9ed8;
            case 0x1E9EDCu: goto label_1e9edc;
            case 0x1E9EE0u: goto label_1e9ee0;
            case 0x1E9EE4u: goto label_1e9ee4;
            case 0x1E9EE8u: goto label_1e9ee8;
            case 0x1E9EECu: goto label_1e9eec;
            case 0x1E9EF0u: goto label_1e9ef0;
            case 0x1E9EF4u: goto label_1e9ef4;
            case 0x1E9EF8u: goto label_1e9ef8;
            case 0x1E9EFCu: goto label_1e9efc;
            case 0x1E9F00u: goto label_1e9f00;
            case 0x1E9F04u: goto label_1e9f04;
            case 0x1E9F08u: goto label_1e9f08;
            case 0x1E9F0Cu: goto label_1e9f0c;
            case 0x1E9F10u: goto label_1e9f10;
            case 0x1E9F14u: goto label_1e9f14;
            case 0x1E9F18u: goto label_1e9f18;
            case 0x1E9F1Cu: goto label_1e9f1c;
            case 0x1E9F20u: goto label_1e9f20;
            case 0x1E9F24u: goto label_1e9f24;
            case 0x1E9F28u: goto label_1e9f28;
            case 0x1E9F2Cu: goto label_1e9f2c;
            case 0x1E9F30u: goto label_1e9f30;
            case 0x1E9F34u: goto label_1e9f34;
            case 0x1E9F38u: goto label_1e9f38;
            case 0x1E9F3Cu: goto label_1e9f3c;
            case 0x1E9F40u: goto label_1e9f40;
            case 0x1E9F44u: goto label_1e9f44;
            case 0x1E9F48u: goto label_1e9f48;
            case 0x1E9F4Cu: goto label_1e9f4c;
            case 0x1E9F50u: goto label_1e9f50;
            case 0x1E9F54u: goto label_1e9f54;
            case 0x1E9F58u: goto label_1e9f58;
            case 0x1E9F5Cu: goto label_1e9f5c;
            case 0x1E9F60u: goto label_1e9f60;
            case 0x1E9F64u: goto label_1e9f64;
            case 0x1E9F68u: goto label_1e9f68;
            case 0x1E9F6Cu: goto label_1e9f6c;
            case 0x1E9F70u: goto label_1e9f70;
            case 0x1E9F74u: goto label_1e9f74;
            case 0x1E9F78u: goto label_1e9f78;
            case 0x1E9F7Cu: goto label_1e9f7c;
            case 0x1E9F80u: goto label_1e9f80;
            case 0x1E9F84u: goto label_1e9f84;
            case 0x1E9F88u: goto label_1e9f88;
            case 0x1E9F8Cu: goto label_1e9f8c;
            case 0x1E9F90u: goto label_1e9f90;
            case 0x1E9F94u: goto label_1e9f94;
            case 0x1E9F98u: goto label_1e9f98;
            case 0x1E9F9Cu: goto label_1e9f9c;
            case 0x1E9FA0u: goto label_1e9fa0;
            case 0x1E9FA4u: goto label_1e9fa4;
            case 0x1E9FA8u: goto label_1e9fa8;
            case 0x1E9FACu: goto label_1e9fac;
            case 0x1E9FB0u: goto label_1e9fb0;
            case 0x1E9FB4u: goto label_1e9fb4;
            case 0x1E9FB8u: goto label_1e9fb8;
            case 0x1E9FBCu: goto label_1e9fbc;
            case 0x1E9FC0u: goto label_1e9fc0;
            case 0x1E9FC4u: goto label_1e9fc4;
            case 0x1E9FC8u: goto label_1e9fc8;
            case 0x1E9FCCu: goto label_1e9fcc;
            case 0x1E9FD0u: goto label_1e9fd0;
            case 0x1E9FD4u: goto label_1e9fd4;
            case 0x1E9FD8u: goto label_1e9fd8;
            case 0x1E9FDCu: goto label_1e9fdc;
            case 0x1E9FE0u: goto label_1e9fe0;
            case 0x1E9FE4u: goto label_1e9fe4;
            case 0x1E9FE8u: goto label_1e9fe8;
            case 0x1E9FECu: goto label_1e9fec;
            case 0x1E9FF0u: goto label_1e9ff0;
            case 0x1E9FF4u: goto label_1e9ff4;
            case 0x1E9FF8u: goto label_1e9ff8;
            case 0x1E9FFCu: goto label_1e9ffc;
            case 0x1EA000u: goto label_1ea000;
            case 0x1EA004u: goto label_1ea004;
            case 0x1EA008u: goto label_1ea008;
            case 0x1EA00Cu: goto label_1ea00c;
            case 0x1EA010u: goto label_1ea010;
            case 0x1EA014u: goto label_1ea014;
            case 0x1EA018u: goto label_1ea018;
            case 0x1EA01Cu: goto label_1ea01c;
            case 0x1EA020u: goto label_1ea020;
            case 0x1EA024u: goto label_1ea024;
            case 0x1EA028u: goto label_1ea028;
            case 0x1EA02Cu: goto label_1ea02c;
            case 0x1EA030u: goto label_1ea030;
            case 0x1EA034u: goto label_1ea034;
            case 0x1EA038u: goto label_1ea038;
            case 0x1EA03Cu: goto label_1ea03c;
            case 0x1EA040u: goto label_1ea040;
            case 0x1EA044u: goto label_1ea044;
            case 0x1EA048u: goto label_1ea048;
            case 0x1EA04Cu: goto label_1ea04c;
            case 0x1EA050u: goto label_1ea050;
            case 0x1EA054u: goto label_1ea054;
            case 0x1EA058u: goto label_1ea058;
            case 0x1EA05Cu: goto label_1ea05c;
            case 0x1EA060u: goto label_1ea060;
            case 0x1EA064u: goto label_1ea064;
            case 0x1EA068u: goto label_1ea068;
            case 0x1EA06Cu: goto label_1ea06c;
            case 0x1EA070u: goto label_1ea070;
            case 0x1EA074u: goto label_1ea074;
            case 0x1EA078u: goto label_1ea078;
            case 0x1EA07Cu: goto label_1ea07c;
            case 0x1EA080u: goto label_1ea080;
            case 0x1EA084u: goto label_1ea084;
            case 0x1EA088u: goto label_1ea088;
            case 0x1EA08Cu: goto label_1ea08c;
            case 0x1EA090u: goto label_1ea090;
            case 0x1EA094u: goto label_1ea094;
            case 0x1EA098u: goto label_1ea098;
            case 0x1EA09Cu: goto label_1ea09c;
            case 0x1EA0A0u: goto label_1ea0a0;
            case 0x1EA0A4u: goto label_1ea0a4;
            case 0x1EA0A8u: goto label_1ea0a8;
            case 0x1EA0ACu: goto label_1ea0ac;
            case 0x1EA0B0u: goto label_1ea0b0;
            case 0x1EA0B4u: goto label_1ea0b4;
            case 0x1EA0B8u: goto label_1ea0b8;
            case 0x1EA0BCu: goto label_1ea0bc;
            case 0x1EA0C0u: goto label_1ea0c0;
            case 0x1EA0C4u: goto label_1ea0c4;
            case 0x1EA0C8u: goto label_1ea0c8;
            case 0x1EA0CCu: goto label_1ea0cc;
            case 0x1EA0D0u: goto label_1ea0d0;
            case 0x1EA0D4u: goto label_1ea0d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9FCCu; }
            if (ctx->pc != 0x1E9FCCu) { return; }
        }
    }
    ctx->pc = 0x1E9FCCu;
label_1e9fcc:
    // 0x1e9fcc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1e9fd0:
    if (ctx->pc == 0x1E9FD0u) {
        ctx->pc = 0x1E9FD4u;
        goto label_1e9fd4;
    }
    ctx->pc = 0x1E9FCCu;
    {
        const bool branch_taken_0x1e9fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9fcc) {
            ctx->pc = 0x1EA0C8u;
            goto label_1ea0c8;
        }
    }
    ctx->pc = 0x1E9FD4u;
label_1e9fd4:
    // 0x1e9fd4: 0x0  nop
    ctx->pc = 0x1e9fd4u;
    // NOP
label_1e9fd8:
    // 0x1e9fd8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e9fdc:
    // 0x1e9fdc: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1e9fe0:
    if (ctx->pc == 0x1E9FE0u) {
        ctx->pc = 0x1E9FE4u;
        goto label_1e9fe4;
    }
    ctx->pc = 0x1E9FDCu;
    {
        const bool branch_taken_0x1e9fdc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e9fdc) {
            ctx->pc = 0x1EA0A8u;
            goto label_1ea0a8;
        }
    }
    ctx->pc = 0x1E9FE4u;
label_1e9fe4:
    // 0x1e9fe4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e9fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9fe8:
    // 0x1e9fe8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e9fec:
    // 0x1e9fec: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e9fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9ff0:
    // 0x1e9ff0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e9ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e9ff4:
    // 0x1e9ff4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e9ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e9ff8:
    // 0x1e9ff8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e9ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e9ffc:
    // 0x1e9ffc: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1e9ffcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1ea000:
    // 0x1ea000: 0xc053740  jal         func_14DD00
label_1ea004:
    if (ctx->pc == 0x1EA004u) {
        ctx->pc = 0x1EA004u;
            // 0x1ea004: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1EA008u;
        goto label_1ea008;
    }
    ctx->pc = 0x1EA000u;
    SET_GPR_U32(ctx, 31, 0x1EA008u);
    ctx->pc = 0x1EA004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA000u;
            // 0x1ea004: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA008u; }
        if (ctx->pc != 0x1EA008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA008u; }
        if (ctx->pc != 0x1EA008u) { return; }
    }
    ctx->pc = 0x1EA008u;
label_1ea008:
    // 0x1ea008: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ea008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea00c:
    // 0x1ea00c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1ea00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1ea010:
    // 0x1ea010: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ea010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea014:
    // 0x1ea014: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ea014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ea018:
    // 0x1ea018: 0xc05d080  jal         func_174200
label_1ea01c:
    if (ctx->pc == 0x1EA01Cu) {
        ctx->pc = 0x1EA01Cu;
            // 0x1ea01c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1EA020u;
        goto label_1ea020;
    }
    ctx->pc = 0x1EA018u;
    SET_GPR_U32(ctx, 31, 0x1EA020u);
    ctx->pc = 0x1EA01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA018u;
            // 0x1ea01c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA020u; }
        if (ctx->pc != 0x1EA020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA020u; }
        if (ctx->pc != 0x1EA020u) { return; }
    }
    ctx->pc = 0x1EA020u;
label_1ea020:
    // 0x1ea020: 0xc050bb4  jal         func_142ED0
label_1ea024:
    if (ctx->pc == 0x1EA024u) {
        ctx->pc = 0x1EA028u;
        goto label_1ea028;
    }
    ctx->pc = 0x1EA020u;
    SET_GPR_U32(ctx, 31, 0x1EA028u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA028u; }
        if (ctx->pc != 0x1EA028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA028u; }
        if (ctx->pc != 0x1EA028u) { return; }
    }
    ctx->pc = 0x1EA028u;
label_1ea028:
    // 0x1ea028: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ea028u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1ea02c:
    // 0x1ea02c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ea030:
    if (ctx->pc == 0x1EA030u) {
        ctx->pc = 0x1EA034u;
        goto label_1ea034;
    }
    ctx->pc = 0x1EA02Cu;
    {
        const bool branch_taken_0x1ea02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea02c) {
            ctx->pc = 0x1EA050u;
            goto label_1ea050;
        }
    }
    ctx->pc = 0x1EA034u;
label_1ea034:
    // 0x1ea034: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ea034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea038:
    // 0x1ea038: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1ea038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1ea03c:
    // 0x1ea03c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ea03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea040:
    // 0x1ea040: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ea040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ea044:
    // 0x1ea044: 0xc05d080  jal         func_174200
label_1ea048:
    if (ctx->pc == 0x1EA048u) {
        ctx->pc = 0x1EA048u;
            // 0x1ea048: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1EA04Cu;
        goto label_1ea04c;
    }
    ctx->pc = 0x1EA044u;
    SET_GPR_U32(ctx, 31, 0x1EA04Cu);
    ctx->pc = 0x1EA048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA044u;
            // 0x1ea048: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA04Cu; }
        if (ctx->pc != 0x1EA04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA04Cu; }
        if (ctx->pc != 0x1EA04Cu) { return; }
    }
    ctx->pc = 0x1EA04Cu;
label_1ea04c:
    // 0x1ea04c: 0x0  nop
    ctx->pc = 0x1ea04cu;
    // NOP
label_1ea050:
    // 0x1ea050: 0xc050bb4  jal         func_142ED0
label_1ea054:
    if (ctx->pc == 0x1EA054u) {
        ctx->pc = 0x1EA058u;
        goto label_1ea058;
    }
    ctx->pc = 0x1EA050u;
    SET_GPR_U32(ctx, 31, 0x1EA058u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA058u; }
        if (ctx->pc != 0x1EA058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA058u; }
        if (ctx->pc != 0x1EA058u) { return; }
    }
    ctx->pc = 0x1EA058u;
label_1ea058:
    // 0x1ea058: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ea058u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1ea05c:
    // 0x1ea05c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ea060:
    if (ctx->pc == 0x1EA060u) {
        ctx->pc = 0x1EA064u;
        goto label_1ea064;
    }
    ctx->pc = 0x1EA05Cu;
    {
        const bool branch_taken_0x1ea05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea05c) {
            ctx->pc = 0x1EA080u;
            goto label_1ea080;
        }
    }
    ctx->pc = 0x1EA064u;
label_1ea064:
    // 0x1ea064: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ea064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea068:
    // 0x1ea068: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1ea068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1ea06c:
    // 0x1ea06c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ea06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea070:
    // 0x1ea070: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ea070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ea074:
    // 0x1ea074: 0xc05d080  jal         func_174200
label_1ea078:
    if (ctx->pc == 0x1EA078u) {
        ctx->pc = 0x1EA078u;
            // 0x1ea078: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1EA07Cu;
        goto label_1ea07c;
    }
    ctx->pc = 0x1EA074u;
    SET_GPR_U32(ctx, 31, 0x1EA07Cu);
    ctx->pc = 0x1EA078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA074u;
            // 0x1ea078: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA07Cu; }
        if (ctx->pc != 0x1EA07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA07Cu; }
        if (ctx->pc != 0x1EA07Cu) { return; }
    }
    ctx->pc = 0x1EA07Cu;
label_1ea07c:
    // 0x1ea07c: 0x0  nop
    ctx->pc = 0x1ea07cu;
    // NOP
label_1ea080:
    // 0x1ea080: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1ea080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ea084:
    // 0x1ea084: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1ea084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ea088:
    // 0x1ea088: 0xc07b0fc  jal         func_1EC3F0
label_1ea08c:
    if (ctx->pc == 0x1EA08Cu) {
        ctx->pc = 0x1EA08Cu;
            // 0x1ea08c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EA090u;
        goto label_1ea090;
    }
    ctx->pc = 0x1EA088u;
    SET_GPR_U32(ctx, 31, 0x1EA090u);
    ctx->pc = 0x1EA08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA088u;
            // 0x1ea08c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA090u; }
        if (ctx->pc != 0x1EA090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA090u; }
        if (ctx->pc != 0x1EA090u) { return; }
    }
    ctx->pc = 0x1EA090u;
label_1ea090:
    // 0x1ea090: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1ea090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1ea094:
    // 0x1ea094: 0x40f809  jalr        $v0
label_1ea098:
    if (ctx->pc == 0x1EA098u) {
        ctx->pc = 0x1EA098u;
            // 0x1ea098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EA09Cu;
        goto label_1ea09c;
    }
    ctx->pc = 0x1EA094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA09Cu);
        ctx->pc = 0x1EA098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA094u;
            // 0x1ea098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9B60u: goto label_1e9b60;
            case 0x1E9B64u: goto label_1e9b64;
            case 0x1E9B68u: goto label_1e9b68;
            case 0x1E9B6Cu: goto label_1e9b6c;
            case 0x1E9B70u: goto label_1e9b70;
            case 0x1E9B74u: goto label_1e9b74;
            case 0x1E9B78u: goto label_1e9b78;
            case 0x1E9B7Cu: goto label_1e9b7c;
            case 0x1E9B80u: goto label_1e9b80;
            case 0x1E9B84u: goto label_1e9b84;
            case 0x1E9B88u: goto label_1e9b88;
            case 0x1E9B8Cu: goto label_1e9b8c;
            case 0x1E9B90u: goto label_1e9b90;
            case 0x1E9B94u: goto label_1e9b94;
            case 0x1E9B98u: goto label_1e9b98;
            case 0x1E9B9Cu: goto label_1e9b9c;
            case 0x1E9BA0u: goto label_1e9ba0;
            case 0x1E9BA4u: goto label_1e9ba4;
            case 0x1E9BA8u: goto label_1e9ba8;
            case 0x1E9BACu: goto label_1e9bac;
            case 0x1E9BB0u: goto label_1e9bb0;
            case 0x1E9BB4u: goto label_1e9bb4;
            case 0x1E9BB8u: goto label_1e9bb8;
            case 0x1E9BBCu: goto label_1e9bbc;
            case 0x1E9BC0u: goto label_1e9bc0;
            case 0x1E9BC4u: goto label_1e9bc4;
            case 0x1E9BC8u: goto label_1e9bc8;
            case 0x1E9BCCu: goto label_1e9bcc;
            case 0x1E9BD0u: goto label_1e9bd0;
            case 0x1E9BD4u: goto label_1e9bd4;
            case 0x1E9BD8u: goto label_1e9bd8;
            case 0x1E9BDCu: goto label_1e9bdc;
            case 0x1E9BE0u: goto label_1e9be0;
            case 0x1E9BE4u: goto label_1e9be4;
            case 0x1E9BE8u: goto label_1e9be8;
            case 0x1E9BECu: goto label_1e9bec;
            case 0x1E9BF0u: goto label_1e9bf0;
            case 0x1E9BF4u: goto label_1e9bf4;
            case 0x1E9BF8u: goto label_1e9bf8;
            case 0x1E9BFCu: goto label_1e9bfc;
            case 0x1E9C00u: goto label_1e9c00;
            case 0x1E9C04u: goto label_1e9c04;
            case 0x1E9C08u: goto label_1e9c08;
            case 0x1E9C0Cu: goto label_1e9c0c;
            case 0x1E9C10u: goto label_1e9c10;
            case 0x1E9C14u: goto label_1e9c14;
            case 0x1E9C18u: goto label_1e9c18;
            case 0x1E9C1Cu: goto label_1e9c1c;
            case 0x1E9C20u: goto label_1e9c20;
            case 0x1E9C24u: goto label_1e9c24;
            case 0x1E9C28u: goto label_1e9c28;
            case 0x1E9C2Cu: goto label_1e9c2c;
            case 0x1E9C30u: goto label_1e9c30;
            case 0x1E9C34u: goto label_1e9c34;
            case 0x1E9C38u: goto label_1e9c38;
            case 0x1E9C3Cu: goto label_1e9c3c;
            case 0x1E9C40u: goto label_1e9c40;
            case 0x1E9C44u: goto label_1e9c44;
            case 0x1E9C48u: goto label_1e9c48;
            case 0x1E9C4Cu: goto label_1e9c4c;
            case 0x1E9C50u: goto label_1e9c50;
            case 0x1E9C54u: goto label_1e9c54;
            case 0x1E9C58u: goto label_1e9c58;
            case 0x1E9C5Cu: goto label_1e9c5c;
            case 0x1E9C60u: goto label_1e9c60;
            case 0x1E9C64u: goto label_1e9c64;
            case 0x1E9C68u: goto label_1e9c68;
            case 0x1E9C6Cu: goto label_1e9c6c;
            case 0x1E9C70u: goto label_1e9c70;
            case 0x1E9C74u: goto label_1e9c74;
            case 0x1E9C78u: goto label_1e9c78;
            case 0x1E9C7Cu: goto label_1e9c7c;
            case 0x1E9C80u: goto label_1e9c80;
            case 0x1E9C84u: goto label_1e9c84;
            case 0x1E9C88u: goto label_1e9c88;
            case 0x1E9C8Cu: goto label_1e9c8c;
            case 0x1E9C90u: goto label_1e9c90;
            case 0x1E9C94u: goto label_1e9c94;
            case 0x1E9C98u: goto label_1e9c98;
            case 0x1E9C9Cu: goto label_1e9c9c;
            case 0x1E9CA0u: goto label_1e9ca0;
            case 0x1E9CA4u: goto label_1e9ca4;
            case 0x1E9CA8u: goto label_1e9ca8;
            case 0x1E9CACu: goto label_1e9cac;
            case 0x1E9CB0u: goto label_1e9cb0;
            case 0x1E9CB4u: goto label_1e9cb4;
            case 0x1E9CB8u: goto label_1e9cb8;
            case 0x1E9CBCu: goto label_1e9cbc;
            case 0x1E9CC0u: goto label_1e9cc0;
            case 0x1E9CC4u: goto label_1e9cc4;
            case 0x1E9CC8u: goto label_1e9cc8;
            case 0x1E9CCCu: goto label_1e9ccc;
            case 0x1E9CD0u: goto label_1e9cd0;
            case 0x1E9CD4u: goto label_1e9cd4;
            case 0x1E9CD8u: goto label_1e9cd8;
            case 0x1E9CDCu: goto label_1e9cdc;
            case 0x1E9CE0u: goto label_1e9ce0;
            case 0x1E9CE4u: goto label_1e9ce4;
            case 0x1E9CE8u: goto label_1e9ce8;
            case 0x1E9CECu: goto label_1e9cec;
            case 0x1E9CF0u: goto label_1e9cf0;
            case 0x1E9CF4u: goto label_1e9cf4;
            case 0x1E9CF8u: goto label_1e9cf8;
            case 0x1E9CFCu: goto label_1e9cfc;
            case 0x1E9D00u: goto label_1e9d00;
            case 0x1E9D04u: goto label_1e9d04;
            case 0x1E9D08u: goto label_1e9d08;
            case 0x1E9D0Cu: goto label_1e9d0c;
            case 0x1E9D10u: goto label_1e9d10;
            case 0x1E9D14u: goto label_1e9d14;
            case 0x1E9D18u: goto label_1e9d18;
            case 0x1E9D1Cu: goto label_1e9d1c;
            case 0x1E9D20u: goto label_1e9d20;
            case 0x1E9D24u: goto label_1e9d24;
            case 0x1E9D28u: goto label_1e9d28;
            case 0x1E9D2Cu: goto label_1e9d2c;
            case 0x1E9D30u: goto label_1e9d30;
            case 0x1E9D34u: goto label_1e9d34;
            case 0x1E9D38u: goto label_1e9d38;
            case 0x1E9D3Cu: goto label_1e9d3c;
            case 0x1E9D40u: goto label_1e9d40;
            case 0x1E9D44u: goto label_1e9d44;
            case 0x1E9D48u: goto label_1e9d48;
            case 0x1E9D4Cu: goto label_1e9d4c;
            case 0x1E9D50u: goto label_1e9d50;
            case 0x1E9D54u: goto label_1e9d54;
            case 0x1E9D58u: goto label_1e9d58;
            case 0x1E9D5Cu: goto label_1e9d5c;
            case 0x1E9D60u: goto label_1e9d60;
            case 0x1E9D64u: goto label_1e9d64;
            case 0x1E9D68u: goto label_1e9d68;
            case 0x1E9D6Cu: goto label_1e9d6c;
            case 0x1E9D70u: goto label_1e9d70;
            case 0x1E9D74u: goto label_1e9d74;
            case 0x1E9D78u: goto label_1e9d78;
            case 0x1E9D7Cu: goto label_1e9d7c;
            case 0x1E9D80u: goto label_1e9d80;
            case 0x1E9D84u: goto label_1e9d84;
            case 0x1E9D88u: goto label_1e9d88;
            case 0x1E9D8Cu: goto label_1e9d8c;
            case 0x1E9D90u: goto label_1e9d90;
            case 0x1E9D94u: goto label_1e9d94;
            case 0x1E9D98u: goto label_1e9d98;
            case 0x1E9D9Cu: goto label_1e9d9c;
            case 0x1E9DA0u: goto label_1e9da0;
            case 0x1E9DA4u: goto label_1e9da4;
            case 0x1E9DA8u: goto label_1e9da8;
            case 0x1E9DACu: goto label_1e9dac;
            case 0x1E9DB0u: goto label_1e9db0;
            case 0x1E9DB4u: goto label_1e9db4;
            case 0x1E9DB8u: goto label_1e9db8;
            case 0x1E9DBCu: goto label_1e9dbc;
            case 0x1E9DC0u: goto label_1e9dc0;
            case 0x1E9DC4u: goto label_1e9dc4;
            case 0x1E9DC8u: goto label_1e9dc8;
            case 0x1E9DCCu: goto label_1e9dcc;
            case 0x1E9DD0u: goto label_1e9dd0;
            case 0x1E9DD4u: goto label_1e9dd4;
            case 0x1E9DD8u: goto label_1e9dd8;
            case 0x1E9DDCu: goto label_1e9ddc;
            case 0x1E9DE0u: goto label_1e9de0;
            case 0x1E9DE4u: goto label_1e9de4;
            case 0x1E9DE8u: goto label_1e9de8;
            case 0x1E9DECu: goto label_1e9dec;
            case 0x1E9DF0u: goto label_1e9df0;
            case 0x1E9DF4u: goto label_1e9df4;
            case 0x1E9DF8u: goto label_1e9df8;
            case 0x1E9DFCu: goto label_1e9dfc;
            case 0x1E9E00u: goto label_1e9e00;
            case 0x1E9E04u: goto label_1e9e04;
            case 0x1E9E08u: goto label_1e9e08;
            case 0x1E9E0Cu: goto label_1e9e0c;
            case 0x1E9E10u: goto label_1e9e10;
            case 0x1E9E14u: goto label_1e9e14;
            case 0x1E9E18u: goto label_1e9e18;
            case 0x1E9E1Cu: goto label_1e9e1c;
            case 0x1E9E20u: goto label_1e9e20;
            case 0x1E9E24u: goto label_1e9e24;
            case 0x1E9E28u: goto label_1e9e28;
            case 0x1E9E2Cu: goto label_1e9e2c;
            case 0x1E9E30u: goto label_1e9e30;
            case 0x1E9E34u: goto label_1e9e34;
            case 0x1E9E38u: goto label_1e9e38;
            case 0x1E9E3Cu: goto label_1e9e3c;
            case 0x1E9E40u: goto label_1e9e40;
            case 0x1E9E44u: goto label_1e9e44;
            case 0x1E9E48u: goto label_1e9e48;
            case 0x1E9E4Cu: goto label_1e9e4c;
            case 0x1E9E50u: goto label_1e9e50;
            case 0x1E9E54u: goto label_1e9e54;
            case 0x1E9E58u: goto label_1e9e58;
            case 0x1E9E5Cu: goto label_1e9e5c;
            case 0x1E9E60u: goto label_1e9e60;
            case 0x1E9E64u: goto label_1e9e64;
            case 0x1E9E68u: goto label_1e9e68;
            case 0x1E9E6Cu: goto label_1e9e6c;
            case 0x1E9E70u: goto label_1e9e70;
            case 0x1E9E74u: goto label_1e9e74;
            case 0x1E9E78u: goto label_1e9e78;
            case 0x1E9E7Cu: goto label_1e9e7c;
            case 0x1E9E80u: goto label_1e9e80;
            case 0x1E9E84u: goto label_1e9e84;
            case 0x1E9E88u: goto label_1e9e88;
            case 0x1E9E8Cu: goto label_1e9e8c;
            case 0x1E9E90u: goto label_1e9e90;
            case 0x1E9E94u: goto label_1e9e94;
            case 0x1E9E98u: goto label_1e9e98;
            case 0x1E9E9Cu: goto label_1e9e9c;
            case 0x1E9EA0u: goto label_1e9ea0;
            case 0x1E9EA4u: goto label_1e9ea4;
            case 0x1E9EA8u: goto label_1e9ea8;
            case 0x1E9EACu: goto label_1e9eac;
            case 0x1E9EB0u: goto label_1e9eb0;
            case 0x1E9EB4u: goto label_1e9eb4;
            case 0x1E9EB8u: goto label_1e9eb8;
            case 0x1E9EBCu: goto label_1e9ebc;
            case 0x1E9EC0u: goto label_1e9ec0;
            case 0x1E9EC4u: goto label_1e9ec4;
            case 0x1E9EC8u: goto label_1e9ec8;
            case 0x1E9ECCu: goto label_1e9ecc;
            case 0x1E9ED0u: goto label_1e9ed0;
            case 0x1E9ED4u: goto label_1e9ed4;
            case 0x1E9ED8u: goto label_1e9ed8;
            case 0x1E9EDCu: goto label_1e9edc;
            case 0x1E9EE0u: goto label_1e9ee0;
            case 0x1E9EE4u: goto label_1e9ee4;
            case 0x1E9EE8u: goto label_1e9ee8;
            case 0x1E9EECu: goto label_1e9eec;
            case 0x1E9EF0u: goto label_1e9ef0;
            case 0x1E9EF4u: goto label_1e9ef4;
            case 0x1E9EF8u: goto label_1e9ef8;
            case 0x1E9EFCu: goto label_1e9efc;
            case 0x1E9F00u: goto label_1e9f00;
            case 0x1E9F04u: goto label_1e9f04;
            case 0x1E9F08u: goto label_1e9f08;
            case 0x1E9F0Cu: goto label_1e9f0c;
            case 0x1E9F10u: goto label_1e9f10;
            case 0x1E9F14u: goto label_1e9f14;
            case 0x1E9F18u: goto label_1e9f18;
            case 0x1E9F1Cu: goto label_1e9f1c;
            case 0x1E9F20u: goto label_1e9f20;
            case 0x1E9F24u: goto label_1e9f24;
            case 0x1E9F28u: goto label_1e9f28;
            case 0x1E9F2Cu: goto label_1e9f2c;
            case 0x1E9F30u: goto label_1e9f30;
            case 0x1E9F34u: goto label_1e9f34;
            case 0x1E9F38u: goto label_1e9f38;
            case 0x1E9F3Cu: goto label_1e9f3c;
            case 0x1E9F40u: goto label_1e9f40;
            case 0x1E9F44u: goto label_1e9f44;
            case 0x1E9F48u: goto label_1e9f48;
            case 0x1E9F4Cu: goto label_1e9f4c;
            case 0x1E9F50u: goto label_1e9f50;
            case 0x1E9F54u: goto label_1e9f54;
            case 0x1E9F58u: goto label_1e9f58;
            case 0x1E9F5Cu: goto label_1e9f5c;
            case 0x1E9F60u: goto label_1e9f60;
            case 0x1E9F64u: goto label_1e9f64;
            case 0x1E9F68u: goto label_1e9f68;
            case 0x1E9F6Cu: goto label_1e9f6c;
            case 0x1E9F70u: goto label_1e9f70;
            case 0x1E9F74u: goto label_1e9f74;
            case 0x1E9F78u: goto label_1e9f78;
            case 0x1E9F7Cu: goto label_1e9f7c;
            case 0x1E9F80u: goto label_1e9f80;
            case 0x1E9F84u: goto label_1e9f84;
            case 0x1E9F88u: goto label_1e9f88;
            case 0x1E9F8Cu: goto label_1e9f8c;
            case 0x1E9F90u: goto label_1e9f90;
            case 0x1E9F94u: goto label_1e9f94;
            case 0x1E9F98u: goto label_1e9f98;
            case 0x1E9F9Cu: goto label_1e9f9c;
            case 0x1E9FA0u: goto label_1e9fa0;
            case 0x1E9FA4u: goto label_1e9fa4;
            case 0x1E9FA8u: goto label_1e9fa8;
            case 0x1E9FACu: goto label_1e9fac;
            case 0x1E9FB0u: goto label_1e9fb0;
            case 0x1E9FB4u: goto label_1e9fb4;
            case 0x1E9FB8u: goto label_1e9fb8;
            case 0x1E9FBCu: goto label_1e9fbc;
            case 0x1E9FC0u: goto label_1e9fc0;
            case 0x1E9FC4u: goto label_1e9fc4;
            case 0x1E9FC8u: goto label_1e9fc8;
            case 0x1E9FCCu: goto label_1e9fcc;
            case 0x1E9FD0u: goto label_1e9fd0;
            case 0x1E9FD4u: goto label_1e9fd4;
            case 0x1E9FD8u: goto label_1e9fd8;
            case 0x1E9FDCu: goto label_1e9fdc;
            case 0x1E9FE0u: goto label_1e9fe0;
            case 0x1E9FE4u: goto label_1e9fe4;
            case 0x1E9FE8u: goto label_1e9fe8;
            case 0x1E9FECu: goto label_1e9fec;
            case 0x1E9FF0u: goto label_1e9ff0;
            case 0x1E9FF4u: goto label_1e9ff4;
            case 0x1E9FF8u: goto label_1e9ff8;
            case 0x1E9FFCu: goto label_1e9ffc;
            case 0x1EA000u: goto label_1ea000;
            case 0x1EA004u: goto label_1ea004;
            case 0x1EA008u: goto label_1ea008;
            case 0x1EA00Cu: goto label_1ea00c;
            case 0x1EA010u: goto label_1ea010;
            case 0x1EA014u: goto label_1ea014;
            case 0x1EA018u: goto label_1ea018;
            case 0x1EA01Cu: goto label_1ea01c;
            case 0x1EA020u: goto label_1ea020;
            case 0x1EA024u: goto label_1ea024;
            case 0x1EA028u: goto label_1ea028;
            case 0x1EA02Cu: goto label_1ea02c;
            case 0x1EA030u: goto label_1ea030;
            case 0x1EA034u: goto label_1ea034;
            case 0x1EA038u: goto label_1ea038;
            case 0x1EA03Cu: goto label_1ea03c;
            case 0x1EA040u: goto label_1ea040;
            case 0x1EA044u: goto label_1ea044;
            case 0x1EA048u: goto label_1ea048;
            case 0x1EA04Cu: goto label_1ea04c;
            case 0x1EA050u: goto label_1ea050;
            case 0x1EA054u: goto label_1ea054;
            case 0x1EA058u: goto label_1ea058;
            case 0x1EA05Cu: goto label_1ea05c;
            case 0x1EA060u: goto label_1ea060;
            case 0x1EA064u: goto label_1ea064;
            case 0x1EA068u: goto label_1ea068;
            case 0x1EA06Cu: goto label_1ea06c;
            case 0x1EA070u: goto label_1ea070;
            case 0x1EA074u: goto label_1ea074;
            case 0x1EA078u: goto label_1ea078;
            case 0x1EA07Cu: goto label_1ea07c;
            case 0x1EA080u: goto label_1ea080;
            case 0x1EA084u: goto label_1ea084;
            case 0x1EA088u: goto label_1ea088;
            case 0x1EA08Cu: goto label_1ea08c;
            case 0x1EA090u: goto label_1ea090;
            case 0x1EA094u: goto label_1ea094;
            case 0x1EA098u: goto label_1ea098;
            case 0x1EA09Cu: goto label_1ea09c;
            case 0x1EA0A0u: goto label_1ea0a0;
            case 0x1EA0A4u: goto label_1ea0a4;
            case 0x1EA0A8u: goto label_1ea0a8;
            case 0x1EA0ACu: goto label_1ea0ac;
            case 0x1EA0B0u: goto label_1ea0b0;
            case 0x1EA0B4u: goto label_1ea0b4;
            case 0x1EA0B8u: goto label_1ea0b8;
            case 0x1EA0BCu: goto label_1ea0bc;
            case 0x1EA0C0u: goto label_1ea0c0;
            case 0x1EA0C4u: goto label_1ea0c4;
            case 0x1EA0C8u: goto label_1ea0c8;
            case 0x1EA0CCu: goto label_1ea0cc;
            case 0x1EA0D0u: goto label_1ea0d0;
            case 0x1EA0D4u: goto label_1ea0d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EA09Cu; }
            if (ctx->pc != 0x1EA09Cu) { return; }
        }
    }
    ctx->pc = 0x1EA09Cu;
label_1ea09c:
    // 0x1ea09c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ea0a0:
    if (ctx->pc == 0x1EA0A0u) {
        ctx->pc = 0x1EA0A4u;
        goto label_1ea0a4;
    }
    ctx->pc = 0x1EA09Cu;
    {
        const bool branch_taken_0x1ea09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea09c) {
            ctx->pc = 0x1EA0C8u;
            goto label_1ea0c8;
        }
    }
    ctx->pc = 0x1EA0A4u;
label_1ea0a4:
    // 0x1ea0a4: 0x0  nop
    ctx->pc = 0x1ea0a4u;
    // NOP
label_1ea0a8:
    // 0x1ea0a8: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1ea0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
label_1ea0ac:
    // 0x1ea0ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ea0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ea0b0:
    // 0x1ea0b0: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1ea0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1ea0b4:
    // 0x1ea0b4: 0x24c69930  addiu       $a2, $a2, -0x66D0
    ctx->pc = 0x1ea0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940976));
label_1ea0b8:
    // 0x1ea0b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ea0b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0bc:
    // 0x1ea0bc: 0xc053ca4  jal         func_14F290
label_1ea0c0:
    if (ctx->pc == 0x1EA0C0u) {
        ctx->pc = 0x1EA0C0u;
            // 0x1ea0c0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EA0C4u;
        goto label_1ea0c4;
    }
    ctx->pc = 0x1EA0BCu;
    SET_GPR_U32(ctx, 31, 0x1EA0C4u);
    ctx->pc = 0x1EA0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA0BCu;
            // 0x1ea0c0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA0C4u; }
        if (ctx->pc != 0x1EA0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA0C4u; }
        if (ctx->pc != 0x1EA0C4u) { return; }
    }
    ctx->pc = 0x1EA0C4u;
label_1ea0c4:
    // 0x1ea0c4: 0x0  nop
    ctx->pc = 0x1ea0c4u;
    // NOP
label_1ea0c8:
    // 0x1ea0c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ea0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea0cc:
    // 0x1ea0cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea0d0:
    // 0x1ea0d0: 0x3e00008  jr          $ra
label_1ea0d4:
    if (ctx->pc == 0x1EA0D4u) {
        ctx->pc = 0x1EA0D4u;
            // 0x1ea0d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1EA0D8u;
        goto label_fallthrough_0x1ea0d0;
    }
    ctx->pc = 0x1EA0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA0D0u;
            // 0x1ea0d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9B60u: goto label_1e9b60;
            case 0x1E9B64u: goto label_1e9b64;
            case 0x1E9B68u: goto label_1e9b68;
            case 0x1E9B6Cu: goto label_1e9b6c;
            case 0x1E9B70u: goto label_1e9b70;
            case 0x1E9B74u: goto label_1e9b74;
            case 0x1E9B78u: goto label_1e9b78;
            case 0x1E9B7Cu: goto label_1e9b7c;
            case 0x1E9B80u: goto label_1e9b80;
            case 0x1E9B84u: goto label_1e9b84;
            case 0x1E9B88u: goto label_1e9b88;
            case 0x1E9B8Cu: goto label_1e9b8c;
            case 0x1E9B90u: goto label_1e9b90;
            case 0x1E9B94u: goto label_1e9b94;
            case 0x1E9B98u: goto label_1e9b98;
            case 0x1E9B9Cu: goto label_1e9b9c;
            case 0x1E9BA0u: goto label_1e9ba0;
            case 0x1E9BA4u: goto label_1e9ba4;
            case 0x1E9BA8u: goto label_1e9ba8;
            case 0x1E9BACu: goto label_1e9bac;
            case 0x1E9BB0u: goto label_1e9bb0;
            case 0x1E9BB4u: goto label_1e9bb4;
            case 0x1E9BB8u: goto label_1e9bb8;
            case 0x1E9BBCu: goto label_1e9bbc;
            case 0x1E9BC0u: goto label_1e9bc0;
            case 0x1E9BC4u: goto label_1e9bc4;
            case 0x1E9BC8u: goto label_1e9bc8;
            case 0x1E9BCCu: goto label_1e9bcc;
            case 0x1E9BD0u: goto label_1e9bd0;
            case 0x1E9BD4u: goto label_1e9bd4;
            case 0x1E9BD8u: goto label_1e9bd8;
            case 0x1E9BDCu: goto label_1e9bdc;
            case 0x1E9BE0u: goto label_1e9be0;
            case 0x1E9BE4u: goto label_1e9be4;
            case 0x1E9BE8u: goto label_1e9be8;
            case 0x1E9BECu: goto label_1e9bec;
            case 0x1E9BF0u: goto label_1e9bf0;
            case 0x1E9BF4u: goto label_1e9bf4;
            case 0x1E9BF8u: goto label_1e9bf8;
            case 0x1E9BFCu: goto label_1e9bfc;
            case 0x1E9C00u: goto label_1e9c00;
            case 0x1E9C04u: goto label_1e9c04;
            case 0x1E9C08u: goto label_1e9c08;
            case 0x1E9C0Cu: goto label_1e9c0c;
            case 0x1E9C10u: goto label_1e9c10;
            case 0x1E9C14u: goto label_1e9c14;
            case 0x1E9C18u: goto label_1e9c18;
            case 0x1E9C1Cu: goto label_1e9c1c;
            case 0x1E9C20u: goto label_1e9c20;
            case 0x1E9C24u: goto label_1e9c24;
            case 0x1E9C28u: goto label_1e9c28;
            case 0x1E9C2Cu: goto label_1e9c2c;
            case 0x1E9C30u: goto label_1e9c30;
            case 0x1E9C34u: goto label_1e9c34;
            case 0x1E9C38u: goto label_1e9c38;
            case 0x1E9C3Cu: goto label_1e9c3c;
            case 0x1E9C40u: goto label_1e9c40;
            case 0x1E9C44u: goto label_1e9c44;
            case 0x1E9C48u: goto label_1e9c48;
            case 0x1E9C4Cu: goto label_1e9c4c;
            case 0x1E9C50u: goto label_1e9c50;
            case 0x1E9C54u: goto label_1e9c54;
            case 0x1E9C58u: goto label_1e9c58;
            case 0x1E9C5Cu: goto label_1e9c5c;
            case 0x1E9C60u: goto label_1e9c60;
            case 0x1E9C64u: goto label_1e9c64;
            case 0x1E9C68u: goto label_1e9c68;
            case 0x1E9C6Cu: goto label_1e9c6c;
            case 0x1E9C70u: goto label_1e9c70;
            case 0x1E9C74u: goto label_1e9c74;
            case 0x1E9C78u: goto label_1e9c78;
            case 0x1E9C7Cu: goto label_1e9c7c;
            case 0x1E9C80u: goto label_1e9c80;
            case 0x1E9C84u: goto label_1e9c84;
            case 0x1E9C88u: goto label_1e9c88;
            case 0x1E9C8Cu: goto label_1e9c8c;
            case 0x1E9C90u: goto label_1e9c90;
            case 0x1E9C94u: goto label_1e9c94;
            case 0x1E9C98u: goto label_1e9c98;
            case 0x1E9C9Cu: goto label_1e9c9c;
            case 0x1E9CA0u: goto label_1e9ca0;
            case 0x1E9CA4u: goto label_1e9ca4;
            case 0x1E9CA8u: goto label_1e9ca8;
            case 0x1E9CACu: goto label_1e9cac;
            case 0x1E9CB0u: goto label_1e9cb0;
            case 0x1E9CB4u: goto label_1e9cb4;
            case 0x1E9CB8u: goto label_1e9cb8;
            case 0x1E9CBCu: goto label_1e9cbc;
            case 0x1E9CC0u: goto label_1e9cc0;
            case 0x1E9CC4u: goto label_1e9cc4;
            case 0x1E9CC8u: goto label_1e9cc8;
            case 0x1E9CCCu: goto label_1e9ccc;
            case 0x1E9CD0u: goto label_1e9cd0;
            case 0x1E9CD4u: goto label_1e9cd4;
            case 0x1E9CD8u: goto label_1e9cd8;
            case 0x1E9CDCu: goto label_1e9cdc;
            case 0x1E9CE0u: goto label_1e9ce0;
            case 0x1E9CE4u: goto label_1e9ce4;
            case 0x1E9CE8u: goto label_1e9ce8;
            case 0x1E9CECu: goto label_1e9cec;
            case 0x1E9CF0u: goto label_1e9cf0;
            case 0x1E9CF4u: goto label_1e9cf4;
            case 0x1E9CF8u: goto label_1e9cf8;
            case 0x1E9CFCu: goto label_1e9cfc;
            case 0x1E9D00u: goto label_1e9d00;
            case 0x1E9D04u: goto label_1e9d04;
            case 0x1E9D08u: goto label_1e9d08;
            case 0x1E9D0Cu: goto label_1e9d0c;
            case 0x1E9D10u: goto label_1e9d10;
            case 0x1E9D14u: goto label_1e9d14;
            case 0x1E9D18u: goto label_1e9d18;
            case 0x1E9D1Cu: goto label_1e9d1c;
            case 0x1E9D20u: goto label_1e9d20;
            case 0x1E9D24u: goto label_1e9d24;
            case 0x1E9D28u: goto label_1e9d28;
            case 0x1E9D2Cu: goto label_1e9d2c;
            case 0x1E9D30u: goto label_1e9d30;
            case 0x1E9D34u: goto label_1e9d34;
            case 0x1E9D38u: goto label_1e9d38;
            case 0x1E9D3Cu: goto label_1e9d3c;
            case 0x1E9D40u: goto label_1e9d40;
            case 0x1E9D44u: goto label_1e9d44;
            case 0x1E9D48u: goto label_1e9d48;
            case 0x1E9D4Cu: goto label_1e9d4c;
            case 0x1E9D50u: goto label_1e9d50;
            case 0x1E9D54u: goto label_1e9d54;
            case 0x1E9D58u: goto label_1e9d58;
            case 0x1E9D5Cu: goto label_1e9d5c;
            case 0x1E9D60u: goto label_1e9d60;
            case 0x1E9D64u: goto label_1e9d64;
            case 0x1E9D68u: goto label_1e9d68;
            case 0x1E9D6Cu: goto label_1e9d6c;
            case 0x1E9D70u: goto label_1e9d70;
            case 0x1E9D74u: goto label_1e9d74;
            case 0x1E9D78u: goto label_1e9d78;
            case 0x1E9D7Cu: goto label_1e9d7c;
            case 0x1E9D80u: goto label_1e9d80;
            case 0x1E9D84u: goto label_1e9d84;
            case 0x1E9D88u: goto label_1e9d88;
            case 0x1E9D8Cu: goto label_1e9d8c;
            case 0x1E9D90u: goto label_1e9d90;
            case 0x1E9D94u: goto label_1e9d94;
            case 0x1E9D98u: goto label_1e9d98;
            case 0x1E9D9Cu: goto label_1e9d9c;
            case 0x1E9DA0u: goto label_1e9da0;
            case 0x1E9DA4u: goto label_1e9da4;
            case 0x1E9DA8u: goto label_1e9da8;
            case 0x1E9DACu: goto label_1e9dac;
            case 0x1E9DB0u: goto label_1e9db0;
            case 0x1E9DB4u: goto label_1e9db4;
            case 0x1E9DB8u: goto label_1e9db8;
            case 0x1E9DBCu: goto label_1e9dbc;
            case 0x1E9DC0u: goto label_1e9dc0;
            case 0x1E9DC4u: goto label_1e9dc4;
            case 0x1E9DC8u: goto label_1e9dc8;
            case 0x1E9DCCu: goto label_1e9dcc;
            case 0x1E9DD0u: goto label_1e9dd0;
            case 0x1E9DD4u: goto label_1e9dd4;
            case 0x1E9DD8u: goto label_1e9dd8;
            case 0x1E9DDCu: goto label_1e9ddc;
            case 0x1E9DE0u: goto label_1e9de0;
            case 0x1E9DE4u: goto label_1e9de4;
            case 0x1E9DE8u: goto label_1e9de8;
            case 0x1E9DECu: goto label_1e9dec;
            case 0x1E9DF0u: goto label_1e9df0;
            case 0x1E9DF4u: goto label_1e9df4;
            case 0x1E9DF8u: goto label_1e9df8;
            case 0x1E9DFCu: goto label_1e9dfc;
            case 0x1E9E00u: goto label_1e9e00;
            case 0x1E9E04u: goto label_1e9e04;
            case 0x1E9E08u: goto label_1e9e08;
            case 0x1E9E0Cu: goto label_1e9e0c;
            case 0x1E9E10u: goto label_1e9e10;
            case 0x1E9E14u: goto label_1e9e14;
            case 0x1E9E18u: goto label_1e9e18;
            case 0x1E9E1Cu: goto label_1e9e1c;
            case 0x1E9E20u: goto label_1e9e20;
            case 0x1E9E24u: goto label_1e9e24;
            case 0x1E9E28u: goto label_1e9e28;
            case 0x1E9E2Cu: goto label_1e9e2c;
            case 0x1E9E30u: goto label_1e9e30;
            case 0x1E9E34u: goto label_1e9e34;
            case 0x1E9E38u: goto label_1e9e38;
            case 0x1E9E3Cu: goto label_1e9e3c;
            case 0x1E9E40u: goto label_1e9e40;
            case 0x1E9E44u: goto label_1e9e44;
            case 0x1E9E48u: goto label_1e9e48;
            case 0x1E9E4Cu: goto label_1e9e4c;
            case 0x1E9E50u: goto label_1e9e50;
            case 0x1E9E54u: goto label_1e9e54;
            case 0x1E9E58u: goto label_1e9e58;
            case 0x1E9E5Cu: goto label_1e9e5c;
            case 0x1E9E60u: goto label_1e9e60;
            case 0x1E9E64u: goto label_1e9e64;
            case 0x1E9E68u: goto label_1e9e68;
            case 0x1E9E6Cu: goto label_1e9e6c;
            case 0x1E9E70u: goto label_1e9e70;
            case 0x1E9E74u: goto label_1e9e74;
            case 0x1E9E78u: goto label_1e9e78;
            case 0x1E9E7Cu: goto label_1e9e7c;
            case 0x1E9E80u: goto label_1e9e80;
            case 0x1E9E84u: goto label_1e9e84;
            case 0x1E9E88u: goto label_1e9e88;
            case 0x1E9E8Cu: goto label_1e9e8c;
            case 0x1E9E90u: goto label_1e9e90;
            case 0x1E9E94u: goto label_1e9e94;
            case 0x1E9E98u: goto label_1e9e98;
            case 0x1E9E9Cu: goto label_1e9e9c;
            case 0x1E9EA0u: goto label_1e9ea0;
            case 0x1E9EA4u: goto label_1e9ea4;
            case 0x1E9EA8u: goto label_1e9ea8;
            case 0x1E9EACu: goto label_1e9eac;
            case 0x1E9EB0u: goto label_1e9eb0;
            case 0x1E9EB4u: goto label_1e9eb4;
            case 0x1E9EB8u: goto label_1e9eb8;
            case 0x1E9EBCu: goto label_1e9ebc;
            case 0x1E9EC0u: goto label_1e9ec0;
            case 0x1E9EC4u: goto label_1e9ec4;
            case 0x1E9EC8u: goto label_1e9ec8;
            case 0x1E9ECCu: goto label_1e9ecc;
            case 0x1E9ED0u: goto label_1e9ed0;
            case 0x1E9ED4u: goto label_1e9ed4;
            case 0x1E9ED8u: goto label_1e9ed8;
            case 0x1E9EDCu: goto label_1e9edc;
            case 0x1E9EE0u: goto label_1e9ee0;
            case 0x1E9EE4u: goto label_1e9ee4;
            case 0x1E9EE8u: goto label_1e9ee8;
            case 0x1E9EECu: goto label_1e9eec;
            case 0x1E9EF0u: goto label_1e9ef0;
            case 0x1E9EF4u: goto label_1e9ef4;
            case 0x1E9EF8u: goto label_1e9ef8;
            case 0x1E9EFCu: goto label_1e9efc;
            case 0x1E9F00u: goto label_1e9f00;
            case 0x1E9F04u: goto label_1e9f04;
            case 0x1E9F08u: goto label_1e9f08;
            case 0x1E9F0Cu: goto label_1e9f0c;
            case 0x1E9F10u: goto label_1e9f10;
            case 0x1E9F14u: goto label_1e9f14;
            case 0x1E9F18u: goto label_1e9f18;
            case 0x1E9F1Cu: goto label_1e9f1c;
            case 0x1E9F20u: goto label_1e9f20;
            case 0x1E9F24u: goto label_1e9f24;
            case 0x1E9F28u: goto label_1e9f28;
            case 0x1E9F2Cu: goto label_1e9f2c;
            case 0x1E9F30u: goto label_1e9f30;
            case 0x1E9F34u: goto label_1e9f34;
            case 0x1E9F38u: goto label_1e9f38;
            case 0x1E9F3Cu: goto label_1e9f3c;
            case 0x1E9F40u: goto label_1e9f40;
            case 0x1E9F44u: goto label_1e9f44;
            case 0x1E9F48u: goto label_1e9f48;
            case 0x1E9F4Cu: goto label_1e9f4c;
            case 0x1E9F50u: goto label_1e9f50;
            case 0x1E9F54u: goto label_1e9f54;
            case 0x1E9F58u: goto label_1e9f58;
            case 0x1E9F5Cu: goto label_1e9f5c;
            case 0x1E9F60u: goto label_1e9f60;
            case 0x1E9F64u: goto label_1e9f64;
            case 0x1E9F68u: goto label_1e9f68;
            case 0x1E9F6Cu: goto label_1e9f6c;
            case 0x1E9F70u: goto label_1e9f70;
            case 0x1E9F74u: goto label_1e9f74;
            case 0x1E9F78u: goto label_1e9f78;
            case 0x1E9F7Cu: goto label_1e9f7c;
            case 0x1E9F80u: goto label_1e9f80;
            case 0x1E9F84u: goto label_1e9f84;
            case 0x1E9F88u: goto label_1e9f88;
            case 0x1E9F8Cu: goto label_1e9f8c;
            case 0x1E9F90u: goto label_1e9f90;
            case 0x1E9F94u: goto label_1e9f94;
            case 0x1E9F98u: goto label_1e9f98;
            case 0x1E9F9Cu: goto label_1e9f9c;
            case 0x1E9FA0u: goto label_1e9fa0;
            case 0x1E9FA4u: goto label_1e9fa4;
            case 0x1E9FA8u: goto label_1e9fa8;
            case 0x1E9FACu: goto label_1e9fac;
            case 0x1E9FB0u: goto label_1e9fb0;
            case 0x1E9FB4u: goto label_1e9fb4;
            case 0x1E9FB8u: goto label_1e9fb8;
            case 0x1E9FBCu: goto label_1e9fbc;
            case 0x1E9FC0u: goto label_1e9fc0;
            case 0x1E9FC4u: goto label_1e9fc4;
            case 0x1E9FC8u: goto label_1e9fc8;
            case 0x1E9FCCu: goto label_1e9fcc;
            case 0x1E9FD0u: goto label_1e9fd0;
            case 0x1E9FD4u: goto label_1e9fd4;
            case 0x1E9FD8u: goto label_1e9fd8;
            case 0x1E9FDCu: goto label_1e9fdc;
            case 0x1E9FE0u: goto label_1e9fe0;
            case 0x1E9FE4u: goto label_1e9fe4;
            case 0x1E9FE8u: goto label_1e9fe8;
            case 0x1E9FECu: goto label_1e9fec;
            case 0x1E9FF0u: goto label_1e9ff0;
            case 0x1E9FF4u: goto label_1e9ff4;
            case 0x1E9FF8u: goto label_1e9ff8;
            case 0x1E9FFCu: goto label_1e9ffc;
            case 0x1EA000u: goto label_1ea000;
            case 0x1EA004u: goto label_1ea004;
            case 0x1EA008u: goto label_1ea008;
            case 0x1EA00Cu: goto label_1ea00c;
            case 0x1EA010u: goto label_1ea010;
            case 0x1EA014u: goto label_1ea014;
            case 0x1EA018u: goto label_1ea018;
            case 0x1EA01Cu: goto label_1ea01c;
            case 0x1EA020u: goto label_1ea020;
            case 0x1EA024u: goto label_1ea024;
            case 0x1EA028u: goto label_1ea028;
            case 0x1EA02Cu: goto label_1ea02c;
            case 0x1EA030u: goto label_1ea030;
            case 0x1EA034u: goto label_1ea034;
            case 0x1EA038u: goto label_1ea038;
            case 0x1EA03Cu: goto label_1ea03c;
            case 0x1EA040u: goto label_1ea040;
            case 0x1EA044u: goto label_1ea044;
            case 0x1EA048u: goto label_1ea048;
            case 0x1EA04Cu: goto label_1ea04c;
            case 0x1EA050u: goto label_1ea050;
            case 0x1EA054u: goto label_1ea054;
            case 0x1EA058u: goto label_1ea058;
            case 0x1EA05Cu: goto label_1ea05c;
            case 0x1EA060u: goto label_1ea060;
            case 0x1EA064u: goto label_1ea064;
            case 0x1EA068u: goto label_1ea068;
            case 0x1EA06Cu: goto label_1ea06c;
            case 0x1EA070u: goto label_1ea070;
            case 0x1EA074u: goto label_1ea074;
            case 0x1EA078u: goto label_1ea078;
            case 0x1EA07Cu: goto label_1ea07c;
            case 0x1EA080u: goto label_1ea080;
            case 0x1EA084u: goto label_1ea084;
            case 0x1EA088u: goto label_1ea088;
            case 0x1EA08Cu: goto label_1ea08c;
            case 0x1EA090u: goto label_1ea090;
            case 0x1EA094u: goto label_1ea094;
            case 0x1EA098u: goto label_1ea098;
            case 0x1EA09Cu: goto label_1ea09c;
            case 0x1EA0A0u: goto label_1ea0a0;
            case 0x1EA0A4u: goto label_1ea0a4;
            case 0x1EA0A8u: goto label_1ea0a8;
            case 0x1EA0ACu: goto label_1ea0ac;
            case 0x1EA0B0u: goto label_1ea0b0;
            case 0x1EA0B4u: goto label_1ea0b4;
            case 0x1EA0B8u: goto label_1ea0b8;
            case 0x1EA0BCu: goto label_1ea0bc;
            case 0x1EA0C0u: goto label_1ea0c0;
            case 0x1EA0C4u: goto label_1ea0c4;
            case 0x1EA0C8u: goto label_1ea0c8;
            case 0x1EA0CCu: goto label_1ea0cc;
            case 0x1EA0D0u: goto label_1ea0d0;
            case 0x1EA0D4u: goto label_1ea0d4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1ea0d0:
    ctx->pc = 0x1EA0D8u;
}

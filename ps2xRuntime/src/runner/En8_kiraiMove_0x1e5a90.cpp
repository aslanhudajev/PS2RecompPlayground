#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En8_kiraiMove
// Address: 0x1e5a90 - 0x1e60a4
void En8_kiraiMove_0x1e5a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En8_kiraiMove_0x1e5a90");
#endif

    ctx->pc = 0x1e5a90u;

label_1e5a90:
    // 0x1e5a90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e5a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e5a94:
    // 0x1e5a94: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e5a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e5a98:
    // 0x1e5a98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e5a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e5a9c:
    // 0x1e5a9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e5a9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e5aa0:
    // 0x1e5aa0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e5aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e5aa4:
    // 0x1e5aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5aa8:
    // 0x1e5aa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e5aac:
    // 0x1e5aac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e5ab0:
    // 0x1e5ab0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5ab4:
    // 0x1e5ab4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5ab8:
    // 0x1e5ab8: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1e5ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e5abc:
    // 0x1e5abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5ac0:
    // 0x1e5ac0: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1e5ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5ac4:
    // 0x1e5ac4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e5ac4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e5ac8:
    // 0x1e5ac8: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1e5ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1e5acc:
    // 0x1e5acc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e5accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5ad0:
    // 0x1e5ad0: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1e5ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e5ad4:
    // 0x1e5ad4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e5ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5ad8:
    // 0x1e5ad8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e5ad8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e5adc:
    // 0x1e5adc: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1e5adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1e5ae0:
    // 0x1e5ae0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5ae4:
    // 0x1e5ae4: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1e5ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e5ae8:
    // 0x1e5ae8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e5ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5aec:
    // 0x1e5aec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e5aecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e5af0:
    // 0x1e5af0: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1e5af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1e5af4:
    // 0x1e5af4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5af8:
    // 0x1e5af8: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1e5af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e5afc:
    // 0x1e5afc: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1e5afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5b00:
    // 0x1e5b00: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e5b00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e5b04:
    // 0x1e5b04: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1e5b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1e5b08:
    // 0x1e5b08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5b0c:
    // 0x1e5b0c: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1e5b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e5b10:
    // 0x1e5b10: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e5b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5b14:
    // 0x1e5b14: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e5b14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e5b18:
    // 0x1e5b18: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1e5b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1e5b1c:
    // 0x1e5b1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5b20:
    // 0x1e5b20: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e5b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5b24:
    // 0x1e5b24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e5b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e5b28:
    // 0x1e5b28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e5b2c:
    if (ctx->pc == 0x1E5B2Cu) {
        ctx->pc = 0x1E5B2Cu;
            // 0x1e5b2c: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1E5B30u;
        goto label_1e5b30;
    }
    ctx->pc = 0x1E5B28u;
    {
        const bool branch_taken_0x1e5b28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E5B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B28u;
            // 0x1e5b2c: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b28) {
            ctx->pc = 0x1E5B48u;
            goto label_1e5b48;
        }
    }
    ctx->pc = 0x1E5B30u;
label_1e5b30:
    // 0x1e5b30: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e5b34:
    // 0x1e5b34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e5b34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e5b38:
    // 0x1e5b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5b3c:
    // 0x1e5b3c: 0x0  nop
    ctx->pc = 0x1e5b3cu;
    // NOP
label_1e5b40:
    // 0x1e5b40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e5b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e5b44:
    // 0x1e5b44: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e5b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1e5b48:
    // 0x1e5b48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e5b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5b4c:
    // 0x1e5b4c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e5b50:
    // 0x1e5b50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e5b50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e5b54:
    // 0x1e5b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5b58:
    // 0x1e5b58: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1e5b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5b5c:
    // 0x1e5b5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e5b5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e5b60:
    // 0x1e5b60: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e5b64:
    if (ctx->pc == 0x1E5B64u) {
        ctx->pc = 0x1E5B64u;
            // 0x1e5b64: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1E5B68u;
        goto label_1e5b68;
    }
    ctx->pc = 0x1E5B60u;
    {
        const bool branch_taken_0x1e5b60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E5B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B60u;
            // 0x1e5b64: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b60) {
            ctx->pc = 0x1E5B80u;
            goto label_1e5b80;
        }
    }
    ctx->pc = 0x1E5B68u;
label_1e5b68:
    // 0x1e5b68: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e5b6c:
    // 0x1e5b6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e5b6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e5b70:
    // 0x1e5b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5b74:
    // 0x1e5b74: 0x0  nop
    ctx->pc = 0x1e5b74u;
    // NOP
label_1e5b78:
    // 0x1e5b78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e5b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e5b7c:
    // 0x1e5b7c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e5b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e5b80:
    // 0x1e5b80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e5b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5b84:
    // 0x1e5b84: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e5b88:
    // 0x1e5b88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e5b88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e5b8c:
    // 0x1e5b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5b90:
    // 0x1e5b90: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e5b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5b94:
    // 0x1e5b94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e5b94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e5b98:
    // 0x1e5b98: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e5b9c:
    if (ctx->pc == 0x1E5B9Cu) {
        ctx->pc = 0x1E5B9Cu;
            // 0x1e5b9c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E5BA0u;
        goto label_1e5ba0;
    }
    ctx->pc = 0x1E5B98u;
    {
        const bool branch_taken_0x1e5b98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E5B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B98u;
            // 0x1e5b9c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b98) {
            ctx->pc = 0x1E5BB8u;
            goto label_1e5bb8;
        }
    }
    ctx->pc = 0x1E5BA0u;
label_1e5ba0:
    // 0x1e5ba0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e5ba4:
    // 0x1e5ba4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e5ba4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e5ba8:
    // 0x1e5ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5bac:
    // 0x1e5bac: 0x0  nop
    ctx->pc = 0x1e5bacu;
    // NOP
label_1e5bb0:
    // 0x1e5bb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e5bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e5bb4:
    // 0x1e5bb4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e5bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e5bb8:
    // 0x1e5bb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e5bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5bbc:
    // 0x1e5bbc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e5bc0:
    // 0x1e5bc0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e5bc0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e5bc4:
    // 0x1e5bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5bc8:
    // 0x1e5bc8: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e5bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5bcc:
    // 0x1e5bcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e5bccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e5bd0:
    // 0x1e5bd0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e5bd4:
    if (ctx->pc == 0x1E5BD4u) {
        ctx->pc = 0x1E5BD4u;
            // 0x1e5bd4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E5BD8u;
        goto label_1e5bd8;
    }
    ctx->pc = 0x1E5BD0u;
    {
        const bool branch_taken_0x1e5bd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E5BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5BD0u;
            // 0x1e5bd4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bd0) {
            ctx->pc = 0x1E5BF0u;
            goto label_1e5bf0;
        }
    }
    ctx->pc = 0x1E5BD8u;
label_1e5bd8:
    // 0x1e5bd8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e5bdc:
    // 0x1e5bdc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e5bdcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e5be0:
    // 0x1e5be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5be4:
    // 0x1e5be4: 0x0  nop
    ctx->pc = 0x1e5be4u;
    // NOP
label_1e5be8:
    // 0x1e5be8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e5be8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e5bec:
    // 0x1e5bec: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e5becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e5bf0:
    // 0x1e5bf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e5bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5bf4:
    // 0x1e5bf4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e5bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e5bf8:
    // 0x1e5bf8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e5bf8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e5bfc:
    // 0x1e5bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5c00:
    // 0x1e5c00: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1e5c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5c04:
    // 0x1e5c04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e5c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e5c08:
    // 0x1e5c08: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e5c0c:
    if (ctx->pc == 0x1E5C0Cu) {
        ctx->pc = 0x1E5C0Cu;
            // 0x1e5c0c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1E5C10u;
        goto label_1e5c10;
    }
    ctx->pc = 0x1E5C08u;
    {
        const bool branch_taken_0x1e5c08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E5C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C08u;
            // 0x1e5c0c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c08) {
            ctx->pc = 0x1E5C28u;
            goto label_1e5c28;
        }
    }
    ctx->pc = 0x1E5C10u;
label_1e5c10:
    // 0x1e5c10: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e5c14:
    // 0x1e5c14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e5c14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e5c18:
    // 0x1e5c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5c1c:
    // 0x1e5c1c: 0x0  nop
    ctx->pc = 0x1e5c1cu;
    // NOP
label_1e5c20:
    // 0x1e5c20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e5c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e5c24:
    // 0x1e5c24: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e5c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e5c28:
    // 0x1e5c28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e5c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5c2c:
    // 0x1e5c2c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e5c30:
    // 0x1e5c30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e5c30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e5c34:
    // 0x1e5c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5c38:
    // 0x1e5c38: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1e5c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5c3c:
    // 0x1e5c3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e5c3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e5c40:
    // 0x1e5c40: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e5c44:
    if (ctx->pc == 0x1E5C44u) {
        ctx->pc = 0x1E5C44u;
            // 0x1e5c44: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1E5C48u;
        goto label_1e5c48;
    }
    ctx->pc = 0x1E5C40u;
    {
        const bool branch_taken_0x1e5c40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E5C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C40u;
            // 0x1e5c44: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c40) {
            ctx->pc = 0x1E5C60u;
            goto label_1e5c60;
        }
    }
    ctx->pc = 0x1E5C48u;
label_1e5c48:
    // 0x1e5c48: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e5c4c:
    // 0x1e5c4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e5c4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e5c50:
    // 0x1e5c50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5c54:
    // 0x1e5c54: 0x0  nop
    ctx->pc = 0x1e5c54u;
    // NOP
label_1e5c58:
    // 0x1e5c58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e5c58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e5c5c:
    // 0x1e5c5c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e5c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e5c60:
    // 0x1e5c60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5c64:
    // 0x1e5c64: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1e5c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1e5c68:
    // 0x1e5c68: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1e5c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e5c6c:
    // 0x1e5c6c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1e5c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e5c70:
    // 0x1e5c70: 0xc07982c  jal         func_1E60B0
label_1e5c74:
    if (ctx->pc == 0x1E5C74u) {
        ctx->pc = 0x1E5C74u;
            // 0x1e5c74: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x1E5C78u;
        goto label_1e5c78;
    }
    ctx->pc = 0x1E5C70u;
    SET_GPR_U32(ctx, 31, 0x1E5C78u);
    ctx->pc = 0x1E5C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C70u;
            // 0x1e5c74: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E60B0u;
    if (runtime->hasFunction(0x1E60B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E60B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5C78u; }
        if (ctx->pc != 0x1E5C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1e60b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5C78u; }
        if (ctx->pc != 0x1E5C78u) { return; }
    }
    ctx->pc = 0x1E5C78u;
label_1e5c78:
    // 0x1e5c78: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e5c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e5c7c:
    // 0x1e5c7c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1e5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1e5c80:
    // 0x1e5c80: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x1e5c80u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
label_1e5c84:
    // 0x1e5c84: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1e5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1e5c88:
    // 0x1e5c88: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1e5c88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1e5c8c:
    // 0x1e5c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5c90:
    // 0x1e5c90: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1e5c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e5c94:
    // 0x1e5c94: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x1e5c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_1e5c98:
    // 0x1e5c98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1e5c9c:
    // 0x1e5c9c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e5c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e5ca0:
    // 0x1e5ca0: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e5ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5ca4:
    // 0x1e5ca4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e5ca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1e5ca8:
    // 0x1e5ca8: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e5ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1e5cac:
    // 0x1e5cac: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1e5cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5cb0:
    // 0x1e5cb0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e5cb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1e5cb4:
    // 0x1e5cb4: 0xe60100d4  swc1        $f1, 0xD4($s0)
    ctx->pc = 0x1e5cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1e5cb8:
    // 0x1e5cb8: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e5cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5cbc:
    // 0x1e5cbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e5cbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e5cc0:
    // 0x1e5cc0: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e5cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1e5cc4:
    // 0x1e5cc4: 0xc04b788  jal         func_12DE20
label_1e5cc8:
    if (ctx->pc == 0x1E5CC8u) {
        ctx->pc = 0x1E5CC8u;
            // 0x1e5cc8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E5CCCu;
        goto label_1e5ccc;
    }
    ctx->pc = 0x1E5CC4u;
    SET_GPR_U32(ctx, 31, 0x1E5CCCu);
    ctx->pc = 0x1E5CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5CC4u;
            // 0x1e5cc8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CCCu; }
        if (ctx->pc != 0x1E5CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CCCu; }
        if (ctx->pc != 0x1E5CCCu) { return; }
    }
    ctx->pc = 0x1E5CCCu;
label_1e5ccc:
    // 0x1e5ccc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e5cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5cd0:
    // 0x1e5cd0: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1e5cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e5cd4:
    // 0x1e5cd4: 0xc04b7da  jal         func_12DF68
label_1e5cd8:
    if (ctx->pc == 0x1E5CD8u) {
        ctx->pc = 0x1E5CD8u;
            // 0x1e5cd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CDCu;
        goto label_1e5cdc;
    }
    ctx->pc = 0x1E5CD4u;
    SET_GPR_U32(ctx, 31, 0x1E5CDCu);
    ctx->pc = 0x1E5CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5CD4u;
            // 0x1e5cd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CDCu; }
        if (ctx->pc != 0x1E5CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CDCu; }
        if (ctx->pc != 0x1E5CDCu) { return; }
    }
    ctx->pc = 0x1E5CDCu;
label_1e5cdc:
    // 0x1e5cdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e5cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5ce0:
    // 0x1e5ce0: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1e5ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e5ce4:
    // 0x1e5ce4: 0xc04b804  jal         func_12E010
label_1e5ce8:
    if (ctx->pc == 0x1E5CE8u) {
        ctx->pc = 0x1E5CE8u;
            // 0x1e5ce8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CECu;
        goto label_1e5cec;
    }
    ctx->pc = 0x1E5CE4u;
    SET_GPR_U32(ctx, 31, 0x1E5CECu);
    ctx->pc = 0x1E5CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5CE4u;
            // 0x1e5ce8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CECu; }
        if (ctx->pc != 0x1E5CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CECu; }
        if (ctx->pc != 0x1E5CECu) { return; }
    }
    ctx->pc = 0x1E5CECu;
label_1e5cec:
    // 0x1e5cec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e5cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5cf0:
    // 0x1e5cf0: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1e5cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e5cf4:
    // 0x1e5cf4: 0xc04b7b0  jal         func_12DEC0
label_1e5cf8:
    if (ctx->pc == 0x1E5CF8u) {
        ctx->pc = 0x1E5CF8u;
            // 0x1e5cf8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CFCu;
        goto label_1e5cfc;
    }
    ctx->pc = 0x1E5CF4u;
    SET_GPR_U32(ctx, 31, 0x1E5CFCu);
    ctx->pc = 0x1E5CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5CF4u;
            // 0x1e5cf8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CFCu; }
        if (ctx->pc != 0x1E5CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CFCu; }
        if (ctx->pc != 0x1E5CFCu) { return; }
    }
    ctx->pc = 0x1E5CFCu;
label_1e5cfc:
    // 0x1e5cfc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e5cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5d00:
    // 0x1e5d00: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e5d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5d04:
    // 0x1e5d04: 0xc04b75e  jal         func_12DD78
label_1e5d08:
    if (ctx->pc == 0x1E5D08u) {
        ctx->pc = 0x1E5D08u;
            // 0x1e5d08: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1E5D0Cu;
        goto label_1e5d0c;
    }
    ctx->pc = 0x1E5D04u;
    SET_GPR_U32(ctx, 31, 0x1E5D0Cu);
    ctx->pc = 0x1E5D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D04u;
            // 0x1e5d08: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D0Cu; }
        if (ctx->pc != 0x1E5D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D0Cu; }
        if (ctx->pc != 0x1E5D0Cu) { return; }
    }
    ctx->pc = 0x1E5D0Cu;
label_1e5d0c:
    // 0x1e5d0c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e5d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e5d10:
    // 0x1e5d10: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e5d14:
    // 0x1e5d14: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e5d14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e5d18:
    // 0x1e5d18: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_1e5d1c:
    if (ctx->pc == 0x1E5D1Cu) {
        ctx->pc = 0x1E5D20u;
        goto label_1e5d20;
    }
    ctx->pc = 0x1E5D18u;
    {
        const bool branch_taken_0x1e5d18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d18) {
            ctx->pc = 0x1E5DA0u;
            goto label_1e5da0;
        }
    }
    ctx->pc = 0x1E5D20u;
label_1e5d20:
    // 0x1e5d20: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1e5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1e5d24:
    // 0x1e5d24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e5d28:
    if (ctx->pc == 0x1E5D28u) {
        ctx->pc = 0x1E5D2Cu;
        goto label_1e5d2c;
    }
    ctx->pc = 0x1E5D24u;
    {
        const bool branch_taken_0x1e5d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d24) {
            ctx->pc = 0x1E5D40u;
            goto label_1e5d40;
        }
    }
    ctx->pc = 0x1E5D2Cu;
label_1e5d2c:
    // 0x1e5d2c: 0xc0604f0  jal         func_1813C0
label_1e5d30:
    if (ctx->pc == 0x1E5D30u) {
        ctx->pc = 0x1E5D30u;
            // 0x1e5d30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E5D34u;
        goto label_1e5d34;
    }
    ctx->pc = 0x1E5D2Cu;
    SET_GPR_U32(ctx, 31, 0x1E5D34u);
    ctx->pc = 0x1E5D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D2Cu;
            // 0x1e5d30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D34u; }
        if (ctx->pc != 0x1E5D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D34u; }
        if (ctx->pc != 0x1E5D34u) { return; }
    }
    ctx->pc = 0x1E5D34u;
label_1e5d34:
    // 0x1e5d34: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e5d38:
    if (ctx->pc == 0x1E5D38u) {
        ctx->pc = 0x1E5D3Cu;
        goto label_1e5d3c;
    }
    ctx->pc = 0x1E5D34u;
    {
        const bool branch_taken_0x1e5d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d34) {
            ctx->pc = 0x1E5D48u;
            goto label_1e5d48;
        }
    }
    ctx->pc = 0x1E5D3Cu;
label_1e5d3c:
    // 0x1e5d3c: 0x0  nop
    ctx->pc = 0x1e5d3cu;
    // NOP
label_1e5d40:
    // 0x1e5d40: 0xc0604dc  jal         func_181370
label_1e5d44:
    if (ctx->pc == 0x1E5D44u) {
        ctx->pc = 0x1E5D44u;
            // 0x1e5d44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E5D48u;
        goto label_1e5d48;
    }
    ctx->pc = 0x1E5D40u;
    SET_GPR_U32(ctx, 31, 0x1E5D48u);
    ctx->pc = 0x1E5D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D40u;
            // 0x1e5d44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D48u; }
        if (ctx->pc != 0x1E5D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D48u; }
        if (ctx->pc != 0x1E5D48u) { return; }
    }
    ctx->pc = 0x1E5D48u;
label_1e5d48:
    // 0x1e5d48: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1e5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1e5d4c:
    // 0x1e5d4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e5d50:
    if (ctx->pc == 0x1E5D50u) {
        ctx->pc = 0x1E5D54u;
        goto label_1e5d54;
    }
    ctx->pc = 0x1E5D4Cu;
    {
        const bool branch_taken_0x1e5d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d4c) {
            ctx->pc = 0x1E5D60u;
            goto label_1e5d60;
        }
    }
    ctx->pc = 0x1E5D54u;
label_1e5d54:
    // 0x1e5d54: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e5d58:
    if (ctx->pc == 0x1E5D58u) {
        ctx->pc = 0x1E5D58u;
            // 0x1e5d58: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1E5D5Cu;
        goto label_1e5d5c;
    }
    ctx->pc = 0x1E5D54u;
    {
        const bool branch_taken_0x1e5d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D54u;
            // 0x1e5d58: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d54) {
            ctx->pc = 0x1E5D68u;
            goto label_1e5d68;
        }
    }
    ctx->pc = 0x1E5D5Cu;
label_1e5d5c:
    // 0x1e5d5c: 0x0  nop
    ctx->pc = 0x1e5d5cu;
    // NOP
label_1e5d60:
    // 0x1e5d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5d64:
    // 0x1e5d64: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1e5d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1e5d68:
    // 0x1e5d68: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e5d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e5d6c:
    // 0x1e5d6c: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x1e5d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
label_1e5d70:
    // 0x1e5d70: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
label_1e5d74:
    if (ctx->pc == 0x1E5D74u) {
        ctx->pc = 0x1E5D74u;
            // 0x1e5d74: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1E5D78u;
        goto label_1e5d78;
    }
    ctx->pc = 0x1E5D70u;
    {
        const bool branch_taken_0x1e5d70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D70u;
            // 0x1e5d74: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d70) {
            ctx->pc = 0x1E5DE8u;
            goto label_1e5de8;
        }
    }
    ctx->pc = 0x1E5D78u;
label_1e5d78:
    // 0x1e5d78: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e5d78u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e5d7c:
    // 0x1e5d7c: 0x0  nop
    ctx->pc = 0x1e5d7cu;
    // NOP
label_1e5d80:
    // 0x1e5d80: 0x0  nop
    ctx->pc = 0x1e5d80u;
    // NOP
label_1e5d84:
    // 0x1e5d84: 0x1010  mfhi        $v0
    ctx->pc = 0x1e5d84u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e5d88:
    // 0x1e5d88: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1e5d8c:
    if (ctx->pc == 0x1E5D8Cu) {
        ctx->pc = 0x1E5D90u;
        goto label_1e5d90;
    }
    ctx->pc = 0x1E5D88u;
    {
        const bool branch_taken_0x1e5d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d88) {
            ctx->pc = 0x1E5DE8u;
            goto label_1e5de8;
        }
    }
    ctx->pc = 0x1E5D90u;
label_1e5d90:
    // 0x1e5d90: 0xc060500  jal         func_181400
label_1e5d94:
    if (ctx->pc == 0x1E5D94u) {
        ctx->pc = 0x1E5D94u;
            // 0x1e5d94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E5D98u;
        goto label_1e5d98;
    }
    ctx->pc = 0x1E5D90u;
    SET_GPR_U32(ctx, 31, 0x1E5D98u);
    ctx->pc = 0x1E5D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D90u;
            // 0x1e5d94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D98u; }
        if (ctx->pc != 0x1E5D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D98u; }
        if (ctx->pc != 0x1E5D98u) { return; }
    }
    ctx->pc = 0x1E5D98u;
label_1e5d98:
    // 0x1e5d98: 0x10000013  b           . + 4 + (0x13 << 2)
label_1e5d9c:
    if (ctx->pc == 0x1E5D9Cu) {
        ctx->pc = 0x1E5DA0u;
        goto label_1e5da0;
    }
    ctx->pc = 0x1E5D98u;
    {
        const bool branch_taken_0x1e5d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d98) {
            ctx->pc = 0x1E5DE8u;
            goto label_1e5de8;
        }
    }
    ctx->pc = 0x1E5DA0u;
label_1e5da0:
    // 0x1e5da0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e5da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e5da4:
    // 0x1e5da4: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x1e5da4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
label_1e5da8:
    // 0x1e5da8: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_1e5dac:
    if (ctx->pc == 0x1E5DACu) {
        ctx->pc = 0x1E5DACu;
            // 0x1e5dac: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1E5DB0u;
        goto label_1e5db0;
    }
    ctx->pc = 0x1E5DA8u;
    {
        const bool branch_taken_0x1e5da8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5DA8u;
            // 0x1e5dac: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5da8) {
            ctx->pc = 0x1E5DD8u;
            goto label_1e5dd8;
        }
    }
    ctx->pc = 0x1E5DB0u;
label_1e5db0:
    // 0x1e5db0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e5db0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e5db4:
    // 0x1e5db4: 0x0  nop
    ctx->pc = 0x1e5db4u;
    // NOP
label_1e5db8:
    // 0x1e5db8: 0x0  nop
    ctx->pc = 0x1e5db8u;
    // NOP
label_1e5dbc:
    // 0x1e5dbc: 0x1010  mfhi        $v0
    ctx->pc = 0x1e5dbcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e5dc0:
    // 0x1e5dc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e5dc4:
    if (ctx->pc == 0x1E5DC4u) {
        ctx->pc = 0x1E5DC8u;
        goto label_1e5dc8;
    }
    ctx->pc = 0x1E5DC0u;
    {
        const bool branch_taken_0x1e5dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5dc0) {
            ctx->pc = 0x1E5DD8u;
            goto label_1e5dd8;
        }
    }
    ctx->pc = 0x1E5DC8u;
label_1e5dc8:
    // 0x1e5dc8: 0xc060500  jal         func_181400
label_1e5dcc:
    if (ctx->pc == 0x1E5DCCu) {
        ctx->pc = 0x1E5DCCu;
            // 0x1e5dcc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E5DD0u;
        goto label_1e5dd0;
    }
    ctx->pc = 0x1E5DC8u;
    SET_GPR_U32(ctx, 31, 0x1E5DD0u);
    ctx->pc = 0x1E5DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5DC8u;
            // 0x1e5dcc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5DD0u; }
        if (ctx->pc != 0x1E5DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5DD0u; }
        if (ctx->pc != 0x1E5DD0u) { return; }
    }
    ctx->pc = 0x1E5DD0u;
label_1e5dd0:
    // 0x1e5dd0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e5dd4:
    if (ctx->pc == 0x1E5DD4u) {
        ctx->pc = 0x1E5DD8u;
        goto label_1e5dd8;
    }
    ctx->pc = 0x1E5DD0u;
    {
        const bool branch_taken_0x1e5dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5dd0) {
            ctx->pc = 0x1E5DE0u;
            goto label_1e5de0;
        }
    }
    ctx->pc = 0x1E5DD8u;
label_1e5dd8:
    // 0x1e5dd8: 0xc0604dc  jal         func_181370
label_1e5ddc:
    if (ctx->pc == 0x1E5DDCu) {
        ctx->pc = 0x1E5DDCu;
            // 0x1e5ddc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E5DE0u;
        goto label_1e5de0;
    }
    ctx->pc = 0x1E5DD8u;
    SET_GPR_U32(ctx, 31, 0x1E5DE0u);
    ctx->pc = 0x1E5DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5DD8u;
            // 0x1e5ddc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5DE0u; }
        if (ctx->pc != 0x1E5DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5DE0u; }
        if (ctx->pc != 0x1E5DE0u) { return; }
    }
    ctx->pc = 0x1E5DE0u;
label_1e5de0:
    // 0x1e5de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5de4:
    // 0x1e5de4: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1e5de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1e5de8:
    // 0x1e5de8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e5de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e5dec:
    // 0x1e5dec: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1e5decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1e5df0:
    // 0x1e5df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5df4:
    // 0x1e5df4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e5df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e5df8:
    // 0x1e5df8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e5dfc:
    // 0x1e5dfc: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1e5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1e5e00:
    // 0x1e5e00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e5e04:
    // 0x1e5e04: 0x0  nop
    ctx->pc = 0x1e5e04u;
    // NOP
label_1e5e08:
    // 0x1e5e08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e5e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e5e0c:
    // 0x1e5e0c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1e5e0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1e5e10:
    // 0x1e5e10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1e5e14:
    // 0x1e5e14: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1e5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1e5e18:
    // 0x1e5e18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e5e1c:
    // 0x1e5e1c: 0x0  nop
    ctx->pc = 0x1e5e1cu;
    // NOP
label_1e5e20:
    // 0x1e5e20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e5e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e5e24:
    // 0x1e5e24: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1e5e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1e5e28:
    // 0x1e5e28: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e5e2c:
    // 0x1e5e2c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1e5e30:
    // 0x1e5e30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e5e34:
    // 0x1e5e34: 0x0  nop
    ctx->pc = 0x1e5e34u;
    // NOP
label_1e5e38:
    // 0x1e5e38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e5e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e5e3c:
    // 0x1e5e3c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1e5e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1e5e40:
    // 0x1e5e40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1e5e44:
    // 0x1e5e44: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e5e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1e5e48:
    // 0x1e5e48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e5e4c:
    // 0x1e5e4c: 0x0  nop
    ctx->pc = 0x1e5e4cu;
    // NOP
label_1e5e50:
    // 0x1e5e50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e5e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e5e54:
    // 0x1e5e54: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1e5e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1e5e58:
    // 0x1e5e58: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e5e5c:
    // 0x1e5e5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e5e60:
    // 0x1e5e60: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1e5e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1e5e64:
    // 0x1e5e64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e5e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5e68:
    // 0x1e5e68: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1e5e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e5e6c:
    // 0x1e5e6c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e5e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e5e70:
    // 0x1e5e70: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1e5e74:
    if (ctx->pc == 0x1E5E74u) {
        ctx->pc = 0x1E5E74u;
            // 0x1e5e74: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1E5E78u;
        goto label_1e5e78;
    }
    ctx->pc = 0x1E5E70u;
    {
        const bool branch_taken_0x1e5e70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E5E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5E70u;
            // 0x1e5e74: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e70) {
            ctx->pc = 0x1E5EB8u;
            goto label_1e5eb8;
        }
    }
    ctx->pc = 0x1E5E78u;
label_1e5e78:
    // 0x1e5e78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e5e7c:
    // 0x1e5e7c: 0x0  nop
    ctx->pc = 0x1e5e7cu;
    // NOP
label_1e5e80:
    // 0x1e5e80: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1e5e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e5e84:
    // 0x1e5e84: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_1e5e88:
    if (ctx->pc == 0x1E5E88u) {
        ctx->pc = 0x1E5E8Cu;
        goto label_1e5e8c;
    }
    ctx->pc = 0x1E5E84u;
    {
        const bool branch_taken_0x1e5e84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5e84) {
            ctx->pc = 0x1E5EB8u;
            goto label_1e5eb8;
        }
    }
    ctx->pc = 0x1E5E8Cu;
label_1e5e8c:
    // 0x1e5e8c: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x1e5e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e5e90:
    // 0x1e5e90: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1e5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1e5e94:
    // 0x1e5e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5e98:
    // 0x1e5e98: 0x0  nop
    ctx->pc = 0x1e5e98u;
    // NOP
label_1e5e9c:
    // 0x1e5e9c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e5e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e5ea0:
    // 0x1e5ea0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1e5ea4:
    if (ctx->pc == 0x1E5EA4u) {
        ctx->pc = 0x1E5EA8u;
        goto label_1e5ea8;
    }
    ctx->pc = 0x1E5EA0u;
    {
        const bool branch_taken_0x1e5ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5ea0) {
            ctx->pc = 0x1E5EB8u;
            goto label_1e5eb8;
        }
    }
    ctx->pc = 0x1E5EA8u;
label_1e5ea8:
    // 0x1e5ea8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1e5ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e5eac:
    // 0x1e5eac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1e5eb0:
    if (ctx->pc == 0x1E5EB0u) {
        ctx->pc = 0x1E5EB4u;
        goto label_1e5eb4;
    }
    ctx->pc = 0x1E5EACu;
    {
        const bool branch_taken_0x1e5eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5eac) {
            ctx->pc = 0x1E5ED0u;
            goto label_1e5ed0;
        }
    }
    ctx->pc = 0x1E5EB4u;
label_1e5eb4:
    // 0x1e5eb4: 0x0  nop
    ctx->pc = 0x1e5eb4u;
    // NOP
label_1e5eb8:
    // 0x1e5eb8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e5eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1e5ebc:
    // 0x1e5ebc: 0x40f809  jalr        $v0
label_1e5ec0:
    if (ctx->pc == 0x1E5EC0u) {
        ctx->pc = 0x1E5EC0u;
            // 0x1e5ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5EC4u;
        goto label_1e5ec4;
    }
    ctx->pc = 0x1E5EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E5EC4u);
        ctx->pc = 0x1E5EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5EBCu;
            // 0x1e5ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5A90u: goto label_1e5a90;
            case 0x1E5A94u: goto label_1e5a94;
            case 0x1E5A98u: goto label_1e5a98;
            case 0x1E5A9Cu: goto label_1e5a9c;
            case 0x1E5AA0u: goto label_1e5aa0;
            case 0x1E5AA4u: goto label_1e5aa4;
            case 0x1E5AA8u: goto label_1e5aa8;
            case 0x1E5AACu: goto label_1e5aac;
            case 0x1E5AB0u: goto label_1e5ab0;
            case 0x1E5AB4u: goto label_1e5ab4;
            case 0x1E5AB8u: goto label_1e5ab8;
            case 0x1E5ABCu: goto label_1e5abc;
            case 0x1E5AC0u: goto label_1e5ac0;
            case 0x1E5AC4u: goto label_1e5ac4;
            case 0x1E5AC8u: goto label_1e5ac8;
            case 0x1E5ACCu: goto label_1e5acc;
            case 0x1E5AD0u: goto label_1e5ad0;
            case 0x1E5AD4u: goto label_1e5ad4;
            case 0x1E5AD8u: goto label_1e5ad8;
            case 0x1E5ADCu: goto label_1e5adc;
            case 0x1E5AE0u: goto label_1e5ae0;
            case 0x1E5AE4u: goto label_1e5ae4;
            case 0x1E5AE8u: goto label_1e5ae8;
            case 0x1E5AECu: goto label_1e5aec;
            case 0x1E5AF0u: goto label_1e5af0;
            case 0x1E5AF4u: goto label_1e5af4;
            case 0x1E5AF8u: goto label_1e5af8;
            case 0x1E5AFCu: goto label_1e5afc;
            case 0x1E5B00u: goto label_1e5b00;
            case 0x1E5B04u: goto label_1e5b04;
            case 0x1E5B08u: goto label_1e5b08;
            case 0x1E5B0Cu: goto label_1e5b0c;
            case 0x1E5B10u: goto label_1e5b10;
            case 0x1E5B14u: goto label_1e5b14;
            case 0x1E5B18u: goto label_1e5b18;
            case 0x1E5B1Cu: goto label_1e5b1c;
            case 0x1E5B20u: goto label_1e5b20;
            case 0x1E5B24u: goto label_1e5b24;
            case 0x1E5B28u: goto label_1e5b28;
            case 0x1E5B2Cu: goto label_1e5b2c;
            case 0x1E5B30u: goto label_1e5b30;
            case 0x1E5B34u: goto label_1e5b34;
            case 0x1E5B38u: goto label_1e5b38;
            case 0x1E5B3Cu: goto label_1e5b3c;
            case 0x1E5B40u: goto label_1e5b40;
            case 0x1E5B44u: goto label_1e5b44;
            case 0x1E5B48u: goto label_1e5b48;
            case 0x1E5B4Cu: goto label_1e5b4c;
            case 0x1E5B50u: goto label_1e5b50;
            case 0x1E5B54u: goto label_1e5b54;
            case 0x1E5B58u: goto label_1e5b58;
            case 0x1E5B5Cu: goto label_1e5b5c;
            case 0x1E5B60u: goto label_1e5b60;
            case 0x1E5B64u: goto label_1e5b64;
            case 0x1E5B68u: goto label_1e5b68;
            case 0x1E5B6Cu: goto label_1e5b6c;
            case 0x1E5B70u: goto label_1e5b70;
            case 0x1E5B74u: goto label_1e5b74;
            case 0x1E5B78u: goto label_1e5b78;
            case 0x1E5B7Cu: goto label_1e5b7c;
            case 0x1E5B80u: goto label_1e5b80;
            case 0x1E5B84u: goto label_1e5b84;
            case 0x1E5B88u: goto label_1e5b88;
            case 0x1E5B8Cu: goto label_1e5b8c;
            case 0x1E5B90u: goto label_1e5b90;
            case 0x1E5B94u: goto label_1e5b94;
            case 0x1E5B98u: goto label_1e5b98;
            case 0x1E5B9Cu: goto label_1e5b9c;
            case 0x1E5BA0u: goto label_1e5ba0;
            case 0x1E5BA4u: goto label_1e5ba4;
            case 0x1E5BA8u: goto label_1e5ba8;
            case 0x1E5BACu: goto label_1e5bac;
            case 0x1E5BB0u: goto label_1e5bb0;
            case 0x1E5BB4u: goto label_1e5bb4;
            case 0x1E5BB8u: goto label_1e5bb8;
            case 0x1E5BBCu: goto label_1e5bbc;
            case 0x1E5BC0u: goto label_1e5bc0;
            case 0x1E5BC4u: goto label_1e5bc4;
            case 0x1E5BC8u: goto label_1e5bc8;
            case 0x1E5BCCu: goto label_1e5bcc;
            case 0x1E5BD0u: goto label_1e5bd0;
            case 0x1E5BD4u: goto label_1e5bd4;
            case 0x1E5BD8u: goto label_1e5bd8;
            case 0x1E5BDCu: goto label_1e5bdc;
            case 0x1E5BE0u: goto label_1e5be0;
            case 0x1E5BE4u: goto label_1e5be4;
            case 0x1E5BE8u: goto label_1e5be8;
            case 0x1E5BECu: goto label_1e5bec;
            case 0x1E5BF0u: goto label_1e5bf0;
            case 0x1E5BF4u: goto label_1e5bf4;
            case 0x1E5BF8u: goto label_1e5bf8;
            case 0x1E5BFCu: goto label_1e5bfc;
            case 0x1E5C00u: goto label_1e5c00;
            case 0x1E5C04u: goto label_1e5c04;
            case 0x1E5C08u: goto label_1e5c08;
            case 0x1E5C0Cu: goto label_1e5c0c;
            case 0x1E5C10u: goto label_1e5c10;
            case 0x1E5C14u: goto label_1e5c14;
            case 0x1E5C18u: goto label_1e5c18;
            case 0x1E5C1Cu: goto label_1e5c1c;
            case 0x1E5C20u: goto label_1e5c20;
            case 0x1E5C24u: goto label_1e5c24;
            case 0x1E5C28u: goto label_1e5c28;
            case 0x1E5C2Cu: goto label_1e5c2c;
            case 0x1E5C30u: goto label_1e5c30;
            case 0x1E5C34u: goto label_1e5c34;
            case 0x1E5C38u: goto label_1e5c38;
            case 0x1E5C3Cu: goto label_1e5c3c;
            case 0x1E5C40u: goto label_1e5c40;
            case 0x1E5C44u: goto label_1e5c44;
            case 0x1E5C48u: goto label_1e5c48;
            case 0x1E5C4Cu: goto label_1e5c4c;
            case 0x1E5C50u: goto label_1e5c50;
            case 0x1E5C54u: goto label_1e5c54;
            case 0x1E5C58u: goto label_1e5c58;
            case 0x1E5C5Cu: goto label_1e5c5c;
            case 0x1E5C60u: goto label_1e5c60;
            case 0x1E5C64u: goto label_1e5c64;
            case 0x1E5C68u: goto label_1e5c68;
            case 0x1E5C6Cu: goto label_1e5c6c;
            case 0x1E5C70u: goto label_1e5c70;
            case 0x1E5C74u: goto label_1e5c74;
            case 0x1E5C78u: goto label_1e5c78;
            case 0x1E5C7Cu: goto label_1e5c7c;
            case 0x1E5C80u: goto label_1e5c80;
            case 0x1E5C84u: goto label_1e5c84;
            case 0x1E5C88u: goto label_1e5c88;
            case 0x1E5C8Cu: goto label_1e5c8c;
            case 0x1E5C90u: goto label_1e5c90;
            case 0x1E5C94u: goto label_1e5c94;
            case 0x1E5C98u: goto label_1e5c98;
            case 0x1E5C9Cu: goto label_1e5c9c;
            case 0x1E5CA0u: goto label_1e5ca0;
            case 0x1E5CA4u: goto label_1e5ca4;
            case 0x1E5CA8u: goto label_1e5ca8;
            case 0x1E5CACu: goto label_1e5cac;
            case 0x1E5CB0u: goto label_1e5cb0;
            case 0x1E5CB4u: goto label_1e5cb4;
            case 0x1E5CB8u: goto label_1e5cb8;
            case 0x1E5CBCu: goto label_1e5cbc;
            case 0x1E5CC0u: goto label_1e5cc0;
            case 0x1E5CC4u: goto label_1e5cc4;
            case 0x1E5CC8u: goto label_1e5cc8;
            case 0x1E5CCCu: goto label_1e5ccc;
            case 0x1E5CD0u: goto label_1e5cd0;
            case 0x1E5CD4u: goto label_1e5cd4;
            case 0x1E5CD8u: goto label_1e5cd8;
            case 0x1E5CDCu: goto label_1e5cdc;
            case 0x1E5CE0u: goto label_1e5ce0;
            case 0x1E5CE4u: goto label_1e5ce4;
            case 0x1E5CE8u: goto label_1e5ce8;
            case 0x1E5CECu: goto label_1e5cec;
            case 0x1E5CF0u: goto label_1e5cf0;
            case 0x1E5CF4u: goto label_1e5cf4;
            case 0x1E5CF8u: goto label_1e5cf8;
            case 0x1E5CFCu: goto label_1e5cfc;
            case 0x1E5D00u: goto label_1e5d00;
            case 0x1E5D04u: goto label_1e5d04;
            case 0x1E5D08u: goto label_1e5d08;
            case 0x1E5D0Cu: goto label_1e5d0c;
            case 0x1E5D10u: goto label_1e5d10;
            case 0x1E5D14u: goto label_1e5d14;
            case 0x1E5D18u: goto label_1e5d18;
            case 0x1E5D1Cu: goto label_1e5d1c;
            case 0x1E5D20u: goto label_1e5d20;
            case 0x1E5D24u: goto label_1e5d24;
            case 0x1E5D28u: goto label_1e5d28;
            case 0x1E5D2Cu: goto label_1e5d2c;
            case 0x1E5D30u: goto label_1e5d30;
            case 0x1E5D34u: goto label_1e5d34;
            case 0x1E5D38u: goto label_1e5d38;
            case 0x1E5D3Cu: goto label_1e5d3c;
            case 0x1E5D40u: goto label_1e5d40;
            case 0x1E5D44u: goto label_1e5d44;
            case 0x1E5D48u: goto label_1e5d48;
            case 0x1E5D4Cu: goto label_1e5d4c;
            case 0x1E5D50u: goto label_1e5d50;
            case 0x1E5D54u: goto label_1e5d54;
            case 0x1E5D58u: goto label_1e5d58;
            case 0x1E5D5Cu: goto label_1e5d5c;
            case 0x1E5D60u: goto label_1e5d60;
            case 0x1E5D64u: goto label_1e5d64;
            case 0x1E5D68u: goto label_1e5d68;
            case 0x1E5D6Cu: goto label_1e5d6c;
            case 0x1E5D70u: goto label_1e5d70;
            case 0x1E5D74u: goto label_1e5d74;
            case 0x1E5D78u: goto label_1e5d78;
            case 0x1E5D7Cu: goto label_1e5d7c;
            case 0x1E5D80u: goto label_1e5d80;
            case 0x1E5D84u: goto label_1e5d84;
            case 0x1E5D88u: goto label_1e5d88;
            case 0x1E5D8Cu: goto label_1e5d8c;
            case 0x1E5D90u: goto label_1e5d90;
            case 0x1E5D94u: goto label_1e5d94;
            case 0x1E5D98u: goto label_1e5d98;
            case 0x1E5D9Cu: goto label_1e5d9c;
            case 0x1E5DA0u: goto label_1e5da0;
            case 0x1E5DA4u: goto label_1e5da4;
            case 0x1E5DA8u: goto label_1e5da8;
            case 0x1E5DACu: goto label_1e5dac;
            case 0x1E5DB0u: goto label_1e5db0;
            case 0x1E5DB4u: goto label_1e5db4;
            case 0x1E5DB8u: goto label_1e5db8;
            case 0x1E5DBCu: goto label_1e5dbc;
            case 0x1E5DC0u: goto label_1e5dc0;
            case 0x1E5DC4u: goto label_1e5dc4;
            case 0x1E5DC8u: goto label_1e5dc8;
            case 0x1E5DCCu: goto label_1e5dcc;
            case 0x1E5DD0u: goto label_1e5dd0;
            case 0x1E5DD4u: goto label_1e5dd4;
            case 0x1E5DD8u: goto label_1e5dd8;
            case 0x1E5DDCu: goto label_1e5ddc;
            case 0x1E5DE0u: goto label_1e5de0;
            case 0x1E5DE4u: goto label_1e5de4;
            case 0x1E5DE8u: goto label_1e5de8;
            case 0x1E5DECu: goto label_1e5dec;
            case 0x1E5DF0u: goto label_1e5df0;
            case 0x1E5DF4u: goto label_1e5df4;
            case 0x1E5DF8u: goto label_1e5df8;
            case 0x1E5DFCu: goto label_1e5dfc;
            case 0x1E5E00u: goto label_1e5e00;
            case 0x1E5E04u: goto label_1e5e04;
            case 0x1E5E08u: goto label_1e5e08;
            case 0x1E5E0Cu: goto label_1e5e0c;
            case 0x1E5E10u: goto label_1e5e10;
            case 0x1E5E14u: goto label_1e5e14;
            case 0x1E5E18u: goto label_1e5e18;
            case 0x1E5E1Cu: goto label_1e5e1c;
            case 0x1E5E20u: goto label_1e5e20;
            case 0x1E5E24u: goto label_1e5e24;
            case 0x1E5E28u: goto label_1e5e28;
            case 0x1E5E2Cu: goto label_1e5e2c;
            case 0x1E5E30u: goto label_1e5e30;
            case 0x1E5E34u: goto label_1e5e34;
            case 0x1E5E38u: goto label_1e5e38;
            case 0x1E5E3Cu: goto label_1e5e3c;
            case 0x1E5E40u: goto label_1e5e40;
            case 0x1E5E44u: goto label_1e5e44;
            case 0x1E5E48u: goto label_1e5e48;
            case 0x1E5E4Cu: goto label_1e5e4c;
            case 0x1E5E50u: goto label_1e5e50;
            case 0x1E5E54u: goto label_1e5e54;
            case 0x1E5E58u: goto label_1e5e58;
            case 0x1E5E5Cu: goto label_1e5e5c;
            case 0x1E5E60u: goto label_1e5e60;
            case 0x1E5E64u: goto label_1e5e64;
            case 0x1E5E68u: goto label_1e5e68;
            case 0x1E5E6Cu: goto label_1e5e6c;
            case 0x1E5E70u: goto label_1e5e70;
            case 0x1E5E74u: goto label_1e5e74;
            case 0x1E5E78u: goto label_1e5e78;
            case 0x1E5E7Cu: goto label_1e5e7c;
            case 0x1E5E80u: goto label_1e5e80;
            case 0x1E5E84u: goto label_1e5e84;
            case 0x1E5E88u: goto label_1e5e88;
            case 0x1E5E8Cu: goto label_1e5e8c;
            case 0x1E5E90u: goto label_1e5e90;
            case 0x1E5E94u: goto label_1e5e94;
            case 0x1E5E98u: goto label_1e5e98;
            case 0x1E5E9Cu: goto label_1e5e9c;
            case 0x1E5EA0u: goto label_1e5ea0;
            case 0x1E5EA4u: goto label_1e5ea4;
            case 0x1E5EA8u: goto label_1e5ea8;
            case 0x1E5EACu: goto label_1e5eac;
            case 0x1E5EB0u: goto label_1e5eb0;
            case 0x1E5EB4u: goto label_1e5eb4;
            case 0x1E5EB8u: goto label_1e5eb8;
            case 0x1E5EBCu: goto label_1e5ebc;
            case 0x1E5EC0u: goto label_1e5ec0;
            case 0x1E5EC4u: goto label_1e5ec4;
            case 0x1E5EC8u: goto label_1e5ec8;
            case 0x1E5ECCu: goto label_1e5ecc;
            case 0x1E5ED0u: goto label_1e5ed0;
            case 0x1E5ED4u: goto label_1e5ed4;
            case 0x1E5ED8u: goto label_1e5ed8;
            case 0x1E5EDCu: goto label_1e5edc;
            case 0x1E5EE0u: goto label_1e5ee0;
            case 0x1E5EE4u: goto label_1e5ee4;
            case 0x1E5EE8u: goto label_1e5ee8;
            case 0x1E5EECu: goto label_1e5eec;
            case 0x1E5EF0u: goto label_1e5ef0;
            case 0x1E5EF4u: goto label_1e5ef4;
            case 0x1E5EF8u: goto label_1e5ef8;
            case 0x1E5EFCu: goto label_1e5efc;
            case 0x1E5F00u: goto label_1e5f00;
            case 0x1E5F04u: goto label_1e5f04;
            case 0x1E5F08u: goto label_1e5f08;
            case 0x1E5F0Cu: goto label_1e5f0c;
            case 0x1E5F10u: goto label_1e5f10;
            case 0x1E5F14u: goto label_1e5f14;
            case 0x1E5F18u: goto label_1e5f18;
            case 0x1E5F1Cu: goto label_1e5f1c;
            case 0x1E5F20u: goto label_1e5f20;
            case 0x1E5F24u: goto label_1e5f24;
            case 0x1E5F28u: goto label_1e5f28;
            case 0x1E5F2Cu: goto label_1e5f2c;
            case 0x1E5F30u: goto label_1e5f30;
            case 0x1E5F34u: goto label_1e5f34;
            case 0x1E5F38u: goto label_1e5f38;
            case 0x1E5F3Cu: goto label_1e5f3c;
            case 0x1E5F40u: goto label_1e5f40;
            case 0x1E5F44u: goto label_1e5f44;
            case 0x1E5F48u: goto label_1e5f48;
            case 0x1E5F4Cu: goto label_1e5f4c;
            case 0x1E5F50u: goto label_1e5f50;
            case 0x1E5F54u: goto label_1e5f54;
            case 0x1E5F58u: goto label_1e5f58;
            case 0x1E5F5Cu: goto label_1e5f5c;
            case 0x1E5F60u: goto label_1e5f60;
            case 0x1E5F64u: goto label_1e5f64;
            case 0x1E5F68u: goto label_1e5f68;
            case 0x1E5F6Cu: goto label_1e5f6c;
            case 0x1E5F70u: goto label_1e5f70;
            case 0x1E5F74u: goto label_1e5f74;
            case 0x1E5F78u: goto label_1e5f78;
            case 0x1E5F7Cu: goto label_1e5f7c;
            case 0x1E5F80u: goto label_1e5f80;
            case 0x1E5F84u: goto label_1e5f84;
            case 0x1E5F88u: goto label_1e5f88;
            case 0x1E5F8Cu: goto label_1e5f8c;
            case 0x1E5F90u: goto label_1e5f90;
            case 0x1E5F94u: goto label_1e5f94;
            case 0x1E5F98u: goto label_1e5f98;
            case 0x1E5F9Cu: goto label_1e5f9c;
            case 0x1E5FA0u: goto label_1e5fa0;
            case 0x1E5FA4u: goto label_1e5fa4;
            case 0x1E5FA8u: goto label_1e5fa8;
            case 0x1E5FACu: goto label_1e5fac;
            case 0x1E5FB0u: goto label_1e5fb0;
            case 0x1E5FB4u: goto label_1e5fb4;
            case 0x1E5FB8u: goto label_1e5fb8;
            case 0x1E5FBCu: goto label_1e5fbc;
            case 0x1E5FC0u: goto label_1e5fc0;
            case 0x1E5FC4u: goto label_1e5fc4;
            case 0x1E5FC8u: goto label_1e5fc8;
            case 0x1E5FCCu: goto label_1e5fcc;
            case 0x1E5FD0u: goto label_1e5fd0;
            case 0x1E5FD4u: goto label_1e5fd4;
            case 0x1E5FD8u: goto label_1e5fd8;
            case 0x1E5FDCu: goto label_1e5fdc;
            case 0x1E5FE0u: goto label_1e5fe0;
            case 0x1E5FE4u: goto label_1e5fe4;
            case 0x1E5FE8u: goto label_1e5fe8;
            case 0x1E5FECu: goto label_1e5fec;
            case 0x1E5FF0u: goto label_1e5ff0;
            case 0x1E5FF4u: goto label_1e5ff4;
            case 0x1E5FF8u: goto label_1e5ff8;
            case 0x1E5FFCu: goto label_1e5ffc;
            case 0x1E6000u: goto label_1e6000;
            case 0x1E6004u: goto label_1e6004;
            case 0x1E6008u: goto label_1e6008;
            case 0x1E600Cu: goto label_1e600c;
            case 0x1E6010u: goto label_1e6010;
            case 0x1E6014u: goto label_1e6014;
            case 0x1E6018u: goto label_1e6018;
            case 0x1E601Cu: goto label_1e601c;
            case 0x1E6020u: goto label_1e6020;
            case 0x1E6024u: goto label_1e6024;
            case 0x1E6028u: goto label_1e6028;
            case 0x1E602Cu: goto label_1e602c;
            case 0x1E6030u: goto label_1e6030;
            case 0x1E6034u: goto label_1e6034;
            case 0x1E6038u: goto label_1e6038;
            case 0x1E603Cu: goto label_1e603c;
            case 0x1E6040u: goto label_1e6040;
            case 0x1E6044u: goto label_1e6044;
            case 0x1E6048u: goto label_1e6048;
            case 0x1E604Cu: goto label_1e604c;
            case 0x1E6050u: goto label_1e6050;
            case 0x1E6054u: goto label_1e6054;
            case 0x1E6058u: goto label_1e6058;
            case 0x1E605Cu: goto label_1e605c;
            case 0x1E6060u: goto label_1e6060;
            case 0x1E6064u: goto label_1e6064;
            case 0x1E6068u: goto label_1e6068;
            case 0x1E606Cu: goto label_1e606c;
            case 0x1E6070u: goto label_1e6070;
            case 0x1E6074u: goto label_1e6074;
            case 0x1E6078u: goto label_1e6078;
            case 0x1E607Cu: goto label_1e607c;
            case 0x1E6080u: goto label_1e6080;
            case 0x1E6084u: goto label_1e6084;
            case 0x1E6088u: goto label_1e6088;
            case 0x1E608Cu: goto label_1e608c;
            case 0x1E6090u: goto label_1e6090;
            case 0x1E6094u: goto label_1e6094;
            case 0x1E6098u: goto label_1e6098;
            case 0x1E609Cu: goto label_1e609c;
            case 0x1E60A0u: goto label_1e60a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5EC4u; }
            if (ctx->pc != 0x1E5EC4u) { return; }
        }
    }
    ctx->pc = 0x1E5EC4u;
label_1e5ec4:
    // 0x1e5ec4: 0x10000070  b           . + 4 + (0x70 << 2)
label_1e5ec8:
    if (ctx->pc == 0x1E5EC8u) {
        ctx->pc = 0x1E5ECCu;
        goto label_1e5ecc;
    }
    ctx->pc = 0x1E5EC4u;
    {
        const bool branch_taken_0x1e5ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5ec4) {
            ctx->pc = 0x1E6088u;
            goto label_1e6088;
        }
    }
    ctx->pc = 0x1E5ECCu;
label_1e5ecc:
    // 0x1e5ecc: 0x0  nop
    ctx->pc = 0x1e5eccu;
    // NOP
label_1e5ed0:
    // 0x1e5ed0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e5ed4:
    // 0x1e5ed4: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
label_1e5ed8:
    if (ctx->pc == 0x1E5ED8u) {
        ctx->pc = 0x1E5EDCu;
        goto label_1e5edc;
    }
    ctx->pc = 0x1E5ED4u;
    {
        const bool branch_taken_0x1e5ed4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e5ed4) {
            ctx->pc = 0x1E5F18u;
            goto label_1e5f18;
        }
    }
    ctx->pc = 0x1E5EDCu;
label_1e5edc:
    // 0x1e5edc: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e5edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5ee0:
    // 0x1e5ee0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e5ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e5ee4:
    // 0x1e5ee4: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e5ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5ee8:
    // 0x1e5ee8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e5ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e5eec:
    // 0x1e5eec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e5eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e5ef0:
    // 0x1e5ef0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e5ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e5ef4:
    // 0x1e5ef4: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1e5ef4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1e5ef8:
    // 0x1e5ef8: 0xc053740  jal         func_14DD00
label_1e5efc:
    if (ctx->pc == 0x1E5EFCu) {
        ctx->pc = 0x1E5EFCu;
            // 0x1e5efc: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1E5F00u;
        goto label_1e5f00;
    }
    ctx->pc = 0x1E5EF8u;
    SET_GPR_U32(ctx, 31, 0x1E5F00u);
    ctx->pc = 0x1E5EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5EF8u;
            // 0x1e5efc: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F00u; }
        if (ctx->pc != 0x1E5F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F00u; }
        if (ctx->pc != 0x1E5F00u) { return; }
    }
    ctx->pc = 0x1E5F00u;
label_1e5f00:
    // 0x1e5f00: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1e5f04:
    // 0x1e5f04: 0x40f809  jalr        $v0
label_1e5f08:
    if (ctx->pc == 0x1E5F08u) {
        ctx->pc = 0x1E5F08u;
            // 0x1e5f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F0Cu;
        goto label_1e5f0c;
    }
    ctx->pc = 0x1E5F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E5F0Cu);
        ctx->pc = 0x1E5F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F04u;
            // 0x1e5f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5A90u: goto label_1e5a90;
            case 0x1E5A94u: goto label_1e5a94;
            case 0x1E5A98u: goto label_1e5a98;
            case 0x1E5A9Cu: goto label_1e5a9c;
            case 0x1E5AA0u: goto label_1e5aa0;
            case 0x1E5AA4u: goto label_1e5aa4;
            case 0x1E5AA8u: goto label_1e5aa8;
            case 0x1E5AACu: goto label_1e5aac;
            case 0x1E5AB0u: goto label_1e5ab0;
            case 0x1E5AB4u: goto label_1e5ab4;
            case 0x1E5AB8u: goto label_1e5ab8;
            case 0x1E5ABCu: goto label_1e5abc;
            case 0x1E5AC0u: goto label_1e5ac0;
            case 0x1E5AC4u: goto label_1e5ac4;
            case 0x1E5AC8u: goto label_1e5ac8;
            case 0x1E5ACCu: goto label_1e5acc;
            case 0x1E5AD0u: goto label_1e5ad0;
            case 0x1E5AD4u: goto label_1e5ad4;
            case 0x1E5AD8u: goto label_1e5ad8;
            case 0x1E5ADCu: goto label_1e5adc;
            case 0x1E5AE0u: goto label_1e5ae0;
            case 0x1E5AE4u: goto label_1e5ae4;
            case 0x1E5AE8u: goto label_1e5ae8;
            case 0x1E5AECu: goto label_1e5aec;
            case 0x1E5AF0u: goto label_1e5af0;
            case 0x1E5AF4u: goto label_1e5af4;
            case 0x1E5AF8u: goto label_1e5af8;
            case 0x1E5AFCu: goto label_1e5afc;
            case 0x1E5B00u: goto label_1e5b00;
            case 0x1E5B04u: goto label_1e5b04;
            case 0x1E5B08u: goto label_1e5b08;
            case 0x1E5B0Cu: goto label_1e5b0c;
            case 0x1E5B10u: goto label_1e5b10;
            case 0x1E5B14u: goto label_1e5b14;
            case 0x1E5B18u: goto label_1e5b18;
            case 0x1E5B1Cu: goto label_1e5b1c;
            case 0x1E5B20u: goto label_1e5b20;
            case 0x1E5B24u: goto label_1e5b24;
            case 0x1E5B28u: goto label_1e5b28;
            case 0x1E5B2Cu: goto label_1e5b2c;
            case 0x1E5B30u: goto label_1e5b30;
            case 0x1E5B34u: goto label_1e5b34;
            case 0x1E5B38u: goto label_1e5b38;
            case 0x1E5B3Cu: goto label_1e5b3c;
            case 0x1E5B40u: goto label_1e5b40;
            case 0x1E5B44u: goto label_1e5b44;
            case 0x1E5B48u: goto label_1e5b48;
            case 0x1E5B4Cu: goto label_1e5b4c;
            case 0x1E5B50u: goto label_1e5b50;
            case 0x1E5B54u: goto label_1e5b54;
            case 0x1E5B58u: goto label_1e5b58;
            case 0x1E5B5Cu: goto label_1e5b5c;
            case 0x1E5B60u: goto label_1e5b60;
            case 0x1E5B64u: goto label_1e5b64;
            case 0x1E5B68u: goto label_1e5b68;
            case 0x1E5B6Cu: goto label_1e5b6c;
            case 0x1E5B70u: goto label_1e5b70;
            case 0x1E5B74u: goto label_1e5b74;
            case 0x1E5B78u: goto label_1e5b78;
            case 0x1E5B7Cu: goto label_1e5b7c;
            case 0x1E5B80u: goto label_1e5b80;
            case 0x1E5B84u: goto label_1e5b84;
            case 0x1E5B88u: goto label_1e5b88;
            case 0x1E5B8Cu: goto label_1e5b8c;
            case 0x1E5B90u: goto label_1e5b90;
            case 0x1E5B94u: goto label_1e5b94;
            case 0x1E5B98u: goto label_1e5b98;
            case 0x1E5B9Cu: goto label_1e5b9c;
            case 0x1E5BA0u: goto label_1e5ba0;
            case 0x1E5BA4u: goto label_1e5ba4;
            case 0x1E5BA8u: goto label_1e5ba8;
            case 0x1E5BACu: goto label_1e5bac;
            case 0x1E5BB0u: goto label_1e5bb0;
            case 0x1E5BB4u: goto label_1e5bb4;
            case 0x1E5BB8u: goto label_1e5bb8;
            case 0x1E5BBCu: goto label_1e5bbc;
            case 0x1E5BC0u: goto label_1e5bc0;
            case 0x1E5BC4u: goto label_1e5bc4;
            case 0x1E5BC8u: goto label_1e5bc8;
            case 0x1E5BCCu: goto label_1e5bcc;
            case 0x1E5BD0u: goto label_1e5bd0;
            case 0x1E5BD4u: goto label_1e5bd4;
            case 0x1E5BD8u: goto label_1e5bd8;
            case 0x1E5BDCu: goto label_1e5bdc;
            case 0x1E5BE0u: goto label_1e5be0;
            case 0x1E5BE4u: goto label_1e5be4;
            case 0x1E5BE8u: goto label_1e5be8;
            case 0x1E5BECu: goto label_1e5bec;
            case 0x1E5BF0u: goto label_1e5bf0;
            case 0x1E5BF4u: goto label_1e5bf4;
            case 0x1E5BF8u: goto label_1e5bf8;
            case 0x1E5BFCu: goto label_1e5bfc;
            case 0x1E5C00u: goto label_1e5c00;
            case 0x1E5C04u: goto label_1e5c04;
            case 0x1E5C08u: goto label_1e5c08;
            case 0x1E5C0Cu: goto label_1e5c0c;
            case 0x1E5C10u: goto label_1e5c10;
            case 0x1E5C14u: goto label_1e5c14;
            case 0x1E5C18u: goto label_1e5c18;
            case 0x1E5C1Cu: goto label_1e5c1c;
            case 0x1E5C20u: goto label_1e5c20;
            case 0x1E5C24u: goto label_1e5c24;
            case 0x1E5C28u: goto label_1e5c28;
            case 0x1E5C2Cu: goto label_1e5c2c;
            case 0x1E5C30u: goto label_1e5c30;
            case 0x1E5C34u: goto label_1e5c34;
            case 0x1E5C38u: goto label_1e5c38;
            case 0x1E5C3Cu: goto label_1e5c3c;
            case 0x1E5C40u: goto label_1e5c40;
            case 0x1E5C44u: goto label_1e5c44;
            case 0x1E5C48u: goto label_1e5c48;
            case 0x1E5C4Cu: goto label_1e5c4c;
            case 0x1E5C50u: goto label_1e5c50;
            case 0x1E5C54u: goto label_1e5c54;
            case 0x1E5C58u: goto label_1e5c58;
            case 0x1E5C5Cu: goto label_1e5c5c;
            case 0x1E5C60u: goto label_1e5c60;
            case 0x1E5C64u: goto label_1e5c64;
            case 0x1E5C68u: goto label_1e5c68;
            case 0x1E5C6Cu: goto label_1e5c6c;
            case 0x1E5C70u: goto label_1e5c70;
            case 0x1E5C74u: goto label_1e5c74;
            case 0x1E5C78u: goto label_1e5c78;
            case 0x1E5C7Cu: goto label_1e5c7c;
            case 0x1E5C80u: goto label_1e5c80;
            case 0x1E5C84u: goto label_1e5c84;
            case 0x1E5C88u: goto label_1e5c88;
            case 0x1E5C8Cu: goto label_1e5c8c;
            case 0x1E5C90u: goto label_1e5c90;
            case 0x1E5C94u: goto label_1e5c94;
            case 0x1E5C98u: goto label_1e5c98;
            case 0x1E5C9Cu: goto label_1e5c9c;
            case 0x1E5CA0u: goto label_1e5ca0;
            case 0x1E5CA4u: goto label_1e5ca4;
            case 0x1E5CA8u: goto label_1e5ca8;
            case 0x1E5CACu: goto label_1e5cac;
            case 0x1E5CB0u: goto label_1e5cb0;
            case 0x1E5CB4u: goto label_1e5cb4;
            case 0x1E5CB8u: goto label_1e5cb8;
            case 0x1E5CBCu: goto label_1e5cbc;
            case 0x1E5CC0u: goto label_1e5cc0;
            case 0x1E5CC4u: goto label_1e5cc4;
            case 0x1E5CC8u: goto label_1e5cc8;
            case 0x1E5CCCu: goto label_1e5ccc;
            case 0x1E5CD0u: goto label_1e5cd0;
            case 0x1E5CD4u: goto label_1e5cd4;
            case 0x1E5CD8u: goto label_1e5cd8;
            case 0x1E5CDCu: goto label_1e5cdc;
            case 0x1E5CE0u: goto label_1e5ce0;
            case 0x1E5CE4u: goto label_1e5ce4;
            case 0x1E5CE8u: goto label_1e5ce8;
            case 0x1E5CECu: goto label_1e5cec;
            case 0x1E5CF0u: goto label_1e5cf0;
            case 0x1E5CF4u: goto label_1e5cf4;
            case 0x1E5CF8u: goto label_1e5cf8;
            case 0x1E5CFCu: goto label_1e5cfc;
            case 0x1E5D00u: goto label_1e5d00;
            case 0x1E5D04u: goto label_1e5d04;
            case 0x1E5D08u: goto label_1e5d08;
            case 0x1E5D0Cu: goto label_1e5d0c;
            case 0x1E5D10u: goto label_1e5d10;
            case 0x1E5D14u: goto label_1e5d14;
            case 0x1E5D18u: goto label_1e5d18;
            case 0x1E5D1Cu: goto label_1e5d1c;
            case 0x1E5D20u: goto label_1e5d20;
            case 0x1E5D24u: goto label_1e5d24;
            case 0x1E5D28u: goto label_1e5d28;
            case 0x1E5D2Cu: goto label_1e5d2c;
            case 0x1E5D30u: goto label_1e5d30;
            case 0x1E5D34u: goto label_1e5d34;
            case 0x1E5D38u: goto label_1e5d38;
            case 0x1E5D3Cu: goto label_1e5d3c;
            case 0x1E5D40u: goto label_1e5d40;
            case 0x1E5D44u: goto label_1e5d44;
            case 0x1E5D48u: goto label_1e5d48;
            case 0x1E5D4Cu: goto label_1e5d4c;
            case 0x1E5D50u: goto label_1e5d50;
            case 0x1E5D54u: goto label_1e5d54;
            case 0x1E5D58u: goto label_1e5d58;
            case 0x1E5D5Cu: goto label_1e5d5c;
            case 0x1E5D60u: goto label_1e5d60;
            case 0x1E5D64u: goto label_1e5d64;
            case 0x1E5D68u: goto label_1e5d68;
            case 0x1E5D6Cu: goto label_1e5d6c;
            case 0x1E5D70u: goto label_1e5d70;
            case 0x1E5D74u: goto label_1e5d74;
            case 0x1E5D78u: goto label_1e5d78;
            case 0x1E5D7Cu: goto label_1e5d7c;
            case 0x1E5D80u: goto label_1e5d80;
            case 0x1E5D84u: goto label_1e5d84;
            case 0x1E5D88u: goto label_1e5d88;
            case 0x1E5D8Cu: goto label_1e5d8c;
            case 0x1E5D90u: goto label_1e5d90;
            case 0x1E5D94u: goto label_1e5d94;
            case 0x1E5D98u: goto label_1e5d98;
            case 0x1E5D9Cu: goto label_1e5d9c;
            case 0x1E5DA0u: goto label_1e5da0;
            case 0x1E5DA4u: goto label_1e5da4;
            case 0x1E5DA8u: goto label_1e5da8;
            case 0x1E5DACu: goto label_1e5dac;
            case 0x1E5DB0u: goto label_1e5db0;
            case 0x1E5DB4u: goto label_1e5db4;
            case 0x1E5DB8u: goto label_1e5db8;
            case 0x1E5DBCu: goto label_1e5dbc;
            case 0x1E5DC0u: goto label_1e5dc0;
            case 0x1E5DC4u: goto label_1e5dc4;
            case 0x1E5DC8u: goto label_1e5dc8;
            case 0x1E5DCCu: goto label_1e5dcc;
            case 0x1E5DD0u: goto label_1e5dd0;
            case 0x1E5DD4u: goto label_1e5dd4;
            case 0x1E5DD8u: goto label_1e5dd8;
            case 0x1E5DDCu: goto label_1e5ddc;
            case 0x1E5DE0u: goto label_1e5de0;
            case 0x1E5DE4u: goto label_1e5de4;
            case 0x1E5DE8u: goto label_1e5de8;
            case 0x1E5DECu: goto label_1e5dec;
            case 0x1E5DF0u: goto label_1e5df0;
            case 0x1E5DF4u: goto label_1e5df4;
            case 0x1E5DF8u: goto label_1e5df8;
            case 0x1E5DFCu: goto label_1e5dfc;
            case 0x1E5E00u: goto label_1e5e00;
            case 0x1E5E04u: goto label_1e5e04;
            case 0x1E5E08u: goto label_1e5e08;
            case 0x1E5E0Cu: goto label_1e5e0c;
            case 0x1E5E10u: goto label_1e5e10;
            case 0x1E5E14u: goto label_1e5e14;
            case 0x1E5E18u: goto label_1e5e18;
            case 0x1E5E1Cu: goto label_1e5e1c;
            case 0x1E5E20u: goto label_1e5e20;
            case 0x1E5E24u: goto label_1e5e24;
            case 0x1E5E28u: goto label_1e5e28;
            case 0x1E5E2Cu: goto label_1e5e2c;
            case 0x1E5E30u: goto label_1e5e30;
            case 0x1E5E34u: goto label_1e5e34;
            case 0x1E5E38u: goto label_1e5e38;
            case 0x1E5E3Cu: goto label_1e5e3c;
            case 0x1E5E40u: goto label_1e5e40;
            case 0x1E5E44u: goto label_1e5e44;
            case 0x1E5E48u: goto label_1e5e48;
            case 0x1E5E4Cu: goto label_1e5e4c;
            case 0x1E5E50u: goto label_1e5e50;
            case 0x1E5E54u: goto label_1e5e54;
            case 0x1E5E58u: goto label_1e5e58;
            case 0x1E5E5Cu: goto label_1e5e5c;
            case 0x1E5E60u: goto label_1e5e60;
            case 0x1E5E64u: goto label_1e5e64;
            case 0x1E5E68u: goto label_1e5e68;
            case 0x1E5E6Cu: goto label_1e5e6c;
            case 0x1E5E70u: goto label_1e5e70;
            case 0x1E5E74u: goto label_1e5e74;
            case 0x1E5E78u: goto label_1e5e78;
            case 0x1E5E7Cu: goto label_1e5e7c;
            case 0x1E5E80u: goto label_1e5e80;
            case 0x1E5E84u: goto label_1e5e84;
            case 0x1E5E88u: goto label_1e5e88;
            case 0x1E5E8Cu: goto label_1e5e8c;
            case 0x1E5E90u: goto label_1e5e90;
            case 0x1E5E94u: goto label_1e5e94;
            case 0x1E5E98u: goto label_1e5e98;
            case 0x1E5E9Cu: goto label_1e5e9c;
            case 0x1E5EA0u: goto label_1e5ea0;
            case 0x1E5EA4u: goto label_1e5ea4;
            case 0x1E5EA8u: goto label_1e5ea8;
            case 0x1E5EACu: goto label_1e5eac;
            case 0x1E5EB0u: goto label_1e5eb0;
            case 0x1E5EB4u: goto label_1e5eb4;
            case 0x1E5EB8u: goto label_1e5eb8;
            case 0x1E5EBCu: goto label_1e5ebc;
            case 0x1E5EC0u: goto label_1e5ec0;
            case 0x1E5EC4u: goto label_1e5ec4;
            case 0x1E5EC8u: goto label_1e5ec8;
            case 0x1E5ECCu: goto label_1e5ecc;
            case 0x1E5ED0u: goto label_1e5ed0;
            case 0x1E5ED4u: goto label_1e5ed4;
            case 0x1E5ED8u: goto label_1e5ed8;
            case 0x1E5EDCu: goto label_1e5edc;
            case 0x1E5EE0u: goto label_1e5ee0;
            case 0x1E5EE4u: goto label_1e5ee4;
            case 0x1E5EE8u: goto label_1e5ee8;
            case 0x1E5EECu: goto label_1e5eec;
            case 0x1E5EF0u: goto label_1e5ef0;
            case 0x1E5EF4u: goto label_1e5ef4;
            case 0x1E5EF8u: goto label_1e5ef8;
            case 0x1E5EFCu: goto label_1e5efc;
            case 0x1E5F00u: goto label_1e5f00;
            case 0x1E5F04u: goto label_1e5f04;
            case 0x1E5F08u: goto label_1e5f08;
            case 0x1E5F0Cu: goto label_1e5f0c;
            case 0x1E5F10u: goto label_1e5f10;
            case 0x1E5F14u: goto label_1e5f14;
            case 0x1E5F18u: goto label_1e5f18;
            case 0x1E5F1Cu: goto label_1e5f1c;
            case 0x1E5F20u: goto label_1e5f20;
            case 0x1E5F24u: goto label_1e5f24;
            case 0x1E5F28u: goto label_1e5f28;
            case 0x1E5F2Cu: goto label_1e5f2c;
            case 0x1E5F30u: goto label_1e5f30;
            case 0x1E5F34u: goto label_1e5f34;
            case 0x1E5F38u: goto label_1e5f38;
            case 0x1E5F3Cu: goto label_1e5f3c;
            case 0x1E5F40u: goto label_1e5f40;
            case 0x1E5F44u: goto label_1e5f44;
            case 0x1E5F48u: goto label_1e5f48;
            case 0x1E5F4Cu: goto label_1e5f4c;
            case 0x1E5F50u: goto label_1e5f50;
            case 0x1E5F54u: goto label_1e5f54;
            case 0x1E5F58u: goto label_1e5f58;
            case 0x1E5F5Cu: goto label_1e5f5c;
            case 0x1E5F60u: goto label_1e5f60;
            case 0x1E5F64u: goto label_1e5f64;
            case 0x1E5F68u: goto label_1e5f68;
            case 0x1E5F6Cu: goto label_1e5f6c;
            case 0x1E5F70u: goto label_1e5f70;
            case 0x1E5F74u: goto label_1e5f74;
            case 0x1E5F78u: goto label_1e5f78;
            case 0x1E5F7Cu: goto label_1e5f7c;
            case 0x1E5F80u: goto label_1e5f80;
            case 0x1E5F84u: goto label_1e5f84;
            case 0x1E5F88u: goto label_1e5f88;
            case 0x1E5F8Cu: goto label_1e5f8c;
            case 0x1E5F90u: goto label_1e5f90;
            case 0x1E5F94u: goto label_1e5f94;
            case 0x1E5F98u: goto label_1e5f98;
            case 0x1E5F9Cu: goto label_1e5f9c;
            case 0x1E5FA0u: goto label_1e5fa0;
            case 0x1E5FA4u: goto label_1e5fa4;
            case 0x1E5FA8u: goto label_1e5fa8;
            case 0x1E5FACu: goto label_1e5fac;
            case 0x1E5FB0u: goto label_1e5fb0;
            case 0x1E5FB4u: goto label_1e5fb4;
            case 0x1E5FB8u: goto label_1e5fb8;
            case 0x1E5FBCu: goto label_1e5fbc;
            case 0x1E5FC0u: goto label_1e5fc0;
            case 0x1E5FC4u: goto label_1e5fc4;
            case 0x1E5FC8u: goto label_1e5fc8;
            case 0x1E5FCCu: goto label_1e5fcc;
            case 0x1E5FD0u: goto label_1e5fd0;
            case 0x1E5FD4u: goto label_1e5fd4;
            case 0x1E5FD8u: goto label_1e5fd8;
            case 0x1E5FDCu: goto label_1e5fdc;
            case 0x1E5FE0u: goto label_1e5fe0;
            case 0x1E5FE4u: goto label_1e5fe4;
            case 0x1E5FE8u: goto label_1e5fe8;
            case 0x1E5FECu: goto label_1e5fec;
            case 0x1E5FF0u: goto label_1e5ff0;
            case 0x1E5FF4u: goto label_1e5ff4;
            case 0x1E5FF8u: goto label_1e5ff8;
            case 0x1E5FFCu: goto label_1e5ffc;
            case 0x1E6000u: goto label_1e6000;
            case 0x1E6004u: goto label_1e6004;
            case 0x1E6008u: goto label_1e6008;
            case 0x1E600Cu: goto label_1e600c;
            case 0x1E6010u: goto label_1e6010;
            case 0x1E6014u: goto label_1e6014;
            case 0x1E6018u: goto label_1e6018;
            case 0x1E601Cu: goto label_1e601c;
            case 0x1E6020u: goto label_1e6020;
            case 0x1E6024u: goto label_1e6024;
            case 0x1E6028u: goto label_1e6028;
            case 0x1E602Cu: goto label_1e602c;
            case 0x1E6030u: goto label_1e6030;
            case 0x1E6034u: goto label_1e6034;
            case 0x1E6038u: goto label_1e6038;
            case 0x1E603Cu: goto label_1e603c;
            case 0x1E6040u: goto label_1e6040;
            case 0x1E6044u: goto label_1e6044;
            case 0x1E6048u: goto label_1e6048;
            case 0x1E604Cu: goto label_1e604c;
            case 0x1E6050u: goto label_1e6050;
            case 0x1E6054u: goto label_1e6054;
            case 0x1E6058u: goto label_1e6058;
            case 0x1E605Cu: goto label_1e605c;
            case 0x1E6060u: goto label_1e6060;
            case 0x1E6064u: goto label_1e6064;
            case 0x1E6068u: goto label_1e6068;
            case 0x1E606Cu: goto label_1e606c;
            case 0x1E6070u: goto label_1e6070;
            case 0x1E6074u: goto label_1e6074;
            case 0x1E6078u: goto label_1e6078;
            case 0x1E607Cu: goto label_1e607c;
            case 0x1E6080u: goto label_1e6080;
            case 0x1E6084u: goto label_1e6084;
            case 0x1E6088u: goto label_1e6088;
            case 0x1E608Cu: goto label_1e608c;
            case 0x1E6090u: goto label_1e6090;
            case 0x1E6094u: goto label_1e6094;
            case 0x1E6098u: goto label_1e6098;
            case 0x1E609Cu: goto label_1e609c;
            case 0x1E60A0u: goto label_1e60a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F0Cu; }
            if (ctx->pc != 0x1E5F0Cu) { return; }
        }
    }
    ctx->pc = 0x1E5F0Cu;
label_1e5f0c:
    // 0x1e5f0c: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1e5f10:
    if (ctx->pc == 0x1E5F10u) {
        ctx->pc = 0x1E5F14u;
        goto label_1e5f14;
    }
    ctx->pc = 0x1E5F0Cu;
    {
        const bool branch_taken_0x1e5f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5f0c) {
            ctx->pc = 0x1E6088u;
            goto label_1e6088;
        }
    }
    ctx->pc = 0x1E5F14u;
label_1e5f14:
    // 0x1e5f14: 0x0  nop
    ctx->pc = 0x1e5f14u;
    // NOP
label_1e5f18:
    // 0x1e5f18: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e5f1c:
    // 0x1e5f1c: 0x28410079  slti        $at, $v0, 0x79
    ctx->pc = 0x1e5f1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
label_1e5f20:
    // 0x1e5f20: 0x14200051  bnez        $at, . + 4 + (0x51 << 2)
label_1e5f24:
    if (ctx->pc == 0x1E5F24u) {
        ctx->pc = 0x1E5F28u;
        goto label_1e5f28;
    }
    ctx->pc = 0x1E5F20u;
    {
        const bool branch_taken_0x1e5f20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5f20) {
            ctx->pc = 0x1E6068u;
            goto label_1e6068;
        }
    }
    ctx->pc = 0x1E5F28u;
label_1e5f28:
    // 0x1e5f28: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e5f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5f2c:
    // 0x1e5f2c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e5f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e5f30:
    // 0x1e5f30: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e5f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5f34:
    // 0x1e5f34: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e5f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e5f38:
    // 0x1e5f38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e5f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e5f3c:
    // 0x1e5f3c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e5f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e5f40:
    // 0x1e5f40: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1e5f40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1e5f44:
    // 0x1e5f44: 0xc053740  jal         func_14DD00
label_1e5f48:
    if (ctx->pc == 0x1E5F48u) {
        ctx->pc = 0x1E5F48u;
            // 0x1e5f48: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1E5F4Cu;
        goto label_1e5f4c;
    }
    ctx->pc = 0x1E5F44u;
    SET_GPR_U32(ctx, 31, 0x1E5F4Cu);
    ctx->pc = 0x1E5F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F44u;
            // 0x1e5f48: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F4Cu; }
        if (ctx->pc != 0x1E5F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F4Cu; }
        if (ctx->pc != 0x1E5F4Cu) { return; }
    }
    ctx->pc = 0x1E5F4Cu;
label_1e5f4c:
    // 0x1e5f4c: 0xc065d00  jal         func_197400
label_1e5f50:
    if (ctx->pc == 0x1E5F50u) {
        ctx->pc = 0x1E5F54u;
        goto label_1e5f54;
    }
    ctx->pc = 0x1E5F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E5F54u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F54u; }
        if (ctx->pc != 0x1E5F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F54u; }
        if (ctx->pc != 0x1E5F54u) { return; }
    }
    ctx->pc = 0x1E5F54u;
label_1e5f54:
    // 0x1e5f54: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1e5f54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5f58:
    // 0x1e5f58: 0x14510013  bne         $v0, $s1, . + 4 + (0x13 << 2)
label_1e5f5c:
    if (ctx->pc == 0x1E5F5Cu) {
        ctx->pc = 0x1E5F5Cu;
            // 0x1e5f5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F60u;
        goto label_1e5f60;
    }
    ctx->pc = 0x1E5F58u;
    {
        const bool branch_taken_0x1e5f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1E5F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F58u;
            // 0x1e5f5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f58) {
            ctx->pc = 0x1E5FA8u;
            goto label_1e5fa8;
        }
    }
    ctx->pc = 0x1E5F60u;
label_1e5f60:
    // 0x1e5f60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e5f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f64:
    // 0x1e5f64: 0x0  nop
    ctx->pc = 0x1e5f64u;
    // NOP
label_1e5f68:
    // 0x1e5f68: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e5f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e5f6c:
    // 0x1e5f6c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1e5f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1e5f70:
    // 0x1e5f70: 0xc06530c  jal         func_194C30
label_1e5f74:
    if (ctx->pc == 0x1E5F74u) {
        ctx->pc = 0x1E5F74u;
            // 0x1e5f74: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F78u;
        goto label_1e5f78;
    }
    ctx->pc = 0x1E5F70u;
    SET_GPR_U32(ctx, 31, 0x1E5F78u);
    ctx->pc = 0x1E5F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F70u;
            // 0x1e5f74: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F78u; }
        if (ctx->pc != 0x1E5F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F78u; }
        if (ctx->pc != 0x1E5F78u) { return; }
    }
    ctx->pc = 0x1E5F78u;
label_1e5f78:
    // 0x1e5f78: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e5f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e5f7c:
    // 0x1e5f7c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1e5f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1e5f80:
    // 0x1e5f80: 0xc0652ec  jal         func_194BB0
label_1e5f84:
    if (ctx->pc == 0x1E5F84u) {
        ctx->pc = 0x1E5F84u;
            // 0x1e5f84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F88u;
        goto label_1e5f88;
    }
    ctx->pc = 0x1E5F80u;
    SET_GPR_U32(ctx, 31, 0x1E5F88u);
    ctx->pc = 0x1E5F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F80u;
            // 0x1e5f84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F88u; }
        if (ctx->pc != 0x1E5F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F88u; }
        if (ctx->pc != 0x1E5F88u) { return; }
    }
    ctx->pc = 0x1E5F88u;
label_1e5f88:
    // 0x1e5f88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e5f88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e5f8c:
    // 0x1e5f8c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1e5f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1e5f90:
    // 0x1e5f90: 0x2a62000f  slti        $v0, $s3, 0xF
    ctx->pc = 0x1e5f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
label_1e5f94:
    // 0x1e5f94: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1e5f98:
    if (ctx->pc == 0x1E5F98u) {
        ctx->pc = 0x1E5F98u;
            // 0x1e5f98: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1E5F9Cu;
        goto label_1e5f9c;
    }
    ctx->pc = 0x1E5F94u;
    {
        const bool branch_taken_0x1e5f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F94u;
            // 0x1e5f98: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f94) {
            ctx->pc = 0x1E5F68u;
            goto label_1e5f68;
        }
    }
    ctx->pc = 0x1E5F9Cu;
label_1e5f9c:
    // 0x1e5f9c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1e5fa0:
    if (ctx->pc == 0x1E5FA0u) {
        ctx->pc = 0x1E5FA4u;
        goto label_1e5fa4;
    }
    ctx->pc = 0x1E5F9Cu;
    {
        const bool branch_taken_0x1e5f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5f9c) {
            ctx->pc = 0x1E6050u;
            goto label_1e6050;
        }
    }
    ctx->pc = 0x1E5FA4u;
label_1e5fa4:
    // 0x1e5fa4: 0x0  nop
    ctx->pc = 0x1e5fa4u;
    // NOP
label_1e5fa8:
    // 0x1e5fa8: 0xc065d00  jal         func_197400
label_1e5fac:
    if (ctx->pc == 0x1E5FACu) {
        ctx->pc = 0x1E5FB0u;
        goto label_1e5fb0;
    }
    ctx->pc = 0x1E5FA8u;
    SET_GPR_U32(ctx, 31, 0x1E5FB0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FB0u; }
        if (ctx->pc != 0x1E5FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FB0u; }
        if (ctx->pc != 0x1E5FB0u) { return; }
    }
    ctx->pc = 0x1E5FB0u;
label_1e5fb0:
    // 0x1e5fb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5fb4:
    // 0x1e5fb4: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_1e5fb8:
    if (ctx->pc == 0x1E5FB8u) {
        ctx->pc = 0x1E5FB8u;
            // 0x1e5fb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FBCu;
        goto label_1e5fbc;
    }
    ctx->pc = 0x1E5FB4u;
    {
        const bool branch_taken_0x1e5fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E5FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FB4u;
            // 0x1e5fb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5fb4) {
            ctx->pc = 0x1E6008u;
            goto label_1e6008;
        }
    }
    ctx->pc = 0x1E5FBCu;
label_1e5fbc:
    // 0x1e5fbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e5fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5fc0:
    // 0x1e5fc0: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1e5fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e5fc4:
    // 0x1e5fc4: 0x0  nop
    ctx->pc = 0x1e5fc4u;
    // NOP
label_1e5fc8:
    // 0x1e5fc8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e5fcc:
    // 0x1e5fcc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1e5fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1e5fd0:
    // 0x1e5fd0: 0xc06530c  jal         func_194C30
label_1e5fd4:
    if (ctx->pc == 0x1E5FD4u) {
        ctx->pc = 0x1E5FD4u;
            // 0x1e5fd4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FD8u;
        goto label_1e5fd8;
    }
    ctx->pc = 0x1E5FD0u;
    SET_GPR_U32(ctx, 31, 0x1E5FD8u);
    ctx->pc = 0x1E5FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FD0u;
            // 0x1e5fd4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FD8u; }
        if (ctx->pc != 0x1E5FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FD8u; }
        if (ctx->pc != 0x1E5FD8u) { return; }
    }
    ctx->pc = 0x1E5FD8u;
label_1e5fd8:
    // 0x1e5fd8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e5fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e5fdc:
    // 0x1e5fdc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1e5fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1e5fe0:
    // 0x1e5fe0: 0xc0652ec  jal         func_194BB0
label_1e5fe4:
    if (ctx->pc == 0x1E5FE4u) {
        ctx->pc = 0x1E5FE4u;
            // 0x1e5fe4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FE8u;
        goto label_1e5fe8;
    }
    ctx->pc = 0x1E5FE0u;
    SET_GPR_U32(ctx, 31, 0x1E5FE8u);
    ctx->pc = 0x1E5FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FE0u;
            // 0x1e5fe4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FE8u; }
        if (ctx->pc != 0x1E5FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FE8u; }
        if (ctx->pc != 0x1E5FE8u) { return; }
    }
    ctx->pc = 0x1E5FE8u;
label_1e5fe8:
    // 0x1e5fe8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e5fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e5fec:
    // 0x1e5fec: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1e5fecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1e5ff0:
    // 0x1e5ff0: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1e5ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_1e5ff4:
    // 0x1e5ff4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1e5ff8:
    if (ctx->pc == 0x1E5FF8u) {
        ctx->pc = 0x1E5FF8u;
            // 0x1e5ff8: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x1E5FFCu;
        goto label_1e5ffc;
    }
    ctx->pc = 0x1E5FF4u;
    {
        const bool branch_taken_0x1e5ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FF4u;
            // 0x1e5ff8: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ff4) {
            ctx->pc = 0x1E5FC8u;
            goto label_1e5fc8;
        }
    }
    ctx->pc = 0x1E5FFCu;
label_1e5ffc:
    // 0x1e5ffc: 0x10000014  b           . + 4 + (0x14 << 2)
label_1e6000:
    if (ctx->pc == 0x1E6000u) {
        ctx->pc = 0x1E6004u;
        goto label_1e6004;
    }
    ctx->pc = 0x1E5FFCu;
    {
        const bool branch_taken_0x1e5ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5ffc) {
            ctx->pc = 0x1E6050u;
            goto label_1e6050;
        }
    }
    ctx->pc = 0x1E6004u;
label_1e6004:
    // 0x1e6004: 0x0  nop
    ctx->pc = 0x1e6004u;
    // NOP
label_1e6008:
    // 0x1e6008: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e6008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e600c:
    // 0x1e600c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e600cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6010:
    // 0x1e6010: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1e6010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e6014:
    // 0x1e6014: 0x0  nop
    ctx->pc = 0x1e6014u;
    // NOP
label_1e6018:
    // 0x1e6018: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e6018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e601c:
    // 0x1e601c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1e601cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1e6020:
    // 0x1e6020: 0xc06530c  jal         func_194C30
label_1e6024:
    if (ctx->pc == 0x1E6024u) {
        ctx->pc = 0x1E6024u;
            // 0x1e6024: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6028u;
        goto label_1e6028;
    }
    ctx->pc = 0x1E6020u;
    SET_GPR_U32(ctx, 31, 0x1E6028u);
    ctx->pc = 0x1E6024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6020u;
            // 0x1e6024: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6028u; }
        if (ctx->pc != 0x1E6028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6028u; }
        if (ctx->pc != 0x1E6028u) { return; }
    }
    ctx->pc = 0x1E6028u;
label_1e6028:
    // 0x1e6028: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e6028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e602c:
    // 0x1e602c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1e602cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1e6030:
    // 0x1e6030: 0xc0652ec  jal         func_194BB0
label_1e6034:
    if (ctx->pc == 0x1E6034u) {
        ctx->pc = 0x1E6034u;
            // 0x1e6034: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6038u;
        goto label_1e6038;
    }
    ctx->pc = 0x1E6030u;
    SET_GPR_U32(ctx, 31, 0x1E6038u);
    ctx->pc = 0x1E6034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6030u;
            // 0x1e6034: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6038u; }
        if (ctx->pc != 0x1E6038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6038u; }
        if (ctx->pc != 0x1E6038u) { return; }
    }
    ctx->pc = 0x1E6038u;
label_1e6038:
    // 0x1e6038: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e6038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e603c:
    // 0x1e603c: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x1e603cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_1e6040:
    // 0x1e6040: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x1e6040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_1e6044:
    // 0x1e6044: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1e6048:
    if (ctx->pc == 0x1E6048u) {
        ctx->pc = 0x1E6048u;
            // 0x1e6048: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->pc = 0x1E604Cu;
        goto label_1e604c;
    }
    ctx->pc = 0x1E6044u;
    {
        const bool branch_taken_0x1e6044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6044u;
            // 0x1e6048: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6044) {
            ctx->pc = 0x1E6018u;
            goto label_1e6018;
        }
    }
    ctx->pc = 0x1E604Cu;
label_1e604c:
    // 0x1e604c: 0x0  nop
    ctx->pc = 0x1e604cu;
    // NOP
label_1e6050:
    // 0x1e6050: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e6050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1e6054:
    // 0x1e6054: 0x40f809  jalr        $v0
label_1e6058:
    if (ctx->pc == 0x1E6058u) {
        ctx->pc = 0x1E6058u;
            // 0x1e6058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E605Cu;
        goto label_1e605c;
    }
    ctx->pc = 0x1E6054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E605Cu);
        ctx->pc = 0x1E6058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6054u;
            // 0x1e6058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5A90u: goto label_1e5a90;
            case 0x1E5A94u: goto label_1e5a94;
            case 0x1E5A98u: goto label_1e5a98;
            case 0x1E5A9Cu: goto label_1e5a9c;
            case 0x1E5AA0u: goto label_1e5aa0;
            case 0x1E5AA4u: goto label_1e5aa4;
            case 0x1E5AA8u: goto label_1e5aa8;
            case 0x1E5AACu: goto label_1e5aac;
            case 0x1E5AB0u: goto label_1e5ab0;
            case 0x1E5AB4u: goto label_1e5ab4;
            case 0x1E5AB8u: goto label_1e5ab8;
            case 0x1E5ABCu: goto label_1e5abc;
            case 0x1E5AC0u: goto label_1e5ac0;
            case 0x1E5AC4u: goto label_1e5ac4;
            case 0x1E5AC8u: goto label_1e5ac8;
            case 0x1E5ACCu: goto label_1e5acc;
            case 0x1E5AD0u: goto label_1e5ad0;
            case 0x1E5AD4u: goto label_1e5ad4;
            case 0x1E5AD8u: goto label_1e5ad8;
            case 0x1E5ADCu: goto label_1e5adc;
            case 0x1E5AE0u: goto label_1e5ae0;
            case 0x1E5AE4u: goto label_1e5ae4;
            case 0x1E5AE8u: goto label_1e5ae8;
            case 0x1E5AECu: goto label_1e5aec;
            case 0x1E5AF0u: goto label_1e5af0;
            case 0x1E5AF4u: goto label_1e5af4;
            case 0x1E5AF8u: goto label_1e5af8;
            case 0x1E5AFCu: goto label_1e5afc;
            case 0x1E5B00u: goto label_1e5b00;
            case 0x1E5B04u: goto label_1e5b04;
            case 0x1E5B08u: goto label_1e5b08;
            case 0x1E5B0Cu: goto label_1e5b0c;
            case 0x1E5B10u: goto label_1e5b10;
            case 0x1E5B14u: goto label_1e5b14;
            case 0x1E5B18u: goto label_1e5b18;
            case 0x1E5B1Cu: goto label_1e5b1c;
            case 0x1E5B20u: goto label_1e5b20;
            case 0x1E5B24u: goto label_1e5b24;
            case 0x1E5B28u: goto label_1e5b28;
            case 0x1E5B2Cu: goto label_1e5b2c;
            case 0x1E5B30u: goto label_1e5b30;
            case 0x1E5B34u: goto label_1e5b34;
            case 0x1E5B38u: goto label_1e5b38;
            case 0x1E5B3Cu: goto label_1e5b3c;
            case 0x1E5B40u: goto label_1e5b40;
            case 0x1E5B44u: goto label_1e5b44;
            case 0x1E5B48u: goto label_1e5b48;
            case 0x1E5B4Cu: goto label_1e5b4c;
            case 0x1E5B50u: goto label_1e5b50;
            case 0x1E5B54u: goto label_1e5b54;
            case 0x1E5B58u: goto label_1e5b58;
            case 0x1E5B5Cu: goto label_1e5b5c;
            case 0x1E5B60u: goto label_1e5b60;
            case 0x1E5B64u: goto label_1e5b64;
            case 0x1E5B68u: goto label_1e5b68;
            case 0x1E5B6Cu: goto label_1e5b6c;
            case 0x1E5B70u: goto label_1e5b70;
            case 0x1E5B74u: goto label_1e5b74;
            case 0x1E5B78u: goto label_1e5b78;
            case 0x1E5B7Cu: goto label_1e5b7c;
            case 0x1E5B80u: goto label_1e5b80;
            case 0x1E5B84u: goto label_1e5b84;
            case 0x1E5B88u: goto label_1e5b88;
            case 0x1E5B8Cu: goto label_1e5b8c;
            case 0x1E5B90u: goto label_1e5b90;
            case 0x1E5B94u: goto label_1e5b94;
            case 0x1E5B98u: goto label_1e5b98;
            case 0x1E5B9Cu: goto label_1e5b9c;
            case 0x1E5BA0u: goto label_1e5ba0;
            case 0x1E5BA4u: goto label_1e5ba4;
            case 0x1E5BA8u: goto label_1e5ba8;
            case 0x1E5BACu: goto label_1e5bac;
            case 0x1E5BB0u: goto label_1e5bb0;
            case 0x1E5BB4u: goto label_1e5bb4;
            case 0x1E5BB8u: goto label_1e5bb8;
            case 0x1E5BBCu: goto label_1e5bbc;
            case 0x1E5BC0u: goto label_1e5bc0;
            case 0x1E5BC4u: goto label_1e5bc4;
            case 0x1E5BC8u: goto label_1e5bc8;
            case 0x1E5BCCu: goto label_1e5bcc;
            case 0x1E5BD0u: goto label_1e5bd0;
            case 0x1E5BD4u: goto label_1e5bd4;
            case 0x1E5BD8u: goto label_1e5bd8;
            case 0x1E5BDCu: goto label_1e5bdc;
            case 0x1E5BE0u: goto label_1e5be0;
            case 0x1E5BE4u: goto label_1e5be4;
            case 0x1E5BE8u: goto label_1e5be8;
            case 0x1E5BECu: goto label_1e5bec;
            case 0x1E5BF0u: goto label_1e5bf0;
            case 0x1E5BF4u: goto label_1e5bf4;
            case 0x1E5BF8u: goto label_1e5bf8;
            case 0x1E5BFCu: goto label_1e5bfc;
            case 0x1E5C00u: goto label_1e5c00;
            case 0x1E5C04u: goto label_1e5c04;
            case 0x1E5C08u: goto label_1e5c08;
            case 0x1E5C0Cu: goto label_1e5c0c;
            case 0x1E5C10u: goto label_1e5c10;
            case 0x1E5C14u: goto label_1e5c14;
            case 0x1E5C18u: goto label_1e5c18;
            case 0x1E5C1Cu: goto label_1e5c1c;
            case 0x1E5C20u: goto label_1e5c20;
            case 0x1E5C24u: goto label_1e5c24;
            case 0x1E5C28u: goto label_1e5c28;
            case 0x1E5C2Cu: goto label_1e5c2c;
            case 0x1E5C30u: goto label_1e5c30;
            case 0x1E5C34u: goto label_1e5c34;
            case 0x1E5C38u: goto label_1e5c38;
            case 0x1E5C3Cu: goto label_1e5c3c;
            case 0x1E5C40u: goto label_1e5c40;
            case 0x1E5C44u: goto label_1e5c44;
            case 0x1E5C48u: goto label_1e5c48;
            case 0x1E5C4Cu: goto label_1e5c4c;
            case 0x1E5C50u: goto label_1e5c50;
            case 0x1E5C54u: goto label_1e5c54;
            case 0x1E5C58u: goto label_1e5c58;
            case 0x1E5C5Cu: goto label_1e5c5c;
            case 0x1E5C60u: goto label_1e5c60;
            case 0x1E5C64u: goto label_1e5c64;
            case 0x1E5C68u: goto label_1e5c68;
            case 0x1E5C6Cu: goto label_1e5c6c;
            case 0x1E5C70u: goto label_1e5c70;
            case 0x1E5C74u: goto label_1e5c74;
            case 0x1E5C78u: goto label_1e5c78;
            case 0x1E5C7Cu: goto label_1e5c7c;
            case 0x1E5C80u: goto label_1e5c80;
            case 0x1E5C84u: goto label_1e5c84;
            case 0x1E5C88u: goto label_1e5c88;
            case 0x1E5C8Cu: goto label_1e5c8c;
            case 0x1E5C90u: goto label_1e5c90;
            case 0x1E5C94u: goto label_1e5c94;
            case 0x1E5C98u: goto label_1e5c98;
            case 0x1E5C9Cu: goto label_1e5c9c;
            case 0x1E5CA0u: goto label_1e5ca0;
            case 0x1E5CA4u: goto label_1e5ca4;
            case 0x1E5CA8u: goto label_1e5ca8;
            case 0x1E5CACu: goto label_1e5cac;
            case 0x1E5CB0u: goto label_1e5cb0;
            case 0x1E5CB4u: goto label_1e5cb4;
            case 0x1E5CB8u: goto label_1e5cb8;
            case 0x1E5CBCu: goto label_1e5cbc;
            case 0x1E5CC0u: goto label_1e5cc0;
            case 0x1E5CC4u: goto label_1e5cc4;
            case 0x1E5CC8u: goto label_1e5cc8;
            case 0x1E5CCCu: goto label_1e5ccc;
            case 0x1E5CD0u: goto label_1e5cd0;
            case 0x1E5CD4u: goto label_1e5cd4;
            case 0x1E5CD8u: goto label_1e5cd8;
            case 0x1E5CDCu: goto label_1e5cdc;
            case 0x1E5CE0u: goto label_1e5ce0;
            case 0x1E5CE4u: goto label_1e5ce4;
            case 0x1E5CE8u: goto label_1e5ce8;
            case 0x1E5CECu: goto label_1e5cec;
            case 0x1E5CF0u: goto label_1e5cf0;
            case 0x1E5CF4u: goto label_1e5cf4;
            case 0x1E5CF8u: goto label_1e5cf8;
            case 0x1E5CFCu: goto label_1e5cfc;
            case 0x1E5D00u: goto label_1e5d00;
            case 0x1E5D04u: goto label_1e5d04;
            case 0x1E5D08u: goto label_1e5d08;
            case 0x1E5D0Cu: goto label_1e5d0c;
            case 0x1E5D10u: goto label_1e5d10;
            case 0x1E5D14u: goto label_1e5d14;
            case 0x1E5D18u: goto label_1e5d18;
            case 0x1E5D1Cu: goto label_1e5d1c;
            case 0x1E5D20u: goto label_1e5d20;
            case 0x1E5D24u: goto label_1e5d24;
            case 0x1E5D28u: goto label_1e5d28;
            case 0x1E5D2Cu: goto label_1e5d2c;
            case 0x1E5D30u: goto label_1e5d30;
            case 0x1E5D34u: goto label_1e5d34;
            case 0x1E5D38u: goto label_1e5d38;
            case 0x1E5D3Cu: goto label_1e5d3c;
            case 0x1E5D40u: goto label_1e5d40;
            case 0x1E5D44u: goto label_1e5d44;
            case 0x1E5D48u: goto label_1e5d48;
            case 0x1E5D4Cu: goto label_1e5d4c;
            case 0x1E5D50u: goto label_1e5d50;
            case 0x1E5D54u: goto label_1e5d54;
            case 0x1E5D58u: goto label_1e5d58;
            case 0x1E5D5Cu: goto label_1e5d5c;
            case 0x1E5D60u: goto label_1e5d60;
            case 0x1E5D64u: goto label_1e5d64;
            case 0x1E5D68u: goto label_1e5d68;
            case 0x1E5D6Cu: goto label_1e5d6c;
            case 0x1E5D70u: goto label_1e5d70;
            case 0x1E5D74u: goto label_1e5d74;
            case 0x1E5D78u: goto label_1e5d78;
            case 0x1E5D7Cu: goto label_1e5d7c;
            case 0x1E5D80u: goto label_1e5d80;
            case 0x1E5D84u: goto label_1e5d84;
            case 0x1E5D88u: goto label_1e5d88;
            case 0x1E5D8Cu: goto label_1e5d8c;
            case 0x1E5D90u: goto label_1e5d90;
            case 0x1E5D94u: goto label_1e5d94;
            case 0x1E5D98u: goto label_1e5d98;
            case 0x1E5D9Cu: goto label_1e5d9c;
            case 0x1E5DA0u: goto label_1e5da0;
            case 0x1E5DA4u: goto label_1e5da4;
            case 0x1E5DA8u: goto label_1e5da8;
            case 0x1E5DACu: goto label_1e5dac;
            case 0x1E5DB0u: goto label_1e5db0;
            case 0x1E5DB4u: goto label_1e5db4;
            case 0x1E5DB8u: goto label_1e5db8;
            case 0x1E5DBCu: goto label_1e5dbc;
            case 0x1E5DC0u: goto label_1e5dc0;
            case 0x1E5DC4u: goto label_1e5dc4;
            case 0x1E5DC8u: goto label_1e5dc8;
            case 0x1E5DCCu: goto label_1e5dcc;
            case 0x1E5DD0u: goto label_1e5dd0;
            case 0x1E5DD4u: goto label_1e5dd4;
            case 0x1E5DD8u: goto label_1e5dd8;
            case 0x1E5DDCu: goto label_1e5ddc;
            case 0x1E5DE0u: goto label_1e5de0;
            case 0x1E5DE4u: goto label_1e5de4;
            case 0x1E5DE8u: goto label_1e5de8;
            case 0x1E5DECu: goto label_1e5dec;
            case 0x1E5DF0u: goto label_1e5df0;
            case 0x1E5DF4u: goto label_1e5df4;
            case 0x1E5DF8u: goto label_1e5df8;
            case 0x1E5DFCu: goto label_1e5dfc;
            case 0x1E5E00u: goto label_1e5e00;
            case 0x1E5E04u: goto label_1e5e04;
            case 0x1E5E08u: goto label_1e5e08;
            case 0x1E5E0Cu: goto label_1e5e0c;
            case 0x1E5E10u: goto label_1e5e10;
            case 0x1E5E14u: goto label_1e5e14;
            case 0x1E5E18u: goto label_1e5e18;
            case 0x1E5E1Cu: goto label_1e5e1c;
            case 0x1E5E20u: goto label_1e5e20;
            case 0x1E5E24u: goto label_1e5e24;
            case 0x1E5E28u: goto label_1e5e28;
            case 0x1E5E2Cu: goto label_1e5e2c;
            case 0x1E5E30u: goto label_1e5e30;
            case 0x1E5E34u: goto label_1e5e34;
            case 0x1E5E38u: goto label_1e5e38;
            case 0x1E5E3Cu: goto label_1e5e3c;
            case 0x1E5E40u: goto label_1e5e40;
            case 0x1E5E44u: goto label_1e5e44;
            case 0x1E5E48u: goto label_1e5e48;
            case 0x1E5E4Cu: goto label_1e5e4c;
            case 0x1E5E50u: goto label_1e5e50;
            case 0x1E5E54u: goto label_1e5e54;
            case 0x1E5E58u: goto label_1e5e58;
            case 0x1E5E5Cu: goto label_1e5e5c;
            case 0x1E5E60u: goto label_1e5e60;
            case 0x1E5E64u: goto label_1e5e64;
            case 0x1E5E68u: goto label_1e5e68;
            case 0x1E5E6Cu: goto label_1e5e6c;
            case 0x1E5E70u: goto label_1e5e70;
            case 0x1E5E74u: goto label_1e5e74;
            case 0x1E5E78u: goto label_1e5e78;
            case 0x1E5E7Cu: goto label_1e5e7c;
            case 0x1E5E80u: goto label_1e5e80;
            case 0x1E5E84u: goto label_1e5e84;
            case 0x1E5E88u: goto label_1e5e88;
            case 0x1E5E8Cu: goto label_1e5e8c;
            case 0x1E5E90u: goto label_1e5e90;
            case 0x1E5E94u: goto label_1e5e94;
            case 0x1E5E98u: goto label_1e5e98;
            case 0x1E5E9Cu: goto label_1e5e9c;
            case 0x1E5EA0u: goto label_1e5ea0;
            case 0x1E5EA4u: goto label_1e5ea4;
            case 0x1E5EA8u: goto label_1e5ea8;
            case 0x1E5EACu: goto label_1e5eac;
            case 0x1E5EB0u: goto label_1e5eb0;
            case 0x1E5EB4u: goto label_1e5eb4;
            case 0x1E5EB8u: goto label_1e5eb8;
            case 0x1E5EBCu: goto label_1e5ebc;
            case 0x1E5EC0u: goto label_1e5ec0;
            case 0x1E5EC4u: goto label_1e5ec4;
            case 0x1E5EC8u: goto label_1e5ec8;
            case 0x1E5ECCu: goto label_1e5ecc;
            case 0x1E5ED0u: goto label_1e5ed0;
            case 0x1E5ED4u: goto label_1e5ed4;
            case 0x1E5ED8u: goto label_1e5ed8;
            case 0x1E5EDCu: goto label_1e5edc;
            case 0x1E5EE0u: goto label_1e5ee0;
            case 0x1E5EE4u: goto label_1e5ee4;
            case 0x1E5EE8u: goto label_1e5ee8;
            case 0x1E5EECu: goto label_1e5eec;
            case 0x1E5EF0u: goto label_1e5ef0;
            case 0x1E5EF4u: goto label_1e5ef4;
            case 0x1E5EF8u: goto label_1e5ef8;
            case 0x1E5EFCu: goto label_1e5efc;
            case 0x1E5F00u: goto label_1e5f00;
            case 0x1E5F04u: goto label_1e5f04;
            case 0x1E5F08u: goto label_1e5f08;
            case 0x1E5F0Cu: goto label_1e5f0c;
            case 0x1E5F10u: goto label_1e5f10;
            case 0x1E5F14u: goto label_1e5f14;
            case 0x1E5F18u: goto label_1e5f18;
            case 0x1E5F1Cu: goto label_1e5f1c;
            case 0x1E5F20u: goto label_1e5f20;
            case 0x1E5F24u: goto label_1e5f24;
            case 0x1E5F28u: goto label_1e5f28;
            case 0x1E5F2Cu: goto label_1e5f2c;
            case 0x1E5F30u: goto label_1e5f30;
            case 0x1E5F34u: goto label_1e5f34;
            case 0x1E5F38u: goto label_1e5f38;
            case 0x1E5F3Cu: goto label_1e5f3c;
            case 0x1E5F40u: goto label_1e5f40;
            case 0x1E5F44u: goto label_1e5f44;
            case 0x1E5F48u: goto label_1e5f48;
            case 0x1E5F4Cu: goto label_1e5f4c;
            case 0x1E5F50u: goto label_1e5f50;
            case 0x1E5F54u: goto label_1e5f54;
            case 0x1E5F58u: goto label_1e5f58;
            case 0x1E5F5Cu: goto label_1e5f5c;
            case 0x1E5F60u: goto label_1e5f60;
            case 0x1E5F64u: goto label_1e5f64;
            case 0x1E5F68u: goto label_1e5f68;
            case 0x1E5F6Cu: goto label_1e5f6c;
            case 0x1E5F70u: goto label_1e5f70;
            case 0x1E5F74u: goto label_1e5f74;
            case 0x1E5F78u: goto label_1e5f78;
            case 0x1E5F7Cu: goto label_1e5f7c;
            case 0x1E5F80u: goto label_1e5f80;
            case 0x1E5F84u: goto label_1e5f84;
            case 0x1E5F88u: goto label_1e5f88;
            case 0x1E5F8Cu: goto label_1e5f8c;
            case 0x1E5F90u: goto label_1e5f90;
            case 0x1E5F94u: goto label_1e5f94;
            case 0x1E5F98u: goto label_1e5f98;
            case 0x1E5F9Cu: goto label_1e5f9c;
            case 0x1E5FA0u: goto label_1e5fa0;
            case 0x1E5FA4u: goto label_1e5fa4;
            case 0x1E5FA8u: goto label_1e5fa8;
            case 0x1E5FACu: goto label_1e5fac;
            case 0x1E5FB0u: goto label_1e5fb0;
            case 0x1E5FB4u: goto label_1e5fb4;
            case 0x1E5FB8u: goto label_1e5fb8;
            case 0x1E5FBCu: goto label_1e5fbc;
            case 0x1E5FC0u: goto label_1e5fc0;
            case 0x1E5FC4u: goto label_1e5fc4;
            case 0x1E5FC8u: goto label_1e5fc8;
            case 0x1E5FCCu: goto label_1e5fcc;
            case 0x1E5FD0u: goto label_1e5fd0;
            case 0x1E5FD4u: goto label_1e5fd4;
            case 0x1E5FD8u: goto label_1e5fd8;
            case 0x1E5FDCu: goto label_1e5fdc;
            case 0x1E5FE0u: goto label_1e5fe0;
            case 0x1E5FE4u: goto label_1e5fe4;
            case 0x1E5FE8u: goto label_1e5fe8;
            case 0x1E5FECu: goto label_1e5fec;
            case 0x1E5FF0u: goto label_1e5ff0;
            case 0x1E5FF4u: goto label_1e5ff4;
            case 0x1E5FF8u: goto label_1e5ff8;
            case 0x1E5FFCu: goto label_1e5ffc;
            case 0x1E6000u: goto label_1e6000;
            case 0x1E6004u: goto label_1e6004;
            case 0x1E6008u: goto label_1e6008;
            case 0x1E600Cu: goto label_1e600c;
            case 0x1E6010u: goto label_1e6010;
            case 0x1E6014u: goto label_1e6014;
            case 0x1E6018u: goto label_1e6018;
            case 0x1E601Cu: goto label_1e601c;
            case 0x1E6020u: goto label_1e6020;
            case 0x1E6024u: goto label_1e6024;
            case 0x1E6028u: goto label_1e6028;
            case 0x1E602Cu: goto label_1e602c;
            case 0x1E6030u: goto label_1e6030;
            case 0x1E6034u: goto label_1e6034;
            case 0x1E6038u: goto label_1e6038;
            case 0x1E603Cu: goto label_1e603c;
            case 0x1E6040u: goto label_1e6040;
            case 0x1E6044u: goto label_1e6044;
            case 0x1E6048u: goto label_1e6048;
            case 0x1E604Cu: goto label_1e604c;
            case 0x1E6050u: goto label_1e6050;
            case 0x1E6054u: goto label_1e6054;
            case 0x1E6058u: goto label_1e6058;
            case 0x1E605Cu: goto label_1e605c;
            case 0x1E6060u: goto label_1e6060;
            case 0x1E6064u: goto label_1e6064;
            case 0x1E6068u: goto label_1e6068;
            case 0x1E606Cu: goto label_1e606c;
            case 0x1E6070u: goto label_1e6070;
            case 0x1E6074u: goto label_1e6074;
            case 0x1E6078u: goto label_1e6078;
            case 0x1E607Cu: goto label_1e607c;
            case 0x1E6080u: goto label_1e6080;
            case 0x1E6084u: goto label_1e6084;
            case 0x1E6088u: goto label_1e6088;
            case 0x1E608Cu: goto label_1e608c;
            case 0x1E6090u: goto label_1e6090;
            case 0x1E6094u: goto label_1e6094;
            case 0x1E6098u: goto label_1e6098;
            case 0x1E609Cu: goto label_1e609c;
            case 0x1E60A0u: goto label_1e60a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E605Cu; }
            if (ctx->pc != 0x1E605Cu) { return; }
        }
    }
    ctx->pc = 0x1E605Cu;
label_1e605c:
    // 0x1e605c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e6060:
    if (ctx->pc == 0x1E6060u) {
        ctx->pc = 0x1E6064u;
        goto label_1e6064;
    }
    ctx->pc = 0x1E605Cu;
    {
        const bool branch_taken_0x1e605c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e605c) {
            ctx->pc = 0x1E6088u;
            goto label_1e6088;
        }
    }
    ctx->pc = 0x1E6064u;
label_1e6064:
    // 0x1e6064: 0x0  nop
    ctx->pc = 0x1e6064u;
    // NOP
label_1e6068:
    // 0x1e6068: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e6068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
label_1e606c:
    // 0x1e606c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e6070:
    // 0x1e6070: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1e6070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1e6074:
    // 0x1e6074: 0x24c65880  addiu       $a2, $a2, 0x5880
    ctx->pc = 0x1e6074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22656));
label_1e6078:
    // 0x1e6078: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e6078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e607c:
    // 0x1e607c: 0xc053ca4  jal         func_14F290
label_1e6080:
    if (ctx->pc == 0x1E6080u) {
        ctx->pc = 0x1E6080u;
            // 0x1e6080: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6084u;
        goto label_1e6084;
    }
    ctx->pc = 0x1E607Cu;
    SET_GPR_U32(ctx, 31, 0x1E6084u);
    ctx->pc = 0x1E6080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E607Cu;
            // 0x1e6080: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6084u; }
        if (ctx->pc != 0x1E6084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6084u; }
        if (ctx->pc != 0x1E6084u) { return; }
    }
    ctx->pc = 0x1E6084u;
label_1e6084:
    // 0x1e6084: 0x0  nop
    ctx->pc = 0x1e6084u;
    // NOP
label_1e6088:
    // 0x1e6088: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e6088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e608c:
    // 0x1e608c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e608cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6090:
    // 0x1e6090: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e6090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6094:
    // 0x1e6094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6098:
    // 0x1e6098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e609c:
    // 0x1e609c: 0x3e00008  jr          $ra
label_1e60a0:
    if (ctx->pc == 0x1E60A0u) {
        ctx->pc = 0x1E60A0u;
            // 0x1e60a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E60A4u;
        goto label_fallthrough_0x1e609c;
    }
    ctx->pc = 0x1E609Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E60A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E609Cu;
            // 0x1e60a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5A90u: goto label_1e5a90;
            case 0x1E5A94u: goto label_1e5a94;
            case 0x1E5A98u: goto label_1e5a98;
            case 0x1E5A9Cu: goto label_1e5a9c;
            case 0x1E5AA0u: goto label_1e5aa0;
            case 0x1E5AA4u: goto label_1e5aa4;
            case 0x1E5AA8u: goto label_1e5aa8;
            case 0x1E5AACu: goto label_1e5aac;
            case 0x1E5AB0u: goto label_1e5ab0;
            case 0x1E5AB4u: goto label_1e5ab4;
            case 0x1E5AB8u: goto label_1e5ab8;
            case 0x1E5ABCu: goto label_1e5abc;
            case 0x1E5AC0u: goto label_1e5ac0;
            case 0x1E5AC4u: goto label_1e5ac4;
            case 0x1E5AC8u: goto label_1e5ac8;
            case 0x1E5ACCu: goto label_1e5acc;
            case 0x1E5AD0u: goto label_1e5ad0;
            case 0x1E5AD4u: goto label_1e5ad4;
            case 0x1E5AD8u: goto label_1e5ad8;
            case 0x1E5ADCu: goto label_1e5adc;
            case 0x1E5AE0u: goto label_1e5ae0;
            case 0x1E5AE4u: goto label_1e5ae4;
            case 0x1E5AE8u: goto label_1e5ae8;
            case 0x1E5AECu: goto label_1e5aec;
            case 0x1E5AF0u: goto label_1e5af0;
            case 0x1E5AF4u: goto label_1e5af4;
            case 0x1E5AF8u: goto label_1e5af8;
            case 0x1E5AFCu: goto label_1e5afc;
            case 0x1E5B00u: goto label_1e5b00;
            case 0x1E5B04u: goto label_1e5b04;
            case 0x1E5B08u: goto label_1e5b08;
            case 0x1E5B0Cu: goto label_1e5b0c;
            case 0x1E5B10u: goto label_1e5b10;
            case 0x1E5B14u: goto label_1e5b14;
            case 0x1E5B18u: goto label_1e5b18;
            case 0x1E5B1Cu: goto label_1e5b1c;
            case 0x1E5B20u: goto label_1e5b20;
            case 0x1E5B24u: goto label_1e5b24;
            case 0x1E5B28u: goto label_1e5b28;
            case 0x1E5B2Cu: goto label_1e5b2c;
            case 0x1E5B30u: goto label_1e5b30;
            case 0x1E5B34u: goto label_1e5b34;
            case 0x1E5B38u: goto label_1e5b38;
            case 0x1E5B3Cu: goto label_1e5b3c;
            case 0x1E5B40u: goto label_1e5b40;
            case 0x1E5B44u: goto label_1e5b44;
            case 0x1E5B48u: goto label_1e5b48;
            case 0x1E5B4Cu: goto label_1e5b4c;
            case 0x1E5B50u: goto label_1e5b50;
            case 0x1E5B54u: goto label_1e5b54;
            case 0x1E5B58u: goto label_1e5b58;
            case 0x1E5B5Cu: goto label_1e5b5c;
            case 0x1E5B60u: goto label_1e5b60;
            case 0x1E5B64u: goto label_1e5b64;
            case 0x1E5B68u: goto label_1e5b68;
            case 0x1E5B6Cu: goto label_1e5b6c;
            case 0x1E5B70u: goto label_1e5b70;
            case 0x1E5B74u: goto label_1e5b74;
            case 0x1E5B78u: goto label_1e5b78;
            case 0x1E5B7Cu: goto label_1e5b7c;
            case 0x1E5B80u: goto label_1e5b80;
            case 0x1E5B84u: goto label_1e5b84;
            case 0x1E5B88u: goto label_1e5b88;
            case 0x1E5B8Cu: goto label_1e5b8c;
            case 0x1E5B90u: goto label_1e5b90;
            case 0x1E5B94u: goto label_1e5b94;
            case 0x1E5B98u: goto label_1e5b98;
            case 0x1E5B9Cu: goto label_1e5b9c;
            case 0x1E5BA0u: goto label_1e5ba0;
            case 0x1E5BA4u: goto label_1e5ba4;
            case 0x1E5BA8u: goto label_1e5ba8;
            case 0x1E5BACu: goto label_1e5bac;
            case 0x1E5BB0u: goto label_1e5bb0;
            case 0x1E5BB4u: goto label_1e5bb4;
            case 0x1E5BB8u: goto label_1e5bb8;
            case 0x1E5BBCu: goto label_1e5bbc;
            case 0x1E5BC0u: goto label_1e5bc0;
            case 0x1E5BC4u: goto label_1e5bc4;
            case 0x1E5BC8u: goto label_1e5bc8;
            case 0x1E5BCCu: goto label_1e5bcc;
            case 0x1E5BD0u: goto label_1e5bd0;
            case 0x1E5BD4u: goto label_1e5bd4;
            case 0x1E5BD8u: goto label_1e5bd8;
            case 0x1E5BDCu: goto label_1e5bdc;
            case 0x1E5BE0u: goto label_1e5be0;
            case 0x1E5BE4u: goto label_1e5be4;
            case 0x1E5BE8u: goto label_1e5be8;
            case 0x1E5BECu: goto label_1e5bec;
            case 0x1E5BF0u: goto label_1e5bf0;
            case 0x1E5BF4u: goto label_1e5bf4;
            case 0x1E5BF8u: goto label_1e5bf8;
            case 0x1E5BFCu: goto label_1e5bfc;
            case 0x1E5C00u: goto label_1e5c00;
            case 0x1E5C04u: goto label_1e5c04;
            case 0x1E5C08u: goto label_1e5c08;
            case 0x1E5C0Cu: goto label_1e5c0c;
            case 0x1E5C10u: goto label_1e5c10;
            case 0x1E5C14u: goto label_1e5c14;
            case 0x1E5C18u: goto label_1e5c18;
            case 0x1E5C1Cu: goto label_1e5c1c;
            case 0x1E5C20u: goto label_1e5c20;
            case 0x1E5C24u: goto label_1e5c24;
            case 0x1E5C28u: goto label_1e5c28;
            case 0x1E5C2Cu: goto label_1e5c2c;
            case 0x1E5C30u: goto label_1e5c30;
            case 0x1E5C34u: goto label_1e5c34;
            case 0x1E5C38u: goto label_1e5c38;
            case 0x1E5C3Cu: goto label_1e5c3c;
            case 0x1E5C40u: goto label_1e5c40;
            case 0x1E5C44u: goto label_1e5c44;
            case 0x1E5C48u: goto label_1e5c48;
            case 0x1E5C4Cu: goto label_1e5c4c;
            case 0x1E5C50u: goto label_1e5c50;
            case 0x1E5C54u: goto label_1e5c54;
            case 0x1E5C58u: goto label_1e5c58;
            case 0x1E5C5Cu: goto label_1e5c5c;
            case 0x1E5C60u: goto label_1e5c60;
            case 0x1E5C64u: goto label_1e5c64;
            case 0x1E5C68u: goto label_1e5c68;
            case 0x1E5C6Cu: goto label_1e5c6c;
            case 0x1E5C70u: goto label_1e5c70;
            case 0x1E5C74u: goto label_1e5c74;
            case 0x1E5C78u: goto label_1e5c78;
            case 0x1E5C7Cu: goto label_1e5c7c;
            case 0x1E5C80u: goto label_1e5c80;
            case 0x1E5C84u: goto label_1e5c84;
            case 0x1E5C88u: goto label_1e5c88;
            case 0x1E5C8Cu: goto label_1e5c8c;
            case 0x1E5C90u: goto label_1e5c90;
            case 0x1E5C94u: goto label_1e5c94;
            case 0x1E5C98u: goto label_1e5c98;
            case 0x1E5C9Cu: goto label_1e5c9c;
            case 0x1E5CA0u: goto label_1e5ca0;
            case 0x1E5CA4u: goto label_1e5ca4;
            case 0x1E5CA8u: goto label_1e5ca8;
            case 0x1E5CACu: goto label_1e5cac;
            case 0x1E5CB0u: goto label_1e5cb0;
            case 0x1E5CB4u: goto label_1e5cb4;
            case 0x1E5CB8u: goto label_1e5cb8;
            case 0x1E5CBCu: goto label_1e5cbc;
            case 0x1E5CC0u: goto label_1e5cc0;
            case 0x1E5CC4u: goto label_1e5cc4;
            case 0x1E5CC8u: goto label_1e5cc8;
            case 0x1E5CCCu: goto label_1e5ccc;
            case 0x1E5CD0u: goto label_1e5cd0;
            case 0x1E5CD4u: goto label_1e5cd4;
            case 0x1E5CD8u: goto label_1e5cd8;
            case 0x1E5CDCu: goto label_1e5cdc;
            case 0x1E5CE0u: goto label_1e5ce0;
            case 0x1E5CE4u: goto label_1e5ce4;
            case 0x1E5CE8u: goto label_1e5ce8;
            case 0x1E5CECu: goto label_1e5cec;
            case 0x1E5CF0u: goto label_1e5cf0;
            case 0x1E5CF4u: goto label_1e5cf4;
            case 0x1E5CF8u: goto label_1e5cf8;
            case 0x1E5CFCu: goto label_1e5cfc;
            case 0x1E5D00u: goto label_1e5d00;
            case 0x1E5D04u: goto label_1e5d04;
            case 0x1E5D08u: goto label_1e5d08;
            case 0x1E5D0Cu: goto label_1e5d0c;
            case 0x1E5D10u: goto label_1e5d10;
            case 0x1E5D14u: goto label_1e5d14;
            case 0x1E5D18u: goto label_1e5d18;
            case 0x1E5D1Cu: goto label_1e5d1c;
            case 0x1E5D20u: goto label_1e5d20;
            case 0x1E5D24u: goto label_1e5d24;
            case 0x1E5D28u: goto label_1e5d28;
            case 0x1E5D2Cu: goto label_1e5d2c;
            case 0x1E5D30u: goto label_1e5d30;
            case 0x1E5D34u: goto label_1e5d34;
            case 0x1E5D38u: goto label_1e5d38;
            case 0x1E5D3Cu: goto label_1e5d3c;
            case 0x1E5D40u: goto label_1e5d40;
            case 0x1E5D44u: goto label_1e5d44;
            case 0x1E5D48u: goto label_1e5d48;
            case 0x1E5D4Cu: goto label_1e5d4c;
            case 0x1E5D50u: goto label_1e5d50;
            case 0x1E5D54u: goto label_1e5d54;
            case 0x1E5D58u: goto label_1e5d58;
            case 0x1E5D5Cu: goto label_1e5d5c;
            case 0x1E5D60u: goto label_1e5d60;
            case 0x1E5D64u: goto label_1e5d64;
            case 0x1E5D68u: goto label_1e5d68;
            case 0x1E5D6Cu: goto label_1e5d6c;
            case 0x1E5D70u: goto label_1e5d70;
            case 0x1E5D74u: goto label_1e5d74;
            case 0x1E5D78u: goto label_1e5d78;
            case 0x1E5D7Cu: goto label_1e5d7c;
            case 0x1E5D80u: goto label_1e5d80;
            case 0x1E5D84u: goto label_1e5d84;
            case 0x1E5D88u: goto label_1e5d88;
            case 0x1E5D8Cu: goto label_1e5d8c;
            case 0x1E5D90u: goto label_1e5d90;
            case 0x1E5D94u: goto label_1e5d94;
            case 0x1E5D98u: goto label_1e5d98;
            case 0x1E5D9Cu: goto label_1e5d9c;
            case 0x1E5DA0u: goto label_1e5da0;
            case 0x1E5DA4u: goto label_1e5da4;
            case 0x1E5DA8u: goto label_1e5da8;
            case 0x1E5DACu: goto label_1e5dac;
            case 0x1E5DB0u: goto label_1e5db0;
            case 0x1E5DB4u: goto label_1e5db4;
            case 0x1E5DB8u: goto label_1e5db8;
            case 0x1E5DBCu: goto label_1e5dbc;
            case 0x1E5DC0u: goto label_1e5dc0;
            case 0x1E5DC4u: goto label_1e5dc4;
            case 0x1E5DC8u: goto label_1e5dc8;
            case 0x1E5DCCu: goto label_1e5dcc;
            case 0x1E5DD0u: goto label_1e5dd0;
            case 0x1E5DD4u: goto label_1e5dd4;
            case 0x1E5DD8u: goto label_1e5dd8;
            case 0x1E5DDCu: goto label_1e5ddc;
            case 0x1E5DE0u: goto label_1e5de0;
            case 0x1E5DE4u: goto label_1e5de4;
            case 0x1E5DE8u: goto label_1e5de8;
            case 0x1E5DECu: goto label_1e5dec;
            case 0x1E5DF0u: goto label_1e5df0;
            case 0x1E5DF4u: goto label_1e5df4;
            case 0x1E5DF8u: goto label_1e5df8;
            case 0x1E5DFCu: goto label_1e5dfc;
            case 0x1E5E00u: goto label_1e5e00;
            case 0x1E5E04u: goto label_1e5e04;
            case 0x1E5E08u: goto label_1e5e08;
            case 0x1E5E0Cu: goto label_1e5e0c;
            case 0x1E5E10u: goto label_1e5e10;
            case 0x1E5E14u: goto label_1e5e14;
            case 0x1E5E18u: goto label_1e5e18;
            case 0x1E5E1Cu: goto label_1e5e1c;
            case 0x1E5E20u: goto label_1e5e20;
            case 0x1E5E24u: goto label_1e5e24;
            case 0x1E5E28u: goto label_1e5e28;
            case 0x1E5E2Cu: goto label_1e5e2c;
            case 0x1E5E30u: goto label_1e5e30;
            case 0x1E5E34u: goto label_1e5e34;
            case 0x1E5E38u: goto label_1e5e38;
            case 0x1E5E3Cu: goto label_1e5e3c;
            case 0x1E5E40u: goto label_1e5e40;
            case 0x1E5E44u: goto label_1e5e44;
            case 0x1E5E48u: goto label_1e5e48;
            case 0x1E5E4Cu: goto label_1e5e4c;
            case 0x1E5E50u: goto label_1e5e50;
            case 0x1E5E54u: goto label_1e5e54;
            case 0x1E5E58u: goto label_1e5e58;
            case 0x1E5E5Cu: goto label_1e5e5c;
            case 0x1E5E60u: goto label_1e5e60;
            case 0x1E5E64u: goto label_1e5e64;
            case 0x1E5E68u: goto label_1e5e68;
            case 0x1E5E6Cu: goto label_1e5e6c;
            case 0x1E5E70u: goto label_1e5e70;
            case 0x1E5E74u: goto label_1e5e74;
            case 0x1E5E78u: goto label_1e5e78;
            case 0x1E5E7Cu: goto label_1e5e7c;
            case 0x1E5E80u: goto label_1e5e80;
            case 0x1E5E84u: goto label_1e5e84;
            case 0x1E5E88u: goto label_1e5e88;
            case 0x1E5E8Cu: goto label_1e5e8c;
            case 0x1E5E90u: goto label_1e5e90;
            case 0x1E5E94u: goto label_1e5e94;
            case 0x1E5E98u: goto label_1e5e98;
            case 0x1E5E9Cu: goto label_1e5e9c;
            case 0x1E5EA0u: goto label_1e5ea0;
            case 0x1E5EA4u: goto label_1e5ea4;
            case 0x1E5EA8u: goto label_1e5ea8;
            case 0x1E5EACu: goto label_1e5eac;
            case 0x1E5EB0u: goto label_1e5eb0;
            case 0x1E5EB4u: goto label_1e5eb4;
            case 0x1E5EB8u: goto label_1e5eb8;
            case 0x1E5EBCu: goto label_1e5ebc;
            case 0x1E5EC0u: goto label_1e5ec0;
            case 0x1E5EC4u: goto label_1e5ec4;
            case 0x1E5EC8u: goto label_1e5ec8;
            case 0x1E5ECCu: goto label_1e5ecc;
            case 0x1E5ED0u: goto label_1e5ed0;
            case 0x1E5ED4u: goto label_1e5ed4;
            case 0x1E5ED8u: goto label_1e5ed8;
            case 0x1E5EDCu: goto label_1e5edc;
            case 0x1E5EE0u: goto label_1e5ee0;
            case 0x1E5EE4u: goto label_1e5ee4;
            case 0x1E5EE8u: goto label_1e5ee8;
            case 0x1E5EECu: goto label_1e5eec;
            case 0x1E5EF0u: goto label_1e5ef0;
            case 0x1E5EF4u: goto label_1e5ef4;
            case 0x1E5EF8u: goto label_1e5ef8;
            case 0x1E5EFCu: goto label_1e5efc;
            case 0x1E5F00u: goto label_1e5f00;
            case 0x1E5F04u: goto label_1e5f04;
            case 0x1E5F08u: goto label_1e5f08;
            case 0x1E5F0Cu: goto label_1e5f0c;
            case 0x1E5F10u: goto label_1e5f10;
            case 0x1E5F14u: goto label_1e5f14;
            case 0x1E5F18u: goto label_1e5f18;
            case 0x1E5F1Cu: goto label_1e5f1c;
            case 0x1E5F20u: goto label_1e5f20;
            case 0x1E5F24u: goto label_1e5f24;
            case 0x1E5F28u: goto label_1e5f28;
            case 0x1E5F2Cu: goto label_1e5f2c;
            case 0x1E5F30u: goto label_1e5f30;
            case 0x1E5F34u: goto label_1e5f34;
            case 0x1E5F38u: goto label_1e5f38;
            case 0x1E5F3Cu: goto label_1e5f3c;
            case 0x1E5F40u: goto label_1e5f40;
            case 0x1E5F44u: goto label_1e5f44;
            case 0x1E5F48u: goto label_1e5f48;
            case 0x1E5F4Cu: goto label_1e5f4c;
            case 0x1E5F50u: goto label_1e5f50;
            case 0x1E5F54u: goto label_1e5f54;
            case 0x1E5F58u: goto label_1e5f58;
            case 0x1E5F5Cu: goto label_1e5f5c;
            case 0x1E5F60u: goto label_1e5f60;
            case 0x1E5F64u: goto label_1e5f64;
            case 0x1E5F68u: goto label_1e5f68;
            case 0x1E5F6Cu: goto label_1e5f6c;
            case 0x1E5F70u: goto label_1e5f70;
            case 0x1E5F74u: goto label_1e5f74;
            case 0x1E5F78u: goto label_1e5f78;
            case 0x1E5F7Cu: goto label_1e5f7c;
            case 0x1E5F80u: goto label_1e5f80;
            case 0x1E5F84u: goto label_1e5f84;
            case 0x1E5F88u: goto label_1e5f88;
            case 0x1E5F8Cu: goto label_1e5f8c;
            case 0x1E5F90u: goto label_1e5f90;
            case 0x1E5F94u: goto label_1e5f94;
            case 0x1E5F98u: goto label_1e5f98;
            case 0x1E5F9Cu: goto label_1e5f9c;
            case 0x1E5FA0u: goto label_1e5fa0;
            case 0x1E5FA4u: goto label_1e5fa4;
            case 0x1E5FA8u: goto label_1e5fa8;
            case 0x1E5FACu: goto label_1e5fac;
            case 0x1E5FB0u: goto label_1e5fb0;
            case 0x1E5FB4u: goto label_1e5fb4;
            case 0x1E5FB8u: goto label_1e5fb8;
            case 0x1E5FBCu: goto label_1e5fbc;
            case 0x1E5FC0u: goto label_1e5fc0;
            case 0x1E5FC4u: goto label_1e5fc4;
            case 0x1E5FC8u: goto label_1e5fc8;
            case 0x1E5FCCu: goto label_1e5fcc;
            case 0x1E5FD0u: goto label_1e5fd0;
            case 0x1E5FD4u: goto label_1e5fd4;
            case 0x1E5FD8u: goto label_1e5fd8;
            case 0x1E5FDCu: goto label_1e5fdc;
            case 0x1E5FE0u: goto label_1e5fe0;
            case 0x1E5FE4u: goto label_1e5fe4;
            case 0x1E5FE8u: goto label_1e5fe8;
            case 0x1E5FECu: goto label_1e5fec;
            case 0x1E5FF0u: goto label_1e5ff0;
            case 0x1E5FF4u: goto label_1e5ff4;
            case 0x1E5FF8u: goto label_1e5ff8;
            case 0x1E5FFCu: goto label_1e5ffc;
            case 0x1E6000u: goto label_1e6000;
            case 0x1E6004u: goto label_1e6004;
            case 0x1E6008u: goto label_1e6008;
            case 0x1E600Cu: goto label_1e600c;
            case 0x1E6010u: goto label_1e6010;
            case 0x1E6014u: goto label_1e6014;
            case 0x1E6018u: goto label_1e6018;
            case 0x1E601Cu: goto label_1e601c;
            case 0x1E6020u: goto label_1e6020;
            case 0x1E6024u: goto label_1e6024;
            case 0x1E6028u: goto label_1e6028;
            case 0x1E602Cu: goto label_1e602c;
            case 0x1E6030u: goto label_1e6030;
            case 0x1E6034u: goto label_1e6034;
            case 0x1E6038u: goto label_1e6038;
            case 0x1E603Cu: goto label_1e603c;
            case 0x1E6040u: goto label_1e6040;
            case 0x1E6044u: goto label_1e6044;
            case 0x1E6048u: goto label_1e6048;
            case 0x1E604Cu: goto label_1e604c;
            case 0x1E6050u: goto label_1e6050;
            case 0x1E6054u: goto label_1e6054;
            case 0x1E6058u: goto label_1e6058;
            case 0x1E605Cu: goto label_1e605c;
            case 0x1E6060u: goto label_1e6060;
            case 0x1E6064u: goto label_1e6064;
            case 0x1E6068u: goto label_1e6068;
            case 0x1E606Cu: goto label_1e606c;
            case 0x1E6070u: goto label_1e6070;
            case 0x1E6074u: goto label_1e6074;
            case 0x1E6078u: goto label_1e6078;
            case 0x1E607Cu: goto label_1e607c;
            case 0x1E6080u: goto label_1e6080;
            case 0x1E6084u: goto label_1e6084;
            case 0x1E6088u: goto label_1e6088;
            case 0x1E608Cu: goto label_1e608c;
            case 0x1E6090u: goto label_1e6090;
            case 0x1E6094u: goto label_1e6094;
            case 0x1E6098u: goto label_1e6098;
            case 0x1E609Cu: goto label_1e609c;
            case 0x1E60A0u: goto label_1e60a0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1e609c:
    ctx->pc = 0x1E60A4u;
}

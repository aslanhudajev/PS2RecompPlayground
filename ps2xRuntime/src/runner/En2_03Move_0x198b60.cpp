#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En2_03Move
// Address: 0x198b60 - 0x199670
void En2_03Move_0x198b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En2_03Move_0x198b60");
#endif

    ctx->pc = 0x198b60u;

label_198b60:
    // 0x198b60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x198b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_198b64:
    // 0x198b64: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x198b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_198b68:
    // 0x198b68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_198b6c:
    // 0x198b6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x198b6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_198b70:
    // 0x198b70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_198b74:
    // 0x198b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198b78:
    // 0x198b78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x198b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_198b7c:
    // 0x198b7c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x198b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_198b80:
    // 0x198b80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198b84:
    // 0x198b84: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x198b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198b88:
    // 0x198b88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x198b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_198b8c:
    // 0x198b8c: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x198b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_198b90:
    // 0x198b90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x198b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_198b94:
    // 0x198b94: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x198b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_198b98:
    // 0x198b98: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x198b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198b9c:
    // 0x198b9c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x198b9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_198ba0:
    // 0x198ba0: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x198ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_198ba4:
    // 0x198ba4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x198ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_198ba8:
    // 0x198ba8: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x198ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_198bac:
    // 0x198bac: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x198bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198bb0:
    // 0x198bb0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x198bb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_198bb4:
    // 0x198bb4: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x198bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_198bb8:
    // 0x198bb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x198bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_198bbc:
    // 0x198bbc: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x198bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_198bc0:
    // 0x198bc0: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x198bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198bc4:
    // 0x198bc4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x198bc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_198bc8:
    // 0x198bc8: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x198bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_198bcc:
    // 0x198bcc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x198bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_198bd0:
    // 0x198bd0: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x198bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_198bd4:
    // 0x198bd4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x198bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198bd8:
    // 0x198bd8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x198bd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_198bdc:
    // 0x198bdc: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x198bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_198be0:
    // 0x198be0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x198be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_198be4:
    // 0x198be4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x198be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198be8:
    // 0x198be8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_198bec:
    // 0x198bec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_198bf0:
    if (ctx->pc == 0x198BF0u) {
        ctx->pc = 0x198BF0u;
            // 0x198bf0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x198BF4u;
        goto label_198bf4;
    }
    ctx->pc = 0x198BECu;
    {
        const bool branch_taken_0x198bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x198BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198BECu;
            // 0x198bf0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198bec) {
            ctx->pc = 0x198C10u;
            goto label_198c10;
        }
    }
    ctx->pc = 0x198BF4u;
label_198bf4:
    // 0x198bf4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x198bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_198bf8:
    // 0x198bf8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x198bf8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_198bfc:
    // 0x198bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198c00:
    // 0x198c00: 0x0  nop
    ctx->pc = 0x198c00u;
    // NOP
label_198c04:
    // 0x198c04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x198c04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_198c08:
    // 0x198c08: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x198c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_198c0c:
    // 0x198c0c: 0x0  nop
    ctx->pc = 0x198c0cu;
    // NOP
label_198c10:
    // 0x198c10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x198c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198c14:
    // 0x198c14: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x198c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_198c18:
    // 0x198c18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x198c18u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_198c1c:
    // 0x198c1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198c20:
    // 0x198c20: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x198c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198c24:
    // 0x198c24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x198c24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_198c28:
    // 0x198c28: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_198c2c:
    if (ctx->pc == 0x198C2Cu) {
        ctx->pc = 0x198C2Cu;
            // 0x198c2c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x198C30u;
        goto label_198c30;
    }
    ctx->pc = 0x198C28u;
    {
        const bool branch_taken_0x198c28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x198C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198C28u;
            // 0x198c2c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c28) {
            ctx->pc = 0x198C48u;
            goto label_198c48;
        }
    }
    ctx->pc = 0x198C30u;
label_198c30:
    // 0x198c30: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x198c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_198c34:
    // 0x198c34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x198c34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_198c38:
    // 0x198c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198c3c:
    // 0x198c3c: 0x0  nop
    ctx->pc = 0x198c3cu;
    // NOP
label_198c40:
    // 0x198c40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x198c40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_198c44:
    // 0x198c44: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x198c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_198c48:
    // 0x198c48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x198c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198c4c:
    // 0x198c4c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x198c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_198c50:
    // 0x198c50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x198c50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_198c54:
    // 0x198c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198c58:
    // 0x198c58: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x198c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198c5c:
    // 0x198c5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_198c60:
    // 0x198c60: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_198c64:
    if (ctx->pc == 0x198C64u) {
        ctx->pc = 0x198C64u;
            // 0x198c64: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x198C68u;
        goto label_198c68;
    }
    ctx->pc = 0x198C60u;
    {
        const bool branch_taken_0x198c60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x198C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198C60u;
            // 0x198c64: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c60) {
            ctx->pc = 0x198C80u;
            goto label_198c80;
        }
    }
    ctx->pc = 0x198C68u;
label_198c68:
    // 0x198c68: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x198c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_198c6c:
    // 0x198c6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x198c6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_198c70:
    // 0x198c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198c74:
    // 0x198c74: 0x0  nop
    ctx->pc = 0x198c74u;
    // NOP
label_198c78:
    // 0x198c78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x198c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_198c7c:
    // 0x198c7c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x198c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_198c80:
    // 0x198c80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x198c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198c84:
    // 0x198c84: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x198c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_198c88:
    // 0x198c88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x198c88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_198c8c:
    // 0x198c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198c90:
    // 0x198c90: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x198c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198c94:
    // 0x198c94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x198c94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_198c98:
    // 0x198c98: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_198c9c:
    if (ctx->pc == 0x198C9Cu) {
        ctx->pc = 0x198C9Cu;
            // 0x198c9c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x198CA0u;
        goto label_198ca0;
    }
    ctx->pc = 0x198C98u;
    {
        const bool branch_taken_0x198c98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x198C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198C98u;
            // 0x198c9c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c98) {
            ctx->pc = 0x198CB8u;
            goto label_198cb8;
        }
    }
    ctx->pc = 0x198CA0u;
label_198ca0:
    // 0x198ca0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x198ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_198ca4:
    // 0x198ca4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x198ca4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_198ca8:
    // 0x198ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198cac:
    // 0x198cac: 0x0  nop
    ctx->pc = 0x198cacu;
    // NOP
label_198cb0:
    // 0x198cb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x198cb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_198cb4:
    // 0x198cb4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x198cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_198cb8:
    // 0x198cb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x198cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198cbc:
    // 0x198cbc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x198cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_198cc0:
    // 0x198cc0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x198cc0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_198cc4:
    // 0x198cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198cc8:
    // 0x198cc8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x198cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198ccc:
    // 0x198ccc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_198cd0:
    // 0x198cd0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_198cd4:
    if (ctx->pc == 0x198CD4u) {
        ctx->pc = 0x198CD4u;
            // 0x198cd4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x198CD8u;
        goto label_198cd8;
    }
    ctx->pc = 0x198CD0u;
    {
        const bool branch_taken_0x198cd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x198CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198CD0u;
            // 0x198cd4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cd0) {
            ctx->pc = 0x198CF0u;
            goto label_198cf0;
        }
    }
    ctx->pc = 0x198CD8u;
label_198cd8:
    // 0x198cd8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x198cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_198cdc:
    // 0x198cdc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x198cdcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_198ce0:
    // 0x198ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198ce4:
    // 0x198ce4: 0x0  nop
    ctx->pc = 0x198ce4u;
    // NOP
label_198ce8:
    // 0x198ce8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x198ce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_198cec:
    // 0x198cec: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x198cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_198cf0:
    // 0x198cf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x198cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198cf4:
    // 0x198cf4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x198cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_198cf8:
    // 0x198cf8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x198cf8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_198cfc:
    // 0x198cfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198d00:
    // 0x198d00: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x198d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198d04:
    // 0x198d04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x198d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_198d08:
    // 0x198d08: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_198d0c:
    if (ctx->pc == 0x198D0Cu) {
        ctx->pc = 0x198D0Cu;
            // 0x198d0c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x198D10u;
        goto label_198d10;
    }
    ctx->pc = 0x198D08u;
    {
        const bool branch_taken_0x198d08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x198D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198D08u;
            // 0x198d0c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d08) {
            ctx->pc = 0x198D28u;
            goto label_198d28;
        }
    }
    ctx->pc = 0x198D10u;
label_198d10:
    // 0x198d10: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x198d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_198d14:
    // 0x198d14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x198d14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_198d18:
    // 0x198d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198d1c:
    // 0x198d1c: 0x0  nop
    ctx->pc = 0x198d1cu;
    // NOP
label_198d20:
    // 0x198d20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x198d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_198d24:
    // 0x198d24: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x198d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_198d28:
    // 0x198d28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x198d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198d2c:
    // 0x198d2c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x198d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_198d30:
    // 0x198d30: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x198d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_198d34:
    // 0x198d34: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x198d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_198d38:
    // 0x198d38: 0xc06659c  jal         func_199670
label_198d3c:
    if (ctx->pc == 0x198D3Cu) {
        ctx->pc = 0x198D3Cu;
            // 0x198d3c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x198D40u;
        goto label_198d40;
    }
    ctx->pc = 0x198D38u;
    SET_GPR_U32(ctx, 31, 0x198D40u);
    ctx->pc = 0x198D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198D38u;
            // 0x198d3c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199670u;
    if (runtime->hasFunction(0x199670u)) {
        auto targetFn = runtime->lookupFunction(0x199670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198D40u; }
        if (ctx->pc != 0x198D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x199670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198D40u; }
        if (ctx->pc != 0x198D40u) { return; }
    }
    ctx->pc = 0x198D40u;
label_198d40:
    // 0x198d40: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x198d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_198d44:
    // 0x198d44: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x198d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_198d48:
    // 0x198d48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x198d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_198d4c:
    // 0x198d4c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x198d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_198d50:
    // 0x198d50: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x198d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_198d54:
    // 0x198d54: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x198d54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_198d58:
    // 0x198d58: 0x102001a7  beqz        $at, . + 4 + (0x1A7 << 2)
label_198d5c:
    if (ctx->pc == 0x198D5Cu) {
        ctx->pc = 0x198D5Cu;
            // 0x198d5c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x198D60u;
        goto label_198d60;
    }
    ctx->pc = 0x198D58u;
    {
        const bool branch_taken_0x198d58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198D58u;
            // 0x198d5c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d58) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198D60u;
label_198d60:
    // 0x198d60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_198d64:
    // 0x198d64: 0x246328d0  addiu       $v1, $v1, 0x28D0
    ctx->pc = 0x198d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10448));
label_198d68:
    // 0x198d68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_198d6c:
    // 0x198d6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x198d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_198d70:
    // 0x198d70: 0x400008  jr          $v0
label_198d74:
    if (ctx->pc == 0x198D74u) {
        ctx->pc = 0x198D78u;
        goto label_198d78;
    }
    ctx->pc = 0x198D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198D78u: goto label_198d78;
            case 0x198E88u: goto label_198e88;
            case 0x198F98u: goto label_198f98;
            case 0x199070u: goto label_199070;
            case 0x199148u: goto label_199148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198D78u;
label_198d78:
    // 0x198d78: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x198d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_198d7c:
    // 0x198d7c: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x198d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
label_198d80:
    // 0x198d80: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_198d84:
    if (ctx->pc == 0x198D84u) {
        ctx->pc = 0x198D84u;
            // 0x198d84: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->pc = 0x198D88u;
        goto label_198d88;
    }
    ctx->pc = 0x198D80u;
    {
        const bool branch_taken_0x198d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198D80u;
            // 0x198d84: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d80) {
            ctx->pc = 0x198DE0u;
            goto label_198de0;
        }
    }
    ctx->pc = 0x198D88u;
label_198d88:
    // 0x198d88: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_198d8c:
    if (ctx->pc == 0x198D8Cu) {
        ctx->pc = 0x198D90u;
        goto label_198d90;
    }
    ctx->pc = 0x198D88u;
    {
        const bool branch_taken_0x198d88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x198d88) {
            ctx->pc = 0x198DE0u;
            goto label_198de0;
        }
    }
    ctx->pc = 0x198D90u;
label_198d90:
    // 0x198d90: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x198d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_198d94:
    // 0x198d94: 0x3c023be5  lui         $v0, 0x3BE5
    ctx->pc = 0x198d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15333 << 16));
label_198d98:
    // 0x198d98: 0x34436042  ori         $v1, $v0, 0x6042
    ctx->pc = 0x198d98u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_198d9c:
    // 0x198d9c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x198d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_198da0:
    // 0x198da0: 0x3c023951  lui         $v0, 0x3951
    ctx->pc = 0x198da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14673 << 16));
label_198da4:
    // 0x198da4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x198da4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_198da8:
    // 0x198da8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x198da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_198dac:
    // 0x198dac: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x198dacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_198db0:
    // 0x198db0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x198db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_198db4:
    // 0x198db4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x198db4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_198db8:
    // 0x198db8: 0xe60200d0  swc1        $f2, 0xD0($s0)
    ctx->pc = 0x198db8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_198dbc:
    // 0x198dbc: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x198dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_198dc0:
    // 0x198dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198dc4:
    // 0x198dc4: 0x0  nop
    ctx->pc = 0x198dc4u;
    // NOP
label_198dc8:
    // 0x198dc8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x198dc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_198dcc:
    // 0x198dcc: 0xe60100e4  swc1        $f1, 0xE4($s0)
    ctx->pc = 0x198dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_198dd0:
    // 0x198dd0: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x198dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198dd4:
    // 0x198dd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x198dd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_198dd8:
    // 0x198dd8: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x198dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_198ddc:
    // 0x198ddc: 0x0  nop
    ctx->pc = 0x198ddcu;
    // NOP
label_198de0:
    // 0x198de0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x198de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_198de4:
    // 0x198de4: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x198de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_198de8:
    // 0x198de8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_198dec:
    if (ctx->pc == 0x198DECu) {
        ctx->pc = 0x198DECu;
            // 0x198dec: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x198DF0u;
        goto label_198df0;
    }
    ctx->pc = 0x198DE8u;
    {
        const bool branch_taken_0x198de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x198DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198DE8u;
            // 0x198dec: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198de8) {
            ctx->pc = 0x198E60u;
            goto label_198e60;
        }
    }
    ctx->pc = 0x198DF0u;
label_198df0:
    // 0x198df0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_198df4:
    if (ctx->pc == 0x198DF4u) {
        ctx->pc = 0x198DF8u;
        goto label_198df8;
    }
    ctx->pc = 0x198DF0u;
    {
        const bool branch_taken_0x198df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198df0) {
            ctx->pc = 0x198E38u;
            goto label_198e38;
        }
    }
    ctx->pc = 0x198DF8u;
label_198df8:
    // 0x198df8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x198df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_198dfc:
    // 0x198dfc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_198e00:
    if (ctx->pc == 0x198E00u) {
        ctx->pc = 0x198E04u;
        goto label_198e04;
    }
    ctx->pc = 0x198DFCu;
    {
        const bool branch_taken_0x198dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198dfc) {
            ctx->pc = 0x198E10u;
            goto label_198e10;
        }
    }
    ctx->pc = 0x198E04u;
label_198e04:
    // 0x198e04: 0x1000017c  b           . + 4 + (0x17C << 2)
label_198e08:
    if (ctx->pc == 0x198E08u) {
        ctx->pc = 0x198E0Cu;
        goto label_198e0c;
    }
    ctx->pc = 0x198E04u;
    {
        const bool branch_taken_0x198e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e04) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198E0Cu;
label_198e0c:
    // 0x198e0c: 0x0  nop
    ctx->pc = 0x198e0cu;
    // NOP
label_198e10:
    // 0x198e10: 0xc065d00  jal         func_197400
label_198e14:
    if (ctx->pc == 0x198E14u) {
        ctx->pc = 0x198E18u;
        goto label_198e18;
    }
    ctx->pc = 0x198E10u;
    SET_GPR_U32(ctx, 31, 0x198E18u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E18u; }
        if (ctx->pc != 0x198E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E18u; }
        if (ctx->pc != 0x198E18u) { return; }
    }
    ctx->pc = 0x198E18u;
label_198e18:
    // 0x198e18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_198e1c:
    // 0x198e1c: 0x14430176  bne         $v0, $v1, . + 4 + (0x176 << 2)
label_198e20:
    if (ctx->pc == 0x198E20u) {
        ctx->pc = 0x198E24u;
        goto label_198e24;
    }
    ctx->pc = 0x198E1Cu;
    {
        const bool branch_taken_0x198e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x198e1c) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198E24u;
label_198e24:
    // 0x198e24: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x198e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_198e28:
    // 0x198e28: 0xc06560c  jal         func_195830
label_198e2c:
    if (ctx->pc == 0x198E2Cu) {
        ctx->pc = 0x198E2Cu;
            // 0x198e2c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x198E30u;
        goto label_198e30;
    }
    ctx->pc = 0x198E28u;
    SET_GPR_U32(ctx, 31, 0x198E30u);
    ctx->pc = 0x198E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198E28u;
            // 0x198e2c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E30u; }
        if (ctx->pc != 0x198E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E30u; }
        if (ctx->pc != 0x198E30u) { return; }
    }
    ctx->pc = 0x198E30u;
label_198e30:
    // 0x198e30: 0x10000171  b           . + 4 + (0x171 << 2)
label_198e34:
    if (ctx->pc == 0x198E34u) {
        ctx->pc = 0x198E38u;
        goto label_198e38;
    }
    ctx->pc = 0x198E30u;
    {
        const bool branch_taken_0x198e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e30) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198E38u;
label_198e38:
    // 0x198e38: 0xc065d00  jal         func_197400
label_198e3c:
    if (ctx->pc == 0x198E3Cu) {
        ctx->pc = 0x198E40u;
        goto label_198e40;
    }
    ctx->pc = 0x198E38u;
    SET_GPR_U32(ctx, 31, 0x198E40u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E40u; }
        if (ctx->pc != 0x198E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E40u; }
        if (ctx->pc != 0x198E40u) { return; }
    }
    ctx->pc = 0x198E40u;
label_198e40:
    // 0x198e40: 0x1840016d  blez        $v0, . + 4 + (0x16D << 2)
label_198e44:
    if (ctx->pc == 0x198E44u) {
        ctx->pc = 0x198E48u;
        goto label_198e48;
    }
    ctx->pc = 0x198E40u;
    {
        const bool branch_taken_0x198e40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x198e40) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198E48u;
label_198e48:
    // 0x198e48: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x198e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_198e4c:
    // 0x198e4c: 0xc06560c  jal         func_195830
label_198e50:
    if (ctx->pc == 0x198E50u) {
        ctx->pc = 0x198E50u;
            // 0x198e50: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x198E54u;
        goto label_198e54;
    }
    ctx->pc = 0x198E4Cu;
    SET_GPR_U32(ctx, 31, 0x198E54u);
    ctx->pc = 0x198E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198E4Cu;
            // 0x198e50: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E54u; }
        if (ctx->pc != 0x198E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E54u; }
        if (ctx->pc != 0x198E54u) { return; }
    }
    ctx->pc = 0x198E54u;
label_198e54:
    // 0x198e54: 0x10000168  b           . + 4 + (0x168 << 2)
label_198e58:
    if (ctx->pc == 0x198E58u) {
        ctx->pc = 0x198E5Cu;
        goto label_198e5c;
    }
    ctx->pc = 0x198E54u;
    {
        const bool branch_taken_0x198e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e54) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198E5Cu;
label_198e5c:
    // 0x198e5c: 0x0  nop
    ctx->pc = 0x198e5cu;
    // NOP
label_198e60:
    // 0x198e60: 0xc065d00  jal         func_197400
label_198e64:
    if (ctx->pc == 0x198E64u) {
        ctx->pc = 0x198E68u;
        goto label_198e68;
    }
    ctx->pc = 0x198E60u;
    SET_GPR_U32(ctx, 31, 0x198E68u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E68u; }
        if (ctx->pc != 0x198E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E68u; }
        if (ctx->pc != 0x198E68u) { return; }
    }
    ctx->pc = 0x198E68u;
label_198e68:
    // 0x198e68: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x198e68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_198e6c:
    // 0x198e6c: 0x14200162  bnez        $at, . + 4 + (0x162 << 2)
label_198e70:
    if (ctx->pc == 0x198E70u) {
        ctx->pc = 0x198E74u;
        goto label_198e74;
    }
    ctx->pc = 0x198E6Cu;
    {
        const bool branch_taken_0x198e6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x198e6c) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198E74u;
label_198e74:
    // 0x198e74: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x198e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_198e78:
    // 0x198e78: 0xc06560c  jal         func_195830
label_198e7c:
    if (ctx->pc == 0x198E7Cu) {
        ctx->pc = 0x198E7Cu;
            // 0x198e7c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x198E80u;
        goto label_198e80;
    }
    ctx->pc = 0x198E78u;
    SET_GPR_U32(ctx, 31, 0x198E80u);
    ctx->pc = 0x198E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198E78u;
            // 0x198e7c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E80u; }
        if (ctx->pc != 0x198E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E80u; }
        if (ctx->pc != 0x198E80u) { return; }
    }
    ctx->pc = 0x198E80u;
label_198e80:
    // 0x198e80: 0x1000015d  b           . + 4 + (0x15D << 2)
label_198e84:
    if (ctx->pc == 0x198E84u) {
        ctx->pc = 0x198E88u;
        goto label_198e88;
    }
    ctx->pc = 0x198E80u;
    {
        const bool branch_taken_0x198e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e80) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198E88u;
label_198e88:
    // 0x198e88: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x198e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_198e8c:
    // 0x198e8c: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x198e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
label_198e90:
    // 0x198e90: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_198e94:
    if (ctx->pc == 0x198E94u) {
        ctx->pc = 0x198E94u;
            // 0x198e94: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->pc = 0x198E98u;
        goto label_198e98;
    }
    ctx->pc = 0x198E90u;
    {
        const bool branch_taken_0x198e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E90u;
            // 0x198e94: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e90) {
            ctx->pc = 0x198EF0u;
            goto label_198ef0;
        }
    }
    ctx->pc = 0x198E98u;
label_198e98:
    // 0x198e98: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_198e9c:
    if (ctx->pc == 0x198E9Cu) {
        ctx->pc = 0x198EA0u;
        goto label_198ea0;
    }
    ctx->pc = 0x198E98u;
    {
        const bool branch_taken_0x198e98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e98) {
            ctx->pc = 0x198EF0u;
            goto label_198ef0;
        }
    }
    ctx->pc = 0x198EA0u;
label_198ea0:
    // 0x198ea0: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x198ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_198ea4:
    // 0x198ea4: 0x3c02bbe5  lui         $v0, 0xBBE5
    ctx->pc = 0x198ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48101 << 16));
label_198ea8:
    // 0x198ea8: 0x34436042  ori         $v1, $v0, 0x6042
    ctx->pc = 0x198ea8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_198eac:
    // 0x198eac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x198eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_198eb0:
    // 0x198eb0: 0x3c023951  lui         $v0, 0x3951
    ctx->pc = 0x198eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14673 << 16));
label_198eb4:
    // 0x198eb4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x198eb4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_198eb8:
    // 0x198eb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x198eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_198ebc:
    // 0x198ebc: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x198ebcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_198ec0:
    // 0x198ec0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x198ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_198ec4:
    // 0x198ec4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x198ec4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_198ec8:
    // 0x198ec8: 0xe60200d0  swc1        $f2, 0xD0($s0)
    ctx->pc = 0x198ec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_198ecc:
    // 0x198ecc: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x198eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_198ed0:
    // 0x198ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198ed4:
    // 0x198ed4: 0x0  nop
    ctx->pc = 0x198ed4u;
    // NOP
label_198ed8:
    // 0x198ed8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x198ed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_198edc:
    // 0x198edc: 0xe60100e4  swc1        $f1, 0xE4($s0)
    ctx->pc = 0x198edcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_198ee0:
    // 0x198ee0: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x198ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198ee4:
    // 0x198ee4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x198ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_198ee8:
    // 0x198ee8: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x198ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_198eec:
    // 0x198eec: 0x0  nop
    ctx->pc = 0x198eecu;
    // NOP
label_198ef0:
    // 0x198ef0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x198ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_198ef4:
    // 0x198ef4: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x198ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_198ef8:
    // 0x198ef8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_198efc:
    if (ctx->pc == 0x198EFCu) {
        ctx->pc = 0x198EFCu;
            // 0x198efc: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x198F00u;
        goto label_198f00;
    }
    ctx->pc = 0x198EF8u;
    {
        const bool branch_taken_0x198ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x198EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198EF8u;
            // 0x198efc: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ef8) {
            ctx->pc = 0x198F70u;
            goto label_198f70;
        }
    }
    ctx->pc = 0x198F00u;
label_198f00:
    // 0x198f00: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_198f04:
    if (ctx->pc == 0x198F04u) {
        ctx->pc = 0x198F08u;
        goto label_198f08;
    }
    ctx->pc = 0x198F00u;
    {
        const bool branch_taken_0x198f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198f00) {
            ctx->pc = 0x198F48u;
            goto label_198f48;
        }
    }
    ctx->pc = 0x198F08u;
label_198f08:
    // 0x198f08: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x198f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_198f0c:
    // 0x198f0c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_198f10:
    if (ctx->pc == 0x198F10u) {
        ctx->pc = 0x198F14u;
        goto label_198f14;
    }
    ctx->pc = 0x198F0Cu;
    {
        const bool branch_taken_0x198f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198f0c) {
            ctx->pc = 0x198F20u;
            goto label_198f20;
        }
    }
    ctx->pc = 0x198F14u;
label_198f14:
    // 0x198f14: 0x10000138  b           . + 4 + (0x138 << 2)
label_198f18:
    if (ctx->pc == 0x198F18u) {
        ctx->pc = 0x198F1Cu;
        goto label_198f1c;
    }
    ctx->pc = 0x198F14u;
    {
        const bool branch_taken_0x198f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f14) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198F1Cu;
label_198f1c:
    // 0x198f1c: 0x0  nop
    ctx->pc = 0x198f1cu;
    // NOP
label_198f20:
    // 0x198f20: 0xc065d00  jal         func_197400
label_198f24:
    if (ctx->pc == 0x198F24u) {
        ctx->pc = 0x198F28u;
        goto label_198f28;
    }
    ctx->pc = 0x198F20u;
    SET_GPR_U32(ctx, 31, 0x198F28u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F28u; }
        if (ctx->pc != 0x198F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F28u; }
        if (ctx->pc != 0x198F28u) { return; }
    }
    ctx->pc = 0x198F28u;
label_198f28:
    // 0x198f28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_198f2c:
    // 0x198f2c: 0x14430132  bne         $v0, $v1, . + 4 + (0x132 << 2)
label_198f30:
    if (ctx->pc == 0x198F30u) {
        ctx->pc = 0x198F34u;
        goto label_198f34;
    }
    ctx->pc = 0x198F2Cu;
    {
        const bool branch_taken_0x198f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x198f2c) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198F34u;
label_198f34:
    // 0x198f34: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x198f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_198f38:
    // 0x198f38: 0xc06560c  jal         func_195830
label_198f3c:
    if (ctx->pc == 0x198F3Cu) {
        ctx->pc = 0x198F3Cu;
            // 0x198f3c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x198F40u;
        goto label_198f40;
    }
    ctx->pc = 0x198F38u;
    SET_GPR_U32(ctx, 31, 0x198F40u);
    ctx->pc = 0x198F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198F38u;
            // 0x198f3c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F40u; }
        if (ctx->pc != 0x198F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F40u; }
        if (ctx->pc != 0x198F40u) { return; }
    }
    ctx->pc = 0x198F40u;
label_198f40:
    // 0x198f40: 0x1000012d  b           . + 4 + (0x12D << 2)
label_198f44:
    if (ctx->pc == 0x198F44u) {
        ctx->pc = 0x198F48u;
        goto label_198f48;
    }
    ctx->pc = 0x198F40u;
    {
        const bool branch_taken_0x198f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f40) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198F48u;
label_198f48:
    // 0x198f48: 0xc065d00  jal         func_197400
label_198f4c:
    if (ctx->pc == 0x198F4Cu) {
        ctx->pc = 0x198F50u;
        goto label_198f50;
    }
    ctx->pc = 0x198F48u;
    SET_GPR_U32(ctx, 31, 0x198F50u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F50u; }
        if (ctx->pc != 0x198F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F50u; }
        if (ctx->pc != 0x198F50u) { return; }
    }
    ctx->pc = 0x198F50u;
label_198f50:
    // 0x198f50: 0x18400129  blez        $v0, . + 4 + (0x129 << 2)
label_198f54:
    if (ctx->pc == 0x198F54u) {
        ctx->pc = 0x198F58u;
        goto label_198f58;
    }
    ctx->pc = 0x198F50u;
    {
        const bool branch_taken_0x198f50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x198f50) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198F58u;
label_198f58:
    // 0x198f58: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x198f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_198f5c:
    // 0x198f5c: 0xc06560c  jal         func_195830
label_198f60:
    if (ctx->pc == 0x198F60u) {
        ctx->pc = 0x198F60u;
            // 0x198f60: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x198F64u;
        goto label_198f64;
    }
    ctx->pc = 0x198F5Cu;
    SET_GPR_U32(ctx, 31, 0x198F64u);
    ctx->pc = 0x198F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198F5Cu;
            // 0x198f60: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F64u; }
        if (ctx->pc != 0x198F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F64u; }
        if (ctx->pc != 0x198F64u) { return; }
    }
    ctx->pc = 0x198F64u;
label_198f64:
    // 0x198f64: 0x10000124  b           . + 4 + (0x124 << 2)
label_198f68:
    if (ctx->pc == 0x198F68u) {
        ctx->pc = 0x198F6Cu;
        goto label_198f6c;
    }
    ctx->pc = 0x198F64u;
    {
        const bool branch_taken_0x198f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f64) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198F6Cu;
label_198f6c:
    // 0x198f6c: 0x0  nop
    ctx->pc = 0x198f6cu;
    // NOP
label_198f70:
    // 0x198f70: 0xc065d00  jal         func_197400
label_198f74:
    if (ctx->pc == 0x198F74u) {
        ctx->pc = 0x198F78u;
        goto label_198f78;
    }
    ctx->pc = 0x198F70u;
    SET_GPR_U32(ctx, 31, 0x198F78u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F78u; }
        if (ctx->pc != 0x198F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F78u; }
        if (ctx->pc != 0x198F78u) { return; }
    }
    ctx->pc = 0x198F78u;
label_198f78:
    // 0x198f78: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x198f78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_198f7c:
    // 0x198f7c: 0x1420011e  bnez        $at, . + 4 + (0x11E << 2)
label_198f80:
    if (ctx->pc == 0x198F80u) {
        ctx->pc = 0x198F84u;
        goto label_198f84;
    }
    ctx->pc = 0x198F7Cu;
    {
        const bool branch_taken_0x198f7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x198f7c) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198F84u;
label_198f84:
    // 0x198f84: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x198f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_198f88:
    // 0x198f88: 0xc06560c  jal         func_195830
label_198f8c:
    if (ctx->pc == 0x198F8Cu) {
        ctx->pc = 0x198F8Cu;
            // 0x198f8c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x198F90u;
        goto label_198f90;
    }
    ctx->pc = 0x198F88u;
    SET_GPR_U32(ctx, 31, 0x198F90u);
    ctx->pc = 0x198F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198F88u;
            // 0x198f8c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F90u; }
        if (ctx->pc != 0x198F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F90u; }
        if (ctx->pc != 0x198F90u) { return; }
    }
    ctx->pc = 0x198F90u;
label_198f90:
    // 0x198f90: 0x10000119  b           . + 4 + (0x119 << 2)
label_198f94:
    if (ctx->pc == 0x198F94u) {
        ctx->pc = 0x198F98u;
        goto label_198f98;
    }
    ctx->pc = 0x198F90u;
    {
        const bool branch_taken_0x198f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f90) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198F98u;
label_198f98:
    // 0x198f98: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x198f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_198f9c:
    // 0x198f9c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x198f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_198fa0:
    // 0x198fa0: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x198fa0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_198fa4:
    // 0x198fa4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x198fa4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_198fa8:
    // 0x198fa8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x198fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_198fac:
    // 0x198fac: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x198facu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_198fb0:
    // 0x198fb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198fb4:
    // 0x198fb4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x198fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_198fb8:
    // 0x198fb8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x198fb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_198fbc:
    // 0x198fbc: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x198fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_198fc0:
    // 0x198fc0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x198fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198fc4:
    // 0x198fc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x198fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_198fc8:
    // 0x198fc8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x198fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_198fcc:
    // 0x198fcc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x198fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_198fd0:
    // 0x198fd0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_198fd4:
    if (ctx->pc == 0x198FD4u) {
        ctx->pc = 0x198FD4u;
            // 0x198fd4: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x198FD8u;
        goto label_198fd8;
    }
    ctx->pc = 0x198FD0u;
    {
        const bool branch_taken_0x198fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x198FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198FD0u;
            // 0x198fd4: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198fd0) {
            ctx->pc = 0x199048u;
            goto label_199048;
        }
    }
    ctx->pc = 0x198FD8u;
label_198fd8:
    // 0x198fd8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_198fdc:
    if (ctx->pc == 0x198FDCu) {
        ctx->pc = 0x198FE0u;
        goto label_198fe0;
    }
    ctx->pc = 0x198FD8u;
    {
        const bool branch_taken_0x198fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198fd8) {
            ctx->pc = 0x199020u;
            goto label_199020;
        }
    }
    ctx->pc = 0x198FE0u;
label_198fe0:
    // 0x198fe0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x198fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_198fe4:
    // 0x198fe4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_198fe8:
    if (ctx->pc == 0x198FE8u) {
        ctx->pc = 0x198FECu;
        goto label_198fec;
    }
    ctx->pc = 0x198FE4u;
    {
        const bool branch_taken_0x198fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198fe4) {
            ctx->pc = 0x198FF8u;
            goto label_198ff8;
        }
    }
    ctx->pc = 0x198FECu;
label_198fec:
    // 0x198fec: 0x10000102  b           . + 4 + (0x102 << 2)
label_198ff0:
    if (ctx->pc == 0x198FF0u) {
        ctx->pc = 0x198FF4u;
        goto label_198ff4;
    }
    ctx->pc = 0x198FECu;
    {
        const bool branch_taken_0x198fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198fec) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x198FF4u;
label_198ff4:
    // 0x198ff4: 0x0  nop
    ctx->pc = 0x198ff4u;
    // NOP
label_198ff8:
    // 0x198ff8: 0xc065d00  jal         func_197400
label_198ffc:
    if (ctx->pc == 0x198FFCu) {
        ctx->pc = 0x199000u;
        goto label_199000;
    }
    ctx->pc = 0x198FF8u;
    SET_GPR_U32(ctx, 31, 0x199000u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199000u; }
        if (ctx->pc != 0x199000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199000u; }
        if (ctx->pc != 0x199000u) { return; }
    }
    ctx->pc = 0x199000u;
label_199000:
    // 0x199000: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x199000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_199004:
    // 0x199004: 0x144300fc  bne         $v0, $v1, . + 4 + (0xFC << 2)
label_199008:
    if (ctx->pc == 0x199008u) {
        ctx->pc = 0x19900Cu;
        goto label_19900c;
    }
    ctx->pc = 0x199004u;
    {
        const bool branch_taken_0x199004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199004) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x19900Cu;
label_19900c:
    // 0x19900c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x19900cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_199010:
    // 0x199010: 0xc06560c  jal         func_195830
label_199014:
    if (ctx->pc == 0x199014u) {
        ctx->pc = 0x199014u;
            // 0x199014: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x199018u;
        goto label_199018;
    }
    ctx->pc = 0x199010u;
    SET_GPR_U32(ctx, 31, 0x199018u);
    ctx->pc = 0x199014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199010u;
            // 0x199014: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199018u; }
        if (ctx->pc != 0x199018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199018u; }
        if (ctx->pc != 0x199018u) { return; }
    }
    ctx->pc = 0x199018u;
label_199018:
    // 0x199018: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_19901c:
    if (ctx->pc == 0x19901Cu) {
        ctx->pc = 0x199020u;
        goto label_199020;
    }
    ctx->pc = 0x199018u;
    {
        const bool branch_taken_0x199018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199018) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x199020u;
label_199020:
    // 0x199020: 0xc065d00  jal         func_197400
label_199024:
    if (ctx->pc == 0x199024u) {
        ctx->pc = 0x199028u;
        goto label_199028;
    }
    ctx->pc = 0x199020u;
    SET_GPR_U32(ctx, 31, 0x199028u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199028u; }
        if (ctx->pc != 0x199028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199028u; }
        if (ctx->pc != 0x199028u) { return; }
    }
    ctx->pc = 0x199028u;
label_199028:
    // 0x199028: 0x184000f3  blez        $v0, . + 4 + (0xF3 << 2)
label_19902c:
    if (ctx->pc == 0x19902Cu) {
        ctx->pc = 0x199030u;
        goto label_199030;
    }
    ctx->pc = 0x199028u;
    {
        const bool branch_taken_0x199028 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x199028) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x199030u;
label_199030:
    // 0x199030: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x199030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_199034:
    // 0x199034: 0xc06560c  jal         func_195830
label_199038:
    if (ctx->pc == 0x199038u) {
        ctx->pc = 0x199038u;
            // 0x199038: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x19903Cu;
        goto label_19903c;
    }
    ctx->pc = 0x199034u;
    SET_GPR_U32(ctx, 31, 0x19903Cu);
    ctx->pc = 0x199038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199034u;
            // 0x199038: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19903Cu; }
        if (ctx->pc != 0x19903Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19903Cu; }
        if (ctx->pc != 0x19903Cu) { return; }
    }
    ctx->pc = 0x19903Cu;
label_19903c:
    // 0x19903c: 0x100000ee  b           . + 4 + (0xEE << 2)
label_199040:
    if (ctx->pc == 0x199040u) {
        ctx->pc = 0x199044u;
        goto label_199044;
    }
    ctx->pc = 0x19903Cu;
    {
        const bool branch_taken_0x19903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19903c) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x199044u;
label_199044:
    // 0x199044: 0x0  nop
    ctx->pc = 0x199044u;
    // NOP
label_199048:
    // 0x199048: 0xc065d00  jal         func_197400
label_19904c:
    if (ctx->pc == 0x19904Cu) {
        ctx->pc = 0x199050u;
        goto label_199050;
    }
    ctx->pc = 0x199048u;
    SET_GPR_U32(ctx, 31, 0x199050u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199050u; }
        if (ctx->pc != 0x199050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199050u; }
        if (ctx->pc != 0x199050u) { return; }
    }
    ctx->pc = 0x199050u;
label_199050:
    // 0x199050: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x199050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_199054:
    // 0x199054: 0x142000e8  bnez        $at, . + 4 + (0xE8 << 2)
label_199058:
    if (ctx->pc == 0x199058u) {
        ctx->pc = 0x19905Cu;
        goto label_19905c;
    }
    ctx->pc = 0x199054u;
    {
        const bool branch_taken_0x199054 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x199054) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x19905Cu;
label_19905c:
    // 0x19905c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x19905cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_199060:
    // 0x199060: 0xc06560c  jal         func_195830
label_199064:
    if (ctx->pc == 0x199064u) {
        ctx->pc = 0x199064u;
            // 0x199064: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x199068u;
        goto label_199068;
    }
    ctx->pc = 0x199060u;
    SET_GPR_U32(ctx, 31, 0x199068u);
    ctx->pc = 0x199064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199060u;
            // 0x199064: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199068u; }
        if (ctx->pc != 0x199068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199068u; }
        if (ctx->pc != 0x199068u) { return; }
    }
    ctx->pc = 0x199068u;
label_199068:
    // 0x199068: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_19906c:
    if (ctx->pc == 0x19906Cu) {
        ctx->pc = 0x199070u;
        goto label_199070;
    }
    ctx->pc = 0x199068u;
    {
        const bool branch_taken_0x199068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199068) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x199070u;
label_199070:
    // 0x199070: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x199070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_199074:
    // 0x199074: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x199074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_199078:
    // 0x199078: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x199078u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_19907c:
    // 0x19907c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x19907cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199080:
    // 0x199080: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x199080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_199084:
    // 0x199084: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x199084u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_199088:
    // 0x199088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x199088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19908c:
    // 0x19908c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x19908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_199090:
    // 0x199090: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x199090u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_199094:
    // 0x199094: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x199094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_199098:
    // 0x199098: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x199098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19909c:
    // 0x19909c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19909cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1990a0:
    // 0x1990a0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1990a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1990a4:
    // 0x1990a4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1990a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1990a8:
    // 0x1990a8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_1990ac:
    if (ctx->pc == 0x1990ACu) {
        ctx->pc = 0x1990ACu;
            // 0x1990ac: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1990B0u;
        goto label_1990b0;
    }
    ctx->pc = 0x1990A8u;
    {
        const bool branch_taken_0x1990a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1990ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1990A8u;
            // 0x1990ac: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990a8) {
            ctx->pc = 0x199120u;
            goto label_199120;
        }
    }
    ctx->pc = 0x1990B0u;
label_1990b0:
    // 0x1990b0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1990b4:
    if (ctx->pc == 0x1990B4u) {
        ctx->pc = 0x1990B8u;
        goto label_1990b8;
    }
    ctx->pc = 0x1990B0u;
    {
        const bool branch_taken_0x1990b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1990b0) {
            ctx->pc = 0x1990F8u;
            goto label_1990f8;
        }
    }
    ctx->pc = 0x1990B8u;
label_1990b8:
    // 0x1990b8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1990b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1990bc:
    // 0x1990bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1990c0:
    if (ctx->pc == 0x1990C0u) {
        ctx->pc = 0x1990C4u;
        goto label_1990c4;
    }
    ctx->pc = 0x1990BCu;
    {
        const bool branch_taken_0x1990bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1990bc) {
            ctx->pc = 0x1990D0u;
            goto label_1990d0;
        }
    }
    ctx->pc = 0x1990C4u;
label_1990c4:
    // 0x1990c4: 0x100000cc  b           . + 4 + (0xCC << 2)
label_1990c8:
    if (ctx->pc == 0x1990C8u) {
        ctx->pc = 0x1990CCu;
        goto label_1990cc;
    }
    ctx->pc = 0x1990C4u;
    {
        const bool branch_taken_0x1990c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1990c4) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x1990CCu;
label_1990cc:
    // 0x1990cc: 0x0  nop
    ctx->pc = 0x1990ccu;
    // NOP
label_1990d0:
    // 0x1990d0: 0xc065d00  jal         func_197400
label_1990d4:
    if (ctx->pc == 0x1990D4u) {
        ctx->pc = 0x1990D8u;
        goto label_1990d8;
    }
    ctx->pc = 0x1990D0u;
    SET_GPR_U32(ctx, 31, 0x1990D8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990D8u; }
        if (ctx->pc != 0x1990D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990D8u; }
        if (ctx->pc != 0x1990D8u) { return; }
    }
    ctx->pc = 0x1990D8u;
label_1990d8:
    // 0x1990d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1990d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1990dc:
    // 0x1990dc: 0x144300c6  bne         $v0, $v1, . + 4 + (0xC6 << 2)
label_1990e0:
    if (ctx->pc == 0x1990E0u) {
        ctx->pc = 0x1990E4u;
        goto label_1990e4;
    }
    ctx->pc = 0x1990DCu;
    {
        const bool branch_taken_0x1990dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1990dc) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x1990E4u;
label_1990e4:
    // 0x1990e4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1990e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1990e8:
    // 0x1990e8: 0xc06560c  jal         func_195830
label_1990ec:
    if (ctx->pc == 0x1990ECu) {
        ctx->pc = 0x1990ECu;
            // 0x1990ec: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1990F0u;
        goto label_1990f0;
    }
    ctx->pc = 0x1990E8u;
    SET_GPR_U32(ctx, 31, 0x1990F0u);
    ctx->pc = 0x1990ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1990E8u;
            // 0x1990ec: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990F0u; }
        if (ctx->pc != 0x1990F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990F0u; }
        if (ctx->pc != 0x1990F0u) { return; }
    }
    ctx->pc = 0x1990F0u;
label_1990f0:
    // 0x1990f0: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1990f4:
    if (ctx->pc == 0x1990F4u) {
        ctx->pc = 0x1990F8u;
        goto label_1990f8;
    }
    ctx->pc = 0x1990F0u;
    {
        const bool branch_taken_0x1990f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1990f0) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x1990F8u;
label_1990f8:
    // 0x1990f8: 0xc065d00  jal         func_197400
label_1990fc:
    if (ctx->pc == 0x1990FCu) {
        ctx->pc = 0x199100u;
        goto label_199100;
    }
    ctx->pc = 0x1990F8u;
    SET_GPR_U32(ctx, 31, 0x199100u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199100u; }
        if (ctx->pc != 0x199100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199100u; }
        if (ctx->pc != 0x199100u) { return; }
    }
    ctx->pc = 0x199100u;
label_199100:
    // 0x199100: 0x184000bd  blez        $v0, . + 4 + (0xBD << 2)
label_199104:
    if (ctx->pc == 0x199104u) {
        ctx->pc = 0x199108u;
        goto label_199108;
    }
    ctx->pc = 0x199100u;
    {
        const bool branch_taken_0x199100 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x199100) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x199108u;
label_199108:
    // 0x199108: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x199108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_19910c:
    // 0x19910c: 0xc06560c  jal         func_195830
label_199110:
    if (ctx->pc == 0x199110u) {
        ctx->pc = 0x199110u;
            // 0x199110: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x199114u;
        goto label_199114;
    }
    ctx->pc = 0x19910Cu;
    SET_GPR_U32(ctx, 31, 0x199114u);
    ctx->pc = 0x199110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19910Cu;
            // 0x199110: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199114u; }
        if (ctx->pc != 0x199114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199114u; }
        if (ctx->pc != 0x199114u) { return; }
    }
    ctx->pc = 0x199114u;
label_199114:
    // 0x199114: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_199118:
    if (ctx->pc == 0x199118u) {
        ctx->pc = 0x19911Cu;
        goto label_19911c;
    }
    ctx->pc = 0x199114u;
    {
        const bool branch_taken_0x199114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199114) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x19911Cu;
label_19911c:
    // 0x19911c: 0x0  nop
    ctx->pc = 0x19911cu;
    // NOP
label_199120:
    // 0x199120: 0xc065d00  jal         func_197400
label_199124:
    if (ctx->pc == 0x199124u) {
        ctx->pc = 0x199128u;
        goto label_199128;
    }
    ctx->pc = 0x199120u;
    SET_GPR_U32(ctx, 31, 0x199128u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199128u; }
        if (ctx->pc != 0x199128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199128u; }
        if (ctx->pc != 0x199128u) { return; }
    }
    ctx->pc = 0x199128u;
label_199128:
    // 0x199128: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x199128u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_19912c:
    // 0x19912c: 0x142000b2  bnez        $at, . + 4 + (0xB2 << 2)
label_199130:
    if (ctx->pc == 0x199130u) {
        ctx->pc = 0x199134u;
        goto label_199134;
    }
    ctx->pc = 0x19912Cu;
    {
        const bool branch_taken_0x19912c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19912c) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x199134u;
label_199134:
    // 0x199134: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x199134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_199138:
    // 0x199138: 0xc06560c  jal         func_195830
label_19913c:
    if (ctx->pc == 0x19913Cu) {
        ctx->pc = 0x19913Cu;
            // 0x19913c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x199140u;
        goto label_199140;
    }
    ctx->pc = 0x199138u;
    SET_GPR_U32(ctx, 31, 0x199140u);
    ctx->pc = 0x19913Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199138u;
            // 0x19913c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199140u; }
        if (ctx->pc != 0x199140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199140u; }
        if (ctx->pc != 0x199140u) { return; }
    }
    ctx->pc = 0x199140u;
label_199140:
    // 0x199140: 0x100000ad  b           . + 4 + (0xAD << 2)
label_199144:
    if (ctx->pc == 0x199144u) {
        ctx->pc = 0x199148u;
        goto label_199148;
    }
    ctx->pc = 0x199140u;
    {
        const bool branch_taken_0x199140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199140) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x199148u;
label_199148:
    // 0x199148: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x199148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_19914c:
    // 0x19914c: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
label_199150:
    if (ctx->pc == 0x199150u) {
        ctx->pc = 0x199154u;
        goto label_199154;
    }
    ctx->pc = 0x19914Cu;
    {
        const bool branch_taken_0x19914c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19914c) {
            ctx->pc = 0x1992B0u;
            goto label_1992b0;
        }
    }
    ctx->pc = 0x199154u;
label_199154:
    // 0x199154: 0xc040d72  jal         func_1035C8
label_199158:
    if (ctx->pc == 0x199158u) {
        ctx->pc = 0x199158u;
            // 0x199158: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x19915Cu;
        goto label_19915c;
    }
    ctx->pc = 0x199154u;
    SET_GPR_U32(ctx, 31, 0x19915Cu);
    ctx->pc = 0x199158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199154u;
            // 0x199158: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19915Cu; }
        if (ctx->pc != 0x19915Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19915Cu; }
        if (ctx->pc != 0x19915Cu) { return; }
    }
    ctx->pc = 0x19915Cu;
label_19915c:
    // 0x19915c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19915cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199160:
    // 0x199160: 0xc040078  jal         func_1001E0
label_199164:
    if (ctx->pc == 0x199164u) {
        ctx->pc = 0x199164u;
            // 0x199164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x199168u;
        goto label_199168;
    }
    ctx->pc = 0x199160u;
    SET_GPR_U32(ctx, 31, 0x199168u);
    ctx->pc = 0x199164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199160u;
            // 0x199164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199168u; }
        if (ctx->pc != 0x199168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199168u; }
        if (ctx->pc != 0x199168u) { return; }
    }
    ctx->pc = 0x199168u;
label_199168:
    // 0x199168: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_19916c:
    if (ctx->pc == 0x19916Cu) {
        ctx->pc = 0x199170u;
        goto label_199170;
    }
    ctx->pc = 0x199168u;
    {
        const bool branch_taken_0x199168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199168) {
            ctx->pc = 0x199190u;
            goto label_199190;
        }
    }
    ctx->pc = 0x199170u;
label_199170:
    // 0x199170: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x199170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199174:
    // 0x199174: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x199174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_199178:
    // 0x199178: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x199178u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_19917c:
    // 0x19917c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19917cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199180:
    // 0x199180: 0x0  nop
    ctx->pc = 0x199180u;
    // NOP
label_199184:
    // 0x199184: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_199188:
    // 0x199188: 0x10000003  b           . + 4 + (0x3 << 2)
label_19918c:
    if (ctx->pc == 0x19918Cu) {
        ctx->pc = 0x19918Cu;
            // 0x19918c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x199190u;
        goto label_199190;
    }
    ctx->pc = 0x199188u;
    {
        const bool branch_taken_0x199188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19918Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199188u;
            // 0x19918c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x199188) {
            ctx->pc = 0x199198u;
            goto label_199198;
        }
    }
    ctx->pc = 0x199190u;
label_199190:
    // 0x199190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199194:
    // 0x199194: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x199194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_199198:
    // 0x199198: 0xc040d72  jal         func_1035C8
label_19919c:
    if (ctx->pc == 0x19919Cu) {
        ctx->pc = 0x19919Cu;
            // 0x19919c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1991A0u;
        goto label_1991a0;
    }
    ctx->pc = 0x199198u;
    SET_GPR_U32(ctx, 31, 0x1991A0u);
    ctx->pc = 0x19919Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199198u;
            // 0x19919c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991A0u; }
        if (ctx->pc != 0x1991A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991A0u; }
        if (ctx->pc != 0x1991A0u) { return; }
    }
    ctx->pc = 0x1991A0u;
label_1991a0:
    // 0x1991a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1991a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1991a4:
    // 0x1991a4: 0xc040078  jal         func_1001E0
label_1991a8:
    if (ctx->pc == 0x1991A8u) {
        ctx->pc = 0x1991A8u;
            // 0x1991a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1991ACu;
        goto label_1991ac;
    }
    ctx->pc = 0x1991A4u;
    SET_GPR_U32(ctx, 31, 0x1991ACu);
    ctx->pc = 0x1991A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1991A4u;
            // 0x1991a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991ACu; }
        if (ctx->pc != 0x1991ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991ACu; }
        if (ctx->pc != 0x1991ACu) { return; }
    }
    ctx->pc = 0x1991ACu;
label_1991ac:
    // 0x1991ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1991b0:
    if (ctx->pc == 0x1991B0u) {
        ctx->pc = 0x1991B4u;
        goto label_1991b4;
    }
    ctx->pc = 0x1991ACu;
    {
        const bool branch_taken_0x1991ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1991ac) {
            ctx->pc = 0x1991D0u;
            goto label_1991d0;
        }
    }
    ctx->pc = 0x1991B4u;
label_1991b4:
    // 0x1991b4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1991b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1991b8:
    // 0x1991b8: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1991b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1991bc:
    // 0x1991bc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1991bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1991c0:
    // 0x1991c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1991c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1991c4:
    // 0x1991c4: 0x0  nop
    ctx->pc = 0x1991c4u;
    // NOP
label_1991c8:
    // 0x1991c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1991c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1991cc:
    // 0x1991cc: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1991ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1991d0:
    // 0x1991d0: 0xc040d72  jal         func_1035C8
label_1991d4:
    if (ctx->pc == 0x1991D4u) {
        ctx->pc = 0x1991D4u;
            // 0x1991d4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1991D8u;
        goto label_1991d8;
    }
    ctx->pc = 0x1991D0u;
    SET_GPR_U32(ctx, 31, 0x1991D8u);
    ctx->pc = 0x1991D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1991D0u;
            // 0x1991d4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991D8u; }
        if (ctx->pc != 0x1991D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991D8u; }
        if (ctx->pc != 0x1991D8u) { return; }
    }
    ctx->pc = 0x1991D8u;
label_1991d8:
    // 0x1991d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1991d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1991dc:
    // 0x1991dc: 0xc04008c  jal         func_100230
label_1991e0:
    if (ctx->pc == 0x1991E0u) {
        ctx->pc = 0x1991E0u;
            // 0x1991e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1991E4u;
        goto label_1991e4;
    }
    ctx->pc = 0x1991DCu;
    SET_GPR_U32(ctx, 31, 0x1991E4u);
    ctx->pc = 0x1991E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1991DCu;
            // 0x1991e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991E4u; }
        if (ctx->pc != 0x1991E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991E4u; }
        if (ctx->pc != 0x1991E4u) { return; }
    }
    ctx->pc = 0x1991E4u;
label_1991e4:
    // 0x1991e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1991e8:
    if (ctx->pc == 0x1991E8u) {
        ctx->pc = 0x1991ECu;
        goto label_1991ec;
    }
    ctx->pc = 0x1991E4u;
    {
        const bool branch_taken_0x1991e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1991e4) {
            ctx->pc = 0x199208u;
            goto label_199208;
        }
    }
    ctx->pc = 0x1991ECu;
label_1991ec:
    // 0x1991ec: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1991ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1991f0:
    // 0x1991f0: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1991f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1991f4:
    // 0x1991f4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1991f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1991f8:
    // 0x1991f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1991f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1991fc:
    // 0x1991fc: 0x0  nop
    ctx->pc = 0x1991fcu;
    // NOP
label_199200:
    // 0x199200: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x199200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_199204:
    // 0x199204: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x199204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_199208:
    // 0x199208: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x199208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_19920c:
    // 0x19920c: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x19920cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_199210:
    // 0x199210: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x199210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_199214:
    // 0x199214: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x199214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_199218:
    // 0x199218: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x199218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19921c:
    // 0x19921c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19921cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_199220:
    // 0x199220: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x199220u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_199224:
    // 0x199224: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x199224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_199228:
    // 0x199228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x199228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19922c:
    // 0x19922c: 0x0  nop
    ctx->pc = 0x19922cu;
    // NOP
label_199230:
    // 0x199230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_199234:
    // 0x199234: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x199234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_199238:
    // 0x199238: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x199238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19923c:
    // 0x19923c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19923cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_199240:
    // 0x199240: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x199240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_199244:
    // 0x199244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199248:
    // 0x199248: 0x0  nop
    ctx->pc = 0x199248u;
    // NOP
label_19924c:
    // 0x19924c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19924cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_199250:
    // 0x199250: 0xc04b6ee  jal         func_12DBB8
label_199254:
    if (ctx->pc == 0x199254u) {
        ctx->pc = 0x199254u;
            // 0x199254: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x199258u;
        goto label_199258;
    }
    ctx->pc = 0x199250u;
    SET_GPR_U32(ctx, 31, 0x199258u);
    ctx->pc = 0x199254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199250u;
            // 0x199254: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199258u; }
        if (ctx->pc != 0x199258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199258u; }
        if (ctx->pc != 0x199258u) { return; }
    }
    ctx->pc = 0x199258u;
label_199258:
    // 0x199258: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x199258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19925c:
    // 0x19925c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x19925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199260:
    // 0x199260: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x199260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199264:
    // 0x199264: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x199264u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_199268:
    // 0x199268: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199268u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19926c:
    // 0x19926c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_199270:
    if (ctx->pc == 0x199270u) {
        ctx->pc = 0x199270u;
            // 0x199270: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x199274u;
        goto label_199274;
    }
    ctx->pc = 0x19926Cu;
    {
        const bool branch_taken_0x19926c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x199270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19926Cu;
            // 0x199270: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19926c) {
            ctx->pc = 0x199280u;
            goto label_199280;
        }
    }
    ctx->pc = 0x199274u;
label_199274:
    // 0x199274: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x199274u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_199278:
    // 0x199278: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x199278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_19927c:
    // 0x19927c: 0x0  nop
    ctx->pc = 0x19927cu;
    // NOP
label_199280:
    // 0x199280: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x199280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199284:
    // 0x199284: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x199284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199288:
    // 0x199288: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x199288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19928c:
    // 0x19928c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19928cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_199290:
    // 0x199290: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199294:
    // 0x199294: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_199298:
    if (ctx->pc == 0x199298u) {
        ctx->pc = 0x199298u;
            // 0x199298: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x19929Cu;
        goto label_19929c;
    }
    ctx->pc = 0x199294u;
    {
        const bool branch_taken_0x199294 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x199298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199294u;
            // 0x199298: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199294) {
            ctx->pc = 0x1992A8u;
            goto label_1992a8;
        }
    }
    ctx->pc = 0x19929Cu;
label_19929c:
    // 0x19929c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19929cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1992a0:
    // 0x1992a0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1992a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1992a4:
    // 0x1992a4: 0x0  nop
    ctx->pc = 0x1992a4u;
    // NOP
label_1992a8:
    // 0x1992a8: 0x10000053  b           . + 4 + (0x53 << 2)
label_1992ac:
    if (ctx->pc == 0x1992ACu) {
        ctx->pc = 0x1992ACu;
            // 0x1992ac: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1992B0u;
        goto label_1992b0;
    }
    ctx->pc = 0x1992A8u;
    {
        const bool branch_taken_0x1992a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1992ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1992A8u;
            // 0x1992ac: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992a8) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x1992B0u;
label_1992b0:
    // 0x1992b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1992b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1992b4:
    // 0x1992b4: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
label_1992b8:
    if (ctx->pc == 0x1992B8u) {
        ctx->pc = 0x1992B8u;
            // 0x1992b8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1992BCu;
        goto label_1992bc;
    }
    ctx->pc = 0x1992B4u;
    {
        const bool branch_taken_0x1992b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1992B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1992B4u;
            // 0x1992b8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992b4) {
            ctx->pc = 0x199378u;
            goto label_199378;
        }
    }
    ctx->pc = 0x1992BCu;
label_1992bc:
    // 0x1992bc: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1992bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1992c0:
    // 0x1992c0: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1992c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1992c4:
    // 0x1992c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1992c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1992c8:
    // 0x1992c8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1992c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1992cc:
    // 0x1992cc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1992ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1992d0:
    // 0x1992d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1992d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1992d4:
    // 0x1992d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1992d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1992d8:
    // 0x1992d8: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1992d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1992dc:
    // 0x1992dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1992dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1992e0:
    // 0x1992e0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1992e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1992e4:
    // 0x1992e4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1992e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1992e8:
    // 0x1992e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1992e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1992ec:
    // 0x1992ec: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1992ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1992f0:
    // 0x1992f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1992f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1992f4:
    // 0x1992f4: 0x0  nop
    ctx->pc = 0x1992f4u;
    // NOP
label_1992f8:
    // 0x1992f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1992f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1992fc:
    // 0x1992fc: 0xc04b6ee  jal         func_12DBB8
label_199300:
    if (ctx->pc == 0x199300u) {
        ctx->pc = 0x199300u;
            // 0x199300: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x199304u;
        goto label_199304;
    }
    ctx->pc = 0x1992FCu;
    SET_GPR_U32(ctx, 31, 0x199304u);
    ctx->pc = 0x199300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1992FCu;
            // 0x199300: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199304u; }
        if (ctx->pc != 0x199304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199304u; }
        if (ctx->pc != 0x199304u) { return; }
    }
    ctx->pc = 0x199304u;
label_199304:
    // 0x199304: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x199304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199308:
    // 0x199308: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x199308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19930c:
    // 0x19930c: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x19930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199310:
    // 0x199310: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x199310u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_199314:
    // 0x199314: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199318:
    // 0x199318: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_19931c:
    if (ctx->pc == 0x19931Cu) {
        ctx->pc = 0x19931Cu;
            // 0x19931c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x199320u;
        goto label_199320;
    }
    ctx->pc = 0x199318u;
    {
        const bool branch_taken_0x199318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19931Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199318u;
            // 0x19931c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199318) {
            ctx->pc = 0x199328u;
            goto label_199328;
        }
    }
    ctx->pc = 0x199320u;
label_199320:
    // 0x199320: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x199320u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_199324:
    // 0x199324: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x199324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_199328:
    // 0x199328: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x199328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19932c:
    // 0x19932c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x19932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199330:
    // 0x199330: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x199330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199334:
    // 0x199334: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x199334u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_199338:
    // 0x199338: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19933c:
    // 0x19933c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_199340:
    if (ctx->pc == 0x199340u) {
        ctx->pc = 0x199340u;
            // 0x199340: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x199344u;
        goto label_199344;
    }
    ctx->pc = 0x19933Cu;
    {
        const bool branch_taken_0x19933c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x199340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19933Cu;
            // 0x199340: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19933c) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x199344u;
label_199344:
    // 0x199344: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x199344u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_199348:
    // 0x199348: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x199348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_19934c:
    // 0x19934c: 0x0  nop
    ctx->pc = 0x19934cu;
    // NOP
label_199350:
    // 0x199350: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x199350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_199354:
    // 0x199354: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x199354u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_199358:
    // 0x199358: 0x14200027  bnez        $at, . + 4 + (0x27 << 2)
label_19935c:
    if (ctx->pc == 0x19935Cu) {
        ctx->pc = 0x199360u;
        goto label_199360;
    }
    ctx->pc = 0x199358u;
    {
        const bool branch_taken_0x199358 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x199358) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x199360u;
label_199360:
    // 0x199360: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x199360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_199364:
    // 0x199364: 0xc06560c  jal         func_195830
label_199368:
    if (ctx->pc == 0x199368u) {
        ctx->pc = 0x199368u;
            // 0x199368: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x19936Cu;
        goto label_19936c;
    }
    ctx->pc = 0x199364u;
    SET_GPR_U32(ctx, 31, 0x19936Cu);
    ctx->pc = 0x199368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199364u;
            // 0x199368: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19936Cu; }
        if (ctx->pc != 0x19936Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19936Cu; }
        if (ctx->pc != 0x19936Cu) { return; }
    }
    ctx->pc = 0x19936Cu;
label_19936c:
    // 0x19936c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_199370:
    // 0x199370: 0x10000021  b           . + 4 + (0x21 << 2)
label_199374:
    if (ctx->pc == 0x199374u) {
        ctx->pc = 0x199374u;
            // 0x199374: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x199378u;
        goto label_199378;
    }
    ctx->pc = 0x199370u;
    {
        const bool branch_taken_0x199370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199370u;
            // 0x199374: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199370) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x199378u;
label_199378:
    // 0x199378: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x199378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19937c:
    // 0x19937c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_199380:
    if (ctx->pc == 0x199380u) {
        ctx->pc = 0x199384u;
        goto label_199384;
    }
    ctx->pc = 0x19937Cu;
    {
        const bool branch_taken_0x19937c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19937c) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x199384u;
label_199384:
    // 0x199384: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x199384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_199388:
    // 0x199388: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x199388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_19938c:
    // 0x19938c: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x19938cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_199390:
    // 0x199390: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x199390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199394:
    // 0x199394: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x199394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_199398:
    // 0x199398: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x199398u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19939c:
    // 0x19939c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19939cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1993a0:
    // 0x1993a0: 0x0  nop
    ctx->pc = 0x1993a0u;
    // NOP
label_1993a4:
    // 0x1993a4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1993a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1993a8:
    // 0x1993a8: 0xe60100d4  swc1        $f1, 0xD4($s0)
    ctx->pc = 0x1993a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1993ac:
    // 0x1993ac: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1993acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1993b0:
    // 0x1993b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1993b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1993b4:
    // 0x1993b4: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1993b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1993b8:
    // 0x1993b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1993b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1993bc:
    // 0x1993bc: 0xc040d72  jal         func_1035C8
label_1993c0:
    if (ctx->pc == 0x1993C0u) {
        ctx->pc = 0x1993C0u;
            // 0x1993c0: 0xc44c0118  lwc1        $f12, 0x118($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1993C4u;
        goto label_1993c4;
    }
    ctx->pc = 0x1993BCu;
    SET_GPR_U32(ctx, 31, 0x1993C4u);
    ctx->pc = 0x1993C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1993BCu;
            // 0x1993c0: 0xc44c0118  lwc1        $f12, 0x118($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993C4u; }
        if (ctx->pc != 0x1993C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993C4u; }
        if (ctx->pc != 0x1993C4u) { return; }
    }
    ctx->pc = 0x1993C4u;
label_1993c4:
    // 0x1993c4: 0x3c044009  lui         $a0, 0x4009
    ctx->pc = 0x1993c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16393 << 16));
label_1993c8:
    // 0x1993c8: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1993c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1993cc:
    // 0x1993cc: 0x34841eb8  ori         $a0, $a0, 0x1EB8
    ctx->pc = 0x1993ccu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)7864u)));
label_1993d0:
    // 0x1993d0: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1993d0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)34079u)));
label_1993d4:
    // 0x1993d4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1993d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_1993d8:
    // 0x1993d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1993d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1993dc:
    // 0x1993dc: 0xc04008c  jal         func_100230
label_1993e0:
    if (ctx->pc == 0x1993E0u) {
        ctx->pc = 0x1993E0u;
            // 0x1993e0: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->pc = 0x1993E4u;
        goto label_1993e4;
    }
    ctx->pc = 0x1993DCu;
    SET_GPR_U32(ctx, 31, 0x1993E4u);
    ctx->pc = 0x1993E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1993DCu;
            // 0x1993e0: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993E4u; }
        if (ctx->pc != 0x1993E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993E4u; }
        if (ctx->pc != 0x1993E4u) { return; }
    }
    ctx->pc = 0x1993E4u;
label_1993e4:
    // 0x1993e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1993e8:
    if (ctx->pc == 0x1993E8u) {
        ctx->pc = 0x1993ECu;
        goto label_1993ec;
    }
    ctx->pc = 0x1993E4u;
    {
        const bool branch_taken_0x1993e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1993e4) {
            ctx->pc = 0x1993F8u;
            goto label_1993f8;
        }
    }
    ctx->pc = 0x1993ECu;
label_1993ec:
    // 0x1993ec: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1993ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_1993f0:
    // 0x1993f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1993f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1993f4:
    // 0x1993f4: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1993f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1993f8:
    // 0x1993f8: 0xc04b788  jal         func_12DE20
label_1993fc:
    if (ctx->pc == 0x1993FCu) {
        ctx->pc = 0x1993FCu;
            // 0x1993fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x199400u;
        goto label_199400;
    }
    ctx->pc = 0x1993F8u;
    SET_GPR_U32(ctx, 31, 0x199400u);
    ctx->pc = 0x1993FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1993F8u;
            // 0x1993fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199400u; }
        if (ctx->pc != 0x199400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199400u; }
        if (ctx->pc != 0x199400u) { return; }
    }
    ctx->pc = 0x199400u;
label_199400:
    // 0x199400: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x199400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199404:
    // 0x199404: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x199404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_199408:
    // 0x199408: 0xc04b7da  jal         func_12DF68
label_19940c:
    if (ctx->pc == 0x19940Cu) {
        ctx->pc = 0x19940Cu;
            // 0x19940c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x199410u;
        goto label_199410;
    }
    ctx->pc = 0x199408u;
    SET_GPR_U32(ctx, 31, 0x199410u);
    ctx->pc = 0x19940Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199408u;
            // 0x19940c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199410u; }
        if (ctx->pc != 0x199410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199410u; }
        if (ctx->pc != 0x199410u) { return; }
    }
    ctx->pc = 0x199410u;
label_199410:
    // 0x199410: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x199410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199414:
    // 0x199414: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x199414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_199418:
    // 0x199418: 0xc04b804  jal         func_12E010
label_19941c:
    if (ctx->pc == 0x19941Cu) {
        ctx->pc = 0x19941Cu;
            // 0x19941c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x199420u;
        goto label_199420;
    }
    ctx->pc = 0x199418u;
    SET_GPR_U32(ctx, 31, 0x199420u);
    ctx->pc = 0x19941Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199418u;
            // 0x19941c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199420u; }
        if (ctx->pc != 0x199420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199420u; }
        if (ctx->pc != 0x199420u) { return; }
    }
    ctx->pc = 0x199420u;
label_199420:
    // 0x199420: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x199420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199424:
    // 0x199424: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x199424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_199428:
    // 0x199428: 0xc04b7b0  jal         func_12DEC0
label_19942c:
    if (ctx->pc == 0x19942Cu) {
        ctx->pc = 0x19942Cu;
            // 0x19942c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x199430u;
        goto label_199430;
    }
    ctx->pc = 0x199428u;
    SET_GPR_U32(ctx, 31, 0x199430u);
    ctx->pc = 0x19942Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199428u;
            // 0x19942c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199430u; }
        if (ctx->pc != 0x199430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199430u; }
        if (ctx->pc != 0x199430u) { return; }
    }
    ctx->pc = 0x199430u;
label_199430:
    // 0x199430: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x199430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199434:
    // 0x199434: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x199434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199438:
    // 0x199438: 0xc04b75e  jal         func_12DD78
label_19943c:
    if (ctx->pc == 0x19943Cu) {
        ctx->pc = 0x19943Cu;
            // 0x19943c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x199440u;
        goto label_199440;
    }
    ctx->pc = 0x199438u;
    SET_GPR_U32(ctx, 31, 0x199440u);
    ctx->pc = 0x19943Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199438u;
            // 0x19943c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199440u; }
        if (ctx->pc != 0x199440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199440u; }
        if (ctx->pc != 0x199440u) { return; }
    }
    ctx->pc = 0x199440u;
label_199440:
    // 0x199440: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x199440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_199444:
    // 0x199444: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x199444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_199448:
    // 0x199448: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x199448u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19944c:
    // 0x19944c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_199450:
    if (ctx->pc == 0x199450u) {
        ctx->pc = 0x199454u;
        goto label_199454;
    }
    ctx->pc = 0x19944Cu;
    {
        const bool branch_taken_0x19944c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19944c) {
            ctx->pc = 0x1994A0u;
            goto label_1994a0;
        }
    }
    ctx->pc = 0x199454u;
label_199454:
    // 0x199454: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x199454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_199458:
    // 0x199458: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19945c:
    if (ctx->pc == 0x19945Cu) {
        ctx->pc = 0x199460u;
        goto label_199460;
    }
    ctx->pc = 0x199458u;
    {
        const bool branch_taken_0x199458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199458) {
            ctx->pc = 0x199470u;
            goto label_199470;
        }
    }
    ctx->pc = 0x199460u;
label_199460:
    // 0x199460: 0xc0604f0  jal         func_1813C0
label_199464:
    if (ctx->pc == 0x199464u) {
        ctx->pc = 0x199464u;
            // 0x199464: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x199468u;
        goto label_199468;
    }
    ctx->pc = 0x199460u;
    SET_GPR_U32(ctx, 31, 0x199468u);
    ctx->pc = 0x199464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199460u;
            // 0x199464: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199468u; }
        if (ctx->pc != 0x199468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199468u; }
        if (ctx->pc != 0x199468u) { return; }
    }
    ctx->pc = 0x199468u;
label_199468:
    // 0x199468: 0x10000003  b           . + 4 + (0x3 << 2)
label_19946c:
    if (ctx->pc == 0x19946Cu) {
        ctx->pc = 0x199470u;
        goto label_199470;
    }
    ctx->pc = 0x199468u;
    {
        const bool branch_taken_0x199468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199468) {
            ctx->pc = 0x199478u;
            goto label_199478;
        }
    }
    ctx->pc = 0x199470u;
label_199470:
    // 0x199470: 0xc0604dc  jal         func_181370
label_199474:
    if (ctx->pc == 0x199474u) {
        ctx->pc = 0x199474u;
            // 0x199474: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x199478u;
        goto label_199478;
    }
    ctx->pc = 0x199470u;
    SET_GPR_U32(ctx, 31, 0x199478u);
    ctx->pc = 0x199474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199470u;
            // 0x199474: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199478u; }
        if (ctx->pc != 0x199478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199478u; }
        if (ctx->pc != 0x199478u) { return; }
    }
    ctx->pc = 0x199478u;
label_199478:
    // 0x199478: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x199478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_19947c:
    // 0x19947c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_199480:
    if (ctx->pc == 0x199480u) {
        ctx->pc = 0x199484u;
        goto label_199484;
    }
    ctx->pc = 0x19947Cu;
    {
        const bool branch_taken_0x19947c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19947c) {
            ctx->pc = 0x199490u;
            goto label_199490;
        }
    }
    ctx->pc = 0x199484u;
label_199484:
    // 0x199484: 0x1000000a  b           . + 4 + (0xA << 2)
label_199488:
    if (ctx->pc == 0x199488u) {
        ctx->pc = 0x199488u;
            // 0x199488: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x19948Cu;
        goto label_19948c;
    }
    ctx->pc = 0x199484u;
    {
        const bool branch_taken_0x199484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199484u;
            // 0x199488: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199484) {
            ctx->pc = 0x1994B0u;
            goto label_1994b0;
        }
    }
    ctx->pc = 0x19948Cu;
label_19948c:
    // 0x19948c: 0x0  nop
    ctx->pc = 0x19948cu;
    // NOP
label_199490:
    // 0x199490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199494:
    // 0x199494: 0x10000006  b           . + 4 + (0x6 << 2)
label_199498:
    if (ctx->pc == 0x199498u) {
        ctx->pc = 0x199498u;
            // 0x199498: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x19949Cu;
        goto label_19949c;
    }
    ctx->pc = 0x199494u;
    {
        const bool branch_taken_0x199494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199494u;
            // 0x199498: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199494) {
            ctx->pc = 0x1994B0u;
            goto label_1994b0;
        }
    }
    ctx->pc = 0x19949Cu;
label_19949c:
    // 0x19949c: 0x0  nop
    ctx->pc = 0x19949cu;
    // NOP
label_1994a0:
    // 0x1994a0: 0xc0604dc  jal         func_181370
label_1994a4:
    if (ctx->pc == 0x1994A4u) {
        ctx->pc = 0x1994A4u;
            // 0x1994a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1994A8u;
        goto label_1994a8;
    }
    ctx->pc = 0x1994A0u;
    SET_GPR_U32(ctx, 31, 0x1994A8u);
    ctx->pc = 0x1994A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1994A0u;
            // 0x1994a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1994A8u; }
        if (ctx->pc != 0x1994A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1994A8u; }
        if (ctx->pc != 0x1994A8u) { return; }
    }
    ctx->pc = 0x1994A8u;
label_1994a8:
    // 0x1994a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1994a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1994ac:
    // 0x1994ac: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1994acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1994b0:
    // 0x1994b0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1994b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1994b4:
    // 0x1994b4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1994b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1994b8:
    // 0x1994b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1994b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1994bc:
    // 0x1994bc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1994bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1994c0:
    // 0x1994c0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1994c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1994c4:
    // 0x1994c4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1994c8:
    // 0x1994c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1994c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1994cc:
    // 0x1994cc: 0x0  nop
    ctx->pc = 0x1994ccu;
    // NOP
label_1994d0:
    // 0x1994d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1994d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1994d4:
    // 0x1994d4: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1994d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1994d8:
    // 0x1994d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1994d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1994dc:
    // 0x1994dc: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1994dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1994e0:
    // 0x1994e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1994e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1994e4:
    // 0x1994e4: 0x0  nop
    ctx->pc = 0x1994e4u;
    // NOP
label_1994e8:
    // 0x1994e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1994e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1994ec:
    // 0x1994ec: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1994ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1994f0:
    // 0x1994f0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1994f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1994f4:
    // 0x1994f4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1994f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1994f8:
    // 0x1994f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1994f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1994fc:
    // 0x1994fc: 0x0  nop
    ctx->pc = 0x1994fcu;
    // NOP
label_199500:
    // 0x199500: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x199500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_199504:
    // 0x199504: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x199504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_199508:
    // 0x199508: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x199508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_19950c:
    // 0x19950c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x19950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_199510:
    // 0x199510: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x199510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199514:
    // 0x199514: 0x0  nop
    ctx->pc = 0x199514u;
    // NOP
label_199518:
    // 0x199518: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x199518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19951c:
    // 0x19951c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x19951cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_199520:
    // 0x199520: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x199520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_199524:
    // 0x199524: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_199528:
    // 0x199528: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x199528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_19952c:
    // 0x19952c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199530:
    // 0x199530: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x199530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199534:
    // 0x199534: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199538:
    // 0x199538: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19953c:
    if (ctx->pc == 0x19953Cu) {
        ctx->pc = 0x19953Cu;
            // 0x19953c: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->pc = 0x199540u;
        goto label_199540;
    }
    ctx->pc = 0x199538u;
    {
        const bool branch_taken_0x199538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19953Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199538u;
            // 0x19953c: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199538) {
            ctx->pc = 0x199558u;
            goto label_199558;
        }
    }
    ctx->pc = 0x199540u;
label_199540:
    // 0x199540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199544:
    // 0x199544: 0x0  nop
    ctx->pc = 0x199544u;
    // NOP
label_199548:
    // 0x199548: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199548u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19954c:
    // 0x19954c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_199550:
    if (ctx->pc == 0x199550u) {
        ctx->pc = 0x199554u;
        goto label_199554;
    }
    ctx->pc = 0x19954Cu;
    {
        const bool branch_taken_0x19954c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19954c) {
            ctx->pc = 0x199570u;
            goto label_199570;
        }
    }
    ctx->pc = 0x199554u;
label_199554:
    // 0x199554: 0x0  nop
    ctx->pc = 0x199554u;
    // NOP
label_199558:
    // 0x199558: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x199558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_19955c:
    // 0x19955c: 0x40f809  jalr        $v0
label_199560:
    if (ctx->pc == 0x199560u) {
        ctx->pc = 0x199560u;
            // 0x199560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x199564u;
        goto label_199564;
    }
    ctx->pc = 0x19955Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199564u);
        ctx->pc = 0x199560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19955Cu;
            // 0x199560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198B60u: goto label_198b60;
            case 0x198B64u: goto label_198b64;
            case 0x198B68u: goto label_198b68;
            case 0x198B6Cu: goto label_198b6c;
            case 0x198B70u: goto label_198b70;
            case 0x198B74u: goto label_198b74;
            case 0x198B78u: goto label_198b78;
            case 0x198B7Cu: goto label_198b7c;
            case 0x198B80u: goto label_198b80;
            case 0x198B84u: goto label_198b84;
            case 0x198B88u: goto label_198b88;
            case 0x198B8Cu: goto label_198b8c;
            case 0x198B90u: goto label_198b90;
            case 0x198B94u: goto label_198b94;
            case 0x198B98u: goto label_198b98;
            case 0x198B9Cu: goto label_198b9c;
            case 0x198BA0u: goto label_198ba0;
            case 0x198BA4u: goto label_198ba4;
            case 0x198BA8u: goto label_198ba8;
            case 0x198BACu: goto label_198bac;
            case 0x198BB0u: goto label_198bb0;
            case 0x198BB4u: goto label_198bb4;
            case 0x198BB8u: goto label_198bb8;
            case 0x198BBCu: goto label_198bbc;
            case 0x198BC0u: goto label_198bc0;
            case 0x198BC4u: goto label_198bc4;
            case 0x198BC8u: goto label_198bc8;
            case 0x198BCCu: goto label_198bcc;
            case 0x198BD0u: goto label_198bd0;
            case 0x198BD4u: goto label_198bd4;
            case 0x198BD8u: goto label_198bd8;
            case 0x198BDCu: goto label_198bdc;
            case 0x198BE0u: goto label_198be0;
            case 0x198BE4u: goto label_198be4;
            case 0x198BE8u: goto label_198be8;
            case 0x198BECu: goto label_198bec;
            case 0x198BF0u: goto label_198bf0;
            case 0x198BF4u: goto label_198bf4;
            case 0x198BF8u: goto label_198bf8;
            case 0x198BFCu: goto label_198bfc;
            case 0x198C00u: goto label_198c00;
            case 0x198C04u: goto label_198c04;
            case 0x198C08u: goto label_198c08;
            case 0x198C0Cu: goto label_198c0c;
            case 0x198C10u: goto label_198c10;
            case 0x198C14u: goto label_198c14;
            case 0x198C18u: goto label_198c18;
            case 0x198C1Cu: goto label_198c1c;
            case 0x198C20u: goto label_198c20;
            case 0x198C24u: goto label_198c24;
            case 0x198C28u: goto label_198c28;
            case 0x198C2Cu: goto label_198c2c;
            case 0x198C30u: goto label_198c30;
            case 0x198C34u: goto label_198c34;
            case 0x198C38u: goto label_198c38;
            case 0x198C3Cu: goto label_198c3c;
            case 0x198C40u: goto label_198c40;
            case 0x198C44u: goto label_198c44;
            case 0x198C48u: goto label_198c48;
            case 0x198C4Cu: goto label_198c4c;
            case 0x198C50u: goto label_198c50;
            case 0x198C54u: goto label_198c54;
            case 0x198C58u: goto label_198c58;
            case 0x198C5Cu: goto label_198c5c;
            case 0x198C60u: goto label_198c60;
            case 0x198C64u: goto label_198c64;
            case 0x198C68u: goto label_198c68;
            case 0x198C6Cu: goto label_198c6c;
            case 0x198C70u: goto label_198c70;
            case 0x198C74u: goto label_198c74;
            case 0x198C78u: goto label_198c78;
            case 0x198C7Cu: goto label_198c7c;
            case 0x198C80u: goto label_198c80;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198C8Cu: goto label_198c8c;
            case 0x198C90u: goto label_198c90;
            case 0x198C94u: goto label_198c94;
            case 0x198C98u: goto label_198c98;
            case 0x198C9Cu: goto label_198c9c;
            case 0x198CA0u: goto label_198ca0;
            case 0x198CA4u: goto label_198ca4;
            case 0x198CA8u: goto label_198ca8;
            case 0x198CACu: goto label_198cac;
            case 0x198CB0u: goto label_198cb0;
            case 0x198CB4u: goto label_198cb4;
            case 0x198CB8u: goto label_198cb8;
            case 0x198CBCu: goto label_198cbc;
            case 0x198CC0u: goto label_198cc0;
            case 0x198CC4u: goto label_198cc4;
            case 0x198CC8u: goto label_198cc8;
            case 0x198CCCu: goto label_198ccc;
            case 0x198CD0u: goto label_198cd0;
            case 0x198CD4u: goto label_198cd4;
            case 0x198CD8u: goto label_198cd8;
            case 0x198CDCu: goto label_198cdc;
            case 0x198CE0u: goto label_198ce0;
            case 0x198CE4u: goto label_198ce4;
            case 0x198CE8u: goto label_198ce8;
            case 0x198CECu: goto label_198cec;
            case 0x198CF0u: goto label_198cf0;
            case 0x198CF4u: goto label_198cf4;
            case 0x198CF8u: goto label_198cf8;
            case 0x198CFCu: goto label_198cfc;
            case 0x198D00u: goto label_198d00;
            case 0x198D04u: goto label_198d04;
            case 0x198D08u: goto label_198d08;
            case 0x198D0Cu: goto label_198d0c;
            case 0x198D10u: goto label_198d10;
            case 0x198D14u: goto label_198d14;
            case 0x198D18u: goto label_198d18;
            case 0x198D1Cu: goto label_198d1c;
            case 0x198D20u: goto label_198d20;
            case 0x198D24u: goto label_198d24;
            case 0x198D28u: goto label_198d28;
            case 0x198D2Cu: goto label_198d2c;
            case 0x198D30u: goto label_198d30;
            case 0x198D34u: goto label_198d34;
            case 0x198D38u: goto label_198d38;
            case 0x198D3Cu: goto label_198d3c;
            case 0x198D40u: goto label_198d40;
            case 0x198D44u: goto label_198d44;
            case 0x198D48u: goto label_198d48;
            case 0x198D4Cu: goto label_198d4c;
            case 0x198D50u: goto label_198d50;
            case 0x198D54u: goto label_198d54;
            case 0x198D58u: goto label_198d58;
            case 0x198D5Cu: goto label_198d5c;
            case 0x198D60u: goto label_198d60;
            case 0x198D64u: goto label_198d64;
            case 0x198D68u: goto label_198d68;
            case 0x198D6Cu: goto label_198d6c;
            case 0x198D70u: goto label_198d70;
            case 0x198D74u: goto label_198d74;
            case 0x198D78u: goto label_198d78;
            case 0x198D7Cu: goto label_198d7c;
            case 0x198D80u: goto label_198d80;
            case 0x198D84u: goto label_198d84;
            case 0x198D88u: goto label_198d88;
            case 0x198D8Cu: goto label_198d8c;
            case 0x198D90u: goto label_198d90;
            case 0x198D94u: goto label_198d94;
            case 0x198D98u: goto label_198d98;
            case 0x198D9Cu: goto label_198d9c;
            case 0x198DA0u: goto label_198da0;
            case 0x198DA4u: goto label_198da4;
            case 0x198DA8u: goto label_198da8;
            case 0x198DACu: goto label_198dac;
            case 0x198DB0u: goto label_198db0;
            case 0x198DB4u: goto label_198db4;
            case 0x198DB8u: goto label_198db8;
            case 0x198DBCu: goto label_198dbc;
            case 0x198DC0u: goto label_198dc0;
            case 0x198DC4u: goto label_198dc4;
            case 0x198DC8u: goto label_198dc8;
            case 0x198DCCu: goto label_198dcc;
            case 0x198DD0u: goto label_198dd0;
            case 0x198DD4u: goto label_198dd4;
            case 0x198DD8u: goto label_198dd8;
            case 0x198DDCu: goto label_198ddc;
            case 0x198DE0u: goto label_198de0;
            case 0x198DE4u: goto label_198de4;
            case 0x198DE8u: goto label_198de8;
            case 0x198DECu: goto label_198dec;
            case 0x198DF0u: goto label_198df0;
            case 0x198DF4u: goto label_198df4;
            case 0x198DF8u: goto label_198df8;
            case 0x198DFCu: goto label_198dfc;
            case 0x198E00u: goto label_198e00;
            case 0x198E04u: goto label_198e04;
            case 0x198E08u: goto label_198e08;
            case 0x198E0Cu: goto label_198e0c;
            case 0x198E10u: goto label_198e10;
            case 0x198E14u: goto label_198e14;
            case 0x198E18u: goto label_198e18;
            case 0x198E1Cu: goto label_198e1c;
            case 0x198E20u: goto label_198e20;
            case 0x198E24u: goto label_198e24;
            case 0x198E28u: goto label_198e28;
            case 0x198E2Cu: goto label_198e2c;
            case 0x198E30u: goto label_198e30;
            case 0x198E34u: goto label_198e34;
            case 0x198E38u: goto label_198e38;
            case 0x198E3Cu: goto label_198e3c;
            case 0x198E40u: goto label_198e40;
            case 0x198E44u: goto label_198e44;
            case 0x198E48u: goto label_198e48;
            case 0x198E4Cu: goto label_198e4c;
            case 0x198E50u: goto label_198e50;
            case 0x198E54u: goto label_198e54;
            case 0x198E58u: goto label_198e58;
            case 0x198E5Cu: goto label_198e5c;
            case 0x198E60u: goto label_198e60;
            case 0x198E64u: goto label_198e64;
            case 0x198E68u: goto label_198e68;
            case 0x198E6Cu: goto label_198e6c;
            case 0x198E70u: goto label_198e70;
            case 0x198E74u: goto label_198e74;
            case 0x198E78u: goto label_198e78;
            case 0x198E7Cu: goto label_198e7c;
            case 0x198E80u: goto label_198e80;
            case 0x198E84u: goto label_198e84;
            case 0x198E88u: goto label_198e88;
            case 0x198E8Cu: goto label_198e8c;
            case 0x198E90u: goto label_198e90;
            case 0x198E94u: goto label_198e94;
            case 0x198E98u: goto label_198e98;
            case 0x198E9Cu: goto label_198e9c;
            case 0x198EA0u: goto label_198ea0;
            case 0x198EA4u: goto label_198ea4;
            case 0x198EA8u: goto label_198ea8;
            case 0x198EACu: goto label_198eac;
            case 0x198EB0u: goto label_198eb0;
            case 0x198EB4u: goto label_198eb4;
            case 0x198EB8u: goto label_198eb8;
            case 0x198EBCu: goto label_198ebc;
            case 0x198EC0u: goto label_198ec0;
            case 0x198EC4u: goto label_198ec4;
            case 0x198EC8u: goto label_198ec8;
            case 0x198ECCu: goto label_198ecc;
            case 0x198ED0u: goto label_198ed0;
            case 0x198ED4u: goto label_198ed4;
            case 0x198ED8u: goto label_198ed8;
            case 0x198EDCu: goto label_198edc;
            case 0x198EE0u: goto label_198ee0;
            case 0x198EE4u: goto label_198ee4;
            case 0x198EE8u: goto label_198ee8;
            case 0x198EECu: goto label_198eec;
            case 0x198EF0u: goto label_198ef0;
            case 0x198EF4u: goto label_198ef4;
            case 0x198EF8u: goto label_198ef8;
            case 0x198EFCu: goto label_198efc;
            case 0x198F00u: goto label_198f00;
            case 0x198F04u: goto label_198f04;
            case 0x198F08u: goto label_198f08;
            case 0x198F0Cu: goto label_198f0c;
            case 0x198F10u: goto label_198f10;
            case 0x198F14u: goto label_198f14;
            case 0x198F18u: goto label_198f18;
            case 0x198F1Cu: goto label_198f1c;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F28u: goto label_198f28;
            case 0x198F2Cu: goto label_198f2c;
            case 0x198F30u: goto label_198f30;
            case 0x198F34u: goto label_198f34;
            case 0x198F38u: goto label_198f38;
            case 0x198F3Cu: goto label_198f3c;
            case 0x198F40u: goto label_198f40;
            case 0x198F44u: goto label_198f44;
            case 0x198F48u: goto label_198f48;
            case 0x198F4Cu: goto label_198f4c;
            case 0x198F50u: goto label_198f50;
            case 0x198F54u: goto label_198f54;
            case 0x198F58u: goto label_198f58;
            case 0x198F5Cu: goto label_198f5c;
            case 0x198F60u: goto label_198f60;
            case 0x198F64u: goto label_198f64;
            case 0x198F68u: goto label_198f68;
            case 0x198F6Cu: goto label_198f6c;
            case 0x198F70u: goto label_198f70;
            case 0x198F74u: goto label_198f74;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F80u: goto label_198f80;
            case 0x198F84u: goto label_198f84;
            case 0x198F88u: goto label_198f88;
            case 0x198F8Cu: goto label_198f8c;
            case 0x198F90u: goto label_198f90;
            case 0x198F94u: goto label_198f94;
            case 0x198F98u: goto label_198f98;
            case 0x198F9Cu: goto label_198f9c;
            case 0x198FA0u: goto label_198fa0;
            case 0x198FA4u: goto label_198fa4;
            case 0x198FA8u: goto label_198fa8;
            case 0x198FACu: goto label_198fac;
            case 0x198FB0u: goto label_198fb0;
            case 0x198FB4u: goto label_198fb4;
            case 0x198FB8u: goto label_198fb8;
            case 0x198FBCu: goto label_198fbc;
            case 0x198FC0u: goto label_198fc0;
            case 0x198FC4u: goto label_198fc4;
            case 0x198FC8u: goto label_198fc8;
            case 0x198FCCu: goto label_198fcc;
            case 0x198FD0u: goto label_198fd0;
            case 0x198FD4u: goto label_198fd4;
            case 0x198FD8u: goto label_198fd8;
            case 0x198FDCu: goto label_198fdc;
            case 0x198FE0u: goto label_198fe0;
            case 0x198FE4u: goto label_198fe4;
            case 0x198FE8u: goto label_198fe8;
            case 0x198FECu: goto label_198fec;
            case 0x198FF0u: goto label_198ff0;
            case 0x198FF4u: goto label_198ff4;
            case 0x198FF8u: goto label_198ff8;
            case 0x198FFCu: goto label_198ffc;
            case 0x199000u: goto label_199000;
            case 0x199004u: goto label_199004;
            case 0x199008u: goto label_199008;
            case 0x19900Cu: goto label_19900c;
            case 0x199010u: goto label_199010;
            case 0x199014u: goto label_199014;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199020u: goto label_199020;
            case 0x199024u: goto label_199024;
            case 0x199028u: goto label_199028;
            case 0x19902Cu: goto label_19902c;
            case 0x199030u: goto label_199030;
            case 0x199034u: goto label_199034;
            case 0x199038u: goto label_199038;
            case 0x19903Cu: goto label_19903c;
            case 0x199040u: goto label_199040;
            case 0x199044u: goto label_199044;
            case 0x199048u: goto label_199048;
            case 0x19904Cu: goto label_19904c;
            case 0x199050u: goto label_199050;
            case 0x199054u: goto label_199054;
            case 0x199058u: goto label_199058;
            case 0x19905Cu: goto label_19905c;
            case 0x199060u: goto label_199060;
            case 0x199064u: goto label_199064;
            case 0x199068u: goto label_199068;
            case 0x19906Cu: goto label_19906c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x199078u: goto label_199078;
            case 0x19907Cu: goto label_19907c;
            case 0x199080u: goto label_199080;
            case 0x199084u: goto label_199084;
            case 0x199088u: goto label_199088;
            case 0x19908Cu: goto label_19908c;
            case 0x199090u: goto label_199090;
            case 0x199094u: goto label_199094;
            case 0x199098u: goto label_199098;
            case 0x19909Cu: goto label_19909c;
            case 0x1990A0u: goto label_1990a0;
            case 0x1990A4u: goto label_1990a4;
            case 0x1990A8u: goto label_1990a8;
            case 0x1990ACu: goto label_1990ac;
            case 0x1990B0u: goto label_1990b0;
            case 0x1990B4u: goto label_1990b4;
            case 0x1990B8u: goto label_1990b8;
            case 0x1990BCu: goto label_1990bc;
            case 0x1990C0u: goto label_1990c0;
            case 0x1990C4u: goto label_1990c4;
            case 0x1990C8u: goto label_1990c8;
            case 0x1990CCu: goto label_1990cc;
            case 0x1990D0u: goto label_1990d0;
            case 0x1990D4u: goto label_1990d4;
            case 0x1990D8u: goto label_1990d8;
            case 0x1990DCu: goto label_1990dc;
            case 0x1990E0u: goto label_1990e0;
            case 0x1990E4u: goto label_1990e4;
            case 0x1990E8u: goto label_1990e8;
            case 0x1990ECu: goto label_1990ec;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F4u: goto label_1990f4;
            case 0x1990F8u: goto label_1990f8;
            case 0x1990FCu: goto label_1990fc;
            case 0x199100u: goto label_199100;
            case 0x199104u: goto label_199104;
            case 0x199108u: goto label_199108;
            case 0x19910Cu: goto label_19910c;
            case 0x199110u: goto label_199110;
            case 0x199114u: goto label_199114;
            case 0x199118u: goto label_199118;
            case 0x19911Cu: goto label_19911c;
            case 0x199120u: goto label_199120;
            case 0x199124u: goto label_199124;
            case 0x199128u: goto label_199128;
            case 0x19912Cu: goto label_19912c;
            case 0x199130u: goto label_199130;
            case 0x199134u: goto label_199134;
            case 0x199138u: goto label_199138;
            case 0x19913Cu: goto label_19913c;
            case 0x199140u: goto label_199140;
            case 0x199144u: goto label_199144;
            case 0x199148u: goto label_199148;
            case 0x19914Cu: goto label_19914c;
            case 0x199150u: goto label_199150;
            case 0x199154u: goto label_199154;
            case 0x199158u: goto label_199158;
            case 0x19915Cu: goto label_19915c;
            case 0x199160u: goto label_199160;
            case 0x199164u: goto label_199164;
            case 0x199168u: goto label_199168;
            case 0x19916Cu: goto label_19916c;
            case 0x199170u: goto label_199170;
            case 0x199174u: goto label_199174;
            case 0x199178u: goto label_199178;
            case 0x19917Cu: goto label_19917c;
            case 0x199180u: goto label_199180;
            case 0x199184u: goto label_199184;
            case 0x199188u: goto label_199188;
            case 0x19918Cu: goto label_19918c;
            case 0x199190u: goto label_199190;
            case 0x199194u: goto label_199194;
            case 0x199198u: goto label_199198;
            case 0x19919Cu: goto label_19919c;
            case 0x1991A0u: goto label_1991a0;
            case 0x1991A4u: goto label_1991a4;
            case 0x1991A8u: goto label_1991a8;
            case 0x1991ACu: goto label_1991ac;
            case 0x1991B0u: goto label_1991b0;
            case 0x1991B4u: goto label_1991b4;
            case 0x1991B8u: goto label_1991b8;
            case 0x1991BCu: goto label_1991bc;
            case 0x1991C0u: goto label_1991c0;
            case 0x1991C4u: goto label_1991c4;
            case 0x1991C8u: goto label_1991c8;
            case 0x1991CCu: goto label_1991cc;
            case 0x1991D0u: goto label_1991d0;
            case 0x1991D4u: goto label_1991d4;
            case 0x1991D8u: goto label_1991d8;
            case 0x1991DCu: goto label_1991dc;
            case 0x1991E0u: goto label_1991e0;
            case 0x1991E4u: goto label_1991e4;
            case 0x1991E8u: goto label_1991e8;
            case 0x1991ECu: goto label_1991ec;
            case 0x1991F0u: goto label_1991f0;
            case 0x1991F4u: goto label_1991f4;
            case 0x1991F8u: goto label_1991f8;
            case 0x1991FCu: goto label_1991fc;
            case 0x199200u: goto label_199200;
            case 0x199204u: goto label_199204;
            case 0x199208u: goto label_199208;
            case 0x19920Cu: goto label_19920c;
            case 0x199210u: goto label_199210;
            case 0x199214u: goto label_199214;
            case 0x199218u: goto label_199218;
            case 0x19921Cu: goto label_19921c;
            case 0x199220u: goto label_199220;
            case 0x199224u: goto label_199224;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199230u: goto label_199230;
            case 0x199234u: goto label_199234;
            case 0x199238u: goto label_199238;
            case 0x19923Cu: goto label_19923c;
            case 0x199240u: goto label_199240;
            case 0x199244u: goto label_199244;
            case 0x199248u: goto label_199248;
            case 0x19924Cu: goto label_19924c;
            case 0x199250u: goto label_199250;
            case 0x199254u: goto label_199254;
            case 0x199258u: goto label_199258;
            case 0x19925Cu: goto label_19925c;
            case 0x199260u: goto label_199260;
            case 0x199264u: goto label_199264;
            case 0x199268u: goto label_199268;
            case 0x19926Cu: goto label_19926c;
            case 0x199270u: goto label_199270;
            case 0x199274u: goto label_199274;
            case 0x199278u: goto label_199278;
            case 0x19927Cu: goto label_19927c;
            case 0x199280u: goto label_199280;
            case 0x199284u: goto label_199284;
            case 0x199288u: goto label_199288;
            case 0x19928Cu: goto label_19928c;
            case 0x199290u: goto label_199290;
            case 0x199294u: goto label_199294;
            case 0x199298u: goto label_199298;
            case 0x19929Cu: goto label_19929c;
            case 0x1992A0u: goto label_1992a0;
            case 0x1992A4u: goto label_1992a4;
            case 0x1992A8u: goto label_1992a8;
            case 0x1992ACu: goto label_1992ac;
            case 0x1992B0u: goto label_1992b0;
            case 0x1992B4u: goto label_1992b4;
            case 0x1992B8u: goto label_1992b8;
            case 0x1992BCu: goto label_1992bc;
            case 0x1992C0u: goto label_1992c0;
            case 0x1992C4u: goto label_1992c4;
            case 0x1992C8u: goto label_1992c8;
            case 0x1992CCu: goto label_1992cc;
            case 0x1992D0u: goto label_1992d0;
            case 0x1992D4u: goto label_1992d4;
            case 0x1992D8u: goto label_1992d8;
            case 0x1992DCu: goto label_1992dc;
            case 0x1992E0u: goto label_1992e0;
            case 0x1992E4u: goto label_1992e4;
            case 0x1992E8u: goto label_1992e8;
            case 0x1992ECu: goto label_1992ec;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x1992F8u: goto label_1992f8;
            case 0x1992FCu: goto label_1992fc;
            case 0x199300u: goto label_199300;
            case 0x199304u: goto label_199304;
            case 0x199308u: goto label_199308;
            case 0x19930Cu: goto label_19930c;
            case 0x199310u: goto label_199310;
            case 0x199314u: goto label_199314;
            case 0x199318u: goto label_199318;
            case 0x19931Cu: goto label_19931c;
            case 0x199320u: goto label_199320;
            case 0x199324u: goto label_199324;
            case 0x199328u: goto label_199328;
            case 0x19932Cu: goto label_19932c;
            case 0x199330u: goto label_199330;
            case 0x199334u: goto label_199334;
            case 0x199338u: goto label_199338;
            case 0x19933Cu: goto label_19933c;
            case 0x199340u: goto label_199340;
            case 0x199344u: goto label_199344;
            case 0x199348u: goto label_199348;
            case 0x19934Cu: goto label_19934c;
            case 0x199350u: goto label_199350;
            case 0x199354u: goto label_199354;
            case 0x199358u: goto label_199358;
            case 0x19935Cu: goto label_19935c;
            case 0x199360u: goto label_199360;
            case 0x199364u: goto label_199364;
            case 0x199368u: goto label_199368;
            case 0x19936Cu: goto label_19936c;
            case 0x199370u: goto label_199370;
            case 0x199374u: goto label_199374;
            case 0x199378u: goto label_199378;
            case 0x19937Cu: goto label_19937c;
            case 0x199380u: goto label_199380;
            case 0x199384u: goto label_199384;
            case 0x199388u: goto label_199388;
            case 0x19938Cu: goto label_19938c;
            case 0x199390u: goto label_199390;
            case 0x199394u: goto label_199394;
            case 0x199398u: goto label_199398;
            case 0x19939Cu: goto label_19939c;
            case 0x1993A0u: goto label_1993a0;
            case 0x1993A4u: goto label_1993a4;
            case 0x1993A8u: goto label_1993a8;
            case 0x1993ACu: goto label_1993ac;
            case 0x1993B0u: goto label_1993b0;
            case 0x1993B4u: goto label_1993b4;
            case 0x1993B8u: goto label_1993b8;
            case 0x1993BCu: goto label_1993bc;
            case 0x1993C0u: goto label_1993c0;
            case 0x1993C4u: goto label_1993c4;
            case 0x1993C8u: goto label_1993c8;
            case 0x1993CCu: goto label_1993cc;
            case 0x1993D0u: goto label_1993d0;
            case 0x1993D4u: goto label_1993d4;
            case 0x1993D8u: goto label_1993d8;
            case 0x1993DCu: goto label_1993dc;
            case 0x1993E0u: goto label_1993e0;
            case 0x1993E4u: goto label_1993e4;
            case 0x1993E8u: goto label_1993e8;
            case 0x1993ECu: goto label_1993ec;
            case 0x1993F0u: goto label_1993f0;
            case 0x1993F4u: goto label_1993f4;
            case 0x1993F8u: goto label_1993f8;
            case 0x1993FCu: goto label_1993fc;
            case 0x199400u: goto label_199400;
            case 0x199404u: goto label_199404;
            case 0x199408u: goto label_199408;
            case 0x19940Cu: goto label_19940c;
            case 0x199410u: goto label_199410;
            case 0x199414u: goto label_199414;
            case 0x199418u: goto label_199418;
            case 0x19941Cu: goto label_19941c;
            case 0x199420u: goto label_199420;
            case 0x199424u: goto label_199424;
            case 0x199428u: goto label_199428;
            case 0x19942Cu: goto label_19942c;
            case 0x199430u: goto label_199430;
            case 0x199434u: goto label_199434;
            case 0x199438u: goto label_199438;
            case 0x19943Cu: goto label_19943c;
            case 0x199440u: goto label_199440;
            case 0x199444u: goto label_199444;
            case 0x199448u: goto label_199448;
            case 0x19944Cu: goto label_19944c;
            case 0x199450u: goto label_199450;
            case 0x199454u: goto label_199454;
            case 0x199458u: goto label_199458;
            case 0x19945Cu: goto label_19945c;
            case 0x199460u: goto label_199460;
            case 0x199464u: goto label_199464;
            case 0x199468u: goto label_199468;
            case 0x19946Cu: goto label_19946c;
            case 0x199470u: goto label_199470;
            case 0x199474u: goto label_199474;
            case 0x199478u: goto label_199478;
            case 0x19947Cu: goto label_19947c;
            case 0x199480u: goto label_199480;
            case 0x199484u: goto label_199484;
            case 0x199488u: goto label_199488;
            case 0x19948Cu: goto label_19948c;
            case 0x199490u: goto label_199490;
            case 0x199494u: goto label_199494;
            case 0x199498u: goto label_199498;
            case 0x19949Cu: goto label_19949c;
            case 0x1994A0u: goto label_1994a0;
            case 0x1994A4u: goto label_1994a4;
            case 0x1994A8u: goto label_1994a8;
            case 0x1994ACu: goto label_1994ac;
            case 0x1994B0u: goto label_1994b0;
            case 0x1994B4u: goto label_1994b4;
            case 0x1994B8u: goto label_1994b8;
            case 0x1994BCu: goto label_1994bc;
            case 0x1994C0u: goto label_1994c0;
            case 0x1994C4u: goto label_1994c4;
            case 0x1994C8u: goto label_1994c8;
            case 0x1994CCu: goto label_1994cc;
            case 0x1994D0u: goto label_1994d0;
            case 0x1994D4u: goto label_1994d4;
            case 0x1994D8u: goto label_1994d8;
            case 0x1994DCu: goto label_1994dc;
            case 0x1994E0u: goto label_1994e0;
            case 0x1994E4u: goto label_1994e4;
            case 0x1994E8u: goto label_1994e8;
            case 0x1994ECu: goto label_1994ec;
            case 0x1994F0u: goto label_1994f0;
            case 0x1994F4u: goto label_1994f4;
            case 0x1994F8u: goto label_1994f8;
            case 0x1994FCu: goto label_1994fc;
            case 0x199500u: goto label_199500;
            case 0x199504u: goto label_199504;
            case 0x199508u: goto label_199508;
            case 0x19950Cu: goto label_19950c;
            case 0x199510u: goto label_199510;
            case 0x199514u: goto label_199514;
            case 0x199518u: goto label_199518;
            case 0x19951Cu: goto label_19951c;
            case 0x199520u: goto label_199520;
            case 0x199524u: goto label_199524;
            case 0x199528u: goto label_199528;
            case 0x19952Cu: goto label_19952c;
            case 0x199530u: goto label_199530;
            case 0x199534u: goto label_199534;
            case 0x199538u: goto label_199538;
            case 0x19953Cu: goto label_19953c;
            case 0x199540u: goto label_199540;
            case 0x199544u: goto label_199544;
            case 0x199548u: goto label_199548;
            case 0x19954Cu: goto label_19954c;
            case 0x199550u: goto label_199550;
            case 0x199554u: goto label_199554;
            case 0x199558u: goto label_199558;
            case 0x19955Cu: goto label_19955c;
            case 0x199560u: goto label_199560;
            case 0x199564u: goto label_199564;
            case 0x199568u: goto label_199568;
            case 0x19956Cu: goto label_19956c;
            case 0x199570u: goto label_199570;
            case 0x199574u: goto label_199574;
            case 0x199578u: goto label_199578;
            case 0x19957Cu: goto label_19957c;
            case 0x199580u: goto label_199580;
            case 0x199584u: goto label_199584;
            case 0x199588u: goto label_199588;
            case 0x19958Cu: goto label_19958c;
            case 0x199590u: goto label_199590;
            case 0x199594u: goto label_199594;
            case 0x199598u: goto label_199598;
            case 0x19959Cu: goto label_19959c;
            case 0x1995A0u: goto label_1995a0;
            case 0x1995A4u: goto label_1995a4;
            case 0x1995A8u: goto label_1995a8;
            case 0x1995ACu: goto label_1995ac;
            case 0x1995B0u: goto label_1995b0;
            case 0x1995B4u: goto label_1995b4;
            case 0x1995B8u: goto label_1995b8;
            case 0x1995BCu: goto label_1995bc;
            case 0x1995C0u: goto label_1995c0;
            case 0x1995C4u: goto label_1995c4;
            case 0x1995C8u: goto label_1995c8;
            case 0x1995CCu: goto label_1995cc;
            case 0x1995D0u: goto label_1995d0;
            case 0x1995D4u: goto label_1995d4;
            case 0x1995D8u: goto label_1995d8;
            case 0x1995DCu: goto label_1995dc;
            case 0x1995E0u: goto label_1995e0;
            case 0x1995E4u: goto label_1995e4;
            case 0x1995E8u: goto label_1995e8;
            case 0x1995ECu: goto label_1995ec;
            case 0x1995F0u: goto label_1995f0;
            case 0x1995F4u: goto label_1995f4;
            case 0x1995F8u: goto label_1995f8;
            case 0x1995FCu: goto label_1995fc;
            case 0x199600u: goto label_199600;
            case 0x199604u: goto label_199604;
            case 0x199608u: goto label_199608;
            case 0x19960Cu: goto label_19960c;
            case 0x199610u: goto label_199610;
            case 0x199614u: goto label_199614;
            case 0x199618u: goto label_199618;
            case 0x19961Cu: goto label_19961c;
            case 0x199620u: goto label_199620;
            case 0x199624u: goto label_199624;
            case 0x199628u: goto label_199628;
            case 0x19962Cu: goto label_19962c;
            case 0x199630u: goto label_199630;
            case 0x199634u: goto label_199634;
            case 0x199638u: goto label_199638;
            case 0x19963Cu: goto label_19963c;
            case 0x199640u: goto label_199640;
            case 0x199644u: goto label_199644;
            case 0x199648u: goto label_199648;
            case 0x19964Cu: goto label_19964c;
            case 0x199650u: goto label_199650;
            case 0x199654u: goto label_199654;
            case 0x199658u: goto label_199658;
            case 0x19965Cu: goto label_19965c;
            case 0x199660u: goto label_199660;
            case 0x199664u: goto label_199664;
            case 0x199668u: goto label_199668;
            case 0x19966Cu: goto label_19966c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x199564u; }
            if (ctx->pc != 0x199564u) { return; }
        }
    }
    ctx->pc = 0x199564u;
label_199564:
    // 0x199564: 0x1000003e  b           . + 4 + (0x3E << 2)
label_199568:
    if (ctx->pc == 0x199568u) {
        ctx->pc = 0x19956Cu;
        goto label_19956c;
    }
    ctx->pc = 0x199564u;
    {
        const bool branch_taken_0x199564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199564) {
            ctx->pc = 0x199660u;
            goto label_199660;
        }
    }
    ctx->pc = 0x19956Cu;
label_19956c:
    // 0x19956c: 0x0  nop
    ctx->pc = 0x19956cu;
    // NOP
label_199570:
    // 0x199570: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x199570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_199574:
    // 0x199574: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_199578:
    if (ctx->pc == 0x199578u) {
        ctx->pc = 0x19957Cu;
        goto label_19957c;
    }
    ctx->pc = 0x199574u;
    {
        const bool branch_taken_0x199574 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x199574) {
            ctx->pc = 0x199640u;
            goto label_199640;
        }
    }
    ctx->pc = 0x19957Cu;
label_19957c:
    // 0x19957c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x19957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199580:
    // 0x199580: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x199580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_199584:
    // 0x199584: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x199584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199588:
    // 0x199588: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x199588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19958c:
    // 0x19958c: 0xc05d080  jal         func_174200
label_199590:
    if (ctx->pc == 0x199590u) {
        ctx->pc = 0x199590u;
            // 0x199590: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x199594u;
        goto label_199594;
    }
    ctx->pc = 0x19958Cu;
    SET_GPR_U32(ctx, 31, 0x199594u);
    ctx->pc = 0x199590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19958Cu;
            // 0x199590: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199594u; }
        if (ctx->pc != 0x199594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199594u; }
        if (ctx->pc != 0x199594u) { return; }
    }
    ctx->pc = 0x199594u;
label_199594:
    // 0x199594: 0xc050bb4  jal         func_142ED0
label_199598:
    if (ctx->pc == 0x199598u) {
        ctx->pc = 0x19959Cu;
        goto label_19959c;
    }
    ctx->pc = 0x199594u;
    SET_GPR_U32(ctx, 31, 0x19959Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19959Cu; }
        if (ctx->pc != 0x19959Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19959Cu; }
        if (ctx->pc != 0x19959Cu) { return; }
    }
    ctx->pc = 0x19959Cu;
label_19959c:
    // 0x19959c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19959cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1995a0:
    // 0x1995a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1995a4:
    if (ctx->pc == 0x1995A4u) {
        ctx->pc = 0x1995A8u;
        goto label_1995a8;
    }
    ctx->pc = 0x1995A0u;
    {
        const bool branch_taken_0x1995a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1995a0) {
            ctx->pc = 0x1995C0u;
            goto label_1995c0;
        }
    }
    ctx->pc = 0x1995A8u;
label_1995a8:
    // 0x1995a8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1995a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1995ac:
    // 0x1995ac: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1995acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1995b0:
    // 0x1995b0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1995b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1995b4:
    // 0x1995b4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1995b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1995b8:
    // 0x1995b8: 0xc05d080  jal         func_174200
label_1995bc:
    if (ctx->pc == 0x1995BCu) {
        ctx->pc = 0x1995BCu;
            // 0x1995bc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1995C0u;
        goto label_1995c0;
    }
    ctx->pc = 0x1995B8u;
    SET_GPR_U32(ctx, 31, 0x1995C0u);
    ctx->pc = 0x1995BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1995B8u;
            // 0x1995bc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1995C0u; }
        if (ctx->pc != 0x1995C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1995C0u; }
        if (ctx->pc != 0x1995C0u) { return; }
    }
    ctx->pc = 0x1995C0u;
label_1995c0:
    // 0x1995c0: 0xc050bb4  jal         func_142ED0
label_1995c4:
    if (ctx->pc == 0x1995C4u) {
        ctx->pc = 0x1995C8u;
        goto label_1995c8;
    }
    ctx->pc = 0x1995C0u;
    SET_GPR_U32(ctx, 31, 0x1995C8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1995C8u; }
        if (ctx->pc != 0x1995C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1995C8u; }
        if (ctx->pc != 0x1995C8u) { return; }
    }
    ctx->pc = 0x1995C8u;
label_1995c8:
    // 0x1995c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1995c8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1995cc:
    // 0x1995cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1995d0:
    if (ctx->pc == 0x1995D0u) {
        ctx->pc = 0x1995D4u;
        goto label_1995d4;
    }
    ctx->pc = 0x1995CCu;
    {
        const bool branch_taken_0x1995cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1995cc) {
            ctx->pc = 0x1995F0u;
            goto label_1995f0;
        }
    }
    ctx->pc = 0x1995D4u;
label_1995d4:
    // 0x1995d4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1995d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1995d8:
    // 0x1995d8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1995d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1995dc:
    // 0x1995dc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1995dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1995e0:
    // 0x1995e0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1995e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1995e4:
    // 0x1995e4: 0xc05d080  jal         func_174200
label_1995e8:
    if (ctx->pc == 0x1995E8u) {
        ctx->pc = 0x1995E8u;
            // 0x1995e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1995ECu;
        goto label_1995ec;
    }
    ctx->pc = 0x1995E4u;
    SET_GPR_U32(ctx, 31, 0x1995ECu);
    ctx->pc = 0x1995E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1995E4u;
            // 0x1995e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1995ECu; }
        if (ctx->pc != 0x1995ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1995ECu; }
        if (ctx->pc != 0x1995ECu) { return; }
    }
    ctx->pc = 0x1995ECu;
label_1995ec:
    // 0x1995ec: 0x0  nop
    ctx->pc = 0x1995ecu;
    // NOP
label_1995f0:
    // 0x1995f0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1995f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1995f4:
    // 0x1995f4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1995f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1995f8:
    // 0x1995f8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1995f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1995fc:
    // 0x1995fc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1995fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199600:
    // 0x199600: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x199600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_199604:
    // 0x199604: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_199608:
    // 0x199608: 0x0  nop
    ctx->pc = 0x199608u;
    // NOP
label_19960c:
    // 0x19960c: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x19960cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_199610:
    // 0x199610: 0xc053740  jal         func_14DD00
label_199614:
    if (ctx->pc == 0x199614u) {
        ctx->pc = 0x199614u;
            // 0x199614: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x199618u;
        goto label_199618;
    }
    ctx->pc = 0x199610u;
    SET_GPR_U32(ctx, 31, 0x199618u);
    ctx->pc = 0x199614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199610u;
            // 0x199614: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199618u; }
        if (ctx->pc != 0x199618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199618u; }
        if (ctx->pc != 0x199618u) { return; }
    }
    ctx->pc = 0x199618u;
label_199618:
    // 0x199618: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x199618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19961c:
    // 0x19961c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x19961cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_199620:
    // 0x199620: 0xc07b0fc  jal         func_1EC3F0
label_199624:
    if (ctx->pc == 0x199624u) {
        ctx->pc = 0x199624u;
            // 0x199624: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x199628u;
        goto label_199628;
    }
    ctx->pc = 0x199620u;
    SET_GPR_U32(ctx, 31, 0x199628u);
    ctx->pc = 0x199624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199620u;
            // 0x199624: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199628u; }
        if (ctx->pc != 0x199628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199628u; }
        if (ctx->pc != 0x199628u) { return; }
    }
    ctx->pc = 0x199628u;
label_199628:
    // 0x199628: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x199628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_19962c:
    // 0x19962c: 0x40f809  jalr        $v0
label_199630:
    if (ctx->pc == 0x199630u) {
        ctx->pc = 0x199630u;
            // 0x199630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x199634u;
        goto label_199634;
    }
    ctx->pc = 0x19962Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199634u);
        ctx->pc = 0x199630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19962Cu;
            // 0x199630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198B60u: goto label_198b60;
            case 0x198B64u: goto label_198b64;
            case 0x198B68u: goto label_198b68;
            case 0x198B6Cu: goto label_198b6c;
            case 0x198B70u: goto label_198b70;
            case 0x198B74u: goto label_198b74;
            case 0x198B78u: goto label_198b78;
            case 0x198B7Cu: goto label_198b7c;
            case 0x198B80u: goto label_198b80;
            case 0x198B84u: goto label_198b84;
            case 0x198B88u: goto label_198b88;
            case 0x198B8Cu: goto label_198b8c;
            case 0x198B90u: goto label_198b90;
            case 0x198B94u: goto label_198b94;
            case 0x198B98u: goto label_198b98;
            case 0x198B9Cu: goto label_198b9c;
            case 0x198BA0u: goto label_198ba0;
            case 0x198BA4u: goto label_198ba4;
            case 0x198BA8u: goto label_198ba8;
            case 0x198BACu: goto label_198bac;
            case 0x198BB0u: goto label_198bb0;
            case 0x198BB4u: goto label_198bb4;
            case 0x198BB8u: goto label_198bb8;
            case 0x198BBCu: goto label_198bbc;
            case 0x198BC0u: goto label_198bc0;
            case 0x198BC4u: goto label_198bc4;
            case 0x198BC8u: goto label_198bc8;
            case 0x198BCCu: goto label_198bcc;
            case 0x198BD0u: goto label_198bd0;
            case 0x198BD4u: goto label_198bd4;
            case 0x198BD8u: goto label_198bd8;
            case 0x198BDCu: goto label_198bdc;
            case 0x198BE0u: goto label_198be0;
            case 0x198BE4u: goto label_198be4;
            case 0x198BE8u: goto label_198be8;
            case 0x198BECu: goto label_198bec;
            case 0x198BF0u: goto label_198bf0;
            case 0x198BF4u: goto label_198bf4;
            case 0x198BF8u: goto label_198bf8;
            case 0x198BFCu: goto label_198bfc;
            case 0x198C00u: goto label_198c00;
            case 0x198C04u: goto label_198c04;
            case 0x198C08u: goto label_198c08;
            case 0x198C0Cu: goto label_198c0c;
            case 0x198C10u: goto label_198c10;
            case 0x198C14u: goto label_198c14;
            case 0x198C18u: goto label_198c18;
            case 0x198C1Cu: goto label_198c1c;
            case 0x198C20u: goto label_198c20;
            case 0x198C24u: goto label_198c24;
            case 0x198C28u: goto label_198c28;
            case 0x198C2Cu: goto label_198c2c;
            case 0x198C30u: goto label_198c30;
            case 0x198C34u: goto label_198c34;
            case 0x198C38u: goto label_198c38;
            case 0x198C3Cu: goto label_198c3c;
            case 0x198C40u: goto label_198c40;
            case 0x198C44u: goto label_198c44;
            case 0x198C48u: goto label_198c48;
            case 0x198C4Cu: goto label_198c4c;
            case 0x198C50u: goto label_198c50;
            case 0x198C54u: goto label_198c54;
            case 0x198C58u: goto label_198c58;
            case 0x198C5Cu: goto label_198c5c;
            case 0x198C60u: goto label_198c60;
            case 0x198C64u: goto label_198c64;
            case 0x198C68u: goto label_198c68;
            case 0x198C6Cu: goto label_198c6c;
            case 0x198C70u: goto label_198c70;
            case 0x198C74u: goto label_198c74;
            case 0x198C78u: goto label_198c78;
            case 0x198C7Cu: goto label_198c7c;
            case 0x198C80u: goto label_198c80;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198C8Cu: goto label_198c8c;
            case 0x198C90u: goto label_198c90;
            case 0x198C94u: goto label_198c94;
            case 0x198C98u: goto label_198c98;
            case 0x198C9Cu: goto label_198c9c;
            case 0x198CA0u: goto label_198ca0;
            case 0x198CA4u: goto label_198ca4;
            case 0x198CA8u: goto label_198ca8;
            case 0x198CACu: goto label_198cac;
            case 0x198CB0u: goto label_198cb0;
            case 0x198CB4u: goto label_198cb4;
            case 0x198CB8u: goto label_198cb8;
            case 0x198CBCu: goto label_198cbc;
            case 0x198CC0u: goto label_198cc0;
            case 0x198CC4u: goto label_198cc4;
            case 0x198CC8u: goto label_198cc8;
            case 0x198CCCu: goto label_198ccc;
            case 0x198CD0u: goto label_198cd0;
            case 0x198CD4u: goto label_198cd4;
            case 0x198CD8u: goto label_198cd8;
            case 0x198CDCu: goto label_198cdc;
            case 0x198CE0u: goto label_198ce0;
            case 0x198CE4u: goto label_198ce4;
            case 0x198CE8u: goto label_198ce8;
            case 0x198CECu: goto label_198cec;
            case 0x198CF0u: goto label_198cf0;
            case 0x198CF4u: goto label_198cf4;
            case 0x198CF8u: goto label_198cf8;
            case 0x198CFCu: goto label_198cfc;
            case 0x198D00u: goto label_198d00;
            case 0x198D04u: goto label_198d04;
            case 0x198D08u: goto label_198d08;
            case 0x198D0Cu: goto label_198d0c;
            case 0x198D10u: goto label_198d10;
            case 0x198D14u: goto label_198d14;
            case 0x198D18u: goto label_198d18;
            case 0x198D1Cu: goto label_198d1c;
            case 0x198D20u: goto label_198d20;
            case 0x198D24u: goto label_198d24;
            case 0x198D28u: goto label_198d28;
            case 0x198D2Cu: goto label_198d2c;
            case 0x198D30u: goto label_198d30;
            case 0x198D34u: goto label_198d34;
            case 0x198D38u: goto label_198d38;
            case 0x198D3Cu: goto label_198d3c;
            case 0x198D40u: goto label_198d40;
            case 0x198D44u: goto label_198d44;
            case 0x198D48u: goto label_198d48;
            case 0x198D4Cu: goto label_198d4c;
            case 0x198D50u: goto label_198d50;
            case 0x198D54u: goto label_198d54;
            case 0x198D58u: goto label_198d58;
            case 0x198D5Cu: goto label_198d5c;
            case 0x198D60u: goto label_198d60;
            case 0x198D64u: goto label_198d64;
            case 0x198D68u: goto label_198d68;
            case 0x198D6Cu: goto label_198d6c;
            case 0x198D70u: goto label_198d70;
            case 0x198D74u: goto label_198d74;
            case 0x198D78u: goto label_198d78;
            case 0x198D7Cu: goto label_198d7c;
            case 0x198D80u: goto label_198d80;
            case 0x198D84u: goto label_198d84;
            case 0x198D88u: goto label_198d88;
            case 0x198D8Cu: goto label_198d8c;
            case 0x198D90u: goto label_198d90;
            case 0x198D94u: goto label_198d94;
            case 0x198D98u: goto label_198d98;
            case 0x198D9Cu: goto label_198d9c;
            case 0x198DA0u: goto label_198da0;
            case 0x198DA4u: goto label_198da4;
            case 0x198DA8u: goto label_198da8;
            case 0x198DACu: goto label_198dac;
            case 0x198DB0u: goto label_198db0;
            case 0x198DB4u: goto label_198db4;
            case 0x198DB8u: goto label_198db8;
            case 0x198DBCu: goto label_198dbc;
            case 0x198DC0u: goto label_198dc0;
            case 0x198DC4u: goto label_198dc4;
            case 0x198DC8u: goto label_198dc8;
            case 0x198DCCu: goto label_198dcc;
            case 0x198DD0u: goto label_198dd0;
            case 0x198DD4u: goto label_198dd4;
            case 0x198DD8u: goto label_198dd8;
            case 0x198DDCu: goto label_198ddc;
            case 0x198DE0u: goto label_198de0;
            case 0x198DE4u: goto label_198de4;
            case 0x198DE8u: goto label_198de8;
            case 0x198DECu: goto label_198dec;
            case 0x198DF0u: goto label_198df0;
            case 0x198DF4u: goto label_198df4;
            case 0x198DF8u: goto label_198df8;
            case 0x198DFCu: goto label_198dfc;
            case 0x198E00u: goto label_198e00;
            case 0x198E04u: goto label_198e04;
            case 0x198E08u: goto label_198e08;
            case 0x198E0Cu: goto label_198e0c;
            case 0x198E10u: goto label_198e10;
            case 0x198E14u: goto label_198e14;
            case 0x198E18u: goto label_198e18;
            case 0x198E1Cu: goto label_198e1c;
            case 0x198E20u: goto label_198e20;
            case 0x198E24u: goto label_198e24;
            case 0x198E28u: goto label_198e28;
            case 0x198E2Cu: goto label_198e2c;
            case 0x198E30u: goto label_198e30;
            case 0x198E34u: goto label_198e34;
            case 0x198E38u: goto label_198e38;
            case 0x198E3Cu: goto label_198e3c;
            case 0x198E40u: goto label_198e40;
            case 0x198E44u: goto label_198e44;
            case 0x198E48u: goto label_198e48;
            case 0x198E4Cu: goto label_198e4c;
            case 0x198E50u: goto label_198e50;
            case 0x198E54u: goto label_198e54;
            case 0x198E58u: goto label_198e58;
            case 0x198E5Cu: goto label_198e5c;
            case 0x198E60u: goto label_198e60;
            case 0x198E64u: goto label_198e64;
            case 0x198E68u: goto label_198e68;
            case 0x198E6Cu: goto label_198e6c;
            case 0x198E70u: goto label_198e70;
            case 0x198E74u: goto label_198e74;
            case 0x198E78u: goto label_198e78;
            case 0x198E7Cu: goto label_198e7c;
            case 0x198E80u: goto label_198e80;
            case 0x198E84u: goto label_198e84;
            case 0x198E88u: goto label_198e88;
            case 0x198E8Cu: goto label_198e8c;
            case 0x198E90u: goto label_198e90;
            case 0x198E94u: goto label_198e94;
            case 0x198E98u: goto label_198e98;
            case 0x198E9Cu: goto label_198e9c;
            case 0x198EA0u: goto label_198ea0;
            case 0x198EA4u: goto label_198ea4;
            case 0x198EA8u: goto label_198ea8;
            case 0x198EACu: goto label_198eac;
            case 0x198EB0u: goto label_198eb0;
            case 0x198EB4u: goto label_198eb4;
            case 0x198EB8u: goto label_198eb8;
            case 0x198EBCu: goto label_198ebc;
            case 0x198EC0u: goto label_198ec0;
            case 0x198EC4u: goto label_198ec4;
            case 0x198EC8u: goto label_198ec8;
            case 0x198ECCu: goto label_198ecc;
            case 0x198ED0u: goto label_198ed0;
            case 0x198ED4u: goto label_198ed4;
            case 0x198ED8u: goto label_198ed8;
            case 0x198EDCu: goto label_198edc;
            case 0x198EE0u: goto label_198ee0;
            case 0x198EE4u: goto label_198ee4;
            case 0x198EE8u: goto label_198ee8;
            case 0x198EECu: goto label_198eec;
            case 0x198EF0u: goto label_198ef0;
            case 0x198EF4u: goto label_198ef4;
            case 0x198EF8u: goto label_198ef8;
            case 0x198EFCu: goto label_198efc;
            case 0x198F00u: goto label_198f00;
            case 0x198F04u: goto label_198f04;
            case 0x198F08u: goto label_198f08;
            case 0x198F0Cu: goto label_198f0c;
            case 0x198F10u: goto label_198f10;
            case 0x198F14u: goto label_198f14;
            case 0x198F18u: goto label_198f18;
            case 0x198F1Cu: goto label_198f1c;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F28u: goto label_198f28;
            case 0x198F2Cu: goto label_198f2c;
            case 0x198F30u: goto label_198f30;
            case 0x198F34u: goto label_198f34;
            case 0x198F38u: goto label_198f38;
            case 0x198F3Cu: goto label_198f3c;
            case 0x198F40u: goto label_198f40;
            case 0x198F44u: goto label_198f44;
            case 0x198F48u: goto label_198f48;
            case 0x198F4Cu: goto label_198f4c;
            case 0x198F50u: goto label_198f50;
            case 0x198F54u: goto label_198f54;
            case 0x198F58u: goto label_198f58;
            case 0x198F5Cu: goto label_198f5c;
            case 0x198F60u: goto label_198f60;
            case 0x198F64u: goto label_198f64;
            case 0x198F68u: goto label_198f68;
            case 0x198F6Cu: goto label_198f6c;
            case 0x198F70u: goto label_198f70;
            case 0x198F74u: goto label_198f74;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F80u: goto label_198f80;
            case 0x198F84u: goto label_198f84;
            case 0x198F88u: goto label_198f88;
            case 0x198F8Cu: goto label_198f8c;
            case 0x198F90u: goto label_198f90;
            case 0x198F94u: goto label_198f94;
            case 0x198F98u: goto label_198f98;
            case 0x198F9Cu: goto label_198f9c;
            case 0x198FA0u: goto label_198fa0;
            case 0x198FA4u: goto label_198fa4;
            case 0x198FA8u: goto label_198fa8;
            case 0x198FACu: goto label_198fac;
            case 0x198FB0u: goto label_198fb0;
            case 0x198FB4u: goto label_198fb4;
            case 0x198FB8u: goto label_198fb8;
            case 0x198FBCu: goto label_198fbc;
            case 0x198FC0u: goto label_198fc0;
            case 0x198FC4u: goto label_198fc4;
            case 0x198FC8u: goto label_198fc8;
            case 0x198FCCu: goto label_198fcc;
            case 0x198FD0u: goto label_198fd0;
            case 0x198FD4u: goto label_198fd4;
            case 0x198FD8u: goto label_198fd8;
            case 0x198FDCu: goto label_198fdc;
            case 0x198FE0u: goto label_198fe0;
            case 0x198FE4u: goto label_198fe4;
            case 0x198FE8u: goto label_198fe8;
            case 0x198FECu: goto label_198fec;
            case 0x198FF0u: goto label_198ff0;
            case 0x198FF4u: goto label_198ff4;
            case 0x198FF8u: goto label_198ff8;
            case 0x198FFCu: goto label_198ffc;
            case 0x199000u: goto label_199000;
            case 0x199004u: goto label_199004;
            case 0x199008u: goto label_199008;
            case 0x19900Cu: goto label_19900c;
            case 0x199010u: goto label_199010;
            case 0x199014u: goto label_199014;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199020u: goto label_199020;
            case 0x199024u: goto label_199024;
            case 0x199028u: goto label_199028;
            case 0x19902Cu: goto label_19902c;
            case 0x199030u: goto label_199030;
            case 0x199034u: goto label_199034;
            case 0x199038u: goto label_199038;
            case 0x19903Cu: goto label_19903c;
            case 0x199040u: goto label_199040;
            case 0x199044u: goto label_199044;
            case 0x199048u: goto label_199048;
            case 0x19904Cu: goto label_19904c;
            case 0x199050u: goto label_199050;
            case 0x199054u: goto label_199054;
            case 0x199058u: goto label_199058;
            case 0x19905Cu: goto label_19905c;
            case 0x199060u: goto label_199060;
            case 0x199064u: goto label_199064;
            case 0x199068u: goto label_199068;
            case 0x19906Cu: goto label_19906c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x199078u: goto label_199078;
            case 0x19907Cu: goto label_19907c;
            case 0x199080u: goto label_199080;
            case 0x199084u: goto label_199084;
            case 0x199088u: goto label_199088;
            case 0x19908Cu: goto label_19908c;
            case 0x199090u: goto label_199090;
            case 0x199094u: goto label_199094;
            case 0x199098u: goto label_199098;
            case 0x19909Cu: goto label_19909c;
            case 0x1990A0u: goto label_1990a0;
            case 0x1990A4u: goto label_1990a4;
            case 0x1990A8u: goto label_1990a8;
            case 0x1990ACu: goto label_1990ac;
            case 0x1990B0u: goto label_1990b0;
            case 0x1990B4u: goto label_1990b4;
            case 0x1990B8u: goto label_1990b8;
            case 0x1990BCu: goto label_1990bc;
            case 0x1990C0u: goto label_1990c0;
            case 0x1990C4u: goto label_1990c4;
            case 0x1990C8u: goto label_1990c8;
            case 0x1990CCu: goto label_1990cc;
            case 0x1990D0u: goto label_1990d0;
            case 0x1990D4u: goto label_1990d4;
            case 0x1990D8u: goto label_1990d8;
            case 0x1990DCu: goto label_1990dc;
            case 0x1990E0u: goto label_1990e0;
            case 0x1990E4u: goto label_1990e4;
            case 0x1990E8u: goto label_1990e8;
            case 0x1990ECu: goto label_1990ec;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F4u: goto label_1990f4;
            case 0x1990F8u: goto label_1990f8;
            case 0x1990FCu: goto label_1990fc;
            case 0x199100u: goto label_199100;
            case 0x199104u: goto label_199104;
            case 0x199108u: goto label_199108;
            case 0x19910Cu: goto label_19910c;
            case 0x199110u: goto label_199110;
            case 0x199114u: goto label_199114;
            case 0x199118u: goto label_199118;
            case 0x19911Cu: goto label_19911c;
            case 0x199120u: goto label_199120;
            case 0x199124u: goto label_199124;
            case 0x199128u: goto label_199128;
            case 0x19912Cu: goto label_19912c;
            case 0x199130u: goto label_199130;
            case 0x199134u: goto label_199134;
            case 0x199138u: goto label_199138;
            case 0x19913Cu: goto label_19913c;
            case 0x199140u: goto label_199140;
            case 0x199144u: goto label_199144;
            case 0x199148u: goto label_199148;
            case 0x19914Cu: goto label_19914c;
            case 0x199150u: goto label_199150;
            case 0x199154u: goto label_199154;
            case 0x199158u: goto label_199158;
            case 0x19915Cu: goto label_19915c;
            case 0x199160u: goto label_199160;
            case 0x199164u: goto label_199164;
            case 0x199168u: goto label_199168;
            case 0x19916Cu: goto label_19916c;
            case 0x199170u: goto label_199170;
            case 0x199174u: goto label_199174;
            case 0x199178u: goto label_199178;
            case 0x19917Cu: goto label_19917c;
            case 0x199180u: goto label_199180;
            case 0x199184u: goto label_199184;
            case 0x199188u: goto label_199188;
            case 0x19918Cu: goto label_19918c;
            case 0x199190u: goto label_199190;
            case 0x199194u: goto label_199194;
            case 0x199198u: goto label_199198;
            case 0x19919Cu: goto label_19919c;
            case 0x1991A0u: goto label_1991a0;
            case 0x1991A4u: goto label_1991a4;
            case 0x1991A8u: goto label_1991a8;
            case 0x1991ACu: goto label_1991ac;
            case 0x1991B0u: goto label_1991b0;
            case 0x1991B4u: goto label_1991b4;
            case 0x1991B8u: goto label_1991b8;
            case 0x1991BCu: goto label_1991bc;
            case 0x1991C0u: goto label_1991c0;
            case 0x1991C4u: goto label_1991c4;
            case 0x1991C8u: goto label_1991c8;
            case 0x1991CCu: goto label_1991cc;
            case 0x1991D0u: goto label_1991d0;
            case 0x1991D4u: goto label_1991d4;
            case 0x1991D8u: goto label_1991d8;
            case 0x1991DCu: goto label_1991dc;
            case 0x1991E0u: goto label_1991e0;
            case 0x1991E4u: goto label_1991e4;
            case 0x1991E8u: goto label_1991e8;
            case 0x1991ECu: goto label_1991ec;
            case 0x1991F0u: goto label_1991f0;
            case 0x1991F4u: goto label_1991f4;
            case 0x1991F8u: goto label_1991f8;
            case 0x1991FCu: goto label_1991fc;
            case 0x199200u: goto label_199200;
            case 0x199204u: goto label_199204;
            case 0x199208u: goto label_199208;
            case 0x19920Cu: goto label_19920c;
            case 0x199210u: goto label_199210;
            case 0x199214u: goto label_199214;
            case 0x199218u: goto label_199218;
            case 0x19921Cu: goto label_19921c;
            case 0x199220u: goto label_199220;
            case 0x199224u: goto label_199224;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199230u: goto label_199230;
            case 0x199234u: goto label_199234;
            case 0x199238u: goto label_199238;
            case 0x19923Cu: goto label_19923c;
            case 0x199240u: goto label_199240;
            case 0x199244u: goto label_199244;
            case 0x199248u: goto label_199248;
            case 0x19924Cu: goto label_19924c;
            case 0x199250u: goto label_199250;
            case 0x199254u: goto label_199254;
            case 0x199258u: goto label_199258;
            case 0x19925Cu: goto label_19925c;
            case 0x199260u: goto label_199260;
            case 0x199264u: goto label_199264;
            case 0x199268u: goto label_199268;
            case 0x19926Cu: goto label_19926c;
            case 0x199270u: goto label_199270;
            case 0x199274u: goto label_199274;
            case 0x199278u: goto label_199278;
            case 0x19927Cu: goto label_19927c;
            case 0x199280u: goto label_199280;
            case 0x199284u: goto label_199284;
            case 0x199288u: goto label_199288;
            case 0x19928Cu: goto label_19928c;
            case 0x199290u: goto label_199290;
            case 0x199294u: goto label_199294;
            case 0x199298u: goto label_199298;
            case 0x19929Cu: goto label_19929c;
            case 0x1992A0u: goto label_1992a0;
            case 0x1992A4u: goto label_1992a4;
            case 0x1992A8u: goto label_1992a8;
            case 0x1992ACu: goto label_1992ac;
            case 0x1992B0u: goto label_1992b0;
            case 0x1992B4u: goto label_1992b4;
            case 0x1992B8u: goto label_1992b8;
            case 0x1992BCu: goto label_1992bc;
            case 0x1992C0u: goto label_1992c0;
            case 0x1992C4u: goto label_1992c4;
            case 0x1992C8u: goto label_1992c8;
            case 0x1992CCu: goto label_1992cc;
            case 0x1992D0u: goto label_1992d0;
            case 0x1992D4u: goto label_1992d4;
            case 0x1992D8u: goto label_1992d8;
            case 0x1992DCu: goto label_1992dc;
            case 0x1992E0u: goto label_1992e0;
            case 0x1992E4u: goto label_1992e4;
            case 0x1992E8u: goto label_1992e8;
            case 0x1992ECu: goto label_1992ec;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x1992F8u: goto label_1992f8;
            case 0x1992FCu: goto label_1992fc;
            case 0x199300u: goto label_199300;
            case 0x199304u: goto label_199304;
            case 0x199308u: goto label_199308;
            case 0x19930Cu: goto label_19930c;
            case 0x199310u: goto label_199310;
            case 0x199314u: goto label_199314;
            case 0x199318u: goto label_199318;
            case 0x19931Cu: goto label_19931c;
            case 0x199320u: goto label_199320;
            case 0x199324u: goto label_199324;
            case 0x199328u: goto label_199328;
            case 0x19932Cu: goto label_19932c;
            case 0x199330u: goto label_199330;
            case 0x199334u: goto label_199334;
            case 0x199338u: goto label_199338;
            case 0x19933Cu: goto label_19933c;
            case 0x199340u: goto label_199340;
            case 0x199344u: goto label_199344;
            case 0x199348u: goto label_199348;
            case 0x19934Cu: goto label_19934c;
            case 0x199350u: goto label_199350;
            case 0x199354u: goto label_199354;
            case 0x199358u: goto label_199358;
            case 0x19935Cu: goto label_19935c;
            case 0x199360u: goto label_199360;
            case 0x199364u: goto label_199364;
            case 0x199368u: goto label_199368;
            case 0x19936Cu: goto label_19936c;
            case 0x199370u: goto label_199370;
            case 0x199374u: goto label_199374;
            case 0x199378u: goto label_199378;
            case 0x19937Cu: goto label_19937c;
            case 0x199380u: goto label_199380;
            case 0x199384u: goto label_199384;
            case 0x199388u: goto label_199388;
            case 0x19938Cu: goto label_19938c;
            case 0x199390u: goto label_199390;
            case 0x199394u: goto label_199394;
            case 0x199398u: goto label_199398;
            case 0x19939Cu: goto label_19939c;
            case 0x1993A0u: goto label_1993a0;
            case 0x1993A4u: goto label_1993a4;
            case 0x1993A8u: goto label_1993a8;
            case 0x1993ACu: goto label_1993ac;
            case 0x1993B0u: goto label_1993b0;
            case 0x1993B4u: goto label_1993b4;
            case 0x1993B8u: goto label_1993b8;
            case 0x1993BCu: goto label_1993bc;
            case 0x1993C0u: goto label_1993c0;
            case 0x1993C4u: goto label_1993c4;
            case 0x1993C8u: goto label_1993c8;
            case 0x1993CCu: goto label_1993cc;
            case 0x1993D0u: goto label_1993d0;
            case 0x1993D4u: goto label_1993d4;
            case 0x1993D8u: goto label_1993d8;
            case 0x1993DCu: goto label_1993dc;
            case 0x1993E0u: goto label_1993e0;
            case 0x1993E4u: goto label_1993e4;
            case 0x1993E8u: goto label_1993e8;
            case 0x1993ECu: goto label_1993ec;
            case 0x1993F0u: goto label_1993f0;
            case 0x1993F4u: goto label_1993f4;
            case 0x1993F8u: goto label_1993f8;
            case 0x1993FCu: goto label_1993fc;
            case 0x199400u: goto label_199400;
            case 0x199404u: goto label_199404;
            case 0x199408u: goto label_199408;
            case 0x19940Cu: goto label_19940c;
            case 0x199410u: goto label_199410;
            case 0x199414u: goto label_199414;
            case 0x199418u: goto label_199418;
            case 0x19941Cu: goto label_19941c;
            case 0x199420u: goto label_199420;
            case 0x199424u: goto label_199424;
            case 0x199428u: goto label_199428;
            case 0x19942Cu: goto label_19942c;
            case 0x199430u: goto label_199430;
            case 0x199434u: goto label_199434;
            case 0x199438u: goto label_199438;
            case 0x19943Cu: goto label_19943c;
            case 0x199440u: goto label_199440;
            case 0x199444u: goto label_199444;
            case 0x199448u: goto label_199448;
            case 0x19944Cu: goto label_19944c;
            case 0x199450u: goto label_199450;
            case 0x199454u: goto label_199454;
            case 0x199458u: goto label_199458;
            case 0x19945Cu: goto label_19945c;
            case 0x199460u: goto label_199460;
            case 0x199464u: goto label_199464;
            case 0x199468u: goto label_199468;
            case 0x19946Cu: goto label_19946c;
            case 0x199470u: goto label_199470;
            case 0x199474u: goto label_199474;
            case 0x199478u: goto label_199478;
            case 0x19947Cu: goto label_19947c;
            case 0x199480u: goto label_199480;
            case 0x199484u: goto label_199484;
            case 0x199488u: goto label_199488;
            case 0x19948Cu: goto label_19948c;
            case 0x199490u: goto label_199490;
            case 0x199494u: goto label_199494;
            case 0x199498u: goto label_199498;
            case 0x19949Cu: goto label_19949c;
            case 0x1994A0u: goto label_1994a0;
            case 0x1994A4u: goto label_1994a4;
            case 0x1994A8u: goto label_1994a8;
            case 0x1994ACu: goto label_1994ac;
            case 0x1994B0u: goto label_1994b0;
            case 0x1994B4u: goto label_1994b4;
            case 0x1994B8u: goto label_1994b8;
            case 0x1994BCu: goto label_1994bc;
            case 0x1994C0u: goto label_1994c0;
            case 0x1994C4u: goto label_1994c4;
            case 0x1994C8u: goto label_1994c8;
            case 0x1994CCu: goto label_1994cc;
            case 0x1994D0u: goto label_1994d0;
            case 0x1994D4u: goto label_1994d4;
            case 0x1994D8u: goto label_1994d8;
            case 0x1994DCu: goto label_1994dc;
            case 0x1994E0u: goto label_1994e0;
            case 0x1994E4u: goto label_1994e4;
            case 0x1994E8u: goto label_1994e8;
            case 0x1994ECu: goto label_1994ec;
            case 0x1994F0u: goto label_1994f0;
            case 0x1994F4u: goto label_1994f4;
            case 0x1994F8u: goto label_1994f8;
            case 0x1994FCu: goto label_1994fc;
            case 0x199500u: goto label_199500;
            case 0x199504u: goto label_199504;
            case 0x199508u: goto label_199508;
            case 0x19950Cu: goto label_19950c;
            case 0x199510u: goto label_199510;
            case 0x199514u: goto label_199514;
            case 0x199518u: goto label_199518;
            case 0x19951Cu: goto label_19951c;
            case 0x199520u: goto label_199520;
            case 0x199524u: goto label_199524;
            case 0x199528u: goto label_199528;
            case 0x19952Cu: goto label_19952c;
            case 0x199530u: goto label_199530;
            case 0x199534u: goto label_199534;
            case 0x199538u: goto label_199538;
            case 0x19953Cu: goto label_19953c;
            case 0x199540u: goto label_199540;
            case 0x199544u: goto label_199544;
            case 0x199548u: goto label_199548;
            case 0x19954Cu: goto label_19954c;
            case 0x199550u: goto label_199550;
            case 0x199554u: goto label_199554;
            case 0x199558u: goto label_199558;
            case 0x19955Cu: goto label_19955c;
            case 0x199560u: goto label_199560;
            case 0x199564u: goto label_199564;
            case 0x199568u: goto label_199568;
            case 0x19956Cu: goto label_19956c;
            case 0x199570u: goto label_199570;
            case 0x199574u: goto label_199574;
            case 0x199578u: goto label_199578;
            case 0x19957Cu: goto label_19957c;
            case 0x199580u: goto label_199580;
            case 0x199584u: goto label_199584;
            case 0x199588u: goto label_199588;
            case 0x19958Cu: goto label_19958c;
            case 0x199590u: goto label_199590;
            case 0x199594u: goto label_199594;
            case 0x199598u: goto label_199598;
            case 0x19959Cu: goto label_19959c;
            case 0x1995A0u: goto label_1995a0;
            case 0x1995A4u: goto label_1995a4;
            case 0x1995A8u: goto label_1995a8;
            case 0x1995ACu: goto label_1995ac;
            case 0x1995B0u: goto label_1995b0;
            case 0x1995B4u: goto label_1995b4;
            case 0x1995B8u: goto label_1995b8;
            case 0x1995BCu: goto label_1995bc;
            case 0x1995C0u: goto label_1995c0;
            case 0x1995C4u: goto label_1995c4;
            case 0x1995C8u: goto label_1995c8;
            case 0x1995CCu: goto label_1995cc;
            case 0x1995D0u: goto label_1995d0;
            case 0x1995D4u: goto label_1995d4;
            case 0x1995D8u: goto label_1995d8;
            case 0x1995DCu: goto label_1995dc;
            case 0x1995E0u: goto label_1995e0;
            case 0x1995E4u: goto label_1995e4;
            case 0x1995E8u: goto label_1995e8;
            case 0x1995ECu: goto label_1995ec;
            case 0x1995F0u: goto label_1995f0;
            case 0x1995F4u: goto label_1995f4;
            case 0x1995F8u: goto label_1995f8;
            case 0x1995FCu: goto label_1995fc;
            case 0x199600u: goto label_199600;
            case 0x199604u: goto label_199604;
            case 0x199608u: goto label_199608;
            case 0x19960Cu: goto label_19960c;
            case 0x199610u: goto label_199610;
            case 0x199614u: goto label_199614;
            case 0x199618u: goto label_199618;
            case 0x19961Cu: goto label_19961c;
            case 0x199620u: goto label_199620;
            case 0x199624u: goto label_199624;
            case 0x199628u: goto label_199628;
            case 0x19962Cu: goto label_19962c;
            case 0x199630u: goto label_199630;
            case 0x199634u: goto label_199634;
            case 0x199638u: goto label_199638;
            case 0x19963Cu: goto label_19963c;
            case 0x199640u: goto label_199640;
            case 0x199644u: goto label_199644;
            case 0x199648u: goto label_199648;
            case 0x19964Cu: goto label_19964c;
            case 0x199650u: goto label_199650;
            case 0x199654u: goto label_199654;
            case 0x199658u: goto label_199658;
            case 0x19965Cu: goto label_19965c;
            case 0x199660u: goto label_199660;
            case 0x199664u: goto label_199664;
            case 0x199668u: goto label_199668;
            case 0x19966Cu: goto label_19966c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x199634u; }
            if (ctx->pc != 0x199634u) { return; }
        }
    }
    ctx->pc = 0x199634u;
label_199634:
    // 0x199634: 0x1000000a  b           . + 4 + (0xA << 2)
label_199638:
    if (ctx->pc == 0x199638u) {
        ctx->pc = 0x19963Cu;
        goto label_19963c;
    }
    ctx->pc = 0x199634u;
    {
        const bool branch_taken_0x199634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199634) {
            ctx->pc = 0x199660u;
            goto label_199660;
        }
    }
    ctx->pc = 0x19963Cu;
label_19963c:
    // 0x19963c: 0x0  nop
    ctx->pc = 0x19963cu;
    // NOP
label_199640:
    // 0x199640: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x199640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_199644:
    // 0x199644: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x199644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_199648:
    // 0x199648: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x199648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_19964c:
    // 0x19964c: 0x24c68920  addiu       $a2, $a2, -0x76E0
    ctx->pc = 0x19964cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936864));
label_199650:
    // 0x199650: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x199650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199654:
    // 0x199654: 0xc053ca4  jal         func_14F290
label_199658:
    if (ctx->pc == 0x199658u) {
        ctx->pc = 0x199658u;
            // 0x199658: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19965Cu;
        goto label_19965c;
    }
    ctx->pc = 0x199654u;
    SET_GPR_U32(ctx, 31, 0x19965Cu);
    ctx->pc = 0x199658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199654u;
            // 0x199658: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19965Cu; }
        if (ctx->pc != 0x19965Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19965Cu; }
        if (ctx->pc != 0x19965Cu) { return; }
    }
    ctx->pc = 0x19965Cu;
label_19965c:
    // 0x19965c: 0x0  nop
    ctx->pc = 0x19965cu;
    // NOP
label_199660:
    // 0x199660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x199660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_199664:
    // 0x199664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_199668:
    // 0x199668: 0x3e00008  jr          $ra
label_19966c:
    if (ctx->pc == 0x19966Cu) {
        ctx->pc = 0x19966Cu;
            // 0x19966c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x199670u;
        goto label_fallthrough_0x199668;
    }
    ctx->pc = 0x199668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19966Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199668u;
            // 0x19966c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198B60u: goto label_198b60;
            case 0x198B64u: goto label_198b64;
            case 0x198B68u: goto label_198b68;
            case 0x198B6Cu: goto label_198b6c;
            case 0x198B70u: goto label_198b70;
            case 0x198B74u: goto label_198b74;
            case 0x198B78u: goto label_198b78;
            case 0x198B7Cu: goto label_198b7c;
            case 0x198B80u: goto label_198b80;
            case 0x198B84u: goto label_198b84;
            case 0x198B88u: goto label_198b88;
            case 0x198B8Cu: goto label_198b8c;
            case 0x198B90u: goto label_198b90;
            case 0x198B94u: goto label_198b94;
            case 0x198B98u: goto label_198b98;
            case 0x198B9Cu: goto label_198b9c;
            case 0x198BA0u: goto label_198ba0;
            case 0x198BA4u: goto label_198ba4;
            case 0x198BA8u: goto label_198ba8;
            case 0x198BACu: goto label_198bac;
            case 0x198BB0u: goto label_198bb0;
            case 0x198BB4u: goto label_198bb4;
            case 0x198BB8u: goto label_198bb8;
            case 0x198BBCu: goto label_198bbc;
            case 0x198BC0u: goto label_198bc0;
            case 0x198BC4u: goto label_198bc4;
            case 0x198BC8u: goto label_198bc8;
            case 0x198BCCu: goto label_198bcc;
            case 0x198BD0u: goto label_198bd0;
            case 0x198BD4u: goto label_198bd4;
            case 0x198BD8u: goto label_198bd8;
            case 0x198BDCu: goto label_198bdc;
            case 0x198BE0u: goto label_198be0;
            case 0x198BE4u: goto label_198be4;
            case 0x198BE8u: goto label_198be8;
            case 0x198BECu: goto label_198bec;
            case 0x198BF0u: goto label_198bf0;
            case 0x198BF4u: goto label_198bf4;
            case 0x198BF8u: goto label_198bf8;
            case 0x198BFCu: goto label_198bfc;
            case 0x198C00u: goto label_198c00;
            case 0x198C04u: goto label_198c04;
            case 0x198C08u: goto label_198c08;
            case 0x198C0Cu: goto label_198c0c;
            case 0x198C10u: goto label_198c10;
            case 0x198C14u: goto label_198c14;
            case 0x198C18u: goto label_198c18;
            case 0x198C1Cu: goto label_198c1c;
            case 0x198C20u: goto label_198c20;
            case 0x198C24u: goto label_198c24;
            case 0x198C28u: goto label_198c28;
            case 0x198C2Cu: goto label_198c2c;
            case 0x198C30u: goto label_198c30;
            case 0x198C34u: goto label_198c34;
            case 0x198C38u: goto label_198c38;
            case 0x198C3Cu: goto label_198c3c;
            case 0x198C40u: goto label_198c40;
            case 0x198C44u: goto label_198c44;
            case 0x198C48u: goto label_198c48;
            case 0x198C4Cu: goto label_198c4c;
            case 0x198C50u: goto label_198c50;
            case 0x198C54u: goto label_198c54;
            case 0x198C58u: goto label_198c58;
            case 0x198C5Cu: goto label_198c5c;
            case 0x198C60u: goto label_198c60;
            case 0x198C64u: goto label_198c64;
            case 0x198C68u: goto label_198c68;
            case 0x198C6Cu: goto label_198c6c;
            case 0x198C70u: goto label_198c70;
            case 0x198C74u: goto label_198c74;
            case 0x198C78u: goto label_198c78;
            case 0x198C7Cu: goto label_198c7c;
            case 0x198C80u: goto label_198c80;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198C8Cu: goto label_198c8c;
            case 0x198C90u: goto label_198c90;
            case 0x198C94u: goto label_198c94;
            case 0x198C98u: goto label_198c98;
            case 0x198C9Cu: goto label_198c9c;
            case 0x198CA0u: goto label_198ca0;
            case 0x198CA4u: goto label_198ca4;
            case 0x198CA8u: goto label_198ca8;
            case 0x198CACu: goto label_198cac;
            case 0x198CB0u: goto label_198cb0;
            case 0x198CB4u: goto label_198cb4;
            case 0x198CB8u: goto label_198cb8;
            case 0x198CBCu: goto label_198cbc;
            case 0x198CC0u: goto label_198cc0;
            case 0x198CC4u: goto label_198cc4;
            case 0x198CC8u: goto label_198cc8;
            case 0x198CCCu: goto label_198ccc;
            case 0x198CD0u: goto label_198cd0;
            case 0x198CD4u: goto label_198cd4;
            case 0x198CD8u: goto label_198cd8;
            case 0x198CDCu: goto label_198cdc;
            case 0x198CE0u: goto label_198ce0;
            case 0x198CE4u: goto label_198ce4;
            case 0x198CE8u: goto label_198ce8;
            case 0x198CECu: goto label_198cec;
            case 0x198CF0u: goto label_198cf0;
            case 0x198CF4u: goto label_198cf4;
            case 0x198CF8u: goto label_198cf8;
            case 0x198CFCu: goto label_198cfc;
            case 0x198D00u: goto label_198d00;
            case 0x198D04u: goto label_198d04;
            case 0x198D08u: goto label_198d08;
            case 0x198D0Cu: goto label_198d0c;
            case 0x198D10u: goto label_198d10;
            case 0x198D14u: goto label_198d14;
            case 0x198D18u: goto label_198d18;
            case 0x198D1Cu: goto label_198d1c;
            case 0x198D20u: goto label_198d20;
            case 0x198D24u: goto label_198d24;
            case 0x198D28u: goto label_198d28;
            case 0x198D2Cu: goto label_198d2c;
            case 0x198D30u: goto label_198d30;
            case 0x198D34u: goto label_198d34;
            case 0x198D38u: goto label_198d38;
            case 0x198D3Cu: goto label_198d3c;
            case 0x198D40u: goto label_198d40;
            case 0x198D44u: goto label_198d44;
            case 0x198D48u: goto label_198d48;
            case 0x198D4Cu: goto label_198d4c;
            case 0x198D50u: goto label_198d50;
            case 0x198D54u: goto label_198d54;
            case 0x198D58u: goto label_198d58;
            case 0x198D5Cu: goto label_198d5c;
            case 0x198D60u: goto label_198d60;
            case 0x198D64u: goto label_198d64;
            case 0x198D68u: goto label_198d68;
            case 0x198D6Cu: goto label_198d6c;
            case 0x198D70u: goto label_198d70;
            case 0x198D74u: goto label_198d74;
            case 0x198D78u: goto label_198d78;
            case 0x198D7Cu: goto label_198d7c;
            case 0x198D80u: goto label_198d80;
            case 0x198D84u: goto label_198d84;
            case 0x198D88u: goto label_198d88;
            case 0x198D8Cu: goto label_198d8c;
            case 0x198D90u: goto label_198d90;
            case 0x198D94u: goto label_198d94;
            case 0x198D98u: goto label_198d98;
            case 0x198D9Cu: goto label_198d9c;
            case 0x198DA0u: goto label_198da0;
            case 0x198DA4u: goto label_198da4;
            case 0x198DA8u: goto label_198da8;
            case 0x198DACu: goto label_198dac;
            case 0x198DB0u: goto label_198db0;
            case 0x198DB4u: goto label_198db4;
            case 0x198DB8u: goto label_198db8;
            case 0x198DBCu: goto label_198dbc;
            case 0x198DC0u: goto label_198dc0;
            case 0x198DC4u: goto label_198dc4;
            case 0x198DC8u: goto label_198dc8;
            case 0x198DCCu: goto label_198dcc;
            case 0x198DD0u: goto label_198dd0;
            case 0x198DD4u: goto label_198dd4;
            case 0x198DD8u: goto label_198dd8;
            case 0x198DDCu: goto label_198ddc;
            case 0x198DE0u: goto label_198de0;
            case 0x198DE4u: goto label_198de4;
            case 0x198DE8u: goto label_198de8;
            case 0x198DECu: goto label_198dec;
            case 0x198DF0u: goto label_198df0;
            case 0x198DF4u: goto label_198df4;
            case 0x198DF8u: goto label_198df8;
            case 0x198DFCu: goto label_198dfc;
            case 0x198E00u: goto label_198e00;
            case 0x198E04u: goto label_198e04;
            case 0x198E08u: goto label_198e08;
            case 0x198E0Cu: goto label_198e0c;
            case 0x198E10u: goto label_198e10;
            case 0x198E14u: goto label_198e14;
            case 0x198E18u: goto label_198e18;
            case 0x198E1Cu: goto label_198e1c;
            case 0x198E20u: goto label_198e20;
            case 0x198E24u: goto label_198e24;
            case 0x198E28u: goto label_198e28;
            case 0x198E2Cu: goto label_198e2c;
            case 0x198E30u: goto label_198e30;
            case 0x198E34u: goto label_198e34;
            case 0x198E38u: goto label_198e38;
            case 0x198E3Cu: goto label_198e3c;
            case 0x198E40u: goto label_198e40;
            case 0x198E44u: goto label_198e44;
            case 0x198E48u: goto label_198e48;
            case 0x198E4Cu: goto label_198e4c;
            case 0x198E50u: goto label_198e50;
            case 0x198E54u: goto label_198e54;
            case 0x198E58u: goto label_198e58;
            case 0x198E5Cu: goto label_198e5c;
            case 0x198E60u: goto label_198e60;
            case 0x198E64u: goto label_198e64;
            case 0x198E68u: goto label_198e68;
            case 0x198E6Cu: goto label_198e6c;
            case 0x198E70u: goto label_198e70;
            case 0x198E74u: goto label_198e74;
            case 0x198E78u: goto label_198e78;
            case 0x198E7Cu: goto label_198e7c;
            case 0x198E80u: goto label_198e80;
            case 0x198E84u: goto label_198e84;
            case 0x198E88u: goto label_198e88;
            case 0x198E8Cu: goto label_198e8c;
            case 0x198E90u: goto label_198e90;
            case 0x198E94u: goto label_198e94;
            case 0x198E98u: goto label_198e98;
            case 0x198E9Cu: goto label_198e9c;
            case 0x198EA0u: goto label_198ea0;
            case 0x198EA4u: goto label_198ea4;
            case 0x198EA8u: goto label_198ea8;
            case 0x198EACu: goto label_198eac;
            case 0x198EB0u: goto label_198eb0;
            case 0x198EB4u: goto label_198eb4;
            case 0x198EB8u: goto label_198eb8;
            case 0x198EBCu: goto label_198ebc;
            case 0x198EC0u: goto label_198ec0;
            case 0x198EC4u: goto label_198ec4;
            case 0x198EC8u: goto label_198ec8;
            case 0x198ECCu: goto label_198ecc;
            case 0x198ED0u: goto label_198ed0;
            case 0x198ED4u: goto label_198ed4;
            case 0x198ED8u: goto label_198ed8;
            case 0x198EDCu: goto label_198edc;
            case 0x198EE0u: goto label_198ee0;
            case 0x198EE4u: goto label_198ee4;
            case 0x198EE8u: goto label_198ee8;
            case 0x198EECu: goto label_198eec;
            case 0x198EF0u: goto label_198ef0;
            case 0x198EF4u: goto label_198ef4;
            case 0x198EF8u: goto label_198ef8;
            case 0x198EFCu: goto label_198efc;
            case 0x198F00u: goto label_198f00;
            case 0x198F04u: goto label_198f04;
            case 0x198F08u: goto label_198f08;
            case 0x198F0Cu: goto label_198f0c;
            case 0x198F10u: goto label_198f10;
            case 0x198F14u: goto label_198f14;
            case 0x198F18u: goto label_198f18;
            case 0x198F1Cu: goto label_198f1c;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F28u: goto label_198f28;
            case 0x198F2Cu: goto label_198f2c;
            case 0x198F30u: goto label_198f30;
            case 0x198F34u: goto label_198f34;
            case 0x198F38u: goto label_198f38;
            case 0x198F3Cu: goto label_198f3c;
            case 0x198F40u: goto label_198f40;
            case 0x198F44u: goto label_198f44;
            case 0x198F48u: goto label_198f48;
            case 0x198F4Cu: goto label_198f4c;
            case 0x198F50u: goto label_198f50;
            case 0x198F54u: goto label_198f54;
            case 0x198F58u: goto label_198f58;
            case 0x198F5Cu: goto label_198f5c;
            case 0x198F60u: goto label_198f60;
            case 0x198F64u: goto label_198f64;
            case 0x198F68u: goto label_198f68;
            case 0x198F6Cu: goto label_198f6c;
            case 0x198F70u: goto label_198f70;
            case 0x198F74u: goto label_198f74;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F80u: goto label_198f80;
            case 0x198F84u: goto label_198f84;
            case 0x198F88u: goto label_198f88;
            case 0x198F8Cu: goto label_198f8c;
            case 0x198F90u: goto label_198f90;
            case 0x198F94u: goto label_198f94;
            case 0x198F98u: goto label_198f98;
            case 0x198F9Cu: goto label_198f9c;
            case 0x198FA0u: goto label_198fa0;
            case 0x198FA4u: goto label_198fa4;
            case 0x198FA8u: goto label_198fa8;
            case 0x198FACu: goto label_198fac;
            case 0x198FB0u: goto label_198fb0;
            case 0x198FB4u: goto label_198fb4;
            case 0x198FB8u: goto label_198fb8;
            case 0x198FBCu: goto label_198fbc;
            case 0x198FC0u: goto label_198fc0;
            case 0x198FC4u: goto label_198fc4;
            case 0x198FC8u: goto label_198fc8;
            case 0x198FCCu: goto label_198fcc;
            case 0x198FD0u: goto label_198fd0;
            case 0x198FD4u: goto label_198fd4;
            case 0x198FD8u: goto label_198fd8;
            case 0x198FDCu: goto label_198fdc;
            case 0x198FE0u: goto label_198fe0;
            case 0x198FE4u: goto label_198fe4;
            case 0x198FE8u: goto label_198fe8;
            case 0x198FECu: goto label_198fec;
            case 0x198FF0u: goto label_198ff0;
            case 0x198FF4u: goto label_198ff4;
            case 0x198FF8u: goto label_198ff8;
            case 0x198FFCu: goto label_198ffc;
            case 0x199000u: goto label_199000;
            case 0x199004u: goto label_199004;
            case 0x199008u: goto label_199008;
            case 0x19900Cu: goto label_19900c;
            case 0x199010u: goto label_199010;
            case 0x199014u: goto label_199014;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199020u: goto label_199020;
            case 0x199024u: goto label_199024;
            case 0x199028u: goto label_199028;
            case 0x19902Cu: goto label_19902c;
            case 0x199030u: goto label_199030;
            case 0x199034u: goto label_199034;
            case 0x199038u: goto label_199038;
            case 0x19903Cu: goto label_19903c;
            case 0x199040u: goto label_199040;
            case 0x199044u: goto label_199044;
            case 0x199048u: goto label_199048;
            case 0x19904Cu: goto label_19904c;
            case 0x199050u: goto label_199050;
            case 0x199054u: goto label_199054;
            case 0x199058u: goto label_199058;
            case 0x19905Cu: goto label_19905c;
            case 0x199060u: goto label_199060;
            case 0x199064u: goto label_199064;
            case 0x199068u: goto label_199068;
            case 0x19906Cu: goto label_19906c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x199078u: goto label_199078;
            case 0x19907Cu: goto label_19907c;
            case 0x199080u: goto label_199080;
            case 0x199084u: goto label_199084;
            case 0x199088u: goto label_199088;
            case 0x19908Cu: goto label_19908c;
            case 0x199090u: goto label_199090;
            case 0x199094u: goto label_199094;
            case 0x199098u: goto label_199098;
            case 0x19909Cu: goto label_19909c;
            case 0x1990A0u: goto label_1990a0;
            case 0x1990A4u: goto label_1990a4;
            case 0x1990A8u: goto label_1990a8;
            case 0x1990ACu: goto label_1990ac;
            case 0x1990B0u: goto label_1990b0;
            case 0x1990B4u: goto label_1990b4;
            case 0x1990B8u: goto label_1990b8;
            case 0x1990BCu: goto label_1990bc;
            case 0x1990C0u: goto label_1990c0;
            case 0x1990C4u: goto label_1990c4;
            case 0x1990C8u: goto label_1990c8;
            case 0x1990CCu: goto label_1990cc;
            case 0x1990D0u: goto label_1990d0;
            case 0x1990D4u: goto label_1990d4;
            case 0x1990D8u: goto label_1990d8;
            case 0x1990DCu: goto label_1990dc;
            case 0x1990E0u: goto label_1990e0;
            case 0x1990E4u: goto label_1990e4;
            case 0x1990E8u: goto label_1990e8;
            case 0x1990ECu: goto label_1990ec;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F4u: goto label_1990f4;
            case 0x1990F8u: goto label_1990f8;
            case 0x1990FCu: goto label_1990fc;
            case 0x199100u: goto label_199100;
            case 0x199104u: goto label_199104;
            case 0x199108u: goto label_199108;
            case 0x19910Cu: goto label_19910c;
            case 0x199110u: goto label_199110;
            case 0x199114u: goto label_199114;
            case 0x199118u: goto label_199118;
            case 0x19911Cu: goto label_19911c;
            case 0x199120u: goto label_199120;
            case 0x199124u: goto label_199124;
            case 0x199128u: goto label_199128;
            case 0x19912Cu: goto label_19912c;
            case 0x199130u: goto label_199130;
            case 0x199134u: goto label_199134;
            case 0x199138u: goto label_199138;
            case 0x19913Cu: goto label_19913c;
            case 0x199140u: goto label_199140;
            case 0x199144u: goto label_199144;
            case 0x199148u: goto label_199148;
            case 0x19914Cu: goto label_19914c;
            case 0x199150u: goto label_199150;
            case 0x199154u: goto label_199154;
            case 0x199158u: goto label_199158;
            case 0x19915Cu: goto label_19915c;
            case 0x199160u: goto label_199160;
            case 0x199164u: goto label_199164;
            case 0x199168u: goto label_199168;
            case 0x19916Cu: goto label_19916c;
            case 0x199170u: goto label_199170;
            case 0x199174u: goto label_199174;
            case 0x199178u: goto label_199178;
            case 0x19917Cu: goto label_19917c;
            case 0x199180u: goto label_199180;
            case 0x199184u: goto label_199184;
            case 0x199188u: goto label_199188;
            case 0x19918Cu: goto label_19918c;
            case 0x199190u: goto label_199190;
            case 0x199194u: goto label_199194;
            case 0x199198u: goto label_199198;
            case 0x19919Cu: goto label_19919c;
            case 0x1991A0u: goto label_1991a0;
            case 0x1991A4u: goto label_1991a4;
            case 0x1991A8u: goto label_1991a8;
            case 0x1991ACu: goto label_1991ac;
            case 0x1991B0u: goto label_1991b0;
            case 0x1991B4u: goto label_1991b4;
            case 0x1991B8u: goto label_1991b8;
            case 0x1991BCu: goto label_1991bc;
            case 0x1991C0u: goto label_1991c0;
            case 0x1991C4u: goto label_1991c4;
            case 0x1991C8u: goto label_1991c8;
            case 0x1991CCu: goto label_1991cc;
            case 0x1991D0u: goto label_1991d0;
            case 0x1991D4u: goto label_1991d4;
            case 0x1991D8u: goto label_1991d8;
            case 0x1991DCu: goto label_1991dc;
            case 0x1991E0u: goto label_1991e0;
            case 0x1991E4u: goto label_1991e4;
            case 0x1991E8u: goto label_1991e8;
            case 0x1991ECu: goto label_1991ec;
            case 0x1991F0u: goto label_1991f0;
            case 0x1991F4u: goto label_1991f4;
            case 0x1991F8u: goto label_1991f8;
            case 0x1991FCu: goto label_1991fc;
            case 0x199200u: goto label_199200;
            case 0x199204u: goto label_199204;
            case 0x199208u: goto label_199208;
            case 0x19920Cu: goto label_19920c;
            case 0x199210u: goto label_199210;
            case 0x199214u: goto label_199214;
            case 0x199218u: goto label_199218;
            case 0x19921Cu: goto label_19921c;
            case 0x199220u: goto label_199220;
            case 0x199224u: goto label_199224;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199230u: goto label_199230;
            case 0x199234u: goto label_199234;
            case 0x199238u: goto label_199238;
            case 0x19923Cu: goto label_19923c;
            case 0x199240u: goto label_199240;
            case 0x199244u: goto label_199244;
            case 0x199248u: goto label_199248;
            case 0x19924Cu: goto label_19924c;
            case 0x199250u: goto label_199250;
            case 0x199254u: goto label_199254;
            case 0x199258u: goto label_199258;
            case 0x19925Cu: goto label_19925c;
            case 0x199260u: goto label_199260;
            case 0x199264u: goto label_199264;
            case 0x199268u: goto label_199268;
            case 0x19926Cu: goto label_19926c;
            case 0x199270u: goto label_199270;
            case 0x199274u: goto label_199274;
            case 0x199278u: goto label_199278;
            case 0x19927Cu: goto label_19927c;
            case 0x199280u: goto label_199280;
            case 0x199284u: goto label_199284;
            case 0x199288u: goto label_199288;
            case 0x19928Cu: goto label_19928c;
            case 0x199290u: goto label_199290;
            case 0x199294u: goto label_199294;
            case 0x199298u: goto label_199298;
            case 0x19929Cu: goto label_19929c;
            case 0x1992A0u: goto label_1992a0;
            case 0x1992A4u: goto label_1992a4;
            case 0x1992A8u: goto label_1992a8;
            case 0x1992ACu: goto label_1992ac;
            case 0x1992B0u: goto label_1992b0;
            case 0x1992B4u: goto label_1992b4;
            case 0x1992B8u: goto label_1992b8;
            case 0x1992BCu: goto label_1992bc;
            case 0x1992C0u: goto label_1992c0;
            case 0x1992C4u: goto label_1992c4;
            case 0x1992C8u: goto label_1992c8;
            case 0x1992CCu: goto label_1992cc;
            case 0x1992D0u: goto label_1992d0;
            case 0x1992D4u: goto label_1992d4;
            case 0x1992D8u: goto label_1992d8;
            case 0x1992DCu: goto label_1992dc;
            case 0x1992E0u: goto label_1992e0;
            case 0x1992E4u: goto label_1992e4;
            case 0x1992E8u: goto label_1992e8;
            case 0x1992ECu: goto label_1992ec;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x1992F8u: goto label_1992f8;
            case 0x1992FCu: goto label_1992fc;
            case 0x199300u: goto label_199300;
            case 0x199304u: goto label_199304;
            case 0x199308u: goto label_199308;
            case 0x19930Cu: goto label_19930c;
            case 0x199310u: goto label_199310;
            case 0x199314u: goto label_199314;
            case 0x199318u: goto label_199318;
            case 0x19931Cu: goto label_19931c;
            case 0x199320u: goto label_199320;
            case 0x199324u: goto label_199324;
            case 0x199328u: goto label_199328;
            case 0x19932Cu: goto label_19932c;
            case 0x199330u: goto label_199330;
            case 0x199334u: goto label_199334;
            case 0x199338u: goto label_199338;
            case 0x19933Cu: goto label_19933c;
            case 0x199340u: goto label_199340;
            case 0x199344u: goto label_199344;
            case 0x199348u: goto label_199348;
            case 0x19934Cu: goto label_19934c;
            case 0x199350u: goto label_199350;
            case 0x199354u: goto label_199354;
            case 0x199358u: goto label_199358;
            case 0x19935Cu: goto label_19935c;
            case 0x199360u: goto label_199360;
            case 0x199364u: goto label_199364;
            case 0x199368u: goto label_199368;
            case 0x19936Cu: goto label_19936c;
            case 0x199370u: goto label_199370;
            case 0x199374u: goto label_199374;
            case 0x199378u: goto label_199378;
            case 0x19937Cu: goto label_19937c;
            case 0x199380u: goto label_199380;
            case 0x199384u: goto label_199384;
            case 0x199388u: goto label_199388;
            case 0x19938Cu: goto label_19938c;
            case 0x199390u: goto label_199390;
            case 0x199394u: goto label_199394;
            case 0x199398u: goto label_199398;
            case 0x19939Cu: goto label_19939c;
            case 0x1993A0u: goto label_1993a0;
            case 0x1993A4u: goto label_1993a4;
            case 0x1993A8u: goto label_1993a8;
            case 0x1993ACu: goto label_1993ac;
            case 0x1993B0u: goto label_1993b0;
            case 0x1993B4u: goto label_1993b4;
            case 0x1993B8u: goto label_1993b8;
            case 0x1993BCu: goto label_1993bc;
            case 0x1993C0u: goto label_1993c0;
            case 0x1993C4u: goto label_1993c4;
            case 0x1993C8u: goto label_1993c8;
            case 0x1993CCu: goto label_1993cc;
            case 0x1993D0u: goto label_1993d0;
            case 0x1993D4u: goto label_1993d4;
            case 0x1993D8u: goto label_1993d8;
            case 0x1993DCu: goto label_1993dc;
            case 0x1993E0u: goto label_1993e0;
            case 0x1993E4u: goto label_1993e4;
            case 0x1993E8u: goto label_1993e8;
            case 0x1993ECu: goto label_1993ec;
            case 0x1993F0u: goto label_1993f0;
            case 0x1993F4u: goto label_1993f4;
            case 0x1993F8u: goto label_1993f8;
            case 0x1993FCu: goto label_1993fc;
            case 0x199400u: goto label_199400;
            case 0x199404u: goto label_199404;
            case 0x199408u: goto label_199408;
            case 0x19940Cu: goto label_19940c;
            case 0x199410u: goto label_199410;
            case 0x199414u: goto label_199414;
            case 0x199418u: goto label_199418;
            case 0x19941Cu: goto label_19941c;
            case 0x199420u: goto label_199420;
            case 0x199424u: goto label_199424;
            case 0x199428u: goto label_199428;
            case 0x19942Cu: goto label_19942c;
            case 0x199430u: goto label_199430;
            case 0x199434u: goto label_199434;
            case 0x199438u: goto label_199438;
            case 0x19943Cu: goto label_19943c;
            case 0x199440u: goto label_199440;
            case 0x199444u: goto label_199444;
            case 0x199448u: goto label_199448;
            case 0x19944Cu: goto label_19944c;
            case 0x199450u: goto label_199450;
            case 0x199454u: goto label_199454;
            case 0x199458u: goto label_199458;
            case 0x19945Cu: goto label_19945c;
            case 0x199460u: goto label_199460;
            case 0x199464u: goto label_199464;
            case 0x199468u: goto label_199468;
            case 0x19946Cu: goto label_19946c;
            case 0x199470u: goto label_199470;
            case 0x199474u: goto label_199474;
            case 0x199478u: goto label_199478;
            case 0x19947Cu: goto label_19947c;
            case 0x199480u: goto label_199480;
            case 0x199484u: goto label_199484;
            case 0x199488u: goto label_199488;
            case 0x19948Cu: goto label_19948c;
            case 0x199490u: goto label_199490;
            case 0x199494u: goto label_199494;
            case 0x199498u: goto label_199498;
            case 0x19949Cu: goto label_19949c;
            case 0x1994A0u: goto label_1994a0;
            case 0x1994A4u: goto label_1994a4;
            case 0x1994A8u: goto label_1994a8;
            case 0x1994ACu: goto label_1994ac;
            case 0x1994B0u: goto label_1994b0;
            case 0x1994B4u: goto label_1994b4;
            case 0x1994B8u: goto label_1994b8;
            case 0x1994BCu: goto label_1994bc;
            case 0x1994C0u: goto label_1994c0;
            case 0x1994C4u: goto label_1994c4;
            case 0x1994C8u: goto label_1994c8;
            case 0x1994CCu: goto label_1994cc;
            case 0x1994D0u: goto label_1994d0;
            case 0x1994D4u: goto label_1994d4;
            case 0x1994D8u: goto label_1994d8;
            case 0x1994DCu: goto label_1994dc;
            case 0x1994E0u: goto label_1994e0;
            case 0x1994E4u: goto label_1994e4;
            case 0x1994E8u: goto label_1994e8;
            case 0x1994ECu: goto label_1994ec;
            case 0x1994F0u: goto label_1994f0;
            case 0x1994F4u: goto label_1994f4;
            case 0x1994F8u: goto label_1994f8;
            case 0x1994FCu: goto label_1994fc;
            case 0x199500u: goto label_199500;
            case 0x199504u: goto label_199504;
            case 0x199508u: goto label_199508;
            case 0x19950Cu: goto label_19950c;
            case 0x199510u: goto label_199510;
            case 0x199514u: goto label_199514;
            case 0x199518u: goto label_199518;
            case 0x19951Cu: goto label_19951c;
            case 0x199520u: goto label_199520;
            case 0x199524u: goto label_199524;
            case 0x199528u: goto label_199528;
            case 0x19952Cu: goto label_19952c;
            case 0x199530u: goto label_199530;
            case 0x199534u: goto label_199534;
            case 0x199538u: goto label_199538;
            case 0x19953Cu: goto label_19953c;
            case 0x199540u: goto label_199540;
            case 0x199544u: goto label_199544;
            case 0x199548u: goto label_199548;
            case 0x19954Cu: goto label_19954c;
            case 0x199550u: goto label_199550;
            case 0x199554u: goto label_199554;
            case 0x199558u: goto label_199558;
            case 0x19955Cu: goto label_19955c;
            case 0x199560u: goto label_199560;
            case 0x199564u: goto label_199564;
            case 0x199568u: goto label_199568;
            case 0x19956Cu: goto label_19956c;
            case 0x199570u: goto label_199570;
            case 0x199574u: goto label_199574;
            case 0x199578u: goto label_199578;
            case 0x19957Cu: goto label_19957c;
            case 0x199580u: goto label_199580;
            case 0x199584u: goto label_199584;
            case 0x199588u: goto label_199588;
            case 0x19958Cu: goto label_19958c;
            case 0x199590u: goto label_199590;
            case 0x199594u: goto label_199594;
            case 0x199598u: goto label_199598;
            case 0x19959Cu: goto label_19959c;
            case 0x1995A0u: goto label_1995a0;
            case 0x1995A4u: goto label_1995a4;
            case 0x1995A8u: goto label_1995a8;
            case 0x1995ACu: goto label_1995ac;
            case 0x1995B0u: goto label_1995b0;
            case 0x1995B4u: goto label_1995b4;
            case 0x1995B8u: goto label_1995b8;
            case 0x1995BCu: goto label_1995bc;
            case 0x1995C0u: goto label_1995c0;
            case 0x1995C4u: goto label_1995c4;
            case 0x1995C8u: goto label_1995c8;
            case 0x1995CCu: goto label_1995cc;
            case 0x1995D0u: goto label_1995d0;
            case 0x1995D4u: goto label_1995d4;
            case 0x1995D8u: goto label_1995d8;
            case 0x1995DCu: goto label_1995dc;
            case 0x1995E0u: goto label_1995e0;
            case 0x1995E4u: goto label_1995e4;
            case 0x1995E8u: goto label_1995e8;
            case 0x1995ECu: goto label_1995ec;
            case 0x1995F0u: goto label_1995f0;
            case 0x1995F4u: goto label_1995f4;
            case 0x1995F8u: goto label_1995f8;
            case 0x1995FCu: goto label_1995fc;
            case 0x199600u: goto label_199600;
            case 0x199604u: goto label_199604;
            case 0x199608u: goto label_199608;
            case 0x19960Cu: goto label_19960c;
            case 0x199610u: goto label_199610;
            case 0x199614u: goto label_199614;
            case 0x199618u: goto label_199618;
            case 0x19961Cu: goto label_19961c;
            case 0x199620u: goto label_199620;
            case 0x199624u: goto label_199624;
            case 0x199628u: goto label_199628;
            case 0x19962Cu: goto label_19962c;
            case 0x199630u: goto label_199630;
            case 0x199634u: goto label_199634;
            case 0x199638u: goto label_199638;
            case 0x19963Cu: goto label_19963c;
            case 0x199640u: goto label_199640;
            case 0x199644u: goto label_199644;
            case 0x199648u: goto label_199648;
            case 0x19964Cu: goto label_19964c;
            case 0x199650u: goto label_199650;
            case 0x199654u: goto label_199654;
            case 0x199658u: goto label_199658;
            case 0x19965Cu: goto label_19965c;
            case 0x199660u: goto label_199660;
            case 0x199664u: goto label_199664;
            case 0x199668u: goto label_199668;
            case 0x19966Cu: goto label_19966c;
            default: break;
        }
        return;
    }
label_fallthrough_0x199668:
    ctx->pc = 0x199670u;
}

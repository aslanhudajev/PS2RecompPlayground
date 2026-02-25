#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En2_04Move
// Address: 0x199b30 - 0x19ac8c
void En2_04Move_0x199b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En2_04Move_0x199b30");
#endif

    ctx->pc = 0x199b30u;

label_199b30:
    // 0x199b30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x199b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_199b34:
    // 0x199b34: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x199b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_199b38:
    // 0x199b38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x199b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_199b3c:
    // 0x199b3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x199b3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_199b40:
    // 0x199b40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x199b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_199b44:
    // 0x199b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199b48:
    // 0x199b48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x199b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_199b4c:
    // 0x199b4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x199b4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199b50:
    // 0x199b50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_199b54:
    // 0x199b54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_199b58:
    // 0x199b58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x199b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_199b5c:
    // 0x199b5c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x199b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_199b60:
    // 0x199b60: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x199b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199b64:
    // 0x199b64: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x199b64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_199b68:
    // 0x199b68: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x199b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_199b6c:
    // 0x199b6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x199b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_199b70:
    // 0x199b70: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x199b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_199b74:
    // 0x199b74: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x199b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199b78:
    // 0x199b78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x199b78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_199b7c:
    // 0x199b7c: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x199b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_199b80:
    // 0x199b80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x199b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_199b84:
    // 0x199b84: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x199b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_199b88:
    // 0x199b88: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x199b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199b8c:
    // 0x199b8c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x199b8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_199b90:
    // 0x199b90: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x199b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_199b94:
    // 0x199b94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x199b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_199b98:
    // 0x199b98: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x199b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_199b9c:
    // 0x199b9c: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x199b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199ba0:
    // 0x199ba0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x199ba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_199ba4:
    // 0x199ba4: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x199ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_199ba8:
    // 0x199ba8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x199ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_199bac:
    // 0x199bac: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x199bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199bb0:
    // 0x199bb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199bb4:
    // 0x199bb4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_199bb8:
    if (ctx->pc == 0x199BB8u) {
        ctx->pc = 0x199BB8u;
            // 0x199bb8: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x199BBCu;
        goto label_199bbc;
    }
    ctx->pc = 0x199BB4u;
    {
        const bool branch_taken_0x199bb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x199BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199BB4u;
            // 0x199bb8: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bb4) {
            ctx->pc = 0x199BD8u;
            goto label_199bd8;
        }
    }
    ctx->pc = 0x199BBCu;
label_199bbc:
    // 0x199bbc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x199bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_199bc0:
    // 0x199bc0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x199bc0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_199bc4:
    // 0x199bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199bc8:
    // 0x199bc8: 0x0  nop
    ctx->pc = 0x199bc8u;
    // NOP
label_199bcc:
    // 0x199bcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x199bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_199bd0:
    // 0x199bd0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x199bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_199bd4:
    // 0x199bd4: 0x0  nop
    ctx->pc = 0x199bd4u;
    // NOP
label_199bd8:
    // 0x199bd8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x199bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_199bdc:
    // 0x199bdc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x199bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_199be0:
    // 0x199be0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x199be0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_199be4:
    // 0x199be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199be8:
    // 0x199be8: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x199be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199bec:
    // 0x199bec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199bf0:
    // 0x199bf0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_199bf4:
    if (ctx->pc == 0x199BF4u) {
        ctx->pc = 0x199BF4u;
            // 0x199bf4: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x199BF8u;
        goto label_199bf8;
    }
    ctx->pc = 0x199BF0u;
    {
        const bool branch_taken_0x199bf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x199BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199BF0u;
            // 0x199bf4: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bf0) {
            ctx->pc = 0x199C10u;
            goto label_199c10;
        }
    }
    ctx->pc = 0x199BF8u;
label_199bf8:
    // 0x199bf8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x199bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_199bfc:
    // 0x199bfc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x199bfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_199c00:
    // 0x199c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199c04:
    // 0x199c04: 0x0  nop
    ctx->pc = 0x199c04u;
    // NOP
label_199c08:
    // 0x199c08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199c08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_199c0c:
    // 0x199c0c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x199c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_199c10:
    // 0x199c10: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x199c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_199c14:
    // 0x199c14: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x199c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_199c18:
    // 0x199c18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x199c18u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_199c1c:
    // 0x199c1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199c20:
    // 0x199c20: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x199c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199c24:
    // 0x199c24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199c28:
    // 0x199c28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_199c2c:
    if (ctx->pc == 0x199C2Cu) {
        ctx->pc = 0x199C2Cu;
            // 0x199c2c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x199C30u;
        goto label_199c30;
    }
    ctx->pc = 0x199C28u;
    {
        const bool branch_taken_0x199c28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x199C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199C28u;
            // 0x199c2c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c28) {
            ctx->pc = 0x199C48u;
            goto label_199c48;
        }
    }
    ctx->pc = 0x199C30u;
label_199c30:
    // 0x199c30: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x199c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_199c34:
    // 0x199c34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x199c34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_199c38:
    // 0x199c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199c3c:
    // 0x199c3c: 0x0  nop
    ctx->pc = 0x199c3cu;
    // NOP
label_199c40:
    // 0x199c40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x199c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_199c44:
    // 0x199c44: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x199c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_199c48:
    // 0x199c48: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x199c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_199c4c:
    // 0x199c4c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x199c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_199c50:
    // 0x199c50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x199c50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_199c54:
    // 0x199c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199c58:
    // 0x199c58: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x199c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199c5c:
    // 0x199c5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199c5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199c60:
    // 0x199c60: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_199c64:
    if (ctx->pc == 0x199C64u) {
        ctx->pc = 0x199C64u;
            // 0x199c64: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x199C68u;
        goto label_199c68;
    }
    ctx->pc = 0x199C60u;
    {
        const bool branch_taken_0x199c60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x199C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199C60u;
            // 0x199c64: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c60) {
            ctx->pc = 0x199C80u;
            goto label_199c80;
        }
    }
    ctx->pc = 0x199C68u;
label_199c68:
    // 0x199c68: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x199c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_199c6c:
    // 0x199c6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x199c6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_199c70:
    // 0x199c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199c74:
    // 0x199c74: 0x0  nop
    ctx->pc = 0x199c74u;
    // NOP
label_199c78:
    // 0x199c78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199c78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_199c7c:
    // 0x199c7c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x199c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_199c80:
    // 0x199c80: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x199c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_199c84:
    // 0x199c84: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x199c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_199c88:
    // 0x199c88: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x199c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_199c8c:
    // 0x199c8c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x199c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_199c90:
    // 0x199c90: 0xc066b24  jal         func_19AC90
label_199c94:
    if (ctx->pc == 0x199C94u) {
        ctx->pc = 0x199C94u;
            // 0x199c94: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x199C98u;
        goto label_199c98;
    }
    ctx->pc = 0x199C90u;
    SET_GPR_U32(ctx, 31, 0x199C98u);
    ctx->pc = 0x199C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199C90u;
            // 0x199c94: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AC90u;
    if (runtime->hasFunction(0x19AC90u)) {
        auto targetFn = runtime->lookupFunction(0x19AC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199C98u; }
        if (ctx->pc != 0x199C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x19ac90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199C98u; }
        if (ctx->pc != 0x199C98u) { return; }
    }
    ctx->pc = 0x199C98u;
label_199c98:
    // 0x199c98: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x199c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199c9c:
    // 0x199c9c: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x199c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_199ca0:
    // 0x199ca0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x199ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199ca4:
    // 0x199ca4: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x199ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_199ca8:
    // 0x199ca8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x199ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_199cac:
    // 0x199cac: 0x1840022e  blez        $v0, . + 4 + (0x22E << 2)
label_199cb0:
    if (ctx->pc == 0x199CB0u) {
        ctx->pc = 0x199CB4u;
        goto label_199cb4;
    }
    ctx->pc = 0x199CACu;
    {
        const bool branch_taken_0x199cac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x199cac) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x199CB4u;
label_199cb4:
    // 0x199cb4: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x199cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_199cb8:
    // 0x199cb8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_199cbc:
    if (ctx->pc == 0x199CBCu) {
        ctx->pc = 0x199CC0u;
        goto label_199cc0;
    }
    ctx->pc = 0x199CB8u;
    {
        const bool branch_taken_0x199cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199cb8) {
            ctx->pc = 0x199D30u;
            goto label_199d30;
        }
    }
    ctx->pc = 0x199CC0u;
label_199cc0:
    // 0x199cc0: 0xc050bb4  jal         func_142ED0
label_199cc4:
    if (ctx->pc == 0x199CC4u) {
        ctx->pc = 0x199CC8u;
        goto label_199cc8;
    }
    ctx->pc = 0x199CC0u;
    SET_GPR_U32(ctx, 31, 0x199CC8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CC8u; }
        if (ctx->pc != 0x199CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CC8u; }
        if (ctx->pc != 0x199CC8u) { return; }
    }
    ctx->pc = 0x199CC8u;
label_199cc8:
    // 0x199cc8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x199cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_199ccc:
    // 0x199ccc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x199cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_199cd0:
    // 0x199cd0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x199cd0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_199cd4:
    // 0x199cd4: 0x0  nop
    ctx->pc = 0x199cd4u;
    // NOP
label_199cd8:
    // 0x199cd8: 0x0  nop
    ctx->pc = 0x199cd8u;
    // NOP
label_199cdc:
    // 0x199cdc: 0x1010  mfhi        $v0
    ctx->pc = 0x199cdcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_199ce0:
    // 0x199ce0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x199ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_199ce4:
    // 0x199ce4: 0xc050bb4  jal         func_142ED0
label_199ce8:
    if (ctx->pc == 0x199CE8u) {
        ctx->pc = 0x199CE8u;
            // 0x199ce8: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x199CECu;
        goto label_199cec;
    }
    ctx->pc = 0x199CE4u;
    SET_GPR_U32(ctx, 31, 0x199CECu);
    ctx->pc = 0x199CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199CE4u;
            // 0x199ce8: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CECu; }
        if (ctx->pc != 0x199CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CECu; }
        if (ctx->pc != 0x199CECu) { return; }
    }
    ctx->pc = 0x199CECu;
label_199cec:
    // 0x199cec: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x199cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_199cf0:
    // 0x199cf0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x199cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_199cf4:
    // 0x199cf4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x199cf4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_199cf8:
    // 0x199cf8: 0x0  nop
    ctx->pc = 0x199cf8u;
    // NOP
label_199cfc:
    // 0x199cfc: 0x0  nop
    ctx->pc = 0x199cfcu;
    // NOP
label_199d00:
    // 0x199d00: 0x1010  mfhi        $v0
    ctx->pc = 0x199d00u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_199d04:
    // 0x199d04: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x199d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_199d08:
    // 0x199d08: 0xc050bb4  jal         func_142ED0
label_199d0c:
    if (ctx->pc == 0x199D0Cu) {
        ctx->pc = 0x199D0Cu;
            // 0x199d0c: 0xae620114  sw          $v0, 0x114($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x199D10u;
        goto label_199d10;
    }
    ctx->pc = 0x199D08u;
    SET_GPR_U32(ctx, 31, 0x199D10u);
    ctx->pc = 0x199D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199D08u;
            // 0x199d0c: 0xae620114  sw          $v0, 0x114($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D10u; }
        if (ctx->pc != 0x199D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D10u; }
        if (ctx->pc != 0x199D10u) { return; }
    }
    ctx->pc = 0x199D10u;
label_199d10:
    // 0x199d10: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x199d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_199d14:
    // 0x199d14: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x199d14u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_199d18:
    // 0x199d18: 0x0  nop
    ctx->pc = 0x199d18u;
    // NOP
label_199d1c:
    // 0x199d1c: 0x0  nop
    ctx->pc = 0x199d1cu;
    // NOP
label_199d20:
    // 0x199d20: 0x1010  mfhi        $v0
    ctx->pc = 0x199d20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_199d24:
    // 0x199d24: 0x10000210  b           . + 4 + (0x210 << 2)
label_199d28:
    if (ctx->pc == 0x199D28u) {
        ctx->pc = 0x199D28u;
            // 0x199d28: 0xae62011c  sw          $v0, 0x11C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 2));
        ctx->pc = 0x199D2Cu;
        goto label_199d2c;
    }
    ctx->pc = 0x199D24u;
    {
        const bool branch_taken_0x199d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D24u;
            // 0x199d28: 0xae62011c  sw          $v0, 0x11C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d24) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x199D2Cu;
label_199d2c:
    // 0x199d2c: 0x0  nop
    ctx->pc = 0x199d2cu;
    // NOP
label_199d30:
    // 0x199d30: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x199d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
label_199d34:
    // 0x199d34: 0x1440020c  bnez        $v0, . + 4 + (0x20C << 2)
label_199d38:
    if (ctx->pc == 0x199D38u) {
        ctx->pc = 0x199D38u;
            // 0x199d38: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->pc = 0x199D3Cu;
        goto label_199d3c;
    }
    ctx->pc = 0x199D34u;
    {
        const bool branch_taken_0x199d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D34u;
            // 0x199d38: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d34) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x199D3Cu;
label_199d3c:
    // 0x199d3c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_199d40:
    if (ctx->pc == 0x199D40u) {
        ctx->pc = 0x199D44u;
        goto label_199d44;
    }
    ctx->pc = 0x199D3Cu;
    {
        const bool branch_taken_0x199d3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d3c) {
            ctx->pc = 0x199DB8u;
            goto label_199db8;
        }
    }
    ctx->pc = 0x199D44u;
label_199d44:
    // 0x199d44: 0xc66000d4  lwc1        $f0, 0xD4($s3)
    ctx->pc = 0x199d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199d48:
    // 0x199d48: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x199d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_199d4c:
    // 0x199d4c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x199d4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
label_199d50:
    // 0x199d50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x199d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199d54:
    // 0x199d54: 0x0  nop
    ctx->pc = 0x199d54u;
    // NOP
label_199d58:
    // 0x199d58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x199d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_199d5c:
    // 0x199d5c: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x199d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_199d60:
    // 0x199d60: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x199d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_199d64:
    // 0x199d64: 0x28610046  slti        $at, $v1, 0x46
    ctx->pc = 0x199d64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
label_199d68:
    // 0x199d68: 0x102001ff  beqz        $at, . + 4 + (0x1FF << 2)
label_199d6c:
    if (ctx->pc == 0x199D6Cu) {
        ctx->pc = 0x199D6Cu;
            // 0x199d6c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x199D70u;
        goto label_199d70;
    }
    ctx->pc = 0x199D68u;
    {
        const bool branch_taken_0x199d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D68u;
            // 0x199d6c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d68) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x199D70u;
label_199d70:
    // 0x199d70: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x199d70u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_199d74:
    // 0x199d74: 0x0  nop
    ctx->pc = 0x199d74u;
    // NOP
label_199d78:
    // 0x199d78: 0x0  nop
    ctx->pc = 0x199d78u;
    // NOP
label_199d7c:
    // 0x199d7c: 0x1010  mfhi        $v0
    ctx->pc = 0x199d7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_199d80:
    // 0x199d80: 0x144001f9  bnez        $v0, . + 4 + (0x1F9 << 2)
label_199d84:
    if (ctx->pc == 0x199D84u) {
        ctx->pc = 0x199D88u;
        goto label_199d88;
    }
    ctx->pc = 0x199D80u;
    {
        const bool branch_taken_0x199d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199d80) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x199D88u;
label_199d88:
    // 0x199d88: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x199d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199d8c:
    // 0x199d8c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x199d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199d90:
    // 0x199d90: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x199d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_199d94:
    // 0x199d94: 0xc0655a0  jal         func_195680
label_199d98:
    if (ctx->pc == 0x199D98u) {
        ctx->pc = 0x199D98u;
            // 0x199d98: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x199D9Cu;
        goto label_199d9c;
    }
    ctx->pc = 0x199D94u;
    SET_GPR_U32(ctx, 31, 0x199D9Cu);
    ctx->pc = 0x199D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199D94u;
            // 0x199d98: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D9Cu; }
        if (ctx->pc != 0x199D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D9Cu; }
        if (ctx->pc != 0x199D9Cu) { return; }
    }
    ctx->pc = 0x199D9Cu;
label_199d9c:
    // 0x199d9c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x199d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199da0:
    // 0x199da0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x199da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199da4:
    // 0x199da4: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x199da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_199da8:
    // 0x199da8: 0xc0655a0  jal         func_195680
label_199dac:
    if (ctx->pc == 0x199DACu) {
        ctx->pc = 0x199DACu;
            // 0x199dac: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x199DB0u;
        goto label_199db0;
    }
    ctx->pc = 0x199DA8u;
    SET_GPR_U32(ctx, 31, 0x199DB0u);
    ctx->pc = 0x199DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199DA8u;
            // 0x199dac: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DB0u; }
        if (ctx->pc != 0x199DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DB0u; }
        if (ctx->pc != 0x199DB0u) { return; }
    }
    ctx->pc = 0x199DB0u;
label_199db0:
    // 0x199db0: 0x100001ed  b           . + 4 + (0x1ED << 2)
label_199db4:
    if (ctx->pc == 0x199DB4u) {
        ctx->pc = 0x199DB8u;
        goto label_199db8;
    }
    ctx->pc = 0x199DB0u;
    {
        const bool branch_taken_0x199db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199db0) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x199DB8u;
label_199db8:
    // 0x199db8: 0x28610104  slti        $at, $v1, 0x104
    ctx->pc = 0x199db8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)260) ? 1 : 0);
label_199dbc:
    // 0x199dbc: 0x1020016a  beqz        $at, . + 4 + (0x16A << 2)
label_199dc0:
    if (ctx->pc == 0x199DC0u) {
        ctx->pc = 0x199DC0u;
            // 0x199dc0: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x199DC4u;
        goto label_199dc4;
    }
    ctx->pc = 0x199DBCu;
    {
        const bool branch_taken_0x199dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199DBCu;
            // 0x199dc0: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dbc) {
            ctx->pc = 0x19A368u;
            goto label_19a368;
        }
    }
    ctx->pc = 0x199DC4u;
label_199dc4:
    // 0x199dc4: 0x1062009c  beq         $v1, $v0, . + 4 + (0x9C << 2)
label_199dc8:
    if (ctx->pc == 0x199DC8u) {
        ctx->pc = 0x199DCCu;
        goto label_199dcc;
    }
    ctx->pc = 0x199DC4u;
    {
        const bool branch_taken_0x199dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x199dc4) {
            ctx->pc = 0x19A038u;
            goto label_19a038;
        }
    }
    ctx->pc = 0x199DCCu;
label_199dcc:
    // 0x199dcc: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x199dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_199dd0:
    // 0x199dd0: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
label_199dd4:
    if (ctx->pc == 0x199DD4u) {
        ctx->pc = 0x199DD4u;
            // 0x199dd4: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->pc = 0x199DD8u;
        goto label_199dd8;
    }
    ctx->pc = 0x199DD0u;
    {
        const bool branch_taken_0x199dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x199DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199DD0u;
            // 0x199dd4: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dd0) {
            ctx->pc = 0x199FC0u;
            goto label_199fc0;
        }
    }
    ctx->pc = 0x199DD8u;
label_199dd8:
    // 0x199dd8: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
label_199ddc:
    if (ctx->pc == 0x199DDCu) {
        ctx->pc = 0x199DE0u;
        goto label_199de0;
    }
    ctx->pc = 0x199DD8u;
    {
        const bool branch_taken_0x199dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x199dd8) {
            ctx->pc = 0x199F40u;
            goto label_199f40;
        }
    }
    ctx->pc = 0x199DE0u;
label_199de0:
    // 0x199de0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x199de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_199de4:
    // 0x199de4: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
label_199de8:
    if (ctx->pc == 0x199DE8u) {
        ctx->pc = 0x199DE8u;
            // 0x199de8: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = 0x199DECu;
        goto label_199dec;
    }
    ctx->pc = 0x199DE4u;
    {
        const bool branch_taken_0x199de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x199DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199DE4u;
            // 0x199de8: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199de4) {
            ctx->pc = 0x199ED8u;
            goto label_199ed8;
        }
    }
    ctx->pc = 0x199DECu;
label_199dec:
    // 0x199dec: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_199df0:
    if (ctx->pc == 0x199DF0u) {
        ctx->pc = 0x199DF4u;
        goto label_199df4;
    }
    ctx->pc = 0x199DECu;
    {
        const bool branch_taken_0x199dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x199dec) {
            ctx->pc = 0x199E70u;
            goto label_199e70;
        }
    }
    ctx->pc = 0x199DF4u;
label_199df4:
    // 0x199df4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x199df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_199df8:
    // 0x199df8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_199dfc:
    if (ctx->pc == 0x199DFCu) {
        ctx->pc = 0x199E00u;
        goto label_199e00;
    }
    ctx->pc = 0x199DF8u;
    {
        const bool branch_taken_0x199df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x199df8) {
            ctx->pc = 0x199E08u;
            goto label_199e08;
        }
    }
    ctx->pc = 0x199E00u;
label_199e00:
    // 0x199e00: 0x10000127  b           . + 4 + (0x127 << 2)
label_199e04:
    if (ctx->pc == 0x199E04u) {
        ctx->pc = 0x199E08u;
        goto label_199e08;
    }
    ctx->pc = 0x199E00u;
    {
        const bool branch_taken_0x199e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199e00) {
            ctx->pc = 0x19A2A0u;
            goto label_19a2a0;
        }
    }
    ctx->pc = 0x199E08u;
label_199e08:
    // 0x199e08: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x199e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199e0c:
    // 0x199e0c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199e10:
    // 0x199e10: 0xc0655a8  jal         func_1956A0
label_199e14:
    if (ctx->pc == 0x199E14u) {
        ctx->pc = 0x199E14u;
            // 0x199e14: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x199E18u;
        goto label_199e18;
    }
    ctx->pc = 0x199E10u;
    SET_GPR_U32(ctx, 31, 0x199E18u);
    ctx->pc = 0x199E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E10u;
            // 0x199e14: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E18u; }
        if (ctx->pc != 0x199E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E18u; }
        if (ctx->pc != 0x199E18u) { return; }
    }
    ctx->pc = 0x199E18u;
label_199e18:
    // 0x199e18: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x199e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199e1c:
    // 0x199e1c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199e20:
    // 0x199e20: 0xc0655a8  jal         func_1956A0
label_199e24:
    if (ctx->pc == 0x199E24u) {
        ctx->pc = 0x199E24u;
            // 0x199e24: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x199E28u;
        goto label_199e28;
    }
    ctx->pc = 0x199E20u;
    SET_GPR_U32(ctx, 31, 0x199E28u);
    ctx->pc = 0x199E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E20u;
            // 0x199e24: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E28u; }
        if (ctx->pc != 0x199E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E28u; }
        if (ctx->pc != 0x199E28u) { return; }
    }
    ctx->pc = 0x199E28u;
label_199e28:
    // 0x199e28: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x199e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199e2c:
    // 0x199e2c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x199e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_199e30:
    // 0x199e30: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199e34:
    // 0x199e34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_199e38:
    // 0x199e38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_199e3c:
    // 0x199e3c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_199e40:
    // 0x199e40: 0xc0655dc  jal         func_195770
label_199e44:
    if (ctx->pc == 0x199E44u) {
        ctx->pc = 0x199E44u;
            // 0x199e44: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x199E48u;
        goto label_199e48;
    }
    ctx->pc = 0x199E40u;
    SET_GPR_U32(ctx, 31, 0x199E48u);
    ctx->pc = 0x199E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E40u;
            // 0x199e44: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E48u; }
        if (ctx->pc != 0x199E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E48u; }
        if (ctx->pc != 0x199E48u) { return; }
    }
    ctx->pc = 0x199E48u;
label_199e48:
    // 0x199e48: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x199e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199e4c:
    // 0x199e4c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x199e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_199e50:
    // 0x199e50: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199e54:
    // 0x199e54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_199e58:
    // 0x199e58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_199e5c:
    // 0x199e5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_199e60:
    // 0x199e60: 0xc0655dc  jal         func_195770
label_199e64:
    if (ctx->pc == 0x199E64u) {
        ctx->pc = 0x199E64u;
            // 0x199e64: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x199E68u;
        goto label_199e68;
    }
    ctx->pc = 0x199E60u;
    SET_GPR_U32(ctx, 31, 0x199E68u);
    ctx->pc = 0x199E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E60u;
            // 0x199e64: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E68u; }
        if (ctx->pc != 0x199E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E68u; }
        if (ctx->pc != 0x199E68u) { return; }
    }
    ctx->pc = 0x199E68u;
label_199e68:
    // 0x199e68: 0x1000010d  b           . + 4 + (0x10D << 2)
label_199e6c:
    if (ctx->pc == 0x199E6Cu) {
        ctx->pc = 0x199E70u;
        goto label_199e70;
    }
    ctx->pc = 0x199E68u;
    {
        const bool branch_taken_0x199e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199e68) {
            ctx->pc = 0x19A2A0u;
            goto label_19a2a0;
        }
    }
    ctx->pc = 0x199E70u;
label_199e70:
    // 0x199e70: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x199e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199e74:
    // 0x199e74: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199e78:
    // 0x199e78: 0xc0655a8  jal         func_1956A0
label_199e7c:
    if (ctx->pc == 0x199E7Cu) {
        ctx->pc = 0x199E7Cu;
            // 0x199e7c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x199E80u;
        goto label_199e80;
    }
    ctx->pc = 0x199E78u;
    SET_GPR_U32(ctx, 31, 0x199E80u);
    ctx->pc = 0x199E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E78u;
            // 0x199e7c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E80u; }
        if (ctx->pc != 0x199E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E80u; }
        if (ctx->pc != 0x199E80u) { return; }
    }
    ctx->pc = 0x199E80u;
label_199e80:
    // 0x199e80: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x199e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199e84:
    // 0x199e84: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199e88:
    // 0x199e88: 0xc0655a8  jal         func_1956A0
label_199e8c:
    if (ctx->pc == 0x199E8Cu) {
        ctx->pc = 0x199E8Cu;
            // 0x199e8c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x199E90u;
        goto label_199e90;
    }
    ctx->pc = 0x199E88u;
    SET_GPR_U32(ctx, 31, 0x199E90u);
    ctx->pc = 0x199E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E88u;
            // 0x199e8c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E90u; }
        if (ctx->pc != 0x199E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E90u; }
        if (ctx->pc != 0x199E90u) { return; }
    }
    ctx->pc = 0x199E90u;
label_199e90:
    // 0x199e90: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x199e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199e94:
    // 0x199e94: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x199e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_199e98:
    // 0x199e98: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199e9c:
    // 0x199e9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_199ea0:
    // 0x199ea0: 0x0  nop
    ctx->pc = 0x199ea0u;
    // NOP
label_199ea4:
    // 0x199ea4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x199ea4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_199ea8:
    // 0x199ea8: 0xc0655dc  jal         func_195770
label_199eac:
    if (ctx->pc == 0x199EACu) {
        ctx->pc = 0x199EACu;
            // 0x199eac: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x199EB0u;
        goto label_199eb0;
    }
    ctx->pc = 0x199EA8u;
    SET_GPR_U32(ctx, 31, 0x199EB0u);
    ctx->pc = 0x199EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199EA8u;
            // 0x199eac: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199EB0u; }
        if (ctx->pc != 0x199EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199EB0u; }
        if (ctx->pc != 0x199EB0u) { return; }
    }
    ctx->pc = 0x199EB0u;
label_199eb0:
    // 0x199eb0: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x199eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199eb4:
    // 0x199eb4: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x199eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_199eb8:
    // 0x199eb8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199ebc:
    // 0x199ebc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_199ec0:
    // 0x199ec0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x199ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_199ec4:
    // 0x199ec4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_199ec8:
    // 0x199ec8: 0xc0655dc  jal         func_195770
label_199ecc:
    if (ctx->pc == 0x199ECCu) {
        ctx->pc = 0x199ECCu;
            // 0x199ecc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x199ED0u;
        goto label_199ed0;
    }
    ctx->pc = 0x199EC8u;
    SET_GPR_U32(ctx, 31, 0x199ED0u);
    ctx->pc = 0x199ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199EC8u;
            // 0x199ecc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199ED0u; }
        if (ctx->pc != 0x199ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199ED0u; }
        if (ctx->pc != 0x199ED0u) { return; }
    }
    ctx->pc = 0x199ED0u;
label_199ed0:
    // 0x199ed0: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_199ed4:
    if (ctx->pc == 0x199ED4u) {
        ctx->pc = 0x199ED8u;
        goto label_199ed8;
    }
    ctx->pc = 0x199ED0u;
    {
        const bool branch_taken_0x199ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ed0) {
            ctx->pc = 0x19A2A0u;
            goto label_19a2a0;
        }
    }
    ctx->pc = 0x199ED8u;
label_199ed8:
    // 0x199ed8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x199ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199edc:
    // 0x199edc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199ee0:
    // 0x199ee0: 0xc0655a8  jal         func_1956A0
label_199ee4:
    if (ctx->pc == 0x199EE4u) {
        ctx->pc = 0x199EE4u;
            // 0x199ee4: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x199EE8u;
        goto label_199ee8;
    }
    ctx->pc = 0x199EE0u;
    SET_GPR_U32(ctx, 31, 0x199EE8u);
    ctx->pc = 0x199EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199EE0u;
            // 0x199ee4: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199EE8u; }
        if (ctx->pc != 0x199EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199EE8u; }
        if (ctx->pc != 0x199EE8u) { return; }
    }
    ctx->pc = 0x199EE8u;
label_199ee8:
    // 0x199ee8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x199ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199eec:
    // 0x199eec: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199ef0:
    // 0x199ef0: 0xc0655a8  jal         func_1956A0
label_199ef4:
    if (ctx->pc == 0x199EF4u) {
        ctx->pc = 0x199EF4u;
            // 0x199ef4: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x199EF8u;
        goto label_199ef8;
    }
    ctx->pc = 0x199EF0u;
    SET_GPR_U32(ctx, 31, 0x199EF8u);
    ctx->pc = 0x199EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199EF0u;
            // 0x199ef4: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199EF8u; }
        if (ctx->pc != 0x199EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199EF8u; }
        if (ctx->pc != 0x199EF8u) { return; }
    }
    ctx->pc = 0x199EF8u;
label_199ef8:
    // 0x199ef8: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x199ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199efc:
    // 0x199efc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_199f00:
    // 0x199f00: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199f04:
    // 0x199f04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_199f08:
    // 0x199f08: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x199f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_199f0c:
    // 0x199f0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_199f10:
    // 0x199f10: 0xc0655dc  jal         func_195770
label_199f14:
    if (ctx->pc == 0x199F14u) {
        ctx->pc = 0x199F14u;
            // 0x199f14: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x199F18u;
        goto label_199f18;
    }
    ctx->pc = 0x199F10u;
    SET_GPR_U32(ctx, 31, 0x199F18u);
    ctx->pc = 0x199F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199F10u;
            // 0x199f14: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F18u; }
        if (ctx->pc != 0x199F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F18u; }
        if (ctx->pc != 0x199F18u) { return; }
    }
    ctx->pc = 0x199F18u;
label_199f18:
    // 0x199f18: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x199f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199f1c:
    // 0x199f1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x199f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_199f20:
    // 0x199f20: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199f24:
    // 0x199f24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_199f28:
    // 0x199f28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x199f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_199f2c:
    // 0x199f2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_199f30:
    // 0x199f30: 0xc0655dc  jal         func_195770
label_199f34:
    if (ctx->pc == 0x199F34u) {
        ctx->pc = 0x199F34u;
            // 0x199f34: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x199F38u;
        goto label_199f38;
    }
    ctx->pc = 0x199F30u;
    SET_GPR_U32(ctx, 31, 0x199F38u);
    ctx->pc = 0x199F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199F30u;
            // 0x199f34: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F38u; }
        if (ctx->pc != 0x199F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F38u; }
        if (ctx->pc != 0x199F38u) { return; }
    }
    ctx->pc = 0x199F38u;
label_199f38:
    // 0x199f38: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_199f3c:
    if (ctx->pc == 0x199F3Cu) {
        ctx->pc = 0x199F40u;
        goto label_199f40;
    }
    ctx->pc = 0x199F38u;
    {
        const bool branch_taken_0x199f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f38) {
            ctx->pc = 0x19A2A0u;
            goto label_19a2a0;
        }
    }
    ctx->pc = 0x199F40u;
label_199f40:
    // 0x199f40: 0xc065d00  jal         func_197400
label_199f44:
    if (ctx->pc == 0x199F44u) {
        ctx->pc = 0x199F48u;
        goto label_199f48;
    }
    ctx->pc = 0x199F40u;
    SET_GPR_U32(ctx, 31, 0x199F48u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F48u; }
        if (ctx->pc != 0x199F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F48u; }
        if (ctx->pc != 0x199F48u) { return; }
    }
    ctx->pc = 0x199F48u;
label_199f48:
    // 0x199f48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x199f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_199f4c:
    // 0x199f4c: 0x144300d4  bne         $v0, $v1, . + 4 + (0xD4 << 2)
label_199f50:
    if (ctx->pc == 0x199F50u) {
        ctx->pc = 0x199F54u;
        goto label_199f54;
    }
    ctx->pc = 0x199F4Cu;
    {
        const bool branch_taken_0x199f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199f4c) {
            ctx->pc = 0x19A2A0u;
            goto label_19a2a0;
        }
    }
    ctx->pc = 0x199F54u;
label_199f54:
    // 0x199f54: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x199f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199f58:
    // 0x199f58: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199f5c:
    // 0x199f5c: 0xc0655a8  jal         func_1956A0
label_199f60:
    if (ctx->pc == 0x199F60u) {
        ctx->pc = 0x199F60u;
            // 0x199f60: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x199F64u;
        goto label_199f64;
    }
    ctx->pc = 0x199F5Cu;
    SET_GPR_U32(ctx, 31, 0x199F64u);
    ctx->pc = 0x199F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199F5Cu;
            // 0x199f60: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F64u; }
        if (ctx->pc != 0x199F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F64u; }
        if (ctx->pc != 0x199F64u) { return; }
    }
    ctx->pc = 0x199F64u;
label_199f64:
    // 0x199f64: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x199f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199f68:
    // 0x199f68: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199f6c:
    // 0x199f6c: 0xc0655a8  jal         func_1956A0
label_199f70:
    if (ctx->pc == 0x199F70u) {
        ctx->pc = 0x199F70u;
            // 0x199f70: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x199F74u;
        goto label_199f74;
    }
    ctx->pc = 0x199F6Cu;
    SET_GPR_U32(ctx, 31, 0x199F74u);
    ctx->pc = 0x199F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199F6Cu;
            // 0x199f70: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F74u; }
        if (ctx->pc != 0x199F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F74u; }
        if (ctx->pc != 0x199F74u) { return; }
    }
    ctx->pc = 0x199F74u;
label_199f74:
    // 0x199f74: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x199f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199f78:
    // 0x199f78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x199f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_199f7c:
    // 0x199f7c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199f80:
    // 0x199f80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_199f84:
    // 0x199f84: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x199f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_199f88:
    // 0x199f88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_199f8c:
    // 0x199f8c: 0xc0655dc  jal         func_195770
label_199f90:
    if (ctx->pc == 0x199F90u) {
        ctx->pc = 0x199F90u;
            // 0x199f90: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x199F94u;
        goto label_199f94;
    }
    ctx->pc = 0x199F8Cu;
    SET_GPR_U32(ctx, 31, 0x199F94u);
    ctx->pc = 0x199F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199F8Cu;
            // 0x199f90: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F94u; }
        if (ctx->pc != 0x199F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F94u; }
        if (ctx->pc != 0x199F94u) { return; }
    }
    ctx->pc = 0x199F94u;
label_199f94:
    // 0x199f94: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x199f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199f98:
    // 0x199f98: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x199f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_199f9c:
    // 0x199f9c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199fa0:
    // 0x199fa0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_199fa4:
    // 0x199fa4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x199fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_199fa8:
    // 0x199fa8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_199fac:
    // 0x199fac: 0xc0655dc  jal         func_195770
label_199fb0:
    if (ctx->pc == 0x199FB0u) {
        ctx->pc = 0x199FB0u;
            // 0x199fb0: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x199FB4u;
        goto label_199fb4;
    }
    ctx->pc = 0x199FACu;
    SET_GPR_U32(ctx, 31, 0x199FB4u);
    ctx->pc = 0x199FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199FACu;
            // 0x199fb0: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FB4u; }
        if (ctx->pc != 0x199FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FB4u; }
        if (ctx->pc != 0x199FB4u) { return; }
    }
    ctx->pc = 0x199FB4u;
label_199fb4:
    // 0x199fb4: 0x100000ba  b           . + 4 + (0xBA << 2)
label_199fb8:
    if (ctx->pc == 0x199FB8u) {
        ctx->pc = 0x199FBCu;
        goto label_199fbc;
    }
    ctx->pc = 0x199FB4u;
    {
        const bool branch_taken_0x199fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199fb4) {
            ctx->pc = 0x19A2A0u;
            goto label_19a2a0;
        }
    }
    ctx->pc = 0x199FBCu;
label_199fbc:
    // 0x199fbc: 0x0  nop
    ctx->pc = 0x199fbcu;
    // NOP
label_199fc0:
    // 0x199fc0: 0xc065d00  jal         func_197400
label_199fc4:
    if (ctx->pc == 0x199FC4u) {
        ctx->pc = 0x199FC8u;
        goto label_199fc8;
    }
    ctx->pc = 0x199FC0u;
    SET_GPR_U32(ctx, 31, 0x199FC8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FC8u; }
        if (ctx->pc != 0x199FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FC8u; }
        if (ctx->pc != 0x199FC8u) { return; }
    }
    ctx->pc = 0x199FC8u;
label_199fc8:
    // 0x199fc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x199fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_199fcc:
    // 0x199fcc: 0x144300b4  bne         $v0, $v1, . + 4 + (0xB4 << 2)
label_199fd0:
    if (ctx->pc == 0x199FD0u) {
        ctx->pc = 0x199FD4u;
        goto label_199fd4;
    }
    ctx->pc = 0x199FCCu;
    {
        const bool branch_taken_0x199fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199fcc) {
            ctx->pc = 0x19A2A0u;
            goto label_19a2a0;
        }
    }
    ctx->pc = 0x199FD4u;
label_199fd4:
    // 0x199fd4: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x199fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199fd8:
    // 0x199fd8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199fdc:
    // 0x199fdc: 0xc0655a8  jal         func_1956A0
label_199fe0:
    if (ctx->pc == 0x199FE0u) {
        ctx->pc = 0x199FE0u;
            // 0x199fe0: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x199FE4u;
        goto label_199fe4;
    }
    ctx->pc = 0x199FDCu;
    SET_GPR_U32(ctx, 31, 0x199FE4u);
    ctx->pc = 0x199FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199FDCu;
            // 0x199fe0: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FE4u; }
        if (ctx->pc != 0x199FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FE4u; }
        if (ctx->pc != 0x199FE4u) { return; }
    }
    ctx->pc = 0x199FE4u;
label_199fe4:
    // 0x199fe4: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x199fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199fe8:
    // 0x199fe8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_199fec:
    // 0x199fec: 0xc0655a8  jal         func_1956A0
label_199ff0:
    if (ctx->pc == 0x199FF0u) {
        ctx->pc = 0x199FF0u;
            // 0x199ff0: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x199FF4u;
        goto label_199ff4;
    }
    ctx->pc = 0x199FECu;
    SET_GPR_U32(ctx, 31, 0x199FF4u);
    ctx->pc = 0x199FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199FECu;
            // 0x199ff0: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FF4u; }
        if (ctx->pc != 0x199FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FF4u; }
        if (ctx->pc != 0x199FF4u) { return; }
    }
    ctx->pc = 0x199FF4u;
label_199ff4:
    // 0x199ff4: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x199ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_199ff8:
    // 0x199ff8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x199ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_199ffc:
    // 0x199ffc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x199ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a000:
    // 0x19a000: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19a000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a004:
    // 0x19a004: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19a004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19a008:
    // 0x19a008: 0xc0655dc  jal         func_195770
label_19a00c:
    if (ctx->pc == 0x19A00Cu) {
        ctx->pc = 0x19A00Cu;
            // 0x19a00c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19A010u;
        goto label_19a010;
    }
    ctx->pc = 0x19A008u;
    SET_GPR_U32(ctx, 31, 0x19A010u);
    ctx->pc = 0x19A00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A008u;
            // 0x19a00c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A010u; }
        if (ctx->pc != 0x19A010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A010u; }
        if (ctx->pc != 0x19A010u) { return; }
    }
    ctx->pc = 0x19A010u;
label_19a010:
    // 0x19a010: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a014:
    // 0x19a014: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x19a014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_19a018:
    // 0x19a018: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a01c:
    // 0x19a01c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19a01cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a020:
    // 0x19a020: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19a020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19a024:
    // 0x19a024: 0xc0655dc  jal         func_195770
label_19a028:
    if (ctx->pc == 0x19A028u) {
        ctx->pc = 0x19A028u;
            // 0x19a028: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19A02Cu;
        goto label_19a02c;
    }
    ctx->pc = 0x19A024u;
    SET_GPR_U32(ctx, 31, 0x19A02Cu);
    ctx->pc = 0x19A028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A024u;
            // 0x19a028: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A02Cu; }
        if (ctx->pc != 0x19A02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A02Cu; }
        if (ctx->pc != 0x19A02Cu) { return; }
    }
    ctx->pc = 0x19A02Cu;
label_19a02c:
    // 0x19a02c: 0x1000009c  b           . + 4 + (0x9C << 2)
label_19a030:
    if (ctx->pc == 0x19A030u) {
        ctx->pc = 0x19A034u;
        goto label_19a034;
    }
    ctx->pc = 0x19A02Cu;
    {
        const bool branch_taken_0x19a02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a02c) {
            ctx->pc = 0x19A2A0u;
            goto label_19a2a0;
        }
    }
    ctx->pc = 0x19A034u;
label_19a034:
    // 0x19a034: 0x0  nop
    ctx->pc = 0x19a034u;
    // NOP
label_19a038:
    // 0x19a038: 0xc065d00  jal         func_197400
label_19a03c:
    if (ctx->pc == 0x19A03Cu) {
        ctx->pc = 0x19A040u;
        goto label_19a040;
    }
    ctx->pc = 0x19A038u;
    SET_GPR_U32(ctx, 31, 0x19A040u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A040u; }
        if (ctx->pc != 0x19A040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A040u; }
        if (ctx->pc != 0x19A040u) { return; }
    }
    ctx->pc = 0x19A040u;
label_19a040:
    // 0x19a040: 0x18400097  blez        $v0, . + 4 + (0x97 << 2)
label_19a044:
    if (ctx->pc == 0x19A044u) {
        ctx->pc = 0x19A044u;
            // 0x19a044: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x19A048u;
        goto label_19a048;
    }
    ctx->pc = 0x19A040u;
    {
        const bool branch_taken_0x19a040 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19A044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A040u;
            // 0x19a044: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a040) {
            ctx->pc = 0x19A2A0u;
            goto label_19a2a0;
        }
    }
    ctx->pc = 0x19A048u;
label_19a048:
    // 0x19a048: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x19a048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19a04c:
    // 0x19a04c: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x19a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_19a050:
    // 0x19a050: 0x27b10054  addiu       $s1, $sp, 0x54
    ctx->pc = 0x19a050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_19a054:
    // 0x19a054: 0x27b00058  addiu       $s0, $sp, 0x58
    ctx->pc = 0x19a054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_19a058:
    // 0x19a058: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x19a058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19a05c:
    // 0x19a05c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x19a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_19a060:
    // 0x19a060: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x19a060u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_19a064:
    // 0x19a064: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19a064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_19a068:
    // 0x19a068: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19a068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_19a06c:
    // 0x19a06c: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x19a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_19a070:
    // 0x19a070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19a070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a074:
    // 0x19a074: 0x0  nop
    ctx->pc = 0x19a074u;
    // NOP
label_19a078:
    // 0x19a078: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19a078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19a07c:
    // 0x19a07c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x19a07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_19a080:
    // 0x19a080: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x19a080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19a084:
    // 0x19a084: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19a084u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19a088:
    // 0x19a088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a08c:
    // 0x19a08c: 0x0  nop
    ctx->pc = 0x19a08cu;
    // NOP
label_19a090:
    // 0x19a090: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19a090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19a094:
    // 0x19a094: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x19a094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_19a098:
    // 0x19a098: 0xc04b6ee  jal         func_12DBB8
label_19a09c:
    if (ctx->pc == 0x19A09Cu) {
        ctx->pc = 0x19A09Cu;
            // 0x19a09c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x19A0A0u;
        goto label_19a0a0;
    }
    ctx->pc = 0x19A098u;
    SET_GPR_U32(ctx, 31, 0x19A0A0u);
    ctx->pc = 0x19A09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A098u;
            // 0x19a09c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0A0u; }
        if (ctx->pc != 0x19A0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0A0u; }
        if (ctx->pc != 0x19A0A0u) { return; }
    }
    ctx->pc = 0x19A0A0u;
label_19a0a0:
    // 0x19a0a0: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x19a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19a0a4:
    // 0x19a0a4: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x19a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
label_19a0a8:
    // 0x19a0a8: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x19a0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a0ac:
    // 0x19a0ac: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x19a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_19a0b0:
    // 0x19a0b0: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x19a0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a0b4:
    // 0x19a0b4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x19a0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19a0b8:
    // 0x19a0b8: 0x0  nop
    ctx->pc = 0x19a0b8u;
    // NOP
label_19a0bc:
    // 0x19a0bc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x19a0bcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_19a0c0:
    // 0x19a0c0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x19a0c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_19a0c4:
    // 0x19a0c4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19a0c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_19a0c8:
    // 0x19a0c8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19a0c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19a0cc:
    // 0x19a0cc: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x19a0ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_19a0d0:
    // 0x19a0d0: 0xc05d080  jal         func_174200
label_19a0d4:
    if (ctx->pc == 0x19A0D4u) {
        ctx->pc = 0x19A0D4u;
            // 0x19a0d4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19A0D8u;
        goto label_19a0d8;
    }
    ctx->pc = 0x19A0D0u;
    SET_GPR_U32(ctx, 31, 0x19A0D8u);
    ctx->pc = 0x19A0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A0D0u;
            // 0x19a0d4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0D8u; }
        if (ctx->pc != 0x19A0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0D8u; }
        if (ctx->pc != 0x19A0D8u) { return; }
    }
    ctx->pc = 0x19A0D8u;
label_19a0d8:
    // 0x19a0d8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a0dc:
    // 0x19a0dc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a0e0:
    // 0x19a0e0: 0xc0655a8  jal         func_1956A0
label_19a0e4:
    if (ctx->pc == 0x19A0E4u) {
        ctx->pc = 0x19A0E4u;
            // 0x19a0e4: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x19A0E8u;
        goto label_19a0e8;
    }
    ctx->pc = 0x19A0E0u;
    SET_GPR_U32(ctx, 31, 0x19A0E8u);
    ctx->pc = 0x19A0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A0E0u;
            // 0x19a0e4: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0E8u; }
        if (ctx->pc != 0x19A0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0E8u; }
        if (ctx->pc != 0x19A0E8u) { return; }
    }
    ctx->pc = 0x19A0E8u;
label_19a0e8:
    // 0x19a0e8: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a0ec:
    // 0x19a0ec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x19a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_19a0f0:
    // 0x19a0f0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a0f4:
    // 0x19a0f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a0f8:
    // 0x19a0f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19a0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19a0fc:
    // 0x19a0fc: 0xc065480  jal         func_195200
label_19a100:
    if (ctx->pc == 0x19A100u) {
        ctx->pc = 0x19A100u;
            // 0x19a100: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x19A104u;
        goto label_19a104;
    }
    ctx->pc = 0x19A0FCu;
    SET_GPR_U32(ctx, 31, 0x19A104u);
    ctx->pc = 0x19A100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A0FCu;
            // 0x19a100: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A104u; }
        if (ctx->pc != 0x19A104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A104u; }
        if (ctx->pc != 0x19A104u) { return; }
    }
    ctx->pc = 0x19A104u;
label_19a104:
    // 0x19a104: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a108:
    // 0x19a108: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x19a108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_19a10c:
    // 0x19a10c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a110:
    // 0x19a110: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a114:
    // 0x19a114: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19a114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19a118:
    // 0x19a118: 0xc065480  jal         func_195200
label_19a11c:
    if (ctx->pc == 0x19A11Cu) {
        ctx->pc = 0x19A11Cu;
            // 0x19a11c: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x19A120u;
        goto label_19a120;
    }
    ctx->pc = 0x19A118u;
    SET_GPR_U32(ctx, 31, 0x19A120u);
    ctx->pc = 0x19A11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A118u;
            // 0x19a11c: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A120u; }
        if (ctx->pc != 0x19A120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A120u; }
        if (ctx->pc != 0x19A120u) { return; }
    }
    ctx->pc = 0x19A120u;
label_19a120:
    // 0x19a120: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a124:
    // 0x19a124: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x19a124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_19a128:
    // 0x19a128: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a12c:
    // 0x19a12c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a130:
    // 0x19a130: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19a130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19a134:
    // 0x19a134: 0xc065480  jal         func_195200
label_19a138:
    if (ctx->pc == 0x19A138u) {
        ctx->pc = 0x19A138u;
            // 0x19a138: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x19A13Cu;
        goto label_19a13c;
    }
    ctx->pc = 0x19A134u;
    SET_GPR_U32(ctx, 31, 0x19A13Cu);
    ctx->pc = 0x19A138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A134u;
            // 0x19a138: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A13Cu; }
        if (ctx->pc != 0x19A13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A13Cu; }
        if (ctx->pc != 0x19A13Cu) { return; }
    }
    ctx->pc = 0x19A13Cu;
label_19a13c:
    // 0x19a13c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a140:
    // 0x19a140: 0x3c0240b0  lui         $v0, 0x40B0
    ctx->pc = 0x19a140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16560 << 16));
label_19a144:
    // 0x19a144: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a148:
    // 0x19a148: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a14c:
    // 0x19a14c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19a14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19a150:
    // 0x19a150: 0xc065480  jal         func_195200
label_19a154:
    if (ctx->pc == 0x19A154u) {
        ctx->pc = 0x19A154u;
            // 0x19a154: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x19A158u;
        goto label_19a158;
    }
    ctx->pc = 0x19A150u;
    SET_GPR_U32(ctx, 31, 0x19A158u);
    ctx->pc = 0x19A154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A150u;
            // 0x19a154: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A158u; }
        if (ctx->pc != 0x19A158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A158u; }
        if (ctx->pc != 0x19A158u) { return; }
    }
    ctx->pc = 0x19A158u;
label_19a158:
    // 0x19a158: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a15c:
    // 0x19a15c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x19a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_19a160:
    // 0x19a160: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a164:
    // 0x19a164: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a168:
    // 0x19a168: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19a168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19a16c:
    // 0x19a16c: 0xc065480  jal         func_195200
label_19a170:
    if (ctx->pc == 0x19A170u) {
        ctx->pc = 0x19A170u;
            // 0x19a170: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x19A174u;
        goto label_19a174;
    }
    ctx->pc = 0x19A16Cu;
    SET_GPR_U32(ctx, 31, 0x19A174u);
    ctx->pc = 0x19A170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A16Cu;
            // 0x19a170: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A174u; }
        if (ctx->pc != 0x19A174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A174u; }
        if (ctx->pc != 0x19A174u) { return; }
    }
    ctx->pc = 0x19A174u;
label_19a174:
    // 0x19a174: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19a174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_19a178:
    // 0x19a178: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x19a178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19a17c:
    // 0x19a17c: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x19a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_19a180:
    // 0x19a180: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x19a180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19a184:
    // 0x19a184: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x19a184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_19a188:
    // 0x19a188: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x19a188u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_19a18c:
    // 0x19a18c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19a18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_19a190:
    // 0x19a190: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x19a190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_19a194:
    // 0x19a194: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x19a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_19a198:
    // 0x19a198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19a198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a19c:
    // 0x19a19c: 0x0  nop
    ctx->pc = 0x19a19cu;
    // NOP
label_19a1a0:
    // 0x19a1a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19a1a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19a1a4:
    // 0x19a1a4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x19a1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_19a1a8:
    // 0x19a1a8: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x19a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19a1ac:
    // 0x19a1ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19a1b0:
    // 0x19a1b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a1b4:
    // 0x19a1b4: 0x0  nop
    ctx->pc = 0x19a1b4u;
    // NOP
label_19a1b8:
    // 0x19a1b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19a1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19a1bc:
    // 0x19a1bc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x19a1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_19a1c0:
    // 0x19a1c0: 0xc04b6ee  jal         func_12DBB8
label_19a1c4:
    if (ctx->pc == 0x19A1C4u) {
        ctx->pc = 0x19A1C4u;
            // 0x19a1c4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x19A1C8u;
        goto label_19a1c8;
    }
    ctx->pc = 0x19A1C0u;
    SET_GPR_U32(ctx, 31, 0x19A1C8u);
    ctx->pc = 0x19A1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A1C0u;
            // 0x19a1c4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A1C8u; }
        if (ctx->pc != 0x19A1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A1C8u; }
        if (ctx->pc != 0x19A1C8u) { return; }
    }
    ctx->pc = 0x19A1C8u;
label_19a1c8:
    // 0x19a1c8: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x19a1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19a1cc:
    // 0x19a1cc: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x19a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
label_19a1d0:
    // 0x19a1d0: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x19a1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a1d4:
    // 0x19a1d4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x19a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_19a1d8:
    // 0x19a1d8: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x19a1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a1dc:
    // 0x19a1dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x19a1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19a1e0:
    // 0x19a1e0: 0x0  nop
    ctx->pc = 0x19a1e0u;
    // NOP
label_19a1e4:
    // 0x19a1e4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x19a1e4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_19a1e8:
    // 0x19a1e8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x19a1e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_19a1ec:
    // 0x19a1ec: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19a1ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_19a1f0:
    // 0x19a1f0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19a1f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19a1f4:
    // 0x19a1f4: 0x44101000  mfc1        $s0, $f2
    ctx->pc = 0x19a1f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_19a1f8:
    // 0x19a1f8: 0xc05d080  jal         func_174200
label_19a1fc:
    if (ctx->pc == 0x19A1FCu) {
        ctx->pc = 0x19A1FCu;
            // 0x19a1fc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19A200u;
        goto label_19a200;
    }
    ctx->pc = 0x19A1F8u;
    SET_GPR_U32(ctx, 31, 0x19A200u);
    ctx->pc = 0x19A1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A1F8u;
            // 0x19a1fc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A200u; }
        if (ctx->pc != 0x19A200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A200u; }
        if (ctx->pc != 0x19A200u) { return; }
    }
    ctx->pc = 0x19A200u;
label_19a200:
    // 0x19a200: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a204:
    // 0x19a204: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a208:
    // 0x19a208: 0xc0655a8  jal         func_1956A0
label_19a20c:
    if (ctx->pc == 0x19A20Cu) {
        ctx->pc = 0x19A20Cu;
            // 0x19a20c: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x19A210u;
        goto label_19a210;
    }
    ctx->pc = 0x19A208u;
    SET_GPR_U32(ctx, 31, 0x19A210u);
    ctx->pc = 0x19A20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A208u;
            // 0x19a20c: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A210u; }
        if (ctx->pc != 0x19A210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A210u; }
        if (ctx->pc != 0x19A210u) { return; }
    }
    ctx->pc = 0x19A210u;
label_19a210:
    // 0x19a210: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a214:
    // 0x19a214: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x19a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_19a218:
    // 0x19a218: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a21c:
    // 0x19a21c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a220:
    // 0x19a220: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19a220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a224:
    // 0x19a224: 0xc065480  jal         func_195200
label_19a228:
    if (ctx->pc == 0x19A228u) {
        ctx->pc = 0x19A228u;
            // 0x19a228: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x19A22Cu;
        goto label_19a22c;
    }
    ctx->pc = 0x19A224u;
    SET_GPR_U32(ctx, 31, 0x19A22Cu);
    ctx->pc = 0x19A228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A224u;
            // 0x19a228: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A22Cu; }
        if (ctx->pc != 0x19A22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A22Cu; }
        if (ctx->pc != 0x19A22Cu) { return; }
    }
    ctx->pc = 0x19A22Cu;
label_19a22c:
    // 0x19a22c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a230:
    // 0x19a230: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x19a230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_19a234:
    // 0x19a234: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a238:
    // 0x19a238: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a23c:
    // 0x19a23c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19a23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a240:
    // 0x19a240: 0xc065480  jal         func_195200
label_19a244:
    if (ctx->pc == 0x19A244u) {
        ctx->pc = 0x19A244u;
            // 0x19a244: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x19A248u;
        goto label_19a248;
    }
    ctx->pc = 0x19A240u;
    SET_GPR_U32(ctx, 31, 0x19A248u);
    ctx->pc = 0x19A244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A240u;
            // 0x19a244: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A248u; }
        if (ctx->pc != 0x19A248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A248u; }
        if (ctx->pc != 0x19A248u) { return; }
    }
    ctx->pc = 0x19A248u;
label_19a248:
    // 0x19a248: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a24c:
    // 0x19a24c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x19a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_19a250:
    // 0x19a250: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a254:
    // 0x19a254: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a258:
    // 0x19a258: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19a258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a25c:
    // 0x19a25c: 0xc065480  jal         func_195200
label_19a260:
    if (ctx->pc == 0x19A260u) {
        ctx->pc = 0x19A260u;
            // 0x19a260: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x19A264u;
        goto label_19a264;
    }
    ctx->pc = 0x19A25Cu;
    SET_GPR_U32(ctx, 31, 0x19A264u);
    ctx->pc = 0x19A260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A25Cu;
            // 0x19a260: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A264u; }
        if (ctx->pc != 0x19A264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A264u; }
        if (ctx->pc != 0x19A264u) { return; }
    }
    ctx->pc = 0x19A264u;
label_19a264:
    // 0x19a264: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a268:
    // 0x19a268: 0x3c0240b0  lui         $v0, 0x40B0
    ctx->pc = 0x19a268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16560 << 16));
label_19a26c:
    // 0x19a26c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a270:
    // 0x19a270: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a274:
    // 0x19a274: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19a274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a278:
    // 0x19a278: 0xc065480  jal         func_195200
label_19a27c:
    if (ctx->pc == 0x19A27Cu) {
        ctx->pc = 0x19A27Cu;
            // 0x19a27c: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x19A280u;
        goto label_19a280;
    }
    ctx->pc = 0x19A278u;
    SET_GPR_U32(ctx, 31, 0x19A280u);
    ctx->pc = 0x19A27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A278u;
            // 0x19a27c: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A280u; }
        if (ctx->pc != 0x19A280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A280u; }
        if (ctx->pc != 0x19A280u) { return; }
    }
    ctx->pc = 0x19A280u;
label_19a280:
    // 0x19a280: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a284:
    // 0x19a284: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x19a284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_19a288:
    // 0x19a288: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a28c:
    // 0x19a28c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a290:
    // 0x19a290: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19a290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a294:
    // 0x19a294: 0xc065480  jal         func_195200
label_19a298:
    if (ctx->pc == 0x19A298u) {
        ctx->pc = 0x19A298u;
            // 0x19a298: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x19A29Cu;
        goto label_19a29c;
    }
    ctx->pc = 0x19A294u;
    SET_GPR_U32(ctx, 31, 0x19A29Cu);
    ctx->pc = 0x19A298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A294u;
            // 0x19a298: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A29Cu; }
        if (ctx->pc != 0x19A29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A29Cu; }
        if (ctx->pc != 0x19A29Cu) { return; }
    }
    ctx->pc = 0x19A29Cu;
label_19a29c:
    // 0x19a29c: 0x0  nop
    ctx->pc = 0x19a29cu;
    // NOP
label_19a2a0:
    // 0x19a2a0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x19a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_19a2a4:
    // 0x19a2a4: 0x28620096  slti        $v0, $v1, 0x96
    ctx->pc = 0x19a2a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_19a2a8:
    // 0x19a2a8: 0x144000af  bnez        $v0, . + 4 + (0xAF << 2)
label_19a2ac:
    if (ctx->pc == 0x19A2ACu) {
        ctx->pc = 0x19A2ACu;
            // 0x19a2ac: 0x286100c9  slti        $at, $v1, 0xC9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
        ctx->pc = 0x19A2B0u;
        goto label_19a2b0;
    }
    ctx->pc = 0x19A2A8u;
    {
        const bool branch_taken_0x19a2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2A8u;
            // 0x19a2ac: 0x286100c9  slti        $at, $v1, 0xC9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2a8) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x19A2B0u;
label_19a2b0:
    // 0x19a2b0: 0x102000ad  beqz        $at, . + 4 + (0xAD << 2)
label_19a2b4:
    if (ctx->pc == 0x19A2B4u) {
        ctx->pc = 0x19A2B4u;
            // 0x19a2b4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x19A2B8u;
        goto label_19a2b8;
    }
    ctx->pc = 0x19A2B0u;
    {
        const bool branch_taken_0x19a2b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2B0u;
            // 0x19a2b4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2b0) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x19A2B8u;
label_19a2b8:
    // 0x19a2b8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19a2b8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19a2bc:
    // 0x19a2bc: 0x0  nop
    ctx->pc = 0x19a2bcu;
    // NOP
label_19a2c0:
    // 0x19a2c0: 0x0  nop
    ctx->pc = 0x19a2c0u;
    // NOP
label_19a2c4:
    // 0x19a2c4: 0x1010  mfhi        $v0
    ctx->pc = 0x19a2c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19a2c8:
    // 0x19a2c8: 0x144000a7  bnez        $v0, . + 4 + (0xA7 << 2)
label_19a2cc:
    if (ctx->pc == 0x19A2CCu) {
        ctx->pc = 0x19A2D0u;
        goto label_19a2d0;
    }
    ctx->pc = 0x19A2C8u;
    {
        const bool branch_taken_0x19a2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a2c8) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x19A2D0u;
label_19a2d0:
    // 0x19a2d0: 0xc065d00  jal         func_197400
label_19a2d4:
    if (ctx->pc == 0x19A2D4u) {
        ctx->pc = 0x19A2D8u;
        goto label_19a2d8;
    }
    ctx->pc = 0x19A2D0u;
    SET_GPR_U32(ctx, 31, 0x19A2D8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2D8u; }
        if (ctx->pc != 0x19A2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2D8u; }
        if (ctx->pc != 0x19A2D8u) { return; }
    }
    ctx->pc = 0x19A2D8u;
label_19a2d8:
    // 0x19a2d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19a2dc:
    // 0x19a2dc: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_19a2e0:
    if (ctx->pc == 0x19A2E0u) {
        ctx->pc = 0x19A2E4u;
        goto label_19a2e4;
    }
    ctx->pc = 0x19A2DCu;
    {
        const bool branch_taken_0x19a2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19a2dc) {
            ctx->pc = 0x19A358u;
            goto label_19a358;
        }
    }
    ctx->pc = 0x19A2E4u;
label_19a2e4:
    // 0x19a2e4: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x19a2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a2e8:
    // 0x19a2e8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x19a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_19a2ec:
    // 0x19a2ec: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x19a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a2f0:
    // 0x19a2f0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19a2f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19a2f4:
    // 0x19a2f4: 0xc05d080  jal         func_174200
label_19a2f8:
    if (ctx->pc == 0x19A2F8u) {
        ctx->pc = 0x19A2F8u;
            // 0x19a2f8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19A2FCu;
        goto label_19a2fc;
    }
    ctx->pc = 0x19A2F4u;
    SET_GPR_U32(ctx, 31, 0x19A2FCu);
    ctx->pc = 0x19A2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2F4u;
            // 0x19a2f8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2FCu; }
        if (ctx->pc != 0x19A2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2FCu; }
        if (ctx->pc != 0x19A2FCu) { return; }
    }
    ctx->pc = 0x19A2FCu;
label_19a2fc:
    // 0x19a2fc: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a300:
    // 0x19a300: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a304:
    // 0x19a304: 0xc0655a8  jal         func_1956A0
label_19a308:
    if (ctx->pc == 0x19A308u) {
        ctx->pc = 0x19A308u;
            // 0x19a308: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x19A30Cu;
        goto label_19a30c;
    }
    ctx->pc = 0x19A304u;
    SET_GPR_U32(ctx, 31, 0x19A30Cu);
    ctx->pc = 0x19A308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A304u;
            // 0x19a308: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A30Cu; }
        if (ctx->pc != 0x19A30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A30Cu; }
        if (ctx->pc != 0x19A30Cu) { return; }
    }
    ctx->pc = 0x19A30Cu;
label_19a30c:
    // 0x19a30c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a310:
    // 0x19a310: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x19a310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_19a314:
    // 0x19a314: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a318:
    // 0x19a318: 0x2464fff8  addiu       $a0, $v1, -0x8
    ctx->pc = 0x19a318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_19a31c:
    // 0x19a31c: 0xc065508  jal         func_195420
label_19a320:
    if (ctx->pc == 0x19A320u) {
        ctx->pc = 0x19A320u;
            // 0x19a320: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x19A324u;
        goto label_19a324;
    }
    ctx->pc = 0x19A31Cu;
    SET_GPR_U32(ctx, 31, 0x19A324u);
    ctx->pc = 0x19A320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A31Cu;
            // 0x19a320: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A324u; }
        if (ctx->pc != 0x19A324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A324u; }
        if (ctx->pc != 0x19A324u) { return; }
    }
    ctx->pc = 0x19A324u;
label_19a324:
    // 0x19a324: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a328:
    // 0x19a328: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a32c:
    // 0x19a32c: 0xc0655a8  jal         func_1956A0
label_19a330:
    if (ctx->pc == 0x19A330u) {
        ctx->pc = 0x19A330u;
            // 0x19a330: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x19A334u;
        goto label_19a334;
    }
    ctx->pc = 0x19A32Cu;
    SET_GPR_U32(ctx, 31, 0x19A334u);
    ctx->pc = 0x19A330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A32Cu;
            // 0x19a330: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A334u; }
        if (ctx->pc != 0x19A334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A334u; }
        if (ctx->pc != 0x19A334u) { return; }
    }
    ctx->pc = 0x19A334u;
label_19a334:
    // 0x19a334: 0x8e630118  lw          $v1, 0x118($s3)
    ctx->pc = 0x19a334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_19a338:
    // 0x19a338: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x19a338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_19a33c:
    // 0x19a33c: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x19a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a340:
    // 0x19a340: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a344:
    // 0x19a344: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19a344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19a348:
    // 0x19a348: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x19a348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_19a34c:
    // 0x19a34c: 0xc065508  jal         func_195420
label_19a350:
    if (ctx->pc == 0x19A350u) {
        ctx->pc = 0x19A350u;
            // 0x19a350: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x19A354u;
        goto label_19a354;
    }
    ctx->pc = 0x19A34Cu;
    SET_GPR_U32(ctx, 31, 0x19A354u);
    ctx->pc = 0x19A350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A34Cu;
            // 0x19a350: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A354u; }
        if (ctx->pc != 0x19A354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A354u; }
        if (ctx->pc != 0x19A354u) { return; }
    }
    ctx->pc = 0x19A354u;
label_19a354:
    // 0x19a354: 0x0  nop
    ctx->pc = 0x19a354u;
    // NOP
label_19a358:
    // 0x19a358: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x19a358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_19a35c:
    // 0x19a35c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19a360:
    // 0x19a360: 0x10000081  b           . + 4 + (0x81 << 2)
label_19a364:
    if (ctx->pc == 0x19A364u) {
        ctx->pc = 0x19A364u;
            // 0x19a364: 0xae620118  sw          $v0, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 2));
        ctx->pc = 0x19A368u;
        goto label_19a368;
    }
    ctx->pc = 0x19A360u;
    {
        const bool branch_taken_0x19a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A360u;
            // 0x19a364: 0xae620118  sw          $v0, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a360) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x19A368u;
label_19a368:
    // 0x19a368: 0x28610105  slti        $at, $v1, 0x105
    ctx->pc = 0x19a368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)261) ? 1 : 0);
label_19a36c:
    // 0x19a36c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_19a370:
    if (ctx->pc == 0x19A370u) {
        ctx->pc = 0x19A370u;
            // 0x19a370: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x19A374u;
        goto label_19a374;
    }
    ctx->pc = 0x19A36Cu;
    {
        const bool branch_taken_0x19a36c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A36Cu;
            // 0x19a370: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a36c) {
            ctx->pc = 0x19A3B0u;
            goto label_19a3b0;
        }
    }
    ctx->pc = 0x19A374u;
label_19a374:
    // 0x19a374: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19a374u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19a378:
    // 0x19a378: 0xae6200d4  sw          $v0, 0xD4($s3)
    ctx->pc = 0x19a378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 2));
label_19a37c:
    // 0x19a37c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a380:
    // 0x19a380: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x19a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a384:
    // 0x19a384: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x19a384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_19a388:
    // 0x19a388: 0xc065590  jal         func_195640
label_19a38c:
    if (ctx->pc == 0x19A38Cu) {
        ctx->pc = 0x19A38Cu;
            // 0x19a38c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19A390u;
        goto label_19a390;
    }
    ctx->pc = 0x19A388u;
    SET_GPR_U32(ctx, 31, 0x19A390u);
    ctx->pc = 0x19A38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A388u;
            // 0x19a38c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A390u; }
        if (ctx->pc != 0x19A390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A390u; }
        if (ctx->pc != 0x19A390u) { return; }
    }
    ctx->pc = 0x19A390u;
label_19a390:
    // 0x19a390: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a394:
    // 0x19a394: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x19a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a398:
    // 0x19a398: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x19a398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_19a39c:
    // 0x19a39c: 0xc065590  jal         func_195640
label_19a3a0:
    if (ctx->pc == 0x19A3A0u) {
        ctx->pc = 0x19A3A0u;
            // 0x19a3a0: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x19A3A4u;
        goto label_19a3a4;
    }
    ctx->pc = 0x19A39Cu;
    SET_GPR_U32(ctx, 31, 0x19A3A4u);
    ctx->pc = 0x19A3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A39Cu;
            // 0x19a3a0: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3A4u; }
        if (ctx->pc != 0x19A3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3A4u; }
        if (ctx->pc != 0x19A3A4u) { return; }
    }
    ctx->pc = 0x19A3A4u;
label_19a3a4:
    // 0x19a3a4: 0x10000070  b           . + 4 + (0x70 << 2)
label_19a3a8:
    if (ctx->pc == 0x19A3A8u) {
        ctx->pc = 0x19A3ACu;
        goto label_19a3ac;
    }
    ctx->pc = 0x19A3A4u;
    {
        const bool branch_taken_0x19a3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a3a4) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x19A3ACu;
label_19a3ac:
    // 0x19a3ac: 0x0  nop
    ctx->pc = 0x19a3acu;
    // NOP
label_19a3b0:
    // 0x19a3b0: 0x3c023f82  lui         $v0, 0x3F82
    ctx->pc = 0x19a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16258 << 16));
label_19a3b4:
    // 0x19a3b4: 0xc66000d4  lwc1        $f0, 0xD4($s3)
    ctx->pc = 0x19a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a3b8:
    // 0x19a3b8: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x19a3b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36700u)));
label_19a3bc:
    // 0x19a3bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a3c0:
    // 0x19a3c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19a3c4:
    // 0x19a3c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19a3c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19a3c8:
    // 0x19a3c8: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x19a3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_19a3cc:
    // 0x19a3cc: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x19a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_19a3d0:
    // 0x19a3d0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19a3d0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19a3d4:
    // 0x19a3d4: 0x0  nop
    ctx->pc = 0x19a3d4u;
    // NOP
label_19a3d8:
    // 0x19a3d8: 0x0  nop
    ctx->pc = 0x19a3d8u;
    // NOP
label_19a3dc:
    // 0x19a3dc: 0x1010  mfhi        $v0
    ctx->pc = 0x19a3dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19a3e0:
    // 0x19a3e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_19a3e4:
    if (ctx->pc == 0x19A3E4u) {
        ctx->pc = 0x19A3E8u;
        goto label_19a3e8;
    }
    ctx->pc = 0x19A3E0u;
    {
        const bool branch_taken_0x19a3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a3e0) {
            ctx->pc = 0x19A408u;
            goto label_19a408;
        }
    }
    ctx->pc = 0x19A3E8u;
label_19a3e8:
    // 0x19a3e8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a3ec:
    // 0x19a3ec: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a3f0:
    // 0x19a3f0: 0xc0655a0  jal         func_195680
label_19a3f4:
    if (ctx->pc == 0x19A3F4u) {
        ctx->pc = 0x19A3F4u;
            // 0x19a3f4: 0x24440019  addiu       $a0, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x19A3F8u;
        goto label_19a3f8;
    }
    ctx->pc = 0x19A3F0u;
    SET_GPR_U32(ctx, 31, 0x19A3F8u);
    ctx->pc = 0x19A3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A3F0u;
            // 0x19a3f4: 0x24440019  addiu       $a0, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3F8u; }
        if (ctx->pc != 0x19A3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3F8u; }
        if (ctx->pc != 0x19A3F8u) { return; }
    }
    ctx->pc = 0x19A3F8u;
label_19a3f8:
    // 0x19a3f8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a3fc:
    // 0x19a3fc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a400:
    // 0x19a400: 0xc0655a0  jal         func_195680
label_19a404:
    if (ctx->pc == 0x19A404u) {
        ctx->pc = 0x19A404u;
            // 0x19a404: 0x2444ffe7  addiu       $a0, $v0, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
        ctx->pc = 0x19A408u;
        goto label_19a408;
    }
    ctx->pc = 0x19A400u;
    SET_GPR_U32(ctx, 31, 0x19A408u);
    ctx->pc = 0x19A404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A400u;
            // 0x19a404: 0x2444ffe7  addiu       $a0, $v0, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A408u; }
        if (ctx->pc != 0x19A408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A408u; }
        if (ctx->pc != 0x19A408u) { return; }
    }
    ctx->pc = 0x19A408u;
label_19a408:
    // 0x19a408: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x19a408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_19a40c:
    // 0x19a40c: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x19a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_19a410:
    // 0x19a410: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_19a414:
    if (ctx->pc == 0x19A414u) {
        ctx->pc = 0x19A414u;
            // 0x19a414: 0x240201d6  addiu       $v0, $zero, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
        ctx->pc = 0x19A418u;
        goto label_19a418;
    }
    ctx->pc = 0x19A410u;
    {
        const bool branch_taken_0x19a410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A410u;
            // 0x19a414: 0x240201d6  addiu       $v0, $zero, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a410) {
            ctx->pc = 0x19A508u;
            goto label_19a508;
        }
    }
    ctx->pc = 0x19A418u;
label_19a418:
    // 0x19a418: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_19a41c:
    if (ctx->pc == 0x19A41Cu) {
        ctx->pc = 0x19A420u;
        goto label_19a420;
    }
    ctx->pc = 0x19A418u;
    {
        const bool branch_taken_0x19a418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19a418) {
            ctx->pc = 0x19A4A0u;
            goto label_19a4a0;
        }
    }
    ctx->pc = 0x19A420u;
label_19a420:
    // 0x19a420: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x19a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_19a424:
    // 0x19a424: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_19a428:
    if (ctx->pc == 0x19A428u) {
        ctx->pc = 0x19A42Cu;
        goto label_19a42c;
    }
    ctx->pc = 0x19A424u;
    {
        const bool branch_taken_0x19a424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19a424) {
            ctx->pc = 0x19A438u;
            goto label_19a438;
        }
    }
    ctx->pc = 0x19A42Cu;
label_19a42c:
    // 0x19a42c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_19a430:
    if (ctx->pc == 0x19A430u) {
        ctx->pc = 0x19A434u;
        goto label_19a434;
    }
    ctx->pc = 0x19A42Cu;
    {
        const bool branch_taken_0x19a42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a42c) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x19A434u;
label_19a434:
    // 0x19a434: 0x0  nop
    ctx->pc = 0x19a434u;
    // NOP
label_19a438:
    // 0x19a438: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a43c:
    // 0x19a43c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a440:
    // 0x19a440: 0xc0655a8  jal         func_1956A0
label_19a444:
    if (ctx->pc == 0x19A444u) {
        ctx->pc = 0x19A444u;
            // 0x19a444: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x19A448u;
        goto label_19a448;
    }
    ctx->pc = 0x19A440u;
    SET_GPR_U32(ctx, 31, 0x19A448u);
    ctx->pc = 0x19A444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A440u;
            // 0x19a444: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A448u; }
        if (ctx->pc != 0x19A448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A448u; }
        if (ctx->pc != 0x19A448u) { return; }
    }
    ctx->pc = 0x19A448u;
label_19a448:
    // 0x19a448: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a44c:
    // 0x19a44c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a450:
    // 0x19a450: 0xc0655a8  jal         func_1956A0
label_19a454:
    if (ctx->pc == 0x19A454u) {
        ctx->pc = 0x19A454u;
            // 0x19a454: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x19A458u;
        goto label_19a458;
    }
    ctx->pc = 0x19A450u;
    SET_GPR_U32(ctx, 31, 0x19A458u);
    ctx->pc = 0x19A454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A450u;
            // 0x19a454: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A458u; }
        if (ctx->pc != 0x19A458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A458u; }
        if (ctx->pc != 0x19A458u) { return; }
    }
    ctx->pc = 0x19A458u;
label_19a458:
    // 0x19a458: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a45c:
    // 0x19a45c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_19a460:
    // 0x19a460: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a464:
    // 0x19a464: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a468:
    // 0x19a468: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19a468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19a46c:
    // 0x19a46c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19a46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19a470:
    // 0x19a470: 0xc0655dc  jal         func_195770
label_19a474:
    if (ctx->pc == 0x19A474u) {
        ctx->pc = 0x19A474u;
            // 0x19a474: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19A478u;
        goto label_19a478;
    }
    ctx->pc = 0x19A470u;
    SET_GPR_U32(ctx, 31, 0x19A478u);
    ctx->pc = 0x19A474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A470u;
            // 0x19a474: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A478u; }
        if (ctx->pc != 0x19A478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A478u; }
        if (ctx->pc != 0x19A478u) { return; }
    }
    ctx->pc = 0x19A478u;
label_19a478:
    // 0x19a478: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a47c:
    // 0x19a47c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x19a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_19a480:
    // 0x19a480: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a484:
    // 0x19a484: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a488:
    // 0x19a488: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19a488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19a48c:
    // 0x19a48c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19a48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19a490:
    // 0x19a490: 0xc0655dc  jal         func_195770
label_19a494:
    if (ctx->pc == 0x19A494u) {
        ctx->pc = 0x19A494u;
            // 0x19a494: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19A498u;
        goto label_19a498;
    }
    ctx->pc = 0x19A490u;
    SET_GPR_U32(ctx, 31, 0x19A498u);
    ctx->pc = 0x19A494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A490u;
            // 0x19a494: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A498u; }
        if (ctx->pc != 0x19A498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A498u; }
        if (ctx->pc != 0x19A498u) { return; }
    }
    ctx->pc = 0x19A498u;
label_19a498:
    // 0x19a498: 0x10000033  b           . + 4 + (0x33 << 2)
label_19a49c:
    if (ctx->pc == 0x19A49Cu) {
        ctx->pc = 0x19A4A0u;
        goto label_19a4a0;
    }
    ctx->pc = 0x19A498u;
    {
        const bool branch_taken_0x19a498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a498) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x19A4A0u;
label_19a4a0:
    // 0x19a4a0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a4a4:
    // 0x19a4a4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a4a8:
    // 0x19a4a8: 0xc0655a8  jal         func_1956A0
label_19a4ac:
    if (ctx->pc == 0x19A4ACu) {
        ctx->pc = 0x19A4ACu;
            // 0x19a4ac: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x19A4B0u;
        goto label_19a4b0;
    }
    ctx->pc = 0x19A4A8u;
    SET_GPR_U32(ctx, 31, 0x19A4B0u);
    ctx->pc = 0x19A4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A4A8u;
            // 0x19a4ac: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A4B0u; }
        if (ctx->pc != 0x19A4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A4B0u; }
        if (ctx->pc != 0x19A4B0u) { return; }
    }
    ctx->pc = 0x19A4B0u;
label_19a4b0:
    // 0x19a4b0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a4b4:
    // 0x19a4b4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a4b8:
    // 0x19a4b8: 0xc0655a8  jal         func_1956A0
label_19a4bc:
    if (ctx->pc == 0x19A4BCu) {
        ctx->pc = 0x19A4BCu;
            // 0x19a4bc: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x19A4C0u;
        goto label_19a4c0;
    }
    ctx->pc = 0x19A4B8u;
    SET_GPR_U32(ctx, 31, 0x19A4C0u);
    ctx->pc = 0x19A4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A4B8u;
            // 0x19a4bc: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A4C0u; }
        if (ctx->pc != 0x19A4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A4C0u; }
        if (ctx->pc != 0x19A4C0u) { return; }
    }
    ctx->pc = 0x19A4C0u;
label_19a4c0:
    // 0x19a4c0: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a4c4:
    // 0x19a4c4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x19a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_19a4c8:
    // 0x19a4c8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a4cc:
    // 0x19a4cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a4d0:
    // 0x19a4d0: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x19a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_19a4d4:
    // 0x19a4d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19a4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19a4d8:
    // 0x19a4d8: 0xc0655dc  jal         func_195770
label_19a4dc:
    if (ctx->pc == 0x19A4DCu) {
        ctx->pc = 0x19A4DCu;
            // 0x19a4dc: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19A4E0u;
        goto label_19a4e0;
    }
    ctx->pc = 0x19A4D8u;
    SET_GPR_U32(ctx, 31, 0x19A4E0u);
    ctx->pc = 0x19A4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A4D8u;
            // 0x19a4dc: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A4E0u; }
        if (ctx->pc != 0x19A4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A4E0u; }
        if (ctx->pc != 0x19A4E0u) { return; }
    }
    ctx->pc = 0x19A4E0u;
label_19a4e0:
    // 0x19a4e0: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a4e4:
    // 0x19a4e4: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x19a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_19a4e8:
    // 0x19a4e8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a4ec:
    // 0x19a4ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a4f0:
    // 0x19a4f0: 0x0  nop
    ctx->pc = 0x19a4f0u;
    // NOP
label_19a4f4:
    // 0x19a4f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19a4f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19a4f8:
    // 0x19a4f8: 0xc0655dc  jal         func_195770
label_19a4fc:
    if (ctx->pc == 0x19A4FCu) {
        ctx->pc = 0x19A4FCu;
            // 0x19a4fc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19A500u;
        goto label_19a500;
    }
    ctx->pc = 0x19A4F8u;
    SET_GPR_U32(ctx, 31, 0x19A500u);
    ctx->pc = 0x19A4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A4F8u;
            // 0x19a4fc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A500u; }
        if (ctx->pc != 0x19A500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A500u; }
        if (ctx->pc != 0x19A500u) { return; }
    }
    ctx->pc = 0x19A500u;
label_19a500:
    // 0x19a500: 0x10000019  b           . + 4 + (0x19 << 2)
label_19a504:
    if (ctx->pc == 0x19A504u) {
        ctx->pc = 0x19A508u;
        goto label_19a508;
    }
    ctx->pc = 0x19A500u;
    {
        const bool branch_taken_0x19a500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a500) {
            ctx->pc = 0x19A568u;
            goto label_19a568;
        }
    }
    ctx->pc = 0x19A508u;
label_19a508:
    // 0x19a508: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a50c:
    // 0x19a50c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a510:
    // 0x19a510: 0xc0655a8  jal         func_1956A0
label_19a514:
    if (ctx->pc == 0x19A514u) {
        ctx->pc = 0x19A514u;
            // 0x19a514: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x19A518u;
        goto label_19a518;
    }
    ctx->pc = 0x19A510u;
    SET_GPR_U32(ctx, 31, 0x19A518u);
    ctx->pc = 0x19A514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A510u;
            // 0x19a514: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A518u; }
        if (ctx->pc != 0x19A518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A518u; }
        if (ctx->pc != 0x19A518u) { return; }
    }
    ctx->pc = 0x19A518u;
label_19a518:
    // 0x19a518: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a51c:
    // 0x19a51c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a520:
    // 0x19a520: 0xc0655a8  jal         func_1956A0
label_19a524:
    if (ctx->pc == 0x19A524u) {
        ctx->pc = 0x19A524u;
            // 0x19a524: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x19A528u;
        goto label_19a528;
    }
    ctx->pc = 0x19A520u;
    SET_GPR_U32(ctx, 31, 0x19A528u);
    ctx->pc = 0x19A524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A520u;
            // 0x19a524: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A528u; }
        if (ctx->pc != 0x19A528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A528u; }
        if (ctx->pc != 0x19A528u) { return; }
    }
    ctx->pc = 0x19A528u;
label_19a528:
    // 0x19a528: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a52c:
    // 0x19a52c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19a530:
    // 0x19a530: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a534:
    // 0x19a534: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a538:
    // 0x19a538: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x19a538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_19a53c:
    // 0x19a53c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19a53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19a540:
    // 0x19a540: 0xc0655dc  jal         func_195770
label_19a544:
    if (ctx->pc == 0x19A544u) {
        ctx->pc = 0x19A544u;
            // 0x19a544: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19A548u;
        goto label_19a548;
    }
    ctx->pc = 0x19A540u;
    SET_GPR_U32(ctx, 31, 0x19A548u);
    ctx->pc = 0x19A544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A540u;
            // 0x19a544: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A548u; }
        if (ctx->pc != 0x19A548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A548u; }
        if (ctx->pc != 0x19A548u) { return; }
    }
    ctx->pc = 0x19A548u;
label_19a548:
    // 0x19a548: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19a548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a54c:
    // 0x19a54c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19a550:
    // 0x19a550: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x19a550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a554:
    // 0x19a554: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a558:
    // 0x19a558: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x19a558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_19a55c:
    // 0x19a55c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19a55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19a560:
    // 0x19a560: 0xc0655dc  jal         func_195770
label_19a564:
    if (ctx->pc == 0x19A564u) {
        ctx->pc = 0x19A564u;
            // 0x19a564: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19A568u;
        goto label_19a568;
    }
    ctx->pc = 0x19A560u;
    SET_GPR_U32(ctx, 31, 0x19A568u);
    ctx->pc = 0x19A564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A560u;
            // 0x19a564: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A568u; }
        if (ctx->pc != 0x19A568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A568u; }
        if (ctx->pc != 0x19A568u) { return; }
    }
    ctx->pc = 0x19A568u;
label_19a568:
    // 0x19a568: 0xc04b788  jal         func_12DE20
label_19a56c:
    if (ctx->pc == 0x19A56Cu) {
        ctx->pc = 0x19A56Cu;
            // 0x19a56c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x19A570u;
        goto label_19a570;
    }
    ctx->pc = 0x19A568u;
    SET_GPR_U32(ctx, 31, 0x19A570u);
    ctx->pc = 0x19A56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A568u;
            // 0x19a56c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A570u; }
        if (ctx->pc != 0x19A570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A570u; }
        if (ctx->pc != 0x19A570u) { return; }
    }
    ctx->pc = 0x19A570u;
label_19a570:
    // 0x19a570: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x19a570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_19a574:
    // 0x19a574: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x19a574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19a578:
    // 0x19a578: 0xc04b7da  jal         func_12DF68
label_19a57c:
    if (ctx->pc == 0x19A57Cu) {
        ctx->pc = 0x19A57Cu;
            // 0x19a57c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19A580u;
        goto label_19a580;
    }
    ctx->pc = 0x19A578u;
    SET_GPR_U32(ctx, 31, 0x19A580u);
    ctx->pc = 0x19A57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A578u;
            // 0x19a57c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A580u; }
        if (ctx->pc != 0x19A580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A580u; }
        if (ctx->pc != 0x19A580u) { return; }
    }
    ctx->pc = 0x19A580u;
label_19a580:
    // 0x19a580: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x19a580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_19a584:
    // 0x19a584: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x19a584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19a588:
    // 0x19a588: 0xc04b804  jal         func_12E010
label_19a58c:
    if (ctx->pc == 0x19A58Cu) {
        ctx->pc = 0x19A58Cu;
            // 0x19a58c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19A590u;
        goto label_19a590;
    }
    ctx->pc = 0x19A588u;
    SET_GPR_U32(ctx, 31, 0x19A590u);
    ctx->pc = 0x19A58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A588u;
            // 0x19a58c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A590u; }
        if (ctx->pc != 0x19A590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A590u; }
        if (ctx->pc != 0x19A590u) { return; }
    }
    ctx->pc = 0x19A590u;
label_19a590:
    // 0x19a590: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x19a590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_19a594:
    // 0x19a594: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x19a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19a598:
    // 0x19a598: 0xc04b7b0  jal         func_12DEC0
label_19a59c:
    if (ctx->pc == 0x19A59Cu) {
        ctx->pc = 0x19A59Cu;
            // 0x19a59c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19A5A0u;
        goto label_19a5a0;
    }
    ctx->pc = 0x19A598u;
    SET_GPR_U32(ctx, 31, 0x19A5A0u);
    ctx->pc = 0x19A59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A598u;
            // 0x19a59c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5A0u; }
        if (ctx->pc != 0x19A5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5A0u; }
        if (ctx->pc != 0x19A5A0u) { return; }
    }
    ctx->pc = 0x19A5A0u;
label_19a5a0:
    // 0x19a5a0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x19a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_19a5a4:
    // 0x19a5a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19a5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a5a8:
    // 0x19a5a8: 0xc04b75e  jal         func_12DD78
label_19a5ac:
    if (ctx->pc == 0x19A5ACu) {
        ctx->pc = 0x19A5ACu;
            // 0x19a5ac: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x19A5B0u;
        goto label_19a5b0;
    }
    ctx->pc = 0x19A5A8u;
    SET_GPR_U32(ctx, 31, 0x19A5B0u);
    ctx->pc = 0x19A5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5A8u;
            // 0x19a5ac: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5B0u; }
        if (ctx->pc != 0x19A5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5B0u; }
        if (ctx->pc != 0x19A5B0u) { return; }
    }
    ctx->pc = 0x19A5B0u;
label_19a5b0:
    // 0x19a5b0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x19a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_19a5b4:
    // 0x19a5b4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x19a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_19a5b8:
    // 0x19a5b8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19a5b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19a5bc:
    // 0x19a5bc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_19a5c0:
    if (ctx->pc == 0x19A5C0u) {
        ctx->pc = 0x19A5C4u;
        goto label_19a5c4;
    }
    ctx->pc = 0x19A5BCu;
    {
        const bool branch_taken_0x19a5bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a5bc) {
            ctx->pc = 0x19A610u;
            goto label_19a610;
        }
    }
    ctx->pc = 0x19A5C4u;
label_19a5c4:
    // 0x19a5c4: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x19a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_19a5c8:
    // 0x19a5c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19a5cc:
    if (ctx->pc == 0x19A5CCu) {
        ctx->pc = 0x19A5D0u;
        goto label_19a5d0;
    }
    ctx->pc = 0x19A5C8u;
    {
        const bool branch_taken_0x19a5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a5c8) {
            ctx->pc = 0x19A5E0u;
            goto label_19a5e0;
        }
    }
    ctx->pc = 0x19A5D0u;
label_19a5d0:
    // 0x19a5d0: 0xc0604f0  jal         func_1813C0
label_19a5d4:
    if (ctx->pc == 0x19A5D4u) {
        ctx->pc = 0x19A5D4u;
            // 0x19a5d4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x19A5D8u;
        goto label_19a5d8;
    }
    ctx->pc = 0x19A5D0u;
    SET_GPR_U32(ctx, 31, 0x19A5D8u);
    ctx->pc = 0x19A5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5D0u;
            // 0x19a5d4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5D8u; }
        if (ctx->pc != 0x19A5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5D8u; }
        if (ctx->pc != 0x19A5D8u) { return; }
    }
    ctx->pc = 0x19A5D8u;
label_19a5d8:
    // 0x19a5d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_19a5dc:
    if (ctx->pc == 0x19A5DCu) {
        ctx->pc = 0x19A5E0u;
        goto label_19a5e0;
    }
    ctx->pc = 0x19A5D8u;
    {
        const bool branch_taken_0x19a5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a5d8) {
            ctx->pc = 0x19A5E8u;
            goto label_19a5e8;
        }
    }
    ctx->pc = 0x19A5E0u;
label_19a5e0:
    // 0x19a5e0: 0xc0604dc  jal         func_181370
label_19a5e4:
    if (ctx->pc == 0x19A5E4u) {
        ctx->pc = 0x19A5E4u;
            // 0x19a5e4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x19A5E8u;
        goto label_19a5e8;
    }
    ctx->pc = 0x19A5E0u;
    SET_GPR_U32(ctx, 31, 0x19A5E8u);
    ctx->pc = 0x19A5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5E0u;
            // 0x19a5e4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5E8u; }
        if (ctx->pc != 0x19A5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5E8u; }
        if (ctx->pc != 0x19A5E8u) { return; }
    }
    ctx->pc = 0x19A5E8u;
label_19a5e8:
    // 0x19a5e8: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x19a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_19a5ec:
    // 0x19a5ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19a5f0:
    if (ctx->pc == 0x19A5F0u) {
        ctx->pc = 0x19A5F4u;
        goto label_19a5f4;
    }
    ctx->pc = 0x19A5ECu;
    {
        const bool branch_taken_0x19a5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a5ec) {
            ctx->pc = 0x19A600u;
            goto label_19a600;
        }
    }
    ctx->pc = 0x19A5F4u;
label_19a5f4:
    // 0x19a5f4: 0x10000022  b           . + 4 + (0x22 << 2)
label_19a5f8:
    if (ctx->pc == 0x19A5F8u) {
        ctx->pc = 0x19A5F8u;
            // 0x19a5f8: 0xae60010c  sw          $zero, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x19A5FCu;
        goto label_19a5fc;
    }
    ctx->pc = 0x19A5F4u;
    {
        const bool branch_taken_0x19a5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5F4u;
            // 0x19a5f8: 0xae60010c  sw          $zero, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a5f4) {
            ctx->pc = 0x19A680u;
            goto label_19a680;
        }
    }
    ctx->pc = 0x19A5FCu;
label_19a5fc:
    // 0x19a5fc: 0x0  nop
    ctx->pc = 0x19a5fcu;
    // NOP
label_19a600:
    // 0x19a600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a604:
    // 0x19a604: 0x1000001e  b           . + 4 + (0x1E << 2)
label_19a608:
    if (ctx->pc == 0x19A608u) {
        ctx->pc = 0x19A608u;
            // 0x19a608: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x19A60Cu;
        goto label_19a60c;
    }
    ctx->pc = 0x19A604u;
    {
        const bool branch_taken_0x19a604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A604u;
            // 0x19a608: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a604) {
            ctx->pc = 0x19A680u;
            goto label_19a680;
        }
    }
    ctx->pc = 0x19A60Cu;
label_19a60c:
    // 0x19a60c: 0x0  nop
    ctx->pc = 0x19a60cu;
    // NOP
label_19a610:
    // 0x19a610: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x19a610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
label_19a614:
    // 0x19a614: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_19a618:
    if (ctx->pc == 0x19A618u) {
        ctx->pc = 0x19A61Cu;
        goto label_19a61c;
    }
    ctx->pc = 0x19A614u;
    {
        const bool branch_taken_0x19a614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a614) {
            ctx->pc = 0x19A670u;
            goto label_19a670;
        }
    }
    ctx->pc = 0x19A61Cu;
label_19a61c:
    // 0x19a61c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x19a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_19a620:
    // 0x19a620: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x19a620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_19a624:
    // 0x19a624: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19a624u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19a628:
    // 0x19a628: 0x0  nop
    ctx->pc = 0x19a628u;
    // NOP
label_19a62c:
    // 0x19a62c: 0x0  nop
    ctx->pc = 0x19a62cu;
    // NOP
label_19a630:
    // 0x19a630: 0x1010  mfhi        $v0
    ctx->pc = 0x19a630u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19a634:
    // 0x19a634: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_19a638:
    if (ctx->pc == 0x19A638u) {
        ctx->pc = 0x19A63Cu;
        goto label_19a63c;
    }
    ctx->pc = 0x19A634u;
    {
        const bool branch_taken_0x19a634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a634) {
            ctx->pc = 0x19A670u;
            goto label_19a670;
        }
    }
    ctx->pc = 0x19A63Cu;
label_19a63c:
    // 0x19a63c: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x19a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19a640:
    // 0x19a640: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x19a640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_19a644:
    // 0x19a644: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x19a644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_19a648:
    // 0x19a648: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19a648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a64c:
    // 0x19a64c: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x19a64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19a650:
    // 0x19a650: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19a650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19a654:
    // 0x19a654: 0xc0536d8  jal         func_14DB60
label_19a658:
    if (ctx->pc == 0x19A658u) {
        ctx->pc = 0x19A658u;
            // 0x19a658: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x19A65Cu;
        goto label_19a65c;
    }
    ctx->pc = 0x19A654u;
    SET_GPR_U32(ctx, 31, 0x19A65Cu);
    ctx->pc = 0x19A658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A654u;
            // 0x19a658: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A65Cu; }
        if (ctx->pc != 0x19A65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A65Cu; }
        if (ctx->pc != 0x19A65Cu) { return; }
    }
    ctx->pc = 0x19A65Cu;
label_19a65c:
    // 0x19a65c: 0xc060500  jal         func_181400
label_19a660:
    if (ctx->pc == 0x19A660u) {
        ctx->pc = 0x19A660u;
            // 0x19a660: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x19A664u;
        goto label_19a664;
    }
    ctx->pc = 0x19A65Cu;
    SET_GPR_U32(ctx, 31, 0x19A664u);
    ctx->pc = 0x19A660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A65Cu;
            // 0x19a660: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A664u; }
        if (ctx->pc != 0x19A664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A664u; }
        if (ctx->pc != 0x19A664u) { return; }
    }
    ctx->pc = 0x19A664u;
label_19a664:
    // 0x19a664: 0x10000004  b           . + 4 + (0x4 << 2)
label_19a668:
    if (ctx->pc == 0x19A668u) {
        ctx->pc = 0x19A66Cu;
        goto label_19a66c;
    }
    ctx->pc = 0x19A664u;
    {
        const bool branch_taken_0x19a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a664) {
            ctx->pc = 0x19A678u;
            goto label_19a678;
        }
    }
    ctx->pc = 0x19A66Cu;
label_19a66c:
    // 0x19a66c: 0x0  nop
    ctx->pc = 0x19a66cu;
    // NOP
label_19a670:
    // 0x19a670: 0xc0604dc  jal         func_181370
label_19a674:
    if (ctx->pc == 0x19A674u) {
        ctx->pc = 0x19A674u;
            // 0x19a674: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x19A678u;
        goto label_19a678;
    }
    ctx->pc = 0x19A670u;
    SET_GPR_U32(ctx, 31, 0x19A678u);
    ctx->pc = 0x19A674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A670u;
            // 0x19a674: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A678u; }
        if (ctx->pc != 0x19A678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A678u; }
        if (ctx->pc != 0x19A678u) { return; }
    }
    ctx->pc = 0x19A678u;
label_19a678:
    // 0x19a678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a67c:
    // 0x19a67c: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x19a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
label_19a680:
    // 0x19a680: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x19a680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_19a684:
    // 0x19a684: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x19a684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_19a688:
    // 0x19a688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a68c:
    // 0x19a68c: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x19a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_19a690:
    // 0x19a690: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a694:
    // 0x19a694: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x19a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_19a698:
    // 0x19a698: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a69c:
    // 0x19a69c: 0x0  nop
    ctx->pc = 0x19a69cu;
    // NOP
label_19a6a0:
    // 0x19a6a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a6a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19a6a4:
    // 0x19a6a4: 0xe661002c  swc1        $f1, 0x2C($s3)
    ctx->pc = 0x19a6a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
label_19a6a8:
    // 0x19a6a8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x19a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a6ac:
    // 0x19a6ac: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x19a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_19a6b0:
    // 0x19a6b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a6b4:
    // 0x19a6b4: 0x0  nop
    ctx->pc = 0x19a6b4u;
    // NOP
label_19a6b8:
    // 0x19a6b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a6b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19a6bc:
    // 0x19a6bc: 0xe6610030  swc1        $f1, 0x30($s3)
    ctx->pc = 0x19a6bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
label_19a6c0:
    // 0x19a6c0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x19a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_19a6c4:
    // 0x19a6c4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_19a6c8:
    // 0x19a6c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a6cc:
    // 0x19a6cc: 0x0  nop
    ctx->pc = 0x19a6ccu;
    // NOP
label_19a6d0:
    // 0x19a6d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a6d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19a6d4:
    // 0x19a6d4: 0xe6610034  swc1        $f1, 0x34($s3)
    ctx->pc = 0x19a6d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_19a6d8:
    // 0x19a6d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x19a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_19a6dc:
    // 0x19a6dc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x19a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_19a6e0:
    // 0x19a6e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a6e4:
    // 0x19a6e4: 0x0  nop
    ctx->pc = 0x19a6e4u;
    // NOP
label_19a6e8:
    // 0x19a6e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a6e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19a6ec:
    // 0x19a6ec: 0xe6610038  swc1        $f1, 0x38($s3)
    ctx->pc = 0x19a6ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_19a6f0:
    // 0x19a6f0: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x19a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_19a6f4:
    // 0x19a6f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19a6f8:
    // 0x19a6f8: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x19a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_19a6fc:
    // 0x19a6fc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x19a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_19a700:
    // 0x19a700: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19a700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a704:
    // 0x19a704: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19a708:
    // 0x19a708: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19a70c:
    if (ctx->pc == 0x19A70Cu) {
        ctx->pc = 0x19A710u;
        goto label_19a710;
    }
    ctx->pc = 0x19A708u;
    {
        const bool branch_taken_0x19a708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a708) {
            ctx->pc = 0x19A728u;
            goto label_19a728;
        }
    }
    ctx->pc = 0x19A710u;
label_19a710:
    // 0x19a710: 0x8e6200fc  lw          $v0, 0xFC($s3)
    ctx->pc = 0x19a710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_19a714:
    // 0x19a714: 0x40f809  jalr        $v0
label_19a718:
    if (ctx->pc == 0x19A718u) {
        ctx->pc = 0x19A718u;
            // 0x19a718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19A71Cu;
        goto label_19a71c;
    }
    ctx->pc = 0x19A714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A71Cu);
        ctx->pc = 0x19A718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A714u;
            // 0x19a718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199B30u: goto label_199b30;
            case 0x199B34u: goto label_199b34;
            case 0x199B38u: goto label_199b38;
            case 0x199B3Cu: goto label_199b3c;
            case 0x199B40u: goto label_199b40;
            case 0x199B44u: goto label_199b44;
            case 0x199B48u: goto label_199b48;
            case 0x199B4Cu: goto label_199b4c;
            case 0x199B50u: goto label_199b50;
            case 0x199B54u: goto label_199b54;
            case 0x199B58u: goto label_199b58;
            case 0x199B5Cu: goto label_199b5c;
            case 0x199B60u: goto label_199b60;
            case 0x199B64u: goto label_199b64;
            case 0x199B68u: goto label_199b68;
            case 0x199B6Cu: goto label_199b6c;
            case 0x199B70u: goto label_199b70;
            case 0x199B74u: goto label_199b74;
            case 0x199B78u: goto label_199b78;
            case 0x199B7Cu: goto label_199b7c;
            case 0x199B80u: goto label_199b80;
            case 0x199B84u: goto label_199b84;
            case 0x199B88u: goto label_199b88;
            case 0x199B8Cu: goto label_199b8c;
            case 0x199B90u: goto label_199b90;
            case 0x199B94u: goto label_199b94;
            case 0x199B98u: goto label_199b98;
            case 0x199B9Cu: goto label_199b9c;
            case 0x199BA0u: goto label_199ba0;
            case 0x199BA4u: goto label_199ba4;
            case 0x199BA8u: goto label_199ba8;
            case 0x199BACu: goto label_199bac;
            case 0x199BB0u: goto label_199bb0;
            case 0x199BB4u: goto label_199bb4;
            case 0x199BB8u: goto label_199bb8;
            case 0x199BBCu: goto label_199bbc;
            case 0x199BC0u: goto label_199bc0;
            case 0x199BC4u: goto label_199bc4;
            case 0x199BC8u: goto label_199bc8;
            case 0x199BCCu: goto label_199bcc;
            case 0x199BD0u: goto label_199bd0;
            case 0x199BD4u: goto label_199bd4;
            case 0x199BD8u: goto label_199bd8;
            case 0x199BDCu: goto label_199bdc;
            case 0x199BE0u: goto label_199be0;
            case 0x199BE4u: goto label_199be4;
            case 0x199BE8u: goto label_199be8;
            case 0x199BECu: goto label_199bec;
            case 0x199BF0u: goto label_199bf0;
            case 0x199BF4u: goto label_199bf4;
            case 0x199BF8u: goto label_199bf8;
            case 0x199BFCu: goto label_199bfc;
            case 0x199C00u: goto label_199c00;
            case 0x199C04u: goto label_199c04;
            case 0x199C08u: goto label_199c08;
            case 0x199C0Cu: goto label_199c0c;
            case 0x199C10u: goto label_199c10;
            case 0x199C14u: goto label_199c14;
            case 0x199C18u: goto label_199c18;
            case 0x199C1Cu: goto label_199c1c;
            case 0x199C20u: goto label_199c20;
            case 0x199C24u: goto label_199c24;
            case 0x199C28u: goto label_199c28;
            case 0x199C2Cu: goto label_199c2c;
            case 0x199C30u: goto label_199c30;
            case 0x199C34u: goto label_199c34;
            case 0x199C38u: goto label_199c38;
            case 0x199C3Cu: goto label_199c3c;
            case 0x199C40u: goto label_199c40;
            case 0x199C44u: goto label_199c44;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C50u: goto label_199c50;
            case 0x199C54u: goto label_199c54;
            case 0x199C58u: goto label_199c58;
            case 0x199C5Cu: goto label_199c5c;
            case 0x199C60u: goto label_199c60;
            case 0x199C64u: goto label_199c64;
            case 0x199C68u: goto label_199c68;
            case 0x199C6Cu: goto label_199c6c;
            case 0x199C70u: goto label_199c70;
            case 0x199C74u: goto label_199c74;
            case 0x199C78u: goto label_199c78;
            case 0x199C7Cu: goto label_199c7c;
            case 0x199C80u: goto label_199c80;
            case 0x199C84u: goto label_199c84;
            case 0x199C88u: goto label_199c88;
            case 0x199C8Cu: goto label_199c8c;
            case 0x199C90u: goto label_199c90;
            case 0x199C94u: goto label_199c94;
            case 0x199C98u: goto label_199c98;
            case 0x199C9Cu: goto label_199c9c;
            case 0x199CA0u: goto label_199ca0;
            case 0x199CA4u: goto label_199ca4;
            case 0x199CA8u: goto label_199ca8;
            case 0x199CACu: goto label_199cac;
            case 0x199CB0u: goto label_199cb0;
            case 0x199CB4u: goto label_199cb4;
            case 0x199CB8u: goto label_199cb8;
            case 0x199CBCu: goto label_199cbc;
            case 0x199CC0u: goto label_199cc0;
            case 0x199CC4u: goto label_199cc4;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199CD0u: goto label_199cd0;
            case 0x199CD4u: goto label_199cd4;
            case 0x199CD8u: goto label_199cd8;
            case 0x199CDCu: goto label_199cdc;
            case 0x199CE0u: goto label_199ce0;
            case 0x199CE4u: goto label_199ce4;
            case 0x199CE8u: goto label_199ce8;
            case 0x199CECu: goto label_199cec;
            case 0x199CF0u: goto label_199cf0;
            case 0x199CF4u: goto label_199cf4;
            case 0x199CF8u: goto label_199cf8;
            case 0x199CFCu: goto label_199cfc;
            case 0x199D00u: goto label_199d00;
            case 0x199D04u: goto label_199d04;
            case 0x199D08u: goto label_199d08;
            case 0x199D0Cu: goto label_199d0c;
            case 0x199D10u: goto label_199d10;
            case 0x199D14u: goto label_199d14;
            case 0x199D18u: goto label_199d18;
            case 0x199D1Cu: goto label_199d1c;
            case 0x199D20u: goto label_199d20;
            case 0x199D24u: goto label_199d24;
            case 0x199D28u: goto label_199d28;
            case 0x199D2Cu: goto label_199d2c;
            case 0x199D30u: goto label_199d30;
            case 0x199D34u: goto label_199d34;
            case 0x199D38u: goto label_199d38;
            case 0x199D3Cu: goto label_199d3c;
            case 0x199D40u: goto label_199d40;
            case 0x199D44u: goto label_199d44;
            case 0x199D48u: goto label_199d48;
            case 0x199D4Cu: goto label_199d4c;
            case 0x199D50u: goto label_199d50;
            case 0x199D54u: goto label_199d54;
            case 0x199D58u: goto label_199d58;
            case 0x199D5Cu: goto label_199d5c;
            case 0x199D60u: goto label_199d60;
            case 0x199D64u: goto label_199d64;
            case 0x199D68u: goto label_199d68;
            case 0x199D6Cu: goto label_199d6c;
            case 0x199D70u: goto label_199d70;
            case 0x199D74u: goto label_199d74;
            case 0x199D78u: goto label_199d78;
            case 0x199D7Cu: goto label_199d7c;
            case 0x199D80u: goto label_199d80;
            case 0x199D84u: goto label_199d84;
            case 0x199D88u: goto label_199d88;
            case 0x199D8Cu: goto label_199d8c;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199D98u: goto label_199d98;
            case 0x199D9Cu: goto label_199d9c;
            case 0x199DA0u: goto label_199da0;
            case 0x199DA4u: goto label_199da4;
            case 0x199DA8u: goto label_199da8;
            case 0x199DACu: goto label_199dac;
            case 0x199DB0u: goto label_199db0;
            case 0x199DB4u: goto label_199db4;
            case 0x199DB8u: goto label_199db8;
            case 0x199DBCu: goto label_199dbc;
            case 0x199DC0u: goto label_199dc0;
            case 0x199DC4u: goto label_199dc4;
            case 0x199DC8u: goto label_199dc8;
            case 0x199DCCu: goto label_199dcc;
            case 0x199DD0u: goto label_199dd0;
            case 0x199DD4u: goto label_199dd4;
            case 0x199DD8u: goto label_199dd8;
            case 0x199DDCu: goto label_199ddc;
            case 0x199DE0u: goto label_199de0;
            case 0x199DE4u: goto label_199de4;
            case 0x199DE8u: goto label_199de8;
            case 0x199DECu: goto label_199dec;
            case 0x199DF0u: goto label_199df0;
            case 0x199DF4u: goto label_199df4;
            case 0x199DF8u: goto label_199df8;
            case 0x199DFCu: goto label_199dfc;
            case 0x199E00u: goto label_199e00;
            case 0x199E04u: goto label_199e04;
            case 0x199E08u: goto label_199e08;
            case 0x199E0Cu: goto label_199e0c;
            case 0x199E10u: goto label_199e10;
            case 0x199E14u: goto label_199e14;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E20u: goto label_199e20;
            case 0x199E24u: goto label_199e24;
            case 0x199E28u: goto label_199e28;
            case 0x199E2Cu: goto label_199e2c;
            case 0x199E30u: goto label_199e30;
            case 0x199E34u: goto label_199e34;
            case 0x199E38u: goto label_199e38;
            case 0x199E3Cu: goto label_199e3c;
            case 0x199E40u: goto label_199e40;
            case 0x199E44u: goto label_199e44;
            case 0x199E48u: goto label_199e48;
            case 0x199E4Cu: goto label_199e4c;
            case 0x199E50u: goto label_199e50;
            case 0x199E54u: goto label_199e54;
            case 0x199E58u: goto label_199e58;
            case 0x199E5Cu: goto label_199e5c;
            case 0x199E60u: goto label_199e60;
            case 0x199E64u: goto label_199e64;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199E70u: goto label_199e70;
            case 0x199E74u: goto label_199e74;
            case 0x199E78u: goto label_199e78;
            case 0x199E7Cu: goto label_199e7c;
            case 0x199E80u: goto label_199e80;
            case 0x199E84u: goto label_199e84;
            case 0x199E88u: goto label_199e88;
            case 0x199E8Cu: goto label_199e8c;
            case 0x199E90u: goto label_199e90;
            case 0x199E94u: goto label_199e94;
            case 0x199E98u: goto label_199e98;
            case 0x199E9Cu: goto label_199e9c;
            case 0x199EA0u: goto label_199ea0;
            case 0x199EA4u: goto label_199ea4;
            case 0x199EA8u: goto label_199ea8;
            case 0x199EACu: goto label_199eac;
            case 0x199EB0u: goto label_199eb0;
            case 0x199EB4u: goto label_199eb4;
            case 0x199EB8u: goto label_199eb8;
            case 0x199EBCu: goto label_199ebc;
            case 0x199EC0u: goto label_199ec0;
            case 0x199EC4u: goto label_199ec4;
            case 0x199EC8u: goto label_199ec8;
            case 0x199ECCu: goto label_199ecc;
            case 0x199ED0u: goto label_199ed0;
            case 0x199ED4u: goto label_199ed4;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EDCu: goto label_199edc;
            case 0x199EE0u: goto label_199ee0;
            case 0x199EE4u: goto label_199ee4;
            case 0x199EE8u: goto label_199ee8;
            case 0x199EECu: goto label_199eec;
            case 0x199EF0u: goto label_199ef0;
            case 0x199EF4u: goto label_199ef4;
            case 0x199EF8u: goto label_199ef8;
            case 0x199EFCu: goto label_199efc;
            case 0x199F00u: goto label_199f00;
            case 0x199F04u: goto label_199f04;
            case 0x199F08u: goto label_199f08;
            case 0x199F0Cu: goto label_199f0c;
            case 0x199F10u: goto label_199f10;
            case 0x199F14u: goto label_199f14;
            case 0x199F18u: goto label_199f18;
            case 0x199F1Cu: goto label_199f1c;
            case 0x199F20u: goto label_199f20;
            case 0x199F24u: goto label_199f24;
            case 0x199F28u: goto label_199f28;
            case 0x199F2Cu: goto label_199f2c;
            case 0x199F30u: goto label_199f30;
            case 0x199F34u: goto label_199f34;
            case 0x199F38u: goto label_199f38;
            case 0x199F3Cu: goto label_199f3c;
            case 0x199F40u: goto label_199f40;
            case 0x199F44u: goto label_199f44;
            case 0x199F48u: goto label_199f48;
            case 0x199F4Cu: goto label_199f4c;
            case 0x199F50u: goto label_199f50;
            case 0x199F54u: goto label_199f54;
            case 0x199F58u: goto label_199f58;
            case 0x199F5Cu: goto label_199f5c;
            case 0x199F60u: goto label_199f60;
            case 0x199F64u: goto label_199f64;
            case 0x199F68u: goto label_199f68;
            case 0x199F6Cu: goto label_199f6c;
            case 0x199F70u: goto label_199f70;
            case 0x199F74u: goto label_199f74;
            case 0x199F78u: goto label_199f78;
            case 0x199F7Cu: goto label_199f7c;
            case 0x199F80u: goto label_199f80;
            case 0x199F84u: goto label_199f84;
            case 0x199F88u: goto label_199f88;
            case 0x199F8Cu: goto label_199f8c;
            case 0x199F90u: goto label_199f90;
            case 0x199F94u: goto label_199f94;
            case 0x199F98u: goto label_199f98;
            case 0x199F9Cu: goto label_199f9c;
            case 0x199FA0u: goto label_199fa0;
            case 0x199FA4u: goto label_199fa4;
            case 0x199FA8u: goto label_199fa8;
            case 0x199FACu: goto label_199fac;
            case 0x199FB0u: goto label_199fb0;
            case 0x199FB4u: goto label_199fb4;
            case 0x199FB8u: goto label_199fb8;
            case 0x199FBCu: goto label_199fbc;
            case 0x199FC0u: goto label_199fc0;
            case 0x199FC4u: goto label_199fc4;
            case 0x199FC8u: goto label_199fc8;
            case 0x199FCCu: goto label_199fcc;
            case 0x199FD0u: goto label_199fd0;
            case 0x199FD4u: goto label_199fd4;
            case 0x199FD8u: goto label_199fd8;
            case 0x199FDCu: goto label_199fdc;
            case 0x199FE0u: goto label_199fe0;
            case 0x199FE4u: goto label_199fe4;
            case 0x199FE8u: goto label_199fe8;
            case 0x199FECu: goto label_199fec;
            case 0x199FF0u: goto label_199ff0;
            case 0x199FF4u: goto label_199ff4;
            case 0x199FF8u: goto label_199ff8;
            case 0x199FFCu: goto label_199ffc;
            case 0x19A000u: goto label_19a000;
            case 0x19A004u: goto label_19a004;
            case 0x19A008u: goto label_19a008;
            case 0x19A00Cu: goto label_19a00c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A01Cu: goto label_19a01c;
            case 0x19A020u: goto label_19a020;
            case 0x19A024u: goto label_19a024;
            case 0x19A028u: goto label_19a028;
            case 0x19A02Cu: goto label_19a02c;
            case 0x19A030u: goto label_19a030;
            case 0x19A034u: goto label_19a034;
            case 0x19A038u: goto label_19a038;
            case 0x19A03Cu: goto label_19a03c;
            case 0x19A040u: goto label_19a040;
            case 0x19A044u: goto label_19a044;
            case 0x19A048u: goto label_19a048;
            case 0x19A04Cu: goto label_19a04c;
            case 0x19A050u: goto label_19a050;
            case 0x19A054u: goto label_19a054;
            case 0x19A058u: goto label_19a058;
            case 0x19A05Cu: goto label_19a05c;
            case 0x19A060u: goto label_19a060;
            case 0x19A064u: goto label_19a064;
            case 0x19A068u: goto label_19a068;
            case 0x19A06Cu: goto label_19a06c;
            case 0x19A070u: goto label_19a070;
            case 0x19A074u: goto label_19a074;
            case 0x19A078u: goto label_19a078;
            case 0x19A07Cu: goto label_19a07c;
            case 0x19A080u: goto label_19a080;
            case 0x19A084u: goto label_19a084;
            case 0x19A088u: goto label_19a088;
            case 0x19A08Cu: goto label_19a08c;
            case 0x19A090u: goto label_19a090;
            case 0x19A094u: goto label_19a094;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A0A0u: goto label_19a0a0;
            case 0x19A0A4u: goto label_19a0a4;
            case 0x19A0A8u: goto label_19a0a8;
            case 0x19A0ACu: goto label_19a0ac;
            case 0x19A0B0u: goto label_19a0b0;
            case 0x19A0B4u: goto label_19a0b4;
            case 0x19A0B8u: goto label_19a0b8;
            case 0x19A0BCu: goto label_19a0bc;
            case 0x19A0C0u: goto label_19a0c0;
            case 0x19A0C4u: goto label_19a0c4;
            case 0x19A0C8u: goto label_19a0c8;
            case 0x19A0CCu: goto label_19a0cc;
            case 0x19A0D0u: goto label_19a0d0;
            case 0x19A0D4u: goto label_19a0d4;
            case 0x19A0D8u: goto label_19a0d8;
            case 0x19A0DCu: goto label_19a0dc;
            case 0x19A0E0u: goto label_19a0e0;
            case 0x19A0E4u: goto label_19a0e4;
            case 0x19A0E8u: goto label_19a0e8;
            case 0x19A0ECu: goto label_19a0ec;
            case 0x19A0F0u: goto label_19a0f0;
            case 0x19A0F4u: goto label_19a0f4;
            case 0x19A0F8u: goto label_19a0f8;
            case 0x19A0FCu: goto label_19a0fc;
            case 0x19A100u: goto label_19a100;
            case 0x19A104u: goto label_19a104;
            case 0x19A108u: goto label_19a108;
            case 0x19A10Cu: goto label_19a10c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A118u: goto label_19a118;
            case 0x19A11Cu: goto label_19a11c;
            case 0x19A120u: goto label_19a120;
            case 0x19A124u: goto label_19a124;
            case 0x19A128u: goto label_19a128;
            case 0x19A12Cu: goto label_19a12c;
            case 0x19A130u: goto label_19a130;
            case 0x19A134u: goto label_19a134;
            case 0x19A138u: goto label_19a138;
            case 0x19A13Cu: goto label_19a13c;
            case 0x19A140u: goto label_19a140;
            case 0x19A144u: goto label_19a144;
            case 0x19A148u: goto label_19a148;
            case 0x19A14Cu: goto label_19a14c;
            case 0x19A150u: goto label_19a150;
            case 0x19A154u: goto label_19a154;
            case 0x19A158u: goto label_19a158;
            case 0x19A15Cu: goto label_19a15c;
            case 0x19A160u: goto label_19a160;
            case 0x19A164u: goto label_19a164;
            case 0x19A168u: goto label_19a168;
            case 0x19A16Cu: goto label_19a16c;
            case 0x19A170u: goto label_19a170;
            case 0x19A174u: goto label_19a174;
            case 0x19A178u: goto label_19a178;
            case 0x19A17Cu: goto label_19a17c;
            case 0x19A180u: goto label_19a180;
            case 0x19A184u: goto label_19a184;
            case 0x19A188u: goto label_19a188;
            case 0x19A18Cu: goto label_19a18c;
            case 0x19A190u: goto label_19a190;
            case 0x19A194u: goto label_19a194;
            case 0x19A198u: goto label_19a198;
            case 0x19A19Cu: goto label_19a19c;
            case 0x19A1A0u: goto label_19a1a0;
            case 0x19A1A4u: goto label_19a1a4;
            case 0x19A1A8u: goto label_19a1a8;
            case 0x19A1ACu: goto label_19a1ac;
            case 0x19A1B0u: goto label_19a1b0;
            case 0x19A1B4u: goto label_19a1b4;
            case 0x19A1B8u: goto label_19a1b8;
            case 0x19A1BCu: goto label_19a1bc;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1C8u: goto label_19a1c8;
            case 0x19A1CCu: goto label_19a1cc;
            case 0x19A1D0u: goto label_19a1d0;
            case 0x19A1D4u: goto label_19a1d4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A1DCu: goto label_19a1dc;
            case 0x19A1E0u: goto label_19a1e0;
            case 0x19A1E4u: goto label_19a1e4;
            case 0x19A1E8u: goto label_19a1e8;
            case 0x19A1ECu: goto label_19a1ec;
            case 0x19A1F0u: goto label_19a1f0;
            case 0x19A1F4u: goto label_19a1f4;
            case 0x19A1F8u: goto label_19a1f8;
            case 0x19A1FCu: goto label_19a1fc;
            case 0x19A200u: goto label_19a200;
            case 0x19A204u: goto label_19a204;
            case 0x19A208u: goto label_19a208;
            case 0x19A20Cu: goto label_19a20c;
            case 0x19A210u: goto label_19a210;
            case 0x19A214u: goto label_19a214;
            case 0x19A218u: goto label_19a218;
            case 0x19A21Cu: goto label_19a21c;
            case 0x19A220u: goto label_19a220;
            case 0x19A224u: goto label_19a224;
            case 0x19A228u: goto label_19a228;
            case 0x19A22Cu: goto label_19a22c;
            case 0x19A230u: goto label_19a230;
            case 0x19A234u: goto label_19a234;
            case 0x19A238u: goto label_19a238;
            case 0x19A23Cu: goto label_19a23c;
            case 0x19A240u: goto label_19a240;
            case 0x19A244u: goto label_19a244;
            case 0x19A248u: goto label_19a248;
            case 0x19A24Cu: goto label_19a24c;
            case 0x19A250u: goto label_19a250;
            case 0x19A254u: goto label_19a254;
            case 0x19A258u: goto label_19a258;
            case 0x19A25Cu: goto label_19a25c;
            case 0x19A260u: goto label_19a260;
            case 0x19A264u: goto label_19a264;
            case 0x19A268u: goto label_19a268;
            case 0x19A26Cu: goto label_19a26c;
            case 0x19A270u: goto label_19a270;
            case 0x19A274u: goto label_19a274;
            case 0x19A278u: goto label_19a278;
            case 0x19A27Cu: goto label_19a27c;
            case 0x19A280u: goto label_19a280;
            case 0x19A284u: goto label_19a284;
            case 0x19A288u: goto label_19a288;
            case 0x19A28Cu: goto label_19a28c;
            case 0x19A290u: goto label_19a290;
            case 0x19A294u: goto label_19a294;
            case 0x19A298u: goto label_19a298;
            case 0x19A29Cu: goto label_19a29c;
            case 0x19A2A0u: goto label_19a2a0;
            case 0x19A2A4u: goto label_19a2a4;
            case 0x19A2A8u: goto label_19a2a8;
            case 0x19A2ACu: goto label_19a2ac;
            case 0x19A2B0u: goto label_19a2b0;
            case 0x19A2B4u: goto label_19a2b4;
            case 0x19A2B8u: goto label_19a2b8;
            case 0x19A2BCu: goto label_19a2bc;
            case 0x19A2C0u: goto label_19a2c0;
            case 0x19A2C4u: goto label_19a2c4;
            case 0x19A2C8u: goto label_19a2c8;
            case 0x19A2CCu: goto label_19a2cc;
            case 0x19A2D0u: goto label_19a2d0;
            case 0x19A2D4u: goto label_19a2d4;
            case 0x19A2D8u: goto label_19a2d8;
            case 0x19A2DCu: goto label_19a2dc;
            case 0x19A2E0u: goto label_19a2e0;
            case 0x19A2E4u: goto label_19a2e4;
            case 0x19A2E8u: goto label_19a2e8;
            case 0x19A2ECu: goto label_19a2ec;
            case 0x19A2F0u: goto label_19a2f0;
            case 0x19A2F4u: goto label_19a2f4;
            case 0x19A2F8u: goto label_19a2f8;
            case 0x19A2FCu: goto label_19a2fc;
            case 0x19A300u: goto label_19a300;
            case 0x19A304u: goto label_19a304;
            case 0x19A308u: goto label_19a308;
            case 0x19A30Cu: goto label_19a30c;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A318u: goto label_19a318;
            case 0x19A31Cu: goto label_19a31c;
            case 0x19A320u: goto label_19a320;
            case 0x19A324u: goto label_19a324;
            case 0x19A328u: goto label_19a328;
            case 0x19A32Cu: goto label_19a32c;
            case 0x19A330u: goto label_19a330;
            case 0x19A334u: goto label_19a334;
            case 0x19A338u: goto label_19a338;
            case 0x19A33Cu: goto label_19a33c;
            case 0x19A340u: goto label_19a340;
            case 0x19A344u: goto label_19a344;
            case 0x19A348u: goto label_19a348;
            case 0x19A34Cu: goto label_19a34c;
            case 0x19A350u: goto label_19a350;
            case 0x19A354u: goto label_19a354;
            case 0x19A358u: goto label_19a358;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A360u: goto label_19a360;
            case 0x19A364u: goto label_19a364;
            case 0x19A368u: goto label_19a368;
            case 0x19A36Cu: goto label_19a36c;
            case 0x19A370u: goto label_19a370;
            case 0x19A374u: goto label_19a374;
            case 0x19A378u: goto label_19a378;
            case 0x19A37Cu: goto label_19a37c;
            case 0x19A380u: goto label_19a380;
            case 0x19A384u: goto label_19a384;
            case 0x19A388u: goto label_19a388;
            case 0x19A38Cu: goto label_19a38c;
            case 0x19A390u: goto label_19a390;
            case 0x19A394u: goto label_19a394;
            case 0x19A398u: goto label_19a398;
            case 0x19A39Cu: goto label_19a39c;
            case 0x19A3A0u: goto label_19a3a0;
            case 0x19A3A4u: goto label_19a3a4;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3ACu: goto label_19a3ac;
            case 0x19A3B0u: goto label_19a3b0;
            case 0x19A3B4u: goto label_19a3b4;
            case 0x19A3B8u: goto label_19a3b8;
            case 0x19A3BCu: goto label_19a3bc;
            case 0x19A3C0u: goto label_19a3c0;
            case 0x19A3C4u: goto label_19a3c4;
            case 0x19A3C8u: goto label_19a3c8;
            case 0x19A3CCu: goto label_19a3cc;
            case 0x19A3D0u: goto label_19a3d0;
            case 0x19A3D4u: goto label_19a3d4;
            case 0x19A3D8u: goto label_19a3d8;
            case 0x19A3DCu: goto label_19a3dc;
            case 0x19A3E0u: goto label_19a3e0;
            case 0x19A3E4u: goto label_19a3e4;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3ECu: goto label_19a3ec;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A3F4u: goto label_19a3f4;
            case 0x19A3F8u: goto label_19a3f8;
            case 0x19A3FCu: goto label_19a3fc;
            case 0x19A400u: goto label_19a400;
            case 0x19A404u: goto label_19a404;
            case 0x19A408u: goto label_19a408;
            case 0x19A40Cu: goto label_19a40c;
            case 0x19A410u: goto label_19a410;
            case 0x19A414u: goto label_19a414;
            case 0x19A418u: goto label_19a418;
            case 0x19A41Cu: goto label_19a41c;
            case 0x19A420u: goto label_19a420;
            case 0x19A424u: goto label_19a424;
            case 0x19A428u: goto label_19a428;
            case 0x19A42Cu: goto label_19a42c;
            case 0x19A430u: goto label_19a430;
            case 0x19A434u: goto label_19a434;
            case 0x19A438u: goto label_19a438;
            case 0x19A43Cu: goto label_19a43c;
            case 0x19A440u: goto label_19a440;
            case 0x19A444u: goto label_19a444;
            case 0x19A448u: goto label_19a448;
            case 0x19A44Cu: goto label_19a44c;
            case 0x19A450u: goto label_19a450;
            case 0x19A454u: goto label_19a454;
            case 0x19A458u: goto label_19a458;
            case 0x19A45Cu: goto label_19a45c;
            case 0x19A460u: goto label_19a460;
            case 0x19A464u: goto label_19a464;
            case 0x19A468u: goto label_19a468;
            case 0x19A46Cu: goto label_19a46c;
            case 0x19A470u: goto label_19a470;
            case 0x19A474u: goto label_19a474;
            case 0x19A478u: goto label_19a478;
            case 0x19A47Cu: goto label_19a47c;
            case 0x19A480u: goto label_19a480;
            case 0x19A484u: goto label_19a484;
            case 0x19A488u: goto label_19a488;
            case 0x19A48Cu: goto label_19a48c;
            case 0x19A490u: goto label_19a490;
            case 0x19A494u: goto label_19a494;
            case 0x19A498u: goto label_19a498;
            case 0x19A49Cu: goto label_19a49c;
            case 0x19A4A0u: goto label_19a4a0;
            case 0x19A4A4u: goto label_19a4a4;
            case 0x19A4A8u: goto label_19a4a8;
            case 0x19A4ACu: goto label_19a4ac;
            case 0x19A4B0u: goto label_19a4b0;
            case 0x19A4B4u: goto label_19a4b4;
            case 0x19A4B8u: goto label_19a4b8;
            case 0x19A4BCu: goto label_19a4bc;
            case 0x19A4C0u: goto label_19a4c0;
            case 0x19A4C4u: goto label_19a4c4;
            case 0x19A4C8u: goto label_19a4c8;
            case 0x19A4CCu: goto label_19a4cc;
            case 0x19A4D0u: goto label_19a4d0;
            case 0x19A4D4u: goto label_19a4d4;
            case 0x19A4D8u: goto label_19a4d8;
            case 0x19A4DCu: goto label_19a4dc;
            case 0x19A4E0u: goto label_19a4e0;
            case 0x19A4E4u: goto label_19a4e4;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A4ECu: goto label_19a4ec;
            case 0x19A4F0u: goto label_19a4f0;
            case 0x19A4F4u: goto label_19a4f4;
            case 0x19A4F8u: goto label_19a4f8;
            case 0x19A4FCu: goto label_19a4fc;
            case 0x19A500u: goto label_19a500;
            case 0x19A504u: goto label_19a504;
            case 0x19A508u: goto label_19a508;
            case 0x19A50Cu: goto label_19a50c;
            case 0x19A510u: goto label_19a510;
            case 0x19A514u: goto label_19a514;
            case 0x19A518u: goto label_19a518;
            case 0x19A51Cu: goto label_19a51c;
            case 0x19A520u: goto label_19a520;
            case 0x19A524u: goto label_19a524;
            case 0x19A528u: goto label_19a528;
            case 0x19A52Cu: goto label_19a52c;
            case 0x19A530u: goto label_19a530;
            case 0x19A534u: goto label_19a534;
            case 0x19A538u: goto label_19a538;
            case 0x19A53Cu: goto label_19a53c;
            case 0x19A540u: goto label_19a540;
            case 0x19A544u: goto label_19a544;
            case 0x19A548u: goto label_19a548;
            case 0x19A54Cu: goto label_19a54c;
            case 0x19A550u: goto label_19a550;
            case 0x19A554u: goto label_19a554;
            case 0x19A558u: goto label_19a558;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A560u: goto label_19a560;
            case 0x19A564u: goto label_19a564;
            case 0x19A568u: goto label_19a568;
            case 0x19A56Cu: goto label_19a56c;
            case 0x19A570u: goto label_19a570;
            case 0x19A574u: goto label_19a574;
            case 0x19A578u: goto label_19a578;
            case 0x19A57Cu: goto label_19a57c;
            case 0x19A580u: goto label_19a580;
            case 0x19A584u: goto label_19a584;
            case 0x19A588u: goto label_19a588;
            case 0x19A58Cu: goto label_19a58c;
            case 0x19A590u: goto label_19a590;
            case 0x19A594u: goto label_19a594;
            case 0x19A598u: goto label_19a598;
            case 0x19A59Cu: goto label_19a59c;
            case 0x19A5A0u: goto label_19a5a0;
            case 0x19A5A4u: goto label_19a5a4;
            case 0x19A5A8u: goto label_19a5a8;
            case 0x19A5ACu: goto label_19a5ac;
            case 0x19A5B0u: goto label_19a5b0;
            case 0x19A5B4u: goto label_19a5b4;
            case 0x19A5B8u: goto label_19a5b8;
            case 0x19A5BCu: goto label_19a5bc;
            case 0x19A5C0u: goto label_19a5c0;
            case 0x19A5C4u: goto label_19a5c4;
            case 0x19A5C8u: goto label_19a5c8;
            case 0x19A5CCu: goto label_19a5cc;
            case 0x19A5D0u: goto label_19a5d0;
            case 0x19A5D4u: goto label_19a5d4;
            case 0x19A5D8u: goto label_19a5d8;
            case 0x19A5DCu: goto label_19a5dc;
            case 0x19A5E0u: goto label_19a5e0;
            case 0x19A5E4u: goto label_19a5e4;
            case 0x19A5E8u: goto label_19a5e8;
            case 0x19A5ECu: goto label_19a5ec;
            case 0x19A5F0u: goto label_19a5f0;
            case 0x19A5F4u: goto label_19a5f4;
            case 0x19A5F8u: goto label_19a5f8;
            case 0x19A5FCu: goto label_19a5fc;
            case 0x19A600u: goto label_19a600;
            case 0x19A604u: goto label_19a604;
            case 0x19A608u: goto label_19a608;
            case 0x19A60Cu: goto label_19a60c;
            case 0x19A610u: goto label_19a610;
            case 0x19A614u: goto label_19a614;
            case 0x19A618u: goto label_19a618;
            case 0x19A61Cu: goto label_19a61c;
            case 0x19A620u: goto label_19a620;
            case 0x19A624u: goto label_19a624;
            case 0x19A628u: goto label_19a628;
            case 0x19A62Cu: goto label_19a62c;
            case 0x19A630u: goto label_19a630;
            case 0x19A634u: goto label_19a634;
            case 0x19A638u: goto label_19a638;
            case 0x19A63Cu: goto label_19a63c;
            case 0x19A640u: goto label_19a640;
            case 0x19A644u: goto label_19a644;
            case 0x19A648u: goto label_19a648;
            case 0x19A64Cu: goto label_19a64c;
            case 0x19A650u: goto label_19a650;
            case 0x19A654u: goto label_19a654;
            case 0x19A658u: goto label_19a658;
            case 0x19A65Cu: goto label_19a65c;
            case 0x19A660u: goto label_19a660;
            case 0x19A664u: goto label_19a664;
            case 0x19A668u: goto label_19a668;
            case 0x19A66Cu: goto label_19a66c;
            case 0x19A670u: goto label_19a670;
            case 0x19A674u: goto label_19a674;
            case 0x19A678u: goto label_19a678;
            case 0x19A67Cu: goto label_19a67c;
            case 0x19A680u: goto label_19a680;
            case 0x19A684u: goto label_19a684;
            case 0x19A688u: goto label_19a688;
            case 0x19A68Cu: goto label_19a68c;
            case 0x19A690u: goto label_19a690;
            case 0x19A694u: goto label_19a694;
            case 0x19A698u: goto label_19a698;
            case 0x19A69Cu: goto label_19a69c;
            case 0x19A6A0u: goto label_19a6a0;
            case 0x19A6A4u: goto label_19a6a4;
            case 0x19A6A8u: goto label_19a6a8;
            case 0x19A6ACu: goto label_19a6ac;
            case 0x19A6B0u: goto label_19a6b0;
            case 0x19A6B4u: goto label_19a6b4;
            case 0x19A6B8u: goto label_19a6b8;
            case 0x19A6BCu: goto label_19a6bc;
            case 0x19A6C0u: goto label_19a6c0;
            case 0x19A6C4u: goto label_19a6c4;
            case 0x19A6C8u: goto label_19a6c8;
            case 0x19A6CCu: goto label_19a6cc;
            case 0x19A6D0u: goto label_19a6d0;
            case 0x19A6D4u: goto label_19a6d4;
            case 0x19A6D8u: goto label_19a6d8;
            case 0x19A6DCu: goto label_19a6dc;
            case 0x19A6E0u: goto label_19a6e0;
            case 0x19A6E4u: goto label_19a6e4;
            case 0x19A6E8u: goto label_19a6e8;
            case 0x19A6ECu: goto label_19a6ec;
            case 0x19A6F0u: goto label_19a6f0;
            case 0x19A6F4u: goto label_19a6f4;
            case 0x19A6F8u: goto label_19a6f8;
            case 0x19A6FCu: goto label_19a6fc;
            case 0x19A700u: goto label_19a700;
            case 0x19A704u: goto label_19a704;
            case 0x19A708u: goto label_19a708;
            case 0x19A70Cu: goto label_19a70c;
            case 0x19A710u: goto label_19a710;
            case 0x19A714u: goto label_19a714;
            case 0x19A718u: goto label_19a718;
            case 0x19A71Cu: goto label_19a71c;
            case 0x19A720u: goto label_19a720;
            case 0x19A724u: goto label_19a724;
            case 0x19A728u: goto label_19a728;
            case 0x19A72Cu: goto label_19a72c;
            case 0x19A730u: goto label_19a730;
            case 0x19A734u: goto label_19a734;
            case 0x19A738u: goto label_19a738;
            case 0x19A73Cu: goto label_19a73c;
            case 0x19A740u: goto label_19a740;
            case 0x19A744u: goto label_19a744;
            case 0x19A748u: goto label_19a748;
            case 0x19A74Cu: goto label_19a74c;
            case 0x19A750u: goto label_19a750;
            case 0x19A754u: goto label_19a754;
            case 0x19A758u: goto label_19a758;
            case 0x19A75Cu: goto label_19a75c;
            case 0x19A760u: goto label_19a760;
            case 0x19A764u: goto label_19a764;
            case 0x19A768u: goto label_19a768;
            case 0x19A76Cu: goto label_19a76c;
            case 0x19A770u: goto label_19a770;
            case 0x19A774u: goto label_19a774;
            case 0x19A778u: goto label_19a778;
            case 0x19A77Cu: goto label_19a77c;
            case 0x19A780u: goto label_19a780;
            case 0x19A784u: goto label_19a784;
            case 0x19A788u: goto label_19a788;
            case 0x19A78Cu: goto label_19a78c;
            case 0x19A790u: goto label_19a790;
            case 0x19A794u: goto label_19a794;
            case 0x19A798u: goto label_19a798;
            case 0x19A79Cu: goto label_19a79c;
            case 0x19A7A0u: goto label_19a7a0;
            case 0x19A7A4u: goto label_19a7a4;
            case 0x19A7A8u: goto label_19a7a8;
            case 0x19A7ACu: goto label_19a7ac;
            case 0x19A7B0u: goto label_19a7b0;
            case 0x19A7B4u: goto label_19a7b4;
            case 0x19A7B8u: goto label_19a7b8;
            case 0x19A7BCu: goto label_19a7bc;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7C4u: goto label_19a7c4;
            case 0x19A7C8u: goto label_19a7c8;
            case 0x19A7CCu: goto label_19a7cc;
            case 0x19A7D0u: goto label_19a7d0;
            case 0x19A7D4u: goto label_19a7d4;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7DCu: goto label_19a7dc;
            case 0x19A7E0u: goto label_19a7e0;
            case 0x19A7E4u: goto label_19a7e4;
            case 0x19A7E8u: goto label_19a7e8;
            case 0x19A7ECu: goto label_19a7ec;
            case 0x19A7F0u: goto label_19a7f0;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A7F8u: goto label_19a7f8;
            case 0x19A7FCu: goto label_19a7fc;
            case 0x19A800u: goto label_19a800;
            case 0x19A804u: goto label_19a804;
            case 0x19A808u: goto label_19a808;
            case 0x19A80Cu: goto label_19a80c;
            case 0x19A810u: goto label_19a810;
            case 0x19A814u: goto label_19a814;
            case 0x19A818u: goto label_19a818;
            case 0x19A81Cu: goto label_19a81c;
            case 0x19A820u: goto label_19a820;
            case 0x19A824u: goto label_19a824;
            case 0x19A828u: goto label_19a828;
            case 0x19A82Cu: goto label_19a82c;
            case 0x19A830u: goto label_19a830;
            case 0x19A834u: goto label_19a834;
            case 0x19A838u: goto label_19a838;
            case 0x19A83Cu: goto label_19a83c;
            case 0x19A840u: goto label_19a840;
            case 0x19A844u: goto label_19a844;
            case 0x19A848u: goto label_19a848;
            case 0x19A84Cu: goto label_19a84c;
            case 0x19A850u: goto label_19a850;
            case 0x19A854u: goto label_19a854;
            case 0x19A858u: goto label_19a858;
            case 0x19A85Cu: goto label_19a85c;
            case 0x19A860u: goto label_19a860;
            case 0x19A864u: goto label_19a864;
            case 0x19A868u: goto label_19a868;
            case 0x19A86Cu: goto label_19a86c;
            case 0x19A870u: goto label_19a870;
            case 0x19A874u: goto label_19a874;
            case 0x19A878u: goto label_19a878;
            case 0x19A87Cu: goto label_19a87c;
            case 0x19A880u: goto label_19a880;
            case 0x19A884u: goto label_19a884;
            case 0x19A888u: goto label_19a888;
            case 0x19A88Cu: goto label_19a88c;
            case 0x19A890u: goto label_19a890;
            case 0x19A894u: goto label_19a894;
            case 0x19A898u: goto label_19a898;
            case 0x19A89Cu: goto label_19a89c;
            case 0x19A8A0u: goto label_19a8a0;
            case 0x19A8A4u: goto label_19a8a4;
            case 0x19A8A8u: goto label_19a8a8;
            case 0x19A8ACu: goto label_19a8ac;
            case 0x19A8B0u: goto label_19a8b0;
            case 0x19A8B4u: goto label_19a8b4;
            case 0x19A8B8u: goto label_19a8b8;
            case 0x19A8BCu: goto label_19a8bc;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A8C4u: goto label_19a8c4;
            case 0x19A8C8u: goto label_19a8c8;
            case 0x19A8CCu: goto label_19a8cc;
            case 0x19A8D0u: goto label_19a8d0;
            case 0x19A8D4u: goto label_19a8d4;
            case 0x19A8D8u: goto label_19a8d8;
            case 0x19A8DCu: goto label_19a8dc;
            case 0x19A8E0u: goto label_19a8e0;
            case 0x19A8E4u: goto label_19a8e4;
            case 0x19A8E8u: goto label_19a8e8;
            case 0x19A8ECu: goto label_19a8ec;
            case 0x19A8F0u: goto label_19a8f0;
            case 0x19A8F4u: goto label_19a8f4;
            case 0x19A8F8u: goto label_19a8f8;
            case 0x19A8FCu: goto label_19a8fc;
            case 0x19A900u: goto label_19a900;
            case 0x19A904u: goto label_19a904;
            case 0x19A908u: goto label_19a908;
            case 0x19A90Cu: goto label_19a90c;
            case 0x19A910u: goto label_19a910;
            case 0x19A914u: goto label_19a914;
            case 0x19A918u: goto label_19a918;
            case 0x19A91Cu: goto label_19a91c;
            case 0x19A920u: goto label_19a920;
            case 0x19A924u: goto label_19a924;
            case 0x19A928u: goto label_19a928;
            case 0x19A92Cu: goto label_19a92c;
            case 0x19A930u: goto label_19a930;
            case 0x19A934u: goto label_19a934;
            case 0x19A938u: goto label_19a938;
            case 0x19A93Cu: goto label_19a93c;
            case 0x19A940u: goto label_19a940;
            case 0x19A944u: goto label_19a944;
            case 0x19A948u: goto label_19a948;
            case 0x19A94Cu: goto label_19a94c;
            case 0x19A950u: goto label_19a950;
            case 0x19A954u: goto label_19a954;
            case 0x19A958u: goto label_19a958;
            case 0x19A95Cu: goto label_19a95c;
            case 0x19A960u: goto label_19a960;
            case 0x19A964u: goto label_19a964;
            case 0x19A968u: goto label_19a968;
            case 0x19A96Cu: goto label_19a96c;
            case 0x19A970u: goto label_19a970;
            case 0x19A974u: goto label_19a974;
            case 0x19A978u: goto label_19a978;
            case 0x19A97Cu: goto label_19a97c;
            case 0x19A980u: goto label_19a980;
            case 0x19A984u: goto label_19a984;
            case 0x19A988u: goto label_19a988;
            case 0x19A98Cu: goto label_19a98c;
            case 0x19A990u: goto label_19a990;
            case 0x19A994u: goto label_19a994;
            case 0x19A998u: goto label_19a998;
            case 0x19A99Cu: goto label_19a99c;
            case 0x19A9A0u: goto label_19a9a0;
            case 0x19A9A4u: goto label_19a9a4;
            case 0x19A9A8u: goto label_19a9a8;
            case 0x19A9ACu: goto label_19a9ac;
            case 0x19A9B0u: goto label_19a9b0;
            case 0x19A9B4u: goto label_19a9b4;
            case 0x19A9B8u: goto label_19a9b8;
            case 0x19A9BCu: goto label_19a9bc;
            case 0x19A9C0u: goto label_19a9c0;
            case 0x19A9C4u: goto label_19a9c4;
            case 0x19A9C8u: goto label_19a9c8;
            case 0x19A9CCu: goto label_19a9cc;
            case 0x19A9D0u: goto label_19a9d0;
            case 0x19A9D4u: goto label_19a9d4;
            case 0x19A9D8u: goto label_19a9d8;
            case 0x19A9DCu: goto label_19a9dc;
            case 0x19A9E0u: goto label_19a9e0;
            case 0x19A9E4u: goto label_19a9e4;
            case 0x19A9E8u: goto label_19a9e8;
            case 0x19A9ECu: goto label_19a9ec;
            case 0x19A9F0u: goto label_19a9f0;
            case 0x19A9F4u: goto label_19a9f4;
            case 0x19A9F8u: goto label_19a9f8;
            case 0x19A9FCu: goto label_19a9fc;
            case 0x19AA00u: goto label_19aa00;
            case 0x19AA04u: goto label_19aa04;
            case 0x19AA08u: goto label_19aa08;
            case 0x19AA0Cu: goto label_19aa0c;
            case 0x19AA10u: goto label_19aa10;
            case 0x19AA14u: goto label_19aa14;
            case 0x19AA18u: goto label_19aa18;
            case 0x19AA1Cu: goto label_19aa1c;
            case 0x19AA20u: goto label_19aa20;
            case 0x19AA24u: goto label_19aa24;
            case 0x19AA28u: goto label_19aa28;
            case 0x19AA2Cu: goto label_19aa2c;
            case 0x19AA30u: goto label_19aa30;
            case 0x19AA34u: goto label_19aa34;
            case 0x19AA38u: goto label_19aa38;
            case 0x19AA3Cu: goto label_19aa3c;
            case 0x19AA40u: goto label_19aa40;
            case 0x19AA44u: goto label_19aa44;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA4Cu: goto label_19aa4c;
            case 0x19AA50u: goto label_19aa50;
            case 0x19AA54u: goto label_19aa54;
            case 0x19AA58u: goto label_19aa58;
            case 0x19AA5Cu: goto label_19aa5c;
            case 0x19AA60u: goto label_19aa60;
            case 0x19AA64u: goto label_19aa64;
            case 0x19AA68u: goto label_19aa68;
            case 0x19AA6Cu: goto label_19aa6c;
            case 0x19AA70u: goto label_19aa70;
            case 0x19AA74u: goto label_19aa74;
            case 0x19AA78u: goto label_19aa78;
            case 0x19AA7Cu: goto label_19aa7c;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AA84u: goto label_19aa84;
            case 0x19AA88u: goto label_19aa88;
            case 0x19AA8Cu: goto label_19aa8c;
            case 0x19AA90u: goto label_19aa90;
            case 0x19AA94u: goto label_19aa94;
            case 0x19AA98u: goto label_19aa98;
            case 0x19AA9Cu: goto label_19aa9c;
            case 0x19AAA0u: goto label_19aaa0;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AAA8u: goto label_19aaa8;
            case 0x19AAACu: goto label_19aaac;
            case 0x19AAB0u: goto label_19aab0;
            case 0x19AAB4u: goto label_19aab4;
            case 0x19AAB8u: goto label_19aab8;
            case 0x19AABCu: goto label_19aabc;
            case 0x19AAC0u: goto label_19aac0;
            case 0x19AAC4u: goto label_19aac4;
            case 0x19AAC8u: goto label_19aac8;
            case 0x19AACCu: goto label_19aacc;
            case 0x19AAD0u: goto label_19aad0;
            case 0x19AAD4u: goto label_19aad4;
            case 0x19AAD8u: goto label_19aad8;
            case 0x19AADCu: goto label_19aadc;
            case 0x19AAE0u: goto label_19aae0;
            case 0x19AAE4u: goto label_19aae4;
            case 0x19AAE8u: goto label_19aae8;
            case 0x19AAECu: goto label_19aaec;
            case 0x19AAF0u: goto label_19aaf0;
            case 0x19AAF4u: goto label_19aaf4;
            case 0x19AAF8u: goto label_19aaf8;
            case 0x19AAFCu: goto label_19aafc;
            case 0x19AB00u: goto label_19ab00;
            case 0x19AB04u: goto label_19ab04;
            case 0x19AB08u: goto label_19ab08;
            case 0x19AB0Cu: goto label_19ab0c;
            case 0x19AB10u: goto label_19ab10;
            case 0x19AB14u: goto label_19ab14;
            case 0x19AB18u: goto label_19ab18;
            case 0x19AB1Cu: goto label_19ab1c;
            case 0x19AB20u: goto label_19ab20;
            case 0x19AB24u: goto label_19ab24;
            case 0x19AB28u: goto label_19ab28;
            case 0x19AB2Cu: goto label_19ab2c;
            case 0x19AB30u: goto label_19ab30;
            case 0x19AB34u: goto label_19ab34;
            case 0x19AB38u: goto label_19ab38;
            case 0x19AB3Cu: goto label_19ab3c;
            case 0x19AB40u: goto label_19ab40;
            case 0x19AB44u: goto label_19ab44;
            case 0x19AB48u: goto label_19ab48;
            case 0x19AB4Cu: goto label_19ab4c;
            case 0x19AB50u: goto label_19ab50;
            case 0x19AB54u: goto label_19ab54;
            case 0x19AB58u: goto label_19ab58;
            case 0x19AB5Cu: goto label_19ab5c;
            case 0x19AB60u: goto label_19ab60;
            case 0x19AB64u: goto label_19ab64;
            case 0x19AB68u: goto label_19ab68;
            case 0x19AB6Cu: goto label_19ab6c;
            case 0x19AB70u: goto label_19ab70;
            case 0x19AB74u: goto label_19ab74;
            case 0x19AB78u: goto label_19ab78;
            case 0x19AB7Cu: goto label_19ab7c;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB84u: goto label_19ab84;
            case 0x19AB88u: goto label_19ab88;
            case 0x19AB8Cu: goto label_19ab8c;
            case 0x19AB90u: goto label_19ab90;
            case 0x19AB94u: goto label_19ab94;
            case 0x19AB98u: goto label_19ab98;
            case 0x19AB9Cu: goto label_19ab9c;
            case 0x19ABA0u: goto label_19aba0;
            case 0x19ABA4u: goto label_19aba4;
            case 0x19ABA8u: goto label_19aba8;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABB4u: goto label_19abb4;
            case 0x19ABB8u: goto label_19abb8;
            case 0x19ABBCu: goto label_19abbc;
            case 0x19ABC0u: goto label_19abc0;
            case 0x19ABC4u: goto label_19abc4;
            case 0x19ABC8u: goto label_19abc8;
            case 0x19ABCCu: goto label_19abcc;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19ABD4u: goto label_19abd4;
            case 0x19ABD8u: goto label_19abd8;
            case 0x19ABDCu: goto label_19abdc;
            case 0x19ABE0u: goto label_19abe0;
            case 0x19ABE4u: goto label_19abe4;
            case 0x19ABE8u: goto label_19abe8;
            case 0x19ABECu: goto label_19abec;
            case 0x19ABF0u: goto label_19abf0;
            case 0x19ABF4u: goto label_19abf4;
            case 0x19ABF8u: goto label_19abf8;
            case 0x19ABFCu: goto label_19abfc;
            case 0x19AC00u: goto label_19ac00;
            case 0x19AC04u: goto label_19ac04;
            case 0x19AC08u: goto label_19ac08;
            case 0x19AC0Cu: goto label_19ac0c;
            case 0x19AC10u: goto label_19ac10;
            case 0x19AC14u: goto label_19ac14;
            case 0x19AC18u: goto label_19ac18;
            case 0x19AC1Cu: goto label_19ac1c;
            case 0x19AC20u: goto label_19ac20;
            case 0x19AC24u: goto label_19ac24;
            case 0x19AC28u: goto label_19ac28;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC30u: goto label_19ac30;
            case 0x19AC34u: goto label_19ac34;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC3Cu: goto label_19ac3c;
            case 0x19AC40u: goto label_19ac40;
            case 0x19AC44u: goto label_19ac44;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC50u: goto label_19ac50;
            case 0x19AC54u: goto label_19ac54;
            case 0x19AC58u: goto label_19ac58;
            case 0x19AC5Cu: goto label_19ac5c;
            case 0x19AC60u: goto label_19ac60;
            case 0x19AC64u: goto label_19ac64;
            case 0x19AC68u: goto label_19ac68;
            case 0x19AC6Cu: goto label_19ac6c;
            case 0x19AC70u: goto label_19ac70;
            case 0x19AC74u: goto label_19ac74;
            case 0x19AC78u: goto label_19ac78;
            case 0x19AC7Cu: goto label_19ac7c;
            case 0x19AC80u: goto label_19ac80;
            case 0x19AC84u: goto label_19ac84;
            case 0x19AC88u: goto label_19ac88;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19A71Cu; }
            if (ctx->pc != 0x19A71Cu) { return; }
        }
    }
    ctx->pc = 0x19A71Cu;
label_19a71c:
    // 0x19a71c: 0x10000154  b           . + 4 + (0x154 << 2)
label_19a720:
    if (ctx->pc == 0x19A720u) {
        ctx->pc = 0x19A724u;
        goto label_19a724;
    }
    ctx->pc = 0x19A71Cu;
    {
        const bool branch_taken_0x19a71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a71c) {
            ctx->pc = 0x19AC70u;
            goto label_19ac70;
        }
    }
    ctx->pc = 0x19A724u;
label_19a724:
    // 0x19a724: 0x0  nop
    ctx->pc = 0x19a724u;
    // NOP
label_19a728:
    // 0x19a728: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x19a728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_19a72c:
    // 0x19a72c: 0x1c400148  bgtz        $v0, . + 4 + (0x148 << 2)
label_19a730:
    if (ctx->pc == 0x19A730u) {
        ctx->pc = 0x19A734u;
        goto label_19a734;
    }
    ctx->pc = 0x19A72Cu;
    {
        const bool branch_taken_0x19a72c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x19a72c) {
            ctx->pc = 0x19AC50u;
            goto label_19ac50;
        }
    }
    ctx->pc = 0x19A734u;
label_19a734:
    // 0x19a734: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x19a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_19a738:
    // 0x19a738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19a73c:
    // 0x19a73c: 0xae62011c  sw          $v0, 0x11C($s3)
    ctx->pc = 0x19a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 2));
label_19a740:
    // 0x19a740: 0x8e620120  lw          $v0, 0x120($s3)
    ctx->pc = 0x19a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_19a744:
    // 0x19a744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19a748:
    // 0x19a748: 0xae620120  sw          $v0, 0x120($s3)
    ctx->pc = 0x19a748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 2));
label_19a74c:
    // 0x19a74c: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x19a74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_19a750:
    // 0x19a750: 0xc0604b0  jal         func_1812C0
label_19a754:
    if (ctx->pc == 0x19A754u) {
        ctx->pc = 0x19A754u;
            // 0x19a754: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x19A758u;
        goto label_19a758;
    }
    ctx->pc = 0x19A750u;
    SET_GPR_U32(ctx, 31, 0x19A758u);
    ctx->pc = 0x19A754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A750u;
            // 0x19a754: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A758u; }
        if (ctx->pc != 0x19A758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A758u; }
        if (ctx->pc != 0x19A758u) { return; }
    }
    ctx->pc = 0x19A758u;
label_19a758:
    // 0x19a758: 0xc66000d0  lwc1        $f0, 0xD0($s3)
    ctx->pc = 0x19a758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a75c:
    // 0x19a75c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x19a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_19a760:
    // 0x19a760: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x19a760u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_19a764:
    // 0x19a764: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a768:
    // 0x19a768: 0x0  nop
    ctx->pc = 0x19a768u;
    // NOP
label_19a76c:
    // 0x19a76c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19a76cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19a770:
    // 0x19a770: 0xe66000d0  swc1        $f0, 0xD0($s3)
    ctx->pc = 0x19a770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 208), bits); }
label_19a774:
    // 0x19a774: 0xc66000d4  lwc1        $f0, 0xD4($s3)
    ctx->pc = 0x19a774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a778:
    // 0x19a778: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19a778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19a77c:
    // 0x19a77c: 0xc050ba4  jal         func_142E90
label_19a780:
    if (ctx->pc == 0x19A780u) {
        ctx->pc = 0x19A780u;
            // 0x19a780: 0xe66000d4  swc1        $f0, 0xD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
        ctx->pc = 0x19A784u;
        goto label_19a784;
    }
    ctx->pc = 0x19A77Cu;
    SET_GPR_U32(ctx, 31, 0x19A784u);
    ctx->pc = 0x19A780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A77Cu;
            // 0x19a780: 0xe66000d4  swc1        $f0, 0xD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A784u; }
        if (ctx->pc != 0x19A784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A784u; }
        if (ctx->pc != 0x19A784u) { return; }
    }
    ctx->pc = 0x19A784u;
label_19a784:
    // 0x19a784: 0xc040d72  jal         func_1035C8
label_19a788:
    if (ctx->pc == 0x19A788u) {
        ctx->pc = 0x19A788u;
            // 0x19a788: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x19A78Cu;
        goto label_19a78c;
    }
    ctx->pc = 0x19A784u;
    SET_GPR_U32(ctx, 31, 0x19A78Cu);
    ctx->pc = 0x19A788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A784u;
            // 0x19a788: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A78Cu; }
        if (ctx->pc != 0x19A78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A78Cu; }
        if (ctx->pc != 0x19A78Cu) { return; }
    }
    ctx->pc = 0x19A78Cu;
label_19a78c:
    // 0x19a78c: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x19a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_19a790:
    // 0x19a790: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x19a790u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_19a794:
    // 0x19a794: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x19a794u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_19a798:
    // 0x19a798: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x19a798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_19a79c:
    // 0x19a79c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19a79cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_19a7a0:
    // 0x19a7a0: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x19a7a0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_19a7a4:
    // 0x19a7a4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x19a7a4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_19a7a8:
    // 0x19a7a8: 0xc040880  jal         func_102200
label_19a7ac:
    if (ctx->pc == 0x19A7ACu) {
        ctx->pc = 0x19A7ACu;
            // 0x19a7ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19A7B0u;
        goto label_19a7b0;
    }
    ctx->pc = 0x19A7A8u;
    SET_GPR_U32(ctx, 31, 0x19A7B0u);
    ctx->pc = 0x19A7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A7A8u;
            // 0x19a7ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7B0u; }
        if (ctx->pc != 0x19A7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7B0u; }
        if (ctx->pc != 0x19A7B0u) { return; }
    }
    ctx->pc = 0x19A7B0u;
label_19a7b0:
    // 0x19a7b0: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x19a7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_19a7b4:
    // 0x19a7b4: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x19a7b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_19a7b8:
    // 0x19a7b8: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x19a7b8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_19a7bc:
    // 0x19a7bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x19a7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_19a7c0:
    // 0x19a7c0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19a7c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_19a7c4:
    // 0x19a7c4: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x19a7c4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_19a7c8:
    // 0x19a7c8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x19a7c8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_19a7cc:
    // 0x19a7cc: 0xc040866  jal         func_102198
label_19a7d0:
    if (ctx->pc == 0x19A7D0u) {
        ctx->pc = 0x19A7D0u;
            // 0x19a7d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19A7D4u;
        goto label_19a7d4;
    }
    ctx->pc = 0x19A7CCu;
    SET_GPR_U32(ctx, 31, 0x19A7D4u);
    ctx->pc = 0x19A7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A7CCu;
            // 0x19a7d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7D4u; }
        if (ctx->pc != 0x19A7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7D4u; }
        if (ctx->pc != 0x19A7D4u) { return; }
    }
    ctx->pc = 0x19A7D4u;
label_19a7d4:
    // 0x19a7d4: 0xc040a74  jal         func_1029D0
label_19a7d8:
    if (ctx->pc == 0x19A7D8u) {
        ctx->pc = 0x19A7D8u;
            // 0x19a7d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19A7DCu;
        goto label_19a7dc;
    }
    ctx->pc = 0x19A7D4u;
    SET_GPR_U32(ctx, 31, 0x19A7DCu);
    ctx->pc = 0x19A7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A7D4u;
            // 0x19a7d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7DCu; }
        if (ctx->pc != 0x19A7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7DCu; }
        if (ctx->pc != 0x19A7DCu) { return; }
    }
    ctx->pc = 0x19A7DCu;
label_19a7dc:
    // 0x19a7dc: 0xc66100e4  lwc1        $f1, 0xE4($s3)
    ctx->pc = 0x19a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a7e0:
    // 0x19a7e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19a7e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19a7e4:
    // 0x19a7e4: 0xc050ba4  jal         func_142E90
label_19a7e8:
    if (ctx->pc == 0x19A7E8u) {
        ctx->pc = 0x19A7E8u;
            // 0x19a7e8: 0xe66000e4  swc1        $f0, 0xE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 228), bits); }
        ctx->pc = 0x19A7ECu;
        goto label_19a7ec;
    }
    ctx->pc = 0x19A7E4u;
    SET_GPR_U32(ctx, 31, 0x19A7ECu);
    ctx->pc = 0x19A7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A7E4u;
            // 0x19a7e8: 0xe66000e4  swc1        $f0, 0xE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7ECu; }
        if (ctx->pc != 0x19A7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7ECu; }
        if (ctx->pc != 0x19A7ECu) { return; }
    }
    ctx->pc = 0x19A7ECu;
label_19a7ec:
    // 0x19a7ec: 0xc040d72  jal         func_1035C8
label_19a7f0:
    if (ctx->pc == 0x19A7F0u) {
        ctx->pc = 0x19A7F0u;
            // 0x19a7f0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x19A7F4u;
        goto label_19a7f4;
    }
    ctx->pc = 0x19A7ECu;
    SET_GPR_U32(ctx, 31, 0x19A7F4u);
    ctx->pc = 0x19A7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A7ECu;
            // 0x19a7f0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7F4u; }
        if (ctx->pc != 0x19A7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7F4u; }
        if (ctx->pc != 0x19A7F4u) { return; }
    }
    ctx->pc = 0x19A7F4u;
label_19a7f4:
    // 0x19a7f4: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x19a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_19a7f8:
    // 0x19a7f8: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x19a7f8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_19a7fc:
    // 0x19a7fc: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x19a7fcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_19a800:
    // 0x19a800: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x19a800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_19a804:
    // 0x19a804: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19a804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_19a808:
    // 0x19a808: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x19a808u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_19a80c:
    // 0x19a80c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x19a80cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_19a810:
    // 0x19a810: 0xc040880  jal         func_102200
label_19a814:
    if (ctx->pc == 0x19A814u) {
        ctx->pc = 0x19A814u;
            // 0x19a814: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19A818u;
        goto label_19a818;
    }
    ctx->pc = 0x19A810u;
    SET_GPR_U32(ctx, 31, 0x19A818u);
    ctx->pc = 0x19A814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A810u;
            // 0x19a814: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A818u; }
        if (ctx->pc != 0x19A818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A818u; }
        if (ctx->pc != 0x19A818u) { return; }
    }
    ctx->pc = 0x19A818u;
label_19a818:
    // 0x19a818: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x19a818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_19a81c:
    // 0x19a81c: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x19a81cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_19a820:
    // 0x19a820: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x19a820u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_19a824:
    // 0x19a824: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x19a824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_19a828:
    // 0x19a828: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19a828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_19a82c:
    // 0x19a82c: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x19a82cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_19a830:
    // 0x19a830: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x19a830u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_19a834:
    // 0x19a834: 0xc040866  jal         func_102198
label_19a838:
    if (ctx->pc == 0x19A838u) {
        ctx->pc = 0x19A838u;
            // 0x19a838: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19A83Cu;
        goto label_19a83c;
    }
    ctx->pc = 0x19A834u;
    SET_GPR_U32(ctx, 31, 0x19A83Cu);
    ctx->pc = 0x19A838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A834u;
            // 0x19a838: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A83Cu; }
        if (ctx->pc != 0x19A83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A83Cu; }
        if (ctx->pc != 0x19A83Cu) { return; }
    }
    ctx->pc = 0x19A83Cu;
label_19a83c:
    // 0x19a83c: 0xc040a74  jal         func_1029D0
label_19a840:
    if (ctx->pc == 0x19A840u) {
        ctx->pc = 0x19A840u;
            // 0x19a840: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19A844u;
        goto label_19a844;
    }
    ctx->pc = 0x19A83Cu;
    SET_GPR_U32(ctx, 31, 0x19A844u);
    ctx->pc = 0x19A840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A83Cu;
            // 0x19a840: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A844u; }
        if (ctx->pc != 0x19A844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A844u; }
        if (ctx->pc != 0x19A844u) { return; }
    }
    ctx->pc = 0x19A844u;
label_19a844:
    // 0x19a844: 0xc66100e0  lwc1        $f1, 0xE0($s3)
    ctx->pc = 0x19a844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a848:
    // 0x19a848: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19a848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19a84c:
    // 0x19a84c: 0xe66000e0  swc1        $f0, 0xE0($s3)
    ctx->pc = 0x19a84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
label_19a850:
    // 0x19a850: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x19a850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_19a854:
    // 0x19a854: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x19a854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
label_19a858:
    // 0x19a858: 0x14200105  bnez        $at, . + 4 + (0x105 << 2)
label_19a85c:
    if (ctx->pc == 0x19A85Cu) {
        ctx->pc = 0x19A860u;
        goto label_19a860;
    }
    ctx->pc = 0x19A858u;
    {
        const bool branch_taken_0x19a858 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a858) {
            ctx->pc = 0x19AC70u;
            goto label_19ac70;
        }
    }
    ctx->pc = 0x19A860u;
label_19a860:
    // 0x19a860: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x19a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a864:
    // 0x19a864: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x19a864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_19a868:
    // 0x19a868: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x19a868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a86c:
    // 0x19a86c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19a86cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19a870:
    // 0x19a870: 0xc05d080  jal         func_174200
label_19a874:
    if (ctx->pc == 0x19A874u) {
        ctx->pc = 0x19A874u;
            // 0x19a874: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19A878u;
        goto label_19a878;
    }
    ctx->pc = 0x19A870u;
    SET_GPR_U32(ctx, 31, 0x19A878u);
    ctx->pc = 0x19A874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A870u;
            // 0x19a874: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A878u; }
        if (ctx->pc != 0x19A878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A878u; }
        if (ctx->pc != 0x19A878u) { return; }
    }
    ctx->pc = 0x19A878u;
label_19a878:
    // 0x19a878: 0xc050bb4  jal         func_142ED0
label_19a87c:
    if (ctx->pc == 0x19A87Cu) {
        ctx->pc = 0x19A880u;
        goto label_19a880;
    }
    ctx->pc = 0x19A878u;
    SET_GPR_U32(ctx, 31, 0x19A880u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A880u; }
        if (ctx->pc != 0x19A880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A880u; }
        if (ctx->pc != 0x19A880u) { return; }
    }
    ctx->pc = 0x19A880u;
label_19a880:
    // 0x19a880: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a880u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_19a884:
    // 0x19a884: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19a888:
    if (ctx->pc == 0x19A888u) {
        ctx->pc = 0x19A88Cu;
        goto label_19a88c;
    }
    ctx->pc = 0x19A884u;
    {
        const bool branch_taken_0x19a884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a884) {
            ctx->pc = 0x19A8A8u;
            goto label_19a8a8;
        }
    }
    ctx->pc = 0x19A88Cu;
label_19a88c:
    // 0x19a88c: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x19a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a890:
    // 0x19a890: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x19a890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_19a894:
    // 0x19a894: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x19a894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a898:
    // 0x19a898: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19a898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19a89c:
    // 0x19a89c: 0xc05d080  jal         func_174200
label_19a8a0:
    if (ctx->pc == 0x19A8A0u) {
        ctx->pc = 0x19A8A0u;
            // 0x19a8a0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19A8A4u;
        goto label_19a8a4;
    }
    ctx->pc = 0x19A89Cu;
    SET_GPR_U32(ctx, 31, 0x19A8A4u);
    ctx->pc = 0x19A8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A89Cu;
            // 0x19a8a0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8A4u; }
        if (ctx->pc != 0x19A8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8A4u; }
        if (ctx->pc != 0x19A8A4u) { return; }
    }
    ctx->pc = 0x19A8A4u;
label_19a8a4:
    // 0x19a8a4: 0x0  nop
    ctx->pc = 0x19a8a4u;
    // NOP
label_19a8a8:
    // 0x19a8a8: 0xc050bb4  jal         func_142ED0
label_19a8ac:
    if (ctx->pc == 0x19A8ACu) {
        ctx->pc = 0x19A8B0u;
        goto label_19a8b0;
    }
    ctx->pc = 0x19A8A8u;
    SET_GPR_U32(ctx, 31, 0x19A8B0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8B0u; }
        if (ctx->pc != 0x19A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8B0u; }
        if (ctx->pc != 0x19A8B0u) { return; }
    }
    ctx->pc = 0x19A8B0u;
label_19a8b0:
    // 0x19a8b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a8b0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_19a8b4:
    // 0x19a8b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19a8b8:
    if (ctx->pc == 0x19A8B8u) {
        ctx->pc = 0x19A8BCu;
        goto label_19a8bc;
    }
    ctx->pc = 0x19A8B4u;
    {
        const bool branch_taken_0x19a8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a8b4) {
            ctx->pc = 0x19A8D8u;
            goto label_19a8d8;
        }
    }
    ctx->pc = 0x19A8BCu;
label_19a8bc:
    // 0x19a8bc: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x19a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a8c0:
    // 0x19a8c0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x19a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_19a8c4:
    // 0x19a8c4: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x19a8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a8c8:
    // 0x19a8c8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19a8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19a8cc:
    // 0x19a8cc: 0xc05d080  jal         func_174200
label_19a8d0:
    if (ctx->pc == 0x19A8D0u) {
        ctx->pc = 0x19A8D0u;
            // 0x19a8d0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19A8D4u;
        goto label_19a8d4;
    }
    ctx->pc = 0x19A8CCu;
    SET_GPR_U32(ctx, 31, 0x19A8D4u);
    ctx->pc = 0x19A8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8CCu;
            // 0x19a8d0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8D4u; }
        if (ctx->pc != 0x19A8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8D4u; }
        if (ctx->pc != 0x19A8D4u) { return; }
    }
    ctx->pc = 0x19A8D4u;
label_19a8d4:
    // 0x19a8d4: 0x0  nop
    ctx->pc = 0x19a8d4u;
    // NOP
label_19a8d8:
    // 0x19a8d8: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x19a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19a8dc:
    // 0x19a8dc: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x19a8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19a8e0:
    // 0x19a8e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19a8e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a8e4:
    // 0x19a8e4: 0xc053740  jal         func_14DD00
label_19a8e8:
    if (ctx->pc == 0x19A8E8u) {
        ctx->pc = 0x19A8E8u;
            // 0x19a8e8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x19A8ECu;
        goto label_19a8ec;
    }
    ctx->pc = 0x19A8E4u;
    SET_GPR_U32(ctx, 31, 0x19A8ECu);
    ctx->pc = 0x19A8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8E4u;
            // 0x19a8e8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8ECu; }
        if (ctx->pc != 0x19A8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8ECu; }
        if (ctx->pc != 0x19A8ECu) { return; }
    }
    ctx->pc = 0x19A8ECu;
label_19a8ec:
    // 0x19a8ec: 0xc050bb4  jal         func_142ED0
label_19a8f0:
    if (ctx->pc == 0x19A8F0u) {
        ctx->pc = 0x19A8F4u;
        goto label_19a8f4;
    }
    ctx->pc = 0x19A8ECu;
    SET_GPR_U32(ctx, 31, 0x19A8F4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8F4u; }
        if (ctx->pc != 0x19A8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8F4u; }
        if (ctx->pc != 0x19A8F4u) { return; }
    }
    ctx->pc = 0x19A8F4u;
label_19a8f4:
    // 0x19a8f4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19a8f8:
    // 0x19a8f8: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x19a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19a8fc:
    // 0x19a8fc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19a8fcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19a900:
    // 0x19a900: 0x0  nop
    ctx->pc = 0x19a900u;
    // NOP
label_19a904:
    // 0x19a904: 0x0  nop
    ctx->pc = 0x19a904u;
    // NOP
label_19a908:
    // 0x19a908: 0x1010  mfhi        $v0
    ctx->pc = 0x19a908u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19a90c:
    // 0x19a90c: 0xc050bb4  jal         func_142ED0
label_19a910:
    if (ctx->pc == 0x19A910u) {
        ctx->pc = 0x19A910u;
            // 0x19a910: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19A914u;
        goto label_19a914;
    }
    ctx->pc = 0x19A90Cu;
    SET_GPR_U32(ctx, 31, 0x19A914u);
    ctx->pc = 0x19A910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A90Cu;
            // 0x19a910: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A914u; }
        if (ctx->pc != 0x19A914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A914u; }
        if (ctx->pc != 0x19A914u) { return; }
    }
    ctx->pc = 0x19A914u;
label_19a914:
    // 0x19a914: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19a914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19a918:
    // 0x19a918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a91c:
    // 0x19a91c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19a91cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19a920:
    // 0x19a920: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19a920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a924:
    // 0x19a924: 0x0  nop
    ctx->pc = 0x19a924u;
    // NOP
label_19a928:
    // 0x19a928: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19a928u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19a92c:
    // 0x19a92c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x19a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19a930:
    // 0x19a930: 0x1810  mfhi        $v1
    ctx->pc = 0x19a930u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_19a934:
    // 0x19a934: 0xc053740  jal         func_14DD00
label_19a938:
    if (ctx->pc == 0x19A938u) {
        ctx->pc = 0x19A938u;
            // 0x19a938: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x19A93Cu;
        goto label_19a93c;
    }
    ctx->pc = 0x19A934u;
    SET_GPR_U32(ctx, 31, 0x19A93Cu);
    ctx->pc = 0x19A938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A934u;
            // 0x19a938: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A93Cu; }
        if (ctx->pc != 0x19A93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A93Cu; }
        if (ctx->pc != 0x19A93Cu) { return; }
    }
    ctx->pc = 0x19A93Cu;
label_19a93c:
    // 0x19a93c: 0xc050bb4  jal         func_142ED0
label_19a940:
    if (ctx->pc == 0x19A940u) {
        ctx->pc = 0x19A944u;
        goto label_19a944;
    }
    ctx->pc = 0x19A93Cu;
    SET_GPR_U32(ctx, 31, 0x19A944u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A944u; }
        if (ctx->pc != 0x19A944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A944u; }
        if (ctx->pc != 0x19A944u) { return; }
    }
    ctx->pc = 0x19A944u;
label_19a944:
    // 0x19a944: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19a944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19a948:
    // 0x19a948: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x19a948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19a94c:
    // 0x19a94c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19a94cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19a950:
    // 0x19a950: 0x0  nop
    ctx->pc = 0x19a950u;
    // NOP
label_19a954:
    // 0x19a954: 0x0  nop
    ctx->pc = 0x19a954u;
    // NOP
label_19a958:
    // 0x19a958: 0x1010  mfhi        $v0
    ctx->pc = 0x19a958u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19a95c:
    // 0x19a95c: 0xc050bb4  jal         func_142ED0
label_19a960:
    if (ctx->pc == 0x19A960u) {
        ctx->pc = 0x19A960u;
            // 0x19a960: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19A964u;
        goto label_19a964;
    }
    ctx->pc = 0x19A95Cu;
    SET_GPR_U32(ctx, 31, 0x19A964u);
    ctx->pc = 0x19A960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A95Cu;
            // 0x19a960: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A964u; }
        if (ctx->pc != 0x19A964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A964u; }
        if (ctx->pc != 0x19A964u) { return; }
    }
    ctx->pc = 0x19A964u;
label_19a964:
    // 0x19a964: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19a964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19a968:
    // 0x19a968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a96c:
    // 0x19a96c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19a96cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19a970:
    // 0x19a970: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19a970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a974:
    // 0x19a974: 0x0  nop
    ctx->pc = 0x19a974u;
    // NOP
label_19a978:
    // 0x19a978: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19a978u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19a97c:
    // 0x19a97c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x19a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19a980:
    // 0x19a980: 0x1810  mfhi        $v1
    ctx->pc = 0x19a980u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_19a984:
    // 0x19a984: 0xc053740  jal         func_14DD00
label_19a988:
    if (ctx->pc == 0x19A988u) {
        ctx->pc = 0x19A988u;
            // 0x19a988: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x19A98Cu;
        goto label_19a98c;
    }
    ctx->pc = 0x19A984u;
    SET_GPR_U32(ctx, 31, 0x19A98Cu);
    ctx->pc = 0x19A988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A984u;
            // 0x19a988: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A98Cu; }
        if (ctx->pc != 0x19A98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A98Cu; }
        if (ctx->pc != 0x19A98Cu) { return; }
    }
    ctx->pc = 0x19A98Cu;
label_19a98c:
    // 0x19a98c: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x19a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19a990:
    // 0x19a990: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19a990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a994:
    // 0x19a994: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x19a994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19a998:
    // 0x19a998: 0xc053740  jal         func_14DD00
label_19a99c:
    if (ctx->pc == 0x19A99Cu) {
        ctx->pc = 0x19A99Cu;
            // 0x19a99c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x19A9A0u;
        goto label_19a9a0;
    }
    ctx->pc = 0x19A998u;
    SET_GPR_U32(ctx, 31, 0x19A9A0u);
    ctx->pc = 0x19A99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A998u;
            // 0x19a99c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9A0u; }
        if (ctx->pc != 0x19A9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9A0u; }
        if (ctx->pc != 0x19A9A0u) { return; }
    }
    ctx->pc = 0x19A9A0u;
label_19a9a0:
    // 0x19a9a0: 0xc050bb4  jal         func_142ED0
label_19a9a4:
    if (ctx->pc == 0x19A9A4u) {
        ctx->pc = 0x19A9A8u;
        goto label_19a9a8;
    }
    ctx->pc = 0x19A9A0u;
    SET_GPR_U32(ctx, 31, 0x19A9A8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9A8u; }
        if (ctx->pc != 0x19A9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9A8u; }
        if (ctx->pc != 0x19A9A8u) { return; }
    }
    ctx->pc = 0x19A9A8u;
label_19a9a8:
    // 0x19a9a8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19a9ac:
    // 0x19a9ac: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x19a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19a9b0:
    // 0x19a9b0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19a9b0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19a9b4:
    // 0x19a9b4: 0x0  nop
    ctx->pc = 0x19a9b4u;
    // NOP
label_19a9b8:
    // 0x19a9b8: 0x0  nop
    ctx->pc = 0x19a9b8u;
    // NOP
label_19a9bc:
    // 0x19a9bc: 0x1010  mfhi        $v0
    ctx->pc = 0x19a9bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19a9c0:
    // 0x19a9c0: 0xc050bb4  jal         func_142ED0
label_19a9c4:
    if (ctx->pc == 0x19A9C4u) {
        ctx->pc = 0x19A9C4u;
            // 0x19a9c4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19A9C8u;
        goto label_19a9c8;
    }
    ctx->pc = 0x19A9C0u;
    SET_GPR_U32(ctx, 31, 0x19A9C8u);
    ctx->pc = 0x19A9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A9C0u;
            // 0x19a9c4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9C8u; }
        if (ctx->pc != 0x19A9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9C8u; }
        if (ctx->pc != 0x19A9C8u) { return; }
    }
    ctx->pc = 0x19A9C8u;
label_19a9c8:
    // 0x19a9c8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19a9cc:
    // 0x19a9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a9d0:
    // 0x19a9d0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19a9d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19a9d4:
    // 0x19a9d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_19a9d8:
    // 0x19a9d8: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x19a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19a9dc:
    // 0x19a9dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19a9e0:
    // 0x19a9e0: 0x1010  mfhi        $v0
    ctx->pc = 0x19a9e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19a9e4:
    // 0x19a9e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19a9e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19a9e8:
    // 0x19a9e8: 0xc053740  jal         func_14DD00
label_19a9ec:
    if (ctx->pc == 0x19A9ECu) {
        ctx->pc = 0x19A9ECu;
            // 0x19a9ec: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19A9F0u;
        goto label_19a9f0;
    }
    ctx->pc = 0x19A9E8u;
    SET_GPR_U32(ctx, 31, 0x19A9F0u);
    ctx->pc = 0x19A9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A9E8u;
            // 0x19a9ec: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9F0u; }
        if (ctx->pc != 0x19A9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9F0u; }
        if (ctx->pc != 0x19A9F0u) { return; }
    }
    ctx->pc = 0x19A9F0u;
label_19a9f0:
    // 0x19a9f0: 0xc050bb4  jal         func_142ED0
label_19a9f4:
    if (ctx->pc == 0x19A9F4u) {
        ctx->pc = 0x19A9F8u;
        goto label_19a9f8;
    }
    ctx->pc = 0x19A9F0u;
    SET_GPR_U32(ctx, 31, 0x19A9F8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9F8u; }
        if (ctx->pc != 0x19A9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9F8u; }
        if (ctx->pc != 0x19A9F8u) { return; }
    }
    ctx->pc = 0x19A9F8u;
label_19a9f8:
    // 0x19a9f8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19a9fc:
    // 0x19a9fc: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x19a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19aa00:
    // 0x19aa00: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19aa00u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19aa04:
    // 0x19aa04: 0x0  nop
    ctx->pc = 0x19aa04u;
    // NOP
label_19aa08:
    // 0x19aa08: 0x0  nop
    ctx->pc = 0x19aa08u;
    // NOP
label_19aa0c:
    // 0x19aa0c: 0x1010  mfhi        $v0
    ctx->pc = 0x19aa0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19aa10:
    // 0x19aa10: 0xc050bb4  jal         func_142ED0
label_19aa14:
    if (ctx->pc == 0x19AA14u) {
        ctx->pc = 0x19AA14u;
            // 0x19aa14: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19AA18u;
        goto label_19aa18;
    }
    ctx->pc = 0x19AA10u;
    SET_GPR_U32(ctx, 31, 0x19AA18u);
    ctx->pc = 0x19AA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AA10u;
            // 0x19aa14: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA18u; }
        if (ctx->pc != 0x19AA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA18u; }
        if (ctx->pc != 0x19AA18u) { return; }
    }
    ctx->pc = 0x19AA18u;
label_19aa18:
    // 0x19aa18: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19aa1c:
    // 0x19aa1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19aa1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19aa20:
    // 0x19aa20: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19aa20u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19aa24:
    // 0x19aa24: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_19aa28:
    // 0x19aa28: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x19aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19aa2c:
    // 0x19aa2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19aa2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19aa30:
    // 0x19aa30: 0x1010  mfhi        $v0
    ctx->pc = 0x19aa30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19aa34:
    // 0x19aa34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19aa34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19aa38:
    // 0x19aa38: 0xc053740  jal         func_14DD00
label_19aa3c:
    if (ctx->pc == 0x19AA3Cu) {
        ctx->pc = 0x19AA3Cu;
            // 0x19aa3c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19AA40u;
        goto label_19aa40;
    }
    ctx->pc = 0x19AA38u;
    SET_GPR_U32(ctx, 31, 0x19AA40u);
    ctx->pc = 0x19AA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AA38u;
            // 0x19aa3c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA40u; }
        if (ctx->pc != 0x19AA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA40u; }
        if (ctx->pc != 0x19AA40u) { return; }
    }
    ctx->pc = 0x19AA40u;
label_19aa40:
    // 0x19aa40: 0xc050bb4  jal         func_142ED0
label_19aa44:
    if (ctx->pc == 0x19AA44u) {
        ctx->pc = 0x19AA48u;
        goto label_19aa48;
    }
    ctx->pc = 0x19AA40u;
    SET_GPR_U32(ctx, 31, 0x19AA48u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA48u; }
        if (ctx->pc != 0x19AA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA48u; }
        if (ctx->pc != 0x19AA48u) { return; }
    }
    ctx->pc = 0x19AA48u;
label_19aa48:
    // 0x19aa48: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19aa48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19aa4c:
    // 0x19aa4c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x19aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19aa50:
    // 0x19aa50: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19aa50u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19aa54:
    // 0x19aa54: 0x0  nop
    ctx->pc = 0x19aa54u;
    // NOP
label_19aa58:
    // 0x19aa58: 0x0  nop
    ctx->pc = 0x19aa58u;
    // NOP
label_19aa5c:
    // 0x19aa5c: 0x1010  mfhi        $v0
    ctx->pc = 0x19aa5cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19aa60:
    // 0x19aa60: 0xc050bb4  jal         func_142ED0
label_19aa64:
    if (ctx->pc == 0x19AA64u) {
        ctx->pc = 0x19AA64u;
            // 0x19aa64: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19AA68u;
        goto label_19aa68;
    }
    ctx->pc = 0x19AA60u;
    SET_GPR_U32(ctx, 31, 0x19AA68u);
    ctx->pc = 0x19AA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AA60u;
            // 0x19aa64: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA68u; }
        if (ctx->pc != 0x19AA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA68u; }
        if (ctx->pc != 0x19AA68u) { return; }
    }
    ctx->pc = 0x19AA68u;
label_19aa68:
    // 0x19aa68: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19aa6c:
    // 0x19aa6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19aa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19aa70:
    // 0x19aa70: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19aa70u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19aa74:
    // 0x19aa74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_19aa78:
    // 0x19aa78: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x19aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19aa7c:
    // 0x19aa7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19aa7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19aa80:
    // 0x19aa80: 0x1010  mfhi        $v0
    ctx->pc = 0x19aa80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19aa84:
    // 0x19aa84: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19aa84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19aa88:
    // 0x19aa88: 0xc053740  jal         func_14DD00
label_19aa8c:
    if (ctx->pc == 0x19AA8Cu) {
        ctx->pc = 0x19AA8Cu;
            // 0x19aa8c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19AA90u;
        goto label_19aa90;
    }
    ctx->pc = 0x19AA88u;
    SET_GPR_U32(ctx, 31, 0x19AA90u);
    ctx->pc = 0x19AA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AA88u;
            // 0x19aa8c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA90u; }
        if (ctx->pc != 0x19AA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA90u; }
        if (ctx->pc != 0x19AA90u) { return; }
    }
    ctx->pc = 0x19AA90u;
label_19aa90:
    // 0x19aa90: 0xc050bb4  jal         func_142ED0
label_19aa94:
    if (ctx->pc == 0x19AA94u) {
        ctx->pc = 0x19AA98u;
        goto label_19aa98;
    }
    ctx->pc = 0x19AA90u;
    SET_GPR_U32(ctx, 31, 0x19AA98u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA98u; }
        if (ctx->pc != 0x19AA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA98u; }
        if (ctx->pc != 0x19AA98u) { return; }
    }
    ctx->pc = 0x19AA98u;
label_19aa98:
    // 0x19aa98: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19aa9c:
    // 0x19aa9c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x19aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19aaa0:
    // 0x19aaa0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19aaa0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19aaa4:
    // 0x19aaa4: 0x0  nop
    ctx->pc = 0x19aaa4u;
    // NOP
label_19aaa8:
    // 0x19aaa8: 0x0  nop
    ctx->pc = 0x19aaa8u;
    // NOP
label_19aaac:
    // 0x19aaac: 0x1010  mfhi        $v0
    ctx->pc = 0x19aaacu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19aab0:
    // 0x19aab0: 0xc050bb4  jal         func_142ED0
label_19aab4:
    if (ctx->pc == 0x19AAB4u) {
        ctx->pc = 0x19AAB4u;
            // 0x19aab4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19AAB8u;
        goto label_19aab8;
    }
    ctx->pc = 0x19AAB0u;
    SET_GPR_U32(ctx, 31, 0x19AAB8u);
    ctx->pc = 0x19AAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AAB0u;
            // 0x19aab4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAB8u; }
        if (ctx->pc != 0x19AAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAB8u; }
        if (ctx->pc != 0x19AAB8u) { return; }
    }
    ctx->pc = 0x19AAB8u;
label_19aab8:
    // 0x19aab8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19aabc:
    // 0x19aabc: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x19aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19aac0:
    // 0x19aac0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19aac0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19aac4:
    // 0x19aac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19aac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19aac8:
    // 0x19aac8: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x19aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_19aacc:
    // 0x19aacc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_19aad0:
    // 0x19aad0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19aad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19aad4:
    // 0x19aad4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x19aad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19aad8:
    // 0x19aad8: 0x1010  mfhi        $v0
    ctx->pc = 0x19aad8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19aadc:
    // 0x19aadc: 0xc053740  jal         func_14DD00
label_19aae0:
    if (ctx->pc == 0x19AAE0u) {
        ctx->pc = 0x19AAE0u;
            // 0x19aae0: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x19AAE4u;
        goto label_19aae4;
    }
    ctx->pc = 0x19AADCu;
    SET_GPR_U32(ctx, 31, 0x19AAE4u);
    ctx->pc = 0x19AAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AADCu;
            // 0x19aae0: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAE4u; }
        if (ctx->pc != 0x19AAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAE4u; }
        if (ctx->pc != 0x19AAE4u) { return; }
    }
    ctx->pc = 0x19AAE4u;
label_19aae4:
    // 0x19aae4: 0xc050bb4  jal         func_142ED0
label_19aae8:
    if (ctx->pc == 0x19AAE8u) {
        ctx->pc = 0x19AAECu;
        goto label_19aaec;
    }
    ctx->pc = 0x19AAE4u;
    SET_GPR_U32(ctx, 31, 0x19AAECu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAECu; }
        if (ctx->pc != 0x19AAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAECu; }
        if (ctx->pc != 0x19AAECu) { return; }
    }
    ctx->pc = 0x19AAECu;
label_19aaec:
    // 0x19aaec: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19aaf0:
    // 0x19aaf0: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x19aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19aaf4:
    // 0x19aaf4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19aaf4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19aaf8:
    // 0x19aaf8: 0x0  nop
    ctx->pc = 0x19aaf8u;
    // NOP
label_19aafc:
    // 0x19aafc: 0x0  nop
    ctx->pc = 0x19aafcu;
    // NOP
label_19ab00:
    // 0x19ab00: 0x1010  mfhi        $v0
    ctx->pc = 0x19ab00u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19ab04:
    // 0x19ab04: 0xc050bb4  jal         func_142ED0
label_19ab08:
    if (ctx->pc == 0x19AB08u) {
        ctx->pc = 0x19AB08u;
            // 0x19ab08: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19AB0Cu;
        goto label_19ab0c;
    }
    ctx->pc = 0x19AB04u;
    SET_GPR_U32(ctx, 31, 0x19AB0Cu);
    ctx->pc = 0x19AB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB04u;
            // 0x19ab08: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB0Cu; }
        if (ctx->pc != 0x19AB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB0Cu; }
        if (ctx->pc != 0x19AB0Cu) { return; }
    }
    ctx->pc = 0x19AB0Cu;
label_19ab0c:
    // 0x19ab0c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19ab10:
    // 0x19ab10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ab10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ab14:
    // 0x19ab14: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19ab14u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19ab18:
    // 0x19ab18: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x19ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_19ab1c:
    // 0x19ab1c: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x19ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19ab20:
    // 0x19ab20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19ab20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19ab24:
    // 0x19ab24: 0x1010  mfhi        $v0
    ctx->pc = 0x19ab24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19ab28:
    // 0x19ab28: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19ab28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19ab2c:
    // 0x19ab2c: 0xc053740  jal         func_14DD00
label_19ab30:
    if (ctx->pc == 0x19AB30u) {
        ctx->pc = 0x19AB30u;
            // 0x19ab30: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19AB34u;
        goto label_19ab34;
    }
    ctx->pc = 0x19AB2Cu;
    SET_GPR_U32(ctx, 31, 0x19AB34u);
    ctx->pc = 0x19AB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB2Cu;
            // 0x19ab30: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB34u; }
        if (ctx->pc != 0x19AB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB34u; }
        if (ctx->pc != 0x19AB34u) { return; }
    }
    ctx->pc = 0x19AB34u;
label_19ab34:
    // 0x19ab34: 0xc050bb4  jal         func_142ED0
label_19ab38:
    if (ctx->pc == 0x19AB38u) {
        ctx->pc = 0x19AB3Cu;
        goto label_19ab3c;
    }
    ctx->pc = 0x19AB34u;
    SET_GPR_U32(ctx, 31, 0x19AB3Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB3Cu; }
        if (ctx->pc != 0x19AB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB3Cu; }
        if (ctx->pc != 0x19AB3Cu) { return; }
    }
    ctx->pc = 0x19AB3Cu;
label_19ab3c:
    // 0x19ab3c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19ab40:
    // 0x19ab40: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x19ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19ab44:
    // 0x19ab44: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19ab44u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19ab48:
    // 0x19ab48: 0x0  nop
    ctx->pc = 0x19ab48u;
    // NOP
label_19ab4c:
    // 0x19ab4c: 0x0  nop
    ctx->pc = 0x19ab4cu;
    // NOP
label_19ab50:
    // 0x19ab50: 0x1010  mfhi        $v0
    ctx->pc = 0x19ab50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19ab54:
    // 0x19ab54: 0xc050bb4  jal         func_142ED0
label_19ab58:
    if (ctx->pc == 0x19AB58u) {
        ctx->pc = 0x19AB58u;
            // 0x19ab58: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19AB5Cu;
        goto label_19ab5c;
    }
    ctx->pc = 0x19AB54u;
    SET_GPR_U32(ctx, 31, 0x19AB5Cu);
    ctx->pc = 0x19AB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB54u;
            // 0x19ab58: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB5Cu; }
        if (ctx->pc != 0x19AB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB5Cu; }
        if (ctx->pc != 0x19AB5Cu) { return; }
    }
    ctx->pc = 0x19AB5Cu;
label_19ab5c:
    // 0x19ab5c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19ab60:
    // 0x19ab60: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x19ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19ab64:
    // 0x19ab64: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19ab64u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19ab68:
    // 0x19ab68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ab68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ab6c:
    // 0x19ab6c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_19ab70:
    // 0x19ab70: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x19ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_19ab74:
    // 0x19ab74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19ab74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19ab78:
    // 0x19ab78: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x19ab78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19ab7c:
    // 0x19ab7c: 0x1010  mfhi        $v0
    ctx->pc = 0x19ab7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19ab80:
    // 0x19ab80: 0xc053740  jal         func_14DD00
label_19ab84:
    if (ctx->pc == 0x19AB84u) {
        ctx->pc = 0x19AB84u;
            // 0x19ab84: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x19AB88u;
        goto label_19ab88;
    }
    ctx->pc = 0x19AB80u;
    SET_GPR_U32(ctx, 31, 0x19AB88u);
    ctx->pc = 0x19AB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB80u;
            // 0x19ab84: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB88u; }
        if (ctx->pc != 0x19AB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB88u; }
        if (ctx->pc != 0x19AB88u) { return; }
    }
    ctx->pc = 0x19AB88u;
label_19ab88:
    // 0x19ab88: 0xc050bb4  jal         func_142ED0
label_19ab8c:
    if (ctx->pc == 0x19AB8Cu) {
        ctx->pc = 0x19AB90u;
        goto label_19ab90;
    }
    ctx->pc = 0x19AB88u;
    SET_GPR_U32(ctx, 31, 0x19AB90u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB90u; }
        if (ctx->pc != 0x19AB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB90u; }
        if (ctx->pc != 0x19AB90u) { return; }
    }
    ctx->pc = 0x19AB90u;
label_19ab90:
    // 0x19ab90: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19ab94:
    // 0x19ab94: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x19ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19ab98:
    // 0x19ab98: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19ab98u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19ab9c:
    // 0x19ab9c: 0x0  nop
    ctx->pc = 0x19ab9cu;
    // NOP
label_19aba0:
    // 0x19aba0: 0x0  nop
    ctx->pc = 0x19aba0u;
    // NOP
label_19aba4:
    // 0x19aba4: 0x1010  mfhi        $v0
    ctx->pc = 0x19aba4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19aba8:
    // 0x19aba8: 0xc050bb4  jal         func_142ED0
label_19abac:
    if (ctx->pc == 0x19ABACu) {
        ctx->pc = 0x19ABACu;
            // 0x19abac: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19ABB0u;
        goto label_19abb0;
    }
    ctx->pc = 0x19ABA8u;
    SET_GPR_U32(ctx, 31, 0x19ABB0u);
    ctx->pc = 0x19ABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABA8u;
            // 0x19abac: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ABB0u; }
        if (ctx->pc != 0x19ABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ABB0u; }
        if (ctx->pc != 0x19ABB0u) { return; }
    }
    ctx->pc = 0x19ABB0u;
label_19abb0:
    // 0x19abb0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19abb4:
    // 0x19abb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19abb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19abb8:
    // 0x19abb8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19abb8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19abbc:
    // 0x19abbc: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x19abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_19abc0:
    // 0x19abc0: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x19abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19abc4:
    // 0x19abc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19abc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19abc8:
    // 0x19abc8: 0x1010  mfhi        $v0
    ctx->pc = 0x19abc8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19abcc:
    // 0x19abcc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19abccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19abd0:
    // 0x19abd0: 0xc053740  jal         func_14DD00
label_19abd4:
    if (ctx->pc == 0x19ABD4u) {
        ctx->pc = 0x19ABD4u;
            // 0x19abd4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19ABD8u;
        goto label_19abd8;
    }
    ctx->pc = 0x19ABD0u;
    SET_GPR_U32(ctx, 31, 0x19ABD8u);
    ctx->pc = 0x19ABD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABD0u;
            // 0x19abd4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ABD8u; }
        if (ctx->pc != 0x19ABD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ABD8u; }
        if (ctx->pc != 0x19ABD8u) { return; }
    }
    ctx->pc = 0x19ABD8u;
label_19abd8:
    // 0x19abd8: 0xc050bb4  jal         func_142ED0
label_19abdc:
    if (ctx->pc == 0x19ABDCu) {
        ctx->pc = 0x19ABE0u;
        goto label_19abe0;
    }
    ctx->pc = 0x19ABD8u;
    SET_GPR_U32(ctx, 31, 0x19ABE0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ABE0u; }
        if (ctx->pc != 0x19ABE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ABE0u; }
        if (ctx->pc != 0x19ABE0u) { return; }
    }
    ctx->pc = 0x19ABE0u;
label_19abe0:
    // 0x19abe0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19abe4:
    // 0x19abe4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x19abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19abe8:
    // 0x19abe8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19abe8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19abec:
    // 0x19abec: 0x0  nop
    ctx->pc = 0x19abecu;
    // NOP
label_19abf0:
    // 0x19abf0: 0x0  nop
    ctx->pc = 0x19abf0u;
    // NOP
label_19abf4:
    // 0x19abf4: 0x1010  mfhi        $v0
    ctx->pc = 0x19abf4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19abf8:
    // 0x19abf8: 0xc050bb4  jal         func_142ED0
label_19abfc:
    if (ctx->pc == 0x19ABFCu) {
        ctx->pc = 0x19ABFCu;
            // 0x19abfc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19AC00u;
        goto label_19ac00;
    }
    ctx->pc = 0x19ABF8u;
    SET_GPR_U32(ctx, 31, 0x19AC00u);
    ctx->pc = 0x19ABFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABF8u;
            // 0x19abfc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC00u; }
        if (ctx->pc != 0x19AC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC00u; }
        if (ctx->pc != 0x19AC00u) { return; }
    }
    ctx->pc = 0x19AC00u;
label_19ac00:
    // 0x19ac00: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19ac04:
    // 0x19ac04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ac04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ac08:
    // 0x19ac08: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19ac08u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19ac0c:
    // 0x19ac0c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x19ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_19ac10:
    // 0x19ac10: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x19ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19ac14:
    // 0x19ac14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19ac14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19ac18:
    // 0x19ac18: 0x1010  mfhi        $v0
    ctx->pc = 0x19ac18u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19ac1c:
    // 0x19ac1c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19ac1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19ac20:
    // 0x19ac20: 0xc053740  jal         func_14DD00
label_19ac24:
    if (ctx->pc == 0x19AC24u) {
        ctx->pc = 0x19AC24u;
            // 0x19ac24: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19AC28u;
        goto label_19ac28;
    }
    ctx->pc = 0x19AC20u;
    SET_GPR_U32(ctx, 31, 0x19AC28u);
    ctx->pc = 0x19AC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC20u;
            // 0x19ac24: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC28u; }
        if (ctx->pc != 0x19AC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC28u; }
        if (ctx->pc != 0x19AC28u) { return; }
    }
    ctx->pc = 0x19AC28u;
label_19ac28:
    // 0x19ac28: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x19ac28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_19ac2c:
    // 0x19ac2c: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x19ac2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_19ac30:
    // 0x19ac30: 0xc07b0ac  jal         func_1EC2B0
label_19ac34:
    if (ctx->pc == 0x19AC34u) {
        ctx->pc = 0x19AC34u;
            // 0x19ac34: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x19AC38u;
        goto label_19ac38;
    }
    ctx->pc = 0x19AC30u;
    SET_GPR_U32(ctx, 31, 0x19AC38u);
    ctx->pc = 0x19AC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC30u;
            // 0x19ac34: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC38u; }
        if (ctx->pc != 0x19AC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC38u; }
        if (ctx->pc != 0x19AC38u) { return; }
    }
    ctx->pc = 0x19AC38u;
label_19ac38:
    // 0x19ac38: 0x8e6200fc  lw          $v0, 0xFC($s3)
    ctx->pc = 0x19ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_19ac3c:
    // 0x19ac3c: 0x40f809  jalr        $v0
label_19ac40:
    if (ctx->pc == 0x19AC40u) {
        ctx->pc = 0x19AC40u;
            // 0x19ac40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19AC44u;
        goto label_19ac44;
    }
    ctx->pc = 0x19AC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19AC44u);
        ctx->pc = 0x19AC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC3Cu;
            // 0x19ac40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199B30u: goto label_199b30;
            case 0x199B34u: goto label_199b34;
            case 0x199B38u: goto label_199b38;
            case 0x199B3Cu: goto label_199b3c;
            case 0x199B40u: goto label_199b40;
            case 0x199B44u: goto label_199b44;
            case 0x199B48u: goto label_199b48;
            case 0x199B4Cu: goto label_199b4c;
            case 0x199B50u: goto label_199b50;
            case 0x199B54u: goto label_199b54;
            case 0x199B58u: goto label_199b58;
            case 0x199B5Cu: goto label_199b5c;
            case 0x199B60u: goto label_199b60;
            case 0x199B64u: goto label_199b64;
            case 0x199B68u: goto label_199b68;
            case 0x199B6Cu: goto label_199b6c;
            case 0x199B70u: goto label_199b70;
            case 0x199B74u: goto label_199b74;
            case 0x199B78u: goto label_199b78;
            case 0x199B7Cu: goto label_199b7c;
            case 0x199B80u: goto label_199b80;
            case 0x199B84u: goto label_199b84;
            case 0x199B88u: goto label_199b88;
            case 0x199B8Cu: goto label_199b8c;
            case 0x199B90u: goto label_199b90;
            case 0x199B94u: goto label_199b94;
            case 0x199B98u: goto label_199b98;
            case 0x199B9Cu: goto label_199b9c;
            case 0x199BA0u: goto label_199ba0;
            case 0x199BA4u: goto label_199ba4;
            case 0x199BA8u: goto label_199ba8;
            case 0x199BACu: goto label_199bac;
            case 0x199BB0u: goto label_199bb0;
            case 0x199BB4u: goto label_199bb4;
            case 0x199BB8u: goto label_199bb8;
            case 0x199BBCu: goto label_199bbc;
            case 0x199BC0u: goto label_199bc0;
            case 0x199BC4u: goto label_199bc4;
            case 0x199BC8u: goto label_199bc8;
            case 0x199BCCu: goto label_199bcc;
            case 0x199BD0u: goto label_199bd0;
            case 0x199BD4u: goto label_199bd4;
            case 0x199BD8u: goto label_199bd8;
            case 0x199BDCu: goto label_199bdc;
            case 0x199BE0u: goto label_199be0;
            case 0x199BE4u: goto label_199be4;
            case 0x199BE8u: goto label_199be8;
            case 0x199BECu: goto label_199bec;
            case 0x199BF0u: goto label_199bf0;
            case 0x199BF4u: goto label_199bf4;
            case 0x199BF8u: goto label_199bf8;
            case 0x199BFCu: goto label_199bfc;
            case 0x199C00u: goto label_199c00;
            case 0x199C04u: goto label_199c04;
            case 0x199C08u: goto label_199c08;
            case 0x199C0Cu: goto label_199c0c;
            case 0x199C10u: goto label_199c10;
            case 0x199C14u: goto label_199c14;
            case 0x199C18u: goto label_199c18;
            case 0x199C1Cu: goto label_199c1c;
            case 0x199C20u: goto label_199c20;
            case 0x199C24u: goto label_199c24;
            case 0x199C28u: goto label_199c28;
            case 0x199C2Cu: goto label_199c2c;
            case 0x199C30u: goto label_199c30;
            case 0x199C34u: goto label_199c34;
            case 0x199C38u: goto label_199c38;
            case 0x199C3Cu: goto label_199c3c;
            case 0x199C40u: goto label_199c40;
            case 0x199C44u: goto label_199c44;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C50u: goto label_199c50;
            case 0x199C54u: goto label_199c54;
            case 0x199C58u: goto label_199c58;
            case 0x199C5Cu: goto label_199c5c;
            case 0x199C60u: goto label_199c60;
            case 0x199C64u: goto label_199c64;
            case 0x199C68u: goto label_199c68;
            case 0x199C6Cu: goto label_199c6c;
            case 0x199C70u: goto label_199c70;
            case 0x199C74u: goto label_199c74;
            case 0x199C78u: goto label_199c78;
            case 0x199C7Cu: goto label_199c7c;
            case 0x199C80u: goto label_199c80;
            case 0x199C84u: goto label_199c84;
            case 0x199C88u: goto label_199c88;
            case 0x199C8Cu: goto label_199c8c;
            case 0x199C90u: goto label_199c90;
            case 0x199C94u: goto label_199c94;
            case 0x199C98u: goto label_199c98;
            case 0x199C9Cu: goto label_199c9c;
            case 0x199CA0u: goto label_199ca0;
            case 0x199CA4u: goto label_199ca4;
            case 0x199CA8u: goto label_199ca8;
            case 0x199CACu: goto label_199cac;
            case 0x199CB0u: goto label_199cb0;
            case 0x199CB4u: goto label_199cb4;
            case 0x199CB8u: goto label_199cb8;
            case 0x199CBCu: goto label_199cbc;
            case 0x199CC0u: goto label_199cc0;
            case 0x199CC4u: goto label_199cc4;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199CD0u: goto label_199cd0;
            case 0x199CD4u: goto label_199cd4;
            case 0x199CD8u: goto label_199cd8;
            case 0x199CDCu: goto label_199cdc;
            case 0x199CE0u: goto label_199ce0;
            case 0x199CE4u: goto label_199ce4;
            case 0x199CE8u: goto label_199ce8;
            case 0x199CECu: goto label_199cec;
            case 0x199CF0u: goto label_199cf0;
            case 0x199CF4u: goto label_199cf4;
            case 0x199CF8u: goto label_199cf8;
            case 0x199CFCu: goto label_199cfc;
            case 0x199D00u: goto label_199d00;
            case 0x199D04u: goto label_199d04;
            case 0x199D08u: goto label_199d08;
            case 0x199D0Cu: goto label_199d0c;
            case 0x199D10u: goto label_199d10;
            case 0x199D14u: goto label_199d14;
            case 0x199D18u: goto label_199d18;
            case 0x199D1Cu: goto label_199d1c;
            case 0x199D20u: goto label_199d20;
            case 0x199D24u: goto label_199d24;
            case 0x199D28u: goto label_199d28;
            case 0x199D2Cu: goto label_199d2c;
            case 0x199D30u: goto label_199d30;
            case 0x199D34u: goto label_199d34;
            case 0x199D38u: goto label_199d38;
            case 0x199D3Cu: goto label_199d3c;
            case 0x199D40u: goto label_199d40;
            case 0x199D44u: goto label_199d44;
            case 0x199D48u: goto label_199d48;
            case 0x199D4Cu: goto label_199d4c;
            case 0x199D50u: goto label_199d50;
            case 0x199D54u: goto label_199d54;
            case 0x199D58u: goto label_199d58;
            case 0x199D5Cu: goto label_199d5c;
            case 0x199D60u: goto label_199d60;
            case 0x199D64u: goto label_199d64;
            case 0x199D68u: goto label_199d68;
            case 0x199D6Cu: goto label_199d6c;
            case 0x199D70u: goto label_199d70;
            case 0x199D74u: goto label_199d74;
            case 0x199D78u: goto label_199d78;
            case 0x199D7Cu: goto label_199d7c;
            case 0x199D80u: goto label_199d80;
            case 0x199D84u: goto label_199d84;
            case 0x199D88u: goto label_199d88;
            case 0x199D8Cu: goto label_199d8c;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199D98u: goto label_199d98;
            case 0x199D9Cu: goto label_199d9c;
            case 0x199DA0u: goto label_199da0;
            case 0x199DA4u: goto label_199da4;
            case 0x199DA8u: goto label_199da8;
            case 0x199DACu: goto label_199dac;
            case 0x199DB0u: goto label_199db0;
            case 0x199DB4u: goto label_199db4;
            case 0x199DB8u: goto label_199db8;
            case 0x199DBCu: goto label_199dbc;
            case 0x199DC0u: goto label_199dc0;
            case 0x199DC4u: goto label_199dc4;
            case 0x199DC8u: goto label_199dc8;
            case 0x199DCCu: goto label_199dcc;
            case 0x199DD0u: goto label_199dd0;
            case 0x199DD4u: goto label_199dd4;
            case 0x199DD8u: goto label_199dd8;
            case 0x199DDCu: goto label_199ddc;
            case 0x199DE0u: goto label_199de0;
            case 0x199DE4u: goto label_199de4;
            case 0x199DE8u: goto label_199de8;
            case 0x199DECu: goto label_199dec;
            case 0x199DF0u: goto label_199df0;
            case 0x199DF4u: goto label_199df4;
            case 0x199DF8u: goto label_199df8;
            case 0x199DFCu: goto label_199dfc;
            case 0x199E00u: goto label_199e00;
            case 0x199E04u: goto label_199e04;
            case 0x199E08u: goto label_199e08;
            case 0x199E0Cu: goto label_199e0c;
            case 0x199E10u: goto label_199e10;
            case 0x199E14u: goto label_199e14;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E20u: goto label_199e20;
            case 0x199E24u: goto label_199e24;
            case 0x199E28u: goto label_199e28;
            case 0x199E2Cu: goto label_199e2c;
            case 0x199E30u: goto label_199e30;
            case 0x199E34u: goto label_199e34;
            case 0x199E38u: goto label_199e38;
            case 0x199E3Cu: goto label_199e3c;
            case 0x199E40u: goto label_199e40;
            case 0x199E44u: goto label_199e44;
            case 0x199E48u: goto label_199e48;
            case 0x199E4Cu: goto label_199e4c;
            case 0x199E50u: goto label_199e50;
            case 0x199E54u: goto label_199e54;
            case 0x199E58u: goto label_199e58;
            case 0x199E5Cu: goto label_199e5c;
            case 0x199E60u: goto label_199e60;
            case 0x199E64u: goto label_199e64;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199E70u: goto label_199e70;
            case 0x199E74u: goto label_199e74;
            case 0x199E78u: goto label_199e78;
            case 0x199E7Cu: goto label_199e7c;
            case 0x199E80u: goto label_199e80;
            case 0x199E84u: goto label_199e84;
            case 0x199E88u: goto label_199e88;
            case 0x199E8Cu: goto label_199e8c;
            case 0x199E90u: goto label_199e90;
            case 0x199E94u: goto label_199e94;
            case 0x199E98u: goto label_199e98;
            case 0x199E9Cu: goto label_199e9c;
            case 0x199EA0u: goto label_199ea0;
            case 0x199EA4u: goto label_199ea4;
            case 0x199EA8u: goto label_199ea8;
            case 0x199EACu: goto label_199eac;
            case 0x199EB0u: goto label_199eb0;
            case 0x199EB4u: goto label_199eb4;
            case 0x199EB8u: goto label_199eb8;
            case 0x199EBCu: goto label_199ebc;
            case 0x199EC0u: goto label_199ec0;
            case 0x199EC4u: goto label_199ec4;
            case 0x199EC8u: goto label_199ec8;
            case 0x199ECCu: goto label_199ecc;
            case 0x199ED0u: goto label_199ed0;
            case 0x199ED4u: goto label_199ed4;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EDCu: goto label_199edc;
            case 0x199EE0u: goto label_199ee0;
            case 0x199EE4u: goto label_199ee4;
            case 0x199EE8u: goto label_199ee8;
            case 0x199EECu: goto label_199eec;
            case 0x199EF0u: goto label_199ef0;
            case 0x199EF4u: goto label_199ef4;
            case 0x199EF8u: goto label_199ef8;
            case 0x199EFCu: goto label_199efc;
            case 0x199F00u: goto label_199f00;
            case 0x199F04u: goto label_199f04;
            case 0x199F08u: goto label_199f08;
            case 0x199F0Cu: goto label_199f0c;
            case 0x199F10u: goto label_199f10;
            case 0x199F14u: goto label_199f14;
            case 0x199F18u: goto label_199f18;
            case 0x199F1Cu: goto label_199f1c;
            case 0x199F20u: goto label_199f20;
            case 0x199F24u: goto label_199f24;
            case 0x199F28u: goto label_199f28;
            case 0x199F2Cu: goto label_199f2c;
            case 0x199F30u: goto label_199f30;
            case 0x199F34u: goto label_199f34;
            case 0x199F38u: goto label_199f38;
            case 0x199F3Cu: goto label_199f3c;
            case 0x199F40u: goto label_199f40;
            case 0x199F44u: goto label_199f44;
            case 0x199F48u: goto label_199f48;
            case 0x199F4Cu: goto label_199f4c;
            case 0x199F50u: goto label_199f50;
            case 0x199F54u: goto label_199f54;
            case 0x199F58u: goto label_199f58;
            case 0x199F5Cu: goto label_199f5c;
            case 0x199F60u: goto label_199f60;
            case 0x199F64u: goto label_199f64;
            case 0x199F68u: goto label_199f68;
            case 0x199F6Cu: goto label_199f6c;
            case 0x199F70u: goto label_199f70;
            case 0x199F74u: goto label_199f74;
            case 0x199F78u: goto label_199f78;
            case 0x199F7Cu: goto label_199f7c;
            case 0x199F80u: goto label_199f80;
            case 0x199F84u: goto label_199f84;
            case 0x199F88u: goto label_199f88;
            case 0x199F8Cu: goto label_199f8c;
            case 0x199F90u: goto label_199f90;
            case 0x199F94u: goto label_199f94;
            case 0x199F98u: goto label_199f98;
            case 0x199F9Cu: goto label_199f9c;
            case 0x199FA0u: goto label_199fa0;
            case 0x199FA4u: goto label_199fa4;
            case 0x199FA8u: goto label_199fa8;
            case 0x199FACu: goto label_199fac;
            case 0x199FB0u: goto label_199fb0;
            case 0x199FB4u: goto label_199fb4;
            case 0x199FB8u: goto label_199fb8;
            case 0x199FBCu: goto label_199fbc;
            case 0x199FC0u: goto label_199fc0;
            case 0x199FC4u: goto label_199fc4;
            case 0x199FC8u: goto label_199fc8;
            case 0x199FCCu: goto label_199fcc;
            case 0x199FD0u: goto label_199fd0;
            case 0x199FD4u: goto label_199fd4;
            case 0x199FD8u: goto label_199fd8;
            case 0x199FDCu: goto label_199fdc;
            case 0x199FE0u: goto label_199fe0;
            case 0x199FE4u: goto label_199fe4;
            case 0x199FE8u: goto label_199fe8;
            case 0x199FECu: goto label_199fec;
            case 0x199FF0u: goto label_199ff0;
            case 0x199FF4u: goto label_199ff4;
            case 0x199FF8u: goto label_199ff8;
            case 0x199FFCu: goto label_199ffc;
            case 0x19A000u: goto label_19a000;
            case 0x19A004u: goto label_19a004;
            case 0x19A008u: goto label_19a008;
            case 0x19A00Cu: goto label_19a00c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A01Cu: goto label_19a01c;
            case 0x19A020u: goto label_19a020;
            case 0x19A024u: goto label_19a024;
            case 0x19A028u: goto label_19a028;
            case 0x19A02Cu: goto label_19a02c;
            case 0x19A030u: goto label_19a030;
            case 0x19A034u: goto label_19a034;
            case 0x19A038u: goto label_19a038;
            case 0x19A03Cu: goto label_19a03c;
            case 0x19A040u: goto label_19a040;
            case 0x19A044u: goto label_19a044;
            case 0x19A048u: goto label_19a048;
            case 0x19A04Cu: goto label_19a04c;
            case 0x19A050u: goto label_19a050;
            case 0x19A054u: goto label_19a054;
            case 0x19A058u: goto label_19a058;
            case 0x19A05Cu: goto label_19a05c;
            case 0x19A060u: goto label_19a060;
            case 0x19A064u: goto label_19a064;
            case 0x19A068u: goto label_19a068;
            case 0x19A06Cu: goto label_19a06c;
            case 0x19A070u: goto label_19a070;
            case 0x19A074u: goto label_19a074;
            case 0x19A078u: goto label_19a078;
            case 0x19A07Cu: goto label_19a07c;
            case 0x19A080u: goto label_19a080;
            case 0x19A084u: goto label_19a084;
            case 0x19A088u: goto label_19a088;
            case 0x19A08Cu: goto label_19a08c;
            case 0x19A090u: goto label_19a090;
            case 0x19A094u: goto label_19a094;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A0A0u: goto label_19a0a0;
            case 0x19A0A4u: goto label_19a0a4;
            case 0x19A0A8u: goto label_19a0a8;
            case 0x19A0ACu: goto label_19a0ac;
            case 0x19A0B0u: goto label_19a0b0;
            case 0x19A0B4u: goto label_19a0b4;
            case 0x19A0B8u: goto label_19a0b8;
            case 0x19A0BCu: goto label_19a0bc;
            case 0x19A0C0u: goto label_19a0c0;
            case 0x19A0C4u: goto label_19a0c4;
            case 0x19A0C8u: goto label_19a0c8;
            case 0x19A0CCu: goto label_19a0cc;
            case 0x19A0D0u: goto label_19a0d0;
            case 0x19A0D4u: goto label_19a0d4;
            case 0x19A0D8u: goto label_19a0d8;
            case 0x19A0DCu: goto label_19a0dc;
            case 0x19A0E0u: goto label_19a0e0;
            case 0x19A0E4u: goto label_19a0e4;
            case 0x19A0E8u: goto label_19a0e8;
            case 0x19A0ECu: goto label_19a0ec;
            case 0x19A0F0u: goto label_19a0f0;
            case 0x19A0F4u: goto label_19a0f4;
            case 0x19A0F8u: goto label_19a0f8;
            case 0x19A0FCu: goto label_19a0fc;
            case 0x19A100u: goto label_19a100;
            case 0x19A104u: goto label_19a104;
            case 0x19A108u: goto label_19a108;
            case 0x19A10Cu: goto label_19a10c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A118u: goto label_19a118;
            case 0x19A11Cu: goto label_19a11c;
            case 0x19A120u: goto label_19a120;
            case 0x19A124u: goto label_19a124;
            case 0x19A128u: goto label_19a128;
            case 0x19A12Cu: goto label_19a12c;
            case 0x19A130u: goto label_19a130;
            case 0x19A134u: goto label_19a134;
            case 0x19A138u: goto label_19a138;
            case 0x19A13Cu: goto label_19a13c;
            case 0x19A140u: goto label_19a140;
            case 0x19A144u: goto label_19a144;
            case 0x19A148u: goto label_19a148;
            case 0x19A14Cu: goto label_19a14c;
            case 0x19A150u: goto label_19a150;
            case 0x19A154u: goto label_19a154;
            case 0x19A158u: goto label_19a158;
            case 0x19A15Cu: goto label_19a15c;
            case 0x19A160u: goto label_19a160;
            case 0x19A164u: goto label_19a164;
            case 0x19A168u: goto label_19a168;
            case 0x19A16Cu: goto label_19a16c;
            case 0x19A170u: goto label_19a170;
            case 0x19A174u: goto label_19a174;
            case 0x19A178u: goto label_19a178;
            case 0x19A17Cu: goto label_19a17c;
            case 0x19A180u: goto label_19a180;
            case 0x19A184u: goto label_19a184;
            case 0x19A188u: goto label_19a188;
            case 0x19A18Cu: goto label_19a18c;
            case 0x19A190u: goto label_19a190;
            case 0x19A194u: goto label_19a194;
            case 0x19A198u: goto label_19a198;
            case 0x19A19Cu: goto label_19a19c;
            case 0x19A1A0u: goto label_19a1a0;
            case 0x19A1A4u: goto label_19a1a4;
            case 0x19A1A8u: goto label_19a1a8;
            case 0x19A1ACu: goto label_19a1ac;
            case 0x19A1B0u: goto label_19a1b0;
            case 0x19A1B4u: goto label_19a1b4;
            case 0x19A1B8u: goto label_19a1b8;
            case 0x19A1BCu: goto label_19a1bc;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1C8u: goto label_19a1c8;
            case 0x19A1CCu: goto label_19a1cc;
            case 0x19A1D0u: goto label_19a1d0;
            case 0x19A1D4u: goto label_19a1d4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A1DCu: goto label_19a1dc;
            case 0x19A1E0u: goto label_19a1e0;
            case 0x19A1E4u: goto label_19a1e4;
            case 0x19A1E8u: goto label_19a1e8;
            case 0x19A1ECu: goto label_19a1ec;
            case 0x19A1F0u: goto label_19a1f0;
            case 0x19A1F4u: goto label_19a1f4;
            case 0x19A1F8u: goto label_19a1f8;
            case 0x19A1FCu: goto label_19a1fc;
            case 0x19A200u: goto label_19a200;
            case 0x19A204u: goto label_19a204;
            case 0x19A208u: goto label_19a208;
            case 0x19A20Cu: goto label_19a20c;
            case 0x19A210u: goto label_19a210;
            case 0x19A214u: goto label_19a214;
            case 0x19A218u: goto label_19a218;
            case 0x19A21Cu: goto label_19a21c;
            case 0x19A220u: goto label_19a220;
            case 0x19A224u: goto label_19a224;
            case 0x19A228u: goto label_19a228;
            case 0x19A22Cu: goto label_19a22c;
            case 0x19A230u: goto label_19a230;
            case 0x19A234u: goto label_19a234;
            case 0x19A238u: goto label_19a238;
            case 0x19A23Cu: goto label_19a23c;
            case 0x19A240u: goto label_19a240;
            case 0x19A244u: goto label_19a244;
            case 0x19A248u: goto label_19a248;
            case 0x19A24Cu: goto label_19a24c;
            case 0x19A250u: goto label_19a250;
            case 0x19A254u: goto label_19a254;
            case 0x19A258u: goto label_19a258;
            case 0x19A25Cu: goto label_19a25c;
            case 0x19A260u: goto label_19a260;
            case 0x19A264u: goto label_19a264;
            case 0x19A268u: goto label_19a268;
            case 0x19A26Cu: goto label_19a26c;
            case 0x19A270u: goto label_19a270;
            case 0x19A274u: goto label_19a274;
            case 0x19A278u: goto label_19a278;
            case 0x19A27Cu: goto label_19a27c;
            case 0x19A280u: goto label_19a280;
            case 0x19A284u: goto label_19a284;
            case 0x19A288u: goto label_19a288;
            case 0x19A28Cu: goto label_19a28c;
            case 0x19A290u: goto label_19a290;
            case 0x19A294u: goto label_19a294;
            case 0x19A298u: goto label_19a298;
            case 0x19A29Cu: goto label_19a29c;
            case 0x19A2A0u: goto label_19a2a0;
            case 0x19A2A4u: goto label_19a2a4;
            case 0x19A2A8u: goto label_19a2a8;
            case 0x19A2ACu: goto label_19a2ac;
            case 0x19A2B0u: goto label_19a2b0;
            case 0x19A2B4u: goto label_19a2b4;
            case 0x19A2B8u: goto label_19a2b8;
            case 0x19A2BCu: goto label_19a2bc;
            case 0x19A2C0u: goto label_19a2c0;
            case 0x19A2C4u: goto label_19a2c4;
            case 0x19A2C8u: goto label_19a2c8;
            case 0x19A2CCu: goto label_19a2cc;
            case 0x19A2D0u: goto label_19a2d0;
            case 0x19A2D4u: goto label_19a2d4;
            case 0x19A2D8u: goto label_19a2d8;
            case 0x19A2DCu: goto label_19a2dc;
            case 0x19A2E0u: goto label_19a2e0;
            case 0x19A2E4u: goto label_19a2e4;
            case 0x19A2E8u: goto label_19a2e8;
            case 0x19A2ECu: goto label_19a2ec;
            case 0x19A2F0u: goto label_19a2f0;
            case 0x19A2F4u: goto label_19a2f4;
            case 0x19A2F8u: goto label_19a2f8;
            case 0x19A2FCu: goto label_19a2fc;
            case 0x19A300u: goto label_19a300;
            case 0x19A304u: goto label_19a304;
            case 0x19A308u: goto label_19a308;
            case 0x19A30Cu: goto label_19a30c;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A318u: goto label_19a318;
            case 0x19A31Cu: goto label_19a31c;
            case 0x19A320u: goto label_19a320;
            case 0x19A324u: goto label_19a324;
            case 0x19A328u: goto label_19a328;
            case 0x19A32Cu: goto label_19a32c;
            case 0x19A330u: goto label_19a330;
            case 0x19A334u: goto label_19a334;
            case 0x19A338u: goto label_19a338;
            case 0x19A33Cu: goto label_19a33c;
            case 0x19A340u: goto label_19a340;
            case 0x19A344u: goto label_19a344;
            case 0x19A348u: goto label_19a348;
            case 0x19A34Cu: goto label_19a34c;
            case 0x19A350u: goto label_19a350;
            case 0x19A354u: goto label_19a354;
            case 0x19A358u: goto label_19a358;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A360u: goto label_19a360;
            case 0x19A364u: goto label_19a364;
            case 0x19A368u: goto label_19a368;
            case 0x19A36Cu: goto label_19a36c;
            case 0x19A370u: goto label_19a370;
            case 0x19A374u: goto label_19a374;
            case 0x19A378u: goto label_19a378;
            case 0x19A37Cu: goto label_19a37c;
            case 0x19A380u: goto label_19a380;
            case 0x19A384u: goto label_19a384;
            case 0x19A388u: goto label_19a388;
            case 0x19A38Cu: goto label_19a38c;
            case 0x19A390u: goto label_19a390;
            case 0x19A394u: goto label_19a394;
            case 0x19A398u: goto label_19a398;
            case 0x19A39Cu: goto label_19a39c;
            case 0x19A3A0u: goto label_19a3a0;
            case 0x19A3A4u: goto label_19a3a4;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3ACu: goto label_19a3ac;
            case 0x19A3B0u: goto label_19a3b0;
            case 0x19A3B4u: goto label_19a3b4;
            case 0x19A3B8u: goto label_19a3b8;
            case 0x19A3BCu: goto label_19a3bc;
            case 0x19A3C0u: goto label_19a3c0;
            case 0x19A3C4u: goto label_19a3c4;
            case 0x19A3C8u: goto label_19a3c8;
            case 0x19A3CCu: goto label_19a3cc;
            case 0x19A3D0u: goto label_19a3d0;
            case 0x19A3D4u: goto label_19a3d4;
            case 0x19A3D8u: goto label_19a3d8;
            case 0x19A3DCu: goto label_19a3dc;
            case 0x19A3E0u: goto label_19a3e0;
            case 0x19A3E4u: goto label_19a3e4;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3ECu: goto label_19a3ec;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A3F4u: goto label_19a3f4;
            case 0x19A3F8u: goto label_19a3f8;
            case 0x19A3FCu: goto label_19a3fc;
            case 0x19A400u: goto label_19a400;
            case 0x19A404u: goto label_19a404;
            case 0x19A408u: goto label_19a408;
            case 0x19A40Cu: goto label_19a40c;
            case 0x19A410u: goto label_19a410;
            case 0x19A414u: goto label_19a414;
            case 0x19A418u: goto label_19a418;
            case 0x19A41Cu: goto label_19a41c;
            case 0x19A420u: goto label_19a420;
            case 0x19A424u: goto label_19a424;
            case 0x19A428u: goto label_19a428;
            case 0x19A42Cu: goto label_19a42c;
            case 0x19A430u: goto label_19a430;
            case 0x19A434u: goto label_19a434;
            case 0x19A438u: goto label_19a438;
            case 0x19A43Cu: goto label_19a43c;
            case 0x19A440u: goto label_19a440;
            case 0x19A444u: goto label_19a444;
            case 0x19A448u: goto label_19a448;
            case 0x19A44Cu: goto label_19a44c;
            case 0x19A450u: goto label_19a450;
            case 0x19A454u: goto label_19a454;
            case 0x19A458u: goto label_19a458;
            case 0x19A45Cu: goto label_19a45c;
            case 0x19A460u: goto label_19a460;
            case 0x19A464u: goto label_19a464;
            case 0x19A468u: goto label_19a468;
            case 0x19A46Cu: goto label_19a46c;
            case 0x19A470u: goto label_19a470;
            case 0x19A474u: goto label_19a474;
            case 0x19A478u: goto label_19a478;
            case 0x19A47Cu: goto label_19a47c;
            case 0x19A480u: goto label_19a480;
            case 0x19A484u: goto label_19a484;
            case 0x19A488u: goto label_19a488;
            case 0x19A48Cu: goto label_19a48c;
            case 0x19A490u: goto label_19a490;
            case 0x19A494u: goto label_19a494;
            case 0x19A498u: goto label_19a498;
            case 0x19A49Cu: goto label_19a49c;
            case 0x19A4A0u: goto label_19a4a0;
            case 0x19A4A4u: goto label_19a4a4;
            case 0x19A4A8u: goto label_19a4a8;
            case 0x19A4ACu: goto label_19a4ac;
            case 0x19A4B0u: goto label_19a4b0;
            case 0x19A4B4u: goto label_19a4b4;
            case 0x19A4B8u: goto label_19a4b8;
            case 0x19A4BCu: goto label_19a4bc;
            case 0x19A4C0u: goto label_19a4c0;
            case 0x19A4C4u: goto label_19a4c4;
            case 0x19A4C8u: goto label_19a4c8;
            case 0x19A4CCu: goto label_19a4cc;
            case 0x19A4D0u: goto label_19a4d0;
            case 0x19A4D4u: goto label_19a4d4;
            case 0x19A4D8u: goto label_19a4d8;
            case 0x19A4DCu: goto label_19a4dc;
            case 0x19A4E0u: goto label_19a4e0;
            case 0x19A4E4u: goto label_19a4e4;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A4ECu: goto label_19a4ec;
            case 0x19A4F0u: goto label_19a4f0;
            case 0x19A4F4u: goto label_19a4f4;
            case 0x19A4F8u: goto label_19a4f8;
            case 0x19A4FCu: goto label_19a4fc;
            case 0x19A500u: goto label_19a500;
            case 0x19A504u: goto label_19a504;
            case 0x19A508u: goto label_19a508;
            case 0x19A50Cu: goto label_19a50c;
            case 0x19A510u: goto label_19a510;
            case 0x19A514u: goto label_19a514;
            case 0x19A518u: goto label_19a518;
            case 0x19A51Cu: goto label_19a51c;
            case 0x19A520u: goto label_19a520;
            case 0x19A524u: goto label_19a524;
            case 0x19A528u: goto label_19a528;
            case 0x19A52Cu: goto label_19a52c;
            case 0x19A530u: goto label_19a530;
            case 0x19A534u: goto label_19a534;
            case 0x19A538u: goto label_19a538;
            case 0x19A53Cu: goto label_19a53c;
            case 0x19A540u: goto label_19a540;
            case 0x19A544u: goto label_19a544;
            case 0x19A548u: goto label_19a548;
            case 0x19A54Cu: goto label_19a54c;
            case 0x19A550u: goto label_19a550;
            case 0x19A554u: goto label_19a554;
            case 0x19A558u: goto label_19a558;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A560u: goto label_19a560;
            case 0x19A564u: goto label_19a564;
            case 0x19A568u: goto label_19a568;
            case 0x19A56Cu: goto label_19a56c;
            case 0x19A570u: goto label_19a570;
            case 0x19A574u: goto label_19a574;
            case 0x19A578u: goto label_19a578;
            case 0x19A57Cu: goto label_19a57c;
            case 0x19A580u: goto label_19a580;
            case 0x19A584u: goto label_19a584;
            case 0x19A588u: goto label_19a588;
            case 0x19A58Cu: goto label_19a58c;
            case 0x19A590u: goto label_19a590;
            case 0x19A594u: goto label_19a594;
            case 0x19A598u: goto label_19a598;
            case 0x19A59Cu: goto label_19a59c;
            case 0x19A5A0u: goto label_19a5a0;
            case 0x19A5A4u: goto label_19a5a4;
            case 0x19A5A8u: goto label_19a5a8;
            case 0x19A5ACu: goto label_19a5ac;
            case 0x19A5B0u: goto label_19a5b0;
            case 0x19A5B4u: goto label_19a5b4;
            case 0x19A5B8u: goto label_19a5b8;
            case 0x19A5BCu: goto label_19a5bc;
            case 0x19A5C0u: goto label_19a5c0;
            case 0x19A5C4u: goto label_19a5c4;
            case 0x19A5C8u: goto label_19a5c8;
            case 0x19A5CCu: goto label_19a5cc;
            case 0x19A5D0u: goto label_19a5d0;
            case 0x19A5D4u: goto label_19a5d4;
            case 0x19A5D8u: goto label_19a5d8;
            case 0x19A5DCu: goto label_19a5dc;
            case 0x19A5E0u: goto label_19a5e0;
            case 0x19A5E4u: goto label_19a5e4;
            case 0x19A5E8u: goto label_19a5e8;
            case 0x19A5ECu: goto label_19a5ec;
            case 0x19A5F0u: goto label_19a5f0;
            case 0x19A5F4u: goto label_19a5f4;
            case 0x19A5F8u: goto label_19a5f8;
            case 0x19A5FCu: goto label_19a5fc;
            case 0x19A600u: goto label_19a600;
            case 0x19A604u: goto label_19a604;
            case 0x19A608u: goto label_19a608;
            case 0x19A60Cu: goto label_19a60c;
            case 0x19A610u: goto label_19a610;
            case 0x19A614u: goto label_19a614;
            case 0x19A618u: goto label_19a618;
            case 0x19A61Cu: goto label_19a61c;
            case 0x19A620u: goto label_19a620;
            case 0x19A624u: goto label_19a624;
            case 0x19A628u: goto label_19a628;
            case 0x19A62Cu: goto label_19a62c;
            case 0x19A630u: goto label_19a630;
            case 0x19A634u: goto label_19a634;
            case 0x19A638u: goto label_19a638;
            case 0x19A63Cu: goto label_19a63c;
            case 0x19A640u: goto label_19a640;
            case 0x19A644u: goto label_19a644;
            case 0x19A648u: goto label_19a648;
            case 0x19A64Cu: goto label_19a64c;
            case 0x19A650u: goto label_19a650;
            case 0x19A654u: goto label_19a654;
            case 0x19A658u: goto label_19a658;
            case 0x19A65Cu: goto label_19a65c;
            case 0x19A660u: goto label_19a660;
            case 0x19A664u: goto label_19a664;
            case 0x19A668u: goto label_19a668;
            case 0x19A66Cu: goto label_19a66c;
            case 0x19A670u: goto label_19a670;
            case 0x19A674u: goto label_19a674;
            case 0x19A678u: goto label_19a678;
            case 0x19A67Cu: goto label_19a67c;
            case 0x19A680u: goto label_19a680;
            case 0x19A684u: goto label_19a684;
            case 0x19A688u: goto label_19a688;
            case 0x19A68Cu: goto label_19a68c;
            case 0x19A690u: goto label_19a690;
            case 0x19A694u: goto label_19a694;
            case 0x19A698u: goto label_19a698;
            case 0x19A69Cu: goto label_19a69c;
            case 0x19A6A0u: goto label_19a6a0;
            case 0x19A6A4u: goto label_19a6a4;
            case 0x19A6A8u: goto label_19a6a8;
            case 0x19A6ACu: goto label_19a6ac;
            case 0x19A6B0u: goto label_19a6b0;
            case 0x19A6B4u: goto label_19a6b4;
            case 0x19A6B8u: goto label_19a6b8;
            case 0x19A6BCu: goto label_19a6bc;
            case 0x19A6C0u: goto label_19a6c0;
            case 0x19A6C4u: goto label_19a6c4;
            case 0x19A6C8u: goto label_19a6c8;
            case 0x19A6CCu: goto label_19a6cc;
            case 0x19A6D0u: goto label_19a6d0;
            case 0x19A6D4u: goto label_19a6d4;
            case 0x19A6D8u: goto label_19a6d8;
            case 0x19A6DCu: goto label_19a6dc;
            case 0x19A6E0u: goto label_19a6e0;
            case 0x19A6E4u: goto label_19a6e4;
            case 0x19A6E8u: goto label_19a6e8;
            case 0x19A6ECu: goto label_19a6ec;
            case 0x19A6F0u: goto label_19a6f0;
            case 0x19A6F4u: goto label_19a6f4;
            case 0x19A6F8u: goto label_19a6f8;
            case 0x19A6FCu: goto label_19a6fc;
            case 0x19A700u: goto label_19a700;
            case 0x19A704u: goto label_19a704;
            case 0x19A708u: goto label_19a708;
            case 0x19A70Cu: goto label_19a70c;
            case 0x19A710u: goto label_19a710;
            case 0x19A714u: goto label_19a714;
            case 0x19A718u: goto label_19a718;
            case 0x19A71Cu: goto label_19a71c;
            case 0x19A720u: goto label_19a720;
            case 0x19A724u: goto label_19a724;
            case 0x19A728u: goto label_19a728;
            case 0x19A72Cu: goto label_19a72c;
            case 0x19A730u: goto label_19a730;
            case 0x19A734u: goto label_19a734;
            case 0x19A738u: goto label_19a738;
            case 0x19A73Cu: goto label_19a73c;
            case 0x19A740u: goto label_19a740;
            case 0x19A744u: goto label_19a744;
            case 0x19A748u: goto label_19a748;
            case 0x19A74Cu: goto label_19a74c;
            case 0x19A750u: goto label_19a750;
            case 0x19A754u: goto label_19a754;
            case 0x19A758u: goto label_19a758;
            case 0x19A75Cu: goto label_19a75c;
            case 0x19A760u: goto label_19a760;
            case 0x19A764u: goto label_19a764;
            case 0x19A768u: goto label_19a768;
            case 0x19A76Cu: goto label_19a76c;
            case 0x19A770u: goto label_19a770;
            case 0x19A774u: goto label_19a774;
            case 0x19A778u: goto label_19a778;
            case 0x19A77Cu: goto label_19a77c;
            case 0x19A780u: goto label_19a780;
            case 0x19A784u: goto label_19a784;
            case 0x19A788u: goto label_19a788;
            case 0x19A78Cu: goto label_19a78c;
            case 0x19A790u: goto label_19a790;
            case 0x19A794u: goto label_19a794;
            case 0x19A798u: goto label_19a798;
            case 0x19A79Cu: goto label_19a79c;
            case 0x19A7A0u: goto label_19a7a0;
            case 0x19A7A4u: goto label_19a7a4;
            case 0x19A7A8u: goto label_19a7a8;
            case 0x19A7ACu: goto label_19a7ac;
            case 0x19A7B0u: goto label_19a7b0;
            case 0x19A7B4u: goto label_19a7b4;
            case 0x19A7B8u: goto label_19a7b8;
            case 0x19A7BCu: goto label_19a7bc;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7C4u: goto label_19a7c4;
            case 0x19A7C8u: goto label_19a7c8;
            case 0x19A7CCu: goto label_19a7cc;
            case 0x19A7D0u: goto label_19a7d0;
            case 0x19A7D4u: goto label_19a7d4;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7DCu: goto label_19a7dc;
            case 0x19A7E0u: goto label_19a7e0;
            case 0x19A7E4u: goto label_19a7e4;
            case 0x19A7E8u: goto label_19a7e8;
            case 0x19A7ECu: goto label_19a7ec;
            case 0x19A7F0u: goto label_19a7f0;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A7F8u: goto label_19a7f8;
            case 0x19A7FCu: goto label_19a7fc;
            case 0x19A800u: goto label_19a800;
            case 0x19A804u: goto label_19a804;
            case 0x19A808u: goto label_19a808;
            case 0x19A80Cu: goto label_19a80c;
            case 0x19A810u: goto label_19a810;
            case 0x19A814u: goto label_19a814;
            case 0x19A818u: goto label_19a818;
            case 0x19A81Cu: goto label_19a81c;
            case 0x19A820u: goto label_19a820;
            case 0x19A824u: goto label_19a824;
            case 0x19A828u: goto label_19a828;
            case 0x19A82Cu: goto label_19a82c;
            case 0x19A830u: goto label_19a830;
            case 0x19A834u: goto label_19a834;
            case 0x19A838u: goto label_19a838;
            case 0x19A83Cu: goto label_19a83c;
            case 0x19A840u: goto label_19a840;
            case 0x19A844u: goto label_19a844;
            case 0x19A848u: goto label_19a848;
            case 0x19A84Cu: goto label_19a84c;
            case 0x19A850u: goto label_19a850;
            case 0x19A854u: goto label_19a854;
            case 0x19A858u: goto label_19a858;
            case 0x19A85Cu: goto label_19a85c;
            case 0x19A860u: goto label_19a860;
            case 0x19A864u: goto label_19a864;
            case 0x19A868u: goto label_19a868;
            case 0x19A86Cu: goto label_19a86c;
            case 0x19A870u: goto label_19a870;
            case 0x19A874u: goto label_19a874;
            case 0x19A878u: goto label_19a878;
            case 0x19A87Cu: goto label_19a87c;
            case 0x19A880u: goto label_19a880;
            case 0x19A884u: goto label_19a884;
            case 0x19A888u: goto label_19a888;
            case 0x19A88Cu: goto label_19a88c;
            case 0x19A890u: goto label_19a890;
            case 0x19A894u: goto label_19a894;
            case 0x19A898u: goto label_19a898;
            case 0x19A89Cu: goto label_19a89c;
            case 0x19A8A0u: goto label_19a8a0;
            case 0x19A8A4u: goto label_19a8a4;
            case 0x19A8A8u: goto label_19a8a8;
            case 0x19A8ACu: goto label_19a8ac;
            case 0x19A8B0u: goto label_19a8b0;
            case 0x19A8B4u: goto label_19a8b4;
            case 0x19A8B8u: goto label_19a8b8;
            case 0x19A8BCu: goto label_19a8bc;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A8C4u: goto label_19a8c4;
            case 0x19A8C8u: goto label_19a8c8;
            case 0x19A8CCu: goto label_19a8cc;
            case 0x19A8D0u: goto label_19a8d0;
            case 0x19A8D4u: goto label_19a8d4;
            case 0x19A8D8u: goto label_19a8d8;
            case 0x19A8DCu: goto label_19a8dc;
            case 0x19A8E0u: goto label_19a8e0;
            case 0x19A8E4u: goto label_19a8e4;
            case 0x19A8E8u: goto label_19a8e8;
            case 0x19A8ECu: goto label_19a8ec;
            case 0x19A8F0u: goto label_19a8f0;
            case 0x19A8F4u: goto label_19a8f4;
            case 0x19A8F8u: goto label_19a8f8;
            case 0x19A8FCu: goto label_19a8fc;
            case 0x19A900u: goto label_19a900;
            case 0x19A904u: goto label_19a904;
            case 0x19A908u: goto label_19a908;
            case 0x19A90Cu: goto label_19a90c;
            case 0x19A910u: goto label_19a910;
            case 0x19A914u: goto label_19a914;
            case 0x19A918u: goto label_19a918;
            case 0x19A91Cu: goto label_19a91c;
            case 0x19A920u: goto label_19a920;
            case 0x19A924u: goto label_19a924;
            case 0x19A928u: goto label_19a928;
            case 0x19A92Cu: goto label_19a92c;
            case 0x19A930u: goto label_19a930;
            case 0x19A934u: goto label_19a934;
            case 0x19A938u: goto label_19a938;
            case 0x19A93Cu: goto label_19a93c;
            case 0x19A940u: goto label_19a940;
            case 0x19A944u: goto label_19a944;
            case 0x19A948u: goto label_19a948;
            case 0x19A94Cu: goto label_19a94c;
            case 0x19A950u: goto label_19a950;
            case 0x19A954u: goto label_19a954;
            case 0x19A958u: goto label_19a958;
            case 0x19A95Cu: goto label_19a95c;
            case 0x19A960u: goto label_19a960;
            case 0x19A964u: goto label_19a964;
            case 0x19A968u: goto label_19a968;
            case 0x19A96Cu: goto label_19a96c;
            case 0x19A970u: goto label_19a970;
            case 0x19A974u: goto label_19a974;
            case 0x19A978u: goto label_19a978;
            case 0x19A97Cu: goto label_19a97c;
            case 0x19A980u: goto label_19a980;
            case 0x19A984u: goto label_19a984;
            case 0x19A988u: goto label_19a988;
            case 0x19A98Cu: goto label_19a98c;
            case 0x19A990u: goto label_19a990;
            case 0x19A994u: goto label_19a994;
            case 0x19A998u: goto label_19a998;
            case 0x19A99Cu: goto label_19a99c;
            case 0x19A9A0u: goto label_19a9a0;
            case 0x19A9A4u: goto label_19a9a4;
            case 0x19A9A8u: goto label_19a9a8;
            case 0x19A9ACu: goto label_19a9ac;
            case 0x19A9B0u: goto label_19a9b0;
            case 0x19A9B4u: goto label_19a9b4;
            case 0x19A9B8u: goto label_19a9b8;
            case 0x19A9BCu: goto label_19a9bc;
            case 0x19A9C0u: goto label_19a9c0;
            case 0x19A9C4u: goto label_19a9c4;
            case 0x19A9C8u: goto label_19a9c8;
            case 0x19A9CCu: goto label_19a9cc;
            case 0x19A9D0u: goto label_19a9d0;
            case 0x19A9D4u: goto label_19a9d4;
            case 0x19A9D8u: goto label_19a9d8;
            case 0x19A9DCu: goto label_19a9dc;
            case 0x19A9E0u: goto label_19a9e0;
            case 0x19A9E4u: goto label_19a9e4;
            case 0x19A9E8u: goto label_19a9e8;
            case 0x19A9ECu: goto label_19a9ec;
            case 0x19A9F0u: goto label_19a9f0;
            case 0x19A9F4u: goto label_19a9f4;
            case 0x19A9F8u: goto label_19a9f8;
            case 0x19A9FCu: goto label_19a9fc;
            case 0x19AA00u: goto label_19aa00;
            case 0x19AA04u: goto label_19aa04;
            case 0x19AA08u: goto label_19aa08;
            case 0x19AA0Cu: goto label_19aa0c;
            case 0x19AA10u: goto label_19aa10;
            case 0x19AA14u: goto label_19aa14;
            case 0x19AA18u: goto label_19aa18;
            case 0x19AA1Cu: goto label_19aa1c;
            case 0x19AA20u: goto label_19aa20;
            case 0x19AA24u: goto label_19aa24;
            case 0x19AA28u: goto label_19aa28;
            case 0x19AA2Cu: goto label_19aa2c;
            case 0x19AA30u: goto label_19aa30;
            case 0x19AA34u: goto label_19aa34;
            case 0x19AA38u: goto label_19aa38;
            case 0x19AA3Cu: goto label_19aa3c;
            case 0x19AA40u: goto label_19aa40;
            case 0x19AA44u: goto label_19aa44;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA4Cu: goto label_19aa4c;
            case 0x19AA50u: goto label_19aa50;
            case 0x19AA54u: goto label_19aa54;
            case 0x19AA58u: goto label_19aa58;
            case 0x19AA5Cu: goto label_19aa5c;
            case 0x19AA60u: goto label_19aa60;
            case 0x19AA64u: goto label_19aa64;
            case 0x19AA68u: goto label_19aa68;
            case 0x19AA6Cu: goto label_19aa6c;
            case 0x19AA70u: goto label_19aa70;
            case 0x19AA74u: goto label_19aa74;
            case 0x19AA78u: goto label_19aa78;
            case 0x19AA7Cu: goto label_19aa7c;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AA84u: goto label_19aa84;
            case 0x19AA88u: goto label_19aa88;
            case 0x19AA8Cu: goto label_19aa8c;
            case 0x19AA90u: goto label_19aa90;
            case 0x19AA94u: goto label_19aa94;
            case 0x19AA98u: goto label_19aa98;
            case 0x19AA9Cu: goto label_19aa9c;
            case 0x19AAA0u: goto label_19aaa0;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AAA8u: goto label_19aaa8;
            case 0x19AAACu: goto label_19aaac;
            case 0x19AAB0u: goto label_19aab0;
            case 0x19AAB4u: goto label_19aab4;
            case 0x19AAB8u: goto label_19aab8;
            case 0x19AABCu: goto label_19aabc;
            case 0x19AAC0u: goto label_19aac0;
            case 0x19AAC4u: goto label_19aac4;
            case 0x19AAC8u: goto label_19aac8;
            case 0x19AACCu: goto label_19aacc;
            case 0x19AAD0u: goto label_19aad0;
            case 0x19AAD4u: goto label_19aad4;
            case 0x19AAD8u: goto label_19aad8;
            case 0x19AADCu: goto label_19aadc;
            case 0x19AAE0u: goto label_19aae0;
            case 0x19AAE4u: goto label_19aae4;
            case 0x19AAE8u: goto label_19aae8;
            case 0x19AAECu: goto label_19aaec;
            case 0x19AAF0u: goto label_19aaf0;
            case 0x19AAF4u: goto label_19aaf4;
            case 0x19AAF8u: goto label_19aaf8;
            case 0x19AAFCu: goto label_19aafc;
            case 0x19AB00u: goto label_19ab00;
            case 0x19AB04u: goto label_19ab04;
            case 0x19AB08u: goto label_19ab08;
            case 0x19AB0Cu: goto label_19ab0c;
            case 0x19AB10u: goto label_19ab10;
            case 0x19AB14u: goto label_19ab14;
            case 0x19AB18u: goto label_19ab18;
            case 0x19AB1Cu: goto label_19ab1c;
            case 0x19AB20u: goto label_19ab20;
            case 0x19AB24u: goto label_19ab24;
            case 0x19AB28u: goto label_19ab28;
            case 0x19AB2Cu: goto label_19ab2c;
            case 0x19AB30u: goto label_19ab30;
            case 0x19AB34u: goto label_19ab34;
            case 0x19AB38u: goto label_19ab38;
            case 0x19AB3Cu: goto label_19ab3c;
            case 0x19AB40u: goto label_19ab40;
            case 0x19AB44u: goto label_19ab44;
            case 0x19AB48u: goto label_19ab48;
            case 0x19AB4Cu: goto label_19ab4c;
            case 0x19AB50u: goto label_19ab50;
            case 0x19AB54u: goto label_19ab54;
            case 0x19AB58u: goto label_19ab58;
            case 0x19AB5Cu: goto label_19ab5c;
            case 0x19AB60u: goto label_19ab60;
            case 0x19AB64u: goto label_19ab64;
            case 0x19AB68u: goto label_19ab68;
            case 0x19AB6Cu: goto label_19ab6c;
            case 0x19AB70u: goto label_19ab70;
            case 0x19AB74u: goto label_19ab74;
            case 0x19AB78u: goto label_19ab78;
            case 0x19AB7Cu: goto label_19ab7c;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB84u: goto label_19ab84;
            case 0x19AB88u: goto label_19ab88;
            case 0x19AB8Cu: goto label_19ab8c;
            case 0x19AB90u: goto label_19ab90;
            case 0x19AB94u: goto label_19ab94;
            case 0x19AB98u: goto label_19ab98;
            case 0x19AB9Cu: goto label_19ab9c;
            case 0x19ABA0u: goto label_19aba0;
            case 0x19ABA4u: goto label_19aba4;
            case 0x19ABA8u: goto label_19aba8;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABB4u: goto label_19abb4;
            case 0x19ABB8u: goto label_19abb8;
            case 0x19ABBCu: goto label_19abbc;
            case 0x19ABC0u: goto label_19abc0;
            case 0x19ABC4u: goto label_19abc4;
            case 0x19ABC8u: goto label_19abc8;
            case 0x19ABCCu: goto label_19abcc;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19ABD4u: goto label_19abd4;
            case 0x19ABD8u: goto label_19abd8;
            case 0x19ABDCu: goto label_19abdc;
            case 0x19ABE0u: goto label_19abe0;
            case 0x19ABE4u: goto label_19abe4;
            case 0x19ABE8u: goto label_19abe8;
            case 0x19ABECu: goto label_19abec;
            case 0x19ABF0u: goto label_19abf0;
            case 0x19ABF4u: goto label_19abf4;
            case 0x19ABF8u: goto label_19abf8;
            case 0x19ABFCu: goto label_19abfc;
            case 0x19AC00u: goto label_19ac00;
            case 0x19AC04u: goto label_19ac04;
            case 0x19AC08u: goto label_19ac08;
            case 0x19AC0Cu: goto label_19ac0c;
            case 0x19AC10u: goto label_19ac10;
            case 0x19AC14u: goto label_19ac14;
            case 0x19AC18u: goto label_19ac18;
            case 0x19AC1Cu: goto label_19ac1c;
            case 0x19AC20u: goto label_19ac20;
            case 0x19AC24u: goto label_19ac24;
            case 0x19AC28u: goto label_19ac28;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC30u: goto label_19ac30;
            case 0x19AC34u: goto label_19ac34;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC3Cu: goto label_19ac3c;
            case 0x19AC40u: goto label_19ac40;
            case 0x19AC44u: goto label_19ac44;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC50u: goto label_19ac50;
            case 0x19AC54u: goto label_19ac54;
            case 0x19AC58u: goto label_19ac58;
            case 0x19AC5Cu: goto label_19ac5c;
            case 0x19AC60u: goto label_19ac60;
            case 0x19AC64u: goto label_19ac64;
            case 0x19AC68u: goto label_19ac68;
            case 0x19AC6Cu: goto label_19ac6c;
            case 0x19AC70u: goto label_19ac70;
            case 0x19AC74u: goto label_19ac74;
            case 0x19AC78u: goto label_19ac78;
            case 0x19AC7Cu: goto label_19ac7c;
            case 0x19AC80u: goto label_19ac80;
            case 0x19AC84u: goto label_19ac84;
            case 0x19AC88u: goto label_19ac88;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19AC44u; }
            if (ctx->pc != 0x19AC44u) { return; }
        }
    }
    ctx->pc = 0x19AC44u;
label_19ac44:
    // 0x19ac44: 0x1000000a  b           . + 4 + (0xA << 2)
label_19ac48:
    if (ctx->pc == 0x19AC48u) {
        ctx->pc = 0x19AC4Cu;
        goto label_19ac4c;
    }
    ctx->pc = 0x19AC44u;
    {
        const bool branch_taken_0x19ac44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ac44) {
            ctx->pc = 0x19AC70u;
            goto label_19ac70;
        }
    }
    ctx->pc = 0x19AC4Cu;
label_19ac4c:
    // 0x19ac4c: 0x0  nop
    ctx->pc = 0x19ac4cu;
    // NOP
label_19ac50:
    // 0x19ac50: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19ac50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_19ac54:
    // 0x19ac54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19ac54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19ac58:
    // 0x19ac58: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x19ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_19ac5c:
    // 0x19ac5c: 0x24c69870  addiu       $a2, $a2, -0x6790
    ctx->pc = 0x19ac5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940784));
label_19ac60:
    // 0x19ac60: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x19ac60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19ac64:
    // 0x19ac64: 0xc053ca4  jal         func_14F290
label_19ac68:
    if (ctx->pc == 0x19AC68u) {
        ctx->pc = 0x19AC68u;
            // 0x19ac68: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19AC6Cu;
        goto label_19ac6c;
    }
    ctx->pc = 0x19AC64u;
    SET_GPR_U32(ctx, 31, 0x19AC6Cu);
    ctx->pc = 0x19AC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC64u;
            // 0x19ac68: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC6Cu; }
        if (ctx->pc != 0x19AC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC6Cu; }
        if (ctx->pc != 0x19AC6Cu) { return; }
    }
    ctx->pc = 0x19AC6Cu;
label_19ac6c:
    // 0x19ac6c: 0x0  nop
    ctx->pc = 0x19ac6cu;
    // NOP
label_19ac70:
    // 0x19ac70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19ac70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19ac74:
    // 0x19ac74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19ac74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19ac78:
    // 0x19ac78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19ac78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19ac7c:
    // 0x19ac7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ac7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19ac80:
    // 0x19ac80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ac80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19ac84:
    // 0x19ac84: 0x3e00008  jr          $ra
label_19ac88:
    if (ctx->pc == 0x19AC88u) {
        ctx->pc = 0x19AC88u;
            // 0x19ac88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x19AC8Cu;
        goto label_fallthrough_0x19ac84;
    }
    ctx->pc = 0x19AC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC84u;
            // 0x19ac88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199B30u: goto label_199b30;
            case 0x199B34u: goto label_199b34;
            case 0x199B38u: goto label_199b38;
            case 0x199B3Cu: goto label_199b3c;
            case 0x199B40u: goto label_199b40;
            case 0x199B44u: goto label_199b44;
            case 0x199B48u: goto label_199b48;
            case 0x199B4Cu: goto label_199b4c;
            case 0x199B50u: goto label_199b50;
            case 0x199B54u: goto label_199b54;
            case 0x199B58u: goto label_199b58;
            case 0x199B5Cu: goto label_199b5c;
            case 0x199B60u: goto label_199b60;
            case 0x199B64u: goto label_199b64;
            case 0x199B68u: goto label_199b68;
            case 0x199B6Cu: goto label_199b6c;
            case 0x199B70u: goto label_199b70;
            case 0x199B74u: goto label_199b74;
            case 0x199B78u: goto label_199b78;
            case 0x199B7Cu: goto label_199b7c;
            case 0x199B80u: goto label_199b80;
            case 0x199B84u: goto label_199b84;
            case 0x199B88u: goto label_199b88;
            case 0x199B8Cu: goto label_199b8c;
            case 0x199B90u: goto label_199b90;
            case 0x199B94u: goto label_199b94;
            case 0x199B98u: goto label_199b98;
            case 0x199B9Cu: goto label_199b9c;
            case 0x199BA0u: goto label_199ba0;
            case 0x199BA4u: goto label_199ba4;
            case 0x199BA8u: goto label_199ba8;
            case 0x199BACu: goto label_199bac;
            case 0x199BB0u: goto label_199bb0;
            case 0x199BB4u: goto label_199bb4;
            case 0x199BB8u: goto label_199bb8;
            case 0x199BBCu: goto label_199bbc;
            case 0x199BC0u: goto label_199bc0;
            case 0x199BC4u: goto label_199bc4;
            case 0x199BC8u: goto label_199bc8;
            case 0x199BCCu: goto label_199bcc;
            case 0x199BD0u: goto label_199bd0;
            case 0x199BD4u: goto label_199bd4;
            case 0x199BD8u: goto label_199bd8;
            case 0x199BDCu: goto label_199bdc;
            case 0x199BE0u: goto label_199be0;
            case 0x199BE4u: goto label_199be4;
            case 0x199BE8u: goto label_199be8;
            case 0x199BECu: goto label_199bec;
            case 0x199BF0u: goto label_199bf0;
            case 0x199BF4u: goto label_199bf4;
            case 0x199BF8u: goto label_199bf8;
            case 0x199BFCu: goto label_199bfc;
            case 0x199C00u: goto label_199c00;
            case 0x199C04u: goto label_199c04;
            case 0x199C08u: goto label_199c08;
            case 0x199C0Cu: goto label_199c0c;
            case 0x199C10u: goto label_199c10;
            case 0x199C14u: goto label_199c14;
            case 0x199C18u: goto label_199c18;
            case 0x199C1Cu: goto label_199c1c;
            case 0x199C20u: goto label_199c20;
            case 0x199C24u: goto label_199c24;
            case 0x199C28u: goto label_199c28;
            case 0x199C2Cu: goto label_199c2c;
            case 0x199C30u: goto label_199c30;
            case 0x199C34u: goto label_199c34;
            case 0x199C38u: goto label_199c38;
            case 0x199C3Cu: goto label_199c3c;
            case 0x199C40u: goto label_199c40;
            case 0x199C44u: goto label_199c44;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C50u: goto label_199c50;
            case 0x199C54u: goto label_199c54;
            case 0x199C58u: goto label_199c58;
            case 0x199C5Cu: goto label_199c5c;
            case 0x199C60u: goto label_199c60;
            case 0x199C64u: goto label_199c64;
            case 0x199C68u: goto label_199c68;
            case 0x199C6Cu: goto label_199c6c;
            case 0x199C70u: goto label_199c70;
            case 0x199C74u: goto label_199c74;
            case 0x199C78u: goto label_199c78;
            case 0x199C7Cu: goto label_199c7c;
            case 0x199C80u: goto label_199c80;
            case 0x199C84u: goto label_199c84;
            case 0x199C88u: goto label_199c88;
            case 0x199C8Cu: goto label_199c8c;
            case 0x199C90u: goto label_199c90;
            case 0x199C94u: goto label_199c94;
            case 0x199C98u: goto label_199c98;
            case 0x199C9Cu: goto label_199c9c;
            case 0x199CA0u: goto label_199ca0;
            case 0x199CA4u: goto label_199ca4;
            case 0x199CA8u: goto label_199ca8;
            case 0x199CACu: goto label_199cac;
            case 0x199CB0u: goto label_199cb0;
            case 0x199CB4u: goto label_199cb4;
            case 0x199CB8u: goto label_199cb8;
            case 0x199CBCu: goto label_199cbc;
            case 0x199CC0u: goto label_199cc0;
            case 0x199CC4u: goto label_199cc4;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199CD0u: goto label_199cd0;
            case 0x199CD4u: goto label_199cd4;
            case 0x199CD8u: goto label_199cd8;
            case 0x199CDCu: goto label_199cdc;
            case 0x199CE0u: goto label_199ce0;
            case 0x199CE4u: goto label_199ce4;
            case 0x199CE8u: goto label_199ce8;
            case 0x199CECu: goto label_199cec;
            case 0x199CF0u: goto label_199cf0;
            case 0x199CF4u: goto label_199cf4;
            case 0x199CF8u: goto label_199cf8;
            case 0x199CFCu: goto label_199cfc;
            case 0x199D00u: goto label_199d00;
            case 0x199D04u: goto label_199d04;
            case 0x199D08u: goto label_199d08;
            case 0x199D0Cu: goto label_199d0c;
            case 0x199D10u: goto label_199d10;
            case 0x199D14u: goto label_199d14;
            case 0x199D18u: goto label_199d18;
            case 0x199D1Cu: goto label_199d1c;
            case 0x199D20u: goto label_199d20;
            case 0x199D24u: goto label_199d24;
            case 0x199D28u: goto label_199d28;
            case 0x199D2Cu: goto label_199d2c;
            case 0x199D30u: goto label_199d30;
            case 0x199D34u: goto label_199d34;
            case 0x199D38u: goto label_199d38;
            case 0x199D3Cu: goto label_199d3c;
            case 0x199D40u: goto label_199d40;
            case 0x199D44u: goto label_199d44;
            case 0x199D48u: goto label_199d48;
            case 0x199D4Cu: goto label_199d4c;
            case 0x199D50u: goto label_199d50;
            case 0x199D54u: goto label_199d54;
            case 0x199D58u: goto label_199d58;
            case 0x199D5Cu: goto label_199d5c;
            case 0x199D60u: goto label_199d60;
            case 0x199D64u: goto label_199d64;
            case 0x199D68u: goto label_199d68;
            case 0x199D6Cu: goto label_199d6c;
            case 0x199D70u: goto label_199d70;
            case 0x199D74u: goto label_199d74;
            case 0x199D78u: goto label_199d78;
            case 0x199D7Cu: goto label_199d7c;
            case 0x199D80u: goto label_199d80;
            case 0x199D84u: goto label_199d84;
            case 0x199D88u: goto label_199d88;
            case 0x199D8Cu: goto label_199d8c;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199D98u: goto label_199d98;
            case 0x199D9Cu: goto label_199d9c;
            case 0x199DA0u: goto label_199da0;
            case 0x199DA4u: goto label_199da4;
            case 0x199DA8u: goto label_199da8;
            case 0x199DACu: goto label_199dac;
            case 0x199DB0u: goto label_199db0;
            case 0x199DB4u: goto label_199db4;
            case 0x199DB8u: goto label_199db8;
            case 0x199DBCu: goto label_199dbc;
            case 0x199DC0u: goto label_199dc0;
            case 0x199DC4u: goto label_199dc4;
            case 0x199DC8u: goto label_199dc8;
            case 0x199DCCu: goto label_199dcc;
            case 0x199DD0u: goto label_199dd0;
            case 0x199DD4u: goto label_199dd4;
            case 0x199DD8u: goto label_199dd8;
            case 0x199DDCu: goto label_199ddc;
            case 0x199DE0u: goto label_199de0;
            case 0x199DE4u: goto label_199de4;
            case 0x199DE8u: goto label_199de8;
            case 0x199DECu: goto label_199dec;
            case 0x199DF0u: goto label_199df0;
            case 0x199DF4u: goto label_199df4;
            case 0x199DF8u: goto label_199df8;
            case 0x199DFCu: goto label_199dfc;
            case 0x199E00u: goto label_199e00;
            case 0x199E04u: goto label_199e04;
            case 0x199E08u: goto label_199e08;
            case 0x199E0Cu: goto label_199e0c;
            case 0x199E10u: goto label_199e10;
            case 0x199E14u: goto label_199e14;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E20u: goto label_199e20;
            case 0x199E24u: goto label_199e24;
            case 0x199E28u: goto label_199e28;
            case 0x199E2Cu: goto label_199e2c;
            case 0x199E30u: goto label_199e30;
            case 0x199E34u: goto label_199e34;
            case 0x199E38u: goto label_199e38;
            case 0x199E3Cu: goto label_199e3c;
            case 0x199E40u: goto label_199e40;
            case 0x199E44u: goto label_199e44;
            case 0x199E48u: goto label_199e48;
            case 0x199E4Cu: goto label_199e4c;
            case 0x199E50u: goto label_199e50;
            case 0x199E54u: goto label_199e54;
            case 0x199E58u: goto label_199e58;
            case 0x199E5Cu: goto label_199e5c;
            case 0x199E60u: goto label_199e60;
            case 0x199E64u: goto label_199e64;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199E70u: goto label_199e70;
            case 0x199E74u: goto label_199e74;
            case 0x199E78u: goto label_199e78;
            case 0x199E7Cu: goto label_199e7c;
            case 0x199E80u: goto label_199e80;
            case 0x199E84u: goto label_199e84;
            case 0x199E88u: goto label_199e88;
            case 0x199E8Cu: goto label_199e8c;
            case 0x199E90u: goto label_199e90;
            case 0x199E94u: goto label_199e94;
            case 0x199E98u: goto label_199e98;
            case 0x199E9Cu: goto label_199e9c;
            case 0x199EA0u: goto label_199ea0;
            case 0x199EA4u: goto label_199ea4;
            case 0x199EA8u: goto label_199ea8;
            case 0x199EACu: goto label_199eac;
            case 0x199EB0u: goto label_199eb0;
            case 0x199EB4u: goto label_199eb4;
            case 0x199EB8u: goto label_199eb8;
            case 0x199EBCu: goto label_199ebc;
            case 0x199EC0u: goto label_199ec0;
            case 0x199EC4u: goto label_199ec4;
            case 0x199EC8u: goto label_199ec8;
            case 0x199ECCu: goto label_199ecc;
            case 0x199ED0u: goto label_199ed0;
            case 0x199ED4u: goto label_199ed4;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EDCu: goto label_199edc;
            case 0x199EE0u: goto label_199ee0;
            case 0x199EE4u: goto label_199ee4;
            case 0x199EE8u: goto label_199ee8;
            case 0x199EECu: goto label_199eec;
            case 0x199EF0u: goto label_199ef0;
            case 0x199EF4u: goto label_199ef4;
            case 0x199EF8u: goto label_199ef8;
            case 0x199EFCu: goto label_199efc;
            case 0x199F00u: goto label_199f00;
            case 0x199F04u: goto label_199f04;
            case 0x199F08u: goto label_199f08;
            case 0x199F0Cu: goto label_199f0c;
            case 0x199F10u: goto label_199f10;
            case 0x199F14u: goto label_199f14;
            case 0x199F18u: goto label_199f18;
            case 0x199F1Cu: goto label_199f1c;
            case 0x199F20u: goto label_199f20;
            case 0x199F24u: goto label_199f24;
            case 0x199F28u: goto label_199f28;
            case 0x199F2Cu: goto label_199f2c;
            case 0x199F30u: goto label_199f30;
            case 0x199F34u: goto label_199f34;
            case 0x199F38u: goto label_199f38;
            case 0x199F3Cu: goto label_199f3c;
            case 0x199F40u: goto label_199f40;
            case 0x199F44u: goto label_199f44;
            case 0x199F48u: goto label_199f48;
            case 0x199F4Cu: goto label_199f4c;
            case 0x199F50u: goto label_199f50;
            case 0x199F54u: goto label_199f54;
            case 0x199F58u: goto label_199f58;
            case 0x199F5Cu: goto label_199f5c;
            case 0x199F60u: goto label_199f60;
            case 0x199F64u: goto label_199f64;
            case 0x199F68u: goto label_199f68;
            case 0x199F6Cu: goto label_199f6c;
            case 0x199F70u: goto label_199f70;
            case 0x199F74u: goto label_199f74;
            case 0x199F78u: goto label_199f78;
            case 0x199F7Cu: goto label_199f7c;
            case 0x199F80u: goto label_199f80;
            case 0x199F84u: goto label_199f84;
            case 0x199F88u: goto label_199f88;
            case 0x199F8Cu: goto label_199f8c;
            case 0x199F90u: goto label_199f90;
            case 0x199F94u: goto label_199f94;
            case 0x199F98u: goto label_199f98;
            case 0x199F9Cu: goto label_199f9c;
            case 0x199FA0u: goto label_199fa0;
            case 0x199FA4u: goto label_199fa4;
            case 0x199FA8u: goto label_199fa8;
            case 0x199FACu: goto label_199fac;
            case 0x199FB0u: goto label_199fb0;
            case 0x199FB4u: goto label_199fb4;
            case 0x199FB8u: goto label_199fb8;
            case 0x199FBCu: goto label_199fbc;
            case 0x199FC0u: goto label_199fc0;
            case 0x199FC4u: goto label_199fc4;
            case 0x199FC8u: goto label_199fc8;
            case 0x199FCCu: goto label_199fcc;
            case 0x199FD0u: goto label_199fd0;
            case 0x199FD4u: goto label_199fd4;
            case 0x199FD8u: goto label_199fd8;
            case 0x199FDCu: goto label_199fdc;
            case 0x199FE0u: goto label_199fe0;
            case 0x199FE4u: goto label_199fe4;
            case 0x199FE8u: goto label_199fe8;
            case 0x199FECu: goto label_199fec;
            case 0x199FF0u: goto label_199ff0;
            case 0x199FF4u: goto label_199ff4;
            case 0x199FF8u: goto label_199ff8;
            case 0x199FFCu: goto label_199ffc;
            case 0x19A000u: goto label_19a000;
            case 0x19A004u: goto label_19a004;
            case 0x19A008u: goto label_19a008;
            case 0x19A00Cu: goto label_19a00c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A01Cu: goto label_19a01c;
            case 0x19A020u: goto label_19a020;
            case 0x19A024u: goto label_19a024;
            case 0x19A028u: goto label_19a028;
            case 0x19A02Cu: goto label_19a02c;
            case 0x19A030u: goto label_19a030;
            case 0x19A034u: goto label_19a034;
            case 0x19A038u: goto label_19a038;
            case 0x19A03Cu: goto label_19a03c;
            case 0x19A040u: goto label_19a040;
            case 0x19A044u: goto label_19a044;
            case 0x19A048u: goto label_19a048;
            case 0x19A04Cu: goto label_19a04c;
            case 0x19A050u: goto label_19a050;
            case 0x19A054u: goto label_19a054;
            case 0x19A058u: goto label_19a058;
            case 0x19A05Cu: goto label_19a05c;
            case 0x19A060u: goto label_19a060;
            case 0x19A064u: goto label_19a064;
            case 0x19A068u: goto label_19a068;
            case 0x19A06Cu: goto label_19a06c;
            case 0x19A070u: goto label_19a070;
            case 0x19A074u: goto label_19a074;
            case 0x19A078u: goto label_19a078;
            case 0x19A07Cu: goto label_19a07c;
            case 0x19A080u: goto label_19a080;
            case 0x19A084u: goto label_19a084;
            case 0x19A088u: goto label_19a088;
            case 0x19A08Cu: goto label_19a08c;
            case 0x19A090u: goto label_19a090;
            case 0x19A094u: goto label_19a094;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A0A0u: goto label_19a0a0;
            case 0x19A0A4u: goto label_19a0a4;
            case 0x19A0A8u: goto label_19a0a8;
            case 0x19A0ACu: goto label_19a0ac;
            case 0x19A0B0u: goto label_19a0b0;
            case 0x19A0B4u: goto label_19a0b4;
            case 0x19A0B8u: goto label_19a0b8;
            case 0x19A0BCu: goto label_19a0bc;
            case 0x19A0C0u: goto label_19a0c0;
            case 0x19A0C4u: goto label_19a0c4;
            case 0x19A0C8u: goto label_19a0c8;
            case 0x19A0CCu: goto label_19a0cc;
            case 0x19A0D0u: goto label_19a0d0;
            case 0x19A0D4u: goto label_19a0d4;
            case 0x19A0D8u: goto label_19a0d8;
            case 0x19A0DCu: goto label_19a0dc;
            case 0x19A0E0u: goto label_19a0e0;
            case 0x19A0E4u: goto label_19a0e4;
            case 0x19A0E8u: goto label_19a0e8;
            case 0x19A0ECu: goto label_19a0ec;
            case 0x19A0F0u: goto label_19a0f0;
            case 0x19A0F4u: goto label_19a0f4;
            case 0x19A0F8u: goto label_19a0f8;
            case 0x19A0FCu: goto label_19a0fc;
            case 0x19A100u: goto label_19a100;
            case 0x19A104u: goto label_19a104;
            case 0x19A108u: goto label_19a108;
            case 0x19A10Cu: goto label_19a10c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A118u: goto label_19a118;
            case 0x19A11Cu: goto label_19a11c;
            case 0x19A120u: goto label_19a120;
            case 0x19A124u: goto label_19a124;
            case 0x19A128u: goto label_19a128;
            case 0x19A12Cu: goto label_19a12c;
            case 0x19A130u: goto label_19a130;
            case 0x19A134u: goto label_19a134;
            case 0x19A138u: goto label_19a138;
            case 0x19A13Cu: goto label_19a13c;
            case 0x19A140u: goto label_19a140;
            case 0x19A144u: goto label_19a144;
            case 0x19A148u: goto label_19a148;
            case 0x19A14Cu: goto label_19a14c;
            case 0x19A150u: goto label_19a150;
            case 0x19A154u: goto label_19a154;
            case 0x19A158u: goto label_19a158;
            case 0x19A15Cu: goto label_19a15c;
            case 0x19A160u: goto label_19a160;
            case 0x19A164u: goto label_19a164;
            case 0x19A168u: goto label_19a168;
            case 0x19A16Cu: goto label_19a16c;
            case 0x19A170u: goto label_19a170;
            case 0x19A174u: goto label_19a174;
            case 0x19A178u: goto label_19a178;
            case 0x19A17Cu: goto label_19a17c;
            case 0x19A180u: goto label_19a180;
            case 0x19A184u: goto label_19a184;
            case 0x19A188u: goto label_19a188;
            case 0x19A18Cu: goto label_19a18c;
            case 0x19A190u: goto label_19a190;
            case 0x19A194u: goto label_19a194;
            case 0x19A198u: goto label_19a198;
            case 0x19A19Cu: goto label_19a19c;
            case 0x19A1A0u: goto label_19a1a0;
            case 0x19A1A4u: goto label_19a1a4;
            case 0x19A1A8u: goto label_19a1a8;
            case 0x19A1ACu: goto label_19a1ac;
            case 0x19A1B0u: goto label_19a1b0;
            case 0x19A1B4u: goto label_19a1b4;
            case 0x19A1B8u: goto label_19a1b8;
            case 0x19A1BCu: goto label_19a1bc;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1C8u: goto label_19a1c8;
            case 0x19A1CCu: goto label_19a1cc;
            case 0x19A1D0u: goto label_19a1d0;
            case 0x19A1D4u: goto label_19a1d4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A1DCu: goto label_19a1dc;
            case 0x19A1E0u: goto label_19a1e0;
            case 0x19A1E4u: goto label_19a1e4;
            case 0x19A1E8u: goto label_19a1e8;
            case 0x19A1ECu: goto label_19a1ec;
            case 0x19A1F0u: goto label_19a1f0;
            case 0x19A1F4u: goto label_19a1f4;
            case 0x19A1F8u: goto label_19a1f8;
            case 0x19A1FCu: goto label_19a1fc;
            case 0x19A200u: goto label_19a200;
            case 0x19A204u: goto label_19a204;
            case 0x19A208u: goto label_19a208;
            case 0x19A20Cu: goto label_19a20c;
            case 0x19A210u: goto label_19a210;
            case 0x19A214u: goto label_19a214;
            case 0x19A218u: goto label_19a218;
            case 0x19A21Cu: goto label_19a21c;
            case 0x19A220u: goto label_19a220;
            case 0x19A224u: goto label_19a224;
            case 0x19A228u: goto label_19a228;
            case 0x19A22Cu: goto label_19a22c;
            case 0x19A230u: goto label_19a230;
            case 0x19A234u: goto label_19a234;
            case 0x19A238u: goto label_19a238;
            case 0x19A23Cu: goto label_19a23c;
            case 0x19A240u: goto label_19a240;
            case 0x19A244u: goto label_19a244;
            case 0x19A248u: goto label_19a248;
            case 0x19A24Cu: goto label_19a24c;
            case 0x19A250u: goto label_19a250;
            case 0x19A254u: goto label_19a254;
            case 0x19A258u: goto label_19a258;
            case 0x19A25Cu: goto label_19a25c;
            case 0x19A260u: goto label_19a260;
            case 0x19A264u: goto label_19a264;
            case 0x19A268u: goto label_19a268;
            case 0x19A26Cu: goto label_19a26c;
            case 0x19A270u: goto label_19a270;
            case 0x19A274u: goto label_19a274;
            case 0x19A278u: goto label_19a278;
            case 0x19A27Cu: goto label_19a27c;
            case 0x19A280u: goto label_19a280;
            case 0x19A284u: goto label_19a284;
            case 0x19A288u: goto label_19a288;
            case 0x19A28Cu: goto label_19a28c;
            case 0x19A290u: goto label_19a290;
            case 0x19A294u: goto label_19a294;
            case 0x19A298u: goto label_19a298;
            case 0x19A29Cu: goto label_19a29c;
            case 0x19A2A0u: goto label_19a2a0;
            case 0x19A2A4u: goto label_19a2a4;
            case 0x19A2A8u: goto label_19a2a8;
            case 0x19A2ACu: goto label_19a2ac;
            case 0x19A2B0u: goto label_19a2b0;
            case 0x19A2B4u: goto label_19a2b4;
            case 0x19A2B8u: goto label_19a2b8;
            case 0x19A2BCu: goto label_19a2bc;
            case 0x19A2C0u: goto label_19a2c0;
            case 0x19A2C4u: goto label_19a2c4;
            case 0x19A2C8u: goto label_19a2c8;
            case 0x19A2CCu: goto label_19a2cc;
            case 0x19A2D0u: goto label_19a2d0;
            case 0x19A2D4u: goto label_19a2d4;
            case 0x19A2D8u: goto label_19a2d8;
            case 0x19A2DCu: goto label_19a2dc;
            case 0x19A2E0u: goto label_19a2e0;
            case 0x19A2E4u: goto label_19a2e4;
            case 0x19A2E8u: goto label_19a2e8;
            case 0x19A2ECu: goto label_19a2ec;
            case 0x19A2F0u: goto label_19a2f0;
            case 0x19A2F4u: goto label_19a2f4;
            case 0x19A2F8u: goto label_19a2f8;
            case 0x19A2FCu: goto label_19a2fc;
            case 0x19A300u: goto label_19a300;
            case 0x19A304u: goto label_19a304;
            case 0x19A308u: goto label_19a308;
            case 0x19A30Cu: goto label_19a30c;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A318u: goto label_19a318;
            case 0x19A31Cu: goto label_19a31c;
            case 0x19A320u: goto label_19a320;
            case 0x19A324u: goto label_19a324;
            case 0x19A328u: goto label_19a328;
            case 0x19A32Cu: goto label_19a32c;
            case 0x19A330u: goto label_19a330;
            case 0x19A334u: goto label_19a334;
            case 0x19A338u: goto label_19a338;
            case 0x19A33Cu: goto label_19a33c;
            case 0x19A340u: goto label_19a340;
            case 0x19A344u: goto label_19a344;
            case 0x19A348u: goto label_19a348;
            case 0x19A34Cu: goto label_19a34c;
            case 0x19A350u: goto label_19a350;
            case 0x19A354u: goto label_19a354;
            case 0x19A358u: goto label_19a358;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A360u: goto label_19a360;
            case 0x19A364u: goto label_19a364;
            case 0x19A368u: goto label_19a368;
            case 0x19A36Cu: goto label_19a36c;
            case 0x19A370u: goto label_19a370;
            case 0x19A374u: goto label_19a374;
            case 0x19A378u: goto label_19a378;
            case 0x19A37Cu: goto label_19a37c;
            case 0x19A380u: goto label_19a380;
            case 0x19A384u: goto label_19a384;
            case 0x19A388u: goto label_19a388;
            case 0x19A38Cu: goto label_19a38c;
            case 0x19A390u: goto label_19a390;
            case 0x19A394u: goto label_19a394;
            case 0x19A398u: goto label_19a398;
            case 0x19A39Cu: goto label_19a39c;
            case 0x19A3A0u: goto label_19a3a0;
            case 0x19A3A4u: goto label_19a3a4;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3ACu: goto label_19a3ac;
            case 0x19A3B0u: goto label_19a3b0;
            case 0x19A3B4u: goto label_19a3b4;
            case 0x19A3B8u: goto label_19a3b8;
            case 0x19A3BCu: goto label_19a3bc;
            case 0x19A3C0u: goto label_19a3c0;
            case 0x19A3C4u: goto label_19a3c4;
            case 0x19A3C8u: goto label_19a3c8;
            case 0x19A3CCu: goto label_19a3cc;
            case 0x19A3D0u: goto label_19a3d0;
            case 0x19A3D4u: goto label_19a3d4;
            case 0x19A3D8u: goto label_19a3d8;
            case 0x19A3DCu: goto label_19a3dc;
            case 0x19A3E0u: goto label_19a3e0;
            case 0x19A3E4u: goto label_19a3e4;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3ECu: goto label_19a3ec;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A3F4u: goto label_19a3f4;
            case 0x19A3F8u: goto label_19a3f8;
            case 0x19A3FCu: goto label_19a3fc;
            case 0x19A400u: goto label_19a400;
            case 0x19A404u: goto label_19a404;
            case 0x19A408u: goto label_19a408;
            case 0x19A40Cu: goto label_19a40c;
            case 0x19A410u: goto label_19a410;
            case 0x19A414u: goto label_19a414;
            case 0x19A418u: goto label_19a418;
            case 0x19A41Cu: goto label_19a41c;
            case 0x19A420u: goto label_19a420;
            case 0x19A424u: goto label_19a424;
            case 0x19A428u: goto label_19a428;
            case 0x19A42Cu: goto label_19a42c;
            case 0x19A430u: goto label_19a430;
            case 0x19A434u: goto label_19a434;
            case 0x19A438u: goto label_19a438;
            case 0x19A43Cu: goto label_19a43c;
            case 0x19A440u: goto label_19a440;
            case 0x19A444u: goto label_19a444;
            case 0x19A448u: goto label_19a448;
            case 0x19A44Cu: goto label_19a44c;
            case 0x19A450u: goto label_19a450;
            case 0x19A454u: goto label_19a454;
            case 0x19A458u: goto label_19a458;
            case 0x19A45Cu: goto label_19a45c;
            case 0x19A460u: goto label_19a460;
            case 0x19A464u: goto label_19a464;
            case 0x19A468u: goto label_19a468;
            case 0x19A46Cu: goto label_19a46c;
            case 0x19A470u: goto label_19a470;
            case 0x19A474u: goto label_19a474;
            case 0x19A478u: goto label_19a478;
            case 0x19A47Cu: goto label_19a47c;
            case 0x19A480u: goto label_19a480;
            case 0x19A484u: goto label_19a484;
            case 0x19A488u: goto label_19a488;
            case 0x19A48Cu: goto label_19a48c;
            case 0x19A490u: goto label_19a490;
            case 0x19A494u: goto label_19a494;
            case 0x19A498u: goto label_19a498;
            case 0x19A49Cu: goto label_19a49c;
            case 0x19A4A0u: goto label_19a4a0;
            case 0x19A4A4u: goto label_19a4a4;
            case 0x19A4A8u: goto label_19a4a8;
            case 0x19A4ACu: goto label_19a4ac;
            case 0x19A4B0u: goto label_19a4b0;
            case 0x19A4B4u: goto label_19a4b4;
            case 0x19A4B8u: goto label_19a4b8;
            case 0x19A4BCu: goto label_19a4bc;
            case 0x19A4C0u: goto label_19a4c0;
            case 0x19A4C4u: goto label_19a4c4;
            case 0x19A4C8u: goto label_19a4c8;
            case 0x19A4CCu: goto label_19a4cc;
            case 0x19A4D0u: goto label_19a4d0;
            case 0x19A4D4u: goto label_19a4d4;
            case 0x19A4D8u: goto label_19a4d8;
            case 0x19A4DCu: goto label_19a4dc;
            case 0x19A4E0u: goto label_19a4e0;
            case 0x19A4E4u: goto label_19a4e4;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A4ECu: goto label_19a4ec;
            case 0x19A4F0u: goto label_19a4f0;
            case 0x19A4F4u: goto label_19a4f4;
            case 0x19A4F8u: goto label_19a4f8;
            case 0x19A4FCu: goto label_19a4fc;
            case 0x19A500u: goto label_19a500;
            case 0x19A504u: goto label_19a504;
            case 0x19A508u: goto label_19a508;
            case 0x19A50Cu: goto label_19a50c;
            case 0x19A510u: goto label_19a510;
            case 0x19A514u: goto label_19a514;
            case 0x19A518u: goto label_19a518;
            case 0x19A51Cu: goto label_19a51c;
            case 0x19A520u: goto label_19a520;
            case 0x19A524u: goto label_19a524;
            case 0x19A528u: goto label_19a528;
            case 0x19A52Cu: goto label_19a52c;
            case 0x19A530u: goto label_19a530;
            case 0x19A534u: goto label_19a534;
            case 0x19A538u: goto label_19a538;
            case 0x19A53Cu: goto label_19a53c;
            case 0x19A540u: goto label_19a540;
            case 0x19A544u: goto label_19a544;
            case 0x19A548u: goto label_19a548;
            case 0x19A54Cu: goto label_19a54c;
            case 0x19A550u: goto label_19a550;
            case 0x19A554u: goto label_19a554;
            case 0x19A558u: goto label_19a558;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A560u: goto label_19a560;
            case 0x19A564u: goto label_19a564;
            case 0x19A568u: goto label_19a568;
            case 0x19A56Cu: goto label_19a56c;
            case 0x19A570u: goto label_19a570;
            case 0x19A574u: goto label_19a574;
            case 0x19A578u: goto label_19a578;
            case 0x19A57Cu: goto label_19a57c;
            case 0x19A580u: goto label_19a580;
            case 0x19A584u: goto label_19a584;
            case 0x19A588u: goto label_19a588;
            case 0x19A58Cu: goto label_19a58c;
            case 0x19A590u: goto label_19a590;
            case 0x19A594u: goto label_19a594;
            case 0x19A598u: goto label_19a598;
            case 0x19A59Cu: goto label_19a59c;
            case 0x19A5A0u: goto label_19a5a0;
            case 0x19A5A4u: goto label_19a5a4;
            case 0x19A5A8u: goto label_19a5a8;
            case 0x19A5ACu: goto label_19a5ac;
            case 0x19A5B0u: goto label_19a5b0;
            case 0x19A5B4u: goto label_19a5b4;
            case 0x19A5B8u: goto label_19a5b8;
            case 0x19A5BCu: goto label_19a5bc;
            case 0x19A5C0u: goto label_19a5c0;
            case 0x19A5C4u: goto label_19a5c4;
            case 0x19A5C8u: goto label_19a5c8;
            case 0x19A5CCu: goto label_19a5cc;
            case 0x19A5D0u: goto label_19a5d0;
            case 0x19A5D4u: goto label_19a5d4;
            case 0x19A5D8u: goto label_19a5d8;
            case 0x19A5DCu: goto label_19a5dc;
            case 0x19A5E0u: goto label_19a5e0;
            case 0x19A5E4u: goto label_19a5e4;
            case 0x19A5E8u: goto label_19a5e8;
            case 0x19A5ECu: goto label_19a5ec;
            case 0x19A5F0u: goto label_19a5f0;
            case 0x19A5F4u: goto label_19a5f4;
            case 0x19A5F8u: goto label_19a5f8;
            case 0x19A5FCu: goto label_19a5fc;
            case 0x19A600u: goto label_19a600;
            case 0x19A604u: goto label_19a604;
            case 0x19A608u: goto label_19a608;
            case 0x19A60Cu: goto label_19a60c;
            case 0x19A610u: goto label_19a610;
            case 0x19A614u: goto label_19a614;
            case 0x19A618u: goto label_19a618;
            case 0x19A61Cu: goto label_19a61c;
            case 0x19A620u: goto label_19a620;
            case 0x19A624u: goto label_19a624;
            case 0x19A628u: goto label_19a628;
            case 0x19A62Cu: goto label_19a62c;
            case 0x19A630u: goto label_19a630;
            case 0x19A634u: goto label_19a634;
            case 0x19A638u: goto label_19a638;
            case 0x19A63Cu: goto label_19a63c;
            case 0x19A640u: goto label_19a640;
            case 0x19A644u: goto label_19a644;
            case 0x19A648u: goto label_19a648;
            case 0x19A64Cu: goto label_19a64c;
            case 0x19A650u: goto label_19a650;
            case 0x19A654u: goto label_19a654;
            case 0x19A658u: goto label_19a658;
            case 0x19A65Cu: goto label_19a65c;
            case 0x19A660u: goto label_19a660;
            case 0x19A664u: goto label_19a664;
            case 0x19A668u: goto label_19a668;
            case 0x19A66Cu: goto label_19a66c;
            case 0x19A670u: goto label_19a670;
            case 0x19A674u: goto label_19a674;
            case 0x19A678u: goto label_19a678;
            case 0x19A67Cu: goto label_19a67c;
            case 0x19A680u: goto label_19a680;
            case 0x19A684u: goto label_19a684;
            case 0x19A688u: goto label_19a688;
            case 0x19A68Cu: goto label_19a68c;
            case 0x19A690u: goto label_19a690;
            case 0x19A694u: goto label_19a694;
            case 0x19A698u: goto label_19a698;
            case 0x19A69Cu: goto label_19a69c;
            case 0x19A6A0u: goto label_19a6a0;
            case 0x19A6A4u: goto label_19a6a4;
            case 0x19A6A8u: goto label_19a6a8;
            case 0x19A6ACu: goto label_19a6ac;
            case 0x19A6B0u: goto label_19a6b0;
            case 0x19A6B4u: goto label_19a6b4;
            case 0x19A6B8u: goto label_19a6b8;
            case 0x19A6BCu: goto label_19a6bc;
            case 0x19A6C0u: goto label_19a6c0;
            case 0x19A6C4u: goto label_19a6c4;
            case 0x19A6C8u: goto label_19a6c8;
            case 0x19A6CCu: goto label_19a6cc;
            case 0x19A6D0u: goto label_19a6d0;
            case 0x19A6D4u: goto label_19a6d4;
            case 0x19A6D8u: goto label_19a6d8;
            case 0x19A6DCu: goto label_19a6dc;
            case 0x19A6E0u: goto label_19a6e0;
            case 0x19A6E4u: goto label_19a6e4;
            case 0x19A6E8u: goto label_19a6e8;
            case 0x19A6ECu: goto label_19a6ec;
            case 0x19A6F0u: goto label_19a6f0;
            case 0x19A6F4u: goto label_19a6f4;
            case 0x19A6F8u: goto label_19a6f8;
            case 0x19A6FCu: goto label_19a6fc;
            case 0x19A700u: goto label_19a700;
            case 0x19A704u: goto label_19a704;
            case 0x19A708u: goto label_19a708;
            case 0x19A70Cu: goto label_19a70c;
            case 0x19A710u: goto label_19a710;
            case 0x19A714u: goto label_19a714;
            case 0x19A718u: goto label_19a718;
            case 0x19A71Cu: goto label_19a71c;
            case 0x19A720u: goto label_19a720;
            case 0x19A724u: goto label_19a724;
            case 0x19A728u: goto label_19a728;
            case 0x19A72Cu: goto label_19a72c;
            case 0x19A730u: goto label_19a730;
            case 0x19A734u: goto label_19a734;
            case 0x19A738u: goto label_19a738;
            case 0x19A73Cu: goto label_19a73c;
            case 0x19A740u: goto label_19a740;
            case 0x19A744u: goto label_19a744;
            case 0x19A748u: goto label_19a748;
            case 0x19A74Cu: goto label_19a74c;
            case 0x19A750u: goto label_19a750;
            case 0x19A754u: goto label_19a754;
            case 0x19A758u: goto label_19a758;
            case 0x19A75Cu: goto label_19a75c;
            case 0x19A760u: goto label_19a760;
            case 0x19A764u: goto label_19a764;
            case 0x19A768u: goto label_19a768;
            case 0x19A76Cu: goto label_19a76c;
            case 0x19A770u: goto label_19a770;
            case 0x19A774u: goto label_19a774;
            case 0x19A778u: goto label_19a778;
            case 0x19A77Cu: goto label_19a77c;
            case 0x19A780u: goto label_19a780;
            case 0x19A784u: goto label_19a784;
            case 0x19A788u: goto label_19a788;
            case 0x19A78Cu: goto label_19a78c;
            case 0x19A790u: goto label_19a790;
            case 0x19A794u: goto label_19a794;
            case 0x19A798u: goto label_19a798;
            case 0x19A79Cu: goto label_19a79c;
            case 0x19A7A0u: goto label_19a7a0;
            case 0x19A7A4u: goto label_19a7a4;
            case 0x19A7A8u: goto label_19a7a8;
            case 0x19A7ACu: goto label_19a7ac;
            case 0x19A7B0u: goto label_19a7b0;
            case 0x19A7B4u: goto label_19a7b4;
            case 0x19A7B8u: goto label_19a7b8;
            case 0x19A7BCu: goto label_19a7bc;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7C4u: goto label_19a7c4;
            case 0x19A7C8u: goto label_19a7c8;
            case 0x19A7CCu: goto label_19a7cc;
            case 0x19A7D0u: goto label_19a7d0;
            case 0x19A7D4u: goto label_19a7d4;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7DCu: goto label_19a7dc;
            case 0x19A7E0u: goto label_19a7e0;
            case 0x19A7E4u: goto label_19a7e4;
            case 0x19A7E8u: goto label_19a7e8;
            case 0x19A7ECu: goto label_19a7ec;
            case 0x19A7F0u: goto label_19a7f0;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A7F8u: goto label_19a7f8;
            case 0x19A7FCu: goto label_19a7fc;
            case 0x19A800u: goto label_19a800;
            case 0x19A804u: goto label_19a804;
            case 0x19A808u: goto label_19a808;
            case 0x19A80Cu: goto label_19a80c;
            case 0x19A810u: goto label_19a810;
            case 0x19A814u: goto label_19a814;
            case 0x19A818u: goto label_19a818;
            case 0x19A81Cu: goto label_19a81c;
            case 0x19A820u: goto label_19a820;
            case 0x19A824u: goto label_19a824;
            case 0x19A828u: goto label_19a828;
            case 0x19A82Cu: goto label_19a82c;
            case 0x19A830u: goto label_19a830;
            case 0x19A834u: goto label_19a834;
            case 0x19A838u: goto label_19a838;
            case 0x19A83Cu: goto label_19a83c;
            case 0x19A840u: goto label_19a840;
            case 0x19A844u: goto label_19a844;
            case 0x19A848u: goto label_19a848;
            case 0x19A84Cu: goto label_19a84c;
            case 0x19A850u: goto label_19a850;
            case 0x19A854u: goto label_19a854;
            case 0x19A858u: goto label_19a858;
            case 0x19A85Cu: goto label_19a85c;
            case 0x19A860u: goto label_19a860;
            case 0x19A864u: goto label_19a864;
            case 0x19A868u: goto label_19a868;
            case 0x19A86Cu: goto label_19a86c;
            case 0x19A870u: goto label_19a870;
            case 0x19A874u: goto label_19a874;
            case 0x19A878u: goto label_19a878;
            case 0x19A87Cu: goto label_19a87c;
            case 0x19A880u: goto label_19a880;
            case 0x19A884u: goto label_19a884;
            case 0x19A888u: goto label_19a888;
            case 0x19A88Cu: goto label_19a88c;
            case 0x19A890u: goto label_19a890;
            case 0x19A894u: goto label_19a894;
            case 0x19A898u: goto label_19a898;
            case 0x19A89Cu: goto label_19a89c;
            case 0x19A8A0u: goto label_19a8a0;
            case 0x19A8A4u: goto label_19a8a4;
            case 0x19A8A8u: goto label_19a8a8;
            case 0x19A8ACu: goto label_19a8ac;
            case 0x19A8B0u: goto label_19a8b0;
            case 0x19A8B4u: goto label_19a8b4;
            case 0x19A8B8u: goto label_19a8b8;
            case 0x19A8BCu: goto label_19a8bc;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A8C4u: goto label_19a8c4;
            case 0x19A8C8u: goto label_19a8c8;
            case 0x19A8CCu: goto label_19a8cc;
            case 0x19A8D0u: goto label_19a8d0;
            case 0x19A8D4u: goto label_19a8d4;
            case 0x19A8D8u: goto label_19a8d8;
            case 0x19A8DCu: goto label_19a8dc;
            case 0x19A8E0u: goto label_19a8e0;
            case 0x19A8E4u: goto label_19a8e4;
            case 0x19A8E8u: goto label_19a8e8;
            case 0x19A8ECu: goto label_19a8ec;
            case 0x19A8F0u: goto label_19a8f0;
            case 0x19A8F4u: goto label_19a8f4;
            case 0x19A8F8u: goto label_19a8f8;
            case 0x19A8FCu: goto label_19a8fc;
            case 0x19A900u: goto label_19a900;
            case 0x19A904u: goto label_19a904;
            case 0x19A908u: goto label_19a908;
            case 0x19A90Cu: goto label_19a90c;
            case 0x19A910u: goto label_19a910;
            case 0x19A914u: goto label_19a914;
            case 0x19A918u: goto label_19a918;
            case 0x19A91Cu: goto label_19a91c;
            case 0x19A920u: goto label_19a920;
            case 0x19A924u: goto label_19a924;
            case 0x19A928u: goto label_19a928;
            case 0x19A92Cu: goto label_19a92c;
            case 0x19A930u: goto label_19a930;
            case 0x19A934u: goto label_19a934;
            case 0x19A938u: goto label_19a938;
            case 0x19A93Cu: goto label_19a93c;
            case 0x19A940u: goto label_19a940;
            case 0x19A944u: goto label_19a944;
            case 0x19A948u: goto label_19a948;
            case 0x19A94Cu: goto label_19a94c;
            case 0x19A950u: goto label_19a950;
            case 0x19A954u: goto label_19a954;
            case 0x19A958u: goto label_19a958;
            case 0x19A95Cu: goto label_19a95c;
            case 0x19A960u: goto label_19a960;
            case 0x19A964u: goto label_19a964;
            case 0x19A968u: goto label_19a968;
            case 0x19A96Cu: goto label_19a96c;
            case 0x19A970u: goto label_19a970;
            case 0x19A974u: goto label_19a974;
            case 0x19A978u: goto label_19a978;
            case 0x19A97Cu: goto label_19a97c;
            case 0x19A980u: goto label_19a980;
            case 0x19A984u: goto label_19a984;
            case 0x19A988u: goto label_19a988;
            case 0x19A98Cu: goto label_19a98c;
            case 0x19A990u: goto label_19a990;
            case 0x19A994u: goto label_19a994;
            case 0x19A998u: goto label_19a998;
            case 0x19A99Cu: goto label_19a99c;
            case 0x19A9A0u: goto label_19a9a0;
            case 0x19A9A4u: goto label_19a9a4;
            case 0x19A9A8u: goto label_19a9a8;
            case 0x19A9ACu: goto label_19a9ac;
            case 0x19A9B0u: goto label_19a9b0;
            case 0x19A9B4u: goto label_19a9b4;
            case 0x19A9B8u: goto label_19a9b8;
            case 0x19A9BCu: goto label_19a9bc;
            case 0x19A9C0u: goto label_19a9c0;
            case 0x19A9C4u: goto label_19a9c4;
            case 0x19A9C8u: goto label_19a9c8;
            case 0x19A9CCu: goto label_19a9cc;
            case 0x19A9D0u: goto label_19a9d0;
            case 0x19A9D4u: goto label_19a9d4;
            case 0x19A9D8u: goto label_19a9d8;
            case 0x19A9DCu: goto label_19a9dc;
            case 0x19A9E0u: goto label_19a9e0;
            case 0x19A9E4u: goto label_19a9e4;
            case 0x19A9E8u: goto label_19a9e8;
            case 0x19A9ECu: goto label_19a9ec;
            case 0x19A9F0u: goto label_19a9f0;
            case 0x19A9F4u: goto label_19a9f4;
            case 0x19A9F8u: goto label_19a9f8;
            case 0x19A9FCu: goto label_19a9fc;
            case 0x19AA00u: goto label_19aa00;
            case 0x19AA04u: goto label_19aa04;
            case 0x19AA08u: goto label_19aa08;
            case 0x19AA0Cu: goto label_19aa0c;
            case 0x19AA10u: goto label_19aa10;
            case 0x19AA14u: goto label_19aa14;
            case 0x19AA18u: goto label_19aa18;
            case 0x19AA1Cu: goto label_19aa1c;
            case 0x19AA20u: goto label_19aa20;
            case 0x19AA24u: goto label_19aa24;
            case 0x19AA28u: goto label_19aa28;
            case 0x19AA2Cu: goto label_19aa2c;
            case 0x19AA30u: goto label_19aa30;
            case 0x19AA34u: goto label_19aa34;
            case 0x19AA38u: goto label_19aa38;
            case 0x19AA3Cu: goto label_19aa3c;
            case 0x19AA40u: goto label_19aa40;
            case 0x19AA44u: goto label_19aa44;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA4Cu: goto label_19aa4c;
            case 0x19AA50u: goto label_19aa50;
            case 0x19AA54u: goto label_19aa54;
            case 0x19AA58u: goto label_19aa58;
            case 0x19AA5Cu: goto label_19aa5c;
            case 0x19AA60u: goto label_19aa60;
            case 0x19AA64u: goto label_19aa64;
            case 0x19AA68u: goto label_19aa68;
            case 0x19AA6Cu: goto label_19aa6c;
            case 0x19AA70u: goto label_19aa70;
            case 0x19AA74u: goto label_19aa74;
            case 0x19AA78u: goto label_19aa78;
            case 0x19AA7Cu: goto label_19aa7c;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AA84u: goto label_19aa84;
            case 0x19AA88u: goto label_19aa88;
            case 0x19AA8Cu: goto label_19aa8c;
            case 0x19AA90u: goto label_19aa90;
            case 0x19AA94u: goto label_19aa94;
            case 0x19AA98u: goto label_19aa98;
            case 0x19AA9Cu: goto label_19aa9c;
            case 0x19AAA0u: goto label_19aaa0;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AAA8u: goto label_19aaa8;
            case 0x19AAACu: goto label_19aaac;
            case 0x19AAB0u: goto label_19aab0;
            case 0x19AAB4u: goto label_19aab4;
            case 0x19AAB8u: goto label_19aab8;
            case 0x19AABCu: goto label_19aabc;
            case 0x19AAC0u: goto label_19aac0;
            case 0x19AAC4u: goto label_19aac4;
            case 0x19AAC8u: goto label_19aac8;
            case 0x19AACCu: goto label_19aacc;
            case 0x19AAD0u: goto label_19aad0;
            case 0x19AAD4u: goto label_19aad4;
            case 0x19AAD8u: goto label_19aad8;
            case 0x19AADCu: goto label_19aadc;
            case 0x19AAE0u: goto label_19aae0;
            case 0x19AAE4u: goto label_19aae4;
            case 0x19AAE8u: goto label_19aae8;
            case 0x19AAECu: goto label_19aaec;
            case 0x19AAF0u: goto label_19aaf0;
            case 0x19AAF4u: goto label_19aaf4;
            case 0x19AAF8u: goto label_19aaf8;
            case 0x19AAFCu: goto label_19aafc;
            case 0x19AB00u: goto label_19ab00;
            case 0x19AB04u: goto label_19ab04;
            case 0x19AB08u: goto label_19ab08;
            case 0x19AB0Cu: goto label_19ab0c;
            case 0x19AB10u: goto label_19ab10;
            case 0x19AB14u: goto label_19ab14;
            case 0x19AB18u: goto label_19ab18;
            case 0x19AB1Cu: goto label_19ab1c;
            case 0x19AB20u: goto label_19ab20;
            case 0x19AB24u: goto label_19ab24;
            case 0x19AB28u: goto label_19ab28;
            case 0x19AB2Cu: goto label_19ab2c;
            case 0x19AB30u: goto label_19ab30;
            case 0x19AB34u: goto label_19ab34;
            case 0x19AB38u: goto label_19ab38;
            case 0x19AB3Cu: goto label_19ab3c;
            case 0x19AB40u: goto label_19ab40;
            case 0x19AB44u: goto label_19ab44;
            case 0x19AB48u: goto label_19ab48;
            case 0x19AB4Cu: goto label_19ab4c;
            case 0x19AB50u: goto label_19ab50;
            case 0x19AB54u: goto label_19ab54;
            case 0x19AB58u: goto label_19ab58;
            case 0x19AB5Cu: goto label_19ab5c;
            case 0x19AB60u: goto label_19ab60;
            case 0x19AB64u: goto label_19ab64;
            case 0x19AB68u: goto label_19ab68;
            case 0x19AB6Cu: goto label_19ab6c;
            case 0x19AB70u: goto label_19ab70;
            case 0x19AB74u: goto label_19ab74;
            case 0x19AB78u: goto label_19ab78;
            case 0x19AB7Cu: goto label_19ab7c;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB84u: goto label_19ab84;
            case 0x19AB88u: goto label_19ab88;
            case 0x19AB8Cu: goto label_19ab8c;
            case 0x19AB90u: goto label_19ab90;
            case 0x19AB94u: goto label_19ab94;
            case 0x19AB98u: goto label_19ab98;
            case 0x19AB9Cu: goto label_19ab9c;
            case 0x19ABA0u: goto label_19aba0;
            case 0x19ABA4u: goto label_19aba4;
            case 0x19ABA8u: goto label_19aba8;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABB4u: goto label_19abb4;
            case 0x19ABB8u: goto label_19abb8;
            case 0x19ABBCu: goto label_19abbc;
            case 0x19ABC0u: goto label_19abc0;
            case 0x19ABC4u: goto label_19abc4;
            case 0x19ABC8u: goto label_19abc8;
            case 0x19ABCCu: goto label_19abcc;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19ABD4u: goto label_19abd4;
            case 0x19ABD8u: goto label_19abd8;
            case 0x19ABDCu: goto label_19abdc;
            case 0x19ABE0u: goto label_19abe0;
            case 0x19ABE4u: goto label_19abe4;
            case 0x19ABE8u: goto label_19abe8;
            case 0x19ABECu: goto label_19abec;
            case 0x19ABF0u: goto label_19abf0;
            case 0x19ABF4u: goto label_19abf4;
            case 0x19ABF8u: goto label_19abf8;
            case 0x19ABFCu: goto label_19abfc;
            case 0x19AC00u: goto label_19ac00;
            case 0x19AC04u: goto label_19ac04;
            case 0x19AC08u: goto label_19ac08;
            case 0x19AC0Cu: goto label_19ac0c;
            case 0x19AC10u: goto label_19ac10;
            case 0x19AC14u: goto label_19ac14;
            case 0x19AC18u: goto label_19ac18;
            case 0x19AC1Cu: goto label_19ac1c;
            case 0x19AC20u: goto label_19ac20;
            case 0x19AC24u: goto label_19ac24;
            case 0x19AC28u: goto label_19ac28;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC30u: goto label_19ac30;
            case 0x19AC34u: goto label_19ac34;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC3Cu: goto label_19ac3c;
            case 0x19AC40u: goto label_19ac40;
            case 0x19AC44u: goto label_19ac44;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC50u: goto label_19ac50;
            case 0x19AC54u: goto label_19ac54;
            case 0x19AC58u: goto label_19ac58;
            case 0x19AC5Cu: goto label_19ac5c;
            case 0x19AC60u: goto label_19ac60;
            case 0x19AC64u: goto label_19ac64;
            case 0x19AC68u: goto label_19ac68;
            case 0x19AC6Cu: goto label_19ac6c;
            case 0x19AC70u: goto label_19ac70;
            case 0x19AC74u: goto label_19ac74;
            case 0x19AC78u: goto label_19ac78;
            case 0x19AC7Cu: goto label_19ac7c;
            case 0x19AC80u: goto label_19ac80;
            case 0x19AC84u: goto label_19ac84;
            case 0x19AC88u: goto label_19ac88;
            default: break;
        }
        return;
    }
label_fallthrough_0x19ac84:
    ctx->pc = 0x19AC8Cu;
}

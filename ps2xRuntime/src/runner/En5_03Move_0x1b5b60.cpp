#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En5_03Move
// Address: 0x1b5b60 - 0x1b712c
void En5_03Move_0x1b5b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En5_03Move_0x1b5b60");
#endif

    ctx->pc = 0x1b5b60u;

label_1b5b60:
    // 0x1b5b60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b5b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b5b64:
    // 0x1b5b64: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b5b68:
    // 0x1b5b68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b5b6c:
    // 0x1b5b6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5b6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5b70:
    // 0x1b5b70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b5b74:
    // 0x1b5b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5b78:
    // 0x1b5b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b5b7c:
    // 0x1b5b7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b5b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5b80:
    // 0x1b5b80: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1b5b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b5b84:
    // 0x1b5b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b88:
    // 0x1b5b88: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1b5b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5b8c:
    // 0x1b5b8c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b5b8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b5b90:
    // 0x1b5b90: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1b5b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1b5b94:
    // 0x1b5b94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5b98:
    // 0x1b5b98: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1b5b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b5b9c:
    // 0x1b5b9c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b5b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5ba0:
    // 0x1b5ba0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b5ba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b5ba4:
    // 0x1b5ba4: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1b5ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1b5ba8:
    // 0x1b5ba8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5bac:
    // 0x1b5bac: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1b5bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b5bb0:
    // 0x1b5bb0: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1b5bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5bb4:
    // 0x1b5bb4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b5bb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b5bb8:
    // 0x1b5bb8: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1b5bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1b5bbc:
    // 0x1b5bbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5bc0:
    // 0x1b5bc0: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1b5bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b5bc4:
    // 0x1b5bc4: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1b5bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5bc8:
    // 0x1b5bc8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b5bc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b5bcc:
    // 0x1b5bcc: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1b5bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1b5bd0:
    // 0x1b5bd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5bd4:
    // 0x1b5bd4: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1b5bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b5bd8:
    // 0x1b5bd8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b5bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5bdc:
    // 0x1b5bdc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b5bdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b5be0:
    // 0x1b5be0: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1b5be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1b5be4:
    // 0x1b5be4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5be8:
    // 0x1b5be8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1b5be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5bec:
    // 0x1b5bec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5bf0:
    // 0x1b5bf0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b5bf4:
    if (ctx->pc == 0x1B5BF4u) {
        ctx->pc = 0x1B5BF4u;
            // 0x1b5bf4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1B5BF8u;
        goto label_1b5bf8;
    }
    ctx->pc = 0x1B5BF0u;
    {
        const bool branch_taken_0x1b5bf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5BF0u;
            // 0x1b5bf4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5bf0) {
            ctx->pc = 0x1B5C10u;
            goto label_1b5c10;
        }
    }
    ctx->pc = 0x1B5BF8u;
label_1b5bf8:
    // 0x1b5bf8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b5bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b5bfc:
    // 0x1b5bfc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5bfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5c00:
    // 0x1b5c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5c04:
    // 0x1b5c04: 0x0  nop
    ctx->pc = 0x1b5c04u;
    // NOP
label_1b5c08:
    // 0x1b5c08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b5c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b5c0c:
    // 0x1b5c0c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b5c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b5c10:
    // 0x1b5c10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b5c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5c14:
    // 0x1b5c14: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b5c18:
    // 0x1b5c18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5c18u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5c1c:
    // 0x1b5c1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5c20:
    // 0x1b5c20: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1b5c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5c24:
    // 0x1b5c24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5c24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5c28:
    // 0x1b5c28: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b5c2c:
    if (ctx->pc == 0x1B5C2Cu) {
        ctx->pc = 0x1B5C2Cu;
            // 0x1b5c2c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1B5C30u;
        goto label_1b5c30;
    }
    ctx->pc = 0x1B5C28u;
    {
        const bool branch_taken_0x1b5c28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C28u;
            // 0x1b5c2c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c28) {
            ctx->pc = 0x1B5C48u;
            goto label_1b5c48;
        }
    }
    ctx->pc = 0x1B5C30u;
label_1b5c30:
    // 0x1b5c30: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b5c34:
    // 0x1b5c34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5c34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5c38:
    // 0x1b5c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5c3c:
    // 0x1b5c3c: 0x0  nop
    ctx->pc = 0x1b5c3cu;
    // NOP
label_1b5c40:
    // 0x1b5c40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b5c40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b5c44:
    // 0x1b5c44: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b5c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b5c48:
    // 0x1b5c48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5c4c:
    // 0x1b5c4c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b5c50:
    // 0x1b5c50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5c50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5c54:
    // 0x1b5c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5c58:
    // 0x1b5c58: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1b5c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5c5c:
    // 0x1b5c5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5c60:
    // 0x1b5c60: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b5c64:
    if (ctx->pc == 0x1B5C64u) {
        ctx->pc = 0x1B5C64u;
            // 0x1b5c64: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1B5C68u;
        goto label_1b5c68;
    }
    ctx->pc = 0x1B5C60u;
    {
        const bool branch_taken_0x1b5c60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C60u;
            // 0x1b5c64: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c60) {
            ctx->pc = 0x1B5C80u;
            goto label_1b5c80;
        }
    }
    ctx->pc = 0x1B5C68u;
label_1b5c68:
    // 0x1b5c68: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b5c6c:
    // 0x1b5c6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5c6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5c70:
    // 0x1b5c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5c74:
    // 0x1b5c74: 0x0  nop
    ctx->pc = 0x1b5c74u;
    // NOP
label_1b5c78:
    // 0x1b5c78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b5c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b5c7c:
    // 0x1b5c7c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b5c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b5c80:
    // 0x1b5c80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b5c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5c84:
    // 0x1b5c84: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b5c88:
    // 0x1b5c88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5c88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5c8c:
    // 0x1b5c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5c90:
    // 0x1b5c90: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1b5c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5c94:
    // 0x1b5c94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5c94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5c98:
    // 0x1b5c98: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b5c9c:
    if (ctx->pc == 0x1B5C9Cu) {
        ctx->pc = 0x1B5C9Cu;
            // 0x1b5c9c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1B5CA0u;
        goto label_1b5ca0;
    }
    ctx->pc = 0x1B5C98u;
    {
        const bool branch_taken_0x1b5c98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C98u;
            // 0x1b5c9c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c98) {
            ctx->pc = 0x1B5CB8u;
            goto label_1b5cb8;
        }
    }
    ctx->pc = 0x1B5CA0u;
label_1b5ca0:
    // 0x1b5ca0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b5ca4:
    // 0x1b5ca4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5ca4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5ca8:
    // 0x1b5ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5cac:
    // 0x1b5cac: 0x0  nop
    ctx->pc = 0x1b5cacu;
    // NOP
label_1b5cb0:
    // 0x1b5cb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b5cb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b5cb4:
    // 0x1b5cb4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b5cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b5cb8:
    // 0x1b5cb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5cbc:
    // 0x1b5cbc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b5cc0:
    // 0x1b5cc0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5cc0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5cc4:
    // 0x1b5cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5cc8:
    // 0x1b5cc8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1b5cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5ccc:
    // 0x1b5ccc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5cd0:
    // 0x1b5cd0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b5cd4:
    if (ctx->pc == 0x1B5CD4u) {
        ctx->pc = 0x1B5CD4u;
            // 0x1b5cd4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1B5CD8u;
        goto label_1b5cd8;
    }
    ctx->pc = 0x1B5CD0u;
    {
        const bool branch_taken_0x1b5cd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CD0u;
            // 0x1b5cd4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5cd0) {
            ctx->pc = 0x1B5CF0u;
            goto label_1b5cf0;
        }
    }
    ctx->pc = 0x1B5CD8u;
label_1b5cd8:
    // 0x1b5cd8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b5cdc:
    // 0x1b5cdc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5cdcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5ce0:
    // 0x1b5ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5ce4:
    // 0x1b5ce4: 0x0  nop
    ctx->pc = 0x1b5ce4u;
    // NOP
label_1b5ce8:
    // 0x1b5ce8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b5ce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b5cec:
    // 0x1b5cec: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b5cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b5cf0:
    // 0x1b5cf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5cf4:
    // 0x1b5cf4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b5cf8:
    // 0x1b5cf8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5cf8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5cfc:
    // 0x1b5cfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5d00:
    // 0x1b5d00: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1b5d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5d04:
    // 0x1b5d04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5d08:
    // 0x1b5d08: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b5d0c:
    if (ctx->pc == 0x1B5D0Cu) {
        ctx->pc = 0x1B5D0Cu;
            // 0x1b5d0c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1B5D10u;
        goto label_1b5d10;
    }
    ctx->pc = 0x1B5D08u;
    {
        const bool branch_taken_0x1b5d08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D08u;
            // 0x1b5d0c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d08) {
            ctx->pc = 0x1B5D28u;
            goto label_1b5d28;
        }
    }
    ctx->pc = 0x1B5D10u;
label_1b5d10:
    // 0x1b5d10: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b5d14:
    // 0x1b5d14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5d14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b5d18:
    // 0x1b5d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5d1c:
    // 0x1b5d1c: 0x0  nop
    ctx->pc = 0x1b5d1cu;
    // NOP
label_1b5d20:
    // 0x1b5d20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b5d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b5d24:
    // 0x1b5d24: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b5d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b5d28:
    // 0x1b5d28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5d2c:
    // 0x1b5d2c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1b5d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1b5d30:
    // 0x1b5d30: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1b5d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5d34:
    // 0x1b5d34: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1b5d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b5d38:
    // 0x1b5d38: 0xc06dc4c  jal         func_1B7130
label_1b5d3c:
    if (ctx->pc == 0x1B5D3Cu) {
        ctx->pc = 0x1B5D3Cu;
            // 0x1b5d3c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x1B5D40u;
        goto label_1b5d40;
    }
    ctx->pc = 0x1B5D38u;
    SET_GPR_U32(ctx, 31, 0x1B5D40u);
    ctx->pc = 0x1B5D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D38u;
            // 0x1b5d3c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7130u;
    if (runtime->hasFunction(0x1B7130u)) {
        auto targetFn = runtime->lookupFunction(0x1B7130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D40u; }
        if (ctx->pc != 0x1B5D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1b7130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D40u; }
        if (ctx->pc != 0x1B5D40u) { return; }
    }
    ctx->pc = 0x1B5D40u;
label_1b5d40:
    // 0x1b5d40: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1b5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b5d44:
    // 0x1b5d44: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1b5d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1b5d48:
    // 0x1b5d48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b5d4c:
    // 0x1b5d4c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1b5d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1b5d50:
    // 0x1b5d50: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5d54:
    // 0x1b5d54: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1b5d58:
    if (ctx->pc == 0x1B5D58u) {
        ctx->pc = 0x1B5D5Cu;
        goto label_1b5d5c;
    }
    ctx->pc = 0x1B5D54u;
    {
        const bool branch_taken_0x1b5d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5d54) {
            ctx->pc = 0x1B5DC8u;
            goto label_1b5dc8;
        }
    }
    ctx->pc = 0x1B5D5Cu;
label_1b5d5c:
    // 0x1b5d5c: 0xc050bb4  jal         func_142ED0
label_1b5d60:
    if (ctx->pc == 0x1B5D60u) {
        ctx->pc = 0x1B5D64u;
        goto label_1b5d64;
    }
    ctx->pc = 0x1B5D5Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D64u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D64u; }
        if (ctx->pc != 0x1B5D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D64u; }
        if (ctx->pc != 0x1B5D64u) { return; }
    }
    ctx->pc = 0x1B5D64u;
label_1b5d64:
    // 0x1b5d64: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b5d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b5d68:
    // 0x1b5d68: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1b5d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b5d6c:
    // 0x1b5d6c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b5d6cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b5d70:
    // 0x1b5d70: 0x0  nop
    ctx->pc = 0x1b5d70u;
    // NOP
label_1b5d74:
    // 0x1b5d74: 0x0  nop
    ctx->pc = 0x1b5d74u;
    // NOP
label_1b5d78:
    // 0x1b5d78: 0x1010  mfhi        $v0
    ctx->pc = 0x1b5d78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b5d7c:
    // 0x1b5d7c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b5d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b5d80:
    // 0x1b5d80: 0xc050bb4  jal         func_142ED0
label_1b5d84:
    if (ctx->pc == 0x1B5D84u) {
        ctx->pc = 0x1B5D84u;
            // 0x1b5d84: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1B5D88u;
        goto label_1b5d88;
    }
    ctx->pc = 0x1B5D80u;
    SET_GPR_U32(ctx, 31, 0x1B5D88u);
    ctx->pc = 0x1B5D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D80u;
            // 0x1b5d84: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D88u; }
        if (ctx->pc != 0x1B5D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D88u; }
        if (ctx->pc != 0x1B5D88u) { return; }
    }
    ctx->pc = 0x1B5D88u;
label_1b5d88:
    // 0x1b5d88: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b5d8c:
    // 0x1b5d8c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1b5d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b5d90:
    // 0x1b5d90: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b5d90u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b5d94:
    // 0x1b5d94: 0x0  nop
    ctx->pc = 0x1b5d94u;
    // NOP
label_1b5d98:
    // 0x1b5d98: 0x0  nop
    ctx->pc = 0x1b5d98u;
    // NOP
label_1b5d9c:
    // 0x1b5d9c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b5d9cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b5da0:
    // 0x1b5da0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b5da4:
    // 0x1b5da4: 0xc050bb4  jal         func_142ED0
label_1b5da8:
    if (ctx->pc == 0x1B5DA8u) {
        ctx->pc = 0x1B5DA8u;
            // 0x1b5da8: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x1B5DACu;
        goto label_1b5dac;
    }
    ctx->pc = 0x1B5DA4u;
    SET_GPR_U32(ctx, 31, 0x1B5DACu);
    ctx->pc = 0x1B5DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DA4u;
            // 0x1b5da8: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5DACu; }
        if (ctx->pc != 0x1B5DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5DACu; }
        if (ctx->pc != 0x1B5DACu) { return; }
    }
    ctx->pc = 0x1B5DACu;
label_1b5dac:
    // 0x1b5dac: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1b5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b5db0:
    // 0x1b5db0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b5db0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b5db4:
    // 0x1b5db4: 0x0  nop
    ctx->pc = 0x1b5db4u;
    // NOP
label_1b5db8:
    // 0x1b5db8: 0x0  nop
    ctx->pc = 0x1b5db8u;
    // NOP
label_1b5dbc:
    // 0x1b5dbc: 0x1010  mfhi        $v0
    ctx->pc = 0x1b5dbcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b5dc0:
    // 0x1b5dc0: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x1b5dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_1b5dc4:
    // 0x1b5dc4: 0x0  nop
    ctx->pc = 0x1b5dc4u;
    // NOP
label_1b5dc8:
    // 0x1b5dc8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b5dcc:
    // 0x1b5dcc: 0x18400322  blez        $v0, . + 4 + (0x322 << 2)
label_1b5dd0:
    if (ctx->pc == 0x1B5DD0u) {
        ctx->pc = 0x1B5DD4u;
        goto label_1b5dd4;
    }
    ctx->pc = 0x1B5DCCu;
    {
        const bool branch_taken_0x1b5dcc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b5dcc) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B5DD4u;
label_1b5dd4:
    // 0x1b5dd4: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1b5dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b5dd8:
    // 0x1b5dd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b5dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b5ddc:
    // 0x1b5ddc: 0x10c301f2  beq         $a2, $v1, . + 4 + (0x1F2 << 2)
label_1b5de0:
    if (ctx->pc == 0x1B5DE0u) {
        ctx->pc = 0x1B5DE0u;
            // 0x1b5de0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B5DE4u;
        goto label_1b5de4;
    }
    ctx->pc = 0x1B5DDCu;
    {
        const bool branch_taken_0x1b5ddc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B5DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DDCu;
            // 0x1b5de0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ddc) {
            ctx->pc = 0x1B65A8u;
            goto label_1b65a8;
        }
    }
    ctx->pc = 0x1B5DE4u;
label_1b5de4:
    // 0x1b5de4: 0x10c200c4  beq         $a2, $v0, . + 4 + (0xC4 << 2)
label_1b5de8:
    if (ctx->pc == 0x1B5DE8u) {
        ctx->pc = 0x1B5DECu;
        goto label_1b5dec;
    }
    ctx->pc = 0x1B5DE4u;
    {
        const bool branch_taken_0x1b5de4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5de4) {
            ctx->pc = 0x1B60F8u;
            goto label_1b60f8;
        }
    }
    ctx->pc = 0x1B5DECu;
label_1b5dec:
    // 0x1b5dec: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1b5df0:
    if (ctx->pc == 0x1B5DF0u) {
        ctx->pc = 0x1B5DF4u;
        goto label_1b5df4;
    }
    ctx->pc = 0x1B5DECu;
    {
        const bool branch_taken_0x1b5dec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5dec) {
            ctx->pc = 0x1B5E00u;
            goto label_1b5e00;
        }
    }
    ctx->pc = 0x1B5DF4u;
label_1b5df4:
    // 0x1b5df4: 0x10000318  b           . + 4 + (0x318 << 2)
label_1b5df8:
    if (ctx->pc == 0x1B5DF8u) {
        ctx->pc = 0x1B5DFCu;
        goto label_1b5dfc;
    }
    ctx->pc = 0x1B5DF4u;
    {
        const bool branch_taken_0x1b5df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5df4) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B5DFCu;
label_1b5dfc:
    // 0x1b5dfc: 0x0  nop
    ctx->pc = 0x1b5dfcu;
    // NOP
label_1b5e00:
    // 0x1b5e00: 0x8e06010c  lw          $a2, 0x10C($s0)
    ctx->pc = 0x1b5e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1b5e04:
    // 0x1b5e04: 0x14c00022  bnez        $a2, . + 4 + (0x22 << 2)
label_1b5e08:
    if (ctx->pc == 0x1B5E08u) {
        ctx->pc = 0x1B5E0Cu;
        goto label_1b5e0c;
    }
    ctx->pc = 0x1B5E04u;
    {
        const bool branch_taken_0x1b5e04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e04) {
            ctx->pc = 0x1B5E90u;
            goto label_1b5e90;
        }
    }
    ctx->pc = 0x1B5E0Cu;
label_1b5e0c:
    // 0x1b5e0c: 0xc040d72  jal         func_1035C8
label_1b5e10:
    if (ctx->pc == 0x1B5E10u) {
        ctx->pc = 0x1B5E10u;
            // 0x1b5e10: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B5E14u;
        goto label_1b5e14;
    }
    ctx->pc = 0x1B5E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B5E14u);
    ctx->pc = 0x1B5E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E0Cu;
            // 0x1b5e10: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E14u; }
        if (ctx->pc != 0x1B5E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E14u; }
        if (ctx->pc != 0x1B5E14u) { return; }
    }
    ctx->pc = 0x1B5E14u;
label_1b5e14:
    // 0x1b5e14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b5e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5e18:
    // 0x1b5e18: 0xc040078  jal         func_1001E0
label_1b5e1c:
    if (ctx->pc == 0x1B5E1Cu) {
        ctx->pc = 0x1B5E1Cu;
            // 0x1b5e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E20u;
        goto label_1b5e20;
    }
    ctx->pc = 0x1B5E18u;
    SET_GPR_U32(ctx, 31, 0x1B5E20u);
    ctx->pc = 0x1B5E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E18u;
            // 0x1b5e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E20u; }
        if (ctx->pc != 0x1B5E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E20u; }
        if (ctx->pc != 0x1B5E20u) { return; }
    }
    ctx->pc = 0x1B5E20u;
label_1b5e20:
    // 0x1b5e20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1b5e24:
    if (ctx->pc == 0x1B5E24u) {
        ctx->pc = 0x1B5E28u;
        goto label_1b5e28;
    }
    ctx->pc = 0x1B5E20u;
    {
        const bool branch_taken_0x1b5e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e20) {
            ctx->pc = 0x1B5E48u;
            goto label_1b5e48;
        }
    }
    ctx->pc = 0x1B5E28u;
label_1b5e28:
    // 0x1b5e28: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b5e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5e2c:
    // 0x1b5e2c: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1b5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1b5e30:
    // 0x1b5e30: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1b5e30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1b5e34:
    // 0x1b5e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5e38:
    // 0x1b5e38: 0x0  nop
    ctx->pc = 0x1b5e38u;
    // NOP
label_1b5e3c:
    // 0x1b5e3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b5e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b5e40:
    // 0x1b5e40: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b5e44:
    if (ctx->pc == 0x1B5E44u) {
        ctx->pc = 0x1B5E44u;
            // 0x1b5e44: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1B5E48u;
        goto label_1b5e48;
    }
    ctx->pc = 0x1B5E40u;
    {
        const bool branch_taken_0x1b5e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E40u;
            // 0x1b5e44: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e40) {
            ctx->pc = 0x1B5E58u;
            goto label_1b5e58;
        }
    }
    ctx->pc = 0x1B5E48u;
label_1b5e48:
    // 0x1b5e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5e4c:
    // 0x1b5e4c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b5e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b5e50:
    // 0x1b5e50: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1b5e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1b5e54:
    // 0x1b5e54: 0x0  nop
    ctx->pc = 0x1b5e54u;
    // NOP
label_1b5e58:
    // 0x1b5e58: 0xc065d00  jal         func_197400
label_1b5e5c:
    if (ctx->pc == 0x1B5E5Cu) {
        ctx->pc = 0x1B5E60u;
        goto label_1b5e60;
    }
    ctx->pc = 0x1B5E58u;
    SET_GPR_U32(ctx, 31, 0x1B5E60u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E60u; }
        if (ctx->pc != 0x1B5E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E60u; }
        if (ctx->pc != 0x1B5E60u) { return; }
    }
    ctx->pc = 0x1B5E60u;
label_1b5e60:
    // 0x1b5e60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b5e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b5e64:
    // 0x1b5e64: 0x144302fc  bne         $v0, $v1, . + 4 + (0x2FC << 2)
label_1b5e68:
    if (ctx->pc == 0x1B5E68u) {
        ctx->pc = 0x1B5E6Cu;
        goto label_1b5e6c;
    }
    ctx->pc = 0x1B5E64u;
    {
        const bool branch_taken_0x1b5e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b5e64) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B5E6Cu;
label_1b5e6c:
    // 0x1b5e6c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5e70:
    // 0x1b5e70: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b5e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b5e74:
    // 0x1b5e74: 0x146202f8  bne         $v1, $v0, . + 4 + (0x2F8 << 2)
label_1b5e78:
    if (ctx->pc == 0x1B5E78u) {
        ctx->pc = 0x1B5E7Cu;
        goto label_1b5e7c;
    }
    ctx->pc = 0x1B5E74u;
    {
        const bool branch_taken_0x1b5e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5e74) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B5E7Cu;
label_1b5e7c:
    // 0x1b5e7c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b5e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b5e80:
    // 0x1b5e80: 0xc06560c  jal         func_195830
label_1b5e84:
    if (ctx->pc == 0x1B5E84u) {
        ctx->pc = 0x1B5E84u;
            // 0x1b5e84: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B5E88u;
        goto label_1b5e88;
    }
    ctx->pc = 0x1B5E80u;
    SET_GPR_U32(ctx, 31, 0x1B5E88u);
    ctx->pc = 0x1B5E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E80u;
            // 0x1b5e84: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E88u; }
        if (ctx->pc != 0x1B5E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E88u; }
        if (ctx->pc != 0x1B5E88u) { return; }
    }
    ctx->pc = 0x1B5E88u;
label_1b5e88:
    // 0x1b5e88: 0x100002f3  b           . + 4 + (0x2F3 << 2)
label_1b5e8c:
    if (ctx->pc == 0x1B5E8Cu) {
        ctx->pc = 0x1B5E90u;
        goto label_1b5e90;
    }
    ctx->pc = 0x1B5E88u;
    {
        const bool branch_taken_0x1b5e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e88) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B5E90u;
label_1b5e90:
    // 0x1b5e90: 0x14c20075  bne         $a2, $v0, . + 4 + (0x75 << 2)
label_1b5e94:
    if (ctx->pc == 0x1B5E94u) {
        ctx->pc = 0x1B5E98u;
        goto label_1b5e98;
    }
    ctx->pc = 0x1B5E90u;
    {
        const bool branch_taken_0x1b5e90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5e90) {
            ctx->pc = 0x1B6068u;
            goto label_1b6068;
        }
    }
    ctx->pc = 0x1B5E98u;
label_1b5e98:
    // 0x1b5e98: 0xc065d00  jal         func_197400
label_1b5e9c:
    if (ctx->pc == 0x1B5E9Cu) {
        ctx->pc = 0x1B5EA0u;
        goto label_1b5ea0;
    }
    ctx->pc = 0x1B5E98u;
    SET_GPR_U32(ctx, 31, 0x1B5EA0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5EA0u; }
        if (ctx->pc != 0x1B5EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5EA0u; }
        if (ctx->pc != 0x1B5EA0u) { return; }
    }
    ctx->pc = 0x1B5EA0u;
label_1b5ea0:
    // 0x1b5ea0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b5ea0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b5ea4:
    // 0x1b5ea4: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
label_1b5ea8:
    if (ctx->pc == 0x1B5EA8u) {
        ctx->pc = 0x1B5EACu;
        goto label_1b5eac;
    }
    ctx->pc = 0x1B5EA4u;
    {
        const bool branch_taken_0x1b5ea4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ea4) {
            ctx->pc = 0x1B5F40u;
            goto label_1b5f40;
        }
    }
    ctx->pc = 0x1B5EACu;
label_1b5eac:
    // 0x1b5eac: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b5eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5eb0:
    // 0x1b5eb0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b5eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b5eb4:
    // 0x1b5eb4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b5eb4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b5eb8:
    // 0x1b5eb8: 0x0  nop
    ctx->pc = 0x1b5eb8u;
    // NOP
label_1b5ebc:
    // 0x1b5ebc: 0x0  nop
    ctx->pc = 0x1b5ebcu;
    // NOP
label_1b5ec0:
    // 0x1b5ec0: 0x1010  mfhi        $v0
    ctx->pc = 0x1b5ec0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b5ec4:
    // 0x1b5ec4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b5ec8:
    if (ctx->pc == 0x1B5EC8u) {
        ctx->pc = 0x1B5ECCu;
        goto label_1b5ecc;
    }
    ctx->pc = 0x1B5EC4u;
    {
        const bool branch_taken_0x1b5ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ec4) {
            ctx->pc = 0x1B5ED8u;
            goto label_1b5ed8;
        }
    }
    ctx->pc = 0x1B5ECCu;
label_1b5ecc:
    // 0x1b5ecc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b5eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b5ed0:
    // 0x1b5ed0: 0xc06560c  jal         func_195830
label_1b5ed4:
    if (ctx->pc == 0x1B5ED4u) {
        ctx->pc = 0x1B5ED4u;
            // 0x1b5ed4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B5ED8u;
        goto label_1b5ed8;
    }
    ctx->pc = 0x1B5ED0u;
    SET_GPR_U32(ctx, 31, 0x1B5ED8u);
    ctx->pc = 0x1B5ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5ED0u;
            // 0x1b5ed4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5ED8u; }
        if (ctx->pc != 0x1B5ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5ED8u; }
        if (ctx->pc != 0x1B5ED8u) { return; }
    }
    ctx->pc = 0x1B5ED8u;
label_1b5ed8:
    // 0x1b5ed8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b5ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5edc:
    // 0x1b5edc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b5ee0:
    // 0x1b5ee0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b5ee0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b5ee4:
    // 0x1b5ee4: 0x0  nop
    ctx->pc = 0x1b5ee4u;
    // NOP
label_1b5ee8:
    // 0x1b5ee8: 0x0  nop
    ctx->pc = 0x1b5ee8u;
    // NOP
label_1b5eec:
    // 0x1b5eec: 0x1010  mfhi        $v0
    ctx->pc = 0x1b5eecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b5ef0:
    // 0x1b5ef0: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
label_1b5ef4:
    if (ctx->pc == 0x1B5EF4u) {
        ctx->pc = 0x1B5EF8u;
        goto label_1b5ef8;
    }
    ctx->pc = 0x1B5EF0u;
    {
        const bool branch_taken_0x1b5ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ef0) {
            ctx->pc = 0x1B6048u;
            goto label_1b6048;
        }
    }
    ctx->pc = 0x1B5EF8u;
label_1b5ef8:
    // 0x1b5ef8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b5ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5efc:
    // 0x1b5efc: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1b5efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1b5f00:
    // 0x1b5f00: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b5f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5f04:
    // 0x1b5f04: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b5f04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b5f08:
    // 0x1b5f08: 0xc05d080  jal         func_174200
label_1b5f0c:
    if (ctx->pc == 0x1B5F0Cu) {
        ctx->pc = 0x1B5F0Cu;
            // 0x1b5f0c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B5F10u;
        goto label_1b5f10;
    }
    ctx->pc = 0x1B5F08u;
    SET_GPR_U32(ctx, 31, 0x1B5F10u);
    ctx->pc = 0x1B5F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F08u;
            // 0x1b5f0c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F10u; }
        if (ctx->pc != 0x1B5F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F10u; }
        if (ctx->pc != 0x1B5F10u) { return; }
    }
    ctx->pc = 0x1B5F10u;
label_1b5f10:
    // 0x1b5f10: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b5f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b5f14:
    // 0x1b5f14: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1b5f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5f18:
    // 0x1b5f18: 0xc065508  jal         func_195420
label_1b5f1c:
    if (ctx->pc == 0x1B5F1Cu) {
        ctx->pc = 0x1B5F1Cu;
            // 0x1b5f1c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B5F20u;
        goto label_1b5f20;
    }
    ctx->pc = 0x1B5F18u;
    SET_GPR_U32(ctx, 31, 0x1B5F20u);
    ctx->pc = 0x1B5F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F18u;
            // 0x1b5f1c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F20u; }
        if (ctx->pc != 0x1B5F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F20u; }
        if (ctx->pc != 0x1B5F20u) { return; }
    }
    ctx->pc = 0x1B5F20u;
label_1b5f20:
    // 0x1b5f20: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5f24:
    // 0x1b5f24: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b5f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b5f28:
    // 0x1b5f28: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b5f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b5f2c:
    // 0x1b5f2c: 0xc065508  jal         func_195420
label_1b5f30:
    if (ctx->pc == 0x1B5F30u) {
        ctx->pc = 0x1B5F30u;
            // 0x1b5f30: 0x23023  negu        $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B5F34u;
        goto label_1b5f34;
    }
    ctx->pc = 0x1B5F2Cu;
    SET_GPR_U32(ctx, 31, 0x1B5F34u);
    ctx->pc = 0x1B5F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F2Cu;
            // 0x1b5f30: 0x23023  negu        $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F34u; }
        if (ctx->pc != 0x1B5F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F34u; }
        if (ctx->pc != 0x1B5F34u) { return; }
    }
    ctx->pc = 0x1B5F34u;
label_1b5f34:
    // 0x1b5f34: 0x10000044  b           . + 4 + (0x44 << 2)
label_1b5f38:
    if (ctx->pc == 0x1B5F38u) {
        ctx->pc = 0x1B5F3Cu;
        goto label_1b5f3c;
    }
    ctx->pc = 0x1B5F34u;
    {
        const bool branch_taken_0x1b5f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f34) {
            ctx->pc = 0x1B6048u;
            goto label_1b6048;
        }
    }
    ctx->pc = 0x1B5F3Cu;
label_1b5f3c:
    // 0x1b5f3c: 0x0  nop
    ctx->pc = 0x1b5f3cu;
    // NOP
label_1b5f40:
    // 0x1b5f40: 0xc065d00  jal         func_197400
label_1b5f44:
    if (ctx->pc == 0x1B5F44u) {
        ctx->pc = 0x1B5F48u;
        goto label_1b5f48;
    }
    ctx->pc = 0x1B5F40u;
    SET_GPR_U32(ctx, 31, 0x1B5F48u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F48u; }
        if (ctx->pc != 0x1B5F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F48u; }
        if (ctx->pc != 0x1B5F48u) { return; }
    }
    ctx->pc = 0x1B5F48u;
label_1b5f48:
    // 0x1b5f48: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
label_1b5f4c:
    if (ctx->pc == 0x1B5F4Cu) {
        ctx->pc = 0x1B5F50u;
        goto label_1b5f50;
    }
    ctx->pc = 0x1B5F48u;
    {
        const bool branch_taken_0x1b5f48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b5f48) {
            ctx->pc = 0x1B5FE8u;
            goto label_1b5fe8;
        }
    }
    ctx->pc = 0x1B5F50u;
label_1b5f50:
    // 0x1b5f50: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b5f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5f54:
    // 0x1b5f54: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1b5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1b5f58:
    // 0x1b5f58: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b5f58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b5f5c:
    // 0x1b5f5c: 0x0  nop
    ctx->pc = 0x1b5f5cu;
    // NOP
label_1b5f60:
    // 0x1b5f60: 0x0  nop
    ctx->pc = 0x1b5f60u;
    // NOP
label_1b5f64:
    // 0x1b5f64: 0x1010  mfhi        $v0
    ctx->pc = 0x1b5f64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b5f68:
    // 0x1b5f68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b5f6c:
    if (ctx->pc == 0x1B5F6Cu) {
        ctx->pc = 0x1B5F70u;
        goto label_1b5f70;
    }
    ctx->pc = 0x1B5F68u;
    {
        const bool branch_taken_0x1b5f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f68) {
            ctx->pc = 0x1B5F80u;
            goto label_1b5f80;
        }
    }
    ctx->pc = 0x1B5F70u;
label_1b5f70:
    // 0x1b5f70: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b5f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b5f74:
    // 0x1b5f74: 0xc06560c  jal         func_195830
label_1b5f78:
    if (ctx->pc == 0x1B5F78u) {
        ctx->pc = 0x1B5F78u;
            // 0x1b5f78: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B5F7Cu;
        goto label_1b5f7c;
    }
    ctx->pc = 0x1B5F74u;
    SET_GPR_U32(ctx, 31, 0x1B5F7Cu);
    ctx->pc = 0x1B5F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F74u;
            // 0x1b5f78: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F7Cu; }
        if (ctx->pc != 0x1B5F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F7Cu; }
        if (ctx->pc != 0x1B5F7Cu) { return; }
    }
    ctx->pc = 0x1B5F7Cu;
label_1b5f7c:
    // 0x1b5f7c: 0x0  nop
    ctx->pc = 0x1b5f7cu;
    // NOP
label_1b5f80:
    // 0x1b5f80: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b5f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5f84:
    // 0x1b5f84: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b5f88:
    // 0x1b5f88: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b5f88u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b5f8c:
    // 0x1b5f8c: 0x0  nop
    ctx->pc = 0x1b5f8cu;
    // NOP
label_1b5f90:
    // 0x1b5f90: 0x0  nop
    ctx->pc = 0x1b5f90u;
    // NOP
label_1b5f94:
    // 0x1b5f94: 0x1010  mfhi        $v0
    ctx->pc = 0x1b5f94u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b5f98:
    // 0x1b5f98: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_1b5f9c:
    if (ctx->pc == 0x1B5F9Cu) {
        ctx->pc = 0x1B5FA0u;
        goto label_1b5fa0;
    }
    ctx->pc = 0x1B5F98u;
    {
        const bool branch_taken_0x1b5f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f98) {
            ctx->pc = 0x1B6048u;
            goto label_1b6048;
        }
    }
    ctx->pc = 0x1B5FA0u;
label_1b5fa0:
    // 0x1b5fa0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b5fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5fa4:
    // 0x1b5fa4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1b5fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1b5fa8:
    // 0x1b5fa8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b5fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5fac:
    // 0x1b5fac: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b5facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b5fb0:
    // 0x1b5fb0: 0xc05d080  jal         func_174200
label_1b5fb4:
    if (ctx->pc == 0x1B5FB4u) {
        ctx->pc = 0x1B5FB4u;
            // 0x1b5fb4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B5FB8u;
        goto label_1b5fb8;
    }
    ctx->pc = 0x1B5FB0u;
    SET_GPR_U32(ctx, 31, 0x1B5FB8u);
    ctx->pc = 0x1B5FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5FB0u;
            // 0x1b5fb4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FB8u; }
        if (ctx->pc != 0x1B5FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FB8u; }
        if (ctx->pc != 0x1B5FB8u) { return; }
    }
    ctx->pc = 0x1B5FB8u;
label_1b5fb8:
    // 0x1b5fb8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b5fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b5fbc:
    // 0x1b5fbc: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1b5fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5fc0:
    // 0x1b5fc0: 0xc065508  jal         func_195420
label_1b5fc4:
    if (ctx->pc == 0x1B5FC4u) {
        ctx->pc = 0x1B5FC4u;
            // 0x1b5fc4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B5FC8u;
        goto label_1b5fc8;
    }
    ctx->pc = 0x1B5FC0u;
    SET_GPR_U32(ctx, 31, 0x1B5FC8u);
    ctx->pc = 0x1B5FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5FC0u;
            // 0x1b5fc4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FC8u; }
        if (ctx->pc != 0x1B5FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FC8u; }
        if (ctx->pc != 0x1B5FC8u) { return; }
    }
    ctx->pc = 0x1B5FC8u;
label_1b5fc8:
    // 0x1b5fc8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5fcc:
    // 0x1b5fcc: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b5fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b5fd0:
    // 0x1b5fd0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b5fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b5fd4:
    // 0x1b5fd4: 0xc065508  jal         func_195420
label_1b5fd8:
    if (ctx->pc == 0x1B5FD8u) {
        ctx->pc = 0x1B5FD8u;
            // 0x1b5fd8: 0x23023  negu        $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B5FDCu;
        goto label_1b5fdc;
    }
    ctx->pc = 0x1B5FD4u;
    SET_GPR_U32(ctx, 31, 0x1B5FDCu);
    ctx->pc = 0x1B5FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5FD4u;
            // 0x1b5fd8: 0x23023  negu        $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FDCu; }
        if (ctx->pc != 0x1B5FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FDCu; }
        if (ctx->pc != 0x1B5FDCu) { return; }
    }
    ctx->pc = 0x1B5FDCu;
label_1b5fdc:
    // 0x1b5fdc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1b5fe0:
    if (ctx->pc == 0x1B5FE0u) {
        ctx->pc = 0x1B5FE4u;
        goto label_1b5fe4;
    }
    ctx->pc = 0x1B5FDCu;
    {
        const bool branch_taken_0x1b5fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5fdc) {
            ctx->pc = 0x1B6048u;
            goto label_1b6048;
        }
    }
    ctx->pc = 0x1B5FE4u;
label_1b5fe4:
    // 0x1b5fe4: 0x0  nop
    ctx->pc = 0x1b5fe4u;
    // NOP
label_1b5fe8:
    // 0x1b5fe8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b5fec:
    // 0x1b5fec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b5ff0:
    // 0x1b5ff0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b5ff0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b5ff4:
    // 0x1b5ff4: 0x0  nop
    ctx->pc = 0x1b5ff4u;
    // NOP
label_1b5ff8:
    // 0x1b5ff8: 0x0  nop
    ctx->pc = 0x1b5ff8u;
    // NOP
label_1b5ffc:
    // 0x1b5ffc: 0x1010  mfhi        $v0
    ctx->pc = 0x1b5ffcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6000:
    // 0x1b6000: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1b6004:
    if (ctx->pc == 0x1B6004u) {
        ctx->pc = 0x1B6008u;
        goto label_1b6008;
    }
    ctx->pc = 0x1B6000u;
    {
        const bool branch_taken_0x1b6000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6000) {
            ctx->pc = 0x1B6048u;
            goto label_1b6048;
        }
    }
    ctx->pc = 0x1B6008u;
label_1b6008:
    // 0x1b6008: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b6008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b600c:
    // 0x1b600c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1b600cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1b6010:
    // 0x1b6010: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b6010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6014:
    // 0x1b6014: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b6014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b6018:
    // 0x1b6018: 0xc05d080  jal         func_174200
label_1b601c:
    if (ctx->pc == 0x1B601Cu) {
        ctx->pc = 0x1B601Cu;
            // 0x1b601c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B6020u;
        goto label_1b6020;
    }
    ctx->pc = 0x1B6018u;
    SET_GPR_U32(ctx, 31, 0x1B6020u);
    ctx->pc = 0x1B601Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6018u;
            // 0x1b601c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6020u; }
        if (ctx->pc != 0x1B6020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6020u; }
        if (ctx->pc != 0x1B6020u) { return; }
    }
    ctx->pc = 0x1B6020u;
label_1b6020:
    // 0x1b6020: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b6020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6024:
    // 0x1b6024: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1b6024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6028:
    // 0x1b6028: 0xc065508  jal         func_195420
label_1b602c:
    if (ctx->pc == 0x1B602Cu) {
        ctx->pc = 0x1B602Cu;
            // 0x1b602c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B6030u;
        goto label_1b6030;
    }
    ctx->pc = 0x1B6028u;
    SET_GPR_U32(ctx, 31, 0x1B6030u);
    ctx->pc = 0x1B602Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6028u;
            // 0x1b602c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6030u; }
        if (ctx->pc != 0x1B6030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6030u; }
        if (ctx->pc != 0x1B6030u) { return; }
    }
    ctx->pc = 0x1B6030u;
label_1b6030:
    // 0x1b6030: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b6030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6034:
    // 0x1b6034: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b6034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b6038:
    // 0x1b6038: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b6038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b603c:
    // 0x1b603c: 0xc065508  jal         func_195420
label_1b6040:
    if (ctx->pc == 0x1B6040u) {
        ctx->pc = 0x1B6040u;
            // 0x1b6040: 0x23023  negu        $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6044u;
        goto label_1b6044;
    }
    ctx->pc = 0x1B603Cu;
    SET_GPR_U32(ctx, 31, 0x1B6044u);
    ctx->pc = 0x1B6040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B603Cu;
            // 0x1b6040: 0x23023  negu        $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6044u; }
        if (ctx->pc != 0x1B6044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6044u; }
        if (ctx->pc != 0x1B6044u) { return; }
    }
    ctx->pc = 0x1B6044u;
label_1b6044:
    // 0x1b6044: 0x0  nop
    ctx->pc = 0x1b6044u;
    // NOP
label_1b6048:
    // 0x1b6048: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b6048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b604c:
    // 0x1b604c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1b604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1b6050:
    // 0x1b6050: 0x14620281  bne         $v1, $v0, . + 4 + (0x281 << 2)
label_1b6054:
    if (ctx->pc == 0x1B6054u) {
        ctx->pc = 0x1B6054u;
            // 0x1b6054: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B6058u;
        goto label_1b6058;
    }
    ctx->pc = 0x1B6050u;
    {
        const bool branch_taken_0x1b6050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B6054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6050u;
            // 0x1b6054: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6050) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B6058u;
label_1b6058:
    // 0x1b6058: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b6058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b605c:
    // 0x1b605c: 0x1000027e  b           . + 4 + (0x27E << 2)
label_1b6060:
    if (ctx->pc == 0x1B6060u) {
        ctx->pc = 0x1B6060u;
            // 0x1b6060: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1B6064u;
        goto label_1b6064;
    }
    ctx->pc = 0x1B605Cu;
    {
        const bool branch_taken_0x1b605c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B605Cu;
            // 0x1b6060: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b605c) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B6064u;
label_1b6064:
    // 0x1b6064: 0x0  nop
    ctx->pc = 0x1b6064u;
    // NOP
label_1b6068:
    // 0x1b6068: 0x14c3000b  bne         $a2, $v1, . + 4 + (0xB << 2)
label_1b606c:
    if (ctx->pc == 0x1B606Cu) {
        ctx->pc = 0x1B6070u;
        goto label_1b6070;
    }
    ctx->pc = 0x1B6068u;
    {
        const bool branch_taken_0x1b6068 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b6068) {
            ctx->pc = 0x1B6098u;
            goto label_1b6098;
        }
    }
    ctx->pc = 0x1B6070u;
label_1b6070:
    // 0x1b6070: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b6070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6074:
    // 0x1b6074: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1b6074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1b6078:
    // 0x1b6078: 0x14620277  bne         $v1, $v0, . + 4 + (0x277 << 2)
label_1b607c:
    if (ctx->pc == 0x1B607Cu) {
        ctx->pc = 0x1B6080u;
        goto label_1b6080;
    }
    ctx->pc = 0x1B6078u;
    {
        const bool branch_taken_0x1b6078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b6078) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B6080u;
label_1b6080:
    // 0x1b6080: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b6080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6084:
    // 0x1b6084: 0xc065590  jal         func_195640
label_1b6088:
    if (ctx->pc == 0x1B6088u) {
        ctx->pc = 0x1B6088u;
            // 0x1b6088: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B608Cu;
        goto label_1b608c;
    }
    ctx->pc = 0x1B6084u;
    SET_GPR_U32(ctx, 31, 0x1B608Cu);
    ctx->pc = 0x1B6088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6084u;
            // 0x1b6088: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B608Cu; }
        if (ctx->pc != 0x1B608Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B608Cu; }
        if (ctx->pc != 0x1B608Cu) { return; }
    }
    ctx->pc = 0x1B608Cu;
label_1b608c:
    // 0x1b608c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b6090:
    // 0x1b6090: 0x10000271  b           . + 4 + (0x271 << 2)
label_1b6094:
    if (ctx->pc == 0x1B6094u) {
        ctx->pc = 0x1B6094u;
            // 0x1b6094: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1B6098u;
        goto label_1b6098;
    }
    ctx->pc = 0x1B6090u;
    {
        const bool branch_taken_0x1b6090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6090u;
            // 0x1b6094: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6090) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B6098u;
label_1b6098:
    // 0x1b6098: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b6098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b609c:
    // 0x1b609c: 0x14c2026e  bne         $a2, $v0, . + 4 + (0x26E << 2)
label_1b60a0:
    if (ctx->pc == 0x1B60A0u) {
        ctx->pc = 0x1B60A4u;
        goto label_1b60a4;
    }
    ctx->pc = 0x1B609Cu;
    {
        const bool branch_taken_0x1b609c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b609c) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B60A4u;
label_1b60a4:
    // 0x1b60a4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b60a8:
    // 0x1b60a8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1b60ac:
    if (ctx->pc == 0x1B60ACu) {
        ctx->pc = 0x1B60ACu;
            // 0x1b60ac: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->pc = 0x1B60B0u;
        goto label_1b60b0;
    }
    ctx->pc = 0x1B60A8u;
    {
        const bool branch_taken_0x1b60a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B60ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60A8u;
            // 0x1b60ac: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b60a8) {
            ctx->pc = 0x1B60BCu;
            goto label_1b60bc;
        }
    }
    ctx->pc = 0x1B60B0u;
label_1b60b0:
    // 0x1b60b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b60b4:
    if (ctx->pc == 0x1B60B4u) {
        ctx->pc = 0x1B60B8u;
        goto label_1b60b8;
    }
    ctx->pc = 0x1B60B0u;
    {
        const bool branch_taken_0x1b60b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60b0) {
            ctx->pc = 0x1B60BCu;
            goto label_1b60bc;
        }
    }
    ctx->pc = 0x1B60B8u;
label_1b60b8:
    // 0x1b60b8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1b60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1b60bc:
    // 0x1b60bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b60c0:
    if (ctx->pc == 0x1B60C0u) {
        ctx->pc = 0x1B60C4u;
        goto label_1b60c4;
    }
    ctx->pc = 0x1B60BCu;
    {
        const bool branch_taken_0x1b60bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60bc) {
            ctx->pc = 0x1B60D8u;
            goto label_1b60d8;
        }
    }
    ctx->pc = 0x1B60C4u;
label_1b60c4:
    // 0x1b60c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b60c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b60c8:
    // 0x1b60c8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b60cc:
    // 0x1b60cc: 0xc0655a0  jal         func_195680
label_1b60d0:
    if (ctx->pc == 0x1B60D0u) {
        ctx->pc = 0x1B60D0u;
            // 0x1b60d0: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->pc = 0x1B60D4u;
        goto label_1b60d4;
    }
    ctx->pc = 0x1B60CCu;
    SET_GPR_U32(ctx, 31, 0x1B60D4u);
    ctx->pc = 0x1B60D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60CCu;
            // 0x1b60d0: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B60D4u; }
        if (ctx->pc != 0x1B60D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B60D4u; }
        if (ctx->pc != 0x1B60D4u) { return; }
    }
    ctx->pc = 0x1B60D4u;
label_1b60d4:
    // 0x1b60d4: 0x0  nop
    ctx->pc = 0x1b60d4u;
    // NOP
label_1b60d8:
    // 0x1b60d8: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1b60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1b60dc:
    // 0x1b60dc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b60dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b60e0:
    // 0x1b60e0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b60e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b60e4:
    // 0x1b60e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b60e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b60e8:
    // 0x1b60e8: 0x0  nop
    ctx->pc = 0x1b60e8u;
    // NOP
label_1b60ec:
    // 0x1b60ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b60ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b60f0:
    // 0x1b60f0: 0x10000259  b           . + 4 + (0x259 << 2)
label_1b60f4:
    if (ctx->pc == 0x1B60F4u) {
        ctx->pc = 0x1B60F4u;
            // 0x1b60f4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1B60F8u;
        goto label_1b60f8;
    }
    ctx->pc = 0x1B60F0u;
    {
        const bool branch_taken_0x1b60f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B60F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60F0u;
            // 0x1b60f4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b60f0) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B60F8u;
label_1b60f8:
    // 0x1b60f8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b60fc:
    // 0x1b60fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b60fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b6100:
    // 0x1b6100: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b6100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b6104:
    // 0x1b6104: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b6104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1b6108:
    // 0x1b6108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b610c:
    // 0x1b610c: 0x0  nop
    ctx->pc = 0x1b610cu;
    // NOP
label_1b6110:
    // 0x1b6110: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b6110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b6114:
    // 0x1b6114: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b6114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1b6118:
    // 0x1b6118: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1b6118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b611c:
    // 0x1b611c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b611cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1b6120:
    // 0x1b6120: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1b6120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1b6124:
    // 0x1b6124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6128:
    // 0x1b6128: 0x0  nop
    ctx->pc = 0x1b6128u;
    // NOP
label_1b612c:
    // 0x1b612c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b612cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b6130:
    // 0x1b6130: 0xc04b6ee  jal         func_12DBB8
label_1b6134:
    if (ctx->pc == 0x1B6134u) {
        ctx->pc = 0x1B6134u;
            // 0x1b6134: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1B6138u;
        goto label_1b6138;
    }
    ctx->pc = 0x1B6130u;
    SET_GPR_U32(ctx, 31, 0x1B6138u);
    ctx->pc = 0x1B6134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6130u;
            // 0x1b6134: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6138u; }
        if (ctx->pc != 0x1B6138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6138u; }
        if (ctx->pc != 0x1B6138u) { return; }
    }
    ctx->pc = 0x1B6138u;
label_1b6138:
    // 0x1b6138: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1b6138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1b613c:
    // 0x1b613c: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
label_1b6140:
    if (ctx->pc == 0x1B6140u) {
        ctx->pc = 0x1B6144u;
        goto label_1b6144;
    }
    ctx->pc = 0x1B613Cu;
    {
        const bool branch_taken_0x1b613c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b613c) {
            ctx->pc = 0x1B6210u;
            goto label_1b6210;
        }
    }
    ctx->pc = 0x1B6144u;
label_1b6144:
    // 0x1b6144: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b6144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6148:
    // 0x1b6148: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1b6148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1b614c:
    // 0x1b614c: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x1b614cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
label_1b6150:
    // 0x1b6150: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b6150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b6154:
    // 0x1b6154: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1b6154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1b6158:
    // 0x1b6158: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1b6158u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1b615c:
    // 0x1b615c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b615cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b6160:
    // 0x1b6160: 0x0  nop
    ctx->pc = 0x1b6160u;
    // NOP
label_1b6164:
    // 0x1b6164: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b6164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b6168:
    // 0x1b6168: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b6168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b616c:
    // 0x1b616c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6170:
    // 0x1b6170: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b6170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b6174:
    // 0x1b6174: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b6174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b6178:
    // 0x1b6178: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b617c:
    // 0x1b617c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6180:
    // 0x1b6180: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b6180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6184:
    // 0x1b6184: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b6184u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b6188:
    // 0x1b6188: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b618c:
    // 0x1b618c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1b6190:
    if (ctx->pc == 0x1B6190u) {
        ctx->pc = 0x1B6190u;
            // 0x1b6190: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->pc = 0x1B6194u;
        goto label_1b6194;
    }
    ctx->pc = 0x1B618Cu;
    {
        const bool branch_taken_0x1b618c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B618Cu;
            // 0x1b6190: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b618c) {
            ctx->pc = 0x1B61A0u;
            goto label_1b61a0;
        }
    }
    ctx->pc = 0x1B6194u;
label_1b6194:
    // 0x1b6194: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1b6194u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1b6198:
    // 0x1b6198: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1b6198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1b619c:
    // 0x1b619c: 0x0  nop
    ctx->pc = 0x1b619cu;
    // NOP
label_1b61a0:
    // 0x1b61a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b61a4:
    // 0x1b61a4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b61a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b61a8:
    // 0x1b61a8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b61a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b61ac:
    // 0x1b61ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b61acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b61b0:
    // 0x1b61b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b61b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b61b4:
    // 0x1b61b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1b61b8:
    if (ctx->pc == 0x1B61B8u) {
        ctx->pc = 0x1B61B8u;
            // 0x1b61b8: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->pc = 0x1B61BCu;
        goto label_1b61bc;
    }
    ctx->pc = 0x1B61B4u;
    {
        const bool branch_taken_0x1b61b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B61B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B61B4u;
            // 0x1b61b8: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61b4) {
            ctx->pc = 0x1B61C8u;
            goto label_1b61c8;
        }
    }
    ctx->pc = 0x1B61BCu;
label_1b61bc:
    // 0x1b61bc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1b61bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1b61c0:
    // 0x1b61c0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1b61c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1b61c4:
    // 0x1b61c4: 0x0  nop
    ctx->pc = 0x1b61c4u;
    // NOP
label_1b61c8:
    // 0x1b61c8: 0xc040d72  jal         func_1035C8
label_1b61cc:
    if (ctx->pc == 0x1B61CCu) {
        ctx->pc = 0x1B61CCu;
            // 0x1b61cc: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B61D0u;
        goto label_1b61d0;
    }
    ctx->pc = 0x1B61C8u;
    SET_GPR_U32(ctx, 31, 0x1B61D0u);
    ctx->pc = 0x1B61CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B61C8u;
            // 0x1b61cc: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61D0u; }
        if (ctx->pc != 0x1B61D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61D0u; }
        if (ctx->pc != 0x1B61D0u) { return; }
    }
    ctx->pc = 0x1B61D0u;
label_1b61d0:
    // 0x1b61d0: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1b61d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
label_1b61d4:
    // 0x1b61d4: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1b61d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1b61d8:
    // 0x1b61d8: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1b61d8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1b61dc:
    // 0x1b61dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b61dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1b61e0:
    // 0x1b61e0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b61e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1b61e4:
    // 0x1b61e4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1b61e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1b61e8:
    // 0x1b61e8: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1b61e8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1b61ec:
    // 0x1b61ec: 0xc040098  jal         func_100260
label_1b61f0:
    if (ctx->pc == 0x1B61F0u) {
        ctx->pc = 0x1B61F0u;
            // 0x1b61f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B61F4u;
        goto label_1b61f4;
    }
    ctx->pc = 0x1B61ECu;
    SET_GPR_U32(ctx, 31, 0x1B61F4u);
    ctx->pc = 0x1B61F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B61ECu;
            // 0x1b61f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100260u;
    if (runtime->hasFunction(0x100260u)) {
        auto targetFn = runtime->lookupFunction(0x100260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61F4u; }
        if (ctx->pc != 0x1B61F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x100260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61F4u; }
        if (ctx->pc != 0x1B61F4u) { return; }
    }
    ctx->pc = 0x1B61F4u;
label_1b61f4:
    // 0x1b61f4: 0x10400218  beqz        $v0, . + 4 + (0x218 << 2)
label_1b61f8:
    if (ctx->pc == 0x1B61F8u) {
        ctx->pc = 0x1B61FCu;
        goto label_1b61fc;
    }
    ctx->pc = 0x1B61F4u;
    {
        const bool branch_taken_0x1b61f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b61f4) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B61FCu;
label_1b61fc:
    // 0x1b61fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6200:
    // 0x1b6200: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b6200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b6204:
    // 0x1b6204: 0x10000214  b           . + 4 + (0x214 << 2)
label_1b6208:
    if (ctx->pc == 0x1B6208u) {
        ctx->pc = 0x1B6208u;
            // 0x1b6208: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1B620Cu;
        goto label_1b620c;
    }
    ctx->pc = 0x1B6204u;
    {
        const bool branch_taken_0x1b6204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6204u;
            // 0x1b6208: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6204) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B620Cu;
label_1b620c:
    // 0x1b620c: 0x0  nop
    ctx->pc = 0x1b620cu;
    // NOP
label_1b6210:
    // 0x1b6210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6214:
    // 0x1b6214: 0x146200d6  bne         $v1, $v0, . + 4 + (0xD6 << 2)
label_1b6218:
    if (ctx->pc == 0x1B6218u) {
        ctx->pc = 0x1B621Cu;
        goto label_1b621c;
    }
    ctx->pc = 0x1B6214u;
    {
        const bool branch_taken_0x1b6214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b6214) {
            ctx->pc = 0x1B6570u;
            goto label_1b6570;
        }
    }
    ctx->pc = 0x1B621Cu;
label_1b621c:
    // 0x1b621c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1b621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b6220:
    // 0x1b6220: 0x3c033f60  lui         $v1, 0x3F60
    ctx->pc = 0x1b6220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16224 << 16));
label_1b6224:
    // 0x1b6224: 0x3402d2f1  ori         $v0, $zero, 0xD2F1
    ctx->pc = 0x1b6224u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1b6228:
    // 0x1b6228: 0x3463624d  ori         $v1, $v1, 0x624D
    ctx->pc = 0x1b6228u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25165u)));
label_1b622c:
    // 0x1b622c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b622cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1b6230:
    // 0x1b6230: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b6234:
    // 0x1b6234: 0x3442a9fc  ori         $v0, $v0, 0xA9FC
    ctx->pc = 0x1b6234u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)43516u)));
label_1b6238:
    // 0x1b6238: 0xc040d72  jal         func_1035C8
label_1b623c:
    if (ctx->pc == 0x1B623Cu) {
        ctx->pc = 0x1B623Cu;
            // 0x1b623c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1B6240u;
        goto label_1b6240;
    }
    ctx->pc = 0x1B6238u;
    SET_GPR_U32(ctx, 31, 0x1B6240u);
    ctx->pc = 0x1B623Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6238u;
            // 0x1b623c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6240u; }
        if (ctx->pc != 0x1B6240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6240u; }
        if (ctx->pc != 0x1B6240u) { return; }
    }
    ctx->pc = 0x1B6240u;
label_1b6240:
    // 0x1b6240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6244:
    // 0x1b6244: 0xc040880  jal         func_102200
label_1b6248:
    if (ctx->pc == 0x1B6248u) {
        ctx->pc = 0x1B6248u;
            // 0x1b6248: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B624Cu;
        goto label_1b624c;
    }
    ctx->pc = 0x1B6244u;
    SET_GPR_U32(ctx, 31, 0x1B624Cu);
    ctx->pc = 0x1B6248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6244u;
            // 0x1b6248: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B624Cu; }
        if (ctx->pc != 0x1B624Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B624Cu; }
        if (ctx->pc != 0x1B624Cu) { return; }
    }
    ctx->pc = 0x1B624Cu;
label_1b624c:
    // 0x1b624c: 0xc040a74  jal         func_1029D0
label_1b6250:
    if (ctx->pc == 0x1B6250u) {
        ctx->pc = 0x1B6250u;
            // 0x1b6250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6254u;
        goto label_1b6254;
    }
    ctx->pc = 0x1B624Cu;
    SET_GPR_U32(ctx, 31, 0x1B6254u);
    ctx->pc = 0x1B6250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B624Cu;
            // 0x1b6250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6254u; }
        if (ctx->pc != 0x1B6254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6254u; }
        if (ctx->pc != 0x1B6254u) { return; }
    }
    ctx->pc = 0x1B6254u;
label_1b6254:
    // 0x1b6254: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1b6254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b6258:
    // 0x1b6258: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b6258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b625c:
    // 0x1b625c: 0x0  nop
    ctx->pc = 0x1b625cu;
    // NOP
label_1b6260:
    // 0x1b6260: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b6260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b6264:
    // 0x1b6264: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b6264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b6268:
    // 0x1b6268: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1b6268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b626c:
    // 0x1b626c: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1b626cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6270:
    // 0x1b6270: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1b6274:
    if (ctx->pc == 0x1B6274u) {
        ctx->pc = 0x1B6274u;
            // 0x1b6274: 0x3c033f50  lui         $v1, 0x3F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
        ctx->pc = 0x1B6278u;
        goto label_1b6278;
    }
    ctx->pc = 0x1B6270u;
    {
        const bool branch_taken_0x1b6270 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6270u;
            // 0x1b6274: 0x3c033f50  lui         $v1, 0x3F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6270) {
            ctx->pc = 0x1B62B8u;
            goto label_1b62b8;
        }
    }
    ctx->pc = 0x1B6278u;
label_1b6278:
    // 0x1b6278: 0x3402d2f1  ori         $v0, $zero, 0xD2F1
    ctx->pc = 0x1b6278u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1b627c:
    // 0x1b627c: 0x3463624d  ori         $v1, $v1, 0x624D
    ctx->pc = 0x1b627cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25165u)));
label_1b6280:
    // 0x1b6280: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b6280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1b6284:
    // 0x1b6284: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b6288:
    // 0x1b6288: 0x3442a9fc  ori         $v0, $v0, 0xA9FC
    ctx->pc = 0x1b6288u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)43516u)));
label_1b628c:
    // 0x1b628c: 0xc040d72  jal         func_1035C8
label_1b6290:
    if (ctx->pc == 0x1B6290u) {
        ctx->pc = 0x1B6290u;
            // 0x1b6290: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1B6294u;
        goto label_1b6294;
    }
    ctx->pc = 0x1B628Cu;
    SET_GPR_U32(ctx, 31, 0x1B6294u);
    ctx->pc = 0x1B6290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B628Cu;
            // 0x1b6290: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6294u; }
        if (ctx->pc != 0x1B6294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6294u; }
        if (ctx->pc != 0x1B6294u) { return; }
    }
    ctx->pc = 0x1B6294u;
label_1b6294:
    // 0x1b6294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6298:
    // 0x1b6298: 0xc040880  jal         func_102200
label_1b629c:
    if (ctx->pc == 0x1B629Cu) {
        ctx->pc = 0x1B629Cu;
            // 0x1b629c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B62A0u;
        goto label_1b62a0;
    }
    ctx->pc = 0x1B6298u;
    SET_GPR_U32(ctx, 31, 0x1B62A0u);
    ctx->pc = 0x1B629Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6298u;
            // 0x1b629c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62A0u; }
        if (ctx->pc != 0x1B62A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62A0u; }
        if (ctx->pc != 0x1B62A0u) { return; }
    }
    ctx->pc = 0x1B62A0u;
label_1b62a0:
    // 0x1b62a0: 0xc040a74  jal         func_1029D0
label_1b62a4:
    if (ctx->pc == 0x1B62A4u) {
        ctx->pc = 0x1B62A4u;
            // 0x1b62a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B62A8u;
        goto label_1b62a8;
    }
    ctx->pc = 0x1B62A0u;
    SET_GPR_U32(ctx, 31, 0x1B62A8u);
    ctx->pc = 0x1B62A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62A0u;
            // 0x1b62a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62A8u; }
        if (ctx->pc != 0x1B62A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62A8u; }
        if (ctx->pc != 0x1B62A8u) { return; }
    }
    ctx->pc = 0x1B62A8u;
label_1b62a8:
    // 0x1b62a8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b62a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b62ac:
    // 0x1b62ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b62acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b62b0:
    // 0x1b62b0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b62b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b62b4:
    // 0x1b62b4: 0x0  nop
    ctx->pc = 0x1b62b4u;
    // NOP
label_1b62b8:
    // 0x1b62b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b62bc:
    // 0x1b62bc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b62bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b62c0:
    // 0x1b62c0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b62c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b62c4:
    // 0x1b62c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b62c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b62c8:
    // 0x1b62c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b62c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b62cc:
    // 0x1b62cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1b62d0:
    if (ctx->pc == 0x1B62D0u) {
        ctx->pc = 0x1B62D0u;
            // 0x1b62d0: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->pc = 0x1B62D4u;
        goto label_1b62d4;
    }
    ctx->pc = 0x1B62CCu;
    {
        const bool branch_taken_0x1b62cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B62D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62CCu;
            // 0x1b62d0: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62cc) {
            ctx->pc = 0x1B62E0u;
            goto label_1b62e0;
        }
    }
    ctx->pc = 0x1B62D4u;
label_1b62d4:
    // 0x1b62d4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1b62d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1b62d8:
    // 0x1b62d8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1b62d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1b62dc:
    // 0x1b62dc: 0x0  nop
    ctx->pc = 0x1b62dcu;
    // NOP
label_1b62e0:
    // 0x1b62e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b62e4:
    // 0x1b62e4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b62e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b62e8:
    // 0x1b62e8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b62e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b62ec:
    // 0x1b62ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b62ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b62f0:
    // 0x1b62f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b62f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b62f4:
    // 0x1b62f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1b62f8:
    if (ctx->pc == 0x1B62F8u) {
        ctx->pc = 0x1B62F8u;
            // 0x1b62f8: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->pc = 0x1B62FCu;
        goto label_1b62fc;
    }
    ctx->pc = 0x1B62F4u;
    {
        const bool branch_taken_0x1b62f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B62F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62F4u;
            // 0x1b62f8: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62f4) {
            ctx->pc = 0x1B6308u;
            goto label_1b6308;
        }
    }
    ctx->pc = 0x1B62FCu;
label_1b62fc:
    // 0x1b62fc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1b62fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1b6300:
    // 0x1b6300: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1b6300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1b6304:
    // 0x1b6304: 0x0  nop
    ctx->pc = 0x1b6304u;
    // NOP
label_1b6308:
    // 0x1b6308: 0xc065d00  jal         func_197400
label_1b630c:
    if (ctx->pc == 0x1B630Cu) {
        ctx->pc = 0x1B6310u;
        goto label_1b6310;
    }
    ctx->pc = 0x1B6308u;
    SET_GPR_U32(ctx, 31, 0x1B6310u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6310u; }
        if (ctx->pc != 0x1B6310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6310u; }
        if (ctx->pc != 0x1B6310u) { return; }
    }
    ctx->pc = 0x1B6310u;
label_1b6310:
    // 0x1b6310: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b6310u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b6314:
    // 0x1b6314: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_1b6318:
    if (ctx->pc == 0x1B6318u) {
        ctx->pc = 0x1B631Cu;
        goto label_1b631c;
    }
    ctx->pc = 0x1B6314u;
    {
        const bool branch_taken_0x1b6314 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6314) {
            ctx->pc = 0x1B63A0u;
            goto label_1b63a0;
        }
    }
    ctx->pc = 0x1B631Cu;
label_1b631c:
    // 0x1b631c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6320:
    // 0x1b6320: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b6320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b6324:
    // 0x1b6324: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b6324u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b6328:
    // 0x1b6328: 0x0  nop
    ctx->pc = 0x1b6328u;
    // NOP
label_1b632c:
    // 0x1b632c: 0x0  nop
    ctx->pc = 0x1b632cu;
    // NOP
label_1b6330:
    // 0x1b6330: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6330u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6334:
    // 0x1b6334: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_1b6338:
    if (ctx->pc == 0x1B6338u) {
        ctx->pc = 0x1B633Cu;
        goto label_1b633c;
    }
    ctx->pc = 0x1B6334u;
    {
        const bool branch_taken_0x1b6334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6334) {
            ctx->pc = 0x1B64B8u;
            goto label_1b64b8;
        }
    }
    ctx->pc = 0x1B633Cu;
label_1b633c:
    // 0x1b633c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6340:
    // 0x1b6340: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1b6340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1b6344:
    // 0x1b6344: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6348:
    // 0x1b6348: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b6348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b634c:
    // 0x1b634c: 0xc05d080  jal         func_174200
label_1b6350:
    if (ctx->pc == 0x1B6350u) {
        ctx->pc = 0x1B6350u;
            // 0x1b6350: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B6354u;
        goto label_1b6354;
    }
    ctx->pc = 0x1B634Cu;
    SET_GPR_U32(ctx, 31, 0x1B6354u);
    ctx->pc = 0x1B6350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B634Cu;
            // 0x1b6350: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6354u; }
        if (ctx->pc != 0x1B6354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6354u; }
        if (ctx->pc != 0x1B6354u) { return; }
    }
    ctx->pc = 0x1B6354u;
label_1b6354:
    // 0x1b6354: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b6354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6358:
    // 0x1b6358: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b6358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b635c:
    // 0x1b635c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b635cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b6360:
    // 0x1b6360: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b6360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6364:
    // 0x1b6364: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x1b6364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_1b6368:
    // 0x1b6368: 0xc065508  jal         func_195420
label_1b636c:
    if (ctx->pc == 0x1B636Cu) {
        ctx->pc = 0x1B636Cu;
            // 0x1b636c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6370u;
        goto label_1b6370;
    }
    ctx->pc = 0x1B6368u;
    SET_GPR_U32(ctx, 31, 0x1B6370u);
    ctx->pc = 0x1B636Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6368u;
            // 0x1b636c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6370u; }
        if (ctx->pc != 0x1B6370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6370u; }
        if (ctx->pc != 0x1B6370u) { return; }
    }
    ctx->pc = 0x1B6370u;
label_1b6370:
    // 0x1b6370: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1b6370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6374:
    // 0x1b6374: 0x2403fff6  addiu       $v1, $zero, -0xA
    ctx->pc = 0x1b6374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
label_1b6378:
    // 0x1b6378: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b6378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b637c:
    // 0x1b637c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b637cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b6380:
    // 0x1b6380: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b6380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6384:
    // 0x1b6384: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b6384u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b6388:
    // 0x1b6388: 0xc065508  jal         func_195420
label_1b638c:
    if (ctx->pc == 0x1B638Cu) {
        ctx->pc = 0x1B638Cu;
            // 0x1b638c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6390u;
        goto label_1b6390;
    }
    ctx->pc = 0x1B6388u;
    SET_GPR_U32(ctx, 31, 0x1B6390u);
    ctx->pc = 0x1B638Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6388u;
            // 0x1b638c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6390u; }
        if (ctx->pc != 0x1B6390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6390u; }
        if (ctx->pc != 0x1B6390u) { return; }
    }
    ctx->pc = 0x1B6390u;
label_1b6390:
    // 0x1b6390: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b6390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b6394:
    // 0x1b6394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b6394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b6398:
    // 0x1b6398: 0x10000047  b           . + 4 + (0x47 << 2)
label_1b639c:
    if (ctx->pc == 0x1B639Cu) {
        ctx->pc = 0x1B639Cu;
            // 0x1b639c: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->pc = 0x1B63A0u;
        goto label_1b63a0;
    }
    ctx->pc = 0x1B6398u;
    {
        const bool branch_taken_0x1b6398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B639Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6398u;
            // 0x1b639c: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6398) {
            ctx->pc = 0x1B64B8u;
            goto label_1b64b8;
        }
    }
    ctx->pc = 0x1B63A0u;
label_1b63a0:
    // 0x1b63a0: 0xc065d00  jal         func_197400
label_1b63a4:
    if (ctx->pc == 0x1B63A4u) {
        ctx->pc = 0x1B63A8u;
        goto label_1b63a8;
    }
    ctx->pc = 0x1B63A0u;
    SET_GPR_U32(ctx, 31, 0x1B63A8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63A8u; }
        if (ctx->pc != 0x1B63A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63A8u; }
        if (ctx->pc != 0x1B63A8u) { return; }
    }
    ctx->pc = 0x1B63A8u;
label_1b63a8:
    // 0x1b63a8: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_1b63ac:
    if (ctx->pc == 0x1B63ACu) {
        ctx->pc = 0x1B63B0u;
        goto label_1b63b0;
    }
    ctx->pc = 0x1B63A8u;
    {
        const bool branch_taken_0x1b63a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b63a8) {
            ctx->pc = 0x1B6438u;
            goto label_1b6438;
        }
    }
    ctx->pc = 0x1B63B0u;
label_1b63b0:
    // 0x1b63b0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b63b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b63b4:
    // 0x1b63b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b63b8:
    // 0x1b63b8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b63b8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b63bc:
    // 0x1b63bc: 0x0  nop
    ctx->pc = 0x1b63bcu;
    // NOP
label_1b63c0:
    // 0x1b63c0: 0x0  nop
    ctx->pc = 0x1b63c0u;
    // NOP
label_1b63c4:
    // 0x1b63c4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b63c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b63c8:
    // 0x1b63c8: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_1b63cc:
    if (ctx->pc == 0x1B63CCu) {
        ctx->pc = 0x1B63D0u;
        goto label_1b63d0;
    }
    ctx->pc = 0x1B63C8u;
    {
        const bool branch_taken_0x1b63c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b63c8) {
            ctx->pc = 0x1B64B8u;
            goto label_1b64b8;
        }
    }
    ctx->pc = 0x1B63D0u;
label_1b63d0:
    // 0x1b63d0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b63d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b63d4:
    // 0x1b63d4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1b63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1b63d8:
    // 0x1b63d8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b63d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b63dc:
    // 0x1b63dc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b63dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b63e0:
    // 0x1b63e0: 0xc05d080  jal         func_174200
label_1b63e4:
    if (ctx->pc == 0x1B63E4u) {
        ctx->pc = 0x1B63E4u;
            // 0x1b63e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B63E8u;
        goto label_1b63e8;
    }
    ctx->pc = 0x1B63E0u;
    SET_GPR_U32(ctx, 31, 0x1B63E8u);
    ctx->pc = 0x1B63E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63E0u;
            // 0x1b63e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63E8u; }
        if (ctx->pc != 0x1B63E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63E8u; }
        if (ctx->pc != 0x1B63E8u) { return; }
    }
    ctx->pc = 0x1B63E8u;
label_1b63e8:
    // 0x1b63e8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b63e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b63ec:
    // 0x1b63ec: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b63ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b63f0:
    // 0x1b63f0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b63f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b63f4:
    // 0x1b63f4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b63f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b63f8:
    // 0x1b63f8: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x1b63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_1b63fc:
    // 0x1b63fc: 0xc065508  jal         func_195420
label_1b6400:
    if (ctx->pc == 0x1B6400u) {
        ctx->pc = 0x1B6400u;
            // 0x1b6400: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6404u;
        goto label_1b6404;
    }
    ctx->pc = 0x1B63FCu;
    SET_GPR_U32(ctx, 31, 0x1B6404u);
    ctx->pc = 0x1B6400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63FCu;
            // 0x1b6400: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6404u; }
        if (ctx->pc != 0x1B6404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6404u; }
        if (ctx->pc != 0x1B6404u) { return; }
    }
    ctx->pc = 0x1B6404u;
label_1b6404:
    // 0x1b6404: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1b6404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6408:
    // 0x1b6408: 0x2403fff6  addiu       $v1, $zero, -0xA
    ctx->pc = 0x1b6408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
label_1b640c:
    // 0x1b640c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b640cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b6410:
    // 0x1b6410: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b6410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b6414:
    // 0x1b6414: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b6414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6418:
    // 0x1b6418: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b6418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b641c:
    // 0x1b641c: 0xc065508  jal         func_195420
label_1b6420:
    if (ctx->pc == 0x1B6420u) {
        ctx->pc = 0x1B6420u;
            // 0x1b6420: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6424u;
        goto label_1b6424;
    }
    ctx->pc = 0x1B641Cu;
    SET_GPR_U32(ctx, 31, 0x1B6424u);
    ctx->pc = 0x1B6420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B641Cu;
            // 0x1b6420: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6424u; }
        if (ctx->pc != 0x1B6424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6424u; }
        if (ctx->pc != 0x1B6424u) { return; }
    }
    ctx->pc = 0x1B6424u;
label_1b6424:
    // 0x1b6424: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b6424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b6428:
    // 0x1b6428: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b6428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b642c:
    // 0x1b642c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1b6430:
    if (ctx->pc == 0x1B6430u) {
        ctx->pc = 0x1B6430u;
            // 0x1b6430: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->pc = 0x1B6434u;
        goto label_1b6434;
    }
    ctx->pc = 0x1B642Cu;
    {
        const bool branch_taken_0x1b642c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B642Cu;
            // 0x1b6430: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b642c) {
            ctx->pc = 0x1B64B8u;
            goto label_1b64b8;
        }
    }
    ctx->pc = 0x1B6434u;
label_1b6434:
    // 0x1b6434: 0x0  nop
    ctx->pc = 0x1b6434u;
    // NOP
label_1b6438:
    // 0x1b6438: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b6438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b643c:
    // 0x1b643c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b6440:
    // 0x1b6440: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b6440u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b6444:
    // 0x1b6444: 0x0  nop
    ctx->pc = 0x1b6444u;
    // NOP
label_1b6448:
    // 0x1b6448: 0x0  nop
    ctx->pc = 0x1b6448u;
    // NOP
label_1b644c:
    // 0x1b644c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b644cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6450:
    // 0x1b6450: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1b6454:
    if (ctx->pc == 0x1B6454u) {
        ctx->pc = 0x1B6458u;
        goto label_1b6458;
    }
    ctx->pc = 0x1B6450u;
    {
        const bool branch_taken_0x1b6450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6450) {
            ctx->pc = 0x1B64B8u;
            goto label_1b64b8;
        }
    }
    ctx->pc = 0x1B6458u;
label_1b6458:
    // 0x1b6458: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b6458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b645c:
    // 0x1b645c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1b645cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1b6460:
    // 0x1b6460: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b6460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6464:
    // 0x1b6464: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b6464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b6468:
    // 0x1b6468: 0xc05d080  jal         func_174200
label_1b646c:
    if (ctx->pc == 0x1B646Cu) {
        ctx->pc = 0x1B646Cu;
            // 0x1b646c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B6470u;
        goto label_1b6470;
    }
    ctx->pc = 0x1B6468u;
    SET_GPR_U32(ctx, 31, 0x1B6470u);
    ctx->pc = 0x1B646Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6468u;
            // 0x1b646c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6470u; }
        if (ctx->pc != 0x1B6470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6470u; }
        if (ctx->pc != 0x1B6470u) { return; }
    }
    ctx->pc = 0x1B6470u;
label_1b6470:
    // 0x1b6470: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b6470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6474:
    // 0x1b6474: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b6474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b6478:
    // 0x1b6478: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b6478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b647c:
    // 0x1b647c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b647cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6480:
    // 0x1b6480: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x1b6480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_1b6484:
    // 0x1b6484: 0xc065508  jal         func_195420
label_1b6488:
    if (ctx->pc == 0x1B6488u) {
        ctx->pc = 0x1B6488u;
            // 0x1b6488: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B648Cu;
        goto label_1b648c;
    }
    ctx->pc = 0x1B6484u;
    SET_GPR_U32(ctx, 31, 0x1B648Cu);
    ctx->pc = 0x1B6488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6484u;
            // 0x1b6488: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B648Cu; }
        if (ctx->pc != 0x1B648Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B648Cu; }
        if (ctx->pc != 0x1B648Cu) { return; }
    }
    ctx->pc = 0x1B648Cu;
label_1b648c:
    // 0x1b648c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1b648cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6490:
    // 0x1b6490: 0x2403fff6  addiu       $v1, $zero, -0xA
    ctx->pc = 0x1b6490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
label_1b6494:
    // 0x1b6494: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b6494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b6498:
    // 0x1b6498: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b6498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b649c:
    // 0x1b649c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b649cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b64a0:
    // 0x1b64a0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b64a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b64a4:
    // 0x1b64a4: 0xc065508  jal         func_195420
label_1b64a8:
    if (ctx->pc == 0x1B64A8u) {
        ctx->pc = 0x1B64A8u;
            // 0x1b64a8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B64ACu;
        goto label_1b64ac;
    }
    ctx->pc = 0x1B64A4u;
    SET_GPR_U32(ctx, 31, 0x1B64ACu);
    ctx->pc = 0x1B64A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64A4u;
            // 0x1b64a8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64ACu; }
        if (ctx->pc != 0x1B64ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64ACu; }
        if (ctx->pc != 0x1B64ACu) { return; }
    }
    ctx->pc = 0x1B64ACu;
label_1b64ac:
    // 0x1b64ac: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b64acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b64b0:
    // 0x1b64b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b64b4:
    // 0x1b64b4: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x1b64b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_1b64b8:
    // 0x1b64b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b64bc:
    // 0x1b64bc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1b64bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b64c0:
    // 0x1b64c0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1b64c4:
    if (ctx->pc == 0x1B64C4u) {
        ctx->pc = 0x1B64C4u;
            // 0x1b64c4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1B64C8u;
        goto label_1b64c8;
    }
    ctx->pc = 0x1B64C0u;
    {
        const bool branch_taken_0x1b64c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B64C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64C0u;
            // 0x1b64c4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b64c0) {
            ctx->pc = 0x1B6528u;
            goto label_1b6528;
        }
    }
    ctx->pc = 0x1B64C8u;
label_1b64c8:
    // 0x1b64c8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1b64cc:
    if (ctx->pc == 0x1B64CCu) {
        ctx->pc = 0x1B64D0u;
        goto label_1b64d0;
    }
    ctx->pc = 0x1B64C8u;
    {
        const bool branch_taken_0x1b64c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b64c8) {
            ctx->pc = 0x1B6500u;
            goto label_1b6500;
        }
    }
    ctx->pc = 0x1B64D0u;
label_1b64d0:
    // 0x1b64d0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b64d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b64d4:
    // 0x1b64d4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1b64d8:
    if (ctx->pc == 0x1B64D8u) {
        ctx->pc = 0x1B64DCu;
        goto label_1b64dc;
    }
    ctx->pc = 0x1B64D4u;
    {
        const bool branch_taken_0x1b64d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b64d4) {
            ctx->pc = 0x1B64E8u;
            goto label_1b64e8;
        }
    }
    ctx->pc = 0x1B64DCu;
label_1b64dc:
    // 0x1b64dc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1b64e0:
    if (ctx->pc == 0x1B64E0u) {
        ctx->pc = 0x1B64E4u;
        goto label_1b64e4;
    }
    ctx->pc = 0x1B64DCu;
    {
        const bool branch_taken_0x1b64dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64dc) {
            ctx->pc = 0x1B6548u;
            goto label_1b6548;
        }
    }
    ctx->pc = 0x1B64E4u;
label_1b64e4:
    // 0x1b64e4: 0x0  nop
    ctx->pc = 0x1b64e4u;
    // NOP
label_1b64e8:
    // 0x1b64e8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b64e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b64ec:
    // 0x1b64ec: 0xc06560c  jal         func_195830
label_1b64f0:
    if (ctx->pc == 0x1B64F0u) {
        ctx->pc = 0x1B64F0u;
            // 0x1b64f0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B64F4u;
        goto label_1b64f4;
    }
    ctx->pc = 0x1B64ECu;
    SET_GPR_U32(ctx, 31, 0x1B64F4u);
    ctx->pc = 0x1B64F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64ECu;
            // 0x1b64f0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64F4u; }
        if (ctx->pc != 0x1B64F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64F4u; }
        if (ctx->pc != 0x1B64F4u) { return; }
    }
    ctx->pc = 0x1B64F4u;
label_1b64f4:
    // 0x1b64f4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1b64f8:
    if (ctx->pc == 0x1B64F8u) {
        ctx->pc = 0x1B64FCu;
        goto label_1b64fc;
    }
    ctx->pc = 0x1B64F4u;
    {
        const bool branch_taken_0x1b64f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64f4) {
            ctx->pc = 0x1B6548u;
            goto label_1b6548;
        }
    }
    ctx->pc = 0x1B64FCu;
label_1b64fc:
    // 0x1b64fc: 0x0  nop
    ctx->pc = 0x1b64fcu;
    // NOP
label_1b6500:
    // 0x1b6500: 0xc065d00  jal         func_197400
label_1b6504:
    if (ctx->pc == 0x1B6504u) {
        ctx->pc = 0x1B6508u;
        goto label_1b6508;
    }
    ctx->pc = 0x1B6500u;
    SET_GPR_U32(ctx, 31, 0x1B6508u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6508u; }
        if (ctx->pc != 0x1B6508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6508u; }
        if (ctx->pc != 0x1B6508u) { return; }
    }
    ctx->pc = 0x1B6508u;
label_1b6508:
    // 0x1b6508: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_1b650c:
    if (ctx->pc == 0x1B650Cu) {
        ctx->pc = 0x1B6510u;
        goto label_1b6510;
    }
    ctx->pc = 0x1B6508u;
    {
        const bool branch_taken_0x1b6508 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b6508) {
            ctx->pc = 0x1B6548u;
            goto label_1b6548;
        }
    }
    ctx->pc = 0x1B6510u;
label_1b6510:
    // 0x1b6510: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b6510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6514:
    // 0x1b6514: 0xc06560c  jal         func_195830
label_1b6518:
    if (ctx->pc == 0x1B6518u) {
        ctx->pc = 0x1B6518u;
            // 0x1b6518: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B651Cu;
        goto label_1b651c;
    }
    ctx->pc = 0x1B6514u;
    SET_GPR_U32(ctx, 31, 0x1B651Cu);
    ctx->pc = 0x1B6518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6514u;
            // 0x1b6518: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B651Cu; }
        if (ctx->pc != 0x1B651Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B651Cu; }
        if (ctx->pc != 0x1B651Cu) { return; }
    }
    ctx->pc = 0x1B651Cu;
label_1b651c:
    // 0x1b651c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b6520:
    if (ctx->pc == 0x1B6520u) {
        ctx->pc = 0x1B6524u;
        goto label_1b6524;
    }
    ctx->pc = 0x1B651Cu;
    {
        const bool branch_taken_0x1b651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b651c) {
            ctx->pc = 0x1B6548u;
            goto label_1b6548;
        }
    }
    ctx->pc = 0x1B6524u;
label_1b6524:
    // 0x1b6524: 0x0  nop
    ctx->pc = 0x1b6524u;
    // NOP
label_1b6528:
    // 0x1b6528: 0xc065d00  jal         func_197400
label_1b652c:
    if (ctx->pc == 0x1B652Cu) {
        ctx->pc = 0x1B6530u;
        goto label_1b6530;
    }
    ctx->pc = 0x1B6528u;
    SET_GPR_U32(ctx, 31, 0x1B6530u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6530u; }
        if (ctx->pc != 0x1B6530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6530u; }
        if (ctx->pc != 0x1B6530u) { return; }
    }
    ctx->pc = 0x1B6530u;
label_1b6530:
    // 0x1b6530: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1b6530u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b6534:
    // 0x1b6534: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1b6538:
    if (ctx->pc == 0x1B6538u) {
        ctx->pc = 0x1B653Cu;
        goto label_1b653c;
    }
    ctx->pc = 0x1B6534u;
    {
        const bool branch_taken_0x1b6534 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6534) {
            ctx->pc = 0x1B6548u;
            goto label_1b6548;
        }
    }
    ctx->pc = 0x1B653Cu;
label_1b653c:
    // 0x1b653c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b653cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6540:
    // 0x1b6540: 0xc06560c  jal         func_195830
label_1b6544:
    if (ctx->pc == 0x1B6544u) {
        ctx->pc = 0x1B6544u;
            // 0x1b6544: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B6548u;
        goto label_1b6548;
    }
    ctx->pc = 0x1B6540u;
    SET_GPR_U32(ctx, 31, 0x1B6548u);
    ctx->pc = 0x1B6544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6540u;
            // 0x1b6544: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6548u; }
        if (ctx->pc != 0x1B6548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6548u; }
        if (ctx->pc != 0x1B6548u) { return; }
    }
    ctx->pc = 0x1B6548u;
label_1b6548:
    // 0x1b6548: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b6548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b654c:
    // 0x1b654c: 0x28410079  slti        $at, $v0, 0x79
    ctx->pc = 0x1b654cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
label_1b6550:
    // 0x1b6550: 0x14200141  bnez        $at, . + 4 + (0x141 << 2)
label_1b6554:
    if (ctx->pc == 0x1B6554u) {
        ctx->pc = 0x1B6554u;
            // 0x1b6554: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B6558u;
        goto label_1b6558;
    }
    ctx->pc = 0x1B6550u;
    {
        const bool branch_taken_0x1b6550 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6550u;
            // 0x1b6554: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6550) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B6558u;
label_1b6558:
    // 0x1b6558: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b6558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b655c:
    // 0x1b655c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b655cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6560:
    // 0x1b6560: 0xc065590  jal         func_195640
label_1b6564:
    if (ctx->pc == 0x1B6564u) {
        ctx->pc = 0x1B6564u;
            // 0x1b6564: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B6568u;
        goto label_1b6568;
    }
    ctx->pc = 0x1B6560u;
    SET_GPR_U32(ctx, 31, 0x1B6568u);
    ctx->pc = 0x1B6564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6560u;
            // 0x1b6564: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6568u; }
        if (ctx->pc != 0x1B6568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6568u; }
        if (ctx->pc != 0x1B6568u) { return; }
    }
    ctx->pc = 0x1B6568u;
label_1b6568:
    // 0x1b6568: 0x1000013b  b           . + 4 + (0x13B << 2)
label_1b656c:
    if (ctx->pc == 0x1B656Cu) {
        ctx->pc = 0x1B6570u;
        goto label_1b6570;
    }
    ctx->pc = 0x1B6568u;
    {
        const bool branch_taken_0x1b6568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6568) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B6570u;
label_1b6570:
    // 0x1b6570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b6570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b6574:
    // 0x1b6574: 0x14620138  bne         $v1, $v0, . + 4 + (0x138 << 2)
label_1b6578:
    if (ctx->pc == 0x1B6578u) {
        ctx->pc = 0x1B657Cu;
        goto label_1b657c;
    }
    ctx->pc = 0x1B6574u;
    {
        const bool branch_taken_0x1b6574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b6574) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B657Cu;
label_1b657c:
    // 0x1b657c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6580:
    // 0x1b6580: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b6580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b6584:
    // 0x1b6584: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b6584u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b6588:
    // 0x1b6588: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b6588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b658c:
    // 0x1b658c: 0x0  nop
    ctx->pc = 0x1b658cu;
    // NOP
label_1b6590:
    // 0x1b6590: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b6590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b6594:
    // 0x1b6594: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b6594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b6598:
    // 0x1b6598: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b6598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b659c:
    // 0x1b659c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b659cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b65a0:
    // 0x1b65a0: 0x1000012d  b           . + 4 + (0x12D << 2)
label_1b65a4:
    if (ctx->pc == 0x1B65A4u) {
        ctx->pc = 0x1B65A4u;
            // 0x1b65a4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1B65A8u;
        goto label_1b65a8;
    }
    ctx->pc = 0x1B65A0u;
    {
        const bool branch_taken_0x1b65a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B65A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65A0u;
            // 0x1b65a4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b65a0) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B65A8u;
label_1b65a8:
    // 0x1b65a8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b65ac:
    // 0x1b65ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b65acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b65b0:
    // 0x1b65b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b65b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b65b4:
    // 0x1b65b4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b65b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1b65b8:
    // 0x1b65b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b65b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b65bc:
    // 0x1b65bc: 0x0  nop
    ctx->pc = 0x1b65bcu;
    // NOP
label_1b65c0:
    // 0x1b65c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b65c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b65c4:
    // 0x1b65c4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b65c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1b65c8:
    // 0x1b65c8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1b65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b65cc:
    // 0x1b65cc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1b65d0:
    // 0x1b65d0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1b65d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1b65d4:
    // 0x1b65d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b65d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b65d8:
    // 0x1b65d8: 0x0  nop
    ctx->pc = 0x1b65d8u;
    // NOP
label_1b65dc:
    // 0x1b65dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b65dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b65e0:
    // 0x1b65e0: 0xc04b6ee  jal         func_12DBB8
label_1b65e4:
    if (ctx->pc == 0x1B65E4u) {
        ctx->pc = 0x1B65E4u;
            // 0x1b65e4: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1B65E8u;
        goto label_1b65e8;
    }
    ctx->pc = 0x1B65E0u;
    SET_GPR_U32(ctx, 31, 0x1B65E8u);
    ctx->pc = 0x1B65E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65E0u;
            // 0x1b65e4: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65E8u; }
        if (ctx->pc != 0x1B65E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65E8u; }
        if (ctx->pc != 0x1B65E8u) { return; }
    }
    ctx->pc = 0x1B65E8u;
label_1b65e8:
    // 0x1b65e8: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1b65e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1b65ec:
    // 0x1b65ec: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
label_1b65f0:
    if (ctx->pc == 0x1B65F0u) {
        ctx->pc = 0x1B65F4u;
        goto label_1b65f4;
    }
    ctx->pc = 0x1B65ECu;
    {
        const bool branch_taken_0x1b65ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b65ec) {
            ctx->pc = 0x1B66C0u;
            goto label_1b66c0;
        }
    }
    ctx->pc = 0x1B65F4u;
label_1b65f4:
    // 0x1b65f4: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b65f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b65f8:
    // 0x1b65f8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1b65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1b65fc:
    // 0x1b65fc: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x1b65fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
label_1b6600:
    // 0x1b6600: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b6600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b6604:
    // 0x1b6604: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1b6604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1b6608:
    // 0x1b6608: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1b6608u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1b660c:
    // 0x1b660c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b660cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b6610:
    // 0x1b6610: 0x0  nop
    ctx->pc = 0x1b6610u;
    // NOP
label_1b6614:
    // 0x1b6614: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b6614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b6618:
    // 0x1b6618: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b6618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b661c:
    // 0x1b661c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b661cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6620:
    // 0x1b6620: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b6620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b6624:
    // 0x1b6624: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b6624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b6628:
    // 0x1b6628: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b662c:
    // 0x1b662c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b662cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6630:
    // 0x1b6630: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b6630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6634:
    // 0x1b6634: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b6634u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b6638:
    // 0x1b6638: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6638u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b663c:
    // 0x1b663c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1b6640:
    if (ctx->pc == 0x1B6640u) {
        ctx->pc = 0x1B6640u;
            // 0x1b6640: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->pc = 0x1B6644u;
        goto label_1b6644;
    }
    ctx->pc = 0x1B663Cu;
    {
        const bool branch_taken_0x1b663c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B663Cu;
            // 0x1b6640: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b663c) {
            ctx->pc = 0x1B6650u;
            goto label_1b6650;
        }
    }
    ctx->pc = 0x1B6644u;
label_1b6644:
    // 0x1b6644: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1b6644u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1b6648:
    // 0x1b6648: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1b6648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1b664c:
    // 0x1b664c: 0x0  nop
    ctx->pc = 0x1b664cu;
    // NOP
label_1b6650:
    // 0x1b6650: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6654:
    // 0x1b6654: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b6654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6658:
    // 0x1b6658: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b6658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b665c:
    // 0x1b665c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b665cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b6660:
    // 0x1b6660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6664:
    // 0x1b6664: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1b6668:
    if (ctx->pc == 0x1B6668u) {
        ctx->pc = 0x1B6668u;
            // 0x1b6668: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->pc = 0x1B666Cu;
        goto label_1b666c;
    }
    ctx->pc = 0x1B6664u;
    {
        const bool branch_taken_0x1b6664 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6664u;
            // 0x1b6668: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6664) {
            ctx->pc = 0x1B6678u;
            goto label_1b6678;
        }
    }
    ctx->pc = 0x1B666Cu;
label_1b666c:
    // 0x1b666c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1b666cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1b6670:
    // 0x1b6670: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1b6670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1b6674:
    // 0x1b6674: 0x0  nop
    ctx->pc = 0x1b6674u;
    // NOP
label_1b6678:
    // 0x1b6678: 0xc040d72  jal         func_1035C8
label_1b667c:
    if (ctx->pc == 0x1B667Cu) {
        ctx->pc = 0x1B667Cu;
            // 0x1b667c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B6680u;
        goto label_1b6680;
    }
    ctx->pc = 0x1B6678u;
    SET_GPR_U32(ctx, 31, 0x1B6680u);
    ctx->pc = 0x1B667Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6678u;
            // 0x1b667c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6680u; }
        if (ctx->pc != 0x1B6680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6680u; }
        if (ctx->pc != 0x1B6680u) { return; }
    }
    ctx->pc = 0x1B6680u;
label_1b6680:
    // 0x1b6680: 0x3c04bfb9  lui         $a0, 0xBFB9
    ctx->pc = 0x1b6680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49081 << 16));
label_1b6684:
    // 0x1b6684: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1b6684u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1b6688:
    // 0x1b6688: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1b6688u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1b668c:
    // 0x1b668c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b668cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1b6690:
    // 0x1b6690: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b6690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1b6694:
    // 0x1b6694: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1b6694u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1b6698:
    // 0x1b6698: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b6698u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1b669c:
    // 0x1b669c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b66a0:
    // 0x1b66a0: 0xc040084  jal         func_100210
label_1b66a4:
    if (ctx->pc == 0x1B66A4u) {
        ctx->pc = 0x1B66A4u;
            // 0x1b66a4: 0x70032b89  pcpyld      $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1B66A8u;
        goto label_1b66a8;
    }
    ctx->pc = 0x1B66A0u;
    SET_GPR_U32(ctx, 31, 0x1B66A8u);
    ctx->pc = 0x1B66A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66A0u;
            // 0x1b66a4: 0x70032b89  pcpyld      $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100210u;
    if (runtime->hasFunction(0x100210u)) {
        auto targetFn = runtime->lookupFunction(0x100210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66A8u; }
        if (ctx->pc != 0x1B66A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66A8u; }
        if (ctx->pc != 0x1B66A8u) { return; }
    }
    ctx->pc = 0x1B66A8u;
label_1b66a8:
    // 0x1b66a8: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
label_1b66ac:
    if (ctx->pc == 0x1B66ACu) {
        ctx->pc = 0x1B66B0u;
        goto label_1b66b0;
    }
    ctx->pc = 0x1B66A8u;
    {
        const bool branch_taken_0x1b66a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66a8) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B66B0u;
label_1b66b0:
    // 0x1b66b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b66b4:
    // 0x1b66b4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b66b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b66b8:
    // 0x1b66b8: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_1b66bc:
    if (ctx->pc == 0x1B66BCu) {
        ctx->pc = 0x1B66BCu;
            // 0x1b66bc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1B66C0u;
        goto label_1b66c0;
    }
    ctx->pc = 0x1B66B8u;
    {
        const bool branch_taken_0x1b66b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B66BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66B8u;
            // 0x1b66bc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b66b8) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B66C0u;
label_1b66c0:
    // 0x1b66c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b66c4:
    // 0x1b66c4: 0x146200d6  bne         $v1, $v0, . + 4 + (0xD6 << 2)
label_1b66c8:
    if (ctx->pc == 0x1B66C8u) {
        ctx->pc = 0x1B66CCu;
        goto label_1b66cc;
    }
    ctx->pc = 0x1B66C4u;
    {
        const bool branch_taken_0x1b66c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b66c4) {
            ctx->pc = 0x1B6A20u;
            goto label_1b6a20;
        }
    }
    ctx->pc = 0x1B66CCu;
label_1b66cc:
    // 0x1b66cc: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1b66ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b66d0:
    // 0x1b66d0: 0x3c033f60  lui         $v1, 0x3F60
    ctx->pc = 0x1b66d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16224 << 16));
label_1b66d4:
    // 0x1b66d4: 0x3402d2f1  ori         $v0, $zero, 0xD2F1
    ctx->pc = 0x1b66d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1b66d8:
    // 0x1b66d8: 0x3463624d  ori         $v1, $v1, 0x624D
    ctx->pc = 0x1b66d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25165u)));
label_1b66dc:
    // 0x1b66dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b66dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1b66e0:
    // 0x1b66e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b66e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b66e4:
    // 0x1b66e4: 0x3442a9fc  ori         $v0, $v0, 0xA9FC
    ctx->pc = 0x1b66e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)43516u)));
label_1b66e8:
    // 0x1b66e8: 0xc040d72  jal         func_1035C8
label_1b66ec:
    if (ctx->pc == 0x1B66ECu) {
        ctx->pc = 0x1B66ECu;
            // 0x1b66ec: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1B66F0u;
        goto label_1b66f0;
    }
    ctx->pc = 0x1B66E8u;
    SET_GPR_U32(ctx, 31, 0x1B66F0u);
    ctx->pc = 0x1B66ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66E8u;
            // 0x1b66ec: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66F0u; }
        if (ctx->pc != 0x1B66F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66F0u; }
        if (ctx->pc != 0x1B66F0u) { return; }
    }
    ctx->pc = 0x1B66F0u;
label_1b66f0:
    // 0x1b66f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b66f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b66f4:
    // 0x1b66f4: 0xc040880  jal         func_102200
label_1b66f8:
    if (ctx->pc == 0x1B66F8u) {
        ctx->pc = 0x1B66F8u;
            // 0x1b66f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B66FCu;
        goto label_1b66fc;
    }
    ctx->pc = 0x1B66F4u;
    SET_GPR_U32(ctx, 31, 0x1B66FCu);
    ctx->pc = 0x1B66F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66F4u;
            // 0x1b66f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66FCu; }
        if (ctx->pc != 0x1B66FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66FCu; }
        if (ctx->pc != 0x1B66FCu) { return; }
    }
    ctx->pc = 0x1B66FCu;
label_1b66fc:
    // 0x1b66fc: 0xc040a74  jal         func_1029D0
label_1b6700:
    if (ctx->pc == 0x1B6700u) {
        ctx->pc = 0x1B6700u;
            // 0x1b6700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6704u;
        goto label_1b6704;
    }
    ctx->pc = 0x1B66FCu;
    SET_GPR_U32(ctx, 31, 0x1B6704u);
    ctx->pc = 0x1B6700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66FCu;
            // 0x1b6700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6704u; }
        if (ctx->pc != 0x1B6704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6704u; }
        if (ctx->pc != 0x1B6704u) { return; }
    }
    ctx->pc = 0x1B6704u;
label_1b6704:
    // 0x1b6704: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1b6704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b6708:
    // 0x1b6708: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b6708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b670c:
    // 0x1b670c: 0x0  nop
    ctx->pc = 0x1b670cu;
    // NOP
label_1b6710:
    // 0x1b6710: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b6710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b6714:
    // 0x1b6714: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b6714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b6718:
    // 0x1b6718: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1b6718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b671c:
    // 0x1b671c: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1b671cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6720:
    // 0x1b6720: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1b6724:
    if (ctx->pc == 0x1B6724u) {
        ctx->pc = 0x1B6724u;
            // 0x1b6724: 0x3c033f50  lui         $v1, 0x3F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
        ctx->pc = 0x1B6728u;
        goto label_1b6728;
    }
    ctx->pc = 0x1B6720u;
    {
        const bool branch_taken_0x1b6720 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6720u;
            // 0x1b6724: 0x3c033f50  lui         $v1, 0x3F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6720) {
            ctx->pc = 0x1B6768u;
            goto label_1b6768;
        }
    }
    ctx->pc = 0x1B6728u;
label_1b6728:
    // 0x1b6728: 0x3402d2f1  ori         $v0, $zero, 0xD2F1
    ctx->pc = 0x1b6728u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1b672c:
    // 0x1b672c: 0x3463624d  ori         $v1, $v1, 0x624D
    ctx->pc = 0x1b672cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25165u)));
label_1b6730:
    // 0x1b6730: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b6730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1b6734:
    // 0x1b6734: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b6738:
    // 0x1b6738: 0x3442a9fc  ori         $v0, $v0, 0xA9FC
    ctx->pc = 0x1b6738u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)43516u)));
label_1b673c:
    // 0x1b673c: 0xc040d72  jal         func_1035C8
label_1b6740:
    if (ctx->pc == 0x1B6740u) {
        ctx->pc = 0x1B6740u;
            // 0x1b6740: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1B6744u;
        goto label_1b6744;
    }
    ctx->pc = 0x1B673Cu;
    SET_GPR_U32(ctx, 31, 0x1B6744u);
    ctx->pc = 0x1B6740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B673Cu;
            // 0x1b6740: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6744u; }
        if (ctx->pc != 0x1B6744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6744u; }
        if (ctx->pc != 0x1B6744u) { return; }
    }
    ctx->pc = 0x1B6744u;
label_1b6744:
    // 0x1b6744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6748:
    // 0x1b6748: 0xc040880  jal         func_102200
label_1b674c:
    if (ctx->pc == 0x1B674Cu) {
        ctx->pc = 0x1B674Cu;
            // 0x1b674c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6750u;
        goto label_1b6750;
    }
    ctx->pc = 0x1B6748u;
    SET_GPR_U32(ctx, 31, 0x1B6750u);
    ctx->pc = 0x1B674Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6748u;
            // 0x1b674c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6750u; }
        if (ctx->pc != 0x1B6750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6750u; }
        if (ctx->pc != 0x1B6750u) { return; }
    }
    ctx->pc = 0x1B6750u;
label_1b6750:
    // 0x1b6750: 0xc040a74  jal         func_1029D0
label_1b6754:
    if (ctx->pc == 0x1B6754u) {
        ctx->pc = 0x1B6754u;
            // 0x1b6754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6758u;
        goto label_1b6758;
    }
    ctx->pc = 0x1B6750u;
    SET_GPR_U32(ctx, 31, 0x1B6758u);
    ctx->pc = 0x1B6754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6750u;
            // 0x1b6754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6758u; }
        if (ctx->pc != 0x1B6758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6758u; }
        if (ctx->pc != 0x1B6758u) { return; }
    }
    ctx->pc = 0x1B6758u;
label_1b6758:
    // 0x1b6758: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b6758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b675c:
    // 0x1b675c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b675cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b6760:
    // 0x1b6760: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b6760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b6764:
    // 0x1b6764: 0x0  nop
    ctx->pc = 0x1b6764u;
    // NOP
label_1b6768:
    // 0x1b6768: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b676c:
    // 0x1b676c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b676cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6770:
    // 0x1b6770: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b6770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6774:
    // 0x1b6774: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b6774u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b6778:
    // 0x1b6778: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b677c:
    // 0x1b677c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1b6780:
    if (ctx->pc == 0x1B6780u) {
        ctx->pc = 0x1B6780u;
            // 0x1b6780: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->pc = 0x1B6784u;
        goto label_1b6784;
    }
    ctx->pc = 0x1B677Cu;
    {
        const bool branch_taken_0x1b677c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B677Cu;
            // 0x1b6780: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b677c) {
            ctx->pc = 0x1B6790u;
            goto label_1b6790;
        }
    }
    ctx->pc = 0x1B6784u;
label_1b6784:
    // 0x1b6784: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1b6784u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1b6788:
    // 0x1b6788: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1b6788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1b678c:
    // 0x1b678c: 0x0  nop
    ctx->pc = 0x1b678cu;
    // NOP
label_1b6790:
    // 0x1b6790: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6794:
    // 0x1b6794: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b6794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6798:
    // 0x1b6798: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b6798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b679c:
    // 0x1b679c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b679cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b67a0:
    // 0x1b67a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b67a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b67a4:
    // 0x1b67a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1b67a8:
    if (ctx->pc == 0x1B67A8u) {
        ctx->pc = 0x1B67A8u;
            // 0x1b67a8: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->pc = 0x1B67ACu;
        goto label_1b67ac;
    }
    ctx->pc = 0x1B67A4u;
    {
        const bool branch_taken_0x1b67a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B67A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67A4u;
            // 0x1b67a8: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67a4) {
            ctx->pc = 0x1B67B8u;
            goto label_1b67b8;
        }
    }
    ctx->pc = 0x1B67ACu;
label_1b67ac:
    // 0x1b67ac: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1b67acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1b67b0:
    // 0x1b67b0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1b67b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1b67b4:
    // 0x1b67b4: 0x0  nop
    ctx->pc = 0x1b67b4u;
    // NOP
label_1b67b8:
    // 0x1b67b8: 0xc065d00  jal         func_197400
label_1b67bc:
    if (ctx->pc == 0x1B67BCu) {
        ctx->pc = 0x1B67C0u;
        goto label_1b67c0;
    }
    ctx->pc = 0x1B67B8u;
    SET_GPR_U32(ctx, 31, 0x1B67C0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67C0u; }
        if (ctx->pc != 0x1B67C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67C0u; }
        if (ctx->pc != 0x1B67C0u) { return; }
    }
    ctx->pc = 0x1B67C0u;
label_1b67c0:
    // 0x1b67c0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b67c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b67c4:
    // 0x1b67c4: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_1b67c8:
    if (ctx->pc == 0x1B67C8u) {
        ctx->pc = 0x1B67CCu;
        goto label_1b67cc;
    }
    ctx->pc = 0x1B67C4u;
    {
        const bool branch_taken_0x1b67c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b67c4) {
            ctx->pc = 0x1B6850u;
            goto label_1b6850;
        }
    }
    ctx->pc = 0x1B67CCu;
label_1b67cc:
    // 0x1b67cc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b67ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b67d0:
    // 0x1b67d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b67d4:
    // 0x1b67d4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b67d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b67d8:
    // 0x1b67d8: 0x0  nop
    ctx->pc = 0x1b67d8u;
    // NOP
label_1b67dc:
    // 0x1b67dc: 0x0  nop
    ctx->pc = 0x1b67dcu;
    // NOP
label_1b67e0:
    // 0x1b67e0: 0x1010  mfhi        $v0
    ctx->pc = 0x1b67e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b67e4:
    // 0x1b67e4: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_1b67e8:
    if (ctx->pc == 0x1B67E8u) {
        ctx->pc = 0x1B67ECu;
        goto label_1b67ec;
    }
    ctx->pc = 0x1B67E4u;
    {
        const bool branch_taken_0x1b67e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b67e4) {
            ctx->pc = 0x1B6968u;
            goto label_1b6968;
        }
    }
    ctx->pc = 0x1B67ECu;
label_1b67ec:
    // 0x1b67ec: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b67ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b67f0:
    // 0x1b67f0: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1b67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1b67f4:
    // 0x1b67f4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b67f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b67f8:
    // 0x1b67f8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b67f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b67fc:
    // 0x1b67fc: 0xc05d080  jal         func_174200
label_1b6800:
    if (ctx->pc == 0x1B6800u) {
        ctx->pc = 0x1B6800u;
            // 0x1b6800: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B6804u;
        goto label_1b6804;
    }
    ctx->pc = 0x1B67FCu;
    SET_GPR_U32(ctx, 31, 0x1B6804u);
    ctx->pc = 0x1B6800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67FCu;
            // 0x1b6800: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6804u; }
        if (ctx->pc != 0x1B6804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6804u; }
        if (ctx->pc != 0x1B6804u) { return; }
    }
    ctx->pc = 0x1B6804u;
label_1b6804:
    // 0x1b6804: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b6804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6808:
    // 0x1b6808: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b6808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b680c:
    // 0x1b680c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b6810:
    // 0x1b6810: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b6810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6814:
    // 0x1b6814: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1b6814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_1b6818:
    // 0x1b6818: 0xc065508  jal         func_195420
label_1b681c:
    if (ctx->pc == 0x1B681Cu) {
        ctx->pc = 0x1B681Cu;
            // 0x1b681c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6820u;
        goto label_1b6820;
    }
    ctx->pc = 0x1B6818u;
    SET_GPR_U32(ctx, 31, 0x1B6820u);
    ctx->pc = 0x1B681Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6818u;
            // 0x1b681c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6820u; }
        if (ctx->pc != 0x1B6820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6820u; }
        if (ctx->pc != 0x1B6820u) { return; }
    }
    ctx->pc = 0x1B6820u;
label_1b6820:
    // 0x1b6820: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1b6820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6824:
    // 0x1b6824: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b6824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b6828:
    // 0x1b6828: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b6828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b682c:
    // 0x1b682c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b6830:
    // 0x1b6830: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b6830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6834:
    // 0x1b6834: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b6834u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b6838:
    // 0x1b6838: 0xc065508  jal         func_195420
label_1b683c:
    if (ctx->pc == 0x1B683Cu) {
        ctx->pc = 0x1B683Cu;
            // 0x1b683c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6840u;
        goto label_1b6840;
    }
    ctx->pc = 0x1B6838u;
    SET_GPR_U32(ctx, 31, 0x1B6840u);
    ctx->pc = 0x1B683Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6838u;
            // 0x1b683c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6840u; }
        if (ctx->pc != 0x1B6840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6840u; }
        if (ctx->pc != 0x1B6840u) { return; }
    }
    ctx->pc = 0x1B6840u;
label_1b6840:
    // 0x1b6840: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b6840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b6844:
    // 0x1b6844: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b6848:
    // 0x1b6848: 0x10000047  b           . + 4 + (0x47 << 2)
label_1b684c:
    if (ctx->pc == 0x1B684Cu) {
        ctx->pc = 0x1B684Cu;
            // 0x1b684c: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->pc = 0x1B6850u;
        goto label_1b6850;
    }
    ctx->pc = 0x1B6848u;
    {
        const bool branch_taken_0x1b6848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B684Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6848u;
            // 0x1b684c: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6848) {
            ctx->pc = 0x1B6968u;
            goto label_1b6968;
        }
    }
    ctx->pc = 0x1B6850u;
label_1b6850:
    // 0x1b6850: 0xc065d00  jal         func_197400
label_1b6854:
    if (ctx->pc == 0x1B6854u) {
        ctx->pc = 0x1B6858u;
        goto label_1b6858;
    }
    ctx->pc = 0x1B6850u;
    SET_GPR_U32(ctx, 31, 0x1B6858u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6858u; }
        if (ctx->pc != 0x1B6858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6858u; }
        if (ctx->pc != 0x1B6858u) { return; }
    }
    ctx->pc = 0x1B6858u;
label_1b6858:
    // 0x1b6858: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_1b685c:
    if (ctx->pc == 0x1B685Cu) {
        ctx->pc = 0x1B6860u;
        goto label_1b6860;
    }
    ctx->pc = 0x1B6858u;
    {
        const bool branch_taken_0x1b6858 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b6858) {
            ctx->pc = 0x1B68E8u;
            goto label_1b68e8;
        }
    }
    ctx->pc = 0x1B6860u;
label_1b6860:
    // 0x1b6860: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b6860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6864:
    // 0x1b6864: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1b6868:
    if (ctx->pc == 0x1B6868u) {
        ctx->pc = 0x1B6868u;
            // 0x1b6868: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->pc = 0x1B686Cu;
        goto label_1b686c;
    }
    ctx->pc = 0x1B6864u;
    {
        const bool branch_taken_0x1b6864 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B6868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6864u;
            // 0x1b6868: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6864) {
            ctx->pc = 0x1B6878u;
            goto label_1b6878;
        }
    }
    ctx->pc = 0x1B686Cu;
label_1b686c:
    // 0x1b686c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b6870:
    if (ctx->pc == 0x1B6870u) {
        ctx->pc = 0x1B6874u;
        goto label_1b6874;
    }
    ctx->pc = 0x1B686Cu;
    {
        const bool branch_taken_0x1b686c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b686c) {
            ctx->pc = 0x1B6878u;
            goto label_1b6878;
        }
    }
    ctx->pc = 0x1B6874u;
label_1b6874:
    // 0x1b6874: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b6874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1b6878:
    // 0x1b6878: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_1b687c:
    if (ctx->pc == 0x1B687Cu) {
        ctx->pc = 0x1B6880u;
        goto label_1b6880;
    }
    ctx->pc = 0x1B6878u;
    {
        const bool branch_taken_0x1b6878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6878) {
            ctx->pc = 0x1B6968u;
            goto label_1b6968;
        }
    }
    ctx->pc = 0x1B6880u;
label_1b6880:
    // 0x1b6880: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b6880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6884:
    // 0x1b6884: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1b6884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1b6888:
    // 0x1b6888: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b6888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b688c:
    // 0x1b688c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b688cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b6890:
    // 0x1b6890: 0xc05d080  jal         func_174200
label_1b6894:
    if (ctx->pc == 0x1B6894u) {
        ctx->pc = 0x1B6894u;
            // 0x1b6894: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B6898u;
        goto label_1b6898;
    }
    ctx->pc = 0x1B6890u;
    SET_GPR_U32(ctx, 31, 0x1B6898u);
    ctx->pc = 0x1B6894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6890u;
            // 0x1b6894: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6898u; }
        if (ctx->pc != 0x1B6898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6898u; }
        if (ctx->pc != 0x1B6898u) { return; }
    }
    ctx->pc = 0x1B6898u;
label_1b6898:
    // 0x1b6898: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b6898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b689c:
    // 0x1b689c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b68a0:
    // 0x1b68a0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b68a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b68a4:
    // 0x1b68a4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b68a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b68a8:
    // 0x1b68a8: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1b68a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_1b68ac:
    // 0x1b68ac: 0xc065508  jal         func_195420
label_1b68b0:
    if (ctx->pc == 0x1B68B0u) {
        ctx->pc = 0x1B68B0u;
            // 0x1b68b0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B68B4u;
        goto label_1b68b4;
    }
    ctx->pc = 0x1B68ACu;
    SET_GPR_U32(ctx, 31, 0x1B68B4u);
    ctx->pc = 0x1B68B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B68ACu;
            // 0x1b68b0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68B4u; }
        if (ctx->pc != 0x1B68B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68B4u; }
        if (ctx->pc != 0x1B68B4u) { return; }
    }
    ctx->pc = 0x1B68B4u;
label_1b68b4:
    // 0x1b68b4: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1b68b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b68b8:
    // 0x1b68b8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b68b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b68bc:
    // 0x1b68bc: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b68bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b68c0:
    // 0x1b68c0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b68c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b68c4:
    // 0x1b68c4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b68c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b68c8:
    // 0x1b68c8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b68c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b68cc:
    // 0x1b68cc: 0xc065508  jal         func_195420
label_1b68d0:
    if (ctx->pc == 0x1B68D0u) {
        ctx->pc = 0x1B68D0u;
            // 0x1b68d0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B68D4u;
        goto label_1b68d4;
    }
    ctx->pc = 0x1B68CCu;
    SET_GPR_U32(ctx, 31, 0x1B68D4u);
    ctx->pc = 0x1B68D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B68CCu;
            // 0x1b68d0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68D4u; }
        if (ctx->pc != 0x1B68D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68D4u; }
        if (ctx->pc != 0x1B68D4u) { return; }
    }
    ctx->pc = 0x1B68D4u;
label_1b68d4:
    // 0x1b68d4: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b68d8:
    // 0x1b68d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b68d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b68dc:
    // 0x1b68dc: 0x10000022  b           . + 4 + (0x22 << 2)
label_1b68e0:
    if (ctx->pc == 0x1B68E0u) {
        ctx->pc = 0x1B68E0u;
            // 0x1b68e0: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->pc = 0x1B68E4u;
        goto label_1b68e4;
    }
    ctx->pc = 0x1B68DCu;
    {
        const bool branch_taken_0x1b68dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B68E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B68DCu;
            // 0x1b68e0: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68dc) {
            ctx->pc = 0x1B6968u;
            goto label_1b6968;
        }
    }
    ctx->pc = 0x1B68E4u;
label_1b68e4:
    // 0x1b68e4: 0x0  nop
    ctx->pc = 0x1b68e4u;
    // NOP
label_1b68e8:
    // 0x1b68e8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b68e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b68ec:
    // 0x1b68ec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b68ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b68f0:
    // 0x1b68f0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b68f0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b68f4:
    // 0x1b68f4: 0x0  nop
    ctx->pc = 0x1b68f4u;
    // NOP
label_1b68f8:
    // 0x1b68f8: 0x0  nop
    ctx->pc = 0x1b68f8u;
    // NOP
label_1b68fc:
    // 0x1b68fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1b68fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6900:
    // 0x1b6900: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1b6904:
    if (ctx->pc == 0x1B6904u) {
        ctx->pc = 0x1B6908u;
        goto label_1b6908;
    }
    ctx->pc = 0x1B6900u;
    {
        const bool branch_taken_0x1b6900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6900) {
            ctx->pc = 0x1B6968u;
            goto label_1b6968;
        }
    }
    ctx->pc = 0x1B6908u;
label_1b6908:
    // 0x1b6908: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b6908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b690c:
    // 0x1b690c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1b690cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1b6910:
    // 0x1b6910: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b6910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6914:
    // 0x1b6914: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b6914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b6918:
    // 0x1b6918: 0xc05d080  jal         func_174200
label_1b691c:
    if (ctx->pc == 0x1B691Cu) {
        ctx->pc = 0x1B691Cu;
            // 0x1b691c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B6920u;
        goto label_1b6920;
    }
    ctx->pc = 0x1B6918u;
    SET_GPR_U32(ctx, 31, 0x1B6920u);
    ctx->pc = 0x1B691Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6918u;
            // 0x1b691c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6920u; }
        if (ctx->pc != 0x1B6920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6920u; }
        if (ctx->pc != 0x1B6920u) { return; }
    }
    ctx->pc = 0x1B6920u;
label_1b6920:
    // 0x1b6920: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b6920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6924:
    // 0x1b6924: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b6924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b6928:
    // 0x1b6928: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b6928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b692c:
    // 0x1b692c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b692cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6930:
    // 0x1b6930: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1b6930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_1b6934:
    // 0x1b6934: 0xc065508  jal         func_195420
label_1b6938:
    if (ctx->pc == 0x1B6938u) {
        ctx->pc = 0x1B6938u;
            // 0x1b6938: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B693Cu;
        goto label_1b693c;
    }
    ctx->pc = 0x1B6934u;
    SET_GPR_U32(ctx, 31, 0x1B693Cu);
    ctx->pc = 0x1B6938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6934u;
            // 0x1b6938: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B693Cu; }
        if (ctx->pc != 0x1B693Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B693Cu; }
        if (ctx->pc != 0x1B693Cu) { return; }
    }
    ctx->pc = 0x1B693Cu;
label_1b693c:
    // 0x1b693c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1b693cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6940:
    // 0x1b6940: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b6940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b6944:
    // 0x1b6944: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b6944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b6948:
    // 0x1b6948: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b6948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b694c:
    // 0x1b694c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b694cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6950:
    // 0x1b6950: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b6950u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b6954:
    // 0x1b6954: 0xc065508  jal         func_195420
label_1b6958:
    if (ctx->pc == 0x1B6958u) {
        ctx->pc = 0x1B6958u;
            // 0x1b6958: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B695Cu;
        goto label_1b695c;
    }
    ctx->pc = 0x1B6954u;
    SET_GPR_U32(ctx, 31, 0x1B695Cu);
    ctx->pc = 0x1B6958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6954u;
            // 0x1b6958: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B695Cu; }
        if (ctx->pc != 0x1B695Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B695Cu; }
        if (ctx->pc != 0x1B695Cu) { return; }
    }
    ctx->pc = 0x1B695Cu;
label_1b695c:
    // 0x1b695c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1b695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1b6960:
    // 0x1b6960: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b6964:
    // 0x1b6964: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x1b6964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_1b6968:
    // 0x1b6968: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b6968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b696c:
    // 0x1b696c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1b696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b6970:
    // 0x1b6970: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1b6974:
    if (ctx->pc == 0x1B6974u) {
        ctx->pc = 0x1B6974u;
            // 0x1b6974: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1B6978u;
        goto label_1b6978;
    }
    ctx->pc = 0x1B6970u;
    {
        const bool branch_taken_0x1b6970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B6974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6970u;
            // 0x1b6974: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6970) {
            ctx->pc = 0x1B69D8u;
            goto label_1b69d8;
        }
    }
    ctx->pc = 0x1B6978u;
label_1b6978:
    // 0x1b6978: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1b697c:
    if (ctx->pc == 0x1B697Cu) {
        ctx->pc = 0x1B6980u;
        goto label_1b6980;
    }
    ctx->pc = 0x1B6978u;
    {
        const bool branch_taken_0x1b6978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b6978) {
            ctx->pc = 0x1B69B0u;
            goto label_1b69b0;
        }
    }
    ctx->pc = 0x1B6980u;
label_1b6980:
    // 0x1b6980: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b6980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6984:
    // 0x1b6984: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1b6988:
    if (ctx->pc == 0x1B6988u) {
        ctx->pc = 0x1B698Cu;
        goto label_1b698c;
    }
    ctx->pc = 0x1B6984u;
    {
        const bool branch_taken_0x1b6984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b6984) {
            ctx->pc = 0x1B6998u;
            goto label_1b6998;
        }
    }
    ctx->pc = 0x1B698Cu;
label_1b698c:
    // 0x1b698c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1b6990:
    if (ctx->pc == 0x1B6990u) {
        ctx->pc = 0x1B6994u;
        goto label_1b6994;
    }
    ctx->pc = 0x1B698Cu;
    {
        const bool branch_taken_0x1b698c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b698c) {
            ctx->pc = 0x1B69F8u;
            goto label_1b69f8;
        }
    }
    ctx->pc = 0x1B6994u;
label_1b6994:
    // 0x1b6994: 0x0  nop
    ctx->pc = 0x1b6994u;
    // NOP
label_1b6998:
    // 0x1b6998: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b6998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b699c:
    // 0x1b699c: 0xc06560c  jal         func_195830
label_1b69a0:
    if (ctx->pc == 0x1B69A0u) {
        ctx->pc = 0x1B69A0u;
            // 0x1b69a0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B69A4u;
        goto label_1b69a4;
    }
    ctx->pc = 0x1B699Cu;
    SET_GPR_U32(ctx, 31, 0x1B69A4u);
    ctx->pc = 0x1B69A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B699Cu;
            // 0x1b69a0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69A4u; }
        if (ctx->pc != 0x1B69A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69A4u; }
        if (ctx->pc != 0x1B69A4u) { return; }
    }
    ctx->pc = 0x1B69A4u;
label_1b69a4:
    // 0x1b69a4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1b69a8:
    if (ctx->pc == 0x1B69A8u) {
        ctx->pc = 0x1B69ACu;
        goto label_1b69ac;
    }
    ctx->pc = 0x1B69A4u;
    {
        const bool branch_taken_0x1b69a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b69a4) {
            ctx->pc = 0x1B69F8u;
            goto label_1b69f8;
        }
    }
    ctx->pc = 0x1B69ACu;
label_1b69ac:
    // 0x1b69ac: 0x0  nop
    ctx->pc = 0x1b69acu;
    // NOP
label_1b69b0:
    // 0x1b69b0: 0xc065d00  jal         func_197400
label_1b69b4:
    if (ctx->pc == 0x1B69B4u) {
        ctx->pc = 0x1B69B8u;
        goto label_1b69b8;
    }
    ctx->pc = 0x1B69B0u;
    SET_GPR_U32(ctx, 31, 0x1B69B8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69B8u; }
        if (ctx->pc != 0x1B69B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69B8u; }
        if (ctx->pc != 0x1B69B8u) { return; }
    }
    ctx->pc = 0x1B69B8u;
label_1b69b8:
    // 0x1b69b8: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_1b69bc:
    if (ctx->pc == 0x1B69BCu) {
        ctx->pc = 0x1B69C0u;
        goto label_1b69c0;
    }
    ctx->pc = 0x1B69B8u;
    {
        const bool branch_taken_0x1b69b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b69b8) {
            ctx->pc = 0x1B69F8u;
            goto label_1b69f8;
        }
    }
    ctx->pc = 0x1B69C0u;
label_1b69c0:
    // 0x1b69c0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b69c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b69c4:
    // 0x1b69c4: 0xc06560c  jal         func_195830
label_1b69c8:
    if (ctx->pc == 0x1B69C8u) {
        ctx->pc = 0x1B69C8u;
            // 0x1b69c8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B69CCu;
        goto label_1b69cc;
    }
    ctx->pc = 0x1B69C4u;
    SET_GPR_U32(ctx, 31, 0x1B69CCu);
    ctx->pc = 0x1B69C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B69C4u;
            // 0x1b69c8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69CCu; }
        if (ctx->pc != 0x1B69CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69CCu; }
        if (ctx->pc != 0x1B69CCu) { return; }
    }
    ctx->pc = 0x1B69CCu;
label_1b69cc:
    // 0x1b69cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b69d0:
    if (ctx->pc == 0x1B69D0u) {
        ctx->pc = 0x1B69D4u;
        goto label_1b69d4;
    }
    ctx->pc = 0x1B69CCu;
    {
        const bool branch_taken_0x1b69cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b69cc) {
            ctx->pc = 0x1B69F8u;
            goto label_1b69f8;
        }
    }
    ctx->pc = 0x1B69D4u;
label_1b69d4:
    // 0x1b69d4: 0x0  nop
    ctx->pc = 0x1b69d4u;
    // NOP
label_1b69d8:
    // 0x1b69d8: 0xc065d00  jal         func_197400
label_1b69dc:
    if (ctx->pc == 0x1B69DCu) {
        ctx->pc = 0x1B69E0u;
        goto label_1b69e0;
    }
    ctx->pc = 0x1B69D8u;
    SET_GPR_U32(ctx, 31, 0x1B69E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69E0u; }
        if (ctx->pc != 0x1B69E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69E0u; }
        if (ctx->pc != 0x1B69E0u) { return; }
    }
    ctx->pc = 0x1B69E0u;
label_1b69e0:
    // 0x1b69e0: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1b69e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b69e4:
    // 0x1b69e4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1b69e8:
    if (ctx->pc == 0x1B69E8u) {
        ctx->pc = 0x1B69ECu;
        goto label_1b69ec;
    }
    ctx->pc = 0x1B69E4u;
    {
        const bool branch_taken_0x1b69e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b69e4) {
            ctx->pc = 0x1B69F8u;
            goto label_1b69f8;
        }
    }
    ctx->pc = 0x1B69ECu;
label_1b69ec:
    // 0x1b69ec: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b69ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b69f0:
    // 0x1b69f0: 0xc06560c  jal         func_195830
label_1b69f4:
    if (ctx->pc == 0x1B69F4u) {
        ctx->pc = 0x1B69F4u;
            // 0x1b69f4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B69F8u;
        goto label_1b69f8;
    }
    ctx->pc = 0x1B69F0u;
    SET_GPR_U32(ctx, 31, 0x1B69F8u);
    ctx->pc = 0x1B69F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B69F0u;
            // 0x1b69f4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69F8u; }
        if (ctx->pc != 0x1B69F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69F8u; }
        if (ctx->pc != 0x1B69F8u) { return; }
    }
    ctx->pc = 0x1B69F8u;
label_1b69f8:
    // 0x1b69f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b69fc:
    // 0x1b69fc: 0x28410079  slti        $at, $v0, 0x79
    ctx->pc = 0x1b69fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
label_1b6a00:
    // 0x1b6a00: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
label_1b6a04:
    if (ctx->pc == 0x1B6A04u) {
        ctx->pc = 0x1B6A04u;
            // 0x1b6a04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B6A08u;
        goto label_1b6a08;
    }
    ctx->pc = 0x1B6A00u;
    {
        const bool branch_taken_0x1b6a00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A00u;
            // 0x1b6a04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a00) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B6A08u;
label_1b6a08:
    // 0x1b6a08: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b6a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b6a0c:
    // 0x1b6a0c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b6a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b6a10:
    // 0x1b6a10: 0xc065590  jal         func_195640
label_1b6a14:
    if (ctx->pc == 0x1B6A14u) {
        ctx->pc = 0x1B6A14u;
            // 0x1b6a14: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B6A18u;
        goto label_1b6a18;
    }
    ctx->pc = 0x1B6A10u;
    SET_GPR_U32(ctx, 31, 0x1B6A18u);
    ctx->pc = 0x1B6A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A10u;
            // 0x1b6a14: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A18u; }
        if (ctx->pc != 0x1B6A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A18u; }
        if (ctx->pc != 0x1B6A18u) { return; }
    }
    ctx->pc = 0x1B6A18u;
label_1b6a18:
    // 0x1b6a18: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b6a1c:
    if (ctx->pc == 0x1B6A1Cu) {
        ctx->pc = 0x1B6A20u;
        goto label_1b6a20;
    }
    ctx->pc = 0x1B6A18u;
    {
        const bool branch_taken_0x1b6a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a18) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B6A20u;
label_1b6a20:
    // 0x1b6a20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b6a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b6a24:
    // 0x1b6a24: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_1b6a28:
    if (ctx->pc == 0x1B6A28u) {
        ctx->pc = 0x1B6A2Cu;
        goto label_1b6a2c;
    }
    ctx->pc = 0x1B6A24u;
    {
        const bool branch_taken_0x1b6a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b6a24) {
            ctx->pc = 0x1B6A58u;
            goto label_1b6a58;
        }
    }
    ctx->pc = 0x1B6A2Cu;
label_1b6a2c:
    // 0x1b6a2c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b6a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6a30:
    // 0x1b6a30: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b6a34:
    // 0x1b6a34: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b6a34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b6a38:
    // 0x1b6a38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b6a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b6a3c:
    // 0x1b6a3c: 0x0  nop
    ctx->pc = 0x1b6a3cu;
    // NOP
label_1b6a40:
    // 0x1b6a40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b6a40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b6a44:
    // 0x1b6a44: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b6a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b6a48:
    // 0x1b6a48: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b6a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6a4c:
    // 0x1b6a4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b6a4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b6a50:
    // 0x1b6a50: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b6a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b6a54:
    // 0x1b6a54: 0x0  nop
    ctx->pc = 0x1b6a54u;
    // NOP
label_1b6a58:
    // 0x1b6a58: 0xc04b788  jal         func_12DE20
label_1b6a5c:
    if (ctx->pc == 0x1B6A5Cu) {
        ctx->pc = 0x1B6A5Cu;
            // 0x1b6a5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B6A60u;
        goto label_1b6a60;
    }
    ctx->pc = 0x1B6A58u;
    SET_GPR_U32(ctx, 31, 0x1B6A60u);
    ctx->pc = 0x1B6A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A58u;
            // 0x1b6a5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A60u; }
        if (ctx->pc != 0x1B6A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A60u; }
        if (ctx->pc != 0x1B6A60u) { return; }
    }
    ctx->pc = 0x1B6A60u;
label_1b6a60:
    // 0x1b6a60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6a64:
    // 0x1b6a64: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1b6a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b6a68:
    // 0x1b6a68: 0xc04b7da  jal         func_12DF68
label_1b6a6c:
    if (ctx->pc == 0x1B6A6Cu) {
        ctx->pc = 0x1B6A6Cu;
            // 0x1b6a6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A70u;
        goto label_1b6a70;
    }
    ctx->pc = 0x1B6A68u;
    SET_GPR_U32(ctx, 31, 0x1B6A70u);
    ctx->pc = 0x1B6A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A68u;
            // 0x1b6a6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A70u; }
        if (ctx->pc != 0x1B6A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A70u; }
        if (ctx->pc != 0x1B6A70u) { return; }
    }
    ctx->pc = 0x1B6A70u;
label_1b6a70:
    // 0x1b6a70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6a74:
    // 0x1b6a74: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1b6a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b6a78:
    // 0x1b6a78: 0xc04b804  jal         func_12E010
label_1b6a7c:
    if (ctx->pc == 0x1B6A7Cu) {
        ctx->pc = 0x1B6A7Cu;
            // 0x1b6a7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A80u;
        goto label_1b6a80;
    }
    ctx->pc = 0x1B6A78u;
    SET_GPR_U32(ctx, 31, 0x1B6A80u);
    ctx->pc = 0x1B6A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A78u;
            // 0x1b6a7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A80u; }
        if (ctx->pc != 0x1B6A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A80u; }
        if (ctx->pc != 0x1B6A80u) { return; }
    }
    ctx->pc = 0x1B6A80u;
label_1b6a80:
    // 0x1b6a80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b6a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6a84:
    // 0x1b6a84: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1b6a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b6a88:
    // 0x1b6a88: 0xc04b7b0  jal         func_12DEC0
label_1b6a8c:
    if (ctx->pc == 0x1B6A8Cu) {
        ctx->pc = 0x1B6A8Cu;
            // 0x1b6a8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A90u;
        goto label_1b6a90;
    }
    ctx->pc = 0x1B6A88u;
    SET_GPR_U32(ctx, 31, 0x1B6A90u);
    ctx->pc = 0x1B6A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A88u;
            // 0x1b6a8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A90u; }
        if (ctx->pc != 0x1B6A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A90u; }
        if (ctx->pc != 0x1B6A90u) { return; }
    }
    ctx->pc = 0x1B6A90u;
label_1b6a90:
    // 0x1b6a90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b6a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6a94:
    // 0x1b6a94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b6a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6a98:
    // 0x1b6a98: 0xc04b75e  jal         func_12DD78
label_1b6a9c:
    if (ctx->pc == 0x1B6A9Cu) {
        ctx->pc = 0x1B6A9Cu;
            // 0x1b6a9c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1B6AA0u;
        goto label_1b6aa0;
    }
    ctx->pc = 0x1B6A98u;
    SET_GPR_U32(ctx, 31, 0x1B6AA0u);
    ctx->pc = 0x1B6A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A98u;
            // 0x1b6a9c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AA0u; }
        if (ctx->pc != 0x1B6AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AA0u; }
        if (ctx->pc != 0x1B6AA0u) { return; }
    }
    ctx->pc = 0x1B6AA0u;
label_1b6aa0:
    // 0x1b6aa0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b6aa4:
    // 0x1b6aa4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b6aa8:
    // 0x1b6aa8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1b6aa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b6aac:
    // 0x1b6aac: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1b6ab0:
    if (ctx->pc == 0x1B6AB0u) {
        ctx->pc = 0x1B6AB4u;
        goto label_1b6ab4;
    }
    ctx->pc = 0x1B6AACu;
    {
        const bool branch_taken_0x1b6aac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6aac) {
            ctx->pc = 0x1B6B00u;
            goto label_1b6b00;
        }
    }
    ctx->pc = 0x1B6AB4u;
label_1b6ab4:
    // 0x1b6ab4: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1b6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1b6ab8:
    // 0x1b6ab8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b6abc:
    if (ctx->pc == 0x1B6ABCu) {
        ctx->pc = 0x1B6AC0u;
        goto label_1b6ac0;
    }
    ctx->pc = 0x1B6AB8u;
    {
        const bool branch_taken_0x1b6ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ab8) {
            ctx->pc = 0x1B6AD0u;
            goto label_1b6ad0;
        }
    }
    ctx->pc = 0x1B6AC0u;
label_1b6ac0:
    // 0x1b6ac0: 0xc0604f0  jal         func_1813C0
label_1b6ac4:
    if (ctx->pc == 0x1B6AC4u) {
        ctx->pc = 0x1B6AC4u;
            // 0x1b6ac4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B6AC8u;
        goto label_1b6ac8;
    }
    ctx->pc = 0x1B6AC0u;
    SET_GPR_U32(ctx, 31, 0x1B6AC8u);
    ctx->pc = 0x1B6AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6AC0u;
            // 0x1b6ac4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AC8u; }
        if (ctx->pc != 0x1B6AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AC8u; }
        if (ctx->pc != 0x1B6AC8u) { return; }
    }
    ctx->pc = 0x1B6AC8u;
label_1b6ac8:
    // 0x1b6ac8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b6acc:
    if (ctx->pc == 0x1B6ACCu) {
        ctx->pc = 0x1B6AD0u;
        goto label_1b6ad0;
    }
    ctx->pc = 0x1B6AC8u;
    {
        const bool branch_taken_0x1b6ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ac8) {
            ctx->pc = 0x1B6AD8u;
            goto label_1b6ad8;
        }
    }
    ctx->pc = 0x1B6AD0u;
label_1b6ad0:
    // 0x1b6ad0: 0xc0604dc  jal         func_181370
label_1b6ad4:
    if (ctx->pc == 0x1B6AD4u) {
        ctx->pc = 0x1B6AD4u;
            // 0x1b6ad4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B6AD8u;
        goto label_1b6ad8;
    }
    ctx->pc = 0x1B6AD0u;
    SET_GPR_U32(ctx, 31, 0x1B6AD8u);
    ctx->pc = 0x1B6AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6AD0u;
            // 0x1b6ad4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AD8u; }
        if (ctx->pc != 0x1B6AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AD8u; }
        if (ctx->pc != 0x1B6AD8u) { return; }
    }
    ctx->pc = 0x1B6AD8u;
label_1b6ad8:
    // 0x1b6ad8: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1b6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1b6adc:
    // 0x1b6adc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b6ae0:
    if (ctx->pc == 0x1B6AE0u) {
        ctx->pc = 0x1B6AE4u;
        goto label_1b6ae4;
    }
    ctx->pc = 0x1B6ADCu;
    {
        const bool branch_taken_0x1b6adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6adc) {
            ctx->pc = 0x1B6AF0u;
            goto label_1b6af0;
        }
    }
    ctx->pc = 0x1B6AE4u;
label_1b6ae4:
    // 0x1b6ae4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b6ae8:
    if (ctx->pc == 0x1B6AE8u) {
        ctx->pc = 0x1B6AE8u;
            // 0x1b6ae8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1B6AECu;
        goto label_1b6aec;
    }
    ctx->pc = 0x1B6AE4u;
    {
        const bool branch_taken_0x1b6ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6AE4u;
            // 0x1b6ae8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ae4) {
            ctx->pc = 0x1B6B10u;
            goto label_1b6b10;
        }
    }
    ctx->pc = 0x1B6AECu;
label_1b6aec:
    // 0x1b6aec: 0x0  nop
    ctx->pc = 0x1b6aecu;
    // NOP
label_1b6af0:
    // 0x1b6af0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6af4:
    // 0x1b6af4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b6af8:
    if (ctx->pc == 0x1B6AF8u) {
        ctx->pc = 0x1B6AF8u;
            // 0x1b6af8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1B6AFCu;
        goto label_1b6afc;
    }
    ctx->pc = 0x1B6AF4u;
    {
        const bool branch_taken_0x1b6af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6AF4u;
            // 0x1b6af8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6af4) {
            ctx->pc = 0x1B6B10u;
            goto label_1b6b10;
        }
    }
    ctx->pc = 0x1B6AFCu;
label_1b6afc:
    // 0x1b6afc: 0x0  nop
    ctx->pc = 0x1b6afcu;
    // NOP
label_1b6b00:
    // 0x1b6b00: 0xc0604dc  jal         func_181370
label_1b6b04:
    if (ctx->pc == 0x1B6B04u) {
        ctx->pc = 0x1B6B04u;
            // 0x1b6b04: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B6B08u;
        goto label_1b6b08;
    }
    ctx->pc = 0x1B6B00u;
    SET_GPR_U32(ctx, 31, 0x1B6B08u);
    ctx->pc = 0x1B6B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B00u;
            // 0x1b6b04: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B08u; }
        if (ctx->pc != 0x1B6B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B08u; }
        if (ctx->pc != 0x1B6B08u) { return; }
    }
    ctx->pc = 0x1B6B08u;
label_1b6b08:
    // 0x1b6b08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6b0c:
    // 0x1b6b0c: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1b6b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1b6b10:
    // 0x1b6b10: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b6b14:
    // 0x1b6b14: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1b6b18:
    // 0x1b6b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6b1c:
    // 0x1b6b1c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1b6b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1b6b20:
    // 0x1b6b20: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b6b24:
    // 0x1b6b24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b6b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b6b28:
    // 0x1b6b28: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1b6b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1b6b2c:
    // 0x1b6b2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6b30:
    // 0x1b6b30: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b6b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6b34:
    // 0x1b6b34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6b38:
    // 0x1b6b38: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b6b3c:
    if (ctx->pc == 0x1B6B3Cu) {
        ctx->pc = 0x1B6B3Cu;
            // 0x1b6b3c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1B6B40u;
        goto label_1b6b40;
    }
    ctx->pc = 0x1B6B38u;
    {
        const bool branch_taken_0x1b6b38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B38u;
            // 0x1b6b3c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b38) {
            ctx->pc = 0x1B6B58u;
            goto label_1b6b58;
        }
    }
    ctx->pc = 0x1B6B40u;
label_1b6b40:
    // 0x1b6b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6b44:
    // 0x1b6b44: 0x0  nop
    ctx->pc = 0x1b6b44u;
    // NOP
label_1b6b48:
    // 0x1b6b48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6b48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6b4c:
    // 0x1b6b4c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1b6b50:
    if (ctx->pc == 0x1B6B50u) {
        ctx->pc = 0x1B6B54u;
        goto label_1b6b54;
    }
    ctx->pc = 0x1B6B4Cu;
    {
        const bool branch_taken_0x1b6b4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6b4c) {
            ctx->pc = 0x1B6B70u;
            goto label_1b6b70;
        }
    }
    ctx->pc = 0x1B6B54u;
label_1b6b54:
    // 0x1b6b54: 0x0  nop
    ctx->pc = 0x1b6b54u;
    // NOP
label_1b6b58:
    // 0x1b6b58: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1b6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1b6b5c:
    // 0x1b6b5c: 0x40f809  jalr        $v0
label_1b6b60:
    if (ctx->pc == 0x1B6B60u) {
        ctx->pc = 0x1B6B60u;
            // 0x1b6b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B64u;
        goto label_1b6b64;
    }
    ctx->pc = 0x1B6B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B6B64u);
        ctx->pc = 0x1B6B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B5Cu;
            // 0x1b6b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5B60u: goto label_1b5b60;
            case 0x1B5B64u: goto label_1b5b64;
            case 0x1B5B68u: goto label_1b5b68;
            case 0x1B5B6Cu: goto label_1b5b6c;
            case 0x1B5B70u: goto label_1b5b70;
            case 0x1B5B74u: goto label_1b5b74;
            case 0x1B5B78u: goto label_1b5b78;
            case 0x1B5B7Cu: goto label_1b5b7c;
            case 0x1B5B80u: goto label_1b5b80;
            case 0x1B5B84u: goto label_1b5b84;
            case 0x1B5B88u: goto label_1b5b88;
            case 0x1B5B8Cu: goto label_1b5b8c;
            case 0x1B5B90u: goto label_1b5b90;
            case 0x1B5B94u: goto label_1b5b94;
            case 0x1B5B98u: goto label_1b5b98;
            case 0x1B5B9Cu: goto label_1b5b9c;
            case 0x1B5BA0u: goto label_1b5ba0;
            case 0x1B5BA4u: goto label_1b5ba4;
            case 0x1B5BA8u: goto label_1b5ba8;
            case 0x1B5BACu: goto label_1b5bac;
            case 0x1B5BB0u: goto label_1b5bb0;
            case 0x1B5BB4u: goto label_1b5bb4;
            case 0x1B5BB8u: goto label_1b5bb8;
            case 0x1B5BBCu: goto label_1b5bbc;
            case 0x1B5BC0u: goto label_1b5bc0;
            case 0x1B5BC4u: goto label_1b5bc4;
            case 0x1B5BC8u: goto label_1b5bc8;
            case 0x1B5BCCu: goto label_1b5bcc;
            case 0x1B5BD0u: goto label_1b5bd0;
            case 0x1B5BD4u: goto label_1b5bd4;
            case 0x1B5BD8u: goto label_1b5bd8;
            case 0x1B5BDCu: goto label_1b5bdc;
            case 0x1B5BE0u: goto label_1b5be0;
            case 0x1B5BE4u: goto label_1b5be4;
            case 0x1B5BE8u: goto label_1b5be8;
            case 0x1B5BECu: goto label_1b5bec;
            case 0x1B5BF0u: goto label_1b5bf0;
            case 0x1B5BF4u: goto label_1b5bf4;
            case 0x1B5BF8u: goto label_1b5bf8;
            case 0x1B5BFCu: goto label_1b5bfc;
            case 0x1B5C00u: goto label_1b5c00;
            case 0x1B5C04u: goto label_1b5c04;
            case 0x1B5C08u: goto label_1b5c08;
            case 0x1B5C0Cu: goto label_1b5c0c;
            case 0x1B5C10u: goto label_1b5c10;
            case 0x1B5C14u: goto label_1b5c14;
            case 0x1B5C18u: goto label_1b5c18;
            case 0x1B5C1Cu: goto label_1b5c1c;
            case 0x1B5C20u: goto label_1b5c20;
            case 0x1B5C24u: goto label_1b5c24;
            case 0x1B5C28u: goto label_1b5c28;
            case 0x1B5C2Cu: goto label_1b5c2c;
            case 0x1B5C30u: goto label_1b5c30;
            case 0x1B5C34u: goto label_1b5c34;
            case 0x1B5C38u: goto label_1b5c38;
            case 0x1B5C3Cu: goto label_1b5c3c;
            case 0x1B5C40u: goto label_1b5c40;
            case 0x1B5C44u: goto label_1b5c44;
            case 0x1B5C48u: goto label_1b5c48;
            case 0x1B5C4Cu: goto label_1b5c4c;
            case 0x1B5C50u: goto label_1b5c50;
            case 0x1B5C54u: goto label_1b5c54;
            case 0x1B5C58u: goto label_1b5c58;
            case 0x1B5C5Cu: goto label_1b5c5c;
            case 0x1B5C60u: goto label_1b5c60;
            case 0x1B5C64u: goto label_1b5c64;
            case 0x1B5C68u: goto label_1b5c68;
            case 0x1B5C6Cu: goto label_1b5c6c;
            case 0x1B5C70u: goto label_1b5c70;
            case 0x1B5C74u: goto label_1b5c74;
            case 0x1B5C78u: goto label_1b5c78;
            case 0x1B5C7Cu: goto label_1b5c7c;
            case 0x1B5C80u: goto label_1b5c80;
            case 0x1B5C84u: goto label_1b5c84;
            case 0x1B5C88u: goto label_1b5c88;
            case 0x1B5C8Cu: goto label_1b5c8c;
            case 0x1B5C90u: goto label_1b5c90;
            case 0x1B5C94u: goto label_1b5c94;
            case 0x1B5C98u: goto label_1b5c98;
            case 0x1B5C9Cu: goto label_1b5c9c;
            case 0x1B5CA0u: goto label_1b5ca0;
            case 0x1B5CA4u: goto label_1b5ca4;
            case 0x1B5CA8u: goto label_1b5ca8;
            case 0x1B5CACu: goto label_1b5cac;
            case 0x1B5CB0u: goto label_1b5cb0;
            case 0x1B5CB4u: goto label_1b5cb4;
            case 0x1B5CB8u: goto label_1b5cb8;
            case 0x1B5CBCu: goto label_1b5cbc;
            case 0x1B5CC0u: goto label_1b5cc0;
            case 0x1B5CC4u: goto label_1b5cc4;
            case 0x1B5CC8u: goto label_1b5cc8;
            case 0x1B5CCCu: goto label_1b5ccc;
            case 0x1B5CD0u: goto label_1b5cd0;
            case 0x1B5CD4u: goto label_1b5cd4;
            case 0x1B5CD8u: goto label_1b5cd8;
            case 0x1B5CDCu: goto label_1b5cdc;
            case 0x1B5CE0u: goto label_1b5ce0;
            case 0x1B5CE4u: goto label_1b5ce4;
            case 0x1B5CE8u: goto label_1b5ce8;
            case 0x1B5CECu: goto label_1b5cec;
            case 0x1B5CF0u: goto label_1b5cf0;
            case 0x1B5CF4u: goto label_1b5cf4;
            case 0x1B5CF8u: goto label_1b5cf8;
            case 0x1B5CFCu: goto label_1b5cfc;
            case 0x1B5D00u: goto label_1b5d00;
            case 0x1B5D04u: goto label_1b5d04;
            case 0x1B5D08u: goto label_1b5d08;
            case 0x1B5D0Cu: goto label_1b5d0c;
            case 0x1B5D10u: goto label_1b5d10;
            case 0x1B5D14u: goto label_1b5d14;
            case 0x1B5D18u: goto label_1b5d18;
            case 0x1B5D1Cu: goto label_1b5d1c;
            case 0x1B5D20u: goto label_1b5d20;
            case 0x1B5D24u: goto label_1b5d24;
            case 0x1B5D28u: goto label_1b5d28;
            case 0x1B5D2Cu: goto label_1b5d2c;
            case 0x1B5D30u: goto label_1b5d30;
            case 0x1B5D34u: goto label_1b5d34;
            case 0x1B5D38u: goto label_1b5d38;
            case 0x1B5D3Cu: goto label_1b5d3c;
            case 0x1B5D40u: goto label_1b5d40;
            case 0x1B5D44u: goto label_1b5d44;
            case 0x1B5D48u: goto label_1b5d48;
            case 0x1B5D4Cu: goto label_1b5d4c;
            case 0x1B5D50u: goto label_1b5d50;
            case 0x1B5D54u: goto label_1b5d54;
            case 0x1B5D58u: goto label_1b5d58;
            case 0x1B5D5Cu: goto label_1b5d5c;
            case 0x1B5D60u: goto label_1b5d60;
            case 0x1B5D64u: goto label_1b5d64;
            case 0x1B5D68u: goto label_1b5d68;
            case 0x1B5D6Cu: goto label_1b5d6c;
            case 0x1B5D70u: goto label_1b5d70;
            case 0x1B5D74u: goto label_1b5d74;
            case 0x1B5D78u: goto label_1b5d78;
            case 0x1B5D7Cu: goto label_1b5d7c;
            case 0x1B5D80u: goto label_1b5d80;
            case 0x1B5D84u: goto label_1b5d84;
            case 0x1B5D88u: goto label_1b5d88;
            case 0x1B5D8Cu: goto label_1b5d8c;
            case 0x1B5D90u: goto label_1b5d90;
            case 0x1B5D94u: goto label_1b5d94;
            case 0x1B5D98u: goto label_1b5d98;
            case 0x1B5D9Cu: goto label_1b5d9c;
            case 0x1B5DA0u: goto label_1b5da0;
            case 0x1B5DA4u: goto label_1b5da4;
            case 0x1B5DA8u: goto label_1b5da8;
            case 0x1B5DACu: goto label_1b5dac;
            case 0x1B5DB0u: goto label_1b5db0;
            case 0x1B5DB4u: goto label_1b5db4;
            case 0x1B5DB8u: goto label_1b5db8;
            case 0x1B5DBCu: goto label_1b5dbc;
            case 0x1B5DC0u: goto label_1b5dc0;
            case 0x1B5DC4u: goto label_1b5dc4;
            case 0x1B5DC8u: goto label_1b5dc8;
            case 0x1B5DCCu: goto label_1b5dcc;
            case 0x1B5DD0u: goto label_1b5dd0;
            case 0x1B5DD4u: goto label_1b5dd4;
            case 0x1B5DD8u: goto label_1b5dd8;
            case 0x1B5DDCu: goto label_1b5ddc;
            case 0x1B5DE0u: goto label_1b5de0;
            case 0x1B5DE4u: goto label_1b5de4;
            case 0x1B5DE8u: goto label_1b5de8;
            case 0x1B5DECu: goto label_1b5dec;
            case 0x1B5DF0u: goto label_1b5df0;
            case 0x1B5DF4u: goto label_1b5df4;
            case 0x1B5DF8u: goto label_1b5df8;
            case 0x1B5DFCu: goto label_1b5dfc;
            case 0x1B5E00u: goto label_1b5e00;
            case 0x1B5E04u: goto label_1b5e04;
            case 0x1B5E08u: goto label_1b5e08;
            case 0x1B5E0Cu: goto label_1b5e0c;
            case 0x1B5E10u: goto label_1b5e10;
            case 0x1B5E14u: goto label_1b5e14;
            case 0x1B5E18u: goto label_1b5e18;
            case 0x1B5E1Cu: goto label_1b5e1c;
            case 0x1B5E20u: goto label_1b5e20;
            case 0x1B5E24u: goto label_1b5e24;
            case 0x1B5E28u: goto label_1b5e28;
            case 0x1B5E2Cu: goto label_1b5e2c;
            case 0x1B5E30u: goto label_1b5e30;
            case 0x1B5E34u: goto label_1b5e34;
            case 0x1B5E38u: goto label_1b5e38;
            case 0x1B5E3Cu: goto label_1b5e3c;
            case 0x1B5E40u: goto label_1b5e40;
            case 0x1B5E44u: goto label_1b5e44;
            case 0x1B5E48u: goto label_1b5e48;
            case 0x1B5E4Cu: goto label_1b5e4c;
            case 0x1B5E50u: goto label_1b5e50;
            case 0x1B5E54u: goto label_1b5e54;
            case 0x1B5E58u: goto label_1b5e58;
            case 0x1B5E5Cu: goto label_1b5e5c;
            case 0x1B5E60u: goto label_1b5e60;
            case 0x1B5E64u: goto label_1b5e64;
            case 0x1B5E68u: goto label_1b5e68;
            case 0x1B5E6Cu: goto label_1b5e6c;
            case 0x1B5E70u: goto label_1b5e70;
            case 0x1B5E74u: goto label_1b5e74;
            case 0x1B5E78u: goto label_1b5e78;
            case 0x1B5E7Cu: goto label_1b5e7c;
            case 0x1B5E80u: goto label_1b5e80;
            case 0x1B5E84u: goto label_1b5e84;
            case 0x1B5E88u: goto label_1b5e88;
            case 0x1B5E8Cu: goto label_1b5e8c;
            case 0x1B5E90u: goto label_1b5e90;
            case 0x1B5E94u: goto label_1b5e94;
            case 0x1B5E98u: goto label_1b5e98;
            case 0x1B5E9Cu: goto label_1b5e9c;
            case 0x1B5EA0u: goto label_1b5ea0;
            case 0x1B5EA4u: goto label_1b5ea4;
            case 0x1B5EA8u: goto label_1b5ea8;
            case 0x1B5EACu: goto label_1b5eac;
            case 0x1B5EB0u: goto label_1b5eb0;
            case 0x1B5EB4u: goto label_1b5eb4;
            case 0x1B5EB8u: goto label_1b5eb8;
            case 0x1B5EBCu: goto label_1b5ebc;
            case 0x1B5EC0u: goto label_1b5ec0;
            case 0x1B5EC4u: goto label_1b5ec4;
            case 0x1B5EC8u: goto label_1b5ec8;
            case 0x1B5ECCu: goto label_1b5ecc;
            case 0x1B5ED0u: goto label_1b5ed0;
            case 0x1B5ED4u: goto label_1b5ed4;
            case 0x1B5ED8u: goto label_1b5ed8;
            case 0x1B5EDCu: goto label_1b5edc;
            case 0x1B5EE0u: goto label_1b5ee0;
            case 0x1B5EE4u: goto label_1b5ee4;
            case 0x1B5EE8u: goto label_1b5ee8;
            case 0x1B5EECu: goto label_1b5eec;
            case 0x1B5EF0u: goto label_1b5ef0;
            case 0x1B5EF4u: goto label_1b5ef4;
            case 0x1B5EF8u: goto label_1b5ef8;
            case 0x1B5EFCu: goto label_1b5efc;
            case 0x1B5F00u: goto label_1b5f00;
            case 0x1B5F04u: goto label_1b5f04;
            case 0x1B5F08u: goto label_1b5f08;
            case 0x1B5F0Cu: goto label_1b5f0c;
            case 0x1B5F10u: goto label_1b5f10;
            case 0x1B5F14u: goto label_1b5f14;
            case 0x1B5F18u: goto label_1b5f18;
            case 0x1B5F1Cu: goto label_1b5f1c;
            case 0x1B5F20u: goto label_1b5f20;
            case 0x1B5F24u: goto label_1b5f24;
            case 0x1B5F28u: goto label_1b5f28;
            case 0x1B5F2Cu: goto label_1b5f2c;
            case 0x1B5F30u: goto label_1b5f30;
            case 0x1B5F34u: goto label_1b5f34;
            case 0x1B5F38u: goto label_1b5f38;
            case 0x1B5F3Cu: goto label_1b5f3c;
            case 0x1B5F40u: goto label_1b5f40;
            case 0x1B5F44u: goto label_1b5f44;
            case 0x1B5F48u: goto label_1b5f48;
            case 0x1B5F4Cu: goto label_1b5f4c;
            case 0x1B5F50u: goto label_1b5f50;
            case 0x1B5F54u: goto label_1b5f54;
            case 0x1B5F58u: goto label_1b5f58;
            case 0x1B5F5Cu: goto label_1b5f5c;
            case 0x1B5F60u: goto label_1b5f60;
            case 0x1B5F64u: goto label_1b5f64;
            case 0x1B5F68u: goto label_1b5f68;
            case 0x1B5F6Cu: goto label_1b5f6c;
            case 0x1B5F70u: goto label_1b5f70;
            case 0x1B5F74u: goto label_1b5f74;
            case 0x1B5F78u: goto label_1b5f78;
            case 0x1B5F7Cu: goto label_1b5f7c;
            case 0x1B5F80u: goto label_1b5f80;
            case 0x1B5F84u: goto label_1b5f84;
            case 0x1B5F88u: goto label_1b5f88;
            case 0x1B5F8Cu: goto label_1b5f8c;
            case 0x1B5F90u: goto label_1b5f90;
            case 0x1B5F94u: goto label_1b5f94;
            case 0x1B5F98u: goto label_1b5f98;
            case 0x1B5F9Cu: goto label_1b5f9c;
            case 0x1B5FA0u: goto label_1b5fa0;
            case 0x1B5FA4u: goto label_1b5fa4;
            case 0x1B5FA8u: goto label_1b5fa8;
            case 0x1B5FACu: goto label_1b5fac;
            case 0x1B5FB0u: goto label_1b5fb0;
            case 0x1B5FB4u: goto label_1b5fb4;
            case 0x1B5FB8u: goto label_1b5fb8;
            case 0x1B5FBCu: goto label_1b5fbc;
            case 0x1B5FC0u: goto label_1b5fc0;
            case 0x1B5FC4u: goto label_1b5fc4;
            case 0x1B5FC8u: goto label_1b5fc8;
            case 0x1B5FCCu: goto label_1b5fcc;
            case 0x1B5FD0u: goto label_1b5fd0;
            case 0x1B5FD4u: goto label_1b5fd4;
            case 0x1B5FD8u: goto label_1b5fd8;
            case 0x1B5FDCu: goto label_1b5fdc;
            case 0x1B5FE0u: goto label_1b5fe0;
            case 0x1B5FE4u: goto label_1b5fe4;
            case 0x1B5FE8u: goto label_1b5fe8;
            case 0x1B5FECu: goto label_1b5fec;
            case 0x1B5FF0u: goto label_1b5ff0;
            case 0x1B5FF4u: goto label_1b5ff4;
            case 0x1B5FF8u: goto label_1b5ff8;
            case 0x1B5FFCu: goto label_1b5ffc;
            case 0x1B6000u: goto label_1b6000;
            case 0x1B6004u: goto label_1b6004;
            case 0x1B6008u: goto label_1b6008;
            case 0x1B600Cu: goto label_1b600c;
            case 0x1B6010u: goto label_1b6010;
            case 0x1B6014u: goto label_1b6014;
            case 0x1B6018u: goto label_1b6018;
            case 0x1B601Cu: goto label_1b601c;
            case 0x1B6020u: goto label_1b6020;
            case 0x1B6024u: goto label_1b6024;
            case 0x1B6028u: goto label_1b6028;
            case 0x1B602Cu: goto label_1b602c;
            case 0x1B6030u: goto label_1b6030;
            case 0x1B6034u: goto label_1b6034;
            case 0x1B6038u: goto label_1b6038;
            case 0x1B603Cu: goto label_1b603c;
            case 0x1B6040u: goto label_1b6040;
            case 0x1B6044u: goto label_1b6044;
            case 0x1B6048u: goto label_1b6048;
            case 0x1B604Cu: goto label_1b604c;
            case 0x1B6050u: goto label_1b6050;
            case 0x1B6054u: goto label_1b6054;
            case 0x1B6058u: goto label_1b6058;
            case 0x1B605Cu: goto label_1b605c;
            case 0x1B6060u: goto label_1b6060;
            case 0x1B6064u: goto label_1b6064;
            case 0x1B6068u: goto label_1b6068;
            case 0x1B606Cu: goto label_1b606c;
            case 0x1B6070u: goto label_1b6070;
            case 0x1B6074u: goto label_1b6074;
            case 0x1B6078u: goto label_1b6078;
            case 0x1B607Cu: goto label_1b607c;
            case 0x1B6080u: goto label_1b6080;
            case 0x1B6084u: goto label_1b6084;
            case 0x1B6088u: goto label_1b6088;
            case 0x1B608Cu: goto label_1b608c;
            case 0x1B6090u: goto label_1b6090;
            case 0x1B6094u: goto label_1b6094;
            case 0x1B6098u: goto label_1b6098;
            case 0x1B609Cu: goto label_1b609c;
            case 0x1B60A0u: goto label_1b60a0;
            case 0x1B60A4u: goto label_1b60a4;
            case 0x1B60A8u: goto label_1b60a8;
            case 0x1B60ACu: goto label_1b60ac;
            case 0x1B60B0u: goto label_1b60b0;
            case 0x1B60B4u: goto label_1b60b4;
            case 0x1B60B8u: goto label_1b60b8;
            case 0x1B60BCu: goto label_1b60bc;
            case 0x1B60C0u: goto label_1b60c0;
            case 0x1B60C4u: goto label_1b60c4;
            case 0x1B60C8u: goto label_1b60c8;
            case 0x1B60CCu: goto label_1b60cc;
            case 0x1B60D0u: goto label_1b60d0;
            case 0x1B60D4u: goto label_1b60d4;
            case 0x1B60D8u: goto label_1b60d8;
            case 0x1B60DCu: goto label_1b60dc;
            case 0x1B60E0u: goto label_1b60e0;
            case 0x1B60E4u: goto label_1b60e4;
            case 0x1B60E8u: goto label_1b60e8;
            case 0x1B60ECu: goto label_1b60ec;
            case 0x1B60F0u: goto label_1b60f0;
            case 0x1B60F4u: goto label_1b60f4;
            case 0x1B60F8u: goto label_1b60f8;
            case 0x1B60FCu: goto label_1b60fc;
            case 0x1B6100u: goto label_1b6100;
            case 0x1B6104u: goto label_1b6104;
            case 0x1B6108u: goto label_1b6108;
            case 0x1B610Cu: goto label_1b610c;
            case 0x1B6110u: goto label_1b6110;
            case 0x1B6114u: goto label_1b6114;
            case 0x1B6118u: goto label_1b6118;
            case 0x1B611Cu: goto label_1b611c;
            case 0x1B6120u: goto label_1b6120;
            case 0x1B6124u: goto label_1b6124;
            case 0x1B6128u: goto label_1b6128;
            case 0x1B612Cu: goto label_1b612c;
            case 0x1B6130u: goto label_1b6130;
            case 0x1B6134u: goto label_1b6134;
            case 0x1B6138u: goto label_1b6138;
            case 0x1B613Cu: goto label_1b613c;
            case 0x1B6140u: goto label_1b6140;
            case 0x1B6144u: goto label_1b6144;
            case 0x1B6148u: goto label_1b6148;
            case 0x1B614Cu: goto label_1b614c;
            case 0x1B6150u: goto label_1b6150;
            case 0x1B6154u: goto label_1b6154;
            case 0x1B6158u: goto label_1b6158;
            case 0x1B615Cu: goto label_1b615c;
            case 0x1B6160u: goto label_1b6160;
            case 0x1B6164u: goto label_1b6164;
            case 0x1B6168u: goto label_1b6168;
            case 0x1B616Cu: goto label_1b616c;
            case 0x1B6170u: goto label_1b6170;
            case 0x1B6174u: goto label_1b6174;
            case 0x1B6178u: goto label_1b6178;
            case 0x1B617Cu: goto label_1b617c;
            case 0x1B6180u: goto label_1b6180;
            case 0x1B6184u: goto label_1b6184;
            case 0x1B6188u: goto label_1b6188;
            case 0x1B618Cu: goto label_1b618c;
            case 0x1B6190u: goto label_1b6190;
            case 0x1B6194u: goto label_1b6194;
            case 0x1B6198u: goto label_1b6198;
            case 0x1B619Cu: goto label_1b619c;
            case 0x1B61A0u: goto label_1b61a0;
            case 0x1B61A4u: goto label_1b61a4;
            case 0x1B61A8u: goto label_1b61a8;
            case 0x1B61ACu: goto label_1b61ac;
            case 0x1B61B0u: goto label_1b61b0;
            case 0x1B61B4u: goto label_1b61b4;
            case 0x1B61B8u: goto label_1b61b8;
            case 0x1B61BCu: goto label_1b61bc;
            case 0x1B61C0u: goto label_1b61c0;
            case 0x1B61C4u: goto label_1b61c4;
            case 0x1B61C8u: goto label_1b61c8;
            case 0x1B61CCu: goto label_1b61cc;
            case 0x1B61D0u: goto label_1b61d0;
            case 0x1B61D4u: goto label_1b61d4;
            case 0x1B61D8u: goto label_1b61d8;
            case 0x1B61DCu: goto label_1b61dc;
            case 0x1B61E0u: goto label_1b61e0;
            case 0x1B61E4u: goto label_1b61e4;
            case 0x1B61E8u: goto label_1b61e8;
            case 0x1B61ECu: goto label_1b61ec;
            case 0x1B61F0u: goto label_1b61f0;
            case 0x1B61F4u: goto label_1b61f4;
            case 0x1B61F8u: goto label_1b61f8;
            case 0x1B61FCu: goto label_1b61fc;
            case 0x1B6200u: goto label_1b6200;
            case 0x1B6204u: goto label_1b6204;
            case 0x1B6208u: goto label_1b6208;
            case 0x1B620Cu: goto label_1b620c;
            case 0x1B6210u: goto label_1b6210;
            case 0x1B6214u: goto label_1b6214;
            case 0x1B6218u: goto label_1b6218;
            case 0x1B621Cu: goto label_1b621c;
            case 0x1B6220u: goto label_1b6220;
            case 0x1B6224u: goto label_1b6224;
            case 0x1B6228u: goto label_1b6228;
            case 0x1B622Cu: goto label_1b622c;
            case 0x1B6230u: goto label_1b6230;
            case 0x1B6234u: goto label_1b6234;
            case 0x1B6238u: goto label_1b6238;
            case 0x1B623Cu: goto label_1b623c;
            case 0x1B6240u: goto label_1b6240;
            case 0x1B6244u: goto label_1b6244;
            case 0x1B6248u: goto label_1b6248;
            case 0x1B624Cu: goto label_1b624c;
            case 0x1B6250u: goto label_1b6250;
            case 0x1B6254u: goto label_1b6254;
            case 0x1B6258u: goto label_1b6258;
            case 0x1B625Cu: goto label_1b625c;
            case 0x1B6260u: goto label_1b6260;
            case 0x1B6264u: goto label_1b6264;
            case 0x1B6268u: goto label_1b6268;
            case 0x1B626Cu: goto label_1b626c;
            case 0x1B6270u: goto label_1b6270;
            case 0x1B6274u: goto label_1b6274;
            case 0x1B6278u: goto label_1b6278;
            case 0x1B627Cu: goto label_1b627c;
            case 0x1B6280u: goto label_1b6280;
            case 0x1B6284u: goto label_1b6284;
            case 0x1B6288u: goto label_1b6288;
            case 0x1B628Cu: goto label_1b628c;
            case 0x1B6290u: goto label_1b6290;
            case 0x1B6294u: goto label_1b6294;
            case 0x1B6298u: goto label_1b6298;
            case 0x1B629Cu: goto label_1b629c;
            case 0x1B62A0u: goto label_1b62a0;
            case 0x1B62A4u: goto label_1b62a4;
            case 0x1B62A8u: goto label_1b62a8;
            case 0x1B62ACu: goto label_1b62ac;
            case 0x1B62B0u: goto label_1b62b0;
            case 0x1B62B4u: goto label_1b62b4;
            case 0x1B62B8u: goto label_1b62b8;
            case 0x1B62BCu: goto label_1b62bc;
            case 0x1B62C0u: goto label_1b62c0;
            case 0x1B62C4u: goto label_1b62c4;
            case 0x1B62C8u: goto label_1b62c8;
            case 0x1B62CCu: goto label_1b62cc;
            case 0x1B62D0u: goto label_1b62d0;
            case 0x1B62D4u: goto label_1b62d4;
            case 0x1B62D8u: goto label_1b62d8;
            case 0x1B62DCu: goto label_1b62dc;
            case 0x1B62E0u: goto label_1b62e0;
            case 0x1B62E4u: goto label_1b62e4;
            case 0x1B62E8u: goto label_1b62e8;
            case 0x1B62ECu: goto label_1b62ec;
            case 0x1B62F0u: goto label_1b62f0;
            case 0x1B62F4u: goto label_1b62f4;
            case 0x1B62F8u: goto label_1b62f8;
            case 0x1B62FCu: goto label_1b62fc;
            case 0x1B6300u: goto label_1b6300;
            case 0x1B6304u: goto label_1b6304;
            case 0x1B6308u: goto label_1b6308;
            case 0x1B630Cu: goto label_1b630c;
            case 0x1B6310u: goto label_1b6310;
            case 0x1B6314u: goto label_1b6314;
            case 0x1B6318u: goto label_1b6318;
            case 0x1B631Cu: goto label_1b631c;
            case 0x1B6320u: goto label_1b6320;
            case 0x1B6324u: goto label_1b6324;
            case 0x1B6328u: goto label_1b6328;
            case 0x1B632Cu: goto label_1b632c;
            case 0x1B6330u: goto label_1b6330;
            case 0x1B6334u: goto label_1b6334;
            case 0x1B6338u: goto label_1b6338;
            case 0x1B633Cu: goto label_1b633c;
            case 0x1B6340u: goto label_1b6340;
            case 0x1B6344u: goto label_1b6344;
            case 0x1B6348u: goto label_1b6348;
            case 0x1B634Cu: goto label_1b634c;
            case 0x1B6350u: goto label_1b6350;
            case 0x1B6354u: goto label_1b6354;
            case 0x1B6358u: goto label_1b6358;
            case 0x1B635Cu: goto label_1b635c;
            case 0x1B6360u: goto label_1b6360;
            case 0x1B6364u: goto label_1b6364;
            case 0x1B6368u: goto label_1b6368;
            case 0x1B636Cu: goto label_1b636c;
            case 0x1B6370u: goto label_1b6370;
            case 0x1B6374u: goto label_1b6374;
            case 0x1B6378u: goto label_1b6378;
            case 0x1B637Cu: goto label_1b637c;
            case 0x1B6380u: goto label_1b6380;
            case 0x1B6384u: goto label_1b6384;
            case 0x1B6388u: goto label_1b6388;
            case 0x1B638Cu: goto label_1b638c;
            case 0x1B6390u: goto label_1b6390;
            case 0x1B6394u: goto label_1b6394;
            case 0x1B6398u: goto label_1b6398;
            case 0x1B639Cu: goto label_1b639c;
            case 0x1B63A0u: goto label_1b63a0;
            case 0x1B63A4u: goto label_1b63a4;
            case 0x1B63A8u: goto label_1b63a8;
            case 0x1B63ACu: goto label_1b63ac;
            case 0x1B63B0u: goto label_1b63b0;
            case 0x1B63B4u: goto label_1b63b4;
            case 0x1B63B8u: goto label_1b63b8;
            case 0x1B63BCu: goto label_1b63bc;
            case 0x1B63C0u: goto label_1b63c0;
            case 0x1B63C4u: goto label_1b63c4;
            case 0x1B63C8u: goto label_1b63c8;
            case 0x1B63CCu: goto label_1b63cc;
            case 0x1B63D0u: goto label_1b63d0;
            case 0x1B63D4u: goto label_1b63d4;
            case 0x1B63D8u: goto label_1b63d8;
            case 0x1B63DCu: goto label_1b63dc;
            case 0x1B63E0u: goto label_1b63e0;
            case 0x1B63E4u: goto label_1b63e4;
            case 0x1B63E8u: goto label_1b63e8;
            case 0x1B63ECu: goto label_1b63ec;
            case 0x1B63F0u: goto label_1b63f0;
            case 0x1B63F4u: goto label_1b63f4;
            case 0x1B63F8u: goto label_1b63f8;
            case 0x1B63FCu: goto label_1b63fc;
            case 0x1B6400u: goto label_1b6400;
            case 0x1B6404u: goto label_1b6404;
            case 0x1B6408u: goto label_1b6408;
            case 0x1B640Cu: goto label_1b640c;
            case 0x1B6410u: goto label_1b6410;
            case 0x1B6414u: goto label_1b6414;
            case 0x1B6418u: goto label_1b6418;
            case 0x1B641Cu: goto label_1b641c;
            case 0x1B6420u: goto label_1b6420;
            case 0x1B6424u: goto label_1b6424;
            case 0x1B6428u: goto label_1b6428;
            case 0x1B642Cu: goto label_1b642c;
            case 0x1B6430u: goto label_1b6430;
            case 0x1B6434u: goto label_1b6434;
            case 0x1B6438u: goto label_1b6438;
            case 0x1B643Cu: goto label_1b643c;
            case 0x1B6440u: goto label_1b6440;
            case 0x1B6444u: goto label_1b6444;
            case 0x1B6448u: goto label_1b6448;
            case 0x1B644Cu: goto label_1b644c;
            case 0x1B6450u: goto label_1b6450;
            case 0x1B6454u: goto label_1b6454;
            case 0x1B6458u: goto label_1b6458;
            case 0x1B645Cu: goto label_1b645c;
            case 0x1B6460u: goto label_1b6460;
            case 0x1B6464u: goto label_1b6464;
            case 0x1B6468u: goto label_1b6468;
            case 0x1B646Cu: goto label_1b646c;
            case 0x1B6470u: goto label_1b6470;
            case 0x1B6474u: goto label_1b6474;
            case 0x1B6478u: goto label_1b6478;
            case 0x1B647Cu: goto label_1b647c;
            case 0x1B6480u: goto label_1b6480;
            case 0x1B6484u: goto label_1b6484;
            case 0x1B6488u: goto label_1b6488;
            case 0x1B648Cu: goto label_1b648c;
            case 0x1B6490u: goto label_1b6490;
            case 0x1B6494u: goto label_1b6494;
            case 0x1B6498u: goto label_1b6498;
            case 0x1B649Cu: goto label_1b649c;
            case 0x1B64A0u: goto label_1b64a0;
            case 0x1B64A4u: goto label_1b64a4;
            case 0x1B64A8u: goto label_1b64a8;
            case 0x1B64ACu: goto label_1b64ac;
            case 0x1B64B0u: goto label_1b64b0;
            case 0x1B64B4u: goto label_1b64b4;
            case 0x1B64B8u: goto label_1b64b8;
            case 0x1B64BCu: goto label_1b64bc;
            case 0x1B64C0u: goto label_1b64c0;
            case 0x1B64C4u: goto label_1b64c4;
            case 0x1B64C8u: goto label_1b64c8;
            case 0x1B64CCu: goto label_1b64cc;
            case 0x1B64D0u: goto label_1b64d0;
            case 0x1B64D4u: goto label_1b64d4;
            case 0x1B64D8u: goto label_1b64d8;
            case 0x1B64DCu: goto label_1b64dc;
            case 0x1B64E0u: goto label_1b64e0;
            case 0x1B64E4u: goto label_1b64e4;
            case 0x1B64E8u: goto label_1b64e8;
            case 0x1B64ECu: goto label_1b64ec;
            case 0x1B64F0u: goto label_1b64f0;
            case 0x1B64F4u: goto label_1b64f4;
            case 0x1B64F8u: goto label_1b64f8;
            case 0x1B64FCu: goto label_1b64fc;
            case 0x1B6500u: goto label_1b6500;
            case 0x1B6504u: goto label_1b6504;
            case 0x1B6508u: goto label_1b6508;
            case 0x1B650Cu: goto label_1b650c;
            case 0x1B6510u: goto label_1b6510;
            case 0x1B6514u: goto label_1b6514;
            case 0x1B6518u: goto label_1b6518;
            case 0x1B651Cu: goto label_1b651c;
            case 0x1B6520u: goto label_1b6520;
            case 0x1B6524u: goto label_1b6524;
            case 0x1B6528u: goto label_1b6528;
            case 0x1B652Cu: goto label_1b652c;
            case 0x1B6530u: goto label_1b6530;
            case 0x1B6534u: goto label_1b6534;
            case 0x1B6538u: goto label_1b6538;
            case 0x1B653Cu: goto label_1b653c;
            case 0x1B6540u: goto label_1b6540;
            case 0x1B6544u: goto label_1b6544;
            case 0x1B6548u: goto label_1b6548;
            case 0x1B654Cu: goto label_1b654c;
            case 0x1B6550u: goto label_1b6550;
            case 0x1B6554u: goto label_1b6554;
            case 0x1B6558u: goto label_1b6558;
            case 0x1B655Cu: goto label_1b655c;
            case 0x1B6560u: goto label_1b6560;
            case 0x1B6564u: goto label_1b6564;
            case 0x1B6568u: goto label_1b6568;
            case 0x1B656Cu: goto label_1b656c;
            case 0x1B6570u: goto label_1b6570;
            case 0x1B6574u: goto label_1b6574;
            case 0x1B6578u: goto label_1b6578;
            case 0x1B657Cu: goto label_1b657c;
            case 0x1B6580u: goto label_1b6580;
            case 0x1B6584u: goto label_1b6584;
            case 0x1B6588u: goto label_1b6588;
            case 0x1B658Cu: goto label_1b658c;
            case 0x1B6590u: goto label_1b6590;
            case 0x1B6594u: goto label_1b6594;
            case 0x1B6598u: goto label_1b6598;
            case 0x1B659Cu: goto label_1b659c;
            case 0x1B65A0u: goto label_1b65a0;
            case 0x1B65A4u: goto label_1b65a4;
            case 0x1B65A8u: goto label_1b65a8;
            case 0x1B65ACu: goto label_1b65ac;
            case 0x1B65B0u: goto label_1b65b0;
            case 0x1B65B4u: goto label_1b65b4;
            case 0x1B65B8u: goto label_1b65b8;
            case 0x1B65BCu: goto label_1b65bc;
            case 0x1B65C0u: goto label_1b65c0;
            case 0x1B65C4u: goto label_1b65c4;
            case 0x1B65C8u: goto label_1b65c8;
            case 0x1B65CCu: goto label_1b65cc;
            case 0x1B65D0u: goto label_1b65d0;
            case 0x1B65D4u: goto label_1b65d4;
            case 0x1B65D8u: goto label_1b65d8;
            case 0x1B65DCu: goto label_1b65dc;
            case 0x1B65E0u: goto label_1b65e0;
            case 0x1B65E4u: goto label_1b65e4;
            case 0x1B65E8u: goto label_1b65e8;
            case 0x1B65ECu: goto label_1b65ec;
            case 0x1B65F0u: goto label_1b65f0;
            case 0x1B65F4u: goto label_1b65f4;
            case 0x1B65F8u: goto label_1b65f8;
            case 0x1B65FCu: goto label_1b65fc;
            case 0x1B6600u: goto label_1b6600;
            case 0x1B6604u: goto label_1b6604;
            case 0x1B6608u: goto label_1b6608;
            case 0x1B660Cu: goto label_1b660c;
            case 0x1B6610u: goto label_1b6610;
            case 0x1B6614u: goto label_1b6614;
            case 0x1B6618u: goto label_1b6618;
            case 0x1B661Cu: goto label_1b661c;
            case 0x1B6620u: goto label_1b6620;
            case 0x1B6624u: goto label_1b6624;
            case 0x1B6628u: goto label_1b6628;
            case 0x1B662Cu: goto label_1b662c;
            case 0x1B6630u: goto label_1b6630;
            case 0x1B6634u: goto label_1b6634;
            case 0x1B6638u: goto label_1b6638;
            case 0x1B663Cu: goto label_1b663c;
            case 0x1B6640u: goto label_1b6640;
            case 0x1B6644u: goto label_1b6644;
            case 0x1B6648u: goto label_1b6648;
            case 0x1B664Cu: goto label_1b664c;
            case 0x1B6650u: goto label_1b6650;
            case 0x1B6654u: goto label_1b6654;
            case 0x1B6658u: goto label_1b6658;
            case 0x1B665Cu: goto label_1b665c;
            case 0x1B6660u: goto label_1b6660;
            case 0x1B6664u: goto label_1b6664;
            case 0x1B6668u: goto label_1b6668;
            case 0x1B666Cu: goto label_1b666c;
            case 0x1B6670u: goto label_1b6670;
            case 0x1B6674u: goto label_1b6674;
            case 0x1B6678u: goto label_1b6678;
            case 0x1B667Cu: goto label_1b667c;
            case 0x1B6680u: goto label_1b6680;
            case 0x1B6684u: goto label_1b6684;
            case 0x1B6688u: goto label_1b6688;
            case 0x1B668Cu: goto label_1b668c;
            case 0x1B6690u: goto label_1b6690;
            case 0x1B6694u: goto label_1b6694;
            case 0x1B6698u: goto label_1b6698;
            case 0x1B669Cu: goto label_1b669c;
            case 0x1B66A0u: goto label_1b66a0;
            case 0x1B66A4u: goto label_1b66a4;
            case 0x1B66A8u: goto label_1b66a8;
            case 0x1B66ACu: goto label_1b66ac;
            case 0x1B66B0u: goto label_1b66b0;
            case 0x1B66B4u: goto label_1b66b4;
            case 0x1B66B8u: goto label_1b66b8;
            case 0x1B66BCu: goto label_1b66bc;
            case 0x1B66C0u: goto label_1b66c0;
            case 0x1B66C4u: goto label_1b66c4;
            case 0x1B66C8u: goto label_1b66c8;
            case 0x1B66CCu: goto label_1b66cc;
            case 0x1B66D0u: goto label_1b66d0;
            case 0x1B66D4u: goto label_1b66d4;
            case 0x1B66D8u: goto label_1b66d8;
            case 0x1B66DCu: goto label_1b66dc;
            case 0x1B66E0u: goto label_1b66e0;
            case 0x1B66E4u: goto label_1b66e4;
            case 0x1B66E8u: goto label_1b66e8;
            case 0x1B66ECu: goto label_1b66ec;
            case 0x1B66F0u: goto label_1b66f0;
            case 0x1B66F4u: goto label_1b66f4;
            case 0x1B66F8u: goto label_1b66f8;
            case 0x1B66FCu: goto label_1b66fc;
            case 0x1B6700u: goto label_1b6700;
            case 0x1B6704u: goto label_1b6704;
            case 0x1B6708u: goto label_1b6708;
            case 0x1B670Cu: goto label_1b670c;
            case 0x1B6710u: goto label_1b6710;
            case 0x1B6714u: goto label_1b6714;
            case 0x1B6718u: goto label_1b6718;
            case 0x1B671Cu: goto label_1b671c;
            case 0x1B6720u: goto label_1b6720;
            case 0x1B6724u: goto label_1b6724;
            case 0x1B6728u: goto label_1b6728;
            case 0x1B672Cu: goto label_1b672c;
            case 0x1B6730u: goto label_1b6730;
            case 0x1B6734u: goto label_1b6734;
            case 0x1B6738u: goto label_1b6738;
            case 0x1B673Cu: goto label_1b673c;
            case 0x1B6740u: goto label_1b6740;
            case 0x1B6744u: goto label_1b6744;
            case 0x1B6748u: goto label_1b6748;
            case 0x1B674Cu: goto label_1b674c;
            case 0x1B6750u: goto label_1b6750;
            case 0x1B6754u: goto label_1b6754;
            case 0x1B6758u: goto label_1b6758;
            case 0x1B675Cu: goto label_1b675c;
            case 0x1B6760u: goto label_1b6760;
            case 0x1B6764u: goto label_1b6764;
            case 0x1B6768u: goto label_1b6768;
            case 0x1B676Cu: goto label_1b676c;
            case 0x1B6770u: goto label_1b6770;
            case 0x1B6774u: goto label_1b6774;
            case 0x1B6778u: goto label_1b6778;
            case 0x1B677Cu: goto label_1b677c;
            case 0x1B6780u: goto label_1b6780;
            case 0x1B6784u: goto label_1b6784;
            case 0x1B6788u: goto label_1b6788;
            case 0x1B678Cu: goto label_1b678c;
            case 0x1B6790u: goto label_1b6790;
            case 0x1B6794u: goto label_1b6794;
            case 0x1B6798u: goto label_1b6798;
            case 0x1B679Cu: goto label_1b679c;
            case 0x1B67A0u: goto label_1b67a0;
            case 0x1B67A4u: goto label_1b67a4;
            case 0x1B67A8u: goto label_1b67a8;
            case 0x1B67ACu: goto label_1b67ac;
            case 0x1B67B0u: goto label_1b67b0;
            case 0x1B67B4u: goto label_1b67b4;
            case 0x1B67B8u: goto label_1b67b8;
            case 0x1B67BCu: goto label_1b67bc;
            case 0x1B67C0u: goto label_1b67c0;
            case 0x1B67C4u: goto label_1b67c4;
            case 0x1B67C8u: goto label_1b67c8;
            case 0x1B67CCu: goto label_1b67cc;
            case 0x1B67D0u: goto label_1b67d0;
            case 0x1B67D4u: goto label_1b67d4;
            case 0x1B67D8u: goto label_1b67d8;
            case 0x1B67DCu: goto label_1b67dc;
            case 0x1B67E0u: goto label_1b67e0;
            case 0x1B67E4u: goto label_1b67e4;
            case 0x1B67E8u: goto label_1b67e8;
            case 0x1B67ECu: goto label_1b67ec;
            case 0x1B67F0u: goto label_1b67f0;
            case 0x1B67F4u: goto label_1b67f4;
            case 0x1B67F8u: goto label_1b67f8;
            case 0x1B67FCu: goto label_1b67fc;
            case 0x1B6800u: goto label_1b6800;
            case 0x1B6804u: goto label_1b6804;
            case 0x1B6808u: goto label_1b6808;
            case 0x1B680Cu: goto label_1b680c;
            case 0x1B6810u: goto label_1b6810;
            case 0x1B6814u: goto label_1b6814;
            case 0x1B6818u: goto label_1b6818;
            case 0x1B681Cu: goto label_1b681c;
            case 0x1B6820u: goto label_1b6820;
            case 0x1B6824u: goto label_1b6824;
            case 0x1B6828u: goto label_1b6828;
            case 0x1B682Cu: goto label_1b682c;
            case 0x1B6830u: goto label_1b6830;
            case 0x1B6834u: goto label_1b6834;
            case 0x1B6838u: goto label_1b6838;
            case 0x1B683Cu: goto label_1b683c;
            case 0x1B6840u: goto label_1b6840;
            case 0x1B6844u: goto label_1b6844;
            case 0x1B6848u: goto label_1b6848;
            case 0x1B684Cu: goto label_1b684c;
            case 0x1B6850u: goto label_1b6850;
            case 0x1B6854u: goto label_1b6854;
            case 0x1B6858u: goto label_1b6858;
            case 0x1B685Cu: goto label_1b685c;
            case 0x1B6860u: goto label_1b6860;
            case 0x1B6864u: goto label_1b6864;
            case 0x1B6868u: goto label_1b6868;
            case 0x1B686Cu: goto label_1b686c;
            case 0x1B6870u: goto label_1b6870;
            case 0x1B6874u: goto label_1b6874;
            case 0x1B6878u: goto label_1b6878;
            case 0x1B687Cu: goto label_1b687c;
            case 0x1B6880u: goto label_1b6880;
            case 0x1B6884u: goto label_1b6884;
            case 0x1B6888u: goto label_1b6888;
            case 0x1B688Cu: goto label_1b688c;
            case 0x1B6890u: goto label_1b6890;
            case 0x1B6894u: goto label_1b6894;
            case 0x1B6898u: goto label_1b6898;
            case 0x1B689Cu: goto label_1b689c;
            case 0x1B68A0u: goto label_1b68a0;
            case 0x1B68A4u: goto label_1b68a4;
            case 0x1B68A8u: goto label_1b68a8;
            case 0x1B68ACu: goto label_1b68ac;
            case 0x1B68B0u: goto label_1b68b0;
            case 0x1B68B4u: goto label_1b68b4;
            case 0x1B68B8u: goto label_1b68b8;
            case 0x1B68BCu: goto label_1b68bc;
            case 0x1B68C0u: goto label_1b68c0;
            case 0x1B68C4u: goto label_1b68c4;
            case 0x1B68C8u: goto label_1b68c8;
            case 0x1B68CCu: goto label_1b68cc;
            case 0x1B68D0u: goto label_1b68d0;
            case 0x1B68D4u: goto label_1b68d4;
            case 0x1B68D8u: goto label_1b68d8;
            case 0x1B68DCu: goto label_1b68dc;
            case 0x1B68E0u: goto label_1b68e0;
            case 0x1B68E4u: goto label_1b68e4;
            case 0x1B68E8u: goto label_1b68e8;
            case 0x1B68ECu: goto label_1b68ec;
            case 0x1B68F0u: goto label_1b68f0;
            case 0x1B68F4u: goto label_1b68f4;
            case 0x1B68F8u: goto label_1b68f8;
            case 0x1B68FCu: goto label_1b68fc;
            case 0x1B6900u: goto label_1b6900;
            case 0x1B6904u: goto label_1b6904;
            case 0x1B6908u: goto label_1b6908;
            case 0x1B690Cu: goto label_1b690c;
            case 0x1B6910u: goto label_1b6910;
            case 0x1B6914u: goto label_1b6914;
            case 0x1B6918u: goto label_1b6918;
            case 0x1B691Cu: goto label_1b691c;
            case 0x1B6920u: goto label_1b6920;
            case 0x1B6924u: goto label_1b6924;
            case 0x1B6928u: goto label_1b6928;
            case 0x1B692Cu: goto label_1b692c;
            case 0x1B6930u: goto label_1b6930;
            case 0x1B6934u: goto label_1b6934;
            case 0x1B6938u: goto label_1b6938;
            case 0x1B693Cu: goto label_1b693c;
            case 0x1B6940u: goto label_1b6940;
            case 0x1B6944u: goto label_1b6944;
            case 0x1B6948u: goto label_1b6948;
            case 0x1B694Cu: goto label_1b694c;
            case 0x1B6950u: goto label_1b6950;
            case 0x1B6954u: goto label_1b6954;
            case 0x1B6958u: goto label_1b6958;
            case 0x1B695Cu: goto label_1b695c;
            case 0x1B6960u: goto label_1b6960;
            case 0x1B6964u: goto label_1b6964;
            case 0x1B6968u: goto label_1b6968;
            case 0x1B696Cu: goto label_1b696c;
            case 0x1B6970u: goto label_1b6970;
            case 0x1B6974u: goto label_1b6974;
            case 0x1B6978u: goto label_1b6978;
            case 0x1B697Cu: goto label_1b697c;
            case 0x1B6980u: goto label_1b6980;
            case 0x1B6984u: goto label_1b6984;
            case 0x1B6988u: goto label_1b6988;
            case 0x1B698Cu: goto label_1b698c;
            case 0x1B6990u: goto label_1b6990;
            case 0x1B6994u: goto label_1b6994;
            case 0x1B6998u: goto label_1b6998;
            case 0x1B699Cu: goto label_1b699c;
            case 0x1B69A0u: goto label_1b69a0;
            case 0x1B69A4u: goto label_1b69a4;
            case 0x1B69A8u: goto label_1b69a8;
            case 0x1B69ACu: goto label_1b69ac;
            case 0x1B69B0u: goto label_1b69b0;
            case 0x1B69B4u: goto label_1b69b4;
            case 0x1B69B8u: goto label_1b69b8;
            case 0x1B69BCu: goto label_1b69bc;
            case 0x1B69C0u: goto label_1b69c0;
            case 0x1B69C4u: goto label_1b69c4;
            case 0x1B69C8u: goto label_1b69c8;
            case 0x1B69CCu: goto label_1b69cc;
            case 0x1B69D0u: goto label_1b69d0;
            case 0x1B69D4u: goto label_1b69d4;
            case 0x1B69D8u: goto label_1b69d8;
            case 0x1B69DCu: goto label_1b69dc;
            case 0x1B69E0u: goto label_1b69e0;
            case 0x1B69E4u: goto label_1b69e4;
            case 0x1B69E8u: goto label_1b69e8;
            case 0x1B69ECu: goto label_1b69ec;
            case 0x1B69F0u: goto label_1b69f0;
            case 0x1B69F4u: goto label_1b69f4;
            case 0x1B69F8u: goto label_1b69f8;
            case 0x1B69FCu: goto label_1b69fc;
            case 0x1B6A00u: goto label_1b6a00;
            case 0x1B6A04u: goto label_1b6a04;
            case 0x1B6A08u: goto label_1b6a08;
            case 0x1B6A0Cu: goto label_1b6a0c;
            case 0x1B6A10u: goto label_1b6a10;
            case 0x1B6A14u: goto label_1b6a14;
            case 0x1B6A18u: goto label_1b6a18;
            case 0x1B6A1Cu: goto label_1b6a1c;
            case 0x1B6A20u: goto label_1b6a20;
            case 0x1B6A24u: goto label_1b6a24;
            case 0x1B6A28u: goto label_1b6a28;
            case 0x1B6A2Cu: goto label_1b6a2c;
            case 0x1B6A30u: goto label_1b6a30;
            case 0x1B6A34u: goto label_1b6a34;
            case 0x1B6A38u: goto label_1b6a38;
            case 0x1B6A3Cu: goto label_1b6a3c;
            case 0x1B6A40u: goto label_1b6a40;
            case 0x1B6A44u: goto label_1b6a44;
            case 0x1B6A48u: goto label_1b6a48;
            case 0x1B6A4Cu: goto label_1b6a4c;
            case 0x1B6A50u: goto label_1b6a50;
            case 0x1B6A54u: goto label_1b6a54;
            case 0x1B6A58u: goto label_1b6a58;
            case 0x1B6A5Cu: goto label_1b6a5c;
            case 0x1B6A60u: goto label_1b6a60;
            case 0x1B6A64u: goto label_1b6a64;
            case 0x1B6A68u: goto label_1b6a68;
            case 0x1B6A6Cu: goto label_1b6a6c;
            case 0x1B6A70u: goto label_1b6a70;
            case 0x1B6A74u: goto label_1b6a74;
            case 0x1B6A78u: goto label_1b6a78;
            case 0x1B6A7Cu: goto label_1b6a7c;
            case 0x1B6A80u: goto label_1b6a80;
            case 0x1B6A84u: goto label_1b6a84;
            case 0x1B6A88u: goto label_1b6a88;
            case 0x1B6A8Cu: goto label_1b6a8c;
            case 0x1B6A90u: goto label_1b6a90;
            case 0x1B6A94u: goto label_1b6a94;
            case 0x1B6A98u: goto label_1b6a98;
            case 0x1B6A9Cu: goto label_1b6a9c;
            case 0x1B6AA0u: goto label_1b6aa0;
            case 0x1B6AA4u: goto label_1b6aa4;
            case 0x1B6AA8u: goto label_1b6aa8;
            case 0x1B6AACu: goto label_1b6aac;
            case 0x1B6AB0u: goto label_1b6ab0;
            case 0x1B6AB4u: goto label_1b6ab4;
            case 0x1B6AB8u: goto label_1b6ab8;
            case 0x1B6ABCu: goto label_1b6abc;
            case 0x1B6AC0u: goto label_1b6ac0;
            case 0x1B6AC4u: goto label_1b6ac4;
            case 0x1B6AC8u: goto label_1b6ac8;
            case 0x1B6ACCu: goto label_1b6acc;
            case 0x1B6AD0u: goto label_1b6ad0;
            case 0x1B6AD4u: goto label_1b6ad4;
            case 0x1B6AD8u: goto label_1b6ad8;
            case 0x1B6ADCu: goto label_1b6adc;
            case 0x1B6AE0u: goto label_1b6ae0;
            case 0x1B6AE4u: goto label_1b6ae4;
            case 0x1B6AE8u: goto label_1b6ae8;
            case 0x1B6AECu: goto label_1b6aec;
            case 0x1B6AF0u: goto label_1b6af0;
            case 0x1B6AF4u: goto label_1b6af4;
            case 0x1B6AF8u: goto label_1b6af8;
            case 0x1B6AFCu: goto label_1b6afc;
            case 0x1B6B00u: goto label_1b6b00;
            case 0x1B6B04u: goto label_1b6b04;
            case 0x1B6B08u: goto label_1b6b08;
            case 0x1B6B0Cu: goto label_1b6b0c;
            case 0x1B6B10u: goto label_1b6b10;
            case 0x1B6B14u: goto label_1b6b14;
            case 0x1B6B18u: goto label_1b6b18;
            case 0x1B6B1Cu: goto label_1b6b1c;
            case 0x1B6B20u: goto label_1b6b20;
            case 0x1B6B24u: goto label_1b6b24;
            case 0x1B6B28u: goto label_1b6b28;
            case 0x1B6B2Cu: goto label_1b6b2c;
            case 0x1B6B30u: goto label_1b6b30;
            case 0x1B6B34u: goto label_1b6b34;
            case 0x1B6B38u: goto label_1b6b38;
            case 0x1B6B3Cu: goto label_1b6b3c;
            case 0x1B6B40u: goto label_1b6b40;
            case 0x1B6B44u: goto label_1b6b44;
            case 0x1B6B48u: goto label_1b6b48;
            case 0x1B6B4Cu: goto label_1b6b4c;
            case 0x1B6B50u: goto label_1b6b50;
            case 0x1B6B54u: goto label_1b6b54;
            case 0x1B6B58u: goto label_1b6b58;
            case 0x1B6B5Cu: goto label_1b6b5c;
            case 0x1B6B60u: goto label_1b6b60;
            case 0x1B6B64u: goto label_1b6b64;
            case 0x1B6B68u: goto label_1b6b68;
            case 0x1B6B6Cu: goto label_1b6b6c;
            case 0x1B6B70u: goto label_1b6b70;
            case 0x1B6B74u: goto label_1b6b74;
            case 0x1B6B78u: goto label_1b6b78;
            case 0x1B6B7Cu: goto label_1b6b7c;
            case 0x1B6B80u: goto label_1b6b80;
            case 0x1B6B84u: goto label_1b6b84;
            case 0x1B6B88u: goto label_1b6b88;
            case 0x1B6B8Cu: goto label_1b6b8c;
            case 0x1B6B90u: goto label_1b6b90;
            case 0x1B6B94u: goto label_1b6b94;
            case 0x1B6B98u: goto label_1b6b98;
            case 0x1B6B9Cu: goto label_1b6b9c;
            case 0x1B6BA0u: goto label_1b6ba0;
            case 0x1B6BA4u: goto label_1b6ba4;
            case 0x1B6BA8u: goto label_1b6ba8;
            case 0x1B6BACu: goto label_1b6bac;
            case 0x1B6BB0u: goto label_1b6bb0;
            case 0x1B6BB4u: goto label_1b6bb4;
            case 0x1B6BB8u: goto label_1b6bb8;
            case 0x1B6BBCu: goto label_1b6bbc;
            case 0x1B6BC0u: goto label_1b6bc0;
            case 0x1B6BC4u: goto label_1b6bc4;
            case 0x1B6BC8u: goto label_1b6bc8;
            case 0x1B6BCCu: goto label_1b6bcc;
            case 0x1B6BD0u: goto label_1b6bd0;
            case 0x1B6BD4u: goto label_1b6bd4;
            case 0x1B6BD8u: goto label_1b6bd8;
            case 0x1B6BDCu: goto label_1b6bdc;
            case 0x1B6BE0u: goto label_1b6be0;
            case 0x1B6BE4u: goto label_1b6be4;
            case 0x1B6BE8u: goto label_1b6be8;
            case 0x1B6BECu: goto label_1b6bec;
            case 0x1B6BF0u: goto label_1b6bf0;
            case 0x1B6BF4u: goto label_1b6bf4;
            case 0x1B6BF8u: goto label_1b6bf8;
            case 0x1B6BFCu: goto label_1b6bfc;
            case 0x1B6C00u: goto label_1b6c00;
            case 0x1B6C04u: goto label_1b6c04;
            case 0x1B6C08u: goto label_1b6c08;
            case 0x1B6C0Cu: goto label_1b6c0c;
            case 0x1B6C10u: goto label_1b6c10;
            case 0x1B6C14u: goto label_1b6c14;
            case 0x1B6C18u: goto label_1b6c18;
            case 0x1B6C1Cu: goto label_1b6c1c;
            case 0x1B6C20u: goto label_1b6c20;
            case 0x1B6C24u: goto label_1b6c24;
            case 0x1B6C28u: goto label_1b6c28;
            case 0x1B6C2Cu: goto label_1b6c2c;
            case 0x1B6C30u: goto label_1b6c30;
            case 0x1B6C34u: goto label_1b6c34;
            case 0x1B6C38u: goto label_1b6c38;
            case 0x1B6C3Cu: goto label_1b6c3c;
            case 0x1B6C40u: goto label_1b6c40;
            case 0x1B6C44u: goto label_1b6c44;
            case 0x1B6C48u: goto label_1b6c48;
            case 0x1B6C4Cu: goto label_1b6c4c;
            case 0x1B6C50u: goto label_1b6c50;
            case 0x1B6C54u: goto label_1b6c54;
            case 0x1B6C58u: goto label_1b6c58;
            case 0x1B6C5Cu: goto label_1b6c5c;
            case 0x1B6C60u: goto label_1b6c60;
            case 0x1B6C64u: goto label_1b6c64;
            case 0x1B6C68u: goto label_1b6c68;
            case 0x1B6C6Cu: goto label_1b6c6c;
            case 0x1B6C70u: goto label_1b6c70;
            case 0x1B6C74u: goto label_1b6c74;
            case 0x1B6C78u: goto label_1b6c78;
            case 0x1B6C7Cu: goto label_1b6c7c;
            case 0x1B6C80u: goto label_1b6c80;
            case 0x1B6C84u: goto label_1b6c84;
            case 0x1B6C88u: goto label_1b6c88;
            case 0x1B6C8Cu: goto label_1b6c8c;
            case 0x1B6C90u: goto label_1b6c90;
            case 0x1B6C94u: goto label_1b6c94;
            case 0x1B6C98u: goto label_1b6c98;
            case 0x1B6C9Cu: goto label_1b6c9c;
            case 0x1B6CA0u: goto label_1b6ca0;
            case 0x1B6CA4u: goto label_1b6ca4;
            case 0x1B6CA8u: goto label_1b6ca8;
            case 0x1B6CACu: goto label_1b6cac;
            case 0x1B6CB0u: goto label_1b6cb0;
            case 0x1B6CB4u: goto label_1b6cb4;
            case 0x1B6CB8u: goto label_1b6cb8;
            case 0x1B6CBCu: goto label_1b6cbc;
            case 0x1B6CC0u: goto label_1b6cc0;
            case 0x1B6CC4u: goto label_1b6cc4;
            case 0x1B6CC8u: goto label_1b6cc8;
            case 0x1B6CCCu: goto label_1b6ccc;
            case 0x1B6CD0u: goto label_1b6cd0;
            case 0x1B6CD4u: goto label_1b6cd4;
            case 0x1B6CD8u: goto label_1b6cd8;
            case 0x1B6CDCu: goto label_1b6cdc;
            case 0x1B6CE0u: goto label_1b6ce0;
            case 0x1B6CE4u: goto label_1b6ce4;
            case 0x1B6CE8u: goto label_1b6ce8;
            case 0x1B6CECu: goto label_1b6cec;
            case 0x1B6CF0u: goto label_1b6cf0;
            case 0x1B6CF4u: goto label_1b6cf4;
            case 0x1B6CF8u: goto label_1b6cf8;
            case 0x1B6CFCu: goto label_1b6cfc;
            case 0x1B6D00u: goto label_1b6d00;
            case 0x1B6D04u: goto label_1b6d04;
            case 0x1B6D08u: goto label_1b6d08;
            case 0x1B6D0Cu: goto label_1b6d0c;
            case 0x1B6D10u: goto label_1b6d10;
            case 0x1B6D14u: goto label_1b6d14;
            case 0x1B6D18u: goto label_1b6d18;
            case 0x1B6D1Cu: goto label_1b6d1c;
            case 0x1B6D20u: goto label_1b6d20;
            case 0x1B6D24u: goto label_1b6d24;
            case 0x1B6D28u: goto label_1b6d28;
            case 0x1B6D2Cu: goto label_1b6d2c;
            case 0x1B6D30u: goto label_1b6d30;
            case 0x1B6D34u: goto label_1b6d34;
            case 0x1B6D38u: goto label_1b6d38;
            case 0x1B6D3Cu: goto label_1b6d3c;
            case 0x1B6D40u: goto label_1b6d40;
            case 0x1B6D44u: goto label_1b6d44;
            case 0x1B6D48u: goto label_1b6d48;
            case 0x1B6D4Cu: goto label_1b6d4c;
            case 0x1B6D50u: goto label_1b6d50;
            case 0x1B6D54u: goto label_1b6d54;
            case 0x1B6D58u: goto label_1b6d58;
            case 0x1B6D5Cu: goto label_1b6d5c;
            case 0x1B6D60u: goto label_1b6d60;
            case 0x1B6D64u: goto label_1b6d64;
            case 0x1B6D68u: goto label_1b6d68;
            case 0x1B6D6Cu: goto label_1b6d6c;
            case 0x1B6D70u: goto label_1b6d70;
            case 0x1B6D74u: goto label_1b6d74;
            case 0x1B6D78u: goto label_1b6d78;
            case 0x1B6D7Cu: goto label_1b6d7c;
            case 0x1B6D80u: goto label_1b6d80;
            case 0x1B6D84u: goto label_1b6d84;
            case 0x1B6D88u: goto label_1b6d88;
            case 0x1B6D8Cu: goto label_1b6d8c;
            case 0x1B6D90u: goto label_1b6d90;
            case 0x1B6D94u: goto label_1b6d94;
            case 0x1B6D98u: goto label_1b6d98;
            case 0x1B6D9Cu: goto label_1b6d9c;
            case 0x1B6DA0u: goto label_1b6da0;
            case 0x1B6DA4u: goto label_1b6da4;
            case 0x1B6DA8u: goto label_1b6da8;
            case 0x1B6DACu: goto label_1b6dac;
            case 0x1B6DB0u: goto label_1b6db0;
            case 0x1B6DB4u: goto label_1b6db4;
            case 0x1B6DB8u: goto label_1b6db8;
            case 0x1B6DBCu: goto label_1b6dbc;
            case 0x1B6DC0u: goto label_1b6dc0;
            case 0x1B6DC4u: goto label_1b6dc4;
            case 0x1B6DC8u: goto label_1b6dc8;
            case 0x1B6DCCu: goto label_1b6dcc;
            case 0x1B6DD0u: goto label_1b6dd0;
            case 0x1B6DD4u: goto label_1b6dd4;
            case 0x1B6DD8u: goto label_1b6dd8;
            case 0x1B6DDCu: goto label_1b6ddc;
            case 0x1B6DE0u: goto label_1b6de0;
            case 0x1B6DE4u: goto label_1b6de4;
            case 0x1B6DE8u: goto label_1b6de8;
            case 0x1B6DECu: goto label_1b6dec;
            case 0x1B6DF0u: goto label_1b6df0;
            case 0x1B6DF4u: goto label_1b6df4;
            case 0x1B6DF8u: goto label_1b6df8;
            case 0x1B6DFCu: goto label_1b6dfc;
            case 0x1B6E00u: goto label_1b6e00;
            case 0x1B6E04u: goto label_1b6e04;
            case 0x1B6E08u: goto label_1b6e08;
            case 0x1B6E0Cu: goto label_1b6e0c;
            case 0x1B6E10u: goto label_1b6e10;
            case 0x1B6E14u: goto label_1b6e14;
            case 0x1B6E18u: goto label_1b6e18;
            case 0x1B6E1Cu: goto label_1b6e1c;
            case 0x1B6E20u: goto label_1b6e20;
            case 0x1B6E24u: goto label_1b6e24;
            case 0x1B6E28u: goto label_1b6e28;
            case 0x1B6E2Cu: goto label_1b6e2c;
            case 0x1B6E30u: goto label_1b6e30;
            case 0x1B6E34u: goto label_1b6e34;
            case 0x1B6E38u: goto label_1b6e38;
            case 0x1B6E3Cu: goto label_1b6e3c;
            case 0x1B6E40u: goto label_1b6e40;
            case 0x1B6E44u: goto label_1b6e44;
            case 0x1B6E48u: goto label_1b6e48;
            case 0x1B6E4Cu: goto label_1b6e4c;
            case 0x1B6E50u: goto label_1b6e50;
            case 0x1B6E54u: goto label_1b6e54;
            case 0x1B6E58u: goto label_1b6e58;
            case 0x1B6E5Cu: goto label_1b6e5c;
            case 0x1B6E60u: goto label_1b6e60;
            case 0x1B6E64u: goto label_1b6e64;
            case 0x1B6E68u: goto label_1b6e68;
            case 0x1B6E6Cu: goto label_1b6e6c;
            case 0x1B6E70u: goto label_1b6e70;
            case 0x1B6E74u: goto label_1b6e74;
            case 0x1B6E78u: goto label_1b6e78;
            case 0x1B6E7Cu: goto label_1b6e7c;
            case 0x1B6E80u: goto label_1b6e80;
            case 0x1B6E84u: goto label_1b6e84;
            case 0x1B6E88u: goto label_1b6e88;
            case 0x1B6E8Cu: goto label_1b6e8c;
            case 0x1B6E90u: goto label_1b6e90;
            case 0x1B6E94u: goto label_1b6e94;
            case 0x1B6E98u: goto label_1b6e98;
            case 0x1B6E9Cu: goto label_1b6e9c;
            case 0x1B6EA0u: goto label_1b6ea0;
            case 0x1B6EA4u: goto label_1b6ea4;
            case 0x1B6EA8u: goto label_1b6ea8;
            case 0x1B6EACu: goto label_1b6eac;
            case 0x1B6EB0u: goto label_1b6eb0;
            case 0x1B6EB4u: goto label_1b6eb4;
            case 0x1B6EB8u: goto label_1b6eb8;
            case 0x1B6EBCu: goto label_1b6ebc;
            case 0x1B6EC0u: goto label_1b6ec0;
            case 0x1B6EC4u: goto label_1b6ec4;
            case 0x1B6EC8u: goto label_1b6ec8;
            case 0x1B6ECCu: goto label_1b6ecc;
            case 0x1B6ED0u: goto label_1b6ed0;
            case 0x1B6ED4u: goto label_1b6ed4;
            case 0x1B6ED8u: goto label_1b6ed8;
            case 0x1B6EDCu: goto label_1b6edc;
            case 0x1B6EE0u: goto label_1b6ee0;
            case 0x1B6EE4u: goto label_1b6ee4;
            case 0x1B6EE8u: goto label_1b6ee8;
            case 0x1B6EECu: goto label_1b6eec;
            case 0x1B6EF0u: goto label_1b6ef0;
            case 0x1B6EF4u: goto label_1b6ef4;
            case 0x1B6EF8u: goto label_1b6ef8;
            case 0x1B6EFCu: goto label_1b6efc;
            case 0x1B6F00u: goto label_1b6f00;
            case 0x1B6F04u: goto label_1b6f04;
            case 0x1B6F08u: goto label_1b6f08;
            case 0x1B6F0Cu: goto label_1b6f0c;
            case 0x1B6F10u: goto label_1b6f10;
            case 0x1B6F14u: goto label_1b6f14;
            case 0x1B6F18u: goto label_1b6f18;
            case 0x1B6F1Cu: goto label_1b6f1c;
            case 0x1B6F20u: goto label_1b6f20;
            case 0x1B6F24u: goto label_1b6f24;
            case 0x1B6F28u: goto label_1b6f28;
            case 0x1B6F2Cu: goto label_1b6f2c;
            case 0x1B6F30u: goto label_1b6f30;
            case 0x1B6F34u: goto label_1b6f34;
            case 0x1B6F38u: goto label_1b6f38;
            case 0x1B6F3Cu: goto label_1b6f3c;
            case 0x1B6F40u: goto label_1b6f40;
            case 0x1B6F44u: goto label_1b6f44;
            case 0x1B6F48u: goto label_1b6f48;
            case 0x1B6F4Cu: goto label_1b6f4c;
            case 0x1B6F50u: goto label_1b6f50;
            case 0x1B6F54u: goto label_1b6f54;
            case 0x1B6F58u: goto label_1b6f58;
            case 0x1B6F5Cu: goto label_1b6f5c;
            case 0x1B6F60u: goto label_1b6f60;
            case 0x1B6F64u: goto label_1b6f64;
            case 0x1B6F68u: goto label_1b6f68;
            case 0x1B6F6Cu: goto label_1b6f6c;
            case 0x1B6F70u: goto label_1b6f70;
            case 0x1B6F74u: goto label_1b6f74;
            case 0x1B6F78u: goto label_1b6f78;
            case 0x1B6F7Cu: goto label_1b6f7c;
            case 0x1B6F80u: goto label_1b6f80;
            case 0x1B6F84u: goto label_1b6f84;
            case 0x1B6F88u: goto label_1b6f88;
            case 0x1B6F8Cu: goto label_1b6f8c;
            case 0x1B6F90u: goto label_1b6f90;
            case 0x1B6F94u: goto label_1b6f94;
            case 0x1B6F98u: goto label_1b6f98;
            case 0x1B6F9Cu: goto label_1b6f9c;
            case 0x1B6FA0u: goto label_1b6fa0;
            case 0x1B6FA4u: goto label_1b6fa4;
            case 0x1B6FA8u: goto label_1b6fa8;
            case 0x1B6FACu: goto label_1b6fac;
            case 0x1B6FB0u: goto label_1b6fb0;
            case 0x1B6FB4u: goto label_1b6fb4;
            case 0x1B6FB8u: goto label_1b6fb8;
            case 0x1B6FBCu: goto label_1b6fbc;
            case 0x1B6FC0u: goto label_1b6fc0;
            case 0x1B6FC4u: goto label_1b6fc4;
            case 0x1B6FC8u: goto label_1b6fc8;
            case 0x1B6FCCu: goto label_1b6fcc;
            case 0x1B6FD0u: goto label_1b6fd0;
            case 0x1B6FD4u: goto label_1b6fd4;
            case 0x1B6FD8u: goto label_1b6fd8;
            case 0x1B6FDCu: goto label_1b6fdc;
            case 0x1B6FE0u: goto label_1b6fe0;
            case 0x1B6FE4u: goto label_1b6fe4;
            case 0x1B6FE8u: goto label_1b6fe8;
            case 0x1B6FECu: goto label_1b6fec;
            case 0x1B6FF0u: goto label_1b6ff0;
            case 0x1B6FF4u: goto label_1b6ff4;
            case 0x1B6FF8u: goto label_1b6ff8;
            case 0x1B6FFCu: goto label_1b6ffc;
            case 0x1B7000u: goto label_1b7000;
            case 0x1B7004u: goto label_1b7004;
            case 0x1B7008u: goto label_1b7008;
            case 0x1B700Cu: goto label_1b700c;
            case 0x1B7010u: goto label_1b7010;
            case 0x1B7014u: goto label_1b7014;
            case 0x1B7018u: goto label_1b7018;
            case 0x1B701Cu: goto label_1b701c;
            case 0x1B7020u: goto label_1b7020;
            case 0x1B7024u: goto label_1b7024;
            case 0x1B7028u: goto label_1b7028;
            case 0x1B702Cu: goto label_1b702c;
            case 0x1B7030u: goto label_1b7030;
            case 0x1B7034u: goto label_1b7034;
            case 0x1B7038u: goto label_1b7038;
            case 0x1B703Cu: goto label_1b703c;
            case 0x1B7040u: goto label_1b7040;
            case 0x1B7044u: goto label_1b7044;
            case 0x1B7048u: goto label_1b7048;
            case 0x1B704Cu: goto label_1b704c;
            case 0x1B7050u: goto label_1b7050;
            case 0x1B7054u: goto label_1b7054;
            case 0x1B7058u: goto label_1b7058;
            case 0x1B705Cu: goto label_1b705c;
            case 0x1B7060u: goto label_1b7060;
            case 0x1B7064u: goto label_1b7064;
            case 0x1B7068u: goto label_1b7068;
            case 0x1B706Cu: goto label_1b706c;
            case 0x1B7070u: goto label_1b7070;
            case 0x1B7074u: goto label_1b7074;
            case 0x1B7078u: goto label_1b7078;
            case 0x1B707Cu: goto label_1b707c;
            case 0x1B7080u: goto label_1b7080;
            case 0x1B7084u: goto label_1b7084;
            case 0x1B7088u: goto label_1b7088;
            case 0x1B708Cu: goto label_1b708c;
            case 0x1B7090u: goto label_1b7090;
            case 0x1B7094u: goto label_1b7094;
            case 0x1B7098u: goto label_1b7098;
            case 0x1B709Cu: goto label_1b709c;
            case 0x1B70A0u: goto label_1b70a0;
            case 0x1B70A4u: goto label_1b70a4;
            case 0x1B70A8u: goto label_1b70a8;
            case 0x1B70ACu: goto label_1b70ac;
            case 0x1B70B0u: goto label_1b70b0;
            case 0x1B70B4u: goto label_1b70b4;
            case 0x1B70B8u: goto label_1b70b8;
            case 0x1B70BCu: goto label_1b70bc;
            case 0x1B70C0u: goto label_1b70c0;
            case 0x1B70C4u: goto label_1b70c4;
            case 0x1B70C8u: goto label_1b70c8;
            case 0x1B70CCu: goto label_1b70cc;
            case 0x1B70D0u: goto label_1b70d0;
            case 0x1B70D4u: goto label_1b70d4;
            case 0x1B70D8u: goto label_1b70d8;
            case 0x1B70DCu: goto label_1b70dc;
            case 0x1B70E0u: goto label_1b70e0;
            case 0x1B70E4u: goto label_1b70e4;
            case 0x1B70E8u: goto label_1b70e8;
            case 0x1B70ECu: goto label_1b70ec;
            case 0x1B70F0u: goto label_1b70f0;
            case 0x1B70F4u: goto label_1b70f4;
            case 0x1B70F8u: goto label_1b70f8;
            case 0x1B70FCu: goto label_1b70fc;
            case 0x1B7100u: goto label_1b7100;
            case 0x1B7104u: goto label_1b7104;
            case 0x1B7108u: goto label_1b7108;
            case 0x1B710Cu: goto label_1b710c;
            case 0x1B7110u: goto label_1b7110;
            case 0x1B7114u: goto label_1b7114;
            case 0x1B7118u: goto label_1b7118;
            case 0x1B711Cu: goto label_1b711c;
            case 0x1B7120u: goto label_1b7120;
            case 0x1B7124u: goto label_1b7124;
            case 0x1B7128u: goto label_1b7128;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B64u; }
            if (ctx->pc != 0x1B6B64u) { return; }
        }
    }
    ctx->pc = 0x1B6B64u;
label_1b6b64:
    // 0x1b6b64: 0x1000016c  b           . + 4 + (0x16C << 2)
label_1b6b68:
    if (ctx->pc == 0x1B6B68u) {
        ctx->pc = 0x1B6B6Cu;
        goto label_1b6b6c;
    }
    ctx->pc = 0x1B6B64u;
    {
        const bool branch_taken_0x1b6b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b64) {
            ctx->pc = 0x1B7118u;
            goto label_1b7118;
        }
    }
    ctx->pc = 0x1B6B6Cu;
label_1b6b6c:
    // 0x1b6b6c: 0x0  nop
    ctx->pc = 0x1b6b6cu;
    // NOP
label_1b6b70:
    // 0x1b6b70: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b6b74:
    // 0x1b6b74: 0x1c400148  bgtz        $v0, . + 4 + (0x148 << 2)
label_1b6b78:
    if (ctx->pc == 0x1B6B78u) {
        ctx->pc = 0x1B6B7Cu;
        goto label_1b6b7c;
    }
    ctx->pc = 0x1B6B74u;
    {
        const bool branch_taken_0x1b6b74 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1b6b74) {
            ctx->pc = 0x1B7098u;
            goto label_1b7098;
        }
    }
    ctx->pc = 0x1B6B7Cu;
label_1b6b7c:
    // 0x1b6b7c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1b6b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1b6b80:
    // 0x1b6b80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b6b84:
    // 0x1b6b84: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x1b6b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_1b6b88:
    // 0x1b6b88: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1b6b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1b6b8c:
    // 0x1b6b8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b6b90:
    // 0x1b6b90: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1b6b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_1b6b94:
    // 0x1b6b94: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1b6b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1b6b98:
    // 0x1b6b98: 0xc0604b0  jal         func_1812C0
label_1b6b9c:
    if (ctx->pc == 0x1B6B9Cu) {
        ctx->pc = 0x1B6B9Cu;
            // 0x1b6b9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B6BA0u;
        goto label_1b6ba0;
    }
    ctx->pc = 0x1B6B98u;
    SET_GPR_U32(ctx, 31, 0x1B6BA0u);
    ctx->pc = 0x1B6B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B98u;
            // 0x1b6b9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BA0u; }
        if (ctx->pc != 0x1B6BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BA0u; }
        if (ctx->pc != 0x1B6BA0u) { return; }
    }
    ctx->pc = 0x1B6BA0u;
label_1b6ba0:
    // 0x1b6ba0: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b6ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6ba4:
    // 0x1b6ba4: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1b6ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1b6ba8:
    // 0x1b6ba8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1b6ba8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1b6bac:
    // 0x1b6bac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b6bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b6bb0:
    // 0x1b6bb0: 0x0  nop
    ctx->pc = 0x1b6bb0u;
    // NOP
label_1b6bb4:
    // 0x1b6bb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b6bb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b6bb8:
    // 0x1b6bb8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b6bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b6bbc:
    // 0x1b6bbc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b6bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6bc0:
    // 0x1b6bc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b6bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b6bc4:
    // 0x1b6bc4: 0xc050ba4  jal         func_142E90
label_1b6bc8:
    if (ctx->pc == 0x1B6BC8u) {
        ctx->pc = 0x1B6BC8u;
            // 0x1b6bc8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1B6BCCu;
        goto label_1b6bcc;
    }
    ctx->pc = 0x1B6BC4u;
    SET_GPR_U32(ctx, 31, 0x1B6BCCu);
    ctx->pc = 0x1B6BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BC4u;
            // 0x1b6bc8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BCCu; }
        if (ctx->pc != 0x1B6BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BCCu; }
        if (ctx->pc != 0x1B6BCCu) { return; }
    }
    ctx->pc = 0x1B6BCCu;
label_1b6bcc:
    // 0x1b6bcc: 0xc040d72  jal         func_1035C8
label_1b6bd0:
    if (ctx->pc == 0x1B6BD0u) {
        ctx->pc = 0x1B6BD0u;
            // 0x1b6bd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1B6BD4u;
        goto label_1b6bd4;
    }
    ctx->pc = 0x1B6BCCu;
    SET_GPR_U32(ctx, 31, 0x1B6BD4u);
    ctx->pc = 0x1B6BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BCCu;
            // 0x1b6bd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BD4u; }
        if (ctx->pc != 0x1B6BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BD4u; }
        if (ctx->pc != 0x1B6BD4u) { return; }
    }
    ctx->pc = 0x1B6BD4u;
label_1b6bd4:
    // 0x1b6bd4: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1b6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1b6bd8:
    // 0x1b6bd8: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1b6bd8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1b6bdc:
    // 0x1b6bdc: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1b6bdcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1b6be0:
    // 0x1b6be0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b6be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1b6be4:
    // 0x1b6be4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b6be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1b6be8:
    // 0x1b6be8: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1b6be8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1b6bec:
    // 0x1b6bec: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1b6becu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1b6bf0:
    // 0x1b6bf0: 0xc040880  jal         func_102200
label_1b6bf4:
    if (ctx->pc == 0x1B6BF4u) {
        ctx->pc = 0x1B6BF4u;
            // 0x1b6bf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BF8u;
        goto label_1b6bf8;
    }
    ctx->pc = 0x1B6BF0u;
    SET_GPR_U32(ctx, 31, 0x1B6BF8u);
    ctx->pc = 0x1B6BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BF0u;
            // 0x1b6bf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BF8u; }
        if (ctx->pc != 0x1B6BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BF8u; }
        if (ctx->pc != 0x1B6BF8u) { return; }
    }
    ctx->pc = 0x1B6BF8u;
label_1b6bf8:
    // 0x1b6bf8: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1b6bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1b6bfc:
    // 0x1b6bfc: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1b6bfcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1b6c00:
    // 0x1b6c00: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1b6c00u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1b6c04:
    // 0x1b6c04: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b6c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1b6c08:
    // 0x1b6c08: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b6c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1b6c0c:
    // 0x1b6c0c: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1b6c0cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1b6c10:
    // 0x1b6c10: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1b6c10u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1b6c14:
    // 0x1b6c14: 0xc040866  jal         func_102198
label_1b6c18:
    if (ctx->pc == 0x1B6C18u) {
        ctx->pc = 0x1B6C18u;
            // 0x1b6c18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C1Cu;
        goto label_1b6c1c;
    }
    ctx->pc = 0x1B6C14u;
    SET_GPR_U32(ctx, 31, 0x1B6C1Cu);
    ctx->pc = 0x1B6C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C14u;
            // 0x1b6c18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C1Cu; }
        if (ctx->pc != 0x1B6C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C1Cu; }
        if (ctx->pc != 0x1B6C1Cu) { return; }
    }
    ctx->pc = 0x1B6C1Cu;
label_1b6c1c:
    // 0x1b6c1c: 0xc040a74  jal         func_1029D0
label_1b6c20:
    if (ctx->pc == 0x1B6C20u) {
        ctx->pc = 0x1B6C20u;
            // 0x1b6c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C24u;
        goto label_1b6c24;
    }
    ctx->pc = 0x1B6C1Cu;
    SET_GPR_U32(ctx, 31, 0x1B6C24u);
    ctx->pc = 0x1B6C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C1Cu;
            // 0x1b6c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C24u; }
        if (ctx->pc != 0x1B6C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C24u; }
        if (ctx->pc != 0x1B6C24u) { return; }
    }
    ctx->pc = 0x1B6C24u;
label_1b6c24:
    // 0x1b6c24: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1b6c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6c28:
    // 0x1b6c28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b6c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b6c2c:
    // 0x1b6c2c: 0xc050ba4  jal         func_142E90
label_1b6c30:
    if (ctx->pc == 0x1B6C30u) {
        ctx->pc = 0x1B6C30u;
            // 0x1b6c30: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1B6C34u;
        goto label_1b6c34;
    }
    ctx->pc = 0x1B6C2Cu;
    SET_GPR_U32(ctx, 31, 0x1B6C34u);
    ctx->pc = 0x1B6C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C2Cu;
            // 0x1b6c30: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C34u; }
        if (ctx->pc != 0x1B6C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C34u; }
        if (ctx->pc != 0x1B6C34u) { return; }
    }
    ctx->pc = 0x1B6C34u;
label_1b6c34:
    // 0x1b6c34: 0xc040d72  jal         func_1035C8
label_1b6c38:
    if (ctx->pc == 0x1B6C38u) {
        ctx->pc = 0x1B6C38u;
            // 0x1b6c38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1B6C3Cu;
        goto label_1b6c3c;
    }
    ctx->pc = 0x1B6C34u;
    SET_GPR_U32(ctx, 31, 0x1B6C3Cu);
    ctx->pc = 0x1B6C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C34u;
            // 0x1b6c38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C3Cu; }
        if (ctx->pc != 0x1B6C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C3Cu; }
        if (ctx->pc != 0x1B6C3Cu) { return; }
    }
    ctx->pc = 0x1B6C3Cu;
label_1b6c3c:
    // 0x1b6c3c: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1b6c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1b6c40:
    // 0x1b6c40: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1b6c40u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1b6c44:
    // 0x1b6c44: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1b6c44u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1b6c48:
    // 0x1b6c48: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b6c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1b6c4c:
    // 0x1b6c4c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b6c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1b6c50:
    // 0x1b6c50: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1b6c50u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1b6c54:
    // 0x1b6c54: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1b6c54u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1b6c58:
    // 0x1b6c58: 0xc040880  jal         func_102200
label_1b6c5c:
    if (ctx->pc == 0x1B6C5Cu) {
        ctx->pc = 0x1B6C5Cu;
            // 0x1b6c5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C60u;
        goto label_1b6c60;
    }
    ctx->pc = 0x1B6C58u;
    SET_GPR_U32(ctx, 31, 0x1B6C60u);
    ctx->pc = 0x1B6C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C58u;
            // 0x1b6c5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C60u; }
        if (ctx->pc != 0x1B6C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C60u; }
        if (ctx->pc != 0x1B6C60u) { return; }
    }
    ctx->pc = 0x1B6C60u;
label_1b6c60:
    // 0x1b6c60: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1b6c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1b6c64:
    // 0x1b6c64: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1b6c64u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1b6c68:
    // 0x1b6c68: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1b6c68u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1b6c6c:
    // 0x1b6c6c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b6c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1b6c70:
    // 0x1b6c70: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b6c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1b6c74:
    // 0x1b6c74: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1b6c74u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1b6c78:
    // 0x1b6c78: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1b6c78u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1b6c7c:
    // 0x1b6c7c: 0xc040866  jal         func_102198
label_1b6c80:
    if (ctx->pc == 0x1B6C80u) {
        ctx->pc = 0x1B6C80u;
            // 0x1b6c80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C84u;
        goto label_1b6c84;
    }
    ctx->pc = 0x1B6C7Cu;
    SET_GPR_U32(ctx, 31, 0x1B6C84u);
    ctx->pc = 0x1B6C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C7Cu;
            // 0x1b6c80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C84u; }
        if (ctx->pc != 0x1B6C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C84u; }
        if (ctx->pc != 0x1B6C84u) { return; }
    }
    ctx->pc = 0x1B6C84u;
label_1b6c84:
    // 0x1b6c84: 0xc040a74  jal         func_1029D0
label_1b6c88:
    if (ctx->pc == 0x1B6C88u) {
        ctx->pc = 0x1B6C88u;
            // 0x1b6c88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C8Cu;
        goto label_1b6c8c;
    }
    ctx->pc = 0x1B6C84u;
    SET_GPR_U32(ctx, 31, 0x1B6C8Cu);
    ctx->pc = 0x1B6C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C84u;
            // 0x1b6c88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C8Cu; }
        if (ctx->pc != 0x1B6C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C8Cu; }
        if (ctx->pc != 0x1B6C8Cu) { return; }
    }
    ctx->pc = 0x1B6C8Cu;
label_1b6c8c:
    // 0x1b6c8c: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1b6c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6c90:
    // 0x1b6c90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b6c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b6c94:
    // 0x1b6c94: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1b6c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1b6c98:
    // 0x1b6c98: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1b6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1b6c9c:
    // 0x1b6c9c: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x1b6c9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
label_1b6ca0:
    // 0x1b6ca0: 0x1420011d  bnez        $at, . + 4 + (0x11D << 2)
label_1b6ca4:
    if (ctx->pc == 0x1B6CA4u) {
        ctx->pc = 0x1B6CA8u;
        goto label_1b6ca8;
    }
    ctx->pc = 0x1B6CA0u;
    {
        const bool branch_taken_0x1b6ca0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ca0) {
            ctx->pc = 0x1B7118u;
            goto label_1b7118;
        }
    }
    ctx->pc = 0x1B6CA8u;
label_1b6ca8:
    // 0x1b6ca8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b6ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6cac:
    // 0x1b6cac: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b6cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b6cb0:
    // 0x1b6cb0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b6cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6cb4:
    // 0x1b6cb4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b6cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b6cb8:
    // 0x1b6cb8: 0xc05d080  jal         func_174200
label_1b6cbc:
    if (ctx->pc == 0x1B6CBCu) {
        ctx->pc = 0x1B6CBCu;
            // 0x1b6cbc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B6CC0u;
        goto label_1b6cc0;
    }
    ctx->pc = 0x1B6CB8u;
    SET_GPR_U32(ctx, 31, 0x1B6CC0u);
    ctx->pc = 0x1B6CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6CB8u;
            // 0x1b6cbc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CC0u; }
        if (ctx->pc != 0x1B6CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CC0u; }
        if (ctx->pc != 0x1B6CC0u) { return; }
    }
    ctx->pc = 0x1B6CC0u;
label_1b6cc0:
    // 0x1b6cc0: 0xc050bb4  jal         func_142ED0
label_1b6cc4:
    if (ctx->pc == 0x1B6CC4u) {
        ctx->pc = 0x1B6CC8u;
        goto label_1b6cc8;
    }
    ctx->pc = 0x1B6CC0u;
    SET_GPR_U32(ctx, 31, 0x1B6CC8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CC8u; }
        if (ctx->pc != 0x1B6CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CC8u; }
        if (ctx->pc != 0x1B6CC8u) { return; }
    }
    ctx->pc = 0x1B6CC8u;
label_1b6cc8:
    // 0x1b6cc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b6cc8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1b6ccc:
    // 0x1b6ccc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b6cd0:
    if (ctx->pc == 0x1B6CD0u) {
        ctx->pc = 0x1B6CD4u;
        goto label_1b6cd4;
    }
    ctx->pc = 0x1B6CCCu;
    {
        const bool branch_taken_0x1b6ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ccc) {
            ctx->pc = 0x1B6CF0u;
            goto label_1b6cf0;
        }
    }
    ctx->pc = 0x1B6CD4u;
label_1b6cd4:
    // 0x1b6cd4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b6cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6cd8:
    // 0x1b6cd8: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1b6cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1b6cdc:
    // 0x1b6cdc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b6cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6ce0:
    // 0x1b6ce0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b6ce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b6ce4:
    // 0x1b6ce4: 0xc05d080  jal         func_174200
label_1b6ce8:
    if (ctx->pc == 0x1B6CE8u) {
        ctx->pc = 0x1B6CE8u;
            // 0x1b6ce8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B6CECu;
        goto label_1b6cec;
    }
    ctx->pc = 0x1B6CE4u;
    SET_GPR_U32(ctx, 31, 0x1B6CECu);
    ctx->pc = 0x1B6CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6CE4u;
            // 0x1b6ce8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CECu; }
        if (ctx->pc != 0x1B6CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CECu; }
        if (ctx->pc != 0x1B6CECu) { return; }
    }
    ctx->pc = 0x1B6CECu;
label_1b6cec:
    // 0x1b6cec: 0x0  nop
    ctx->pc = 0x1b6cecu;
    // NOP
label_1b6cf0:
    // 0x1b6cf0: 0xc050bb4  jal         func_142ED0
label_1b6cf4:
    if (ctx->pc == 0x1B6CF4u) {
        ctx->pc = 0x1B6CF8u;
        goto label_1b6cf8;
    }
    ctx->pc = 0x1B6CF0u;
    SET_GPR_U32(ctx, 31, 0x1B6CF8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CF8u; }
        if (ctx->pc != 0x1B6CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CF8u; }
        if (ctx->pc != 0x1B6CF8u) { return; }
    }
    ctx->pc = 0x1B6CF8u;
label_1b6cf8:
    // 0x1b6cf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b6cf8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1b6cfc:
    // 0x1b6cfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b6d00:
    if (ctx->pc == 0x1B6D00u) {
        ctx->pc = 0x1B6D04u;
        goto label_1b6d04;
    }
    ctx->pc = 0x1B6CFCu;
    {
        const bool branch_taken_0x1b6cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6cfc) {
            ctx->pc = 0x1B6D20u;
            goto label_1b6d20;
        }
    }
    ctx->pc = 0x1B6D04u;
label_1b6d04:
    // 0x1b6d04: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b6d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6d08:
    // 0x1b6d08: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1b6d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b6d0c:
    // 0x1b6d0c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b6d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6d10:
    // 0x1b6d10: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b6d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b6d14:
    // 0x1b6d14: 0xc05d080  jal         func_174200
label_1b6d18:
    if (ctx->pc == 0x1B6D18u) {
        ctx->pc = 0x1B6D18u;
            // 0x1b6d18: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B6D1Cu;
        goto label_1b6d1c;
    }
    ctx->pc = 0x1B6D14u;
    SET_GPR_U32(ctx, 31, 0x1B6D1Cu);
    ctx->pc = 0x1B6D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D14u;
            // 0x1b6d18: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D1Cu; }
        if (ctx->pc != 0x1B6D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D1Cu; }
        if (ctx->pc != 0x1B6D1Cu) { return; }
    }
    ctx->pc = 0x1B6D1Cu;
label_1b6d1c:
    // 0x1b6d1c: 0x0  nop
    ctx->pc = 0x1b6d1cu;
    // NOP
label_1b6d20:
    // 0x1b6d20: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1b6d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b6d24:
    // 0x1b6d24: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1b6d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b6d28:
    // 0x1b6d28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b6d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6d2c:
    // 0x1b6d2c: 0xc053740  jal         func_14DD00
label_1b6d30:
    if (ctx->pc == 0x1B6D30u) {
        ctx->pc = 0x1B6D30u;
            // 0x1b6d30: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1B6D34u;
        goto label_1b6d34;
    }
    ctx->pc = 0x1B6D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B6D34u);
    ctx->pc = 0x1B6D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D2Cu;
            // 0x1b6d30: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D34u; }
        if (ctx->pc != 0x1B6D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D34u; }
        if (ctx->pc != 0x1B6D34u) { return; }
    }
    ctx->pc = 0x1B6D34u;
label_1b6d34:
    // 0x1b6d34: 0xc050bb4  jal         func_142ED0
label_1b6d38:
    if (ctx->pc == 0x1B6D38u) {
        ctx->pc = 0x1B6D3Cu;
        goto label_1b6d3c;
    }
    ctx->pc = 0x1B6D34u;
    SET_GPR_U32(ctx, 31, 0x1B6D3Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D3Cu; }
        if (ctx->pc != 0x1B6D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D3Cu; }
        if (ctx->pc != 0x1B6D3Cu) { return; }
    }
    ctx->pc = 0x1B6D3Cu;
label_1b6d3c:
    // 0x1b6d3c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1b6d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6d40:
    // 0x1b6d40: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b6d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b6d44:
    // 0x1b6d44: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b6d44u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6d48:
    // 0x1b6d48: 0x0  nop
    ctx->pc = 0x1b6d48u;
    // NOP
label_1b6d4c:
    // 0x1b6d4c: 0x0  nop
    ctx->pc = 0x1b6d4cu;
    // NOP
label_1b6d50:
    // 0x1b6d50: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6d50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6d54:
    // 0x1b6d54: 0xc050bb4  jal         func_142ED0
label_1b6d58:
    if (ctx->pc == 0x1B6D58u) {
        ctx->pc = 0x1B6D58u;
            // 0x1b6d58: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6D5Cu;
        goto label_1b6d5c;
    }
    ctx->pc = 0x1B6D54u;
    SET_GPR_U32(ctx, 31, 0x1B6D5Cu);
    ctx->pc = 0x1B6D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D54u;
            // 0x1b6d58: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D5Cu; }
        if (ctx->pc != 0x1B6D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D5Cu; }
        if (ctx->pc != 0x1B6D5Cu) { return; }
    }
    ctx->pc = 0x1B6D5Cu;
label_1b6d5c:
    // 0x1b6d5c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1b6d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6d60:
    // 0x1b6d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d64:
    // 0x1b6d64: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b6d64u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6d68:
    // 0x1b6d68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b6d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6d6c:
    // 0x1b6d6c: 0x0  nop
    ctx->pc = 0x1b6d6cu;
    // NOP
label_1b6d70:
    // 0x1b6d70: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b6d70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b6d74:
    // 0x1b6d74: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1b6d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b6d78:
    // 0x1b6d78: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6d78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b6d7c:
    // 0x1b6d7c: 0xc053740  jal         func_14DD00
label_1b6d80:
    if (ctx->pc == 0x1B6D80u) {
        ctx->pc = 0x1B6D80u;
            // 0x1b6d80: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1B6D84u;
        goto label_1b6d84;
    }
    ctx->pc = 0x1B6D7Cu;
    SET_GPR_U32(ctx, 31, 0x1B6D84u);
    ctx->pc = 0x1B6D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D7Cu;
            // 0x1b6d80: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D84u; }
        if (ctx->pc != 0x1B6D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D84u; }
        if (ctx->pc != 0x1B6D84u) { return; }
    }
    ctx->pc = 0x1B6D84u;
label_1b6d84:
    // 0x1b6d84: 0xc050bb4  jal         func_142ED0
label_1b6d88:
    if (ctx->pc == 0x1B6D88u) {
        ctx->pc = 0x1B6D8Cu;
        goto label_1b6d8c;
    }
    ctx->pc = 0x1B6D84u;
    SET_GPR_U32(ctx, 31, 0x1B6D8Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D8Cu; }
        if (ctx->pc != 0x1B6D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D8Cu; }
        if (ctx->pc != 0x1B6D8Cu) { return; }
    }
    ctx->pc = 0x1B6D8Cu;
label_1b6d8c:
    // 0x1b6d8c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1b6d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6d90:
    // 0x1b6d90: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b6d94:
    // 0x1b6d94: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b6d94u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6d98:
    // 0x1b6d98: 0x0  nop
    ctx->pc = 0x1b6d98u;
    // NOP
label_1b6d9c:
    // 0x1b6d9c: 0x0  nop
    ctx->pc = 0x1b6d9cu;
    // NOP
label_1b6da0:
    // 0x1b6da0: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6da0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6da4:
    // 0x1b6da4: 0xc050bb4  jal         func_142ED0
label_1b6da8:
    if (ctx->pc == 0x1B6DA8u) {
        ctx->pc = 0x1B6DA8u;
            // 0x1b6da8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6DACu;
        goto label_1b6dac;
    }
    ctx->pc = 0x1B6DA4u;
    SET_GPR_U32(ctx, 31, 0x1B6DACu);
    ctx->pc = 0x1B6DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DA4u;
            // 0x1b6da8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DACu; }
        if (ctx->pc != 0x1B6DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DACu; }
        if (ctx->pc != 0x1B6DACu) { return; }
    }
    ctx->pc = 0x1B6DACu;
label_1b6dac:
    // 0x1b6dac: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1b6dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6db0:
    // 0x1b6db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6db4:
    // 0x1b6db4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b6db4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6db8:
    // 0x1b6db8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b6db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6dbc:
    // 0x1b6dbc: 0x0  nop
    ctx->pc = 0x1b6dbcu;
    // NOP
label_1b6dc0:
    // 0x1b6dc0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b6dc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b6dc4:
    // 0x1b6dc4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1b6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b6dc8:
    // 0x1b6dc8: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6dc8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b6dcc:
    // 0x1b6dcc: 0xc053740  jal         func_14DD00
label_1b6dd0:
    if (ctx->pc == 0x1B6DD0u) {
        ctx->pc = 0x1B6DD0u;
            // 0x1b6dd0: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1B6DD4u;
        goto label_1b6dd4;
    }
    ctx->pc = 0x1B6DCCu;
    SET_GPR_U32(ctx, 31, 0x1B6DD4u);
    ctx->pc = 0x1B6DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DCCu;
            // 0x1b6dd0: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DD4u; }
        if (ctx->pc != 0x1B6DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DD4u; }
        if (ctx->pc != 0x1B6DD4u) { return; }
    }
    ctx->pc = 0x1B6DD4u;
label_1b6dd4:
    // 0x1b6dd4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1b6dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b6dd8:
    // 0x1b6dd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b6dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6ddc:
    // 0x1b6ddc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1b6ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b6de0:
    // 0x1b6de0: 0xc053740  jal         func_14DD00
label_1b6de4:
    if (ctx->pc == 0x1B6DE4u) {
        ctx->pc = 0x1B6DE4u;
            // 0x1b6de4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1B6DE8u;
        goto label_1b6de8;
    }
    ctx->pc = 0x1B6DE0u;
    SET_GPR_U32(ctx, 31, 0x1B6DE8u);
    ctx->pc = 0x1B6DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DE0u;
            // 0x1b6de4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DE8u; }
        if (ctx->pc != 0x1B6DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DE8u; }
        if (ctx->pc != 0x1B6DE8u) { return; }
    }
    ctx->pc = 0x1B6DE8u;
label_1b6de8:
    // 0x1b6de8: 0xc050bb4  jal         func_142ED0
label_1b6dec:
    if (ctx->pc == 0x1B6DECu) {
        ctx->pc = 0x1B6DF0u;
        goto label_1b6df0;
    }
    ctx->pc = 0x1B6DE8u;
    SET_GPR_U32(ctx, 31, 0x1B6DF0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DF0u; }
        if (ctx->pc != 0x1B6DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DF0u; }
        if (ctx->pc != 0x1B6DF0u) { return; }
    }
    ctx->pc = 0x1B6DF0u;
label_1b6df0:
    // 0x1b6df0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1b6df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6df4:
    // 0x1b6df4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b6df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b6df8:
    // 0x1b6df8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b6df8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6dfc:
    // 0x1b6dfc: 0x0  nop
    ctx->pc = 0x1b6dfcu;
    // NOP
label_1b6e00:
    // 0x1b6e00: 0x0  nop
    ctx->pc = 0x1b6e00u;
    // NOP
label_1b6e04:
    // 0x1b6e04: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6e04u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6e08:
    // 0x1b6e08: 0xc050bb4  jal         func_142ED0
label_1b6e0c:
    if (ctx->pc == 0x1B6E0Cu) {
        ctx->pc = 0x1B6E0Cu;
            // 0x1b6e0c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6E10u;
        goto label_1b6e10;
    }
    ctx->pc = 0x1B6E08u;
    SET_GPR_U32(ctx, 31, 0x1B6E10u);
    ctx->pc = 0x1B6E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E08u;
            // 0x1b6e0c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E10u; }
        if (ctx->pc != 0x1B6E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E10u; }
        if (ctx->pc != 0x1B6E10u) { return; }
    }
    ctx->pc = 0x1B6E10u;
label_1b6e10:
    // 0x1b6e10: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1b6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6e14:
    // 0x1b6e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e18:
    // 0x1b6e18: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b6e18u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6e1c:
    // 0x1b6e1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b6e20:
    // 0x1b6e20: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1b6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b6e24:
    // 0x1b6e24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b6e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6e28:
    // 0x1b6e28: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6e28u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6e2c:
    // 0x1b6e2c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b6e2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b6e30:
    // 0x1b6e30: 0xc053740  jal         func_14DD00
label_1b6e34:
    if (ctx->pc == 0x1B6E34u) {
        ctx->pc = 0x1B6E34u;
            // 0x1b6e34: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6E38u;
        goto label_1b6e38;
    }
    ctx->pc = 0x1B6E30u;
    SET_GPR_U32(ctx, 31, 0x1B6E38u);
    ctx->pc = 0x1B6E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E30u;
            // 0x1b6e34: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E38u; }
        if (ctx->pc != 0x1B6E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E38u; }
        if (ctx->pc != 0x1B6E38u) { return; }
    }
    ctx->pc = 0x1B6E38u;
label_1b6e38:
    // 0x1b6e38: 0xc050bb4  jal         func_142ED0
label_1b6e3c:
    if (ctx->pc == 0x1B6E3Cu) {
        ctx->pc = 0x1B6E40u;
        goto label_1b6e40;
    }
    ctx->pc = 0x1B6E38u;
    SET_GPR_U32(ctx, 31, 0x1B6E40u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E40u; }
        if (ctx->pc != 0x1B6E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E40u; }
        if (ctx->pc != 0x1B6E40u) { return; }
    }
    ctx->pc = 0x1B6E40u;
label_1b6e40:
    // 0x1b6e40: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1b6e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6e44:
    // 0x1b6e44: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b6e48:
    // 0x1b6e48: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b6e48u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6e4c:
    // 0x1b6e4c: 0x0  nop
    ctx->pc = 0x1b6e4cu;
    // NOP
label_1b6e50:
    // 0x1b6e50: 0x0  nop
    ctx->pc = 0x1b6e50u;
    // NOP
label_1b6e54:
    // 0x1b6e54: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6e54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6e58:
    // 0x1b6e58: 0xc050bb4  jal         func_142ED0
label_1b6e5c:
    if (ctx->pc == 0x1B6E5Cu) {
        ctx->pc = 0x1B6E5Cu;
            // 0x1b6e5c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6E60u;
        goto label_1b6e60;
    }
    ctx->pc = 0x1B6E58u;
    SET_GPR_U32(ctx, 31, 0x1B6E60u);
    ctx->pc = 0x1B6E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E58u;
            // 0x1b6e5c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E60u; }
        if (ctx->pc != 0x1B6E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E60u; }
        if (ctx->pc != 0x1B6E60u) { return; }
    }
    ctx->pc = 0x1B6E60u;
label_1b6e60:
    // 0x1b6e60: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1b6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6e64:
    // 0x1b6e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e68:
    // 0x1b6e68: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b6e68u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6e6c:
    // 0x1b6e6c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b6e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b6e70:
    // 0x1b6e70: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1b6e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b6e74:
    // 0x1b6e74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b6e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6e78:
    // 0x1b6e78: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6e78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6e7c:
    // 0x1b6e7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b6e7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b6e80:
    // 0x1b6e80: 0xc053740  jal         func_14DD00
label_1b6e84:
    if (ctx->pc == 0x1B6E84u) {
        ctx->pc = 0x1B6E84u;
            // 0x1b6e84: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6E88u;
        goto label_1b6e88;
    }
    ctx->pc = 0x1B6E80u;
    SET_GPR_U32(ctx, 31, 0x1B6E88u);
    ctx->pc = 0x1B6E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E80u;
            // 0x1b6e84: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E88u; }
        if (ctx->pc != 0x1B6E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E88u; }
        if (ctx->pc != 0x1B6E88u) { return; }
    }
    ctx->pc = 0x1B6E88u;
label_1b6e88:
    // 0x1b6e88: 0xc050bb4  jal         func_142ED0
label_1b6e8c:
    if (ctx->pc == 0x1B6E8Cu) {
        ctx->pc = 0x1B6E90u;
        goto label_1b6e90;
    }
    ctx->pc = 0x1B6E88u;
    SET_GPR_U32(ctx, 31, 0x1B6E90u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E90u; }
        if (ctx->pc != 0x1B6E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E90u; }
        if (ctx->pc != 0x1B6E90u) { return; }
    }
    ctx->pc = 0x1B6E90u;
label_1b6e90:
    // 0x1b6e90: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1b6e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6e94:
    // 0x1b6e94: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b6e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b6e98:
    // 0x1b6e98: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b6e98u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6e9c:
    // 0x1b6e9c: 0x0  nop
    ctx->pc = 0x1b6e9cu;
    // NOP
label_1b6ea0:
    // 0x1b6ea0: 0x0  nop
    ctx->pc = 0x1b6ea0u;
    // NOP
label_1b6ea4:
    // 0x1b6ea4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6ea4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6ea8:
    // 0x1b6ea8: 0xc050bb4  jal         func_142ED0
label_1b6eac:
    if (ctx->pc == 0x1B6EACu) {
        ctx->pc = 0x1B6EACu;
            // 0x1b6eac: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6EB0u;
        goto label_1b6eb0;
    }
    ctx->pc = 0x1B6EA8u;
    SET_GPR_U32(ctx, 31, 0x1B6EB0u);
    ctx->pc = 0x1B6EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6EA8u;
            // 0x1b6eac: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EB0u; }
        if (ctx->pc != 0x1B6EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EB0u; }
        if (ctx->pc != 0x1B6EB0u) { return; }
    }
    ctx->pc = 0x1B6EB0u;
label_1b6eb0:
    // 0x1b6eb0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1b6eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6eb4:
    // 0x1b6eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6eb8:
    // 0x1b6eb8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b6eb8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6ebc:
    // 0x1b6ebc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b6ec0:
    // 0x1b6ec0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1b6ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b6ec4:
    // 0x1b6ec4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b6ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6ec8:
    // 0x1b6ec8: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6ec8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6ecc:
    // 0x1b6ecc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b6eccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b6ed0:
    // 0x1b6ed0: 0xc053740  jal         func_14DD00
label_1b6ed4:
    if (ctx->pc == 0x1B6ED4u) {
        ctx->pc = 0x1B6ED4u;
            // 0x1b6ed4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6ED8u;
        goto label_1b6ed8;
    }
    ctx->pc = 0x1B6ED0u;
    SET_GPR_U32(ctx, 31, 0x1B6ED8u);
    ctx->pc = 0x1B6ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6ED0u;
            // 0x1b6ed4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6ED8u; }
        if (ctx->pc != 0x1B6ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6ED8u; }
        if (ctx->pc != 0x1B6ED8u) { return; }
    }
    ctx->pc = 0x1B6ED8u;
label_1b6ed8:
    // 0x1b6ed8: 0xc050bb4  jal         func_142ED0
label_1b6edc:
    if (ctx->pc == 0x1B6EDCu) {
        ctx->pc = 0x1B6EE0u;
        goto label_1b6ee0;
    }
    ctx->pc = 0x1B6ED8u;
    SET_GPR_U32(ctx, 31, 0x1B6EE0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EE0u; }
        if (ctx->pc != 0x1B6EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EE0u; }
        if (ctx->pc != 0x1B6EE0u) { return; }
    }
    ctx->pc = 0x1B6EE0u;
label_1b6ee0:
    // 0x1b6ee0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1b6ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6ee4:
    // 0x1b6ee4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b6ee8:
    // 0x1b6ee8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b6ee8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6eec:
    // 0x1b6eec: 0x0  nop
    ctx->pc = 0x1b6eecu;
    // NOP
label_1b6ef0:
    // 0x1b6ef0: 0x0  nop
    ctx->pc = 0x1b6ef0u;
    // NOP
label_1b6ef4:
    // 0x1b6ef4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6ef4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6ef8:
    // 0x1b6ef8: 0xc050bb4  jal         func_142ED0
label_1b6efc:
    if (ctx->pc == 0x1B6EFCu) {
        ctx->pc = 0x1B6EFCu;
            // 0x1b6efc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6F00u;
        goto label_1b6f00;
    }
    ctx->pc = 0x1B6EF8u;
    SET_GPR_U32(ctx, 31, 0x1B6F00u);
    ctx->pc = 0x1B6EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6EF8u;
            // 0x1b6efc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F00u; }
        if (ctx->pc != 0x1B6F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F00u; }
        if (ctx->pc != 0x1B6F00u) { return; }
    }
    ctx->pc = 0x1B6F00u;
label_1b6f00:
    // 0x1b6f00: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1b6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6f04:
    // 0x1b6f04: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1b6f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b6f08:
    // 0x1b6f08: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b6f08u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6f0c:
    // 0x1b6f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f10:
    // 0x1b6f10: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1b6f14:
    // 0x1b6f14: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b6f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1b6f18:
    // 0x1b6f18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b6f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b6f1c:
    // 0x1b6f1c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b6f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6f20:
    // 0x1b6f20: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6f20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6f24:
    // 0x1b6f24: 0xc053740  jal         func_14DD00
label_1b6f28:
    if (ctx->pc == 0x1B6F28u) {
        ctx->pc = 0x1B6F28u;
            // 0x1b6f28: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6F2Cu;
        goto label_1b6f2c;
    }
    ctx->pc = 0x1B6F24u;
    SET_GPR_U32(ctx, 31, 0x1B6F2Cu);
    ctx->pc = 0x1B6F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F24u;
            // 0x1b6f28: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F2Cu; }
        if (ctx->pc != 0x1B6F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F2Cu; }
        if (ctx->pc != 0x1B6F2Cu) { return; }
    }
    ctx->pc = 0x1B6F2Cu;
label_1b6f2c:
    // 0x1b6f2c: 0xc050bb4  jal         func_142ED0
label_1b6f30:
    if (ctx->pc == 0x1B6F30u) {
        ctx->pc = 0x1B6F34u;
        goto label_1b6f34;
    }
    ctx->pc = 0x1B6F2Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F34u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F34u; }
        if (ctx->pc != 0x1B6F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F34u; }
        if (ctx->pc != 0x1B6F34u) { return; }
    }
    ctx->pc = 0x1B6F34u;
label_1b6f34:
    // 0x1b6f34: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1b6f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6f38:
    // 0x1b6f38: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b6f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b6f3c:
    // 0x1b6f3c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b6f3cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6f40:
    // 0x1b6f40: 0x0  nop
    ctx->pc = 0x1b6f40u;
    // NOP
label_1b6f44:
    // 0x1b6f44: 0x0  nop
    ctx->pc = 0x1b6f44u;
    // NOP
label_1b6f48:
    // 0x1b6f48: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6f48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6f4c:
    // 0x1b6f4c: 0xc050bb4  jal         func_142ED0
label_1b6f50:
    if (ctx->pc == 0x1B6F50u) {
        ctx->pc = 0x1B6F50u;
            // 0x1b6f50: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6F54u;
        goto label_1b6f54;
    }
    ctx->pc = 0x1B6F4Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F54u);
    ctx->pc = 0x1B6F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F4Cu;
            // 0x1b6f50: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F54u; }
        if (ctx->pc != 0x1B6F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F54u; }
        if (ctx->pc != 0x1B6F54u) { return; }
    }
    ctx->pc = 0x1B6F54u;
label_1b6f54:
    // 0x1b6f54: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1b6f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6f58:
    // 0x1b6f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f5c:
    // 0x1b6f5c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b6f5cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6f60:
    // 0x1b6f60: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1b6f64:
    // 0x1b6f64: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1b6f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b6f68:
    // 0x1b6f68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b6f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6f6c:
    // 0x1b6f6c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6f6cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6f70:
    // 0x1b6f70: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b6f70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b6f74:
    // 0x1b6f74: 0xc053740  jal         func_14DD00
label_1b6f78:
    if (ctx->pc == 0x1B6F78u) {
        ctx->pc = 0x1B6F78u;
            // 0x1b6f78: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6F7Cu;
        goto label_1b6f7c;
    }
    ctx->pc = 0x1B6F74u;
    SET_GPR_U32(ctx, 31, 0x1B6F7Cu);
    ctx->pc = 0x1B6F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F74u;
            // 0x1b6f78: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F7Cu; }
        if (ctx->pc != 0x1B6F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F7Cu; }
        if (ctx->pc != 0x1B6F7Cu) { return; }
    }
    ctx->pc = 0x1B6F7Cu;
label_1b6f7c:
    // 0x1b6f7c: 0xc050bb4  jal         func_142ED0
label_1b6f80:
    if (ctx->pc == 0x1B6F80u) {
        ctx->pc = 0x1B6F84u;
        goto label_1b6f84;
    }
    ctx->pc = 0x1B6F7Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F84u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F84u; }
        if (ctx->pc != 0x1B6F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F84u; }
        if (ctx->pc != 0x1B6F84u) { return; }
    }
    ctx->pc = 0x1B6F84u;
label_1b6f84:
    // 0x1b6f84: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1b6f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6f88:
    // 0x1b6f88: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b6f8c:
    // 0x1b6f8c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b6f8cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6f90:
    // 0x1b6f90: 0x0  nop
    ctx->pc = 0x1b6f90u;
    // NOP
label_1b6f94:
    // 0x1b6f94: 0x0  nop
    ctx->pc = 0x1b6f94u;
    // NOP
label_1b6f98:
    // 0x1b6f98: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6f98u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6f9c:
    // 0x1b6f9c: 0xc050bb4  jal         func_142ED0
label_1b6fa0:
    if (ctx->pc == 0x1B6FA0u) {
        ctx->pc = 0x1B6FA0u;
            // 0x1b6fa0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6FA4u;
        goto label_1b6fa4;
    }
    ctx->pc = 0x1B6F9Cu;
    SET_GPR_U32(ctx, 31, 0x1B6FA4u);
    ctx->pc = 0x1B6FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F9Cu;
            // 0x1b6fa0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FA4u; }
        if (ctx->pc != 0x1B6FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FA4u; }
        if (ctx->pc != 0x1B6FA4u) { return; }
    }
    ctx->pc = 0x1B6FA4u;
label_1b6fa4:
    // 0x1b6fa4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1b6fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6fa8:
    // 0x1b6fa8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1b6fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b6fac:
    // 0x1b6fac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b6facu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6fb0:
    // 0x1b6fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6fb4:
    // 0x1b6fb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b6fb8:
    // 0x1b6fb8: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x1b6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_1b6fbc:
    // 0x1b6fbc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b6fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b6fc0:
    // 0x1b6fc0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b6fc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6fc4:
    // 0x1b6fc4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6fc4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6fc8:
    // 0x1b6fc8: 0xc053740  jal         func_14DD00
label_1b6fcc:
    if (ctx->pc == 0x1B6FCCu) {
        ctx->pc = 0x1B6FCCu;
            // 0x1b6fcc: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6FD0u;
        goto label_1b6fd0;
    }
    ctx->pc = 0x1B6FC8u;
    SET_GPR_U32(ctx, 31, 0x1B6FD0u);
    ctx->pc = 0x1B6FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6FC8u;
            // 0x1b6fcc: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FD0u; }
        if (ctx->pc != 0x1B6FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FD0u; }
        if (ctx->pc != 0x1B6FD0u) { return; }
    }
    ctx->pc = 0x1B6FD0u;
label_1b6fd0:
    // 0x1b6fd0: 0xc050bb4  jal         func_142ED0
label_1b6fd4:
    if (ctx->pc == 0x1B6FD4u) {
        ctx->pc = 0x1B6FD8u;
        goto label_1b6fd8;
    }
    ctx->pc = 0x1B6FD0u;
    SET_GPR_U32(ctx, 31, 0x1B6FD8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FD8u; }
        if (ctx->pc != 0x1B6FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FD8u; }
        if (ctx->pc != 0x1B6FD8u) { return; }
    }
    ctx->pc = 0x1B6FD8u;
label_1b6fd8:
    // 0x1b6fd8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1b6fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6fdc:
    // 0x1b6fdc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b6fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b6fe0:
    // 0x1b6fe0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b6fe0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b6fe4:
    // 0x1b6fe4: 0x0  nop
    ctx->pc = 0x1b6fe4u;
    // NOP
label_1b6fe8:
    // 0x1b6fe8: 0x0  nop
    ctx->pc = 0x1b6fe8u;
    // NOP
label_1b6fec:
    // 0x1b6fec: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6fecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6ff0:
    // 0x1b6ff0: 0xc050bb4  jal         func_142ED0
label_1b6ff4:
    if (ctx->pc == 0x1B6FF4u) {
        ctx->pc = 0x1B6FF4u;
            // 0x1b6ff4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B6FF8u;
        goto label_1b6ff8;
    }
    ctx->pc = 0x1B6FF0u;
    SET_GPR_U32(ctx, 31, 0x1B6FF8u);
    ctx->pc = 0x1B6FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6FF0u;
            // 0x1b6ff4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FF8u; }
        if (ctx->pc != 0x1B6FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FF8u; }
        if (ctx->pc != 0x1B6FF8u) { return; }
    }
    ctx->pc = 0x1B6FF8u;
label_1b6ff8:
    // 0x1b6ff8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1b6ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b6ffc:
    // 0x1b6ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b7000:
    // 0x1b7000: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b7000u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b7004:
    // 0x1b7004: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b7004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1b7008:
    // 0x1b7008: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1b7008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b700c:
    // 0x1b700c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b700cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7010:
    // 0x1b7010: 0x1010  mfhi        $v0
    ctx->pc = 0x1b7010u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b7014:
    // 0x1b7014: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b7014u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b7018:
    // 0x1b7018: 0xc053740  jal         func_14DD00
label_1b701c:
    if (ctx->pc == 0x1B701Cu) {
        ctx->pc = 0x1B701Cu;
            // 0x1b701c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B7020u;
        goto label_1b7020;
    }
    ctx->pc = 0x1B7018u;
    SET_GPR_U32(ctx, 31, 0x1B7020u);
    ctx->pc = 0x1B701Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7018u;
            // 0x1b701c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7020u; }
        if (ctx->pc != 0x1B7020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7020u; }
        if (ctx->pc != 0x1B7020u) { return; }
    }
    ctx->pc = 0x1B7020u;
label_1b7020:
    // 0x1b7020: 0xc050bb4  jal         func_142ED0
label_1b7024:
    if (ctx->pc == 0x1B7024u) {
        ctx->pc = 0x1B7028u;
        goto label_1b7028;
    }
    ctx->pc = 0x1B7020u;
    SET_GPR_U32(ctx, 31, 0x1B7028u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7028u; }
        if (ctx->pc != 0x1B7028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7028u; }
        if (ctx->pc != 0x1B7028u) { return; }
    }
    ctx->pc = 0x1B7028u;
label_1b7028:
    // 0x1b7028: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1b7028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b702c:
    // 0x1b702c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b7030:
    // 0x1b7030: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b7030u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b7034:
    // 0x1b7034: 0x0  nop
    ctx->pc = 0x1b7034u;
    // NOP
label_1b7038:
    // 0x1b7038: 0x0  nop
    ctx->pc = 0x1b7038u;
    // NOP
label_1b703c:
    // 0x1b703c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b703cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b7040:
    // 0x1b7040: 0xc050bb4  jal         func_142ED0
label_1b7044:
    if (ctx->pc == 0x1B7044u) {
        ctx->pc = 0x1B7044u;
            // 0x1b7044: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B7048u;
        goto label_1b7048;
    }
    ctx->pc = 0x1B7040u;
    SET_GPR_U32(ctx, 31, 0x1B7048u);
    ctx->pc = 0x1B7044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7040u;
            // 0x1b7044: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7048u; }
        if (ctx->pc != 0x1B7048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7048u; }
        if (ctx->pc != 0x1B7048u) { return; }
    }
    ctx->pc = 0x1B7048u;
label_1b7048:
    // 0x1b7048: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1b7048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b704c:
    // 0x1b704c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b704cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b7050:
    // 0x1b7050: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b7050u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b7054:
    // 0x1b7054: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b7054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1b7058:
    // 0x1b7058: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1b7058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b705c:
    // 0x1b705c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b705cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7060:
    // 0x1b7060: 0x1010  mfhi        $v0
    ctx->pc = 0x1b7060u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b7064:
    // 0x1b7064: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b7064u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b7068:
    // 0x1b7068: 0xc053740  jal         func_14DD00
label_1b706c:
    if (ctx->pc == 0x1B706Cu) {
        ctx->pc = 0x1B706Cu;
            // 0x1b706c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B7070u;
        goto label_1b7070;
    }
    ctx->pc = 0x1B7068u;
    SET_GPR_U32(ctx, 31, 0x1B7070u);
    ctx->pc = 0x1B706Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7068u;
            // 0x1b706c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7070u; }
        if (ctx->pc != 0x1B7070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7070u; }
        if (ctx->pc != 0x1B7070u) { return; }
    }
    ctx->pc = 0x1B7070u;
label_1b7070:
    // 0x1b7070: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1b7070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b7074:
    // 0x1b7074: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1b7074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b7078:
    // 0x1b7078: 0xc07b0ac  jal         func_1EC2B0
label_1b707c:
    if (ctx->pc == 0x1B707Cu) {
        ctx->pc = 0x1B707Cu;
            // 0x1b707c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B7080u;
        goto label_1b7080;
    }
    ctx->pc = 0x1B7078u;
    SET_GPR_U32(ctx, 31, 0x1B7080u);
    ctx->pc = 0x1B707Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7078u;
            // 0x1b707c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7080u; }
        if (ctx->pc != 0x1B7080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7080u; }
        if (ctx->pc != 0x1B7080u) { return; }
    }
    ctx->pc = 0x1B7080u;
label_1b7080:
    // 0x1b7080: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1b7080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1b7084:
    // 0x1b7084: 0x40f809  jalr        $v0
label_1b7088:
    if (ctx->pc == 0x1B7088u) {
        ctx->pc = 0x1B7088u;
            // 0x1b7088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B708Cu;
        goto label_1b708c;
    }
    ctx->pc = 0x1B7084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B708Cu);
        ctx->pc = 0x1B7088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7084u;
            // 0x1b7088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5B60u: goto label_1b5b60;
            case 0x1B5B64u: goto label_1b5b64;
            case 0x1B5B68u: goto label_1b5b68;
            case 0x1B5B6Cu: goto label_1b5b6c;
            case 0x1B5B70u: goto label_1b5b70;
            case 0x1B5B74u: goto label_1b5b74;
            case 0x1B5B78u: goto label_1b5b78;
            case 0x1B5B7Cu: goto label_1b5b7c;
            case 0x1B5B80u: goto label_1b5b80;
            case 0x1B5B84u: goto label_1b5b84;
            case 0x1B5B88u: goto label_1b5b88;
            case 0x1B5B8Cu: goto label_1b5b8c;
            case 0x1B5B90u: goto label_1b5b90;
            case 0x1B5B94u: goto label_1b5b94;
            case 0x1B5B98u: goto label_1b5b98;
            case 0x1B5B9Cu: goto label_1b5b9c;
            case 0x1B5BA0u: goto label_1b5ba0;
            case 0x1B5BA4u: goto label_1b5ba4;
            case 0x1B5BA8u: goto label_1b5ba8;
            case 0x1B5BACu: goto label_1b5bac;
            case 0x1B5BB0u: goto label_1b5bb0;
            case 0x1B5BB4u: goto label_1b5bb4;
            case 0x1B5BB8u: goto label_1b5bb8;
            case 0x1B5BBCu: goto label_1b5bbc;
            case 0x1B5BC0u: goto label_1b5bc0;
            case 0x1B5BC4u: goto label_1b5bc4;
            case 0x1B5BC8u: goto label_1b5bc8;
            case 0x1B5BCCu: goto label_1b5bcc;
            case 0x1B5BD0u: goto label_1b5bd0;
            case 0x1B5BD4u: goto label_1b5bd4;
            case 0x1B5BD8u: goto label_1b5bd8;
            case 0x1B5BDCu: goto label_1b5bdc;
            case 0x1B5BE0u: goto label_1b5be0;
            case 0x1B5BE4u: goto label_1b5be4;
            case 0x1B5BE8u: goto label_1b5be8;
            case 0x1B5BECu: goto label_1b5bec;
            case 0x1B5BF0u: goto label_1b5bf0;
            case 0x1B5BF4u: goto label_1b5bf4;
            case 0x1B5BF8u: goto label_1b5bf8;
            case 0x1B5BFCu: goto label_1b5bfc;
            case 0x1B5C00u: goto label_1b5c00;
            case 0x1B5C04u: goto label_1b5c04;
            case 0x1B5C08u: goto label_1b5c08;
            case 0x1B5C0Cu: goto label_1b5c0c;
            case 0x1B5C10u: goto label_1b5c10;
            case 0x1B5C14u: goto label_1b5c14;
            case 0x1B5C18u: goto label_1b5c18;
            case 0x1B5C1Cu: goto label_1b5c1c;
            case 0x1B5C20u: goto label_1b5c20;
            case 0x1B5C24u: goto label_1b5c24;
            case 0x1B5C28u: goto label_1b5c28;
            case 0x1B5C2Cu: goto label_1b5c2c;
            case 0x1B5C30u: goto label_1b5c30;
            case 0x1B5C34u: goto label_1b5c34;
            case 0x1B5C38u: goto label_1b5c38;
            case 0x1B5C3Cu: goto label_1b5c3c;
            case 0x1B5C40u: goto label_1b5c40;
            case 0x1B5C44u: goto label_1b5c44;
            case 0x1B5C48u: goto label_1b5c48;
            case 0x1B5C4Cu: goto label_1b5c4c;
            case 0x1B5C50u: goto label_1b5c50;
            case 0x1B5C54u: goto label_1b5c54;
            case 0x1B5C58u: goto label_1b5c58;
            case 0x1B5C5Cu: goto label_1b5c5c;
            case 0x1B5C60u: goto label_1b5c60;
            case 0x1B5C64u: goto label_1b5c64;
            case 0x1B5C68u: goto label_1b5c68;
            case 0x1B5C6Cu: goto label_1b5c6c;
            case 0x1B5C70u: goto label_1b5c70;
            case 0x1B5C74u: goto label_1b5c74;
            case 0x1B5C78u: goto label_1b5c78;
            case 0x1B5C7Cu: goto label_1b5c7c;
            case 0x1B5C80u: goto label_1b5c80;
            case 0x1B5C84u: goto label_1b5c84;
            case 0x1B5C88u: goto label_1b5c88;
            case 0x1B5C8Cu: goto label_1b5c8c;
            case 0x1B5C90u: goto label_1b5c90;
            case 0x1B5C94u: goto label_1b5c94;
            case 0x1B5C98u: goto label_1b5c98;
            case 0x1B5C9Cu: goto label_1b5c9c;
            case 0x1B5CA0u: goto label_1b5ca0;
            case 0x1B5CA4u: goto label_1b5ca4;
            case 0x1B5CA8u: goto label_1b5ca8;
            case 0x1B5CACu: goto label_1b5cac;
            case 0x1B5CB0u: goto label_1b5cb0;
            case 0x1B5CB4u: goto label_1b5cb4;
            case 0x1B5CB8u: goto label_1b5cb8;
            case 0x1B5CBCu: goto label_1b5cbc;
            case 0x1B5CC0u: goto label_1b5cc0;
            case 0x1B5CC4u: goto label_1b5cc4;
            case 0x1B5CC8u: goto label_1b5cc8;
            case 0x1B5CCCu: goto label_1b5ccc;
            case 0x1B5CD0u: goto label_1b5cd0;
            case 0x1B5CD4u: goto label_1b5cd4;
            case 0x1B5CD8u: goto label_1b5cd8;
            case 0x1B5CDCu: goto label_1b5cdc;
            case 0x1B5CE0u: goto label_1b5ce0;
            case 0x1B5CE4u: goto label_1b5ce4;
            case 0x1B5CE8u: goto label_1b5ce8;
            case 0x1B5CECu: goto label_1b5cec;
            case 0x1B5CF0u: goto label_1b5cf0;
            case 0x1B5CF4u: goto label_1b5cf4;
            case 0x1B5CF8u: goto label_1b5cf8;
            case 0x1B5CFCu: goto label_1b5cfc;
            case 0x1B5D00u: goto label_1b5d00;
            case 0x1B5D04u: goto label_1b5d04;
            case 0x1B5D08u: goto label_1b5d08;
            case 0x1B5D0Cu: goto label_1b5d0c;
            case 0x1B5D10u: goto label_1b5d10;
            case 0x1B5D14u: goto label_1b5d14;
            case 0x1B5D18u: goto label_1b5d18;
            case 0x1B5D1Cu: goto label_1b5d1c;
            case 0x1B5D20u: goto label_1b5d20;
            case 0x1B5D24u: goto label_1b5d24;
            case 0x1B5D28u: goto label_1b5d28;
            case 0x1B5D2Cu: goto label_1b5d2c;
            case 0x1B5D30u: goto label_1b5d30;
            case 0x1B5D34u: goto label_1b5d34;
            case 0x1B5D38u: goto label_1b5d38;
            case 0x1B5D3Cu: goto label_1b5d3c;
            case 0x1B5D40u: goto label_1b5d40;
            case 0x1B5D44u: goto label_1b5d44;
            case 0x1B5D48u: goto label_1b5d48;
            case 0x1B5D4Cu: goto label_1b5d4c;
            case 0x1B5D50u: goto label_1b5d50;
            case 0x1B5D54u: goto label_1b5d54;
            case 0x1B5D58u: goto label_1b5d58;
            case 0x1B5D5Cu: goto label_1b5d5c;
            case 0x1B5D60u: goto label_1b5d60;
            case 0x1B5D64u: goto label_1b5d64;
            case 0x1B5D68u: goto label_1b5d68;
            case 0x1B5D6Cu: goto label_1b5d6c;
            case 0x1B5D70u: goto label_1b5d70;
            case 0x1B5D74u: goto label_1b5d74;
            case 0x1B5D78u: goto label_1b5d78;
            case 0x1B5D7Cu: goto label_1b5d7c;
            case 0x1B5D80u: goto label_1b5d80;
            case 0x1B5D84u: goto label_1b5d84;
            case 0x1B5D88u: goto label_1b5d88;
            case 0x1B5D8Cu: goto label_1b5d8c;
            case 0x1B5D90u: goto label_1b5d90;
            case 0x1B5D94u: goto label_1b5d94;
            case 0x1B5D98u: goto label_1b5d98;
            case 0x1B5D9Cu: goto label_1b5d9c;
            case 0x1B5DA0u: goto label_1b5da0;
            case 0x1B5DA4u: goto label_1b5da4;
            case 0x1B5DA8u: goto label_1b5da8;
            case 0x1B5DACu: goto label_1b5dac;
            case 0x1B5DB0u: goto label_1b5db0;
            case 0x1B5DB4u: goto label_1b5db4;
            case 0x1B5DB8u: goto label_1b5db8;
            case 0x1B5DBCu: goto label_1b5dbc;
            case 0x1B5DC0u: goto label_1b5dc0;
            case 0x1B5DC4u: goto label_1b5dc4;
            case 0x1B5DC8u: goto label_1b5dc8;
            case 0x1B5DCCu: goto label_1b5dcc;
            case 0x1B5DD0u: goto label_1b5dd0;
            case 0x1B5DD4u: goto label_1b5dd4;
            case 0x1B5DD8u: goto label_1b5dd8;
            case 0x1B5DDCu: goto label_1b5ddc;
            case 0x1B5DE0u: goto label_1b5de0;
            case 0x1B5DE4u: goto label_1b5de4;
            case 0x1B5DE8u: goto label_1b5de8;
            case 0x1B5DECu: goto label_1b5dec;
            case 0x1B5DF0u: goto label_1b5df0;
            case 0x1B5DF4u: goto label_1b5df4;
            case 0x1B5DF8u: goto label_1b5df8;
            case 0x1B5DFCu: goto label_1b5dfc;
            case 0x1B5E00u: goto label_1b5e00;
            case 0x1B5E04u: goto label_1b5e04;
            case 0x1B5E08u: goto label_1b5e08;
            case 0x1B5E0Cu: goto label_1b5e0c;
            case 0x1B5E10u: goto label_1b5e10;
            case 0x1B5E14u: goto label_1b5e14;
            case 0x1B5E18u: goto label_1b5e18;
            case 0x1B5E1Cu: goto label_1b5e1c;
            case 0x1B5E20u: goto label_1b5e20;
            case 0x1B5E24u: goto label_1b5e24;
            case 0x1B5E28u: goto label_1b5e28;
            case 0x1B5E2Cu: goto label_1b5e2c;
            case 0x1B5E30u: goto label_1b5e30;
            case 0x1B5E34u: goto label_1b5e34;
            case 0x1B5E38u: goto label_1b5e38;
            case 0x1B5E3Cu: goto label_1b5e3c;
            case 0x1B5E40u: goto label_1b5e40;
            case 0x1B5E44u: goto label_1b5e44;
            case 0x1B5E48u: goto label_1b5e48;
            case 0x1B5E4Cu: goto label_1b5e4c;
            case 0x1B5E50u: goto label_1b5e50;
            case 0x1B5E54u: goto label_1b5e54;
            case 0x1B5E58u: goto label_1b5e58;
            case 0x1B5E5Cu: goto label_1b5e5c;
            case 0x1B5E60u: goto label_1b5e60;
            case 0x1B5E64u: goto label_1b5e64;
            case 0x1B5E68u: goto label_1b5e68;
            case 0x1B5E6Cu: goto label_1b5e6c;
            case 0x1B5E70u: goto label_1b5e70;
            case 0x1B5E74u: goto label_1b5e74;
            case 0x1B5E78u: goto label_1b5e78;
            case 0x1B5E7Cu: goto label_1b5e7c;
            case 0x1B5E80u: goto label_1b5e80;
            case 0x1B5E84u: goto label_1b5e84;
            case 0x1B5E88u: goto label_1b5e88;
            case 0x1B5E8Cu: goto label_1b5e8c;
            case 0x1B5E90u: goto label_1b5e90;
            case 0x1B5E94u: goto label_1b5e94;
            case 0x1B5E98u: goto label_1b5e98;
            case 0x1B5E9Cu: goto label_1b5e9c;
            case 0x1B5EA0u: goto label_1b5ea0;
            case 0x1B5EA4u: goto label_1b5ea4;
            case 0x1B5EA8u: goto label_1b5ea8;
            case 0x1B5EACu: goto label_1b5eac;
            case 0x1B5EB0u: goto label_1b5eb0;
            case 0x1B5EB4u: goto label_1b5eb4;
            case 0x1B5EB8u: goto label_1b5eb8;
            case 0x1B5EBCu: goto label_1b5ebc;
            case 0x1B5EC0u: goto label_1b5ec0;
            case 0x1B5EC4u: goto label_1b5ec4;
            case 0x1B5EC8u: goto label_1b5ec8;
            case 0x1B5ECCu: goto label_1b5ecc;
            case 0x1B5ED0u: goto label_1b5ed0;
            case 0x1B5ED4u: goto label_1b5ed4;
            case 0x1B5ED8u: goto label_1b5ed8;
            case 0x1B5EDCu: goto label_1b5edc;
            case 0x1B5EE0u: goto label_1b5ee0;
            case 0x1B5EE4u: goto label_1b5ee4;
            case 0x1B5EE8u: goto label_1b5ee8;
            case 0x1B5EECu: goto label_1b5eec;
            case 0x1B5EF0u: goto label_1b5ef0;
            case 0x1B5EF4u: goto label_1b5ef4;
            case 0x1B5EF8u: goto label_1b5ef8;
            case 0x1B5EFCu: goto label_1b5efc;
            case 0x1B5F00u: goto label_1b5f00;
            case 0x1B5F04u: goto label_1b5f04;
            case 0x1B5F08u: goto label_1b5f08;
            case 0x1B5F0Cu: goto label_1b5f0c;
            case 0x1B5F10u: goto label_1b5f10;
            case 0x1B5F14u: goto label_1b5f14;
            case 0x1B5F18u: goto label_1b5f18;
            case 0x1B5F1Cu: goto label_1b5f1c;
            case 0x1B5F20u: goto label_1b5f20;
            case 0x1B5F24u: goto label_1b5f24;
            case 0x1B5F28u: goto label_1b5f28;
            case 0x1B5F2Cu: goto label_1b5f2c;
            case 0x1B5F30u: goto label_1b5f30;
            case 0x1B5F34u: goto label_1b5f34;
            case 0x1B5F38u: goto label_1b5f38;
            case 0x1B5F3Cu: goto label_1b5f3c;
            case 0x1B5F40u: goto label_1b5f40;
            case 0x1B5F44u: goto label_1b5f44;
            case 0x1B5F48u: goto label_1b5f48;
            case 0x1B5F4Cu: goto label_1b5f4c;
            case 0x1B5F50u: goto label_1b5f50;
            case 0x1B5F54u: goto label_1b5f54;
            case 0x1B5F58u: goto label_1b5f58;
            case 0x1B5F5Cu: goto label_1b5f5c;
            case 0x1B5F60u: goto label_1b5f60;
            case 0x1B5F64u: goto label_1b5f64;
            case 0x1B5F68u: goto label_1b5f68;
            case 0x1B5F6Cu: goto label_1b5f6c;
            case 0x1B5F70u: goto label_1b5f70;
            case 0x1B5F74u: goto label_1b5f74;
            case 0x1B5F78u: goto label_1b5f78;
            case 0x1B5F7Cu: goto label_1b5f7c;
            case 0x1B5F80u: goto label_1b5f80;
            case 0x1B5F84u: goto label_1b5f84;
            case 0x1B5F88u: goto label_1b5f88;
            case 0x1B5F8Cu: goto label_1b5f8c;
            case 0x1B5F90u: goto label_1b5f90;
            case 0x1B5F94u: goto label_1b5f94;
            case 0x1B5F98u: goto label_1b5f98;
            case 0x1B5F9Cu: goto label_1b5f9c;
            case 0x1B5FA0u: goto label_1b5fa0;
            case 0x1B5FA4u: goto label_1b5fa4;
            case 0x1B5FA8u: goto label_1b5fa8;
            case 0x1B5FACu: goto label_1b5fac;
            case 0x1B5FB0u: goto label_1b5fb0;
            case 0x1B5FB4u: goto label_1b5fb4;
            case 0x1B5FB8u: goto label_1b5fb8;
            case 0x1B5FBCu: goto label_1b5fbc;
            case 0x1B5FC0u: goto label_1b5fc0;
            case 0x1B5FC4u: goto label_1b5fc4;
            case 0x1B5FC8u: goto label_1b5fc8;
            case 0x1B5FCCu: goto label_1b5fcc;
            case 0x1B5FD0u: goto label_1b5fd0;
            case 0x1B5FD4u: goto label_1b5fd4;
            case 0x1B5FD8u: goto label_1b5fd8;
            case 0x1B5FDCu: goto label_1b5fdc;
            case 0x1B5FE0u: goto label_1b5fe0;
            case 0x1B5FE4u: goto label_1b5fe4;
            case 0x1B5FE8u: goto label_1b5fe8;
            case 0x1B5FECu: goto label_1b5fec;
            case 0x1B5FF0u: goto label_1b5ff0;
            case 0x1B5FF4u: goto label_1b5ff4;
            case 0x1B5FF8u: goto label_1b5ff8;
            case 0x1B5FFCu: goto label_1b5ffc;
            case 0x1B6000u: goto label_1b6000;
            case 0x1B6004u: goto label_1b6004;
            case 0x1B6008u: goto label_1b6008;
            case 0x1B600Cu: goto label_1b600c;
            case 0x1B6010u: goto label_1b6010;
            case 0x1B6014u: goto label_1b6014;
            case 0x1B6018u: goto label_1b6018;
            case 0x1B601Cu: goto label_1b601c;
            case 0x1B6020u: goto label_1b6020;
            case 0x1B6024u: goto label_1b6024;
            case 0x1B6028u: goto label_1b6028;
            case 0x1B602Cu: goto label_1b602c;
            case 0x1B6030u: goto label_1b6030;
            case 0x1B6034u: goto label_1b6034;
            case 0x1B6038u: goto label_1b6038;
            case 0x1B603Cu: goto label_1b603c;
            case 0x1B6040u: goto label_1b6040;
            case 0x1B6044u: goto label_1b6044;
            case 0x1B6048u: goto label_1b6048;
            case 0x1B604Cu: goto label_1b604c;
            case 0x1B6050u: goto label_1b6050;
            case 0x1B6054u: goto label_1b6054;
            case 0x1B6058u: goto label_1b6058;
            case 0x1B605Cu: goto label_1b605c;
            case 0x1B6060u: goto label_1b6060;
            case 0x1B6064u: goto label_1b6064;
            case 0x1B6068u: goto label_1b6068;
            case 0x1B606Cu: goto label_1b606c;
            case 0x1B6070u: goto label_1b6070;
            case 0x1B6074u: goto label_1b6074;
            case 0x1B6078u: goto label_1b6078;
            case 0x1B607Cu: goto label_1b607c;
            case 0x1B6080u: goto label_1b6080;
            case 0x1B6084u: goto label_1b6084;
            case 0x1B6088u: goto label_1b6088;
            case 0x1B608Cu: goto label_1b608c;
            case 0x1B6090u: goto label_1b6090;
            case 0x1B6094u: goto label_1b6094;
            case 0x1B6098u: goto label_1b6098;
            case 0x1B609Cu: goto label_1b609c;
            case 0x1B60A0u: goto label_1b60a0;
            case 0x1B60A4u: goto label_1b60a4;
            case 0x1B60A8u: goto label_1b60a8;
            case 0x1B60ACu: goto label_1b60ac;
            case 0x1B60B0u: goto label_1b60b0;
            case 0x1B60B4u: goto label_1b60b4;
            case 0x1B60B8u: goto label_1b60b8;
            case 0x1B60BCu: goto label_1b60bc;
            case 0x1B60C0u: goto label_1b60c0;
            case 0x1B60C4u: goto label_1b60c4;
            case 0x1B60C8u: goto label_1b60c8;
            case 0x1B60CCu: goto label_1b60cc;
            case 0x1B60D0u: goto label_1b60d0;
            case 0x1B60D4u: goto label_1b60d4;
            case 0x1B60D8u: goto label_1b60d8;
            case 0x1B60DCu: goto label_1b60dc;
            case 0x1B60E0u: goto label_1b60e0;
            case 0x1B60E4u: goto label_1b60e4;
            case 0x1B60E8u: goto label_1b60e8;
            case 0x1B60ECu: goto label_1b60ec;
            case 0x1B60F0u: goto label_1b60f0;
            case 0x1B60F4u: goto label_1b60f4;
            case 0x1B60F8u: goto label_1b60f8;
            case 0x1B60FCu: goto label_1b60fc;
            case 0x1B6100u: goto label_1b6100;
            case 0x1B6104u: goto label_1b6104;
            case 0x1B6108u: goto label_1b6108;
            case 0x1B610Cu: goto label_1b610c;
            case 0x1B6110u: goto label_1b6110;
            case 0x1B6114u: goto label_1b6114;
            case 0x1B6118u: goto label_1b6118;
            case 0x1B611Cu: goto label_1b611c;
            case 0x1B6120u: goto label_1b6120;
            case 0x1B6124u: goto label_1b6124;
            case 0x1B6128u: goto label_1b6128;
            case 0x1B612Cu: goto label_1b612c;
            case 0x1B6130u: goto label_1b6130;
            case 0x1B6134u: goto label_1b6134;
            case 0x1B6138u: goto label_1b6138;
            case 0x1B613Cu: goto label_1b613c;
            case 0x1B6140u: goto label_1b6140;
            case 0x1B6144u: goto label_1b6144;
            case 0x1B6148u: goto label_1b6148;
            case 0x1B614Cu: goto label_1b614c;
            case 0x1B6150u: goto label_1b6150;
            case 0x1B6154u: goto label_1b6154;
            case 0x1B6158u: goto label_1b6158;
            case 0x1B615Cu: goto label_1b615c;
            case 0x1B6160u: goto label_1b6160;
            case 0x1B6164u: goto label_1b6164;
            case 0x1B6168u: goto label_1b6168;
            case 0x1B616Cu: goto label_1b616c;
            case 0x1B6170u: goto label_1b6170;
            case 0x1B6174u: goto label_1b6174;
            case 0x1B6178u: goto label_1b6178;
            case 0x1B617Cu: goto label_1b617c;
            case 0x1B6180u: goto label_1b6180;
            case 0x1B6184u: goto label_1b6184;
            case 0x1B6188u: goto label_1b6188;
            case 0x1B618Cu: goto label_1b618c;
            case 0x1B6190u: goto label_1b6190;
            case 0x1B6194u: goto label_1b6194;
            case 0x1B6198u: goto label_1b6198;
            case 0x1B619Cu: goto label_1b619c;
            case 0x1B61A0u: goto label_1b61a0;
            case 0x1B61A4u: goto label_1b61a4;
            case 0x1B61A8u: goto label_1b61a8;
            case 0x1B61ACu: goto label_1b61ac;
            case 0x1B61B0u: goto label_1b61b0;
            case 0x1B61B4u: goto label_1b61b4;
            case 0x1B61B8u: goto label_1b61b8;
            case 0x1B61BCu: goto label_1b61bc;
            case 0x1B61C0u: goto label_1b61c0;
            case 0x1B61C4u: goto label_1b61c4;
            case 0x1B61C8u: goto label_1b61c8;
            case 0x1B61CCu: goto label_1b61cc;
            case 0x1B61D0u: goto label_1b61d0;
            case 0x1B61D4u: goto label_1b61d4;
            case 0x1B61D8u: goto label_1b61d8;
            case 0x1B61DCu: goto label_1b61dc;
            case 0x1B61E0u: goto label_1b61e0;
            case 0x1B61E4u: goto label_1b61e4;
            case 0x1B61E8u: goto label_1b61e8;
            case 0x1B61ECu: goto label_1b61ec;
            case 0x1B61F0u: goto label_1b61f0;
            case 0x1B61F4u: goto label_1b61f4;
            case 0x1B61F8u: goto label_1b61f8;
            case 0x1B61FCu: goto label_1b61fc;
            case 0x1B6200u: goto label_1b6200;
            case 0x1B6204u: goto label_1b6204;
            case 0x1B6208u: goto label_1b6208;
            case 0x1B620Cu: goto label_1b620c;
            case 0x1B6210u: goto label_1b6210;
            case 0x1B6214u: goto label_1b6214;
            case 0x1B6218u: goto label_1b6218;
            case 0x1B621Cu: goto label_1b621c;
            case 0x1B6220u: goto label_1b6220;
            case 0x1B6224u: goto label_1b6224;
            case 0x1B6228u: goto label_1b6228;
            case 0x1B622Cu: goto label_1b622c;
            case 0x1B6230u: goto label_1b6230;
            case 0x1B6234u: goto label_1b6234;
            case 0x1B6238u: goto label_1b6238;
            case 0x1B623Cu: goto label_1b623c;
            case 0x1B6240u: goto label_1b6240;
            case 0x1B6244u: goto label_1b6244;
            case 0x1B6248u: goto label_1b6248;
            case 0x1B624Cu: goto label_1b624c;
            case 0x1B6250u: goto label_1b6250;
            case 0x1B6254u: goto label_1b6254;
            case 0x1B6258u: goto label_1b6258;
            case 0x1B625Cu: goto label_1b625c;
            case 0x1B6260u: goto label_1b6260;
            case 0x1B6264u: goto label_1b6264;
            case 0x1B6268u: goto label_1b6268;
            case 0x1B626Cu: goto label_1b626c;
            case 0x1B6270u: goto label_1b6270;
            case 0x1B6274u: goto label_1b6274;
            case 0x1B6278u: goto label_1b6278;
            case 0x1B627Cu: goto label_1b627c;
            case 0x1B6280u: goto label_1b6280;
            case 0x1B6284u: goto label_1b6284;
            case 0x1B6288u: goto label_1b6288;
            case 0x1B628Cu: goto label_1b628c;
            case 0x1B6290u: goto label_1b6290;
            case 0x1B6294u: goto label_1b6294;
            case 0x1B6298u: goto label_1b6298;
            case 0x1B629Cu: goto label_1b629c;
            case 0x1B62A0u: goto label_1b62a0;
            case 0x1B62A4u: goto label_1b62a4;
            case 0x1B62A8u: goto label_1b62a8;
            case 0x1B62ACu: goto label_1b62ac;
            case 0x1B62B0u: goto label_1b62b0;
            case 0x1B62B4u: goto label_1b62b4;
            case 0x1B62B8u: goto label_1b62b8;
            case 0x1B62BCu: goto label_1b62bc;
            case 0x1B62C0u: goto label_1b62c0;
            case 0x1B62C4u: goto label_1b62c4;
            case 0x1B62C8u: goto label_1b62c8;
            case 0x1B62CCu: goto label_1b62cc;
            case 0x1B62D0u: goto label_1b62d0;
            case 0x1B62D4u: goto label_1b62d4;
            case 0x1B62D8u: goto label_1b62d8;
            case 0x1B62DCu: goto label_1b62dc;
            case 0x1B62E0u: goto label_1b62e0;
            case 0x1B62E4u: goto label_1b62e4;
            case 0x1B62E8u: goto label_1b62e8;
            case 0x1B62ECu: goto label_1b62ec;
            case 0x1B62F0u: goto label_1b62f0;
            case 0x1B62F4u: goto label_1b62f4;
            case 0x1B62F8u: goto label_1b62f8;
            case 0x1B62FCu: goto label_1b62fc;
            case 0x1B6300u: goto label_1b6300;
            case 0x1B6304u: goto label_1b6304;
            case 0x1B6308u: goto label_1b6308;
            case 0x1B630Cu: goto label_1b630c;
            case 0x1B6310u: goto label_1b6310;
            case 0x1B6314u: goto label_1b6314;
            case 0x1B6318u: goto label_1b6318;
            case 0x1B631Cu: goto label_1b631c;
            case 0x1B6320u: goto label_1b6320;
            case 0x1B6324u: goto label_1b6324;
            case 0x1B6328u: goto label_1b6328;
            case 0x1B632Cu: goto label_1b632c;
            case 0x1B6330u: goto label_1b6330;
            case 0x1B6334u: goto label_1b6334;
            case 0x1B6338u: goto label_1b6338;
            case 0x1B633Cu: goto label_1b633c;
            case 0x1B6340u: goto label_1b6340;
            case 0x1B6344u: goto label_1b6344;
            case 0x1B6348u: goto label_1b6348;
            case 0x1B634Cu: goto label_1b634c;
            case 0x1B6350u: goto label_1b6350;
            case 0x1B6354u: goto label_1b6354;
            case 0x1B6358u: goto label_1b6358;
            case 0x1B635Cu: goto label_1b635c;
            case 0x1B6360u: goto label_1b6360;
            case 0x1B6364u: goto label_1b6364;
            case 0x1B6368u: goto label_1b6368;
            case 0x1B636Cu: goto label_1b636c;
            case 0x1B6370u: goto label_1b6370;
            case 0x1B6374u: goto label_1b6374;
            case 0x1B6378u: goto label_1b6378;
            case 0x1B637Cu: goto label_1b637c;
            case 0x1B6380u: goto label_1b6380;
            case 0x1B6384u: goto label_1b6384;
            case 0x1B6388u: goto label_1b6388;
            case 0x1B638Cu: goto label_1b638c;
            case 0x1B6390u: goto label_1b6390;
            case 0x1B6394u: goto label_1b6394;
            case 0x1B6398u: goto label_1b6398;
            case 0x1B639Cu: goto label_1b639c;
            case 0x1B63A0u: goto label_1b63a0;
            case 0x1B63A4u: goto label_1b63a4;
            case 0x1B63A8u: goto label_1b63a8;
            case 0x1B63ACu: goto label_1b63ac;
            case 0x1B63B0u: goto label_1b63b0;
            case 0x1B63B4u: goto label_1b63b4;
            case 0x1B63B8u: goto label_1b63b8;
            case 0x1B63BCu: goto label_1b63bc;
            case 0x1B63C0u: goto label_1b63c0;
            case 0x1B63C4u: goto label_1b63c4;
            case 0x1B63C8u: goto label_1b63c8;
            case 0x1B63CCu: goto label_1b63cc;
            case 0x1B63D0u: goto label_1b63d0;
            case 0x1B63D4u: goto label_1b63d4;
            case 0x1B63D8u: goto label_1b63d8;
            case 0x1B63DCu: goto label_1b63dc;
            case 0x1B63E0u: goto label_1b63e0;
            case 0x1B63E4u: goto label_1b63e4;
            case 0x1B63E8u: goto label_1b63e8;
            case 0x1B63ECu: goto label_1b63ec;
            case 0x1B63F0u: goto label_1b63f0;
            case 0x1B63F4u: goto label_1b63f4;
            case 0x1B63F8u: goto label_1b63f8;
            case 0x1B63FCu: goto label_1b63fc;
            case 0x1B6400u: goto label_1b6400;
            case 0x1B6404u: goto label_1b6404;
            case 0x1B6408u: goto label_1b6408;
            case 0x1B640Cu: goto label_1b640c;
            case 0x1B6410u: goto label_1b6410;
            case 0x1B6414u: goto label_1b6414;
            case 0x1B6418u: goto label_1b6418;
            case 0x1B641Cu: goto label_1b641c;
            case 0x1B6420u: goto label_1b6420;
            case 0x1B6424u: goto label_1b6424;
            case 0x1B6428u: goto label_1b6428;
            case 0x1B642Cu: goto label_1b642c;
            case 0x1B6430u: goto label_1b6430;
            case 0x1B6434u: goto label_1b6434;
            case 0x1B6438u: goto label_1b6438;
            case 0x1B643Cu: goto label_1b643c;
            case 0x1B6440u: goto label_1b6440;
            case 0x1B6444u: goto label_1b6444;
            case 0x1B6448u: goto label_1b6448;
            case 0x1B644Cu: goto label_1b644c;
            case 0x1B6450u: goto label_1b6450;
            case 0x1B6454u: goto label_1b6454;
            case 0x1B6458u: goto label_1b6458;
            case 0x1B645Cu: goto label_1b645c;
            case 0x1B6460u: goto label_1b6460;
            case 0x1B6464u: goto label_1b6464;
            case 0x1B6468u: goto label_1b6468;
            case 0x1B646Cu: goto label_1b646c;
            case 0x1B6470u: goto label_1b6470;
            case 0x1B6474u: goto label_1b6474;
            case 0x1B6478u: goto label_1b6478;
            case 0x1B647Cu: goto label_1b647c;
            case 0x1B6480u: goto label_1b6480;
            case 0x1B6484u: goto label_1b6484;
            case 0x1B6488u: goto label_1b6488;
            case 0x1B648Cu: goto label_1b648c;
            case 0x1B6490u: goto label_1b6490;
            case 0x1B6494u: goto label_1b6494;
            case 0x1B6498u: goto label_1b6498;
            case 0x1B649Cu: goto label_1b649c;
            case 0x1B64A0u: goto label_1b64a0;
            case 0x1B64A4u: goto label_1b64a4;
            case 0x1B64A8u: goto label_1b64a8;
            case 0x1B64ACu: goto label_1b64ac;
            case 0x1B64B0u: goto label_1b64b0;
            case 0x1B64B4u: goto label_1b64b4;
            case 0x1B64B8u: goto label_1b64b8;
            case 0x1B64BCu: goto label_1b64bc;
            case 0x1B64C0u: goto label_1b64c0;
            case 0x1B64C4u: goto label_1b64c4;
            case 0x1B64C8u: goto label_1b64c8;
            case 0x1B64CCu: goto label_1b64cc;
            case 0x1B64D0u: goto label_1b64d0;
            case 0x1B64D4u: goto label_1b64d4;
            case 0x1B64D8u: goto label_1b64d8;
            case 0x1B64DCu: goto label_1b64dc;
            case 0x1B64E0u: goto label_1b64e0;
            case 0x1B64E4u: goto label_1b64e4;
            case 0x1B64E8u: goto label_1b64e8;
            case 0x1B64ECu: goto label_1b64ec;
            case 0x1B64F0u: goto label_1b64f0;
            case 0x1B64F4u: goto label_1b64f4;
            case 0x1B64F8u: goto label_1b64f8;
            case 0x1B64FCu: goto label_1b64fc;
            case 0x1B6500u: goto label_1b6500;
            case 0x1B6504u: goto label_1b6504;
            case 0x1B6508u: goto label_1b6508;
            case 0x1B650Cu: goto label_1b650c;
            case 0x1B6510u: goto label_1b6510;
            case 0x1B6514u: goto label_1b6514;
            case 0x1B6518u: goto label_1b6518;
            case 0x1B651Cu: goto label_1b651c;
            case 0x1B6520u: goto label_1b6520;
            case 0x1B6524u: goto label_1b6524;
            case 0x1B6528u: goto label_1b6528;
            case 0x1B652Cu: goto label_1b652c;
            case 0x1B6530u: goto label_1b6530;
            case 0x1B6534u: goto label_1b6534;
            case 0x1B6538u: goto label_1b6538;
            case 0x1B653Cu: goto label_1b653c;
            case 0x1B6540u: goto label_1b6540;
            case 0x1B6544u: goto label_1b6544;
            case 0x1B6548u: goto label_1b6548;
            case 0x1B654Cu: goto label_1b654c;
            case 0x1B6550u: goto label_1b6550;
            case 0x1B6554u: goto label_1b6554;
            case 0x1B6558u: goto label_1b6558;
            case 0x1B655Cu: goto label_1b655c;
            case 0x1B6560u: goto label_1b6560;
            case 0x1B6564u: goto label_1b6564;
            case 0x1B6568u: goto label_1b6568;
            case 0x1B656Cu: goto label_1b656c;
            case 0x1B6570u: goto label_1b6570;
            case 0x1B6574u: goto label_1b6574;
            case 0x1B6578u: goto label_1b6578;
            case 0x1B657Cu: goto label_1b657c;
            case 0x1B6580u: goto label_1b6580;
            case 0x1B6584u: goto label_1b6584;
            case 0x1B6588u: goto label_1b6588;
            case 0x1B658Cu: goto label_1b658c;
            case 0x1B6590u: goto label_1b6590;
            case 0x1B6594u: goto label_1b6594;
            case 0x1B6598u: goto label_1b6598;
            case 0x1B659Cu: goto label_1b659c;
            case 0x1B65A0u: goto label_1b65a0;
            case 0x1B65A4u: goto label_1b65a4;
            case 0x1B65A8u: goto label_1b65a8;
            case 0x1B65ACu: goto label_1b65ac;
            case 0x1B65B0u: goto label_1b65b0;
            case 0x1B65B4u: goto label_1b65b4;
            case 0x1B65B8u: goto label_1b65b8;
            case 0x1B65BCu: goto label_1b65bc;
            case 0x1B65C0u: goto label_1b65c0;
            case 0x1B65C4u: goto label_1b65c4;
            case 0x1B65C8u: goto label_1b65c8;
            case 0x1B65CCu: goto label_1b65cc;
            case 0x1B65D0u: goto label_1b65d0;
            case 0x1B65D4u: goto label_1b65d4;
            case 0x1B65D8u: goto label_1b65d8;
            case 0x1B65DCu: goto label_1b65dc;
            case 0x1B65E0u: goto label_1b65e0;
            case 0x1B65E4u: goto label_1b65e4;
            case 0x1B65E8u: goto label_1b65e8;
            case 0x1B65ECu: goto label_1b65ec;
            case 0x1B65F0u: goto label_1b65f0;
            case 0x1B65F4u: goto label_1b65f4;
            case 0x1B65F8u: goto label_1b65f8;
            case 0x1B65FCu: goto label_1b65fc;
            case 0x1B6600u: goto label_1b6600;
            case 0x1B6604u: goto label_1b6604;
            case 0x1B6608u: goto label_1b6608;
            case 0x1B660Cu: goto label_1b660c;
            case 0x1B6610u: goto label_1b6610;
            case 0x1B6614u: goto label_1b6614;
            case 0x1B6618u: goto label_1b6618;
            case 0x1B661Cu: goto label_1b661c;
            case 0x1B6620u: goto label_1b6620;
            case 0x1B6624u: goto label_1b6624;
            case 0x1B6628u: goto label_1b6628;
            case 0x1B662Cu: goto label_1b662c;
            case 0x1B6630u: goto label_1b6630;
            case 0x1B6634u: goto label_1b6634;
            case 0x1B6638u: goto label_1b6638;
            case 0x1B663Cu: goto label_1b663c;
            case 0x1B6640u: goto label_1b6640;
            case 0x1B6644u: goto label_1b6644;
            case 0x1B6648u: goto label_1b6648;
            case 0x1B664Cu: goto label_1b664c;
            case 0x1B6650u: goto label_1b6650;
            case 0x1B6654u: goto label_1b6654;
            case 0x1B6658u: goto label_1b6658;
            case 0x1B665Cu: goto label_1b665c;
            case 0x1B6660u: goto label_1b6660;
            case 0x1B6664u: goto label_1b6664;
            case 0x1B6668u: goto label_1b6668;
            case 0x1B666Cu: goto label_1b666c;
            case 0x1B6670u: goto label_1b6670;
            case 0x1B6674u: goto label_1b6674;
            case 0x1B6678u: goto label_1b6678;
            case 0x1B667Cu: goto label_1b667c;
            case 0x1B6680u: goto label_1b6680;
            case 0x1B6684u: goto label_1b6684;
            case 0x1B6688u: goto label_1b6688;
            case 0x1B668Cu: goto label_1b668c;
            case 0x1B6690u: goto label_1b6690;
            case 0x1B6694u: goto label_1b6694;
            case 0x1B6698u: goto label_1b6698;
            case 0x1B669Cu: goto label_1b669c;
            case 0x1B66A0u: goto label_1b66a0;
            case 0x1B66A4u: goto label_1b66a4;
            case 0x1B66A8u: goto label_1b66a8;
            case 0x1B66ACu: goto label_1b66ac;
            case 0x1B66B0u: goto label_1b66b0;
            case 0x1B66B4u: goto label_1b66b4;
            case 0x1B66B8u: goto label_1b66b8;
            case 0x1B66BCu: goto label_1b66bc;
            case 0x1B66C0u: goto label_1b66c0;
            case 0x1B66C4u: goto label_1b66c4;
            case 0x1B66C8u: goto label_1b66c8;
            case 0x1B66CCu: goto label_1b66cc;
            case 0x1B66D0u: goto label_1b66d0;
            case 0x1B66D4u: goto label_1b66d4;
            case 0x1B66D8u: goto label_1b66d8;
            case 0x1B66DCu: goto label_1b66dc;
            case 0x1B66E0u: goto label_1b66e0;
            case 0x1B66E4u: goto label_1b66e4;
            case 0x1B66E8u: goto label_1b66e8;
            case 0x1B66ECu: goto label_1b66ec;
            case 0x1B66F0u: goto label_1b66f0;
            case 0x1B66F4u: goto label_1b66f4;
            case 0x1B66F8u: goto label_1b66f8;
            case 0x1B66FCu: goto label_1b66fc;
            case 0x1B6700u: goto label_1b6700;
            case 0x1B6704u: goto label_1b6704;
            case 0x1B6708u: goto label_1b6708;
            case 0x1B670Cu: goto label_1b670c;
            case 0x1B6710u: goto label_1b6710;
            case 0x1B6714u: goto label_1b6714;
            case 0x1B6718u: goto label_1b6718;
            case 0x1B671Cu: goto label_1b671c;
            case 0x1B6720u: goto label_1b6720;
            case 0x1B6724u: goto label_1b6724;
            case 0x1B6728u: goto label_1b6728;
            case 0x1B672Cu: goto label_1b672c;
            case 0x1B6730u: goto label_1b6730;
            case 0x1B6734u: goto label_1b6734;
            case 0x1B6738u: goto label_1b6738;
            case 0x1B673Cu: goto label_1b673c;
            case 0x1B6740u: goto label_1b6740;
            case 0x1B6744u: goto label_1b6744;
            case 0x1B6748u: goto label_1b6748;
            case 0x1B674Cu: goto label_1b674c;
            case 0x1B6750u: goto label_1b6750;
            case 0x1B6754u: goto label_1b6754;
            case 0x1B6758u: goto label_1b6758;
            case 0x1B675Cu: goto label_1b675c;
            case 0x1B6760u: goto label_1b6760;
            case 0x1B6764u: goto label_1b6764;
            case 0x1B6768u: goto label_1b6768;
            case 0x1B676Cu: goto label_1b676c;
            case 0x1B6770u: goto label_1b6770;
            case 0x1B6774u: goto label_1b6774;
            case 0x1B6778u: goto label_1b6778;
            case 0x1B677Cu: goto label_1b677c;
            case 0x1B6780u: goto label_1b6780;
            case 0x1B6784u: goto label_1b6784;
            case 0x1B6788u: goto label_1b6788;
            case 0x1B678Cu: goto label_1b678c;
            case 0x1B6790u: goto label_1b6790;
            case 0x1B6794u: goto label_1b6794;
            case 0x1B6798u: goto label_1b6798;
            case 0x1B679Cu: goto label_1b679c;
            case 0x1B67A0u: goto label_1b67a0;
            case 0x1B67A4u: goto label_1b67a4;
            case 0x1B67A8u: goto label_1b67a8;
            case 0x1B67ACu: goto label_1b67ac;
            case 0x1B67B0u: goto label_1b67b0;
            case 0x1B67B4u: goto label_1b67b4;
            case 0x1B67B8u: goto label_1b67b8;
            case 0x1B67BCu: goto label_1b67bc;
            case 0x1B67C0u: goto label_1b67c0;
            case 0x1B67C4u: goto label_1b67c4;
            case 0x1B67C8u: goto label_1b67c8;
            case 0x1B67CCu: goto label_1b67cc;
            case 0x1B67D0u: goto label_1b67d0;
            case 0x1B67D4u: goto label_1b67d4;
            case 0x1B67D8u: goto label_1b67d8;
            case 0x1B67DCu: goto label_1b67dc;
            case 0x1B67E0u: goto label_1b67e0;
            case 0x1B67E4u: goto label_1b67e4;
            case 0x1B67E8u: goto label_1b67e8;
            case 0x1B67ECu: goto label_1b67ec;
            case 0x1B67F0u: goto label_1b67f0;
            case 0x1B67F4u: goto label_1b67f4;
            case 0x1B67F8u: goto label_1b67f8;
            case 0x1B67FCu: goto label_1b67fc;
            case 0x1B6800u: goto label_1b6800;
            case 0x1B6804u: goto label_1b6804;
            case 0x1B6808u: goto label_1b6808;
            case 0x1B680Cu: goto label_1b680c;
            case 0x1B6810u: goto label_1b6810;
            case 0x1B6814u: goto label_1b6814;
            case 0x1B6818u: goto label_1b6818;
            case 0x1B681Cu: goto label_1b681c;
            case 0x1B6820u: goto label_1b6820;
            case 0x1B6824u: goto label_1b6824;
            case 0x1B6828u: goto label_1b6828;
            case 0x1B682Cu: goto label_1b682c;
            case 0x1B6830u: goto label_1b6830;
            case 0x1B6834u: goto label_1b6834;
            case 0x1B6838u: goto label_1b6838;
            case 0x1B683Cu: goto label_1b683c;
            case 0x1B6840u: goto label_1b6840;
            case 0x1B6844u: goto label_1b6844;
            case 0x1B6848u: goto label_1b6848;
            case 0x1B684Cu: goto label_1b684c;
            case 0x1B6850u: goto label_1b6850;
            case 0x1B6854u: goto label_1b6854;
            case 0x1B6858u: goto label_1b6858;
            case 0x1B685Cu: goto label_1b685c;
            case 0x1B6860u: goto label_1b6860;
            case 0x1B6864u: goto label_1b6864;
            case 0x1B6868u: goto label_1b6868;
            case 0x1B686Cu: goto label_1b686c;
            case 0x1B6870u: goto label_1b6870;
            case 0x1B6874u: goto label_1b6874;
            case 0x1B6878u: goto label_1b6878;
            case 0x1B687Cu: goto label_1b687c;
            case 0x1B6880u: goto label_1b6880;
            case 0x1B6884u: goto label_1b6884;
            case 0x1B6888u: goto label_1b6888;
            case 0x1B688Cu: goto label_1b688c;
            case 0x1B6890u: goto label_1b6890;
            case 0x1B6894u: goto label_1b6894;
            case 0x1B6898u: goto label_1b6898;
            case 0x1B689Cu: goto label_1b689c;
            case 0x1B68A0u: goto label_1b68a0;
            case 0x1B68A4u: goto label_1b68a4;
            case 0x1B68A8u: goto label_1b68a8;
            case 0x1B68ACu: goto label_1b68ac;
            case 0x1B68B0u: goto label_1b68b0;
            case 0x1B68B4u: goto label_1b68b4;
            case 0x1B68B8u: goto label_1b68b8;
            case 0x1B68BCu: goto label_1b68bc;
            case 0x1B68C0u: goto label_1b68c0;
            case 0x1B68C4u: goto label_1b68c4;
            case 0x1B68C8u: goto label_1b68c8;
            case 0x1B68CCu: goto label_1b68cc;
            case 0x1B68D0u: goto label_1b68d0;
            case 0x1B68D4u: goto label_1b68d4;
            case 0x1B68D8u: goto label_1b68d8;
            case 0x1B68DCu: goto label_1b68dc;
            case 0x1B68E0u: goto label_1b68e0;
            case 0x1B68E4u: goto label_1b68e4;
            case 0x1B68E8u: goto label_1b68e8;
            case 0x1B68ECu: goto label_1b68ec;
            case 0x1B68F0u: goto label_1b68f0;
            case 0x1B68F4u: goto label_1b68f4;
            case 0x1B68F8u: goto label_1b68f8;
            case 0x1B68FCu: goto label_1b68fc;
            case 0x1B6900u: goto label_1b6900;
            case 0x1B6904u: goto label_1b6904;
            case 0x1B6908u: goto label_1b6908;
            case 0x1B690Cu: goto label_1b690c;
            case 0x1B6910u: goto label_1b6910;
            case 0x1B6914u: goto label_1b6914;
            case 0x1B6918u: goto label_1b6918;
            case 0x1B691Cu: goto label_1b691c;
            case 0x1B6920u: goto label_1b6920;
            case 0x1B6924u: goto label_1b6924;
            case 0x1B6928u: goto label_1b6928;
            case 0x1B692Cu: goto label_1b692c;
            case 0x1B6930u: goto label_1b6930;
            case 0x1B6934u: goto label_1b6934;
            case 0x1B6938u: goto label_1b6938;
            case 0x1B693Cu: goto label_1b693c;
            case 0x1B6940u: goto label_1b6940;
            case 0x1B6944u: goto label_1b6944;
            case 0x1B6948u: goto label_1b6948;
            case 0x1B694Cu: goto label_1b694c;
            case 0x1B6950u: goto label_1b6950;
            case 0x1B6954u: goto label_1b6954;
            case 0x1B6958u: goto label_1b6958;
            case 0x1B695Cu: goto label_1b695c;
            case 0x1B6960u: goto label_1b6960;
            case 0x1B6964u: goto label_1b6964;
            case 0x1B6968u: goto label_1b6968;
            case 0x1B696Cu: goto label_1b696c;
            case 0x1B6970u: goto label_1b6970;
            case 0x1B6974u: goto label_1b6974;
            case 0x1B6978u: goto label_1b6978;
            case 0x1B697Cu: goto label_1b697c;
            case 0x1B6980u: goto label_1b6980;
            case 0x1B6984u: goto label_1b6984;
            case 0x1B6988u: goto label_1b6988;
            case 0x1B698Cu: goto label_1b698c;
            case 0x1B6990u: goto label_1b6990;
            case 0x1B6994u: goto label_1b6994;
            case 0x1B6998u: goto label_1b6998;
            case 0x1B699Cu: goto label_1b699c;
            case 0x1B69A0u: goto label_1b69a0;
            case 0x1B69A4u: goto label_1b69a4;
            case 0x1B69A8u: goto label_1b69a8;
            case 0x1B69ACu: goto label_1b69ac;
            case 0x1B69B0u: goto label_1b69b0;
            case 0x1B69B4u: goto label_1b69b4;
            case 0x1B69B8u: goto label_1b69b8;
            case 0x1B69BCu: goto label_1b69bc;
            case 0x1B69C0u: goto label_1b69c0;
            case 0x1B69C4u: goto label_1b69c4;
            case 0x1B69C8u: goto label_1b69c8;
            case 0x1B69CCu: goto label_1b69cc;
            case 0x1B69D0u: goto label_1b69d0;
            case 0x1B69D4u: goto label_1b69d4;
            case 0x1B69D8u: goto label_1b69d8;
            case 0x1B69DCu: goto label_1b69dc;
            case 0x1B69E0u: goto label_1b69e0;
            case 0x1B69E4u: goto label_1b69e4;
            case 0x1B69E8u: goto label_1b69e8;
            case 0x1B69ECu: goto label_1b69ec;
            case 0x1B69F0u: goto label_1b69f0;
            case 0x1B69F4u: goto label_1b69f4;
            case 0x1B69F8u: goto label_1b69f8;
            case 0x1B69FCu: goto label_1b69fc;
            case 0x1B6A00u: goto label_1b6a00;
            case 0x1B6A04u: goto label_1b6a04;
            case 0x1B6A08u: goto label_1b6a08;
            case 0x1B6A0Cu: goto label_1b6a0c;
            case 0x1B6A10u: goto label_1b6a10;
            case 0x1B6A14u: goto label_1b6a14;
            case 0x1B6A18u: goto label_1b6a18;
            case 0x1B6A1Cu: goto label_1b6a1c;
            case 0x1B6A20u: goto label_1b6a20;
            case 0x1B6A24u: goto label_1b6a24;
            case 0x1B6A28u: goto label_1b6a28;
            case 0x1B6A2Cu: goto label_1b6a2c;
            case 0x1B6A30u: goto label_1b6a30;
            case 0x1B6A34u: goto label_1b6a34;
            case 0x1B6A38u: goto label_1b6a38;
            case 0x1B6A3Cu: goto label_1b6a3c;
            case 0x1B6A40u: goto label_1b6a40;
            case 0x1B6A44u: goto label_1b6a44;
            case 0x1B6A48u: goto label_1b6a48;
            case 0x1B6A4Cu: goto label_1b6a4c;
            case 0x1B6A50u: goto label_1b6a50;
            case 0x1B6A54u: goto label_1b6a54;
            case 0x1B6A58u: goto label_1b6a58;
            case 0x1B6A5Cu: goto label_1b6a5c;
            case 0x1B6A60u: goto label_1b6a60;
            case 0x1B6A64u: goto label_1b6a64;
            case 0x1B6A68u: goto label_1b6a68;
            case 0x1B6A6Cu: goto label_1b6a6c;
            case 0x1B6A70u: goto label_1b6a70;
            case 0x1B6A74u: goto label_1b6a74;
            case 0x1B6A78u: goto label_1b6a78;
            case 0x1B6A7Cu: goto label_1b6a7c;
            case 0x1B6A80u: goto label_1b6a80;
            case 0x1B6A84u: goto label_1b6a84;
            case 0x1B6A88u: goto label_1b6a88;
            case 0x1B6A8Cu: goto label_1b6a8c;
            case 0x1B6A90u: goto label_1b6a90;
            case 0x1B6A94u: goto label_1b6a94;
            case 0x1B6A98u: goto label_1b6a98;
            case 0x1B6A9Cu: goto label_1b6a9c;
            case 0x1B6AA0u: goto label_1b6aa0;
            case 0x1B6AA4u: goto label_1b6aa4;
            case 0x1B6AA8u: goto label_1b6aa8;
            case 0x1B6AACu: goto label_1b6aac;
            case 0x1B6AB0u: goto label_1b6ab0;
            case 0x1B6AB4u: goto label_1b6ab4;
            case 0x1B6AB8u: goto label_1b6ab8;
            case 0x1B6ABCu: goto label_1b6abc;
            case 0x1B6AC0u: goto label_1b6ac0;
            case 0x1B6AC4u: goto label_1b6ac4;
            case 0x1B6AC8u: goto label_1b6ac8;
            case 0x1B6ACCu: goto label_1b6acc;
            case 0x1B6AD0u: goto label_1b6ad0;
            case 0x1B6AD4u: goto label_1b6ad4;
            case 0x1B6AD8u: goto label_1b6ad8;
            case 0x1B6ADCu: goto label_1b6adc;
            case 0x1B6AE0u: goto label_1b6ae0;
            case 0x1B6AE4u: goto label_1b6ae4;
            case 0x1B6AE8u: goto label_1b6ae8;
            case 0x1B6AECu: goto label_1b6aec;
            case 0x1B6AF0u: goto label_1b6af0;
            case 0x1B6AF4u: goto label_1b6af4;
            case 0x1B6AF8u: goto label_1b6af8;
            case 0x1B6AFCu: goto label_1b6afc;
            case 0x1B6B00u: goto label_1b6b00;
            case 0x1B6B04u: goto label_1b6b04;
            case 0x1B6B08u: goto label_1b6b08;
            case 0x1B6B0Cu: goto label_1b6b0c;
            case 0x1B6B10u: goto label_1b6b10;
            case 0x1B6B14u: goto label_1b6b14;
            case 0x1B6B18u: goto label_1b6b18;
            case 0x1B6B1Cu: goto label_1b6b1c;
            case 0x1B6B20u: goto label_1b6b20;
            case 0x1B6B24u: goto label_1b6b24;
            case 0x1B6B28u: goto label_1b6b28;
            case 0x1B6B2Cu: goto label_1b6b2c;
            case 0x1B6B30u: goto label_1b6b30;
            case 0x1B6B34u: goto label_1b6b34;
            case 0x1B6B38u: goto label_1b6b38;
            case 0x1B6B3Cu: goto label_1b6b3c;
            case 0x1B6B40u: goto label_1b6b40;
            case 0x1B6B44u: goto label_1b6b44;
            case 0x1B6B48u: goto label_1b6b48;
            case 0x1B6B4Cu: goto label_1b6b4c;
            case 0x1B6B50u: goto label_1b6b50;
            case 0x1B6B54u: goto label_1b6b54;
            case 0x1B6B58u: goto label_1b6b58;
            case 0x1B6B5Cu: goto label_1b6b5c;
            case 0x1B6B60u: goto label_1b6b60;
            case 0x1B6B64u: goto label_1b6b64;
            case 0x1B6B68u: goto label_1b6b68;
            case 0x1B6B6Cu: goto label_1b6b6c;
            case 0x1B6B70u: goto label_1b6b70;
            case 0x1B6B74u: goto label_1b6b74;
            case 0x1B6B78u: goto label_1b6b78;
            case 0x1B6B7Cu: goto label_1b6b7c;
            case 0x1B6B80u: goto label_1b6b80;
            case 0x1B6B84u: goto label_1b6b84;
            case 0x1B6B88u: goto label_1b6b88;
            case 0x1B6B8Cu: goto label_1b6b8c;
            case 0x1B6B90u: goto label_1b6b90;
            case 0x1B6B94u: goto label_1b6b94;
            case 0x1B6B98u: goto label_1b6b98;
            case 0x1B6B9Cu: goto label_1b6b9c;
            case 0x1B6BA0u: goto label_1b6ba0;
            case 0x1B6BA4u: goto label_1b6ba4;
            case 0x1B6BA8u: goto label_1b6ba8;
            case 0x1B6BACu: goto label_1b6bac;
            case 0x1B6BB0u: goto label_1b6bb0;
            case 0x1B6BB4u: goto label_1b6bb4;
            case 0x1B6BB8u: goto label_1b6bb8;
            case 0x1B6BBCu: goto label_1b6bbc;
            case 0x1B6BC0u: goto label_1b6bc0;
            case 0x1B6BC4u: goto label_1b6bc4;
            case 0x1B6BC8u: goto label_1b6bc8;
            case 0x1B6BCCu: goto label_1b6bcc;
            case 0x1B6BD0u: goto label_1b6bd0;
            case 0x1B6BD4u: goto label_1b6bd4;
            case 0x1B6BD8u: goto label_1b6bd8;
            case 0x1B6BDCu: goto label_1b6bdc;
            case 0x1B6BE0u: goto label_1b6be0;
            case 0x1B6BE4u: goto label_1b6be4;
            case 0x1B6BE8u: goto label_1b6be8;
            case 0x1B6BECu: goto label_1b6bec;
            case 0x1B6BF0u: goto label_1b6bf0;
            case 0x1B6BF4u: goto label_1b6bf4;
            case 0x1B6BF8u: goto label_1b6bf8;
            case 0x1B6BFCu: goto label_1b6bfc;
            case 0x1B6C00u: goto label_1b6c00;
            case 0x1B6C04u: goto label_1b6c04;
            case 0x1B6C08u: goto label_1b6c08;
            case 0x1B6C0Cu: goto label_1b6c0c;
            case 0x1B6C10u: goto label_1b6c10;
            case 0x1B6C14u: goto label_1b6c14;
            case 0x1B6C18u: goto label_1b6c18;
            case 0x1B6C1Cu: goto label_1b6c1c;
            case 0x1B6C20u: goto label_1b6c20;
            case 0x1B6C24u: goto label_1b6c24;
            case 0x1B6C28u: goto label_1b6c28;
            case 0x1B6C2Cu: goto label_1b6c2c;
            case 0x1B6C30u: goto label_1b6c30;
            case 0x1B6C34u: goto label_1b6c34;
            case 0x1B6C38u: goto label_1b6c38;
            case 0x1B6C3Cu: goto label_1b6c3c;
            case 0x1B6C40u: goto label_1b6c40;
            case 0x1B6C44u: goto label_1b6c44;
            case 0x1B6C48u: goto label_1b6c48;
            case 0x1B6C4Cu: goto label_1b6c4c;
            case 0x1B6C50u: goto label_1b6c50;
            case 0x1B6C54u: goto label_1b6c54;
            case 0x1B6C58u: goto label_1b6c58;
            case 0x1B6C5Cu: goto label_1b6c5c;
            case 0x1B6C60u: goto label_1b6c60;
            case 0x1B6C64u: goto label_1b6c64;
            case 0x1B6C68u: goto label_1b6c68;
            case 0x1B6C6Cu: goto label_1b6c6c;
            case 0x1B6C70u: goto label_1b6c70;
            case 0x1B6C74u: goto label_1b6c74;
            case 0x1B6C78u: goto label_1b6c78;
            case 0x1B6C7Cu: goto label_1b6c7c;
            case 0x1B6C80u: goto label_1b6c80;
            case 0x1B6C84u: goto label_1b6c84;
            case 0x1B6C88u: goto label_1b6c88;
            case 0x1B6C8Cu: goto label_1b6c8c;
            case 0x1B6C90u: goto label_1b6c90;
            case 0x1B6C94u: goto label_1b6c94;
            case 0x1B6C98u: goto label_1b6c98;
            case 0x1B6C9Cu: goto label_1b6c9c;
            case 0x1B6CA0u: goto label_1b6ca0;
            case 0x1B6CA4u: goto label_1b6ca4;
            case 0x1B6CA8u: goto label_1b6ca8;
            case 0x1B6CACu: goto label_1b6cac;
            case 0x1B6CB0u: goto label_1b6cb0;
            case 0x1B6CB4u: goto label_1b6cb4;
            case 0x1B6CB8u: goto label_1b6cb8;
            case 0x1B6CBCu: goto label_1b6cbc;
            case 0x1B6CC0u: goto label_1b6cc0;
            case 0x1B6CC4u: goto label_1b6cc4;
            case 0x1B6CC8u: goto label_1b6cc8;
            case 0x1B6CCCu: goto label_1b6ccc;
            case 0x1B6CD0u: goto label_1b6cd0;
            case 0x1B6CD4u: goto label_1b6cd4;
            case 0x1B6CD8u: goto label_1b6cd8;
            case 0x1B6CDCu: goto label_1b6cdc;
            case 0x1B6CE0u: goto label_1b6ce0;
            case 0x1B6CE4u: goto label_1b6ce4;
            case 0x1B6CE8u: goto label_1b6ce8;
            case 0x1B6CECu: goto label_1b6cec;
            case 0x1B6CF0u: goto label_1b6cf0;
            case 0x1B6CF4u: goto label_1b6cf4;
            case 0x1B6CF8u: goto label_1b6cf8;
            case 0x1B6CFCu: goto label_1b6cfc;
            case 0x1B6D00u: goto label_1b6d00;
            case 0x1B6D04u: goto label_1b6d04;
            case 0x1B6D08u: goto label_1b6d08;
            case 0x1B6D0Cu: goto label_1b6d0c;
            case 0x1B6D10u: goto label_1b6d10;
            case 0x1B6D14u: goto label_1b6d14;
            case 0x1B6D18u: goto label_1b6d18;
            case 0x1B6D1Cu: goto label_1b6d1c;
            case 0x1B6D20u: goto label_1b6d20;
            case 0x1B6D24u: goto label_1b6d24;
            case 0x1B6D28u: goto label_1b6d28;
            case 0x1B6D2Cu: goto label_1b6d2c;
            case 0x1B6D30u: goto label_1b6d30;
            case 0x1B6D34u: goto label_1b6d34;
            case 0x1B6D38u: goto label_1b6d38;
            case 0x1B6D3Cu: goto label_1b6d3c;
            case 0x1B6D40u: goto label_1b6d40;
            case 0x1B6D44u: goto label_1b6d44;
            case 0x1B6D48u: goto label_1b6d48;
            case 0x1B6D4Cu: goto label_1b6d4c;
            case 0x1B6D50u: goto label_1b6d50;
            case 0x1B6D54u: goto label_1b6d54;
            case 0x1B6D58u: goto label_1b6d58;
            case 0x1B6D5Cu: goto label_1b6d5c;
            case 0x1B6D60u: goto label_1b6d60;
            case 0x1B6D64u: goto label_1b6d64;
            case 0x1B6D68u: goto label_1b6d68;
            case 0x1B6D6Cu: goto label_1b6d6c;
            case 0x1B6D70u: goto label_1b6d70;
            case 0x1B6D74u: goto label_1b6d74;
            case 0x1B6D78u: goto label_1b6d78;
            case 0x1B6D7Cu: goto label_1b6d7c;
            case 0x1B6D80u: goto label_1b6d80;
            case 0x1B6D84u: goto label_1b6d84;
            case 0x1B6D88u: goto label_1b6d88;
            case 0x1B6D8Cu: goto label_1b6d8c;
            case 0x1B6D90u: goto label_1b6d90;
            case 0x1B6D94u: goto label_1b6d94;
            case 0x1B6D98u: goto label_1b6d98;
            case 0x1B6D9Cu: goto label_1b6d9c;
            case 0x1B6DA0u: goto label_1b6da0;
            case 0x1B6DA4u: goto label_1b6da4;
            case 0x1B6DA8u: goto label_1b6da8;
            case 0x1B6DACu: goto label_1b6dac;
            case 0x1B6DB0u: goto label_1b6db0;
            case 0x1B6DB4u: goto label_1b6db4;
            case 0x1B6DB8u: goto label_1b6db8;
            case 0x1B6DBCu: goto label_1b6dbc;
            case 0x1B6DC0u: goto label_1b6dc0;
            case 0x1B6DC4u: goto label_1b6dc4;
            case 0x1B6DC8u: goto label_1b6dc8;
            case 0x1B6DCCu: goto label_1b6dcc;
            case 0x1B6DD0u: goto label_1b6dd0;
            case 0x1B6DD4u: goto label_1b6dd4;
            case 0x1B6DD8u: goto label_1b6dd8;
            case 0x1B6DDCu: goto label_1b6ddc;
            case 0x1B6DE0u: goto label_1b6de0;
            case 0x1B6DE4u: goto label_1b6de4;
            case 0x1B6DE8u: goto label_1b6de8;
            case 0x1B6DECu: goto label_1b6dec;
            case 0x1B6DF0u: goto label_1b6df0;
            case 0x1B6DF4u: goto label_1b6df4;
            case 0x1B6DF8u: goto label_1b6df8;
            case 0x1B6DFCu: goto label_1b6dfc;
            case 0x1B6E00u: goto label_1b6e00;
            case 0x1B6E04u: goto label_1b6e04;
            case 0x1B6E08u: goto label_1b6e08;
            case 0x1B6E0Cu: goto label_1b6e0c;
            case 0x1B6E10u: goto label_1b6e10;
            case 0x1B6E14u: goto label_1b6e14;
            case 0x1B6E18u: goto label_1b6e18;
            case 0x1B6E1Cu: goto label_1b6e1c;
            case 0x1B6E20u: goto label_1b6e20;
            case 0x1B6E24u: goto label_1b6e24;
            case 0x1B6E28u: goto label_1b6e28;
            case 0x1B6E2Cu: goto label_1b6e2c;
            case 0x1B6E30u: goto label_1b6e30;
            case 0x1B6E34u: goto label_1b6e34;
            case 0x1B6E38u: goto label_1b6e38;
            case 0x1B6E3Cu: goto label_1b6e3c;
            case 0x1B6E40u: goto label_1b6e40;
            case 0x1B6E44u: goto label_1b6e44;
            case 0x1B6E48u: goto label_1b6e48;
            case 0x1B6E4Cu: goto label_1b6e4c;
            case 0x1B6E50u: goto label_1b6e50;
            case 0x1B6E54u: goto label_1b6e54;
            case 0x1B6E58u: goto label_1b6e58;
            case 0x1B6E5Cu: goto label_1b6e5c;
            case 0x1B6E60u: goto label_1b6e60;
            case 0x1B6E64u: goto label_1b6e64;
            case 0x1B6E68u: goto label_1b6e68;
            case 0x1B6E6Cu: goto label_1b6e6c;
            case 0x1B6E70u: goto label_1b6e70;
            case 0x1B6E74u: goto label_1b6e74;
            case 0x1B6E78u: goto label_1b6e78;
            case 0x1B6E7Cu: goto label_1b6e7c;
            case 0x1B6E80u: goto label_1b6e80;
            case 0x1B6E84u: goto label_1b6e84;
            case 0x1B6E88u: goto label_1b6e88;
            case 0x1B6E8Cu: goto label_1b6e8c;
            case 0x1B6E90u: goto label_1b6e90;
            case 0x1B6E94u: goto label_1b6e94;
            case 0x1B6E98u: goto label_1b6e98;
            case 0x1B6E9Cu: goto label_1b6e9c;
            case 0x1B6EA0u: goto label_1b6ea0;
            case 0x1B6EA4u: goto label_1b6ea4;
            case 0x1B6EA8u: goto label_1b6ea8;
            case 0x1B6EACu: goto label_1b6eac;
            case 0x1B6EB0u: goto label_1b6eb0;
            case 0x1B6EB4u: goto label_1b6eb4;
            case 0x1B6EB8u: goto label_1b6eb8;
            case 0x1B6EBCu: goto label_1b6ebc;
            case 0x1B6EC0u: goto label_1b6ec0;
            case 0x1B6EC4u: goto label_1b6ec4;
            case 0x1B6EC8u: goto label_1b6ec8;
            case 0x1B6ECCu: goto label_1b6ecc;
            case 0x1B6ED0u: goto label_1b6ed0;
            case 0x1B6ED4u: goto label_1b6ed4;
            case 0x1B6ED8u: goto label_1b6ed8;
            case 0x1B6EDCu: goto label_1b6edc;
            case 0x1B6EE0u: goto label_1b6ee0;
            case 0x1B6EE4u: goto label_1b6ee4;
            case 0x1B6EE8u: goto label_1b6ee8;
            case 0x1B6EECu: goto label_1b6eec;
            case 0x1B6EF0u: goto label_1b6ef0;
            case 0x1B6EF4u: goto label_1b6ef4;
            case 0x1B6EF8u: goto label_1b6ef8;
            case 0x1B6EFCu: goto label_1b6efc;
            case 0x1B6F00u: goto label_1b6f00;
            case 0x1B6F04u: goto label_1b6f04;
            case 0x1B6F08u: goto label_1b6f08;
            case 0x1B6F0Cu: goto label_1b6f0c;
            case 0x1B6F10u: goto label_1b6f10;
            case 0x1B6F14u: goto label_1b6f14;
            case 0x1B6F18u: goto label_1b6f18;
            case 0x1B6F1Cu: goto label_1b6f1c;
            case 0x1B6F20u: goto label_1b6f20;
            case 0x1B6F24u: goto label_1b6f24;
            case 0x1B6F28u: goto label_1b6f28;
            case 0x1B6F2Cu: goto label_1b6f2c;
            case 0x1B6F30u: goto label_1b6f30;
            case 0x1B6F34u: goto label_1b6f34;
            case 0x1B6F38u: goto label_1b6f38;
            case 0x1B6F3Cu: goto label_1b6f3c;
            case 0x1B6F40u: goto label_1b6f40;
            case 0x1B6F44u: goto label_1b6f44;
            case 0x1B6F48u: goto label_1b6f48;
            case 0x1B6F4Cu: goto label_1b6f4c;
            case 0x1B6F50u: goto label_1b6f50;
            case 0x1B6F54u: goto label_1b6f54;
            case 0x1B6F58u: goto label_1b6f58;
            case 0x1B6F5Cu: goto label_1b6f5c;
            case 0x1B6F60u: goto label_1b6f60;
            case 0x1B6F64u: goto label_1b6f64;
            case 0x1B6F68u: goto label_1b6f68;
            case 0x1B6F6Cu: goto label_1b6f6c;
            case 0x1B6F70u: goto label_1b6f70;
            case 0x1B6F74u: goto label_1b6f74;
            case 0x1B6F78u: goto label_1b6f78;
            case 0x1B6F7Cu: goto label_1b6f7c;
            case 0x1B6F80u: goto label_1b6f80;
            case 0x1B6F84u: goto label_1b6f84;
            case 0x1B6F88u: goto label_1b6f88;
            case 0x1B6F8Cu: goto label_1b6f8c;
            case 0x1B6F90u: goto label_1b6f90;
            case 0x1B6F94u: goto label_1b6f94;
            case 0x1B6F98u: goto label_1b6f98;
            case 0x1B6F9Cu: goto label_1b6f9c;
            case 0x1B6FA0u: goto label_1b6fa0;
            case 0x1B6FA4u: goto label_1b6fa4;
            case 0x1B6FA8u: goto label_1b6fa8;
            case 0x1B6FACu: goto label_1b6fac;
            case 0x1B6FB0u: goto label_1b6fb0;
            case 0x1B6FB4u: goto label_1b6fb4;
            case 0x1B6FB8u: goto label_1b6fb8;
            case 0x1B6FBCu: goto label_1b6fbc;
            case 0x1B6FC0u: goto label_1b6fc0;
            case 0x1B6FC4u: goto label_1b6fc4;
            case 0x1B6FC8u: goto label_1b6fc8;
            case 0x1B6FCCu: goto label_1b6fcc;
            case 0x1B6FD0u: goto label_1b6fd0;
            case 0x1B6FD4u: goto label_1b6fd4;
            case 0x1B6FD8u: goto label_1b6fd8;
            case 0x1B6FDCu: goto label_1b6fdc;
            case 0x1B6FE0u: goto label_1b6fe0;
            case 0x1B6FE4u: goto label_1b6fe4;
            case 0x1B6FE8u: goto label_1b6fe8;
            case 0x1B6FECu: goto label_1b6fec;
            case 0x1B6FF0u: goto label_1b6ff0;
            case 0x1B6FF4u: goto label_1b6ff4;
            case 0x1B6FF8u: goto label_1b6ff8;
            case 0x1B6FFCu: goto label_1b6ffc;
            case 0x1B7000u: goto label_1b7000;
            case 0x1B7004u: goto label_1b7004;
            case 0x1B7008u: goto label_1b7008;
            case 0x1B700Cu: goto label_1b700c;
            case 0x1B7010u: goto label_1b7010;
            case 0x1B7014u: goto label_1b7014;
            case 0x1B7018u: goto label_1b7018;
            case 0x1B701Cu: goto label_1b701c;
            case 0x1B7020u: goto label_1b7020;
            case 0x1B7024u: goto label_1b7024;
            case 0x1B7028u: goto label_1b7028;
            case 0x1B702Cu: goto label_1b702c;
            case 0x1B7030u: goto label_1b7030;
            case 0x1B7034u: goto label_1b7034;
            case 0x1B7038u: goto label_1b7038;
            case 0x1B703Cu: goto label_1b703c;
            case 0x1B7040u: goto label_1b7040;
            case 0x1B7044u: goto label_1b7044;
            case 0x1B7048u: goto label_1b7048;
            case 0x1B704Cu: goto label_1b704c;
            case 0x1B7050u: goto label_1b7050;
            case 0x1B7054u: goto label_1b7054;
            case 0x1B7058u: goto label_1b7058;
            case 0x1B705Cu: goto label_1b705c;
            case 0x1B7060u: goto label_1b7060;
            case 0x1B7064u: goto label_1b7064;
            case 0x1B7068u: goto label_1b7068;
            case 0x1B706Cu: goto label_1b706c;
            case 0x1B7070u: goto label_1b7070;
            case 0x1B7074u: goto label_1b7074;
            case 0x1B7078u: goto label_1b7078;
            case 0x1B707Cu: goto label_1b707c;
            case 0x1B7080u: goto label_1b7080;
            case 0x1B7084u: goto label_1b7084;
            case 0x1B7088u: goto label_1b7088;
            case 0x1B708Cu: goto label_1b708c;
            case 0x1B7090u: goto label_1b7090;
            case 0x1B7094u: goto label_1b7094;
            case 0x1B7098u: goto label_1b7098;
            case 0x1B709Cu: goto label_1b709c;
            case 0x1B70A0u: goto label_1b70a0;
            case 0x1B70A4u: goto label_1b70a4;
            case 0x1B70A8u: goto label_1b70a8;
            case 0x1B70ACu: goto label_1b70ac;
            case 0x1B70B0u: goto label_1b70b0;
            case 0x1B70B4u: goto label_1b70b4;
            case 0x1B70B8u: goto label_1b70b8;
            case 0x1B70BCu: goto label_1b70bc;
            case 0x1B70C0u: goto label_1b70c0;
            case 0x1B70C4u: goto label_1b70c4;
            case 0x1B70C8u: goto label_1b70c8;
            case 0x1B70CCu: goto label_1b70cc;
            case 0x1B70D0u: goto label_1b70d0;
            case 0x1B70D4u: goto label_1b70d4;
            case 0x1B70D8u: goto label_1b70d8;
            case 0x1B70DCu: goto label_1b70dc;
            case 0x1B70E0u: goto label_1b70e0;
            case 0x1B70E4u: goto label_1b70e4;
            case 0x1B70E8u: goto label_1b70e8;
            case 0x1B70ECu: goto label_1b70ec;
            case 0x1B70F0u: goto label_1b70f0;
            case 0x1B70F4u: goto label_1b70f4;
            case 0x1B70F8u: goto label_1b70f8;
            case 0x1B70FCu: goto label_1b70fc;
            case 0x1B7100u: goto label_1b7100;
            case 0x1B7104u: goto label_1b7104;
            case 0x1B7108u: goto label_1b7108;
            case 0x1B710Cu: goto label_1b710c;
            case 0x1B7110u: goto label_1b7110;
            case 0x1B7114u: goto label_1b7114;
            case 0x1B7118u: goto label_1b7118;
            case 0x1B711Cu: goto label_1b711c;
            case 0x1B7120u: goto label_1b7120;
            case 0x1B7124u: goto label_1b7124;
            case 0x1B7128u: goto label_1b7128;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B708Cu; }
            if (ctx->pc != 0x1B708Cu) { return; }
        }
    }
    ctx->pc = 0x1B708Cu;
label_1b708c:
    // 0x1b708c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1b7090:
    if (ctx->pc == 0x1B7090u) {
        ctx->pc = 0x1B7094u;
        goto label_1b7094;
    }
    ctx->pc = 0x1B708Cu;
    {
        const bool branch_taken_0x1b708c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b708c) {
            ctx->pc = 0x1B7118u;
            goto label_1b7118;
        }
    }
    ctx->pc = 0x1B7094u;
label_1b7094:
    // 0x1b7094: 0x0  nop
    ctx->pc = 0x1b7094u;
    // NOP
label_1b7098:
    // 0x1b7098: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1b7098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b709c:
    // 0x1b709c: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b709cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1b70a0:
    // 0x1b70a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b70a4:
    // 0x1b70a4: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1b70a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1b70a8:
    // 0x1b70a8: 0x24c65870  addiu       $a2, $a2, 0x5870
    ctx->pc = 0x1b70a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22640));
label_1b70ac:
    // 0x1b70ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b70acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b70b0:
    // 0x1b70b0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1b70b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b70b4:
    // 0x1b70b4: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1b70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1b70b8:
    // 0x1b70b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b70b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b70bc:
    // 0x1b70bc: 0x0  nop
    ctx->pc = 0x1b70bcu;
    // NOP
label_1b70c0:
    // 0x1b70c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b70c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b70c4:
    // 0x1b70c4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1b70c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1b70c8:
    // 0x1b70c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b70cc:
    // 0x1b70cc: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1b70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1b70d0:
    // 0x1b70d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b70d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b70d4:
    // 0x1b70d4: 0x0  nop
    ctx->pc = 0x1b70d4u;
    // NOP
label_1b70d8:
    // 0x1b70d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b70d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b70dc:
    // 0x1b70dc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1b70dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1b70e0:
    // 0x1b70e0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1b70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b70e4:
    // 0x1b70e4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1b70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1b70e8:
    // 0x1b70e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b70e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b70ec:
    // 0x1b70ec: 0x0  nop
    ctx->pc = 0x1b70ecu;
    // NOP
label_1b70f0:
    // 0x1b70f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b70f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b70f4:
    // 0x1b70f4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1b70f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1b70f8:
    // 0x1b70f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b70fc:
    // 0x1b70fc: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1b70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1b7100:
    // 0x1b7100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7104:
    // 0x1b7104: 0x0  nop
    ctx->pc = 0x1b7104u;
    // NOP
label_1b7108:
    // 0x1b7108: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b710c:
    // 0x1b710c: 0xc053ca4  jal         func_14F290
label_1b7110:
    if (ctx->pc == 0x1B7110u) {
        ctx->pc = 0x1B7110u;
            // 0x1b7110: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->pc = 0x1B7114u;
        goto label_1b7114;
    }
    ctx->pc = 0x1B710Cu;
    SET_GPR_U32(ctx, 31, 0x1B7114u);
    ctx->pc = 0x1B7110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B710Cu;
            // 0x1b7110: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7114u; }
        if (ctx->pc != 0x1B7114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7114u; }
        if (ctx->pc != 0x1B7114u) { return; }
    }
    ctx->pc = 0x1B7114u;
label_1b7114:
    // 0x1b7114: 0x0  nop
    ctx->pc = 0x1b7114u;
    // NOP
label_1b7118:
    // 0x1b7118: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b711c:
    // 0x1b711c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b711cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7120:
    // 0x1b7120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7124:
    // 0x1b7124: 0x3e00008  jr          $ra
label_1b7128:
    if (ctx->pc == 0x1B7128u) {
        ctx->pc = 0x1B7128u;
            // 0x1b7128: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B712Cu;
        goto label_fallthrough_0x1b7124;
    }
    ctx->pc = 0x1B7124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7124u;
            // 0x1b7128: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5B60u: goto label_1b5b60;
            case 0x1B5B64u: goto label_1b5b64;
            case 0x1B5B68u: goto label_1b5b68;
            case 0x1B5B6Cu: goto label_1b5b6c;
            case 0x1B5B70u: goto label_1b5b70;
            case 0x1B5B74u: goto label_1b5b74;
            case 0x1B5B78u: goto label_1b5b78;
            case 0x1B5B7Cu: goto label_1b5b7c;
            case 0x1B5B80u: goto label_1b5b80;
            case 0x1B5B84u: goto label_1b5b84;
            case 0x1B5B88u: goto label_1b5b88;
            case 0x1B5B8Cu: goto label_1b5b8c;
            case 0x1B5B90u: goto label_1b5b90;
            case 0x1B5B94u: goto label_1b5b94;
            case 0x1B5B98u: goto label_1b5b98;
            case 0x1B5B9Cu: goto label_1b5b9c;
            case 0x1B5BA0u: goto label_1b5ba0;
            case 0x1B5BA4u: goto label_1b5ba4;
            case 0x1B5BA8u: goto label_1b5ba8;
            case 0x1B5BACu: goto label_1b5bac;
            case 0x1B5BB0u: goto label_1b5bb0;
            case 0x1B5BB4u: goto label_1b5bb4;
            case 0x1B5BB8u: goto label_1b5bb8;
            case 0x1B5BBCu: goto label_1b5bbc;
            case 0x1B5BC0u: goto label_1b5bc0;
            case 0x1B5BC4u: goto label_1b5bc4;
            case 0x1B5BC8u: goto label_1b5bc8;
            case 0x1B5BCCu: goto label_1b5bcc;
            case 0x1B5BD0u: goto label_1b5bd0;
            case 0x1B5BD4u: goto label_1b5bd4;
            case 0x1B5BD8u: goto label_1b5bd8;
            case 0x1B5BDCu: goto label_1b5bdc;
            case 0x1B5BE0u: goto label_1b5be0;
            case 0x1B5BE4u: goto label_1b5be4;
            case 0x1B5BE8u: goto label_1b5be8;
            case 0x1B5BECu: goto label_1b5bec;
            case 0x1B5BF0u: goto label_1b5bf0;
            case 0x1B5BF4u: goto label_1b5bf4;
            case 0x1B5BF8u: goto label_1b5bf8;
            case 0x1B5BFCu: goto label_1b5bfc;
            case 0x1B5C00u: goto label_1b5c00;
            case 0x1B5C04u: goto label_1b5c04;
            case 0x1B5C08u: goto label_1b5c08;
            case 0x1B5C0Cu: goto label_1b5c0c;
            case 0x1B5C10u: goto label_1b5c10;
            case 0x1B5C14u: goto label_1b5c14;
            case 0x1B5C18u: goto label_1b5c18;
            case 0x1B5C1Cu: goto label_1b5c1c;
            case 0x1B5C20u: goto label_1b5c20;
            case 0x1B5C24u: goto label_1b5c24;
            case 0x1B5C28u: goto label_1b5c28;
            case 0x1B5C2Cu: goto label_1b5c2c;
            case 0x1B5C30u: goto label_1b5c30;
            case 0x1B5C34u: goto label_1b5c34;
            case 0x1B5C38u: goto label_1b5c38;
            case 0x1B5C3Cu: goto label_1b5c3c;
            case 0x1B5C40u: goto label_1b5c40;
            case 0x1B5C44u: goto label_1b5c44;
            case 0x1B5C48u: goto label_1b5c48;
            case 0x1B5C4Cu: goto label_1b5c4c;
            case 0x1B5C50u: goto label_1b5c50;
            case 0x1B5C54u: goto label_1b5c54;
            case 0x1B5C58u: goto label_1b5c58;
            case 0x1B5C5Cu: goto label_1b5c5c;
            case 0x1B5C60u: goto label_1b5c60;
            case 0x1B5C64u: goto label_1b5c64;
            case 0x1B5C68u: goto label_1b5c68;
            case 0x1B5C6Cu: goto label_1b5c6c;
            case 0x1B5C70u: goto label_1b5c70;
            case 0x1B5C74u: goto label_1b5c74;
            case 0x1B5C78u: goto label_1b5c78;
            case 0x1B5C7Cu: goto label_1b5c7c;
            case 0x1B5C80u: goto label_1b5c80;
            case 0x1B5C84u: goto label_1b5c84;
            case 0x1B5C88u: goto label_1b5c88;
            case 0x1B5C8Cu: goto label_1b5c8c;
            case 0x1B5C90u: goto label_1b5c90;
            case 0x1B5C94u: goto label_1b5c94;
            case 0x1B5C98u: goto label_1b5c98;
            case 0x1B5C9Cu: goto label_1b5c9c;
            case 0x1B5CA0u: goto label_1b5ca0;
            case 0x1B5CA4u: goto label_1b5ca4;
            case 0x1B5CA8u: goto label_1b5ca8;
            case 0x1B5CACu: goto label_1b5cac;
            case 0x1B5CB0u: goto label_1b5cb0;
            case 0x1B5CB4u: goto label_1b5cb4;
            case 0x1B5CB8u: goto label_1b5cb8;
            case 0x1B5CBCu: goto label_1b5cbc;
            case 0x1B5CC0u: goto label_1b5cc0;
            case 0x1B5CC4u: goto label_1b5cc4;
            case 0x1B5CC8u: goto label_1b5cc8;
            case 0x1B5CCCu: goto label_1b5ccc;
            case 0x1B5CD0u: goto label_1b5cd0;
            case 0x1B5CD4u: goto label_1b5cd4;
            case 0x1B5CD8u: goto label_1b5cd8;
            case 0x1B5CDCu: goto label_1b5cdc;
            case 0x1B5CE0u: goto label_1b5ce0;
            case 0x1B5CE4u: goto label_1b5ce4;
            case 0x1B5CE8u: goto label_1b5ce8;
            case 0x1B5CECu: goto label_1b5cec;
            case 0x1B5CF0u: goto label_1b5cf0;
            case 0x1B5CF4u: goto label_1b5cf4;
            case 0x1B5CF8u: goto label_1b5cf8;
            case 0x1B5CFCu: goto label_1b5cfc;
            case 0x1B5D00u: goto label_1b5d00;
            case 0x1B5D04u: goto label_1b5d04;
            case 0x1B5D08u: goto label_1b5d08;
            case 0x1B5D0Cu: goto label_1b5d0c;
            case 0x1B5D10u: goto label_1b5d10;
            case 0x1B5D14u: goto label_1b5d14;
            case 0x1B5D18u: goto label_1b5d18;
            case 0x1B5D1Cu: goto label_1b5d1c;
            case 0x1B5D20u: goto label_1b5d20;
            case 0x1B5D24u: goto label_1b5d24;
            case 0x1B5D28u: goto label_1b5d28;
            case 0x1B5D2Cu: goto label_1b5d2c;
            case 0x1B5D30u: goto label_1b5d30;
            case 0x1B5D34u: goto label_1b5d34;
            case 0x1B5D38u: goto label_1b5d38;
            case 0x1B5D3Cu: goto label_1b5d3c;
            case 0x1B5D40u: goto label_1b5d40;
            case 0x1B5D44u: goto label_1b5d44;
            case 0x1B5D48u: goto label_1b5d48;
            case 0x1B5D4Cu: goto label_1b5d4c;
            case 0x1B5D50u: goto label_1b5d50;
            case 0x1B5D54u: goto label_1b5d54;
            case 0x1B5D58u: goto label_1b5d58;
            case 0x1B5D5Cu: goto label_1b5d5c;
            case 0x1B5D60u: goto label_1b5d60;
            case 0x1B5D64u: goto label_1b5d64;
            case 0x1B5D68u: goto label_1b5d68;
            case 0x1B5D6Cu: goto label_1b5d6c;
            case 0x1B5D70u: goto label_1b5d70;
            case 0x1B5D74u: goto label_1b5d74;
            case 0x1B5D78u: goto label_1b5d78;
            case 0x1B5D7Cu: goto label_1b5d7c;
            case 0x1B5D80u: goto label_1b5d80;
            case 0x1B5D84u: goto label_1b5d84;
            case 0x1B5D88u: goto label_1b5d88;
            case 0x1B5D8Cu: goto label_1b5d8c;
            case 0x1B5D90u: goto label_1b5d90;
            case 0x1B5D94u: goto label_1b5d94;
            case 0x1B5D98u: goto label_1b5d98;
            case 0x1B5D9Cu: goto label_1b5d9c;
            case 0x1B5DA0u: goto label_1b5da0;
            case 0x1B5DA4u: goto label_1b5da4;
            case 0x1B5DA8u: goto label_1b5da8;
            case 0x1B5DACu: goto label_1b5dac;
            case 0x1B5DB0u: goto label_1b5db0;
            case 0x1B5DB4u: goto label_1b5db4;
            case 0x1B5DB8u: goto label_1b5db8;
            case 0x1B5DBCu: goto label_1b5dbc;
            case 0x1B5DC0u: goto label_1b5dc0;
            case 0x1B5DC4u: goto label_1b5dc4;
            case 0x1B5DC8u: goto label_1b5dc8;
            case 0x1B5DCCu: goto label_1b5dcc;
            case 0x1B5DD0u: goto label_1b5dd0;
            case 0x1B5DD4u: goto label_1b5dd4;
            case 0x1B5DD8u: goto label_1b5dd8;
            case 0x1B5DDCu: goto label_1b5ddc;
            case 0x1B5DE0u: goto label_1b5de0;
            case 0x1B5DE4u: goto label_1b5de4;
            case 0x1B5DE8u: goto label_1b5de8;
            case 0x1B5DECu: goto label_1b5dec;
            case 0x1B5DF0u: goto label_1b5df0;
            case 0x1B5DF4u: goto label_1b5df4;
            case 0x1B5DF8u: goto label_1b5df8;
            case 0x1B5DFCu: goto label_1b5dfc;
            case 0x1B5E00u: goto label_1b5e00;
            case 0x1B5E04u: goto label_1b5e04;
            case 0x1B5E08u: goto label_1b5e08;
            case 0x1B5E0Cu: goto label_1b5e0c;
            case 0x1B5E10u: goto label_1b5e10;
            case 0x1B5E14u: goto label_1b5e14;
            case 0x1B5E18u: goto label_1b5e18;
            case 0x1B5E1Cu: goto label_1b5e1c;
            case 0x1B5E20u: goto label_1b5e20;
            case 0x1B5E24u: goto label_1b5e24;
            case 0x1B5E28u: goto label_1b5e28;
            case 0x1B5E2Cu: goto label_1b5e2c;
            case 0x1B5E30u: goto label_1b5e30;
            case 0x1B5E34u: goto label_1b5e34;
            case 0x1B5E38u: goto label_1b5e38;
            case 0x1B5E3Cu: goto label_1b5e3c;
            case 0x1B5E40u: goto label_1b5e40;
            case 0x1B5E44u: goto label_1b5e44;
            case 0x1B5E48u: goto label_1b5e48;
            case 0x1B5E4Cu: goto label_1b5e4c;
            case 0x1B5E50u: goto label_1b5e50;
            case 0x1B5E54u: goto label_1b5e54;
            case 0x1B5E58u: goto label_1b5e58;
            case 0x1B5E5Cu: goto label_1b5e5c;
            case 0x1B5E60u: goto label_1b5e60;
            case 0x1B5E64u: goto label_1b5e64;
            case 0x1B5E68u: goto label_1b5e68;
            case 0x1B5E6Cu: goto label_1b5e6c;
            case 0x1B5E70u: goto label_1b5e70;
            case 0x1B5E74u: goto label_1b5e74;
            case 0x1B5E78u: goto label_1b5e78;
            case 0x1B5E7Cu: goto label_1b5e7c;
            case 0x1B5E80u: goto label_1b5e80;
            case 0x1B5E84u: goto label_1b5e84;
            case 0x1B5E88u: goto label_1b5e88;
            case 0x1B5E8Cu: goto label_1b5e8c;
            case 0x1B5E90u: goto label_1b5e90;
            case 0x1B5E94u: goto label_1b5e94;
            case 0x1B5E98u: goto label_1b5e98;
            case 0x1B5E9Cu: goto label_1b5e9c;
            case 0x1B5EA0u: goto label_1b5ea0;
            case 0x1B5EA4u: goto label_1b5ea4;
            case 0x1B5EA8u: goto label_1b5ea8;
            case 0x1B5EACu: goto label_1b5eac;
            case 0x1B5EB0u: goto label_1b5eb0;
            case 0x1B5EB4u: goto label_1b5eb4;
            case 0x1B5EB8u: goto label_1b5eb8;
            case 0x1B5EBCu: goto label_1b5ebc;
            case 0x1B5EC0u: goto label_1b5ec0;
            case 0x1B5EC4u: goto label_1b5ec4;
            case 0x1B5EC8u: goto label_1b5ec8;
            case 0x1B5ECCu: goto label_1b5ecc;
            case 0x1B5ED0u: goto label_1b5ed0;
            case 0x1B5ED4u: goto label_1b5ed4;
            case 0x1B5ED8u: goto label_1b5ed8;
            case 0x1B5EDCu: goto label_1b5edc;
            case 0x1B5EE0u: goto label_1b5ee0;
            case 0x1B5EE4u: goto label_1b5ee4;
            case 0x1B5EE8u: goto label_1b5ee8;
            case 0x1B5EECu: goto label_1b5eec;
            case 0x1B5EF0u: goto label_1b5ef0;
            case 0x1B5EF4u: goto label_1b5ef4;
            case 0x1B5EF8u: goto label_1b5ef8;
            case 0x1B5EFCu: goto label_1b5efc;
            case 0x1B5F00u: goto label_1b5f00;
            case 0x1B5F04u: goto label_1b5f04;
            case 0x1B5F08u: goto label_1b5f08;
            case 0x1B5F0Cu: goto label_1b5f0c;
            case 0x1B5F10u: goto label_1b5f10;
            case 0x1B5F14u: goto label_1b5f14;
            case 0x1B5F18u: goto label_1b5f18;
            case 0x1B5F1Cu: goto label_1b5f1c;
            case 0x1B5F20u: goto label_1b5f20;
            case 0x1B5F24u: goto label_1b5f24;
            case 0x1B5F28u: goto label_1b5f28;
            case 0x1B5F2Cu: goto label_1b5f2c;
            case 0x1B5F30u: goto label_1b5f30;
            case 0x1B5F34u: goto label_1b5f34;
            case 0x1B5F38u: goto label_1b5f38;
            case 0x1B5F3Cu: goto label_1b5f3c;
            case 0x1B5F40u: goto label_1b5f40;
            case 0x1B5F44u: goto label_1b5f44;
            case 0x1B5F48u: goto label_1b5f48;
            case 0x1B5F4Cu: goto label_1b5f4c;
            case 0x1B5F50u: goto label_1b5f50;
            case 0x1B5F54u: goto label_1b5f54;
            case 0x1B5F58u: goto label_1b5f58;
            case 0x1B5F5Cu: goto label_1b5f5c;
            case 0x1B5F60u: goto label_1b5f60;
            case 0x1B5F64u: goto label_1b5f64;
            case 0x1B5F68u: goto label_1b5f68;
            case 0x1B5F6Cu: goto label_1b5f6c;
            case 0x1B5F70u: goto label_1b5f70;
            case 0x1B5F74u: goto label_1b5f74;
            case 0x1B5F78u: goto label_1b5f78;
            case 0x1B5F7Cu: goto label_1b5f7c;
            case 0x1B5F80u: goto label_1b5f80;
            case 0x1B5F84u: goto label_1b5f84;
            case 0x1B5F88u: goto label_1b5f88;
            case 0x1B5F8Cu: goto label_1b5f8c;
            case 0x1B5F90u: goto label_1b5f90;
            case 0x1B5F94u: goto label_1b5f94;
            case 0x1B5F98u: goto label_1b5f98;
            case 0x1B5F9Cu: goto label_1b5f9c;
            case 0x1B5FA0u: goto label_1b5fa0;
            case 0x1B5FA4u: goto label_1b5fa4;
            case 0x1B5FA8u: goto label_1b5fa8;
            case 0x1B5FACu: goto label_1b5fac;
            case 0x1B5FB0u: goto label_1b5fb0;
            case 0x1B5FB4u: goto label_1b5fb4;
            case 0x1B5FB8u: goto label_1b5fb8;
            case 0x1B5FBCu: goto label_1b5fbc;
            case 0x1B5FC0u: goto label_1b5fc0;
            case 0x1B5FC4u: goto label_1b5fc4;
            case 0x1B5FC8u: goto label_1b5fc8;
            case 0x1B5FCCu: goto label_1b5fcc;
            case 0x1B5FD0u: goto label_1b5fd0;
            case 0x1B5FD4u: goto label_1b5fd4;
            case 0x1B5FD8u: goto label_1b5fd8;
            case 0x1B5FDCu: goto label_1b5fdc;
            case 0x1B5FE0u: goto label_1b5fe0;
            case 0x1B5FE4u: goto label_1b5fe4;
            case 0x1B5FE8u: goto label_1b5fe8;
            case 0x1B5FECu: goto label_1b5fec;
            case 0x1B5FF0u: goto label_1b5ff0;
            case 0x1B5FF4u: goto label_1b5ff4;
            case 0x1B5FF8u: goto label_1b5ff8;
            case 0x1B5FFCu: goto label_1b5ffc;
            case 0x1B6000u: goto label_1b6000;
            case 0x1B6004u: goto label_1b6004;
            case 0x1B6008u: goto label_1b6008;
            case 0x1B600Cu: goto label_1b600c;
            case 0x1B6010u: goto label_1b6010;
            case 0x1B6014u: goto label_1b6014;
            case 0x1B6018u: goto label_1b6018;
            case 0x1B601Cu: goto label_1b601c;
            case 0x1B6020u: goto label_1b6020;
            case 0x1B6024u: goto label_1b6024;
            case 0x1B6028u: goto label_1b6028;
            case 0x1B602Cu: goto label_1b602c;
            case 0x1B6030u: goto label_1b6030;
            case 0x1B6034u: goto label_1b6034;
            case 0x1B6038u: goto label_1b6038;
            case 0x1B603Cu: goto label_1b603c;
            case 0x1B6040u: goto label_1b6040;
            case 0x1B6044u: goto label_1b6044;
            case 0x1B6048u: goto label_1b6048;
            case 0x1B604Cu: goto label_1b604c;
            case 0x1B6050u: goto label_1b6050;
            case 0x1B6054u: goto label_1b6054;
            case 0x1B6058u: goto label_1b6058;
            case 0x1B605Cu: goto label_1b605c;
            case 0x1B6060u: goto label_1b6060;
            case 0x1B6064u: goto label_1b6064;
            case 0x1B6068u: goto label_1b6068;
            case 0x1B606Cu: goto label_1b606c;
            case 0x1B6070u: goto label_1b6070;
            case 0x1B6074u: goto label_1b6074;
            case 0x1B6078u: goto label_1b6078;
            case 0x1B607Cu: goto label_1b607c;
            case 0x1B6080u: goto label_1b6080;
            case 0x1B6084u: goto label_1b6084;
            case 0x1B6088u: goto label_1b6088;
            case 0x1B608Cu: goto label_1b608c;
            case 0x1B6090u: goto label_1b6090;
            case 0x1B6094u: goto label_1b6094;
            case 0x1B6098u: goto label_1b6098;
            case 0x1B609Cu: goto label_1b609c;
            case 0x1B60A0u: goto label_1b60a0;
            case 0x1B60A4u: goto label_1b60a4;
            case 0x1B60A8u: goto label_1b60a8;
            case 0x1B60ACu: goto label_1b60ac;
            case 0x1B60B0u: goto label_1b60b0;
            case 0x1B60B4u: goto label_1b60b4;
            case 0x1B60B8u: goto label_1b60b8;
            case 0x1B60BCu: goto label_1b60bc;
            case 0x1B60C0u: goto label_1b60c0;
            case 0x1B60C4u: goto label_1b60c4;
            case 0x1B60C8u: goto label_1b60c8;
            case 0x1B60CCu: goto label_1b60cc;
            case 0x1B60D0u: goto label_1b60d0;
            case 0x1B60D4u: goto label_1b60d4;
            case 0x1B60D8u: goto label_1b60d8;
            case 0x1B60DCu: goto label_1b60dc;
            case 0x1B60E0u: goto label_1b60e0;
            case 0x1B60E4u: goto label_1b60e4;
            case 0x1B60E8u: goto label_1b60e8;
            case 0x1B60ECu: goto label_1b60ec;
            case 0x1B60F0u: goto label_1b60f0;
            case 0x1B60F4u: goto label_1b60f4;
            case 0x1B60F8u: goto label_1b60f8;
            case 0x1B60FCu: goto label_1b60fc;
            case 0x1B6100u: goto label_1b6100;
            case 0x1B6104u: goto label_1b6104;
            case 0x1B6108u: goto label_1b6108;
            case 0x1B610Cu: goto label_1b610c;
            case 0x1B6110u: goto label_1b6110;
            case 0x1B6114u: goto label_1b6114;
            case 0x1B6118u: goto label_1b6118;
            case 0x1B611Cu: goto label_1b611c;
            case 0x1B6120u: goto label_1b6120;
            case 0x1B6124u: goto label_1b6124;
            case 0x1B6128u: goto label_1b6128;
            case 0x1B612Cu: goto label_1b612c;
            case 0x1B6130u: goto label_1b6130;
            case 0x1B6134u: goto label_1b6134;
            case 0x1B6138u: goto label_1b6138;
            case 0x1B613Cu: goto label_1b613c;
            case 0x1B6140u: goto label_1b6140;
            case 0x1B6144u: goto label_1b6144;
            case 0x1B6148u: goto label_1b6148;
            case 0x1B614Cu: goto label_1b614c;
            case 0x1B6150u: goto label_1b6150;
            case 0x1B6154u: goto label_1b6154;
            case 0x1B6158u: goto label_1b6158;
            case 0x1B615Cu: goto label_1b615c;
            case 0x1B6160u: goto label_1b6160;
            case 0x1B6164u: goto label_1b6164;
            case 0x1B6168u: goto label_1b6168;
            case 0x1B616Cu: goto label_1b616c;
            case 0x1B6170u: goto label_1b6170;
            case 0x1B6174u: goto label_1b6174;
            case 0x1B6178u: goto label_1b6178;
            case 0x1B617Cu: goto label_1b617c;
            case 0x1B6180u: goto label_1b6180;
            case 0x1B6184u: goto label_1b6184;
            case 0x1B6188u: goto label_1b6188;
            case 0x1B618Cu: goto label_1b618c;
            case 0x1B6190u: goto label_1b6190;
            case 0x1B6194u: goto label_1b6194;
            case 0x1B6198u: goto label_1b6198;
            case 0x1B619Cu: goto label_1b619c;
            case 0x1B61A0u: goto label_1b61a0;
            case 0x1B61A4u: goto label_1b61a4;
            case 0x1B61A8u: goto label_1b61a8;
            case 0x1B61ACu: goto label_1b61ac;
            case 0x1B61B0u: goto label_1b61b0;
            case 0x1B61B4u: goto label_1b61b4;
            case 0x1B61B8u: goto label_1b61b8;
            case 0x1B61BCu: goto label_1b61bc;
            case 0x1B61C0u: goto label_1b61c0;
            case 0x1B61C4u: goto label_1b61c4;
            case 0x1B61C8u: goto label_1b61c8;
            case 0x1B61CCu: goto label_1b61cc;
            case 0x1B61D0u: goto label_1b61d0;
            case 0x1B61D4u: goto label_1b61d4;
            case 0x1B61D8u: goto label_1b61d8;
            case 0x1B61DCu: goto label_1b61dc;
            case 0x1B61E0u: goto label_1b61e0;
            case 0x1B61E4u: goto label_1b61e4;
            case 0x1B61E8u: goto label_1b61e8;
            case 0x1B61ECu: goto label_1b61ec;
            case 0x1B61F0u: goto label_1b61f0;
            case 0x1B61F4u: goto label_1b61f4;
            case 0x1B61F8u: goto label_1b61f8;
            case 0x1B61FCu: goto label_1b61fc;
            case 0x1B6200u: goto label_1b6200;
            case 0x1B6204u: goto label_1b6204;
            case 0x1B6208u: goto label_1b6208;
            case 0x1B620Cu: goto label_1b620c;
            case 0x1B6210u: goto label_1b6210;
            case 0x1B6214u: goto label_1b6214;
            case 0x1B6218u: goto label_1b6218;
            case 0x1B621Cu: goto label_1b621c;
            case 0x1B6220u: goto label_1b6220;
            case 0x1B6224u: goto label_1b6224;
            case 0x1B6228u: goto label_1b6228;
            case 0x1B622Cu: goto label_1b622c;
            case 0x1B6230u: goto label_1b6230;
            case 0x1B6234u: goto label_1b6234;
            case 0x1B6238u: goto label_1b6238;
            case 0x1B623Cu: goto label_1b623c;
            case 0x1B6240u: goto label_1b6240;
            case 0x1B6244u: goto label_1b6244;
            case 0x1B6248u: goto label_1b6248;
            case 0x1B624Cu: goto label_1b624c;
            case 0x1B6250u: goto label_1b6250;
            case 0x1B6254u: goto label_1b6254;
            case 0x1B6258u: goto label_1b6258;
            case 0x1B625Cu: goto label_1b625c;
            case 0x1B6260u: goto label_1b6260;
            case 0x1B6264u: goto label_1b6264;
            case 0x1B6268u: goto label_1b6268;
            case 0x1B626Cu: goto label_1b626c;
            case 0x1B6270u: goto label_1b6270;
            case 0x1B6274u: goto label_1b6274;
            case 0x1B6278u: goto label_1b6278;
            case 0x1B627Cu: goto label_1b627c;
            case 0x1B6280u: goto label_1b6280;
            case 0x1B6284u: goto label_1b6284;
            case 0x1B6288u: goto label_1b6288;
            case 0x1B628Cu: goto label_1b628c;
            case 0x1B6290u: goto label_1b6290;
            case 0x1B6294u: goto label_1b6294;
            case 0x1B6298u: goto label_1b6298;
            case 0x1B629Cu: goto label_1b629c;
            case 0x1B62A0u: goto label_1b62a0;
            case 0x1B62A4u: goto label_1b62a4;
            case 0x1B62A8u: goto label_1b62a8;
            case 0x1B62ACu: goto label_1b62ac;
            case 0x1B62B0u: goto label_1b62b0;
            case 0x1B62B4u: goto label_1b62b4;
            case 0x1B62B8u: goto label_1b62b8;
            case 0x1B62BCu: goto label_1b62bc;
            case 0x1B62C0u: goto label_1b62c0;
            case 0x1B62C4u: goto label_1b62c4;
            case 0x1B62C8u: goto label_1b62c8;
            case 0x1B62CCu: goto label_1b62cc;
            case 0x1B62D0u: goto label_1b62d0;
            case 0x1B62D4u: goto label_1b62d4;
            case 0x1B62D8u: goto label_1b62d8;
            case 0x1B62DCu: goto label_1b62dc;
            case 0x1B62E0u: goto label_1b62e0;
            case 0x1B62E4u: goto label_1b62e4;
            case 0x1B62E8u: goto label_1b62e8;
            case 0x1B62ECu: goto label_1b62ec;
            case 0x1B62F0u: goto label_1b62f0;
            case 0x1B62F4u: goto label_1b62f4;
            case 0x1B62F8u: goto label_1b62f8;
            case 0x1B62FCu: goto label_1b62fc;
            case 0x1B6300u: goto label_1b6300;
            case 0x1B6304u: goto label_1b6304;
            case 0x1B6308u: goto label_1b6308;
            case 0x1B630Cu: goto label_1b630c;
            case 0x1B6310u: goto label_1b6310;
            case 0x1B6314u: goto label_1b6314;
            case 0x1B6318u: goto label_1b6318;
            case 0x1B631Cu: goto label_1b631c;
            case 0x1B6320u: goto label_1b6320;
            case 0x1B6324u: goto label_1b6324;
            case 0x1B6328u: goto label_1b6328;
            case 0x1B632Cu: goto label_1b632c;
            case 0x1B6330u: goto label_1b6330;
            case 0x1B6334u: goto label_1b6334;
            case 0x1B6338u: goto label_1b6338;
            case 0x1B633Cu: goto label_1b633c;
            case 0x1B6340u: goto label_1b6340;
            case 0x1B6344u: goto label_1b6344;
            case 0x1B6348u: goto label_1b6348;
            case 0x1B634Cu: goto label_1b634c;
            case 0x1B6350u: goto label_1b6350;
            case 0x1B6354u: goto label_1b6354;
            case 0x1B6358u: goto label_1b6358;
            case 0x1B635Cu: goto label_1b635c;
            case 0x1B6360u: goto label_1b6360;
            case 0x1B6364u: goto label_1b6364;
            case 0x1B6368u: goto label_1b6368;
            case 0x1B636Cu: goto label_1b636c;
            case 0x1B6370u: goto label_1b6370;
            case 0x1B6374u: goto label_1b6374;
            case 0x1B6378u: goto label_1b6378;
            case 0x1B637Cu: goto label_1b637c;
            case 0x1B6380u: goto label_1b6380;
            case 0x1B6384u: goto label_1b6384;
            case 0x1B6388u: goto label_1b6388;
            case 0x1B638Cu: goto label_1b638c;
            case 0x1B6390u: goto label_1b6390;
            case 0x1B6394u: goto label_1b6394;
            case 0x1B6398u: goto label_1b6398;
            case 0x1B639Cu: goto label_1b639c;
            case 0x1B63A0u: goto label_1b63a0;
            case 0x1B63A4u: goto label_1b63a4;
            case 0x1B63A8u: goto label_1b63a8;
            case 0x1B63ACu: goto label_1b63ac;
            case 0x1B63B0u: goto label_1b63b0;
            case 0x1B63B4u: goto label_1b63b4;
            case 0x1B63B8u: goto label_1b63b8;
            case 0x1B63BCu: goto label_1b63bc;
            case 0x1B63C0u: goto label_1b63c0;
            case 0x1B63C4u: goto label_1b63c4;
            case 0x1B63C8u: goto label_1b63c8;
            case 0x1B63CCu: goto label_1b63cc;
            case 0x1B63D0u: goto label_1b63d0;
            case 0x1B63D4u: goto label_1b63d4;
            case 0x1B63D8u: goto label_1b63d8;
            case 0x1B63DCu: goto label_1b63dc;
            case 0x1B63E0u: goto label_1b63e0;
            case 0x1B63E4u: goto label_1b63e4;
            case 0x1B63E8u: goto label_1b63e8;
            case 0x1B63ECu: goto label_1b63ec;
            case 0x1B63F0u: goto label_1b63f0;
            case 0x1B63F4u: goto label_1b63f4;
            case 0x1B63F8u: goto label_1b63f8;
            case 0x1B63FCu: goto label_1b63fc;
            case 0x1B6400u: goto label_1b6400;
            case 0x1B6404u: goto label_1b6404;
            case 0x1B6408u: goto label_1b6408;
            case 0x1B640Cu: goto label_1b640c;
            case 0x1B6410u: goto label_1b6410;
            case 0x1B6414u: goto label_1b6414;
            case 0x1B6418u: goto label_1b6418;
            case 0x1B641Cu: goto label_1b641c;
            case 0x1B6420u: goto label_1b6420;
            case 0x1B6424u: goto label_1b6424;
            case 0x1B6428u: goto label_1b6428;
            case 0x1B642Cu: goto label_1b642c;
            case 0x1B6430u: goto label_1b6430;
            case 0x1B6434u: goto label_1b6434;
            case 0x1B6438u: goto label_1b6438;
            case 0x1B643Cu: goto label_1b643c;
            case 0x1B6440u: goto label_1b6440;
            case 0x1B6444u: goto label_1b6444;
            case 0x1B6448u: goto label_1b6448;
            case 0x1B644Cu: goto label_1b644c;
            case 0x1B6450u: goto label_1b6450;
            case 0x1B6454u: goto label_1b6454;
            case 0x1B6458u: goto label_1b6458;
            case 0x1B645Cu: goto label_1b645c;
            case 0x1B6460u: goto label_1b6460;
            case 0x1B6464u: goto label_1b6464;
            case 0x1B6468u: goto label_1b6468;
            case 0x1B646Cu: goto label_1b646c;
            case 0x1B6470u: goto label_1b6470;
            case 0x1B6474u: goto label_1b6474;
            case 0x1B6478u: goto label_1b6478;
            case 0x1B647Cu: goto label_1b647c;
            case 0x1B6480u: goto label_1b6480;
            case 0x1B6484u: goto label_1b6484;
            case 0x1B6488u: goto label_1b6488;
            case 0x1B648Cu: goto label_1b648c;
            case 0x1B6490u: goto label_1b6490;
            case 0x1B6494u: goto label_1b6494;
            case 0x1B6498u: goto label_1b6498;
            case 0x1B649Cu: goto label_1b649c;
            case 0x1B64A0u: goto label_1b64a0;
            case 0x1B64A4u: goto label_1b64a4;
            case 0x1B64A8u: goto label_1b64a8;
            case 0x1B64ACu: goto label_1b64ac;
            case 0x1B64B0u: goto label_1b64b0;
            case 0x1B64B4u: goto label_1b64b4;
            case 0x1B64B8u: goto label_1b64b8;
            case 0x1B64BCu: goto label_1b64bc;
            case 0x1B64C0u: goto label_1b64c0;
            case 0x1B64C4u: goto label_1b64c4;
            case 0x1B64C8u: goto label_1b64c8;
            case 0x1B64CCu: goto label_1b64cc;
            case 0x1B64D0u: goto label_1b64d0;
            case 0x1B64D4u: goto label_1b64d4;
            case 0x1B64D8u: goto label_1b64d8;
            case 0x1B64DCu: goto label_1b64dc;
            case 0x1B64E0u: goto label_1b64e0;
            case 0x1B64E4u: goto label_1b64e4;
            case 0x1B64E8u: goto label_1b64e8;
            case 0x1B64ECu: goto label_1b64ec;
            case 0x1B64F0u: goto label_1b64f0;
            case 0x1B64F4u: goto label_1b64f4;
            case 0x1B64F8u: goto label_1b64f8;
            case 0x1B64FCu: goto label_1b64fc;
            case 0x1B6500u: goto label_1b6500;
            case 0x1B6504u: goto label_1b6504;
            case 0x1B6508u: goto label_1b6508;
            case 0x1B650Cu: goto label_1b650c;
            case 0x1B6510u: goto label_1b6510;
            case 0x1B6514u: goto label_1b6514;
            case 0x1B6518u: goto label_1b6518;
            case 0x1B651Cu: goto label_1b651c;
            case 0x1B6520u: goto label_1b6520;
            case 0x1B6524u: goto label_1b6524;
            case 0x1B6528u: goto label_1b6528;
            case 0x1B652Cu: goto label_1b652c;
            case 0x1B6530u: goto label_1b6530;
            case 0x1B6534u: goto label_1b6534;
            case 0x1B6538u: goto label_1b6538;
            case 0x1B653Cu: goto label_1b653c;
            case 0x1B6540u: goto label_1b6540;
            case 0x1B6544u: goto label_1b6544;
            case 0x1B6548u: goto label_1b6548;
            case 0x1B654Cu: goto label_1b654c;
            case 0x1B6550u: goto label_1b6550;
            case 0x1B6554u: goto label_1b6554;
            case 0x1B6558u: goto label_1b6558;
            case 0x1B655Cu: goto label_1b655c;
            case 0x1B6560u: goto label_1b6560;
            case 0x1B6564u: goto label_1b6564;
            case 0x1B6568u: goto label_1b6568;
            case 0x1B656Cu: goto label_1b656c;
            case 0x1B6570u: goto label_1b6570;
            case 0x1B6574u: goto label_1b6574;
            case 0x1B6578u: goto label_1b6578;
            case 0x1B657Cu: goto label_1b657c;
            case 0x1B6580u: goto label_1b6580;
            case 0x1B6584u: goto label_1b6584;
            case 0x1B6588u: goto label_1b6588;
            case 0x1B658Cu: goto label_1b658c;
            case 0x1B6590u: goto label_1b6590;
            case 0x1B6594u: goto label_1b6594;
            case 0x1B6598u: goto label_1b6598;
            case 0x1B659Cu: goto label_1b659c;
            case 0x1B65A0u: goto label_1b65a0;
            case 0x1B65A4u: goto label_1b65a4;
            case 0x1B65A8u: goto label_1b65a8;
            case 0x1B65ACu: goto label_1b65ac;
            case 0x1B65B0u: goto label_1b65b0;
            case 0x1B65B4u: goto label_1b65b4;
            case 0x1B65B8u: goto label_1b65b8;
            case 0x1B65BCu: goto label_1b65bc;
            case 0x1B65C0u: goto label_1b65c0;
            case 0x1B65C4u: goto label_1b65c4;
            case 0x1B65C8u: goto label_1b65c8;
            case 0x1B65CCu: goto label_1b65cc;
            case 0x1B65D0u: goto label_1b65d0;
            case 0x1B65D4u: goto label_1b65d4;
            case 0x1B65D8u: goto label_1b65d8;
            case 0x1B65DCu: goto label_1b65dc;
            case 0x1B65E0u: goto label_1b65e0;
            case 0x1B65E4u: goto label_1b65e4;
            case 0x1B65E8u: goto label_1b65e8;
            case 0x1B65ECu: goto label_1b65ec;
            case 0x1B65F0u: goto label_1b65f0;
            case 0x1B65F4u: goto label_1b65f4;
            case 0x1B65F8u: goto label_1b65f8;
            case 0x1B65FCu: goto label_1b65fc;
            case 0x1B6600u: goto label_1b6600;
            case 0x1B6604u: goto label_1b6604;
            case 0x1B6608u: goto label_1b6608;
            case 0x1B660Cu: goto label_1b660c;
            case 0x1B6610u: goto label_1b6610;
            case 0x1B6614u: goto label_1b6614;
            case 0x1B6618u: goto label_1b6618;
            case 0x1B661Cu: goto label_1b661c;
            case 0x1B6620u: goto label_1b6620;
            case 0x1B6624u: goto label_1b6624;
            case 0x1B6628u: goto label_1b6628;
            case 0x1B662Cu: goto label_1b662c;
            case 0x1B6630u: goto label_1b6630;
            case 0x1B6634u: goto label_1b6634;
            case 0x1B6638u: goto label_1b6638;
            case 0x1B663Cu: goto label_1b663c;
            case 0x1B6640u: goto label_1b6640;
            case 0x1B6644u: goto label_1b6644;
            case 0x1B6648u: goto label_1b6648;
            case 0x1B664Cu: goto label_1b664c;
            case 0x1B6650u: goto label_1b6650;
            case 0x1B6654u: goto label_1b6654;
            case 0x1B6658u: goto label_1b6658;
            case 0x1B665Cu: goto label_1b665c;
            case 0x1B6660u: goto label_1b6660;
            case 0x1B6664u: goto label_1b6664;
            case 0x1B6668u: goto label_1b6668;
            case 0x1B666Cu: goto label_1b666c;
            case 0x1B6670u: goto label_1b6670;
            case 0x1B6674u: goto label_1b6674;
            case 0x1B6678u: goto label_1b6678;
            case 0x1B667Cu: goto label_1b667c;
            case 0x1B6680u: goto label_1b6680;
            case 0x1B6684u: goto label_1b6684;
            case 0x1B6688u: goto label_1b6688;
            case 0x1B668Cu: goto label_1b668c;
            case 0x1B6690u: goto label_1b6690;
            case 0x1B6694u: goto label_1b6694;
            case 0x1B6698u: goto label_1b6698;
            case 0x1B669Cu: goto label_1b669c;
            case 0x1B66A0u: goto label_1b66a0;
            case 0x1B66A4u: goto label_1b66a4;
            case 0x1B66A8u: goto label_1b66a8;
            case 0x1B66ACu: goto label_1b66ac;
            case 0x1B66B0u: goto label_1b66b0;
            case 0x1B66B4u: goto label_1b66b4;
            case 0x1B66B8u: goto label_1b66b8;
            case 0x1B66BCu: goto label_1b66bc;
            case 0x1B66C0u: goto label_1b66c0;
            case 0x1B66C4u: goto label_1b66c4;
            case 0x1B66C8u: goto label_1b66c8;
            case 0x1B66CCu: goto label_1b66cc;
            case 0x1B66D0u: goto label_1b66d0;
            case 0x1B66D4u: goto label_1b66d4;
            case 0x1B66D8u: goto label_1b66d8;
            case 0x1B66DCu: goto label_1b66dc;
            case 0x1B66E0u: goto label_1b66e0;
            case 0x1B66E4u: goto label_1b66e4;
            case 0x1B66E8u: goto label_1b66e8;
            case 0x1B66ECu: goto label_1b66ec;
            case 0x1B66F0u: goto label_1b66f0;
            case 0x1B66F4u: goto label_1b66f4;
            case 0x1B66F8u: goto label_1b66f8;
            case 0x1B66FCu: goto label_1b66fc;
            case 0x1B6700u: goto label_1b6700;
            case 0x1B6704u: goto label_1b6704;
            case 0x1B6708u: goto label_1b6708;
            case 0x1B670Cu: goto label_1b670c;
            case 0x1B6710u: goto label_1b6710;
            case 0x1B6714u: goto label_1b6714;
            case 0x1B6718u: goto label_1b6718;
            case 0x1B671Cu: goto label_1b671c;
            case 0x1B6720u: goto label_1b6720;
            case 0x1B6724u: goto label_1b6724;
            case 0x1B6728u: goto label_1b6728;
            case 0x1B672Cu: goto label_1b672c;
            case 0x1B6730u: goto label_1b6730;
            case 0x1B6734u: goto label_1b6734;
            case 0x1B6738u: goto label_1b6738;
            case 0x1B673Cu: goto label_1b673c;
            case 0x1B6740u: goto label_1b6740;
            case 0x1B6744u: goto label_1b6744;
            case 0x1B6748u: goto label_1b6748;
            case 0x1B674Cu: goto label_1b674c;
            case 0x1B6750u: goto label_1b6750;
            case 0x1B6754u: goto label_1b6754;
            case 0x1B6758u: goto label_1b6758;
            case 0x1B675Cu: goto label_1b675c;
            case 0x1B6760u: goto label_1b6760;
            case 0x1B6764u: goto label_1b6764;
            case 0x1B6768u: goto label_1b6768;
            case 0x1B676Cu: goto label_1b676c;
            case 0x1B6770u: goto label_1b6770;
            case 0x1B6774u: goto label_1b6774;
            case 0x1B6778u: goto label_1b6778;
            case 0x1B677Cu: goto label_1b677c;
            case 0x1B6780u: goto label_1b6780;
            case 0x1B6784u: goto label_1b6784;
            case 0x1B6788u: goto label_1b6788;
            case 0x1B678Cu: goto label_1b678c;
            case 0x1B6790u: goto label_1b6790;
            case 0x1B6794u: goto label_1b6794;
            case 0x1B6798u: goto label_1b6798;
            case 0x1B679Cu: goto label_1b679c;
            case 0x1B67A0u: goto label_1b67a0;
            case 0x1B67A4u: goto label_1b67a4;
            case 0x1B67A8u: goto label_1b67a8;
            case 0x1B67ACu: goto label_1b67ac;
            case 0x1B67B0u: goto label_1b67b0;
            case 0x1B67B4u: goto label_1b67b4;
            case 0x1B67B8u: goto label_1b67b8;
            case 0x1B67BCu: goto label_1b67bc;
            case 0x1B67C0u: goto label_1b67c0;
            case 0x1B67C4u: goto label_1b67c4;
            case 0x1B67C8u: goto label_1b67c8;
            case 0x1B67CCu: goto label_1b67cc;
            case 0x1B67D0u: goto label_1b67d0;
            case 0x1B67D4u: goto label_1b67d4;
            case 0x1B67D8u: goto label_1b67d8;
            case 0x1B67DCu: goto label_1b67dc;
            case 0x1B67E0u: goto label_1b67e0;
            case 0x1B67E4u: goto label_1b67e4;
            case 0x1B67E8u: goto label_1b67e8;
            case 0x1B67ECu: goto label_1b67ec;
            case 0x1B67F0u: goto label_1b67f0;
            case 0x1B67F4u: goto label_1b67f4;
            case 0x1B67F8u: goto label_1b67f8;
            case 0x1B67FCu: goto label_1b67fc;
            case 0x1B6800u: goto label_1b6800;
            case 0x1B6804u: goto label_1b6804;
            case 0x1B6808u: goto label_1b6808;
            case 0x1B680Cu: goto label_1b680c;
            case 0x1B6810u: goto label_1b6810;
            case 0x1B6814u: goto label_1b6814;
            case 0x1B6818u: goto label_1b6818;
            case 0x1B681Cu: goto label_1b681c;
            case 0x1B6820u: goto label_1b6820;
            case 0x1B6824u: goto label_1b6824;
            case 0x1B6828u: goto label_1b6828;
            case 0x1B682Cu: goto label_1b682c;
            case 0x1B6830u: goto label_1b6830;
            case 0x1B6834u: goto label_1b6834;
            case 0x1B6838u: goto label_1b6838;
            case 0x1B683Cu: goto label_1b683c;
            case 0x1B6840u: goto label_1b6840;
            case 0x1B6844u: goto label_1b6844;
            case 0x1B6848u: goto label_1b6848;
            case 0x1B684Cu: goto label_1b684c;
            case 0x1B6850u: goto label_1b6850;
            case 0x1B6854u: goto label_1b6854;
            case 0x1B6858u: goto label_1b6858;
            case 0x1B685Cu: goto label_1b685c;
            case 0x1B6860u: goto label_1b6860;
            case 0x1B6864u: goto label_1b6864;
            case 0x1B6868u: goto label_1b6868;
            case 0x1B686Cu: goto label_1b686c;
            case 0x1B6870u: goto label_1b6870;
            case 0x1B6874u: goto label_1b6874;
            case 0x1B6878u: goto label_1b6878;
            case 0x1B687Cu: goto label_1b687c;
            case 0x1B6880u: goto label_1b6880;
            case 0x1B6884u: goto label_1b6884;
            case 0x1B6888u: goto label_1b6888;
            case 0x1B688Cu: goto label_1b688c;
            case 0x1B6890u: goto label_1b6890;
            case 0x1B6894u: goto label_1b6894;
            case 0x1B6898u: goto label_1b6898;
            case 0x1B689Cu: goto label_1b689c;
            case 0x1B68A0u: goto label_1b68a0;
            case 0x1B68A4u: goto label_1b68a4;
            case 0x1B68A8u: goto label_1b68a8;
            case 0x1B68ACu: goto label_1b68ac;
            case 0x1B68B0u: goto label_1b68b0;
            case 0x1B68B4u: goto label_1b68b4;
            case 0x1B68B8u: goto label_1b68b8;
            case 0x1B68BCu: goto label_1b68bc;
            case 0x1B68C0u: goto label_1b68c0;
            case 0x1B68C4u: goto label_1b68c4;
            case 0x1B68C8u: goto label_1b68c8;
            case 0x1B68CCu: goto label_1b68cc;
            case 0x1B68D0u: goto label_1b68d0;
            case 0x1B68D4u: goto label_1b68d4;
            case 0x1B68D8u: goto label_1b68d8;
            case 0x1B68DCu: goto label_1b68dc;
            case 0x1B68E0u: goto label_1b68e0;
            case 0x1B68E4u: goto label_1b68e4;
            case 0x1B68E8u: goto label_1b68e8;
            case 0x1B68ECu: goto label_1b68ec;
            case 0x1B68F0u: goto label_1b68f0;
            case 0x1B68F4u: goto label_1b68f4;
            case 0x1B68F8u: goto label_1b68f8;
            case 0x1B68FCu: goto label_1b68fc;
            case 0x1B6900u: goto label_1b6900;
            case 0x1B6904u: goto label_1b6904;
            case 0x1B6908u: goto label_1b6908;
            case 0x1B690Cu: goto label_1b690c;
            case 0x1B6910u: goto label_1b6910;
            case 0x1B6914u: goto label_1b6914;
            case 0x1B6918u: goto label_1b6918;
            case 0x1B691Cu: goto label_1b691c;
            case 0x1B6920u: goto label_1b6920;
            case 0x1B6924u: goto label_1b6924;
            case 0x1B6928u: goto label_1b6928;
            case 0x1B692Cu: goto label_1b692c;
            case 0x1B6930u: goto label_1b6930;
            case 0x1B6934u: goto label_1b6934;
            case 0x1B6938u: goto label_1b6938;
            case 0x1B693Cu: goto label_1b693c;
            case 0x1B6940u: goto label_1b6940;
            case 0x1B6944u: goto label_1b6944;
            case 0x1B6948u: goto label_1b6948;
            case 0x1B694Cu: goto label_1b694c;
            case 0x1B6950u: goto label_1b6950;
            case 0x1B6954u: goto label_1b6954;
            case 0x1B6958u: goto label_1b6958;
            case 0x1B695Cu: goto label_1b695c;
            case 0x1B6960u: goto label_1b6960;
            case 0x1B6964u: goto label_1b6964;
            case 0x1B6968u: goto label_1b6968;
            case 0x1B696Cu: goto label_1b696c;
            case 0x1B6970u: goto label_1b6970;
            case 0x1B6974u: goto label_1b6974;
            case 0x1B6978u: goto label_1b6978;
            case 0x1B697Cu: goto label_1b697c;
            case 0x1B6980u: goto label_1b6980;
            case 0x1B6984u: goto label_1b6984;
            case 0x1B6988u: goto label_1b6988;
            case 0x1B698Cu: goto label_1b698c;
            case 0x1B6990u: goto label_1b6990;
            case 0x1B6994u: goto label_1b6994;
            case 0x1B6998u: goto label_1b6998;
            case 0x1B699Cu: goto label_1b699c;
            case 0x1B69A0u: goto label_1b69a0;
            case 0x1B69A4u: goto label_1b69a4;
            case 0x1B69A8u: goto label_1b69a8;
            case 0x1B69ACu: goto label_1b69ac;
            case 0x1B69B0u: goto label_1b69b0;
            case 0x1B69B4u: goto label_1b69b4;
            case 0x1B69B8u: goto label_1b69b8;
            case 0x1B69BCu: goto label_1b69bc;
            case 0x1B69C0u: goto label_1b69c0;
            case 0x1B69C4u: goto label_1b69c4;
            case 0x1B69C8u: goto label_1b69c8;
            case 0x1B69CCu: goto label_1b69cc;
            case 0x1B69D0u: goto label_1b69d0;
            case 0x1B69D4u: goto label_1b69d4;
            case 0x1B69D8u: goto label_1b69d8;
            case 0x1B69DCu: goto label_1b69dc;
            case 0x1B69E0u: goto label_1b69e0;
            case 0x1B69E4u: goto label_1b69e4;
            case 0x1B69E8u: goto label_1b69e8;
            case 0x1B69ECu: goto label_1b69ec;
            case 0x1B69F0u: goto label_1b69f0;
            case 0x1B69F4u: goto label_1b69f4;
            case 0x1B69F8u: goto label_1b69f8;
            case 0x1B69FCu: goto label_1b69fc;
            case 0x1B6A00u: goto label_1b6a00;
            case 0x1B6A04u: goto label_1b6a04;
            case 0x1B6A08u: goto label_1b6a08;
            case 0x1B6A0Cu: goto label_1b6a0c;
            case 0x1B6A10u: goto label_1b6a10;
            case 0x1B6A14u: goto label_1b6a14;
            case 0x1B6A18u: goto label_1b6a18;
            case 0x1B6A1Cu: goto label_1b6a1c;
            case 0x1B6A20u: goto label_1b6a20;
            case 0x1B6A24u: goto label_1b6a24;
            case 0x1B6A28u: goto label_1b6a28;
            case 0x1B6A2Cu: goto label_1b6a2c;
            case 0x1B6A30u: goto label_1b6a30;
            case 0x1B6A34u: goto label_1b6a34;
            case 0x1B6A38u: goto label_1b6a38;
            case 0x1B6A3Cu: goto label_1b6a3c;
            case 0x1B6A40u: goto label_1b6a40;
            case 0x1B6A44u: goto label_1b6a44;
            case 0x1B6A48u: goto label_1b6a48;
            case 0x1B6A4Cu: goto label_1b6a4c;
            case 0x1B6A50u: goto label_1b6a50;
            case 0x1B6A54u: goto label_1b6a54;
            case 0x1B6A58u: goto label_1b6a58;
            case 0x1B6A5Cu: goto label_1b6a5c;
            case 0x1B6A60u: goto label_1b6a60;
            case 0x1B6A64u: goto label_1b6a64;
            case 0x1B6A68u: goto label_1b6a68;
            case 0x1B6A6Cu: goto label_1b6a6c;
            case 0x1B6A70u: goto label_1b6a70;
            case 0x1B6A74u: goto label_1b6a74;
            case 0x1B6A78u: goto label_1b6a78;
            case 0x1B6A7Cu: goto label_1b6a7c;
            case 0x1B6A80u: goto label_1b6a80;
            case 0x1B6A84u: goto label_1b6a84;
            case 0x1B6A88u: goto label_1b6a88;
            case 0x1B6A8Cu: goto label_1b6a8c;
            case 0x1B6A90u: goto label_1b6a90;
            case 0x1B6A94u: goto label_1b6a94;
            case 0x1B6A98u: goto label_1b6a98;
            case 0x1B6A9Cu: goto label_1b6a9c;
            case 0x1B6AA0u: goto label_1b6aa0;
            case 0x1B6AA4u: goto label_1b6aa4;
            case 0x1B6AA8u: goto label_1b6aa8;
            case 0x1B6AACu: goto label_1b6aac;
            case 0x1B6AB0u: goto label_1b6ab0;
            case 0x1B6AB4u: goto label_1b6ab4;
            case 0x1B6AB8u: goto label_1b6ab8;
            case 0x1B6ABCu: goto label_1b6abc;
            case 0x1B6AC0u: goto label_1b6ac0;
            case 0x1B6AC4u: goto label_1b6ac4;
            case 0x1B6AC8u: goto label_1b6ac8;
            case 0x1B6ACCu: goto label_1b6acc;
            case 0x1B6AD0u: goto label_1b6ad0;
            case 0x1B6AD4u: goto label_1b6ad4;
            case 0x1B6AD8u: goto label_1b6ad8;
            case 0x1B6ADCu: goto label_1b6adc;
            case 0x1B6AE0u: goto label_1b6ae0;
            case 0x1B6AE4u: goto label_1b6ae4;
            case 0x1B6AE8u: goto label_1b6ae8;
            case 0x1B6AECu: goto label_1b6aec;
            case 0x1B6AF0u: goto label_1b6af0;
            case 0x1B6AF4u: goto label_1b6af4;
            case 0x1B6AF8u: goto label_1b6af8;
            case 0x1B6AFCu: goto label_1b6afc;
            case 0x1B6B00u: goto label_1b6b00;
            case 0x1B6B04u: goto label_1b6b04;
            case 0x1B6B08u: goto label_1b6b08;
            case 0x1B6B0Cu: goto label_1b6b0c;
            case 0x1B6B10u: goto label_1b6b10;
            case 0x1B6B14u: goto label_1b6b14;
            case 0x1B6B18u: goto label_1b6b18;
            case 0x1B6B1Cu: goto label_1b6b1c;
            case 0x1B6B20u: goto label_1b6b20;
            case 0x1B6B24u: goto label_1b6b24;
            case 0x1B6B28u: goto label_1b6b28;
            case 0x1B6B2Cu: goto label_1b6b2c;
            case 0x1B6B30u: goto label_1b6b30;
            case 0x1B6B34u: goto label_1b6b34;
            case 0x1B6B38u: goto label_1b6b38;
            case 0x1B6B3Cu: goto label_1b6b3c;
            case 0x1B6B40u: goto label_1b6b40;
            case 0x1B6B44u: goto label_1b6b44;
            case 0x1B6B48u: goto label_1b6b48;
            case 0x1B6B4Cu: goto label_1b6b4c;
            case 0x1B6B50u: goto label_1b6b50;
            case 0x1B6B54u: goto label_1b6b54;
            case 0x1B6B58u: goto label_1b6b58;
            case 0x1B6B5Cu: goto label_1b6b5c;
            case 0x1B6B60u: goto label_1b6b60;
            case 0x1B6B64u: goto label_1b6b64;
            case 0x1B6B68u: goto label_1b6b68;
            case 0x1B6B6Cu: goto label_1b6b6c;
            case 0x1B6B70u: goto label_1b6b70;
            case 0x1B6B74u: goto label_1b6b74;
            case 0x1B6B78u: goto label_1b6b78;
            case 0x1B6B7Cu: goto label_1b6b7c;
            case 0x1B6B80u: goto label_1b6b80;
            case 0x1B6B84u: goto label_1b6b84;
            case 0x1B6B88u: goto label_1b6b88;
            case 0x1B6B8Cu: goto label_1b6b8c;
            case 0x1B6B90u: goto label_1b6b90;
            case 0x1B6B94u: goto label_1b6b94;
            case 0x1B6B98u: goto label_1b6b98;
            case 0x1B6B9Cu: goto label_1b6b9c;
            case 0x1B6BA0u: goto label_1b6ba0;
            case 0x1B6BA4u: goto label_1b6ba4;
            case 0x1B6BA8u: goto label_1b6ba8;
            case 0x1B6BACu: goto label_1b6bac;
            case 0x1B6BB0u: goto label_1b6bb0;
            case 0x1B6BB4u: goto label_1b6bb4;
            case 0x1B6BB8u: goto label_1b6bb8;
            case 0x1B6BBCu: goto label_1b6bbc;
            case 0x1B6BC0u: goto label_1b6bc0;
            case 0x1B6BC4u: goto label_1b6bc4;
            case 0x1B6BC8u: goto label_1b6bc8;
            case 0x1B6BCCu: goto label_1b6bcc;
            case 0x1B6BD0u: goto label_1b6bd0;
            case 0x1B6BD4u: goto label_1b6bd4;
            case 0x1B6BD8u: goto label_1b6bd8;
            case 0x1B6BDCu: goto label_1b6bdc;
            case 0x1B6BE0u: goto label_1b6be0;
            case 0x1B6BE4u: goto label_1b6be4;
            case 0x1B6BE8u: goto label_1b6be8;
            case 0x1B6BECu: goto label_1b6bec;
            case 0x1B6BF0u: goto label_1b6bf0;
            case 0x1B6BF4u: goto label_1b6bf4;
            case 0x1B6BF8u: goto label_1b6bf8;
            case 0x1B6BFCu: goto label_1b6bfc;
            case 0x1B6C00u: goto label_1b6c00;
            case 0x1B6C04u: goto label_1b6c04;
            case 0x1B6C08u: goto label_1b6c08;
            case 0x1B6C0Cu: goto label_1b6c0c;
            case 0x1B6C10u: goto label_1b6c10;
            case 0x1B6C14u: goto label_1b6c14;
            case 0x1B6C18u: goto label_1b6c18;
            case 0x1B6C1Cu: goto label_1b6c1c;
            case 0x1B6C20u: goto label_1b6c20;
            case 0x1B6C24u: goto label_1b6c24;
            case 0x1B6C28u: goto label_1b6c28;
            case 0x1B6C2Cu: goto label_1b6c2c;
            case 0x1B6C30u: goto label_1b6c30;
            case 0x1B6C34u: goto label_1b6c34;
            case 0x1B6C38u: goto label_1b6c38;
            case 0x1B6C3Cu: goto label_1b6c3c;
            case 0x1B6C40u: goto label_1b6c40;
            case 0x1B6C44u: goto label_1b6c44;
            case 0x1B6C48u: goto label_1b6c48;
            case 0x1B6C4Cu: goto label_1b6c4c;
            case 0x1B6C50u: goto label_1b6c50;
            case 0x1B6C54u: goto label_1b6c54;
            case 0x1B6C58u: goto label_1b6c58;
            case 0x1B6C5Cu: goto label_1b6c5c;
            case 0x1B6C60u: goto label_1b6c60;
            case 0x1B6C64u: goto label_1b6c64;
            case 0x1B6C68u: goto label_1b6c68;
            case 0x1B6C6Cu: goto label_1b6c6c;
            case 0x1B6C70u: goto label_1b6c70;
            case 0x1B6C74u: goto label_1b6c74;
            case 0x1B6C78u: goto label_1b6c78;
            case 0x1B6C7Cu: goto label_1b6c7c;
            case 0x1B6C80u: goto label_1b6c80;
            case 0x1B6C84u: goto label_1b6c84;
            case 0x1B6C88u: goto label_1b6c88;
            case 0x1B6C8Cu: goto label_1b6c8c;
            case 0x1B6C90u: goto label_1b6c90;
            case 0x1B6C94u: goto label_1b6c94;
            case 0x1B6C98u: goto label_1b6c98;
            case 0x1B6C9Cu: goto label_1b6c9c;
            case 0x1B6CA0u: goto label_1b6ca0;
            case 0x1B6CA4u: goto label_1b6ca4;
            case 0x1B6CA8u: goto label_1b6ca8;
            case 0x1B6CACu: goto label_1b6cac;
            case 0x1B6CB0u: goto label_1b6cb0;
            case 0x1B6CB4u: goto label_1b6cb4;
            case 0x1B6CB8u: goto label_1b6cb8;
            case 0x1B6CBCu: goto label_1b6cbc;
            case 0x1B6CC0u: goto label_1b6cc0;
            case 0x1B6CC4u: goto label_1b6cc4;
            case 0x1B6CC8u: goto label_1b6cc8;
            case 0x1B6CCCu: goto label_1b6ccc;
            case 0x1B6CD0u: goto label_1b6cd0;
            case 0x1B6CD4u: goto label_1b6cd4;
            case 0x1B6CD8u: goto label_1b6cd8;
            case 0x1B6CDCu: goto label_1b6cdc;
            case 0x1B6CE0u: goto label_1b6ce0;
            case 0x1B6CE4u: goto label_1b6ce4;
            case 0x1B6CE8u: goto label_1b6ce8;
            case 0x1B6CECu: goto label_1b6cec;
            case 0x1B6CF0u: goto label_1b6cf0;
            case 0x1B6CF4u: goto label_1b6cf4;
            case 0x1B6CF8u: goto label_1b6cf8;
            case 0x1B6CFCu: goto label_1b6cfc;
            case 0x1B6D00u: goto label_1b6d00;
            case 0x1B6D04u: goto label_1b6d04;
            case 0x1B6D08u: goto label_1b6d08;
            case 0x1B6D0Cu: goto label_1b6d0c;
            case 0x1B6D10u: goto label_1b6d10;
            case 0x1B6D14u: goto label_1b6d14;
            case 0x1B6D18u: goto label_1b6d18;
            case 0x1B6D1Cu: goto label_1b6d1c;
            case 0x1B6D20u: goto label_1b6d20;
            case 0x1B6D24u: goto label_1b6d24;
            case 0x1B6D28u: goto label_1b6d28;
            case 0x1B6D2Cu: goto label_1b6d2c;
            case 0x1B6D30u: goto label_1b6d30;
            case 0x1B6D34u: goto label_1b6d34;
            case 0x1B6D38u: goto label_1b6d38;
            case 0x1B6D3Cu: goto label_1b6d3c;
            case 0x1B6D40u: goto label_1b6d40;
            case 0x1B6D44u: goto label_1b6d44;
            case 0x1B6D48u: goto label_1b6d48;
            case 0x1B6D4Cu: goto label_1b6d4c;
            case 0x1B6D50u: goto label_1b6d50;
            case 0x1B6D54u: goto label_1b6d54;
            case 0x1B6D58u: goto label_1b6d58;
            case 0x1B6D5Cu: goto label_1b6d5c;
            case 0x1B6D60u: goto label_1b6d60;
            case 0x1B6D64u: goto label_1b6d64;
            case 0x1B6D68u: goto label_1b6d68;
            case 0x1B6D6Cu: goto label_1b6d6c;
            case 0x1B6D70u: goto label_1b6d70;
            case 0x1B6D74u: goto label_1b6d74;
            case 0x1B6D78u: goto label_1b6d78;
            case 0x1B6D7Cu: goto label_1b6d7c;
            case 0x1B6D80u: goto label_1b6d80;
            case 0x1B6D84u: goto label_1b6d84;
            case 0x1B6D88u: goto label_1b6d88;
            case 0x1B6D8Cu: goto label_1b6d8c;
            case 0x1B6D90u: goto label_1b6d90;
            case 0x1B6D94u: goto label_1b6d94;
            case 0x1B6D98u: goto label_1b6d98;
            case 0x1B6D9Cu: goto label_1b6d9c;
            case 0x1B6DA0u: goto label_1b6da0;
            case 0x1B6DA4u: goto label_1b6da4;
            case 0x1B6DA8u: goto label_1b6da8;
            case 0x1B6DACu: goto label_1b6dac;
            case 0x1B6DB0u: goto label_1b6db0;
            case 0x1B6DB4u: goto label_1b6db4;
            case 0x1B6DB8u: goto label_1b6db8;
            case 0x1B6DBCu: goto label_1b6dbc;
            case 0x1B6DC0u: goto label_1b6dc0;
            case 0x1B6DC4u: goto label_1b6dc4;
            case 0x1B6DC8u: goto label_1b6dc8;
            case 0x1B6DCCu: goto label_1b6dcc;
            case 0x1B6DD0u: goto label_1b6dd0;
            case 0x1B6DD4u: goto label_1b6dd4;
            case 0x1B6DD8u: goto label_1b6dd8;
            case 0x1B6DDCu: goto label_1b6ddc;
            case 0x1B6DE0u: goto label_1b6de0;
            case 0x1B6DE4u: goto label_1b6de4;
            case 0x1B6DE8u: goto label_1b6de8;
            case 0x1B6DECu: goto label_1b6dec;
            case 0x1B6DF0u: goto label_1b6df0;
            case 0x1B6DF4u: goto label_1b6df4;
            case 0x1B6DF8u: goto label_1b6df8;
            case 0x1B6DFCu: goto label_1b6dfc;
            case 0x1B6E00u: goto label_1b6e00;
            case 0x1B6E04u: goto label_1b6e04;
            case 0x1B6E08u: goto label_1b6e08;
            case 0x1B6E0Cu: goto label_1b6e0c;
            case 0x1B6E10u: goto label_1b6e10;
            case 0x1B6E14u: goto label_1b6e14;
            case 0x1B6E18u: goto label_1b6e18;
            case 0x1B6E1Cu: goto label_1b6e1c;
            case 0x1B6E20u: goto label_1b6e20;
            case 0x1B6E24u: goto label_1b6e24;
            case 0x1B6E28u: goto label_1b6e28;
            case 0x1B6E2Cu: goto label_1b6e2c;
            case 0x1B6E30u: goto label_1b6e30;
            case 0x1B6E34u: goto label_1b6e34;
            case 0x1B6E38u: goto label_1b6e38;
            case 0x1B6E3Cu: goto label_1b6e3c;
            case 0x1B6E40u: goto label_1b6e40;
            case 0x1B6E44u: goto label_1b6e44;
            case 0x1B6E48u: goto label_1b6e48;
            case 0x1B6E4Cu: goto label_1b6e4c;
            case 0x1B6E50u: goto label_1b6e50;
            case 0x1B6E54u: goto label_1b6e54;
            case 0x1B6E58u: goto label_1b6e58;
            case 0x1B6E5Cu: goto label_1b6e5c;
            case 0x1B6E60u: goto label_1b6e60;
            case 0x1B6E64u: goto label_1b6e64;
            case 0x1B6E68u: goto label_1b6e68;
            case 0x1B6E6Cu: goto label_1b6e6c;
            case 0x1B6E70u: goto label_1b6e70;
            case 0x1B6E74u: goto label_1b6e74;
            case 0x1B6E78u: goto label_1b6e78;
            case 0x1B6E7Cu: goto label_1b6e7c;
            case 0x1B6E80u: goto label_1b6e80;
            case 0x1B6E84u: goto label_1b6e84;
            case 0x1B6E88u: goto label_1b6e88;
            case 0x1B6E8Cu: goto label_1b6e8c;
            case 0x1B6E90u: goto label_1b6e90;
            case 0x1B6E94u: goto label_1b6e94;
            case 0x1B6E98u: goto label_1b6e98;
            case 0x1B6E9Cu: goto label_1b6e9c;
            case 0x1B6EA0u: goto label_1b6ea0;
            case 0x1B6EA4u: goto label_1b6ea4;
            case 0x1B6EA8u: goto label_1b6ea8;
            case 0x1B6EACu: goto label_1b6eac;
            case 0x1B6EB0u: goto label_1b6eb0;
            case 0x1B6EB4u: goto label_1b6eb4;
            case 0x1B6EB8u: goto label_1b6eb8;
            case 0x1B6EBCu: goto label_1b6ebc;
            case 0x1B6EC0u: goto label_1b6ec0;
            case 0x1B6EC4u: goto label_1b6ec4;
            case 0x1B6EC8u: goto label_1b6ec8;
            case 0x1B6ECCu: goto label_1b6ecc;
            case 0x1B6ED0u: goto label_1b6ed0;
            case 0x1B6ED4u: goto label_1b6ed4;
            case 0x1B6ED8u: goto label_1b6ed8;
            case 0x1B6EDCu: goto label_1b6edc;
            case 0x1B6EE0u: goto label_1b6ee0;
            case 0x1B6EE4u: goto label_1b6ee4;
            case 0x1B6EE8u: goto label_1b6ee8;
            case 0x1B6EECu: goto label_1b6eec;
            case 0x1B6EF0u: goto label_1b6ef0;
            case 0x1B6EF4u: goto label_1b6ef4;
            case 0x1B6EF8u: goto label_1b6ef8;
            case 0x1B6EFCu: goto label_1b6efc;
            case 0x1B6F00u: goto label_1b6f00;
            case 0x1B6F04u: goto label_1b6f04;
            case 0x1B6F08u: goto label_1b6f08;
            case 0x1B6F0Cu: goto label_1b6f0c;
            case 0x1B6F10u: goto label_1b6f10;
            case 0x1B6F14u: goto label_1b6f14;
            case 0x1B6F18u: goto label_1b6f18;
            case 0x1B6F1Cu: goto label_1b6f1c;
            case 0x1B6F20u: goto label_1b6f20;
            case 0x1B6F24u: goto label_1b6f24;
            case 0x1B6F28u: goto label_1b6f28;
            case 0x1B6F2Cu: goto label_1b6f2c;
            case 0x1B6F30u: goto label_1b6f30;
            case 0x1B6F34u: goto label_1b6f34;
            case 0x1B6F38u: goto label_1b6f38;
            case 0x1B6F3Cu: goto label_1b6f3c;
            case 0x1B6F40u: goto label_1b6f40;
            case 0x1B6F44u: goto label_1b6f44;
            case 0x1B6F48u: goto label_1b6f48;
            case 0x1B6F4Cu: goto label_1b6f4c;
            case 0x1B6F50u: goto label_1b6f50;
            case 0x1B6F54u: goto label_1b6f54;
            case 0x1B6F58u: goto label_1b6f58;
            case 0x1B6F5Cu: goto label_1b6f5c;
            case 0x1B6F60u: goto label_1b6f60;
            case 0x1B6F64u: goto label_1b6f64;
            case 0x1B6F68u: goto label_1b6f68;
            case 0x1B6F6Cu: goto label_1b6f6c;
            case 0x1B6F70u: goto label_1b6f70;
            case 0x1B6F74u: goto label_1b6f74;
            case 0x1B6F78u: goto label_1b6f78;
            case 0x1B6F7Cu: goto label_1b6f7c;
            case 0x1B6F80u: goto label_1b6f80;
            case 0x1B6F84u: goto label_1b6f84;
            case 0x1B6F88u: goto label_1b6f88;
            case 0x1B6F8Cu: goto label_1b6f8c;
            case 0x1B6F90u: goto label_1b6f90;
            case 0x1B6F94u: goto label_1b6f94;
            case 0x1B6F98u: goto label_1b6f98;
            case 0x1B6F9Cu: goto label_1b6f9c;
            case 0x1B6FA0u: goto label_1b6fa0;
            case 0x1B6FA4u: goto label_1b6fa4;
            case 0x1B6FA8u: goto label_1b6fa8;
            case 0x1B6FACu: goto label_1b6fac;
            case 0x1B6FB0u: goto label_1b6fb0;
            case 0x1B6FB4u: goto label_1b6fb4;
            case 0x1B6FB8u: goto label_1b6fb8;
            case 0x1B6FBCu: goto label_1b6fbc;
            case 0x1B6FC0u: goto label_1b6fc0;
            case 0x1B6FC4u: goto label_1b6fc4;
            case 0x1B6FC8u: goto label_1b6fc8;
            case 0x1B6FCCu: goto label_1b6fcc;
            case 0x1B6FD0u: goto label_1b6fd0;
            case 0x1B6FD4u: goto label_1b6fd4;
            case 0x1B6FD8u: goto label_1b6fd8;
            case 0x1B6FDCu: goto label_1b6fdc;
            case 0x1B6FE0u: goto label_1b6fe0;
            case 0x1B6FE4u: goto label_1b6fe4;
            case 0x1B6FE8u: goto label_1b6fe8;
            case 0x1B6FECu: goto label_1b6fec;
            case 0x1B6FF0u: goto label_1b6ff0;
            case 0x1B6FF4u: goto label_1b6ff4;
            case 0x1B6FF8u: goto label_1b6ff8;
            case 0x1B6FFCu: goto label_1b6ffc;
            case 0x1B7000u: goto label_1b7000;
            case 0x1B7004u: goto label_1b7004;
            case 0x1B7008u: goto label_1b7008;
            case 0x1B700Cu: goto label_1b700c;
            case 0x1B7010u: goto label_1b7010;
            case 0x1B7014u: goto label_1b7014;
            case 0x1B7018u: goto label_1b7018;
            case 0x1B701Cu: goto label_1b701c;
            case 0x1B7020u: goto label_1b7020;
            case 0x1B7024u: goto label_1b7024;
            case 0x1B7028u: goto label_1b7028;
            case 0x1B702Cu: goto label_1b702c;
            case 0x1B7030u: goto label_1b7030;
            case 0x1B7034u: goto label_1b7034;
            case 0x1B7038u: goto label_1b7038;
            case 0x1B703Cu: goto label_1b703c;
            case 0x1B7040u: goto label_1b7040;
            case 0x1B7044u: goto label_1b7044;
            case 0x1B7048u: goto label_1b7048;
            case 0x1B704Cu: goto label_1b704c;
            case 0x1B7050u: goto label_1b7050;
            case 0x1B7054u: goto label_1b7054;
            case 0x1B7058u: goto label_1b7058;
            case 0x1B705Cu: goto label_1b705c;
            case 0x1B7060u: goto label_1b7060;
            case 0x1B7064u: goto label_1b7064;
            case 0x1B7068u: goto label_1b7068;
            case 0x1B706Cu: goto label_1b706c;
            case 0x1B7070u: goto label_1b7070;
            case 0x1B7074u: goto label_1b7074;
            case 0x1B7078u: goto label_1b7078;
            case 0x1B707Cu: goto label_1b707c;
            case 0x1B7080u: goto label_1b7080;
            case 0x1B7084u: goto label_1b7084;
            case 0x1B7088u: goto label_1b7088;
            case 0x1B708Cu: goto label_1b708c;
            case 0x1B7090u: goto label_1b7090;
            case 0x1B7094u: goto label_1b7094;
            case 0x1B7098u: goto label_1b7098;
            case 0x1B709Cu: goto label_1b709c;
            case 0x1B70A0u: goto label_1b70a0;
            case 0x1B70A4u: goto label_1b70a4;
            case 0x1B70A8u: goto label_1b70a8;
            case 0x1B70ACu: goto label_1b70ac;
            case 0x1B70B0u: goto label_1b70b0;
            case 0x1B70B4u: goto label_1b70b4;
            case 0x1B70B8u: goto label_1b70b8;
            case 0x1B70BCu: goto label_1b70bc;
            case 0x1B70C0u: goto label_1b70c0;
            case 0x1B70C4u: goto label_1b70c4;
            case 0x1B70C8u: goto label_1b70c8;
            case 0x1B70CCu: goto label_1b70cc;
            case 0x1B70D0u: goto label_1b70d0;
            case 0x1B70D4u: goto label_1b70d4;
            case 0x1B70D8u: goto label_1b70d8;
            case 0x1B70DCu: goto label_1b70dc;
            case 0x1B70E0u: goto label_1b70e0;
            case 0x1B70E4u: goto label_1b70e4;
            case 0x1B70E8u: goto label_1b70e8;
            case 0x1B70ECu: goto label_1b70ec;
            case 0x1B70F0u: goto label_1b70f0;
            case 0x1B70F4u: goto label_1b70f4;
            case 0x1B70F8u: goto label_1b70f8;
            case 0x1B70FCu: goto label_1b70fc;
            case 0x1B7100u: goto label_1b7100;
            case 0x1B7104u: goto label_1b7104;
            case 0x1B7108u: goto label_1b7108;
            case 0x1B710Cu: goto label_1b710c;
            case 0x1B7110u: goto label_1b7110;
            case 0x1B7114u: goto label_1b7114;
            case 0x1B7118u: goto label_1b7118;
            case 0x1B711Cu: goto label_1b711c;
            case 0x1B7120u: goto label_1b7120;
            case 0x1B7124u: goto label_1b7124;
            case 0x1B7128u: goto label_1b7128;
            default: break;
        }
        return;
    }
label_fallthrough_0x1b7124:
    ctx->pc = 0x1B712Cu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex2_02Move
// Address: 0x1d29a0 - 0x1d3bbc
void Enex2_02Move_0x1d29a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex2_02Move_0x1d29a0");
#endif

    ctx->pc = 0x1d29a0u;

label_1d29a0:
    // 0x1d29a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d29a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d29a4:
    // 0x1d29a4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d29a8:
    // 0x1d29a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d29a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d29ac:
    // 0x1d29ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d29acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d29b0:
    // 0x1d29b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d29b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d29b4:
    // 0x1d29b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d29b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d29b8:
    // 0x1d29b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d29b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d29bc:
    // 0x1d29bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d29bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d29c0:
    // 0x1d29c0: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1d29c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d29c4:
    // 0x1d29c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d29c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d29c8:
    // 0x1d29c8: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1d29c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d29cc:
    // 0x1d29cc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d29ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d29d0:
    // 0x1d29d0: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1d29d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1d29d4:
    // 0x1d29d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d29d8:
    // 0x1d29d8: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1d29d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d29dc:
    // 0x1d29dc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d29dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d29e0:
    // 0x1d29e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d29e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d29e4:
    // 0x1d29e4: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1d29e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1d29e8:
    // 0x1d29e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d29ec:
    // 0x1d29ec: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1d29ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d29f0:
    // 0x1d29f0: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1d29f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d29f4:
    // 0x1d29f4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d29f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d29f8:
    // 0x1d29f8: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1d29f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1d29fc:
    // 0x1d29fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2a00:
    // 0x1d2a00: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1d2a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d2a04:
    // 0x1d2a04: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1d2a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2a08:
    // 0x1d2a08: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d2a08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d2a0c:
    // 0x1d2a0c: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1d2a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1d2a10:
    // 0x1d2a10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2a14:
    // 0x1d2a14: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1d2a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d2a18:
    // 0x1d2a18: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d2a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2a1c:
    // 0x1d2a1c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d2a1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d2a20:
    // 0x1d2a20: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1d2a20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1d2a24:
    // 0x1d2a24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2a28:
    // 0x1d2a28: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1d2a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2a2c:
    // 0x1d2a2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d2a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2a30:
    // 0x1d2a30: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d2a34:
    if (ctx->pc == 0x1D2A34u) {
        ctx->pc = 0x1D2A34u;
            // 0x1d2a34: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1D2A38u;
        goto label_1d2a38;
    }
    ctx->pc = 0x1D2A30u;
    {
        const bool branch_taken_0x1d2a30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A30u;
            // 0x1d2a34: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a30) {
            ctx->pc = 0x1D2A50u;
            goto label_1d2a50;
        }
    }
    ctx->pc = 0x1D2A38u;
label_1d2a38:
    // 0x1d2a38: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d2a3c:
    // 0x1d2a3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2a3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d2a40:
    // 0x1d2a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2a44:
    // 0x1d2a44: 0x0  nop
    ctx->pc = 0x1d2a44u;
    // NOP
label_1d2a48:
    // 0x1d2a48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d2a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d2a4c:
    // 0x1d2a4c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d2a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1d2a50:
    // 0x1d2a50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d2a54:
    // 0x1d2a54: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d2a58:
    // 0x1d2a58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2a58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d2a5c:
    // 0x1d2a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2a60:
    // 0x1d2a60: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1d2a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2a64:
    // 0x1d2a64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d2a64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2a68:
    // 0x1d2a68: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d2a6c:
    if (ctx->pc == 0x1D2A6Cu) {
        ctx->pc = 0x1D2A6Cu;
            // 0x1d2a6c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1D2A70u;
        goto label_1d2a70;
    }
    ctx->pc = 0x1D2A68u;
    {
        const bool branch_taken_0x1d2a68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A68u;
            // 0x1d2a6c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a68) {
            ctx->pc = 0x1D2A88u;
            goto label_1d2a88;
        }
    }
    ctx->pc = 0x1D2A70u;
label_1d2a70:
    // 0x1d2a70: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d2a74:
    // 0x1d2a74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2a74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d2a78:
    // 0x1d2a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2a7c:
    // 0x1d2a7c: 0x0  nop
    ctx->pc = 0x1d2a7cu;
    // NOP
label_1d2a80:
    // 0x1d2a80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d2a80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d2a84:
    // 0x1d2a84: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d2a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d2a88:
    // 0x1d2a88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d2a8c:
    // 0x1d2a8c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d2a90:
    // 0x1d2a90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2a90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d2a94:
    // 0x1d2a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2a98:
    // 0x1d2a98: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1d2a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2a9c:
    // 0x1d2a9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d2a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2aa0:
    // 0x1d2aa0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d2aa4:
    if (ctx->pc == 0x1D2AA4u) {
        ctx->pc = 0x1D2AA4u;
            // 0x1d2aa4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1D2AA8u;
        goto label_1d2aa8;
    }
    ctx->pc = 0x1D2AA0u;
    {
        const bool branch_taken_0x1d2aa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AA0u;
            // 0x1d2aa4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2aa0) {
            ctx->pc = 0x1D2AC0u;
            goto label_1d2ac0;
        }
    }
    ctx->pc = 0x1D2AA8u;
label_1d2aa8:
    // 0x1d2aa8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d2aac:
    // 0x1d2aac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2aacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d2ab0:
    // 0x1d2ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2ab4:
    // 0x1d2ab4: 0x0  nop
    ctx->pc = 0x1d2ab4u;
    // NOP
label_1d2ab8:
    // 0x1d2ab8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d2ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d2abc:
    // 0x1d2abc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d2abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d2ac0:
    // 0x1d2ac0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d2ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d2ac4:
    // 0x1d2ac4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d2ac8:
    // 0x1d2ac8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2ac8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d2acc:
    // 0x1d2acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2ad0:
    // 0x1d2ad0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1d2ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2ad4:
    // 0x1d2ad4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d2ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2ad8:
    // 0x1d2ad8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d2adc:
    if (ctx->pc == 0x1D2ADCu) {
        ctx->pc = 0x1D2ADCu;
            // 0x1d2adc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1D2AE0u;
        goto label_1d2ae0;
    }
    ctx->pc = 0x1D2AD8u;
    {
        const bool branch_taken_0x1d2ad8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AD8u;
            // 0x1d2adc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ad8) {
            ctx->pc = 0x1D2AF8u;
            goto label_1d2af8;
        }
    }
    ctx->pc = 0x1D2AE0u;
label_1d2ae0:
    // 0x1d2ae0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d2ae4:
    // 0x1d2ae4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2ae4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d2ae8:
    // 0x1d2ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2aec:
    // 0x1d2aec: 0x0  nop
    ctx->pc = 0x1d2aecu;
    // NOP
label_1d2af0:
    // 0x1d2af0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d2af0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d2af4:
    // 0x1d2af4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d2af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d2af8:
    // 0x1d2af8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d2af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d2afc:
    // 0x1d2afc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d2b00:
    // 0x1d2b00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2b00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d2b04:
    // 0x1d2b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2b08:
    // 0x1d2b08: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1d2b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2b0c:
    // 0x1d2b0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d2b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2b10:
    // 0x1d2b10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d2b14:
    if (ctx->pc == 0x1D2B14u) {
        ctx->pc = 0x1D2B14u;
            // 0x1d2b14: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1D2B18u;
        goto label_1d2b18;
    }
    ctx->pc = 0x1D2B10u;
    {
        const bool branch_taken_0x1d2b10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B10u;
            // 0x1d2b14: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b10) {
            ctx->pc = 0x1D2B30u;
            goto label_1d2b30;
        }
    }
    ctx->pc = 0x1D2B18u;
label_1d2b18:
    // 0x1d2b18: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d2b1c:
    // 0x1d2b1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2b1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d2b20:
    // 0x1d2b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2b24:
    // 0x1d2b24: 0x0  nop
    ctx->pc = 0x1d2b24u;
    // NOP
label_1d2b28:
    // 0x1d2b28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d2b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d2b2c:
    // 0x1d2b2c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d2b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d2b30:
    // 0x1d2b30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d2b34:
    // 0x1d2b34: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d2b38:
    // 0x1d2b38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2b38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d2b3c:
    // 0x1d2b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2b40:
    // 0x1d2b40: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1d2b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2b44:
    // 0x1d2b44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d2b44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2b48:
    // 0x1d2b48: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d2b4c:
    if (ctx->pc == 0x1D2B4Cu) {
        ctx->pc = 0x1D2B4Cu;
            // 0x1d2b4c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1D2B50u;
        goto label_1d2b50;
    }
    ctx->pc = 0x1D2B48u;
    {
        const bool branch_taken_0x1d2b48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B48u;
            // 0x1d2b4c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b48) {
            ctx->pc = 0x1D2B68u;
            goto label_1d2b68;
        }
    }
    ctx->pc = 0x1D2B50u;
label_1d2b50:
    // 0x1d2b50: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d2b54:
    // 0x1d2b54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2b54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d2b58:
    // 0x1d2b58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2b5c:
    // 0x1d2b5c: 0x0  nop
    ctx->pc = 0x1d2b5cu;
    // NOP
label_1d2b60:
    // 0x1d2b60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d2b60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d2b64:
    // 0x1d2b64: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d2b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d2b68:
    // 0x1d2b68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d2b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d2b6c:
    // 0x1d2b6c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1d2b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1d2b70:
    // 0x1d2b70: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d2b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d2b74:
    // 0x1d2b74: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d2b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d2b78:
    // 0x1d2b78: 0xc074ef0  jal         func_1D3BC0
label_1d2b7c:
    if (ctx->pc == 0x1D2B7Cu) {
        ctx->pc = 0x1D2B7Cu;
            // 0x1d2b7c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x1D2B80u;
        goto label_1d2b80;
    }
    ctx->pc = 0x1D2B78u;
    SET_GPR_U32(ctx, 31, 0x1D2B80u);
    ctx->pc = 0x1D2B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B78u;
            // 0x1d2b7c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC0u;
    if (runtime->hasFunction(0x1D3BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B80u; }
        if (ctx->pc != 0x1D2B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1d3bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B80u; }
        if (ctx->pc != 0x1D2B80u) { return; }
    }
    ctx->pc = 0x1D2B80u;
label_1d2b80:
    // 0x1d2b80: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d2b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2b84:
    // 0x1d2b84: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1d2b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1d2b88:
    // 0x1d2b88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2b8c:
    // 0x1d2b8c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1d2b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1d2b90:
    // 0x1d2b90: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d2b94:
    // 0x1d2b94: 0x18400198  blez        $v0, . + 4 + (0x198 << 2)
label_1d2b98:
    if (ctx->pc == 0x1D2B98u) {
        ctx->pc = 0x1D2B9Cu;
        goto label_1d2b9c;
    }
    ctx->pc = 0x1D2B94u;
    {
        const bool branch_taken_0x1d2b94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d2b94) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D2B9Cu;
label_1d2b9c:
    // 0x1d2b9c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d2b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d2ba0:
    // 0x1d2ba0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_1d2ba4:
    if (ctx->pc == 0x1D2BA4u) {
        ctx->pc = 0x1D2BA8u;
        goto label_1d2ba8;
    }
    ctx->pc = 0x1D2BA0u;
    {
        const bool branch_taken_0x1d2ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ba0) {
            ctx->pc = 0x1D2C18u;
            goto label_1d2c18;
        }
    }
    ctx->pc = 0x1D2BA8u;
label_1d2ba8:
    // 0x1d2ba8: 0xc050bb4  jal         func_142ED0
label_1d2bac:
    if (ctx->pc == 0x1D2BACu) {
        ctx->pc = 0x1D2BB0u;
        goto label_1d2bb0;
    }
    ctx->pc = 0x1D2BA8u;
    SET_GPR_U32(ctx, 31, 0x1D2BB0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2BB0u; }
        if (ctx->pc != 0x1D2BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2BB0u; }
        if (ctx->pc != 0x1D2BB0u) { return; }
    }
    ctx->pc = 0x1D2BB0u;
label_1d2bb0:
    // 0x1d2bb0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1d2bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1d2bb4:
    // 0x1d2bb4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d2bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d2bb8:
    // 0x1d2bb8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d2bb8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2bbc:
    // 0x1d2bbc: 0x0  nop
    ctx->pc = 0x1d2bbcu;
    // NOP
label_1d2bc0:
    // 0x1d2bc0: 0x0  nop
    ctx->pc = 0x1d2bc0u;
    // NOP
label_1d2bc4:
    // 0x1d2bc4: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2bc4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2bc8:
    // 0x1d2bc8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1d2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d2bcc:
    // 0x1d2bcc: 0xc050bb4  jal         func_142ED0
label_1d2bd0:
    if (ctx->pc == 0x1D2BD0u) {
        ctx->pc = 0x1D2BD0u;
            // 0x1d2bd0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1D2BD4u;
        goto label_1d2bd4;
    }
    ctx->pc = 0x1D2BCCu;
    SET_GPR_U32(ctx, 31, 0x1D2BD4u);
    ctx->pc = 0x1D2BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2BCCu;
            // 0x1d2bd0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2BD4u; }
        if (ctx->pc != 0x1D2BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2BD4u; }
        if (ctx->pc != 0x1D2BD4u) { return; }
    }
    ctx->pc = 0x1D2BD4u;
label_1d2bd4:
    // 0x1d2bd4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1d2bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1d2bd8:
    // 0x1d2bd8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d2bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d2bdc:
    // 0x1d2bdc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d2bdcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2be0:
    // 0x1d2be0: 0x0  nop
    ctx->pc = 0x1d2be0u;
    // NOP
label_1d2be4:
    // 0x1d2be4: 0x0  nop
    ctx->pc = 0x1d2be4u;
    // NOP
label_1d2be8:
    // 0x1d2be8: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2be8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2bec:
    // 0x1d2bec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1d2becu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d2bf0:
    // 0x1d2bf0: 0xc050bb4  jal         func_142ED0
label_1d2bf4:
    if (ctx->pc == 0x1D2BF4u) {
        ctx->pc = 0x1D2BF4u;
            // 0x1d2bf4: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x1D2BF8u;
        goto label_1d2bf8;
    }
    ctx->pc = 0x1D2BF0u;
    SET_GPR_U32(ctx, 31, 0x1D2BF8u);
    ctx->pc = 0x1D2BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2BF0u;
            // 0x1d2bf4: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2BF8u; }
        if (ctx->pc != 0x1D2BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2BF8u; }
        if (ctx->pc != 0x1D2BF8u) { return; }
    }
    ctx->pc = 0x1D2BF8u;
label_1d2bf8:
    // 0x1d2bf8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1d2bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1d2bfc:
    // 0x1d2bfc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d2bfcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2c00:
    // 0x1d2c00: 0x0  nop
    ctx->pc = 0x1d2c00u;
    // NOP
label_1d2c04:
    // 0x1d2c04: 0x0  nop
    ctx->pc = 0x1d2c04u;
    // NOP
label_1d2c08:
    // 0x1d2c08: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2c08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2c0c:
    // 0x1d2c0c: 0x1000017a  b           . + 4 + (0x17A << 2)
label_1d2c10:
    if (ctx->pc == 0x1D2C10u) {
        ctx->pc = 0x1D2C10u;
            // 0x1d2c10: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->pc = 0x1D2C14u;
        goto label_1d2c14;
    }
    ctx->pc = 0x1D2C0Cu;
    {
        const bool branch_taken_0x1d2c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C0Cu;
            // 0x1d2c10: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c0c) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D2C14u;
label_1d2c14:
    // 0x1d2c14: 0x0  nop
    ctx->pc = 0x1d2c14u;
    // NOP
label_1d2c18:
    // 0x1d2c18: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x1d2c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
label_1d2c1c:
    // 0x1d2c1c: 0x14400176  bnez        $v0, . + 4 + (0x176 << 2)
label_1d2c20:
    if (ctx->pc == 0x1D2C20u) {
        ctx->pc = 0x1D2C20u;
            // 0x1d2c20: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->pc = 0x1D2C24u;
        goto label_1d2c24;
    }
    ctx->pc = 0x1D2C1Cu;
    {
        const bool branch_taken_0x1d2c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C1Cu;
            // 0x1d2c20: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c1c) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D2C24u;
label_1d2c24:
    // 0x1d2c24: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1d2c28:
    if (ctx->pc == 0x1D2C28u) {
        ctx->pc = 0x1D2C2Cu;
        goto label_1d2c2c;
    }
    ctx->pc = 0x1D2C24u;
    {
        const bool branch_taken_0x1d2c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2c24) {
            ctx->pc = 0x1D2C50u;
            goto label_1d2c50;
        }
    }
    ctx->pc = 0x1D2C2Cu;
label_1d2c2c:
    // 0x1d2c2c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d2c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2c30:
    // 0x1d2c30: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x1d2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_1d2c34:
    // 0x1d2c34: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1d2c34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
label_1d2c38:
    // 0x1d2c38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2c3c:
    // 0x1d2c3c: 0x0  nop
    ctx->pc = 0x1d2c3cu;
    // NOP
label_1d2c40:
    // 0x1d2c40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d2c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d2c44:
    // 0x1d2c44: 0x1000016c  b           . + 4 + (0x16C << 2)
label_1d2c48:
    if (ctx->pc == 0x1D2C48u) {
        ctx->pc = 0x1D2C48u;
            // 0x1d2c48: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D2C4Cu;
        goto label_1d2c4c;
    }
    ctx->pc = 0x1D2C44u;
    {
        const bool branch_taken_0x1d2c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C44u;
            // 0x1d2c48: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c44) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D2C4Cu;
label_1d2c4c:
    // 0x1d2c4c: 0x0  nop
    ctx->pc = 0x1d2c4cu;
    // NOP
label_1d2c50:
    // 0x1d2c50: 0x286100a0  slti        $at, $v1, 0xA0
    ctx->pc = 0x1d2c50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)160) ? 1 : 0);
label_1d2c54:
    // 0x1d2c54: 0x102000fe  beqz        $at, . + 4 + (0xFE << 2)
label_1d2c58:
    if (ctx->pc == 0x1D2C58u) {
        ctx->pc = 0x1D2C5Cu;
        goto label_1d2c5c;
    }
    ctx->pc = 0x1D2C54u;
    {
        const bool branch_taken_0x1d2c54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2c54) {
            ctx->pc = 0x1D3050u;
            goto label_1d3050;
        }
    }
    ctx->pc = 0x1D2C5Cu;
label_1d2c5c:
    // 0x1d2c5c: 0xc065d00  jal         func_197400
label_1d2c60:
    if (ctx->pc == 0x1D2C60u) {
        ctx->pc = 0x1D2C64u;
        goto label_1d2c64;
    }
    ctx->pc = 0x1D2C5Cu;
    SET_GPR_U32(ctx, 31, 0x1D2C64u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C64u; }
        if (ctx->pc != 0x1D2C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C64u; }
        if (ctx->pc != 0x1D2C64u) { return; }
    }
    ctx->pc = 0x1D2C64u;
label_1d2c64:
    // 0x1d2c64: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_1d2c68:
    if (ctx->pc == 0x1D2C68u) {
        ctx->pc = 0x1D2C6Cu;
        goto label_1d2c6c;
    }
    ctx->pc = 0x1D2C64u;
    {
        const bool branch_taken_0x1d2c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2c64) {
            ctx->pc = 0x1D2D80u;
            goto label_1d2d80;
        }
    }
    ctx->pc = 0x1D2C6Cu;
label_1d2c6c:
    // 0x1d2c6c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d2c70:
    // 0x1d2c70: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1d2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d2c74:
    // 0x1d2c74: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d2c74u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d2c78:
    // 0x1d2c78: 0x0  nop
    ctx->pc = 0x1d2c78u;
    // NOP
label_1d2c7c:
    // 0x1d2c7c: 0x0  nop
    ctx->pc = 0x1d2c7cu;
    // NOP
label_1d2c80:
    // 0x1d2c80: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2c80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2c84:
    // 0x1d2c84: 0x1440015c  bnez        $v0, . + 4 + (0x15C << 2)
label_1d2c88:
    if (ctx->pc == 0x1D2C88u) {
        ctx->pc = 0x1D2C8Cu;
        goto label_1d2c8c;
    }
    ctx->pc = 0x1D2C84u;
    {
        const bool branch_taken_0x1d2c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2c84) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D2C8Cu;
label_1d2c8c:
    // 0x1d2c8c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d2c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2c90:
    // 0x1d2c90: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d2c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1d2c94:
    // 0x1d2c94: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d2c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2c98:
    // 0x1d2c98: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d2c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d2c9c:
    // 0x1d2c9c: 0xc05d080  jal         func_174200
label_1d2ca0:
    if (ctx->pc == 0x1D2CA0u) {
        ctx->pc = 0x1D2CA0u;
            // 0x1d2ca0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D2CA4u;
        goto label_1d2ca4;
    }
    ctx->pc = 0x1D2C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D2CA4u);
    ctx->pc = 0x1D2CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C9Cu;
            // 0x1d2ca0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CA4u; }
        if (ctx->pc != 0x1D2CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CA4u; }
        if (ctx->pc != 0x1D2CA4u) { return; }
    }
    ctx->pc = 0x1D2CA4u;
label_1d2ca4:
    // 0x1d2ca4: 0xc050bb4  jal         func_142ED0
label_1d2ca8:
    if (ctx->pc == 0x1D2CA8u) {
        ctx->pc = 0x1D2CA8u;
            // 0x1d2ca8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CACu;
        goto label_1d2cac;
    }
    ctx->pc = 0x1D2CA4u;
    SET_GPR_U32(ctx, 31, 0x1D2CACu);
    ctx->pc = 0x1D2CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CA4u;
            // 0x1d2ca8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CACu; }
        if (ctx->pc != 0x1D2CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CACu; }
        if (ctx->pc != 0x1D2CACu) { return; }
    }
    ctx->pc = 0x1D2CACu;
label_1d2cac:
    // 0x1d2cac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2cacu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d2cb0:
    // 0x1d2cb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d2cb4:
    if (ctx->pc == 0x1D2CB4u) {
        ctx->pc = 0x1D2CB8u;
        goto label_1d2cb8;
    }
    ctx->pc = 0x1D2CB0u;
    {
        const bool branch_taken_0x1d2cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2cb0) {
            ctx->pc = 0x1D2CC0u;
            goto label_1d2cc0;
        }
    }
    ctx->pc = 0x1D2CB8u;
label_1d2cb8:
    // 0x1d2cb8: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x1d2cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1d2cbc:
    // 0x1d2cbc: 0x0  nop
    ctx->pc = 0x1d2cbcu;
    // NOP
label_1d2cc0:
    // 0x1d2cc0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2cc4:
    // 0x1d2cc4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2cc8:
    // 0x1d2cc8: 0xc0655a8  jal         func_1956A0
label_1d2ccc:
    if (ctx->pc == 0x1D2CCCu) {
        ctx->pc = 0x1D2CCCu;
            // 0x1d2ccc: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1D2CD0u;
        goto label_1d2cd0;
    }
    ctx->pc = 0x1D2CC8u;
    SET_GPR_U32(ctx, 31, 0x1D2CD0u);
    ctx->pc = 0x1D2CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CC8u;
            // 0x1d2ccc: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CD0u; }
        if (ctx->pc != 0x1D2CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CD0u; }
        if (ctx->pc != 0x1D2CD0u) { return; }
    }
    ctx->pc = 0x1D2CD0u;
label_1d2cd0:
    // 0x1d2cd0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2cd4:
    // 0x1d2cd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d2cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2cd8:
    // 0x1d2cd8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2cdc:
    // 0x1d2cdc: 0xc0652b4  jal         func_194AD0
label_1d2ce0:
    if (ctx->pc == 0x1D2CE0u) {
        ctx->pc = 0x1D2CE0u;
            // 0x1d2ce0: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1D2CE4u;
        goto label_1d2ce4;
    }
    ctx->pc = 0x1D2CDCu;
    SET_GPR_U32(ctx, 31, 0x1D2CE4u);
    ctx->pc = 0x1D2CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CDCu;
            // 0x1d2ce0: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CE4u; }
        if (ctx->pc != 0x1D2CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CE4u; }
        if (ctx->pc != 0x1D2CE4u) { return; }
    }
    ctx->pc = 0x1D2CE4u;
label_1d2ce4:
    // 0x1d2ce4: 0xc050ba4  jal         func_142E90
label_1d2ce8:
    if (ctx->pc == 0x1D2CE8u) {
        ctx->pc = 0x1D2CECu;
        goto label_1d2cec;
    }
    ctx->pc = 0x1D2CE4u;
    SET_GPR_U32(ctx, 31, 0x1D2CECu);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CECu; }
        if (ctx->pc != 0x1D2CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CECu; }
        if (ctx->pc != 0x1D2CECu) { return; }
    }
    ctx->pc = 0x1D2CECu;
label_1d2cec:
    // 0x1d2cec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d2cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2cf0:
    // 0x1d2cf0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1d2cf4:
    // 0x1d2cf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2cf8:
    // 0x1d2cf8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2cfc:
    // 0x1d2cfc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d2cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2d00:
    // 0x1d2d00: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1d2d00u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d2d04:
    // 0x1d2d04: 0xc065480  jal         func_195200
label_1d2d08:
    if (ctx->pc == 0x1D2D08u) {
        ctx->pc = 0x1D2D08u;
            // 0x1d2d08: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1D2D0Cu;
        goto label_1d2d0c;
    }
    ctx->pc = 0x1D2D04u;
    SET_GPR_U32(ctx, 31, 0x1D2D0Cu);
    ctx->pc = 0x1D2D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D04u;
            // 0x1d2d08: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D0Cu; }
        if (ctx->pc != 0x1D2D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D0Cu; }
        if (ctx->pc != 0x1D2D0Cu) { return; }
    }
    ctx->pc = 0x1D2D0Cu;
label_1d2d0c:
    // 0x1d2d0c: 0xc050bb4  jal         func_142ED0
label_1d2d10:
    if (ctx->pc == 0x1D2D10u) {
        ctx->pc = 0x1D2D10u;
            // 0x1d2d10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D14u;
        goto label_1d2d14;
    }
    ctx->pc = 0x1D2D0Cu;
    SET_GPR_U32(ctx, 31, 0x1D2D14u);
    ctx->pc = 0x1D2D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D0Cu;
            // 0x1d2d10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D14u; }
        if (ctx->pc != 0x1D2D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D14u; }
        if (ctx->pc != 0x1D2D14u) { return; }
    }
    ctx->pc = 0x1D2D14u;
label_1d2d14:
    // 0x1d2d14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2d14u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d2d18:
    // 0x1d2d18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d2d1c:
    if (ctx->pc == 0x1D2D1Cu) {
        ctx->pc = 0x1D2D20u;
        goto label_1d2d20;
    }
    ctx->pc = 0x1D2D18u;
    {
        const bool branch_taken_0x1d2d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2d18) {
            ctx->pc = 0x1D2D28u;
            goto label_1d2d28;
        }
    }
    ctx->pc = 0x1D2D20u;
label_1d2d20:
    // 0x1d2d20: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x1d2d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1d2d24:
    // 0x1d2d24: 0x0  nop
    ctx->pc = 0x1d2d24u;
    // NOP
label_1d2d28:
    // 0x1d2d28: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2d2c:
    // 0x1d2d2c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2d30:
    // 0x1d2d30: 0xc0655a8  jal         func_1956A0
label_1d2d34:
    if (ctx->pc == 0x1D2D34u) {
        ctx->pc = 0x1D2D34u;
            // 0x1d2d34: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1D2D38u;
        goto label_1d2d38;
    }
    ctx->pc = 0x1D2D30u;
    SET_GPR_U32(ctx, 31, 0x1D2D38u);
    ctx->pc = 0x1D2D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D30u;
            // 0x1d2d34: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D38u; }
        if (ctx->pc != 0x1D2D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D38u; }
        if (ctx->pc != 0x1D2D38u) { return; }
    }
    ctx->pc = 0x1D2D38u;
label_1d2d38:
    // 0x1d2d38: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2d3c:
    // 0x1d2d3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d2d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2d40:
    // 0x1d2d40: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2d44:
    // 0x1d2d44: 0xc0652b4  jal         func_194AD0
label_1d2d48:
    if (ctx->pc == 0x1D2D48u) {
        ctx->pc = 0x1D2D48u;
            // 0x1d2d48: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1D2D4Cu;
        goto label_1d2d4c;
    }
    ctx->pc = 0x1D2D44u;
    SET_GPR_U32(ctx, 31, 0x1D2D4Cu);
    ctx->pc = 0x1D2D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D44u;
            // 0x1d2d48: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D4Cu; }
        if (ctx->pc != 0x1D2D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D4Cu; }
        if (ctx->pc != 0x1D2D4Cu) { return; }
    }
    ctx->pc = 0x1D2D4Cu;
label_1d2d4c:
    // 0x1d2d4c: 0xc050ba4  jal         func_142E90
label_1d2d50:
    if (ctx->pc == 0x1D2D50u) {
        ctx->pc = 0x1D2D54u;
        goto label_1d2d54;
    }
    ctx->pc = 0x1D2D4Cu;
    SET_GPR_U32(ctx, 31, 0x1D2D54u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D54u; }
        if (ctx->pc != 0x1D2D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D54u; }
        if (ctx->pc != 0x1D2D54u) { return; }
    }
    ctx->pc = 0x1D2D54u;
label_1d2d54:
    // 0x1d2d54: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2d58:
    // 0x1d2d58: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1d2d5c:
    // 0x1d2d5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2d60:
    // 0x1d2d60: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2d64:
    // 0x1d2d64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d2d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2d68:
    // 0x1d2d68: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1d2d68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d2d6c:
    // 0x1d2d6c: 0xc065480  jal         func_195200
label_1d2d70:
    if (ctx->pc == 0x1D2D70u) {
        ctx->pc = 0x1D2D70u;
            // 0x1d2d70: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1D2D74u;
        goto label_1d2d74;
    }
    ctx->pc = 0x1D2D6Cu;
    SET_GPR_U32(ctx, 31, 0x1D2D74u);
    ctx->pc = 0x1D2D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D6Cu;
            // 0x1d2d70: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D74u; }
        if (ctx->pc != 0x1D2D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D74u; }
        if (ctx->pc != 0x1D2D74u) { return; }
    }
    ctx->pc = 0x1D2D74u;
label_1d2d74:
    // 0x1d2d74: 0x10000120  b           . + 4 + (0x120 << 2)
label_1d2d78:
    if (ctx->pc == 0x1D2D78u) {
        ctx->pc = 0x1D2D7Cu;
        goto label_1d2d7c;
    }
    ctx->pc = 0x1D2D74u;
    {
        const bool branch_taken_0x1d2d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2d74) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D2D7Cu;
label_1d2d7c:
    // 0x1d2d7c: 0x0  nop
    ctx->pc = 0x1d2d7cu;
    // NOP
label_1d2d80:
    // 0x1d2d80: 0xc065d00  jal         func_197400
label_1d2d84:
    if (ctx->pc == 0x1D2D84u) {
        ctx->pc = 0x1D2D88u;
        goto label_1d2d88;
    }
    ctx->pc = 0x1D2D80u;
    SET_GPR_U32(ctx, 31, 0x1D2D88u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D88u; }
        if (ctx->pc != 0x1D2D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D88u; }
        if (ctx->pc != 0x1D2D88u) { return; }
    }
    ctx->pc = 0x1D2D88u;
label_1d2d88:
    // 0x1d2d88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2d8c:
    // 0x1d2d8c: 0x14430056  bne         $v0, $v1, . + 4 + (0x56 << 2)
label_1d2d90:
    if (ctx->pc == 0x1D2D90u) {
        ctx->pc = 0x1D2D94u;
        goto label_1d2d94;
    }
    ctx->pc = 0x1D2D8Cu;
    {
        const bool branch_taken_0x1d2d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d2d8c) {
            ctx->pc = 0x1D2EE8u;
            goto label_1d2ee8;
        }
    }
    ctx->pc = 0x1D2D94u;
label_1d2d94:
    // 0x1d2d94: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d2d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d2d98:
    // 0x1d2d98: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d2d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d2d9c:
    // 0x1d2d9c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d2d9cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d2da0:
    // 0x1d2da0: 0x0  nop
    ctx->pc = 0x1d2da0u;
    // NOP
label_1d2da4:
    // 0x1d2da4: 0x0  nop
    ctx->pc = 0x1d2da4u;
    // NOP
label_1d2da8:
    // 0x1d2da8: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2da8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2dac:
    // 0x1d2dac: 0x14400112  bnez        $v0, . + 4 + (0x112 << 2)
label_1d2db0:
    if (ctx->pc == 0x1D2DB0u) {
        ctx->pc = 0x1D2DB4u;
        goto label_1d2db4;
    }
    ctx->pc = 0x1D2DACu;
    {
        const bool branch_taken_0x1d2dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2dac) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D2DB4u;
label_1d2db4:
    // 0x1d2db4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d2db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2db8:
    // 0x1d2db8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d2db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1d2dbc:
    // 0x1d2dbc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d2dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2dc0:
    // 0x1d2dc0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d2dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d2dc4:
    // 0x1d2dc4: 0xc05d080  jal         func_174200
label_1d2dc8:
    if (ctx->pc == 0x1D2DC8u) {
        ctx->pc = 0x1D2DC8u;
            // 0x1d2dc8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D2DCCu;
        goto label_1d2dcc;
    }
    ctx->pc = 0x1D2DC4u;
    SET_GPR_U32(ctx, 31, 0x1D2DCCu);
    ctx->pc = 0x1D2DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DC4u;
            // 0x1d2dc8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DCCu; }
        if (ctx->pc != 0x1D2DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DCCu; }
        if (ctx->pc != 0x1D2DCCu) { return; }
    }
    ctx->pc = 0x1D2DCCu;
label_1d2dcc:
    // 0x1d2dcc: 0xc050bb4  jal         func_142ED0
label_1d2dd0:
    if (ctx->pc == 0x1D2DD0u) {
        ctx->pc = 0x1D2DD4u;
        goto label_1d2dd4;
    }
    ctx->pc = 0x1D2DCCu;
    SET_GPR_U32(ctx, 31, 0x1D2DD4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DD4u; }
        if (ctx->pc != 0x1D2DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DD4u; }
        if (ctx->pc != 0x1D2DD4u) { return; }
    }
    ctx->pc = 0x1D2DD4u;
label_1d2dd4:
    // 0x1d2dd4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d2dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2dd8:
    // 0x1d2dd8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d2dd8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2ddc:
    // 0x1d2ddc: 0x0  nop
    ctx->pc = 0x1d2ddcu;
    // NOP
label_1d2de0:
    // 0x1d2de0: 0x0  nop
    ctx->pc = 0x1d2de0u;
    // NOP
label_1d2de4:
    // 0x1d2de4: 0x8810  mfhi        $s1
    ctx->pc = 0x1d2de4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_1d2de8:
    // 0x1d2de8: 0xc050bb4  jal         func_142ED0
label_1d2dec:
    if (ctx->pc == 0x1D2DECu) {
        ctx->pc = 0x1D2DF0u;
        goto label_1d2df0;
    }
    ctx->pc = 0x1D2DE8u;
    SET_GPR_U32(ctx, 31, 0x1D2DF0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DF0u; }
        if (ctx->pc != 0x1D2DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DF0u; }
        if (ctx->pc != 0x1D2DF0u) { return; }
    }
    ctx->pc = 0x1D2DF0u;
label_1d2df0:
    // 0x1d2df0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2df0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d2df4:
    // 0x1d2df4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d2df8:
    if (ctx->pc == 0x1D2DF8u) {
        ctx->pc = 0x1D2DFCu;
        goto label_1d2dfc;
    }
    ctx->pc = 0x1D2DF4u;
    {
        const bool branch_taken_0x1d2df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2df4) {
            ctx->pc = 0x1D2E08u;
            goto label_1d2e08;
        }
    }
    ctx->pc = 0x1D2DFCu;
label_1d2dfc:
    // 0x1d2dfc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1d2e00:
    // 0x1d2e00: 0x518823  subu        $s1, $v0, $s1
    ctx->pc = 0x1d2e00u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1d2e04:
    // 0x1d2e04: 0x0  nop
    ctx->pc = 0x1d2e04u;
    // NOP
label_1d2e08:
    // 0x1d2e08: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2e0c:
    // 0x1d2e0c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2e10:
    // 0x1d2e10: 0xc0655a8  jal         func_1956A0
label_1d2e14:
    if (ctx->pc == 0x1D2E14u) {
        ctx->pc = 0x1D2E14u;
            // 0x1d2e14: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1D2E18u;
        goto label_1d2e18;
    }
    ctx->pc = 0x1D2E10u;
    SET_GPR_U32(ctx, 31, 0x1D2E18u);
    ctx->pc = 0x1D2E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E10u;
            // 0x1d2e14: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E18u; }
        if (ctx->pc != 0x1D2E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E18u; }
        if (ctx->pc != 0x1D2E18u) { return; }
    }
    ctx->pc = 0x1D2E18u;
label_1d2e18:
    // 0x1d2e18: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2e1c:
    // 0x1d2e1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d2e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2e20:
    // 0x1d2e20: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2e24:
    // 0x1d2e24: 0xc0652b4  jal         func_194AD0
label_1d2e28:
    if (ctx->pc == 0x1D2E28u) {
        ctx->pc = 0x1D2E28u;
            // 0x1d2e28: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1D2E2Cu;
        goto label_1d2e2c;
    }
    ctx->pc = 0x1D2E24u;
    SET_GPR_U32(ctx, 31, 0x1D2E2Cu);
    ctx->pc = 0x1D2E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E24u;
            // 0x1d2e28: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E2Cu; }
        if (ctx->pc != 0x1D2E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E2Cu; }
        if (ctx->pc != 0x1D2E2Cu) { return; }
    }
    ctx->pc = 0x1D2E2Cu;
label_1d2e2c:
    // 0x1d2e2c: 0xc050ba4  jal         func_142E90
label_1d2e30:
    if (ctx->pc == 0x1D2E30u) {
        ctx->pc = 0x1D2E34u;
        goto label_1d2e34;
    }
    ctx->pc = 0x1D2E2Cu;
    SET_GPR_U32(ctx, 31, 0x1D2E34u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E34u; }
        if (ctx->pc != 0x1D2E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E34u; }
        if (ctx->pc != 0x1D2E34u) { return; }
    }
    ctx->pc = 0x1D2E34u;
label_1d2e34:
    // 0x1d2e34: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d2e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2e38:
    // 0x1d2e38: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1d2e3c:
    // 0x1d2e3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2e40:
    // 0x1d2e40: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2e44:
    // 0x1d2e44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d2e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2e48:
    // 0x1d2e48: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1d2e48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d2e4c:
    // 0x1d2e4c: 0xc065480  jal         func_195200
label_1d2e50:
    if (ctx->pc == 0x1D2E50u) {
        ctx->pc = 0x1D2E50u;
            // 0x1d2e50: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1D2E54u;
        goto label_1d2e54;
    }
    ctx->pc = 0x1D2E4Cu;
    SET_GPR_U32(ctx, 31, 0x1D2E54u);
    ctx->pc = 0x1D2E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E4Cu;
            // 0x1d2e50: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E54u; }
        if (ctx->pc != 0x1D2E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E54u; }
        if (ctx->pc != 0x1D2E54u) { return; }
    }
    ctx->pc = 0x1D2E54u;
label_1d2e54:
    // 0x1d2e54: 0xc050bb4  jal         func_142ED0
label_1d2e58:
    if (ctx->pc == 0x1D2E58u) {
        ctx->pc = 0x1D2E5Cu;
        goto label_1d2e5c;
    }
    ctx->pc = 0x1D2E54u;
    SET_GPR_U32(ctx, 31, 0x1D2E5Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E5Cu; }
        if (ctx->pc != 0x1D2E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E5Cu; }
        if (ctx->pc != 0x1D2E5Cu) { return; }
    }
    ctx->pc = 0x1D2E5Cu;
label_1d2e5c:
    // 0x1d2e5c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d2e60:
    // 0x1d2e60: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d2e60u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2e64:
    // 0x1d2e64: 0x0  nop
    ctx->pc = 0x1d2e64u;
    // NOP
label_1d2e68:
    // 0x1d2e68: 0x0  nop
    ctx->pc = 0x1d2e68u;
    // NOP
label_1d2e6c:
    // 0x1d2e6c: 0x8810  mfhi        $s1
    ctx->pc = 0x1d2e6cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_1d2e70:
    // 0x1d2e70: 0xc050bb4  jal         func_142ED0
label_1d2e74:
    if (ctx->pc == 0x1D2E74u) {
        ctx->pc = 0x1D2E78u;
        goto label_1d2e78;
    }
    ctx->pc = 0x1D2E70u;
    SET_GPR_U32(ctx, 31, 0x1D2E78u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E78u; }
        if (ctx->pc != 0x1D2E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E78u; }
        if (ctx->pc != 0x1D2E78u) { return; }
    }
    ctx->pc = 0x1D2E78u;
label_1d2e78:
    // 0x1d2e78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2e78u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d2e7c:
    // 0x1d2e7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d2e80:
    if (ctx->pc == 0x1D2E80u) {
        ctx->pc = 0x1D2E84u;
        goto label_1d2e84;
    }
    ctx->pc = 0x1D2E7Cu;
    {
        const bool branch_taken_0x1d2e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2e7c) {
            ctx->pc = 0x1D2E90u;
            goto label_1d2e90;
        }
    }
    ctx->pc = 0x1D2E84u;
label_1d2e84:
    // 0x1d2e84: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1d2e88:
    // 0x1d2e88: 0x518823  subu        $s1, $v0, $s1
    ctx->pc = 0x1d2e88u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1d2e8c:
    // 0x1d2e8c: 0x0  nop
    ctx->pc = 0x1d2e8cu;
    // NOP
label_1d2e90:
    // 0x1d2e90: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2e94:
    // 0x1d2e94: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2e98:
    // 0x1d2e98: 0xc0655a8  jal         func_1956A0
label_1d2e9c:
    if (ctx->pc == 0x1D2E9Cu) {
        ctx->pc = 0x1D2E9Cu;
            // 0x1d2e9c: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1D2EA0u;
        goto label_1d2ea0;
    }
    ctx->pc = 0x1D2E98u;
    SET_GPR_U32(ctx, 31, 0x1D2EA0u);
    ctx->pc = 0x1D2E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E98u;
            // 0x1d2e9c: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EA0u; }
        if (ctx->pc != 0x1D2EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EA0u; }
        if (ctx->pc != 0x1D2EA0u) { return; }
    }
    ctx->pc = 0x1D2EA0u;
label_1d2ea0:
    // 0x1d2ea0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2ea4:
    // 0x1d2ea4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d2ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ea8:
    // 0x1d2ea8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2eac:
    // 0x1d2eac: 0xc0652b4  jal         func_194AD0
label_1d2eb0:
    if (ctx->pc == 0x1D2EB0u) {
        ctx->pc = 0x1D2EB0u;
            // 0x1d2eb0: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1D2EB4u;
        goto label_1d2eb4;
    }
    ctx->pc = 0x1D2EACu;
    SET_GPR_U32(ctx, 31, 0x1D2EB4u);
    ctx->pc = 0x1D2EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2EACu;
            // 0x1d2eb0: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EB4u; }
        if (ctx->pc != 0x1D2EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EB4u; }
        if (ctx->pc != 0x1D2EB4u) { return; }
    }
    ctx->pc = 0x1D2EB4u;
label_1d2eb4:
    // 0x1d2eb4: 0xc050ba4  jal         func_142E90
label_1d2eb8:
    if (ctx->pc == 0x1D2EB8u) {
        ctx->pc = 0x1D2EBCu;
        goto label_1d2ebc;
    }
    ctx->pc = 0x1D2EB4u;
    SET_GPR_U32(ctx, 31, 0x1D2EBCu);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EBCu; }
        if (ctx->pc != 0x1D2EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EBCu; }
        if (ctx->pc != 0x1D2EBCu) { return; }
    }
    ctx->pc = 0x1D2EBCu;
label_1d2ebc:
    // 0x1d2ebc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d2ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2ec0:
    // 0x1d2ec0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1d2ec4:
    // 0x1d2ec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2ec8:
    // 0x1d2ec8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2ecc:
    // 0x1d2ecc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d2eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ed0:
    // 0x1d2ed0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1d2ed0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d2ed4:
    // 0x1d2ed4: 0xc065480  jal         func_195200
label_1d2ed8:
    if (ctx->pc == 0x1D2ED8u) {
        ctx->pc = 0x1D2ED8u;
            // 0x1d2ed8: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1D2EDCu;
        goto label_1d2edc;
    }
    ctx->pc = 0x1D2ED4u;
    SET_GPR_U32(ctx, 31, 0x1D2EDCu);
    ctx->pc = 0x1D2ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2ED4u;
            // 0x1d2ed8: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EDCu; }
        if (ctx->pc != 0x1D2EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EDCu; }
        if (ctx->pc != 0x1D2EDCu) { return; }
    }
    ctx->pc = 0x1D2EDCu;
label_1d2edc:
    // 0x1d2edc: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_1d2ee0:
    if (ctx->pc == 0x1D2EE0u) {
        ctx->pc = 0x1D2EE4u;
        goto label_1d2ee4;
    }
    ctx->pc = 0x1D2EDCu;
    {
        const bool branch_taken_0x1d2edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2edc) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D2EE4u;
label_1d2ee4:
    // 0x1d2ee4: 0x0  nop
    ctx->pc = 0x1d2ee4u;
    // NOP
label_1d2ee8:
    // 0x1d2ee8: 0xc065d00  jal         func_197400
label_1d2eec:
    if (ctx->pc == 0x1D2EECu) {
        ctx->pc = 0x1D2EF0u;
        goto label_1d2ef0;
    }
    ctx->pc = 0x1D2EE8u;
    SET_GPR_U32(ctx, 31, 0x1D2EF0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EF0u; }
        if (ctx->pc != 0x1D2EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EF0u; }
        if (ctx->pc != 0x1D2EF0u) { return; }
    }
    ctx->pc = 0x1D2EF0u;
label_1d2ef0:
    // 0x1d2ef0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d2ef4:
    // 0x1d2ef4: 0x144300c0  bne         $v0, $v1, . + 4 + (0xC0 << 2)
label_1d2ef8:
    if (ctx->pc == 0x1D2EF8u) {
        ctx->pc = 0x1D2EFCu;
        goto label_1d2efc;
    }
    ctx->pc = 0x1D2EF4u;
    {
        const bool branch_taken_0x1d2ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d2ef4) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D2EFCu;
label_1d2efc:
    // 0x1d2efc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d2efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d2f00:
    // 0x1d2f00: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1d2f04:
    if (ctx->pc == 0x1D2F04u) {
        ctx->pc = 0x1D2F04u;
            // 0x1d2f04: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->pc = 0x1D2F08u;
        goto label_1d2f08;
    }
    ctx->pc = 0x1D2F00u;
    {
        const bool branch_taken_0x1d2f00 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D2F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F00u;
            // 0x1d2f04: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f00) {
            ctx->pc = 0x1D2F14u;
            goto label_1d2f14;
        }
    }
    ctx->pc = 0x1D2F08u;
label_1d2f08:
    // 0x1d2f08: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d2f0c:
    if (ctx->pc == 0x1D2F0Cu) {
        ctx->pc = 0x1D2F10u;
        goto label_1d2f10;
    }
    ctx->pc = 0x1D2F08u;
    {
        const bool branch_taken_0x1d2f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f08) {
            ctx->pc = 0x1D2F14u;
            goto label_1d2f14;
        }
    }
    ctx->pc = 0x1D2F10u;
label_1d2f10:
    // 0x1d2f10: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1d2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1d2f14:
    // 0x1d2f14: 0x144000b8  bnez        $v0, . + 4 + (0xB8 << 2)
label_1d2f18:
    if (ctx->pc == 0x1D2F18u) {
        ctx->pc = 0x1D2F1Cu;
        goto label_1d2f1c;
    }
    ctx->pc = 0x1D2F14u;
    {
        const bool branch_taken_0x1d2f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f14) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D2F1Cu;
label_1d2f1c:
    // 0x1d2f1c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d2f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2f20:
    // 0x1d2f20: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d2f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1d2f24:
    // 0x1d2f24: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d2f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2f28:
    // 0x1d2f28: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d2f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d2f2c:
    // 0x1d2f2c: 0xc05d080  jal         func_174200
label_1d2f30:
    if (ctx->pc == 0x1D2F30u) {
        ctx->pc = 0x1D2F30u;
            // 0x1d2f30: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D2F34u;
        goto label_1d2f34;
    }
    ctx->pc = 0x1D2F2Cu;
    SET_GPR_U32(ctx, 31, 0x1D2F34u);
    ctx->pc = 0x1D2F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F2Cu;
            // 0x1d2f30: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F34u; }
        if (ctx->pc != 0x1D2F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F34u; }
        if (ctx->pc != 0x1D2F34u) { return; }
    }
    ctx->pc = 0x1D2F34u;
label_1d2f34:
    // 0x1d2f34: 0xc050bb4  jal         func_142ED0
label_1d2f38:
    if (ctx->pc == 0x1D2F38u) {
        ctx->pc = 0x1D2F3Cu;
        goto label_1d2f3c;
    }
    ctx->pc = 0x1D2F34u;
    SET_GPR_U32(ctx, 31, 0x1D2F3Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F3Cu; }
        if (ctx->pc != 0x1D2F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F3Cu; }
        if (ctx->pc != 0x1D2F3Cu) { return; }
    }
    ctx->pc = 0x1D2F3Cu;
label_1d2f3c:
    // 0x1d2f3c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d2f40:
    // 0x1d2f40: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d2f40u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2f44:
    // 0x1d2f44: 0x0  nop
    ctx->pc = 0x1d2f44u;
    // NOP
label_1d2f48:
    // 0x1d2f48: 0x0  nop
    ctx->pc = 0x1d2f48u;
    // NOP
label_1d2f4c:
    // 0x1d2f4c: 0x8810  mfhi        $s1
    ctx->pc = 0x1d2f4cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_1d2f50:
    // 0x1d2f50: 0xc050bb4  jal         func_142ED0
label_1d2f54:
    if (ctx->pc == 0x1D2F54u) {
        ctx->pc = 0x1D2F58u;
        goto label_1d2f58;
    }
    ctx->pc = 0x1D2F50u;
    SET_GPR_U32(ctx, 31, 0x1D2F58u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F58u; }
        if (ctx->pc != 0x1D2F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F58u; }
        if (ctx->pc != 0x1D2F58u) { return; }
    }
    ctx->pc = 0x1D2F58u;
label_1d2f58:
    // 0x1d2f58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2f58u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d2f5c:
    // 0x1d2f5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d2f60:
    if (ctx->pc == 0x1D2F60u) {
        ctx->pc = 0x1D2F64u;
        goto label_1d2f64;
    }
    ctx->pc = 0x1D2F5Cu;
    {
        const bool branch_taken_0x1d2f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f5c) {
            ctx->pc = 0x1D2F70u;
            goto label_1d2f70;
        }
    }
    ctx->pc = 0x1D2F64u;
label_1d2f64:
    // 0x1d2f64: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1d2f68:
    // 0x1d2f68: 0x518823  subu        $s1, $v0, $s1
    ctx->pc = 0x1d2f68u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1d2f6c:
    // 0x1d2f6c: 0x0  nop
    ctx->pc = 0x1d2f6cu;
    // NOP
label_1d2f70:
    // 0x1d2f70: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2f74:
    // 0x1d2f74: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2f78:
    // 0x1d2f78: 0xc0655a8  jal         func_1956A0
label_1d2f7c:
    if (ctx->pc == 0x1D2F7Cu) {
        ctx->pc = 0x1D2F7Cu;
            // 0x1d2f7c: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1D2F80u;
        goto label_1d2f80;
    }
    ctx->pc = 0x1D2F78u;
    SET_GPR_U32(ctx, 31, 0x1D2F80u);
    ctx->pc = 0x1D2F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F78u;
            // 0x1d2f7c: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F80u; }
        if (ctx->pc != 0x1D2F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F80u; }
        if (ctx->pc != 0x1D2F80u) { return; }
    }
    ctx->pc = 0x1D2F80u;
label_1d2f80:
    // 0x1d2f80: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2f84:
    // 0x1d2f84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d2f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f88:
    // 0x1d2f88: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2f8c:
    // 0x1d2f8c: 0xc0652b4  jal         func_194AD0
label_1d2f90:
    if (ctx->pc == 0x1D2F90u) {
        ctx->pc = 0x1D2F90u;
            // 0x1d2f90: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1D2F94u;
        goto label_1d2f94;
    }
    ctx->pc = 0x1D2F8Cu;
    SET_GPR_U32(ctx, 31, 0x1D2F94u);
    ctx->pc = 0x1D2F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F8Cu;
            // 0x1d2f90: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F94u; }
        if (ctx->pc != 0x1D2F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F94u; }
        if (ctx->pc != 0x1D2F94u) { return; }
    }
    ctx->pc = 0x1D2F94u;
label_1d2f94:
    // 0x1d2f94: 0xc050ba4  jal         func_142E90
label_1d2f98:
    if (ctx->pc == 0x1D2F98u) {
        ctx->pc = 0x1D2F9Cu;
        goto label_1d2f9c;
    }
    ctx->pc = 0x1D2F94u;
    SET_GPR_U32(ctx, 31, 0x1D2F9Cu);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F9Cu; }
        if (ctx->pc != 0x1D2F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F9Cu; }
        if (ctx->pc != 0x1D2F9Cu) { return; }
    }
    ctx->pc = 0x1D2F9Cu;
label_1d2f9c:
    // 0x1d2f9c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d2f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2fa0:
    // 0x1d2fa0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1d2fa4:
    // 0x1d2fa4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2fa8:
    // 0x1d2fa8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2fac:
    // 0x1d2fac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d2facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2fb0:
    // 0x1d2fb0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1d2fb0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d2fb4:
    // 0x1d2fb4: 0xc065480  jal         func_195200
label_1d2fb8:
    if (ctx->pc == 0x1D2FB8u) {
        ctx->pc = 0x1D2FB8u;
            // 0x1d2fb8: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1D2FBCu;
        goto label_1d2fbc;
    }
    ctx->pc = 0x1D2FB4u;
    SET_GPR_U32(ctx, 31, 0x1D2FBCu);
    ctx->pc = 0x1D2FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FB4u;
            // 0x1d2fb8: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2FBCu; }
        if (ctx->pc != 0x1D2FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2FBCu; }
        if (ctx->pc != 0x1D2FBCu) { return; }
    }
    ctx->pc = 0x1D2FBCu;
label_1d2fbc:
    // 0x1d2fbc: 0xc050bb4  jal         func_142ED0
label_1d2fc0:
    if (ctx->pc == 0x1D2FC0u) {
        ctx->pc = 0x1D2FC4u;
        goto label_1d2fc4;
    }
    ctx->pc = 0x1D2FBCu;
    SET_GPR_U32(ctx, 31, 0x1D2FC4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2FC4u; }
        if (ctx->pc != 0x1D2FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2FC4u; }
        if (ctx->pc != 0x1D2FC4u) { return; }
    }
    ctx->pc = 0x1D2FC4u;
label_1d2fc4:
    // 0x1d2fc4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d2fc8:
    // 0x1d2fc8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d2fc8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2fcc:
    // 0x1d2fcc: 0x0  nop
    ctx->pc = 0x1d2fccu;
    // NOP
label_1d2fd0:
    // 0x1d2fd0: 0x0  nop
    ctx->pc = 0x1d2fd0u;
    // NOP
label_1d2fd4:
    // 0x1d2fd4: 0x8810  mfhi        $s1
    ctx->pc = 0x1d2fd4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_1d2fd8:
    // 0x1d2fd8: 0xc050bb4  jal         func_142ED0
label_1d2fdc:
    if (ctx->pc == 0x1D2FDCu) {
        ctx->pc = 0x1D2FE0u;
        goto label_1d2fe0;
    }
    ctx->pc = 0x1D2FD8u;
    SET_GPR_U32(ctx, 31, 0x1D2FE0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2FE0u; }
        if (ctx->pc != 0x1D2FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2FE0u; }
        if (ctx->pc != 0x1D2FE0u) { return; }
    }
    ctx->pc = 0x1D2FE0u;
label_1d2fe0:
    // 0x1d2fe0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2fe0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d2fe4:
    // 0x1d2fe4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d2fe8:
    if (ctx->pc == 0x1D2FE8u) {
        ctx->pc = 0x1D2FECu;
        goto label_1d2fec;
    }
    ctx->pc = 0x1D2FE4u;
    {
        const bool branch_taken_0x1d2fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2fe4) {
            ctx->pc = 0x1D2FF8u;
            goto label_1d2ff8;
        }
    }
    ctx->pc = 0x1D2FECu;
label_1d2fec:
    // 0x1d2fec: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1d2ff0:
    // 0x1d2ff0: 0x518823  subu        $s1, $v0, $s1
    ctx->pc = 0x1d2ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1d2ff4:
    // 0x1d2ff4: 0x0  nop
    ctx->pc = 0x1d2ff4u;
    // NOP
label_1d2ff8:
    // 0x1d2ff8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d2ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2ffc:
    // 0x1d2ffc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d2ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d3000:
    // 0x1d3000: 0xc0655a8  jal         func_1956A0
label_1d3004:
    if (ctx->pc == 0x1D3004u) {
        ctx->pc = 0x1D3004u;
            // 0x1d3004: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1D3008u;
        goto label_1d3008;
    }
    ctx->pc = 0x1D3000u;
    SET_GPR_U32(ctx, 31, 0x1D3008u);
    ctx->pc = 0x1D3004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3000u;
            // 0x1d3004: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3008u; }
        if (ctx->pc != 0x1D3008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3008u; }
        if (ctx->pc != 0x1D3008u) { return; }
    }
    ctx->pc = 0x1D3008u;
label_1d3008:
    // 0x1d3008: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d3008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d300c:
    // 0x1d300c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d300cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3010:
    // 0x1d3010: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d3010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d3014:
    // 0x1d3014: 0xc0652b4  jal         func_194AD0
label_1d3018:
    if (ctx->pc == 0x1D3018u) {
        ctx->pc = 0x1D3018u;
            // 0x1d3018: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1D301Cu;
        goto label_1d301c;
    }
    ctx->pc = 0x1D3014u;
    SET_GPR_U32(ctx, 31, 0x1D301Cu);
    ctx->pc = 0x1D3018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3014u;
            // 0x1d3018: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D301Cu; }
        if (ctx->pc != 0x1D301Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D301Cu; }
        if (ctx->pc != 0x1D301Cu) { return; }
    }
    ctx->pc = 0x1D301Cu;
label_1d301c:
    // 0x1d301c: 0xc050ba4  jal         func_142E90
label_1d3020:
    if (ctx->pc == 0x1D3020u) {
        ctx->pc = 0x1D3024u;
        goto label_1d3024;
    }
    ctx->pc = 0x1D301Cu;
    SET_GPR_U32(ctx, 31, 0x1D3024u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3024u; }
        if (ctx->pc != 0x1D3024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3024u; }
        if (ctx->pc != 0x1D3024u) { return; }
    }
    ctx->pc = 0x1D3024u;
label_1d3024:
    // 0x1d3024: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d3024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d3028:
    // 0x1d3028: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d3028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1d302c:
    // 0x1d302c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d302cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3030:
    // 0x1d3030: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d3030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d3034:
    // 0x1d3034: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d3034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3038:
    // 0x1d3038: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1d3038u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d303c:
    // 0x1d303c: 0xc065480  jal         func_195200
label_1d3040:
    if (ctx->pc == 0x1D3040u) {
        ctx->pc = 0x1D3040u;
            // 0x1d3040: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1D3044u;
        goto label_1d3044;
    }
    ctx->pc = 0x1D303Cu;
    SET_GPR_U32(ctx, 31, 0x1D3044u);
    ctx->pc = 0x1D3040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D303Cu;
            // 0x1d3040: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3044u; }
        if (ctx->pc != 0x1D3044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3044u; }
        if (ctx->pc != 0x1D3044u) { return; }
    }
    ctx->pc = 0x1D3044u;
label_1d3044:
    // 0x1d3044: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1d3048:
    if (ctx->pc == 0x1D3048u) {
        ctx->pc = 0x1D304Cu;
        goto label_1d304c;
    }
    ctx->pc = 0x1D3044u;
    {
        const bool branch_taken_0x1d3044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3044) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D304Cu;
label_1d304c:
    // 0x1d304c: 0x0  nop
    ctx->pc = 0x1d304cu;
    // NOP
label_1d3050:
    // 0x1d3050: 0x286100a1  slti        $at, $v1, 0xA1
    ctx->pc = 0x1d3050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)161) ? 1 : 0);
label_1d3054:
    // 0x1d3054: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
label_1d3058:
    if (ctx->pc == 0x1D3058u) {
        ctx->pc = 0x1D3058u;
            // 0x1d3058: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1D305Cu;
        goto label_1d305c;
    }
    ctx->pc = 0x1D3054u;
    {
        const bool branch_taken_0x1d3054 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3054u;
            // 0x1d3058: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3054) {
            ctx->pc = 0x1D31D8u;
            goto label_1d31d8;
        }
    }
    ctx->pc = 0x1D305Cu;
label_1d305c:
    // 0x1d305c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d305cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d3060:
    // 0x1d3060: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1d3060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_1d3064:
    // 0x1d3064: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d3064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d3068:
    // 0x1d3068: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d3068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d306c:
    // 0x1d306c: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1d306cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_1d3070:
    // 0x1d3070: 0xc065590  jal         func_195640
label_1d3074:
    if (ctx->pc == 0x1D3074u) {
        ctx->pc = 0x1D3074u;
            // 0x1d3074: 0x2445ffe2  addiu       $a1, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->pc = 0x1D3078u;
        goto label_1d3078;
    }
    ctx->pc = 0x1D3070u;
    SET_GPR_U32(ctx, 31, 0x1D3078u);
    ctx->pc = 0x1D3074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3070u;
            // 0x1d3074: 0x2445ffe2  addiu       $a1, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3078u; }
        if (ctx->pc != 0x1D3078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3078u; }
        if (ctx->pc != 0x1D3078u) { return; }
    }
    ctx->pc = 0x1D3078u;
label_1d3078:
    // 0x1d3078: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d3078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d307c:
    // 0x1d307c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d3080:
    // 0x1d3080: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1d3080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_1d3084:
    // 0x1d3084: 0xc065590  jal         func_195640
label_1d3088:
    if (ctx->pc == 0x1D3088u) {
        ctx->pc = 0x1D3088u;
            // 0x1d3088: 0x2445ffe2  addiu       $a1, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->pc = 0x1D308Cu;
        goto label_1d308c;
    }
    ctx->pc = 0x1D3084u;
    SET_GPR_U32(ctx, 31, 0x1D308Cu);
    ctx->pc = 0x1D3088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3084u;
            // 0x1d3088: 0x2445ffe2  addiu       $a1, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D308Cu; }
        if (ctx->pc != 0x1D308Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D308Cu; }
        if (ctx->pc != 0x1D308Cu) { return; }
    }
    ctx->pc = 0x1D308Cu;
label_1d308c:
    // 0x1d308c: 0xc065d00  jal         func_197400
label_1d3090:
    if (ctx->pc == 0x1D3090u) {
        ctx->pc = 0x1D3094u;
        goto label_1d3094;
    }
    ctx->pc = 0x1D308Cu;
    SET_GPR_U32(ctx, 31, 0x1D3094u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3094u; }
        if (ctx->pc != 0x1D3094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3094u; }
        if (ctx->pc != 0x1D3094u) { return; }
    }
    ctx->pc = 0x1D3094u;
label_1d3094:
    // 0x1d3094: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1d3098:
    if (ctx->pc == 0x1D3098u) {
        ctx->pc = 0x1D309Cu;
        goto label_1d309c;
    }
    ctx->pc = 0x1D3094u;
    {
        const bool branch_taken_0x1d3094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3094) {
            ctx->pc = 0x1D30B8u;
            goto label_1d30b8;
        }
    }
    ctx->pc = 0x1D309Cu;
label_1d309c:
    // 0x1d309c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d309cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d30a0:
    // 0x1d30a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d30a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d30a4:
    // 0x1d30a4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d30a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d30a8:
    // 0x1d30a8: 0xc065478  jal         func_1951E0
label_1d30ac:
    if (ctx->pc == 0x1D30ACu) {
        ctx->pc = 0x1D30ACu;
            // 0x1d30ac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1D30B0u;
        goto label_1d30b0;
    }
    ctx->pc = 0x1D30A8u;
    SET_GPR_U32(ctx, 31, 0x1D30B0u);
    ctx->pc = 0x1D30ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30A8u;
            // 0x1d30ac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30B0u; }
        if (ctx->pc != 0x1D30B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30B0u; }
        if (ctx->pc != 0x1D30B0u) { return; }
    }
    ctx->pc = 0x1D30B0u;
label_1d30b0:
    // 0x1d30b0: 0x10000051  b           . + 4 + (0x51 << 2)
label_1d30b4:
    if (ctx->pc == 0x1D30B4u) {
        ctx->pc = 0x1D30B8u;
        goto label_1d30b8;
    }
    ctx->pc = 0x1D30B0u;
    {
        const bool branch_taken_0x1d30b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d30b0) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D30B8u;
label_1d30b8:
    // 0x1d30b8: 0xc065d00  jal         func_197400
label_1d30bc:
    if (ctx->pc == 0x1D30BCu) {
        ctx->pc = 0x1D30C0u;
        goto label_1d30c0;
    }
    ctx->pc = 0x1D30B8u;
    SET_GPR_U32(ctx, 31, 0x1D30C0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30C0u; }
        if (ctx->pc != 0x1D30C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30C0u; }
        if (ctx->pc != 0x1D30C0u) { return; }
    }
    ctx->pc = 0x1D30C0u;
label_1d30c0:
    // 0x1d30c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d30c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d30c4:
    // 0x1d30c4: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_1d30c8:
    if (ctx->pc == 0x1D30C8u) {
        ctx->pc = 0x1D30CCu;
        goto label_1d30cc;
    }
    ctx->pc = 0x1D30C4u;
    {
        const bool branch_taken_0x1d30c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d30c4) {
            ctx->pc = 0x1D3110u;
            goto label_1d3110;
        }
    }
    ctx->pc = 0x1D30CCu;
label_1d30cc:
    // 0x1d30cc: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x1d30ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_1d30d0:
    // 0x1d30d0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d30d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d30d4:
    // 0x1d30d4: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1d30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_1d30d8:
    // 0x1d30d8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d30d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d30dc:
    // 0x1d30dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d30dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d30e0:
    // 0x1d30e0: 0xc065478  jal         func_1951E0
label_1d30e4:
    if (ctx->pc == 0x1D30E4u) {
        ctx->pc = 0x1D30E4u;
            // 0x1d30e4: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1D30E8u;
        goto label_1d30e8;
    }
    ctx->pc = 0x1D30E0u;
    SET_GPR_U32(ctx, 31, 0x1D30E8u);
    ctx->pc = 0x1D30E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30E0u;
            // 0x1d30e4: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30E8u; }
        if (ctx->pc != 0x1D30E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30E8u; }
        if (ctx->pc != 0x1D30E8u) { return; }
    }
    ctx->pc = 0x1D30E8u;
label_1d30e8:
    // 0x1d30e8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d30e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1d30ec:
    // 0x1d30ec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d30ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d30f0:
    // 0x1d30f0: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1d30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_1d30f4:
    // 0x1d30f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d30f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d30f8:
    // 0x1d30f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d30f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d30fc:
    // 0x1d30fc: 0xc065478  jal         func_1951E0
label_1d3100:
    if (ctx->pc == 0x1D3100u) {
        ctx->pc = 0x1D3100u;
            // 0x1d3100: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1D3104u;
        goto label_1d3104;
    }
    ctx->pc = 0x1D30FCu;
    SET_GPR_U32(ctx, 31, 0x1D3104u);
    ctx->pc = 0x1D3100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30FCu;
            // 0x1d3100: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3104u; }
        if (ctx->pc != 0x1D3104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3104u; }
        if (ctx->pc != 0x1D3104u) { return; }
    }
    ctx->pc = 0x1D3104u;
label_1d3104:
    // 0x1d3104: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1d3108:
    if (ctx->pc == 0x1D3108u) {
        ctx->pc = 0x1D310Cu;
        goto label_1d310c;
    }
    ctx->pc = 0x1D3104u;
    {
        const bool branch_taken_0x1d3104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3104) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D310Cu;
label_1d310c:
    // 0x1d310c: 0x0  nop
    ctx->pc = 0x1d310cu;
    // NOP
label_1d3110:
    // 0x1d3110: 0xc065d00  jal         func_197400
label_1d3114:
    if (ctx->pc == 0x1D3114u) {
        ctx->pc = 0x1D3118u;
        goto label_1d3118;
    }
    ctx->pc = 0x1D3110u;
    SET_GPR_U32(ctx, 31, 0x1D3118u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3118u; }
        if (ctx->pc != 0x1D3118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3118u; }
        if (ctx->pc != 0x1D3118u) { return; }
    }
    ctx->pc = 0x1D3118u;
label_1d3118:
    // 0x1d3118: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d3118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d311c:
    // 0x1d311c: 0x14430036  bne         $v0, $v1, . + 4 + (0x36 << 2)
label_1d3120:
    if (ctx->pc == 0x1D3120u) {
        ctx->pc = 0x1D3124u;
        goto label_1d3124;
    }
    ctx->pc = 0x1D311Cu;
    {
        const bool branch_taken_0x1d311c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d311c) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D3124u;
label_1d3124:
    // 0x1d3124: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x1d3124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
label_1d3128:
    // 0x1d3128: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d3128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d312c:
    // 0x1d312c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d312cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d3130:
    // 0x1d3130: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d3130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3134:
    // 0x1d3134: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d3134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d3138:
    // 0x1d3138: 0xc065478  jal         func_1951E0
label_1d313c:
    if (ctx->pc == 0x1D313Cu) {
        ctx->pc = 0x1D313Cu;
            // 0x1d313c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1D3140u;
        goto label_1d3140;
    }
    ctx->pc = 0x1D3138u;
    SET_GPR_U32(ctx, 31, 0x1D3140u);
    ctx->pc = 0x1D313Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3138u;
            // 0x1d313c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3140u; }
        if (ctx->pc != 0x1D3140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3140u; }
        if (ctx->pc != 0x1D3140u) { return; }
    }
    ctx->pc = 0x1D3140u;
label_1d3140:
    // 0x1d3140: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1d3140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_1d3144:
    // 0x1d3144: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d3144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d3148:
    // 0x1d3148: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d3148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d314c:
    // 0x1d314c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d314cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3150:
    // 0x1d3150: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d3150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d3154:
    // 0x1d3154: 0xc065478  jal         func_1951E0
label_1d3158:
    if (ctx->pc == 0x1D3158u) {
        ctx->pc = 0x1D3158u;
            // 0x1d3158: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1D315Cu;
        goto label_1d315c;
    }
    ctx->pc = 0x1D3154u;
    SET_GPR_U32(ctx, 31, 0x1D315Cu);
    ctx->pc = 0x1D3158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3154u;
            // 0x1d3158: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D315Cu; }
        if (ctx->pc != 0x1D315Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D315Cu; }
        if (ctx->pc != 0x1D315Cu) { return; }
    }
    ctx->pc = 0x1D315Cu;
label_1d315c:
    // 0x1d315c: 0x3c03c020  lui         $v1, 0xC020
    ctx->pc = 0x1d315cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49184 << 16));
label_1d3160:
    // 0x1d3160: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d3160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d3164:
    // 0x1d3164: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1d3164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1d3168:
    // 0x1d3168: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d3168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d316c:
    // 0x1d316c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d316cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d3170:
    // 0x1d3170: 0xc065478  jal         func_1951E0
label_1d3174:
    if (ctx->pc == 0x1D3174u) {
        ctx->pc = 0x1D3174u;
            // 0x1d3174: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1D3178u;
        goto label_1d3178;
    }
    ctx->pc = 0x1D3170u;
    SET_GPR_U32(ctx, 31, 0x1D3178u);
    ctx->pc = 0x1D3174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3170u;
            // 0x1d3174: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3178u; }
        if (ctx->pc != 0x1D3178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3178u; }
        if (ctx->pc != 0x1D3178u) { return; }
    }
    ctx->pc = 0x1D3178u;
label_1d3178:
    // 0x1d3178: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1d3178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_1d317c:
    // 0x1d317c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d317cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d3180:
    // 0x1d3180: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1d3180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1d3184:
    // 0x1d3184: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d3184u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3188:
    // 0x1d3188: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d3188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d318c:
    // 0x1d318c: 0xc065478  jal         func_1951E0
label_1d3190:
    if (ctx->pc == 0x1D3190u) {
        ctx->pc = 0x1D3190u;
            // 0x1d3190: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1D3194u;
        goto label_1d3194;
    }
    ctx->pc = 0x1D318Cu;
    SET_GPR_U32(ctx, 31, 0x1D3194u);
    ctx->pc = 0x1D3190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D318Cu;
            // 0x1d3190: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3194u; }
        if (ctx->pc != 0x1D3194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3194u; }
        if (ctx->pc != 0x1D3194u) { return; }
    }
    ctx->pc = 0x1D3194u;
label_1d3194:
    // 0x1d3194: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x1d3194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
label_1d3198:
    // 0x1d3198: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d3198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d319c:
    // 0x1d319c: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x1d319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_1d31a0:
    // 0x1d31a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d31a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d31a4:
    // 0x1d31a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d31a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d31a8:
    // 0x1d31a8: 0xc065478  jal         func_1951E0
label_1d31ac:
    if (ctx->pc == 0x1D31ACu) {
        ctx->pc = 0x1D31ACu;
            // 0x1d31ac: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1D31B0u;
        goto label_1d31b0;
    }
    ctx->pc = 0x1D31A8u;
    SET_GPR_U32(ctx, 31, 0x1D31B0u);
    ctx->pc = 0x1D31ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31A8u;
            // 0x1d31ac: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31B0u; }
        if (ctx->pc != 0x1D31B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31B0u; }
        if (ctx->pc != 0x1D31B0u) { return; }
    }
    ctx->pc = 0x1D31B0u;
label_1d31b0:
    // 0x1d31b0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1d31b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_1d31b4:
    // 0x1d31b4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d31b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d31b8:
    // 0x1d31b8: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x1d31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_1d31bc:
    // 0x1d31bc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d31bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d31c0:
    // 0x1d31c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d31c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d31c4:
    // 0x1d31c4: 0xc065478  jal         func_1951E0
label_1d31c8:
    if (ctx->pc == 0x1D31C8u) {
        ctx->pc = 0x1D31C8u;
            // 0x1d31c8: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1D31CCu;
        goto label_1d31cc;
    }
    ctx->pc = 0x1D31C4u;
    SET_GPR_U32(ctx, 31, 0x1D31CCu);
    ctx->pc = 0x1D31C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31C4u;
            // 0x1d31c8: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31CCu; }
        if (ctx->pc != 0x1D31CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31CCu; }
        if (ctx->pc != 0x1D31CCu) { return; }
    }
    ctx->pc = 0x1D31CCu;
label_1d31cc:
    // 0x1d31cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d31d0:
    if (ctx->pc == 0x1D31D0u) {
        ctx->pc = 0x1D31D4u;
        goto label_1d31d4;
    }
    ctx->pc = 0x1D31CCu;
    {
        const bool branch_taken_0x1d31cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d31cc) {
            ctx->pc = 0x1D31F8u;
            goto label_1d31f8;
        }
    }
    ctx->pc = 0x1D31D4u;
label_1d31d4:
    // 0x1d31d4: 0x0  nop
    ctx->pc = 0x1d31d4u;
    // NOP
label_1d31d8:
    // 0x1d31d8: 0x3c023f85  lui         $v0, 0x3F85
    ctx->pc = 0x1d31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16261 << 16));
label_1d31dc:
    // 0x1d31dc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d31dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d31e0:
    // 0x1d31e0: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x1d31e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7864u)));
label_1d31e4:
    // 0x1d31e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d31e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d31e8:
    // 0x1d31e8: 0x0  nop
    ctx->pc = 0x1d31e8u;
    // NOP
label_1d31ec:
    // 0x1d31ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d31ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d31f0:
    // 0x1d31f0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d31f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d31f4:
    // 0x1d31f4: 0x0  nop
    ctx->pc = 0x1d31f4u;
    // NOP
label_1d31f8:
    // 0x1d31f8: 0xc04b788  jal         func_12DE20
label_1d31fc:
    if (ctx->pc == 0x1D31FCu) {
        ctx->pc = 0x1D31FCu;
            // 0x1d31fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D3200u;
        goto label_1d3200;
    }
    ctx->pc = 0x1D31F8u;
    SET_GPR_U32(ctx, 31, 0x1D3200u);
    ctx->pc = 0x1D31FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31F8u;
            // 0x1d31fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3200u; }
        if (ctx->pc != 0x1D3200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3200u; }
        if (ctx->pc != 0x1D3200u) { return; }
    }
    ctx->pc = 0x1D3200u;
label_1d3200:
    // 0x1d3200: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d3200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3204:
    // 0x1d3204: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1d3204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d3208:
    // 0x1d3208: 0xc04b7da  jal         func_12DF68
label_1d320c:
    if (ctx->pc == 0x1D320Cu) {
        ctx->pc = 0x1D320Cu;
            // 0x1d320c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3210u;
        goto label_1d3210;
    }
    ctx->pc = 0x1D3208u;
    SET_GPR_U32(ctx, 31, 0x1D3210u);
    ctx->pc = 0x1D320Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3208u;
            // 0x1d320c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3210u; }
        if (ctx->pc != 0x1D3210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3210u; }
        if (ctx->pc != 0x1D3210u) { return; }
    }
    ctx->pc = 0x1D3210u;
label_1d3210:
    // 0x1d3210: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d3210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3214:
    // 0x1d3214: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1d3214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d3218:
    // 0x1d3218: 0xc04b804  jal         func_12E010
label_1d321c:
    if (ctx->pc == 0x1D321Cu) {
        ctx->pc = 0x1D321Cu;
            // 0x1d321c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3220u;
        goto label_1d3220;
    }
    ctx->pc = 0x1D3218u;
    SET_GPR_U32(ctx, 31, 0x1D3220u);
    ctx->pc = 0x1D321Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3218u;
            // 0x1d321c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3220u; }
        if (ctx->pc != 0x1D3220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3220u; }
        if (ctx->pc != 0x1D3220u) { return; }
    }
    ctx->pc = 0x1D3220u;
label_1d3220:
    // 0x1d3220: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d3220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3224:
    // 0x1d3224: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1d3224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d3228:
    // 0x1d3228: 0xc04b7b0  jal         func_12DEC0
label_1d322c:
    if (ctx->pc == 0x1D322Cu) {
        ctx->pc = 0x1D322Cu;
            // 0x1d322c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3230u;
        goto label_1d3230;
    }
    ctx->pc = 0x1D3228u;
    SET_GPR_U32(ctx, 31, 0x1D3230u);
    ctx->pc = 0x1D322Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3228u;
            // 0x1d322c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3230u; }
        if (ctx->pc != 0x1D3230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3230u; }
        if (ctx->pc != 0x1D3230u) { return; }
    }
    ctx->pc = 0x1D3230u;
label_1d3230:
    // 0x1d3230: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d3230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3234:
    // 0x1d3234: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d3234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3238:
    // 0x1d3238: 0xc04b75e  jal         func_12DD78
label_1d323c:
    if (ctx->pc == 0x1D323Cu) {
        ctx->pc = 0x1D323Cu;
            // 0x1d323c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1D3240u;
        goto label_1d3240;
    }
    ctx->pc = 0x1D3238u;
    SET_GPR_U32(ctx, 31, 0x1D3240u);
    ctx->pc = 0x1D323Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3238u;
            // 0x1d323c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3240u; }
        if (ctx->pc != 0x1D3240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3240u; }
        if (ctx->pc != 0x1D3240u) { return; }
    }
    ctx->pc = 0x1D3240u;
label_1d3240:
    // 0x1d3240: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d3240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d3244:
    // 0x1d3244: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d3244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d3248:
    // 0x1d3248: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1d3248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d324c:
    // 0x1d324c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1d3250:
    if (ctx->pc == 0x1D3250u) {
        ctx->pc = 0x1D3254u;
        goto label_1d3254;
    }
    ctx->pc = 0x1D324Cu;
    {
        const bool branch_taken_0x1d324c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d324c) {
            ctx->pc = 0x1D32A0u;
            goto label_1d32a0;
        }
    }
    ctx->pc = 0x1D3254u;
label_1d3254:
    // 0x1d3254: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1d3254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1d3258:
    // 0x1d3258: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d325c:
    if (ctx->pc == 0x1D325Cu) {
        ctx->pc = 0x1D3260u;
        goto label_1d3260;
    }
    ctx->pc = 0x1D3258u;
    {
        const bool branch_taken_0x1d3258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3258) {
            ctx->pc = 0x1D3270u;
            goto label_1d3270;
        }
    }
    ctx->pc = 0x1D3260u;
label_1d3260:
    // 0x1d3260: 0xc0604f0  jal         func_1813C0
label_1d3264:
    if (ctx->pc == 0x1D3264u) {
        ctx->pc = 0x1D3264u;
            // 0x1d3264: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D3268u;
        goto label_1d3268;
    }
    ctx->pc = 0x1D3260u;
    SET_GPR_U32(ctx, 31, 0x1D3268u);
    ctx->pc = 0x1D3264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3260u;
            // 0x1d3264: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3268u; }
        if (ctx->pc != 0x1D3268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3268u; }
        if (ctx->pc != 0x1D3268u) { return; }
    }
    ctx->pc = 0x1D3268u;
label_1d3268:
    // 0x1d3268: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d326c:
    if (ctx->pc == 0x1D326Cu) {
        ctx->pc = 0x1D3270u;
        goto label_1d3270;
    }
    ctx->pc = 0x1D3268u;
    {
        const bool branch_taken_0x1d3268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3268) {
            ctx->pc = 0x1D3278u;
            goto label_1d3278;
        }
    }
    ctx->pc = 0x1D3270u;
label_1d3270:
    // 0x1d3270: 0xc0604dc  jal         func_181370
label_1d3274:
    if (ctx->pc == 0x1D3274u) {
        ctx->pc = 0x1D3274u;
            // 0x1d3274: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D3278u;
        goto label_1d3278;
    }
    ctx->pc = 0x1D3270u;
    SET_GPR_U32(ctx, 31, 0x1D3278u);
    ctx->pc = 0x1D3274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3270u;
            // 0x1d3274: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3278u; }
        if (ctx->pc != 0x1D3278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3278u; }
        if (ctx->pc != 0x1D3278u) { return; }
    }
    ctx->pc = 0x1D3278u;
label_1d3278:
    // 0x1d3278: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1d3278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1d327c:
    // 0x1d327c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d3280:
    if (ctx->pc == 0x1D3280u) {
        ctx->pc = 0x1D3284u;
        goto label_1d3284;
    }
    ctx->pc = 0x1D327Cu;
    {
        const bool branch_taken_0x1d327c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d327c) {
            ctx->pc = 0x1D3290u;
            goto label_1d3290;
        }
    }
    ctx->pc = 0x1D3284u;
label_1d3284:
    // 0x1d3284: 0x10000022  b           . + 4 + (0x22 << 2)
label_1d3288:
    if (ctx->pc == 0x1D3288u) {
        ctx->pc = 0x1D3288u;
            // 0x1d3288: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x1D328Cu;
        goto label_1d328c;
    }
    ctx->pc = 0x1D3284u;
    {
        const bool branch_taken_0x1d3284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3284u;
            // 0x1d3288: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3284) {
            ctx->pc = 0x1D3310u;
            goto label_1d3310;
        }
    }
    ctx->pc = 0x1D328Cu;
label_1d328c:
    // 0x1d328c: 0x0  nop
    ctx->pc = 0x1d328cu;
    // NOP
label_1d3290:
    // 0x1d3290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3294:
    // 0x1d3294: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1d3298:
    if (ctx->pc == 0x1D3298u) {
        ctx->pc = 0x1D3298u;
            // 0x1d3298: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1D329Cu;
        goto label_1d329c;
    }
    ctx->pc = 0x1D3294u;
    {
        const bool branch_taken_0x1d3294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3294u;
            // 0x1d3298: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3294) {
            ctx->pc = 0x1D3310u;
            goto label_1d3310;
        }
    }
    ctx->pc = 0x1D329Cu;
label_1d329c:
    // 0x1d329c: 0x0  nop
    ctx->pc = 0x1d329cu;
    // NOP
label_1d32a0:
    // 0x1d32a0: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x1d32a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
label_1d32a4:
    // 0x1d32a4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1d32a8:
    if (ctx->pc == 0x1D32A8u) {
        ctx->pc = 0x1D32ACu;
        goto label_1d32ac;
    }
    ctx->pc = 0x1D32A4u;
    {
        const bool branch_taken_0x1d32a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d32a4) {
            ctx->pc = 0x1D3300u;
            goto label_1d3300;
        }
    }
    ctx->pc = 0x1D32ACu;
label_1d32ac:
    // 0x1d32ac: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d32acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d32b0:
    // 0x1d32b0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d32b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d32b4:
    // 0x1d32b4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d32b4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d32b8:
    // 0x1d32b8: 0x0  nop
    ctx->pc = 0x1d32b8u;
    // NOP
label_1d32bc:
    // 0x1d32bc: 0x0  nop
    ctx->pc = 0x1d32bcu;
    // NOP
label_1d32c0:
    // 0x1d32c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1d32c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d32c4:
    // 0x1d32c4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1d32c8:
    if (ctx->pc == 0x1D32C8u) {
        ctx->pc = 0x1D32CCu;
        goto label_1d32cc;
    }
    ctx->pc = 0x1D32C4u;
    {
        const bool branch_taken_0x1d32c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d32c4) {
            ctx->pc = 0x1D3300u;
            goto label_1d3300;
        }
    }
    ctx->pc = 0x1D32CCu;
label_1d32cc:
    // 0x1d32cc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1d32ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d32d0:
    // 0x1d32d0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1d32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1d32d4:
    // 0x1d32d4: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1d32d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1d32d8:
    // 0x1d32d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d32d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d32dc:
    // 0x1d32dc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d32dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d32e0:
    // 0x1d32e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d32e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d32e4:
    // 0x1d32e4: 0xc0536d8  jal         func_14DB60
label_1d32e8:
    if (ctx->pc == 0x1D32E8u) {
        ctx->pc = 0x1D32E8u;
            // 0x1d32e8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1D32ECu;
        goto label_1d32ec;
    }
    ctx->pc = 0x1D32E4u;
    SET_GPR_U32(ctx, 31, 0x1D32ECu);
    ctx->pc = 0x1D32E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D32E4u;
            // 0x1d32e8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D32ECu; }
        if (ctx->pc != 0x1D32ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D32ECu; }
        if (ctx->pc != 0x1D32ECu) { return; }
    }
    ctx->pc = 0x1D32ECu;
label_1d32ec:
    // 0x1d32ec: 0xc060500  jal         func_181400
label_1d32f0:
    if (ctx->pc == 0x1D32F0u) {
        ctx->pc = 0x1D32F0u;
            // 0x1d32f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D32F4u;
        goto label_1d32f4;
    }
    ctx->pc = 0x1D32ECu;
    SET_GPR_U32(ctx, 31, 0x1D32F4u);
    ctx->pc = 0x1D32F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D32ECu;
            // 0x1d32f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D32F4u; }
        if (ctx->pc != 0x1D32F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D32F4u; }
        if (ctx->pc != 0x1D32F4u) { return; }
    }
    ctx->pc = 0x1D32F4u;
label_1d32f4:
    // 0x1d32f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d32f8:
    if (ctx->pc == 0x1D32F8u) {
        ctx->pc = 0x1D32FCu;
        goto label_1d32fc;
    }
    ctx->pc = 0x1D32F4u;
    {
        const bool branch_taken_0x1d32f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d32f4) {
            ctx->pc = 0x1D3308u;
            goto label_1d3308;
        }
    }
    ctx->pc = 0x1D32FCu;
label_1d32fc:
    // 0x1d32fc: 0x0  nop
    ctx->pc = 0x1d32fcu;
    // NOP
label_1d3300:
    // 0x1d3300: 0xc0604dc  jal         func_181370
label_1d3304:
    if (ctx->pc == 0x1D3304u) {
        ctx->pc = 0x1D3304u;
            // 0x1d3304: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D3308u;
        goto label_1d3308;
    }
    ctx->pc = 0x1D3300u;
    SET_GPR_U32(ctx, 31, 0x1D3308u);
    ctx->pc = 0x1D3304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3300u;
            // 0x1d3304: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3308u; }
        if (ctx->pc != 0x1D3308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3308u; }
        if (ctx->pc != 0x1D3308u) { return; }
    }
    ctx->pc = 0x1D3308u;
label_1d3308:
    // 0x1d3308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d330c:
    // 0x1d330c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d330cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d3310:
    // 0x1d3310: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d3310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d3314:
    // 0x1d3314: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x1d3314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
label_1d3318:
    // 0x1d3318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d331c:
    // 0x1d331c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d331cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1d3320:
    // 0x1d3320: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d3320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d3324:
    // 0x1d3324: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x1d3324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
label_1d3328:
    // 0x1d3328: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d332c:
    // 0x1d332c: 0x0  nop
    ctx->pc = 0x1d332cu;
    // NOP
label_1d3330:
    // 0x1d3330: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d3330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d3334:
    // 0x1d3334: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1d3334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1d3338:
    // 0x1d3338: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d3338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d333c:
    // 0x1d333c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1d333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1d3340:
    // 0x1d3340: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3344:
    // 0x1d3344: 0x0  nop
    ctx->pc = 0x1d3344u;
    // NOP
label_1d3348:
    // 0x1d3348: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d3348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d334c:
    // 0x1d334c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1d334cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1d3350:
    // 0x1d3350: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d3350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d3354:
    // 0x1d3354: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1d3354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1d3358:
    // 0x1d3358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d335c:
    // 0x1d335c: 0x0  nop
    ctx->pc = 0x1d335cu;
    // NOP
label_1d3360:
    // 0x1d3360: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d3360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d3364:
    // 0x1d3364: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1d3364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1d3368:
    // 0x1d3368: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d3368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d336c:
    // 0x1d336c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1d336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1d3370:
    // 0x1d3370: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3374:
    // 0x1d3374: 0x0  nop
    ctx->pc = 0x1d3374u;
    // NOP
label_1d3378:
    // 0x1d3378: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d3378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d337c:
    // 0x1d337c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1d337cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1d3380:
    // 0x1d3380: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d3380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d3384:
    // 0x1d3384: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d3388:
    // 0x1d3388: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1d3388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1d338c:
    // 0x1d338c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d338cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3390:
    // 0x1d3390: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d3390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3394:
    // 0x1d3394: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d3394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3398:
    // 0x1d3398: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d339c:
    if (ctx->pc == 0x1D339Cu) {
        ctx->pc = 0x1D33A0u;
        goto label_1d33a0;
    }
    ctx->pc = 0x1D3398u;
    {
        const bool branch_taken_0x1d3398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3398) {
            ctx->pc = 0x1D33B8u;
            goto label_1d33b8;
        }
    }
    ctx->pc = 0x1D33A0u;
label_1d33a0:
    // 0x1d33a0: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1d33a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1d33a4:
    // 0x1d33a4: 0x40f809  jalr        $v0
label_1d33a8:
    if (ctx->pc == 0x1D33A8u) {
        ctx->pc = 0x1D33A8u;
            // 0x1d33a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D33ACu;
        goto label_1d33ac;
    }
    ctx->pc = 0x1D33A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D33ACu);
        ctx->pc = 0x1D33A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D33A4u;
            // 0x1d33a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D29A0u: goto label_1d29a0;
            case 0x1D29A4u: goto label_1d29a4;
            case 0x1D29A8u: goto label_1d29a8;
            case 0x1D29ACu: goto label_1d29ac;
            case 0x1D29B0u: goto label_1d29b0;
            case 0x1D29B4u: goto label_1d29b4;
            case 0x1D29B8u: goto label_1d29b8;
            case 0x1D29BCu: goto label_1d29bc;
            case 0x1D29C0u: goto label_1d29c0;
            case 0x1D29C4u: goto label_1d29c4;
            case 0x1D29C8u: goto label_1d29c8;
            case 0x1D29CCu: goto label_1d29cc;
            case 0x1D29D0u: goto label_1d29d0;
            case 0x1D29D4u: goto label_1d29d4;
            case 0x1D29D8u: goto label_1d29d8;
            case 0x1D29DCu: goto label_1d29dc;
            case 0x1D29E0u: goto label_1d29e0;
            case 0x1D29E4u: goto label_1d29e4;
            case 0x1D29E8u: goto label_1d29e8;
            case 0x1D29ECu: goto label_1d29ec;
            case 0x1D29F0u: goto label_1d29f0;
            case 0x1D29F4u: goto label_1d29f4;
            case 0x1D29F8u: goto label_1d29f8;
            case 0x1D29FCu: goto label_1d29fc;
            case 0x1D2A00u: goto label_1d2a00;
            case 0x1D2A04u: goto label_1d2a04;
            case 0x1D2A08u: goto label_1d2a08;
            case 0x1D2A0Cu: goto label_1d2a0c;
            case 0x1D2A10u: goto label_1d2a10;
            case 0x1D2A14u: goto label_1d2a14;
            case 0x1D2A18u: goto label_1d2a18;
            case 0x1D2A1Cu: goto label_1d2a1c;
            case 0x1D2A20u: goto label_1d2a20;
            case 0x1D2A24u: goto label_1d2a24;
            case 0x1D2A28u: goto label_1d2a28;
            case 0x1D2A2Cu: goto label_1d2a2c;
            case 0x1D2A30u: goto label_1d2a30;
            case 0x1D2A34u: goto label_1d2a34;
            case 0x1D2A38u: goto label_1d2a38;
            case 0x1D2A3Cu: goto label_1d2a3c;
            case 0x1D2A40u: goto label_1d2a40;
            case 0x1D2A44u: goto label_1d2a44;
            case 0x1D2A48u: goto label_1d2a48;
            case 0x1D2A4Cu: goto label_1d2a4c;
            case 0x1D2A50u: goto label_1d2a50;
            case 0x1D2A54u: goto label_1d2a54;
            case 0x1D2A58u: goto label_1d2a58;
            case 0x1D2A5Cu: goto label_1d2a5c;
            case 0x1D2A60u: goto label_1d2a60;
            case 0x1D2A64u: goto label_1d2a64;
            case 0x1D2A68u: goto label_1d2a68;
            case 0x1D2A6Cu: goto label_1d2a6c;
            case 0x1D2A70u: goto label_1d2a70;
            case 0x1D2A74u: goto label_1d2a74;
            case 0x1D2A78u: goto label_1d2a78;
            case 0x1D2A7Cu: goto label_1d2a7c;
            case 0x1D2A80u: goto label_1d2a80;
            case 0x1D2A84u: goto label_1d2a84;
            case 0x1D2A88u: goto label_1d2a88;
            case 0x1D2A8Cu: goto label_1d2a8c;
            case 0x1D2A90u: goto label_1d2a90;
            case 0x1D2A94u: goto label_1d2a94;
            case 0x1D2A98u: goto label_1d2a98;
            case 0x1D2A9Cu: goto label_1d2a9c;
            case 0x1D2AA0u: goto label_1d2aa0;
            case 0x1D2AA4u: goto label_1d2aa4;
            case 0x1D2AA8u: goto label_1d2aa8;
            case 0x1D2AACu: goto label_1d2aac;
            case 0x1D2AB0u: goto label_1d2ab0;
            case 0x1D2AB4u: goto label_1d2ab4;
            case 0x1D2AB8u: goto label_1d2ab8;
            case 0x1D2ABCu: goto label_1d2abc;
            case 0x1D2AC0u: goto label_1d2ac0;
            case 0x1D2AC4u: goto label_1d2ac4;
            case 0x1D2AC8u: goto label_1d2ac8;
            case 0x1D2ACCu: goto label_1d2acc;
            case 0x1D2AD0u: goto label_1d2ad0;
            case 0x1D2AD4u: goto label_1d2ad4;
            case 0x1D2AD8u: goto label_1d2ad8;
            case 0x1D2ADCu: goto label_1d2adc;
            case 0x1D2AE0u: goto label_1d2ae0;
            case 0x1D2AE4u: goto label_1d2ae4;
            case 0x1D2AE8u: goto label_1d2ae8;
            case 0x1D2AECu: goto label_1d2aec;
            case 0x1D2AF0u: goto label_1d2af0;
            case 0x1D2AF4u: goto label_1d2af4;
            case 0x1D2AF8u: goto label_1d2af8;
            case 0x1D2AFCu: goto label_1d2afc;
            case 0x1D2B00u: goto label_1d2b00;
            case 0x1D2B04u: goto label_1d2b04;
            case 0x1D2B08u: goto label_1d2b08;
            case 0x1D2B0Cu: goto label_1d2b0c;
            case 0x1D2B10u: goto label_1d2b10;
            case 0x1D2B14u: goto label_1d2b14;
            case 0x1D2B18u: goto label_1d2b18;
            case 0x1D2B1Cu: goto label_1d2b1c;
            case 0x1D2B20u: goto label_1d2b20;
            case 0x1D2B24u: goto label_1d2b24;
            case 0x1D2B28u: goto label_1d2b28;
            case 0x1D2B2Cu: goto label_1d2b2c;
            case 0x1D2B30u: goto label_1d2b30;
            case 0x1D2B34u: goto label_1d2b34;
            case 0x1D2B38u: goto label_1d2b38;
            case 0x1D2B3Cu: goto label_1d2b3c;
            case 0x1D2B40u: goto label_1d2b40;
            case 0x1D2B44u: goto label_1d2b44;
            case 0x1D2B48u: goto label_1d2b48;
            case 0x1D2B4Cu: goto label_1d2b4c;
            case 0x1D2B50u: goto label_1d2b50;
            case 0x1D2B54u: goto label_1d2b54;
            case 0x1D2B58u: goto label_1d2b58;
            case 0x1D2B5Cu: goto label_1d2b5c;
            case 0x1D2B60u: goto label_1d2b60;
            case 0x1D2B64u: goto label_1d2b64;
            case 0x1D2B68u: goto label_1d2b68;
            case 0x1D2B6Cu: goto label_1d2b6c;
            case 0x1D2B70u: goto label_1d2b70;
            case 0x1D2B74u: goto label_1d2b74;
            case 0x1D2B78u: goto label_1d2b78;
            case 0x1D2B7Cu: goto label_1d2b7c;
            case 0x1D2B80u: goto label_1d2b80;
            case 0x1D2B84u: goto label_1d2b84;
            case 0x1D2B88u: goto label_1d2b88;
            case 0x1D2B8Cu: goto label_1d2b8c;
            case 0x1D2B90u: goto label_1d2b90;
            case 0x1D2B94u: goto label_1d2b94;
            case 0x1D2B98u: goto label_1d2b98;
            case 0x1D2B9Cu: goto label_1d2b9c;
            case 0x1D2BA0u: goto label_1d2ba0;
            case 0x1D2BA4u: goto label_1d2ba4;
            case 0x1D2BA8u: goto label_1d2ba8;
            case 0x1D2BACu: goto label_1d2bac;
            case 0x1D2BB0u: goto label_1d2bb0;
            case 0x1D2BB4u: goto label_1d2bb4;
            case 0x1D2BB8u: goto label_1d2bb8;
            case 0x1D2BBCu: goto label_1d2bbc;
            case 0x1D2BC0u: goto label_1d2bc0;
            case 0x1D2BC4u: goto label_1d2bc4;
            case 0x1D2BC8u: goto label_1d2bc8;
            case 0x1D2BCCu: goto label_1d2bcc;
            case 0x1D2BD0u: goto label_1d2bd0;
            case 0x1D2BD4u: goto label_1d2bd4;
            case 0x1D2BD8u: goto label_1d2bd8;
            case 0x1D2BDCu: goto label_1d2bdc;
            case 0x1D2BE0u: goto label_1d2be0;
            case 0x1D2BE4u: goto label_1d2be4;
            case 0x1D2BE8u: goto label_1d2be8;
            case 0x1D2BECu: goto label_1d2bec;
            case 0x1D2BF0u: goto label_1d2bf0;
            case 0x1D2BF4u: goto label_1d2bf4;
            case 0x1D2BF8u: goto label_1d2bf8;
            case 0x1D2BFCu: goto label_1d2bfc;
            case 0x1D2C00u: goto label_1d2c00;
            case 0x1D2C04u: goto label_1d2c04;
            case 0x1D2C08u: goto label_1d2c08;
            case 0x1D2C0Cu: goto label_1d2c0c;
            case 0x1D2C10u: goto label_1d2c10;
            case 0x1D2C14u: goto label_1d2c14;
            case 0x1D2C18u: goto label_1d2c18;
            case 0x1D2C1Cu: goto label_1d2c1c;
            case 0x1D2C20u: goto label_1d2c20;
            case 0x1D2C24u: goto label_1d2c24;
            case 0x1D2C28u: goto label_1d2c28;
            case 0x1D2C2Cu: goto label_1d2c2c;
            case 0x1D2C30u: goto label_1d2c30;
            case 0x1D2C34u: goto label_1d2c34;
            case 0x1D2C38u: goto label_1d2c38;
            case 0x1D2C3Cu: goto label_1d2c3c;
            case 0x1D2C40u: goto label_1d2c40;
            case 0x1D2C44u: goto label_1d2c44;
            case 0x1D2C48u: goto label_1d2c48;
            case 0x1D2C4Cu: goto label_1d2c4c;
            case 0x1D2C50u: goto label_1d2c50;
            case 0x1D2C54u: goto label_1d2c54;
            case 0x1D2C58u: goto label_1d2c58;
            case 0x1D2C5Cu: goto label_1d2c5c;
            case 0x1D2C60u: goto label_1d2c60;
            case 0x1D2C64u: goto label_1d2c64;
            case 0x1D2C68u: goto label_1d2c68;
            case 0x1D2C6Cu: goto label_1d2c6c;
            case 0x1D2C70u: goto label_1d2c70;
            case 0x1D2C74u: goto label_1d2c74;
            case 0x1D2C78u: goto label_1d2c78;
            case 0x1D2C7Cu: goto label_1d2c7c;
            case 0x1D2C80u: goto label_1d2c80;
            case 0x1D2C84u: goto label_1d2c84;
            case 0x1D2C88u: goto label_1d2c88;
            case 0x1D2C8Cu: goto label_1d2c8c;
            case 0x1D2C90u: goto label_1d2c90;
            case 0x1D2C94u: goto label_1d2c94;
            case 0x1D2C98u: goto label_1d2c98;
            case 0x1D2C9Cu: goto label_1d2c9c;
            case 0x1D2CA0u: goto label_1d2ca0;
            case 0x1D2CA4u: goto label_1d2ca4;
            case 0x1D2CA8u: goto label_1d2ca8;
            case 0x1D2CACu: goto label_1d2cac;
            case 0x1D2CB0u: goto label_1d2cb0;
            case 0x1D2CB4u: goto label_1d2cb4;
            case 0x1D2CB8u: goto label_1d2cb8;
            case 0x1D2CBCu: goto label_1d2cbc;
            case 0x1D2CC0u: goto label_1d2cc0;
            case 0x1D2CC4u: goto label_1d2cc4;
            case 0x1D2CC8u: goto label_1d2cc8;
            case 0x1D2CCCu: goto label_1d2ccc;
            case 0x1D2CD0u: goto label_1d2cd0;
            case 0x1D2CD4u: goto label_1d2cd4;
            case 0x1D2CD8u: goto label_1d2cd8;
            case 0x1D2CDCu: goto label_1d2cdc;
            case 0x1D2CE0u: goto label_1d2ce0;
            case 0x1D2CE4u: goto label_1d2ce4;
            case 0x1D2CE8u: goto label_1d2ce8;
            case 0x1D2CECu: goto label_1d2cec;
            case 0x1D2CF0u: goto label_1d2cf0;
            case 0x1D2CF4u: goto label_1d2cf4;
            case 0x1D2CF8u: goto label_1d2cf8;
            case 0x1D2CFCu: goto label_1d2cfc;
            case 0x1D2D00u: goto label_1d2d00;
            case 0x1D2D04u: goto label_1d2d04;
            case 0x1D2D08u: goto label_1d2d08;
            case 0x1D2D0Cu: goto label_1d2d0c;
            case 0x1D2D10u: goto label_1d2d10;
            case 0x1D2D14u: goto label_1d2d14;
            case 0x1D2D18u: goto label_1d2d18;
            case 0x1D2D1Cu: goto label_1d2d1c;
            case 0x1D2D20u: goto label_1d2d20;
            case 0x1D2D24u: goto label_1d2d24;
            case 0x1D2D28u: goto label_1d2d28;
            case 0x1D2D2Cu: goto label_1d2d2c;
            case 0x1D2D30u: goto label_1d2d30;
            case 0x1D2D34u: goto label_1d2d34;
            case 0x1D2D38u: goto label_1d2d38;
            case 0x1D2D3Cu: goto label_1d2d3c;
            case 0x1D2D40u: goto label_1d2d40;
            case 0x1D2D44u: goto label_1d2d44;
            case 0x1D2D48u: goto label_1d2d48;
            case 0x1D2D4Cu: goto label_1d2d4c;
            case 0x1D2D50u: goto label_1d2d50;
            case 0x1D2D54u: goto label_1d2d54;
            case 0x1D2D58u: goto label_1d2d58;
            case 0x1D2D5Cu: goto label_1d2d5c;
            case 0x1D2D60u: goto label_1d2d60;
            case 0x1D2D64u: goto label_1d2d64;
            case 0x1D2D68u: goto label_1d2d68;
            case 0x1D2D6Cu: goto label_1d2d6c;
            case 0x1D2D70u: goto label_1d2d70;
            case 0x1D2D74u: goto label_1d2d74;
            case 0x1D2D78u: goto label_1d2d78;
            case 0x1D2D7Cu: goto label_1d2d7c;
            case 0x1D2D80u: goto label_1d2d80;
            case 0x1D2D84u: goto label_1d2d84;
            case 0x1D2D88u: goto label_1d2d88;
            case 0x1D2D8Cu: goto label_1d2d8c;
            case 0x1D2D90u: goto label_1d2d90;
            case 0x1D2D94u: goto label_1d2d94;
            case 0x1D2D98u: goto label_1d2d98;
            case 0x1D2D9Cu: goto label_1d2d9c;
            case 0x1D2DA0u: goto label_1d2da0;
            case 0x1D2DA4u: goto label_1d2da4;
            case 0x1D2DA8u: goto label_1d2da8;
            case 0x1D2DACu: goto label_1d2dac;
            case 0x1D2DB0u: goto label_1d2db0;
            case 0x1D2DB4u: goto label_1d2db4;
            case 0x1D2DB8u: goto label_1d2db8;
            case 0x1D2DBCu: goto label_1d2dbc;
            case 0x1D2DC0u: goto label_1d2dc0;
            case 0x1D2DC4u: goto label_1d2dc4;
            case 0x1D2DC8u: goto label_1d2dc8;
            case 0x1D2DCCu: goto label_1d2dcc;
            case 0x1D2DD0u: goto label_1d2dd0;
            case 0x1D2DD4u: goto label_1d2dd4;
            case 0x1D2DD8u: goto label_1d2dd8;
            case 0x1D2DDCu: goto label_1d2ddc;
            case 0x1D2DE0u: goto label_1d2de0;
            case 0x1D2DE4u: goto label_1d2de4;
            case 0x1D2DE8u: goto label_1d2de8;
            case 0x1D2DECu: goto label_1d2dec;
            case 0x1D2DF0u: goto label_1d2df0;
            case 0x1D2DF4u: goto label_1d2df4;
            case 0x1D2DF8u: goto label_1d2df8;
            case 0x1D2DFCu: goto label_1d2dfc;
            case 0x1D2E00u: goto label_1d2e00;
            case 0x1D2E04u: goto label_1d2e04;
            case 0x1D2E08u: goto label_1d2e08;
            case 0x1D2E0Cu: goto label_1d2e0c;
            case 0x1D2E10u: goto label_1d2e10;
            case 0x1D2E14u: goto label_1d2e14;
            case 0x1D2E18u: goto label_1d2e18;
            case 0x1D2E1Cu: goto label_1d2e1c;
            case 0x1D2E20u: goto label_1d2e20;
            case 0x1D2E24u: goto label_1d2e24;
            case 0x1D2E28u: goto label_1d2e28;
            case 0x1D2E2Cu: goto label_1d2e2c;
            case 0x1D2E30u: goto label_1d2e30;
            case 0x1D2E34u: goto label_1d2e34;
            case 0x1D2E38u: goto label_1d2e38;
            case 0x1D2E3Cu: goto label_1d2e3c;
            case 0x1D2E40u: goto label_1d2e40;
            case 0x1D2E44u: goto label_1d2e44;
            case 0x1D2E48u: goto label_1d2e48;
            case 0x1D2E4Cu: goto label_1d2e4c;
            case 0x1D2E50u: goto label_1d2e50;
            case 0x1D2E54u: goto label_1d2e54;
            case 0x1D2E58u: goto label_1d2e58;
            case 0x1D2E5Cu: goto label_1d2e5c;
            case 0x1D2E60u: goto label_1d2e60;
            case 0x1D2E64u: goto label_1d2e64;
            case 0x1D2E68u: goto label_1d2e68;
            case 0x1D2E6Cu: goto label_1d2e6c;
            case 0x1D2E70u: goto label_1d2e70;
            case 0x1D2E74u: goto label_1d2e74;
            case 0x1D2E78u: goto label_1d2e78;
            case 0x1D2E7Cu: goto label_1d2e7c;
            case 0x1D2E80u: goto label_1d2e80;
            case 0x1D2E84u: goto label_1d2e84;
            case 0x1D2E88u: goto label_1d2e88;
            case 0x1D2E8Cu: goto label_1d2e8c;
            case 0x1D2E90u: goto label_1d2e90;
            case 0x1D2E94u: goto label_1d2e94;
            case 0x1D2E98u: goto label_1d2e98;
            case 0x1D2E9Cu: goto label_1d2e9c;
            case 0x1D2EA0u: goto label_1d2ea0;
            case 0x1D2EA4u: goto label_1d2ea4;
            case 0x1D2EA8u: goto label_1d2ea8;
            case 0x1D2EACu: goto label_1d2eac;
            case 0x1D2EB0u: goto label_1d2eb0;
            case 0x1D2EB4u: goto label_1d2eb4;
            case 0x1D2EB8u: goto label_1d2eb8;
            case 0x1D2EBCu: goto label_1d2ebc;
            case 0x1D2EC0u: goto label_1d2ec0;
            case 0x1D2EC4u: goto label_1d2ec4;
            case 0x1D2EC8u: goto label_1d2ec8;
            case 0x1D2ECCu: goto label_1d2ecc;
            case 0x1D2ED0u: goto label_1d2ed0;
            case 0x1D2ED4u: goto label_1d2ed4;
            case 0x1D2ED8u: goto label_1d2ed8;
            case 0x1D2EDCu: goto label_1d2edc;
            case 0x1D2EE0u: goto label_1d2ee0;
            case 0x1D2EE4u: goto label_1d2ee4;
            case 0x1D2EE8u: goto label_1d2ee8;
            case 0x1D2EECu: goto label_1d2eec;
            case 0x1D2EF0u: goto label_1d2ef0;
            case 0x1D2EF4u: goto label_1d2ef4;
            case 0x1D2EF8u: goto label_1d2ef8;
            case 0x1D2EFCu: goto label_1d2efc;
            case 0x1D2F00u: goto label_1d2f00;
            case 0x1D2F04u: goto label_1d2f04;
            case 0x1D2F08u: goto label_1d2f08;
            case 0x1D2F0Cu: goto label_1d2f0c;
            case 0x1D2F10u: goto label_1d2f10;
            case 0x1D2F14u: goto label_1d2f14;
            case 0x1D2F18u: goto label_1d2f18;
            case 0x1D2F1Cu: goto label_1d2f1c;
            case 0x1D2F20u: goto label_1d2f20;
            case 0x1D2F24u: goto label_1d2f24;
            case 0x1D2F28u: goto label_1d2f28;
            case 0x1D2F2Cu: goto label_1d2f2c;
            case 0x1D2F30u: goto label_1d2f30;
            case 0x1D2F34u: goto label_1d2f34;
            case 0x1D2F38u: goto label_1d2f38;
            case 0x1D2F3Cu: goto label_1d2f3c;
            case 0x1D2F40u: goto label_1d2f40;
            case 0x1D2F44u: goto label_1d2f44;
            case 0x1D2F48u: goto label_1d2f48;
            case 0x1D2F4Cu: goto label_1d2f4c;
            case 0x1D2F50u: goto label_1d2f50;
            case 0x1D2F54u: goto label_1d2f54;
            case 0x1D2F58u: goto label_1d2f58;
            case 0x1D2F5Cu: goto label_1d2f5c;
            case 0x1D2F60u: goto label_1d2f60;
            case 0x1D2F64u: goto label_1d2f64;
            case 0x1D2F68u: goto label_1d2f68;
            case 0x1D2F6Cu: goto label_1d2f6c;
            case 0x1D2F70u: goto label_1d2f70;
            case 0x1D2F74u: goto label_1d2f74;
            case 0x1D2F78u: goto label_1d2f78;
            case 0x1D2F7Cu: goto label_1d2f7c;
            case 0x1D2F80u: goto label_1d2f80;
            case 0x1D2F84u: goto label_1d2f84;
            case 0x1D2F88u: goto label_1d2f88;
            case 0x1D2F8Cu: goto label_1d2f8c;
            case 0x1D2F90u: goto label_1d2f90;
            case 0x1D2F94u: goto label_1d2f94;
            case 0x1D2F98u: goto label_1d2f98;
            case 0x1D2F9Cu: goto label_1d2f9c;
            case 0x1D2FA0u: goto label_1d2fa0;
            case 0x1D2FA4u: goto label_1d2fa4;
            case 0x1D2FA8u: goto label_1d2fa8;
            case 0x1D2FACu: goto label_1d2fac;
            case 0x1D2FB0u: goto label_1d2fb0;
            case 0x1D2FB4u: goto label_1d2fb4;
            case 0x1D2FB8u: goto label_1d2fb8;
            case 0x1D2FBCu: goto label_1d2fbc;
            case 0x1D2FC0u: goto label_1d2fc0;
            case 0x1D2FC4u: goto label_1d2fc4;
            case 0x1D2FC8u: goto label_1d2fc8;
            case 0x1D2FCCu: goto label_1d2fcc;
            case 0x1D2FD0u: goto label_1d2fd0;
            case 0x1D2FD4u: goto label_1d2fd4;
            case 0x1D2FD8u: goto label_1d2fd8;
            case 0x1D2FDCu: goto label_1d2fdc;
            case 0x1D2FE0u: goto label_1d2fe0;
            case 0x1D2FE4u: goto label_1d2fe4;
            case 0x1D2FE8u: goto label_1d2fe8;
            case 0x1D2FECu: goto label_1d2fec;
            case 0x1D2FF0u: goto label_1d2ff0;
            case 0x1D2FF4u: goto label_1d2ff4;
            case 0x1D2FF8u: goto label_1d2ff8;
            case 0x1D2FFCu: goto label_1d2ffc;
            case 0x1D3000u: goto label_1d3000;
            case 0x1D3004u: goto label_1d3004;
            case 0x1D3008u: goto label_1d3008;
            case 0x1D300Cu: goto label_1d300c;
            case 0x1D3010u: goto label_1d3010;
            case 0x1D3014u: goto label_1d3014;
            case 0x1D3018u: goto label_1d3018;
            case 0x1D301Cu: goto label_1d301c;
            case 0x1D3020u: goto label_1d3020;
            case 0x1D3024u: goto label_1d3024;
            case 0x1D3028u: goto label_1d3028;
            case 0x1D302Cu: goto label_1d302c;
            case 0x1D3030u: goto label_1d3030;
            case 0x1D3034u: goto label_1d3034;
            case 0x1D3038u: goto label_1d3038;
            case 0x1D303Cu: goto label_1d303c;
            case 0x1D3040u: goto label_1d3040;
            case 0x1D3044u: goto label_1d3044;
            case 0x1D3048u: goto label_1d3048;
            case 0x1D304Cu: goto label_1d304c;
            case 0x1D3050u: goto label_1d3050;
            case 0x1D3054u: goto label_1d3054;
            case 0x1D3058u: goto label_1d3058;
            case 0x1D305Cu: goto label_1d305c;
            case 0x1D3060u: goto label_1d3060;
            case 0x1D3064u: goto label_1d3064;
            case 0x1D3068u: goto label_1d3068;
            case 0x1D306Cu: goto label_1d306c;
            case 0x1D3070u: goto label_1d3070;
            case 0x1D3074u: goto label_1d3074;
            case 0x1D3078u: goto label_1d3078;
            case 0x1D307Cu: goto label_1d307c;
            case 0x1D3080u: goto label_1d3080;
            case 0x1D3084u: goto label_1d3084;
            case 0x1D3088u: goto label_1d3088;
            case 0x1D308Cu: goto label_1d308c;
            case 0x1D3090u: goto label_1d3090;
            case 0x1D3094u: goto label_1d3094;
            case 0x1D3098u: goto label_1d3098;
            case 0x1D309Cu: goto label_1d309c;
            case 0x1D30A0u: goto label_1d30a0;
            case 0x1D30A4u: goto label_1d30a4;
            case 0x1D30A8u: goto label_1d30a8;
            case 0x1D30ACu: goto label_1d30ac;
            case 0x1D30B0u: goto label_1d30b0;
            case 0x1D30B4u: goto label_1d30b4;
            case 0x1D30B8u: goto label_1d30b8;
            case 0x1D30BCu: goto label_1d30bc;
            case 0x1D30C0u: goto label_1d30c0;
            case 0x1D30C4u: goto label_1d30c4;
            case 0x1D30C8u: goto label_1d30c8;
            case 0x1D30CCu: goto label_1d30cc;
            case 0x1D30D0u: goto label_1d30d0;
            case 0x1D30D4u: goto label_1d30d4;
            case 0x1D30D8u: goto label_1d30d8;
            case 0x1D30DCu: goto label_1d30dc;
            case 0x1D30E0u: goto label_1d30e0;
            case 0x1D30E4u: goto label_1d30e4;
            case 0x1D30E8u: goto label_1d30e8;
            case 0x1D30ECu: goto label_1d30ec;
            case 0x1D30F0u: goto label_1d30f0;
            case 0x1D30F4u: goto label_1d30f4;
            case 0x1D30F8u: goto label_1d30f8;
            case 0x1D30FCu: goto label_1d30fc;
            case 0x1D3100u: goto label_1d3100;
            case 0x1D3104u: goto label_1d3104;
            case 0x1D3108u: goto label_1d3108;
            case 0x1D310Cu: goto label_1d310c;
            case 0x1D3110u: goto label_1d3110;
            case 0x1D3114u: goto label_1d3114;
            case 0x1D3118u: goto label_1d3118;
            case 0x1D311Cu: goto label_1d311c;
            case 0x1D3120u: goto label_1d3120;
            case 0x1D3124u: goto label_1d3124;
            case 0x1D3128u: goto label_1d3128;
            case 0x1D312Cu: goto label_1d312c;
            case 0x1D3130u: goto label_1d3130;
            case 0x1D3134u: goto label_1d3134;
            case 0x1D3138u: goto label_1d3138;
            case 0x1D313Cu: goto label_1d313c;
            case 0x1D3140u: goto label_1d3140;
            case 0x1D3144u: goto label_1d3144;
            case 0x1D3148u: goto label_1d3148;
            case 0x1D314Cu: goto label_1d314c;
            case 0x1D3150u: goto label_1d3150;
            case 0x1D3154u: goto label_1d3154;
            case 0x1D3158u: goto label_1d3158;
            case 0x1D315Cu: goto label_1d315c;
            case 0x1D3160u: goto label_1d3160;
            case 0x1D3164u: goto label_1d3164;
            case 0x1D3168u: goto label_1d3168;
            case 0x1D316Cu: goto label_1d316c;
            case 0x1D3170u: goto label_1d3170;
            case 0x1D3174u: goto label_1d3174;
            case 0x1D3178u: goto label_1d3178;
            case 0x1D317Cu: goto label_1d317c;
            case 0x1D3180u: goto label_1d3180;
            case 0x1D3184u: goto label_1d3184;
            case 0x1D3188u: goto label_1d3188;
            case 0x1D318Cu: goto label_1d318c;
            case 0x1D3190u: goto label_1d3190;
            case 0x1D3194u: goto label_1d3194;
            case 0x1D3198u: goto label_1d3198;
            case 0x1D319Cu: goto label_1d319c;
            case 0x1D31A0u: goto label_1d31a0;
            case 0x1D31A4u: goto label_1d31a4;
            case 0x1D31A8u: goto label_1d31a8;
            case 0x1D31ACu: goto label_1d31ac;
            case 0x1D31B0u: goto label_1d31b0;
            case 0x1D31B4u: goto label_1d31b4;
            case 0x1D31B8u: goto label_1d31b8;
            case 0x1D31BCu: goto label_1d31bc;
            case 0x1D31C0u: goto label_1d31c0;
            case 0x1D31C4u: goto label_1d31c4;
            case 0x1D31C8u: goto label_1d31c8;
            case 0x1D31CCu: goto label_1d31cc;
            case 0x1D31D0u: goto label_1d31d0;
            case 0x1D31D4u: goto label_1d31d4;
            case 0x1D31D8u: goto label_1d31d8;
            case 0x1D31DCu: goto label_1d31dc;
            case 0x1D31E0u: goto label_1d31e0;
            case 0x1D31E4u: goto label_1d31e4;
            case 0x1D31E8u: goto label_1d31e8;
            case 0x1D31ECu: goto label_1d31ec;
            case 0x1D31F0u: goto label_1d31f0;
            case 0x1D31F4u: goto label_1d31f4;
            case 0x1D31F8u: goto label_1d31f8;
            case 0x1D31FCu: goto label_1d31fc;
            case 0x1D3200u: goto label_1d3200;
            case 0x1D3204u: goto label_1d3204;
            case 0x1D3208u: goto label_1d3208;
            case 0x1D320Cu: goto label_1d320c;
            case 0x1D3210u: goto label_1d3210;
            case 0x1D3214u: goto label_1d3214;
            case 0x1D3218u: goto label_1d3218;
            case 0x1D321Cu: goto label_1d321c;
            case 0x1D3220u: goto label_1d3220;
            case 0x1D3224u: goto label_1d3224;
            case 0x1D3228u: goto label_1d3228;
            case 0x1D322Cu: goto label_1d322c;
            case 0x1D3230u: goto label_1d3230;
            case 0x1D3234u: goto label_1d3234;
            case 0x1D3238u: goto label_1d3238;
            case 0x1D323Cu: goto label_1d323c;
            case 0x1D3240u: goto label_1d3240;
            case 0x1D3244u: goto label_1d3244;
            case 0x1D3248u: goto label_1d3248;
            case 0x1D324Cu: goto label_1d324c;
            case 0x1D3250u: goto label_1d3250;
            case 0x1D3254u: goto label_1d3254;
            case 0x1D3258u: goto label_1d3258;
            case 0x1D325Cu: goto label_1d325c;
            case 0x1D3260u: goto label_1d3260;
            case 0x1D3264u: goto label_1d3264;
            case 0x1D3268u: goto label_1d3268;
            case 0x1D326Cu: goto label_1d326c;
            case 0x1D3270u: goto label_1d3270;
            case 0x1D3274u: goto label_1d3274;
            case 0x1D3278u: goto label_1d3278;
            case 0x1D327Cu: goto label_1d327c;
            case 0x1D3280u: goto label_1d3280;
            case 0x1D3284u: goto label_1d3284;
            case 0x1D3288u: goto label_1d3288;
            case 0x1D328Cu: goto label_1d328c;
            case 0x1D3290u: goto label_1d3290;
            case 0x1D3294u: goto label_1d3294;
            case 0x1D3298u: goto label_1d3298;
            case 0x1D329Cu: goto label_1d329c;
            case 0x1D32A0u: goto label_1d32a0;
            case 0x1D32A4u: goto label_1d32a4;
            case 0x1D32A8u: goto label_1d32a8;
            case 0x1D32ACu: goto label_1d32ac;
            case 0x1D32B0u: goto label_1d32b0;
            case 0x1D32B4u: goto label_1d32b4;
            case 0x1D32B8u: goto label_1d32b8;
            case 0x1D32BCu: goto label_1d32bc;
            case 0x1D32C0u: goto label_1d32c0;
            case 0x1D32C4u: goto label_1d32c4;
            case 0x1D32C8u: goto label_1d32c8;
            case 0x1D32CCu: goto label_1d32cc;
            case 0x1D32D0u: goto label_1d32d0;
            case 0x1D32D4u: goto label_1d32d4;
            case 0x1D32D8u: goto label_1d32d8;
            case 0x1D32DCu: goto label_1d32dc;
            case 0x1D32E0u: goto label_1d32e0;
            case 0x1D32E4u: goto label_1d32e4;
            case 0x1D32E8u: goto label_1d32e8;
            case 0x1D32ECu: goto label_1d32ec;
            case 0x1D32F0u: goto label_1d32f0;
            case 0x1D32F4u: goto label_1d32f4;
            case 0x1D32F8u: goto label_1d32f8;
            case 0x1D32FCu: goto label_1d32fc;
            case 0x1D3300u: goto label_1d3300;
            case 0x1D3304u: goto label_1d3304;
            case 0x1D3308u: goto label_1d3308;
            case 0x1D330Cu: goto label_1d330c;
            case 0x1D3310u: goto label_1d3310;
            case 0x1D3314u: goto label_1d3314;
            case 0x1D3318u: goto label_1d3318;
            case 0x1D331Cu: goto label_1d331c;
            case 0x1D3320u: goto label_1d3320;
            case 0x1D3324u: goto label_1d3324;
            case 0x1D3328u: goto label_1d3328;
            case 0x1D332Cu: goto label_1d332c;
            case 0x1D3330u: goto label_1d3330;
            case 0x1D3334u: goto label_1d3334;
            case 0x1D3338u: goto label_1d3338;
            case 0x1D333Cu: goto label_1d333c;
            case 0x1D3340u: goto label_1d3340;
            case 0x1D3344u: goto label_1d3344;
            case 0x1D3348u: goto label_1d3348;
            case 0x1D334Cu: goto label_1d334c;
            case 0x1D3350u: goto label_1d3350;
            case 0x1D3354u: goto label_1d3354;
            case 0x1D3358u: goto label_1d3358;
            case 0x1D335Cu: goto label_1d335c;
            case 0x1D3360u: goto label_1d3360;
            case 0x1D3364u: goto label_1d3364;
            case 0x1D3368u: goto label_1d3368;
            case 0x1D336Cu: goto label_1d336c;
            case 0x1D3370u: goto label_1d3370;
            case 0x1D3374u: goto label_1d3374;
            case 0x1D3378u: goto label_1d3378;
            case 0x1D337Cu: goto label_1d337c;
            case 0x1D3380u: goto label_1d3380;
            case 0x1D3384u: goto label_1d3384;
            case 0x1D3388u: goto label_1d3388;
            case 0x1D338Cu: goto label_1d338c;
            case 0x1D3390u: goto label_1d3390;
            case 0x1D3394u: goto label_1d3394;
            case 0x1D3398u: goto label_1d3398;
            case 0x1D339Cu: goto label_1d339c;
            case 0x1D33A0u: goto label_1d33a0;
            case 0x1D33A4u: goto label_1d33a4;
            case 0x1D33A8u: goto label_1d33a8;
            case 0x1D33ACu: goto label_1d33ac;
            case 0x1D33B0u: goto label_1d33b0;
            case 0x1D33B4u: goto label_1d33b4;
            case 0x1D33B8u: goto label_1d33b8;
            case 0x1D33BCu: goto label_1d33bc;
            case 0x1D33C0u: goto label_1d33c0;
            case 0x1D33C4u: goto label_1d33c4;
            case 0x1D33C8u: goto label_1d33c8;
            case 0x1D33CCu: goto label_1d33cc;
            case 0x1D33D0u: goto label_1d33d0;
            case 0x1D33D4u: goto label_1d33d4;
            case 0x1D33D8u: goto label_1d33d8;
            case 0x1D33DCu: goto label_1d33dc;
            case 0x1D33E0u: goto label_1d33e0;
            case 0x1D33E4u: goto label_1d33e4;
            case 0x1D33E8u: goto label_1d33e8;
            case 0x1D33ECu: goto label_1d33ec;
            case 0x1D33F0u: goto label_1d33f0;
            case 0x1D33F4u: goto label_1d33f4;
            case 0x1D33F8u: goto label_1d33f8;
            case 0x1D33FCu: goto label_1d33fc;
            case 0x1D3400u: goto label_1d3400;
            case 0x1D3404u: goto label_1d3404;
            case 0x1D3408u: goto label_1d3408;
            case 0x1D340Cu: goto label_1d340c;
            case 0x1D3410u: goto label_1d3410;
            case 0x1D3414u: goto label_1d3414;
            case 0x1D3418u: goto label_1d3418;
            case 0x1D341Cu: goto label_1d341c;
            case 0x1D3420u: goto label_1d3420;
            case 0x1D3424u: goto label_1d3424;
            case 0x1D3428u: goto label_1d3428;
            case 0x1D342Cu: goto label_1d342c;
            case 0x1D3430u: goto label_1d3430;
            case 0x1D3434u: goto label_1d3434;
            case 0x1D3438u: goto label_1d3438;
            case 0x1D343Cu: goto label_1d343c;
            case 0x1D3440u: goto label_1d3440;
            case 0x1D3444u: goto label_1d3444;
            case 0x1D3448u: goto label_1d3448;
            case 0x1D344Cu: goto label_1d344c;
            case 0x1D3450u: goto label_1d3450;
            case 0x1D3454u: goto label_1d3454;
            case 0x1D3458u: goto label_1d3458;
            case 0x1D345Cu: goto label_1d345c;
            case 0x1D3460u: goto label_1d3460;
            case 0x1D3464u: goto label_1d3464;
            case 0x1D3468u: goto label_1d3468;
            case 0x1D346Cu: goto label_1d346c;
            case 0x1D3470u: goto label_1d3470;
            case 0x1D3474u: goto label_1d3474;
            case 0x1D3478u: goto label_1d3478;
            case 0x1D347Cu: goto label_1d347c;
            case 0x1D3480u: goto label_1d3480;
            case 0x1D3484u: goto label_1d3484;
            case 0x1D3488u: goto label_1d3488;
            case 0x1D348Cu: goto label_1d348c;
            case 0x1D3490u: goto label_1d3490;
            case 0x1D3494u: goto label_1d3494;
            case 0x1D3498u: goto label_1d3498;
            case 0x1D349Cu: goto label_1d349c;
            case 0x1D34A0u: goto label_1d34a0;
            case 0x1D34A4u: goto label_1d34a4;
            case 0x1D34A8u: goto label_1d34a8;
            case 0x1D34ACu: goto label_1d34ac;
            case 0x1D34B0u: goto label_1d34b0;
            case 0x1D34B4u: goto label_1d34b4;
            case 0x1D34B8u: goto label_1d34b8;
            case 0x1D34BCu: goto label_1d34bc;
            case 0x1D34C0u: goto label_1d34c0;
            case 0x1D34C4u: goto label_1d34c4;
            case 0x1D34C8u: goto label_1d34c8;
            case 0x1D34CCu: goto label_1d34cc;
            case 0x1D34D0u: goto label_1d34d0;
            case 0x1D34D4u: goto label_1d34d4;
            case 0x1D34D8u: goto label_1d34d8;
            case 0x1D34DCu: goto label_1d34dc;
            case 0x1D34E0u: goto label_1d34e0;
            case 0x1D34E4u: goto label_1d34e4;
            case 0x1D34E8u: goto label_1d34e8;
            case 0x1D34ECu: goto label_1d34ec;
            case 0x1D34F0u: goto label_1d34f0;
            case 0x1D34F4u: goto label_1d34f4;
            case 0x1D34F8u: goto label_1d34f8;
            case 0x1D34FCu: goto label_1d34fc;
            case 0x1D3500u: goto label_1d3500;
            case 0x1D3504u: goto label_1d3504;
            case 0x1D3508u: goto label_1d3508;
            case 0x1D350Cu: goto label_1d350c;
            case 0x1D3510u: goto label_1d3510;
            case 0x1D3514u: goto label_1d3514;
            case 0x1D3518u: goto label_1d3518;
            case 0x1D351Cu: goto label_1d351c;
            case 0x1D3520u: goto label_1d3520;
            case 0x1D3524u: goto label_1d3524;
            case 0x1D3528u: goto label_1d3528;
            case 0x1D352Cu: goto label_1d352c;
            case 0x1D3530u: goto label_1d3530;
            case 0x1D3534u: goto label_1d3534;
            case 0x1D3538u: goto label_1d3538;
            case 0x1D353Cu: goto label_1d353c;
            case 0x1D3540u: goto label_1d3540;
            case 0x1D3544u: goto label_1d3544;
            case 0x1D3548u: goto label_1d3548;
            case 0x1D354Cu: goto label_1d354c;
            case 0x1D3550u: goto label_1d3550;
            case 0x1D3554u: goto label_1d3554;
            case 0x1D3558u: goto label_1d3558;
            case 0x1D355Cu: goto label_1d355c;
            case 0x1D3560u: goto label_1d3560;
            case 0x1D3564u: goto label_1d3564;
            case 0x1D3568u: goto label_1d3568;
            case 0x1D356Cu: goto label_1d356c;
            case 0x1D3570u: goto label_1d3570;
            case 0x1D3574u: goto label_1d3574;
            case 0x1D3578u: goto label_1d3578;
            case 0x1D357Cu: goto label_1d357c;
            case 0x1D3580u: goto label_1d3580;
            case 0x1D3584u: goto label_1d3584;
            case 0x1D3588u: goto label_1d3588;
            case 0x1D358Cu: goto label_1d358c;
            case 0x1D3590u: goto label_1d3590;
            case 0x1D3594u: goto label_1d3594;
            case 0x1D3598u: goto label_1d3598;
            case 0x1D359Cu: goto label_1d359c;
            case 0x1D35A0u: goto label_1d35a0;
            case 0x1D35A4u: goto label_1d35a4;
            case 0x1D35A8u: goto label_1d35a8;
            case 0x1D35ACu: goto label_1d35ac;
            case 0x1D35B0u: goto label_1d35b0;
            case 0x1D35B4u: goto label_1d35b4;
            case 0x1D35B8u: goto label_1d35b8;
            case 0x1D35BCu: goto label_1d35bc;
            case 0x1D35C0u: goto label_1d35c0;
            case 0x1D35C4u: goto label_1d35c4;
            case 0x1D35C8u: goto label_1d35c8;
            case 0x1D35CCu: goto label_1d35cc;
            case 0x1D35D0u: goto label_1d35d0;
            case 0x1D35D4u: goto label_1d35d4;
            case 0x1D35D8u: goto label_1d35d8;
            case 0x1D35DCu: goto label_1d35dc;
            case 0x1D35E0u: goto label_1d35e0;
            case 0x1D35E4u: goto label_1d35e4;
            case 0x1D35E8u: goto label_1d35e8;
            case 0x1D35ECu: goto label_1d35ec;
            case 0x1D35F0u: goto label_1d35f0;
            case 0x1D35F4u: goto label_1d35f4;
            case 0x1D35F8u: goto label_1d35f8;
            case 0x1D35FCu: goto label_1d35fc;
            case 0x1D3600u: goto label_1d3600;
            case 0x1D3604u: goto label_1d3604;
            case 0x1D3608u: goto label_1d3608;
            case 0x1D360Cu: goto label_1d360c;
            case 0x1D3610u: goto label_1d3610;
            case 0x1D3614u: goto label_1d3614;
            case 0x1D3618u: goto label_1d3618;
            case 0x1D361Cu: goto label_1d361c;
            case 0x1D3620u: goto label_1d3620;
            case 0x1D3624u: goto label_1d3624;
            case 0x1D3628u: goto label_1d3628;
            case 0x1D362Cu: goto label_1d362c;
            case 0x1D3630u: goto label_1d3630;
            case 0x1D3634u: goto label_1d3634;
            case 0x1D3638u: goto label_1d3638;
            case 0x1D363Cu: goto label_1d363c;
            case 0x1D3640u: goto label_1d3640;
            case 0x1D3644u: goto label_1d3644;
            case 0x1D3648u: goto label_1d3648;
            case 0x1D364Cu: goto label_1d364c;
            case 0x1D3650u: goto label_1d3650;
            case 0x1D3654u: goto label_1d3654;
            case 0x1D3658u: goto label_1d3658;
            case 0x1D365Cu: goto label_1d365c;
            case 0x1D3660u: goto label_1d3660;
            case 0x1D3664u: goto label_1d3664;
            case 0x1D3668u: goto label_1d3668;
            case 0x1D366Cu: goto label_1d366c;
            case 0x1D3670u: goto label_1d3670;
            case 0x1D3674u: goto label_1d3674;
            case 0x1D3678u: goto label_1d3678;
            case 0x1D367Cu: goto label_1d367c;
            case 0x1D3680u: goto label_1d3680;
            case 0x1D3684u: goto label_1d3684;
            case 0x1D3688u: goto label_1d3688;
            case 0x1D368Cu: goto label_1d368c;
            case 0x1D3690u: goto label_1d3690;
            case 0x1D3694u: goto label_1d3694;
            case 0x1D3698u: goto label_1d3698;
            case 0x1D369Cu: goto label_1d369c;
            case 0x1D36A0u: goto label_1d36a0;
            case 0x1D36A4u: goto label_1d36a4;
            case 0x1D36A8u: goto label_1d36a8;
            case 0x1D36ACu: goto label_1d36ac;
            case 0x1D36B0u: goto label_1d36b0;
            case 0x1D36B4u: goto label_1d36b4;
            case 0x1D36B8u: goto label_1d36b8;
            case 0x1D36BCu: goto label_1d36bc;
            case 0x1D36C0u: goto label_1d36c0;
            case 0x1D36C4u: goto label_1d36c4;
            case 0x1D36C8u: goto label_1d36c8;
            case 0x1D36CCu: goto label_1d36cc;
            case 0x1D36D0u: goto label_1d36d0;
            case 0x1D36D4u: goto label_1d36d4;
            case 0x1D36D8u: goto label_1d36d8;
            case 0x1D36DCu: goto label_1d36dc;
            case 0x1D36E0u: goto label_1d36e0;
            case 0x1D36E4u: goto label_1d36e4;
            case 0x1D36E8u: goto label_1d36e8;
            case 0x1D36ECu: goto label_1d36ec;
            case 0x1D36F0u: goto label_1d36f0;
            case 0x1D36F4u: goto label_1d36f4;
            case 0x1D36F8u: goto label_1d36f8;
            case 0x1D36FCu: goto label_1d36fc;
            case 0x1D3700u: goto label_1d3700;
            case 0x1D3704u: goto label_1d3704;
            case 0x1D3708u: goto label_1d3708;
            case 0x1D370Cu: goto label_1d370c;
            case 0x1D3710u: goto label_1d3710;
            case 0x1D3714u: goto label_1d3714;
            case 0x1D3718u: goto label_1d3718;
            case 0x1D371Cu: goto label_1d371c;
            case 0x1D3720u: goto label_1d3720;
            case 0x1D3724u: goto label_1d3724;
            case 0x1D3728u: goto label_1d3728;
            case 0x1D372Cu: goto label_1d372c;
            case 0x1D3730u: goto label_1d3730;
            case 0x1D3734u: goto label_1d3734;
            case 0x1D3738u: goto label_1d3738;
            case 0x1D373Cu: goto label_1d373c;
            case 0x1D3740u: goto label_1d3740;
            case 0x1D3744u: goto label_1d3744;
            case 0x1D3748u: goto label_1d3748;
            case 0x1D374Cu: goto label_1d374c;
            case 0x1D3750u: goto label_1d3750;
            case 0x1D3754u: goto label_1d3754;
            case 0x1D3758u: goto label_1d3758;
            case 0x1D375Cu: goto label_1d375c;
            case 0x1D3760u: goto label_1d3760;
            case 0x1D3764u: goto label_1d3764;
            case 0x1D3768u: goto label_1d3768;
            case 0x1D376Cu: goto label_1d376c;
            case 0x1D3770u: goto label_1d3770;
            case 0x1D3774u: goto label_1d3774;
            case 0x1D3778u: goto label_1d3778;
            case 0x1D377Cu: goto label_1d377c;
            case 0x1D3780u: goto label_1d3780;
            case 0x1D3784u: goto label_1d3784;
            case 0x1D3788u: goto label_1d3788;
            case 0x1D378Cu: goto label_1d378c;
            case 0x1D3790u: goto label_1d3790;
            case 0x1D3794u: goto label_1d3794;
            case 0x1D3798u: goto label_1d3798;
            case 0x1D379Cu: goto label_1d379c;
            case 0x1D37A0u: goto label_1d37a0;
            case 0x1D37A4u: goto label_1d37a4;
            case 0x1D37A8u: goto label_1d37a8;
            case 0x1D37ACu: goto label_1d37ac;
            case 0x1D37B0u: goto label_1d37b0;
            case 0x1D37B4u: goto label_1d37b4;
            case 0x1D37B8u: goto label_1d37b8;
            case 0x1D37BCu: goto label_1d37bc;
            case 0x1D37C0u: goto label_1d37c0;
            case 0x1D37C4u: goto label_1d37c4;
            case 0x1D37C8u: goto label_1d37c8;
            case 0x1D37CCu: goto label_1d37cc;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D37D4u: goto label_1d37d4;
            case 0x1D37D8u: goto label_1d37d8;
            case 0x1D37DCu: goto label_1d37dc;
            case 0x1D37E0u: goto label_1d37e0;
            case 0x1D37E4u: goto label_1d37e4;
            case 0x1D37E8u: goto label_1d37e8;
            case 0x1D37ECu: goto label_1d37ec;
            case 0x1D37F0u: goto label_1d37f0;
            case 0x1D37F4u: goto label_1d37f4;
            case 0x1D37F8u: goto label_1d37f8;
            case 0x1D37FCu: goto label_1d37fc;
            case 0x1D3800u: goto label_1d3800;
            case 0x1D3804u: goto label_1d3804;
            case 0x1D3808u: goto label_1d3808;
            case 0x1D380Cu: goto label_1d380c;
            case 0x1D3810u: goto label_1d3810;
            case 0x1D3814u: goto label_1d3814;
            case 0x1D3818u: goto label_1d3818;
            case 0x1D381Cu: goto label_1d381c;
            case 0x1D3820u: goto label_1d3820;
            case 0x1D3824u: goto label_1d3824;
            case 0x1D3828u: goto label_1d3828;
            case 0x1D382Cu: goto label_1d382c;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3834u: goto label_1d3834;
            case 0x1D3838u: goto label_1d3838;
            case 0x1D383Cu: goto label_1d383c;
            case 0x1D3840u: goto label_1d3840;
            case 0x1D3844u: goto label_1d3844;
            case 0x1D3848u: goto label_1d3848;
            case 0x1D384Cu: goto label_1d384c;
            case 0x1D3850u: goto label_1d3850;
            case 0x1D3854u: goto label_1d3854;
            case 0x1D3858u: goto label_1d3858;
            case 0x1D385Cu: goto label_1d385c;
            case 0x1D3860u: goto label_1d3860;
            case 0x1D3864u: goto label_1d3864;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D386Cu: goto label_1d386c;
            case 0x1D3870u: goto label_1d3870;
            case 0x1D3874u: goto label_1d3874;
            case 0x1D3878u: goto label_1d3878;
            case 0x1D387Cu: goto label_1d387c;
            case 0x1D3880u: goto label_1d3880;
            case 0x1D3884u: goto label_1d3884;
            case 0x1D3888u: goto label_1d3888;
            case 0x1D388Cu: goto label_1d388c;
            case 0x1D3890u: goto label_1d3890;
            case 0x1D3894u: goto label_1d3894;
            case 0x1D3898u: goto label_1d3898;
            case 0x1D389Cu: goto label_1d389c;
            case 0x1D38A0u: goto label_1d38a0;
            case 0x1D38A4u: goto label_1d38a4;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38ACu: goto label_1d38ac;
            case 0x1D38B0u: goto label_1d38b0;
            case 0x1D38B4u: goto label_1d38b4;
            case 0x1D38B8u: goto label_1d38b8;
            case 0x1D38BCu: goto label_1d38bc;
            case 0x1D38C0u: goto label_1d38c0;
            case 0x1D38C4u: goto label_1d38c4;
            case 0x1D38C8u: goto label_1d38c8;
            case 0x1D38CCu: goto label_1d38cc;
            case 0x1D38D0u: goto label_1d38d0;
            case 0x1D38D4u: goto label_1d38d4;
            case 0x1D38D8u: goto label_1d38d8;
            case 0x1D38DCu: goto label_1d38dc;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D38E4u: goto label_1d38e4;
            case 0x1D38E8u: goto label_1d38e8;
            case 0x1D38ECu: goto label_1d38ec;
            case 0x1D38F0u: goto label_1d38f0;
            case 0x1D38F4u: goto label_1d38f4;
            case 0x1D38F8u: goto label_1d38f8;
            case 0x1D38FCu: goto label_1d38fc;
            case 0x1D3900u: goto label_1d3900;
            case 0x1D3904u: goto label_1d3904;
            case 0x1D3908u: goto label_1d3908;
            case 0x1D390Cu: goto label_1d390c;
            case 0x1D3910u: goto label_1d3910;
            case 0x1D3914u: goto label_1d3914;
            case 0x1D3918u: goto label_1d3918;
            case 0x1D391Cu: goto label_1d391c;
            case 0x1D3920u: goto label_1d3920;
            case 0x1D3924u: goto label_1d3924;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3930u: goto label_1d3930;
            case 0x1D3934u: goto label_1d3934;
            case 0x1D3938u: goto label_1d3938;
            case 0x1D393Cu: goto label_1d393c;
            case 0x1D3940u: goto label_1d3940;
            case 0x1D3944u: goto label_1d3944;
            case 0x1D3948u: goto label_1d3948;
            case 0x1D394Cu: goto label_1d394c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3954u: goto label_1d3954;
            case 0x1D3958u: goto label_1d3958;
            case 0x1D395Cu: goto label_1d395c;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3964u: goto label_1d3964;
            case 0x1D3968u: goto label_1d3968;
            case 0x1D396Cu: goto label_1d396c;
            case 0x1D3970u: goto label_1d3970;
            case 0x1D3974u: goto label_1d3974;
            case 0x1D3978u: goto label_1d3978;
            case 0x1D397Cu: goto label_1d397c;
            case 0x1D3980u: goto label_1d3980;
            case 0x1D3984u: goto label_1d3984;
            case 0x1D3988u: goto label_1d3988;
            case 0x1D398Cu: goto label_1d398c;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D3994u: goto label_1d3994;
            case 0x1D3998u: goto label_1d3998;
            case 0x1D399Cu: goto label_1d399c;
            case 0x1D39A0u: goto label_1d39a0;
            case 0x1D39A4u: goto label_1d39a4;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39ACu: goto label_1d39ac;
            case 0x1D39B0u: goto label_1d39b0;
            case 0x1D39B4u: goto label_1d39b4;
            case 0x1D39B8u: goto label_1d39b8;
            case 0x1D39BCu: goto label_1d39bc;
            case 0x1D39C0u: goto label_1d39c0;
            case 0x1D39C4u: goto label_1d39c4;
            case 0x1D39C8u: goto label_1d39c8;
            case 0x1D39CCu: goto label_1d39cc;
            case 0x1D39D0u: goto label_1d39d0;
            case 0x1D39D4u: goto label_1d39d4;
            case 0x1D39D8u: goto label_1d39d8;
            case 0x1D39DCu: goto label_1d39dc;
            case 0x1D39E0u: goto label_1d39e0;
            case 0x1D39E4u: goto label_1d39e4;
            case 0x1D39E8u: goto label_1d39e8;
            case 0x1D39ECu: goto label_1d39ec;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D39F4u: goto label_1d39f4;
            case 0x1D39F8u: goto label_1d39f8;
            case 0x1D39FCu: goto label_1d39fc;
            case 0x1D3A00u: goto label_1d3a00;
            case 0x1D3A04u: goto label_1d3a04;
            case 0x1D3A08u: goto label_1d3a08;
            case 0x1D3A0Cu: goto label_1d3a0c;
            case 0x1D3A10u: goto label_1d3a10;
            case 0x1D3A14u: goto label_1d3a14;
            case 0x1D3A18u: goto label_1d3a18;
            case 0x1D3A1Cu: goto label_1d3a1c;
            case 0x1D3A20u: goto label_1d3a20;
            case 0x1D3A24u: goto label_1d3a24;
            case 0x1D3A28u: goto label_1d3a28;
            case 0x1D3A2Cu: goto label_1d3a2c;
            case 0x1D3A30u: goto label_1d3a30;
            case 0x1D3A34u: goto label_1d3a34;
            case 0x1D3A38u: goto label_1d3a38;
            case 0x1D3A3Cu: goto label_1d3a3c;
            case 0x1D3A40u: goto label_1d3a40;
            case 0x1D3A44u: goto label_1d3a44;
            case 0x1D3A48u: goto label_1d3a48;
            case 0x1D3A4Cu: goto label_1d3a4c;
            case 0x1D3A50u: goto label_1d3a50;
            case 0x1D3A54u: goto label_1d3a54;
            case 0x1D3A58u: goto label_1d3a58;
            case 0x1D3A5Cu: goto label_1d3a5c;
            case 0x1D3A60u: goto label_1d3a60;
            case 0x1D3A64u: goto label_1d3a64;
            case 0x1D3A68u: goto label_1d3a68;
            case 0x1D3A6Cu: goto label_1d3a6c;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A74u: goto label_1d3a74;
            case 0x1D3A78u: goto label_1d3a78;
            case 0x1D3A7Cu: goto label_1d3a7c;
            case 0x1D3A80u: goto label_1d3a80;
            case 0x1D3A84u: goto label_1d3a84;
            case 0x1D3A88u: goto label_1d3a88;
            case 0x1D3A8Cu: goto label_1d3a8c;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3A94u: goto label_1d3a94;
            case 0x1D3A98u: goto label_1d3a98;
            case 0x1D3A9Cu: goto label_1d3a9c;
            case 0x1D3AA0u: goto label_1d3aa0;
            case 0x1D3AA4u: goto label_1d3aa4;
            case 0x1D3AA8u: goto label_1d3aa8;
            case 0x1D3AACu: goto label_1d3aac;
            case 0x1D3AB0u: goto label_1d3ab0;
            case 0x1D3AB4u: goto label_1d3ab4;
            case 0x1D3AB8u: goto label_1d3ab8;
            case 0x1D3ABCu: goto label_1d3abc;
            case 0x1D3AC0u: goto label_1d3ac0;
            case 0x1D3AC4u: goto label_1d3ac4;
            case 0x1D3AC8u: goto label_1d3ac8;
            case 0x1D3ACCu: goto label_1d3acc;
            case 0x1D3AD0u: goto label_1d3ad0;
            case 0x1D3AD4u: goto label_1d3ad4;
            case 0x1D3AD8u: goto label_1d3ad8;
            case 0x1D3ADCu: goto label_1d3adc;
            case 0x1D3AE0u: goto label_1d3ae0;
            case 0x1D3AE4u: goto label_1d3ae4;
            case 0x1D3AE8u: goto label_1d3ae8;
            case 0x1D3AECu: goto label_1d3aec;
            case 0x1D3AF0u: goto label_1d3af0;
            case 0x1D3AF4u: goto label_1d3af4;
            case 0x1D3AF8u: goto label_1d3af8;
            case 0x1D3AFCu: goto label_1d3afc;
            case 0x1D3B00u: goto label_1d3b00;
            case 0x1D3B04u: goto label_1d3b04;
            case 0x1D3B08u: goto label_1d3b08;
            case 0x1D3B0Cu: goto label_1d3b0c;
            case 0x1D3B10u: goto label_1d3b10;
            case 0x1D3B14u: goto label_1d3b14;
            case 0x1D3B18u: goto label_1d3b18;
            case 0x1D3B1Cu: goto label_1d3b1c;
            case 0x1D3B20u: goto label_1d3b20;
            case 0x1D3B24u: goto label_1d3b24;
            case 0x1D3B28u: goto label_1d3b28;
            case 0x1D3B2Cu: goto label_1d3b2c;
            case 0x1D3B30u: goto label_1d3b30;
            case 0x1D3B34u: goto label_1d3b34;
            case 0x1D3B38u: goto label_1d3b38;
            case 0x1D3B3Cu: goto label_1d3b3c;
            case 0x1D3B40u: goto label_1d3b40;
            case 0x1D3B44u: goto label_1d3b44;
            case 0x1D3B48u: goto label_1d3b48;
            case 0x1D3B4Cu: goto label_1d3b4c;
            case 0x1D3B50u: goto label_1d3b50;
            case 0x1D3B54u: goto label_1d3b54;
            case 0x1D3B58u: goto label_1d3b58;
            case 0x1D3B5Cu: goto label_1d3b5c;
            case 0x1D3B60u: goto label_1d3b60;
            case 0x1D3B64u: goto label_1d3b64;
            case 0x1D3B68u: goto label_1d3b68;
            case 0x1D3B6Cu: goto label_1d3b6c;
            case 0x1D3B70u: goto label_1d3b70;
            case 0x1D3B74u: goto label_1d3b74;
            case 0x1D3B78u: goto label_1d3b78;
            case 0x1D3B7Cu: goto label_1d3b7c;
            case 0x1D3B80u: goto label_1d3b80;
            case 0x1D3B84u: goto label_1d3b84;
            case 0x1D3B88u: goto label_1d3b88;
            case 0x1D3B8Cu: goto label_1d3b8c;
            case 0x1D3B90u: goto label_1d3b90;
            case 0x1D3B94u: goto label_1d3b94;
            case 0x1D3B98u: goto label_1d3b98;
            case 0x1D3B9Cu: goto label_1d3b9c;
            case 0x1D3BA0u: goto label_1d3ba0;
            case 0x1D3BA4u: goto label_1d3ba4;
            case 0x1D3BA8u: goto label_1d3ba8;
            case 0x1D3BACu: goto label_1d3bac;
            case 0x1D3BB0u: goto label_1d3bb0;
            case 0x1D3BB4u: goto label_1d3bb4;
            case 0x1D3BB8u: goto label_1d3bb8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D33ACu; }
            if (ctx->pc != 0x1D33ACu) { return; }
        }
    }
    ctx->pc = 0x1D33ACu;
label_1d33ac:
    // 0x1d33ac: 0x100001fe  b           . + 4 + (0x1FE << 2)
label_1d33b0:
    if (ctx->pc == 0x1D33B0u) {
        ctx->pc = 0x1D33B4u;
        goto label_1d33b4;
    }
    ctx->pc = 0x1D33ACu;
    {
        const bool branch_taken_0x1d33ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d33ac) {
            ctx->pc = 0x1D3BA8u;
            goto label_1d3ba8;
        }
    }
    ctx->pc = 0x1D33B4u;
label_1d33b4:
    // 0x1d33b4: 0x0  nop
    ctx->pc = 0x1d33b4u;
    // NOP
label_1d33b8:
    // 0x1d33b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d33bc:
    // 0x1d33bc: 0x1c4001f2  bgtz        $v0, . + 4 + (0x1F2 << 2)
label_1d33c0:
    if (ctx->pc == 0x1D33C0u) {
        ctx->pc = 0x1D33C4u;
        goto label_1d33c4;
    }
    ctx->pc = 0x1D33BCu;
    {
        const bool branch_taken_0x1d33bc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d33bc) {
            ctx->pc = 0x1D3B88u;
            goto label_1d3b88;
        }
    }
    ctx->pc = 0x1D33C4u;
label_1d33c4:
    // 0x1d33c4: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1d33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1d33c8:
    // 0x1d33c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d33cc:
    // 0x1d33cc: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x1d33ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_1d33d0:
    // 0x1d33d0: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1d33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1d33d4:
    // 0x1d33d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d33d8:
    // 0x1d33d8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1d33d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_1d33dc:
    // 0x1d33dc: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1d33dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1d33e0:
    // 0x1d33e0: 0xc0604b0  jal         func_1812C0
label_1d33e4:
    if (ctx->pc == 0x1D33E4u) {
        ctx->pc = 0x1D33E4u;
            // 0x1d33e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D33E8u;
        goto label_1d33e8;
    }
    ctx->pc = 0x1D33E0u;
    SET_GPR_U32(ctx, 31, 0x1D33E8u);
    ctx->pc = 0x1D33E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D33E0u;
            // 0x1d33e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D33E8u; }
        if (ctx->pc != 0x1D33E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D33E8u; }
        if (ctx->pc != 0x1D33E8u) { return; }
    }
    ctx->pc = 0x1D33E8u;
label_1d33e8:
    // 0x1d33e8: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d33e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d33ec:
    // 0x1d33ec: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1d33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1d33f0:
    // 0x1d33f0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1d33f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1d33f4:
    // 0x1d33f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d33f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d33f8:
    // 0x1d33f8: 0x0  nop
    ctx->pc = 0x1d33f8u;
    // NOP
label_1d33fc:
    // 0x1d33fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d33fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d3400:
    // 0x1d3400: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d3400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d3404:
    // 0x1d3404: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d3404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3408:
    // 0x1d3408: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d340c:
    // 0x1d340c: 0xc050ba4  jal         func_142E90
label_1d3410:
    if (ctx->pc == 0x1D3410u) {
        ctx->pc = 0x1D3410u;
            // 0x1d3410: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D3414u;
        goto label_1d3414;
    }
    ctx->pc = 0x1D340Cu;
    SET_GPR_U32(ctx, 31, 0x1D3414u);
    ctx->pc = 0x1D3410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D340Cu;
            // 0x1d3410: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3414u; }
        if (ctx->pc != 0x1D3414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3414u; }
        if (ctx->pc != 0x1D3414u) { return; }
    }
    ctx->pc = 0x1D3414u;
label_1d3414:
    // 0x1d3414: 0xc040d72  jal         func_1035C8
label_1d3418:
    if (ctx->pc == 0x1D3418u) {
        ctx->pc = 0x1D3418u;
            // 0x1d3418: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D341Cu;
        goto label_1d341c;
    }
    ctx->pc = 0x1D3414u;
    SET_GPR_U32(ctx, 31, 0x1D341Cu);
    ctx->pc = 0x1D3418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3414u;
            // 0x1d3418: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D341Cu; }
        if (ctx->pc != 0x1D341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D341Cu; }
        if (ctx->pc != 0x1D341Cu) { return; }
    }
    ctx->pc = 0x1D341Cu;
label_1d341c:
    // 0x1d341c: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1d341cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1d3420:
    // 0x1d3420: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1d3420u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1d3424:
    // 0x1d3424: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1d3424u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1d3428:
    // 0x1d3428: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d3428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d342c:
    // 0x1d342c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d342cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d3430:
    // 0x1d3430: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1d3430u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1d3434:
    // 0x1d3434: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3434u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1d3438:
    // 0x1d3438: 0xc040880  jal         func_102200
label_1d343c:
    if (ctx->pc == 0x1D343Cu) {
        ctx->pc = 0x1D343Cu;
            // 0x1d343c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3440u;
        goto label_1d3440;
    }
    ctx->pc = 0x1D3438u;
    SET_GPR_U32(ctx, 31, 0x1D3440u);
    ctx->pc = 0x1D343Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3438u;
            // 0x1d343c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3440u; }
        if (ctx->pc != 0x1D3440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3440u; }
        if (ctx->pc != 0x1D3440u) { return; }
    }
    ctx->pc = 0x1D3440u;
label_1d3440:
    // 0x1d3440: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1d3440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1d3444:
    // 0x1d3444: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1d3444u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1d3448:
    // 0x1d3448: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1d3448u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1d344c:
    // 0x1d344c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d344cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d3450:
    // 0x1d3450: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d3450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d3454:
    // 0x1d3454: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1d3454u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1d3458:
    // 0x1d3458: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3458u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1d345c:
    // 0x1d345c: 0xc040866  jal         func_102198
label_1d3460:
    if (ctx->pc == 0x1D3460u) {
        ctx->pc = 0x1D3460u;
            // 0x1d3460: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3464u;
        goto label_1d3464;
    }
    ctx->pc = 0x1D345Cu;
    SET_GPR_U32(ctx, 31, 0x1D3464u);
    ctx->pc = 0x1D3460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D345Cu;
            // 0x1d3460: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3464u; }
        if (ctx->pc != 0x1D3464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3464u; }
        if (ctx->pc != 0x1D3464u) { return; }
    }
    ctx->pc = 0x1D3464u;
label_1d3464:
    // 0x1d3464: 0xc040a74  jal         func_1029D0
label_1d3468:
    if (ctx->pc == 0x1D3468u) {
        ctx->pc = 0x1D3468u;
            // 0x1d3468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D346Cu;
        goto label_1d346c;
    }
    ctx->pc = 0x1D3464u;
    SET_GPR_U32(ctx, 31, 0x1D346Cu);
    ctx->pc = 0x1D3468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3464u;
            // 0x1d3468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D346Cu; }
        if (ctx->pc != 0x1D346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D346Cu; }
        if (ctx->pc != 0x1D346Cu) { return; }
    }
    ctx->pc = 0x1D346Cu;
label_1d346c:
    // 0x1d346c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3470:
    // 0x1d3470: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d3470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d3474:
    // 0x1d3474: 0xc050ba4  jal         func_142E90
label_1d3478:
    if (ctx->pc == 0x1D3478u) {
        ctx->pc = 0x1D3478u;
            // 0x1d3478: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1D347Cu;
        goto label_1d347c;
    }
    ctx->pc = 0x1D3474u;
    SET_GPR_U32(ctx, 31, 0x1D347Cu);
    ctx->pc = 0x1D3478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3474u;
            // 0x1d3478: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D347Cu; }
        if (ctx->pc != 0x1D347Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D347Cu; }
        if (ctx->pc != 0x1D347Cu) { return; }
    }
    ctx->pc = 0x1D347Cu;
label_1d347c:
    // 0x1d347c: 0xc040d72  jal         func_1035C8
label_1d3480:
    if (ctx->pc == 0x1D3480u) {
        ctx->pc = 0x1D3480u;
            // 0x1d3480: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D3484u;
        goto label_1d3484;
    }
    ctx->pc = 0x1D347Cu;
    SET_GPR_U32(ctx, 31, 0x1D3484u);
    ctx->pc = 0x1D3480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D347Cu;
            // 0x1d3480: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3484u; }
        if (ctx->pc != 0x1D3484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3484u; }
        if (ctx->pc != 0x1D3484u) { return; }
    }
    ctx->pc = 0x1D3484u;
label_1d3484:
    // 0x1d3484: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1d3484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1d3488:
    // 0x1d3488: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1d3488u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1d348c:
    // 0x1d348c: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1d348cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1d3490:
    // 0x1d3490: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d3490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d3494:
    // 0x1d3494: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d3494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d3498:
    // 0x1d3498: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1d3498u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1d349c:
    // 0x1d349c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d349cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1d34a0:
    // 0x1d34a0: 0xc040880  jal         func_102200
label_1d34a4:
    if (ctx->pc == 0x1D34A4u) {
        ctx->pc = 0x1D34A4u;
            // 0x1d34a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D34A8u;
        goto label_1d34a8;
    }
    ctx->pc = 0x1D34A0u;
    SET_GPR_U32(ctx, 31, 0x1D34A8u);
    ctx->pc = 0x1D34A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34A0u;
            // 0x1d34a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34A8u; }
        if (ctx->pc != 0x1D34A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34A8u; }
        if (ctx->pc != 0x1D34A8u) { return; }
    }
    ctx->pc = 0x1D34A8u;
label_1d34a8:
    // 0x1d34a8: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1d34a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1d34ac:
    // 0x1d34ac: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1d34acu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1d34b0:
    // 0x1d34b0: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1d34b0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1d34b4:
    // 0x1d34b4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d34b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d34b8:
    // 0x1d34b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d34b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d34bc:
    // 0x1d34bc: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1d34bcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1d34c0:
    // 0x1d34c0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d34c0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1d34c4:
    // 0x1d34c4: 0xc040866  jal         func_102198
label_1d34c8:
    if (ctx->pc == 0x1D34C8u) {
        ctx->pc = 0x1D34C8u;
            // 0x1d34c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D34CCu;
        goto label_1d34cc;
    }
    ctx->pc = 0x1D34C4u;
    SET_GPR_U32(ctx, 31, 0x1D34CCu);
    ctx->pc = 0x1D34C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34C4u;
            // 0x1d34c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34CCu; }
        if (ctx->pc != 0x1D34CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34CCu; }
        if (ctx->pc != 0x1D34CCu) { return; }
    }
    ctx->pc = 0x1D34CCu;
label_1d34cc:
    // 0x1d34cc: 0xc040a74  jal         func_1029D0
label_1d34d0:
    if (ctx->pc == 0x1D34D0u) {
        ctx->pc = 0x1D34D0u;
            // 0x1d34d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D34D4u;
        goto label_1d34d4;
    }
    ctx->pc = 0x1D34CCu;
    SET_GPR_U32(ctx, 31, 0x1D34D4u);
    ctx->pc = 0x1D34D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34CCu;
            // 0x1d34d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34D4u; }
        if (ctx->pc != 0x1D34D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34D4u; }
        if (ctx->pc != 0x1D34D4u) { return; }
    }
    ctx->pc = 0x1D34D4u;
label_1d34d4:
    // 0x1d34d4: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1d34d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d34d8:
    // 0x1d34d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d34d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d34dc:
    // 0x1d34dc: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1d34dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1d34e0:
    // 0x1d34e0: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1d34e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1d34e4:
    // 0x1d34e4: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x1d34e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
label_1d34e8:
    // 0x1d34e8: 0x142001af  bnez        $at, . + 4 + (0x1AF << 2)
label_1d34ec:
    if (ctx->pc == 0x1D34ECu) {
        ctx->pc = 0x1D34F0u;
        goto label_1d34f0;
    }
    ctx->pc = 0x1D34E8u;
    {
        const bool branch_taken_0x1d34e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d34e8) {
            ctx->pc = 0x1D3BA8u;
            goto label_1d3ba8;
        }
    }
    ctx->pc = 0x1D34F0u;
label_1d34f0:
    // 0x1d34f0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d34f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d34f4:
    // 0x1d34f4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1d34f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1d34f8:
    // 0x1d34f8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d34f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d34fc:
    // 0x1d34fc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d34fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d3500:
    // 0x1d3500: 0xc05d080  jal         func_174200
label_1d3504:
    if (ctx->pc == 0x1D3504u) {
        ctx->pc = 0x1D3504u;
            // 0x1d3504: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D3508u;
        goto label_1d3508;
    }
    ctx->pc = 0x1D3500u;
    SET_GPR_U32(ctx, 31, 0x1D3508u);
    ctx->pc = 0x1D3504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3500u;
            // 0x1d3504: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3508u; }
        if (ctx->pc != 0x1D3508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3508u; }
        if (ctx->pc != 0x1D3508u) { return; }
    }
    ctx->pc = 0x1D3508u;
label_1d3508:
    // 0x1d3508: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d3508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d350c:
    // 0x1d350c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x1d350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1d3510:
    // 0x1d3510: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d3510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3514:
    // 0x1d3514: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d3514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d3518:
    // 0x1d3518: 0xc05d080  jal         func_174200
label_1d351c:
    if (ctx->pc == 0x1D351Cu) {
        ctx->pc = 0x1D351Cu;
            // 0x1d351c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D3520u;
        goto label_1d3520;
    }
    ctx->pc = 0x1D3518u;
    SET_GPR_U32(ctx, 31, 0x1D3520u);
    ctx->pc = 0x1D351Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3518u;
            // 0x1d351c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3520u; }
        if (ctx->pc != 0x1D3520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3520u; }
        if (ctx->pc != 0x1D3520u) { return; }
    }
    ctx->pc = 0x1D3520u;
label_1d3520:
    // 0x1d3520: 0xc050bb4  jal         func_142ED0
label_1d3524:
    if (ctx->pc == 0x1D3524u) {
        ctx->pc = 0x1D3528u;
        goto label_1d3528;
    }
    ctx->pc = 0x1D3520u;
    SET_GPR_U32(ctx, 31, 0x1D3528u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3528u; }
        if (ctx->pc != 0x1D3528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3528u; }
        if (ctx->pc != 0x1D3528u) { return; }
    }
    ctx->pc = 0x1D3528u;
label_1d3528:
    // 0x1d3528: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d3528u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d352c:
    // 0x1d352c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d3530:
    if (ctx->pc == 0x1D3530u) {
        ctx->pc = 0x1D3534u;
        goto label_1d3534;
    }
    ctx->pc = 0x1D352Cu;
    {
        const bool branch_taken_0x1d352c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d352c) {
            ctx->pc = 0x1D3550u;
            goto label_1d3550;
        }
    }
    ctx->pc = 0x1D3534u;
label_1d3534:
    // 0x1d3534: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d3534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3538:
    // 0x1d3538: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1d3538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1d353c:
    // 0x1d353c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d353cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3540:
    // 0x1d3540: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d3540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d3544:
    // 0x1d3544: 0xc05d080  jal         func_174200
label_1d3548:
    if (ctx->pc == 0x1D3548u) {
        ctx->pc = 0x1D3548u;
            // 0x1d3548: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D354Cu;
        goto label_1d354c;
    }
    ctx->pc = 0x1D3544u;
    SET_GPR_U32(ctx, 31, 0x1D354Cu);
    ctx->pc = 0x1D3548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3544u;
            // 0x1d3548: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D354Cu; }
        if (ctx->pc != 0x1D354Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D354Cu; }
        if (ctx->pc != 0x1D354Cu) { return; }
    }
    ctx->pc = 0x1D354Cu;
label_1d354c:
    // 0x1d354c: 0x0  nop
    ctx->pc = 0x1d354cu;
    // NOP
label_1d3550:
    // 0x1d3550: 0xc050bb4  jal         func_142ED0
label_1d3554:
    if (ctx->pc == 0x1D3554u) {
        ctx->pc = 0x1D3558u;
        goto label_1d3558;
    }
    ctx->pc = 0x1D3550u;
    SET_GPR_U32(ctx, 31, 0x1D3558u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3558u; }
        if (ctx->pc != 0x1D3558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3558u; }
        if (ctx->pc != 0x1D3558u) { return; }
    }
    ctx->pc = 0x1D3558u;
label_1d3558:
    // 0x1d3558: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d3558u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d355c:
    // 0x1d355c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d3560:
    if (ctx->pc == 0x1D3560u) {
        ctx->pc = 0x1D3564u;
        goto label_1d3564;
    }
    ctx->pc = 0x1D355Cu;
    {
        const bool branch_taken_0x1d355c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d355c) {
            ctx->pc = 0x1D3580u;
            goto label_1d3580;
        }
    }
    ctx->pc = 0x1D3564u;
label_1d3564:
    // 0x1d3564: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d3564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3568:
    // 0x1d3568: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d3568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d356c:
    // 0x1d356c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3570:
    // 0x1d3570: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d3570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d3574:
    // 0x1d3574: 0xc05d080  jal         func_174200
label_1d3578:
    if (ctx->pc == 0x1D3578u) {
        ctx->pc = 0x1D3578u;
            // 0x1d3578: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D357Cu;
        goto label_1d357c;
    }
    ctx->pc = 0x1D3574u;
    SET_GPR_U32(ctx, 31, 0x1D357Cu);
    ctx->pc = 0x1D3578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3574u;
            // 0x1d3578: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D357Cu; }
        if (ctx->pc != 0x1D357Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D357Cu; }
        if (ctx->pc != 0x1D357Cu) { return; }
    }
    ctx->pc = 0x1D357Cu;
label_1d357c:
    // 0x1d357c: 0x0  nop
    ctx->pc = 0x1d357cu;
    // NOP
label_1d3580:
    // 0x1d3580: 0xc050bb4  jal         func_142ED0
label_1d3584:
    if (ctx->pc == 0x1D3584u) {
        ctx->pc = 0x1D3588u;
        goto label_1d3588;
    }
    ctx->pc = 0x1D3580u;
    SET_GPR_U32(ctx, 31, 0x1D3588u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3588u; }
        if (ctx->pc != 0x1D3588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3588u; }
        if (ctx->pc != 0x1D3588u) { return; }
    }
    ctx->pc = 0x1D3588u;
label_1d3588:
    // 0x1d3588: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d3588u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d358c:
    // 0x1d358c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d3590:
    if (ctx->pc == 0x1D3590u) {
        ctx->pc = 0x1D3594u;
        goto label_1d3594;
    }
    ctx->pc = 0x1D358Cu;
    {
        const bool branch_taken_0x1d358c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d358c) {
            ctx->pc = 0x1D35B0u;
            goto label_1d35b0;
        }
    }
    ctx->pc = 0x1D3594u;
label_1d3594:
    // 0x1d3594: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d3594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3598:
    // 0x1d3598: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1d3598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1d359c:
    // 0x1d359c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d359cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d35a0:
    // 0x1d35a0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d35a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d35a4:
    // 0x1d35a4: 0xc05d080  jal         func_174200
label_1d35a8:
    if (ctx->pc == 0x1D35A8u) {
        ctx->pc = 0x1D35A8u;
            // 0x1d35a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D35ACu;
        goto label_1d35ac;
    }
    ctx->pc = 0x1D35A4u;
    SET_GPR_U32(ctx, 31, 0x1D35ACu);
    ctx->pc = 0x1D35A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35A4u;
            // 0x1d35a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35ACu; }
        if (ctx->pc != 0x1D35ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35ACu; }
        if (ctx->pc != 0x1D35ACu) { return; }
    }
    ctx->pc = 0x1D35ACu;
label_1d35ac:
    // 0x1d35ac: 0x0  nop
    ctx->pc = 0x1d35acu;
    // NOP
label_1d35b0:
    // 0x1d35b0: 0xc050bb4  jal         func_142ED0
label_1d35b4:
    if (ctx->pc == 0x1D35B4u) {
        ctx->pc = 0x1D35B8u;
        goto label_1d35b8;
    }
    ctx->pc = 0x1D35B0u;
    SET_GPR_U32(ctx, 31, 0x1D35B8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35B8u; }
        if (ctx->pc != 0x1D35B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35B8u; }
        if (ctx->pc != 0x1D35B8u) { return; }
    }
    ctx->pc = 0x1D35B8u;
label_1d35b8:
    // 0x1d35b8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d35b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d35bc:
    // 0x1d35bc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d35c0:
    // 0x1d35c0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d35c0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d35c4:
    // 0x1d35c4: 0x0  nop
    ctx->pc = 0x1d35c4u;
    // NOP
label_1d35c8:
    // 0x1d35c8: 0x0  nop
    ctx->pc = 0x1d35c8u;
    // NOP
label_1d35cc:
    // 0x1d35cc: 0x1010  mfhi        $v0
    ctx->pc = 0x1d35ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d35d0:
    // 0x1d35d0: 0xc050bb4  jal         func_142ED0
label_1d35d4:
    if (ctx->pc == 0x1D35D4u) {
        ctx->pc = 0x1D35D4u;
            // 0x1d35d4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D35D8u;
        goto label_1d35d8;
    }
    ctx->pc = 0x1D35D0u;
    SET_GPR_U32(ctx, 31, 0x1D35D8u);
    ctx->pc = 0x1D35D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35D0u;
            // 0x1d35d4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35D8u; }
        if (ctx->pc != 0x1D35D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35D8u; }
        if (ctx->pc != 0x1D35D8u) { return; }
    }
    ctx->pc = 0x1D35D8u;
label_1d35d8:
    // 0x1d35d8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d35dc:
    // 0x1d35dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d35dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d35e0:
    // 0x1d35e0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d35e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d35e4:
    // 0x1d35e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d35e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d35e8:
    // 0x1d35e8: 0x0  nop
    ctx->pc = 0x1d35e8u;
    // NOP
label_1d35ec:
    // 0x1d35ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d35ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d35f0:
    // 0x1d35f0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1d35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d35f4:
    // 0x1d35f4: 0x1810  mfhi        $v1
    ctx->pc = 0x1d35f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1d35f8:
    // 0x1d35f8: 0xc053740  jal         func_14DD00
label_1d35fc:
    if (ctx->pc == 0x1D35FCu) {
        ctx->pc = 0x1D35FCu;
            // 0x1d35fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1D3600u;
        goto label_1d3600;
    }
    ctx->pc = 0x1D35F8u;
    SET_GPR_U32(ctx, 31, 0x1D3600u);
    ctx->pc = 0x1D35FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35F8u;
            // 0x1d35fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3600u; }
        if (ctx->pc != 0x1D3600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3600u; }
        if (ctx->pc != 0x1D3600u) { return; }
    }
    ctx->pc = 0x1D3600u;
label_1d3600:
    // 0x1d3600: 0xc050bb4  jal         func_142ED0
label_1d3604:
    if (ctx->pc == 0x1D3604u) {
        ctx->pc = 0x1D3608u;
        goto label_1d3608;
    }
    ctx->pc = 0x1D3600u;
    SET_GPR_U32(ctx, 31, 0x1D3608u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3608u; }
        if (ctx->pc != 0x1D3608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3608u; }
        if (ctx->pc != 0x1D3608u) { return; }
    }
    ctx->pc = 0x1D3608u;
label_1d3608:
    // 0x1d3608: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d3608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d360c:
    // 0x1d360c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d3610:
    // 0x1d3610: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d3610u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3614:
    // 0x1d3614: 0x0  nop
    ctx->pc = 0x1d3614u;
    // NOP
label_1d3618:
    // 0x1d3618: 0x0  nop
    ctx->pc = 0x1d3618u;
    // NOP
label_1d361c:
    // 0x1d361c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d361cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3620:
    // 0x1d3620: 0xc050bb4  jal         func_142ED0
label_1d3624:
    if (ctx->pc == 0x1D3624u) {
        ctx->pc = 0x1D3624u;
            // 0x1d3624: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3628u;
        goto label_1d3628;
    }
    ctx->pc = 0x1D3620u;
    SET_GPR_U32(ctx, 31, 0x1D3628u);
    ctx->pc = 0x1D3624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3620u;
            // 0x1d3624: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3628u; }
        if (ctx->pc != 0x1D3628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3628u; }
        if (ctx->pc != 0x1D3628u) { return; }
    }
    ctx->pc = 0x1D3628u;
label_1d3628:
    // 0x1d3628: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d3628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d362c:
    // 0x1d362c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d362cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3630:
    // 0x1d3630: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d3630u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3634:
    // 0x1d3634: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d3634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3638:
    // 0x1d3638: 0x0  nop
    ctx->pc = 0x1d3638u;
    // NOP
label_1d363c:
    // 0x1d363c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d363cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d3640:
    // 0x1d3640: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1d3640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d3644:
    // 0x1d3644: 0x1810  mfhi        $v1
    ctx->pc = 0x1d3644u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1d3648:
    // 0x1d3648: 0xc053740  jal         func_14DD00
label_1d364c:
    if (ctx->pc == 0x1D364Cu) {
        ctx->pc = 0x1D364Cu;
            // 0x1d364c: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1D3650u;
        goto label_1d3650;
    }
    ctx->pc = 0x1D3648u;
    SET_GPR_U32(ctx, 31, 0x1D3650u);
    ctx->pc = 0x1D364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3648u;
            // 0x1d364c: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3650u; }
        if (ctx->pc != 0x1D3650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3650u; }
        if (ctx->pc != 0x1D3650u) { return; }
    }
    ctx->pc = 0x1D3650u;
label_1d3650:
    // 0x1d3650: 0xc050bb4  jal         func_142ED0
label_1d3654:
    if (ctx->pc == 0x1D3654u) {
        ctx->pc = 0x1D3658u;
        goto label_1d3658;
    }
    ctx->pc = 0x1D3650u;
    SET_GPR_U32(ctx, 31, 0x1D3658u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3658u; }
        if (ctx->pc != 0x1D3658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3658u; }
        if (ctx->pc != 0x1D3658u) { return; }
    }
    ctx->pc = 0x1D3658u;
label_1d3658:
    // 0x1d3658: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d3658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d365c:
    // 0x1d365c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d3660:
    // 0x1d3660: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d3660u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3664:
    // 0x1d3664: 0x0  nop
    ctx->pc = 0x1d3664u;
    // NOP
label_1d3668:
    // 0x1d3668: 0x0  nop
    ctx->pc = 0x1d3668u;
    // NOP
label_1d366c:
    // 0x1d366c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d366cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3670:
    // 0x1d3670: 0xc050bb4  jal         func_142ED0
label_1d3674:
    if (ctx->pc == 0x1D3674u) {
        ctx->pc = 0x1D3674u;
            // 0x1d3674: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3678u;
        goto label_1d3678;
    }
    ctx->pc = 0x1D3670u;
    SET_GPR_U32(ctx, 31, 0x1D3678u);
    ctx->pc = 0x1D3674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3670u;
            // 0x1d3674: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3678u; }
        if (ctx->pc != 0x1D3678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3678u; }
        if (ctx->pc != 0x1D3678u) { return; }
    }
    ctx->pc = 0x1D3678u;
label_1d3678:
    // 0x1d3678: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d3678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d367c:
    // 0x1d367c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3680:
    // 0x1d3680: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d3680u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3684:
    // 0x1d3684: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d3684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d3688:
    // 0x1d3688: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d3688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d368c:
    // 0x1d368c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d368cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3690:
    // 0x1d3690: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3690u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3694:
    // 0x1d3694: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d3694u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d3698:
    // 0x1d3698: 0xc053740  jal         func_14DD00
label_1d369c:
    if (ctx->pc == 0x1D369Cu) {
        ctx->pc = 0x1D369Cu;
            // 0x1d369c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D36A0u;
        goto label_1d36a0;
    }
    ctx->pc = 0x1D3698u;
    SET_GPR_U32(ctx, 31, 0x1D36A0u);
    ctx->pc = 0x1D369Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3698u;
            // 0x1d369c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36A0u; }
        if (ctx->pc != 0x1D36A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36A0u; }
        if (ctx->pc != 0x1D36A0u) { return; }
    }
    ctx->pc = 0x1D36A0u;
label_1d36a0:
    // 0x1d36a0: 0xc050bb4  jal         func_142ED0
label_1d36a4:
    if (ctx->pc == 0x1D36A4u) {
        ctx->pc = 0x1D36A8u;
        goto label_1d36a8;
    }
    ctx->pc = 0x1D36A0u;
    SET_GPR_U32(ctx, 31, 0x1D36A8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36A8u; }
        if (ctx->pc != 0x1D36A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36A8u; }
        if (ctx->pc != 0x1D36A8u) { return; }
    }
    ctx->pc = 0x1D36A8u;
label_1d36a8:
    // 0x1d36a8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d36a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d36ac:
    // 0x1d36ac: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d36acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d36b0:
    // 0x1d36b0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d36b0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d36b4:
    // 0x1d36b4: 0x0  nop
    ctx->pc = 0x1d36b4u;
    // NOP
label_1d36b8:
    // 0x1d36b8: 0x0  nop
    ctx->pc = 0x1d36b8u;
    // NOP
label_1d36bc:
    // 0x1d36bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1d36bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d36c0:
    // 0x1d36c0: 0xc050bb4  jal         func_142ED0
label_1d36c4:
    if (ctx->pc == 0x1D36C4u) {
        ctx->pc = 0x1D36C4u;
            // 0x1d36c4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D36C8u;
        goto label_1d36c8;
    }
    ctx->pc = 0x1D36C0u;
    SET_GPR_U32(ctx, 31, 0x1D36C8u);
    ctx->pc = 0x1D36C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36C0u;
            // 0x1d36c4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36C8u; }
        if (ctx->pc != 0x1D36C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36C8u; }
        if (ctx->pc != 0x1D36C8u) { return; }
    }
    ctx->pc = 0x1D36C8u;
label_1d36c8:
    // 0x1d36c8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d36cc:
    // 0x1d36cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d36ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d36d0:
    // 0x1d36d0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d36d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d36d4:
    // 0x1d36d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d36d8:
    // 0x1d36d8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d36d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d36dc:
    // 0x1d36dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d36dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d36e0:
    // 0x1d36e0: 0x1010  mfhi        $v0
    ctx->pc = 0x1d36e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d36e4:
    // 0x1d36e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d36e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d36e8:
    // 0x1d36e8: 0xc053740  jal         func_14DD00
label_1d36ec:
    if (ctx->pc == 0x1D36ECu) {
        ctx->pc = 0x1D36ECu;
            // 0x1d36ec: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D36F0u;
        goto label_1d36f0;
    }
    ctx->pc = 0x1D36E8u;
    SET_GPR_U32(ctx, 31, 0x1D36F0u);
    ctx->pc = 0x1D36ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36E8u;
            // 0x1d36ec: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36F0u; }
        if (ctx->pc != 0x1D36F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36F0u; }
        if (ctx->pc != 0x1D36F0u) { return; }
    }
    ctx->pc = 0x1D36F0u;
label_1d36f0:
    // 0x1d36f0: 0xc050bb4  jal         func_142ED0
label_1d36f4:
    if (ctx->pc == 0x1D36F4u) {
        ctx->pc = 0x1D36F8u;
        goto label_1d36f8;
    }
    ctx->pc = 0x1D36F0u;
    SET_GPR_U32(ctx, 31, 0x1D36F8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36F8u; }
        if (ctx->pc != 0x1D36F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36F8u; }
        if (ctx->pc != 0x1D36F8u) { return; }
    }
    ctx->pc = 0x1D36F8u;
label_1d36f8:
    // 0x1d36f8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d36f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d36fc:
    // 0x1d36fc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d36fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d3700:
    // 0x1d3700: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d3700u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3704:
    // 0x1d3704: 0x0  nop
    ctx->pc = 0x1d3704u;
    // NOP
label_1d3708:
    // 0x1d3708: 0x0  nop
    ctx->pc = 0x1d3708u;
    // NOP
label_1d370c:
    // 0x1d370c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d370cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3710:
    // 0x1d3710: 0xc050bb4  jal         func_142ED0
label_1d3714:
    if (ctx->pc == 0x1D3714u) {
        ctx->pc = 0x1D3714u;
            // 0x1d3714: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3718u;
        goto label_1d3718;
    }
    ctx->pc = 0x1D3710u;
    SET_GPR_U32(ctx, 31, 0x1D3718u);
    ctx->pc = 0x1D3714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3710u;
            // 0x1d3714: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3718u; }
        if (ctx->pc != 0x1D3718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3718u; }
        if (ctx->pc != 0x1D3718u) { return; }
    }
    ctx->pc = 0x1D3718u;
label_1d3718:
    // 0x1d3718: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d3718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d371c:
    // 0x1d371c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3720:
    // 0x1d3720: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d3720u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3724:
    // 0x1d3724: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d3724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d3728:
    // 0x1d3728: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d3728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d372c:
    // 0x1d372c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d372cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3730:
    // 0x1d3730: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3730u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3734:
    // 0x1d3734: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d3734u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d3738:
    // 0x1d3738: 0xc053740  jal         func_14DD00
label_1d373c:
    if (ctx->pc == 0x1D373Cu) {
        ctx->pc = 0x1D373Cu;
            // 0x1d373c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3740u;
        goto label_1d3740;
    }
    ctx->pc = 0x1D3738u;
    SET_GPR_U32(ctx, 31, 0x1D3740u);
    ctx->pc = 0x1D373Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3738u;
            // 0x1d373c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3740u; }
        if (ctx->pc != 0x1D3740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3740u; }
        if (ctx->pc != 0x1D3740u) { return; }
    }
    ctx->pc = 0x1D3740u;
label_1d3740:
    // 0x1d3740: 0xc050bb4  jal         func_142ED0
label_1d3744:
    if (ctx->pc == 0x1D3744u) {
        ctx->pc = 0x1D3748u;
        goto label_1d3748;
    }
    ctx->pc = 0x1D3740u;
    SET_GPR_U32(ctx, 31, 0x1D3748u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3748u; }
        if (ctx->pc != 0x1D3748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3748u; }
        if (ctx->pc != 0x1D3748u) { return; }
    }
    ctx->pc = 0x1D3748u;
label_1d3748:
    // 0x1d3748: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d3748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d374c:
    // 0x1d374c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d3750:
    // 0x1d3750: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d3750u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3754:
    // 0x1d3754: 0x0  nop
    ctx->pc = 0x1d3754u;
    // NOP
label_1d3758:
    // 0x1d3758: 0x0  nop
    ctx->pc = 0x1d3758u;
    // NOP
label_1d375c:
    // 0x1d375c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d375cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3760:
    // 0x1d3760: 0xc050bb4  jal         func_142ED0
label_1d3764:
    if (ctx->pc == 0x1D3764u) {
        ctx->pc = 0x1D3764u;
            // 0x1d3764: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3768u;
        goto label_1d3768;
    }
    ctx->pc = 0x1D3760u;
    SET_GPR_U32(ctx, 31, 0x1D3768u);
    ctx->pc = 0x1D3764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3760u;
            // 0x1d3764: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3768u; }
        if (ctx->pc != 0x1D3768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3768u; }
        if (ctx->pc != 0x1D3768u) { return; }
    }
    ctx->pc = 0x1D3768u;
label_1d3768:
    // 0x1d3768: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d3768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d376c:
    // 0x1d376c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d376cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d3770:
    // 0x1d3770: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d3770u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3774:
    // 0x1d3774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3778:
    // 0x1d3778: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1d3778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1d377c:
    // 0x1d377c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1d377cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1d3780:
    // 0x1d3780: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d3780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d3784:
    // 0x1d3784: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d3784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3788:
    // 0x1d3788: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3788u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d378c:
    // 0x1d378c: 0xc053740  jal         func_14DD00
label_1d3790:
    if (ctx->pc == 0x1D3790u) {
        ctx->pc = 0x1D3790u;
            // 0x1d3790: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3794u;
        goto label_1d3794;
    }
    ctx->pc = 0x1D378Cu;
    SET_GPR_U32(ctx, 31, 0x1D3794u);
    ctx->pc = 0x1D3790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D378Cu;
            // 0x1d3790: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3794u; }
        if (ctx->pc != 0x1D3794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3794u; }
        if (ctx->pc != 0x1D3794u) { return; }
    }
    ctx->pc = 0x1D3794u;
label_1d3794:
    // 0x1d3794: 0xc050bb4  jal         func_142ED0
label_1d3798:
    if (ctx->pc == 0x1D3798u) {
        ctx->pc = 0x1D379Cu;
        goto label_1d379c;
    }
    ctx->pc = 0x1D3794u;
    SET_GPR_U32(ctx, 31, 0x1D379Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D379Cu; }
        if (ctx->pc != 0x1D379Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D379Cu; }
        if (ctx->pc != 0x1D379Cu) { return; }
    }
    ctx->pc = 0x1D379Cu;
label_1d379c:
    // 0x1d379c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d379cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d37a0:
    // 0x1d37a0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d37a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d37a4:
    // 0x1d37a4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d37a4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d37a8:
    // 0x1d37a8: 0x0  nop
    ctx->pc = 0x1d37a8u;
    // NOP
label_1d37ac:
    // 0x1d37ac: 0x0  nop
    ctx->pc = 0x1d37acu;
    // NOP
label_1d37b0:
    // 0x1d37b0: 0x1010  mfhi        $v0
    ctx->pc = 0x1d37b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d37b4:
    // 0x1d37b4: 0xc050bb4  jal         func_142ED0
label_1d37b8:
    if (ctx->pc == 0x1D37B8u) {
        ctx->pc = 0x1D37B8u;
            // 0x1d37b8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D37BCu;
        goto label_1d37bc;
    }
    ctx->pc = 0x1D37B4u;
    SET_GPR_U32(ctx, 31, 0x1D37BCu);
    ctx->pc = 0x1D37B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D37B4u;
            // 0x1d37b8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D37BCu; }
        if (ctx->pc != 0x1D37BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D37BCu; }
        if (ctx->pc != 0x1D37BCu) { return; }
    }
    ctx->pc = 0x1D37BCu;
label_1d37bc:
    // 0x1d37bc: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d37bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d37c0:
    // 0x1d37c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d37c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d37c4:
    // 0x1d37c4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d37c4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d37c8:
    // 0x1d37c8: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1d37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1d37cc:
    // 0x1d37cc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d37d0:
    // 0x1d37d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d37d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d37d4:
    // 0x1d37d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1d37d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d37d8:
    // 0x1d37d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d37d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d37dc:
    // 0x1d37dc: 0xc053740  jal         func_14DD00
label_1d37e0:
    if (ctx->pc == 0x1D37E0u) {
        ctx->pc = 0x1D37E0u;
            // 0x1d37e0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D37E4u;
        goto label_1d37e4;
    }
    ctx->pc = 0x1D37DCu;
    SET_GPR_U32(ctx, 31, 0x1D37E4u);
    ctx->pc = 0x1D37E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D37DCu;
            // 0x1d37e0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D37E4u; }
        if (ctx->pc != 0x1D37E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D37E4u; }
        if (ctx->pc != 0x1D37E4u) { return; }
    }
    ctx->pc = 0x1D37E4u;
label_1d37e4:
    // 0x1d37e4: 0xc050bb4  jal         func_142ED0
label_1d37e8:
    if (ctx->pc == 0x1D37E8u) {
        ctx->pc = 0x1D37ECu;
        goto label_1d37ec;
    }
    ctx->pc = 0x1D37E4u;
    SET_GPR_U32(ctx, 31, 0x1D37ECu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D37ECu; }
        if (ctx->pc != 0x1D37ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D37ECu; }
        if (ctx->pc != 0x1D37ECu) { return; }
    }
    ctx->pc = 0x1D37ECu;
label_1d37ec:
    // 0x1d37ec: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d37ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d37f0:
    // 0x1d37f0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d37f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d37f4:
    // 0x1d37f4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d37f4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d37f8:
    // 0x1d37f8: 0x0  nop
    ctx->pc = 0x1d37f8u;
    // NOP
label_1d37fc:
    // 0x1d37fc: 0x0  nop
    ctx->pc = 0x1d37fcu;
    // NOP
label_1d3800:
    // 0x1d3800: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3800u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3804:
    // 0x1d3804: 0xc050bb4  jal         func_142ED0
label_1d3808:
    if (ctx->pc == 0x1D3808u) {
        ctx->pc = 0x1D3808u;
            // 0x1d3808: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D380Cu;
        goto label_1d380c;
    }
    ctx->pc = 0x1D3804u;
    SET_GPR_U32(ctx, 31, 0x1D380Cu);
    ctx->pc = 0x1D3808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3804u;
            // 0x1d3808: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D380Cu; }
        if (ctx->pc != 0x1D380Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D380Cu; }
        if (ctx->pc != 0x1D380Cu) { return; }
    }
    ctx->pc = 0x1D380Cu;
label_1d380c:
    // 0x1d380c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d3810:
    // 0x1d3810: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d3810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d3814:
    // 0x1d3814: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d3814u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3818:
    // 0x1d3818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d381c:
    // 0x1d381c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d381cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d3820:
    // 0x1d3820: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x1d3820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
label_1d3824:
    // 0x1d3824: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d3824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d3828:
    // 0x1d3828: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d3828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d382c:
    // 0x1d382c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d382cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3830:
    // 0x1d3830: 0xc053740  jal         func_14DD00
label_1d3834:
    if (ctx->pc == 0x1D3834u) {
        ctx->pc = 0x1D3834u;
            // 0x1d3834: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3838u;
        goto label_1d3838;
    }
    ctx->pc = 0x1D3830u;
    SET_GPR_U32(ctx, 31, 0x1D3838u);
    ctx->pc = 0x1D3834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3830u;
            // 0x1d3834: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3838u; }
        if (ctx->pc != 0x1D3838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3838u; }
        if (ctx->pc != 0x1D3838u) { return; }
    }
    ctx->pc = 0x1D3838u;
label_1d3838:
    // 0x1d3838: 0xc050bb4  jal         func_142ED0
label_1d383c:
    if (ctx->pc == 0x1D383Cu) {
        ctx->pc = 0x1D3840u;
        goto label_1d3840;
    }
    ctx->pc = 0x1D3838u;
    SET_GPR_U32(ctx, 31, 0x1D3840u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3840u; }
        if (ctx->pc != 0x1D3840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3840u; }
        if (ctx->pc != 0x1D3840u) { return; }
    }
    ctx->pc = 0x1D3840u;
label_1d3840:
    // 0x1d3840: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d3840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d3844:
    // 0x1d3844: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d3844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d3848:
    // 0x1d3848: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d3848u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d384c:
    // 0x1d384c: 0x0  nop
    ctx->pc = 0x1d384cu;
    // NOP
label_1d3850:
    // 0x1d3850: 0x0  nop
    ctx->pc = 0x1d3850u;
    // NOP
label_1d3854:
    // 0x1d3854: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3854u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3858:
    // 0x1d3858: 0xc050bb4  jal         func_142ED0
label_1d385c:
    if (ctx->pc == 0x1D385Cu) {
        ctx->pc = 0x1D385Cu;
            // 0x1d385c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3860u;
        goto label_1d3860;
    }
    ctx->pc = 0x1D3858u;
    SET_GPR_U32(ctx, 31, 0x1D3860u);
    ctx->pc = 0x1D385Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3858u;
            // 0x1d385c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3860u; }
        if (ctx->pc != 0x1D3860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3860u; }
        if (ctx->pc != 0x1D3860u) { return; }
    }
    ctx->pc = 0x1D3860u;
label_1d3860:
    // 0x1d3860: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d3860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d3864:
    // 0x1d3864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3868:
    // 0x1d3868: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d3868u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d386c:
    // 0x1d386c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1d386cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1d3870:
    // 0x1d3870: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d3870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d3874:
    // 0x1d3874: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d3874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3878:
    // 0x1d3878: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3878u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d387c:
    // 0x1d387c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d387cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d3880:
    // 0x1d3880: 0xc053740  jal         func_14DD00
label_1d3884:
    if (ctx->pc == 0x1D3884u) {
        ctx->pc = 0x1D3884u;
            // 0x1d3884: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3888u;
        goto label_1d3888;
    }
    ctx->pc = 0x1D3880u;
    SET_GPR_U32(ctx, 31, 0x1D3888u);
    ctx->pc = 0x1D3884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3880u;
            // 0x1d3884: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3888u; }
        if (ctx->pc != 0x1D3888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3888u; }
        if (ctx->pc != 0x1D3888u) { return; }
    }
    ctx->pc = 0x1D3888u;
label_1d3888:
    // 0x1d3888: 0xc050bb4  jal         func_142ED0
label_1d388c:
    if (ctx->pc == 0x1D388Cu) {
        ctx->pc = 0x1D3890u;
        goto label_1d3890;
    }
    ctx->pc = 0x1D3888u;
    SET_GPR_U32(ctx, 31, 0x1D3890u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3890u; }
        if (ctx->pc != 0x1D3890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3890u; }
        if (ctx->pc != 0x1D3890u) { return; }
    }
    ctx->pc = 0x1D3890u;
label_1d3890:
    // 0x1d3890: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d3890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d3894:
    // 0x1d3894: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d3894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d3898:
    // 0x1d3898: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d3898u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d389c:
    // 0x1d389c: 0x0  nop
    ctx->pc = 0x1d389cu;
    // NOP
label_1d38a0:
    // 0x1d38a0: 0x0  nop
    ctx->pc = 0x1d38a0u;
    // NOP
label_1d38a4:
    // 0x1d38a4: 0x1010  mfhi        $v0
    ctx->pc = 0x1d38a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d38a8:
    // 0x1d38a8: 0xc050bb4  jal         func_142ED0
label_1d38ac:
    if (ctx->pc == 0x1D38ACu) {
        ctx->pc = 0x1D38ACu;
            // 0x1d38ac: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D38B0u;
        goto label_1d38b0;
    }
    ctx->pc = 0x1D38A8u;
    SET_GPR_U32(ctx, 31, 0x1D38B0u);
    ctx->pc = 0x1D38ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38A8u;
            // 0x1d38ac: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38B0u; }
        if (ctx->pc != 0x1D38B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38B0u; }
        if (ctx->pc != 0x1D38B0u) { return; }
    }
    ctx->pc = 0x1D38B0u;
label_1d38b0:
    // 0x1d38b0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d38b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d38b4:
    // 0x1d38b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d38b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d38b8:
    // 0x1d38b8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d38b8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d38bc:
    // 0x1d38bc: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1d38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1d38c0:
    // 0x1d38c0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d38c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d38c4:
    // 0x1d38c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d38c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d38c8:
    // 0x1d38c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1d38c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d38cc:
    // 0x1d38cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d38ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d38d0:
    // 0x1d38d0: 0xc053740  jal         func_14DD00
label_1d38d4:
    if (ctx->pc == 0x1D38D4u) {
        ctx->pc = 0x1D38D4u;
            // 0x1d38d4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D38D8u;
        goto label_1d38d8;
    }
    ctx->pc = 0x1D38D0u;
    SET_GPR_U32(ctx, 31, 0x1D38D8u);
    ctx->pc = 0x1D38D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38D0u;
            // 0x1d38d4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38D8u; }
        if (ctx->pc != 0x1D38D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38D8u; }
        if (ctx->pc != 0x1D38D8u) { return; }
    }
    ctx->pc = 0x1D38D8u;
label_1d38d8:
    // 0x1d38d8: 0xc050bb4  jal         func_142ED0
label_1d38dc:
    if (ctx->pc == 0x1D38DCu) {
        ctx->pc = 0x1D38E0u;
        goto label_1d38e0;
    }
    ctx->pc = 0x1D38D8u;
    SET_GPR_U32(ctx, 31, 0x1D38E0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38E0u; }
        if (ctx->pc != 0x1D38E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38E0u; }
        if (ctx->pc != 0x1D38E0u) { return; }
    }
    ctx->pc = 0x1D38E0u;
label_1d38e0:
    // 0x1d38e0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d38e4:
    // 0x1d38e4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d38e8:
    // 0x1d38e8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d38e8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d38ec:
    // 0x1d38ec: 0x0  nop
    ctx->pc = 0x1d38ecu;
    // NOP
label_1d38f0:
    // 0x1d38f0: 0x0  nop
    ctx->pc = 0x1d38f0u;
    // NOP
label_1d38f4:
    // 0x1d38f4: 0x1010  mfhi        $v0
    ctx->pc = 0x1d38f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d38f8:
    // 0x1d38f8: 0xc050bb4  jal         func_142ED0
label_1d38fc:
    if (ctx->pc == 0x1D38FCu) {
        ctx->pc = 0x1D38FCu;
            // 0x1d38fc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3900u;
        goto label_1d3900;
    }
    ctx->pc = 0x1D38F8u;
    SET_GPR_U32(ctx, 31, 0x1D3900u);
    ctx->pc = 0x1D38FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38F8u;
            // 0x1d38fc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3900u; }
        if (ctx->pc != 0x1D3900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3900u; }
        if (ctx->pc != 0x1D3900u) { return; }
    }
    ctx->pc = 0x1D3900u;
label_1d3900:
    // 0x1d3900: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d3900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d3904:
    // 0x1d3904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3908:
    // 0x1d3908: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d3908u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d390c:
    // 0x1d390c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1d3910:
    // 0x1d3910: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d3910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d3914:
    // 0x1d3914: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d3914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3918:
    // 0x1d3918: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3918u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d391c:
    // 0x1d391c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d391cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d3920:
    // 0x1d3920: 0xc053740  jal         func_14DD00
label_1d3924:
    if (ctx->pc == 0x1D3924u) {
        ctx->pc = 0x1D3924u;
            // 0x1d3924: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3928u;
        goto label_1d3928;
    }
    ctx->pc = 0x1D3920u;
    SET_GPR_U32(ctx, 31, 0x1D3928u);
    ctx->pc = 0x1D3924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3920u;
            // 0x1d3924: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3928u; }
        if (ctx->pc != 0x1D3928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3928u; }
        if (ctx->pc != 0x1D3928u) { return; }
    }
    ctx->pc = 0x1D3928u;
label_1d3928:
    // 0x1d3928: 0xc050bb4  jal         func_142ED0
label_1d392c:
    if (ctx->pc == 0x1D392Cu) {
        ctx->pc = 0x1D3930u;
        goto label_1d3930;
    }
    ctx->pc = 0x1D3928u;
    SET_GPR_U32(ctx, 31, 0x1D3930u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3930u; }
        if (ctx->pc != 0x1D3930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3930u; }
        if (ctx->pc != 0x1D3930u) { return; }
    }
    ctx->pc = 0x1D3930u;
label_1d3930:
    // 0x1d3930: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d3930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d3934:
    // 0x1d3934: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d3934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d3938:
    // 0x1d3938: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d3938u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d393c:
    // 0x1d393c: 0x0  nop
    ctx->pc = 0x1d393cu;
    // NOP
label_1d3940:
    // 0x1d3940: 0x0  nop
    ctx->pc = 0x1d3940u;
    // NOP
label_1d3944:
    // 0x1d3944: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3944u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3948:
    // 0x1d3948: 0xc050bb4  jal         func_142ED0
label_1d394c:
    if (ctx->pc == 0x1D394Cu) {
        ctx->pc = 0x1D394Cu;
            // 0x1d394c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3950u;
        goto label_1d3950;
    }
    ctx->pc = 0x1D3948u;
    SET_GPR_U32(ctx, 31, 0x1D3950u);
    ctx->pc = 0x1D394Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3948u;
            // 0x1d394c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3950u; }
        if (ctx->pc != 0x1D3950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3950u; }
        if (ctx->pc != 0x1D3950u) { return; }
    }
    ctx->pc = 0x1D3950u;
label_1d3950:
    // 0x1d3950: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d3950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d3954:
    // 0x1d3954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3958:
    // 0x1d3958: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d3958u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d395c:
    // 0x1d395c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1d3960:
    // 0x1d3960: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d3960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d3964:
    // 0x1d3964: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d3964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3968:
    // 0x1d3968: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3968u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d396c:
    // 0x1d396c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d396cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d3970:
    // 0x1d3970: 0xc053740  jal         func_14DD00
label_1d3974:
    if (ctx->pc == 0x1D3974u) {
        ctx->pc = 0x1D3974u;
            // 0x1d3974: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3978u;
        goto label_1d3978;
    }
    ctx->pc = 0x1D3970u;
    SET_GPR_U32(ctx, 31, 0x1D3978u);
    ctx->pc = 0x1D3974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3970u;
            // 0x1d3974: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3978u; }
        if (ctx->pc != 0x1D3978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3978u; }
        if (ctx->pc != 0x1D3978u) { return; }
    }
    ctx->pc = 0x1D3978u;
label_1d3978:
    // 0x1d3978: 0xc050bb4  jal         func_142ED0
label_1d397c:
    if (ctx->pc == 0x1D397Cu) {
        ctx->pc = 0x1D3980u;
        goto label_1d3980;
    }
    ctx->pc = 0x1D3978u;
    SET_GPR_U32(ctx, 31, 0x1D3980u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3980u; }
        if (ctx->pc != 0x1D3980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3980u; }
        if (ctx->pc != 0x1D3980u) { return; }
    }
    ctx->pc = 0x1D3980u;
label_1d3980:
    // 0x1d3980: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d3980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d3984:
    // 0x1d3984: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d3984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d3988:
    // 0x1d3988: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d3988u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d398c:
    // 0x1d398c: 0x0  nop
    ctx->pc = 0x1d398cu;
    // NOP
label_1d3990:
    // 0x1d3990: 0x0  nop
    ctx->pc = 0x1d3990u;
    // NOP
label_1d3994:
    // 0x1d3994: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3994u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3998:
    // 0x1d3998: 0xc050bb4  jal         func_142ED0
label_1d399c:
    if (ctx->pc == 0x1D399Cu) {
        ctx->pc = 0x1D399Cu;
            // 0x1d399c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D39A0u;
        goto label_1d39a0;
    }
    ctx->pc = 0x1D3998u;
    SET_GPR_U32(ctx, 31, 0x1D39A0u);
    ctx->pc = 0x1D399Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3998u;
            // 0x1d399c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39A0u; }
        if (ctx->pc != 0x1D39A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39A0u; }
        if (ctx->pc != 0x1D39A0u) { return; }
    }
    ctx->pc = 0x1D39A0u;
label_1d39a0:
    // 0x1d39a0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d39a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d39a4:
    // 0x1d39a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d39a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d39a8:
    // 0x1d39a8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d39a8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d39ac:
    // 0x1d39ac: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d39acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1d39b0:
    // 0x1d39b0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d39b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d39b4:
    // 0x1d39b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d39b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d39b8:
    // 0x1d39b8: 0x1010  mfhi        $v0
    ctx->pc = 0x1d39b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d39bc:
    // 0x1d39bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d39bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d39c0:
    // 0x1d39c0: 0xc053740  jal         func_14DD00
label_1d39c4:
    if (ctx->pc == 0x1D39C4u) {
        ctx->pc = 0x1D39C4u;
            // 0x1d39c4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D39C8u;
        goto label_1d39c8;
    }
    ctx->pc = 0x1D39C0u;
    SET_GPR_U32(ctx, 31, 0x1D39C8u);
    ctx->pc = 0x1D39C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D39C0u;
            // 0x1d39c4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39C8u; }
        if (ctx->pc != 0x1D39C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39C8u; }
        if (ctx->pc != 0x1D39C8u) { return; }
    }
    ctx->pc = 0x1D39C8u;
label_1d39c8:
    // 0x1d39c8: 0xc050bb4  jal         func_142ED0
label_1d39cc:
    if (ctx->pc == 0x1D39CCu) {
        ctx->pc = 0x1D39D0u;
        goto label_1d39d0;
    }
    ctx->pc = 0x1D39C8u;
    SET_GPR_U32(ctx, 31, 0x1D39D0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39D0u; }
        if (ctx->pc != 0x1D39D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39D0u; }
        if (ctx->pc != 0x1D39D0u) { return; }
    }
    ctx->pc = 0x1D39D0u;
label_1d39d0:
    // 0x1d39d0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d39d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d39d4:
    // 0x1d39d4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d39d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d39d8:
    // 0x1d39d8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d39d8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d39dc:
    // 0x1d39dc: 0x0  nop
    ctx->pc = 0x1d39dcu;
    // NOP
label_1d39e0:
    // 0x1d39e0: 0x0  nop
    ctx->pc = 0x1d39e0u;
    // NOP
label_1d39e4:
    // 0x1d39e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1d39e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d39e8:
    // 0x1d39e8: 0xc050bb4  jal         func_142ED0
label_1d39ec:
    if (ctx->pc == 0x1D39ECu) {
        ctx->pc = 0x1D39ECu;
            // 0x1d39ec: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D39F0u;
        goto label_1d39f0;
    }
    ctx->pc = 0x1D39E8u;
    SET_GPR_U32(ctx, 31, 0x1D39F0u);
    ctx->pc = 0x1D39ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D39E8u;
            // 0x1d39ec: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39F0u; }
        if (ctx->pc != 0x1D39F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39F0u; }
        if (ctx->pc != 0x1D39F0u) { return; }
    }
    ctx->pc = 0x1D39F0u;
label_1d39f0:
    // 0x1d39f0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d39f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d39f4:
    // 0x1d39f4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d39f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d39f8:
    // 0x1d39f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d39f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d39fc:
    // 0x1d39fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d39fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3a00:
    // 0x1d3a00: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1d3a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1d3a04:
    // 0x1d3a04: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1d3a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_1d3a08:
    // 0x1d3a08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d3a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d3a0c:
    // 0x1d3a0c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d3a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3a10:
    // 0x1d3a10: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3a10u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3a14:
    // 0x1d3a14: 0xc053740  jal         func_14DD00
label_1d3a18:
    if (ctx->pc == 0x1D3A18u) {
        ctx->pc = 0x1D3A18u;
            // 0x1d3a18: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3A1Cu;
        goto label_1d3a1c;
    }
    ctx->pc = 0x1D3A14u;
    SET_GPR_U32(ctx, 31, 0x1D3A1Cu);
    ctx->pc = 0x1D3A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A14u;
            // 0x1d3a18: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A1Cu; }
        if (ctx->pc != 0x1D3A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A1Cu; }
        if (ctx->pc != 0x1D3A1Cu) { return; }
    }
    ctx->pc = 0x1D3A1Cu;
label_1d3a1c:
    // 0x1d3a1c: 0xc050bb4  jal         func_142ED0
label_1d3a20:
    if (ctx->pc == 0x1D3A20u) {
        ctx->pc = 0x1D3A24u;
        goto label_1d3a24;
    }
    ctx->pc = 0x1D3A1Cu;
    SET_GPR_U32(ctx, 31, 0x1D3A24u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A24u; }
        if (ctx->pc != 0x1D3A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A24u; }
        if (ctx->pc != 0x1D3A24u) { return; }
    }
    ctx->pc = 0x1D3A24u;
label_1d3a24:
    // 0x1d3a24: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d3a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d3a28:
    // 0x1d3a28: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d3a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d3a2c:
    // 0x1d3a2c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d3a2cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3a30:
    // 0x1d3a30: 0x0  nop
    ctx->pc = 0x1d3a30u;
    // NOP
label_1d3a34:
    // 0x1d3a34: 0x0  nop
    ctx->pc = 0x1d3a34u;
    // NOP
label_1d3a38:
    // 0x1d3a38: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3a38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3a3c:
    // 0x1d3a3c: 0xc050bb4  jal         func_142ED0
label_1d3a40:
    if (ctx->pc == 0x1D3A40u) {
        ctx->pc = 0x1D3A40u;
            // 0x1d3a40: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3A44u;
        goto label_1d3a44;
    }
    ctx->pc = 0x1D3A3Cu;
    SET_GPR_U32(ctx, 31, 0x1D3A44u);
    ctx->pc = 0x1D3A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A3Cu;
            // 0x1d3a40: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A44u; }
        if (ctx->pc != 0x1D3A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A44u; }
        if (ctx->pc != 0x1D3A44u) { return; }
    }
    ctx->pc = 0x1D3A44u;
label_1d3a44:
    // 0x1d3a44: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d3a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d3a48:
    // 0x1d3a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3a4c:
    // 0x1d3a4c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d3a4cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3a50:
    // 0x1d3a50: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1d3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1d3a54:
    // 0x1d3a54: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d3a58:
    // 0x1d3a58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d3a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3a5c:
    // 0x1d3a5c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3a5cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3a60:
    // 0x1d3a60: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d3a60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d3a64:
    // 0x1d3a64: 0xc053740  jal         func_14DD00
label_1d3a68:
    if (ctx->pc == 0x1D3A68u) {
        ctx->pc = 0x1D3A68u;
            // 0x1d3a68: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3A6Cu;
        goto label_1d3a6c;
    }
    ctx->pc = 0x1D3A64u;
    SET_GPR_U32(ctx, 31, 0x1D3A6Cu);
    ctx->pc = 0x1D3A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A64u;
            // 0x1d3a68: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A6Cu; }
        if (ctx->pc != 0x1D3A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A6Cu; }
        if (ctx->pc != 0x1D3A6Cu) { return; }
    }
    ctx->pc = 0x1D3A6Cu;
label_1d3a6c:
    // 0x1d3a6c: 0xc050bb4  jal         func_142ED0
label_1d3a70:
    if (ctx->pc == 0x1D3A70u) {
        ctx->pc = 0x1D3A74u;
        goto label_1d3a74;
    }
    ctx->pc = 0x1D3A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D3A74u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A74u; }
        if (ctx->pc != 0x1D3A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A74u; }
        if (ctx->pc != 0x1D3A74u) { return; }
    }
    ctx->pc = 0x1D3A74u;
label_1d3a74:
    // 0x1d3a74: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d3a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d3a78:
    // 0x1d3a78: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d3a7c:
    // 0x1d3a7c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d3a7cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3a80:
    // 0x1d3a80: 0x0  nop
    ctx->pc = 0x1d3a80u;
    // NOP
label_1d3a84:
    // 0x1d3a84: 0x0  nop
    ctx->pc = 0x1d3a84u;
    // NOP
label_1d3a88:
    // 0x1d3a88: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3a88u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3a8c:
    // 0x1d3a8c: 0xc050bb4  jal         func_142ED0
label_1d3a90:
    if (ctx->pc == 0x1D3A90u) {
        ctx->pc = 0x1D3A90u;
            // 0x1d3a90: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3A94u;
        goto label_1d3a94;
    }
    ctx->pc = 0x1D3A8Cu;
    SET_GPR_U32(ctx, 31, 0x1D3A94u);
    ctx->pc = 0x1D3A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A8Cu;
            // 0x1d3a90: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A94u; }
        if (ctx->pc != 0x1D3A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A94u; }
        if (ctx->pc != 0x1D3A94u) { return; }
    }
    ctx->pc = 0x1D3A94u;
label_1d3a94:
    // 0x1d3a94: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d3a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d3a98:
    // 0x1d3a98: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d3a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d3a9c:
    // 0x1d3a9c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d3a9cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3aa0:
    // 0x1d3aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3aa4:
    // 0x1d3aa4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1d3aa8:
    // 0x1d3aa8: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x1d3aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
label_1d3aac:
    // 0x1d3aac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d3aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d3ab0:
    // 0x1d3ab0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d3ab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3ab4:
    // 0x1d3ab4: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3ab4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3ab8:
    // 0x1d3ab8: 0xc053740  jal         func_14DD00
label_1d3abc:
    if (ctx->pc == 0x1D3ABCu) {
        ctx->pc = 0x1D3ABCu;
            // 0x1d3abc: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3AC0u;
        goto label_1d3ac0;
    }
    ctx->pc = 0x1D3AB8u;
    SET_GPR_U32(ctx, 31, 0x1D3AC0u);
    ctx->pc = 0x1D3ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3AB8u;
            // 0x1d3abc: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3AC0u; }
        if (ctx->pc != 0x1D3AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3AC0u; }
        if (ctx->pc != 0x1D3AC0u) { return; }
    }
    ctx->pc = 0x1D3AC0u;
label_1d3ac0:
    // 0x1d3ac0: 0xc050bb4  jal         func_142ED0
label_1d3ac4:
    if (ctx->pc == 0x1D3AC4u) {
        ctx->pc = 0x1D3AC8u;
        goto label_1d3ac8;
    }
    ctx->pc = 0x1D3AC0u;
    SET_GPR_U32(ctx, 31, 0x1D3AC8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3AC8u; }
        if (ctx->pc != 0x1D3AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3AC8u; }
        if (ctx->pc != 0x1D3AC8u) { return; }
    }
    ctx->pc = 0x1D3AC8u;
label_1d3ac8:
    // 0x1d3ac8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d3ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d3acc:
    // 0x1d3acc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d3accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d3ad0:
    // 0x1d3ad0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d3ad0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3ad4:
    // 0x1d3ad4: 0x0  nop
    ctx->pc = 0x1d3ad4u;
    // NOP
label_1d3ad8:
    // 0x1d3ad8: 0x0  nop
    ctx->pc = 0x1d3ad8u;
    // NOP
label_1d3adc:
    // 0x1d3adc: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3adcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3ae0:
    // 0x1d3ae0: 0xc050bb4  jal         func_142ED0
label_1d3ae4:
    if (ctx->pc == 0x1D3AE4u) {
        ctx->pc = 0x1D3AE4u;
            // 0x1d3ae4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3AE8u;
        goto label_1d3ae8;
    }
    ctx->pc = 0x1D3AE0u;
    SET_GPR_U32(ctx, 31, 0x1D3AE8u);
    ctx->pc = 0x1D3AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3AE0u;
            // 0x1d3ae4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3AE8u; }
        if (ctx->pc != 0x1D3AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3AE8u; }
        if (ctx->pc != 0x1D3AE8u) { return; }
    }
    ctx->pc = 0x1D3AE8u;
label_1d3ae8:
    // 0x1d3ae8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d3aec:
    // 0x1d3aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3af0:
    // 0x1d3af0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d3af0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3af4:
    // 0x1d3af4: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1d3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1d3af8:
    // 0x1d3af8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d3af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d3afc:
    // 0x1d3afc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d3afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3b00:
    // 0x1d3b00: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3b00u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3b04:
    // 0x1d3b04: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d3b04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d3b08:
    // 0x1d3b08: 0xc053740  jal         func_14DD00
label_1d3b0c:
    if (ctx->pc == 0x1D3B0Cu) {
        ctx->pc = 0x1D3B0Cu;
            // 0x1d3b0c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3B10u;
        goto label_1d3b10;
    }
    ctx->pc = 0x1D3B08u;
    SET_GPR_U32(ctx, 31, 0x1D3B10u);
    ctx->pc = 0x1D3B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B08u;
            // 0x1d3b0c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B10u; }
        if (ctx->pc != 0x1D3B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B10u; }
        if (ctx->pc != 0x1D3B10u) { return; }
    }
    ctx->pc = 0x1D3B10u;
label_1d3b10:
    // 0x1d3b10: 0xc050bb4  jal         func_142ED0
label_1d3b14:
    if (ctx->pc == 0x1D3B14u) {
        ctx->pc = 0x1D3B18u;
        goto label_1d3b18;
    }
    ctx->pc = 0x1D3B10u;
    SET_GPR_U32(ctx, 31, 0x1D3B18u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B18u; }
        if (ctx->pc != 0x1D3B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B18u; }
        if (ctx->pc != 0x1D3B18u) { return; }
    }
    ctx->pc = 0x1D3B18u;
label_1d3b18:
    // 0x1d3b18: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d3b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d3b1c:
    // 0x1d3b1c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d3b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d3b20:
    // 0x1d3b20: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d3b20u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3b24:
    // 0x1d3b24: 0x0  nop
    ctx->pc = 0x1d3b24u;
    // NOP
label_1d3b28:
    // 0x1d3b28: 0x0  nop
    ctx->pc = 0x1d3b28u;
    // NOP
label_1d3b2c:
    // 0x1d3b2c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3b2cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3b30:
    // 0x1d3b30: 0xc050bb4  jal         func_142ED0
label_1d3b34:
    if (ctx->pc == 0x1D3B34u) {
        ctx->pc = 0x1D3B34u;
            // 0x1d3b34: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3B38u;
        goto label_1d3b38;
    }
    ctx->pc = 0x1D3B30u;
    SET_GPR_U32(ctx, 31, 0x1D3B38u);
    ctx->pc = 0x1D3B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B30u;
            // 0x1d3b34: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B38u; }
        if (ctx->pc != 0x1D3B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B38u; }
        if (ctx->pc != 0x1D3B38u) { return; }
    }
    ctx->pc = 0x1D3B38u;
label_1d3b38:
    // 0x1d3b38: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d3b3c:
    // 0x1d3b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3b40:
    // 0x1d3b40: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d3b40u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d3b44:
    // 0x1d3b44: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1d3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1d3b48:
    // 0x1d3b48: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d3b4c:
    // 0x1d3b4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d3b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3b50:
    // 0x1d3b50: 0x1010  mfhi        $v0
    ctx->pc = 0x1d3b50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d3b54:
    // 0x1d3b54: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d3b54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d3b58:
    // 0x1d3b58: 0xc053740  jal         func_14DD00
label_1d3b5c:
    if (ctx->pc == 0x1D3B5Cu) {
        ctx->pc = 0x1D3B5Cu;
            // 0x1d3b5c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D3B60u;
        goto label_1d3b60;
    }
    ctx->pc = 0x1D3B58u;
    SET_GPR_U32(ctx, 31, 0x1D3B60u);
    ctx->pc = 0x1D3B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B58u;
            // 0x1d3b5c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B60u; }
        if (ctx->pc != 0x1D3B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B60u; }
        if (ctx->pc != 0x1D3B60u) { return; }
    }
    ctx->pc = 0x1D3B60u;
label_1d3b60:
    // 0x1d3b60: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1d3b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d3b64:
    // 0x1d3b64: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1d3b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d3b68:
    // 0x1d3b68: 0xc07b0ac  jal         func_1EC2B0
label_1d3b6c:
    if (ctx->pc == 0x1D3B6Cu) {
        ctx->pc = 0x1D3B6Cu;
            // 0x1d3b6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D3B70u;
        goto label_1d3b70;
    }
    ctx->pc = 0x1D3B68u;
    SET_GPR_U32(ctx, 31, 0x1D3B70u);
    ctx->pc = 0x1D3B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B68u;
            // 0x1d3b6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B70u; }
        if (ctx->pc != 0x1D3B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B70u; }
        if (ctx->pc != 0x1D3B70u) { return; }
    }
    ctx->pc = 0x1D3B70u;
label_1d3b70:
    // 0x1d3b70: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1d3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1d3b74:
    // 0x1d3b74: 0x40f809  jalr        $v0
label_1d3b78:
    if (ctx->pc == 0x1D3B78u) {
        ctx->pc = 0x1D3B78u;
            // 0x1d3b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B7Cu;
        goto label_1d3b7c;
    }
    ctx->pc = 0x1D3B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D3B7Cu);
        ctx->pc = 0x1D3B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B74u;
            // 0x1d3b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D29A0u: goto label_1d29a0;
            case 0x1D29A4u: goto label_1d29a4;
            case 0x1D29A8u: goto label_1d29a8;
            case 0x1D29ACu: goto label_1d29ac;
            case 0x1D29B0u: goto label_1d29b0;
            case 0x1D29B4u: goto label_1d29b4;
            case 0x1D29B8u: goto label_1d29b8;
            case 0x1D29BCu: goto label_1d29bc;
            case 0x1D29C0u: goto label_1d29c0;
            case 0x1D29C4u: goto label_1d29c4;
            case 0x1D29C8u: goto label_1d29c8;
            case 0x1D29CCu: goto label_1d29cc;
            case 0x1D29D0u: goto label_1d29d0;
            case 0x1D29D4u: goto label_1d29d4;
            case 0x1D29D8u: goto label_1d29d8;
            case 0x1D29DCu: goto label_1d29dc;
            case 0x1D29E0u: goto label_1d29e0;
            case 0x1D29E4u: goto label_1d29e4;
            case 0x1D29E8u: goto label_1d29e8;
            case 0x1D29ECu: goto label_1d29ec;
            case 0x1D29F0u: goto label_1d29f0;
            case 0x1D29F4u: goto label_1d29f4;
            case 0x1D29F8u: goto label_1d29f8;
            case 0x1D29FCu: goto label_1d29fc;
            case 0x1D2A00u: goto label_1d2a00;
            case 0x1D2A04u: goto label_1d2a04;
            case 0x1D2A08u: goto label_1d2a08;
            case 0x1D2A0Cu: goto label_1d2a0c;
            case 0x1D2A10u: goto label_1d2a10;
            case 0x1D2A14u: goto label_1d2a14;
            case 0x1D2A18u: goto label_1d2a18;
            case 0x1D2A1Cu: goto label_1d2a1c;
            case 0x1D2A20u: goto label_1d2a20;
            case 0x1D2A24u: goto label_1d2a24;
            case 0x1D2A28u: goto label_1d2a28;
            case 0x1D2A2Cu: goto label_1d2a2c;
            case 0x1D2A30u: goto label_1d2a30;
            case 0x1D2A34u: goto label_1d2a34;
            case 0x1D2A38u: goto label_1d2a38;
            case 0x1D2A3Cu: goto label_1d2a3c;
            case 0x1D2A40u: goto label_1d2a40;
            case 0x1D2A44u: goto label_1d2a44;
            case 0x1D2A48u: goto label_1d2a48;
            case 0x1D2A4Cu: goto label_1d2a4c;
            case 0x1D2A50u: goto label_1d2a50;
            case 0x1D2A54u: goto label_1d2a54;
            case 0x1D2A58u: goto label_1d2a58;
            case 0x1D2A5Cu: goto label_1d2a5c;
            case 0x1D2A60u: goto label_1d2a60;
            case 0x1D2A64u: goto label_1d2a64;
            case 0x1D2A68u: goto label_1d2a68;
            case 0x1D2A6Cu: goto label_1d2a6c;
            case 0x1D2A70u: goto label_1d2a70;
            case 0x1D2A74u: goto label_1d2a74;
            case 0x1D2A78u: goto label_1d2a78;
            case 0x1D2A7Cu: goto label_1d2a7c;
            case 0x1D2A80u: goto label_1d2a80;
            case 0x1D2A84u: goto label_1d2a84;
            case 0x1D2A88u: goto label_1d2a88;
            case 0x1D2A8Cu: goto label_1d2a8c;
            case 0x1D2A90u: goto label_1d2a90;
            case 0x1D2A94u: goto label_1d2a94;
            case 0x1D2A98u: goto label_1d2a98;
            case 0x1D2A9Cu: goto label_1d2a9c;
            case 0x1D2AA0u: goto label_1d2aa0;
            case 0x1D2AA4u: goto label_1d2aa4;
            case 0x1D2AA8u: goto label_1d2aa8;
            case 0x1D2AACu: goto label_1d2aac;
            case 0x1D2AB0u: goto label_1d2ab0;
            case 0x1D2AB4u: goto label_1d2ab4;
            case 0x1D2AB8u: goto label_1d2ab8;
            case 0x1D2ABCu: goto label_1d2abc;
            case 0x1D2AC0u: goto label_1d2ac0;
            case 0x1D2AC4u: goto label_1d2ac4;
            case 0x1D2AC8u: goto label_1d2ac8;
            case 0x1D2ACCu: goto label_1d2acc;
            case 0x1D2AD0u: goto label_1d2ad0;
            case 0x1D2AD4u: goto label_1d2ad4;
            case 0x1D2AD8u: goto label_1d2ad8;
            case 0x1D2ADCu: goto label_1d2adc;
            case 0x1D2AE0u: goto label_1d2ae0;
            case 0x1D2AE4u: goto label_1d2ae4;
            case 0x1D2AE8u: goto label_1d2ae8;
            case 0x1D2AECu: goto label_1d2aec;
            case 0x1D2AF0u: goto label_1d2af0;
            case 0x1D2AF4u: goto label_1d2af4;
            case 0x1D2AF8u: goto label_1d2af8;
            case 0x1D2AFCu: goto label_1d2afc;
            case 0x1D2B00u: goto label_1d2b00;
            case 0x1D2B04u: goto label_1d2b04;
            case 0x1D2B08u: goto label_1d2b08;
            case 0x1D2B0Cu: goto label_1d2b0c;
            case 0x1D2B10u: goto label_1d2b10;
            case 0x1D2B14u: goto label_1d2b14;
            case 0x1D2B18u: goto label_1d2b18;
            case 0x1D2B1Cu: goto label_1d2b1c;
            case 0x1D2B20u: goto label_1d2b20;
            case 0x1D2B24u: goto label_1d2b24;
            case 0x1D2B28u: goto label_1d2b28;
            case 0x1D2B2Cu: goto label_1d2b2c;
            case 0x1D2B30u: goto label_1d2b30;
            case 0x1D2B34u: goto label_1d2b34;
            case 0x1D2B38u: goto label_1d2b38;
            case 0x1D2B3Cu: goto label_1d2b3c;
            case 0x1D2B40u: goto label_1d2b40;
            case 0x1D2B44u: goto label_1d2b44;
            case 0x1D2B48u: goto label_1d2b48;
            case 0x1D2B4Cu: goto label_1d2b4c;
            case 0x1D2B50u: goto label_1d2b50;
            case 0x1D2B54u: goto label_1d2b54;
            case 0x1D2B58u: goto label_1d2b58;
            case 0x1D2B5Cu: goto label_1d2b5c;
            case 0x1D2B60u: goto label_1d2b60;
            case 0x1D2B64u: goto label_1d2b64;
            case 0x1D2B68u: goto label_1d2b68;
            case 0x1D2B6Cu: goto label_1d2b6c;
            case 0x1D2B70u: goto label_1d2b70;
            case 0x1D2B74u: goto label_1d2b74;
            case 0x1D2B78u: goto label_1d2b78;
            case 0x1D2B7Cu: goto label_1d2b7c;
            case 0x1D2B80u: goto label_1d2b80;
            case 0x1D2B84u: goto label_1d2b84;
            case 0x1D2B88u: goto label_1d2b88;
            case 0x1D2B8Cu: goto label_1d2b8c;
            case 0x1D2B90u: goto label_1d2b90;
            case 0x1D2B94u: goto label_1d2b94;
            case 0x1D2B98u: goto label_1d2b98;
            case 0x1D2B9Cu: goto label_1d2b9c;
            case 0x1D2BA0u: goto label_1d2ba0;
            case 0x1D2BA4u: goto label_1d2ba4;
            case 0x1D2BA8u: goto label_1d2ba8;
            case 0x1D2BACu: goto label_1d2bac;
            case 0x1D2BB0u: goto label_1d2bb0;
            case 0x1D2BB4u: goto label_1d2bb4;
            case 0x1D2BB8u: goto label_1d2bb8;
            case 0x1D2BBCu: goto label_1d2bbc;
            case 0x1D2BC0u: goto label_1d2bc0;
            case 0x1D2BC4u: goto label_1d2bc4;
            case 0x1D2BC8u: goto label_1d2bc8;
            case 0x1D2BCCu: goto label_1d2bcc;
            case 0x1D2BD0u: goto label_1d2bd0;
            case 0x1D2BD4u: goto label_1d2bd4;
            case 0x1D2BD8u: goto label_1d2bd8;
            case 0x1D2BDCu: goto label_1d2bdc;
            case 0x1D2BE0u: goto label_1d2be0;
            case 0x1D2BE4u: goto label_1d2be4;
            case 0x1D2BE8u: goto label_1d2be8;
            case 0x1D2BECu: goto label_1d2bec;
            case 0x1D2BF0u: goto label_1d2bf0;
            case 0x1D2BF4u: goto label_1d2bf4;
            case 0x1D2BF8u: goto label_1d2bf8;
            case 0x1D2BFCu: goto label_1d2bfc;
            case 0x1D2C00u: goto label_1d2c00;
            case 0x1D2C04u: goto label_1d2c04;
            case 0x1D2C08u: goto label_1d2c08;
            case 0x1D2C0Cu: goto label_1d2c0c;
            case 0x1D2C10u: goto label_1d2c10;
            case 0x1D2C14u: goto label_1d2c14;
            case 0x1D2C18u: goto label_1d2c18;
            case 0x1D2C1Cu: goto label_1d2c1c;
            case 0x1D2C20u: goto label_1d2c20;
            case 0x1D2C24u: goto label_1d2c24;
            case 0x1D2C28u: goto label_1d2c28;
            case 0x1D2C2Cu: goto label_1d2c2c;
            case 0x1D2C30u: goto label_1d2c30;
            case 0x1D2C34u: goto label_1d2c34;
            case 0x1D2C38u: goto label_1d2c38;
            case 0x1D2C3Cu: goto label_1d2c3c;
            case 0x1D2C40u: goto label_1d2c40;
            case 0x1D2C44u: goto label_1d2c44;
            case 0x1D2C48u: goto label_1d2c48;
            case 0x1D2C4Cu: goto label_1d2c4c;
            case 0x1D2C50u: goto label_1d2c50;
            case 0x1D2C54u: goto label_1d2c54;
            case 0x1D2C58u: goto label_1d2c58;
            case 0x1D2C5Cu: goto label_1d2c5c;
            case 0x1D2C60u: goto label_1d2c60;
            case 0x1D2C64u: goto label_1d2c64;
            case 0x1D2C68u: goto label_1d2c68;
            case 0x1D2C6Cu: goto label_1d2c6c;
            case 0x1D2C70u: goto label_1d2c70;
            case 0x1D2C74u: goto label_1d2c74;
            case 0x1D2C78u: goto label_1d2c78;
            case 0x1D2C7Cu: goto label_1d2c7c;
            case 0x1D2C80u: goto label_1d2c80;
            case 0x1D2C84u: goto label_1d2c84;
            case 0x1D2C88u: goto label_1d2c88;
            case 0x1D2C8Cu: goto label_1d2c8c;
            case 0x1D2C90u: goto label_1d2c90;
            case 0x1D2C94u: goto label_1d2c94;
            case 0x1D2C98u: goto label_1d2c98;
            case 0x1D2C9Cu: goto label_1d2c9c;
            case 0x1D2CA0u: goto label_1d2ca0;
            case 0x1D2CA4u: goto label_1d2ca4;
            case 0x1D2CA8u: goto label_1d2ca8;
            case 0x1D2CACu: goto label_1d2cac;
            case 0x1D2CB0u: goto label_1d2cb0;
            case 0x1D2CB4u: goto label_1d2cb4;
            case 0x1D2CB8u: goto label_1d2cb8;
            case 0x1D2CBCu: goto label_1d2cbc;
            case 0x1D2CC0u: goto label_1d2cc0;
            case 0x1D2CC4u: goto label_1d2cc4;
            case 0x1D2CC8u: goto label_1d2cc8;
            case 0x1D2CCCu: goto label_1d2ccc;
            case 0x1D2CD0u: goto label_1d2cd0;
            case 0x1D2CD4u: goto label_1d2cd4;
            case 0x1D2CD8u: goto label_1d2cd8;
            case 0x1D2CDCu: goto label_1d2cdc;
            case 0x1D2CE0u: goto label_1d2ce0;
            case 0x1D2CE4u: goto label_1d2ce4;
            case 0x1D2CE8u: goto label_1d2ce8;
            case 0x1D2CECu: goto label_1d2cec;
            case 0x1D2CF0u: goto label_1d2cf0;
            case 0x1D2CF4u: goto label_1d2cf4;
            case 0x1D2CF8u: goto label_1d2cf8;
            case 0x1D2CFCu: goto label_1d2cfc;
            case 0x1D2D00u: goto label_1d2d00;
            case 0x1D2D04u: goto label_1d2d04;
            case 0x1D2D08u: goto label_1d2d08;
            case 0x1D2D0Cu: goto label_1d2d0c;
            case 0x1D2D10u: goto label_1d2d10;
            case 0x1D2D14u: goto label_1d2d14;
            case 0x1D2D18u: goto label_1d2d18;
            case 0x1D2D1Cu: goto label_1d2d1c;
            case 0x1D2D20u: goto label_1d2d20;
            case 0x1D2D24u: goto label_1d2d24;
            case 0x1D2D28u: goto label_1d2d28;
            case 0x1D2D2Cu: goto label_1d2d2c;
            case 0x1D2D30u: goto label_1d2d30;
            case 0x1D2D34u: goto label_1d2d34;
            case 0x1D2D38u: goto label_1d2d38;
            case 0x1D2D3Cu: goto label_1d2d3c;
            case 0x1D2D40u: goto label_1d2d40;
            case 0x1D2D44u: goto label_1d2d44;
            case 0x1D2D48u: goto label_1d2d48;
            case 0x1D2D4Cu: goto label_1d2d4c;
            case 0x1D2D50u: goto label_1d2d50;
            case 0x1D2D54u: goto label_1d2d54;
            case 0x1D2D58u: goto label_1d2d58;
            case 0x1D2D5Cu: goto label_1d2d5c;
            case 0x1D2D60u: goto label_1d2d60;
            case 0x1D2D64u: goto label_1d2d64;
            case 0x1D2D68u: goto label_1d2d68;
            case 0x1D2D6Cu: goto label_1d2d6c;
            case 0x1D2D70u: goto label_1d2d70;
            case 0x1D2D74u: goto label_1d2d74;
            case 0x1D2D78u: goto label_1d2d78;
            case 0x1D2D7Cu: goto label_1d2d7c;
            case 0x1D2D80u: goto label_1d2d80;
            case 0x1D2D84u: goto label_1d2d84;
            case 0x1D2D88u: goto label_1d2d88;
            case 0x1D2D8Cu: goto label_1d2d8c;
            case 0x1D2D90u: goto label_1d2d90;
            case 0x1D2D94u: goto label_1d2d94;
            case 0x1D2D98u: goto label_1d2d98;
            case 0x1D2D9Cu: goto label_1d2d9c;
            case 0x1D2DA0u: goto label_1d2da0;
            case 0x1D2DA4u: goto label_1d2da4;
            case 0x1D2DA8u: goto label_1d2da8;
            case 0x1D2DACu: goto label_1d2dac;
            case 0x1D2DB0u: goto label_1d2db0;
            case 0x1D2DB4u: goto label_1d2db4;
            case 0x1D2DB8u: goto label_1d2db8;
            case 0x1D2DBCu: goto label_1d2dbc;
            case 0x1D2DC0u: goto label_1d2dc0;
            case 0x1D2DC4u: goto label_1d2dc4;
            case 0x1D2DC8u: goto label_1d2dc8;
            case 0x1D2DCCu: goto label_1d2dcc;
            case 0x1D2DD0u: goto label_1d2dd0;
            case 0x1D2DD4u: goto label_1d2dd4;
            case 0x1D2DD8u: goto label_1d2dd8;
            case 0x1D2DDCu: goto label_1d2ddc;
            case 0x1D2DE0u: goto label_1d2de0;
            case 0x1D2DE4u: goto label_1d2de4;
            case 0x1D2DE8u: goto label_1d2de8;
            case 0x1D2DECu: goto label_1d2dec;
            case 0x1D2DF0u: goto label_1d2df0;
            case 0x1D2DF4u: goto label_1d2df4;
            case 0x1D2DF8u: goto label_1d2df8;
            case 0x1D2DFCu: goto label_1d2dfc;
            case 0x1D2E00u: goto label_1d2e00;
            case 0x1D2E04u: goto label_1d2e04;
            case 0x1D2E08u: goto label_1d2e08;
            case 0x1D2E0Cu: goto label_1d2e0c;
            case 0x1D2E10u: goto label_1d2e10;
            case 0x1D2E14u: goto label_1d2e14;
            case 0x1D2E18u: goto label_1d2e18;
            case 0x1D2E1Cu: goto label_1d2e1c;
            case 0x1D2E20u: goto label_1d2e20;
            case 0x1D2E24u: goto label_1d2e24;
            case 0x1D2E28u: goto label_1d2e28;
            case 0x1D2E2Cu: goto label_1d2e2c;
            case 0x1D2E30u: goto label_1d2e30;
            case 0x1D2E34u: goto label_1d2e34;
            case 0x1D2E38u: goto label_1d2e38;
            case 0x1D2E3Cu: goto label_1d2e3c;
            case 0x1D2E40u: goto label_1d2e40;
            case 0x1D2E44u: goto label_1d2e44;
            case 0x1D2E48u: goto label_1d2e48;
            case 0x1D2E4Cu: goto label_1d2e4c;
            case 0x1D2E50u: goto label_1d2e50;
            case 0x1D2E54u: goto label_1d2e54;
            case 0x1D2E58u: goto label_1d2e58;
            case 0x1D2E5Cu: goto label_1d2e5c;
            case 0x1D2E60u: goto label_1d2e60;
            case 0x1D2E64u: goto label_1d2e64;
            case 0x1D2E68u: goto label_1d2e68;
            case 0x1D2E6Cu: goto label_1d2e6c;
            case 0x1D2E70u: goto label_1d2e70;
            case 0x1D2E74u: goto label_1d2e74;
            case 0x1D2E78u: goto label_1d2e78;
            case 0x1D2E7Cu: goto label_1d2e7c;
            case 0x1D2E80u: goto label_1d2e80;
            case 0x1D2E84u: goto label_1d2e84;
            case 0x1D2E88u: goto label_1d2e88;
            case 0x1D2E8Cu: goto label_1d2e8c;
            case 0x1D2E90u: goto label_1d2e90;
            case 0x1D2E94u: goto label_1d2e94;
            case 0x1D2E98u: goto label_1d2e98;
            case 0x1D2E9Cu: goto label_1d2e9c;
            case 0x1D2EA0u: goto label_1d2ea0;
            case 0x1D2EA4u: goto label_1d2ea4;
            case 0x1D2EA8u: goto label_1d2ea8;
            case 0x1D2EACu: goto label_1d2eac;
            case 0x1D2EB0u: goto label_1d2eb0;
            case 0x1D2EB4u: goto label_1d2eb4;
            case 0x1D2EB8u: goto label_1d2eb8;
            case 0x1D2EBCu: goto label_1d2ebc;
            case 0x1D2EC0u: goto label_1d2ec0;
            case 0x1D2EC4u: goto label_1d2ec4;
            case 0x1D2EC8u: goto label_1d2ec8;
            case 0x1D2ECCu: goto label_1d2ecc;
            case 0x1D2ED0u: goto label_1d2ed0;
            case 0x1D2ED4u: goto label_1d2ed4;
            case 0x1D2ED8u: goto label_1d2ed8;
            case 0x1D2EDCu: goto label_1d2edc;
            case 0x1D2EE0u: goto label_1d2ee0;
            case 0x1D2EE4u: goto label_1d2ee4;
            case 0x1D2EE8u: goto label_1d2ee8;
            case 0x1D2EECu: goto label_1d2eec;
            case 0x1D2EF0u: goto label_1d2ef0;
            case 0x1D2EF4u: goto label_1d2ef4;
            case 0x1D2EF8u: goto label_1d2ef8;
            case 0x1D2EFCu: goto label_1d2efc;
            case 0x1D2F00u: goto label_1d2f00;
            case 0x1D2F04u: goto label_1d2f04;
            case 0x1D2F08u: goto label_1d2f08;
            case 0x1D2F0Cu: goto label_1d2f0c;
            case 0x1D2F10u: goto label_1d2f10;
            case 0x1D2F14u: goto label_1d2f14;
            case 0x1D2F18u: goto label_1d2f18;
            case 0x1D2F1Cu: goto label_1d2f1c;
            case 0x1D2F20u: goto label_1d2f20;
            case 0x1D2F24u: goto label_1d2f24;
            case 0x1D2F28u: goto label_1d2f28;
            case 0x1D2F2Cu: goto label_1d2f2c;
            case 0x1D2F30u: goto label_1d2f30;
            case 0x1D2F34u: goto label_1d2f34;
            case 0x1D2F38u: goto label_1d2f38;
            case 0x1D2F3Cu: goto label_1d2f3c;
            case 0x1D2F40u: goto label_1d2f40;
            case 0x1D2F44u: goto label_1d2f44;
            case 0x1D2F48u: goto label_1d2f48;
            case 0x1D2F4Cu: goto label_1d2f4c;
            case 0x1D2F50u: goto label_1d2f50;
            case 0x1D2F54u: goto label_1d2f54;
            case 0x1D2F58u: goto label_1d2f58;
            case 0x1D2F5Cu: goto label_1d2f5c;
            case 0x1D2F60u: goto label_1d2f60;
            case 0x1D2F64u: goto label_1d2f64;
            case 0x1D2F68u: goto label_1d2f68;
            case 0x1D2F6Cu: goto label_1d2f6c;
            case 0x1D2F70u: goto label_1d2f70;
            case 0x1D2F74u: goto label_1d2f74;
            case 0x1D2F78u: goto label_1d2f78;
            case 0x1D2F7Cu: goto label_1d2f7c;
            case 0x1D2F80u: goto label_1d2f80;
            case 0x1D2F84u: goto label_1d2f84;
            case 0x1D2F88u: goto label_1d2f88;
            case 0x1D2F8Cu: goto label_1d2f8c;
            case 0x1D2F90u: goto label_1d2f90;
            case 0x1D2F94u: goto label_1d2f94;
            case 0x1D2F98u: goto label_1d2f98;
            case 0x1D2F9Cu: goto label_1d2f9c;
            case 0x1D2FA0u: goto label_1d2fa0;
            case 0x1D2FA4u: goto label_1d2fa4;
            case 0x1D2FA8u: goto label_1d2fa8;
            case 0x1D2FACu: goto label_1d2fac;
            case 0x1D2FB0u: goto label_1d2fb0;
            case 0x1D2FB4u: goto label_1d2fb4;
            case 0x1D2FB8u: goto label_1d2fb8;
            case 0x1D2FBCu: goto label_1d2fbc;
            case 0x1D2FC0u: goto label_1d2fc0;
            case 0x1D2FC4u: goto label_1d2fc4;
            case 0x1D2FC8u: goto label_1d2fc8;
            case 0x1D2FCCu: goto label_1d2fcc;
            case 0x1D2FD0u: goto label_1d2fd0;
            case 0x1D2FD4u: goto label_1d2fd4;
            case 0x1D2FD8u: goto label_1d2fd8;
            case 0x1D2FDCu: goto label_1d2fdc;
            case 0x1D2FE0u: goto label_1d2fe0;
            case 0x1D2FE4u: goto label_1d2fe4;
            case 0x1D2FE8u: goto label_1d2fe8;
            case 0x1D2FECu: goto label_1d2fec;
            case 0x1D2FF0u: goto label_1d2ff0;
            case 0x1D2FF4u: goto label_1d2ff4;
            case 0x1D2FF8u: goto label_1d2ff8;
            case 0x1D2FFCu: goto label_1d2ffc;
            case 0x1D3000u: goto label_1d3000;
            case 0x1D3004u: goto label_1d3004;
            case 0x1D3008u: goto label_1d3008;
            case 0x1D300Cu: goto label_1d300c;
            case 0x1D3010u: goto label_1d3010;
            case 0x1D3014u: goto label_1d3014;
            case 0x1D3018u: goto label_1d3018;
            case 0x1D301Cu: goto label_1d301c;
            case 0x1D3020u: goto label_1d3020;
            case 0x1D3024u: goto label_1d3024;
            case 0x1D3028u: goto label_1d3028;
            case 0x1D302Cu: goto label_1d302c;
            case 0x1D3030u: goto label_1d3030;
            case 0x1D3034u: goto label_1d3034;
            case 0x1D3038u: goto label_1d3038;
            case 0x1D303Cu: goto label_1d303c;
            case 0x1D3040u: goto label_1d3040;
            case 0x1D3044u: goto label_1d3044;
            case 0x1D3048u: goto label_1d3048;
            case 0x1D304Cu: goto label_1d304c;
            case 0x1D3050u: goto label_1d3050;
            case 0x1D3054u: goto label_1d3054;
            case 0x1D3058u: goto label_1d3058;
            case 0x1D305Cu: goto label_1d305c;
            case 0x1D3060u: goto label_1d3060;
            case 0x1D3064u: goto label_1d3064;
            case 0x1D3068u: goto label_1d3068;
            case 0x1D306Cu: goto label_1d306c;
            case 0x1D3070u: goto label_1d3070;
            case 0x1D3074u: goto label_1d3074;
            case 0x1D3078u: goto label_1d3078;
            case 0x1D307Cu: goto label_1d307c;
            case 0x1D3080u: goto label_1d3080;
            case 0x1D3084u: goto label_1d3084;
            case 0x1D3088u: goto label_1d3088;
            case 0x1D308Cu: goto label_1d308c;
            case 0x1D3090u: goto label_1d3090;
            case 0x1D3094u: goto label_1d3094;
            case 0x1D3098u: goto label_1d3098;
            case 0x1D309Cu: goto label_1d309c;
            case 0x1D30A0u: goto label_1d30a0;
            case 0x1D30A4u: goto label_1d30a4;
            case 0x1D30A8u: goto label_1d30a8;
            case 0x1D30ACu: goto label_1d30ac;
            case 0x1D30B0u: goto label_1d30b0;
            case 0x1D30B4u: goto label_1d30b4;
            case 0x1D30B8u: goto label_1d30b8;
            case 0x1D30BCu: goto label_1d30bc;
            case 0x1D30C0u: goto label_1d30c0;
            case 0x1D30C4u: goto label_1d30c4;
            case 0x1D30C8u: goto label_1d30c8;
            case 0x1D30CCu: goto label_1d30cc;
            case 0x1D30D0u: goto label_1d30d0;
            case 0x1D30D4u: goto label_1d30d4;
            case 0x1D30D8u: goto label_1d30d8;
            case 0x1D30DCu: goto label_1d30dc;
            case 0x1D30E0u: goto label_1d30e0;
            case 0x1D30E4u: goto label_1d30e4;
            case 0x1D30E8u: goto label_1d30e8;
            case 0x1D30ECu: goto label_1d30ec;
            case 0x1D30F0u: goto label_1d30f0;
            case 0x1D30F4u: goto label_1d30f4;
            case 0x1D30F8u: goto label_1d30f8;
            case 0x1D30FCu: goto label_1d30fc;
            case 0x1D3100u: goto label_1d3100;
            case 0x1D3104u: goto label_1d3104;
            case 0x1D3108u: goto label_1d3108;
            case 0x1D310Cu: goto label_1d310c;
            case 0x1D3110u: goto label_1d3110;
            case 0x1D3114u: goto label_1d3114;
            case 0x1D3118u: goto label_1d3118;
            case 0x1D311Cu: goto label_1d311c;
            case 0x1D3120u: goto label_1d3120;
            case 0x1D3124u: goto label_1d3124;
            case 0x1D3128u: goto label_1d3128;
            case 0x1D312Cu: goto label_1d312c;
            case 0x1D3130u: goto label_1d3130;
            case 0x1D3134u: goto label_1d3134;
            case 0x1D3138u: goto label_1d3138;
            case 0x1D313Cu: goto label_1d313c;
            case 0x1D3140u: goto label_1d3140;
            case 0x1D3144u: goto label_1d3144;
            case 0x1D3148u: goto label_1d3148;
            case 0x1D314Cu: goto label_1d314c;
            case 0x1D3150u: goto label_1d3150;
            case 0x1D3154u: goto label_1d3154;
            case 0x1D3158u: goto label_1d3158;
            case 0x1D315Cu: goto label_1d315c;
            case 0x1D3160u: goto label_1d3160;
            case 0x1D3164u: goto label_1d3164;
            case 0x1D3168u: goto label_1d3168;
            case 0x1D316Cu: goto label_1d316c;
            case 0x1D3170u: goto label_1d3170;
            case 0x1D3174u: goto label_1d3174;
            case 0x1D3178u: goto label_1d3178;
            case 0x1D317Cu: goto label_1d317c;
            case 0x1D3180u: goto label_1d3180;
            case 0x1D3184u: goto label_1d3184;
            case 0x1D3188u: goto label_1d3188;
            case 0x1D318Cu: goto label_1d318c;
            case 0x1D3190u: goto label_1d3190;
            case 0x1D3194u: goto label_1d3194;
            case 0x1D3198u: goto label_1d3198;
            case 0x1D319Cu: goto label_1d319c;
            case 0x1D31A0u: goto label_1d31a0;
            case 0x1D31A4u: goto label_1d31a4;
            case 0x1D31A8u: goto label_1d31a8;
            case 0x1D31ACu: goto label_1d31ac;
            case 0x1D31B0u: goto label_1d31b0;
            case 0x1D31B4u: goto label_1d31b4;
            case 0x1D31B8u: goto label_1d31b8;
            case 0x1D31BCu: goto label_1d31bc;
            case 0x1D31C0u: goto label_1d31c0;
            case 0x1D31C4u: goto label_1d31c4;
            case 0x1D31C8u: goto label_1d31c8;
            case 0x1D31CCu: goto label_1d31cc;
            case 0x1D31D0u: goto label_1d31d0;
            case 0x1D31D4u: goto label_1d31d4;
            case 0x1D31D8u: goto label_1d31d8;
            case 0x1D31DCu: goto label_1d31dc;
            case 0x1D31E0u: goto label_1d31e0;
            case 0x1D31E4u: goto label_1d31e4;
            case 0x1D31E8u: goto label_1d31e8;
            case 0x1D31ECu: goto label_1d31ec;
            case 0x1D31F0u: goto label_1d31f0;
            case 0x1D31F4u: goto label_1d31f4;
            case 0x1D31F8u: goto label_1d31f8;
            case 0x1D31FCu: goto label_1d31fc;
            case 0x1D3200u: goto label_1d3200;
            case 0x1D3204u: goto label_1d3204;
            case 0x1D3208u: goto label_1d3208;
            case 0x1D320Cu: goto label_1d320c;
            case 0x1D3210u: goto label_1d3210;
            case 0x1D3214u: goto label_1d3214;
            case 0x1D3218u: goto label_1d3218;
            case 0x1D321Cu: goto label_1d321c;
            case 0x1D3220u: goto label_1d3220;
            case 0x1D3224u: goto label_1d3224;
            case 0x1D3228u: goto label_1d3228;
            case 0x1D322Cu: goto label_1d322c;
            case 0x1D3230u: goto label_1d3230;
            case 0x1D3234u: goto label_1d3234;
            case 0x1D3238u: goto label_1d3238;
            case 0x1D323Cu: goto label_1d323c;
            case 0x1D3240u: goto label_1d3240;
            case 0x1D3244u: goto label_1d3244;
            case 0x1D3248u: goto label_1d3248;
            case 0x1D324Cu: goto label_1d324c;
            case 0x1D3250u: goto label_1d3250;
            case 0x1D3254u: goto label_1d3254;
            case 0x1D3258u: goto label_1d3258;
            case 0x1D325Cu: goto label_1d325c;
            case 0x1D3260u: goto label_1d3260;
            case 0x1D3264u: goto label_1d3264;
            case 0x1D3268u: goto label_1d3268;
            case 0x1D326Cu: goto label_1d326c;
            case 0x1D3270u: goto label_1d3270;
            case 0x1D3274u: goto label_1d3274;
            case 0x1D3278u: goto label_1d3278;
            case 0x1D327Cu: goto label_1d327c;
            case 0x1D3280u: goto label_1d3280;
            case 0x1D3284u: goto label_1d3284;
            case 0x1D3288u: goto label_1d3288;
            case 0x1D328Cu: goto label_1d328c;
            case 0x1D3290u: goto label_1d3290;
            case 0x1D3294u: goto label_1d3294;
            case 0x1D3298u: goto label_1d3298;
            case 0x1D329Cu: goto label_1d329c;
            case 0x1D32A0u: goto label_1d32a0;
            case 0x1D32A4u: goto label_1d32a4;
            case 0x1D32A8u: goto label_1d32a8;
            case 0x1D32ACu: goto label_1d32ac;
            case 0x1D32B0u: goto label_1d32b0;
            case 0x1D32B4u: goto label_1d32b4;
            case 0x1D32B8u: goto label_1d32b8;
            case 0x1D32BCu: goto label_1d32bc;
            case 0x1D32C0u: goto label_1d32c0;
            case 0x1D32C4u: goto label_1d32c4;
            case 0x1D32C8u: goto label_1d32c8;
            case 0x1D32CCu: goto label_1d32cc;
            case 0x1D32D0u: goto label_1d32d0;
            case 0x1D32D4u: goto label_1d32d4;
            case 0x1D32D8u: goto label_1d32d8;
            case 0x1D32DCu: goto label_1d32dc;
            case 0x1D32E0u: goto label_1d32e0;
            case 0x1D32E4u: goto label_1d32e4;
            case 0x1D32E8u: goto label_1d32e8;
            case 0x1D32ECu: goto label_1d32ec;
            case 0x1D32F0u: goto label_1d32f0;
            case 0x1D32F4u: goto label_1d32f4;
            case 0x1D32F8u: goto label_1d32f8;
            case 0x1D32FCu: goto label_1d32fc;
            case 0x1D3300u: goto label_1d3300;
            case 0x1D3304u: goto label_1d3304;
            case 0x1D3308u: goto label_1d3308;
            case 0x1D330Cu: goto label_1d330c;
            case 0x1D3310u: goto label_1d3310;
            case 0x1D3314u: goto label_1d3314;
            case 0x1D3318u: goto label_1d3318;
            case 0x1D331Cu: goto label_1d331c;
            case 0x1D3320u: goto label_1d3320;
            case 0x1D3324u: goto label_1d3324;
            case 0x1D3328u: goto label_1d3328;
            case 0x1D332Cu: goto label_1d332c;
            case 0x1D3330u: goto label_1d3330;
            case 0x1D3334u: goto label_1d3334;
            case 0x1D3338u: goto label_1d3338;
            case 0x1D333Cu: goto label_1d333c;
            case 0x1D3340u: goto label_1d3340;
            case 0x1D3344u: goto label_1d3344;
            case 0x1D3348u: goto label_1d3348;
            case 0x1D334Cu: goto label_1d334c;
            case 0x1D3350u: goto label_1d3350;
            case 0x1D3354u: goto label_1d3354;
            case 0x1D3358u: goto label_1d3358;
            case 0x1D335Cu: goto label_1d335c;
            case 0x1D3360u: goto label_1d3360;
            case 0x1D3364u: goto label_1d3364;
            case 0x1D3368u: goto label_1d3368;
            case 0x1D336Cu: goto label_1d336c;
            case 0x1D3370u: goto label_1d3370;
            case 0x1D3374u: goto label_1d3374;
            case 0x1D3378u: goto label_1d3378;
            case 0x1D337Cu: goto label_1d337c;
            case 0x1D3380u: goto label_1d3380;
            case 0x1D3384u: goto label_1d3384;
            case 0x1D3388u: goto label_1d3388;
            case 0x1D338Cu: goto label_1d338c;
            case 0x1D3390u: goto label_1d3390;
            case 0x1D3394u: goto label_1d3394;
            case 0x1D3398u: goto label_1d3398;
            case 0x1D339Cu: goto label_1d339c;
            case 0x1D33A0u: goto label_1d33a0;
            case 0x1D33A4u: goto label_1d33a4;
            case 0x1D33A8u: goto label_1d33a8;
            case 0x1D33ACu: goto label_1d33ac;
            case 0x1D33B0u: goto label_1d33b0;
            case 0x1D33B4u: goto label_1d33b4;
            case 0x1D33B8u: goto label_1d33b8;
            case 0x1D33BCu: goto label_1d33bc;
            case 0x1D33C0u: goto label_1d33c0;
            case 0x1D33C4u: goto label_1d33c4;
            case 0x1D33C8u: goto label_1d33c8;
            case 0x1D33CCu: goto label_1d33cc;
            case 0x1D33D0u: goto label_1d33d0;
            case 0x1D33D4u: goto label_1d33d4;
            case 0x1D33D8u: goto label_1d33d8;
            case 0x1D33DCu: goto label_1d33dc;
            case 0x1D33E0u: goto label_1d33e0;
            case 0x1D33E4u: goto label_1d33e4;
            case 0x1D33E8u: goto label_1d33e8;
            case 0x1D33ECu: goto label_1d33ec;
            case 0x1D33F0u: goto label_1d33f0;
            case 0x1D33F4u: goto label_1d33f4;
            case 0x1D33F8u: goto label_1d33f8;
            case 0x1D33FCu: goto label_1d33fc;
            case 0x1D3400u: goto label_1d3400;
            case 0x1D3404u: goto label_1d3404;
            case 0x1D3408u: goto label_1d3408;
            case 0x1D340Cu: goto label_1d340c;
            case 0x1D3410u: goto label_1d3410;
            case 0x1D3414u: goto label_1d3414;
            case 0x1D3418u: goto label_1d3418;
            case 0x1D341Cu: goto label_1d341c;
            case 0x1D3420u: goto label_1d3420;
            case 0x1D3424u: goto label_1d3424;
            case 0x1D3428u: goto label_1d3428;
            case 0x1D342Cu: goto label_1d342c;
            case 0x1D3430u: goto label_1d3430;
            case 0x1D3434u: goto label_1d3434;
            case 0x1D3438u: goto label_1d3438;
            case 0x1D343Cu: goto label_1d343c;
            case 0x1D3440u: goto label_1d3440;
            case 0x1D3444u: goto label_1d3444;
            case 0x1D3448u: goto label_1d3448;
            case 0x1D344Cu: goto label_1d344c;
            case 0x1D3450u: goto label_1d3450;
            case 0x1D3454u: goto label_1d3454;
            case 0x1D3458u: goto label_1d3458;
            case 0x1D345Cu: goto label_1d345c;
            case 0x1D3460u: goto label_1d3460;
            case 0x1D3464u: goto label_1d3464;
            case 0x1D3468u: goto label_1d3468;
            case 0x1D346Cu: goto label_1d346c;
            case 0x1D3470u: goto label_1d3470;
            case 0x1D3474u: goto label_1d3474;
            case 0x1D3478u: goto label_1d3478;
            case 0x1D347Cu: goto label_1d347c;
            case 0x1D3480u: goto label_1d3480;
            case 0x1D3484u: goto label_1d3484;
            case 0x1D3488u: goto label_1d3488;
            case 0x1D348Cu: goto label_1d348c;
            case 0x1D3490u: goto label_1d3490;
            case 0x1D3494u: goto label_1d3494;
            case 0x1D3498u: goto label_1d3498;
            case 0x1D349Cu: goto label_1d349c;
            case 0x1D34A0u: goto label_1d34a0;
            case 0x1D34A4u: goto label_1d34a4;
            case 0x1D34A8u: goto label_1d34a8;
            case 0x1D34ACu: goto label_1d34ac;
            case 0x1D34B0u: goto label_1d34b0;
            case 0x1D34B4u: goto label_1d34b4;
            case 0x1D34B8u: goto label_1d34b8;
            case 0x1D34BCu: goto label_1d34bc;
            case 0x1D34C0u: goto label_1d34c0;
            case 0x1D34C4u: goto label_1d34c4;
            case 0x1D34C8u: goto label_1d34c8;
            case 0x1D34CCu: goto label_1d34cc;
            case 0x1D34D0u: goto label_1d34d0;
            case 0x1D34D4u: goto label_1d34d4;
            case 0x1D34D8u: goto label_1d34d8;
            case 0x1D34DCu: goto label_1d34dc;
            case 0x1D34E0u: goto label_1d34e0;
            case 0x1D34E4u: goto label_1d34e4;
            case 0x1D34E8u: goto label_1d34e8;
            case 0x1D34ECu: goto label_1d34ec;
            case 0x1D34F0u: goto label_1d34f0;
            case 0x1D34F4u: goto label_1d34f4;
            case 0x1D34F8u: goto label_1d34f8;
            case 0x1D34FCu: goto label_1d34fc;
            case 0x1D3500u: goto label_1d3500;
            case 0x1D3504u: goto label_1d3504;
            case 0x1D3508u: goto label_1d3508;
            case 0x1D350Cu: goto label_1d350c;
            case 0x1D3510u: goto label_1d3510;
            case 0x1D3514u: goto label_1d3514;
            case 0x1D3518u: goto label_1d3518;
            case 0x1D351Cu: goto label_1d351c;
            case 0x1D3520u: goto label_1d3520;
            case 0x1D3524u: goto label_1d3524;
            case 0x1D3528u: goto label_1d3528;
            case 0x1D352Cu: goto label_1d352c;
            case 0x1D3530u: goto label_1d3530;
            case 0x1D3534u: goto label_1d3534;
            case 0x1D3538u: goto label_1d3538;
            case 0x1D353Cu: goto label_1d353c;
            case 0x1D3540u: goto label_1d3540;
            case 0x1D3544u: goto label_1d3544;
            case 0x1D3548u: goto label_1d3548;
            case 0x1D354Cu: goto label_1d354c;
            case 0x1D3550u: goto label_1d3550;
            case 0x1D3554u: goto label_1d3554;
            case 0x1D3558u: goto label_1d3558;
            case 0x1D355Cu: goto label_1d355c;
            case 0x1D3560u: goto label_1d3560;
            case 0x1D3564u: goto label_1d3564;
            case 0x1D3568u: goto label_1d3568;
            case 0x1D356Cu: goto label_1d356c;
            case 0x1D3570u: goto label_1d3570;
            case 0x1D3574u: goto label_1d3574;
            case 0x1D3578u: goto label_1d3578;
            case 0x1D357Cu: goto label_1d357c;
            case 0x1D3580u: goto label_1d3580;
            case 0x1D3584u: goto label_1d3584;
            case 0x1D3588u: goto label_1d3588;
            case 0x1D358Cu: goto label_1d358c;
            case 0x1D3590u: goto label_1d3590;
            case 0x1D3594u: goto label_1d3594;
            case 0x1D3598u: goto label_1d3598;
            case 0x1D359Cu: goto label_1d359c;
            case 0x1D35A0u: goto label_1d35a0;
            case 0x1D35A4u: goto label_1d35a4;
            case 0x1D35A8u: goto label_1d35a8;
            case 0x1D35ACu: goto label_1d35ac;
            case 0x1D35B0u: goto label_1d35b0;
            case 0x1D35B4u: goto label_1d35b4;
            case 0x1D35B8u: goto label_1d35b8;
            case 0x1D35BCu: goto label_1d35bc;
            case 0x1D35C0u: goto label_1d35c0;
            case 0x1D35C4u: goto label_1d35c4;
            case 0x1D35C8u: goto label_1d35c8;
            case 0x1D35CCu: goto label_1d35cc;
            case 0x1D35D0u: goto label_1d35d0;
            case 0x1D35D4u: goto label_1d35d4;
            case 0x1D35D8u: goto label_1d35d8;
            case 0x1D35DCu: goto label_1d35dc;
            case 0x1D35E0u: goto label_1d35e0;
            case 0x1D35E4u: goto label_1d35e4;
            case 0x1D35E8u: goto label_1d35e8;
            case 0x1D35ECu: goto label_1d35ec;
            case 0x1D35F0u: goto label_1d35f0;
            case 0x1D35F4u: goto label_1d35f4;
            case 0x1D35F8u: goto label_1d35f8;
            case 0x1D35FCu: goto label_1d35fc;
            case 0x1D3600u: goto label_1d3600;
            case 0x1D3604u: goto label_1d3604;
            case 0x1D3608u: goto label_1d3608;
            case 0x1D360Cu: goto label_1d360c;
            case 0x1D3610u: goto label_1d3610;
            case 0x1D3614u: goto label_1d3614;
            case 0x1D3618u: goto label_1d3618;
            case 0x1D361Cu: goto label_1d361c;
            case 0x1D3620u: goto label_1d3620;
            case 0x1D3624u: goto label_1d3624;
            case 0x1D3628u: goto label_1d3628;
            case 0x1D362Cu: goto label_1d362c;
            case 0x1D3630u: goto label_1d3630;
            case 0x1D3634u: goto label_1d3634;
            case 0x1D3638u: goto label_1d3638;
            case 0x1D363Cu: goto label_1d363c;
            case 0x1D3640u: goto label_1d3640;
            case 0x1D3644u: goto label_1d3644;
            case 0x1D3648u: goto label_1d3648;
            case 0x1D364Cu: goto label_1d364c;
            case 0x1D3650u: goto label_1d3650;
            case 0x1D3654u: goto label_1d3654;
            case 0x1D3658u: goto label_1d3658;
            case 0x1D365Cu: goto label_1d365c;
            case 0x1D3660u: goto label_1d3660;
            case 0x1D3664u: goto label_1d3664;
            case 0x1D3668u: goto label_1d3668;
            case 0x1D366Cu: goto label_1d366c;
            case 0x1D3670u: goto label_1d3670;
            case 0x1D3674u: goto label_1d3674;
            case 0x1D3678u: goto label_1d3678;
            case 0x1D367Cu: goto label_1d367c;
            case 0x1D3680u: goto label_1d3680;
            case 0x1D3684u: goto label_1d3684;
            case 0x1D3688u: goto label_1d3688;
            case 0x1D368Cu: goto label_1d368c;
            case 0x1D3690u: goto label_1d3690;
            case 0x1D3694u: goto label_1d3694;
            case 0x1D3698u: goto label_1d3698;
            case 0x1D369Cu: goto label_1d369c;
            case 0x1D36A0u: goto label_1d36a0;
            case 0x1D36A4u: goto label_1d36a4;
            case 0x1D36A8u: goto label_1d36a8;
            case 0x1D36ACu: goto label_1d36ac;
            case 0x1D36B0u: goto label_1d36b0;
            case 0x1D36B4u: goto label_1d36b4;
            case 0x1D36B8u: goto label_1d36b8;
            case 0x1D36BCu: goto label_1d36bc;
            case 0x1D36C0u: goto label_1d36c0;
            case 0x1D36C4u: goto label_1d36c4;
            case 0x1D36C8u: goto label_1d36c8;
            case 0x1D36CCu: goto label_1d36cc;
            case 0x1D36D0u: goto label_1d36d0;
            case 0x1D36D4u: goto label_1d36d4;
            case 0x1D36D8u: goto label_1d36d8;
            case 0x1D36DCu: goto label_1d36dc;
            case 0x1D36E0u: goto label_1d36e0;
            case 0x1D36E4u: goto label_1d36e4;
            case 0x1D36E8u: goto label_1d36e8;
            case 0x1D36ECu: goto label_1d36ec;
            case 0x1D36F0u: goto label_1d36f0;
            case 0x1D36F4u: goto label_1d36f4;
            case 0x1D36F8u: goto label_1d36f8;
            case 0x1D36FCu: goto label_1d36fc;
            case 0x1D3700u: goto label_1d3700;
            case 0x1D3704u: goto label_1d3704;
            case 0x1D3708u: goto label_1d3708;
            case 0x1D370Cu: goto label_1d370c;
            case 0x1D3710u: goto label_1d3710;
            case 0x1D3714u: goto label_1d3714;
            case 0x1D3718u: goto label_1d3718;
            case 0x1D371Cu: goto label_1d371c;
            case 0x1D3720u: goto label_1d3720;
            case 0x1D3724u: goto label_1d3724;
            case 0x1D3728u: goto label_1d3728;
            case 0x1D372Cu: goto label_1d372c;
            case 0x1D3730u: goto label_1d3730;
            case 0x1D3734u: goto label_1d3734;
            case 0x1D3738u: goto label_1d3738;
            case 0x1D373Cu: goto label_1d373c;
            case 0x1D3740u: goto label_1d3740;
            case 0x1D3744u: goto label_1d3744;
            case 0x1D3748u: goto label_1d3748;
            case 0x1D374Cu: goto label_1d374c;
            case 0x1D3750u: goto label_1d3750;
            case 0x1D3754u: goto label_1d3754;
            case 0x1D3758u: goto label_1d3758;
            case 0x1D375Cu: goto label_1d375c;
            case 0x1D3760u: goto label_1d3760;
            case 0x1D3764u: goto label_1d3764;
            case 0x1D3768u: goto label_1d3768;
            case 0x1D376Cu: goto label_1d376c;
            case 0x1D3770u: goto label_1d3770;
            case 0x1D3774u: goto label_1d3774;
            case 0x1D3778u: goto label_1d3778;
            case 0x1D377Cu: goto label_1d377c;
            case 0x1D3780u: goto label_1d3780;
            case 0x1D3784u: goto label_1d3784;
            case 0x1D3788u: goto label_1d3788;
            case 0x1D378Cu: goto label_1d378c;
            case 0x1D3790u: goto label_1d3790;
            case 0x1D3794u: goto label_1d3794;
            case 0x1D3798u: goto label_1d3798;
            case 0x1D379Cu: goto label_1d379c;
            case 0x1D37A0u: goto label_1d37a0;
            case 0x1D37A4u: goto label_1d37a4;
            case 0x1D37A8u: goto label_1d37a8;
            case 0x1D37ACu: goto label_1d37ac;
            case 0x1D37B0u: goto label_1d37b0;
            case 0x1D37B4u: goto label_1d37b4;
            case 0x1D37B8u: goto label_1d37b8;
            case 0x1D37BCu: goto label_1d37bc;
            case 0x1D37C0u: goto label_1d37c0;
            case 0x1D37C4u: goto label_1d37c4;
            case 0x1D37C8u: goto label_1d37c8;
            case 0x1D37CCu: goto label_1d37cc;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D37D4u: goto label_1d37d4;
            case 0x1D37D8u: goto label_1d37d8;
            case 0x1D37DCu: goto label_1d37dc;
            case 0x1D37E0u: goto label_1d37e0;
            case 0x1D37E4u: goto label_1d37e4;
            case 0x1D37E8u: goto label_1d37e8;
            case 0x1D37ECu: goto label_1d37ec;
            case 0x1D37F0u: goto label_1d37f0;
            case 0x1D37F4u: goto label_1d37f4;
            case 0x1D37F8u: goto label_1d37f8;
            case 0x1D37FCu: goto label_1d37fc;
            case 0x1D3800u: goto label_1d3800;
            case 0x1D3804u: goto label_1d3804;
            case 0x1D3808u: goto label_1d3808;
            case 0x1D380Cu: goto label_1d380c;
            case 0x1D3810u: goto label_1d3810;
            case 0x1D3814u: goto label_1d3814;
            case 0x1D3818u: goto label_1d3818;
            case 0x1D381Cu: goto label_1d381c;
            case 0x1D3820u: goto label_1d3820;
            case 0x1D3824u: goto label_1d3824;
            case 0x1D3828u: goto label_1d3828;
            case 0x1D382Cu: goto label_1d382c;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3834u: goto label_1d3834;
            case 0x1D3838u: goto label_1d3838;
            case 0x1D383Cu: goto label_1d383c;
            case 0x1D3840u: goto label_1d3840;
            case 0x1D3844u: goto label_1d3844;
            case 0x1D3848u: goto label_1d3848;
            case 0x1D384Cu: goto label_1d384c;
            case 0x1D3850u: goto label_1d3850;
            case 0x1D3854u: goto label_1d3854;
            case 0x1D3858u: goto label_1d3858;
            case 0x1D385Cu: goto label_1d385c;
            case 0x1D3860u: goto label_1d3860;
            case 0x1D3864u: goto label_1d3864;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D386Cu: goto label_1d386c;
            case 0x1D3870u: goto label_1d3870;
            case 0x1D3874u: goto label_1d3874;
            case 0x1D3878u: goto label_1d3878;
            case 0x1D387Cu: goto label_1d387c;
            case 0x1D3880u: goto label_1d3880;
            case 0x1D3884u: goto label_1d3884;
            case 0x1D3888u: goto label_1d3888;
            case 0x1D388Cu: goto label_1d388c;
            case 0x1D3890u: goto label_1d3890;
            case 0x1D3894u: goto label_1d3894;
            case 0x1D3898u: goto label_1d3898;
            case 0x1D389Cu: goto label_1d389c;
            case 0x1D38A0u: goto label_1d38a0;
            case 0x1D38A4u: goto label_1d38a4;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38ACu: goto label_1d38ac;
            case 0x1D38B0u: goto label_1d38b0;
            case 0x1D38B4u: goto label_1d38b4;
            case 0x1D38B8u: goto label_1d38b8;
            case 0x1D38BCu: goto label_1d38bc;
            case 0x1D38C0u: goto label_1d38c0;
            case 0x1D38C4u: goto label_1d38c4;
            case 0x1D38C8u: goto label_1d38c8;
            case 0x1D38CCu: goto label_1d38cc;
            case 0x1D38D0u: goto label_1d38d0;
            case 0x1D38D4u: goto label_1d38d4;
            case 0x1D38D8u: goto label_1d38d8;
            case 0x1D38DCu: goto label_1d38dc;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D38E4u: goto label_1d38e4;
            case 0x1D38E8u: goto label_1d38e8;
            case 0x1D38ECu: goto label_1d38ec;
            case 0x1D38F0u: goto label_1d38f0;
            case 0x1D38F4u: goto label_1d38f4;
            case 0x1D38F8u: goto label_1d38f8;
            case 0x1D38FCu: goto label_1d38fc;
            case 0x1D3900u: goto label_1d3900;
            case 0x1D3904u: goto label_1d3904;
            case 0x1D3908u: goto label_1d3908;
            case 0x1D390Cu: goto label_1d390c;
            case 0x1D3910u: goto label_1d3910;
            case 0x1D3914u: goto label_1d3914;
            case 0x1D3918u: goto label_1d3918;
            case 0x1D391Cu: goto label_1d391c;
            case 0x1D3920u: goto label_1d3920;
            case 0x1D3924u: goto label_1d3924;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3930u: goto label_1d3930;
            case 0x1D3934u: goto label_1d3934;
            case 0x1D3938u: goto label_1d3938;
            case 0x1D393Cu: goto label_1d393c;
            case 0x1D3940u: goto label_1d3940;
            case 0x1D3944u: goto label_1d3944;
            case 0x1D3948u: goto label_1d3948;
            case 0x1D394Cu: goto label_1d394c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3954u: goto label_1d3954;
            case 0x1D3958u: goto label_1d3958;
            case 0x1D395Cu: goto label_1d395c;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3964u: goto label_1d3964;
            case 0x1D3968u: goto label_1d3968;
            case 0x1D396Cu: goto label_1d396c;
            case 0x1D3970u: goto label_1d3970;
            case 0x1D3974u: goto label_1d3974;
            case 0x1D3978u: goto label_1d3978;
            case 0x1D397Cu: goto label_1d397c;
            case 0x1D3980u: goto label_1d3980;
            case 0x1D3984u: goto label_1d3984;
            case 0x1D3988u: goto label_1d3988;
            case 0x1D398Cu: goto label_1d398c;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D3994u: goto label_1d3994;
            case 0x1D3998u: goto label_1d3998;
            case 0x1D399Cu: goto label_1d399c;
            case 0x1D39A0u: goto label_1d39a0;
            case 0x1D39A4u: goto label_1d39a4;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39ACu: goto label_1d39ac;
            case 0x1D39B0u: goto label_1d39b0;
            case 0x1D39B4u: goto label_1d39b4;
            case 0x1D39B8u: goto label_1d39b8;
            case 0x1D39BCu: goto label_1d39bc;
            case 0x1D39C0u: goto label_1d39c0;
            case 0x1D39C4u: goto label_1d39c4;
            case 0x1D39C8u: goto label_1d39c8;
            case 0x1D39CCu: goto label_1d39cc;
            case 0x1D39D0u: goto label_1d39d0;
            case 0x1D39D4u: goto label_1d39d4;
            case 0x1D39D8u: goto label_1d39d8;
            case 0x1D39DCu: goto label_1d39dc;
            case 0x1D39E0u: goto label_1d39e0;
            case 0x1D39E4u: goto label_1d39e4;
            case 0x1D39E8u: goto label_1d39e8;
            case 0x1D39ECu: goto label_1d39ec;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D39F4u: goto label_1d39f4;
            case 0x1D39F8u: goto label_1d39f8;
            case 0x1D39FCu: goto label_1d39fc;
            case 0x1D3A00u: goto label_1d3a00;
            case 0x1D3A04u: goto label_1d3a04;
            case 0x1D3A08u: goto label_1d3a08;
            case 0x1D3A0Cu: goto label_1d3a0c;
            case 0x1D3A10u: goto label_1d3a10;
            case 0x1D3A14u: goto label_1d3a14;
            case 0x1D3A18u: goto label_1d3a18;
            case 0x1D3A1Cu: goto label_1d3a1c;
            case 0x1D3A20u: goto label_1d3a20;
            case 0x1D3A24u: goto label_1d3a24;
            case 0x1D3A28u: goto label_1d3a28;
            case 0x1D3A2Cu: goto label_1d3a2c;
            case 0x1D3A30u: goto label_1d3a30;
            case 0x1D3A34u: goto label_1d3a34;
            case 0x1D3A38u: goto label_1d3a38;
            case 0x1D3A3Cu: goto label_1d3a3c;
            case 0x1D3A40u: goto label_1d3a40;
            case 0x1D3A44u: goto label_1d3a44;
            case 0x1D3A48u: goto label_1d3a48;
            case 0x1D3A4Cu: goto label_1d3a4c;
            case 0x1D3A50u: goto label_1d3a50;
            case 0x1D3A54u: goto label_1d3a54;
            case 0x1D3A58u: goto label_1d3a58;
            case 0x1D3A5Cu: goto label_1d3a5c;
            case 0x1D3A60u: goto label_1d3a60;
            case 0x1D3A64u: goto label_1d3a64;
            case 0x1D3A68u: goto label_1d3a68;
            case 0x1D3A6Cu: goto label_1d3a6c;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A74u: goto label_1d3a74;
            case 0x1D3A78u: goto label_1d3a78;
            case 0x1D3A7Cu: goto label_1d3a7c;
            case 0x1D3A80u: goto label_1d3a80;
            case 0x1D3A84u: goto label_1d3a84;
            case 0x1D3A88u: goto label_1d3a88;
            case 0x1D3A8Cu: goto label_1d3a8c;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3A94u: goto label_1d3a94;
            case 0x1D3A98u: goto label_1d3a98;
            case 0x1D3A9Cu: goto label_1d3a9c;
            case 0x1D3AA0u: goto label_1d3aa0;
            case 0x1D3AA4u: goto label_1d3aa4;
            case 0x1D3AA8u: goto label_1d3aa8;
            case 0x1D3AACu: goto label_1d3aac;
            case 0x1D3AB0u: goto label_1d3ab0;
            case 0x1D3AB4u: goto label_1d3ab4;
            case 0x1D3AB8u: goto label_1d3ab8;
            case 0x1D3ABCu: goto label_1d3abc;
            case 0x1D3AC0u: goto label_1d3ac0;
            case 0x1D3AC4u: goto label_1d3ac4;
            case 0x1D3AC8u: goto label_1d3ac8;
            case 0x1D3ACCu: goto label_1d3acc;
            case 0x1D3AD0u: goto label_1d3ad0;
            case 0x1D3AD4u: goto label_1d3ad4;
            case 0x1D3AD8u: goto label_1d3ad8;
            case 0x1D3ADCu: goto label_1d3adc;
            case 0x1D3AE0u: goto label_1d3ae0;
            case 0x1D3AE4u: goto label_1d3ae4;
            case 0x1D3AE8u: goto label_1d3ae8;
            case 0x1D3AECu: goto label_1d3aec;
            case 0x1D3AF0u: goto label_1d3af0;
            case 0x1D3AF4u: goto label_1d3af4;
            case 0x1D3AF8u: goto label_1d3af8;
            case 0x1D3AFCu: goto label_1d3afc;
            case 0x1D3B00u: goto label_1d3b00;
            case 0x1D3B04u: goto label_1d3b04;
            case 0x1D3B08u: goto label_1d3b08;
            case 0x1D3B0Cu: goto label_1d3b0c;
            case 0x1D3B10u: goto label_1d3b10;
            case 0x1D3B14u: goto label_1d3b14;
            case 0x1D3B18u: goto label_1d3b18;
            case 0x1D3B1Cu: goto label_1d3b1c;
            case 0x1D3B20u: goto label_1d3b20;
            case 0x1D3B24u: goto label_1d3b24;
            case 0x1D3B28u: goto label_1d3b28;
            case 0x1D3B2Cu: goto label_1d3b2c;
            case 0x1D3B30u: goto label_1d3b30;
            case 0x1D3B34u: goto label_1d3b34;
            case 0x1D3B38u: goto label_1d3b38;
            case 0x1D3B3Cu: goto label_1d3b3c;
            case 0x1D3B40u: goto label_1d3b40;
            case 0x1D3B44u: goto label_1d3b44;
            case 0x1D3B48u: goto label_1d3b48;
            case 0x1D3B4Cu: goto label_1d3b4c;
            case 0x1D3B50u: goto label_1d3b50;
            case 0x1D3B54u: goto label_1d3b54;
            case 0x1D3B58u: goto label_1d3b58;
            case 0x1D3B5Cu: goto label_1d3b5c;
            case 0x1D3B60u: goto label_1d3b60;
            case 0x1D3B64u: goto label_1d3b64;
            case 0x1D3B68u: goto label_1d3b68;
            case 0x1D3B6Cu: goto label_1d3b6c;
            case 0x1D3B70u: goto label_1d3b70;
            case 0x1D3B74u: goto label_1d3b74;
            case 0x1D3B78u: goto label_1d3b78;
            case 0x1D3B7Cu: goto label_1d3b7c;
            case 0x1D3B80u: goto label_1d3b80;
            case 0x1D3B84u: goto label_1d3b84;
            case 0x1D3B88u: goto label_1d3b88;
            case 0x1D3B8Cu: goto label_1d3b8c;
            case 0x1D3B90u: goto label_1d3b90;
            case 0x1D3B94u: goto label_1d3b94;
            case 0x1D3B98u: goto label_1d3b98;
            case 0x1D3B9Cu: goto label_1d3b9c;
            case 0x1D3BA0u: goto label_1d3ba0;
            case 0x1D3BA4u: goto label_1d3ba4;
            case 0x1D3BA8u: goto label_1d3ba8;
            case 0x1D3BACu: goto label_1d3bac;
            case 0x1D3BB0u: goto label_1d3bb0;
            case 0x1D3BB4u: goto label_1d3bb4;
            case 0x1D3BB8u: goto label_1d3bb8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B7Cu; }
            if (ctx->pc != 0x1D3B7Cu) { return; }
        }
    }
    ctx->pc = 0x1D3B7Cu;
label_1d3b7c:
    // 0x1d3b7c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d3b80:
    if (ctx->pc == 0x1D3B80u) {
        ctx->pc = 0x1D3B84u;
        goto label_1d3b84;
    }
    ctx->pc = 0x1D3B7Cu;
    {
        const bool branch_taken_0x1d3b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3b7c) {
            ctx->pc = 0x1D3BA8u;
            goto label_1d3ba8;
        }
    }
    ctx->pc = 0x1D3B84u;
label_1d3b84:
    // 0x1d3b84: 0x0  nop
    ctx->pc = 0x1d3b84u;
    // NOP
label_1d3b88:
    // 0x1d3b88: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d3b88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
label_1d3b8c:
    // 0x1d3b8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d3b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d3b90:
    // 0x1d3b90: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1d3b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1d3b94:
    // 0x1d3b94: 0x24c626c0  addiu       $a2, $a2, 0x26C0
    ctx->pc = 0x1d3b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9920));
label_1d3b98:
    // 0x1d3b98: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d3b98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3b9c:
    // 0x1d3b9c: 0xc053ca4  jal         func_14F290
label_1d3ba0:
    if (ctx->pc == 0x1D3BA0u) {
        ctx->pc = 0x1D3BA0u;
            // 0x1d3ba0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3BA4u;
        goto label_1d3ba4;
    }
    ctx->pc = 0x1D3B9Cu;
    SET_GPR_U32(ctx, 31, 0x1D3BA4u);
    ctx->pc = 0x1D3BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B9Cu;
            // 0x1d3ba0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3BA4u; }
        if (ctx->pc != 0x1D3BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3BA4u; }
        if (ctx->pc != 0x1D3BA4u) { return; }
    }
    ctx->pc = 0x1D3BA4u;
label_1d3ba4:
    // 0x1d3ba4: 0x0  nop
    ctx->pc = 0x1d3ba4u;
    // NOP
label_1d3ba8:
    // 0x1d3ba8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d3ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3bac:
    // 0x1d3bac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3bb0:
    // 0x1d3bb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d3bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3bb4:
    // 0x1d3bb4: 0x3e00008  jr          $ra
label_1d3bb8:
    if (ctx->pc == 0x1D3BB8u) {
        ctx->pc = 0x1D3BB8u;
            // 0x1d3bb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1D3BBCu;
        goto label_fallthrough_0x1d3bb4;
    }
    ctx->pc = 0x1D3BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3BB4u;
            // 0x1d3bb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D29A0u: goto label_1d29a0;
            case 0x1D29A4u: goto label_1d29a4;
            case 0x1D29A8u: goto label_1d29a8;
            case 0x1D29ACu: goto label_1d29ac;
            case 0x1D29B0u: goto label_1d29b0;
            case 0x1D29B4u: goto label_1d29b4;
            case 0x1D29B8u: goto label_1d29b8;
            case 0x1D29BCu: goto label_1d29bc;
            case 0x1D29C0u: goto label_1d29c0;
            case 0x1D29C4u: goto label_1d29c4;
            case 0x1D29C8u: goto label_1d29c8;
            case 0x1D29CCu: goto label_1d29cc;
            case 0x1D29D0u: goto label_1d29d0;
            case 0x1D29D4u: goto label_1d29d4;
            case 0x1D29D8u: goto label_1d29d8;
            case 0x1D29DCu: goto label_1d29dc;
            case 0x1D29E0u: goto label_1d29e0;
            case 0x1D29E4u: goto label_1d29e4;
            case 0x1D29E8u: goto label_1d29e8;
            case 0x1D29ECu: goto label_1d29ec;
            case 0x1D29F0u: goto label_1d29f0;
            case 0x1D29F4u: goto label_1d29f4;
            case 0x1D29F8u: goto label_1d29f8;
            case 0x1D29FCu: goto label_1d29fc;
            case 0x1D2A00u: goto label_1d2a00;
            case 0x1D2A04u: goto label_1d2a04;
            case 0x1D2A08u: goto label_1d2a08;
            case 0x1D2A0Cu: goto label_1d2a0c;
            case 0x1D2A10u: goto label_1d2a10;
            case 0x1D2A14u: goto label_1d2a14;
            case 0x1D2A18u: goto label_1d2a18;
            case 0x1D2A1Cu: goto label_1d2a1c;
            case 0x1D2A20u: goto label_1d2a20;
            case 0x1D2A24u: goto label_1d2a24;
            case 0x1D2A28u: goto label_1d2a28;
            case 0x1D2A2Cu: goto label_1d2a2c;
            case 0x1D2A30u: goto label_1d2a30;
            case 0x1D2A34u: goto label_1d2a34;
            case 0x1D2A38u: goto label_1d2a38;
            case 0x1D2A3Cu: goto label_1d2a3c;
            case 0x1D2A40u: goto label_1d2a40;
            case 0x1D2A44u: goto label_1d2a44;
            case 0x1D2A48u: goto label_1d2a48;
            case 0x1D2A4Cu: goto label_1d2a4c;
            case 0x1D2A50u: goto label_1d2a50;
            case 0x1D2A54u: goto label_1d2a54;
            case 0x1D2A58u: goto label_1d2a58;
            case 0x1D2A5Cu: goto label_1d2a5c;
            case 0x1D2A60u: goto label_1d2a60;
            case 0x1D2A64u: goto label_1d2a64;
            case 0x1D2A68u: goto label_1d2a68;
            case 0x1D2A6Cu: goto label_1d2a6c;
            case 0x1D2A70u: goto label_1d2a70;
            case 0x1D2A74u: goto label_1d2a74;
            case 0x1D2A78u: goto label_1d2a78;
            case 0x1D2A7Cu: goto label_1d2a7c;
            case 0x1D2A80u: goto label_1d2a80;
            case 0x1D2A84u: goto label_1d2a84;
            case 0x1D2A88u: goto label_1d2a88;
            case 0x1D2A8Cu: goto label_1d2a8c;
            case 0x1D2A90u: goto label_1d2a90;
            case 0x1D2A94u: goto label_1d2a94;
            case 0x1D2A98u: goto label_1d2a98;
            case 0x1D2A9Cu: goto label_1d2a9c;
            case 0x1D2AA0u: goto label_1d2aa0;
            case 0x1D2AA4u: goto label_1d2aa4;
            case 0x1D2AA8u: goto label_1d2aa8;
            case 0x1D2AACu: goto label_1d2aac;
            case 0x1D2AB0u: goto label_1d2ab0;
            case 0x1D2AB4u: goto label_1d2ab4;
            case 0x1D2AB8u: goto label_1d2ab8;
            case 0x1D2ABCu: goto label_1d2abc;
            case 0x1D2AC0u: goto label_1d2ac0;
            case 0x1D2AC4u: goto label_1d2ac4;
            case 0x1D2AC8u: goto label_1d2ac8;
            case 0x1D2ACCu: goto label_1d2acc;
            case 0x1D2AD0u: goto label_1d2ad0;
            case 0x1D2AD4u: goto label_1d2ad4;
            case 0x1D2AD8u: goto label_1d2ad8;
            case 0x1D2ADCu: goto label_1d2adc;
            case 0x1D2AE0u: goto label_1d2ae0;
            case 0x1D2AE4u: goto label_1d2ae4;
            case 0x1D2AE8u: goto label_1d2ae8;
            case 0x1D2AECu: goto label_1d2aec;
            case 0x1D2AF0u: goto label_1d2af0;
            case 0x1D2AF4u: goto label_1d2af4;
            case 0x1D2AF8u: goto label_1d2af8;
            case 0x1D2AFCu: goto label_1d2afc;
            case 0x1D2B00u: goto label_1d2b00;
            case 0x1D2B04u: goto label_1d2b04;
            case 0x1D2B08u: goto label_1d2b08;
            case 0x1D2B0Cu: goto label_1d2b0c;
            case 0x1D2B10u: goto label_1d2b10;
            case 0x1D2B14u: goto label_1d2b14;
            case 0x1D2B18u: goto label_1d2b18;
            case 0x1D2B1Cu: goto label_1d2b1c;
            case 0x1D2B20u: goto label_1d2b20;
            case 0x1D2B24u: goto label_1d2b24;
            case 0x1D2B28u: goto label_1d2b28;
            case 0x1D2B2Cu: goto label_1d2b2c;
            case 0x1D2B30u: goto label_1d2b30;
            case 0x1D2B34u: goto label_1d2b34;
            case 0x1D2B38u: goto label_1d2b38;
            case 0x1D2B3Cu: goto label_1d2b3c;
            case 0x1D2B40u: goto label_1d2b40;
            case 0x1D2B44u: goto label_1d2b44;
            case 0x1D2B48u: goto label_1d2b48;
            case 0x1D2B4Cu: goto label_1d2b4c;
            case 0x1D2B50u: goto label_1d2b50;
            case 0x1D2B54u: goto label_1d2b54;
            case 0x1D2B58u: goto label_1d2b58;
            case 0x1D2B5Cu: goto label_1d2b5c;
            case 0x1D2B60u: goto label_1d2b60;
            case 0x1D2B64u: goto label_1d2b64;
            case 0x1D2B68u: goto label_1d2b68;
            case 0x1D2B6Cu: goto label_1d2b6c;
            case 0x1D2B70u: goto label_1d2b70;
            case 0x1D2B74u: goto label_1d2b74;
            case 0x1D2B78u: goto label_1d2b78;
            case 0x1D2B7Cu: goto label_1d2b7c;
            case 0x1D2B80u: goto label_1d2b80;
            case 0x1D2B84u: goto label_1d2b84;
            case 0x1D2B88u: goto label_1d2b88;
            case 0x1D2B8Cu: goto label_1d2b8c;
            case 0x1D2B90u: goto label_1d2b90;
            case 0x1D2B94u: goto label_1d2b94;
            case 0x1D2B98u: goto label_1d2b98;
            case 0x1D2B9Cu: goto label_1d2b9c;
            case 0x1D2BA0u: goto label_1d2ba0;
            case 0x1D2BA4u: goto label_1d2ba4;
            case 0x1D2BA8u: goto label_1d2ba8;
            case 0x1D2BACu: goto label_1d2bac;
            case 0x1D2BB0u: goto label_1d2bb0;
            case 0x1D2BB4u: goto label_1d2bb4;
            case 0x1D2BB8u: goto label_1d2bb8;
            case 0x1D2BBCu: goto label_1d2bbc;
            case 0x1D2BC0u: goto label_1d2bc0;
            case 0x1D2BC4u: goto label_1d2bc4;
            case 0x1D2BC8u: goto label_1d2bc8;
            case 0x1D2BCCu: goto label_1d2bcc;
            case 0x1D2BD0u: goto label_1d2bd0;
            case 0x1D2BD4u: goto label_1d2bd4;
            case 0x1D2BD8u: goto label_1d2bd8;
            case 0x1D2BDCu: goto label_1d2bdc;
            case 0x1D2BE0u: goto label_1d2be0;
            case 0x1D2BE4u: goto label_1d2be4;
            case 0x1D2BE8u: goto label_1d2be8;
            case 0x1D2BECu: goto label_1d2bec;
            case 0x1D2BF0u: goto label_1d2bf0;
            case 0x1D2BF4u: goto label_1d2bf4;
            case 0x1D2BF8u: goto label_1d2bf8;
            case 0x1D2BFCu: goto label_1d2bfc;
            case 0x1D2C00u: goto label_1d2c00;
            case 0x1D2C04u: goto label_1d2c04;
            case 0x1D2C08u: goto label_1d2c08;
            case 0x1D2C0Cu: goto label_1d2c0c;
            case 0x1D2C10u: goto label_1d2c10;
            case 0x1D2C14u: goto label_1d2c14;
            case 0x1D2C18u: goto label_1d2c18;
            case 0x1D2C1Cu: goto label_1d2c1c;
            case 0x1D2C20u: goto label_1d2c20;
            case 0x1D2C24u: goto label_1d2c24;
            case 0x1D2C28u: goto label_1d2c28;
            case 0x1D2C2Cu: goto label_1d2c2c;
            case 0x1D2C30u: goto label_1d2c30;
            case 0x1D2C34u: goto label_1d2c34;
            case 0x1D2C38u: goto label_1d2c38;
            case 0x1D2C3Cu: goto label_1d2c3c;
            case 0x1D2C40u: goto label_1d2c40;
            case 0x1D2C44u: goto label_1d2c44;
            case 0x1D2C48u: goto label_1d2c48;
            case 0x1D2C4Cu: goto label_1d2c4c;
            case 0x1D2C50u: goto label_1d2c50;
            case 0x1D2C54u: goto label_1d2c54;
            case 0x1D2C58u: goto label_1d2c58;
            case 0x1D2C5Cu: goto label_1d2c5c;
            case 0x1D2C60u: goto label_1d2c60;
            case 0x1D2C64u: goto label_1d2c64;
            case 0x1D2C68u: goto label_1d2c68;
            case 0x1D2C6Cu: goto label_1d2c6c;
            case 0x1D2C70u: goto label_1d2c70;
            case 0x1D2C74u: goto label_1d2c74;
            case 0x1D2C78u: goto label_1d2c78;
            case 0x1D2C7Cu: goto label_1d2c7c;
            case 0x1D2C80u: goto label_1d2c80;
            case 0x1D2C84u: goto label_1d2c84;
            case 0x1D2C88u: goto label_1d2c88;
            case 0x1D2C8Cu: goto label_1d2c8c;
            case 0x1D2C90u: goto label_1d2c90;
            case 0x1D2C94u: goto label_1d2c94;
            case 0x1D2C98u: goto label_1d2c98;
            case 0x1D2C9Cu: goto label_1d2c9c;
            case 0x1D2CA0u: goto label_1d2ca0;
            case 0x1D2CA4u: goto label_1d2ca4;
            case 0x1D2CA8u: goto label_1d2ca8;
            case 0x1D2CACu: goto label_1d2cac;
            case 0x1D2CB0u: goto label_1d2cb0;
            case 0x1D2CB4u: goto label_1d2cb4;
            case 0x1D2CB8u: goto label_1d2cb8;
            case 0x1D2CBCu: goto label_1d2cbc;
            case 0x1D2CC0u: goto label_1d2cc0;
            case 0x1D2CC4u: goto label_1d2cc4;
            case 0x1D2CC8u: goto label_1d2cc8;
            case 0x1D2CCCu: goto label_1d2ccc;
            case 0x1D2CD0u: goto label_1d2cd0;
            case 0x1D2CD4u: goto label_1d2cd4;
            case 0x1D2CD8u: goto label_1d2cd8;
            case 0x1D2CDCu: goto label_1d2cdc;
            case 0x1D2CE0u: goto label_1d2ce0;
            case 0x1D2CE4u: goto label_1d2ce4;
            case 0x1D2CE8u: goto label_1d2ce8;
            case 0x1D2CECu: goto label_1d2cec;
            case 0x1D2CF0u: goto label_1d2cf0;
            case 0x1D2CF4u: goto label_1d2cf4;
            case 0x1D2CF8u: goto label_1d2cf8;
            case 0x1D2CFCu: goto label_1d2cfc;
            case 0x1D2D00u: goto label_1d2d00;
            case 0x1D2D04u: goto label_1d2d04;
            case 0x1D2D08u: goto label_1d2d08;
            case 0x1D2D0Cu: goto label_1d2d0c;
            case 0x1D2D10u: goto label_1d2d10;
            case 0x1D2D14u: goto label_1d2d14;
            case 0x1D2D18u: goto label_1d2d18;
            case 0x1D2D1Cu: goto label_1d2d1c;
            case 0x1D2D20u: goto label_1d2d20;
            case 0x1D2D24u: goto label_1d2d24;
            case 0x1D2D28u: goto label_1d2d28;
            case 0x1D2D2Cu: goto label_1d2d2c;
            case 0x1D2D30u: goto label_1d2d30;
            case 0x1D2D34u: goto label_1d2d34;
            case 0x1D2D38u: goto label_1d2d38;
            case 0x1D2D3Cu: goto label_1d2d3c;
            case 0x1D2D40u: goto label_1d2d40;
            case 0x1D2D44u: goto label_1d2d44;
            case 0x1D2D48u: goto label_1d2d48;
            case 0x1D2D4Cu: goto label_1d2d4c;
            case 0x1D2D50u: goto label_1d2d50;
            case 0x1D2D54u: goto label_1d2d54;
            case 0x1D2D58u: goto label_1d2d58;
            case 0x1D2D5Cu: goto label_1d2d5c;
            case 0x1D2D60u: goto label_1d2d60;
            case 0x1D2D64u: goto label_1d2d64;
            case 0x1D2D68u: goto label_1d2d68;
            case 0x1D2D6Cu: goto label_1d2d6c;
            case 0x1D2D70u: goto label_1d2d70;
            case 0x1D2D74u: goto label_1d2d74;
            case 0x1D2D78u: goto label_1d2d78;
            case 0x1D2D7Cu: goto label_1d2d7c;
            case 0x1D2D80u: goto label_1d2d80;
            case 0x1D2D84u: goto label_1d2d84;
            case 0x1D2D88u: goto label_1d2d88;
            case 0x1D2D8Cu: goto label_1d2d8c;
            case 0x1D2D90u: goto label_1d2d90;
            case 0x1D2D94u: goto label_1d2d94;
            case 0x1D2D98u: goto label_1d2d98;
            case 0x1D2D9Cu: goto label_1d2d9c;
            case 0x1D2DA0u: goto label_1d2da0;
            case 0x1D2DA4u: goto label_1d2da4;
            case 0x1D2DA8u: goto label_1d2da8;
            case 0x1D2DACu: goto label_1d2dac;
            case 0x1D2DB0u: goto label_1d2db0;
            case 0x1D2DB4u: goto label_1d2db4;
            case 0x1D2DB8u: goto label_1d2db8;
            case 0x1D2DBCu: goto label_1d2dbc;
            case 0x1D2DC0u: goto label_1d2dc0;
            case 0x1D2DC4u: goto label_1d2dc4;
            case 0x1D2DC8u: goto label_1d2dc8;
            case 0x1D2DCCu: goto label_1d2dcc;
            case 0x1D2DD0u: goto label_1d2dd0;
            case 0x1D2DD4u: goto label_1d2dd4;
            case 0x1D2DD8u: goto label_1d2dd8;
            case 0x1D2DDCu: goto label_1d2ddc;
            case 0x1D2DE0u: goto label_1d2de0;
            case 0x1D2DE4u: goto label_1d2de4;
            case 0x1D2DE8u: goto label_1d2de8;
            case 0x1D2DECu: goto label_1d2dec;
            case 0x1D2DF0u: goto label_1d2df0;
            case 0x1D2DF4u: goto label_1d2df4;
            case 0x1D2DF8u: goto label_1d2df8;
            case 0x1D2DFCu: goto label_1d2dfc;
            case 0x1D2E00u: goto label_1d2e00;
            case 0x1D2E04u: goto label_1d2e04;
            case 0x1D2E08u: goto label_1d2e08;
            case 0x1D2E0Cu: goto label_1d2e0c;
            case 0x1D2E10u: goto label_1d2e10;
            case 0x1D2E14u: goto label_1d2e14;
            case 0x1D2E18u: goto label_1d2e18;
            case 0x1D2E1Cu: goto label_1d2e1c;
            case 0x1D2E20u: goto label_1d2e20;
            case 0x1D2E24u: goto label_1d2e24;
            case 0x1D2E28u: goto label_1d2e28;
            case 0x1D2E2Cu: goto label_1d2e2c;
            case 0x1D2E30u: goto label_1d2e30;
            case 0x1D2E34u: goto label_1d2e34;
            case 0x1D2E38u: goto label_1d2e38;
            case 0x1D2E3Cu: goto label_1d2e3c;
            case 0x1D2E40u: goto label_1d2e40;
            case 0x1D2E44u: goto label_1d2e44;
            case 0x1D2E48u: goto label_1d2e48;
            case 0x1D2E4Cu: goto label_1d2e4c;
            case 0x1D2E50u: goto label_1d2e50;
            case 0x1D2E54u: goto label_1d2e54;
            case 0x1D2E58u: goto label_1d2e58;
            case 0x1D2E5Cu: goto label_1d2e5c;
            case 0x1D2E60u: goto label_1d2e60;
            case 0x1D2E64u: goto label_1d2e64;
            case 0x1D2E68u: goto label_1d2e68;
            case 0x1D2E6Cu: goto label_1d2e6c;
            case 0x1D2E70u: goto label_1d2e70;
            case 0x1D2E74u: goto label_1d2e74;
            case 0x1D2E78u: goto label_1d2e78;
            case 0x1D2E7Cu: goto label_1d2e7c;
            case 0x1D2E80u: goto label_1d2e80;
            case 0x1D2E84u: goto label_1d2e84;
            case 0x1D2E88u: goto label_1d2e88;
            case 0x1D2E8Cu: goto label_1d2e8c;
            case 0x1D2E90u: goto label_1d2e90;
            case 0x1D2E94u: goto label_1d2e94;
            case 0x1D2E98u: goto label_1d2e98;
            case 0x1D2E9Cu: goto label_1d2e9c;
            case 0x1D2EA0u: goto label_1d2ea0;
            case 0x1D2EA4u: goto label_1d2ea4;
            case 0x1D2EA8u: goto label_1d2ea8;
            case 0x1D2EACu: goto label_1d2eac;
            case 0x1D2EB0u: goto label_1d2eb0;
            case 0x1D2EB4u: goto label_1d2eb4;
            case 0x1D2EB8u: goto label_1d2eb8;
            case 0x1D2EBCu: goto label_1d2ebc;
            case 0x1D2EC0u: goto label_1d2ec0;
            case 0x1D2EC4u: goto label_1d2ec4;
            case 0x1D2EC8u: goto label_1d2ec8;
            case 0x1D2ECCu: goto label_1d2ecc;
            case 0x1D2ED0u: goto label_1d2ed0;
            case 0x1D2ED4u: goto label_1d2ed4;
            case 0x1D2ED8u: goto label_1d2ed8;
            case 0x1D2EDCu: goto label_1d2edc;
            case 0x1D2EE0u: goto label_1d2ee0;
            case 0x1D2EE4u: goto label_1d2ee4;
            case 0x1D2EE8u: goto label_1d2ee8;
            case 0x1D2EECu: goto label_1d2eec;
            case 0x1D2EF0u: goto label_1d2ef0;
            case 0x1D2EF4u: goto label_1d2ef4;
            case 0x1D2EF8u: goto label_1d2ef8;
            case 0x1D2EFCu: goto label_1d2efc;
            case 0x1D2F00u: goto label_1d2f00;
            case 0x1D2F04u: goto label_1d2f04;
            case 0x1D2F08u: goto label_1d2f08;
            case 0x1D2F0Cu: goto label_1d2f0c;
            case 0x1D2F10u: goto label_1d2f10;
            case 0x1D2F14u: goto label_1d2f14;
            case 0x1D2F18u: goto label_1d2f18;
            case 0x1D2F1Cu: goto label_1d2f1c;
            case 0x1D2F20u: goto label_1d2f20;
            case 0x1D2F24u: goto label_1d2f24;
            case 0x1D2F28u: goto label_1d2f28;
            case 0x1D2F2Cu: goto label_1d2f2c;
            case 0x1D2F30u: goto label_1d2f30;
            case 0x1D2F34u: goto label_1d2f34;
            case 0x1D2F38u: goto label_1d2f38;
            case 0x1D2F3Cu: goto label_1d2f3c;
            case 0x1D2F40u: goto label_1d2f40;
            case 0x1D2F44u: goto label_1d2f44;
            case 0x1D2F48u: goto label_1d2f48;
            case 0x1D2F4Cu: goto label_1d2f4c;
            case 0x1D2F50u: goto label_1d2f50;
            case 0x1D2F54u: goto label_1d2f54;
            case 0x1D2F58u: goto label_1d2f58;
            case 0x1D2F5Cu: goto label_1d2f5c;
            case 0x1D2F60u: goto label_1d2f60;
            case 0x1D2F64u: goto label_1d2f64;
            case 0x1D2F68u: goto label_1d2f68;
            case 0x1D2F6Cu: goto label_1d2f6c;
            case 0x1D2F70u: goto label_1d2f70;
            case 0x1D2F74u: goto label_1d2f74;
            case 0x1D2F78u: goto label_1d2f78;
            case 0x1D2F7Cu: goto label_1d2f7c;
            case 0x1D2F80u: goto label_1d2f80;
            case 0x1D2F84u: goto label_1d2f84;
            case 0x1D2F88u: goto label_1d2f88;
            case 0x1D2F8Cu: goto label_1d2f8c;
            case 0x1D2F90u: goto label_1d2f90;
            case 0x1D2F94u: goto label_1d2f94;
            case 0x1D2F98u: goto label_1d2f98;
            case 0x1D2F9Cu: goto label_1d2f9c;
            case 0x1D2FA0u: goto label_1d2fa0;
            case 0x1D2FA4u: goto label_1d2fa4;
            case 0x1D2FA8u: goto label_1d2fa8;
            case 0x1D2FACu: goto label_1d2fac;
            case 0x1D2FB0u: goto label_1d2fb0;
            case 0x1D2FB4u: goto label_1d2fb4;
            case 0x1D2FB8u: goto label_1d2fb8;
            case 0x1D2FBCu: goto label_1d2fbc;
            case 0x1D2FC0u: goto label_1d2fc0;
            case 0x1D2FC4u: goto label_1d2fc4;
            case 0x1D2FC8u: goto label_1d2fc8;
            case 0x1D2FCCu: goto label_1d2fcc;
            case 0x1D2FD0u: goto label_1d2fd0;
            case 0x1D2FD4u: goto label_1d2fd4;
            case 0x1D2FD8u: goto label_1d2fd8;
            case 0x1D2FDCu: goto label_1d2fdc;
            case 0x1D2FE0u: goto label_1d2fe0;
            case 0x1D2FE4u: goto label_1d2fe4;
            case 0x1D2FE8u: goto label_1d2fe8;
            case 0x1D2FECu: goto label_1d2fec;
            case 0x1D2FF0u: goto label_1d2ff0;
            case 0x1D2FF4u: goto label_1d2ff4;
            case 0x1D2FF8u: goto label_1d2ff8;
            case 0x1D2FFCu: goto label_1d2ffc;
            case 0x1D3000u: goto label_1d3000;
            case 0x1D3004u: goto label_1d3004;
            case 0x1D3008u: goto label_1d3008;
            case 0x1D300Cu: goto label_1d300c;
            case 0x1D3010u: goto label_1d3010;
            case 0x1D3014u: goto label_1d3014;
            case 0x1D3018u: goto label_1d3018;
            case 0x1D301Cu: goto label_1d301c;
            case 0x1D3020u: goto label_1d3020;
            case 0x1D3024u: goto label_1d3024;
            case 0x1D3028u: goto label_1d3028;
            case 0x1D302Cu: goto label_1d302c;
            case 0x1D3030u: goto label_1d3030;
            case 0x1D3034u: goto label_1d3034;
            case 0x1D3038u: goto label_1d3038;
            case 0x1D303Cu: goto label_1d303c;
            case 0x1D3040u: goto label_1d3040;
            case 0x1D3044u: goto label_1d3044;
            case 0x1D3048u: goto label_1d3048;
            case 0x1D304Cu: goto label_1d304c;
            case 0x1D3050u: goto label_1d3050;
            case 0x1D3054u: goto label_1d3054;
            case 0x1D3058u: goto label_1d3058;
            case 0x1D305Cu: goto label_1d305c;
            case 0x1D3060u: goto label_1d3060;
            case 0x1D3064u: goto label_1d3064;
            case 0x1D3068u: goto label_1d3068;
            case 0x1D306Cu: goto label_1d306c;
            case 0x1D3070u: goto label_1d3070;
            case 0x1D3074u: goto label_1d3074;
            case 0x1D3078u: goto label_1d3078;
            case 0x1D307Cu: goto label_1d307c;
            case 0x1D3080u: goto label_1d3080;
            case 0x1D3084u: goto label_1d3084;
            case 0x1D3088u: goto label_1d3088;
            case 0x1D308Cu: goto label_1d308c;
            case 0x1D3090u: goto label_1d3090;
            case 0x1D3094u: goto label_1d3094;
            case 0x1D3098u: goto label_1d3098;
            case 0x1D309Cu: goto label_1d309c;
            case 0x1D30A0u: goto label_1d30a0;
            case 0x1D30A4u: goto label_1d30a4;
            case 0x1D30A8u: goto label_1d30a8;
            case 0x1D30ACu: goto label_1d30ac;
            case 0x1D30B0u: goto label_1d30b0;
            case 0x1D30B4u: goto label_1d30b4;
            case 0x1D30B8u: goto label_1d30b8;
            case 0x1D30BCu: goto label_1d30bc;
            case 0x1D30C0u: goto label_1d30c0;
            case 0x1D30C4u: goto label_1d30c4;
            case 0x1D30C8u: goto label_1d30c8;
            case 0x1D30CCu: goto label_1d30cc;
            case 0x1D30D0u: goto label_1d30d0;
            case 0x1D30D4u: goto label_1d30d4;
            case 0x1D30D8u: goto label_1d30d8;
            case 0x1D30DCu: goto label_1d30dc;
            case 0x1D30E0u: goto label_1d30e0;
            case 0x1D30E4u: goto label_1d30e4;
            case 0x1D30E8u: goto label_1d30e8;
            case 0x1D30ECu: goto label_1d30ec;
            case 0x1D30F0u: goto label_1d30f0;
            case 0x1D30F4u: goto label_1d30f4;
            case 0x1D30F8u: goto label_1d30f8;
            case 0x1D30FCu: goto label_1d30fc;
            case 0x1D3100u: goto label_1d3100;
            case 0x1D3104u: goto label_1d3104;
            case 0x1D3108u: goto label_1d3108;
            case 0x1D310Cu: goto label_1d310c;
            case 0x1D3110u: goto label_1d3110;
            case 0x1D3114u: goto label_1d3114;
            case 0x1D3118u: goto label_1d3118;
            case 0x1D311Cu: goto label_1d311c;
            case 0x1D3120u: goto label_1d3120;
            case 0x1D3124u: goto label_1d3124;
            case 0x1D3128u: goto label_1d3128;
            case 0x1D312Cu: goto label_1d312c;
            case 0x1D3130u: goto label_1d3130;
            case 0x1D3134u: goto label_1d3134;
            case 0x1D3138u: goto label_1d3138;
            case 0x1D313Cu: goto label_1d313c;
            case 0x1D3140u: goto label_1d3140;
            case 0x1D3144u: goto label_1d3144;
            case 0x1D3148u: goto label_1d3148;
            case 0x1D314Cu: goto label_1d314c;
            case 0x1D3150u: goto label_1d3150;
            case 0x1D3154u: goto label_1d3154;
            case 0x1D3158u: goto label_1d3158;
            case 0x1D315Cu: goto label_1d315c;
            case 0x1D3160u: goto label_1d3160;
            case 0x1D3164u: goto label_1d3164;
            case 0x1D3168u: goto label_1d3168;
            case 0x1D316Cu: goto label_1d316c;
            case 0x1D3170u: goto label_1d3170;
            case 0x1D3174u: goto label_1d3174;
            case 0x1D3178u: goto label_1d3178;
            case 0x1D317Cu: goto label_1d317c;
            case 0x1D3180u: goto label_1d3180;
            case 0x1D3184u: goto label_1d3184;
            case 0x1D3188u: goto label_1d3188;
            case 0x1D318Cu: goto label_1d318c;
            case 0x1D3190u: goto label_1d3190;
            case 0x1D3194u: goto label_1d3194;
            case 0x1D3198u: goto label_1d3198;
            case 0x1D319Cu: goto label_1d319c;
            case 0x1D31A0u: goto label_1d31a0;
            case 0x1D31A4u: goto label_1d31a4;
            case 0x1D31A8u: goto label_1d31a8;
            case 0x1D31ACu: goto label_1d31ac;
            case 0x1D31B0u: goto label_1d31b0;
            case 0x1D31B4u: goto label_1d31b4;
            case 0x1D31B8u: goto label_1d31b8;
            case 0x1D31BCu: goto label_1d31bc;
            case 0x1D31C0u: goto label_1d31c0;
            case 0x1D31C4u: goto label_1d31c4;
            case 0x1D31C8u: goto label_1d31c8;
            case 0x1D31CCu: goto label_1d31cc;
            case 0x1D31D0u: goto label_1d31d0;
            case 0x1D31D4u: goto label_1d31d4;
            case 0x1D31D8u: goto label_1d31d8;
            case 0x1D31DCu: goto label_1d31dc;
            case 0x1D31E0u: goto label_1d31e0;
            case 0x1D31E4u: goto label_1d31e4;
            case 0x1D31E8u: goto label_1d31e8;
            case 0x1D31ECu: goto label_1d31ec;
            case 0x1D31F0u: goto label_1d31f0;
            case 0x1D31F4u: goto label_1d31f4;
            case 0x1D31F8u: goto label_1d31f8;
            case 0x1D31FCu: goto label_1d31fc;
            case 0x1D3200u: goto label_1d3200;
            case 0x1D3204u: goto label_1d3204;
            case 0x1D3208u: goto label_1d3208;
            case 0x1D320Cu: goto label_1d320c;
            case 0x1D3210u: goto label_1d3210;
            case 0x1D3214u: goto label_1d3214;
            case 0x1D3218u: goto label_1d3218;
            case 0x1D321Cu: goto label_1d321c;
            case 0x1D3220u: goto label_1d3220;
            case 0x1D3224u: goto label_1d3224;
            case 0x1D3228u: goto label_1d3228;
            case 0x1D322Cu: goto label_1d322c;
            case 0x1D3230u: goto label_1d3230;
            case 0x1D3234u: goto label_1d3234;
            case 0x1D3238u: goto label_1d3238;
            case 0x1D323Cu: goto label_1d323c;
            case 0x1D3240u: goto label_1d3240;
            case 0x1D3244u: goto label_1d3244;
            case 0x1D3248u: goto label_1d3248;
            case 0x1D324Cu: goto label_1d324c;
            case 0x1D3250u: goto label_1d3250;
            case 0x1D3254u: goto label_1d3254;
            case 0x1D3258u: goto label_1d3258;
            case 0x1D325Cu: goto label_1d325c;
            case 0x1D3260u: goto label_1d3260;
            case 0x1D3264u: goto label_1d3264;
            case 0x1D3268u: goto label_1d3268;
            case 0x1D326Cu: goto label_1d326c;
            case 0x1D3270u: goto label_1d3270;
            case 0x1D3274u: goto label_1d3274;
            case 0x1D3278u: goto label_1d3278;
            case 0x1D327Cu: goto label_1d327c;
            case 0x1D3280u: goto label_1d3280;
            case 0x1D3284u: goto label_1d3284;
            case 0x1D3288u: goto label_1d3288;
            case 0x1D328Cu: goto label_1d328c;
            case 0x1D3290u: goto label_1d3290;
            case 0x1D3294u: goto label_1d3294;
            case 0x1D3298u: goto label_1d3298;
            case 0x1D329Cu: goto label_1d329c;
            case 0x1D32A0u: goto label_1d32a0;
            case 0x1D32A4u: goto label_1d32a4;
            case 0x1D32A8u: goto label_1d32a8;
            case 0x1D32ACu: goto label_1d32ac;
            case 0x1D32B0u: goto label_1d32b0;
            case 0x1D32B4u: goto label_1d32b4;
            case 0x1D32B8u: goto label_1d32b8;
            case 0x1D32BCu: goto label_1d32bc;
            case 0x1D32C0u: goto label_1d32c0;
            case 0x1D32C4u: goto label_1d32c4;
            case 0x1D32C8u: goto label_1d32c8;
            case 0x1D32CCu: goto label_1d32cc;
            case 0x1D32D0u: goto label_1d32d0;
            case 0x1D32D4u: goto label_1d32d4;
            case 0x1D32D8u: goto label_1d32d8;
            case 0x1D32DCu: goto label_1d32dc;
            case 0x1D32E0u: goto label_1d32e0;
            case 0x1D32E4u: goto label_1d32e4;
            case 0x1D32E8u: goto label_1d32e8;
            case 0x1D32ECu: goto label_1d32ec;
            case 0x1D32F0u: goto label_1d32f0;
            case 0x1D32F4u: goto label_1d32f4;
            case 0x1D32F8u: goto label_1d32f8;
            case 0x1D32FCu: goto label_1d32fc;
            case 0x1D3300u: goto label_1d3300;
            case 0x1D3304u: goto label_1d3304;
            case 0x1D3308u: goto label_1d3308;
            case 0x1D330Cu: goto label_1d330c;
            case 0x1D3310u: goto label_1d3310;
            case 0x1D3314u: goto label_1d3314;
            case 0x1D3318u: goto label_1d3318;
            case 0x1D331Cu: goto label_1d331c;
            case 0x1D3320u: goto label_1d3320;
            case 0x1D3324u: goto label_1d3324;
            case 0x1D3328u: goto label_1d3328;
            case 0x1D332Cu: goto label_1d332c;
            case 0x1D3330u: goto label_1d3330;
            case 0x1D3334u: goto label_1d3334;
            case 0x1D3338u: goto label_1d3338;
            case 0x1D333Cu: goto label_1d333c;
            case 0x1D3340u: goto label_1d3340;
            case 0x1D3344u: goto label_1d3344;
            case 0x1D3348u: goto label_1d3348;
            case 0x1D334Cu: goto label_1d334c;
            case 0x1D3350u: goto label_1d3350;
            case 0x1D3354u: goto label_1d3354;
            case 0x1D3358u: goto label_1d3358;
            case 0x1D335Cu: goto label_1d335c;
            case 0x1D3360u: goto label_1d3360;
            case 0x1D3364u: goto label_1d3364;
            case 0x1D3368u: goto label_1d3368;
            case 0x1D336Cu: goto label_1d336c;
            case 0x1D3370u: goto label_1d3370;
            case 0x1D3374u: goto label_1d3374;
            case 0x1D3378u: goto label_1d3378;
            case 0x1D337Cu: goto label_1d337c;
            case 0x1D3380u: goto label_1d3380;
            case 0x1D3384u: goto label_1d3384;
            case 0x1D3388u: goto label_1d3388;
            case 0x1D338Cu: goto label_1d338c;
            case 0x1D3390u: goto label_1d3390;
            case 0x1D3394u: goto label_1d3394;
            case 0x1D3398u: goto label_1d3398;
            case 0x1D339Cu: goto label_1d339c;
            case 0x1D33A0u: goto label_1d33a0;
            case 0x1D33A4u: goto label_1d33a4;
            case 0x1D33A8u: goto label_1d33a8;
            case 0x1D33ACu: goto label_1d33ac;
            case 0x1D33B0u: goto label_1d33b0;
            case 0x1D33B4u: goto label_1d33b4;
            case 0x1D33B8u: goto label_1d33b8;
            case 0x1D33BCu: goto label_1d33bc;
            case 0x1D33C0u: goto label_1d33c0;
            case 0x1D33C4u: goto label_1d33c4;
            case 0x1D33C8u: goto label_1d33c8;
            case 0x1D33CCu: goto label_1d33cc;
            case 0x1D33D0u: goto label_1d33d0;
            case 0x1D33D4u: goto label_1d33d4;
            case 0x1D33D8u: goto label_1d33d8;
            case 0x1D33DCu: goto label_1d33dc;
            case 0x1D33E0u: goto label_1d33e0;
            case 0x1D33E4u: goto label_1d33e4;
            case 0x1D33E8u: goto label_1d33e8;
            case 0x1D33ECu: goto label_1d33ec;
            case 0x1D33F0u: goto label_1d33f0;
            case 0x1D33F4u: goto label_1d33f4;
            case 0x1D33F8u: goto label_1d33f8;
            case 0x1D33FCu: goto label_1d33fc;
            case 0x1D3400u: goto label_1d3400;
            case 0x1D3404u: goto label_1d3404;
            case 0x1D3408u: goto label_1d3408;
            case 0x1D340Cu: goto label_1d340c;
            case 0x1D3410u: goto label_1d3410;
            case 0x1D3414u: goto label_1d3414;
            case 0x1D3418u: goto label_1d3418;
            case 0x1D341Cu: goto label_1d341c;
            case 0x1D3420u: goto label_1d3420;
            case 0x1D3424u: goto label_1d3424;
            case 0x1D3428u: goto label_1d3428;
            case 0x1D342Cu: goto label_1d342c;
            case 0x1D3430u: goto label_1d3430;
            case 0x1D3434u: goto label_1d3434;
            case 0x1D3438u: goto label_1d3438;
            case 0x1D343Cu: goto label_1d343c;
            case 0x1D3440u: goto label_1d3440;
            case 0x1D3444u: goto label_1d3444;
            case 0x1D3448u: goto label_1d3448;
            case 0x1D344Cu: goto label_1d344c;
            case 0x1D3450u: goto label_1d3450;
            case 0x1D3454u: goto label_1d3454;
            case 0x1D3458u: goto label_1d3458;
            case 0x1D345Cu: goto label_1d345c;
            case 0x1D3460u: goto label_1d3460;
            case 0x1D3464u: goto label_1d3464;
            case 0x1D3468u: goto label_1d3468;
            case 0x1D346Cu: goto label_1d346c;
            case 0x1D3470u: goto label_1d3470;
            case 0x1D3474u: goto label_1d3474;
            case 0x1D3478u: goto label_1d3478;
            case 0x1D347Cu: goto label_1d347c;
            case 0x1D3480u: goto label_1d3480;
            case 0x1D3484u: goto label_1d3484;
            case 0x1D3488u: goto label_1d3488;
            case 0x1D348Cu: goto label_1d348c;
            case 0x1D3490u: goto label_1d3490;
            case 0x1D3494u: goto label_1d3494;
            case 0x1D3498u: goto label_1d3498;
            case 0x1D349Cu: goto label_1d349c;
            case 0x1D34A0u: goto label_1d34a0;
            case 0x1D34A4u: goto label_1d34a4;
            case 0x1D34A8u: goto label_1d34a8;
            case 0x1D34ACu: goto label_1d34ac;
            case 0x1D34B0u: goto label_1d34b0;
            case 0x1D34B4u: goto label_1d34b4;
            case 0x1D34B8u: goto label_1d34b8;
            case 0x1D34BCu: goto label_1d34bc;
            case 0x1D34C0u: goto label_1d34c0;
            case 0x1D34C4u: goto label_1d34c4;
            case 0x1D34C8u: goto label_1d34c8;
            case 0x1D34CCu: goto label_1d34cc;
            case 0x1D34D0u: goto label_1d34d0;
            case 0x1D34D4u: goto label_1d34d4;
            case 0x1D34D8u: goto label_1d34d8;
            case 0x1D34DCu: goto label_1d34dc;
            case 0x1D34E0u: goto label_1d34e0;
            case 0x1D34E4u: goto label_1d34e4;
            case 0x1D34E8u: goto label_1d34e8;
            case 0x1D34ECu: goto label_1d34ec;
            case 0x1D34F0u: goto label_1d34f0;
            case 0x1D34F4u: goto label_1d34f4;
            case 0x1D34F8u: goto label_1d34f8;
            case 0x1D34FCu: goto label_1d34fc;
            case 0x1D3500u: goto label_1d3500;
            case 0x1D3504u: goto label_1d3504;
            case 0x1D3508u: goto label_1d3508;
            case 0x1D350Cu: goto label_1d350c;
            case 0x1D3510u: goto label_1d3510;
            case 0x1D3514u: goto label_1d3514;
            case 0x1D3518u: goto label_1d3518;
            case 0x1D351Cu: goto label_1d351c;
            case 0x1D3520u: goto label_1d3520;
            case 0x1D3524u: goto label_1d3524;
            case 0x1D3528u: goto label_1d3528;
            case 0x1D352Cu: goto label_1d352c;
            case 0x1D3530u: goto label_1d3530;
            case 0x1D3534u: goto label_1d3534;
            case 0x1D3538u: goto label_1d3538;
            case 0x1D353Cu: goto label_1d353c;
            case 0x1D3540u: goto label_1d3540;
            case 0x1D3544u: goto label_1d3544;
            case 0x1D3548u: goto label_1d3548;
            case 0x1D354Cu: goto label_1d354c;
            case 0x1D3550u: goto label_1d3550;
            case 0x1D3554u: goto label_1d3554;
            case 0x1D3558u: goto label_1d3558;
            case 0x1D355Cu: goto label_1d355c;
            case 0x1D3560u: goto label_1d3560;
            case 0x1D3564u: goto label_1d3564;
            case 0x1D3568u: goto label_1d3568;
            case 0x1D356Cu: goto label_1d356c;
            case 0x1D3570u: goto label_1d3570;
            case 0x1D3574u: goto label_1d3574;
            case 0x1D3578u: goto label_1d3578;
            case 0x1D357Cu: goto label_1d357c;
            case 0x1D3580u: goto label_1d3580;
            case 0x1D3584u: goto label_1d3584;
            case 0x1D3588u: goto label_1d3588;
            case 0x1D358Cu: goto label_1d358c;
            case 0x1D3590u: goto label_1d3590;
            case 0x1D3594u: goto label_1d3594;
            case 0x1D3598u: goto label_1d3598;
            case 0x1D359Cu: goto label_1d359c;
            case 0x1D35A0u: goto label_1d35a0;
            case 0x1D35A4u: goto label_1d35a4;
            case 0x1D35A8u: goto label_1d35a8;
            case 0x1D35ACu: goto label_1d35ac;
            case 0x1D35B0u: goto label_1d35b0;
            case 0x1D35B4u: goto label_1d35b4;
            case 0x1D35B8u: goto label_1d35b8;
            case 0x1D35BCu: goto label_1d35bc;
            case 0x1D35C0u: goto label_1d35c0;
            case 0x1D35C4u: goto label_1d35c4;
            case 0x1D35C8u: goto label_1d35c8;
            case 0x1D35CCu: goto label_1d35cc;
            case 0x1D35D0u: goto label_1d35d0;
            case 0x1D35D4u: goto label_1d35d4;
            case 0x1D35D8u: goto label_1d35d8;
            case 0x1D35DCu: goto label_1d35dc;
            case 0x1D35E0u: goto label_1d35e0;
            case 0x1D35E4u: goto label_1d35e4;
            case 0x1D35E8u: goto label_1d35e8;
            case 0x1D35ECu: goto label_1d35ec;
            case 0x1D35F0u: goto label_1d35f0;
            case 0x1D35F4u: goto label_1d35f4;
            case 0x1D35F8u: goto label_1d35f8;
            case 0x1D35FCu: goto label_1d35fc;
            case 0x1D3600u: goto label_1d3600;
            case 0x1D3604u: goto label_1d3604;
            case 0x1D3608u: goto label_1d3608;
            case 0x1D360Cu: goto label_1d360c;
            case 0x1D3610u: goto label_1d3610;
            case 0x1D3614u: goto label_1d3614;
            case 0x1D3618u: goto label_1d3618;
            case 0x1D361Cu: goto label_1d361c;
            case 0x1D3620u: goto label_1d3620;
            case 0x1D3624u: goto label_1d3624;
            case 0x1D3628u: goto label_1d3628;
            case 0x1D362Cu: goto label_1d362c;
            case 0x1D3630u: goto label_1d3630;
            case 0x1D3634u: goto label_1d3634;
            case 0x1D3638u: goto label_1d3638;
            case 0x1D363Cu: goto label_1d363c;
            case 0x1D3640u: goto label_1d3640;
            case 0x1D3644u: goto label_1d3644;
            case 0x1D3648u: goto label_1d3648;
            case 0x1D364Cu: goto label_1d364c;
            case 0x1D3650u: goto label_1d3650;
            case 0x1D3654u: goto label_1d3654;
            case 0x1D3658u: goto label_1d3658;
            case 0x1D365Cu: goto label_1d365c;
            case 0x1D3660u: goto label_1d3660;
            case 0x1D3664u: goto label_1d3664;
            case 0x1D3668u: goto label_1d3668;
            case 0x1D366Cu: goto label_1d366c;
            case 0x1D3670u: goto label_1d3670;
            case 0x1D3674u: goto label_1d3674;
            case 0x1D3678u: goto label_1d3678;
            case 0x1D367Cu: goto label_1d367c;
            case 0x1D3680u: goto label_1d3680;
            case 0x1D3684u: goto label_1d3684;
            case 0x1D3688u: goto label_1d3688;
            case 0x1D368Cu: goto label_1d368c;
            case 0x1D3690u: goto label_1d3690;
            case 0x1D3694u: goto label_1d3694;
            case 0x1D3698u: goto label_1d3698;
            case 0x1D369Cu: goto label_1d369c;
            case 0x1D36A0u: goto label_1d36a0;
            case 0x1D36A4u: goto label_1d36a4;
            case 0x1D36A8u: goto label_1d36a8;
            case 0x1D36ACu: goto label_1d36ac;
            case 0x1D36B0u: goto label_1d36b0;
            case 0x1D36B4u: goto label_1d36b4;
            case 0x1D36B8u: goto label_1d36b8;
            case 0x1D36BCu: goto label_1d36bc;
            case 0x1D36C0u: goto label_1d36c0;
            case 0x1D36C4u: goto label_1d36c4;
            case 0x1D36C8u: goto label_1d36c8;
            case 0x1D36CCu: goto label_1d36cc;
            case 0x1D36D0u: goto label_1d36d0;
            case 0x1D36D4u: goto label_1d36d4;
            case 0x1D36D8u: goto label_1d36d8;
            case 0x1D36DCu: goto label_1d36dc;
            case 0x1D36E0u: goto label_1d36e0;
            case 0x1D36E4u: goto label_1d36e4;
            case 0x1D36E8u: goto label_1d36e8;
            case 0x1D36ECu: goto label_1d36ec;
            case 0x1D36F0u: goto label_1d36f0;
            case 0x1D36F4u: goto label_1d36f4;
            case 0x1D36F8u: goto label_1d36f8;
            case 0x1D36FCu: goto label_1d36fc;
            case 0x1D3700u: goto label_1d3700;
            case 0x1D3704u: goto label_1d3704;
            case 0x1D3708u: goto label_1d3708;
            case 0x1D370Cu: goto label_1d370c;
            case 0x1D3710u: goto label_1d3710;
            case 0x1D3714u: goto label_1d3714;
            case 0x1D3718u: goto label_1d3718;
            case 0x1D371Cu: goto label_1d371c;
            case 0x1D3720u: goto label_1d3720;
            case 0x1D3724u: goto label_1d3724;
            case 0x1D3728u: goto label_1d3728;
            case 0x1D372Cu: goto label_1d372c;
            case 0x1D3730u: goto label_1d3730;
            case 0x1D3734u: goto label_1d3734;
            case 0x1D3738u: goto label_1d3738;
            case 0x1D373Cu: goto label_1d373c;
            case 0x1D3740u: goto label_1d3740;
            case 0x1D3744u: goto label_1d3744;
            case 0x1D3748u: goto label_1d3748;
            case 0x1D374Cu: goto label_1d374c;
            case 0x1D3750u: goto label_1d3750;
            case 0x1D3754u: goto label_1d3754;
            case 0x1D3758u: goto label_1d3758;
            case 0x1D375Cu: goto label_1d375c;
            case 0x1D3760u: goto label_1d3760;
            case 0x1D3764u: goto label_1d3764;
            case 0x1D3768u: goto label_1d3768;
            case 0x1D376Cu: goto label_1d376c;
            case 0x1D3770u: goto label_1d3770;
            case 0x1D3774u: goto label_1d3774;
            case 0x1D3778u: goto label_1d3778;
            case 0x1D377Cu: goto label_1d377c;
            case 0x1D3780u: goto label_1d3780;
            case 0x1D3784u: goto label_1d3784;
            case 0x1D3788u: goto label_1d3788;
            case 0x1D378Cu: goto label_1d378c;
            case 0x1D3790u: goto label_1d3790;
            case 0x1D3794u: goto label_1d3794;
            case 0x1D3798u: goto label_1d3798;
            case 0x1D379Cu: goto label_1d379c;
            case 0x1D37A0u: goto label_1d37a0;
            case 0x1D37A4u: goto label_1d37a4;
            case 0x1D37A8u: goto label_1d37a8;
            case 0x1D37ACu: goto label_1d37ac;
            case 0x1D37B0u: goto label_1d37b0;
            case 0x1D37B4u: goto label_1d37b4;
            case 0x1D37B8u: goto label_1d37b8;
            case 0x1D37BCu: goto label_1d37bc;
            case 0x1D37C0u: goto label_1d37c0;
            case 0x1D37C4u: goto label_1d37c4;
            case 0x1D37C8u: goto label_1d37c8;
            case 0x1D37CCu: goto label_1d37cc;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D37D4u: goto label_1d37d4;
            case 0x1D37D8u: goto label_1d37d8;
            case 0x1D37DCu: goto label_1d37dc;
            case 0x1D37E0u: goto label_1d37e0;
            case 0x1D37E4u: goto label_1d37e4;
            case 0x1D37E8u: goto label_1d37e8;
            case 0x1D37ECu: goto label_1d37ec;
            case 0x1D37F0u: goto label_1d37f0;
            case 0x1D37F4u: goto label_1d37f4;
            case 0x1D37F8u: goto label_1d37f8;
            case 0x1D37FCu: goto label_1d37fc;
            case 0x1D3800u: goto label_1d3800;
            case 0x1D3804u: goto label_1d3804;
            case 0x1D3808u: goto label_1d3808;
            case 0x1D380Cu: goto label_1d380c;
            case 0x1D3810u: goto label_1d3810;
            case 0x1D3814u: goto label_1d3814;
            case 0x1D3818u: goto label_1d3818;
            case 0x1D381Cu: goto label_1d381c;
            case 0x1D3820u: goto label_1d3820;
            case 0x1D3824u: goto label_1d3824;
            case 0x1D3828u: goto label_1d3828;
            case 0x1D382Cu: goto label_1d382c;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3834u: goto label_1d3834;
            case 0x1D3838u: goto label_1d3838;
            case 0x1D383Cu: goto label_1d383c;
            case 0x1D3840u: goto label_1d3840;
            case 0x1D3844u: goto label_1d3844;
            case 0x1D3848u: goto label_1d3848;
            case 0x1D384Cu: goto label_1d384c;
            case 0x1D3850u: goto label_1d3850;
            case 0x1D3854u: goto label_1d3854;
            case 0x1D3858u: goto label_1d3858;
            case 0x1D385Cu: goto label_1d385c;
            case 0x1D3860u: goto label_1d3860;
            case 0x1D3864u: goto label_1d3864;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D386Cu: goto label_1d386c;
            case 0x1D3870u: goto label_1d3870;
            case 0x1D3874u: goto label_1d3874;
            case 0x1D3878u: goto label_1d3878;
            case 0x1D387Cu: goto label_1d387c;
            case 0x1D3880u: goto label_1d3880;
            case 0x1D3884u: goto label_1d3884;
            case 0x1D3888u: goto label_1d3888;
            case 0x1D388Cu: goto label_1d388c;
            case 0x1D3890u: goto label_1d3890;
            case 0x1D3894u: goto label_1d3894;
            case 0x1D3898u: goto label_1d3898;
            case 0x1D389Cu: goto label_1d389c;
            case 0x1D38A0u: goto label_1d38a0;
            case 0x1D38A4u: goto label_1d38a4;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38ACu: goto label_1d38ac;
            case 0x1D38B0u: goto label_1d38b0;
            case 0x1D38B4u: goto label_1d38b4;
            case 0x1D38B8u: goto label_1d38b8;
            case 0x1D38BCu: goto label_1d38bc;
            case 0x1D38C0u: goto label_1d38c0;
            case 0x1D38C4u: goto label_1d38c4;
            case 0x1D38C8u: goto label_1d38c8;
            case 0x1D38CCu: goto label_1d38cc;
            case 0x1D38D0u: goto label_1d38d0;
            case 0x1D38D4u: goto label_1d38d4;
            case 0x1D38D8u: goto label_1d38d8;
            case 0x1D38DCu: goto label_1d38dc;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D38E4u: goto label_1d38e4;
            case 0x1D38E8u: goto label_1d38e8;
            case 0x1D38ECu: goto label_1d38ec;
            case 0x1D38F0u: goto label_1d38f0;
            case 0x1D38F4u: goto label_1d38f4;
            case 0x1D38F8u: goto label_1d38f8;
            case 0x1D38FCu: goto label_1d38fc;
            case 0x1D3900u: goto label_1d3900;
            case 0x1D3904u: goto label_1d3904;
            case 0x1D3908u: goto label_1d3908;
            case 0x1D390Cu: goto label_1d390c;
            case 0x1D3910u: goto label_1d3910;
            case 0x1D3914u: goto label_1d3914;
            case 0x1D3918u: goto label_1d3918;
            case 0x1D391Cu: goto label_1d391c;
            case 0x1D3920u: goto label_1d3920;
            case 0x1D3924u: goto label_1d3924;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3930u: goto label_1d3930;
            case 0x1D3934u: goto label_1d3934;
            case 0x1D3938u: goto label_1d3938;
            case 0x1D393Cu: goto label_1d393c;
            case 0x1D3940u: goto label_1d3940;
            case 0x1D3944u: goto label_1d3944;
            case 0x1D3948u: goto label_1d3948;
            case 0x1D394Cu: goto label_1d394c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3954u: goto label_1d3954;
            case 0x1D3958u: goto label_1d3958;
            case 0x1D395Cu: goto label_1d395c;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3964u: goto label_1d3964;
            case 0x1D3968u: goto label_1d3968;
            case 0x1D396Cu: goto label_1d396c;
            case 0x1D3970u: goto label_1d3970;
            case 0x1D3974u: goto label_1d3974;
            case 0x1D3978u: goto label_1d3978;
            case 0x1D397Cu: goto label_1d397c;
            case 0x1D3980u: goto label_1d3980;
            case 0x1D3984u: goto label_1d3984;
            case 0x1D3988u: goto label_1d3988;
            case 0x1D398Cu: goto label_1d398c;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D3994u: goto label_1d3994;
            case 0x1D3998u: goto label_1d3998;
            case 0x1D399Cu: goto label_1d399c;
            case 0x1D39A0u: goto label_1d39a0;
            case 0x1D39A4u: goto label_1d39a4;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39ACu: goto label_1d39ac;
            case 0x1D39B0u: goto label_1d39b0;
            case 0x1D39B4u: goto label_1d39b4;
            case 0x1D39B8u: goto label_1d39b8;
            case 0x1D39BCu: goto label_1d39bc;
            case 0x1D39C0u: goto label_1d39c0;
            case 0x1D39C4u: goto label_1d39c4;
            case 0x1D39C8u: goto label_1d39c8;
            case 0x1D39CCu: goto label_1d39cc;
            case 0x1D39D0u: goto label_1d39d0;
            case 0x1D39D4u: goto label_1d39d4;
            case 0x1D39D8u: goto label_1d39d8;
            case 0x1D39DCu: goto label_1d39dc;
            case 0x1D39E0u: goto label_1d39e0;
            case 0x1D39E4u: goto label_1d39e4;
            case 0x1D39E8u: goto label_1d39e8;
            case 0x1D39ECu: goto label_1d39ec;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D39F4u: goto label_1d39f4;
            case 0x1D39F8u: goto label_1d39f8;
            case 0x1D39FCu: goto label_1d39fc;
            case 0x1D3A00u: goto label_1d3a00;
            case 0x1D3A04u: goto label_1d3a04;
            case 0x1D3A08u: goto label_1d3a08;
            case 0x1D3A0Cu: goto label_1d3a0c;
            case 0x1D3A10u: goto label_1d3a10;
            case 0x1D3A14u: goto label_1d3a14;
            case 0x1D3A18u: goto label_1d3a18;
            case 0x1D3A1Cu: goto label_1d3a1c;
            case 0x1D3A20u: goto label_1d3a20;
            case 0x1D3A24u: goto label_1d3a24;
            case 0x1D3A28u: goto label_1d3a28;
            case 0x1D3A2Cu: goto label_1d3a2c;
            case 0x1D3A30u: goto label_1d3a30;
            case 0x1D3A34u: goto label_1d3a34;
            case 0x1D3A38u: goto label_1d3a38;
            case 0x1D3A3Cu: goto label_1d3a3c;
            case 0x1D3A40u: goto label_1d3a40;
            case 0x1D3A44u: goto label_1d3a44;
            case 0x1D3A48u: goto label_1d3a48;
            case 0x1D3A4Cu: goto label_1d3a4c;
            case 0x1D3A50u: goto label_1d3a50;
            case 0x1D3A54u: goto label_1d3a54;
            case 0x1D3A58u: goto label_1d3a58;
            case 0x1D3A5Cu: goto label_1d3a5c;
            case 0x1D3A60u: goto label_1d3a60;
            case 0x1D3A64u: goto label_1d3a64;
            case 0x1D3A68u: goto label_1d3a68;
            case 0x1D3A6Cu: goto label_1d3a6c;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A74u: goto label_1d3a74;
            case 0x1D3A78u: goto label_1d3a78;
            case 0x1D3A7Cu: goto label_1d3a7c;
            case 0x1D3A80u: goto label_1d3a80;
            case 0x1D3A84u: goto label_1d3a84;
            case 0x1D3A88u: goto label_1d3a88;
            case 0x1D3A8Cu: goto label_1d3a8c;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3A94u: goto label_1d3a94;
            case 0x1D3A98u: goto label_1d3a98;
            case 0x1D3A9Cu: goto label_1d3a9c;
            case 0x1D3AA0u: goto label_1d3aa0;
            case 0x1D3AA4u: goto label_1d3aa4;
            case 0x1D3AA8u: goto label_1d3aa8;
            case 0x1D3AACu: goto label_1d3aac;
            case 0x1D3AB0u: goto label_1d3ab0;
            case 0x1D3AB4u: goto label_1d3ab4;
            case 0x1D3AB8u: goto label_1d3ab8;
            case 0x1D3ABCu: goto label_1d3abc;
            case 0x1D3AC0u: goto label_1d3ac0;
            case 0x1D3AC4u: goto label_1d3ac4;
            case 0x1D3AC8u: goto label_1d3ac8;
            case 0x1D3ACCu: goto label_1d3acc;
            case 0x1D3AD0u: goto label_1d3ad0;
            case 0x1D3AD4u: goto label_1d3ad4;
            case 0x1D3AD8u: goto label_1d3ad8;
            case 0x1D3ADCu: goto label_1d3adc;
            case 0x1D3AE0u: goto label_1d3ae0;
            case 0x1D3AE4u: goto label_1d3ae4;
            case 0x1D3AE8u: goto label_1d3ae8;
            case 0x1D3AECu: goto label_1d3aec;
            case 0x1D3AF0u: goto label_1d3af0;
            case 0x1D3AF4u: goto label_1d3af4;
            case 0x1D3AF8u: goto label_1d3af8;
            case 0x1D3AFCu: goto label_1d3afc;
            case 0x1D3B00u: goto label_1d3b00;
            case 0x1D3B04u: goto label_1d3b04;
            case 0x1D3B08u: goto label_1d3b08;
            case 0x1D3B0Cu: goto label_1d3b0c;
            case 0x1D3B10u: goto label_1d3b10;
            case 0x1D3B14u: goto label_1d3b14;
            case 0x1D3B18u: goto label_1d3b18;
            case 0x1D3B1Cu: goto label_1d3b1c;
            case 0x1D3B20u: goto label_1d3b20;
            case 0x1D3B24u: goto label_1d3b24;
            case 0x1D3B28u: goto label_1d3b28;
            case 0x1D3B2Cu: goto label_1d3b2c;
            case 0x1D3B30u: goto label_1d3b30;
            case 0x1D3B34u: goto label_1d3b34;
            case 0x1D3B38u: goto label_1d3b38;
            case 0x1D3B3Cu: goto label_1d3b3c;
            case 0x1D3B40u: goto label_1d3b40;
            case 0x1D3B44u: goto label_1d3b44;
            case 0x1D3B48u: goto label_1d3b48;
            case 0x1D3B4Cu: goto label_1d3b4c;
            case 0x1D3B50u: goto label_1d3b50;
            case 0x1D3B54u: goto label_1d3b54;
            case 0x1D3B58u: goto label_1d3b58;
            case 0x1D3B5Cu: goto label_1d3b5c;
            case 0x1D3B60u: goto label_1d3b60;
            case 0x1D3B64u: goto label_1d3b64;
            case 0x1D3B68u: goto label_1d3b68;
            case 0x1D3B6Cu: goto label_1d3b6c;
            case 0x1D3B70u: goto label_1d3b70;
            case 0x1D3B74u: goto label_1d3b74;
            case 0x1D3B78u: goto label_1d3b78;
            case 0x1D3B7Cu: goto label_1d3b7c;
            case 0x1D3B80u: goto label_1d3b80;
            case 0x1D3B84u: goto label_1d3b84;
            case 0x1D3B88u: goto label_1d3b88;
            case 0x1D3B8Cu: goto label_1d3b8c;
            case 0x1D3B90u: goto label_1d3b90;
            case 0x1D3B94u: goto label_1d3b94;
            case 0x1D3B98u: goto label_1d3b98;
            case 0x1D3B9Cu: goto label_1d3b9c;
            case 0x1D3BA0u: goto label_1d3ba0;
            case 0x1D3BA4u: goto label_1d3ba4;
            case 0x1D3BA8u: goto label_1d3ba8;
            case 0x1D3BACu: goto label_1d3bac;
            case 0x1D3BB0u: goto label_1d3bb0;
            case 0x1D3BB4u: goto label_1d3bb4;
            case 0x1D3BB8u: goto label_1d3bb8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1d3bb4:
    ctx->pc = 0x1D3BBCu;
}

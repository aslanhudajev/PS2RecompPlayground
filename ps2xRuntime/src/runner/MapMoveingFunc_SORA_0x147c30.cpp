#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_SORA
// Address: 0x147c30 - 0x147da8
void MapMoveingFunc_SORA_0x147c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_SORA_0x147c30");
#endif

    ctx->pc = 0x147c30u;

    // 0x147c30: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x147c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147c34: 0x3c053ba3  lui         $a1, 0x3BA3
    ctx->pc = 0x147c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15267 << 16));
    // 0x147c38: 0x34a5d70a  ori         $a1, $a1, 0xD70A
    ctx->pc = 0x147c38u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)55050u)));
    // 0x147c3c: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147c40: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147c40u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147c44: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x147c44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147c48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147c4c: 0xc4c20110  lwc1        $f2, 0x110($a2)
    ctx->pc = 0x147c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147c50: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x147c50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x147c54: 0xe4c10110  swc1        $f1, 0x110($a2)
    ctx->pc = 0x147c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 272), bits); }
    // 0x147c58: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x147c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147c5c: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x147c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147c60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147c60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147c64: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x147C64u;
    {
        const bool branch_taken_0x147c64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147C64u;
            // 0x147c68: 0x24650114  addiu       $a1, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c64) {
            ctx->pc = 0x147C88u;
            goto label_147c88;
        }
    }
    ctx->pc = 0x147C6Cu;
    // 0x147c6c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147c70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147c70u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147c78: 0x0  nop
    ctx->pc = 0x147c78u;
    // NOP
    // 0x147c7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147c80: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x147c84: 0x0  nop
    ctx->pc = 0x147c84u;
    // NOP
label_147c88:
    // 0x147c88: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x147c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147c8c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x147c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147c90: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147c90u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147c98: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x147c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147c9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147c9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147ca0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147CA0u;
    {
        const bool branch_taken_0x147ca0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147CA0u;
            // 0x147ca4: 0x24a60114  addiu       $a2, $a1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ca0) {
            ctx->pc = 0x147CC0u;
            goto label_147cc0;
        }
    }
    ctx->pc = 0x147CA8u;
    // 0x147ca8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147cac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147cacu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147cb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147cb4: 0x0  nop
    ctx->pc = 0x147cb4u;
    // NOP
    // 0x147cb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147cb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147cbc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x147cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_147cc0:
    // 0x147cc0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x147cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147cc4: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147cc8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147cc8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147ccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147cd0: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x147cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147cd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147cd8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147CD8u;
    {
        const bool branch_taken_0x147cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147CD8u;
            // 0x147cdc: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cd8) {
            ctx->pc = 0x147CF8u;
            goto label_147cf8;
        }
    }
    ctx->pc = 0x147CE0u;
    // 0x147ce0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147ce4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147ce4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147ce8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147ce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147cec: 0x0  nop
    ctx->pc = 0x147cecu;
    // NOP
    // 0x147cf0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147cf4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x147cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_147cf8:
    // 0x147cf8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x147cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147cfc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x147cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147d00: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147d00u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147d08: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x147d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147d0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147d0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147d10: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147D10u;
    {
        const bool branch_taken_0x147d10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147D10u;
            // 0x147d14: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d10) {
            ctx->pc = 0x147D30u;
            goto label_147d30;
        }
    }
    ctx->pc = 0x147D18u;
    // 0x147d18: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147d1c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147d1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147d24: 0x0  nop
    ctx->pc = 0x147d24u;
    // NOP
    // 0x147d28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147d28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147d2c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x147d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_147d30:
    // 0x147d30: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x147d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147d34: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147d38: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147d38u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147d40: 0xc4a10118  lwc1        $f1, 0x118($a1)
    ctx->pc = 0x147d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147d44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147d48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147D48u;
    {
        const bool branch_taken_0x147d48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147D48u;
            // 0x147d4c: 0x24a60118  addiu       $a2, $a1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d48) {
            ctx->pc = 0x147D68u;
            goto label_147d68;
        }
    }
    ctx->pc = 0x147D50u;
    // 0x147d50: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147d54: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147d54u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147d5c: 0x0  nop
    ctx->pc = 0x147d5cu;
    // NOP
    // 0x147d60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147d64: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x147d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_147d68:
    // 0x147d68: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x147d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147d6c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x147d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147d70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147d70u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147d78: 0xc4810118  lwc1        $f1, 0x118($a0)
    ctx->pc = 0x147d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147d7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147d7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147d80: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147D80u;
    {
        const bool branch_taken_0x147d80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147D80u;
            // 0x147d84: 0x24850118  addiu       $a1, $a0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d80) {
            ctx->pc = 0x147DA0u;
            goto label_147da0;
        }
    }
    ctx->pc = 0x147D88u;
    // 0x147d88: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147d8c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147d8cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147d90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147d94: 0x0  nop
    ctx->pc = 0x147d94u;
    // NOP
    // 0x147d98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147d98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147d9c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147da0:
    // 0x147da0: 0x3e00008  jr          $ra
    ctx->pc = 0x147DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147C88u: goto label_147c88;
            case 0x147CC0u: goto label_147cc0;
            case 0x147CF8u: goto label_147cf8;
            case 0x147D30u: goto label_147d30;
            case 0x147D68u: goto label_147d68;
            case 0x147DA0u: goto label_147da0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147DA8u;
}

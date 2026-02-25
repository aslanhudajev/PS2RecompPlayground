#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg2KUMO
// Address: 0x146c40 - 0x146da8
void MapMoveingFunc_Stg2KUMO_0x146c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg2KUMO_0x146c40");
#endif

    ctx->pc = 0x146c40u;

    // 0x146c40: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146c44: 0x8c239cf0  lw          $v1, -0x6310($at)
    ctx->pc = 0x146c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941936)));
    // 0x146c48: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x146C48u;
    {
        const bool branch_taken_0x146c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146C48u;
            // 0x146c4c: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c48) {
            ctx->pc = 0x146CA8u;
            goto label_146ca8;
        }
    }
    ctx->pc = 0x146C50u;
    // 0x146c50: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x146c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x146c54: 0xc4219ce0  lwc1        $f1, -0x6320($at)
    ctx->pc = 0x146c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146c58: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x146c58u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x146c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146c60: 0x0  nop
    ctx->pc = 0x146c60u;
    // NOP
    // 0x146c64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x146c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146c68: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x146C68u;
    {
        const bool branch_taken_0x146c68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146C68u;
            // 0x146c6c: 0x3c033851  lui         $v1, 0x3851 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14417 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c68) {
            ctx->pc = 0x146C88u;
            goto label_146c88;
        }
    }
    ctx->pc = 0x146C70u;
    // 0x146c70: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146c74: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x146c74u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46871u)));
    // 0x146c78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146c7c: 0x0  nop
    ctx->pc = 0x146c7cu;
    // NOP
    // 0x146c80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x146c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146c84: 0xe4209ce0  swc1        $f0, -0x6320($at)
    ctx->pc = 0x146c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941920), bits); }
label_146c88:
    // 0x146c88: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x146c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146c8c: 0x3c033727  lui         $v1, 0x3727
    ctx->pc = 0x146c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14119 << 16));
    // 0x146c90: 0x3463c5ac  ori         $v1, $v1, 0xC5AC
    ctx->pc = 0x146c90u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)50604u)));
    // 0x146c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146c98: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x146c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146c9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x146c9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146ca0: 0xe4a00114  swc1        $f0, 0x114($a1)
    ctx->pc = 0x146ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 276), bits); }
    // 0x146ca4: 0x0  nop
    ctx->pc = 0x146ca4u;
    // NOP
label_146ca8:
    // 0x146ca8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x146ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146cac: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146cb0: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x146cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x146cb4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146cb4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146cb8: 0xc4219ce0  lwc1        $f1, -0x6320($at)
    ctx->pc = 0x146cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146cbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146cbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146cc0: 0xc4a20110  lwc1        $f2, 0x110($a1)
    ctx->pc = 0x146cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146cc4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x146cc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x146cc8: 0xe4a10110  swc1        $f1, 0x110($a1)
    ctx->pc = 0x146cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 272), bits); }
    // 0x146ccc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x146cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146cd0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x146cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146cd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x146cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146cd8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x146CD8u;
    {
        const bool branch_taken_0x146cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146CD8u;
            // 0x146cdc: 0x24650114  addiu       $a1, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cd8) {
            ctx->pc = 0x146CF8u;
            goto label_146cf8;
        }
    }
    ctx->pc = 0x146CE0u;
    // 0x146ce0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x146ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x146ce4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146ce4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146ce8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146ce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146cec: 0x0  nop
    ctx->pc = 0x146cecu;
    // NOP
    // 0x146cf0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x146cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146cf4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x146cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_146cf8:
    // 0x146cf8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x146cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146cfc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x146cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x146d00: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146d00u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146d08: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x146d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146d0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146d0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146d10: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x146D10u;
    {
        const bool branch_taken_0x146d10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x146D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146D10u;
            // 0x146d14: 0x24a60114  addiu       $a2, $a1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d10) {
            ctx->pc = 0x146D30u;
            goto label_146d30;
        }
    }
    ctx->pc = 0x146D18u;
    // 0x146d18: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x146d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x146d1c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146d1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146d24: 0x0  nop
    ctx->pc = 0x146d24u;
    // NOP
    // 0x146d28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x146d28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146d2c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x146d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_146d30:
    // 0x146d30: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x146d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146d34: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x146d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x146d38: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146d38u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146d40: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x146d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146d44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x146d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146d48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x146D48u;
    {
        const bool branch_taken_0x146d48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146D48u;
            // 0x146d4c: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d48) {
            ctx->pc = 0x146D68u;
            goto label_146d68;
        }
    }
    ctx->pc = 0x146D50u;
    // 0x146d50: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x146d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x146d54: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146d54u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146d5c: 0x0  nop
    ctx->pc = 0x146d5cu;
    // NOP
    // 0x146d60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x146d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146d64: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x146d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_146d68:
    // 0x146d68: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x146d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146d6c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x146d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x146d70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146d70u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146d78: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x146d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146d7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146d7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146d80: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x146D80u;
    {
        const bool branch_taken_0x146d80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x146D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146D80u;
            // 0x146d84: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d80) {
            ctx->pc = 0x146DA0u;
            goto label_146da0;
        }
    }
    ctx->pc = 0x146D88u;
    // 0x146d88: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x146d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x146d8c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146d8cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146d90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146d94: 0x0  nop
    ctx->pc = 0x146d94u;
    // NOP
    // 0x146d98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x146d98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146d9c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x146d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_146da0:
    // 0x146da0: 0x3e00008  jr          $ra
    ctx->pc = 0x146DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146C88u: goto label_146c88;
            case 0x146CA8u: goto label_146ca8;
            case 0x146CF8u: goto label_146cf8;
            case 0x146D30u: goto label_146d30;
            case 0x146D68u: goto label_146d68;
            case 0x146DA0u: goto label_146da0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x146DA8u;
}

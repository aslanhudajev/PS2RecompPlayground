#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg2SORA
// Address: 0x146db0 - 0x146f18
void MapMoveingFunc_Stg2SORA_0x146db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg2SORA_0x146db0");
#endif

    ctx->pc = 0x146db0u;

    // 0x146db0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146db4: 0x8c239cf0  lw          $v1, -0x6310($at)
    ctx->pc = 0x146db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941936)));
    // 0x146db8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x146DB8u;
    {
        const bool branch_taken_0x146db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146DB8u;
            // 0x146dbc: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146db8) {
            ctx->pc = 0x146E18u;
            goto label_146e18;
        }
    }
    ctx->pc = 0x146DC0u;
    // 0x146dc0: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x146dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x146dc4: 0xc4219ce8  lwc1        $f1, -0x6318($at)
    ctx->pc = 0x146dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146dc8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x146dc8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x146dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146dd0: 0x0  nop
    ctx->pc = 0x146dd0u;
    // NOP
    // 0x146dd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x146dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146dd8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x146DD8u;
    {
        const bool branch_taken_0x146dd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146DD8u;
            // 0x146ddc: 0x3c033727  lui         $v1, 0x3727 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146dd8) {
            ctx->pc = 0x146DF8u;
            goto label_146df8;
        }
    }
    ctx->pc = 0x146DE0u;
    // 0x146de0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146de4: 0x3463c5ac  ori         $v1, $v1, 0xC5AC
    ctx->pc = 0x146de4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)50604u)));
    // 0x146de8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146dec: 0x0  nop
    ctx->pc = 0x146decu;
    // NOP
    // 0x146df0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x146df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146df4: 0xe4209ce8  swc1        $f0, -0x6318($at)
    ctx->pc = 0x146df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941928), bits); }
label_146df8:
    // 0x146df8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x146df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146dfc: 0x3c033727  lui         $v1, 0x3727
    ctx->pc = 0x146dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14119 << 16));
    // 0x146e00: 0x3463c5ac  ori         $v1, $v1, 0xC5AC
    ctx->pc = 0x146e00u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)50604u)));
    // 0x146e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146e08: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x146e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146e0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x146e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146e10: 0xe4a00114  swc1        $f0, 0x114($a1)
    ctx->pc = 0x146e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 276), bits); }
    // 0x146e14: 0x0  nop
    ctx->pc = 0x146e14u;
    // NOP
label_146e18:
    // 0x146e18: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x146e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146e1c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146e20: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x146e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x146e24: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146e24u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146e28: 0xc4219ce8  lwc1        $f1, -0x6318($at)
    ctx->pc = 0x146e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146e2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146e30: 0xc4a20110  lwc1        $f2, 0x110($a1)
    ctx->pc = 0x146e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146e34: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x146e34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x146e38: 0xe4a10110  swc1        $f1, 0x110($a1)
    ctx->pc = 0x146e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 272), bits); }
    // 0x146e3c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x146e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146e40: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x146e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146e44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x146e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146e48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x146E48u;
    {
        const bool branch_taken_0x146e48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146E48u;
            // 0x146e4c: 0x24650114  addiu       $a1, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e48) {
            ctx->pc = 0x146E68u;
            goto label_146e68;
        }
    }
    ctx->pc = 0x146E50u;
    // 0x146e50: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x146e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x146e54: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146e54u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146e58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146e5c: 0x0  nop
    ctx->pc = 0x146e5cu;
    // NOP
    // 0x146e60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x146e60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146e64: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x146e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_146e68:
    // 0x146e68: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x146e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146e6c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x146e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x146e70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146e70u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146e78: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x146e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146e7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146e7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146e80: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x146E80u;
    {
        const bool branch_taken_0x146e80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x146E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146E80u;
            // 0x146e84: 0x24a60114  addiu       $a2, $a1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e80) {
            ctx->pc = 0x146EA0u;
            goto label_146ea0;
        }
    }
    ctx->pc = 0x146E88u;
    // 0x146e88: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x146e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x146e8c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146e8cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146e94: 0x0  nop
    ctx->pc = 0x146e94u;
    // NOP
    // 0x146e98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x146e98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146e9c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x146e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_146ea0:
    // 0x146ea0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x146ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146ea4: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x146ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x146ea8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146ea8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146eac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146eb0: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x146eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146eb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x146eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146eb8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x146EB8u;
    {
        const bool branch_taken_0x146eb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146EB8u;
            // 0x146ebc: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146eb8) {
            ctx->pc = 0x146ED8u;
            goto label_146ed8;
        }
    }
    ctx->pc = 0x146EC0u;
    // 0x146ec0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x146ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x146ec4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146ec4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146ec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146ecc: 0x0  nop
    ctx->pc = 0x146eccu;
    // NOP
    // 0x146ed0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x146ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146ed4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x146ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_146ed8:
    // 0x146ed8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x146ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146edc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x146edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x146ee0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146ee0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146ee4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146ee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146ee8: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x146ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146eec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146eecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146ef0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x146EF0u;
    {
        const bool branch_taken_0x146ef0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x146EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146EF0u;
            // 0x146ef4: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ef0) {
            ctx->pc = 0x146F10u;
            goto label_146f10;
        }
    }
    ctx->pc = 0x146EF8u;
    // 0x146ef8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x146ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x146efc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146efcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146f04: 0x0  nop
    ctx->pc = 0x146f04u;
    // NOP
    // 0x146f08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x146f08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146f0c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x146f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_146f10:
    // 0x146f10: 0x3e00008  jr          $ra
    ctx->pc = 0x146F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146DF8u: goto label_146df8;
            case 0x146E18u: goto label_146e18;
            case 0x146E68u: goto label_146e68;
            case 0x146EA0u: goto label_146ea0;
            case 0x146ED8u: goto label_146ed8;
            case 0x146F10u: goto label_146f10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x146F18u;
}

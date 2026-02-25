#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc01
// Address: 0x147f30 - 0x148064
void MapMoveingFunc01_0x147f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc01_0x147f30");
#endif

    ctx->pc = 0x147f30u;

    // 0x147f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147f34: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x147f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x147f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147f3c: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147f40: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x147f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147f44: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147f44u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147f48: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x147f48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147f4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147f50: 0xc4c20124  lwc1        $f2, 0x124($a2)
    ctx->pc = 0x147f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147f54: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x147f54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x147f58: 0xe4c10124  swc1        $f1, 0x124($a2)
    ctx->pc = 0x147f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 292), bits); }
    // 0x147f5c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x147f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147f60: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x147f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147f64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147f68: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147F68u;
    {
        const bool branch_taken_0x147f68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147F68u;
            // 0x147f6c: 0x24650114  addiu       $a1, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f68) {
            ctx->pc = 0x147F88u;
            goto label_147f88;
        }
    }
    ctx->pc = 0x147F70u;
    // 0x147f70: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147f74: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147f74u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147f7c: 0x0  nop
    ctx->pc = 0x147f7cu;
    // NOP
    // 0x147f80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147f84: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147f88:
    // 0x147f88: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x147f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147f8c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x147f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147f90: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147f90u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147f94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147f94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147f98: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x147f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147f9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147f9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147fa0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147FA0u;
    {
        const bool branch_taken_0x147fa0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147FA0u;
            // 0x147fa4: 0x24a60114  addiu       $a2, $a1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fa0) {
            ctx->pc = 0x147FC0u;
            goto label_147fc0;
        }
    }
    ctx->pc = 0x147FA8u;
    // 0x147fa8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147fac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147facu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147fb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147fb4: 0x0  nop
    ctx->pc = 0x147fb4u;
    // NOP
    // 0x147fb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147fb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147fbc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x147fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_147fc0:
    // 0x147fc0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x147fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147fc4: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147fc8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147fc8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147fcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147fccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147fd0: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x147fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147fd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147fd8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147FD8u;
    {
        const bool branch_taken_0x147fd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147FD8u;
            // 0x147fdc: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fd8) {
            ctx->pc = 0x147FF8u;
            goto label_147ff8;
        }
    }
    ctx->pc = 0x147FE0u;
    // 0x147fe0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147fe4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147fe4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147fe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147fec: 0x0  nop
    ctx->pc = 0x147fecu;
    // NOP
    // 0x147ff0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147ff4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x147ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_147ff8:
    // 0x147ff8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x147ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147ffc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x147ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x148000: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x148000u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x148004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x148004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148008: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x148008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14800c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14800cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148010: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x148010u;
    {
        const bool branch_taken_0x148010 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x148014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148010u;
            // 0x148014: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148010) {
            ctx->pc = 0x148030u;
            goto label_148030;
        }
    }
    ctx->pc = 0x148018u;
    // 0x148018: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x148018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14801c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14801cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x148020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x148020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148024: 0x0  nop
    ctx->pc = 0x148024u;
    // NOP
    // 0x148028: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x148028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14802c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x14802cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_148030:
    // 0x148030: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x148030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x148034: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x148034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x148038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x148038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14803c: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x14803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148040: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148044: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x148044u;
    {
        const bool branch_taken_0x148044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x148044) {
            ctx->pc = 0x148058u;
            goto label_148058;
        }
    }
    ctx->pc = 0x14804Cu;
    // 0x14804c: 0xc053348  jal         func_14CD20
    ctx->pc = 0x14804Cu;
    SET_GPR_U32(ctx, 31, 0x148054u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148054u; }
        if (ctx->pc != 0x148054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148054u; }
        if (ctx->pc != 0x148054u) { return; }
    }
    ctx->pc = 0x148054u;
    // 0x148054: 0x0  nop
    ctx->pc = 0x148054u;
    // NOP
label_148058:
    // 0x148058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14805c: 0x3e00008  jr          $ra
    ctx->pc = 0x14805Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14805Cu;
            // 0x148060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147F88u: goto label_147f88;
            case 0x147FC0u: goto label_147fc0;
            case 0x147FF8u: goto label_147ff8;
            case 0x148030u: goto label_148030;
            case 0x148058u: goto label_148058;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148064u;
}

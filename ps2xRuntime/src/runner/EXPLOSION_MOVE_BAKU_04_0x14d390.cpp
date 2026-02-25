#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EXPLOSION_MOVE_BAKU_04
// Address: 0x14d390 - 0x14d4a4
void EXPLOSION_MOVE_BAKU_04_0x14d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EXPLOSION_MOVE_BAKU_04_0x14d390");
#endif

    ctx->pc = 0x14d390u;

    // 0x14d390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d394: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x14d394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x14d398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d39c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x14d39cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x14d3a0: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x14d3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d3a4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14d3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d3a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14d3a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d3ac: 0x0  nop
    ctx->pc = 0x14d3acu;
    // NOP
    // 0x14d3b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d3b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d3b4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x14d3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x14d3b8: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x14d3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d3bc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x14d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d3c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d3c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d3c4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x14d3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x14d3c8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x14d3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d3cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d3ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d3d0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14d3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x14d3d4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d3d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d3d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d3dc: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x14d3e0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x14d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14d3e4: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x14d3e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14d3e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D3E8u;
    {
        const bool branch_taken_0x14d3e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3e8) {
            ctx->pc = 0x14D3F8u;
            goto label_14d3f8;
        }
    }
    ctx->pc = 0x14D3F0u;
    // 0x14d3f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d3f4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x14d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_14d3f8:
    // 0x14d3f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x14d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d3fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d400: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14d400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x14d404: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14d404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d408: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x14d408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d40c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d410: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x14d410u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14d414: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D414u;
    {
        const bool branch_taken_0x14d414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d414) {
            ctx->pc = 0x14D430u;
            goto label_14d430;
        }
    }
    ctx->pc = 0x14D41Cu;
    // 0x14d41c: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D41Cu;
    SET_GPR_U32(ctx, 31, 0x14D424u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D424u; }
        if (ctx->pc != 0x14D424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D424u; }
        if (ctx->pc != 0x14D424u) { return; }
    }
    ctx->pc = 0x14D424u;
    // 0x14d424: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14D424u;
    {
        const bool branch_taken_0x14d424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d424) {
            ctx->pc = 0x14D498u;
            goto label_14d498;
        }
    }
    ctx->pc = 0x14D42Cu;
    // 0x14d42c: 0x0  nop
    ctx->pc = 0x14d42cu;
    // NOP
label_14d430:
    // 0x14d430: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x14d430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x14d434: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x14d434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d43c: 0x0  nop
    ctx->pc = 0x14d43cu;
    // NOP
    // 0x14d440: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d444: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x14D444u;
    {
        const bool branch_taken_0x14d444 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D444u;
            // 0x14d448: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d444) {
            ctx->pc = 0x14D490u;
            goto label_14d490;
        }
    }
    ctx->pc = 0x14D44Cu;
    // 0x14d44c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d44cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d450: 0x0  nop
    ctx->pc = 0x14d450u;
    // NOP
    // 0x14d454: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d458: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14D458u;
    {
        const bool branch_taken_0x14d458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d458) {
            ctx->pc = 0x14D490u;
            goto label_14d490;
        }
    }
    ctx->pc = 0x14D460u;
    // 0x14d460: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x14d460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d464: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x14d464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x14d468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d46c: 0x0  nop
    ctx->pc = 0x14d46cu;
    // NOP
    // 0x14d470: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d474: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14D474u;
    {
        const bool branch_taken_0x14d474 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D474u;
            // 0x14d478: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d474) {
            ctx->pc = 0x14D490u;
            goto label_14d490;
        }
    }
    ctx->pc = 0x14D47Cu;
    // 0x14d47c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d47cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d480: 0x0  nop
    ctx->pc = 0x14d480u;
    // NOP
    // 0x14d484: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d488: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14D488u;
    {
        const bool branch_taken_0x14d488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d488) {
            ctx->pc = 0x14D498u;
            goto label_14d498;
        }
    }
    ctx->pc = 0x14D490u;
label_14d490:
    // 0x14d490: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D490u;
    SET_GPR_U32(ctx, 31, 0x14D498u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D498u; }
        if (ctx->pc != 0x14D498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D498u; }
        if (ctx->pc != 0x14D498u) { return; }
    }
    ctx->pc = 0x14D498u;
label_14d498:
    // 0x14d498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d49c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D49Cu;
            // 0x14d4a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D3F8u: goto label_14d3f8;
            case 0x14D430u: goto label_14d430;
            case 0x14D490u: goto label_14d490;
            case 0x14D498u: goto label_14d498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D4A4u;
}

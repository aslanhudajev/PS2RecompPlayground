#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: selectbarDraw
// Address: 0x1eb730 - 0x1eb934
void selectbarDraw_0x1eb730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("selectbarDraw_0x1eb730");
#endif

    ctx->pc = 0x1eb730u;

    // 0x1eb730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eb730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eb734: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eb73c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eb73cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb740: 0xc4212e28  lwc1        $f1, 0x2E28($at)
    ctx->pc = 0x1eb740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb744: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eb744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb748: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB748u;
    {
        const bool branch_taken_0x1eb748 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EB74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB748u;
            // 0x1eb74c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb748) {
            ctx->pc = 0x1EB758u;
            goto label_1eb758;
        }
    }
    ctx->pc = 0x1EB750u;
    // 0x1eb750: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1eb750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1eb754: 0xac22abd8  sw          $v0, -0x5428($at)
    ctx->pc = 0x1eb754u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945752), GPR_U32(ctx, 2));
label_1eb758:
    // 0x1eb758: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1eb758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1eb75c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb760: 0x0  nop
    ctx->pc = 0x1eb760u;
    // NOP
    // 0x1eb764: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1eb764u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb768: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB768u;
    {
        const bool branch_taken_0x1eb768 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EB76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB768u;
            // 0x1eb76c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb768) {
            ctx->pc = 0x1EB778u;
            goto label_1eb778;
        }
    }
    ctx->pc = 0x1EB770u;
    // 0x1eb770: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1eb770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1eb774: 0xac22abd8  sw          $v0, -0x5428($at)
    ctx->pc = 0x1eb774u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945752), GPR_U32(ctx, 2));
label_1eb778:
    // 0x1eb778: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb77c: 0xc4242e28  lwc1        $f4, 0x2E28($at)
    ctx->pc = 0x1eb77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1eb780: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1eb780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x1eb784: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1eb784u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb788: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1eb788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1eb78c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eb78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb794: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb798: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1eb798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1eb79c: 0x24842e60  addiu       $a0, $a0, 0x2E60
    ctx->pc = 0x1eb79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11872));
    // 0x1eb7a0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1eb7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1eb7a4: 0xc423abd8  lwc1        $f3, -0x5428($at)
    ctx->pc = 0x1eb7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294945752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1eb7a8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1eb7a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1eb7ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eb7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb7b0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb7b4: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x1eb7b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1eb7b8: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1eb7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x1eb7bc: 0xac222ec0  sw          $v0, 0x2EC0($at)
    ctx->pc = 0x1eb7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11968), GPR_U32(ctx, 2));
    // 0x1eb7c0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb7c4: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1eb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1eb7c8: 0xe4232e28  swc1        $f3, 0x2E28($at)
    ctx->pc = 0x1eb7c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11816), bits); }
    // 0x1eb7cc: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1eb7ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1eb7d0: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x1eb7d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1eb7d4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb7d8: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1eb7d8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x1eb7dc: 0xe42c2ec8  swc1        $f12, 0x2EC8($at)
    ctx->pc = 0x1eb7dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11976), bits); }
    // 0x1eb7e0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1eb7e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1eb7e4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb7e8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1eb7e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eb7ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb7f0: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB7F0u;
    SET_GPR_U32(ctx, 31, 0x1EB7F8u);
    ctx->pc = 0x1EB7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB7F0u;
            // 0x1eb7f4: 0xe4202e30  swc1        $f0, 0x2E30($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11824), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7F8u; }
        if (ctx->pc != 0x1EB7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7F8u; }
        if (ctx->pc != 0x1EB7F8u) { return; }
    }
    ctx->pc = 0x1EB7F8u;
    // 0x1eb7f8: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb7fc: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1eb7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1eb800: 0xc42c2ec8  lwc1        $f12, 0x2EC8($at)
    ctx->pc = 0x1eb800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eb804: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1eb804u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1eb808: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb80c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb810: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb814: 0xc42d2ec0  lwc1        $f13, 0x2EC0($at)
    ctx->pc = 0x1eb814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eb818: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB818u;
    SET_GPR_U32(ctx, 31, 0x1EB820u);
    ctx->pc = 0x1EB81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB818u;
            // 0x1eb81c: 0x24842e70  addiu       $a0, $a0, 0x2E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB820u; }
        if (ctx->pc != 0x1EB820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB820u; }
        if (ctx->pc != 0x1EB820u) { return; }
    }
    ctx->pc = 0x1EB820u;
    // 0x1eb820: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb824: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1eb824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1eb828: 0xc4202ec0  lwc1        $f0, 0x2EC0($at)
    ctx->pc = 0x1eb828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb82c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb82cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eb830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb834: 0x24842e80  addiu       $a0, $a0, 0x2E80
    ctx->pc = 0x1eb834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11904));
    // 0x1eb838: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1eb838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1eb83c: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1eb83cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1eb840: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb844: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb848: 0xc42c2e30  lwc1        $f12, 0x2E30($at)
    ctx->pc = 0x1eb848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eb84c: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB84Cu;
    SET_GPR_U32(ctx, 31, 0x1EB854u);
    ctx->pc = 0x1EB850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB84Cu;
            // 0x1eb850: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB854u; }
        if (ctx->pc != 0x1EB854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB854u; }
        if (ctx->pc != 0x1EB854u) { return; }
    }
    ctx->pc = 0x1EB854u;
    // 0x1eb854: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb858: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1eb858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1eb85c: 0xc42c2e30  lwc1        $f12, 0x2E30($at)
    ctx->pc = 0x1eb85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eb860: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1eb860u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1eb864: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb868: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb86c: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb870: 0xc42d2ec0  lwc1        $f13, 0x2EC0($at)
    ctx->pc = 0x1eb870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eb874: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB874u;
    SET_GPR_U32(ctx, 31, 0x1EB87Cu);
    ctx->pc = 0x1EB878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB874u;
            // 0x1eb878: 0x24842e90  addiu       $a0, $a0, 0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB87Cu; }
        if (ctx->pc != 0x1EB87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB87Cu; }
        if (ctx->pc != 0x1EB87Cu) { return; }
    }
    ctx->pc = 0x1EB87Cu;
    // 0x1eb87c: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb880: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1eb880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1eb884: 0xc4222ec8  lwc1        $f2, 0x2EC8($at)
    ctx->pc = 0x1eb884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb888: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb88c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1eb88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1eb890: 0x24842ea0  addiu       $a0, $a0, 0x2EA0
    ctx->pc = 0x1eb890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11936));
    // 0x1eb894: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1eb894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1eb898: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eb898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb89c: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb8a0: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1eb8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1eb8a4: 0xc4202ec0  lwc1        $f0, 0x2EC0($at)
    ctx->pc = 0x1eb8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb8a8: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1eb8a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1eb8ac: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x1eb8acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1eb8b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb8b4: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB8B4u;
    SET_GPR_U32(ctx, 31, 0x1EB8BCu);
    ctx->pc = 0x1EB8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB8B4u;
            // 0x1eb8b8: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8BCu; }
        if (ctx->pc != 0x1EB8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8BCu; }
        if (ctx->pc != 0x1EB8BCu) { return; }
    }
    ctx->pc = 0x1EB8BCu;
    // 0x1eb8bc: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb8c0: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1eb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1eb8c4: 0xc4202ec8  lwc1        $f0, 0x2EC8($at)
    ctx->pc = 0x1eb8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb8c8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb8cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eb8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb8d0: 0x24842eb0  addiu       $a0, $a0, 0x2EB0
    ctx->pc = 0x1eb8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11952));
    // 0x1eb8d4: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1eb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1eb8d8: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1eb8d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1eb8dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb8e0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb8e4: 0xc42d2ec0  lwc1        $f13, 0x2EC0($at)
    ctx->pc = 0x1eb8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eb8e8: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB8E8u;
    SET_GPR_U32(ctx, 31, 0x1EB8F0u);
    ctx->pc = 0x1EB8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB8E8u;
            // 0x1eb8ec: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8F0u; }
        if (ctx->pc != 0x1EB8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8F0u; }
        if (ctx->pc != 0x1EB8F0u) { return; }
    }
    ctx->pc = 0x1EB8F0u;
    // 0x1eb8f0: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1eb8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1eb8f4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1eb8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1eb8f8: 0x24632e60  addiu       $v1, $v1, 0x2E60
    ctx->pc = 0x1eb8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11872));
    // 0x1eb8fc: 0x2442abc0  addiu       $v0, $v0, -0x5440
    ctx->pc = 0x1eb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945728));
    // 0x1eb900: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1eb900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eb904: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eb904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb908: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1eb908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb90c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1eb90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1eb910: 0xc07a9a8  jal         func_1EA6A0
    ctx->pc = 0x1EB910u;
    SET_GPR_U32(ctx, 31, 0x1EB918u);
    ctx->pc = 0x1EB914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB910u;
            // 0x1eb914: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA6A0u;
    if (runtime->hasFunction(0x1EA6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB918u; }
        if (ctx->pc != 0x1EB918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1ea6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB918u; }
        if (ctx->pc != 0x1EB918u) { return; }
    }
    ctx->pc = 0x1EB918u;
    // 0x1eb918: 0xc07a9a4  jal         func_1EA690
    ctx->pc = 0x1EB918u;
    SET_GPR_U32(ctx, 31, 0x1EB920u);
    ctx->pc = 0x1EB91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB918u;
            // 0x1eb91c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA690u;
    if (runtime->hasFunction(0x1EA690u)) {
        auto targetFn = runtime->lookupFunction(0x1EA690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB920u; }
        if (ctx->pc != 0x1EB920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1ea690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB920u; }
        if (ctx->pc != 0x1EB920u) { return; }
    }
    ctx->pc = 0x1EB920u;
    // 0x1eb920: 0xc05c2ac  jal         func_170AB0
    ctx->pc = 0x1EB920u;
    SET_GPR_U32(ctx, 31, 0x1EB928u);
    ctx->pc = 0x170AB0u;
    if (runtime->hasFunction(0x170AB0u)) {
        auto targetFn = runtime->lookupFunction(0x170AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB928u; }
        if (ctx->pc != 0x1EB928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimTriStripG_0x170ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB928u; }
        if (ctx->pc != 0x1EB928u) { return; }
    }
    ctx->pc = 0x1EB928u;
    // 0x1eb928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb92c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB92Cu;
            // 0x1eb930: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB758u: goto label_1eb758;
            case 0x1EB778u: goto label_1eb778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB934u;
}

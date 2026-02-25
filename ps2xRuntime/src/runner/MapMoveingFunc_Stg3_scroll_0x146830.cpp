#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg3_scroll
// Address: 0x146830 - 0x1468e0
void MapMoveingFunc_Stg3_scroll_0x146830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg3_scroll_0x146830");
#endif

    ctx->pc = 0x146830u;

    // 0x146830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x146838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14683c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14683cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146840: 0xc07893c  jal         func_1E24F0
    ctx->pc = 0x146840u;
    SET_GPR_U32(ctx, 31, 0x146848u);
    ctx->pc = 0x146844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146840u;
            // 0x146844: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E24F0u;
    if (runtime->hasFunction(0x1E24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146848u; }
        if (ctx->pc != 0x146848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapLightColorControl_0x1e24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146848u; }
        if (ctx->pc != 0x146848u) { return; }
    }
    ctx->pc = 0x146848u;
    // 0x146848: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x146848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14684c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14684cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146850: 0xc4219cb8  lwc1        $f1, -0x6348($at)
    ctx->pc = 0x146850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146854: 0x3c03c4a2  lui         $v1, 0xC4A2
    ctx->pc = 0x146854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50338 << 16));
    // 0x146858: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x146858u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x14685c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14685cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146860: 0xc4820120  lwc1        $f2, 0x120($a0)
    ctx->pc = 0x146860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146864: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146868: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x146868u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x14686c: 0xe4810120  swc1        $f1, 0x120($a0)
    ctx->pc = 0x14686cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x146870: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x146870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146874: 0xc4219cb0  lwc1        $f1, -0x6350($at)
    ctx->pc = 0x146874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146878: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x146878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14687c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x14687cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x146880: 0xe4610124  swc1        $f1, 0x124($v1)
    ctx->pc = 0x146880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x146884: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x146884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146888: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x146888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14688c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14688cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146890: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x146890u;
    {
        const bool branch_taken_0x146890 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146890u;
            // 0x146894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146890) {
            ctx->pc = 0x1468A8u;
            goto label_1468a8;
        }
    }
    ctx->pc = 0x146898u;
    // 0x146898: 0xc053348  jal         func_14CD20
    ctx->pc = 0x146898u;
    SET_GPR_U32(ctx, 31, 0x1468A0u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1468A0u; }
        if (ctx->pc != 0x1468A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1468A0u; }
        if (ctx->pc != 0x1468A0u) { return; }
    }
    ctx->pc = 0x1468A0u;
    // 0x1468a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1468A0u;
    {
        const bool branch_taken_0x1468a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1468a0) {
            ctx->pc = 0x1468D0u;
            goto label_1468d0;
        }
    }
    ctx->pc = 0x1468A8u;
label_1468a8:
    // 0x1468a8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1468a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1468ac: 0x3c034409  lui         $v1, 0x4409
    ctx->pc = 0x1468acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17417 << 16));
    // 0x1468b0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1468b0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x1468b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1468b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1468b8: 0x0  nop
    ctx->pc = 0x1468b8u;
    // NOP
    // 0x1468bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1468bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1468c0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1468C0u;
    {
        const bool branch_taken_0x1468c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1468C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1468C0u;
            // 0x1468c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468c0) {
            ctx->pc = 0x1468D0u;
            goto label_1468d0;
        }
    }
    ctx->pc = 0x1468C8u;
    // 0x1468c8: 0xc053348  jal         func_14CD20
    ctx->pc = 0x1468C8u;
    SET_GPR_U32(ctx, 31, 0x1468D0u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1468D0u; }
        if (ctx->pc != 0x1468D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1468D0u; }
        if (ctx->pc != 0x1468D0u) { return; }
    }
    ctx->pc = 0x1468D0u;
label_1468d0:
    // 0x1468d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1468d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1468d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1468d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1468d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1468D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1468DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1468D8u;
            // 0x1468dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1468A8u: goto label_1468a8;
            case 0x1468D0u: goto label_1468d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1468E0u;
}

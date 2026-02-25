#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg3_scroll_BOSS
// Address: 0x146720 - 0x146788
void MapMoveingFunc_Stg3_scroll_BOSS_0x146720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg3_scroll_BOSS_0x146720");
#endif

    ctx->pc = 0x146720u;

    // 0x146720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x146728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14672c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14672cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146730: 0xc07893c  jal         func_1E24F0
    ctx->pc = 0x146730u;
    SET_GPR_U32(ctx, 31, 0x146738u);
    ctx->pc = 0x146734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146730u;
            // 0x146734: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E24F0u;
    if (runtime->hasFunction(0x1E24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146738u; }
        if (ctx->pc != 0x146738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapLightColorControl_0x1e24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146738u; }
        if (ctx->pc != 0x146738u) { return; }
    }
    ctx->pc = 0x146738u;
    // 0x146738: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x146738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14673c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14673cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146740: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x146740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
    // 0x146744: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x146744u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x146748: 0xc4219cb0  lwc1        $f1, -0x6350($at)
    ctx->pc = 0x146748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14674c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14674cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146750: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x146750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146754: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x146754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x146758: 0xe4810124  swc1        $f1, 0x124($a0)
    ctx->pc = 0x146758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x14675c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14675cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146760: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x146760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146764: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x146764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146768: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x146768u;
    {
        const bool branch_taken_0x146768 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14676Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146768u;
            // 0x14676c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146768) {
            ctx->pc = 0x146778u;
            goto label_146778;
        }
    }
    ctx->pc = 0x146770u;
    // 0x146770: 0xc053348  jal         func_14CD20
    ctx->pc = 0x146770u;
    SET_GPR_U32(ctx, 31, 0x146778u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146778u; }
        if (ctx->pc != 0x146778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146778u; }
        if (ctx->pc != 0x146778u) { return; }
    }
    ctx->pc = 0x146778u;
label_146778:
    // 0x146778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14677c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14677cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146780: 0x3e00008  jr          $ra
    ctx->pc = 0x146780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146780u;
            // 0x146784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146778u: goto label_146778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x146788u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg3_scroll_BOSS3
// Address: 0x1465e0 - 0x146678
void MapMoveingFunc_Stg3_scroll_BOSS3_0x1465e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg3_scroll_BOSS3_0x1465e0");
#endif

    ctx->pc = 0x1465e0u;

    // 0x1465e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1465e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1465e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1465e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1465e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1465e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1465ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1465ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1465f0: 0xc07893c  jal         func_1E24F0
    ctx->pc = 0x1465F0u;
    SET_GPR_U32(ctx, 31, 0x1465F8u);
    ctx->pc = 0x1465F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1465F0u;
            // 0x1465f4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E24F0u;
    if (runtime->hasFunction(0x1E24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465F8u; }
        if (ctx->pc != 0x1465F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapLightColorControl_0x1e24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465F8u; }
        if (ctx->pc != 0x1465F8u) { return; }
    }
    ctx->pc = 0x1465F8u;
    // 0x1465f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1465f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1465fc: 0x3c03c416  lui         $v1, 0xC416
    ctx->pc = 0x1465fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50198 << 16));
    // 0x146600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146604: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x146604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146608: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146608u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14660c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14660Cu;
    {
        const bool branch_taken_0x14660c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14660Cu;
            // 0x146610: 0x24830124  addiu       $v1, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14660c) {
            ctx->pc = 0x146628u;
            goto label_146628;
        }
    }
    ctx->pc = 0x146614u;
    // 0x146614: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146618: 0xc4209cb0  lwc1        $f0, -0x6350($at)
    ctx->pc = 0x146618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14661c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14661cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146620: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x146620u;
    {
        const bool branch_taken_0x146620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146620u;
            // 0x146624: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146620) {
            ctx->pc = 0x146640u;
            goto label_146640;
        }
    }
    ctx->pc = 0x146628u;
label_146628:
    // 0x146628: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x146628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x14662c: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x14662cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146634: 0x0  nop
    ctx->pc = 0x146634u;
    // NOP
    // 0x146638: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x146638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14663c: 0xe4800128  swc1        $f0, 0x128($a0)
    ctx->pc = 0x14663cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
label_146640:
    // 0x146640: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x146640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146644: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x146644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
    // 0x146648: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x146648u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x14664c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14664cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146650: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x146650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146654: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x146654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146658: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x146658u;
    {
        const bool branch_taken_0x146658 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14665Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146658u;
            // 0x14665c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146658) {
            ctx->pc = 0x146668u;
            goto label_146668;
        }
    }
    ctx->pc = 0x146660u;
    // 0x146660: 0xc053314  jal         func_14CC50
    ctx->pc = 0x146660u;
    SET_GPR_U32(ctx, 31, 0x146668u);
    ctx->pc = 0x14CC50u;
    if (runtime->hasFunction(0x14CC50u)) {
        auto targetFn = runtime->lookupFunction(0x14CC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146668u; }
        if (ctx->pc != 0x146668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_Alpha_0x14cc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146668u; }
        if (ctx->pc != 0x146668u) { return; }
    }
    ctx->pc = 0x146668u;
label_146668:
    // 0x146668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14666c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14666cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146670: 0x3e00008  jr          $ra
    ctx->pc = 0x146670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146670u;
            // 0x146674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146628u: goto label_146628;
            case 0x146640u: goto label_146640;
            case 0x146668u: goto label_146668;
            default: break;
        }
        return;
    }
    ctx->pc = 0x146678u;
}

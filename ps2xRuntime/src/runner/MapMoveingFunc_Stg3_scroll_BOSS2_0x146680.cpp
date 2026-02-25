#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg3_scroll_BOSS2
// Address: 0x146680 - 0x146718
void MapMoveingFunc_Stg3_scroll_BOSS2_0x146680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg3_scroll_BOSS2_0x146680");
#endif

    ctx->pc = 0x146680u;

    // 0x146680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x146688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14668c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14668cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146690: 0xc07893c  jal         func_1E24F0
    ctx->pc = 0x146690u;
    SET_GPR_U32(ctx, 31, 0x146698u);
    ctx->pc = 0x146694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146690u;
            // 0x146694: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E24F0u;
    if (runtime->hasFunction(0x1E24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146698u; }
        if (ctx->pc != 0x146698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapLightColorControl_0x1e24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146698u; }
        if (ctx->pc != 0x146698u) { return; }
    }
    ctx->pc = 0x146698u;
    // 0x146698: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x146698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14669c: 0x3c03c496  lui         $v1, 0xC496
    ctx->pc = 0x14669cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50326 << 16));
    // 0x1466a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1466a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1466a4: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1466a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1466a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1466a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1466ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1466ACu;
    {
        const bool branch_taken_0x1466ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1466B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1466ACu;
            // 0x1466b0: 0x24830124  addiu       $v1, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466ac) {
            ctx->pc = 0x1466C8u;
            goto label_1466c8;
        }
    }
    ctx->pc = 0x1466B4u;
    // 0x1466b4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1466b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1466b8: 0xc4209cb0  lwc1        $f0, -0x6350($at)
    ctx->pc = 0x1466b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1466bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1466bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1466c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1466C0u;
    {
        const bool branch_taken_0x1466c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1466C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1466C0u;
            // 0x1466c4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466c0) {
            ctx->pc = 0x1466E0u;
            goto label_1466e0;
        }
    }
    ctx->pc = 0x1466C8u;
label_1466c8:
    // 0x1466c8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1466c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1466cc: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x1466ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1466d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1466d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1466d4: 0x0  nop
    ctx->pc = 0x1466d4u;
    // NOP
    // 0x1466d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1466d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1466dc: 0xe4800128  swc1        $f0, 0x128($a0)
    ctx->pc = 0x1466dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
label_1466e0:
    // 0x1466e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1466e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1466e4: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x1466e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
    // 0x1466e8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1466e8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x1466ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1466ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1466f0: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1466f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1466f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1466f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1466f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1466F8u;
    {
        const bool branch_taken_0x1466f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1466FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1466F8u;
            // 0x1466fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466f8) {
            ctx->pc = 0x146708u;
            goto label_146708;
        }
    }
    ctx->pc = 0x146700u;
    // 0x146700: 0xc053314  jal         func_14CC50
    ctx->pc = 0x146700u;
    SET_GPR_U32(ctx, 31, 0x146708u);
    ctx->pc = 0x14CC50u;
    if (runtime->hasFunction(0x14CC50u)) {
        auto targetFn = runtime->lookupFunction(0x14CC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146708u; }
        if (ctx->pc != 0x146708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_Alpha_0x14cc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146708u; }
        if (ctx->pc != 0x146708u) { return; }
    }
    ctx->pc = 0x146708u;
label_146708:
    // 0x146708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14670c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14670cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146710: 0x3e00008  jr          $ra
    ctx->pc = 0x146710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146710u;
            // 0x146714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1466C8u: goto label_1466c8;
            case 0x1466E0u: goto label_1466e0;
            case 0x146708u: goto label_146708;
            default: break;
        }
        return;
    }
    ctx->pc = 0x146718u;
}

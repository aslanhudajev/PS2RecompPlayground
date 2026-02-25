#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg3_scroll_alpha
// Address: 0x146790 - 0x14682c
void MapMoveingFunc_Stg3_scroll_alpha_0x146790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg3_scroll_alpha_0x146790");
#endif

    ctx->pc = 0x146790u;

    // 0x146790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x146794: 0x3c03c4a2  lui         $v1, 0xC4A2
    ctx->pc = 0x146794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50338 << 16));
    // 0x146798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14679c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14679cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1467a0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1467a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1467a4: 0xc4219cb8  lwc1        $f1, -0x6348($at)
    ctx->pc = 0x1467a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1467a8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1467a8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x1467ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1467acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1467b0: 0xc4a20120  lwc1        $f2, 0x120($a1)
    ctx->pc = 0x1467b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1467b4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1467b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1467b8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1467b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1467bc: 0xe4a10120  swc1        $f1, 0x120($a1)
    ctx->pc = 0x1467bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 288), bits); }
    // 0x1467c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1467c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1467c4: 0xc4219cb0  lwc1        $f1, -0x6350($at)
    ctx->pc = 0x1467c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1467c8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1467c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1467cc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1467ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1467d0: 0xe4610124  swc1        $f1, 0x124($v1)
    ctx->pc = 0x1467d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1467d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1467d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1467d8: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1467d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1467dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1467dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1467e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1467E0u;
    {
        const bool branch_taken_0x1467e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1467e0) {
            ctx->pc = 0x1467F8u;
            goto label_1467f8;
        }
    }
    ctx->pc = 0x1467E8u;
    // 0x1467e8: 0xc053314  jal         func_14CC50
    ctx->pc = 0x1467E8u;
    SET_GPR_U32(ctx, 31, 0x1467F0u);
    ctx->pc = 0x14CC50u;
    if (runtime->hasFunction(0x14CC50u)) {
        auto targetFn = runtime->lookupFunction(0x14CC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1467F0u; }
        if (ctx->pc != 0x1467F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_Alpha_0x14cc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1467F0u; }
        if (ctx->pc != 0x1467F0u) { return; }
    }
    ctx->pc = 0x1467F0u;
    // 0x1467f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1467F0u;
    {
        const bool branch_taken_0x1467f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1467f0) {
            ctx->pc = 0x146820u;
            goto label_146820;
        }
    }
    ctx->pc = 0x1467F8u;
label_1467f8:
    // 0x1467f8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1467f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1467fc: 0x3c034409  lui         $v1, 0x4409
    ctx->pc = 0x1467fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17417 << 16));
    // 0x146800: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x146800u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x146804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146808: 0x0  nop
    ctx->pc = 0x146808u;
    // NOP
    // 0x14680c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14680cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146810: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x146810u;
    {
        const bool branch_taken_0x146810 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x146810) {
            ctx->pc = 0x146820u;
            goto label_146820;
        }
    }
    ctx->pc = 0x146818u;
    // 0x146818: 0xc053314  jal         func_14CC50
    ctx->pc = 0x146818u;
    SET_GPR_U32(ctx, 31, 0x146820u);
    ctx->pc = 0x14CC50u;
    if (runtime->hasFunction(0x14CC50u)) {
        auto targetFn = runtime->lookupFunction(0x14CC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146820u; }
        if (ctx->pc != 0x146820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_Alpha_0x14cc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146820u; }
        if (ctx->pc != 0x146820u) { return; }
    }
    ctx->pc = 0x146820u;
label_146820:
    // 0x146820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146824: 0x3e00008  jr          $ra
    ctx->pc = 0x146824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146824u;
            // 0x146828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1467F8u: goto label_1467f8;
            case 0x146820u: goto label_146820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14682Cu;
}

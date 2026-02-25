#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg4_Renketu
// Address: 0x145a60 - 0x145ac8
void MapMoveingFunc_Stg4_Renketu_0x145a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg4_Renketu_0x145a60");
#endif

    ctx->pc = 0x145a60u;

    // 0x145a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145a6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a70: 0xc07893c  jal         func_1E24F0
    ctx->pc = 0x145A70u;
    SET_GPR_U32(ctx, 31, 0x145A78u);
    ctx->pc = 0x145A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A70u;
            // 0x145a74: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E24F0u;
    if (runtime->hasFunction(0x1E24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A78u; }
        if (ctx->pc != 0x145A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapLightColorControl_0x1e24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A78u; }
        if (ctx->pc != 0x145A78u) { return; }
    }
    ctx->pc = 0x145A78u;
    // 0x145a78: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x145a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145a7c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x145a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x145a80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x145a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145a84: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x145a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x145a88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145a88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145a8c: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x145a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145a90: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x145a90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x145a94: 0xe4810124  swc1        $f1, 0x124($a0)
    ctx->pc = 0x145a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x145a98: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x145a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145a9c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x145a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145aa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145aa4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x145AA4u;
    {
        const bool branch_taken_0x145aa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x145AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145AA4u;
            // 0x145aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145aa4) {
            ctx->pc = 0x145AB8u;
            goto label_145ab8;
        }
    }
    ctx->pc = 0x145AACu;
    // 0x145aac: 0xc053348  jal         func_14CD20
    ctx->pc = 0x145AACu;
    SET_GPR_U32(ctx, 31, 0x145AB4u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AB4u; }
        if (ctx->pc != 0x145AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AB4u; }
        if (ctx->pc != 0x145AB4u) { return; }
    }
    ctx->pc = 0x145AB4u;
    // 0x145ab4: 0x0  nop
    ctx->pc = 0x145ab4u;
    // NOP
label_145ab8:
    // 0x145ab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145abc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x145AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145AC0u;
            // 0x145ac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145AB8u: goto label_145ab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145AC8u;
}

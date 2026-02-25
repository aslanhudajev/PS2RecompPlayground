#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Nerai2
// Address: 0x195790 - 0x19582c
void EnemyShotCreate_Nerai2_0x195790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Nerai2_0x195790");
#endif

    ctx->pc = 0x195790u;

    // 0x195790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x195794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x195798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x195798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19579c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19579cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1957a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1957a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1957a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957a8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1957A8u;
    SET_GPR_U32(ctx, 31, 0x1957B0u);
    ctx->pc = 0x1957ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1957A8u;
            // 0x1957ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1957B0u; }
        if (ctx->pc != 0x1957B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1957B0u; }
        if (ctx->pc != 0x1957B0u) { return; }
    }
    ctx->pc = 0x1957B0u;
    // 0x1957b0: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1957b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1957b4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1957b4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1957b8: 0x0  nop
    ctx->pc = 0x1957b8u;
    // NOP
    // 0x1957bc: 0x0  nop
    ctx->pc = 0x1957bcu;
    // NOP
    // 0x1957c0: 0x8010  mfhi        $s0
    ctx->pc = 0x1957c0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1957c4: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1957C4u;
    SET_GPR_U32(ctx, 31, 0x1957CCu);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1957CCu; }
        if (ctx->pc != 0x1957CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1957CCu; }
        if (ctx->pc != 0x1957CCu) { return; }
    }
    ctx->pc = 0x1957CCu;
    // 0x1957cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1957ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1957d0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1957d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1957d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1957d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1957d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1957d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1957dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1957e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1957e4: 0x24420420  addiu       $v0, $v0, 0x420
    ctx->pc = 0x1957e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
    // 0x1957e8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1957e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1957ec: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1957ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1957f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1957f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1957f4: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x1957f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x1957f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1957f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1957fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1957fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195800: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x195800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195804: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x195804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195808: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x195808u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x19580c: 0xc065674  jal         func_1959D0
    ctx->pc = 0x19580Cu;
    SET_GPR_U32(ctx, 31, 0x195814u);
    ctx->pc = 0x195810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19580Cu;
            // 0x195810: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1959D0u;
    if (runtime->hasFunction(0x1959D0u)) {
        auto targetFn = runtime->lookupFunction(0x1959D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195814u; }
        if (ctx->pc != 0x195814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_0x1959d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195814u; }
        if (ctx->pc != 0x195814u) { return; }
    }
    ctx->pc = 0x195814u;
    // 0x195814: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x195814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19581c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19581cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195824: 0x3e00008  jr          $ra
    ctx->pc = 0x195824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195824u;
            // 0x195828: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19582Cu;
}

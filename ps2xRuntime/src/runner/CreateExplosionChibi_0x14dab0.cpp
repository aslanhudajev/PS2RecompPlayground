#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateExplosionChibi
// Address: 0x14dab0 - 0x14db54
void CreateExplosionChibi_0x14dab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateExplosionChibi_0x14dab0");
#endif

    ctx->pc = 0x14dab0u;

    // 0x14dab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14dab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14dab4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14dab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14dab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14dabc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14dabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14dac0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14dac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dac4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14dac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dac8: 0xc053bf8  jal         func_14EFE0
    ctx->pc = 0x14DAC8u;
    SET_GPR_U32(ctx, 31, 0x14DAD0u);
    ctx->pc = 0x14DACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAC8u;
            // 0x14dacc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EFE0u;
    if (runtime->hasFunction(0x14EFE0u)) {
        auto targetFn = runtime->lookupFunction(0x14EFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAD0u; }
        if (ctx->pc != 0x14DAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionAlloc_0x14efe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAD0u; }
        if (ctx->pc != 0x14DAD0u) { return; }
    }
    ctx->pc = 0x14DAD0u;
    // 0x14dad0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14DAD0u;
    SET_GPR_U32(ctx, 31, 0x14DAD8u);
    ctx->pc = 0x14DAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAD0u;
            // 0x14dad4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAD8u; }
        if (ctx->pc != 0x14DAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAD8u; }
        if (ctx->pc != 0x14DAD8u) { return; }
    }
    ctx->pc = 0x14DAD8u;
    // 0x14dad8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14dadc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14dadcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14dae0: 0x0  nop
    ctx->pc = 0x14dae0u;
    // NOP
    // 0x14dae4: 0x0  nop
    ctx->pc = 0x14dae4u;
    // NOP
    // 0x14dae8: 0x1010  mfhi        $v0
    ctx->pc = 0x14dae8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14daec: 0xc05c018  jal         func_170060
    ctx->pc = 0x14DAECu;
    SET_GPR_U32(ctx, 31, 0x14DAF4u);
    ctx->pc = 0x14DAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAECu;
            // 0x14daf0: 0x2444000a  addiu       $a0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170060u;
    if (runtime->hasFunction(0x170060u)) {
        auto targetFn = runtime->lookupFunction(0x170060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAF4u; }
        if (ctx->pc != 0x14DAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVData_0x170060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAF4u; }
        if (ctx->pc != 0x14DAF4u) { return; }
    }
    ctx->pc = 0x14DAF4u;
    // 0x14daf4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x14daf4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14daf8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14dafc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x14dafcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14db00: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x14db00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x14db04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14db04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14db08: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x14db08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x14db0c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x14db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x14db10: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x14db10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x14db14: 0x2463d9e0  addiu       $v1, $v1, -0x2620
    ctx->pc = 0x14db14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957536));
    // 0x14db18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14db18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14db1c: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x14db1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x14db20: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x14db20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x14db24: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x14db24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x14db28: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x14db28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x14db2c: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x14db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x14db30: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14db30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14db34: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x14db34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x14db38: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x14db38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x14db3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14db3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14db40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14db40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14db44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14db44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14db48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14db48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14db4c: 0x3e00008  jr          $ra
    ctx->pc = 0x14DB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB4Cu;
            // 0x14db50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DB54u;
}

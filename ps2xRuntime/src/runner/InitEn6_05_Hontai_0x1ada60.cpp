#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn6_05_Hontai
// Address: 0x1ada60 - 0x1adadc
void InitEn6_05_Hontai_0x1ada60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn6_05_Hontai_0x1ada60");
#endif

    ctx->pc = 0x1ada60u;

    // 0x1ada60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ada60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ada64: 0x24040107  addiu       $a0, $zero, 0x107
    ctx->pc = 0x1ada64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x1ada68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ada68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ada6c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1ada6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1ada70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ada70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada74: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1ada74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ada78: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1ADA78u;
    SET_GPR_U32(ctx, 31, 0x1ADA80u);
    ctx->pc = 0x1ADA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA78u;
            // 0x1ada7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA80u; }
        if (ctx->pc != 0x1ADA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA80u; }
        if (ctx->pc != 0x1ADA80u) { return; }
    }
    ctx->pc = 0x1ADA80u;
    // 0x1ada80: 0x240400fa  addiu       $a0, $zero, 0xFA
    ctx->pc = 0x1ada80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1ada84: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1ADA84u;
    SET_GPR_U32(ctx, 31, 0x1ADA8Cu);
    ctx->pc = 0x1ADA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA84u;
            // 0x1ada88: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA8Cu; }
        if (ctx->pc != 0x1ADA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA8Cu; }
        if (ctx->pc != 0x1ADA8Cu) { return; }
    }
    ctx->pc = 0x1ADA8Cu;
    // 0x1ada8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ada8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ada90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada94: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ADA94u;
    SET_GPR_U32(ctx, 31, 0x1ADA9Cu);
    ctx->pc = 0x1ADA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA94u;
            // 0x1ada98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA9Cu; }
        if (ctx->pc != 0x1ADA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA9Cu; }
        if (ctx->pc != 0x1ADA9Cu) { return; }
    }
    ctx->pc = 0x1ADA9Cu;
    // 0x1ada9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ada9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adaa0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ADAA0u;
    SET_GPR_U32(ctx, 31, 0x1ADAA8u);
    ctx->pc = 0x1ADAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAA0u;
            // 0x1adaa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAA8u; }
        if (ctx->pc != 0x1ADAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAA8u; }
        if (ctx->pc != 0x1ADAA8u) { return; }
    }
    ctx->pc = 0x1ADAA8u;
    // 0x1adaa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adaac: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ADAACu;
    SET_GPR_U32(ctx, 31, 0x1ADAB4u);
    ctx->pc = 0x1ADAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAACu;
            // 0x1adab0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAB4u; }
        if (ctx->pc != 0x1ADAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAB4u; }
        if (ctx->pc != 0x1ADAB4u) { return; }
    }
    ctx->pc = 0x1ADAB4u;
    // 0x1adab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adab8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ADAB8u;
    SET_GPR_U32(ctx, 31, 0x1ADAC0u);
    ctx->pc = 0x1ADABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAB8u;
            // 0x1adabc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAC0u; }
        if (ctx->pc != 0x1ADAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAC0u; }
        if (ctx->pc != 0x1ADAC0u) { return; }
    }
    ctx->pc = 0x1ADAC0u;
    // 0x1adac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adac4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ADAC4u;
    SET_GPR_U32(ctx, 31, 0x1ADACCu);
    ctx->pc = 0x1ADAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAC4u;
            // 0x1adac8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADACCu; }
        if (ctx->pc != 0x1ADACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADACCu; }
        if (ctx->pc != 0x1ADACCu) { return; }
    }
    ctx->pc = 0x1ADACCu;
    // 0x1adacc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1adad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAD4u;
            // 0x1adad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADADCu;
}

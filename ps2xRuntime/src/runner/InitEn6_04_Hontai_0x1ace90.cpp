#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn6_04_Hontai
// Address: 0x1ace90 - 0x1acf0c
void InitEn6_04_Hontai_0x1ace90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn6_04_Hontai_0x1ace90");
#endif

    ctx->pc = 0x1ace90u;

    // 0x1ace90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ace90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ace94: 0x24040107  addiu       $a0, $zero, 0x107
    ctx->pc = 0x1ace94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x1ace98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ace98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ace9c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1ace9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1acea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1acea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acea4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1acea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1acea8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1ACEA8u;
    SET_GPR_U32(ctx, 31, 0x1ACEB0u);
    ctx->pc = 0x1ACEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEA8u;
            // 0x1aceac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEB0u; }
        if (ctx->pc != 0x1ACEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEB0u; }
        if (ctx->pc != 0x1ACEB0u) { return; }
    }
    ctx->pc = 0x1ACEB0u;
    // 0x1aceb0: 0x240400f9  addiu       $a0, $zero, 0xF9
    ctx->pc = 0x1aceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    // 0x1aceb4: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1ACEB4u;
    SET_GPR_U32(ctx, 31, 0x1ACEBCu);
    ctx->pc = 0x1ACEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEB4u;
            // 0x1aceb8: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEBCu; }
        if (ctx->pc != 0x1ACEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEBCu; }
        if (ctx->pc != 0x1ACEBCu) { return; }
    }
    ctx->pc = 0x1ACEBCu;
    // 0x1acebc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acec4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ACEC4u;
    SET_GPR_U32(ctx, 31, 0x1ACECCu);
    ctx->pc = 0x1ACEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEC4u;
            // 0x1acec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACECCu; }
        if (ctx->pc != 0x1ACECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACECCu; }
        if (ctx->pc != 0x1ACECCu) { return; }
    }
    ctx->pc = 0x1ACECCu;
    // 0x1acecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aceccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aced0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ACED0u;
    SET_GPR_U32(ctx, 31, 0x1ACED8u);
    ctx->pc = 0x1ACED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACED0u;
            // 0x1aced4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACED8u; }
        if (ctx->pc != 0x1ACED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACED8u; }
        if (ctx->pc != 0x1ACED8u) { return; }
    }
    ctx->pc = 0x1ACED8u;
    // 0x1aced8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aced8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acedc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ACEDCu;
    SET_GPR_U32(ctx, 31, 0x1ACEE4u);
    ctx->pc = 0x1ACEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEDCu;
            // 0x1acee0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEE4u; }
        if (ctx->pc != 0x1ACEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEE4u; }
        if (ctx->pc != 0x1ACEE4u) { return; }
    }
    ctx->pc = 0x1ACEE4u;
    // 0x1acee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acee8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ACEE8u;
    SET_GPR_U32(ctx, 31, 0x1ACEF0u);
    ctx->pc = 0x1ACEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEE8u;
            // 0x1aceec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEF0u; }
        if (ctx->pc != 0x1ACEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEF0u; }
        if (ctx->pc != 0x1ACEF0u) { return; }
    }
    ctx->pc = 0x1ACEF0u;
    // 0x1acef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acef4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ACEF4u;
    SET_GPR_U32(ctx, 31, 0x1ACEFCu);
    ctx->pc = 0x1ACEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEF4u;
            // 0x1acef8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEFCu; }
        if (ctx->pc != 0x1ACEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEFCu; }
        if (ctx->pc != 0x1ACEFCu) { return; }
    }
    ctx->pc = 0x1ACEFCu;
    // 0x1acefc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1acefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acf00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1acf00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acf04: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF04u;
            // 0x1acf08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ACF0Cu;
}

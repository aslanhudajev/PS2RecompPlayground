#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn6_01_Hontai
// Address: 0x1a9850 - 0x1a98cc
void InitEn6_01_Hontai_0x1a9850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn6_01_Hontai_0x1a9850");
#endif

    ctx->pc = 0x1a9850u;

    // 0x1a9850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9854: 0x240400fe  addiu       $a0, $zero, 0xFE
    ctx->pc = 0x1a9854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1a9858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a9858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a985c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1a985cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1a9860: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9864: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1a9864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a9868: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1A9868u;
    SET_GPR_U32(ctx, 31, 0x1A9870u);
    ctx->pc = 0x1A986Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9868u;
            // 0x1a986c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9870u; }
        if (ctx->pc != 0x1A9870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9870u; }
        if (ctx->pc != 0x1A9870u) { return; }
    }
    ctx->pc = 0x1A9870u;
    // 0x1a9870: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x1a9870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x1a9874: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1A9874u;
    SET_GPR_U32(ctx, 31, 0x1A987Cu);
    ctx->pc = 0x1A9878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9874u;
            // 0x1a9878: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A987Cu; }
        if (ctx->pc != 0x1A987Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A987Cu; }
        if (ctx->pc != 0x1A987Cu) { return; }
    }
    ctx->pc = 0x1A987Cu;
    // 0x1a987c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a987cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9884: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A9884u;
    SET_GPR_U32(ctx, 31, 0x1A988Cu);
    ctx->pc = 0x1A9888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9884u;
            // 0x1a9888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A988Cu; }
        if (ctx->pc != 0x1A988Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A988Cu; }
        if (ctx->pc != 0x1A988Cu) { return; }
    }
    ctx->pc = 0x1A988Cu;
    // 0x1a988c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a988cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9890: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A9890u;
    SET_GPR_U32(ctx, 31, 0x1A9898u);
    ctx->pc = 0x1A9894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9890u;
            // 0x1a9894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9898u; }
        if (ctx->pc != 0x1A9898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9898u; }
        if (ctx->pc != 0x1A9898u) { return; }
    }
    ctx->pc = 0x1A9898u;
    // 0x1a9898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a989c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A989Cu;
    SET_GPR_U32(ctx, 31, 0x1A98A4u);
    ctx->pc = 0x1A98A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A989Cu;
            // 0x1a98a0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A98A4u; }
        if (ctx->pc != 0x1A98A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A98A4u; }
        if (ctx->pc != 0x1A98A4u) { return; }
    }
    ctx->pc = 0x1A98A4u;
    // 0x1a98a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a98a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98a8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A98A8u;
    SET_GPR_U32(ctx, 31, 0x1A98B0u);
    ctx->pc = 0x1A98ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98A8u;
            // 0x1a98ac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A98B0u; }
        if (ctx->pc != 0x1A98B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A98B0u; }
        if (ctx->pc != 0x1A98B0u) { return; }
    }
    ctx->pc = 0x1A98B0u;
    // 0x1a98b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a98b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98b4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A98B4u;
    SET_GPR_U32(ctx, 31, 0x1A98BCu);
    ctx->pc = 0x1A98B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98B4u;
            // 0x1a98b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A98BCu; }
        if (ctx->pc != 0x1A98BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A98BCu; }
        if (ctx->pc != 0x1A98BCu) { return; }
    }
    ctx->pc = 0x1A98BCu;
    // 0x1a98bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a98bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a98c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a98c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a98c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A98C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A98C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98C4u;
            // 0x1a98c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A98CCu;
}

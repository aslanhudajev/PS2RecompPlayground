#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitStage6Boss_Hontai
// Address: 0x1c47b0 - 0x1c48c4
void InitStage6Boss_Hontai_0x1c47b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitStage6Boss_Hontai_0x1c47b0");
#endif

    ctx->pc = 0x1c47b0u;

    // 0x1c47b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c47b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c47b4: 0x240400fd  addiu       $a0, $zero, 0xFD
    ctx->pc = 0x1c47b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x1c47b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c47b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c47bc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1c47bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c47c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c47c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47c4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1c47c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c47c8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1C47C8u;
    SET_GPR_U32(ctx, 31, 0x1C47D0u);
    ctx->pc = 0x1C47CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47C8u;
            // 0x1c47cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47D0u; }
        if (ctx->pc != 0x1C47D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47D0u; }
        if (ctx->pc != 0x1C47D0u) { return; }
    }
    ctx->pc = 0x1C47D0u;
    // 0x1c47d0: 0x240400f5  addiu       $a0, $zero, 0xF5
    ctx->pc = 0x1c47d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x1c47d4: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1C47D4u;
    SET_GPR_U32(ctx, 31, 0x1C47DCu);
    ctx->pc = 0x1C47D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47D4u;
            // 0x1c47d8: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47DCu; }
        if (ctx->pc != 0x1C47DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47DCu; }
        if (ctx->pc != 0x1C47DCu) { return; }
    }
    ctx->pc = 0x1C47DCu;
    // 0x1c47dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c47dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c47e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47e4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C47E4u;
    SET_GPR_U32(ctx, 31, 0x1C47ECu);
    ctx->pc = 0x1C47E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47E4u;
            // 0x1c47e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47ECu; }
        if (ctx->pc != 0x1C47ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47ECu; }
        if (ctx->pc != 0x1C47ECu) { return; }
    }
    ctx->pc = 0x1C47ECu;
    // 0x1c47ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c47ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47f0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C47F0u;
    SET_GPR_U32(ctx, 31, 0x1C47F8u);
    ctx->pc = 0x1C47F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47F0u;
            // 0x1c47f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47F8u; }
        if (ctx->pc != 0x1C47F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47F8u; }
        if (ctx->pc != 0x1C47F8u) { return; }
    }
    ctx->pc = 0x1C47F8u;
    // 0x1c47f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c47f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47fc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C47FCu;
    SET_GPR_U32(ctx, 31, 0x1C4804u);
    ctx->pc = 0x1C4800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47FCu;
            // 0x1c4800: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4804u; }
        if (ctx->pc != 0x1C4804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4804u; }
        if (ctx->pc != 0x1C4804u) { return; }
    }
    ctx->pc = 0x1C4804u;
    // 0x1c4804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4808: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C4808u;
    SET_GPR_U32(ctx, 31, 0x1C4810u);
    ctx->pc = 0x1C480Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4808u;
            // 0x1c480c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4810u; }
        if (ctx->pc != 0x1C4810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4810u; }
        if (ctx->pc != 0x1C4810u) { return; }
    }
    ctx->pc = 0x1C4810u;
    // 0x1c4810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4814: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C4814u;
    SET_GPR_U32(ctx, 31, 0x1C481Cu);
    ctx->pc = 0x1C4818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4814u;
            // 0x1c4818: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C481Cu; }
        if (ctx->pc != 0x1C481Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C481Cu; }
        if (ctx->pc != 0x1C481Cu) { return; }
    }
    ctx->pc = 0x1C481Cu;
    // 0x1c481c: 0x240400f3  addiu       $a0, $zero, 0xF3
    ctx->pc = 0x1c481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x1c4820: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1C4820u;
    SET_GPR_U32(ctx, 31, 0x1C4828u);
    ctx->pc = 0x1C4824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4820u;
            // 0x1c4824: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4828u; }
        if (ctx->pc != 0x1C4828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4828u; }
        if (ctx->pc != 0x1C4828u) { return; }
    }
    ctx->pc = 0x1C4828u;
    // 0x1c4828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c482c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c482cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4830: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C4830u;
    SET_GPR_U32(ctx, 31, 0x1C4838u);
    ctx->pc = 0x1C4834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4830u;
            // 0x1c4834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4838u; }
        if (ctx->pc != 0x1C4838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4838u; }
        if (ctx->pc != 0x1C4838u) { return; }
    }
    ctx->pc = 0x1C4838u;
    // 0x1c4838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c483c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C483Cu;
    SET_GPR_U32(ctx, 31, 0x1C4844u);
    ctx->pc = 0x1C4840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C483Cu;
            // 0x1c4840: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4844u; }
        if (ctx->pc != 0x1C4844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4844u; }
        if (ctx->pc != 0x1C4844u) { return; }
    }
    ctx->pc = 0x1C4844u;
    // 0x1c4844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4848: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C4848u;
    SET_GPR_U32(ctx, 31, 0x1C4850u);
    ctx->pc = 0x1C484Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4848u;
            // 0x1c484c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4850u; }
        if (ctx->pc != 0x1C4850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4850u; }
        if (ctx->pc != 0x1C4850u) { return; }
    }
    ctx->pc = 0x1C4850u;
    // 0x1c4850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4854: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C4854u;
    SET_GPR_U32(ctx, 31, 0x1C485Cu);
    ctx->pc = 0x1C4858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4854u;
            // 0x1c4858: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C485Cu; }
        if (ctx->pc != 0x1C485Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C485Cu; }
        if (ctx->pc != 0x1C485Cu) { return; }
    }
    ctx->pc = 0x1C485Cu;
    // 0x1c485c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c485cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4860: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C4860u;
    SET_GPR_U32(ctx, 31, 0x1C4868u);
    ctx->pc = 0x1C4864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4860u;
            // 0x1c4864: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4868u; }
        if (ctx->pc != 0x1C4868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4868u; }
        if (ctx->pc != 0x1C4868u) { return; }
    }
    ctx->pc = 0x1C4868u;
    // 0x1c4868: 0x240400f4  addiu       $a0, $zero, 0xF4
    ctx->pc = 0x1c4868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x1c486c: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1C486Cu;
    SET_GPR_U32(ctx, 31, 0x1C4874u);
    ctx->pc = 0x1C4870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C486Cu;
            // 0x1c4870: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4874u; }
        if (ctx->pc != 0x1C4874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4874u; }
        if (ctx->pc != 0x1C4874u) { return; }
    }
    ctx->pc = 0x1C4874u;
    // 0x1c4874: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c487c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C487Cu;
    SET_GPR_U32(ctx, 31, 0x1C4884u);
    ctx->pc = 0x1C4880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C487Cu;
            // 0x1c4880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4884u; }
        if (ctx->pc != 0x1C4884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4884u; }
        if (ctx->pc != 0x1C4884u) { return; }
    }
    ctx->pc = 0x1C4884u;
    // 0x1c4884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4888: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C4888u;
    SET_GPR_U32(ctx, 31, 0x1C4890u);
    ctx->pc = 0x1C488Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4888u;
            // 0x1c488c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4890u; }
        if (ctx->pc != 0x1C4890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4890u; }
        if (ctx->pc != 0x1C4890u) { return; }
    }
    ctx->pc = 0x1C4890u;
    // 0x1c4890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4894: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C4894u;
    SET_GPR_U32(ctx, 31, 0x1C489Cu);
    ctx->pc = 0x1C4898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4894u;
            // 0x1c4898: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C489Cu; }
        if (ctx->pc != 0x1C489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C489Cu; }
        if (ctx->pc != 0x1C489Cu) { return; }
    }
    ctx->pc = 0x1C489Cu;
    // 0x1c489c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c489cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48a0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C48A0u;
    SET_GPR_U32(ctx, 31, 0x1C48A8u);
    ctx->pc = 0x1C48A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C48A0u;
            // 0x1c48a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C48A8u; }
        if (ctx->pc != 0x1C48A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C48A8u; }
        if (ctx->pc != 0x1C48A8u) { return; }
    }
    ctx->pc = 0x1C48A8u;
    // 0x1c48a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c48a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48ac: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C48ACu;
    SET_GPR_U32(ctx, 31, 0x1C48B4u);
    ctx->pc = 0x1C48B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C48ACu;
            // 0x1c48b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C48B4u; }
        if (ctx->pc != 0x1C48B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C48B4u; }
        if (ctx->pc != 0x1C48B4u) { return; }
    }
    ctx->pc = 0x1C48B4u;
    // 0x1c48b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c48b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c48b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c48b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c48bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C48BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C48C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C48BCu;
            // 0x1c48c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C48C4u;
}

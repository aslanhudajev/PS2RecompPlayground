#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitStage1Boss_Hontai
// Address: 0x161ff0 - 0x16219c
void InitStage1Boss_Hontai_0x161ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitStage1Boss_Hontai_0x161ff0");
#endif

    ctx->pc = 0x161ff0u;

    // 0x161ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161ff4: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x161ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x161ff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x161ffc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x161ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x162000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162004: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x162004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162008: 0xc05c20c  jal         func_170830
    ctx->pc = 0x162008u;
    SET_GPR_U32(ctx, 31, 0x162010u);
    ctx->pc = 0x16200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162008u;
            // 0x16200c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162010u; }
        if (ctx->pc != 0x162010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162010u; }
        if (ctx->pc != 0x162010u) { return; }
    }
    ctx->pc = 0x162010u;
    // 0x162010: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x162010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x162014: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x162014u;
    SET_GPR_U32(ctx, 31, 0x16201Cu);
    ctx->pc = 0x162018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162014u;
            // 0x162018: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16201Cu; }
        if (ctx->pc != 0x16201Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16201Cu; }
        if (ctx->pc != 0x16201Cu) { return; }
    }
    ctx->pc = 0x16201Cu;
    // 0x16201c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16201cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162024: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162024u;
    SET_GPR_U32(ctx, 31, 0x16202Cu);
    ctx->pc = 0x162028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162024u;
            // 0x162028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16202Cu; }
        if (ctx->pc != 0x16202Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16202Cu; }
        if (ctx->pc != 0x16202Cu) { return; }
    }
    ctx->pc = 0x16202Cu;
    // 0x16202c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16202cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162030: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162030u;
    SET_GPR_U32(ctx, 31, 0x162038u);
    ctx->pc = 0x162034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162030u;
            // 0x162034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162038u; }
        if (ctx->pc != 0x162038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162038u; }
        if (ctx->pc != 0x162038u) { return; }
    }
    ctx->pc = 0x162038u;
    // 0x162038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16203c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x16203Cu;
    SET_GPR_U32(ctx, 31, 0x162044u);
    ctx->pc = 0x162040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16203Cu;
            // 0x162040: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162044u; }
        if (ctx->pc != 0x162044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162044u; }
        if (ctx->pc != 0x162044u) { return; }
    }
    ctx->pc = 0x162044u;
    // 0x162044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162048: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162048u;
    SET_GPR_U32(ctx, 31, 0x162050u);
    ctx->pc = 0x16204Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162048u;
            // 0x16204c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162050u; }
        if (ctx->pc != 0x162050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162050u; }
        if (ctx->pc != 0x162050u) { return; }
    }
    ctx->pc = 0x162050u;
    // 0x162050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162054: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162054u;
    SET_GPR_U32(ctx, 31, 0x16205Cu);
    ctx->pc = 0x162058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162054u;
            // 0x162058: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16205Cu; }
        if (ctx->pc != 0x16205Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16205Cu; }
        if (ctx->pc != 0x16205Cu) { return; }
    }
    ctx->pc = 0x16205Cu;
    // 0x16205c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x16205cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x162060: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x162060u;
    SET_GPR_U32(ctx, 31, 0x162068u);
    ctx->pc = 0x162064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162060u;
            // 0x162064: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162068u; }
        if (ctx->pc != 0x162068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162068u; }
        if (ctx->pc != 0x162068u) { return; }
    }
    ctx->pc = 0x162068u;
    // 0x162068: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16206c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16206cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162070: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162070u;
    SET_GPR_U32(ctx, 31, 0x162078u);
    ctx->pc = 0x162074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162070u;
            // 0x162074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162078u; }
        if (ctx->pc != 0x162078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162078u; }
        if (ctx->pc != 0x162078u) { return; }
    }
    ctx->pc = 0x162078u;
    // 0x162078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16207c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x16207Cu;
    SET_GPR_U32(ctx, 31, 0x162084u);
    ctx->pc = 0x162080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16207Cu;
            // 0x162080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162084u; }
        if (ctx->pc != 0x162084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162084u; }
        if (ctx->pc != 0x162084u) { return; }
    }
    ctx->pc = 0x162084u;
    // 0x162084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162088: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162088u;
    SET_GPR_U32(ctx, 31, 0x162090u);
    ctx->pc = 0x16208Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162088u;
            // 0x16208c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162090u; }
        if (ctx->pc != 0x162090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162090u; }
        if (ctx->pc != 0x162090u) { return; }
    }
    ctx->pc = 0x162090u;
    // 0x162090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162094: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162094u;
    SET_GPR_U32(ctx, 31, 0x16209Cu);
    ctx->pc = 0x162098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162094u;
            // 0x162098: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16209Cu; }
        if (ctx->pc != 0x16209Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16209Cu; }
        if (ctx->pc != 0x16209Cu) { return; }
    }
    ctx->pc = 0x16209Cu;
    // 0x16209c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620a0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1620A0u;
    SET_GPR_U32(ctx, 31, 0x1620A8u);
    ctx->pc = 0x1620A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620A0u;
            // 0x1620a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620A8u; }
        if (ctx->pc != 0x1620A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620A8u; }
        if (ctx->pc != 0x1620A8u) { return; }
    }
    ctx->pc = 0x1620A8u;
    // 0x1620a8: 0x24040065  addiu       $a0, $zero, 0x65
    ctx->pc = 0x1620a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x1620ac: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1620ACu;
    SET_GPR_U32(ctx, 31, 0x1620B4u);
    ctx->pc = 0x1620B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620ACu;
            // 0x1620b0: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620B4u; }
        if (ctx->pc != 0x1620B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620B4u; }
        if (ctx->pc != 0x1620B4u) { return; }
    }
    ctx->pc = 0x1620B4u;
    // 0x1620b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1620b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1620b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620bc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1620BCu;
    SET_GPR_U32(ctx, 31, 0x1620C4u);
    ctx->pc = 0x1620C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620BCu;
            // 0x1620c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620C4u; }
        if (ctx->pc != 0x1620C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620C4u; }
        if (ctx->pc != 0x1620C4u) { return; }
    }
    ctx->pc = 0x1620C4u;
    // 0x1620c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1620c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620c8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1620C8u;
    SET_GPR_U32(ctx, 31, 0x1620D0u);
    ctx->pc = 0x1620CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620C8u;
            // 0x1620cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620D0u; }
        if (ctx->pc != 0x1620D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620D0u; }
        if (ctx->pc != 0x1620D0u) { return; }
    }
    ctx->pc = 0x1620D0u;
    // 0x1620d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1620d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620d4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1620D4u;
    SET_GPR_U32(ctx, 31, 0x1620DCu);
    ctx->pc = 0x1620D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620D4u;
            // 0x1620d8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620DCu; }
        if (ctx->pc != 0x1620DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620DCu; }
        if (ctx->pc != 0x1620DCu) { return; }
    }
    ctx->pc = 0x1620DCu;
    // 0x1620dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1620dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620e0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1620E0u;
    SET_GPR_U32(ctx, 31, 0x1620E8u);
    ctx->pc = 0x1620E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620E0u;
            // 0x1620e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620E8u; }
        if (ctx->pc != 0x1620E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620E8u; }
        if (ctx->pc != 0x1620E8u) { return; }
    }
    ctx->pc = 0x1620E8u;
    // 0x1620e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1620e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620ec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1620ECu;
    SET_GPR_U32(ctx, 31, 0x1620F4u);
    ctx->pc = 0x1620F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620ECu;
            // 0x1620f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620F4u; }
        if (ctx->pc != 0x1620F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620F4u; }
        if (ctx->pc != 0x1620F4u) { return; }
    }
    ctx->pc = 0x1620F4u;
    // 0x1620f4: 0x24040067  addiu       $a0, $zero, 0x67
    ctx->pc = 0x1620f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x1620f8: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1620F8u;
    SET_GPR_U32(ctx, 31, 0x162100u);
    ctx->pc = 0x1620FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620F8u;
            // 0x1620fc: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162100u; }
        if (ctx->pc != 0x162100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162100u; }
        if (ctx->pc != 0x162100u) { return; }
    }
    ctx->pc = 0x162100u;
    // 0x162100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162108: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162108u;
    SET_GPR_U32(ctx, 31, 0x162110u);
    ctx->pc = 0x16210Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162108u;
            // 0x16210c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162110u; }
        if (ctx->pc != 0x162110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162110u; }
        if (ctx->pc != 0x162110u) { return; }
    }
    ctx->pc = 0x162110u;
    // 0x162110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162114: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162114u;
    SET_GPR_U32(ctx, 31, 0x16211Cu);
    ctx->pc = 0x162118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162114u;
            // 0x162118: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16211Cu; }
        if (ctx->pc != 0x16211Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16211Cu; }
        if (ctx->pc != 0x16211Cu) { return; }
    }
    ctx->pc = 0x16211Cu;
    // 0x16211c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162120: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162120u;
    SET_GPR_U32(ctx, 31, 0x162128u);
    ctx->pc = 0x162124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162120u;
            // 0x162124: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162128u; }
        if (ctx->pc != 0x162128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162128u; }
        if (ctx->pc != 0x162128u) { return; }
    }
    ctx->pc = 0x162128u;
    // 0x162128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16212c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x16212Cu;
    SET_GPR_U32(ctx, 31, 0x162134u);
    ctx->pc = 0x162130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16212Cu;
            // 0x162130: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162134u; }
        if (ctx->pc != 0x162134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162134u; }
        if (ctx->pc != 0x162134u) { return; }
    }
    ctx->pc = 0x162134u;
    // 0x162134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162138: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162138u;
    SET_GPR_U32(ctx, 31, 0x162140u);
    ctx->pc = 0x16213Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162138u;
            // 0x16213c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162140u; }
        if (ctx->pc != 0x162140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162140u; }
        if (ctx->pc != 0x162140u) { return; }
    }
    ctx->pc = 0x162140u;
    // 0x162140: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x162140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x162144: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x162144u;
    SET_GPR_U32(ctx, 31, 0x16214Cu);
    ctx->pc = 0x162148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162144u;
            // 0x162148: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16214Cu; }
        if (ctx->pc != 0x16214Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16214Cu; }
        if (ctx->pc != 0x16214Cu) { return; }
    }
    ctx->pc = 0x16214Cu;
    // 0x16214c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16214cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162154: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162154u;
    SET_GPR_U32(ctx, 31, 0x16215Cu);
    ctx->pc = 0x162158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162154u;
            // 0x162158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16215Cu; }
        if (ctx->pc != 0x16215Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16215Cu; }
        if (ctx->pc != 0x16215Cu) { return; }
    }
    ctx->pc = 0x16215Cu;
    // 0x16215c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16215cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162160: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162160u;
    SET_GPR_U32(ctx, 31, 0x162168u);
    ctx->pc = 0x162164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162160u;
            // 0x162164: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162168u; }
        if (ctx->pc != 0x162168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162168u; }
        if (ctx->pc != 0x162168u) { return; }
    }
    ctx->pc = 0x162168u;
    // 0x162168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16216c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x16216Cu;
    SET_GPR_U32(ctx, 31, 0x162174u);
    ctx->pc = 0x162170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16216Cu;
            // 0x162170: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162174u; }
        if (ctx->pc != 0x162174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162174u; }
        if (ctx->pc != 0x162174u) { return; }
    }
    ctx->pc = 0x162174u;
    // 0x162174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162178: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162178u;
    SET_GPR_U32(ctx, 31, 0x162180u);
    ctx->pc = 0x16217Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162178u;
            // 0x16217c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162180u; }
        if (ctx->pc != 0x162180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162180u; }
        if (ctx->pc != 0x162180u) { return; }
    }
    ctx->pc = 0x162180u;
    // 0x162180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162184: 0xc060630  jal         func_1818C0
    ctx->pc = 0x162184u;
    SET_GPR_U32(ctx, 31, 0x16218Cu);
    ctx->pc = 0x162188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162184u;
            // 0x162188: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16218Cu; }
        if (ctx->pc != 0x16218Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16218Cu; }
        if (ctx->pc != 0x16218Cu) { return; }
    }
    ctx->pc = 0x16218Cu;
    // 0x16218c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16218cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162194: 0x3e00008  jr          $ra
    ctx->pc = 0x162194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162194u;
            // 0x162198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16219Cu;
}

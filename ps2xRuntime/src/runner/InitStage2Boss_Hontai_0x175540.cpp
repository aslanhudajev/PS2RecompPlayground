#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitStage2Boss_Hontai
// Address: 0x175540 - 0x1756ec
void InitStage2Boss_Hontai_0x175540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitStage2Boss_Hontai_0x175540");
#endif

    ctx->pc = 0x175540u;

    // 0x175540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175544: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x175544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x175548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17554c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x17554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x175550: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175554: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x175554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x175558: 0xc05c20c  jal         func_170830
    ctx->pc = 0x175558u;
    SET_GPR_U32(ctx, 31, 0x175560u);
    ctx->pc = 0x17555Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175558u;
            // 0x17555c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175560u; }
        if (ctx->pc != 0x175560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175560u; }
        if (ctx->pc != 0x175560u) { return; }
    }
    ctx->pc = 0x175560u;
    // 0x175560: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x175560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x175564: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x175564u;
    SET_GPR_U32(ctx, 31, 0x17556Cu);
    ctx->pc = 0x175568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175564u;
            // 0x175568: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17556Cu; }
        if (ctx->pc != 0x17556Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17556Cu; }
        if (ctx->pc != 0x17556Cu) { return; }
    }
    ctx->pc = 0x17556Cu;
    // 0x17556c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17556cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175574: 0xc060630  jal         func_1818C0
    ctx->pc = 0x175574u;
    SET_GPR_U32(ctx, 31, 0x17557Cu);
    ctx->pc = 0x175578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175574u;
            // 0x175578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17557Cu; }
        if (ctx->pc != 0x17557Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17557Cu; }
        if (ctx->pc != 0x17557Cu) { return; }
    }
    ctx->pc = 0x17557Cu;
    // 0x17557c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175580: 0xc060630  jal         func_1818C0
    ctx->pc = 0x175580u;
    SET_GPR_U32(ctx, 31, 0x175588u);
    ctx->pc = 0x175584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175580u;
            // 0x175584: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175588u; }
        if (ctx->pc != 0x175588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175588u; }
        if (ctx->pc != 0x175588u) { return; }
    }
    ctx->pc = 0x175588u;
    // 0x175588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17558c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x17558Cu;
    SET_GPR_U32(ctx, 31, 0x175594u);
    ctx->pc = 0x175590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17558Cu;
            // 0x175590: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175594u; }
        if (ctx->pc != 0x175594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175594u; }
        if (ctx->pc != 0x175594u) { return; }
    }
    ctx->pc = 0x175594u;
    // 0x175594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175598: 0xc060630  jal         func_1818C0
    ctx->pc = 0x175598u;
    SET_GPR_U32(ctx, 31, 0x1755A0u);
    ctx->pc = 0x17559Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175598u;
            // 0x17559c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755A0u; }
        if (ctx->pc != 0x1755A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755A0u; }
        if (ctx->pc != 0x1755A0u) { return; }
    }
    ctx->pc = 0x1755A0u;
    // 0x1755a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1755a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755a4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1755A4u;
    SET_GPR_U32(ctx, 31, 0x1755ACu);
    ctx->pc = 0x1755A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1755A4u;
            // 0x1755a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755ACu; }
        if (ctx->pc != 0x1755ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755ACu; }
        if (ctx->pc != 0x1755ACu) { return; }
    }
    ctx->pc = 0x1755ACu;
    // 0x1755ac: 0x24040085  addiu       $a0, $zero, 0x85
    ctx->pc = 0x1755acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x1755b0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1755B0u;
    SET_GPR_U32(ctx, 31, 0x1755B8u);
    ctx->pc = 0x1755B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1755B0u;
            // 0x1755b4: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755B8u; }
        if (ctx->pc != 0x1755B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755B8u; }
        if (ctx->pc != 0x1755B8u) { return; }
    }
    ctx->pc = 0x1755B8u;
    // 0x1755b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1755b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1755bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755c0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1755C0u;
    SET_GPR_U32(ctx, 31, 0x1755C8u);
    ctx->pc = 0x1755C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1755C0u;
            // 0x1755c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755C8u; }
        if (ctx->pc != 0x1755C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755C8u; }
        if (ctx->pc != 0x1755C8u) { return; }
    }
    ctx->pc = 0x1755C8u;
    // 0x1755c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1755c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755cc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1755CCu;
    SET_GPR_U32(ctx, 31, 0x1755D4u);
    ctx->pc = 0x1755D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1755CCu;
            // 0x1755d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755D4u; }
        if (ctx->pc != 0x1755D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755D4u; }
        if (ctx->pc != 0x1755D4u) { return; }
    }
    ctx->pc = 0x1755D4u;
    // 0x1755d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1755d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755d8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1755D8u;
    SET_GPR_U32(ctx, 31, 0x1755E0u);
    ctx->pc = 0x1755DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1755D8u;
            // 0x1755dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755E0u; }
        if (ctx->pc != 0x1755E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755E0u; }
        if (ctx->pc != 0x1755E0u) { return; }
    }
    ctx->pc = 0x1755E0u;
    // 0x1755e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1755e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755e4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1755E4u;
    SET_GPR_U32(ctx, 31, 0x1755ECu);
    ctx->pc = 0x1755E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1755E4u;
            // 0x1755e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755ECu; }
        if (ctx->pc != 0x1755ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755ECu; }
        if (ctx->pc != 0x1755ECu) { return; }
    }
    ctx->pc = 0x1755ECu;
    // 0x1755ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1755ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755f0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1755F0u;
    SET_GPR_U32(ctx, 31, 0x1755F8u);
    ctx->pc = 0x1755F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1755F0u;
            // 0x1755f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755F8u; }
        if (ctx->pc != 0x1755F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755F8u; }
        if (ctx->pc != 0x1755F8u) { return; }
    }
    ctx->pc = 0x1755F8u;
    // 0x1755f8: 0x24040086  addiu       $a0, $zero, 0x86
    ctx->pc = 0x1755f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x1755fc: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1755FCu;
    SET_GPR_U32(ctx, 31, 0x175604u);
    ctx->pc = 0x175600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1755FCu;
            // 0x175600: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175604u; }
        if (ctx->pc != 0x175604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175604u; }
        if (ctx->pc != 0x175604u) { return; }
    }
    ctx->pc = 0x175604u;
    // 0x175604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x175604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17560c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x17560Cu;
    SET_GPR_U32(ctx, 31, 0x175614u);
    ctx->pc = 0x175610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17560Cu;
            // 0x175610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175614u; }
        if (ctx->pc != 0x175614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175614u; }
        if (ctx->pc != 0x175614u) { return; }
    }
    ctx->pc = 0x175614u;
    // 0x175614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175618: 0xc060630  jal         func_1818C0
    ctx->pc = 0x175618u;
    SET_GPR_U32(ctx, 31, 0x175620u);
    ctx->pc = 0x17561Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175618u;
            // 0x17561c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175620u; }
        if (ctx->pc != 0x175620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175620u; }
        if (ctx->pc != 0x175620u) { return; }
    }
    ctx->pc = 0x175620u;
    // 0x175620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175624: 0xc060630  jal         func_1818C0
    ctx->pc = 0x175624u;
    SET_GPR_U32(ctx, 31, 0x17562Cu);
    ctx->pc = 0x175628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175624u;
            // 0x175628: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17562Cu; }
        if (ctx->pc != 0x17562Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17562Cu; }
        if (ctx->pc != 0x17562Cu) { return; }
    }
    ctx->pc = 0x17562Cu;
    // 0x17562c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17562cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175630: 0xc060630  jal         func_1818C0
    ctx->pc = 0x175630u;
    SET_GPR_U32(ctx, 31, 0x175638u);
    ctx->pc = 0x175634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175630u;
            // 0x175634: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175638u; }
        if (ctx->pc != 0x175638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175638u; }
        if (ctx->pc != 0x175638u) { return; }
    }
    ctx->pc = 0x175638u;
    // 0x175638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17563c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x17563Cu;
    SET_GPR_U32(ctx, 31, 0x175644u);
    ctx->pc = 0x175640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17563Cu;
            // 0x175640: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175644u; }
        if (ctx->pc != 0x175644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175644u; }
        if (ctx->pc != 0x175644u) { return; }
    }
    ctx->pc = 0x175644u;
    // 0x175644: 0x24040087  addiu       $a0, $zero, 0x87
    ctx->pc = 0x175644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x175648: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x175648u;
    SET_GPR_U32(ctx, 31, 0x175650u);
    ctx->pc = 0x17564Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175648u;
            // 0x17564c: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175650u; }
        if (ctx->pc != 0x175650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175650u; }
        if (ctx->pc != 0x175650u) { return; }
    }
    ctx->pc = 0x175650u;
    // 0x175650: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x175650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175658: 0xc060630  jal         func_1818C0
    ctx->pc = 0x175658u;
    SET_GPR_U32(ctx, 31, 0x175660u);
    ctx->pc = 0x17565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175658u;
            // 0x17565c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175660u; }
        if (ctx->pc != 0x175660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175660u; }
        if (ctx->pc != 0x175660u) { return; }
    }
    ctx->pc = 0x175660u;
    // 0x175660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175664: 0xc060630  jal         func_1818C0
    ctx->pc = 0x175664u;
    SET_GPR_U32(ctx, 31, 0x17566Cu);
    ctx->pc = 0x175668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175664u;
            // 0x175668: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17566Cu; }
        if (ctx->pc != 0x17566Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17566Cu; }
        if (ctx->pc != 0x17566Cu) { return; }
    }
    ctx->pc = 0x17566Cu;
    // 0x17566c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17566cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175670: 0xc060630  jal         func_1818C0
    ctx->pc = 0x175670u;
    SET_GPR_U32(ctx, 31, 0x175678u);
    ctx->pc = 0x175674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175670u;
            // 0x175674: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175678u; }
        if (ctx->pc != 0x175678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175678u; }
        if (ctx->pc != 0x175678u) { return; }
    }
    ctx->pc = 0x175678u;
    // 0x175678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17567c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x17567Cu;
    SET_GPR_U32(ctx, 31, 0x175684u);
    ctx->pc = 0x175680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17567Cu;
            // 0x175680: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175684u; }
        if (ctx->pc != 0x175684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175684u; }
        if (ctx->pc != 0x175684u) { return; }
    }
    ctx->pc = 0x175684u;
    // 0x175684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175688: 0xc060630  jal         func_1818C0
    ctx->pc = 0x175688u;
    SET_GPR_U32(ctx, 31, 0x175690u);
    ctx->pc = 0x17568Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175688u;
            // 0x17568c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175690u; }
        if (ctx->pc != 0x175690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175690u; }
        if (ctx->pc != 0x175690u) { return; }
    }
    ctx->pc = 0x175690u;
    // 0x175690: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x175690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x175694: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x175694u;
    SET_GPR_U32(ctx, 31, 0x17569Cu);
    ctx->pc = 0x175698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175694u;
            // 0x175698: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17569Cu; }
        if (ctx->pc != 0x17569Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17569Cu; }
        if (ctx->pc != 0x17569Cu) { return; }
    }
    ctx->pc = 0x17569Cu;
    // 0x17569c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17569cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1756a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756a4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1756A4u;
    SET_GPR_U32(ctx, 31, 0x1756ACu);
    ctx->pc = 0x1756A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1756A4u;
            // 0x1756a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756ACu; }
        if (ctx->pc != 0x1756ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756ACu; }
        if (ctx->pc != 0x1756ACu) { return; }
    }
    ctx->pc = 0x1756ACu;
    // 0x1756ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1756acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756b0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1756B0u;
    SET_GPR_U32(ctx, 31, 0x1756B8u);
    ctx->pc = 0x1756B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1756B0u;
            // 0x1756b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756B8u; }
        if (ctx->pc != 0x1756B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756B8u; }
        if (ctx->pc != 0x1756B8u) { return; }
    }
    ctx->pc = 0x1756B8u;
    // 0x1756b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1756b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756bc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1756BCu;
    SET_GPR_U32(ctx, 31, 0x1756C4u);
    ctx->pc = 0x1756C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1756BCu;
            // 0x1756c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756C4u; }
        if (ctx->pc != 0x1756C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756C4u; }
        if (ctx->pc != 0x1756C4u) { return; }
    }
    ctx->pc = 0x1756C4u;
    // 0x1756c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1756c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756c8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1756C8u;
    SET_GPR_U32(ctx, 31, 0x1756D0u);
    ctx->pc = 0x1756CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1756C8u;
            // 0x1756cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756D0u; }
        if (ctx->pc != 0x1756D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756D0u; }
        if (ctx->pc != 0x1756D0u) { return; }
    }
    ctx->pc = 0x1756D0u;
    // 0x1756d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1756d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756d4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1756D4u;
    SET_GPR_U32(ctx, 31, 0x1756DCu);
    ctx->pc = 0x1756D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1756D4u;
            // 0x1756d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756DCu; }
        if (ctx->pc != 0x1756DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756DCu; }
        if (ctx->pc != 0x1756DCu) { return; }
    }
    ctx->pc = 0x1756DCu;
    // 0x1756dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1756dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1756e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1756e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1756e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1756E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1756E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1756E4u;
            // 0x1756e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1756ECu;
}

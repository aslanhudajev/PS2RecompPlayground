#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitStage7Boss_Hontai
// Address: 0x1b8550 - 0x1b87a8
void InitStage7Boss_Hontai_0x1b8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitStage7Boss_Hontai_0x1b8550");
#endif

    ctx->pc = 0x1b8550u;

    // 0x1b8550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8554: 0x24040111  addiu       $a0, $zero, 0x111
    ctx->pc = 0x1b8554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x1b8558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b855c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1b855cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b8560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8564: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1b8564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8568: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1B8568u;
    SET_GPR_U32(ctx, 31, 0x1B8570u);
    ctx->pc = 0x1B856Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8568u;
            // 0x1b856c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8570u; }
        if (ctx->pc != 0x1B8570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8570u; }
        if (ctx->pc != 0x1B8570u) { return; }
    }
    ctx->pc = 0x1B8570u;
    // 0x1b8570: 0x24040112  addiu       $a0, $zero, 0x112
    ctx->pc = 0x1b8570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    // 0x1b8574: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b8574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b8578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b857c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1B857Cu;
    SET_GPR_U32(ctx, 31, 0x1B8584u);
    ctx->pc = 0x1B8580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B857Cu;
            // 0x1b8580: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8584u; }
        if (ctx->pc != 0x1B8584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8584u; }
        if (ctx->pc != 0x1B8584u) { return; }
    }
    ctx->pc = 0x1B8584u;
    // 0x1b8584: 0x24040109  addiu       $a0, $zero, 0x109
    ctx->pc = 0x1b8584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x1b8588: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1B8588u;
    SET_GPR_U32(ctx, 31, 0x1B8590u);
    ctx->pc = 0x1B858Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8588u;
            // 0x1b858c: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8590u; }
        if (ctx->pc != 0x1B8590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8590u; }
        if (ctx->pc != 0x1B8590u) { return; }
    }
    ctx->pc = 0x1B8590u;
    // 0x1b8590: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8598: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8598u;
    SET_GPR_U32(ctx, 31, 0x1B85A0u);
    ctx->pc = 0x1B859Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8598u;
            // 0x1b859c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85A0u; }
        if (ctx->pc != 0x1B85A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85A0u; }
        if (ctx->pc != 0x1B85A0u) { return; }
    }
    ctx->pc = 0x1B85A0u;
    // 0x1b85a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b85a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85a4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B85A4u;
    SET_GPR_U32(ctx, 31, 0x1B85ACu);
    ctx->pc = 0x1B85A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85A4u;
            // 0x1b85a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85ACu; }
        if (ctx->pc != 0x1B85ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85ACu; }
        if (ctx->pc != 0x1B85ACu) { return; }
    }
    ctx->pc = 0x1B85ACu;
    // 0x1b85ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b85acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85b0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B85B0u;
    SET_GPR_U32(ctx, 31, 0x1B85B8u);
    ctx->pc = 0x1B85B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85B0u;
            // 0x1b85b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85B8u; }
        if (ctx->pc != 0x1B85B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85B8u; }
        if (ctx->pc != 0x1B85B8u) { return; }
    }
    ctx->pc = 0x1B85B8u;
    // 0x1b85b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b85b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85bc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B85BCu;
    SET_GPR_U32(ctx, 31, 0x1B85C4u);
    ctx->pc = 0x1B85C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85BCu;
            // 0x1b85c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85C4u; }
        if (ctx->pc != 0x1B85C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85C4u; }
        if (ctx->pc != 0x1B85C4u) { return; }
    }
    ctx->pc = 0x1B85C4u;
    // 0x1b85c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b85c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85c8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B85C8u;
    SET_GPR_U32(ctx, 31, 0x1B85D0u);
    ctx->pc = 0x1B85CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85C8u;
            // 0x1b85cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85D0u; }
        if (ctx->pc != 0x1B85D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85D0u; }
        if (ctx->pc != 0x1B85D0u) { return; }
    }
    ctx->pc = 0x1B85D0u;
    // 0x1b85d0: 0x2404010a  addiu       $a0, $zero, 0x10A
    ctx->pc = 0x1b85d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    // 0x1b85d4: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1B85D4u;
    SET_GPR_U32(ctx, 31, 0x1B85DCu);
    ctx->pc = 0x1B85D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85D4u;
            // 0x1b85d8: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85DCu; }
        if (ctx->pc != 0x1B85DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85DCu; }
        if (ctx->pc != 0x1B85DCu) { return; }
    }
    ctx->pc = 0x1B85DCu;
    // 0x1b85dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b85dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b85e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85e4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B85E4u;
    SET_GPR_U32(ctx, 31, 0x1B85ECu);
    ctx->pc = 0x1B85E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85E4u;
            // 0x1b85e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85ECu; }
        if (ctx->pc != 0x1B85ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85ECu; }
        if (ctx->pc != 0x1B85ECu) { return; }
    }
    ctx->pc = 0x1B85ECu;
    // 0x1b85ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b85ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85f0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B85F0u;
    SET_GPR_U32(ctx, 31, 0x1B85F8u);
    ctx->pc = 0x1B85F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85F0u;
            // 0x1b85f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85F8u; }
        if (ctx->pc != 0x1B85F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85F8u; }
        if (ctx->pc != 0x1B85F8u) { return; }
    }
    ctx->pc = 0x1B85F8u;
    // 0x1b85f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b85f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85fc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B85FCu;
    SET_GPR_U32(ctx, 31, 0x1B8604u);
    ctx->pc = 0x1B8600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85FCu;
            // 0x1b8600: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8604u; }
        if (ctx->pc != 0x1B8604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8604u; }
        if (ctx->pc != 0x1B8604u) { return; }
    }
    ctx->pc = 0x1B8604u;
    // 0x1b8604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8608: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8608u;
    SET_GPR_U32(ctx, 31, 0x1B8610u);
    ctx->pc = 0x1B860Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8608u;
            // 0x1b860c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8610u; }
        if (ctx->pc != 0x1B8610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8610u; }
        if (ctx->pc != 0x1B8610u) { return; }
    }
    ctx->pc = 0x1B8610u;
    // 0x1b8610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8614: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8614u;
    SET_GPR_U32(ctx, 31, 0x1B861Cu);
    ctx->pc = 0x1B8618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8614u;
            // 0x1b8618: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B861Cu; }
        if (ctx->pc != 0x1B861Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B861Cu; }
        if (ctx->pc != 0x1B861Cu) { return; }
    }
    ctx->pc = 0x1B861Cu;
    // 0x1b861c: 0x2404010a  addiu       $a0, $zero, 0x10A
    ctx->pc = 0x1b861cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    // 0x1b8620: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1B8620u;
    SET_GPR_U32(ctx, 31, 0x1B8628u);
    ctx->pc = 0x1B8624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8620u;
            // 0x1b8624: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8628u; }
        if (ctx->pc != 0x1B8628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8628u; }
        if (ctx->pc != 0x1B8628u) { return; }
    }
    ctx->pc = 0x1B8628u;
    // 0x1b8628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b862c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b862cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8630: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8630u;
    SET_GPR_U32(ctx, 31, 0x1B8638u);
    ctx->pc = 0x1B8634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8630u;
            // 0x1b8634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8638u; }
        if (ctx->pc != 0x1B8638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8638u; }
        if (ctx->pc != 0x1B8638u) { return; }
    }
    ctx->pc = 0x1B8638u;
    // 0x1b8638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b863c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B863Cu;
    SET_GPR_U32(ctx, 31, 0x1B8644u);
    ctx->pc = 0x1B8640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B863Cu;
            // 0x1b8640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8644u; }
        if (ctx->pc != 0x1B8644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8644u; }
        if (ctx->pc != 0x1B8644u) { return; }
    }
    ctx->pc = 0x1B8644u;
    // 0x1b8644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8648: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8648u;
    SET_GPR_U32(ctx, 31, 0x1B8650u);
    ctx->pc = 0x1B864Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8648u;
            // 0x1b864c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8650u; }
        if (ctx->pc != 0x1B8650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8650u; }
        if (ctx->pc != 0x1B8650u) { return; }
    }
    ctx->pc = 0x1B8650u;
    // 0x1b8650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8654: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8654u;
    SET_GPR_U32(ctx, 31, 0x1B865Cu);
    ctx->pc = 0x1B8658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8654u;
            // 0x1b8658: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B865Cu; }
        if (ctx->pc != 0x1B865Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B865Cu; }
        if (ctx->pc != 0x1B865Cu) { return; }
    }
    ctx->pc = 0x1B865Cu;
    // 0x1b865c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b865cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8660: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8660u;
    SET_GPR_U32(ctx, 31, 0x1B8668u);
    ctx->pc = 0x1B8664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8660u;
            // 0x1b8664: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8668u; }
        if (ctx->pc != 0x1B8668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8668u; }
        if (ctx->pc != 0x1B8668u) { return; }
    }
    ctx->pc = 0x1B8668u;
    // 0x1b8668: 0x2404010b  addiu       $a0, $zero, 0x10B
    ctx->pc = 0x1b8668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
    // 0x1b866c: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1B866Cu;
    SET_GPR_U32(ctx, 31, 0x1B8674u);
    ctx->pc = 0x1B8670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B866Cu;
            // 0x1b8670: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8674u; }
        if (ctx->pc != 0x1B8674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8674u; }
        if (ctx->pc != 0x1B8674u) { return; }
    }
    ctx->pc = 0x1B8674u;
    // 0x1b8674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b867c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B867Cu;
    SET_GPR_U32(ctx, 31, 0x1B8684u);
    ctx->pc = 0x1B8680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B867Cu;
            // 0x1b8680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8684u; }
        if (ctx->pc != 0x1B8684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8684u; }
        if (ctx->pc != 0x1B8684u) { return; }
    }
    ctx->pc = 0x1B8684u;
    // 0x1b8684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8688: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8688u;
    SET_GPR_U32(ctx, 31, 0x1B8690u);
    ctx->pc = 0x1B868Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8688u;
            // 0x1b868c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8690u; }
        if (ctx->pc != 0x1B8690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8690u; }
        if (ctx->pc != 0x1B8690u) { return; }
    }
    ctx->pc = 0x1B8690u;
    // 0x1b8690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8694: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8694u;
    SET_GPR_U32(ctx, 31, 0x1B869Cu);
    ctx->pc = 0x1B8698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8694u;
            // 0x1b8698: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B869Cu; }
        if (ctx->pc != 0x1B869Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B869Cu; }
        if (ctx->pc != 0x1B869Cu) { return; }
    }
    ctx->pc = 0x1B869Cu;
    // 0x1b869c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b86a0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B86A0u;
    SET_GPR_U32(ctx, 31, 0x1B86A8u);
    ctx->pc = 0x1B86A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86A0u;
            // 0x1b86a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86A8u; }
        if (ctx->pc != 0x1B86A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86A8u; }
        if (ctx->pc != 0x1B86A8u) { return; }
    }
    ctx->pc = 0x1B86A8u;
    // 0x1b86a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b86a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b86ac: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B86ACu;
    SET_GPR_U32(ctx, 31, 0x1B86B4u);
    ctx->pc = 0x1B86B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86ACu;
            // 0x1b86b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86B4u; }
        if (ctx->pc != 0x1B86B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86B4u; }
        if (ctx->pc != 0x1B86B4u) { return; }
    }
    ctx->pc = 0x1B86B4u;
    // 0x1b86b4: 0x2404010b  addiu       $a0, $zero, 0x10B
    ctx->pc = 0x1b86b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
    // 0x1b86b8: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1B86B8u;
    SET_GPR_U32(ctx, 31, 0x1B86C0u);
    ctx->pc = 0x1B86BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86B8u;
            // 0x1b86bc: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86C0u; }
        if (ctx->pc != 0x1B86C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86C0u; }
        if (ctx->pc != 0x1B86C0u) { return; }
    }
    ctx->pc = 0x1B86C0u;
    // 0x1b86c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b86c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b86c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b86c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b86c8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B86C8u;
    SET_GPR_U32(ctx, 31, 0x1B86D0u);
    ctx->pc = 0x1B86CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86C8u;
            // 0x1b86cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86D0u; }
        if (ctx->pc != 0x1B86D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86D0u; }
        if (ctx->pc != 0x1B86D0u) { return; }
    }
    ctx->pc = 0x1B86D0u;
    // 0x1b86d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b86d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b86d4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B86D4u;
    SET_GPR_U32(ctx, 31, 0x1B86DCu);
    ctx->pc = 0x1B86D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86D4u;
            // 0x1b86d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86DCu; }
        if (ctx->pc != 0x1B86DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86DCu; }
        if (ctx->pc != 0x1B86DCu) { return; }
    }
    ctx->pc = 0x1B86DCu;
    // 0x1b86dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b86dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b86e0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B86E0u;
    SET_GPR_U32(ctx, 31, 0x1B86E8u);
    ctx->pc = 0x1B86E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86E0u;
            // 0x1b86e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86E8u; }
        if (ctx->pc != 0x1B86E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86E8u; }
        if (ctx->pc != 0x1B86E8u) { return; }
    }
    ctx->pc = 0x1B86E8u;
    // 0x1b86e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b86e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b86ec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B86ECu;
    SET_GPR_U32(ctx, 31, 0x1B86F4u);
    ctx->pc = 0x1B86F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86ECu;
            // 0x1b86f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86F4u; }
        if (ctx->pc != 0x1B86F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86F4u; }
        if (ctx->pc != 0x1B86F4u) { return; }
    }
    ctx->pc = 0x1B86F4u;
    // 0x1b86f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b86f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b86f8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B86F8u;
    SET_GPR_U32(ctx, 31, 0x1B8700u);
    ctx->pc = 0x1B86FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86F8u;
            // 0x1b86fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8700u; }
        if (ctx->pc != 0x1B8700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8700u; }
        if (ctx->pc != 0x1B8700u) { return; }
    }
    ctx->pc = 0x1B8700u;
    // 0x1b8700: 0x2404010c  addiu       $a0, $zero, 0x10C
    ctx->pc = 0x1b8700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    // 0x1b8704: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1B8704u;
    SET_GPR_U32(ctx, 31, 0x1B870Cu);
    ctx->pc = 0x1B8708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8704u;
            // 0x1b8708: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B870Cu; }
        if (ctx->pc != 0x1B870Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B870Cu; }
        if (ctx->pc != 0x1B870Cu) { return; }
    }
    ctx->pc = 0x1B870Cu;
    // 0x1b870c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b870cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8714: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8714u;
    SET_GPR_U32(ctx, 31, 0x1B871Cu);
    ctx->pc = 0x1B8718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8714u;
            // 0x1b8718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B871Cu; }
        if (ctx->pc != 0x1B871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B871Cu; }
        if (ctx->pc != 0x1B871Cu) { return; }
    }
    ctx->pc = 0x1B871Cu;
    // 0x1b871c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b871cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8720: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8720u;
    SET_GPR_U32(ctx, 31, 0x1B8728u);
    ctx->pc = 0x1B8724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8720u;
            // 0x1b8724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8728u; }
        if (ctx->pc != 0x1B8728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8728u; }
        if (ctx->pc != 0x1B8728u) { return; }
    }
    ctx->pc = 0x1B8728u;
    // 0x1b8728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b872c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B872Cu;
    SET_GPR_U32(ctx, 31, 0x1B8734u);
    ctx->pc = 0x1B8730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B872Cu;
            // 0x1b8730: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8734u; }
        if (ctx->pc != 0x1B8734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8734u; }
        if (ctx->pc != 0x1B8734u) { return; }
    }
    ctx->pc = 0x1B8734u;
    // 0x1b8734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8738: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8738u;
    SET_GPR_U32(ctx, 31, 0x1B8740u);
    ctx->pc = 0x1B873Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8738u;
            // 0x1b873c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8740u; }
        if (ctx->pc != 0x1B8740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8740u; }
        if (ctx->pc != 0x1B8740u) { return; }
    }
    ctx->pc = 0x1B8740u;
    // 0x1b8740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8744: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8744u;
    SET_GPR_U32(ctx, 31, 0x1B874Cu);
    ctx->pc = 0x1B8748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8744u;
            // 0x1b8748: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B874Cu; }
        if (ctx->pc != 0x1B874Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B874Cu; }
        if (ctx->pc != 0x1B874Cu) { return; }
    }
    ctx->pc = 0x1B874Cu;
    // 0x1b874c: 0x2404010d  addiu       $a0, $zero, 0x10D
    ctx->pc = 0x1b874cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
    // 0x1b8750: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1B8750u;
    SET_GPR_U32(ctx, 31, 0x1B8758u);
    ctx->pc = 0x1B8754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8750u;
            // 0x1b8754: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8758u; }
        if (ctx->pc != 0x1B8758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8758u; }
        if (ctx->pc != 0x1B8758u) { return; }
    }
    ctx->pc = 0x1B8758u;
    // 0x1b8758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b875c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b875cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8760: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8760u;
    SET_GPR_U32(ctx, 31, 0x1B8768u);
    ctx->pc = 0x1B8764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8760u;
            // 0x1b8764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8768u; }
        if (ctx->pc != 0x1B8768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8768u; }
        if (ctx->pc != 0x1B8768u) { return; }
    }
    ctx->pc = 0x1B8768u;
    // 0x1b8768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b876c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B876Cu;
    SET_GPR_U32(ctx, 31, 0x1B8774u);
    ctx->pc = 0x1B8770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B876Cu;
            // 0x1b8770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8774u; }
        if (ctx->pc != 0x1B8774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8774u; }
        if (ctx->pc != 0x1B8774u) { return; }
    }
    ctx->pc = 0x1B8774u;
    // 0x1b8774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8778: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8778u;
    SET_GPR_U32(ctx, 31, 0x1B8780u);
    ctx->pc = 0x1B877Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8778u;
            // 0x1b877c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8780u; }
        if (ctx->pc != 0x1B8780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8780u; }
        if (ctx->pc != 0x1B8780u) { return; }
    }
    ctx->pc = 0x1B8780u;
    // 0x1b8780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8784: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8784u;
    SET_GPR_U32(ctx, 31, 0x1B878Cu);
    ctx->pc = 0x1B8788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8784u;
            // 0x1b8788: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B878Cu; }
        if (ctx->pc != 0x1B878Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B878Cu; }
        if (ctx->pc != 0x1B878Cu) { return; }
    }
    ctx->pc = 0x1B878Cu;
    // 0x1b878c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b878cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8790: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B8790u;
    SET_GPR_U32(ctx, 31, 0x1B8798u);
    ctx->pc = 0x1B8794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8790u;
            // 0x1b8794: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8798u; }
        if (ctx->pc != 0x1B8798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8798u; }
        if (ctx->pc != 0x1B8798u) { return; }
    }
    ctx->pc = 0x1B8798u;
    // 0x1b8798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b879c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b879cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b87a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B87A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B87A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87A0u;
            // 0x1b87a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B87A8u;
}

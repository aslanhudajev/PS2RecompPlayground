#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitStage8TrueBoss_Hontai
// Address: 0x1ed270 - 0x1ed2ec
void InitStage8TrueBoss_Hontai_0x1ed270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitStage8TrueBoss_Hontai_0x1ed270");
#endif

    ctx->pc = 0x1ed270u;

    // 0x1ed270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed274: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x1ed274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1ed278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ed278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ed27c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1ed27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1ed280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ed280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed284: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1ed284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ed288: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1ED288u;
    SET_GPR_U32(ctx, 31, 0x1ED290u);
    ctx->pc = 0x1ED28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED288u;
            // 0x1ed28c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED290u; }
        if (ctx->pc != 0x1ED290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED290u; }
        if (ctx->pc != 0x1ED290u) { return; }
    }
    ctx->pc = 0x1ED290u;
    // 0x1ed290: 0x24040122  addiu       $a0, $zero, 0x122
    ctx->pc = 0x1ed290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x1ed294: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1ED294u;
    SET_GPR_U32(ctx, 31, 0x1ED29Cu);
    ctx->pc = 0x1ED298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED294u;
            // 0x1ed298: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED29Cu; }
        if (ctx->pc != 0x1ED29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED29Cu; }
        if (ctx->pc != 0x1ED29Cu) { return; }
    }
    ctx->pc = 0x1ED29Cu;
    // 0x1ed29c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ed29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ed2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2a4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ED2A4u;
    SET_GPR_U32(ctx, 31, 0x1ED2ACu);
    ctx->pc = 0x1ED2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2A4u;
            // 0x1ed2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2ACu; }
        if (ctx->pc != 0x1ED2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2ACu; }
        if (ctx->pc != 0x1ED2ACu) { return; }
    }
    ctx->pc = 0x1ED2ACu;
    // 0x1ed2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2b0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ED2B0u;
    SET_GPR_U32(ctx, 31, 0x1ED2B8u);
    ctx->pc = 0x1ED2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2B0u;
            // 0x1ed2b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2B8u; }
        if (ctx->pc != 0x1ED2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2B8u; }
        if (ctx->pc != 0x1ED2B8u) { return; }
    }
    ctx->pc = 0x1ED2B8u;
    // 0x1ed2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2bc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ED2BCu;
    SET_GPR_U32(ctx, 31, 0x1ED2C4u);
    ctx->pc = 0x1ED2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2BCu;
            // 0x1ed2c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2C4u; }
        if (ctx->pc != 0x1ED2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2C4u; }
        if (ctx->pc != 0x1ED2C4u) { return; }
    }
    ctx->pc = 0x1ED2C4u;
    // 0x1ed2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2c8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ED2C8u;
    SET_GPR_U32(ctx, 31, 0x1ED2D0u);
    ctx->pc = 0x1ED2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2C8u;
            // 0x1ed2cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2D0u; }
        if (ctx->pc != 0x1ED2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2D0u; }
        if (ctx->pc != 0x1ED2D0u) { return; }
    }
    ctx->pc = 0x1ED2D0u;
    // 0x1ed2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2d4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ED2D4u;
    SET_GPR_U32(ctx, 31, 0x1ED2DCu);
    ctx->pc = 0x1ED2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2D4u;
            // 0x1ed2d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2DCu; }
        if (ctx->pc != 0x1ED2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2DCu; }
        if (ctx->pc != 0x1ED2DCu) { return; }
    }
    ctx->pc = 0x1ED2DCu;
    // 0x1ed2dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed2e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2E4u;
            // 0x1ed2e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED2ECu;
}

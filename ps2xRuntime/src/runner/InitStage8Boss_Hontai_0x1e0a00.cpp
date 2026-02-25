#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitStage8Boss_Hontai
// Address: 0x1e0a00 - 0x1e0a90
void InitStage8Boss_Hontai_0x1e0a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitStage8Boss_Hontai_0x1e0a00");
#endif

    ctx->pc = 0x1e0a00u;

    // 0x1e0a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0a04: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x1e0a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x1e0a08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e0a0c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1e0a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e0a10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e0a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0a18: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E0A18u;
    SET_GPR_U32(ctx, 31, 0x1E0A20u);
    ctx->pc = 0x1E0A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A18u;
            // 0x1e0a1c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A20u; }
        if (ctx->pc != 0x1E0A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A20u; }
        if (ctx->pc != 0x1E0A20u) { return; }
    }
    ctx->pc = 0x1E0A20u;
    // 0x1e0a20: 0x24040121  addiu       $a0, $zero, 0x121
    ctx->pc = 0x1e0a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 289));
    // 0x1e0a24: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1e0a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e0a28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a2c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E0A2Cu;
    SET_GPR_U32(ctx, 31, 0x1E0A34u);
    ctx->pc = 0x1E0A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A2Cu;
            // 0x1e0a30: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A34u; }
        if (ctx->pc != 0x1E0A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A34u; }
        if (ctx->pc != 0x1E0A34u) { return; }
    }
    ctx->pc = 0x1E0A34u;
    // 0x1e0a34: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x1e0a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x1e0a38: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1E0A38u;
    SET_GPR_U32(ctx, 31, 0x1E0A40u);
    ctx->pc = 0x1E0A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A38u;
            // 0x1e0a3c: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A40u; }
        if (ctx->pc != 0x1E0A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A40u; }
        if (ctx->pc != 0x1E0A40u) { return; }
    }
    ctx->pc = 0x1E0A40u;
    // 0x1e0a40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a48: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E0A48u;
    SET_GPR_U32(ctx, 31, 0x1E0A50u);
    ctx->pc = 0x1E0A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A48u;
            // 0x1e0a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A50u; }
        if (ctx->pc != 0x1E0A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A50u; }
        if (ctx->pc != 0x1E0A50u) { return; }
    }
    ctx->pc = 0x1E0A50u;
    // 0x1e0a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a54: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E0A54u;
    SET_GPR_U32(ctx, 31, 0x1E0A5Cu);
    ctx->pc = 0x1E0A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A54u;
            // 0x1e0a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A5Cu; }
        if (ctx->pc != 0x1E0A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A5Cu; }
        if (ctx->pc != 0x1E0A5Cu) { return; }
    }
    ctx->pc = 0x1E0A5Cu;
    // 0x1e0a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a60: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E0A60u;
    SET_GPR_U32(ctx, 31, 0x1E0A68u);
    ctx->pc = 0x1E0A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A60u;
            // 0x1e0a64: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A68u; }
        if (ctx->pc != 0x1E0A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A68u; }
        if (ctx->pc != 0x1E0A68u) { return; }
    }
    ctx->pc = 0x1E0A68u;
    // 0x1e0a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a6c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E0A6Cu;
    SET_GPR_U32(ctx, 31, 0x1E0A74u);
    ctx->pc = 0x1E0A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A6Cu;
            // 0x1e0a70: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A74u; }
        if (ctx->pc != 0x1E0A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A74u; }
        if (ctx->pc != 0x1E0A74u) { return; }
    }
    ctx->pc = 0x1E0A74u;
    // 0x1e0a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a78: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E0A78u;
    SET_GPR_U32(ctx, 31, 0x1E0A80u);
    ctx->pc = 0x1E0A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A78u;
            // 0x1e0a7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A80u; }
        if (ctx->pc != 0x1E0A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A80u; }
        if (ctx->pc != 0x1E0A80u) { return; }
    }
    ctx->pc = 0x1E0A80u;
    // 0x1e0a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A88u;
            // 0x1e0a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0A90u;
}

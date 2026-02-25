#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn2_01_Hontai
// Address: 0x166f00 - 0x166f7c
void InitEn2_01_Hontai_0x166f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn2_01_Hontai_0x166f00");
#endif

    ctx->pc = 0x166f00u;

    // 0x166f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166f04: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x166f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x166f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166f0c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x166f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x166f10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x166f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166f14: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x166f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x166f18: 0xc05c20c  jal         func_170830
    ctx->pc = 0x166F18u;
    SET_GPR_U32(ctx, 31, 0x166F20u);
    ctx->pc = 0x166F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166F18u;
            // 0x166f1c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F20u; }
        if (ctx->pc != 0x166F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F20u; }
        if (ctx->pc != 0x166F20u) { return; }
    }
    ctx->pc = 0x166F20u;
    // 0x166f20: 0x24040089  addiu       $a0, $zero, 0x89
    ctx->pc = 0x166f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x166f24: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x166F24u;
    SET_GPR_U32(ctx, 31, 0x166F2Cu);
    ctx->pc = 0x166F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166F24u;
            // 0x166f28: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F2Cu; }
        if (ctx->pc != 0x166F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F2Cu; }
        if (ctx->pc != 0x166F2Cu) { return; }
    }
    ctx->pc = 0x166F2Cu;
    // 0x166f2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f34: 0xc060630  jal         func_1818C0
    ctx->pc = 0x166F34u;
    SET_GPR_U32(ctx, 31, 0x166F3Cu);
    ctx->pc = 0x166F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166F34u;
            // 0x166f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F3Cu; }
        if (ctx->pc != 0x166F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F3Cu; }
        if (ctx->pc != 0x166F3Cu) { return; }
    }
    ctx->pc = 0x166F3Cu;
    // 0x166f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f40: 0xc060630  jal         func_1818C0
    ctx->pc = 0x166F40u;
    SET_GPR_U32(ctx, 31, 0x166F48u);
    ctx->pc = 0x166F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166F40u;
            // 0x166f44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F48u; }
        if (ctx->pc != 0x166F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F48u; }
        if (ctx->pc != 0x166F48u) { return; }
    }
    ctx->pc = 0x166F48u;
    // 0x166f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f4c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x166F4Cu;
    SET_GPR_U32(ctx, 31, 0x166F54u);
    ctx->pc = 0x166F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166F4Cu;
            // 0x166f50: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F54u; }
        if (ctx->pc != 0x166F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F54u; }
        if (ctx->pc != 0x166F54u) { return; }
    }
    ctx->pc = 0x166F54u;
    // 0x166f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f58: 0xc060630  jal         func_1818C0
    ctx->pc = 0x166F58u;
    SET_GPR_U32(ctx, 31, 0x166F60u);
    ctx->pc = 0x166F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166F58u;
            // 0x166f5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F60u; }
        if (ctx->pc != 0x166F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F60u; }
        if (ctx->pc != 0x166F60u) { return; }
    }
    ctx->pc = 0x166F60u;
    // 0x166f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f64: 0xc060630  jal         func_1818C0
    ctx->pc = 0x166F64u;
    SET_GPR_U32(ctx, 31, 0x166F6Cu);
    ctx->pc = 0x166F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166F64u;
            // 0x166f68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F6Cu; }
        if (ctx->pc != 0x166F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F6Cu; }
        if (ctx->pc != 0x166F6Cu) { return; }
    }
    ctx->pc = 0x166F6Cu;
    // 0x166f6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166f74: 0x3e00008  jr          $ra
    ctx->pc = 0x166F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166F74u;
            // 0x166f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166F7Cu;
}

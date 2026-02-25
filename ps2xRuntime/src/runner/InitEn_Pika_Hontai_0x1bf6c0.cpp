#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn_Pika_Hontai
// Address: 0x1bf6c0 - 0x1bf73c
void InitEn_Pika_Hontai_0x1bf6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn_Pika_Hontai_0x1bf6c0");
#endif

    ctx->pc = 0x1bf6c0u;

    // 0x1bf6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf6c4: 0x24040136  addiu       $a0, $zero, 0x136
    ctx->pc = 0x1bf6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x1bf6c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf6cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1bf6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bf6d0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1BF6D0u;
    SET_GPR_U32(ctx, 31, 0x1BF6D8u);
    ctx->pc = 0x1BF6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF6D0u;
            // 0x1bf6d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6D8u; }
        if (ctx->pc != 0x1BF6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6D8u; }
        if (ctx->pc != 0x1BF6D8u) { return; }
    }
    ctx->pc = 0x1BF6D8u;
    // 0x1bf6d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bf6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bf6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf6e0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1bf6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1bf6e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf6e8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1BF6E8u;
    SET_GPR_U32(ctx, 31, 0x1BF6F0u);
    ctx->pc = 0x1BF6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF6E8u;
            // 0x1bf6ec: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6F0u; }
        if (ctx->pc != 0x1BF6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6F0u; }
        if (ctx->pc != 0x1BF6F0u) { return; }
    }
    ctx->pc = 0x1BF6F0u;
    // 0x1bf6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6f4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1BF6F4u;
    SET_GPR_U32(ctx, 31, 0x1BF6FCu);
    ctx->pc = 0x1BF6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF6F4u;
            // 0x1bf6f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6FCu; }
        if (ctx->pc != 0x1BF6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6FCu; }
        if (ctx->pc != 0x1BF6FCu) { return; }
    }
    ctx->pc = 0x1BF6FCu;
    // 0x1bf6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf700: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1BF700u;
    SET_GPR_U32(ctx, 31, 0x1BF708u);
    ctx->pc = 0x1BF704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF700u;
            // 0x1bf704: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF708u; }
        if (ctx->pc != 0x1BF708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF708u; }
        if (ctx->pc != 0x1BF708u) { return; }
    }
    ctx->pc = 0x1BF708u;
    // 0x1bf708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf70c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1BF70Cu;
    SET_GPR_U32(ctx, 31, 0x1BF714u);
    ctx->pc = 0x1BF710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF70Cu;
            // 0x1bf710: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF714u; }
        if (ctx->pc != 0x1BF714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF714u; }
        if (ctx->pc != 0x1BF714u) { return; }
    }
    ctx->pc = 0x1BF714u;
    // 0x1bf714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf718: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1BF718u;
    SET_GPR_U32(ctx, 31, 0x1BF720u);
    ctx->pc = 0x1BF71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF718u;
            // 0x1bf71c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF720u; }
        if (ctx->pc != 0x1BF720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF720u; }
        if (ctx->pc != 0x1BF720u) { return; }
    }
    ctx->pc = 0x1BF720u;
    // 0x1bf720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf724: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1BF724u;
    SET_GPR_U32(ctx, 31, 0x1BF72Cu);
    ctx->pc = 0x1BF728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF724u;
            // 0x1bf728: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF72Cu; }
        if (ctx->pc != 0x1BF72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF72Cu; }
        if (ctx->pc != 0x1BF72Cu) { return; }
    }
    ctx->pc = 0x1BF72Cu;
    // 0x1bf72c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf734: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF734u;
            // 0x1bf738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF73Cu;
}

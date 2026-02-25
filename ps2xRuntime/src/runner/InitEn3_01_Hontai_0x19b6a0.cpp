#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn3_01_Hontai
// Address: 0x19b6a0 - 0x19b71c
void InitEn3_01_Hontai_0x19b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn3_01_Hontai_0x19b6a0");
#endif

    ctx->pc = 0x19b6a0u;

    // 0x19b6a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b6a4: 0x240400a6  addiu       $a0, $zero, 0xA6
    ctx->pc = 0x19b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x19b6a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b6ac: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x19b6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x19b6b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19b6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b6b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x19b6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b6b8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x19B6B8u;
    SET_GPR_U32(ctx, 31, 0x19B6C0u);
    ctx->pc = 0x19B6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6B8u;
            // 0x19b6bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6C0u; }
        if (ctx->pc != 0x19B6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6C0u; }
        if (ctx->pc != 0x19B6C0u) { return; }
    }
    ctx->pc = 0x19B6C0u;
    // 0x19b6c0: 0x240400a1  addiu       $a0, $zero, 0xA1
    ctx->pc = 0x19b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x19b6c4: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x19B6C4u;
    SET_GPR_U32(ctx, 31, 0x19B6CCu);
    ctx->pc = 0x19B6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6C4u;
            // 0x19b6c8: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6CCu; }
        if (ctx->pc != 0x19B6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6CCu; }
        if (ctx->pc != 0x19B6CCu) { return; }
    }
    ctx->pc = 0x19B6CCu;
    // 0x19b6cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6d4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19B6D4u;
    SET_GPR_U32(ctx, 31, 0x19B6DCu);
    ctx->pc = 0x19B6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6D4u;
            // 0x19b6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6DCu; }
        if (ctx->pc != 0x19B6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6DCu; }
        if (ctx->pc != 0x19B6DCu) { return; }
    }
    ctx->pc = 0x19B6DCu;
    // 0x19b6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6e0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19B6E0u;
    SET_GPR_U32(ctx, 31, 0x19B6E8u);
    ctx->pc = 0x19B6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6E0u;
            // 0x19b6e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6E8u; }
        if (ctx->pc != 0x19B6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6E8u; }
        if (ctx->pc != 0x19B6E8u) { return; }
    }
    ctx->pc = 0x19B6E8u;
    // 0x19b6e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6ec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19B6ECu;
    SET_GPR_U32(ctx, 31, 0x19B6F4u);
    ctx->pc = 0x19B6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6ECu;
            // 0x19b6f0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6F4u; }
        if (ctx->pc != 0x19B6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6F4u; }
        if (ctx->pc != 0x19B6F4u) { return; }
    }
    ctx->pc = 0x19B6F4u;
    // 0x19b6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6f8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19B6F8u;
    SET_GPR_U32(ctx, 31, 0x19B700u);
    ctx->pc = 0x19B6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6F8u;
            // 0x19b6fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B700u; }
        if (ctx->pc != 0x19B700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B700u; }
        if (ctx->pc != 0x19B700u) { return; }
    }
    ctx->pc = 0x19B700u;
    // 0x19b700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b704: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19B704u;
    SET_GPR_U32(ctx, 31, 0x19B70Cu);
    ctx->pc = 0x19B708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B704u;
            // 0x19b708: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B70Cu; }
        if (ctx->pc != 0x19B70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B70Cu; }
        if (ctx->pc != 0x19B70Cu) { return; }
    }
    ctx->pc = 0x19B70Cu;
    // 0x19b70c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b710: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b714: 0x3e00008  jr          $ra
    ctx->pc = 0x19B714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B714u;
            // 0x19b718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B71Cu;
}

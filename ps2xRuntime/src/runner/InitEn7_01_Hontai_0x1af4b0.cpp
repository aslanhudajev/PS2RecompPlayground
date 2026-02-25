#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn7_01_Hontai
// Address: 0x1af4b0 - 0x1af52c
void InitEn7_01_Hontai_0x1af4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn7_01_Hontai_0x1af4b0");
#endif

    ctx->pc = 0x1af4b0u;

    // 0x1af4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af4b4: 0x24040113  addiu       $a0, $zero, 0x113
    ctx->pc = 0x1af4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    // 0x1af4b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af4bc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1af4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1af4c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1af4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af4c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1af4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af4c8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1AF4C8u;
    SET_GPR_U32(ctx, 31, 0x1AF4D0u);
    ctx->pc = 0x1AF4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4C8u;
            // 0x1af4cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4D0u; }
        if (ctx->pc != 0x1AF4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4D0u; }
        if (ctx->pc != 0x1AF4D0u) { return; }
    }
    ctx->pc = 0x1AF4D0u;
    // 0x1af4d0: 0x2404010e  addiu       $a0, $zero, 0x10E
    ctx->pc = 0x1af4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x1af4d4: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1AF4D4u;
    SET_GPR_U32(ctx, 31, 0x1AF4DCu);
    ctx->pc = 0x1AF4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4D4u;
            // 0x1af4d8: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4DCu; }
        if (ctx->pc != 0x1AF4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4DCu; }
        if (ctx->pc != 0x1AF4DCu) { return; }
    }
    ctx->pc = 0x1AF4DCu;
    // 0x1af4dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1af4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4e4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AF4E4u;
    SET_GPR_U32(ctx, 31, 0x1AF4ECu);
    ctx->pc = 0x1AF4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4E4u;
            // 0x1af4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4ECu; }
        if (ctx->pc != 0x1AF4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4ECu; }
        if (ctx->pc != 0x1AF4ECu) { return; }
    }
    ctx->pc = 0x1AF4ECu;
    // 0x1af4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4f0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AF4F0u;
    SET_GPR_U32(ctx, 31, 0x1AF4F8u);
    ctx->pc = 0x1AF4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4F0u;
            // 0x1af4f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4F8u; }
        if (ctx->pc != 0x1AF4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4F8u; }
        if (ctx->pc != 0x1AF4F8u) { return; }
    }
    ctx->pc = 0x1AF4F8u;
    // 0x1af4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4fc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AF4FCu;
    SET_GPR_U32(ctx, 31, 0x1AF504u);
    ctx->pc = 0x1AF500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4FCu;
            // 0x1af500: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF504u; }
        if (ctx->pc != 0x1AF504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF504u; }
        if (ctx->pc != 0x1AF504u) { return; }
    }
    ctx->pc = 0x1AF504u;
    // 0x1af504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af508: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AF508u;
    SET_GPR_U32(ctx, 31, 0x1AF510u);
    ctx->pc = 0x1AF50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF508u;
            // 0x1af50c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF510u; }
        if (ctx->pc != 0x1AF510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF510u; }
        if (ctx->pc != 0x1AF510u) { return; }
    }
    ctx->pc = 0x1AF510u;
    // 0x1af510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af514: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AF514u;
    SET_GPR_U32(ctx, 31, 0x1AF51Cu);
    ctx->pc = 0x1AF518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF514u;
            // 0x1af518: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF51Cu; }
        if (ctx->pc != 0x1AF51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF51Cu; }
        if (ctx->pc != 0x1AF51Cu) { return; }
    }
    ctx->pc = 0x1AF51Cu;
    // 0x1af51c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af524: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF524u;
            // 0x1af528: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF52Cu;
}

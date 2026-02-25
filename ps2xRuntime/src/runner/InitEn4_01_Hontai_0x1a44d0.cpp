#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn4_01_Hontai
// Address: 0x1a44d0 - 0x1a454c
void InitEn4_01_Hontai_0x1a44d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn4_01_Hontai_0x1a44d0");
#endif

    ctx->pc = 0x1a44d0u;

    // 0x1a44d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a44d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a44d4: 0x240400c3  addiu       $a0, $zero, 0xC3
    ctx->pc = 0x1a44d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    // 0x1a44d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a44d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a44dc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1a44dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1a44e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a44e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a44e4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1a44e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a44e8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1A44E8u;
    SET_GPR_U32(ctx, 31, 0x1A44F0u);
    ctx->pc = 0x1A44ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A44E8u;
            // 0x1a44ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44F0u; }
        if (ctx->pc != 0x1A44F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44F0u; }
        if (ctx->pc != 0x1A44F0u) { return; }
    }
    ctx->pc = 0x1A44F0u;
    // 0x1a44f0: 0x240400be  addiu       $a0, $zero, 0xBE
    ctx->pc = 0x1a44f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x1a44f4: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1A44F4u;
    SET_GPR_U32(ctx, 31, 0x1A44FCu);
    ctx->pc = 0x1A44F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A44F4u;
            // 0x1a44f8: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44FCu; }
        if (ctx->pc != 0x1A44FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44FCu; }
        if (ctx->pc != 0x1A44FCu) { return; }
    }
    ctx->pc = 0x1A44FCu;
    // 0x1a44fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a44fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4504: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A4504u;
    SET_GPR_U32(ctx, 31, 0x1A450Cu);
    ctx->pc = 0x1A4508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4504u;
            // 0x1a4508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A450Cu; }
        if (ctx->pc != 0x1A450Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A450Cu; }
        if (ctx->pc != 0x1A450Cu) { return; }
    }
    ctx->pc = 0x1A450Cu;
    // 0x1a450c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4510: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A4510u;
    SET_GPR_U32(ctx, 31, 0x1A4518u);
    ctx->pc = 0x1A4514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4510u;
            // 0x1a4514: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4518u; }
        if (ctx->pc != 0x1A4518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4518u; }
        if (ctx->pc != 0x1A4518u) { return; }
    }
    ctx->pc = 0x1A4518u;
    // 0x1a4518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a451c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A451Cu;
    SET_GPR_U32(ctx, 31, 0x1A4524u);
    ctx->pc = 0x1A4520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A451Cu;
            // 0x1a4520: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4524u; }
        if (ctx->pc != 0x1A4524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4524u; }
        if (ctx->pc != 0x1A4524u) { return; }
    }
    ctx->pc = 0x1A4524u;
    // 0x1a4524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4528: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A4528u;
    SET_GPR_U32(ctx, 31, 0x1A4530u);
    ctx->pc = 0x1A452Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4528u;
            // 0x1a452c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4530u; }
        if (ctx->pc != 0x1A4530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4530u; }
        if (ctx->pc != 0x1A4530u) { return; }
    }
    ctx->pc = 0x1A4530u;
    // 0x1a4530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4534: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A4534u;
    SET_GPR_U32(ctx, 31, 0x1A453Cu);
    ctx->pc = 0x1A4538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4534u;
            // 0x1a4538: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A453Cu; }
        if (ctx->pc != 0x1A453Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A453Cu; }
        if (ctx->pc != 0x1A453Cu) { return; }
    }
    ctx->pc = 0x1A453Cu;
    // 0x1a453c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a453cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4544: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4544u;
            // 0x1a4548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A454Cu;
}

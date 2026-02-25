#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn7_03_Hontai
// Address: 0x1b17b0 - 0x1b1818
void InitEn7_03_Hontai_0x1b17b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn7_03_Hontai_0x1b17b0");
#endif

    ctx->pc = 0x1b17b0u;

    // 0x1b17b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b17b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b17b4: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x1b17b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1b17b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b17b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b17bc: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x1b17bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1b17c0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1B17C0u;
    SET_GPR_U32(ctx, 31, 0x1B17C8u);
    ctx->pc = 0x1B17C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17C0u;
            // 0x1b17c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17C8u; }
        if (ctx->pc != 0x1B17C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17C8u; }
        if (ctx->pc != 0x1B17C8u) { return; }
    }
    ctx->pc = 0x1B17C8u;
    // 0x1b17c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b17c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b17cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b17ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b17d0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B17D0u;
    SET_GPR_U32(ctx, 31, 0x1B17D8u);
    ctx->pc = 0x1B17D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17D0u;
            // 0x1b17d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17D8u; }
        if (ctx->pc != 0x1B17D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17D8u; }
        if (ctx->pc != 0x1B17D8u) { return; }
    }
    ctx->pc = 0x1B17D8u;
    // 0x1b17d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b17d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b17dc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B17DCu;
    SET_GPR_U32(ctx, 31, 0x1B17E4u);
    ctx->pc = 0x1B17E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17DCu;
            // 0x1b17e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17E4u; }
        if (ctx->pc != 0x1B17E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17E4u; }
        if (ctx->pc != 0x1B17E4u) { return; }
    }
    ctx->pc = 0x1B17E4u;
    // 0x1b17e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b17e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b17e8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B17E8u;
    SET_GPR_U32(ctx, 31, 0x1B17F0u);
    ctx->pc = 0x1B17ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17E8u;
            // 0x1b17ec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17F0u; }
        if (ctx->pc != 0x1B17F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17F0u; }
        if (ctx->pc != 0x1B17F0u) { return; }
    }
    ctx->pc = 0x1B17F0u;
    // 0x1b17f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b17f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b17f4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B17F4u;
    SET_GPR_U32(ctx, 31, 0x1B17FCu);
    ctx->pc = 0x1B17F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17F4u;
            // 0x1b17f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17FCu; }
        if (ctx->pc != 0x1B17FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17FCu; }
        if (ctx->pc != 0x1B17FCu) { return; }
    }
    ctx->pc = 0x1B17FCu;
    // 0x1b17fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b17fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1800: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B1800u;
    SET_GPR_U32(ctx, 31, 0x1B1808u);
    ctx->pc = 0x1B1804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1800u;
            // 0x1b1804: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1808u; }
        if (ctx->pc != 0x1B1808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1808u; }
        if (ctx->pc != 0x1B1808u) { return; }
    }
    ctx->pc = 0x1B1808u;
    // 0x1b1808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b180c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b180cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1810: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1810u;
            // 0x1b1814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1818u;
}

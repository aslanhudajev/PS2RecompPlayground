#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn6_02_Hontai
// Address: 0x1aa5a0 - 0x1aa608
void InitEn6_02_Hontai_0x1aa5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn6_02_Hontai_0x1aa5a0");
#endif

    ctx->pc = 0x1aa5a0u;

    // 0x1aa5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa5a4: 0x240400f7  addiu       $a0, $zero, 0xF7
    ctx->pc = 0x1aa5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x1aa5a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aa5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aa5ac: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1aa5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1aa5b0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1AA5B0u;
    SET_GPR_U32(ctx, 31, 0x1AA5B8u);
    ctx->pc = 0x1AA5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5B0u;
            // 0x1aa5b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5B8u; }
        if (ctx->pc != 0x1AA5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5B8u; }
        if (ctx->pc != 0x1AA5B8u) { return; }
    }
    ctx->pc = 0x1AA5B8u;
    // 0x1aa5b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5c0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AA5C0u;
    SET_GPR_U32(ctx, 31, 0x1AA5C8u);
    ctx->pc = 0x1AA5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5C0u;
            // 0x1aa5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5C8u; }
        if (ctx->pc != 0x1AA5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5C8u; }
        if (ctx->pc != 0x1AA5C8u) { return; }
    }
    ctx->pc = 0x1AA5C8u;
    // 0x1aa5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5cc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AA5CCu;
    SET_GPR_U32(ctx, 31, 0x1AA5D4u);
    ctx->pc = 0x1AA5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5CCu;
            // 0x1aa5d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5D4u; }
        if (ctx->pc != 0x1AA5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5D4u; }
        if (ctx->pc != 0x1AA5D4u) { return; }
    }
    ctx->pc = 0x1AA5D4u;
    // 0x1aa5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5d8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AA5D8u;
    SET_GPR_U32(ctx, 31, 0x1AA5E0u);
    ctx->pc = 0x1AA5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5D8u;
            // 0x1aa5dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5E0u; }
        if (ctx->pc != 0x1AA5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5E0u; }
        if (ctx->pc != 0x1AA5E0u) { return; }
    }
    ctx->pc = 0x1AA5E0u;
    // 0x1aa5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5e4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AA5E4u;
    SET_GPR_U32(ctx, 31, 0x1AA5ECu);
    ctx->pc = 0x1AA5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5E4u;
            // 0x1aa5e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5ECu; }
        if (ctx->pc != 0x1AA5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5ECu; }
        if (ctx->pc != 0x1AA5ECu) { return; }
    }
    ctx->pc = 0x1AA5ECu;
    // 0x1aa5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5f0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AA5F0u;
    SET_GPR_U32(ctx, 31, 0x1AA5F8u);
    ctx->pc = 0x1AA5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5F0u;
            // 0x1aa5f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5F8u; }
        if (ctx->pc != 0x1AA5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5F8u; }
        if (ctx->pc != 0x1AA5F8u) { return; }
    }
    ctx->pc = 0x1AA5F8u;
    // 0x1aa5f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aa5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa5fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa600: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA600u;
            // 0x1aa604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA608u;
}

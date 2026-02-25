#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEnex1_02_Hontai
// Address: 0x1cc720 - 0x1cc788
void InitEnex1_02_Hontai_0x1cc720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEnex1_02_Hontai_0x1cc720");
#endif

    ctx->pc = 0x1cc720u;

    // 0x1cc720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc724: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1cc724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1cc728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc72c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1cc72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1cc730: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1CC730u;
    SET_GPR_U32(ctx, 31, 0x1CC738u);
    ctx->pc = 0x1CC734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC730u;
            // 0x1cc734: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC738u; }
        if (ctx->pc != 0x1CC738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC738u; }
        if (ctx->pc != 0x1CC738u) { return; }
    }
    ctx->pc = 0x1CC738u;
    // 0x1cc738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cc738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc73c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc740: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CC740u;
    SET_GPR_U32(ctx, 31, 0x1CC748u);
    ctx->pc = 0x1CC744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC740u;
            // 0x1cc744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC748u; }
        if (ctx->pc != 0x1CC748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC748u; }
        if (ctx->pc != 0x1CC748u) { return; }
    }
    ctx->pc = 0x1CC748u;
    // 0x1cc748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc74c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CC74Cu;
    SET_GPR_U32(ctx, 31, 0x1CC754u);
    ctx->pc = 0x1CC750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC74Cu;
            // 0x1cc750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC754u; }
        if (ctx->pc != 0x1CC754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC754u; }
        if (ctx->pc != 0x1CC754u) { return; }
    }
    ctx->pc = 0x1CC754u;
    // 0x1cc754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc758: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CC758u;
    SET_GPR_U32(ctx, 31, 0x1CC760u);
    ctx->pc = 0x1CC75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC758u;
            // 0x1cc75c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC760u; }
        if (ctx->pc != 0x1CC760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC760u; }
        if (ctx->pc != 0x1CC760u) { return; }
    }
    ctx->pc = 0x1CC760u;
    // 0x1cc760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc764: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CC764u;
    SET_GPR_U32(ctx, 31, 0x1CC76Cu);
    ctx->pc = 0x1CC768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC764u;
            // 0x1cc768: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC76Cu; }
        if (ctx->pc != 0x1CC76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC76Cu; }
        if (ctx->pc != 0x1CC76Cu) { return; }
    }
    ctx->pc = 0x1CC76Cu;
    // 0x1cc76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc770: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CC770u;
    SET_GPR_U32(ctx, 31, 0x1CC778u);
    ctx->pc = 0x1CC774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC770u;
            // 0x1cc774: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC778u; }
        if (ctx->pc != 0x1CC778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC778u; }
        if (ctx->pc != 0x1CC778u) { return; }
    }
    ctx->pc = 0x1CC778u;
    // 0x1cc778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc77c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc780: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC780u;
            // 0x1cc784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC788u;
}

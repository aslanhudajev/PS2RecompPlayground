#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitStageex2Boss_Hontai
// Address: 0x1dbba0 - 0x1dbc1c
void InitStageex2Boss_Hontai_0x1dbba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitStageex2Boss_Hontai_0x1dbba0");
#endif

    ctx->pc = 0x1dbba0u;

    // 0x1dbba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbba4: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x1dbba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1dbba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dbba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dbbac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1dbbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1dbbb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dbbb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbb4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1dbbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dbbb8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1DBBB8u;
    SET_GPR_U32(ctx, 31, 0x1DBBC0u);
    ctx->pc = 0x1DBBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBB8u;
            // 0x1dbbbc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBC0u; }
        if (ctx->pc != 0x1DBBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBC0u; }
        if (ctx->pc != 0x1DBBC0u) { return; }
    }
    ctx->pc = 0x1DBBC0u;
    // 0x1dbbc0: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x1dbbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1dbbc4: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1DBBC4u;
    SET_GPR_U32(ctx, 31, 0x1DBBCCu);
    ctx->pc = 0x1DBBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBC4u;
            // 0x1dbbc8: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBCCu; }
        if (ctx->pc != 0x1DBBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBCCu; }
        if (ctx->pc != 0x1DBBCCu) { return; }
    }
    ctx->pc = 0x1DBBCCu;
    // 0x1dbbcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dbbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbd4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1DBBD4u;
    SET_GPR_U32(ctx, 31, 0x1DBBDCu);
    ctx->pc = 0x1DBBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBD4u;
            // 0x1dbbd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBDCu; }
        if (ctx->pc != 0x1DBBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBDCu; }
        if (ctx->pc != 0x1DBBDCu) { return; }
    }
    ctx->pc = 0x1DBBDCu;
    // 0x1dbbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbe0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1DBBE0u;
    SET_GPR_U32(ctx, 31, 0x1DBBE8u);
    ctx->pc = 0x1DBBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBE0u;
            // 0x1dbbe4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBE8u; }
        if (ctx->pc != 0x1DBBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBE8u; }
        if (ctx->pc != 0x1DBBE8u) { return; }
    }
    ctx->pc = 0x1DBBE8u;
    // 0x1dbbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1DBBECu;
    SET_GPR_U32(ctx, 31, 0x1DBBF4u);
    ctx->pc = 0x1DBBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBECu;
            // 0x1dbbf0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBF4u; }
        if (ctx->pc != 0x1DBBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBF4u; }
        if (ctx->pc != 0x1DBBF4u) { return; }
    }
    ctx->pc = 0x1DBBF4u;
    // 0x1dbbf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbf8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1DBBF8u;
    SET_GPR_U32(ctx, 31, 0x1DBC00u);
    ctx->pc = 0x1DBBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBF8u;
            // 0x1dbbfc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC00u; }
        if (ctx->pc != 0x1DBC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC00u; }
        if (ctx->pc != 0x1DBC00u) { return; }
    }
    ctx->pc = 0x1DBC00u;
    // 0x1dbc00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc04: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1DBC04u;
    SET_GPR_U32(ctx, 31, 0x1DBC0Cu);
    ctx->pc = 0x1DBC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC04u;
            // 0x1dbc08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC0Cu; }
        if (ctx->pc != 0x1DBC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC0Cu; }
        if (ctx->pc != 0x1DBC0Cu) { return; }
    }
    ctx->pc = 0x1DBC0Cu;
    // 0x1dbc0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbc10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dbc10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc14: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC14u;
            // 0x1dbc18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DBC1Cu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn1_01_Hontai
// Address: 0x1e8da0 - 0x1e8e1c
void InitEn1_01_Hontai_0x1e8da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn1_01_Hontai_0x1e8da0");
#endif

    ctx->pc = 0x1e8da0u;

    // 0x1e8da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8da4: 0x2404006d  addiu       $a0, $zero, 0x6D
    ctx->pc = 0x1e8da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x1e8da8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e8dac: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1e8dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1e8db0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e8db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8db4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1e8db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e8db8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E8DB8u;
    SET_GPR_U32(ctx, 31, 0x1E8DC0u);
    ctx->pc = 0x1E8DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DB8u;
            // 0x1e8dbc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DC0u; }
        if (ctx->pc != 0x1E8DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DC0u; }
        if (ctx->pc != 0x1E8DC0u) { return; }
    }
    ctx->pc = 0x1E8DC0u;
    // 0x1e8dc0: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x1e8dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1e8dc4: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1E8DC4u;
    SET_GPR_U32(ctx, 31, 0x1E8DCCu);
    ctx->pc = 0x1E8DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DC4u;
            // 0x1e8dc8: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DCCu; }
        if (ctx->pc != 0x1E8DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DCCu; }
        if (ctx->pc != 0x1E8DCCu) { return; }
    }
    ctx->pc = 0x1E8DCCu;
    // 0x1e8dcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8dd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8dd4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E8DD4u;
    SET_GPR_U32(ctx, 31, 0x1E8DDCu);
    ctx->pc = 0x1E8DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DD4u;
            // 0x1e8dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DDCu; }
        if (ctx->pc != 0x1E8DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DDCu; }
        if (ctx->pc != 0x1E8DDCu) { return; }
    }
    ctx->pc = 0x1E8DDCu;
    // 0x1e8ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8de0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E8DE0u;
    SET_GPR_U32(ctx, 31, 0x1E8DE8u);
    ctx->pc = 0x1E8DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DE0u;
            // 0x1e8de4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DE8u; }
        if (ctx->pc != 0x1E8DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DE8u; }
        if (ctx->pc != 0x1E8DE8u) { return; }
    }
    ctx->pc = 0x1E8DE8u;
    // 0x1e8de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8dec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E8DECu;
    SET_GPR_U32(ctx, 31, 0x1E8DF4u);
    ctx->pc = 0x1E8DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DECu;
            // 0x1e8df0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DF4u; }
        if (ctx->pc != 0x1E8DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DF4u; }
        if (ctx->pc != 0x1E8DF4u) { return; }
    }
    ctx->pc = 0x1E8DF4u;
    // 0x1e8df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8df8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E8DF8u;
    SET_GPR_U32(ctx, 31, 0x1E8E00u);
    ctx->pc = 0x1E8DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DF8u;
            // 0x1e8dfc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E00u; }
        if (ctx->pc != 0x1E8E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E00u; }
        if (ctx->pc != 0x1E8E00u) { return; }
    }
    ctx->pc = 0x1E8E00u;
    // 0x1e8e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e04: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E8E04u;
    SET_GPR_U32(ctx, 31, 0x1E8E0Cu);
    ctx->pc = 0x1E8E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E04u;
            // 0x1e8e08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E0Cu; }
        if (ctx->pc != 0x1E8E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E0Cu; }
        if (ctx->pc != 0x1E8E0Cu) { return; }
    }
    ctx->pc = 0x1E8E0Cu;
    // 0x1e8e0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8e14: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E14u;
            // 0x1e8e18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8E1Cu;
}

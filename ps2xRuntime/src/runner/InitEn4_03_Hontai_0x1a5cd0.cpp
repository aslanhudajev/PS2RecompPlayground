#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn4_03_Hontai
// Address: 0x1a5cd0 - 0x1a5d38
void InitEn4_03_Hontai_0x1a5cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn4_03_Hontai_0x1a5cd0");
#endif

    ctx->pc = 0x1a5cd0u;

    // 0x1a5cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5cd4: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x1a5cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a5cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5cdc: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x1a5cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1a5ce0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1A5CE0u;
    SET_GPR_U32(ctx, 31, 0x1A5CE8u);
    ctx->pc = 0x1A5CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CE0u;
            // 0x1a5ce4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5CE8u; }
        if (ctx->pc != 0x1A5CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5CE8u; }
        if (ctx->pc != 0x1A5CE8u) { return; }
    }
    ctx->pc = 0x1A5CE8u;
    // 0x1a5ce8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a5ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5cf0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A5CF0u;
    SET_GPR_U32(ctx, 31, 0x1A5CF8u);
    ctx->pc = 0x1A5CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CF0u;
            // 0x1a5cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5CF8u; }
        if (ctx->pc != 0x1A5CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5CF8u; }
        if (ctx->pc != 0x1A5CF8u) { return; }
    }
    ctx->pc = 0x1A5CF8u;
    // 0x1a5cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5cfc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A5CFCu;
    SET_GPR_U32(ctx, 31, 0x1A5D04u);
    ctx->pc = 0x1A5D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CFCu;
            // 0x1a5d00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D04u; }
        if (ctx->pc != 0x1A5D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D04u; }
        if (ctx->pc != 0x1A5D04u) { return; }
    }
    ctx->pc = 0x1A5D04u;
    // 0x1a5d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d08: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A5D08u;
    SET_GPR_U32(ctx, 31, 0x1A5D10u);
    ctx->pc = 0x1A5D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D08u;
            // 0x1a5d0c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D10u; }
        if (ctx->pc != 0x1A5D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D10u; }
        if (ctx->pc != 0x1A5D10u) { return; }
    }
    ctx->pc = 0x1A5D10u;
    // 0x1a5d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d14: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A5D14u;
    SET_GPR_U32(ctx, 31, 0x1A5D1Cu);
    ctx->pc = 0x1A5D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D14u;
            // 0x1a5d18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D1Cu; }
        if (ctx->pc != 0x1A5D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D1Cu; }
        if (ctx->pc != 0x1A5D1Cu) { return; }
    }
    ctx->pc = 0x1A5D1Cu;
    // 0x1a5d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d20: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A5D20u;
    SET_GPR_U32(ctx, 31, 0x1A5D28u);
    ctx->pc = 0x1A5D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D20u;
            // 0x1a5d24: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D28u; }
        if (ctx->pc != 0x1A5D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D28u; }
        if (ctx->pc != 0x1A5D28u) { return; }
    }
    ctx->pc = 0x1A5D28u;
    // 0x1a5d28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D30u;
            // 0x1a5d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5D38u;
}

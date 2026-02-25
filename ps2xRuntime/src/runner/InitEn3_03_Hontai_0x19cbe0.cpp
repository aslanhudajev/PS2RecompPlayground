#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn3_03_Hontai
// Address: 0x19cbe0 - 0x19cc48
void InitEn3_03_Hontai_0x19cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn3_03_Hontai_0x19cbe0");
#endif

    ctx->pc = 0x19cbe0u;

    // 0x19cbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cbe4: 0x240400a3  addiu       $a0, $zero, 0xA3
    ctx->pc = 0x19cbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x19cbe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19cbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19cbec: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x19cbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x19cbf0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x19CBF0u;
    SET_GPR_U32(ctx, 31, 0x19CBF8u);
    ctx->pc = 0x19CBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBF0u;
            // 0x19cbf4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBF8u; }
        if (ctx->pc != 0x19CBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBF8u; }
        if (ctx->pc != 0x19CBF8u) { return; }
    }
    ctx->pc = 0x19CBF8u;
    // 0x19cbf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19cbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cbfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19cbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc00: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19CC00u;
    SET_GPR_U32(ctx, 31, 0x19CC08u);
    ctx->pc = 0x19CC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC00u;
            // 0x19cc04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC08u; }
        if (ctx->pc != 0x19CC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC08u; }
        if (ctx->pc != 0x19CC08u) { return; }
    }
    ctx->pc = 0x19CC08u;
    // 0x19cc08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc0c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19CC0Cu;
    SET_GPR_U32(ctx, 31, 0x19CC14u);
    ctx->pc = 0x19CC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC0Cu;
            // 0x19cc10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC14u; }
        if (ctx->pc != 0x19CC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC14u; }
        if (ctx->pc != 0x19CC14u) { return; }
    }
    ctx->pc = 0x19CC14u;
    // 0x19cc14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc18: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19CC18u;
    SET_GPR_U32(ctx, 31, 0x19CC20u);
    ctx->pc = 0x19CC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC18u;
            // 0x19cc1c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC20u; }
        if (ctx->pc != 0x19CC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC20u; }
        if (ctx->pc != 0x19CC20u) { return; }
    }
    ctx->pc = 0x19CC20u;
    // 0x19cc20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc24: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19CC24u;
    SET_GPR_U32(ctx, 31, 0x19CC2Cu);
    ctx->pc = 0x19CC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC24u;
            // 0x19cc28: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC2Cu; }
        if (ctx->pc != 0x19CC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC2Cu; }
        if (ctx->pc != 0x19CC2Cu) { return; }
    }
    ctx->pc = 0x19CC2Cu;
    // 0x19cc2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc30: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19CC30u;
    SET_GPR_U32(ctx, 31, 0x19CC38u);
    ctx->pc = 0x19CC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC30u;
            // 0x19cc34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC38u; }
        if (ctx->pc != 0x19CC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC38u; }
        if (ctx->pc != 0x19CC38u) { return; }
    }
    ctx->pc = 0x19CC38u;
    // 0x19cc38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cc3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cc40: 0x3e00008  jr          $ra
    ctx->pc = 0x19CC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC40u;
            // 0x19cc44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CC48u;
}

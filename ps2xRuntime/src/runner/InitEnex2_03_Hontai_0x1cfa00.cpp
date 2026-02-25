#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEnex2_03_Hontai
// Address: 0x1cfa00 - 0x1cfa68
void InitEnex2_03_Hontai_0x1cfa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEnex2_03_Hontai_0x1cfa00");
#endif

    ctx->pc = 0x1cfa00u;

    // 0x1cfa00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cfa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cfa04: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x1cfa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x1cfa08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cfa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cfa0c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x1cfa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1cfa10: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1CFA10u;
    SET_GPR_U32(ctx, 31, 0x1CFA18u);
    ctx->pc = 0x1CFA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA10u;
            // 0x1cfa14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA18u; }
        if (ctx->pc != 0x1CFA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA18u; }
        if (ctx->pc != 0x1CFA18u) { return; }
    }
    ctx->pc = 0x1CFA18u;
    // 0x1cfa18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cfa18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa20: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CFA20u;
    SET_GPR_U32(ctx, 31, 0x1CFA28u);
    ctx->pc = 0x1CFA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA20u;
            // 0x1cfa24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA28u; }
        if (ctx->pc != 0x1CFA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA28u; }
        if (ctx->pc != 0x1CFA28u) { return; }
    }
    ctx->pc = 0x1CFA28u;
    // 0x1cfa28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa2c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CFA2Cu;
    SET_GPR_U32(ctx, 31, 0x1CFA34u);
    ctx->pc = 0x1CFA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA2Cu;
            // 0x1cfa30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA34u; }
        if (ctx->pc != 0x1CFA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA34u; }
        if (ctx->pc != 0x1CFA34u) { return; }
    }
    ctx->pc = 0x1CFA34u;
    // 0x1cfa34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa38: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CFA38u;
    SET_GPR_U32(ctx, 31, 0x1CFA40u);
    ctx->pc = 0x1CFA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA38u;
            // 0x1cfa3c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA40u; }
        if (ctx->pc != 0x1CFA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA40u; }
        if (ctx->pc != 0x1CFA40u) { return; }
    }
    ctx->pc = 0x1CFA40u;
    // 0x1cfa40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa44: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CFA44u;
    SET_GPR_U32(ctx, 31, 0x1CFA4Cu);
    ctx->pc = 0x1CFA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA44u;
            // 0x1cfa48: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA4Cu; }
        if (ctx->pc != 0x1CFA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA4Cu; }
        if (ctx->pc != 0x1CFA4Cu) { return; }
    }
    ctx->pc = 0x1CFA4Cu;
    // 0x1cfa4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa50: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CFA50u;
    SET_GPR_U32(ctx, 31, 0x1CFA58u);
    ctx->pc = 0x1CFA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA50u;
            // 0x1cfa54: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA58u; }
        if (ctx->pc != 0x1CFA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA58u; }
        if (ctx->pc != 0x1CFA58u) { return; }
    }
    ctx->pc = 0x1CFA58u;
    // 0x1cfa58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cfa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfa5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cfa5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfa60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA60u;
            // 0x1cfa64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CFA68u;
}

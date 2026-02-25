#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn6_03_Hontai
// Address: 0x1aba40 - 0x1abaa8
void InitEn6_03_Hontai_0x1aba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn6_03_Hontai_0x1aba40");
#endif

    ctx->pc = 0x1aba40u;

    // 0x1aba40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aba44: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x1aba44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x1aba48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aba4c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x1aba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1aba50: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1ABA50u;
    SET_GPR_U32(ctx, 31, 0x1ABA58u);
    ctx->pc = 0x1ABA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA50u;
            // 0x1aba54: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA58u; }
        if (ctx->pc != 0x1ABA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA58u; }
        if (ctx->pc != 0x1ABA58u) { return; }
    }
    ctx->pc = 0x1ABA58u;
    // 0x1aba58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aba58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aba5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba60: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ABA60u;
    SET_GPR_U32(ctx, 31, 0x1ABA68u);
    ctx->pc = 0x1ABA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA60u;
            // 0x1aba64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA68u; }
        if (ctx->pc != 0x1ABA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA68u; }
        if (ctx->pc != 0x1ABA68u) { return; }
    }
    ctx->pc = 0x1ABA68u;
    // 0x1aba68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba6c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ABA6Cu;
    SET_GPR_U32(ctx, 31, 0x1ABA74u);
    ctx->pc = 0x1ABA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA6Cu;
            // 0x1aba70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA74u; }
        if (ctx->pc != 0x1ABA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA74u; }
        if (ctx->pc != 0x1ABA74u) { return; }
    }
    ctx->pc = 0x1ABA74u;
    // 0x1aba74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aba74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba78: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ABA78u;
    SET_GPR_U32(ctx, 31, 0x1ABA80u);
    ctx->pc = 0x1ABA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA78u;
            // 0x1aba7c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA80u; }
        if (ctx->pc != 0x1ABA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA80u; }
        if (ctx->pc != 0x1ABA80u) { return; }
    }
    ctx->pc = 0x1ABA80u;
    // 0x1aba80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aba80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba84: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ABA84u;
    SET_GPR_U32(ctx, 31, 0x1ABA8Cu);
    ctx->pc = 0x1ABA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA84u;
            // 0x1aba88: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA8Cu; }
        if (ctx->pc != 0x1ABA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA8Cu; }
        if (ctx->pc != 0x1ABA8Cu) { return; }
    }
    ctx->pc = 0x1ABA8Cu;
    // 0x1aba8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aba8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba90: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1ABA90u;
    SET_GPR_U32(ctx, 31, 0x1ABA98u);
    ctx->pc = 0x1ABA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA90u;
            // 0x1aba94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA98u; }
        if (ctx->pc != 0x1ABA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA98u; }
        if (ctx->pc != 0x1ABA98u) { return; }
    }
    ctx->pc = 0x1ABA98u;
    // 0x1aba98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aba98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aba9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aba9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABAA0u;
            // 0x1abaa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABAA8u;
}

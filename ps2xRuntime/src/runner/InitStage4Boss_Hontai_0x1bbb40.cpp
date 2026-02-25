#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitStage4Boss_Hontai
// Address: 0x1bbb40 - 0x1bbbbc
void InitStage4Boss_Hontai_0x1bbb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitStage4Boss_Hontai_0x1bbb40");
#endif

    ctx->pc = 0x1bbb40u;

    // 0x1bbb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbb44: 0x240400c2  addiu       $a0, $zero, 0xC2
    ctx->pc = 0x1bbb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x1bbb48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bbb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bbb4c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1bbb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bbb50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bbb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb54: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1bbb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bbb58: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1BBB58u;
    SET_GPR_U32(ctx, 31, 0x1BBB60u);
    ctx->pc = 0x1BBB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB58u;
            // 0x1bbb5c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB60u; }
        if (ctx->pc != 0x1BBB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB60u; }
        if (ctx->pc != 0x1BBB60u) { return; }
    }
    ctx->pc = 0x1BBB60u;
    // 0x1bbb60: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x1bbb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x1bbb64: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1BBB64u;
    SET_GPR_U32(ctx, 31, 0x1BBB6Cu);
    ctx->pc = 0x1BBB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB64u;
            // 0x1bbb68: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB6Cu; }
        if (ctx->pc != 0x1BBB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB6Cu; }
        if (ctx->pc != 0x1BBB6Cu) { return; }
    }
    ctx->pc = 0x1BBB6Cu;
    // 0x1bbb6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bbb6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb74: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1BBB74u;
    SET_GPR_U32(ctx, 31, 0x1BBB7Cu);
    ctx->pc = 0x1BBB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB74u;
            // 0x1bbb78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB7Cu; }
        if (ctx->pc != 0x1BBB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB7Cu; }
        if (ctx->pc != 0x1BBB7Cu) { return; }
    }
    ctx->pc = 0x1BBB7Cu;
    // 0x1bbb7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb80: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1BBB80u;
    SET_GPR_U32(ctx, 31, 0x1BBB88u);
    ctx->pc = 0x1BBB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB80u;
            // 0x1bbb84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB88u; }
        if (ctx->pc != 0x1BBB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB88u; }
        if (ctx->pc != 0x1BBB88u) { return; }
    }
    ctx->pc = 0x1BBB88u;
    // 0x1bbb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb8c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1BBB8Cu;
    SET_GPR_U32(ctx, 31, 0x1BBB94u);
    ctx->pc = 0x1BBB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB8Cu;
            // 0x1bbb90: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB94u; }
        if (ctx->pc != 0x1BBB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB94u; }
        if (ctx->pc != 0x1BBB94u) { return; }
    }
    ctx->pc = 0x1BBB94u;
    // 0x1bbb94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb98: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1BBB98u;
    SET_GPR_U32(ctx, 31, 0x1BBBA0u);
    ctx->pc = 0x1BBB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB98u;
            // 0x1bbb9c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBBA0u; }
        if (ctx->pc != 0x1BBBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBBA0u; }
        if (ctx->pc != 0x1BBBA0u) { return; }
    }
    ctx->pc = 0x1BBBA0u;
    // 0x1bbba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbba4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1BBBA4u;
    SET_GPR_U32(ctx, 31, 0x1BBBACu);
    ctx->pc = 0x1BBBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBBA4u;
            // 0x1bbba8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBBACu; }
        if (ctx->pc != 0x1BBBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBBACu; }
        if (ctx->pc != 0x1BBBACu) { return; }
    }
    ctx->pc = 0x1BBBACu;
    // 0x1bbbac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bbbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbbb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBBB4u;
            // 0x1bbbb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBBBCu;
}

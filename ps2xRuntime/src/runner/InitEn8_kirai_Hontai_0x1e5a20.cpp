#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn8_kirai_Hontai
// Address: 0x1e5a20 - 0x1e5a88
void InitEn8_kirai_Hontai_0x1e5a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn8_kirai_Hontai_0x1e5a20");
#endif

    ctx->pc = 0x1e5a20u;

    // 0x1e5a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5a24: 0x2404011e  addiu       $a0, $zero, 0x11E
    ctx->pc = 0x1e5a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x1e5a28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e5a2c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x1e5a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1e5a30: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1E5A30u;
    SET_GPR_U32(ctx, 31, 0x1E5A38u);
    ctx->pc = 0x1E5A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A30u;
            // 0x1e5a34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A38u; }
        if (ctx->pc != 0x1E5A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A38u; }
        if (ctx->pc != 0x1E5A38u) { return; }
    }
    ctx->pc = 0x1E5A38u;
    // 0x1e5a38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e5a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a40: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E5A40u;
    SET_GPR_U32(ctx, 31, 0x1E5A48u);
    ctx->pc = 0x1E5A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A40u;
            // 0x1e5a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A48u; }
        if (ctx->pc != 0x1E5A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A48u; }
        if (ctx->pc != 0x1E5A48u) { return; }
    }
    ctx->pc = 0x1E5A48u;
    // 0x1e5a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a4c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E5A4Cu;
    SET_GPR_U32(ctx, 31, 0x1E5A54u);
    ctx->pc = 0x1E5A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A4Cu;
            // 0x1e5a50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A54u; }
        if (ctx->pc != 0x1E5A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A54u; }
        if (ctx->pc != 0x1E5A54u) { return; }
    }
    ctx->pc = 0x1E5A54u;
    // 0x1e5a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a58: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E5A58u;
    SET_GPR_U32(ctx, 31, 0x1E5A60u);
    ctx->pc = 0x1E5A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A58u;
            // 0x1e5a5c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A60u; }
        if (ctx->pc != 0x1E5A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A60u; }
        if (ctx->pc != 0x1E5A60u) { return; }
    }
    ctx->pc = 0x1E5A60u;
    // 0x1e5a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a64: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E5A64u;
    SET_GPR_U32(ctx, 31, 0x1E5A6Cu);
    ctx->pc = 0x1E5A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A64u;
            // 0x1e5a68: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A6Cu; }
        if (ctx->pc != 0x1E5A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A6Cu; }
        if (ctx->pc != 0x1E5A6Cu) { return; }
    }
    ctx->pc = 0x1E5A6Cu;
    // 0x1e5a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a70: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E5A70u;
    SET_GPR_U32(ctx, 31, 0x1E5A78u);
    ctx->pc = 0x1E5A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A70u;
            // 0x1e5a74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A78u; }
        if (ctx->pc != 0x1E5A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A78u; }
        if (ctx->pc != 0x1E5A78u) { return; }
    }
    ctx->pc = 0x1E5A78u;
    // 0x1e5a78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5a80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A80u;
            // 0x1e5a84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5A88u;
}

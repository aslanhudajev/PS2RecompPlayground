#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn5_02_Hontai
// Address: 0x1b4e20 - 0x1b4e88
void InitEn5_02_Hontai_0x1b4e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn5_02_Hontai_0x1b4e20");
#endif

    ctx->pc = 0x1b4e20u;

    // 0x1b4e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4e24: 0x240400d9  addiu       $a0, $zero, 0xD9
    ctx->pc = 0x1b4e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x1b4e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4e2c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1b4e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1b4e30: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1B4E30u;
    SET_GPR_U32(ctx, 31, 0x1B4E38u);
    ctx->pc = 0x1B4E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E30u;
            // 0x1b4e34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E38u; }
        if (ctx->pc != 0x1B4E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E38u; }
        if (ctx->pc != 0x1B4E38u) { return; }
    }
    ctx->pc = 0x1B4E38u;
    // 0x1b4e38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e40: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B4E40u;
    SET_GPR_U32(ctx, 31, 0x1B4E48u);
    ctx->pc = 0x1B4E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E40u;
            // 0x1b4e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E48u; }
        if (ctx->pc != 0x1B4E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E48u; }
        if (ctx->pc != 0x1B4E48u) { return; }
    }
    ctx->pc = 0x1B4E48u;
    // 0x1b4e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e4c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B4E4Cu;
    SET_GPR_U32(ctx, 31, 0x1B4E54u);
    ctx->pc = 0x1B4E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E4Cu;
            // 0x1b4e50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E54u; }
        if (ctx->pc != 0x1B4E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E54u; }
        if (ctx->pc != 0x1B4E54u) { return; }
    }
    ctx->pc = 0x1B4E54u;
    // 0x1b4e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e58: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B4E58u;
    SET_GPR_U32(ctx, 31, 0x1B4E60u);
    ctx->pc = 0x1B4E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E58u;
            // 0x1b4e5c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E60u; }
        if (ctx->pc != 0x1B4E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E60u; }
        if (ctx->pc != 0x1B4E60u) { return; }
    }
    ctx->pc = 0x1B4E60u;
    // 0x1b4e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e64: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B4E64u;
    SET_GPR_U32(ctx, 31, 0x1B4E6Cu);
    ctx->pc = 0x1B4E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E64u;
            // 0x1b4e68: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E6Cu; }
        if (ctx->pc != 0x1B4E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E6Cu; }
        if (ctx->pc != 0x1B4E6Cu) { return; }
    }
    ctx->pc = 0x1B4E6Cu;
    // 0x1b4e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e70: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B4E70u;
    SET_GPR_U32(ctx, 31, 0x1B4E78u);
    ctx->pc = 0x1B4E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E70u;
            // 0x1b4e74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E78u; }
        if (ctx->pc != 0x1B4E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E78u; }
        if (ctx->pc != 0x1B4E78u) { return; }
    }
    ctx->pc = 0x1B4E78u;
    // 0x1b4e78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4e7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4e80: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E80u;
            // 0x1b4e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4E88u;
}

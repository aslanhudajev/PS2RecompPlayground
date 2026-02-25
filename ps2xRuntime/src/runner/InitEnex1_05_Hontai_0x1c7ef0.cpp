#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEnex1_05_Hontai
// Address: 0x1c7ef0 - 0x1c7f58
void InitEnex1_05_Hontai_0x1c7ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEnex1_05_Hontai_0x1c7ef0");
#endif

    ctx->pc = 0x1c7ef0u;

    // 0x1c7ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7ef4: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x1c7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1c7ef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c7efc: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x1c7efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1c7f00: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1C7F00u;
    SET_GPR_U32(ctx, 31, 0x1C7F08u);
    ctx->pc = 0x1C7F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F00u;
            // 0x1c7f04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F08u; }
        if (ctx->pc != 0x1C7F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F08u; }
        if (ctx->pc != 0x1C7F08u) { return; }
    }
    ctx->pc = 0x1C7F08u;
    // 0x1c7f08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f10: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C7F10u;
    SET_GPR_U32(ctx, 31, 0x1C7F18u);
    ctx->pc = 0x1C7F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F10u;
            // 0x1c7f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F18u; }
        if (ctx->pc != 0x1C7F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F18u; }
        if (ctx->pc != 0x1C7F18u) { return; }
    }
    ctx->pc = 0x1C7F18u;
    // 0x1c7f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f1c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C7F1Cu;
    SET_GPR_U32(ctx, 31, 0x1C7F24u);
    ctx->pc = 0x1C7F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F1Cu;
            // 0x1c7f20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F24u; }
        if (ctx->pc != 0x1C7F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F24u; }
        if (ctx->pc != 0x1C7F24u) { return; }
    }
    ctx->pc = 0x1C7F24u;
    // 0x1c7f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f28: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C7F28u;
    SET_GPR_U32(ctx, 31, 0x1C7F30u);
    ctx->pc = 0x1C7F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F28u;
            // 0x1c7f2c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F30u; }
        if (ctx->pc != 0x1C7F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F30u; }
        if (ctx->pc != 0x1C7F30u) { return; }
    }
    ctx->pc = 0x1C7F30u;
    // 0x1c7f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f34: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C7F34u;
    SET_GPR_U32(ctx, 31, 0x1C7F3Cu);
    ctx->pc = 0x1C7F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F34u;
            // 0x1c7f38: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F3Cu; }
        if (ctx->pc != 0x1C7F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F3Cu; }
        if (ctx->pc != 0x1C7F3Cu) { return; }
    }
    ctx->pc = 0x1C7F3Cu;
    // 0x1c7f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f40: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C7F40u;
    SET_GPR_U32(ctx, 31, 0x1C7F48u);
    ctx->pc = 0x1C7F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F40u;
            // 0x1c7f44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F48u; }
        if (ctx->pc != 0x1C7F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F48u; }
        if (ctx->pc != 0x1C7F48u) { return; }
    }
    ctx->pc = 0x1C7F48u;
    // 0x1c7f48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c7f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7f50: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F50u;
            // 0x1c7f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7F58u;
}

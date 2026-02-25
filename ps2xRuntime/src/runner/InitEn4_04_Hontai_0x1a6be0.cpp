#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn4_04_Hontai
// Address: 0x1a6be0 - 0x1a6c48
void InitEn4_04_Hontai_0x1a6be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn4_04_Hontai_0x1a6be0");
#endif

    ctx->pc = 0x1a6be0u;

    // 0x1a6be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6be4: 0x240400c1  addiu       $a0, $zero, 0xC1
    ctx->pc = 0x1a6be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x1a6be8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a6bec: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x1a6becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1a6bf0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1A6BF0u;
    SET_GPR_U32(ctx, 31, 0x1A6BF8u);
    ctx->pc = 0x1A6BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BF0u;
            // 0x1a6bf4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BF8u; }
        if (ctx->pc != 0x1A6BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BF8u; }
        if (ctx->pc != 0x1A6BF8u) { return; }
    }
    ctx->pc = 0x1A6BF8u;
    // 0x1a6bf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c00: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A6C00u;
    SET_GPR_U32(ctx, 31, 0x1A6C08u);
    ctx->pc = 0x1A6C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C00u;
            // 0x1a6c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C08u; }
        if (ctx->pc != 0x1A6C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C08u; }
        if (ctx->pc != 0x1A6C08u) { return; }
    }
    ctx->pc = 0x1A6C08u;
    // 0x1a6c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c0c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A6C0Cu;
    SET_GPR_U32(ctx, 31, 0x1A6C14u);
    ctx->pc = 0x1A6C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C0Cu;
            // 0x1a6c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C14u; }
        if (ctx->pc != 0x1A6C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C14u; }
        if (ctx->pc != 0x1A6C14u) { return; }
    }
    ctx->pc = 0x1A6C14u;
    // 0x1a6c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c18: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A6C18u;
    SET_GPR_U32(ctx, 31, 0x1A6C20u);
    ctx->pc = 0x1A6C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C18u;
            // 0x1a6c1c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C20u; }
        if (ctx->pc != 0x1A6C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C20u; }
        if (ctx->pc != 0x1A6C20u) { return; }
    }
    ctx->pc = 0x1A6C20u;
    // 0x1a6c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c24: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A6C24u;
    SET_GPR_U32(ctx, 31, 0x1A6C2Cu);
    ctx->pc = 0x1A6C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C24u;
            // 0x1a6c28: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C2Cu; }
        if (ctx->pc != 0x1A6C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C2Cu; }
        if (ctx->pc != 0x1A6C2Cu) { return; }
    }
    ctx->pc = 0x1A6C2Cu;
    // 0x1a6c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c30: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A6C30u;
    SET_GPR_U32(ctx, 31, 0x1A6C38u);
    ctx->pc = 0x1A6C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C30u;
            // 0x1a6c34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C38u; }
        if (ctx->pc != 0x1A6C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C38u; }
        if (ctx->pc != 0x1A6C38u) { return; }
    }
    ctx->pc = 0x1A6C38u;
    // 0x1a6c38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6c40: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C40u;
            // 0x1a6c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6C48u;
}

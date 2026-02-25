#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEnex1_03_Hontai
// Address: 0x1c8c10 - 0x1c8c78
void InitEnex1_03_Hontai_0x1c8c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEnex1_03_Hontai_0x1c8c10");
#endif

    ctx->pc = 0x1c8c10u;

    // 0x1c8c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8c14: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x1c8c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1c8c18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8c1c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x1c8c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1c8c20: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1C8C20u;
    SET_GPR_U32(ctx, 31, 0x1C8C28u);
    ctx->pc = 0x1C8C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C20u;
            // 0x1c8c24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C28u; }
        if (ctx->pc != 0x1C8C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C28u; }
        if (ctx->pc != 0x1C8C28u) { return; }
    }
    ctx->pc = 0x1C8C28u;
    // 0x1c8c28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c8c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c30: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C8C30u;
    SET_GPR_U32(ctx, 31, 0x1C8C38u);
    ctx->pc = 0x1C8C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C30u;
            // 0x1c8c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C38u; }
        if (ctx->pc != 0x1C8C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C38u; }
        if (ctx->pc != 0x1C8C38u) { return; }
    }
    ctx->pc = 0x1C8C38u;
    // 0x1c8c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c3c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C8C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C8C44u);
    ctx->pc = 0x1C8C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C3Cu;
            // 0x1c8c40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C44u; }
        if (ctx->pc != 0x1C8C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C44u; }
        if (ctx->pc != 0x1C8C44u) { return; }
    }
    ctx->pc = 0x1C8C44u;
    // 0x1c8c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c48: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C8C48u;
    SET_GPR_U32(ctx, 31, 0x1C8C50u);
    ctx->pc = 0x1C8C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C48u;
            // 0x1c8c4c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C50u; }
        if (ctx->pc != 0x1C8C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C50u; }
        if (ctx->pc != 0x1C8C50u) { return; }
    }
    ctx->pc = 0x1C8C50u;
    // 0x1c8c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c54: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C8C54u;
    SET_GPR_U32(ctx, 31, 0x1C8C5Cu);
    ctx->pc = 0x1C8C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C54u;
            // 0x1c8c58: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C5Cu; }
        if (ctx->pc != 0x1C8C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C5Cu; }
        if (ctx->pc != 0x1C8C5Cu) { return; }
    }
    ctx->pc = 0x1C8C5Cu;
    // 0x1c8c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c60: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C8C60u;
    SET_GPR_U32(ctx, 31, 0x1C8C68u);
    ctx->pc = 0x1C8C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C60u;
            // 0x1c8c64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C68u; }
        if (ctx->pc != 0x1C8C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C68u; }
        if (ctx->pc != 0x1C8C68u) { return; }
    }
    ctx->pc = 0x1C8C68u;
    // 0x1c8c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8c70: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C70u;
            // 0x1c8c74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8C78u;
}

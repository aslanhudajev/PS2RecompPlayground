#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEnex2_05_Hontai
// Address: 0x1ced60 - 0x1cedc8
void InitEnex2_05_Hontai_0x1ced60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEnex2_05_Hontai_0x1ced60");
#endif

    ctx->pc = 0x1ced60u;

    // 0x1ced60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ced60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ced64: 0x24040059  addiu       $a0, $zero, 0x59
    ctx->pc = 0x1ced64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1ced68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ced68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ced6c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x1ced6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1ced70: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1CED70u;
    SET_GPR_U32(ctx, 31, 0x1CED78u);
    ctx->pc = 0x1CED74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED70u;
            // 0x1ced74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED78u; }
        if (ctx->pc != 0x1CED78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED78u; }
        if (ctx->pc != 0x1CED78u) { return; }
    }
    ctx->pc = 0x1CED78u;
    // 0x1ced78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ced78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ced7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced80: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CED80u;
    SET_GPR_U32(ctx, 31, 0x1CED88u);
    ctx->pc = 0x1CED84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED80u;
            // 0x1ced84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED88u; }
        if (ctx->pc != 0x1CED88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED88u; }
        if (ctx->pc != 0x1CED88u) { return; }
    }
    ctx->pc = 0x1CED88u;
    // 0x1ced88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ced88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced8c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CED8Cu;
    SET_GPR_U32(ctx, 31, 0x1CED94u);
    ctx->pc = 0x1CED90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED8Cu;
            // 0x1ced90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED94u; }
        if (ctx->pc != 0x1CED94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED94u; }
        if (ctx->pc != 0x1CED94u) { return; }
    }
    ctx->pc = 0x1CED94u;
    // 0x1ced94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ced94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced98: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CED98u;
    SET_GPR_U32(ctx, 31, 0x1CEDA0u);
    ctx->pc = 0x1CED9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED98u;
            // 0x1ced9c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDA0u; }
        if (ctx->pc != 0x1CEDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDA0u; }
        if (ctx->pc != 0x1CEDA0u) { return; }
    }
    ctx->pc = 0x1CEDA0u;
    // 0x1ceda0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ceda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceda4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CEDA4u;
    SET_GPR_U32(ctx, 31, 0x1CEDACu);
    ctx->pc = 0x1CEDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEDA4u;
            // 0x1ceda8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDACu; }
        if (ctx->pc != 0x1CEDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDACu; }
        if (ctx->pc != 0x1CEDACu) { return; }
    }
    ctx->pc = 0x1CEDACu;
    // 0x1cedac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cedacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cedb0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CEDB0u;
    SET_GPR_U32(ctx, 31, 0x1CEDB8u);
    ctx->pc = 0x1CEDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEDB0u;
            // 0x1cedb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDB8u; }
        if (ctx->pc != 0x1CEDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDB8u; }
        if (ctx->pc != 0x1CEDB8u) { return; }
    }
    ctx->pc = 0x1CEDB8u;
    // 0x1cedb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cedb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cedbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cedbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cedc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEDC0u;
            // 0x1cedc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CEDC8u;
}

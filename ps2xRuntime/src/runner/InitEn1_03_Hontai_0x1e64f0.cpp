#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn1_03_Hontai
// Address: 0x1e64f0 - 0x1e6558
void InitEn1_03_Hontai_0x1e64f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn1_03_Hontai_0x1e64f0");
#endif

    ctx->pc = 0x1e64f0u;

    // 0x1e64f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e64f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e64f4: 0x2404006a  addiu       $a0, $zero, 0x6A
    ctx->pc = 0x1e64f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x1e64f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e64f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e64fc: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x1e64fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1e6500: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1E6500u;
    SET_GPR_U32(ctx, 31, 0x1E6508u);
    ctx->pc = 0x1E6504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6500u;
            // 0x1e6504: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6508u; }
        if (ctx->pc != 0x1E6508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6508u; }
        if (ctx->pc != 0x1E6508u) { return; }
    }
    ctx->pc = 0x1E6508u;
    // 0x1e6508: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e6508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e650c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e650cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6510: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E6510u;
    SET_GPR_U32(ctx, 31, 0x1E6518u);
    ctx->pc = 0x1E6514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6510u;
            // 0x1e6514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6518u; }
        if (ctx->pc != 0x1E6518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6518u; }
        if (ctx->pc != 0x1E6518u) { return; }
    }
    ctx->pc = 0x1E6518u;
    // 0x1e6518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e651c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E651Cu;
    SET_GPR_U32(ctx, 31, 0x1E6524u);
    ctx->pc = 0x1E6520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E651Cu;
            // 0x1e6520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6524u; }
        if (ctx->pc != 0x1E6524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6524u; }
        if (ctx->pc != 0x1E6524u) { return; }
    }
    ctx->pc = 0x1E6524u;
    // 0x1e6524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6528: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E6528u;
    SET_GPR_U32(ctx, 31, 0x1E6530u);
    ctx->pc = 0x1E652Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6528u;
            // 0x1e652c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6530u; }
        if (ctx->pc != 0x1E6530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6530u; }
        if (ctx->pc != 0x1E6530u) { return; }
    }
    ctx->pc = 0x1E6530u;
    // 0x1e6530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6534: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E6534u;
    SET_GPR_U32(ctx, 31, 0x1E653Cu);
    ctx->pc = 0x1E6538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6534u;
            // 0x1e6538: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E653Cu; }
        if (ctx->pc != 0x1E653Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E653Cu; }
        if (ctx->pc != 0x1E653Cu) { return; }
    }
    ctx->pc = 0x1E653Cu;
    // 0x1e653c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e653cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6540: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E6540u;
    SET_GPR_U32(ctx, 31, 0x1E6548u);
    ctx->pc = 0x1E6544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6540u;
            // 0x1e6544: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6548u; }
        if (ctx->pc != 0x1E6548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6548u; }
        if (ctx->pc != 0x1E6548u) { return; }
    }
    ctx->pc = 0x1E6548u;
    // 0x1e6548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e654c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e654cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6550: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6550u;
            // 0x1e6554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6558u;
}

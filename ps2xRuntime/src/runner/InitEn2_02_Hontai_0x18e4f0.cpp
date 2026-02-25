#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn2_02_Hontai
// Address: 0x18e4f0 - 0x18e558
void InitEn2_02_Hontai_0x18e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn2_02_Hontai_0x18e4f0");
#endif

    ctx->pc = 0x18e4f0u;

    // 0x18e4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e4f4: 0x2404008a  addiu       $a0, $zero, 0x8A
    ctx->pc = 0x18e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x18e4f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e4fc: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x18e4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x18e500: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x18E500u;
    SET_GPR_U32(ctx, 31, 0x18E508u);
    ctx->pc = 0x18E504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E500u;
            // 0x18e504: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E508u; }
        if (ctx->pc != 0x18E508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E508u; }
        if (ctx->pc != 0x18E508u) { return; }
    }
    ctx->pc = 0x18E508u;
    // 0x18e508: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e50c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e510: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E510u;
    SET_GPR_U32(ctx, 31, 0x18E518u);
    ctx->pc = 0x18E514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E510u;
            // 0x18e514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E518u; }
        if (ctx->pc != 0x18E518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E518u; }
        if (ctx->pc != 0x18E518u) { return; }
    }
    ctx->pc = 0x18E518u;
    // 0x18e518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e51c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E51Cu;
    SET_GPR_U32(ctx, 31, 0x18E524u);
    ctx->pc = 0x18E520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E51Cu;
            // 0x18e520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E524u; }
        if (ctx->pc != 0x18E524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E524u; }
        if (ctx->pc != 0x18E524u) { return; }
    }
    ctx->pc = 0x18E524u;
    // 0x18e524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e528: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E528u;
    SET_GPR_U32(ctx, 31, 0x18E530u);
    ctx->pc = 0x18E52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E528u;
            // 0x18e52c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E530u; }
        if (ctx->pc != 0x18E530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E530u; }
        if (ctx->pc != 0x18E530u) { return; }
    }
    ctx->pc = 0x18E530u;
    // 0x18e530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e534: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E534u;
    SET_GPR_U32(ctx, 31, 0x18E53Cu);
    ctx->pc = 0x18E538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E534u;
            // 0x18e538: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E53Cu; }
        if (ctx->pc != 0x18E53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E53Cu; }
        if (ctx->pc != 0x18E53Cu) { return; }
    }
    ctx->pc = 0x18E53Cu;
    // 0x18e53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e540: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E540u;
    SET_GPR_U32(ctx, 31, 0x18E548u);
    ctx->pc = 0x18E544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E540u;
            // 0x18e544: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E548u; }
        if (ctx->pc != 0x18E548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E548u; }
        if (ctx->pc != 0x18E548u) { return; }
    }
    ctx->pc = 0x18E548u;
    // 0x18e548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e54c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e550: 0x3e00008  jr          $ra
    ctx->pc = 0x18E550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E550u;
            // 0x18e554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E558u;
}

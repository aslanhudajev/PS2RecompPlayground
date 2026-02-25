#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MakeClone
// Address: 0x181510 - 0x18158c
void MakeClone_0x181510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MakeClone_0x181510");
#endif

    ctx->pc = 0x181510u;

    // 0x181510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181518: 0xc060570  jal         func_1815C0
    ctx->pc = 0x181518u;
    SET_GPR_U32(ctx, 31, 0x181520u);
    ctx->pc = 0x18151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181518u;
            // 0x18151c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181520u; }
        if (ctx->pc != 0x181520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneAlloc_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181520u; }
        if (ctx->pc != 0x181520u) { return; }
    }
    ctx->pc = 0x181520u;
    // 0x181520: 0xc043afc  jal         func_10EBF0
    ctx->pc = 0x181520u;
    SET_GPR_U32(ctx, 31, 0x181528u);
    ctx->pc = 0x181524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181520u;
            // 0x181524: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EBF0u;
    if (runtime->hasFunction(0x10EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x10EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181528u; }
        if (ctx->pc != 0x181528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainStart_0x10ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181528u; }
        if (ctx->pc != 0x181528u) { return; }
    }
    ctx->pc = 0x181528u;
    // 0x181528: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x181528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x18152c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18152cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181530: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x181530u;
    SET_GPR_U32(ctx, 31, 0x181538u);
    ctx->pc = 0x181534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181530u;
            // 0x181534: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181538u; }
        if (ctx->pc != 0x181538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181538u; }
        if (ctx->pc != 0x181538u) { return; }
    }
    ctx->pc = 0x181538u;
    // 0x181538: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x181538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x18153c: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x18153cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x181540: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x181540u;
    SET_GPR_U32(ctx, 31, 0x181548u);
    ctx->pc = 0x181544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181540u;
            // 0x181544: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181548u; }
        if (ctx->pc != 0x181548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181548u; }
        if (ctx->pc != 0x181548u) { return; }
    }
    ctx->pc = 0x181548u;
    // 0x181548: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x181548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x18154c: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x18154cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x181550: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x181550u;
    SET_GPR_U32(ctx, 31, 0x181558u);
    ctx->pc = 0x181554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181550u;
            // 0x181554: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181558u; }
        if (ctx->pc != 0x181558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181558u; }
        if (ctx->pc != 0x181558u) { return; }
    }
    ctx->pc = 0x181558u;
    // 0x181558: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x181558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x18155c: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x18155cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x181560: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x181560u;
    SET_GPR_U32(ctx, 31, 0x181568u);
    ctx->pc = 0x181564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181560u;
            // 0x181564: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181568u; }
        if (ctx->pc != 0x181568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181568u; }
        if (ctx->pc != 0x181568u) { return; }
    }
    ctx->pc = 0x181568u;
    // 0x181568: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x181568u;
    SET_GPR_U32(ctx, 31, 0x181570u);
    ctx->pc = 0x18156Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181568u;
            // 0x18156c: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (runtime->hasFunction(0x10EC60u)) {
        auto targetFn = runtime->lookupFunction(0x10EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181570u; }
        if (ctx->pc != 0x181570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainEnd_0x10ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181570u; }
        if (ctx->pc != 0x181570u) { return; }
    }
    ctx->pc = 0x181570u;
    // 0x181570: 0xc060574  jal         func_1815D0
    ctx->pc = 0x181570u;
    SET_GPR_U32(ctx, 31, 0x181578u);
    ctx->pc = 0x181574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181570u;
            // 0x181574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815D0u;
    if (runtime->hasFunction(0x1815D0u)) {
        auto targetFn = runtime->lookupFunction(0x1815D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181578u; }
        if (ctx->pc != 0x181578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clone_ResetMatrix_0x1815d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181578u; }
        if (ctx->pc != 0x181578u) { return; }
    }
    ctx->pc = 0x181578u;
    // 0x181578: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x181578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18157c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18157cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181584: 0x3e00008  jr          $ra
    ctx->pc = 0x181584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181584u;
            // 0x181588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18158Cu;
}

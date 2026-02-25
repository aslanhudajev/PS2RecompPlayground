#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitStage6Boss_Hontai
// Address: 0x1c4540 - 0x1c457c
void UnInitStage6Boss_Hontai_0x1c4540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitStage6Boss_Hontai_0x1c4540");
#endif

    ctx->pc = 0x1c4540u;

    // 0x1c4540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4548: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1C4548u;
    SET_GPR_U32(ctx, 31, 0x1C4550u);
    ctx->pc = 0x1C454Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4548u;
            // 0x1c454c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4550u; }
        if (ctx->pc != 0x1C4550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4550u; }
        if (ctx->pc != 0x1C4550u) { return; }
    }
    ctx->pc = 0x1C4550u;
    // 0x1c4550: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1C4550u;
    SET_GPR_U32(ctx, 31, 0x1C4558u);
    ctx->pc = 0x1C4554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4550u;
            // 0x1c4554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4558u; }
        if (ctx->pc != 0x1C4558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4558u; }
        if (ctx->pc != 0x1C4558u) { return; }
    }
    ctx->pc = 0x1C4558u;
    // 0x1c4558: 0xc060680  jal         func_181A00
    ctx->pc = 0x1C4558u;
    SET_GPR_U32(ctx, 31, 0x1C4560u);
    ctx->pc = 0x1C455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4558u;
            // 0x1c455c: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4560u; }
        if (ctx->pc != 0x1C4560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4560u; }
        if (ctx->pc != 0x1C4560u) { return; }
    }
    ctx->pc = 0x1C4560u;
    // 0x1c4560: 0xc060680  jal         func_181A00
    ctx->pc = 0x1C4560u;
    SET_GPR_U32(ctx, 31, 0x1C4568u);
    ctx->pc = 0x1C4564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4560u;
            // 0x1c4564: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4568u; }
        if (ctx->pc != 0x1C4568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4568u; }
        if (ctx->pc != 0x1C4568u) { return; }
    }
    ctx->pc = 0x1C4568u;
    // 0x1c4568: 0xc060680  jal         func_181A00
    ctx->pc = 0x1C4568u;
    SET_GPR_U32(ctx, 31, 0x1C4570u);
    ctx->pc = 0x1C456Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4568u;
            // 0x1c456c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4570u; }
        if (ctx->pc != 0x1C4570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4570u; }
        if (ctx->pc != 0x1C4570u) { return; }
    }
    ctx->pc = 0x1C4570u;
    // 0x1c4570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4574: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4574u;
            // 0x1c4578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C457Cu;
}

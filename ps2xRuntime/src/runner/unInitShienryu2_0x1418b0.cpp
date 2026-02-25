#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: unInitShienryu2
// Address: 0x1418b0 - 0x1418fc
void unInitShienryu2_0x1418b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("unInitShienryu2_0x1418b0");
#endif

    ctx->pc = 0x1418b0u;

    // 0x1418b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1418b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1418b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1418b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1418b8: 0xc061abc  jal         func_186AF0
    ctx->pc = 0x1418B8u;
    SET_GPR_U32(ctx, 31, 0x1418C0u);
    ctx->pc = 0x186AF0u;
    if (runtime->hasFunction(0x186AF0u)) {
        auto targetFn = runtime->lookupFunction(0x186AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418C0u; }
        if (ctx->pc != 0x1418C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardUnInit_0x186af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418C0u; }
        if (ctx->pc != 0x1418C0u) { return; }
    }
    ctx->pc = 0x1418C0u;
    // 0x1418c0: 0xc050a7c  jal         func_1429F0
    ctx->pc = 0x1418C0u;
    SET_GPR_U32(ctx, 31, 0x1418C8u);
    ctx->pc = 0x1429F0u;
    if (runtime->hasFunction(0x1429F0u)) {
        auto targetFn = runtime->lookupFunction(0x1429F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418C8u; }
        if (ctx->pc != 0x1418C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsEndTask_0x1429f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418C8u; }
        if (ctx->pc != 0x1418C8u) { return; }
    }
    ctx->pc = 0x1418C8u;
    // 0x1418c8: 0xc050b58  jal         func_142D60
    ctx->pc = 0x1418C8u;
    SET_GPR_U32(ctx, 31, 0x1418D0u);
    ctx->pc = 0x142D60u;
    if (runtime->hasFunction(0x142D60u)) {
        auto targetFn = runtime->lookupFunction(0x142D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418D0u; }
        if (ctx->pc != 0x1418D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsUnInitTask_0x142d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418D0u; }
        if (ctx->pc != 0x1418D0u) { return; }
    }
    ctx->pc = 0x1418D0u;
    // 0x1418d0: 0xc050528  jal         func_1414A0
    ctx->pc = 0x1418D0u;
    SET_GPR_U32(ctx, 31, 0x1418D8u);
    ctx->pc = 0x1414A0u;
    if (runtime->hasFunction(0x1414A0u)) {
        auto targetFn = runtime->lookupFunction(0x1414A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418D8u; }
        if (ctx->pc != 0x1418D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRomClose_0x1414a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418D8u; }
        if (ctx->pc != 0x1418D8u) { return; }
    }
    ctx->pc = 0x1418D8u;
    // 0x1418d8: 0xc05056c  jal         func_1415B0
    ctx->pc = 0x1418D8u;
    SET_GPR_U32(ctx, 31, 0x1418E0u);
    ctx->pc = 0x1415B0u;
    if (runtime->hasFunction(0x1415B0u)) {
        auto targetFn = runtime->lookupFunction(0x1415B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418E0u; }
        if (ctx->pc != 0x1418E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsUnLoadIOP_0x1415b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418E0u; }
        if (ctx->pc != 0x1418E0u) { return; }
    }
    ctx->pc = 0x1418E0u;
    // 0x1418e0: 0xc05c244  jal         func_170910
    ctx->pc = 0x1418E0u;
    SET_GPR_U32(ctx, 31, 0x1418E8u);
    ctx->pc = 0x170910u;
    if (runtime->hasFunction(0x170910u)) {
        auto targetFn = runtime->lookupFunction(0x170910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418E8u; }
        if (ctx->pc != 0x1418E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsUnInitGp_0x170910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418E8u; }
        if (ctx->pc != 0x1418E8u) { return; }
    }
    ctx->pc = 0x1418E8u;
    // 0x1418e8: 0xc050374  jal         func_140DD0
    ctx->pc = 0x1418E8u;
    SET_GPR_U32(ctx, 31, 0x1418F0u);
    ctx->pc = 0x140DD0u;
    if (runtime->hasFunction(0x140DD0u)) {
        auto targetFn = runtime->lookupFunction(0x140DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418F0u; }
        if (ctx->pc != 0x1418F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsUnInitGs_0x140dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418F0u; }
        if (ctx->pc != 0x1418F0u) { return; }
    }
    ctx->pc = 0x1418F0u;
    // 0x1418f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1418f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1418f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1418F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1418F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1418F4u;
            // 0x1418f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1418FCu;
}

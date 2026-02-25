#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsUnInitGs
// Address: 0x140dd0 - 0x140e04
void wrsUnInitGs_0x140dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsUnInitGs_0x140dd0");
#endif

    ctx->pc = 0x140dd0u;

    // 0x140dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x140dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140dd8: 0xc0503f0  jal         func_140FC0
    ctx->pc = 0x140DD8u;
    SET_GPR_U32(ctx, 31, 0x140DE0u);
    ctx->pc = 0x140FC0u;
    if (runtime->hasFunction(0x140FC0u)) {
        auto targetFn = runtime->lookupFunction(0x140FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DE0u; }
        if (ctx->pc != 0x140DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeGsMemAll_0x140fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DE0u; }
        if (ctx->pc != 0x140DE0u) { return; }
    }
    ctx->pc = 0x140DE0u;
    // 0x140de0: 0xc0501a4  jal         func_140690
    ctx->pc = 0x140DE0u;
    SET_GPR_U32(ctx, 31, 0x140DE8u);
    ctx->pc = 0x140690u;
    if (runtime->hasFunction(0x140690u)) {
        auto targetFn = runtime->lookupFunction(0x140690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DE8u; }
        if (ctx->pc != 0x140DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsHiGsUnInitEnv_0x140690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DE8u; }
        if (ctx->pc != 0x140DE8u) { return; }
    }
    ctx->pc = 0x140DE8u;
    // 0x140de8: 0xc050250  jal         func_140940
    ctx->pc = 0x140DE8u;
    SET_GPR_U32(ctx, 31, 0x140DF0u);
    ctx->pc = 0x140940u;
    if (runtime->hasFunction(0x140940u)) {
        auto targetFn = runtime->lookupFunction(0x140940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DF0u; }
        if (ctx->pc != 0x140DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsHiGsUnInitCtx_0x140940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DF0u; }
        if (ctx->pc != 0x140DF0u) { return; }
    }
    ctx->pc = 0x140DF0u;
    // 0x140df0: 0xc0504a0  jal         func_141280
    ctx->pc = 0x140DF0u;
    SET_GPR_U32(ctx, 31, 0x140DF8u);
    ctx->pc = 0x141280u;
    if (runtime->hasFunction(0x141280u)) {
        auto targetFn = runtime->lookupFunction(0x141280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DF8u; }
        if (ctx->pc != 0x140DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsUnInitHiMem_0x141280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DF8u; }
        if (ctx->pc != 0x140DF8u) { return; }
    }
    ctx->pc = 0x140DF8u;
    // 0x140df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x140DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140DFCu;
            // 0x140e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140E04u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitStage5Boss_Hontai
// Address: 0x1bfda0 - 0x1bfddc
void UnInitStage5Boss_Hontai_0x1bfda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitStage5Boss_Hontai_0x1bfda0");
#endif

    ctx->pc = 0x1bfda0u;

    // 0x1bfda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bfda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bfda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bfda8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1BFDA8u;
    SET_GPR_U32(ctx, 31, 0x1BFDB0u);
    ctx->pc = 0x1BFDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDA8u;
            // 0x1bfdac: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDB0u; }
        if (ctx->pc != 0x1BFDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDB0u; }
        if (ctx->pc != 0x1BFDB0u) { return; }
    }
    ctx->pc = 0x1BFDB0u;
    // 0x1bfdb0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1BFDB0u;
    SET_GPR_U32(ctx, 31, 0x1BFDB8u);
    ctx->pc = 0x1BFDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDB0u;
            // 0x1bfdb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDB8u; }
        if (ctx->pc != 0x1BFDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDB8u; }
        if (ctx->pc != 0x1BFDB8u) { return; }
    }
    ctx->pc = 0x1BFDB8u;
    // 0x1bfdb8: 0xc060680  jal         func_181A00
    ctx->pc = 0x1BFDB8u;
    SET_GPR_U32(ctx, 31, 0x1BFDC0u);
    ctx->pc = 0x1BFDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDB8u;
            // 0x1bfdbc: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDC0u; }
        if (ctx->pc != 0x1BFDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDC0u; }
        if (ctx->pc != 0x1BFDC0u) { return; }
    }
    ctx->pc = 0x1BFDC0u;
    // 0x1bfdc0: 0xc060680  jal         func_181A00
    ctx->pc = 0x1BFDC0u;
    SET_GPR_U32(ctx, 31, 0x1BFDC8u);
    ctx->pc = 0x1BFDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDC0u;
            // 0x1bfdc4: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDC8u; }
        if (ctx->pc != 0x1BFDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDC8u; }
        if (ctx->pc != 0x1BFDC8u) { return; }
    }
    ctx->pc = 0x1BFDC8u;
    // 0x1bfdc8: 0xc060680  jal         func_181A00
    ctx->pc = 0x1BFDC8u;
    SET_GPR_U32(ctx, 31, 0x1BFDD0u);
    ctx->pc = 0x1BFDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDC8u;
            // 0x1bfdcc: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDD0u; }
        if (ctx->pc != 0x1BFDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDD0u; }
        if (ctx->pc != 0x1BFDD0u) { return; }
    }
    ctx->pc = 0x1BFDD0u;
    // 0x1bfdd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDD4u;
            // 0x1bfdd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFDDCu;
}

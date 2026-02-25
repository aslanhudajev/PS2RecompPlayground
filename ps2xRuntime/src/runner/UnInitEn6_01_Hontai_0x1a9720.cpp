#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitEn6_01_Hontai
// Address: 0x1a9720 - 0x1a974c
void UnInitEn6_01_Hontai_0x1a9720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitEn6_01_Hontai_0x1a9720");
#endif

    ctx->pc = 0x1a9720u;

    // 0x1a9720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9728: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1A9728u;
    SET_GPR_U32(ctx, 31, 0x1A9730u);
    ctx->pc = 0x1A972Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9728u;
            // 0x1a972c: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9730u; }
        if (ctx->pc != 0x1A9730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9730u; }
        if (ctx->pc != 0x1A9730u) { return; }
    }
    ctx->pc = 0x1A9730u;
    // 0x1a9730: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1A9730u;
    SET_GPR_U32(ctx, 31, 0x1A9738u);
    ctx->pc = 0x1A9734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9730u;
            // 0x1a9734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9738u; }
        if (ctx->pc != 0x1A9738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9738u; }
        if (ctx->pc != 0x1A9738u) { return; }
    }
    ctx->pc = 0x1A9738u;
    // 0x1a9738: 0xc060680  jal         func_181A00
    ctx->pc = 0x1A9738u;
    SET_GPR_U32(ctx, 31, 0x1A9740u);
    ctx->pc = 0x1A973Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9738u;
            // 0x1a973c: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9740u; }
        if (ctx->pc != 0x1A9740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9740u; }
        if (ctx->pc != 0x1A9740u) { return; }
    }
    ctx->pc = 0x1A9740u;
    // 0x1a9740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9744: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9744u;
            // 0x1a9748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A974Cu;
}

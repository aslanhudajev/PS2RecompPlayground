#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: mpegNodata
// Address: 0x18a530 - 0x18a55c
void mpegNodata_0x18a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("mpegNodata_0x18a530");
#endif

    ctx->pc = 0x18a530u;

    // 0x18a530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a538: 0xc062138  jal         func_1884E0
    ctx->pc = 0x18A538u;
    SET_GPR_U32(ctx, 31, 0x18A540u);
    ctx->pc = 0x1884E0u;
    if (runtime->hasFunction(0x1884E0u)) {
        auto targetFn = runtime->lookupFunction(0x1884E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A540u; }
        if (ctx->pc != 0x18A540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x1884e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A540u; }
        if (ctx->pc != 0x18A540u) { return; }
    }
    ctx->pc = 0x18A540u;
    // 0x18a540: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x18a540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18a544: 0xc06270c  jal         func_189C30
    ctx->pc = 0x18A544u;
    SET_GPR_U32(ctx, 31, 0x18A54Cu);
    ctx->pc = 0x18A548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A544u;
            // 0x18a548: 0x2484fe48  addiu       $a0, $a0, -0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189C30u;
    if (runtime->hasFunction(0x189C30u)) {
        auto targetFn = runtime->lookupFunction(0x189C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A54Cu; }
        if (ctx->pc != 0x18A54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufAddDMA_0x189c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A54Cu; }
        if (ctx->pc != 0x18A54Cu) { return; }
    }
    ctx->pc = 0x18A54Cu;
    // 0x18a54c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a554: 0x3e00008  jr          $ra
    ctx->pc = 0x18A554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A554u;
            // 0x18a558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A55Cu;
}

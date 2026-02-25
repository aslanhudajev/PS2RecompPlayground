#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawBG
// Address: 0x15d7d0 - 0x15d81c
void drawBG_0x15d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawBG_0x15d7d0");
#endif

    ctx->pc = 0x15d7d0u;

    // 0x15d7d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15d7d4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d7d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d7dc: 0x24424950  addiu       $v0, $v0, 0x4950
    ctx->pc = 0x15d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18768));
    // 0x15d7e0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x15d7e4: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x15d7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x15d7e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d7ec: 0x24429c70  addiu       $v0, $v0, -0x6390
    ctx->pc = 0x15d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941808));
    // 0x15d7f0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x15d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x15d7f4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d7f8: 0x24424930  addiu       $v0, $v0, 0x4930
    ctx->pc = 0x15d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18736));
    // 0x15d7fc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D7FCu;
    SET_GPR_U32(ctx, 31, 0x15D804u);
    ctx->pc = 0x15D800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7FCu;
            // 0x15d800: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D804u; }
        if (ctx->pc != 0x15D804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D804u; }
        if (ctx->pc != 0x15D804u) { return; }
    }
    ctx->pc = 0x15D804u;
    // 0x15d804: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x15d804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x15d808: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D808u;
    SET_GPR_U32(ctx, 31, 0x15D810u);
    ctx->pc = 0x15D80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D808u;
            // 0x15d80c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D810u; }
        if (ctx->pc != 0x15D810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D810u; }
        if (ctx->pc != 0x15D810u) { return; }
    }
    ctx->pc = 0x15D810u;
    // 0x15d810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d814: 0x3e00008  jr          $ra
    ctx->pc = 0x15D814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D814u;
            // 0x15d818: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D81Cu;
}

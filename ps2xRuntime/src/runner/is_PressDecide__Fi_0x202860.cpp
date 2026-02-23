#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PressDecide__Fi
// Address: 0x202860 - 0x20287c
void is_PressDecide__Fi_0x202860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PressDecide__Fi");


    ctx->pc = 0x202860u;

    // 0x202860: 0x27bdfff0
    ctx->pc = 0x202860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202864: 0x7fbf0000
    ctx->pc = 0x202864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x202868: 0xc080978
    ctx->pc = 0x202868u;
    SET_GPR_U32(ctx, 31, 0x202870u);
    ctx->pc = 0x2025E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PullTrigger__Fi_0x2025e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202870u; }
        else if (ctx->pc != 0x202870u) { ctx->pc = 0x202870u; }
    }
    if (ctx->pc != 0x202870u) { return; }
    ctx->pc = 0x202870u;
    // 0x202870: 0x7bbf0000
    ctx->pc = 0x202870u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202874: 0x3e00008
    ctx->pc = 0x202874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202878u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20287Cu;
}

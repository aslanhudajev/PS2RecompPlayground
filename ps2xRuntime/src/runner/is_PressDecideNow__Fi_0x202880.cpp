#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PressDecideNow__Fi
// Address: 0x202880 - 0x20289c
void is_PressDecideNow__Fi_0x202880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PressDecideNow__Fi");


    ctx->pc = 0x202880u;

    // 0x202880: 0x27bdfff0
    ctx->pc = 0x202880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202884: 0x7fbf0000
    ctx->pc = 0x202884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x202888: 0xc080988
    ctx->pc = 0x202888u;
    SET_GPR_U32(ctx, 31, 0x202890u);
    ctx->pc = 0x202620u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PullTriggerNow__Fi_0x202620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202890u; }
        else if (ctx->pc != 0x202890u) { ctx->pc = 0x202890u; }
    }
    if (ctx->pc != 0x202890u) { return; }
    ctx->pc = 0x202890u;
    // 0x202890: 0x7bbf0000
    ctx->pc = 0x202890u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202894: 0x3e00008
    ctx->pc = 0x202894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202898u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20289Cu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loop1__16PostRendMgrClassFv
// Address: 0x2156b0 - 0x2156cc
void loop1__16PostRendMgrClassFv_0x2156b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loop1__16PostRendMgrClassFv");


    ctx->pc = 0x2156b0u;

    // 0x2156b0: 0x27bdfff0
    ctx->pc = 0x2156b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2156b4: 0x7fbf0000
    ctx->pc = 0x2156b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2156b8: 0xc068918
    ctx->pc = 0x2156B8u;
    SET_GPR_U32(ctx, 31, 0x2156C0u);
    ctx->pc = 0x2156BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->pc = 0x1A2460u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskLoop_0x1a2460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2156C0u; }
        else if (ctx->pc != 0x2156C0u) { ctx->pc = 0x2156C0u; }
    }
    if (ctx->pc != 0x2156C0u) { return; }
    ctx->pc = 0x2156C0u;
    // 0x2156c0: 0x7bbf0000
    ctx->pc = 0x2156c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2156c4: 0x3e00008
    ctx->pc = 0x2156C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2156C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2156CCu;
}

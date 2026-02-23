#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sys2_free
// Address: 0x1a4400 - 0x1a441c
void sys2_free_0x1a4400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sys2_free");


    ctx->pc = 0x1a4400u;

    // 0x1a4400: 0x27bdfff0
    ctx->pc = 0x1a4400u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4404: 0x7fbf0000
    ctx->pc = 0x1a4404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a4408: 0xc0687c0
    ctx->pc = 0x1A4408u;
    SET_GPR_U32(ctx, 31, 0x1A4410u);
    ctx->pc = 0x1A440Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4410u; }
        else if (ctx->pc != 0x1A4410u) { ctx->pc = 0x1A4410u; }
    }
    if (ctx->pc != 0x1A4410u) { return; }
    ctx->pc = 0x1A4410u;
    // 0x1a4410: 0x7bbf0000
    ctx->pc = 0x1a4410u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4414: 0x3e00008
    ctx->pc = 0x1A4414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4418u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A441Cu;
}

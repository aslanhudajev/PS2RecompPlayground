#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putNotPushPop__7CFcvTRSFff
// Address: 0x1e7d00 - 0x1e7d1c
void putNotPushPop__7CFcvTRSFff_0x1e7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putNotPushPop__7CFcvTRSFff");


    ctx->pc = 0x1e7d00u;

    // 0x1e7d00: 0x27bdfff0
    ctx->pc = 0x1e7d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7d04: 0x7fbf0000
    ctx->pc = 0x1e7d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e7d08: 0xc079f58
    ctx->pc = 0x1E7D08u;
    SET_GPR_U32(ctx, 31, 0x1E7D10u);
    ctx->pc = 0x1E7D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        putSub__7CFcvTRSFff_0x1e7d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D10u; }
        else if (ctx->pc != 0x1E7D10u) { ctx->pc = 0x1E7D10u; }
    }
    if (ctx->pc != 0x1E7D10u) { return; }
    ctx->pc = 0x1E7D10u;
    // 0x1e7d10: 0x7bbf0000
    ctx->pc = 0x1e7d10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7d14: 0x3e00008
    ctx->pc = 0x1E7D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7D18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7D1Cu;
}

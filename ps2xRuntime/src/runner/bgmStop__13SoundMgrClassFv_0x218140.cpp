#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: bgmStop__13SoundMgrClassFv
// Address: 0x218140 - 0x21815c
void bgmStop__13SoundMgrClassFv_0x218140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("bgmStop__13SoundMgrClassFv");


    ctx->pc = 0x218140u;

    // 0x218140: 0x27bdfff0
    ctx->pc = 0x218140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218144: 0x7fbf0000
    ctx->pc = 0x218144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x218148: 0xc05c73a
    ctx->pc = 0x218148u;
    SET_GPR_U32(ctx, 31, 0x218150u);
    ctx->pc = 0x21814Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937856)));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218150u; }
        else if (ctx->pc != 0x218150u) { ctx->pc = 0x218150u; }
    }
    if (ctx->pc != 0x218150u) { return; }
    ctx->pc = 0x218150u;
    // 0x218150: 0x7bbf0000
    ctx->pc = 0x218150u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218154: 0x3e00008
    ctx->pc = 0x218154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218158u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21815Cu;
}

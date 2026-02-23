#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_GetTermSrc
// Address: 0x190818 - 0x190834
void sfadxt_GetTermSrc_0x190818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_GetTermSrc");


    ctx->pc = 0x190818u;

    // 0x190818: 0x27bdfff0
    ctx->pc = 0x190818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19081c: 0xffbf0000
    ctx->pc = 0x19081cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190820: 0xc064a60
    ctx->pc = 0x190820u;
    SET_GPR_U32(ctx, 31, 0x190828u);
    ctx->pc = 0x190824u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 17604)));
    ctx->pc = 0x192980u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetTermFlg_0x192980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190828u; }
        else if (ctx->pc != 0x190828u) { ctx->pc = 0x190828u; }
    }
    if (ctx->pc != 0x190828u) { return; }
    ctx->pc = 0x190828u;
    // 0x190828: 0xdfbf0000
    ctx->pc = 0x190828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19082c: 0x3e00008
    ctx->pc = 0x19082Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190830u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190834u;
}

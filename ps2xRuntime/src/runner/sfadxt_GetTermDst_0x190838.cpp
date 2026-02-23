#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_GetTermDst
// Address: 0x190838 - 0x190854
void sfadxt_GetTermDst_0x190838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_GetTermDst");


    ctx->pc = 0x190838u;

    // 0x190838: 0x27bdfff0
    ctx->pc = 0x190838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19083c: 0xffbf0000
    ctx->pc = 0x19083cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190840: 0xc064a60
    ctx->pc = 0x190840u;
    SET_GPR_U32(ctx, 31, 0x190848u);
    ctx->pc = 0x190844u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 17608)));
    ctx->pc = 0x192980u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetTermFlg_0x192980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190848u; }
        else if (ctx->pc != 0x190848u) { ctx->pc = 0x190848u; }
    }
    if (ctx->pc != 0x190848u) { return; }
    ctx->pc = 0x190848u;
    // 0x190848: 0xdfbf0000
    ctx->pc = 0x190848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19084c: 0x3e00008
    ctx->pc = 0x19084Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190850u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190854u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_GetTermDst
// Address: 0x195b50 - 0x195b6c
void sfmpv_GetTermDst_0x195b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_GetTermDst");


    ctx->pc = 0x195b50u;

    // 0x195b50: 0x27bdfff0
    ctx->pc = 0x195b50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195b54: 0xffbf0000
    ctx->pc = 0x195b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195b58: 0xc064a60
    ctx->pc = 0x195B58u;
    SET_GPR_U32(ctx, 31, 0x195B60u);
    ctx->pc = 0x195B5Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 15848)));
    ctx->pc = 0x192980u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetTermFlg_0x192980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195B60u; }
        else if (ctx->pc != 0x195B60u) { ctx->pc = 0x195B60u; }
    }
    if (ctx->pc != 0x195B60u) { return; }
    ctx->pc = 0x195B60u;
    // 0x195b60: 0xdfbf0000
    ctx->pc = 0x195b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195b64: 0x3e00008
    ctx->pc = 0x195B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195B68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195B6Cu;
}

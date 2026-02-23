#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_GetTermSrc
// Address: 0x196970 - 0x19698c
void sfmpv_GetTermSrc_0x196970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_GetTermSrc");


    ctx->pc = 0x196970u;

    // 0x196970: 0x27bdfff0
    ctx->pc = 0x196970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196974: 0xffbf0000
    ctx->pc = 0x196974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196978: 0xc064a60
    ctx->pc = 0x196978u;
    SET_GPR_U32(ctx, 31, 0x196980u);
    ctx->pc = 0x19697Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 15844)));
    ctx->pc = 0x192980u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetTermFlg_0x192980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196980u; }
        else if (ctx->pc != 0x196980u) { ctx->pc = 0x196980u; }
    }
    if (ctx->pc != 0x196980u) { return; }
    ctx->pc = 0x196980u;
    // 0x196980: 0xdfbf0000
    ctx->pc = 0x196980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196984: 0x3e00008
    ctx->pc = 0x196984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196988u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19698Cu;
}

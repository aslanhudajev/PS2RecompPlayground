#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFAOAP_GetWrite
// Address: 0x191478 - 0x191498
void SFAOAP_GetWrite_0x191478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFAOAP_GetWrite");


    ctx->pc = 0x191478u;

    // 0x191478: 0x27bdfff0
    ctx->pc = 0x191478u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19147c: 0x3c05ff00
    ctx->pc = 0x19147cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x191480: 0xffbf0000
    ctx->pc = 0x191480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191484: 0xc064ea0
    ctx->pc = 0x191484u;
    SET_GPR_U32(ctx, 31, 0x19148Cu);
    ctx->pc = 0x191488u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 2561));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19148Cu; }
        else if (ctx->pc != 0x19148Cu) { ctx->pc = 0x19148Cu; }
    }
    if (ctx->pc != 0x19148Cu) { return; }
    ctx->pc = 0x19148Cu;
    // 0x19148c: 0xdfbf0000
    ctx->pc = 0x19148cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191490: 0x3e00008
    ctx->pc = 0x191490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191494u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191498u;
}

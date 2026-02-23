#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec__11SprMgrClassFP11DATAENT_REQ
// Address: 0x217450 - 0x21746c
void entryExec__11SprMgrClassFP11DATAENT_REQ_0x217450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec__11SprMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x217450u;

    // 0x217450: 0x27bdfff0
    ctx->pc = 0x217450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217454: 0x7fbf0000
    ctx->pc = 0x217454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x217458: 0xc085d08
    ctx->pc = 0x217458u;
    SET_GPR_U32(ctx, 31, 0x217460u);
    ctx->pc = 0x21745Cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x217420u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_00__11SprMgrClassFv_0x217420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217460u; }
        else if (ctx->pc != 0x217460u) { ctx->pc = 0x217460u; }
    }
    if (ctx->pc != 0x217460u) { return; }
    ctx->pc = 0x217460u;
    // 0x217460: 0x7bbf0000
    ctx->pc = 0x217460u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217464: 0x3e00008
    ctx->pc = 0x217464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21746Cu;
}

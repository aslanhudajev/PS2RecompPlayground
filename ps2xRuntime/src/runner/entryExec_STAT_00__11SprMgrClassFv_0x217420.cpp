#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_00__11SprMgrClassFv
// Address: 0x217420 - 0x217444
void entryExec_STAT_00__11SprMgrClassFv_0x217420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_00__11SprMgrClassFv");


    ctx->pc = 0x217420u;

    // 0x217420: 0x27bdfff0
    ctx->pc = 0x217420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217424: 0x7fbf0000
    ctx->pc = 0x217424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x217428: 0x8c820000
    ctx->pc = 0x217428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21742c: 0xc085cac
    ctx->pc = 0x21742Cu;
    SET_GPR_U32(ctx, 31, 0x217434u);
    ctx->pc = 0x217430u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x2172B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetSprTex0__Fi_0x2172b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217434u; }
        else if (ctx->pc != 0x217434u) { ctx->pc = 0x217434u; }
    }
    if (ctx->pc != 0x217434u) { return; }
    ctx->pc = 0x217434u;
    // 0x217434: 0x7bbf0000
    ctx->pc = 0x217434u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217438: 0x2402ffff
    ctx->pc = 0x217438u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21743c: 0x3e00008
    ctx->pc = 0x21743Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217440u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x217444u;
}

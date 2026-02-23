#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loop__22ClearRankingCameraTaskFv
// Address: 0x225570 - 0x22558c
void loop__22ClearRankingCameraTaskFv_0x225570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loop__22ClearRankingCameraTaskFv");


    ctx->pc = 0x225570u;

    // 0x225570: 0x27bdfff0
    ctx->pc = 0x225570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225574: 0x7fbf0000
    ctx->pc = 0x225574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x225578: 0xc072620
    ctx->pc = 0x225578u;
    SET_GPR_U32(ctx, 31, 0x225580u);
    ctx->pc = 0x1C9880u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcCamera__10CameraTaskFv_0x1c9880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225580u; }
        else if (ctx->pc != 0x225580u) { ctx->pc = 0x225580u; }
    }
    if (ctx->pc != 0x225580u) { return; }
    ctx->pc = 0x225580u;
    // 0x225580: 0x7bbf0000
    ctx->pc = 0x225580u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225584: 0x3e00008
    ctx->pc = 0x225584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225588u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22558Cu;
}

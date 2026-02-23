#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GETCPMODE__13EventCtrlTaskFv
// Address: 0x1e3260 - 0x1e327c
void GETCPMODE__13EventCtrlTaskFv_0x1e3260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GETCPMODE__13EventCtrlTaskFv");


    ctx->pc = 0x1e3260u;

    // 0x1e3260: 0x8c83000c
    ctx->pc = 0x1e3260u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3264: 0x8c630004
    ctx->pc = 0x1e3264u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3268: 0xaf838c74
    ctx->pc = 0x1e3268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 3));
    // 0x1e326c: 0x8c83000c
    ctx->pc = 0x1e326cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3270: 0x24630008
    ctx->pc = 0x1e3270u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3274: 0x3e00008
    ctx->pc = 0x1E3274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3278u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E327Cu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gameCameraCtrl__10CameraTaskFv
// Address: 0x1c9840 - 0x1c9860
void gameCameraCtrl__10CameraTaskFv_0x1c9840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gameCameraCtrl__10CameraTaskFv");


    ctx->pc = 0x1c9840u;

    // 0x1c9840: 0x27bdfff0
    ctx->pc = 0x1c9840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9844: 0x3c020030
    ctx->pc = 0x1c9844u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c9848: 0x7fbf0000
    ctx->pc = 0x1c9848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c984c: 0xc0726b0
    ctx->pc = 0x1C984Cu;
    SET_GPR_U32(ctx, 31, 0x1C9854u);
    ctx->pc = 0x1C9850u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23600));
    ctx->pc = 0x1C9AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        gameCameraCtrl__22CameraMgrInternalClassFv_0x1c9ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9854u; }
        else if (ctx->pc != 0x1C9854u) { ctx->pc = 0x1C9854u; }
    }
    if (ctx->pc != 0x1C9854u) { return; }
    ctx->pc = 0x1C9854u;
    // 0x1c9854: 0x7bbf0000
    ctx->pc = 0x1c9854u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9858: 0x3e00008
    ctx->pc = 0x1C9858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C985Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9860u;
}

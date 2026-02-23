#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chkRemainCamJob__10CameraTaskFv
// Address: 0x1c98e0 - 0x1c9900
void chkRemainCamJob__10CameraTaskFv_0x1c98e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chkRemainCamJob__10CameraTaskFv");


    ctx->pc = 0x1c98e0u;

    // 0x1c98e0: 0x27bdfff0
    ctx->pc = 0x1c98e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c98e4: 0x3c020030
    ctx->pc = 0x1c98e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c98e8: 0x7fbf0000
    ctx->pc = 0x1c98e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c98ec: 0xc072ca8
    ctx->pc = 0x1C98ECu;
    SET_GPR_U32(ctx, 31, 0x1C98F4u);
    ctx->pc = 0x1C98F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23600));
    ctx->pc = 0x1CB2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkRemainCamJob__22CameraMgrInternalClassFv_0x1cb2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C98F4u; }
        else if (ctx->pc != 0x1C98F4u) { ctx->pc = 0x1C98F4u; }
    }
    if (ctx->pc != 0x1C98F4u) { return; }
    ctx->pc = 0x1C98F4u;
    // 0x1c98f4: 0x7bbf0000
    ctx->pc = 0x1c98f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c98f8: 0x3e00008
    ctx->pc = 0x1C98F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C98FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9900u;
}

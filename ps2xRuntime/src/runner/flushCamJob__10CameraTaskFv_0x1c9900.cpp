#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: flushCamJob__10CameraTaskFv
// Address: 0x1c9900 - 0x1c9920
void flushCamJob__10CameraTaskFv_0x1c9900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("flushCamJob__10CameraTaskFv");


    ctx->pc = 0x1c9900u;

    // 0x1c9900: 0x27bdfff0
    ctx->pc = 0x1c9900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9904: 0x3c020030
    ctx->pc = 0x1c9904u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c9908: 0x7fbf0000
    ctx->pc = 0x1c9908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c990c: 0xc072cb0
    ctx->pc = 0x1C990Cu;
    SET_GPR_U32(ctx, 31, 0x1C9914u);
    ctx->pc = 0x1C9910u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23600));
    ctx->pc = 0x1CB2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        flushCamJob__22CameraMgrInternalClassFv_0x1cb2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9914u; }
        else if (ctx->pc != 0x1C9914u) { ctx->pc = 0x1C9914u; }
    }
    if (ctx->pc != 0x1C9914u) { return; }
    ctx->pc = 0x1C9914u;
    // 0x1c9914: 0x7bbf0000
    ctx->pc = 0x1c9914u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9918: 0x3e00008
    ctx->pc = 0x1C9918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C991Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9920u;
}

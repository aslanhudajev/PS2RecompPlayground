#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__10CameraTaskFv
// Address: 0x1c9860 - 0x1c9880
void init__10CameraTaskFv_0x1c9860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__10CameraTaskFv");


    ctx->pc = 0x1c9860u;

    // 0x1c9860: 0x27bdfff0
    ctx->pc = 0x1c9860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9864: 0x3c020030
    ctx->pc = 0x1c9864u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c9868: 0x7fbf0000
    ctx->pc = 0x1c9868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c986c: 0xc072660
    ctx->pc = 0x1C986Cu;
    SET_GPR_U32(ctx, 31, 0x1C9874u);
    ctx->pc = 0x1C9870u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23600));
    ctx->pc = 0x1C9980u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__22CameraMgrInternalClassFv_0x1c9980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9874u; }
        else if (ctx->pc != 0x1C9874u) { ctx->pc = 0x1C9874u; }
    }
    if (ctx->pc != 0x1C9874u) { return; }
    ctx->pc = 0x1C9874u;
    // 0x1c9874: 0x7bbf0000
    ctx->pc = 0x1c9874u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9878: 0x3e00008
    ctx->pc = 0x1C9878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C987Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9880u;
}

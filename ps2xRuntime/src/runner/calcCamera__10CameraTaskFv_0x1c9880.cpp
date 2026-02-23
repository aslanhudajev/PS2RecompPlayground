#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcCamera__10CameraTaskFv
// Address: 0x1c9880 - 0x1c98a0
void calcCamera__10CameraTaskFv_0x1c9880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcCamera__10CameraTaskFv");


    ctx->pc = 0x1c9880u;

    // 0x1c9880: 0x27bdfff0
    ctx->pc = 0x1c9880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9884: 0x3c020030
    ctx->pc = 0x1c9884u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c9888: 0x7fbf0000
    ctx->pc = 0x1c9888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c988c: 0xc0726e8
    ctx->pc = 0x1C988Cu;
    SET_GPR_U32(ctx, 31, 0x1C9894u);
    ctx->pc = 0x1C9890u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23600));
    ctx->pc = 0x1C9BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcCamera__22CameraMgrInternalClassFv_0x1c9ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9894u; }
        else if (ctx->pc != 0x1C9894u) { ctx->pc = 0x1C9894u; }
    }
    if (ctx->pc != 0x1C9894u) { return; }
    ctx->pc = 0x1C9894u;
    // 0x1c9894: 0x7bbf0000
    ctx->pc = 0x1c9894u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9898: 0x3e00008
    ctx->pc = 0x1C9898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C989Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C98A0u;
}

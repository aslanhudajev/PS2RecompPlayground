#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryObj__10CameraTaskFiP11tagNLpoint3f
// Address: 0x1c9920 - 0x1c9940
void entryObj__10CameraTaskFiP11tagNLpoint3f_0x1c9920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryObj__10CameraTaskFiP11tagNLpoint3f");


    ctx->pc = 0x1c9920u;

    // 0x1c9920: 0x27bdfff0
    ctx->pc = 0x1c9920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9924: 0x3c020030
    ctx->pc = 0x1c9924u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c9928: 0x7fbf0000
    ctx->pc = 0x1c9928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c992c: 0xc072d18
    ctx->pc = 0x1C992Cu;
    SET_GPR_U32(ctx, 31, 0x1C9934u);
    ctx->pc = 0x1C9930u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23600));
    ctx->pc = 0x1CB460u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryObj__22CameraMgrInternalClassFiP11tagNLpoint3f_0x1cb460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9934u; }
        else if (ctx->pc != 0x1C9934u) { ctx->pc = 0x1C9934u; }
    }
    if (ctx->pc != 0x1C9934u) { return; }
    ctx->pc = 0x1C9934u;
    // 0x1c9934: 0x7bbf0000
    ctx->pc = 0x1c9934u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9938: 0x3e00008
    ctx->pc = 0x1C9938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C993Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9940u;
}

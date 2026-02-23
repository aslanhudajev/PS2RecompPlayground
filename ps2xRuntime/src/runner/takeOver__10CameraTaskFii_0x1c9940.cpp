#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: takeOver__10CameraTaskFii
// Address: 0x1c9940 - 0x1c9960
void takeOver__10CameraTaskFii_0x1c9940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("takeOver__10CameraTaskFii");


    ctx->pc = 0x1c9940u;

    // 0x1c9940: 0x27bdfff0
    ctx->pc = 0x1c9940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9944: 0x3c020030
    ctx->pc = 0x1c9944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c9948: 0x7fbf0000
    ctx->pc = 0x1c9948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c994c: 0xc072e10
    ctx->pc = 0x1C994Cu;
    SET_GPR_U32(ctx, 31, 0x1C9954u);
    ctx->pc = 0x1C9950u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23600));
    ctx->pc = 0x1CB840u;
    {
        const uint32_t __entryPc = ctx->pc;
        takeOver__22CameraMgrInternalClassFii_0x1cb840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9954u; }
        else if (ctx->pc != 0x1C9954u) { ctx->pc = 0x1C9954u; }
    }
    if (ctx->pc != 0x1C9954u) { return; }
    ctx->pc = 0x1C9954u;
    // 0x1c9954: 0x7bbf0000
    ctx->pc = 0x1c9954u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9958: 0x3e00008
    ctx->pc = 0x1C9958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C995Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9960u;
}

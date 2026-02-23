#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryEvent__10CameraTaskFPUis
// Address: 0x1c98a0 - 0x1c98c0
void entryEvent__10CameraTaskFPUis_0x1c98a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryEvent__10CameraTaskFPUis");


    ctx->pc = 0x1c98a0u;

    // 0x1c98a0: 0x27bdfff0
    ctx->pc = 0x1c98a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c98a4: 0x3c020030
    ctx->pc = 0x1c98a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c98a8: 0x7fbf0000
    ctx->pc = 0x1c98a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c98ac: 0xc07277c
    ctx->pc = 0x1C98ACu;
    SET_GPR_U32(ctx, 31, 0x1C98B4u);
    ctx->pc = 0x1C98B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23600));
    ctx->pc = 0x1C9DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryEvent__22CameraMgrInternalClassFPUis_0x1c9df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C98B4u; }
        else if (ctx->pc != 0x1C98B4u) { ctx->pc = 0x1C98B4u; }
    }
    if (ctx->pc != 0x1C98B4u) { return; }
    ctx->pc = 0x1C98B4u;
    // 0x1c98b4: 0x7bbf0000
    ctx->pc = 0x1c98b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c98b8: 0x3e00008
    ctx->pc = 0x1C98B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C98BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C98C0u;
}

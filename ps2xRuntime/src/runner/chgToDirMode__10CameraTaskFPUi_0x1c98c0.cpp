#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chgToDirMode__10CameraTaskFPUi
// Address: 0x1c98c0 - 0x1c98e0
void chgToDirMode__10CameraTaskFPUi_0x1c98c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chgToDirMode__10CameraTaskFPUi");


    ctx->pc = 0x1c98c0u;

    // 0x1c98c0: 0x27bdfff0
    ctx->pc = 0x1c98c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c98c4: 0x3c020030
    ctx->pc = 0x1c98c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c98c8: 0x7fbf0000
    ctx->pc = 0x1c98c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c98cc: 0xc072794
    ctx->pc = 0x1C98CCu;
    SET_GPR_U32(ctx, 31, 0x1C98D4u);
    ctx->pc = 0x1C98D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23600));
    ctx->pc = 0x1C9E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        chgToDirMode__22CameraMgrInternalClassFPUi_0x1c9e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C98D4u; }
        else if (ctx->pc != 0x1C98D4u) { ctx->pc = 0x1C98D4u; }
    }
    if (ctx->pc != 0x1C98D4u) { return; }
    ctx->pc = 0x1C98D4u;
    // 0x1c98d4: 0x7bbf0000
    ctx->pc = 0x1c98d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c98d8: 0x3e00008
    ctx->pc = 0x1C98D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C98DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C98E0u;
}

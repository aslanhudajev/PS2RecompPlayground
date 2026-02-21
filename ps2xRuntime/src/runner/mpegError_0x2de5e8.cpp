#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mpegError
// Address: 0x2de5e8 - 0x2de610
void mpegError_0x2de5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de5e8u;

    // 0x2de5e8: 0x27bdfff0
    ctx->pc = 0x2de5e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de5ec: 0xffbf0000
    ctx->pc = 0x2de5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de5f0: 0x3c04003c
    ctx->pc = 0x2de5f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2de5f4: 0x248488c8
    ctx->pc = 0x2de5f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936776));
    // 0x2de5f8: 0xc0b4a34
    ctx->pc = 0x2DE5F8u;
    SET_GPR_U32(ctx, 31, 0x2DE600u);
    ctx->pc = 0x2DE5FCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE600u; }
    }
    if (ctx->pc != 0x2DE600u) { return; }
    ctx->pc = 0x2DE600u;
    // 0x2de600: 0x24020001
    ctx->pc = 0x2de600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de604: 0xdfbf0000
    ctx->pc = 0x2de604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de608: 0x3e00008
    ctx->pc = 0x2DE608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE60Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE610u;
}

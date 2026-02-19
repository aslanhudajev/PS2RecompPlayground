#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PointVisible
// Address: 0x2d0e58 - 0x2d0e74
void PointVisible_0x2d0e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0e58u;

    // 0x2d0e58: 0x27bdfff0
    ctx->pc = 0x2d0e58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0e5c: 0xffbf0000
    ctx->pc = 0x2d0e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0e60: 0xc0b108c
    ctx->pc = 0x2D0E60u;
    SET_GPR_U32(ctx, 31, 0x2D0E68u);
    ctx->pc = 0x2C4230u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldSphereVisible3_0x2c4230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E68u; }
    }
    if (ctx->pc != 0x2D0E68u) { return; }
    ctx->pc = 0x2D0E68u;
    // 0x2d0e68: 0xdfbf0000
    ctx->pc = 0x2d0e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0e6c: 0x3e00008
    ctx->pc = 0x2D0E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0E70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0E74u;
}

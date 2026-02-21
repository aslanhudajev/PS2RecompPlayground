#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ffcos
// Address: 0x2d73e0 - 0x2d7408
void ffcos_0x2d73e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d73e0u;

    // 0x2d73e0: 0x27bdfff0
    ctx->pc = 0x2d73e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d73e4: 0xffbf0000
    ctx->pc = 0x2d73e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d73e8: 0x3c013fc9
    ctx->pc = 0x2d73e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2d73ec: 0x34210fdb
    ctx->pc = 0x2d73ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d73f0: 0x44810000
    ctx->pc = 0x2d73f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d73f4: 0xc0b5c96
    ctx->pc = 0x2D73F4u;
    SET_GPR_U32(ctx, 31, 0x2D73FCu);
    ctx->pc = 0x2D73F8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x2D7258u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffsin_0x2d7258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D73FCu; }
    }
    if (ctx->pc != 0x2D73FCu) { return; }
    ctx->pc = 0x2D73FCu;
    // 0x2d73fc: 0xdfbf0000
    ctx->pc = 0x2d73fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7400: 0x3e00008
    ctx->pc = 0x2D7400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7404u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7408u;
}

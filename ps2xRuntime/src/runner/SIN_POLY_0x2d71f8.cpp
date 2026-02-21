#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SIN_POLY
// Address: 0x2d71f8 - 0x2d7254
void SIN_POLY_0x2d71f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d71f8u;

    // 0x2d71f8: 0x460c6042
    ctx->pc = 0x2d71f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2d71fc: 0x3c013638
    ctx->pc = 0x2d71fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)13880 << 16));
    // 0x2d7200: 0x3421ef1d
    ctx->pc = 0x2d7200u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 61213));
    // 0x2d7204: 0x44810000
    ctx->pc = 0x2d7204u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d7208: 0x46000882
    ctx->pc = 0x2d7208u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d720c: 0x3c01b950
    ctx->pc = 0x2d720cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)47440 << 16));
    // 0x2d7210: 0x34210d01
    ctx->pc = 0x2d7210u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 3329));
    // 0x2d7214: 0x44810000
    ctx->pc = 0x2d7214u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d7218: 0x46001000
    ctx->pc = 0x2d7218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d721c: 0x46000882
    ctx->pc = 0x2d721cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d7220: 0x3c013c08
    ctx->pc = 0x2d7220u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15368 << 16));
    // 0x2d7224: 0x34218889
    ctx->pc = 0x2d7224u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2d7228: 0x44810000
    ctx->pc = 0x2d7228u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d722c: 0x46001000
    ctx->pc = 0x2d722cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d7230: 0x46000882
    ctx->pc = 0x2d7230u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d7234: 0x3c01be2a
    ctx->pc = 0x2d7234u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48682 << 16));
    // 0x2d7238: 0x3421aaab
    ctx->pc = 0x2d7238u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43691));
    // 0x2d723c: 0x44810000
    ctx->pc = 0x2d723cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d7240: 0x46001000
    ctx->pc = 0x2d7240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d7244: 0x46000882
    ctx->pc = 0x2d7244u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d7248: 0x46026002
    ctx->pc = 0x2d7248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2d724c: 0x3e00008
    ctx->pc = 0x2D724Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7250u;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7254u;
}

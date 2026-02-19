#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FogFadeIn
// Address: 0x262d18 - 0x262d4c
void FogFadeIn_0x262d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x262d18u;

    // 0x262d18: 0x3c013f80
    ctx->pc = 0x262d18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x262d1c: 0x44816800
    ctx->pc = 0x262d1cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x262d20: 0x460c6b41
    ctx->pc = 0x262d20u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x262d24: 0x3c01437f
    ctx->pc = 0x262d24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x262d28: 0x44810000
    ctx->pc = 0x262d28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x262d2c: 0x46006b42
    ctx->pc = 0x262d2cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x262d30: 0x282d
    ctx->pc = 0x262d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d34: 0x46006b06
    ctx->pc = 0x262d34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x262d38: 0x3c014200
    ctx->pc = 0x262d38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16896 << 16));
    // 0x262d3c: 0x44817000
    ctx->pc = 0x262d3cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x262d40: 0x44807800
    ctx->pc = 0x262d40u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 0);
    // 0x262d44: 0x80b3fe0
    ctx->pc = 0x262D44u;
    ctx->pc = 0x262D48u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    ctx->pc = 0x2CFF80u;
    MBFogInit_0x2cff80(rdram, ctx, runtime); return;
    ctx->pc = 0x262D4Cu;
}

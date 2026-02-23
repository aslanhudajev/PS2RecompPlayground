#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLightEffectiveRadius
// Address: 0x1a6a60 - 0x1a6aac
void nlLightEffectiveRadius_0x1a6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLightEffectiveRadius");


    ctx->pc = 0x1a6a60u;

    // 0x1a6a60: 0x41840
    ctx->pc = 0x1a6a60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a6a64: 0x641821
    ctx->pc = 0x1a6a64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6a68: 0x31880
    ctx->pc = 0x1a6a68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6a6c: 0x641821
    ctx->pc = 0x1a6a6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6a70: 0x32100
    ctx->pc = 0x1a6a70u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a6a74: 0x3c030030
    ctx->pc = 0x1a6a74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a6a78: 0x24633d30
    ctx->pc = 0x1a6a78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15664));
    // 0x1a6a7c: 0x642021
    ctx->pc = 0x1a6a7cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6a80: 0x460c6002
    ctx->pc = 0x1a6a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1a6a84: 0xe48c00bc
    ctx->pc = 0x1a6a84u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
    // 0x1a6a88: 0x3c033f80
    ctx->pc = 0x1a6a88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1a6a8c: 0xe48000b0
    ctx->pc = 0x1a6a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x1a6a90: 0x44830000
    ctx->pc = 0x1a6a90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1a6a94: 0x0
    ctx->pc = 0x1a6a94u;
    // NOP
    // 0x1a6a98: 0x460c0003
    ctx->pc = 0x1a6a98u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
    // 0x1a6a9c: 0x0
    ctx->pc = 0x1a6a9cu;
    // NOP
    // 0x1a6aa0: 0x0
    ctx->pc = 0x1a6aa0u;
    // NOP
    // 0x1a6aa4: 0x3e00008
    ctx->pc = 0x1A6AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6AA8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6AACu;
}

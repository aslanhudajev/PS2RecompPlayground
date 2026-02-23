#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLightCutoffSinCos
// Address: 0x1a6ab0 - 0x1a6af8
void nlLightCutoffSinCos_0x1a6ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLightCutoffSinCos");


    ctx->pc = 0x1a6ab0u;

    // 0x1a6ab0: 0x41840
    ctx->pc = 0x1a6ab0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a6ab4: 0x641821
    ctx->pc = 0x1a6ab4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6ab8: 0x31880
    ctx->pc = 0x1a6ab8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6abc: 0x641821
    ctx->pc = 0x1a6abcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6ac0: 0x32100
    ctx->pc = 0x1a6ac0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a6ac4: 0x3c030030
    ctx->pc = 0x1a6ac4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a6ac8: 0x24633d30
    ctx->pc = 0x1a6ac8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15664));
    // 0x1a6acc: 0x642021
    ctx->pc = 0x1a6accu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6ad0: 0x3c033f80
    ctx->pc = 0x1a6ad0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1a6ad4: 0x44830800
    ctx->pc = 0x1a6ad4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1a6ad8: 0xe48c00c0
    ctx->pc = 0x1a6ad8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x1a6adc: 0x460d0801
    ctx->pc = 0x1a6adcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x1a6ae0: 0xe48d0068
    ctx->pc = 0x1a6ae0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x1a6ae4: 0x46000803
    ctx->pc = 0x1a6ae4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1a6ae8: 0x0
    ctx->pc = 0x1a6ae8u;
    // NOP
    // 0x1a6aec: 0x0
    ctx->pc = 0x1a6aecu;
    // NOP
    // 0x1a6af0: 0x3e00008
    ctx->pc = 0x1A6AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6AF4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6AF8u;
}

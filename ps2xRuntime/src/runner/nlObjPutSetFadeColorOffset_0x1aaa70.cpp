#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutSetFadeColorOffset
// Address: 0x1aaa70 - 0x1aaaac
void nlObjPutSetFadeColorOffset_0x1aaa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutSetFadeColorOffset");


    ctx->pc = 0x1aaa70u;

    // 0x1aaa70: 0x460d6000
    ctx->pc = 0x1aaa70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x1aaa74: 0x3c010030
    ctx->pc = 0x1aaa74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaa78: 0xe42c3980
    ctx->pc = 0x1aaa78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14720), bits); }
    // 0x1aaa7c: 0x3c010030
    ctx->pc = 0x1aaa7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaa80: 0x46007040
    ctx->pc = 0x1aaa80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x1aaa84: 0x3c034040
    ctx->pc = 0x1aaa84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16448 << 16));
    // 0x1aaa88: 0xe42d3984
    ctx->pc = 0x1aaa88u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14724), bits); }
    // 0x1aaa8c: 0x3c010030
    ctx->pc = 0x1aaa8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaa90: 0x44830000
    ctx->pc = 0x1aaa90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1aaa94: 0xe42e3988
    ctx->pc = 0x1aaa94u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14728), bits); }
    // 0x1aaa98: 0x46000803
    ctx->pc = 0x1aaa98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1aaa9c: 0x0
    ctx->pc = 0x1aaa9cu;
    // NOP
    // 0x1aaaa0: 0x3c010030
    ctx->pc = 0x1aaaa0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaaa4: 0x3e00008
    ctx->pc = 0x1AAAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAAA8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14732), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAAACu;
}

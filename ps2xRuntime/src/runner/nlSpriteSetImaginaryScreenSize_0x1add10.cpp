#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSpriteSetImaginaryScreenSize
// Address: 0x1add10 - 0x1add38
void nlSpriteSetImaginaryScreenSize_0x1add10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSpriteSetImaginaryScreenSize");


    ctx->pc = 0x1add10u;

    // 0x1add10: 0x3c033f80
    ctx->pc = 0x1add10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1add14: 0x44830000
    ctx->pc = 0x1add14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1add18: 0xe78c8ac0
    ctx->pc = 0x1add18u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937280), bits); }
    // 0x1add1c: 0x460c0043
    ctx->pc = 0x1add1cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[12];
    // 0x1add20: 0xe78d8ac4
    ctx->pc = 0x1add20u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937284), bits); }
    // 0x1add24: 0x460d0003
    ctx->pc = 0x1add24u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[13];
    // 0x1add28: 0x0
    ctx->pc = 0x1add28u;
    // NOP
    // 0x1add2c: 0xe7818ac8
    ctx->pc = 0x1add2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937288), bits); }
    // 0x1add30: 0x3e00008
    ctx->pc = 0x1ADD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADD34u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937292), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADD38u;
}

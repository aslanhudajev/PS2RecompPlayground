#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResetClock
// Address: 0x203168 - 0x2031b0
void ResetClock_0x203168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203168u;

    // 0x203168: 0x3c020031
    ctx->pc = 0x203168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20316c: 0xac40ffb0
    ctx->pc = 0x20316cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967216), GPR_U32(ctx, 0));
    // 0x203170: 0x3c020031
    ctx->pc = 0x203170u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203174: 0xac40ffa4
    ctx->pc = 0x203174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967204), GPR_U32(ctx, 0));
    // 0x203178: 0x3c040031
    ctx->pc = 0x203178u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x20317c: 0xac80ffb4
    ctx->pc = 0x20317cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967220), GPR_U32(ctx, 0));
    // 0x203180: 0x3c020031
    ctx->pc = 0x203180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203184: 0xac40ffb8
    ctx->pc = 0x203184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967224), GPR_U32(ctx, 0));
    // 0x203188: 0x3c020031
    ctx->pc = 0x203188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20318c: 0xac40ff98
    ctx->pc = 0x20318cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967192), GPR_U32(ctx, 0));
    // 0x203190: 0x3c030031
    ctx->pc = 0x203190u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x203194: 0x3c020031
    ctx->pc = 0x203194u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203198: 0xc480ffb4
    ctx->pc = 0x203198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20319c: 0xe440ffac
    ctx->pc = 0x20319cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967212), bits); }
    // 0x2031a0: 0xe460ffa8
    ctx->pc = 0x2031a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967208), bits); }
    // 0x2031a4: 0x3c020031
    ctx->pc = 0x2031a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2031a8: 0x3e00008
    ctx->pc = 0x2031A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2031ACu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967180), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2031B0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawTextScaled
// Address: 0x201440 - 0x201464
void DrawTextScaled_0x201440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201440u;

    // 0x201440: 0x27bdfff0
    ctx->pc = 0x201440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201444: 0xffbf0000
    ctx->pc = 0x201444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201448: 0x3c013f80
    ctx->pc = 0x201448u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20144c: 0x44816800
    ctx->pc = 0x20144cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x201450: 0xc08041c
    ctx->pc = 0x201450u;
    SET_GPR_U32(ctx, 31, 0x201458u);
    ctx->pc = 0x201070u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextSub_0x201070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201458u; }
    }
    if (ctx->pc != 0x201458u) { return; }
    ctx->pc = 0x201458u;
    // 0x201458: 0xdfbf0000
    ctx->pc = 0x201458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20145c: 0x3e00008
    ctx->pc = 0x20145Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201460u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201464u;
}

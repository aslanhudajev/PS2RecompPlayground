#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: text_init
// Address: 0x2d21a0 - 0x2d21cc
void text_init_0x2d21a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d21a0u;

    // 0x2d21a0: 0x27bdfff0
    ctx->pc = 0x2d21a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d21a4: 0xffbf0000
    ctx->pc = 0x2d21a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d21a8: 0xc0b46e2
    ctx->pc = 0x2D21A8u;
    SET_GPR_U32(ctx, 31, 0x2D21B0u);
    ctx->pc = 0x2D21ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2D1B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_set_color_0x2d1b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D21B0u; }
    }
    if (ctx->pc != 0x2D21B0u) { return; }
    ctx->pc = 0x2D21B0u;
    // 0x2d21b0: 0xc0b46de
    ctx->pc = 0x2D21B0u;
    SET_GPR_U32(ctx, 31, 0x2D21B8u);
    ctx->pc = 0x2D1B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_clear_0x2d1b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D21B8u; }
    }
    if (ctx->pc != 0x2D21B8u) { return; }
    ctx->pc = 0x2D21B8u;
    // 0x2d21b8: 0x3c02003d
    ctx->pc = 0x2d21b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d21bc: 0xac402250
    ctx->pc = 0x2d21bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8784), GPR_U32(ctx, 0));
    // 0x2d21c0: 0xdfbf0000
    ctx->pc = 0x2d21c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d21c4: 0x3e00008
    ctx->pc = 0x2D21C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D21C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D21CCu;
}

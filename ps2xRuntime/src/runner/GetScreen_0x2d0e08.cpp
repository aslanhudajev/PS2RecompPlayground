#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetScreen
// Address: 0x2d0e08 - 0x2d0e3c
void GetScreen_0x2d0e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0e08u;

    // 0x2d0e08: 0x27bdfff0
    ctx->pc = 0x2d0e08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0e0c: 0xffbf0000
    ctx->pc = 0x2d0e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0e10: 0x3c020036
    ctx->pc = 0x2d0e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2d0e14: 0x8c42dee0
    ctx->pc = 0x2d0e14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2d0e18: 0x8c420010
    ctx->pc = 0x2d0e18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0e1c: 0x202d
    ctx->pc = 0x2d0e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e20: 0x282d
    ctx->pc = 0x2d0e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e24: 0x8c460020
    ctx->pc = 0x2d0e24u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2d0e28: 0xc0b435e
    ctx->pc = 0x2D0E28u;
    SET_GPR_U32(ctx, 31, 0x2D0E30u);
    ctx->pc = 0x2D0E2Cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->pc = 0x2D0D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetScreenSub_0x2d0d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E30u; }
    }
    if (ctx->pc != 0x2D0E30u) { return; }
    ctx->pc = 0x2D0E30u;
    // 0x2d0e30: 0xdfbf0000
    ctx->pc = 0x2d0e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0e34: 0x3e00008
    ctx->pc = 0x2D0E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0E38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0E3Cu;
}

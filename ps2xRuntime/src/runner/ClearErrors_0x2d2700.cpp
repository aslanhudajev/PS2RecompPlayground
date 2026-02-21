#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ClearErrors
// Address: 0x2d2700 - 0x2d272c
void ClearErrors_0x2d2700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2700u;

    // 0x2d2700: 0x27bdfff0
    ctx->pc = 0x2d2700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d2704: 0xffbf0000
    ctx->pc = 0x2d2704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2708: 0x3c02003a
    ctx->pc = 0x2d2708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d270c: 0xc0b49ae
    ctx->pc = 0x2D270Cu;
    SET_GPR_U32(ctx, 31, 0x2D2714u);
    ctx->pc = 0x2D2710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7424), GPR_U32(ctx, 0));
    ctx->pc = 0x2D26B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearErrorsSub_0x2d26b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2714u; }
    }
    if (ctx->pc != 0x2D2714u) { return; }
    ctx->pc = 0x2D2714u;
    // 0x2d2714: 0x3c03003a
    ctx->pc = 0x2d2714u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d2718: 0x24020008
    ctx->pc = 0x2d2718u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d271c: 0xac621d08
    ctx->pc = 0x2d271cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7432), GPR_U32(ctx, 2));
    // 0x2d2720: 0xdfbf0000
    ctx->pc = 0x2d2720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2724: 0x3e00008
    ctx->pc = 0x2D2724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2728u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D272Cu;
}

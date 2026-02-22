#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setPRMODE
// Address: 0x11b8d8 - 0x11b950
void setPRMODE_0x11b8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b8d8u;

    // 0x11b8d8: 0x27bdfff0
    ctx->pc = 0x11b8d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b8dc: 0x5283c
    ctx->pc = 0x11b8dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b8e0: 0x9fa20010
    ctx->pc = 0x11b8e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b8e4: 0x8403c
    ctx->pc = 0x11b8e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11b8e8: 0xa503c
    ctx->pc = 0x11b8e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11b8ec: 0x6303c
    ctx->pc = 0x11b8ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b8f0: 0x7383c
    ctx->pc = 0x11b8f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b8f4: 0x9483c
    ctx->pc = 0x11b8f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11b8f8: 0xb583c
    ctx->pc = 0x11b8f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x11b8fc: 0x52f7a
    ctx->pc = 0x11b8fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 29);
    // 0x11b900: 0x212b8
    ctx->pc = 0x11b900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x11b904: 0x846ba
    ctx->pc = 0x11b904u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 26);
    // 0x11b908: 0xa563a
    ctx->pc = 0x11b908u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 24);
    // 0x11b90c: 0x6373a
    ctx->pc = 0x11b90cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 28);
    // 0x11b910: 0x73efa
    ctx->pc = 0x11b910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 27);
    // 0x11b914: 0x94e7a
    ctx->pc = 0x11b914u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 25);
    // 0x11b918: 0xb5dfa
    ctx->pc = 0x11b918u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 23);
    // 0x11b91c: 0xa22825
    ctx->pc = 0x11b91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x11b920: 0x10a4025
    ctx->pc = 0x11b920u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x11b924: 0xc73025
    ctx->pc = 0x11b924u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x11b928: 0x12b4825
    ctx->pc = 0x11b928u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x11b92c: 0xa82825
    ctx->pc = 0x11b92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x11b930: 0xc93025
    ctx->pc = 0x11b930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x11b934: 0xffbf0000
    ctx->pc = 0x11b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b938: 0xa63025
    ctx->pc = 0x11b938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x11b93c: 0xc046d3a
    ctx->pc = 0x11B93Cu;
    SET_GPR_U32(ctx, 31, 0x11B944u);
    ctx->pc = 0x11B940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 27));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B944u; }
    }
    if (ctx->pc != 0x11B944u) { return; }
    ctx->pc = 0x11B944u;
    // 0x11b944: 0xdfbf0000
    ctx->pc = 0x11b944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b948: 0x3e00008
    ctx->pc = 0x11B948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B94Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B950u;
}

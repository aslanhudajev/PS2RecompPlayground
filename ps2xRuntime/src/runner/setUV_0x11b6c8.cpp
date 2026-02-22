#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setUV
// Address: 0x11b6c8 - 0x11b6f8
void setUV_0x11b6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b6c8u;

    // 0x11b6c8: 0x5283c
    ctx->pc = 0x11b6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b6cc: 0x6303c
    ctx->pc = 0x11b6ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b6d0: 0x5283e
    ctx->pc = 0x11b6d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b6d4: 0x6343a
    ctx->pc = 0x11b6d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x11b6d8: 0x27bdfff0
    ctx->pc = 0x11b6d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b6dc: 0xa63025
    ctx->pc = 0x11b6dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x11b6e0: 0xffbf0000
    ctx->pc = 0x11b6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b6e4: 0xc046d3a
    ctx->pc = 0x11B6E4u;
    SET_GPR_U32(ctx, 31, 0x11B6ECu);
    ctx->pc = 0x11B6E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B6ECu; }
    }
    if (ctx->pc != 0x11B6ECu) { return; }
    ctx->pc = 0x11B6ECu;
    // 0x11b6ec: 0xdfbf0000
    ctx->pc = 0x11b6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b6f0: 0x3e00008
    ctx->pc = 0x11B6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B6F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B6F8u;
}

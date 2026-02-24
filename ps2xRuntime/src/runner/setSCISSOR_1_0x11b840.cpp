#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setSCISSOR_1
// Address: 0x11b840 - 0x11b880
void setSCISSOR_1_0x11b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b840u;

    // 0x11b840: 0x5283c
    ctx->pc = 0x11b840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b844: 0x6303c
    ctx->pc = 0x11b844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b848: 0x6343a
    ctx->pc = 0x11b848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x11b84c: 0x5283e
    ctx->pc = 0x11b84cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b850: 0x8443c
    ctx->pc = 0x11b850u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x11b854: 0x7383c
    ctx->pc = 0x11b854u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b858: 0xa82825
    ctx->pc = 0x11b858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x11b85c: 0xe63825
    ctx->pc = 0x11b85cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x11b860: 0x27bdfff0
    ctx->pc = 0x11b860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b864: 0xa73025
    ctx->pc = 0x11b864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x11b868: 0xffbf0000
    ctx->pc = 0x11b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b86c: 0xc046d3a
    ctx->pc = 0x11B86Cu;
    SET_GPR_U32(ctx, 31, 0x11B874u);
    ctx->pc = 0x11B870u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B874u; }
    }
    if (ctx->pc != 0x11B874u) { return; }
    ctx->pc = 0x11B874u;
    // 0x11b874: 0xdfbf0000
    ctx->pc = 0x11b874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b878: 0x3e00008
    ctx->pc = 0x11B878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B87Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B880u;
}

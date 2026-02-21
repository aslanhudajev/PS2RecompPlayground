#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setFRAME_1
// Address: 0x11b780 - 0x11b7c4
void setFRAME_1_0x11b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b780u;

    // 0x11b780: 0x5283c
    ctx->pc = 0x11b780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b784: 0x7383c
    ctx->pc = 0x11b784u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b788: 0x6303c
    ctx->pc = 0x11b788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b78c: 0x5283e
    ctx->pc = 0x11b78cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b790: 0x6343a
    ctx->pc = 0x11b790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x11b794: 0x8403c
    ctx->pc = 0x11b794u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11b798: 0x73a3a
    ctx->pc = 0x11b798u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 8);
    // 0x11b79c: 0xa82825
    ctx->pc = 0x11b79cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x11b7a0: 0xe63825
    ctx->pc = 0x11b7a0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11b7a4: 0x27bdfff0
    ctx->pc = 0x11b7a4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b7a8: 0xa73025
    ctx->pc = 0x11b7a8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11b7ac: 0xffbf0000
    ctx->pc = 0x11b7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b7b0: 0xc046d3a
    ctx->pc = 0x11B7B0u;
    SET_GPR_U32(ctx, 31, 0x11B7B8u);
    ctx->pc = 0x11B7B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 76));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B7B8u; }
    }
    if (ctx->pc != 0x11B7B8u) { return; }
    ctx->pc = 0x11B7B8u;
    // 0x11b7b8: 0xdfbf0000
    ctx->pc = 0x11b7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b7bc: 0x3e00008
    ctx->pc = 0x11B7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B7C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B7C4u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setTEX1_1
// Address: 0x11b538 - 0x11b5a0
void setTEX1_1_0x11b538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b538u;

    // 0x11b538: 0x5283c
    ctx->pc = 0x11b538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b53c: 0x6303c
    ctx->pc = 0x11b53cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b540: 0x9483c
    ctx->pc = 0x11b540u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11b544: 0x8403c
    ctx->pc = 0x11b544u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11b548: 0x7383c
    ctx->pc = 0x11b548u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b54c: 0x5283e
    ctx->pc = 0x11b54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b550: 0xb583c
    ctx->pc = 0x11b550u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x11b554: 0x637ba
    ctx->pc = 0x11b554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 30);
    // 0x11b558: 0x94dfa
    ctx->pc = 0x11b558u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 23);
    // 0x11b55c: 0x846ba
    ctx->pc = 0x11b55cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 26);
    // 0x11b560: 0x73efa
    ctx->pc = 0x11b560u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 27);
    // 0x11b564: 0xa503c
    ctx->pc = 0x11b564u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11b568: 0xc93025
    ctx->pc = 0x11b568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x11b56c: 0xab2825
    ctx->pc = 0x11b56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x11b570: 0x1074025
    ctx->pc = 0x11b570u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x11b574: 0xa537a
    ctx->pc = 0x11b574u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 13);
    // 0x11b578: 0xa62825
    ctx->pc = 0x11b578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x11b57c: 0x10a4025
    ctx->pc = 0x11b57cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x11b580: 0x27bdfff0
    ctx->pc = 0x11b580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b584: 0xa83025
    ctx->pc = 0x11b584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x11b588: 0xffbf0000
    ctx->pc = 0x11b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b58c: 0xc046d3a
    ctx->pc = 0x11B58Cu;
    SET_GPR_U32(ctx, 31, 0x11B594u);
    ctx->pc = 0x11B590u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B594u; }
    }
    if (ctx->pc != 0x11B594u) { return; }
    ctx->pc = 0x11B594u;
    // 0x11b594: 0xdfbf0000
    ctx->pc = 0x11b594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b598: 0x3e00008
    ctx->pc = 0x11B598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B59Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B5A0u;
}

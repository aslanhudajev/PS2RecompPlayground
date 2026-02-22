#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setDMAscTag
// Address: 0x11b438 - 0x11b48c
void setDMAscTag_0x11b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b438u;

    // 0x11b438: 0x3c02ffff
    ctx->pc = 0x11b438u;
    SET_GPR_S32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x11b43c: 0xa503c
    ctx->pc = 0x11b43cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11b440: 0x3442fff0
    ctx->pc = 0x11b440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65520);
    // 0x11b444: 0x8403c
    ctx->pc = 0x11b444u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11b448: 0x7383c
    ctx->pc = 0x11b448u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b44c: 0xc23024
    ctx->pc = 0x11b44cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11b450: 0x52ffc
    ctx->pc = 0x11b450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 31));
    // 0x11b454: 0xa503e
    ctx->pc = 0x11b454u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x11b458: 0x8413a
    ctx->pc = 0x11b458u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x11b45c: 0x7387a
    ctx->pc = 0x11b45cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 1);
    // 0x11b460: 0x9483c
    ctx->pc = 0x11b460u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11b464: 0xaa2825
    ctx->pc = 0x11b464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x11b468: 0x1074025
    ctx->pc = 0x11b468u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x11b46c: 0x6303c
    ctx->pc = 0x11b46cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b470: 0x949ba
    ctx->pc = 0x11b470u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 6);
    // 0x11b474: 0xa82825
    ctx->pc = 0x11b474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x11b478: 0xc93025
    ctx->pc = 0x11b478u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x11b47c: 0x24820010
    ctx->pc = 0x11b47cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
    // 0x11b480: 0xa62825
    ctx->pc = 0x11b480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x11b484: 0x3e00008
    ctx->pc = 0x11B484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B488u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B48Cu;
}

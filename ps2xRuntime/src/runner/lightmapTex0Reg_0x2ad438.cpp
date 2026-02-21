#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: lightmapTex0Reg
// Address: 0x2ad438 - 0x2ad494
void lightmapTex0Reg_0x2ad438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad438u;

    // 0x2ad438: 0x27bdfff0
    ctx->pc = 0x2ad438u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad43c: 0x3c020036
    ctx->pc = 0x2ad43cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad440: 0x8c42dee0
    ctx->pc = 0x2ad440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad444: 0x8c420038
    ctx->pc = 0x2ad444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2ad448: 0x8c420004
    ctx->pc = 0x2ad448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ad44c: 0x8c430058
    ctx->pc = 0x2ad44cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2ad450: 0xafa40000
    ctx->pc = 0x2ad450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2ad454: 0x42140
    ctx->pc = 0x2ad454u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ad458: 0xafa40004
    ctx->pc = 0x2ad458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x2ad45c: 0xdfa20000
    ctx->pc = 0x2ad45cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad460: 0xdc630020
    ctx->pc = 0x2ad460u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2ad464: 0x43102d
    ctx->pc = 0x2ad464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2ad468: 0x2403ffe7
    ctx->pc = 0x2ad468u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x2ad46c: 0x31c38
    ctx->pc = 0x2ad46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ad470: 0x3463ffff
    ctx->pc = 0x2ad470u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad474: 0x31c38
    ctx->pc = 0x2ad474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ad478: 0x3463ffff
    ctx->pc = 0x2ad478u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad47c: 0x431024
    ctx->pc = 0x2ad47cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad480: 0x34038000
    ctx->pc = 0x2ad480u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2ad484: 0x31d38
    ctx->pc = 0x2ad484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x2ad488: 0x431025
    ctx->pc = 0x2ad488u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad48c: 0x3e00008
    ctx->pc = 0x2AD48Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD490u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD494u;
}

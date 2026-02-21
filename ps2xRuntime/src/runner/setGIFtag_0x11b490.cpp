#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setGIFtag
// Address: 0x11b490 - 0x11b4e4
void setGIFtag_0x11b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b490u;

    // 0x11b490: 0x94b80
    ctx->pc = 0x11b490u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 14));
    // 0x11b494: 0x63700
    ctx->pc = 0x11b494u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 28));
    // 0x11b498: 0x73e80
    ctx->pc = 0x11b498u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 26));
    // 0x11b49c: 0x843c0
    ctx->pc = 0x11b49cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 15));
    // 0x11b4a0: 0x3c03ffff
    ctx->pc = 0x11b4a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x11b4a4: 0x3183e
    ctx->pc = 0x11b4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11b4a8: 0x1264825
    ctx->pc = 0x11b4a8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x11b4ac: 0xa31824
    ctx->pc = 0x11b4acu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11b4b0: 0xe83825
    ctx->pc = 0x11b4b0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x11b4b4: 0xa53c0
    ctx->pc = 0x11b4b4u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 15));
    // 0x11b4b8: 0x1274825
    ctx->pc = 0x11b4b8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x11b4bc: 0x14b5025
    ctx->pc = 0x11b4bcu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x11b4c0: 0x3183c
    ctx->pc = 0x11b4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11b4c4: 0x3183f
    ctx->pc = 0x11b4c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11b4c8: 0x5283f
    ctx->pc = 0x11b4c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11b4cc: 0xac8a0000
    ctx->pc = 0x11b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x11b4d0: 0xac890004
    ctx->pc = 0x11b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x11b4d4: 0x24820010
    ctx->pc = 0x11b4d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
    // 0x11b4d8: 0xac830008
    ctx->pc = 0x11b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x11b4dc: 0x3e00008
    ctx->pc = 0x11B4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B4E0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B4E4u;
}

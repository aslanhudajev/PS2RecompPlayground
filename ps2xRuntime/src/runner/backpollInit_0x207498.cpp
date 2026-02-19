#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: backpollInit
// Address: 0x207498 - 0x2074d4
void backpollInit_0x207498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207498u;

    // 0x207498: 0x27bdfff0
    ctx->pc = 0x207498u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20749c: 0xffbe0000
    ctx->pc = 0x20749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x2074a0: 0x3a0f02d
    ctx->pc = 0x2074a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2074a4: 0x3c01003c
    ctx->pc = 0x2074a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x2074a8: 0xac20c4ec
    ctx->pc = 0x2074a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952172), GPR_U32(ctx, 0));
    // 0x2074ac: 0x2402ffff
    ctx->pc = 0x2074acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2074b0: 0x3c01003c
    ctx->pc = 0x2074b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x2074b4: 0xac22c4f0
    ctx->pc = 0x2074b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952176), GPR_U32(ctx, 2));
    // 0x2074b8: 0x3c01003c
    ctx->pc = 0x2074b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x2074bc: 0xac20c4e8
    ctx->pc = 0x2074bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952168), GPR_U32(ctx, 0));
    // 0x2074c0: 0x3c0e82d
    ctx->pc = 0x2074c0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2074c4: 0xdfbe0000
    ctx->pc = 0x2074c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2074c8: 0x27bd0010
    ctx->pc = 0x2074c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2074cc: 0x3e00008
    ctx->pc = 0x2074CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2074D4u;
}

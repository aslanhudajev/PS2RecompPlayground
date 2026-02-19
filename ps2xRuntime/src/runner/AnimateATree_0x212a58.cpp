#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnimateATree
// Address: 0x212a58 - 0x212a80
void AnimateATree_0x212a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212a58u;

    // 0x212a58: 0x27bdfff0
    ctx->pc = 0x212a58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212a5c: 0xffbf0000
    ctx->pc = 0x212a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212a60: 0xc0382d
    ctx->pc = 0x212a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a64: 0x302d
    ctx->pc = 0x212a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a68: 0x44806000
    ctx->pc = 0x212a68u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x212a6c: 0xc084a50
    ctx->pc = 0x212A6Cu;
    SET_GPR_U32(ctx, 31, 0x212A74u);
    ctx->pc = 0x212A70u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x212940u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoAnimateTree_0x212940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A74u; }
    }
    if (ctx->pc != 0x212A74u) { return; }
    ctx->pc = 0x212A74u;
    // 0x212a74: 0xdfbf0000
    ctx->pc = 0x212a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212a78: 0x3e00008
    ctx->pc = 0x212A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212A7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212A80u;
}

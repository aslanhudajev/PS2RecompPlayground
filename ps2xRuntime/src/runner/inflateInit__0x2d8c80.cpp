#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflateInit_
// Address: 0x2d8c80 - 0x2d8ca8
void inflateInit__0x2d8c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d8c80u;

    // 0x2d8c80: 0x27bdfff0
    ctx->pc = 0x2d8c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d8c84: 0xffbf0000
    ctx->pc = 0x2d8c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8c88: 0xa0102d
    ctx->pc = 0x2d8c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c8c: 0xc0382d
    ctx->pc = 0x2d8c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c90: 0x2405000f
    ctx->pc = 0x2d8c90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d8c94: 0xc0b62ca
    ctx->pc = 0x2D8C94u;
    SET_GPR_U32(ctx, 31, 0x2D8C9Cu);
    ctx->pc = 0x2D8C98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflateInit2__0x2d8b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C9Cu; }
    }
    if (ctx->pc != 0x2D8C9Cu) { return; }
    ctx->pc = 0x2D8C9Cu;
    // 0x2d8c9c: 0xdfbf0000
    ctx->pc = 0x2d8c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8ca0: 0x3e00008
    ctx->pc = 0x2D8CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8CA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8CA8u;
}

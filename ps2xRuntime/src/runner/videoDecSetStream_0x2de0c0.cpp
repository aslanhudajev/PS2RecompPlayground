#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecSetStream
// Address: 0x2de0c0 - 0x2de0e0
void videoDecSetStream_0x2de0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de0c0u;

    // 0x2de0c0: 0x27bdfff0
    ctx->pc = 0x2de0c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de0c4: 0xffbf0000
    ctx->pc = 0x2de0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de0c8: 0xc0bb4d8
    ctx->pc = 0x2DE0C8u;
    SET_GPR_U32(ctx, 31, 0x2DE0D0u);
    ctx->pc = 0x2ED360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddStrCallback_0x2ed360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE0D0u; }
    }
    if (ctx->pc != 0x2DE0D0u) { return; }
    ctx->pc = 0x2DE0D0u;
    // 0x2de0d0: 0x24020001
    ctx->pc = 0x2de0d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de0d4: 0xdfbf0000
    ctx->pc = 0x2de0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de0d8: 0x3e00008
    ctx->pc = 0x2DE0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE0DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE0E0u;
}

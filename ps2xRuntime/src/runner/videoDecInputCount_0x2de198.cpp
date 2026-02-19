#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecInputCount
// Address: 0x2de198 - 0x2de1b4
void videoDecInputCount_0x2de198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de198u;

    // 0x2de198: 0x27bdfff0
    ctx->pc = 0x2de198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de19c: 0xffbf0000
    ctx->pc = 0x2de19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de1a0: 0xc0b7f2a
    ctx->pc = 0x2DE1A0u;
    SET_GPR_U32(ctx, 31, 0x2DE1A8u);
    ctx->pc = 0x2DE1A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 72));
    ctx->pc = 0x2DFCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufCount_0x2dfca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE1A8u; }
    }
    if (ctx->pc != 0x2DE1A8u) { return; }
    ctx->pc = 0x2DE1A8u;
    // 0x2de1a8: 0xdfbf0000
    ctx->pc = 0x2de1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de1ac: 0x3e00008
    ctx->pc = 0x2DE1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE1B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE1B4u;
}

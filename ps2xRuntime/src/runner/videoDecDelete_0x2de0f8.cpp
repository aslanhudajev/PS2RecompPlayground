#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecDelete
// Address: 0x2de0f8 - 0x2de12c
void videoDecDelete_0x2de0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de0f8u;

    // 0x2de0f8: 0x27bdffe0
    ctx->pc = 0x2de0f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de0fc: 0xffbf0010
    ctx->pc = 0x2de0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2de100: 0xffb00000
    ctx->pc = 0x2de100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de104: 0x80802d
    ctx->pc = 0x2de104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de108: 0xc0b7f04
    ctx->pc = 0x2DE108u;
    SET_GPR_U32(ctx, 31, 0x2DE110u);
    ctx->pc = 0x2DE10Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 72));
    ctx->pc = 0x2DFC10u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufDelete_0x2dfc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE110u; }
    }
    if (ctx->pc != 0x2DE110u) { return; }
    ctx->pc = 0x2DE110u;
    // 0x2de110: 0xc0bb7a2
    ctx->pc = 0x2DE110u;
    SET_GPR_U32(ctx, 31, 0x2DE118u);
    ctx->pc = 0x2DE114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EDE88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegDelete_0x2ede88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE118u; }
    }
    if (ctx->pc != 0x2DE118u) { return; }
    ctx->pc = 0x2DE118u;
    // 0x2de118: 0x24020001
    ctx->pc = 0x2de118u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de11c: 0xdfbf0010
    ctx->pc = 0x2de11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de120: 0xdfb00000
    ctx->pc = 0x2de120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de124: 0x3e00008
    ctx->pc = 0x2DE124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE128u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE12Cu;
}

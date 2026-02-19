#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mpegStopDMA
// Address: 0x2de640 - 0x2de664
void mpegStopDMA_0x2de640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de640u;

    // 0x2de640: 0x27bdfff0
    ctx->pc = 0x2de640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de644: 0xffbf0000
    ctx->pc = 0x2de644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de648: 0x3c04003a
    ctx->pc = 0x2de648u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2de64c: 0xc0b7df6
    ctx->pc = 0x2DE64Cu;
    SET_GPR_U32(ctx, 31, 0x2DE654u);
    ctx->pc = 0x2DE650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10888));
    ctx->pc = 0x2DF7D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufStopDMA_0x2df7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE654u; }
    }
    if (ctx->pc != 0x2DE654u) { return; }
    ctx->pc = 0x2DE654u;
    // 0x2de654: 0x24020001
    ctx->pc = 0x2de654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de658: 0xdfbf0000
    ctx->pc = 0x2de658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de65c: 0x3e00008
    ctx->pc = 0x2DE65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE660u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE664u;
}

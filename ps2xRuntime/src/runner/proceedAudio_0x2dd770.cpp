#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: proceedAudio
// Address: 0x2dd770 - 0x2dd790
void proceedAudio_0x2dd770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dd770u;

    // 0x2dd770: 0x27bdfff0
    ctx->pc = 0x2dd770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dd774: 0xffbf0000
    ctx->pc = 0x2dd774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd778: 0x3c04003a
    ctx->pc = 0x2dd778u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dd77c: 0xc0b7b64
    ctx->pc = 0x2DD77Cu;
    SET_GPR_U32(ctx, 31, 0x2DD784u);
    ctx->pc = 0x2DD780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11000));
    ctx->pc = 0x2DED90u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecSendToIOP_0x2ded90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD784u; }
    }
    if (ctx->pc != 0x2DD784u) { return; }
    ctx->pc = 0x2DD784u;
    // 0x2dd784: 0xdfbf0000
    ctx->pc = 0x2dd784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd788: 0x3e00008
    ctx->pc = 0x2DD788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD78Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD790u;
}

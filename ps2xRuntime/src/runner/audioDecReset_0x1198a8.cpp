#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecReset
// Address: 0x1198a8 - 0x1198f0
void audioDecReset_0x1198a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1198a8u;

    // 0x1198a8: 0x27bdffe0
    ctx->pc = 0x1198a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1198ac: 0xffb00000
    ctx->pc = 0x1198acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1198b0: 0xffbf0010
    ctx->pc = 0x1198b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1198b4: 0xc0465e4
    ctx->pc = 0x1198B4u;
    SET_GPR_U32(ctx, 31, 0x1198BCu);
    ctx->pc = 0x1198B8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119790u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecPause_0x119790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198BCu; }
    }
    if (ctx->pc != 0x1198BCu) { return; }
    ctx->pc = 0x1198BCu;
    // 0x1198bc: 0xae000050
    ctx->pc = 0x1198bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1198c0: 0x24020001
    ctx->pc = 0x1198c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1198c4: 0xae000000
    ctx->pc = 0x1198c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1198c8: 0xae00002c
    ctx->pc = 0x1198c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1198cc: 0xae000034
    ctx->pc = 0x1198ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1198d0: 0xae000038
    ctx->pc = 0x1198d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1198d4: 0xae000040
    ctx->pc = 0x1198d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1198d8: 0xae000054
    ctx->pc = 0x1198d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1198dc: 0xae00004c
    ctx->pc = 0x1198dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1198e0: 0xdfbf0010
    ctx->pc = 0x1198e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1198e4: 0xdfb00000
    ctx->pc = 0x1198e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1198e8: 0x3e00008
    ctx->pc = 0x1198E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1198ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1198F0u;
}

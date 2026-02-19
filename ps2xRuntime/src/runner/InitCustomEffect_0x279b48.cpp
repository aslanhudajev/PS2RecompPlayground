#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitCustomEffect
// Address: 0x279b48 - 0x279b64
void InitCustomEffect_0x279b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x279b48u;

    // 0x279b48: 0x27bdfff0
    ctx->pc = 0x279b48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279b4c: 0xffbf0000
    ctx->pc = 0x279b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279b50: 0xc09e640
    ctx->pc = 0x279B50u;
    SET_GPR_U32(ctx, 31, 0x279B58u);
    ctx->pc = 0x279B54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x279900u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffectSub_0x279900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279B58u; }
    }
    if (ctx->pc != 0x279B58u) { return; }
    ctx->pc = 0x279B58u;
    // 0x279b58: 0xdfbf0000
    ctx->pc = 0x279b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279b5c: 0x3e00008
    ctx->pc = 0x279B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279B60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279B64u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartEnterFX
// Address: 0x27f118 - 0x27f148
void StartEnterFX_0x27f118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27f118u;

    // 0x27f118: 0x27bdfff0
    ctx->pc = 0x27f118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27f11c: 0xffbf0000
    ctx->pc = 0x27f11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f120: 0x80282d
    ctx->pc = 0x27f120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f124: 0x24040043
    ctx->pc = 0x27f124u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 67));
    // 0x27f128: 0x44806000
    ctx->pc = 0x27f128u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27f12c: 0x302d
    ctx->pc = 0x27f12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f130: 0x3c070008
    ctx->pc = 0x27f130u;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
    // 0x27f134: 0xc09f5fa
    ctx->pc = 0x27F134u;
    SET_GPR_U32(ctx, 31, 0x27F13Cu);
    ctx->pc = 0x27F138u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F13Cu; }
    }
    if (ctx->pc != 0x27F13Cu) { return; }
    ctx->pc = 0x27F13Cu;
    // 0x27f13c: 0xdfbf0000
    ctx->pc = 0x27f13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f140: 0x3e00008
    ctx->pc = 0x27F140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F144u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27F148u;
}

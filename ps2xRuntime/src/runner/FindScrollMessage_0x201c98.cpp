#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindScrollMessage
// Address: 0x201c98 - 0x201cc4
void FindScrollMessage_0x201c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201c98u;

    // 0x201c98: 0x27bdfff0
    ctx->pc = 0x201c98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201c9c: 0xffbf0000
    ctx->pc = 0x201c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201ca0: 0x24020044
    ctx->pc = 0x201ca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 68));
    // 0x201ca4: 0x821018
    ctx->pc = 0x201ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x201ca8: 0x3c040031
    ctx->pc = 0x201ca8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x201cac: 0x2484f6f0
    ctx->pc = 0x201cacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964976));
    // 0x201cb0: 0xc0806d2
    ctx->pc = 0x201CB0u;
    SET_GPR_U32(ctx, 31, 0x201CB8u);
    ctx->pc = 0x201CB4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x201B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindStringMessageSub_0x201b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201CB8u; }
    }
    if (ctx->pc != 0x201CB8u) { return; }
    ctx->pc = 0x201CB8u;
    // 0x201cb8: 0xdfbf0000
    ctx->pc = 0x201cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201cbc: 0x3e00008
    ctx->pc = 0x201CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201CC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201CC4u;
}

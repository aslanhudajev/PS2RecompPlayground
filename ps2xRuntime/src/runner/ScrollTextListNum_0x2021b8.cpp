#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScrollTextListNum
// Address: 0x2021b8 - 0x202204
void ScrollTextListNum_0x2021b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2021b8u;

    // 0x2021b8: 0x27bdffe0
    ctx->pc = 0x2021b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2021bc: 0xffbf0010
    ctx->pc = 0x2021bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2021c0: 0xffb00000
    ctx->pc = 0x2021c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2021c4: 0xc080698
    ctx->pc = 0x2021C4u;
    SET_GPR_U32(ctx, 31, 0x2021CCu);
    ctx->pc = 0x2021C8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetScrollListMsg_0x201a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2021CCu; }
    }
    if (ctx->pc != 0x2021CCu) { return; }
    ctx->pc = 0x2021CCu;
    // 0x2021cc: 0x3c040031
    ctx->pc = 0x2021ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x2021d0: 0x2484f6f0
    ctx->pc = 0x2021d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964976));
    // 0x2021d4: 0x24030044
    ctx->pc = 0x2021d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x2021d8: 0x2038018
    ctx->pc = 0x2021d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2021dc: 0x902021
    ctx->pc = 0x2021dcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2021e0: 0x24030014
    ctx->pc = 0x2021e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2021e4: 0x431018
    ctx->pc = 0x2021e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2021e8: 0x8c830018
    ctx->pc = 0x2021e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2021ec: 0x431021
    ctx->pc = 0x2021ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2021f0: 0x8c420000
    ctx->pc = 0x2021f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2021f4: 0xdfbf0010
    ctx->pc = 0x2021f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2021f8: 0xdfb00000
    ctx->pc = 0x2021f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2021fc: 0x3e00008
    ctx->pc = 0x2021FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202200u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202204u;
}

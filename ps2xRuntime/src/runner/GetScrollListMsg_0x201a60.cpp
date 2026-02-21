#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetScrollListMsg
// Address: 0x201a60 - 0x201a9c
void GetScrollListMsg_0x201a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201a60u;

    // 0x201a60: 0x27bdfff0
    ctx->pc = 0x201a60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201a64: 0xffbf0000
    ctx->pc = 0x201a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201a68: 0x3c020031
    ctx->pc = 0x201a68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x201a6c: 0x4800006
    ctx->pc = 0x201A6Cu;
    {
        const bool branch_taken_0x201a6c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x201A70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964904));
        if (branch_taken_0x201a6c) {
            ctx->pc = 0x201A88u;
            goto label_201a88;
        }
    }
    ctx->pc = 0x201A74u;
    // 0x201a74: 0x24030044
    ctx->pc = 0x201a74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x201a78: 0x831818
    ctx->pc = 0x201a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x201a7c: 0x3c020031
    ctx->pc = 0x201a7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x201a80: 0x2442f6f0
    ctx->pc = 0x201a80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964976));
    // 0x201a84: 0x621021
    ctx->pc = 0x201a84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_201a88:
    // 0x201a88: 0xc08067c
    ctx->pc = 0x201A88u;
    SET_GPR_U32(ctx, 31, 0x201A90u);
    ctx->pc = 0x201A8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2019F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringListMsgSub_0x2019f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A90u; }
    }
    if (ctx->pc != 0x201A90u) { return; }
    ctx->pc = 0x201A90u;
    // 0x201a90: 0xdfbf0000
    ctx->pc = 0x201a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201a94: 0x3e00008
    ctx->pc = 0x201A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201A88u: goto label_201a88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201A9Cu;
}

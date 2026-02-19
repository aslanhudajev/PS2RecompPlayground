#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetScrollText
// Address: 0x2019b0 - 0x2019f0
void GetScrollText_0x2019b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2019b0u;

    // 0x2019b0: 0x27bdfff0
    ctx->pc = 0x2019b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2019b4: 0xffbf0000
    ctx->pc = 0x2019b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2019b8: 0x80402d
    ctx->pc = 0x2019b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2019bc: 0x3c020031
    ctx->pc = 0x2019bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2019c0: 0x5000006
    ctx->pc = 0x2019C0u;
    {
        const bool branch_taken_0x2019c0 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2019C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964904));
        if (branch_taken_0x2019c0) {
            ctx->pc = 0x2019DCu;
            goto label_2019dc;
        }
    }
    ctx->pc = 0x2019C8u;
    // 0x2019c8: 0x24030044
    ctx->pc = 0x2019c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x2019cc: 0x1031818
    ctx->pc = 0x2019ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2019d0: 0x3c020031
    ctx->pc = 0x2019d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2019d4: 0x2442f6f0
    ctx->pc = 0x2019d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964976));
    // 0x2019d8: 0x622021
    ctx->pc = 0x2019d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2019dc:
    // 0x2019dc: 0xc080642
    ctx->pc = 0x2019DCu;
    SET_GPR_U32(ctx, 31, 0x2019E4u);
    ctx->pc = 0x201908u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringTextSub_0x201908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2019E4u; }
    }
    if (ctx->pc != 0x2019E4u) { return; }
    ctx->pc = 0x2019E4u;
    // 0x2019e4: 0xdfbf0000
    ctx->pc = 0x2019e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2019e8: 0x3e00008
    ctx->pc = 0x2019E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2019DCu: goto label_2019dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2019F0u;
}

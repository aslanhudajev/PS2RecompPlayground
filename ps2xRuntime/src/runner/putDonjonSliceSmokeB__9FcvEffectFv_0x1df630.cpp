#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putDonjonSliceSmokeB__9FcvEffectFv
// Address: 0x1df630 - 0x1df6b0
void putDonjonSliceSmokeB__9FcvEffectFv_0x1df630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putDonjonSliceSmokeB__9FcvEffectFv");


    ctx->pc = 0x1df630u;

    // 0x1df630: 0x27bdffc0
    ctx->pc = 0x1df630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1df634: 0x7fbf0030
    ctx->pc = 0x1df634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1df638: 0x7fb20020
    ctx->pc = 0x1df638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df63c: 0x7fb10010
    ctx->pc = 0x1df63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df640: 0x7fb00000
    ctx->pc = 0x1df640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df644: 0x70808628
    ctx->pc = 0x1df644u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1df648: 0x8f848cec
    ctx->pc = 0x1df648u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x1df64c: 0x24030001
    ctx->pc = 0x1df64cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df650: 0x14830004
    ctx->pc = 0x1DF650u;
    {
        const bool branch_taken_0x1df650 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1DF654u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df650) {
            ctx->pc = 0x1DF664u;
            goto label_1df664;
        }
    }
    ctx->pc = 0x1DF658u;
    // 0x1df658: 0xc06898c
    ctx->pc = 0x1DF658u;
    SET_GPR_U32(ctx, 31, 0x1DF660u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF660u; }
        else if (ctx->pc != 0x1DF660u) { ctx->pc = 0x1DF660u; }
    }
    if (ctx->pc != 0x1DF660u) { return; }
    ctx->pc = 0x1DF660u;
    // 0x1df660: 0x70008e28
    ctx->pc = 0x1df660u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1df664:
    // 0x1df664: 0x10000008
    ctx->pc = 0x1DF664u;
    {
        const bool branch_taken_0x1df664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DF668u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df664) {
            ctx->pc = 0x1DF688u;
            goto label_1df688;
        }
    }
    ctx->pc = 0x1DF66Cu;
label_1df66c:
    // 0x1df66c: 0x8e020058
    ctx->pc = 0x1df66cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1df670: 0xc60c0024
    ctx->pc = 0x1df670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df674: 0xc07a47c
    ctx->pc = 0x1DF674u;
    SET_GPR_U32(ctx, 31, 0x1DF67Cu);
    ctx->pc = 0x1DF678u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__7CFcvTRSFf_0x1e91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF67Cu; }
        else if (ctx->pc != 0x1DF67Cu) { ctx->pc = 0x1DF67Cu; }
    }
    if (ctx->pc != 0x1DF67Cu) { return; }
    ctx->pc = 0x1DF67Cu;
    // 0x1df67c: 0x265200f0
    ctx->pc = 0x1df67cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1df680: 0x26310001
    ctx->pc = 0x1df680u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1df684: 0x0
    ctx->pc = 0x1df684u;
    // NOP
label_1df688:
    // 0x1df688: 0x8e030004
    ctx->pc = 0x1df688u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1df68c: 0x223182a
    ctx->pc = 0x1df68cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1df690: 0x1460fff6
    ctx->pc = 0x1DF690u;
    {
        const bool branch_taken_0x1df690 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1df690) {
            ctx->pc = 0x1DF66Cu;
            goto label_1df66c;
        }
    }
    ctx->pc = 0x1DF698u;
    // 0x1df698: 0x7bbf0030
    ctx->pc = 0x1df698u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df69c: 0x7bb20020
    ctx->pc = 0x1df69cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df6a0: 0x7bb10010
    ctx->pc = 0x1df6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df6a4: 0x7bb00000
    ctx->pc = 0x1df6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df6a8: 0x3e00008
    ctx->pc = 0x1DF6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF6ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF664u: goto label_1df664;
            case 0x1DF66Cu: goto label_1df66c;
            case 0x1DF688u: goto label_1df688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF6B0u;
}

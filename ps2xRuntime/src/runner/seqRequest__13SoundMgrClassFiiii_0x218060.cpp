#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: seqRequest__13SoundMgrClassFiiii
// Address: 0x218060 - 0x2180c8
void seqRequest__13SoundMgrClassFiiii_0x218060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("seqRequest__13SoundMgrClassFiiii");


    ctx->pc = 0x218060u;

    // 0x218060: 0x27bdfff0
    ctx->pc = 0x218060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218064: 0x10a00015
    ctx->pc = 0x218064u;
    {
        const bool branch_taken_0x218064 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x218068u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x218064) {
            ctx->pc = 0x2180BCu;
            goto label_2180bc;
        }
    }
    ctx->pc = 0x21806Cu;
    // 0x21806c: 0x3c0200c0
    ctx->pc = 0x21806cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)192 << 16));
    // 0x218070: 0xa21824
    ctx->pc = 0x218070u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x218074: 0x3c020040
    ctx->pc = 0x218074u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x218078: 0x14620005
    ctx->pc = 0x218078u;
    {
        const bool branch_taken_0x218078 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x21807Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
        if (branch_taken_0x218078) {
            ctx->pc = 0x218090u;
            goto label_218090;
        }
    }
    ctx->pc = 0x218080u;
    // 0x218080: 0xc085fa0
    ctx->pc = 0x218080u;
    SET_GPR_U32(ctx, 31, 0x218088u);
    ctx->pc = 0x218084u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x217E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        bgmRequest__13SoundMgrClassFii_0x217e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218088u; }
        else if (ctx->pc != 0x218088u) { ctx->pc = 0x218088u; }
    }
    if (ctx->pc != 0x218088u) { return; }
    ctx->pc = 0x218088u;
    // 0x218088: 0x1000000d
    ctx->pc = 0x218088u;
    {
        const bool branch_taken_0x218088 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21808Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x218088) {
            ctx->pc = 0x2180C0u;
            goto label_2180c0;
        }
    }
    ctx->pc = 0x218090u;
label_218090:
    // 0x218090: 0x14620005
    ctx->pc = 0x218090u;
    {
        const bool branch_taken_0x218090 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x218094u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 65535));
        if (branch_taken_0x218090) {
            ctx->pc = 0x2180A8u;
            goto label_2180a8;
        }
    }
    ctx->pc = 0x218098u;
    // 0x218098: 0xc085fe0
    ctx->pc = 0x218098u;
    SET_GPR_U32(ctx, 31, 0x2180A0u);
    ctx->pc = 0x21809Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x217F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        voiceRequest__13SoundMgrClassFii_0x217f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180A0u; }
        else if (ctx->pc != 0x2180A0u) { ctx->pc = 0x2180A0u; }
    }
    if (ctx->pc != 0x2180A0u) { return; }
    ctx->pc = 0x2180A0u;
    // 0x2180a0: 0x10000006
    ctx->pc = 0x2180A0u;
    {
        const bool branch_taken_0x2180a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2180a0) {
            ctx->pc = 0x2180BCu;
            goto label_2180bc;
        }
    }
    ctx->pc = 0x2180A8u;
label_2180a8:
    // 0x2180a8: 0x30e600ff
    ctx->pc = 0x2180a8u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 7), 255));
    // 0x2180ac: 0x70a02628
    ctx->pc = 0x2180acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2180b0: 0x70402e28
    ctx->pc = 0x2180b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2180b4: 0xc06b49c
    ctx->pc = 0x2180B4u;
    SET_GPR_U32(ctx, 31, 0x2180BCu);
    ctx->pc = 0x2180B8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x1AD270u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSeqRequest_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180BCu; }
        else if (ctx->pc != 0x2180BCu) { ctx->pc = 0x2180BCu; }
    }
    if (ctx->pc != 0x2180BCu) { return; }
    ctx->pc = 0x2180BCu;
label_2180bc:
    // 0x2180bc: 0x7bbf0000
    ctx->pc = 0x2180bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2180c0:
    // 0x2180c0: 0x3e00008
    ctx->pc = 0x2180C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2180C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218090u: goto label_218090;
            case 0x2180A8u: goto label_2180a8;
            case 0x2180BCu: goto label_2180bc;
            case 0x2180C0u: goto label_2180c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2180C8u;
}

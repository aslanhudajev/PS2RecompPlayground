#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: seqRequestImm__13SoundMgrClassFiiii
// Address: 0x2180d0 - 0x218138
void seqRequestImm__13SoundMgrClassFiiii_0x2180d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("seqRequestImm__13SoundMgrClassFiiii");


    ctx->pc = 0x2180d0u;

    // 0x2180d0: 0x27bdfff0
    ctx->pc = 0x2180d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2180d4: 0x10a00015
    ctx->pc = 0x2180D4u;
    {
        const bool branch_taken_0x2180d4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2180D8u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x2180d4) {
            ctx->pc = 0x21812Cu;
            goto label_21812c;
        }
    }
    ctx->pc = 0x2180DCu;
    // 0x2180dc: 0x3c0200c0
    ctx->pc = 0x2180dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)192 << 16));
    // 0x2180e0: 0xa21824
    ctx->pc = 0x2180e0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2180e4: 0x3c020040
    ctx->pc = 0x2180e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x2180e8: 0x14620005
    ctx->pc = 0x2180E8u;
    {
        const bool branch_taken_0x2180e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2180ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
        if (branch_taken_0x2180e8) {
            ctx->pc = 0x218100u;
            goto label_218100;
        }
    }
    ctx->pc = 0x2180F0u;
    // 0x2180f0: 0xc085fa0
    ctx->pc = 0x2180F0u;
    SET_GPR_U32(ctx, 31, 0x2180F8u);
    ctx->pc = 0x2180F4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x217E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        bgmRequest__13SoundMgrClassFii_0x217e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180F8u; }
        else if (ctx->pc != 0x2180F8u) { ctx->pc = 0x2180F8u; }
    }
    if (ctx->pc != 0x2180F8u) { return; }
    ctx->pc = 0x2180F8u;
    // 0x2180f8: 0x1000000d
    ctx->pc = 0x2180F8u;
    {
        const bool branch_taken_0x2180f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2180FCu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2180f8) {
            ctx->pc = 0x218130u;
            goto label_218130;
        }
    }
    ctx->pc = 0x218100u;
label_218100:
    // 0x218100: 0x14620005
    ctx->pc = 0x218100u;
    {
        const bool branch_taken_0x218100 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x218104u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 65535));
        if (branch_taken_0x218100) {
            ctx->pc = 0x218118u;
            goto label_218118;
        }
    }
    ctx->pc = 0x218108u;
    // 0x218108: 0xc085ffc
    ctx->pc = 0x218108u;
    SET_GPR_U32(ctx, 31, 0x218110u);
    ctx->pc = 0x21810Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x217FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        voiceRequestImm__13SoundMgrClassFii_0x217ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218110u; }
        else if (ctx->pc != 0x218110u) { ctx->pc = 0x218110u; }
    }
    if (ctx->pc != 0x218110u) { return; }
    ctx->pc = 0x218110u;
    // 0x218110: 0x10000006
    ctx->pc = 0x218110u;
    {
        const bool branch_taken_0x218110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x218110) {
            ctx->pc = 0x21812Cu;
            goto label_21812c;
        }
    }
    ctx->pc = 0x218118u;
label_218118:
    // 0x218118: 0x30e600ff
    ctx->pc = 0x218118u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 7), 255));
    // 0x21811c: 0x70a02628
    ctx->pc = 0x21811cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x218120: 0x70402e28
    ctx->pc = 0x218120u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x218124: 0xc06b49c
    ctx->pc = 0x218124u;
    SET_GPR_U32(ctx, 31, 0x21812Cu);
    ctx->pc = 0x218128u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x1AD270u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSeqRequest_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21812Cu; }
        else if (ctx->pc != 0x21812Cu) { ctx->pc = 0x21812Cu; }
    }
    if (ctx->pc != 0x21812Cu) { return; }
    ctx->pc = 0x21812Cu;
label_21812c:
    // 0x21812c: 0x7bbf0000
    ctx->pc = 0x21812cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_218130:
    // 0x218130: 0x3e00008
    ctx->pc = 0x218130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218134u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218100u: goto label_218100;
            case 0x218118u: goto label_218118;
            case 0x21812Cu: goto label_21812c;
            case 0x218130u: goto label_218130;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218138u;
}

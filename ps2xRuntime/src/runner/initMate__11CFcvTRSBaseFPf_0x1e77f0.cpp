#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initMate__11CFcvTRSBaseFPf
// Address: 0x1e77f0 - 0x1e78a0
void initMate__11CFcvTRSBaseFPf_0x1e77f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initMate__11CFcvTRSBaseFPf");


    ctx->pc = 0x1e77f0u;

    // 0x1e77f0: 0x27bdffd0
    ctx->pc = 0x1e77f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e77f4: 0x7fbf0020
    ctx->pc = 0x1e77f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e77f8: 0x7fb10010
    ctx->pc = 0x1e77f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e77fc: 0x70808e28
    ctx->pc = 0x1e77fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7800: 0x7fb00000
    ctx->pc = 0x1e7800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7804: 0x70001e28
    ctx->pc = 0x1e7804u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7808: 0x72203628
    ctx->pc = 0x1e7808u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1e780c:
    // 0x1e780c: 0xc4a00000
    ctx->pc = 0x1e780cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7810: 0x24630001
    ctx->pc = 0x1e7810u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e7814: 0x28620006
    ctx->pc = 0x1e7814u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 6));
    // 0x1e7818: 0x46000024
    ctx->pc = 0x1e7818u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1e781c: 0x24a50004
    ctx->pc = 0x1e781cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e7820: 0x44040000
    ctx->pc = 0x1e7820u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1e7824: 0x0
    ctx->pc = 0x1e7824u;
    // NOP
    // 0x1e7828: 0xa4c40012
    ctx->pc = 0x1e7828u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e782c: 0x1440fff7
    ctx->pc = 0x1E782Cu;
    {
        const bool branch_taken_0x1e782c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E7830u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1e782c) {
            ctx->pc = 0x1E780Cu;
            goto label_1e780c;
        }
    }
    ctx->pc = 0x1E7834u;
    // 0x1e7834: 0x70a08628
    ctx->pc = 0x1e7834u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7838: 0x86250012
    ctx->pc = 0x1e7838u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1e783c: 0x86260014
    ctx->pc = 0x1e783cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e7840: 0x86270016
    ctx->pc = 0x1e7840u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x1e7844: 0x26240074
    ctx->pc = 0x1e7844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 116));
    // 0x1e7848: 0xc079b78
    ctx->pc = 0x1E7848u;
    SET_GPR_U32(ctx, 31, 0x1E7850u);
    ctx->pc = 0x1E784Cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setKey__7CFcurveFiiiPf_0x1e6de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7850u; }
        else if (ctx->pc != 0x1E7850u) { ctx->pc = 0x1E7850u; }
    }
    if (ctx->pc != 0x1E7850u) { return; }
    ctx->pc = 0x1E7850u;
    // 0x1e7850: 0x86280012
    ctx->pc = 0x1e7850u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1e7854: 0x86230014
    ctx->pc = 0x1e7854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e7858: 0x86220016
    ctx->pc = 0x1e7858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x1e785c: 0x86250018
    ctx->pc = 0x1e785cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1e7860: 0x8626001a
    ctx->pc = 0x1e7860u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x1e7864: 0x8627001c
    ctx->pc = 0x1e7864u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1e7868: 0x26240090
    ctx->pc = 0x1e7868u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 144));
    // 0x1e786c: 0x1031821
    ctx->pc = 0x1e786cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1e7870: 0x431821
    ctx->pc = 0x1e7870u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7874: 0x31080
    ctx->pc = 0x1e7874u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7878: 0x431021
    ctx->pc = 0x1e7878u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e787c: 0x21080
    ctx->pc = 0x1e787cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e7880: 0x2028021
    ctx->pc = 0x1e7880u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e7884: 0xc079b78
    ctx->pc = 0x1E7884u;
    SET_GPR_U32(ctx, 31, 0x1E788Cu);
    ctx->pc = 0x1E7888u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setKey__7CFcurveFiiiPf_0x1e6de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E788Cu; }
        else if (ctx->pc != 0x1E788Cu) { ctx->pc = 0x1E788Cu; }
    }
    if (ctx->pc != 0x1E788Cu) { return; }
    ctx->pc = 0x1E788Cu;
    // 0x1e788c: 0x7bbf0020
    ctx->pc = 0x1e788cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7890: 0x7bb10010
    ctx->pc = 0x1e7890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7894: 0x7bb00000
    ctx->pc = 0x1e7894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7898: 0x3e00008
    ctx->pc = 0x1E7898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E789Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E780Cu: goto label_1e780c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E78A0u;
}

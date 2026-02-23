#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initTrsRotScl__11CFcvTRSBaseFPf
// Address: 0x1e7700 - 0x1e77ec
void initTrsRotScl__11CFcvTRSBaseFPf_0x1e7700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initTrsRotScl__11CFcvTRSBaseFPf");


    ctx->pc = 0x1e7700u;

    // 0x1e7700: 0x27bdffd0
    ctx->pc = 0x1e7700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7704: 0x7fbf0020
    ctx->pc = 0x1e7704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e7708: 0x7fb10010
    ctx->pc = 0x1e7708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e770c: 0x70808e28
    ctx->pc = 0x1e770cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7710: 0x7fb00000
    ctx->pc = 0x1e7710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7714: 0x70001e28
    ctx->pc = 0x1e7714u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7718: 0x72203628
    ctx->pc = 0x1e7718u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1e771c:
    // 0x1e771c: 0xc4a00000
    ctx->pc = 0x1e771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7720: 0x24630001
    ctx->pc = 0x1e7720u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e7724: 0x28620009
    ctx->pc = 0x1e7724u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 9));
    // 0x1e7728: 0x46000024
    ctx->pc = 0x1e7728u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1e772c: 0x24a50004
    ctx->pc = 0x1e772cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e7730: 0x44040000
    ctx->pc = 0x1e7730u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1e7734: 0x0
    ctx->pc = 0x1e7734u;
    // NOP
    // 0x1e7738: 0xa4c40000
    ctx->pc = 0x1e7738u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e773c: 0x1440fff7
    ctx->pc = 0x1E773Cu;
    {
        const bool branch_taken_0x1e773c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E7740u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1e773c) {
            ctx->pc = 0x1E771Cu;
            goto label_1e771c;
        }
    }
    ctx->pc = 0x1E7744u;
    // 0x1e7744: 0x70a08628
    ctx->pc = 0x1e7744u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7748: 0x86250000
    ctx->pc = 0x1e7748u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e774c: 0x86260002
    ctx->pc = 0x1e774cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e7750: 0x86270004
    ctx->pc = 0x1e7750u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e7754: 0x26240020
    ctx->pc = 0x1e7754u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 32));
    // 0x1e7758: 0xc079b78
    ctx->pc = 0x1E7758u;
    SET_GPR_U32(ctx, 31, 0x1E7760u);
    ctx->pc = 0x1E775Cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setKey__7CFcurveFiiiPf_0x1e6de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7760u; }
        else if (ctx->pc != 0x1E7760u) { ctx->pc = 0x1E7760u; }
    }
    if (ctx->pc != 0x1E7760u) { return; }
    ctx->pc = 0x1E7760u;
    // 0x1e7760: 0x86280000
    ctx->pc = 0x1e7760u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7764: 0x86230002
    ctx->pc = 0x1e7764u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e7768: 0x86220004
    ctx->pc = 0x1e7768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e776c: 0x86250006
    ctx->pc = 0x1e776cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1e7770: 0x86260008
    ctx->pc = 0x1e7770u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7774: 0x8627000a
    ctx->pc = 0x1e7774u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e7778: 0x2624003c
    ctx->pc = 0x1e7778u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 60));
    // 0x1e777c: 0x1031821
    ctx->pc = 0x1e777cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1e7780: 0x431821
    ctx->pc = 0x1e7780u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7784: 0x31080
    ctx->pc = 0x1e7784u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7788: 0x431021
    ctx->pc = 0x1e7788u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e778c: 0x21080
    ctx->pc = 0x1e778cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e7790: 0x2028021
    ctx->pc = 0x1e7790u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e7794: 0xc079b78
    ctx->pc = 0x1E7794u;
    SET_GPR_U32(ctx, 31, 0x1E779Cu);
    ctx->pc = 0x1E7798u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setKey__7CFcurveFiiiPf_0x1e6de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E779Cu; }
        else if (ctx->pc != 0x1E779Cu) { ctx->pc = 0x1E779Cu; }
    }
    if (ctx->pc != 0x1E779Cu) { return; }
    ctx->pc = 0x1E779Cu;
    // 0x1e779c: 0x86280006
    ctx->pc = 0x1e779cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1e77a0: 0x86230008
    ctx->pc = 0x1e77a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e77a4: 0x8622000a
    ctx->pc = 0x1e77a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e77a8: 0x8625000c
    ctx->pc = 0x1e77a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e77ac: 0x8626000e
    ctx->pc = 0x1e77acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1e77b0: 0x86270010
    ctx->pc = 0x1e77b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e77b4: 0x26240058
    ctx->pc = 0x1e77b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 88));
    // 0x1e77b8: 0x1031821
    ctx->pc = 0x1e77b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1e77bc: 0x431821
    ctx->pc = 0x1e77bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e77c0: 0x31080
    ctx->pc = 0x1e77c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e77c4: 0x431021
    ctx->pc = 0x1e77c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e77c8: 0x21080
    ctx->pc = 0x1e77c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e77cc: 0x2028021
    ctx->pc = 0x1e77ccu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e77d0: 0xc079b78
    ctx->pc = 0x1E77D0u;
    SET_GPR_U32(ctx, 31, 0x1E77D8u);
    ctx->pc = 0x1E77D4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setKey__7CFcurveFiiiPf_0x1e6de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E77D8u; }
        else if (ctx->pc != 0x1E77D8u) { ctx->pc = 0x1E77D8u; }
    }
    if (ctx->pc != 0x1E77D8u) { return; }
    ctx->pc = 0x1E77D8u;
    // 0x1e77d8: 0x7bbf0020
    ctx->pc = 0x1e77d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e77dc: 0x7bb10010
    ctx->pc = 0x1e77dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e77e0: 0x7bb00000
    ctx->pc = 0x1e77e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e77e4: 0x3e00008
    ctx->pc = 0x1E77E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E77E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E771Cu: goto label_1e771c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E77ECu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initPlant03__9FcvEffectFv
// Address: 0x1d9600 - 0x1d9978
void initPlant03__9FcvEffectFv_0x1d9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initPlant03__9FcvEffectFv");


    ctx->pc = 0x1d9600u;

    // 0x1d9600: 0x27bdffa0
    ctx->pc = 0x1d9600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d9604: 0x7fbf0050
    ctx->pc = 0x1d9604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1d9608: 0x7fb40040
    ctx->pc = 0x1d9608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d960c: 0x7fb30030
    ctx->pc = 0x1d960cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d9610: 0x7fb20020
    ctx->pc = 0x1d9610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d9614: 0x7fb10010
    ctx->pc = 0x1d9614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9618: 0x70809e28
    ctx->pc = 0x1d9618u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d961c: 0x2405001c
    ctx->pc = 0x1d961cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 28));
    // 0x1d9620: 0xc0761c4
    ctx->pc = 0x1D9620u;
    SET_GPR_U32(ctx, 31, 0x1D9628u);
    ctx->pc = 0x1D9624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9628u; }
        else if (ctx->pc != 0x1D9628u) { ctx->pc = 0x1D9628u; }
    }
    if (ctx->pc != 0x1D9628u) { return; }
    ctx->pc = 0x1D9628u;
    // 0x1d9628: 0xae620054
    ctx->pc = 0x1d9628u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1d962c: 0x3c0342f0
    ctx->pc = 0x1d962cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17136 << 16));
    // 0x1d9630: 0xae630028
    ctx->pc = 0x1d9630u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x1d9634: 0x70008e28
    ctx->pc = 0x1d9634u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9638: 0x70008628
    ctx->pc = 0x1d9638u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d963c: 0x100000ba
    ctx->pc = 0x1D963Cu;
    {
        const bool branch_taken_0x1d963c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9640u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d963c) {
            ctx->pc = 0x1D9928u;
            goto label_1d9928;
        }
    }
    ctx->pc = 0x1D9644u;
label_1d9644:
    // 0x1d9644: 0x1020001d
    ctx->pc = 0x1D9644u;
    {
        const bool branch_taken_0x1d9644 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9648u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x1d9644) {
            ctx->pc = 0x1D96BCu;
            goto label_1d96bc;
        }
    }
    ctx->pc = 0x1D964Cu;
    // 0x1d964c: 0x26251f54
    ctx->pc = 0x1d964cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8020));
    // 0x1d9650: 0xc07f208
    ctx->pc = 0x1D9650u;
    SET_GPR_U32(ctx, 31, 0x1D9658u);
    ctx->pc = 0x1D9654u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9658u; }
        else if (ctx->pc != 0x1D9658u) { ctx->pc = 0x1D9658u; }
    }
    if (ctx->pc != 0x1D9658u) { return; }
    ctx->pc = 0x1D9658u;
    // 0x1d9658: 0x8e630054
    ctx->pc = 0x1d9658u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d965c: 0x70403628
    ctx->pc = 0x1d965cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9660: 0x3c02003c
    ctx->pc = 0x1d9660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d9664: 0x34450016
    ctx->pc = 0x1d9664u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 22));
    // 0x1d9668: 0x70003e28
    ctx->pc = 0x1d9668u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d966c: 0xc079e80
    ctx->pc = 0x1D966Cu;
    SET_GPR_U32(ctx, 31, 0x1D9674u);
    ctx->pc = 0x1D9670u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9674u; }
        else if (ctx->pc != 0x1D9674u) { ctx->pc = 0x1D9674u; }
    }
    if (ctx->pc != 0x1D9674u) { return; }
    ctx->pc = 0x1D9674u;
    // 0x1d9674: 0x8e630054
    ctx->pc = 0x1d9674u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9678: 0x3c02003c
    ctx->pc = 0x1d9678u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d967c: 0x34450017
    ctx->pc = 0x1d967cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 23));
    // 0x1d9680: 0xc079e9c
    ctx->pc = 0x1D9680u;
    SET_GPR_U32(ctx, 31, 0x1D9688u);
    ctx->pc = 0x1D9684u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        addObj__7CFcvTRSFi_0x1e7a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9688u; }
        else if (ctx->pc != 0x1D9688u) { ctx->pc = 0x1D9688u; }
    }
    if (ctx->pc != 0x1D9688u) { return; }
    ctx->pc = 0x1D9688u;
    // 0x1d9688: 0x8e630054
    ctx->pc = 0x1d9688u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d968c: 0x3c023fa6
    ctx->pc = 0x1d968cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16294 << 16));
    // 0x1d9690: 0x34426666
    ctx->pc = 0x1d9690u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x1d9694: 0x44826000
    ctx->pc = 0x1d9694u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9698: 0xc079edc
    ctx->pc = 0x1D9698u;
    SET_GPR_U32(ctx, 31, 0x1D96A0u);
    ctx->pc = 0x1D969Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTransRate__7CFcvTRSFf_0x1e7b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D96A0u; }
        else if (ctx->pc != 0x1D96A0u) { ctx->pc = 0x1D96A0u; }
    }
    if (ctx->pc != 0x1D96A0u) { return; }
    ctx->pc = 0x1D96A0u;
    // 0x1d96a0: 0x8e630054
    ctx->pc = 0x1d96a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d96a4: 0x3c024248
    ctx->pc = 0x1d96a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d96a8: 0x44826000
    ctx->pc = 0x1d96a8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d96ac: 0xc079eac
    ctx->pc = 0x1D96ACu;
    SET_GPR_U32(ctx, 31, 0x1D96B4u);
    ctx->pc = 0x1D96B0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D96B4u; }
        else if (ctx->pc != 0x1D96B4u) { ctx->pc = 0x1D96B4u; }
    }
    if (ctx->pc != 0x1D96B4u) { return; }
    ctx->pc = 0x1D96B4u;
    // 0x1d96b4: 0x26310001
    ctx->pc = 0x1d96b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d96b8: 0x2a030005
    ctx->pc = 0x1d96b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 5));
label_1d96bc:
    // 0x1d96bc: 0x1460001f
    ctx->pc = 0x1D96BCu;
    {
        const bool branch_taken_0x1d96bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D96C0u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 15));
        if (branch_taken_0x1d96bc) {
            ctx->pc = 0x1D973Cu;
            goto label_1d973c;
        }
    }
    ctx->pc = 0x1D96C4u;
    // 0x1d96c4: 0x2a01000f
    ctx->pc = 0x1d96c4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 15));
    // 0x1d96c8: 0x1020001b
    ctx->pc = 0x1D96C8u;
    {
        const bool branch_taken_0x1d96c8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d96c8) {
            ctx->pc = 0x1D9738u;
            goto label_1d9738;
        }
    }
    ctx->pc = 0x1D96D0u;
    // 0x1d96d0: 0x24020005
    ctx->pc = 0x1d96d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d96d4: 0x16020003
    ctx->pc = 0x1D96D4u;
    {
        const bool branch_taken_0x1d96d4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D96D8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8025));
        if (branch_taken_0x1d96d4) {
            ctx->pc = 0x1D96E4u;
            goto label_1d96e4;
        }
    }
    ctx->pc = 0x1D96DCu;
    // 0x1d96dc: 0x70008e28
    ctx->pc = 0x1d96dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d96e0: 0x26251f59
    ctx->pc = 0x1d96e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8025));
label_1d96e4:
    // 0x1d96e4: 0xc07f208
    ctx->pc = 0x1D96E4u;
    SET_GPR_U32(ctx, 31, 0x1D96ECu);
    ctx->pc = 0x1D96E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D96ECu; }
        else if (ctx->pc != 0x1D96ECu) { ctx->pc = 0x1D96ECu; }
    }
    if (ctx->pc != 0x1D96ECu) { return; }
    ctx->pc = 0x1D96ECu;
    // 0x1d96ec: 0x8e630054
    ctx->pc = 0x1d96ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d96f0: 0x70403628
    ctx->pc = 0x1d96f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d96f4: 0x3c02003c
    ctx->pc = 0x1d96f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d96f8: 0x34450018
    ctx->pc = 0x1d96f8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 24));
    // 0x1d96fc: 0x70003e28
    ctx->pc = 0x1d96fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9700: 0xc079e80
    ctx->pc = 0x1D9700u;
    SET_GPR_U32(ctx, 31, 0x1D9708u);
    ctx->pc = 0x1D9704u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9708u; }
        else if (ctx->pc != 0x1D9708u) { ctx->pc = 0x1D9708u; }
    }
    if (ctx->pc != 0x1D9708u) { return; }
    ctx->pc = 0x1D9708u;
    // 0x1d9708: 0x8e630054
    ctx->pc = 0x1d9708u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d970c: 0x3c023fa6
    ctx->pc = 0x1d970cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16294 << 16));
    // 0x1d9710: 0x34426666
    ctx->pc = 0x1d9710u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x1d9714: 0x44826000
    ctx->pc = 0x1d9714u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9718: 0xc079edc
    ctx->pc = 0x1D9718u;
    SET_GPR_U32(ctx, 31, 0x1D9720u);
    ctx->pc = 0x1D971Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTransRate__7CFcvTRSFf_0x1e7b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9720u; }
        else if (ctx->pc != 0x1D9720u) { ctx->pc = 0x1D9720u; }
    }
    if (ctx->pc != 0x1D9720u) { return; }
    ctx->pc = 0x1D9720u;
    // 0x1d9720: 0x8e630054
    ctx->pc = 0x1d9720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9724: 0x3c024248
    ctx->pc = 0x1d9724u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9728: 0x44826000
    ctx->pc = 0x1d9728u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d972c: 0xc079eac
    ctx->pc = 0x1D972Cu;
    SET_GPR_U32(ctx, 31, 0x1D9734u);
    ctx->pc = 0x1D9730u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9734u; }
        else if (ctx->pc != 0x1D9734u) { ctx->pc = 0x1D9734u; }
    }
    if (ctx->pc != 0x1D9734u) { return; }
    ctx->pc = 0x1D9734u;
    // 0x1d9734: 0x26310001
    ctx->pc = 0x1d9734u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d9738:
    // 0x1d9738: 0x2a03000f
    ctx->pc = 0x1d9738u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 15));
label_1d973c:
    // 0x1d973c: 0x1460001f
    ctx->pc = 0x1D973Cu;
    {
        const bool branch_taken_0x1d973c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9740u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 23));
        if (branch_taken_0x1d973c) {
            ctx->pc = 0x1D97BCu;
            goto label_1d97bc;
        }
    }
    ctx->pc = 0x1D9744u;
    // 0x1d9744: 0x2a010017
    ctx->pc = 0x1d9744u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 23));
    // 0x1d9748: 0x1020001b
    ctx->pc = 0x1D9748u;
    {
        const bool branch_taken_0x1d9748 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9748) {
            ctx->pc = 0x1D97B8u;
            goto label_1d97b8;
        }
    }
    ctx->pc = 0x1D9750u;
    // 0x1d9750: 0x2402000f
    ctx->pc = 0x1d9750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d9754: 0x16020003
    ctx->pc = 0x1D9754u;
    {
        const bool branch_taken_0x1d9754 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9758u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8035));
        if (branch_taken_0x1d9754) {
            ctx->pc = 0x1D9764u;
            goto label_1d9764;
        }
    }
    ctx->pc = 0x1D975Cu;
    // 0x1d975c: 0x70008e28
    ctx->pc = 0x1d975cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9760: 0x26251f63
    ctx->pc = 0x1d9760u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8035));
label_1d9764:
    // 0x1d9764: 0xc07f208
    ctx->pc = 0x1D9764u;
    SET_GPR_U32(ctx, 31, 0x1D976Cu);
    ctx->pc = 0x1D9768u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D976Cu; }
        else if (ctx->pc != 0x1D976Cu) { ctx->pc = 0x1D976Cu; }
    }
    if (ctx->pc != 0x1D976Cu) { return; }
    ctx->pc = 0x1D976Cu;
    // 0x1d976c: 0x8e630054
    ctx->pc = 0x1d976cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9770: 0x70403628
    ctx->pc = 0x1d9770u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9774: 0x3c02003c
    ctx->pc = 0x1d9774u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d9778: 0x34450019
    ctx->pc = 0x1d9778u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 25));
    // 0x1d977c: 0x70003e28
    ctx->pc = 0x1d977cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9780: 0xc079e80
    ctx->pc = 0x1D9780u;
    SET_GPR_U32(ctx, 31, 0x1D9788u);
    ctx->pc = 0x1D9784u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9788u; }
        else if (ctx->pc != 0x1D9788u) { ctx->pc = 0x1D9788u; }
    }
    if (ctx->pc != 0x1D9788u) { return; }
    ctx->pc = 0x1D9788u;
    // 0x1d9788: 0x8e630054
    ctx->pc = 0x1d9788u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d978c: 0x3c023fa6
    ctx->pc = 0x1d978cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16294 << 16));
    // 0x1d9790: 0x34426666
    ctx->pc = 0x1d9790u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x1d9794: 0x44826000
    ctx->pc = 0x1d9794u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9798: 0xc079edc
    ctx->pc = 0x1D9798u;
    SET_GPR_U32(ctx, 31, 0x1D97A0u);
    ctx->pc = 0x1D979Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTransRate__7CFcvTRSFf_0x1e7b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97A0u; }
        else if (ctx->pc != 0x1D97A0u) { ctx->pc = 0x1D97A0u; }
    }
    if (ctx->pc != 0x1D97A0u) { return; }
    ctx->pc = 0x1D97A0u;
    // 0x1d97a0: 0x8e630054
    ctx->pc = 0x1d97a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d97a4: 0x3c024248
    ctx->pc = 0x1d97a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d97a8: 0x44826000
    ctx->pc = 0x1d97a8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d97ac: 0xc079eac
    ctx->pc = 0x1D97ACu;
    SET_GPR_U32(ctx, 31, 0x1D97B4u);
    ctx->pc = 0x1D97B0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97B4u; }
        else if (ctx->pc != 0x1D97B4u) { ctx->pc = 0x1D97B4u; }
    }
    if (ctx->pc != 0x1D97B4u) { return; }
    ctx->pc = 0x1D97B4u;
    // 0x1d97b4: 0x26310001
    ctx->pc = 0x1d97b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d97b8:
    // 0x1d97b8: 0x2a030017
    ctx->pc = 0x1d97b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 23));
label_1d97bc:
    // 0x1d97bc: 0x1460001f
    ctx->pc = 0x1D97BCu;
    {
        const bool branch_taken_0x1d97bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D97C0u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 25));
        if (branch_taken_0x1d97bc) {
            ctx->pc = 0x1D983Cu;
            goto label_1d983c;
        }
    }
    ctx->pc = 0x1D97C4u;
    // 0x1d97c4: 0x2a010019
    ctx->pc = 0x1d97c4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 25));
    // 0x1d97c8: 0x1020001b
    ctx->pc = 0x1D97C8u;
    {
        const bool branch_taken_0x1d97c8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d97c8) {
            ctx->pc = 0x1D9838u;
            goto label_1d9838;
        }
    }
    ctx->pc = 0x1D97D0u;
    // 0x1d97d0: 0x24020017
    ctx->pc = 0x1d97d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
    // 0x1d97d4: 0x16020003
    ctx->pc = 0x1D97D4u;
    {
        const bool branch_taken_0x1d97d4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D97D8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8043));
        if (branch_taken_0x1d97d4) {
            ctx->pc = 0x1D97E4u;
            goto label_1d97e4;
        }
    }
    ctx->pc = 0x1D97DCu;
    // 0x1d97dc: 0x70008e28
    ctx->pc = 0x1d97dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d97e0: 0x26251f6b
    ctx->pc = 0x1d97e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8043));
label_1d97e4:
    // 0x1d97e4: 0xc07f208
    ctx->pc = 0x1D97E4u;
    SET_GPR_U32(ctx, 31, 0x1D97ECu);
    ctx->pc = 0x1D97E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97ECu; }
        else if (ctx->pc != 0x1D97ECu) { ctx->pc = 0x1D97ECu; }
    }
    if (ctx->pc != 0x1D97ECu) { return; }
    ctx->pc = 0x1D97ECu;
    // 0x1d97ec: 0x7040a628
    ctx->pc = 0x1d97ecu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d97f0: 0x27848d4c
    ctx->pc = 0x1d97f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1d97f4: 0xc07f208
    ctx->pc = 0x1D97F4u;
    SET_GPR_U32(ctx, 31, 0x1D97FCu);
    ctx->pc = 0x1D97F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8045));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97FCu; }
        else if (ctx->pc != 0x1D97FCu) { ctx->pc = 0x1D97FCu; }
    }
    if (ctx->pc != 0x1D97FCu) { return; }
    ctx->pc = 0x1D97FCu;
    // 0x1d97fc: 0x8e630054
    ctx->pc = 0x1d97fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9800: 0x70403e28
    ctx->pc = 0x1d9800u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9804: 0x3c02001b
    ctx->pc = 0x1d9804u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1d9808: 0x72803628
    ctx->pc = 0x1d9808u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1d980c: 0x344500b3
    ctx->pc = 0x1d980cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 179));
    // 0x1d9810: 0xc079e80
    ctx->pc = 0x1D9810u;
    SET_GPR_U32(ctx, 31, 0x1D9818u);
    ctx->pc = 0x1D9814u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9818u; }
        else if (ctx->pc != 0x1D9818u) { ctx->pc = 0x1D9818u; }
    }
    if (ctx->pc != 0x1D9818u) { return; }
    ctx->pc = 0x1D9818u;
    // 0x1d9818: 0x8e630054
    ctx->pc = 0x1d9818u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d981c: 0x3c023fa6
    ctx->pc = 0x1d981cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16294 << 16));
    // 0x1d9820: 0x34426666
    ctx->pc = 0x1d9820u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x1d9824: 0x44826000
    ctx->pc = 0x1d9824u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9828: 0xc079edc
    ctx->pc = 0x1D9828u;
    SET_GPR_U32(ctx, 31, 0x1D9830u);
    ctx->pc = 0x1D982Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTransRate__7CFcvTRSFf_0x1e7b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9830u; }
        else if (ctx->pc != 0x1D9830u) { ctx->pc = 0x1D9830u; }
    }
    if (ctx->pc != 0x1D9830u) { return; }
    ctx->pc = 0x1D9830u;
    // 0x1d9830: 0x26310001
    ctx->pc = 0x1d9830u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d9834: 0x0
    ctx->pc = 0x1d9834u;
    // NOP
label_1d9838:
    // 0x1d9838: 0x2a030019
    ctx->pc = 0x1d9838u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 25));
label_1d983c:
    // 0x1d983c: 0x1460001f
    ctx->pc = 0x1D983Cu;
    {
        const bool branch_taken_0x1d983c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9840u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 28));
        if (branch_taken_0x1d983c) {
            ctx->pc = 0x1D98BCu;
            goto label_1d98bc;
        }
    }
    ctx->pc = 0x1D9844u;
    // 0x1d9844: 0x2a01001c
    ctx->pc = 0x1d9844u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 28));
    // 0x1d9848: 0x1020001b
    ctx->pc = 0x1D9848u;
    {
        const bool branch_taken_0x1d9848 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9848) {
            ctx->pc = 0x1D98B8u;
            goto label_1d98b8;
        }
    }
    ctx->pc = 0x1D9850u;
    // 0x1d9850: 0x24020019
    ctx->pc = 0x1d9850u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d9854: 0x16020003
    ctx->pc = 0x1D9854u;
    {
        const bool branch_taken_0x1d9854 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9858u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8046));
        if (branch_taken_0x1d9854) {
            ctx->pc = 0x1D9864u;
            goto label_1d9864;
        }
    }
    ctx->pc = 0x1D985Cu;
    // 0x1d985c: 0x70008e28
    ctx->pc = 0x1d985cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9860: 0x26251f6e
    ctx->pc = 0x1d9860u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8046));
label_1d9864:
    // 0x1d9864: 0xc07f208
    ctx->pc = 0x1D9864u;
    SET_GPR_U32(ctx, 31, 0x1D986Cu);
    ctx->pc = 0x1D9868u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D986Cu; }
        else if (ctx->pc != 0x1D986Cu) { ctx->pc = 0x1D986Cu; }
    }
    if (ctx->pc != 0x1D986Cu) { return; }
    ctx->pc = 0x1D986Cu;
    // 0x1d986c: 0x8e630054
    ctx->pc = 0x1d986cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9870: 0x70403628
    ctx->pc = 0x1d9870u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9874: 0x3c02003c
    ctx->pc = 0x1d9874u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d9878: 0x3445001a
    ctx->pc = 0x1d9878u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 26));
    // 0x1d987c: 0x70003e28
    ctx->pc = 0x1d987cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9880: 0xc079e80
    ctx->pc = 0x1D9880u;
    SET_GPR_U32(ctx, 31, 0x1D9888u);
    ctx->pc = 0x1D9884u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9888u; }
        else if (ctx->pc != 0x1D9888u) { ctx->pc = 0x1D9888u; }
    }
    if (ctx->pc != 0x1D9888u) { return; }
    ctx->pc = 0x1D9888u;
    // 0x1d9888: 0x8e630054
    ctx->pc = 0x1d9888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d988c: 0x3c023fa6
    ctx->pc = 0x1d988cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16294 << 16));
    // 0x1d9890: 0x34426666
    ctx->pc = 0x1d9890u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x1d9894: 0x44826000
    ctx->pc = 0x1d9894u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9898: 0xc079edc
    ctx->pc = 0x1D9898u;
    SET_GPR_U32(ctx, 31, 0x1D98A0u);
    ctx->pc = 0x1D989Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTransRate__7CFcvTRSFf_0x1e7b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98A0u; }
        else if (ctx->pc != 0x1D98A0u) { ctx->pc = 0x1D98A0u; }
    }
    if (ctx->pc != 0x1D98A0u) { return; }
    ctx->pc = 0x1D98A0u;
    // 0x1d98a0: 0x8e630054
    ctx->pc = 0x1d98a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d98a4: 0x3c024248
    ctx->pc = 0x1d98a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d98a8: 0x44826000
    ctx->pc = 0x1d98a8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d98ac: 0xc079eac
    ctx->pc = 0x1D98ACu;
    SET_GPR_U32(ctx, 31, 0x1D98B4u);
    ctx->pc = 0x1D98B0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98B4u; }
        else if (ctx->pc != 0x1D98B4u) { ctx->pc = 0x1D98B4u; }
    }
    if (ctx->pc != 0x1D98B4u) { return; }
    ctx->pc = 0x1D98B4u;
    // 0x1d98b4: 0x26310001
    ctx->pc = 0x1d98b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d98b8:
    // 0x1d98b8: 0x2a03001c
    ctx->pc = 0x1d98b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 28));
label_1d98bc:
    // 0x1d98bc: 0x54600019
    ctx->pc = 0x1D98BCu;
    {
        const bool branch_taken_0x1d98bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d98bc) {
            ctx->pc = 0x1D98C0u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1D9924u;
            goto label_1d9924;
        }
    }
    ctx->pc = 0x1D98C4u;
    // 0x1d98c4: 0x2402001c
    ctx->pc = 0x1d98c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x1d98c8: 0x16020004
    ctx->pc = 0x1D98C8u;
    {
        const bool branch_taken_0x1d98c8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D98CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8049));
        if (branch_taken_0x1d98c8) {
            ctx->pc = 0x1D98DCu;
            goto label_1d98dc;
        }
    }
    ctx->pc = 0x1D98D0u;
    // 0x1d98d0: 0x70008e28
    ctx->pc = 0x1d98d0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d98d4: 0x0
    ctx->pc = 0x1d98d4u;
    // NOP
    // 0x1d98d8: 0x26251f71
    ctx->pc = 0x1d98d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8049));
label_1d98dc:
    // 0x1d98dc: 0xc07f208
    ctx->pc = 0x1D98DCu;
    SET_GPR_U32(ctx, 31, 0x1D98E4u);
    ctx->pc = 0x1D98E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98E4u; }
        else if (ctx->pc != 0x1D98E4u) { ctx->pc = 0x1D98E4u; }
    }
    if (ctx->pc != 0x1D98E4u) { return; }
    ctx->pc = 0x1D98E4u;
    // 0x1d98e4: 0x8e630054
    ctx->pc = 0x1d98e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d98e8: 0x70403628
    ctx->pc = 0x1d98e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d98ec: 0x3c02003c
    ctx->pc = 0x1d98ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d98f0: 0x3445001b
    ctx->pc = 0x1d98f0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 27));
    // 0x1d98f4: 0x70003e28
    ctx->pc = 0x1d98f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d98f8: 0xc079e80
    ctx->pc = 0x1D98F8u;
    SET_GPR_U32(ctx, 31, 0x1D9900u);
    ctx->pc = 0x1D98FCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9900u; }
        else if (ctx->pc != 0x1D9900u) { ctx->pc = 0x1D9900u; }
    }
    if (ctx->pc != 0x1D9900u) { return; }
    ctx->pc = 0x1D9900u;
    // 0x1d9900: 0x8e630054
    ctx->pc = 0x1d9900u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9904: 0x3c023fa6
    ctx->pc = 0x1d9904u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16294 << 16));
    // 0x1d9908: 0x34426666
    ctx->pc = 0x1d9908u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x1d990c: 0x44826000
    ctx->pc = 0x1d990cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9910: 0xc079edc
    ctx->pc = 0x1D9910u;
    SET_GPR_U32(ctx, 31, 0x1D9918u);
    ctx->pc = 0x1D9914u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTransRate__7CFcvTRSFf_0x1e7b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9918u; }
        else if (ctx->pc != 0x1D9918u) { ctx->pc = 0x1D9918u; }
    }
    if (ctx->pc != 0x1D9918u) { return; }
    ctx->pc = 0x1D9918u;
    // 0x1d9918: 0x26310001
    ctx->pc = 0x1d9918u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d991c: 0x0
    ctx->pc = 0x1d991cu;
    // NOP
    // 0x1d9920: 0x265200f0
    ctx->pc = 0x1d9920u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1d9924:
    // 0x1d9924: 0x26100001
    ctx->pc = 0x1d9924u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d9928:
    // 0x1d9928: 0x8e630000
    ctx->pc = 0x1d9928u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d992c: 0x203182a
    ctx->pc = 0x1d992cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1d9930: 0x1460ff44
    ctx->pc = 0x1D9930u;
    {
        const bool branch_taken_0x1d9930 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9934u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x1d9930) {
            ctx->pc = 0x1D9644u;
            goto label_1d9644;
        }
    }
    ctx->pc = 0x1D9938u;
    // 0x1d9938: 0x3c030027
    ctx->pc = 0x1d9938u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1d993c: 0x24638b18
    ctx->pc = 0x1d993cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937368));
    // 0x1d9940: 0xc4620000
    ctx->pc = 0x1d9940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9944: 0xc4610004
    ctx->pc = 0x1d9944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9948: 0xc4600008
    ctx->pc = 0x1d9948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d994c: 0xe6620114
    ctx->pc = 0x1d994cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1d9950: 0xe6610118
    ctx->pc = 0x1d9950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1d9954: 0xe660011c
    ctx->pc = 0x1d9954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1d9958: 0x7bbf0050
    ctx->pc = 0x1d9958u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d995c: 0x7bb40040
    ctx->pc = 0x1d995cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9960: 0x7bb30030
    ctx->pc = 0x1d9960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9964: 0x7bb20020
    ctx->pc = 0x1d9964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9968: 0x7bb10010
    ctx->pc = 0x1d9968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d996c: 0x7bb00000
    ctx->pc = 0x1d996cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9970: 0x3e00008
    ctx->pc = 0x1D9970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9974u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9644u: goto label_1d9644;
            case 0x1D96BCu: goto label_1d96bc;
            case 0x1D96E4u: goto label_1d96e4;
            case 0x1D9738u: goto label_1d9738;
            case 0x1D973Cu: goto label_1d973c;
            case 0x1D9764u: goto label_1d9764;
            case 0x1D97B8u: goto label_1d97b8;
            case 0x1D97BCu: goto label_1d97bc;
            case 0x1D97E4u: goto label_1d97e4;
            case 0x1D9838u: goto label_1d9838;
            case 0x1D983Cu: goto label_1d983c;
            case 0x1D9864u: goto label_1d9864;
            case 0x1D98B8u: goto label_1d98b8;
            case 0x1D98BCu: goto label_1d98bc;
            case 0x1D98DCu: goto label_1d98dc;
            case 0x1D9924u: goto label_1d9924;
            case 0x1D9928u: goto label_1d9928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D9978u;
}

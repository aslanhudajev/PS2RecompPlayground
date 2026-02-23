#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initPlant02__9FcvEffectFv
// Address: 0x1d93d0 - 0x1d95f8
void initPlant02__9FcvEffectFv_0x1d93d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initPlant02__9FcvEffectFv");


    ctx->pc = 0x1d93d0u;

    // 0x1d93d0: 0x27bdffa0
    ctx->pc = 0x1d93d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d93d4: 0x7fbf0050
    ctx->pc = 0x1d93d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1d93d8: 0x7fb40040
    ctx->pc = 0x1d93d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d93dc: 0x7fb30030
    ctx->pc = 0x1d93dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d93e0: 0x7fb20020
    ctx->pc = 0x1d93e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d93e4: 0x7fb10010
    ctx->pc = 0x1d93e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d93e8: 0x70809e28
    ctx->pc = 0x1d93e8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d93ec: 0x2405001e
    ctx->pc = 0x1d93ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d93f0: 0xc0761c4
    ctx->pc = 0x1D93F0u;
    SET_GPR_U32(ctx, 31, 0x1D93F8u);
    ctx->pc = 0x1D93F4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D93F8u; }
        else if (ctx->pc != 0x1D93F8u) { ctx->pc = 0x1D93F8u; }
    }
    if (ctx->pc != 0x1D93F8u) { return; }
    ctx->pc = 0x1D93F8u;
    // 0x1d93f8: 0xae620054
    ctx->pc = 0x1d93f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1d93fc: 0x3c0342f0
    ctx->pc = 0x1d93fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17136 << 16));
    // 0x1d9400: 0xae630028
    ctx->pc = 0x1d9400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x1d9404: 0x70008e28
    ctx->pc = 0x1d9404u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9408: 0x70008628
    ctx->pc = 0x1d9408u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d940c: 0x10000066
    ctx->pc = 0x1D940Cu;
    {
        const bool branch_taken_0x1d940c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9410u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d940c) {
            ctx->pc = 0x1D95A8u;
            goto label_1d95a8;
        }
    }
    ctx->pc = 0x1D9414u;
label_1d9414:
    // 0x1d9414: 0x10200017
    ctx->pc = 0x1D9414u;
    {
        const bool branch_taken_0x1d9414 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9418u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x1d9414) {
            ctx->pc = 0x1D9474u;
            goto label_1d9474;
        }
    }
    ctx->pc = 0x1D941Cu;
    // 0x1d941c: 0x26251f72
    ctx->pc = 0x1d941cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8050));
    // 0x1d9420: 0xc07f208
    ctx->pc = 0x1D9420u;
    SET_GPR_U32(ctx, 31, 0x1D9428u);
    ctx->pc = 0x1D9424u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9428u; }
        else if (ctx->pc != 0x1D9428u) { ctx->pc = 0x1D9428u; }
    }
    if (ctx->pc != 0x1D9428u) { return; }
    ctx->pc = 0x1D9428u;
    // 0x1d9428: 0x8e630054
    ctx->pc = 0x1d9428u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d942c: 0x70403628
    ctx->pc = 0x1d942cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9430: 0x3c02003c
    ctx->pc = 0x1d9430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d9434: 0x34450016
    ctx->pc = 0x1d9434u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 22));
    // 0x1d9438: 0x70003e28
    ctx->pc = 0x1d9438u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d943c: 0xc079e80
    ctx->pc = 0x1D943Cu;
    SET_GPR_U32(ctx, 31, 0x1D9444u);
    ctx->pc = 0x1D9440u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9444u; }
        else if (ctx->pc != 0x1D9444u) { ctx->pc = 0x1D9444u; }
    }
    if (ctx->pc != 0x1D9444u) { return; }
    ctx->pc = 0x1D9444u;
    // 0x1d9444: 0x8e630054
    ctx->pc = 0x1d9444u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9448: 0x3c02003c
    ctx->pc = 0x1d9448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d944c: 0x34450017
    ctx->pc = 0x1d944cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 23));
    // 0x1d9450: 0xc079e9c
    ctx->pc = 0x1D9450u;
    SET_GPR_U32(ctx, 31, 0x1D9458u);
    ctx->pc = 0x1D9454u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        addObj__7CFcvTRSFi_0x1e7a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9458u; }
        else if (ctx->pc != 0x1D9458u) { ctx->pc = 0x1D9458u; }
    }
    if (ctx->pc != 0x1D9458u) { return; }
    ctx->pc = 0x1D9458u;
    // 0x1d9458: 0x8e630054
    ctx->pc = 0x1d9458u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d945c: 0x3c024248
    ctx->pc = 0x1d945cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9460: 0x44826000
    ctx->pc = 0x1d9460u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9464: 0xc079eac
    ctx->pc = 0x1D9464u;
    SET_GPR_U32(ctx, 31, 0x1D946Cu);
    ctx->pc = 0x1D9468u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D946Cu; }
        else if (ctx->pc != 0x1D946Cu) { ctx->pc = 0x1D946Cu; }
    }
    if (ctx->pc != 0x1D946Cu) { return; }
    ctx->pc = 0x1D946Cu;
    // 0x1d946c: 0x26310001
    ctx->pc = 0x1d946cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d9470: 0x2a030005
    ctx->pc = 0x1d9470u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 5));
label_1d9474:
    // 0x1d9474: 0x14600019
    ctx->pc = 0x1D9474u;
    {
        const bool branch_taken_0x1d9474 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9478u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 26));
        if (branch_taken_0x1d9474) {
            ctx->pc = 0x1D94DCu;
            goto label_1d94dc;
        }
    }
    ctx->pc = 0x1D947Cu;
    // 0x1d947c: 0x2a01001a
    ctx->pc = 0x1d947cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 26));
    // 0x1d9480: 0x10200015
    ctx->pc = 0x1D9480u;
    {
        const bool branch_taken_0x1d9480 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9480) {
            ctx->pc = 0x1D94D8u;
            goto label_1d94d8;
        }
    }
    ctx->pc = 0x1D9488u;
    // 0x1d9488: 0x24020005
    ctx->pc = 0x1d9488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d948c: 0x16020003
    ctx->pc = 0x1D948Cu;
    {
        const bool branch_taken_0x1d948c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9490u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8055));
        if (branch_taken_0x1d948c) {
            ctx->pc = 0x1D949Cu;
            goto label_1d949c;
        }
    }
    ctx->pc = 0x1D9494u;
    // 0x1d9494: 0x70008e28
    ctx->pc = 0x1d9494u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9498: 0x26251f77
    ctx->pc = 0x1d9498u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8055));
label_1d949c:
    // 0x1d949c: 0xc07f208
    ctx->pc = 0x1D949Cu;
    SET_GPR_U32(ctx, 31, 0x1D94A4u);
    ctx->pc = 0x1D94A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D94A4u; }
        else if (ctx->pc != 0x1D94A4u) { ctx->pc = 0x1D94A4u; }
    }
    if (ctx->pc != 0x1D94A4u) { return; }
    ctx->pc = 0x1D94A4u;
    // 0x1d94a4: 0x8e630054
    ctx->pc = 0x1d94a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d94a8: 0x70403628
    ctx->pc = 0x1d94a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d94ac: 0x3c02003c
    ctx->pc = 0x1d94acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d94b0: 0x34450019
    ctx->pc = 0x1d94b0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 25));
    // 0x1d94b4: 0x70003e28
    ctx->pc = 0x1d94b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d94b8: 0xc079e80
    ctx->pc = 0x1D94B8u;
    SET_GPR_U32(ctx, 31, 0x1D94C0u);
    ctx->pc = 0x1D94BCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D94C0u; }
        else if (ctx->pc != 0x1D94C0u) { ctx->pc = 0x1D94C0u; }
    }
    if (ctx->pc != 0x1D94C0u) { return; }
    ctx->pc = 0x1D94C0u;
    // 0x1d94c0: 0x8e630054
    ctx->pc = 0x1d94c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d94c4: 0x3c024248
    ctx->pc = 0x1d94c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d94c8: 0x44826000
    ctx->pc = 0x1d94c8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d94cc: 0xc079eac
    ctx->pc = 0x1D94CCu;
    SET_GPR_U32(ctx, 31, 0x1D94D4u);
    ctx->pc = 0x1D94D0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D94D4u; }
        else if (ctx->pc != 0x1D94D4u) { ctx->pc = 0x1D94D4u; }
    }
    if (ctx->pc != 0x1D94D4u) { return; }
    ctx->pc = 0x1D94D4u;
    // 0x1d94d4: 0x26310001
    ctx->pc = 0x1d94d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d94d8:
    // 0x1d94d8: 0x2a03001a
    ctx->pc = 0x1d94d8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 26));
label_1d94dc:
    // 0x1d94dc: 0x14600019
    ctx->pc = 0x1D94DCu;
    {
        const bool branch_taken_0x1d94dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D94E0u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 29));
        if (branch_taken_0x1d94dc) {
            ctx->pc = 0x1D9544u;
            goto label_1d9544;
        }
    }
    ctx->pc = 0x1D94E4u;
    // 0x1d94e4: 0x2a01001d
    ctx->pc = 0x1d94e4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 29));
    // 0x1d94e8: 0x10200015
    ctx->pc = 0x1D94E8u;
    {
        const bool branch_taken_0x1d94e8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d94e8) {
            ctx->pc = 0x1D9540u;
            goto label_1d9540;
        }
    }
    ctx->pc = 0x1D94F0u;
    // 0x1d94f0: 0x2402001a
    ctx->pc = 0x1d94f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26));
    // 0x1d94f4: 0x16020003
    ctx->pc = 0x1D94F4u;
    {
        const bool branch_taken_0x1d94f4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D94F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8076));
        if (branch_taken_0x1d94f4) {
            ctx->pc = 0x1D9504u;
            goto label_1d9504;
        }
    }
    ctx->pc = 0x1D94FCu;
    // 0x1d94fc: 0x70008e28
    ctx->pc = 0x1d94fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9500: 0x26251f8c
    ctx->pc = 0x1d9500u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8076));
label_1d9504:
    // 0x1d9504: 0xc07f208
    ctx->pc = 0x1D9504u;
    SET_GPR_U32(ctx, 31, 0x1D950Cu);
    ctx->pc = 0x1D9508u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D950Cu; }
        else if (ctx->pc != 0x1D950Cu) { ctx->pc = 0x1D950Cu; }
    }
    if (ctx->pc != 0x1D950Cu) { return; }
    ctx->pc = 0x1D950Cu;
    // 0x1d950c: 0x8e630054
    ctx->pc = 0x1d950cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9510: 0x70403628
    ctx->pc = 0x1d9510u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9514: 0x3c02003c
    ctx->pc = 0x1d9514u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d9518: 0x3445001a
    ctx->pc = 0x1d9518u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 26));
    // 0x1d951c: 0x70003e28
    ctx->pc = 0x1d951cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9520: 0xc079e80
    ctx->pc = 0x1D9520u;
    SET_GPR_U32(ctx, 31, 0x1D9528u);
    ctx->pc = 0x1D9524u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9528u; }
        else if (ctx->pc != 0x1D9528u) { ctx->pc = 0x1D9528u; }
    }
    if (ctx->pc != 0x1D9528u) { return; }
    ctx->pc = 0x1D9528u;
    // 0x1d9528: 0x8e630054
    ctx->pc = 0x1d9528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d952c: 0x3c024248
    ctx->pc = 0x1d952cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9530: 0x44826000
    ctx->pc = 0x1d9530u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9534: 0xc079eac
    ctx->pc = 0x1D9534u;
    SET_GPR_U32(ctx, 31, 0x1D953Cu);
    ctx->pc = 0x1D9538u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D953Cu; }
        else if (ctx->pc != 0x1D953Cu) { ctx->pc = 0x1D953Cu; }
    }
    if (ctx->pc != 0x1D953Cu) { return; }
    ctx->pc = 0x1D953Cu;
    // 0x1d953c: 0x26310001
    ctx->pc = 0x1d953cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d9540:
    // 0x1d9540: 0x2a03001d
    ctx->pc = 0x1d9540u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 29));
label_1d9544:
    // 0x1d9544: 0x54600017
    ctx->pc = 0x1D9544u;
    {
        const bool branch_taken_0x1d9544 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d9544) {
            ctx->pc = 0x1D9548u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1D95A4u;
            goto label_1d95a4;
        }
    }
    ctx->pc = 0x1D954Cu;
    // 0x1d954c: 0x2402001d
    ctx->pc = 0x1d954cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x1d9550: 0x16020004
    ctx->pc = 0x1D9550u;
    {
        const bool branch_taken_0x1d9550 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9554u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8079));
        if (branch_taken_0x1d9550) {
            ctx->pc = 0x1D9564u;
            goto label_1d9564;
        }
    }
    ctx->pc = 0x1D9558u;
    // 0x1d9558: 0x70008e28
    ctx->pc = 0x1d9558u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d955c: 0x0
    ctx->pc = 0x1d955cu;
    // NOP
    // 0x1d9560: 0x26251f8f
    ctx->pc = 0x1d9560u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8079));
label_1d9564:
    // 0x1d9564: 0xc07f208
    ctx->pc = 0x1D9564u;
    SET_GPR_U32(ctx, 31, 0x1D956Cu);
    ctx->pc = 0x1D9568u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D956Cu; }
        else if (ctx->pc != 0x1D956Cu) { ctx->pc = 0x1D956Cu; }
    }
    if (ctx->pc != 0x1D956Cu) { return; }
    ctx->pc = 0x1D956Cu;
    // 0x1d956c: 0x7040a628
    ctx->pc = 0x1d956cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9570: 0x26251f90
    ctx->pc = 0x1d9570u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8080));
    // 0x1d9574: 0xc07f208
    ctx->pc = 0x1D9574u;
    SET_GPR_U32(ctx, 31, 0x1D957Cu);
    ctx->pc = 0x1D9578u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D957Cu; }
        else if (ctx->pc != 0x1D957Cu) { ctx->pc = 0x1D957Cu; }
    }
    if (ctx->pc != 0x1D957Cu) { return; }
    ctx->pc = 0x1D957Cu;
    // 0x1d957c: 0x8e640054
    ctx->pc = 0x1d957cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9580: 0x3c03003c
    ctx->pc = 0x1d9580u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x1d9584: 0x72803628
    ctx->pc = 0x1d9584u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1d9588: 0x3465001b
    ctx->pc = 0x1d9588u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 27));
    // 0x1d958c: 0x70403e28
    ctx->pc = 0x1d958cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9590: 0xc079e80
    ctx->pc = 0x1D9590u;
    SET_GPR_U32(ctx, 31, 0x1D9598u);
    ctx->pc = 0x1D9594u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9598u; }
        else if (ctx->pc != 0x1D9598u) { ctx->pc = 0x1D9598u; }
    }
    if (ctx->pc != 0x1D9598u) { return; }
    ctx->pc = 0x1D9598u;
    // 0x1d9598: 0x26310001
    ctx->pc = 0x1d9598u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d959c: 0x0
    ctx->pc = 0x1d959cu;
    // NOP
    // 0x1d95a0: 0x265200f0
    ctx->pc = 0x1d95a0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1d95a4:
    // 0x1d95a4: 0x26100001
    ctx->pc = 0x1d95a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d95a8:
    // 0x1d95a8: 0x8e630000
    ctx->pc = 0x1d95a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d95ac: 0x203182a
    ctx->pc = 0x1d95acu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1d95b0: 0x1460ff98
    ctx->pc = 0x1D95B0u;
    {
        const bool branch_taken_0x1d95b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D95B4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x1d95b0) {
            ctx->pc = 0x1D9414u;
            goto label_1d9414;
        }
    }
    ctx->pc = 0x1D95B8u;
    // 0x1d95b8: 0x3c030027
    ctx->pc = 0x1d95b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1d95bc: 0x24638b08
    ctx->pc = 0x1d95bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937352));
    // 0x1d95c0: 0xc4620000
    ctx->pc = 0x1d95c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d95c4: 0xc4610004
    ctx->pc = 0x1d95c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d95c8: 0xc4600008
    ctx->pc = 0x1d95c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d95cc: 0xe6620114
    ctx->pc = 0x1d95ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1d95d0: 0xe6610118
    ctx->pc = 0x1d95d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1d95d4: 0xe660011c
    ctx->pc = 0x1d95d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1d95d8: 0x7bbf0050
    ctx->pc = 0x1d95d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d95dc: 0x7bb40040
    ctx->pc = 0x1d95dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d95e0: 0x7bb30030
    ctx->pc = 0x1d95e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d95e4: 0x7bb20020
    ctx->pc = 0x1d95e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d95e8: 0x7bb10010
    ctx->pc = 0x1d95e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d95ec: 0x7bb00000
    ctx->pc = 0x1d95ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d95f0: 0x3e00008
    ctx->pc = 0x1D95F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D95F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9414u: goto label_1d9414;
            case 0x1D9474u: goto label_1d9474;
            case 0x1D949Cu: goto label_1d949c;
            case 0x1D94D8u: goto label_1d94d8;
            case 0x1D94DCu: goto label_1d94dc;
            case 0x1D9504u: goto label_1d9504;
            case 0x1D9540u: goto label_1d9540;
            case 0x1D9544u: goto label_1d9544;
            case 0x1D9564u: goto label_1d9564;
            case 0x1D95A4u: goto label_1d95a4;
            case 0x1D95A8u: goto label_1d95a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D95F8u;
}

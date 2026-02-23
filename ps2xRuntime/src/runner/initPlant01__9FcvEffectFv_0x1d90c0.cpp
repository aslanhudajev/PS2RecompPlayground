#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initPlant01__9FcvEffectFv
// Address: 0x1d90c0 - 0x1d93c8
void initPlant01__9FcvEffectFv_0x1d90c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initPlant01__9FcvEffectFv");


    ctx->pc = 0x1d90c0u;

    // 0x1d90c0: 0x27bdffa0
    ctx->pc = 0x1d90c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d90c4: 0x7fbf0050
    ctx->pc = 0x1d90c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1d90c8: 0x7fb40040
    ctx->pc = 0x1d90c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d90cc: 0x7fb30030
    ctx->pc = 0x1d90ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d90d0: 0x7fb20020
    ctx->pc = 0x1d90d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d90d4: 0x7fb10010
    ctx->pc = 0x1d90d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d90d8: 0x70809e28
    ctx->pc = 0x1d90d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d90dc: 0x2405001c
    ctx->pc = 0x1d90dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 28));
    // 0x1d90e0: 0xc0761c4
    ctx->pc = 0x1D90E0u;
    SET_GPR_U32(ctx, 31, 0x1D90E8u);
    ctx->pc = 0x1D90E4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D90E8u; }
        else if (ctx->pc != 0x1D90E8u) { ctx->pc = 0x1D90E8u; }
    }
    if (ctx->pc != 0x1D90E8u) { return; }
    ctx->pc = 0x1D90E8u;
    // 0x1d90e8: 0xae620054
    ctx->pc = 0x1d90e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1d90ec: 0x3c0342f0
    ctx->pc = 0x1d90ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17136 << 16));
    // 0x1d90f0: 0xae630028
    ctx->pc = 0x1d90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x1d90f4: 0x70008e28
    ctx->pc = 0x1d90f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d90f8: 0x70008628
    ctx->pc = 0x1d90f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d90fc: 0x1000009e
    ctx->pc = 0x1D90FCu;
    {
        const bool branch_taken_0x1d90fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9100u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d90fc) {
            ctx->pc = 0x1D9378u;
            goto label_1d9378;
        }
    }
    ctx->pc = 0x1D9104u;
label_1d9104:
    // 0x1d9104: 0x10200017
    ctx->pc = 0x1D9104u;
    {
        const bool branch_taken_0x1d9104 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9108u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x1d9104) {
            ctx->pc = 0x1D9164u;
            goto label_1d9164;
        }
    }
    ctx->pc = 0x1D910Cu;
    // 0x1d910c: 0x26251f54
    ctx->pc = 0x1d910cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8020));
    // 0x1d9110: 0xc07f208
    ctx->pc = 0x1D9110u;
    SET_GPR_U32(ctx, 31, 0x1D9118u);
    ctx->pc = 0x1D9114u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9118u; }
        else if (ctx->pc != 0x1D9118u) { ctx->pc = 0x1D9118u; }
    }
    if (ctx->pc != 0x1D9118u) { return; }
    ctx->pc = 0x1D9118u;
    // 0x1d9118: 0x8e630054
    ctx->pc = 0x1d9118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d911c: 0x70403628
    ctx->pc = 0x1d911cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9120: 0x3c02003c
    ctx->pc = 0x1d9120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d9124: 0x34450016
    ctx->pc = 0x1d9124u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 22));
    // 0x1d9128: 0x70003e28
    ctx->pc = 0x1d9128u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d912c: 0xc079e80
    ctx->pc = 0x1D912Cu;
    SET_GPR_U32(ctx, 31, 0x1D9134u);
    ctx->pc = 0x1D9130u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9134u; }
        else if (ctx->pc != 0x1D9134u) { ctx->pc = 0x1D9134u; }
    }
    if (ctx->pc != 0x1D9134u) { return; }
    ctx->pc = 0x1D9134u;
    // 0x1d9134: 0x8e630054
    ctx->pc = 0x1d9134u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9138: 0x3c02003c
    ctx->pc = 0x1d9138u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d913c: 0x34450017
    ctx->pc = 0x1d913cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 23));
    // 0x1d9140: 0xc079e9c
    ctx->pc = 0x1D9140u;
    SET_GPR_U32(ctx, 31, 0x1D9148u);
    ctx->pc = 0x1D9144u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        addObj__7CFcvTRSFi_0x1e7a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9148u; }
        else if (ctx->pc != 0x1D9148u) { ctx->pc = 0x1D9148u; }
    }
    if (ctx->pc != 0x1D9148u) { return; }
    ctx->pc = 0x1D9148u;
    // 0x1d9148: 0x8e630054
    ctx->pc = 0x1d9148u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d914c: 0x3c024248
    ctx->pc = 0x1d914cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9150: 0x44826000
    ctx->pc = 0x1d9150u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9154: 0xc079eac
    ctx->pc = 0x1D9154u;
    SET_GPR_U32(ctx, 31, 0x1D915Cu);
    ctx->pc = 0x1D9158u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D915Cu; }
        else if (ctx->pc != 0x1D915Cu) { ctx->pc = 0x1D915Cu; }
    }
    if (ctx->pc != 0x1D915Cu) { return; }
    ctx->pc = 0x1D915Cu;
    // 0x1d915c: 0x26310001
    ctx->pc = 0x1d915cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d9160: 0x2a030005
    ctx->pc = 0x1d9160u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 5));
label_1d9164:
    // 0x1d9164: 0x14600019
    ctx->pc = 0x1D9164u;
    {
        const bool branch_taken_0x1d9164 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9168u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 15));
        if (branch_taken_0x1d9164) {
            ctx->pc = 0x1D91CCu;
            goto label_1d91cc;
        }
    }
    ctx->pc = 0x1D916Cu;
    // 0x1d916c: 0x2a01000f
    ctx->pc = 0x1d916cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 15));
    // 0x1d9170: 0x10200015
    ctx->pc = 0x1D9170u;
    {
        const bool branch_taken_0x1d9170 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9170) {
            ctx->pc = 0x1D91C8u;
            goto label_1d91c8;
        }
    }
    ctx->pc = 0x1D9178u;
    // 0x1d9178: 0x24020005
    ctx->pc = 0x1d9178u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d917c: 0x16020003
    ctx->pc = 0x1D917Cu;
    {
        const bool branch_taken_0x1d917c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9180u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8025));
        if (branch_taken_0x1d917c) {
            ctx->pc = 0x1D918Cu;
            goto label_1d918c;
        }
    }
    ctx->pc = 0x1D9184u;
    // 0x1d9184: 0x70008e28
    ctx->pc = 0x1d9184u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9188: 0x26251f59
    ctx->pc = 0x1d9188u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8025));
label_1d918c:
    // 0x1d918c: 0xc07f208
    ctx->pc = 0x1D918Cu;
    SET_GPR_U32(ctx, 31, 0x1D9194u);
    ctx->pc = 0x1D9190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9194u; }
        else if (ctx->pc != 0x1D9194u) { ctx->pc = 0x1D9194u; }
    }
    if (ctx->pc != 0x1D9194u) { return; }
    ctx->pc = 0x1D9194u;
    // 0x1d9194: 0x8e630054
    ctx->pc = 0x1d9194u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9198: 0x70403628
    ctx->pc = 0x1d9198u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d919c: 0x3c02003c
    ctx->pc = 0x1d919cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d91a0: 0x34450018
    ctx->pc = 0x1d91a0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 24));
    // 0x1d91a4: 0x70003e28
    ctx->pc = 0x1d91a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d91a8: 0xc079e80
    ctx->pc = 0x1D91A8u;
    SET_GPR_U32(ctx, 31, 0x1D91B0u);
    ctx->pc = 0x1D91ACu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91B0u; }
        else if (ctx->pc != 0x1D91B0u) { ctx->pc = 0x1D91B0u; }
    }
    if (ctx->pc != 0x1D91B0u) { return; }
    ctx->pc = 0x1D91B0u;
    // 0x1d91b0: 0x8e630054
    ctx->pc = 0x1d91b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d91b4: 0x3c024248
    ctx->pc = 0x1d91b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d91b8: 0x44826000
    ctx->pc = 0x1d91b8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d91bc: 0xc079eac
    ctx->pc = 0x1D91BCu;
    SET_GPR_U32(ctx, 31, 0x1D91C4u);
    ctx->pc = 0x1D91C0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91C4u; }
        else if (ctx->pc != 0x1D91C4u) { ctx->pc = 0x1D91C4u; }
    }
    if (ctx->pc != 0x1D91C4u) { return; }
    ctx->pc = 0x1D91C4u;
    // 0x1d91c4: 0x26310001
    ctx->pc = 0x1d91c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d91c8:
    // 0x1d91c8: 0x2a03000f
    ctx->pc = 0x1d91c8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 15));
label_1d91cc:
    // 0x1d91cc: 0x14600019
    ctx->pc = 0x1D91CCu;
    {
        const bool branch_taken_0x1d91cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D91D0u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 23));
        if (branch_taken_0x1d91cc) {
            ctx->pc = 0x1D9234u;
            goto label_1d9234;
        }
    }
    ctx->pc = 0x1D91D4u;
    // 0x1d91d4: 0x2a010017
    ctx->pc = 0x1d91d4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 23));
    // 0x1d91d8: 0x10200015
    ctx->pc = 0x1D91D8u;
    {
        const bool branch_taken_0x1d91d8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d91d8) {
            ctx->pc = 0x1D9230u;
            goto label_1d9230;
        }
    }
    ctx->pc = 0x1D91E0u;
    // 0x1d91e0: 0x2402000f
    ctx->pc = 0x1d91e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d91e4: 0x16020003
    ctx->pc = 0x1D91E4u;
    {
        const bool branch_taken_0x1d91e4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D91E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8035));
        if (branch_taken_0x1d91e4) {
            ctx->pc = 0x1D91F4u;
            goto label_1d91f4;
        }
    }
    ctx->pc = 0x1D91ECu;
    // 0x1d91ec: 0x70008e28
    ctx->pc = 0x1d91ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d91f0: 0x26251f63
    ctx->pc = 0x1d91f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8035));
label_1d91f4:
    // 0x1d91f4: 0xc07f208
    ctx->pc = 0x1D91F4u;
    SET_GPR_U32(ctx, 31, 0x1D91FCu);
    ctx->pc = 0x1D91F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91FCu; }
        else if (ctx->pc != 0x1D91FCu) { ctx->pc = 0x1D91FCu; }
    }
    if (ctx->pc != 0x1D91FCu) { return; }
    ctx->pc = 0x1D91FCu;
    // 0x1d91fc: 0x8e630054
    ctx->pc = 0x1d91fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9200: 0x70403628
    ctx->pc = 0x1d9200u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9204: 0x3c02003c
    ctx->pc = 0x1d9204u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d9208: 0x34450019
    ctx->pc = 0x1d9208u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 25));
    // 0x1d920c: 0x70003e28
    ctx->pc = 0x1d920cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9210: 0xc079e80
    ctx->pc = 0x1D9210u;
    SET_GPR_U32(ctx, 31, 0x1D9218u);
    ctx->pc = 0x1D9214u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9218u; }
        else if (ctx->pc != 0x1D9218u) { ctx->pc = 0x1D9218u; }
    }
    if (ctx->pc != 0x1D9218u) { return; }
    ctx->pc = 0x1D9218u;
    // 0x1d9218: 0x8e630054
    ctx->pc = 0x1d9218u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d921c: 0x3c024248
    ctx->pc = 0x1d921cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9220: 0x44826000
    ctx->pc = 0x1d9220u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9224: 0xc079eac
    ctx->pc = 0x1D9224u;
    SET_GPR_U32(ctx, 31, 0x1D922Cu);
    ctx->pc = 0x1D9228u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D922Cu; }
        else if (ctx->pc != 0x1D922Cu) { ctx->pc = 0x1D922Cu; }
    }
    if (ctx->pc != 0x1D922Cu) { return; }
    ctx->pc = 0x1D922Cu;
    // 0x1d922c: 0x26310001
    ctx->pc = 0x1d922cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d9230:
    // 0x1d9230: 0x2a030017
    ctx->pc = 0x1d9230u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 23));
label_1d9234:
    // 0x1d9234: 0x1460001d
    ctx->pc = 0x1D9234u;
    {
        const bool branch_taken_0x1d9234 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9238u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 25));
        if (branch_taken_0x1d9234) {
            ctx->pc = 0x1D92ACu;
            goto label_1d92ac;
        }
    }
    ctx->pc = 0x1D923Cu;
    // 0x1d923c: 0x2a010019
    ctx->pc = 0x1d923cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 25));
    // 0x1d9240: 0x10200019
    ctx->pc = 0x1D9240u;
    {
        const bool branch_taken_0x1d9240 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9240) {
            ctx->pc = 0x1D92A8u;
            goto label_1d92a8;
        }
    }
    ctx->pc = 0x1D9248u;
    // 0x1d9248: 0x24020017
    ctx->pc = 0x1d9248u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
    // 0x1d924c: 0x16020003
    ctx->pc = 0x1D924Cu;
    {
        const bool branch_taken_0x1d924c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9250u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8043));
        if (branch_taken_0x1d924c) {
            ctx->pc = 0x1D925Cu;
            goto label_1d925c;
        }
    }
    ctx->pc = 0x1D9254u;
    // 0x1d9254: 0x70008e28
    ctx->pc = 0x1d9254u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9258: 0x26251f6b
    ctx->pc = 0x1d9258u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8043));
label_1d925c:
    // 0x1d925c: 0xc07f208
    ctx->pc = 0x1D925Cu;
    SET_GPR_U32(ctx, 31, 0x1D9264u);
    ctx->pc = 0x1D9260u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9264u; }
        else if (ctx->pc != 0x1D9264u) { ctx->pc = 0x1D9264u; }
    }
    if (ctx->pc != 0x1D9264u) { return; }
    ctx->pc = 0x1D9264u;
    // 0x1d9264: 0x7040a628
    ctx->pc = 0x1d9264u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9268: 0x27848d4c
    ctx->pc = 0x1d9268u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1d926c: 0xc07f208
    ctx->pc = 0x1D926Cu;
    SET_GPR_U32(ctx, 31, 0x1D9274u);
    ctx->pc = 0x1D9270u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8045));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9274u; }
        else if (ctx->pc != 0x1D9274u) { ctx->pc = 0x1D9274u; }
    }
    if (ctx->pc != 0x1D9274u) { return; }
    ctx->pc = 0x1D9274u;
    // 0x1d9274: 0x8e630054
    ctx->pc = 0x1d9274u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9278: 0x70403e28
    ctx->pc = 0x1d9278u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d927c: 0x3c02001b
    ctx->pc = 0x1d927cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1d9280: 0x72803628
    ctx->pc = 0x1d9280u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1d9284: 0x344500b3
    ctx->pc = 0x1d9284u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 179));
    // 0x1d9288: 0xc079e80
    ctx->pc = 0x1D9288u;
    SET_GPR_U32(ctx, 31, 0x1D9290u);
    ctx->pc = 0x1D928Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9290u; }
        else if (ctx->pc != 0x1D9290u) { ctx->pc = 0x1D9290u; }
    }
    if (ctx->pc != 0x1D9290u) { return; }
    ctx->pc = 0x1D9290u;
    // 0x1d9290: 0x8e620054
    ctx->pc = 0x1d9290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9294: 0x24050001
    ctx->pc = 0x1d9294u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9298: 0xc079ee4
    ctx->pc = 0x1D9298u;
    SET_GPR_U32(ctx, 31, 0x1D92A0u);
    ctx->pc = 0x1D929Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPutCam__7CFcvTRSFi_0x1e7b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92A0u; }
        else if (ctx->pc != 0x1D92A0u) { ctx->pc = 0x1D92A0u; }
    }
    if (ctx->pc != 0x1D92A0u) { return; }
    ctx->pc = 0x1D92A0u;
    // 0x1d92a0: 0x26310001
    ctx->pc = 0x1d92a0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d92a4: 0x0
    ctx->pc = 0x1d92a4u;
    // NOP
label_1d92a8:
    // 0x1d92a8: 0x2a030019
    ctx->pc = 0x1d92a8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 25));
label_1d92ac:
    // 0x1d92ac: 0x14600019
    ctx->pc = 0x1D92ACu;
    {
        const bool branch_taken_0x1d92ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D92B0u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 28));
        if (branch_taken_0x1d92ac) {
            ctx->pc = 0x1D9314u;
            goto label_1d9314;
        }
    }
    ctx->pc = 0x1D92B4u;
    // 0x1d92b4: 0x2a01001c
    ctx->pc = 0x1d92b4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 28));
    // 0x1d92b8: 0x10200015
    ctx->pc = 0x1D92B8u;
    {
        const bool branch_taken_0x1d92b8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d92b8) {
            ctx->pc = 0x1D9310u;
            goto label_1d9310;
        }
    }
    ctx->pc = 0x1D92C0u;
    // 0x1d92c0: 0x24020019
    ctx->pc = 0x1d92c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d92c4: 0x16020003
    ctx->pc = 0x1D92C4u;
    {
        const bool branch_taken_0x1d92c4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D92C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8046));
        if (branch_taken_0x1d92c4) {
            ctx->pc = 0x1D92D4u;
            goto label_1d92d4;
        }
    }
    ctx->pc = 0x1D92CCu;
    // 0x1d92cc: 0x70008e28
    ctx->pc = 0x1d92ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d92d0: 0x26251f6e
    ctx->pc = 0x1d92d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8046));
label_1d92d4:
    // 0x1d92d4: 0xc07f208
    ctx->pc = 0x1D92D4u;
    SET_GPR_U32(ctx, 31, 0x1D92DCu);
    ctx->pc = 0x1D92D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92DCu; }
        else if (ctx->pc != 0x1D92DCu) { ctx->pc = 0x1D92DCu; }
    }
    if (ctx->pc != 0x1D92DCu) { return; }
    ctx->pc = 0x1D92DCu;
    // 0x1d92dc: 0x8e630054
    ctx->pc = 0x1d92dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d92e0: 0x70403628
    ctx->pc = 0x1d92e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d92e4: 0x3c02003c
    ctx->pc = 0x1d92e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d92e8: 0x3445001a
    ctx->pc = 0x1d92e8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 26));
    // 0x1d92ec: 0x70003e28
    ctx->pc = 0x1d92ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d92f0: 0xc079e80
    ctx->pc = 0x1D92F0u;
    SET_GPR_U32(ctx, 31, 0x1D92F8u);
    ctx->pc = 0x1D92F4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92F8u; }
        else if (ctx->pc != 0x1D92F8u) { ctx->pc = 0x1D92F8u; }
    }
    if (ctx->pc != 0x1D92F8u) { return; }
    ctx->pc = 0x1D92F8u;
    // 0x1d92f8: 0x8e630054
    ctx->pc = 0x1d92f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d92fc: 0x3c024248
    ctx->pc = 0x1d92fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9300: 0x44826000
    ctx->pc = 0x1d9300u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9304: 0xc079eac
    ctx->pc = 0x1D9304u;
    SET_GPR_U32(ctx, 31, 0x1D930Cu);
    ctx->pc = 0x1D9308u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D930Cu; }
        else if (ctx->pc != 0x1D930Cu) { ctx->pc = 0x1D930Cu; }
    }
    if (ctx->pc != 0x1D930Cu) { return; }
    ctx->pc = 0x1D930Cu;
    // 0x1d930c: 0x26310001
    ctx->pc = 0x1d930cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d9310:
    // 0x1d9310: 0x2a03001c
    ctx->pc = 0x1d9310u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 28));
label_1d9314:
    // 0x1d9314: 0x54600017
    ctx->pc = 0x1D9314u;
    {
        const bool branch_taken_0x1d9314 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d9314) {
            ctx->pc = 0x1D9318u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1D9374u;
            goto label_1d9374;
        }
    }
    ctx->pc = 0x1D931Cu;
    // 0x1d931c: 0x2402001c
    ctx->pc = 0x1d931cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x1d9320: 0x16020004
    ctx->pc = 0x1D9320u;
    {
        const bool branch_taken_0x1d9320 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9324u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8049));
        if (branch_taken_0x1d9320) {
            ctx->pc = 0x1D9334u;
            goto label_1d9334;
        }
    }
    ctx->pc = 0x1D9328u;
    // 0x1d9328: 0x70008e28
    ctx->pc = 0x1d9328u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d932c: 0x0
    ctx->pc = 0x1d932cu;
    // NOP
    // 0x1d9330: 0x26251f71
    ctx->pc = 0x1d9330u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8049));
label_1d9334:
    // 0x1d9334: 0xc07f208
    ctx->pc = 0x1D9334u;
    SET_GPR_U32(ctx, 31, 0x1D933Cu);
    ctx->pc = 0x1D9338u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D933Cu; }
        else if (ctx->pc != 0x1D933Cu) { ctx->pc = 0x1D933Cu; }
    }
    if (ctx->pc != 0x1D933Cu) { return; }
    ctx->pc = 0x1D933Cu;
    // 0x1d933c: 0x8e630054
    ctx->pc = 0x1d933cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9340: 0x70403628
    ctx->pc = 0x1d9340u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9344: 0x3c02003c
    ctx->pc = 0x1d9344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x1d9348: 0x3445001b
    ctx->pc = 0x1d9348u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 27));
    // 0x1d934c: 0x70003e28
    ctx->pc = 0x1d934cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9350: 0xc079e80
    ctx->pc = 0x1D9350u;
    SET_GPR_U32(ctx, 31, 0x1D9358u);
    ctx->pc = 0x1D9354u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9358u; }
        else if (ctx->pc != 0x1D9358u) { ctx->pc = 0x1D9358u; }
    }
    if (ctx->pc != 0x1D9358u) { return; }
    ctx->pc = 0x1D9358u;
    // 0x1d9358: 0x8e630054
    ctx->pc = 0x1d9358u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d935c: 0x3c024248
    ctx->pc = 0x1d935cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9360: 0x44826000
    ctx->pc = 0x1d9360u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9364: 0xc079eac
    ctx->pc = 0x1D9364u;
    SET_GPR_U32(ctx, 31, 0x1D936Cu);
    ctx->pc = 0x1D9368u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D936Cu; }
        else if (ctx->pc != 0x1D936Cu) { ctx->pc = 0x1D936Cu; }
    }
    if (ctx->pc != 0x1D936Cu) { return; }
    ctx->pc = 0x1D936Cu;
    // 0x1d936c: 0x26310001
    ctx->pc = 0x1d936cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d9370: 0x265200f0
    ctx->pc = 0x1d9370u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1d9374:
    // 0x1d9374: 0x26100001
    ctx->pc = 0x1d9374u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d9378:
    // 0x1d9378: 0x8e630000
    ctx->pc = 0x1d9378u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d937c: 0x203182a
    ctx->pc = 0x1d937cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1d9380: 0x1460ff60
    ctx->pc = 0x1D9380u;
    {
        const bool branch_taken_0x1d9380 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9384u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x1d9380) {
            ctx->pc = 0x1D9104u;
            goto label_1d9104;
        }
    }
    ctx->pc = 0x1D9388u;
    // 0x1d9388: 0x3c030027
    ctx->pc = 0x1d9388u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1d938c: 0x24638af8
    ctx->pc = 0x1d938cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937336));
    // 0x1d9390: 0xc4620000
    ctx->pc = 0x1d9390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9394: 0xc4610004
    ctx->pc = 0x1d9394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9398: 0xc4600008
    ctx->pc = 0x1d9398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d939c: 0xe6620114
    ctx->pc = 0x1d939cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1d93a0: 0xe6610118
    ctx->pc = 0x1d93a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1d93a4: 0xe660011c
    ctx->pc = 0x1d93a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1d93a8: 0x7bbf0050
    ctx->pc = 0x1d93a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d93ac: 0x7bb40040
    ctx->pc = 0x1d93acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d93b0: 0x7bb30030
    ctx->pc = 0x1d93b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d93b4: 0x7bb20020
    ctx->pc = 0x1d93b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d93b8: 0x7bb10010
    ctx->pc = 0x1d93b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d93bc: 0x7bb00000
    ctx->pc = 0x1d93bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d93c0: 0x3e00008
    ctx->pc = 0x1D93C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D93C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9104u: goto label_1d9104;
            case 0x1D9164u: goto label_1d9164;
            case 0x1D918Cu: goto label_1d918c;
            case 0x1D91C8u: goto label_1d91c8;
            case 0x1D91CCu: goto label_1d91cc;
            case 0x1D91F4u: goto label_1d91f4;
            case 0x1D9230u: goto label_1d9230;
            case 0x1D9234u: goto label_1d9234;
            case 0x1D925Cu: goto label_1d925c;
            case 0x1D92A8u: goto label_1d92a8;
            case 0x1D92ACu: goto label_1d92ac;
            case 0x1D92D4u: goto label_1d92d4;
            case 0x1D9310u: goto label_1d9310;
            case 0x1D9314u: goto label_1d9314;
            case 0x1D9334u: goto label_1d9334;
            case 0x1D9374u: goto label_1d9374;
            case 0x1D9378u: goto label_1d9378;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D93C8u;
}

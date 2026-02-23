#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initSt4Plant02__9FcvEffectFv
// Address: 0x1d9fa0 - 0x1da1c8
void initSt4Plant02__9FcvEffectFv_0x1d9fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initSt4Plant02__9FcvEffectFv");


    ctx->pc = 0x1d9fa0u;

    // 0x1d9fa0: 0x27bdffa0
    ctx->pc = 0x1d9fa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d9fa4: 0x7fbf0050
    ctx->pc = 0x1d9fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1d9fa8: 0x7fb40040
    ctx->pc = 0x1d9fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d9fac: 0x7fb30030
    ctx->pc = 0x1d9facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d9fb0: 0x7fb20020
    ctx->pc = 0x1d9fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d9fb4: 0x7fb10010
    ctx->pc = 0x1d9fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9fb8: 0x70809e28
    ctx->pc = 0x1d9fb8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d9fbc: 0x2405001e
    ctx->pc = 0x1d9fbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d9fc0: 0xc0761c4
    ctx->pc = 0x1D9FC0u;
    SET_GPR_U32(ctx, 31, 0x1D9FC8u);
    ctx->pc = 0x1D9FC4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FC8u; }
        else if (ctx->pc != 0x1D9FC8u) { ctx->pc = 0x1D9FC8u; }
    }
    if (ctx->pc != 0x1D9FC8u) { return; }
    ctx->pc = 0x1D9FC8u;
    // 0x1d9fc8: 0xae620054
    ctx->pc = 0x1d9fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1d9fcc: 0x3c0342f0
    ctx->pc = 0x1d9fccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17136 << 16));
    // 0x1d9fd0: 0xae630028
    ctx->pc = 0x1d9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x1d9fd4: 0x70008e28
    ctx->pc = 0x1d9fd4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9fd8: 0x70008628
    ctx->pc = 0x1d9fd8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9fdc: 0x10000066
    ctx->pc = 0x1D9FDCu;
    {
        const bool branch_taken_0x1d9fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9FE0u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d9fdc) {
            ctx->pc = 0x1DA178u;
            goto label_1da178;
        }
    }
    ctx->pc = 0x1D9FE4u;
label_1d9fe4:
    // 0x1d9fe4: 0x10200017
    ctx->pc = 0x1D9FE4u;
    {
        const bool branch_taken_0x1d9fe4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9FE8u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x1d9fe4) {
            ctx->pc = 0x1DA044u;
            goto label_1da044;
        }
    }
    ctx->pc = 0x1D9FECu;
    // 0x1d9fec: 0x2625207c
    ctx->pc = 0x1d9fecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8316));
    // 0x1d9ff0: 0xc07f208
    ctx->pc = 0x1D9FF0u;
    SET_GPR_U32(ctx, 31, 0x1D9FF8u);
    ctx->pc = 0x1D9FF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FF8u; }
        else if (ctx->pc != 0x1D9FF8u) { ctx->pc = 0x1D9FF8u; }
    }
    if (ctx->pc != 0x1D9FF8u) { return; }
    ctx->pc = 0x1D9FF8u;
    // 0x1d9ff8: 0x8e630054
    ctx->pc = 0x1d9ff8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9ffc: 0x70403628
    ctx->pc = 0x1d9ffcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da000: 0x3c020047
    ctx->pc = 0x1da000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x1da004: 0x3445013e
    ctx->pc = 0x1da004u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 318));
    // 0x1da008: 0x70003e28
    ctx->pc = 0x1da008u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da00c: 0xc079e80
    ctx->pc = 0x1DA00Cu;
    SET_GPR_U32(ctx, 31, 0x1DA014u);
    ctx->pc = 0x1DA010u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA014u; }
        else if (ctx->pc != 0x1DA014u) { ctx->pc = 0x1DA014u; }
    }
    if (ctx->pc != 0x1DA014u) { return; }
    ctx->pc = 0x1DA014u;
    // 0x1da014: 0x8e630054
    ctx->pc = 0x1da014u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da018: 0x3c020047
    ctx->pc = 0x1da018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x1da01c: 0x3445013f
    ctx->pc = 0x1da01cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 319));
    // 0x1da020: 0xc079e9c
    ctx->pc = 0x1DA020u;
    SET_GPR_U32(ctx, 31, 0x1DA028u);
    ctx->pc = 0x1DA024u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        addObj__7CFcvTRSFi_0x1e7a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA028u; }
        else if (ctx->pc != 0x1DA028u) { ctx->pc = 0x1DA028u; }
    }
    if (ctx->pc != 0x1DA028u) { return; }
    ctx->pc = 0x1DA028u;
    // 0x1da028: 0x8e630054
    ctx->pc = 0x1da028u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da02c: 0x3c024248
    ctx->pc = 0x1da02cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1da030: 0x44826000
    ctx->pc = 0x1da030u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1da034: 0xc079eac
    ctx->pc = 0x1DA034u;
    SET_GPR_U32(ctx, 31, 0x1DA03Cu);
    ctx->pc = 0x1DA038u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA03Cu; }
        else if (ctx->pc != 0x1DA03Cu) { ctx->pc = 0x1DA03Cu; }
    }
    if (ctx->pc != 0x1DA03Cu) { return; }
    ctx->pc = 0x1DA03Cu;
    // 0x1da03c: 0x26310001
    ctx->pc = 0x1da03cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1da040: 0x2a030005
    ctx->pc = 0x1da040u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 5));
label_1da044:
    // 0x1da044: 0x14600019
    ctx->pc = 0x1DA044u;
    {
        const bool branch_taken_0x1da044 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA048u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 26));
        if (branch_taken_0x1da044) {
            ctx->pc = 0x1DA0ACu;
            goto label_1da0ac;
        }
    }
    ctx->pc = 0x1DA04Cu;
    // 0x1da04c: 0x2a01001a
    ctx->pc = 0x1da04cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 26));
    // 0x1da050: 0x10200015
    ctx->pc = 0x1DA050u;
    {
        const bool branch_taken_0x1da050 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1da050) {
            ctx->pc = 0x1DA0A8u;
            goto label_1da0a8;
        }
    }
    ctx->pc = 0x1DA058u;
    // 0x1da058: 0x24020005
    ctx->pc = 0x1da058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1da05c: 0x16020003
    ctx->pc = 0x1DA05Cu;
    {
        const bool branch_taken_0x1da05c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1DA060u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8321));
        if (branch_taken_0x1da05c) {
            ctx->pc = 0x1DA06Cu;
            goto label_1da06c;
        }
    }
    ctx->pc = 0x1DA064u;
    // 0x1da064: 0x70008e28
    ctx->pc = 0x1da064u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da068: 0x26252081
    ctx->pc = 0x1da068u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8321));
label_1da06c:
    // 0x1da06c: 0xc07f208
    ctx->pc = 0x1DA06Cu;
    SET_GPR_U32(ctx, 31, 0x1DA074u);
    ctx->pc = 0x1DA070u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA074u; }
        else if (ctx->pc != 0x1DA074u) { ctx->pc = 0x1DA074u; }
    }
    if (ctx->pc != 0x1DA074u) { return; }
    ctx->pc = 0x1DA074u;
    // 0x1da074: 0x8e630054
    ctx->pc = 0x1da074u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da078: 0x70403628
    ctx->pc = 0x1da078u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da07c: 0x3c020047
    ctx->pc = 0x1da07cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x1da080: 0x34450141
    ctx->pc = 0x1da080u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 321));
    // 0x1da084: 0x70003e28
    ctx->pc = 0x1da084u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da088: 0xc079e80
    ctx->pc = 0x1DA088u;
    SET_GPR_U32(ctx, 31, 0x1DA090u);
    ctx->pc = 0x1DA08Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA090u; }
        else if (ctx->pc != 0x1DA090u) { ctx->pc = 0x1DA090u; }
    }
    if (ctx->pc != 0x1DA090u) { return; }
    ctx->pc = 0x1DA090u;
    // 0x1da090: 0x8e630054
    ctx->pc = 0x1da090u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da094: 0x3c024248
    ctx->pc = 0x1da094u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1da098: 0x44826000
    ctx->pc = 0x1da098u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1da09c: 0xc079eac
    ctx->pc = 0x1DA09Cu;
    SET_GPR_U32(ctx, 31, 0x1DA0A4u);
    ctx->pc = 0x1DA0A0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0A4u; }
        else if (ctx->pc != 0x1DA0A4u) { ctx->pc = 0x1DA0A4u; }
    }
    if (ctx->pc != 0x1DA0A4u) { return; }
    ctx->pc = 0x1DA0A4u;
    // 0x1da0a4: 0x26310001
    ctx->pc = 0x1da0a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1da0a8:
    // 0x1da0a8: 0x2a03001a
    ctx->pc = 0x1da0a8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 26));
label_1da0ac:
    // 0x1da0ac: 0x14600019
    ctx->pc = 0x1DA0ACu;
    {
        const bool branch_taken_0x1da0ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA0B0u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 29));
        if (branch_taken_0x1da0ac) {
            ctx->pc = 0x1DA114u;
            goto label_1da114;
        }
    }
    ctx->pc = 0x1DA0B4u;
    // 0x1da0b4: 0x2a01001d
    ctx->pc = 0x1da0b4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 29));
    // 0x1da0b8: 0x10200015
    ctx->pc = 0x1DA0B8u;
    {
        const bool branch_taken_0x1da0b8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1da0b8) {
            ctx->pc = 0x1DA110u;
            goto label_1da110;
        }
    }
    ctx->pc = 0x1DA0C0u;
    // 0x1da0c0: 0x2402001a
    ctx->pc = 0x1da0c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26));
    // 0x1da0c4: 0x16020003
    ctx->pc = 0x1DA0C4u;
    {
        const bool branch_taken_0x1da0c4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1DA0C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8342));
        if (branch_taken_0x1da0c4) {
            ctx->pc = 0x1DA0D4u;
            goto label_1da0d4;
        }
    }
    ctx->pc = 0x1DA0CCu;
    // 0x1da0cc: 0x70008e28
    ctx->pc = 0x1da0ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da0d0: 0x26252096
    ctx->pc = 0x1da0d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8342));
label_1da0d4:
    // 0x1da0d4: 0xc07f208
    ctx->pc = 0x1DA0D4u;
    SET_GPR_U32(ctx, 31, 0x1DA0DCu);
    ctx->pc = 0x1DA0D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0DCu; }
        else if (ctx->pc != 0x1DA0DCu) { ctx->pc = 0x1DA0DCu; }
    }
    if (ctx->pc != 0x1DA0DCu) { return; }
    ctx->pc = 0x1DA0DCu;
    // 0x1da0dc: 0x8e630054
    ctx->pc = 0x1da0dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da0e0: 0x70403628
    ctx->pc = 0x1da0e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da0e4: 0x3c020047
    ctx->pc = 0x1da0e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x1da0e8: 0x34450142
    ctx->pc = 0x1da0e8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 322));
    // 0x1da0ec: 0x70003e28
    ctx->pc = 0x1da0ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da0f0: 0xc079e80
    ctx->pc = 0x1DA0F0u;
    SET_GPR_U32(ctx, 31, 0x1DA0F8u);
    ctx->pc = 0x1DA0F4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0F8u; }
        else if (ctx->pc != 0x1DA0F8u) { ctx->pc = 0x1DA0F8u; }
    }
    if (ctx->pc != 0x1DA0F8u) { return; }
    ctx->pc = 0x1DA0F8u;
    // 0x1da0f8: 0x8e630054
    ctx->pc = 0x1da0f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da0fc: 0x3c024248
    ctx->pc = 0x1da0fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1da100: 0x44826000
    ctx->pc = 0x1da100u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1da104: 0xc079eac
    ctx->pc = 0x1DA104u;
    SET_GPR_U32(ctx, 31, 0x1DA10Cu);
    ctx->pc = 0x1DA108u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA10Cu; }
        else if (ctx->pc != 0x1DA10Cu) { ctx->pc = 0x1DA10Cu; }
    }
    if (ctx->pc != 0x1DA10Cu) { return; }
    ctx->pc = 0x1DA10Cu;
    // 0x1da10c: 0x26310001
    ctx->pc = 0x1da10cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1da110:
    // 0x1da110: 0x2a03001d
    ctx->pc = 0x1da110u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 29));
label_1da114:
    // 0x1da114: 0x54600017
    ctx->pc = 0x1DA114u;
    {
        const bool branch_taken_0x1da114 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1da114) {
            ctx->pc = 0x1DA118u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1DA174u;
            goto label_1da174;
        }
    }
    ctx->pc = 0x1DA11Cu;
    // 0x1da11c: 0x2402001d
    ctx->pc = 0x1da11cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x1da120: 0x16020004
    ctx->pc = 0x1DA120u;
    {
        const bool branch_taken_0x1da120 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1DA124u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8345));
        if (branch_taken_0x1da120) {
            ctx->pc = 0x1DA134u;
            goto label_1da134;
        }
    }
    ctx->pc = 0x1DA128u;
    // 0x1da128: 0x70008e28
    ctx->pc = 0x1da128u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da12c: 0x0
    ctx->pc = 0x1da12cu;
    // NOP
    // 0x1da130: 0x26252099
    ctx->pc = 0x1da130u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8345));
label_1da134:
    // 0x1da134: 0xc07f208
    ctx->pc = 0x1DA134u;
    SET_GPR_U32(ctx, 31, 0x1DA13Cu);
    ctx->pc = 0x1DA138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA13Cu; }
        else if (ctx->pc != 0x1DA13Cu) { ctx->pc = 0x1DA13Cu; }
    }
    if (ctx->pc != 0x1DA13Cu) { return; }
    ctx->pc = 0x1DA13Cu;
    // 0x1da13c: 0x7040a628
    ctx->pc = 0x1da13cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da140: 0x2625209a
    ctx->pc = 0x1da140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8346));
    // 0x1da144: 0xc07f208
    ctx->pc = 0x1DA144u;
    SET_GPR_U32(ctx, 31, 0x1DA14Cu);
    ctx->pc = 0x1DA148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA14Cu; }
        else if (ctx->pc != 0x1DA14Cu) { ctx->pc = 0x1DA14Cu; }
    }
    if (ctx->pc != 0x1DA14Cu) { return; }
    ctx->pc = 0x1DA14Cu;
    // 0x1da14c: 0x8e640054
    ctx->pc = 0x1da14cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da150: 0x3c030047
    ctx->pc = 0x1da150u;
    SET_GPR_U32(ctx, 3, ((uint32_t)71 << 16));
    // 0x1da154: 0x72803628
    ctx->pc = 0x1da154u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1da158: 0x34650143
    ctx->pc = 0x1da158u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 323));
    // 0x1da15c: 0x70403e28
    ctx->pc = 0x1da15cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da160: 0xc079e80
    ctx->pc = 0x1DA160u;
    SET_GPR_U32(ctx, 31, 0x1DA168u);
    ctx->pc = 0x1DA164u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA168u; }
        else if (ctx->pc != 0x1DA168u) { ctx->pc = 0x1DA168u; }
    }
    if (ctx->pc != 0x1DA168u) { return; }
    ctx->pc = 0x1DA168u;
    // 0x1da168: 0x26310001
    ctx->pc = 0x1da168u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1da16c: 0x0
    ctx->pc = 0x1da16cu;
    // NOP
    // 0x1da170: 0x265200f0
    ctx->pc = 0x1da170u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1da174:
    // 0x1da174: 0x26100001
    ctx->pc = 0x1da174u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1da178:
    // 0x1da178: 0x8e630000
    ctx->pc = 0x1da178u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1da17c: 0x203182a
    ctx->pc = 0x1da17cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1da180: 0x1460ff98
    ctx->pc = 0x1DA180u;
    {
        const bool branch_taken_0x1da180 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA184u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x1da180) {
            ctx->pc = 0x1D9FE4u;
            goto label_1d9fe4;
        }
    }
    ctx->pc = 0x1DA188u;
    // 0x1da188: 0x3c030027
    ctx->pc = 0x1da188u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1da18c: 0x24638b48
    ctx->pc = 0x1da18cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937416));
    // 0x1da190: 0xc4620000
    ctx->pc = 0x1da190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da194: 0xc4610004
    ctx->pc = 0x1da194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da198: 0xc4600008
    ctx->pc = 0x1da198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da19c: 0xe6620114
    ctx->pc = 0x1da19cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1da1a0: 0xe6610118
    ctx->pc = 0x1da1a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1da1a4: 0xe660011c
    ctx->pc = 0x1da1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1da1a8: 0x7bbf0050
    ctx->pc = 0x1da1a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1da1ac: 0x7bb40040
    ctx->pc = 0x1da1acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da1b0: 0x7bb30030
    ctx->pc = 0x1da1b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da1b4: 0x7bb20020
    ctx->pc = 0x1da1b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da1b8: 0x7bb10010
    ctx->pc = 0x1da1b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da1bc: 0x7bb00000
    ctx->pc = 0x1da1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da1c0: 0x3e00008
    ctx->pc = 0x1DA1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA1C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9FE4u: goto label_1d9fe4;
            case 0x1DA044u: goto label_1da044;
            case 0x1DA06Cu: goto label_1da06c;
            case 0x1DA0A8u: goto label_1da0a8;
            case 0x1DA0ACu: goto label_1da0ac;
            case 0x1DA0D4u: goto label_1da0d4;
            case 0x1DA110u: goto label_1da110;
            case 0x1DA114u: goto label_1da114;
            case 0x1DA134u: goto label_1da134;
            case 0x1DA174u: goto label_1da174;
            case 0x1DA178u: goto label_1da178;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA1C8u;
}

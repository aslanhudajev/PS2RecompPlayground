#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initSt3Plant01__9FcvEffectFv
// Address: 0x1d9980 - 0x1d9c88
void initSt3Plant01__9FcvEffectFv_0x1d9980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initSt3Plant01__9FcvEffectFv");


    ctx->pc = 0x1d9980u;

    // 0x1d9980: 0x27bdffa0
    ctx->pc = 0x1d9980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d9984: 0x7fbf0050
    ctx->pc = 0x1d9984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1d9988: 0x7fb40040
    ctx->pc = 0x1d9988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d998c: 0x7fb30030
    ctx->pc = 0x1d998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d9990: 0x7fb20020
    ctx->pc = 0x1d9990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d9994: 0x7fb10010
    ctx->pc = 0x1d9994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9998: 0x70809e28
    ctx->pc = 0x1d9998u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d999c: 0x2405001c
    ctx->pc = 0x1d999cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 28));
    // 0x1d99a0: 0xc0761c4
    ctx->pc = 0x1D99A0u;
    SET_GPR_U32(ctx, 31, 0x1D99A8u);
    ctx->pc = 0x1D99A4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99A8u; }
        else if (ctx->pc != 0x1D99A8u) { ctx->pc = 0x1D99A8u; }
    }
    if (ctx->pc != 0x1D99A8u) { return; }
    ctx->pc = 0x1D99A8u;
    // 0x1d99a8: 0xae620054
    ctx->pc = 0x1d99a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1d99ac: 0x3c0342f0
    ctx->pc = 0x1d99acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17136 << 16));
    // 0x1d99b0: 0xae630028
    ctx->pc = 0x1d99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x1d99b4: 0x70008e28
    ctx->pc = 0x1d99b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d99b8: 0x70008628
    ctx->pc = 0x1d99b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d99bc: 0x1000009e
    ctx->pc = 0x1D99BCu;
    {
        const bool branch_taken_0x1d99bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D99C0u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d99bc) {
            ctx->pc = 0x1D9C38u;
            goto label_1d9c38;
        }
    }
    ctx->pc = 0x1D99C4u;
label_1d99c4:
    // 0x1d99c4: 0x10200017
    ctx->pc = 0x1D99C4u;
    {
        const bool branch_taken_0x1d99c4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D99C8u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x1d99c4) {
            ctx->pc = 0x1D9A24u;
            goto label_1d9a24;
        }
    }
    ctx->pc = 0x1D99CCu;
    // 0x1d99cc: 0x2625200c
    ctx->pc = 0x1d99ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8204));
    // 0x1d99d0: 0xc07f208
    ctx->pc = 0x1D99D0u;
    SET_GPR_U32(ctx, 31, 0x1D99D8u);
    ctx->pc = 0x1D99D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99D8u; }
        else if (ctx->pc != 0x1D99D8u) { ctx->pc = 0x1D99D8u; }
    }
    if (ctx->pc != 0x1D99D8u) { return; }
    ctx->pc = 0x1D99D8u;
    // 0x1d99d8: 0x8e630054
    ctx->pc = 0x1d99d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d99dc: 0x70403628
    ctx->pc = 0x1d99dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d99e0: 0x3c020040
    ctx->pc = 0x1d99e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x1d99e4: 0x34450034
    ctx->pc = 0x1d99e4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 52));
    // 0x1d99e8: 0x70003e28
    ctx->pc = 0x1d99e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d99ec: 0xc079e80
    ctx->pc = 0x1D99ECu;
    SET_GPR_U32(ctx, 31, 0x1D99F4u);
    ctx->pc = 0x1D99F0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99F4u; }
        else if (ctx->pc != 0x1D99F4u) { ctx->pc = 0x1D99F4u; }
    }
    if (ctx->pc != 0x1D99F4u) { return; }
    ctx->pc = 0x1D99F4u;
    // 0x1d99f4: 0x8e630054
    ctx->pc = 0x1d99f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d99f8: 0x3c020040
    ctx->pc = 0x1d99f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x1d99fc: 0x34450035
    ctx->pc = 0x1d99fcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 53));
    // 0x1d9a00: 0xc079e9c
    ctx->pc = 0x1D9A00u;
    SET_GPR_U32(ctx, 31, 0x1D9A08u);
    ctx->pc = 0x1D9A04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        addObj__7CFcvTRSFi_0x1e7a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A08u; }
        else if (ctx->pc != 0x1D9A08u) { ctx->pc = 0x1D9A08u; }
    }
    if (ctx->pc != 0x1D9A08u) { return; }
    ctx->pc = 0x1D9A08u;
    // 0x1d9a08: 0x8e630054
    ctx->pc = 0x1d9a08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9a0c: 0x3c024248
    ctx->pc = 0x1d9a0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9a10: 0x44826000
    ctx->pc = 0x1d9a10u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9a14: 0xc079eac
    ctx->pc = 0x1D9A14u;
    SET_GPR_U32(ctx, 31, 0x1D9A1Cu);
    ctx->pc = 0x1D9A18u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A1Cu; }
        else if (ctx->pc != 0x1D9A1Cu) { ctx->pc = 0x1D9A1Cu; }
    }
    if (ctx->pc != 0x1D9A1Cu) { return; }
    ctx->pc = 0x1D9A1Cu;
    // 0x1d9a1c: 0x26310001
    ctx->pc = 0x1d9a1cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d9a20: 0x2a030005
    ctx->pc = 0x1d9a20u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 5));
label_1d9a24:
    // 0x1d9a24: 0x14600019
    ctx->pc = 0x1D9A24u;
    {
        const bool branch_taken_0x1d9a24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9A28u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 15));
        if (branch_taken_0x1d9a24) {
            ctx->pc = 0x1D9A8Cu;
            goto label_1d9a8c;
        }
    }
    ctx->pc = 0x1D9A2Cu;
    // 0x1d9a2c: 0x2a01000f
    ctx->pc = 0x1d9a2cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 15));
    // 0x1d9a30: 0x10200015
    ctx->pc = 0x1D9A30u;
    {
        const bool branch_taken_0x1d9a30 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9a30) {
            ctx->pc = 0x1D9A88u;
            goto label_1d9a88;
        }
    }
    ctx->pc = 0x1D9A38u;
    // 0x1d9a38: 0x24020005
    ctx->pc = 0x1d9a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d9a3c: 0x16020003
    ctx->pc = 0x1D9A3Cu;
    {
        const bool branch_taken_0x1d9a3c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9A40u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8209));
        if (branch_taken_0x1d9a3c) {
            ctx->pc = 0x1D9A4Cu;
            goto label_1d9a4c;
        }
    }
    ctx->pc = 0x1D9A44u;
    // 0x1d9a44: 0x70008e28
    ctx->pc = 0x1d9a44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9a48: 0x26252011
    ctx->pc = 0x1d9a48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8209));
label_1d9a4c:
    // 0x1d9a4c: 0xc07f208
    ctx->pc = 0x1D9A4Cu;
    SET_GPR_U32(ctx, 31, 0x1D9A54u);
    ctx->pc = 0x1D9A50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A54u; }
        else if (ctx->pc != 0x1D9A54u) { ctx->pc = 0x1D9A54u; }
    }
    if (ctx->pc != 0x1D9A54u) { return; }
    ctx->pc = 0x1D9A54u;
    // 0x1d9a54: 0x8e630054
    ctx->pc = 0x1d9a54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9a58: 0x70403628
    ctx->pc = 0x1d9a58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9a5c: 0x3c020040
    ctx->pc = 0x1d9a5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x1d9a60: 0x34450036
    ctx->pc = 0x1d9a60u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 54));
    // 0x1d9a64: 0x70003e28
    ctx->pc = 0x1d9a64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9a68: 0xc079e80
    ctx->pc = 0x1D9A68u;
    SET_GPR_U32(ctx, 31, 0x1D9A70u);
    ctx->pc = 0x1D9A6Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A70u; }
        else if (ctx->pc != 0x1D9A70u) { ctx->pc = 0x1D9A70u; }
    }
    if (ctx->pc != 0x1D9A70u) { return; }
    ctx->pc = 0x1D9A70u;
    // 0x1d9a70: 0x8e630054
    ctx->pc = 0x1d9a70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9a74: 0x3c024248
    ctx->pc = 0x1d9a74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9a78: 0x44826000
    ctx->pc = 0x1d9a78u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9a7c: 0xc079eac
    ctx->pc = 0x1D9A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D9A84u);
    ctx->pc = 0x1D9A80u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A84u; }
        else if (ctx->pc != 0x1D9A84u) { ctx->pc = 0x1D9A84u; }
    }
    if (ctx->pc != 0x1D9A84u) { return; }
    ctx->pc = 0x1D9A84u;
    // 0x1d9a84: 0x26310001
    ctx->pc = 0x1d9a84u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d9a88:
    // 0x1d9a88: 0x2a03000f
    ctx->pc = 0x1d9a88u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 15));
label_1d9a8c:
    // 0x1d9a8c: 0x14600019
    ctx->pc = 0x1D9A8Cu;
    {
        const bool branch_taken_0x1d9a8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9A90u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 23));
        if (branch_taken_0x1d9a8c) {
            ctx->pc = 0x1D9AF4u;
            goto label_1d9af4;
        }
    }
    ctx->pc = 0x1D9A94u;
    // 0x1d9a94: 0x2a010017
    ctx->pc = 0x1d9a94u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 23));
    // 0x1d9a98: 0x10200015
    ctx->pc = 0x1D9A98u;
    {
        const bool branch_taken_0x1d9a98 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9a98) {
            ctx->pc = 0x1D9AF0u;
            goto label_1d9af0;
        }
    }
    ctx->pc = 0x1D9AA0u;
    // 0x1d9aa0: 0x2402000f
    ctx->pc = 0x1d9aa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d9aa4: 0x16020003
    ctx->pc = 0x1D9AA4u;
    {
        const bool branch_taken_0x1d9aa4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9AA8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8219));
        if (branch_taken_0x1d9aa4) {
            ctx->pc = 0x1D9AB4u;
            goto label_1d9ab4;
        }
    }
    ctx->pc = 0x1D9AACu;
    // 0x1d9aac: 0x70008e28
    ctx->pc = 0x1d9aacu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9ab0: 0x2625201b
    ctx->pc = 0x1d9ab0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8219));
label_1d9ab4:
    // 0x1d9ab4: 0xc07f208
    ctx->pc = 0x1D9AB4u;
    SET_GPR_U32(ctx, 31, 0x1D9ABCu);
    ctx->pc = 0x1D9AB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9ABCu; }
        else if (ctx->pc != 0x1D9ABCu) { ctx->pc = 0x1D9ABCu; }
    }
    if (ctx->pc != 0x1D9ABCu) { return; }
    ctx->pc = 0x1D9ABCu;
    // 0x1d9abc: 0x8e630054
    ctx->pc = 0x1d9abcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9ac0: 0x70403628
    ctx->pc = 0x1d9ac0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9ac4: 0x3c020040
    ctx->pc = 0x1d9ac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x1d9ac8: 0x34450037
    ctx->pc = 0x1d9ac8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 55));
    // 0x1d9acc: 0x70003e28
    ctx->pc = 0x1d9accu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9ad0: 0xc079e80
    ctx->pc = 0x1D9AD0u;
    SET_GPR_U32(ctx, 31, 0x1D9AD8u);
    ctx->pc = 0x1D9AD4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9AD8u; }
        else if (ctx->pc != 0x1D9AD8u) { ctx->pc = 0x1D9AD8u; }
    }
    if (ctx->pc != 0x1D9AD8u) { return; }
    ctx->pc = 0x1D9AD8u;
    // 0x1d9ad8: 0x8e630054
    ctx->pc = 0x1d9ad8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9adc: 0x3c024248
    ctx->pc = 0x1d9adcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9ae0: 0x44826000
    ctx->pc = 0x1d9ae0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9ae4: 0xc079eac
    ctx->pc = 0x1D9AE4u;
    SET_GPR_U32(ctx, 31, 0x1D9AECu);
    ctx->pc = 0x1D9AE8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9AECu; }
        else if (ctx->pc != 0x1D9AECu) { ctx->pc = 0x1D9AECu; }
    }
    if (ctx->pc != 0x1D9AECu) { return; }
    ctx->pc = 0x1D9AECu;
    // 0x1d9aec: 0x26310001
    ctx->pc = 0x1d9aecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d9af0:
    // 0x1d9af0: 0x2a030017
    ctx->pc = 0x1d9af0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 23));
label_1d9af4:
    // 0x1d9af4: 0x1460001d
    ctx->pc = 0x1D9AF4u;
    {
        const bool branch_taken_0x1d9af4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9AF8u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 25));
        if (branch_taken_0x1d9af4) {
            ctx->pc = 0x1D9B6Cu;
            goto label_1d9b6c;
        }
    }
    ctx->pc = 0x1D9AFCu;
    // 0x1d9afc: 0x2a010019
    ctx->pc = 0x1d9afcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 25));
    // 0x1d9b00: 0x10200019
    ctx->pc = 0x1D9B00u;
    {
        const bool branch_taken_0x1d9b00 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9b00) {
            ctx->pc = 0x1D9B68u;
            goto label_1d9b68;
        }
    }
    ctx->pc = 0x1D9B08u;
    // 0x1d9b08: 0x24020017
    ctx->pc = 0x1d9b08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
    // 0x1d9b0c: 0x16020003
    ctx->pc = 0x1D9B0Cu;
    {
        const bool branch_taken_0x1d9b0c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9B10u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8227));
        if (branch_taken_0x1d9b0c) {
            ctx->pc = 0x1D9B1Cu;
            goto label_1d9b1c;
        }
    }
    ctx->pc = 0x1D9B14u;
    // 0x1d9b14: 0x70008e28
    ctx->pc = 0x1d9b14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9b18: 0x26252023
    ctx->pc = 0x1d9b18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8227));
label_1d9b1c:
    // 0x1d9b1c: 0xc07f208
    ctx->pc = 0x1D9B1Cu;
    SET_GPR_U32(ctx, 31, 0x1D9B24u);
    ctx->pc = 0x1D9B20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B24u; }
        else if (ctx->pc != 0x1D9B24u) { ctx->pc = 0x1D9B24u; }
    }
    if (ctx->pc != 0x1D9B24u) { return; }
    ctx->pc = 0x1D9B24u;
    // 0x1d9b24: 0x7040a628
    ctx->pc = 0x1d9b24u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9b28: 0x27848d4c
    ctx->pc = 0x1d9b28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1d9b2c: 0xc07f208
    ctx->pc = 0x1D9B2Cu;
    SET_GPR_U32(ctx, 31, 0x1D9B34u);
    ctx->pc = 0x1D9B30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8229));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B34u; }
        else if (ctx->pc != 0x1D9B34u) { ctx->pc = 0x1D9B34u; }
    }
    if (ctx->pc != 0x1D9B34u) { return; }
    ctx->pc = 0x1D9B34u;
    // 0x1d9b34: 0x8e630054
    ctx->pc = 0x1d9b34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9b38: 0x70403e28
    ctx->pc = 0x1d9b38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9b3c: 0x3c02001b
    ctx->pc = 0x1d9b3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1d9b40: 0x72803628
    ctx->pc = 0x1d9b40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1d9b44: 0x344500b3
    ctx->pc = 0x1d9b44u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 179));
    // 0x1d9b48: 0xc079e80
    ctx->pc = 0x1D9B48u;
    SET_GPR_U32(ctx, 31, 0x1D9B50u);
    ctx->pc = 0x1D9B4Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B50u; }
        else if (ctx->pc != 0x1D9B50u) { ctx->pc = 0x1D9B50u; }
    }
    if (ctx->pc != 0x1D9B50u) { return; }
    ctx->pc = 0x1D9B50u;
    // 0x1d9b50: 0x8e620054
    ctx->pc = 0x1d9b50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9b54: 0x24050001
    ctx->pc = 0x1d9b54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9b58: 0xc079ee4
    ctx->pc = 0x1D9B58u;
    SET_GPR_U32(ctx, 31, 0x1D9B60u);
    ctx->pc = 0x1D9B5Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPutCam__7CFcvTRSFi_0x1e7b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B60u; }
        else if (ctx->pc != 0x1D9B60u) { ctx->pc = 0x1D9B60u; }
    }
    if (ctx->pc != 0x1D9B60u) { return; }
    ctx->pc = 0x1D9B60u;
    // 0x1d9b60: 0x26310001
    ctx->pc = 0x1d9b60u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d9b64: 0x0
    ctx->pc = 0x1d9b64u;
    // NOP
label_1d9b68:
    // 0x1d9b68: 0x2a030019
    ctx->pc = 0x1d9b68u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 25));
label_1d9b6c:
    // 0x1d9b6c: 0x14600019
    ctx->pc = 0x1D9B6Cu;
    {
        const bool branch_taken_0x1d9b6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9B70u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 28));
        if (branch_taken_0x1d9b6c) {
            ctx->pc = 0x1D9BD4u;
            goto label_1d9bd4;
        }
    }
    ctx->pc = 0x1D9B74u;
    // 0x1d9b74: 0x2a01001c
    ctx->pc = 0x1d9b74u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 28));
    // 0x1d9b78: 0x10200015
    ctx->pc = 0x1D9B78u;
    {
        const bool branch_taken_0x1d9b78 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9b78) {
            ctx->pc = 0x1D9BD0u;
            goto label_1d9bd0;
        }
    }
    ctx->pc = 0x1D9B80u;
    // 0x1d9b80: 0x24020019
    ctx->pc = 0x1d9b80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d9b84: 0x16020003
    ctx->pc = 0x1D9B84u;
    {
        const bool branch_taken_0x1d9b84 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9B88u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8230));
        if (branch_taken_0x1d9b84) {
            ctx->pc = 0x1D9B94u;
            goto label_1d9b94;
        }
    }
    ctx->pc = 0x1D9B8Cu;
    // 0x1d9b8c: 0x70008e28
    ctx->pc = 0x1d9b8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9b90: 0x26252026
    ctx->pc = 0x1d9b90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8230));
label_1d9b94:
    // 0x1d9b94: 0xc07f208
    ctx->pc = 0x1D9B94u;
    SET_GPR_U32(ctx, 31, 0x1D9B9Cu);
    ctx->pc = 0x1D9B98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B9Cu; }
        else if (ctx->pc != 0x1D9B9Cu) { ctx->pc = 0x1D9B9Cu; }
    }
    if (ctx->pc != 0x1D9B9Cu) { return; }
    ctx->pc = 0x1D9B9Cu;
    // 0x1d9b9c: 0x8e630054
    ctx->pc = 0x1d9b9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9ba0: 0x70403628
    ctx->pc = 0x1d9ba0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9ba4: 0x3c020040
    ctx->pc = 0x1d9ba4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x1d9ba8: 0x34450038
    ctx->pc = 0x1d9ba8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 56));
    // 0x1d9bac: 0x70003e28
    ctx->pc = 0x1d9bacu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9bb0: 0xc079e80
    ctx->pc = 0x1D9BB0u;
    SET_GPR_U32(ctx, 31, 0x1D9BB8u);
    ctx->pc = 0x1D9BB4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BB8u; }
        else if (ctx->pc != 0x1D9BB8u) { ctx->pc = 0x1D9BB8u; }
    }
    if (ctx->pc != 0x1D9BB8u) { return; }
    ctx->pc = 0x1D9BB8u;
    // 0x1d9bb8: 0x8e630054
    ctx->pc = 0x1d9bb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9bbc: 0x3c024248
    ctx->pc = 0x1d9bbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9bc0: 0x44826000
    ctx->pc = 0x1d9bc0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9bc4: 0xc079eac
    ctx->pc = 0x1D9BC4u;
    SET_GPR_U32(ctx, 31, 0x1D9BCCu);
    ctx->pc = 0x1D9BC8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BCCu; }
        else if (ctx->pc != 0x1D9BCCu) { ctx->pc = 0x1D9BCCu; }
    }
    if (ctx->pc != 0x1D9BCCu) { return; }
    ctx->pc = 0x1D9BCCu;
    // 0x1d9bcc: 0x26310001
    ctx->pc = 0x1d9bccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d9bd0:
    // 0x1d9bd0: 0x2a03001c
    ctx->pc = 0x1d9bd0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 28));
label_1d9bd4:
    // 0x1d9bd4: 0x54600017
    ctx->pc = 0x1D9BD4u;
    {
        const bool branch_taken_0x1d9bd4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d9bd4) {
            ctx->pc = 0x1D9BD8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1D9C34u;
            goto label_1d9c34;
        }
    }
    ctx->pc = 0x1D9BDCu;
    // 0x1d9bdc: 0x2402001c
    ctx->pc = 0x1d9bdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x1d9be0: 0x16020004
    ctx->pc = 0x1D9BE0u;
    {
        const bool branch_taken_0x1d9be0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9BE4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8233));
        if (branch_taken_0x1d9be0) {
            ctx->pc = 0x1D9BF4u;
            goto label_1d9bf4;
        }
    }
    ctx->pc = 0x1D9BE8u;
    // 0x1d9be8: 0x70008e28
    ctx->pc = 0x1d9be8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9bec: 0x0
    ctx->pc = 0x1d9becu;
    // NOP
    // 0x1d9bf0: 0x26252029
    ctx->pc = 0x1d9bf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8233));
label_1d9bf4:
    // 0x1d9bf4: 0xc07f208
    ctx->pc = 0x1D9BF4u;
    SET_GPR_U32(ctx, 31, 0x1D9BFCu);
    ctx->pc = 0x1D9BF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BFCu; }
        else if (ctx->pc != 0x1D9BFCu) { ctx->pc = 0x1D9BFCu; }
    }
    if (ctx->pc != 0x1D9BFCu) { return; }
    ctx->pc = 0x1D9BFCu;
    // 0x1d9bfc: 0x8e630054
    ctx->pc = 0x1d9bfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9c00: 0x70403628
    ctx->pc = 0x1d9c00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9c04: 0x3c020040
    ctx->pc = 0x1d9c04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x1d9c08: 0x34450039
    ctx->pc = 0x1d9c08u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 57));
    // 0x1d9c0c: 0x70003e28
    ctx->pc = 0x1d9c0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9c10: 0xc079e80
    ctx->pc = 0x1D9C10u;
    SET_GPR_U32(ctx, 31, 0x1D9C18u);
    ctx->pc = 0x1D9C14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C18u; }
        else if (ctx->pc != 0x1D9C18u) { ctx->pc = 0x1D9C18u; }
    }
    if (ctx->pc != 0x1D9C18u) { return; }
    ctx->pc = 0x1D9C18u;
    // 0x1d9c18: 0x8e630054
    ctx->pc = 0x1d9c18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9c1c: 0x3c024248
    ctx->pc = 0x1d9c1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9c20: 0x44826000
    ctx->pc = 0x1d9c20u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9c24: 0xc079eac
    ctx->pc = 0x1D9C24u;
    SET_GPR_U32(ctx, 31, 0x1D9C2Cu);
    ctx->pc = 0x1D9C28u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C2Cu; }
        else if (ctx->pc != 0x1D9C2Cu) { ctx->pc = 0x1D9C2Cu; }
    }
    if (ctx->pc != 0x1D9C2Cu) { return; }
    ctx->pc = 0x1D9C2Cu;
    // 0x1d9c2c: 0x26310001
    ctx->pc = 0x1d9c2cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d9c30: 0x265200f0
    ctx->pc = 0x1d9c30u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1d9c34:
    // 0x1d9c34: 0x26100001
    ctx->pc = 0x1d9c34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d9c38:
    // 0x1d9c38: 0x8e630000
    ctx->pc = 0x1d9c38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d9c3c: 0x203182a
    ctx->pc = 0x1d9c3cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1d9c40: 0x1460ff60
    ctx->pc = 0x1D9C40u;
    {
        const bool branch_taken_0x1d9c40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9C44u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x1d9c40) {
            ctx->pc = 0x1D99C4u;
            goto label_1d99c4;
        }
    }
    ctx->pc = 0x1D9C48u;
    // 0x1d9c48: 0x3c030027
    ctx->pc = 0x1d9c48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1d9c4c: 0x24638b28
    ctx->pc = 0x1d9c4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937384));
    // 0x1d9c50: 0xc4620000
    ctx->pc = 0x1d9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9c54: 0xc4610004
    ctx->pc = 0x1d9c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9c58: 0xc4600008
    ctx->pc = 0x1d9c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9c5c: 0xe6620114
    ctx->pc = 0x1d9c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1d9c60: 0xe6610118
    ctx->pc = 0x1d9c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1d9c64: 0xe660011c
    ctx->pc = 0x1d9c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1d9c68: 0x7bbf0050
    ctx->pc = 0x1d9c68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9c6c: 0x7bb40040
    ctx->pc = 0x1d9c6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9c70: 0x7bb30030
    ctx->pc = 0x1d9c70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9c74: 0x7bb20020
    ctx->pc = 0x1d9c74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9c78: 0x7bb10010
    ctx->pc = 0x1d9c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9c7c: 0x7bb00000
    ctx->pc = 0x1d9c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9c80: 0x3e00008
    ctx->pc = 0x1D9C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9C84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D99C4u: goto label_1d99c4;
            case 0x1D9A24u: goto label_1d9a24;
            case 0x1D9A4Cu: goto label_1d9a4c;
            case 0x1D9A88u: goto label_1d9a88;
            case 0x1D9A8Cu: goto label_1d9a8c;
            case 0x1D9AB4u: goto label_1d9ab4;
            case 0x1D9AF0u: goto label_1d9af0;
            case 0x1D9AF4u: goto label_1d9af4;
            case 0x1D9B1Cu: goto label_1d9b1c;
            case 0x1D9B68u: goto label_1d9b68;
            case 0x1D9B6Cu: goto label_1d9b6c;
            case 0x1D9B94u: goto label_1d9b94;
            case 0x1D9BD0u: goto label_1d9bd0;
            case 0x1D9BD4u: goto label_1d9bd4;
            case 0x1D9BF4u: goto label_1d9bf4;
            case 0x1D9C34u: goto label_1d9c34;
            case 0x1D9C38u: goto label_1d9c38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D9C88u;
}

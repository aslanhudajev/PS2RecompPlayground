#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initSt4Plant01__9FcvEffectFv
// Address: 0x1d9c90 - 0x1d9f98
void initSt4Plant01__9FcvEffectFv_0x1d9c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initSt4Plant01__9FcvEffectFv");


    ctx->pc = 0x1d9c90u;

    // 0x1d9c90: 0x27bdffa0
    ctx->pc = 0x1d9c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d9c94: 0x7fbf0050
    ctx->pc = 0x1d9c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1d9c98: 0x7fb40040
    ctx->pc = 0x1d9c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d9c9c: 0x7fb30030
    ctx->pc = 0x1d9c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d9ca0: 0x7fb20020
    ctx->pc = 0x1d9ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d9ca4: 0x7fb10010
    ctx->pc = 0x1d9ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9ca8: 0x70809e28
    ctx->pc = 0x1d9ca8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d9cac: 0x2405001c
    ctx->pc = 0x1d9cacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 28));
    // 0x1d9cb0: 0xc0761c4
    ctx->pc = 0x1D9CB0u;
    SET_GPR_U32(ctx, 31, 0x1D9CB8u);
    ctx->pc = 0x1D9CB4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CB8u; }
        else if (ctx->pc != 0x1D9CB8u) { ctx->pc = 0x1D9CB8u; }
    }
    if (ctx->pc != 0x1D9CB8u) { return; }
    ctx->pc = 0x1D9CB8u;
    // 0x1d9cb8: 0xae620054
    ctx->pc = 0x1d9cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1d9cbc: 0x3c0342f0
    ctx->pc = 0x1d9cbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17136 << 16));
    // 0x1d9cc0: 0xae630028
    ctx->pc = 0x1d9cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x1d9cc4: 0x70008e28
    ctx->pc = 0x1d9cc4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9cc8: 0x70008628
    ctx->pc = 0x1d9cc8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9ccc: 0x1000009e
    ctx->pc = 0x1D9CCCu;
    {
        const bool branch_taken_0x1d9ccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9CD0u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d9ccc) {
            ctx->pc = 0x1D9F48u;
            goto label_1d9f48;
        }
    }
    ctx->pc = 0x1D9CD4u;
label_1d9cd4:
    // 0x1d9cd4: 0x10200017
    ctx->pc = 0x1D9CD4u;
    {
        const bool branch_taken_0x1d9cd4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9CD8u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x1d9cd4) {
            ctx->pc = 0x1D9D34u;
            goto label_1d9d34;
        }
    }
    ctx->pc = 0x1D9CDCu;
    // 0x1d9cdc: 0x2625205e
    ctx->pc = 0x1d9cdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8286));
    // 0x1d9ce0: 0xc07f208
    ctx->pc = 0x1D9CE0u;
    SET_GPR_U32(ctx, 31, 0x1D9CE8u);
    ctx->pc = 0x1D9CE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CE8u; }
        else if (ctx->pc != 0x1D9CE8u) { ctx->pc = 0x1D9CE8u; }
    }
    if (ctx->pc != 0x1D9CE8u) { return; }
    ctx->pc = 0x1D9CE8u;
    // 0x1d9ce8: 0x8e630054
    ctx->pc = 0x1d9ce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9cec: 0x70403628
    ctx->pc = 0x1d9cecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9cf0: 0x3c020047
    ctx->pc = 0x1d9cf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x1d9cf4: 0x3445013e
    ctx->pc = 0x1d9cf4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 318));
    // 0x1d9cf8: 0x70003e28
    ctx->pc = 0x1d9cf8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9cfc: 0xc079e80
    ctx->pc = 0x1D9CFCu;
    SET_GPR_U32(ctx, 31, 0x1D9D04u);
    ctx->pc = 0x1D9D00u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D04u; }
        else if (ctx->pc != 0x1D9D04u) { ctx->pc = 0x1D9D04u; }
    }
    if (ctx->pc != 0x1D9D04u) { return; }
    ctx->pc = 0x1D9D04u;
    // 0x1d9d04: 0x8e630054
    ctx->pc = 0x1d9d04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9d08: 0x3c020047
    ctx->pc = 0x1d9d08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x1d9d0c: 0x3445013f
    ctx->pc = 0x1d9d0cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 319));
    // 0x1d9d10: 0xc079e9c
    ctx->pc = 0x1D9D10u;
    SET_GPR_U32(ctx, 31, 0x1D9D18u);
    ctx->pc = 0x1D9D14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        addObj__7CFcvTRSFi_0x1e7a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D18u; }
        else if (ctx->pc != 0x1D9D18u) { ctx->pc = 0x1D9D18u; }
    }
    if (ctx->pc != 0x1D9D18u) { return; }
    ctx->pc = 0x1D9D18u;
    // 0x1d9d18: 0x8e630054
    ctx->pc = 0x1d9d18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9d1c: 0x3c024248
    ctx->pc = 0x1d9d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9d20: 0x44826000
    ctx->pc = 0x1d9d20u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9d24: 0xc079eac
    ctx->pc = 0x1D9D24u;
    SET_GPR_U32(ctx, 31, 0x1D9D2Cu);
    ctx->pc = 0x1D9D28u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D2Cu; }
        else if (ctx->pc != 0x1D9D2Cu) { ctx->pc = 0x1D9D2Cu; }
    }
    if (ctx->pc != 0x1D9D2Cu) { return; }
    ctx->pc = 0x1D9D2Cu;
    // 0x1d9d2c: 0x26310001
    ctx->pc = 0x1d9d2cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d9d30: 0x2a030005
    ctx->pc = 0x1d9d30u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 5));
label_1d9d34:
    // 0x1d9d34: 0x14600019
    ctx->pc = 0x1D9D34u;
    {
        const bool branch_taken_0x1d9d34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9D38u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 15));
        if (branch_taken_0x1d9d34) {
            ctx->pc = 0x1D9D9Cu;
            goto label_1d9d9c;
        }
    }
    ctx->pc = 0x1D9D3Cu;
    // 0x1d9d3c: 0x2a01000f
    ctx->pc = 0x1d9d3cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 15));
    // 0x1d9d40: 0x10200015
    ctx->pc = 0x1D9D40u;
    {
        const bool branch_taken_0x1d9d40 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9d40) {
            ctx->pc = 0x1D9D98u;
            goto label_1d9d98;
        }
    }
    ctx->pc = 0x1D9D48u;
    // 0x1d9d48: 0x24020005
    ctx->pc = 0x1d9d48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d9d4c: 0x16020003
    ctx->pc = 0x1D9D4Cu;
    {
        const bool branch_taken_0x1d9d4c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9D50u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8291));
        if (branch_taken_0x1d9d4c) {
            ctx->pc = 0x1D9D5Cu;
            goto label_1d9d5c;
        }
    }
    ctx->pc = 0x1D9D54u;
    // 0x1d9d54: 0x70008e28
    ctx->pc = 0x1d9d54u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9d58: 0x26252063
    ctx->pc = 0x1d9d58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8291));
label_1d9d5c:
    // 0x1d9d5c: 0xc07f208
    ctx->pc = 0x1D9D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D64u);
    ctx->pc = 0x1D9D60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D64u; }
        else if (ctx->pc != 0x1D9D64u) { ctx->pc = 0x1D9D64u; }
    }
    if (ctx->pc != 0x1D9D64u) { return; }
    ctx->pc = 0x1D9D64u;
    // 0x1d9d64: 0x8e630054
    ctx->pc = 0x1d9d64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9d68: 0x70403628
    ctx->pc = 0x1d9d68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9d6c: 0x3c020047
    ctx->pc = 0x1d9d6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x1d9d70: 0x34450140
    ctx->pc = 0x1d9d70u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 320));
    // 0x1d9d74: 0x70003e28
    ctx->pc = 0x1d9d74u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9d78: 0xc079e80
    ctx->pc = 0x1D9D78u;
    SET_GPR_U32(ctx, 31, 0x1D9D80u);
    ctx->pc = 0x1D9D7Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D80u; }
        else if (ctx->pc != 0x1D9D80u) { ctx->pc = 0x1D9D80u; }
    }
    if (ctx->pc != 0x1D9D80u) { return; }
    ctx->pc = 0x1D9D80u;
    // 0x1d9d80: 0x8e630054
    ctx->pc = 0x1d9d80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9d84: 0x3c024248
    ctx->pc = 0x1d9d84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9d88: 0x44826000
    ctx->pc = 0x1d9d88u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9d8c: 0xc079eac
    ctx->pc = 0x1D9D8Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D94u);
    ctx->pc = 0x1D9D90u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D94u; }
        else if (ctx->pc != 0x1D9D94u) { ctx->pc = 0x1D9D94u; }
    }
    if (ctx->pc != 0x1D9D94u) { return; }
    ctx->pc = 0x1D9D94u;
    // 0x1d9d94: 0x26310001
    ctx->pc = 0x1d9d94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d9d98:
    // 0x1d9d98: 0x2a03000f
    ctx->pc = 0x1d9d98u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 15));
label_1d9d9c:
    // 0x1d9d9c: 0x14600019
    ctx->pc = 0x1D9D9Cu;
    {
        const bool branch_taken_0x1d9d9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9DA0u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 23));
        if (branch_taken_0x1d9d9c) {
            ctx->pc = 0x1D9E04u;
            goto label_1d9e04;
        }
    }
    ctx->pc = 0x1D9DA4u;
    // 0x1d9da4: 0x2a010017
    ctx->pc = 0x1d9da4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 23));
    // 0x1d9da8: 0x10200015
    ctx->pc = 0x1D9DA8u;
    {
        const bool branch_taken_0x1d9da8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9da8) {
            ctx->pc = 0x1D9E00u;
            goto label_1d9e00;
        }
    }
    ctx->pc = 0x1D9DB0u;
    // 0x1d9db0: 0x2402000f
    ctx->pc = 0x1d9db0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d9db4: 0x16020003
    ctx->pc = 0x1D9DB4u;
    {
        const bool branch_taken_0x1d9db4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9DB8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8301));
        if (branch_taken_0x1d9db4) {
            ctx->pc = 0x1D9DC4u;
            goto label_1d9dc4;
        }
    }
    ctx->pc = 0x1D9DBCu;
    // 0x1d9dbc: 0x70008e28
    ctx->pc = 0x1d9dbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9dc0: 0x2625206d
    ctx->pc = 0x1d9dc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8301));
label_1d9dc4:
    // 0x1d9dc4: 0xc07f208
    ctx->pc = 0x1D9DC4u;
    SET_GPR_U32(ctx, 31, 0x1D9DCCu);
    ctx->pc = 0x1D9DC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9DCCu; }
        else if (ctx->pc != 0x1D9DCCu) { ctx->pc = 0x1D9DCCu; }
    }
    if (ctx->pc != 0x1D9DCCu) { return; }
    ctx->pc = 0x1D9DCCu;
    // 0x1d9dcc: 0x8e630054
    ctx->pc = 0x1d9dccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9dd0: 0x70403628
    ctx->pc = 0x1d9dd0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9dd4: 0x3c020047
    ctx->pc = 0x1d9dd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x1d9dd8: 0x34450141
    ctx->pc = 0x1d9dd8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 321));
    // 0x1d9ddc: 0x70003e28
    ctx->pc = 0x1d9ddcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9de0: 0xc079e80
    ctx->pc = 0x1D9DE0u;
    SET_GPR_U32(ctx, 31, 0x1D9DE8u);
    ctx->pc = 0x1D9DE4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9DE8u; }
        else if (ctx->pc != 0x1D9DE8u) { ctx->pc = 0x1D9DE8u; }
    }
    if (ctx->pc != 0x1D9DE8u) { return; }
    ctx->pc = 0x1D9DE8u;
    // 0x1d9de8: 0x8e630054
    ctx->pc = 0x1d9de8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9dec: 0x3c024248
    ctx->pc = 0x1d9decu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9df0: 0x44826000
    ctx->pc = 0x1d9df0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9df4: 0xc079eac
    ctx->pc = 0x1D9DF4u;
    SET_GPR_U32(ctx, 31, 0x1D9DFCu);
    ctx->pc = 0x1D9DF8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9DFCu; }
        else if (ctx->pc != 0x1D9DFCu) { ctx->pc = 0x1D9DFCu; }
    }
    if (ctx->pc != 0x1D9DFCu) { return; }
    ctx->pc = 0x1D9DFCu;
    // 0x1d9dfc: 0x26310001
    ctx->pc = 0x1d9dfcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d9e00:
    // 0x1d9e00: 0x2a030017
    ctx->pc = 0x1d9e00u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 23));
label_1d9e04:
    // 0x1d9e04: 0x1460001d
    ctx->pc = 0x1D9E04u;
    {
        const bool branch_taken_0x1d9e04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9E08u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 25));
        if (branch_taken_0x1d9e04) {
            ctx->pc = 0x1D9E7Cu;
            goto label_1d9e7c;
        }
    }
    ctx->pc = 0x1D9E0Cu;
    // 0x1d9e0c: 0x2a010019
    ctx->pc = 0x1d9e0cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 25));
    // 0x1d9e10: 0x10200019
    ctx->pc = 0x1D9E10u;
    {
        const bool branch_taken_0x1d9e10 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9e10) {
            ctx->pc = 0x1D9E78u;
            goto label_1d9e78;
        }
    }
    ctx->pc = 0x1D9E18u;
    // 0x1d9e18: 0x24020017
    ctx->pc = 0x1d9e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
    // 0x1d9e1c: 0x16020003
    ctx->pc = 0x1D9E1Cu;
    {
        const bool branch_taken_0x1d9e1c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9E20u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8309));
        if (branch_taken_0x1d9e1c) {
            ctx->pc = 0x1D9E2Cu;
            goto label_1d9e2c;
        }
    }
    ctx->pc = 0x1D9E24u;
    // 0x1d9e24: 0x70008e28
    ctx->pc = 0x1d9e24u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9e28: 0x26252075
    ctx->pc = 0x1d9e28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8309));
label_1d9e2c:
    // 0x1d9e2c: 0xc07f208
    ctx->pc = 0x1D9E2Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E34u);
    ctx->pc = 0x1D9E30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E34u; }
        else if (ctx->pc != 0x1D9E34u) { ctx->pc = 0x1D9E34u; }
    }
    if (ctx->pc != 0x1D9E34u) { return; }
    ctx->pc = 0x1D9E34u;
    // 0x1d9e34: 0x7040a628
    ctx->pc = 0x1d9e34u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9e38: 0x27848d4c
    ctx->pc = 0x1d9e38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1d9e3c: 0xc07f208
    ctx->pc = 0x1D9E3Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E44u);
    ctx->pc = 0x1D9E40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8311));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E44u; }
        else if (ctx->pc != 0x1D9E44u) { ctx->pc = 0x1D9E44u; }
    }
    if (ctx->pc != 0x1D9E44u) { return; }
    ctx->pc = 0x1D9E44u;
    // 0x1d9e44: 0x8e630054
    ctx->pc = 0x1d9e44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9e48: 0x70403e28
    ctx->pc = 0x1d9e48u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9e4c: 0x3c02001b
    ctx->pc = 0x1d9e4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1d9e50: 0x72803628
    ctx->pc = 0x1d9e50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1d9e54: 0x344500b3
    ctx->pc = 0x1d9e54u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 179));
    // 0x1d9e58: 0xc079e80
    ctx->pc = 0x1D9E58u;
    SET_GPR_U32(ctx, 31, 0x1D9E60u);
    ctx->pc = 0x1D9E5Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E60u; }
        else if (ctx->pc != 0x1D9E60u) { ctx->pc = 0x1D9E60u; }
    }
    if (ctx->pc != 0x1D9E60u) { return; }
    ctx->pc = 0x1D9E60u;
    // 0x1d9e60: 0x8e620054
    ctx->pc = 0x1d9e60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9e64: 0x24050001
    ctx->pc = 0x1d9e64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e68: 0xc079ee4
    ctx->pc = 0x1D9E68u;
    SET_GPR_U32(ctx, 31, 0x1D9E70u);
    ctx->pc = 0x1D9E6Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPutCam__7CFcvTRSFi_0x1e7b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E70u; }
        else if (ctx->pc != 0x1D9E70u) { ctx->pc = 0x1D9E70u; }
    }
    if (ctx->pc != 0x1D9E70u) { return; }
    ctx->pc = 0x1D9E70u;
    // 0x1d9e70: 0x26310001
    ctx->pc = 0x1d9e70u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d9e74: 0x0
    ctx->pc = 0x1d9e74u;
    // NOP
label_1d9e78:
    // 0x1d9e78: 0x2a030019
    ctx->pc = 0x1d9e78u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 25));
label_1d9e7c:
    // 0x1d9e7c: 0x14600019
    ctx->pc = 0x1D9E7Cu;
    {
        const bool branch_taken_0x1d9e7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9E80u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 28));
        if (branch_taken_0x1d9e7c) {
            ctx->pc = 0x1D9EE4u;
            goto label_1d9ee4;
        }
    }
    ctx->pc = 0x1D9E84u;
    // 0x1d9e84: 0x2a01001c
    ctx->pc = 0x1d9e84u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 28));
    // 0x1d9e88: 0x10200015
    ctx->pc = 0x1D9E88u;
    {
        const bool branch_taken_0x1d9e88 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9e88) {
            ctx->pc = 0x1D9EE0u;
            goto label_1d9ee0;
        }
    }
    ctx->pc = 0x1D9E90u;
    // 0x1d9e90: 0x24020019
    ctx->pc = 0x1d9e90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d9e94: 0x16020003
    ctx->pc = 0x1D9E94u;
    {
        const bool branch_taken_0x1d9e94 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9E98u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8312));
        if (branch_taken_0x1d9e94) {
            ctx->pc = 0x1D9EA4u;
            goto label_1d9ea4;
        }
    }
    ctx->pc = 0x1D9E9Cu;
    // 0x1d9e9c: 0x70008e28
    ctx->pc = 0x1d9e9cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9ea0: 0x26252078
    ctx->pc = 0x1d9ea0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8312));
label_1d9ea4:
    // 0x1d9ea4: 0xc07f208
    ctx->pc = 0x1D9EA4u;
    SET_GPR_U32(ctx, 31, 0x1D9EACu);
    ctx->pc = 0x1D9EA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EACu; }
        else if (ctx->pc != 0x1D9EACu) { ctx->pc = 0x1D9EACu; }
    }
    if (ctx->pc != 0x1D9EACu) { return; }
    ctx->pc = 0x1D9EACu;
    // 0x1d9eac: 0x8e630054
    ctx->pc = 0x1d9eacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9eb0: 0x70403628
    ctx->pc = 0x1d9eb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9eb4: 0x3c020047
    ctx->pc = 0x1d9eb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x1d9eb8: 0x34450142
    ctx->pc = 0x1d9eb8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 322));
    // 0x1d9ebc: 0x70003e28
    ctx->pc = 0x1d9ebcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9ec0: 0xc079e80
    ctx->pc = 0x1D9EC0u;
    SET_GPR_U32(ctx, 31, 0x1D9EC8u);
    ctx->pc = 0x1D9EC4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EC8u; }
        else if (ctx->pc != 0x1D9EC8u) { ctx->pc = 0x1D9EC8u; }
    }
    if (ctx->pc != 0x1D9EC8u) { return; }
    ctx->pc = 0x1D9EC8u;
    // 0x1d9ec8: 0x8e630054
    ctx->pc = 0x1d9ec8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9ecc: 0x3c024248
    ctx->pc = 0x1d9eccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9ed0: 0x44826000
    ctx->pc = 0x1d9ed0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9ed4: 0xc079eac
    ctx->pc = 0x1D9ED4u;
    SET_GPR_U32(ctx, 31, 0x1D9EDCu);
    ctx->pc = 0x1D9ED8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EDCu; }
        else if (ctx->pc != 0x1D9EDCu) { ctx->pc = 0x1D9EDCu; }
    }
    if (ctx->pc != 0x1D9EDCu) { return; }
    ctx->pc = 0x1D9EDCu;
    // 0x1d9edc: 0x26310001
    ctx->pc = 0x1d9edcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d9ee0:
    // 0x1d9ee0: 0x2a03001c
    ctx->pc = 0x1d9ee0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 28));
label_1d9ee4:
    // 0x1d9ee4: 0x54600017
    ctx->pc = 0x1D9EE4u;
    {
        const bool branch_taken_0x1d9ee4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d9ee4) {
            ctx->pc = 0x1D9EE8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1D9F44u;
            goto label_1d9f44;
        }
    }
    ctx->pc = 0x1D9EECu;
    // 0x1d9eec: 0x2402001c
    ctx->pc = 0x1d9eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x1d9ef0: 0x16020004
    ctx->pc = 0x1D9EF0u;
    {
        const bool branch_taken_0x1d9ef0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9EF4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8315));
        if (branch_taken_0x1d9ef0) {
            ctx->pc = 0x1D9F04u;
            goto label_1d9f04;
        }
    }
    ctx->pc = 0x1D9EF8u;
    // 0x1d9ef8: 0x70008e28
    ctx->pc = 0x1d9ef8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9efc: 0x0
    ctx->pc = 0x1d9efcu;
    // NOP
    // 0x1d9f00: 0x2625207b
    ctx->pc = 0x1d9f00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8315));
label_1d9f04:
    // 0x1d9f04: 0xc07f208
    ctx->pc = 0x1D9F04u;
    SET_GPR_U32(ctx, 31, 0x1D9F0Cu);
    ctx->pc = 0x1D9F08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F0Cu; }
        else if (ctx->pc != 0x1D9F0Cu) { ctx->pc = 0x1D9F0Cu; }
    }
    if (ctx->pc != 0x1D9F0Cu) { return; }
    ctx->pc = 0x1D9F0Cu;
    // 0x1d9f0c: 0x8e630054
    ctx->pc = 0x1d9f0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9f10: 0x70403628
    ctx->pc = 0x1d9f10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9f14: 0x3c020047
    ctx->pc = 0x1d9f14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x1d9f18: 0x34450143
    ctx->pc = 0x1d9f18u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 323));
    // 0x1d9f1c: 0x70003e28
    ctx->pc = 0x1d9f1cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9f20: 0xc079e80
    ctx->pc = 0x1D9F20u;
    SET_GPR_U32(ctx, 31, 0x1D9F28u);
    ctx->pc = 0x1D9F24u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F28u; }
        else if (ctx->pc != 0x1D9F28u) { ctx->pc = 0x1D9F28u; }
    }
    if (ctx->pc != 0x1D9F28u) { return; }
    ctx->pc = 0x1D9F28u;
    // 0x1d9f28: 0x8e630054
    ctx->pc = 0x1d9f28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9f2c: 0x3c024248
    ctx->pc = 0x1d9f2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d9f30: 0x44826000
    ctx->pc = 0x1d9f30u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9f34: 0xc079eac
    ctx->pc = 0x1D9F34u;
    SET_GPR_U32(ctx, 31, 0x1D9F3Cu);
    ctx->pc = 0x1D9F38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFf_0x1e7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F3Cu; }
        else if (ctx->pc != 0x1D9F3Cu) { ctx->pc = 0x1D9F3Cu; }
    }
    if (ctx->pc != 0x1D9F3Cu) { return; }
    ctx->pc = 0x1D9F3Cu;
    // 0x1d9f3c: 0x26310001
    ctx->pc = 0x1d9f3cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d9f40: 0x265200f0
    ctx->pc = 0x1d9f40u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1d9f44:
    // 0x1d9f44: 0x26100001
    ctx->pc = 0x1d9f44u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d9f48:
    // 0x1d9f48: 0x8e630000
    ctx->pc = 0x1d9f48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d9f4c: 0x203182a
    ctx->pc = 0x1d9f4cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1d9f50: 0x1460ff60
    ctx->pc = 0x1D9F50u;
    {
        const bool branch_taken_0x1d9f50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9F54u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x1d9f50) {
            ctx->pc = 0x1D9CD4u;
            goto label_1d9cd4;
        }
    }
    ctx->pc = 0x1D9F58u;
    // 0x1d9f58: 0x3c030027
    ctx->pc = 0x1d9f58u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1d9f5c: 0x24638b38
    ctx->pc = 0x1d9f5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937400));
    // 0x1d9f60: 0xc4620000
    ctx->pc = 0x1d9f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9f64: 0xc4610004
    ctx->pc = 0x1d9f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9f68: 0xc4600008
    ctx->pc = 0x1d9f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9f6c: 0xe6620114
    ctx->pc = 0x1d9f6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1d9f70: 0xe6610118
    ctx->pc = 0x1d9f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1d9f74: 0xe660011c
    ctx->pc = 0x1d9f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1d9f78: 0x7bbf0050
    ctx->pc = 0x1d9f78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9f7c: 0x7bb40040
    ctx->pc = 0x1d9f7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9f80: 0x7bb30030
    ctx->pc = 0x1d9f80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9f84: 0x7bb20020
    ctx->pc = 0x1d9f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9f88: 0x7bb10010
    ctx->pc = 0x1d9f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9f8c: 0x7bb00000
    ctx->pc = 0x1d9f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9f90: 0x3e00008
    ctx->pc = 0x1D9F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9F94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9CD4u: goto label_1d9cd4;
            case 0x1D9D34u: goto label_1d9d34;
            case 0x1D9D5Cu: goto label_1d9d5c;
            case 0x1D9D98u: goto label_1d9d98;
            case 0x1D9D9Cu: goto label_1d9d9c;
            case 0x1D9DC4u: goto label_1d9dc4;
            case 0x1D9E00u: goto label_1d9e00;
            case 0x1D9E04u: goto label_1d9e04;
            case 0x1D9E2Cu: goto label_1d9e2c;
            case 0x1D9E78u: goto label_1d9e78;
            case 0x1D9E7Cu: goto label_1d9e7c;
            case 0x1D9EA4u: goto label_1d9ea4;
            case 0x1D9EE0u: goto label_1d9ee0;
            case 0x1D9EE4u: goto label_1d9ee4;
            case 0x1D9F04u: goto label_1d9f04;
            case 0x1D9F44u: goto label_1d9f44;
            case 0x1D9F48u: goto label_1d9f48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D9F98u;
}

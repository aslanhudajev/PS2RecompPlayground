#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initSt3TaruEki__9FcvEffectFv
// Address: 0x1d8fe0 - 0x1d90bc
void initSt3TaruEki__9FcvEffectFv_0x1d8fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initSt3TaruEki__9FcvEffectFv");


    ctx->pc = 0x1d8fe0u;

    // 0x1d8fe0: 0x27bdffb0
    ctx->pc = 0x1d8fe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d8fe4: 0x7fbf0040
    ctx->pc = 0x1d8fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1d8fe8: 0x7fb30030
    ctx->pc = 0x1d8fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d8fec: 0x7fb20020
    ctx->pc = 0x1d8fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d8ff0: 0x7fb10010
    ctx->pc = 0x1d8ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8ff4: 0x70809e28
    ctx->pc = 0x1d8ff4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d8ff8: 0x24050007
    ctx->pc = 0x1d8ff8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d8ffc: 0xc0761c4
    ctx->pc = 0x1D8FFCu;
    SET_GPR_U32(ctx, 31, 0x1D9004u);
    ctx->pc = 0x1D9000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9004u; }
        else if (ctx->pc != 0x1D9004u) { ctx->pc = 0x1D9004u; }
    }
    if (ctx->pc != 0x1D9004u) { return; }
    ctx->pc = 0x1D9004u;
    // 0x1d9004: 0xae620054
    ctx->pc = 0x1d9004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1d9008: 0x3c03428c
    ctx->pc = 0x1d9008u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17036 << 16));
    // 0x1d900c: 0xae630028
    ctx->pc = 0x1d900cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x1d9010: 0x3c03002c
    ctx->pc = 0x1d9010u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1d9014: 0x70008628
    ctx->pc = 0x1d9014u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9018: 0x2471ea30
    ctx->pc = 0x1d9018u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294961712));
    // 0x1d901c: 0x10000014
    ctx->pc = 0x1D901Cu;
    {
        const bool branch_taken_0x1d901c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9020u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d901c) {
            ctx->pc = 0x1D9070u;
            goto label_1d9070;
        }
    }
    ctx->pc = 0x1D9024u;
label_1d9024:
    // 0x1d9024: 0xc07f208
    ctx->pc = 0x1D9024u;
    SET_GPR_U32(ctx, 31, 0x1D902Cu);
    ctx->pc = 0x1D9028u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D902Cu; }
        else if (ctx->pc != 0x1D902Cu) { ctx->pc = 0x1D902Cu; }
    }
    if (ctx->pc != 0x1D902Cu) { return; }
    ctx->pc = 0x1D902Cu;
    // 0x1d902c: 0x70403628
    ctx->pc = 0x1d902cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9030: 0x8e620054
    ctx->pc = 0x1d9030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9034: 0x8e250000
    ctx->pc = 0x1d9034u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d9038: 0x70003e28
    ctx->pc = 0x1d9038u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d903c: 0xc079e80
    ctx->pc = 0x1D903Cu;
    SET_GPR_U32(ctx, 31, 0x1D9044u);
    ctx->pc = 0x1D9040u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9044u; }
        else if (ctx->pc != 0x1D9044u) { ctx->pc = 0x1D9044u; }
    }
    if (ctx->pc != 0x1D9044u) { return; }
    ctx->pc = 0x1D9044u;
    // 0x1d9044: 0x8e630054
    ctx->pc = 0x1d9044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d9048: 0x3c024248
    ctx->pc = 0x1d9048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d904c: 0x44826000
    ctx->pc = 0x1d904cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d9050: 0x3c023f33
    ctx->pc = 0x1d9050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16179 << 16));
    // 0x1d9054: 0x34423333
    ctx->pc = 0x1d9054u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x1d9058: 0x44826800
    ctx->pc = 0x1d9058u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1d905c: 0xc079ec4
    ctx->pc = 0x1D905Cu;
    SET_GPR_U32(ctx, 31, 0x1D9064u);
    ctx->pc = 0x1D9060u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFff_0x1e7b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9064u; }
        else if (ctx->pc != 0x1D9064u) { ctx->pc = 0x1D9064u; }
    }
    if (ctx->pc != 0x1D9064u) { return; }
    ctx->pc = 0x1D9064u;
    // 0x1d9064: 0x26310004
    ctx->pc = 0x1d9064u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d9068: 0x265200f0
    ctx->pc = 0x1d9068u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1d906c: 0x26100001
    ctx->pc = 0x1d906cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d9070:
    // 0x1d9070: 0x8e630000
    ctx->pc = 0x1d9070u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d9074: 0x203182a
    ctx->pc = 0x1d9074u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1d9078: 0x1460ffea
    ctx->pc = 0x1D9078u;
    {
        const bool branch_taken_0x1d9078 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D907Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 8521));
        if (branch_taken_0x1d9078) {
            ctx->pc = 0x1D9024u;
            goto label_1d9024;
        }
    }
    ctx->pc = 0x1D9080u;
    // 0x1d9080: 0x3c030027
    ctx->pc = 0x1d9080u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1d9084: 0x24638ae8
    ctx->pc = 0x1d9084u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937320));
    // 0x1d9088: 0xc4620000
    ctx->pc = 0x1d9088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d908c: 0xc4610004
    ctx->pc = 0x1d908cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9090: 0xc4600008
    ctx->pc = 0x1d9090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9094: 0xe6620114
    ctx->pc = 0x1d9094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1d9098: 0xe6610118
    ctx->pc = 0x1d9098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1d909c: 0xe660011c
    ctx->pc = 0x1d909cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1d90a0: 0x7bbf0040
    ctx->pc = 0x1d90a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d90a4: 0x7bb30030
    ctx->pc = 0x1d90a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d90a8: 0x7bb20020
    ctx->pc = 0x1d90a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d90ac: 0x7bb10010
    ctx->pc = 0x1d90acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d90b0: 0x7bb00000
    ctx->pc = 0x1d90b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d90b4: 0x3e00008
    ctx->pc = 0x1D90B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D90B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9024u: goto label_1d9024;
            case 0x1D9070u: goto label_1d9070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D90BCu;
}

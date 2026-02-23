#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initDonjonSlice__9FcvEffectFv
// Address: 0x1dade0 - 0x1daf48
void initDonjonSlice__9FcvEffectFv_0x1dade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initDonjonSlice__9FcvEffectFv");


    ctx->pc = 0x1dade0u;

    // 0x1dade0: 0x27bdffa0
    ctx->pc = 0x1dade0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dade4: 0x7fbf0050
    ctx->pc = 0x1dade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1dade8: 0x7fb40040
    ctx->pc = 0x1dade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dadec: 0x7fb30030
    ctx->pc = 0x1dadecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dadf0: 0x7fb20020
    ctx->pc = 0x1dadf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dadf4: 0x7fb10010
    ctx->pc = 0x1dadf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dadf8: 0x7080a628
    ctx->pc = 0x1dadf8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dadfc: 0x24050008
    ctx->pc = 0x1dadfcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dae00: 0xc0761c4
    ctx->pc = 0x1DAE00u;
    SET_GPR_U32(ctx, 31, 0x1DAE08u);
    ctx->pc = 0x1DAE04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE08u; }
        else if (ctx->pc != 0x1DAE08u) { ctx->pc = 0x1DAE08u; }
    }
    if (ctx->pc != 0x1DAE08u) { return; }
    ctx->pc = 0x1DAE08u;
    // 0x1dae08: 0xae820054
    ctx->pc = 0x1dae08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x1dae0c: 0x3c0242b4
    ctx->pc = 0x1dae0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17076 << 16));
    // 0x1dae10: 0xae820028
    ctx->pc = 0x1dae10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x1dae14: 0x27848d4c
    ctx->pc = 0x1dae14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dae18: 0xc07f208
    ctx->pc = 0x1DAE18u;
    SET_GPR_U32(ctx, 31, 0x1DAE20u);
    ctx->pc = 0x1DAE1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4895));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE20u; }
        else if (ctx->pc != 0x1DAE20u) { ctx->pc = 0x1DAE20u; }
    }
    if (ctx->pc != 0x1DAE20u) { return; }
    ctx->pc = 0x1DAE20u;
    // 0x1dae20: 0x70408628
    ctx->pc = 0x1dae20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dae24: 0x27848d4c
    ctx->pc = 0x1dae24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dae28: 0xc07f208
    ctx->pc = 0x1DAE28u;
    SET_GPR_U32(ctx, 31, 0x1DAE30u);
    ctx->pc = 0x1DAE2Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4896));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE30u; }
        else if (ctx->pc != 0x1DAE30u) { ctx->pc = 0x1DAE30u; }
    }
    if (ctx->pc != 0x1DAE30u) { return; }
    ctx->pc = 0x1DAE30u;
    // 0x1dae30: 0x70408e28
    ctx->pc = 0x1dae30u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dae34: 0x70009628
    ctx->pc = 0x1dae34u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dae38: 0x1000002f
    ctx->pc = 0x1DAE38u;
    {
        const bool branch_taken_0x1dae38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DAE3Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dae38) {
            ctx->pc = 0x1DAEF8u;
            goto label_1daef8;
        }
    }
    ctx->pc = 0x1DAE40u;
label_1dae40:
    // 0x1dae40: 0xc07f208
    ctx->pc = 0x1DAE40u;
    SET_GPR_U32(ctx, 31, 0x1DAE48u);
    ctx->pc = 0x1DAE44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE48u; }
        else if (ctx->pc != 0x1DAE48u) { ctx->pc = 0x1DAE48u; }
    }
    if (ctx->pc != 0x1DAE48u) { return; }
    ctx->pc = 0x1DAE48u;
    // 0x1dae48: 0x1e40000b
    ctx->pc = 0x1DAE48u;
    {
        const bool branch_taken_0x1dae48 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x1DAE4Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 6));
        if (branch_taken_0x1dae48) {
            ctx->pc = 0x1DAE78u;
            goto label_1dae78;
        }
    }
    ctx->pc = 0x1DAE50u;
    // 0x1dae50: 0x8e840054
    ctx->pc = 0x1dae50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1dae54: 0x3c03001a
    ctx->pc = 0x1dae54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)26 << 16));
    // 0x1dae58: 0x34650004
    ctx->pc = 0x1dae58u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 4));
    // 0x1dae5c: 0x70403628
    ctx->pc = 0x1dae5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dae60: 0x72003e28
    ctx->pc = 0x1dae60u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dae64: 0xc079e80
    ctx->pc = 0x1DAE64u;
    SET_GPR_U32(ctx, 31, 0x1DAE6Cu);
    ctx->pc = 0x1DAE68u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE6Cu; }
        else if (ctx->pc != 0x1DAE6Cu) { ctx->pc = 0x1DAE6Cu; }
    }
    if (ctx->pc != 0x1DAE6Cu) { return; }
    ctx->pc = 0x1DAE6Cu;
    // 0x1dae6c: 0x10000021
    ctx->pc = 0x1DAE6Cu;
    {
        const bool branch_taken_0x1dae6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DAE70u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 240));
        if (branch_taken_0x1dae6c) {
            ctx->pc = 0x1DAEF4u;
            goto label_1daef4;
        }
    }
    ctx->pc = 0x1DAE74u;
    // 0x1dae74: 0x2a410006
    ctx->pc = 0x1dae74u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 6));
label_1dae78:
    // 0x1dae78: 0x1020000a
    ctx->pc = 0x1DAE78u;
    {
        const bool branch_taken_0x1dae78 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DAE7Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 7));
        if (branch_taken_0x1dae78) {
            ctx->pc = 0x1DAEA4u;
            goto label_1daea4;
        }
    }
    ctx->pc = 0x1DAE80u;
    // 0x1dae80: 0x8e830054
    ctx->pc = 0x1dae80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1dae84: 0x3c05001b
    ctx->pc = 0x1dae84u;
    SET_GPR_U32(ctx, 5, ((uint32_t)27 << 16));
    // 0x1dae88: 0x70403628
    ctx->pc = 0x1dae88u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dae8c: 0x70003e28
    ctx->pc = 0x1dae8cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dae90: 0xc079e80
    ctx->pc = 0x1DAE90u;
    SET_GPR_U32(ctx, 31, 0x1DAE98u);
    ctx->pc = 0x1DAE94u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE98u; }
        else if (ctx->pc != 0x1DAE98u) { ctx->pc = 0x1DAE98u; }
    }
    if (ctx->pc != 0x1DAE98u) { return; }
    ctx->pc = 0x1DAE98u;
    // 0x1dae98: 0x10000015
    ctx->pc = 0x1DAE98u;
    {
        const bool branch_taken_0x1dae98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dae98) {
            ctx->pc = 0x1DAEF0u;
            goto label_1daef0;
        }
    }
    ctx->pc = 0x1DAEA0u;
    // 0x1daea0: 0x2a410007
    ctx->pc = 0x1daea0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 7));
label_1daea4:
    // 0x1daea4: 0x1020000a
    ctx->pc = 0x1DAEA4u;
    {
        const bool branch_taken_0x1daea4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1daea4) {
            ctx->pc = 0x1DAED0u;
            goto label_1daed0;
        }
    }
    ctx->pc = 0x1DAEACu;
    // 0x1daeac: 0x8e840054
    ctx->pc = 0x1daeacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1daeb0: 0x3c030019
    ctx->pc = 0x1daeb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)25 << 16));
    // 0x1daeb4: 0x3465004e
    ctx->pc = 0x1daeb4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 78));
    // 0x1daeb8: 0x70403628
    ctx->pc = 0x1daeb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1daebc: 0x70003e28
    ctx->pc = 0x1daebcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1daec0: 0xc079e80
    ctx->pc = 0x1DAEC0u;
    SET_GPR_U32(ctx, 31, 0x1DAEC8u);
    ctx->pc = 0x1DAEC4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEC8u; }
        else if (ctx->pc != 0x1DAEC8u) { ctx->pc = 0x1DAEC8u; }
    }
    if (ctx->pc != 0x1DAEC8u) { return; }
    ctx->pc = 0x1DAEC8u;
    // 0x1daec8: 0x10000009
    ctx->pc = 0x1DAEC8u;
    {
        const bool branch_taken_0x1daec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1daec8) {
            ctx->pc = 0x1DAEF0u;
            goto label_1daef0;
        }
    }
    ctx->pc = 0x1DAED0u;
label_1daed0:
    // 0x1daed0: 0x8e840054
    ctx->pc = 0x1daed0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1daed4: 0x3c030019
    ctx->pc = 0x1daed4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)25 << 16));
    // 0x1daed8: 0x3465004f
    ctx->pc = 0x1daed8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 79));
    // 0x1daedc: 0x70403628
    ctx->pc = 0x1daedcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1daee0: 0x72203e28
    ctx->pc = 0x1daee0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1daee4: 0xc079e80
    ctx->pc = 0x1DAEE4u;
    SET_GPR_U32(ctx, 31, 0x1DAEECu);
    ctx->pc = 0x1DAEE8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEECu; }
        else if (ctx->pc != 0x1DAEECu) { ctx->pc = 0x1DAEECu; }
    }
    if (ctx->pc != 0x1DAEECu) { return; }
    ctx->pc = 0x1DAEECu;
    // 0x1daeec: 0x0
    ctx->pc = 0x1daeecu;
    // NOP
label_1daef0:
    // 0x1daef0: 0x267300f0
    ctx->pc = 0x1daef0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 240));
label_1daef4:
    // 0x1daef4: 0x26520001
    ctx->pc = 0x1daef4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1daef8:
    // 0x1daef8: 0x8e830000
    ctx->pc = 0x1daef8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1daefc: 0x243182a
    ctx->pc = 0x1daefcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x1daf00: 0x1460ffcf
    ctx->pc = 0x1DAF00u;
    {
        const bool branch_taken_0x1daf00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DAF04u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4887));
        if (branch_taken_0x1daf00) {
            ctx->pc = 0x1DAE40u;
            goto label_1dae40;
        }
    }
    ctx->pc = 0x1DAF08u;
    // 0x1daf08: 0x3c030027
    ctx->pc = 0x1daf08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1daf0c: 0x24638c08
    ctx->pc = 0x1daf0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937608));
    // 0x1daf10: 0xc4620000
    ctx->pc = 0x1daf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1daf14: 0xc4610004
    ctx->pc = 0x1daf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1daf18: 0xc4600008
    ctx->pc = 0x1daf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daf1c: 0xe6820114
    ctx->pc = 0x1daf1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 276), bits); }
    // 0x1daf20: 0xe6810118
    ctx->pc = 0x1daf20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 280), bits); }
    // 0x1daf24: 0xe680011c
    ctx->pc = 0x1daf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 284), bits); }
    // 0x1daf28: 0x7bbf0050
    ctx->pc = 0x1daf28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1daf2c: 0x7bb40040
    ctx->pc = 0x1daf2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1daf30: 0x7bb30030
    ctx->pc = 0x1daf30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1daf34: 0x7bb20020
    ctx->pc = 0x1daf34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1daf38: 0x7bb10010
    ctx->pc = 0x1daf38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1daf3c: 0x7bb00000
    ctx->pc = 0x1daf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daf40: 0x3e00008
    ctx->pc = 0x1DAF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAF44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAE40u: goto label_1dae40;
            case 0x1DAE78u: goto label_1dae78;
            case 0x1DAEA4u: goto label_1daea4;
            case 0x1DAED0u: goto label_1daed0;
            case 0x1DAEF0u: goto label_1daef0;
            case 0x1DAEF4u: goto label_1daef4;
            case 0x1DAEF8u: goto label_1daef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DAF48u;
}

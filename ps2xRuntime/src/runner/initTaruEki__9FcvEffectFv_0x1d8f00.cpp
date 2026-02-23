#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initTaruEki__9FcvEffectFv
// Address: 0x1d8f00 - 0x1d8fdc
void initTaruEki__9FcvEffectFv_0x1d8f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initTaruEki__9FcvEffectFv");


    ctx->pc = 0x1d8f00u;

    // 0x1d8f00: 0x27bdffb0
    ctx->pc = 0x1d8f00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d8f04: 0x7fbf0040
    ctx->pc = 0x1d8f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1d8f08: 0x7fb30030
    ctx->pc = 0x1d8f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d8f0c: 0x7fb20020
    ctx->pc = 0x1d8f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d8f10: 0x7fb10010
    ctx->pc = 0x1d8f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8f14: 0x70809e28
    ctx->pc = 0x1d8f14u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d8f18: 0x24050007
    ctx->pc = 0x1d8f18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d8f1c: 0xc0761c4
    ctx->pc = 0x1D8F1Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F24u);
    ctx->pc = 0x1D8F20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F24u; }
        else if (ctx->pc != 0x1D8F24u) { ctx->pc = 0x1D8F24u; }
    }
    if (ctx->pc != 0x1D8F24u) { return; }
    ctx->pc = 0x1D8F24u;
    // 0x1d8f24: 0xae620054
    ctx->pc = 0x1d8f24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1d8f28: 0x3c03428c
    ctx->pc = 0x1d8f28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17036 << 16));
    // 0x1d8f2c: 0xae630028
    ctx->pc = 0x1d8f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x1d8f30: 0x3c03002c
    ctx->pc = 0x1d8f30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1d8f34: 0x70008628
    ctx->pc = 0x1d8f34u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8f38: 0x2471ea10
    ctx->pc = 0x1d8f38u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294961680));
    // 0x1d8f3c: 0x10000014
    ctx->pc = 0x1D8F3Cu;
    {
        const bool branch_taken_0x1d8f3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8F40u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d8f3c) {
            ctx->pc = 0x1D8F90u;
            goto label_1d8f90;
        }
    }
    ctx->pc = 0x1D8F44u;
label_1d8f44:
    // 0x1d8f44: 0xc07f208
    ctx->pc = 0x1D8F44u;
    SET_GPR_U32(ctx, 31, 0x1D8F4Cu);
    ctx->pc = 0x1D8F48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F4Cu; }
        else if (ctx->pc != 0x1D8F4Cu) { ctx->pc = 0x1D8F4Cu; }
    }
    if (ctx->pc != 0x1D8F4Cu) { return; }
    ctx->pc = 0x1D8F4Cu;
    // 0x1d8f4c: 0x70403628
    ctx->pc = 0x1d8f4cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d8f50: 0x8e620054
    ctx->pc = 0x1d8f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d8f54: 0x8e250000
    ctx->pc = 0x1d8f54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d8f58: 0x70003e28
    ctx->pc = 0x1d8f58u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8f5c: 0xc079e80
    ctx->pc = 0x1D8F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F64u);
    ctx->pc = 0x1D8F60u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F64u; }
        else if (ctx->pc != 0x1D8F64u) { ctx->pc = 0x1D8F64u; }
    }
    if (ctx->pc != 0x1D8F64u) { return; }
    ctx->pc = 0x1D8F64u;
    // 0x1d8f64: 0x8e630054
    ctx->pc = 0x1d8f64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1d8f68: 0x3c024248
    ctx->pc = 0x1d8f68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1d8f6c: 0x44826000
    ctx->pc = 0x1d8f6cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d8f70: 0x3c023f33
    ctx->pc = 0x1d8f70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16179 << 16));
    // 0x1d8f74: 0x34423333
    ctx->pc = 0x1d8f74u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x1d8f78: 0x44826800
    ctx->pc = 0x1d8f78u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1d8f7c: 0xc079ec4
    ctx->pc = 0x1D8F7Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F84u);
    ctx->pc = 0x1D8F80u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFadeOut__7CFcvTRSFff_0x1e7b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F84u; }
        else if (ctx->pc != 0x1D8F84u) { ctx->pc = 0x1D8F84u; }
    }
    if (ctx->pc != 0x1D8F84u) { return; }
    ctx->pc = 0x1D8F84u;
    // 0x1d8f84: 0x26310004
    ctx->pc = 0x1d8f84u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d8f88: 0x265200f0
    ctx->pc = 0x1d8f88u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1d8f8c: 0x26100001
    ctx->pc = 0x1d8f8cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d8f90:
    // 0x1d8f90: 0x8e630000
    ctx->pc = 0x1d8f90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d8f94: 0x203182a
    ctx->pc = 0x1d8f94u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1d8f98: 0x1460ffea
    ctx->pc = 0x1D8F98u;
    {
        const bool branch_taken_0x1d8f98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D8F9Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 8521));
        if (branch_taken_0x1d8f98) {
            ctx->pc = 0x1D8F44u;
            goto label_1d8f44;
        }
    }
    ctx->pc = 0x1D8FA0u;
    // 0x1d8fa0: 0x3c030027
    ctx->pc = 0x1d8fa0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1d8fa4: 0x24638ad8
    ctx->pc = 0x1d8fa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937304));
    // 0x1d8fa8: 0xc4620000
    ctx->pc = 0x1d8fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d8fac: 0xc4610004
    ctx->pc = 0x1d8facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8fb0: 0xc4600008
    ctx->pc = 0x1d8fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8fb4: 0xe6620114
    ctx->pc = 0x1d8fb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1d8fb8: 0xe6610118
    ctx->pc = 0x1d8fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1d8fbc: 0xe660011c
    ctx->pc = 0x1d8fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1d8fc0: 0x7bbf0040
    ctx->pc = 0x1d8fc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8fc4: 0x7bb30030
    ctx->pc = 0x1d8fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8fc8: 0x7bb20020
    ctx->pc = 0x1d8fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8fcc: 0x7bb10010
    ctx->pc = 0x1d8fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8fd0: 0x7bb00000
    ctx->pc = 0x1d8fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8fd4: 0x3e00008
    ctx->pc = 0x1D8FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8FD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8F44u: goto label_1d8f44;
            case 0x1D8F90u: goto label_1d8f90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8FDCu;
}

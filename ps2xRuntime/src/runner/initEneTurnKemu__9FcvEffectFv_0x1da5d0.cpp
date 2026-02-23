#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initEneTurnKemu__9FcvEffectFv
// Address: 0x1da5d0 - 0x1da6c4
void initEneTurnKemu__9FcvEffectFv_0x1da5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initEneTurnKemu__9FcvEffectFv");


    ctx->pc = 0x1da5d0u;

    // 0x1da5d0: 0x27bdffb0
    ctx->pc = 0x1da5d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1da5d4: 0x7fbf0040
    ctx->pc = 0x1da5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1da5d8: 0x7fb30030
    ctx->pc = 0x1da5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1da5dc: 0x7fb20020
    ctx->pc = 0x1da5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da5e0: 0x7fb10010
    ctx->pc = 0x1da5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da5e4: 0x70809e28
    ctx->pc = 0x1da5e4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1da5e8: 0x2405001e
    ctx->pc = 0x1da5e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
    // 0x1da5ec: 0xc0761c4
    ctx->pc = 0x1DA5ECu;
    SET_GPR_U32(ctx, 31, 0x1DA5F4u);
    ctx->pc = 0x1DA5F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA5F4u; }
        else if (ctx->pc != 0x1DA5F4u) { ctx->pc = 0x1DA5F4u; }
    }
    if (ctx->pc != 0x1DA5F4u) { return; }
    ctx->pc = 0x1DA5F4u;
    // 0x1da5f4: 0xae620054
    ctx->pc = 0x1da5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1da5f8: 0x3c02428c
    ctx->pc = 0x1da5f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17036 << 16));
    // 0x1da5fc: 0xae620028
    ctx->pc = 0x1da5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1da600: 0x27848d4c
    ctx->pc = 0x1da600u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1da604: 0xc07f208
    ctx->pc = 0x1DA604u;
    SET_GPR_U32(ctx, 31, 0x1DA60Cu);
    ctx->pc = 0x1DA608u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 896));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA60Cu; }
        else if (ctx->pc != 0x1DA60Cu) { ctx->pc = 0x1DA60Cu; }
    }
    if (ctx->pc != 0x1DA60Cu) { return; }
    ctx->pc = 0x1DA60Cu;
    // 0x1da60c: 0x70408628
    ctx->pc = 0x1da60cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da610: 0x70008e28
    ctx->pc = 0x1da610u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da614: 0x10000018
    ctx->pc = 0x1DA614u;
    {
        const bool branch_taken_0x1da614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA618u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1da614) {
            ctx->pc = 0x1DA678u;
            goto label_1da678;
        }
    }
    ctx->pc = 0x1DA61Cu;
label_1da61c:
    // 0x1da61c: 0xc07f208
    ctx->pc = 0x1DA61Cu;
    SET_GPR_U32(ctx, 31, 0x1DA624u);
    ctx->pc = 0x1DA620u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA624u; }
        else if (ctx->pc != 0x1DA624u) { ctx->pc = 0x1DA624u; }
    }
    if (ctx->pc != 0x1DA624u) { return; }
    ctx->pc = 0x1DA624u;
    // 0x1da624: 0x8e640054
    ctx->pc = 0x1da624u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da628: 0x3c03001b
    ctx->pc = 0x1da628u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1da62c: 0x346500b3
    ctx->pc = 0x1da62cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1da630: 0x70403628
    ctx->pc = 0x1da630u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da634: 0x72003e28
    ctx->pc = 0x1da634u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1da638: 0xc079e80
    ctx->pc = 0x1DA638u;
    SET_GPR_U32(ctx, 31, 0x1DA640u);
    ctx->pc = 0x1DA63Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA640u; }
        else if (ctx->pc != 0x1DA640u) { ctx->pc = 0x1DA640u; }
    }
    if (ctx->pc != 0x1DA640u) { return; }
    ctx->pc = 0x1DA640u;
    // 0x1da640: 0xc66c002c
    ctx->pc = 0x1da640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da644: 0x3c033f80
    ctx->pc = 0x1da644u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1da648: 0x44830000
    ctx->pc = 0x1da648u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1da64c: 0x0
    ctx->pc = 0x1da64cu;
    // NOP
    // 0x1da650: 0x460c0032
    ctx->pc = 0x1da650u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da654: 0x0
    ctx->pc = 0x1da654u;
    // NOP
    // 0x1da658: 0x45030006
    ctx->pc = 0x1DA658u;
    {
        const bool branch_taken_0x1da658 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da658) {
            ctx->pc = 0x1DA65Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1DA674u;
            goto label_1da674;
        }
    }
    ctx->pc = 0x1DA660u;
    // 0x1da660: 0x8e620054
    ctx->pc = 0x1da660u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da664: 0xc079ecc
    ctx->pc = 0x1DA664u;
    SET_GPR_U32(ctx, 31, 0x1DA66Cu);
    ctx->pc = 0x1DA668u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA66Cu; }
        else if (ctx->pc != 0x1DA66Cu) { ctx->pc = 0x1DA66Cu; }
    }
    if (ctx->pc != 0x1DA66Cu) { return; }
    ctx->pc = 0x1DA66Cu;
    // 0x1da66c: 0x0
    ctx->pc = 0x1da66cu;
    // NOP
    // 0x1da670: 0x265200f0
    ctx->pc = 0x1da670u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1da674:
    // 0x1da674: 0x26310001
    ctx->pc = 0x1da674u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1da678:
    // 0x1da678: 0x8e630000
    ctx->pc = 0x1da678u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1da67c: 0x223182a
    ctx->pc = 0x1da67cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1da680: 0x1460ffe6
    ctx->pc = 0x1DA680u;
    {
        const bool branch_taken_0x1da680 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA684u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 866));
        if (branch_taken_0x1da680) {
            ctx->pc = 0x1DA61Cu;
            goto label_1da61c;
        }
    }
    ctx->pc = 0x1DA688u;
    // 0x1da688: 0x3c030027
    ctx->pc = 0x1da688u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1da68c: 0x24638b98
    ctx->pc = 0x1da68cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937496));
    // 0x1da690: 0xc4620000
    ctx->pc = 0x1da690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da694: 0xc4610004
    ctx->pc = 0x1da694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da698: 0xc4600008
    ctx->pc = 0x1da698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da69c: 0xe6620114
    ctx->pc = 0x1da69cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1da6a0: 0xe6610118
    ctx->pc = 0x1da6a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1da6a4: 0xe660011c
    ctx->pc = 0x1da6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1da6a8: 0x7bbf0040
    ctx->pc = 0x1da6a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da6ac: 0x7bb30030
    ctx->pc = 0x1da6acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da6b0: 0x7bb20020
    ctx->pc = 0x1da6b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da6b4: 0x7bb10010
    ctx->pc = 0x1da6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da6b8: 0x7bb00000
    ctx->pc = 0x1da6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da6bc: 0x3e00008
    ctx->pc = 0x1DA6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA6C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA61Cu: goto label_1da61c;
            case 0x1DA674u: goto label_1da674;
            case 0x1DA678u: goto label_1da678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA6C4u;
}

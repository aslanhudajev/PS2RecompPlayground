#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initPlChakuchiKemu__9FcvEffectFv
// Address: 0x1da7d0 - 0x1da8c4
void initPlChakuchiKemu__9FcvEffectFv_0x1da7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initPlChakuchiKemu__9FcvEffectFv");


    ctx->pc = 0x1da7d0u;

    // 0x1da7d0: 0x27bdffb0
    ctx->pc = 0x1da7d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1da7d4: 0x7fbf0040
    ctx->pc = 0x1da7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1da7d8: 0x7fb30030
    ctx->pc = 0x1da7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1da7dc: 0x7fb20020
    ctx->pc = 0x1da7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da7e0: 0x7fb10010
    ctx->pc = 0x1da7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da7e4: 0x70809e28
    ctx->pc = 0x1da7e4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1da7e8: 0x24050028
    ctx->pc = 0x1da7e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 40));
    // 0x1da7ec: 0xc0761c4
    ctx->pc = 0x1DA7ECu;
    SET_GPR_U32(ctx, 31, 0x1DA7F4u);
    ctx->pc = 0x1DA7F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA7F4u; }
        else if (ctx->pc != 0x1DA7F4u) { ctx->pc = 0x1DA7F4u; }
    }
    if (ctx->pc != 0x1DA7F4u) { return; }
    ctx->pc = 0x1DA7F4u;
    // 0x1da7f4: 0xae620054
    ctx->pc = 0x1da7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1da7f8: 0x3c0242a0
    ctx->pc = 0x1da7f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17056 << 16));
    // 0x1da7fc: 0xae620028
    ctx->pc = 0x1da7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1da800: 0x27848d4c
    ctx->pc = 0x1da800u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1da804: 0xc07f208
    ctx->pc = 0x1DA804u;
    SET_GPR_U32(ctx, 31, 0x1DA80Cu);
    ctx->pc = 0x1DA808u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7958));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA80Cu; }
        else if (ctx->pc != 0x1DA80Cu) { ctx->pc = 0x1DA80Cu; }
    }
    if (ctx->pc != 0x1DA80Cu) { return; }
    ctx->pc = 0x1DA80Cu;
    // 0x1da80c: 0x70408628
    ctx->pc = 0x1da80cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da810: 0x70008e28
    ctx->pc = 0x1da810u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da814: 0x10000018
    ctx->pc = 0x1DA814u;
    {
        const bool branch_taken_0x1da814 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA818u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1da814) {
            ctx->pc = 0x1DA878u;
            goto label_1da878;
        }
    }
    ctx->pc = 0x1DA81Cu;
label_1da81c:
    // 0x1da81c: 0xc07f208
    ctx->pc = 0x1DA81Cu;
    SET_GPR_U32(ctx, 31, 0x1DA824u);
    ctx->pc = 0x1DA820u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA824u; }
        else if (ctx->pc != 0x1DA824u) { ctx->pc = 0x1DA824u; }
    }
    if (ctx->pc != 0x1DA824u) { return; }
    ctx->pc = 0x1DA824u;
    // 0x1da824: 0x8e640054
    ctx->pc = 0x1da824u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da828: 0x3c03001b
    ctx->pc = 0x1da828u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1da82c: 0x346500b3
    ctx->pc = 0x1da82cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1da830: 0x70403628
    ctx->pc = 0x1da830u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da834: 0x72003e28
    ctx->pc = 0x1da834u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1da838: 0xc079e80
    ctx->pc = 0x1DA838u;
    SET_GPR_U32(ctx, 31, 0x1DA840u);
    ctx->pc = 0x1DA83Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA840u; }
        else if (ctx->pc != 0x1DA840u) { ctx->pc = 0x1DA840u; }
    }
    if (ctx->pc != 0x1DA840u) { return; }
    ctx->pc = 0x1DA840u;
    // 0x1da840: 0xc66c002c
    ctx->pc = 0x1da840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da844: 0x3c033f80
    ctx->pc = 0x1da844u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1da848: 0x44830000
    ctx->pc = 0x1da848u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1da84c: 0x0
    ctx->pc = 0x1da84cu;
    // NOP
    // 0x1da850: 0x460c0032
    ctx->pc = 0x1da850u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da854: 0x0
    ctx->pc = 0x1da854u;
    // NOP
    // 0x1da858: 0x45030006
    ctx->pc = 0x1DA858u;
    {
        const bool branch_taken_0x1da858 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da858) {
            ctx->pc = 0x1DA85Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1DA874u;
            goto label_1da874;
        }
    }
    ctx->pc = 0x1DA860u;
    // 0x1da860: 0x8e620054
    ctx->pc = 0x1da860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da864: 0xc079ecc
    ctx->pc = 0x1DA864u;
    SET_GPR_U32(ctx, 31, 0x1DA86Cu);
    ctx->pc = 0x1DA868u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA86Cu; }
        else if (ctx->pc != 0x1DA86Cu) { ctx->pc = 0x1DA86Cu; }
    }
    if (ctx->pc != 0x1DA86Cu) { return; }
    ctx->pc = 0x1DA86Cu;
    // 0x1da86c: 0x0
    ctx->pc = 0x1da86cu;
    // NOP
    // 0x1da870: 0x265200f0
    ctx->pc = 0x1da870u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1da874:
    // 0x1da874: 0x26310001
    ctx->pc = 0x1da874u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1da878:
    // 0x1da878: 0x8e630000
    ctx->pc = 0x1da878u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1da87c: 0x223182a
    ctx->pc = 0x1da87cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1da880: 0x1460ffe6
    ctx->pc = 0x1DA880u;
    {
        const bool branch_taken_0x1da880 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA884u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 7918));
        if (branch_taken_0x1da880) {
            ctx->pc = 0x1DA81Cu;
            goto label_1da81c;
        }
    }
    ctx->pc = 0x1DA888u;
    // 0x1da888: 0x3c030027
    ctx->pc = 0x1da888u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1da88c: 0x24638bb8
    ctx->pc = 0x1da88cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937528));
    // 0x1da890: 0xc4620000
    ctx->pc = 0x1da890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da894: 0xc4610004
    ctx->pc = 0x1da894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da898: 0xc4600008
    ctx->pc = 0x1da898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da89c: 0xe6620114
    ctx->pc = 0x1da89cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1da8a0: 0xe6610118
    ctx->pc = 0x1da8a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1da8a4: 0xe660011c
    ctx->pc = 0x1da8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1da8a8: 0x7bbf0040
    ctx->pc = 0x1da8a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da8ac: 0x7bb30030
    ctx->pc = 0x1da8acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da8b0: 0x7bb20020
    ctx->pc = 0x1da8b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da8b4: 0x7bb10010
    ctx->pc = 0x1da8b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da8b8: 0x7bb00000
    ctx->pc = 0x1da8b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8bc: 0x3e00008
    ctx->pc = 0x1DA8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA8C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA81Cu: goto label_1da81c;
            case 0x1DA874u: goto label_1da874;
            case 0x1DA878u: goto label_1da878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA8C4u;
}

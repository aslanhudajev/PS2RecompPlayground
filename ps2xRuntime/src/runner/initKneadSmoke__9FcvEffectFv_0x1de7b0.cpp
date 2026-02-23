#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initKneadSmoke__9FcvEffectFv
// Address: 0x1de7b0 - 0x1de874
void initKneadSmoke__9FcvEffectFv_0x1de7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initKneadSmoke__9FcvEffectFv");


    ctx->pc = 0x1de7b0u;

    // 0x1de7b0: 0x27bdffb0
    ctx->pc = 0x1de7b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1de7b4: 0x7fbf0040
    ctx->pc = 0x1de7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1de7b8: 0x7fb30030
    ctx->pc = 0x1de7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1de7bc: 0x7fb20020
    ctx->pc = 0x1de7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1de7c0: 0x7fb10010
    ctx->pc = 0x1de7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de7c4: 0x70808e28
    ctx->pc = 0x1de7c4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1de7c8: 0x2405001f
    ctx->pc = 0x1de7c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 31));
    // 0x1de7cc: 0xc0761c4
    ctx->pc = 0x1DE7CCu;
    SET_GPR_U32(ctx, 31, 0x1DE7D4u);
    ctx->pc = 0x1DE7D0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7D4u; }
        else if (ctx->pc != 0x1DE7D4u) { ctx->pc = 0x1DE7D4u; }
    }
    if (ctx->pc != 0x1DE7D4u) { return; }
    ctx->pc = 0x1DE7D4u;
    // 0x1de7d4: 0xae220054
    ctx->pc = 0x1de7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x1de7d8: 0x3c034270
    ctx->pc = 0x1de7d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17008 << 16));
    // 0x1de7dc: 0xae230028
    ctx->pc = 0x1de7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x1de7e0: 0x70009628
    ctx->pc = 0x1de7e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de7e4: 0x10000010
    ctx->pc = 0x1DE7E4u;
    {
        const bool branch_taken_0x1de7e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE7E8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1de7e4) {
            ctx->pc = 0x1DE828u;
            goto label_1de828;
        }
    }
    ctx->pc = 0x1DE7ECu;
label_1de7ec:
    // 0x1de7ec: 0xc07f208
    ctx->pc = 0x1DE7ECu;
    SET_GPR_U32(ctx, 31, 0x1DE7F4u);
    ctx->pc = 0x1DE7F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7F4u; }
        else if (ctx->pc != 0x1DE7F4u) { ctx->pc = 0x1DE7F4u; }
    }
    if (ctx->pc != 0x1DE7F4u) { return; }
    ctx->pc = 0x1DE7F4u;
    // 0x1de7f4: 0x70409e28
    ctx->pc = 0x1de7f4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de7f8: 0x26450e22
    ctx->pc = 0x1de7f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 3618));
    // 0x1de7fc: 0xc07f208
    ctx->pc = 0x1DE7FCu;
    SET_GPR_U32(ctx, 31, 0x1DE804u);
    ctx->pc = 0x1DE800u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE804u; }
        else if (ctx->pc != 0x1DE804u) { ctx->pc = 0x1DE804u; }
    }
    if (ctx->pc != 0x1DE804u) { return; }
    ctx->pc = 0x1DE804u;
    // 0x1de804: 0x8e240054
    ctx->pc = 0x1de804u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1de808: 0x3c03001b
    ctx->pc = 0x1de808u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1de80c: 0x72603628
    ctx->pc = 0x1de80cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1de810: 0x346500b3
    ctx->pc = 0x1de810u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1de814: 0x70403e28
    ctx->pc = 0x1de814u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de818: 0xc079e80
    ctx->pc = 0x1DE818u;
    SET_GPR_U32(ctx, 31, 0x1DE820u);
    ctx->pc = 0x1DE81Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE820u; }
        else if (ctx->pc != 0x1DE820u) { ctx->pc = 0x1DE820u; }
    }
    if (ctx->pc != 0x1DE820u) { return; }
    ctx->pc = 0x1DE820u;
    // 0x1de820: 0x261000f0
    ctx->pc = 0x1de820u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 240));
    // 0x1de824: 0x26520001
    ctx->pc = 0x1de824u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1de828:
    // 0x1de828: 0x8e230000
    ctx->pc = 0x1de828u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1de82c: 0x243182a
    ctx->pc = 0x1de82cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x1de830: 0x1460ffee
    ctx->pc = 0x1DE830u;
    {
        const bool branch_taken_0x1de830 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DE834u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 3587));
        if (branch_taken_0x1de830) {
            ctx->pc = 0x1DE7ECu;
            goto label_1de7ec;
        }
    }
    ctx->pc = 0x1DE838u;
    // 0x1de838: 0x3c030027
    ctx->pc = 0x1de838u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1de83c: 0x246397f0
    ctx->pc = 0x1de83cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940656));
    // 0x1de840: 0xc4620000
    ctx->pc = 0x1de840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de844: 0xc4610004
    ctx->pc = 0x1de844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de848: 0xc4600008
    ctx->pc = 0x1de848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de84c: 0xe6220114
    ctx->pc = 0x1de84cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x1de850: 0xe6210118
    ctx->pc = 0x1de850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    // 0x1de854: 0xe620011c
    ctx->pc = 0x1de854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x1de858: 0x7bbf0040
    ctx->pc = 0x1de858u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de85c: 0x7bb30030
    ctx->pc = 0x1de85cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de860: 0x7bb20020
    ctx->pc = 0x1de860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de864: 0x7bb10010
    ctx->pc = 0x1de864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de868: 0x7bb00000
    ctx->pc = 0x1de868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de86c: 0x3e00008
    ctx->pc = 0x1DE86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE870u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE7ECu: goto label_1de7ec;
            case 0x1DE828u: goto label_1de828;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE874u;
}

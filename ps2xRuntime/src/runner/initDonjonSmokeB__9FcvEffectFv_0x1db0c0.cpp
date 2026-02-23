#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initDonjonSmokeB__9FcvEffectFv
// Address: 0x1db0c0 - 0x1db19c
void initDonjonSmokeB__9FcvEffectFv_0x1db0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initDonjonSmokeB__9FcvEffectFv");


    ctx->pc = 0x1db0c0u;

    // 0x1db0c0: 0x27bdffb0
    ctx->pc = 0x1db0c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1db0c4: 0x7fbf0040
    ctx->pc = 0x1db0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1db0c8: 0x7fb30030
    ctx->pc = 0x1db0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1db0cc: 0x7fb20020
    ctx->pc = 0x1db0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db0d0: 0x7fb10010
    ctx->pc = 0x1db0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db0d4: 0x7fb00000
    ctx->pc = 0x1db0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1db0d8: 0x3c02442f
    ctx->pc = 0x1db0d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17455 << 16));
    // 0x1db0dc: 0xac820028
    ctx->pc = 0x1db0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x1db0e0: 0x240500dd
    ctx->pc = 0x1db0e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 221));
    // 0x1db0e4: 0x70809628
    ctx->pc = 0x1db0e4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1db0e8: 0xc0761c4
    ctx->pc = 0x1DB0E8u;
    SET_GPR_U32(ctx, 31, 0x1DB0F0u);
    ctx->pc = 0x1DB0ECu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0F0u; }
        else if (ctx->pc != 0x1DB0F0u) { ctx->pc = 0x1DB0F0u; }
    }
    if (ctx->pc != 0x1DB0F0u) { return; }
    ctx->pc = 0x1DB0F0u;
    // 0x1db0f0: 0xae420058
    ctx->pc = 0x1db0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x1db0f4: 0x70008628
    ctx->pc = 0x1db0f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db0f8: 0x10000015
    ctx->pc = 0x1DB0F8u;
    {
        const bool branch_taken_0x1db0f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB0FCu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1db0f8) {
            ctx->pc = 0x1DB150u;
            goto label_1db150;
        }
    }
    ctx->pc = 0x1DB100u;
label_1db100:
    // 0x1db100: 0xc07f208
    ctx->pc = 0x1DB100u;
    SET_GPR_U32(ctx, 31, 0x1DB108u);
    ctx->pc = 0x1DB104u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB108u; }
        else if (ctx->pc != 0x1DB108u) { ctx->pc = 0x1DB108u; }
    }
    if (ctx->pc != 0x1DB108u) { return; }
    ctx->pc = 0x1DB108u;
    // 0x1db108: 0x70409e28
    ctx->pc = 0x1db108u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db10c: 0x260514c2
    ctx->pc = 0x1db10cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 5314));
    // 0x1db110: 0xc07f208
    ctx->pc = 0x1DB110u;
    SET_GPR_U32(ctx, 31, 0x1DB118u);
    ctx->pc = 0x1DB114u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB118u; }
        else if (ctx->pc != 0x1DB118u) { ctx->pc = 0x1DB118u; }
    }
    if (ctx->pc != 0x1DB118u) { return; }
    ctx->pc = 0x1DB118u;
    // 0x1db118: 0x8e430058
    ctx->pc = 0x1db118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1db11c: 0x70403e28
    ctx->pc = 0x1db11cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db120: 0x3c02001b
    ctx->pc = 0x1db120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1db124: 0x72603628
    ctx->pc = 0x1db124u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1db128: 0x344500b3
    ctx->pc = 0x1db128u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 179));
    // 0x1db12c: 0xc079e80
    ctx->pc = 0x1DB12Cu;
    SET_GPR_U32(ctx, 31, 0x1DB134u);
    ctx->pc = 0x1DB130u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB134u; }
        else if (ctx->pc != 0x1DB134u) { ctx->pc = 0x1DB134u; }
    }
    if (ctx->pc != 0x1DB134u) { return; }
    ctx->pc = 0x1DB134u;
    // 0x1db134: 0x3c023f00
    ctx->pc = 0x1db134u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1db138: 0x44826000
    ctx->pc = 0x1db138u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1db13c: 0x8e420058
    ctx->pc = 0x1db13cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1db140: 0xc079ea4
    ctx->pc = 0x1DB140u;
    SET_GPR_U32(ctx, 31, 0x1DB148u);
    ctx->pc = 0x1DB144u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAlphaRate__7CFcvTRSFf_0x1e7a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB148u; }
        else if (ctx->pc != 0x1DB148u) { ctx->pc = 0x1DB148u; }
    }
    if (ctx->pc != 0x1DB148u) { return; }
    ctx->pc = 0x1DB148u;
    // 0x1db148: 0x263100f0
    ctx->pc = 0x1db148u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1db14c: 0x26100001
    ctx->pc = 0x1db14cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1db150:
    // 0x1db150: 0x8e430004
    ctx->pc = 0x1db150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1db154: 0x203182a
    ctx->pc = 0x1db154u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1db158: 0x1460ffe9
    ctx->pc = 0x1DB158u;
    {
        const bool branch_taken_0x1db158 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DB15Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 5093));
        if (branch_taken_0x1db158) {
            ctx->pc = 0x1DB100u;
            goto label_1db100;
        }
    }
    ctx->pc = 0x1DB160u;
    // 0x1db160: 0x3c030027
    ctx->pc = 0x1db160u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1db164: 0x24638c28
    ctx->pc = 0x1db164u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937640));
    // 0x1db168: 0xc4620000
    ctx->pc = 0x1db168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db16c: 0xc4610004
    ctx->pc = 0x1db16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db170: 0xc4600008
    ctx->pc = 0x1db170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db174: 0xe6420114
    ctx->pc = 0x1db174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1db178: 0xe6410118
    ctx->pc = 0x1db178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1db17c: 0xe640011c
    ctx->pc = 0x1db17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1db180: 0x7bbf0040
    ctx->pc = 0x1db180u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db184: 0x7bb30030
    ctx->pc = 0x1db184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db188: 0x7bb20020
    ctx->pc = 0x1db188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db18c: 0x7bb10010
    ctx->pc = 0x1db18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db190: 0x7bb00000
    ctx->pc = 0x1db190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db194: 0x3e00008
    ctx->pc = 0x1DB194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB198u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB100u: goto label_1db100;
            case 0x1DB150u: goto label_1db150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB19Cu;
}

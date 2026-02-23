#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initDonjonSmokeC__9FcvEffectFv
// Address: 0x1db1a0 - 0x1db27c
void initDonjonSmokeC__9FcvEffectFv_0x1db1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initDonjonSmokeC__9FcvEffectFv");


    ctx->pc = 0x1db1a0u;

    // 0x1db1a0: 0x27bdffb0
    ctx->pc = 0x1db1a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1db1a4: 0x7fbf0040
    ctx->pc = 0x1db1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1db1a8: 0x7fb30030
    ctx->pc = 0x1db1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1db1ac: 0x7fb20020
    ctx->pc = 0x1db1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db1b0: 0x7fb10010
    ctx->pc = 0x1db1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db1b4: 0x7fb00000
    ctx->pc = 0x1db1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1db1b8: 0x3c024416
    ctx->pc = 0x1db1b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17430 << 16));
    // 0x1db1bc: 0xac820028
    ctx->pc = 0x1db1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x1db1c0: 0x240500dd
    ctx->pc = 0x1db1c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 221));
    // 0x1db1c4: 0x70809628
    ctx->pc = 0x1db1c4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1db1c8: 0xc0761c4
    ctx->pc = 0x1DB1C8u;
    SET_GPR_U32(ctx, 31, 0x1DB1D0u);
    ctx->pc = 0x1DB1CCu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1D0u; }
        else if (ctx->pc != 0x1DB1D0u) { ctx->pc = 0x1DB1D0u; }
    }
    if (ctx->pc != 0x1DB1D0u) { return; }
    ctx->pc = 0x1DB1D0u;
    // 0x1db1d0: 0xae420058
    ctx->pc = 0x1db1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x1db1d4: 0x70008628
    ctx->pc = 0x1db1d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db1d8: 0x10000015
    ctx->pc = 0x1DB1D8u;
    {
        const bool branch_taken_0x1db1d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB1DCu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1db1d8) {
            ctx->pc = 0x1DB230u;
            goto label_1db230;
        }
    }
    ctx->pc = 0x1DB1E0u;
label_1db1e0:
    // 0x1db1e0: 0xc07f208
    ctx->pc = 0x1DB1E0u;
    SET_GPR_U32(ctx, 31, 0x1DB1E8u);
    ctx->pc = 0x1DB1E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1E8u; }
        else if (ctx->pc != 0x1DB1E8u) { ctx->pc = 0x1DB1E8u; }
    }
    if (ctx->pc != 0x1DB1E8u) { return; }
    ctx->pc = 0x1DB1E8u;
    // 0x1db1e8: 0x70409e28
    ctx->pc = 0x1db1e8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db1ec: 0x260514c2
    ctx->pc = 0x1db1ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 5314));
    // 0x1db1f0: 0xc07f208
    ctx->pc = 0x1DB1F0u;
    SET_GPR_U32(ctx, 31, 0x1DB1F8u);
    ctx->pc = 0x1DB1F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1F8u; }
        else if (ctx->pc != 0x1DB1F8u) { ctx->pc = 0x1DB1F8u; }
    }
    if (ctx->pc != 0x1DB1F8u) { return; }
    ctx->pc = 0x1DB1F8u;
    // 0x1db1f8: 0x8e430058
    ctx->pc = 0x1db1f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1db1fc: 0x70403e28
    ctx->pc = 0x1db1fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db200: 0x3c02001b
    ctx->pc = 0x1db200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1db204: 0x72603628
    ctx->pc = 0x1db204u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1db208: 0x344500b3
    ctx->pc = 0x1db208u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 179));
    // 0x1db20c: 0xc079e80
    ctx->pc = 0x1DB20Cu;
    SET_GPR_U32(ctx, 31, 0x1DB214u);
    ctx->pc = 0x1DB210u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB214u; }
        else if (ctx->pc != 0x1DB214u) { ctx->pc = 0x1DB214u; }
    }
    if (ctx->pc != 0x1DB214u) { return; }
    ctx->pc = 0x1DB214u;
    // 0x1db214: 0x3c023f00
    ctx->pc = 0x1db214u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1db218: 0x44826000
    ctx->pc = 0x1db218u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1db21c: 0x8e420058
    ctx->pc = 0x1db21cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1db220: 0xc079ea4
    ctx->pc = 0x1DB220u;
    SET_GPR_U32(ctx, 31, 0x1DB228u);
    ctx->pc = 0x1DB224u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAlphaRate__7CFcvTRSFf_0x1e7a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB228u; }
        else if (ctx->pc != 0x1DB228u) { ctx->pc = 0x1DB228u; }
    }
    if (ctx->pc != 0x1DB228u) { return; }
    ctx->pc = 0x1DB228u;
    // 0x1db228: 0x263100f0
    ctx->pc = 0x1db228u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1db22c: 0x26100001
    ctx->pc = 0x1db22cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1db230:
    // 0x1db230: 0x8e430004
    ctx->pc = 0x1db230u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1db234: 0x203182a
    ctx->pc = 0x1db234u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1db238: 0x1460ffe9
    ctx->pc = 0x1DB238u;
    {
        const bool branch_taken_0x1db238 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DB23Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 5093));
        if (branch_taken_0x1db238) {
            ctx->pc = 0x1DB1E0u;
            goto label_1db1e0;
        }
    }
    ctx->pc = 0x1DB240u;
    // 0x1db240: 0x3c030027
    ctx->pc = 0x1db240u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1db244: 0x24638c38
    ctx->pc = 0x1db244u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937656));
    // 0x1db248: 0xc4620000
    ctx->pc = 0x1db248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db24c: 0xc4610004
    ctx->pc = 0x1db24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db250: 0xc4600008
    ctx->pc = 0x1db250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db254: 0xe6420114
    ctx->pc = 0x1db254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1db258: 0xe6410118
    ctx->pc = 0x1db258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1db25c: 0xe640011c
    ctx->pc = 0x1db25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1db260: 0x7bbf0040
    ctx->pc = 0x1db260u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db264: 0x7bb30030
    ctx->pc = 0x1db264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db268: 0x7bb20020
    ctx->pc = 0x1db268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db26c: 0x7bb10010
    ctx->pc = 0x1db26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db270: 0x7bb00000
    ctx->pc = 0x1db270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db274: 0x3e00008
    ctx->pc = 0x1DB274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB278u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB1E0u: goto label_1db1e0;
            case 0x1DB230u: goto label_1db230;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB27Cu;
}

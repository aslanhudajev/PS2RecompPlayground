#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss6B3xBomb__9FcvEffectFv
// Address: 0x1db520 - 0x1db644
void initBoss6B3xBomb__9FcvEffectFv_0x1db520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss6B3xBomb__9FcvEffectFv");


    ctx->pc = 0x1db520u;

    // 0x1db520: 0x27bdffb0
    ctx->pc = 0x1db520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1db524: 0x7fbf0040
    ctx->pc = 0x1db524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1db528: 0x7fb30030
    ctx->pc = 0x1db528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1db52c: 0x7fb20020
    ctx->pc = 0x1db52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db530: 0x7fb10010
    ctx->pc = 0x1db530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db534: 0x70809628
    ctx->pc = 0x1db534u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1db538: 0x2405002e
    ctx->pc = 0x1db538u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1db53c: 0xc0761c4
    ctx->pc = 0x1DB53Cu;
    SET_GPR_U32(ctx, 31, 0x1DB544u);
    ctx->pc = 0x1DB540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB544u; }
        else if (ctx->pc != 0x1DB544u) { ctx->pc = 0x1DB544u; }
    }
    if (ctx->pc != 0x1DB544u) { return; }
    ctx->pc = 0x1DB544u;
    // 0x1db544: 0xae420054
    ctx->pc = 0x1db544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1db548: 0x3c03420c
    ctx->pc = 0x1db548u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16908 << 16));
    // 0x1db54c: 0xae430028
    ctx->pc = 0x1db54cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1db550: 0x70008628
    ctx->pc = 0x1db550u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db554: 0x10000028
    ctx->pc = 0x1DB554u;
    {
        const bool branch_taken_0x1db554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB558u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1db554) {
            ctx->pc = 0x1DB5F8u;
            goto label_1db5f8;
        }
    }
    ctx->pc = 0x1DB55Cu;
label_1db55c:
    // 0x1db55c: 0xc07f208
    ctx->pc = 0x1DB55Cu;
    SET_GPR_U32(ctx, 31, 0x1DB564u);
    ctx->pc = 0x1DB560u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB564u; }
        else if (ctx->pc != 0x1DB564u) { ctx->pc = 0x1DB564u; }
    }
    if (ctx->pc != 0x1DB564u) { return; }
    ctx->pc = 0x1DB564u;
    // 0x1db564: 0x70409e28
    ctx->pc = 0x1db564u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db568: 0x260505c6
    ctx->pc = 0x1db568u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 1478));
    // 0x1db56c: 0xc07f208
    ctx->pc = 0x1DB56Cu;
    SET_GPR_U32(ctx, 31, 0x1DB574u);
    ctx->pc = 0x1DB570u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB574u; }
        else if (ctx->pc != 0x1DB574u) { ctx->pc = 0x1DB574u; }
    }
    if (ctx->pc != 0x1DB574u) { return; }
    ctx->pc = 0x1DB574u;
    // 0x1db574: 0x2a010015
    ctx->pc = 0x1db574u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 21));
    // 0x1db578: 0x1020000b
    ctx->pc = 0x1DB578u;
    {
        const bool branch_taken_0x1db578 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB57Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 25));
        if (branch_taken_0x1db578) {
            ctx->pc = 0x1DB5A8u;
            goto label_1db5a8;
        }
    }
    ctx->pc = 0x1DB580u;
    // 0x1db580: 0x8e440054
    ctx->pc = 0x1db580u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1db584: 0x3c030023
    ctx->pc = 0x1db584u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1db588: 0x72603628
    ctx->pc = 0x1db588u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1db58c: 0x34650046
    ctx->pc = 0x1db58cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 70));
    // 0x1db590: 0x70403e28
    ctx->pc = 0x1db590u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db594: 0xc079e80
    ctx->pc = 0x1DB594u;
    SET_GPR_U32(ctx, 31, 0x1DB59Cu);
    ctx->pc = 0x1DB598u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB59Cu; }
        else if (ctx->pc != 0x1DB59Cu) { ctx->pc = 0x1DB59Cu; }
    }
    if (ctx->pc != 0x1DB59Cu) { return; }
    ctx->pc = 0x1DB59Cu;
    // 0x1db59c: 0x10000015
    ctx->pc = 0x1DB59Cu;
    {
        const bool branch_taken_0x1db59c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB5A0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1db59c) {
            ctx->pc = 0x1DB5F4u;
            goto label_1db5f4;
        }
    }
    ctx->pc = 0x1DB5A4u;
    // 0x1db5a4: 0x2a010019
    ctx->pc = 0x1db5a4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 25));
label_1db5a8:
    // 0x1db5a8: 0x1020000a
    ctx->pc = 0x1DB5A8u;
    {
        const bool branch_taken_0x1db5a8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db5a8) {
            ctx->pc = 0x1DB5D4u;
            goto label_1db5d4;
        }
    }
    ctx->pc = 0x1DB5B0u;
    // 0x1db5b0: 0x8e440054
    ctx->pc = 0x1db5b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1db5b4: 0x3c030023
    ctx->pc = 0x1db5b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1db5b8: 0x72603628
    ctx->pc = 0x1db5b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1db5bc: 0x3465003c
    ctx->pc = 0x1db5bcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 60));
    // 0x1db5c0: 0x70403e28
    ctx->pc = 0x1db5c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db5c4: 0xc079e80
    ctx->pc = 0x1DB5C4u;
    SET_GPR_U32(ctx, 31, 0x1DB5CCu);
    ctx->pc = 0x1DB5C8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5CCu; }
        else if (ctx->pc != 0x1DB5CCu) { ctx->pc = 0x1DB5CCu; }
    }
    if (ctx->pc != 0x1DB5CCu) { return; }
    ctx->pc = 0x1DB5CCu;
    // 0x1db5cc: 0x10000008
    ctx->pc = 0x1DB5CCu;
    {
        const bool branch_taken_0x1db5cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db5cc) {
            ctx->pc = 0x1DB5F0u;
            goto label_1db5f0;
        }
    }
    ctx->pc = 0x1DB5D4u;
label_1db5d4:
    // 0x1db5d4: 0x8e440054
    ctx->pc = 0x1db5d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1db5d8: 0x3c030023
    ctx->pc = 0x1db5d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1db5dc: 0x72603628
    ctx->pc = 0x1db5dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1db5e0: 0x3465006b
    ctx->pc = 0x1db5e0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 107));
    // 0x1db5e4: 0x70403e28
    ctx->pc = 0x1db5e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db5e8: 0xc079e80
    ctx->pc = 0x1DB5E8u;
    SET_GPR_U32(ctx, 31, 0x1DB5F0u);
    ctx->pc = 0x1DB5ECu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5F0u; }
        else if (ctx->pc != 0x1DB5F0u) { ctx->pc = 0x1DB5F0u; }
    }
    if (ctx->pc != 0x1DB5F0u) { return; }
    ctx->pc = 0x1DB5F0u;
label_1db5f0:
    // 0x1db5f0: 0x263100f0
    ctx->pc = 0x1db5f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1db5f4:
    // 0x1db5f4: 0x26100001
    ctx->pc = 0x1db5f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1db5f8:
    // 0x1db5f8: 0x8e430000
    ctx->pc = 0x1db5f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1db5fc: 0x203182a
    ctx->pc = 0x1db5fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1db600: 0x1460ffd6
    ctx->pc = 0x1DB600u;
    {
        const bool branch_taken_0x1db600 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DB604u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 1432));
        if (branch_taken_0x1db600) {
            ctx->pc = 0x1DB55Cu;
            goto label_1db55c;
        }
    }
    ctx->pc = 0x1DB608u;
    // 0x1db608: 0x3c030027
    ctx->pc = 0x1db608u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1db60c: 0x24638c78
    ctx->pc = 0x1db60cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937720));
    // 0x1db610: 0xc4620000
    ctx->pc = 0x1db610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db614: 0xc4610004
    ctx->pc = 0x1db614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db618: 0xc4600008
    ctx->pc = 0x1db618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db61c: 0xe6420114
    ctx->pc = 0x1db61cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1db620: 0xe6410118
    ctx->pc = 0x1db620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1db624: 0xe640011c
    ctx->pc = 0x1db624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1db628: 0x7bbf0040
    ctx->pc = 0x1db628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db62c: 0x7bb30030
    ctx->pc = 0x1db62cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db630: 0x7bb20020
    ctx->pc = 0x1db630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db634: 0x7bb10010
    ctx->pc = 0x1db634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db638: 0x7bb00000
    ctx->pc = 0x1db638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db63c: 0x3e00008
    ctx->pc = 0x1DB63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB640u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB55Cu: goto label_1db55c;
            case 0x1DB5A8u: goto label_1db5a8;
            case 0x1DB5D4u: goto label_1db5d4;
            case 0x1DB5F0u: goto label_1db5f0;
            case 0x1DB5F4u: goto label_1db5f4;
            case 0x1DB5F8u: goto label_1db5f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB644u;
}

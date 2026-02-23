#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss5XHensinSibuki__9FcvEffectFv
// Address: 0x1de5f0 - 0x1de6f4
void initBoss5XHensinSibuki__9FcvEffectFv_0x1de5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss5XHensinSibuki__9FcvEffectFv");


    ctx->pc = 0x1de5f0u;

    // 0x1de5f0: 0x27bdffb0
    ctx->pc = 0x1de5f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1de5f4: 0x7fbf0040
    ctx->pc = 0x1de5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1de5f8: 0x7fb30030
    ctx->pc = 0x1de5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1de5fc: 0x7fb20020
    ctx->pc = 0x1de5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1de600: 0x7fb10010
    ctx->pc = 0x1de600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de604: 0x70809628
    ctx->pc = 0x1de604u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1de608: 0x2405003c
    ctx->pc = 0x1de608u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1de60c: 0xc0761c4
    ctx->pc = 0x1DE60Cu;
    SET_GPR_U32(ctx, 31, 0x1DE614u);
    ctx->pc = 0x1DE610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE614u; }
        else if (ctx->pc != 0x1DE614u) { ctx->pc = 0x1DE614u; }
    }
    if (ctx->pc != 0x1DE614u) { return; }
    ctx->pc = 0x1DE614u;
    // 0x1de614: 0xae420054
    ctx->pc = 0x1de614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1de618: 0x3c024396
    ctx->pc = 0x1de618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17302 << 16));
    // 0x1de61c: 0xae420028
    ctx->pc = 0x1de61cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1de620: 0x70008628
    ctx->pc = 0x1de620u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de624: 0x70008e28
    ctx->pc = 0x1de624u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1de628:
    // 0x1de628: 0x260509f7
    ctx->pc = 0x1de628u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2551));
    // 0x1de62c: 0xc07f208
    ctx->pc = 0x1DE62Cu;
    SET_GPR_U32(ctx, 31, 0x1DE634u);
    ctx->pc = 0x1DE630u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE634u; }
        else if (ctx->pc != 0x1DE634u) { ctx->pc = 0x1DE634u; }
    }
    if (ctx->pc != 0x1DE634u) { return; }
    ctx->pc = 0x1DE634u;
    // 0x1de634: 0x2a01003b
    ctx->pc = 0x1de634u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 59));
    // 0x1de638: 0x1020000d
    ctx->pc = 0x1DE638u;
    {
        const bool branch_taken_0x1de638 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE63Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1de638) {
            ctx->pc = 0x1DE670u;
            goto label_1de670;
        }
    }
    ctx->pc = 0x1DE640u;
    // 0x1de640: 0x27848d4c
    ctx->pc = 0x1de640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1de644: 0xc07f208
    ctx->pc = 0x1DE644u;
    SET_GPR_U32(ctx, 31, 0x1DE64Cu);
    ctx->pc = 0x1DE648u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2622));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE64Cu; }
        else if (ctx->pc != 0x1DE64Cu) { ctx->pc = 0x1DE64Cu; }
    }
    if (ctx->pc != 0x1DE64Cu) { return; }
    ctx->pc = 0x1DE64Cu;
    // 0x1de64c: 0x8e440054
    ctx->pc = 0x1de64cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1de650: 0x3c030021
    ctx->pc = 0x1de650u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1de654: 0x72603628
    ctx->pc = 0x1de654u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1de658: 0x34650010
    ctx->pc = 0x1de658u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 16));
    // 0x1de65c: 0x70403e28
    ctx->pc = 0x1de65cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de660: 0xc079e80
    ctx->pc = 0x1DE660u;
    SET_GPR_U32(ctx, 31, 0x1DE668u);
    ctx->pc = 0x1DE664u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE668u; }
        else if (ctx->pc != 0x1DE668u) { ctx->pc = 0x1DE668u; }
    }
    if (ctx->pc != 0x1DE668u) { return; }
    ctx->pc = 0x1DE668u;
    // 0x1de668: 0x10000010
    ctx->pc = 0x1DE668u;
    {
        const bool branch_taken_0x1de668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE66Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1de668) {
            ctx->pc = 0x1DE6ACu;
            goto label_1de6ac;
        }
    }
    ctx->pc = 0x1DE670u;
label_1de670:
    // 0x1de670: 0x2a010041
    ctx->pc = 0x1de670u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 65));
    // 0x1de674: 0x1420000c
    ctx->pc = 0x1DE674u;
    {
        const bool branch_taken_0x1de674 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DE678u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 70));
        if (branch_taken_0x1de674) {
            ctx->pc = 0x1DE6A8u;
            goto label_1de6a8;
        }
    }
    ctx->pc = 0x1DE67Cu;
    // 0x1de67c: 0x1420000a
    ctx->pc = 0x1DE67Cu;
    {
        const bool branch_taken_0x1de67c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DE680u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
        if (branch_taken_0x1de67c) {
            ctx->pc = 0x1DE6A8u;
            goto label_1de6a8;
        }
    }
    ctx->pc = 0x1DE684u;
    // 0x1de684: 0xc07f208
    ctx->pc = 0x1DE684u;
    SET_GPR_U32(ctx, 31, 0x1DE68Cu);
    ctx->pc = 0x1DE688u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2624));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE68Cu; }
        else if (ctx->pc != 0x1DE68Cu) { ctx->pc = 0x1DE68Cu; }
    }
    if (ctx->pc != 0x1DE68Cu) { return; }
    ctx->pc = 0x1DE68Cu;
    // 0x1de68c: 0x8e440054
    ctx->pc = 0x1de68cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1de690: 0x3c030021
    ctx->pc = 0x1de690u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1de694: 0x72603628
    ctx->pc = 0x1de694u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1de698: 0x34650011
    ctx->pc = 0x1de698u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 17));
    // 0x1de69c: 0x70403e28
    ctx->pc = 0x1de69cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de6a0: 0xc079e80
    ctx->pc = 0x1DE6A0u;
    SET_GPR_U32(ctx, 31, 0x1DE6A8u);
    ctx->pc = 0x1DE6A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14160));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6A8u; }
        else if (ctx->pc != 0x1DE6A8u) { ctx->pc = 0x1DE6A8u; }
    }
    if (ctx->pc != 0x1DE6A8u) { return; }
    ctx->pc = 0x1DE6A8u;
label_1de6a8:
    // 0x1de6a8: 0x26100001
    ctx->pc = 0x1de6a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1de6ac:
    // 0x1de6ac: 0x2a030047
    ctx->pc = 0x1de6acu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 71));
    // 0x1de6b0: 0x1460ffdd
    ctx->pc = 0x1DE6B0u;
    {
        const bool branch_taken_0x1de6b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DE6B4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1de6b0) {
            ctx->pc = 0x1DE628u;
            goto label_1de628;
        }
    }
    ctx->pc = 0x1DE6B8u;
    // 0x1de6b8: 0x3c030027
    ctx->pc = 0x1de6b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1de6bc: 0x24639788
    ctx->pc = 0x1de6bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940552));
    // 0x1de6c0: 0xc4620000
    ctx->pc = 0x1de6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de6c4: 0xc4610004
    ctx->pc = 0x1de6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de6c8: 0xc4600008
    ctx->pc = 0x1de6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de6cc: 0xe6420114
    ctx->pc = 0x1de6ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1de6d0: 0xe6410118
    ctx->pc = 0x1de6d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1de6d4: 0xe640011c
    ctx->pc = 0x1de6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1de6d8: 0x7bbf0040
    ctx->pc = 0x1de6d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de6dc: 0x7bb30030
    ctx->pc = 0x1de6dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de6e0: 0x7bb20020
    ctx->pc = 0x1de6e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de6e4: 0x7bb10010
    ctx->pc = 0x1de6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de6e8: 0x7bb00000
    ctx->pc = 0x1de6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de6ec: 0x3e00008
    ctx->pc = 0x1DE6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE6F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE628u: goto label_1de628;
            case 0x1DE670u: goto label_1de670;
            case 0x1DE6A8u: goto label_1de6a8;
            case 0x1DE6ACu: goto label_1de6ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE6F4u;
}

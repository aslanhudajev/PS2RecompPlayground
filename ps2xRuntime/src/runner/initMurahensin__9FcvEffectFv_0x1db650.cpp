#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initMurahensin__9FcvEffectFv
// Address: 0x1db650 - 0x1db728
void initMurahensin__9FcvEffectFv_0x1db650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initMurahensin__9FcvEffectFv");


    ctx->pc = 0x1db650u;

    // 0x1db650: 0x27bdffc0
    ctx->pc = 0x1db650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1db654: 0x7fbf0030
    ctx->pc = 0x1db654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1db658: 0x7fb20020
    ctx->pc = 0x1db658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db65c: 0x7fb10010
    ctx->pc = 0x1db65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db660: 0x70809628
    ctx->pc = 0x1db660u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1db664: 0x24050009
    ctx->pc = 0x1db664u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1db668: 0xc0761c4
    ctx->pc = 0x1DB668u;
    SET_GPR_U32(ctx, 31, 0x1DB670u);
    ctx->pc = 0x1DB66Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB670u; }
        else if (ctx->pc != 0x1DB670u) { ctx->pc = 0x1DB670u; }
    }
    if (ctx->pc != 0x1DB670u) { return; }
    ctx->pc = 0x1DB670u;
    // 0x1db670: 0xae420054
    ctx->pc = 0x1db670u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1db674: 0x3c0342a0
    ctx->pc = 0x1db674u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17056 << 16));
    // 0x1db678: 0xae430028
    ctx->pc = 0x1db678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1db67c: 0x70008628
    ctx->pc = 0x1db67cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db680: 0x10000017
    ctx->pc = 0x1DB680u;
    {
        const bool branch_taken_0x1db680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB684u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1db680) {
            ctx->pc = 0x1DB6E0u;
            goto label_1db6e0;
        }
    }
    ctx->pc = 0x1DB688u;
label_1db688:
    // 0x1db688: 0xc07f208
    ctx->pc = 0x1DB688u;
    SET_GPR_U32(ctx, 31, 0x1DB690u);
    ctx->pc = 0x1DB68Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB690u; }
        else if (ctx->pc != 0x1DB690u) { ctx->pc = 0x1DB690u; }
    }
    if (ctx->pc != 0x1DB690u) { return; }
    ctx->pc = 0x1DB690u;
    // 0x1db690: 0x1600000a
    ctx->pc = 0x1DB690u;
    {
        const bool branch_taken_0x1db690 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1db690) {
            ctx->pc = 0x1DB6BCu;
            goto label_1db6bc;
        }
    }
    ctx->pc = 0x1DB698u;
    // 0x1db698: 0x8e440054
    ctx->pc = 0x1db698u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1db69c: 0x3c03001b
    ctx->pc = 0x1db69cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1db6a0: 0x346500af
    ctx->pc = 0x1db6a0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 175));
    // 0x1db6a4: 0x70403628
    ctx->pc = 0x1db6a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db6a8: 0x70003e28
    ctx->pc = 0x1db6a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db6ac: 0xc079e80
    ctx->pc = 0x1DB6ACu;
    SET_GPR_U32(ctx, 31, 0x1DB6B4u);
    ctx->pc = 0x1DB6B0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB6B4u; }
        else if (ctx->pc != 0x1DB6B4u) { ctx->pc = 0x1DB6B4u; }
    }
    if (ctx->pc != 0x1DB6B4u) { return; }
    ctx->pc = 0x1DB6B4u;
    // 0x1db6b4: 0x10000009
    ctx->pc = 0x1DB6B4u;
    {
        const bool branch_taken_0x1db6b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB6B8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1db6b4) {
            ctx->pc = 0x1DB6DCu;
            goto label_1db6dc;
        }
    }
    ctx->pc = 0x1DB6BCu;
label_1db6bc:
    // 0x1db6bc: 0x8e440054
    ctx->pc = 0x1db6bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1db6c0: 0x3c030001
    ctx->pc = 0x1db6c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x1db6c4: 0x34650012
    ctx->pc = 0x1db6c4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 18));
    // 0x1db6c8: 0x70403628
    ctx->pc = 0x1db6c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db6cc: 0x70003e28
    ctx->pc = 0x1db6ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db6d0: 0xc079e80
    ctx->pc = 0x1DB6D0u;
    SET_GPR_U32(ctx, 31, 0x1DB6D8u);
    ctx->pc = 0x1DB6D4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB6D8u; }
        else if (ctx->pc != 0x1DB6D8u) { ctx->pc = 0x1DB6D8u; }
    }
    if (ctx->pc != 0x1DB6D8u) { return; }
    ctx->pc = 0x1DB6D8u;
    // 0x1db6d8: 0x263100f0
    ctx->pc = 0x1db6d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1db6dc:
    // 0x1db6dc: 0x26100001
    ctx->pc = 0x1db6dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1db6e0:
    // 0x1db6e0: 0x8e430000
    ctx->pc = 0x1db6e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1db6e4: 0x203182a
    ctx->pc = 0x1db6e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1db6e8: 0x1460ffe7
    ctx->pc = 0x1DB6E8u;
    {
        const bool branch_taken_0x1db6e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DB6ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 3977));
        if (branch_taken_0x1db6e8) {
            ctx->pc = 0x1DB688u;
            goto label_1db688;
        }
    }
    ctx->pc = 0x1DB6F0u;
    // 0x1db6f0: 0x3c030027
    ctx->pc = 0x1db6f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1db6f4: 0x24638c88
    ctx->pc = 0x1db6f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937736));
    // 0x1db6f8: 0xc4620000
    ctx->pc = 0x1db6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db6fc: 0xc4610004
    ctx->pc = 0x1db6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db700: 0xc4600008
    ctx->pc = 0x1db700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db704: 0xe6420114
    ctx->pc = 0x1db704u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1db708: 0xe6410118
    ctx->pc = 0x1db708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1db70c: 0xe640011c
    ctx->pc = 0x1db70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1db710: 0x7bbf0030
    ctx->pc = 0x1db710u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db714: 0x7bb20020
    ctx->pc = 0x1db714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db718: 0x7bb10010
    ctx->pc = 0x1db718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db71c: 0x7bb00000
    ctx->pc = 0x1db71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db720: 0x3e00008
    ctx->pc = 0x1DB720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB724u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB688u: goto label_1db688;
            case 0x1DB6BCu: goto label_1db6bc;
            case 0x1DB6DCu: goto label_1db6dc;
            case 0x1DB6E0u: goto label_1db6e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB728u;
}

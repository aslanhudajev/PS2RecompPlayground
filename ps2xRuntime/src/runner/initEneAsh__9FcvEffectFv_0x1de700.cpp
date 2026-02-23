#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initEneAsh__9FcvEffectFv
// Address: 0x1de700 - 0x1de7b0
void initEneAsh__9FcvEffectFv_0x1de700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initEneAsh__9FcvEffectFv");


    ctx->pc = 0x1de700u;

    // 0x1de700: 0x27bdffb0
    ctx->pc = 0x1de700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1de704: 0x7fbf0040
    ctx->pc = 0x1de704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1de708: 0x7fb30030
    ctx->pc = 0x1de708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1de70c: 0x7fb20020
    ctx->pc = 0x1de70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1de710: 0x7fb10010
    ctx->pc = 0x1de710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de714: 0x7fb00000
    ctx->pc = 0x1de714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1de718: 0x70808628
    ctx->pc = 0x1de718u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1de71c: 0xc0761c4
    ctx->pc = 0x1DE71Cu;
    SET_GPR_U32(ctx, 31, 0x1DE724u);
    ctx->pc = 0x1DE720u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE724u; }
        else if (ctx->pc != 0x1DE724u) { ctx->pc = 0x1DE724u; }
    }
    if (ctx->pc != 0x1DE724u) { return; }
    ctx->pc = 0x1DE724u;
    // 0x1de724: 0xae020054
    ctx->pc = 0x1de724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1de728: 0x3c0242f0
    ctx->pc = 0x1de728u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17136 << 16));
    // 0x1de72c: 0xae020028
    ctx->pc = 0x1de72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1de730: 0x3c020027
    ctx->pc = 0x1de730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1de734: 0x70008e28
    ctx->pc = 0x1de734u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de738: 0x245297a0
    ctx->pc = 0x1de738u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294940576));
    // 0x1de73c: 0x70009e28
    ctx->pc = 0x1de73cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1de740:
    // 0x1de740: 0x8e030054
    ctx->pc = 0x1de740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1de744: 0x8e460000
    ctx->pc = 0x1de744u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1de748: 0x3c02001b
    ctx->pc = 0x1de748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1de74c: 0x34450002
    ctx->pc = 0x1de74cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 2));
    // 0x1de750: 0x3c020027
    ctx->pc = 0x1de750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1de754: 0x24478460
    ctx->pc = 0x1de754u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294935648));
    // 0x1de758: 0xc079e80
    ctx->pc = 0x1DE758u;
    SET_GPR_U32(ctx, 31, 0x1DE760u);
    ctx->pc = 0x1DE75Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE760u; }
        else if (ctx->pc != 0x1DE760u) { ctx->pc = 0x1DE760u; }
    }
    if (ctx->pc != 0x1DE760u) { return; }
    ctx->pc = 0x1DE760u;
    // 0x1de760: 0x26310001
    ctx->pc = 0x1de760u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1de764: 0x2a230010
    ctx->pc = 0x1de764u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 16));
    // 0x1de768: 0x26520004
    ctx->pc = 0x1de768u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1de76c: 0x1460fff4
    ctx->pc = 0x1DE76Cu;
    {
        const bool branch_taken_0x1de76c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DE770u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 240));
        if (branch_taken_0x1de76c) {
            ctx->pc = 0x1DE740u;
            goto label_1de740;
        }
    }
    ctx->pc = 0x1DE774u;
    // 0x1de774: 0x3c030027
    ctx->pc = 0x1de774u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1de778: 0x246397e0
    ctx->pc = 0x1de778u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940640));
    // 0x1de77c: 0xc4620000
    ctx->pc = 0x1de77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de780: 0xc4610004
    ctx->pc = 0x1de780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de784: 0xc4600008
    ctx->pc = 0x1de784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de788: 0xe6020114
    ctx->pc = 0x1de788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1de78c: 0xe6010118
    ctx->pc = 0x1de78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1de790: 0xe600011c
    ctx->pc = 0x1de790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1de794: 0x7bbf0040
    ctx->pc = 0x1de794u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de798: 0x7bb30030
    ctx->pc = 0x1de798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de79c: 0x7bb20020
    ctx->pc = 0x1de79cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de7a0: 0x7bb10010
    ctx->pc = 0x1de7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de7a4: 0x7bb00000
    ctx->pc = 0x1de7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de7a8: 0x3e00008
    ctx->pc = 0x1DE7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE7ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE740u: goto label_1de740;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE7B0u;
}

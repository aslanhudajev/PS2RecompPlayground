#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: disp_gun_sight_adj__FP11Gun_Act_tag
// Address: 0x1ec840 - 0x1ec948
void disp_gun_sight_adj__FP11Gun_Act_tag_0x1ec840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("disp_gun_sight_adj__FP11Gun_Act_tag");


    ctx->pc = 0x1ec840u;

    // 0x1ec840: 0x27bdff40
    ctx->pc = 0x1ec840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ec844: 0x7fbf0010
    ctx->pc = 0x1ec844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ec848: 0x7fb00000
    ctx->pc = 0x1ec848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec84c: 0x8c83001c
    ctx->pc = 0x1ec84cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ec850: 0x18600039
    ctx->pc = 0x1EC850u;
    {
        const bool branch_taken_0x1ec850 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1EC854u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ec850) {
            ctx->pc = 0x1EC938u;
            goto label_1ec938;
        }
    }
    ctx->pc = 0x1EC858u;
    // 0x1ec858: 0x8e070000
    ctx->pc = 0x1ec858u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec85c: 0x3c023dcc
    ctx->pc = 0x1ec85cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
    // 0x1ec860: 0x3446cccd
    ctx->pc = 0x1ec860u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1ec864: 0x278483c8
    ctx->pc = 0x1ec864u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294935496));
    // 0x1ec868: 0x3c053f80
    ctx->pc = 0x1ec868u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x1ec86c: 0x2403ffff
    ctx->pc = 0x1ec86cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ec870: 0x71080
    ctx->pc = 0x1ec870u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1ec874: 0x821021
    ctx->pc = 0x1ec874u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ec878: 0x8c470000
    ctx->pc = 0x1ec878u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec87c: 0x27a40020
    ctx->pc = 0x1ec87cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec880: 0xafa70068
    ctx->pc = 0x1ec880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x1ec884: 0xc600001c
    ctx->pc = 0x1ec884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec888: 0x2402000a
    ctx->pc = 0x1ec888u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ec88c: 0x46800020
    ctx->pc = 0x1ec88cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ec890: 0xe7a0002c
    ctx->pc = 0x1ec890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1ec894: 0xc6000020
    ctx->pc = 0x1ec894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec898: 0x46800020
    ctx->pc = 0x1ec898u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ec89c: 0xe7a00030
    ctx->pc = 0x1ec89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ec8a0: 0xafa60034
    ctx->pc = 0x1ec8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x1ec8a4: 0xafa50038
    ctx->pc = 0x1ec8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1ec8a8: 0xafa5003c
    ctx->pc = 0x1ec8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x1ec8ac: 0xafa00044
    ctx->pc = 0x1ec8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1ec8b0: 0xafa00040
    ctx->pc = 0x1ec8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1ec8b4: 0xafa5004c
    ctx->pc = 0x1ec8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
    // 0x1ec8b8: 0xafa50048
    ctx->pc = 0x1ec8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1ec8bc: 0xafa00050
    ctx->pc = 0x1ec8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1ec8c0: 0xafa50054
    ctx->pc = 0x1ec8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
    // 0x1ec8c4: 0xafa30058
    ctx->pc = 0x1ec8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1ec8c8: 0xc085bd8
    ctx->pc = 0x1EC8C8u;
    SET_GPR_U32(ctx, 31, 0x1EC8D0u);
    ctx->pc = 0x1EC8CCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8D0u; }
        else if (ctx->pc != 0x1EC8D0u) { ctx->pc = 0x1EC8D0u; }
    }
    if (ctx->pc != 0x1EC8D0u) { return; }
    ctx->pc = 0x1EC8D0u;
    // 0x1ec8d0: 0x240208c6
    ctx->pc = 0x1ec8d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2246));
    // 0x1ec8d4: 0xafa200b8
    ctx->pc = 0x1ec8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1ec8d8: 0xc600001c
    ctx->pc = 0x1ec8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec8dc: 0x3c023dcc
    ctx->pc = 0x1ec8dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
    // 0x1ec8e0: 0x3446cccd
    ctx->pc = 0x1ec8e0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1ec8e4: 0x3c053f80
    ctx->pc = 0x1ec8e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x1ec8e8: 0x2403ffff
    ctx->pc = 0x1ec8e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ec8ec: 0x2402000a
    ctx->pc = 0x1ec8ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ec8f0: 0x46800020
    ctx->pc = 0x1ec8f0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ec8f4: 0x27a40070
    ctx->pc = 0x1ec8f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ec8f8: 0xe7a0007c
    ctx->pc = 0x1ec8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1ec8fc: 0xc6000020
    ctx->pc = 0x1ec8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec900: 0x46800020
    ctx->pc = 0x1ec900u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ec904: 0xe7a00080
    ctx->pc = 0x1ec904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1ec908: 0xafa60084
    ctx->pc = 0x1ec908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
    // 0x1ec90c: 0xafa50088
    ctx->pc = 0x1ec90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x1ec910: 0xafa5008c
    ctx->pc = 0x1ec910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 5));
    // 0x1ec914: 0xafa00094
    ctx->pc = 0x1ec914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1ec918: 0xafa00090
    ctx->pc = 0x1ec918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1ec91c: 0xafa5009c
    ctx->pc = 0x1ec91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 5));
    // 0x1ec920: 0xafa50098
    ctx->pc = 0x1ec920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x1ec924: 0xafa000a0
    ctx->pc = 0x1ec924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1ec928: 0xafa500a4
    ctx->pc = 0x1ec928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
    // 0x1ec92c: 0xafa300a8
    ctx->pc = 0x1ec92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x1ec930: 0xc085bd8
    ctx->pc = 0x1EC930u;
    SET_GPR_U32(ctx, 31, 0x1EC938u);
    ctx->pc = 0x1EC934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC938u; }
        else if (ctx->pc != 0x1EC938u) { ctx->pc = 0x1EC938u; }
    }
    if (ctx->pc != 0x1EC938u) { return; }
    ctx->pc = 0x1EC938u;
label_1ec938:
    // 0x1ec938: 0x7bbf0010
    ctx->pc = 0x1ec938u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec93c: 0x7bb00000
    ctx->pc = 0x1ec93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec940: 0x3e00008
    ctx->pc = 0x1EC940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC944u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC938u: goto label_1ec938;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC948u;
}

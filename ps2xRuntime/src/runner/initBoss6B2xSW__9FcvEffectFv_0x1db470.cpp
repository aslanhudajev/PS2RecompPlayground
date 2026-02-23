#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss6B2xSW__9FcvEffectFv
// Address: 0x1db470 - 0x1db520
void initBoss6B2xSW__9FcvEffectFv_0x1db470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss6B2xSW__9FcvEffectFv");


    ctx->pc = 0x1db470u;

    // 0x1db470: 0x27bdffc0
    ctx->pc = 0x1db470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1db474: 0x7fbf0030
    ctx->pc = 0x1db474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1db478: 0x7fb20020
    ctx->pc = 0x1db478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db47c: 0x7fb10010
    ctx->pc = 0x1db47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db480: 0x70809628
    ctx->pc = 0x1db480u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1db484: 0x2405000e
    ctx->pc = 0x1db484u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1db488: 0xc0761c4
    ctx->pc = 0x1DB488u;
    SET_GPR_U32(ctx, 31, 0x1DB490u);
    ctx->pc = 0x1DB48Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB490u; }
        else if (ctx->pc != 0x1DB490u) { ctx->pc = 0x1DB490u; }
    }
    if (ctx->pc != 0x1DB490u) { return; }
    ctx->pc = 0x1DB490u;
    // 0x1db490: 0xae420054
    ctx->pc = 0x1db490u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1db494: 0x3c034140
    ctx->pc = 0x1db494u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16704 << 16));
    // 0x1db498: 0xae430028
    ctx->pc = 0x1db498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1db49c: 0x70008628
    ctx->pc = 0x1db49cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db4a0: 0x1000000d
    ctx->pc = 0x1DB4A0u;
    {
        const bool branch_taken_0x1db4a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB4A4u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1db4a0) {
            ctx->pc = 0x1DB4D8u;
            goto label_1db4d8;
        }
    }
    ctx->pc = 0x1DB4A8u;
label_1db4a8:
    // 0x1db4a8: 0xc07f208
    ctx->pc = 0x1DB4A8u;
    SET_GPR_U32(ctx, 31, 0x1DB4B0u);
    ctx->pc = 0x1DB4ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB4B0u; }
        else if (ctx->pc != 0x1DB4B0u) { ctx->pc = 0x1DB4B0u; }
    }
    if (ctx->pc != 0x1DB4B0u) { return; }
    ctx->pc = 0x1DB4B0u;
    // 0x1db4b0: 0x8e440054
    ctx->pc = 0x1db4b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1db4b4: 0x3c030023
    ctx->pc = 0x1db4b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1db4b8: 0x3465008a
    ctx->pc = 0x1db4b8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 138));
    // 0x1db4bc: 0x70403628
    ctx->pc = 0x1db4bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db4c0: 0x70003e28
    ctx->pc = 0x1db4c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db4c4: 0xc079e80
    ctx->pc = 0x1DB4C4u;
    SET_GPR_U32(ctx, 31, 0x1DB4CCu);
    ctx->pc = 0x1DB4C8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB4CCu; }
        else if (ctx->pc != 0x1DB4CCu) { ctx->pc = 0x1DB4CCu; }
    }
    if (ctx->pc != 0x1DB4CCu) { return; }
    ctx->pc = 0x1DB4CCu;
    // 0x1db4cc: 0x263100f0
    ctx->pc = 0x1db4ccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1db4d0: 0x26100001
    ctx->pc = 0x1db4d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1db4d4: 0x0
    ctx->pc = 0x1db4d4u;
    // NOP
label_1db4d8:
    // 0x1db4d8: 0x8e430000
    ctx->pc = 0x1db4d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1db4dc: 0x203182a
    ctx->pc = 0x1db4dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1db4e0: 0x1460fff1
    ctx->pc = 0x1DB4E0u;
    {
        const bool branch_taken_0x1db4e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DB4E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 1524));
        if (branch_taken_0x1db4e0) {
            ctx->pc = 0x1DB4A8u;
            goto label_1db4a8;
        }
    }
    ctx->pc = 0x1DB4E8u;
    // 0x1db4e8: 0x3c030027
    ctx->pc = 0x1db4e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1db4ec: 0x24638c68
    ctx->pc = 0x1db4ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937704));
    // 0x1db4f0: 0xc4620000
    ctx->pc = 0x1db4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db4f4: 0xc4610004
    ctx->pc = 0x1db4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db4f8: 0xc4600008
    ctx->pc = 0x1db4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db4fc: 0xe6420114
    ctx->pc = 0x1db4fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1db500: 0xe6410118
    ctx->pc = 0x1db500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1db504: 0xe640011c
    ctx->pc = 0x1db504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1db508: 0x7bbf0030
    ctx->pc = 0x1db508u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db50c: 0x7bb20020
    ctx->pc = 0x1db50cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db510: 0x7bb10010
    ctx->pc = 0x1db510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db514: 0x7bb00000
    ctx->pc = 0x1db514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db518: 0x3e00008
    ctx->pc = 0x1DB518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB51Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB4A8u: goto label_1db4a8;
            case 0x1DB4D8u: goto label_1db4d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB520u;
}

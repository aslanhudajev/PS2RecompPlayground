#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss5HamonS__9FcvEffectFv
// Address: 0x1dd0c0 - 0x1dd150
void initBoss5HamonS__9FcvEffectFv_0x1dd0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss5HamonS__9FcvEffectFv");


    ctx->pc = 0x1dd0c0u;

    // 0x1dd0c0: 0x27bdffd0
    ctx->pc = 0x1dd0c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd0c4: 0x7fbf0020
    ctx->pc = 0x1dd0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1dd0c8: 0x7fb10010
    ctx->pc = 0x1dd0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd0cc: 0x70808e28
    ctx->pc = 0x1dd0ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dd0d0: 0x24050001
    ctx->pc = 0x1dd0d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd0d4: 0xc0761c4
    ctx->pc = 0x1DD0D4u;
    SET_GPR_U32(ctx, 31, 0x1DD0DCu);
    ctx->pc = 0x1DD0D8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0DCu; }
        else if (ctx->pc != 0x1DD0DCu) { ctx->pc = 0x1DD0DCu; }
    }
    if (ctx->pc != 0x1DD0DCu) { return; }
    ctx->pc = 0x1DD0DCu;
    // 0x1dd0dc: 0xae220054
    ctx->pc = 0x1dd0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x1dd0e0: 0x3c024270
    ctx->pc = 0x1dd0e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17008 << 16));
    // 0x1dd0e4: 0xae220028
    ctx->pc = 0x1dd0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1dd0e8: 0x27848d4c
    ctx->pc = 0x1dd0e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd0ec: 0xc07f208
    ctx->pc = 0x1DD0ECu;
    SET_GPR_U32(ctx, 31, 0x1DD0F4u);
    ctx->pc = 0x1DD0F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8369));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0F4u; }
        else if (ctx->pc != 0x1DD0F4u) { ctx->pc = 0x1DD0F4u; }
    }
    if (ctx->pc != 0x1DD0F4u) { return; }
    ctx->pc = 0x1DD0F4u;
    // 0x1dd0f4: 0x70408628
    ctx->pc = 0x1dd0f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd0f8: 0x27848d4c
    ctx->pc = 0x1dd0f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd0fc: 0xc07f208
    ctx->pc = 0x1DD0FCu;
    SET_GPR_U32(ctx, 31, 0x1DD104u);
    ctx->pc = 0x1DD100u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8370));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD104u; }
        else if (ctx->pc != 0x1DD104u) { ctx->pc = 0x1DD104u; }
    }
    if (ctx->pc != 0x1DD104u) { return; }
    ctx->pc = 0x1DD104u;
    // 0x1dd104: 0x8e240054
    ctx->pc = 0x1dd104u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1dd108: 0x3c030021
    ctx->pc = 0x1dd108u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1dd10c: 0x72003628
    ctx->pc = 0x1dd10cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dd110: 0x3465003c
    ctx->pc = 0x1dd110u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 60));
    // 0x1dd114: 0xc079e80
    ctx->pc = 0x1DD114u;
    SET_GPR_U32(ctx, 31, 0x1DD11Cu);
    ctx->pc = 0x1DD118u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD11Cu; }
        else if (ctx->pc != 0x1DD11Cu) { ctx->pc = 0x1DD11Cu; }
    }
    if (ctx->pc != 0x1DD11Cu) { return; }
    ctx->pc = 0x1DD11Cu;
    // 0x1dd11c: 0x3c030027
    ctx->pc = 0x1dd11cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dd120: 0x24638de8
    ctx->pc = 0x1dd120u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938088));
    // 0x1dd124: 0xc4620000
    ctx->pc = 0x1dd124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd128: 0xc4610004
    ctx->pc = 0x1dd128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd12c: 0xc4600008
    ctx->pc = 0x1dd12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd130: 0xe6220114
    ctx->pc = 0x1dd130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x1dd134: 0xe6210118
    ctx->pc = 0x1dd134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    // 0x1dd138: 0xe620011c
    ctx->pc = 0x1dd138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x1dd13c: 0x7bbf0020
    ctx->pc = 0x1dd13cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd140: 0x7bb10010
    ctx->pc = 0x1dd140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd144: 0x7bb00000
    ctx->pc = 0x1dd144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd148: 0x3e00008
    ctx->pc = 0x1DD148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD14Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD150u;
}

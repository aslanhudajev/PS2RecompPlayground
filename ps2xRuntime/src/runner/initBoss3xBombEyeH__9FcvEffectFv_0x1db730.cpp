#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss3xBombEyeH__9FcvEffectFv
// Address: 0x1db730 - 0x1db7bc
void initBoss3xBombEyeH__9FcvEffectFv_0x1db730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss3xBombEyeH__9FcvEffectFv");


    ctx->pc = 0x1db730u;

    // 0x1db730: 0x27bdffd0
    ctx->pc = 0x1db730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1db734: 0x7fbf0020
    ctx->pc = 0x1db734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1db738: 0x7fb10010
    ctx->pc = 0x1db738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db73c: 0x70808e28
    ctx->pc = 0x1db73cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1db740: 0x24050001
    ctx->pc = 0x1db740u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db744: 0xc0761c4
    ctx->pc = 0x1DB744u;
    SET_GPR_U32(ctx, 31, 0x1DB74Cu);
    ctx->pc = 0x1DB748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB74Cu; }
        else if (ctx->pc != 0x1DB74Cu) { ctx->pc = 0x1DB74Cu; }
    }
    if (ctx->pc != 0x1DB74Cu) { return; }
    ctx->pc = 0x1DB74Cu;
    // 0x1db74c: 0xae220054
    ctx->pc = 0x1db74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x1db750: 0x3c0242dc
    ctx->pc = 0x1db750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17116 << 16));
    // 0x1db754: 0xae220028
    ctx->pc = 0x1db754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1db758: 0x27848d4c
    ctx->pc = 0x1db758u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1db75c: 0xc07f208
    ctx->pc = 0x1DB75Cu;
    SET_GPR_U32(ctx, 31, 0x1DB764u);
    ctx->pc = 0x1DB760u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2274));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB764u; }
        else if (ctx->pc != 0x1DB764u) { ctx->pc = 0x1DB764u; }
    }
    if (ctx->pc != 0x1DB764u) { return; }
    ctx->pc = 0x1DB764u;
    // 0x1db764: 0x70408628
    ctx->pc = 0x1db764u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db768: 0x27848d4c
    ctx->pc = 0x1db768u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1db76c: 0xc07f208
    ctx->pc = 0x1DB76Cu;
    SET_GPR_U32(ctx, 31, 0x1DB774u);
    ctx->pc = 0x1DB770u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2275));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB774u; }
        else if (ctx->pc != 0x1DB774u) { ctx->pc = 0x1DB774u; }
    }
    if (ctx->pc != 0x1DB774u) { return; }
    ctx->pc = 0x1DB774u;
    // 0x1db774: 0x8e240054
    ctx->pc = 0x1db774u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1db778: 0x72003628
    ctx->pc = 0x1db778u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1db77c: 0x3c05001e
    ctx->pc = 0x1db77cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)30 << 16));
    // 0x1db780: 0xc079e80
    ctx->pc = 0x1DB780u;
    SET_GPR_U32(ctx, 31, 0x1DB788u);
    ctx->pc = 0x1DB784u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB788u; }
        else if (ctx->pc != 0x1DB788u) { ctx->pc = 0x1DB788u; }
    }
    if (ctx->pc != 0x1DB788u) { return; }
    ctx->pc = 0x1DB788u;
    // 0x1db788: 0x3c030027
    ctx->pc = 0x1db788u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1db78c: 0x24638c98
    ctx->pc = 0x1db78cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937752));
    // 0x1db790: 0xc4620000
    ctx->pc = 0x1db790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db794: 0xc4610004
    ctx->pc = 0x1db794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db798: 0xc4600008
    ctx->pc = 0x1db798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db79c: 0xe6220114
    ctx->pc = 0x1db79cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x1db7a0: 0xe6210118
    ctx->pc = 0x1db7a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    // 0x1db7a4: 0xe620011c
    ctx->pc = 0x1db7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x1db7a8: 0x7bbf0020
    ctx->pc = 0x1db7a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db7ac: 0x7bb10010
    ctx->pc = 0x1db7acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db7b0: 0x7bb00000
    ctx->pc = 0x1db7b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db7b4: 0x3e00008
    ctx->pc = 0x1DB7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB7B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB7BCu;
}

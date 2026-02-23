#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss6B4MaskBackL__9FcvEffectFv
// Address: 0x1dd4f0 - 0x1dd56c
void initBoss6B4MaskBackL__9FcvEffectFv_0x1dd4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss6B4MaskBackL__9FcvEffectFv");


    ctx->pc = 0x1dd4f0u;

    // 0x1dd4f0: 0x27bdffe0
    ctx->pc = 0x1dd4f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd4f4: 0x7fbf0010
    ctx->pc = 0x1dd4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1dd4f8: 0x7fb00000
    ctx->pc = 0x1dd4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd4fc: 0xac800018
    ctx->pc = 0x1dd4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1dd500: 0x70808628
    ctx->pc = 0x1dd500u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dd504: 0xc0761c4
    ctx->pc = 0x1DD504u;
    SET_GPR_U32(ctx, 31, 0x1DD50Cu);
    ctx->pc = 0x1DD508u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD50Cu; }
        else if (ctx->pc != 0x1DD50Cu) { ctx->pc = 0x1DD50Cu; }
    }
    if (ctx->pc != 0x1DD50Cu) { return; }
    ctx->pc = 0x1DD50Cu;
    // 0x1dd50c: 0xae020054
    ctx->pc = 0x1dd50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1dd510: 0x3c0241f0
    ctx->pc = 0x1dd510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16880 << 16));
    // 0x1dd514: 0xae020028
    ctx->pc = 0x1dd514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dd518: 0x27848d4c
    ctx->pc = 0x1dd518u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd51c: 0xc07f208
    ctx->pc = 0x1DD51Cu;
    SET_GPR_U32(ctx, 31, 0x1DD524u);
    ctx->pc = 0x1DD520u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2923));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD524u; }
        else if (ctx->pc != 0x1DD524u) { ctx->pc = 0x1DD524u; }
    }
    if (ctx->pc != 0x1DD524u) { return; }
    ctx->pc = 0x1DD524u;
    // 0x1dd524: 0x8e040054
    ctx->pc = 0x1dd524u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dd528: 0x3c030022
    ctx->pc = 0x1dd528u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1dd52c: 0x3465025a
    ctx->pc = 0x1dd52cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 602));
    // 0x1dd530: 0x70403628
    ctx->pc = 0x1dd530u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd534: 0xc079e80
    ctx->pc = 0x1DD534u;
    SET_GPR_U32(ctx, 31, 0x1DD53Cu);
    ctx->pc = 0x1DD538u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD53Cu; }
        else if (ctx->pc != 0x1DD53Cu) { ctx->pc = 0x1DD53Cu; }
    }
    if (ctx->pc != 0x1DD53Cu) { return; }
    ctx->pc = 0x1DD53Cu;
    // 0x1dd53c: 0x3c030027
    ctx->pc = 0x1dd53cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dd540: 0x246396a8
    ctx->pc = 0x1dd540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940328));
    // 0x1dd544: 0xc4620000
    ctx->pc = 0x1dd544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd548: 0xc4610004
    ctx->pc = 0x1dd548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd54c: 0xc4600008
    ctx->pc = 0x1dd54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd550: 0xe6020114
    ctx->pc = 0x1dd550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1dd554: 0xe6010118
    ctx->pc = 0x1dd554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1dd558: 0xe600011c
    ctx->pc = 0x1dd558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1dd55c: 0x7bbf0010
    ctx->pc = 0x1dd55cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd560: 0x7bb00000
    ctx->pc = 0x1dd560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd564: 0x3e00008
    ctx->pc = 0x1DD564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD568u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD56Cu;
}

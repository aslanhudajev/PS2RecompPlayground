#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss6B4MaskBackS__9FcvEffectFv
// Address: 0x1dd690 - 0x1dd70c
void initBoss6B4MaskBackS__9FcvEffectFv_0x1dd690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss6B4MaskBackS__9FcvEffectFv");


    ctx->pc = 0x1dd690u;

    // 0x1dd690: 0x27bdffe0
    ctx->pc = 0x1dd690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd694: 0x7fbf0010
    ctx->pc = 0x1dd694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1dd698: 0x7fb00000
    ctx->pc = 0x1dd698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd69c: 0x24050001
    ctx->pc = 0x1dd69cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd6a0: 0x70808628
    ctx->pc = 0x1dd6a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dd6a4: 0xc0761c4
    ctx->pc = 0x1DD6A4u;
    SET_GPR_U32(ctx, 31, 0x1DD6ACu);
    ctx->pc = 0x1DD6A8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD6ACu; }
        else if (ctx->pc != 0x1DD6ACu) { ctx->pc = 0x1DD6ACu; }
    }
    if (ctx->pc != 0x1DD6ACu) { return; }
    ctx->pc = 0x1DD6ACu;
    // 0x1dd6ac: 0xae020054
    ctx->pc = 0x1dd6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1dd6b0: 0x3c0241f0
    ctx->pc = 0x1dd6b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16880 << 16));
    // 0x1dd6b4: 0xae020028
    ctx->pc = 0x1dd6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dd6b8: 0x27848d4c
    ctx->pc = 0x1dd6b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd6bc: 0xc07f208
    ctx->pc = 0x1DD6BCu;
    SET_GPR_U32(ctx, 31, 0x1DD6C4u);
    ctx->pc = 0x1DD6C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2925));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD6C4u; }
        else if (ctx->pc != 0x1DD6C4u) { ctx->pc = 0x1DD6C4u; }
    }
    if (ctx->pc != 0x1DD6C4u) { return; }
    ctx->pc = 0x1DD6C4u;
    // 0x1dd6c4: 0x8e040054
    ctx->pc = 0x1dd6c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dd6c8: 0x3c030022
    ctx->pc = 0x1dd6c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1dd6cc: 0x3465025a
    ctx->pc = 0x1dd6ccu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 602));
    // 0x1dd6d0: 0x70403628
    ctx->pc = 0x1dd6d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd6d4: 0xc079e80
    ctx->pc = 0x1DD6D4u;
    SET_GPR_U32(ctx, 31, 0x1DD6DCu);
    ctx->pc = 0x1DD6D8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD6DCu; }
        else if (ctx->pc != 0x1DD6DCu) { ctx->pc = 0x1DD6DCu; }
    }
    if (ctx->pc != 0x1DD6DCu) { return; }
    ctx->pc = 0x1DD6DCu;
    // 0x1dd6dc: 0x3c030027
    ctx->pc = 0x1dd6dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dd6e0: 0x246396c8
    ctx->pc = 0x1dd6e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940360));
    // 0x1dd6e4: 0xc4620000
    ctx->pc = 0x1dd6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd6e8: 0xc4610004
    ctx->pc = 0x1dd6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd6ec: 0xc4600008
    ctx->pc = 0x1dd6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd6f0: 0xe6020114
    ctx->pc = 0x1dd6f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1dd6f4: 0xe6010118
    ctx->pc = 0x1dd6f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1dd6f8: 0xe600011c
    ctx->pc = 0x1dd6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1dd6fc: 0x7bbf0010
    ctx->pc = 0x1dd6fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd700: 0x7bb00000
    ctx->pc = 0x1dd700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd704: 0x3e00008
    ctx->pc = 0x1DD704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD708u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD70Cu;
}

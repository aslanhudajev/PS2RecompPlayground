#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initSt5Kouzui__9FcvEffectFv
// Address: 0x1dde60 - 0x1ddf30
void initSt5Kouzui__9FcvEffectFv_0x1dde60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initSt5Kouzui__9FcvEffectFv");


    ctx->pc = 0x1dde60u;

    // 0x1dde60: 0x27bdffc0
    ctx->pc = 0x1dde60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dde64: 0x7fbf0030
    ctx->pc = 0x1dde64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1dde68: 0x7fb20020
    ctx->pc = 0x1dde68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dde6c: 0x7fb10010
    ctx->pc = 0x1dde6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dde70: 0x70809628
    ctx->pc = 0x1dde70u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dde74: 0x24050057
    ctx->pc = 0x1dde74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 87));
    // 0x1dde78: 0xc0761c4
    ctx->pc = 0x1DDE78u;
    SET_GPR_U32(ctx, 31, 0x1DDE80u);
    ctx->pc = 0x1DDE7Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE80u; }
        else if (ctx->pc != 0x1DDE80u) { ctx->pc = 0x1DDE80u; }
    }
    if (ctx->pc != 0x1DDE80u) { return; }
    ctx->pc = 0x1DDE80u;
    // 0x1dde80: 0xae420054
    ctx->pc = 0x1dde80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1dde84: 0x3c024402
    ctx->pc = 0x1dde84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17410 << 16));
    // 0x1dde88: 0xae420028
    ctx->pc = 0x1dde88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1dde8c: 0x70008628
    ctx->pc = 0x1dde8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dde90: 0x1000000d
    ctx->pc = 0x1DDE90u;
    {
        const bool branch_taken_0x1dde90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DDE94u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dde90) {
            ctx->pc = 0x1DDEC8u;
            goto label_1ddec8;
        }
    }
    ctx->pc = 0x1DDE98u;
label_1dde98:
    // 0x1dde98: 0xc07f208
    ctx->pc = 0x1DDE98u;
    SET_GPR_U32(ctx, 31, 0x1DDEA0u);
    ctx->pc = 0x1DDE9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDEA0u; }
        else if (ctx->pc != 0x1DDEA0u) { ctx->pc = 0x1DDEA0u; }
    }
    if (ctx->pc != 0x1DDEA0u) { return; }
    ctx->pc = 0x1DDEA0u;
    // 0x1ddea0: 0x8e430054
    ctx->pc = 0x1ddea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ddea4: 0x70403628
    ctx->pc = 0x1ddea4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddea8: 0x3c020048
    ctx->pc = 0x1ddea8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)72 << 16));
    // 0x1ddeac: 0x3445002b
    ctx->pc = 0x1ddeacu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 43));
    // 0x1ddeb0: 0x70003e28
    ctx->pc = 0x1ddeb0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ddeb4: 0xc079e80
    ctx->pc = 0x1DDEB4u;
    SET_GPR_U32(ctx, 31, 0x1DDEBCu);
    ctx->pc = 0x1DDEB8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDEBCu; }
        else if (ctx->pc != 0x1DDEBCu) { ctx->pc = 0x1DDEBCu; }
    }
    if (ctx->pc != 0x1DDEBCu) { return; }
    ctx->pc = 0x1DDEBCu;
    // 0x1ddebc: 0x263100f0
    ctx->pc = 0x1ddebcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1ddec0: 0x26100001
    ctx->pc = 0x1ddec0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ddec4: 0x0
    ctx->pc = 0x1ddec4u;
    // NOP
label_1ddec8:
    // 0x1ddec8: 0x8e420000
    ctx->pc = 0x1ddec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ddecc: 0x202102a
    ctx->pc = 0x1ddeccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x1dded0: 0x1440fff1
    ctx->pc = 0x1DDED0u;
    {
        const bool branch_taken_0x1dded0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DDED4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 5688));
        if (branch_taken_0x1dded0) {
            ctx->pc = 0x1DDE98u;
            goto label_1dde98;
        }
    }
    ctx->pc = 0x1DDED8u;
    // 0x1dded8: 0x3c020051
    ctx->pc = 0x1dded8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ddedc: 0x244434f0
    ctx->pc = 0x1ddedcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1ddee0: 0x3c02001a
    ctx->pc = 0x1ddee0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)26 << 16));
    // 0x1ddee4: 0x3445010d
    ctx->pc = 0x1ddee4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 269));
    // 0x1ddee8: 0x70003628
    ctx->pc = 0x1ddee8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ddeec: 0x70003e28
    ctx->pc = 0x1ddeecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ddef0: 0xc086018
    ctx->pc = 0x1DDEF0u;
    SET_GPR_U32(ctx, 31, 0x1DDEF8u);
    ctx->pc = 0x1DDEF4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDEF8u; }
        else if (ctx->pc != 0x1DDEF8u) { ctx->pc = 0x1DDEF8u; }
    }
    if (ctx->pc != 0x1DDEF8u) { return; }
    ctx->pc = 0x1DDEF8u;
    // 0x1ddef8: 0x3c030027
    ctx->pc = 0x1ddef8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1ddefc: 0x24639728
    ctx->pc = 0x1ddefcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940456));
    // 0x1ddf00: 0xc4620000
    ctx->pc = 0x1ddf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddf04: 0xc4610004
    ctx->pc = 0x1ddf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddf08: 0xc4600008
    ctx->pc = 0x1ddf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddf0c: 0xe6420114
    ctx->pc = 0x1ddf0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1ddf10: 0xe6410118
    ctx->pc = 0x1ddf10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1ddf14: 0xe640011c
    ctx->pc = 0x1ddf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1ddf18: 0x7bbf0030
    ctx->pc = 0x1ddf18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddf1c: 0x7bb20020
    ctx->pc = 0x1ddf1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddf20: 0x7bb10010
    ctx->pc = 0x1ddf20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddf24: 0x7bb00000
    ctx->pc = 0x1ddf24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddf28: 0x3e00008
    ctx->pc = 0x1DDF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DDE98u: goto label_1dde98;
            case 0x1DDEC8u: goto label_1ddec8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDF30u;
}

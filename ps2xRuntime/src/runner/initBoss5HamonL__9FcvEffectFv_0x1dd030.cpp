#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss5HamonL__9FcvEffectFv
// Address: 0x1dd030 - 0x1dd0c0
void initBoss5HamonL__9FcvEffectFv_0x1dd030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss5HamonL__9FcvEffectFv");


    ctx->pc = 0x1dd030u;

    // 0x1dd030: 0x27bdffd0
    ctx->pc = 0x1dd030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd034: 0x7fbf0020
    ctx->pc = 0x1dd034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1dd038: 0x7fb10010
    ctx->pc = 0x1dd038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd03c: 0x70808e28
    ctx->pc = 0x1dd03cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dd040: 0x24050001
    ctx->pc = 0x1dd040u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd044: 0xc0761c4
    ctx->pc = 0x1DD044u;
    SET_GPR_U32(ctx, 31, 0x1DD04Cu);
    ctx->pc = 0x1DD048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD04Cu; }
        else if (ctx->pc != 0x1DD04Cu) { ctx->pc = 0x1DD04Cu; }
    }
    if (ctx->pc != 0x1DD04Cu) { return; }
    ctx->pc = 0x1DD04Cu;
    // 0x1dd04c: 0xae220054
    ctx->pc = 0x1dd04cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x1dd050: 0x3c024348
    ctx->pc = 0x1dd050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17224 << 16));
    // 0x1dd054: 0xae220028
    ctx->pc = 0x1dd054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1dd058: 0x27848d4c
    ctx->pc = 0x1dd058u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd05c: 0xc07f208
    ctx->pc = 0x1DD05Cu;
    SET_GPR_U32(ctx, 31, 0x1DD064u);
    ctx->pc = 0x1DD060u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8364));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD064u; }
        else if (ctx->pc != 0x1DD064u) { ctx->pc = 0x1DD064u; }
    }
    if (ctx->pc != 0x1DD064u) { return; }
    ctx->pc = 0x1DD064u;
    // 0x1dd064: 0x70408628
    ctx->pc = 0x1dd064u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd068: 0x27848d4c
    ctx->pc = 0x1dd068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd06c: 0xc07f208
    ctx->pc = 0x1DD06Cu;
    SET_GPR_U32(ctx, 31, 0x1DD074u);
    ctx->pc = 0x1DD070u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8365));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD074u; }
        else if (ctx->pc != 0x1DD074u) { ctx->pc = 0x1DD074u; }
    }
    if (ctx->pc != 0x1DD074u) { return; }
    ctx->pc = 0x1DD074u;
    // 0x1dd074: 0x8e240054
    ctx->pc = 0x1dd074u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1dd078: 0x3c030021
    ctx->pc = 0x1dd078u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1dd07c: 0x72003628
    ctx->pc = 0x1dd07cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dd080: 0x34650038
    ctx->pc = 0x1dd080u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 56));
    // 0x1dd084: 0xc079e80
    ctx->pc = 0x1DD084u;
    SET_GPR_U32(ctx, 31, 0x1DD08Cu);
    ctx->pc = 0x1DD088u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD08Cu; }
        else if (ctx->pc != 0x1DD08Cu) { ctx->pc = 0x1DD08Cu; }
    }
    if (ctx->pc != 0x1DD08Cu) { return; }
    ctx->pc = 0x1DD08Cu;
    // 0x1dd08c: 0x3c030027
    ctx->pc = 0x1dd08cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dd090: 0x24638dd8
    ctx->pc = 0x1dd090u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938072));
    // 0x1dd094: 0xc4620000
    ctx->pc = 0x1dd094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd098: 0xc4610004
    ctx->pc = 0x1dd098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd09c: 0xc4600008
    ctx->pc = 0x1dd09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd0a0: 0xe6220114
    ctx->pc = 0x1dd0a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x1dd0a4: 0xe6210118
    ctx->pc = 0x1dd0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    // 0x1dd0a8: 0xe620011c
    ctx->pc = 0x1dd0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x1dd0ac: 0x7bbf0020
    ctx->pc = 0x1dd0acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd0b0: 0x7bb10010
    ctx->pc = 0x1dd0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd0b4: 0x7bb00000
    ctx->pc = 0x1dd0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd0b8: 0x3e00008
    ctx->pc = 0x1DD0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD0BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD0C0u;
}

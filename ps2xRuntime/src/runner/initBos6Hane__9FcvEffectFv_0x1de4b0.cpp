#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBos6Hane__9FcvEffectFv
// Address: 0x1de4b0 - 0x1de5f0
void initBos6Hane__9FcvEffectFv_0x1de4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBos6Hane__9FcvEffectFv");


    ctx->pc = 0x1de4b0u;

    // 0x1de4b0: 0x27bdffe0
    ctx->pc = 0x1de4b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de4b4: 0x7fbf0010
    ctx->pc = 0x1de4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1de4b8: 0x7fb00000
    ctx->pc = 0x1de4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1de4bc: 0x70808628
    ctx->pc = 0x1de4bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1de4c0: 0xc0761c4
    ctx->pc = 0x1DE4C0u;
    SET_GPR_U32(ctx, 31, 0x1DE4C8u);
    ctx->pc = 0x1DE4C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4C8u; }
        else if (ctx->pc != 0x1DE4C8u) { ctx->pc = 0x1DE4C8u; }
    }
    if (ctx->pc != 0x1DE4C8u) { return; }
    ctx->pc = 0x1DE4C8u;
    // 0x1de4c8: 0xae020054
    ctx->pc = 0x1de4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1de4cc: 0x3c0242c8
    ctx->pc = 0x1de4ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x1de4d0: 0xae020028
    ctx->pc = 0x1de4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1de4d4: 0x27848d4c
    ctx->pc = 0x1de4d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1de4d8: 0xc07f208
    ctx->pc = 0x1DE4D8u;
    SET_GPR_U32(ctx, 31, 0x1DE4E0u);
    ctx->pc = 0x1DE4DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5884));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4E0u; }
        else if (ctx->pc != 0x1DE4E0u) { ctx->pc = 0x1DE4E0u; }
    }
    if (ctx->pc != 0x1DE4E0u) { return; }
    ctx->pc = 0x1DE4E0u;
    // 0x1de4e0: 0x8e040054
    ctx->pc = 0x1de4e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1de4e4: 0x70403628
    ctx->pc = 0x1de4e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de4e8: 0x3c020022
    ctx->pc = 0x1de4e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1de4ec: 0x34450264
    ctx->pc = 0x1de4ecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 612));
    // 0x1de4f0: 0xc079e80
    ctx->pc = 0x1DE4F0u;
    SET_GPR_U32(ctx, 31, 0x1DE4F8u);
    ctx->pc = 0x1DE4F4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4F8u; }
        else if (ctx->pc != 0x1DE4F8u) { ctx->pc = 0x1DE4F8u; }
    }
    if (ctx->pc != 0x1DE4F8u) { return; }
    ctx->pc = 0x1DE4F8u;
    // 0x1de4f8: 0x27848d4c
    ctx->pc = 0x1de4f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1de4fc: 0xc07f208
    ctx->pc = 0x1DE4FCu;
    SET_GPR_U32(ctx, 31, 0x1DE504u);
    ctx->pc = 0x1DE500u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5885));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE504u; }
        else if (ctx->pc != 0x1DE504u) { ctx->pc = 0x1DE504u; }
    }
    if (ctx->pc != 0x1DE504u) { return; }
    ctx->pc = 0x1DE504u;
    // 0x1de504: 0x8e030054
    ctx->pc = 0x1de504u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1de508: 0x70403628
    ctx->pc = 0x1de508u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de50c: 0x3c020022
    ctx->pc = 0x1de50cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1de510: 0x34450264
    ctx->pc = 0x1de510u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 612));
    // 0x1de514: 0x70003e28
    ctx->pc = 0x1de514u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de518: 0xc079e80
    ctx->pc = 0x1DE518u;
    SET_GPR_U32(ctx, 31, 0x1DE520u);
    ctx->pc = 0x1DE51Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 240));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE520u; }
        else if (ctx->pc != 0x1DE520u) { ctx->pc = 0x1DE520u; }
    }
    if (ctx->pc != 0x1DE520u) { return; }
    ctx->pc = 0x1DE520u;
    // 0x1de520: 0x27848d4c
    ctx->pc = 0x1de520u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1de524: 0xc07f208
    ctx->pc = 0x1DE524u;
    SET_GPR_U32(ctx, 31, 0x1DE52Cu);
    ctx->pc = 0x1DE528u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5886));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE52Cu; }
        else if (ctx->pc != 0x1DE52Cu) { ctx->pc = 0x1DE52Cu; }
    }
    if (ctx->pc != 0x1DE52Cu) { return; }
    ctx->pc = 0x1DE52Cu;
    // 0x1de52c: 0x8e030054
    ctx->pc = 0x1de52cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1de530: 0x70403628
    ctx->pc = 0x1de530u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de534: 0x3c020022
    ctx->pc = 0x1de534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1de538: 0x34450264
    ctx->pc = 0x1de538u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 612));
    // 0x1de53c: 0x70003e28
    ctx->pc = 0x1de53cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de540: 0xc079e80
    ctx->pc = 0x1DE540u;
    SET_GPR_U32(ctx, 31, 0x1DE548u);
    ctx->pc = 0x1DE544u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 480));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE548u; }
        else if (ctx->pc != 0x1DE548u) { ctx->pc = 0x1DE548u; }
    }
    if (ctx->pc != 0x1DE548u) { return; }
    ctx->pc = 0x1DE548u;
    // 0x1de548: 0x27848d4c
    ctx->pc = 0x1de548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1de54c: 0xc07f208
    ctx->pc = 0x1DE54Cu;
    SET_GPR_U32(ctx, 31, 0x1DE554u);
    ctx->pc = 0x1DE550u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5887));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE554u; }
        else if (ctx->pc != 0x1DE554u) { ctx->pc = 0x1DE554u; }
    }
    if (ctx->pc != 0x1DE554u) { return; }
    ctx->pc = 0x1DE554u;
    // 0x1de554: 0x8e030054
    ctx->pc = 0x1de554u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1de558: 0x70403628
    ctx->pc = 0x1de558u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de55c: 0x3c020022
    ctx->pc = 0x1de55cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1de560: 0x34450264
    ctx->pc = 0x1de560u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 612));
    // 0x1de564: 0x70003e28
    ctx->pc = 0x1de564u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de568: 0xc079e80
    ctx->pc = 0x1DE568u;
    SET_GPR_U32(ctx, 31, 0x1DE570u);
    ctx->pc = 0x1DE56Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 720));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE570u; }
        else if (ctx->pc != 0x1DE570u) { ctx->pc = 0x1DE570u; }
    }
    if (ctx->pc != 0x1DE570u) { return; }
    ctx->pc = 0x1DE570u;
    // 0x1de570: 0x27848d4c
    ctx->pc = 0x1de570u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1de574: 0xc07f208
    ctx->pc = 0x1DE574u;
    SET_GPR_U32(ctx, 31, 0x1DE57Cu);
    ctx->pc = 0x1DE578u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5888));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE57Cu; }
        else if (ctx->pc != 0x1DE57Cu) { ctx->pc = 0x1DE57Cu; }
    }
    if (ctx->pc != 0x1DE57Cu) { return; }
    ctx->pc = 0x1DE57Cu;
    // 0x1de57c: 0x8e030054
    ctx->pc = 0x1de57cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1de580: 0x70403628
    ctx->pc = 0x1de580u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de584: 0x3c020022
    ctx->pc = 0x1de584u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1de588: 0x34450264
    ctx->pc = 0x1de588u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 612));
    // 0x1de58c: 0x70003e28
    ctx->pc = 0x1de58cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de590: 0xc079e80
    ctx->pc = 0x1DE590u;
    SET_GPR_U32(ctx, 31, 0x1DE598u);
    ctx->pc = 0x1DE594u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 960));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE598u; }
        else if (ctx->pc != 0x1DE598u) { ctx->pc = 0x1DE598u; }
    }
    if (ctx->pc != 0x1DE598u) { return; }
    ctx->pc = 0x1DE598u;
    // 0x1de598: 0x27848d4c
    ctx->pc = 0x1de598u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1de59c: 0xc07f208
    ctx->pc = 0x1DE59Cu;
    SET_GPR_U32(ctx, 31, 0x1DE5A4u);
    ctx->pc = 0x1DE5A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5889));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5A4u; }
        else if (ctx->pc != 0x1DE5A4u) { ctx->pc = 0x1DE5A4u; }
    }
    if (ctx->pc != 0x1DE5A4u) { return; }
    ctx->pc = 0x1DE5A4u;
    // 0x1de5a4: 0x8e040054
    ctx->pc = 0x1de5a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1de5a8: 0x3c030022
    ctx->pc = 0x1de5a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1de5ac: 0x34650264
    ctx->pc = 0x1de5acu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 612));
    // 0x1de5b0: 0x70403628
    ctx->pc = 0x1de5b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de5b4: 0x70003e28
    ctx->pc = 0x1de5b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de5b8: 0xc079e80
    ctx->pc = 0x1DE5B8u;
    SET_GPR_U32(ctx, 31, 0x1DE5C0u);
    ctx->pc = 0x1DE5BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1200));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5C0u; }
        else if (ctx->pc != 0x1DE5C0u) { ctx->pc = 0x1DE5C0u; }
    }
    if (ctx->pc != 0x1DE5C0u) { return; }
    ctx->pc = 0x1DE5C0u;
    // 0x1de5c0: 0x3c030027
    ctx->pc = 0x1de5c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1de5c4: 0x24639778
    ctx->pc = 0x1de5c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940536));
    // 0x1de5c8: 0xc4620000
    ctx->pc = 0x1de5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de5cc: 0xc4610004
    ctx->pc = 0x1de5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de5d0: 0xc4600008
    ctx->pc = 0x1de5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de5d4: 0xe6020114
    ctx->pc = 0x1de5d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1de5d8: 0xe6010118
    ctx->pc = 0x1de5d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1de5dc: 0xe600011c
    ctx->pc = 0x1de5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1de5e0: 0x7bbf0010
    ctx->pc = 0x1de5e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de5e4: 0x7bb00000
    ctx->pc = 0x1de5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de5e8: 0x3e00008
    ctx->pc = 0x1DE5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE5ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE5F0u;
}

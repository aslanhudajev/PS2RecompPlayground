#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss3Henshin__9FcvEffectFv
// Address: 0x1dc0d0 - 0x1dc2d0
void initBoss3Henshin__9FcvEffectFv_0x1dc0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss3Henshin__9FcvEffectFv");


    ctx->pc = 0x1dc0d0u;

    // 0x1dc0d0: 0x27bdff60
    ctx->pc = 0x1dc0d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1dc0d4: 0x7fbf0090
    ctx->pc = 0x1dc0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1dc0d8: 0x7fbe0080
    ctx->pc = 0x1dc0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1dc0dc: 0x7fb70070
    ctx->pc = 0x1dc0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1dc0e0: 0x7fb60060
    ctx->pc = 0x1dc0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1dc0e4: 0x7fb50050
    ctx->pc = 0x1dc0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dc0e8: 0x7fb40040
    ctx->pc = 0x1dc0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dc0ec: 0x7fb30030
    ctx->pc = 0x1dc0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dc0f0: 0x7fb20020
    ctx->pc = 0x1dc0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc0f4: 0x7fb10010
    ctx->pc = 0x1dc0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc0f8: 0x7fb00000
    ctx->pc = 0x1dc0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dc0fc: 0x70808628
    ctx->pc = 0x1dc0fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dc100: 0xc0761c4
    ctx->pc = 0x1DC100u;
    SET_GPR_U32(ctx, 31, 0x1DC108u);
    ctx->pc = 0x1DC104u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC108u; }
        else if (ctx->pc != 0x1DC108u) { ctx->pc = 0x1DC108u; }
    }
    if (ctx->pc != 0x1DC108u) { return; }
    ctx->pc = 0x1DC108u;
    // 0x1dc108: 0xae020054
    ctx->pc = 0x1dc108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1dc10c: 0x3c0243be
    ctx->pc = 0x1dc10cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17342 << 16));
    // 0x1dc110: 0xae020028
    ctx->pc = 0x1dc110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dc114: 0x27848d4c
    ctx->pc = 0x1dc114u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc118: 0xc07f208
    ctx->pc = 0x1DC118u;
    SET_GPR_U32(ctx, 31, 0x1DC120u);
    ctx->pc = 0x1DC11Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2168));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC120u; }
        else if (ctx->pc != 0x1DC120u) { ctx->pc = 0x1DC120u; }
    }
    if (ctx->pc != 0x1DC120u) { return; }
    ctx->pc = 0x1DC120u;
    // 0x1dc120: 0x7040f628
    ctx->pc = 0x1dc120u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc124: 0x27848d4c
    ctx->pc = 0x1dc124u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc128: 0xc07f208
    ctx->pc = 0x1DC128u;
    SET_GPR_U32(ctx, 31, 0x1DC130u);
    ctx->pc = 0x1DC12Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2169));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC130u; }
        else if (ctx->pc != 0x1DC130u) { ctx->pc = 0x1DC130u; }
    }
    if (ctx->pc != 0x1DC130u) { return; }
    ctx->pc = 0x1DC130u;
    // 0x1dc130: 0x7040be28
    ctx->pc = 0x1dc130u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc134: 0x27848d4c
    ctx->pc = 0x1dc134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc138: 0xc07f208
    ctx->pc = 0x1DC138u;
    SET_GPR_U32(ctx, 31, 0x1DC140u);
    ctx->pc = 0x1DC13Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2170));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC140u; }
        else if (ctx->pc != 0x1DC140u) { ctx->pc = 0x1DC140u; }
    }
    if (ctx->pc != 0x1DC140u) { return; }
    ctx->pc = 0x1DC140u;
    // 0x1dc140: 0x70408e28
    ctx->pc = 0x1dc140u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc144: 0x27848d4c
    ctx->pc = 0x1dc144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc148: 0xc07f208
    ctx->pc = 0x1DC148u;
    SET_GPR_U32(ctx, 31, 0x1DC150u);
    ctx->pc = 0x1DC14Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2171));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC150u; }
        else if (ctx->pc != 0x1DC150u) { ctx->pc = 0x1DC150u; }
    }
    if (ctx->pc != 0x1DC150u) { return; }
    ctx->pc = 0x1DC150u;
    // 0x1dc150: 0x70409628
    ctx->pc = 0x1dc150u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc154: 0x27848d4c
    ctx->pc = 0x1dc154u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc158: 0xc07f208
    ctx->pc = 0x1DC158u;
    SET_GPR_U32(ctx, 31, 0x1DC160u);
    ctx->pc = 0x1DC15Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2172));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC160u; }
        else if (ctx->pc != 0x1DC160u) { ctx->pc = 0x1DC160u; }
    }
    if (ctx->pc != 0x1DC160u) { return; }
    ctx->pc = 0x1DC160u;
    // 0x1dc160: 0x3c03002c
    ctx->pc = 0x1dc160u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1dc164: 0x70409e28
    ctx->pc = 0x1dc164u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc168: 0x7000a628
    ctx->pc = 0x1dc168u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dc16c: 0x2475f1f0
    ctx->pc = 0x1dc16cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 4294963696));
    // 0x1dc170: 0x1000003f
    ctx->pc = 0x1DC170u;
    {
        const bool branch_taken_0x1dc170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC174u;
        SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dc170) {
            ctx->pc = 0x1DC270u;
            goto label_1dc270;
        }
    }
    ctx->pc = 0x1DC178u;
label_1dc178:
    // 0x1dc178: 0xc07f208
    ctx->pc = 0x1DC178u;
    SET_GPR_U32(ctx, 31, 0x1DC180u);
    ctx->pc = 0x1DC17Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC180u; }
        else if (ctx->pc != 0x1DC180u) { ctx->pc = 0x1DC180u; }
    }
    if (ctx->pc != 0x1DC180u) { return; }
    ctx->pc = 0x1DC180u;
    // 0x1dc180: 0x8ea50000
    ctx->pc = 0x1dc180u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1dc184: 0x3c03001e
    ctx->pc = 0x1dc184u;
    SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
    // 0x1dc188: 0x34630034
    ctx->pc = 0x1dc188u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52));
    // 0x1dc18c: 0x14a30007
    ctx->pc = 0x1DC18Cu;
    {
        const bool branch_taken_0x1dc18c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1DC190u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dc18c) {
            ctx->pc = 0x1DC1ACu;
            goto label_1dc1ac;
        }
    }
    ctx->pc = 0x1DC194u;
    // 0x1dc194: 0x8e020054
    ctx->pc = 0x1dc194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dc198: 0x73c03e28
    ctx->pc = 0x1dc198u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1dc19c: 0xc079e80
    ctx->pc = 0x1DC19Cu;
    SET_GPR_U32(ctx, 31, 0x1DC1A4u);
    ctx->pc = 0x1DC1A0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1A4u; }
        else if (ctx->pc != 0x1DC1A4u) { ctx->pc = 0x1DC1A4u; }
    }
    if (ctx->pc != 0x1DC1A4u) { return; }
    ctx->pc = 0x1DC1A4u;
    // 0x1dc1a4: 0x1000002f
    ctx->pc = 0x1DC1A4u;
    {
        const bool branch_taken_0x1dc1a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC1A8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4));
        if (branch_taken_0x1dc1a4) {
            ctx->pc = 0x1DC264u;
            goto label_1dc264;
        }
    }
    ctx->pc = 0x1DC1ACu;
label_1dc1ac:
    // 0x1dc1ac: 0x3c030026
    ctx->pc = 0x1dc1acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1dc1b0: 0x346300be
    ctx->pc = 0x1dc1b0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 190));
    // 0x1dc1b4: 0x14a3000e
    ctx->pc = 0x1DC1B4u;
    {
        const bool branch_taken_0x1dc1b4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1DC1B8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
        if (branch_taken_0x1dc1b4) {
            ctx->pc = 0x1DC1F0u;
            goto label_1dc1f0;
        }
    }
    ctx->pc = 0x1DC1BCu;
    // 0x1dc1bc: 0x8e020054
    ctx->pc = 0x1dc1bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dc1c0: 0x72e03e28
    ctx->pc = 0x1dc1c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1dc1c4: 0xc079e80
    ctx->pc = 0x1DC1C4u;
    SET_GPR_U32(ctx, 31, 0x1DC1CCu);
    ctx->pc = 0x1DC1C8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1CCu; }
        else if (ctx->pc != 0x1DC1CCu) { ctx->pc = 0x1DC1CCu; }
    }
    if (ctx->pc != 0x1DC1CCu) { return; }
    ctx->pc = 0x1DC1CCu;
    // 0x1dc1cc: 0x8e030054
    ctx->pc = 0x1dc1ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dc1d0: 0x3c020026
    ctx->pc = 0x1dc1d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1dc1d4: 0x344500be
    ctx->pc = 0x1dc1d4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 190));
    // 0x1dc1d8: 0x344600fd
    ctx->pc = 0x1dc1d8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 253));
    // 0x1dc1dc: 0xc079eb4
    ctx->pc = 0x1DC1DCu;
    SET_GPR_U32(ctx, 31, 0x1DC1E4u);
    ctx->pc = 0x1DC1E0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    ctx->pc = 0x1E7AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPatChg__7CFcvTRSFii_0x1e7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1E4u; }
        else if (ctx->pc != 0x1DC1E4u) { ctx->pc = 0x1DC1E4u; }
    }
    if (ctx->pc != 0x1DC1E4u) { return; }
    ctx->pc = 0x1DC1E4u;
    // 0x1dc1e4: 0x1000001e
    ctx->pc = 0x1DC1E4u;
    {
        const bool branch_taken_0x1dc1e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc1e4) {
            ctx->pc = 0x1DC260u;
            goto label_1dc260;
        }
    }
    ctx->pc = 0x1DC1ECu;
    // 0x1dc1ec: 0x3c03001e
    ctx->pc = 0x1dc1ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
label_1dc1f0:
    // 0x1dc1f0: 0x34630064
    ctx->pc = 0x1dc1f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 100));
    // 0x1dc1f4: 0x14a30008
    ctx->pc = 0x1DC1F4u;
    {
        const bool branch_taken_0x1dc1f4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1DC1F8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
        if (branch_taken_0x1dc1f4) {
            ctx->pc = 0x1DC218u;
            goto label_1dc218;
        }
    }
    ctx->pc = 0x1DC1FCu;
    // 0x1dc1fc: 0x8e020054
    ctx->pc = 0x1dc1fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dc200: 0x72203e28
    ctx->pc = 0x1dc200u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dc204: 0xc079e80
    ctx->pc = 0x1DC204u;
    SET_GPR_U32(ctx, 31, 0x1DC20Cu);
    ctx->pc = 0x1DC208u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC20Cu; }
        else if (ctx->pc != 0x1DC20Cu) { ctx->pc = 0x1DC20Cu; }
    }
    if (ctx->pc != 0x1DC20Cu) { return; }
    ctx->pc = 0x1DC20Cu;
    // 0x1dc20c: 0x10000014
    ctx->pc = 0x1DC20Cu;
    {
        const bool branch_taken_0x1dc20c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc20c) {
            ctx->pc = 0x1DC260u;
            goto label_1dc260;
        }
    }
    ctx->pc = 0x1DC214u;
    // 0x1dc214: 0x3c03001e
    ctx->pc = 0x1dc214u;
    SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
label_1dc218:
    // 0x1dc218: 0x34630040
    ctx->pc = 0x1dc218u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 64));
    // 0x1dc21c: 0x14a30008
    ctx->pc = 0x1DC21Cu;
    {
        const bool branch_taken_0x1dc21c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1DC220u;
        SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
        if (branch_taken_0x1dc21c) {
            ctx->pc = 0x1DC240u;
            goto label_1dc240;
        }
    }
    ctx->pc = 0x1DC224u;
    // 0x1dc224: 0x8e020054
    ctx->pc = 0x1dc224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dc228: 0x72403e28
    ctx->pc = 0x1dc228u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1dc22c: 0xc079e80
    ctx->pc = 0x1DC22Cu;
    SET_GPR_U32(ctx, 31, 0x1DC234u);
    ctx->pc = 0x1DC230u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC234u; }
        else if (ctx->pc != 0x1DC234u) { ctx->pc = 0x1DC234u; }
    }
    if (ctx->pc != 0x1DC234u) { return; }
    ctx->pc = 0x1DC234u;
    // 0x1dc234: 0x1000000a
    ctx->pc = 0x1DC234u;
    {
        const bool branch_taken_0x1dc234 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc234) {
            ctx->pc = 0x1DC260u;
            goto label_1dc260;
        }
    }
    ctx->pc = 0x1DC23Cu;
    // 0x1dc23c: 0x3c03001e
    ctx->pc = 0x1dc23cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
label_1dc240:
    // 0x1dc240: 0x34630041
    ctx->pc = 0x1dc240u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65));
    // 0x1dc244: 0x14a30006
    ctx->pc = 0x1DC244u;
    {
        const bool branch_taken_0x1dc244 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1dc244) {
            ctx->pc = 0x1DC260u;
            goto label_1dc260;
        }
    }
    ctx->pc = 0x1DC24Cu;
    // 0x1dc24c: 0x8e020054
    ctx->pc = 0x1dc24cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dc250: 0x72603e28
    ctx->pc = 0x1dc250u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dc254: 0xc079e80
    ctx->pc = 0x1DC254u;
    SET_GPR_U32(ctx, 31, 0x1DC25Cu);
    ctx->pc = 0x1DC258u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC25Cu; }
        else if (ctx->pc != 0x1DC25Cu) { ctx->pc = 0x1DC25Cu; }
    }
    if (ctx->pc != 0x1DC25Cu) { return; }
    ctx->pc = 0x1DC25Cu;
    // 0x1dc25c: 0x0
    ctx->pc = 0x1dc25cu;
    // NOP
label_1dc260:
    // 0x1dc260: 0x26b50004
    ctx->pc = 0x1dc260u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4));
label_1dc264:
    // 0x1dc264: 0x26d600f0
    ctx->pc = 0x1dc264u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 240));
    // 0x1dc268: 0x26940001
    ctx->pc = 0x1dc268u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x1dc26c: 0x0
    ctx->pc = 0x1dc26cu;
    // NOP
label_1dc270:
    // 0x1dc270: 0x8e030000
    ctx->pc = 0x1dc270u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc274: 0x283182a
    ctx->pc = 0x1dc274u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
    // 0x1dc278: 0x1460ffbf
    ctx->pc = 0x1DC278u;
    {
        const bool branch_taken_0x1dc278 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DC27Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 2144));
        if (branch_taken_0x1dc278) {
            ctx->pc = 0x1DC178u;
            goto label_1dc178;
        }
    }
    ctx->pc = 0x1DC280u;
    // 0x1dc280: 0x3c030027
    ctx->pc = 0x1dc280u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dc284: 0x24638d18
    ctx->pc = 0x1dc284u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937880));
    // 0x1dc288: 0xc4620000
    ctx->pc = 0x1dc288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc28c: 0xc4610004
    ctx->pc = 0x1dc28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc290: 0xc4600008
    ctx->pc = 0x1dc290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc294: 0xe6020114
    ctx->pc = 0x1dc294u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1dc298: 0xe6010118
    ctx->pc = 0x1dc298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1dc29c: 0xe600011c
    ctx->pc = 0x1dc29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1dc2a0: 0x7bbf0090
    ctx->pc = 0x1dc2a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dc2a4: 0x7bbe0080
    ctx->pc = 0x1dc2a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dc2a8: 0x7bb70070
    ctx->pc = 0x1dc2a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dc2ac: 0x7bb60060
    ctx->pc = 0x1dc2acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dc2b0: 0x7bb50050
    ctx->pc = 0x1dc2b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc2b4: 0x7bb40040
    ctx->pc = 0x1dc2b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc2b8: 0x7bb30030
    ctx->pc = 0x1dc2b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc2bc: 0x7bb20020
    ctx->pc = 0x1dc2bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc2c0: 0x7bb10010
    ctx->pc = 0x1dc2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc2c4: 0x7bb00000
    ctx->pc = 0x1dc2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc2c8: 0x3e00008
    ctx->pc = 0x1DC2C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC2CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC178u: goto label_1dc178;
            case 0x1DC1ACu: goto label_1dc1ac;
            case 0x1DC1F0u: goto label_1dc1f0;
            case 0x1DC218u: goto label_1dc218;
            case 0x1DC240u: goto label_1dc240;
            case 0x1DC260u: goto label_1dc260;
            case 0x1DC264u: goto label_1dc264;
            case 0x1DC270u: goto label_1dc270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC2D0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispBulletLoop__10PlayerTaskFv
// Address: 0x211260 - 0x21194c
void dispBulletLoop__10PlayerTaskFv_0x211260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispBulletLoop__10PlayerTaskFv");


    ctx->pc = 0x211260u;

    // 0x211260: 0x27bdfd50
    ctx->pc = 0x211260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x211264: 0x7fbf0070
    ctx->pc = 0x211264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x211268: 0x7fb50060
    ctx->pc = 0x211268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x21126c: 0x7fb40050
    ctx->pc = 0x21126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x211270: 0x7fb30040
    ctx->pc = 0x211270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x211274: 0x7fb20030
    ctx->pc = 0x211274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x211278: 0x7fb10020
    ctx->pc = 0x211278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21127c: 0x7fb00010
    ctx->pc = 0x21127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x211280: 0xe7b50004
    ctx->pc = 0x211280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x211284: 0xe7b40000
    ctx->pc = 0x211284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x211288: 0x70808628
    ctx->pc = 0x211288u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21128c: 0x8c841cb8
    ctx->pc = 0x21128cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7352)));
    // 0x211290: 0x3c020050
    ctx->pc = 0x211290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x211294: 0x2442db70
    ctx->pc = 0x211294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957936));
    // 0x211298: 0x41880
    ctx->pc = 0x211298u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x21129c: 0x642821
    ctx->pc = 0x21129cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2112a0: 0x51880
    ctx->pc = 0x2112a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2112a4: 0xa31821
    ctx->pc = 0x2112a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2112a8: 0x31880
    ctx->pc = 0x2112a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2112ac: 0xc0843c0
    ctx->pc = 0x2112ACu;
    SET_GPR_U32(ctx, 31, 0x2112B4u);
    ctx->pc = 0x2112B0u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x210F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlCartType__Fi_0x210f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2112B4u; }
        else if (ctx->pc != 0x2112B4u) { ctx->pc = 0x2112B4u; }
    }
    if (ctx->pc != 0x2112B4u) { return; }
    ctx->pc = 0x2112B4u;
    // 0x2112b4: 0x8e031cbc
    ctx->pc = 0x2112b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x2112b8: 0x8c670048
    ctx->pc = 0x2112b8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2112bc: 0x28e10009
    ctx->pc = 0x2112bcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 7), 9));
    // 0x2112c0: 0x50200001
    ctx->pc = 0x2112C0u;
    {
        const bool branch_taken_0x2112c0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x2112c0) {
            ctx->pc = 0x2112C4u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 9));
            ctx->pc = 0x2112C8u;
            goto label_2112c8;
        }
    }
    ctx->pc = 0x2112C8u;
label_2112c8:
    // 0x2112c8: 0x8e051cb8
    ctx->pc = 0x2112c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x2112cc: 0x3c030052
    ctx->pc = 0x2112ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x2112d0: 0x2463c910
    ctx->pc = 0x2112d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953232));
    // 0x2112d4: 0x7082a
    ctx->pc = 0x2112d4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 7)));
    // 0x2112d8: 0x70003628
    ctx->pc = 0x2112d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2112dc: 0x520c0
    ctx->pc = 0x2112dcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
    // 0x2112e0: 0x852821
    ctx->pc = 0x2112e0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2112e4: 0x520c0
    ctx->pc = 0x2112e4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
    // 0x2112e8: 0xa42021
    ctx->pc = 0x2112e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2112ec: 0x42080
    ctx->pc = 0x2112ecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2112f0: 0x10200015
    ctx->pc = 0x2112F0u;
    {
        const bool branch_taken_0x2112f0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x2112F4u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x2112f0) {
            ctx->pc = 0x211348u;
            goto label_211348;
        }
    }
    ctx->pc = 0x2112F8u;
    // 0x2112f8: 0x24040004
    ctx->pc = 0x2112f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_2112fc:
    // 0x2112fc: 0x8ca30018
    ctx->pc = 0x2112fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x211300: 0x5060000e
    ctx->pc = 0x211300u;
    {
        const bool branch_taken_0x211300 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x211300) {
            ctx->pc = 0x211304u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x21133Cu;
            goto label_21133c;
        }
    }
    ctx->pc = 0x211308u;
    // 0x211308: 0xc4a10010
    ctx->pc = 0x211308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21130c: 0xc4a00004
    ctx->pc = 0x21130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211310: 0x46010000
    ctx->pc = 0x211310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x211314: 0xe4a00004
    ctx->pc = 0x211314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x211318: 0x8ca3001c
    ctx->pc = 0x211318u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x21131c: 0x24630001
    ctx->pc = 0x21131cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x211320: 0xaca3001c
    ctx->pc = 0x211320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x211324: 0x8ca3001c
    ctx->pc = 0x211324u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x211328: 0x14640003
    ctx->pc = 0x211328u;
    {
        const bool branch_taken_0x211328 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x211328) {
            ctx->pc = 0x211338u;
            goto label_211338;
        }
    }
    ctx->pc = 0x211330u;
    // 0x211330: 0xaca0001c
    ctx->pc = 0x211330u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x211334: 0xaca00018
    ctx->pc = 0x211334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_211338:
    // 0x211338: 0x24c60001
    ctx->pc = 0x211338u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_21133c:
    // 0x21133c: 0xc7182a
    ctx->pc = 0x21133cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x211340: 0x1460ffee
    ctx->pc = 0x211340u;
    {
        const bool branch_taken_0x211340 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x211344u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 36));
        if (branch_taken_0x211340) {
            ctx->pc = 0x2112FCu;
            goto label_2112fc;
        }
    }
    ctx->pc = 0x211348u;
label_211348:
    // 0x211348: 0x3c030052
    ctx->pc = 0x211348u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x21134c: 0x2464c910
    ctx->pc = 0x21134cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294953232));
    // 0x211350: 0x8e031cbc
    ctx->pc = 0x211350u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x211354: 0x8e061cb8
    ctx->pc = 0x211354u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x211358: 0x8c72004c
    ctx->pc = 0x211358u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x21135c: 0x628c0
    ctx->pc = 0x21135cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x211360: 0xa63021
    ctx->pc = 0x211360u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x211364: 0x628c0
    ctx->pc = 0x211364u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x211368: 0xc52821
    ctx->pc = 0x211368u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x21136c: 0x52880
    ctx->pc = 0x21136cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x211370: 0x2a410009
    ctx->pc = 0x211370u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 9));
    // 0x211374: 0x10200003
    ctx->pc = 0x211374u;
    {
        const bool branch_taken_0x211374 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x211378u;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        if (branch_taken_0x211374) {
            ctx->pc = 0x211384u;
            goto label_211384;
        }
    }
    ctx->pc = 0x21137Cu;
    // 0x21137c: 0x10000003
    ctx->pc = 0x21137Cu;
    {
        const bool branch_taken_0x21137c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211380u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
        if (branch_taken_0x21137c) {
            ctx->pc = 0x21138Cu;
            goto label_21138c;
        }
    }
    ctx->pc = 0x211384u;
label_211384:
    // 0x211384: 0x24120009
    ctx->pc = 0x211384u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 9));
    // 0x211388: 0x8f848d68
    ctx->pc = 0x211388u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_21138c:
    // 0x21138c: 0x24030002
    ctx->pc = 0x21138cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x211390: 0x80840004
    ctx->pc = 0x211390u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x211394: 0x148300c8
    ctx->pc = 0x211394u;
    {
        const bool branch_taken_0x211394 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x211398u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 18)));
        if (branch_taken_0x211394) {
            ctx->pc = 0x2116B8u;
            goto label_2116b8;
        }
    }
    ctx->pc = 0x21139Cu;
    // 0x21139c: 0x10200036
    ctx->pc = 0x21139Cu;
    {
        const bool branch_taken_0x21139c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x2113A0u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21139c) {
            ctx->pc = 0x211478u;
            goto label_211478;
        }
    }
    ctx->pc = 0x2113A4u;
    // 0x2113a4: 0x21880
    ctx->pc = 0x2113a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2113a8: 0x621021
    ctx->pc = 0x2113a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2113ac: 0x21880
    ctx->pc = 0x2113acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2113b0: 0x3c020027
    ctx->pc = 0x2113b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x2113b4: 0x244233e0
    ctx->pc = 0x2113b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13280));
    // 0x2113b8: 0x438821
    ctx->pc = 0x2113b8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2113bc:
    // 0x2113bc: 0x4bede37d
    ctx->pc = 0x2113bcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2113c0: 0x4bedeb7d
    ctx->pc = 0x2113c0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2113c4: 0x4bedf37d
    ctx->pc = 0x2113c4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2113c8: 0x4bedfb7d
    ctx->pc = 0x2113c8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2113cc: 0xc66d0004
    ctx->pc = 0x2113ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2113d0: 0xc66e0008
    ctx->pc = 0x2113d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2113d4: 0xc06c202
    ctx->pc = 0x2113D4u;
    SET_GPR_U32(ctx, 31, 0x2113DCu);
    ctx->pc = 0x2113D8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2113DCu; }
        else if (ctx->pc != 0x2113DCu) { ctx->pc = 0x2113DCu; }
    }
    if (ctx->pc != 0x2113DCu) { return; }
    ctx->pc = 0x2113DCu;
    // 0x2113dc: 0x3c023aaa
    ctx->pc = 0x2113dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15018 << 16));
    // 0x2113e0: 0x344264c3
    ctx->pc = 0x2113e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 25795));
    // 0x2113e4: 0x44826000
    ctx->pc = 0x2113e4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2113e8: 0x0
    ctx->pc = 0x2113e8u;
    // NOP
    // 0x2113ec: 0x46006346
    ctx->pc = 0x2113ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2113f0: 0xc06c1b3
    ctx->pc = 0x2113F0u;
    SET_GPR_U32(ctx, 31, 0x2113F8u);
    ctx->pc = 0x2113F4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2113F8u; }
        else if (ctx->pc != 0x2113F8u) { ctx->pc = 0x2113F8u; }
    }
    if (ctx->pc != 0x2113F8u) { return; }
    ctx->pc = 0x2113F8u;
    // 0x2113f8: 0x4bede37d
    ctx->pc = 0x2113f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2113fc: 0x4bedeb7d
    ctx->pc = 0x2113fcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x211400: 0x4bedf37d
    ctx->pc = 0x211400u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x211404: 0x4bedfb7d
    ctx->pc = 0x211404u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x211408: 0xc06c09f
    ctx->pc = 0x211408u;
    SET_GPR_U32(ctx, 31, 0x211410u);
    ctx->pc = 0x21140Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211410u; }
        else if (ctx->pc != 0x211410u) { ctx->pc = 0x211410u; }
    }
    if (ctx->pc != 0x211410u) { return; }
    ctx->pc = 0x211410u;
    // 0x211410: 0xc62c0010
    ctx->pc = 0x211410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x211414: 0x46006346
    ctx->pc = 0x211414u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x211418: 0xc06c1b3
    ctx->pc = 0x211418u;
    SET_GPR_U32(ctx, 31, 0x211420u);
    ctx->pc = 0x21141Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211420u; }
        else if (ctx->pc != 0x211420u) { ctx->pc = 0x211420u; }
    }
    if (ctx->pc != 0x211420u) { return; }
    ctx->pc = 0x211420u;
    // 0x211420: 0xc6200010
    ctx->pc = 0x211420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211424: 0x3c023aaa
    ctx->pc = 0x211424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15018 << 16));
    // 0x211428: 0x344264c3
    ctx->pc = 0x211428u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 25795));
    // 0x21142c: 0x44820800
    ctx->pc = 0x21142cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x211430: 0xc06b218
    ctx->pc = 0x211430u;
    SET_GPR_U32(ctx, 31, 0x211438u);
    ctx->pc = 0x211434u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211438u; }
        else if (ctx->pc != 0x211438u) { ctx->pc = 0x211438u; }
    }
    if (ctx->pc != 0x211438u) { return; }
    ctx->pc = 0x211438u;
    // 0x211438: 0x8e240000
    ctx->pc = 0x211438u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21143c: 0xc085400
    ctx->pc = 0x21143Cu;
    SET_GPR_U32(ctx, 31, 0x211444u);
    ctx->pc = 0x211440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211444u; }
        else if (ctx->pc != 0x211444u) { ctx->pc = 0x211444u; }
    }
    if (ctx->pc != 0x211444u) { return; }
    ctx->pc = 0x211444u;
    // 0x211444: 0x4bff6b7e
    ctx->pc = 0x211444u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x211448: 0x4bfe6b7e
    ctx->pc = 0x211448u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21144c: 0x4bfd6b7e
    ctx->pc = 0x21144cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x211450: 0x4bfc6b7e
    ctx->pc = 0x211450u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x211454: 0x4bff6b7e
    ctx->pc = 0x211454u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x211458: 0x4bfe6b7e
    ctx->pc = 0x211458u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21145c: 0x4bfd6b7e
    ctx->pc = 0x21145cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x211460: 0x4bfc6b7e
    ctx->pc = 0x211460u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x211464: 0x26940001
    ctx->pc = 0x211464u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x211468: 0x292182a
    ctx->pc = 0x211468u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 18)));
    // 0x21146c: 0x1460ffd3
    ctx->pc = 0x21146Cu;
    {
        const bool branch_taken_0x21146c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x211470u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 36));
        if (branch_taken_0x21146c) {
            ctx->pc = 0x2113BCu;
            goto label_2113bc;
        }
    }
    ctx->pc = 0x211474u;
    // 0x211474: 0x0
    ctx->pc = 0x211474u;
    // NOP
label_211478:
    // 0x211478: 0x8e031cbc
    ctx->pc = 0x211478u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x21147c: 0x8c64004c
    ctx->pc = 0x21147cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x211480: 0x2881000a
    ctx->pc = 0x211480u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 10));
    // 0x211484: 0x1420008c
    ctx->pc = 0x211484u;
    {
        const bool branch_taken_0x211484 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x211484) {
            ctx->pc = 0x2116B8u;
            goto label_2116b8;
        }
    }
    ctx->pc = 0x21148Cu;
    // 0x21148c: 0x2882000a
    ctx->pc = 0x21148cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 10));
    // 0x211490: 0x1440000a
    ctx->pc = 0x211490u;
    {
        const bool branch_taken_0x211490 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x211494u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x211490) {
            ctx->pc = 0x2114BCu;
            goto label_2114bc;
        }
    }
    ctx->pc = 0x211498u;
    // 0x211498: 0x3c026666
    ctx->pc = 0x211498u;
    SET_GPR_U32(ctx, 2, ((uint32_t)26214 << 16));
    // 0x21149c: 0x34426667
    ctx->pc = 0x21149cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26215));
    // 0x2114a0: 0x440018
    ctx->pc = 0x2114a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x2114a4: 0x41fc2
    ctx->pc = 0x2114a4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 31));
    // 0x2114a8: 0x0
    ctx->pc = 0x2114a8u;
    // NOP
    // 0x2114ac: 0x1010
    ctx->pc = 0x2114acu;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2114b0: 0x21083
    ctx->pc = 0x2114b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2114b4: 0x431021
    ctx->pc = 0x2114b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2114b8: 0x2454060f
    ctx->pc = 0x2114b8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 1551));
label_2114bc:
    // 0x2114bc: 0x2402000a
    ctx->pc = 0x2114bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2114c0: 0x82001a
    ctx->pc = 0x2114c0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2114c4: 0x8e021cb8
    ctx->pc = 0x2114c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x2114c8: 0x0
    ctx->pc = 0x2114c8u;
    // NOP
    // 0x2114cc: 0x1810
    ctx->pc = 0x2114ccu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2114d0: 0x14400004
    ctx->pc = 0x2114D0u;
    {
        const bool branch_taken_0x2114d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2114D4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 1551));
        if (branch_taken_0x2114d0) {
            ctx->pc = 0x2114E4u;
            goto label_2114e4;
        }
    }
    ctx->pc = 0x2114D8u;
    // 0x2114d8: 0x24120041
    ctx->pc = 0x2114d8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 65));
    // 0x2114dc: 0x10000003
    ctx->pc = 0x2114DCu;
    {
        const bool branch_taken_0x2114dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2114E0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 341));
        if (branch_taken_0x2114dc) {
            ctx->pc = 0x2114ECu;
            goto label_2114ec;
        }
    }
    ctx->pc = 0x2114E4u;
label_2114e4:
    // 0x2114e4: 0x24120211
    ctx->pc = 0x2114e4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 529));
    // 0x2114e8: 0x24130155
    ctx->pc = 0x2114e8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 341));
label_2114ec:
    // 0x2114ec: 0x44920800
    ctx->pc = 0x2114ecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 18);
    // 0x2114f0: 0x44930000
    ctx->pc = 0x2114f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 19);
    // 0x2114f4: 0x0
    ctx->pc = 0x2114f4u;
    // NOP
    // 0x2114f8: 0x46800860
    ctx->pc = 0x2114f8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2114fc: 0x2402061a
    ctx->pc = 0x2114fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1562));
    // 0x211500: 0xafa200c8
    ctx->pc = 0x211500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x211504: 0x3c023c54
    ctx->pc = 0x211504u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15444 << 16));
    // 0x211508: 0x3447fdf4
    ctx->pc = 0x211508u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 65012));
    // 0x21150c: 0x3c063f80
    ctx->pc = 0x21150cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)16256 << 16));
    // 0x211510: 0x46800020
    ctx->pc = 0x211510u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x211514: 0xe7a1008c
    ctx->pc = 0x211514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x211518: 0x2403ffff
    ctx->pc = 0x211518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21151c: 0x24022200
    ctx->pc = 0x21151cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8704));
    // 0x211520: 0x27a40080
    ctx->pc = 0x211520u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x211524: 0x24050001
    ctx->pc = 0x211524u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x211528: 0xe7a00090
    ctx->pc = 0x211528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21152c: 0xafa70094
    ctx->pc = 0x21152cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 7));
    // 0x211530: 0xafa60098
    ctx->pc = 0x211530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x211534: 0xafa6009c
    ctx->pc = 0x211534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 6));
    // 0x211538: 0xafa000a4
    ctx->pc = 0x211538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x21153c: 0xafa000a0
    ctx->pc = 0x21153cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x211540: 0xafa600ac
    ctx->pc = 0x211540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x211544: 0xafa600a8
    ctx->pc = 0x211544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 6));
    // 0x211548: 0xafa000b0
    ctx->pc = 0x211548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x21154c: 0xafa600b4
    ctx->pc = 0x21154cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
    // 0x211550: 0xafa300b8
    ctx->pc = 0x211550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x211554: 0xc085c08
    ctx->pc = 0x211554u;
    SET_GPR_U32(ctx, 31, 0x21155Cu);
    ctx->pc = 0x211558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    ctx->pc = 0x217020u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPutCE__FP7SPR_ARGi_0x217020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21155Cu; }
        else if (ctx->pc != 0x21155Cu) { ctx->pc = 0x21155Cu; }
    }
    if (ctx->pc != 0x21155Cu) { return; }
    ctx->pc = 0x21155Cu;
    // 0x21155c: 0x1280003b
    ctx->pc = 0x21155Cu;
    {
        const bool branch_taken_0x21155c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x211560u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 16));
        if (branch_taken_0x21155c) {
            ctx->pc = 0x21164Cu;
            goto label_21164c;
        }
    }
    ctx->pc = 0x211564u;
    // 0x211564: 0x26420010
    ctx->pc = 0x211564u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 16));
    // 0x211568: 0x44820800
    ctx->pc = 0x211568u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21156c: 0x44930000
    ctx->pc = 0x21156cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 19);
    // 0x211570: 0x0
    ctx->pc = 0x211570u;
    // NOP
    // 0x211574: 0x46800860
    ctx->pc = 0x211574u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x211578: 0xafb40118
    ctx->pc = 0x211578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 20));
    // 0x21157c: 0x3c023c54
    ctx->pc = 0x21157cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15444 << 16));
    // 0x211580: 0x3447fdf4
    ctx->pc = 0x211580u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 65012));
    // 0x211584: 0x3c063f80
    ctx->pc = 0x211584u;
    SET_GPR_U32(ctx, 6, ((uint32_t)16256 << 16));
    // 0x211588: 0x2403ffff
    ctx->pc = 0x211588u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21158c: 0x46800020
    ctx->pc = 0x21158cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x211590: 0xe7a100dc
    ctx->pc = 0x211590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x211594: 0x24022200
    ctx->pc = 0x211594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8704));
    // 0x211598: 0x27a400d0
    ctx->pc = 0x211598u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 208));
    // 0x21159c: 0x24050001
    ctx->pc = 0x21159cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2115a0: 0xe7a000e0
    ctx->pc = 0x2115a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2115a4: 0xafa700e4
    ctx->pc = 0x2115a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 7));
    // 0x2115a8: 0xafa600e8
    ctx->pc = 0x2115a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 6));
    // 0x2115ac: 0xafa600ec
    ctx->pc = 0x2115acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
    // 0x2115b0: 0xafa000f4
    ctx->pc = 0x2115b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x2115b4: 0xafa000f0
    ctx->pc = 0x2115b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2115b8: 0xafa600fc
    ctx->pc = 0x2115b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
    // 0x2115bc: 0xafa600f8
    ctx->pc = 0x2115bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
    // 0x2115c0: 0xafa00100
    ctx->pc = 0x2115c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x2115c4: 0xafa60104
    ctx->pc = 0x2115c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
    // 0x2115c8: 0xafa30108
    ctx->pc = 0x2115c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x2115cc: 0xc085c08
    ctx->pc = 0x2115CCu;
    SET_GPR_U32(ctx, 31, 0x2115D4u);
    ctx->pc = 0x2115D0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    ctx->pc = 0x217020u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPutCE__FP7SPR_ARGi_0x217020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2115D4u; }
        else if (ctx->pc != 0x2115D4u) { ctx->pc = 0x2115D4u; }
    }
    if (ctx->pc != 0x2115D4u) { return; }
    ctx->pc = 0x2115D4u;
    // 0x2115d4: 0x26420020
    ctx->pc = 0x2115d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 32));
    // 0x2115d8: 0x44820800
    ctx->pc = 0x2115d8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2115dc: 0x44930000
    ctx->pc = 0x2115dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 19);
    // 0x2115e0: 0x0
    ctx->pc = 0x2115e0u;
    // NOP
    // 0x2115e4: 0x46800860
    ctx->pc = 0x2115e4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2115e8: 0xafb10168
    ctx->pc = 0x2115e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 17));
    // 0x2115ec: 0x3c023c54
    ctx->pc = 0x2115ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15444 << 16));
    // 0x2115f0: 0x3447fdf4
    ctx->pc = 0x2115f0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 65012));
    // 0x2115f4: 0x3c063f80
    ctx->pc = 0x2115f4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)16256 << 16));
    // 0x2115f8: 0x2403ffff
    ctx->pc = 0x2115f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2115fc: 0x46800020
    ctx->pc = 0x2115fcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x211600: 0xe7a1012c
    ctx->pc = 0x211600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x211604: 0x24022200
    ctx->pc = 0x211604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8704));
    // 0x211608: 0x27a40120
    ctx->pc = 0x211608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 288));
    // 0x21160c: 0x24050001
    ctx->pc = 0x21160cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x211610: 0xe7a00130
    ctx->pc = 0x211610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x211614: 0xafa70134
    ctx->pc = 0x211614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 7));
    // 0x211618: 0xafa60138
    ctx->pc = 0x211618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x21161c: 0xafa6013c
    ctx->pc = 0x21161cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x211620: 0xafa00144
    ctx->pc = 0x211620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
    // 0x211624: 0xafa00140
    ctx->pc = 0x211624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x211628: 0xafa6014c
    ctx->pc = 0x211628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 6));
    // 0x21162c: 0xafa60148
    ctx->pc = 0x21162cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 6));
    // 0x211630: 0xafa00150
    ctx->pc = 0x211630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x211634: 0xafa60154
    ctx->pc = 0x211634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 6));
    // 0x211638: 0xafa30158
    ctx->pc = 0x211638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x21163c: 0xc085c08
    ctx->pc = 0x21163Cu;
    SET_GPR_U32(ctx, 31, 0x211644u);
    ctx->pc = 0x211640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    ctx->pc = 0x217020u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPutCE__FP7SPR_ARGi_0x217020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211644u; }
        else if (ctx->pc != 0x211644u) { ctx->pc = 0x211644u; }
    }
    if (ctx->pc != 0x211644u) { return; }
    ctx->pc = 0x211644u;
    // 0x211644: 0x1000001d
    ctx->pc = 0x211644u;
    {
        const bool branch_taken_0x211644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211648u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
        if (branch_taken_0x211644) {
            ctx->pc = 0x2116BCu;
            goto label_2116bc;
        }
    }
    ctx->pc = 0x21164Cu;
label_21164c:
    // 0x21164c: 0x44820800
    ctx->pc = 0x21164cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x211650: 0x44930000
    ctx->pc = 0x211650u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 19);
    // 0x211654: 0x0
    ctx->pc = 0x211654u;
    // NOP
    // 0x211658: 0x46800860
    ctx->pc = 0x211658u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x21165c: 0xafb101b8
    ctx->pc = 0x21165cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 17));
    // 0x211660: 0x3c023c54
    ctx->pc = 0x211660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15444 << 16));
    // 0x211664: 0x3447fdf4
    ctx->pc = 0x211664u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 65012));
    // 0x211668: 0x3c063f80
    ctx->pc = 0x211668u;
    SET_GPR_U32(ctx, 6, ((uint32_t)16256 << 16));
    // 0x21166c: 0x2403ffff
    ctx->pc = 0x21166cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211670: 0x46800020
    ctx->pc = 0x211670u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x211674: 0xe7a1017c
    ctx->pc = 0x211674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x211678: 0x24022200
    ctx->pc = 0x211678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8704));
    // 0x21167c: 0x27a40170
    ctx->pc = 0x21167cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 368));
    // 0x211680: 0x24050001
    ctx->pc = 0x211680u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x211684: 0xe7a00180
    ctx->pc = 0x211684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x211688: 0xafa70184
    ctx->pc = 0x211688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 7));
    // 0x21168c: 0xafa60188
    ctx->pc = 0x21168cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 6));
    // 0x211690: 0xafa6018c
    ctx->pc = 0x211690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 6));
    // 0x211694: 0xafa00194
    ctx->pc = 0x211694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 0));
    // 0x211698: 0xafa00190
    ctx->pc = 0x211698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x21169c: 0xafa6019c
    ctx->pc = 0x21169cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 6));
    // 0x2116a0: 0xafa60198
    ctx->pc = 0x2116a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 6));
    // 0x2116a4: 0xafa001a0
    ctx->pc = 0x2116a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x2116a8: 0xafa601a4
    ctx->pc = 0x2116a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 6));
    // 0x2116ac: 0xafa301a8
    ctx->pc = 0x2116acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
    // 0x2116b0: 0xc085c08
    ctx->pc = 0x2116B0u;
    SET_GPR_U32(ctx, 31, 0x2116B8u);
    ctx->pc = 0x2116B4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    ctx->pc = 0x217020u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPutCE__FP7SPR_ARGi_0x217020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2116B8u; }
        else if (ctx->pc != 0x2116B8u) { ctx->pc = 0x2116B8u; }
    }
    if (ctx->pc != 0x2116B8u) { return; }
    ctx->pc = 0x2116B8u;
label_2116b8:
    // 0x2116b8: 0x8f848d68
    ctx->pc = 0x2116b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_2116bc:
    // 0x2116bc: 0x24030002
    ctx->pc = 0x2116bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2116c0: 0x80840004
    ctx->pc = 0x2116c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2116c4: 0x10830003
    ctx->pc = 0x2116C4u;
    {
        const bool branch_taken_0x2116c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x2116C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2116c4) {
            ctx->pc = 0x2116D4u;
            goto label_2116d4;
        }
    }
    ctx->pc = 0x2116CCu;
    // 0x2116cc: 0x14830094
    ctx->pc = 0x2116CCu;
    {
        const bool branch_taken_0x2116cc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x2116cc) {
            ctx->pc = 0x211920u;
            goto label_211920;
        }
    }
    ctx->pc = 0x2116D4u;
label_2116d4:
    // 0x2116d4: 0x8e041cbc
    ctx->pc = 0x2116d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x2116d8: 0x8c830050
    ctx->pc = 0x2116d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2116dc: 0x10600090
    ctx->pc = 0x2116DCu;
    {
        const bool branch_taken_0x2116dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2116dc) {
            ctx->pc = 0x211920u;
            goto label_211920;
        }
    }
    ctx->pc = 0x2116E4u;
    // 0x2116e4: 0x8f838b68
    ctx->pc = 0x2116e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x2116e8: 0x1060008d
    ctx->pc = 0x2116E8u;
    {
        const bool branch_taken_0x2116e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2116e8) {
            ctx->pc = 0x211920u;
            goto label_211920;
        }
    }
    ctx->pc = 0x2116F0u;
    // 0x2116f0: 0x8c830058
    ctx->pc = 0x2116f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2116f4: 0x2402003c
    ctx->pc = 0x2116f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2116f8: 0x62001a
    ctx->pc = 0x2116f8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2116fc: 0x0
    ctx->pc = 0x2116fcu;
    // NOP
    // 0x211700: 0x0
    ctx->pc = 0x211700u;
    // NOP
    // 0x211704: 0x1010
    ctx->pc = 0x211704u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x211708: 0x2841002d
    ctx->pc = 0x211708u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 45));
    // 0x21170c: 0x10200066
    ctx->pc = 0x21170Cu;
    {
        const bool branch_taken_0x21170c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x21170c) {
            ctx->pc = 0x2118A8u;
            goto label_2118a8;
        }
    }
    ctx->pc = 0x211714u;
    // 0x211714: 0x8e021cb8
    ctx->pc = 0x211714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x211718: 0x14400007
    ctx->pc = 0x211718u;
    {
        const bool branch_taken_0x211718 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21171Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)17339 << 16));
        if (branch_taken_0x211718) {
            ctx->pc = 0x211738u;
            goto label_211738;
        }
    }
    ctx->pc = 0x211720u;
    // 0x211720: 0x3c024120
    ctx->pc = 0x211720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16672 << 16));
    // 0x211724: 0x4482a800
    ctx->pc = 0x211724u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 2);
    // 0x211728: 0x3c02434a
    ctx->pc = 0x211728u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17226 << 16));
    // 0x21172c: 0x4482a000
    ctx->pc = 0x21172cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x211730: 0x10000004
    ctx->pc = 0x211730u;
    {
        const bool branch_taken_0x211730 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x211730) {
            ctx->pc = 0x211744u;
            goto label_211744;
        }
    }
    ctx->pc = 0x211738u;
label_211738:
    // 0x211738: 0x4482a800
    ctx->pc = 0x211738u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 2);
    // 0x21173c: 0x0
    ctx->pc = 0x21173cu;
    // NOP
    // 0x211740: 0x4600ad06
    ctx->pc = 0x211740u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_211744:
    // 0x211744: 0x3c010050
    ctx->pc = 0x211744u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x211748: 0x8024fec5
    ctx->pc = 0x211748u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x21174c: 0x3c02002c
    ctx->pc = 0x21174cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x211750: 0x24430550
    ctx->pc = 0x211750u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1360));
    // 0x211754: 0x3c023c65
    ctx->pc = 0x211754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15461 << 16));
    // 0x211758: 0x34476042
    ctx->pc = 0x211758u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 24642));
    // 0x21175c: 0x3c08433f
    ctx->pc = 0x21175cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)17215 << 16));
    // 0x211760: 0x41080
    ctx->pc = 0x211760u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x211764: 0x621021
    ctx->pc = 0x211764u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211768: 0x8c490000
    ctx->pc = 0x211768u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21176c: 0x3c063f80
    ctx->pc = 0x21176cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)16256 << 16));
    // 0x211770: 0x2403ffff
    ctx->pc = 0x211770u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211774: 0x27a401c0
    ctx->pc = 0x211774u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 448));
    // 0x211778: 0x24050001
    ctx->pc = 0x211778u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21177c: 0xafa90208
    ctx->pc = 0x21177cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 9));
    // 0x211780: 0xe7b501cc
    ctx->pc = 0x211780u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x211784: 0xafa801d0
    ctx->pc = 0x211784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 8));
    // 0x211788: 0xafa701d4
    ctx->pc = 0x211788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 7));
    // 0x21178c: 0xafa601d8
    ctx->pc = 0x21178cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 6));
    // 0x211790: 0xafa601dc
    ctx->pc = 0x211790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 6));
    // 0x211794: 0xafa001e4
    ctx->pc = 0x211794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
    // 0x211798: 0xafa001e0
    ctx->pc = 0x211798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 0));
    // 0x21179c: 0xafa601ec
    ctx->pc = 0x21179cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
    // 0x2117a0: 0xafa601e8
    ctx->pc = 0x2117a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 6));
    // 0x2117a4: 0xafa001f0
    ctx->pc = 0x2117a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x2117a8: 0xafa601f4
    ctx->pc = 0x2117a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 6));
    // 0x2117ac: 0x24022000
    ctx->pc = 0x2117acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2117b0: 0xafa301f8
    ctx->pc = 0x2117b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 3));
    // 0x2117b4: 0xc085c08
    ctx->pc = 0x2117B4u;
    SET_GPR_U32(ctx, 31, 0x2117BCu);
    ctx->pc = 0x2117B8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
    ctx->pc = 0x217020u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPutCE__FP7SPR_ARGi_0x217020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117BCu; }
        else if (ctx->pc != 0x2117BCu) { ctx->pc = 0x2117BCu; }
    }
    if (ctx->pc != 0x2117BCu) { return; }
    ctx->pc = 0x2117BCu;
    // 0x2117bc: 0x8e021cbc
    ctx->pc = 0x2117bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x2117c0: 0x8c420058
    ctx->pc = 0x2117c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2117c4: 0x28420064
    ctx->pc = 0x2117c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 100));
    // 0x2117c8: 0x14400037
    ctx->pc = 0x2117C8u;
    {
        const bool branch_taken_0x2117c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2117CCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x2117c8) {
            ctx->pc = 0x2118A8u;
            goto label_2118a8;
        }
    }
    ctx->pc = 0x2117D0u;
    // 0x2117d0: 0x8024fec5
    ctx->pc = 0x2117d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x2117d4: 0x3c02002c
    ctx->pc = 0x2117d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x2117d8: 0x24430570
    ctx->pc = 0x2117d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1392));
    // 0x2117dc: 0x3c023c65
    ctx->pc = 0x2117dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15461 << 16));
    // 0x2117e0: 0x34476042
    ctx->pc = 0x2117e0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 24642));
    // 0x2117e4: 0x3c08437f
    ctx->pc = 0x2117e4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)17279 << 16));
    // 0x2117e8: 0x41080
    ctx->pc = 0x2117e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2117ec: 0x621021
    ctx->pc = 0x2117ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2117f0: 0x8c490000
    ctx->pc = 0x2117f0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2117f4: 0x3c063f80
    ctx->pc = 0x2117f4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)16256 << 16));
    // 0x2117f8: 0x2403ffff
    ctx->pc = 0x2117f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2117fc: 0x27a40210
    ctx->pc = 0x2117fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 528));
    // 0x211800: 0x24050001
    ctx->pc = 0x211800u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x211804: 0xafa90258
    ctx->pc = 0x211804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 9));
    // 0x211808: 0xe7b5021c
    ctx->pc = 0x211808u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x21180c: 0xafa80220
    ctx->pc = 0x21180cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 8));
    // 0x211810: 0xafa70224
    ctx->pc = 0x211810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 7));
    // 0x211814: 0xafa60228
    ctx->pc = 0x211814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 6));
    // 0x211818: 0xafa6022c
    ctx->pc = 0x211818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 6));
    // 0x21181c: 0xafa00234
    ctx->pc = 0x21181cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
    // 0x211820: 0xafa00230
    ctx->pc = 0x211820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
    // 0x211824: 0xafa6023c
    ctx->pc = 0x211824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 6));
    // 0x211828: 0xafa60238
    ctx->pc = 0x211828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 6));
    // 0x21182c: 0xafa00240
    ctx->pc = 0x21182cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
    // 0x211830: 0xafa60244
    ctx->pc = 0x211830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 6));
    // 0x211834: 0x24022000
    ctx->pc = 0x211834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x211838: 0xafa30248
    ctx->pc = 0x211838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
    // 0x21183c: 0xc085c08
    ctx->pc = 0x21183Cu;
    SET_GPR_U32(ctx, 31, 0x211844u);
    ctx->pc = 0x211840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    ctx->pc = 0x217020u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPutCE__FP7SPR_ARGi_0x217020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211844u; }
        else if (ctx->pc != 0x211844u) { ctx->pc = 0x211844u; }
    }
    if (ctx->pc != 0x211844u) { return; }
    ctx->pc = 0x211844u;
    // 0x211844: 0x24020cbe
    ctx->pc = 0x211844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3262));
    // 0x211848: 0xafa202a8
    ctx->pc = 0x211848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
    // 0x21184c: 0x3c02438f
    ctx->pc = 0x21184cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17295 << 16));
    // 0x211850: 0xe7b4026c
    ctx->pc = 0x211850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
    // 0x211854: 0x34428000
    ctx->pc = 0x211854u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x211858: 0xafa20270
    ctx->pc = 0x211858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x21185c: 0x3c023c65
    ctx->pc = 0x21185cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15461 << 16));
    // 0x211860: 0x34426042
    ctx->pc = 0x211860u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 24642));
    // 0x211864: 0xafa20274
    ctx->pc = 0x211864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
    // 0x211868: 0x3c023f80
    ctx->pc = 0x211868u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x21186c: 0xafa20278
    ctx->pc = 0x21186cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 2));
    // 0x211870: 0xafa2027c
    ctx->pc = 0x211870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 2));
    // 0x211874: 0xafa00284
    ctx->pc = 0x211874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 0));
    // 0x211878: 0xafa00280
    ctx->pc = 0x211878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
    // 0x21187c: 0xafa2028c
    ctx->pc = 0x21187cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
    // 0x211880: 0xafa20288
    ctx->pc = 0x211880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
    // 0x211884: 0xafa00290
    ctx->pc = 0x211884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 0));
    // 0x211888: 0xafa20294
    ctx->pc = 0x211888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    // 0x21188c: 0x2402ffff
    ctx->pc = 0x21188cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211890: 0xafa20298
    ctx->pc = 0x211890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
    // 0x211894: 0x24022000
    ctx->pc = 0x211894u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x211898: 0xafa2029c
    ctx->pc = 0x211898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
    // 0x21189c: 0x27a40260
    ctx->pc = 0x21189cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 608));
    // 0x2118a0: 0xc085c08
    ctx->pc = 0x2118A0u;
    SET_GPR_U32(ctx, 31, 0x2118A8u);
    ctx->pc = 0x2118A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x217020u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPutCE__FP7SPR_ARGi_0x217020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118A8u; }
        else if (ctx->pc != 0x2118A8u) { ctx->pc = 0x2118A8u; }
    }
    if (ctx->pc != 0x2118A8u) { return; }
    ctx->pc = 0x2118A8u;
label_2118a8:
    // 0x2118a8: 0x8e021cbc
    ctx->pc = 0x2118a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x2118ac: 0x8c430058
    ctx->pc = 0x2118acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2118b0: 0x10600012
    ctx->pc = 0x2118B0u;
    {
        const bool branch_taken_0x2118b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2118b0) {
            ctx->pc = 0x2118FCu;
            goto label_2118fc;
        }
    }
    ctx->pc = 0x2118B8u;
    // 0x2118b8: 0x82a2000e
    ctx->pc = 0x2118b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x2118bc: 0x1040000f
    ctx->pc = 0x2118BCu;
    {
        const bool branch_taken_0x2118bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2118bc) {
            ctx->pc = 0x2118FCu;
            goto label_2118fc;
        }
    }
    ctx->pc = 0x2118C4u;
    // 0x2118c4: 0x86a2000c
    ctx->pc = 0x2118c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2118c8: 0x1040000c
    ctx->pc = 0x2118C8u;
    {
        const bool branch_taken_0x2118c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2118c8) {
            ctx->pc = 0x2118FCu;
            goto label_2118fc;
        }
    }
    ctx->pc = 0x2118D0u;
    // 0x2118d0: 0x28610064
    ctx->pc = 0x2118d0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 100));
    // 0x2118d4: 0x10200009
    ctx->pc = 0x2118D4u;
    {
        const bool branch_taken_0x2118d4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x2118d4) {
            ctx->pc = 0x2118FCu;
            goto label_2118fc;
        }
    }
    ctx->pc = 0x2118DCu;
    // 0x2118dc: 0x3c020051
    ctx->pc = 0x2118dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x2118e0: 0x244434f0
    ctx->pc = 0x2118e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x2118e4: 0x3c020002
    ctx->pc = 0x2118e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x2118e8: 0x34450017
    ctx->pc = 0x2118e8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 23));
    // 0x2118ec: 0x70003628
    ctx->pc = 0x2118ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2118f0: 0x70003e28
    ctx->pc = 0x2118f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2118f4: 0xc086018
    ctx->pc = 0x2118F4u;
    SET_GPR_U32(ctx, 31, 0x2118FCu);
    ctx->pc = 0x2118F8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118FCu; }
        else if (ctx->pc != 0x2118FCu) { ctx->pc = 0x2118FCu; }
    }
    if (ctx->pc != 0x2118FCu) { return; }
    ctx->pc = 0x2118FCu;
label_2118fc:
    // 0x2118fc: 0x3c020050
    ctx->pc = 0x2118fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x211900: 0xc07ce18
    ctx->pc = 0x211900u;
    SET_GPR_U32(ctx, 31, 0x211908u);
    ctx->pc = 0x211904u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211908u; }
        else if (ctx->pc != 0x211908u) { ctx->pc = 0x211908u; }
    }
    if (ctx->pc != 0x211908u) { return; }
    ctx->pc = 0x211908u;
    // 0x211908: 0x1c400005
    ctx->pc = 0x211908u;
    {
        const bool branch_taken_0x211908 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x211908) {
            ctx->pc = 0x211920u;
            goto label_211920;
        }
    }
    ctx->pc = 0x211910u;
    // 0x211910: 0x8e041cbc
    ctx->pc = 0x211910u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x211914: 0x8c830058
    ctx->pc = 0x211914u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x211918: 0x24630001
    ctx->pc = 0x211918u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x21191c: 0xac830058
    ctx->pc = 0x21191cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
label_211920:
    // 0x211920: 0x7bbf0070
    ctx->pc = 0x211920u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211924: 0x7bb50060
    ctx->pc = 0x211924u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211928: 0x7bb40050
    ctx->pc = 0x211928u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21192c: 0x7bb30040
    ctx->pc = 0x21192cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211930: 0x7bb20030
    ctx->pc = 0x211930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211934: 0x7bb10020
    ctx->pc = 0x211934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211938: 0x7bb00010
    ctx->pc = 0x211938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21193c: 0xc7b50004
    ctx->pc = 0x21193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x211940: 0xc7b40000
    ctx->pc = 0x211940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x211944: 0x3e00008
    ctx->pc = 0x211944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211948u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 688));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2112C8u: goto label_2112c8;
            case 0x2112FCu: goto label_2112fc;
            case 0x211338u: goto label_211338;
            case 0x21133Cu: goto label_21133c;
            case 0x211348u: goto label_211348;
            case 0x211384u: goto label_211384;
            case 0x21138Cu: goto label_21138c;
            case 0x2113BCu: goto label_2113bc;
            case 0x211478u: goto label_211478;
            case 0x2114BCu: goto label_2114bc;
            case 0x2114E4u: goto label_2114e4;
            case 0x2114ECu: goto label_2114ec;
            case 0x21164Cu: goto label_21164c;
            case 0x2116B8u: goto label_2116b8;
            case 0x2116BCu: goto label_2116bc;
            case 0x2116D4u: goto label_2116d4;
            case 0x211738u: goto label_211738;
            case 0x211744u: goto label_211744;
            case 0x2118A8u: goto label_2118a8;
            case 0x2118FCu: goto label_2118fc;
            case 0x211920u: goto label_211920;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21194Cu;
}
